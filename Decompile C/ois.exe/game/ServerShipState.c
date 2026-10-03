#include "../ois.exe.h"


// public: __thiscall ServerShipState::~ServerShipState(void)

void __thiscall ServerShipState::~ServerShipState(ServerShipState *this)

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
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004202d3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (ServerShipState)0x0;
  uVar1 = *(uint *)(this + 0x44);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x30);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004202d3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (ServerShipState)0x0;
  uVar1 = *(uint *)(this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004202d3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (ServerShipState)0x0;
  uVar1 = *(uint *)(this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_004202d3:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (ServerShipState)0x0;
  return;
}
