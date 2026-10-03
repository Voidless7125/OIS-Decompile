#!/usr/bin/env python3
"""Bootstrap clean C++ class declarations from the Ghidra prototypes.

Reads   Decompile C/ois.exe/game/*.h   (one prototype per method)
Writes  reconstruct/include/ois/<Class>.hpp, ois_fwd.hpp, ois.hpp,
        free_functions.hpp, GENERATED_REPORT.md

This is a ONE-TIME BOOTSTRAP: the generated headers become the hand-edited
source of truth (member layouts, virtuals, const-correctness, real parameter
types are all added by hand later).  The script therefore refuses to touch a
header that already exists unless --force is given.

What it does to each Ghidra prototype
  * `Class::method(Class *this, ...)`  ->  member function (drops `this`)
  * `__cdecl` + class scope            ->  static member function
  * `Class::Class` / `Class::~Class`   ->  constructor / destructor
  * basic_string<>                     ->  std::string
  * vector<>                           ->  ghidra::vector (opaque placeholder)
  * parameter names that are C++ keywords are renamed
  * template instances, anonymous scopes and compiler-generated names
    (`vector_deleting_destructor`, dynamic initializers, ...) are not emitted
    and are listed in GENERATED_REPORT.md instead
"""

import argparse
import collections
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
SRC = REPO / "Decompile C" / "ois.exe"
OUT = REPO / "reconstruct" / "include" / "ois"

CONVS = ("__thiscall", "__cdecl", "__stdcall", "__fastcall")
CPP_KEYWORDS = {
    "alignas", "alignof", "and", "asm", "auto", "bool", "break", "case", "catch",
    "char", "class", "const", "continue", "default", "delete", "do", "double",
    "else", "enum", "explicit", "export", "extern", "false", "float", "for",
    "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace",
    "new", "not", "operator", "or", "private", "protected", "public", "register",
    "return", "short", "signed", "sizeof", "static", "struct", "switch",
    "template", "this", "throw", "true", "try", "typedef", "typeid", "typename",
    "union", "unsigned", "using", "virtual", "void", "volatile", "while", "xor",
    "NULL", "near", "far", "small",
}
BUILTIN_TYPES = {
    "void", "bool", "char", "short", "int", "long", "float", "double", "signed",
    "unsigned", "const", "volatile", "struct", "class", "enum", "union",
    "wchar_t", "size_t", "ptrdiff_t",
    # provided by ghidra_compat.h
    "undefined", "undefined1", "undefined2", "undefined3", "undefined4", "undefined8",
    "byte", "word", "dword", "uint", "uchar", "ushort", "ulong", "longlong",
    "ulonglong", "sbyte", "pointer32", "__uint8", "__ehstate_t",
    "va_list", "u_long", "u_short", "u_int", "u_char",
}
ID = re.compile(r"[A-Za-z_]\w*")
# C runtime functions that Ghidra found inside the executable; the real ones come from libc
LIBC_NAMES = {"memset", "malloc", "memchr", "memcpy", "memmove", "memcmp", "free", "realloc",
              "calloc", "strlen", "strcmp", "strncmp", "strcpy", "strncpy", "strchr", "strstr",
              "atoi", "atof", "abs", "fabs", "sqrt", "pow", "sin", "cos", "tan", "atan2", "floor",
              "ceil", "rand", "srand", "time", "exit", "abort", "printf", "sprintf", "snprintf",
              "fopen", "fclose", "fread", "fwrite", "qsort", "toupper", "tolower", "isspace"}
# cocos2d types that are nested inside another class (found by clang, not by the scan)
NESTED_COCOS = {"KeyCode": "cocos2d::EventKeyboard::KeyCode"}


# ---- small parsing helpers (mirrors split_decompile.py) -------------------

def split_top(s, sep):
    out, depth, cur = [], 0, ""
    for c in s:
        if c in "(<[":
            depth += 1
        elif c in ")>]":
            depth -= 1
        if c == sep and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += c
    out.append(cur)
    return out


