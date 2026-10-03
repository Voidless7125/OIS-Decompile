#include "../ois_server.exe.h"


void FUN_00440100(void)

{
  void *this;
  int iVar1;
  uint in_stack_ffffffcc;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3978;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"chatter_randomchatter.txt",0x19);
  local_8 = 0;
  this = (void *)FUN_0047d1b0();
  local_8 = 0xffffffff;
  FUN_0043fa40(this,pvVar2);
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"chatter_reqdock.txt",0x13);
  local_8 = 1;
  iVar1 = FUN_0047d1b0();
  local_8 = 0xffffffff;
  FUN_0043fa40((void *)(iVar1 + 0xc),pvVar2);
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"chatter_dockpermitted.txt",0x19);
  local_8 = 2;
  iVar1 = FUN_0047d1b0();
  local_8 = 0xffffffff;
  FUN_0043fa40((void *)(iVar1 + 0x18),pvVar2);
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"chatter_straydetection.txt",0x1a);
  local_8 = 3;
  iVar1 = FUN_0047d1b0();
  local_8 = 0xffffffff;
  FUN_0043fa40((void *)(iVar1 + 0x24),pvVar2);
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,"chatter_stationchatter.txt",0x1a);
  local_8 = 4;
  iVar1 = FUN_0047d1b0();
  local_8 = 0xffffffff;
  FUN_0043fa40((void *)(iVar1 + 0x30),pvVar2);
  ExceptionList = local_10;
  return;
}


void FUN_00440270(void)

