#include "../ois.exe.h"


// public: __thiscall Interface::~Interface(void)

void __thiscall Interface::~Interface(Interface *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  *(undefined ***)this = vftable;
  pvVar1 = *(void **)(this + 0xc);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 0x14) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}
