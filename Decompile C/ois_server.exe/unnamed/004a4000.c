#include "../ois_server.exe.h"


void __fastcall FUN_004a4b50(void *param_1)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  byte *pbVar7;
  int iVar8;
  uint in_stack_ffffffa4;
  void *pvVar9;
  int local_30 [3];
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar9 = (void *)(in_stack_ffffffa4 & 0xffffff00);
  local_18 = param_1;
  FUN_00402690(&stack0xffffffa4,"freighter_names.txt",0x13);
  FUN_004a57b0(&local_24,pvVar9);
  local_8 = 0;
  local_14 = 0;
  iVar4 = local_20 - local_24 >> 0x1f;
  if ((local_20 - local_24) / 0x18 + iVar4 != iVar4) {
    iVar8 = 0;
    iVar4 = local_24;
    do {
      if (*(int *)(iVar8 + 0x10 + iVar4) != 0) {
        piVar1 = *(int **)((int)param_1 + 4);
        if (*(int **)((int)param_1 + 8) == piVar1) {
          FUN_00403840(param_1,piVar1,(undefined4 *)(iVar8 + iVar4));
          iVar4 = local_24;
        }
        else {
          FUN_004024e0(piVar1,(undefined4 *)(iVar8 + iVar4));
          *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x18;
          iVar4 = local_24;
        }
      }
      local_14 = local_14 + 1;
      iVar8 = iVar8 + 0x18;
    } while (local_14 < (uint)((local_20 - iVar4) / 0x18));
  }
  pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,"pirate_names.txt",0x10);
  piVar1 = (int *)FUN_004a57b0(local_30,pvVar9);
  if (&local_24 != piVar1) {
    FUN_004025a0(&local_24);
    local_24 = *piVar1;
    local_20 = piVar1[1];
    local_1c = piVar1[2];
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  FUN_004025a0(local_30);
  local_14 = 0;
  iVar4 = local_20 - local_24 >> 0x1f;
  if ((local_20 - local_24) / 0x18 + iVar4 != iVar4) {
    iVar8 = 0;
    iVar4 = local_24;
    do {
      if (*(int *)(iVar8 + 0x10 + iVar4) != 0) {
        piVar1 = *(int **)((int)param_1 + 0x1c);
        if (*(int **)((int)param_1 + 0x20) == piVar1) {
          FUN_00403840((void *)((int)param_1 + 0x18),piVar1,(undefined4 *)(iVar8 + iVar4));
          iVar4 = local_24;
        }
        else {
          FUN_004024e0(piVar1,(undefined4 *)(iVar8 + iVar4));
          *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) + 0x18;
          iVar4 = local_24;
        }
      }
      local_14 = local_14 + 1;
      iVar8 = iVar8 + 0x18;
    } while (local_14 < (uint)((local_20 - iVar4) / 0x18));
  }
  pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,"police_names.txt",0x10);
  piVar1 = (int *)FUN_004a57b0(local_30,pvVar9);
  if (&local_24 != piVar1) {
    FUN_004025a0(&local_24);
    local_24 = *piVar1;
    local_20 = piVar1[1];
    local_1c = piVar1[2];
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  FUN_004025a0(local_30);
  local_14 = 0;
  iVar4 = local_20 - local_24 >> 0x1f;
  pvVar5 = param_1;
  if ((local_20 - local_24) / 0x18 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)((int)param_1 + 0x34);
      if (*(int **)((int)param_1 + 0x38) == piVar1) {
        FUN_00403840((void *)((int)param_1 + 0x30),piVar1,(undefined4 *)(iVar4 + local_24));
      }
      else {
        FUN_004024e0(piVar1,(undefined4 *)(iVar4 + local_24));
        *(int *)((int)param_1 + 0x34) = *(int *)((int)param_1 + 0x34) + 0x18;
      }
      iVar4 = iVar4 + 0x18;
      local_14 = local_14 + 1;
      pvVar5 = local_18;
    } while (local_14 < (uint)((local_20 - local_24) / 0x18));
  }
  pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,"military_names.txt",0x12);
  piVar1 = (int *)FUN_004a57b0(local_30,pvVar9);
  if (&local_24 != piVar1) {
    FUN_004025a0(&local_24);
    local_24 = *piVar1;
    local_20 = piVar1[1];
    local_1c = piVar1[2];
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  FUN_004025a0(local_30);
  local_14 = 0;
  iVar4 = local_20 - local_24 >> 0x1f;
  pvVar6 = pvVar5;
  if ((local_20 - local_24) / 0x18 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)((int)pvVar5 + 0x4c);
      if (*(int **)((int)pvVar5 + 0x50) == piVar1) {
        FUN_00403840((void *)((int)pvVar5 + 0x48),piVar1,(undefined4 *)(local_24 + iVar4));
      }
      else {
        FUN_004024e0(piVar1,(undefined4 *)(local_24 + iVar4));
        *(int *)((int)pvVar5 + 0x4c) = *(int *)((int)pvVar5 + 0x4c) + 0x18;
      }
      iVar4 = iVar4 + 0x18;
      local_14 = local_14 + 1;
      pvVar6 = local_18;
    } while (local_14 < (uint)((local_20 - local_24) / 0x18));
  }
  pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,"buyable_names.txt",0x11);
  piVar1 = (int *)FUN_004a57b0(local_30,pvVar9);
  if (&local_24 != piVar1) {
    FUN_004025a0(&local_24);
    local_24 = *piVar1;
    local_20 = piVar1[1];
    local_1c = piVar1[2];
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  FUN_004025a0(local_30);
  local_14 = 0;
  iVar4 = local_20 - local_24 >> 0x1f;
  if ((local_20 - local_24) / 0x18 + iVar4 != iVar4) {
    local_18 = (void *)0x0;
    iVar4 = local_24;
    do {
      pbVar7 = (byte *)((int)local_18 + iVar4);
      pbVar3 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar3 = *(byte **)pbVar7;
      }
      uVar2 = FUN_004031f0(pbVar3,*(uint *)(pbVar7 + 0x10),(byte *)&PTR_005ce008,0);
      if ((char)uVar2 == '\0') {
        piVar1 = *(int **)((int)pvVar6 + 0x7c);
        if (*(int **)((int)pvVar6 + 0x80) == piVar1) {
          FUN_00403840((void *)((int)pvVar6 + 0x78),piVar1,(undefined4 *)pbVar7);
          iVar4 = local_24;
        }
        else {
          FUN_004024e0(piVar1,(undefined4 *)pbVar7);
          *(int *)((int)pvVar6 + 0x7c) = *(int *)((int)pvVar6 + 0x7c) + 0x18;
          iVar4 = local_24;
        }
      }
      local_14 = local_14 + 1;
      local_18 = (void *)((int)local_18 + 0x18);
    } while (local_14 < (uint)((local_20 - iVar4) / 0x18));
  }
  FUN_004025a0(&local_24);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004a4fc0(void *this,byte *****param_1)