{
  undefined4 *puVar1;
  int iVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  basic_string<> *pbVar8;
  byte *pbVar9;
  int *piVar10;
  undefined4 *puVar11;
  basic_string<> *pbVar12;
  basic_string<> *pbVar13;
  void *pvVar14;
  basic_string<> *pbVar15;
  byte *in_stack_ffffff44;
  char *pcVar16;
  char cVar17;
  basic_string<> *local_90;
  int local_8c;
  undefined4 *local_84;
  basic_string<> *local_80;
  basic_string<> *local_7c;
  basic_string<> *local_78;
  char local_71;
  basic_string<> *local_70;
  basic_string<> *local_6c;
  basic_string<> local_68 [24];
  int local_50 [3];
  void *local_44 [3];
  basic_string<> *local_38;
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3ad3;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar3 = (basic_string<> *)FUN_005adb0f(0x140);
  pbVar8 = pbVar3 + 0x1c;
  pbVar12 = pbVar3 + 0x34;
  local_1c = 0;
  *(int *)(pbVar3 + 0x14) = 0;
  *(int *)(pbVar3 + 0x18) = 0xf;
  pbVar3[4] = (basic_string<>)0x0;
  *(int *)(pbVar3 + 0x2c) = 0;
  *(int *)(pbVar3 + 0x30) = 0xf;
  *pbVar8 = (basic_string<>)0x0;
  *(int *)(pbVar3 + 0x44) = 0;
  *(int *)(pbVar3 + 0x48) = 0xf;
  *pbVar12 = (basic_string<>)0x0;
  *(int *)(pbVar3 + 100) = 0;
  *(int *)(pbVar3 + 0x68) = 0xf;
  pbVar3[0x54] = (basic_string<>)0x0;
  pbVar3[0x6c] = (basic_string<>)0x37;
  *(int *)(pbVar3 + 0x70) = 0;
  *(int *)(pbVar3 + 0x74) = 0;
  *(int *)(pbVar3 + 0x78) = 0;
  *(int *)(pbVar3 + 0x84) = 0;
  *(int *)(pbVar3 + 0x88) = 0;
  *(int *)(pbVar3 + 0x8c) = 0;
  *(int *)(pbVar3 + 0x90) = 0;
  *(int *)(pbVar3 + 0x94) = 0;
  *(int *)(pbVar3 + 0x98) = 0;
  *(int *)(pbVar3 + 0x9c) = 0;
  *(int *)(pbVar3 + 0xa0) = 0;
  *(int *)(pbVar3 + 0xa4) = 0;
  *(int *)(pbVar3 + 0xa8) = 0;
  *(int *)(pbVar3 + 0xac) = 0;
  *(int *)(pbVar3 + 0xb0) = 0;
  *(int *)(pbVar3 + 0xb4) = 0;
  *(int *)(pbVar3 + 0xb8) = 0;
  *(int *)(pbVar3 + 0xbc) = 0;
  *(int *)(pbVar3 + 0xc0) = 0;
  *(int *)(pbVar3 + 0xc4) = 0;
  *(int *)(pbVar3 + 200) = 0;
  *(int *)(pbVar3 + 0xcc) = 0;
  *(int *)(pbVar3 + 0xd0) = 0;
  *(int *)(pbVar3 + 0xd4) = 0;
  *(int *)(pbVar3 + 0xd8) = 0;
  *(int *)(pbVar3 + 0xdc) = 0;
  *(int *)(pbVar3 + 0xe0) = 0;
  *(int *)(pbVar3 + 0xe4) = 0;
  *(int *)(pbVar3 + 0xe8) = 0;
  *(int *)(pbVar3 + 0xec) = 0;
  *(int *)(pbVar3 + 0x100) = 0;
  *(int *)(pbVar3 + 0x104) = 0xf;
  pbVar3[0xf0] = (basic_string<>)0x0;
  *(int *)(pbVar3 + 0x10c) = 0;
  *(int *)(pbVar3 + 0x110) = 0;
  *(int *)(pbVar3 + 0x114) = 0;
  *(int *)(pbVar3 + 0x11c) = 0;
  *(int *)(pbVar3 + 0x120) = 0;
  *(int *)(pbVar3 + 0x124) = 0;
  *(int *)(pbVar3 + 0x128) = 0;
  *(int *)(pbVar3 + 300) = 0;
  *(int *)(pbVar3 + 0x130) = 0;
  *(int *)(pbVar3 + 0x134) = 0;
  *(int *)(pbVar3 + 0x138) = 0;
  *(int *)(pbVar3 + 0x13c) = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_78 = pbVar3;
  local_6c = pbVar3;
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 0;
  pbVar4 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar8 != pbVar4) {
    pbVar15 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar15 = *(basic_string<> **)pbVar4;
    }
    FUN_00402690(pbVar8,pbVar15,*(uint *)(pbVar4 + 0x10));
  }
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
LAB_00440535:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"abbrev",6);
  local_8 = 1;
  pbVar4 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar12 != pbVar4) {
    pbVar15 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar15 = *(basic_string<> **)pbVar4;
    }
    FUN_00402690(pbVar12,pbVar15,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  pbVar4 = pbVar12;
  if (0xf < *(uint *)(pbVar3 + 0x48)) {
    pbVar4 = *(basic_string<> **)pbVar12;
  }
  uVar5 = FUN_004031f0((byte *)pbVar4,*(uint *)(pbVar3 + 0x44),(byte *)&PTR_005ce008,0);
  if (((char)uVar5 != '\0') && (pbVar12 != pbVar8)) {
    if (0xf < *(uint *)(pbVar3 + 0x30)) {
      pbVar8 = *(basic_string<> **)pbVar8;
    }
    FUN_00402690(pbVar12,pbVar8,*(uint *)(pbVar3 + 0x2c));
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 2;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar7 = atoi((char *)pbVar6);
  *(int *)(pbVar3 + 0x7c) = iVar7;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 3;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar7 = atoi((char *)pbVar6);
  *(int *)(pbVar3 + 0x80) = iVar7;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sectorid",8);
  local_8 = 4;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar7 = atoi((char *)pbVar6);
  *(int *)pbVar3 = iVar7;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"colour",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_80,(byte *)local_2c);
  pbVar8 = local_7c;
  iVar7 = 0;
  local_70 = local_80;
  while (local_70 != pbVar8) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_70)
    ;
  }
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  if (iVar7 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"colour",6);
    local_8 = 5;
    pbVar8 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar8 = *(basic_string<> **)pbVar8;
    }
    pbVar3[0x6c] = *pbVar8;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 6;
  pbVar8 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 4 != pbVar8) {
    pbVar12 = pbVar8;
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar12 = *(basic_string<> **)pbVar8;
    }
    FUN_00402690(pbVar3 + 4,pbVar12,*(uint *)(pbVar8 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9874,4);
  local_8 = 7;
  pbVar8 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 0x54 != pbVar8) {
    pbVar12 = pbVar8;
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar12 = *(basic_string<> **)pbVar8;
    }
    FUN_00402690(pbVar3 + 0x54,pbVar12,*(uint *)(pbVar8 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  DAT_00655050 = *(int *)pbVar3;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e986c,4);
  local_8 = 8;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (pbVar6 != (byte *)&DAT_006556f0) {
    pbVar9 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar9 = *(byte **)pbVar6;
    }
    FUN_00402690(&DAT_006556f0,pbVar9,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar14 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar14 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  iVar7 = DAT_0065b5cc;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  puVar11 = *(undefined4 **)(DAT_0065b5cc + 0x40);
  if (*(undefined4 **)(DAT_0065b5cc + 0x44) == puVar11) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x3c),puVar11,&local_78);
    pbVar3 = local_78;
  }
  else {
    *puVar11 = pbVar3;
    *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sectorkind",10);
  local_8 = 9;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar6 = pbVar9;
  if (0xf < *(uint *)(pbVar9 + 0x14)) {
    pbVar6 = *(byte **)pbVar9;
  }
  uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar9 + 0x10),&DAT_005e8698,4);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  local_71 = (char)uVar5;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  if (local_71 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"sectorkind",10);
    local_8 = 10;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar6 = pbVar9;
    if (0xf < *(uint *)(pbVar9 + 0x14)) {
      pbVar6 = *(byte **)pbVar9;
    }
    uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar9 + 0x10),(byte *)"outer",5);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    local_71 = (char)uVar5;
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    *(uint *)(pbVar3 + 0x118) = (local_71 == '\0') + 1;
  }
  else {
    *(int *)(pbVar3 + 0x118) = 0;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"faction",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_80,(byte *)local_2c);
  pbVar8 = local_7c;
  iVar7 = 0;
  local_70 = local_80;
  while (local_70 != pbVar8) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_70)
    ;
  }
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"faction",7);
  if (iVar7 == 0) {
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    if (iVar7 != 0) {
      uVar5 = 0;
      local_78 = (basic_string<> *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"faction",7);
        local_8 = 0xc;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00440535;
          FUN_005adb3f(pvVar14);
        }
        if ((uint)((iVar7 - iVar2) / 0x18) <= uVar5) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"faction",7);
        local_8 = 0xd;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        piVar10 = *(int **)(pbVar3 + 0xe8);
        if (*(int **)(pbVar3 + 0xec) == piVar10) {
          FUN_00403840(pbVar3 + 0xe4,piVar10,(undefined4 *)(local_78 + *(int *)pbVar6));
        }
        else {
          FUN_004024e0(piVar10,(undefined4 *)(local_78 + *(int *)pbVar6));
          *(int *)(pbVar3 + 0xe8) = *(int *)(pbVar3 + 0xe8) + 0x18;
        }
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00440535;
          FUN_005adb3f(pvVar14);
        }
        uVar5 = uVar5 + 1;
        local_78 = local_78 + 0x18;
      } while( true );
    }
  }
  else {
    local_8 = 0xb;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    piVar10 = *(int **)(pbVar3 + 0xe8);
    if (*(int **)(pbVar3 + 0xec) == piVar10) {
      FUN_00403840(pbVar3 + 0xe4,piVar10,(undefined4 *)pbVar6);
    }
    else {
      FUN_004024e0(piVar10,(undefined4 *)pbVar6);
      *(int *)(pbVar3 + 0xe8) = *(int *)(pbVar3 + 0xe8) + 0x18;
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"bounties",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_80,(byte *)local_2c);
  pbVar8 = local_7c;
  iVar7 = 0;
  local_70 = local_80;
  while (local_70 != pbVar8) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_70)
    ;
  }
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  if (iVar7 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"bounties",8);
    local_8 = 0xe;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar6);
    piVar10 = FUN_00592840(&local_38,in_stack_ffffff44);
    *(undefined8 *)(pbVar3 + 0x70) = *(undefined8 *)piVar10;
    *(int *)(pbVar3 + 0x78) = piVar10[2];
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"bounty",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_80,(byte *)local_2c);
  pbVar8 = local_7c;
  iVar7 = 0;
  local_70 = local_80;
  while (local_70 != pbVar8) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_70)
    ;
  }
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  if (iVar7 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"bounty",6);
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    if (iVar7 != 0) {
      pbVar8 = (basic_string<> *)0x0;
      local_70 = (basic_string<> *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_6c = pbVar8;
        FUN_00402690(local_2c,"bounty",6);
        local_8 = 0x14;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00440535;
          FUN_005adb3f(pvVar14);
        }
        if ((basic_string<> *)((iVar7 - iVar2) / 0x18) <= pbVar8) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"bounty",6);
        local_8 = 0x15;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff44,(undefined4 *)(local_70 + *(int *)pbVar6));
        FUN_00592d70(&local_90,',',(undefined4 *)in_stack_ffffff44);
        local_8._0_1_ = 0x17;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00440535;
          FUN_005adb3f(pvVar14);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        piVar10 = (int *)FUN_005adb0f(0x6c);
        local_8._0_1_ = 0x18;
        pbVar12 = (basic_string<> *)FUN_004821d0(piVar10);
        local_8._0_1_ = 0x17;
        local_78 = pbVar12;
        FUN_004024e0(&stack0xffffff44,(undefined4 *)local_90);
        piVar10 = FUN_00592840(local_50,in_stack_ffffff44);
        *(undefined8 *)(pbVar12 + 0xc) = *(undefined8 *)piVar10;
        *(int *)(pbVar12 + 0x14) = piVar10[2];
        pbVar8 = local_90 + 0x18;
        if (0xf < *(uint *)(local_90 + 0x2c)) {
          pbVar8 = *(basic_string<> **)pbVar8;
        }
        iVar7 = atoi((char *)pbVar8);
        *(int *)(pbVar12 + 0x18) = iVar7;
        FUN_004024e0(&stack0xffffff44,(undefined4 *)(local_90 + 0x30));
        iVar7 = FUN_00501d10(in_stack_ffffff44);
        *(int *)(pbVar12 + 0x1c) = iVar7;
        FUN_004024e0(&stack0xffffff44,(undefined4 *)(local_90 + 0x48));
        iVar7 = FUN_00501c80(in_stack_ffffff44);
        *(int *)(pbVar12 + 0x20) = iVar7;
        FUN_004024e0(&stack0xffffff44,(undefined4 *)(local_90 + 0x60));
        FUN_00592d70(&local_38,':',(undefined4 *)in_stack_ffffff44);
        local_8 = CONCAT31(local_8._1_3_,0x19);
        if (pbVar12 + 0x24 != local_38) {
          pbVar8 = local_38;
          if (0xf < *(uint *)(local_38 + 0x14)) {
            pbVar8 = *(basic_string<> **)local_38;
          }
          FUN_00402690(pbVar12 + 0x24,pbVar8,*(uint *)(local_38 + 0x10));
        }
        if ((local_34 - (int)local_38) / 0x18 == 1) {
          uVar5 = 5;
          pcVar16 = "stock";
LAB_004415e2:
          FUN_00402690(pbVar12 + 0x3c,pcVar16,uVar5);
        }
        else {
          pcVar16 = (char *)(local_38 + 0x18);
          if (pbVar12 + 0x3c != (basic_string<> *)pcVar16) {
            if (0xf < *(uint *)(local_38 + 0x2c)) {
              pcVar16 = *(char **)pcVar16;
            }
            uVar5 = *(uint *)(local_38 + 0x28);
            goto LAB_004415e2;
          }
        }
        pbVar8 = local_90 + 0x78;
        if (pbVar12 + 0x54 != pbVar8) {
          if (0xf < *(uint *)(local_90 + 0x8c)) {
            pbVar8 = *(basic_string<> **)pbVar8;
          }
          FUN_00402690(pbVar12 + 0x54,pbVar8,*(uint *)(local_90 + 0x88));
        }
        puVar11 = DAT_0065c2a0;
        if (DAT_0065c2a0 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)FUN_005adb0f(0xc);
          DAT_0065c2a0 = puVar11;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
        }
        puVar1 = (undefined4 *)puVar11[1];
        if ((undefined4 *)puVar11[2] == puVar1) {
          FUN_00414080(puVar11,puVar1,&local_78);
          pbVar12 = local_78;
        }
        else {
          *puVar1 = pbVar12;
          puVar11[1] = puVar11[1] + 4;
        }
        puVar11 = *(undefined4 **)(pbVar3 + 300);
        if (*(undefined4 **)(pbVar3 + 0x130) == puVar11) {
          FUN_00414080(pbVar3 + 0x128,puVar11,&local_78);
        }
        else {
          *puVar11 = pbVar12;
          *(int *)(pbVar3 + 300) = *(int *)(pbVar3 + 300) + 4;
        }
        FUN_004025a0((int *)&local_38);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0((int *)&local_90);
        pbVar8 = local_6c + 1;
        local_70 = local_70 + 0x18;
      }
    }
    goto LAB_004412ad;
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"bounty",6);
  local_8 = 0xf;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar6);
  FUN_00592d70(&local_84,',',(undefined4 *)in_stack_ffffff44);
  local_8._0_1_ = 0x11;
  if (0xf < local_30) {
    pvVar14 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar14 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_6c = (basic_string<> *)FUN_005adb0f(0x6c);
  local_8._0_1_ = 0x12;
  pbVar8 = (basic_string<> *)FUN_004821d0((int *)local_6c);
  local_8._0_1_ = 0x11;
  local_78 = pbVar8;
  FUN_004024e0(&stack0xffffff44,local_84);
  piVar10 = FUN_00592840(local_50,in_stack_ffffff44);
  *(undefined8 *)(pbVar8 + 0xc) = *(undefined8 *)piVar10;
  *(int *)(pbVar8 + 0x14) = piVar10[2];
  pcVar16 = (char *)(local_84 + 6);
  if (0xf < (uint)local_84[0xb]) {
    pcVar16 = *(char **)pcVar16;
  }
  iVar7 = atoi(pcVar16);
  *(int *)(pbVar8 + 0x18) = iVar7;
  FUN_004024e0(&stack0xffffff44,local_84 + 0xc);
  iVar7 = FUN_00501d10(in_stack_ffffff44);
  *(int *)(pbVar8 + 0x1c) = iVar7;
  FUN_004024e0(&stack0xffffff44,local_84 + 0x12);
  iVar7 = FUN_00501c80(in_stack_ffffff44);
  *(int *)(pbVar8 + 0x20) = iVar7;
  FUN_004024e0(&stack0xffffff44,local_84 + 0x18);
  FUN_00592d70(&local_90,':',(undefined4 *)in_stack_ffffff44);
  local_8 = CONCAT31(local_8._1_3_,0x13);
  if (pbVar8 + 0x24 != local_90) {
    pbVar12 = local_90;
    if (0xf < *(uint *)(local_90 + 0x14)) {
      pbVar12 = *(basic_string<> **)local_90;
    }
    FUN_00402690(pbVar8 + 0x24,pbVar12,*(uint *)(local_90 + 0x10));
  }
  if ((local_8c - (int)local_90) / 0x18 == 1) {
    uVar5 = 5;
    pcVar16 = "stock";
LAB_004411fe:
    FUN_00402690(pbVar8 + 0x3c,pcVar16,uVar5);
  }
  else {
    pcVar16 = (char *)(local_90 + 0x18);
    if (pbVar8 + 0x3c != (basic_string<> *)pcVar16) {
      if (0xf < *(uint *)(local_90 + 0x2c)) {
        pcVar16 = *(char **)pcVar16;
      }
      uVar5 = *(uint *)(local_90 + 0x28);
      goto LAB_004411fe;
    }
  }
  pbVar12 = (basic_string<> *)(local_84 + 0x1e);
  if (pbVar8 + 0x54 != pbVar12) {
    if (0xf < (uint)local_84[0x23]) {
      pbVar12 = *(basic_string<> **)pbVar12;
    }
    FUN_00402690(pbVar8 + 0x54,pbVar12,local_84[0x22]);
  }
  puVar11 = DAT_0065c2a0;
  if (DAT_0065c2a0 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)FUN_005adb0f(0xc);
    DAT_0065c2a0 = puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
  }
  puVar1 = (undefined4 *)puVar11[1];
  if ((undefined4 *)puVar11[2] == puVar1) {
    FUN_00414080(puVar11,puVar1,&local_78);
    pbVar8 = local_78;
  }
  else {
    *puVar1 = pbVar8;
    puVar11[1] = puVar11[1] + 4;
  }
  puVar11 = *(undefined4 **)(pbVar3 + 300);
  if (*(undefined4 **)(pbVar3 + 0x130) == puVar11) {
    FUN_00414080(pbVar3 + 0x128,puVar11,&local_78);
  }
  else {
    *puVar11 = pbVar8;
    *(int *)(pbVar3 + 300) = *(int *)(pbVar3 + 300) + 4;
  }
  FUN_004025a0((int *)&local_90);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  FUN_004025a0((int *)&local_84);
