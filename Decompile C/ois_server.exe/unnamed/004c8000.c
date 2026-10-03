#include "../ois_server.exe.h"


void __fastcall FUN_004c8030(FILE *param_1)

{
  int *piVar1;
  void **ppvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  byte *in_stack_ffffff64;
  int local_74;
  int local_6c;
  int local_68;
  uint local_64;
  FILE *local_60;
  char local_59;
  int local_58;
  void *local_54 [5];
  uint local_40;
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
  puStack_18 = &LAB_005b9948;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_6c = 0;
  local_60 = param_1;
  fread(&local_6c,4,1,param_1);
  local_74 = 0;
  if (0 < local_6c) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar2 = (void **)FUN_004b88b0((undefined1 *)local_54,param_1);
      if (&local_3c != ppvVar2) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar2;
        pvStack_38 = ppvVar2[1];
        pvStack_34 = ppvVar2[2];
        pvStack_30 = ppvVar2[3];
        local_2c = ppvVar2[4];
        pvStack_28 = ppvVar2[5];
        ppvVar2[4] = (void *)0x0;
        ppvVar2[5] = (void *)0xf;
        *(undefined1 *)ppvVar2 = 0;
      }
      if (0xf < local_40) {
        pvVar3 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar3 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar3)))) goto LAB_004c844f;
        FUN_005adb3f(pvVar3);
      }
      FUN_004024e0(&stack0xffffff64,&local_3c);
      pvVar3 = (void *)FUN_004a7100(in_stack_ffffff64);
      FUN_00591070("SAVEHANDLER","...loading trade data for platform %s");
      if (pvVar3 == (void *)0x0) {
        FUN_00591070("ERROR","ERROR: No valid space station with this rego.");
        if ((void *)0xf < pvStack_28) {
          pvVar3 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar3 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3)))) {
LAB_004c844f:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar3);
        }
        goto LAB_004c83f9;
      }
      local_68 = *(int *)((int)pvVar3 + 0x398);
      uVar8 = 0;
      puVar6 = *(undefined4 **)(local_68 + 0x94);
      uVar5 = (uint)((int)*(undefined4 **)(local_68 + 0x98) + (3 - (int)puVar6)) >> 2;
      if (*(undefined4 **)(local_68 + 0x98) < puVar6) {
        uVar5 = 0;
      }
      local_64 = uVar5;
      if (uVar5 != 0) {
        do {
          if ((int *)*puVar6 != (int *)0x0) {
            FUN_0040fae0((int *)*puVar6);
            uVar5 = local_64;
          }
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar8 != uVar5);
      }
      *(undefined4 *)(local_68 + 0x98) = *(undefined4 *)(local_68 + 0x94);
      local_58 = 0;
      fread(&local_58,4,1,local_60);
      iVar7 = 0;
      if (0 < local_58) {
        do {
          local_68 = FUN_004be160(local_60);
          iVar4 = *(int *)((int)pvVar3 + 0x398);
          piVar1 = *(int **)(iVar4 + 0x98);
          if (*(int **)(iVar4 + 0x9c) == piVar1) {
            FUN_004141e0((void *)(iVar4 + 0x94),piVar1,&local_68);
          }
          else {
            *piVar1 = local_68;
            *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + 4;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d contracts for platform");
      FUN_0049cfc0(*(void **)((int)pvVar3 + 0x398),'\0');
      fread(&local_58,4,1,local_60);
      iVar7 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(local_60);
          if (iVar4 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)((int)pvVar3 + 0x398),iVar4,(undefined4 *)0x0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d trade item instances for platform");
      iVar7 = *(int *)((int)pvVar3 + 0x398);
      uVar5 = 0;
      if (*(int *)(iVar7 + 0x8c) - *(int *)(iVar7 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x88) + uVar5 * 4) + 0x10) = 0;
          iVar4 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x88) + iVar4) + 0x30) = 0xffffffff;
        } while (uVar5 < (uint)(*(int *)(iVar7 + 0x8c) - *(int *)(iVar7 + 0x88) >> 2));
      }
      fread(&local_58,4,1,local_60);
      iVar7 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(local_60);
          if (iVar4 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)((int)pvVar3 + 0x398),iVar4,(undefined4 *)0x1);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d wire item instances for platform");
      param_1 = local_60;
      fread(&local_59,1,1,local_60);
      if (local_59 != '\0') {
        FUN_0051aee0(pvVar3,*(int *)(DAT_0065b5cc + 0xd0),(int *)0x1);
      }
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar3 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar3 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3)))) goto LAB_004c844f;
        FUN_005adb3f(pvVar3);
      }
      local_74 = local_74 + 1;
    } while (local_74 < local_6c);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c83f9:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c8470(FILE *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 ***pppuVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  void *in_stack_fffffedc;
  undefined4 **ppuStack_10c;
  undefined4 uStack_108;
  byte *pbVar13;
  uint uVar14;
  void *pvVar15;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  FILE *local_8c;
  char local_86;
  undefined1 local_85;
  undefined4 ***local_84;
  undefined4 *local_80;
  undefined4 ***local_7c;
  undefined4 *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd743;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_1;
  FUN_004b88b0((undefined1 *)local_74,param_1);
  local_8 = 0;
  FUN_004b88b0((undefined1 *)local_5c,param_1);
  local_8._0_1_ = 1;
  FUN_004b88b0((undefined1 *)local_44,param_1);
  pcVar11 = fread_exref;
  local_8._0_1_ = 2;
  fread(&local_b4,8,1,param_1);
  uVar14 = 0;
  fread(&local_ac,8,1,param_1);
  fread(&local_a0,4,1,param_1);
  uStack_108 = 0x4c8511;
  fread(&local_85,1,1,param_1);
  local_78 = (undefined4 *)&stack0xffffff24;
  pbVar13 = (byte *)0x0;
  pvVar15 = (void *)(uVar14 & 0xffffff00);
  FUN_00402690(&stack0xffffff24,&PTR_005ce008,0);
  local_8._0_1_ = 3;
  local_7c = (undefined4 ***)&stack0xffffff0c;
  FUN_004024e0(&stack0xffffff0c,local_74);
  local_84 = &ppuStack_10c;
  local_8._0_1_ = 4;
  FUN_004024e0(&ppuStack_10c,local_44);
  local_8._0_1_ = 5;
  FUN_004024e0(&stack0xfffffedc,local_5c);
  local_8._0_1_ = 2;
  puVar2 = FUN_0040e040(0,local_a0,in_stack_fffffedc);
  iVar10 = DAT_0065b5cc;
  local_80 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00591070("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
    goto LAB_004c8be4;
  }
  *(undefined8 *)(puVar2 + 10) = local_b4;
  *(undefined4 **)(iVar10 + 0xd0) = puVar2;
  *(undefined8 *)(puVar2 + 0xc) = local_ac;
  *(undefined1 *)(puVar2 + 0x57) = local_85;
  FUN_0050c090(puVar2,*(undefined1 **)(*(int *)(iVar10 + 0xd0) + 0x20));
  for (puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar3 = puVar3 + 1) {
    piVar9 = (int *)*puVar3;
    param_1 = local_8c;
    if (*piVar9 == puVar2[8]) goto LAB_004c8619;
  }
  piVar9 = (int *)0x0;
LAB_004c8619:
  *(int **)(DAT_0065b5cc + 0xd8) = piVar9;
  if (DAT_0065c280 == (undefined4 *)0x0) {
    local_78 = (undefined4 *)FUN_005adb0f(0x98);
    local_8._0_1_ = 6;
    DAT_0065c280 = FUN_0058f5d0(local_78);
    local_8._0_1_ = 2;
  }
  FUN_0058fc90((int)DAT_0065c280);
  fread(&local_90,4,1,param_1);
  if (0 < local_90) {
    local_84 = (undefined4 ***)(puVar2 + 0x53);
    iVar10 = 0;
    do {
      fread(&local_7c,4,1,param_1);
      pvVar15 = (void *)0x1;
      pbVar13 = &DAT_00000004;
      fread(&local_78,4,1,param_1);
      piVar9 = FUN_00420f40(local_84,(int *)&local_7c);
      iVar10 = iVar10 + 1;
      *piVar9 = (int)local_78;
      puVar2 = local_80;
    } while (iVar10 < local_90);
  }
  fread(&local_94,4,1,param_1);
  FUN_00511350((int)puVar2);
  local_7c = (undefined4 ***)0x0;
  puVar3 = puVar2;
  if (0 < local_94) {
    local_78 = puVar2 + 0x8a;
    do {
      puVar3 = (undefined4 *)FUN_005adb0f(0x28);
      local_8._0_1_ = 7;
      local_78 = puVar3;
      FUN_004b88b0(&stack0xffffff24,param_1);
      ppppuVar4 = FUN_004b6b90(puVar3,pvVar15);
      local_8._0_1_ = 2;
      local_84 = ppppuVar4;
      fread(ppppuVar4 + 8,4,1,param_1);
      pvVar15 = (void *)0x1;
      pbVar13 = &DAT_00000004;
      fread(ppppuVar4 + 9,4,1,param_1);
      fread(ppppuVar4 + 6,4,1,param_1);
      uStack_108 = 0x4c8758;
      fread(ppppuVar4 + 7,4,1,param_1);
      puVar3 = (undefined4 *)puVar2[0x8b];
      if ((undefined4 *)puVar2[0x8c] == puVar3) {
        FUN_004141e0(puVar2 + 0x8a,puVar3,&local_84);
      }
      else {
        *puVar3 = ppppuVar4;
        puVar2[0x8b] = puVar2[0x8b] + 4;
      }
      FUN_00591070("SAVEHANDLER","  Console damage loaded for: %s");
      local_7c = (undefined4 ***)((int)local_7c + 1);
      puVar3 = local_80;
      pcVar11 = fread_exref;
    } while ((int)local_7c < local_94);
  }
  (*pcVar11)();
  local_7c = (undefined4 ****)0x0;
  if (0 < local_98) {
    do {
      puVar5 = (undefined1 *)FUN_004c0540(param_1);
      uVar1 = puVar5[99];
      FUN_00521d10((void *)local_80[0x10],puVar5,*(int *)(puVar5 + 0x10));
      local_7c = (undefined4 ***)((int)local_7c + 1);
      puVar5[99] = uVar1;
      puVar3 = local_80;
    } while ((int)local_7c < local_98);
  }
  if (*(int *)(puVar3[9] + 0x118) == 2) {
    *(undefined1 *)(puVar3[0x10] + 0x34) = 0;
  }
  else {
    *(undefined1 *)(puVar3[0x10] + 0x34) = 1;
  }
  local_78 = (undefined4 *)FUN_004a6be0(puVar3[8],(int)puVar3,'\0');
  if (local_78 == (undefined4 *)0x0) {
    (**(code **)(*(int *)puVar3[0x5e] + 4))();
    puVar3[0x5e] = 0;
    puVar3[0x3e] = 0;
    puVar3[0x35] = 0;
    puVar3[0xb0] = 0;
    puVar3[0xb1] = 0;
  }
  else {
    FUN_00511950(puVar3,local_78,'\x01','\x01');
    iVar10 = puVar3[0x5e];
    if (iVar10 != 0) {
      puVar2 = (undefined4 *)(iVar10 + 8);
      iVar6 = FUN_004127d0();
      if ((undefined4 *)(iVar6 + 0x14) != puVar2) {
        if (0xf < *(uint *)(iVar10 + 0x1c)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        FUN_00402690((undefined4 *)(iVar6 + 0x14),puVar2,*(uint *)(iVar10 + 0x18));
      }
      FUN_00591e00((undefined1 *)local_2c,"aboard_%s");
      local_8._0_1_ = 8;
      local_84 = local_2c;
      if (0xf < local_18) {
        local_84 = local_2c[0];
      }
      ppppuVar4 = local_2c;
      if (0xf < local_18) {
        ppppuVar4 = (undefined4 ****)local_2c[0];
      }
      iVar6 = 0;
      iVar10 = (local_1c + (int)local_84) - (int)ppppuVar4;
      if ((undefined4 ****)(local_1c + (int)local_84) < ppppuVar4) {
        iVar10 = 0;
      }
      local_7c = ppppuVar4;
      if (iVar10 != 0) {
        do {
          iVar7 = tolower((int)*(char *)(iVar6 + (int)ppppuVar4));
          *(char *)(iVar6 + (int)local_84) = (char)iVar7;
          iVar6 = iVar6 + 1;
          puVar3 = local_80;
          param_1 = local_8c;
        } while (iVar6 != iVar10);
      }
      local_8c = (FILE *)&stack0xffffff20;
      FUN_004024e0(&stack0xffffff20,local_2c);
      local_8._0_1_ = 9;
      puVar2 = DAT_0065c274;
      if (DAT_0065c274 == (undefined4 *)0x0) {
        local_78 = (undefined4 *)FUN_005adb0f(0x30);
        *local_78 = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        ppppuVar4 = (undefined4 ****)(local_78 + 3);
        local_8._0_1_ = 0xb;
        *ppppuVar4 = (undefined4 ***)0x0;
        local_78[4] = 0;
        local_7c = ppppuVar4;
        pppuVar8 = (undefined4 ***)FUN_004136c0();
        *ppppuVar4 = pppuVar8;
        DAT_0065c274 = local_78;
        local_78[9] = 0;
        local_78[10] = 0xf;
        *(undefined1 *)(local_78 + 5) = 0;
        puVar2 = local_78;
      }
      local_8._0_1_ = 8;
      FUN_004a0ee0(puVar2,pbVar13);
      local_8._0_1_ = 2;
      if (0xf < local_18) {
        ppppuVar4 = (undefined4 ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppuVar4 = (undefined4 ****)local_2c[0][-1],
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar4)))) {
LAB_004c89d7:
          local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppuVar4);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    }
  }
  iVar10 = DAT_0065b5cc;
  puVar3[0xde] = 0;
  iVar10 = *(int *)(*(int *)(*(int *)(iVar10 + 0xd0) + 0x40) + 0x20);
  if (iVar10 != 0) {
    puVar2 = (undefined4 *)(iVar10 + 0x3c);
    local_8c = (FILE *)0x8;
    do {
      local_78 = (undefined4 *)*puVar2;
      if (local_78 != (undefined4 *)0x0) {
        FUN_00494e20(local_78);
        FUN_005adb3f(local_78);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      local_8c = (FILE *)((int)&local_8c[-1]._tmpfname + 3);
    } while (local_8c != (FILE *)0x0);
  }
  fread(&local_9c,4,1,param_1);
  local_80 = (undefined4 *)0x0;
  if (0 < local_9c) {
    do {
      fread(&local_86,1,1,param_1);
      if (local_86 != '\0') {
        FUN_004b88b0((undefined1 *)local_2c,param_1);
        local_8._0_1_ = 0xc;
        puVar2 = local_80;
        FUN_004024e0(&stack0xffffff20,local_2c);
        iVar10 = FUN_004a8180(pbVar13);
        FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),iVar10,(uint)puVar2);
        FUN_00591070("SAVEHANDLER","Loaded weapon of class %s into player ship");
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          ppppuVar4 = (undefined4 ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppuVar4 = (undefined4 ****)local_2c[0][-1],
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar4)))) goto LAB_004c89d7;
          FUN_005adb3f(ppppuVar4);
        }
      }
      local_80 = (undefined4 *)((int)local_80 + 1);
    } while ((int)local_80 < local_9c);
  }
  iVar10 = DAT_0065b5cc;
  puVar3[0x19] = 1;
  *(undefined1 *)(puVar3 + 0x8d) = 1;
  *(undefined4 **)(iVar10 + 0xd0) = puVar3;
  DAT_0065b3d4 = (undefined4 *)puVar3[0x5e];
  if (DAT_0065b3d4 == (undefined4 *)0x0) {
LAB_004c8bcb:
    DAT_0065b3d4 = puVar3;
  }
  else {
    bVar12 = false;
    if (DAT_0065b3d4[0x95] != 0) {
      bVar12 = *(int *)(DAT_0065b3d4[0x95] + 0x158) == 1;
    }
    if (!bVar12) goto LAB_004c8bcb;
  }
  *(undefined1 *)(iVar10 + 0xd4) = *(undefined1 *)(DAT_0065b3d4[0x95] + 0xd0);
