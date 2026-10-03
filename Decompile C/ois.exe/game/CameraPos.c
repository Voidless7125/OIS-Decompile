#include "../ois.exe.h"


// public: __thiscall CameraPos::~CameraPos(void)

void __thiscall CameraPos::~CameraPos(CameraPos *this)

{
  cocos2d::Vec3::~Vec3((Vec3 *)(this + 0xc));
                    // WARNING: Could not recover jumptable at 0x00536a4f. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Vec3::~Vec3((Vec3 *)this);
  return;
}