LAB_004412ad:
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"smugglingfine",0xd);
  FUN_00419820(&DAT_0065b530,(int *)&local_80,(byte *)local_2c);
  pbVar8 = local_7c;
  iVar7 = 0;
  local_6c = local_80;
  while (local_6c != pbVar8) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  if (iVar7 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"smugglingfine",0xd);
    local_8 = 0x1a;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    iVar7 = atoi((char *)pbVar6);
    *(int *)(pbVar3 + 0x108) = iVar7;
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"authoritybase",0xd);
  local_8 = 0x1b;
  pbVar8 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 0xf0 != pbVar8) {
    pbVar12 = pbVar8;
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar12 = *(basic_string<> **)pbVar8;
    }
    FUN_00402690(pbVar3 + 0xf0,pbVar12,*(uint *)(pbVar8 + 0x10));
  }
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"illegalgood",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_80,(byte *)local_2c);
  pbVar8 = local_7c;
  iVar7 = 0;
  local_6c = local_80;
  while (local_6c != pbVar8) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"illegalgood",0xb);
  if (iVar7 == 0) {
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    if (iVar7 != 0) {
      pbVar8 = (basic_string<> *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_70 = pbVar8;
        FUN_00402690(local_2c,"illegalgood",0xb);
        local_8 = 0x20;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00440535;
          FUN_005adb3f(pvVar14);
        }
        if ((basic_string<> *)((iVar7 - iVar2) / 0x18) <= pbVar8) break;
        std::basic_string<>::basic_string<>(local_68,"illegalgood");
        local_8 = 0x21;
        pbVar12 = pbVar8;
        pbVar6 = FUN_0047d5c0((byte *)local_68);
        puVar11 = (undefined4 *)FUN_00402440(pbVar6,(int)pbVar12);
        FUN_004024e0(&stack0xffffff44,puVar11);
        FUN_00592d70(local_50,',',(undefined4 *)in_stack_ffffff44);
        local_8._0_1_ = 0x23;
        FUN_00401b20((int *)local_68);
        local_7c = (basic_string<> *)FUN_005adb0f(0x1c);
        pbVar12 = (basic_string<> *)FUN_0043da90(local_7c);
        local_6c = pbVar12;
        pbVar13 = (basic_string<> *)FUN_00402440(local_50,0);
        std::basic_string<>::operator=(pbVar12,pbVar13);
        uVar5 = FUN_00402460(local_50);
        if (1 < uVar5) {
          pvVar14 = (void *)FUN_005adb0f(0x40);
          local_8._0_1_ = 0x24;
          puVar11 = (undefined4 *)FUN_00402440(local_50,1);
          FUN_004024e0(&stack0xffffff44,puVar11);
          iVar7 = FUN_004a1a40(pvVar14,(undefined4 *)in_stack_ffffff44);
          local_8._0_1_ = 0x23;
          *(int *)(local_6c + 0x18) = iVar7;
          pbVar8 = local_70;
        }
        FUN_00412900(pbVar3 + 0x10c,&local_6c);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0(local_50);
        pbVar8 = pbVar8 + 1;
      }
    }
  }
  else {
    local_8 = 0x1c;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar6);
    FUN_00592d70(&local_90,',',(undefined4 *)in_stack_ffffff44);
    local_8 = CONCAT31(local_8._1_3_,0x1e);
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pbVar8 = (basic_string<> *)FUN_005adb0f(0x1c);
    *(int *)(pbVar8 + 0x10) = 0;
    *(int *)(pbVar8 + 0x14) = 0xf;
    *pbVar8 = (basic_string<>)0x0;
    *(int *)(pbVar8 + 0x18) = 0;
    local_7c = pbVar8;
    local_6c = pbVar8;
    if (pbVar8 != local_90) {
      pbVar12 = local_90;
      if (0xf < *(uint *)(local_90 + 0x14)) {
        pbVar12 = *(basic_string<> **)local_90;
      }
      FUN_00402690(pbVar8,pbVar12,*(uint *)(local_90 + 0x10));
    }
    if (1 < (uint)((local_8c - (int)local_90) / 0x18)) {
      pbVar12 = (basic_string<> *)FUN_005adb0f(0x40);
      local_8._0_1_ = 0x1f;
      local_7c = pbVar12;
      FUN_004024e0(&stack0xffffff44,(undefined4 *)(local_90 + 0x18));
      iVar7 = FUN_004a1a40(pbVar12,(undefined4 *)in_stack_ffffff44);
      local_8 = CONCAT31(local_8._1_3_,0x1e);
      *(int *)(pbVar8 + 0x18) = iVar7;
    }
    puVar11 = *(undefined4 **)(pbVar3 + 0x110);
    if (*(undefined4 **)(pbVar3 + 0x114) == puVar11) {
      FUN_00414080(pbVar3 + 0x10c,puVar11,&local_6c);
    }
    else {
      *puVar11 = pbVar8;
      *(int *)(pbVar3 + 0x110) = *(int *)(pbVar3 + 0x110) + 4;
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_90);
  }
  FUN_00520500((int)pbVar3);
  cVar17 = '\0';
  puVar11 = FUN_00402490(&DAT_006556f0);
  FUN_0043de90(puVar11,cVar17);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00441bd0(void)

