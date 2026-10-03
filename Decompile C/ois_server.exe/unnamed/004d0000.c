#include "../ois_server.exe.h"


undefined1 __cdecl FUN_004d0010(int param_1,undefined4 param_2,void *param_3)

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
          (*(char *)(iVar2 + 0x3c4) != '\0')))) {
        uVar5 = 1;
        goto LAB_004d0096;
      }
    }
  }
  uVar5 = 0;
LAB_004d0096:
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


undefined1 __cdecl FUN_004d00e0(int param_1,undefined4 param_2,void *param_3)

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
          (-1.0 < *(float *)(iVar2 + 0x3c0))))) {
        uVar5 = 1;
        goto LAB_004d016e;
      }
    }
  }
  uVar5 = 0;
LAB_004d016e:
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


undefined1 __cdecl FUN_004d01c0(int param_1,undefined4 param_2,void *param_3)

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
      if ((cVar3 != '\0') &&
         (((*(int *)(param_1 + 0x1b4) == -1 ||
           (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar2 == 0)) ||
          (*(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4) == 0)))) {
        uVar5 = 1;
        goto LAB_004d023c;
      }
    }
  }
  uVar5 = 0;
LAB_004d023c:
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


undefined1 __cdecl FUN_004d0290(int param_1,undefined4 param_2,void *param_3)

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
           (*(char *)(iVar2 + 0x3bc) != '\0')) && (*(char *)(iVar2 + 0x3c4) != '\0')))) {
        uVar5 = 1;
        goto LAB_004d031f;
      }
    }
  }
  uVar5 = 0;
LAB_004d031f:
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


undefined1 __cdecl FUN_004d0370(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int extraout_ECX;
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
         (iVar2 = *(int *)(iVar2 + 0x38 + *(int *)(param_1 + 0x1b4) * 4), iVar2 != 0)) {
        cVar3 = FUN_0051c6c0(iVar2);
        if ((cVar3 != '\0') && (*(char *)(extraout_ECX + 0x3c4) == '\0')) {
          uVar5 = 1;
          goto LAB_004d03ff;
        }
      }
    }
  }
  uVar5 = 0;
LAB_004d03ff:
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


undefined1 __cdecl FUN_004d0450(int param_1,undefined4 param_2,void *param_3)

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
           (*(char *)(iVar2 + 0x3bc) != '\0')) && (*(char *)(iVar2 + 0x3c4) == '\0')))) {
        uVar5 = 1;
        goto LAB_004d04df;
      }
    }
  }
  uVar5 = 0;
LAB_004d04df:
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


undefined1 __cdecl FUN_004d0530(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_005225b0(*(void **)(param_1 + 0x40),1);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        uVar5 = 1;
        goto LAB_004d0582;
      }
    }
  }
  uVar5 = 0;
LAB_004d0582:
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


undefined1 __cdecl FUN_004d05d0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_005225b0(*(void **)(param_1 + 0x40),1);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x18))(uVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar3 + 0x14))();
        if (cVar1 == '\0') {
          uVar5 = 1;
          goto LAB_004d0632;
        }
      }
    }
  }
  uVar5 = 0;
LAB_004d0632:
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


undefined1 __cdecl FUN_004d0680(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_005225b0(*(void **)(param_1 + 0x40),1);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x14))(uVar2);
      if (cVar1 != '\0') {
        uVar5 = 1;
        goto LAB_004d06d2;
      }
    }
  }
  uVar5 = 0;
LAB_004d06d2:
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


undefined1 __cdecl FUN_004d0720(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    iVar1 = FUN_005225b0(*(void **)(param_1 + 0x40),1);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 99) != '\0')) {
      uVar3 = 1;
      goto LAB_004d0745;
    }
  }
  uVar3 = 0;
LAB_004d0745:
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


undefined1 __cdecl FUN_004d0780(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_005225b0(*(void **)(param_1 + 0x40),1);
    if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 99) != '\0')) {
      cVar1 = (**(code **)(*piVar3 + 0x10))(0,uVar2);
      if (cVar1 != '\0') {
        uVar5 = 1;
        goto LAB_004d07da;
      }
    }
  }
  uVar5 = 0;
LAB_004d07da:
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


undefined1 __cdecl FUN_004d0830(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d087c;
    }
  }
  uVar4 = 0;
