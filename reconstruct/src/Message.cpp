// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Message * __thiscall Message::Message(Message *this,undefined4 param_1,void *param_3)
Message::Message(undefined4 param_1, void * param_3)

{
  char stack0x00000020[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000050[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000038[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 in_stack_00000030;
  uint in_stack_00000034;
  void *in_stack_00000038;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  void *in_stack_00000050;
  uint in_stack_00000064;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b4eb1;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 3;
  *(undefined4 *)this = 0xffffffff;
  ghidra::str::ctor((std::string *)((char *)this + 4),(std::string *)&param_3);
  // [seh] local_8._0_1_ = 4;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x1c),(std::string *)&stack0x00000020);
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x34),(std::string *)&stack0x00000050);
  // [seh] local_8 = CONCAT31(local_8._1_3_,6);
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x4c),(std::string *)&stack0x00000038);
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
  if (0xf < in_stack_00000034) {
    pnVar2 = (nothrow_t *)(in_stack_00000034 + 1);
    pvVar1 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000020 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000030 = 0;
  in_stack_00000034 = 0xf;
  in_stack_00000020 = (void *)((uint)in_stack_00000020 & 0xffffff00);
  if (0xf < in_stack_0000004c) {
    pnVar2 = (nothrow_t *)(in_stack_0000004c + 1);
    pvVar1 = in_stack_00000038;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000038 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000004c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000038 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000048 = 0;
  in_stack_0000004c = 0xf;
  in_stack_00000038 = (void *)((uint)in_stack_00000038 & 0xffffff00);
  if (0xf < in_stack_00000064) {
    pnVar2 = (nothrow_t *)(in_stack_00000064 + 1);
    pvVar1 = in_stack_00000050;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000050 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000064 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000050 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}
