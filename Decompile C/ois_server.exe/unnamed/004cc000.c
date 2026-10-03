#include "../ois_server.exe.h"


bool __cdecl FUN_004cc040(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(char *)(DAT_0065b444 + 0x71) != '\0')) ||
     ((*(int *)(DAT_0065b5cc + 0xcc) != 0 && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)))
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xd4) != 3;
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


bool __cdecl FUN_004cc0c0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004cc180(param_1,param_2,pvVar2);
    bVar3 = cVar1 == '\0';
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


undefined1 __cdecl FUN_004cc180(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004cc870(param_1,param_2,pvVar2);
    if (((cVar1 != '\0') && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 1)) {
      uVar3 = 1;
      goto LAB_004cc203;
    }
  }
  uVar3 = 0;
LAB_004cc203:
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


undefined1 __cdecl FUN_004cc250(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004cc870(param_1,param_2,pvVar2);
    if (((cVar1 != '\0') && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 3)) {
      uVar3 = 1;
      goto LAB_004cc2d3;
    }
  }
  uVar3 = 0;
LAB_004cc2d3:
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


undefined1 __cdecl FUN_004cc320(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  byte *pbVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pbVar4 = (byte *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004cc510(param_1,param_2,pbVar4);
    if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x178) + 0x38c) != -1)) {
      FUN_004024e0(&stack0xffffffc8,(undefined4 *)(param_1 + 0x238));
      cVar1 = FUN_0051ae20(*(void **)(param_1 + 0x178),pbVar4);
      if (cVar1 == '\0') {
        uVar3 = 1;
        goto LAB_004cc3ba;
      }
    }
  }
  uVar3 = 0;
LAB_004cc3ba:
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


undefined1 __cdecl FUN_004cc410(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  byte *pbVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pbVar4 = (byte *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004cc510(param_1,param_2,pbVar4);
    if (((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x178) + 0x38c) != -1)) &&
       (*(float *)(param_1 + 0x54) == -1.0)) {
      FUN_004024e0(&stack0xffffffc8,(undefined4 *)(param_1 + 0x238));
      cVar1 = FUN_0051ae20(*(void **)(param_1 + 0x178),pbVar4);
      if (cVar1 != '\0') {
        uVar3 = 1;
        goto LAB_004cc4bc;
      }
    }
  }
  uVar3 = 0;
LAB_004cc4bc:
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


undefined1 __cdecl FUN_004cc510(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004cc870(param_1,param_2,pvVar2);
    if (((cVar1 != '\0') && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 2)) {
      uVar3 = 1;
      goto LAB_004cc593;
    }
  }
  uVar3 = 0;
LAB_004cc593:
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


undefined1 __cdecl FUN_004cc5e0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar2 = FUN_004cc870(param_1,param_2,pvVar3);
    if ((((cVar2 != '\0') && (iVar1 = *(int *)(param_1 + 0x178), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 2)) && (*(int *)(iVar1 + 0x38c) == -1)) {
      uVar4 = 1;
      goto LAB_004cc66c;
    }
  }
  uVar4 = 0;
LAB_004cc66c:
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


undefined1 __cdecl FUN_004cc6c0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined1 uVar6;
  byte *pbVar7;
  uint in_stack_00000020;
  
  iVar2 = DAT_0065b5cc;
  if (param_1 == 0) {
    uVar6 = 0;
    goto LAB_004cc773;
  }
  pbVar7 = (byte *)(param_1 + 8);
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pbVar7 = *(byte **)(param_1 + 8);
  }
  pbVar4 = (byte *)(DAT_0065b5cc + 0x10c);
  if (0xf < *(uint *)(DAT_0065b5cc + 0x120)) {
    pbVar4 = *(byte **)(DAT_0065b5cc + 0x10c);
  }
  uVar3 = FUN_004031f0(pbVar4,*(uint *)(DAT_0065b5cc + 0x11c),pbVar7,*(uint *)(param_1 + 0x18));
  if ((char)uVar3 == '\0') {
LAB_004cc74e:
    if ((199 < *(int *)(*(int *)(iVar2 + 0x124) + 0x1c)) &&
       (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')) {
      uVar6 = 1;
      goto LAB_004cc773;
    }
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x124);
    pbVar7 = (byte *)(iVar1 + 4);
    if (0xf < *(uint *)(iVar1 + 0x18)) {
      pbVar7 = *(byte **)(iVar1 + 4);
    }
    pbVar4 = (byte *)(iVar2 + 0xf4);
    if (0xf < *(uint *)(iVar2 + 0x108)) {
      pbVar4 = *(byte **)(iVar2 + 0xf4);
    }
    uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar2 + 0x104),pbVar7,*(uint *)(iVar1 + 0x14));
    if ((char)uVar3 == '\0') goto LAB_004cc74e;
  }
  uVar6 = 0;