LAB_004d087c:
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


undefined1 __cdecl FUN_004d08d0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x10) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d092e;
      }
    }
  }
  uVar4 = 0;
LAB_004d092e:
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


undefined1 __cdecl FUN_004d0980(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0)
      ) && (*(char *)((int)piVar1 + 99) != '\0')) {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d09d2;
    }
  }
  uVar4 = 0;
LAB_004d09d2:
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


undefined1 __cdecl FUN_004d0a20(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d0a80(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d0acc;
    }
  }
  uVar4 = 0;
LAB_004d0acc:
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


undefined1 __cdecl FUN_004d0b20(int param_1,undefined4 param_2,void *param_3)

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
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x18) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d0b7e;
      }
    }
  }
  uVar4 = 0;
LAB_004d0b7e:
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


undefined1 __cdecl FUN_004d0bd0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d0c1c;
    }
  }
  uVar4 = 0;
LAB_004d0c1c:
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


undefined1 __cdecl FUN_004d0c70(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x18), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d0cd0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d0d1c;
    }
  }
  uVar4 = 0;
LAB_004d0d1c:
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


undefined1 __cdecl FUN_004d0d70(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x1c) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d0dce;
      }
    }
  }
  uVar4 = 0;
LAB_004d0dce:
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


undefined1 __cdecl FUN_004d0e20(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d0e6c;
    }
  }
  uVar4 = 0;
LAB_004d0e6c:
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


undefined1 __cdecl FUN_004d0ec0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d0f20(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,0);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,0);
      cVar1 = (**(code **)(*piVar4 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        uVar6 = 1;
        goto LAB_004d0f7e;
      }
    }
  }
  uVar6 = 0;
LAB_004d0f7e:
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


undefined1 __cdecl FUN_004d0fd0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,1);
      cVar1 = (**(code **)(*piVar4 + 0x18))(uVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar4 + 0x14))();
        if (cVar1 == '\0') {
          uVar6 = 1;
          goto LAB_004d103d;
        }
      }
    }
  }
  uVar6 = 0;
LAB_004d103d:
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


undefined1 __cdecl FUN_004d1090(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,1);
      cVar1 = (**(code **)(*piVar4 + 0x14))(uVar2);
      if (cVar1 != '\0') {
        uVar6 = 1;
        goto LAB_004d10ee;
      }
    }
  }
  uVar6 = 0;
LAB_004d10ee:
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


undefined1 __cdecl FUN_004d1140(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    pvVar2 = *(void **)(param_1 + 0x40);
    iVar1 = FUN_005227f0(pvVar2,1);
    if (iVar1 != 0) {
      iVar1 = FUN_005227f0(pvVar2,1);
      if (*(char *)(iVar1 + 99) != '\0') {
        uVar3 = 1;
        goto LAB_004d1171;
      }
    }
  }
  uVar3 = 0;
LAB_004d1171:
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


undefined1 __cdecl FUN_004d11b0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,1);
      cVar1 = (**(code **)(*piVar4 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        uVar6 = 1;
        goto LAB_004d120e;
      }
    }
  }
  uVar6 = 0;
LAB_004d120e:
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


undefined1 __cdecl FUN_004d1260(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,2);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,2);
      cVar1 = (**(code **)(*piVar4 + 0x18))(uVar2);
      if (cVar1 == '\0') {
        uVar6 = 1;
        goto LAB_004d12be;
      }
    }
  }
  uVar6 = 0;
LAB_004d12be:
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


undefined1 __cdecl FUN_004d1310(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,2);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,2);
      cVar1 = (**(code **)(*piVar4 + 0x18))(uVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar4 + 0x14))();
        if (cVar1 == '\0') {
          uVar6 = 1;
          goto LAB_004d137d;
        }
      }
    }
  }
  uVar6 = 0;
LAB_004d137d:
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


undefined1 __cdecl FUN_004d13d0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    pvVar5 = *(void **)(param_1 + 0x40);
    iVar3 = FUN_005227f0(pvVar5,2);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005227f0(pvVar5,2);
      cVar1 = (**(code **)(*piVar4 + 0x14))(uVar2);
      if (cVar1 != '\0') {
        uVar6 = 1;
        goto LAB_004d142e;
      }
    }
  }
  uVar6 = 0;
LAB_004d142e:
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


