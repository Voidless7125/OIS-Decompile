#!/usr/bin/env python3
"""Split the monolithic Ghidra exports into a browsable source tree.

Input  (Ghidra "Export as C/C++" output, one pair per binary):
    Decompile C/ois.exe.c          ois.exe.h
    Decompile C/ois_server.exe.c   ois_server.exe.h

Output:
    Decompile C/ois.exe/...        Decompile C/ois_server.exe/...

Layout of each output directory (see "Decompile C/README.md"):
    <binary>.h            umbrella header; includes every other header
    globals.c             global/data declarations (the top of the old .c)
    types/base.h          Ghidra primitive typedefs (undefined4, dword, ...)
    types/<letter>.h      types that do not belong to a class, bucketed by name
    game/<Class>.c/.h     the game's own classes: methods + struct + prototypes
    std/ cocos2d/ RakNet/ DataStructures/   library code, one file per class
    unnamed/<addr>.c/.h   FUN_xxxxxxxx functions, bucketed by 16 KiB address
    unwind/ catch/        compiler-generated Unwind@/Catch@ stubs (by address)
    functions/<x>.c/.h    other free functions (CRT helpers etc.)

Nothing is rewritten: every function body, comment, prototype and type block
is copied verbatim, in its original relative order.  --check verifies that
no line was lost or invented.

Usage:
    python3 scripts/split_decompile.py            # split all binaries, then check
    python3 scripts/split_decompile.py --check    # only verify an existing split
    python3 scripts/split_decompile.py --keep     # do not delete the monolithic files
"""

import argparse
import collections
import re
import shutil
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
SOURCE_DIR = REPO_ROOT / "Decompile C"
BINARIES = ("ois.exe", "ois_server.exe")

# Namespaces that are third-party / runtime code rather than game classes.
LIB_SCOPES = {"std", "cocos2d", "RakNet", "DataStructures"}
BUCKET_SHIFT = 14  # 16 KiB address buckets for FUN_/Unwind@/Catch@ code

CALLING_CONVENTIONS = ("__thiscall", "__cdecl", "__stdcall", "__fastcall",
                       "__clrcall", "__vectorcall")

ENC = dict(encoding="utf-8", errors="surrogateescape")


# --------------------------------------------------------------------------
# Parsing helpers
# --------------------------------------------------------------------------

def parse_signature(sig):
    """Return the fully qualified function name from a Ghidra signature line."""
    s = sig.strip().rstrip(";").rstrip()
    if not s.endswith(")"):
        raise ValueError(sig)
    depth = 0
    i = len(s) - 1
    while i >= 0:
        if s[i] == ")":
            depth += 1
        elif s[i] == "(":
            depth -= 1
            if depth == 0:
                break
        i -= 1
    pre = s[:i].rstrip()
    k = len(pre)
    angle = 0
    quoted = False
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
    name = pre[k:]
    if pre[:k].rstrip().endswith("operator"):
        name = "operator " + name
    return name


def split_scope(name):
    """Split 'A::B<x::y>::f' into ['A', 'B<x::y>', 'f'] (ignoring :: in <>/`')."""
    parts, cur = [], ""
    angle, quoted, i = 0, False, 0
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


def strip_templates(text):
    out, angle = [], 0
    for c in text:
        if c == "<":
            angle += 1
        elif c == ">":
            angle = max(0, angle - 1)
        elif angle == 0:
            out.append(c)
    return "".join(out)


def sanitize(part):
    part = strip_templates(part).replace("`", "").replace("'", "")
    part = re.sub(r"[^A-Za-z0-9_.~-]+", "_", part).strip("._-")
    return part.replace("~", "dtor_") or "_anon"


class Namer:
    """Case-insensitive path canonicalisation (safe on Windows / macOS)."""

    def __init__(self):
        self.seen = {}

    def canon(self, rel):
        return self.seen.setdefault(rel.lower(), rel)


def destination(name, namer):
    """Map a fully-qualified function name to a path stem (no extension)."""
    parts = split_scope(name)
    if len(parts) > 1:
        scope = [sanitize(p) for p in parts[:-1]]
        if scope[0] in LIB_SCOPES:
            leaf = scope[1] if len(scope) > 1 else scope[0]
            return namer.canon(f"{scope[0]}/{leaf}")
        return namer.canon(f"game/{scope[0]}")
    base = parts[0]
    m = re.fullmatch(r"(?:thunk_)?FUN_([0-9a-fA-F]{8})", base)
    if m:
        return f"unnamed/{(int(m.group(1), 16) >> BUCKET_SHIFT) << BUCKET_SHIFT:08x}"
    m = re.fullmatch(r"(Unwind|Catch[A-Za-z_]*)[@_]([0-9a-fA-F]{8})", base)
    if m:
        folder = "unwind" if m.group(1) == "Unwind" else "catch"
        return f"{folder}/{(int(m.group(2), 16) >> BUCKET_SHIFT) << BUCKET_SHIFT:08x}"
    stripped = base.lstrip("_`")
    if base.startswith("_") or not stripped[:1].isalpha():
        return "functions/crt"
    return f"functions/{stripped[0].lower()}"


