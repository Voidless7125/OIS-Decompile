#include "../ois_server.exe.h"


void __cdecl FUN_004f0020(uint *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf0e8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0%s\n");
    local_8._0_1_ = 1;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_004f0100:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_00403640(&local_44,"`%Engineering Status:\n",0x16);
    if (*(void **)(param_2 + 0x40) != (void *)0x0) {
      FUN_005224c0(*(void **)(param_2 + 0x40),1,'\x01');
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"  `0Reactor`2: %s\n");
    local_8._0_1_ = 2;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
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
    iVar5 = *(int *)(param_2 + 0x40);
    for (iVar7 = *(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2; iVar7 != 0;
        iVar7 = iVar7 + -1) {
    }
    FUN_00522c50(iVar5);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"  `%%PWR Gen`2: %.2fmw/%.2fmw\n");
    local_8._0_1_ = 3;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
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
    FUN_00522920(*(int *)(param_2 + 0x40));
    FUN_005228c0(*(int *)(param_2 + 0x40));
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"  `$PWR Store`2: %.2fmw/%.2fmw\n");
    local_8._0_1_ = 4;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
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
    FUN_00522be0(*(int *)(param_2 + 0x40));
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"  `^PWR Drain`2: `@-%.2fmw\n");
    local_8._0_1_ = 5;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
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
    iVar5 = *(int *)(param_2 + 0x40);
    uVar8 = 0;
    if (*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2 != 0) {
      do {
        FUN_00437c60(*(int **)(*(int *)(*(int *)(iVar5 + 0x3c) + uVar8 * 4) + 0xc));
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)(*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2));
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!Efficiency`2: `%c%d%%\n");
    local_8._0_1_ = 6;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar4,puVar3[4]);
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
    FUN_00403640(&local_44,"\n`0Module State`2:\n\n",0x14);
    iVar7 = 0;
    local_48 = 0;
    iVar5 = *(int *)(param_2 + 0x40);
    if (*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar5 + 0x3c) + local_48 * 4);
        if (piVar1 != (int *)0x0) {
          if (iVar7 < 1) {
            uVar8 = 5;
            pcVar9 = "     ";
          }
          else {
            uVar8 = 1;
            pcVar9 = " ";
          }
          FUN_00403640(&local_44,pcVar9,uVar8);
          if (*(char *)((int)piVar1 + 99) == '\0') {
            puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_006166fc);
            local_8._0_1_ = 7;
          }
          else {
            cVar2 = (**(code **)(*piVar1 + 0x14))();
            if (cVar2 == '\0') {
              cVar2 = (**(code **)(*piVar1 + 0x18))();
              if (cVar2 == '\0') {
                puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%%s");
                local_8._0_1_ = 10;
              }
              else {
                puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_00616640);
                local_8._0_1_ = 9;
              }
            }
            else {
              puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_00616704);
              local_8._0_1_ = 8;
            }
          }
          puVar3 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar3 = (undefined4 *)*puVar4;
          }
          FUN_00403640(&local_44,puVar3,puVar4[4]);
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_004f0100;
            FUN_005adb3f(pvVar6);
          }
          iVar7 = iVar7 + 1;
          if (4 < iVar7) {
            iVar7 = 0;
            FUN_00403640(&local_44,&DAT_005e75f8,1);
          }
        }
        local_48 = local_48 + 1;
        iVar5 = *(int *)(param_2 + 0x40);
      } while (local_48 < (uint)(*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2));
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_44;
    param_1[1] = uStack_40;
    param_1[2] = uStack_3c;
    param_1[3] = uStack_38;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f0630(uint *param_1,int param_2)

