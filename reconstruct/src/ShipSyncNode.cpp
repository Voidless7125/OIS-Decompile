// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall ShipSyncNode::~ShipSyncNode(ShipSyncNode *this)
ShipSyncNode::~ShipSyncNode()

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  pvVar1 = *(void **)((char *)this + 0x58);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x60) - (int)pvVar1 & 0xfffffff8);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00424389;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x58) = 0;
    *(undefined4 *)((char *)this + 0x5c) = 0;
    *(undefined4 *)((char *)this + 0x60) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x4c);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x54) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00424389;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x4c) = 0;
    *(undefined4 *)((char *)this + 0x50) = 0;
    *(undefined4 *)((char *)this + 0x54) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x40);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x48) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00424389;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x40) = 0;
    *(undefined4 *)((char *)this + 0x44) = 0;
    *(undefined4 *)((char *)this + 0x48) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x34);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x3c) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00424389;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x34) = 0;
    *(undefined4 *)((char *)this + 0x38) = 0;
    *(undefined4 *)((char *)this + 0x3c) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x28);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x30) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00424389;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x28) = 0;
    *(undefined4 *)((char *)this + 0x2c) = 0;
    *(undefined4 *)((char *)this + 0x30) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x1c);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x24) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00424389;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x1c) = 0;
    *(undefined4 *)((char *)this + 0x20) = 0;
    *(undefined4 *)((char *)this + 0x24) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x14);
  if (0xf < uVar2) {
    pvVar1 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_00424389:
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
