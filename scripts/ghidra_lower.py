"""Mechanical rewrites that turn raw Ghidra pseudo-C into (closer to) valid C++.

Used by gen_class_headers.py --bodies when it bootstraps reconstruct/src/*.cpp.
Every rule here is *meaning-preserving for a human reader* and is deliberately
conservative: compiler-generated scaffolding is commented out (never silently
deleted), and anything that needs a real decision is left alone for a person.

Rules
  seh        MSVC structured-exception-handling frame setup (ExceptionList,
             puStack_*, the local_8 try-level) -> commented out; a real C++
             compiler regenerates this itself.
  cookie     /GS stack-cookie prologue/epilogue -> commented out; likewise.
  this-arith `this + 0x24` / `this[0x24]` is a *byte* offset in Ghidra's output
             -> `(char *)this + 0x24`.
  string     basic_string<>  -> std::string, and the free-function style calls
             std::basic_string<>::assign(s, ...) -> ghidra::str::assign(s, ...)
  singleton  Singleton<>::getInstance() -> ghidra::any_singleton()
  vtable     `*(undefined ***)this = vftable;` -> commented out (the compiler writes the vptr)
  call       Ghidra spells a member call `Class::method(obj, args)`; rewritten to
             `(obj)->method(args)` using the declared signatures; constructor/
             destructor calls become placement-new / `->~Class()`
  castclass  `(GameClass)0x1` (integer cast to a placeholder class) -> `(byte)0x1`
  this-reuse functions that assign to `this` get a local `this_` instead
  pseudo     Ghidra pseudo-variables (in_ECX, unaff_EDI, extraout_*, in_stack_*,
             stack0x*) that are used but never declared get a declaration with
             a marker comment, so the rest of the function can be checked.
"""

import re
from collections import Counter

STATS = Counter()

SEH_NAMES = r"(?:local_(?:10|14|18|1c|20)|puStack_\w+)"


def _comment_lines(lines, pred, tag):
    out = []
    for l in lines:
        if pred(l):
            STATS[tag] += 1
            out.append(re.sub(r"^(\s*)", r"\1// [" + tag + "] ", l, count=1))
        else:
            out.append(l)
    return out


def lower_seh(lines):
    text = "\n".join(lines)
    if "ExceptionList" not in text:
        return lines
    frame_vars = set(re.findall(r"\b(local_\w+)\s*=\s*ExceptionList\s*;", text))
    names = list(frame_vars) + [r"puStack_\w+"]

    def is_seh(l):
        s = l.strip()
        if re.fullmatch(r"ExceptionList\s*=\s*[^;]*;", s):
            return True
        if any(re.fullmatch(rf"{n}\s*=\s*ExceptionList\s*;", s) for n in frame_vars):
            return True
        if re.fullmatch(r"puStack_\w+\s*=\s*[^;]*;", s):
            return True
        if re.fullmatch(r"local_8(?:\._\d_\d_)?\s*=\s*[^;]*;", s):       # try-level
            return True
        if re.fullmatch(r"(void|undefined\d?)\s*\*?\s*(?:" + "|".join(names) + r"|local_8)\s*;", s):
            return True
        return False
    return _comment_lines(lines, is_seh, "seh")


def lower_cookie(lines):
    def is_cookie(l):
        return ("___security_cookie" in l or "security_check_cookie" in l
                or re.search(r"\bstack0x[0-9a-f]{8}\b", l) and "^" in l)
    return _comment_lines(lines, is_cookie, "cookie")


def lower_this(lines):
    out = []
    for l in lines:
        n = re.sub(r"\(this\s*\+\s*(0x[0-9a-fA-F]+|\d+)\)", r"((char *)this + \1)", l)
        n = re.sub(r"\bthis\[(0x[0-9a-fA-F]+|\d+)\]", r"((char *)this)[\1]", n)
        n = re.sub(r"\(\s*this\s*\+\s*(\w+)\s*\)", r"((char *)this + \1)", n)
        if n != l:
            STATS["this-arith"] += 1
        out.append(n)
    return out


STR_CALL = re.compile(r"\bstd::basic_string<>::(assign|append|c_str|size|basic_string<>)(?=\s*(?:\(|$))")


def lower_string(lines):
    out = []
    for l in lines:
        n = STR_CALL.sub(lambda m: "ghidra::str::" + ("ctor" if m.group(1) == "basic_string<>"
                         else re.sub(r"\W", "_", m.group(1))), l)
        n = re.sub(r"\b(?:std::)?basic_string<>(?!\s*::)", "std::string", n)
        if n != l:
            STATS["string"] += 1
        out.append(n)
    return out