{
  float fVar1;
  undefined *puVar2;
  uint uVar3;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2608;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if (*(int *)(param_2 + 0xd4) == 3) {
      uVar3 = 1;
      puVar2 = &DAT_00616648;
    }
    else {
      fVar1 = *(float *)(param_2 + 0xe0);
      if (fVar1 <= 200.0) {
        uVar3 = 1;
        if (fVar1 <= 160.0) {
          if (fVar1 <= 140.0) {
            if (fVar1 <= 120.0) {
              if (fVar1 <= 100.0) {
                if (fVar1 <= 80.0) {
                  if (fVar1 <= 60.0) {
                    if (fVar1 <= 40.0) {
                      if (fVar1 <= 20.0) {
                        puVar2 = &DAT_00616790;
                      }
                      else {
                        puVar2 = &DAT_0061678c;
                      }
                    }
                    else {
                      puVar2 = &DAT_00616788;
                    }
                  }
                  else {
                    puVar2 = &DAT_00616784;
                  }
                }
                else {
                  puVar2 = &DAT_00616660;
                }
              }
              else {
                puVar2 = &DAT_0061665c;
              }
            }
            else {
              puVar2 = &DAT_00616658;
            }
          }
          else {
            puVar2 = &DAT_00616654;
          }
        }
        else {
          puVar2 = &DAT_00616650;
        }
      }
      else {
        uVar3 = 2;
        puVar2 = &DAT_0061664c;
      }
    }
    FUN_00403640(&local_2c,puVar2,uVar3);
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_2c;
    param_1[1] = uStack_28;
    param_1[2] = uStack_24;
    param_1[3] = uStack_20;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f07a0(uint *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf158;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x1b4) == -1)) ||
     (*(int *)(*(int *)(param_2 + 0x40) + 0x20) == 0)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f0d31;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  FUN_00403640(&local_2c,"`2Type : ",9);
  iVar3 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
  pvVar7 = *(void **)(iVar3 + 0x38 + *(int *)(param_2 + 0x1b4) * 4);
  if (pvVar7 == (void *)0x0) {
    if ((float)(*(int *)(param_2 + 0x1b4) + -1) < *(float *)(*(int *)(iVar3 + 8) + 0x104)) {
      pcVar8 = "`7unloaded";
      uVar9 = 10;
    }
    else {
      uVar9 = 9;
      pcVar8 = "`8no tube";
    }
LAB_004f0d0a:
    FUN_00403640(&local_2c,pcVar8,uVar9);
  }
  else {
    iVar3 = *(int *)(*(int *)((int)pvVar7 + 0x388) + 0x1b4);
    if (iVar3 == 3) {
      uVar9 = 9;
      pcVar8 = "`$Torpedo";
LAB_004f0887:
      FUN_00403640(&local_2c,pcVar8,uVar9);
    }
    else {
      if (iVar3 == 5) {
        pcVar8 = "`@Mine";
        uVar9 = 6;
        goto LAB_004f0887;
      }
      if (iVar3 == 4) {
        pcVar8 = "`!Probe";
        uVar9 = 7;
        goto LAB_004f0887;
      }
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Man. : `7%s");
    local_8._0_1_ = 1;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar4,puVar2[4]);
    local_8._0_1_ = 0;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Type : `7%s");
    local_8._0_1_ = 2;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar4,puVar2[4]);
    local_8._0_1_ = 0;
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
    iVar3 = FUN_004ecaf0((int)pvVar7);
    if ((char)iVar3 != '\0') {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Wrhd.: `7%s");
      local_8._0_1_ = 3;
      FUN_00403490(&local_2c,puVar4);
      local_8._0_1_ = 0;
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
    iVar3 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
    iVar5 = FUN_00437c60(*(int **)(iVar3 + 0xc));
    FUN_0051c650(pvVar7,(int)(((float)iVar5 / 100.0) * 0.5 *
                             *(float *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 0x20) + 8) + 0x108))
                );
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Batt.: `$%d%%");
    local_8._0_1_ = 4;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar4,puVar2[4]);
    local_8._0_1_ = 0;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Targ.: %s");
    local_8._0_1_ = 5;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar4,puVar2[4]);
    local_8._0_1_ = 0;
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
    FUN_0051c460(pvVar7,(undefined1 *)local_5c);
    local_8._0_1_ = 6;
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Soln.: %s");
    local_8._0_1_ = 7;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar4,puVar2[4]);
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
    if (0xf < local_48) {
      pvVar6 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar6 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_00403640(&local_2c,"\n`2State: ",10);
    if (*(int *)((int)pvVar7 + 0x3d0) == 0) {
      cVar1 = FUN_004ade90((int)pvVar7);
      if (cVar1 == '\0') {
        if (*(char *)((int)pvVar7 + 0x3bc) == '\0') {
          uVar9 = 6;
          pcVar8 = "`0idle";
        }
        else {
          uVar9 = 5;
          pcVar8 = "`@rtl";
        }
      }
      else {
        uVar9 = 6;
        pcVar8 = "`0idle";
      }
LAB_004f0c38:
      FUN_00403640(&local_2c,pcVar8,uVar9);
    }
    else if (*(int *)((int)pvVar7 + 0x3d0) == 1) {
      pcVar8 = "`!travelling";
      uVar9 = 0xc;
      goto LAB_004f0c38;
    }
    if (*(char *)((int)pvVar7 + 0x3fc) != '\0') {
      FUN_00403640(&local_2c,"\n`2Link : `#active",0x12);
    }
    if (*(char *)((int)pvVar7 + 0x3c4) != '\0') {
      if (*(float *)((int)pvVar7 + 0x41c) == -1.0) {
        uVar9 = 0xf;
        pcVar8 = "\n`2DTT. : `%n/a";
        goto LAB_004f0d0a;
      }
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"\n`2DTT. : `$%.2fGm");
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00403490(&local_2c,puVar4);
      if (0xf < local_48) {
        pvVar7 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar7 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
LAB_004f0d31:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f0d50(basic_string<> *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
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
  puStack_c = &LAB_005bf1d1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((param_2 == 0) || (*(int *)(param_2 + 0x1b4) == -1)) ||
      (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x20), piVar1 == (int *)0x0)) ||
     ((cVar2 = (**(code **)(*piVar1 + 0x10))(0,local_14), cVar2 == '\0' ||
      (cVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x40) + 0x20) + 0x1c))(), cVar2 == '\0')))
     ) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (basic_string<>)0x0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0;
    pvVar7 = *(void **)(*(int *)(*(int *)(param_2 + 0x40) + 0x20) + 0x38 +
                       *(int *)(param_2 + 0x1b4) * 4);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Reg. : `%c%s\n");
    local_8._0_1_ = 1;
    FUN_00403490(local_2c,puVar3);
    local_8._0_1_ = 0;
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
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Type : `%c%s\n");
    local_8._0_1_ = 2;
    FUN_00403490(local_2c,puVar3);
    local_8._0_1_ = 0;
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
    if (pvVar7 == (void *)0x0) {
      FUN_00403640(local_2c,"`2Wrhd : `8n/a\n",0xf);
      FUN_00403640(local_2c,"`2Batt.: `8n/a\n",0xf);
    }
    else {
      iVar4 = FUN_004ecaf0((int)pvVar7);
      if ((char)iVar4 == '\0') {
        FUN_00403640(local_2c,"`2Wrhd : `!Probe\n",0x11);
      }
      else {
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Wrhd : `%c%s\n");
        local_8._0_1_ = 3;
        FUN_00403490(local_2c,puVar3);
        local_8._0_1_ = 0;
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
      iVar4 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
      iVar5 = FUN_00437c60(*(int **)(iVar4 + 0xc));
      FUN_0051c650(pvVar7,(int)(((float)iVar5 / 100.0) * 0.5 *
                               *(float *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 0x20) + 8) + 0x108
                                         )));
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Batt.: `$%d%%\n");
      local_8._0_1_ = 4;
      FUN_00403490(local_2c,puVar3);
      local_8._0_1_ = 0;
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
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Targ.: %s\n");
    local_8._0_1_ = 5;
    FUN_00403490(local_2c,puVar3);
    local_8._0_1_ = 0;
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
    if (pvVar7 != (void *)0x0) {
      FUN_0051c460(pvVar7,(undefined1 *)local_5c);
      local_8._0_1_ = 6;
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Soln.: %s\n");
    local_8 = 7;
    FUN_00403490(local_2c,puVar3);
    local_8 = CONCAT31(local_8._1_3_,6);
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
    local_8 = 0;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if ((pvVar7 != (void *)0x0) && (0xf < local_48)) {
      pvVar6 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar6 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_00403640(local_2c,"`2State: ",9);
    if (pvVar7 == (void *)0x0) {
      uVar9 = 10;
      pcVar8 = "`8unloaded";
    }
    else {
      iVar4 = *(int *)((int)pvVar7 + 0x3d0);
      if (iVar4 == 0) {
        cVar2 = FUN_004ade90((int)pvVar7);
        if (cVar2 == '\0') {
          if (*(char *)((int)pvVar7 + 0x3bc) == '\0') {
            uVar9 = 6;
            pcVar8 = "`0idle";
          }
          else {
            uVar9 = 0x11;
            if (*(int *)(*(int *)((int)pvVar7 + 0x388) + 0x1b4) == 4) {
              pcVar8 = "`!ready to launch";
            }
            else {
              pcVar8 = "`@ready to launch";
            }
          }
        }
        else {
          uVar9 = 6;
          pcVar8 = "`0idle";
        }
      }
      else if (iVar4 == 1) {
        uVar9 = 0xd;
        pcVar8 = "`!travelling\n";
      }
      else if (iVar4 == 2) {
        uVar9 = 8;
        pcVar8 = "`@active";
      }
      else if ((float)(*(int *)(param_2 + 0x1b4) + -1) <
               *(float *)(*(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x20) + 8) + 0x104)) {
        uVar9 = 10;
        pcVar8 = "`7unloaded";
      }
      else {
        uVar9 = 9;
        pcVar8 = "`8no tube";
      }
    }
    FUN_00403640(local_2c,pcVar8,uVar9);
    std::basic_string<>::basic_string<>(param_1,(basic_string<> *)local_2c);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * __cdecl FUN_004f12f0(undefined1 *param_1)

{
  FUN_00591e00(param_1,"`%c%s\n");
  return param_1;
}


void __cdecl FUN_004f1340(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf228;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (iVar1 = *(int *)(param_2 + 0x178), iVar1 == 0)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    FUN_00402690(&local_2c,&PTR_005ce008,0);
    local_8 = 0;
    if (*(char *)(iVar1 + 0x388) == '\0') {
      puVar2 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_44,"`7Welcome! This is a%s%s facility.\n\n%s");
      local_8 = CONCAT31(local_8._1_3_,4);
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_2c,puVar3,puVar2[4]);
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
    }
    else {
      FUN_00403640(&local_2c,"`!Welcome to\n",0xd);
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`$%s\n");
      local_8._0_1_ = 1;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_2c,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7A%s%s Facility\n");
      local_8._0_1_ = 2;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_2c,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      FUN_00403640(&local_2c,"`%Docking Port 4A-4C ->\n",0x18);
      FUN_00403640(&local_2c,"`%<- Main Promenade\n",0x14);
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%4A: `7%s\n");
      local_8._0_1_ = 3;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_2c,puVar3,puVar2[4]);
      local_8 = (uint)local_8._1_3_ << 8;
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
      FUN_00403640(&local_2c,"`%4B: `7empty\n",0xe);
      FUN_00403640(&local_2c,"`%4C: `7empty",0xd);
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_2c;
    param_1[1] = uStack_28;
    param_1[2] = uStack_24;
    param_1[3] = uStack_20;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f1680(basic_string<> *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *local_5c [4];
  undefined4 local_4c;
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
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf2b8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (pvVar5 = *(void **)(param_2 + 0x178), pvVar5 != (void *)0x0)) {
    bVar6 = false;
    if (*(int *)((int)pvVar5 + 0x254) != 0) {
      bVar6 = *(int *)(*(int *)((int)pvVar5 + 0x254) + 0x158) == 1;
    }
    if ((bVar6) && (*(int *)((int)pvVar5 + 0x390) != 0)) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,&PTR_005ce008,0);
      local_8 = 0;
      puVar7 = (undefined4 *)0x4f1761;
      puVar1 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"`7Welcome! This is a%s`%c%s`7 facility.\n\n");
      local_8._0_1_ = 1;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      FUN_00403640(local_44,"`!Docked Vessel\n\n",0x11);
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0%s\n");
      local_8._0_1_ = 2;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Rego  : `%%%s\n");
      local_8._0_1_ = 3;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Bay   : `%%%d\n");
      local_8._0_1_ = 4;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Class : `%%%s\n");
      local_8._0_1_ = 5;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manuf.: `%%%s\n");
      local_8._0_1_ = 6;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cat.  : `%%%s\n");
      local_8._0_1_ = 7;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 0;
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
      FUN_004024e0(&stack0xffffff78,(undefined4 *)(param_2 + 0x238));
      local_8._0_1_ = 8;
      FUN_00412bf0();
      local_8._0_1_ = 0;
      FUN_004a60b0((undefined1 *)local_2c,puVar7);
      local_8._0_1_ = 9;
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Reg At: `%%%s\n");
      local_8._0_1_ = 10;
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00403640(local_44,puVar3,puVar1[4]);
      local_8._0_1_ = 9;
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
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
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
      if ((*(char *)(*(int *)(param_2 + 0x254) + 0xe0) != '\0') &&
         (*(char *)(DAT_0065b444 + 0x11d) == '\0')) {
        FUN_00403640(local_44,"\n`$** INVALID REGO **",0x15);
      }
      FUN_00403640(local_44,&DAT_005e310c,2);
      uVar2 = FUN_0051b830(pvVar5,param_2);
      if ((char)uVar2 == '\0') {
        if (0 < (int)*(float *)(*(int *)((int)pvVar5 + 0x390) + 0xd0)) {
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Fees owed: `$%dc");
          local_8 = CONCAT31(local_8._1_3_,0xc);
          goto LAB_004f1bd9;
        }
        FUN_00403640(local_44,
                     "`%No fees are owed. Permission must be requested before undocking your vessel."
                     ,0x4e);
      }
      else {
        puVar3 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "`!Docking permission granted.\n\n`Thank you for visiting this facility.\n\n`%You must undock within 24 hours of receiving clearance."
                             );
        local_8 = CONCAT31(local_8._1_3_,0xb);
LAB_004f1bd9:
        FUN_00403490(local_44,puVar3);
        if (0xf < local_18) {
          pvVar5 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar5 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_004f1c08;
          FUN_005adb3f(pvVar5);
        }
      }
      std::basic_string<>::basic_string<>(param_1,(basic_string<> *)local_44);
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
LAB_004f1c08:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      goto LAB_004f1caf;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (basic_string<>)0x0;
  FUN_00402690(param_1,&PTR_005ce008,0);
LAB_004f1caf:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f1cd0(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  bool bVar5;
  undefined4 *in_stack_ffffff7c;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf328;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x178) != 0)) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x178) + 0x254);
    bVar5 = false;
    if (iVar1 != 0) {
      bVar5 = *(int *)(iVar1 + 0x158) == 1;
    }
    if (bVar5) {
      local_34 = 0;
      uStack_30 = 0xf;
      local_44 = local_44 & 0xffffff00;
      FUN_00402690(&local_44,&PTR_005ce008,0);
      local_8 = 0;
      FUN_00403640(&local_44,"`!Docked Vessel\n\n",0x11);
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0%s\n");
      local_8._0_1_ = 1;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Rego  : `%%%s\n");
      local_8._0_1_ = 2;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Class : `%%%s\n");
      local_8._0_1_ = 3;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manuf.: `%%%s\n");
      local_8._0_1_ = 4;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cat.  : `%%%s\n");
      local_8._0_1_ = 5;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      local_8._0_1_ = 0;
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
      FUN_004024e0(&stack0xffffff7c,(undefined4 *)(param_2 + 0x238));
      local_8._0_1_ = 6;
      FUN_00412bf0();
      local_8._0_1_ = 0;
      FUN_004a60b0((undefined1 *)local_2c,in_stack_ffffff7c);
      local_8._0_1_ = 7;
      puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Reg At: `%%%s\n");
      local_8._0_1_ = 8;
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      local_8._0_1_ = 7;
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
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
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
      if ((*(char *)(*(int *)(param_2 + 0x254) + 0xe0) != '\0') &&
         (*(char *)(DAT_0065b444 + 0x11d) == '\0')) {
        FUN_00403640(&local_44,"\n`$** INVALID REGO **",0x15);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_44;
      param_1[1] = uStack_40;
      param_1[2] = uStack_3c;
      param_1[3] = uStack_38;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
      goto LAB_004f2125;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
LAB_004f2125:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f2150(uint *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  bool bVar7;
  uint in_stack_ffffff7c;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf380;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x178) != 0)) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x178) + 0x254);
    bVar7 = false;
    if (iVar1 != 0) {
      bVar7 = *(int *)(iVar1 + 0x158) == 1;
    }
    if (bVar7) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = local_2c & 0xffffff00;
      FUN_00402690(&local_2c,&PTR_005ce008,0);
      local_8 = 0;
      puVar5 = (undefined4 *)(in_stack_ffffff7c & 0xffffff00);
      FUN_00402690(&stack0xffffff7c,&PTR_005ce008,0);
      cVar2 = FUN_004cc6c0(param_2,0,puVar5);
      if (cVar2 == '\0') {
        puVar4 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_5c,
                              "`%%Changing your ship and account details will cost `$%dc`%%.");
        local_8._0_1_ = 5;
        puVar5 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar5 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_2c,puVar5,puVar4[4]);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_48) {
          pvVar6 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar6 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_004f23b6;
        }
      }
      else {
        puVar3 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_44,
                              "`%%Changing your ship and account details will cost `$%dc`%%.");
        local_8._0_1_ = 1;
        puVar4 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar4 = (undefined4 *)*puVar3;
        }
        FUN_00403640(&local_2c,puVar4,puVar3[4]);
        local_8._0_1_ = 0;
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
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)(param_2 + 0x238));
        local_8._0_1_ = 2;
        FUN_00412bf0();
        local_8._0_1_ = 0;
        FUN_004a60b0((undefined1 *)local_5c,puVar5);
        local_8._0_1_ = 3;
        puVar4 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_44,
                              "\n\n`7Registration request will be sent on to %s.");
        local_8._0_1_ = 4;
        puVar5 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar5 = (undefined4 *)*puVar4;
        }
        FUN_00403640(&local_2c,puVar5,puVar4[4]);
        local_8._0_1_ = 3;
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
        if (0xf < local_48) {
          pvVar6 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar6 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)*(void **)((int)local_5c[0] + -4))))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
