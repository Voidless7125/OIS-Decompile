#include "../ois_server.exe.h"


void __cdecl FUN_004d8120(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *this;
  char ****ppppcVar3;
  byte *pbVar4;
  void *pvVar5;
  char ****ppppcVar6;
  uint in_stack_00000020;
  void *in_stack_ffffff90;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bdec0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) {
    FUN_004024e0(local_2c,(undefined4 *)(*(int *)(param_1 + 0x174) + 0x80));
    local_8 = 1;
    ppppcVar6 = local_2c;
    if (0xf < local_18) {
      ppppcVar6 = (char ****)local_2c[0];
    }
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar3,(char *)((int)ppppcVar6 + local_1c),
                 (undefined1 *)ppppcVar6);
    iVar1 = *(int *)(param_1 + 0x174);
    pbVar4 = (byte *)(iVar1 + 0xb0);
    if (0xf < *(uint *)(iVar1 + 0xc4)) {
      pbVar4 = *(byte **)(iVar1 + 0xb0);
    }
    uVar2 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0xc0),(byte *)&PTR_005ce008,0);
    if ((char)uVar2 == '\0') {
      FUN_00591e00((undefined1 *)local_44,"%s_has_downloaded_data");
      local_48 = &stack0xffffff90;
      local_8 = 2;
      FUN_004024e0(&stack0xffffff90,local_44);
      local_8 = 3;
      this = FUN_00412df0();
      local_8 = 2;
      FUN_004a1150(this,in_stack_ffffff90);
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
    if (0xf < local_18) {
      ppppcVar6 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar6 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  }
  if (0xf < in_stack_00000020) {
    pvVar5 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar5 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004d8310(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 *this;
  char ****ppppcVar2;
  void *pvVar3;
  char ****ppppcVar4;
  uint in_stack_00000020;
  void **ppvVar5;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdec0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x174), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x60) == 4)) {
    FUN_004024e0(local_2c,(undefined4 *)(iVar1 + 0x80));
    local_8._0_1_ = 1;
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    ppppcVar2 = local_2c;
    if (0xf < local_18) {
      ppppcVar2 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar2,(char *)((int)ppppcVar4 + local_1c),
                 (undefined1 *)ppppcVar4);
    ppvVar5 = local_44;
    FUN_00591e00((undefined1 *)ppvVar5,"%s_has_unclamped_cargo");
    local_8._0_1_ = 2;
    local_48 = &stack0xffffff90;
    FUN_004024e0(&stack0xffffff90,local_44);
    local_8._0_1_ = 3;
    this = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a1150(this,ppvVar5);
    if (0xf < local_30) {
      pvVar3 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar3 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar4 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar4);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  }
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar3 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004d84d0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 *this;
  char ****ppppcVar2;
  void *pvVar3;
  char ****ppppcVar4;
  uint in_stack_00000020;
  void **ppvVar5;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdec0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x174), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x60) == 4)) {
    FUN_004024e0(local_2c,(undefined4 *)(iVar1 + 0x80));
    local_8._0_1_ = 1;
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    ppppcVar2 = local_2c;
    if (0xf < local_18) {
      ppppcVar2 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar2,(char *)((int)ppppcVar4 + local_1c),
                 (undefined1 *)ppppcVar4);
    ppvVar5 = local_44;
    FUN_00591e00((undefined1 *)ppvVar5,"%s_has_unclamped_cargo");
    local_8._0_1_ = 2;
    local_48 = &stack0xffffff90;
    FUN_004024e0(&stack0xffffff90,local_44);
    local_8._0_1_ = 3;
    this = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a1150(this,ppvVar5);
    if (0xf < local_30) {
      pvVar3 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar3 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar4 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar4);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  }
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar3 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 __cdecl FUN_004d8690(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdd9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((-1 < *(int *)(DAT_0065c288 + 0xfc)) && (*(char *)(DAT_0065c288 + 0x100) == '\0')) {
      uVar3 = 1;
      goto LAB_004d8701;
    }
  }
  uVar3 = 0;
LAB_004d8701:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


undefined1 __cdecl FUN_004d8750(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdd9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((*(int *)(DAT_0065c288 + 0xfc) == -1) || (*(char *)(DAT_0065c288 + 0x100) == '\0')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


undefined1 __cdecl FUN_004d8810(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdf0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((-1 < *(int *)(DAT_0065c288 + 0xf8)) &&
       (*(int *)(DAT_0065c288 + 0xf8) == *(int *)(DAT_0065c288 + 0xfc))) {
      uVar3 = 1;
      goto LAB_004d8882;
    }
  }
  uVar3 = 0;
LAB_004d8882:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


undefined1 __cdecl FUN_004d88d0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdf0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((-1 < *(int *)(DAT_0065c288 + 0xf8)) &&
       (*(int *)(DAT_0065c288 + 0xf8) != *(int *)(DAT_0065c288 + 0xfc))) {
      uVar3 = 1;
      goto LAB_004d8942;
    }
  }
  uVar3 = 0;
LAB_004d8942:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


bool __cdecl FUN_004d8990(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_00412700();
    iVar1 = FUN_0043a5a0(iVar1);
    bVar3 = 0 < iVar1;
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


byte __cdecl FUN_004d8a20(int param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  void *pvVar2;
  uint in_stack_00000020;
  uint in_stack_ffffffd0;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bda90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"starting_new_game",0x11);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return bVar1;
}


undefined1 __cdecl FUN_004d8ae0(int param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffd0;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bda90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 0xa4) != '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"starting_new_game",0x11);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d8b61;
    }
  }
  uVar3 = 0;
LAB_004d8b61:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


bool __cdecl FUN_004d8bb0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_004123f0();
    bVar3 = *(int *)(iVar1 + 0x20) != 0;
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


undefined1 __cdecl FUN_004d8c40(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xe4) != '\0')) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_00402f60();
    uVar3 = *(undefined1 *)(iVar1 + 0x44);
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


bool __cdecl FUN_004d8cd0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xe4) != '\0')) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_00402f60();
    bVar3 = *(char *)(iVar1 + 0x44) == '\0';
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return bVar3;
}


bool __cdecl FUN_004d8d70(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xe4) == '\0';
  }
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  return bVar2;
}


undefined1 __cdecl FUN_004d8dd0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(uint *)(param_1 + 0x1d4) == 0xffffffff)) ||
     ((uint)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x48) - *(int *)(*(int *)(param_1 + 0x1f8) + 0x44)
            >> 2) < *(uint *)(param_1 + 0x1d4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  return uVar2;
}


undefined1 __cdecl FUN_004d8e40(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if ((((param_1 != 0) && (*(char *)(DAT_0065b444 + 0x71) == '\0')) &&
      (*(int *)(param_1 + 0x1ec) != -1)) && (*(int *)(param_1 + 0x174) == 0)) {
    bVar1 = FUN_00507140(*(void **)(param_1 + 0x1f8),*(int *)(param_1 + 0x1ec));
    if (bVar1) {
      uVar3 = 1;
      goto LAB_004d8e80;
    }
  }
  uVar3 = 0;
LAB_004d8e80:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  return uVar3;
}


undefined1 __cdecl FUN_004d8ec0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  
  if (((param_1 != 0) && (*(char *)(DAT_0065b444 + 0x71) == '\0')) &&
     (*(int *)(param_1 + 0x174) == 0)) {
    iVar4 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
    if (0 < iVar1) {
      piVar3 = (int *)(*(int *)(param_1 + 0x1f8) + 0xc);
      do {
        if (((-1 < iVar4) &&
            ((iVar2 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), iVar2 < 1 || (iVar4 < iVar2)))) &&
           (*piVar3 != 0)) {
          uVar6 = 1;
          goto LAB_004d8f1e;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar1);
    }
  }
  uVar6 = 0;
