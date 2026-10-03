#include "../ois_server.exe.h"


void FUN_004ac610(undefined1 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  char *pcVar14;
  float local_4c;
  void *local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar8 = DAT_0065b5cc;
  puStack_c = &LAB_005bc222;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)(iVar6 + 0x1e8) == -1) {
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!POWER MANAGEMENT\n");
    local_8 = 1;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- General -\n");
    local_8 = 2;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    FUN_00522be0(*(int *)(iVar6 + 0x40));
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Drain      : `$%.2fkw\n");
    local_8 = 3;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Modules    : `0%d\n");
    local_8 = 4;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Cur. Mode  : `%s\n");
    local_8 = 5;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Storage -\n");
    local_8 = 6;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    uVar7 = 0;
    uVar9 = *(uint *)(*(int *)(iVar6 + 0x40) + 0x3c);
    uVar10 = *(uint *)(*(int *)(iVar6 + 0x40) + 0x40);
    uVar11 = uVar10 + (3 - uVar9) >> 2;
    if (uVar10 < uVar9) {
      uVar11 = 0;
    }
    if (uVar11 != 0) {
      do {
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar11);
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Batteries  : `$%d\n");
    local_8 = 7;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    for (iVar8 = *(int *)(*(int *)(iVar6 + 0x40) + 0x40) - *(int *)(*(int *)(iVar6 + 0x40) + 0x3c)
                 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkw\n");
    local_8 = 8;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    FUN_005226c0(*(int *)(iVar6 + 0x40));
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fkw\n");
    local_8 = 9;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Generation -\n");
    local_8 = 10;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    local_8 = 0xb;
    iVar8 = 0;
    local_34 = 0;
    uVar10 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    piVar12 = *(int **)(*(int *)(iVar6 + 0x40) + 0x3c);
    piVar1 = *(int **)(*(int *)(iVar6 + 0x40) + 0x40);
    uVar9 = (uint)((int)piVar1 + (3 - (int)piVar12)) >> 2;
    if (piVar1 < piVar12) {
      uVar9 = 0;
    }
    if (uVar9 != 0) {
      do {
        iVar3 = *piVar12;
        if (*(int *)(*(int *)(iVar3 + 8) + 4) == 1) {
          if (iVar8 != 0) {
            FUN_00403640(local_44,&DAT_005ea418,1);
          }
          FUN_00403640(local_44,"reactor",7);
          iVar8 = local_34;
        }
        if (*(int *)(*(int *)(iVar3 + 8) + 4) == 0xd) {
          if (iVar8 != 0) {
            FUN_00403640(local_44,&DAT_005ea418,1);
          }
          FUN_00403640(local_44,"solar",5);
          iVar8 = local_34;
        }
        uVar10 = uVar10 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar10 != uVar9);
    }
    uVar11 = 0;
    uVar9 = *(uint *)(*(int *)(iVar6 + 0x40) + 0x3c);
    uVar10 = *(uint *)(*(int *)(iVar6 + 0x40) + 0x40);
    uVar7 = uVar10 + (3 - uVar9) >> 2;
    if (uVar10 < uVar9) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      do {
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar7);
    }
    uVar9 = 0;
    if (uVar7 != 0) {
      do {
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar7);
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Generators : `$%d (%s)\n");
    local_8._0_1_ = 0xc;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8._0_1_ = 0xb;
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
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
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
    FUN_00522770(*(int *)(iVar6 + 0x40));
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkw\n");
    local_8 = 0xd;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    iVar8 = *(int *)(iVar6 + 0x40);
    uVar9 = 0;
    local_4c = 0.0;
    iVar3 = *(int *)(iVar8 + 0x3c);
    if (*(int *)(iVar8 + 0x40) - iVar3 >> 2 != 0) {
      do {
        fVar13 = local_4c;
        FUN_004ae5e0(*(int *)(iVar3 + uVar9 * 4));
        if (0.0 < fVar13) {
          iVar3 = *(int *)(*(int *)(iVar8 + 0x3c) + uVar9 * 4);
          if (*(char *)(iVar3 + 99) == '\0') {
            local_4c = local_4c + 0.0;
          }
          else {
            FUN_004ae5e0(iVar3);
            local_4c = fVar13 + local_4c;
          }
        }
        uVar9 = uVar9 + 1;
        iVar3 = *(int *)(iVar8 + 0x3c);
      } while (uVar9 < (uint)(*(int *)(iVar8 + 0x40) - iVar3 >> 2));
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fkw\n");
    local_8 = 0xe;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Drain (Normal) -\n");
    local_8 = 0xf;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    for (iVar8 = *(int *)(*(int *)(iVar6 + 0x40) + 0x40) - *(int *)(*(int *)(iVar6 + 0x40) + 0x3c)
                 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkw\n");
    local_8 = 0x10;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    iVar8 = *(int *)(iVar6 + 0x40);
    uVar9 = 0;
    if (*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2 != 0) {
      do {
        FUN_00438020(*(int **)(*(int *)(*(int *)(iVar8 + 0x3c) + uVar9 * 4) + 0xc));
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2));
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `^%.2fkw\n");
    local_8 = 0x11;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Drain (High) -\n");
    local_8 = 0x12;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    for (iVar8 = *(int *)(*(int *)(iVar6 + 0x40) + 0x40) - *(int *)(*(int *)(iVar6 + 0x40) + 0x3c)
                 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkw\n");
    local_8 = 0x13;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
    local_8 = local_8 & 0xffffff00;
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
    iVar6 = *(int *)(iVar6 + 0x40);
    uVar9 = 0;
    if (*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 2 != 0) {
      do {
        FUN_00438020(*(int **)(*(int *)(*(int *)(iVar6 + 0x3c) + uVar9 * 4) + 0xc));
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 2));
    }
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `^%.2fkw\n");
    local_8 = 0x14;
    puVar4 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar4 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar4,puVar2[4]);
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
  }
  else {
    uVar10 = 0;
    iVar8 = *(int *)(*(int *)(iVar8 + 0xd0) + 0x40);
    puVar4 = *(undefined4 **)(iVar8 + 0x3c);
    uVar9 = *(int *)(iVar8 + 0x40) - (int)puVar4 >> 2;
    if (uVar9 != 0) {
      do {
        piVar12 = (int *)*puVar4;
        if (piVar12[4] == *(int *)(iVar6 + 0x1e8)) {
          if (piVar12 != (int *)0x0) {
            FUN_00403640(param_1,"`!Module Information\n",0x15);
            puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Basic -\n");
            local_8 = 0x15;
            puVar4 = puVar2;
            if (0xf < (uint)puVar2[5]) {
              puVar4 = (undefined4 *)*puVar2;
            }
            FUN_00403640(param_1,puVar4,puVar2[4]);
            local_8 = local_8 & 0xffffff00;
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
            puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Type       : `%%%s\n");
            local_8 = 0x16;
            puVar4 = puVar2;
            if (0xf < (uint)puVar2[5]) {
              puVar4 = (undefined4 *)*puVar2;
            }
            FUN_00403640(param_1,puVar4,puVar2[4]);
            local_8 = local_8 & 0xffffff00;
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
            puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Name       : `*%s\n");
            local_8 = 0x17;
            puVar4 = puVar2;
            if (0xf < (uint)puVar2[5]) {
              puVar4 = (undefined4 *)*puVar2;
            }
            FUN_00403640(param_1,puVar4,puVar2[4]);
            local_8 = local_8 & 0xffffff00;
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
            puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Manufact.  : `*%s\n");
            local_8 = 0x18;
            puVar4 = puVar2;
            if (0xf < (uint)puVar2[5]) {
              puVar4 = (undefined4 *)*puVar2;
            }
            FUN_00403640(param_1,puVar4,puVar2[4]);
            local_8 = local_8 & 0xffffff00;
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
            puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`&Slot       : `*%s\n");
            local_8 = 0x19;
            puVar4 = puVar2;
            if (0xf < (uint)puVar2[5]) {
              puVar4 = (undefined4 *)*puVar2;
            }
            FUN_00403640(param_1,puVar4,puVar2[4]);
            local_8 = local_8 & 0xffffff00;
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
            if ((0.0 < *(float *)(piVar12[2] + 0xc0)) || (0.0 < *(float *)(piVar12[2] + 0xbc))) {
              if (*(char *)((int)piVar12 + 0x62) == '\0') {
                uVar9 = 0x18;
                pcVar14 = "`&Mode       : `$Normal\n";
              }
              else {
                uVar9 = 0x16;
                pcVar14 = "`&Mode       : `^High\n";
              }
              FUN_00403640(param_1,pcVar14,uVar9);
            }
            iVar6 = piVar12[2];
            if (0 < *(int *)(iVar6 + 0xd4)) {
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`*- Emissions (Normal) -\n");
              local_8 = 0x1a;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
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
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%d.00dBw\n");
              local_8 = 0x1b;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              FUN_00437ea0((int *)piVar12[3]);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fdBw\n");
              local_8 = 0x1c;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              iVar6 = piVar12[2];
            }
            if (0 < *(int *)(iVar6 + 0xcc)) {
              puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Emissions (High) -\n")
              ;
              local_8 = 0x1d;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%d.00dBw\n");
              local_8 = 0x1e;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              FUN_00437ea0((int *)piVar12[3]);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fdBw\n");
              local_8 = 0x1f;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              iVar6 = piVar12[2];
            }
            if (0.0 < *(float *)(iVar6 + 0xc0)) {
              puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Drain (Normal) -\n");
              local_8 = 0x20;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkW/s\n");
              local_8 = 0x21;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              FUN_00438020((int *)piVar12[3]);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fkW/s\n");
              local_8 = 0x22;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              iVar6 = piVar12[2];
            }
            if (0.0 < *(float *)(iVar6 + 0xbc)) {
              puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Drain (High) -\n");
              local_8 = 0x23;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkW/s\n");
              local_8 = 0x24;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              FUN_00438020((int *)piVar12[3]);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fkW/s\n");
              local_8 = 0x25;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              iVar6 = piVar12[2];
            }
            if (0.0 < *(float *)(iVar6 + 200)) {
              puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Generation -\n");
              local_8 = 0x26;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkW\n");
              local_8 = 0x27;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              FUN_004ae5e0((int)piVar12);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fkW\n");
              local_8 = 0x28;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              iVar6 = piVar12[2];
            }
            if (0.0 < *(float *)(iVar6 + 0xc4)) {
              puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`*- Storage -\n");
              local_8 = 0x29;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Theoretical: `$%.2fkW\n");
              local_8 = 0x2a;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              local_8 = local_8 & 0xffffff00;
              FUN_00401b20((int *)local_2c);
              FUN_004ae590(piVar12);
              puVar2 = (undefined4 *)
                       FUN_00591e00((undefined1 *)local_2c,"`&Actual     : `$%.2fkW\n");
              local_8 = 0x2b;
              puVar4 = puVar2;
              if (0xf < (uint)puVar2[5]) {
                puVar4 = (undefined4 *)*puVar2;
              }
              FUN_00403640(param_1,puVar4,puVar2[4]);
              FUN_00401b20((int *)local_2c);
            }
            goto LAB_004ad2cd;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar10 < uVar9);
    }
    FUN_00402690(param_1,"`@ERROR. Unknown module.",0x18);
  }