LAB_004cc773:
  if (0xf < in_stack_00000020) {
    pvVar5 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar5 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  return uVar6;
}


undefined1 __cdecl FUN_004cc7b0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) != 1)) {
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


undefined1 __cdecl FUN_004cc810(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) != 3)) {
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


undefined1 __cdecl FUN_004cc870(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x174);
    if (iVar1 != 0) {
      pbVar3 = (byte *)(iVar1 + 200);
      if (0xf < *(uint *)(iVar1 + 0xdc)) {
        pbVar3 = *(byte **)(iVar1 + 200);
      }
      uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0xd8),(byte *)&PTR_005ce008,0);
      if ((char)uVar2 == '\0') {
        uVar5 = 1;
        goto LAB_004cc8d0;
      }
    }
    if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
      uVar5 = 1;
      goto LAB_004cc8d0;
    }
  }
  uVar5 = 0;
LAB_004cc8d0:
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
  return uVar5;
}


undefined1 __cdecl FUN_004cc910(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x174);
    if (iVar1 != 0) {
      pbVar3 = (byte *)(iVar1 + 200);
      if (0xf < *(uint *)(iVar1 + 0xdc)) {
        pbVar3 = *(byte **)(iVar1 + 200);
      }
      uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0xd8),(byte *)&PTR_005ce008,0);
      if ((char)uVar2 == '\0') goto LAB_004cc97a;
    }
    if (((*(int *)(param_1 + 0xd4) != 3) || (*(int *)(param_1 + 0x178) == 0)) ||
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) != 1)) {
      uVar5 = 1;
      goto LAB_004cc97c;
    }
  }
LAB_004cc97a:
  uVar5 = 0;
LAB_004cc97c:
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
  return uVar5;
}


undefined1 __cdecl FUN_004cc9c0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x174);
    if (iVar1 != 0) {
      pbVar3 = (byte *)(iVar1 + 200);
      if (0xf < *(uint *)(iVar1 + 0xdc)) {
        pbVar3 = *(byte **)(iVar1 + 200);
      }
      uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0xd8),(byte *)&PTR_005ce008,0);
      if ((char)uVar2 == '\0') {
        uVar5 = 1;
        goto LAB_004cca30;
      }
    }
    if (((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0x178) != 0)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) == 1)) {
      uVar5 = 1;
      goto LAB_004cca30;
    }
  }
  uVar5 = 0;
LAB_004cca30:
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
  return uVar5;
}


undefined1 __cdecl FUN_004cca70(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 1.0)) {
      uVar4 = 1;
      goto LAB_004ccad9;
    }
  }
  uVar4 = 0;
LAB_004ccad9:
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


undefined1 __cdecl FUN_004ccb30(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 2.0)) {
      uVar4 = 1;
      goto LAB_004ccb99;
    }
  }
  uVar4 = 0;
LAB_004ccb99:
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


undefined1 __cdecl FUN_004ccbf0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 3.0)) {
      uVar4 = 1;
      goto LAB_004ccc59;
    }
  }
  uVar4 = 0;
LAB_004ccc59:
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


undefined1 __cdecl FUN_004cccb0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 4.0)) {
      uVar4 = 1;
      goto LAB_004ccd19;
    }
  }
  uVar4 = 0;
LAB_004ccd19:
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


undefined1 __cdecl FUN_004ccd70(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 5.0)) {
      uVar4 = 1;
      goto LAB_004ccdd9;
    }
  }
  uVar4 = 0;
LAB_004ccdd9:
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


undefined1 __cdecl FUN_004cce30(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 6.0)) {
      uVar4 = 1;
      goto LAB_004cce99;
    }
  }
  uVar4 = 0;
LAB_004cce99:
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


undefined1 __cdecl FUN_004ccef0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 7.0)) {
      uVar4 = 1;
      goto LAB_004ccf59;
    }
  }
  uVar4 = 0;
LAB_004ccf59:
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


undefined1 __cdecl FUN_004ccfb0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((double)*(int *)(param_1 + 0x1b4) == 8.0)) {
      uVar4 = 1;
      goto LAB_004cd019;
    }
  }
  uVar4 = 0;