LAB_004d8f1e:
  if (0xf < in_stack_00000020) {
    pvVar5 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar5 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  return uVar6;
}


undefined1 __cdecl FUN_004d8f60(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  float in_XMM0_Da;
  float fVar4;
  uint in_stack_00000020;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdf4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xd4) != 3)) {
    FUN_00403cb0(param_1);
    if (in_XMM0_Da <= 0.4) {
      iVar1 = FUN_0051fe10(*(int *)(param_1 + 0x24));
      if (iVar1 != 0) {
        local_18 = (float)*(double *)(param_1 + 0x28);
        local_14 = (float)*(double *)(param_1 + 0x30);
        local_20 = (float)*(double *)(iVar1 + 0x28);
        fVar4 = (float)*(double *)(iVar1 + 0x30);
        local_8 = CONCAT31(local_8._1_3_,2);
        local_1c = fVar4;
        FUN_00591010((Vec2 *)&local_20,(Vec2 *)&local_18);
        if (fVar4 <= 5.0) {
          uVar3 = 1;
          goto LAB_004d903c;
        }
      }
    }
  }
  uVar3 = 0;
LAB_004d903c:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


undefined1 __cdecl FUN_004d9090(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  float in_XMM0_Da;
  float fVar4;
  uint in_stack_00000020;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdf4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd4) == 3) {
      uVar3 = 1;
      goto LAB_004d9176;
    }
    FUN_00403cb0(param_1);
    if (0.4 < in_XMM0_Da) {
      uVar3 = 1;
      goto LAB_004d9176;
    }
    iVar1 = FUN_0051fe10(*(int *)(param_1 + 0x24));
    if (iVar1 == 0) {
      uVar3 = 1;
      goto LAB_004d9176;
    }
    local_18 = (float)*(double *)(param_1 + 0x28);
    local_14 = (float)*(double *)(param_1 + 0x30);
    local_20 = (float)*(double *)(iVar1 + 0x28);
    fVar4 = (float)*(double *)(iVar1 + 0x30);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = fVar4;
    FUN_00591010((Vec2 *)&local_20,(Vec2 *)&local_18);
    if (5.0 < fVar4) {
      uVar3 = 1;
      goto LAB_004d9176;
    }
  }
  uVar3 = 0;
LAB_004d9176:
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


undefined4 __cdecl FUN_004d91c0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar2;
  void *pvVar3;
  uint in_stack_00000020;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_3);
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FUN_004a1150(this,in_stack_ffffffcc);
  uVar2 = extraout_var;
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
    uVar2 = extraout_var_00;
  }
  ExceptionList = local_10;
  return CONCAT31(uVar2,bVar1);
}


undefined4 __cdecl FUN_004d9260(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar2;
  void *pvVar3;
  uint in_stack_00000020;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_3);
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FUN_004a1150(this,in_stack_ffffffcc);
  uVar2 = extraout_var;
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
    uVar2 = extraout_var_00;
  }
  ExceptionList = local_10;
  return CONCAT31(uVar2,bVar1 == 0);
}


undefined1 __cdecl FUN_004d9300(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  undefined1 uVar7;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bdfb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  pbVar5 = (byte *)(DAT_0065b5cc + 0xb4);
  if (0xf < *(uint *)(DAT_0065b5cc + 200)) {
    pbVar5 = *(byte **)(DAT_0065b5cc + 0xb4);
  }
  uVar3 = FUN_004031f0(pbVar5,*(uint *)(DAT_0065b5cc + 0xc4),(byte *)&PTR_005ce008,0);
  if (((char)uVar3 == '\0') && (*(char *)(DAT_0065b444 + 0x1c4) == '\0')) {
    pvVar6 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"starting_new_game",0x11);
    local_8 = 1;
    puVar4 = FUN_00412df0();
    local_8 = 0;
    bVar1 = FUN_004a1150(puVar4,pvVar6);
    if (bVar1 == 0) {
      pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"submenu_scenariolist",0x14);
      local_8 = 2;
      puVar4 = FUN_00412df0();
      local_8 = 0;
      bVar1 = FUN_004a1150(puVar4,pvVar6);
      if (bVar1 != 0) {
        uVar7 = 1;
        goto LAB_004d9419;
      }
    }
    else if (*(int *)(DAT_0065b444 + 0x74) != -1) {
      FUN_004127d0();
      cVar2 = FUN_004b7390();
      if (cVar2 == '\0') {
        uVar7 = 1;
        goto LAB_004d9419;
      }
    }
  }
  uVar7 = 0;
LAB_004d9419:
  if (0xf < in_stack_00000020) {
    pvVar6 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar6 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  return uVar7;
}


undefined1 __cdecl FUN_004d9470(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *this;
  byte *pbVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar4 = (byte *)(DAT_0065b5cc + 0xb4);
  if (0xf < *(uint *)(DAT_0065b5cc + 200)) {
    pbVar4 = *(byte **)(DAT_0065b5cc + 0xb4);
  }
  uVar3 = FUN_004031f0(pbVar4,*(uint *)(DAT_0065b5cc + 0xc4),(byte *)&PTR_005ce008,0);
  if (((char)uVar3 == '\0') && (*(char *)(DAT_0065b444 + 0x1c4) == '\0')) {
    pvVar5 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"starting_new_game",0x11);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar5);
    if ((bVar1 != 0) && (*(int *)(DAT_0065b444 + 0x74) != -1)) {
      FUN_004127d0();
      cVar2 = FUN_004b7390();
      if (cVar2 == '\0') {
        uVar6 = 1;
        goto LAB_004d9540;
      }
    }
  }
  uVar6 = 0;
LAB_004d9540:
  if (0xf < in_stack_00000020) {
    pvVar5 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar5 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return uVar6;
}


undefined1 __cdecl FUN_004d9590(undefined4 param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *this;
  byte *pbVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar4 = (byte *)(DAT_0065b5cc + 0xb4);
  if (0xf < *(uint *)(DAT_0065b5cc + 200)) {
    pbVar4 = *(byte **)(DAT_0065b5cc + 0xb4);
  }
  uVar3 = FUN_004031f0(pbVar4,*(uint *)(DAT_0065b5cc + 0xc4),(byte *)&PTR_005ce008,0);
  if (((char)uVar3 == '\0') && (*(int *)(DAT_0065b444 + 0x74) != -1)) {
    FUN_004127d0();
    cVar1 = FUN_004b7390();
    if ((cVar1 != '\0') && (*(char *)(DAT_0065b444 + 0x1c4) == '\0')) {
      pvVar5 = (void *)(in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"starting_new_game",0x11);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar2 = FUN_004a1150(this,pvVar5);
      if (bVar2 != 0) {
        uVar6 = 1;
        goto LAB_004d9660;
      }
    }
  }
  uVar6 = 0;
LAB_004d9660:
  if (0xf < in_stack_00000020) {
    pvVar5 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar5 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return uVar6;
}


undefined1 __cdecl FUN_004d96b0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *this;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(DAT_0065b444 + 0x74) != -1) {
    FUN_004127d0();
    cVar1 = FUN_004b7390();
    if ((cVar1 != '\0') && (*(char *)(DAT_0065b444 + 0x1c4) != '\0')) {
      pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"starting_new_game",0x11);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar2 = FUN_004a1150(this,pvVar3);
      if (bVar2 != 0) {
        uVar4 = 1;
        goto LAB_004d974d;
      }
    }
  }
  uVar4 = 0;
LAB_004d974d:
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return uVar4;
}