{
  byte *this;
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int local_58;
  int local_54;
  byte *local_50;
  int local_4c;
  char local_45;
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
  puStack_c = &LAB_005b3b58;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = (byte *)FUN_005adb0f(0xd8);
  pbVar4 = this + 0xa8;
  local_1c = 0;
  this[0x10] = 0;
  this[0x11] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0xf;
  this[0x15] = 0;
  this[0x16] = 0;
  this[0x17] = 0;
  *this = 0;
  this[0x18] = 0;
  this[0x19] = 0;
  this[0x1c] = 0;
  this[0x1d] = 0;
  this[0x1e] = 0;
  this[0x1f] = 0;
  this[0x20] = 0;
  this[0x34] = 0;
  this[0x35] = 0;
  this[0x36] = 0;
  this[0x37] = 0;
  this[0x38] = 0xf;
  this[0x39] = 0;
  this[0x3a] = 0;
  this[0x3b] = 0;
  this[0x24] = 0;
  this[0x4c] = 0;
  this[0x4d] = 0;
  this[0x4e] = 0;
  this[0x4f] = 0;
  this[0x50] = 0xf;
  this[0x51] = 0;
  this[0x52] = 0;
  this[0x53] = 0;
  this[0x3c] = 0;
  this[0x54] = 0;
  this[0x58] = 0xff;
  this[0x59] = 0xff;
  this[0x5a] = 0xff;
  this[0x5b] = 0xff;
  this[0x6c] = 0;
  this[0x6d] = 0;
  this[0x6e] = 0;
  this[0x6f] = 0;
  this[0x70] = 0xf;
  this[0x71] = 0;
  this[0x72] = 0;
  this[0x73] = 0;
  this[0x5c] = 0;
  this[0x74] = 0;
  this[0x88] = 0;
  this[0x89] = 0;
  this[0x8a] = 0;
  this[0x8b] = 0;
  this[0x8c] = 0xf;
  this[0x8d] = 0;
  this[0x8e] = 0;
  this[0x8f] = 0;
  this[0x78] = 0;
  this[0xa0] = 0;
  this[0xa1] = 0;
  this[0xa2] = 0;
  this[0xa3] = 0;
  this[0xa4] = 0xf;
  this[0xa5] = 0;
  this[0xa6] = 0;
  this[0xa7] = 0;
  this[0x90] = 0;
  this[0xb8] = 0;
  this[0xb9] = 0;
  this[0xba] = 0;
  this[0xbb] = 0;
  this[0xbc] = 0xf;
  this[0xbd] = 0;
  this[0xbe] = 0;
  this[0xbf] = 0;
  *pbVar4 = 0;
  this[0xd0] = 0;
  this[0xd1] = 0;
  this[0xd2] = 0;
  this[0xd3] = 0;
  this[0xd4] = 0xf;
  this[0xd5] = 0;
  this[0xd6] = 0;
  this[0xd7] = 0;
  this[0xc0] = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_50 = this;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this != pbVar1) {
    pbVar6 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar6 = *(byte **)pbVar1;
    }
    FUN_00402690(this,pbVar6,*(uint *)(pbVar1 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sector",6);
  local_8 = 1;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar1 = *(byte **)pbVar1;
  }
  iVar2 = atoi((char *)pbVar1);
  for (puVar8 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar8 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar8 = puVar8 + 1) {
    piVar3 = (int *)*puVar8;
    if (*piVar3 == iVar2) goto LAB_00441dd1;
  }
  piVar3 = (int *)0x0;
LAB_00441dd1:
  *(int **)(this + 0x1c) = piVar3;
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"enableflag",10);
  local_8 = 2;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 != pbVar1) {
    pbVar6 = pbVar1;
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar6 = *(byte **)pbVar1;
    }
    FUN_00402690(pbVar4,pbVar6,*(uint *)(pbVar1 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"disableflag",0xb);
  local_8 = 3;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0xc0 != pbVar4) {
    pbVar1 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar1 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0xc0,pbVar1,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"flagwhenpiratesdetectplayer",0x1b);
  local_8 = 4;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x5c != pbVar4) {
    pbVar1 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar1 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x5c,pbVar1,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"playerhostilepirates",0x14);
  local_8 = 5;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar1;
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar4 = *(byte **)pbVar1;
  }
  uVar5 = FUN_004031f0(pbVar4,*(uint *)(pbVar1 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_45 = (char)uVar5;
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
  if (local_45 != '\0') {
    this[0x74] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"messagetoplayer",0xf);
  local_8 = 6;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x90 != pbVar4) {
    pbVar1 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar1 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x90,pbVar1,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"piratemessage",0xd);
  local_8 = 7;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x78 != pbVar4) {
    pbVar1 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar1 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x78,pbVar1,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9584,4);
  local_8 = 8;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x24 != pbVar4) {
    pbVar1 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar1 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x24,pbVar1,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"patrolzone",10);
  local_8 = 9;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar1;
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar4 = *(byte **)pbVar1;
  }
  uVar5 = FUN_004031f0(pbVar4,*(uint *)(pbVar1 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_45 = (char)uVar5;
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
  if (local_45 != '\0') {
    this[0x20] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"milships",8);
  FUN_00419820(&DAT_0065b530,&local_58,(byte *)local_2c);
  iVar2 = 0;
  local_4c = local_58;
  while (local_4c != local_54) {
    iVar2 = iVar2 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_4c)
    ;
  }
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
  if (iVar2 != 0) {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"milships",8);
    local_8 = 10;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    iVar2 = atoi((char *)pbVar4);
    *(int *)(this + 0x58) = iVar2;
    local_8 = 0xffffffff;
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
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  iVar2 = DAT_0065b5cc;
  puVar8 = *(undefined4 **)(DAT_0065b5cc + 0xa0);
  if (*(undefined4 **)(DAT_0065b5cc + 0xa4) == puVar8) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x9c),puVar8,&local_50);
  }
  else {
    *puVar8 = this;
    *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00442420(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  undefined1 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  byte *in_stack_ffffff64;
  int *local_74;
  int *local_70;
  void *local_6c;
  undefined1 *local_68;
  uint local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [3];
  undefined1 local_38 [4];
  undefined1 *local_34;
  undefined1 *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3be8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 0;
  local_60 = 0;
  piVar4 = (int *)FUN_005adb0f(0x1c);
  local_1c = 0;
  piVar10 = piVar4 + 4;
  local_18 = 0xf;
  *piVar4 = 100;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar10 = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_74 = piVar4;
  local_70 = piVar4;
  FUN_00402690(local_2c,"spawnchance",0xb);
  local_8 = 0;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  *piVar4 = iVar6;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_004424ee:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"amount",6);
  local_8 = 1;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(&stack0xffffff64,(undefined4 *)pbVar5);
  piVar7 = FUN_005913f0(local_38,in_stack_ffffff64);
  *(undefined8 *)(local_70 + 1) = *(undefined8 *)piVar7;
  local_70[3] = piVar7[2];
  local_8 = 0xffffffff;
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
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  puVar9 = local_30;
  local_68 = local_34;
  local_60 = 0;
  uVar12 = 0;
  uVar11 = local_60;
  if (local_34 != local_30) {
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_68);
      uVar12 = local_64;
    } while (local_68 != puVar9);
  }
  local_60 = uVar11;
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
  if (local_60 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar6 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar6 != 0) {
      uVar11 = 0;
      local_68 = (undefined1 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_64 = uVar11;
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = 5;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_8 = 0xffffffff;
        local_60 = (*(int *)(pbVar5 + 4) - *(int *)pbVar5) / 0x18;
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_004424ee;
          FUN_005adb3f(pvVar8);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (local_60 <= uVar11) break;
        puVar9 = (undefined1 *)FUN_005adb0f(0x40);
        local_8 = 6;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_30 = puVar9;
        FUN_00402690(local_5c,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,7);
        local_60 = uVar12 | 2;
        pbVar5 = FUN_0047d5c0((byte *)local_5c);
        FUN_004024e0(&stack0xffffff64,(undefined4 *)(local_68 + *(int *)pbVar5));
        local_6c = (void *)FUN_004a1a40(puVar9,(undefined4 *)in_stack_ffffff64);
        local_8 = 8;
        puVar2 = (undefined4 *)piVar4[5];
        if ((undefined4 *)piVar4[6] == puVar2) {
          FUN_004141e0(piVar10,puVar2,&local_6c);
        }
        else {
          *puVar2 = local_6c;
          piVar4[5] = piVar4[5] + 4;
        }
        local_8 = 0xffffffff;
        uVar12 = uVar12 & 0xfffffffd;
        if (0xf < local_48) {
          pvVar8 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar8 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) goto LAB_004424ee;
          FUN_005adb3f(pvVar8);
        }
        uVar11 = local_64 + 1;
        local_4c = 0;
        local_68 = local_68 + 0x18;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    pvVar8 = (void *)FUN_005adb0f(0x40);
    local_8 = 2;
    local_34 = (undefined1 *)0x0;
    local_30 = (undefined1 *)0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    local_6c = pvVar8;
    FUN_00402690(local_44,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_60 = 1;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff64,(undefined4 *)pbVar5);
    local_64 = FUN_004a1a40(pvVar8,(undefined4 *)in_stack_ffffff64);
    local_8 = 4;
    puVar1 = (uint *)piVar4[5];
    if ((uint *)piVar4[6] == puVar1) {
      FUN_004141e0(piVar10,puVar1,&local_64);
    }
    else {
      *puVar1 = local_64;
      piVar4[5] = piVar4[5] + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      pvVar8 = local_44[0];
      if ((0xfff < (int)local_30 + 1U) &&
         (pvVar8 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_34 = (undefined1 *)0x0;
    local_30 = &DAT_0000000f;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  piVar10 = *(int **)(DAT_0065b5cc + 0x3c);
  do {
    if (piVar10 == *(int **)(DAT_0065b5cc + 0x40)) {
      bVar3 = cc_assert_script_compatible("ERROR: invalid sector");
      if (!bVar3) {
        cocos2d::log("Assert failed: %s");
      }
LAB_0044275c:
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    piVar4 = (int *)*piVar10;
    if (*piVar4 == DAT_00655050) {
      puVar2 = (undefined4 *)piVar4[0x37];
      if ((undefined4 *)piVar4[0x38] == puVar2) {
        FUN_00414080(piVar4 + 0x36,puVar2,&local_74);
      }
      else {
        *puVar2 = local_70;
        piVar4[0x37] = piVar4[0x37] + 4;
      }
      goto LAB_0044275c;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}


void FUN_004429a0(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined4 *puVar12;
  double dVar13;
  byte *local_64;
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
  puStack_c = &LAB_005b3c80;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = (byte *)FUN_005adb0f(0xd0);
  iVar9 = DAT_0065b3b8;
  DAT_0065b3b8 = DAT_0065b3b8 + 1;
  pbVar4 = FUN_00521340(local_64,iVar9,0);
  *(undefined4 *)(pbVar4 + 0x18) = DAT_00655050;
  puVar12 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar12 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar5 = (int *)*puVar12;
      if (*piVar5 == *(int *)(pbVar4 + 0x18)) goto LAB_00442a24;
      puVar12 = puVar12 + 1;
    } while (puVar12 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar5 = (int *)0x0;
LAB_00442a24:
  *(int **)(pbVar4 + 0x1c) = piVar5;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_60 = pbVar4;
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 0;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 != pbVar6) {
    pbVar7 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar7 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar4,pbVar7,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
LAB_00442aa3:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 1;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 + 0x3c != pbVar6) {
    pbVar7 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar7 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar4 + 0x3c,pbVar7,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 2;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 + 0x5c != pbVar6) {
    pbVar7 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar7 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar4 + 0x5c,pbVar7,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"probeflag",9);
  local_8 = 3;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 + 0x74 != pbVar6) {
    pbVar7 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar7 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar4 + 0x74,pbVar7,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"subclass",8);
  local_8 = 4;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar6 = pbVar7;
  if (0xf < *(uint *)(pbVar7 + 0x14)) {
    pbVar6 = *(byte **)pbVar7;
  }
  uVar8 = FUN_004031f0(pbVar6,*(uint *)(pbVar7 + 0x10),(byte *)"telluric",8);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  if ((char)uVar8 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"subclass",8);
    local_8 = 5;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar6 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar6 = *(byte **)pbVar7;
    }
    uVar8 = FUN_004031f0(pbVar6,*(uint *)(pbVar7 + 0x10),&DAT_005e9420,3);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    if ((char)uVar8 == '\0') {
      FUN_00591070("ERROR","Unknown planet type.");
    }
    else {
      pbVar4[200] = 1;
      pbVar4[0xc9] = 0;
      pbVar4[0xca] = 0;
      pbVar4[0xcb] = 0;
    }
  }
  else {
    pbVar4[200] = 0;
    pbVar4[0xc9] = 0;
    pbVar4[0xca] = 0;
    pbVar4[0xcb] = 0;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"diameter",8);
  local_8 = 6;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar9 = atoi((char *)pbVar6);
  *(int *)(pbVar4 + 0xb4) = iVar9;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"population",10);
  local_8 = 7;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar9 = atoi((char *)pbVar6);
  local_8 = 0xffffffff;
  *(float *)(pbVar4 + 0xc0) = (float)iVar9;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 8;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar9 = atoi((char *)pbVar6);
  local_8 = 0xffffffff;
  *(double *)(pbVar4 + 0x20) = (double)iVar9;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 9;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar9 = atoi((char *)pbVar6);
  local_8 = 0xffffffff;
  *(double *)(pbVar4 + 0x28) = (double)iVar9;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9874,4);
  local_8 = 10;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 + 0x8c != pbVar6) {
    pbVar7 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar7 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar4 + 0x8c,pbVar7,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"gravity",7);
  local_8 = 0xb;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  dVar13 = atof((char *)pbVar6);
  *(float *)(pbVar4 + 0xbc) = (float)dVar13;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar11 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar11 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_34 = 0;
  iVar9 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  do {
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,"atmosphere",10);
    local_8 = 0xc;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    pbVar4 = (&PTR_DAT_005ce650)[iVar9];
    pbVar6 = pbVar4;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    pbVar10 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar10 = *(byte **)pbVar7;
    }
    uVar8 = FUN_004031f0(pbVar10,*(uint *)(pbVar7 + 0x10),pbVar4,(int)pbVar6 - (int)(pbVar4 + 1));
    local_8 = 0xffffffff;
    if (0xf < local_48) {
      pvVar11 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar11 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11)))) goto LAB_00442aa3;
      FUN_005adb3f(pvVar11);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if ((char)uVar8 != '\0') {
      *(int *)(local_60 + 0xb8) = iVar9;
      goto LAB_00443211;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  bVar3 = cc_assert_script_compatible("Unknown atmosphere type");
  if (!bVar3) {
    cocos2d::log("Assert failed: %s","Unknown atmosphere type");
  }
LAB_00443211:
  iVar9 = 0;
  while( true ) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"habitat",7);
    local_8 = 0xd;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar4 = (&PTR_s_uninhabitable_005ce678)[iVar9];
    pbVar6 = pbVar4;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    pbVar10 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar10 = *(byte **)pbVar7;
    }
    uVar8 = FUN_004031f0(pbVar10,*(uint *)(pbVar7 + 0x10),pbVar4,(int)pbVar6 - (int)(pbVar4 + 1));
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_00442aa3;
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if ((char)uVar8 != '\0') break;
    iVar9 = iVar9 + 1;
    if (6 < iVar9) {
      bVar3 = cc_assert_script_compatible("Unknown habitat type");
      if (!bVar3) {
        cocos2d::log("Assert failed: %s","Unknown habitat type");
      }
LAB_004432fc:
      pbVar4 = local_60;
      iVar9 = *(int *)(local_60 + 0x1c);
      puVar12 = *(undefined4 **)(iVar9 + 0x88);
      local_64 = local_60;
      if (*(undefined4 **)(iVar9 + 0x8c) == puVar12) {
        FUN_00414080((void *)(iVar9 + 0x84),puVar12,&local_64);
      }
      else {
        *puVar12 = local_60;
        *(int *)(iVar9 + 0x88) = *(int *)(iVar9 + 0x88) + 4;
      }
      iVar2 = *(int *)(local_64 + 0x54);
      if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 0)) {
        puVar12 = *(undefined4 **)(iVar9 + 0x94);
        if (*(undefined4 **)(iVar9 + 0x98) == puVar12) {
          FUN_00414080((void *)(iVar9 + 0x90),puVar12,&local_64);
        }
        else {
          *puVar12 = local_64;
          *(int *)(iVar9 + 0x94) = *(int *)(iVar9 + 0x94) + 4;
        }
      }
      iVar9 = DAT_0065b5cc;
      puVar12 = *(undefined4 **)(DAT_0065b5cc + 0x34);
      if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar12) {
        FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar12,&local_60);
      }
      else {
        *puVar12 = pbVar4;
        *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + 4;
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *(int *)(local_60 + 0xc4) = iVar9;
  goto LAB_004432fc;
}