def split_scope(name):
    parts, cur, angle, quoted, i = [], "", 0, False, 0
    while i < len(name):
        c = name[i]
        if c == "`":
            quoted = True
        elif c == "'" and quoted:
            quoted = False
        elif not quoted:
            if c == "<":
                angle += 1
            elif c == ">":
                angle -= 1
            elif c == ":" and name.startswith("::", i) and angle == 0:
                parts.append(cur)
                cur = ""
                i += 2
                continue
        cur += c
        i += 1
    parts.append(cur)
    return parts


def parse_proto(line):
    """-> (ret, conv, qualified_name, params_text) or None."""
    s = line.strip().rstrip(";").rstrip()
    if not s.endswith(")"):
        return None
    depth, i = 0, len(s) - 1
    while i >= 0:
        if s[i] == ")":
            depth += 1
        elif s[i] == "(":
            depth -= 1
            if depth == 0:
                break
        i -= 1
    params, pre = s[i + 1:-1], s[:i].rstrip()
    k, angle, quoted = len(pre), 0, False
    while k > 0:
        c = pre[k - 1]
        if c == "'" and not quoted:
            quoted = True
        elif c == "`" and quoted:
            quoted = False
        elif not quoted:
            if c == ">":
                angle += 1
            elif c == "<":
                angle -= 1
            elif angle == 0 and c in " *&":
                break
        k -= 1
    name, head = pre[k:], pre[:k].rstrip()
    if head.endswith("operator"):
        name = "operator " + name
        head = head[:-len("operator")].rstrip()
    conv = ""
    for cv in CONVS:
        if head.endswith(cv):
            conv, head = cv, head[:-len(cv)].rstrip()
    if pre[k - 1:k] in ("*", "&") and not head.endswith(("*", "&")):
        head += pre[k - 1]
    return head, conv, name, params


# ---- type mapping ----------------------------------------------------------

class Types:
    def __init__(self, game_classes, cocos_names):
        self.game = game_classes
        self.cocos = cocos_names
        self.unknown = collections.Counter()
        self.used_cocos = set()
        self.used_game = set()

    def map(self, t):
        t = re.sub(r"\b(struct|class|enum|union)\s+", "", t)
        t = t.replace("basic_string<>", "std::string")
        t = t.replace("std::basic_string<>", "std::string")
        t = re.sub(r"\bvector<>", "ghidra::vector", t)
        t = re.sub(r"\bSingleton<>", "ghidra::Singleton<void>", t)
        t = re.sub(r"\b_Func_class<>", "ghidra::func_class", t)

        def repl(m):
            w = m.group(0)
            if w in BUILTIN_TYPES or w in ("std", "ghidra", "string", "vector", "Singleton", "func_class") or w in CPP_KEYWORDS:
                return w
            if w in self.game:
                self.used_game.add(w)
                return w
            if w in self.cocos:
                self.used_cocos.add(w)
                return w
            self.unknown[w] += 1
            return w
        # do not touch identifiers following '::' (already qualified)
        return re.sub(r"(?<![:\w])[A-Za-z_]\w*", repl, t)


def fix_param(p, types, is_first_this):
    p = p.strip()
    if p in ("", "void"):
        return None
    if p == "...":
        return "..."
    m = re.search(r"\(\*\s*(\w+)\s*\)", p)           # function pointer
    if m:
        name = m.group(1)
        newname = "_" + name if name in CPP_KEYWORDS else name
        return types.map(p.replace(m.group(0), f"(*{newname})"))
    m = re.match(r"^(.*?[\s\*&])(\w+)((?:\[\d*\])?)$", p)
    if m and m.group(2) not in BUILTIN_TYPES and ID.fullmatch(m.group(2)) and m.group(1).strip():
        ty, name, arr = m.groups()
        if name in CPP_KEYWORDS:
            name = "_" + name
        return f"{types.map(ty).rstrip()} {name}{arr}"
    return types.map(p)


