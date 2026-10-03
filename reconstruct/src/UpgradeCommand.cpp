// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: UpgradeCommand * __thiscall UpgradeCommand::UpgradeCommand(UpgradeCommand *this,void *param_2)
UpgradeCommand::UpgradeCommand(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int *in_stack_00000040;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c7540;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  ghidra::str::ctor((std::string *)this,(std::string *)&param_2);
  *(undefined4 *)((char *)this + 0x3c) = 0;
  // [seh] local_8._0_1_ = 3;
  if (in_stack_00000040 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000040)(this + 0x18,uVar1);
    *(undefined4 *)((char *)this + 0x3c) = uVar2;
  }
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
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
  // [seh] local_8 = 4;
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
  }
  // [seh] ExceptionList = local_10;
  return;
}
