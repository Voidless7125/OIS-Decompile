#include "../ois_server.exe.h"


void __thiscall FUN_0043c080(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  byte *in_stack_ffffff8c;
  uint uVar8;
  int local_50;
  int local_48;
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
  
  puStack_c = &LAB_005b34f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  uVar8 = *(uint *)this;
  if (uVar8 == 0xffffffff) {
    FUN_00402690(&local_44,"`7Tasks, contracts and jobs you\'ve taken on can be selected above.",
                 0x42);
  }
  else {
    if (2999 < (int)uVar8) {
      iVar2 = FUN_00412490();
      iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + -12000 + uVar8 * 4);
      FUN_00403640(&local_44,&DAT_005e6758,2);
      pcVar3 = (char *)(iVar2 + 0x18);
      if (0xf < *(uint *)(iVar2 + 0x2c)) {
        pcVar3 = *(char **)(iVar2 + 0x18);
      }
      uVar8 = *(uint *)(iVar2 + 0x28);
      goto LAB_0043cceb;
    }
    if ((int)uVar8 < 2000) {
      if ((int)uVar8 < 1000) {
        if ((uint)(*(int *)((int)DAT_0065b5cc + 0x140) - *(int *)((int)DAT_0065b5cc + 0x13c) >> 2)
            <= uVar8) {
          *(undefined4 *)this = 0xffffffff;
          param_1[4] = 0;
          param_1[5] = 0xf;
          *(undefined1 *)param_1 = 0;
          FUN_00402690(param_1,&PTR_005ce008,0);
          if (uStack_30 < 0x10) goto LAB_0043cd0f;
          pvVar6 = local_44;
          if ((0xfff < uStack_30 + 1) &&
             (pvVar6 = *(void **)((int)local_44 + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_44 + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
          goto LAB_0043c1a6;
        }
        iVar2 = *(int *)(*(int *)((int)DAT_0065b5cc + 0x13c) + uVar8 * 4);
        FUN_004024e0(&stack0xffffff8c,(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x48));
        local_8._0_1_ = 0xc;
        pvVar6 = (void *)FUN_00412490();
        local_8._0_1_ = 0;
        FUN_004a0d10(pvVar6,in_stack_ffffff8c);
        FUN_00403640(&local_44,"`!CARGO CONTRACT\n\n",0x12);
        local_48 = 0;
        local_50 = 0;
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Difficulty: %s\n\n");
        local_8._0_1_ = 0xd;
        FUN_00403490(&local_44,puVar5);
        local_8._0_1_ = 0;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
          FUN_005adb3f(pvVar6);
        }
        iVar7 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
        if ((iVar7 == 2) || (iVar7 == 1)) {
          FUN_004024e0(&stack0xffffff8c,(undefined4 *)(iVar2 + 0x20));
          local_48 = FUN_004a6de0(in_stack_ffffff8c);
          if (local_48 == DAT_0065b3d4) {
            FUN_00403640(&local_44,"`7Deliver to `!here\n",0x14);
          }
          else {
            puVar5 = (undefined4 *)
                     FUN_00591e00((undefined1 *)local_2c,"`7Deliver to `!%s`%% in `!%s\n");
            local_8._0_1_ = 0xe;
            FUN_00403490(&local_44,puVar5);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pvVar6 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
              FUN_005adb3f(pvVar6);
            }
          }
        }
        iVar7 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
        if ((iVar7 == 2) || (iVar7 == 0)) {
          FUN_004024e0(&stack0xffffff8c,(undefined4 *)(iVar2 + 0x38));
          local_50 = FUN_004a6de0(in_stack_ffffff8c);
          if (local_50 == DAT_0065b3d4) {
            FUN_00403640(&local_44,"`7From `%here\n",0xe);
          }
          else {
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7From `%%%s`7 in `%%%s\n");
            local_8._0_1_ = 0xf;
            FUN_00403490(&local_44,puVar5);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pvVar6 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
              FUN_005adb3f(pvVar6);
            }
          }
        }
        if (0.0 < *(float *)(iVar2 + 0x1c)) {
          puVar5 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,"`7Time limit : `%%%.0f hours\n");
          local_8._0_1_ = 0x10;
          FUN_00403490(&local_44,puVar5);
          local_8._0_1_ = 0;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
            FUN_005adb3f(pvVar6);
          }
          FUN_00482750(iVar2);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Hours Left : `%%%d hours\n")
          ;
          local_8._0_1_ = 0x11;
          FUN_00403490(&local_44,puVar5);
          local_8._0_1_ = 0;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
            FUN_005adb3f(pvVar6);
          }
        }
        FUN_00403640(&local_44,&DAT_005e75f8,1);
        if (*(int *)(*(int *)(iVar2 + 0x58) + 0x2c) < 1) {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Payment  : `80c\n");
          local_8._0_1_ = 0x13;
        }
        else {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Payment  : `$%dc\n");
          local_8._0_1_ = 0x12;
        }
        FUN_00403490(&local_44,puVar5);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
          FUN_005adb3f(pvVar6);
        }
        FUN_00403640(&local_44,&DAT_005e75f8,1);
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Client: `%%%s\n");
        local_8._0_1_ = 0x14;
        FUN_00403490(&local_44,puVar5);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
          FUN_005adb3f(pvVar6);
        }
        FUN_00403640(&local_44,&DAT_005e75f8,1);
        FUN_00403640(&local_44,"`7Cargo Details\n",0x10);
        FUN_004024e0(&stack0xffffff8c,*(undefined4 **)(iVar2 + 0x58));
        iVar7 = FUN_004a8380(in_stack_ffffff8c);
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7%s: ");
        local_8._0_1_ = 0x15;
        FUN_00403490(&local_44,puVar5);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0043c4b0;
          FUN_005adb3f(pvVar6);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        iVar7 = FUN_00507270(*(void **)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x1f8),
                             *(int *)(iVar7 + 0x5c));
        if (iVar7 < *(int *)(*(int *)(iVar2 + 0x58) + 0x18)) {
          uVar8 = 5;
          pcVar3 = "`@no\n";
        }
        else {
          uVar8 = 6;
          pcVar3 = "`0yes\n";
        }
        FUN_00403640(&local_44,pcVar3,uVar8);
        FUN_00403640(&local_44,"`7Jump : ",9);
        iVar2 = *(int *)(*(int *)(iVar2 + 0x54) + 0x18);
        if ((iVar2 == 1) || (iVar2 == 2)) {
          if (*(int *)(local_48 + 0x24) == *(int *)((int)DAT_0065b5cc + 0xd8)) {
            pcVar3 = "`0no\n";
            uVar8 = 5;
          }
          else {
            pcVar3 = "`$yes\n";
            uVar8 = 6;
          }
        }
        else if (*(int *)(local_50 + 0x24) == *(int *)((int)DAT_0065b5cc + 0xd8)) {
          uVar8 = 5;
          pcVar3 = "`0no\n";
        }
        else {
          uVar8 = 6;
          pcVar3 = "`$yes\n";
        }
      }
      else {
        if (*(int *)((int)DAT_0065b5cc + 0x128) != 0) {
          FUN_004024e0(&stack0xffffff8c,*(undefined4 **)(*(int *)((int)DAT_0065b5cc + 0x128) + 0xc))
          ;
          FUN_004a6de0(in_stack_ffffff8c);
          FUN_004024e0(&stack0xffffff8c,
                       (undefined4 *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0x128) + 0xc) + 0x18));
          iVar2 = FUN_004a6de0(in_stack_ffffff8c);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Name  : `7%s\n");
          local_8._0_1_ = 7;
          FUN_00403490(&local_44,puVar5);
          local_8._0_1_ = 0;
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
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Origin: `7%s\n");
          local_8._0_1_ = 8;
          FUN_00403490(&local_44,puVar5);
          local_8._0_1_ = 0;
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
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Dest. : `7%s\n");
          local_8._0_1_ = 9;
          FUN_00403490(&local_44,puVar5);
          local_8._0_1_ = 0;
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
          if (*(int *)(iVar2 + 0x24) == *(int *)((int)DAT_0065b5cc + 0xd8)) {
            FUN_00403640(&local_44,"`%Sector: `#[this sector]\n",0x1a);
          }
          else {
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Sector: `!%s\n");
            local_8._0_1_ = 10;
            FUN_00403490(&local_44,puVar5);
            local_8._0_1_ = 0;
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
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Fare  : `$%dc");
          local_8._0_1_ = 0xb;
          FUN_00403490(&local_44,puVar5);
          goto LAB_0043c486;
        }
        pcVar3 = 
        "`!*SPECIAL* Internal systems indicate passenger cabin is marked as taken. `%(not booked through AutoTravel)\n"
        ;
        uVar8 = 0x6c;
      }
LAB_0043cceb:
      FUN_00403640(&local_44,pcVar3,uVar8);
    }
    else {
      if ((uint)(*(int *)((int)DAT_0065b5cc + 0x134) - *(int *)((int)DAT_0065b5cc + 0x130) >> 2) <=
          uVar8 - 2000) {
        *(undefined4 *)this = 0xffffffff;
        param_1[4] = 0;
        param_1[5] = 0xf;
        *(undefined1 *)param_1 = 0;
        FUN_00402690(param_1,&PTR_005ce008,0);
        if (uStack_30 < 0x10) goto LAB_0043cd0f;
        pvVar6 = local_44;
        if ((0xfff < uStack_30 + 1) &&
           (pvVar6 = *(void **)((int)local_44 + -4),
           0x1f < (uint)((int)local_44 + (-4 - (int)*(void **)((int)local_44 + -4))))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_0043c1a6:
        FUN_005adb3f(pvVar6);
        goto LAB_0043cd0f;
      }
      iVar2 = *(int *)(*(int *)((int)DAT_0065b5cc + 0x130) + -8000 + uVar8 * 4);
      FUN_004024e0(&stack0xffffff8c,(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x24));
      FUN_004a80d0(in_stack_ffffff8c);
      FUN_004a7280(DAT_0065b5cc,*(int *)(*(int *)(iVar2 + 0x4c) + 0x18));
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Target: `@%s\n");
      local_8._0_1_ = 1;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
      local_8._0_1_ = 0;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Ship  : `$%s\n");
      local_8._0_1_ = 2;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
      local_8._0_1_ = 0;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Rego  : `!%s\n");
      local_8._0_1_ = 3;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
      local_8._0_1_ = 0;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Class : `7%s\n");
      local_8._0_1_ = 4;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
      local_8._0_1_ = 0;
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
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Locat.: `7%s\n");
      local_8._0_1_ = 5;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
      local_8 = (uint)local_8._1_3_ << 8;
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
      iVar2 = *(int *)(*(int *)(iVar2 + 0x4c) + 0x1c);
      if (iVar2 == 0) {
        uVar8 = 0x14;
        pcVar3 = "`%Threat: `0Minimal\n";
LAB_0043c451:
        FUN_00403640(&local_44,pcVar3,uVar8);
      }
      else {
        if (iVar2 == 1) {
          pcVar3 = "`%Threat: `$Possible\n";
          uVar8 = 0x15;
          goto LAB_0043c451;
        }
        if (iVar2 == 2) {
          pcVar3 = "`%Threat: `@Dangerous\n";
          uVar8 = 0x16;
          goto LAB_0043c451;
        }
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Reward: `$%dc\n");
      local_8._0_1_ = 6;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_44,puVar5,puVar4[4]);
LAB_0043c486:
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_0043c4b0:
          local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
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
LAB_0043cd0f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0043cd30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = *param_3;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  uVar3 = param_3[4];
  param_2[1] = param_3[1];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_3 + 5);
  param_3[5] = 0;
  param_3[6] = 0xf;
  *(undefined1 *)(param_3 + 1) = 0;
  param_2[7] = param_3[7];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_2[8] = param_3[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  param_3[0xc] = 0;
  param_3[0xd] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uVar1 = param_3[0xf];
  uVar2 = param_3[0x10];
  uVar3 = param_3[0x11];
  param_2[0xe] = param_3[0xe];
  param_2[0xf] = uVar1;
  param_2[0x10] = uVar2;
  param_2[0x11] = uVar3;
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_3 + 0x12);
  param_3[0x12] = 0;
  param_3[0x13] = 0xf;
  *(undefined1 *)(param_3 + 0xe) = 0;
  param_2[0x14] = param_3[0x14];
  param_2[0x15] = param_3[0x15];
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_3 + 0x16);
  *(undefined1 *)((int)param_2 + 0x5a) = *(undefined1 *)((int)param_3 + 0x5a);
  *(undefined2 *)((int)param_2 + 0x5b) = *(undefined2 *)((int)param_3 + 0x5b);
  *(undefined1 *)((int)param_2 + 0x5d) = *(undefined1 *)((int)param_3 + 0x5d);
  *(undefined1 *)((int)param_2 + 0x5e) = *(undefined1 *)((int)param_3 + 0x5e);
  return;
}


int __thiscall FUN_0043ce10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  undefined4 *puVar9;
  int extraout_EDX_00;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = ((int)param_1 - *(int *)this) / 0x60;
  iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x60;
  if (iVar2 == 0x2aaaaaa) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar7 = iVar2 + 1;
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0x60;
  uVar3 = uVar7;
  if ((uVar4 <= 0x2aaaaaa - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar7)) {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 * 0x60;
  if (uVar3 < 0x2aaaaab) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_005adb0f(uVar7);
      }
      goto LAB_0043ceed;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  uVar4 = uVar7 + 0x23;
  if (uVar4 <= uVar7) {
    uVar4 = 0xffffffff;
  }
  iVar5 = FUN_005adb0f(uVar4);
  if (iVar5 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  puVar6 = (undefined4 *)(iVar5 + 0x23U & 0xffffffe0);
  puVar6[-1] = iVar5;
LAB_0043ceed:
  iVar5 = iVar1 * 0x60;
  FUN_0043cd30(iVar5,puVar6 + iVar1 * 0x18,param_2);
  puVar10 = *(undefined4 **)((int)this + 4);
  puVar11 = *(undefined4 **)this;
  puVar9 = puVar6;
  uVar8 = extraout_ECX;
  if (param_1 == puVar10) {
    for (; puVar11 != puVar10; puVar11 = puVar11 + 0x18) {
      FUN_0043cd30(uVar8,puVar9,puVar11);
      puVar9 = (undefined4 *)(extraout_EDX + 0x60);
      uVar8 = extraout_ECX_00;
    }
  }
  else {
    if (puVar11 != param_1) {
      do {
        FUN_0043cd30(uVar8,puVar9,puVar11);
        puVar11 = puVar11 + 0x18;
        uVar8 = extraout_ECX_01;
        puVar9 = (undefined4 *)(extraout_EDX_00 + 0x60);
      } while (puVar11 != param_1);
      puVar10 = *(undefined4 **)((int)this + 4);
    }
    if (param_1 != puVar10) {
      puVar11 = param_1;
      do {
        FUN_0043cd30(uVar8,(undefined4 *)
                           ((int)(puVar6 + iVar1 * 0x18) + (0x60 - (int)param_1) + (int)puVar11),
                     puVar11);
        puVar11 = puVar11 + 0x18;
        uVar8 = extraout_ECX_02;
      } while (puVar11 != puVar10);
    }
  }
  FUN_0043cfb0(this,(int)puVar6,iVar2 + 1,uVar3);
  return *(int *)this + iVar5;
}


void __thiscall FUN_0043cfb0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((int)this + 4);
    if (pvVar1 != pvVar2) {
      do {
        FUN_0043bfa0((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0x60);
      } while (pvVar1 != pvVar2);
      pvVar1 = *(void **)this;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x60) * 0x60)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2 * 0x60 + param_1;
  *(int *)((int)this + 8) = param_3 * 0x60 + param_1;
  return;
}


void FUN_0043d050(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    FUN_0043bfa0(param_1);
  }
  return;
}


void FUN_0043d0c0(int param_1)

{
  if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
    FUN_0041c620(0x70,0);
    return;
  }
  FUN_0050b6f0(param_1);
  return;
}


void FUN_0043d120(int param_1)

{
  if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
    FUN_0041c620(0x71,0);
    return;
  }
  FUN_0050ba60(param_1);
  return;
}


void FUN_0043d180(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
    FUN_0041c620(0x73,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0xfc) + -1;
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0xfc) = iVar1;
  return;
}


void FUN_0043d1e0(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
    if (DAT_0065c2c8 == 0) {
      DAT_0065c2c8 = FUN_005adb0f(1);
    }
    FUN_0041c620(0x72,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xfc) + 1;
  if (3 < iVar1) {
    iVar1 = 3;
  }
  *(int *)(param_1 + 0xfc) = iVar1;
  return;
}


uint FUN_0043d250(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0x1c) || (param_1 == 0x25)) || (param_1 == 0x92)) {
    if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      uVar1 = FUN_0041c620(0x71,0);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    uVar1 = FUN_0050ba60(*(int *)(DAT_0065b5cc + 0xd0));
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  if (((param_1 != 0x1d) && (param_1 != 0x2b)) && (param_1 != 0x8e)) {
    if (((param_1 != 0x1a) && (param_1 != 0x27)) && (param_1 != 0x7c)) {
      if (((param_1 != 0x1b) && (param_1 != 0x29)) && (param_1 != 0x7f)) {
        return param_1 & 0xffffff00;
      }
      uVar1 = FUN_0043d1e0(*(int *)(DAT_0065b5cc + 0xd0));
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    uVar1 = FUN_0043d180(*(int *)(DAT_0065b5cc + 0xd0));
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  uVar1 = FUN_0043d0c0(*(int *)(DAT_0065b5cc + 0xd0));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


void __fastcall FUN_0043d350(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3550;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (0xf < *(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined1 **)(param_1 + 0x24);
  }
  *puVar1 = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`3  Sync: %s`!@`3%s\n");
  local_8 = 0;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640((void *)(param_1 + 0x24),puVar3,puVar2[4]);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar4 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar4 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3    on: `!%s\n");
  local_8 = 1;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640((void *)(param_1 + 0x24),puVar3,puVar2[4]);
  local_8 = 0xffffffff;
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
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00591e00((undefined1 *)local_44,"%02d:%02d %d %s %da");
  local_8 = 2;
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3   Now: `!%s\n");
  local_8._0_1_ = 3;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640((void *)(param_1 + 0x24),puVar3,puVar2[4]);
  local_8 = CONCAT31(local_8._1_3_,2);
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
  local_8 = 0xffffffff;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pvVar4 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar4 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00403640((void *)(param_1 + 0x24),&DAT_005e75f8,1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3Credit: `%c%d`$c\n");
  local_8 = 4;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640((void *)(param_1 + 0x24),puVar3,puVar2[4]);
  local_8 = 0xffffffff;
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
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`3Acc No: `!%d\n");
  local_8 = 5;
  puVar3 = puVar2;
  if (0xf < (uint)puVar2[5]) {
    puVar3 = (undefined4 *)*puVar2;
  }
  FUN_00403640((void *)(param_1 + 0x24),puVar3,puVar2[4]);
  if (0xf < local_48) {
    pvVar4 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar4 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0043d730(int *param_1)

{
  FUN_00591070("DETAIL","Tablet interface key hit");
  (**(code **)(*param_1 + 4))(0);
  return;
}


undefined4 * __thiscall
FUN_0043d760(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return this;
}


int __fastcall FUN_0043d780(int param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b35e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  local_8 = 7;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 99;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x43;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  uVar1 = FUN_0047d950();
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __fastcall FUN_0043d910(undefined1 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b367f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  param_1[0x1c] = 0;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  cocos2d::Size::Size((Size *)(param_1 + 0x3c),0.0,0.0);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xf;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xf;
  param_1[0x5c] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xf;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xf;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xf;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xf;
  param_1[0xc0] = 0;
  local_8 = 7;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  uVar1 = FUN_0047d950();
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  _local_8 = CONCAT31(uStack_7,8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  uVar1 = FUN_0047d950();
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  ExceptionList = local_10;
  return param_1;
}


undefined1 * __fastcall FUN_0043da90(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}


undefined4 * __thiscall
FUN_0043dab0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  return this;
}


void __fastcall FUN_0043daf0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pvVar1 = *(void **)(param_1 + 8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x1c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


undefined4 * __fastcall FUN_0043db40(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[0x13] = 0;
  return param_1;
}


undefined2 * __fastcall FUN_0043db80(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}


void * __thiscall FUN_0043dc00(void *this,void *param_1)

{
  void *pvVar1;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b36b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004024e0(this,&param_1);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004024e0((void *)((int)this + 0x18),&stack0x0000001c);
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar1 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      pvVar1 = *(void **)((int)in_stack_0000001c + -4);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


int __fastcall FUN_0043dce0(byte *param_1,int param_2)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_2 - (int)param_1;
  do {
    bVar1 = param_1[iVar3];
    if (bVar1 == 0) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = (uint)(char)bVar1;
    if (in_EAX != *param_1) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 0x2000);
  return (uint)(uint3)((char)bVar1 >> 7) << 8;
}


undefined4 * __thiscall FUN_0043dd10(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3713;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined1 *)((int)this + 0x18) = 0;
  bVar3 = true;
  local_8 = 1;
  bVar4 = true;
  iVar6 = 0;
  do {
    pvVar5 = (void *)((int)this + 0x18);
    bVar1 = *(byte *)(iVar6 + param_1);
    if (bVar1 == 0) {
      ExceptionList = local_10;
      return this;
    }
    if ((iVar6 == 0) && (bVar1 == 0x23)) {
      ExceptionList = local_10;
      return this;
    }
    if (bVar1 == 10) {
      ExceptionList = local_10;
      return this;
    }
    if (bVar3) {
      if (bVar1 == 0x3d) {
        bVar4 = false;
        bVar3 = false;
      }
      else if ((((0x40 < bVar1) && (bVar1 < 0x5b)) || ((0x60 < bVar1 && (bVar1 < 0x7b)))) ||
              ((bVar1 == 0x5f || (bVar1 == 0x2d)))) {
        uVar2 = *(uint *)((int)this + 0x10);
        pvVar5 = this;
        if (*(uint *)((int)this + 0x14) == uVar2) goto LAB_0043de55;
        *(uint *)((int)this + 0x10) = uVar2 + 1;
        if (0xf < *(uint *)((int)this + 0x14)) {
          pvVar5 = *(void **)this;
        }
        *(byte *)((int)pvVar5 + uVar2) = bVar1;
        *(undefined1 *)((int)pvVar5 + uVar2 + 1) = 0;
        bVar3 = bVar4;
      }
    }
    else {
      uVar2 = *(uint *)((int)this + 0x28);
      if (*(uint *)((int)this + 0x2c) == uVar2) {
LAB_0043de55:
        FUN_0047f0e0(pvVar5);
        bVar3 = bVar4;
      }
      else {
        *(uint *)((int)this + 0x28) = uVar2 + 1;
        if (0xf < *(uint *)((int)this + 0x2c)) {
          pvVar5 = *(void **)((int)this + 0x18);
        }
        *(byte *)((int)pvVar5 + uVar2) = bVar1;
        *(undefined1 *)((int)pvVar5 + uVar2 + 1) = 0;
        bVar3 = bVar4;
      }
    }
    iVar6 = iVar6 + 1;
    if (0x1fff < iVar6) {
      ExceptionList = local_10;
      return this;
    }
  } while( true );
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x0043e351)
// WARNING: Removing unreachable block (ram,0x0043e360)
// WARNING: Removing unreachable block (ram,0x0043e377)
// WARNING: Removing unreachable block (ram,0x0043e37b)
// WARNING: Removing unreachable block (ram,0x0043e383)
// WARNING: Removing unreachable block (ram,0x0043e38b)
// WARNING: Removing unreachable block (ram,0x0043e391)
// WARNING: Removing unreachable block (ram,0x0043e396)
// WARNING: Removing unreachable block (ram,0x0043e39d)
// WARNING: Removing unreachable block (ram,0x0043e3a7)
// WARNING: Removing unreachable block (ram,0x0043e3b9)
// WARNING: Removing unreachable block (ram,0x0043e3d2)
// WARNING: Removing unreachable block (ram,0x0043e3fa)
// WARNING: Removing unreachable block (ram,0x0043e401)
// WARNING: Removing unreachable block (ram,0x0043e3ab)
// WARNING: Removing unreachable block (ram,0x0043e3af)
// WARNING: Removing unreachable block (ram,0x0043e40d)
// WARNING: Removing unreachable block (ram,0x0043e41a)
// WARNING: Removing unreachable block (ram,0x0043e4d5)
// WARNING: Removing unreachable block (ram,0x0043e300)
// WARNING: Removing unreachable block (ram,0x0043e31d)
// WARNING: Removing unreachable block (ram,0x0043e426)
// WARNING: Removing unreachable block (ram,0x0043e465)
// WARNING: Removing unreachable block (ram,0x0043e486)
// WARNING: Removing unreachable block (ram,0x0043e499)
// WARNING: Removing unreachable block (ram,0x0043e305)

void __thiscall FUN_0043de90(void *this,char param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void **ppvVar5;
  FileUtils *pFVar6;
  byte *pbVar7;
  void *pvVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  byte ****ppppbVar11;
  byte *pbVar12;
  uint in_stack_ffffdf34;
  undefined4 *puVar13;
  void *local_2088 [4];
  undefined4 local_2078;
  uint local_2074;
  byte ***local_2070 [4];
  undefined4 local_2060;
  uint local_205c;
  void *local_2058;
  undefined4 uStack_2054;
  undefined4 uStack_2050;
  undefined4 uStack_204c;
  undefined4 local_2048;
  uint uStack_2044;
  void *local_2040;
  void *pvStack_203c;
  void *pvStack_2038;
  void *pvStack_2034;
  undefined8 local_2030;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b3773;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_2060 = 0;
  local_205c = 0xf;
  local_2070[0] = (byte ***)((uint)local_2070[0] & 0xffffff00);
  pcVar10 = this;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_2070,this,(int)pcVar10 - ((int)this + 1));
  local_14 = 0;
  ppppbVar9 = local_2070;
  if (0xf < local_205c) {
    ppppbVar9 = (byte ****)local_2070[0];
  }
  if ((param_1 == '\0') && (pbVar12 = DAT_0065b524, DAT_0065b524 != DAT_0065b528)) {
    do {
      ppppbVar11 = ppppbVar9;
      do {
        cVar1 = *(char *)ppppbVar11;
        ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
      } while (cVar1 != '\0');
      pbVar7 = pbVar12;
      if (0xf < *(uint *)(pbVar12 + 0x14)) {
        pbVar7 = *(byte **)pbVar12;
      }
      uVar4 = FUN_004031f0(pbVar7,*(uint *)(pbVar12 + 0x10),(byte *)ppppbVar9,
                           (int)ppppbVar11 - ((int)ppppbVar9 + 1));
    } while (((char)uVar4 == '\0') && (pbVar12 = pbVar12 + 0x18, pbVar12 != DAT_0065b528));
    if (pbVar12 != DAT_0065b528) {
      FUN_00591070("ERROR","Tried to include a file more than once: %s");
    }
  }
  local_2048 = 0;
  uStack_2044 = 0xf;
  local_2058 = (void *)((uint)local_2058 & 0xffffff00);
  ppppbVar11 = ppppbVar9;
  do {
    cVar1 = *(char *)ppppbVar11;
    ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
  } while (cVar1 != '\0');
  FUN_00402690(&local_2058,ppppbVar9,(int)ppppbVar11 - ((int)ppppbVar9 + 1));
  pvVar8 = local_2058;
  pbVar12 = DAT_0065b528;
  local_14._0_1_ = 1;
  if (DAT_0065b52c == DAT_0065b528) {
    FUN_004036d0(&DAT_0065b524,(int *)DAT_0065b528,(int *)&local_2058);
    uVar4 = uStack_2044;
  }
  else {
    local_2058 = (void *)((uint)local_2058 & 0xffffff00);
    *(void **)DAT_0065b528 = pvVar8;
    *(undefined4 *)(pbVar12 + 4) = uStack_2054;
    *(undefined4 *)(pbVar12 + 8) = uStack_2050;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_204c;
    *(ulonglong *)(pbVar12 + 0x10) = CONCAT44(uStack_2044,local_2048);
    DAT_0065b528 = DAT_0065b528 + 0x18;
    uVar4 = 0xf;
  }
  local_14 = (uint)local_14._1_3_ << 8;
  if (0xf < uVar4) {
    pvVar8 = local_2058;
    if ((0xfff < uVar4 + 1) &&
       (pvVar8 = *(void **)((int)local_2058 + -4),
       0x1f < (uint)((int)local_2058 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  if (param_1 == '\0') {
    puVar13 = (undefined4 *)(in_stack_ffffdf34 & 0xffffff00);
    ppppbVar11 = ppppbVar9;
    do {
      cVar1 = *(char *)ppppbVar11;
      ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
    } while (cVar1 != '\0');
    FUN_00402690(&stack0xffffdf34,ppppbVar9,(int)ppppbVar11 - ((int)ppppbVar9 + 1));
    ppvVar5 = (void **)FUN_0058ed50(local_2088,puVar13);
    bVar2 = true;
    bVar3 = false;
  }
  else {
    local_2048 = 0;
    uStack_2044 = 0xf;
    local_2058 = (void *)((uint)local_2058 & 0xffffff00);
    ppppbVar11 = ppppbVar9;
    do {
      cVar1 = *(char *)ppppbVar11;
      ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
    } while (cVar1 != '\0');
    FUN_00402690(&local_2058,ppppbVar9,(int)ppppbVar11 - ((int)ppppbVar9 + 1));
    ppvVar5 = &local_2058;
    bVar2 = false;
    bVar3 = true;
  }
  local_2030 = 0;
  local_2040 = *ppvVar5;
  pvStack_203c = ppvVar5[1];
  pvStack_2038 = ppvVar5[2];
  pvStack_2034 = ppvVar5[3];
  local_2030 = *(undefined8 *)(ppvVar5 + 4);
  ppvVar5[4] = (void *)0x0;
  ppvVar5[5] = (void *)0xf;
  *(undefined1 *)ppvVar5 = 0;
  local_14 = 3;
  if (bVar2) {
    if (0xf < local_2074) {
      pvVar8 = local_2088[0];
      if ((0xfff < local_2074 + 1) &&
         (pvVar8 = *(void **)((int)local_2088[0] + -4),
         0x1f < (uint)((int)local_2088[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_2078 = 0;
    local_2074 = 0xf;
    local_2088[0] = (void *)((uint)local_2088[0] & 0xffffff00);
  }
  local_14 = CONCAT31(local_14._1_3_,4);
  if ((bVar3) && (0xf < uStack_2044)) {
    pvVar8 = local_2058;
    if ((0xfff < uStack_2044 + 1) &&
       (pvVar8 = *(void **)((int)local_2058 + -4),
       0x1f < (uint)((int)local_2058 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  pFVar6 = cocos2d::FileUtils::getInstance();
  (**(code **)(*(int *)pFVar6 + 0x1c))();
  FUN_00591070("ERROR","Null data in file \'%s\'");
  bVar3 = cc_assert_script_compatible("Empty or non-existent file attempting to be included.");
  if (!bVar3) {
    cocos2d::log("Assert failed: %s");
  }
  if (0xf < local_2030._4_4_) {
    pvVar8 = local_2040;
    if ((0xfff < local_2030._4_4_ + 1) &&
       (pvVar8 = *(void **)((int)local_2040 + -4),
       0x1f < (uint)((int)local_2040 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  local_2030 = 0xf00000000;
  local_2040 = (void *)((uint)local_2040 & 0xffffff00);
  if (0xf < local_205c) {
    ppppbVar9 = (byte ****)local_2070[0];
    if ((0xfff < local_205c + 1) &&
       (ppppbVar9 = (byte ****)local_2070[0][-1],
       0x1f < (uint)((int)local_2070[0] + (-4 - (int)ppppbVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar9);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __cdecl FUN_0043e4e0(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  byte ****ppppbVar5;
  byte *pbVar6;
  byte *pbVar7;
  basic_string<> *pbVar8;
  byte *pbVar9;
  uint uVar10;
  char *****pppppcVar11;
  void *pvVar12;
  char *****pppppcVar13;
  undefined4 *puVar14;
  undefined4 *****pppppuVar15;
  undefined4 **ppuVar16;
  int iVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *****pppppbVar20;
  undefined4 **ppuVar21;
  int *piVar22;
  basic_string<> *pbVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  int iVar28;
  double dVar29;
  uint in_stack_00000014;
  uint in_stack_00000018;
  basic_string<> *in_stack_fffffecc;
  byte ****local_104 [4];
  uint local_f4;
  uint local_f0;
  undefined4 *local_e8;
  undefined4 *local_e4;
  void *local_e0;
  char ****local_dc;
  char ****local_d8;
  char ****local_d4;
  undefined4 *local_d0;
  int *local_cc;
  int *local_c8;
  int local_c4;
  char ****local_c0;
  void *local_bc;
  uint local_b8;
  int local_b4;
  int *local_b0;
  int *local_ac;
  byte *local_a8;
  int local_a4;
  undefined4 ****local_9c;
  uint local_98;
  byte *local_94;
  int local_90;
  undefined4 *local_8c;
  int *local_88;
  undefined4 *local_84;
  basic_string<> *local_80;
  byte *local_7c;
  char local_75;
  void *local_74 [5];
  uint local_60;
  undefined4 ****local_5c [4];
  int local_4c;
  uint local_48;
  undefined4 ****local_44 [4];
  uint local_34;
  uint local_30;
  char ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b380d;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar22 = (int *)0x0;
  local_b4 = 0;
  local_b0 = (int *)0x0;
  local_ac = (int *)0x0;
  local_8c = (undefined4 *)0x0;
  local_d0 = (undefined4 *)0x0;
  local_88 = (int *)0x0;
  local_cc = (int *)0x0;
  local_c8 = (int *)0x0;
  local_8 = 2;
  uStack_7 = 0;
  bVar4 = true;
  local_7c = (byte *)0x0;
  FUN_00591e00((undefined1 *)local_74,".\\assets\\%s");
  local_8 = 3;
  FUN_004024e0(&stack0xfffffecc,local_74);
  local_bc = (void *)FUN_0058ee00((int *)&local_7c,'\x01',(undefined4 *)in_stack_fffffecc);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (undefined4 ****)((uint)local_5c[0] & 0xffffff00);
  iVar26 = 0;
  _local_8 = CONCAT31(uStack_7,4);
  if (0 < (int)local_7c) {
    do {
      cVar2 = *(char *)(iVar26 + (int)local_bc);
      if (cVar2 == '\0') break;
      if (cVar2 == '\n') {
        if (local_4c == 0) {
          if (bVar4) {
            bVar4 = false;
            goto LAB_0043e674;
          }
LAB_0043e60c:
          if (local_c8 == local_88) {
            FUN_00403840(&local_d0,local_88,local_5c);
            local_88 = local_cc;
          }
          else {
            FUN_004024e0(local_88,local_5c);
            local_cc = local_88 + 6;
            local_88 = local_cc;
          }
        }
        else {
          if (!bVar4) goto LAB_0043e60c;
          if (local_ac == piVar22) {
            FUN_00403840(&local_b4,piVar22,local_5c);
            piVar22 = local_b0;
          }
          else {
            FUN_004024e0(piVar22,local_5c);
            local_b0 = piVar22 + 6;
            piVar22 = local_b0;
          }
        }
        local_4c = 0;
        pppppuVar15 = local_5c;
        if (0xf < local_48) {
          pppppuVar15 = (undefined4 *****)local_5c[0];
        }
        *(undefined1 *)pppppuVar15 = 0;
      }
      else {
        FUN_004034f0(local_5c,cVar2);
      }
LAB_0043e674:
      iVar26 = iVar26 + 1;
    } while (iVar26 < (int)local_7c);
    local_8c = local_d0;
  }
  local_c4 = FUN_005adb0f(0xf0);
  *(undefined4 *)(local_c4 + 0x14) = 0;
  local_d4 = (char ****)(local_c4 + 4);
  *(undefined4 *)(local_c4 + 0x18) = 0xf;
  local_c0 = (char ****)(local_c4 + 0x1c);
  *(char *)local_d4 = '\0';
  local_e4 = (undefined4 *)(local_c4 + 0xd4);
  *(undefined4 *)(local_c4 + 0x2c) = 0;
  *(undefined4 *)(local_c4 + 0x30) = 0xf;
  *(char *)local_c0 = '\0';
  *(undefined4 *)(local_c4 + 0x44) = 0;
  *(undefined4 *)(local_c4 + 0x48) = 0xf;
  *(undefined1 *)(local_c4 + 0x34) = 0;
  *(undefined4 *)(local_c4 + 0x5c) = 0;
  *(undefined4 *)(local_c4 + 0x60) = 0xf;
  *(undefined1 *)(local_c4 + 0x4c) = 0;
  *(undefined4 *)(local_c4 + 100) = 0xbf800000;
  *(undefined4 *)(local_c4 + 0x68) = 0;
  *(undefined4 *)(local_c4 + 0x7c) = 0;
  *(undefined4 *)(local_c4 + 0x80) = 0xf;
  *(undefined1 *)(local_c4 + 0x6c) = 0;
  local_9c = (undefined4 ****)(local_c4 + 0x34);
  *(undefined4 *)(local_c4 + 0x88) = 0;
  *(undefined4 *)(local_c4 + 0x8c) = 0;
  *(undefined4 *)(local_c4 + 0x90) = 0;
  *(undefined4 *)(local_c4 + 0x94) = 0;
  *(undefined4 *)(local_c4 + 0x98) = 0;
  *(undefined4 *)(local_c4 + 0x9c) = 0;
  local_dc = (char ****)(local_c4 + 0x4c);
  local_84 = (undefined4 *)(local_c4 + 0x6c);
  *(undefined4 *)(local_c4 + 0xa0) = 0;
  *(undefined4 *)(local_c4 + 0xa4) = 0;
  *(undefined4 *)(local_c4 + 0xa8) = 0;
  *(undefined4 *)(local_c4 + 0xac) = 0;
  *(undefined4 *)(local_c4 + 0xb0) = 0;
  *(undefined4 *)(local_c4 + 0xb4) = 0;
  local_e0 = (void *)(local_c4 + 0x88);
  *(undefined4 *)(local_c4 + 0xb8) = 0xffffffff;
  *(undefined4 *)(local_c4 + 0xcc) = 0;
  *(undefined4 *)(local_c4 + 0xd0) = 0xf;
  *(undefined1 *)(local_c4 + 0xbc) = 0;
  local_d8 = (char ****)(local_c4 + 0xbc);
  *local_e4 = 0;
  *(undefined4 *)(local_c4 + 0xd8) = 0;
  *(undefined4 *)(local_c4 + 0xdc) = 0;
  local_e8 = (undefined4 *)(local_c4 + 0xe0);
  *local_e8 = 0;
  *(undefined4 *)(local_c4 + 0xe4) = 0;
  *(undefined4 *)(local_c4 + 0xe8) = 0;
  local_98 = ((int)piVar22 - local_b4) / 0x18;
  *(undefined1 *)(local_c4 + 0xec) = 1;
  local_b8 = 0;
  iVar26 = local_b4;
  local_90 = local_c4;
  if (local_98 == 0) {
LAB_0043ee8b:
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ****)((uint)local_44[0] & 0xffffff00);
    local_8 = 9;
    uVar10 = 0;
    uVar24 = ((int)local_88 - (int)local_8c) / 0x18;
    local_98 = uVar24;
    if (uVar24 != 0) {
      do {
        puVar14 = local_8c;
        if (0xf < (uint)local_8c[5]) {
          puVar14 = (undefined4 *)*local_8c;
        }
        FUN_00403640(local_44,puVar14,local_8c[4]);
        if (uVar10 < uVar24 - 1) {
          FUN_00403640(local_44,&DAT_005e75f8,1);
        }
        uVar10 = uVar10 + 1;
        local_8c = local_8c + 6;
      } while (uVar10 < uVar24);
    }
    if ((undefined4 *****)local_9c != local_44) {
      pppppuVar15 = local_44;
      if (0xf < local_30) {
        pppppuVar15 = (undefined4 *****)local_44[0];
      }
      FUN_00402690(local_9c,pppppuVar15,local_34);
    }
    free(local_bc);
    bVar4 = false;
    uVar25 = 0;
    uVar24 = in_stack_00000018;
    ppuVar21 = (undefined4 **)param_1;
    uVar10 = in_stack_00000014;
    if (in_stack_00000014 != 0) {
      do {
        ppuVar16 = &param_1;
        if (0xf < uVar24) {
          ppuVar16 = ppuVar21;
        }
        if (*(char *)((int)ppuVar16 + uVar25) == '_') {
          if (bVar4) {
LAB_0043ef6b:
            ppuVar16 = &param_1;
            if (0xf < uVar24) {
              ppuVar16 = ppuVar21;
            }
            if (*(char *)((int)ppuVar16 + uVar25) == '.') break;
            ppuVar16 = &param_1;
            if (0xf < uVar24) {
              ppuVar16 = ppuVar21;
            }
            FUN_004034f0(local_84,*(undefined1 *)((int)ppuVar16 + uVar25));
            uVar24 = in_stack_00000018;
            ppuVar21 = (undefined4 **)param_1;
            uVar10 = in_stack_00000014;
          }
          else {
            bVar4 = true;
          }
        }
        else if (bVar4) goto LAB_0043ef6b;
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar10);
    }
    puVar27 = local_84;
    puVar14 = local_84;
    if (0xf < (uint)local_84[5]) {
      puVar14 = (undefined4 *)*local_84;
      puVar27 = (undefined4 *)*local_84;
    }
    piVar22 = local_84 + 4;
    if (0xf < (uint)local_84[5]) {
      local_84 = (undefined4 *)*local_84;
    }
    iVar26 = 0;
    iVar28 = (*piVar22 + (int)puVar27) - (int)local_84;
    if ((undefined4 *)(*piVar22 + (int)puVar27) < local_84) {
      iVar28 = 0;
    }
    if (iVar28 != 0) {
      do {
        iVar17 = tolower((int)*(char *)((int)local_84 + iVar26));
        *(char *)((int)puVar14 + iVar26) = (char)iVar17;
        iVar26 = iVar26 + 1;
      } while (iVar26 != iVar28);
    }
    FUN_00591070(&DAT_005cdc70,"Article file: %s, %s");
    if (local_98 != 0) {
      iVar26 = *(int *)(DAT_0065b444 + 0xc);
      piVar22 = *(int **)(iVar26 + 0x6c);
      if (*(int **)(iVar26 + 0x70) == piVar22) {
        FUN_00414080((void *)(iVar26 + 0x68),piVar22,&local_c4);
      }
      else {
        *piVar22 = local_90;
        *(int *)(iVar26 + 0x6c) = *(int *)(iVar26 + 0x6c) + 4;
      }
    }
    if (0xf < local_30) {
      pppppuVar15 = (undefined4 *****)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pppppuVar15 = (undefined4 *****)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pppppuVar15)))) {
LAB_0043f083:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppuVar15);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ****)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_48) {
      pppppuVar15 = (undefined4 *****)local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pppppuVar15 = (undefined4 *****)local_5c[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_5c[0] + (-4 - (int)pppppuVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppuVar15);
    }
    if (0xf < local_60) {
      pvVar12 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar12 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    FUN_004025a0((int *)&local_d0);
    FUN_004025a0(&local_b4);
    if (0xf < in_stack_00000018) {
      puVar14 = param_1;
      if ((0xfff < in_stack_00000018 + 1) &&
         (puVar14 = (undefined4 *)param_1[-1], 0x1f < (uint)((int)param_1 + (-4 - (int)puVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar14);
    }
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0043e870:
  pcVar1 = (char *)(iVar26 + local_b8 * 0x18);
  pcVar18 = pcVar1;
  if (0xf < *(uint *)(iVar26 + 0x14 + local_b8 * 0x18)) {
    pcVar18 = *(char **)pcVar1;
  }
  if (*pcVar18 == '#') goto LAB_0043ee72;
  FUN_004024e0(&stack0xfffffecc,(undefined4 *)pcVar1);
  FUN_00592d70(&local_a8,':',(undefined4 *)in_stack_fffffecc);
  local_8 = 5;
  if (1 < (uint)((local_a4 - (int)local_a8) / 0x18)) {
    local_7c = local_a8;
    pbVar7 = local_a8;
    if (0xf < *(uint *)(local_a8 + 0x14)) {
      local_7c = *(byte **)local_a8;
      pbVar7 = *(byte **)local_a8;
    }
    pbVar9 = local_7c;
    local_94 = local_a8;
    if (0xf < *(uint *)(local_a8 + 0x14)) {
      local_94 = *(byte **)local_a8;
    }
    pbVar23 = (basic_string<> *)0x0;
    pbVar8 = (basic_string<> *)(pbVar7 + *(int *)(local_a8 + 0x10) + -(int)local_94);
    if (pbVar7 + *(int *)(local_a8 + 0x10) < local_94) {
      pbVar8 = (basic_string<> *)0x0;
    }
    local_80 = pbVar8;
    if (pbVar8 != (basic_string<> *)0x0) {
      do {
        iVar26 = tolower((int)(char)local_94[(int)pbVar23]);
        pbVar9[(int)pbVar23] = (byte)iVar26;
        pbVar23 = pbVar23 + 1;
      } while (pbVar23 != pbVar8);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ****)((uint)local_2c[0] & 0xffffff00);
    local_8 = 6;
    local_75 = '\x01';
    local_94 = (byte *)0x1;
    pbVar7 = local_a8;
    if (1 < (uint)((local_a4 - (int)local_a8) / 0x18)) {
      local_7c = (byte *)0x18;
      iVar26 = local_a4;
      do {
        pbVar6 = local_7c;
        pbVar9 = local_7c + (int)pbVar7;
        uVar24 = 0;
        if (*(int *)(pbVar9 + 0x10) != 0) {
          do {
            uVar10 = *(uint *)(pbVar9 + 0x14);
            pbVar19 = pbVar9;
            if (0xf < uVar10) {
              pbVar19 = *(byte **)pbVar9;
            }
            if (pbVar19[uVar24] == 9) {
LAB_0043e9c1:
              if (local_75 == '\0') goto LAB_0043e9c7;
            }
            else {
              pbVar19 = pbVar9;
              if (0xf < uVar10) {
                pbVar19 = *(byte **)pbVar9;
              }
              if (pbVar19[uVar24] == 0x20) goto LAB_0043e9c1;
LAB_0043e9c7:
              local_75 = '\0';
              if (0xf < uVar10) {
                pbVar9 = *(byte **)pbVar9;
              }
              FUN_004034f0(local_2c,pbVar9[uVar24]);
              pbVar7 = local_a8;
            }
            uVar24 = uVar24 + 1;
            pbVar9 = pbVar6 + (int)pbVar7;
            iVar26 = local_a4;
          } while (uVar24 < *(uint *)(pbVar9 + 0x10));
        }
        pbVar9 = local_94;
        if (local_94 < (iVar26 - (int)pbVar7) / 0x18 - 1U) {
          FUN_00403640(local_2c,&DAT_005e96c0,1);
          iVar26 = local_a4;
          pbVar7 = local_a8;
        }
        local_7c = local_7c + 0x18;
        local_94 = (byte *)((int)pbVar9 + 1);
      } while (local_94 < (uint)((iVar26 - (int)pbVar7) / 0x18));
    }
    uVar24 = *(uint *)(pbVar7 + 0x14);
    pbVar9 = pbVar7;
    if (0xf < uVar24) {
      pbVar9 = *(byte **)pbVar7;
    }
    uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"author",6);
    pppppcVar13 = (char *****)local_d4;
    if ((char)uVar10 == '\0') {
      pbVar9 = pbVar7;
      if (0xf < uVar24) {
        pbVar9 = *(byte **)pbVar7;
      }
      uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"publication",0xb);
      pppppcVar13 = (char *****)local_d8;
      if ((char)uVar10 == '\0') {
        pbVar9 = pbVar7;
        if (0xf < uVar24) {
          pbVar9 = *(byte **)pbVar7;
        }
        uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"short",5);
        pppppcVar13 = (char *****)local_c0;
        if ((char)uVar10 == '\0') {
          pbVar9 = pbVar7;
          if (0xf < uVar24) {
            pbVar9 = *(byte **)pbVar7;
          }
          uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"subject",7);
          pppppcVar13 = (char *****)local_dc;
          if ((char)uVar10 != '\0') goto LAB_0043eb1d;
          pbVar9 = pbVar7;
          if (0xf < uVar24) {
            pbVar9 = *(byte **)pbVar7;
          }
          uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"relativetime",0xc);
          if ((char)uVar10 == '\0') {
            pbVar9 = pbVar7;
            if (0xf < uVar24) {
              pbVar9 = *(byte **)pbVar7;
            }
            uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"importance",10);
            if ((char)uVar10 != '\0') {
              FUN_004024e0(local_104,local_2c);
              ppppbVar5 = local_104[0];
              iVar26 = 0;
              do {
                pbVar7 = (&PTR_DAT_005ddb2c)[iVar26];
                pbVar9 = pbVar7;
                do {
                  bVar3 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                } while (bVar3 != 0);
                pppppbVar20 = local_104;
                if (0xf < local_f0) {
                  pppppbVar20 = (byte *****)ppppbVar5;
                }
                uVar24 = FUN_004031f0((byte *)pppppbVar20,local_f4,pbVar7,
                                      (int)pbVar9 - (int)(pbVar7 + 1));
                if ((char)uVar24 != '\0') {
                  if (0xf < local_f0) {
                    pppppbVar20 = (byte *****)ppppbVar5;
                    if ((0xfff < local_f0 + 1) &&
                       (pppppbVar20 = (byte *****)ppppbVar5[-1],
                       (byte *)0x1f < (byte *)((int)ppppbVar5 + (-4 - (int)pppppbVar20))))
                    goto LAB_0043f083;
                    FUN_005adb3f(pppppbVar20);
                  }
                  *(int *)(local_90 + 0x84) = iVar26;
                  goto LAB_0043ee13;
                }
                iVar26 = iVar26 + 1;
              } while (iVar26 < 3);
              if (0xf < local_f0) {
                pppppbVar20 = (byte *****)ppppbVar5;
                if ((0xfff < local_f0 + 1) &&
                   (pppppbVar20 = (byte *****)ppppbVar5[-1],
                   (byte *)0x1f < (byte *)((int)ppppbVar5 + (-4 - (int)pppppbVar20))))
                goto LAB_0043f083;
                FUN_005adb3f(pppppbVar20);
              }
              *(undefined4 *)(local_90 + 0x84) = 0;
              goto LAB_0043ee13;
            }
            pbVar9 = pbVar7;
            if (0xf < uVar24) {
              pbVar9 = *(byte **)pbVar7;
            }
            uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),&DAT_005e9710,4);
            if ((char)uVar10 == '\0') {
              pbVar9 = pbVar7;
              if (0xf < uVar24) {
                pbVar9 = *(byte **)pbVar7;
              }
              uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),&DAT_005e970c,3);
              if ((char)uVar10 == '\0') {
                pbVar9 = pbVar7;
                if (0xf < uVar24) {
                  pbVar9 = *(byte **)pbVar7;
                }
                uVar10 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"setflag",7);
                if ((char)uVar10 == '\0') {
                  pbVar9 = pbVar7;
                  if (0xf < uVar24) {
                    pbVar9 = *(byte **)pbVar7;
                  }
                  uVar24 = FUN_004031f0(pbVar9,*(uint *)(pbVar7 + 0x10),(byte *)"delay",5);
                  if ((char)uVar24 != '\0') {
                    pppppcVar13 = local_2c;
                    if (0xf < local_18) {
                      pppppcVar13 = (char *****)local_2c[0];
                    }
                    dVar29 = atof((char *)pppppcVar13);
                    *(float *)(local_90 + 0x68) = (float)dVar29;
                  }
                }
                else {
                  pvVar12 = (void *)FUN_005adb0f(0x24);
                  local_8 = 8;
                  FUN_004024e0(&stack0xfffffecc,local_2c);
                  local_80 = FUN_004a3a90(pvVar12,0,in_stack_fffffecc);
                  local_8 = 6;
                  puVar14 = (undefined4 *)local_e8[1];
                  if ((undefined4 *)local_e8[2] == puVar14) {
                    FUN_004141e0(local_e8,puVar14,&local_80);
                  }
                  else {
                    *puVar14 = local_80;
                    local_e8[1] = local_e8[1] + 4;
                  }
                }
              }
              else {
                pvVar12 = (void *)FUN_005adb0f(0x40);
                local_8 = 7;
                FUN_004024e0(&stack0xfffffecc,local_2c);
                local_80 = (basic_string<> *)FUN_004a1a40(pvVar12,(undefined4 *)in_stack_fffffecc);
                local_8 = 6;
                piVar22 = (int *)local_e4[1];
                if ((int *)local_e4[2] == piVar22) {
                  FUN_004141e0(local_e4,piVar22,&local_80);
                  *(undefined1 *)(local_90 + 0xec) = 0;
                }
                else {
                  *piVar22 = (int)local_80;
                  local_e4[1] = local_e4[1] + 4;
                  *(undefined1 *)(local_90 + 0xec) = 0;
                }
              }
            }
            else {
              FUN_004024e0(&stack0xfffffecc,local_2c);
              FUN_004b34b0(local_e0,in_stack_fffffecc);
            }
          }
          else {
            pppppcVar13 = local_2c;
            if (0xf < local_18) {
              pppppcVar13 = (char *****)local_2c[0];
            }
            iVar26 = atoi((char *)pppppcVar13);
            *(int *)(local_90 + 0xb8) = iVar26;
          }
          goto LAB_0043ee13;
        }
      }
      if (pppppcVar13 != local_2c) {
        pppppcVar11 = local_2c;
        if (0xf < local_18) {
          pppppcVar11 = (char *****)local_2c[0];
        }
        FUN_00402690(pppppcVar13,pppppcVar11,local_1c);
      }
    }
    else {
LAB_0043eb1d:
      if (pppppcVar13 != local_2c) {
        pppppcVar11 = local_2c;
        if (0xf < local_18) {
          pppppcVar11 = (char *****)local_2c[0];
        }
        FUN_00402690(pppppcVar13,pppppcVar11,local_1c);
      }
    }
LAB_0043ee13:
    local_8 = 5;
    if (0xf < local_18) {
      pppppcVar13 = (char *****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pppppcVar13 = (char *****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppcVar13)))) goto LAB_0043f083;
      FUN_005adb3f(pppppcVar13);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ****)((uint)local_2c[0] & 0xffffff00);
  }
  _local_8 = CONCAT31(uStack_7,4);
  FUN_004025a0((int *)&local_a8);
  iVar26 = local_b4;
LAB_0043ee72:
  local_b8 = local_b8 + 1;
  if (local_98 <= local_b8) goto LAB_0043ee8b;
  goto LAB_0043e870;
}


void __cdecl FUN_0043f180(void *param_1)

{
  undefined4 ****this;
  byte *pbVar1;
  char cVar2;
  undefined4 ***this_00;
  bool bVar3;
  undefined4 ***pppuVar4;
  undefined4 ****ppppuVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 ****ppppuVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  void *pvVar13;
  char *pcVar14;
  int *this_01;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint in_stack_00000018;
  undefined4 *in_stack_fffffefc;
  int local_d4;
  int local_d0;
  char *local_c8;
  int *local_c4;
  int *local_c0;
  undefined4 *local_bc;
  int *local_b8;
  int *local_b4;
  undefined4 ***local_b0;
  void *local_ac;
  uint local_a8;
  byte *local_a4;
  int local_a0;
  undefined4 ***local_98;
  uint local_94;
  char *local_90;
  undefined4 *local_8c;
  int *local_88;
  int local_84;
  byte *local_80;
  char local_79;
  byte *local_78;
  void *local_74 [5];
  uint local_60;
  undefined4 ***local_5c [4];
  int local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b3894;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_01 = (int *)0x0;
  local_90 = (char *)0x0;
  local_c8 = (char *)0x0;
  local_c4 = (int *)0x0;
  local_c0 = (int *)0x0;
  local_8c = (undefined4 *)0x0;
  local_bc = (undefined4 *)0x0;
  local_88 = (int *)0x0;
  local_b8 = (int *)0x0;
  local_b4 = (int *)0x0;
  local_8 = 2;
  uStack_7 = 0;
  bVar3 = true;
  local_78 = (byte *)0x0;
  FUN_00591e00((undefined1 *)local_74,".\\assets\\%s");
  local_8 = 3;
  FUN_004024e0(&stack0xfffffefc,local_74);
  local_ac = (void *)FUN_0058ee00((int *)&local_78,'\x01',in_stack_fffffefc);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
  iVar19 = 0;
  _local_8 = CONCAT31(uStack_7,4);
  if ((int)local_78 < 1) {
    pcVar14 = (char *)0x0;
  }
  else {
    do {
      cVar2 = *(char *)(iVar19 + (int)local_ac);
      if (cVar2 != '\r') {
        if (cVar2 == '\0') break;
        if (cVar2 == '\n') {
          if (local_4c == 0) {
            if (bVar3) {
              bVar3 = false;
              goto LAB_0043f31e;
            }
LAB_0043f2b6:
            if (local_b4 == local_88) {
              FUN_00403840(&local_bc,local_88,local_5c);
              local_88 = local_b8;
            }
            else {
              FUN_004024e0(local_88,local_5c);
              local_b8 = local_88 + 6;
              local_88 = local_b8;
            }
          }
          else {
            if (!bVar3) goto LAB_0043f2b6;
            if (local_c0 == this_01) {
              FUN_00403840(&local_c8,this_01,local_5c);
              this_01 = local_c4;
            }
            else {
              FUN_004024e0(this_01,local_5c);
              local_c4 = this_01 + 6;
              this_01 = local_c4;
            }
          }
          local_4c = 0;
          ppppuVar5 = local_5c;
          if (0xf < local_48) {
            ppppuVar5 = (undefined4 ****)local_5c[0];
          }
          *(undefined1 *)ppppuVar5 = 0;
        }
        else {
          FUN_004034f0(local_5c,cVar2);
        }
      }
LAB_0043f31e:
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_78);
    local_90 = local_c8;
    local_8c = local_bc;
    pcVar14 = local_c8;
  }
  local_b0 = (undefined4 ***)FUN_005adb0f(0x6c);
  local_a8 = 0;
  ppppuVar5 = (undefined4 ****)(local_b0 + 6);
  local_b0[4] = (undefined4 ***)0x0;
  local_b0[5] = (undefined4 ***)0xf;
  *(undefined1 *)local_b0 = 0;
  local_b0[10] = (undefined4 ***)0x0;
  local_b0[0xb] = (undefined4 ***)0xf;
  *(undefined1 *)ppppuVar5 = 0;
  this = (undefined4 ****)(local_b0 + 0x15);
  local_b0[0x10] = (undefined4 ***)0x0;
  local_b0[0x11] = (undefined4 ***)0xf;
  *(undefined1 *)(local_b0 + 0xc) = 0;
  local_b0[0x12] = (undefined4 ***)0x0;
  local_b0[0x13] = (undefined4 ***)0x0;
  local_b0[0x14] = (undefined4 ***)0x0;
  local_b0[0x19] = (undefined4 ***)0x0;
  local_b0[0x1a] = (undefined4 ***)0xf;
  *(undefined1 *)this = 0;
  uVar17 = ((int)this_01 - (int)pcVar14) / 0x18;
  local_98 = local_b0;
  local_94 = uVar17;
  if (uVar17 != 0) {
    do {
      pcVar6 = pcVar14;
      if (0xf < *(uint *)(pcVar14 + 0x14)) {
        pcVar6 = *(char **)pcVar14;
      }
      if (*pcVar6 != '#') {
        FUN_004024e0(&stack0xfffffefc,(undefined4 *)pcVar14);
        FUN_00592d70(&local_a4,':',in_stack_fffffefc);
        local_8 = 5;
        if (1 < (uint)((local_a0 - (int)local_a4) / 0x18)) {
          local_78 = local_a4;
          pbVar15 = local_a4;
          if (0xf < *(uint *)(local_a4 + 0x14)) {
            local_78 = *(byte **)local_a4;
            pbVar15 = *(byte **)local_a4;
          }
          pbVar8 = local_78;
          local_80 = local_a4;
          if (0xf < *(uint *)(local_a4 + 0x14)) {
            local_80 = *(byte **)local_a4;
          }
          iVar19 = (int)(pbVar15 + *(int *)(local_a4 + 0x10)) - (int)local_80;
          iVar16 = 0;
          if (pbVar15 + *(int *)(local_a4 + 0x10) < local_80) {
            iVar19 = 0;
          }
          local_84 = iVar19;
          if (iVar19 != 0) {
            do {
              iVar7 = tolower((int)(char)local_80[iVar16]);
              pbVar8[iVar16] = (byte)iVar7;
              iVar16 = iVar16 + 1;
            } while (iVar16 != iVar19);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
          local_8 = 6;
          local_79 = '\x01';
          local_80 = (byte *)0x1;
          pbVar15 = local_a4;
          if (1 < (uint)((local_a0 - (int)local_a4) / 0x18)) {
            local_78 = (byte *)0x18;
            iVar19 = local_a0;
            do {
              pbVar1 = local_78;
              pbVar8 = local_78 + (int)pbVar15;
              uVar17 = 0;
              if (*(int *)(pbVar8 + 0x10) != 0) {
                do {
                  uVar18 = *(uint *)(pbVar8 + 0x14);
                  pbVar12 = pbVar8;
                  if (0xf < uVar18) {
                    pbVar12 = *(byte **)pbVar8;
                  }
                  if (pbVar12[uVar17] == 9) {
LAB_0043f541:
                    if (local_79 == '\0') goto LAB_0043f547;
                  }
                  else {
                    pbVar12 = pbVar8;
                    if (0xf < uVar18) {
                      pbVar12 = *(byte **)pbVar8;
                    }
                    if (pbVar12[uVar17] == 0x20) goto LAB_0043f541;
LAB_0043f547:
                    local_79 = '\0';
                    if (0xf < uVar18) {
                      pbVar8 = *(byte **)pbVar8;
                    }
                    FUN_004034f0(local_2c,pbVar8[uVar17]);
                    pbVar15 = local_a4;
                  }
                  uVar17 = uVar17 + 1;
                  pbVar8 = pbVar1 + (int)pbVar15;
                  iVar19 = local_a0;
                } while (uVar17 < *(uint *)(pbVar8 + 0x10));
              }
              pbVar8 = local_80;
              if (local_80 < (iVar19 - (int)pbVar15) / 0x18 - 1U) {
                FUN_00403640(local_2c,&DAT_005e96c0,1);
                iVar19 = local_a0;
                pbVar15 = local_a4;
              }
              local_78 = local_78 + 0x18;
              local_80 = (byte *)((int)pbVar8 + 1);
            } while (local_80 < (uint)((iVar19 - (int)pbVar15) / 0x18));
          }
          uVar18 = local_18;
          uVar17 = *(uint *)(pbVar15 + 0x14);
          pbVar8 = pbVar15;
          if (0xf < uVar17) {
            pbVar8 = *(byte **)pbVar15;
          }
          local_80 = pbVar15;
          uVar9 = FUN_004031f0(pbVar8,*(uint *)(pbVar15 + 0x10),(byte *)"subject",7);
          if ((char)uVar9 == '\0') {
            pbVar8 = local_80;
            if (0xf < uVar17) {
              pbVar8 = *(byte **)pbVar15;
            }
            uVar9 = FUN_004031f0(pbVar8,*(uint *)(pbVar15 + 0x10),(byte *)"summary",7);
            if ((char)uVar9 == '\0') {
              pbVar8 = local_80;
              if (0xf < uVar17) {
                pbVar8 = *(byte **)pbVar15;
              }
              uVar17 = FUN_004031f0(pbVar8,*(uint *)(pbVar15 + 0x10),&DAT_005e9718,4);
              if ((char)uVar17 != '\0') {
                FUN_004024e0(&stack0xfffffefc,local_2c);
                FUN_00592d70(&local_d4,',',in_stack_fffffefc);
                local_8 = 7;
                local_78 = (byte *)0x0;
                iVar19 = local_d0 - local_d4 >> 0x1f;
                if ((local_d0 - local_d4) / 0x18 + iVar19 != iVar19) {
                  local_84 = 0;
                  do {
                    uVar17 = *(uint *)(local_84 + 0x14 + local_d4);
                    pbVar15 = (byte *)(local_84 + local_d4);
                    pbVar8 = pbVar15;
                    local_80 = pbVar15;
                    if (0xf < uVar17) {
                      local_80 = *(byte **)pbVar15;
                      pbVar8 = *(byte **)pbVar15;
                    }
                    pbVar1 = pbVar15 + 0x10;
                    if (0xf < uVar17) {
                      pbVar15 = *(byte **)pbVar15;
                    }
                    iVar19 = (int)(pbVar8 + *(int *)pbVar1) - (int)pbVar15;
                    iVar16 = 0;
                    if (pbVar8 + *(int *)pbVar1 < pbVar15) {
                      iVar19 = 0;
                    }
                    if (iVar19 != 0) {
                      do {
                        iVar7 = tolower((int)(char)pbVar15[iVar16]);
                        local_80[iVar16] = (byte)iVar7;
                        iVar16 = iVar16 + 1;
                      } while (iVar16 != iVar19);
                    }
                    iVar19 = local_84;
                    pppuVar4 = local_98;
                    this_00 = (undefined4 ***)local_98[0x13];
                    if ((undefined4 ***)local_98[0x14] == this_00) {
                      FUN_00403840(local_98 + 0x12,(int *)this_00,
                                   (undefined4 *)(local_d4 + local_84));
                    }
                    else {
                      FUN_004024e0(this_00,(undefined4 *)(local_d4 + local_84));
                      pppuVar4[0x13] = pppuVar4[0x13] + 6;
                    }
                    local_84 = iVar19 + 0x18;
                    local_78 = local_78 + 1;
                  } while (local_78 < (byte *)((local_d0 - local_d4) / 0x18));
                }
                FUN_004025a0(&local_d4);
                uVar18 = local_18;
              }
            }
            else if (ppppuVar5 != local_2c) {
              ppppuVar10 = local_2c;
              if (0xf < uVar18) {
                ppppuVar10 = (undefined4 ****)local_2c[0];
              }
              FUN_00402690(ppppuVar5,ppppuVar10,local_1c);
              uVar18 = local_18;
            }
          }
          else if ((undefined4 ****)local_98 != local_2c) {
            ppppuVar10 = local_2c;
            if (0xf < uVar18) {
              ppppuVar10 = (undefined4 ****)local_2c[0];
            }
            FUN_00402690(local_98,ppppuVar10,local_1c);
            uVar18 = local_18;
          }
          local_8 = 5;
          if (0xf < uVar18) {
            ppppuVar10 = (undefined4 ****)local_2c[0];
            if ((0xfff < uVar18 + 1) &&
               (ppppuVar10 = (undefined4 ****)local_2c[0][-1],
               (undefined1 *)0x1f < (undefined1 *)((int)local_2c[0] + (-4 - (int)ppppuVar10))))
            goto LAB_0043f93a;
            FUN_005adb3f(ppppuVar10);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        }
        _local_8 = CONCAT31(uStack_7,4);
        FUN_004025a0((int *)&local_a4);
        uVar17 = local_94;
        pcVar14 = local_90;
      }
      pcVar14 = pcVar14 + 0x18;
      local_a8 = local_a8 + 1;
      local_90 = pcVar14;
    } while (local_a8 < uVar17);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  local_8 = 8;
  uVar18 = 0;
  uVar17 = ((int)local_88 - (int)local_8c) / 0x18;
  if (uVar17 != 0) {
    do {
      puVar11 = local_8c;
      if (0xf < (uint)local_8c[5]) {
        puVar11 = (undefined4 *)*local_8c;
      }
      FUN_00403640(local_44,puVar11,local_8c[4]);
      if (uVar18 < uVar17 - 1) {
        FUN_00403640(local_44,&DAT_005e75f8,1);
      }
      uVar18 = uVar18 + 1;
      local_8c = local_8c + 6;
    } while (uVar18 < uVar17);
  }
  if (this != local_44) {
    ppppuVar5 = local_44;
    if (0xf < local_30) {
      ppppuVar5 = (undefined4 ****)local_44[0];
    }
    FUN_00402690(this,ppppuVar5,local_34);
  }
  free(local_ac);
  if (uVar17 != 0) {
    iVar19 = FUN_004124e0();
    puVar11 = *(undefined4 **)(iVar19 + 0x48);
    if (*(undefined4 **)(iVar19 + 0x4c) == puVar11) {
      FUN_00414080((void *)(iVar19 + 0x44),puVar11,&local_b0);
    }
    else {
      *puVar11 = local_98;
      *(int *)(iVar19 + 0x48) = *(int *)(iVar19 + 0x48) + 4;
    }
  }
  if (0xf < local_30) {
    ppppuVar5 = (undefined4 ****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (ppppuVar5 = (undefined4 ****)local_44[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_44[0] + (-4 - (int)ppppuVar5)))) {
LAB_0043f93a:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar5);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    ppppuVar5 = (undefined4 ****)local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (ppppuVar5 = (undefined4 ****)local_5c[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_5c[0] + (-4 - (int)ppppuVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar5);
  }
  if (0xf < local_60) {
    pvVar13 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar13 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  FUN_004025a0((int *)&local_bc);
  FUN_004025a0((int *)&local_c8);
  if (0xf < in_stack_00000018) {
    pvVar13 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar13 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar13))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0043fa40(void *this,void *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte ***pppbVar3;
  undefined1 *puVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  int *piVar11;
  byte **ppbVar12;
  byte *pbVar13;
  byte ****ppppbVar14;
  undefined1 *puVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff54;
  int local_80 [3];
  int local_74 [3];
  byte *local_68;
  byte *local_64;
  byte *local_60;
  void *local_5c;
  int local_58;
  int local_54;
  void *local_4c;
  uint local_48;
  byte ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  undefined1 *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b392c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
  local_4c = this;
  FUN_004024e0(&stack0xffffff54,&param_1);
  FUN_00592340(&local_58,in_stack_ffffff54);
  local_8._0_1_ = 1;
  puVar15 = (undefined1 *)0x0;
  local_18 = (undefined1 *)0x0;
  iVar16 = local_54 - local_58 >> 0x1f;
  local_2c = (undefined1 *)0x0;
  local_48 = 0;
  if ((local_54 - local_58) / 0x18 + iVar16 != iVar16) {
    do {
      uVar10 = local_48;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)FUN_005adb0f(0x2c);
        *puVar15 = 0;
        *(undefined4 *)(puVar15 + 4) = 0;
        *(undefined4 *)(puVar15 + 8) = 0;
        *(undefined4 *)(puVar15 + 0xc) = 0;
        *(undefined4 *)(puVar15 + 0x10) = 0;
        *(undefined4 *)(puVar15 + 0x14) = 0;
        *(undefined4 *)(puVar15 + 0x18) = 0;
        *(undefined4 *)(puVar15 + 0x1c) = 0;
        *(undefined4 *)(puVar15 + 0x20) = 0;
        *(undefined4 *)(puVar15 + 0x24) = 0;
        *(undefined4 *)(puVar15 + 0x28) = 0;
        local_2c = puVar15;
        local_18 = puVar15;
      }
      pbVar17 = (byte *)(uVar10 * 0x18);
      pbVar6 = pbVar17 + local_58;
      pbVar13 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar13 = *(byte **)pbVar6;
      }
      local_14 = pbVar17;
      if (*pbVar13 != 0x23) {
        pbVar13 = pbVar6;
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar13 = *(byte **)pbVar6;
        }
        if (*pbVar13 == 0) {
          puVar2 = *(undefined4 **)((int)this + 4);
          if (*(undefined4 **)((int)this + 8) == puVar2) {
            FUN_00414080(this,puVar2,&local_2c);
            local_18 = (undefined1 *)0x0;
            local_2c = (undefined1 *)0x0;
            puVar15 = (undefined1 *)0x0;
          }
          else {
            *puVar2 = puVar15;
            *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
            local_18 = (undefined1 *)0x0;
            local_2c = (undefined1 *)0x0;
            puVar15 = (undefined1 *)0x0;
          }
        }
        else {
          FUN_004024e0(&stack0xffffff54,(undefined4 *)pbVar6);
          FUN_00592d70(&local_28,'=',in_stack_ffffff54);
          local_8._0_1_ = 2;
          if ((uint)(((int)local_24 - (int)local_28) / 0x18) < 2) {
            FUN_004024e0(&stack0xffffff54,(undefined4 *)(pbVar17 + local_58));
            ppbVar12 = (byte **)FUN_00592d70(local_80,':',in_stack_ffffff54);
            if (&local_28 != ppbVar12) {
              FUN_004025a0((int *)&local_28);
              local_28 = *ppbVar12;
              local_24 = ppbVar12[1];
              local_20 = ppbVar12[2];
              *ppbVar12 = (byte *)0x0;
              ppbVar12[1] = (byte *)0x0;
              ppbVar12[2] = (byte *)0x0;
            }
            FUN_004025a0(local_80);
            if ((uint)(((int)local_24 - (int)local_28) / 0x18) < 2) {
              pbVar13 = (byte *)FUN_005adb0f(0x1c);
              local_8._0_1_ = 8;
              local_68 = pbVar13;
              FUN_004024e0(local_44,(undefined4 *)(local_14 + local_58));
              local_8._0_1_ = 9;
              pbVar13[0] = 0;
              pbVar13[1] = 0;
              pbVar13[2] = 0;
              pbVar13[3] = 0;
              FUN_004024e0(pbVar13 + 4,local_44);
              local_8._0_1_ = 8;
            }
            else {
              pbVar13 = local_28;
              if (0xf < *(uint *)(local_28 + 0x14)) {
                pbVar13 = *(byte **)local_28;
              }
              iVar16 = atoi((char *)pbVar13);
              if (iVar16 == 1) {
                pbVar13 = (byte *)FUN_005adb0f(0x1c);
                local_8._0_1_ = 4;
                local_60 = pbVar13;
                FUN_004024e0(local_44,(undefined4 *)(local_28 + 0x18));
                local_8._0_1_ = 5;
                pbVar13[0] = 0;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
                FUN_004024e0(pbVar13 + 4,local_44);
                local_8._0_1_ = 4;
              }
              else {
                pbVar13 = (byte *)FUN_005adb0f(0x1c);
                local_8._0_1_ = 6;
                local_64 = pbVar13;
                FUN_004024e0(local_44,(undefined4 *)(local_28 + 0x18));
                local_8._0_1_ = 7;
                pbVar13[0] = 1;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
                FUN_004024e0(pbVar13 + 4,local_44);
                local_8._0_1_ = 6;
              }
            }
            if (0xf < local_30) {
              ppppbVar14 = (byte ****)local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (ppppbVar14 = (byte ****)local_44[0][-1],
                 (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)ppppbVar14))))
              goto LAB_004400d4;
              FUN_005adb3f(ppppbVar14);
            }
            local_8._0_1_ = 2;
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
            puVar2 = *(undefined4 **)(puVar15 + 0x24);
            local_14 = pbVar13;
            if (*(undefined4 **)(puVar15 + 0x28) == puVar2) {
              FUN_00414080(puVar15 + 0x20,puVar2,&local_14);
            }
            else {
              *puVar2 = pbVar13;
              *(int *)(puVar15 + 0x24) = *(int *)(puVar15 + 0x24) + 4;
            }
          }
          else {
            local_1c = local_28;
            pbVar13 = local_28;
            if (0xf < *(uint *)(local_28 + 0x14)) {
              local_1c = *(byte **)local_28;
              pbVar13 = *(byte **)local_28;
            }
            pbVar6 = local_1c;
            local_14 = local_28;
            if (0xf < *(uint *)(local_28 + 0x14)) {
              local_14 = *(byte **)local_28;
            }
            iVar16 = (int)(pbVar13 + *(int *)(local_28 + 0x10)) - (int)local_14;
            iVar18 = 0;
            if (pbVar13 + *(int *)(local_28 + 0x10) < local_14) {
              iVar16 = 0;
            }
            if (iVar16 != 0) {
              do {
                iVar7 = tolower((int)(char)local_14[iVar18]);
                pbVar6[iVar18] = (byte)iVar7;
                iVar18 = iVar18 + 1;
              } while (iVar18 != iVar16);
            }
            pbVar6 = local_28;
            uVar10 = *(uint *)(local_28 + 0x14);
            pbVar13 = local_28;
            if (0xf < uVar10) {
              pbVar13 = *(byte **)local_28;
            }
            uVar8 = FUN_004031f0(pbVar13,*(uint *)(local_28 + 0x10),&DAT_005e970c,3);
            if ((char)uVar8 == '\0') {
              pbVar13 = pbVar6;
              if (0xf < uVar10) {
                pbVar13 = *(byte **)pbVar6;
              }
              uVar8 = FUN_004031f0(pbVar13,*(uint *)(pbVar6 + 0x10),(byte *)"state",5);
              if ((char)uVar8 == '\0') {
                pbVar13 = pbVar6;
                if (0xf < uVar10) {
                  pbVar13 = *(byte **)pbVar6;
                }
                uVar10 = FUN_004031f0(pbVar13,*(uint *)(pbVar6 + 0x10),&DAT_005e9748,3);
                if ((char)uVar10 == '\0') {
                  bVar5 = cc_assert_script_compatible("Unknown key when loading ship chatter.");
                  if (!bVar5) {
                    cocos2d::log("Assert failed: %s");
                  }
                  local_8._0_1_ = 1;
                  FUN_004025a0((int *)&local_28);
                  puVar15 = local_18;
                  this = local_4c;
                  goto LAB_0043fe61;
                }
                FUN_004024e0(&stack0xffffff54,(undefined4 *)pbVar6);
                piVar11 = (int *)FUN_00592d70(local_74,',',in_stack_ffffff54);
                FUN_0042b8c0(&local_28,piVar11);
                FUN_004025a0(local_74);
                puVar4 = local_18;
                local_1c = (byte *)0x0;
                iVar16 = (int)local_24 - (int)local_28 >> 0x1f;
                puVar15 = local_18;
                if (((int)local_24 - (int)local_28) / 0x18 + iVar16 != iVar16) {
                  iVar16 = 0;
                  do {
                    pbVar13 = local_28 + iVar16;
                    if (0xf < *(uint *)(local_28 + iVar16 + 0x14)) {
                      pbVar13 = *(byte **)pbVar13;
                    }
                    local_14 = (byte *)atoi((char *)pbVar13);
                    puVar2 = *(undefined4 **)(puVar4 + 0xc);
                    if (*(undefined4 **)(puVar4 + 0x10) == puVar2) {
                      FUN_004141e0(puVar4 + 8,puVar2,&local_14);
                    }
                    else {
                      *puVar2 = local_14;
                      *(int *)(puVar4 + 0xc) = *(int *)(puVar4 + 0xc) + 4;
                    }
                    iVar16 = iVar16 + 0x18;
                    local_1c = local_1c + 1;
                    puVar15 = local_18;
                  } while (local_1c < (byte *)(((int)local_24 - (int)local_28) / 0x18));
                }
              }
              else {
                FUN_004024e0(local_44,(undefined4 *)(pbVar6 + 0x18));
                uVar10 = local_30;
                pppbVar3 = local_44[0];
                iVar16 = 0;
                do {
                  pbVar13 = (&PTR_DAT_005df7ac)[iVar16];
                  local_14 = pbVar13 + 1;
                  pbVar6 = pbVar13;
                  do {
                    bVar1 = *pbVar6;
                    pbVar6 = pbVar6 + 1;
                  } while (bVar1 != 0);
                  ppppbVar14 = local_44;
                  if (0xf < uVar10) {
                    ppppbVar14 = (byte ****)pppbVar3;
                  }
                  uVar8 = FUN_004031f0((byte *)ppppbVar14,local_34,pbVar13,
                                       (int)pbVar6 - (int)local_14);
                  if ((char)uVar8 != '\0') {
                    if (0xf < uVar10) {
                      ppppbVar14 = (byte ****)pppbVar3;
                      if ((0xfff < uVar10 + 1) &&
                         (ppppbVar14 = (byte ****)pppbVar3[-1],
                         (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar14))))
                      goto LAB_004400d4;
                      FUN_005adb3f(ppppbVar14);
                    }
                    *(int *)(local_18 + 4) = iVar16;
                    puVar15 = local_18;
                    goto LAB_0043fe52;
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 < 2);
                if (0xf < uVar10) {
                  ppppbVar14 = (byte ****)pppbVar3;
                  if ((0xfff < uVar10 + 1) &&
                     (ppppbVar14 = (byte ****)pppbVar3[-1],
                     (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar14))))
                  goto LAB_004400d4;
                  FUN_005adb3f(ppppbVar14);
                }
                *(undefined4 *)(local_18 + 4) = 0;
                puVar15 = local_18;
              }
            }
            else {
              pvVar9 = (void *)FUN_005adb0f(0x40);
              local_8._0_1_ = 3;
              local_5c = pvVar9;
              FUN_004024e0(&stack0xffffff54,(undefined4 *)(local_28 + 0x18));
              local_14 = (byte *)FUN_004a1a40(pvVar9,in_stack_ffffff54);
              puVar15 = local_18;
              local_8._0_1_ = 2;
              puVar2 = *(undefined4 **)(local_18 + 0x18);
              if (*(undefined4 **)(local_18 + 0x1c) == puVar2) {
                FUN_004141e0(local_18 + 0x14,puVar2,&local_14);
              }
              else {
                *puVar2 = local_14;
                *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 4;
              }
            }
          }
LAB_0043fe52:
          local_8._0_1_ = 1;
          FUN_004025a0((int *)&local_28);
          this = local_4c;
        }
      }
LAB_0043fe61:
      local_48 = local_48 + 1;
    } while (local_48 < (uint)((local_54 - local_58) / 0x18));
    if (puVar15 != (undefined1 *)0x0) {
      puVar2 = *(undefined4 **)((int)this + 4);
      if (*(undefined4 **)((int)this + 8) == puVar2) {
        FUN_00414080(this,puVar2,&local_2c);
      }
      else {
        *puVar2 = puVar15;
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      }
    }
  }
  FUN_004025a0(&local_58);
  if (0xf < in_stack_00000018) {
    pvVar9 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar9 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar9)))) {
LAB_004400d4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  return;
}