# --------------------------------------------------------------------------
# .c splitting
# --------------------------------------------------------------------------

def find_functions(lines):
    """Yield (sig_start, brace_index, end_index) for each top-level function.

    A function is a column-0 "{" preceded by a blank line and a signature;
    the signature may wrap over several (indented) lines.
    """
    i, n = 0, len(lines)
    prev_end = -1
    while i < n:
        if (lines[i] == "{" and i >= 2 and lines[i - 1] == "" and lines[i - 2]
                and not lines[i - 2].startswith(("//", "}"))):
            sig = i - 2
            while (sig - 1 > prev_end and lines[sig - 1]
                   and not lines[sig - 1].startswith(("//", "}"))):
                sig -= 1
            j = i
            while j < n and lines[j] != "}":
                j += 1
            yield sig, i, j
            prev_end = j
            i = j + 1
        else:
            i += 1


def split_source(text):
    lines = text.split("\n")
    funcs = list(find_functions(lines))
    if not funcs:
        raise SystemExit("no functions found - is this a Ghidra export?")
    # chunk start: walk back over comments/blank lines preceding the signature
    starts = []
    prev_end = -1
    for sig, _, end in funcs:
        start = sig
        while start - 1 > prev_end and (lines[start - 1].startswith("//") or lines[start - 1] == ""):
            start -= 1
        starts.append(start)
        prev_end = end
    preamble = lines[:starts[0]]
    # stray global declarations sitting between two functions stay with the globals
    for (_, _, end), start in zip(funcs, starts[1:]):
        preamble.extend(l for l in lines[end + 1:start] if l.strip())
    chunks = []
    for (sig, brace, end), start in zip(funcs, starts):
        body = lines[start:end + 1]
        while body and body[0] == "":
            body.pop(0)
        chunks.append((parse_signature(" ".join(l.strip() for l in lines[sig:brace - 1])), body))
    tail = [l for l in lines[funcs[-1][2] + 1:] if l.strip()]
    return preamble, chunks, tail


# --------------------------------------------------------------------------
# .h splitting
# --------------------------------------------------------------------------

TYPE_NAME_RES = [
    re.compile(r"^typedef\s+(?:struct|union|enum)\s+(\w+)\s+\1\b"),
    re.compile(r"^(?:struct|union|enum)\s+(\S+?)\s*(?:\{|$)"),
    re.compile(r"^typedef\s+(?:struct|union|enum)\s+(\S+?)\s*\{"),
]


def type_block_name(block):
    for line in block:
        if line.startswith("//") or not line.strip():
            continue
        for rx in TYPE_NAME_RES:
            m = rx.match(line)
            if m:
                return m.group(1)
        break
    code = [l for l in block if l.strip() and not l.startswith("//")]
    if not code:
        return None
    last = code[-1]
    m = re.search(r"(\w+)\s*(?:\[\d*\])?\s*;\s*$", last) or re.search(r"\}\s*(\w+)", last)
    return m.group(1) if m else None


def split_header(text):
    lines = text.split("\n")
    # prototypes start at the first line that is a plain function prototype
    # after the type section (types never end with ');' at depth 0)
    first_proto = None
    depth = 0
    for i, l in enumerate(lines):
        depth += l.count("{") - l.count("}")
        if depth == 0 and l.endswith(");") and not l.startswith(("typedef", "#", "//", " ", "\t")):
            first_proto = i
            break
    if first_proto is None:
        first_proto = len(lines)
    type_lines, proto_lines = lines[:first_proto], lines[first_proto:]

    blocks, cur, depth = [], [], 0
    for l in type_lines:
        if l == "" and depth == 0:
            if cur:
                blocks.append(cur)
                cur = []
            continue
        cur.append(l)
        depth += l.count("{") - l.count("}")
    if cur:
        blocks.append(cur)
    # a comment-only block describes the block after it
    merged, pending = [], []
    for b in blocks:
        if all(l.startswith("//") for l in b):
            pending.extend(b)
        else:
            merged.append(pending + b)
            pending = []
    if pending:
        merged.append(pending)

    protos = []
    for l in proto_lines:
        if not l.strip():
            continue
        protos.append(l)
    return merged, protos


def type_destination(name, scope_files, namer):
    if name is None:
        return "types/base"
    scope = [sanitize(p) for p in split_scope(name)]
    if scope[0] in scope_files:
        return scope_files[scope[0]]
    if scope[0] in LIB_SCOPES:
        return namer.canon(f"{scope[0]}/{scope[1] if len(scope) > 1 else scope[0]}")
    first = name.lstrip("_`")[:1].lower()
    return f"types/{first if first.isalpha() else '_'}"


# --------------------------------------------------------------------------
# driver
# --------------------------------------------------------------------------

def emit(out_dir, files, binary, ext):
    for stem, parts in files.items():
        path = out_dir / f"{stem}{ext}"
        path.parent.mkdir(parents=True, exist_ok=True)
        depth = stem.count("/")
        inc = "../" * depth + f"{binary}.h"
        body = "\n\n\n".join("\n".join(p) for p in parts)
        head = f'#include "{inc}"\n\n\n' if ext == ".c" else ""
        path.write_text(head + body + "\n", **ENC)


