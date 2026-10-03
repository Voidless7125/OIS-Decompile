#include "../ois_server.exe.h"


void FUN_00490020(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 extraout_ECX_00;
  void *pvVar8;
  void *in_stack_fffffecc;
  undefined1 auStack_118 [12];
  undefined4 uStack_10c;
  Color3B local_db [3];
  int local_d8;
  uint local_d4;
  undefined1 local_d0 [100];
  void *local_6c [5];
  uint local_58;
  void *local_54;
  void *pvStack_50;
  void *pvStack_4c;
  void *pvStack_48;
  void *local_44;
  void *pvStack_40;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  void *local_2c;
  void *pvStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b9f5c;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_d4 = 0;
  piVar6 = (int *)(DAT_0065b5cc + 0x13c);
  local_d8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  puVar3 = &stack0xfffffffc;
  if (*(int *)(DAT_0065b5cc + 0x140) - *piVar6 >> 2 != 0) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar4 = (void **)FUN_004827c0(*(void **)(*piVar6 + local_d4 * 4),local_6c,piVar6,'\0');
      if (&local_3c != ppvVar4) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar4;
        pvStack_38 = ppvVar4[1];
        pvStack_34 = ppvVar4[2];
        pvStack_30 = ppvVar4[3];
        local_2c = ppvVar4[4];
        pvStack_28 = ppvVar4[5];
        ppvVar4[4] = (void *)0x0;
        ppvVar4[5] = (void *)0xf;
        *(undefined1 *)ppvVar4 = 0;
      }
      if (0xf < local_58) {
        pvVar8 = local_6c[0];
        if ((0xfff < local_58 + 1) &&
           (pvVar8 = *(void **)((int)local_6c[0] + -4),
           0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8)))) goto LAB_004903b3;
        FUN_005adb3f(pvVar8);
      }
      FUN_00403640(&local_3c," `![Taken]",10);
      uStack_10c = 0x490158;
      cocos2d::Color3B::Color3B(local_db,' ','@',' ');
      FUN_004024e0(auStack_118,&local_3c);
      local_14._0_1_ = 1;
      in_stack_fffffecc = (void *)((uint)in_stack_fffffecc & 0xffffff00);
      FUN_00402690(&stack0xfffffecc,&PTR_005ce008,0);
      uVar2 = local_d4;
      local_14._0_1_ = 0;
      puVar5 = FUN_0043b590(local_d0,local_d4 + 1000,in_stack_fffffecc);
      local_14 = CONCAT31(local_14._1_3_,2);
      puVar1 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
        FUN_0043ce10(param_1,puVar1,puVar5);
      }
      else {
        FUN_0043cd30(extraout_ECX,puVar1,puVar5);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_d0);
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar8 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar8 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8)))) goto LAB_004903b3;
        FUN_005adb3f(pvVar8);
      }
      local_d4 = uVar2 + 1;
      piVar6 = (int *)(DAT_0065b5cc + 0x13c);
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      puVar3 = puStack_20;
    } while (local_d4 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - *piVar6 >> 2));
  }
  puStack_20 = puVar3;
  iVar7 = *(int *)(local_d8 + 0x94);
  local_d4 = 0;
  if (*(int *)(local_d8 + 0x98) - iVar7 >> 2 != 0) {
    do {
      local_44 = (void *)0x0;
      pvStack_40 = (void *)0xf;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      local_14 = 3;
      ppvVar4 = (void **)FUN_004827c0(*(void **)(iVar7 + local_d4 * 4),local_6c,iVar7,'\0');
      if (&local_54 != ppvVar4) {
        FUN_00401b20((int *)&local_54);
        local_54 = *ppvVar4;
        pvStack_50 = ppvVar4[1];
        pvStack_4c = ppvVar4[2];
        pvStack_48 = ppvVar4[3];
        local_44 = ppvVar4[4];
        pvStack_40 = ppvVar4[5];
        ppvVar4[4] = (void *)0x0;
        ppvVar4[5] = (void *)0xf;
        *(undefined1 *)ppvVar4 = 0;
      }
      if (0xf < local_58) {
        pvVar8 = local_6c[0];
        if ((0xfff < local_58 + 1) &&
           (pvVar8 = *(void **)((int)local_6c[0] + -4),
           0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8)))) {
LAB_004903b3:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      uStack_10c = 0x490337;
      cocos2d::Color3B::Color3B(local_db,'@','@',' ');
      FUN_004024e0(auStack_118,&local_54);
      local_14._0_1_ = 4;
      in_stack_fffffecc = (void *)((uint)in_stack_fffffecc & 0xffffff00);
      FUN_00402690(&stack0xfffffecc,&PTR_005ce008,0);
      uVar2 = local_d4;
      local_14._0_1_ = 3;
      puVar5 = FUN_0043b590(local_d0,local_d4,in_stack_fffffecc);
      local_14 = CONCAT31(local_14._1_3_,5);
      puVar1 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
        FUN_0043ce10(param_1,puVar1,puVar5);
      }
      else {
        FUN_0043cd30(extraout_ECX_00,puVar1,puVar5);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_d0);
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_40) {
        pvVar8 = local_54;
        if ((0xfff < (int)pvStack_40 + 1U) &&
           (pvVar8 = *(void **)((int)local_54 + -4),
           0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8)))) goto LAB_004903b3;
        FUN_005adb3f(pvVar8);
      }
      local_d4 = uVar2 + 1;
      iVar7 = *(int *)(local_d8 + 0x94);
    } while (local_d4 < (uint)(*(int *)(local_d8 + 0x98) - iVar7 >> 2));
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_00490450(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte *in_stack_ffffffa8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b9f98;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  local_8 = 0;
  iVar6 = 0;
  uVar2 = *(uint *)(param_1 + 0xd4);
  if ((int)uVar2 < 1000) {
    if ((uVar2 != 0xffffffff) &&
       (iVar3 = *(int *)(iVar1 + 0x94), uVar2 < (uint)(*(int *)(iVar1 + 0x98) - iVar3 >> 2))) {
      iVar6 = *(int *)(iVar3 + uVar2 * 4);
    }
    if ((((*(char *)(param_1 + 0xe8) == '\0') ||
         (*(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2 == 0)) &&
        (iVar6 != 0)) && (*(char *)(param_1 + 0xe8) == '\0')) {
      FUN_004024e0(&stack0xffffffa8,*(undefined4 **)(iVar6 + 0x58));
      piVar5 = (int *)FUN_004a8380(in_stack_ffffffa8);
      if (piVar5 != (int *)0x0) {
        FUN_00507200(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),piVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00490570(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  byte *in_stack_ffffff84;
  char *pcVar12;
  int local_54;
  char local_45;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005ba030;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar10 = 0;
  uVar11 = *(uint *)((int)this + 0xd4);
  bVar1 = false;
  puVar8 = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  if ((int)uVar11 < 1000) {
    if (uVar11 != 0xffffffff) {
      if ((uint)((int)(puVar8[0x26] - puVar8[0x25]) >> 2) <= uVar11) {
        param_1[4] = 0;
        param_1[5] = 0xf;
        *(undefined1 *)param_1 = 0;
        FUN_00402690(param_1,"`^Error: invalid contract selected.",0x23);
        if (0xf < uStack_30) {
          pvVar5 = local_44;
          if ((0xfff < uStack_30 + 1) &&
             (pvVar5 = *(void **)((int)local_44 + -4),
             0x1f < (uint)((int)local_44 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar5);
        }
        goto LAB_00490df7;
      }
      iVar10 = *(int *)(puVar8[0x25] + uVar11 * 4);
    }
  }
  else {
    bVar1 = true;
    iVar10 = *(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + uVar11 * 4);
  }
  local_45 = FUN_00490450((int)this);
  if ((iVar10 == 0) || (*(int *)(iVar10 + 0x58) == 0)) {
LAB_004906d7:
    local_45 = '\0';
  }
  else {
    cVar3 = FUN_00490450((int)this);
    if (cVar3 == '\0') {
      FUN_004024e0(&stack0xffffff84,*(undefined4 **)(iVar10 + 0x58));
      iVar4 = FUN_004a8380(in_stack_ffffff84);
      if ((iVar4 == 0) ||
         (iVar4 = FUN_00507270(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),
                               *(int *)(iVar4 + 0x5c)),
         iVar4 < *(int *)(*(int *)(iVar10 + 0x58) + 0x1c))) goto LAB_004906d7;
    }
  }
  if (iVar10 == 0) {
    if ((int)(puVar8[0x26] - puVar8[0x25]) >> 2 == 0) {
      bVar1 = false;
      uVar11 = 0;
      while( true ) {
        if (DAT_0065c290 == (int *)0x0) {
          DAT_0065c290 = (int *)FUN_005adb0f(0x18);
          DAT_0065c290[4] = 0;
          DAT_0065c290[5] = 0;
          *DAT_0065c290 = 0;
          DAT_0065c290[1] = 0;
          DAT_0065c290[2] = 0;
          DAT_0065c290[3] = 0;
          DAT_0065c290[4] = 0;
          DAT_0065c290[5] = 0;
        }
        if ((uint)(DAT_0065c290[1] - *DAT_0065c290 >> 2) <= uVar11) break;
        FUN_004024e0(&stack0xffffff84,puVar8);
        local_8._0_1_ = 0xd;
        piVar9 = (int *)FUN_00412490();
        local_8._0_1_ = 0;
        cVar3 = FUN_004a0420(*(void **)(*piVar9 + uVar11 * 4),in_stack_ffffff84);
        if (cVar3 == '\0') {
          uVar11 = uVar11 + 1;
        }
        else {
          piVar9 = (int *)FUN_00412490();
          if (*(char *)(*(int *)(*piVar9 + uVar11 * 4) + 0xe0) == '\0') {
            bVar1 = true;
          }
          uVar11 = uVar11 + 1;
        }
      }
      if (bVar1) {
        uVar11 = 0x74;
        pcVar12 = 
        "`%Note: `7No contracts currently available\n\nTo complete existing contracts, sell your goods at the Trading Terminal."
        ;
      }
      else {
        uVar11 = 0x3f;
        pcVar12 = "`%Note: `7No contracts are presently available at this station.";
      }
      FUN_00403640(&local_44,pcVar12,uVar11);
    }
  }
  else {
    FUN_004024e0(&stack0xffffff84,(undefined4 *)(*(int *)(iVar10 + 0x54) + 0x48));
    local_8._0_1_ = 1;
    pvVar5 = (void *)FUN_00412490();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0d10(pvVar5,in_stack_ffffff84);
    FUN_00403640(&local_44,"`!CARGO CONTRACT\n",0x11);
    if (bVar1) {
      FUN_00403640(&local_44,"`%** Accepted **\n\n",0x12);
    }
    puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Difficulty: %s\n\n");
    local_8._0_1_ = 2;
    puVar8 = puVar6;
    if (0xf < (uint)puVar6[5]) {
      puVar8 = (undefined4 *)*puVar6;
    }
    FUN_00403640(&local_44,puVar8,puVar6[4]);
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pvVar5 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Client: `!%s\n");
    local_8._0_1_ = 3;
    puVar8 = puVar6;
    if (0xf < (uint)puVar6[5]) {
      puVar8 = (undefined4 *)*puVar6;
    }
    FUN_00403640(&local_44,puVar8,puVar6[4]);
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pvVar5 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    iVar4 = 0;
    local_54 = 0;
    if ((*(int *)(iVar10 + 0x58) != 0) && (*(int *)(*(int *)(iVar10 + 0x54) + 0x18) == 2)) {
      FUN_004024e0(&stack0xffffff84,(undefined4 *)(iVar10 + 0x38));
      local_54 = FUN_004a6de0(in_stack_ffffff84);
      FUN_004024e0(&stack0xffffff84,(undefined4 *)(iVar10 + 0x20));
      iVar4 = FUN_004a6de0(in_stack_ffffff84);
      FUN_00403640(&local_44,&DAT_005e75f8,1);
      FUN_004024e0(&stack0xffffff84,*(undefined4 **)(iVar10 + 0x58));
      iVar7 = FUN_004a8380(in_stack_ffffff84);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Transport %dx `0%s `7from ");
      local_8._0_1_ = 4;
      puVar8 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar8 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_44,puVar8,puVar6[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar5 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (*(int *)(local_54 + 0x24) == *(int *)(DAT_0065b5cc + 0xd8)) {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%%s `7");
        local_8._0_1_ = 5;
        uVar11 = puVar8[5];
      }
      else {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%%s`7 (in `!%s`7) ");
        local_8._0_1_ = 6;
        uVar11 = puVar8[5];
      }
      puVar6 = puVar8;
      if (0xf < uVar11) {
        puVar6 = (undefined4 *)*puVar8;
      }
      FUN_00403640(&local_44,puVar6,puVar8[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar5 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_0049097d;
        FUN_005adb3f(pvVar5);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_18 = 0xf;
      local_1c = 0;
      if (*(int *)(iVar4 + 0x24) == *(int *)(DAT_0065b5cc + 0xd8)) {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"to `%%%s`7.\n");
        local_8._0_1_ = 7;
        uVar11 = puVar8[5];
      }
      else {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"to `%%%s`7 (in `!%s`7).\n");
        local_8._0_1_ = 8;
        uVar11 = puVar8[5];
      }
      puVar6 = puVar8;
      if (0xf < uVar11) {
        puVar6 = (undefined4 *)*puVar8;
      }
      FUN_00403640(&local_44,puVar6,puVar8[4]);
      local_8._0_1_ = 0;
      uVar2 = (undefined1)local_8;
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar5 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_0049097d;
        FUN_005adb3f(pvVar5);
      }
      if (0 < *(int *)(*(int *)(iVar10 + 0x58) + 0x2c)) {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,"\n`7Payment of `$%dc`7 on delivery\n");
        local_8._0_1_ = 9;
        puVar8 = puVar6;
        if (0xf < (uint)puVar6[5]) {
          puVar8 = (undefined4 *)*puVar6;
        }
        FUN_00403640(&local_44,puVar8,puVar6[4]);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar5 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar5 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_0049097d;
          FUN_005adb3f(pvVar5);
        }
      }
      if ((*(char *)((int)this + 0xe8) == '\0') && (!bVar1)) {
        if (local_45 == '\0') {
          FUN_00403640(&local_44,"\n`$** Not enough space **`7\n",0x1c);
        }
        if (*(int *)(iVar7 + 0x5c) == 0) {
          puVar8 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,
                                "\nYou require %d units of free space to take this contract.\n");
          local_8._0_1_ = 10;
        }
        else {
          puVar8 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,
                                "\nYou require %d units of free `%c%s`7 space to take this contract.\n"
                               );
          local_8._0_1_ = 0xb;
        }
        FUN_00403490(&local_44,puVar8);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar5 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar5 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_0049097d;
          FUN_005adb3f(pvVar5);
        }
      }
    }
    FUN_00403640(&local_44,&DAT_005e75f8,1);
    FUN_00403640(&local_44,"`7Jump Required : ",0x12);
    iVar7 = *(int *)(*(int *)(iVar10 + 0x54) + 0x18);
    if ((iVar7 == 1) || (iVar7 == 2)) {
      if (*(int *)(iVar4 + 0x24) != *(int *)(DAT_0065b5cc + 0xd8)) goto LAB_00490c41;
      pcVar12 = "`0no\n";
      uVar11 = 5;
    }
    else if (*(int *)(local_54 + 0x24) == *(int *)(DAT_0065b5cc + 0xd8)) {
      uVar11 = 5;
      pcVar12 = "`0no\n";
    }
    else {
LAB_00490c41:
      uVar11 = 6;
      pcVar12 = "`$yes\n";
    }
    FUN_00403640(&local_44,pcVar12,uVar11);
    if (0.0 < *(float *)(iVar10 + 0x1c)) {
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Time limit: `!%.1f hours\n");
      local_8._0_1_ = 0xc;
      puVar8 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar8 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_44,puVar8,puVar6[4]);
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar5 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
LAB_0049097d:
          local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_44;
  param_1[1] = uStack_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
LAB_00490df7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __fastcall FUN_00490e20(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_EAX;
  int *piVar3;
  byte *in_stack_ffffffdc;
  
  if (((*(int *)(param_1 + 0xcc) == 3) && (in_EAX = *(uint *)(param_1 + 0xd4), 999 < (int)in_EAX))
     && (uVar1 = in_EAX - 1000, -1 < (int)uVar1)) {
    in_EAX = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2;
    if (uVar1 < in_EAX) {
      iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0x13c) + uVar1 * 4);
      in_EAX = FUN_00413e90((byte *)(iVar2 + 0x20),(byte *)(DAT_0065b3d4 + 0x238));
      if ((char)in_EAX == '\0') {
        FUN_004024e0(&stack0xffffffdc,*(undefined4 **)(iVar2 + 0x58));
        piVar3 = (int *)FUN_004a8380(in_stack_ffffffdc);
        in_EAX = 0;
        if (piVar3 != (int *)0x0) {
          in_EAX = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar3);
        }
        if (*(int *)(*(int *)(iVar2 + 0x58) + 0x1c) <= (int)in_EAX) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __fastcall FUN_00490ed0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *this;
  undefined4 extraout_ECX;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *in_stack_ffffffc0;
  void *pvVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar4 = param_1;
  if ((999 < *(int *)(param_1 + 0xd4)) && (uVar8 = *(int *)(param_1 + 0xd4) - 1000, -1 < (int)uVar8)
     ) {
    uVar4 = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2;
    if ((uVar8 < uVar4) &&
       ((pbVar2 = *(byte **)(*(int *)(DAT_0065b5cc + 0x13c) + uVar8 * 4), pbVar2 != (byte *)0x0 &&
        (uVar4 = FUN_00413e90(pbVar2 + 0x20,(byte *)(DAT_0065b3d4 + 0x238)), (char)uVar4 == '\0'))))
    {
      pbVar1 = pbVar2 + 0x58;
      FUN_004024e0(&stack0xffffffc0,*(undefined4 **)pbVar1);
      piVar5 = (int *)FUN_004a8380(in_stack_ffffffc0);
      uVar4 = 0;
      if (piVar5 != (int *)0x0) {
        uVar4 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar5);
      }
      if ((int)(*(undefined4 **)pbVar1)[6] <= (int)uVar4) {
        FUN_004024e0(&stack0xffffffc0,*(undefined4 **)pbVar1);
        piVar5 = (int *)FUN_004a8380(in_stack_ffffffc0);
        iVar3 = *(int *)(*(int *)pbVar1 + 0x20);
        iVar6 = 0;
        if (piVar5 != (int *)0x0) {
          iVar6 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar5);
        }
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
        FUN_00506f20(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),piVar5,iVar6);
        pvVar10 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"Contract Bonus",0xe);
        pbVar9 = *(byte **)(*(int *)pbVar1 + 0x2c);
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,(uint)pbVar9,pvVar10);
        FUN_00591070("WORLD","Cargo %s completed from contract.");
        pbVar7 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar7 = *(byte **)pbVar2;
        }
        uVar4 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)&PTR_005ce008,0);
        if ((char)uVar4 == '\0') {
          FUN_00591e00(&stack0xffffffbc,"completed_contract_%s");
          local_8 = 0;
          this = FUN_00412df0();
          local_8 = 0xffffffff;
          FUN_004a0ee0(this,pbVar9);
        }
        if (*(int **)pbVar1 != (int *)0x0) {
          FUN_004826b0(*(int **)pbVar1);
        }
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        FUN_00410420();
        *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)param_1 >> 8),1);
      }
    }
  }
  ExceptionList = local_10;
  return uVar4 & 0xffffff00;
}


uint __fastcall FUN_004910f0(int param_1)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_1 + 0xcc) == 3) && (in_EAX = *(uint *)(param_1 + 0xd4), in_EAX != 0xffffffff)
      ) && ((int)in_EAX < 1000)) {
    in_EAX = FUN_00490450(param_1);
    if ((char)in_EAX != '\0') {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      iVar1 = *(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94);
      in_EAX = iVar1 >> 2;
      if (*(uint *)(param_1 + 0xd4) < in_EAX) {
        return CONCAT31((int3)(iVar1 >> 10),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined1 __fastcall FUN_00491150(int param_1)

{
  float fVar1;
  int iVar2;
  int *_Dst;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  byte *in_stack_ffffffb0;
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba098;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = param_1;
  cVar5 = FUN_00490450(param_1);
  if (cVar5 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  pbVar8 = *(byte **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  iVar2 = *(int *)(*(int *)(pbVar8 + 0x94) + *(int *)(param_1 + 0xd4) * 4);
  *(float *)(iVar2 + 0x18) =
       (float)(*(int *)(DAT_0065b444 + 0x184) +
              ((*(int *)(DAT_0065b444 + 0x18c) + *(int *)(DAT_0065b444 + 400) * 0xc) * 0x1f +
              *(int *)(DAT_0065b444 + 0x188)) * 0x18);
  local_24 = (undefined1 *)iVar2;
  local_1c = pbVar8;
  local_18 = iVar2;
  FUN_00591070("DETAIL","Begin time in hours: %f");
  fVar1 = *(float *)(*(int *)(iVar2 + 0x54) + 0x9c);
  if (fVar1 != 0.0) {
    *(float *)(*(int *)(iVar2 + 0x54) + 0xa8) = fVar1 * 60.0 * 60.0;
  }
  iVar3 = DAT_0065b5cc;
  piVar7 = *(int **)(DAT_0065b5cc + 0x140);
  local_14 = iVar2;
  if (*(int **)(DAT_0065b5cc + 0x144) == piVar7) {
    FUN_004141e0((void *)(DAT_0065b5cc + 0x13c),piVar7,&local_14);
  }
  else {
    *piVar7 = iVar2;
    *(int *)(iVar3 + 0x140) = *(int *)(iVar3 + 0x140) + 4;
  }
  piVar7 = *(int **)(pbVar8 + 0x98);
  puVar6 = FUN_00414000(&local_28,&local_18,*(int **)(pbVar8 + 0x94),piVar7);
  _Dst = (int *)*puVar6;
  if (_Dst != piVar7) {
    iVar2 = *(int *)(pbVar8 + 0x98);
    memmove(_Dst,piVar7,iVar2 - (int)piVar7);
    *(int *)(local_1c + 0x98) = (iVar2 - (int)piVar7) + (int)_Dst;
    pbVar8 = local_1c;
  }
  FUN_0049ea50(pbVar8);
  iVar2 = local_20;
  puVar4 = local_24;
  *(undefined1 *)(local_20 + 0xe8) = 1;
  FUN_004024e0(&stack0xffffffb0,*(undefined4 **)((int)local_24 + 0x58));
  uVar9 = 0x4912e0;
  piVar7 = (int *)FUN_004a8380(in_stack_ffffffb0);
  FUN_00506db0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar7,
               *(int *)(*(int *)((int)puVar4 + 0x58) + 0x1c));
  *(undefined4 *)(*(int *)((int)puVar4 + 0x58) + 0x18) = 0;
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"Cargo loaded.");
  local_24 = &stack0xffffffac;
  pbVar8 = (byte *)(uVar9 & 0xffffff00);
  FUN_00402690(&stack0xffffffac,"has_contract",0xc);
  local_8 = 0;
  puVar6 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar6,pbVar8);
  *(int *)(iVar2 + 0xd4) =
       (*(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2) + 999;
  ExceptionList = local_10;
  return 1;
}


void FUN_004913a0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  void *pvVar8;
  uint uVar9;
  void *in_stack_fffffedc;
  undefined1 auStack_108 [16];
  undefined4 uStack_f8;
  Color3B local_ce [3];
  Color3B local_cb [3];
  void *local_c8;
  code *local_c4;
  uint local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b8 [100];
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &LAB_005ba0ee;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar9 = 0;
  local_c8 = param_1;
  local_c4 = Color3B_exref;
  piVar2 = DAT_0065c290;
  do {
    local_c0 = uVar9;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_005adb0f(0x18);
      piVar2[4] = 0;
      piVar2[5] = 0;
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      DAT_0065c290 = piVar2;
    }
    if ((uint)(piVar2[1] - *piVar2 >> 2) <= uVar9) {
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_005adb0f(0x18);
      piVar2[4] = 0;
      piVar2[5] = 0;
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      DAT_0065c290 = piVar2;
    }
    iVar6 = *(int *)(*piVar2 + uVar9 * 4);
    if (*(int *)(iVar6 + 0x90) - *(int *)(iVar6 + 0x8c) >> 2 != 0) {
      local_2c = 0xf00000000;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      puVar1 = *(undefined4 **)(*piVar2 + uVar9 * 4);
      ppvVar3 = (void **)FUN_00591e00((undefined1 *)local_54,"`!%s\n");
      if (&local_3c != ppvVar3) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar3;
        pvStack_38 = ppvVar3[1];
        pvStack_34 = ppvVar3[2];
        pvStack_30 = ppvVar3[3];
        local_2c = *(undefined8 *)(ppvVar3 + 4);
        ppvVar3[4] = (void *)0x0;
        ppvVar3[5] = (void *)0xf;
        *(undefined1 *)ppvVar3 = 0;
      }
      if (0xf < local_40) {
        pvVar8 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar8 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) goto LAB_004917b9;
        FUN_005adb3f(pvVar8);
      }
      cocos2d::Color3B::Color3B((Color3B *)&local_bc,'@','@','@');
      if ((float)puVar1[0x34] <= 0.0) {
        FUN_004a09a0((int)puVar1);
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`%%Max. loan: `$%dc");
        local_14._0_1_ = 2;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_3c,puVar7,puVar4[4]);
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_40) {
          pvVar8 = local_54[0];
          if ((0xfff < local_40 + 1) &&
             (pvVar8 = *(void **)((int)local_54[0] + -4),
             0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) goto LAB_004917b9;
          FUN_005adb3f(pvVar8);
        }
        iVar6 = FUN_004a09a0((int)puVar1);
        if (0 < iVar6) {
          puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_ce,' ','@',' ');
          local_bc = *puVar5;
          local_ba = *(undefined1 *)(puVar5 + 1);
        }
      }
      else {
        uStack_f8 = 0x4915ac;
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`^Cur. loan: `$%.0fc");
        local_14._0_1_ = 1;
        puVar7 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar7 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_3c,puVar7,puVar4[4]);
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_40) {
          pvVar8 = local_54[0];
          if ((0xfff < local_40 + 1) &&
             (pvVar8 = *(void **)((int)local_54[0] + -4),
             0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) goto LAB_004917b9;
          FUN_005adb3f(pvVar8);
        }
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_cb,' ',' ','@');
        local_bc = *puVar5;
        local_ba = *(undefined1 *)(puVar5 + 1);
      }
      FUN_004024e0(auStack_108,&local_3c);
      local_14._0_1_ = 3;
      in_stack_fffffedc = (void *)((uint)in_stack_fffffedc & 0xffffff00);
      FUN_00402690(&stack0xfffffedc,&PTR_005ce008,0);
      local_14._0_1_ = 0;
      puVar7 = FUN_0043b590(local_b8,*puVar1,in_stack_fffffedc);
      pvVar8 = local_c8;
      local_14 = CONCAT31(local_14._1_3_,4);
      puVar1 = *(undefined4 **)((int)local_c8 + 4);
      if (*(undefined4 **)((int)local_c8 + 8) == puVar1) {
        FUN_0043ce10(local_c8,puVar1,puVar7);
      }
      else {
        FUN_0043cd30(extraout_ECX,puVar1,puVar7);
        *(int *)((int)pvVar8 + 4) = *(int *)((int)pvVar8 + 4) + 0x60;
      }
      FUN_0043bfa0((int)local_b8);
      local_14 = -1;
      if (0xf < local_2c._4_4_) {
        pvVar8 = local_3c;
        if ((0xfff < local_2c._4_4_ + 1) &&
           (pvVar8 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8)))) {
LAB_004917b9:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_2c = 0xf00000000;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      piVar2 = DAT_0065c290;
      uVar9 = local_c0;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}


