#include "../ois.exe.h"


// public: __thiscall ContractClass::~ContractClass(void)

void __thiscall ContractClass::~ContractClass(ContractClass *this)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  puVar6 = *(undefined4 **)(this + 0x70);
  uVar3 = (*(int *)(this + 0x74) - (int)puVar6) + 3U >> 2;
  if (*(undefined4 **)(this + 0x74) < puVar6) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      if ((Requirement *)*puVar6 != (Requirement *)0x0) {
        Requirement::_scalar_deleting_destructor_((Requirement *)*puVar6,1);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != uVar3);
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x70);
  std::vector<>::_Tidy((vector<> *)(this + 0x88));
  std::vector<>::_Tidy((vector<> *)(this + 0x7c));
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x78) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_00484354;
    }
    operator_delete(pvVar2,pnVar4);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
  }
  uVar3 = *(uint *)(this + 0x5c);
  if (0xf < uVar3) {
    pvVar1 = *(void **)(this + 0x48);
    pnVar4 = (nothrow_t *)(uVar3 + 1);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_00484354;
    }
    operator_delete(pvVar2,pnVar4);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (ContractClass)0x0;
  uVar3 = *(uint *)(this + 0x3c);
  if (0xf < uVar3) {
    pvVar1 = *(void **)(this + 0x28);
    pnVar4 = (nothrow_t *)(uVar3 + 1);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_00484354;
    }
    operator_delete(pvVar2,pnVar4);
  }
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0xf;
  this[0x28] = (ContractClass)0x0;
  std::vector<>::_Tidy((vector<> *)(this + 0x1c));
  uVar3 = *(uint *)(this + 0x14);
  if (0xf < uVar3) {
    pvVar1 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar3 + 1);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
LAB_00484354:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (ContractClass)0x0;
  return;
}