def split_binary(binary, keep):
    c_path = SOURCE_DIR / f"{binary}.c"
    h_path = SOURCE_DIR / f"{binary}.h"
    out_dir = SOURCE_DIR / binary
    if not c_path.exists() or not h_path.exists():
        print(f"[skip] {binary}: monolithic files not found")
        return
    print(f"[{binary}] reading ...")
    preamble, chunks, tail = split_source(c_path.read_text(**ENC))
    blocks, protos = split_header(h_path.read_text(**ENC))

    if out_dir.exists():
        shutil.rmtree(out_dir)
    namer = Namer()

    c_files = collections.OrderedDict()
    h_files = collections.OrderedDict()
    scope_files = {}
    for name, body in chunks:
        stem = destination(name, namer)
        c_files.setdefault(stem, []).append(body)
        scope = split_scope(name)
        if len(scope) > 1:
            scope_files.setdefault(sanitize(scope[0]), stem)
    for line in protos:
        h_files.setdefault(destination(parse_signature(line), namer), []).append([line])

    # types: base typedefs first (everything up to the first struct), then
    # each block goes next to the class it belongs to, or into types/<letter>.h
    type_files = collections.OrderedDict()
    seen_struct = False
    for b in blocks:
        first = next((l for l in b if not l.startswith("//")), "")
        if not seen_struct and re.match(r"(typedef\s+)?(struct|union|enum)\b", first):
            seen_struct = True
        stem = "types/base" if not seen_struct else type_destination(
            type_block_name(b), scope_files, namer)
        type_files.setdefault(stem, []).append(b)

    all_h = collections.OrderedDict()
    for stem in type_files:
        all_h.setdefault(stem, []).extend(type_files[stem])
    for stem in h_files:
        all_h.setdefault(stem, []).append([l[0] for l in h_files[stem]])

    emit(out_dir, c_files, binary, ".c")
    emit(out_dir, all_h, binary, ".h")
    (out_dir / "globals.c").write_text(
        f'#include "{binary}.h"\n' + "\n".join(preamble[1:] if preamble[:1] == [f'#include "{binary}.h"'] else preamble)
        + ("\n" + "\n".join(tail) + "\n" if tail else "\n"), **ENC)

    # umbrella header: base types first, then every other header
    stems = sorted(all_h, key=lambda s: (s != "types/base", s.startswith("types/") is False, s))
    umbrella = "\n".join(f'#include "{s}.h"' for s in stems) + "\n"
    (out_dir / f"{binary}.h").write_text(umbrella, **ENC)

    n_c = len(c_files) + 1
    print(f"[{binary}] {len(chunks)} functions -> {n_c} .c files, "
          f"{len(all_h) + 1} .h files, {len(blocks)} type blocks, {len(protos)} prototypes")
    if not check_binary(binary):
        raise SystemExit(f"[{binary}] split is NOT lossless; monolithic files kept")
    if not keep:
        c_path.unlink()
        h_path.unlink()
        print(f"[{binary}] removed monolithic {c_path.name} / {h_path.name}")


def significant(lines):
    return collections.Counter(l.rstrip() for l in lines if l.strip())


def check_binary(binary):
    """Every non-blank line of the old pair must exist in the split tree
    (and vice versa, ignoring the generated #include lines)."""
    out_dir = SOURCE_DIR / binary
    orig = collections.Counter()
    for ext in (".c", ".h"):
        p = SOURCE_DIR / f"{binary}{ext}"
        if p.exists():
            orig.update(significant(p.read_text(**ENC).split("\n")))
    if not orig:
        print(f"[{binary}] originals gone; skipping line-for-line check")
        return True
    new = collections.Counter()
    for p in out_dir.rglob("*"):
        if p.suffix in (".c", ".h"):
            lines = [l for l in p.read_text(**ENC).split("\n")
                     if not (l.startswith('#include "') and (l.endswith(f'{binary}.h"') or p.name == f"{binary}.h"))]
            new.update(significant(lines))
    for k in [k for k in orig if k == f'#include "{binary}.h"']:
        del orig[k]
    missing = orig - new
    extra = new - orig
    if missing or extra:
        print(f"[{binary}] CHECK FAILED: {sum(missing.values())} lines missing, "
              f"{sum(extra.values())} lines extra")
        for k, v in list(missing.items())[:5]:
            print("   missing:", v, k[:100])
        for k, v in list(extra.items())[:5]:
            print("   extra:  ", v, k[:100])
        return False
    print(f"[{binary}] check OK: all {sum(orig.values())} non-blank lines accounted for")
    return True


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--check", action="store_true", help="only verify an existing split against the originals")
    ap.add_argument("--keep", action="store_true", help="keep the monolithic .c/.h files")
    args = ap.parse_args()
    ok = True
    for b in BINARIES:
        if args.check:
            ok &= check_binary(b)
        else:
            split_binary(b, args.keep)
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