void FUN_004917e0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  byte ****ppppbVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  Color3B *this;
  byte *pbVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  Color3B local_72 [3];
  Color3B local_6f [3];
  code *local_6c;
  int *local_68;
  code *local_64;
  int *local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  uint local_58;
  void *local_54 [5];
  uint local_40;
  byte ***local_3c;
  byte **ppbStack_38;
  byte **ppbStack_34;
  byte **ppbStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &LAB_005ba138;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_58 = 0;
  local_68 = param_1;
  piVar3 = DAT_0065c290;
  piVar12 = (int *)0x0;
  while( true ) {
    local_60 = piVar12;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_005adb0f(0x18);
      piVar3[4] = 0;
      piVar3[5] = 0;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      DAT_0065c290 = piVar3;
    }
    if ((uint)(piVar3[1] - *piVar3 >> 2) <= local_58) break;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_005adb0f(0x18);
      piVar3[4] = 0;
      piVar3[5] = 0;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      DAT_0065c290 = piVar3;
    }
    iVar13 = *(int *)(*piVar3 + local_58 * 4);
    local_58 = local_58 + 1;
    piVar12 = (int *)((int)local_60 + 1);
    if (*(int *)(iVar13 + 0x90) - *(int *)(iVar13 + 0x8c) >> 2 == 0) {
      piVar12 = local_60;
    }
  }
  if ((int *)((local_68[1] - *local_68) / 0x60) == piVar12) {
    local_58 = 0;
    local_64 = Color3B_exref;
    iVar13 = 0;
    local_6c = operator!=_exref;
    while( true ) {
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_005adb0f(0x18);
        piVar3[4] = 0;
        piVar3[5] = 0;
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        DAT_0065c290 = piVar3;
      }
      if ((uint)(piVar3[1] - *piVar3 >> 2) <= local_58) goto LAB_00491d0b;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_005adb0f(0x18);
        piVar3[4] = 0;
        piVar3[5] = 0;
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        DAT_0065c290 = piVar3;
      }
      iVar6 = *(int *)(*piVar3 + local_58 * 4);
      if (*(int *)(iVar6 + 0x90) - *(int *)(iVar6 + 0x8c) >> 2 != 0) break;