LAB_004f23b6:
          FUN_005adb3f(pvVar6);
        }
      }
      if (*(char *)(*(int *)(param_2 + 0x254) + 0xe0) != '\0') {
        FUN_00403640(&local_2c,
                     "\n\n`$Warning: vessel does not have valid registration; details cannot be changed."
                     ,0x50);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
      goto LAB_004f241e;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
LAB_004f241e:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f2440(uint *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint in_stack_ffffff7c;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  uint local_58;
  int local_50;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf3c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
LAB_004f2727:
    uVar13 = 0;
    pcVar12 = (char *)&PTR_005ce008;
  }
  else {
    pvVar3 = (void *)(in_stack_ffffff7c & 0xffffff00);
    FUN_00402690(&stack0xffffff7c,&PTR_005ce008,0);
    cVar1 = FUN_004cc5e0(param_2,0,pvVar3);
    if (cVar1 == '\0') {
LAB_004f24d4:
      if (((*(int *)(param_2 + 0xd4) == 3) && (*(int *)(param_2 + 0xf8) == 1)) &&
         (iVar10 = *(int *)(param_2 + 0x178), iVar10 != 0)) {
        local_1c = 0;
        uStack_18 = 0xf;
        local_2c = local_2c & 0xffffff00;
        local_8 = 0;
        iVar11 = *(int *)(iVar10 + 0x254);
        local_58 = 0;
        iVar5 = (int)((((float)*(int *)(iVar11 + 0x15c) - *(float *)(param_2 + 0x108)) /
                      (float)*(int *)(iVar11 + 0x15c)) * 100.0);
        iVar6 = *(int *)(iVar11 + 0x170) - *(int *)(iVar11 + 0x16c);
        iVar11 = iVar6 >> 0x1f;
        if (iVar6 / 0x2c + iVar11 != iVar11) {
          local_50 = 0;
          do {
            piVar8 = (int *)(*(int *)(*(int *)(iVar10 + 0x254) + 0x16c) + local_50);
            if ((piVar8[1] <= iVar5) && ((piVar8[2] == 0 || (iVar5 <= piVar8[2])))) {
              if (piVar8[9] == 0) {
                if ((char)piVar8[10] == '\0') {
                  piVar9 = piVar8 + 3;
                  if (0xf < (uint)piVar8[8]) {
                    piVar9 = (int *)*piVar9;
                  }
                  puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,piVar9);
                  local_8._0_1_ = 2;
                }
                else {
                  piVar9 = piVar8 + 3;
                  if (0xf < (uint)piVar8[8]) {
                    piVar9 = (int *)*piVar9;
                  }
                  puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,piVar9);
                  local_8._0_1_ = 1;
                }
                FUN_00403490(&local_2c,puVar4);
                local_8 = (uint)local_8._1_3_ << 8;
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
                FUN_00403640(&local_2c,&DAT_005e75f8,1);
              }
              else {
                uVar13 = 0;
                piVar9 = *(int **)(param_2 + 0x274);
                piVar2 = *(int **)(param_2 + 0x270);
                uVar7 = (int)piVar9 - (int)piVar2 >> 2;
                if (uVar7 != 0) {
                  do {
                    if (*piVar2 == *piVar8) goto LAB_004f26ba;
                    uVar13 = uVar13 + 1;
                    piVar2 = piVar2 + 1;
                  } while (uVar13 < uVar7);
                }
                if (*(int **)(param_2 + 0x278) == piVar9) {
                  FUN_004141e0((int *)(param_2 + 0x270),piVar9,piVar8);
                }
                else {
                  *piVar9 = *piVar8;
                  *(int *)(param_2 + 0x274) = *(int *)(param_2 + 0x274) + 4;
                }
                iVar6 = -1;
                iVar10 = piVar8[9];
                iVar11 = param_2;
                pvVar3 = (void *)FUN_00402f60();
                FUN_00557fb0(pvVar3,iVar11,iVar10,iVar6);
              }
            }
LAB_004f26ba:
            local_50 = local_50 + 0x2c;
            local_58 = local_58 + 1;
            iVar10 = *(int *)(param_2 + 0x178);
          } while (local_58 <
                   (uint)((*(int *)(*(int *)(iVar10 + 0x254) + 0x170) -
                          *(int *)(*(int *)(iVar10 + 0x254) + 0x16c)) / 0x2c));
        }
        param_1[4] = 0;
        param_1[5] = 0;
        *param_1 = local_2c;
        param_1[1] = uStack_28;
        param_1[2] = uStack_24;
        param_1[3] = uStack_20;
        *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
        goto LAB_004f2746;
      }
      goto LAB_004f2727;
    }
    if (*(int *)(param_2 + 0xd4) != 3) goto LAB_004f2727;
    if (*(int *)(param_2 + 0xf8) == 1) goto LAB_004f24d4;
    uVar13 = 0x19;
    pcVar12 = "`%JUMPGATE SYNC: `^Error.";
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,pcVar12,uVar13);
LAB_004f2746:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f2770(uint *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint local_58;
  int local_4c;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf3c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((param_2 == 0) || (*(int *)(param_2 + 0xd4) != 3)) || (*(int *)(param_2 + 0xf8) != 3)) ||
     (iVar10 = *(int *)(param_2 + 0x178), iVar10 == 0)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    iVar11 = *(int *)(iVar10 + 0x254);
    local_58 = 0;
    iVar4 = (int)((((float)*(int *)(iVar11 + 0x15c) - *(float *)(param_2 + 0x108)) /
                  (float)*(int *)(iVar11 + 0x15c)) * 100.0);
    iVar5 = *(int *)(iVar11 + 0x17c) - *(int *)(iVar11 + 0x178);
    iVar11 = iVar5 >> 0x1f;
    if (iVar5 / 0x2c + iVar11 != iVar11) {
      local_4c = 0;
      do {
        piVar8 = (int *)(*(int *)(*(int *)(iVar10 + 0x254) + 0x178) + local_4c);
        if ((piVar8[1] <= iVar4) && ((piVar8[2] == 0 || (iVar4 <= piVar8[2])))) {
          if (piVar8[9] == 0) {
            if ((char)piVar8[10] == '\0') {
              piVar9 = piVar8 + 3;
              if (0xf < (uint)piVar8[8]) {
                piVar9 = (int *)*piVar9;
              }
              puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,piVar9);
              local_8._0_1_ = 2;
            }
            else {
              piVar9 = piVar8 + 3;
              if (0xf < (uint)piVar8[8]) {
                piVar9 = (int *)*piVar9;
              }
              puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,piVar9);
              local_8._0_1_ = 1;
            }
            FUN_00403490(&local_2c,puVar3);
            local_8 = (uint)local_8._1_3_ << 8;
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
            FUN_00403640(&local_2c,&DAT_005e75f8,1);
          }
          else {
            uVar6 = 0;
            piVar9 = *(int **)(param_2 + 0x274);
            piVar1 = *(int **)(param_2 + 0x270);
            uVar7 = (int)piVar9 - (int)piVar1 >> 2;
            if (uVar7 != 0) {
              do {
                if (*piVar1 == *piVar8) goto LAB_004f298a;
                uVar6 = uVar6 + 1;
                piVar1 = piVar1 + 1;
              } while (uVar6 < uVar7);
            }
            if (*(int **)(param_2 + 0x278) == piVar9) {
              FUN_004141e0((int *)(param_2 + 0x270),piVar9,piVar8);
            }
            else {
              *piVar9 = *piVar8;
              *(int *)(param_2 + 0x274) = *(int *)(param_2 + 0x274) + 4;
            }
            iVar5 = -1;
            iVar10 = piVar8[9];
            iVar11 = param_2;
            pvVar2 = (void *)FUN_00402f60();
            FUN_00557fb0(pvVar2,iVar11,iVar10,iVar5);
          }
        }
