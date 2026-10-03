# Decompile C — source layout

The Ghidra export used to be one huge `ois.exe.c` / `ois.exe.h` pair per
binary (13 MB and 11 MB of C). It is now split into a tree, one directory per
binary, so you can open "the class you are working on" instead of searching a
400,000-line file. Nothing was rewritten: every function body, comment,
prototype and type is copied verbatim.

```
Decompile C/
  ois.exe/                  the game client
  ois_server.exe/           the dedicated server
```

Inside each binary directory:

| Path | What lives there |
|------|------------------|
| `<binary>.h` | Umbrella header; `#include`s every other header (primitive types first). Every `.c` includes it. |
| `globals.c` | Global / data declarations (the block at the top of the old `.c`). |
| `types/base.h` | Ghidra primitive typedefs (`undefined4`, `dword`, `uint`, …). |
| `types/<letter>.h` | Struct/union/typedef blocks that do not belong to a class, bucketed by first letter of the type name. |
| `game/<Class>.c` / `.h` | The game's own classes (`ShipData`, `TradeEngine`, `GameLogic`, …): every `Class::method`, plus the class's struct definition and prototypes in the `.h`. |
| `std/`, `cocos2d/`, `RakNet/`, `DataStructures/` | Library / runtime code, one file per class (`std/basic_string.c`, `cocos2d/Application.c`, …). |
| `unnamed/<addr>.c` | `FUN_xxxxxxxx` functions that still need a name, bucketed by 16 KiB address range (`unnamed/00408000.c` holds `FUN_00408000`–`FUN_0040bfff`). |
| `unwind/`, `catch/` | Compiler-generated `Unwind_xxxxxxxx` / `Catch_*@xxxxxxxx` exception stubs, bucketed by address. |
| `functions/<x>.c` | Other free functions (CRT helpers and so on): `crt.c` for names starting with `_`, otherwise by first letter. |

Within a file, functions keep the order they had in the export.

## Working with it

- **Find a function:** `grep -rn "ShipData::stringWithVars" "Decompile C/ois.exe"`, or
  just open `game/ShipData.c`.
- **Rename a function / class:** edit it where it lives. If a rename moves it
  to a different class (`FUN_00408120` → `GameLogic::tick`), move the body and
  its prototype into that class's `.c` / `.h` by hand.
- **Case-insensitive file systems** (Windows, macOS): file names are
  de-duplicated case-insensitively, so two classes that differ only in
  capitalisation share one file.

## Re-splitting a fresh Ghidra export

If you re-export from Ghidra, drop the new `ois.exe.c/.h` (and/or
`ois_server.exe.c/.h`) into this directory and run:

```
python3 scripts/split_decompile.py
```

It regenerates the tree and then **verifies that every non-blank line of the
export appears in the output** (and nothing extra does) before deleting the
monolithic files. `--check` re-runs only the verification, `--keep` leaves the
monolithic files in place.

Heads-up: re-splitting overwrites the tree, so hand-edits made since the last
export would be lost; apply a re-export as a deliberate, reviewed change.