undefined1 __cdecl FUN_004d1480(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    pvVar2 = *(void **)(param_1 + 0x40);
    iVar1 = FUN_005227f0(pvVar2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_005227f0(pvVar2,2);
      if (*(char *)(iVar1 + 99) != '\0') {
        uVar3 = 1;
        goto LAB_004d14b1;
      }
    }
  }
  uVar3 = 0;
LAB_004d14b1:
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


undefined1 __cdecl FUN_004d14f0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d153c;
    }
  }
  uVar4 = 0;
LAB_004d153c:
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


undefined1 __cdecl FUN_004d1590(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d15ee;
      }
    }
  }
  uVar4 = 0;
LAB_004d15ee:
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


undefined1 __cdecl FUN_004d1640(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d168c;
    }
  }
  uVar4 = 0;
LAB_004d168c:
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


undefined1 __cdecl FUN_004d16e0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x24), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d1740(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
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
  if ((param_1 != 0) && ((int *)**(int **)(param_1 + 0x40) != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x18))
                      (DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar1 == '\0') {
      uVar3 = 1;
      goto LAB_004d178b;
    }
  }
  uVar3 = 0;
LAB_004d178b:
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


undefined1 __cdecl FUN_004d17e0(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && ((int *)**(int **)(param_1 + 0x40) != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x18))
                      (DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x40) + 0x14))();
      if (cVar1 == '\0') {
        uVar3 = 1;
        goto LAB_004d183c;
      }
    }
  }
  uVar3 = 0;
LAB_004d183c:
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


undefined1 __cdecl FUN_004d1890(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
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
  if ((param_1 != 0) && ((int *)**(int **)(param_1 + 0x40) != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x40) + 0x14))
                      (DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_004d18db;
    }
  }
  uVar3 = 0;
LAB_004d18db:
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


undefined1 __cdecl FUN_004d1930(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (**(int **)(param_1 + 0x40) == 0)) ||
     (*(char *)(**(int **)(param_1 + 0x40) + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d1990(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x28), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d19dc;
    }
  }
  uVar4 = 0;
LAB_004d19dc:
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


undefined1 __cdecl FUN_004d1a30(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x28), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x28) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d1a8e;
      }
    }
  }
  uVar4 = 0;
LAB_004d1a8e:
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


undefined1 __cdecl FUN_004d1ae0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x28), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d1b2c;
    }
  }
  uVar4 = 0;
LAB_004d1b2c:
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


undefined1 __cdecl FUN_004d1b80(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x28), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d1be0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d1c2c;
    }
  }
  uVar4 = 0;
LAB_004d1c2c:
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


undefined1 __cdecl FUN_004d1c80(int param_1,undefined4 param_2,void *param_3)

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
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d1cde;
      }
    }
  }
  uVar4 = 0;
LAB_004d1cde:
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


undefined1 __cdecl FUN_004d1d30(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d1d7c;
    }
  }
  uVar4 = 0;
LAB_004d1d7c:
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


undefined1 __cdecl FUN_004d1dd0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d1e30(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 == '\0') {
      uVar4 = 1;
      goto LAB_004d1e7c;
    }
  }
  uVar4 = 0;
LAB_004d1e7c:
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


undefined1 __cdecl FUN_004d1ed0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x18))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x14) + 0x14))();
      if (cVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d1f2e;
      }
    }
  }
  uVar4 = 0;
LAB_004d1f2e:
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


undefined1 __cdecl FUN_004d1f80(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d1fcc;
    }
  }
  uVar4 = 0;
LAB_004d1fcc:
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