# ---- function bodies -------------------------------------------------------

SRC_OUT = REPO / "reconstruct" / "src"


def lower_body(lines, is_ctor_or_dtor, nonstatic, classes):
    import ghidra_lower
    return ghidra_lower.lower(lines, is_ctor_or_dtor, nonstatic, classes)


def write_bodies(emitted, force, nonstatic, classes, cocos_names):
    used_ids = set()
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    import split_decompile as sd
    SRC_OUT.mkdir(parents=True, exist_ok=True)
    total = placed = 0
    for cls, defs in sorted(emitted.items()):
        cfile = SRC / "game" / f"{cls}.c"
        if not cfile.exists():
            continue
        lines = cfile.read_text(encoding="utf-8", errors="surrogateescape").split("\n")
        parts = []
        for sig, brace, end in sd.find_functions(lines):
            sigtext = " ".join(l.strip() for l in lines[sig:brace - 1])
            p = parse_proto(sigtext)
            total += 1
            if not p or (p[2], p[3]) not in defs:
                continue
            defhead, cd = defs[(p[2], p[3])]
            start = sig
            while start - 1 >= 0 and lines[start - 1].startswith("//"):
                start -= 1
            comments = lines[start:sig]
            body = lower_body(lines[brace:end + 1], cd, nonstatic, classes)
            used_ids.update(re.findall(r"[A-Za-z_]\w*", "\n".join(body)))
            parts.append("\n".join(comments + [f"// Ghidra: {sigtext}", defhead, ""] + body))
            placed += 1
        if parts:
            path = SRC_OUT / f"{cls}.cpp"
            if path.exists() and not force:
                continue
            path.write_text('// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.\n'
                            '#include "ois/ois.hpp"\n#include "ois/ois_globals.hpp"\n#include "ois/ghidra_lib_stubs.hpp"\n\n\n'
                            + "\n\n\n".join(parts) + "\n")
    import ghidra_lower
    ghidra_lower.write_lib_stubs(OUT / "ghidra_lib_stubs.hpp")
    print(f"[bodies] {placed} function bodies written (of {total} functions in the class files)")
    print("[lowering] " + ", ".join(f"{k}: {v}" for k, v in sorted(ghidra_lower.STATS.items())))
    return used_ids


def prune_fwd(path, cocos):
    """Drop `using`/struct lines in ois_fwd.hpp that clang rejects.

    The cocos2d name scan is regex based, so it also picks up nested names
    (Mode, State, ...) and the unknown-type list contains names that really
    come from system headers (DWORD, FILE, ...).  Asking clang is the reliable
    way to tell; each rejected line is removed and recorded at the end of the file.
    """
    import subprocess
    import compile_check
    removed = []
    for _ in range(6):
        r = subprocess.run(["clang++", *compile_check.flags(cocos), "-fsyntax-only", "-x", "c++", str(path)],
                           capture_output=True, text=True)
        bad = sorted({int(m.group(1)) for m in re.finditer(re.escape(path.name) + r":(\d+):\d+: error", r.stderr)})
        if not bad:
            break
        lines = path.read_text().split("\n")
        for n in bad:
            removed.append(lines[n - 1])
            lines[n - 1] = ""
        path.write_text("\n".join(lines))
    if removed:
        print(f"[fwd] pruned {len(removed)} declarations clang rejected")


