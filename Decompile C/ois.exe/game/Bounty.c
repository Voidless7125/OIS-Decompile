#include "../ois.exe.h"


// public: void * __thiscall Bounty::`scalar deleting destructor'(unsigned int)

void * __thiscall Bounty::_scalar_deleting_destructor_(Bounty *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x48);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x34);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040625e;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xf;
  this[0x34] = (Bounty)0x0;
  uVar1 = *(uint *)(this + 0x30);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x1c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0040625e;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (Bounty)0x0;
  uVar1 = *(uint *)(this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0040625e:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (Bounty)0x0;
  operator_delete(this,(nothrow_t *)0x54);
  return this;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall Bounty::describeThreeLines(void)

void __thiscall Bounty::describeThreeLines(Bounty *this)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int *piVar6;
  int *piVar7;
  basic_string<> *in_stack_00000004;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005bac71;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar2 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      piVar6 = (int *)*puVar2;
      if (*piVar6 == *(int *)(*(int *)(this + 0x4c) + 0x18)) goto LAB_0048224f;
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(g_gameData + 0x40));
  }
  piVar6 = (int *)0x0;
LAB_0048224f:
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  local_8 = 0;
  pcVar1 = (char *)strUsingArgs((char *)local_30,"`$Bounty\n",local_18);
  local_8 = 1;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  std::basic_string<>::append(in_stack_00000004,pcVar3,*(uint *)(pcVar1 + 0x10));
  local_8 = local_8 & 0xffffff00;
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
  local_8 = 2;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  std::basic_string<>::append(in_stack_00000004,pcVar3,*(uint *)(pcVar1 + 0x10));
  local_8 = local_8 & 0xffffff00;
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
  local_8 = 3;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  std::basic_string<>::append(in_stack_00000004,pcVar3,*(uint *)(pcVar1 + 0x10));
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
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
