#include "../ois_server.exe.h"


void FUN_00460ca0(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  void *pvVar9;
  byte ****ppppbVar10;
  code *pcVar11;
  undefined4 *in_stack_ffffff04;
  undefined1 auStack_e4 [20];
  undefined4 uStack_d0;
  undefined1 auStack_c8 [12];
  undefined4 uStack_bc;
  int local_98;
  int local_94;
  undefined1 *local_90;
  byte ***local_8c [4];
  uint local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
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
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b5df1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  FUN_00402690(local_74,"faction",7);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
  FUN_004024e0(local_8c,(undefined4 *)pbVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_60) {
    pvVar9 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar9 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ppppbVar10 = local_8c;
  if (0xf < local_78) {
    ppppbVar10 = (byte ****)local_8c[0];
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  uVar3 = FUN_004031f0((byte *)ppppbVar10,local_7c,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 != '\0') {
    FUN_00402690(local_8c,&DAT_005e88e0,4);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,"class",5);
  local_8._0_1_ = 3;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e431c,4);
  local_90 = auStack_c8;
  local_8._0_1_ = 4;
  uStack_d0 = 0x460df6;
  FUN_004024e0(auStack_c8,local_8c);
  local_8._0_1_ = 5;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  FUN_004024e0(auStack_e4,(undefined4 *)pbVar2);
  local_8._0_1_ = 6;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_004024e0(&stack0xffffff04,(undefined4 *)pbVar2);
  local_8._0_1_ = 4;
  puVar4 = FUN_0040dec0(in_stack_ffffff04);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar9 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar9 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_8._0_1_ = 2;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8._0_1_ = 7;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  local_8._0_1_ = 2;
  *(double *)(puVar4 + 10) = (double)iVar5;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8._0_1_ = 8;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  local_8._0_1_ = 2;
  *(double *)(puVar4 + 0xc) = (double)iVar5;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea768,4);
  local_8 = CONCAT31(local_8._1_3_,9);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar4 + 0x8e) != pbVar2) {
    pbVar8 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar8 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x8e,pbVar8,*(uint *)(pbVar2 + 0x10));
  }
  local_8._0_1_ = 2;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"structure",9);
  FUN_00419820(&DAT_0065b530,&local_98,(byte *)local_2c);
  iVar1 = local_94;
  iVar5 = 0;
  local_90 = (undefined1 *)local_98;
  while (local_90 != (undefined1 *)iVar1) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_90)
    ;
  }
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
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8 = CONCAT31(local_8._1_3_,10);
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if ((byte *)(puVar4 + 0x1a) != pbVar2) {
      pbVar8 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar8 = *(byte **)pbVar2;
      }
      FUN_00402690(puVar4 + 0x1a,pbVar8,*(uint *)(pbVar2 + 0x10));
    }
    local_8._0_1_ = 2;
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8._0_1_ = 0xb;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"structure",9);
    local_8._0_1_ = 0xc;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,"structure",9);
    local_8._0_1_ = 0xd;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    pbVar8 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar8 = *(byte **)pbVar6;
    }
    iVar5 = *(int *)(pbVar6 + 0x10);
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    uStack_bc = 0x461278;
    FUN_00413ec0(&local_94,tolower_exref,(char *)pbVar6,(char *)(pbVar8 + iVar5),pbVar2);
    local_8._0_1_ = 0xc;
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
    local_8._0_1_ = 0xb;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_30) {
      pvVar9 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar9 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
    local_8._0_1_ = 2;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"usecost",7);
  FUN_00419820(&DAT_0065b530,&local_98,(byte *)local_2c);
  iVar5 = 0;
  local_90 = (undefined1 *)local_98;
  while (local_90 != (undefined1 *)local_94) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_90)
    ;
  }
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
  pcVar11 = atoi_exref;
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"usecost",7);
    local_8._0_1_ = 0xe;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar11 = atoi_exref;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    local_8._0_1_ = 2;
    puVar4[0xf8] = iVar5;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"destination",0xb);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  uVar7 = (*pcVar11)();
  puVar4[0xe3] = uVar7;
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
  if (0xf < local_78) {
    ppppbVar10 = (byte ****)local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (ppppbVar10 = (byte ****)local_8c[0][-1],
       (byte *)0x1f < (byte *)((int)local_8c[0] + (-4 - (int)ppppbVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00461560(void)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *puVar10;
  char *pcVar11;
  void *pvVar12;
  undefined4 uVar13;
  byte ****ppppbVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  undefined4 *in_stack_fffffeb4;
  uint auStack_134 [5];
  undefined4 uStack_120;
  char cVar18;
  undefined4 *in_stack_fffffee8;
  byte *in_stack_fffffeec;
  undefined4 *local_ec;
  int local_e8;
  undefined4 *local_e0;
  undefined4 *local_dc;
  uint *local_d8;
  uint *local_d4;
  uint *local_d0;
  uint *local_cc;
  undefined4 *local_c8;
  uint *local_c4;
  char local_bd;
  byte ***local_bc [4];
  uint local_ac;
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
  void *local_5c [3];
  int local_50;
  int local_4c;
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
  puStack_c = &LAB_005b5f94;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  FUN_00402690(local_74,"faction",7);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
  FUN_004024e0(local_bc,(undefined4 *)pbVar2);
  local_8._0_1_ = 2;
  if (0xf < local_60) {
    pvVar12 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar12 = *(void **)((int)local_74[0] + -4), uVar1 = (undefined1)local_8,
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar12)))) {
LAB_004615f9:
      local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  ppppbVar14 = local_bc;
  if (0xf < local_a8) {
    ppppbVar14 = (byte ****)local_bc[0];
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  uVar3 = FUN_004031f0((byte *)ppppbVar14,local_ac,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 != '\0') {
    FUN_00402690(local_bc,&DAT_005e88e0,4);
  }
  local_94 = 0;
  local_90 = 0xf;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
  FUN_00402690(local_a4,"class",5);
  local_8._0_1_ = 3;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  FUN_00402690(local_8c,&DAT_005e431c,4);
  local_d4 = (uint *)&stack0xfffffee8;
  local_8._0_1_ = 4;
  uStack_120 = 0x4616cd;
  FUN_004024e0(&stack0xfffffee8,local_bc);
  local_8._0_1_ = 5;
  local_c4 = auStack_134;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_a4);
  FUN_004024e0(auStack_134,(undefined4 *)pbVar2);
  local_8._0_1_ = 6;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
  FUN_004024e0(&stack0xfffffeb4,(undefined4 *)pbVar2);
  local_8._0_1_ = 4;
  puVar4 = FUN_0040dec0(in_stack_fffffeb4);
  local_8._0_1_ = 3;
  local_c8 = puVar4;
  if (0xf < local_78) {
    pvVar12 = local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (pvVar12 = *(void **)((int)local_8c[0] + -4),
       0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_8._0_1_ = 2;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  if (0xf < local_90) {
    pvVar12 = local_a4[0];
    if ((0xfff < local_90 + 1) &&
       (pvVar12 = *(void **)((int)local_a4[0] + -4),
       0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_94 = 0;
  local_90 = 0xf;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"locationx",9);
  local_8._0_1_ = 7;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  local_8._0_1_ = 2;
  *(double *)(puVar4 + 10) = (double)iVar5;
  if (0xf < local_30) {
    pvVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar12 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"locationy",9);
  local_8._0_1_ = 8;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  local_8._0_1_ = 2;
  *(double *)(puVar4 + 0xc) = (double)iVar5;
  if (0xf < local_30) {
    pvVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar12 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005ea768,4);
  local_8 = CONCAT31(local_8._1_3_,9);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if ((byte *)(puVar4 + 0x8e) != pbVar2) {
    pbVar9 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar9 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x8e,pbVar9,*(uint *)(pbVar2 + 0x10));
  }
  local_8._0_1_ = 2;
  if (0xf < local_30) {
    pvVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar12 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"description",0xb);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_bd = '^';
  uStack_120 = 0x4619bc;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  uStack_120 = 0x4619c4;
  FUN_004024e0(&stack0xfffffee8,(undefined4 *)pbVar2);
  piVar6 = (int *)FUN_00592a70((undefined1 *)local_2c,local_bd,in_stack_fffffee8);
  piVar16 = puVar4 + 0xe7;
  if (piVar16 != piVar6) {
    FUN_00401b20(piVar16);
    iVar5 = piVar6[1];
    iVar17 = piVar6[2];
    iVar7 = piVar6[3];
    *piVar16 = *piVar6;
    puVar4[0xe8] = iVar5;
    puVar4[0xe9] = iVar17;
    puVar4[0xea] = iVar7;
    *(undefined8 *)(puVar4 + 0xeb) = *(undefined8 *)(piVar6 + 4);
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pvVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar12 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"airlockroom",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_44);
  puVar8 = local_cc;
  iVar5 = 0;
  local_d8 = local_d0;
  while (local_d8 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_d8)
    ;
  }
  if (0xf < local_30) {
    pvVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar12 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar5 != 0) {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"airlockroom",0xb);
    local_8._0_1_ = 0xb;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    local_8._0_1_ = 2;
    local_c8[0xab] = iVar5;
    if (0xf < local_30) {
      pvVar12 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar12 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e9718,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_44);
  puVar8 = local_cc;
  iVar5 = 0;
  local_d8 = local_d0;
  while (local_d8 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_d8)
    ;
  }
  if (0xf < local_30) {
    pvVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar12 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar5 != 0) {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,&DAT_005e9718,4);
    local_8._0_1_ = 0xc;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar2);
    FUN_00592d70(&local_50,',',(undefined4 *)in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    if (0xf < local_30) {
      pvVar12 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar12 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_d8 = (uint *)0x0;
    local_34 = 0;
    local_30 = 0xf;
    iVar5 = local_4c - local_50 >> 0x1f;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if ((local_4c - local_50) / 0x18 + iVar5 != iVar5) {
      local_c4 = (uint *)0x0;
      do {
        FUN_004024e0(&stack0xfffffeec,(undefined4 *)(local_50 + (int)local_c4));
        FUN_00592d70(&local_ec,':',(undefined4 *)in_stack_fffffeec);
        local_8._0_1_ = 0xf;
        local_e0 = local_ec;
        puVar4 = local_ec;
        if (0xf < (uint)local_ec[5]) {
          local_e0 = (undefined4 *)*local_ec;
          puVar4 = (undefined4 *)*local_ec;
        }
        local_dc = local_ec;
        if (0xf < (uint)local_ec[5]) {
          local_dc = (undefined4 *)*local_ec;
        }
        iVar5 = 0;
        iVar17 = (local_ec[4] + (int)puVar4) - (int)local_dc;
        if ((undefined4 *)(local_ec[4] + (int)puVar4) < local_dc) {
          iVar17 = 0;
        }
        if (iVar17 != 0) {
          do {
            iVar7 = tolower((int)*(char *)(iVar5 + (int)local_dc));
            *(char *)(iVar5 + (int)local_e0) = (char)iVar7;
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar17);
        }
        iVar5 = (local_e8 - (int)local_ec) / 0x18;
        if (iVar5 == 1) {
          puVar8 = (uint *)FUN_005adb0f(0x1c);
          local_8._0_1_ = 0x10;
          FUN_004024e0(local_2c,local_ec);
          local_8._0_1_ = 0x11;
          FUN_004024e0(puVar8,local_2c);
          puVar8[6] = 100;
          local_8._0_1_ = 0x10;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 0x10;
          if (0xf < local_18) {
            pvVar12 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar12 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004615f9;
            FUN_005adb3f(pvVar12);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          puVar4 = (undefined4 *)local_c8[0xef];
          local_d4 = puVar8;
          if ((undefined4 *)local_c8[0xf0] == puVar4) {
LAB_00461f67:
            local_8._0_1_ = 0xf;
            local_18 = 0xf;
            local_1c = 0;
            FUN_00414080(local_c8 + 0xee,puVar4,&local_d4);
          }
          else {
            *puVar4 = puVar8;
            local_c8[0xef] = local_c8[0xef] + 4;
          }
        }
        else if (iVar5 == 2) {
          puVar8 = (uint *)FUN_005adb0f(0x1c);
          local_8._0_1_ = 0x12;
          pcVar11 = (char *)(local_ec + 6);
          if (0xf < (uint)local_ec[0xb]) {
            pcVar11 = *(char **)pcVar11;
          }
          local_cc = puVar8;
          uVar3 = atoi(pcVar11);
          FUN_004024e0(local_2c,local_ec);
          local_8._0_1_ = 0x13;
          FUN_004024e0(puVar8,local_2c);
          puVar8[6] = uVar3;
          local_8._0_1_ = 0x12;
          if (0xf < local_18) {
            pvVar12 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004615f9;
            FUN_005adb3f(pvVar12);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          puVar4 = (undefined4 *)local_c8[0xef];
          local_d4 = puVar8;
          if ((undefined4 *)local_c8[0xf0] == puVar4) goto LAB_00461f67;
          *puVar4 = puVar8;
          local_c8[0xef] = local_c8[0xef] + 4;
        }
        local_8 = CONCAT31(local_8._1_3_,0xe);
        FUN_004025a0((int *)&local_ec);
        local_d8 = (uint *)((int)local_d8 + 1);
        local_c4 = local_c4 + 6;
      } while (local_d8 < (uint *)((local_4c - local_50) / 0x18));
    }
    local_8._0_1_ = 2;
    FUN_004025a0(&local_50);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"extradensity",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"extradensity",0xc);
    local_8._0_1_ = 0x14;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    local_8._0_1_ = 2;
    local_c8[0xfa] = iVar5;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"existflag",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"existflag",9);
  if (iVar5 == 0) {
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    if (iVar5 != 0) {
      uVar3 = 0;
      local_d8 = (uint *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"existflag",9);
        local_8._0_1_ = 0x16;
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        iVar5 = *(int *)(pbVar2 + 4);
        iVar17 = *(int *)pbVar2;
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004615f9;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar5 - iVar17) / 0x18) <= uVar3) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"existflag",9);
        local_8 = CONCAT31(local_8._1_3_,0x17);
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        puVar4 = local_c8;
        piVar6 = (int *)local_c8[0x109];
        if ((int *)local_c8[0x10a] == piVar6) {
          FUN_00403840(local_c8 + 0x108,piVar6,(undefined4 *)(*(int *)pbVar2 + (int)local_d8));
        }
        else {
          FUN_004024e0(piVar6,(undefined4 *)(*(int *)pbVar2 + (int)local_d8));
          puVar4[0x109] = puVar4[0x109] + 0x18;
        }
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar1 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004615f9;
          FUN_005adb3f(pvVar12);
        }
        uVar3 = uVar3 + 1;
        local_d8 = local_d8 + 6;
      } while( true );
    }
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,0x15);
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    puVar4 = local_c8;
    piVar6 = (int *)local_c8[0x109];
    if ((int *)local_c8[0x10a] == piVar6) {
      FUN_00403840(local_c8 + 0x108,piVar6,(undefined4 *)pbVar2);
    }
    else {
      FUN_004024e0(piVar6,(undefined4 *)pbVar2);
      puVar4[0x109] = puVar4[0x109] + 0x18;
    }
    local_8._0_1_ = 2;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"structure",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if ((byte *)(local_c8 + 0x1a) != pbVar2) {
      pbVar9 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar9 = *(byte **)pbVar2;
      }
      FUN_00402690(local_c8 + 0x1a,pbVar9,*(uint *)(pbVar2 + 0x10));
    }
    local_8._0_1_ = 2;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8._0_1_ = 0x19;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,"structure",9);
    local_8._0_1_ = 0x1a;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"structure",9);
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    local_c4 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < local_c4[5]) {
      local_c4 = (uint *)*local_c4;
    }
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    pbVar2 = pbVar9;
    if (0xf < *(uint *)(pbVar9 + 0x14)) {
      pbVar2 = *(byte **)pbVar9;
    }
    local_d4 = (uint *)(pbVar2 + *(int *)(pbVar9 + 0x10));
    puVar8 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_44);
    if (0xf < puVar8[5]) {
      puVar8 = (uint *)*puVar8;
    }
    puVar10 = (uint *)((int)local_d4 - (int)puVar8);
    puVar15 = (uint *)0x0;
    if (local_d4 < puVar8) {
      puVar10 = (uint *)0x0;
    }
    local_d4 = puVar10;
    if (puVar10 != (uint *)0x0) {
      do {
        iVar5 = tolower((int)(char)*(byte *)((int)puVar8 + (int)puVar15));
        *(char *)((int)local_c4 + (int)puVar15) = (char)iVar5;
        puVar15 = (uint *)((int)puVar15 + 1);
      } while (puVar15 != local_d4);
    }
    local_8._0_1_ = 0x1a;
    if (0xf < local_30) {
      pvVar12 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar12 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_8._0_1_ = 0x19;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_48) {
      pvVar12 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar12 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_8._0_1_ = 2;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"noncommercial",0xd);
  local_8._0_1_ = 0x1c;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar2 = pbVar9;
  if (0xf < *(uint *)(pbVar9 + 0x14)) {
    pbVar2 = *(byte **)pbVar9;
  }
  uVar3 = FUN_004031f0(pbVar2,*(uint *)(pbVar9 + 0x10),&DAT_005e425c,4);
  local_8._0_1_ = 2;
  local_bd = (char)uVar3;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  puVar4 = local_c8;
  if (local_bd != '\0') {
    *(undefined1 *)((int)local_c8 + 0x389) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"colonyship",10);
  local_8._0_1_ = 0x1d;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar2 = pbVar9;
  if (0xf < *(uint *)(pbVar9 + 0x14)) {
    pbVar2 = *(byte **)pbVar9;
  }
  uVar3 = FUN_004031f0(pbVar2,*(uint *)(pbVar9 + 0x10),&DAT_005e425c,4);
  local_8._0_1_ = 2;
  local_bd = (char)uVar3;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  *(bool *)(puVar4 + 0xe2) = local_bd != '\0';
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"passengerprobability",0x14);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"passengerprobability",0x14);
    local_8._0_1_ = 0x1e;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    local_8._0_1_ = 2;
    local_c8[0xfe] = iVar5;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"passengercount",0xe);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"passengercount",0xe);
    local_8._0_1_ = 0x1f;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar2);
    piVar6 = FUN_005913f0(&local_50,in_stack_fffffeec);
    *(undefined8 *)(local_c8 + 0xff) = *(undefined8 *)piVar6;
    local_8._0_1_ = 2;
    local_c8[0x101] = piVar6[2];
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"passengercount",0xe);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  puVar4 = local_c8;
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"passengercount",0xe);
    local_8._0_1_ = 0x20;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar2);
    piVar6 = FUN_005913f0(&local_50,in_stack_fffffeec);
    puVar4 = local_c8;
    *(undefined8 *)(local_c8 + 0xff) = *(undefined8 *)piVar6;
    local_8._0_1_ = 2;
    local_c8[0x101] = piVar6[2];
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"noiff",5);
  local_8._0_1_ = 0x21;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar2 = pbVar9;
  if (0xf < *(uint *)(pbVar9 + 0x14)) {
    pbVar2 = *(byte **)pbVar9;
  }
  uVar3 = FUN_004031f0(pbVar2,*(uint *)(pbVar9 + 0x10),&DAT_005e425c,4);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_bd = (char)uVar3;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (local_bd != '\0') {
    *(undefined1 *)(puVar4[0x10] + 0x34) = 0;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emissionstrength",0x10);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  puVar4 = local_c8;
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"emissionstrength",0x10);
    local_8._0_1_ = 0x22;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    puVar4 = local_c8;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_c8[0xe5] = iVar5;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    puVar4[0x38] = (float)(int)puVar4[0xe5];
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"captain",7);
  local_8 = CONCAT31(local_8._1_3_,0x23);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar4 + 0x20) != pbVar2) {
    pbVar9 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar9 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x20,pbVar9,*(uint *)(pbVar2 + 0x10));
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"usecost",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_d0,(byte *)local_2c);
  puVar8 = local_cc;
  iVar5 = 0;
  local_c4 = local_d0;
  while (local_c4 != puVar8) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c4)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  puVar4 = local_c8;
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"usecost",7);
    local_8._0_1_ = 0x24;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    puVar4 = local_c8;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_c8[0xf8] = iVar5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockcost");
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockcost");
    local_8._0_1_ = 0x25;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar11 = (char *)FUN_00402490((undefined4 *)pbVar2);
    iVar5 = atoi(pcVar11);
    puVar4[0xf7] = iVar5;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"rego");
  local_cc = (uint *)&stack0xfffffeec;
  local_8._0_1_ = 0x26;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar2);
  cVar18 = '\x01';
  local_8._0_1_ = 0x27;
  pvVar12 = (void *)FUN_00412d40();
  local_8._0_1_ = 0x26;
  pbVar2 = FUN_00486270(pvVar12,cVar18,in_stack_fffffeec);
  puVar4[0xe6] = pbVar2;
  local_8._0_1_ = 2;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"noiff");
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"noiff");
    local_8._0_1_ = 0x28;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar11 = (char *)FUN_00402490((undefined4 *)pbVar2);
    iVar5 = atoi(pcVar11);
    puVar4[0xf9] = iVar5;
    local_8._0_1_ = 2;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"faction");
  local_cc = (uint *)&stack0xfffffeec;
  local_8._0_1_ = 0x29;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar2);
  local_8._0_1_ = 0x2a;
  pvVar12 = (void *)FUN_00412490();
  local_8 = CONCAT31(local_8._1_3_,0x29);
  uVar13 = FUN_004a0d10(pvVar12,in_stack_fffffeec);
  puVar4[0xe4] = uVar13;
  FUN_00401b20((int *)local_2c);
  FUN_00401b20((int *)local_bc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00463110(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  byte ****ppppbVar9;
  undefined4 *in_stack_ffffff04;
  undefined1 local_e4 [16];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 auStack_c8 [12];
  undefined4 uStack_bc;
  int local_98;
  int local_94;
  undefined1 *local_90;
  byte ***local_8c [4];
  uint local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
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
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b6041;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  FUN_00402690(local_74,"faction",7);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
  FUN_004024e0(local_8c,(undefined4 *)pbVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
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
  ppppbVar9 = local_8c;
  if (0xf < local_78) {
    ppppbVar9 = (byte ****)local_8c[0];
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  uVar3 = FUN_004031f0((byte *)ppppbVar9,local_7c,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 != '\0') {
    FUN_00402690(local_8c,&DAT_005e88e0,4);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e431c,4);
  local_90 = auStack_c8;
  local_8._0_1_ = 3;
  local_d0 = 0x463241;
  FUN_004024e0(auStack_c8,local_8c);
  local_8._0_1_ = 4;
  local_d4 = 0;
  local_d0 = 0xf;
  local_e4[0] = 0;
  FUN_00402690(local_e4,"jumpgate",8);
  local_8._0_1_ = 5;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_004024e0(&stack0xffffff04,(undefined4 *)pbVar2);
  local_8._0_1_ = 3;
  puVar4 = FUN_0040dec0(in_stack_ffffff04);
  local_8._0_1_ = 2;
  if (0xf < local_30) {
    pvVar8 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar8 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8._0_1_ = 6;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  local_8._0_1_ = 2;
  *(double *)(puVar4 + 10) = (double)iVar5;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8._0_1_ = 7;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  local_8._0_1_ = 2;
  *(double *)(puVar4 + 0xc) = (double)iVar5;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea768,4);
  local_8 = CONCAT31(local_8._1_3_,8);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar4 + 0x8e) != pbVar2) {
    pbVar7 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar7 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x8e,pbVar7,*(uint *)(pbVar2 + 0x10));
  }
  local_8._0_1_ = 2;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"usecost",7);
  FUN_00419820(&DAT_0065b530,&local_98,(byte *)local_2c);
  iVar1 = local_94;
  iVar5 = 0;
  local_90 = (undefined1 *)local_98;
  while (local_90 != (undefined1 *)iVar1) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_90)
    ;
  }
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
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"usecost",7);
    local_8._0_1_ = 9;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    local_8._0_1_ = 2;
    puVar4[0xf8] = iVar5;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"dockcost",8);
  FUN_00419820(&DAT_0065b530,&local_98,(byte *)local_2c);
  iVar1 = local_94;
  iVar5 = 0;
  local_90 = (undefined1 *)local_98;
  while (local_90 != (undefined1 *)iVar1) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_90)
    ;
  }
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
  if (iVar5 == 0) {
    puVar4[0xf7] = 0;
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"dockcost",8);
    local_8._0_1_ = 10;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar5 = atoi((char *)pbVar2);
    local_8._0_1_ = 2;
    puVar4[0xf7] = iVar5;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"structure",9);
  FUN_00419820(&DAT_0065b530,&local_98,(byte *)local_2c);
  iVar5 = 0;
  local_90 = (undefined1 *)local_98;
  while (local_90 != (undefined1 *)local_94) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_90)
    ;
  }
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
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if ((byte *)(puVar4 + 0x1a) != pbVar2) {
      pbVar7 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar7 = *(byte **)pbVar2;
      }
      FUN_00402690(puVar4 + 0x1a,pbVar7,*(uint *)(pbVar2 + 0x10));
    }
    local_8._0_1_ = 2;
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
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,"structure",9);
    local_8._0_1_ = 0xc;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8._0_1_ = 0xd;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"structure",9);
    local_8._0_1_ = 0xe;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar7 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar7 = *(byte **)pbVar6;
    }
    iVar5 = *(int *)(pbVar6 + 0x10);
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    uStack_bc = 0x4638e8;
    FUN_00413ec0(&local_94,tolower_exref,(char *)pbVar6,(char *)(pbVar7 + iVar5),pbVar2);
    local_8._0_1_ = 0xd;
    if (0xf < local_30) {
      pvVar8 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar8 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_8._0_1_ = 0xc;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
    local_8._0_1_ = 2;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_48) {
      pvVar8 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar8 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,"destination",0xb);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar5 = atoi((char *)pbVar2);
  puVar4[0xe3] = iVar5;
  if (0xf < local_48) {
    pvVar8 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar8 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  if (0xf < local_78) {
    ppppbVar9 = (byte ****)local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (ppppbVar9 = (byte ****)local_8c[0][-1],
       (byte *)0x1f < (byte *)((int)local_8c[0] + (-4 - (int)ppppbVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00463aa0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *in_stack_ffffff60;
  byte *local_74;
  byte *local_70;
  uint local_6c;
  float *local_68;
  char local_61;
  byte *local_60;
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
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b6122;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = 0;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"locationx",9);
  local_8 = 0;
  uVar6 = 0;
  local_6c = 1;
  FUN_00419820(&DAT_0065b530,(int *)&local_74,(byte *)local_44);
  pbVar3 = local_70;
  iVar7 = 0;
  local_60 = local_74;
  if (local_74 != local_70) {
    do {
      iVar7 = iVar7 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_60);
    } while (local_60 != pbVar3);
    if (iVar7 != 0) {
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      FUN_00402690(local_5c,"locationy",9);
      uVar6 = 3;
      FUN_00419820(&DAT_0065b530,(int *)&local_74,(byte *)local_5c);
      pbVar3 = local_70;
      iVar7 = 0;
      local_60 = local_74;
      if (local_74 != local_70) {
        do {
          iVar7 = iVar7 + 1;
          std::_Tree_unchecked_const_iterator<>::operator++
                    ((_Tree_unchecked_const_iterator<> *)&local_60);
        } while (local_60 != pbVar3);
        local_61 = '\x01';
        if (iVar7 != 0) goto LAB_00463b9a;
      }
    }
  }
  local_61 = '\0';
LAB_00463b9a:
  if (((uVar6 & 2) != 0) && (uVar6 = 0, 0xf < local_48)) {
    pvVar5 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar5 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) {
LAB_00463bc8:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  local_8 = 0xffffffff;
  uVar6 = uVar6 & 0xfffffffe;
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
  if (local_61 != '\0') {
    local_68 = (float *)FUN_005adb0f(0x14);
    local_8 = 1;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"locationy",9);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_6c = uVar6 | 4;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"locationx",9);
    local_8 = 3;
    local_6c = uVar6 | 0xc;
    local_60 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(local_60 + 0x14)) {
      local_60 = *(byte **)local_60;
    }
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    atof((char *)local_60);
    atof((char *)pbVar3);
    FUN_00591e00(&stack0xffffff60,"%f,%f");
    local_68 = FUN_00403e00(local_68,in_stack_ffffff60);
    local_8 = 5;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (*(undefined4 **)(param_1 + 0xc) == puVar1) {
      FUN_004141e0((void *)(param_1 + 4),puVar1,&local_68);
    }
    else {
      *puVar1 = local_68;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    }
    local_8 = 4;
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
    local_8 = 0xffffffff;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"location",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_74,(byte *)local_2c);
  pbVar3 = local_70;
  iVar7 = 0;
  local_60 = local_74;
  while (local_60 != pbVar3) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
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
  if (iVar7 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"location",8);
    iVar7 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar7 != 0) {
      uVar8 = 0;
      local_60 = (byte *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"location",8);
        local_8 = 9;
        pbVar3 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar3 + 4);
        iVar2 = *(int *)pbVar3;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar5 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar5 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_00463bc8;
          FUN_005adb3f(pvVar5);
        }
        if ((uint)((iVar7 - iVar2) / 0x18) <= uVar8) break;
        pbVar3 = (byte *)FUN_005adb0f(0x14);
        local_8 = 10;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_70 = pbVar3;
        FUN_00402690(local_5c,"location",8);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        local_6c = uVar6 | 0x20;
        pbVar4 = FUN_0047d5c0((byte *)local_5c);
        FUN_004024e0(&stack0xffffff60,(undefined4 *)(local_60 + *(int *)pbVar4));
        local_68 = FUN_00403e00(pbVar3,in_stack_ffffff60);
        local_8 = 0xc;
        puVar1 = *(undefined4 **)(param_1 + 8);
        if (*(undefined4 **)(param_1 + 0xc) == puVar1) {
          FUN_004141e0((void *)(param_1 + 4),puVar1,&local_68);
        }
        else {
          *puVar1 = local_68;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_48) {
          pvVar5 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar5 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5)))) goto LAB_00463bc8;
          FUN_005adb3f(pvVar5);
        }
        uVar8 = uVar8 + 1;
        local_4c = 0;
        local_60 = local_60 + 0x18;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    pbVar3 = (byte *)FUN_005adb0f(0x14);
    local_8 = 6;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_70 = pbVar3;
    FUN_00402690(local_2c,"location",8);
    local_8 = CONCAT31(local_8._1_3_,7);
    local_6c = uVar6 | 0x10;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff60,(undefined4 *)pbVar4);
    local_68 = FUN_00403e00(pbVar3,in_stack_ffffff60);
    local_8 = 8;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (*(undefined4 **)(param_1 + 0xc) == puVar1) {
      FUN_004141e0((void *)(param_1 + 4),puVar1,&local_68);
    }
    else {
      *puVar1 = local_68;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    }
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
