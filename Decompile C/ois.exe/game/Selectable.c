#include "../ois.exe.h"


// public: __thiscall Selectable::~Selectable(void)

void __thiscall Selectable::~Selectable(Selectable *this)

{
                    // WARNING: Could not recover jumptable at 0x00572a70. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Rect::~Rect((Rect *)this);
  return;
}