LAB_004f298a:
        local_4c = local_4c + 0x2c;
        local_58 = local_58 + 1;
        iVar10 = *(int *)(param_2 + 0x178);
      } while (local_58 <
               (uint)((*(int *)(*(int *)(iVar10 + 0x254) + 0x17c) -
                      *(int *)(*(int *)(iVar10 + 0x254) + 0x178)) / 0x2c));
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_2c;
    param_1[1] = uStack_28;
    param_1[2] = uStack_24;
    param_1[3] = uStack_20;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f2a40(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  byte *in_stack_ffffff88;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf418;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (pvVar10 = *(void **)(param_2 + 0x178), pvVar10 == (void *)0x0)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    local_8 = 0;
    uStack_7 = 0;
    piVar6 = *(int **)(DAT_0065b5cc + 0x3c);
    if (piVar6 == *(int **)(DAT_0065b5cc + 0x40)) {
LAB_004f2af0:
      param_1[4] = 0;
      param_1[5] = 0xf;
      *(undefined1 *)param_1 = 0;
      FUN_00402690(param_1,&PTR_005ce008,0);
      if (0xf < uStack_18) {
        pvVar10 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c + -4),
           0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
    }
    else {
      while (piVar1 = (int *)*piVar6, *piVar1 != *(int *)((int)pvVar10 + 0x38c)) {
        piVar6 = piVar6 + 1;
        if (piVar6 == *(int **)(DAT_0065b5cc + 0x40)) goto LAB_004f2af0;
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Destination: `!%s\n");
      local_8 = 1;
      puVar8 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar8 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar8,puVar3[4]);
      local_8 = 0;
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar7 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_004f2ba9;
        FUN_005adb3f(pvVar7);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%Cost       : `$%dc");
      local_8 = 2;
      puVar8 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar8 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_2c,puVar8,puVar3[4]);
      local_8 = 0;
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar7 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      FUN_004024e0(&stack0xffffff88,(undefined4 *)(param_2 + 0x238));
      cVar2 = FUN_0051ae20(pvVar10,in_stack_ffffff88);
      if (cVar2 != '\0') {
        FUN_00403640(&local_2c," `$**paid**",0xb);
      }
      if (piVar1[0x44] - piVar1[0x43] >> 2 != 0) {
        puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n\n`@Contraband in %s:");
        local_8 = 3;
        puVar8 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar8 = (undefined4 *)*puVar3;
        }
        FUN_00403640(&local_2c,puVar8,puVar3[4]);
        local_8 = 0;
        if (0xf < local_30) {
          pvVar10 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar10 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar10);
        }
        puVar3 = (undefined4 *)piVar1[0x44];
        for (puVar8 = (undefined4 *)piVar1[0x43]; puVar8 != puVar3; puVar8 = puVar8 + 1) {
          FUN_004024e0(&stack0xffffff88,(undefined4 *)*puVar8);
          iVar4 = FUN_004a8380(in_stack_ffffff88);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n `$%s");
            local_8 = 4;
            puVar9 = puVar5;
            if (0xf < (uint)puVar5[5]) {
              puVar9 = (undefined4 *)*puVar5;
            }
            FUN_00403640(&local_2c,puVar9,puVar5[4]);
            local_8 = 0;
            if (0xf < local_30) {
              pvVar10 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar10 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
LAB_004f2ba9:
                local_8 = 0;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar10);
            }
          }
        }
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void * __cdecl FUN_004f2dd0(void *param_1)

