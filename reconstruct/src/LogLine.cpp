// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: LogLine * __thiscall LogLine::LogLine(LogLine *this,void *param_2)
LogLine::LogLine(void * param_2)

{
  GameLogic *pGVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2dc8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor((std::string *)((char *)this + 0x18),(std::string *)&param_2);
  pGVar1 = g_gameLogic;
  *(undefined4 *)((char *)this + 0x30) = in_stack_0000001c;
  *(undefined4 *)this = *(undefined4 *)(pGVar1 + 400);
  *(undefined4 *)((char *)this + 4) = *(undefined4 *)(pGVar1 + 0x18c);
  *(undefined4 *)((char *)this + 8) = *(undefined4 *)(pGVar1 + 0x188);
  *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)(pGVar1 + 0x184);
  *(undefined4 *)((char *)this + 0x10) = *(undefined4 *)(pGVar1 + 0x180);
  *(int *)((char *)this + 0x14) = (int)*(float *)(pGVar1 + 0x17c);
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return;
}