LAB_004c8be4:
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pvVar15 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar15 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar15 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar15 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004c8cd0(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  FILE *pFVar14;
  char *pcVar15;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  FILE *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  int local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bce00;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_54 = param_1;
  FUN_004bbbf0(param_1);
  local_50 = fread_exref;
  fread(&local_44,4,1,param_1);
  *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) = local_44;
  FUN_004c8470(param_1);
  fread(&_DstBuf_0065b3ec,4,1,param_1);
  fread(&_DstBuf_0065b3dc,4,1,param_1);
  iVar11 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1a8) = 0xffffffff;
  FUN_004b9780(param_1);
  FUN_004c92b0(param_1);
  FUN_004c6a20(param_1);
  FUN_0040fa20();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,param_1);
  iVar11 = 0;
  if (0 < (int)local_40) {
    do {
      local_44 = FUN_004bcb30(param_1);
      iVar5 = DAT_0065b5cc;
      if (local_44 != 0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x134);
        if (*(int **)(DAT_0065b5cc + 0x138) == piVar1) {
          FUN_00414080((void *)(DAT_0065b5cc + 0x130),piVar1,&local_44);
        }
        else {
          *piVar1 = local_44;
          *(int *)(iVar5 + 0x134) = *(int *)(iVar5 + 0x134) + 4;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current bounties for the player");
  pvVar6 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if (pvVar6 != (void *)0x0) {
    FUN_004b9460(pvVar6);
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = 0;
  }
  pvVar6 = FUN_004c2690(param_1);
  *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = pvVar6;
  FUN_004bac60(param_1);
  FUN_004b9bb0(param_1);
  iVar11 = DAT_0065b5cc;
  FUN_004028b0(*(int **)(DAT_0065b5cc + 0x148),*(int **)(DAT_0065b5cc + 0x14c));
  *(undefined4 *)(iVar11 + 0x14c) = *(undefined4 *)(iVar11 + 0x148);
  (*local_50)(&local_40,4,1,param_1);
  iVar11 = 0;
  if (0 < (int)local_40) {
    do {
      piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      iVar5 = DAT_0065b5cc;
      local_14 = 0;
      piVar1 = *(int **)(DAT_0065b5cc + 0x14c);
      if (*(int **)(DAT_0065b5cc + 0x150) == piVar1) {
        FUN_004036d0((void *)(DAT_0065b5cc + 0x148),piVar1,piVar7);
      }
      else {
        piVar1[4] = 0;
        piVar1[5] = 0;
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        *piVar1 = *piVar7;
        piVar1[1] = iVar2;
        piVar1[2] = iVar3;
        piVar1[3] = iVar4;
        iVar2 = piVar7[5];
        piVar1[4] = piVar7[4];
        piVar1[5] = iVar2;
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
        *(int *)(iVar5 + 0x14c) = *(int *)(iVar5 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004c924f;
        FUN_005adb3f(pvVar6);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed synthetics");
  iVar5 = DAT_0065b444;
  local_14 = 1;
  iVar11 = *(int *)(DAT_0065b444 + 0x48);
  FUN_004132d0(*(int **)(iVar11 + 4));
  pcVar12 = local_50;
  pFVar14 = local_54;
  *(int *)(*(int *)(iVar5 + 0x48) + 4) = iVar11;
  **(int **)(iVar5 + 0x48) = iVar11;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = iVar11;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  (*local_50)(&local_44,4,1,local_54);
  local_4c = 0;
  if (0 < local_44) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar14);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar12)(&local_40,4,1,pFVar14);
      pbVar8 = FUN_00412f20((void *)(DAT_0065b444 + 0x48),(byte *)local_3c);
      *(undefined4 **)pbVar8 = local_40;
      FUN_00591070("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) {
LAB_004c924f:
          local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_4c = local_4c + 1;
    } while (local_4c < local_44);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar12)(&local_4c,4,1,pFVar14);
  local_44 = 0;
  if (0 < local_4c) {
    do {
      (*pcVar12)(&local_58,4,1,pFVar14);
      (*pcVar12)(&local_45,1,1,pFVar14);
      (*pcVar12)(&local_5c,4,1,pFVar14);
      (*pcVar12)(&local_60,4,1,pFVar14);
      (*pcVar12)(&local_64,4,1,pFVar14);
      (*pcVar12)(&local_68,4,1,pFVar14);
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
      uVar9 = 0;
      uVar13 = DAT_0065c290[1] - *DAT_0065c290 >> 2;
      if (uVar13 != 0) {
        local_40 = (undefined4 *)*DAT_0065c290;
        puVar10 = local_40;
        do {
          pFVar14 = local_54;
          if (*(int *)*puVar10 == local_58) {
            iVar11 = local_40[uVar9];
            if (iVar11 != 0) {
              *(undefined1 *)(iVar11 + 0xe0) = local_45;
              *(undefined4 *)(iVar11 + 0xd8) = local_5c;
              *(undefined4 *)(iVar11 + 0xd4) = local_60;
              *(undefined4 *)(iVar11 + 0xd0) = local_64;
              *(undefined4 *)(iVar11 + 0xdc) = local_68;
              pcVar15 = "..faction %s loaded";
              goto LAB_004c91ec;
            }
            break;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 < uVar13);
      }
      pcVar15 = "Invalid faction \'%d\' loaded";
LAB_004c91ec:
      FUN_00591070("SAVEHANDLER",pcVar15);
      local_44 = local_44 + 1;
      pcVar12 = local_50;
    } while (local_44 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d faction states");
  FUN_004bbde0(pFVar14);
  FUN_004bfe80(pFVar14);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c92b0(FILE *param_1)

{
  int *piVar1;
  uint *puVar2;
  void **ppvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 ****ppppuVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte *in_stack_fffffea8;
  int iVar13;
  undefined4 *in_stack_fffffec4;
  byte *in_stack_fffffedc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  FILE *local_d8;
  void *local_d4;
  undefined4 *local_d0;
  char local_c9;
  undefined4 *local_c8;
  undefined4 *local_c4;
  int local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  void *local_b4 [5];
  uint local_a0;
  void *local_9c [4];
  undefined4 local_8c;
  uint local_88;
  void *local_84 [4];
  undefined4 local_74;
  uint local_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 ***local_54 [4];
  uint local_44;
  uint local_40;
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
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xff;
  uStack_13 = 0xffffff;
  puStack_18 = &LAB_005bd7dc;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_dc = 0;
  local_d8 = param_1;
  fread(&local_dc,4,1,param_1);
  local_e4 = 0;
  if (0 < local_dc) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      uStack_13 = 0;
      ppvVar3 = (void **)FUN_004b88b0((undefined1 *)local_b4,param_1);
      if (&local_3c != ppvVar3) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar3;
        pvStack_38 = ppvVar3[1];
        pvStack_34 = ppvVar3[2];
        pvStack_30 = ppvVar3[3];
        local_2c = ppvVar3[4];
        pvStack_28 = ppvVar3[5];
        ppvVar3[4] = (void *)0x0;
        ppvVar3[5] = (void *)0xf;
        *(undefined1 *)ppvVar3 = 0;
      }
      if (0xf < local_a0) {
        pvVar4 = local_b4[0];
        if ((0xfff < local_a0 + 1) &&
           (pvVar4 = *(void **)((int)local_b4[0] + -4),
           0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar4)))) goto LAB_004c9e50;
        FUN_005adb3f(pvVar4);
      }
      FUN_004024e0(&stack0xfffffedc,&local_3c);
      pvVar4 = (void *)FUN_004a7100(in_stack_fffffedc);
      local_d4 = pvVar4;
      FUN_00591070("SAVEHANDLER","...loaded trade data for platform %s");
      if (pvVar4 == (void *)0x0) {
        FUN_00591070("ERROR","ERROR: No valid space station with this rego.");
        if ((void *)0xf < pvStack_28) {
          pvVar4 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar4 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4)))) {
LAB_004c9e50:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar4);
        }
        goto LAB_004c9dfa;
      }
      local_bc = *(undefined4 **)((int)pvVar4 + 0x398);
      local_b8 = (undefined4 *)0x0;
      local_d0 = (undefined4 *)local_bc[0x25];
      puVar5 = (undefined4 *)((uint)((int)local_bc[0x26] + (3 - (int)local_d0)) >> 2);
      if ((undefined4 *)local_bc[0x26] < local_d0) {
        puVar5 = (undefined4 *)0x0;
      }
      local_c4 = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        do {
          if ((int *)*local_d0 != (int *)0x0) {
            FUN_0040fae0((int *)*local_d0);
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
          local_d0 = local_d0 + 1;
          param_1 = local_d8;
        } while (local_b8 != puVar5);
      }
      local_bc[0x26] = local_bc[0x25];
      local_c0 = 0;
      fread(&local_c0,4,1,param_1);
      local_b8 = (undefined4 *)0x0;
      if (0 < local_c0) {
        do {
          local_bc = (undefined4 *)FUN_004be160(param_1);
          iVar6 = *(int *)((int)pvVar4 + 0x398);
          piVar1 = *(int **)(iVar6 + 0x98);
          if (*(int **)(iVar6 + 0x9c) == piVar1) {
            FUN_004141e0((void *)(iVar6 + 0x94),piVar1,&local_bc);
          }
          else {
            *piVar1 = (int)local_bc;
            *(int *)(iVar6 + 0x98) = *(int *)(iVar6 + 0x98) + 4;
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d contracts for platform");
      FUN_0049cfc0(*(void **)((int)pvVar4 + 0x398),'\0');
      fread(&local_c0,4,1,param_1);
      local_b8 = (undefined4 *)0x0;
      if (0 < local_c0) {
        do {
          iVar6 = FUN_004bddf0(param_1);
          if (iVar6 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)((int)pvVar4 + 0x398),iVar6,(undefined4 *)0x0);
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d trade item instances for platform");
      iVar6 = *(int *)((int)pvVar4 + 0x398);
      uVar9 = 0;
      if (*(int *)(iVar6 + 0x8c) - *(int *)(iVar6 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x88) + uVar9 * 4) + 0x10) = 0;
          iVar13 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x88) + iVar13) + 0x30) = 0xffffffff;
        } while (uVar9 < (uint)(*(int *)(iVar6 + 0x8c) - *(int *)(iVar6 + 0x88) >> 2));
      }
      fread(&local_c0,4,1,param_1);
      local_b8 = (undefined4 *)0x0;
      if (0 < local_c0) {
        do {
          iVar6 = FUN_004bddf0(param_1);
          if (iVar6 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)((int)pvVar4 + 0x398),iVar6,(undefined4 *)0x1);
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d wire item instances for platform");
      local_d0 = *(undefined4 **)((int)pvVar4 + 0x398);
      local_b8 = (undefined4 *)0x0;
      puVar5 = *(undefined4 **)((int)local_d0 + 0x58);
      local_bc = (undefined4 *)
                 ((uint)((int)*(undefined4 **)((int)local_d0 + 0x5c) + (3 - (int)puVar5)) >> 2);
      if (*(undefined4 **)((int)local_d0 + 0x5c) < puVar5) {
        local_bc = (undefined4 *)0x0;
      }
      local_c8 = puVar5;
      if (local_bc != (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
        do {
          FUN_005adb3f((void *)*puVar5);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar5 = puVar5 + 1;
          pvVar4 = local_d4;
          param_1 = local_d8;
        } while (puVar12 != local_bc);
      }
      *(undefined4 *)((int)local_d0 + 0x5c) = *(undefined4 *)((int)local_d0 + 0x58);
      fread(&local_c0,4,1,param_1);
      local_b8 = (undefined4 *)0x0;
      if (0 < local_c0) {
        do {
          fread(&local_e8,4,1,param_1);
          in_stack_fffffedc = (byte *)0x1;
          fread(&local_e0,4,1,param_1);
          in_stack_fffffec4 = &local_e0;
          fread(in_stack_fffffec4,4,1,param_1);
          uVar7 = FUN_004c0540(param_1);
          local_bc = (undefined4 *)FUN_005adb0f(0xc);
          pvVar4 = local_d4;
          *local_bc = uVar7;
          local_bc[1] = local_e8;
          local_bc[2] = local_e0;
          iVar6 = *(int *)((int)local_d4 + 0x398);
          puVar5 = *(undefined4 **)(iVar6 + 0x5c);
          if (*(undefined4 **)(iVar6 + 0x60) == puVar5) {
            FUN_00414080((void *)(iVar6 + 0x58),puVar5,&local_bc);
          }
          else {
            *puVar5 = local_bc;
            *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 4;
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d module sale instances for platform");
      local_d0 = *(undefined4 **)((int)pvVar4 + 0x398);
      local_b8 = (undefined4 *)0x0;
      puVar5 = *(undefined4 **)((int)local_d0 + 100);
      local_bc = (undefined4 *)
                 ((uint)((int)*(undefined4 **)((int)local_d0 + 0x68) + (3 - (int)puVar5)) >> 2);
      if (*(undefined4 **)((int)local_d0 + 0x68) < puVar5) {
        local_bc = (undefined4 *)0x0;
      }
      local_c8 = puVar5;
      if (local_bc != (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
        do {
          FUN_005adb3f((void *)*puVar5);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar5 = puVar5 + 1;
          pvVar4 = local_d4;
          param_1 = local_d8;
        } while (puVar12 != local_bc);
      }
      *(undefined4 *)((int)local_d0 + 0x68) = *(undefined4 *)((int)local_d0 + 100);
      fread(&local_c0,4,1,param_1);
      local_b8 = (undefined4 *)0x0;
      if (0 < local_c0) {
        do {
          fread(&local_ec,4,1,param_1);
          in_stack_fffffedc = (byte *)0x1;
          fread(&local_f8,4,1,param_1);
          in_stack_fffffec4 = &local_f4;
          fread(in_stack_fffffec4,4,1,param_1);
          puVar5 = (undefined4 *)FUN_005adb0f(8);
          puVar2 = DAT_0065b5cc;
          local_bc = local_ec;
          *puVar5 = 0x42c80000;
          uVar9 = 0;
          uVar11 = (int)(puVar2[1] - *puVar2) >> 2;
          if (uVar11 != 0) {
            local_c8 = (undefined4 *)*puVar2;
            puVar12 = local_c8;
            do {
              param_1 = local_d8;
              if (*(undefined4 **)*puVar12 == local_ec) {
                uVar7 = local_c8[uVar9];
                goto LAB_004c995d;
              }
              uVar9 = uVar9 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar9 < uVar11);
          }
          uVar7 = 0;
LAB_004c995d:
          puVar5[1] = uVar7;
          local_f0 = puVar5;
          local_bc = (undefined4 *)FUN_005adb0f(8);
          pvVar4 = local_d4;
          *local_bc = puVar5;
          local_bc[1] = local_f4;
          *puVar5 = local_f8;
          iVar6 = *(int *)((int)local_d4 + 0x398);
          puVar5 = *(undefined4 **)(iVar6 + 0x68);
          if (*(undefined4 **)(iVar6 + 0x6c) == puVar5) {
            FUN_00414080((void *)(iVar6 + 100),puVar5,&local_bc);
          }
          else {
            *puVar5 = local_bc;
            *(int *)(iVar6 + 0x68) = *(int *)(iVar6 + 0x68) + 4;
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d component sale instances for platform");
      FUN_0049f240(*(int *)((int)pvVar4 + 0x398));
      fread(&local_c0,4,1,param_1);
      local_b8 = (undefined4 *)0x0;
      if (0 < local_c0) {
        do {
          FUN_004b88b0((undefined1 *)local_b4,param_1);
          local_14 = 1;
          FUN_004b88b0((undefined1 *)local_6c,param_1);
          local_14 = 2;
          FUN_004b88b0((undefined1 *)local_84,param_1);
          local_14 = 3;
          FUN_004b88b0((undefined1 *)local_54,param_1);
          local_14 = 4;
          FUN_004b88b0((undefined1 *)local_9c,param_1);
          local_14 = 5;
          pvVar4 = (void *)FUN_005adb0f(0x388);
          local_bc = (undefined4 *)&stack0xfffffedc;
          local_14 = 6;
          FUN_004024e0(&stack0xfffffedc,local_84);
          local_c8 = (undefined4 *)&stack0xfffffec4;
          local_14 = 7;
          FUN_004024e0(&stack0xfffffec4,local_6c);
          iVar13 = 9;
          local_14 = 8;
          FUN_004024e0(&stack0xfffffea8,local_b4);
          iVar6 = FUN_004a80d0(in_stack_fffffea8);
          local_14 = 6;
          local_c4 = FUN_005099e0(pvVar4,iVar6,iVar13,in_stack_fffffec4);
          _local_14 = CONCAT31(uStack_13,5);
          local_bc = local_c4;
          iVar6 = FUN_00412bf0();
          piVar1 = *(int **)(iVar6 + 0x88);
          if (*(int **)(iVar6 + 0x8c) == piVar1) {
            FUN_00403840((void *)(iVar6 + 0x84),piVar1,local_6c);
          }
          else {
            FUN_004024e0(piVar1,local_6c);
            *(int *)(iVar6 + 0x88) = *(int *)(iVar6 + 0x88) + 0x18;
          }
          local_c8 = (undefined4 *)&stack0xfffffedc;
          FUN_004024e0(&stack0xfffffedc,local_84);
          local_14 = 9;
          pvVar4 = (void *)FUN_00412bf0();
          _local_14 = CONCAT31(uStack_13,5);
          FUN_004a5e90(pvVar4,in_stack_fffffedc);
          FUN_004024e0(&stack0xfffffedc,local_9c);
          FUN_0050c3d0(local_c4,in_stack_fffffedc);
          if ((undefined4 ****)(local_c4 + 0x26) != local_54) {
            ppppuVar8 = local_54;
            if (0xf < local_40) {
              ppppuVar8 = (undefined4 ****)local_54[0];
            }
            FUN_00402690(local_c4 + 0x26,ppppuVar8,local_44);
          }
          pvVar4 = local_d4;
          iVar6 = *(int *)((int)local_d4 + 0x398);
          puVar2 = *(uint **)(iVar6 + 0x40);
          if (*(uint **)(iVar6 + 0x44) == puVar2) {
            FUN_00414080((void *)(iVar6 + 0x3c),puVar2,&local_bc);
          }
          else {
            *puVar2 = (uint)local_c4;
            *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 4;
          }
          local_14 = 4;
          if (0xf < local_88) {
            pvVar10 = local_9c[0];
            if ((0xfff < local_88 + 1) &&
               (pvVar10 = *(void **)((int)local_9c[0] + -4),
               0x1f < (uint)((int)local_9c[0] + (-4 - (int)pvVar10)))) goto LAB_004c9e50;
            FUN_005adb3f(pvVar10);
          }
          local_14 = 3;
          local_8c = 0;
          local_88 = 0xf;
          local_9c[0] = (void *)((uint)local_9c[0] & 0xffffff00);
          if (0xf < local_40) {
            ppppuVar8 = (undefined4 ****)local_54[0];
            if ((0xfff < local_40 + 1) &&
               (ppppuVar8 = (undefined4 ****)local_54[0][-1],
               0x1f < (uint)((int)local_54[0] + (-4 - (int)ppppuVar8)))) goto LAB_004c9e50;
            FUN_005adb3f(ppppuVar8);
          }
          local_14 = 2;
          local_44 = 0;
          local_40 = 0xf;
          local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffffff00);
          if (0xf < local_70) {
            pvVar10 = local_84[0];
            if ((0xfff < local_70 + 1) &&
               (pvVar10 = *(void **)((int)local_84[0] + -4),
               0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar10)))) goto LAB_004c9e50;
            FUN_005adb3f(pvVar10);
          }
          local_14 = 1;
          local_74 = 0;
          local_70 = 0xf;
          local_84[0] = (void *)((uint)local_84[0] & 0xffffff00);
          if (0xf < local_58) {
            pvVar10 = local_6c[0];
            if ((0xfff < local_58 + 1) &&
               (pvVar10 = *(void **)((int)local_6c[0] + -4),
               0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar10)))) goto LAB_004c9e50;
            FUN_005adb3f(pvVar10);
          }
          local_14 = 0;
          local_5c = 0;
          local_58 = 0xf;
          local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
          if (0xf < local_a0) {
            pvVar10 = local_b4[0];
            if ((0xfff < local_a0 + 1) &&
               (pvVar10 = *(void **)((int)local_b4[0] + -4),
               0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar10)))) goto LAB_004c9e50;
            FUN_005adb3f(pvVar10);
          }
          local_b8 = (undefined4 *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d ships for sale for platform");
      fread(&local_c9,1,1,param_1);
      if (local_c9 != '\0') {
        FUN_0051aee0(pvVar4,DAT_0065b5cc[0x34],(int *)0x1);
      }
      local_14 = 0xff;
      uStack_13 = 0xffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar4 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar4 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4)))) goto LAB_004c9e50;
        FUN_005adb3f(pvVar4);
      }
      local_e4 = local_e4 + 1;
    } while (local_e4 < local_dc);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c9dfa:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined1 * __thiscall FUN_004c9e70(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bd913;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0xf;
  *(undefined1 *)((int)this + 0x58) = 0;
  local_8 = 4;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x70),0xc,8,FUN_0042b080,FUN_00413270);
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  local_8 = 7;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  uVar1 = FUN_004cb160();
  *(undefined4 *)((int)this + 0x108) = uVar1;
  *(undefined1 *)((int)this + 0x115) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0xf;
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0xf;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0xf;
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined2 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0xf;
  *(undefined1 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0xf;
  *(undefined1 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0xf;
  *(undefined1 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0xf;
  *(undefined1 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0xf;
  *(undefined1 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0xf;
  *(undefined1 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 500) = 0xbf800000;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  _local_8 = CONCAT31(uStack_7,0x12);
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  uVar1 = FUN_0047d950();
  *(undefined4 *)((int)this + 0x204) = uVar1;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0xf;
  *(undefined1 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 4;
  *(undefined4 *)((int)this + 0x250) = 3;
  *(undefined2 *)((int)this + 0x254) = 0x100;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = param_1;
  *(undefined4 *)((int)this + 0xd0) = 0x1010101;
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_004ca230(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bd930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  local_8 = 0;
  iVar3 = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(char *)((int)*(int **)(iVar1 + 4) + 0xd) == '\0') {
    do {
      FUN_004cb180((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_005adb3f(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  FUN_005adb3f((void *)*param_1);
  ExceptionList = local_10;
  return;
}


bool __fastcall FUN_004ca2d0(int param_1)

{
  void *pvVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  byte *in_stack_ffffffbc;
  int local_10;
  int iStack_c;
  
  pvVar6 = (void *)0x0;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (pvVar1 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8), pvVar1 != (void *)0x0)) {
    pvVar6 = pvVar1;
  }
  uVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x274) - iVar5 >> 2 != 0) {
    do {
      cVar3 = FUN_004a23b0(*(void **)(iVar5 + uVar7 * 4),pvVar6);
      if (cVar3 == '\0') {
        return false;
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)(param_1 + 0x270);
    } while (uVar7 < (uint)(*(int *)(param_1 + 0x274) - iVar5 >> 2));
  }
  iVar5 = *(int *)(param_1 + 0x290);
  if ((((iVar5 != 0) || (*(int *)(param_1 + 0x28c) != 0)) || (*(int *)(param_1 + 0x288) != 0)) ||
     (((*(int *)(param_1 + 0x284) != 0 || (*(int *)(param_1 + 0x280) != 0)) ||
      (*(float *)(param_1 + 0x27c) != 0.0)))) {
    iStack_c = (int)((ulonglong)*(undefined8 *)(DAT_0065b444 + 0x18c) >> 0x20);
    if (iVar5 <= iStack_c) {
      if (iVar5 < iStack_c) {
        return false;
      }
      local_10 = (int)*(undefined8 *)(DAT_0065b444 + 0x18c);
      if (*(int *)(param_1 + 0x28c) <= local_10) {
        if (*(int *)(param_1 + 0x28c) < local_10) {
          return false;
        }
        if (*(int *)(param_1 + 0x288) <= *(int *)(DAT_0065b444 + 0x188)) {
          if (*(int *)(param_1 + 0x288) < *(int *)(DAT_0065b444 + 0x188)) {
            return false;
          }
          if (*(int *)(param_1 + 0x284) <= *(int *)(DAT_0065b444 + 0x184)) {
            if (*(int *)(param_1 + 0x284) < *(int *)(DAT_0065b444 + 0x184)) {
              return false;
            }
            if (*(int *)(param_1 + 0x280) <= *(int *)(DAT_0065b444 + 0x180)) {
              return false;
            }
          }
        }
      }
    }
  }
  pbVar2 = *(byte **)(*(int *)(param_1 + 0x294) + 0x3f8);
  pbVar4 = FUN_004143f0(*(byte **)(*(int *)(param_1 + 0x294) + 0x3f4),pbVar2,
                        (byte *)(param_1 + 0x1c));
  if (pbVar4 != pbVar2) {
    return false;
  }
  FUN_004024e0(&stack0xffffffbc,(undefined4 *)(param_1 + 0x1c));
  iVar5 = FUN_004a7100(in_stack_ffffffbc);
  return iVar5 == 0;
}


int __cdecl FUN_004ca430(byte *param_1)

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
    pbVar8 = (&PTR_s_tutorial_005de0d0)[iVar7];
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
    if ((char)uVar5 != '\0') goto LAB_004ca481;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  iVar7 = 2;
LAB_004ca481:
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


int __cdecl FUN_004ca4c0(byte *param_1)

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
    pbVar8 = (&PTR_DAT_005de0b0)[iVar7];
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
    if ((char)uVar5 != '\0') goto LAB_004ca511;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  iVar7 = 7;
LAB_004ca511:
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


undefined1 * __fastcall FUN_004ca550(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bd9e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xf;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 100) = 3000;
  *(undefined4 *)(param_1 + 0x70) = 2;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xf;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  iVar2 = 0xc;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  puVar1 = (undefined4 *)(param_1 + 200);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0xf;
  param_1[0x168] = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0xf;
  param_1[0x180] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0xf;
  param_1[0x198] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0xf;
  param_1[0x1b0] = 0;
  local_8 = 0xb;
  _eh_vector_constructor_iterator_
            (param_1 + 0x1c8,0x6c,3,(_func_void_void_ptr *)&LAB_004ca9b0,FUN_004caa10);
  param_1[0x30c] = 0;
  *(undefined4 *)(param_1 + 0x30e) = 0x10000;
  param_1[0x312] = 0;
  param_1[0x316] = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 1;
  *(undefined4 *)(param_1 + 0x340) = 1;
  *(undefined4 *)(param_1 + 0x344) = 1;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  param_1[0x364] = 1;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0x10000;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  param_1[0x400] = 0;
  param_1[0x164] = 0;
  FUN_004028b0(*(int **)(param_1 + 0x3f4),*(int **)(param_1 + 0x3f8));
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  param_1[900] = 1;
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x160) = 1;
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_004caa10(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)param_1[0x18];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x1a] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004cab6f;
    FUN_005adb3f(pvVar2);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  if (0xf < (uint)param_1[0x17]) {
    pvVar1 = (void *)param_1[0x12];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x17] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004cab6f;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (0xf < (uint)param_1[0x11]) {
    pvVar1 = (void *)param_1[0xc];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x11] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004cab6f;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004cab6f;
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
LAB_004cab6f:
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


void __fastcall FUN_004cab80(int param_1)

{
  char cVar1;
  void *this;
  undefined4 uVar2;
  undefined4 *this_00;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_stack_ffffffbc;
  uint3 uVar7;
  byte *pbVar6;
  byte *in_stack_ffffffc0;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bda20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)(param_1 + 0x388);
  local_14 = 3;
  do {
    if (*(int *)(param_1 + 0x70) == 2) {
      *piVar4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x70) == 3) {
        uVar5 = 0;
        iVar3 = *(int *)(param_1 + 0x78);
        if (*(int *)(param_1 + 0x7c) - iVar3 >> 2 != 0) {
          do {
            FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x1c));
            in_stack_ffffffbc = 0x4cabf6;
            this = (void *)FUN_004a7100(in_stack_ffffffc0);
            if ((this == (void *)0x0) || (uVar2 = FUN_0050d210(this,'\x01'), (char)uVar2 == '\0')) {
              *(undefined4 *)(param_1 + 0x388 + uVar5 * 4) = 0;
            }
            uVar5 = uVar5 + 1;
            iVar3 = *(int *)(param_1 + 0x78);
          } while (uVar5 < (uint)(*(int *)(param_1 + 0x7c) - iVar3 >> 2));
        }
        *piVar4 = 1;
      }
      else if (*piVar4 == 0) goto LAB_004cac39;
      *(undefined1 *)(param_1 + 900) = 0;
    }
LAB_004cac39:
    piVar4 = piVar4 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      cVar1 = *(char *)(param_1 + 900);
      if (*(char *)(param_1 + 0x400) != cVar1) {
        uVar7 = (uint3)((uint)in_stack_ffffffbc >> 8);
        if (cVar1 != '\0') {
          pbVar6 = (byte *)((uint)uVar7 << 8);
          FUN_00402690(&stack0xffffffbc,"scenario_complete",0x11);
        }
        else {
          pbVar6 = (byte *)((uint)uVar7 << 8);
          FUN_00402690(&stack0xffffffbc,"scenario_complete",0x11);
        }
        local_8 = (uint)(cVar1 != '\0');
        this_00 = FUN_00412df0();
        local_8 = 0xffffffff;
        FUN_004a0ee0(this_00,pbVar6);
        *(undefined1 *)(param_1 + 0x400) = *(undefined1 *)(param_1 + 900);
      }
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


void __fastcall FUN_004cacf0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  byte *****pppppbVar4;
  uint uVar5;
  byte *****pppppbVar6;
  undefined1 *this;
  void *pvVar7;
  int *piVar8;
  byte *in_stack_ffffff84;
  int local_4c;
  int local_48;
  void *local_44 [5];
  uint local_30;
  byte ****local_2c;
  byte ***pppbStack_28;
  byte ***pppbStack_24;
  byte ***pppbStack_20;
  byte ***local_1c;
  byte ***pppbStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bda50;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)(param_1 + 0x38c);
  local_48 = 1;
  do {
    local_1c = (byte ***)0x0;
    pppbStack_18 = (byte ***)0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    local_8 = 0;
    if (*piVar3 == 2) {
      if (*(int *)(param_1 + 0x70) == 3) {
        pppppbVar4 = (byte *****)FUN_00591e00((undefined1 *)local_44,"Scenario failed.");
        if (&local_2c != pppppbVar4) {
          FUN_00401b20((int *)&local_2c);
          local_2c = *pppppbVar4;
          pppbStack_28 = (byte ***)pppppbVar4[1];
          pppbStack_24 = (byte ***)pppppbVar4[2];
          pppbStack_20 = (byte ***)pppppbVar4[3];
          local_1c = (byte ***)pppppbVar4[4];
          pppbStack_18 = (byte ***)pppppbVar4[5];
          pppppbVar4[4] = (byte ****)0x0;
          pppppbVar4[5] = (byte ****)0xf;
          *(undefined1 *)pppppbVar4 = 0;
        }
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_004cb035;
          FUN_005adb3f(pvVar7);
        }
      }
      local_4c = 1;
    }
    else {
      local_4c = 1;
      if (*piVar3 == 1) {
        if (*(int *)(param_1 + 0x70) == 3) {
          pppppbVar4 = (byte *****)FUN_00591e00((undefined1 *)local_44,"Scenario successful.");
          if (&local_2c != pppppbVar4) {
            FUN_00401b20((int *)&local_2c);
            local_2c = *pppppbVar4;
            pppbStack_28 = (byte ***)pppppbVar4[1];
            pppbStack_24 = (byte ***)pppppbVar4[2];
            pppbStack_20 = (byte ***)pppppbVar4[3];
            local_1c = (byte ***)pppppbVar4[4];
            pppbStack_18 = (byte ***)pppppbVar4[5];
            pppppbVar4[4] = (byte ****)0x0;
            pppppbVar4[5] = (byte ****)0xf;
            *(undefined1 *)pppppbVar4 = 0;
          }
          if (0xf < local_30) {
            pvVar7 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar7 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_004cb035;
            FUN_005adb3f(pvVar7);
          }
        }
        local_4c = 0;
      }
    }
    pppppbVar4 = (byte *****)local_2c;
    pppppbVar6 = &local_2c;
    if ((byte ****)0xf < pppbStack_18) {
      pppppbVar6 = (byte *****)local_2c;
    }
    uVar5 = FUN_004031f0((byte *)pppppbVar6,(uint)local_1c,(byte *)&PTR_005ce008,0);
    if ((char)uVar5 == '\0') {
      if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
        uVar5 = 0;
        piVar8 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
        if (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0) - *piVar8 >> 2 != 0) {
          do {
            FUN_004024e0(&stack0xffffff84,(undefined4 *)(*(int *)(*piVar8 + uVar5 * 4) + 0x238));
            local_8._0_1_ = 1;
            this = FUN_00402de0();
            local_8 = (uint)local_8._1_3_ << 8;
            cVar2 = FUN_004232c0(this,in_stack_ffffff84);
            if ((cVar2 != '\0') &&
               (iVar1 = *(int *)(uVar5 * 4 + *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc)),
               *(int *)(iVar1 + 100) == local_48)) {
              pppppbVar4 = &local_2c;
              if ((byte ****)0xf < pppbStack_18) {
                pppppbVar4 = (byte *****)local_2c;
              }
              FUN_00527550(*(int **)(iVar1 + 0x224),local_4c * 2 + 1,pppppbVar4);
              FUN_00591070("DETAIL","Adding message for %s: \'%s\'");
            }
            uVar5 = uVar5 + 1;
            piVar8 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
            pppppbVar4 = (byte *****)local_2c;
          } while (uVar5 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0) - *piVar8 >> 2));
        }
      }
      else if (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 100) == local_48) {
        pppppbVar6 = &local_2c;
        if ((byte ****)0xf < pppbStack_18) {
          pppppbVar6 = pppppbVar4;
        }
        FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),3,pppppbVar6);
        pppppbVar4 = (byte *****)local_2c;
      }
    }
    local_8 = -1;
    if ((byte ****)0xf < pppbStack_18) {
      pppppbVar6 = pppppbVar4;
      if ((0xfff < (int)pppbStack_18 + 1U) &&
         (pppppbVar6 = (byte *****)pppppbVar4[-1],
         (byte *)0x1f < (byte *)((int)pppppbVar4 + (-4 - (int)pppppbVar6)))) {
LAB_004cb035:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppbVar6);
    }
    local_48 = local_48 + 1;
    piVar3 = piVar3 + 1;
    if (2 < local_48) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


