#include "../ois_server.exe.h"


undefined1 __cdecl FUN_004d4060(int param_1,undefined4 param_2,void *param_3)

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
      if ((cVar1 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) == '\0')) {
        uVar3 = 1;
        goto LAB_004d40e9;
      }
    }
  }
  uVar3 = 0;
LAB_004d40e9:
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


undefined1 __cdecl FUN_004d4140(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(int *)(*(int *)(param_1 + 0x40) + 0x1c) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x15c);
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


undefined1 __cdecl FUN_004d41a0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0xc), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) != '\0')) {
      uVar4 = 1;
      goto LAB_004d41fb;
    }
  }
  uVar4 = 0;
LAB_004d41fb:
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


undefined1 __cdecl FUN_004d4250(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 != '\0') {
      pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
      cVar2 = FUN_004d2940(param_1,0,pvVar3);
      if (cVar2 == '\0') {
        pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
        FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
        cVar2 = FUN_004d2b90(param_1,0,pvVar3);
        if (cVar2 == '\0') {
          pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
          FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
          cVar2 = FUN_004d2ad0(param_1,0,pvVar3);
          if (cVar2 == '\0') {
            pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
            FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
            cVar2 = FUN_004d2a00(param_1,0,pvVar3);
            if (cVar2 == '\0') goto LAB_004d436f;
          }
        }
      }
      uVar4 = 1;
      goto LAB_004d4371;
    }
  }
LAB_004d436f:
  uVar4 = 0;
LAB_004d4371:
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


undefined1 __cdecl FUN_004d43c0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(float *)(param_1 + 0x100) < 0.0)) || (1.0 < *(float *)(param_1 + 0x100))
     ) {
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


undefined1 __cdecl FUN_004d4430(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 5) == '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"menu_main",9);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d44ae;
    }
  }
  uVar3 = 0;
LAB_004d44ae:
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


undefined1 __cdecl FUN_004d4500(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 5) == '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"submenu_options",0xf);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d457e;
    }
  }
  uVar3 = 0;
LAB_004d457e:
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


undefined1 __cdecl FUN_004d45d0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 5) == '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"submenu_input",0xd);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d464e;
    }
  }
  uVar3 = 0;
LAB_004d464e:
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


undefined1 __cdecl FUN_004d46a0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 5) == '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"submenu_news",0xc);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d471e;
    }
  }
  uVar3 = 0;
LAB_004d471e:
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


undefined1 __cdecl FUN_004d4770(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 5) == '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"submenu_credits",0xf);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d47ee;
    }
  }
  uVar3 = 0;
LAB_004d47ee:
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


undefined1 __cdecl FUN_004d4840(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (*(char *)(DAT_0065b444 + 5) == '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"submenu_gameover",0x10);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004d48be;
    }
  }
  uVar3 = 0;
LAB_004d48be:
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


