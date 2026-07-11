# OIS-Decompile

## SYSTEM DIAGNOSTIC: DECOMPILATION PROGRESS

<!-- TRACKER_START -->
<pre>
Flat Earth Modular BIOS v6.00PG
(C) 2019-2026 by Decomp Community

Main Processor : Decompilation Target (OIS)
Memory Testing : 29255/35058 Symbols OK (83.45%)
Unresolved     : 5803 ERRORS
Static Analysis  : [807] PENDING TASKS
Global Progress: [████████████████████████████████------]

Primary Master   : OIS.EXE (18726/20262) [ONLINE]
Secondary Master : OIS_SERVER.EXE (14616/18908) [ONLINE]

Press ISSUE to report bugs, PULL_REQUEST to submit code
23/06/2017-i902-FL183500-8A3410-00
</pre>
<!-- TRACKER_END -->

## Telemetry Legend

- **Memory Testing** reports the overall percentage of successfully identified and named C/C++ symbols across the repository.
- **Unresolved ERRORS** is the raw count of Ghidra-generated placeholder names, such as `FUN_`, `DAT_`, and `PTR_`, still awaiting reverse engineering.
- **Static Analysis (PENDING TASKS)** counts `// TODO`, `// FIXME`, and `// Placeholder` comments marking partially reconstructed logic.
- **Primary/Secondary Master** report decompilation completion ratios isolated to the client (`OIS.EXE`) and server (`OIS_SERVER.EXE`) binaries.

## Project Manifest

This is a community reverse-engineering effort focused on the *Objects in Space* client and server binaries.

> **CRITICAL LEGAL NOTE:** No game assets—including audio, models, or textures—are provided. Extract assets only from a legally purchased Steam copy of *Objects in Space*. GOG asset structures may differ.

## Codebase Integrity

The C source is generated through Ghidra and remains an in-progress reconstruction. The broad program structure is forming, but significant manual cleanup, refactoring, and data-structure mapping are ongoing.

## Engineering Directives

- Map and document structures, enums, and global data.
- Rename Ghidra-generated functions and data symbols using verified behavior.
- Reconstruct and simplify incomplete control flow without changing observed behavior.
- Test logic paths against a legally obtained game installation and record findings in focused changes.
