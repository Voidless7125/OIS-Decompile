// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: PlayerGuidedToPort * __thiscall PlayerGuidedToPort::PlayerGuidedToPort(PlayerGuidedToPort *this,void *param_2)
PlayerGuidedToPort::PlayerGuidedToPort(void * param_2)

{
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b5468;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  ghidra::str::ctor((std::string *)this,(std::string *)&param_2);
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x18),(std::string *)&stack0x0000001c);
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar2 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar1 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_0000001c + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}