LAB_004cd019:
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


undefined1 __cdecl FUN_004cd070(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) == 1)) {
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


undefined1 __cdecl FUN_004cd0d0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 3)) || (*(int *)(param_1 + 0xf8) == 3)) {
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


undefined1 __cdecl FUN_004cd130(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined1 uVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
LAB_004cd1b8:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
      bVar4 = false;
      if (iVar1 != 0) {
        bVar4 = *(int *)(iVar1 + 0x158) == 2;
      }
      if (bVar4) goto LAB_004cd1b8;
    }
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    uVar2 = FUN_004cc870(param_1,param_2,pvVar3);
  }
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
  return uVar2;
}


bool __cdecl FUN_004cd210(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  bVar2 = DAT_00655098 == 0;
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar1 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  return param_1 != 0 && bVar2;
}


undefined1 __cdecl FUN_004cd270(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if ((*(int *)(param_1 + 0xd4) == 0) || (*(int *)(param_1 + 0xd4) == 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
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


bool __cdecl FUN_004cd2d0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xd4) == 2;
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


undefined1 __cdecl FUN_004cd330(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) != 0)) {
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


undefined1 __cdecl FUN_004cd390(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) != 2)) {
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


undefined1 __cdecl FUN_004cd3f0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) != 1)) {
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


undefined1 __cdecl FUN_004cd450(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) == 0)) {
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


undefined1 __cdecl FUN_004cd4b0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) == 2)) {
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


undefined1 __cdecl FUN_004cd510(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) != 2)) || (*(int *)(param_1 + 0xec) == 1)) {
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


bool __cdecl FUN_004cd570(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xe8) == 4;
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


bool __cdecl FUN_004cd5d0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xe8) == 5;
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


bool __cdecl FUN_004cd630(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xe8) == 1;
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


bool __cdecl FUN_004cd690(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xe8) == 3;
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


bool __cdecl FUN_004cd6f0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xe8) == 2;
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


undefined1 __cdecl FUN_004cd750(void *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (void *)0x0) {
    pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004cc250((int)param_1,param_2,pvVar3);
    if (cVar1 != '\0') {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      iVar2 = FUN_0051a690(param_1);
      if ((0 < iVar2 * 5) && (iVar2 * 5 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
        uVar4 = 1;
        goto LAB_004cd7f3;
      }
    }
  }
  uVar4 = 0;
LAB_004cd7f3:
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


undefined1 __cdecl FUN_004cd840(void *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (void *)0x0) {
    pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004cc250((int)param_1,param_2,pvVar3);
    if (cVar1 != '\0') {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      iVar2 = FUN_0051a690(param_1);
      if ((iVar2 * 5 == 0) || (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar2 * 5)) {
        uVar4 = 1;
        goto LAB_004cd8e3;
      }
    }
  }
  uVar4 = 0;
LAB_004cd8e3:
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


undefined1 __cdecl FUN_004cd930(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004cc250(param_1,param_2,pvVar3);
    if (cVar1 != '\0') {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      iVar2 = FUN_0051a960(param_1);
      if ((0 < iVar2) && (iVar2 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
        uVar4 = 1;
        goto LAB_004cd9d1;
      }
    }
  }
  uVar4 = 0;
LAB_004cd9d1:
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


undefined1 __cdecl FUN_004cda20(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004cc250(param_1,param_2,pvVar3);
    if (cVar1 != '\0') {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      iVar2 = FUN_0051a960(param_1);
      if ((iVar2 == 0) || (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar2)) {
        uVar4 = 1;
        goto LAB_004cdac1;
      }
    }
  }
  uVar4 = 0;
LAB_004cdac1:
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


bool __cdecl FUN_004cdb10(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffb0;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffb0 & 0xffffff00);
    FUN_00402690(&stack0xffffffb0,&PTR_005ce008,0);
    cVar1 = FUN_004cc250(param_1,param_2,pvVar3);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
      if (iVar2 == 0) {
        iVar4 = 0;
        iVar2 = 0;
      }
      else {
        cVar1 = FUN_004ae510(iVar2);
        iVar4 = CONCAT31(extraout_var,cVar1);
        iVar2 = (int)*(float *)(*(int *)(iVar2 + 8) + 0x104);
      }
      if (iVar4 < iVar2) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_0060a970,3);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0049b6c0();
        if (0xf < local_18) {
          pvVar3 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar3 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar3);
        }
        bVar5 = 0x4f < *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c);
        goto LAB_004cdc23;
      }
    }
  }
  bVar5 = false;