void __fastcall FUN_004cb060(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)param_1[1];
    if (piVar1 != piVar2) {
      do {
        FUN_00419bc0(piVar1);
        piVar1 = piVar1 + 0xc;
      } while (piVar1 != piVar2);
      piVar1 = (int *)*param_1;
    }
    piVar2 = piVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)piVar1) / 0x30) * 0x30)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void __fastcall FUN_004cb0e0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((uint *)*param_1 != (uint *)0x0) {
    FUN_00480020((uint *)*param_1,(uint *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x24) * 0x24)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_004cb160(void)

{
  int iVar1;
  
  iVar1 = FUN_005adb0f(0x18);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}


void FUN_004cb180(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004cb180((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_005adb3f(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


char __fastcall FUN_004cb1c0(int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((float)*(double *)(param_1 + 0x20) <= 0.0) {
    if ((float)*(double *)(param_1 + 0x28) <= 0.0) {
      cVar1 = '\x03';
    }
    return cVar1;
  }
  return ((float)*(double *)(param_1 + 0x28) <= 0.0) + '\x01';
}


uint __fastcall FUN_004cb200(int param_1)

{
  uint in_EAX;
  
  if (*(int *)(param_1 + 0x254) != 0) {
    return (uint)(*(int *)(*(int *)(param_1 + 0x254) + 0x158) == 2);
  }
  return in_EAX & 0xffffff00;
}


undefined1 __cdecl FUN_004cb220(int param_1,undefined4 param_2,void *param_3)

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
  if ((param_1 != 0) && (DAT_0065b3cd != '\0')) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"submenu_options",0xf);
    local_8._0_1_ = 1;
    this = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 != 0) {
      uVar3 = 1;
      goto LAB_004cb29c;
    }
  }
  uVar3 = 0;
LAB_004cb29c:
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


bool __cdecl FUN_004cb2f0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x318) != '\0';
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


bool __cdecl FUN_004cb350(void *param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
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
  if (param_1 == (void *)0x0) {
    bVar3 = false;
  }
  else {
    uVar1 = FUN_0050d210(param_1,'\0');
    bVar3 = (char)uVar1 != '\0';
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


bool __cdecl FUN_004cb3e0(void *param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
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
  if ((param_1 == (void *)0x0) || (*(char *)(DAT_0065b444 + 0x72) == '\0')) {
    bVar3 = false;
  }
  else {
    uVar1 = FUN_0050d210(param_1,'\0');
    bVar3 = (char)uVar1 != '\0';
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


bool __cdecl FUN_004cb480(int param_1,int param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = DAT_00655098;
    if (param_2 != 0) {
      iVar1 = DAT_00655094;
    }
    bVar3 = iVar1 == 0;
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
  return bVar3;
}


undefined1 __cdecl FUN_004cb4f0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x104);
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


bool __cdecl FUN_004cb540(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xe4) != '\0';
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


undefined1 __cdecl FUN_004cb5a0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(double *)(param_1 + 0x140) != 0.0)) {
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


undefined1 __cdecl FUN_004cb610(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (*(double *)(param_1 + 0x140) <= 0.0)) ||
     (0.30000001192092896 <= *(double *)(param_1 + 0x140))) {
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


undefined1 __cdecl FUN_004cb680(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if ((0.30000001192092896 < *(double *)(param_1 + 0x140)) ||
          (0.5 < *(double *)(param_1 + 0x140))) {
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


undefined1 __cdecl FUN_004cb6f0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) || (*(int **)(param_1 + 0x184) == (int *)0x0)) ||
      (**(int **)(param_1 + 0x184) != 1)) || (*(double *)(param_1 + 0x140) <= 0.0)) {
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


undefined1 __cdecl FUN_004cb760(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if ((((param_1 == 0) || (*(int **)(param_1 + 0x184) == (int *)0x0)) ||
      (**(int **)(param_1 + 0x184) != 2)) || (*(double *)(param_1 + 0x140) <= 0.0)) {
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


undefined1 __cdecl FUN_004cb7d0(void *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  float *pfVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int extraout_ECX_01;
  void *pvVar3;
  undefined1 uVar4;
  float fVar5;
  uint in_stack_00000020;
  undefined4 local_1c [2];
  undefined4 local_14 [2];
  undefined4 local_c [2];
  
  if ((param_1 != (void *)0x0) && (DAT_00655098 != 0)) {
    iVar1 = *(int *)((int)param_1 + 0x19c);
    if (iVar1 != 0) {
      pfVar2 = (float *)FUN_00517770(param_1,local_c);
      if (((float)*(double *)(iVar1 + 0x10) == *pfVar2) &&
         (param_1 = extraout_ECX, (float)*(double *)(iVar1 + 0x18) == pfVar2[1])) goto LAB_004cb832;
LAB_004cb8bc:
      uVar4 = 1;
      goto LAB_004cb8c2;
    }
LAB_004cb832:
    iVar1 = *(int *)((int)param_1 + 0x1a4);
    if (iVar1 != 0) {
      pfVar2 = (float *)FUN_00517770(param_1,local_14);
      if (((float)*(double *)(iVar1 + 0x20) != *pfVar2) ||
         (param_1 = extraout_ECX_00, (float)*(double *)(iVar1 + 0x28) != pfVar2[1]))
      goto LAB_004cb8bc;
    }
    fVar5 = *(float *)((int)param_1 + 0x1b8);
    if ((fVar5 != -9999.0) || (*(float *)((int)param_1 + 0x1bc) != -9999.0)) {
      pfVar2 = (float *)FUN_00517770(param_1,local_1c);
      if ((fVar5 != *pfVar2) || (*(float *)(extraout_ECX_01 + 0x1bc) != pfVar2[1]))
      goto LAB_004cb8bc;
    }
  }
  uVar4 = 0;
LAB_004cb8c2:
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


undefined1 __cdecl FUN_004cb900(void *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
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
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0xd4) != 3)) {
    pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
    cVar1 = FUN_004cb9e0(param_1,0,pvVar3);
    if (cVar1 != '\0') {
      iVar2 = *(int *)((int)param_1 + 0x1c8) - *(int *)((int)param_1 + 0x1c4) >> 5;
      if ((iVar2 == 0) || (*(int *)(iVar2 * 0x20 + -0xc + *(int *)((int)param_1 + 0x1c4)) == 0)) {
        uVar4 = 1;
        goto LAB_004cb991;
      }
    }
  }
  uVar4 = 0;
LAB_004cb991:
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


// WARNING: Type propagation algorithm not settling

void __cdecl FUN_004cb9e0(void *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  void *pvVar6;
  uint in_stack_00000020;
  void *in_stack_ffffffa8;
  undefined1 *local_30;
  char *******local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bdb00;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 == (void *)0x0) goto LAB_004cba8c;
  if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1))
  {
    local_30 = &stack0xffffffa8;
    in_stack_ffffffa8 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
    FUN_00402690(&stack0xffffffa8,"only_plot_to_beacons",0x14);
    local_8 = 1;
    puVar3 = FUN_00412df0();
    local_8 = 0;
    bVar2 = FUN_004a1150(puVar3,in_stack_ffffffa8);
    iVar1 = *(int *)((int)param_1 + 0x194);
    if (bVar2 == 0) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x130) != 0)) {
        FUN_00591e00((undefined1 *)local_2c,"only_plot_to_%s");
        local_8 = 2;
        pppppppcVar5 = (char *******)local_2c;
        if (0xf < local_18) {
          pppppppcVar5 = local_2c[0];
        }
        pppppppcVar4 = (char *******)local_2c;
        if (0xf < local_18) {
          pppppppcVar4 = local_2c[0];
        }
        FUN_00413ec0(&local_30,tolower_exref,(char *)pppppppcVar4,
                     (char *)((int)pppppppcVar5 + local_1c),(undefined1 *)pppppppcVar5);
        local_30 = &stack0xffffffa8;
        FUN_004024e0(&stack0xffffffa8,local_2c);
        local_8 = 3;
        puVar3 = FUN_00412df0();
        local_8 = 2;
        FUN_004a1150(puVar3,pppppppcVar4);
        if (0xf < local_18) {
          pppppppcVar5 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pppppppcVar5 = (char *******)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppppcVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppppcVar5);
        }
      }
      goto LAB_004cba8c;
    }
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0xe0) != 5)) goto LAB_004cba8c;
  }
  pvVar6 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
  FUN_004cb7d0(param_1,param_2,pvVar6);