{
  FUN_004024e0(param_1,&DAT_006557f8);
  return param_1;
}


void * __cdecl FUN_004f2df0(void *param_1)

{
  FUN_004024e0(param_1,&DAT_00655810);
  return param_1;
}


void __cdecl FUN_004f2e10(uint *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf470;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f3165;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  FUN_00402690(&local_2c,"`!Exterior:\n",0xc);
  local_8 = 0;
  uStack_7 = 0;
  if (((int *)**(int **)(param_2 + 0x40) == (int *)0x0) ||
     (cVar1 = (**(code **)(*(int *)**(int **)(param_2 + 0x40) + 0x10))(), cVar1 == '\0')) {
    FUN_00403640(&local_2c,"`@no sensors",0xc);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x188);
    if (iVar3 == 0) {
      FUN_00403640(&local_2c,"`7**void**",10);
    }
    else {
      if (iVar3 == 2) {
        FUN_00403640(&local_2c,"`9Nebula",8);
        FUN_004a7350(*(int *)(param_2 + 0x18c));
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`!%s");
        local_8 = 1;
        FUN_00403490(&local_2c,puVar2);
        local_8 = 0;
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
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Dens.: `0%.0f%%");
        local_8 = 2;
      }
      else {
        if (iVar3 != 1) goto LAB_004f3086;
        FUN_00403640(&local_2c,"`%Planetesimals",0xf);
        FUN_004a73a0(*(int *)(param_2 + 0x18c));
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`!%s");
        local_8 = 3;
        FUN_00403490(&local_2c,puVar2);
        local_8 = 0;
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
        puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Dens.: `0%.0f%%");
        local_8 = 4;
      }
      FUN_00403490(&local_2c,puVar2);
      local_8 = 0;
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_004f2fbd;
        FUN_005adb3f(pvVar5);
      }
    }
