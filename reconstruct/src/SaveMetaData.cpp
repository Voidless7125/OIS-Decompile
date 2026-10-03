// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: SaveMetaData * __thiscall SaveMetaData::SaveMetaData(SaveMetaData *this)
SaveMetaData::SaveMetaData()

{
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0xf;
  ((char *)this)[0x30] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x48) = 0;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0xf;
  ((char *)this)[0x4c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x74) = 0;
  *(undefined4 *)((char *)this + 0x78) = 0xf;
  ((char *)this)[100] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0xf;
  ((char *)this)[0x7c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0xf;
  ((char *)this)[0x94] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0xf;
  ((char *)this)[0xac] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xd4) = 0;
  *(undefined4 *)((char *)this + 0xd8) = 0xf;
  ((char *)this)[0xc4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0xf;
  ((char *)this)[0xdc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xf4) = 2;
  *(undefined4 *)((char *)this + 0xf8) = 2;
  ((char *)this)[0xfc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x100) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x104) = 0;
  return;
}


// Ghidra: void __thiscall SaveMetaData::~SaveMetaData(SaveMetaData *this)
SaveMetaData::~SaveMetaData()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)((char *)this + 0xf0);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0xdc);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0xf;
  ((char *)this)[0xdc] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0xd8);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0xc4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xd4) = 0;
  *(undefined4 *)((char *)this + 0xd8) = 0xf;
  ((char *)this)[0xc4] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0xc0);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0xac);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0xf;
  ((char *)this)[0xac] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0xa8);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x94);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0xf;
  ((char *)this)[0x94] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x90);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x7c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0xf;
  ((char *)this)[0x7c] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x78);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 100);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x74) = 0;
  *(undefined4 *)((char *)this + 0x78) = 0xf;
  ((char *)this)[100] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x60);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x4c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0xf;
  ((char *)this)[0x4c] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x44);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x30);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0xf;
  ((char *)this)[0x30] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004b719c;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x14);
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
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  return;
}
