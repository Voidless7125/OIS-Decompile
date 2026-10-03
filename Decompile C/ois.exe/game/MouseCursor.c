#include "../ois.exe.h"


// public: __thiscall MouseCursor::~MouseCursor(void)

void __thiscall MouseCursor::~MouseCursor(MouseCursor *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x24);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x10);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xf;
  this[0x10] = (MouseCursor)0x0;
                    // WARNING: Could not recover jumptable at 0x00467c98. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Rect::~Rect((Rect *)this);
  return;
}
