#include "../ois_server.exe.h"


void FUN_00471910(void)

{
  undefined4 ****ppppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *****pppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 ***pppuVar9;
  byte *pbVar10;
  undefined4 *****pppppuVar11;
  undefined4 *****pppppuVar12;
  undefined4 *****pppppuVar13;
  uint uVar14;
  undefined4 ****in_stack_ffffff74;
  undefined4 **local_64;
  undefined4 **local_60;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  uint local_54;
  undefined4 **local_50;
  uint local_4c;
  undefined4 **local_48;
  undefined4 ****local_44 [4];
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
  puStack_c = &LAB_005b7790;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = 0;
  DAT_00655058 = DAT_00655058 + 1;
  local_4c = 0;
  FUN_00591e00((undefined1 *)local_44,"%s_%d");
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"description",0xb);
  local_8._0_1_ = 1;
  FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_00591070("DETAIL","Attempting to add draft set with id \'%s\' and description \'%s\'");
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar5 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
LAB_00471a01:
      local_8._0_1_ = 0;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  local_5c = (undefined4 ****)&stack0xffffff74;
  FUN_004024e0(&stack0xffffff74,local_44);
  local_8._0_1_ = 2;
  pvVar5 = (void *)FUN_00412700();
  local_8._0_1_ = 0;
  iVar6 = FUN_00439b40(pvVar5,(byte *)in_stack_ffffff74);
  if (iVar6 == 0) {
    pppppuVar7 = (undefined4 *****)FUN_005adb0f(0x60);
    local_1c = 0;
    pppppuVar7[4] = (undefined4 ****)0x0;
    pppppuVar11 = pppppuVar7 + 6;
    pppppuVar7[5] = (undefined4 ****)0xf;
    pppppuVar12 = pppppuVar7 + 0x12;
    *(undefined1 *)pppppuVar7 = 0;
    pppppuVar7[10] = (undefined4 ****)0x0;
    pppppuVar7[0xb] = (undefined4 ****)0xf;
    *(byte *)pppppuVar11 = 0;
    pppppuVar7[0x10] = (undefined4 ****)0x0;
    pppppuVar7[0x11] = (undefined4 ****)0xf;
    *(undefined1 *)(pppppuVar7 + 0xc) = 0;
    *pppppuVar12 = (undefined4 ****)0x0;
    pppppuVar7[0x13] = (undefined4 ****)0x0;
    pppppuVar7[0x14] = (undefined4 ****)0x0;
    pppppuVar7[0x15] = (undefined4 ****)0x0;
    pppppuVar7[0x16] = (undefined4 ****)0x0;
    pppppuVar7[0x17] = (undefined4 ****)0x0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_5c = pppppuVar7;
    local_58 = pppppuVar7;
    FUN_00402690(local_2c,"description",0xb);
    local_8 = CONCAT31(local_8._1_3_,3);
    pppppuVar8 = (undefined4 *****)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (pppppuVar11 != pppppuVar8) {
      pppppuVar13 = pppppuVar8;
      if ((undefined4 ****)0xf < pppppuVar8[5]) {
        pppppuVar13 = (undefined4 *****)*pppppuVar8;
      }
      FUN_00402690(pppppuVar11,pppppuVar13,(uint)pppppuVar8[4]);
    }
    local_8._0_1_ = 0;
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    FUN_00419820(&DAT_0065b530,(int *)&local_64,(byte *)local_2c);
    ppuVar4 = local_60;
    iVar6 = 0;
    local_48 = local_64;
    while (local_48 != ppuVar4) {
      iVar6 = iVar6 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
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
    if (iVar6 == 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e970c,3);
      iVar6 = FUN_0047d0f0((byte *)local_2c);
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
      if (iVar6 != 0) {
        uVar14 = 0;
        local_48 = (undefined4 ***)0x0;
        do {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,&DAT_005e970c,3);
          local_8._0_1_ = 7;
          pbVar10 = FUN_0047d5c0((byte *)local_2c);
          iVar6 = *(int *)(pbVar10 + 4);
          iVar2 = *(int *)pbVar10;
          local_8._0_1_ = 0;
          if (0xf < local_18) {
            pvVar5 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar5 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_00471a01;
            FUN_005adb3f(pvVar5);
          }
          if ((uint)((iVar6 - iVar2) / 0x18) <= uVar14) break;
          pppuVar9 = (undefined4 ***)FUN_005adb0f(0x40);
          local_8._0_1_ = 8;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_60 = pppuVar9;
          FUN_00402690(local_2c,&DAT_005e970c,3);
          local_8 = CONCAT31(local_8._1_3_,9);
          local_54 = local_4c | 2;
          local_4c = local_54;
          pbVar10 = FUN_0047d5c0((byte *)local_2c);
          FUN_004024e0(&stack0xffffff74,(undefined4 *)(*(int *)pbVar10 + (int)local_48));
          local_50 = (undefined4 **)FUN_004a1a40(pppuVar9,in_stack_ffffff74);
          local_8 = 10;
          ppppuVar1 = pppppuVar7[0x13];
          if (pppppuVar7[0x14] == ppppuVar1) {
            FUN_004141e0(pppppuVar12,ppppuVar1,&local_50);
          }
          else {
            *ppppuVar1 = (undefined4 ***)local_50;
            pppppuVar7[0x13] = pppppuVar7[0x13] + 1;
          }
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          local_4c = local_4c & 0xfffffffd;
          if (0xf < local_18) {
            pvVar5 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar5 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_00471a01;
            FUN_005adb3f(pvVar5);
          }
          uVar14 = uVar14 + 1;
          local_48 = local_48 + 6;
        } while( true );
      }
    }
    else {
      pppuVar9 = (undefined4 ***)FUN_005adb0f(0x40);
      local_8._0_1_ = 4;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_50 = pppuVar9;
      FUN_00402690(local_2c,&DAT_005e970c,3);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_54 = 1;
      pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      FUN_004024e0(&stack0xffffff74,(undefined4 *)pbVar10);
      local_48 = (undefined4 **)FUN_004a1a40(pppuVar9,in_stack_ffffff74);
      local_8 = 6;
      ppppuVar1 = pppppuVar7[0x13];
      if (pppppuVar7[0x14] == ppppuVar1) {
        FUN_004141e0(pppppuVar12,ppppuVar1,&local_48);
      }
      else {
        *ppppuVar1 = (undefined4 ***)local_48;
        pppppuVar7[0x13] = pppppuVar7[0x13] + 1;
      }
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
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
    ppppuVar1 = local_5c;
    if ((undefined4 *****)local_5c != local_44) {
      pppppuVar11 = local_44;
      if (0xf < local_30) {
        pppppuVar11 = (undefined4 *****)local_44[0];
      }
      FUN_00402690(local_5c,pppppuVar11,local_34);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005ea63c,2);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    pppppuVar12 = (undefined4 *****)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pppppuVar11 = (undefined4 *****)(ppppuVar1 + 0xc);
    if (pppppuVar11 != pppppuVar12) {
      pppppuVar7 = pppppuVar12;
      if ((undefined4 ****)0xf < pppppuVar12[5]) {
        pppppuVar7 = (undefined4 *****)*pppppuVar12;
      }
      FUN_00402690(pppppuVar11,pppppuVar7,(uint)pppppuVar12[4]);
    }
    local_8._0_1_ = 0;
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
    iVar6 = FUN_00412700();
    puVar3 = *(undefined4 **)(iVar6 + 0x24);
    if (*(undefined4 **)(iVar6 + 0x28) == puVar3) {
      FUN_00414080((void *)(iVar6 + 0x20),puVar3,&local_58);
    }
    else {
      *puVar3 = ppppuVar1;
      *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 4;
    }
    FUN_00591070(&DAT_005cdc70,"Added email draft set with description \'%s\' and id \'%s\'");
  }
  if (0xf < local_30) {
    pppppuVar11 = (undefined4 *****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pppppuVar11 = (undefined4 *****)local_44[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_44[0] + (-4 - (int)pppppuVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppuVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00471fb0(void)

{
  undefined4 ****this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  undefined4 ****ppppuVar5;
  byte *pbVar6;
  byte *pbVar7;
  basic_string<> *pbVar8;
  basic_string<> *pbVar9;
  void *pvVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  basic_string<> *pbVar13;
  int iVar14;
  basic_string<> *pbVar15;
  basic_string<> *pbVar16;
  undefined4 *local_6c;
  basic_string<> *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  basic_string<> *local_5c;
  basic_string<> *local_58;
  uint local_54;
  basic_string<> *local_50;
  basic_string<> *local_4c;
  basic_string<> *local_48;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b7bf3;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = 0;
  local_50 = (basic_string<> *)0x0;
  FUN_00591e00((undefined1 *)local_44,"%s_%d");
  local_8 = 0;
  pbVar16 = (basic_string<> *)0x472015;
  local_6c = (undefined4 *)FUN_005adb0f(0x7c);
  this = (undefined4 ****)(local_6c + 1);
  local_68 = (basic_string<> *)(local_6c + 7);
  pbVar7 = (byte *)(local_6c + 0xd);
  *local_6c = 0;
  puVar11 = local_6c + 0x1c;
  local_6c[5] = 0;
  local_6c[6] = 0xf;
  *(undefined1 *)this = 0;
  local_6c[0xb] = 0;
  local_6c[0xc] = 0xf;
  *local_68 = (basic_string<>)0x0;
  local_6c[0x11] = 0;
  local_6c[0x12] = 0xf;
  *pbVar7 = 0;
  local_6c[0x17] = 0;
  local_6c[0x18] = 0xf;
  *(undefined1 *)(local_6c + 0x13) = 0;
  local_6c[0x19] = 0;
  local_6c[0x1a] = 0;
  local_6c[0x1b] = 0;
  *puVar11 = 0;
  local_6c[0x1d] = 0;
  local_6c[0x1e] = 0;
  local_64 = local_6c;
  local_60 = puVar11;
  if (this != local_44) {
    ppppuVar5 = local_44;
    if (0xf < local_30) {
      ppppuVar5 = (undefined4 ****)local_44[0];
    }
    FUN_00402690(this,ppppuVar5,local_34);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"subject",7);
  local_8 = CONCAT31(local_8._1_3_,1);
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar7 != pbVar6) {
    pbVar12 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar12 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar7,pbVar12,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
LAB_00472104:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ead74,4);
  local_8 = CONCAT31(local_8._1_3_,2);
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(local_64 + 0x13) != pbVar7) {
    pbVar6 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar6 = *(byte **)pbVar7;
    }
    FUN_00402690(local_64 + 0x13,pbVar6,*(uint *)(pbVar7 + 0x10));
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea63c,2);
  local_8 = CONCAT31(local_8._1_3_,3);
  pbVar8 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (local_68 != pbVar8) {
    pbVar9 = pbVar8;
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar9 = *(basic_string<> **)pbVar8;
    }
    FUN_00402690(local_68,pbVar9,*(uint *)(pbVar8 + 0x10));
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar8 = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c == (basic_string<> *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar14 != 0) {
      local_4c = (basic_string<> *)0x0;
      local_48 = (basic_string<> *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8._0_1_ = 7;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar14 = *(int *)(pbVar7 + 4);
        iVar3 = *(int *)pbVar7;
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        if ((basic_string<> *)((iVar14 - iVar3) / 0x18) <= local_4c) break;
        pbVar9 = (basic_string<> *)FUN_005adb0f(0x40);
        local_8._0_1_ = 8;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_58 = pbVar9;
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,9);
        local_54 = (uint)pbVar8 | 2;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(local_48 + *(int *)pbVar7));
        local_50 = (basic_string<> *)FUN_004a1a40(pbVar9,(undefined4 *)pbVar16);
        local_8 = 10;
        puVar2 = (undefined4 *)local_64[0x1a];
        if ((undefined4 *)local_64[0x1b] == puVar2) {
          FUN_004141e0(local_64 + 0x19,puVar2,&local_50);
        }
        else {
          *puVar2 = local_50;
          local_64[0x1a] = local_64[0x1a] + 4;
        }
        local_8 = 0;
        pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffffffd);
        local_50 = pbVar8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        local_4c = local_4c + 1;
        local_48 = local_48 + 0x18;
      } while( true );
    }
  }
  else {
    pbVar8 = (basic_string<> *)FUN_005adb0f(0x40);
    local_8._0_1_ = 4;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_48 = pbVar8;
    FUN_00402690(local_2c,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,5);
    local_54 = 1;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = (basic_string<> *)FUN_004a1a40(pbVar8,(undefined4 *)pbVar16);
    local_8 = 6;
    piVar1 = (int *)local_64[0x1a];
    if ((int *)local_64[0x1b] == piVar1) {
      FUN_004141e0(local_64 + 0x19,piVar1,&local_48);
    }
    else {
      *piVar1 = (int)local_48;
      local_64[0x1a] = local_64[0x1a] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)0x0;
    local_50 = (basic_string<> *)0x0;
    puVar11 = local_60;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
      puVar11 = local_60;
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"setflag",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c == (basic_string<> *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"setflag",7);
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      local_4c = (basic_string<> *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"setflag",7);
        local_8._0_1_ = 0xe;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar14 = *(int *)(pbVar7 + 4);
        iVar3 = *(int *)pbVar7;
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        if ((basic_string<> *)((iVar14 - iVar3) / 0x18) <= local_48) break;
        pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8._0_1_ = 0xf;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_58 = pbVar9;
        FUN_00402690(local_2c,"setflag",7);
        local_8 = CONCAT31(local_8._1_3_,0x10);
        local_54 = (uint)pbVar8 | 8;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(local_4c + *(int *)pbVar7));
        local_50 = FUN_004a3a90(pbVar9,0,pbVar16);
        local_8 = 0x11;
        puVar2 = (undefined4 *)puVar11[1];
        if ((undefined4 *)puVar11[2] == puVar2) {
          FUN_004141e0(puVar11,puVar2,&local_50);
        }
        else {
          *puVar2 = local_50;
          puVar11[1] = puVar11[1] + 4;
        }
        local_8 = 0;
        pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffffff7);
        local_50 = pbVar8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        local_48 = local_48 + 1;
        local_4c = local_4c + 0x18;
      } while( true );
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0xb;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"setflag",7);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_54 = (uint)pbVar8 | 4;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,0,pbVar16);
    puVar11 = local_60;
    local_8 = 0xd;
    puVar2 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar2) {
      FUN_004141e0(local_60,puVar2,&local_48);
    }
    else {
      *puVar2 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffffffb);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"beginquest",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c != (basic_string<> *)0x0) {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x12;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"beginquest",10);
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_54 = (uint)pbVar8 | 0x10;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,0xe,pbVar16);
    puVar11 = local_60;
    local_8 = 0x14;
    puVar2 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar2) {
      FUN_004141e0(local_60,puVar2,&local_48);
    }
    else {
      *puVar2 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffffef);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"completequest",0xd);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c != (basic_string<> *)0x0) {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x15;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"completequest",0xd);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    local_54 = (uint)pbVar8 | 0x20;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,0xf,pbVar16);
    puVar11 = local_60;
    local_8 = 0x17;
    puVar2 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar2) {
      FUN_004141e0(local_60,puVar2,&local_48);
    }
    else {
      *puVar2 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffffdf);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"failquest",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c != (basic_string<> *)0x0) {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x18;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"failquest",9);
    local_8 = CONCAT31(local_8._1_3_,0x19);
    local_54 = (uint)pbVar8 | 0x40;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,0x10,pbVar16);
    puVar11 = local_60;
    local_8 = 0x1a;
    puVar2 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar2) {
      FUN_004141e0(local_60,puVar2,&local_48);
    }
    else {
      *puVar2 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffffbf);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"unsetflag",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c == (basic_string<> *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"unsetflag",9);
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      local_4c = (basic_string<> *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"unsetflag",9);
        local_8._0_1_ = 0x1e;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar14 = *(int *)(pbVar7 + 4);
        iVar3 = *(int *)pbVar7;
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        if ((basic_string<> *)((iVar14 - iVar3) / 0x18) <= local_48) break;
        pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8._0_1_ = 0x1f;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_58 = pbVar9;
        FUN_00402690(local_2c,"unsetflag",9);
        local_8 = CONCAT31(local_8._1_3_,0x20);
        local_54 = (uint)pbVar8 | 0x100;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(local_4c + *(int *)pbVar7));
        local_50 = FUN_004a3a90(pbVar9,1,pbVar16);
        local_8 = 0x21;
        puVar2 = (undefined4 *)puVar11[1];
        if ((undefined4 *)puVar11[2] == puVar2) {
          FUN_004141e0(puVar11,puVar2,&local_50);
        }
        else {
          *puVar2 = local_50;
          puVar11[1] = puVar11[1] + 4;
        }
        local_8 = 0;
        pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffffeff);
        local_50 = pbVar8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        local_48 = local_48 + 1;
        local_4c = local_4c + 0x18;
      } while( true );
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x1b;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"unsetflag",9);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    local_54 = (uint)pbVar8 | 0x80;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,1,pbVar16);
    puVar11 = local_60;
    local_8 = 0x1d;
    puVar2 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar2) {
      FUN_004141e0(local_60,puVar2,&local_48);
    }
    else {
      *puVar2 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffff7f);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"addmoney",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  local_48 = local_5c;
  local_4c = (basic_string<> *)0x0;
  pbVar13 = local_4c;
  if (local_5c != local_58) {
    pbVar13 = (basic_string<> *)0x0;
    do {
      pbVar13 = pbVar13 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_48);
      pbVar8 = local_50;
    } while (local_48 != pbVar9);
  }
  local_4c = pbVar13;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (local_4c == (basic_string<> *)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"addmoney",8);
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      local_4c = (basic_string<> *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"addmoney",8);
        local_8._0_1_ = 0x25;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar14 = *(int *)(pbVar7 + 4);
        iVar3 = *(int *)pbVar7;
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        if ((basic_string<> *)((iVar14 - iVar3) / 0x18) <= local_48) break;
        pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8._0_1_ = 0x26;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_58 = pbVar9;
        FUN_00402690(local_2c,"addmoney",8);
        local_8 = CONCAT31(local_8._1_3_,0x27);
        local_54 = (uint)pbVar8 | 0x400;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff6c,(undefined4 *)(local_4c + *(int *)pbVar7));
        local_50 = FUN_004a3a90(pbVar9,2,pbVar16);
        local_8 = 0x28;
        puVar2 = (undefined4 *)puVar11[1];
        if ((undefined4 *)puVar11[2] == puVar2) {
          FUN_004141e0(puVar11,puVar2,&local_50);
        }
        else {
          *puVar2 = local_50;
          puVar11[1] = puVar11[1] + 4;
        }
        local_8 = 0;
        pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffffbff);
        local_50 = pbVar8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        local_48 = local_48 + 1;
        local_4c = local_4c + 0x18;
      } while( true );
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x22;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"addmoney",8);
    local_8 = CONCAT31(local_8._1_3_,0x23);
    local_54 = (uint)pbVar8 | 0x200;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,2,pbVar16);
    local_8 = 0x24;
    puVar11 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar11) {
      FUN_004141e0(local_60,puVar11,&local_48);
    }
    else {
      *puVar11 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffffdff);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"removemoney",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_5c,(byte *)local_2c);
  pbVar9 = local_58;
  iVar14 = 0;
  local_48 = local_5c;
  while (local_48 != pbVar9) {
    iVar14 = iVar14 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (iVar14 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"removemoney",0xb);
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar14 != 0) {
      pbVar9 = (basic_string<> *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_48 = pbVar9;
        FUN_00402690(local_2c,"removemoney",0xb);
        local_8._0_1_ = 0x2c;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar14 = *(int *)(pbVar7 + 4);
        iVar3 = *(int *)pbVar7;
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar10 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar10 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00472104;
          FUN_005adb3f(pvVar10);
        }
        if ((basic_string<> *)((iVar14 - iVar3) / 0x18) <= pbVar9) break;
        pbVar13 = (basic_string<> *)FUN_005adb0f(0x24);
        local_8._0_1_ = 0x2d;
        local_58 = pbVar13;
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"removemoney");
        local_8 = CONCAT31(local_8._1_3_,0x2e);
        local_54 = (uint)pbVar8 | 0x1000;
        pbVar9 = local_48;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        puVar11 = (undefined4 *)FUN_00402440(pbVar7,(int)pbVar9);
        FUN_004024e0(&stack0xffffff6c,puVar11);
        local_4c = FUN_004a3a90(pbVar13,3,pbVar16);
        local_8 = 0x2f;
        FUN_004130e0(local_60,&local_4c);
        local_8 = 0;
        FUN_00401b20((int *)local_2c);
        pbVar9 = local_48 + 1;
        pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffefff);
        local_50 = pbVar8;
      }
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x29;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_58 = pbVar9;
    FUN_00402690(local_2c,"removemoney",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x2a);
    local_54 = (uint)pbVar8 | 0x800;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,3,pbVar16);
    local_8 = 0x2b;
    puVar11 = (undefined4 *)local_60[1];
    if ((undefined4 *)local_60[2] == puVar11) {
      FUN_004141e0(local_60,puVar11,&local_48);
    }
    else {
      *puVar11 = local_48;
      local_60[1] = local_60[1] + 4;
    }
    local_8 = 0;
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffff7ff);
    local_50 = pbVar8;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"givelicense");
  iVar14 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar14 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"givelicense");
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar9 = local_50;
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"givelicense");
      local_8._0_1_ = 0x33;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar14 = FUN_00402460((int *)pbVar7);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401b20((int *)local_2c);
      pbVar9 = local_50;
      if (iVar14 != 0) {
        do {
          pbVar13 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8._0_1_ = 0x34;
          local_58 = pbVar13;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"givelicense");
          local_8 = CONCAT31(local_8._1_3_,0x35);
          local_54 = (uint)pbVar8 | 0x4000;
          pbVar9 = local_48;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar11 = (undefined4 *)FUN_00402440(pbVar7,(int)pbVar9);
          FUN_004024e0(&stack0xffffff6c,puVar11);
          local_4c = FUN_004a3a90(pbVar13,9,pbVar16);
          local_8 = 0x36;
          FUN_004130e0(local_60,&local_4c);
          local_8 = 0;
          pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffbfff);
          FUN_00401b20((int *)local_2c);
          pbVar15 = local_48 + 1;
          local_48 = pbVar15;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"givelicense");
          local_8._0_1_ = 0x33;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          pbVar13 = (basic_string<> *)FUN_00402460((int *)pbVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00401b20((int *)local_2c);
          pbVar9 = pbVar8;
        } while (pbVar15 < pbVar13);
      }
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x30;
    local_58 = pbVar9;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"givelicense");
    local_8 = CONCAT31(local_8._1_3_,0x31);
    local_54 = (uint)pbVar8 | 0x2000;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,9,pbVar16);
    local_8 = 0x32;
    FUN_004130e0(local_60,&local_48);
    local_8 = 0;
    FUN_00401b20((int *)local_2c);
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffffdfff);
    pbVar9 = pbVar8;
  }
  local_50 = pbVar9;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"blacklist");
  iVar14 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar14 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"blacklist");
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar9 = local_50;
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"blacklist");
      local_8._0_1_ = 0x3a;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar14 = FUN_00402460((int *)pbVar7);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401b20((int *)local_2c);
      pbVar9 = local_50;
      if (iVar14 != 0) {
        do {
          pbVar13 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8._0_1_ = 0x3b;
          local_58 = pbVar13;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"blacklist");
          local_8 = CONCAT31(local_8._1_3_,0x3c);
          local_54 = (uint)pbVar8 | 0x10000;
          pbVar9 = local_48;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar11 = (undefined4 *)FUN_00402440(pbVar7,(int)pbVar9);
          FUN_004024e0(&stack0xffffff6c,puVar11);
          local_4c = FUN_004a3a90(pbVar13,10,pbVar16);
          local_8 = 0x3d;
          FUN_004130e0(local_60,&local_4c);
          local_8 = 0;
          pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffeffff);
          FUN_00401b20((int *)local_2c);
          pbVar15 = local_48 + 1;
          local_48 = pbVar15;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"blacklist");
          local_8._0_1_ = 0x3a;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          pbVar13 = (basic_string<> *)FUN_00402460((int *)pbVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00401b20((int *)local_2c);
          pbVar9 = pbVar8;
        } while (pbVar15 < pbVar13);
      }
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x37;
    local_58 = pbVar9;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"blacklist");
    local_8 = CONCAT31(local_8._1_3_,0x38);
    local_54 = (uint)pbVar8 | 0x8000;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,10,pbVar16);
    local_8 = 0x39;
    FUN_004130e0(local_60,&local_48);
    local_8 = 0;
    FUN_00401b20((int *)local_2c);
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffff7fff);
    pbVar9 = pbVar8;
  }
  local_50 = pbVar9;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
  iVar14 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar14 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar9 = local_50;
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
      local_8._0_1_ = 0x41;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar14 = FUN_00402460((int *)pbVar7);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401b20((int *)local_2c);
      pbVar9 = local_50;
      if (iVar14 != 0) {
        do {
          pbVar13 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8._0_1_ = 0x42;
          local_58 = pbVar13;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
          local_8 = CONCAT31(local_8._1_3_,0x43);
          local_54 = (uint)pbVar8 | 0x40000;
          pbVar9 = local_48;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar11 = (undefined4 *)FUN_00402440(pbVar7,(int)pbVar9);
          FUN_004024e0(&stack0xffffff6c,puVar11);
          local_4c = FUN_004a3a90(pbVar13,0xc,pbVar16);
          local_8 = 0x44;
          FUN_004130e0(local_60,&local_4c);
          local_8 = 0;
          pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffbffff);
          FUN_00401b20((int *)local_2c);
          pbVar15 = local_48 + 1;
          local_48 = pbVar15;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
          local_8._0_1_ = 0x41;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          pbVar13 = (basic_string<> *)FUN_00402460((int *)pbVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00401b20((int *)local_2c);
          pbVar9 = pbVar8;
        } while (pbVar15 < pbVar13);
      }
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x3e;
    local_58 = pbVar9;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"setstat");
    local_8 = CONCAT31(local_8._1_3_,0x3f);
    local_54 = (uint)pbVar8 | 0x20000;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,0xc,pbVar16);
    local_8 = 0x40;
    FUN_004130e0(local_60,&local_48);
    local_8 = 0;
    FUN_00401b20((int *)local_2c);
    pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xfffdffff);
    pbVar9 = pbVar8;
  }
  local_50 = pbVar9;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
  iVar14 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar14 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
    iVar14 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    pbVar9 = local_50;
    if (iVar14 != 0) {
      local_48 = (basic_string<> *)0x0;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
      local_8._0_1_ = 0x48;
      pbVar7 = FUN_0047d5c0((byte *)local_2c);
      iVar14 = FUN_00402460((int *)pbVar7);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401b20((int *)local_2c);
      pbVar9 = local_50;
      if (iVar14 != 0) {
        do {
          pbVar13 = (basic_string<> *)FUN_005adb0f(0x24);
          local_8._0_1_ = 0x49;
          local_58 = pbVar13;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
          local_8 = CONCAT31(local_8._1_3_,0x4a);
          local_54 = (uint)pbVar8 | 0x100000;
          pbVar9 = local_48;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          puVar11 = (undefined4 *)FUN_00402440(pbVar7,(int)pbVar9);
          FUN_004024e0(&stack0xffffff6c,puVar11);
          local_4c = FUN_004a3a90(pbVar13,0xb,pbVar16);
          local_8 = 0x4b;
          FUN_004130e0(local_60,&local_4c);
          local_8 = 0;
          pbVar8 = (basic_string<> *)((uint)pbVar8 & 0xffefffff);
          FUN_00401b20((int *)local_2c);
          pbVar15 = local_48 + 1;
          local_48 = pbVar15;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
          local_8._0_1_ = 0x48;
          pbVar7 = FUN_0047d5c0((byte *)local_2c);
          pbVar13 = (basic_string<> *)FUN_00402460((int *)pbVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00401b20((int *)local_2c);
          pbVar9 = pbVar8;
        } while (pbVar15 < pbVar13);
      }
    }
  }
  else {
    pbVar9 = (basic_string<> *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x45;
    local_58 = pbVar9;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"changestat");
    local_8 = CONCAT31(local_8._1_3_,0x46);
    local_54 = (uint)pbVar8 | 0x80000;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pbVar9,0xb,pbVar16);
    local_8 = 0x47;
    FUN_004130e0(local_60,&local_48);
    local_8 = 0;
    FUN_00401b20((int *)local_2c);
    pbVar9 = (basic_string<> *)((uint)pbVar8 & 0xfff7ffff);
  }
  local_50 = pbVar9;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"resetcontracts");
  local_8._0_1_ = 0x4c;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar4 = FUN_00403260(pbVar7,&DAT_005e425c);
  local_8._0_1_ = 0;
  FUN_00401b20((int *)local_2c);
  if (cVar4 != '\0') {
    pvVar10 = (void *)FUN_005adb0f(0x24);
    local_8._0_1_ = 0x4d;
    local_58 = pvVar10;
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"resetcontracts");
    local_8 = CONCAT31(local_8._1_3_,0x4e);
    local_54 = (uint)local_50 | 0x200000;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)pbVar7);
    local_48 = FUN_004a3a90(pvVar10,0xd,pbVar16);
    local_8 = 0x4f;
    FUN_004130e0(local_60,&local_48);
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    FUN_00401b20((int *)local_2c);
  }
  local_58 = (basic_string<> *)&stack0xffffff6c;
  FUN_004024e0(&stack0xffffff6c,local_44);
  local_8._0_1_ = 0x50;
  pvVar10 = (void *)FUN_00412700();
  local_8 = (uint)local_8._1_3_ << 8;
  puVar11 = (undefined4 *)FUN_00439b40(pvVar10,(byte *)pbVar16);
  *local_64 = puVar11;
  std::basic_string<>::operator=((basic_string<> *)(puVar11 + 0xc),local_68);
  FUN_00412900(puVar11 + 0x15,&local_6c);
  FUN_00402490(local_6c + 0xd);
  FUN_00402490(puVar11);
  FUN_00591070(&DAT_005cdc70,
               "Added email draft to set \'%s\' (subject \"%s\" with %d reqs and %d flags");
  FUN_00401b20((int *)local_44);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00473f80(void)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  char *_Str;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *****pppppbVar11;
  byte ****ppppbVar12;
  void *pvVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  double dVar16;
  byte *in_stack_ffffff58;
  undefined1 *local_80 [2];
  undefined4 *local_78;
  byte *local_74;
  char *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined1 *local_64;
  undefined4 *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte ****local_44 [3];
  char *local_38;
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
  puStack_c = &LAB_005b7dd0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_64 = (undefined1 *)FUN_005adb0f(0xf0);
  pbVar6 = local_64 + 4;
  *local_64 = 0;
  *(undefined4 *)(local_64 + 0x14) = 0;
  *(undefined4 *)(local_64 + 0x18) = 0xf;
  *pbVar6 = 0;
  pbVar14 = local_64 + 0x20;
  *(undefined4 *)(local_64 + 0x30) = 0;
  *(undefined4 *)(local_64 + 0x34) = 0xf;
  *pbVar14 = 0;
  *(undefined4 *)(local_64 + 0x38) = 0;
  *(undefined4 *)(local_64 + 0x3c) = 0;
  *(undefined4 *)(local_64 + 0x40) = 0;
  *(undefined4 *)(local_64 + 0x44) = 0;
  *(undefined4 *)(local_64 + 0x48) = 0;
  *(undefined4 *)(local_64 + 0x4c) = 0;
  *(undefined4 *)(local_64 + 0x50) = 0;
  *(undefined4 *)(local_64 + 0x54) = 0;
  *(undefined4 *)(local_64 + 0x58) = 0;
  *(undefined4 *)(local_64 + 0x5c) = 0;
  local_74 = local_64 + 100;
  *(undefined4 *)(local_64 + 0x60) = 0;
  *(undefined4 *)(local_64 + 0x74) = 0;
  *(undefined4 *)(local_64 + 0x78) = 0xf;
  *local_74 = 0;
  *(undefined4 *)(local_64 + 0x7c) = 0xbf800000;
  *(undefined4 *)(local_64 + 0x90) = 0;
  *(undefined4 *)(local_64 + 0x94) = 0xf;
  local_64[0x80] = 0;
  *(undefined4 *)(local_64 + 0xa8) = 0;
  *(undefined4 *)(local_64 + 0xac) = 0xf;
  local_64[0x98] = 0;
  pbVar10 = local_64 + 0xb0;
  *(undefined4 *)(local_64 + 0xc0) = 0;
  *(undefined4 *)(local_64 + 0xc4) = 0xf;
  *pbVar10 = 0;
  *(undefined4 *)(local_64 + 200) = 0;
  *(undefined4 *)(local_64 + 0xcc) = 0;
  *(undefined4 *)(local_64 + 0xd0) = 0;
  *(undefined4 *)(local_64 + 0xe4) = 0;
  *(undefined4 *)(local_64 + 0xe8) = 0xf;
  local_64[0xd4] = 0;
  local_8 = 0xb;
  puVar3 = (undefined4 *)FUN_005adb0f(0x10);
  local_8 = 0xffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 **)(local_64 + 0xec) = puVar3;
  local_80[0] = local_64;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sectorid",8);
  local_8 = 0xc;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  iVar5 = atoi((char *)pbVar4);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  *(int *)(local_64 + 0x38) = iVar5;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