undefined1 __cdecl FUN_004d2020(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14), iVar1 == 0)) ||
     (*(char *)(iVar1 + 99) == '\0')) {
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


undefined1 __cdecl FUN_004d2080(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    for (piVar3 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
        piVar3 != *(int **)(*(int *)(param_1 + 0x40) + 0x40); piVar3 = piVar3 + 1) {
      piVar1 = (int *)*piVar3;
      if (*(int *)(piVar1[2] + 4) == param_2) {
        cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
        if ((cVar2 != '\0') && (cVar2 = (**(code **)(*piVar1 + 0x1c))(), cVar2 == '\0')) {
          uVar5 = 1;
          goto LAB_004d20d6;
        }
        break;
      }
    }
  }
  uVar5 = 0;
LAB_004d20d6:
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


undefined1 __cdecl FUN_004d2140(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    for (piVar3 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
        piVar3 != *(int **)(*(int *)(param_1 + 0x40) + 0x40); piVar3 = piVar3 + 1) {
      piVar1 = (int *)*piVar3;
      if (*(int *)(piVar1[2] + 4) == param_2) {
        cVar2 = (**(code **)(*piVar1 + 0x14))(DAT_0065500c ^ (uint)&stack0xfffffffc);
        if ((cVar2 == '\0') && (*(char *)((int)piVar1 + 99) == '\0')) {
          uVar5 = 1;
          goto LAB_004d2196;
        }
        break;
      }
    }
  }
  uVar5 = 0;
LAB_004d2196:
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


undefined1 __cdecl FUN_004d2200(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  float fVar7;
  uint in_stack_00000020;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar3 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar3 = FUN_00512500(param_1);
      if ((cVar3 == '\0') &&
         ((((*(int *)(param_1 + 0x178) == 0 &&
            (iVar2 = *(int *)(param_1 + 0x1d0), *(int *)(param_1 + 0x50) != iVar2)) &&
           (piVar1 = *(int **)(param_1 + 0x24), *piVar1 != iVar2)) && (iVar2 != -1)))) {
        piVar4 = FUN_004a7280(DAT_0065b5cc,iVar2);
        local_1c = (float)piVar1[0x1f];
        local_18 = (float)piVar1[0x20];
        fVar7 = (float)piVar4[0x1f];
        local_20 = (float)piVar4[0x20];
        local_8 = CONCAT31(local_8._1_3_,2);
        local_24 = fVar7;
        FUN_00591010((Vec2 *)&local_24,(Vec2 *)&local_1c);
        local_14 = fVar7;
        FUN_004ae6c0(*(int *)(*(int *)(param_1 + 0x40) + 0x14));
        if (local_14 <= fVar7) {
          uVar6 = 1;
          goto LAB_004d2317;
        }
      }
    }
  }
  uVar6 = 0;
LAB_004d2317:
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


undefined1 __cdecl FUN_004d2370(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 uVar6;
  float fVar7;
  uint in_stack_00000020;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar3 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar3 = FUN_00512500(param_1);
      if ((cVar3 == '\0') && (*(int *)(param_1 + 0x178) == 0)) {
        iVar2 = *(int *)(param_1 + 0x1d0);
        if (((*(int *)(param_1 + 0x50) != iVar2) &&
            (piVar1 = *(int **)(param_1 + 0x24), *piVar1 != iVar2)) && (iVar2 != -1)) {
          piVar4 = FUN_004a7280(DAT_0065b5cc,iVar2);
          local_1c = (float)piVar1[0x1f];
          local_18 = (float)piVar1[0x20];
          fVar7 = (float)piVar4[0x1f];
          local_20 = (float)piVar4[0x20];
          local_8 = CONCAT31(local_8._1_3_,2);
          local_24 = fVar7;
          FUN_00591010((Vec2 *)&local_24,(Vec2 *)&local_1c);
          local_14 = fVar7;
          FUN_004ae6c0(*(int *)(*(int *)(param_1 + 0x40) + 0x14));
          if (local_14 <= fVar7) goto LAB_004d2485;
        }
        uVar6 = 1;
        goto LAB_004d2487;
      }
    }
  }
LAB_004d2485:
  uVar6 = 0;
LAB_004d2487:
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


undefined1 __cdecl FUN_004d24e0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar2 = FUN_00512500(param_1);
      if ((cVar2 == '\0') &&
         ((*(int *)(param_1 + 0x178) == 0 &&
          (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0)))) {
        cVar2 = (**(code **)(*piVar1 + 0x10))(0);
        if ((cVar2 != '\0') && (*(float *)(param_1 + 0x58) == -1.0)) {
          uVar4 = 1;
          goto LAB_004d257e;
        }
      }
    }
  }
  uVar4 = 0;
LAB_004d257e:
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


undefined1 __cdecl FUN_004d25d0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar2 = FUN_00512500(param_1);
      if ((cVar2 == '\0') &&
         ((*(int *)(param_1 + 0x178) == 0 &&
          (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0)))) {
        cVar2 = (**(code **)(*piVar1 + 0x10))(0);
        if ((cVar2 != '\0') && (*(float *)(param_1 + 0x58) != -1.0)) {
          uVar4 = 1;
          goto LAB_004d266e;
        }
      }
    }
  }
  uVar4 = 0;