LAB_00491cc7:
      local_58 = local_58 + 1;
    }
    local_2c = 0xf00000000;
    local_3c = (byte ***)((uint)local_3c & 0xffffff00);
    local_14 = 0;
    local_60 = *(int **)(*piVar3 + local_58 * 4);
    ppppbVar4 = (byte ****)FUN_00591e00((undefined1 *)local_54,"`!%s\n");
    if (&local_3c != ppppbVar4) {
      FUN_00401b20((int *)&local_3c);
      local_3c = *ppppbVar4;
      ppbStack_38 = (byte **)ppppbVar4[1];
      ppbStack_34 = (byte **)ppppbVar4[2];
      ppbStack_30 = (byte **)ppppbVar4[3];
      local_2c = *(undefined8 *)(ppppbVar4 + 4);
      ppppbVar4[4] = (byte ***)0x0;
      ppppbVar4[5] = (byte ***)0xf;
      *(undefined1 *)ppppbVar4 = 0;
    }
    if (0xf < local_40) {
      pvVar10 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar10 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) goto LAB_00491cf5;
      FUN_005adb3f(pvVar10);
    }
    cocos2d::Color3B::Color3B((Color3B *)&local_5c,'@','@','@');
    piVar3 = local_60;
    if ((float)local_60[0x34] <= 0.0) {
      FUN_004a09a0((int)local_60);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`%%Max. loan: `$%dc");
      local_14._0_1_ = 2;
      puVar9 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar9 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_3c,puVar9,puVar5[4]);
      local_14 = (uint)local_14._1_3_ << 8;
      if (0xf < local_40) {
        pvVar10 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar10 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) goto LAB_00491cf5;
        FUN_005adb3f(pvVar10);
      }
      iVar6 = FUN_004a09a0((int)piVar3);
      if (0 < iVar6) {
        uVar14 = 0x2000000040;
        this = local_72;
        goto LAB_00491bc1;
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`^Cur. loan: `$%.0fc");
      local_14._0_1_ = 1;
      puVar9 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar9 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_3c,puVar9,puVar5[4]);
      local_14 = (uint)local_14._1_3_ << 8;
      if (0xf < local_40) {
        pvVar10 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar10 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) goto LAB_00491cf5;
        FUN_005adb3f(pvVar10);
      }
      uVar14 = 0x4000000020;
      this = local_6f;