LAB_004cdc23:
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
  return bVar5;
}


bool __cdecl FUN_004cdc70(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffb0;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffb0 & 0xffffff00);
    FUN_00402690(&stack0xffffffb0,&PTR_005ce008,0);
    cVar1 = FUN_004cc250(param_1,param_2,pvVar3);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
      if (iVar2 == 0) {
        iVar4 = 0;
        iVar2 = 0;
      }
      else {
        cVar1 = FUN_004ae510(iVar2);
        iVar4 = CONCAT31(extraout_var,cVar1);
        iVar2 = (int)*(float *)(*(int *)(iVar2 + 8) + 0x104);
      }
      if (iVar4 < iVar2) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_0060a970,3);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0049b6c0();
        if (0xf < local_18) {
          pvVar3 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar3 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar3);
        }
        bVar5 = *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < 0x50;
      }
      else {
        bVar5 = true;
      }
      goto LAB_004cdd87;
    }
  }
  bVar5 = false;
LAB_004cdd87:
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
  return bVar5;
}


bool __cdecl FUN_004cddd0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar2 = FUN_004cc250(param_1,param_2,pvVar3);
    if (((cVar2 != '\0') && (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8), iVar1 != 0)) &&
       ((float)*(int *)(iVar1 + 0x68) < *(float *)(*(int *)(iVar1 + 8) + 0x104))) {
      FUN_0049b6c0();
      bVar4 = 0x18 < *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c);
      goto LAB_004cde6d;
    }
  }
  bVar4 = false;
LAB_004cde6d:
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
  return bVar4;
}


bool __cdecl FUN_004cdec0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar2 = FUN_004cc250(param_1,param_2,pvVar3);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      if ((iVar1 == 0) || (*(float *)(*(int *)(iVar1 + 8) + 0x104) <= (float)*(int *)(iVar1 + 0x68))
         ) {
        bVar4 = true;
      }
      else {
        FUN_0049b6c0();
        bVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < 0x19;
      }
      goto LAB_004cdf61;
    }
  }
  bVar4 = false;
LAB_004cdf61:
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
  return bVar4;
}


undefined1 __cdecl FUN_004cdfb0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if (((param_1 != 0) &&
      ((pvVar3 = *(void **)(param_1 + 0x17c), pvVar3 != (void *)0x0 ||
       (pvVar3 = *(void **)(param_1 + 0x178), pvVar3 != (void *)0x0)))) &&
     ((iVar1 = *(int *)(*(int *)((int)pvVar3 + 0x254) + 0x158), iVar1 == 1 ||
      ((iVar1 == 2 || (iVar1 == 3)))))) {
    uVar2 = FUN_0051b830(pvVar3,param_1);
    if ((char)uVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004cdffc;
    }
  }
  uVar4 = 0;
LAB_004cdffc:
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
  return uVar4;
}


