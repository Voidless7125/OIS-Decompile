# reconstruct/ — turning the Ghidra dump into compilable C++

`Decompile C/` is a raw Ghidra export: pseudo-C that cannot be compiled. This
directory is the start of the *real* source tree. Read this before expecting a
build.

## Where things stand

See **[COMPILE_STATUS.md](COMPILE_STATUS.md)** for the live numbers. In short:

| | |
|---|---|
| Class declarations (`include/ois/<Class>.hpp`) | 250 classes, ~2,450 member functions; **compile with 0 errors** against the real cocos2d-x 3.15.1 headers |
| Function bodies (`src/<Class>.cpp`) | 2,423 bodies mechanically lowered; **most still have errors** (24 of 249 files clean) |
| Does it link / run? | **No.** Nothing here is linked or executed. |

"Compiles" is not "understood": the status file also counts the placeholders
(`ghidra::lib::…`, `[pseudo]` variables, `any_singleton()`) that stand in for
things nobody has worked out yet. Cleaning a function means removing those.

## Layout

```
include/ois/ghidra_compat.h      primitive types + Ghidra p-code helpers (CONCAT44, SUB41, ...)
include/ois/ois_fwd.hpp          forward declarations, `using cocos2d::X;`
include/ois/<Class>.hpp          one class declaration each (methods only; layouts unknown)
include/ois/ois_globals.hpp      extern declarations for the DAT_/global symbols
include/ois/free_functions.hpp   free-function prototypes
include/ois/ghidra_lib_stubs.hpp declared-never-defined stand-ins for erased library templates
src/<Class>.cpp                  function bodies, one file per class
```

## What was generated, and what is real

`scripts/gen_class_headers.py --bodies` bootstrapped everything above from
`Decompile C/ois.exe/game/`. It is a **one-time bootstrap**: the output is now
meant to be edited by hand and the script refuses to overwrite existing files
without `--force`. It applies the rules documented in `scripts/ghidra_lower.py`
(commenting out MSVC SEH/stack-cookie scaffolding, turning `this + 0x24` into a
byte offset, `Class::method(obj, …)` into `obj->method(…)`, and so on). Each
rule is conservative and every removed line stays in the file as a
`// [rule] …` comment.

## Engine and library code is *not* reconstructed

`ois.exe` contains thousands of decompiled `std::`, `cocos2d::`, `RakNet::` and
`DataStructures::` functions (compiler instantiations and statically linked
libraries). Reconstructing those would be wasted effort — the real source exists:

- **cocos2d-x 3.15.1** — `libcocos2d.dll` here reports exactly that version.
  `scripts/fetch_cocos2d.sh` fetches the pinned commit
  `b5d55295025aa4812d26a703da7eb1b46af13c15`; the prebuilt `libcocos2d.lib` is
  what a real build would link.
- **RakNet** is statically linked. Its source version is **not yet identified**;
  that has to be pinned before a link step is possible (open item).
- **MSVC STL / CRT** come from the toolchain.

The decompiled copies stay in `Decompile C/` for reference but are not built.

## Running the check

```
scripts/fetch_cocos2d.sh
python3 scripts/compile_check.py --cocos third_party/cocos2d-x --write-status
# or: cmake -B build . && cmake --build build --target compile-check
```

Needs `clang++` with 32-bit support (`libc6-dev-i386`), plus the GLEW/GLFW/
FreeType dev headers (cocos2d-x's Linux platform headers include them). The
check is `-fsyntax-only` on a **Linux** host; it says nothing about MSVC
specifics, and the original is 32-bit MSVC ABI (calling conventions are erased
in `ghidra_compat.h` unless `OIS_REAL_ABI` is defined).

## What is still unknown (the real work)

1. **Member layouts.** 240 of the game's classes are empty placeholders —
   `ois.pdb` only describes RakNet/CRT/Winsock types, not the game's own. Fields
   must be recovered from how the code uses offsets (`*(int *)(this + 0x24)`).
   This unblocks most remaining errors.
2. **Virtual tables and inheritance.**
3. **Template arguments** erased by Ghidra (`std::map<>`, `std::vector<>`).
4. **Real parameter types/names and const-ness** for every function.
5. **Verifying behaviour.** Even a fully compiling tree must be tested against
   a real game install; nothing here has been.
