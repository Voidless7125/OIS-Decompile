#!/bin/sh
# Fetch cocos2d-x 3.15.1 (the engine version the game shipped with) into
# third_party/cocos2d-x at the exact commit, without the full history.
#
# libcocos2d.dll in this repo reports "cocos2d-x-3.15.1"; the pinned commit is
# the 3.15.1 release.  Only the sources are needed for compile-checking; the
# engine itself is linked from the prebuilt libcocos2d.lib / .dll.
set -eu
COMMIT=b5d55295025aa4812d26a703da7eb1b46af13c15
DEST="$(cd "$(dirname "$0")/.." && pwd)/third_party/cocos2d-x"

if [ -d "$DEST/.git" ] && [ "$(git -C "$DEST" rev-parse HEAD)" = "$COMMIT" ]; then
    echo "cocos2d-x already at $COMMIT"
    exit 0
fi
mkdir -p "$DEST"
cd "$DEST"
git init -q .
git remote remove origin 2>/dev/null || true
git remote add origin https://github.com/cocos2d/cocos2d-x
git fetch --depth 1 origin "$COMMIT"
git checkout -q FETCH_HEAD
echo "cocos2d-x $(git rev-parse --short HEAD) ready in $DEST"