void FUN_004433b0(void)

{
  byte *this;
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined4 *puVar6;
  byte *local_48;
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
  puStack_c = &LAB_005b3cd8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (byte *)FUN_005adb0f(0xd0);
  iVar3 = DAT_0065b3b8;
  DAT_0065b3b8 = DAT_0065b3b8 + 1;
  this = FUN_00521340(local_48,iVar3,5);
  *(undefined4 *)(this + 0x18) = DAT_00655050;
  puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar1 = (int *)*puVar6;
      if (*piVar1 == *(int *)(this + 0x18)) goto LAB_00443433;
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar1 = (int *)0x0;
LAB_00443433:
  *(int **)(this + 0x1c) = piVar1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = this;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x3c != pbVar2) {
    pbVar4 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar4 = *(byte **)pbVar2;
    }
    FUN_00402690(this + 0x3c,pbVar4,*(uint *)(pbVar2 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"variant",7);
  local_8 = 1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar3 = atoi((char *)pbVar2);
  *(int *)(this + 0xac) = iVar3;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 2;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this != pbVar2) {
    pbVar4 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar4 = *(byte **)pbVar2;
    }
    FUN_00402690(this,pbVar4,*(uint *)(pbVar2 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 3;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar3 = atoi((char *)pbVar2);
  local_8 = 0xffffffff;
  *(double *)(this + 0x20) = (double)iVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"locationy",9);
  local_8 = 4;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar3 = atoi((char *)pbVar2);
  local_8 = 0xffffffff;
  *(double *)(this + 0x28) = (double)iVar3;
  if (0xf < local_30) {
    pvVar5 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar5 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0051f570(*(void **)(this + 0x1c),(int)this);
  iVar3 = DAT_0065b5cc;
  puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x34);
  if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar6) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar6,&local_48);
  }
  else {
    *puVar6 = this;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00443760(void)

{
  undefined1 *puVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined1 *local_48;
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
  puStack_c = &LAB_005b3d38;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (undefined1 *)FUN_005adb0f(0xd0);
  iVar4 = DAT_0065b3b8;
  DAT_0065b3b8 = DAT_0065b3b8 + 1;
  puVar1 = FUN_00521340(local_48,iVar4,4);
  *(undefined4 *)(puVar1 + 0x18) = DAT_00655050;
  puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar2 = (int *)*puVar7;
      if (*piVar2 == *(int *)(puVar1 + 0x18)) goto LAB_004437e3;
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar2 = (int *)0x0;
LAB_004437e3:
  *(int **)(puVar1 + 0x1c) = piVar2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = puVar1;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar1 + 0x3c != pbVar3) {
    pbVar5 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar5 = *(byte **)pbVar3;
    }
    FUN_00402690(puVar1 + 0x3c,pbVar5,*(uint *)(pbVar3 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"rotation",8);
  local_8 = 1;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  dVar8 = atof((char *)pbVar3);
  *(float *)(puVar1 + 0xa4) = (float)dVar8;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 2;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  local_8 = 0xffffffff;
  *(double *)(puVar1 + 0x20) = (double)iVar4;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 3;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  local_8 = 0xffffffff;
  *(double *)(puVar1 + 0x28) = (double)iVar4;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"variant",7);
  local_8 = 4;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  *(int *)(puVar1 + 0xac) = iVar4;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  if (*(int *)(puVar1 + 0xac) == 0) {
    *(undefined4 *)(puVar1 + 0xac) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e99fc,4);
  local_8 = 5;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  *(int *)(puVar1 + 0xa8) = iVar4;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"density",7);
  local_8 = 6;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  *(int *)(puVar1 + 0xb0) = iVar4;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar6 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  iVar4 = *(int *)(puVar1 + 0xb0);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (((iVar4 != 0x14) && (iVar4 != 0x2d)) && (iVar4 != 0x46)) {
    *(undefined4 *)(puVar1 + 0xb0) = 0x46;
  }
  FUN_0051f570(*(void **)(puVar1 + 0x1c),(int)puVar1);
  iVar4 = DAT_0065b5cc;
  puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x34);
  if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar7) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar7,&local_48);
  }
  else {
    *puVar7 = puVar1;
    *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00443c50(void)

{
  undefined1 *puVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined1 *local_48;
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
  puStack_c = &LAB_005b3d90;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (undefined1 *)FUN_005adb0f(0xd0);
  iVar4 = DAT_0065b3b8;
  DAT_0065b3b8 = DAT_0065b3b8 + 1;
  puVar1 = FUN_00521340(local_48,iVar4,3);
  *(undefined4 *)(puVar1 + 0x18) = DAT_00655050;
  puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar2 = (int *)*puVar7;
      if (*piVar2 == *(int *)(puVar1 + 0x18)) goto LAB_00443cd3;
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar2 = (int *)0x0;
LAB_00443cd3:
  *(int **)(puVar1 + 0x1c) = piVar2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = puVar1;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar1 + 0x3c != pbVar3) {
    pbVar5 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar5 = *(byte **)pbVar3;
    }
    FUN_00402690(puVar1 + 0x3c,pbVar5,*(uint *)(pbVar3 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"rotation",8);
  local_8 = 1;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  dVar8 = atof((char *)pbVar3);
  *(float *)(puVar1 + 0xa4) = (float)dVar8;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 2;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  local_8 = 0xffffffff;
  *(double *)(puVar1 + 0x20) = (double)iVar4;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 3;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  local_8 = 0xffffffff;
  *(double *)(puVar1 + 0x28) = (double)iVar4;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"variant",7);
  local_8 = 4;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  *(int *)(puVar1 + 0xac) = iVar4;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  if (*(int *)(puVar1 + 0xac) == 0) {
    *(undefined4 *)(puVar1 + 0xac) = 1;
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"density",7);
  local_8 = 5;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  *(int *)(puVar1 + 0xb0) = iVar4;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar6 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0051f570(*(void **)(puVar1 + 0x1c),(int)puVar1);
  iVar4 = DAT_0065b5cc;
  puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x34);
  if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar7) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar7,&local_48);
  }
  else {
    *puVar7 = puVar1;
    *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