LAB_00491bc1:
      puVar7 = (undefined2 *)
               cocos2d::Color3B::Color3B(this,' ',(uchar)uVar14,(uchar)((ulonglong)uVar14 >> 0x20));
      local_5c = *puVar7;
      local_5a = *(undefined1 *)(puVar7 + 1);
    }
    iVar6 = *local_68;
    if (*(int *)(iVar13 + iVar6) == *local_60) {
      iVar1 = iVar13 + iVar6;
      pbVar11 = (byte *)(iVar1 + 4);
      if (0xf < *(uint *)(iVar13 + 0x18 + iVar6)) {
        pbVar11 = *(byte **)(iVar1 + 4);
      }
      uVar8 = FUN_004031f0(pbVar11,*(uint *)(iVar1 + 0x14),(byte *)&PTR_005ce008,0);
      if (((char)uVar8 != '\0') && (*(int *)(iVar13 + 0x1c + iVar6) == 1)) {
        iVar1 = iVar13 + iVar6;
        ppppbVar4 = &local_3c;
        if (0xf < local_2c._4_4_) {
          ppppbVar4 = (byte ****)local_3c;
        }
        pbVar11 = (byte *)(iVar1 + 0x20);
        if (0xf < *(uint *)(iVar1 + 0x34)) {
          pbVar11 = *(byte **)(iVar1 + 0x20);
        }
        uVar8 = FUN_004031f0(pbVar11,*(uint *)(iVar1 + 0x30),(byte *)ppppbVar4,(uint)local_2c);
        if (((((char)uVar8 != '\0') &&
             (bVar2 = cocos2d::Color3B::operator!=
                                ((Color3B *)(iVar6 + 0x58 + iVar13),(Color3B *)&local_5c), !bVar2))
            && (*(int *)(iVar13 + 0x50 + *local_68) == -999)) &&
           (*(char *)(iVar13 + 0x5e + *local_68) == '\0')) {
          local_14 = -1;
          iVar13 = iVar13 + 0x60;
          if (0xf < local_2c._4_4_) {
            ppppbVar4 = (byte ****)local_3c;
            if ((0xfff < local_2c._4_4_ + 1) &&
               (ppppbVar4 = (byte ****)local_3c[-1],
               (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)ppppbVar4)))) goto LAB_00491cf5;
            FUN_005adb3f(ppppbVar4);
          }
          local_2c = 0xf00000000;
          local_3c = (byte ***)((uint)local_3c & 0xffffff00);
          piVar3 = DAT_0065c290;
          goto LAB_00491cc7;
        }
      }
    }
    if (0xf < local_2c._4_4_) {
      ppppbVar4 = (byte ****)local_3c;
      if ((0xfff < local_2c._4_4_ + 1) &&
         (ppppbVar4 = (byte ****)local_3c[-1],
         (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)ppppbVar4)))) {
LAB_00491cf5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar4);
    }
  }