LAB_004f3086:
    iVar3 = FUN_005224c0(*(void **)(param_2 + 0x40),0xd,'\x01');
    if (iVar3 != 0) {
      FUN_00520260(*(int *)(param_2 + 0x24));
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`2Solar: `c%.0f%%");
      local_8 = 5;
      puVar2 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar2 = (undefined4 *)*puVar4;
      }
      FUN_00403640(&local_2c,puVar2,puVar4[4]);
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
LAB_004f2fbd:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
LAB_004f3165:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f3190(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9f98;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f342b;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  bVar3 = false;
  iVar1 = *(int *)(param_2 + 0x194);
  if (((((iVar1 != 0) && ((*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec) & 0xfffffff8U) == 0)) &&
       ((*(int *)(iVar1 + 0xfc) - *(int *)(iVar1 + 0xf8) & 0xfffffff8U) != 0)) ||
      (*(char *)(param_2 + 0x1b1) != '\0')) ||
     (((iVar1 != 0 &&
       (((iVar2 = *(int *)(iVar1 + 0xe0), iVar2 == 5 || (iVar2 == 6)) ||
        ((iVar2 == 4 || (iVar2 == 7)))))) && (*(float *)(iVar1 + 0x114) == -1.0)))) {
    bVar3 = true;
  }
  bVar4 = false;
  if ((iVar1 != 0) &&
     ((((*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec) & 0xfffffff8U) != 0 &&
       (*(char *)(param_2 + 0x1b1) == '\0')) ||
      (((iVar2 = *(int *)(iVar1 + 0xe0), iVar2 == 5 ||
        (((iVar2 == 6 || (iVar2 == 4)) || (iVar2 == 7)))) && (*(float *)(iVar1 + 0x114) != -1.0)))))
     ) {
    bVar4 = true;
  }
  if (bVar3) {
    pcVar5 = "`$HIST\n";
  }
  else {
    pcVar5 = "`8HIST\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  if (bVar4) {
    pcVar5 = "`@LIVE\n";
  }
  else {
    pcVar5 = "`8LIVE\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  if (iVar1 == 0) {
    FUN_00403640(&local_2c," `8IFF\n",7);
LAB_004f330e:
    pcVar5 = "`8REAC\n";
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xe0);
    if (iVar2 == 0) {
      if ((*(int *)(iVar1 + 0x130) != 0) &&
         (*(char *)(*(int *)(*(int *)(iVar1 + 0x130) + 0x40) + 0x34) != '\0')) goto LAB_004f3350;
LAB_004f3385:
      pcVar5 = " `8IFF\n";
    }
    else {
      if (((iVar2 != 5) && (iVar2 != 6)) && ((iVar2 != 4 && (iVar2 != 7)))) goto LAB_004f3385;
LAB_004f3350:
      pcVar5 = " `%IFF\n";
    }
    FUN_00403640(&local_2c,pcVar5,7);
    if (*(char *)(iVar1 + 0x10f) == '\0') goto LAB_004f330e;
    pcVar5 = "`%REAC\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x10d) == '\0')) {
    pcVar5 = " `8RCS\n";
  }
  else {
    pcVar5 = " `%RCS\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x10e) == '\0')) {
    pcVar5 = "`8DRVE\n";
  }
  else {
    pcVar5 = "`%DRVE\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x110) == '\0')) {
    pcVar5 = "`8JMPD\n";
  }
  else {
    pcVar5 = "`%JMPD\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x112) == '\0')) {
    pcVar5 = "`8WEAP\n";
  }
  else {
    pcVar5 = "`%WEAP\n";
  }
  FUN_00403640(&local_2c,pcVar5,7);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