LAB_004d266e:
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


undefined1 __cdecl FUN_004d26c0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar2 = FUN_00512500(param_1);
      if ((cVar2 == '\0') &&
         (((*(int *)(param_1 + 0x178) == 0 &&
           (0.0 < *(float *)(param_1 + 0x58) || *(float *)(param_1 + 0x58) == 0.0)) &&
          (*(float *)(param_1 + 0x54) == -1.0)))) {
        uVar4 = 1;
        goto LAB_004d2750;
      }
    }
  }
  uVar4 = 0;
LAB_004d2750:
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


undefined1 __cdecl FUN_004d27a0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar2 = FUN_00512500(param_1);
      if ((cVar2 == '\0') && (*(int *)(param_1 + 0x178) == 0)) {
        if (*(float *)(param_1 + 0x58) <= 0.0 && *(float *)(param_1 + 0x58) != 0.0) {
          uVar4 = 1;
          goto LAB_004d2834;
        }
        if (*(float *)(param_1 + 0x54) != -1.0) {
          uVar4 = 1;
          goto LAB_004d2834;
        }
      }
    }
  }
  uVar4 = 0;
LAB_004d2834:
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


bool __cdecl FUN_004d2880(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x14) != 0;
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


bool __cdecl FUN_004d28e0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x14) == 0;
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


undefined1 __cdecl FUN_004d2940(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if ((cVar2 != '\0') && (0.0 < *(float *)(param_1 + 0x58))) {
        uVar4 = 1;
        goto LAB_004d29af;
      }
    }
  }
  uVar4 = 0;
LAB_004d29af:
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


undefined1 __cdecl FUN_004d2a00(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if (((cVar2 != '\0') && (*(float *)(param_1 + 0x5c) != -1.0)) &&
         (*(float *)(param_1 + 0x5c) != 100.0)) {
        uVar4 = 1;
        goto LAB_004d2a85;
      }
    }
  }
  uVar4 = 0;
LAB_004d2a85:
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


undefined1 __cdecl FUN_004d2ad0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if ((cVar2 != '\0') &&
         (100.0 < *(float *)(param_1 + 0x5c) || *(float *)(param_1 + 0x5c) == 100.0)) {
        uVar4 = 1;
        goto LAB_004d2b44;
      }
    }
  }
  uVar4 = 0;
LAB_004d2b44:
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


undefined1 __cdecl FUN_004d2b90(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if ((cVar2 != '\0') && (*(float *)(param_1 + 0x58) == 0.0)) {
        uVar4 = 1;
        goto LAB_004d2c08;
      }
    }
  }
  uVar4 = 0;
LAB_004d2c08:
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


undefined1 __cdecl FUN_004d2c60(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined1 uVar4;
  float fVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((((param_1 == 0) ||
         (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 == (int *)0x0)) ||
        (cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc),
        cVar2 == '\0')) ||
       ((*(int *)(param_1 + 0xd4) == 3 &&
        ((*(int *)(param_1 + 0xf8) == 2 || (*(int *)(param_1 + 0xf8) == 3)))))) ||
      (*(int *)(param_1 + 0x178) != 0)) ||
     (((piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 == (int *)0x0 ||
       (cVar2 = (**(code **)(*piVar1 + 0x10))(0), cVar2 == '\0')) ||
      ((*(int *)(param_1 + 0x50) == -1 ||
       ((((*(float *)(param_1 + 0x58) != 0.0 || (fVar5 = *(float *)(param_1 + 0x5c), fVar5 != -1.0))
         || (cVar2 = FUN_004cb1c0(param_1 + 8),
            *(int *)(param_1 + 0x60) != CONCAT31(extraout_var,cVar2))) ||
        (FUN_00403cb0(param_1), 0.0 < fVar5)))))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d2d90(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined1 uVar4;
  float fVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 == 0) || (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 == (int *)0x0)
      ) || (cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc),
           cVar2 == '\0')) {
LAB_004d2e7a:
    uVar4 = 0;
  }
  else {
    if ((((*(int *)(param_1 + 0xd4) != 3) ||
         ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))) &&
        (*(int *)(param_1 + 0x178) == 0)) &&
       (((piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24), piVar1 != (int *)0x0 &&
         (cVar2 = (**(code **)(*piVar1 + 0x10))(0), cVar2 != '\0')) &&
        (*(int *)(param_1 + 0x50) != -1)))) {
      if (*(float *)(param_1 + 0x58) != 0.0) {
        uVar4 = 1;
        goto LAB_004d2e7c;
      }
      fVar5 = *(float *)(param_1 + 0x5c);
      if (fVar5 != -1.0) {
        uVar4 = 1;
        goto LAB_004d2e7c;
      }
      cVar2 = FUN_004cb1c0(param_1 + 8);
      if (*(int *)(param_1 + 0x60) != CONCAT31(extraout_var,cVar2)) {
        uVar4 = 1;
        goto LAB_004d2e7c;
      }
      FUN_00403cb0(param_1);
      if (fVar5 <= 0.0) goto LAB_004d2e7a;
    }
    uVar4 = 1;
  }