undefined4 __cdecl FUN_004d97a0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  void *pvVar1;
  uint in_stack_00000020;
  
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x004d97c9. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return extraout_EAX;
      }
    }
    in_EAX = FUN_005adb3f(pvVar1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


undefined1 __cdecl FUN_004d97e0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *in_stack_ffffffb0;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005be008;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,"submenu_manualconnection",0x18);
  local_8._0_1_ = 1;
  puVar3 = FUN_00412df0();
  local_8._0_1_ = 0;
  bVar1 = FUN_004a1150(puVar3,pvVar4);
  if (bVar1 == 0) {
    pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,"submenu_serverbrowser",0x15);
    local_8._0_1_ = 2;
    puVar3 = FUN_00412df0();
    local_8._0_1_ = 0;
    bVar1 = FUN_004a1150(puVar3,pvVar4);
    if (bVar1 != 0) goto LAB_004d9886;
  }
  else {
LAB_004d9886:
    FUN_004024e0(&stack0xffffffc8,&DAT_00655750);
    local_8._0_1_ = 3;
    FUN_004024e0(&stack0xffffffb0,&DAT_0065b610);
    local_8._0_1_ = 4;
    FUN_00402370();
    local_8._0_1_ = 0;
    cVar2 = FUN_0041ac80(in_stack_ffffffb0);
    if (cVar2 != '\0') {
      uVar5 = 1;
      goto LAB_004d98ca;
    }
  }
  uVar5 = 0;
LAB_004d98ca:
  if (0xf < in_stack_00000020) {
    pvVar4 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar4 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}


undefined1 __cdecl FUN_004d9920(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *in_stack_ffffffb0;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005be008;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,"submenu_manualconnection",0x18);
  local_8._0_1_ = 1;
  puVar3 = FUN_00412df0();
  local_8._0_1_ = 0;
  bVar1 = FUN_004a1150(puVar3,pvVar4);
  if (bVar1 == 0) {
    pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,"submenu_serverbrowser",0x15);
    local_8._0_1_ = 2;
    puVar3 = FUN_00412df0();
    local_8._0_1_ = 0;
    bVar1 = FUN_004a1150(puVar3,pvVar4);
    if (bVar1 != 0) goto LAB_004d99c6;
  }
  else {
LAB_004d99c6:
    FUN_004024e0(&stack0xffffffc8,&DAT_00655750);
    local_8._0_1_ = 3;
    FUN_004024e0(&stack0xffffffb0,&DAT_0065b610);
    local_8._0_1_ = 4;
    FUN_00402370();
    local_8._0_1_ = 0;
    cVar2 = FUN_0041ac80(in_stack_ffffffb0);
    if (cVar2 == '\0') {
      uVar5 = 1;
      goto LAB_004d9a0a;
    }
  }
  uVar5 = 0;
LAB_004d9a0a:
  if (0xf < in_stack_00000020) {
    pvVar4 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar4 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}


undefined1 __cdecl FUN_004d9a60(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdfb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  puVar2 = FUN_00412df0();
  local_8._0_1_ = 0;
  bVar1 = FUN_004a1150(puVar2,pvVar4);
  if (bVar1 == 0) {
    pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"submenu_multichat",0x11);
    local_8._0_1_ = 2;
    puVar2 = FUN_00412df0();
    local_8._0_1_ = 0;
    bVar1 = FUN_004a1150(puVar2,pvVar4);
    if (bVar1 != 0) goto LAB_004d9b04;
  }
  else {
LAB_004d9b04:
    iVar3 = FUN_00402370();
    if (*(int *)(iVar3 + 0x20) != 0) {
      uVar5 = 1;
      goto LAB_004d9b15;
    }
  }
  uVar5 = 0;
LAB_004d9b15:
  if (0xf < in_stack_00000020) {
    pvVar4 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar4 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}


undefined1 __cdecl FUN_004d9b60(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdfb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  puVar2 = FUN_00412df0();
  local_8._0_1_ = 0;
  bVar1 = FUN_004a1150(puVar2,pvVar4);
  if (bVar1 == 0) {
    pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"submenu_multichat",0x11);
    local_8._0_1_ = 2;
    puVar2 = FUN_00412df0();
    local_8._0_1_ = 0;
    bVar1 = FUN_004a1150(puVar2,pvVar4);
    if (bVar1 != 0) goto LAB_004d9c04;
  }
  else {
LAB_004d9c04:
    iVar3 = FUN_00402370();
    if (*(int *)(iVar3 + 0x20) == 0) {
      uVar5 = 1;
      goto LAB_004d9c15;
    }
  }
  uVar5 = 0;
LAB_004d9c15:
  if (0xf < in_stack_00000020) {
    pvVar4 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar4 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}


undefined1 __cdecl FUN_004d9c60(undefined4 param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_3);
  cVar1 = FUN_004d9a60(param_1,param_2,in_stack_ffffffcc);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402370();
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      uVar4 = 1;
      goto LAB_004d9cbc;
    }
  }
  uVar4 = 0;
LAB_004d9cbc:
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return uVar4;
}


undefined1 __cdecl FUN_004d9d10(undefined4 param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_3);
  cVar1 = FUN_004d9a60(param_1,param_2,in_stack_ffffffcc);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402370();
    if (*(char *)(iVar2 + 0x1c) != '\0') {
      uVar4 = 1;
      goto LAB_004d9d6c;
    }
  }
  uVar4 = 0;
LAB_004d9d6c:
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return uVar4;
}


undefined1 __cdecl FUN_004d9dc0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"submenu_multichat",0x11);
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FUN_004a1150(this,pvVar2);
  if ((bVar1 == 0) || (*(int *)(DAT_0065b5cc + 0x200) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


undefined1 __cdecl FUN_004d9e90(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"submenu_multichat",0x11);
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FUN_004a1150(this,pvVar2);
  if ((bVar1 == 0) || (*(int *)(DAT_0065b5cc + 0x200) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


uint __cdecl FUN_004d9f60(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  uint in_stack_00000020;
  
  pbVar3 = (byte *)(DAT_0065b444 + 0x1ac);
  if (0xf < *(uint *)(DAT_0065b444 + 0x1c0)) {
    pbVar3 = *(byte **)(DAT_0065b444 + 0x1ac);
  }
  uVar2 = FUN_004031f0(pbVar3,*(uint *)(DAT_0065b444 + 0x1bc),(byte *)&PTR_005ce008,0);
  uVar1 = (undefined1)uVar2;
  if (0xf < in_stack_00000020) {
    pvVar4 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar4 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uVar2 = FUN_005adb3f(pvVar4);
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar1) ^ 1;
}


undefined1 __cdecl FUN_004d9fe0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *this;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FUN_004a1150(this,pvVar3);
  if (bVar1 != 0) {
    cVar2 = FUN_00412030();
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004da057;
    }
  }
  uVar4 = 0;
LAB_004da057:
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return uVar4;
}


undefined1 __cdecl FUN_004da0a0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *this;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"submenu_multioptions",0x14);
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  bVar1 = FUN_004a1150(this,pvVar3);
  if (bVar1 != 0) {
    cVar2 = FUN_00412030();
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004da117;
    }
  }
  uVar4 = 0;
LAB_004da117:
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return uVar4;
}


bool __cdecl FUN_004da160(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  uint in_stack_00000020;
  
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  return param_1 != 0;
}


undefined * __fastcall FUN_004da1b0(undefined *param_1,undefined4 param_2)