LIB_FIXED = {"vector": "ghidra::vector", "_Func_class": "ghidra::func_class"}
OPERATOR = r"operator(?:\(\)|\[\]|new|delete|[-+*/%^&|~!=<>]{1,3})"
LIB_CALL = re.compile(r"\b(?:std::)?([A-Za-z_]\w*)<>::(" + OPERATOR + r"|~?[A-Za-z_]\w*)(?:<>)?(?=\s*(?:\(|$))")
LIB_FREE = re.compile(r"\b(?:std::)?([A-Za-z_]\w*)<>(?=\s*\()")
LIB_TYPE = re.compile(r"\b(?:std::)?([A-Za-z_]\w*)<>(?!\s*::)")
LIB_CALLS, LIB_TYPES = set(), set()


def _ident(s):
    return re.sub(r"\W", lambda m: f"_x{ord(m.group()):02x}", s)


def lower_lib(lines):
    """Unrecovered library template instances -> named placeholders.

    Ghidra prints `std::map<>::operator[]` with the template arguments erased,
    so the real call cannot be reconstructed mechanically.  Each distinct call
    becomes `ghidra::lib::<Class>__<method>(...)` and each type
    `ghidra::lib::<Class>_t`; both are *declared but never defined* in the
    generated ghidra_lib_stubs.hpp.  The code then type-checks, while the
    placeholders stay greppable and are counted in COMPILE_STATUS.md.
    """
    out = []
    for l in lines:
        def call(m):
            cls = m.group(1)
            LIB_CALLS.add((cls, m.group(2)))
            return f"ghidra::lib::{_ident(cls)}__{_ident(m.group(2))}"

        def typ(m):
            cls = m.group(1)
            if cls in LIB_FIXED:
                return LIB_FIXED[cls]
            LIB_TYPES.add(cls)
            return f"ghidra::lib::{_ident(cls)}_t"
        def free(m):
            LIB_CALLS.add((m.group(1), "()"))
            return f"ghidra::lib::{_ident(m.group(1))}__{_ident('()')}"
        n = LIB_CALL.sub(call, l)
        n = LIB_FREE.sub(free, n)
        n = LIB_TYPE.sub(typ, n)
        if n != l:
            STATS["lib-placeholder"] += 1
        out.append(n)
    return out


def write_lib_stubs(path):
    lines = ["// GENERATED by scripts/ghidra_lower.py -- do not edit.",
             "// Placeholders for library template instances whose template arguments Ghidra erased.",
             "// Declared, never defined: replacing each one with the real std::/cocos2d:: call is the",
             "// work still to do.  `grep -rn ghidra::lib reconstruct/src` finds every use.",
             "#pragma once", '#include "ois/ghidra_compat.h"', "", "namespace ghidra { namespace lib {", ""]
    lines += [f"struct {_ident(c)}_t {{ unsigned char _opaque[16]; }};" for c in sorted(LIB_TYPES)]
    lines += [""]
    lines += [f"template <class... A> any_value {_ident(c)}__{_ident(m)}(A&&...);" for c, m in sorted(LIB_CALLS)]
    lines += ["", "}}  // namespace ghidra::lib", ""]
    path.write_text("\n".join(lines))


def lower_singleton(lines):
    out = []
    for l in lines:
        n = re.sub(r"\bSingleton<>::getInstance\s*\(\s*\)", "ghidra::any_singleton()", l)
        n = re.sub(r"\bSingleton<>::instance\b", "ghidra::Singleton<void>::instance", n)
        if n != l:
            STATS["singleton"] += 1
        out.append(n)
    return out


PSEUDO = re.compile(r"\b((?:unaff|in|extraout)_[A-Za-z0-9_]+|in_stack_[0-9a-f]{8}|stack0x[0-9a-f]{8})\b")


