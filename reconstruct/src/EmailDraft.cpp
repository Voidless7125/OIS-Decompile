// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall EmailDraft::~EmailDraft(EmailDraft *this)
EmailDraft::~EmailDraft()

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  pvVar1 = *(void **)((char *)this + 0x70);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x78) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004b4a7d;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x70) = 0;
    *(undefined4 *)((char *)this + 0x74) = 0;
    *(undefined4 *)((char *)this + 0x78) = 0;
  }
  pvVar1 = *(void **)((char *)this + 100);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x6c) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004b4a7d;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 100) = 0;
    *(undefined4 *)((char *)this + 0x68) = 0;
    *(undefined4 *)((char *)this + 0x6c) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x60);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x4c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004b4a7d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0xf;
  ((char *)this)[0x4c] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x48);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x34);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004b4a7d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0xf;
  ((char *)this)[0x34] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x30);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x1c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004b4a7d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0xf;
  ((char *)this)[0x1c] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x18);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 4);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_004b4a7d:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0xf;
  ((char *)this)[4] = (byte)0x0;
  return;
}
