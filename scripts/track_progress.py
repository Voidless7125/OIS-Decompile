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

    for path in sorted(source_dir.rglob("*")):
        if path.suffix.lower() not in (".c", ".h"):
            continue

        try:
            text = path.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue

        for match in IDENTIFIER_PATTERN.finditer(text):
            name = match.group()
            if name in C_KEYWORDS:
                continue
            if name.startswith(("FUN_", "DAT_", "PTR_")):
                unresolved_symbols.add(name)
            else:
                resolved_symbols.add(name)

    return {
        "resolved": len(resolved_symbols),
        "unresolved": len(unresolved_symbols),
        "total": len(resolved_symbols) + len(unresolved_symbols),
    }


# ---------------------------------------------------------------------------
# Progress bar helper
# ---------------------------------------------------------------------------

def build_progress_bar(percentage: float, width: int = BAR_WIDTH) -> str:
    filled = round(percentage / 100 * width)
    filled = max(0, min(width, filled))
    return "[" + "█" * filled + "░" * (width - filled) + "]"


# ---------------------------------------------------------------------------
# README block generation
# ---------------------------------------------------------------------------

def build_tracker_block(stats: dict) -> str:
    resolved = stats["resolved"]
    unresolved = stats["unresolved"]
    total = stats["total"]
    accuracy = (resolved / total * 100) if total > 0 else 0.0
    bar = build_progress_bar(accuracy)

    return (
        f"{TRACKER_START}\n"
        "<table>\n"
        "  <tbody>\n"
        "    <tr>\n"
        "      <td>\n"
        "<pre>\n"
        "╔══════════════════════════════════════╗\n"
        "║   OIS DECOMPILATION PROGRESS TRACKER ║\n"
        "╠══════════════════════════════════════╣\n"
        f"║  Total Symbols  : {total:<20}║\n"
        f"║  Resolved       : {resolved:<20}║\n"
        f"║  Unresolved     : {unresolved:<20}║\n"
        f"║  Accuracy       : {f'{accuracy:.2f}%':<20}║\n"
        "╠══════════════════════════════════════╣\n"
        f"║  Progress  {bar} {accuracy:5.1f}% ║\n"
        "╚══════════════════════════════════════╝\n"
        "</pre>\n"
        "      </td>\n"
        "    </tr>\n"
        "  </tbody>\n"
        "</table>\n"
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
