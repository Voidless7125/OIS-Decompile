#include "../ois_server.exe.h"


void __cdecl FUN_004f40a0(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint in_stack_ffffff60;
  int local_74;
  int local_68;
  int local_64;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  void *pvStack_28;
  void *pvStack_24;
  void *pvStack_20;
  void *local_1c;
  void *pvStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf588;
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
    local_4c = 0;
    uStack_48 = 0xf;
    local_5c = local_5c & 0xffffff00;
    local_8 = 0;
    uStack_7 = 0;
    pvVar8 = (void *)(in_stack_ffffff60 & 0xffffff00);
    FUN_00402690(&stack0xffffff60,&PTR_005ce008,0);
    cVar3 = FUN_004d84d0(param_2,0,pvVar8);
    if (*(int *)(param_2 + 0x174) == 0) {
      FUN_00402690(&local_5c,"`8** unmoored **",0x10);
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0x174) + 0xe8);
      if (iVar1 == 0) {
        FUN_00402690(&local_5c,"`7** no cargo located **",0x18);
      }
      else {
        local_68 = -1;
        iVar7 = 0;
        do {
          if ((iVar7 < 0) || ((0 < *(int *)(iVar1 + 8) && (*(int *)(iVar1 + 8) <= iVar7)))) {
            bVar10 = false;
          }
          else {
            bVar10 = *(int *)(iVar1 + 0xc + iVar7 * 4) != 0;
          }
          iVar4 = iVar7;
          if (!bVar10) {
            iVar4 = local_68;
          }
          iVar7 = iVar7 + 1;
          local_68 = iVar4;
        } while (iVar7 < 0xe);
        local_74 = 0;
        if (-1 < iVar4) {
          local_64 = 0xc;
          do {
            local_1c = (void *)0x0;
            pvStack_18 = (void *)0xf;
            local_2c = (void *)((uint)local_2c & 0xffffff00);
            local_8 = 1;
            iVar1 = *(int *)(*(int *)(param_2 + 0x174) + 0xe8);
            if ((local_74 < 0) ||
               (((0 < *(int *)(iVar1 + 8) && (*(int *)(iVar1 + 8) <= local_74)) ||
                (*(int *)(iVar1 + local_64) == 0)))) {
              FUN_00402690(&local_2c,"`8no cargo pod",0xe);
            }
            else if (cVar3 == '\0') {
              iVar7 = 1;
              do {
                if (*(char *)(iVar7 + *(int *)(iVar1 + local_64)) == '\0') break;
                iVar7 = iVar7 + 1;
              } while (iVar7 < 3);
              if (*(int *)(*(int *)(iVar1 + local_64) + 8) < 1) {
                ppvVar5 = (void **)FUN_00591e00((undefined1 *)local_44,"`%cempty pod");
              }
              else {
                FUN_004a84a0(*(int *)(*(int *)(iVar1 + local_64) + 4));
                ppvVar5 = (void **)FUN_00591e00((undefined1 *)local_44,"%dx `%c%s");
              }
              if (&local_2c != ppvVar5) {
                FUN_00401b20((int *)&local_2c);
                local_2c = *ppvVar5;
                pvStack_28 = ppvVar5[1];
                pvStack_24 = ppvVar5[2];
                pvStack_20 = ppvVar5[3];
                local_1c = ppvVar5[4];
                pvStack_18 = ppvVar5[5];
                ppvVar5[4] = (void *)0x0;
                ppvVar5[5] = (void *)0xf;
                *(undefined1 *)ppvVar5 = 0;
              }
              if (0xf < local_30) {
                pvVar8 = local_44[0];
                if ((0xfff < local_30 + 1) &&
                   (pvVar8 = *(void **)((int)local_44[0] + -4), uVar2 = local_8,
                   0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) goto LAB_004f448f;
                FUN_005adb3f(pvVar8);
              }
            }
            else {
              FUN_00402690(&local_2c,"`$-UNKNOWN-",0xb);
            }
            local_74 = local_74 + 1;
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%c[%s`%c%d`%c] %s\n");
            local_8 = 2;
            puVar9 = puVar6;
            if (0xf < (uint)puVar6[5]) {
              puVar9 = (undefined4 *)*puVar6;
            }
            FUN_00403640(&local_5c,puVar9,puVar6[4]);
            local_8 = 1;
            uVar2 = local_8;
            local_8 = 1;
            if (0xf < local_30) {
              pvVar8 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar8 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) goto LAB_004f448f;
              FUN_005adb3f(pvVar8);
            }
            local_8 = 0;
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
            if ((void *)0xf < pvStack_18) {
              pvVar8 = local_2c;
              if ((0xfff < (int)pvStack_18 + 1U) &&
                 (pvVar8 = *(void **)((int)local_2c + -4), uVar2 = local_8,
                 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar8)))) {
LAB_004f448f:
                local_8 = uVar2;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar8);
            }
            local_64 = local_64 + 4;
          } while (local_74 <= iVar4);
        }
      }
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_5c;
    param_1[1] = uStack_58;
    param_1[2] = uStack_54;
    param_1[3] = uStack_50;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f44a0(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int local_64;
  int local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  void *pvStack_28;
  void *pvStack_24;
  void *pvStack_20;
  void *local_1c;
  void *pvStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf5c8;
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
    local_4c = 0;
    uStack_48 = 0xf;
    local_5c = local_5c & 0xffffff00;
    uStack_7 = 0;
    local_60 = 0;
    local_64 = 0xc;
    do {
      local_1c = (void *)0x0;
      pvStack_18 = (void *)0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      local_8 = 1;
      if (local_60 < *(int *)(*(int *)(param_2 + 0x254) + 0xe4)) {
        iVar1 = *(int *)(param_2 + 0x1f8);
        if ((local_60 < 0) ||
           (((0 < *(int *)(iVar1 + 8) && (*(int *)(iVar1 + 8) <= local_60)) ||
            (*(int *)(local_64 + iVar1) == 0)))) {
          FUN_00402690(&local_2c,"`8no cargo pod",0xe);
        }
        else {
          iVar3 = 1;
          do {
            if (*(char *)(*(int *)(local_64 + iVar1) + iVar3) == '\0') break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 3);
          if (*(int *)(*(int *)(local_64 + iVar1) + 8) < 1) {
            ppvVar4 = (void **)FUN_00591e00((undefined1 *)local_44,"`%cempty pod");
          }
          else {
            FUN_004a84a0(*(int *)(*(int *)(local_64 + iVar1) + 4));
            ppvVar4 = (void **)FUN_00591e00((undefined1 *)local_44,"%dx `%c%s");
          }
          if (&local_2c != ppvVar4) {
            FUN_00401b20((int *)&local_2c);
            local_2c = *ppvVar4;
            pvStack_28 = ppvVar4[1];
            pvStack_24 = ppvVar4[2];
            pvStack_20 = ppvVar4[3];
            local_1c = ppvVar4[4];
            pvStack_18 = ppvVar4[5];
            ppvVar4[4] = (void *)0x0;
            ppvVar4[5] = (void *)0xf;
            *(undefined1 *)ppvVar4 = 0;
          }
          if (0xf < local_30) {
            pvVar7 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar7 = *(void **)((int)local_44[0] + -4), uVar2 = local_8,
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_004f47d3;
            FUN_005adb3f(pvVar7);
          }
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%c[%s`%c%d`%c] %s\n");
        local_8 = 2;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_5c,puVar6,puVar5[4]);
        local_8 = 1;
        uVar2 = local_8;
        local_8 = 1;
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_004f47d3;
          FUN_005adb3f(pvVar7);
        }
        local_8 = 0;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if ((void *)0xf < pvStack_18) {
          pvVar7 = local_2c;
          if ((0xfff < (int)pvStack_18 + 1U) &&
             (pvVar7 = *(void **)((int)local_2c + -4), uVar2 = local_8,
             0x1f < (uint)((int)local_2c + (-4 - (int)pvVar7)))) {
LAB_004f47d3:
            local_8 = uVar2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
      }
      else {
        local_8 = 0;
      }
      local_64 = local_64 + 4;
      local_60 = local_60 + 1;
    } while (local_64 < 0x44);
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = local_5c;
    param_1[1] = uStack_58;
    param_1[2] = uStack_54;
    param_1[3] = uStack_50;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f47e0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
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
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf630;
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
    uVar1 = *(uint *)(param_2 + 0x1ec);
    pvVar6 = *(void **)(param_2 + 0x1f8);
    if (((int)uVar1 < 0) ||
       (((0 < *(int *)((int)pvVar6 + 8) && (*(int *)((int)pvVar6 + 8) <= (int)uVar1)) ||
        (*(int *)((int)pvVar6 + uVar1 * 4 + 0xc) == 0)))) {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pod  : `8none\n");
      local_8._0_1_ = 1;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
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
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cont.: `8none\n");
      local_8._0_1_ = 2;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
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
      FUN_00403640(&local_44,"`2Max. : `8nil",0xe);
    }
    else {
      FUN_005069b0(pvVar6,(undefined1 *)local_2c,uVar1,'\0');
      local_8._0_1_ = 3;
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Pod  : %s\n");
      local_8._0_1_ = 4;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
      local_8._0_1_ = 3;
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
      local_8._0_1_ = 0;
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
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar2 = *(int *)(*(int *)(param_2 + 0x1f8) + 0xc + *(int *)(param_2 + 0x1ec) * 4);
      if (*(int *)(iVar2 + 8) == 0) {
        FUN_00403640(&local_44,"`2Cont.: `8nil\n",0xf);
      }
      else {
        piVar4 = FUN_004a84a0(*(int *)(iVar2 + 4));
        if (piVar4 == (int *)0x0) {
          FUN_00403640(&local_44,"`2Cont.: `%$unknown\n",0x14);
        }
        else {
          FUN_004024e0(local_5c,(undefined4 *)piVar4[7]);
          local_8._0_1_ = 5;
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cont.: `%c%dx %s\n");
          local_8._0_1_ = 6;
          puVar5 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar5 = (undefined4 *)*puVar3;
          }
          FUN_00403640(&local_44,puVar5,puVar3[4]);
          local_8._0_1_ = 5;
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
          local_8._0_1_ = 0;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
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
        }
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Max. : `7%d");
      local_8 = CONCAT31(local_8._1_3_,7);
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
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


void __cdecl FUN_004f4c10(uint *param_1,void *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *local_5c [5];
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
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bf6b0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == (void *)0x0) || (*(int *)((int)param_2 + 0x178) == 0)) ||
     (*(int *)(*(int *)(*(int *)((int)param_2 + 0x178) + 0x254) + 0x158) != 3)) {
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
    FUN_00403640(&local_44,"`2Docked with :\n",0x10);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`0%s\n\n");
    local_8._0_1_ = 1;
    puVar5 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar5 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar5,puVar3[4]);
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
    if (DAT_0065c2ec == 0) {
      DAT_0065c2ec = FUN_005adb0f(1);
    }
    iVar4 = FUN_0051a690(param_2);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Credits : `%c%d`$c\n");
    local_8._0_1_ = 2;
    puVar5 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar5 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_44,puVar5,puVar3[4]);
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
    FUN_00403640(&local_44,"\n** Services **\n",0x10);
    if (iVar4 * 5 < 1) {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Hull repair  : `8%dc\n");
      local_8._0_1_ = 4;
      uVar1 = puVar5[5];
    }
    else {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Hull repair  : `$%dc\n");
      local_8._0_1_ = 3;
      uVar1 = puVar5[5];
    }
    puVar3 = puVar5;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_44,puVar3,puVar5[4]);
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_004f4e22;
      FUN_005adb3f(pvVar6);
    }
    if (DAT_0065c2ec == 0) {
      DAT_0065c2ec = FUN_005adb0f(1);
    }
    iVar4 = FUN_0051a960((int)param_2);
    if (iVar4 < 1) {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2System repair: `8%dc\n");
      local_8._0_1_ = 6;
      uVar1 = puVar5[5];
    }
    else {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2System repair: `$%dc\n");
      local_8._0_1_ = 5;
      uVar1 = puVar5[5];
    }
    puVar3 = puVar5;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_00403640(&local_44,puVar3,puVar5[4]);
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_004f4e22;
      FUN_005adb3f(pvVar6);
    }
    if (*(int *)(*(int *)((int)param_2 + 0x40) + 8) != 0) {
      FUN_0049b6c0();
      puVar3 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"`2CMs          : %d/%.0f (`$%dc`2)\n");
      local_8._0_1_ = 7;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_004f4e22;
        FUN_005adb3f(pvVar6);
      }
    }
    if (*(int *)(*(int *)((int)param_2 + 0x40) + 0x20) != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_0060a970,3);
      local_8._0_1_ = 8;
      FUN_0049b6c0();
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_004f4e22;
        FUN_005adb3f(pvVar6);
      }
      FUN_004ae510(*(int *)(*(int *)((int)param_2 + 0x40) + 0x20));
      puVar3 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_5c,"`2Torpedos     : %d/%.0f (`$%dc`2)\n");
      local_8._0_1_ = 9;
      puVar5 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_44,puVar5,puVar3[4]);
      if (0xf < local_48) {
        pvVar6 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar6 = *(void **)((int)local_5c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
LAB_004f4e22:
          local_8._0_1_ = uVar2;
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


void __cdecl FUN_004f50f0(uint *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  uint in_stack_ffffffb0;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
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
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bf708;
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
    pvVar3 = (void *)(in_stack_ffffffb0 & 0xffffff00);
    FUN_00402690(&stack0xffffffb0,"tutorial_jumped",0xf);
    local_8._0_1_ = 1;
    puVar2 = FUN_00412df0();
    local_8._0_1_ = 0;
    bVar1 = FUN_004a1150(puVar2,pvVar3);
    if (bVar1 == 0) {
      pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
      FUN_00402690(&stack0xffffffb0,"tutorial_jumping",0x10);
      local_8._0_1_ = 2;
      puVar2 = FUN_00412df0();
      local_8._0_1_ = 0;
      bVar1 = FUN_004a1150(puVar2,pvVar3);
      if (bVar1 == 0) {
        pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
        FUN_00402690(&stack0xffffffb0,"tutorial_scanned",0x10);
        local_8._0_1_ = 3;
        puVar2 = FUN_00412df0();
        local_8._0_1_ = 0;
        bVar1 = FUN_004a1150(puVar2,pvVar3);
        if (bVar1 == 0) {
          pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
          FUN_00402690(&stack0xffffffb0,"tutorial_scanning",0x11);
          local_8._0_1_ = 4;
          puVar2 = FUN_00412df0();
          local_8._0_1_ = 0;
          bVar1 = FUN_004a1150(puVar2,pvVar3);
          if (bVar1 == 0) {
            FUN_00403640(&local_2c,"`%Ship State : `$PRE-JUMP CHECK\n",0x20);
            FUN_00403640(&local_2c,"`%Jumps Left : `!1\n\n",0x14);
            FUN_00403640(&local_2c,"`%Population : `!498,091\n",0x19);
            FUN_00403640(&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
            FUN_00403640(&local_2c,"`%Batteries  : `$99.78%\n",0x18);
            FUN_00403640(&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
            FUN_00403640(&local_2c,"`%Jump Drive : `!SPUN UP\n\n",0x1a);
            uVar5 = 0x13;
            pcVar4 = "`%Hull Insp. : `^4%";
          }
          else {
            FUN_00403640(&local_2c,"`%Ship State : `$PRE-JUMP CHECK\n",0x20);
            FUN_00403640(&local_2c,"`%Jumps Left : `!1\n\n",0x14);
            FUN_00403640(&local_2c,"`%Population : `!498,091\n",0x19);
            FUN_00403640(&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
            FUN_00403640(&local_2c,"`%Batteries  : `$99.78%\n",0x18);
            FUN_00403640(&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
            FUN_00403640(&local_2c,"`%Jump Drive : `!SPUN UP\n\n",0x1a);
            uVar5 = 0x14;
            pcVar4 = "`%Hull Insp. : `$92%";
          }
        }
        else {
          FUN_00403640(&local_2c,"`%Ship State : `$AWAITING JUMP SYNC\n",0x24);
          FUN_00403640(&local_2c,"`%Jumps Left : `!1\n\n",0x14);
          FUN_00403640(&local_2c,"`%Population : `!498,091\n",0x19);
          FUN_00403640(&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
          FUN_00403640(&local_2c,"`%Batteries  : `$99.78%\n",0x18);
          FUN_00403640(&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
          FUN_00403640(&local_2c,"`%Jump Drive : `!SPUN UP\n\n",0x1a);
          uVar5 = 0x15;
          pcVar4 = "`%Hull Insp. : `%100%";
        }
      }
      else {
        FUN_00403640(&local_2c,"`%Ship State : `#JUMPING\n",0x19);
        FUN_00403640(&local_2c,"`%Jumps Left : `!1\n\n",0x14);
        FUN_00403640(&local_2c,"`%Population : `!498,091\n",0x19);
        FUN_00403640(&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
        FUN_00403640(&local_2c,"`%Batteries  : `$99.78%\n",0x18);
        FUN_00403640(&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
        FUN_00403640(&local_2c,"`%Jump Drive : `!#JUMPING\n\n",0x1b);
        uVar5 = 0x15;
        pcVar4 = "`%Hull Insp. : `!100%";
      }
    }
    else {
      FUN_00403640(&local_2c,"`%Ship State : `@ERROR: NO SIGNAL\n",0x22);
      FUN_00403640(&local_2c,"`%Jumps Left : `$UNKNOWN\n\n",0x1a);
      FUN_00403640(&local_2c,"`%Population : `$UNKNOWN\n",0x19);
      FUN_00403640(&local_2c,"`%Solar Wings: `$UNKNOWN\n",0x19);
      FUN_00403640(&local_2c,"`%Batteries  : `$UNKNOWN\n",0x19);
      FUN_00403640(&local_2c,"`%Reactors   : `$UNKNOWN\n",0x19);
      FUN_00403640(&local_2c,"`%Jump Drive : `$UNKNOWN\n\n",0x1a);
      uVar5 = 0x18;
      pcVar4 = "`%Hull Insp. : `$UNKNOWN";
    }
    FUN_00403640(&local_2c,pcVar4,uVar5);
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


void __cdecl FUN_004f54d0(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
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
    FUN_00403640(&local_2c,"`%REMORA UTILITY SHUTTLE\n",0x19);
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`!%s\n\n");
    local_8._0_1_ = 1;
    puVar2 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar2 = (undefined4 *)*puVar1;
    }
    FUN_00403640(&local_2c,puVar2,puVar1[4]);
    local_8._0_1_ = 0;
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
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`7Registry : `!%s\n");
    local_8._0_1_ = 2;
    puVar2 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar2 = (undefined4 *)*puVar1;
    }
    FUN_00403640(&local_2c,puVar2,puVar1[4]);
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
    FUN_00403640(&local_2c,"`7Shuttle #: `74`%/`726\n",0x18);
    FUN_00403640(&local_2c,"\n\n`%CHANGE ROOMS: `$arrow keys while zoomed out",0x2f);
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


undefined1 * __cdecl FUN_004f5690(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004124e0();
  if (*(int *)(iVar1 + 0x34) != 0) {
    iVar1 = FUN_004124e0();
    FUN_004024e0(param_1,(undefined4 *)(*(int *)(iVar1 + 0x34) + 0x54));
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"** no article selected **",0x19);
  return param_1;
}


void __cdecl FUN_004f56e0(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
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
  puStack_c = &LAB_005bf740;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x178) == 0)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    FUN_00402690(&local_2c,"`!- CASSANDRA DOCKS -\n",0x16);
    local_8 = 0;
    FUN_00403640(&local_2c,"`7Port Wing\n",0xc);
    FUN_00403640(&local_2c,"`%Umbillical 16B-C ->\n",0x16);
    FUN_00403640(&local_2c,"`%<- Transportation\n",0x14);
    puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%4A: `%%%s\n");
    local_8._0_1_ = 1;
    puVar2 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar2 = (undefined4 *)*puVar1;
    }
    FUN_00403640(&local_2c,puVar2,puVar1[4]);
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
    FUN_00403640(&local_2c,"`%4B: `7Alexei Leonov\n",0x16);
    FUN_00403640(&local_2c,"`%4C: `7Kathryn C. Thornton",0x1b);
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


void __cdecl FUN_004f5870(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvVar7;
  void *this;
  void *pvVar8;
  uint in_stack_ffffff7c;
  char *pcVar9;
  uint uVar10;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bf7b8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x174) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x174) + 0xe8) == 0)) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f5c73;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  pvVar7 = (void *)(in_stack_ffffff7c & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,&PTR_005ce008,0);
  cVar3 = FUN_004d84d0(param_2,0,pvVar7);
  if (cVar3 != '\0') {
    uVar10 = 0x1f;
    pcVar9 = "`$Board vessel to remove locks.";
    goto LAB_004f5c4c;
  }
  pvVar7 = *(void **)(*(int *)(param_2 + 0x174) + 0xe8);
  if (pvVar7 == (void *)0x0) {
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pod  : `8n/a\n");
    local_8 = 1;
    FUN_00403490(&local_44,puVar5);
    local_8 = 0;
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
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cont.: `8n/a\n");
    local_8 = 2;
LAB_004f59b5:
    FUN_00403490(&local_44,puVar5);
    pvVar7 = local_2c[0];
    uVar10 = local_18;
    if (0xf < local_18) {
LAB_004f59ce:
      pvVar8 = pvVar7;
      if ((0xfff < uVar10 + 1) &&
         (pvVar8 = *(void **)((int)pvVar7 + -4), uVar2 = local_8,
         0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar8)))) {
LAB_004f59f0:
        local_8 = uVar2;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  else {
    bVar4 = FUN_00507140(pvVar7,*(int *)(param_2 + 0x1f0));
    if (!bVar4) {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pod  : `8none\n");
      local_8 = 3;
      FUN_00403490(&local_44,puVar5);
      local_8 = 0;
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
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cont.: `8none\n");
      local_8 = 4;
      goto LAB_004f59b5;
    }
    FUN_005069b0(this,(undefined1 *)local_2c,*(uint *)(param_2 + 0x1f0),'\0');
    local_8 = 5;
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Pod  : %s\n");
    local_8 = 6;
    FUN_00403490(&local_44,puVar5);
    local_8 = 5;
    uVar2 = local_8;
    local_8 = 5;
    if (0xf < local_48) {
      pvVar7 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar7 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) goto LAB_004f59f0;
      FUN_005adb3f(pvVar7);
    }
    local_8 = 0;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4), uVar2 = local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_004f59f0;
      FUN_005adb3f(pvVar7);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x174) + 0xe8) + 0xc +
                    *(int *)(param_2 + 0x1f0) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      piVar6 = FUN_004a84a0(*(int *)(iVar1 + 4));
      if (piVar6 == (int *)0x0) {
        uVar10 = 0x14;
        pcVar9 = "`2Cont.: `%$unknown\n";
        goto LAB_004f5c4c;
      }
      FUN_004024e0(local_5c,(undefined4 *)piVar6[7]);
      local_8 = 7;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cont.: `%c%dx %s\n");
      local_8 = 8;
      FUN_00403490(&local_44,puVar5);
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar7 = *(void **)((int)local_2c[0] + -4), uVar2 = local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_004f59f0;
        FUN_005adb3f(pvVar7);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      pvVar7 = local_5c[0];
      uVar10 = local_48;
      if (local_48 < 0x10) goto LAB_004f5c54;
      goto LAB_004f59ce;
    }
    uVar10 = 0xf;
    pcVar9 = "`2Cont.: `8nil\n";
LAB_004f5c4c:
    FUN_00403640(&local_44,pcVar9,uVar10);
  }
LAB_004f5c54:
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_44;
  param_1[1] = uStack_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
LAB_004f5c73:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f5c90(undefined4 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
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
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bf808;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f603f;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_8 = 0;
  if (*(int *)(*(int *)(param_2 + 0x40) + 0xc) == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,"`8no PDS",8);
    if (0xf < uStack_18) {
      pvVar5 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pvVar5 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar5))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    goto LAB_004f603f;
  }
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`!%s `%%%s\n");
  local_8._0_1_ = 1;
  puVar4 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar4 = (undefined4 *)*puVar3;
  }
  FUN_00403640(&local_2c,puVar4,puVar3[4]);
  local_8 = (uint)local_8._1_3_ << 8;
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
  bVar2 = false;
  iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0xc);
  if (*(char *)(iVar1 + 99) == '\0') {
    uVar7 = 0x14;
    pcVar6 = "`2State: `7disconn.\n";
LAB_004f5e19:
    FUN_00403640(&local_2c,pcVar6,uVar7);
    bVar2 = true;
  }
  else {
    if (*(char *)(iVar1 + 0x62) == '\0') {
      pcVar6 = "`2State: `0standby\n";
      uVar7 = 0x13;
      goto LAB_004f5e19;
    }
    FUN_00403640(&local_2c,"`2State: `@hot\n",0xf);
  }
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2Range: `0%.0f`2Gm\n");
  local_8._0_1_ = 2;
  puVar4 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar4 = (undefined4 *)*puVar3;
  }
  FUN_00403640(&local_2c,puVar4,puVar3[4]);
  local_8._0_1_ = 0;
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
  if (bVar2) {
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2CD time: `0%.0f`2s\n");
    local_8 = CONCAT31(local_8._1_3_,3);
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_2c,puVar4,puVar3[4]);
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
  else {
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`2CD: `%c%.2f`2/`0%.2f`2s\n");
    local_8._0_1_ = 4;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(&local_2c,puVar4,puVar3[4]);
    local_8 = (uint)local_8._1_3_ << 8;
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
    if (*(float *)(*(int *)(*(int *)(param_2 + 0x40) + 0xc) + 0x6c) == -1.0) {
      uVar7 = 0x12;
      pcVar6 = "`2Weapon: `0ready\n";
    }
    else {
      uVar7 = 0x14;
      pcVar6 = "`2Weapon: `!cooling\n";
    }
    FUN_00403640(&local_2c,pcVar6,uVar7);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
LAB_004f603f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f6060(uint *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  void *local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005bfa0a;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d8 = param_2;
  if (param_2 == (void *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f7422;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  FUN_00402690(&local_44,"`%Ventarii Sensor Suite\n",0x18);
  local_8 = 0;
  uStack_7 = 0;
  iVar1 = *(int *)((int)param_2 + 0x1ac);
  if ((iVar1 == 0) && (*(int *)((int)param_2 + 0x194) == 0)) {
    FUN_00403640(&local_44,"`2Nothing selected.",0x13);
    goto LAB_004f73e1;
  }
  pvVar8 = *(void **)((int)param_2 + 0x194);
  if (pvVar8 == (void *)0x0) {
    iVar2 = *(int *)(iVar1 + 0x54);
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Planet `7%s\n");
      local_8 = 0x1d;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cat.: `7%s\n");
      local_8 = 0x1e;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      FUN_00591e00((undefined1 *)local_5c,&DAT_0062e0bc);
      local_8 = 0x1f;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_a4,"`2Dia.: `9%skm\n");
      local_8 = 0x20;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x1f;
      if (0xf < local_90) {
        pvVar8 = local_a4[0];
        if ((0xfff < local_90 + 1) &&
           (pvVar8 = *(void **)((int)local_a4[0] + -4),
           0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      local_8 = 0;
      FUN_00401b20((int *)local_5c);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pop.: `0%0.1fk\n");
      local_8 = 0x21;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Type: `#%s\n");
      local_8 = 0x22;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      pvVar8 = local_d8;
      FUN_0050b2e0();
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Brg.: `%%%d^\n");
      local_8 = 0x23;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      cocos2d::Vec2::Vec2((Vec2 *)&local_e0,(float)*(double *)(iVar1 + 0x20),
                          (float)*(double *)(iVar1 + 0x28));
      local_8 = 0x24;
      cocos2d::Vec2::Vec2((Vec2 *)&local_e8,(float)*(double *)((int)pvVar8 + 0x28),
                          (float)*(double *)((int)pvVar8 + 0x30));
      local_8 = 0x25;
      cocos2d::Vec2::getDistance((Vec2 *)&local_e8,(Vec2 *)&local_e0);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Dist: `$%.2fGm\n");
      local_8 = 0x26;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
LAB_004f73c1:
      FUN_00401b20((int *)local_2c);
      cocos2d::Vec2::~Vec2((Vec2 *)&local_e8);
      cocos2d::Vec2::~Vec2((Vec2 *)&local_e0);
    }
    else if (iVar2 == 1) {
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`$Star `%%%s\n");
      local_8 = 0x27;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      FUN_00401b20((int *)local_2c);
    }
    else if (iVar2 == 2) {
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Moon: `7%s\n");
      local_8 = 0x28;
      FUN_00403490(&local_44,puVar6);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Orbt: `7%s\n");
      local_8 = 0x29;
      FUN_00403490(&local_44,puVar6);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      FUN_00591e00((undefined1 *)local_a4,&DAT_0062e0bc);
      local_8 = 0x2a;
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Dia.: `9%skm\n");
      local_8 = 0x2b;
      FUN_00403490(&local_44,puVar6);
      FUN_00401b20((int *)local_2c);
      local_8 = 0;
      FUN_00401b20((int *)local_a4);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pop.: `0%0.1fk\n");
      local_8 = 0x2c;
      FUN_00403490(&local_44,puVar6);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Type: `#%s\n");
      local_8 = 0x2d;
      FUN_00403490(&local_44,puVar6);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      pvVar8 = local_d8;
      FUN_0050b2e0();
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Brg.: `%%%d^\n");
      local_8 = 0x2e;
      FUN_00403490(&local_44,puVar6);
      local_8 = 0;
      FUN_00401b20((int *)local_2c);
      cocos2d::Vec2::Vec2((Vec2 *)&local_e0,(float)*(double *)(iVar1 + 0x20),
                          (float)*(double *)(iVar1 + 0x28));
      local_8 = 0x2f;
      cocos2d::Vec2::Vec2((Vec2 *)&local_e8,(float)*(double *)((int)pvVar8 + 0x28),
                          (float)*(double *)((int)pvVar8 + 0x30));
      local_8 = 0x30;
      cocos2d::Vec2::getDistance((Vec2 *)&local_e8,(Vec2 *)&local_e0);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Dist: `$%.2fGm\n");
      local_8 = 0x31;
      FUN_00403490(&local_44,puVar6);
      goto LAB_004f73c1;
    }
  }
  else {
    iVar1 = *(int *)((int)pvVar8 + 0xe0);
    if ((((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 4)) || (iVar1 == 7)) {
      FUN_004024e0(local_5c,(undefined4 *)((int)pvVar8 + 0x48));
      local_8 = 1;
      FUN_004024e0(local_bc,(undefined4 *)((int)pvVar8 + 0x90));
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 3;
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      FUN_00402690(local_74,"Unknown",7);
      local_8 = 4;
      if ((*(int *)((int)pvVar8 + 0x130) == 0) || (*(float *)((int)pvVar8 + 0x38) == -1.0)) {
        if (*(float *)((int)pvVar8 + 0x38) == -1.0) {
          FUN_00402690(local_74,"Unknown",7);
        }
      }
      else {
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_8c,&DAT_00617dec);
        FUN_00413230(local_74,piVar4);
        if (0xf < local_78) {
          pvVar7 = local_8c[0];
          if ((0xfff < local_78 + 1) &&
             (pvVar7 = *(void **)((int)local_8c[0] + -4),
             0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Name: `7%s\n");
      local_8 = 5;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 4;
      if (0xf < local_78) {
        pvVar7 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar7 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      FUN_00403640(&local_44,"`2Clss: `$Beacon\n",0x11);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Reg.: `9%s\n");
      local_8 = 6;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 4;
      if (0xf < local_78) {
        pvVar7 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar7 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      FUN_00508e80(pvVar8,(undefined1 *)local_8c);
      local_8 = 7;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_a4,"`2Sol.: %s\n");
      local_8 = 8;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 7;
      if (0xf < local_90) {
        pvVar7 = local_a4[0];
        if ((0xfff < local_90 + 1) &&
           (pvVar7 = *(void **)((int)local_a4[0] + -4),
           0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_8 = 4;
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      if (0xf < local_78) {
        pvVar7 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar7 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      pvVar7 = local_d8;
      auVar11 = ZEXT416((uint)(float)((double)*(float *)((int)pvVar8 + 0x108) +
                                     *(double *)((int)pvVar8 + 0x18)));
      FUN_0050b390(local_d8,(float)((double)*(float *)((int)pvVar8 + 0x104) +
                                   *(double *)((int)pvVar8 + 0x10)));
      dVar10 = auVar11._0_8_ - (double)*(float *)((int)pvVar7 + 0x120);
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + 360.0;
      }
      local_d8 = (void *)0x0;
      if ((void *)(int)dVar10 != (void *)0x167) {
        local_d8 = (void *)(int)dVar10;
      }
      local_e8 = (float)((double)*(float *)((int)pvVar8 + 0x104) + *(double *)((int)pvVar8 + 0x10));
      local_e4 = (float)((double)*(float *)((int)pvVar8 + 0x108) + *(double *)((int)pvVar8 + 0x18));
      local_e0 = (float)*(double *)((int)pvVar7 + 0x28);
      fVar9 = (float)*(double *)((int)pvVar7 + 0x30);
      local_8 = 10;
      local_dc = fVar9;
      cocos2d::Vec2::getDistance((Vec2 *)&local_e0,(Vec2 *)&local_e8);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Dist: `$%0.2fGm\n");
      local_8 = 0xb;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 10;
      if (0xf < local_78) {
        pvVar7 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar7 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      local_8 = 4;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Brg.: `%%%d^\n");
      local_8 = 0xc;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 4;
      if (0xf < local_78) {
        pvVar7 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar7 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      if ((*(int *)((int)pvVar8 + 0x130) == 0) ||
         (FUN_00403cb0(*(int *)((int)pvVar8 + 0x130)), fVar9 <= 0.0)) {
        FUN_00403640(&local_44,"`2Hdg.: `7unknown\n",0x12);
      }
      else {
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Hdg.: `!%s\n");
        local_8 = 0xd;
        FUN_00403490(&local_44,puVar6);
        if (0xf < local_78) {
          pvVar8 = local_8c[0];
          if ((0xfff < local_78 + 1) &&
             (pvVar8 = *(void **)((int)local_8c[0] + -4),
             0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar8);
        }
      }
      if (0xf < local_60) {
        pvVar8 = local_74[0];
        if ((0xfff < local_60 + 1) &&
           (pvVar8 = *(void **)((int)local_74[0] + -4),
           0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      if (0xf < local_a8) {
        pvVar8 = local_bc[0];
        if ((0xfff < local_a8 + 1) &&
           (pvVar8 = *(void **)((int)local_bc[0] + -4),
           0x1f < (uint)((int)local_bc[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_ac = 0;
      local_a8 = 0xf;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
      if (0xf < local_48) {
        pvVar8 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar8 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_004f680d;
      }
    }
    else {
      FUN_004024e0(local_a4,(undefined4 *)((int)pvVar8 + 0x48));
      local_8 = 0xe;
      FUN_004024e0(local_bc,(undefined4 *)((int)pvVar8 + 0x60));
      local_8 = 0xf;
      FUN_004024e0(local_d4,(undefined4 *)((int)pvVar8 + 0x90));
      local_7c = 0;
      local_78 = 0xf;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
      local_8 = 0x11;
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      FUN_00402690(local_74,"Unknown",7);
      local_8 = 0x12;
      if ((*(int *)((int)pvVar8 + 0x130) == 0) || (*(float *)((int)pvVar8 + 0x38) == -1.0)) {
        if (*(float *)((int)pvVar8 + 0x38) == -1.0) {
          FUN_00402690(local_74,"Unknown",7);
        }
      }
      else {
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_5c,&DAT_00617dec);
        FUN_00413230(local_74,piVar4);
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
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Name: `7%s\n");
      local_8 = 0x13;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x12;
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
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Clss: `7%s\n");
      local_8 = 0x14;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x12;
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
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Reg.: `9%s\n");
      local_8 = 0x15;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x12;
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
      FUN_00508e80(pvVar8,(undefined1 *)local_2c);
      local_8 = 0x16;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Sol.: %s\n");
      local_8 = 0x17;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x16;
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
      local_8 = 0x12;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
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
      pvVar7 = local_d8;
      auVar11 = ZEXT416((uint)(float)((double)*(float *)((int)pvVar8 + 0x108) +
                                     *(double *)((int)pvVar8 + 0x18)));
      FUN_0050b390(local_d8,(float)((double)*(float *)((int)pvVar8 + 0x104) +
                                   *(double *)((int)pvVar8 + 0x10)));
      dVar10 = auVar11._0_8_ - (double)*(float *)((int)pvVar7 + 0x120);
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + 360.0;
      }
      local_d8 = (void *)0x0;
      if ((void *)(int)dVar10 != (void *)0x167) {
        local_d8 = (void *)(int)dVar10;
      }
      local_e0 = (float)((double)*(float *)((int)pvVar8 + 0x104) + *(double *)((int)pvVar8 + 0x10));
      local_dc = (float)((double)*(float *)((int)pvVar8 + 0x108) + *(double *)((int)pvVar8 + 0x18));
      local_e8 = (float)*(double *)((int)pvVar7 + 0x28);
      fVar9 = (float)*(double *)((int)pvVar7 + 0x30);
      local_8 = 0x19;
      local_e4 = fVar9;
      cocos2d::Vec2::getDistance((Vec2 *)&local_e8,(Vec2 *)&local_e0);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Dist: `$%0.2fGm\n");
      local_8 = 0x1a;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x19;
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
      local_8 = 0x12;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Brg.: `%%%d^\n");
      local_8 = 0x1b;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0x12;
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
      if ((*(int *)((int)pvVar8 + 0x130) == 0) ||
         (FUN_00403cb0(*(int *)((int)pvVar8 + 0x130)), fVar9 <= 0.0)) {
        FUN_00403640(&local_44,"`2Hdg.: `7unknown\n",0x12);
      }
      else {
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Hdg.: `!%s\n");
        local_8 = 0x1c;
        FUN_00403490(&local_44,puVar6);
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar8);
        }
      }
      if (0xf < local_60) {
        pvVar8 = local_74[0];
        if ((0xfff < local_60 + 1) &&
           (pvVar8 = *(void **)((int)local_74[0] + -4),
           0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      if (0xf < local_c0) {
        pvVar8 = local_d4[0];
        if ((0xfff < local_c0 + 1) &&
           (pvVar8 = *(void **)((int)local_d4[0] + -4),
           0x1f < (uint)((int)local_d4[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_c4 = 0;
      local_c0 = 0xf;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffffff00);
      if (0xf < local_a8) {
        pvVar8 = local_bc[0];
        if ((0xfff < local_a8 + 1) &&
           (pvVar8 = *(void **)((int)local_bc[0] + -4),
           0x1f < (uint)((int)local_bc[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_ac = 0;
      local_a8 = 0xf;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
      if (0xf < local_90) {
        pvVar8 = local_a4[0];
        if ((0xfff < local_90 + 1) &&
           (pvVar8 = *(void **)((int)local_a4[0] + -4),
           0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_004f680d:
        local_a8 = 0xf;
        local_ac = 0;
        FUN_005adb3f(pvVar8);
      }
    }
  }
LAB_004f73e1:
  uVar3 = local_44;
  local_44 = local_44 & 0xffffff00;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar3;
  param_1[1] = uStack_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
  local_34 = 0;
  uStack_30 = 0xf;
  FUN_00401b20((int *)&local_44);
LAB_004f7422:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004f7440(uint *param_1,byte *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *pvVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  float local_fc;
  uint *local_f8;
  float local_f4;
  byte *local_f0;
  void *local_ec [5];
  uint local_d8;
  void *local_d4 [5];
  uint local_c0;
  undefined1 local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [5];
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
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
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bfba2;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f8 = param_1;
  local_f0 = param_2;
  if (param_2 == (byte *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    goto LAB_004f8480;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar6 = *(int *)(param_2 + 0x1ac);
  if ((iVar6 != 0) || (*(int *)(param_2 + 0x194) != 0)) {
    iVar1 = *(int *)(param_2 + 0x194);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar6 + 0x54);
      if (iVar1 == 0) {
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Planet `7%s\n");
        local_8._0_1_ = 0xf;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
        local_8._0_1_ = 0;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Cat.: `7%s\n");
        local_8._0_1_ = 0x10;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        FUN_00591e00((undefined1 *)local_74,&DAT_0062e0bc);
        local_8._0_1_ = 0x11;
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Dia.: `9%skm\n");
        local_8._0_1_ = 0x12;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
        local_8._0_1_ = 0x11;
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        local_8._0_1_ = 0;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        if (0xf < local_60) {
          pvVar9 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar9 = *(void **)((int)local_74[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pop.: `0%0fk\n");
        local_8._0_1_ = 0x13;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Type: `#%s\n");
        local_8._0_1_ = 0x14;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        pbVar10 = local_f0;
        FUN_0050b2e0();
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Brg.: `%%%d^\n");
        local_8._0_1_ = 0x15;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
        local_fc = (float)*(double *)(iVar6 + 0x20);
        local_f8 = (uint *)(float)*(double *)(iVar6 + 0x28);
        local_f4 = (float)*(double *)(pbVar10 + 0x28);
        local_f0 = (byte *)(float)*(double *)(pbVar10 + 0x30);
        local_8._0_1_ = 0x17;
        cocos2d::Vec2::getDistance((Vec2 *)&local_f4,(Vec2 *)&local_fc);
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Dist: `$%.2fGm\n");
        local_8._0_1_ = 0x18;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 == 2) {
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Moon: `7%s\n");
            local_8._0_1_ = 0x1a;
            FUN_00403490(&local_44,puVar8);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
              FUN_005adb3f(pvVar9);
            }
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Orbt: `7%s\n");
            local_8._0_1_ = 0x1b;
            FUN_00403490(&local_44,puVar8);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
              FUN_005adb3f(pvVar9);
            }
            FUN_00591e00((undefined1 *)local_74,&DAT_0062e0bc);
            local_8._0_1_ = 0x1c;
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2Dia.: `9%skm\n");
            local_8._0_1_ = 0x1d;
            FUN_00403490(&local_44,puVar8);
            local_8._0_1_ = 0x1c;
            if (0xf < local_48) {
              pvVar9 = local_5c[0];
              if ((0xfff < local_48 + 1) &&
                 (pvVar9 = *(void **)((int)local_5c[0] + -4), uVar3 = (undefined1)local_8,
                 0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
              FUN_005adb3f(pvVar9);
            }
            local_8._0_1_ = 0;
            local_4c = 0;
            local_48 = 0xf;
            local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
            if (0xf < local_60) {
              pvVar9 = local_74[0];
              if ((0xfff < local_60 + 1) &&
                 (pvVar9 = *(void **)((int)local_74[0] + -4), uVar3 = (undefined1)local_8,
                 0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
              FUN_005adb3f(pvVar9);
            }
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Pop.: `0%0fk\n");
            local_8._0_1_ = 0x1e;
            FUN_00403490(&local_44,puVar8);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
              FUN_005adb3f(pvVar9);
            }
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Type: `#%s\n");
            local_8._0_1_ = 0x1f;
            FUN_00403490(&local_44,puVar8);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
              FUN_005adb3f(pvVar9);
            }
            pbVar10 = local_f0;
            FUN_0050b2e0();
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Brg.: `%%%d^\n");
            local_8._0_1_ = 0x20;
            FUN_00403490(&local_44,puVar8);
            local_8._0_1_ = 0;
            FUN_00401b20((int *)local_2c);
            cocos2d::Vec2::Vec2((Vec2 *)&local_f4,(float)*(double *)(iVar6 + 0x20),
                                (float)*(double *)(iVar6 + 0x28));
            local_8._0_1_ = 0x21;
            cocos2d::Vec2::Vec2((Vec2 *)&local_fc,(float)*(double *)(pbVar10 + 0x28),
                                (float)*(double *)(pbVar10 + 0x30));
            local_8._0_1_ = 0x22;
            cocos2d::Vec2::getDistance((Vec2 *)&local_fc,(Vec2 *)&local_f4);
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Dist: `$%.2fGm\n");
            local_8._0_1_ = 0x23;
            FUN_00403490(&local_44,puVar8);
            FUN_00401b20((int *)local_2c);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_fc);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_f4);
          }
          goto LAB_004f8441;
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`$Star `%%%s\n");
        local_8._0_1_ = 0x19;
        puVar8 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar8 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar8,puVar5[4]);
      }
    }
    else {
      FUN_004024e0(local_2c,(undefined4 *)(iVar1 + 0x48));
      local_8._0_1_ = 1;
      FUN_004024e0(local_ec,(undefined4 *)(iVar1 + 0x60));
      local_8._0_1_ = 2;
      FUN_004024e0(local_d4,(undefined4 *)(iVar1 + 0x90));
      local_ac = 0;
      local_a8 = 0xf;
      local_bc = 0;
      local_8._0_1_ = 4;
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      FUN_00402690(local_74,"Unknown",7);
      local_8._0_1_ = 5;
      if ((*(int *)(iVar1 + 0x130) == 0) || (*(float *)(iVar1 + 0x38) == -1.0)) {
        if (*(float *)(iVar1 + 0x38) == -1.0) {
          FUN_00402690(local_74,"Unknown",7);
        }
      }
      else {
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_5c,&DAT_00617dec);
        FUN_00413230(local_74,piVar4);
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
      }
      FUN_00403640(&local_44,&DAT_005e75f8,1);
      FUN_00403640(&local_44,&DAT_005e75f8,1);
      FUN_00403640(&local_44,&DAT_005e75f8,1);
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2IFF : %s\n");
      local_8._0_1_ = 6;
      puVar8 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar8 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar8,puVar5[4]);
      local_8._0_1_ = 5;
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      FUN_00402690(local_a4,"`$unknown",9);
      local_8._0_1_ = 7;
      iVar6 = *(int *)(iVar1 + 0x130);
      if (iVar6 != 0) {
        if (*(void **)(iVar6 + 0x40) == (void *)0x0) {
LAB_004f7709:
          if ((iVar6 == 0) ||
             ((*(void **)(iVar6 + 0x40) != (void *)0x0 &&
              (iVar6 = FUN_005224c0(*(void **)(iVar6 + 0x40),1,'\x01'), iVar6 != 0))))
          goto LAB_004f7733;
          uVar7 = 10;
          pcVar12 = "`7inactive";
        }
        else {
          iVar6 = FUN_005224c0(*(void **)(iVar6 + 0x40),1,'\x01');
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar1 + 0x130);
            goto LAB_004f7709;
          }
          uVar7 = 8;
          pcVar12 = "`@active";
        }
        FUN_00402690(local_a4,pcVar12,uVar7);
      }
LAB_004f7733:
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2RCTR: %s\n");
      local_8._0_1_ = 8;
      puVar8 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar8 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar8,puVar5[4]);
      local_8._0_1_ = 7;
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      bVar2 = 1.0 <= *(float *)(iVar1 + 0x40);
      if (bVar2) {
        FUN_00591e00((undefined1 *)local_8c,"`7%.0f`2s ago");
        local_8._0_1_ = 9;
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`2LDT.: %s");
      local_8 = 10;
      puVar8 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar8 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar8,puVar5[4]);
      local_8 = CONCAT31(local_8._1_3_,9);
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      local_8._0_1_ = 7;
      local_8._1_3_ = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if ((bVar2) && (0xf < local_78)) {
        pvVar9 = local_8c[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar9 = *(void **)((int)local_8c[0] + -4),
           0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      if ((*(int *)(iVar1 + 0x130) != 0) &&
         (*(char *)(*(int *)(*(int *)(iVar1 + 0x130) + 0x40) + 0x34) != '\0')) {
        FUN_00403640(&local_44,&DAT_005e75f8,1);
        iVar6 = *(int *)(*(int *)(iVar1 + 0x130) + 0x44);
        if ((iVar6 == 0) ||
           ((*(int *)(iVar6 + 0x124) == 0 || (*(char *)(*(int *)(iVar6 + 0x124) + 0x160) == '\0'))))
        {
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2From: `%c%s\n");
          local_8._0_1_ = 0xd;
          puVar8 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar8 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar8,puVar5[4]);
          local_8._0_1_ = 7;
          if (0xf < local_78) {
            pvVar9 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar9 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar9);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Dest: `%c%s");
          local_8._0_1_ = 0xe;
          puVar8 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar8 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar8,puVar5[4]);
        }
        else {
          pbVar10 = (byte *)(iVar6 + 0x7c);
          pbVar11 = pbVar10;
          if (0xf < *(uint *)(iVar6 + 0x90)) {
            pbVar11 = *(byte **)pbVar10;
          }
          local_f8 = *(uint **)(iVar6 + 0x8c);
          uVar7 = FUN_004031f0(pbVar11,(uint)local_f8,(byte *)&PTR_005ce008,0);
          if ((char)uVar7 == '\0') {
            local_f0 = pbVar10;
            if (0xf < *(uint *)(iVar6 + 0x90)) {
              local_f0 = *(byte **)pbVar10;
              goto LAB_004f7971;
            }
          }
          else {
            local_f0 = (byte *)0x5e1bc0;
LAB_004f7971:
            if (0xf < *(uint *)(iVar6 + 0x90)) {
              pbVar10 = *(byte **)pbVar10;
            }
          }
          FUN_004031f0(pbVar10,(uint)local_f8,(byte *)&PTR_005ce008,0);
          puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2From: `%c%s\n");
          local_8._0_1_ = 0xb;
          FUN_00403490(&local_44,puVar8);
          local_8._0_1_ = 7;
          if (0xf < local_78) {
            pvVar9 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar9 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar9);
          }
          iVar6 = *(int *)(*(int *)(iVar1 + 0x130) + 0x44);
          pbVar11 = (byte *)(iVar6 + 0xac);
          pbVar10 = pbVar11;
          if (0xf < *(uint *)(iVar6 + 0xc0)) {
            pbVar10 = *(byte **)pbVar11;
          }
          local_f8 = *(uint **)(iVar6 + 0xbc);
          uVar7 = FUN_004031f0(pbVar10,(uint)local_f8,(byte *)&PTR_005ce008,0);
          if ((((char)uVar7 != '\0') || (0xf < *(uint *)(iVar6 + 0xc0))) &&
             (0xf < *(uint *)(iVar6 + 0xc0))) {
            pbVar11 = *(byte **)pbVar11;
          }
          FUN_004031f0(pbVar11,(uint)local_f8,(byte *)&PTR_005ce008,0);
          puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"`2Dest: `%c%s");
          local_8._0_1_ = 0xc;
          FUN_00403490(&local_44,puVar8);
        }
        if (0xf < local_78) {
          pvVar9 = local_8c[0];
          if ((0xfff < local_78 + 1) &&
             (pvVar9 = *(void **)((int)local_8c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
          FUN_005adb3f(pvVar9);
        }
      }
      if (0xf < local_90) {
        pvVar9 = local_a4[0];
        if ((0xfff < local_90 + 1) &&
           (pvVar9 = *(void **)((int)local_a4[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
        FUN_005adb3f(pvVar9);
      }
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      if (0xf < local_60) {
        pvVar9 = local_74[0];
        if ((0xfff < local_60 + 1) &&
           (pvVar9 = *(void **)((int)local_74[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
        FUN_005adb3f(pvVar9);
      }
      if (0xf < local_c0) {
        pvVar9 = local_d4[0];
        if ((0xfff < local_c0 + 1) &&
           (pvVar9 = *(void **)((int)local_d4[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_d4[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
        FUN_005adb3f(pvVar9);
      }
      if (0xf < local_d8) {
        pvVar9 = local_ec[0];
        if ((0xfff < local_d8 + 1) &&
           (pvVar9 = *(void **)((int)local_ec[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_ec[0] + (-4 - (int)pvVar9)))) goto LAB_004f7acc;
        FUN_005adb3f(pvVar9);
      }
    }
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
LAB_004f7acc:
        local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
  }
LAB_004f8441:
  uVar7 = local_44;
  local_44 = local_44 & 0xffffff00;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar7;
  param_1[1] = uStack_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
  local_34 = 0;
  uStack_30 = 0xf;
  FUN_00401b20((int *)&local_44);
LAB_004f8480:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
