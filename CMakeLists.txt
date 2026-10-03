cmake_minimum_required(VERSION 3.16)
project(ObjectsInSpaceReconstruction CXX)

# ---------------------------------------------------------------------------
# Objects in Space - reconstruction build
#
# STATUS: this target only *compiles* (syntax/type checks) the reconstructed
# sources.  It does not link and is not expected to run yet; see
# reconstruct/README.md and reconstruct/COMPILE_STATUS.md for how far along
# the code is.  The Ghidra dumps under "Decompile C/" are reference material
# and are not built.
#
#   scripts/fetch_cocos2d.sh                 # once: cocos2d-x 3.15.1
#   cmake -B build -DCMAKE_CXX_COMPILER=clang++ .
#   cmake --build build --target compile-check
# ---------------------------------------------------------------------------

set(COCOS_ROOT "${CMAKE_SOURCE_DIR}/third_party/cocos2d-x" CACHE PATH "cocos2d-x 3.15.1 checkout")
if(NOT EXISTS "${COCOS_ROOT}/cocos/cocos2d.h")
  message(FATAL_ERROR "cocos2d-x not found at ${COCOS_ROOT}. Run scripts/fetch_cocos2d.sh first.")
endif()

file(GLOB OIS_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/reconstruct/src/*.cpp")

add_library(ois_reconstruct OBJECT ${OIS_SOURCES})
set_target_properties(ois_reconstruct PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_include_directories(ois_reconstruct PRIVATE
  "${CMAKE_SOURCE_DIR}/reconstruct/include"
  "${COCOS_ROOT}" "${COCOS_ROOT}/cocos" "${COCOS_ROOT}/cocos/platform/linux"
  "${COCOS_ROOT}/external" "${COCOS_ROOT}/extensions"
  /usr/include/GLFW /usr/include/freetype2)
target_compile_definitions(ois_reconstruct PRIVATE LINUX)
target_compile_options(ois_reconstruct PRIVATE -m32 -fsyntax-only -Wno-everything -ferror-limit=0)

# The fast path used by CI and contributors: precompiles the headers once and
# prints a per-category error summary instead of 20,000 raw diagnostics.
add_custom_target(compile-check
  COMMAND python3 "${CMAKE_SOURCE_DIR}/scripts/compile_check.py" --cocos "${COCOS_ROOT}" --write-status
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
  USES_TERMINAL)