LAB_004d2e7c:
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
  return uVar4;
}


undefined1 __cdecl FUN_004d2ed0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined1 uVar4;
  float fVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && ((*(int *)(param_1 + 0xd4) != 3 || (*(int *)(param_1 + 0xf8) != 2)))) {
      cVar2 = FUN_00512500(param_1);
      if ((cVar2 == '\0') &&
         ((((*(int *)(param_1 + 0x178) == 0 && (*(int *)(param_1 + 0x50) != -1)) &&
           (*(float *)(param_1 + 0x58) == 0.0)) &&
          ((50.0 < *(float *)(param_1 + 0x5c) || *(float *)(param_1 + 0x5c) == 50.0 &&
           (fVar5 = *(float *)(param_1 + 0x54), fVar5 == -1.0)))))) {
        cVar2 = FUN_004cb1c0(param_1 + 8);
        if (*(int *)(param_1 + 0x60) == CONCAT31(extraout_var,cVar2)) {
          FUN_00403cb0(param_1);
          if (fVar5 <= 0.0) {
            uVar4 = 1;
            goto LAB_004d2fa0;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_004d2fa0:
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


undefined1 __cdecl FUN_004d2ff0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined1 uVar4;
  float fVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      if ((*(int *)(param_1 + 0xd4) != 3) || (*(int *)(param_1 + 0xf8) != 2)) {
        cVar2 = FUN_00512500(param_1);
        if ((cVar2 == '\0') && (*(int *)(param_1 + 0x178) == 0)) {
          if (*(int *)(param_1 + 0x50) == -1) {
            uVar4 = 1;
            goto LAB_004d30d8;
          }
          if (*(float *)(param_1 + 0x58) != 0.0) {
            uVar4 = 1;
            goto LAB_004d30d8;
          }
          if (*(float *)(param_1 + 0x5c) <= 50.0 && *(float *)(param_1 + 0x5c) != 50.0) {
            uVar4 = 1;
            goto LAB_004d30d8;
          }
          fVar5 = *(float *)(param_1 + 0x54);
          if (fVar5 != -1.0) {
            uVar4 = 1;
            goto LAB_004d30d8;
          }
          cVar2 = FUN_004cb1c0(param_1 + 8);
          if (*(int *)(param_1 + 0x60) != CONCAT31(extraout_var,cVar2)) {
            uVar4 = 1;
            goto LAB_004d30d8;
          }
          FUN_00403cb0(param_1);
          if (fVar5 <= 0.0) goto LAB_004d30d6;
        }
      }
      uVar4 = 1;
      goto LAB_004d30d8;
    }
  }
LAB_004d30d6:
  uVar4 = 0;
LAB_004d30d8:
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


bool __cdecl FUN_004d3130(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_00522850(*(int *)(param_1 + 0x40));
    bVar3 = iVar1 < 0x19;
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


bool __cdecl FUN_004d31c0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  float in_XMM0_Da;
  float fVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x40), iVar1 == 0)) {
    bVar3 = false;
  }
  else {
    FUN_00522be0(iVar1);
    fVar4 = in_XMM0_Da;
    FUN_00522c50(iVar1);
    bVar3 = fVar4 <= in_XMM0_Da;
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


bool __cdecl FUN_004d3270(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  float in_XMM0_Da;
  float fVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x40), iVar1 == 0)) {
    bVar3 = false;
  }
  else {
    FUN_00522be0(iVar1);
    fVar4 = in_XMM0_Da;
    FUN_00522c50(iVar1);
    bVar3 = in_XMM0_Da < fVar4;
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


bool __cdecl FUN_004d3320(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xd0) == '\0';
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


undefined1 __cdecl FUN_004d3380(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0xd0);
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


undefined1 __cdecl FUN_004d33d0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x1b1);
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