LAB_004f342b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f3450(undefined1 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2608;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    ppuVar3 = &PTR_005ce008;
    uVar4 = 0;
  }
  else {
    local_8 = 0;
    iVar1 = *(int *)(param_2 + 0xfc);
    if (iVar1 == 0) {
      uVar4 = 0x13;
      ppuVar3 = (undefined **)"`%[`!*`%]`3VE ST NA";
    }
    else if (iVar1 == 1) {
      uVar4 = 0x15;
      ppuVar3 = (undefined **)" `3*`%[`!VE`%]`3ST NA";
    }
    else if (iVar1 == 2) {
      uVar4 = 0x15;
      ppuVar3 = (undefined **)" `3* VE`%[`!ST`%]`3NA";
    }
    else {
      uVar4 = 0x14;
      ppuVar3 = (undefined **)" `3* VE ST`%[`!NA`%]";
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,ppuVar3,uVar4);
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f3520(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf4c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    local_8 = 0;
    uStack_7 = 0;
    if (*(int *)(*(int *)(param_2 + 0x40) + 8) == 0) {
      param_1[4] = 0;
      param_1[5] = 0xf;
      *(undefined1 *)param_1 = 0;
      FUN_00402690(param_1,"`8no CM",7);
      if (0xf < uStack_18) {
        pvVar3 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (pvVar3 = *(void **)((int)local_2c + -4),
           0x1f < (uint)((int)local_2c + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
    }
    else {
      FUN_00403640(&local_2c,"`!Countermeasures\n",0x12);
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Type : `0%s\n");
      local_8 = 1;
      puVar2 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar2 = (undefined4 *)*puVar1;
      }
      FUN_00403640(&local_2c,puVar2,puVar1[4]);
      local_8 = 0;
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
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Ammo : `%c%d`2/`!%.0f\n");
      local_8 = 2;
      puVar2 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar2 = (undefined4 *)*puVar1;
      }
      FUN_00403640(&local_2c,puVar2,puVar1[4]);
      local_8 = 0;
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
      if (-1.0 < *(float *)(*(int *)(*(int *)(param_2 + 0x40) + 8) + 0x6c)) {
        puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Reload: `0%.2f\n");
        local_8 = 3;
        puVar2 = puVar1;
        if (0xf < (uint)puVar1[5]) {
          puVar2 = (undefined4 *)*puVar1;
        }
        FUN_00403640(&local_2c,puVar2,puVar1[4]);
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
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f37d0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9f98;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x1c), piVar1 == (int *)0x0))
  {
LAB_004f39f5:
    uVar7 = 0;
    pcVar6 = (char *)&PTR_005ce008;
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,uVar3);
    if (cVar2 == '\0') goto LAB_004f39f5;
    local_8 = 0;
    if (*(float *)(param_2 + 0x160) == -1.0) {
      uVar7 = 0x55;
      pcVar6 = 
      "`8SCH SYN ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART";
    }
    else {
      iVar5 = *(int *)(*(int *)(param_2 + 0x40) + 0x1c);
      iVar4 = FUN_00437c60(*(int **)(iVar5 + 0xc));
      iVar5 = (int)((*(float *)(param_2 + 0x160) /
                    ((((float)iVar4 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
                    *(float *)(*(int *)(iVar5 + 8) + 0x104))) * 100.0);
      if (iVar5 < 0x5f) {
        if (iVar5 < 0x5a) {
          if ((iVar5 < 0x55) && (iVar5 < 0x50)) {
            if ((iVar5 < 0x4b) && (iVar5 < 0x46)) {
              if (iVar5 < 0x41) {
                if (iVar5 < 0x3c) {
                  if (iVar5 < 0x37) {
                    if (iVar5 < 0x32) {
                      if (iVar5 < 0x2d) {
                        if (iVar5 < 0x28) {
                          if (iVar5 < 0x23) {
                            if (iVar5 < 0x1e) {
                              if (iVar5 < 0x19) {
                                if (iVar5 < 0x14) {
                                  if (iVar5 < 0xf) {
                                    if (iVar5 < 10) {
                                      *(undefined4 *)(param_1 + 0x10) = 0;
                                      *(undefined4 *)(param_1 + 0x14) = 0xf;
                                      *param_1 = 0;
                                      uVar7 = 0x5d;
                                      if (iVar5 < 5) {
                                        pcVar6 = 
                                        "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\nORX MRY MMP MMX VMY VMT POL\n`%PL1 PL2 PLX MUX `!VUX EML ART"
                                        ;
                                      }
                                      else {
                                        pcVar6 = 
                                        "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\nPL1 PL2 PLX MUX `8VUX EML ART"
                                        ;
                                      }
                                      goto LAB_004f3a0f;
                                    }
                                    uVar7 = 0x5f;
                                    pcVar6 = 
                                    "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\nPL1 PL2 PLX `7MUX `8VUX EML ART"
                                    ;
                                  }
                                  else {
                                    uVar7 = 0x5f;
                                    pcVar6 = 
                                    "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\nPL1 PL2 `7PLX MUX `8VUX EML ART"
                                    ;
                                  }
                                }
                                else {
                                  uVar7 = 0x5f;
                                  pcVar6 = 
                                  "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\n`7PL1 PL2 `8PLX MUX VUX EML ART"
                                  ;
                                }
                              }
                              else {
                                uVar7 = 0x5d;
                                pcVar6 = 
                                "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\nORX MRY MMP MMX VMY VMT `7POL\nPL1 PL2 `8PLX MUX VUX EML ART"
                                ;
                              }
                            }
                            else {
                              uVar7 = 0x61;
                              pcVar6 = 
                              "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\n`%ORX `7MRY `%MMP MMX VMY VMT POL\n`8PL1 PL2 PLX MUX VUX EML ART"
                              ;
                            }
                          }
                          else {
                            uVar7 = 0x5d;
                            pcVar6 = 
                            "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\n`%ORX MRY MMP MMX VMY VMT POL\n`8PL1 PL2 PLX MUX VUX EML ART"
                            ;
                          }
                        }
                        else {
                          uVar7 = 0x61;
                          pcVar6 = 
                          "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\n`%ORX `7MRY `5MMP MMX VMY`8 VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                          ;
                        }
                      }
                      else {
                        uVar7 = 0x5d;
                        pcVar6 = 
                        "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\n`%ORX MRY MMP MMX VMY`8 VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                        ;
                      }
                    }
                    else {
                      uVar7 = 0x5f;
                      pcVar6 = 
                      "`8SCH SYN ACK `%TTN `#BOM `0BBN SAN\n`8ORX MRY MMP`8 MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                      ;
                    }
                  }
                  else {
                    uVar7 = 0x5f;
                    pcVar6 = 
                    "`8SCH SYN ACK `%TTN `$BOM `2BBN SAN\n`8ORX MRY MMP`8 MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                    ;
                  }
                }
                else {
                  uVar7 = 0x5d;
                  pcVar6 = 
                  "`8SCH SYN ACK `%TTN `#BOM `0BBN `8SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                  ;
                }
              }
              else {
                uVar7 = 0x5d;
                pcVar6 = 
                "`8SCH SYN ACK `%TTN `$BOM `0BBN `8SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                ;
              }
            }
            else {
              uVar7 = 0x59;
              pcVar6 = 
              "`8SCH SYN `!ACK `8TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
              ;
            }
          }
          else {
            uVar7 = 0x59;
            pcVar6 = 
            "`8SCH `!SYN `8ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
            ;
          }
        }
        else {
          uVar7 = 0x57;
          pcVar6 = 
          "`7SCH `8SYN ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
          ;
        }
      }
      else {
        uVar7 = 0x57;
        pcVar6 = 
        "`%SCH `8SYN ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART";
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
LAB_004f3a0f:
  FUN_00402690(param_1,pcVar6,uVar7);
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * __cdecl FUN_004f3a40(undefined1 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((param_2 != 0) && (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      if (*(float *)(param_2 + 0x160) == -1.0) {
        uVar5 = 0x1a;
        pcVar4 = "`2SyncState: `7not syncing";
      }
      else {
        iVar3 = (int)((*(float *)(param_2 + 0x160) /
                      *(float *)(*(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x1c) + 8) + 0x104)) *
                     100.0);
        if (iVar3 < 0x50) {
          if (iVar3 < 0x3c) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0xf;
            *param_1 = 0;
            if (0x18 < iVar3) {
              FUN_00402690(param_1,"`2SyncState: `0syncing data",0x1b);
              return param_1;
            }
            FUN_00402690(param_1,"`2SyncState: `!verifying data",0x1d);
            return param_1;
          }
          uVar5 = 0x1a;
          pcVar4 = "`2SyncState: `$handshaking";
        }
        else {
          uVar5 = 0x18;
          pcVar4 = "`2SyncState: `$searching";
        }
      }
      goto LAB_004f3b09;
    }
  }
  uVar5 = 0x16;
  pcVar4 = "`2SyncState: `@*error*";
LAB_004f3b09:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,pcVar4,uVar5);
  return param_1;
}


undefined1 * __cdecl FUN_004f3b30(undefined1 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x40) + 0x1c) + 0x14))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x40) + 0x1c) + 0x18))();
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *param_1 = 0;
        if (cVar2 != '\0') {
          FUN_00402690(param_1,"`2DmgState : `$system damaged",0x1d);
          return param_1;
        }
        FUN_00402690(param_1,"`2DmgState : `%nominal",0x16);
        return param_1;
      }
      uVar4 = 0x24;
      pcVar3 = "`2DmgState : `@system non-functional";
      goto LAB_004f3bbc;
    }
  }
  uVar4 = 0x16;
  pcVar3 = "`2DmgState : `@*error*";