bool __cdecl FUN_004d4910(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(*(int *)(DAT_0065c288 + 0x11c) + 4 + param_2 * 0x44) == 1;
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


undefined1 __cdecl FUN_004d49d0(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_0048aee0(DAT_0065c288,param_2,(void *)0x0);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d4a90(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bdc9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
    }
    local_8 = 0;
    if (*(int *)(*(int *)((int)DAT_0065c288 + 0x11c) + 4 + param_2 * 0x44) == 1) {
      if (DAT_0065c288 == (void *)0x0) {
        puVar1 = (undefined4 *)FUN_005adb0f(300);
        local_8 = 2;
        DAT_0065c288 = (void *)FUN_00485f60(puVar1);
      }
      local_8 = 0;
      uVar2 = FUN_0048aee0(DAT_0065c288,param_2,(void *)0x0);
      if ((char)uVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d4b4c;
      }
    }
  }
  uVar4 = 0;
LAB_004d4b4c:
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


bool __cdecl FUN_004d4ba0(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(*(int *)(DAT_0065c288 + 0x11c) + 4 + param_2 * 0x44) == 2;
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


undefined1 __cdecl FUN_004d4c60(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_0048b800(DAT_0065c288,param_2,(void *)0x0);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d4d20(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bdc9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
    }
    local_8 = 0;
    if (*(int *)(*(int *)((int)DAT_0065c288 + 0x11c) + 4 + param_2 * 0x44) == 2) {
      if (DAT_0065c288 == (void *)0x0) {
        puVar1 = (undefined4 *)FUN_005adb0f(300);
        local_8 = 2;
        DAT_0065c288 = (void *)FUN_00485f60(puVar1);
      }
      local_8 = 0;
      uVar2 = FUN_0048b800(DAT_0065c288,param_2,(void *)0x0);
      if ((char)uVar2 == '\0') {
        uVar4 = 1;
        goto LAB_004d4ddc;
      }
    }
  }
  uVar4 = 0;
LAB_004d4ddc:
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


undefined1 __cdecl FUN_004d4e30(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bdc9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    local_8 = 0;
    if (*(int *)(*(int *)(DAT_0065c288 + 0x11c) + 4 + param_2 * 0x44) != 1) {
      if (DAT_0065c288 == 0) {
        puVar1 = (undefined4 *)FUN_005adb0f(300);
        local_8 = 2;
        DAT_0065c288 = FUN_00485f60(puVar1);
      }
      if (*(int *)(*(int *)(DAT_0065c288 + 0x11c) + 4 + param_2 * 0x44) != 2) {
        uVar3 = 0;
        goto LAB_004d4ee9;
      }
    }
    uVar3 = 1;
  }
LAB_004d4ee9:
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


bool __cdecl FUN_004d4f40(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(DAT_0065c288 + 0xcc) == 0;
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


bool __cdecl FUN_004d4ff0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(DAT_0065c288 + 0xcc) != 0;
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


bool __cdecl FUN_004d50a0(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(DAT_0065c288 + 0xcc) == param_2;
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


undefined1 __cdecl FUN_004d5160(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_0048ffb0(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d5220(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdcda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if ((*(int *)(DAT_0065c288 + 0xcc) == 1) && (iVar4 = *(int *)(DAT_0065c288 + 0xd0), iVar4 != -1)
       ) {
      piVar2 = (int *)FUN_00412490();
      uVar3 = 0;
      puVar1 = (undefined4 *)*piVar2;
      uVar8 = piVar2[1] - (int)puVar1 >> 2;
      puVar6 = puVar1;
      if (uVar8 != 0) {
        do {
          if (*(int *)*puVar6 == iVar4) {
            iVar4 = puVar1[uVar3];
            goto LAB_004d52c0;
          }
          uVar3 = uVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar3 < uVar8);
      }
      iVar4 = 0;
LAB_004d52c0:
      if ((*(char *)(iVar4 + 0xe0) != '\0') ||
         (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < *(int *)(iVar4 + 0xcc))) {
        uVar7 = 1;
        goto LAB_004d52ea;
      }
    }
  }
  uVar7 = 0;
LAB_004d52ea:
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
  return uVar7;
}


undefined1 __cdecl FUN_004d5340(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((*(int *)(DAT_0065c288 + 0xcc) == 2) && (*(int *)(DAT_0065c288 + 0xdc) != -1)) {
      uVar3 = 1;
      goto LAB_004d53b1;
    }
  }
  uVar3 = 0;
LAB_004d53b1:
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


undefined1 __cdecl FUN_004d5400(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((*(int *)(DAT_0065c288 + 0xcc) == 2) && (*(int *)(DAT_0065c288 + 0xdc) == -1)) {
      uVar3 = 1;
      goto LAB_004d5471;
    }
  }
  uVar3 = 0;
LAB_004d5471:
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


undefined1 __cdecl FUN_004d54c0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
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
    uVar3 = *(undefined1 *)(DAT_0065c288 + 0xe9);
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


undefined1 __cdecl FUN_004d5570(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_00490e20(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


bool __cdecl FUN_004d5630(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  bool bVar7;
  uint in_stack_00000020;
  byte *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdd1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if ((((*(int *)(DAT_0065c288 + 0xcc) == 3) && (999 < *(int *)(DAT_0065c288 + 0xd4))) &&
        (uVar3 = *(int *)(DAT_0065c288 + 0xd4) - 1000, -1 < (int)uVar3)) &&
       (uVar3 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2))) {
      iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0x13c) + uVar3 * 4);
      uVar3 = FUN_00413e90((byte *)(iVar1 + 0x20),(byte *)(DAT_0065b3d4 + 0x238));
      if ((char)uVar3 == '\0') {
        FUN_004024e0(&stack0xffffffcc,*(undefined4 **)(iVar1 + 0x58));
        piVar4 = (int *)FUN_004a8380(in_stack_ffffffcc);
        if (piVar4 == (int *)0x0) {
          bVar7 = 0 < *(int *)(*(int *)(iVar1 + 0x58) + 0x1c);
        }
        else {
          iVar5 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar4);
          bVar7 = iVar5 < *(int *)(*(int *)(iVar1 + 0x58) + 0x1c);
        }
      }
      else {
        bVar7 = true;
      }
      goto LAB_004d5741;
    }
  }
  bVar7 = false;
LAB_004d5741:
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
  return bVar7;
}


undefined1 __cdecl FUN_004d5790(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_004910f0(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


bool __cdecl FUN_004d5850(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  bool bVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdd1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar6 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar4 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar4);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar2 = DAT_0065c288;
    if (*(int *)(DAT_0065c288 + 0xcc) == 3) {
      if (*(int *)(DAT_0065c288 + 0xd4) == -1) {
        bVar6 = true;
      }
      else if (*(int *)(DAT_0065c288 + 0xd4) < 1000) {
        cVar3 = FUN_00490450(DAT_0065c288);
        if (cVar3 == '\0') {
          bVar6 = true;
        }
        else {
          iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
          bVar6 = (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2) <=
                  *(uint *)(iVar2 + 0xd4);
        }
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
    }
  }
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
  return bVar6;
}


bool __cdecl FUN_004d5970(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if (*(int *)(DAT_0065c288 + 0xcc) == 4) {
      if (*(int *)(DAT_0065c288 + 0xd8) == -1) {
        bVar4 = false;
      }
      else if (*(char *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe0) == '\0') {
        cVar1 = FUN_0040fd70();
        bVar4 = cVar1 == '\0';
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = false;
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
  ExceptionList = local_10;
  return bVar4;
}


bool __cdecl FUN_004d5a60(int param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  bool bVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if (*(int *)(DAT_0065c288 + 0xcc) == 4) {
      if (*(int *)(DAT_0065c288 + 0xd8) == -1) {
        bVar4 = false;
      }
      else if (*(char *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe0) == '\0') {
        cVar1 = FUN_0040fd70();
        bVar4 = cVar1 != '\0';
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = false;
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
  ExceptionList = local_10;
  return bVar4;
}


bool __cdecl FUN_004d5b50(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if (*(int *)(DAT_0065c288 + 0xcc) == 5) {
      bVar3 = *(int *)(DAT_0065c288 + 0xe4) != -1;
    }
    else {
      bVar3 = false;
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
  return bVar3;
}


bool __cdecl FUN_004d5c10(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if (*(int *)(DAT_0065c288 + 0xcc) == 5) {
      bVar3 = *(int *)(DAT_0065c288 + 0xe4) == -1;
    }
    else {
      bVar3 = false;
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
  return bVar3;
}


undefined1 __cdecl FUN_004d5cd0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_00492130(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d5d90(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdcda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar2 = DAT_0065c288;
    if ((*(int *)(DAT_0065c288 + 0xcc) == 2) && (*(int *)(DAT_0065c288 + 0xdc) != -1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (*(char *)(DAT_0065c288 + 0xe9) == '\0') {
        iVar6 = *(int *)(DAT_0065c288 + 0xdc);
        piVar4 = (int *)FUN_00412490();
        uVar5 = 0;
        puVar3 = (undefined4 *)*piVar4;
        uVar10 = piVar4[1] - (int)puVar3 >> 2;
        puVar8 = puVar3;
        if (uVar10 != 0) {
          do {
            if (*(int *)*puVar8 == iVar6) {
              iVar6 = puVar3[uVar5];
              goto LAB_004d5e55;
            }
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar5 < uVar10);
        }
        iVar6 = 0;
LAB_004d5e55:
        iVar6 = FUN_004a09a0(iVar6);
        if ((iVar6 < 1) || (*(int *)(iVar2 + 0xe0) < 1)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  if (0xf < in_stack_00000020) {
    pvVar7 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar7 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  ExceptionList = local_10;
  return uVar9;
}


undefined1 __cdecl FUN_004d5ec0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_004921a0(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d5f80(int param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdd1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar2 = DAT_0065c288;
    if ((*(int *)(DAT_0065c288 + 0xcc) == 2) && (*(int *)(DAT_0065c288 + 0xdc) != -1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (*(char *)(DAT_0065c288 + 0xe9) == '\0') {
        uVar6 = 0;
      }
      else {
        if ((*(int *)(DAT_0065c288 + 0xe0) != 0) &&
           (*(int *)(DAT_0065c288 + 0xe0) <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
          iVar7 = *(int *)(DAT_0065c288 + 0xdc);
          pvVar4 = (void *)FUN_00412490();
          piVar5 = FUN_004a0cd0(pvVar4,iVar7);
          if ((*(int *)(iVar2 + 0xe0) <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) &&
             (*(int *)(iVar2 + 0xe0) <= (int)(float)piVar5[0x34])) {
            uVar6 = 0;
            goto LAB_004d606c;
          }
        }
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
LAB_004d606c:
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
  return uVar6;
}


undefined1 __cdecl FUN_004d60c0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
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
    uVar3 = *(undefined1 *)(DAT_0065c288 + 0x128);
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


bool __cdecl FUN_004d6170(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(DAT_0065c288 + 0x10c) == 0;
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


bool __cdecl FUN_004d6220(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    bVar3 = *(int *)(DAT_0065c288 + 0x10c) == param_2;
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


undefined1 __cdecl FUN_004d62e0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdd1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar2 = DAT_0065c288;
    if (*(int *)(DAT_0065c288 + 0x10c) == 1) {
      iVar3 = *(int *)(DAT_0065c288 + 0x110);
      if (iVar3 == -1) {
        if (DAT_0065c2ec == 0) {
          DAT_0065c2ec = FUN_005adb0f(1);
        }
        iVar2 = FUN_0051a690(*(void **)(DAT_0065b5cc + 0xd0));
        iVar2 = iVar2 * 5;
      }
      else {
        if (DAT_0065c2ec == 0) {
          DAT_0065c2ec = FUN_005adb0f(1);
          iVar3 = *(int *)(iVar2 + 0x110);
        }
        iVar2 = FUN_0051a630(*(void **)(DAT_0065b5cc + 0xd0),iVar3);
      }
      if ((iVar2 != 0) && (iVar2 <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
        uVar5 = 1;
        goto LAB_004d63dc;
      }
    }
  }
  uVar5 = 0;
LAB_004d63dc:
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


undefined1 __cdecl FUN_004d6430(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdd1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar2 = DAT_0065c288;
    if (*(int *)(DAT_0065c288 + 0x10c) != 1) {
      uVar5 = 0;
      goto LAB_004d652f;
    }
    iVar3 = *(int *)(DAT_0065c288 + 0x110);
    if (iVar3 == -1) {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
      }
      iVar2 = FUN_0051a690(*(void **)(DAT_0065b5cc + 0xd0));
      iVar2 = iVar2 * 5;
    }
    else {
      if (DAT_0065c2ec == 0) {
        DAT_0065c2ec = FUN_005adb0f(1);
        iVar3 = *(int *)(iVar2 + 0x110);
      }
      iVar2 = FUN_0051a630(*(void **)(DAT_0065b5cc + 0xd0),iVar3);
    }
    if ((iVar2 == 0) || (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar2)) {
      uVar5 = 1;
      goto LAB_004d652f;
    }
  }
  uVar5 = 0;
LAB_004d652f:
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


undefined1 __cdecl FUN_004d6580(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((((*(int *)(DAT_0065c288 + 0x10c) == 2) && (*(int *)(DAT_0065c288 + 0x114) != -1)) &&
        (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                 *(int *)(DAT_0065c288 + 0x114) * 4) == 0)) &&
       (99 < *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
      uVar3 = 1;
      goto LAB_004d6618;
    }
  }
  uVar3 = 0;
LAB_004d6618:
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


bool __cdecl FUN_004d6660(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((*(int *)(DAT_0065c288 + 0x10c) == 2) && (*(int *)(DAT_0065c288 + 0x114) != -1)) {
      if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                  *(int *)(DAT_0065c288 + 0x114) * 4) == 0) {
        bVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < 100;
      }
      else {
        bVar3 = true;
      }
      goto LAB_004d66fb;
    }
  }
  bVar3 = false;
LAB_004d66fb:
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


undefined1 __cdecl FUN_004d6750(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if (((*(int *)(DAT_0065c288 + 0x10c) == 2) && (*(int *)(DAT_0065c288 + 0x114) != -1)) &&
       (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                *(int *)(DAT_0065c288 + 0x114) * 4) != 0)) {
      uVar3 = 1;
      goto LAB_004d67db;
    }
  }
  uVar3 = 0;
LAB_004d67db:
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


bool __cdecl FUN_004d6830(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if ((*(int *)(DAT_0065c288 + 0x10c) == 2) && (*(int *)(DAT_0065c288 + 0x114) != -1)) {
      bVar3 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                      *(int *)(DAT_0065c288 + 0x114) * 4) == 0;
      goto LAB_004d68ba;
    }
  }
  bVar3 = false;
LAB_004d68ba:
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


undefined1 __cdecl FUN_004d6910(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
    }
    uVar2 = FUN_004925e0(DAT_0065c288,param_2);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


bool __cdecl FUN_004d69d0(int param_1,int param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  bool bVar5;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdcda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar3);
    }
    iVar1 = DAT_0065b5cc;
    if ((*(int *)(DAT_0065c288 + 0x10c) == 2) && (*(int *)(DAT_0065c288 + 0x114) != -1)) {
      pvVar4 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                         *(int *)(DAT_0065c288 + 0x114) * 4);
      if (pvVar4 == (void *)0x0) {
        bVar5 = true;
        goto LAB_004d6a91;
      }
      if (param_2 - 1U < 2) {
        cVar2 = FUN_00506870(pvVar4,param_2);
        if (cVar2 == '\0') {
          bVar5 = *(int *)(*(int *)(iVar1 + 0x124) + 0x1c) < *(int *)(&DAT_005df604 + param_2 * 4);
        }
        else {
          bVar5 = true;
        }
        goto LAB_004d6a91;
      }
    }
  }
  bVar5 = false;
LAB_004d6a91:
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
  return bVar5;
}


undefined1 __cdecl FUN_004d6ae0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_00492650(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


bool __cdecl FUN_004d6ba0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdd1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if (*(int *)(DAT_0065c288 + 0x10c) == 3) {
      if (*(int *)(DAT_0065c288 + 0x118) == -1) {
        bVar2 = false;
      }
      else if (*(char *)(DAT_0065c288 + 0x109) == '\0') {
        piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398
                                            ) + 0x58) + *(int *)(DAT_0065c288 + 0x118) * 4);
        bVar2 = FUN_00522480(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),*piVar1);
        if (bVar2) {
          bVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < piVar1[1];
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
  }
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
  return bVar2;
}


bool __cdecl FUN_004d6cc0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c288 = FUN_00485f60(puVar1);
    }
    if (*(int *)(DAT_0065c288 + 0x10c) == 3) {
      if (*(int *)(DAT_0065c288 + 0x118) == -1) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)(DAT_0065c288 + 0x109) != '\0';
      }
    }
    else {
      bVar3 = false;
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
  return bVar3;
}


uint __cdecl FUN_004d6d90(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void **ppvVar2;
  void *pvVar3;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdd5a;
  local_10 = ExceptionList;
  ppvVar2 = &local_10;
  local_8 = 0;
  ExceptionList = ppvVar2;
  if ((param_1 != 0) && (DAT_0065c288 == (void **)0x0)) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = CONCAT31(local_8._1_3_,1);
    ppvVar2 = (void **)FUN_00485f60(puVar1);
    DAT_0065c288 = ppvVar2;
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
    ppvVar2 = (void **)FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return (uint)ppvVar2 & 0xffffff00;
}


bool __cdecl FUN_004d6e30(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
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
    if (*(int *)(DAT_0065c288 + 0x10c) == 3) {
      bVar3 = *(char *)(DAT_0065c288 + 0x109) == '\0';
      goto LAB_004d6ea0;
    }
  }
  bVar3 = false;
LAB_004d6ea0:
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


undefined1 __cdecl FUN_004d6ef0(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdc4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_00498c60(DAT_0065c288);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


undefined1 __cdecl FUN_004d6fb0(int param_1,undefined4 param_2,void *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined1 uVar7;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bdcda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    if (DAT_0065c288 == 0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar5 = DAT_0065c288;
    if (*(int *)(DAT_0065c288 + 0xf8) != -1) {
      iVar2 = *(int *)(*(int *)((int)*(void **)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      iVar4 = FUN_00511770(*(void **)(DAT_0065b5cc + 0xd0));
      fVar1 = *(float *)(iVar2 + 0x48);
      iVar5 = FUN_00511770(*(void **)(*(int *)(iVar2 + 0x3c) + *(int *)(iVar5 + 0xf8) * 4));
      iVar5 = iVar5 - (int)(fVar1 * (float)iVar4);
      if ((-1 < iVar5) && (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar5)) {
        uVar7 = 1;
        goto LAB_004d707d;
      }
    }
  }
  uVar7 = 0;
LAB_004d707d:
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


undefined1 __cdecl FUN_004d70d0(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bddda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_00494bf0(DAT_0065c288,param_1,param_2);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


bool __cdecl FUN_004d7190(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  uint in_stack_00000020;
  byte *in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bde1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar6 = false;
    goto LAB_004d72e9;
  }
  if (DAT_0065c288 == 0) {
    puVar3 = (undefined4 *)FUN_005adb0f(300);
    local_8._0_1_ = 1;
    DAT_0065c288 = FUN_00485f60(puVar3);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  iVar4 = DAT_0065c288;
  if (*(int *)(DAT_0065c288 + 0x10c) == 4) {
    if (param_2 != -1) {
      if (*(int *)(DAT_0065c288 + 0xf4) != -1) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20);
        if (piVar1 == (int *)0x0) {
          bVar6 = false;
          goto LAB_004d72e9;
        }
        cVar2 = (**(code **)(*piVar1 + 0x10))();
        if (cVar2 == '\0') {
          bVar6 = false;
          goto LAB_004d72e9;
        }
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c + *(int *)(iVar4 + 0xf4) * 4)
            == 0) {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffffc4,(&PTR_DAT_005dd9f4)[param_2]);
          iVar4 = FUN_004a8180(in_stack_ffffffc4);
          if ((iVar4 != 0) &&
             (*(int *)(iVar4 + 0x1a0) <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c))) {
            bVar6 = false;
            goto LAB_004d72e9;
          }
        }
      }
LAB_004d72e7:
      bVar6 = true;
      goto LAB_004d72e9;
    }
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x18))();
      if (cVar2 == '\0') {
        iVar4 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8);
        if ((float)*(int *)(iVar4 + 0x68) < *(float *)(*(int *)(iVar4 + 8) + 0x104)) {
          FUN_0049b6c0();
          bVar6 = *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < 0x19;
          goto LAB_004d72e9;
        }
        goto LAB_004d72e7;
      }
    }
  }
  bVar6 = false;
LAB_004d72e9:
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
  return bVar6;
}


undefined1 __cdecl FUN_004d7340(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bddda;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_0065c288 == (void *)0x0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = (void *)FUN_00485f60(puVar1);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    uVar2 = FUN_00494d00(DAT_0065c288,param_1);
    uVar4 = (undefined1)uVar2;
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
  return uVar4;
}


bool __cdecl FUN_004d7400(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  bool bVar7;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bde1a;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    bVar7 = false;
  }
  else {
    if (DAT_0065c288 == 0) {
      puVar5 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      DAT_0065c288 = FUN_00485f60(puVar5);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    iVar2 = DAT_0065c288;
    if (*(int *)(DAT_0065c288 + 0x10c) == 4) {
      if (*(int *)(DAT_0065c288 + 0xf4) == -1) {
        bVar7 = true;
      }
      else {
        piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20);
        if (piVar1 == (int *)0x0) {
          bVar7 = false;
        }
        else {
          cVar3 = (**(code **)(*piVar1 + 0x10))(0,uVar4);
          if (cVar3 == '\0') {
            bVar7 = false;
          }
          else {
            bVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c +
                            *(int *)(iVar2 + 0xf4) * 4) == 0;
          }
        }
      }
    }
    else {
      bVar7 = false;
    }
  }
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
  return bVar7;
}


undefined1 __cdecl FUN_004d7500(int param_1,undefined4 param_2,void *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  undefined1 uVar6;
  float fVar7;
  uint in_stack_00000020;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bde7c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 0;
  if ((param_1 != 0) && (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar2 != (int *)0x0))
  {
    cVar4 = (**(code **)(*piVar2 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (((cVar4 != '\0') &&
        (((pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c),
          *pfVar1 <= 0.0 && *pfVar1 != 0.0 && (iVar3 = *(int *)(param_1 + 0x194), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x130) != 0)))) &&
       ((*(int *)(*(int *)(*(int *)(iVar3 + 0x130) + 0x254) + 0x158) == 0 &&
        (*(float *)(iVar3 + 0x40) <= 0.5)))) {
      local_1c = (float)*(double *)(param_1 + 0x28);
      local_18 = (float)*(double *)(param_1 + 0x30);
      local_24 = (float)*(double *)(*(int *)(iVar3 + 0x130) + 0x28);
      fVar7 = (float)*(double *)(*(int *)(iVar3 + 0x130) + 0x30);
      local_8 = 2;
      local_14 = 3;
      local_20 = fVar7;
      FUN_00591010((Vec2 *)&local_24,(Vec2 *)&local_1c);
      if (fVar7 <= *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 8) + 0x108)) {
        uVar6 = 1;
        goto LAB_004d761e;
      }
    }
  }
  uVar6 = 0;
LAB_004d761e:
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


undefined1 __cdecl FUN_004d7670(int param_1,undefined4 param_2,void *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  undefined1 uVar6;
  float fVar7;
  uint in_stack_00000020;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bde7c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 0;
  if ((param_1 != 0) && (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar2 != (int *)0x0))
  {
    cVar4 = (**(code **)(*piVar2 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar4 != '\0') {
      pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c);
      if ((((*pfVar1 <= 0.0 && *pfVar1 != 0.0) && (iVar3 = *(int *)(param_1 + 0x194), iVar3 != 0))
          && (*(int *)(iVar3 + 0x130) != 0)) &&
         ((*(float *)(iVar3 + 0x40) <= 0.5 &&
          (*(int *)(*(int *)(*(int *)(iVar3 + 0x130) + 0x254) + 0x158) == 0)))) {
        local_1c = (float)*(double *)(param_1 + 0x28);
        local_18 = (float)*(double *)(param_1 + 0x30);
        local_24 = (float)*(double *)(*(int *)(iVar3 + 0x130) + 0x28);
        fVar7 = (float)*(double *)(*(int *)(iVar3 + 0x130) + 0x30);
        local_8 = 2;
        local_14 = 3;
        local_20 = fVar7;
        FUN_00591010((Vec2 *)&local_24,(Vec2 *)&local_1c);
        if (fVar7 <= *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 8) + 0x108))
        goto LAB_004d778c;
      }
      uVar6 = 1;
      goto LAB_004d778e;
    }
  }