undefined1 __cdecl FUN_004d3420(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x1b0);
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


undefined1 __cdecl FUN_004d3470(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x1b2);
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


undefined1 __cdecl FUN_004d34c0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 4), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d350e;
    }
  }
  uVar4 = 0;
LAB_004d350e:
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


undefined1 __cdecl FUN_004d3560(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x10), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d35ae;
    }
  }
  uVar4 = 0;
LAB_004d35ae:
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


undefined1 __cdecl FUN_004d3600(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 4), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) != '\0')) {
      uVar4 = 1;
      goto LAB_004d365b;
    }
  }
  uVar4 = 0;
LAB_004d365b:
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


undefined1 __cdecl FUN_004d36b0(int param_1,undefined4 param_2,void *param_3)

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
  if (((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 4), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) == '\0')) {
      uVar4 = 1;
      goto LAB_004d370f;
    }
  }
  uVar4 = 0;
LAB_004d370f:
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


bool __cdecl FUN_004d3760(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x1d8) != -1;
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


bool __cdecl FUN_004d37c0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x1d8) == -1;
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


undefined1 __cdecl FUN_004d3820(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    iVar1 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
    if (iVar1 != 0) {
      uVar3 = *(undefined1 *)(iVar1 + 99);
      goto LAB_004d384a;
    }
  }
  uVar3 = 0;
LAB_004d384a:
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


bool __cdecl FUN_004d3890(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    iVar1 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
    if (iVar1 != 0) {
      bVar3 = *(char *)(iVar1 + 99) == '\0';
      goto LAB_004d38be;
    }
  }
  bVar3 = false;
LAB_004d38be:
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
  return bVar3;
}


undefined1 __cdecl FUN_004d3900(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    uVar3 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar1 >> 2;
    if (uVar5 != 0) {
      do {
        iVar2 = *(int *)(iVar1 + uVar3 * 4);
        if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0x1e8)) {
          if (iVar2 != 0) {
            uVar6 = 1;
            goto LAB_004d3936;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  uVar6 = 0;
LAB_004d3936:
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
  return uVar6;
}


undefined1 __cdecl FUN_004d3980(int param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    pvVar3 = *(void **)(param_1 + 0x40);
    uVar1 = 0;
    uVar4 = *(int *)((int)pvVar3 + 0x40) - *(int *)((int)pvVar3 + 0x3c) >> 2;
    if (uVar4 != 0) {
      do {
        iVar2 = *(int *)(*(int *)((int)pvVar3 + 0x3c) + uVar1 * 4);
        if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0x1e8)) {
          if (iVar2 != 0) {
            iVar2 = FUN_005225b0(pvVar3,*(int *)(param_1 + 0x1e8));
            uVar5 = *(undefined1 *)(iVar2 + 99);
            goto LAB_004d39b6;
          }
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
  }
  uVar5 = 0;
LAB_004d39b6:
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
  return uVar5;
}


bool __cdecl FUN_004d3a10(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x1e8), iVar2 == -1)) {
    bVar4 = false;
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x40);
    iVar1 = FUN_005225b0(pvVar3,iVar2);
    if (iVar1 == 0) {
      bVar4 = true;
    }
    else {
      iVar2 = FUN_005225b0(pvVar3,iVar2);
      bVar4 = *(char *)(iVar2 + 99) == '\0';
    }
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
  return bVar4;
}


