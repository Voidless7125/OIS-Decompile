#include "../ois_server.exe.h"


void FUN_00475690(void)

{
  int *this;
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  void *pvVar15;
  void *in_stack_ffffff84;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  void *local_44 [3];
  undefined1 local_38 [4];
  int *local_34;
  int *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b7ea0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar4 = (int *)FUN_005adb0f(0xe4);
  local_34 = (int *)0x0;
  pbVar6 = (byte *)(piVar4 + 8);
  pbVar8 = (byte *)(piVar4 + 0xe);
  this = piVar4 + 0x20;
  local_30 = (int *)0xf;
  *(undefined1 *)(piVar4 + 1) = 0x37;
  local_4c = piVar4 + 0x29;
  piVar4[6] = 0;
  piVar4[7] = 0xf;
  *(undefined1 *)(piVar4 + 2) = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0xf;
  *pbVar6 = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0xf;
  *pbVar8 = 0;
  piVar4[0x18] = 0;
  piVar4[0x19] = 0xf;
  *(undefined1 *)(piVar4 + 0x14) = 0;
  piVar4[0x1e] = 0;
  piVar4[0x1f] = 0xf;
  *(undefined1 *)(piVar4 + 0x1a) = 0;
  *this = 0;
  piVar4[0x21] = 0;
  piVar4[0x22] = 0;
  piVar4[0x23] = 0;
  piVar4[0x24] = 0;
  piVar4[0x25] = 0;
  piVar4[0x26] = 0;
  piVar4[0x27] = 0;
  piVar4[0x28] = 0;
  *local_4c = 0;
  piVar4[0x2a] = 0;
  piVar4[0x2b] = 0;
  piVar4[0x2c] = 0;
  piVar4[0x2d] = 0;
  piVar4[0x2e] = 0;
  piVar4[0x2f] = 0;
  piVar4[0x30] = 0;
  piVar4[0x31] = 0;
  piVar4[0x32] = 0;
  piVar4[0x33] = 100;
  piVar4[0x34] = 0;
  piVar4[0x35] = 0;
  piVar4[0x36] = 0;
  piVar4[0x37] = -1;
  *(undefined1 *)(piVar4 + 0x38) = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_54 = piVar4;
  local_50 = piVar4;
  FUN_00402690(local_44,&DAT_005e431c,4);
  local_8 = 0;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (pbVar6 != pbVar5) {
    pbVar14 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar14 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar6,pbVar14,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if ((int *)0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < (int)local_30 + 1U) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
LAB_004758a0:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_34 = (int *)0x0;
  local_30 = (int *)0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"description",0xb);
  local_8 = 1;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (pbVar8 != pbVar6) {
    pbVar5 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar5 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar8,pbVar5,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < (int)local_30 + 1U) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_34 = (int *)0x0;
  local_30 = (int *)0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"identifier",10);
  local_8 = 2;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  piVar11 = local_50;
  if ((byte *)(local_50 + 2) != pbVar6) {
    pbVar8 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar8 = *(byte **)pbVar6;
    }
    FUN_00402690(local_50 + 2,pbVar8,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < (int)local_30 + 1U) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_34 = (int *)0x0;
  local_30 = (int *)0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e98b0,2);
  local_8 = 3;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar7 = atoi((char *)pbVar6);
  *piVar11 = iVar7;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < (int)local_30 + 1U) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_34 = (int *)0x0;
  local_30 = (int *)0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"shortname",9);
  local_8 = 4;
  pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  pbVar6 = (byte *)(piVar11 + 0x14);
  if (pbVar6 != pbVar8) {
    pbVar5 = pbVar8;
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar5 = *(byte **)pbVar8;
    }
    FUN_00402690(pbVar6,pbVar5,*(uint *)(pbVar8 + 0x10));
  }
  local_8 = 0xffffffff;
  if ((int *)0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < (int)local_30 + 1U) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"email",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_48 = local_34;
  while (local_48 != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  if (iVar7 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"email",5);
    local_8 = 5;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    piVar11 = local_50;
    pbVar8 = (byte *)(local_50 + 0x1a);
    if (pbVar8 != pbVar6) {
      pbVar5 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar5 = *(byte **)pbVar6;
      }
      FUN_00402690(pbVar8,pbVar5,*(uint *)(pbVar6 + 0x10));
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
    pbVar6 = pbVar8;
    if (0xf < (uint)piVar11[0x1f]) {
      pbVar6 = *(byte **)pbVar8;
    }
    uVar9 = FUN_004031f0(pbVar6,piVar11[0x1e],(byte *)&PTR_005ce008,0);
    if ((char)uVar9 != '\0') {
      FUN_00402690(pbVar8,&DAT_005eaeb0,3);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9b64,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_48 = local_34;
  while (local_48 != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9b64,4);
  if (iVar7 == 0) {
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
    if (iVar7 != 0) {
      uVar9 = 0;
      local_48 = (int *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e9b64,4);
        local_8 = 7;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar3 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        if ((uint)((iVar7 - iVar3) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e9b64,4);
        local_8 = 8;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        piVar11 = local_48;
        pcVar10 = (char *)(*(int *)pbVar6 + (int)local_48);
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar10 = *(char **)pcVar10;
        }
        local_48 = (int *)atoi(pcVar10);
        local_50[0x32] = local_50[0x32] + (int)local_48;
        puVar1 = (uint *)piVar4[0x21];
        if ((uint *)piVar4[0x22] == puVar1) {
          FUN_004141e0(this,puVar1,&local_48);
        }
        else {
          *puVar1 = (uint)local_48;
          piVar4[0x21] = piVar4[0x21] + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        uVar9 = uVar9 + 1;
        local_48 = piVar11 + 6;
      } while( true );
    }
  }
  else {
    local_8 = 6;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    local_48 = (int *)atoi((char *)pbVar6);
    local_50[0x32] = local_50[0x32] + (int)local_48;
    puVar1 = (uint *)piVar4[0x21];
    if ((uint *)piVar4[0x22] == puVar1) {
      FUN_004141e0(this,puVar1,&local_48);
    }
    else {
      *puVar1 = (uint)local_48;
      piVar4[0x21] = piVar4[0x21] + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"colour",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_48 = local_34;
  while (local_48 != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  if (iVar7 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"colour",6);
    local_8 = 9;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    local_8 = 0xffffffff;
    *(byte *)(local_50 + 1) = *pbVar6;
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaf34,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_48 = local_34;
  while (local_48 != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaf34,4);
  if (iVar7 == 0) {
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
    if (iVar7 != 0) {
      uVar9 = 0;
      local_48 = (int *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005eaf34,4);
        local_8 = 0xb;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar3 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        if ((uint)((iVar7 - iVar3) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005eaf34,4);
        local_8 = 0xc;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        piVar11 = local_48;
        pcVar10 = (char *)(*(int *)pbVar6 + (int)local_48);
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar10 = *(char **)pcVar10;
        }
        local_48 = (int *)atoi(pcVar10);
        puVar1 = (uint *)local_50[0x24];
        if ((uint *)local_50[0x25] == puVar1) {
          FUN_004141e0(local_50 + 0x23,puVar1,&local_48);
        }
        else {
          *puVar1 = (uint)local_48;
          local_50[0x24] = local_50[0x24] + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        uVar9 = uVar9 + 1;
        local_48 = piVar11 + 6;
      } while( true );
    }
  }
  else {
    local_8 = 10;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    local_48 = (int *)atoi((char *)pbVar6);
    puVar1 = (uint *)local_50[0x24];
    if ((uint *)local_50[0x25] == puVar1) {
      FUN_004141e0(local_50 + 0x23,puVar1,&local_48);
    }
    else {
      *puVar1 = (uint)local_48;
      local_50[0x24] = local_50[0x24] + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"interest",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_48 = local_34;
  while (local_48 != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"interest",8);
  if (iVar7 == 0) {
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
    if (iVar7 != 0) {
      uVar9 = 0;
      local_48 = (int *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"interest",8);
        local_8 = 0xe;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar3 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        if ((uint)((iVar7 - iVar3) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"interest",8);
        local_8 = 0xf;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        piVar11 = local_48;
        pcVar10 = (char *)(*(int *)pbVar6 + (int)local_48);
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar10 = *(char **)pcVar10;
        }
        local_48 = (int *)atoi(pcVar10);
        puVar1 = (uint *)local_50[0x27];
        if ((uint *)local_50[0x28] == puVar1) {
          FUN_004141e0(local_50 + 0x26,puVar1,&local_48);
        }
        else {
          *puVar1 = (uint)local_48;
          local_50[0x27] = local_50[0x27] + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        uVar9 = uVar9 + 1;
        local_48 = piVar11 + 6;
      } while( true );
    }
  }
  else {
    local_8 = 0xd;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    local_48 = (int *)atoi((char *)pbVar6);
    puVar1 = (uint *)local_50[0x27];
    if ((uint *)local_50[0x28] == puVar1) {
      FUN_004141e0(local_50 + 0x26,puVar1,&local_48);
    }
    else {
      *puVar1 = (uint)local_48;
      local_50[0x27] = local_50[0x27] + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"contracts",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_48 = local_34;
  while (local_48 != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"contracts",9);
  if (iVar7 == 0) {
    iVar7 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
    if (iVar7 != 0) {
      uVar9 = 0;
      local_48 = (int *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"contracts",9);
        local_8 = 0x11;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar7 = *(int *)(pbVar6 + 4);
        iVar3 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        if ((uint)((iVar7 - iVar3) / 0x18) <= uVar9) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"contracts",9);
        local_8 = 0x12;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        piVar11 = local_48;
        FUN_004024e0(&stack0xffffff84,(undefined4 *)(*(int *)pbVar6 + (int)local_48));
        piVar12 = FUN_00592840(local_38,in_stack_ffffff84);
        puVar2 = (undefined8 *)local_4c[1];
        if ((undefined8 *)local_4c[2] == puVar2) {
          FUN_0047de90(local_4c,puVar2,(undefined8 *)piVar12);
        }
        else {
          *puVar2 = *(undefined8 *)piVar12;
          *(int *)(puVar2 + 1) = piVar12[2];
          local_4c[1] = local_4c[1] + 0xc;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar15 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar15 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) goto LAB_004758a0;
          FUN_005adb3f(pvVar15);
        }
        uVar9 = uVar9 + 1;
        local_48 = piVar11 + 6;
      } while( true );
    }
  }
  else {
    local_8 = 0x10;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff84,(undefined4 *)pbVar6);
    piVar11 = FUN_00592840(local_38,in_stack_ffffff84);
    puVar2 = (undefined8 *)local_4c[1];
    if ((undefined8 *)local_4c[2] == puVar2) {
      FUN_0047de90(local_4c,puVar2,(undefined8 *)piVar11);
    }
    else {
      *puVar2 = *(undefined8 *)piVar11;
      *(int *)(puVar2 + 1) = piVar11[2];
      local_4c[1] = local_4c[1] + 0xc;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar15 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar15 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaf14,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  piVar11 = local_30;
  iVar7 = 0;
  local_4c = local_34;
  while (local_4c != piVar11) {
    iVar7 = iVar7 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_4c)
    ;
  }
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  piVar11 = local_50;
  if (iVar7 != 0) {
    local_34 = (int *)0x0;
    local_30 = (int *)0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,&DAT_005eaf14,4);
    local_8 = 0x13;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    iVar7 = atoi((char *)pbVar6);
    piVar11 = local_50;
    local_8 = 0xffffffff;
    local_50[0x33] = iVar7;
    if (0xf < local_30) {
      pvVar15 = local_44[0];
      if ((0xfff < (int)local_30 + 1U) &&
         (pvVar15 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar15);
    }
    local_34 = (int *)0x0;
    local_30 = (int *)0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  if ((uint)(piVar4[0x21] - *this) < 4) {
    piVar11[0x32] = piVar11[0x32] + 100;
    puVar13 = (undefined4 *)piVar4[0x21];
    local_4c = (int *)0x64;
    if ((undefined4 *)piVar4[0x22] == puVar13) {
      FUN_004141e0(this,puVar13,&local_4c);
    }
    else {
      *puVar13 = 100;
      piVar4[0x21] = piVar4[0x21] + 4;
    }
    piVar11[0x32] = piVar11[0x32] + 100;
    puVar13 = (undefined4 *)piVar4[0x21];
    local_4c = (int *)0x64;
    if ((undefined4 *)piVar4[0x22] == puVar13) {
      FUN_004141e0(this,puVar13,&local_4c);
    }
    else {
      *puVar13 = 100;
      piVar4[0x21] = piVar4[0x21] + 4;
    }
    piVar11[0x32] = piVar11[0x32] + 100;
    puVar13 = (undefined4 *)piVar4[0x21];
    local_4c = (int *)0x64;
    if ((undefined4 *)piVar4[0x22] == puVar13) {
      FUN_004141e0(this,puVar13,&local_4c);
    }
    else {
      *puVar13 = 100;
      piVar4[0x21] = piVar4[0x21] + 4;
    }
    piVar11[0x32] = piVar11[0x32] + 100;
    puVar13 = (undefined4 *)piVar4[0x21];
    local_4c = (int *)0x64;
    if ((undefined4 *)piVar4[0x22] == puVar13) {
      FUN_004141e0(this,puVar13,&local_4c);
    }
    else {
      *puVar13 = 100;
      piVar4[0x21] = piVar4[0x21] + 4;
    }
    piVar11[0x32] = piVar11[0x32] + 100;
    puVar13 = (undefined4 *)piVar4[0x21];
    local_4c = (int *)0x64;
    if ((undefined4 *)piVar4[0x22] == puVar13) {
      FUN_004141e0(this,puVar13,&local_4c);
    }
    else {
      *puVar13 = 100;
      piVar4[0x21] = piVar4[0x21] + 4;
    }
  }
  puVar13 = DAT_0065c290;
  piVar11[0x36] = 0;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)FUN_005adb0f(0x18);
    puVar13[4] = 0;
    puVar13[5] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    DAT_0065c290 = puVar13;
  }
  FUN_00412900(puVar13,&local_54);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00476b90(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte *pbVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *in_stack_ffffff54;
  undefined4 *in_stack_ffffff58;
  void *local_84;
  void *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  void *local_70;
  uint local_6c;
  int *local_68;
  void *local_64;
  char local_5d;
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
  puStack_c = &LAB_005b7f38;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_74 = (int *)0x0;
  local_78 = (int *)0x0;
  piVar5 = (int *)FUN_005adb0f(0x3c);
  local_68 = piVar5;
  memset(piVar5,0,0x3c);
  piVar5[5] = 0xf;
  piVar5[10] = 0;
  piVar10 = piVar5 + 0xc;
  piVar5[0xb] = 0xf;
  *(undefined1 *)(piVar5 + 6) = 0;
  *piVar10 = 0;
  piVar5[0xd] = 0;
  piVar5[0xe] = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_7c = piVar5;
  local_78 = piVar10;
  FUN_00402690(local_2c,"summary",7);
  local_8 = 0;
  local_5d = '^';
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(&stack0xffffff54,(undefined4 *)pbVar6);
  piVar5 = (int *)FUN_00592a70((undefined1 *)local_44,local_5d,in_stack_ffffff54);
  if (local_68 != piVar5) {
    FUN_00401b20(local_68);
    iVar8 = piVar5[1];
    iVar2 = piVar5[2];
    iVar3 = piVar5[3];
    *local_68 = *piVar5;
    local_68[1] = iVar8;
    local_68[2] = iVar2;
    local_68[3] = iVar3;
    *(undefined8 *)(local_68 + 4) = *(undefined8 *)(piVar5 + 4);
    piVar5[4] = 0;
    piVar5[5] = 0xf;
    *(undefined1 *)piVar5 = 0;
  }
  if (0xf < local_30) {
    pvVar7 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar7 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
LAB_00476cc2:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_8 = 0xffffffff;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
  FUN_00402690(local_2c,"description",0xb);
  local_8 = 1;
  local_5d = '^';
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(&stack0xffffff54,(undefined4 *)pbVar6);
  piVar5 = (int *)FUN_00592a70((undefined1 *)local_44,local_5d,in_stack_ffffff54);
  if (local_68 + 6 != piVar5) {
    FUN_00401b20(local_68 + 6);
    iVar8 = piVar5[1];
    iVar2 = piVar5[2];
    iVar3 = piVar5[3];
    local_68[6] = *piVar5;
    local_68[7] = iVar8;
    local_68[8] = iVar2;
    local_68[9] = iVar3;
    *(undefined8 *)(local_68 + 10) = *(undefined8 *)(piVar5 + 4);
    piVar5[4] = 0;
    piVar5[5] = 0xf;
    *(undefined1 *)piVar5 = 0;
  }
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
  local_8 = 0xffffffff;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_84,(byte *)local_2c);
  pvVar7 = local_80;
  local_64 = local_84;
  local_6c = 0;
  uVar9 = local_6c;
  if (local_84 != local_80) {
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_64);
      piVar10 = local_78;
    } while (local_64 != pvVar7);
  }
  local_6c = uVar9;
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
  if (local_6c == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar8 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar8 != 0) {
      local_6c = 0;
      local_64 = (void *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = 5;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar7 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar7 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_00476cc2;
          FUN_005adb3f(pvVar7);
        }
        if ((uint)((iVar8 - iVar2) / 0x18) <= local_6c) break;
        pvVar7 = (void *)FUN_005adb0f(0x40);
        local_8 = 6;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_80 = pvVar7;
        FUN_00402690(local_5c,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,7);
        local_78 = (int *)((uint)local_74 | 2);
        local_74 = local_78;
        pbVar6 = FUN_0047d5c0((byte *)local_5c);
        FUN_004024e0(&stack0xffffff58,(undefined4 *)(*(int *)pbVar6 + (int)local_64));
        local_70 = (void *)FUN_004a1a40(pvVar7,in_stack_ffffff58);
        local_8 = 8;
        puVar1 = (undefined4 *)piVar10[1];
        if ((undefined4 *)piVar10[2] == puVar1) {
          FUN_004141e0(piVar10,puVar1,&local_70);
        }
        else {
          *puVar1 = local_70;
          piVar10[1] = piVar10[1] + 4;
        }
        local_8 = 0xffffffff;
        local_74 = (int *)((uint)local_74 & 0xfffffffd);
        if (0xf < local_48) {
          pvVar7 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar7 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) goto LAB_00476cc2;
          FUN_005adb3f(pvVar7);
        }
        local_6c = local_6c + 1;
        local_64 = (void *)((int)local_64 + 0x18);
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    pvVar7 = (void *)FUN_005adb0f(0x40);
    local_8 = 2;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_70 = pvVar7;
    FUN_00402690(local_2c,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_78 = (int *)0x1;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)pbVar6);
    local_64 = (void *)FUN_004a1a40(pvVar7,in_stack_ffffff58);
    local_8 = 4;
    piVar10 = (int *)local_68[0xd];
    if ((int *)local_68[0xe] == piVar10) {
      FUN_004141e0(local_68 + 0xc,piVar10,&local_64);
    }
    else {
      *piVar10 = (int)local_64;
      local_68[0xd] = local_68[0xd] + 4;
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
  }
  FUN_00591070("DETAIL","Added story note (\'%s\')");
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
  puVar4 = DAT_0065c290;
  puVar1 = (undefined4 *)DAT_0065c290[4];
  if ((undefined4 *)DAT_0065c290[5] == puVar1) {
    FUN_00414080(DAT_0065c290 + 3,puVar1,&local_7c);
  }
  else {
    *puVar1 = local_68;
    puVar4[4] = puVar4[4] + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00477240(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  void *pvVar8;
  int iVar9;
  undefined2 in_FPUControlWord;
  double dVar10;
  byte *in_stack_ffffff7c;
  undefined4 *local_5c;
  byte *local_58;
  undefined4 local_54;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
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
  
  local_8 = 0xffffffff;
  puStack_c = &param_1_005b8056;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_005adb0f(0xb0);
  pbVar5 = (byte *)(puVar1 + 8);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0x3f800000;
  puVar1[5] = 0x3f800000;
  puVar1[6] = 0x3f800000;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0xf;
  *pbVar5 = 0;
  local_58 = (byte *)(puVar1 + 0x11);
  puVar1[0xe] = 0xffffffff;
  puVar1[0xf] = 0xffffffff;
  puVar1[0x10] = 0xbf800000;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0xf;
  *local_58 = 0;
  local_4c = (byte *)(puVar1 + 0x17);
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0xf;
  *local_4c = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_48 = (byte *)puVar1;
  cocos2d::Vec3::Vec3((Vec3 *)(puVar1 + 0x1d),0.0,0.0,0.0);
  local_8._0_1_ = 4;
  cocos2d::Vec3::Vec3((Vec3 *)(puVar1 + 0x20),0.0,0.0,0.0);
  local_8 = CONCAT31(local_8._1_3_,5);
  cocos2d::Color3B::Color3B((Color3B *)(puVar1 + 0x23),0xff,0xff,0xff);
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  local_8 = 0xffffffff;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_5c = puVar1;
  FUN_00402690(local_2c,"roomid",6);
  local_8 = 6;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar3 = atoi((char *)pbVar2);
  puVar1[7] = iVar3;
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
  FUN_00402690(local_2c,"shipid",6);
  local_8 = 7;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar5 != pbVar2) {
    pbVar7 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar7 = *(byte **)pbVar2;
    }
    FUN_00402690(pbVar5,pbVar7,*(uint *)(pbVar2 + 0x10));
  }
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
  pbVar2 = pbVar5;
  local_54 = pbVar5;
  if (0xf < (uint)puVar1[0xd]) {
    local_54 = *(byte **)pbVar5;
    pbVar2 = *(byte **)pbVar5;
  }
  if (0xf < (uint)puVar1[0xd]) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar9 = (int)(pbVar2 + puVar1[0xc]) - (int)pbVar5;
  iVar3 = 0;
  if (pbVar2 + puVar1[0xc] < pbVar5) {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    do {
      iVar4 = tolower((int)(char)pbVar5[iVar3]);
      local_54[iVar3] = (byte)iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar9);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 8;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (local_58 != pbVar5) {
    pbVar2 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar2 = *(byte **)pbVar5;
    }
    FUN_00402690(local_58,pbVar2,*(uint *)(pbVar5 + 0x10));
  }
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
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 9;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (local_4c != pbVar5) {
    pbVar2 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar2 = *(byte **)pbVar5;
    }
    FUN_00402690(local_4c,pbVar2,*(uint *)(pbVar5 + 0x10));
  }
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
  FUN_00402690(local_2c,"screeninwide",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar5 = local_4c;
  iVar3 = 0;
  local_54 = local_50;
  while (local_54 != pbVar5) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_54)
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
  pbVar5 = local_48;
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"screeninwide",0xc);
    local_8 = 10;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar3 = atoi((char *)pbVar5);
    pbVar5 = local_48;
    local_8 = 0xffffffff;
    *(int *)((int)local_48 + 0x38) = iVar3;
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
  FUN_00402690(local_2c,"messagescreeninwide",0x13);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"messagescreeninwide",0x13);
    local_8 = 0xb;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar3 = atoi((char *)pbVar2);
    *(int *)((int)pbVar5 + 0x3c) = iVar3;
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
  FUN_00402690(local_2c,"cameraposx",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cameraposx",10);
    local_8 = 0xc;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    *(float *)((int)pbVar5 + 0x74) = (float)dVar10;
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
  FUN_00402690(local_2c,"cameraposy",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cameraposy",10);
    local_8 = 0xd;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    *(float *)((int)pbVar5 + 0x78) = (float)dVar10;
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
  FUN_00402690(local_2c,"cameraposz",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cameraposz",10);
    local_8 = 0xe;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    *(float *)((int)pbVar5 + 0x7c) = (float)dVar10;
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
  FUN_00402690(local_2c,"camerarotx",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"camerarotx",10);
    local_8 = 0xf;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    *(float *)((int)pbVar5 + 0x80) = (float)dVar10;
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
  FUN_00402690(local_2c,"cameraroty",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cameraroty",10);
    local_8 = 0x10;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    *(float *)((int)pbVar5 + 0x84) = (float)dVar10;
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
  FUN_00402690(local_2c,"camerarotz",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"camerarotz",10);
    local_8 = 0x11;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 0x88) = (float)dVar10;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e95e8,1);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e95e8,1);
    local_8 = 0x12;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_54 = (byte *)CONCAT22(in_FPUControlWord,(undefined2)local_54);
    local_4c = (byte *)(int)ROUND(dVar10);
    *(undefined1 *)((int)pbVar5 + 0x8c) = local_4c._0_1_;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eafac,1);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005eafac,1);
    local_8 = 0x13;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_54 = (byte *)CONCAT22(in_FPUControlWord,(undefined2)local_54);
    local_4c = (byte *)(int)ROUND(dVar10);
    *(undefined1 *)((int)pbVar5 + 0x8d) = local_4c._0_1_;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaffc,1);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005eaffc,1);
    local_8 = 0x14;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_54 = (byte *)CONCAT22(in_FPUControlWord,(undefined2)local_54);
    local_4c = (byte *)(int)ROUND(dVar10);
    *(undefined1 *)((int)pbVar5 + 0x8e) = local_4c._0_1_;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"lightlevel",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"lightlevel",10);
    local_8 = 0x15;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 0x40) = (float)dVar10;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sound_aircon",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"sound_aircon",0xc);
    local_8 = 0x16;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 0x10) = (float)dVar10;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sound_power",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"sound_power",0xb);
    local_8 = 0x17;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 8) = (float)dVar10;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sound_computers",0xf);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"sound_computers",0xf);
    local_8 = 0x18;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 0xc) = (float)dVar10;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sound_engine",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"sound_engine",0xc);
    local_8 = 0x19;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 4) = (float)dVar10;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sound_comms",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  pbVar2 = local_4c;
  iVar3 = 0;
  local_48 = local_50;
  while (local_48 != pbVar2) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
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
  if (iVar3 != 0) {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = 0;
    FUN_00402690(local_44,"sound_comms",0xb);
    local_8 = 0x1a;
    pbVar2 = FUN_00419170(&DAT_0065b530,local_44);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar10 = atof((char *)pbVar2);
    local_8 = 0xffffffff;
    *(float *)((int)pbVar5 + 0x14) = (float)dVar10;
    FUN_00401b20((int *)local_44);
  }
  FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)pbVar5 + 0x20));
  piVar6 = FUN_004a73f0(DAT_0065b5cc,'\x01',in_stack_ffffff7c);
  puVar1 = (undefined4 *)piVar6[7];
  if ((undefined4 *)piVar6[8] == puVar1) {
    FUN_00414080(piVar6 + 6,puVar1,&local_5c);
  }
  else {
    *puVar1 = pbVar5;
    piVar6[7] = piVar6[7] + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
