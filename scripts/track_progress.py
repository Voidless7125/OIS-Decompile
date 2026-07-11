"""
OIS Decompilation Progress Tracker
-----------------------------------
Scans all .c and .h files inside the 'Decompile C' directory, counts
Ghidra-generated symbol names (FUN_*, DAT_*, PTR_*) as unresolved and
all other identifiers as resolved, then updates the README.md tracker block.
"""

import re
from pathlib import Path

# ---------------------------------------------------------------------------
# Configuration
# ---------------------------------------------------------------------------

REPO_ROOT = Path(__file__).resolve().parent.parent
SOURCE_DIR = REPO_ROOT / "Decompile C"
README_PATH = REPO_ROOT / "README.md"

TRACKER_START = "<!-- TRACKER_START -->"
TRACKER_END = "<!-- TRACKER_END -->"

# Matches any valid C identifier (two or more characters; single-character
# identifiers such as loop counters and type params are intentionally excluded
# to reduce noise in the symbol counts).
IDENTIFIER_PATTERN = re.compile(r"\b[A-Za-z_][A-Za-z0-9_]+\b")

# C keywords and common types to exclude from counts
C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "inline", "int", "long", "register", "return", "short", "signed",
    "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while",
    # Common Ghidra/MSVC types
    "undefined", "undefined1", "undefined2", "undefined4", "undefined8",
    "bool", "true", "false", "NULL", "nullptr",
    "BOOL", "BYTE", "WORD", "DWORD", "QWORD",
    "uint", "int8", "int16", "int32", "int64",
    "uint8", "uint16", "uint32", "uint64",
    "HANDLE", "LPVOID", "LPCSTR", "LPSTR",
    "include", "define", "ifdef", "ifndef", "endif", "pragma",
}

BAR_WIDTH = 22
SCREEN_WIDTH = 62

COMMENT_PATTERN = re.compile(r"//[^\n]*|/\*.*?\*/", re.DOTALL)
WARNING_MARKER_PATTERN = re.compile(r"\b(?:Placeholder|TODO|FIXME)\b", re.IGNORECASE)
MODULE_FILE_PATTERN = re.compile(r"^(?P<name>.+\.exe)\.(?:c|h)$", re.IGNORECASE)


# ---------------------------------------------------------------------------
# Scanning
# ---------------------------------------------------------------------------

def scan_source_files(source_dir: Path) -> dict:
    """Recursively scan .c and .h files; return symbol counts.

    Each unique symbol name is counted once regardless of how many times it
    appears in the source text.  Tracking unique names gives a meaningful
    measure of decompilation coverage: the same unresolved function appearing
    hundreds of times is still a single unknown that needs one renaming effort.
    """
    unresolved_symbols: set[str] = set()
    resolved_symbols: set[str] = set()
    warnings_count = 0
    module_stats: dict[str, dict[str, set[str]]] = {}

    for path in sorted(source_dir.rglob("*")):
        if path.suffix.lower() not in (".c", ".h"):
            continue

        try:
            text = path.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue

        for comment in COMMENT_PATTERN.findall(text):
            warnings_count += len(WARNING_MARKER_PATTERN.findall(comment))

        module_match = MODULE_FILE_PATTERN.match(path.name)
        module_bucket = None
        if module_match:
            # Preserve the ".exe" suffix as part of the module key.
            module_name = module_match.group("name").lower()
            module_bucket = module_stats.setdefault(
                module_name, {"resolved": set(), "unresolved": set()}
            )

        for match in IDENTIFIER_PATTERN.finditer(text):
            name = match.group()
            if name in C_KEYWORDS:
                continue
            if name.startswith(("FUN_", "DAT_", "PTR_")):
                unresolved_symbols.add(name)
                if module_bucket is not None:
                    module_bucket["unresolved"].add(name)
            else:
                resolved_symbols.add(name)
                if module_bucket is not None:
                    module_bucket["resolved"].add(name)

    return {
        "resolved": len(resolved_symbols),
        "unresolved": len(unresolved_symbols),
        "total": len(resolved_symbols) + len(unresolved_symbols),
        "warnings_count": warnings_count,
        "modules": {
            name: {
                "resolved": len(values["resolved"]),
                "unresolved": len(values["unresolved"]),
                "total": len(values["resolved"]) + len(values["unresolved"]),
            }
            for name, values in module_stats.items()
        },
    }


# ---------------------------------------------------------------------------
# Progress bar helper
# ---------------------------------------------------------------------------