LAB_004ad2cd:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004adbd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc266;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = *param_3;
  FUN_004024e0(param_2 + 1,param_3 + 1);
  local_8 = 0;
  param_2[7] = param_3[7];
  FUN_004024e0(param_2 + 8,param_3 + 8);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004024e0(param_2 + 0xe,param_3 + 0xe);
  param_2[0x14] = param_3[0x14];
  param_2[0x15] = param_3[0x15];
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_3 + 0x16);
  *(undefined1 *)((int)param_2 + 0x5a) = *(undefined1 *)((int)param_3 + 0x5a);
  *(undefined2 *)((int)param_2 + 0x5b) = *(undefined2 *)((int)param_3 + 0x5b);
  *(undefined1 *)((int)param_2 + 0x5d) = *(undefined1 *)((int)param_3 + 0x5d);
  *(undefined1 *)((int)param_2 + 0x5e) = *(undefined1 *)((int)param_3 + 0x5e);
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_004adc80(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar7;
  undefined4 extraout_ECX_04;
  int extraout_EDX;
  undefined4 *puVar8;
  int extraout_EDX_00;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = ((int)param_1 - *(int *)this) / 0x60;
  iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x60;
  if (iVar2 == 0x2aaaaaa) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = iVar2 + 1;
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0x60;
  uVar3 = uVar6;
  if ((uVar4 <= 0x2aaaaaa - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar6)) {
    uVar3 = uVar6;
  }
  uVar6 = uVar3 * 0x60;
  if (uVar3 < 0x2aaaaab) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        puVar10 = (undefined4 *)0x0;
        uVar7 = 0;
      }
      else {
        puVar10 = (undefined4 *)FUN_005adb0f(uVar6);
        uVar7 = extraout_ECX_00;
      }
      goto LAB_004add8b;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar4 = uVar6 + 0x23;
  if (uVar4 <= uVar6) {
    uVar4 = 0xffffffff;
  }
  iVar5 = FUN_005adb0f(uVar4);
  if (iVar5 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  puVar10 = (undefined4 *)(iVar5 + 0x23U & 0xffffffe0);
  puVar10[-1] = iVar5;
  uVar7 = extraout_ECX;
LAB_004add8b:
  local_8 = 0;
  FUN_004adbd0(uVar7,puVar10 + iVar1 * 0x18,param_2);
  puVar9 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar9) {
    uVar7 = extraout_ECX_01;
    puVar8 = puVar10;
    for (puVar11 = *(undefined4 **)this; puVar11 != puVar9; puVar11 = puVar11 + 0x18) {
      FUN_0043cd30(uVar7,puVar8,puVar11);
      puVar8 = (undefined4 *)(extraout_EDX + 0x60);
      uVar7 = extraout_ECX_02;
    }
  }
  else {
    puVar11 = *(undefined4 **)this;
    uVar7 = extraout_ECX_01;
    puVar8 = puVar10;
    if (puVar11 != param_1) {
      do {
        FUN_0043cd30(uVar7,puVar8,puVar11);
        puVar11 = puVar11 + 0x18;
        puVar8 = (undefined4 *)(extraout_EDX_00 + 0x60);
        uVar7 = extraout_ECX_03;
      } while (puVar11 != param_1);
      puVar9 = *(undefined4 **)((int)this + 4);
    }
    if (param_1 != puVar9) {
      iVar5 = 0x60 - (int)param_1;
      do {
        FUN_0043cd30(uVar7,(undefined4 *)((int)(puVar10 + iVar1 * 0x18) + iVar5 + (int)param_1),
                     param_1);
        param_1 = param_1 + 0x18;
        uVar7 = extraout_ECX_04;
      } while (param_1 != puVar9);
    }
  }
  FUN_0043cfb0(this,(int)puVar10,iVar2 + 1,uVar3);
  ExceptionList = local_10;
  return *(int *)this + iVar1 * 0x60;
}


undefined1 __fastcall FUN_004ade80(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}


undefined1 __fastcall FUN_004ade90(int param_1)

{
  if ((*(char *)(param_1 + 0x3bc) == '\0') && (*(float *)(param_1 + 0x3c0) != -1.0)) {
    return 1;
  }
  return 0;
}