undefined1 __cdecl FUN_004d3a90(int param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  
  if (param_1 != 0) {
    pvVar3 = *(void **)(param_1 + 0x40);
    uVar1 = 0;
    uVar4 = *(int *)((int)pvVar3 + 0x40) - *(int *)((int)pvVar3 + 0x3c) >> 2;
    if (uVar4 != 0) {
      do {
        iVar2 = *(int *)(*(int *)((int)pvVar3 + 0x3c) + uVar1 * 4);
        if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0x1e8)) {
          if (iVar2 != 0) {
            iVar2 = FUN_005225b0(pvVar3,*(int *)(param_1 + 0x1e8));
            uVar5 = *(undefined1 *)(iVar2 + 0x14);
            goto LAB_004d3ac6;
          }
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
  }
  uVar5 = 0;
LAB_004d3ac6:
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
  return uVar5;
}


bool __cdecl FUN_004d3b20(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x1e8), iVar2 == -1)) {
    bVar4 = false;
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x40);
    iVar1 = FUN_005225b0(pvVar3,iVar2);
    if (iVar1 == 0) {
      bVar4 = true;
    }
    else {
      iVar2 = FUN_005225b0(pvVar3,iVar2);
      bVar4 = *(char *)(iVar2 + 0x14) == '\0';
    }
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
  return bVar4;
}


bool __cdecl FUN_004d3ba0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e8) != -1)) {
    pvVar4 = *(void **)(param_1 + 0x40);
    iVar1 = FUN_005225b0(pvVar4,*(int *)(param_1 + 0x1e8));
    if (iVar1 == 0) {
      bVar6 = true;
      goto LAB_004d3bee;
    }
    uVar2 = 0;
    piVar3 = *(int **)((int)pvVar4 + 0x3c);
    uVar5 = *(int *)((int)pvVar4 + 0x40) - (int)piVar3 >> 2;
    if (uVar5 != 0) {
      do {
        if (*piVar3 == iVar1) {
          if (uVar2 != 0xffffffff) {
            bVar6 = 0 < (int)uVar2;
            goto LAB_004d3bee;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < uVar5);
    }
  }
  bVar6 = false;
LAB_004d3bee:
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
  return bVar6;
}


bool __cdecl FUN_004d3c40(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e8) != -1)) {
    pvVar4 = *(void **)(param_1 + 0x40);
    iVar1 = FUN_005225b0(pvVar4,*(int *)(param_1 + 0x1e8));
    if (iVar1 == 0) {
      bVar6 = true;
      goto LAB_004d3c8e;
    }
    uVar3 = 0;
    piVar2 = *(int **)((int)pvVar4 + 0x3c);
    uVar5 = *(int *)((int)pvVar4 + 0x40) - (int)piVar2 >> 2;
    if (uVar5 != 0) {
      do {
        if (*piVar2 == iVar1) {
          if (uVar3 != 0xffffffff) {
            bVar6 = uVar3 < uVar5 - 1;
            goto LAB_004d3c8e;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < uVar5);
    }
  }
  bVar6 = false;
LAB_004d3c8e:
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
  return bVar6;
}


undefined1 __cdecl FUN_004d3ce0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 8), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d3d2e;
    }
  }
  uVar4 = 0;
LAB_004d3d2e:
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


undefined1 __cdecl FUN_004d3d80(int param_1,undefined4 param_2,void *param_3)

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
    cVar2 = FUN_004d3ce0(param_1,0,pvVar3);
    if (((cVar2 != '\0') &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8), *(float *)(iVar1 + 0x6c) <= -1.0)) &&
       (0 < *(int *)(iVar1 + 0x68))) {
      uVar4 = 1;
      goto LAB_004d3e03;
    }
  }
  uVar4 = 0;
LAB_004d3e03:
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


undefined1 __cdecl FUN_004d3e50(int param_1,undefined4 param_2,void *param_3)

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
    cVar2 = FUN_004d3ce0(param_1,0,pvVar3);
    if ((cVar2 != '\0') &&
       ((iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8), 0.0 <= *(float *)(iVar1 + 0x6c) ||
        (*(int *)(iVar1 + 0x68) < 1)))) {
      uVar4 = 1;
      goto LAB_004d3ed3;
    }
  }
  uVar4 = 0;
LAB_004d3ed3:
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


undefined1 __cdecl FUN_004d3f20(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(int *)(*(int *)(param_1 + 0x40) + 0xc) == 0)) {
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


undefined1 __cdecl FUN_004d3f80(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
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
    pvVar2 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
    cVar1 = FUN_004d3f20(param_1,0,pvVar2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0xc) + 0x10))();
      if ((cVar1 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) != '\0')) {
        uVar3 = 1;
        goto LAB_004d4009;
      }
    }
  }
  uVar3 = 0;
LAB_004d4009:
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