{
  int *piVar1;
  code *local_8;
  
  local_8 = (code *)param_1;
  switch(param_2) {
  case 0:
    local_8 = FUN_004da160;
    break;
  case 1:
    local_8 = FUN_004d91c0;
    break;
  case 2:
    local_8 = FUN_004d9260;
    break;
  case 3:
    local_8 = FUN_0052ad80;
    break;
  case 4:
    local_8 = FUN_004cb7d0;
    break;
  case 5:
    local_8 = FUN_004ced60;
    break;
  case 6:
    local_8 = FUN_004cbc20;
    break;
  case 7:
  case 0xd:
    local_8 = FUN_0052ae40;
    break;
  case 8:
    local_8 = FUN_004cede0;
    break;
  case 9:
    local_8 = FUN_004ceeb0;
    break;
  case 10:
    local_8 = FUN_004cef20;
    break;
  case 0xb:
    local_8 = FUN_004cee40;
    break;
  case 0xc:
    local_8 = FUN_004cef80;
    break;
  case 0xe:
    local_8 = FUN_0052aeb0;
    break;
  case 0xf:
    local_8 = FUN_004cd210;
    break;
  case 0x10:
    local_8 = FUN_004d3900;
    break;
  case 0x11:
    local_8 = FUN_004d3980;
    break;
  case 0x12:
    local_8 = FUN_004d3a10;
    break;
  case 0x13:
    local_8 = FUN_004d3a90;
    break;
  case 0x14:
    local_8 = FUN_004d3b20;
    break;
  case 0x15:
    local_8 = FUN_004cf090;
    break;
  case 0x16:
    local_8 = FUN_004ceff0;
    break;
  case 0x17:
    local_8 = FUN_004d3ba0;
    break;
  case 0x18:
    local_8 = FUN_004d3c40;
    break;
  case 0x19:
    local_8 = FUN_004cf420;
    break;
  case 0x1a:
    local_8 = FUN_004cf4d0;
    break;
  case 0x1b:
    local_8 = FUN_004cf210;
    break;
  case 0x1c:
    local_8 = FUN_004cf2c0;
    break;
  case 0x1d:
    local_8 = FUN_004cf370;
    break;
  case 0x1e:
    local_8 = FUN_004cb540;
    break;
  case 0x1f:
    local_8 = FUN_004cbc80;
    break;
  case 0x20:
    local_8 = FUN_004cb610;
    break;
  case 0x21:
    local_8 = FUN_004cb680;
    break;
  case 0x22:
    local_8 = FUN_004cb5a0;
    break;
  case 0x23:
    local_8 = FUN_004cb6f0;
    break;
  case 0x24:
    local_8 = FUN_004cb760;
    break;
  case 0x25:
    local_8 = FUN_004cfc80;
    break;
  case 0x26:
    local_8 = FUN_004cfd50;
    break;
  case 0x27:
    local_8 = FUN_004cfe20;
    break;
  case 0x28:
    local_8 = FUN_004cfef0;
    break;
  case 0x29:
    local_8 = FUN_004d0370;
    break;
  case 0x2a:
    local_8 = FUN_004d0450;
    break;
  case 0x2b:
    local_8 = FUN_004d0290;
    break;
  case 0x2c:
    local_8 = FUN_004d01c0;
    break;
  case 0x2d:
    local_8 = FUN_004d00e0;
    break;
  case 0x2e:
    local_8 = FUN_004d0010;
    break;
  case 0x2f:
    local_8 = FUN_004cf800;
    break;
  case 0x30:
    local_8 = FUN_004cf8d0;
    break;
  case 0x31:
    local_8 = FUN_004cf9a0;
    break;
  case 0x32:
    local_8 = FUN_004cfa80;
    break;
  case 0x33:
    local_8 = FUN_004cfb70;
    break;
  case 0x34:
    local_8 = FUN_004cf570;
    break;
  case 0x35:
    local_8 = FUN_004cf650;
    break;
  case 0x36:
    local_8 = FUN_004cf730;
    break;
  case 0x37:
    local_8 = FUN_004cf130;
    break;
  case 0x38:
    local_8 = FUN_004cb4f0;
    break;
  case 0x39:
    local_8 = FUN_004cb480;
    break;
  case 0x3a:
    local_8 = FUN_004cd2d0;
    break;
  case 0x3b:
    local_8 = FUN_004cd330;
    break;
  case 0x3c:
    local_8 = FUN_004cd390;
    break;
  case 0x3d:
    local_8 = FUN_004cd3f0;
    break;
  case 0x3e:
    local_8 = FUN_004cd450;
    break;
  case 0x3f:
    local_8 = FUN_004cd4b0;
    break;
  case 0x40:
    local_8 = FUN_004cd510;
    break;
  case 0x41:
    local_8 = FUN_004cd270;
    break;
  case 0x42:
    local_8 = FUN_004cd570;
    break;
  case 0x43:
    local_8 = FUN_004cd5d0;
    break;
  case 0x44:
    local_8 = FUN_004cd630;
    break;
  case 0x45:
    local_8 = FUN_004cd690;
    break;
  case 0x46:
    local_8 = FUN_004cd6f0;
    break;
  case 0x47:
    local_8 = FUN_004cbf80;
    break;
  case 0x48:
    local_8 = FUN_004cbfe0;
    break;
  case 0x49:
    local_8 = FUN_004cc040;
    break;
  case 0x4a:
    local_8 = FUN_004cbf20;
    break;
  case 0x4b:
    local_8 = FUN_004cbf20;
    break;
  case 0x4c:
    local_8 = FUN_004cc7b0;
    break;
  case 0x4d:
    local_8 = FUN_004cc870;
    break;
  case 0x4e:
    local_8 = FUN_004cc810;
    break;
  case 0x4f:
    local_8 = FUN_004cd070;
    break;
  case 0x50:
    local_8 = FUN_004cd0d0;
    break;
  case 0x51:
    local_8 = FUN_004cd130;
    break;
  case 0x52:
    local_8 = FUN_004cdfb0;
    break;
  case 0x53:
    local_8 = FUN_004ce040;
    break;
  case 0x54:
    local_8 = FUN_004ce100;
    break;
  case 0x55:
    local_8 = FUN_004ce240;
    break;
  case 0x56:
    local_8 = FUN_004ce2f0;
    break;
  case 0x57:
    local_8 = FUN_004ce3d0;
    break;
  case 0x58:
    local_8 = FUN_004ce4c0;
    break;
  case 0x59:
    local_8 = FUN_004ce530;
    break;
  case 0x5a:
    local_8 = FUN_004ceab0;
    break;
  case 0x5b:
    local_8 = FUN_004ce590;
    break;
  case 0x5c:
    local_8 = FUN_004ce6c0;
    break;
  case 0x5d:
    local_8 = FUN_004ce7e0;
    break;
  case 0x5e:
    local_8 = FUN_004ce840;
    break;
  case 0x5f:
    local_8 = FUN_004ce8e0;
    break;
  case 0x60:
    local_8 = FUN_004cea10;
    break;
  case 0x61:
    local_8 = FUN_004ce970;
    break;
  case 0x62:
    local_8 = FUN_004cc180;
    break;
  case 99:
    local_8 = FUN_004cc250;
    break;
  case 100:
    local_8 = FUN_004cc510;
    break;
  case 0x65:
    local_8 = FUN_004cc320;
    break;
  case 0x66:
    local_8 = FUN_004cc410;
    break;
  case 0x67:
    local_8 = FUN_004cc0c0;
    break;
  case 0x68:
    local_8 = FUN_004d0530;
    break;
  case 0x69:
    local_8 = FUN_004d05d0;
    break;
  case 0x6a:
    local_8 = FUN_004d0680;
    break;
  case 0x6b:
    local_8 = FUN_004d0720;
    break;
  case 0x6c:
    local_8 = FUN_004d0780;
    break;
  case 0x6d:
    local_8 = FUN_004d0830;
    break;
  case 0x6e:
    local_8 = FUN_004d08d0;
    break;
  case 0x6f:
    local_8 = FUN_004d0980;
    break;
  case 0x70:
    local_8 = FUN_004d0a20;
    break;
  case 0x71:
    local_8 = FUN_004d0a80;
    break;
  case 0x72:
    local_8 = FUN_004d0b20;
    break;
  case 0x73:
    local_8 = FUN_004d0bd0;
    break;
  case 0x74:
    local_8 = FUN_004d0c70;
    break;
  case 0x75:
    local_8 = FUN_004d0cd0;
    break;
  case 0x76:
    local_8 = FUN_004d0d70;
    break;
  case 0x77:
    local_8 = FUN_004d0e20;
    break;
  case 0x78:
    local_8 = FUN_004d0ec0;
    break;
  case 0x79:
    local_8 = FUN_004d0f20;
    break;
  case 0x7a:
    local_8 = FUN_004d0fd0;
    break;
  case 0x7b:
    local_8 = FUN_004d1090;
    break;
  case 0x7c:
    local_8 = FUN_004d1140;
    break;
  case 0x7d:
    local_8 = FUN_004d11b0;
    break;
  case 0x7e:
    local_8 = FUN_004d0fd0;
    break;
  case 0x7f:
    local_8 = FUN_004d1090;
    break;
  case 0x80:
    local_8 = FUN_004d1140;
    break;
  case 0x81:
    local_8 = FUN_004d1260;
    break;
  case 0x82:
    local_8 = FUN_004d1310;
    break;
  case 0x83:
    local_8 = FUN_004d13d0;
    break;
  case 0x84:
    local_8 = FUN_004d1480;
    break;
  case 0x85:
    local_8 = FUN_004d14f0;
    break;
  case 0x86:
    local_8 = FUN_004d1590;
    break;
  case 0x87:
    local_8 = FUN_004d1640;
    break;
  case 0x88:
    local_8 = FUN_004d16e0;
    break;
  case 0x89:
    local_8 = FUN_004d1740;
    break;
  case 0x8a:
    local_8 = FUN_004d17e0;
    break;
  case 0x8b:
    local_8 = FUN_004d1890;
    break;
  case 0x8c:
    local_8 = FUN_004d1930;
    break;
  case 0x8d:
    local_8 = FUN_004d1990;
    break;
  case 0x8e:
    local_8 = FUN_004d1a30;
    break;
  case 0x8f:
    local_8 = FUN_004d1ae0;
    break;
  case 0x90:
    local_8 = FUN_004d1b80;
    break;
  case 0x91:
    local_8 = FUN_004d1be0;
    break;
  case 0x92:
    local_8 = FUN_004d1c80;
    break;
  case 0x93:
    local_8 = FUN_004d1d30;
    break;
  case 0x94:
    local_8 = FUN_004d1dd0;
    break;
  case 0x95:
    local_8 = FUN_004d1e30;
    break;
  case 0x96:
    local_8 = FUN_004d1ed0;
    break;
  case 0x97:
    local_8 = FUN_004d1f80;
    break;
  case 0x98:
    local_8 = FUN_004d2020;
    break;
  case 0x99:
    FUN_004dc910(param_1,0x4d2080);
    return param_1;
  case 0x9a:
    FUN_004dc910(param_1,0x4d2140);
    return param_1;
  case 0x9b:
    local_8 = FUN_004cc910;
    break;
  case 0x9c:
    local_8 = FUN_004cc9c0;
    break;
  case 0x9d:
    local_8 = FUN_004cca70;
    break;
  case 0x9e:
    local_8 = FUN_004ccb30;
    break;
  case 0x9f:
    local_8 = FUN_004ccbf0;
    break;
  case 0xa0:
    local_8 = FUN_004cccb0;
    break;
  case 0xa1:
    local_8 = FUN_004ccd70;
    break;
  case 0xa2:
    local_8 = FUN_004cce30;
    break;
  case 0xa3:
    local_8 = FUN_004ccef0;
    break;
  case 0xa4:
    local_8 = FUN_004ccfb0;
    break;
  case 0xa5:
    local_8 = FUN_004d3820;
    break;
  case 0xa6:
    local_8 = FUN_004d3890;
    break;
  case 0xa7:
    local_8 = FUN_004cbd20;
    break;
  case 0xa8:
    local_8 = FUN_004d3760;
    break;
  case 0xa9:
    local_8 = FUN_004d37c0;
    break;
  case 0xaa:
    local_8 = FUN_004cbd20;
    break;
  case 0xab:
    local_8 = FUN_004cbe90;
    break;
  case 0xac:
    local_8 = FUN_004cbd90;
    break;
  case 0xad:
    local_8 = FUN_004cbdf0;
    break;
  case 0xae:
    local_8 = FUN_004cbe30;
    break;
  case 0xaf:
    local_8 = FUN_004d2200;
    break;
  case 0xb0:
    local_8 = FUN_004d2370;
    break;
  case 0xb1:
    local_8 = FUN_004d24e0;
    break;
  case 0xb2:
    local_8 = FUN_004d25d0;
    break;
  case 0xb3:
    local_8 = FUN_004d2c60;
    break;
  case 0xb4:
    local_8 = FUN_004d2d90;
    break;
  case 0xb5:
    local_8 = FUN_004d2ed0;
    break;
  case 0xb6:
    local_8 = FUN_004d2ff0;
    break;
  case 0xb7:
    local_8 = FUN_004d26c0;
    break;
  case 0xb8:
    local_8 = FUN_004d27a0;
    break;
  case 0xb9:
    local_8 = FUN_004d2880;
    break;
  case 0xba:
    local_8 = FUN_004d28e0;
    break;
  case 0xbb:
    local_8 = FUN_004d2940;
    break;
  case 0xbc:
    local_8 = FUN_004d2a00;
    break;
  case 0xbd:
    local_8 = FUN_004d2b90;
    break;
  case 0xbe:
    local_8 = FUN_004d2ad0;
    break;
  case 0xbf:
    local_8 = FUN_004d3130;
    break;
  case 0xc0:
    local_8 = FUN_004d31c0;
    break;
  case 0xc1:
    local_8 = FUN_004d3270;
    break;
  case 0xc2:
    local_8 = FUN_004d3380;
    break;
  case 0xc3:
    local_8 = FUN_004d3320;
    break;
  case 0xc4:
    local_8 = FUN_004cbdf0;
    break;
  case 0xc5:
    local_8 = FUN_004d3420;
    break;
  case 0xc6:
    local_8 = FUN_004d33d0;
    break;
  case 199:
    local_8 = FUN_004d3470;
    break;
  case 200:
    local_8 = FUN_004d3600;
    break;
  case 0xc9:
    local_8 = FUN_004d34c0;
    break;
  case 0xca:
    local_8 = FUN_004d36b0;
    break;
  case 0xcb:
    local_8 = FUN_004d3560;
    break;
  case 0xcc:
    local_8 = FUN_004d3ce0;
    break;
  case 0xcd:
    local_8 = FUN_004d3d80;
    break;
  case 0xce:
    local_8 = FUN_004d3e50;
    FUN_00417770(param_1,0);
    piVar1 = (int *)FUN_004dcac0(&local_8);
    FUN_004dcad0(param_1,piVar1);
    return param_1;
  case 0xcf:
    FUN_004dc910(param_1,0x4d3f20);
    return param_1;
  case 0xd0:
    FUN_004dc910(param_1,0x4d3f80);
    return param_1;
  case 0xd1:
    FUN_004dc910(param_1,0x4d4060);
    return param_1;
  case 0xd2:
    FUN_004dc910(param_1,0x4d4140);
    return param_1;
  case 0xd3:
    local_8 = FUN_004cb9e0;
    break;
  case 0xd4:
    local_8 = FUN_004cb900;
    break;
  case 0xd5:
    FUN_004dc910(param_1,0x4d7ac0);
    return param_1;
  case 0xd6:
    FUN_004dc910(param_1,0x4d7b20);
    return param_1;
  case 0xd7:
    FUN_004dc910(param_1,0x4d7b20);
    return param_1;
  case 0xd8:
    FUN_004dc910(param_1,0x4d7b80);
    return param_1;
  case 0xd9:
    FUN_004dc910(param_1,0x4d7c20);
    return param_1;
  case 0xda:
    FUN_004dc910(param_1,0x4d7cd0);
    return param_1;
  case 0xdb:
    FUN_004dc910(param_1,0x4d7e30);
    return param_1;
  case 0xdc:
    FUN_004dc910(param_1,0x4d8e40);
    return param_1;
  case 0xdd:
    FUN_004dc910(param_1,0x4d8ec0);
    return param_1;
  case 0xde:
    FUN_004dc910(param_1,0x4d7500);
    return param_1;
  case 0xdf:
    FUN_004dc910(param_1,0x4d7670);
    return param_1;
  case 0xe0:
    FUN_004dc910(param_1,0x4d7890);
    return param_1;
  case 0xe1:
    FUN_004dc910(param_1,0x4d77e0);
    return param_1;
  case 0xe2:
    FUN_004dc910(param_1,0x4d7930);
    return param_1;
  case 0xe3:
    FUN_004dc910(param_1,0x4d79f0);
    return param_1;
  case 0xe4:
    local_8 = FUN_004cd750;
    break;
  case 0xe5:
    local_8 = FUN_004cd840;
    break;
  case 0xe6:
    local_8 = FUN_004cd930;
    break;
  case 0xe7:
    local_8 = FUN_004cda20;
    break;
  case 0xe8:
    local_8 = FUN_004cdb10;
    break;
  case 0xe9:
    local_8 = FUN_004cdc70;
    break;
  case 0xea:
    local_8 = FUN_004cddd0;
    break;
  case 0xeb:
    local_8 = FUN_004cdec0;
    break;
  case 0xec:
    FUN_004dc910(param_1,0x4ceb90);
    return param_1;
  case 0xed:
    FUN_004dc910(param_1,0x4cec90);
    return param_1;
  case 0xee:
    FUN_004dc910(param_1,0x4d4250);
    return param_1;
  case 0xef:
    FUN_004dc910(param_1,0x4d41a0);
    return param_1;
  case 0xf0:
    FUN_004dc910(param_1,0x4d43c0);
    return param_1;
  case 0xf1:
    FUN_004dc910(param_1,0x4d4430);
    return param_1;
  case 0xf2:
    FUN_004dc910(param_1,0x4d4500);
    return param_1;
  case 0xf3:
    FUN_004dc910(param_1,0x4d45d0);
    return param_1;
  case 0xf4:
    FUN_004dc910(param_1,0x4d46a0);
    return param_1;
  case 0xf5:
    FUN_004dc910(param_1,0x4d4770);
    return param_1;
  case 0xf6:
    FUN_004dc910(param_1,0x4d4840);
    return param_1;
  case 0xf7:
    FUN_004dc910(param_1,0x4d4910);
    return param_1;
  case 0xf8:
    FUN_004dc910(param_1,0x4d49d0);
    return param_1;
  case 0xf9:
    FUN_004dc910(param_1,0x4d4a90);
    return param_1;
  case 0xfa:
    FUN_004dc910(param_1,0x4d4ba0);
    return param_1;
  case 0xfb:
    FUN_004dc910(param_1,0x4d4c60);
    return param_1;
  case 0xfc:
    FUN_004dc910(param_1,0x4d4d20);
    return param_1;
  case 0xfd:
    FUN_004dc910(param_1,0x4d4e30);
    return param_1;
  case 0xfe:
    FUN_004dc910(param_1,0x4d4f40);
    return param_1;
  case 0xff:
    FUN_004dc910(param_1,0x4d4ff0);
    return param_1;
  case 0x100:
    FUN_004dc910(param_1,0x4d50a0);
    return param_1;
  case 0x101:
    FUN_004dc910(param_1,0x4d5160);
    return param_1;
  case 0x102:
    FUN_004dc910(param_1,0x4d5220);
    return param_1;
  case 0x103:
    FUN_004dc910(param_1,0x4d5340);
    return param_1;
  case 0x104:
    FUN_004dc910(param_1,0x4d5400);
    return param_1;
  case 0x105:
    FUN_004dc910(param_1,0x4d54c0);
    return param_1;
  case 0x106:
    FUN_004dc910(param_1,0x4d5cd0);
    return param_1;
  case 0x107:
    FUN_004dc910(param_1,0x4d5d90);
    return param_1;
  case 0x108:
    FUN_004dc910(param_1,0x4d5ec0);
    return param_1;
  case 0x109:
    FUN_004dc910(param_1,0x4d5f80);
    return param_1;
  case 0x10a:
    FUN_004dc910(param_1,0x4d5790);
    return param_1;
  case 0x10b:
    FUN_004dc910(param_1,0x4d5850);
    return param_1;
  case 0x10c:
    FUN_004dc910(param_1,0x4d5570);
    return param_1;
  case 0x10d:
    FUN_004dc910(param_1,0x4d5630);
    return param_1;
  case 0x10e:
    FUN_004dc910(param_1,0x4d5970);
    return param_1;
  case 0x10f:
    FUN_004dc910(param_1,0x4d5a60);
    return param_1;
  case 0x110:
    FUN_004dc910(param_1,0x4d60c0);
    return param_1;
  case 0x111:
    FUN_004dc910(param_1,0x4d6170);
    return param_1;
  case 0x112:
    FUN_004dc910(param_1,0x4d6220);
    return param_1;
  case 0x113:
    FUN_004dc910(param_1,0x4d62e0);
    return param_1;
  case 0x114:
    FUN_004dc910(param_1,0x4d6430);
    return param_1;
  case 0x115:
    FUN_004dc910(param_1,0x4d6580);
    return param_1;
  case 0x116:
    FUN_004dc910(param_1,0x4d6660);
    return param_1;
  case 0x117:
    FUN_004dc910(param_1,0x4d6750);
    return param_1;
  case 0x118:
    FUN_004dc910(param_1,0x4d6830);
    return param_1;
  case 0x119:
    FUN_004dc910(param_1,0x4d6910);
    return param_1;
  case 0x11a:
    FUN_004dc910(param_1,0x4d69d0);
    return param_1;
  case 0x11b:
    FUN_004dc910(param_1,0x4d6ae0);
    return param_1;
  case 0x11c:
    FUN_004dc910(param_1,0x4d6ba0);
    return param_1;
  case 0x11d:
    FUN_004dc910(param_1,0x4d6cc0);
    return param_1;
  case 0x11e:
    FUN_004dc910(param_1,0x4d6d90);
    return param_1;
  case 0x11f:
    FUN_004dc910(param_1,0x4d70d0);
    return param_1;
  case 0x120:
    FUN_004dc910(param_1,0x4d7190);
    return param_1;
  case 0x121:
    FUN_004dc910(param_1,0x4d7340);
    return param_1;
  case 0x122:
    FUN_004dc910(param_1,0x4d7400);
    return param_1;
  case 0x123:
    FUN_004dc910(param_1,0x4d6e30);
    return param_1;
  case 0x124:
    FUN_004dc910(param_1,0x4d6ef0);
    return param_1;
  case 0x125:
    FUN_004dc910(param_1,0x4d6fb0);
    return param_1;
  case 0x126:
    FUN_004dc910(param_1,0x4d7f70);
    return param_1;
  case 0x127:
    FUN_004dc910(param_1,0x4d8120);
    return param_1;
  case 0x128:
    FUN_004dc910(param_1,0x4d8310);
    return param_1;
  case 0x129:
    FUN_004dc910(param_1,0x4d84d0);
    return param_1;
  case 0x12a:
    FUN_004dc910(param_1,0x4d8690);
    return param_1;
  case 299:
    FUN_004dc910(param_1,0x4d8750);
    return param_1;
  case 300:
    FUN_004dc910(param_1,0x4d8810);
    return param_1;
  case 0x12d:
    FUN_004dc910(param_1,0x4d88d0);
    return param_1;
  case 0x12e:
    FUN_004dc910(param_1,0x4d8990);
    return param_1;
  case 0x12f:
    FUN_004dc910(param_1,0x4d8a20);
    return param_1;
  case 0x130:
    FUN_004dc910(param_1,0x4d8ae0);
    return param_1;
  case 0x131:
    FUN_004dc910(param_1,0x4d8bb0);
    return param_1;
  case 0x132:
    FUN_004dc910(param_1,0x4d8c40);
    return param_1;
  case 0x133:
    FUN_004dc910(param_1,0x4d8cd0);
    return param_1;
  case 0x134:
    FUN_004dc910(param_1,0x4d8d70);
    return param_1;
  case 0x135:
    FUN_004dc910(param_1,0x4cb2f0);
    return param_1;
  case 0x136:
    FUN_004dc910(param_1,0x4cb3e0);
    return param_1;
  case 0x137:
    FUN_004dc910(param_1,0x4cb350);
    return param_1;
  case 0x138:
    FUN_004dc910(param_1,0x4d5b50);
    return param_1;
  case 0x139:
    FUN_004dc910(param_1,0x4d5c10);
    return param_1;
  case 0x13a:
    FUN_004dc910(param_1,0x4cb220);
    return param_1;
  case 0x13b:
    local_8 = FUN_004d8f60;
    break;
  case 0x13c:
    local_8 = FUN_004d9090;
    break;
  case 0x13d:
    local_8 = FUN_004cc5e0;
    break;
  case 0x13e:
    local_8 = FUN_004cc6c0;
    break;
  case 0x13f:
    FUN_004dc910(param_1,0x4d9300);
    return param_1;
  case 0x140:
    FUN_004dc910(param_1,0x4d9590);
    return param_1;
  case 0x141:
    FUN_004dc910(param_1,0x4d9590);
    return param_1;
  case 0x142:
    FUN_004dc910(param_1,0x4d96b0);
    return param_1;
  case 0x143:
    FUN_004dc910(param_1,0x4d9470);
    return param_1;
  case 0x144:
    FUN_004dc910(param_1,0x4d8dd0);
    return param_1;
  case 0x145:
    FUN_004dc910(param_1,0x4d97a0);
    return param_1;
  case 0x146:
    FUN_004dc910(param_1,0x4d97e0);
    return param_1;
  case 0x147:
    FUN_004dc910(param_1,0x4d9920);
    return param_1;
  case 0x148:
    FUN_004dc910(param_1,0x4d9a60);
    return param_1;
  case 0x149:
    FUN_004dc910(param_1,0x4d9b60);
    return param_1;
  case 0x14a:
    FUN_004dc910(param_1,0x4d9dc0);
    return param_1;
  case 0x14b:
    FUN_004dc910(param_1,0x4d9e90);
    return param_1;
  case 0x14c:
    FUN_004dc910(param_1,0x4d9c60);
    return param_1;
  case 0x14d:
    FUN_004dc910(param_1,0x4d9d10);
    return param_1;
  case 0x14e:
    FUN_004dc910(param_1,0x4d9b60);
    return param_1;
  default:
    FUN_00430180((int)param_1);
    return param_1;
  case 0x150:
    FUN_004dc910(param_1,0x4d9f60);
    return param_1;
  case 0x151:
    FUN_004dc910(param_1,0x4d9fe0);
    return param_1;
  case 0x152:
    FUN_004dc910(param_1,0x4da0a0);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_004dcad0(param_1,(int *)&local_8);
  return param_1;
}


undefined1 __cdecl FUN_004db950(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte **ppbVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  ppuVar7 = &PTR_DAT_005de118;
  while( true ) {
    pbVar8 = *ppuVar7;
    pbVar3 = pbVar8;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    ppbVar5 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar5 = (byte **)pbVar2;
    }
    uVar4 = FUN_004031f0((byte *)ppbVar5,in_stack_00000014,pbVar8,(int)pbVar3 - (int)(pbVar8 + 1));
    if ((char)uVar4 != '\0') break;
    ppuVar7 = ppuVar7 + 1;
    if (0x5de1b3 < (int)ppuVar7) {
      uVar6 = 0;
LAB_004db99c:
      if (0xf < in_stack_00000018) {
        pbVar8 = pbVar2;
        if (0xfff < in_stack_00000018 + 1) {
          pbVar8 = *(byte **)(pbVar2 + -4);
          if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pbVar8);
      }
      return uVar6;
    }
  }
  uVar6 = 1;
  goto LAB_004db99c;
}