def add_static_members(class_names, declared_methods):
    """Ghidra writes class-scope globals as `Class::name`; declare them as statics."""
    gtypes = {}
    gpath = OUT / "ois_globals.hpp"
    if gpath.exists():
        for m in re.finditer(r"^extern (.+?)\s+\**(\w+)(?:\[\d*\])?;$", gpath.read_text(), re.M):
            gtypes[m.group(2)] = m.group(1)
    refs = collections.defaultdict(set)
    pat = re.compile(r"\b(" + "|".join(map(re.escape, sorted(class_names))) + r")::(~?[A-Za-z_]\w*)\b(?!\s*[(<:])")
    for cpp in SRC_OUT.glob("*.cpp"):
        for line in cpp.read_text(errors="replace").split("\n"):
            if line.startswith(("//", "#")):
                continue
            for c, n in pat.findall(line):
                if n not in declared_methods.get(c, ()) and not n.startswith("~") and n != c and n not in CPP_KEYWORDS:
                    refs[c].add(n)
    added = 0
    for c, names in refs.items():
        hp = OUT / f"{c}.hpp"
        if not hp.exists():
            continue
        text = hp.read_text()
        decl = "".join(f"    static {gtypes.get(n, 'undefined4')} {n};  // data symbol used as {c}::{n}\n"
                       for n in sorted(names) if f" {n};" not in text and f"*{n};" not in text)
        if decl and "\n};" in text:
            head, tail = text.rsplit("\n};", 1)
            hp.write_text(head + "\n" + decl + "};" + tail)
            added += decl.count("\n")
    print(f"[statics] {added} static data members added to class headers")


def write_globals(types, force, taken):
    """extern declarations for the data symbols in globals.c."""
    path = OUT / "ois_globals.hpp"
    if path.exists() and not force:
        return
    seen, lines, skipped = {}, [], 0
    for l in (SRC / "globals.c").read_text(errors="replace").split("\n"):
        m = re.match(r"^([A-Za-z_][\w\s\*:<>,\[\]]*?[\s\*])([A-Za-z_]\w*)((?:\[\d*\])?);$", l)
        if not m or "`" in l or l.startswith("#include"):
            skipped += 1
            continue
        ty, name, arr = m.groups()
        if name in seen or name in CPP_KEYWORDS or name in taken:
            skipped += 1
            continue
        mapped = types.map(ty.rstrip())
        if "<" in mapped or "[" in mapped:
            skipped += 1
            continue
        seen[name] = mapped
        lines.append(f"extern {mapped} {name}{arr};")
    path.write_text("// GENERATED extern declarations for Ghidra data symbols (types are guesses).\n"
                    "#pragma once\n#include \"ois/ois_fwd.hpp\"\n\n" + "\n".join(lines) + "\n")
    print(f"[globals] {len(lines)} extern declarations ({skipped} lines skipped)")


# ---- main ------------------------------------------------------------------