{
  int iVar1;
  int iVar2;
  int *this_00;
  bool bVar3;
  byte ******ppppppbVar4;
  int iVar5;
  byte *******pppppppbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int local_54;
  byte ******local_40;
  byte ****ppppbStack_3c;
  byte ****ppppbStack_38;
  byte ****ppppbStack_34;
  byte ****local_30;
  byte ****ppppbStack_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005bb6c9;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_1[4] = (byte ****)0x0;
  param_1[5] = (byte ****)&DAT_0000000f;
  bVar3 = false;
  *(undefined1 *)param_1 = 0;
  local_14 = 0;
  do {
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    iVar5 = rand();
    uVar9 = iVar5 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar9 < 0) || ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x18) <= uVar9)) {
      local_30 = (byte ****)0x0;
      ppppbStack_2c = (byte ****)&DAT_0000000f;
      local_40 = (byte ******)((uint)local_40 & 0xffffff00);
      FUN_00402690(&local_40,"ERROR",5);
    }
    else {
      FUN_004024e0(&local_40,(undefined4 *)(*(int *)this + uVar9 * 0x18));
    }
    if ((byte *******)param_1 == &local_40) {
      if (&DAT_0000000f < ppppbStack_2c) {
        pppppppbVar6 = (byte *******)local_40;
        if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
           (pppppppbVar6 = (byte *******)local_40[-1],
           (byte *)0x1f < (byte *)((int)local_40 + (-4 - (int)pppppppbVar6)))) goto LAB_004a5208;
        FUN_005adb3f(pppppppbVar6);
      }
    }
    else {
      FUN_00401b20((int *)param_1);
      *param_1 = (byte ****)local_40;
      param_1[1] = ppppbStack_3c;
      param_1[2] = ppppbStack_38;
      param_1[3] = ppppbStack_34;
      param_1[4] = local_30;
      param_1[5] = ppppbStack_2c;
    }
    FUN_004024e0(&local_40,param_1);
    ppppppbVar4 = local_40;
    uVar11 = 0;
    uVar9 = (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) / 0x18;
    if (uVar9 != 0) {
      local_54 = 0;
      do {
        pbVar10 = (byte *)(*(int *)((int)this + 0xc) + local_54);
        pppppppbVar6 = &local_40;
        if (&DAT_0000000f < ppppbStack_2c) {
          pppppppbVar6 = (byte *******)ppppppbVar4;
        }
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar8 = *(byte **)pbVar10;
        }
        uVar7 = FUN_004031f0(pbVar8,*(uint *)(pbVar10 + 0x10),(byte *)pppppppbVar6,(uint)local_30);
        if ((char)uVar7 != '\0') {
          if (ppppbStack_2c <= &DAT_0000000f) goto LAB_004a51f6;
          pppppppbVar6 = (byte *******)ppppppbVar4;
          if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
             (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
             (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6))))
          goto LAB_004a5208;
          FUN_005adb3f(pppppppbVar6);
          goto LAB_004a51f6;
        }
        uVar11 = uVar11 + 1;
        local_54 = local_54 + 0x18;
      } while (uVar11 < uVar9);
    }
    if (&DAT_0000000f < ppppbStack_2c) {
      pppppppbVar6 = (byte *******)ppppppbVar4;
      if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
         (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
         (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6)))) {
LAB_004a5208:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppbVar6);
    }
    bVar3 = true;
LAB_004a51f6:
    if (bVar3) {
      this_00 = *(int **)((int)this + 0x10);
      if (*(int **)((int)this + 0x14) == this_00) {
        FUN_00403840((void *)((int)this + 0xc),this_00,param_1);
      }
      else {
        FUN_004024e0(this_00,param_1);
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 0x18;
      }
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


void __thiscall FUN_004a5260(void *this,byte *****param_1)

{
  int iVar1;
  int iVar2;
  int *this_00;
  bool bVar3;
  byte ******ppppppbVar4;
  int iVar5;
  byte *******pppppppbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *****pppppbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int local_40;
  int local_3c;
  byte ******local_2c;
  byte ****ppppbStack_28;
  byte ****ppppbStack_24;
  byte ****ppppbStack_20;
  byte ****local_1c;
  byte ****ppppbStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb709;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[4] = (byte ****)0x0;
  param_1[5] = (byte ****)&DAT_0000000f;
  bVar3 = false;
  local_40 = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  do {
    if (99 < local_40) break;
    iVar1 = *(int *)((int)this + 0x1c);
    iVar2 = *(int *)((int)this + 0x18);
    iVar5 = rand();
    uVar10 = iVar5 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar10 < 0) ||
       ((uint)((*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x18) <= uVar10)) {
      local_1c = (byte ****)0x0;
      ppppbStack_18 = (byte ****)&DAT_0000000f;
      local_2c = (byte ******)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"ERROR",5);
    }
    else {
      FUN_004024e0(&local_2c,(undefined4 *)(*(int *)((int)this + 0x18) + uVar10 * 0x18));
    }
    if ((byte *******)param_1 == &local_2c) {
      if (&DAT_0000000f < ppppbStack_18) {
        pppppppbVar6 = (byte *******)local_2c;
        if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_18 + 1)) &&
           (pppppppbVar6 = (byte *******)local_2c[-1],
           (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppppbVar6)))) goto LAB_004a549d;
        FUN_005adb3f(pppppppbVar6);
      }
    }
    else {
      FUN_00401b20((int *)param_1);
      *param_1 = (byte ****)local_2c;
      param_1[1] = ppppbStack_28;
      param_1[2] = ppppbStack_24;
      param_1[3] = ppppbStack_20;
      param_1[4] = local_1c;
      param_1[5] = ppppbStack_18;
    }
    FUN_004024e0(&local_2c,param_1);
    ppppppbVar4 = local_2c;
    uVar12 = 0;
    uVar10 = (*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) / 0x18;
    if (uVar10 != 0) {
      local_3c = 0;
      do {
        pbVar11 = (byte *)(*(int *)((int)this + 0x24) + local_3c);
        pppppppbVar6 = &local_2c;
        if (&DAT_0000000f < ppppbStack_18) {
          pppppppbVar6 = (byte *******)ppppppbVar4;
        }
        pbVar8 = pbVar11;
        if (0xf < *(uint *)(pbVar11 + 0x14)) {
          pbVar8 = *(byte **)pbVar11;
        }
        uVar7 = FUN_004031f0(pbVar8,*(uint *)(pbVar11 + 0x10),(byte *)pppppppbVar6,(uint)local_1c);
        if ((char)uVar7 != '\0') {
          if (ppppbStack_18 < (byte ****)0x10) goto LAB_004a5451;
          pppppppbVar6 = (byte *******)ppppppbVar4;
          if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_18 + 1)) &&
             (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
             (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6))))
          goto LAB_004a549d;
          FUN_005adb3f(pppppppbVar6);
          goto LAB_004a5451;
        }
        uVar12 = uVar12 + 1;
        local_3c = local_3c + 0x18;
      } while (uVar12 < uVar10);
    }
    if (&DAT_0000000f < ppppbStack_18) {
      pppppppbVar6 = (byte *******)ppppppbVar4;
      if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_18 + 1)) &&
         (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
         (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6)))) {
LAB_004a549d:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppbVar6);
    }
    bVar3 = true;