LAB_00491d0b:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_00491d30(void *this,undefined1 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba1a9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  iVar4 = *(int *)((int)this + 0xdc);
  if (iVar4 == -1) {
    FUN_00403640(param_1,
                 "Use this screen to take out loans from various banks in the Apollo system.\n\nLoans accrue interest and unpaid debts can incur corrective measures.\n\n"
                 ,0x93);
    goto LAB_00492105;
  }
  piVar1 = (int *)FUN_00412490();
  uVar8 = 0;
  puVar6 = (undefined4 *)*piVar1;
  uVar2 = piVar1[1] - (int)puVar6 >> 2;
  if (uVar2 != 0) {
    do {
      piVar1 = (int *)*puVar6;
      if (*piVar1 == iVar4) goto LAB_00491dc3;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 < uVar2);
  }
  piVar1 = (int *)0x0;
LAB_00491dc3:
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!%s\n\n");
  local_8 = 1;
  puVar6 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar6 = (undefined4 *)*puVar3;
  }
  FUN_00403640(param_1,puVar6,puVar3[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%%s\n\n\n");
  local_8 = 2;
  puVar6 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar6 = (undefined4 *)*puVar3;
  }
  FUN_00403640(param_1,puVar6,puVar3[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  if (0.0 < (float)piVar1[0x34]) {
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`^Existing loan:\n  `$%.0fc\n");
    local_8 = 3;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar6,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0Original loan:\n  `$%dc\n");
    local_8 = 4;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar6,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  if (*(char *)((int)this + 0xe9) == '\0') {
    iVar4 = FUN_004a09a0((int)piVar1);
    if (iVar4 < 1) goto LAB_00492105;
    uVar2 = 0;
    piVar5 = (int *)piVar1[0x20];
    iVar4 = piVar1[0x36];
    uVar8 = piVar1[0x21] - (int)piVar5 >> 2;
    if (uVar8 != 0) {
      do {
        if (iVar4 < *piVar5) break;
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 - *piVar5;
        piVar5 = piVar5 + 1;
      } while (uVar2 < uVar8);
    }
    FUN_004a09a0((int)piVar1);
    puVar3 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_2c,"`!Offered loan:\n  `$%dc`7 @ %d%% interest");
    local_8 = 6;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar6,puVar3[4]);
    if (local_18 < 0x10) goto LAB_00492105;
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    if (*(int *)((int)this + 0xec) < 1) goto LAB_00492105;
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%REPAID:\n  `$%dc\n");
    local_8 = 5;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar6,puVar3[4]);
    if (local_18 < 0x10) goto LAB_00492105;
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FUN_005adb3f(pvVar7);
LAB_00492105:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __fastcall FUN_00492130(int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(int *)(param_1 + 0xcc) == 2) && (iVar1 = *(int *)(param_1 + 0xdc), iVar1 != -1)) &&
     (*(char *)(param_1 + 0xe9) == '\0')) {
    uVar5 = 0;
    piVar2 = (int *)FUN_00412490();
    puVar3 = (undefined4 *)*piVar2;
    uVar4 = piVar2[1] - (int)puVar3 >> 2;
    if (uVar4 != 0) {
      do {
        piVar2 = (int *)*puVar3;
        if (*piVar2 == iVar1) goto LAB_00492177;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 < uVar4);
    }
    piVar2 = (int *)0x0;
LAB_00492177:
    in_EAX = FUN_004a09a0((int)piVar2);
    if ((0 < (int)in_EAX) && (0 < *(int *)(param_1 + 0xe0))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __fastcall FUN_004921a0(int param_1)

{
  int *in_EAX;
  void *this;
  int iVar1;
  
  if ((((*(int *)(param_1 + 0xcc) == 2) && (iVar1 = *(int *)(param_1 + 0xdc), iVar1 != -1)) &&
      (*(char *)(param_1 + 0xe9) != '\0')) &&
     ((*(int *)(param_1 + 0xe0) != 0 &&
      (in_EAX = *(int **)(DAT_0065b5cc + 0x124), *(int *)(param_1 + 0xe0) <= in_EAX[7])))) {
    this = (void *)FUN_00412490();
    in_EAX = FUN_004a0cd0(this,iVar1);
    if ((*(int *)(param_1 + 0xe0) <= *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c)) &&
       (in_EAX = (int *)(int)(float)in_EAX[0x34], *(int *)(param_1 + 0xe0) <= (int)in_EAX)) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


void __fastcall FUN_00492220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint in_stack_ffffff88;
  void *pvVar10;
  undefined1 local_60 [12];
  undefined4 uStack_54;
  uint in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba1f7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_00492130(param_1);
  if ((char)uVar2 == '\0') {
    ExceptionList = local_10;
    return;
  }
  iVar9 = *(int *)(param_1 + 0xdc);
  piVar3 = (int *)FUN_00412490();
  uVar6 = 0;
  puVar5 = (undefined4 *)*piVar3;
  uVar8 = piVar3[1] - (int)puVar5 >> 2;
  puVar7 = puVar5;
  if (uVar8 != 0) {
    do {
      if (*(int *)*puVar7 == iVar9) {
        iVar9 = puVar5[uVar6];
        goto LAB_00492285;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 < uVar8);
  }
  iVar9 = 0;
LAB_00492285:
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((iVar1 < 1) || (iVar4 = FUN_004a09a0(iVar9), iVar4 < iVar1)) {
    FUN_00591070("WORLD","Unable to borrow this amount of money.");
  }
  else {
    *(int *)(iVar9 + 0xd4) = *(int *)(iVar9 + 0xd4) + iVar1;
    *(float *)(iVar9 + 0xd0) = (float)iVar1 + *(float *)(iVar9 + 0xd0);
  }
  pvVar10 = (void *)(in_stack_ffffffbc & 0xffffff00);
  FUN_00402690(&stack0xffffffbc,&DAT_005fc168,4);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,*(uint *)(param_1 + 0xe0),pvVar10);
  pvVar10 = (void *)((uint)pvVar10 & 0xffffff00);
  FUN_00402690(&stack0xffffffbc,"money_borrowed",0xe);
  local_8 = 0;
  uVar2 = extraout_ECX_00;
  if (DAT_0065c294 == 0) {
    puVar5 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_0065c294 = FUN_0051e500(puVar5);
    uVar2 = extraout_ECX_01;
  }
  local_8 = 0xffffffff;
  FUN_0051e750(uVar2,pvVar10);
  uStack_54 = 0x492396;
  FUN_00402690(&stack0xffffffb8,&PTR_005ce008,0);
  local_8 = 2;
  local_60[0] = 0;
  FUN_00402690(local_60,"money_borrowed",0xe);
  local_8 = CONCAT31(local_8._1_3_,3);
  pvVar10 = (void *)(in_stack_ffffff88 & 0xffffff00);
  FUN_00402690(&stack0xffffff88,"commerce",8);
  local_8 = 0xffffffff;
  FUN_00401a50(pvVar10);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00492410(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  undefined4 *puVar7;
  uint uVar8;
  uint in_stack_ffffff88;
  void *pvVar9;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  uint in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ba1f7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_004921a0(param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0xdc);
    piVar3 = (int *)FUN_00412490();
    uVar2 = 0;
    puVar4 = (undefined4 *)*piVar3;
    uVar8 = piVar3[1] - (int)puVar4 >> 2;
    puVar7 = puVar4;
    if (uVar8 != 0) {
      do {
        if (*(int *)*puVar7 == iVar1) {
          pvVar5 = (void *)puVar4[uVar2];
          goto LAB_00492479;
        }
        uVar2 = uVar2 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar2 < uVar8);
    }
    pvVar5 = (void *)0x0;
LAB_00492479:
    FUN_004a0b40(pvVar5,*(int *)(param_1 + 0xe0));
    pvVar5 = (void *)(in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"money_repaid",0xc);
    local_8 = 0;
    uVar6 = extraout_ECX;
    if (DAT_0065c294 == 0) {
      puVar4 = (undefined4 *)FUN_005adb0f(0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_0065c294 = FUN_0051e500(puVar4);
      uVar6 = extraout_ECX_00;
    }
    local_8 = 0xffffffff;
    FUN_0051e750(uVar6,pvVar5);
    uStack_54 = 0x49250c;
    FUN_00402690(&stack0xffffffb8,&PTR_005ce008,0);
    local_8 = 2;
    auStack_60[0] = 0;
    FUN_00402690(auStack_60,"money_repaid",0xc);
    local_8 = CONCAT31(local_8._1_3_,3);
    pvVar9 = (void *)(in_stack_ffffff88 & 0xffffff00);
    FUN_00402690(&stack0xffffff88,"commerce",8);
    local_8 = 0xffffffff;
    FUN_00401a50(pvVar9);
    pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,&DAT_005fc168,4);
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_01,-*(int *)(param_1 + 0xe0),pvVar5);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  ExceptionList = local_10;
  return;
}


void FUN_004924e7(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  int unaff_EDI;
  uint in_stack_ffffffb4;
  void *pvVar1;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint in_stack_ffffffe8;
  
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffe4;
  uStack_28 = 0x49250c;
  FUN_00402690(&stack0xffffffe4,&PTR_005ce008,0);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined1 **)(unaff_EBP + -0x10) = local_34;
  local_34[0] = 0;
  FUN_00402690(local_34,"money_repaid",0xc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pvVar1 = (void *)(in_stack_ffffffb4 & 0xffffff00);
  FUN_00402690(&stack0xffffffb4,"commerce",8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00401a50(pvVar1);
  pvVar1 = (void *)(in_stack_ffffffe8 & 0xffffff00);
  FUN_00402690(&stack0xffffffe8,&DAT_005fc168,4);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-*(int *)(unaff_EDI + 0xe0),pvVar1);
  *(undefined4 *)(unaff_EDI + 0xec) = *(undefined4 *)(unaff_EDI + 0xe0);
  *(undefined4 *)(unaff_EDI + 0xe0) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


uint __thiscall FUN_004925e0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  char cVar2;
  uint in_EAX;
  undefined3 extraout_var;
  
  iVar1 = DAT_0065b5cc;
  if ((*(int *)((int)this + 0x10c) == 2) && (*(int *)((int)this + 0x114) != -1)) {
    in_EAX = *(uint *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    this_00 = *(void **)(in_EAX + 0xc + *(int *)((int)this + 0x114) * 4);
    if (this_00 != (void *)0x0) {
      in_EAX = param_1 - 1;
      if (in_EAX < 2) {
        cVar2 = FUN_00506870(this_00,param_1);
        in_EAX = CONCAT31(extraout_var,cVar2);
        if ((cVar2 == '\0') &&
           (in_EAX = *(uint *)(*(int *)(iVar1 + 0x124) + 0x1c),
           *(int *)(&DAT_005df604 + param_1 * 4) <= (int)in_EAX)) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


uint __fastcall FUN_00492650(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint in_EAX;
  undefined3 extraout_var;
  
  if (((*(int *)(param_1 + 0x10c) == 3) && (*(int *)(param_1 + 0x118) != -1)) &&
     (*(char *)(param_1 + 0x109) == '\0')) {
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398) +
                               0x58) + *(int *)(param_1 + 0x118) * 4);
    if (piVar1 == (int *)0x0) {
      in_EAX = FUN_00591070("DETAIL","ERROR: invalid module sale instance selected for some reason."
                           );
    }
    else {
      bVar2 = FUN_00522480(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),*piVar1);
      in_EAX = CONCAT31(extraout_var,bVar2);
      if ((bVar2) &&
         (in_EAX = *(uint *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c), piVar1[1] <= (int)in_EAX)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


void FUN_004926d0(undefined1 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba279;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
    FUN_00403640(param_1,"`7Vessel: `8none",0x10);
  }
  else {
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Vessel: `%%%s\n");
    local_8 = 1;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Class : `%%%s\n");
    local_8 = 2;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manu. : `%%%s\n");
    local_8 = 3;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Rego. : `0%s\n");
    local_8 = 4;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Owner : `!%s\n");
    local_8 = 5;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x3c); piVar4 != *(int **)(iVar3 + 0x40); piVar4 = piVar4 + 1) {
      if (*(int *)(((int *)*piVar4)[2] + 4) == 1) {
        cVar1 = (**(code **)(*(int *)*piVar4 + 0x10))(0);
        if (cVar1 != '\0') {
          uVar8 = 0x10;
          pcVar7 = "`7Rct.  : `0Yes\n";
          goto LAB_00492a90;
        }
        break;
      }
    }
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x3c); piVar4 != *(int **)(iVar3 + 0x40); piVar4 = piVar4 + 1) {
      if (*(int *)(*(int *)(*piVar4 + 8) + 4) == 1) {
        uVar8 = 0x10;
        pcVar7 = "`7Rct.  : `$Yes\n";
        goto LAB_00492a90;
      }
    }
    uVar8 = 0xf;
    pcVar7 = "`7Rct.  : `8No\n";