undefined4 * __thiscall FUN_004adec0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bc2c2;
  local_1c = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined ***)this = ShipModule::vftable;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 100;
  *(undefined1 *)((int)this + 0x2c) = 1;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x1000101;
  *(undefined4 *)((int)this + 100) = 100;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0xbf800000;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 4);
  if (((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 7 || (iVar1 == 9)))) ||
     ((iVar1 == 0xb || ((iVar1 == 8 || (iVar1 == 0xd)))))) {
    *(undefined1 *)((int)this + 0x14) = 1;
  }
  else {
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x1e) = 0x1010101;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  piVar4 = (int *)FUN_005adb0f(0xa4);
  local_14 = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
  *piVar4 = iVar1;
  if (iVar1 == 0) {
    FUN_00591070("DETAIL","Unknown component interface instance.");
    bVar2 = cc_assert_script_compatible("Unknown componentinterface");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","Unknown componentinterface",uVar3);
    }
  }
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[0x10] = 0;
  piVar4[0x11] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0;
  piVar4[0x14] = 0;
  piVar4[0x15] = 0;
  piVar4[0x16] = 0;
  piVar4[0x17] = 0;
  piVar4[0x18] = 0;
  piVar4[0x19] = 0;
  piVar4[0x1a] = 0;
  piVar4[0x1b] = 0;
  piVar4[0x1c] = 0;
  piVar4[0x1d] = 0;
  piVar4[0x1e] = 0;
  piVar4[0x1f] = 0;
  piVar4[0x20] = 0;
  piVar4[0x21] = 0;
  piVar4[0x22] = 0;
  piVar4[0x23] = 0;
  piVar4[0x24] = 0;
  piVar4[0x25] = 0;
  piVar4[0x26] = 0;
  piVar4[0x27] = 0;
  piVar4[0x28] = 0;
  *(int **)((int)this + 0xc) = piVar4;
  ExceptionList = local_1c;
  return this;
}


void __fastcall FUN_004ae0c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) && ((iVar1 != 7 && (iVar1 != 9)))) &&
     ((iVar1 != 0xb && ((iVar1 != 8 && (iVar1 != 0xd)))))) {
    *(undefined1 *)(param_1 + 0x14) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}


undefined4 __fastcall FUN_004ae100(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x80);
}


undefined4 __fastcall FUN_004ae110(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x84);
}


void __fastcall FUN_004ae120(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 99) != '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
    if (*(char *)(param_1 + 0x62) == '\0') {
      if (0.0 < *(float *)(*(int *)(param_1 + 8) + 0xc0)) {
        uVar1 = FUN_00521a50(*(int *)(param_1 + 4));
        *(undefined1 *)(param_1 + 0x60) = uVar1;
      }
    }
    else if (0.0 < *(float *)(*(int *)(param_1 + 8) + 0xbc)) {
      uVar1 = FUN_00521a50(*(int *)(param_1 + 4));
      *(undefined1 *)(param_1 + 0x60) = uVar1;
      return;
    }
  }
  return;
}


void __fastcall FUN_004ae1b0(int param_1)

{
  if (*(char *)(param_1 + 99) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x62) != '\0') {
    FUN_00438020(*(int **)(param_1 + 0xc));
    return;
  }
  FUN_00438020(*(int **)(param_1 + 0xc));
  return;
}


void __fastcall FUN_004ae230(int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 99) != '\0') {
    local_10 = 1.0;
    if (*(int *)(*(int *)(param_1 + 8) + 4) == 0xd) {
      local_10 = (float)*(double *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x28);
      FUN_00520260(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x24));
      local_10 = *(float *)(*(int *)(param_1 + 8) + 0x104) * local_10;
    }
    iVar1 = FUN_00437c60(*(int **)(param_1 + 0xc));
    if (0.0 < *(float *)(*(int *)(param_1 + 8) + 200) * ((float)iVar1 / 100.0) * local_10) {
      if (*(int *)(*(int *)(param_1 + 8) + 4) == 0xd) {
        FUN_00520260(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x24));
      }
      FUN_00437c60(*(int **)(param_1 + 0xc));
      FUN_00521950(*(int *)(param_1 + 4));
    }
  }
  return;
}


uint __fastcall FUN_004ae380(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00437440(*(int **)(param_1 + 0xc));
  if (*(int *)(*(int *)(param_1 + 8) + 0xe0) <= iVar1) {
    uVar2 = FUN_00437c60(*(int **)(param_1 + 0xc));
    iVar1 = 0;
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


bool __fastcall FUN_004ae3b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00437440(*(int **)(param_1 + 0xc));
  return iVar1 < *(int *)(*(int *)(param_1 + 8) + 0xdc);
}


int __fastcall FUN_004ae3d0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x54);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x90);
  iVar3 = 0x14;
  do {
    pfVar1 = (float *)puVar2[-0x14];
    if (pfVar1 != (float *)0x0) {
      fVar6 = (float)*(int *)((int)pfVar1[1] + 0x20) * (*pfVar1 / 100.0);
      fVar5 = 1.0;
      if (1.0 <= fVar6) {
        fVar5 = fVar6;
      }
      iVar4 = iVar4 + (int)fVar5;
    }
    pfVar1 = (float *)*puVar2;
    if (pfVar1 != (float *)0x0) {
      fVar6 = (float)*(int *)((int)pfVar1[1] + 0x20) * (*pfVar1 / 100.0);
      fVar5 = 1.0;
      if (1.0 <= fVar6) {
        fVar5 = fVar6;
      }
      iVar4 = iVar4 + (int)fVar5;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar4;
}


void __fastcall FUN_004ae460(int param_1)

{
  FUN_00437c60(*(int **)(param_1 + 0xc));
  return;
}


int __fastcall FUN_004ae4a0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined3 extraout_var;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 4) != 8) {
    return 0;
  }
  cVar2 = FUN_004ae510(param_1);
  return (int)(*(float *)(iVar1 + 0x104) - (float)CONCAT31(extraout_var,cVar2));
}


void __fastcall FUN_004ae4d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x3c);
  iVar2 = 8;
  do {
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00494e20(puVar1);
      FUN_005adb3f(puVar1);
    }
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


char __fastcall FUN_004ae510(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x3c) != 0;
  cVar2 = bVar3 + '\x01';
  if (*(int *)(param_1 + 0x40) == 0) {
    cVar2 = bVar3;
  }
  cVar1 = cVar2 + '\x01';
  if (*(int *)(param_1 + 0x44) == 0) {
    cVar1 = cVar2;
  }
  cVar2 = cVar1 + '\x01';
  if (*(int *)(param_1 + 0x48) == 0) {
    cVar2 = cVar1;
  }
  cVar1 = cVar2 + '\x01';
  if (*(int *)(param_1 + 0x4c) == 0) {
    cVar1 = cVar2;
  }
  cVar2 = cVar1 + '\x01';
  if (*(int *)(param_1 + 0x50) == 0) {
    cVar2 = cVar1;
  }
  cVar1 = cVar2 + '\x01';
  if (*(int *)(param_1 + 0x54) == 0) {
    cVar1 = cVar2;
  }
  cVar2 = cVar1 + '\x01';
  if (*(int *)(param_1 + 0x58) == 0) {
    cVar2 = cVar1;
  }
  return cVar2;
}


bool __thiscall FUN_004ae570(void *this,uint param_1)

{
  if (param_1 < 8) {
    return *(int *)((int)this + param_1 * 4 + 0x3c) != 0;
  }
  return false;
}


void __fastcall FUN_004ae590(int *param_1)

{
  char cVar1;
  
  if (*(char *)((int)param_1 + 99) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x14))();
    if (cVar1 == '\0') {
      FUN_00437c60((int *)param_1[3]);
      return;
    }
  }
  return;
}


void __fastcall FUN_004ae5e0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 8) + 4) == 0xd) {
    FUN_00520260(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x24));
  }
  FUN_00437c60(*(int **)(param_1 + 0xc));
  return;
}


void __fastcall FUN_004ae680(int param_1)

{
  FUN_00437c60(*(int **)(param_1 + 0xc));
  return;
}


void __fastcall FUN_004ae6c0(int param_1)

{
  FUN_00437c60(*(int **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0xc));
  return;
}