int __cdecl FUN_004db9e0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005de118)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_004dba2e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x27);
  iVar7 = 0;
LAB_004dba2e:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


int __cdecl FUN_004dba70(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005de750)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_004dbac1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x153);
  iVar7 = 0;
LAB_004dbac1:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


int __cdecl FUN_004dbb00(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005deca8)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_004dbb4e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 99);
  iVar7 = 0;
LAB_004dbb4e:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


undefined1 __cdecl FUN_004dbb90(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte **ppbVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  ppuVar7 = &PTR_DAT_005deca8;
  while( true ) {
    pbVar8 = *ppuVar7;
    pbVar3 = pbVar8;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    ppbVar5 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar5 = (byte **)pbVar2;
    }
    uVar4 = FUN_004031f0((byte *)ppbVar5,in_stack_00000014,pbVar8,(int)pbVar3 - (int)(pbVar8 + 1));
    if ((char)uVar4 != '\0') break;
    ppuVar7 = ppuVar7 + 1;
    if (0x5dee33 < (int)ppuVar7) {
      uVar6 = 0;
LAB_004dbbdc:
      if (0xf < in_stack_00000018) {
        pbVar8 = pbVar2;
        if (0xfff < in_stack_00000018 + 1) {
          pbVar8 = *(byte **)(pbVar2 + -4);
          if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pbVar8);
      }
      return uVar6;
    }
  }
  uVar6 = 1;
  goto LAB_004dbbdc;
}