def collect_cocos_names(root):
    names = set()
    pat = re.compile(r"^\s*(?:class|struct)\s+(?:CC_[A-Z_]+\s+)?([A-Za-z_]\w*)\s*(?::|\{|$)", re.M)
    enum = re.compile(r"^\s*enum\s+(?:class\s+)?(?:CC_[A-Z_]+\s+)?([A-Za-z_]\w*)", re.M)
    for sub in ("cocos", "extensions"):
        for p in (root / sub).rglob("*.h"):
            if "platform/android" in str(p) or "platform/ios" in str(p) or "platform/mac" in str(p) \
                    or "platform/win" in str(p) or "platform/tizen" in str(p):
                continue
            text = p.read_text(errors="replace")
            names.update(pat.findall(text))
            names.update(enum.findall(text))
    return names


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--cocos", required=True, help="path to the cocos2d-x 3.15.1 checkout")
    ap.add_argument("--bodies", action="store_true",
                    help="also bootstrap reconstruct/src/<Class>.cpp from the Ghidra function bodies")
    ap.add_argument("--force", action="store_true", help="overwrite existing headers")
    args = ap.parse_args()

    game_h = sorted((SRC / "game").glob("*.h"))
    protos = collections.OrderedDict()           # class -> list of parsed protos
    skipped = collections.defaultdict(list)
    class_names = set()
    # class set = the empty "PlaceHolder Structure" definitions + any scope seen
    for h in game_h:
        text = h.read_text(errors="replace")
        for m in re.finditer(r"^struct (\w+) \{", text, re.M):
            class_names.add(m.group(1))
    free_protos = []
    for h in game_h:
        for line in h.read_text(errors="replace").split("\n"):
            if not line.endswith(");") or line.startswith((" ", "\t", "typedef", "//", "#")):
                continue
            p = parse_proto(line)
            if not p:
                continue
            ret, conv, name, params = p
            scope = split_scope(name)
            if len(scope) == 1:
                free_protos.append(p)
                continue
            if len(scope) > 2:
                skipped["nested scope"].append(line)
                continue
            cls = scope[0]
            if "<" in cls or "`" in cls or not ID.fullmatch(cls) or cls in BUILTIN_TYPES:
                skipped["template/compiler-generated class"].append(line)
                continue
            protos.setdefault(cls, []).append(p)
            class_names.add(cls)

    for sub in ("functions", "unnamed"):
        for h in sorted((SRC / sub).glob("*.h")):
            for line in h.read_text(errors="replace").split("\n"):
                if not line.endswith(");") or line.startswith((" ", "\t", "typedef", "//", "#")):
                    continue
                p = parse_proto(line)
                if p and len(split_scope(p[2])) == 1:
                    free_protos.append(p)

    cocos_names = collect_cocos_names(Path(args.cocos)) - class_names
    types = Types(class_names, cocos_names)

    OUT.mkdir(parents=True, exist_ok=True)
    written, kept = 0, 0
    emitted = {}
    method_count = 0
    class_files = []
    for cls in sorted(set(protos) | class_names):
        protos.setdefault(cls, [])
        seen = set()
        lines_pub = []
        for ret, conv, qname, params in protos[cls]:
            fname = split_scope(qname)[-1]
            ok_name = (ID.fullmatch(fname.lstrip("~")) is not None) or fname.startswith("operator ")
            if not ok_name or "`" in fname or "<" in fname:
                skipped["compiler-generated member"].append(f"{cls}::{fname}")
                continue
            plist = split_top(params, ",")
            has_this = bool(plist) and re.search(r"\bthis\s*$", plist[0]) is not None
            if has_this:
                plist = plist[1:]
            mapped = [fix_param(x, types, False) for x in plist]
            mapped = [x for x in mapped if x is not None]
            is_ctor = fname == cls
            is_dtor = fname == "~" + cls
            static = (conv == "__cdecl") and not is_ctor and not is_dtor
            sig = ", ".join(mapped)
            key = (fname, sig, static)
            if key in seen:
                skipped["duplicate signature"].append(f"{cls}::{fname}({sig})")
                continue
            seen.add(key)
            ret_t = types.map(ret)
            if is_ctor:
                decl = f"{cls}({sig});"
            elif is_dtor:
                decl = f"~{cls}();"
            else:
                decl = f"{'static ' if static else ''}{ret_t} {fname}({sig});"
            lines_pub.append(f"    {decl}")
            method_count += 1
            if is_ctor or is_dtor:
                defhead = f"{cls}::{fname}({'' if is_dtor else sig})"
            else:
                defhead = f"{ret_t} {cls}::{fname}({sig})"
            emitted.setdefault(cls, {})[(qname, params)] = (defhead, is_ctor or is_dtor)
        body = [
            "// GENERATED by scripts/gen_class_headers.py from the Ghidra export, then hand-edited.",
            "// Member layout, virtual functions, const-ness and true parameter types are UNKNOWN",
            "// unless noted; parameter types below are Ghidra's guesses.",
            "#pragma once",
            '#include "ois/ois_fwd.hpp"',
            "",
            f"class {cls} {{",
            "public:",
            *lines_pub,
            "};",
            "",
        ]
        path = OUT / f"{cls}.hpp"
        if path.exists() and not args.force:
            kept += 1
        else:
            path.write_text("\n".join(body))
            written += 1
        class_files.append(cls)

    write_globals(types, args.force, set(class_names) | {q for _, _, q, _ in free_protos})
    if args.bodies:
        nonstatic = {(c, split_scope(q)[-1]) for c, d in emitted.items() for (q, _), (_, _) in d.items()
                     if not any(p[2] == q and p[1] == "__cdecl" for p in protos[c])}
        types.used_cocos |= write_bodies(emitted, args.force, nonstatic, sorted(class_names), cocos_names) & cocos_names

    # free functions
    ff, seen = [], set()
    for ret, conv, name, params in free_protos:
        if not ID.fullmatch(name) or name.startswith(("Unwind", "Catch", "thunk_")):
            skipped["free function (unusable name)"].append(name)
            continue
        if name in LIBC_NAMES or "<" in ret or "<" in params:
            skipped["free function (C library / template types)"].append(name)
            continue
        plist = [fix_param(x, types, False) for x in split_top(params, ",")]
        sig = ", ".join(x for x in plist if x is not None)
        if (name, sig) in seen:
            continue
        seen.add((name, sig))
        ff.append(f"{types.map(ret)} {name}({sig});")
    ffp = OUT / "free_functions.hpp"
    if args.force or not ffp.exists():
        ffp.write_text("// GENERATED free-function prototypes (Ghidra types; hand-edit as they are understood).\n"
                       "#pragma once\n#include \"ois/ois_fwd.hpp\"\n\n" + "\n".join(ff) + "\n")

    # forward declarations
    unknown = sorted(w for w in types.unknown if w not in class_names)
    fwd = OUT / "ois_fwd.hpp"
    if args.force or not fwd.exists():
        lines = ['// Forward declarations and namespace imports shared by every reconstructed header.',
                 '#pragma once', '#include "ois/ghidra_compat.h"', '#include "cocos2d.h"', '#include <string>', '']
        lines += [f"using cocos2d::{n};" for n in sorted(types.used_cocos) if n not in NESTED_COCOS]
        lines += [f"using {n} = {q};" for n, q in sorted(NESTED_COCOS.items()) if n in types.used_cocos]
        lines += [""] + [f"class {n};" for n in sorted(class_names) if n in types.used_game or n in protos]
        lines += ["", "// Types referenced by Ghidra prototypes that are neither game classes nor cocos2d types.",
                  "// Forward-declared as structs; define them properly when their layout is known."]
        lines += [f"struct {n} {{ unsigned char _unknown_layout; }};" for n in unknown]
        fwd.write_text("\n".join(lines) + "\n")

    prune_fwd(fwd, args.cocos)
    if args.bodies:
        add_static_members(class_names, {c: {split_scope(q)[-1] for (q, _) in d} for c, d in emitted.items()})

    umb = OUT / "ois.hpp"
    umb.write_text("// Umbrella header: every reconstructed class declaration.\n#pragma once\n"
                   + "".join(f'#include "ois/{c}.hpp"\n' for c in class_files)
                   + '#include "ois/free_functions.hpp"\n')

    rep = [f"# Class header generation report\n",
           f"- classes with methods: {len(class_files)} ({written} written, {kept} already existed)",
           f"- member functions declared: {method_count}",
           f"- free functions declared: {len(ff)}",
           f"- unknown (forward-declared) type names: {len(unknown)}\n",
           "## Not emitted\n"]
    for k, v in skipped.items():
        rep.append(f"- {k}: {len(v)}")
    rep += ["", "## Unknown type names (need real definitions)\n"]
    rep += [f"- `{w}` ({types.unknown[w]} uses)" for w in sorted(unknown, key=lambda w: -types.unknown[w])]
    (OUT / "GENERATED_REPORT.md").write_text("\n".join(rep) + "\n")
    print("\n".join(rep[:12]))


if __name__ == "__main__":
    sys.exit(main())