void __thiscall FUN_004ae700(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  FUN_00437950(*(void **)((int)this + 0xc),param_1,param_2);
  if (*(char *)((int)this + 99) != '\0') {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    if (cVar1 == '\0') {
      iVar2 = FUN_00437c60(*(int **)((int)this + 0xc));
      fVar3 = *(float *)(*(int *)((int)this + 8) + 0xc4) * ((float)iVar2 / 100.0);
      goto LAB_004ae753;
    }
  }
  fVar3 = 0.0;
LAB_004ae753:
  if (fVar3 < *(float *)((int)this + 0x5c)) {
    *(float *)((int)this + 0x5c) = fVar3;
  }
  return;
}


undefined4 __thiscall FUN_004ae770(void *this,char param_1)

{
  uint in_EAX;
  int iVar1;
  
  if ((param_1 != '\0') || (*(char *)((int)this + 99) != '\0')) {
    in_EAX = (**(code **)(*(int *)this + 0x14))();
    if ((char)in_EAX == '\0') {
      iVar1 = FUN_00437c60(*(int **)((int)this + 0xc));
      in_EAX = 0;
      if (iVar1 != 0) {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


void __thiscall FUN_004ae7b0(void *this,int param_1)

{
  void *this_00;
  undefined4 *this_01;
  uint in_stack_ffffffc4;
  byte *pbVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc2e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(*(undefined4 *)(*(int *)((int)this + 8) + 4)) {
  case 3:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28) = 0;
    break;
  case 4:
    **(undefined4 **)(param_1 + 0x40) = 0;
    break;
  case 5:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = 0;
    break;
  case 7:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      FUN_00517400(param_1);
    }
    break;
  case 8:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) = 0;
    break;
  case 9:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      FUN_00517400(param_1);
    }
    break;
  case 10:
    if (-1.0 < *(float *)(param_1 + 0x58)) {
      FUN_00591070(&DAT_005cdc70,"Jump drive lost power - discharging.");
      FUN_00512d80(param_1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14) = 0;
    break;
  case 0xb:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      FUN_00517400(param_1);
    }
    break;
  case 0xc:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc) = 0;
    break;
  case 0xe:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c) = 0;
    break;
  case 0xf:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = 0;
    break;
  case 0x10:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x30) = 0;
    break;
  case 0x11:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c) = 0;
  }
  if ((*(int *)(*(int *)((int)this + 8) + 4) == 10) && (*(float *)(param_1 + 0x58) != -1.0)) {
    FUN_004e1c80(param_1);
  }
  iVar2 = *(int *)((int)this + 0x7c);
  *(undefined1 *)((int)this + 99) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (iVar2 != -1) {
    this_00 = (void *)FUN_00402f60();
    FUN_00558070(this_00,iVar2);
  }
  if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)
      ) && (*(int *)(*(int *)((int)this + 8) + 4) == 7)) {
    pbVar1 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,"helm_connected",0xe);
    local_8 = 0;
    this_01 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(this_01,pbVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004ae9f0(void *this,int param_1)

{
  void **ppvVar1;
  void *pvVar2;
  undefined4 *puVar3;
  byte *in_stack_ffffffcc;
  uint3 uVar5;
  byte *pbVar4;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = DAT_0065b5cc;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc340;
  local_10 = ExceptionList;
  uVar5 = (uint3)((uint)in_stack_ffffffcc >> 8);
  ppvVar1 = &local_10;
  switch(*(undefined4 *)(*(int *)((int)this + 8) + 4)) {
  case 3:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x28);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x28) = this;
    ppvVar1 = ExceptionList;
    break;
  case 4:
    pvVar2 = (void *)**(int **)(param_1 + 0x40);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    **(int **)(param_1 + 0x40) = (int)this;
    ppvVar1 = ExceptionList;
    break;
  case 5:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 8);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 8) = this;
    ppvVar1 = ExceptionList;
    break;
  case 7:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x24);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x24) = this;
    ppvVar1 = ExceptionList;
    if ((*(int *)(iVar6 + 0xcc) == 0) || (*(int *)(*(int *)(iVar6 + 0xcc) + 0x70) != 1)) break;
    in_stack_ffffffcc = (byte *)((uint)uVar5 << 8);
    FUN_00402690(&stack0xffffffcc,"helm_connected",0xe);
    local_8 = 1;
    goto LAB_004aecd0;
  case 8:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x20);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x20) = this;
    ppvVar1 = ExceptionList;
    if (*(char *)(param_1 + 0x234) == '\0') break;
    in_stack_ffffffcc = (byte *)((uint)uVar5 << 8);
    FUN_00402690(&stack0xffffffcc,"has_weapon_launcher",0x13);
    local_8 = 2;
    goto LAB_004aecd0;
  case 9:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x18);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x18) = this;
    ppvVar1 = ExceptionList;
    break;
  case 10:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x14);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x14) = this;
    ppvVar1 = ExceptionList;
    if (*(char *)(param_1 + 0x234) == '\0') break;
    in_stack_ffffffcc = (byte *)((uint)uVar5 << 8);
    FUN_00402690(&stack0xffffffcc,"has_jump_drive",0xe);
    local_8 = 0;
    goto LAB_004aecd0;
  case 0xb:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x10);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x10) = this;
    ppvVar1 = ExceptionList;
    break;
  case 0xc:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0xc);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0xc) = this;
    ppvVar1 = ExceptionList;
    break;
  case 0xe:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x1c);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x1c) = this;
    ppvVar1 = ExceptionList;
    break;
  case 0xf:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 4);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 4) = this;
    ppvVar1 = ExceptionList;
    break;
  case 0x10:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x30);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x30) = this;
    ppvVar1 = ExceptionList;
    if (*(char *)(param_1 + 0x234) == '\0') break;
    in_stack_ffffffcc = (byte *)((uint)uVar5 << 8);
    FUN_00402690(&stack0xffffffcc,"has_hacking_module",0x12);
    local_8 = 3;
    goto LAB_004aecd0;
  case 0x11:
    pvVar2 = *(void **)(*(int *)(param_1 + 0x40) + 0x2c);
    if ((pvVar2 != (void *)0x0) && (pvVar2 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(void **)(*(int *)(param_1 + 0x40) + 0x2c) = this;
    ppvVar1 = ExceptionList;
    if (*(char *)(param_1 + 0x234) == '\0') break;
    in_stack_ffffffcc = (byte *)((uint)uVar5 << 8);
    FUN_00402690(&stack0xffffffcc,"has_grappler",0xc);
    local_8 = 4;
LAB_004aecd0:
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffcc);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = ppvVar1;
  if (*(char *)((int)this + 99) == '\0') {
    *(undefined1 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  iVar6 = *(int *)((int)this + 0x7c);
  *(undefined1 *)((int)this + 99) = 1;
  if (iVar6 != -1) {
    pvVar2 = (void *)FUN_00402f60();
    FUN_005580e0(pvVar2,iVar6);
  }
  if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)
      ) && (*(int *)(*(int *)((int)this + 8) + 4) == 7)) {
    pbVar4 = (byte *)((uint)in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"helm_connected",0xe);
    local_8 = 5;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,pbVar4);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004aedc0(void *this,undefined1 *param_1)

