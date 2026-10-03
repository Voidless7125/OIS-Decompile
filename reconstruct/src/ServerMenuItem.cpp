// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ServerMenuItem * __thiscall ServerMenuItem::ServerMenuItem(ServerMenuItem *this,undefined4 param_1,void *param_3)
ServerMenuItem::ServerMenuItem(undefined4 param_1, void * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000020[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000004c[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  int *in_stack_00000044;
  undefined4 in_stack_00000048;
  int *in_stack_00000070;
  ServerMenuItem in_stack_00000074;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c685e;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 2;
  *(undefined4 *)this = param_1;
  ghidra::str::ctor((std::string *)((char *)this + 4),(std::string *)&param_3);
  *(undefined4 *)((char *)this + 0x44) = 0;
  // [seh] local_8._0_1_ = 4;
  if (in_stack_00000044 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000044)(this + 0x20,uVar1);
    *(undefined4 *)((char *)this + 0x44) = uVar2;
  }
  *(undefined4 *)((char *)this + 0x6c) = 0;
  // [seh] local_8._0_1_ = 6;
  if (in_stack_00000070 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000070)((char *)this + 0x48);
    *(undefined4 *)((char *)this + 0x6c) = uVar2;
  }
  *(undefined4 *)((char *)this + 0x70) = in_stack_00000048;
  // [seh] local_8._0_1_ = 1;
  ((char *)this)[0x74] = in_stack_00000074;
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  // [seh] local_8 = CONCAT31(local_8._1_3_,7);
  if (in_stack_00000044 != (int *)0x0) {
    (**(code **)(*in_stack_00000044 + 0x10))(in_stack_00000044 != (int *)&stack0x00000020);
    in_stack_00000044 = (int *)0x0;
  }
  // [seh] local_8 = 8;
  if (in_stack_00000070 != (int *)0x0) {
    (**(code **)(*in_stack_00000070 + 0x10))(in_stack_00000070 != (int *)&stack0x0000004c);
  }
  // [seh] ExceptionList = local_10;
  return;
}
