#include "../ois.exe.h"


// public: __thiscall Command::~Command(void)

void __thiscall Command::~Command(Command *this)

{
  Command *pCVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pCVar1 = *(Command **)(this + 0x3c);
  if (pCVar1 != (Command *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x10))
              (pCVar1 != this + 0x18,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  uVar2 = *(uint *)(this + 0x14);
  if (0xf < uVar2) {
    pvVar3 = *(void **)this;
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (Command)0x0;
  ExceptionList = local_10;
  return;
}