undefined4 * __thiscall
FUN_004dbc20(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,uint param_5,uint param_6,byte *param_7)

{
  byte *pbVar1;
  byte **ppbVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  uint uVar5;
  byte *pbVar6;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  undefined4 *in_stack_00000034;
  uint in_stack_00000044;
  uint in_stack_00000048;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005be048;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  uVar5 = 0;
  while( true ) {
    pbVar1 = param_7;
    ppbVar2 = &param_7;
    if (0xf < in_stack_00000030) {
      ppbVar2 = (byte **)param_7;
    }
    ppuVar4 = &param_1;
    if (0xf < param_6) {
      ppuVar4 = (undefined4 **)param_1;
    }
    uVar5 = FUN_0042eeb0((int)ppuVar4,param_5,uVar5,(byte *)ppbVar2,in_stack_0000002c);
    puVar3 = param_1;
    if (uVar5 == 0xffffffff) break;
    puVar3 = &stack0x00000034;
    if (0xf < in_stack_00000048) {
      puVar3 = in_stack_00000034;
    }
    FUN_004dc7b0(&param_1,uVar5,in_stack_0000002c,puVar3,in_stack_00000044);
    FUN_004034f0(&param_7,(char)in_stack_00000044);
  }
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 **)this = puVar3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(ulonglong *)((int)this + 0x10) = CONCAT44(param_6,param_5);
  param_5 = 0;
  param_6 = 0xf;
  if (0xf < in_stack_00000030) {
    pbVar6 = pbVar1;
    if (0xfff < in_stack_00000030 + 1) {
      pbVar6 = *(byte **)(pbVar1 + -4);
      if ((byte *)0x1f < pbVar1 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  param_7 = (byte *)((uint)param_7 & 0xffffff00);
  if (0xf < in_stack_00000048) {
    puVar3 = in_stack_00000034;
    if (0xfff < in_stack_00000048 + 1) {
      puVar3 = (undefined4 *)in_stack_00000034[-1];
      if (0x1f < (uint)((int)in_stack_00000034 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar3);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_004dbd80(int *param_1,int param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  void **ppvVar6;
  undefined3 extraout_var;
  undefined4 *puVar7;
  void *pvVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint in_stack_00000020;
  undefined4 *in_stack_ffffff04;
  undefined4 in_stack_ffffff08;
  undefined4 in_stack_ffffff0c;
  undefined4 uVar12;
  char *pcVar13;
  uint uVar14;
  byte *in_stack_ffffff1c;
  void *local_cc;
  void *pvStack_c8;
  void *pvStack_c4;
  void *local_84 [4];
  undefined4 local_74;
  uint uStack_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005be17b;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 1;
  FUN_004024e0(param_1,&param_5);
  if (param_2 != 0) {
    FUN_004024e0(&local_cc,(undefined4 *)(param_2 + 8));
    local_14._0_1_ = 2;
    uVar14 = 5;
    pcVar13 = "$self";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dbe4c;
    FUN_00402690(&stack0xffffff1c,"$self",5);
    local_14._0_1_ = 3;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_3c,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar8 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar8 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    FUN_004024e0(&local_cc,(undefined4 *)(param_2 + 0x238));
    local_14._0_1_ = 4;
    uVar14 = 5;
    pcVar13 = "$rego";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dbf10;
    FUN_00402690(&stack0xffffff1c,"$rego",5);
    local_14._0_1_ = 5;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_3c,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar8 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar8 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    FUN_004024e0(&local_cc,(undefined4 *)(*(int *)(param_2 + 0x44) + 0x7c));
    local_14._0_1_ = 6;
    uVar14 = 7;
    pcVar13 = "$origin";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dbfd5;
    FUN_00402690(&stack0xffffff1c,"$origin",7);
    local_14._0_1_ = 7;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_3c,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar8 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar8 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    FUN_00506c60(*(void **)(param_2 + 0x1f8),(basic_string<> *)&local_cc,'\0');
    local_14._0_1_ = 8;
    uVar14 = 6;
    pcVar13 = "$cargo";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dc09c;
    FUN_00402690(&stack0xffffff1c,"$cargo",6);
    local_14._0_1_ = 9;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_3c,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar8 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar8 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    puVar10 = *(undefined4 **)(*(int *)(param_2 + 0x44) + 0x10);
    bVar11 = puVar10 == (undefined4 *)0x0;
    if (bVar11) {
      local_74 = 0;
      uStack_70 = 0xf;
      local_84[0] = (void *)((uint)local_84[0] & 0xffffff00);
      FUN_00402690(local_84,"unknown",7);
      ppvVar6 = local_84;
    }
    else {
      ppvVar6 = (void **)FUN_004024e0(local_54,puVar10);
    }
    local_cc = *ppvVar6;
    pvStack_c8 = ppvVar6[1];
    pvStack_c4 = ppvVar6[2];
    ppvVar6[4] = (void *)0x0;
    ppvVar6[5] = (void *)0xf;
    *(undefined1 *)ppvVar6 = 0;
    local_14 = 0xc;
    uVar14 = 0xc;
    pcVar13 = "$destination";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dc1d2;
    FUN_00402690(&stack0xffffff1c,"$destination",0xc);
    local_14._0_1_ = 0xd;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,0xb);
    piVar5 = FUN_004dbc20(local_3c,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar8 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar8 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_14 = 10;
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    if ((bVar11) && (0xf < uStack_70)) {
      pvVar8 = local_84[0];
      if ((0xfff < uStack_70 + 1) &&
         (pvVar8 = *(void **)((int)local_84[0] + -4),
         0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_14 = 1;
    if ((!bVar11) && (0xf < local_40)) {
      pvVar8 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar8 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  if (param_4 != -1) {
    FUN_00591e00((undefined1 *)&local_cc,&DAT_005e1d38);
    local_14._0_1_ = 0xe;
    uVar14 = 7;
    pcVar13 = "$amount";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dc352;
    FUN_00402690(&stack0xffffff1c,"$amount",7);
    local_14._0_1_ = 0xf;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_54,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_40) {
      pvVar8 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar8 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  if (param_3 != 0) {
    FUN_004024e0(&local_cc,(undefined4 *)(param_3 + 8));
    local_14._0_1_ = 0x10;
    uVar14 = 6;
    pcVar13 = "$other";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dc41c;
    FUN_00402690(&stack0xffffff1c,"$other",6);
    local_14._0_1_ = 0x11;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_54,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_40) {
      pvVar8 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar8 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    cVar4 = FUN_004cb1c0(param_3 + 8);
    pcVar13 = (&PTR_DAT_005de70c)[CONCAT31(extraout_var,cVar4)];
    local_cc = (void *)((uint)local_cc & 0xffffff00);
    pcVar9 = pcVar13;
    do {
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    FUN_00402690(&local_cc,pcVar13,(int)pcVar9 - (int)(pcVar13 + 1));
    local_14._0_1_ = 0x12;
    uVar14 = 0xe;
    pcVar13 = "$otherquadrant";
    in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
    uVar12 = 0x4dc516;
    FUN_00402690(&stack0xffffff1c,"$otherquadrant",0xe);
    local_14._0_1_ = 0x13;
    FUN_004024e0(&stack0xffffff04,param_1);
    local_14 = CONCAT31(local_14._1_3_,1);
    piVar5 = FUN_004dbc20(local_54,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                          (uint)pcVar13,uVar14,in_stack_ffffff1c);
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_40) {
      pvVar8 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar8 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  rand();
  pvStack_c4 = (void *)0x4dc5bc;
  FUN_00591e00((undefined1 *)local_6c,&DAT_005e1d38);
  local_14._0_1_ = 0x14;
  uVar14 = rand();
  uVar14 = uVar14 & 0x80000001;
  bVar11 = uVar14 == 0;
  if ((int)uVar14 < 0) {
    bVar11 = (uVar14 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar11) {
    rand();
    pvStack_c4 = (void *)0x4dc5f5;
    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,&DAT_005ce018);
    local_14._0_1_ = 0x15;
    puVar10 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar10 = (undefined4 *)*puVar7;
    }
    FUN_00403640(local_6c,puVar10,puVar7[4]);
    local_14._0_1_ = 0x14;
    if (0xf < local_40) {
      pvVar8 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar8 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  FUN_004024e0(&local_cc,local_6c);
  local_14._0_1_ = 0x16;
  uVar14 = 0x11;
  pcVar13 = "$randomdockingbay";
  in_stack_ffffff1c = (byte *)((uint)in_stack_ffffff1c & 0xffffff00);
  uVar12 = 0x4dc686;
  FUN_00402690(&stack0xffffff1c,"$randomdockingbay",0x11);
  local_14._0_1_ = 0x17;
  FUN_004024e0(&stack0xffffff04,param_1);
  local_14 = CONCAT31(local_14._1_3_,0x14);
  piVar5 = FUN_004dbc20(local_54,in_stack_ffffff04,in_stack_ffffff08,in_stack_ffffff0c,uVar12,
                        (uint)pcVar13,uVar14,in_stack_ffffff1c);
  if (param_1 != piVar5) {
    FUN_00401b20(param_1);
    iVar1 = piVar5[1];
    iVar2 = piVar5[2];
    iVar3 = piVar5[3];
    *param_1 = *piVar5;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
    piVar5[4] = 0;
    piVar5[5] = 0xf;
    *(undefined1 *)piVar5 = 0;
  }
  if (0xf < local_40) {
    pvVar8 = local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pvVar8 = *(void **)((int)local_54[0] + -4),
       0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  if (0xf < local_58) {
    pvVar8 = local_6c[0];
    if ((0xfff < local_58 + 1) &&
       (pvVar8 = *(void **)((int)local_6c[0] + -4),
       0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  local_5c = 0;
  local_58 = 0xf;
  local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < in_stack_00000020) {
    pvVar8 = param_5;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar8 = *(void **)((int)param_5 + -4), 0x1f < (uint)((int)param_5 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