{
  undefined8 uVar1;
  bool *pbVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  FMOD_RESULT FVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  char *pcVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  char ****ppppcVar18;
  char ****ppppcVar19;
  void *this_00;
  undefined4 extraout_ECX_01;
  byte *pbVar20;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar21;
  undefined1 *puVar22;
  float in_XMM1_Da;
  float fVar23;
  float fVar24;
  void *in_stack_ffffff44;
  int aiStack_a4 [2];
  undefined4 uStack_9c;
  int in_stack_ffffff74;
  uint3 uVar26;
  byte *pbVar25;
  byte *in_stack_ffffff78;
  char *pcVar27;
  undefined4 *local_5c;
  int local_58;
  float local_50;
  undefined1 *local_4c;
  float local_48;
  int *local_44;
  int *local_40;
  char local_39;
  char ***local_38 [4];
  int local_28;
  uint local_24;
  undefined8 local_20;
  undefined1 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc40b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_1;
  local_50 = in_XMM1_Da;
  local_44 = this;
  if (*(float *)((int)this + 0x80) <= 0.0) {
    iVar9 = *(int *)((int)this + 0x84);
    iVar16 = FUN_00402f60();
    for (piVar17 = *(int **)(iVar16 + 0x2c); piVar17 != *(int **)(iVar16 + 0x30);
        piVar17 = piVar17 + 1) {
      if (*(int *)(*piVar17 + 0x24) == iVar9) {
        pbVar2 = *(bool **)(*piVar17 + 0x30);
        if (((pbVar2 != (bool *)0x0) &&
            (FVar8 = FMOD::ChannelControl::getPaused(pbVar2), FVar8 == 0)) && (local_39 != '\0'))
        goto LAB_004aeedd;
        break;
      }
    }
    iVar9 = *(int *)((int)this + 0x84);
    pvVar13 = (void *)FUN_00402f60();
    FUN_00558070(pvVar13,iVar9);
  }
  else {
    fVar24 = *(float *)((int)this + 0x80) - in_XMM1_Da;
    *(float *)((int)this + 0x80) = fVar24;
    if (0.0 < fVar24) {
      iVar9 = *(int *)((int)this + 0x84);
      iVar16 = FUN_00402f60();
      for (piVar17 = *(int **)(iVar16 + 0x2c); piVar17 != *(int **)(iVar16 + 0x30);
          piVar17 = piVar17 + 1) {
        if (*(int *)(*piVar17 + 0x24) == iVar9) {
          pbVar2 = *(bool **)(*piVar17 + 0x30);
          if (((pbVar2 != (bool *)0x0) &&
              (FVar8 = FMOD::ChannelControl::getPaused(pbVar2), FVar8 == 0)) && (local_39 != '\0'))
          {
            iVar9 = *(int *)((int)this + 0x84);
            pvVar13 = (void *)FUN_00402f60();
            FUN_005580e0(pvVar13,iVar9);
          }
          break;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
LAB_004aeedd:
  if ((*(char *)((int)this + 99) == '\0') ||
     (cVar5 = (**(code **)(*(int *)this + 0x14))(), cVar5 != '\0')) goto LAB_004b0213;
  if (*(char *)((int)this + 0x2c) == '\0') {
    iVar9 = *(int *)((int)this + 8);
    if (*(int *)(iVar9 + 0x8c) != 0) {
      fVar23 = local_50 + *(float *)((int)this + 0x24);
      *(float *)((int)this + 0x24) = fVar23;
      fVar24 = (float)*(int *)(iVar9 + 0x8c);
      *(int *)((int)this + 0x28) = (int)((fVar23 / fVar24) * 100.0);
      fVar23 = (float)*(int *)(iVar9 + 0x8c);
      if (*(int *)(iVar9 + 4) == 3) {
        FUN_004ae460((int)this);
        fVar23 = fVar24 * (float)*(int *)(*(int *)((int)this + 8) + 0x8c);
      }
      else if (*(int *)(iVar9 + 4) == 7) {
        FUN_004ae460((int)this);
        fVar23 = (float)*(int *)(*(int *)((int)this + 8) + 0x8c) * fVar24 * 0.5;
      }
      if (*(float *)((int)this + 0x24) < fVar23) goto LAB_004b0213;
      *(undefined4 *)((int)this + 0x24) = 0xbf800000;
      *(undefined4 *)((int)this + 0x28) = 100;
    }
    *(undefined1 *)((int)this + 0x2c) = 1;
  }
  if ((*(char *)((int)this + 99) == '\0') ||
     (cVar5 = (**(code **)(*(int *)this + 0x14))(), cVar5 != '\0')) {
    fVar24 = 0.0;
  }
  else {
    iVar9 = FUN_00437c60(*(int **)((int)this + 0xc));
    fVar24 = *(float *)(*(int *)((int)this + 8) + 0xc4) * ((float)iVar9 / 100.0);
  }
  if (fVar24 < *(float *)((int)this + 0x5c)) {
    *(float *)((int)this + 0x5c) = fVar24;
  }
  (**(code **)(*(int *)this + 0xc))();
  iVar9 = *(int *)((int)this + 8);
  if ((0.0 < *(float *)(iVar9 + 0xc0)) || (0.0 < *(float *)(iVar9 + 0xbc))) {
    (**(code **)(*(int *)this + 8))();
    iVar9 = *(int *)((int)this + 8);
  }
  uVar26 = (uint3)((uint)in_stack_ffffff74 >> 8);
  if (*(char *)((int)this + 0x62) == '\0') {
    if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) && (*(int *)(iVar9 + 4) == 9)) &&
       (*(char *)((int)this + 0x70) != '\0')) {
      local_40 = (int *)&stack0xffffff74;
      pbVar25 = (byte *)((uint)uVar26 << 8);
      FUN_00402690(&stack0xffffff74,"is_rotating",0xb);
      local_8 = 2;
      puVar10 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar10,pbVar25);
    }
    if (*(char *)((int)this + 0x70) == '\x01') {
      *(undefined1 *)((int)this + 0x70) = 0;
    }
  }
  else {
    if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
        (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
       ((*(int *)(iVar9 + 4) == 9 && (*(char *)((int)this + 0x70) == '\0')))) {
      local_40 = (int *)&stack0xffffff74;
      pbVar25 = (byte *)((uint)uVar26 << 8);
      FUN_00402690(&stack0xffffff74,"is_rotating",0xb);
      local_8 = 0;
      puVar10 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar10,pbVar25);
      pbVar25 = (byte *)((uint)pbVar25 & 0xffffff00);
      local_40 = (int *)&stack0xffffff74;
      FUN_00402690(&stack0xffffff74,"has_rotated",0xb);
      local_8 = 1;
      puVar10 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar10,pbVar25);
      iVar9 = *(int *)((int)this + 8);
    }
    if (*(char *)((int)this + 0x60) == '\0') {
      FUN_00591070("DETAIL","%s: WARNING: not enough power to run %s");
      iVar9 = *(int *)(*(int *)((int)this + 8) + 4);
      if (iVar9 == 0xb) {
        *(undefined1 *)((int)this + 0x62) = 0;
        if (*(int *)(param_1 + 0xd4) == 0) {
          pcVar14 = "`^Low Power: Emergency shut-down of MPD thruster";
          goto LAB_004af463;
        }
      }
      else if (iVar9 == 9) {
        *(undefined1 *)((int)this + 0x62) = 0;
        if (*(int *)(param_1 + 0xd4) == 0) {
          pcVar14 = "`^Low Power: Emergency shut-down of RCS module";
          goto LAB_004af463;
        }
      }
      else if (iVar9 == 8) {
        iVar9 = *(int *)(*(int *)((int)this + 4) + 0x20);
        iVar16 = *(int *)(iVar9 + 0x30);
        if ((iVar16 != -1) && (iVar9 = *(int *)(iVar9 + 0x3c + iVar16 * 4), iVar9 != 0)) {
          if (iVar16 == -1) {
            iVar9 = 0;
          }
          cVar5 = FUN_004ade90(iVar9);
          if (cVar5 != '\0') {
            FUN_00527550(*(int **)(param_1 + 0x224),2,"`$Weapon spin-up failed due to lack of power"
                        );
            iVar9 = *(int *)(*(int *)((int)this + 4) + 0x20);
            iVar16 = *(int *)(iVar9 + 0x30);
            if (iVar16 == -1) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(iVar9 + 0x3c + iVar16 * 4);
            }
            *(undefined4 *)(iVar9 + 0x3c0) = 0xbf800000;
            *(undefined1 *)(iVar9 + 0x3bc) = 0;
          }
        }
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x62) = 0;
      }
      else {
        if (iVar9 == 0xf) {
          *(undefined1 *)((int)this + 0x62) = 0;
          pcVar14 = "`^Low Power: Emergency disable of LADAR unit";
        }
        else {
          if ((iVar9 != 0xe) || (*(char *)((int)this + 0x62) == '\0')) goto LAB_004af473;
          *(undefined1 *)((int)this + 0x62) = 0;
          *(undefined4 *)(param_1 + 0x160) = 0xbf800000;
          pcVar14 = "`^Low Power: Comms sync cancelled";
        }
LAB_004af463:
        FUN_00527550(*(int **)(param_1 + 0x224),3,pcVar14);
      }
    }
    else {
      iVar9 = *(int *)(iVar9 + 4);
      if (iVar9 == 0xb) {
        FUN_00437c60(*(int **)((int)this + 0xc));
        FUN_00518940(param_1);
      }
      else if (iVar9 == 9) {
        if (*(int *)((int)this + 0x34) == 1) {
          iVar9 = FUN_00437c60(*(int **)((int)this + 0xc));
          fVar24 = *(float *)(*(int *)((int)this + 8) + 0x104) * ((float)iVar9 / 100.0) * local_50 +
                   *(float *)(param_1 + 0x120);
LAB_004af1f4:
          *(float *)(param_1 + 0x120) = fVar24;
        }
        else if (*(int *)((int)this + 0x34) == 2) {
          iVar9 = FUN_00437c60(*(int **)((int)this + 0xc));
          fVar24 = *(float *)(param_1 + 0x120) -
                   *(float *)(*(int *)((int)this + 8) + 0x104) * ((float)iVar9 / 100.0) * local_50;
          goto LAB_004af1f4;
        }
        fVar24 = *(float *)(param_1 + 0x120);
        if (fVar24 < 360.0) {
          if (fVar24 < 0.0) {
            *(float *)(param_1 + 0x120) = fVar24 + 360.0;
          }
        }
        else {
          *(float *)(param_1 + 0x120) = fVar24 - 360.0;
        }
      }
      else if (iVar9 == 8) {
        iVar9 = *(int *)(*(int *)((int)this + 4) + 0x20);
        iVar16 = *(int *)(iVar9 + 0x30);
        if ((iVar16 != -1) && (iVar12 = *(int *)(iVar9 + 0x3c + iVar16 * 4), iVar12 != 0)) {
          local_40 = (int *)0x0;
          iVar11 = iVar12;
          if (iVar16 == -1) {
            iVar11 = 0;
          }
          if (*(char *)(iVar11 + 0x3bc) == '\0') {
            if ((iVar16 != -1) && (iVar12 != 0)) {
              if (iVar16 == -1) {
                iVar12 = 0;
              }
              cVar5 = FUN_004ade90(iVar12);
              if (cVar5 != '\0') {
                if ((extraout_EDX != -1) &&
                   (iVar16 = *(int *)(iVar9 + 0x3c + extraout_EDX * 4), iVar16 != 0)) {
                  if (extraout_EDX == -1) {
                    iVar16 = 0;
                  }
                  cVar5 = FUN_004ade90(iVar16);
                  if (cVar5 != '\0') {
                    if (extraout_EDX_00 == -1) {
                      piVar17 = (int *)0x0;
                    }
                    else {
                      piVar17 = *(int **)(iVar9 + 0x3c + extraout_EDX_00 * 4);
                    }
                    (**(code **)(*piVar17 + 0x14))();
                  }
                }
                goto LAB_004af473;
              }
            }
            iVar11 = FUN_00437c60(*(int **)(iVar9 + 0xc));
            iVar16 = *(int *)(*(int *)((int)this + 4) + 0x20);
            iVar12 = *(int *)(iVar16 + 0x30);
            if (iVar12 == -1) {
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(iVar16 + 0x3c + iVar12 * 4);
            }
            *(float *)(iVar16 + 0x3c0) =
                 (float)(int)(((float)iVar11 / 100.0) * 0.5 *
                             *(float *)(*(int *)(*(int *)(*(int *)(iVar9 + 4) + 0x20) + 8) + 0x108))
            ;
            goto LAB_004af473;
          }
        }
        *(undefined1 *)((int)this + 0x62) = 0;
      }
    }