undefined1 __cdecl FUN_004ce040(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if ((param_1 != 0) &&
     ((*(char *)(DAT_0065b444 + 0x11d) != '\0' ||
      (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')))) {
    pvVar3 = *(void **)(param_1 + 0x17c);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = *(void **)(param_1 + 0x178);
      if (pvVar3 != (void *)0x0) {
        iVar1 = FUN_0051a470(*(int *)((int)pvVar3 + 0x254));
        if ((char)iVar1 != '\0') {
          uVar2 = FUN_0051b830(pvVar3,extraout_EDX_00);
          if ((char)uVar2 == '\0') {
            uVar4 = 1;
            goto LAB_004ce0bd;
          }
        }
      }
    }
    else {
      iVar1 = FUN_0051a470(*(int *)((int)pvVar3 + 0x254));
      if ((char)iVar1 != '\0') {
        uVar2 = FUN_0051b830(pvVar3,extraout_EDX);
        if ((char)uVar2 == '\0') {
          uVar4 = 1;
          goto LAB_004ce0bd;
        }
      }
    }
  }
  uVar4 = 0;
LAB_004ce0bd:
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
  return uVar4;
}


undefined1 __cdecl FUN_004ce100(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 *this;
  undefined4 uVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,"ready_to_disembark_station",0x1a);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar2 = FUN_004a1150(this,pvVar4);
      if (bVar2 == 0) goto LAB_004ce1ec;
    }
    if (((((*(char *)(DAT_0065b444 + 0x11d) != '\0') ||
          (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')) ||
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
        (pvVar4 = *(void **)(param_1 + 0x178), pvVar4 != (void *)0x0)) &&
       ((((iVar1 = *(int *)(*(int *)((int)pvVar4 + 0x254) + 0x158), iVar1 == 1 || (iVar1 == 2)) ||
         (iVar1 == 3)) && (uVar3 = FUN_0051b860(pvVar4,param_1), (char)uVar3 != '\0')))) {
      uVar5 = 1;
      goto LAB_004ce1ee;
    }
  }
LAB_004ce1ec:
  uVar5 = 0;
LAB_004ce1ee:
  if (0xf < in_stack_00000020) {
    pvVar4 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar4 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}


undefined1 __cdecl FUN_004ce240(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if (((param_1 != 0) &&
      (((*(char *)(DAT_0065b444 + 0x11d) != '\0' ||
        (*(char *)(*(int *)(param_1 + 0x254) + 0xe0) == '\0')) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)))) &&
     ((pvVar3 = *(void **)(param_1 + 0x178), pvVar3 != (void *)0x0 &&
      (((iVar1 = *(int *)(*(int *)((int)pvVar3 + 0x254) + 0x158), iVar1 == 1 || (iVar1 == 2)) ||
       (iVar1 == 3)))))) {
    uVar2 = FUN_0051b860(pvVar3,param_1);
    if ((char)uVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004ce2ae;
    }
  }
  uVar4 = 0;
LAB_004ce2ae:
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
  return uVar4;
}


undefined1 __cdecl FUN_004ce2f0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004ce240(param_1,0,pvVar3);
    if ((cVar1 != '\0') && (iVar2 = *(int *)(param_1 + 0x178), iVar2 != 0)) {
      bVar5 = false;
      if (*(int *)(iVar2 + 0x254) != 0) {
        bVar5 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158) == 1;
      }
      if (bVar5) {
        iVar2 = FUN_0051bc10(iVar2);
        if (iVar2 == 0) {
          uVar4 = 1;
          goto LAB_004ce386;
        }
      }
    }
  }
  uVar4 = 0;
LAB_004ce386:
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


undefined1 __cdecl FUN_004ce3d0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004ce240(param_1,0,pvVar3);
    if (cVar1 == '\0') {
      uVar4 = 1;
      goto LAB_004ce46a;
    }
    iVar2 = *(int *)(param_1 + 0x178);
    if (iVar2 != 0) {
      bVar5 = false;
      if (*(int *)(iVar2 + 0x254) != 0) {
        bVar5 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158) == 1;
      }
      if (bVar5) {
        iVar2 = FUN_0051bc10(iVar2);
        if (iVar2 != 0) {
          uVar4 = 1;
          goto LAB_004ce46a;
        }
      }
    }
  }
  uVar4 = 0;
LAB_004ce46a:
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


undefined1 __cdecl FUN_004ce4c0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if ((*(char *)(param_1 + 0x280) == '\0') || (*(char *)(param_1 + 0x281) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
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


undefined1 __cdecl FUN_004ce530(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(char *)(param_1 + 0x280) == '\0')) ||
     (*(char *)(param_1 + 0x281) == '\0')) {
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


undefined1 __cdecl FUN_004ce590(int param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  undefined4 *this;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *this_00;
  undefined1 uVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,"ready_to_disembark_station",0x1a);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar1 = FUN_004a1150(this,pvVar4);
      if (bVar1 == 0) goto LAB_004ce666;
    }
    if ((((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) &&
        (*(char *)(param_1 + 0x280) != '\0')) &&
       ((*(char *)(param_1 + 0x281) != '\0' && (*(int *)(param_1 + 0x178) != 0)))) {
      iVar2 = FUN_0051a470(*(int *)(*(int *)(param_1 + 0x178) + 0x254));
      if ((char)iVar2 != '\0') {
        uVar3 = FUN_0051b860(this_00,param_1);
        if ((char)uVar3 != '\0') {
          uVar5 = 1;
          goto LAB_004ce668;
        }
      }
    }
  }
LAB_004ce666:
  uVar5 = 0;
LAB_004ce668:
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


bool __cdecl FUN_004ce6c0(int param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *this;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdbd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      in_stack_ffffffcc = (void *)((uint)in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"ready_to_disembark_station",0x1a);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      bVar1 = FUN_004a1150(this,in_stack_ffffffcc);
      if (bVar1 == 0) goto LAB_004ce78e;
    }
    if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
      pvVar3 = (void *)((uint)in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
      cVar2 = FUN_004ce590(param_1,0,pvVar3);
      bVar4 = cVar2 == '\0';
      goto LAB_004ce790;
    }
  }