LAB_004a5451:
    local_40 = local_40 + 1;
  } while (!bVar3);
  pppppbVar9 = param_1;
  if (&DAT_0000000f < param_1[5]) {
    pppppbVar9 = (byte *****)*param_1;
  }
  uVar10 = FUN_004031f0((byte *)pppppbVar9,(uint)param_1[4],(byte *)&PTR_005ce008,0);
  if ((char)uVar10 == '\0') {
    this_00 = *(int **)((int)this + 0x28);
    if (*(int **)((int)this + 0x2c) == this_00) {
      FUN_00403840((void *)((int)this + 0x24),this_00,param_1);
    }
    else {
      FUN_004024e0(this_00,param_1);
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 0x18;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004a5510(void *this,byte *****param_1)

{
  int iVar1;
  int iVar2;
  int *this_00;
  bool bVar3;
  byte ******ppppppbVar4;
  int iVar5;
  byte *******pppppppbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int local_54;
  byte ******local_40;
  byte ****ppppbStack_3c;
  byte ****ppppbStack_38;
  byte ****ppppbStack_34;
  byte ****local_30;
  byte ****ppppbStack_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005bb6c9;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_1[4] = (byte ****)0x0;
  param_1[5] = (byte ****)&DAT_0000000f;
  bVar3 = false;
  *(undefined1 *)param_1 = 0;
  local_14 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x34);
    iVar2 = *(int *)((int)this + 0x30);
    iVar5 = rand();
    uVar9 = iVar5 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar9 < 0) ||
       ((uint)((*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30)) / 0x18) <= uVar9)) {
      local_30 = (byte ****)0x0;
      ppppbStack_2c = (byte ****)&DAT_0000000f;
      local_40 = (byte ******)((uint)local_40 & 0xffffff00);
      FUN_00402690(&local_40,"ERROR",5);
    }
    else {
      FUN_004024e0(&local_40,(undefined4 *)(*(int *)((int)this + 0x30) + uVar9 * 0x18));
    }
    if ((byte *******)param_1 == &local_40) {
      if (&DAT_0000000f < ppppbStack_2c) {
        pppppppbVar6 = (byte *******)local_40;
        if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
           (pppppppbVar6 = (byte *******)local_40[-1],
           (byte *)0x1f < (byte *)((int)local_40 + (-4 - (int)pppppppbVar6)))) goto LAB_004a575b;
        FUN_005adb3f(pppppppbVar6);
      }
    }
    else {
      FUN_00401b20((int *)param_1);
      *param_1 = (byte ****)local_40;
      param_1[1] = ppppbStack_3c;
      param_1[2] = ppppbStack_38;
      param_1[3] = ppppbStack_34;
      param_1[4] = local_30;
      param_1[5] = ppppbStack_2c;
    }
    FUN_004024e0(&local_40,param_1);
    ppppppbVar4 = local_40;
    uVar11 = 0;
    uVar9 = (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) / 0x18;
    if (uVar9 != 0) {
      local_54 = 0;
      do {
        pbVar10 = (byte *)(*(int *)((int)this + 0xc) + local_54);
        pppppppbVar6 = &local_40;
        if (&DAT_0000000f < ppppbStack_2c) {
          pppppppbVar6 = (byte *******)ppppppbVar4;
        }
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar8 = *(byte **)pbVar10;
        }
        uVar7 = FUN_004031f0(pbVar8,*(uint *)(pbVar10 + 0x10),(byte *)pppppppbVar6,(uint)local_30);
        if ((char)uVar7 != '\0') {
          if (ppppbStack_2c <= &DAT_0000000f) goto LAB_004a5749;
          pppppppbVar6 = (byte *******)ppppppbVar4;
          if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
             (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
             (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6))))
          goto LAB_004a575b;
          FUN_005adb3f(pppppppbVar6);
          goto LAB_004a5749;
        }
        uVar11 = uVar11 + 1;
        local_54 = local_54 + 0x18;
      } while (uVar11 < uVar9);
    }
    if (&DAT_0000000f < ppppbStack_2c) {
      pppppppbVar6 = (byte *******)ppppppbVar4;
      if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
         (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
         (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6)))) {
LAB_004a575b:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppbVar6);
    }
    bVar3 = true;
LAB_004a5749:
    if (bVar3) {
      this_00 = *(int **)((int)this + 0x40);
      if (*(int **)((int)this + 0x44) == this_00) {
        FUN_00403840((void *)((int)this + 0x3c),this_00,param_1);
      }
      else {
        FUN_004024e0(this_00,param_1);
        *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 0x18;
      }
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


// WARNING: Removing unreachable block (ram,0x004a59c3)
// WARNING: Removing unreachable block (ram,0x004a59e7)
// WARNING: Removing unreachable block (ram,0x004a59f0)
// WARNING: Removing unreachable block (ram,0x004a59fb)
// WARNING: Removing unreachable block (ram,0x004a5a3c)
// WARNING: Removing unreachable block (ram,0x004a5a5d)
// WARNING: Removing unreachable block (ram,0x004a5a5f)
// WARNING: Removing unreachable block (ram,0x004a5a77)
// WARNING: Removing unreachable block (ram,0x004a5a85)
// WARNING: Removing unreachable block (ram,0x004a5a99)
// WARNING: Removing unreachable block (ram,0x004a59ff)
// WARNING: Removing unreachable block (ram,0x004a5a16)
// WARNING: Removing unreachable block (ram,0x004a5a07)
// WARNING: Removing unreachable block (ram,0x004a5a25)
// WARNING: Removing unreachable block (ram,0x004a5a33)
// WARNING: Removing unreachable block (ram,0x004a5a37)
// WARNING: Removing unreachable block (ram,0x004a5aa3)
// WARNING: Removing unreachable block (ram,0x004a5ab7)
// WARNING: Removing unreachable block (ram,0x004a5abd)
// WARNING: Removing unreachable block (ram,0x004a5ad1)
// WARNING: Removing unreachable block (ram,0x004a5ac5)
// WARNING: Removing unreachable block (ram,0x004a5ae0)
// WARNING: Removing unreachable block (ram,0x004a5b0e)
// WARNING: Removing unreachable block (ram,0x004a5b1c)
// WARNING: Removing unreachable block (ram,0x004a5b2c)
// WARNING: Removing unreachable block (ram,0x004a5b32)
// WARNING: Removing unreachable block (ram,0x004a5b3c)
// WARNING: Removing unreachable block (ram,0x004a5b62)
// WARNING: Removing unreachable block (ram,0x004a5b74)
// WARNING: Removing unreachable block (ram,0x004a5b88)
// WARNING: Removing unreachable block (ram,0x004a5aac)

void FUN_004a57b0(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  FileUtils *pFVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  void *pvVar6;
  uint in_stack_0000001c;
  undefined4 *in_stack_ffffff48;
  int local_84 [9];
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  char ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb760;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff48,&param_2);
  FUN_0058ed50(local_48,in_stack_ffffff48);
  local_8._0_1_ = 1;
  local_50 = 0;
  ppppcVar5 = local_48;
  if (0xf < local_34) {
    ppppcVar5 = (char ****)local_48[0];
  }
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  ppppcVar4 = ppppcVar5;
  do {
    cVar1 = *(char *)ppppcVar4;
    ppppcVar4 = (char ****)((int)ppppcVar4 + 1);
  } while (cVar1 != '\0');
  FUN_00402690(local_60,ppppcVar5,(int)ppppcVar4 - (int)((int)ppppcVar5 + 1));
  local_8._0_1_ = 2;
  pFVar3 = cocos2d::FileUtils::getInstance();
  (**(code **)(*(int *)pFVar3 + 0x1c))();
  local_8._0_1_ = 1;
  if (0xf < local_4c) {
    pvVar6 = local_60[0];
    if ((0xfff < local_4c + 1) &&
       (pvVar6 = *(void **)((int)local_60[0] + -4),
       0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar6)))) {
      local_8._0_1_ = 1;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_8._0_1_ = 3;
  bVar2 = cc_assert_script_compatible("Error loading files.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s");
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  FUN_004025a0(local_84);
  if (0xf < local_34) {
    ppppcVar5 = (char ****)local_48[0];
    if ((0xfff < local_34 + 1) &&
       (ppppcVar5 = (char ****)local_48[0][-1],
       (char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppcVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar5);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (char ***)((uint)local_48[0] & 0xffffff00);
  if (0xf < in_stack_0000001c) {
    pvVar6 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar6 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004a5bc0(void *this,byte *****param_1)

{
  int iVar1;
  int iVar2;
  int *this_00;
  bool bVar3;
  byte ******ppppppbVar4;
  int iVar5;
  byte *******pppppppbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int local_54;
  byte ******local_40;
  byte ****ppppbStack_3c;
  byte ****ppppbStack_38;
  byte ****ppppbStack_34;
  byte ****local_30;
  byte ****ppppbStack_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005bb7a9;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_1[4] = (byte ****)0x0;
  param_1[5] = (byte ****)&DAT_0000000f;
  bVar3 = false;
  *(undefined1 *)param_1 = 0;
  local_14 = 0;
  iVar8 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x7c);
    iVar2 = *(int *)((int)this + 0x78);
    iVar5 = rand();
    uVar10 = iVar5 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar10 < 0) ||
       ((uint)((*(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78)) / 0x18) <= uVar10)) {
      local_30 = (byte ****)0x0;
      ppppbStack_2c = (byte ****)&DAT_0000000f;
      local_40 = (byte ******)((uint)local_40 & 0xffffff00);
      FUN_00402690(&local_40,"ERROR",5);
    }
    else {
      FUN_004024e0(&local_40,(undefined4 *)(*(int *)((int)this + 0x78) + uVar10 * 0x18));
    }
    if ((byte *******)param_1 == &local_40) {
      if (&DAT_0000000f < ppppbStack_2c) {
        pppppppbVar6 = (byte *******)local_40;
        if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
           (pppppppbVar6 = (byte *******)local_40[-1],
           (byte *)0x1f < (byte *)((int)local_40 + (-4 - (int)pppppppbVar6)))) goto LAB_004a5e31;
        FUN_005adb3f(pppppppbVar6);
      }
    }
    else {
      FUN_00401b20((int *)param_1);
      *param_1 = (byte ****)local_40;
      param_1[1] = ppppbStack_3c;
      param_1[2] = ppppbStack_38;
      param_1[3] = ppppbStack_34;
      param_1[4] = local_30;
      param_1[5] = ppppbStack_2c;
    }
    if (iVar8 < 100) {
      FUN_004024e0(&local_40,param_1);
      ppppppbVar4 = local_40;
      uVar12 = 0;
      uVar10 = (*(int *)((int)this + 0x88) - *(int *)((int)this + 0x84)) / 0x18;
      if (uVar10 != 0) {
        local_54 = 0;
        do {
          pbVar11 = (byte *)(*(int *)((int)this + 0x84) + local_54);
          pppppppbVar6 = &local_40;
          if (&DAT_0000000f < ppppbStack_2c) {
            pppppppbVar6 = (byte *******)ppppppbVar4;
          }
          pbVar9 = pbVar11;
          if (0xf < *(uint *)(pbVar11 + 0x14)) {
            pbVar9 = *(byte **)pbVar11;
          }
          uVar7 = FUN_004031f0(pbVar9,*(uint *)(pbVar11 + 0x10),(byte *)pppppppbVar6,(uint)local_30)
          ;
          if ((char)uVar7 != '\0') {
            if (ppppbStack_2c <= &DAT_0000000f) goto LAB_004a5e1f;
            pppppppbVar6 = (byte *******)ppppppbVar4;
            if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
               (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
               (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6))))
            goto LAB_004a5e31;
            FUN_005adb3f(pppppppbVar6);
            goto LAB_004a5e1f;
          }
          uVar12 = uVar12 + 1;
          local_54 = local_54 + 0x18;
        } while (uVar12 < uVar10);
      }
      if (&DAT_0000000f < ppppbStack_2c) {
        pppppppbVar6 = (byte *******)ppppppbVar4;
        if (((undefined1 *)0xfff < (undefined1 *)((int)ppppbStack_2c + 1)) &&
           (pppppppbVar6 = (byte *******)ppppppbVar4[-1],
           (byte *)0x1f < (byte *)((int)ppppppbVar4 + (-4 - (int)pppppppbVar6)))) {
LAB_004a5e31:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppppbVar6);
      }
    }
    bVar3 = true;
