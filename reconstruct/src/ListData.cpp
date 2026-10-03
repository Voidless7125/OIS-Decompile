// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ListData * __thiscall ListData::ListData(ListData *this,undefined4 param_1,void *param_3)
ListData::ListData(undefined4 param_1, void * param_3)

{
  char stack0x00000024[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000038;
  undefined2 uStack0000003c;
  ListData LStack0000003e;
  undefined4 in_stack_00000040;
  ListData in_stack_00000044;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b5121;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *(undefined4 *)this = param_1;
  ghidra::str::ctor((std::string *)((char *)this + 4),(std::string *)&param_3);
  // [seh] local_8._0_1_ = 2;
  *(undefined4 *)((char *)this + 0x1c) = in_stack_00000020;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x20),(std::string *)&stack0x00000024);
  *(undefined4 *)((char *)this + 0x48) = 0;
  *(undefined4 *)((char *)this + 0x4c) = 0xf;
  ((char *)this)[0x38] = (byte)0x0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)((char *)this + 0x50) = in_stack_00000040;
  *(undefined2 *)((char *)this + 0x58) = uStack0000003c;
  *(undefined1 **)((char *)this + 0x54) = &DAT_bf800000;
  ((char *)this)[0x5a] = LStack0000003e;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0x5b));
  ((char *)this)[0x5e] = in_stack_00000044;
  if (0xf < in_stack_0000001c) {
    pnVar2 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar2 = (nothrow_t *)(in_stack_00000038 + 1);
    pvVar1 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000024 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ListData::~ListData(ListData *this)
ListData::~ListData()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)((char *)this + 0x4c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x38);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0043c24f;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x48) = 0;
  *(undefined4 *)((char *)this + 0x4c) = 0xf;
  ((char *)this)[0x38] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x34);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x20);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0043c24f;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0xf;
  ((char *)this)[0x20] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0043c24f:
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