LAB_004ce78e:
  bVar4 = false;
LAB_004ce790:
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
  return bVar4;
}


undefined1 __cdecl FUN_004ce7e0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x40) == 0)) ||
     (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0')) {
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


undefined1 __cdecl FUN_004ce840(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) ||
       (((*(int *)(DAT_0065b5cc + 0xcc) != 0 &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) ||
        (*(char *)(DAT_0065b444 + 0x72) == '\0')))) ||
      ((iVar1 = *(int *)(param_1 + 0x19c), iVar1 == 0 || (*(int *)(iVar1 + 0x130) == 0)))) ||
     ((*(char *)(*(int *)(*(int *)(iVar1 + 0x130) + 0x40) + 0x34) == '\0' &&
      (5.0 < *(float *)(iVar1 + 0x40))))) {
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
  return uVar3;
}


undefined1 __cdecl FUN_004ce8e0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x178), iVar1 == 0)) ||
      ((iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158), iVar2 != 1 &&
       ((iVar2 != 2 && (iVar2 != 3)))))) ||
     ((*(int *)(iVar1 + 0x390) == 0 || ((int)*(float *)(*(int *)(iVar1 + 0x390) + 0xd0) < 1)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
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
  return uVar4;
}


undefined1 __cdecl FUN_004ce970(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if ((((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x178), iVar2 != 0)) &&
      ((iVar1 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158), iVar1 == 1 ||
       ((iVar1 == 2 || (iVar1 == 3)))))) &&
     ((*(int *)(iVar2 + 0x390) != 0 && (0 < (int)*(float *)(*(int *)(iVar2 + 0x390) + 0xd0))))) {
    iVar2 = FUN_0051bc10(iVar2);
    if (iVar2 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) {
      uVar4 = 1;
      goto LAB_004ce9d2;
    }
  }
  uVar4 = 0;
LAB_004ce9d2:
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
  return uVar4;
}


undefined1 __cdecl FUN_004cea10(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if ((((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x178), iVar2 != 0)) &&
      ((iVar1 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158), iVar1 == 1 ||
       ((iVar1 == 2 || (iVar1 == 3)))))) &&
     ((*(int *)(iVar2 + 0x390) != 0 && (0 < (int)*(float *)(*(int *)(iVar2 + 0x390) + 0xd0))))) {
    iVar2 = FUN_0051bc10(iVar2);
    if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar2) {
      uVar4 = 1;
      goto LAB_004cea72;
    }
  }
  uVar4 = 0;
LAB_004cea72:
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
  return uVar4;
}


undefined1 __cdecl FUN_004ceab0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  uint in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((param_1 != 0) && (*(char *)(param_1 + 0x280) != '\0')) &&
      (*(char *)(param_1 + 0x281) != '\0')) &&
     ((*(int *)(param_1 + 0xd4) == 3 && (*(int *)(param_1 + 0xf8) == 2)))) {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004ce240(param_1,param_2,pvVar2);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_004ceb3e;
    }
  }
  uVar3 = 0;
LAB_004ceb3e:
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


undefined1 __cdecl FUN_004ceb90(int param_1,undefined4 param_2,void *param_3)

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
  
  puStack_c = &LAB_005bdbd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(DAT_0065b5cc + 0xcc) != 0)) &&
     (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
    pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"ready_to_jump_in_tutorial",0x19);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (((bVar1 != 0) && (*(float *)(param_1 + 0x118) == 0.0)) &&
       (*(float *)(param_1 + 0x11c) == 0.0)) {
      uVar3 = 1;
      goto LAB_004cec3f;
    }
  }
  uVar3 = 0;
LAB_004cec3f:
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


undefined1 __cdecl FUN_004cec90(int param_1,undefined4 param_2,void *param_3)

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
  if (((param_1 != 0) && (*(int *)(DAT_0065b5cc + 0xcc) != 0)) &&
     (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"tutorial_jumped",0xf);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 == 0) {
      uVar3 = 1;
      goto LAB_004ced18;
    }
  }
  uVar3 = 0;
LAB_004ced18:
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