def build_progress_bar(percentage: float, width: int = BAR_WIDTH) -> str:
    filled = round(percentage / 100 * width)
    filled = max(0, min(width, filled))
    return "[" + "█" * filled + "-" * (width - filled) + "]"


def format_screen_line(content: str = "") -> str:
    return f"{content[:SCREEN_WIDTH]:<{SCREEN_WIDTH}}"


def format_dual_line(left: str, right: str) -> str:
    left = left.strip()
    right = right.strip()
    if not right:
        return format_screen_line(left)
    spacing = SCREEN_WIDTH - len(left) - len(right)
    if spacing < 1:
        return format_screen_line(f"{left} {right}")
    return f"{left}{' ' * spacing}{right}"


# ---------------------------------------------------------------------------
# README block generation
# ---------------------------------------------------------------------------

def build_tracker_block(stats: dict) -> str:
    resolved = stats["resolved"]
    unresolved = stats["unresolved"]
    total = stats["total"]
    warnings_count = stats["warnings_count"]
    accuracy = (resolved / total * 100) if total > 0 else 0.0
    bar = build_progress_bar(accuracy, width=38)
    ois_module = stats.get("modules", {}).get("ois.exe", {})
    server_module = stats.get("modules", {}).get("ois_server.exe", {})
    ois_resolved = ois_module.get("resolved", 0)
    ois_total = ois_module.get("total", 0)
    server_resolved = server_module.get("resolved", 0)
    server_total = server_module.get("total", 0)
    ois_status = (
        f"Primary Master   : OIS.EXE ({ois_resolved}/{ois_total}) [ONLINE]"
        if ois_total > 0
        else "Primary Master   : OIS.EXE [OFFLINE / PENDING SCAN]"
    )
    server_status = (
        f"Secondary Master : OIS_SERVER.EXE ({server_resolved}/{server_total}) [ONLINE]"
        if server_total > 0
        else "Secondary Master : OIS_SERVER.EXE [OFFLINE / PENDING SCAN]"
    )
    lines = [
        format_screen_line("Flat Earth Modular BIOS v6.00PG"),
        format_screen_line("(C) 2019-2026 by Decomp Community"),
        format_screen_line(),
        format_screen_line("Main Processor : Decompilation Target (OIS)"),
        format_screen_line(
            f"Memory Testing : {resolved}/{total} Symbols OK ({accuracy:.2f}%)"
        ),
        format_screen_line(f"Unresolved     : {unresolved} ERRORS"),
        format_screen_line(
            f"Static Analysis  : [{warnings_count}] PENDING TASKS"
        ),
        format_screen_line(f"Global Progress: {bar}"),
        format_screen_line(),
        format_screen_line(
            ois_status
        ),
        format_screen_line(server_status),
        format_screen_line(),
        format_screen_line("Press ISSUE to report bugs, PULL_REQUEST to submit code"),
        format_screen_line("23/06/2017-i902-FL183500-8A3410-00"),
    ]

    return (
        f"{TRACKER_START}\n"
        "<pre>\n"
        + "\n".join(lines)
        + "\n</pre>\n"
        f"{TRACKER_END}"
    )


# ---------------------------------------------------------------------------
# README update
# ---------------------------------------------------------------------------

def update_readme(readme_path: Path, tracker_block: str) -> None:
    content = readme_path.read_text(encoding="utf-8")

    start_idx = content.find(TRACKER_START)
    end_idx = content.find(TRACKER_END)

    if start_idx == -1 or end_idx == -1:
        raise ValueError(
            f"Could not find {TRACKER_START!r} and/or {TRACKER_END!r} in {readme_path}"
        )

    new_content = content[:start_idx] + tracker_block + content[end_idx + len(TRACKER_END):]
    readme_path.write_text(new_content, encoding="utf-8")


# ---------------------------------------------------------------------------
# Entry point
# ---------------------------------------------------------------------------

def main() -> None:
    print(f"Scanning source files in: {SOURCE_DIR}")
    stats = scan_source_files(SOURCE_DIR)

    print(f"  Total symbols : {stats['total']}")
    print(f"  Resolved      : {stats['resolved']}")
    print(f"  Unresolved    : {stats['unresolved']}")
    accuracy = (stats["resolved"] / stats["total"] * 100) if stats["total"] > 0 else 0.0
    print(f"  Accuracy      : {accuracy:.2f}%")

    tracker_block = build_tracker_block(stats)
    update_readme(README_PATH, tracker_block)
    print(f"README updated: {README_PATH}")


if __name__ == "__main__":
    main()