LAB_004af473:
    if (*(char *)((int)this + 0x70) == '\0') {
      *(undefined1 *)((int)this + 0x70) = 1;
    }
  }
  if ((*(int *)(*(int *)((int)this + 8) + 4) == 8) &&
     (cVar5 = (**(code **)(*(int *)this + 0x10))(), cVar5 != '\0')) {
    piVar17 = (int *)((int)this + 0x3c);
    iVar9 = 8;
    do {
      iVar16 = *piVar17;
      if ((((iVar16 != 0) && (*(char *)(iVar16 + 0x3fc) != '\0')) &&
          (iVar12 = *(int *)(iVar16 + 0x38c), iVar12 != 0)) && (*(int *)(iVar12 + 0x30) == 1)) {
        iVar12 = FUN_0050c720(*(void **)(iVar16 + 0x39c),*(int *)(iVar12 + 0x248));
        if (iVar12 == 0) {
          *(undefined4 *)(iVar16 + 0x3b8) = 0;
        }
        else {
          *(int *)(iVar16 + 0x3b8) = (int)*(float *)(iVar12 + 0x128);
        }
      }
      piVar17 = piVar17 + 1;
      iVar9 = iVar9 + -1;
      this = local_44;
      param_1 = local_4c;
    } while (iVar9 != 0);
  }
  if (((*(int *)(*(int *)((int)this + 8) + 4) == 0xc) &&
      (cVar5 = (**(code **)(*(int *)this + 0x10))(), cVar5 != '\0')) &&
     ((*(char *)((int)this + 0x62) != '\0' && (*(float *)((int)this + 0x6c) == -1.0)))) {
    local_40 = (int *)&stack0xffffff88;
    local_8 = 3;
    FUN_00437c60(*(int **)((int)this + 0xc));
    local_8 = 0xffffffff;
    in_stack_ffffff78 = (byte *)0x4af607;
    local_40 = (int *)FUN_004a6be0(*(int *)(param_1 + 0x20),(int)param_1,'\x01');
    if (local_40 != (int *)0x0) {
      local_18 = (undefined1 *)(float)*(double *)(param_1 + 0x30);
      local_20 = CONCAT44((float)*(double *)(param_1 + 0x28),(undefined4)local_20);
      local_48 = (float)*(double *)(local_40 + 10);
      local_44 = (int *)(float)*(double *)(local_40 + 0xc);
      local_8 = 5;
      FUN_00591010((Vec2 *)&local_48,(Vec2 *)((int)&local_20 + 4));
      local_8 = 0xffffffff;
      FUN_00591070(&DAT_005cdc70,"%s: firing point defence laser at %s, at range %f");
      local_44 = (int *)FUN_00591370((int *)(*(int *)((int)this + 8) + 0xe8));
      in_stack_ffffff78 = (byte *)0x4af6e6;
      FUN_00591070("DETAIL","%s: %d/%d");
      if (local_44 == (int *)0x1) {
        FUN_00591070(&DAT_005cdc70,"%s: hit PDL target. Delivering heat damage.");
        piVar17 = local_40;
        in_stack_ffffff78 = (byte *)(float)*(double *)(local_40 + 0xc);
        FUN_00592f80((float)*(double *)(local_40 + 10),in_stack_ffffff78,
                     (float)*(double *)(param_1 + 0x28));
        (**(code **)(*piVar17 + 0xc))();
        if ((*(char *)(*(int *)(*(int *)((int)this + 4) + 0x48) + 0x234) != '\0') &&
           (cVar5 = (**(code **)(*piVar17 + 0x20))(), cVar5 != '\0')) {
          local_40 = (int *)&stack0xffffff78;
          in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
          FUN_00402690(&stack0xffffff78,"pdl_kills",9);
          local_8 = 6;
          FUN_00412770();
          local_8 = 0xffffffff;
          FUN_0051e750(extraout_ECX,in_stack_ffffff78);
          local_40 = (int *)&stack0xffffff74;
          FUN_00402690(&stack0xffffff74,&PTR_005ce008,0);
          local_44 = aiStack_a4;
          local_8 = 7;
          aiStack_a4[0]._0_1_ = 0;
          FUN_00402690(aiStack_a4,"pdl_kills",9);
          local_8 = CONCAT31(local_8._1_3_,8);
          in_stack_ffffff44 = (void *)((uint)in_stack_ffffff44 & 0xffffff00);
          FUN_00402690(&stack0xffffff44,&DAT_0060d818,4);
          local_8 = 0xffffffff;
          FUN_00401a50(in_stack_ffffff44);
        }
      }
      else {
        FUN_00591070(&DAT_005cdc70,"%s: miss.");
      }
      local_18 = &stack0xffffff78;
      FUN_004024e0(&stack0xffffff78,(undefined4 *)(param_1 + 0x238));
      local_8 = 9;
      pvVar13 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar13,in_stack_ffffff78);
      iVar16 = -1;
      iVar9 = 0x21;
      puVar22 = param_1;
      pvVar13 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar13,(int)puVar22,iVar9,iVar16);
      iVar9 = FUN_00437c60(*(int **)((int)this + 0xc));
      *(float *)((int)this + 0x6c) =
           *(float *)(*(int *)((int)this + 8) + 0x108) * (((float)iVar9 / 100.0 - 1.0) * -1.0 + 1.0)
      ;
    }
  }
  if (*(int *)(*(int *)((int)this + 8) + 4) == 0x10) {
    cVar5 = (**(code **)(*(int *)this + 0x10))();
    if ((cVar5 == '\0') ||
       ((*(float *)((int)this + 0x6c) != 0.0 && (*(float *)((int)this + 0x6c) != -1.0)))) {
      cVar5 = (**(code **)(*(int *)this + 0x10))();
      if ((cVar5 == '\0') || (*(float *)((int)this + 0x6c) < 0.0)) {
        cVar5 = (**(code **)(*(int *)this + 0x10))();
        if ((cVar5 == '\0') && (0.0 < *(float *)((int)this + 0x6c))) {
          *(int *)((int)this + 0x6c) = -0x40000000;
          FUN_00591070("DETAIL","Hack failed due to hack unit failing");
        }
      }
      else {
        pvVar13 = *(void **)((int)this + 0x18);
        if (((pvVar13 == (void *)0x0) || (*(char *)((int)pvVar13 + 0x168) != '\0')) ||
           (uVar21 = FUN_0050c850(param_1,(int)pvVar13), (char)uVar21 == '\0')) {
          FUN_00527550(*(int **)(param_1 + 0x224),3,"Hack failed - target vanished");
          *(undefined1 *)((int)this + 0x62) = 0;
          *(int *)((int)this + 0x6c) = -0x40000000;
        }
        else if (((char)*(int *)((int)this + 0x60) == '\0') || (*(char *)((int)this + 0x62) == '\0')
                ) {
          FUN_00527550(*(int **)(param_1 + 0x224),3,"Hack failed due to power dropout");
          *(undefined1 *)((int)this + 0x62) = 0;
          *(int *)((int)this + 0x6c) = -0x40000000;
        }
        else {
          uVar21 = FUN_0050c850(pvVar13,(int)param_1);
          if ((char)uVar21 != '\0') {
            FUN_00591070("DETAIL","Hack failed - target detected us.");
            if (DAT_0065c2f8 == 0) {
              DAT_0065c2f8 = FUN_005adb0f(1);
            }
            FUN_00507940((int)param_1);
            *(undefined1 *)((int)this + 0x62) = 0;
            *(int *)((int)this + 0x6c) = -0x40000000;
          }
        }
      }
    }
    else {
      if (*(int *)((int)this + 0x18) != 0) {
        if (DAT_0065c2f8 == 0) {
          DAT_0065c2f8 = FUN_005adb0f(1);
        }
        FUN_00507ba0(param_1,*(void **)(DAT_0065b5cc + 300),*(int *)(DAT_0065b5cc + 0x124));
        if (*(char *)(*(int *)(*(int *)((int)this + 4) + 0x48) + 0x234) != '\0') {
          local_18 = &stack0xffffff78;
          in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
          FUN_00402690(&stack0xffffff78,"ships_hacked",0xc);
          local_8 = 10;
          FUN_00412770();
          local_8 = 0xffffffff;
          uVar21 = extraout_ECX_00;
          FUN_0051e750(extraout_ECX_00,in_stack_ffffff78);
          local_18 = &stack0xffffff74;
          pbVar25 = (byte *)(uVar21 & 0xffffff00);
          FUN_00402690(&stack0xffffff74,&PTR_005ce008,0);
          local_40 = aiStack_a4;
          local_8 = 0xb;
          aiStack_a4[0]._0_1_ = 0;
          FUN_00402690(aiStack_a4,"ships_hacked",0xc);
          local_8 = CONCAT31(local_8._1_3_,0xc);
          in_stack_ffffff44 = (void *)((uint)in_stack_ffffff44 & 0xffffff00);
          FUN_00402690(&stack0xffffff44,&DAT_0060d818,4);
          local_8 = 0xffffffff;
          FUN_00401a50(in_stack_ffffff44);
          FUN_004024e0(local_38,(undefined4 *)(*(int *)((int)this + 0x18) + 0x238));
          local_8 = 0xd;
          ppppcVar19 = local_38;
          if (0xf < local_24) {
            ppppcVar19 = (char ****)local_38[0];
          }
          ppppcVar18 = local_38;
          if (0xf < local_24) {
            ppppcVar18 = (char ****)local_38[0];
          }
          FUN_00413ec0(&local_18,tolower_exref,(char *)ppppcVar18,
                       (char *)((int)ppppcVar19 + local_28),(undefined1 *)ppppcVar19);
          local_18 = &stack0xffffff74;
          uStack_9c = 0x4afac8;
          FUN_00591e00(&stack0xffffff74,"hacked_%s");
          local_8._0_1_ = 0xe;
          puVar10 = FUN_00412df0();
          local_8 = CONCAT31(local_8._1_3_,0xd);
          FUN_004a0ee0(puVar10,pbVar25);
          local_8 = 0xffffffff;
          if (0xf < local_24) {
            ppppcVar19 = (char ****)local_38[0];
            if ((0xfff < local_24 + 1) &&
               (ppppcVar19 = (char ****)local_38[0][-1],
               (char *)0x1f < (char *)((int)local_38[0] + (-4 - (int)ppppcVar19)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppcVar19);
          }
          local_28 = 0;
          local_24 = 0xf;
          local_38[0] = (char ***)((uint)local_38[0] & 0xffffff00);
          param_1 = local_4c;
        }
      }
      *(undefined1 *)((int)this + 0x62) = 0;
      *(int *)((int)this + 0x6c) = -0x40000000;
    }
  }
  if ((((*(int *)(*(int *)((int)this + 8) + 4) == 0x11) &&
       (cVar5 = (**(code **)(*(int *)this + 0x10))(), cVar5 != '\0')) &&
      (*(float *)((int)this + 0x6c) == -1.0)) && (*(int *)((int)this + 0x34) != 0)) {
    FUN_00591070("DETAIL","Grappling arm done.");
    uVar21 = *(uint *)((int)this + 0x34);
    if ((int)uVar21 < 1) {
      if ((int)uVar21 < 0) {
        uVar21 = ~uVar21;
        local_44 = (int *)FUN_00511900((int)param_1);
        if (((0xd < (int)uVar21) || (local_44 == (int *)0xffffffff)) ||
           (bVar6 = FUN_00507140(*(void **)(param_1 + 0x1f8),(int)local_44), bVar6))
        goto LAB_004b00ef;
        FUN_005070d0(this_00,(int)local_44);
        puVar4 = *(undefined8 **)(*(int *)(*(int *)(param_1 + 0x174) + 0xe8) + 0xc + uVar21 * 4);
        uVar1 = *puVar4;
        puVar3 = *(undefined2 **)(*(int *)(param_1 + 0x1f8) + 0xc + (int)local_44 * 4);
        local_18 = *(undefined1 **)(puVar4 + 1);
        local_20._0_2_ = (undefined2)uVar1;
        *puVar3 = (undefined2)local_20;
        local_20._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
        *(undefined1 *)(puVar3 + 1) = local_20._2_1_;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc + (int)local_44 * 4) + 4) =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0xe8) + 0xc + uVar21 * 4) + 4);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc + (int)local_44 * 4) + 8) =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0xe8) + 0xc + uVar21 * 4) + 8);
        local_20 = uVar1;
        FUN_00507170(*(void **)(*(int *)(param_1 + 0x174) + 0xe8),uVar21);
        local_18 = &stack0xffffff78;
        puVar10 = (undefined4 *)((uint)in_stack_ffffff78 & 0xffffff00);
        FUN_00402690(&stack0xffffff78,"cargo_collected",0xf);
        local_8 = 0xf;
        FUN_00412770();
        local_8 = 0xffffffff;
        FUN_0051e750(extraout_ECX_01,puVar10);
        local_18 = &stack0xffffff74;
        FUN_00402690(&stack0xffffff74,&PTR_005ce008,0);
        local_4c = (undefined1 *)aiStack_a4;
        local_8 = 0x10;
        aiStack_a4[0]._0_1_ = 0;
        FUN_00402690(aiStack_a4,"cargo_collected",0xf);
        local_8 = CONCAT31(local_8._1_3_,0x11);
        in_stack_ffffff44 = (void *)((uint)in_stack_ffffff44 & 0xffffff00);
        FUN_00402690(&stack0xffffff44,&DAT_0060d818,4);
        local_8 = 0xffffffff;
        FUN_00401a50(in_stack_ffffff44);
        FUN_00591070("DETAIL","Transfered %dx goodID %d from moored object to ship");
        local_4c = *(undefined1 **)(param_1 + 0x174);
        pbVar25 = local_4c + 0x98;
        pbVar20 = pbVar25;
        if (0xf < *(uint *)(local_4c + 0xac)) {
          pbVar20 = *(byte **)pbVar25;
        }
        uVar21 = FUN_004031f0(pbVar20,*(uint *)(local_4c + 0xa8),(byte *)&PTR_005ce008,0);
        puVar22 = local_4c;
        if ((char)uVar21 == '\0') {
          FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar25);
          FUN_00592d70(&local_5c,':',puVar10);
          local_8 = 0x12;
          iVar9 = (local_58 - (int)local_5c) / 0x18;
          if (iVar9 == 2) {
            pcVar14 = (char *)(local_5c + 6);
            if (0xf < (uint)local_5c[0xb]) {
              pcVar14 = *(char **)pcVar14;
            }
            iVar9 = atoi(pcVar14);
            if (iVar9 != -1) {
LAB_004b0014:
              puVar15 = local_5c;
              bVar6 = FUN_00507140(*(void **)(*(int *)(param_1 + 0x174) + 0xe8),iVar9);
              if (!bVar6) {
                local_18 = &stack0xffffff78;
                FUN_004024e0(&stack0xffffff78,puVar15);
                local_8._0_1_ = 0x13;
                puVar15 = FUN_00412df0();
                local_8._0_1_ = 0x12;
                pbVar25 = (byte *)0x4b004c;
                bVar7 = FUN_004a1150(puVar15,puVar10);
                if (bVar7 == 0) {
                  FUN_00591070("DETAIL","Cargo with flag has been taken; setting flag \'%s\'.");
                  local_18 = &stack0xffffff74;
                  FUN_004024e0(&stack0xffffff74,local_5c);
                  local_8._0_1_ = 0x14;
                  puVar10 = FUN_00412df0();
                  local_8 = CONCAT31(local_8._1_3_,0x12);
                  FUN_004a0ee0(puVar10,pbVar25);
                }
              }
            }
          }
          else if (iVar9 == 1) {
            iVar9 = 0;
            goto LAB_004b0014;
          }
          local_8 = 0xffffffff;
          FUN_004025a0((int *)&local_5c);
          puVar22 = *(undefined1 **)(param_1 + 0x174);
        }
        iVar9 = *(int *)(puVar22 + 0xe8);
        if (iVar9 != 0) {
          iVar16 = 0;
          piVar17 = (int *)(iVar9 + 0xc);
          do {
            if ((-1 < iVar16) &&
               (((*(int *)(iVar9 + 8) < 1 || (iVar16 < *(int *)(iVar9 + 8))) && (*piVar17 != 0))))
            goto LAB_004b0101;
            iVar16 = iVar16 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar16 < 0xe);
          FUN_0040e600((int)puVar22);
          pcVar14 = "DETAIL";
          pcVar27 = "Removed a now-empty synthetic object after removing the last cargo from it.";
          goto LAB_004b00f9;
        }
      }
    }
    else {
      iVar9 = uVar21 - 1;
      local_44 = (int *)FUN_00521910(*(int *)(param_1 + 0x174));
      if (((iVar9 < 0xe) && (bVar6 = FUN_00507140(*(void **)(param_1 + 0x1f8),iVar9), bVar6)) &&
         (local_44 != (int *)0xffffffff)) {
        FUN_005070d0(*(void **)(*(int *)(param_1 + 0x174) + 0xe8),(int)local_44);
        puVar3 = *(undefined2 **)
                  (*(int *)(*(int *)(param_1 + 0x174) + 0xe8) + 0xc + (int)local_44 * 4);
        uVar1 = **(undefined8 **)(*(int *)(param_1 + 0x1f8) + 0xc + iVar9 * 4);
        local_20._0_2_ = (undefined2)uVar1;
        *puVar3 = (undefined2)local_20;
        local_20._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
        *(undefined1 *)(puVar3 + 1) = local_20._2_1_;
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0xe8) + 0xc + (int)local_44 * 4) + 4) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc + iVar9 * 4) + 4);
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0xe8) + 0xc + (int)local_44 * 4) + 8) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc + iVar9 * 4) + 8);
        local_20 = uVar1;
        FUN_00507170(*(void **)(param_1 + 0x1f8),iVar9);
        FUN_00591070("DETAIL","Transfered %dx goodID %d from ship to moored object");
      }
      else {
LAB_004b00ef:
        pcVar14 = "WARNING";
        pcVar27 = 
        "Cannot move the cargo pod from ship to the moored object, but could when arm was engaged.";
LAB_004b00f9:
        FUN_00591070(pcVar14,pcVar27);
      }
    }