undefined1 __cdecl FUN_004ced60(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if ((*(float *)(param_1 + 0x118) == 0.0) && (*(float *)(param_1 + 0x11c) == 0.0)) {
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


bool __cdecl FUN_004cede0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 != 0;
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


undefined1 __cdecl FUN_004cee40(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 == 0)) ||
     (*(int *)(param_1 + 0xd4) == 1)) {
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


bool __cdecl FUN_004ceeb0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if ((param_1 == 0) ||
     ((*(int *)(DAT_0065b5cc + 0xcc) != 0 && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)))
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xd4) == 1;
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


bool __cdecl FUN_004cef20(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xd4) != 1;
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


undefined1 __cdecl FUN_004cef80(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x178) == 0)) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158) != 2)) {
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


bool __cdecl FUN_004ceff0(int param_1,undefined4 param_2,void *param_3)

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
  else if (*(void **)(param_1 + 0x40) == (void *)0x0) {
    bVar3 = true;
  }
  else {
    iVar1 = FUN_005224c0(*(void **)(param_1 + 0x40),1,'\x01');
    bVar3 = iVar1 == 0;
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


undefined1 __cdecl FUN_004cf090(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    iVar1 = FUN_005224c0(*(void **)(param_1 + 0x40),1,'\x01');
    if (iVar1 != 0) {
      uVar3 = 1;
      goto LAB_004cf0db;
    }
  }
  uVar3 = 0;
LAB_004cf0db:
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


undefined1 __cdecl FUN_004cf130(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) &&
     (((*(int *)(DAT_0065b5cc + 0xcc) == 0 || (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1))
      && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0)))) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (((cVar2 != '\0') && (DAT_0065b3e0 != -1.0)) &&
       (DAT_0065b3e0 != (double)*(float *)(param_1 + 0x120))) {
      uVar4 = 1;
      goto LAB_004cf1bf;
    }
  }
  uVar4 = 0;
LAB_004cf1bf:
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


undefined1 __cdecl FUN_004cf210(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x62) != '\0')) {
      uVar4 = 1;
      goto LAB_004cf26b;
    }
  }
  uVar4 = 0;
LAB_004cf26b:
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


undefined1 __cdecl FUN_004cf2c0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar3 != '\0') &&
       ((iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18), *(char *)(iVar2 + 0x62) != '\0' &&
        (*(int *)(iVar2 + 0x34) == 1)))) {
      uVar5 = 1;
      goto LAB_004cf321;
    }
  }
  uVar5 = 0;
LAB_004cf321:
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


undefined1 __cdecl FUN_004cf370(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar3 != '\0') &&
       ((iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18), *(char *)(iVar2 + 0x62) != '\0' &&
        (*(int *)(iVar2 + 0x34) == 2)))) {
      uVar5 = 1;
      goto LAB_004cf3d1;
    }
  }
  uVar5 = 0;
LAB_004cf3d1:
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


undefined1 __cdecl FUN_004cf420(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  float in_XMM0_Da;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) &&
     (((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)) &&
      (*(int *)(param_1 + 0xd4) != 2)))) {
    FUN_00403cb0(param_1);
    if (in_XMM0_Da == 0.0) {
      uVar2 = 1;
      goto LAB_004cf482;
    }
  }
  uVar2 = 0;
LAB_004cf482:
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
  ExceptionList = local_10;
  return uVar2;
}


bool __cdecl FUN_004cf4d0(int param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  float in_XMM0_Da;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_00518820(param_1);
    if ((char)uVar1 == '\0') {
      FUN_00403cb0(param_1);
      bVar3 = 0.0 < in_XMM0_Da;
      goto LAB_004cf522;
    }
  }
  bVar3 = false;
LAB_004cf522:
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


undefined1 __cdecl FUN_004cf570(void *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (void *)0x0) {
    uVar2 = FUN_0050f330((int)param_1);
    if ((char)uVar2 != '\0') {
      pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
      cVar1 = FUN_004cb7d0(param_1,param_2,pvVar3);
      if (((cVar1 != '\0') && (*(int *)((int)param_1 + 0x1b4) != -1)) &&
         (*(int *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x20) + 0x38 +
                           *(int *)((int)param_1 + 0x1b4) * 4) + 0x38c) == 0)) {
        uVar4 = 1;
        goto LAB_004cf604;
      }
    }
  }
  uVar4 = 0;
LAB_004cf604:
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