LAB_0047419f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005eaeac,3);
  local_8 = 0xd;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar6 != pbVar4) {
    pbVar9 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar9 = *(byte **)pbVar4;
    }
    FUN_00402690(pbVar6,pbVar9,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 0xe;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar10 != pbVar6) {
    pbVar4 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar4 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar10,pbVar4,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  FUN_00463aa0(*(int *)(local_64 + 0xec));
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea768,4);
  local_8 = 0xf;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar14 != pbVar6) {
    pbVar10 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar10 = *(byte **)pbVar6;
    }
    FUN_00402690(pbVar14,pbVar10,*(uint *)(pbVar6 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e99fc,4);
  local_8 = 0x10;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(local_44,(undefined4 *)pbVar6);
  ppppbVar12 = local_44[0];
  iVar5 = 0;
  do {
    pbVar6 = (&PTR_s_debris_005df834)[iVar5];
    pbVar14 = pbVar6;
    do {
      bVar1 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar1 != 0);
    pppppbVar11 = local_44;
    if (0xf < local_30) {
      pppppbVar11 = (byte *****)ppppbVar12;
    }
    uVar7 = FUN_004031f0((byte *)pppppbVar11,local_34,pbVar6,(int)pbVar14 - (int)(pbVar6 + 1));
    if ((char)uVar7 != '\0') {
      if (0xf < local_30) {
        pppppbVar11 = (byte *****)ppppbVar12;
        if ((0xfff < local_30 + 1) &&
           (pppppbVar11 = (byte *****)ppppbVar12[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar12 + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar11);
      }
      goto LAB_00474458;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  if (0xf < local_30) {
    pppppbVar11 = (byte *****)ppppbVar12;
    if ((0xfff < local_30 + 1) &&
       (pppppbVar11 = (byte *****)ppppbVar12[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar12 + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  iVar5 = 0;
LAB_00474458:
  puVar15 = local_64;
  local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  *(int *)(local_64 + 0x1c) = iVar5;
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"flagproximity",0xd);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"flagproximity",0xd);
    local_8 = 0x11;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    dVar16 = atof((char *)pbVar6);
    *(float *)(puVar15 + 0x7c) = (float)dVar16;
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"dataflag",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"dataflag",8);
    local_8 = 0x12;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (puVar15 + 0xd4 != pbVar6) {
      pbVar14 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar14 = *(byte **)pbVar6;
      }
      FUN_00402690(puVar15 + 0xd4,pbVar14,*(uint *)(pbVar6 + 0x10));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"scenario",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"scenario",8);
    local_8 = 0x13;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (pbVar6 != (byte *)&DAT_00655708) {
      pbVar14 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar14 = *(byte **)pbVar6;
      }
      FUN_00402690(&DAT_00655708,pbVar14,*(uint *)(pbVar6 + 0x10));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"structure",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"structure",9);
    local_8 = 0x14;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (puVar15 + 0x80 != pbVar6) {
      pbVar14 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar14 = *(byte **)pbVar6;
      }
      FUN_00402690(puVar15 + 0x80,pbVar14,*(uint *)(pbVar6 + 0x10));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9710,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 != 0) {
    local_60 = (undefined4 *)FUN_005adb0f(0x18);
    local_1c = 0;
    local_18 = 0xf;
    *local_60 = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    *(undefined4 **)(puVar15 + 0x60) = local_60;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e9710,4);
    local_8 = 0x15;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)pbVar6);
    FUN_004b34b0(*(void **)(puVar15 + 0x60),in_stack_ffffff58);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ead0c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ead0c,3);
  if (iVar5 == 0) {
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar5 != 0) {
      uVar7 = 0;
      iVar5 = 0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005ead0c,3);
        local_8 = 0x17;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_0047419f;
          FUN_005adb3f(pvVar13);
        }
        if ((uint)((iVar8 - iVar2) / 0x18) <= uVar7) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005ead0c,3);
        local_8 = 0x18;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff58,(undefined4 *)(*(int *)pbVar6 + iVar5));
        local_60 = (undefined4 *)FUN_00507890(in_stack_ffffff58);
        puVar3 = *(undefined4 **)(local_64 + 0x40);
        if (*(undefined4 **)(local_64 + 0x44) == puVar3) {
          FUN_004141e0(local_64 + 0x3c,puVar3,&local_60);
        }
        else {
          *puVar3 = local_60;
          *(int *)(local_64 + 0x40) = *(int *)(local_64 + 0x40) + 4;
        }
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_0047419f;
          FUN_005adb3f(pvVar13);
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0x18;
      } while( true );
    }
  }
  else {
    local_8 = 0x16;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)pbVar6);
    local_60 = (undefined4 *)FUN_00507890(in_stack_ffffff58);
    puVar3 = *(undefined4 **)(puVar15 + 0x40);
    if (*(undefined4 **)(puVar15 + 0x44) == puVar3) {
      FUN_004141e0(puVar15 + 0x3c,puVar3,&local_60);
    }
    else {
      *puVar3 = local_60;
      *(int *)(puVar15 + 0x40) = *(int *)(puVar15 + 0x40) + 4;
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_00401b20((int *)local_2c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hidden",6);
  local_8 = 0x19;
  pbVar14 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar6 = pbVar14;
  if (0xf < *(uint *)(pbVar14 + 0x14)) {
    pbVar6 = *(byte **)pbVar14;
  }
  uVar7 = FUN_004031f0(pbVar6,*(uint *)(pbVar14 + 0x10),&DAT_005e425c,4);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  puVar15 = local_64;
  if ((char)uVar7 != '\0') {
    *local_64 = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"cargo",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cargo",5);
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
    if (iVar5 != 0) {
      uVar7 = 0;
      iVar5 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"cargo",5);
        local_8 = 0x1e;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_0047419f;
          FUN_005adb3f(pvVar13);
        }
        if ((uint)((iVar8 - iVar2) / 0x18) <= uVar7) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"cargo",5);
        local_8 = 0x1f;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff58,(undefined4 *)(*(int *)pbVar6 + iVar5));
        FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff58);
        local_8._0_1_ = 0x21;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_0047419f;
          FUN_005adb3f(pvVar13);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if ((int)(local_34 - (int)local_38) / 0x18 == 2) {
          puVar3 = (undefined4 *)FUN_005adb0f(8);
          local_8._0_1_ = 0x22;
          local_68 = puVar3;
          FUN_004024e0(&stack0xffffff58,(undefined4 *)(local_38 + 0x18));
          _Str = local_38;
          if (0xf < *(uint *)(local_38 + 0x14)) {
            _Str = *(char **)local_38;
          }
          iVar8 = atoi(_Str);
          local_60 = FUN_00521420(puVar3,iVar8,in_stack_ffffff58);
          local_8 = CONCAT31(local_8._1_3_,0x21);
          puVar3 = *(undefined4 **)(local_64 + 0x4c);
          if (*(undefined4 **)(local_64 + 0x50) == puVar3) {
            FUN_00414080(local_64 + 0x48,puVar3,&local_60);
          }
          else {
            *puVar3 = local_60;
            *(int *)(local_64 + 0x4c) = *(int *)(local_64 + 0x4c) + 4;
          }
        }
        else {
          FUN_00591070("ERROR","Invalid cargo for synthetic object.");
        }
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0((int *)&local_38);
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0x18;
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"cargo",5);
    local_8 = 0x1a;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)pbVar6);
    FUN_00592d70(&local_70,',',(undefined4 *)in_stack_ffffff58);
    local_8._0_1_ = 0x1c;
    if (0xf < local_30) {
      ppppbVar12 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppbVar12 = (byte ****)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppbVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar12);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
    if (((int)local_6c - (int)local_70) / 0x18 == 2) {
      puVar3 = (undefined4 *)FUN_005adb0f(8);
      local_8._0_1_ = 0x1d;
      local_60 = puVar3;
      FUN_004024e0(&stack0xffffff58,(undefined4 *)(local_70 + 0x18));
      if (0xf < *(uint *)(local_70 + 0x14)) {
        local_70 = *(char **)local_70;
      }
      iVar5 = atoi(local_70);
      local_60 = FUN_00521420(puVar3,iVar5,in_stack_ffffff58);
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      puVar3 = *(undefined4 **)(puVar15 + 0x4c);
      if (*(undefined4 **)(puVar15 + 0x50) == puVar3) {
        FUN_00414080(puVar15 + 0x48,puVar3,&local_60);
      }
      else {
        *puVar3 = local_60;
        *(int *)(puVar15 + 0x4c) = *(int *)(puVar15 + 0x4c) + 4;
      }
    }
    else {
      FUN_00591070("ERROR","Invalid cargo for synthetic object.");
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_70);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"setflag",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"setflag",7);
    local_8 = 0x23;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (local_74 != pbVar6) {
      pbVar14 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar14 = *(byte **)pbVar6;
      }
      FUN_00402690(local_74,pbVar14,*(uint *)(pbVar6 + 0x10));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar3 = local_68;
  iVar5 = 0;
  local_60 = local_6c;
  while (local_60 != puVar3) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  if (iVar5 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
    puVar15 = local_64;
    if (iVar5 != 0) {
      uVar7 = 0;
      iVar5 = 0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005e970c,3);
        local_8 = 0x27;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar6 + 4);
        iVar2 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_0047419f;
          FUN_005adb3f(pvVar13);
        }
        puVar15 = local_64;
        if ((uint)((iVar8 - iVar2) / 0x18) <= uVar7) break;
        puVar3 = (undefined4 *)FUN_005adb0f(0x40);
        local_8 = 0x28;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_68 = puVar3;
        FUN_00402690(local_5c,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,0x29);
        local_78 = (undefined4 *)((uint)local_78 | 2);
        local_60 = local_78;
        pbVar6 = FUN_0047d5c0((byte *)local_5c);
        FUN_004024e0(&stack0xffffff58,(undefined4 *)(*(int *)pbVar6 + iVar5));
        local_74 = (byte *)FUN_004a1a40(puVar3,(undefined4 *)in_stack_ffffff58);
        local_8 = 0x2a;
        puVar3 = *(undefined4 **)(local_64 + 0x58);
        if (*(undefined4 **)(local_64 + 0x5c) == puVar3) {
          FUN_004141e0(local_64 + 0x54,puVar3,&local_74);
        }
        else {
          *puVar3 = local_74;
          *(int *)(local_64 + 0x58) = *(int *)(local_64 + 0x58) + 4;
        }
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        local_78 = (undefined4 *)((uint)local_78 & 0xfffffffd);
        if (0xf < local_48) {
          pvVar13 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar13 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13)))) goto LAB_0047419f;
          FUN_005adb3f(pvVar13);
        }
        uVar7 = uVar7 + 1;
        local_4c = 0;
        local_48 = 0xf;
        iVar5 = iVar5 + 0x18;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_005adb0f(0x40);
    local_8 = 0x24;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_68 = puVar3;
    FUN_00402690(local_2c,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,0x25);
    local_60 = (undefined4 *)0x1;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)pbVar6);
    local_74 = (byte *)FUN_004a1a40(puVar3,(undefined4 *)in_stack_ffffff58);
    puVar15 = local_64;
    local_8 = 0x26;
    puVar3 = *(undefined4 **)(local_64 + 0x58);
    if (*(undefined4 **)(local_64 + 0x5c) == puVar3) {
      FUN_004141e0(local_64 + 0x54,puVar3,&local_74);
    }
    else {
      *puVar3 = local_74;
      *(int *)(local_64 + 0x58) = *(int *)(local_64 + 0x58) + 4;
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar13);
    }
  }
  FUN_004024e0(&stack0xffffff58,&DAT_00655708);
  iVar5 = FUN_004a82e0(in_stack_ffffff58);
  if (iVar5 == 0) {
    FUN_00591070("ERROR","Invalid scenario for synthetic object - \'%s\'");
  }
  puVar3 = *(undefined4 **)(iVar5 + 0x334);
  if (*(undefined4 **)(iVar5 + 0x338) == puVar3) {
    FUN_00414080((void *)(iVar5 + 0x330),puVar3,local_80);
  }
  else {
    *puVar3 = puVar15;
    *(int *)(iVar5 + 0x334) = *(int *)(iVar5 + 0x334) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