LAB_00492a90:
    FUN_00403640(param_1,pcVar7,uVar8);
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x3c); piVar4 != *(int **)(iVar3 + 0x40); piVar4 = piVar4 + 1) {
      if (*(int *)(((int *)*piVar4)[2] + 4) == 0xd) {
        cVar1 = (**(code **)(*(int *)*piVar4 + 0x10))(0);
        if (cVar1 != '\0') {
          uVar8 = 0x10;
          pcVar7 = "`7Sol.  : `0Yes\n";
          goto LAB_00492b19;
        }
        break;
      }
    }
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x3c); piVar4 != *(int **)(iVar3 + 0x40); piVar4 = piVar4 + 1) {
      if (*(int *)(*(int *)(*piVar4 + 8) + 4) == 0xd) {
        uVar8 = 0x10;
        pcVar7 = "`7Sol.  : `$Yes\n";
        goto LAB_00492b19;
      }
    }
    uVar8 = 0xf;
    pcVar7 = "`7Sol.  : `8No\n";
LAB_00492b19:
    FUN_00403640(param_1,pcVar7,uVar8);
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x3c); piVar4 != *(int **)(iVar3 + 0x40); piVar4 = piVar4 + 1) {
      if (*(int *)(((int *)*piVar4)[2] + 4) == 10) {
        cVar1 = (**(code **)(*(int *)*piVar4 + 0x10))(0);
        if (cVar1 != '\0') {
          uVar8 = 0x10;
          pcVar7 = "`7J/D   : `0Yes\n";
          goto LAB_00492ba9;
        }
        break;
      }
    }
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x3c); piVar4 != *(int **)(iVar3 + 0x40); piVar4 = piVar4 + 1) {
      if (*(int *)(*(int *)(*piVar4 + 8) + 4) == 10) {
        uVar8 = 0x10;
        pcVar7 = "`7J/D   : `$Yes\n";
        goto LAB_00492ba9;
      }
    }
    uVar8 = 0xf;
    pcVar7 = "`7J/D   : `8No\n";
LAB_00492ba9:
    FUN_00403640(param_1,pcVar7,uVar8);
    iVar3 = FUN_0050bf30(*(void **)(DAT_0065b5cc + 0xd0));
    if (iVar3 < 4) {
      uVar8 = 9;
      pcVar7 = "`0nominal";
    }
    else if (iVar3 < 0x15) {
      uVar8 = 0xc;
      pcVar7 = "`3light dmg.";
    }
    else if (iVar3 < 0x33) {
      uVar8 = 0xb;
      pcVar7 = "`$med. dmg.";
    }
    else if (iVar3 < 0x4c) {
      uVar8 = 0xc;
      pcVar7 = "`^heavy dmg.";
    }
    else {
      uVar8 = 10;
      pcVar7 = "`@CRITICAL";
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,pcVar7,uVar8);
    local_8 = 6;
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Damage: %s\n");
    local_8._0_1_ = 7;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    local_8._0_1_ = 6;
    if (0xf < local_30) {
      pvVar6 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_0050d210(*(void **)(DAT_0065b5cc + 0xd0),'\0');
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Status: %s\n");
    local_8 = 8;
    puVar5 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar5,puVar2[4]);
    if (0xf < local_30) {
      pvVar6 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00492db0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba2f1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if ((*(int *)((int)this + 0x10c) == 2) && (*(int *)((int)this + 0x114) != -1)) {
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Cargo Slot #%d\n");
    local_8 = 1;
    puVar3 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar3 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar3,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar4 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar4 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                *(int *)((int)this + 0x114) * 4) == 0) {
      puVar2 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"`7Pod           : `8no `7(`$%dc`7)\n");
      local_8 = 7;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(param_1,puVar3,puVar2[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar4 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar4 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      FUN_00403640(param_1,"`7Temp. Control : `8n/a\n",0x18);
      uVar6 = 0x18;
      pcVar5 = "`7Shielded      : `8n/a\n";
    }
    else {
      FUN_00403640(param_1,"`7Pod           : `%yes\n",0x18);
      FUN_00403640(param_1,"`7Temp. Control : ",0x12);
      if (*(char *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                            *(int *)((int)this + 0x114) * 4) + 1) == '\0') {
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`8no `7(`$%dc`7)\n");
        local_8 = 2;
        puVar3 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar3 = (undefined4 *)*puVar2;
        }
        FUN_00403640(param_1,puVar3,puVar2[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar4 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar4 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar4);
        }
      }
      else {
        FUN_00403640(param_1,"`%yes\n",6);
      }
      FUN_00403640(param_1,"`7Shielded      : ",0x12);
      if (*(char *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                            *(int *)((int)this + 0x114) * 4) + 2) == '\0') {
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`8no `7(`$%dc`7)\n");
        local_8 = 3;
        puVar3 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar3 = (undefined4 *)*puVar2;
        }
        FUN_00403640(param_1,puVar3,puVar2[4]);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar4 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar4 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar4);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      else {
        FUN_00403640(param_1,"`%yes\n",6);
      }
      FUN_00507060(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*(int *)((int)this + 0x114));
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Sell Value    : `$%dc\n");
      local_8 = 4;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(param_1,puVar3,puVar2[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar4 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar4 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Contents: \n");
      local_8 = 5;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(param_1,puVar3,puVar2[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar4 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar4 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0xc +
                               *(int *)((int)this + 0x114) * 4) + 4);
      if (-1 < iVar1) {
        FUN_004a84a0(iVar1);
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%%d`7x `%%%s\n");
        local_8 = 6;
        puVar3 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar3 = (undefined4 *)*puVar2;
        }
        FUN_00403640(param_1,puVar3,puVar2[4]);
        if (0xf < local_18) {
          pvVar4 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar4 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar4);
        }
        goto LAB_00493273;
      }
      uVar6 = 6;
      pcVar5 = "`8n/a\n";
    }
    FUN_00403640(param_1,pcVar5,uVar6);
  }
