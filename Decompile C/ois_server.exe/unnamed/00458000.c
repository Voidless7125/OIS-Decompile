#include "../ois_server.exe.h"


void FUN_00458780(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  double dVar11;
  void *in_stack_ffffff5c;
  char cVar12;
  byte *in_stack_ffffff78;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
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
  puStack_c = &LAB_005b531b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"person",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_58,(byte *)local_2c);
  puVar5 = local_54;
  iVar10 = 0;
  local_50 = local_58;
  while (local_50 != puVar5) {
    iVar10 = iVar10 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_50)
    ;
  }
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
LAB_00458828:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  if (iVar10 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"person",6);
    local_8 = 0;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (pbVar3 != (byte *)&DAT_006556d8) {
      pbVar6 = pbVar3;
      if (0xf < *(uint *)(pbVar3 + 0x14)) {
        pbVar6 = *(byte **)pbVar3;
      }
      FUN_00402690(&DAT_006556d8,pbVar6,*(uint *)(pbVar3 + 0x10));
    }
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
  }
  pvVar4 = (void *)FUN_005adb0f(0xac);
  local_8 = 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_4c = pvVar4;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_50 = (undefined4 *)&stack0xffffff78;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_54 = (undefined4 *)0x1;
  FUN_004024e0(&stack0xffffff78,&DAT_006556d8);
  local_8 = 3;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar10 = atoi((char *)pbVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar5 = FUN_0049fee0(pvVar4,iVar10,in_stack_ffffff78);
  local_8 = 0xffffffff;
  local_54 = puVar5;
  local_50 = puVar5;
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
  FUN_00402690(local_2c,"intercom",8);
  local_8 = 5;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar3 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar3 = *(byte **)pbVar6;
  }
  uVar7 = FUN_004031f0(pbVar3,*(uint *)(pbVar6 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_45 = (char)uVar7;
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
  if (local_45 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005ea438,4);
    local_8 = 6;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar3 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar3 = *(byte **)pbVar6;
    }
    uVar7 = FUN_004031f0(pbVar3,*(uint *)(pbVar6 + 0x10),&DAT_005e425c,4);
    local_8 = 0xffffffff;
    local_45 = (char)uVar7;
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
    if (local_45 != '\0') {
      *(undefined1 *)(puVar5 + 7) = 1;
    }
  }
  else {
    *(undefined1 *)((int)puVar5 + 0x1d) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hideinvalidoptionsbydefault",0x1b);
  local_8 = 7;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar3 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar3 = *(byte **)pbVar6;
  }
  uVar7 = FUN_004031f0(pbVar3,*(uint *)(pbVar6 + 0x10),(byte *)"false",5);
  local_8 = 0xffffffff;
  local_45 = (char)uVar7;
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
  if (local_45 != '\0') {
    *(undefined1 *)((int)puVar5 + 0x1f) = 0;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"range",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_60,(byte *)local_2c);
  puVar8 = local_5c;
  iVar10 = 0;
  local_4c = local_60;
  while (local_4c != puVar8) {
    iVar10 = iVar10 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_4c)
    ;
  }
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
  if (iVar10 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"range",5);
    local_8 = 8;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    dVar11 = atof((char *)pbVar3);
    puVar5[8] = (float)dVar11;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"timeout",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_60,(byte *)local_2c);
  puVar8 = local_5c;
  iVar10 = 0;
  local_4c = local_60;
  while (local_4c != puVar8) {
    iVar10 = iVar10 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_4c)
    ;
  }
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
  if (iVar10 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"timeout",7);
    local_8 = 9;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    dVar11 = atof((char *)pbVar3);
    puVar5[9] = (float)dVar11;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"timeoutflag",0xb);
  local_8 = 10;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar5 + 0xb) != pbVar3) {
    pbVar6 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar6 = *(byte **)pbVar3;
    }
    FUN_00402690(puVar5 + 0xb,pbVar6,*(uint *)(pbVar3 + 0x10));
  }
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"forcestart",10);
  local_8 = 0xb;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar3 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar3 = *(byte **)pbVar6;
  }
  uVar7 = FUN_004031f0(pbVar3,*(uint *)(pbVar6 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_45 = (char)uVar7;
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
  if (local_45 != '\0') {
    *(undefined1 *)((int)puVar5 + 0x1e) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_4c = (undefined4 *)&stack0xffffff78;
  local_8 = 0xc;
  FUN_004024e0(&stack0xffffff78,&DAT_006556d8);
  local_8._0_1_ = 0xd;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  cVar12 = '\x01';
  iVar10 = atoi((char *)pbVar3);
  puVar8 = FUN_00412870();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  iVar10 = FUN_00438ed0(puVar8,iVar10,cVar12,in_stack_ffffff78);
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
  if (iVar10 != 0) {
    FUN_00591070("ERROR","Conversation duplicate attempted to be added.");
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"requirementsareoptional",0x17);
  local_8 = 0xe;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar3 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar3 = *(byte **)pbVar6;
  }
  uVar7 = FUN_004031f0(pbVar3,*(uint *)(pbVar6 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_45 = (char)uVar7;
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
  if (local_45 != '\0') {
    *(undefined1 *)(puVar5 + 0x24) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"beckonanimation",0xf);
  local_8 = 0xf;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar5 + 0x11) != pbVar3) {
    pbVar6 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar6 = *(byte **)pbVar3;
    }
    FUN_00402690(puVar5 + 0x11,pbVar6,*(uint *)(pbVar3 + 0x10));
  }
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"eyestate",8);
  local_8 = 0x10;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar5 + 0x1d) != pbVar3) {
    pbVar6 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar6 = *(byte **)pbVar3;
    }
    FUN_00402690(puVar5 + 0x1d,pbVar6,*(uint *)(pbVar3 + 0x10));
  }
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"mouthstate",10);
  local_8 = 0x11;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar5 + 0x17) != pbVar3) {
    pbVar6 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar6 = *(byte **)pbVar3;
    }
    FUN_00402690(puVar5 + 0x17,pbVar6,*(uint *)(pbVar3 + 0x10));
  }
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
  puVar9 = FUN_00412870();
  puVar8 = (undefined4 *)puVar9[0x10];
  if ((undefined4 *)puVar9[0x11] == puVar8) {
    FUN_00414080(puVar9 + 0xf,puVar8,&local_54);
    local_50 = local_54;
  }
  else {
    *puVar8 = puVar5;
    puVar9[0x10] = puVar9[0x10] + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_60,(byte *)local_2c);
  iVar10 = 0;
  local_54 = local_60;
  while (local_54 != local_5c) {
    iVar10 = iVar10 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_54)
    ;
  }
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
  FUN_00402690(local_2c,&DAT_005e970c,3);
  if (iVar10 == 0) {
    iVar10 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar10 != 0) {
      uVar7 = 0;
      iVar10 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = 0x15;
        pbVar3 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar3 + 4);
        iVar2 = *(int *)pbVar3;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar4 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar4 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) goto LAB_00458828;
          FUN_005adb3f(pvVar4);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar7) break;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005e970c,3);
        local_8 = 0x16;
        pbVar3 = FUN_0047d5c0((byte *)local_44);
        local_54 = (undefined4 *)&stack0xffffff78;
        FUN_004024e0(&stack0xffffff78,(undefined4 *)(*(int *)pbVar3 + iVar10));
        local_8._0_1_ = 0x17;
        local_4c = (undefined4 *)&stack0xffffff5c;
        FUN_004024e0(&stack0xffffff5c,&DAT_006556d8);
        local_8._0_1_ = 0x18;
        puVar5 = FUN_00412870();
        local_8 = CONCAT31(local_8._1_3_,0x16);
        FUN_00438710(puVar5,in_stack_ffffff5c);
        local_8 = 0xffffffff;
        if (0xf < local_30) {
          pvVar4 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar4 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) goto LAB_00458828;
          FUN_005adb3f(pvVar4);
        }
        uVar7 = uVar7 + 1;
        local_34 = 0;
        local_30 = 0xf;
        iVar10 = iVar10 + 0x18;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      }
    }
  }
  else {
    local_54 = (undefined4 *)&stack0xffffff78;
    local_8 = 0x12;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar3);
    local_8._0_1_ = 0x13;
    local_4c = (undefined4 *)&stack0xffffff5c;
    FUN_004024e0(&stack0xffffff5c,&DAT_006556d8);
    local_8._0_1_ = 0x14;
    puVar5 = FUN_00412870();
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_00438710(puVar5,in_stack_ffffff5c);
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
  DAT_0065b3a8 = *local_50;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00459510(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *this;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  char *_Str;
  void *pvVar12;
  undefined4 *in_stack_ffffff3c;
  undefined4 in_stack_ffffff40;
  undefined4 in_stack_ffffff44;
  void *pvVar13;
  undefined4 uVar14;
  void *pvVar15;
  undefined *puVar16;
  uint uVar17;
  uint in_stack_ffffff54;
  basic_string<> bVar18;
  uint in_stack_ffffff6c;
  byte *pbVar19;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  int local_5c [6];
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
  puStack_c = &LAB_005b56a8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"elementid",9);
  local_8 = 0;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar7 + 0x14)) {
    pbVar7 = *(byte **)pbVar7;
  }
  DAT_0065b3b4 = atoi((char *)pbVar7);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_30) {
    pvVar13 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar13 = *(void **)((int)local_44[0] + -4), uVar4 = (undefined1)local_8,
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13)))) {
LAB_004595b5:
      local_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e925c,4);
  local_60 = &stack0xffffff6c;
  local_8 = 1;
  pbVar19 = (byte *)(in_stack_ffffff6c & 0xffffff00);
  FUN_00402690(&stack0xffffff6c,&DAT_005e310c,2);
  local_64 = &stack0xffffff54;
  local_8._0_1_ = 2;
  uVar17 = 1;
  puVar16 = &DAT_005ea510;
  pbVar10 = (byte *)(in_stack_ffffff54 & 0xffffff00);
  uVar14 = 0x45963b;
  FUN_00402690(&stack0xffffff54,&DAT_005ea510,1);
  local_8._0_1_ = 3;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_004024e0(&stack0xffffff3c,(undefined4 *)pbVar7);
  local_8._0_1_ = 1;
  FUN_004dbc20(local_5c,in_stack_ffffff3c,in_stack_ffffff40,in_stack_ffffff44,uVar14,(uint)puVar16,
               uVar17,pbVar10);
  local_8._0_1_ = 5;
  if (0xf < local_30) {
    pvVar13 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar13 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_68 = &stack0xffffff6c;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_004024e0(&stack0xffffff6c,local_5c);
  local_8._0_1_ = 6;
  local_64 = &stack0xffffff4c;
  pvVar13 = (void *)0x4596e8;
  FUN_004024e0(&stack0xffffff4c,&DAT_006556d8);
  local_8._0_1_ = 7;
  puVar8 = FUN_00412870();
  local_8._0_1_ = 5;
  pvVar15 = (void *)0x4596fc;
  puVar8 = FUN_00438540(puVar8,puVar16);
  local_68 = &stack0xffffff6c;
  FUN_004024e0(&stack0xffffff6c,&DAT_006556d8);
  local_8._0_1_ = 8;
  bVar18 = (basic_string<>)0x1;
  iVar9 = DAT_0065b3a8;
  this = FUN_00412870();
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar9 = FUN_00438ed0(this,iVar9,(char)bVar18,pbVar19);
  if ((iVar9 == 0) && (bVar5 = cc_assert_script_compatible("Invalid conversation."), !bVar5)) {
    cocos2d::log("Assert failed: %s");
  }
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(iVar9 + 0x1f);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hideinvalidoptions",0x12);
  local_8._0_1_ = 9;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar7 = pbVar10;
  if (0xf < *(uint *)(pbVar10 + 0x14)) {
    pbVar7 = *(byte **)pbVar10;
  }
  uVar17 = FUN_004031f0(pbVar7,*(uint *)(pbVar10 + 0x10),&DAT_005e425c,4);
  local_8._0_1_ = 5;
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
  if ((char)uVar17 != '\0') {
    *(undefined1 *)(puVar8 + 2) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"eyestate",8);
  local_8 = CONCAT31(local_8._1_3_,10);
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar8 + 9) != pbVar7) {
    pbVar10 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar10 = *(byte **)pbVar7;
    }
    FUN_00402690(puVar8 + 9,pbVar10,*(uint *)(pbVar7 + 0x10));
  }
  local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"mouthstate",10);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar8 + 3) != pbVar7) {
    pbVar10 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar10 = *(byte **)pbVar7;
    }
    FUN_00402690(puVar8 + 3,pbVar10,*(uint *)(pbVar7 + 0x10));
  }
  local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"givelicense",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"givelicense",0xb);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar17 = 0;
      iVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"givelicense",0xb);
        local_8._0_1_ = 0xf;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8._0_1_ = 5;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"givelicense",0xb);
        local_8._0_1_ = 0x10;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        local_68 = &stack0xffffff6c;
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)pbVar7 + iVar9));
        local_8._0_1_ = 0x11;
        local_64 = &stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0x12;
        puVar8 = FUN_00412870();
        local_8._0_1_ = 0x10;
        pvVar13 = (void *)0x459c1c;
        FUN_00438d20(puVar8,pvVar15);
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0xc;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0xd;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0xe;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0xc;
    pvVar13 = (void *)0x459a0b;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"damageship",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"damageship",10);
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x13;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x14;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x15;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x13;
    pvVar13 = (void *)0x459cea;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"blacklist",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"blacklist",9);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar17 = 0;
      iVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"blacklist",9);
        local_8._0_1_ = 0x19;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"blacklist",9);
        local_8._0_1_ = 0x1a;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        local_68 = &stack0xffffff6c;
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)pbVar7 + iVar9));
        local_8._0_1_ = 0x1b;
        local_64 = &stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0x1c;
        puVar8 = FUN_00412870();
        local_8._0_1_ = 0x1a;
        pvVar13 = (void *)0x45a03f;
        FUN_00438d20(puVar8,pvVar15);
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x16;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x17;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x18;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x16;
    pvVar13 = (void *)0x459e2d;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"setflag",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"setflag",7);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar17 = 0;
      iVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"setflag",7);
        local_8._0_1_ = 0x20;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"setflag",7);
        local_8._0_1_ = 0x21;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        local_68 = &stack0xffffff6c;
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)pbVar7 + iVar9));
        local_8._0_1_ = 0x22;
        local_64 = &stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0x23;
        puVar8 = FUN_00412870();
        local_8._0_1_ = 0x21;
        pvVar13 = (void *)0x45a31f;
        FUN_00438d20(puVar8,pvVar15);
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x1d;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x1e;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x1f;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x1d;
    pvVar13 = (void *)0x45a10d;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"unsetflag",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"unsetflag",9);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar17 = 0;
      iVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"unsetflag",9);
        local_8._0_1_ = 0x27;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"unsetflag",9);
        local_8._0_1_ = 0x28;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        local_68 = &stack0xffffff6c;
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)pbVar7 + iVar9));
        local_8._0_1_ = 0x29;
        local_64 = &stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0x2a;
        puVar8 = FUN_00412870();
        local_8._0_1_ = 0x28;
        pvVar13 = (void *)0x45a5ff;
        FUN_00438d20(puVar8,pvVar15);
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x24;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x25;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x26;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x24;
    pvVar13 = (void *)0x45a3ed;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"addmoney",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"addmoney",8);
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x2b;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x2c;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x2d;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x2b;
    pvVar13 = (void *)0x45a6cd;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"removemoney",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"removemoney",0xb);
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x2e;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x2f;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x30;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x2e;
    pvVar13 = (void *)0x45a817;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"addweapon",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"addweapon",9);
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x31;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x32;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x33;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x31;
    pvVar13 = (void *)0x45a95a;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"addcomponent",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"addcomponent",0xc);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar17 = 0;
      iVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"addcomponent",0xc);
        local_8._0_1_ = 0x37;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"addcomponent",0xc);
        local_8._0_1_ = 0x38;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        local_68 = &stack0xffffff6c;
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)pbVar7 + iVar9));
        local_8._0_1_ = 0x39;
        local_64 = &stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0x3a;
        puVar8 = FUN_00412870();
        local_8._0_1_ = 0x38;
        pvVar13 = (void *)0x45acaf;
        FUN_00438d20(puVar8,pvVar15);
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x34;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x35;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x36;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x34;
    pvVar13 = (void *)0x45aa9d;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  FUN_00402690(local_2c,"removecomponent",0xf);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"removecomponent",0xf);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar17 = 0;
      iVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"removecomponent",0xf);
        local_8._0_1_ = 0x3e;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"removecomponent",0xf);
        local_8._0_1_ = 0x3f;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        local_68 = &stack0xffffff6c;
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(*(int *)pbVar7 + iVar9));
        local_8._0_1_ = 0x40;
        local_64 = &stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0x41;
        puVar8 = FUN_00412870();
        local_8._0_1_ = 0x3f;
        pvVar13 = (void *)0x45afac;
        FUN_00438d20(puVar8,pvVar15);
        local_8._0_1_ = 5;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004595b5;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x3b;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x3c;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x3d;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x3b;
    pvVar13 = (void *)0x45ad7d;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
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
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcargo");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcargo");
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      uVar17 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcargo");
      local_8._0_1_ = 0x45;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar9 = FUN_00402460((int *)pbVar7);
      local_8._0_1_ = 5;
      FUN_00401b20((int *)local_2c);
      if (iVar9 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcargo");
          local_68 = &stack0xffffff6c;
          local_8._0_1_ = 0x46;
          uVar11 = uVar17;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar8 = (undefined4 *)FUN_00402440(pbVar7,uVar11);
          FUN_004024e0(&stack0xffffff6c,puVar8);
          local_8._0_1_ = 0x47;
          local_64 = &stack0xffffff48;
          FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
          local_8._0_1_ = 0x48;
          puVar8 = FUN_00412870();
          local_8._0_1_ = 0x46;
          pvVar13 = (void *)0x45b0ab;
          FUN_00438d20(puVar8,pvVar15);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
          uVar17 = uVar17 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcargo");
          local_8._0_1_ = 0x45;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          uVar11 = FUN_00402460((int *)pbVar7);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
        } while (uVar17 < uVar11);
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x42;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x43;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x44;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x42;
    pvVar13 = (void *)0x45ae4b;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecargo");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecargo");
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      uVar17 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecargo");
      local_8._0_1_ = 0x4c;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar9 = FUN_00402460((int *)pbVar7);
      local_8._0_1_ = 5;
      FUN_00401b20((int *)local_2c);
      if (iVar9 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecargo");
          local_68 = &stack0xffffff6c;
          local_8._0_1_ = 0x4d;
          uVar11 = uVar17;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar8 = (undefined4 *)FUN_00402440(pbVar7,uVar11);
          FUN_004024e0(&stack0xffffff6c,puVar8);
          local_8._0_1_ = 0x4e;
          local_64 = &stack0xffffff48;
          FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
          local_8._0_1_ = 0x4f;
          puVar8 = FUN_00412870();
          local_8._0_1_ = 0x4d;
          pvVar13 = (void *)0x45b25a;
          FUN_00438d20(puVar8,pvVar15);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
          uVar17 = uVar17 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecargo");
          local_8._0_1_ = 0x4c;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          uVar11 = FUN_00402460((int *)pbVar7);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
        } while (uVar17 < uVar11);
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x49;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x4a;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x4b;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x49;
    pvVar13 = (void *)0x45b17f;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      uVar17 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
      local_8._0_1_ = 0x53;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar9 = FUN_00402460((int *)pbVar7);
      local_8._0_1_ = 5;
      FUN_00401b20((int *)local_2c);
      if (iVar9 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
          local_68 = &stack0xffffff6c;
          local_8._0_1_ = 0x54;
          uVar11 = uVar17;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar8 = (undefined4 *)FUN_00402440(pbVar7,uVar11);
          FUN_004024e0(&stack0xffffff6c,puVar8);
          local_8._0_1_ = 0x55;
          local_64 = &stack0xffffff48;
          FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
          local_8._0_1_ = 0x56;
          puVar8 = FUN_00412870();
          local_8._0_1_ = 0x54;
          pvVar13 = (void *)0x45b3fd;
          FUN_00438d20(puVar8,pvVar15);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
          uVar17 = uVar17 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
          local_8._0_1_ = 0x53;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          uVar11 = FUN_00402460((int *)pbVar7);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
        } while (uVar17 < uVar11);
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x50;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x51;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x52;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x50;
    pvVar13 = (void *)0x45b32e;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      uVar17 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
      local_8._0_1_ = 0x5a;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar9 = FUN_00402460((int *)pbVar7);
      local_8._0_1_ = 5;
      FUN_00401b20((int *)local_2c);
      if (iVar9 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
          local_68 = &stack0xffffff6c;
          local_8._0_1_ = 0x5b;
          uVar11 = uVar17;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar8 = (undefined4 *)FUN_00402440(pbVar7,uVar11);
          FUN_004024e0(&stack0xffffff6c,puVar8);
          local_8._0_1_ = 0x5c;
          local_64 = &stack0xffffff48;
          FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
          local_8._0_1_ = 0x5d;
          puVar8 = FUN_00412870();
          local_8._0_1_ = 0x5b;
          pvVar13 = (void *)0x45b5aa;
          FUN_00438d20(puVar8,pvVar15);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
          uVar17 = uVar17 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
          local_8._0_1_ = 0x5a;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          uVar11 = FUN_00402460((int *)pbVar7);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
        } while (uVar17 < uVar11);
      }
    }
  }
  else {
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x57;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x58;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x59;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x57;
    pvVar13 = (void *)0x45b4d1;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"beginquest");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"beginquest");
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x5e;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x5f;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x60;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x5e;
    pvVar13 = (void *)0x45b67e;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"completequest");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"completequest");
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x61;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x62;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 99;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x61;
    pvVar13 = (void *)0x45b71a;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"failquest");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"failquest");
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 100;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x65;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x66;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 100;
    pvVar13 = (void *)0x45b7b6;
    FUN_00438d20(puVar8,pvVar15);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"taketo");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"taketo");
    local_8._0_1_ = 0x67;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    _Str = (char *)FUN_00402490((undefined4 *)pbVar7);
    atoi(_Str);
    local_68 = &stack0xffffff68;
    std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff68,"*continue*");
    local_8._0_1_ = 0x68;
    local_64 = &stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x69;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x67;
    FUN_00438840(puVar8,pvVar13);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"resetcontracts");
  local_8._0_1_ = 0x6a;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar6 = FUN_00403260(pbVar7,&DAT_005e425c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (cVar6 != '\0') {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"resetcontracts");
    local_68 = &stack0xffffff6c;
    local_8._0_1_ = 0x6b;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_8._0_1_ = 0x6c;
    local_64 = &stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 0x6d;
    puVar8 = FUN_00412870();
    local_8._0_1_ = 0x6b;
    FUN_00438d20(puVar8,pvVar15);
    FUN_00401b20((int *)local_2c);
  }
  DAT_0065b3b0 = 0;
  FUN_00401b20(local_5c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0045b960(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  int iVar12;
  void *in_stack_ffffff44;
  void *in_stack_ffffff48;
  undefined4 auStack_94 [3];
  undefined4 uStack_88;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  basic_string<> local_5c [24];
  byte local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005b5a88;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45b9af;
  FUN_00402690(local_2c,"taketo",6);
  uStack_88 = 0x45b9c1;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_6c = local_68;
  while (local_6c != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
LAB_0045ba04:
      local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45ba11;
    FUN_005adb3f(pvVar11);
  }
  if (iVar12 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    uStack_88 = 0x45ba3d;
    FUN_00402690(local_2c,"taketo",6);
    local_8 = 0;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    atoi((char *)pbVar5);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45baa0;
      FUN_005adb3f(pvVar11);
    }
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = 0;
  uStack_88 = 0x45bac4;
  FUN_00402690(local_44,"*end conversation*",0x12);
  local_8 = 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45baec;
  FUN_00402690(local_2c,&DAT_005e925c,4);
  local_8._0_1_ = 2;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  iVar12 = *(int *)(pbVar5 + 0x10);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45bb38;
    FUN_005adb3f(pvVar11);
  }
  if (iVar12 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    uStack_88 = 0x45bb64;
    FUN_00402690(local_2c,&DAT_005e925c,4);
    local_8 = CONCAT31(local_8._1_3_,3);
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (local_44 != pbVar5) {
      pbVar8 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar8 = *(byte **)pbVar5;
      }
      uStack_88 = 0x45bb93;
      FUN_00402690(local_44,pbVar8,*(uint *)(pbVar5 + 0x10));
    }
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45bbca;
      FUN_005adb3f(pvVar11);
    }
  }
  local_60 = (undefined4 *)&stack0xffffff68;
  FUN_004024e0(&stack0xffffff68,(undefined4 *)local_44);
  local_8._0_1_ = 4;
  local_6c = (undefined4 *)&stack0xffffff44;
  FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
  local_8._0_1_ = 5;
  puVar6 = FUN_00412870();
  local_8._0_1_ = 1;
  puVar7 = FUN_00438840(puVar6,in_stack_ffffff44);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45bc41;
  local_60 = puVar7;
  FUN_00402690(local_2c,&DAT_005e970c,3);
  uStack_88 = 0x45bc53;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_6c = local_68;
  while (local_6c != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45bca3;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45bcc7;
  FUN_00402690(local_2c,&DAT_005e970c,3);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45bdae;
      FUN_005adb3f(pvVar11);
    }
    uVar3 = (undefined1)local_8;
    if (iVar12 != 0) {
      uVar9 = 0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45bde1;
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8._0_1_ = 9;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45be39;
          FUN_005adb3f(pvVar11);
        }
        puVar7 = local_60;
        uVar3 = (undefined1)local_8;
        if ((uint)((iVar2 - iVar1) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45be65;
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8._0_1_ = 10;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_94;
        FUN_004024e0(auStack_94,(undefined4 *)(*(int *)pbVar5 + iVar12));
        local_8._0_1_ = 0xb;
        local_6c = (undefined4 *)&stack0xffffff48;
        FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
        local_8._0_1_ = 0xc;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 10;
        in_stack_ffffff44 = (void *)0x45bec0;
        FUN_004389d0(puVar6,in_stack_ffffff48);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45bef5;
          FUN_005adb3f(pvVar11);
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0x18;
      }
    }
  }
  else {
    local_6c = auStack_94;
    local_8._0_1_ = 6;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 7;
    local_64 = (undefined4 *)&stack0xffffff48;
    FUN_004024e0(&stack0xffffff48,&DAT_006556d8);
    local_8._0_1_ = 8;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 6;
    in_stack_ffffff44 = (void *)0x45bd2d;
    FUN_004389d0(puVar6,in_stack_ffffff48);
    local_8._0_1_ = 1;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45bd68;
      FUN_005adb3f(pvVar11);
      uVar3 = (undefined1)local_8;
    }
  }
  local_8._0_1_ = uVar3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45bf25;
  FUN_00402690(local_2c,"eyestate",8);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar7 + 9) != pbVar5) {
    pbVar8 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar8 = *(byte **)pbVar5;
    }
    uStack_88 = 0x45bf53;
    FUN_00402690(puVar7 + 9,pbVar8,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 1;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45bf8a;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45bfae;
  FUN_00402690(local_2c,"mouthstate",10);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar7 + 3) != pbVar5) {
    pbVar8 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar8 = *(byte **)pbVar5;
    }
    uStack_88 = 0x45bfdc;
    FUN_00402690(puVar7 + 3,pbVar8,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 1;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45c013;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c037;
  FUN_00402690(local_2c,"requirementsareoptional",0x17);
  local_8._0_1_ = 0xf;
  pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar8;
  if (0xf < *(uint *)(pbVar8 + 0x14)) {
    pbVar5 = *(byte **)pbVar8;
  }
  uStack_88 = 0x45c062;
  uVar9 = FUN_004031f0(pbVar5,*(uint *)(pbVar8 + 0x10),&DAT_005e425c,4);
  local_8._0_1_ = 1;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45c09e;
    FUN_005adb3f(pvVar11);
  }
  if ((char)uVar9 != '\0') {
    *(undefined1 *)(local_60 + 0x15) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c0cd;
  FUN_00402690(local_2c,"givelicense",0xb);
  uStack_88 = 0x45c0df;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45c131;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c155;
  FUN_00402690(local_2c,"givelicense",0xb);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c2c4;
      FUN_005adb3f(pvVar11);
    }
    if (iVar12 != 0) {
      uVar9 = 0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45c2f4;
        FUN_00402690(local_2c,"givelicense",0xb);
        local_8._0_1_ = 0x13;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45c34c;
          FUN_005adb3f(pvVar11);
        }
        if ((uint)((iVar2 - iVar1) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45c378;
        FUN_00402690(local_2c,"givelicense",0xb);
        local_8._0_1_ = 0x14;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_94;
        FUN_004024e0(auStack_94,(undefined4 *)(*(int *)pbVar5 + iVar12));
        local_8._0_1_ = 0x15;
        local_60 = (undefined4 *)&stack0xffffff44;
        FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
        local_8._0_1_ = 0x16;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 0x14;
        FUN_00438b50(puVar6,in_stack_ffffff44);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45c40a;
          FUN_005adb3f(pvVar11);
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0x18;
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x10;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x11;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x12;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x10;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c1f4;
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c218;
  FUN_00402690(local_2c,"damageship",10);
  uStack_88 = 0x45c22a;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45c41d;
    FUN_005adb3f(pvVar11);
  }
  if (iVar12 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    uStack_88 = 0x45c449;
    FUN_00402690(local_2c,"damageship",10);
    local_64 = auStack_94;
    local_8._0_1_ = 0x17;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x18;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x19;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x17;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c4e0;
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c504;
  FUN_00402690(local_2c,"blacklist",9);
  uStack_88 = 0x45c516;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45c566;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c58a;
  FUN_00402690(local_2c,"blacklist",9);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c6f4;
      FUN_005adb3f(pvVar11);
    }
    if (iVar12 != 0) {
      uVar9 = 0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45c724;
        FUN_00402690(local_2c,"blacklist",9);
        local_8._0_1_ = 0x1d;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45c77c;
          FUN_005adb3f(pvVar11);
        }
        if ((uint)((iVar2 - iVar1) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45c7a8;
        FUN_00402690(local_2c,"blacklist",9);
        local_8._0_1_ = 0x1e;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_94;
        FUN_004024e0(auStack_94,(undefined4 *)(*(int *)pbVar5 + iVar12));
        local_8._0_1_ = 0x1f;
        local_60 = (undefined4 *)&stack0xffffff44;
        FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
        local_8._0_1_ = 0x20;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 0x1e;
        FUN_00438b50(puVar6,in_stack_ffffff44);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45c83a;
          FUN_005adb3f(pvVar11);
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0x18;
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x1a;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x1b;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x1c;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x1a;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c629;
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c64d;
  FUN_00402690(local_2c,"addcargo",8);
  uStack_88 = 0x45c65f;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45c84d;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c871;
  FUN_00402690(local_2c,"addcargo",8);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c9d9;
      FUN_005adb3f(pvVar11);
    }
    if (iVar12 != 0) {
      uVar9 = 0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45ca11;
        FUN_00402690(local_2c,"addcargo",8);
        local_8._0_1_ = 0x24;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45ca69;
          FUN_005adb3f(pvVar11);
        }
        if ((uint)((iVar2 - iVar1) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45ca95;
        FUN_00402690(local_2c,"addcargo",8);
        local_8._0_1_ = 0x25;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_94;
        FUN_004024e0(auStack_94,(undefined4 *)(*(int *)pbVar5 + iVar12));
        local_8._0_1_ = 0x26;
        local_60 = (undefined4 *)&stack0xffffff44;
        FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
        local_8._0_1_ = 0x27;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 0x25;
        FUN_00438b50(puVar6,in_stack_ffffff44);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45cb27;
          FUN_005adb3f(pvVar11);
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0x18;
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x21;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x22;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x23;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x21;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45c910;
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45c934;
  FUN_00402690(local_2c,"removecargo",0xb);
  uStack_88 = 0x45c946;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45cb3a;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45cb5e;
  FUN_00402690(local_2c,"removecargo",0xb);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45ccc6;
      FUN_005adb3f(pvVar11);
    }
    if (iVar12 != 0) {
      uVar9 = 0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45ccf6;
        FUN_00402690(local_2c,"removecargo",0xb);
        local_8._0_1_ = 0x2b;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45cd4e;
          FUN_005adb3f(pvVar11);
        }
        if ((uint)((iVar2 - iVar1) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45cd7a;
        FUN_00402690(local_2c,"removecargo",0xb);
        local_8._0_1_ = 0x2c;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_94;
        FUN_004024e0(auStack_94,(undefined4 *)(*(int *)pbVar5 + iVar12));
        local_8._0_1_ = 0x2d;
        local_60 = (undefined4 *)&stack0xffffff44;
        FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
        local_8._0_1_ = 0x2e;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 0x2c;
        FUN_00438b50(puVar6,in_stack_ffffff44);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45ce0c;
          FUN_005adb3f(pvVar11);
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0x18;
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x28;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x29;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x2a;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x28;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45cbfd;
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45cc21;
  FUN_00402690(local_2c,"setstat",7);
  uStack_88 = 0x45cc33;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45ce1f;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45ce43;
  FUN_00402690(local_2c,"setstat",7);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45cfab;
      FUN_005adb3f(pvVar11);
    }
    if (iVar12 != 0) {
      uVar9 = 0;
      iVar12 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45cfe1;
        FUN_00402690(local_2c,"setstat",7);
        local_8._0_1_ = 0x32;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar2 = *(int *)(pbVar5 + 4);
        iVar1 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45d039;
          FUN_005adb3f(pvVar11);
        }
        if ((uint)((iVar2 - iVar1) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45d065;
        FUN_00402690(local_2c,"setstat",7);
        local_8._0_1_ = 0x33;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        local_64 = auStack_94;
        FUN_004024e0(auStack_94,(undefined4 *)(*(int *)pbVar5 + iVar12));
        local_8._0_1_ = 0x34;
        local_60 = (undefined4 *)&stack0xffffff44;
        FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
        local_8._0_1_ = 0x35;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 0x33;
        FUN_00438b50(puVar6,in_stack_ffffff44);
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0045ba04;
          uStack_88 = 0x45d0f7;
          FUN_005adb3f(pvVar11);
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0x18;
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x2f;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x30;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x31;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x2f;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45cee2;
      FUN_005adb3f(pvVar11);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45cf06;
  FUN_00402690(local_2c,"changestat",10);
  uStack_88 = 0x45cf18;
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar6 = local_64;
  iVar12 = 0;
  local_60 = local_68;
  while (local_60 != puVar6) {
    iVar12 = iVar12 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_88 = 0x45d10a;
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_88 = 0x45d12e;
  FUN_00402690(local_2c,"changestat",10);
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45d2b9;
      FUN_005adb3f(pvVar11);
    }
    if (iVar12 != 0) {
      uVar9 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uStack_88 = 0x45d2e7;
        FUN_00402690(local_2c,"changestat",10);
        local_8._0_1_ = 0x39;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar12 = *(int *)(pbVar5 + 4);
        iVar2 = *(int *)pbVar5;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          FUN_00401b80(local_2c[0],local_18 + 1);
        }
        if ((uint)((iVar12 - iVar2) / 0x18) <= uVar9) break;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
        local_64 = auStack_94;
        local_8._0_1_ = 0x3a;
        uVar10 = uVar9;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
        FUN_004024e0(auStack_94,puVar6);
        local_8._0_1_ = 0x3b;
        local_60 = (undefined4 *)&stack0xffffff44;
        FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
        local_8._0_1_ = 0x3c;
        puVar6 = FUN_00412870();
        local_8._0_1_ = 0x3a;
        FUN_00438b50(puVar6,in_stack_ffffff44);
        local_8._0_1_ = 1;
        FUN_00401b20((int *)local_2c);
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x36;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x37;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x38;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x36;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uStack_88 = 0x45d1cd;
      FUN_005adb3f(pvVar11);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setflag");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setflag");
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar12 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setflag");
      local_8._0_1_ = 0x40;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar12 = FUN_00402460((int *)pbVar5);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar12 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setflag");
          local_64 = auStack_94;
          local_8._0_1_ = 0x41;
          uVar10 = uVar9;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
          FUN_004024e0(auStack_94,puVar6);
          local_8._0_1_ = 0x42;
          local_60 = (undefined4 *)&stack0xffffff44;
          FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
          local_8._0_1_ = 0x43;
          puVar6 = FUN_00412870();
          local_8._0_1_ = 0x41;
          FUN_00438b50(puVar6,in_stack_ffffff44);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setflag");
          local_8._0_1_ = 0x40;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          uVar10 = FUN_00402460((int *)pbVar5);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar10);
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x3d;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x3e;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x3f;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x3d;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"unsetflag");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"unsetflag");
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar12 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"unsetflag");
      local_8._0_1_ = 0x47;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar12 = FUN_00402460((int *)pbVar5);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar12 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"unsetflag");
          local_64 = auStack_94;
          local_8._0_1_ = 0x48;
          uVar10 = uVar9;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
          FUN_004024e0(auStack_94,puVar6);
          local_8._0_1_ = 0x49;
          local_60 = (undefined4 *)&stack0xffffff44;
          FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
          local_8._0_1_ = 0x4a;
          puVar6 = FUN_00412870();
          local_8._0_1_ = 0x48;
          FUN_00438b50(puVar6,in_stack_ffffff44);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"unsetflag");
          local_8._0_1_ = 0x47;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          uVar10 = FUN_00402460((int *)pbVar5);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar10);
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x44;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x45;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x46;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x44;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addmoney");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar12 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addmoney");
    local_64 = auStack_94;
    local_8._0_1_ = 0x4b;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x4c;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x4d;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x4b;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar12 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
      local_8._0_1_ = 0x51;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar12 = FUN_00402460((int *)pbVar5);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar12 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
          local_64 = auStack_94;
          local_8._0_1_ = 0x52;
          uVar10 = uVar9;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
          FUN_004024e0(auStack_94,puVar6);
          local_8._0_1_ = 0x53;
          local_60 = (undefined4 *)&stack0xffffff44;
          FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
          local_8._0_1_ = 0x54;
          puVar6 = FUN_00412870();
          local_8._0_1_ = 0x52;
          FUN_00438b50(puVar6,in_stack_ffffff44);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
          local_8._0_1_ = 0x51;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          uVar10 = FUN_00402460((int *)pbVar5);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar10);
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x4e;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x4f;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x50;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x4e;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addweapon");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addweapon");
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar12 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addweapon");
      local_8._0_1_ = 0x58;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar12 = FUN_00402460((int *)pbVar5);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar12 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addweapon");
          local_64 = auStack_94;
          local_8._0_1_ = 0x59;
          uVar10 = uVar9;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
          FUN_004024e0(auStack_94,puVar6);
          local_8._0_1_ = 0x5a;
          local_60 = (undefined4 *)&stack0xffffff44;
          FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
          local_8._0_1_ = 0x5b;
          puVar6 = FUN_00412870();
          local_8._0_1_ = 0x59;
          FUN_00438b50(puVar6,in_stack_ffffff44);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addweapon");
          local_8._0_1_ = 0x58;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          uVar10 = FUN_00402460((int *)pbVar5);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar10);
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x55;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x56;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x57;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x55;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcomponent");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcomponent");
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar12 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcomponent");
      local_8._0_1_ = 0x5f;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar12 = FUN_00402460((int *)pbVar5);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar12 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcomponent");
          local_64 = auStack_94;
          local_8._0_1_ = 0x60;
          uVar10 = uVar9;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
          FUN_004024e0(auStack_94,puVar6);
          local_8._0_1_ = 0x61;
          local_60 = (undefined4 *)&stack0xffffff44;
          FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
          local_8._0_1_ = 0x62;
          puVar6 = FUN_00412870();
          local_8._0_1_ = 0x60;
          FUN_00438b50(puVar6,in_stack_ffffff44);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"addcomponent");
          local_8._0_1_ = 0x5f;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          uVar10 = FUN_00402460((int *)pbVar5);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar10);
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 0x5c;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x5d;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x5e;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x5c;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecomponent");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecomponent");
  if (iVar12 == 0) {
    iVar12 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar12 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecomponent");
      local_8._0_1_ = 0x66;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar12 = FUN_00402460((int *)pbVar5);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar12 != 0) {
        do {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecomponent");
          local_64 = auStack_94;
          local_8._0_1_ = 0x67;
          uVar10 = uVar9;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          puVar6 = (undefined4 *)FUN_00402440(pbVar5,uVar10);
          FUN_004024e0(auStack_94,puVar6);
          local_8._0_1_ = 0x68;
          local_60 = (undefined4 *)&stack0xffffff44;
          FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
          local_8._0_1_ = 0x69;
          puVar6 = FUN_00412870();
          local_8._0_1_ = 0x67;
          FUN_00438b50(puVar6,in_stack_ffffff44);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removecomponent");
          local_8._0_1_ = 0x66;
          pbVar5 = FUN_0047d5c0((byte *)local_2c);
          uVar10 = FUN_00402460((int *)pbVar5);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar10);
      }
    }
  }
  else {
    local_64 = auStack_94;
    local_8._0_1_ = 99;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 100;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x65;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 99;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"beginquest");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar12 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"beginquest");
    local_64 = auStack_94;
    local_8._0_1_ = 0x6a;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x6b;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x6c;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x6a;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"completequest");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar12 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"completequest");
    local_64 = auStack_94;
    local_8._0_1_ = 0x6d;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x6e;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x6f;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x6d;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"failquest");
  iVar12 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar12 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"failquest");
    local_64 = auStack_94;
    local_8._0_1_ = 0x70;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x71;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x72;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x70;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"resetcontracts");
  local_8._0_1_ = 0x73;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar4 = FUN_00403260(pbVar5,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (cVar4 != '\0') {
    std::basic_string<>::basic_string<>(local_5c,"resetcontracts");
    local_64 = auStack_94;
    local_8._0_1_ = 0x74;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    FUN_004024e0(auStack_94,(undefined4 *)pbVar5);
    local_8._0_1_ = 0x75;
    local_60 = (undefined4 *)&stack0xffffff44;
    FUN_004024e0(&stack0xffffff44,&DAT_006556d8);
    local_8._0_1_ = 0x76;
    puVar6 = FUN_00412870();
    local_8._0_1_ = 0x74;
    FUN_00438b50(puVar6,in_stack_ffffff44);
    FUN_00401b20((int *)local_5c);
  }
  DAT_0065b3b0 = DAT_0065b3b0 + 1;
  FUN_00401b20((int *)local_44);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
