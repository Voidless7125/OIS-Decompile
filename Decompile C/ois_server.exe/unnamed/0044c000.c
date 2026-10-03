#include "../ois_server.exe.h"


void FUN_0044cc10(void)

{
  undefined4 *puVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  void *pvVar8;
  void *in_stack_ffffff74;
  int *local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [3];
  undefined1 local_38 [4];
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b46c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_005adb0f(0x48);
  local_34 = 0;
  *piVar2 = 1;
  *(undefined1 *)(piVar2 + 1) = 0;
  piVar2[6] = 0;
  piVar2[7] = 0xf;
  *(undefined1 *)(piVar2 + 2) = 0;
  piVar2[9] = 0;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 2;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_64 = piVar2;
  FUN_00402690(local_44,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  piVar2[8] = iVar4;
  local_8 = 0xffffffff;
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
  FUN_00402690(local_44,"category",8);
  local_8 = 1;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  pbVar3 = pbVar5;
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar3 = *(byte **)pbVar5;
  }
  uVar6 = FUN_004031f0(pbVar3,*(uint *)(pbVar5 + 0x10),(byte *)"nebula",6);
  local_8 = 0xffffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  *piVar2 = ((char)uVar6 != '\0') + 1;
  FUN_00402690(local_2c,"damageamount",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar6 = local_30;
  iVar4 = 0;
  local_60 = local_34;
  while (local_60 != uVar6) {
    iVar4 = iVar4 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar4 != 0) {
    *(undefined1 *)(piVar2 + 1) = 1;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"damageamount",0xc);
    local_8 = 2;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff74,(undefined4 *)pbVar3);
    piVar7 = FUN_00592700(local_38,in_stack_ffffff74);
    *(undefined8 *)(piVar2 + 0xd) = *(undefined8 *)piVar7;
    piVar2[0xf] = piVar7[2];
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
    FUN_00402690(local_2c,"damagetime",10);
    local_8 = 3;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff74,(undefined4 *)pbVar3);
    piVar7 = FUN_00592700(local_38,in_stack_ffffff74);
    *(undefined8 *)(piVar2 + 9) = *(undefined8 *)piVar7;
    piVar2[0xb] = piVar7[2];
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"damagetype",10);
  local_8 = 4;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar3 = pbVar5;
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar3 = *(byte **)pbVar5;
  }
  uVar6 = FUN_004031f0(pbVar3,*(uint *)(pbVar5 + 0x10),(byte *)"physical",8);
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
  if ((char)uVar6 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"damagetype",10);
    local_8 = 5;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar3 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar3 = *(byte **)pbVar5;
    }
    uVar6 = FUN_004031f0(pbVar3,*(uint *)(pbVar5 + 0x10),(byte *)"electrical",10);
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
    if ((char)uVar6 == '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"damagetype",10);
      local_8 = 6;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar3 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar3 = *(byte **)pbVar5;
      }
      uVar6 = FUN_004031f0(pbVar3,*(uint *)(pbVar5 + 0x10),(byte *)"gravitic",8);
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
      if ((char)uVar6 != '\0') {
        piVar2[0xc] = 4;
      }
    }
    else {
      piVar2[0xc] = 3;
    }
  }
  else {
    piVar2[0xc] = 2;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emissionsoutof",0xe);
  local_8 = 7;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  piVar2[0x10] = iVar4;
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
  FUN_00402690(local_2c,"emissionsinto",0xd);
  local_8 = 8;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  iVar4 = atoi((char *)pbVar3);
  piVar2[0x11] = iVar4;
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
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,&DAT_005e431c,4);
  local_8 = 9;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  if ((byte *)(piVar2 + 2) != pbVar3) {
    pbVar5 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar5 = *(byte **)pbVar3;
    }
    FUN_00402690(piVar2 + 2,pbVar5,*(uint *)(pbVar3 + 0x10));
  }
  local_8 = 0xffffffff;
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
  iVar4 = DAT_0065b5cc;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  puVar1 = *(undefined4 **)(DAT_0065b5cc + 0x58);
  if (*(undefined4 **)(DAT_0065b5cc + 0x5c) == puVar1) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x54),puVar1,&local_64);
  }
  else {
    *puVar1 = piVar2;
    *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0044d360(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  void *pvVar12;
  uint uVar13;
  byte *in_stack_ffffff78;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  byte *local_4c;
  int local_48;
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
  puStack_c = &LAB_005b4738;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = (int *)FUN_005adb0f(0x60);
  local_1c = 0;
  pbVar9 = (byte *)(piVar6 + 1);
  local_4c = (byte *)(piVar6 + 10);
  piVar1 = piVar6 + 7;
  *piVar6 = -1;
  piVar6[5] = 0;
  piVar6[6] = 0xf;
  *pbVar9 = 0;
  *piVar1 = 0;
  piVar6[8] = 0;
  piVar6[9] = 0;
  piVar6[0xe] = 0;
  piVar6[0xf] = 0xf;
  *local_4c = 0;
  local_54 = piVar6 + 0x10;
  piVar6[0x14] = 0;
  piVar6[0x15] = 0xf;
  *(undefined1 *)local_54 = 0;
  piVar6[0x16] = 0;
  piVar6[0x17] = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_58 = piVar6;
  local_50 = piVar6;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar7 + 0x14)) {
    pbVar7 = *(byte **)pbVar7;
  }
  iVar8 = atoi((char *)pbVar7);
  *piVar6 = iVar8;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_0044d481;
    FUN_005adb3f(pvVar12);
  }
  if (*(int *)(DAT_0065b444 + 0x50) < *piVar6) {
    *(int *)(DAT_0065b444 + 0x50) = *piVar6;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 1;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar9 != pbVar7) {
    pbVar11 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar11 = *(byte **)pbVar7;
    }
    FUN_00402690(pbVar9,pbVar11,*(uint *)(pbVar7 + 0x10));
  }
  local_8 = 0xffffffff;
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
  FUN_00402690(local_2c,"shortname",9);
  FUN_00419820(&DAT_0065b530,&local_60,(byte *)local_2c);
  iVar8 = 0;
  local_48 = local_60;
  while (local_48 != local_5c) {
    iVar8 = iVar8 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  FUN_00402690(local_2c,"shortname",9);
  if (iVar8 == 0) {
    iVar8 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar8 != 0) {
      uVar13 = 0;
      local_48 = 0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"shortname",9);
        local_8 = 3;
        pbVar9 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar9 + 4);
        iVar3 = *(int *)pbVar9;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_0044d481;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar8 - iVar3) / 0x18) <= uVar13) goto LAB_0044d65b;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"shortname",9);
        local_8 = 4;
        pbVar9 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = local_48;
        piVar2 = (int *)piVar6[8];
        if ((int *)piVar6[9] == piVar2) {
          FUN_00403840(piVar1,piVar2,(undefined4 *)(*(int *)pbVar9 + local_48));
        }
        else {
          FUN_004024e0(piVar2,(undefined4 *)(*(int *)pbVar9 + local_48));
          piVar6[8] = piVar6[8] + 0x18;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_0044d481;
          FUN_005adb3f(pvVar12);
        }
        uVar13 = uVar13 + 1;
        local_48 = iVar8 + 0x18;
      } while( true );
    }
    FUN_00591070("ERROR","Good has no descriptor.");
    bVar5 = cc_assert_script_compatible("ERROR: good has no descriptor.");
    if (!bVar5) {
      cocos2d::log("Assert failed: %s");
    }
    piVar6 = local_54;
    if (0xf < (uint)local_54[5]) {
      pvVar12 = (void *)*local_54;
      pvVar10 = pvVar12;
      if ((0xfff < local_54[5] + 1U) &&
         (pvVar10 = *(void **)((int)pvVar12 + -4), 0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar10))
         )) goto LAB_0044d481;
      FUN_005adb3f(pvVar10);
    }
    pbVar9 = local_4c;
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
    if (0xf < *(uint *)(local_4c + 0x14)) {
      pvVar12 = *(void **)local_4c;
      pvVar10 = pvVar12;
      if ((0xfff < *(uint *)(local_4c + 0x14) + 1) &&
         (pvVar10 = *(void **)((int)pvVar12 + -4), 0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar10))
         )) goto LAB_0044d481;
      FUN_005adb3f(pvVar10);
    }
    pbVar9[0x10] = 0;
    pbVar9[0x11] = 0;
    pbVar9[0x12] = 0;
    pbVar9[0x13] = 0;
    pbVar9[0x14] = 0xf;
    pbVar9[0x15] = 0;
    pbVar9[0x16] = 0;
    pbVar9[0x17] = 0;
    *pbVar9 = 0;
    FUN_004025a0(piVar1);
    piVar1 = local_50;
    if (0xf < (uint)local_50[6]) {
      pvVar12 = (void *)local_50[1];
      pvVar10 = pvVar12;
      if ((0xfff < local_50[6] + 1U) &&
         (pvVar10 = *(void **)((int)pvVar12 + -4), 0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar10))
         )) {
LAB_0044d481:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    piVar1[5] = 0;
    piVar1[6] = 0xf;
    *(undefined1 *)(piVar1 + 1) = 0;
    FUN_005adb3f(piVar1);
  }
  else {
    local_8 = 2;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    piVar2 = (int *)piVar6[8];
    if ((int *)piVar6[9] == piVar2) {
      FUN_00403840(piVar1,piVar2,(undefined4 *)pbVar9);
    }
    else {
      FUN_004024e0(piVar2,(undefined4 *)pbVar9);
      piVar6[8] = piVar6[8] + 0x18;
    }
    local_8 = 0xffffffff;
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
LAB_0044d65b:
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e986c,4);
    local_8 = 5;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (local_4c != pbVar9) {
      pbVar7 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar7 = *(byte **)pbVar9;
      }
      FUN_00402690(local_4c,pbVar7,*(uint *)(pbVar9 + 0x10));
    }
    local_8 = 0xffffffff;
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
    FUN_00402690(local_2c,"basecost",8);
    local_8 = 6;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar9 + 0x14)) {
      pbVar9 = *(byte **)pbVar9;
    }
    iVar8 = atoi((char *)pbVar9);
    piVar1 = local_50;
    local_8 = 0xffffffff;
    local_50[0x16] = iVar8 * 5;
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
    FUN_00402690(local_2c,"description",0xb);
    local_8 = 7;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if ((byte *)(piVar1 + 0x10) != pbVar9) {
      pbVar7 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar7 = *(byte **)pbVar9;
      }
      FUN_00402690(piVar1 + 0x10,pbVar7,*(uint *)(pbVar9 + 0x10));
    }
    local_8 = 0xffffffff;
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
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"cargotype",9);
    local_8 = 8;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar9);
    iVar8 = FUN_00507890(in_stack_ffffff78);
    piVar1[0x17] = iVar8;
    local_8 = 0xffffffff;
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
    iVar8 = DAT_0065b5cc;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x88);
    if (*(undefined4 **)(DAT_0065b5cc + 0x8c) == puVar4) {
      FUN_00414080((void *)(DAT_0065b5cc + 0x84),puVar4,&local_58);
    }
    else {
      *puVar4 = piVar1;
      *(int *)(iVar8 + 0x88) = *(int *)(iVar8 + 0x88) + 4;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0044db90(void)

{
  int *piVar1;
  undefined1 uVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  basic_string<> *pbVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *_Dst;
  basic_string<> *pbVar14;
  byte *pbVar15;
  int *piVar16;
  void *this;
  int iVar17;
  int *piVar18;
  undefined8 uVar19;
  double dVar20;
  byte *in_stack_fffffebc;
  undefined4 local_120 [2];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  int local_104;
  basic_string<> *local_100;
  int *local_fc;
  int local_f8;
  int local_f4;
  byte *local_f0;
  byte *local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  byte *local_d8;
  int *local_d4;
  int *local_d0;
  basic_string<> *local_cc;
  void *local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  void *local_b0 [5];
  uint local_9c;
  void *local_98 [5];
  uint local_84;
  void *local_80 [5];
  uint local_6c;
  void *local_68 [5];
  uint local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  void *local_44 [3];
  char *local_38;
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b48f3;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b8 = 0;
  local_b4 = 0xf;
  local_c8[0] = (void *)((uint)local_c8[0] & 0xffffff00);
  FUN_00402690(local_c8,&DAT_005e98b0,2);
  local_cc = (basic_string<> *)&stack0xfffffebc;
  local_8 = 0;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_c8);
  FUN_004024e0(&stack0xfffffebc,(undefined4 *)pbVar4);
  local_8._0_1_ = 1;
  if (DAT_0065c288 == (void *)0x0) {
    local_100 = (basic_string<> *)FUN_005adb0f(300);
    local_8._0_1_ = 2;
    DAT_0065c288 = (void *)FUN_00485f60((undefined4 *)local_100);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pbVar4 = FUN_00486270(DAT_0065c288,'\x01',in_stack_fffffebc);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  local_f0 = pbVar4;
  if (0xf < local_b4) {
    pvVar6 = local_c8[0];
    if ((0xfff < local_b4 + 1) &&
       (pvVar6 = *(void **)((int)local_c8[0] + -4),
       0x1f < (uint)((int)local_c8[0] + (-4 - (int)pvVar6)))) {
LAB_0044dc91:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_b8 = 0;
  local_b4 = 0xf;
  local_c8[0] = (void *)((uint)local_c8[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"dockdesc",8);
  local_8 = 3;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 + 0x18 != pbVar5) {
    pbVar15 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar15 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar4 + 0x18,pbVar15,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
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
  FUN_00402690(local_2c,"faction",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_e4,(byte *)local_2c);
  piVar18 = local_e0;
  iVar17 = 0;
  local_d4 = local_e4;
  while (local_d4 != piVar18) {
    iVar17 = iVar17 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_d4)
    ;
  }
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
  if (iVar17 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"faction",7);
    iVar17 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
      FUN_005adb3f(pvVar6);
    }
    if (iVar17 == 0) goto LAB_0044e0f5;
    piVar18 = (int *)0x0;
    local_d4 = (int *)0x0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_dc = piVar18;
      FUN_00402690(local_2c,"faction",7);
      local_8 = 10;
      pbVar4 = FUN_0047d5c0((byte *)local_2c);
      iVar17 = *(int *)(pbVar4 + 4);
      iVar12 = *(int *)pbVar4;
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
        FUN_005adb3f(pvVar6);
      }
      if ((int *)((iVar17 - iVar12) / 0x18) <= piVar18) goto LAB_0044e0f5;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"faction",7);
      local_8 = 0xb;
      pbVar4 = FUN_0047d5c0((byte *)local_44);
      FUN_004024e0(&stack0xfffffebc,(undefined4 *)(*(int *)pbVar4 + (int)local_d4));
      FUN_00592d70(&local_e8,',',(undefined4 *)in_stack_fffffebc);
      local_8._0_1_ = 0xd;
      if (0xf < local_30) {
        pvVar6 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar6 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
        FUN_005adb3f(pvVar6);
      }
      local_cc = (basic_string<> *)&stack0xfffffebc;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_004024e0(&stack0xfffffebc,local_e8);
      local_8._0_1_ = 0xe;
      if (DAT_0065c290 == (undefined4 *)0x0) {
        DAT_0065c290 = (undefined4 *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      local_8._0_1_ = 0xd;
      pbVar4 = (byte *)FUN_004a0d10(DAT_0065c290,in_stack_fffffebc);
      local_ec = pbVar4;
      if (pbVar4 == (byte *)0x0) break;
      uVar9 = ((int)local_e4 - (int)local_e8) / 0x18;
      if (1 < uVar9) {
        pbVar5 = (byte *)(local_e8 + 6);
        if (0xf < (uint)local_e8[0xb]) {
          pbVar5 = (byte *)local_e8[6];
        }
        uVar7 = FUN_004031f0(pbVar5,local_e8[10],(byte *)"sandboxonly",0xb);
        if ((char)uVar7 == '\0') {
          if (1 < uVar9) {
            pbVar5 = (byte *)(local_e8 + 6);
            if (0xf < (uint)local_e8[0xb]) {
              pbVar5 = (byte *)local_e8[6];
            }
            uVar9 = FUN_004031f0(pbVar5,local_e8[10],(byte *)"always",6);
            if ((char)uVar9 != '\0') {
              local_1c = 0;
              local_18 = 0xf;
              local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
              FUN_00402690(local_2c,&DAT_005e98b0,2);
              local_8 = CONCAT31(local_8._1_3_,0x10);
              pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
              piVar18 = *(int **)(pbVar4 + 0xc0);
              if (*(int **)(pbVar4 + 0xc4) == piVar18) {
                pbVar15 = pbVar4 + 0xbc;
                goto LAB_0044e731;
              }
              FUN_004024e0(piVar18,(undefined4 *)pbVar5);
              *(int *)(pbVar4 + 0xc0) = *(int *)(pbVar4 + 0xc0) + 0x18;
              goto LAB_0044e736;
            }
          }
        }
        else {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,&DAT_005e98b0,2);
          local_8 = CONCAT31(local_8._1_3_,0xf);
          pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
          piVar18 = *(int **)(pbVar4 + 0xb4);
          if (*(int **)(pbVar4 + 0xb8) == piVar18) {
            pbVar15 = pbVar4 + 0xb0;
LAB_0044e731:
            FUN_00403840(pbVar15,piVar18,(undefined4 *)pbVar5);
          }
          else {
            FUN_004024e0(piVar18,(undefined4 *)pbVar5);
            *(int *)(pbVar4 + 0xb4) = *(int *)(pbVar4 + 0xb4) + 0x18;
          }
LAB_0044e736:
          local_8._0_1_ = 0xd;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
        }
      }
      puVar13 = *(undefined4 **)(local_f0 + 0x50);
      if (*(undefined4 **)(local_f0 + 0x54) == puVar13) {
        FUN_00414080(local_f0 + 0x4c,puVar13,&local_ec);
      }
      else {
        *puVar13 = pbVar4;
        *(int *)(local_f0 + 0x50) = *(int *)(local_f0 + 0x50) + 4;
      }
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      FUN_004025a0((int *)&local_e8);
      piVar18 = (int *)((int)local_dc + 1);
      local_d4 = local_d4 + 6;
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"faction",7);
    local_8 = 4;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffebc,(undefined4 *)pbVar4);
    FUN_00592d70(&local_e8,',',(undefined4 *)in_stack_fffffebc);
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
    local_cc = (basic_string<> *)&stack0xfffffebc;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_004024e0(&stack0xfffffebc,local_e8);
    local_8._0_1_ = 7;
    pvVar6 = (void *)FUN_00412490();
    local_8._0_1_ = 6;
    pbVar4 = (byte *)FUN_004a0d10(pvVar6,in_stack_fffffebc);
    local_ec = pbVar4;
    if (pbVar4 != (byte *)0x0) {
      uVar9 = ((int)local_e4 - (int)local_e8) / 0x18;
      if (1 < uVar9) {
        pbVar5 = (byte *)(local_e8 + 6);
        if (0xf < (uint)local_e8[0xb]) {
          pbVar5 = (byte *)local_e8[6];
        }
        uVar7 = FUN_004031f0(pbVar5,local_e8[10],(byte *)"sandboxonly",0xb);
        if ((char)uVar7 == '\0') {
          if (1 < uVar9) {
            pbVar5 = (byte *)(local_e8 + 6);
            if (0xf < (uint)local_e8[0xb]) {
              pbVar5 = (byte *)local_e8[6];
            }
            uVar9 = FUN_004031f0(pbVar5,local_e8[10],(byte *)"always",6);
            if ((char)uVar9 != '\0') {
              local_1c = 0;
              local_18 = 0xf;
              local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
              FUN_00402690(local_2c,&DAT_005e98b0,2);
              local_8 = CONCAT31(local_8._1_3_,9);
              pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
              piVar18 = *(int **)(pbVar4 + 0xc0);
              if (*(int **)(pbVar4 + 0xc4) == piVar18) {
                pbVar15 = pbVar4 + 0xbc;
                goto LAB_0044dfe2;
              }
              FUN_004024e0(piVar18,(undefined4 *)pbVar5);
              *(int *)(pbVar4 + 0xc0) = *(int *)(pbVar4 + 0xc0) + 0x18;
              goto LAB_0044dfe7;
            }
          }
        }
        else {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,&DAT_005e98b0,2);
          local_8 = CONCAT31(local_8._1_3_,8);
          pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
          piVar18 = *(int **)(pbVar4 + 0xb4);
          if (*(int **)(pbVar4 + 0xb8) == piVar18) {
            pbVar15 = pbVar4 + 0xb0;
LAB_0044dfe2:
            FUN_00403840(pbVar15,piVar18,(undefined4 *)pbVar5);
          }
          else {
            FUN_004024e0(piVar18,(undefined4 *)pbVar5);
            *(int *)(pbVar4 + 0xb4) = *(int *)(pbVar4 + 0xb4) + 0x18;
          }
LAB_0044dfe7:
          local_8._0_1_ = 6;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
            FUN_005adb3f(pvVar6);
          }
        }
      }
      puVar13 = *(undefined4 **)(local_f0 + 0x50);
      if (*(undefined4 **)(local_f0 + 0x54) == puVar13) {
        FUN_00414080(local_f0 + 0x4c,puVar13,&local_ec);
      }
      else {
        *puVar13 = pbVar4;
        *(int *)(local_f0 + 0x50) = *(int *)(local_f0 + 0x50) + 4;
      }
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      FUN_004025a0((int *)&local_e8);
LAB_0044e0f5:
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"commodity",9);
      iVar17 = FUN_0047d0f0((byte *)local_2c);
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
        FUN_005adb3f(pvVar6);
      }
      if (iVar17 != 0) {
        piVar18 = (int *)0x0;
        local_d4 = (int *)0x0;
        do {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_d0 = piVar18;
          FUN_00402690(local_2c,"commodity",9);
          local_8 = 0x11;
          pbVar4 = FUN_0047d5c0((byte *)local_2c);
          iVar17 = *(int *)(pbVar4 + 4);
          iVar12 = *(int *)pbVar4;
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          if ((int *)((iVar17 - iVar12) / 0x18) <= piVar18) break;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"commodity",9);
          local_8 = 0x12;
          pbVar4 = FUN_0047d5c0((byte *)local_2c);
          FUN_004024e0(&stack0xfffffebc,(undefined4 *)(*(int *)pbVar4 + (int)local_d4));
          FUN_00592d70(&local_e8,',',(undefined4 *)in_stack_fffffebc);
          local_8._0_1_ = 0x14;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_004024e0(local_68,local_e8);
          local_8._0_1_ = 0x15;
          piVar18 = local_e8 + 6;
          if (0xf < (uint)local_e8[0xb]) {
            piVar18 = (int *)*piVar18;
          }
          iVar17 = atoi((char *)piVar18);
          local_fc = (int *)(iVar17 * 5);
          FUN_004024e0(local_b0,local_e8 + 0xc);
          local_8._0_1_ = 0x16;
          FUN_004024e0(&stack0xfffffebc,local_b0);
          FUN_00592d70(&local_38,'_',(undefined4 *)in_stack_fffffebc);
          local_8._0_1_ = 0x17;
          pcVar8 = local_38;
          if (0xf < *(uint *)(local_38 + 0x14)) {
            pcVar8 = *(char **)local_38;
          }
          local_f8 = atoi(pcVar8);
          local_f8 = local_f8 * 5;
          pcVar8 = local_38 + 0x18;
          if (0xf < *(uint *)(local_38 + 0x2c)) {
            pcVar8 = *(char **)pcVar8;
          }
          local_f4 = atoi(pcVar8);
          pcVar8 = local_38 + 0x30;
          if (0xf < *(uint *)(local_38 + 0x44)) {
            pcVar8 = *(char **)pcVar8;
          }
          local_d8 = (byte *)atoi(pcVar8);
          FUN_004024e0(local_98,local_e8 + 0x12);
          local_8._0_1_ = 0x18;
          FUN_004024e0(&stack0xfffffebc,local_98);
          FUN_005913f0(&local_50,in_stack_fffffebc);
          FUN_004024e0(local_80,local_e8 + 0x18);
          local_8._0_1_ = 0x19;
          FUN_004024e0(&stack0xfffffebc,local_68);
          local_dc = (int *)FUN_004a8380(in_stack_fffffebc);
          if (local_dc != (int *)0x0) {
            if ((local_50 == 0) && (local_48 == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (!bVar3) {
              FUN_004024e0(&stack0xfffffebc,local_80);
              FUN_005913f0(&local_10c,in_stack_fffffebc);
              pbVar4 = local_f0;
              pbVar5 = local_f0 + 0x70;
              uVar9 = 0;
              iVar17 = *(int *)pbVar5;
              uVar7 = *(int *)(local_f0 + 0x74) - iVar17 >> 2;
              if (uVar7 != 0) {
                do {
                  piVar18 = *(int **)(iVar17 + uVar9 * 4);
                  iVar17 = *(int *)pbVar5;
                  if (piVar18[5] == *local_dc) goto LAB_0044e81f;
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar7);
              }
              piVar18 = (int *)0x0;
LAB_0044e81f:
              local_ec = pbVar5;
              if (piVar18 == (int *)0x0) {
                local_100 = (basic_string<> *)FUN_005adb0f(0x34);
                local_8._0_1_ = 0x1a;
                local_dc = FUN_0049bb20(local_100,*local_dc);
                local_8._0_1_ = 0x19;
                puVar13 = *(undefined4 **)(pbVar4 + 0x74);
                if (*(undefined4 **)(pbVar4 + 0x78) == puVar13) {
                  FUN_00414080(pbVar5,puVar13,&local_dc);
                  piVar18 = local_dc;
                }
                else {
                  *puVar13 = local_dc;
                  *(int *)(pbVar4 + 0x74) = *(int *)(pbVar4 + 0x74) + 4;
                  piVar18 = local_dc;
                }
              }
              *(undefined8 *)(piVar18 + 1) = local_10c;
              piVar18[3] = local_104;
              pbVar10 = (basic_string<> *)FUN_005adb0f(0x2c);
              *(int **)pbVar10 = local_fc;
              *(int *)(pbVar10 + 4) = local_f8;
              *(int *)(pbVar10 + 8) = local_50;
              *(int *)(pbVar10 + 0xc) = iStack_4c;
              *(int *)(pbVar10 + 0x10) = local_48;
              *(int *)(pbVar10 + 0x18) = local_f4;
              *(byte **)(pbVar10 + 0x1c) = local_d8;
              *(int *)(pbVar10 + 0x20) = 3;
              *(int *)(pbVar10 + 0x24) = 3;
              *(int *)(pbVar10 + 0x28) = 0;
              local_cc = pbVar10;
              iVar17 = FUN_00591370((int *)(pbVar10 + 8));
              *(int *)(pbVar10 + 0x14) = iVar17;
              iVar17 = (*(int *)(pbVar10 + 0x1c) * iVar17) / 2;
              *(int *)(pbVar10 + 0x20) = iVar17;
              *(int *)(pbVar10 + 0x24) = iVar17;
              *piVar18 = (int)pbVar10;
            }
          }
          local_8._0_1_ = 0x18;
          if (0xf < local_6c) {
            pvVar6 = local_80[0];
            if ((0xfff < local_6c + 1) &&
               (pvVar6 = *(void **)((int)local_80[0] + -4),
               0x1f < (uint)((int)local_80[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_8._0_1_ = 0x17;
          if (0xf < local_84) {
            pvVar6 = local_98[0];
            if ((0xfff < local_84 + 1) &&
               (pvVar6 = *(void **)((int)local_98[0] + -4),
               0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          FUN_004025a0((int *)&local_38);
          local_8._0_1_ = 0x15;
          if (0xf < local_9c) {
            pvVar6 = local_b0[0];
            if ((0xfff < local_9c + 1) &&
               (pvVar6 = *(void **)((int)local_b0[0] + -4),
               0x1f < (uint)((int)local_b0[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_8._0_1_ = 0x14;
          if (0xf < local_54) {
            pvVar6 = local_68[0];
            if ((0xfff < local_54 + 1) &&
               (pvVar6 = *(void **)((int)local_68[0] + -4),
               0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          FUN_004025a0((int *)&local_e8);
          piVar18 = (int *)((int)local_d0 + 1);
          local_d4 = local_d4 + 6;
        } while( true );
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"wirecommodity",0xd);
      iVar17 = FUN_0047d0f0((byte *)local_2c);
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
        FUN_005adb3f(pvVar6);
      }
      if (iVar17 != 0) {
        piVar18 = (int *)0x0;
        local_d4 = (int *)0x0;
        do {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_dc = piVar18;
          FUN_00402690(local_2c,"wirecommodity",0xd);
          local_8 = 0x1b;
          pbVar4 = FUN_0047d5c0((byte *)local_2c);
          iVar17 = *(int *)(pbVar4 + 4);
          iVar12 = *(int *)pbVar4;
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          if ((int *)((iVar17 - iVar12) / 0x18) <= piVar18) break;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"wirecommodity",0xd);
          local_8 = 0x1c;
          pbVar4 = FUN_0047d5c0((byte *)local_2c);
          FUN_004024e0(&stack0xfffffebc,(undefined4 *)(*(int *)pbVar4 + (int)local_d4));
          FUN_00592d70(&local_e8,',',(undefined4 *)in_stack_fffffebc);
          local_8._0_1_ = 0x1e;
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_004024e0(local_80,local_e8);
          local_8._0_1_ = 0x1f;
          piVar18 = local_e8 + 6;
          if (0xf < (uint)local_e8[0xb]) {
            piVar18 = (int *)*piVar18;
          }
          local_f4 = atoi((char *)piVar18);
          local_f4 = local_f4 * 5;
          FUN_004024e0(local_98,local_e8 + 0xc);
          local_8._0_1_ = 0x20;
          FUN_004024e0(&stack0xfffffebc,local_98);
          FUN_00592d70(&local_38,'_',(undefined4 *)in_stack_fffffebc);
          local_8._0_1_ = 0x21;
          pcVar8 = local_38;
          if (0xf < *(uint *)(local_38 + 0x14)) {
            pcVar8 = *(char **)local_38;
          }
          local_f8 = atoi(pcVar8);
          local_f8 = local_f8 * 5;
          pcVar8 = local_38 + 0x18;
          if (0xf < *(uint *)(local_38 + 0x2c)) {
            pcVar8 = *(char **)pcVar8;
          }
          local_fc = (int *)atoi(pcVar8);
          pcVar8 = local_38 + 0x30;
          if (0xf < *(uint *)(local_38 + 0x44)) {
            pcVar8 = *(char **)pcVar8;
          }
          local_ec = (byte *)atoi(pcVar8);
          FUN_004024e0(local_b0,local_e8 + 0x12);
          local_8._0_1_ = 0x22;
          FUN_004024e0(&stack0xfffffebc,local_b0);
          FUN_005913f0(&local_50,in_stack_fffffebc);
          FUN_004024e0(local_68,local_e8 + 0x18);
          local_8._0_1_ = 0x23;
          FUN_004024e0(&stack0xfffffebc,local_80);
          local_d0 = (int *)FUN_004a8380(in_stack_fffffebc);
          if (local_d0 != (int *)0x0) {
            if ((local_50 == 0) && (local_48 == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (!bVar3) {
              FUN_004024e0(&stack0xfffffebc,local_68);
              FUN_005913f0(&local_10c,in_stack_fffffebc);
              pbVar4 = local_f0;
              pbVar5 = local_f0 + 0x88;
              uVar9 = 0;
              iVar17 = *(int *)pbVar5;
              uVar7 = *(int *)(local_f0 + 0x8c) - iVar17 >> 2;
              if (uVar7 != 0) {
                do {
                  piVar18 = *(int **)(iVar17 + uVar9 * 4);
                  iVar17 = *(int *)pbVar5;
                  if (piVar18[5] == *local_d0) goto LAB_0044ed60;
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar7);
              }
              piVar18 = (int *)0x0;
LAB_0044ed60:
              local_d8 = pbVar5;
              if (piVar18 == (int *)0x0) {
                local_100 = (basic_string<> *)FUN_005adb0f(0x34);
                local_8._0_1_ = 0x24;
                local_d0 = FUN_0049bb20(local_100,*local_d0);
                local_8._0_1_ = 0x23;
                puVar13 = *(undefined4 **)(pbVar4 + 0x8c);
                if (*(undefined4 **)(pbVar4 + 0x90) == puVar13) {
                  FUN_00414080(pbVar5,puVar13,&local_d0);
                  piVar18 = local_d0;
                }
                else {
                  *puVar13 = local_d0;
                  *(int *)(pbVar4 + 0x8c) = *(int *)(pbVar4 + 0x8c) + 4;
                  piVar18 = local_d0;
                }
              }
              *(undefined8 *)(piVar18 + 1) = local_10c;
              piVar18[3] = local_104;
              pbVar10 = (basic_string<> *)FUN_005adb0f(0x2c);
              *(int *)pbVar10 = local_f4;
              *(int *)(pbVar10 + 4) = local_f8;
              *(int *)(pbVar10 + 8) = local_50;
              *(int *)(pbVar10 + 0xc) = iStack_4c;
              *(int *)(pbVar10 + 0x10) = local_48;
              *(int **)(pbVar10 + 0x18) = local_fc;
              *(byte **)(pbVar10 + 0x1c) = local_ec;
              *(int *)(pbVar10 + 0x20) = 3;
              *(int *)(pbVar10 + 0x24) = 3;
              *(int *)(pbVar10 + 0x28) = 0;
              local_cc = pbVar10;
              iVar17 = FUN_00591370((int *)(pbVar10 + 8));
              *(int *)(pbVar10 + 0x14) = iVar17;
              iVar17 = (*(int *)(pbVar10 + 0x1c) * iVar17) / 2;
              *(int *)(pbVar10 + 0x20) = iVar17;
              *(int *)(pbVar10 + 0x24) = iVar17;
              *piVar18 = (int)pbVar10;
            }
          }
          local_8._0_1_ = 0x22;
          if (0xf < local_54) {
            pvVar6 = local_68[0];
            if ((0xfff < local_54 + 1) &&
               (pvVar6 = *(void **)((int)local_68[0] + -4),
               0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_8._0_1_ = 0x21;
          if (0xf < local_9c) {
            pvVar6 = local_b0[0];
            if ((0xfff < local_9c + 1) &&
               (pvVar6 = *(void **)((int)local_b0[0] + -4),
               0x1f < (uint)((int)local_b0[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          FUN_004025a0((int *)&local_38);
          local_8._0_1_ = 0x1f;
          if (0xf < local_84) {
            pvVar6 = local_98[0];
            if ((0xfff < local_84 + 1) &&
               (pvVar6 = *(void **)((int)local_98[0] + -4),
               0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_8._0_1_ = 0x1e;
          if (0xf < local_6c) {
            pvVar6 = local_80[0];
            if ((0xfff < local_6c + 1) &&
               (pvVar6 = *(void **)((int)local_80[0] + -4),
               0x1f < (uint)((int)local_80[0] + (-4 - (int)pvVar6)))) goto LAB_0044dc91;
            FUN_005adb3f(pvVar6);
          }
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          FUN_004025a0((int *)&local_e8);
          piVar18 = (int *)((int)local_dc + 1);
          local_d4 = local_d4 + 6;
        } while( true );
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"shipbuycost",0xb);
      FUN_00419820(&DAT_0065b530,(int *)&local_e4,(byte *)local_2c);
      piVar18 = local_e0;
      iVar17 = 0;
      local_d0 = local_e4;
      while (local_d0 != piVar18) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_d0);
      }
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
        FUN_005adb3f(pvVar6);
      }
      if (iVar17 != 0) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"shipbuycost",0xb);
        local_8 = 0x25;
        pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        if (0xf < *(uint *)(pbVar4 + 0x14)) {
          pbVar4 = *(byte **)pbVar4;
        }
        dVar20 = atof((char *)pbVar4);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        *(float *)(local_f0 + 0x48) = (float)dVar20;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
          FUN_005adb3f(pvVar6);
        }
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"ships",5);
      FUN_00419820(&DAT_0065b530,(int *)&local_e4,(byte *)local_2c);
      iVar17 = 0;
      local_d0 = local_e4;
      while (local_d0 != local_e0) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_d0);
      }
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0044e01d;
        FUN_005adb3f(pvVar6);
      }
      if (iVar17 == 0) {
        std::basic_string<>::basic_string<>((basic_string<> *)local_68,"ships");
        iVar17 = FUN_0047d0f0((byte *)local_68);
        FUN_00401b20((int *)local_68);
        if (iVar17 != 0) {
          piVar18 = (int *)0x0;
          local_dc = (int *)0x0;
          std::basic_string<>::basic_string<>((basic_string<> *)local_68,"ships");
          local_8 = 0x2a;
          pbVar4 = FUN_0047d5c0((byte *)local_68);
          iVar17 = FUN_00402460((int *)pbVar4);
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          FUN_00401b20((int *)local_68);
          if (iVar17 != 0) {
            do {
              std::basic_string<>::basic_string<>((basic_string<> *)local_68,"ships");
              local_8 = 0x2b;
              pbVar4 = FUN_0047d5c0((byte *)local_68);
              puVar13 = (undefined4 *)FUN_00402440(pbVar4,(int)piVar18);
              FUN_004024e0(&stack0xfffffebc,puVar13);
              FUN_00592d70(&local_50,',',(undefined4 *)in_stack_fffffebc);
              local_8 = CONCAT31(local_8._1_3_,0x2d);
              FUN_00401b20((int *)local_68);
              local_cc = (basic_string<> *)FUN_005adb0f(0x18);
              *(int *)local_cc = 0;
              *(int *)(local_cc + 4) = 0;
              *(int *)(local_cc + 8) = 0;
              *(int *)(local_cc + 0xc) = 0;
              *(undefined8 *)(local_cc + 0x10) = 0;
              piVar18 = FUN_0044f8f0((undefined4 *)local_cc);
              local_d0 = piVar18;
              puVar13 = (undefined4 *)FUN_00402440(&local_50,0);
              FUN_004024e0(&stack0xfffffebc,puVar13);
              piVar11 = FUN_00592840(&local_38,in_stack_fffffebc);
              iVar17 = piVar11[1];
              *piVar18 = *piVar11;
              piVar18[1] = iVar17;
              piVar18[2] = piVar11[2];
              pbVar4 = (byte *)0x1;
              local_ec = (byte *)0x1;
              uVar9 = FUN_00402460(&local_50);
              if (1 < uVar9) {
                do {
                  puVar13 = (undefined4 *)FUN_00402440(&local_50,(int)pbVar4);
                  FUN_004024e0(&stack0xfffffebc,puVar13);
                  FUN_00592d70((undefined4 *)&local_10c,':',(undefined4 *)in_stack_fffffebc);
                  local_8 = CONCAT31(local_8._1_3_,0x2e);
                  _Dst = (undefined1 *)FUN_005adb0f(0x30);
                  memset(_Dst,0,0x30);
                  pbVar10 = (basic_string<> *)FUN_0044f920(_Dst);
                  local_cc = pbVar10;
                  iVar17 = FUN_00402460((int *)&local_10c);
                  if (iVar17 == 1) {
                    pbVar14 = (basic_string<> *)FUN_00402440(this,0);
                    std::basic_string<>::operator=(pbVar10,pbVar14);
                    puVar13 = (undefined4 *)FUN_004131e0(pbVar10,&local_100);
                    std::basic_string<>::end(pbVar10);
                    uVar19 = FUN_004131e0(pbVar10,&local_f4);
                    FUN_00413ec0(&local_f8,tolower_exref,(char *)*(undefined4 *)uVar19,
                                 (char *)*(undefined4 *)((ulonglong)uVar19 >> 0x20),
                                 (undefined1 *)*puVar13);
                    SimpleString::operator=((SimpleString *)(pbVar10 + 0x18),"stock");
                  }
                  else {
                    pbVar14 = (basic_string<> *)FUN_00402440(this,0);
                    std::basic_string<>::operator=(pbVar10,pbVar14);
                    puVar13 = (undefined4 *)FUN_004131e0(pbVar10,&local_fc);
                    std::basic_string<>::end(pbVar10);
                    uVar19 = FUN_004131e0(pbVar10,&local_110);
                    FUN_00413ec0(&local_114,tolower_exref,(char *)*(undefined4 *)uVar19,
                                 (char *)*(undefined4 *)((ulonglong)uVar19 >> 0x20),
                                 (undefined1 *)*puVar13);
                    pbVar10 = pbVar10 + 0x18;
                    pbVar14 = (basic_string<> *)FUN_00402440(&local_10c,1);
                    std::basic_string<>::operator=(pbVar10,pbVar14);
                    puVar13 = (undefined4 *)FUN_004131e0(pbVar10,&local_118);
                    std::basic_string<>::end(pbVar10);
                    uVar19 = FUN_004131e0(pbVar10,local_120);
                    FUN_00413ec0(&local_e0,tolower_exref,(char *)*(undefined4 *)uVar19,
                                 (char *)*(undefined4 *)((ulonglong)uVar19 >> 0x20),
                                 (undefined1 *)*puVar13);
                  }
                  FUN_00412900(local_d0 + 3,&local_cc);
                  local_8 = CONCAT31(local_8._1_3_,0x2d);
                  FUN_004025a0((int *)&local_10c);
                  pbVar4 = local_ec + 1;
                  local_ec = pbVar4;
                  pbVar5 = (byte *)FUN_00402460(&local_50);
                } while (pbVar4 < pbVar5);
              }
              FUN_00412900(local_f0 + 0x30,&local_d0);
              local_8 = 0xffffffff;
              FUN_004025a0(&local_50);
              piVar18 = (int *)((int)local_dc + 1);
              local_dc = piVar18;
              std::basic_string<>::basic_string<>((basic_string<> *)local_68,"ships");
              local_8 = 0x2a;
              pbVar4 = FUN_0047d5c0((byte *)local_68);
              piVar11 = (int *)FUN_00402460((int *)pbVar4);
              local_8._0_1_ = 0xff;
              local_8._1_3_ = 0xffffff;
              FUN_00401b20((int *)local_68);
            } while (piVar18 < piVar11);
          }
          FUN_0049f3a0(local_f0);
        }
      }
      else {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"ships",5);
        local_8 = 0x26;
        pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        FUN_004024e0(&stack0xfffffebc,(undefined4 *)pbVar4);
        FUN_00592d70(&local_38,',',(undefined4 *)in_stack_fffffebc);
        local_8._0_1_ = 0x28;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 0x28;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_0044e01d:
            local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        pbVar10 = (basic_string<> *)FUN_005adb0f(0x18);
        local_100 = pbVar10 + 0xc;
        *(int *)pbVar10 = 0;
        *(int *)(pbVar10 + 4) = 0;
        *(int *)(pbVar10 + 8) = 0;
        *(int *)(pbVar10 + 0xc) = 0;
        *(undefined8 *)(pbVar10 + 0x10) = 0;
        *(int *)pbVar10 = 0;
        *(int *)(pbVar10 + 4) = 0;
        *(int *)(pbVar10 + 8) = 0;
        *(int *)local_100 = 0;
        *(int *)(pbVar10 + 0x10) = 0;
        *(int *)(pbVar10 + 0x14) = 0;
        local_cc = pbVar10;
        FUN_004024e0(&stack0xfffffebc,(undefined4 *)local_38);
        piVar18 = FUN_00592840(&local_50,in_stack_fffffebc);
        local_ec = (byte *)0x1;
        *(undefined8 *)pbVar10 = *(undefined8 *)piVar18;
        *(int *)(pbVar10 + 8) = piVar18[2];
        if (1 < (uint)((local_34 - (int)local_38) / 0x18)) {
          local_d4 = (int *)0x18;
          do {
            FUN_004024e0(&stack0xfffffebc,(undefined4 *)(local_38 + (int)local_d4));
            FUN_00592d70(&local_e8,':',(undefined4 *)in_stack_fffffebc);
            local_8 = CONCAT31(local_8._1_3_,0x29);
            piVar11 = (int *)FUN_005adb0f(0x30);
            memset(piVar11,0,0x30);
            piVar11[5] = 0xf;
            piVar18 = piVar11 + 6;
            piVar11[10] = 0;
            piVar11[0xb] = 0xf;
            *(char *)piVar18 = '\0';
            local_fc = piVar11;
            local_dc = piVar18;
            if (((int)local_e4 - (int)local_e8) / 0x18 == 1) {
              if (piVar11 != local_e8) {
                piVar16 = local_e8;
                if (0xf < (uint)local_e8[5]) {
                  piVar16 = (int *)*local_e8;
                }
                FUN_00402690(piVar11,piVar16,local_e8[4]);
              }
              local_d0 = piVar11;
              piVar16 = piVar11;
              if (0xf < (uint)piVar11[5]) {
                piVar16 = (int *)*piVar11;
                local_d0 = (int *)*piVar11;
              }
              piVar1 = piVar11 + 4;
              if (0xf < (uint)piVar11[5]) {
                piVar11 = (int *)*piVar11;
              }
              local_d8 = (byte *)0x0;
              local_f4 = 0;
              local_f8 = (*piVar1 + (int)local_d0) - (int)piVar11;
              if ((int *)(*piVar1 + (int)local_d0) < piVar11) {
                local_f8 = 0;
              }
              if (local_f8 != 0) {
                iVar17 = 0;
                local_d8 = (byte *)((int)piVar16 - (int)piVar11);
                do {
                  iVar12 = tolower((int)(char)*piVar11);
                  iVar17 = iVar17 + 1;
                  *(byte *)((int)piVar11 + (int)local_d8) = (byte)iVar12;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar18 = local_dc;
                } while (iVar17 != local_f8);
              }
              FUN_00402690(piVar18,"stock",5);
            }
            else {
              if (piVar11 != local_e8) {
                piVar16 = local_e8;
                if (0xf < (uint)local_e8[5]) {
                  piVar16 = (int *)*local_e8;
                }
                FUN_00402690(piVar11,piVar16,local_e8[4]);
              }
              local_d0 = piVar11;
              piVar16 = piVar11;
              if (0xf < (uint)piVar11[5]) {
                piVar16 = (int *)*piVar11;
                local_d0 = (int *)*piVar11;
              }
              piVar1 = piVar11 + 4;
              if (0xf < (uint)piVar11[5]) {
                piVar11 = (int *)*piVar11;
              }
              local_d8 = (byte *)0x0;
              local_f4 = 0;
              local_f8 = (*piVar1 + (int)local_d0) - (int)piVar11;
              if ((int *)(*piVar1 + (int)local_d0) < piVar11) {
                local_f8 = 0;
              }
              if (local_f8 != 0) {
                iVar17 = 0;
                local_d8 = (byte *)((int)piVar16 - (int)piVar11);
                do {
                  iVar12 = tolower((int)(char)*piVar11);
                  iVar17 = iVar17 + 1;
                  *(byte *)((int)piVar11 + (int)local_d8) = (byte)iVar12;
                  piVar11 = (int *)((int)piVar11 + 1);
                  piVar18 = local_dc;
                } while (iVar17 != local_f8);
              }
              piVar11 = local_e8 + 6;
              if (piVar18 != piVar11) {
                if (0xf < (uint)local_e8[0xb]) {
                  piVar11 = (int *)*piVar11;
                }
                FUN_00402690(piVar18,piVar11,local_e8[10]);
              }
              piVar16 = piVar18;
              piVar11 = piVar18;
              if (0xf < (uint)piVar18[5]) {
                piVar11 = (int *)*piVar18;
                piVar16 = (int *)*piVar18;
              }
              piVar1 = piVar18 + 4;
              if (0xf < (uint)piVar18[5]) {
                piVar18 = (int *)*piVar18;
              }
              iVar17 = 0;
              local_f4 = (*piVar1 + (int)piVar16) - (int)piVar18;
              if ((int *)(*piVar1 + (int)piVar16) < piVar18) {
                local_f4 = 0;
              }
              if (local_f4 != 0) {
                local_d8 = (byte *)((int)piVar11 - (int)piVar18);
                do {
                  iVar12 = tolower((int)(char)*piVar18);
                  iVar17 = iVar17 + 1;
                  *(byte *)((int)piVar18 + (int)local_d8) = (byte)iVar12;
                  piVar18 = (int *)((int)piVar18 + 1);
                } while (iVar17 != local_f4);
              }
            }
            FUN_00412900(local_100,&local_fc);
            local_8._0_1_ = 0x28;
            FUN_004025a0((int *)&local_e8);
            local_d4 = local_d4 + 6;
            local_ec = local_ec + 1;
          } while (local_ec < (byte *)((local_34 - (int)local_38) / 0x18));
        }
        pbVar4 = local_f0;
        FUN_00412900(local_f0 + 0x30,&local_cc);
        FUN_0049f3a0(pbVar4);
        FUN_004025a0((int *)&local_38);
      }
      goto LAB_0044f8d4;
    }
  }
  FUN_00591070("ERROR","Invalid faction - \'%s\'");
  bVar3 = cc_assert_script_compatible("INVALID FACTION");
  if (!bVar3) {
    cocos2d::log("Assert failed: %s");
  }
  pbVar4 = local_f0;
  if (local_f0 != (byte *)0x0) {
    FUN_0049bbb0((int *)local_f0);
    FUN_005adb3f(pbVar4);
  }
  FUN_004025a0((int *)&local_e8);
LAB_0044f8d4:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __fastcall FUN_0044f8f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}


undefined1 * __fastcall FUN_0044f920(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  param_1[0x18] = 0;
  return param_1;
}


void __fastcall FUN_0044f950(uint param_1,int param_2,void *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  void **ppvVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  int *_Str;
  uint in_stack_00000018;
  char in_stack_0000001c;
  char in_stack_00000020;
  byte *in_stack_ffffff74;
  char *local_64 [3];
  int *local_58;
  int local_54;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4938;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_48 = param_1;
  local_44 = param_2;
  FUN_004024e0(&stack0xffffff74,&param_3);
  FUN_00592d70(&local_58,',',(undefined4 *)in_stack_ffffff74);
  _Str = local_58;
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((local_54 - (int)local_58) / 0x18 != 2) goto LAB_0044fb9f;
  uVar7 = 0;
  local_3c = 0;
  local_38 = 0;
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar3 = local_58;
  if (0xf < (uint)local_58[5]) {
    piVar3 = (int *)*local_58;
  }
  local_40 = param_1;
  uVar1 = FUN_0042eeb0((int)piVar3,local_58[4],0,&DAT_005e9c44,1);
  if (uVar1 == 0xffffffff) {
    if (0xf < (uint)_Str[5]) {
      _Str = (int *)*_Str;
    }
    uVar1 = atoi((char *)_Str);
    local_3c = uVar1;
  }
  else {
    FUN_004024e0(&stack0xffffff74,_Str);
    FUN_00592d70(local_64,'-',(undefined4 *)in_stack_ffffff74);
    pcVar2 = local_64[0];
    if (0xf < *(uint *)(local_64[0] + 0x14)) {
      pcVar2 = *(char **)local_64[0];
    }
    uVar1 = atoi(pcVar2);
    pcVar2 = local_64[0] + 0x18;
    if (0xf < *(uint *)(local_64[0] + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    local_3c = uVar1;
    uVar7 = atoi(pcVar2);
    local_38 = uVar7;
    FUN_004025a0((int *)local_64);
  }
  ppvVar5 = (void **)(local_58 + 6);
  if (in_stack_00000020 == '\0') {
    uVar4 = local_48;
    if (local_34 != ppvVar5) {
      if (0xf < (uint)local_58[0xb]) {
        ppvVar5 = *ppvVar5;
      }
      FUN_00402690(local_34,ppvVar5,local_58[10]);
      uVar4 = local_40;
      uVar7 = local_38;
      uVar1 = local_3c;
    }
  }
  else {
    FUN_004024e0(&stack0xffffff74,ppvVar5);
    local_1c = FUN_00557800(in_stack_ffffff74);
    uVar4 = local_48;
  }
  if (in_stack_0000001c == '\0') {
    puVar8 = *(uint **)(local_44 + 0x170);
    if (*(uint **)(local_44 + 0x174) == puVar8) {
      pvVar6 = (void *)(local_44 + 0x16c);
      goto LAB_0044fb63;
    }
    *puVar8 = uVar4;
    puVar8[1] = uVar1;
    puVar8[2] = uVar7;
    FUN_004024e0(puVar8 + 3,local_34);
    puVar8[9] = local_1c;
    *(undefined1 *)(puVar8 + 10) = local_18;
    *(int *)(local_44 + 0x170) = *(int *)(local_44 + 0x170) + 0x2c;
  }
  else {
    puVar8 = *(uint **)(local_44 + 0x17c);
    if (*(uint **)(local_44 + 0x180) == puVar8) {
      pvVar6 = (void *)(local_44 + 0x178);
LAB_0044fb63:
      FUN_0047e650(pvVar6,puVar8,&local_40);
    }
    else {
      *puVar8 = uVar4;
      puVar8[1] = uVar1;
      puVar8[2] = uVar7;
      FUN_004024e0(puVar8 + 3,local_34);
      puVar8[9] = local_1c;
      *(undefined1 *)(puVar8 + 10) = local_18;
      *(int *)(local_44 + 0x17c) = *(int *)(local_44 + 0x17c) + 0x2c;
    }
  }
  if (0xf < local_20) {
    pvVar6 = local_34[0];
    if ((0xfff < local_20 + 1) &&
       (pvVar6 = *(void **)((int)local_34[0] + -4),
       0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
LAB_0044fb9f:
  FUN_004025a0((int *)&local_58);
  if (0xf < in_stack_00000018) {
    pvVar6 = param_3;
    if ((0xfff < in_stack_00000018 + 1) &&
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


void __fastcall FUN_0044fc00(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x20)) {
    pvVar1 = *(void **)(param_1 + 0xc);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x20) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
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


void __cdecl FUN_0044fc50(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte ****ppppbVar7;
  int iVar8;
  byte ***local_40 [4];
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4968;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = (int *)FUN_005adb0f(0x10);
  *local_20 = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_18 = local_20;
  FUN_004024e0(local_40,param_1);
  iVar8 = 0;
  while( true ) {
    pbVar6 = (&PTR_DAT_005df7b4)[iVar8];
    local_14 = pbVar6 + 1;
    pbVar4 = pbVar6;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppppbVar7 = local_40;
    if (0xf < local_2c) {
      ppppbVar7 = (byte ****)local_40[0];
    }
    uVar5 = FUN_004031f0((byte *)ppppbVar7,local_30,pbVar6,(int)pbVar4 - (int)local_14);
    if ((char)uVar5 != '\0') break;
    iVar8 = iVar8 + 1;
    if (3 < iVar8) {
      if (0xf < local_2c) {
        ppppbVar7 = (byte ****)local_40[0];
        if (0xfff < local_2c + 1) {
          ppppbVar7 = (byte ****)local_40[0][-1];
          if ((byte *)0x1f < (byte *)((int)local_40[0] + (-4 - (int)ppppbVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(ppppbVar7);
      }
      iVar8 = 0;
LAB_0044fd69:
      uVar5 = 1;
      *local_18 = iVar8;
      if (1 < (uint)((param_2 - (int)param_1) / 0x18)) {
        local_14 = (byte *)0x18;
        do {
          pbVar6 = local_14 + (int)param_1;
          if (0xf < *(uint *)(pbVar6 + 0x14)) {
            pbVar6 = *(byte **)pbVar6;
          }
          local_28 = uVar5 - 1;
          local_24 = atoi((char *)pbVar6);
          piVar2 = (int *)local_18[2];
          if ((int *)local_18[3] == piVar2) {
            FUN_00421160(local_18 + 1,piVar2,&local_28);
          }
          else {
            *piVar2 = uVar5 - 1;
            piVar2[1] = local_24;
            local_18[2] = local_18[2] + 8;
          }
          uVar5 = uVar5 + 1;
          local_14 = local_14 + 0x18;
        } while (uVar5 < (uint)((param_2 - (int)param_1) / 0x18));
      }
      puVar3 = *(undefined4 **)(local_1c + 0x110);
      if (*(undefined4 **)(local_1c + 0x114) == puVar3) {
        FUN_00414080((void *)(local_1c + 0x10c),puVar3,&local_20);
      }
      else {
        *puVar3 = local_18;
        *(int *)(local_1c + 0x110) = *(int *)(local_1c + 0x110) + 4;
      }
      FUN_004025a0((int *)&param_1);
      ExceptionList = local_10;
      return;
    }
  }
  if (0xf < local_2c) {
    ppppbVar7 = (byte ****)local_40[0];
    if (0xfff < local_2c + 1) {
      ppppbVar7 = (byte ****)local_40[0][-1];
      if ((byte *)0x1f < (byte *)((int)local_40[0] + (-4 - (int)ppppbVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppbVar7);
  }
  goto LAB_0044fd69;
}


void __thiscall FUN_0044fe40(void *this,undefined4 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *_Str;
  int iVar4;
  byte *pbVar5;
  undefined1 uVar6;
  byte *in_stack_ffffffb8;
  int local_20;
  undefined4 uStack_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  puStack_c = &LAB_005b4998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = (param_2 - (int)param_1) / 0x18;
  if (1 < uVar3) {
    uVar6 = 0;
    if (2 < uVar3) {
      pbVar5 = (byte *)(param_1 + 0xc);
      if (0xf < (uint)param_1[0x11]) {
        pbVar5 = (byte *)param_1[0xc];
      }
      uVar3 = FUN_004031f0(pbVar5,param_1[0x10],(byte *)"critical",8);
      if ((char)uVar3 != '\0') {
        uVar6 = 1;
      }
    }
    _Str = (char *)(puVar2 + 6);
    if (0xf < (uint)puVar2[0xb]) {
      _Str = *(char **)_Str;
    }
    iVar4 = atoi(_Str);
    FUN_004024e0(&stack0xffffffb8,param_1);
    local_20 = FUN_00519b40(in_stack_ffffffb8);
    puVar1 = *(undefined8 **)((int)this + 0x11c);
    uStack_1c = CONCAT31(uStack_1c._1_3_,uVar6);
    local_18 = iVar4;
    if (*(undefined8 **)((int)this + 0x120) == puVar1) {
      FUN_0047de90((void *)((int)this + 0x118),puVar1,(undefined8 *)&local_20);
    }
    else {
      *puVar1 = CONCAT44(uStack_1c,local_20);
      *(int *)(puVar1 + 1) = iVar4;
      *(int *)((int)this + 0x11c) = *(int *)((int)this + 0x11c) + 0xc;
    }
  }
  FUN_004025a0((int *)&param_1);
  ExceptionList = local_10;
  return;
}


void FUN_0044ff40(void)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  basic_string<> *pbVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined2 in_FPUControlWord;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  byte *in_stack_ffffff3c;
  void *in_stack_ffffff44;
  byte *in_stack_ffffff4c;
  int in_stack_ffffff50;
  int iVar18;
  undefined4 *puVar19;
  void *pvVar20;
  undefined1 local_8c [16];
  Vec2 local_7c [8];
  undefined4 local_74;
  byte *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  int local_64;
  undefined4 local_60;
  basic_string<> local_5c [24];
  basic_string<> local_44 [12];
  char *local_38 [3];
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b4bec;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e99fc,4);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar2;
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar5 = *(byte **)pbVar2;
  }
  uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),(byte *)"weapon",6);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
LAB_0044ffec:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if ((char)uVar3 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e99fc,4);
    local_8 = 1;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar5 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar5 = *(byte **)pbVar2;
    }
    uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),(byte *)"jumpgate",8);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar20 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar20 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar20);
    }
    if ((char)uVar3 == '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e99fc,4);
      local_8 = 2;
      pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar5 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar5 = *(byte **)pbVar2;
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),(byte *)"starbase",8);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar20 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar20 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar20);
      }
      if ((char)uVar3 == '\0') {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e99fc,4);
        local_8 = 3;
        pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        pbVar5 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar5 = *(byte **)pbVar2;
        }
        uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),(byte *)"depot",5);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar20 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar20 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar20);
        }
        uVar12 = 0;
        if ((char)uVar3 != '\0') {
          uVar12 = 3;
        }
      }
      else {
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 2;
    }
  }
  else {
    uVar12 = 4;
  }
  local_70 = (byte *)FUN_005adb0f(0x194);
  local_8 = 4;
  pbVar2 = FUN_00519c60(local_70,uVar12);
  local_8 = 0xffffffff;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_70 = pbVar2;
  FUN_00402690(local_2c,"tutorialship",0xc);
  local_8 = 5;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar4;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar5 = *(byte **)pbVar4;
  }
  uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar4 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  cVar1 = (char)uVar3;
  local_60._3_1_ = cVar1;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (local_60._3_1_ != '\0') {
    pbVar2[0xe0] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emcon",5);
  local_8 = 6;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar4;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar5 = *(byte **)pbVar4;
  }
  uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar4 + 0x10),(byte *)"false",5);
  local_8 = 0xffffffff;
  local_60._3_1_ = (char)uVar3;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (local_60._3_1_ != '\0') {
    pbVar2[0xdf] = 0;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 7;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 8;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x18 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x18,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"category",8);
  local_8 = 9;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x30 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x30,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"manufacturer",0xc);
  local_8 = 10;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x78 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x78,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 0xb;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x48 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x48,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"description",0xb);
  local_8 = 0xc;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x90 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x90,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"batteryslots",0xc);
  local_8 = 0xd;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  *(int *)(pbVar2 + 0x150) = iVar6;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea100,2);
  local_8 = 0xe;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0xa8 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0xa8,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"uiprefix",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"uiprefix",8);
    local_8 = 0xf;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pbVar2[0xd0] = *pbVar5;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar20 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar20 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar20);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"uidefaultcolour",0xf);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"uidefaultcolour",0xf);
    local_8 = 0x10;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    in_stack_ffffff44 = (void *)0x4509a0;
    FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar5);
    FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar20 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar20 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar20);
    }
    pcVar7 = local_38[0];
    if (0xf < *(uint *)(local_38[0] + 0x14)) {
      pcVar7 = *(char **)local_38[0];
    }
    dVar17 = atof(pcVar7);
    local_60 = (undefined1 *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
    local_64 = (int)ROUND(dVar17);
    pbVar2[0xd1] = (byte)local_64;
    pcVar7 = local_38[0] + 0x18;
    if (0xf < *(uint *)(local_38[0] + 0x2c)) {
      pcVar7 = *(char **)pcVar7;
    }
    dVar17 = atof(pcVar7);
    local_60 = (undefined1 *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
    local_64 = (int)ROUND(dVar17);
    pbVar2[0xd2] = (byte)local_64;
    pcVar7 = local_38[0] + 0x30;
    if (0xf < *(uint *)(local_38[0] + 0x44)) {
      pcVar7 = *(char **)pcVar7;
    }
    dVar17 = atof(pcVar7);
    local_60 = (undefined1 *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
    local_64 = (int)ROUND(dVar17);
    pbVar2[0xd3] = (byte)local_64;
    FUN_004025a0((int *)local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emconcolour",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"emconcolour",0xb);
    local_8 = 0x11;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    in_stack_ffffff44 = (void *)0x450b6f;
    FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar5);
    FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pcVar7 = local_38[0];
    if (0xf < *(uint *)(local_38[0] + 0x14)) {
      pcVar7 = *(char **)local_38[0];
    }
    dVar17 = atof(pcVar7);
    local_60 = (undefined1 *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
    local_64 = (int)ROUND(dVar17);
    pbVar2[0xdc] = (byte)local_64;
    pcVar7 = local_38[0] + 0x18;
    if (0xf < *(uint *)(local_38[0] + 0x2c)) {
      pcVar7 = *(char **)pcVar7;
    }
    dVar17 = atof(pcVar7);
    local_60 = (undefined1 *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
    local_64 = (int)ROUND(dVar17);
    pbVar2[0xdd] = (byte)local_64;
    pcVar7 = local_38[0] + 0x30;
    if (0xf < *(uint *)(local_38[0] + 0x44)) {
      pcVar7 = *(char **)pcVar7;
    }
    dVar17 = atof(pcVar7);
    local_60 = (undefined1 *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
    local_64 = (int)ROUND(dVar17);
    pbVar2[0xde] = (byte)local_64;
    FUN_004025a0((int *)local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"dockedmessagelocation",0x15);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"dockedmessagelocation",0x15);
    local_8 = 0x12;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    in_stack_ffffff44 = (void *)0x450d0f;
    FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar5);
    FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pcVar7 = local_38[0];
    if (0xf < *(uint *)(local_38[0] + 0x14)) {
      pcVar7 = *(char **)local_38[0];
    }
    iVar6 = atoi(pcVar7);
    *(float *)(pbVar2 + 0x148) = (float)iVar6;
    pcVar7 = local_38[0] + 0x18;
    if (0xf < *(uint *)(local_38[0] + 0x2c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar6 = atoi(pcVar7);
    *(float *)(pbVar2 + 0x14c) = (float)iVar6;
    FUN_004025a0((int *)local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"textcolour",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"textcolour",10);
    local_8 = 0x13;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pbVar2[0xd4] = *pbVar5;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"boldtextcolour",0xe);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"boldtextcolour",0xe);
    local_8 = 0x14;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pbVar2[0xd5] = *pbVar5;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0x15;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x60 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x60,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"engineeringunderlay",0x13);
  local_8 = 0x16;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar2 + 0x124 != pbVar5) {
    pbVar4 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar4 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar2 + 0x124,pbVar4,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"cargoslots",10);
  local_8 = 0x17;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  *(int *)(pbVar2 + 0xe4) = iVar6;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"defaultcargoslots",0x11);
  local_8 = 0x18;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  *(int *)(pbVar2 + 0xe8) = iVar6;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"systemfrequency",0xf);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"systemfrequency",0xf);
    local_8 = 0x19;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar6 = atoi((char *)pbVar5);
    *(int *)(pbVar2 + 0xc4) = iVar6;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"systemstrength",0xe);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"systemstrength",0xe);
    local_8 = 0x1a;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar6 = atoi((char *)pbVar5);
    *(int *)(pbVar2 + 200) = iVar6;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"maxspeed",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"maxspeed",8);
    local_8 = 0x1b;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar17 = atof((char *)pbVar5);
    local_8 = 0xffffffff;
    *(float *)(pbVar2 + 0x108) = (float)dVar17;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"value",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar14 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != puVar14) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"value",5);
    local_8 = 0x1c;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar6 = atoi((char *)pbVar5);
    *(int *)(pbVar2 + 0xd8) = iVar6;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hullstrength",0xc);
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"hullstrength",0xc);
    FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
    puVar14 = local_68;
    iVar6 = 0;
    local_60 = local_6c;
    while (local_60 != puVar14) {
      iVar6 = iVar6 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_60);
    }
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      pcVar7 = "hullstrength";
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      puVar19 = (undefined4 *)0x45175f;
      FUN_00402690(local_2c,"hullstrength",0xc);
      local_8 = 0x21;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      in_stack_ffffff44 = (void *)0x451781;
      FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar5);
      FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
      local_8 = CONCAT31(local_8._1_3_,0x23);
      FUN_00401b20((int *)local_2c);
      in_stack_ffffff50 = 0x4517a8;
      FUN_0042b900(&stack0xffffff58,(int *)local_38);
      FUN_0044fe40(pbVar2,puVar19,(int)pcVar7);
      local_8 = 0xffffffff;
      FUN_004025a0((int *)local_38);
    }
  }
  else {
    uVar3 = 0;
    local_60 = (undefined1 *)0x0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"hullstrength",0xc);
      local_8 = 0x1d;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = *(int *)(pbVar5 + 4);
      iVar18 = *(int *)pbVar5;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar20 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar20 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) goto LAB_0044ffec;
        FUN_005adb3f(pvVar20);
      }
      if ((uint)((iVar6 - iVar18) / 0x18) <= uVar3) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      puVar19 = (undefined4 *)0x45162b;
      FUN_00402690(local_2c,"hullstrength",0xc);
      local_8 = 0x1e;
      pvVar20 = (void *)0x45163b;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      puVar14 = local_60;
      in_stack_ffffff44 = (void *)0x45164d;
      FUN_004024e0(&stack0xffffff4c,(undefined4 *)(local_60 + *(int *)pbVar5));
      FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
      local_8 = CONCAT31(local_8._1_3_,0x20);
      if (0xf < local_18) {
        pvVar20 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar20 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) goto LAB_0044ffec;
        puVar19 = (undefined4 *)0x45168f;
        FUN_005adb3f(pvVar20);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      in_stack_ffffff50 = 0x4516b2;
      FUN_0042b900(&stack0xffffff58,(int *)local_38);
      FUN_0044fe40(pbVar2,puVar19,(int)pvVar20);
      local_8 = 0xffffffff;
      FUN_004025a0((int *)local_38);
      uVar3 = uVar3 + 1;
      local_60 = puVar14 + 0x18;
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  puVar19 = (undefined4 *)0x4517e2;
  FUN_00402690(local_2c,"hulldamagechance",0x10);
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  if (0xf < local_18) {
    pvVar20 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar20 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    puVar19 = (undefined4 *)0x451820;
    FUN_005adb3f(pvVar20);
  }
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hulldamagechance");
    iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      iVar6 = 0x4519c1;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hulldamagechance");
      local_8 = 0x28;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      in_stack_ffffff44 = (void *)0x4519e3;
      FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar5);
      FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      FUN_00401b20((int *)local_2c);
      in_stack_ffffff50 = 0x451a0a;
      FUN_0042b900(&stack0xffffff58,(int *)local_38);
      FUN_0044fc50(puVar19,iVar6);
      local_8 = 0xffffffff;
      FUN_004025a0((int *)local_38);
    }
  }
  else {
    uVar3 = 0;
    local_60 = (undefined1 *)0x0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"hulldamagechance",0x10);
      local_8 = 0x24;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = *(int *)(pbVar5 + 4);
      iVar18 = *(int *)pbVar5;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar20 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar20 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) goto LAB_0044ffec;
        FUN_005adb3f(pvVar20);
      }
      if ((uint)((iVar6 - iVar18) / 0x18) <= uVar3) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      puVar19 = (undefined4 *)0x4518db;
      FUN_00402690(local_2c,"hulldamagechance",0x10);
      local_8 = 0x25;
      pvVar20 = (void *)0x4518eb;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      puVar14 = local_60;
      in_stack_ffffff44 = (void *)0x4518fd;
      FUN_004024e0(&stack0xffffff4c,(undefined4 *)(local_60 + *(int *)pbVar5));
      FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
      local_8 = CONCAT31(local_8._1_3_,0x27);
      if (0xf < local_18) {
        pvVar20 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar20 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20)))) goto LAB_0044ffec;
        puVar19 = (undefined4 *)0x45193f;
        FUN_005adb3f(pvVar20);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      in_stack_ffffff50 = 0x451962;
      FUN_0042b900(&stack0xffffff58,(int *)local_38);
      FUN_0044fc50(puVar19,(int)pvVar20);
      local_8 = 0xffffffff;
      FUN_004025a0((int *)local_38);
      uVar3 = uVar3 + 1;
      local_60 = puVar14 + 0x18;
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hullmaxtemperature");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  pcVar13 = atoi_exref;
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hullmaxtemperature");
    local_8 = 0x2b;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar5);
    pcVar13 = atoi_exref;
    iVar6 = atoi(pcVar7);
    *(int *)(pbVar2 + 0xcc) = iVar6;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docktime");
  local_8 = 0x2c;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_00402490((undefined4 *)pbVar5);
  uVar12 = (*pcVar13)();
  *(undefined4 *)(pbVar2 + 0x15c) = uVar12;
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_44,"undocktime");
  local_8 = 0x2d;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_00402490((undefined4 *)pbVar5);
  uVar12 = (*pcVar13)();
  *(undefined4 *)(pbVar2 + 0x160) = uVar12;
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"defaultstructure");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"defaultstructure");
    local_8 = 0x2e;
    pbVar8 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(pbVar2 + 0xec),pbVar8);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  puVar19 = (undefined4 *)FUN_004131e0(pbVar2 + 0xec,&local_64);
  std::basic_string<>::end((basic_string<> *)(pbVar2 + 0xec));
  uVar16 = FUN_004131e0(pbVar2 + 0xec,&local_74);
  pcVar7 = (char *)*(undefined4 *)uVar16;
  iVar18 = 0x451bd7;
  FUN_00413ec0(&local_68,tolower_exref,pcVar7,(char *)*(undefined4 *)((ulonglong)uVar16 >> 0x20),
               (undefined1 *)*puVar19);
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"airlockroom");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"airlockroom");
    local_8 = 0x2f;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_00402490((undefined4 *)pbVar5);
    uVar12 = (*pcVar13)();
    *(undefined4 *)(pbVar2 + 0x104) = uVar12;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingshorepower");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingshorepower");
    local_8 = 0x30;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_00402490((undefined4 *)pbVar5);
    uVar12 = (*pcVar13)();
    *(undefined4 *)(pbVar2 + 0x164) = uVar12;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingshorepower");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingshorepower");
    local_8 = 0x31;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_00402490((undefined4 *)pbVar5);
    uVar12 = (*pcVar13)();
    *(undefined4 *)(pbVar2 + 0x168) = uVar12;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docking");
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docking");
    iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docking");
      local_8 = 0x34;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      in_stack_ffffff3c = (byte *)0x451e75;
      FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar5);
      FUN_0044f950(0,(int)pbVar2,in_stack_ffffff44);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
    }
  }
  else {
    uVar3 = 0;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docking");
    local_8 = 0x32;
    pbVar5 = FUN_0047d5c0((byte *)local_2c);
    iVar6 = FUN_00402460((int *)pbVar5);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      do {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docking");
        local_8 = 0x33;
        uVar9 = uVar3;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar19 = (undefined4 *)FUN_00402440(pbVar5,uVar9);
        in_stack_ffffff3c = (byte *)0x451dc6;
        FUN_004024e0(&stack0xffffff44,puVar19);
        FUN_0044f950(uVar3,(int)pbVar2,in_stack_ffffff44);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
        uVar3 = uVar3 + 1;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"docking");
        local_8 = 0x32;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        uVar9 = FUN_00402460((int *)pbVar5);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
      } while (uVar3 < uVar9);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingsound");
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingsound");
    iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingsound");
      local_8 = 0x37;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      in_stack_ffffff3c = (byte *)0x451fe5;
      FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar5);
      FUN_0044f950(0,(int)pbVar2,in_stack_ffffff44);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
    }
  }
  else {
    uVar3 = 0;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingsound");
    local_8 = 0x35;
    pbVar5 = FUN_0047d5c0((byte *)local_2c);
    iVar6 = FUN_00402460((int *)pbVar5);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      do {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingsound");
        local_8 = 0x36;
        uVar9 = uVar3;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar19 = (undefined4 *)FUN_00402440(pbVar5,uVar9);
        in_stack_ffffff3c = (byte *)0x451f36;
        FUN_004024e0(&stack0xffffff44,puVar19);
        FUN_0044f950(uVar3,(int)pbVar2,in_stack_ffffff44);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
        uVar3 = uVar3 + 1;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"dockingsound");
        local_8 = 0x35;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        uVar9 = FUN_00402460((int *)pbVar5);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
      } while (uVar3 < uVar9);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undocking");
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undocking");
    iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undocking");
      local_8 = 0x3a;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      in_stack_ffffff3c = (byte *)0x452155;
      FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar5);
      FUN_0044f950(0,(int)pbVar2,in_stack_ffffff44);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
    }
  }
  else {
    uVar3 = 0;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undocking");
    local_8 = 0x38;
    pbVar5 = FUN_0047d5c0((byte *)local_2c);
    iVar6 = FUN_00402460((int *)pbVar5);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      do {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undocking");
        local_8 = 0x39;
        uVar9 = uVar3;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar19 = (undefined4 *)FUN_00402440(pbVar5,uVar9);
        in_stack_ffffff3c = (byte *)0x4520a6;
        FUN_004024e0(&stack0xffffff44,puVar19);
        FUN_0044f950(uVar3,(int)pbVar2,in_stack_ffffff44);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
        uVar3 = uVar3 + 1;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undocking");
        local_8 = 0x38;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        uVar9 = FUN_00402460((int *)pbVar5);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
      } while (uVar3 < uVar9);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingsound");
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingsound");
    iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingsound");
      local_8 = 0x3d;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      in_stack_ffffff3c = (byte *)0x4522c5;
      FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar5);
      FUN_0044f950(0,(int)pbVar2,in_stack_ffffff44);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
    }
  }
  else {
    uVar3 = 0;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingsound");
    local_8 = 0x3b;
    pbVar5 = FUN_0047d5c0((byte *)local_2c);
    iVar6 = FUN_00402460((int *)pbVar5);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      do {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingsound");
        local_8 = 0x3c;
        uVar9 = uVar3;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar19 = (undefined4 *)FUN_00402440(pbVar5,uVar9);
        in_stack_ffffff3c = (byte *)0x452216;
        FUN_004024e0(&stack0xffffff44,puVar19);
        FUN_0044f950(uVar3,(int)pbVar2,in_stack_ffffff44);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
        uVar3 = uVar3 + 1;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"undockingsound");
        local_8 = 0x3b;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        uVar9 = FUN_00402460((int *)pbVar5);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
      } while (uVar3 < uVar9);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"modulelocation");
  iVar6 = FUN_0047d0f0((byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"modulelocation");
    iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar5 = in_stack_ffffff4c;
    if (iVar6 != 0) {
      uVar12 = 0x452511;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"modulelocation");
      local_8 = 0x43;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar5);
      FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
      local_8._0_1_ = 0x45;
      FUN_00401b20((int *)local_2c);
      pbVar5 = *(byte **)(pbVar2 + 400);
      *(byte **)(pbVar2 + 400) = pbVar5 + 1;
      puVar19 = (undefined4 *)FUN_00402440(local_38,4);
      FUN_004024e0(&stack0xffffff4c,puVar19);
      iVar6 = FUN_00519b40(in_stack_ffffff4c);
      local_68 = &stack0xffffff58;
      puVar19 = (undefined4 *)FUN_00402440(local_38,3);
      pcVar10 = (char *)FUN_00402490(puVar19);
      iVar18 = atoi(pcVar10);
      fVar15 = (float)iVar18;
      puVar19 = (undefined4 *)FUN_00402440(local_38,2);
      pcVar10 = (char *)FUN_00402490(puVar19);
      iVar18 = atoi(pcVar10);
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xffffff58,(float)iVar18,fVar15);
      local_8._0_1_ = 0x46;
      puVar19 = (undefined4 *)FUN_00402440(local_38,1);
      pcVar10 = (char *)FUN_00402490(puVar19);
      iVar18 = atoi(pcVar10);
      puVar19 = (undefined4 *)FUN_00402440(local_38,0);
      FUN_004024e0(&stack0xffffff3c,puVar19);
      in_stack_ffffff50 = FUN_004b0240(in_stack_ffffff3c);
      local_8 = CONCAT31(local_8._1_3_,0x45);
      puVar19 = FUN_0043dab0(local_8c,pbVar5,in_stack_ffffff50,iVar18,pcVar7,uVar12,iVar6);
      FUN_0047d3f0(pbVar2 + 0x13c,puVar19);
      cocos2d::Vec2::~Vec2(local_7c);
      local_8 = 0xffffffff;
      FUN_004025a0((int *)local_38);
    }
  }
  else {
    puVar14 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"modulelocation");
    local_8 = 0x3e;
    pbVar5 = FUN_0047d5c0((byte *)local_2c);
    iVar6 = FUN_00402460((int *)pbVar5);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    pbVar5 = in_stack_ffffff4c;
    if (iVar6 != 0) {
      do {
        uVar12 = 0x45235d;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"modulelocation");
        local_8 = 0x3f;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar19 = (undefined4 *)FUN_00402440(pbVar5,(int)puVar14);
        FUN_004024e0(&stack0xffffff4c,puVar19);
        FUN_00592d70(local_38,',',(undefined4 *)in_stack_ffffff4c);
        local_8._0_1_ = 0x41;
        FUN_00401b20((int *)local_2c);
        pbVar5 = *(byte **)(pbVar2 + 400);
        *(byte **)(pbVar2 + 400) = pbVar5 + 1;
        puVar19 = (undefined4 *)FUN_00402440(local_38,4);
        FUN_004024e0(&stack0xffffff4c,puVar19);
        iVar6 = FUN_00519b40(in_stack_ffffff4c);
        local_68 = &stack0xffffff58;
        puVar19 = (undefined4 *)FUN_00402440(local_38,3);
        pcVar10 = (char *)FUN_00402490(puVar19);
        iVar18 = atoi(pcVar10);
        fVar15 = (float)iVar18;
        puVar19 = (undefined4 *)FUN_00402440(local_38,2);
        pcVar10 = (char *)FUN_00402490(puVar19);
        iVar18 = atoi(pcVar10);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xffffff58,(float)iVar18,fVar15);
        local_8._0_1_ = 0x42;
        puVar19 = (undefined4 *)FUN_00402440(local_38,1);
        pcVar10 = (char *)FUN_00402490(puVar19);
        iVar18 = atoi(pcVar10);
        puVar19 = (undefined4 *)FUN_00402440(local_38,0);
        FUN_004024e0(&stack0xffffff3c,puVar19);
        in_stack_ffffff50 = FUN_004b0240(in_stack_ffffff3c);
        local_8 = CONCAT31(local_8._1_3_,0x41);
        puVar19 = FUN_0043dab0(local_8c,pbVar5,in_stack_ffffff50,iVar18,pcVar7,uVar12,iVar6);
        FUN_0047d3f0(pbVar2 + 0x13c,puVar19);
        cocos2d::Vec2::~Vec2(local_7c);
        local_8 = 0xffffffff;
        FUN_004025a0((int *)local_38);
        puVar14 = local_60 + 1;
        local_60 = puVar14;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"modulelocation");
        local_8 = 0x3e;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        puVar11 = (undefined1 *)FUN_00402460((int *)pbVar4);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
        in_stack_ffffff4c = pbVar5;
      } while (puVar14 < puVar11);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"configuration");
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  pcVar10 = "configuration";
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"configuration");
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      uVar3 = 0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"configuration");
      local_8 = 0x48;
      pbVar4 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = FUN_00402460((int *)pbVar4);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      if (iVar6 != 0) {
        do {
          pcVar10 = "configuration";
          uVar12 = 0x45272d;
          std::basic_string<>::basic_string<>(local_5c,"configuration");
          local_8 = 0x49;
          uVar9 = uVar3;
          pbVar4 = FUN_0047d5c0((byte *)local_5c);
          puVar19 = (undefined4 *)FUN_00402440(pbVar4,uVar9);
          FUN_004024e0(&stack0xffffff4c,puVar19);
          FUN_00519fd0(pbVar2,(char *)pbVar5,in_stack_ffffff50,iVar18,pcVar7,
                       CONCAT44(pcVar10,uVar12));
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_5c);
          uVar3 = uVar3 + 1;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"configuration");
          local_8 = 0x48;
          pbVar4 = FUN_0047d5c0((byte *)local_2c);
          uVar9 = FUN_00402460((int *)pbVar4);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
        } while (uVar3 < uVar9);
      }
    }
  }
  else {
    uVar12 = 0x45267d;
    std::basic_string<>::basic_string<>(local_44,"configuration");
    local_8 = 0x47;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff4c,(undefined4 *)pbVar4);
    FUN_00519fd0(pbVar2,(char *)pbVar5,in_stack_ffffff50,iVar18,pcVar7,CONCAT44(pcVar10,uVar12));
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_44);
  }
  FUN_00412900((void *)(DAT_0065b5cc + 0x18),&local_70);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
