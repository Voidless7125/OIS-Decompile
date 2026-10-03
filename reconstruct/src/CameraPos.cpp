// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall CameraPos::~CameraPos(CameraPos *this)
CameraPos::~CameraPos()

{
  cocos2d::Vec3::~Vec3((Vec3 *)((char *)this + 0xc));
                    // WARNING: Could not recover jumptable at 0x00536a4f. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Vec3::~Vec3((Vec3 *)this);
  return;
}
