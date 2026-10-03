#include "../ois.exe.h"


// struct Dice __cdecl unpackDiceFromString(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __cdecl unpackDiceFromString(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  vector<> *pvVar5;
  int *in_ECX;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  int iVar7;
  uint in_stack_00000018;
  basic_string<> abStack_68 [12];
  undefined4 uStack_5c;
  void *pvVar8;
  vector<> local_40 [12];
  char *local_34 [3];
  int local_28;
  char *local_24;
  int local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar2 = in_stack_00000018;
  pvVar1 = param_1;
  puStack_c = &DAT_005ccdc8;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_5c = 0x59316f;
  bVar3 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
  if (!bVar3) {
    uStack_5c = 0x593192;
    bVar3 = std::_Traits_equal<>("nil",3,pcVar4,unaff_EDI);
    if (!bVar3) {
      std::basic_string<>::basic_string<>(abStack_68,(basic_string<> *)&param_1);
      splitStringBy();
      local_8._0_1_ = 1;
      pcVar4 = local_34[0];
      if (0xf < *(uint *)(local_34[0] + 0x14)) {
        pcVar4 = *(char **)local_34[0];
      }
      local_28 = atoi(pcVar4);
      iVar7 = 0;
      std::basic_string<>::basic_string<>(abStack_68,(basic_string<> *)(local_34[0] + 0x18));
      splitStringBy();
      local_8 = CONCAT31(local_8._1_3_,2);
      local_11 = '\0';
      if ((uint)((local_20 - (int)local_24) / 0x18) < 2) {
        local_11 = '\x01';
        std::basic_string<>::basic_string<>(abStack_68,(basic_string<> *)(local_34[0] + 0x18));
        pvVar5 = (vector<> *)splitStringBy();
        std::vector<>::operator=((vector<> *)&local_24,pvVar5);
        std::vector<>::_Tidy(local_40);
      }
      pcVar4 = local_24;
      if (0xf < *(uint *)(local_24 + 0x14)) {
        pcVar4 = *(char **)local_24;
      }
      local_18 = atoi(pcVar4);
      if (1 < (uint)((local_20 - (int)local_24) / 0x18)) {
        pcVar4 = local_24 + 0x18;
        if (local_11 == '\0') {
          if (0xf < *(uint *)(local_24 + 0x2c)) {
            pcVar4 = *(char **)pcVar4;
          }
          iVar7 = atoi(pcVar4);
        }
        else {
          if (0xf < *(uint *)(local_24 + 0x2c)) {
            pcVar4 = *(char **)pcVar4;
          }
          iVar7 = atoi(pcVar4);
          iVar7 = -iVar7;
        }
      }
      *in_ECX = local_28;
      in_ECX[1] = local_18;
      in_ECX[2] = iVar7;
      std::vector<>::_Tidy((vector<> *)&local_24);
      std::vector<>::_Tidy((vector<> *)local_34);
      if (in_stack_00000018 < 0x10) {
        ExceptionList = local_10;
        return;
      }
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
      pvVar8 = param_1;
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar8 = *(void **)((int)param_1 + -4);
        pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
        if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_00593341;
    }
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (uVar2 < 0x10) {
    ExceptionList = local_10;
    return;
  }
  pnVar6 = (nothrow_t *)(uVar2 + 1);
  pvVar8 = pvVar1;
  if ((nothrow_t *)0xfff < pnVar6) {
    pnVar6 = (nothrow_t *)(uVar2 + 0x24);
    pvVar8 = *(void **)((int)pvVar1 + -4);
    if (0x1f < (uint)((int)pvVar1 + (-4 - (int)*(void **)((int)pvVar1 + -4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
LAB_00593341:
  uStack_5c = 0x593346;
  operator_delete(pvVar8,pnVar6);
  ExceptionList = local_10;
  return;
}


// struct Dice __cdecl unpackDiceString(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __cdecl unpackDiceString(void *param_1)

{
  int iVar1;
  char *pcVar2;
  int *in_ECX;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000018;
  basic_string<> abStack_44 [12];
  undefined4 uStack_38;
  char *local_1c;
  int local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b37a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&param_1);
  splitStringBy();
  if ((local_18 - (int)local_1c) - 0x30U < 0x18) {
    pcVar2 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar2 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar2);
    *in_ECX = iVar1;
    pcVar2 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    in_ECX[1] = iVar1;
  }
  else if ((local_18 - (int)local_1c) - 0x48U < 0x18) {
    pcVar2 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar2 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar2);
    *in_ECX = iVar1;
    pcVar2 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    in_ECX[1] = iVar1;
    pcVar2 = local_1c + 0x30;
    if (0xf < *(uint *)(local_1c + 0x44)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    in_ECX[2] = iVar1;
  }
  std::vector<>::_Tidy((vector<> *)&local_1c);
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_1 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x594552;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return;
}


// struct Dice __cdecl unpackReadableDiceString(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __cdecl unpackReadableDiceString(void *param_1)

{
  int iVar1;
  vector<> *pvVar2;
  char *pcVar3;
  int *in_ECX;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  basic_string<> abStack_54 [12];
  undefined4 uStack_48;
  vector<> local_2c [16];
  char *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd040;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)&param_1);
  splitStringBy();
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar3 = local_1c;
  if (0xf < *(uint *)(local_1c + 0x14)) {
    pcVar3 = *(char **)local_1c;
  }
  iVar1 = atoi(pcVar3);
  *in_ECX = iVar1;
  std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)(local_1c + 0x18));
  pvVar2 = (vector<> *)splitStringBy();
  if ((vector<> *)&local_1c != pvVar2) {
    std::vector<>::_Tidy((vector<> *)&local_1c);
    local_1c = *(char **)pvVar2;
    local_18 = *(int *)(pvVar2 + 4);
    local_14 = *(undefined4 *)(pvVar2 + 8);
    *(undefined4 *)pvVar2 = 0;
    *(undefined4 *)(pvVar2 + 4) = 0;
    *(undefined4 *)(pvVar2 + 8) = 0;
  }
  std::vector<>::_Tidy(local_2c);
  if ((local_18 - (int)local_1c) - 0x30U < 0x18) {
    pcVar3 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar3 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar3);
    in_ECX[1] = iVar1;
    pcVar3 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar3 = *(char **)pcVar3;
    }
    iVar1 = atoi(pcVar3);
    in_ECX[2] = iVar1;
  }
  else {
    pcVar3 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar3 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar3);
    in_ECX[1] = iVar1;
  }
  std::vector<>::_Tidy((vector<> *)&local_1c);
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar4 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_48 = 0x5946c8;
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return;
}