LAB_004d778c:
  uVar6 = 0;
LAB_004d778e:
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


undefined1 __cdecl FUN_004d77e0(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (0.0 <= *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x6c))) {
      uVar4 = 1;
      goto LAB_004d7843;
    }
  }
  uVar4 = 0;
LAB_004d7843:
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


undefined1 __cdecl FUN_004d7890(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x30), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d78de;
    }
  }
  uVar4 = 0;
LAB_004d78de:
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


undefined1 __cdecl FUN_004d7930(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
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
  if (((param_1 == 0) || (*(char *)(param_1 + 0x234) == '\0')) || (*(int *)(param_1 + 0x374) == 0))
  {
LAB_004d799b:
    uVar3 = 0;
  }
  else {
    if ((*(char *)(DAT_0065b444 + 0x71) != '\0') || (*(char *)(DAT_0065b444 + 0x72) != '\0')) {
      puVar1 = FUN_004125d0();
      if ((float)puVar1[2] < 0.7) goto LAB_004d799b;
    }
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


undefined1 __cdecl FUN_004d79f0(int param_1,undefined4 param_2,void *param_3)

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
    cVar2 = FUN_004cd270(param_1,0,pvVar3);
    if ((cVar2 != '\0') &&
       ((iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70), iVar1 == 2 || (iVar1 == 3)))) {
      uVar4 = 1;
      goto LAB_004d7a72;
    }
  }
  uVar4 = 0;
