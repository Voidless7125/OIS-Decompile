// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: CommsCommand * __thiscall CommsCommand::CommsCommand(CommsCommand *this,void *param_2)
CommsCommand::CommsCommand(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000048[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000060[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int *in_stack_00000040;
  CommsCommand in_stack_00000044;
  void *in_stack_00000048;
  undefined4 in_stack_00000058;
  uint in_stack_0000005c;
  void *in_stack_00000060;
  uint in_stack_00000074;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8426;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 3;
  ghidra::str::ctor((std::string *)this,(std::string *)&param_2);
  // [seh] local_8._0_1_ = 4;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x18),(std::string *)&stack0x00000048);
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x30),(std::string *)&stack0x00000060);
  ((char *)this)[0x48] = in_stack_00000044;
  *(undefined4 *)((char *)this + 0x74) = 0;
  // [seh] local_8._0_1_ = 7;
  if (in_stack_00000040 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000040)(this + 0x50,uVar1);
    *(undefined4 *)((char *)this + 0x74) = uVar2;
  }
  // [seh] local_8._0_1_ = 2;
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  // [seh] local_8 = CONCAT31(local_8._1_3_,8);
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
    in_stack_00000040 = (int *)0x0;
  }
  if (0xf < in_stack_0000005c) {
    pnVar4 = (nothrow_t *)(in_stack_0000005c + 1);
    pvVar3 = in_stack_00000048;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)in_stack_00000048 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000005c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000048 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000058 = 0;
  in_stack_0000005c = 0xf;
  in_stack_00000048 = (void *)((uint)in_stack_00000048 & 0xffffff00);
  if (0xf < in_stack_00000074) {
    pnVar4 = (nothrow_t *)(in_stack_00000074 + 1);
    pvVar3 = in_stack_00000060;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)in_stack_00000060 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000074 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000060 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall CommsCommand::~CommsCommand(CommsCommand *this)
CommsCommand::~CommsCommand()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  CommsCommand *pCVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b1790;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pCVar1 = *(CommsCommand **)((char *)this + 0x74);
  if (pCVar1 != (CommsCommand *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x10))
              // [cookie] (pCVar1 != this + 0x50,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)((char *)this + 0x74) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x44);
  if (0xf < uVar2) {
    pvVar3 = *(void **)((char *)this + 0x30);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_005475a5;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0xf;
  ((char *)this)[0x30] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x2c);
  if (0xf < uVar2) {
    pvVar3 = *(void **)((char *)this + 0x18);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_005475a5;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x14);
  if (0xf < uVar2) {
    pvVar3 = *(void **)this;
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
LAB_005475a5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}
