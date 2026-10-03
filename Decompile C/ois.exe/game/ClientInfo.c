#include "../ois.exe.h"


// public: void * __thiscall ClientInfo::`scalar deleting destructor'(unsigned int)

void * __thiscall ClientInfo::_scalar_deleting_destructor_(ClientInfo *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x5c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x48);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0042347e;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (ClientInfo)0x0;
  uVar1 = *(uint *)(this + 0x3c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x28);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0042347e;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0xf;
  this[0x28] = (ClientInfo)0x0;
  uVar1 = *(uint *)(this + 0x24);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x10);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0042347e:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xf;
  this[0x10] = (ClientInfo)0x0;
  operator_delete(this,(nothrow_t *)0x70);
  return this;
}