LAB_004cba8c:
  if (0xf < in_stack_00000020) {
    pvVar6 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar6 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 __cdecl FUN_004cbc20(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10), iVar1 == 0)) ||
     (*(char *)(iVar1 + 0x62) == '\0')) {
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


undefined1 __cdecl FUN_004cbc80(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if ((((*(int *)(param_1 + 0x1a4) == 0) &&
            (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 == 0)) &&
           (*(float *)(param_1 + 0x1b8) == -9999.0)) && (*(float *)(param_1 + 0x1bc) == -9999.0)) {
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


undefined1 __cdecl FUN_004cbd20(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    iVar1 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
    if ((iVar1 != 0) && (*(char *)(iVar1 + 99) == '\0')) {
      uVar3 = 1;
      goto LAB_004cbd4f;
    }
  }
  uVar3 = 0;
LAB_004cbd4f:
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


bool __cdecl FUN_004cbd90(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x1dc) < 100;
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


uint __cdecl FUN_004cbdf0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  uint in_EAX;
  uint extraout_EAX;
  void *pvVar1;
  uint in_stack_00000020;
  
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x004cbe19. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return extraout_EAX;
      }
    }
    in_EAX = FUN_005adb3f(pvVar1);
  }
  return in_EAX & 0xffffff00;
}


bool __cdecl FUN_004cbe30(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = 0.0 < *(float *)(param_1 + 0x154);
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


undefined1 __cdecl FUN_004cbe90(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint in_stack_00000020;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1e4) != -1)) {
    iVar1 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
    if ((iVar1 != 0) && (*(char *)(iVar1 + 99) == '\0')) {
      iVar2 = 0;
      do {
        if (*(char *)(iVar1 + 0x1e + iVar2) == '\0') goto LAB_004cbed7;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if (*(char *)(iVar1 + 0x1c) == '\0') {
        uVar4 = 1;
        goto LAB_004cbed9;
      }
    }
  }
LAB_004cbed7:
  uVar4 = 0;
LAB_004cbed9:
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


bool __cdecl FUN_004cbf20(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0xd4) == 3;
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


bool __cdecl FUN_004cbf80(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
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


bool __cdecl FUN_004cbfe0(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (*(char *)(DAT_0065b444 + 0x71) != '\0')) {
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
