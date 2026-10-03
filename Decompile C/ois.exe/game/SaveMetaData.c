#include "../ois.exe.h"


// public: __thiscall SaveMetaData::SaveMetaData(void)

SaveMetaData * __thiscall SaveMetaData::SaveMetaData(SaveMetaData *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0xf;
  this[0x4c] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0xf;
  this[100] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0xf;
  this[0x7c] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0xf;
  this[0x94] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0xf;
  this[0xac] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0xf;
  this[0xc4] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0xf;
  this[0xdc] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0xf4) = 2;
  *(undefined4 *)(this + 0xf8) = 2;
  this[0xfc] = (SaveMetaData)0x0;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  *(undefined4 *)(this + 0x104) = 0;
  return this;
}


// public: __thiscall SaveMetaData::~SaveMetaData(void)

void __thiscall SaveMetaData::~SaveMetaData(SaveMetaData *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0xf0);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0xdc);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0xf;
  this[0xdc] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0xd8);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0xc4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0xf;
  this[0xc4] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0xc0);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0xac);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0xf;
  this[0xac] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0xa8);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x94);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0xf;
  this[0x94] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0x90);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x7c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0xf;
  this[0x7c] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0x78);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 100);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0xf;
  this[100] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0x60);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x4c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0xf;
  this[0x4c] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0x44);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x30);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (SaveMetaData)0x0;
  uVar1 = *(uint *)(this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_004b719c:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (SaveMetaData)0x0;
  return;
}