undefined1 __cdecl FUN_004cf650(void *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (void *)0x0) {
    uVar2 = FUN_0050f330((int)param_1);
    if ((char)uVar2 != '\0') {
      pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
      cVar1 = FUN_004cb7d0(param_1,param_2,pvVar3);
      if (((cVar1 != '\0') && (*(int *)((int)param_1 + 0x1b4) != -1)) &&
         (*(int *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x20) + 0x38 +
                           *(int *)((int)param_1 + 0x1b4) * 4) + 0x38c) != 0)) {
        uVar4 = 1;
        goto LAB_004cf6e4;
      }
    }
  }
  uVar4 = 0;
LAB_004cf6e4:
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


undefined1 __cdecl FUN_004cf730(void *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_0050f330((int)param_1);
    if ((char)uVar2 != '\0') {
      pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
      cVar1 = FUN_004cb7d0(param_1,param_2,pvVar3);
      if ((cVar1 != '\0') && (*(int *)((int)param_1 + 0x1b4) != -1)) {
        uVar4 = 0;
        goto LAB_004cf7b3;
      }
    }
    uVar4 = 1;
  }
LAB_004cf7b3:
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


undefined1 __cdecl FUN_004cf800(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (((cVar3 != '\0') &&
        (((*(int *)(param_1 + 0x1b4) != -1 &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)))) &&
       (*(int *)(*(int *)(iVar2 + 0x388) + 0x194) == 0)) {
      uVar5 = 1;
      goto LAB_004cf87b;
    }
  }
  uVar5 = 0;
LAB_004cf87b:
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


undefined1 __cdecl FUN_004cf8d0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (((cVar3 != '\0') &&
        (((*(int *)(param_1 + 0x1b4) != -1 &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)))) &&
       (*(int *)(*(int *)(iVar2 + 0x388) + 0x194) == 1)) {
      uVar5 = 1;
      goto LAB_004cf94b;
    }
  }
  uVar5 = 0;
LAB_004cf94b:
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


undefined1 __cdecl FUN_004cf9a0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         (((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x3c4) != '\0')) && (*(char *)(iVar2 + 0x3c5) == '\0')))) {
        uVar5 = 1;
        goto LAB_004cfa2f;
      }
    }
  }
  uVar5 = 0;
LAB_004cfa2f:
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


undefined1 __cdecl FUN_004cfa80(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(char *)(iVar2 + 0x3c4) == '\0')))) {
        if (*(char *)(iVar2 + 0x3bc) == '\0') {
          cVar3 = FUN_004ade90(iVar2);
          if (cVar3 == '\0') goto LAB_004cfb16;
        }
        uVar5 = 1;
        goto LAB_004cfb18;
      }
    }
  }
LAB_004cfb16:
  uVar5 = 0;
LAB_004cfb18:
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


undefined1 __cdecl FUN_004cfb70(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if (((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
           (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
          ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x3c4) != '\0')))) &&
         ((*(int *)(iVar2 + 0x38c) == 0 ||
          ((*(float *)(iVar2 + 300) != -9999.0 || (*(float *)(iVar2 + 0x130) != -9999.0)))))) {
        uVar5 = 1;
        goto LAB_004cfc2d;
      }
    }
  }
  uVar5 = 0;
LAB_004cfc2d:
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


undefined1 __cdecl FUN_004cfc80(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 3)))) {
        uVar5 = 1;
        goto LAB_004cfd06;
      }
    }
  }
  uVar5 = 0;
LAB_004cfd06:
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


undefined1 __cdecl FUN_004cfd50(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 5)))) {
        uVar5 = 1;
        goto LAB_004cfdd6;
      }
    }
  }
  uVar5 = 0;
LAB_004cfdd6:
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


undefined1 __cdecl FUN_004cfe20(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if ((((cVar3 != '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0 &&
          (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 4)))) {
        uVar5 = 1;
        goto LAB_004cfea6;
      }
    }
  }
  uVar5 = 0;
LAB_004cfea6:
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


undefined1 __cdecl FUN_004cfef0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x1c))();
      if (cVar3 != '\0') {
        pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
        FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
        cVar3 = FUN_004d00e0(param_1,param_2,pvVar4);
        if ((((cVar3 == '\0') && (*(int *)(param_1 + 0x1b4) != -1)) &&
            (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 != 0)) &&
           (((*(char *)(iVar2 + 0x62) == '\0' &&
             (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)) &&
            ((*(char *)(iVar2 + 0x3bc) == '\0' && (*(float *)(iVar2 + 0x3c0) <= 0.0)))))) {
          uVar5 = 1;
          goto LAB_004cffc3;
        }
      }
    }
  }
  uVar5 = 0;
LAB_004cffc3:
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