LAB_004a5e1f:
    iVar8 = iVar8 + 1;
    if (bVar3) {
      this_00 = *(int **)((int)this + 0x88);
      if (*(int **)((int)this + 0x8c) == this_00) {
        FUN_00403840((void *)((int)this + 0x84),this_00,param_1);
      }
      else {
        FUN_004024e0(this_00,param_1);
        *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 0x18;
      }
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


void __thiscall FUN_004a5e90(void *this,void *param_1)

{
  int *this_00;
  char cVar1;
  void *pvVar2;
  uint in_stack_00000018;
  byte *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_1);
  cVar1 = FUN_004a6400(this,in_stack_ffffffcc);
  if (cVar1 == '\0') {
    this_00 = *(int **)((int)this + 0x94);
    if (*(int **)((int)this + 0x98) == this_00) {
      FUN_00403840((void *)((int)this + 0x90),this_00,&param_1);
    }
    else {
      FUN_004024e0(this_00,&param_1);
      *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + 0x18;
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004a5f50(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  byte *in_stack_ffffff8c;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005bb7e9;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_14 = 0;
  do {
    rand();
    rand();
    piVar5 = (int *)FUN_00591e00((undefined1 *)local_3c,"%s-%d");
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      iVar1 = piVar5[5];
      param_1[4] = piVar5[4];
      param_1[5] = iVar1;
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar6 = local_3c[0];
      if (0xfff < local_28 + 1) {
        pvVar6 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_004024e0(&stack0xffffff8c,param_1);
    cVar4 = FUN_004a6400(this,in_stack_ffffff8c);
  } while (cVar4 != '\0');
  FUN_004024e0(&stack0xffffff8c,param_1);
  FUN_004a5e90(this,in_stack_ffffff8c);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_004a60b0(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 **ppuVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte ****ppppbVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  byte ****ppppbVar10;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  char *pcVar11;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb820;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  uVar5 = 2;
  if (in_stack_00000018 < 2) {
    uVar5 = in_stack_00000018;
  }
  ppuVar2 = &param_2;
  if (0xf < in_stack_0000001c) {
    ppuVar2 = (undefined4 **)param_2;
  }
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,ppuVar2,uVar5);
  ppppbVar10 = (byte ****)local_2c[0];
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar9 = 0;
LAB_004a6124:
  pcVar8 = (&PTR_DAT_005ddac8)[iVar9];
  pcVar11 = pcVar8 + 1;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ppppbVar6 = local_2c;
  if (0xf < local_18) {
    ppppbVar6 = ppppbVar10;
  }
  uVar3 = FUN_004031f0((byte *)ppppbVar6,local_1c,(&PTR_DAT_005ddac8)[iVar9],
                       (int)pcVar8 - (int)pcVar11);
  uVar5 = local_18;
  if ((char)uVar3 == '\0') goto code_r0x004a615e;
  pcVar11 = (&PTR_s_Ulence_Federation_005ddab0)[iVar9];
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar8 = pcVar11;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(param_1,pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
  if (local_18 < 0x10) goto LAB_004a61d5;
  if (0xfff < local_18 + 1) {
    ppppbVar6 = (byte ****)ppppbVar10[-1];
    goto joined_r0x004a61c3;
  }
  goto LAB_004a61cc;
code_r0x004a615e:
  iVar9 = iVar9 + 1;
  if (5 < iVar9) {
    ppppbVar6 = local_2c;
    if (0xf < local_18) {
      ppppbVar6 = ppppbVar10;
    }
    uVar3 = FUN_004031f0((byte *)ppppbVar6,local_1c,&DAT_0060da7c,2);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    if ((char)uVar3 == '\0') {
      uVar3 = 7;
      pcVar11 = "Unknown";
    }
    else {
      uVar3 = 0x17;
      pcVar11 = "Cassandra Utility Fleet";
    }
    FUN_00402690(param_1,pcVar11,uVar3);
    if (0xf < uVar5) {
      if (0xfff < uVar5 + 1) {
        ppppbVar6 = (byte ****)ppppbVar10[-1];
joined_r0x004a61c3:
        pbVar4 = (byte *)((int)ppppbVar10 + (-4 - (int)ppppbVar6));
        ppppbVar10 = ppppbVar6;
        if ((byte *)0x1f < pbVar4) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_004a61cc:
      FUN_005adb3f(ppppbVar10);
    }
LAB_004a61d5:
    if (0xf < in_stack_0000001c) {
      puVar7 = param_2;
      if ((0xfff < in_stack_0000001c + 1) &&
         (puVar7 = (undefined4 *)param_2[-1], 0x1f < (uint)((int)param_2 + (-4 - (int)puVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar7);
    }
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  goto LAB_004a6124;
}


void __thiscall FUN_004a62a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  byte *in_stack_ffffff8c;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005bb7e9;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_14 = 0;
  do {
    rand();
    rand();
    piVar5 = (int *)FUN_00591e00((undefined1 *)local_3c,"%s-%d");
    if (param_1 != piVar5) {
      FUN_00401b20(param_1);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      iVar1 = piVar5[5];
      param_1[4] = piVar5[4];
      param_1[5] = iVar1;
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar6 = local_3c[0];
      if (0xfff < local_28 + 1) {
        pvVar6 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_004024e0(&stack0xffffff8c,param_1);
    cVar4 = FUN_004a6400(this,in_stack_ffffff8c);
  } while (cVar4 != '\0');
  FUN_004024e0(&stack0xffffff8c,param_1);
  FUN_004a5e90(this,in_stack_ffffff8c);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined1 __thiscall FUN_004a6400(void *this,byte *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined1 local_5;
  
  pbVar3 = param_1;
  iVar1 = *(int *)((int)this + 0x90);
  uVar2 = (*(int *)((int)this + 0x94) - iVar1) / 0x18;
  uVar8 = 0;
  if (uVar2 != 0) {
    iVar9 = 0;
    do {
      pbVar7 = (byte *)(iVar1 + iVar9);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar6 = *(byte **)pbVar7;
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar7 + 0x10),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        local_5 = 1;
        goto LAB_004a6470;
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar8 < uVar2);
  }
  local_5 = 0;
LAB_004a6470:
  if (0xf < in_stack_00000018) {
    pbVar7 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar7 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar7);
  }
  return local_5;
}


undefined4 * __fastcall FUN_004a64c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint in_stack_ffffffb8;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bb9f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0xf;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0x43;
  param_1[0x36] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xf;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xf;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0xf;
  *(undefined1 *)(param_1 + 0x43) = 0;
  local_8 = 0x12;
  uStack_7 = 0;
  pvVar4 = (void *)(in_stack_ffffffb8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,"CERESPILOT",10);
  local_8 = 0x13;
  puVar1 = DAT_0065c2f0;
  if (DAT_0065c2f0 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0xc);
    DAT_0065c2f0 = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  local_8 = 0x12;
  piVar2 = FUN_00481b90(puVar1,pvVar4);
  param_1[0x49] = piVar2;
  param_1[0x4a] = 0;
  puVar1 = (undefined4 *)FUN_005adb0f(0x2c);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  local_8 = 0x15;
  puVar1[3] = 0;
  puVar1[4] = 0;
  uVar3 = FUN_004136c0();
  puVar1[3] = uVar3;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  param_1[0x4b] = puVar1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0xffffffff;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0xf;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[99] = 0;
  param_1[100] = 0xf;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0xf;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0xf;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0xf;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xf;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0xf;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0xf;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0xf;
  *(undefined1 *)(param_1 + 0x97) = 0;
  _local_8 = CONCAT31(uStack_7,0x1d);
  param_1[0x9d] = 0;
  if ((undefined4 **)(param_1 + 0x2d) != &DAT_00655798) {
    puVar1 = &DAT_00655798;
    if (0xf < DAT_006557ac) {
      puVar1 = DAT_00655798;
    }
    FUN_00402690(param_1 + 0x2d,puVar1,DAT_006557a8);
  }
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_004a69d0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x74);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x7c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004a6b31;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x70)) {
    pvVar1 = *(void **)(param_1 + 0x5c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x70) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004a6b31;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xf;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (0xf < *(uint *)(param_1 + 0x50)) {
    pvVar1 = *(void **)(param_1 + 0x3c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x50) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004a6b31;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xf;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (0xf < *(uint *)(param_1 + 0x38)) {
    pvVar1 = *(void **)(param_1 + 0x24);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x38) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004a6b31;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xf;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (0xf < *(uint *)(param_1 + 0x20)) {
    pvVar1 = *(void **)(param_1 + 0xc);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x20) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004a6b31:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


void __fastcall FUN_004a6b40(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_00412930(param_1 + 0x12);
  FUN_00412930(param_1 + 0xf);
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004a6bd7;
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004a6bd7:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


undefined4 FUN_004a6be0(int param_1,int param_2,char param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float in_XMM2_Da;
  float fVar6;
  float local_20;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bba22;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar2 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar2 = puVar2 + 1) {
    piVar4 = (int *)*puVar2;
    if (*piVar4 == param_1) goto LAB_004a6c35;
  }
  piVar4 = (int *)0x0;
LAB_004a6c35:
  uVar5 = 0;
  iVar3 = piVar4[0x33];
  local_18 = in_XMM2_Da;
  if (piVar4[0x34] - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar5 * 4);
      if ((iVar3 != param_2) &&
         (((param_3 == '\0' || (*(char *)(*(int *)(iVar3 + 0x40) + 0x34) == '\0')) ||
          (*(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 4)))) {
        local_20 = (float)*(double *)(iVar3 + 0x28);
        local_1c = (float)*(double *)(iVar3 + 0x30);
        local_8 = 1;
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&stack0x00000010);
        fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        if ((1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6 <= local_18) {
          ExceptionList = local_10;
          return *(undefined4 *)(piVar4[0x33] + uVar5 * 4);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = piVar4[0x33];
    } while (uVar5 < (uint)(piVar4[0x34] - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return 0;
}


int FUN_004a6d60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  piVar6 = *(int **)(DAT_0065b5cc + 0x3c);
  uVar7 = 0;
  uVar3 = *(int *)(DAT_0065b5cc + 0x40) - (int)piVar6 >> 2;
  if (uVar3 != 0) {
    do {
      uVar4 = 0;
      iVar1 = *(int *)(*piVar6 + 0xcc);
      uVar5 = *(int *)(*piVar6 + 0xd0) - iVar1 >> 2;
      if (uVar5 != 0) {
        do {
          iVar2 = *(int *)(iVar1 + uVar4 * 4);
          if (*(int *)(iVar2 + 0x250) == param_1) {
            return iVar2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 < uVar3);
  }
  return 0;
}


undefined4 FUN_004a6de0(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte **ppbVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0065b5cc;
  puStack_c = &LAB_005b19f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  ppbVar7 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar7 = (byte **)param_1;
  }
  iVar8 = 0;
  iVar11 = (int)((int)ppbVar3 + in_stack_00000014) - (int)ppbVar7;
  if ((byte **)((int)ppbVar3 + in_stack_00000014) < ppbVar7) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    do {
      iVar2 = toupper((int)*(char *)(iVar8 + (int)ppbVar7));
      *(char *)(iVar8 + (int)ppbVar3) = (char)iVar2;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar11);
  }
  iVar8 = *(int *)(iVar1 + 0x3c);
  local_14 = 0;
  uVar6 = *(int *)(iVar1 + 0x40) - iVar8 >> 2;
  if (uVar6 != 0) {
    do {
      iVar1 = *(int *)(iVar8 + local_14 * 4);
      uVar9 = 0;
      iVar11 = *(int *)(iVar1 + 0xcc);
      uVar12 = *(int *)(iVar1 + 0xd0) - iVar11 >> 2;
      if (uVar12 != 0) {
        do {
          iVar1 = *(int *)(iVar11 + uVar9 * 4);
          iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158);
          if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) {
            ppbVar3 = &param_1;
            if (0xf < in_stack_00000018) {
              ppbVar3 = (byte **)param_1;
            }
            pbVar5 = (byte *)(iVar1 + 0x238);
            if (0xf < *(uint *)(iVar1 + 0x24c)) {
              pbVar5 = *(byte **)(iVar1 + 0x238);
            }
            uVar4 = FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x248),(byte *)ppbVar3,in_stack_00000014);
            if ((char)uVar4 != '\0') {
              uVar10 = *(undefined4 *)(iVar11 + uVar9 * 4);
              goto LAB_004a6f2b;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar12);
      }
      local_14 = local_14 + 1;
    } while (local_14 < uVar6);
  }
  uVar10 = 0;
LAB_004a6f2b:
  if (0xf < in_stack_00000018) {
    pbVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar5 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  ExceptionList = local_10;
  return uVar10;
}


int FUN_004a6f80(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte **ppbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte **ppbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar10 = DAT_0065b5cc;
  puStack_c = &LAB_005b0068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  ppbVar7 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar7 = (byte **)param_1;
  }
  iVar11 = (int)((int)ppbVar3 + in_stack_00000014) - (int)ppbVar7;
  iVar8 = 0;
  if ((byte **)((int)ppbVar3 + in_stack_00000014) < ppbVar7) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    do {
      iVar2 = toupper((int)*(char *)(iVar8 + (int)ppbVar7));
      *(char *)(iVar8 + (int)ppbVar3) = (char)iVar2;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar11);
  }
  pbVar1 = param_1;
  local_14 = 0;
  iVar8 = *(int *)(iVar10 + 0x3c);
  uVar5 = *(int *)(iVar10 + 0x40) - iVar8 >> 2;
  if (uVar5 != 0) {
    do {
      iVar10 = *(int *)(iVar8 + local_14 * 4);
      uVar9 = 0;
      iVar11 = *(int *)(iVar10 + 0xcc);
      uVar12 = *(int *)(iVar10 + 0xd0) - iVar11 >> 2;
      if (uVar12 != 0) {
        do {
          iVar2 = *(int *)(iVar11 + uVar9 * 4);
          ppbVar3 = &param_1;
          if (0xf < in_stack_00000018) {
            ppbVar3 = (byte **)pbVar1;
          }
          pbVar6 = (byte *)(iVar2 + 0x238);
          if (0xf < *(uint *)(iVar2 + 0x24c)) {
            pbVar6 = *(byte **)(iVar2 + 0x238);
          }
          uVar4 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x248),(byte *)ppbVar3,in_stack_00000014);
          if ((char)uVar4 != '\0') goto LAB_004a70a8;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar12);
      }
      local_14 = local_14 + 1;
    } while (local_14 < uVar5);
  }
  iVar10 = 0;
LAB_004a70a8:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar6 = *(byte **)(pbVar1 + -4), (byte *)0x1f < pbVar1 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return iVar10;
}


undefined4 FUN_004a7100(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  byte **ppbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0065b5cc;
  puStack_c = &LAB_005b19f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar4 = (byte **)param_1;
  }
  ppbVar7 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar7 = (byte **)param_1;
  }
  iVar12 = (int)((int)ppbVar4 + in_stack_00000014) - (int)ppbVar7;
  iVar9 = 0;
  if ((byte **)((int)ppbVar4 + in_stack_00000014) < ppbVar7) {
    iVar12 = 0;
  }
  if (iVar12 != 0) {
    do {
      iVar2 = toupper((int)*(char *)(iVar9 + (int)ppbVar7));
      *(char *)(iVar9 + (int)ppbVar4) = (char)iVar2;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar12);
  }
  uVar8 = 0;
  iVar9 = *(int *)(iVar1 + 0x3c);
  uVar3 = *(int *)(iVar1 + 0x40) - iVar9 >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(iVar9 + uVar8 * 4);
      uVar10 = 0;
      iVar12 = *(int *)(iVar1 + 0xcc);
      uVar13 = *(int *)(iVar1 + 0xd0) - iVar12 >> 2;
      if (uVar13 != 0) {
        do {
          iVar1 = *(int *)(iVar12 + uVar10 * 4);
          ppbVar4 = &param_1;
          if (0xf < in_stack_00000018) {
            ppbVar4 = (byte **)param_1;
          }
          pbVar6 = (byte *)(iVar1 + 0x238);
          if (0xf < *(uint *)(iVar1 + 0x24c)) {
            pbVar6 = *(byte **)(iVar1 + 0x238);
          }
          uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar1 + 0x248),(byte *)ppbVar4,in_stack_00000014);
          if ((char)uVar5 != '\0') {
            uVar11 = *(undefined4 *)(iVar12 + uVar10 * 4);
            goto LAB_004a722b;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  uVar11 = 0;
LAB_004a722b:
  if (0xf < in_stack_00000018) {
    pbVar6 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar6 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return uVar11;
}


int * __thiscall FUN_004a7280(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x3c);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x40)) {
      return (int *)0x0;
    }
    if (*(int *)*puVar1 == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return (int *)*puVar1;
}


int FUN_004a72b0(byte *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  piVar1 = *(int **)(DAT_0065b5cc + 0x40);
  for (piVar7 = *(int **)(DAT_0065b5cc + 0x3c); piVar7 != piVar1; piVar7 = piVar7 + 1) {
    iVar6 = *piVar7;
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar2;
    }
    pbVar5 = (byte *)(iVar6 + 4);
    if (0xf < *(uint *)(iVar6 + 0x18)) {
      pbVar5 = *(byte **)(iVar6 + 4);
    }
    uVar4 = FUN_004031f0(pbVar5,*(uint *)(iVar6 + 0x14),(byte *)ppbVar3,in_stack_00000014);
    if ((char)uVar4 != '\0') goto LAB_004a7305;
  }
  iVar6 = 0;
LAB_004a7305:
  if (0xf < in_stack_00000018) {
    pbVar5 = pbVar2;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar5 = *(byte **)(pbVar2 + -4), (byte *)0x1f < pbVar2 + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  return iVar6;
}


int * FUN_004a7350(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(DAT_0065b5cc + 0x58) - *(int *)(DAT_0065b5cc + 0x54) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(DAT_0065b5cc + 0x54) + uVar2 * 4);
      if ((piVar1[8] == param_1) && (*piVar1 == 2)) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


int * FUN_004a73a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(DAT_0065b5cc + 0x58) - *(int *)(DAT_0065b5cc + 0x54) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(DAT_0065b5cc + 0x54) + uVar2 * 4);
      if ((piVar1[8] == param_1) && (*piVar1 == 1)) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


int * __thiscall FUN_004a73f0(void *this,char param_1,byte *param_2)

{
  int *this_00;
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  byte **ppbVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_38 [5];
  uint local_24;
  int *local_1c;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pbVar9 = param_2;
  puStack_c = &LAB_005bba5f;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (int *)((int)this + 0xa8);
  local_8 = 0;
  uVar11 = 0;
  piVar6 = (int *)*this_00;
  if (*(int *)((int)this + 0xac) - (int)piVar6 >> 2 != 0) {
    do {
      pbVar10 = (byte *)*piVar6;
      ppbVar4 = &param_2;
      if (0xf < in_stack_0000001c) {
        ppbVar4 = (byte **)pbVar9;
      }
      pbVar7 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar7 = *(byte **)pbVar10;
      }
      local_18[0] = piVar6;
      uVar5 = FUN_004031f0(pbVar7,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar4,in_stack_00000018);
      if ((char)uVar5 != '\0') {
        piVar6 = *(int **)(*this_00 + uVar11 * 4);
        goto LAB_004a7580;
      }
      uVar11 = uVar11 + 1;
      piVar6 = local_18[0] + 1;
      local_18[0] = piVar6;
    } while (uVar11 < (uint)(*(int *)((int)this + 0xac) - *this_00 >> 2));
  }
  if (param_1 == '\0') {
    FUN_00591070("ERROR","ERROR: INVALID structure \'%s\'");
    bVar2 = cc_assert_script_compatible("ERROR: invalid structure.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","ERROR: invalid structure.",uVar3);
    }
    piVar6 = (int *)0x0;
    pbVar9 = param_2;
  }
  else {
    piVar6 = (int *)FUN_005adb0f(0x24);
    local_8._0_1_ = 1;
    local_1c = piVar6;
    FUN_004024e0(local_38,&param_2);
    local_8._0_1_ = 2;
    FUN_004024e0(piVar6,local_38);
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    local_8._0_1_ = 1;
    if (0xf < local_24) {
      pvVar8 = local_38[0];
      if ((0xfff < local_24 + 1) &&
         (pvVar8 = *(void **)((int)local_38[0] + -4),
         0x1f < (uint)((int)local_38[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    puVar1 = *(undefined4 **)((int)this + 0xac);
    local_18[0] = piVar6;
    if (*(undefined4 **)((int)this + 0xb0) == puVar1) {
      FUN_00414080(this_00,puVar1,local_18);
      pbVar9 = param_2;
      piVar6 = local_18[0];
    }
    else {
      *puVar1 = piVar6;
      *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 4;
      pbVar9 = param_2;
    }
  }
LAB_004a7580:
  if (0xf < in_stack_0000001c) {
    pbVar10 = pbVar9;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar10 = *(byte **)(pbVar9 + -4), (byte *)0x1f < pbVar9 + (-4 - (int)pbVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  ExceptionList = local_10;
  return piVar6;
}


int FUN_004a75d0(void *param_1)

{
  bool bVar1;
  int *this;
  int iVar2;
  void *pvVar3;
  uint in_stack_00000018;
  int in_stack_0000001c;
  byte *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = DAT_0065b5cc;
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffcc,&param_1);
  this = FUN_004a73f0(pvVar3,'\0',in_stack_ffffffcc);
  if (this == (int *)0x0) {
    FUN_00591070("ERROR","Error: invalid structure \'%s\'");
    bVar1 = cc_assert_script_compatible("Error: invalid structure");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s");
    }
  }
  iVar2 = FUN_00558a80(this,in_stack_0000001c);
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar3 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return iVar2;
}


void FUN_004a76c0(byte *param_1)

{
  int iVar1;
  byte ***pppbVar2;
  byte **ppbVar3;
  uint uVar4;
  int iVar5;
  byte ****ppppbVar6;
  byte *pbVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0065b5cc;
  puStack_c = &LAB_005bb2e8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar8 = 0;
  iVar5 = *(int *)(DAT_0065b5cc + 0x78);
  if (*(int *)(DAT_0065b5cc + 0x7c) - iVar5 >> 2 != 0) {
    do {
      FUN_004024e0(local_2c,(undefined4 *)(*(int *)(iVar5 + uVar8 * 4) + 0xf8));
      pppbVar2 = local_2c[0];
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)param_1;
      }
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = FUN_004031f0((byte *)ppppbVar6,local_1c,(byte *)ppbVar3,in_stack_00000014);
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)pppbVar2;
        if ((0xfff < local_18 + 1) &&
           (ppppbVar6 = (byte ****)pppbVar2[-1],
           (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar6)))) goto LAB_004a77b8;
        FUN_005adb3f(ppppbVar6);
      }
      if ((char)uVar4 != '\0') break;
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)(iVar1 + 0x78);
    } while (uVar8 < (uint)(*(int *)(iVar1 + 0x7c) - iVar5 >> 2));
  }
  if (0xf < in_stack_00000018) {
    pbVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar7 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar7))) {
LAB_004a77b8:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 FUN_004a77f0(void *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint in_stack_00000018;
  int in_stack_0000001c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bba90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar11 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  local_1c = DAT_0065b5cc;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_8 = 1;
  iVar8 = *(int *)(DAT_0065b5cc + 0x78);
  local_18 = 0;
  if (*(int *)(DAT_0065b5cc + 0x7c) - iVar8 >> 2 != 0) {
    do {
      local_28 = local_18 * 4;
      local_24 = *(int *)(iVar8 + local_28);
      if ((*(char *)(local_24 + 9) != '\0') &&
         (pbVar1 = *(byte **)(local_24 + 0x4c), local_20 = iVar8,
         pbVar3 = FUN_004143f0(*(byte **)(local_24 + 0x48),pbVar1,(byte *)&param_1),
         pbVar3 != pbVar1)) {
        uVar12 = 0;
        piVar4 = *(int **)(in_stack_0000001c + 0x3ec);
        iVar10 = *(int *)(in_stack_0000001c + 0x3f0) - (int)piVar4;
        iVar8 = iVar10 >> 0x1f;
        iVar6 = iVar10 / 0x1c + iVar8;
        iVar10 = local_20;
        puVar11 = local_14;
        if (iVar6 != iVar8) {
          do {
            if (*piVar4 == local_24) goto LAB_004a7905;
            uVar12 = uVar12 + 1;
            piVar4 = piVar4 + 7;
          } while (uVar12 < (uint)(iVar6 - iVar8));
          iVar10 = *(int *)(local_1c + 0x78);
        }
        if (local_14 == puVar7) {
          FUN_00414080(&local_34,puVar7,(undefined4 *)(iVar10 + local_28));
          local_14 = local_2c;
          puVar7 = local_30;
          puVar11 = local_2c;
        }
        else {
          *puVar7 = *(undefined4 *)(iVar10 + local_28);
          local_30 = puVar7 + 1;
          puVar7 = local_30;
        }
      }
LAB_004a7905:
      local_18 = local_18 + 1;
      iVar8 = *(int *)(local_1c + 0x78);
      local_20 = iVar8;
    } while (local_18 < (uint)(*(int *)(local_1c + 0x7c) - iVar8 >> 2));
  }
  puVar2 = local_34;
  iVar8 = (int)puVar7 - (int)local_34 >> 2;
  uVar9 = 0;
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      uVar9 = *local_34;
    }
    else {
      iVar10 = rand();
      uVar9 = puVar2[iVar10 % iVar8];
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = puVar2;
    if ((0xfff < ((int)puVar11 - (int)puVar2 & 0xfffffffcU)) &&
       (puVar7 = (undefined4 *)puVar2[-1], 0x1f < (uint)((int)puVar2 + (-4 - (int)puVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar7);
  }
  if (0xf < in_stack_00000018) {
    pvVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar5 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return uVar9;
}


void FUN_004a79d0(int param_1,byte param_2,void *param_3)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint in_stack_00000020;
  byte *in_stack_ffffffbc;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = DAT_0065b5cc;
  puStack_c = &LAB_005bbab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffbc,&param_3);
  piVar1 = FUN_004a73f0(pvVar3,'\0',in_stack_ffffffbc);
  local_14 = 0;
  iVar4 = piVar1[6];
  if (piVar1[7] - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + local_14 * 4);
      uVar2 = 0;
      iVar5 = *(int *)(iVar4 + 0x90);
      if (*(int *)(iVar4 + 0x94) - iVar5 >> 2 != 0) {
        do {
          iVar5 = *(int *)(iVar5 + uVar2 * 4);
          if (*(int *)(iVar5 + 0x31c) == param_1) {
            *(byte *)(iVar5 + 0x34c) = param_2 ^ 1;
          }
          uVar2 = uVar2 + 1;
          iVar5 = *(int *)(iVar4 + 0x90);
        } while (uVar2 < (uint)(*(int *)(iVar4 + 0x94) - iVar5 >> 2));
      }
      local_14 = local_14 + 1;
      iVar4 = piVar1[6];
    } while (local_14 < (uint)(piVar1[7] - iVar4 >> 2));
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
  return;
}


int FUN_004a7af0(byte *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  byte **ppbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *this;
  int *piVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  byte *in_stack_ffffffa4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbaf8;
  local_8 = 1;
  iVar16 = 0;
  local_14 = 0;
  piVar12 = *(int **)(DAT_0065b5cc + 0x78);
  piVar1 = *(int **)(DAT_0065b5cc + 0x7c);
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  iVar4 = local_14;
  iVar15 = DAT_0065b5cc;
  do {
    ExceptionList = ppvVar5;
    if (piVar12 == piVar1) {
      if (0xf < in_stack_00000018) {
        ppbVar7 = (byte **)param_1;
        if ((0xfff < in_stack_00000018 + 1) &&
           (ppbVar7 = *(byte ***)((int)param_1 + -4),
           (byte *)0x1f < (byte *)((int)param_1 + (-4 - (int)ppbVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppbVar7);
      }
      in_stack_00000014 = 0;
      in_stack_00000018 = 0xf;
      param_1 = (byte *)((uint)param_1 & 0xffffff00);
      if (0xf < in_stack_00000030) {
        pbVar14 = in_stack_0000001c;
        if ((0xfff < in_stack_00000030 + 1) &&
           (pbVar14 = *(byte **)(in_stack_0000001c + -4),
           (byte *)0x1f < in_stack_0000001c + (-4 - (int)pbVar14))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pbVar14);
      }
      ExceptionList = local_10;
      return iVar16;
    }
    iVar2 = *piVar12;
    piVar3 = *(int **)(iVar2 + 0xf0);
    for (piVar11 = *(int **)(iVar2 + 0xec); piVar11 != piVar3; piVar11 = piVar11 + 1) {
      pbVar14 = (byte *)*piVar11;
      ppbVar7 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar7 = (byte **)param_1;
      }
      uVar9 = *(uint *)(pbVar14 + 0x14);
      pbVar13 = pbVar14;
      if (0xf < uVar9) {
        pbVar13 = *(byte **)pbVar14;
      }
      uVar8 = FUN_004031f0(pbVar13,*(uint *)(pbVar14 + 0x10),(byte *)ppbVar7,in_stack_00000014);
      if ((char)uVar8 == '\0') {
        pbVar13 = pbVar14;
        if (0xf < uVar9) {
          pbVar13 = *(byte **)pbVar14;
        }
        uVar8 = FUN_004031f0(pbVar13,*(uint *)(pbVar14 + 0x10),(byte *)"PLAYERSHIP",10);
        if (((char)uVar8 != '\0') && (DAT_0065b3d4 == *(int *)(iVar15 + 0xd0))) goto LAB_004a7bdb;
        pbVar13 = pbVar14;
        if (0xf < uVar9) {
          pbVar13 = *(byte **)pbVar14;
        }
        uVar9 = FUN_004031f0(pbVar13,*(uint *)(pbVar14 + 0x10),(byte *)"ANYSTATION",10);
        if ((char)uVar9 != '\0') goto LAB_004a7bdb;
LAB_004a7ca0:
        local_14 = iVar4;
      }
      else {
LAB_004a7bdb:
        pbVar13 = pbVar14 + 0x18;
        pbVar10 = (byte *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pbVar10 = in_stack_0000001c;
        }
        if (0xf < *(uint *)(pbVar14 + 0x2c)) {
          pbVar13 = *(byte **)(pbVar14 + 0x18);
        }
        uVar9 = FUN_004031f0(pbVar13,*(uint *)(pbVar14 + 0x28),pbVar10,in_stack_0000002c);
        if ((char)uVar9 == '\0') goto LAB_004a7ca0;
        uVar9 = 0;
        iVar16 = *(int *)(pbVar14 + 0x30);
        if (*(int *)(pbVar14 + 0x34) - iVar16 >> 2 != 0) {
          do {
            cVar6 = FUN_004a23b0(*(void **)(iVar16 + uVar9 * 4),
                                 *(void **)(*(int *)(iVar15 + 0xd0) + 0x1f8));
            iVar15 = DAT_0065b5cc;
            if (cVar6 == '\0') goto LAB_004a7ca0;
            uVar9 = uVar9 + 1;
            iVar16 = *(int *)(pbVar14 + 0x30);
          } while (uVar9 < (uint)(*(int *)(pbVar14 + 0x34) - iVar16 >> 2));
        }
        local_14 = iVar2;
        if (iVar4 != 0) {
          FUN_004024e0(&stack0xffffffa4,(undefined4 *)(iVar2 + 0xf8));
          local_8._0_1_ = 2;
          this = FUN_00412870();
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar16 = FUN_004390e0(this,in_stack_ffffffa4);
          iVar15 = DAT_0065b5cc;
          if (iVar16 == -1) goto LAB_004a7ca0;
        }
      }
      iVar16 = local_14;
      iVar4 = local_14;
    }
    piVar12 = piVar12 + 1;
    ppvVar5 = ExceptionList;
  } while( true );
}


int FUN_004a7d60(byte *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_0065b5cc;
  puStack_c = &LAB_005bbb30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_18 = 0;
  iVar8 = *(int *)(DAT_0065b5cc + 0x78);
  iVar10 = DAT_0065b5cc;
  if (*(int *)(DAT_0065b5cc + 0x7c) - iVar8 >> 2 != 0) {
    do {
      iVar9 = *(int *)(iVar8 + local_18 * 4);
      local_14 = 0;
      if (*(int *)(iVar9 + 0xf0) - *(int *)(iVar9 + 0xec) >> 2 != 0) {
        do {
          iVar9 = *(int *)(iVar8 + local_18 * 4);
          pbVar6 = *(byte **)(*(int *)(iVar9 + 0xec) + local_14 * 4);
          ppbVar4 = &param_1;
          if (0xf < in_stack_00000018) {
            ppbVar4 = (byte **)param_1;
          }
          pbVar7 = pbVar6;
          if (0xf < *(uint *)(pbVar6 + 0x14)) {
            pbVar7 = *(byte **)pbVar6;
          }
          uVar5 = FUN_004031f0(pbVar7,*(uint *)(pbVar6 + 0x10),(byte *)ppbVar4,in_stack_00000014);
          if ((char)uVar5 == '\0') {
            pbVar6 = *(byte **)(*(int *)(iVar9 + 0xec) + local_14 * 4);
            pbVar7 = pbVar6;
            if (0xf < *(uint *)(pbVar6 + 0x14)) {
              pbVar7 = *(byte **)pbVar6;
            }
            uVar5 = FUN_004031f0(pbVar7,*(uint *)(pbVar6 + 0x10),(byte *)"PLAYERSHIP",10);
            if (((char)uVar5 != '\0') && (DAT_0065b3d4 == *(int *)(iVar10 + 0xd0)))
            goto LAB_004a7e75;
            pbVar6 = *(byte **)(*(int *)(iVar9 + 0xec) + local_14 * 4);
            pbVar7 = pbVar6;
            if (0xf < *(uint *)(pbVar6 + 0x14)) {
              pbVar7 = *(byte **)pbVar6;
            }
            uVar5 = FUN_004031f0(pbVar7,*(uint *)(pbVar6 + 0x10),(byte *)"ANYSTATION",10);
            if ((char)uVar5 != '\0') goto LAB_004a7e75;
          }
          else {
LAB_004a7e75:
            iVar1 = *(int *)(*(int *)(iVar9 + 0xec) + local_14 * 4);
            pbVar6 = (byte *)&stack0x0000001c;
            if (0xf < in_stack_00000030) {
              pbVar6 = in_stack_0000001c;
            }
            pbVar7 = (byte *)(iVar1 + 0x18);
            if (0xf < *(uint *)(iVar1 + 0x2c)) {
              pbVar7 = *(byte **)(iVar1 + 0x18);
            }
            uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar1 + 0x28),pbVar6,in_stack_0000002c);
            if ((char)uVar5 != '\0') {
              uVar5 = 0;
              iVar9 = *(int *)(*(int *)(iVar9 + 0xec) + local_14 * 4);
              if (*(int *)(iVar9 + 0x34) - *(int *)(iVar9 + 0x30) >> 2 != 0) {
                do {
                  cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 
                                                  local_18 * 4) + 0xec) + local_14 * 4) + 0x30) +
                                                 uVar5 * 4),
                                       *(void **)(*(int *)(iVar10 + 0xd0) + 0x1f8));
                  iVar10 = DAT_0065b5cc;
                  if (cVar3 == '\0') goto LAB_004a7f35;
                  uVar5 = uVar5 + 1;
                  iVar8 = *(int *)(iVar2 + 0x78);
                  iVar1 = *(int *)(*(int *)(*(int *)(iVar8 + local_18 * 4) + 0xec) + local_14 * 4);
                } while (uVar5 < (uint)(*(int *)(iVar1 + 0x34) - *(int *)(iVar1 + 0x30) >> 2));
              }
              if (iVar9 != 0) goto LAB_004a7f7f;
            }
          }
LAB_004a7f35:
          local_14 = local_14 + 1;
          iVar8 = *(int *)(iVar2 + 0x78);
          iVar9 = *(int *)(iVar8 + local_18 * 4);
        } while (local_14 < (uint)(*(int *)(iVar9 + 0xf0) - *(int *)(iVar9 + 0xec) >> 2));
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(*(int *)(iVar2 + 0x7c) - iVar8 >> 2));
  }
  iVar9 = 0;
LAB_004a7f7f:
  if (0xf < in_stack_00000018) {
    pbVar6 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar6 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pbVar6 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pbVar6 = *(byte **)(in_stack_0000001c + -4),
       (byte *)0x1f < in_stack_0000001c + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  ExceptionList = local_10;
  return iVar9;
}