LAB_00493273:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004932c0(void *this,undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  byte *pbVar10;
  char *pcVar11;
  void *pvVar12;
  void **ppvVar13;
  byte *pbVar14;
  int *piVar15;
  float fVar16;
  char *pcVar17;
  int *local_50;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005ba4c9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  local_50 = (int *)0x0;
  if ((*(int *)((int)this + 0x10c) != 3) || (iVar7 = *(int *)((int)this + 0x118), iVar7 == -1))
  goto LAB_004947e2;
  if (*(char *)((int)this + 0x109) == '\0') {
    local_50 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398)
                                 + 0x58) + iVar7 * 4);
    piVar15 = (int *)*local_50;
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cat. : `%%%s\n");
    local_8 = 5;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Type : `%%%s\n");
    local_8 = 6;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manu.: `%%%s\n");
    local_8 = 7;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    if ((local_50[2] == -1) || (5 < local_50[2])) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7State: %s\n");
      local_8 = 8;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar9 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar9 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_004937c4;
      }
    }
    else {
      puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7State: %s\n");
      local_8 = 9;
      FUN_00403490(param_1,puVar8);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar9 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar9 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_004937c4:
        FUN_005adb3f(pvVar9);
      }
    }
  }
  else {
    piVar15 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x3c) + iVar7 * 4)
    ;
    FUN_004ae3d0((int)piVar15);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cat. : `%%%s\n");
    local_8 = 1;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Type : `%%%s\n");
    local_8 = 2;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manu.: `%%%s\n");
    local_8 = 3;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    FUN_00403640(param_1,"`7Stat.: ",9);
    cVar2 = (**(code **)(*piVar15 + 0x14))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar15 + 0x18))();
      if (cVar2 == '\0') {
        pcVar17 = "`0nominal\n";
        uVar6 = 10;
      }
      else {
        pcVar17 = "`^damaged\n";
        uVar6 = 10;
      }
    }
    else {
      uVar6 = 0x11;
      pcVar17 = "`@non-functional\n";
    }
    FUN_00403640(param_1,pcVar17,uVar6);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost : `$%dc\n");
    local_8 = 4;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_004937c4;
    }
  }
  if (piVar15 != (int *)0x0) {
    FUN_00403640(param_1,&DAT_005e75f8,1);
    iVar7 = piVar15[2];
    iVar1 = *(int *)(iVar7 + 4);
    if (iVar1 == 0x11) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Speed     : `!%.0f\n");
      local_8 = 10;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (local_18 < 0x10) goto LAB_00494519;
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
LAB_00493fc5:
      FUN_005adb3f(pvVar12);
    }
    else if (iVar1 == 2) {
      puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Storage   : `!%.0fkw\n");
      local_8 = 0xb;
LAB_0049389e:
      FUN_00403490(param_1,puVar8);
      local_8 = local_8 & 0xffffff00;
      pvVar9 = local_2c[0];
      uVar6 = local_18;
      if (0xf < local_18) {
LAB_004938ba:
        pvVar12 = pvVar9;
        if ((0xfff < uVar6 + 1) &&
           (pvVar12 = *(void **)((int)pvVar9 + -4), 0x1f < (uint)((int)pvVar9 + (-4 - (int)pvVar12))
           )) {
LAB_004938dc:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_00493fc5;
      }
    }
    else {
      if (iVar1 == 5) {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Ammo Slots: `!%.0f\n");
        local_8 = 0xc;
        FUN_00403490(param_1,puVar8);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Reload    : `!%.0fs\n");
        local_8 = 0xd;
        goto LAB_0049389e;
      }
      if (iVar1 == 0xe) {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Sync Time : `!%.0f\n");
        local_8 = 0xe;
        goto LAB_0049389e;
      }
      if (iVar1 == 1) goto LAB_00494519;
      if (iVar1 == 0x10) {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Range     : `!%.0fGm\n");
        local_8 = 0xf;
        FUN_00403490(param_1,puVar8);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Hack Time : `!%.0fs\n");
        local_8 = 0x10;
        goto LAB_0049389e;
      }
      if (iVar1 != 7) {
        if (iVar1 == 3) {
          pbVar14 = (byte *)(iVar7 + 0x98);
          pbVar10 = pbVar14;
          if (0xf < *(uint *)(iVar7 + 0xac)) {
            pbVar10 = *(byte **)pbVar14;
          }
          uVar6 = *(uint *)(iVar7 + 0xa8);
          uVar5 = FUN_004031f0(pbVar10,uVar6,(byte *)"NavMap1",7);
          if ((char)uVar5 == '\0') {
            pbVar10 = pbVar14;
            if (0xf < *(uint *)(iVar7 + 0xac)) {
              pbVar10 = *(byte **)pbVar14;
            }
            uVar5 = FUN_004031f0(pbVar10,uVar6,(byte *)"NavMap2",7);
            if ((char)uVar5 == '\0') {
              if (0xf < *(uint *)(iVar7 + 0xac)) {
                pbVar14 = *(byte **)pbVar14;
              }
              uVar6 = FUN_004031f0(pbVar14,uVar6,(byte *)"NavMap3",7);
              if ((char)uVar6 != '\0') {
                FUN_00403640(param_1,"`7Interface : `%Full Colour\n",0x1c);
              }
            }
            else {
              FUN_00403640(param_1,"`7Interface : `!Blue\n",0x15);
            }
          }
          else {
            FUN_00403640(param_1,"`7Interface : `0Green\n",0x16);
          }
          goto LAB_00494519;
        }
        if (iVar1 != 4) {
          if (iVar1 == 8) {
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Tubes     : `!%.0f\n");
            local_8 = 0x18;
            FUN_00403490(param_1,puVar8);
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
              FUN_005adb3f(pvVar9);
            }
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Spinup Tm.: `!%.0fs\n");
            local_8 = 0x19;
            goto LAB_0049389e;
          }
          if (iVar1 == 0xc) {
            fVar16 = (float)*(int *)(iVar7 + 0xec);
            if (fVar16 < 6.0) {
              if (fVar16 < 5.0) {
                if (fVar16 < 4.0) {
                  if (fVar16 < 3.0) {
                    pcVar17 = "`@V. Bad";
                  }
                  else {
                    pcVar17 = "`^Bad";
                  }
                }
                else {
                  pcVar17 = "`$Medium";
                }
              }
              else {
                pcVar17 = "`0Good";
              }
            }
            else {
              pcVar17 = "`!V. Good";
            }
            std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
            local_8 = 0x1a;
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Accuracy  : %s\n");
            local_8._0_1_ = 0x1b;
            FUN_00403490(param_1,puVar8);
            FUN_00401b20((int *)local_2c);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00401b20((int *)local_44);
            fVar16 = *(float *)(piVar15[2] + 0x108);
            if (fVar16 < 4.0) {
              if (fVar16 < 3.5) {
                if (fVar16 < 3.0) {
                  if (fVar16 < 2.6) {
                    pcVar17 = "`!V. Good";
                  }
                  else {
                    pcVar17 = "`0Good";
                  }
                }
                else {
                  pcVar17 = "`$Medium";
                }
              }
              else {
                pcVar17 = "`^Bad";
              }
            }
            else {
              pcVar17 = "`@V. Bad";
            }
            std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
            local_8 = 0x1c;
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Reload Spd: %s\n");
            local_8._0_1_ = 0x1d;
            FUN_00403490(param_1,puVar8);
            FUN_00401b20((int *)local_2c);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00401b20((int *)local_44);
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Range     : `%%%.0fGm\n");
            local_8 = 0x1e;
            FUN_00403490(param_1,puVar8);
            ppvVar13 = local_2c;
          }
          else {
            if (iVar1 == 0xb) {
              fVar16 = *(float *)(iVar7 + 0x104);
              if (fVar16 < 1.1) {
                if (fVar16 < 0.8) {
                  if (fVar16 < 0.5) {
                    if (fVar16 < 0.2) {
                      pcVar17 = "`@V. Low";
                    }
                    else {
                      pcVar17 = "`^Low";
                    }
                  }
                  else {
                    pcVar17 = "`$Moderate";
                  }
                }
                else {
                  pcVar17 = "`0High";
                }
              }
              else {
                pcVar17 = "`!V. High";
              }
              std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
              local_8 = 0x1f;
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Max. Thrst: %s\n");
              local_8 = CONCAT31(local_8._1_3_,0x20);
            }
            else if (iVar1 == 9) {
              fVar16 = *(float *)(iVar7 + 0x104);
              if (fVar16 < 40.0) {
                if (fVar16 < 30.0) {
                  if (fVar16 < 20.0) {
                    if (fVar16 < 10.0) {
                      pcVar17 = "`@V. Low";
                    }
                    else {
                      pcVar17 = "`^Low";
                    }
                  }
                  else {
                    pcVar17 = "`$Moderate";
                  }
                }
                else {
                  pcVar17 = "`0High";
                }
              }
              else {
                pcVar17 = "`!V. High";
              }
              std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
              local_8 = 0x21;
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Rot. Speed: %s\n");
              local_8 = CONCAT31(local_8._1_3_,0x22);
            }
            else {
              if (iVar1 == 10) {
                fVar16 = *(float *)(iVar7 + 0x104);
                if (fVar16 < 360.0) {
                  if (fVar16 < 300.0) {
                    if (fVar16 < 280.0) {
                      if (fVar16 < 240.0) {
                        pcVar17 = "`@V. Bad";
                      }
                      else {
                        pcVar17 = "`^Bad";
                      }
                    }
                    else {
                      pcVar17 = "`$Medium";
                    }
                  }
                  else {
                    pcVar17 = "`0Good";
                  }
                }
                else {
                  pcVar17 = "`!V. Good";
                }
                std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
                local_8 = 0x23;
                puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Range     : %s\n");
                local_8._0_1_ = 0x24;
                FUN_00403490(param_1,puVar8);
                FUN_00401b20((int *)local_2c);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_00401b20((int *)local_44);
                puVar8 = (undefined4 *)
                         FUN_00591e00((undefined1 *)local_2c,"`7Spinup Tm.: `%%%.0f\n");
                local_8 = 0x25;
                FUN_00403490(param_1,puVar8);
                local_8 = local_8 & 0xffffff00;
                FUN_00401b20((int *)local_2c);
                puVar8 = (undefined4 *)
                         FUN_00591e00((undefined1 *)local_2c,"`7Calc. Time: `%%%.0f\n");
                local_8 = 0x26;
                FUN_00403490(param_1,puVar8);
                ppvVar13 = local_2c;
                goto LAB_00494510;
              }
              if (iVar1 != 0xd) goto LAB_00494519;
              fVar16 = *(float *)(iVar7 + 0x104);
              if (fVar16 < 1.8) {
                if (fVar16 < 1.6) {
                  if (fVar16 < 1.4) {
                    if (fVar16 < 0.0) {
                      pcVar17 = "`@V. Bad";
                    }
                    else {
                      pcVar17 = "`^Bad";
                    }
                  }
                  else {
                    pcVar17 = "`$Medium";
                  }
                }
                else {
                  pcVar17 = "`0Good";
                }
              }
              else {
                pcVar17 = "`!V. Good";
              }
              std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
              local_8 = 0x27;
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Range     : %s\n");
              local_8._0_1_ = 0x28;
              FUN_00403490(param_1,puVar8);
              FUN_00401b20((int *)local_2c);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00401b20((int *)local_44);
              fVar16 = *(float *)(piVar15[2] + 200);
              if (fVar16 < 3.0) {
                if (fVar16 < 2.0) {
                  if (fVar16 < 1.5) {
                    if (fVar16 < 1.0) {
                      pcVar17 = "`@V. Bad";
                    }
                    else {
                      pcVar17 = "`^Bad";
                    }
                  }
                  else {
                    pcVar17 = "`$Medium";
                  }
                }
                else {
                  pcVar17 = "`0Good";
                }
              }
              else {
                pcVar17 = "`!V. Good";
              }
              std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
              local_8 = 0x29;
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Gen. Rate : %s\n");
              local_8 = CONCAT31(local_8._1_3_,0x2a);
            }
            FUN_00403490(param_1,puVar8);
            FUN_00401b20((int *)local_2c);
            ppvVar13 = local_44;
          }