LAB_004d7a72:
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


bool __cdecl FUN_004d7ac0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x174) != 0;
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


undefined1 __cdecl FUN_004d7b20(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x174) == 0)) ||
     (*(int *)(*(int *)(param_1 + 0x174) + 0x60) != 0)) {
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


undefined1 __cdecl FUN_004d7b80(int param_1,undefined4 param_2,void *param_3)

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
  if (((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004d7bd2;
    }
  }
  uVar4 = 0;
LAB_004d7bd2:
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


undefined1 __cdecl FUN_004d7c20(int param_1,undefined4 param_2,void *param_3)

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
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if ((cVar2 != '\0') && (0.0 <= *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2c) + 0x6c))) {
      uVar4 = 1;
      goto LAB_004d7c87;
    }
  }
  uVar4 = 0;
LAB_004d7c87:
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


undefined1 __cdecl FUN_004d7cd0(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint in_stack_00000020;
  uint in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 != '\0') {
      pvVar5 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
      cVar2 = FUN_004d7c20(param_1,0,pvVar5);
      if ((cVar2 == '\0') && (*(int *)(param_1 + 0x1f0) != -1)) {
        if (*(int *)(*(int *)(param_1 + 0x174) + 0x60) == 4) {
          pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
          FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
          cVar2 = FUN_004d8310(param_1,0,pvVar5);
          if (cVar2 == '\0') goto LAB_004d7dd8;
        }
        pvVar5 = *(void **)(*(int *)(param_1 + 0x174) + 0xe8);
        if (pvVar5 != (void *)0x0) {
          bVar3 = FUN_00507140(pvVar5,*(int *)(param_1 + 0x1f0));
          if (bVar3) {
            uVar4 = FUN_005118b0(param_1);
            if ((char)uVar4 != '\0') {
              uVar6 = 1;
              goto LAB_004d7dda;
            }
          }
        }
      }
    }
  }
