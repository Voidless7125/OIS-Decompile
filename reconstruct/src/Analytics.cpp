// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Analytics::logEvent(undefined4 param_1,void *param_2)
void Analytics::logEvent(undefined4 param_1, void * param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  void *in_stack_00000034;
  uint in_stack_00000048;
  
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) goto LAB_00401b01;
    }
    operator_delete(pvVar1,pnVar2);
  }
  if (0xf < in_stack_00000030) {
    pnVar2 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar1 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_0000001c + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar1))) goto LAB_00401b01;
    }
    operator_delete(pvVar1,pnVar2);
  }
  if (0xf < in_stack_00000048) {
    pnVar2 = (nothrow_t *)(in_stack_00000048 + 1);
    pvVar1 = in_stack_00000034;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000034 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000048 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000034 + (-4 - (int)pvVar1))) {
LAB_00401b01:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return;
}