LAB_004b0101:
    *(int *)((int)this + 0x6c) = -0x40000000;
    *(int *)((int)this + 0x34) = 0;
  }
  if ((char)*(int *)((int)this + 0x60) != '\0') {
    if ((*(int *)((int)this + 0x84) != -1) && (*(char *)((int)this + 0x62) != '\0')) {
      *(float *)((int)this + 0x80) =
           *(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) * 0.2;
    }
    if ((((char)*(int *)((int)this + 0x60) != '\0') && (0.0 < *(float *)((int)this + 0x6c))) &&
       (local_50 = *(float *)((int)this + 0x6c) - local_50, *(float *)((int)this + 0x6c) = local_50,
       local_50 < 0.0)) {
      *(int *)((int)this + 0x6c) = -0x40800000;
      FUN_00591070("DETAIL","%s: Internal timer hit.");
    }
  }
  if (*(char *)((int)this + 99) != '\0') {
    if (*(char *)((int)this + 0x62) == '\0') {
      local_4c = (undefined1 *)(float)*(int *)(*(int *)((int)this + 8) + 0xd4);
      FUN_00437ea0(*(int **)((int)this + 0xc));
    }
    else {
      local_40 = (int *)((float)*(int *)((int)this + 100) / 100.0);
      local_4c = (undefined1 *)(float)*(int *)(*(int *)((int)this + 8) + 0xcc);
      FUN_00437ea0(*(int **)((int)this + 0xc));
    }
  }
LAB_004b0213:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