LAB_004f3bbc:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,pcVar3,uVar4);
  return param_1;
}


undefined1 * __cdecl FUN_004f3be0(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 != 0) && (iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0x1c), iVar1 != 0)) &&
     (*(char *)(iVar1 + 99) != '\0')) {
    FUN_00591e00(param_1,"`2Model    : `0%s %s");
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"`2Model    : `8none",0x13);
  return param_1;
}


undefined1 * __cdecl FUN_004f3c60(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 != 0) && (iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0x1c), iVar1 != 0)) &&
     (*(char *)(iVar1 + 99) != '\0')) {
    FUN_00412700();
    iVar1 = FUN_00412700();
    FUN_0043a5a0(iVar1);
    FUN_00591e00(param_1,"`2E. Queue : `%c%d");
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"`2E. Queue : `8n/a",0x12);
  return param_1;
}


void __cdecl FUN_004f3ce0(uint *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bf508;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,"`@ERROR",7);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    if (*(int *)(param_2 + 0x174) == 0) {
      FUN_00403640(&local_44,"`8* unmoored *",0xe);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      pcVar2 = (&PTR_s_Debris_005df81c)[*(int *)(*(int *)(param_2 + 0x174) + 0x60)];
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(local_2c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      local_8._0_1_ = 1;
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`%%%s\n");
      local_8 = CONCAT31(local_8._1_3_,2);
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
      if (0xf < local_48) {
        pvVar6 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar6 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
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
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_44;
    param_1[1] = uStack_40;
    param_1[2] = uStack_3c;
    param_1[3] = uStack_38;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f3ea0(uint *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint in_stack_ffffff94;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf548;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x174) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x174) + 0x60) != 4)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Name : `7%s\n");
    local_8._0_1_ = 1;
    puVar3 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar3 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar3,puVar2[4]);
    local_8._0_1_ = 0;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Rego : `!%s\n");
    local_8._0_1_ = 2;
    puVar3 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar3 = (undefined4 *)*puVar2;
    }
    FUN_00403640(&local_2c,puVar3,puVar2[4]);
    local_8 = (uint)local_8._1_3_ << 8;
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
    pvVar4 = (void *)(in_stack_ffffff94 & 0xffffff00);
    FUN_00402690(&stack0xffffff94,&PTR_005ce008,0);
    cVar1 = FUN_004d8310(param_2,0,pvVar4);
    if (cVar1 == '\0') {
      FUN_00403640(&local_2c,"`$ERR  : `@*MAG LOCKED*",0x17);
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_2c;
    param_1[1] = uStack_28;
    param_1[2] = uStack_24;
    param_1[3] = uStack_20;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
