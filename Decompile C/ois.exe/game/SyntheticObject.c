#include "../ois.exe.h"


// public: __thiscall SyntheticObject::SyntheticObject(enum
// ESyntheticObjectType::SyntheticObjectType)

SyntheticObject * __thiscall
SyntheticObject::SyntheticObject(SyntheticObject *this,SyntheticObjectType param_1)

{
  CargoHold *this_00;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c4b49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (SyntheticObject)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x38) = 2;
  *(undefined ***)this = vftable;
  this[0x40] = (SyntheticObject)0x0;
  *(int *)(this + 0x44) = s_nextSyntheticID;
  s_nextSyntheticID = s_nextSyntheticID + 1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (SyntheticObject)0x0;
  *(SyntheticObjectType *)(this + 0x60) = param_1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (SyntheticObject)0x0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xf;
  this[0x80] = (SyntheticObject)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0xf;
  this[0x98] = (SyntheticObject)0x0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0xf;
  this[0xb0] = (SyntheticObject)0x0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0xf;
  this[200] = (SyntheticObject)0x0;
  local_8 = 6;
  *(undefined1 **)(this + 0xe0) = &DAT_bf800000;
  this_00 = operator_new(0x50);
  *this_00 = (CargoHold)0x0;
  *(undefined4 *)(this_00 + 4) = 1000;
  *(undefined4 *)(this_00 + 0x44) = 0;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0x14) = 0;
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(undefined4 *)(this_00 + 0x1c) = 0;
  *(undefined4 *)(this_00 + 0x20) = 0;
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0;
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x3c) = 0;
  *(CargoHold **)(this + 0xe8) = this_00;
  CargoHold::configureSlots(this_00,0,0);
  ExceptionList = local_10;
  return this;
}


// public: __thiscall SyntheticObject::~SyntheticObject(void)

void __thiscall SyntheticObject::~SyntheticObject(SyntheticObject *this)

{
  CargoHold *this_00;
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  this_00 = *(CargoHold **)(this + 0xe8);
  *(undefined ***)this = vftable;
  if (this_00 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(this_00,(uint)this_00);
  }
  *(undefined4 *)(this + 0xe8) = 0;
  uVar1 = *(uint *)(this + 0xdc);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 200);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00523383;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0xf;
  this[200] = (SyntheticObject)0x0;
  uVar1 = *(uint *)(this + 0xc4);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0xb0);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00523383;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0xf;
  this[0xb0] = (SyntheticObject)0x0;
  uVar1 = *(uint *)(this + 0xac);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x98);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00523383;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0xf;
  this[0x98] = (SyntheticObject)0x0;
  uVar1 = *(uint *)(this + 0x94);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x80);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00523383;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xf;
  this[0x80] = (SyntheticObject)0x0;
  uVar1 = *(uint *)(this + 0x7c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x68);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00523383;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (SyntheticObject)0x0;
  uVar1 = *(uint *)(this + 0x5c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x48);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00523383;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (SyntheticObject)0x0;
  uVar1 = *(uint *)(this + 0x1c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 8);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_00523383:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (SyntheticObject)0x0;
  return;
}


// public: int __thiscall SyntheticObject::getNextEmptyCargoPod(void)

int __thiscall SyntheticObject::getNextEmptyCargoPod(SyntheticObject *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 != 0) {
    iVar2 = 0;
    piVar3 = (int *)(iVar1 + 0xc);
    do {
      if (iVar2 < 0) {
        return iVar2;
      }
      if ((0 < *(int *)(iVar1 + 8)) && (*(int *)(iVar1 + 8) <= iVar2)) {
        return iVar2;
      }
      if (*piVar3 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0xe);
  }
  return -1;
}