LAB_004d7dd8:
  uVar6 = 0;
LAB_004d7dda:
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


undefined1 __cdecl FUN_004d7e30(int param_1,undefined4 param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
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
  if (((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x2c), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 != '\0') {
      pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
      FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
      cVar2 = FUN_004d7c20(param_1,0,pvVar4);
      if ((cVar2 == '\0') && (*(int *)(param_1 + 0x1ec) != -1)) {
        if (*(int *)(*(int *)(param_1 + 0x174) + 0x60) == 4) {
          pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
          cVar2 = FUN_004d8310(param_1,0,pvVar4);
          if (cVar2 == '\0') goto LAB_004d7f23;
        }
        bVar3 = FUN_00507140(*(void **)(param_1 + 0x1f8),*(int *)(param_1 + 0x1ec));
        if (bVar3) {
          uVar5 = 1;
          goto LAB_004d7f25;
        }
      }
    }
  }
LAB_004d7f23:
  uVar5 = 0;
LAB_004d7f25:
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


void __cdecl FUN_004d7f70(int param_1,undefined4 param_2,void *param_3)

{
  undefined4 *this;
  char ****ppppcVar1;
  void *pvVar2;
  char ****ppppcVar3;
  uint in_stack_00000020;
  void **ppvVar4;
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
  if ((param_1 != 0) && (*(int *)(param_1 + 0x174) != 0)) {
    FUN_004024e0(local_2c,(undefined4 *)(*(int *)(param_1 + 0x174) + 0x80));
    local_8._0_1_ = 1;
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    ppppcVar1 = local_2c;
    if (0xf < local_18) {
      ppppcVar1 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar1,(char *)((int)ppppcVar3 + local_1c),
                 (undefined1 *)ppppcVar3);
    ppvVar4 = local_44;
    FUN_00591e00((undefined1 *)ppvVar4,"%s_has_downloaded_data");
    local_8._0_1_ = 2;
    local_48 = &stack0xffffff90;
    FUN_004024e0(&stack0xffffff90,local_44);
    local_8._0_1_ = 3;
    this = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a1150(this,ppvVar4);
    if (0xf < local_30) {
      pvVar2 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar2 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar3 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar3);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar2 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
