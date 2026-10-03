// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Bounty::describeThreeLines(Bounty *this)
void Bounty::describeThreeLines()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int *piVar6;
  int *piVar7;
  std::string *in_stack_00000004;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bac71;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  puVar2 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar2 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      piVar6 = (int *)*puVar2;
      if (*piVar6 == *(int *)(*(int *)((char *)this + 0x4c) + 0x18)) goto LAB_0048224f;
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(g_gameData + 0x40));
  }
  piVar6 = (int *)0x0;
LAB_0048224f:
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  pcVar1 = (char *)strUsingArgs((char *)local_30,"`$Bounty\n",local_18);
  // [seh] local_8 = 1;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  ghidra::str::append(in_stack_00000004,pcVar3,*(uint *)(pcVar1 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    pnVar5 = (nothrow_t *)(local_1c + 1);
    pvVar4 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_30[0] + -4);
      pnVar5 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  piVar7 = piVar6 + 7;
  if (0xf < (uint)piVar6[0xc]) {
    piVar7 = (int *)*piVar7;
  }
  pcVar1 = (char *)strUsingArgs((char *)local_30,"`7in `!%s\n",piVar7);
  // [seh] local_8 = 2;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  ghidra::str::append(in_stack_00000004,pcVar3,*(uint *)(pcVar1 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    pnVar5 = (nothrow_t *)(local_1c + 1);
    pvVar4 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_30[0] + -4);
      pnVar5 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  pcVar1 = (char *)strUsingArgs((char *)local_30,"Reward: `$%dc",*(undefined4 *)this);
  // [seh] local_8 = 3;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  ghidra::str::append(in_stack_00000004,pcVar3,*(uint *)(pcVar1 + 0x10));
  if (0xf < local_1c) {
    pnVar5 = (nothrow_t *)(local_1c + 1);
    pvVar4 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_30[0] + -4);
      pnVar5 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