def lower_pseudo(lines):
    text = "\n".join(lines)
    used = []
    for m in PSEUDO.finditer(text):
        n = m.group(1)
        if n not in used:
            used.append(n)
    # find where the body starts (first line after the opening brace)
    try:
        start = next(i for i, l in enumerate(lines) if l == "{") + 1
    except StopIteration:
        return lines
    decls = []
    declared = set()
    for n in used:
        if re.search(rf"^\s*[\w\s\*<>:]+\b{n}\s*(\[\d+\])?\s*;", text, re.M):
            declared.add(n)
            continue
        if n.startswith("stack0x"):
            decls.append(f"  char {n}[1] = {{0}};  // [pseudo] address of an unnamed stack slot")
        elif n.startswith("in_XMM") or "_XMM" in n:
            decls.append(f"  undefined8 {n} = 0;  // [pseudo] XMM register value live on entry")
        else:
            decls.append(f"  undefined4 {n} = 0;  // [pseudo] register/stack value live on entry")
        STATS["pseudo"] += 1
    return lines[:start] + decls + lines[start:]


def lower_mislabelled(lines):
    # Ghidra sometimes labels a trivial destructor of a builtin as `word::~word`
    return _comment_lines(lines, lambda l: re.search(r"\bword::~word\(", l) is not None, "mislabelled-dtor")


def lower_vtable(lines):
    return _comment_lines(lines, lambda l: re.search(r"=\s*vftable\s*;", l) is not None, "vtable")


def split_args(s):
    out, depth, cur, q = [], 0, "", None
    i = 0
    while i < len(s):
        c = s[i]
        if q:
            cur += c
            if c == "\\":
                cur += s[i + 1]
                i += 1
            elif c == q:
                q = None
        elif c in "\"'":
            q = c
            cur += c
        elif c in "([{":
            depth += 1
            cur += c
        elif c in ")]}":
            depth -= 1
            cur += c
        elif c == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += c
        i += 1
    out.append(cur)
    return [a.strip() for a in out] if "".join(out).strip() else []


def lower_calls(text, nonstatic):
    """Rewrite `Class::method(obj, a, b)` for known non-static methods."""
    pat = re.compile(r"\b([A-Za-z_]\w*)::(~?[A-Za-z_]\w*)\(")
    out, pos = [], 0
    while True:
        m = pat.search(text, pos)
        if not m:
            out.append(text[pos:])
            break
        cls, name = m.group(1), m.group(2)
        out.append(text[pos:m.start()])
        if (cls, name) not in nonstatic or text[max(0, m.start() - 6):m.start()].strip().endswith(("::", "->", ".")):
            out.append(m.group(0))
            pos = m.end()
            continue
        depth, j = 1, m.end()
        while j < len(text) and depth:
            if text[j] == "(":
                depth += 1
            elif text[j] == ")":
                depth -= 1
            j += 1
        args = split_args(text[m.end():j - 1])
        if not args:
            out.append(m.group(0))
            pos = m.end()
            continue
        obj, rest = args[0], ", ".join(args[1:])
        STATS["call"] += 1
        if name == cls:
            out.append(f"new ((void *)({obj})) {cls}({rest})")
        elif name == "~" + cls:
            out.append(f"({obj})->{name}()")
        else:
            out.append(f"({obj})->{name}({rest})")
        pos = j
    return "".join(out)


def lower_castclass(lines, classes):
    if not classes:
        return lines
    pat = re.compile(r"\((" + "|".join(sorted(map(re.escape, classes), key=len, reverse=True)) + r")\)\s*(0x[0-9a-fA-F]+|\d+)\b")
    out = []
    for l in lines:
        n = pat.sub(r"(byte)\2", l)
        if n != l:
            STATS["castclass"] += 1
        out.append(n)
    return out


def lower_this_reuse(lines):
    text = "\n".join(lines)
    if not re.search(r"(?m)^\s*this\s*=[^=]", text):
        return lines
    STATS["this-reuse"] += 1
    start = next((i for i, l in enumerate(lines) if l == "{"), None)
    if start is None:
        return lines
    body = [re.sub(r"\bthis\b", "this_", l) for l in lines[start + 1:]]
    return lines[:start + 1] + ["  auto this_ = (decltype(this))this;  // [this-reuse]"] + body


RULES = (lower_seh, lower_mislabelled, lower_vtable, lower_cookie, lower_this, lower_string, lower_singleton, lower_lib, lower_pseudo)


def lower(lines, is_ctor_or_dtor, nonstatic=frozenset(), classes=()):
    if is_ctor_or_dtor:
        lines = [re.sub(r"\breturn\s+this\s*;", "return;", l) for l in lines]
    for rule in RULES:
        lines = rule(lines)
    lines = lower_castclass(lines, classes)
    lines = lower_this_reuse(lines)
    return lower_calls("\n".join(lines), nonstatic).split("\n")