LAB_00494510:
          local_8 = local_8 & 0xffffff00;
          FUN_00401b20((int *)ppvVar13);
          goto LAB_00494519;
        }
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Range     : `!%.0fGm\n");
        local_8 = 0x11;
        FUN_00403490(param_1,puVar8);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        iVar7 = piVar15[2];
        fVar16 = (float)(((*(int *)(iVar7 + 0xec) + 1) / 2) * *(int *)(iVar7 + 0xe8) +
                        *(int *)(iVar7 + 0xf0));
        if (fVar16 < 170.0) {
          if (fVar16 < 135.0) {
            if (fVar16 < 115.0) {
              if (fVar16 < 90.0) {
                pcVar17 = "`@V. High";
              }
              else {
                pcVar17 = "`^High";
              }
            }
            else {
              pcVar17 = "`$Moderate";
            }
          }
          else {
            pcVar17 = "`0Low";
          }
        }
        else {
          pcVar17 = "`!V. Low";
        }
        std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
        local_8 = 0x12;
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Sns. Ghsts: %s\n");
        local_8._0_1_ = 0x13;
        FUN_00403490(param_1,puVar8);
        local_8 = CONCAT31(local_8._1_3_,0x12);
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        local_8 = local_8 & 0xffffff00;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (0xf < local_30) {
          pvVar9 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar9 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        iVar7 = piVar15[2];
        fVar16 = (float)(((*(int *)(iVar7 + 0xf8) + 1) / 2) * *(int *)(iVar7 + 0xf4) +
                        *(int *)(iVar7 + 0xfc));
        if (fVar16 < 31.0) {
          if (fVar16 < 28.0) {
            if (fVar16 < 25.0) {
              if (fVar16 < 21.0) {
                pcVar17 = "`!V. Quick";
              }
              else {
                pcVar17 = "`0Quick";
              }
            }
            else {
              pcVar17 = "`$Moderate";
            }
          }
          else {
            pcVar17 = "`^Slow";
          }
          std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
        }
        else {
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          pcVar17 = "`@V. Slow";
          do {
            pcVar11 = pcVar17;
            pcVar17 = pcVar11 + 1;
          } while (*pcVar11 != '\0');
          FUN_00402690(local_44,&DAT_0060a5ec,(uint)(pcVar11 + -0x60a5ec));
        }
        local_8 = 0x14;
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Analys. Tm: %s\n");
        local_8._0_1_ = 0x15;
        FUN_00403490(param_1,puVar8);
        local_8 = CONCAT31(local_8._1_3_,0x14);
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        local_8 = local_8 & 0xffffff00;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (0xf < local_30) {
          pvVar9 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar9 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        fVar16 = *(float *)(piVar15[2] + 0xe4);
        if (fVar16 < 1.4) {
          if (fVar16 < 1.2) {
            if (fVar16 < 1.0) {
              if (fVar16 < 0.8) {
                pcVar17 = "`@V. Bad";
              }
              else {
                pcVar17 = "`^Bad";
              }
            }
            else {
              pcVar17 = "`$Medium";
            }
          }
          else {
            pcVar17 = "`0Good";
          }
        }
        else {
          pcVar17 = "`!V. Good";
        }
        std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar17);
        local_8 = 0x16;
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Strength  : %s\n");
        local_8._0_1_ = 0x17;
        FUN_00403490(param_1,puVar8);
        local_8 = CONCAT31(local_8._1_3_,0x16);
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004938dc;
          FUN_005adb3f(pvVar9);
        }
        local_8 = local_8 & 0xffffff00;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        pvVar9 = local_44[0];
        uVar6 = local_30;
        if (local_30 < 0x10) goto LAB_00494519;
        goto LAB_004938ba;
      }
    }
LAB_00494519:
    iVar7 = piVar15[2];
    if (0 < *(int *)(iVar7 + 0xd4)) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Emissions : `$%d @ %dhz\n");
      local_8 = 0x2b;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
      iVar7 = piVar15[2];
    }
    if (0 < *(int *)(iVar7 + 0xcc)) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7In Use Em.: `$%d @ %dhz\n");
      local_8 = 0x2c;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
      iVar7 = piVar15[2];
    }
    if (0.0 < *(float *)(iVar7 + 0xc0)) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Power Drn.: `$%.2fkw/s\n");
      local_8 = 0x2d;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
      iVar7 = piVar15[2];
    }
    if (0.0 < *(float *)(iVar7 + 0xbc)) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7In Use Pw.: `$%.2fkw/s\n");
      local_8 = 0x2e;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
      iVar7 = piVar15[2];
    }
    if ((0.0 < *(float *)(iVar7 + 200)) && (*(int *)(iVar7 + 4) == 1)) {
      puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Pwr. Gen. : `$%.2fkw/s\n");
      local_8 = 0x2f;
      FUN_00403490(param_1,puVar8);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
      iVar7 = piVar15[2];
    }
    if (0 < *(int *)(iVar7 + 0x8c)) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Boot Time : `!%ds\n");
      local_8 = 0x30;
      puVar8 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar8 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar8,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
    }
  }
  if ((*(char *)((int)this + 0x109) == '\0') && (local_50 != (int *)0x0)) {
    FUN_00403640(param_1,&DAT_005e75f8,1);
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost : `$%dc\n");
    local_8 = 0x31;
    puVar8 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar8 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar8,puVar4[4]);
    local_8 = local_8 & 0xffffff00;
    FUN_00401b20((int *)local_2c);
    FUN_00403640(param_1,&DAT_005e75f8,1);
    bVar3 = FUN_00522480(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),(int)piVar15);
    if (!bVar3) {
      puVar8 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"`$No free `^%s`$ slot for module.\n\n");
      local_8 = 0x32;
      FUN_00403490(param_1,puVar8);
      local_8 = local_8 & 0xffffff00;
      FUN_00401b20((int *)local_2c);
    }
    if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < local_50[1]) {
      FUN_00403640(param_1,"`$Cannot afford this module.",0x1c);
    }
  }
LAB_004947e2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
