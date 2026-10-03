#include "../ois_server.exe.h"


void FUN_00449350(void)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte ***pppbVar5;
  bool bVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  byte ****ppppbVar13;
  void *pvVar14;
  char *pcVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  uint uVar18;
  double dVar19;
  int *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  int *local_64;
  undefined4 *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte ***local_44 [4];
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
  puStack_c = &LAB_005b42c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar7 = (int *)FUN_005adb0f(0x3c);
  local_34 = 0;
  piVar12 = piVar7 + 10;
  local_30 = 0xf;
  piVar7[2] = 0;
  piVar7[3] = 0;
  piVar7[8] = 0;
  piVar7[9] = 0xf;
  *(undefined1 *)(piVar7 + 4) = 0;
  *piVar12 = 0;
  piVar7[0xb] = 0;
  piVar7[0xc] = 0;
  *(undefined1 *)(piVar7 + 0xd) = 0;
  piVar7[0xe] = 0;
  local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
  local_70 = piVar7;
  local_64 = piVar7;
  FUN_00402690(local_44,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar8 + 0x14)) {
    pbVar8 = *(byte **)pbVar8;
  }
  iVar9 = atoi((char *)pbVar8);
  *piVar7 = iVar9;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    ppppbVar13 = (byte ****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (ppppbVar13 = (byte ****)local_44[0][-1],
       (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)ppppbVar13)))) {
LAB_00449446:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e99fc,4);
  local_8 = 1;
  pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(local_44,(undefined4 *)pbVar8);
  pppbVar5 = local_44[0];
  iVar9 = 0;
  do {
    pcVar15 = (&PTR_DAT_005df7f0)[iVar9];
    pcVar11 = pcVar15 + 1;
    do {
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 != '\0');
    ppppbVar13 = local_44;
    if (0xf < local_30) {
      ppppbVar13 = (byte ****)pppbVar5;
    }
    uVar10 = FUN_004031f0((byte *)ppppbVar13,local_34,(&PTR_DAT_005df7f0)[iVar9],
                          (int)pcVar15 - (int)pcVar11);
    if ((char)uVar10 != '\0') {
      if (0xf < local_30) {
        ppppbVar13 = (byte ****)pppbVar5;
        if ((0xfff < local_30 + 1) &&
           (ppppbVar13 = (byte ****)pppbVar5[-1],
           (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar13);
      }
      goto LAB_00449551;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  if (0xf < local_30) {
    ppppbVar13 = (byte ****)pppbVar5;
    if ((0xfff < local_30 + 1) &&
       (ppppbVar13 = (byte ****)pppbVar5[-1],
       (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar13);
  }
  iVar9 = 1;
LAB_00449551:
  piVar3 = local_64;
  local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_64[1] = iVar9;
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
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 2;
  pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar8 + 0x14)) {
    pbVar8 = *(byte **)pbVar8;
  }
  dVar19 = atof((char *)pbVar8);
  piVar3[2] = (int)(float)dVar19;
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
  pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar8 + 0x14)) {
    pbVar8 = *(byte **)pbVar8;
  }
  dVar19 = atof((char *)pbVar8);
  piVar3[3] = (int)(float)dVar19;
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
  FUN_00402690(local_2c,"adjacent",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  puVar17 = local_68;
  iVar9 = 0;
  local_60 = local_6c;
  while (local_60 != puVar17) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  FUN_00402690(local_2c,"adjacent",8);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar10 = 0;
      local_60 = (undefined4 *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"adjacent",8);
        local_8 = 5;
        pbVar8 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = *(int *)(pbVar8 + 4);
        iVar4 = *(int *)pbVar8;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00449446;
          FUN_005adb3f(pvVar14);
        }
        if ((uint)((iVar9 - iVar4) / 0x18) <= uVar10) goto LAB_004497f0;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"adjacent",8);
        local_8 = 6;
        pbVar8 = FUN_0047d5c0((byte *)local_2c);
        puVar17 = local_60;
        pcVar11 = (char *)(*(int *)pbVar8 + (int)local_60);
        if (0xf < *(uint *)(pcVar11 + 0x14)) {
          pcVar11 = *(char **)pcVar11;
        }
        local_60 = (undefined4 *)atoi(pcVar11);
        piVar3 = (int *)piVar7[0xb];
        if ((int *)piVar7[0xc] == piVar3) {
          FUN_004141e0(piVar12,piVar3,&local_60);
        }
        else {
          *piVar3 = (int)local_60;
          piVar7[0xb] = piVar7[0xb] + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_00449446;
          FUN_005adb3f(pvVar14);
        }
        uVar10 = uVar10 + 1;
        local_60 = puVar17 + 6;
      } while( true );
    }
  }
  else {
    local_8 = 4;
    pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar8 = *(byte **)pbVar8;
    }
    local_60 = (undefined4 *)atoi((char *)pbVar8);
    piVar3 = (int *)piVar7[0xb];
    if ((int *)piVar7[0xc] == piVar3) {
      FUN_004141e0(piVar12,piVar3,&local_60);
    }
    else {
      *piVar3 = (int)local_60;
      piVar7[0xb] = piVar7[0xb] + 4;
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
LAB_004497f0:
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"meshtype",8);
    FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
    iVar9 = 0;
    local_60 = local_6c;
    while (local_60 != local_68) {
      iVar9 = iVar9 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_60);
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
    piVar12 = local_64;
    if (iVar9 != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"meshtype",8);
      local_8 = 7;
      pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      FUN_004024e0(local_44,(undefined4 *)pbVar8);
      pppbVar5 = local_44[0];
      iVar9 = 0;
      do {
        pbVar8 = (&PTR_s_normal_005df804)[iVar9];
        pbVar16 = pbVar8;
        do {
          bVar2 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar2 != 0);
        ppppbVar13 = local_44;
        if (0xf < local_30) {
          ppppbVar13 = (byte ****)pppbVar5;
        }
        uVar10 = FUN_004031f0((byte *)ppppbVar13,local_34,pbVar8,(int)pbVar16 - (int)(pbVar8 + 1));
        if ((char)uVar10 != '\0') {
          if (0xf < local_30) {
            ppppbVar13 = (byte ****)pppbVar5;
            if ((0xfff < local_30 + 1) &&
               (ppppbVar13 = (byte ****)pppbVar5[-1],
               (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar13);
          }
          goto LAB_00449b08;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 6);
      if (0xf < local_30) {
        ppppbVar13 = (byte ****)pppbVar5;
        if ((0xfff < local_30 + 1) &&
           (ppppbVar13 = (byte ****)pppbVar5[-1],
           (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar13);
      }
      iVar9 = 0;
LAB_00449b08:
      piVar12 = local_64;
      local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
      local_30 = 0xf;
      local_34 = 0;
      local_64[0xe] = iVar9;
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
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,"linktostation",0xd);
    local_8 = 8;
    pbVar16 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    pbVar8 = pbVar16;
    if (0xf < *(uint *)(pbVar16 + 0x14)) {
      pbVar8 = *(byte **)pbVar16;
    }
    uVar10 = FUN_004031f0(pbVar8,*(uint *)(pbVar16 + 0x10),&DAT_005e425c,4);
    local_8 = 0xffffffff;
    if (0xf < local_48) {
      pvVar14 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar14 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if ((char)uVar10 != '\0') {
      *(undefined1 *)(piVar12 + 0xd) = 1;
    }
    for (puVar17 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar17 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar17 = puVar17 + 1) {
      piVar12 = (int *)*puVar17;
      if (*piVar12 == DAT_00655050) goto LAB_00449c31;
    }
    piVar12 = (int *)0x0;
LAB_00449c31:
    puVar17 = (undefined4 *)piVar12[0x2b];
    piVar7 = piVar12 + 0x2a;
    iVar9 = *piVar7;
    uVar18 = (int)puVar17 - iVar9 >> 2;
    uVar10 = 0;
    local_60 = puVar17;
    if (uVar18 != 0) {
      do {
        piVar3 = *(int **)(iVar9 + uVar10 * 4);
        iVar9 = *piVar7;
        if (*piVar3 == *local_64) {
          if (piVar3[1] == local_64[1]) {
            if (piVar3 != (int *)0x0) {
              bVar6 = cc_assert_script_compatible("Nav point with duplicate ID.");
              if (!bVar6) {
                cocos2d::log("Assert failed: %s","Nav point with duplicate ID.");
              }
              puVar17 = (undefined4 *)piVar12[0x2b];
            }
            break;
          }
          iVar9 = *piVar7;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar18);
    }
    if ((undefined4 *)piVar12[0x2c] == puVar17) {
      FUN_00414080(piVar7,puVar17,&local_70);
    }
    else {
      *puVar17 = local_64;
      piVar12[0x2b] = piVar12[0x2b] + 4;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00449ce0(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte *this;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined4 *puVar12;
  byte *local_4c;
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
  puStack_c = &LAB_005b4338;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = (byte *)FUN_005adb0f(0xd0);
  iVar6 = DAT_0065b3b8;
  DAT_0065b3b8 = DAT_0065b3b8 + 1;
  this = FUN_00521340(local_4c,iVar6,1);
  *(undefined4 *)(this + 0x18) = DAT_00655050;
  puVar12 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar12 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar4 = (int *)*puVar12;
      if (*piVar4 == *(int *)(this + 0x18)) goto LAB_00449d64;
      puVar12 = puVar12 + 1;
    } while (puVar12 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar4 = (int *)0x0;
LAB_00449d64:
  *(int **)(this + 0x1c) = piVar4;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_4c = this;
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 0;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(this,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
LAB_00449de3:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 1;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x5c != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(this + 0x5c,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 2;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  local_8 = 0xffffffff;
  *(double *)(this + 0x20) = (double)iVar6;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 3;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  local_8 = 0xffffffff;
  *(double *)(this + 0x28) = (double)iVar6;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 4;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x3c != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(this + 0x3c,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9874,4);
  local_8 = 5;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x8c != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(this + 0x8c,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"probeflag",9);
  local_8 = 6;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x74 != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(this + 0x74,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e99fc,4);
  local_8 = 7;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  pbVar5 = pbVar7;
  if (0xf < *(uint *)(pbVar7 + 0x14)) {
    pbVar5 = *(byte **)pbVar7;
  }
  uVar8 = FUN_004031f0(pbVar5,*(uint *)(pbVar7 + 0x10),(byte *)&PTR_005ce008,0);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar11 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar11 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar11);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if ((char)uVar8 == '\0') {
    iVar6 = 0;
    do {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e99fc,4);
      local_8 = 8;
      pbVar5 = (&PTR_s_yellow_005ce6b8)[iVar6];
      pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      local_48 = pbVar5 + 1;
      pbVar7 = pbVar5;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      pbVar10 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar10 = *(byte **)pbVar9;
      }
      uVar8 = FUN_004031f0(pbVar10,*(uint *)(pbVar9 + 0x10),pbVar5,(int)pbVar7 - (int)local_48);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar11 = local_2c[0];
        if (0xfff < local_18 + 1) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_00449de3;
        }
        FUN_005adb3f(pvVar11);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if ((char)uVar8 != '\0') {
        *(int *)(this + 200) = iVar6;
        goto LAB_0044a2e8;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
  }
  bVar3 = cc_assert_script_compatible("Unknown star type found.");
  if (!bVar3) {
    cocos2d::log("Assert failed: %s","Unknown star type found.");
  }
LAB_0044a2e8:
  iVar6 = *(int *)(this + 0x1c);
  puVar12 = *(undefined4 **)(iVar6 + 0x88);
  local_48 = this;
  if (*(undefined4 **)(iVar6 + 0x8c) == puVar12) {
    FUN_00414080((void *)(iVar6 + 0x84),puVar12,&local_48);
  }
  else {
    *puVar12 = this;
    *(int *)(iVar6 + 0x88) = *(int *)(iVar6 + 0x88) + 4;
  }
  iVar2 = *(int *)(local_48 + 0x54);
  if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 0)) {
    puVar12 = *(undefined4 **)(iVar6 + 0x94);
    if (*(undefined4 **)(iVar6 + 0x98) == puVar12) {
      FUN_00414080((void *)(iVar6 + 0x90),puVar12,&local_48);
    }
    else {
      *puVar12 = local_48;
      *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + 4;
    }
  }
  iVar6 = DAT_0065b5cc;
  puVar12 = *(undefined4 **)(DAT_0065b5cc + 0x34);
  if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar12) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar12,&local_4c);
  }
  else {
    *puVar12 = this;
    *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_0044a3a0(void *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  void **ppvVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff84;
  char *local_54 [3];
  int *local_48;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4378;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff84,&param_1);
  FUN_00592d70(&local_48,',',in_stack_ffffff84);
  piVar8 = local_48;
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((local_44 - (int)local_48) / 0x18 == 2) {
    iVar7 = -1;
    local_1c = 0;
    local_30 = -1;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar4 = local_48;
    if (0xf < (uint)local_48[5]) {
      piVar4 = (int *)*local_48;
    }
    uVar1 = FUN_0042eeb0((int)piVar4,local_48[4],0,&DAT_005e9c44,1);
    if (uVar1 == 0xffffffff) {
      if (0xf < (uint)piVar8[5]) {
        piVar8 = (int *)*piVar8;
      }
      iVar2 = atoi((char *)piVar8);
      local_34 = iVar2;
    }
    else {
      FUN_004024e0(&stack0xffffff84,piVar8);
      FUN_00592d70(local_54,'-',in_stack_ffffff84);
      pcVar3 = local_54[0];
      if (0xf < *(uint *)(local_54[0] + 0x14)) {
        pcVar3 = *(char **)local_54[0];
      }
      iVar2 = atoi(pcVar3);
      pcVar3 = local_54[0] + 0x18;
      if (0xf < *(uint *)(local_54[0] + 0x2c)) {
        pcVar3 = *(char **)pcVar3;
      }
      local_34 = iVar2;
      iVar7 = atoi(pcVar3);
      local_30 = iVar7;
      FUN_004025a0((int *)local_54);
    }
    ppvVar5 = (void **)(local_48 + 6);
    if (local_2c != ppvVar5) {
      if (0xf < (uint)local_48[0xb]) {
        ppvVar5 = *ppvVar5;
      }
      FUN_00402690(local_2c,ppvVar5,local_48[10]);
      iVar7 = local_30;
      iVar2 = local_34;
    }
    piVar8 = *(int **)(local_38 + 0x118);
    if (*(int **)(local_38 + 0x11c) == piVar8) {
      FUN_0047ef10((void *)(local_38 + 0x114),piVar8,&local_34);
    }
    else {
      *piVar8 = iVar2;
      piVar8[1] = iVar7;
      FUN_004024e0(piVar8 + 2,local_2c);
      *(int *)(local_38 + 0x118) = *(int *)(local_38 + 0x118) + 0x20;
    }
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
  }
  FUN_004025a0((int *)&local_48);
  if (0xf < in_stack_00000018) {
    pvVar6 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar6 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_0044a5c0(void *param_1)

{
  char cVar1;
  bool bVar2;
  int *_Dst;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte ****ppppbVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *pvVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  uint in_stack_00000018;
  char *in_stack_ffffff78;
  undefined4 *local_60;
  int local_5c;
  undefined4 *local_54;
  int local_50;
  byte ***local_48 [3];
  char *local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b43c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff78,&param_1);
  FUN_00592d70(&local_54,',',(undefined4 *)in_stack_ffffff78);
  local_8._0_1_ = 1;
  _Dst = (int *)FUN_005adb0f(0x40);
  local_18 = _Dst;
  memset(_Dst,0,0x40);
  _Dst[5] = 0;
  _Dst[6] = 0xf;
  *(undefined1 *)(_Dst + 1) = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  local_30 = _Dst;
  FUN_004024e0(&stack0xffffff78,local_54);
  FUN_00592d70(&local_60,':',(undefined4 *)in_stack_ffffff78);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar11 = local_5c - (int)local_60 >> 0x1f;
  if ((local_5c - (int)local_60) / 0x18 + iVar11 != iVar11) {
    FUN_004024e0(local_48,local_60);
    iVar11 = 0;
    do {
      pcVar10 = (&PTR_DAT_005dd8ac)[iVar11];
      pcVar7 = pcVar10 + 1;
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      ppppbVar6 = local_48;
      if (0xf < local_34) {
        ppppbVar6 = (byte ****)local_48[0];
      }
      uVar3 = FUN_004031f0((byte *)ppppbVar6,local_38,(&PTR_DAT_005dd8ac)[iVar11],
                           (int)pcVar10 - (int)pcVar7);
      if ((char)uVar3 != '\0') {
        if (0xf < local_34) {
          ppppbVar6 = (byte ****)local_48[0];
          if ((0xfff < local_34 + 1) &&
             (ppppbVar6 = (byte ****)local_48[0][-1],
             (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)ppppbVar6)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar6);
        }
        goto LAB_0044a77e;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 6);
    if (0xf < local_34) {
      ppppbVar6 = (byte ****)local_48[0];
      if ((0xfff < local_34 + 1) &&
         (ppppbVar6 = (byte ****)local_48[0][-1],
         (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)ppppbVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar6);
    }
    iVar11 = 0;
LAB_0044a77e:
    *local_18 = iVar11;
  }
  if (1 < (uint)((local_5c - (int)local_60) / 0x18)) {
    piVar5 = local_60 + 6;
    if (local_18 + 1 != piVar5) {
      if (0xf < (uint)local_60[0xb]) {
        piVar5 = (int *)*piVar5;
      }
      FUN_00402690(local_18 + 1,piVar5,local_60[10]);
    }
  }
  local_20 = 1;
  if (1 < (uint)((local_50 - (int)local_54) / 0x18)) {
    do {
      FUN_004024e0(&stack0xffffff78,local_54 + local_20 * 6);
      FUN_00592d70(&local_3c,':',(undefined4 *)in_stack_ffffff78);
      pcVar13 = atoi_exref;
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar11 = (int)(local_38 - (int)local_3c) / 0x18;
      if (iVar11 == 2) {
        pcVar7 = local_3c;
        if (0xf < *(uint *)(local_3c + 0x14)) {
          pcVar7 = *(char **)local_3c;
        }
        puVar4 = (undefined4 *)atoi(pcVar7);
        pcVar7 = local_3c + 0x18;
        if (0xf < *(uint *)(local_3c + 0x2c)) {
          pcVar7 = *(char **)pcVar7;
        }
        local_14 = puVar4;
        iVar11 = atoi(pcVar7);
        pcVar7 = local_3c + 0x30;
        if (0xf < *(uint *)(local_3c + 0x44)) {
          pcVar7 = *(char **)pcVar7;
        }
        local_2c = iVar11;
        local_1c = atoi(pcVar7);
        if (puVar4 != (undefined4 *)0xffffffff) {
          uVar3 = 0;
          uVar12 = DAT_0065b5cc[1] - *DAT_0065b5cc >> 2;
          if (uVar12 != 0) {
            local_24 = (undefined4 *)*DAT_0065b5cc;
            puVar8 = local_24;
            do {
              if (*(undefined4 **)*puVar8 == puVar4) {
                iVar11 = local_2c;
                if (local_24[uVar3] != 0) goto LAB_0044a920;
                break;
              }
              uVar3 = uVar3 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar3 < uVar12);
          }
          in_stack_ffffff78 =
               "Invalid module configuration for \'%s %s\': (bad component %d in slot %d) %s";
          FUN_00591070("ERROR",
                       "Invalid module configuration for \'%s %s\': (bad component %d in slot %d) %s"
                      );
          bVar2 = cc_assert_script_compatible("Invalid component.");
          iVar11 = local_2c;
          if (!bVar2) {
            cocos2d::log("Assert failed: %s");
            iVar11 = local_2c;
          }
        }
LAB_0044a920:
        piVar5 = (int *)local_18[0xb];
        if ((int *)local_18[0xc] == piVar5) {
          FUN_004141e0(local_18 + 10,piVar5,&local_2c);
        }
        else {
          *piVar5 = iVar11;
          local_18[0xb] = local_18[0xb] + 4;
        }
        puVar8 = (undefined4 *)local_18[8];
        if ((undefined4 *)local_18[9] == puVar8) {
          FUN_004141e0(local_18 + 7,puVar8,&local_14);
        }
        else {
          *puVar8 = puVar4;
          local_18[8] = local_18[8] + 4;
        }
        piVar5 = (int *)_Dst[0xe];
        if ((int *)_Dst[0xf] == piVar5) {
LAB_0044ab92:
          FUN_004141e0(_Dst + 0xd,piVar5,&local_1c);
        }
        else {
          *piVar5 = local_1c;
          _Dst[0xe] = _Dst[0xe] + 4;
        }
      }
      else {
        if (iVar11 == 1) {
          pcVar7 = local_3c;
          if (0xf < *(uint *)(local_3c + 0x14)) {
            pcVar7 = *(char **)local_3c;
          }
          puVar4 = (undefined4 *)atoi(pcVar7);
          local_24 = puVar4;
          if (puVar4 != (undefined4 *)0xffffffff) {
            uVar3 = 0;
            uVar12 = DAT_0065b5cc[1] - *DAT_0065b5cc >> 2;
            if (uVar12 != 0) {
              local_14 = (undefined4 *)*DAT_0065b5cc;
              puVar8 = local_14;
              do {
                if (*(undefined4 **)*puVar8 == puVar4) {
                  if (local_14[uVar3] != 0) goto LAB_0044aa38;
                  break;
                }
                uVar3 = uVar3 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar3 < uVar12);
            }
            in_stack_ffffff78 =
                 "Invalid module configuration for \'%s %s\': (bad component %d in slot %d) %s";
            FUN_00591070("ERROR",
                         "Invalid module configuration for \'%s %s\': (bad component %d in slot %d) %s"
                        );
            bVar2 = cc_assert_script_compatible("Invalid component.");
            if (!bVar2) {
              cocos2d::log("Assert failed: %s");
            }
          }
LAB_0044aa38:
          local_14 = (undefined4 *)0x0;
          local_1c = -1;
          puVar8 = (undefined4 *)local_18[0xb];
          if ((undefined4 *)local_18[0xc] == puVar8) {
LAB_0044ab51:
            local_1c = -1;
            FUN_004141e0(local_18 + 10,puVar8,&local_14);
          }
          else {
            *puVar8 = 0;
            local_18[0xb] = local_18[0xb] + 4;
          }
        }
        else {
          pcVar7 = local_3c;
          if (0xf < *(uint *)(local_3c + 0x14)) {
            pcVar7 = *(char **)local_3c;
          }
          puVar4 = (undefined4 *)atoi(pcVar7);
          local_24 = puVar4;
          if (puVar4 != (undefined4 *)0xffffffff) {
            uVar3 = 0;
            uVar12 = DAT_0065b5cc[1] - *DAT_0065b5cc >> 2;
            if (uVar12 != 0) {
              local_14 = (undefined4 *)*DAT_0065b5cc;
              puVar8 = local_14;
              do {
                if (*(undefined4 **)*puVar8 == puVar4) {
                  pcVar13 = atoi_exref;
                  if (local_14[uVar3] != 0) goto LAB_0044ab1e;
                  break;
                }
                uVar3 = uVar3 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar3 < uVar12);
            }
            in_stack_ffffff78 =
                 "Invalid module configuration for \'%s %s\': (bad component %d in slot %d) %s";
            FUN_00591070("ERROR",
                         "Invalid module configuration for \'%s %s\': (bad component %d in slot %d) %s"
                        );
            bVar2 = cc_assert_script_compatible("Invalid component.");
            pcVar13 = atoi_exref;
            if (!bVar2) {
              cocos2d::log("Assert failed: %s");
              pcVar13 = atoi_exref;
            }
          }
LAB_0044ab1e:
          local_14 = (undefined4 *)(*pcVar13)();
          local_1c = -1;
          puVar8 = (undefined4 *)local_18[0xb];
          if ((undefined4 *)local_18[0xc] == puVar8) goto LAB_0044ab51;
          *puVar8 = local_14;
          local_18[0xb] = local_18[0xb] + 4;
        }
        puVar8 = (undefined4 *)local_18[8];
        if ((undefined4 *)local_18[9] == puVar8) {
          FUN_004141e0(local_18 + 7,puVar8,&local_24);
        }
        else {
          *puVar8 = puVar4;
          local_18[8] = local_18[8] + 4;
        }
        piVar5 = (int *)_Dst[0xe];
        if ((int *)_Dst[0xf] == piVar5) goto LAB_0044ab92;
        *piVar5 = -1;
        _Dst[0xe] = _Dst[0xe] + 4;
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004025a0((int *)&local_3c);
      local_20 = local_20 + 1;
    } while (local_20 < (uint)((local_50 - (int)local_54) / 0x18));
  }
  puVar4 = *(undefined4 **)(local_28 + 0x124);
  if (*(undefined4 **)(local_28 + 0x128) == puVar4) {
    FUN_00414080((void *)(local_28 + 0x120),puVar4,&local_30);
  }
  else {
    *puVar4 = local_18;
    *(int *)(local_28 + 0x124) = *(int *)(local_28 + 0x124) + 4;
  }
  FUN_004025a0((int *)&local_60);
  FUN_004025a0((int *)&local_54);
  if (0xf < in_stack_00000018) {
    pvVar9 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar9 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  return;
}


void FUN_0044ac60(void)

{
  int iVar1;
  byte *pbVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  void *in_stack_fffffec4;
  undefined1 auStack_124 [16];
  undefined4 uStack_114;
  undefined1 auStack_10c [4];
  undefined4 uStack_108;
  byte *in_stack_ffffff00;
  undefined4 *local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  basic_string<> local_bc [24];
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
  undefined1 local_50 [4];
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
  puStack_c = &LAB_005b463e;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c0 = 0;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e99fc,4);
  local_8 = 0;
  uStack_108 = 0x44acd3;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  uStack_108 = 0x44acdb;
  FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
  local_cc = (undefined4 *)FUN_0040e390(in_stack_ffffff00);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar3 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar3 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
LAB_0044ad13:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  pvVar3 = (void *)FUN_005adb0f(300);
  local_8 = 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"destroyedthreshold",0x12);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_c0 = 1;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"damagethreshold",0xf);
  local_8 = 3;
  local_c0 = 3;
  local_94 = 0;
  local_90 = 0xf;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
  FUN_00402690(local_a4,&DAT_005e9d48,2);
  local_8 = 4;
  local_c0 = 7;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  FUN_00402690(local_8c,"manufacturer",0xc);
  local_8 = 5;
  local_c0 = 0xf;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  FUN_00402690(local_74,"shortname",9);
  local_8 = 6;
  local_c0 = 0x1f;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,&DAT_005e431c,4);
  iVar9 = DAT_0065b3ac;
  local_8 = 7;
  local_c0 = 0x3f;
  DAT_0065b3ac = DAT_0065b3ac + 1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  atoi((char *)pbVar2);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  atoi((char *)pbVar2);
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_a4);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  atoi((char *)pbVar2);
  uStack_114 = 0x44af04;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
  uStack_114 = 0x44af0c;
  FUN_004024e0(auStack_10c,(undefined4 *)pbVar2);
  local_8 = 8;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
  FUN_004024e0(auStack_124,(undefined4 *)pbVar2);
  local_8._0_1_ = 9;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  FUN_004024e0(&stack0xfffffec4,(undefined4 *)pbVar2);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar4 = FUN_004b02d0(pvVar3,iVar9,local_cc,in_stack_fffffec4);
  local_8 = 0xe;
  local_cc = puVar4;
  if (0xf < local_48) {
    pvVar3 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar3 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_8 = 0xd;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar3 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar3 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_8 = 0xc;
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  if (0xf < local_78) {
    pvVar3 = local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (pvVar3 = *(void **)((int)local_8c[0] + -4),
       0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_8 = 0xb;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  if (0xf < local_90) {
    pvVar3 = local_a4[0];
    if ((0xfff < local_90 + 1) &&
       (pvVar3 = *(void **)((int)local_a4[0] + -4),
       0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_8 = 10;
  local_94 = 0;
  local_90 = 0xf;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
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
  local_8 = 0xffffffff;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"email",5);
  local_8 = 0x10;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar4 + 0x1a) != pbVar2) {
    pbVar6 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar6 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x1a,pbVar6,*(uint *)(pbVar2 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"basevalue",9);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar1 = local_c4;
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != iVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"basevalue",9);
    local_8 = 0x11;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar9 = atoi((char *)pbVar2);
    puVar4[0x24] = iVar9;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"configuration",0xd);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar1 = local_c4;
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != iVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"configuration",0xd);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    if (iVar9 != 0) {
      uVar11 = 0;
      local_c0 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"configuration",0xd);
        local_8 = 0x13;
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = *(int *)(pbVar2 + 4);
        iVar1 = *(int *)pbVar2;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar3 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar3 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044ad13;
          FUN_005adb3f(pvVar3);
        }
        if ((uint)((iVar9 - iVar1) / 0x18) <= uVar11) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"configuration",0xd);
        local_8 = 0x14;
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = local_c0;
        uStack_108 = 0x44b5f0;
        FUN_004024e0(&stack0xffffff00,(undefined4 *)(*(int *)pbVar2 + local_c0));
        FUN_0044a5c0(in_stack_ffffff00);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar3 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar3 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044ad13;
          FUN_005adb3f(pvVar3);
        }
        uVar11 = uVar11 + 1;
        local_c0 = iVar9 + 0x18;
      }
    }
  }
  else {
    local_8 = 0x12;
    uStack_108 = 0x44b3ed;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44b3f5;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    FUN_0044a5c0(in_stack_ffffff00);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
  }
  if ((uint)(puVar4[0x49] - puVar4[0x48]) < 4) {
    FUN_00591070("ERROR","ERROR: No configuration for module class \'%s\'");
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9d68,4);
  iVar9 = FUN_0047d0f0((byte *)local_2c);
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  if (iVar9 != 0) {
    uVar11 = 0;
    local_c0 = 0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e9d68,4);
      local_8 = 0x15;
      pbVar2 = FUN_0047d5c0((byte *)local_2c);
      iVar9 = *(int *)(pbVar2 + 4);
      iVar1 = *(int *)pbVar2;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar3 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar3 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044ad13;
        FUN_005adb3f(pvVar3);
      }
      if ((uint)((iVar9 - iVar1) / 0x18) <= uVar11) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e9d68,4);
      local_8 = 0x16;
      pbVar2 = FUN_0047d5c0((byte *)local_2c);
      iVar9 = local_c0;
      uStack_108 = 0x44b730;
      FUN_004024e0(&stack0xffffff00,(undefined4 *)(*(int *)pbVar2 + local_c0));
      FUN_0044a3a0(in_stack_ffffff00);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar3 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar3 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044ad13;
        FUN_005adb3f(pvVar3);
      }
      uVar11 = uVar11 + 1;
      local_c0 = iVar9 + 0x18;
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9d68,4);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar1 = local_c4;
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != iVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e9d68,4);
    local_8 = 0x17;
    uStack_108 = 0x44b85f;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44b867;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    FUN_0044a3a0(in_stack_ffffff00);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"uiprefix",8);
  local_8 = 0x18;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar4 + 0x26) != pbVar2) {
    pbVar6 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar6 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x26,pbVar6,*(uint *)(pbVar2 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"softwareversion",0xf);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar1 = local_c4;
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != iVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  pcVar10 = atoi_exref;
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"softwareversion",0xf);
    local_8 = 0x19;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar10 = atoi_exref;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    iVar9 = atoi((char *)pbVar2);
    puVar4[0x2c] = iVar9;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"boottime",8);
  local_8 = 0x1a;
  FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  uVar5 = (*pcVar10)();
  puVar4[0x23] = uVar5;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"interface",9);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar1 = local_c4;
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != iVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (iVar9 == 0) {
    FUN_00402690(local_2c,&DAT_005e98b0,2);
    local_8 = 0x1d;
    uStack_108 = 0x44bcf3;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44bcfb;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    uVar5 = FUN_00437170(in_stack_ffffff00);
    puVar4[0x36] = uVar5;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    if (puVar4[0x36] == 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e98b0,2);
      local_8 = 0x1e;
      FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      goto LAB_0044bc7b;
    }
  }
  else {
    FUN_00402690(local_2c,"interface",9);
    local_8 = 0x1b;
    uStack_108 = 0x44bbdd;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44bbe5;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    uVar5 = FUN_00437170(in_stack_ffffff00);
    puVar4[0x36] = uVar5;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    if (puVar4[0x36] == 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"interface",9);
      local_8 = 0x1c;
      FUN_00419170(&DAT_0065b530,(byte *)local_2c);
LAB_0044bc7b:
      FUN_00591070("ERROR","ERROR: unknown interface \'%s\'");
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar3 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar3 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
        FUN_005adb3f(pvVar3);
      }
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"normalpowerusage",0x10);
  local_8 = 0x1f;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar13 = atof((char *)pbVar2);
  puVar4[0x30] = (float)dVar13;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"highpowerusage",0xe);
  local_8 = 0x20;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar13 = atof((char *)pbVar2);
  puVar4[0x2f] = (float)dVar13;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"maxpowercontent",0xf);
  local_8 = 0x21;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar9 = atoi((char *)pbVar2);
  local_8 = 0xffffffff;
  puVar4[0x31] = (float)iVar9;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"generationrate",0xe);
  local_8 = 0x22;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar13 = atof((char *)pbVar2);
  puVar4[0x32] = (float)dVar13;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emissionstrength",0x10);
  local_8 = 0x23;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  atof((char *)pbVar2);
  uVar12 = FUN_005af3d0(extraout_ECX,extraout_EDX);
  puVar4[0x35] = (int)uVar12;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emissionfrequency",0x11);
  local_8 = 0x24;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  atof((char *)pbVar2);
  uVar12 = FUN_005af3d0(extraout_ECX_00,extraout_EDX_00);
  puVar4[0x34] = (int)uVar12;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emissionhighstrength",0x14);
  local_8 = 0x25;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  atof((char *)pbVar2);
  uVar12 = FUN_005af3d0(extraout_ECX_01,extraout_EDX_01);
  puVar4[0x33] = (int)uVar12;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0x26;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(puVar4 + 0x14) != pbVar2) {
    pbVar6 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar6 = *(byte **)pbVar2;
    }
    FUN_00402690(puVar4 + 0x14,pbVar6,*(uint *)(pbVar2 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"computer",8);
  local_8 = 0x27;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar2 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar2 = *(byte **)pbVar6;
  }
  uVar11 = FUN_004031f0(pbVar2,*(uint *)(pbVar6 + 0x10),&DAT_005e425c,4);
  *(char *)(puVar4 + 0x40) = (char)uVar11;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sound",5);
  local_8 = 0x28;
  uStack_108 = 0x44c2d1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  uStack_108 = 0x44c2d9;
  FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
  iVar9 = FUN_00557800(in_stack_ffffff00);
  puVar4[0x2d] = iVar9;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"soundhigh",9);
  local_8 = 0x29;
  uStack_108 = 0x44c35d;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  uStack_108 = 0x44c365;
  FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
  iVar9 = FUN_00557800(in_stack_ffffff00);
  puVar4[0x2e] = iVar9;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sensorquality",0xd);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar1 = local_c4;
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != iVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"sensorquality",0xd);
    local_8 = 0x2a;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    dVar13 = atof((char *)pbVar2);
    puVar4[0x39] = (float)dVar13;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
      FUN_005adb3f(pvVar3);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hitchance",9);
  FUN_00419820(&DAT_0065b530,&local_c8,(byte *)local_2c);
  iVar9 = 0;
  local_c0 = local_c8;
  while (local_c0 != local_c4) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0044bcc7;
    FUN_005adb3f(pvVar3);
  }
  if (iVar9 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"hitchance",9);
    local_8 = 0x2b;
    uStack_108 = 0x44c5bb;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44c5c3;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    piVar7 = FUN_005913f0(local_50,in_stack_ffffff00);
    *(undefined8 *)(puVar4 + 0x3a) = *(undefined8 *)piVar7;
    puVar4[0x3c] = piVar7[2];
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar3 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar3 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
LAB_0044bcc7:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  SimpleString::operator=((SimpleString *)local_2c,"ghosttimer");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"ghosttimer");
    local_8 = 0x2c;
    uStack_108 = 0x44c680;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44c688;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    piVar7 = FUN_005913f0(local_50,in_stack_ffffff00);
    *(undefined8 *)(puVar4 + 0x3a) = *(undefined8 *)piVar7;
    puVar4[0x3c] = piVar7[2];
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"analysistime");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"analysistime");
    local_8 = 0x2d;
    uStack_108 = 0x44c707;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uStack_108 = 0x44c70f;
    FUN_004024e0(&stack0xffffff00,(undefined4 *)pbVar2);
    piVar7 = FUN_005913f0(local_50,in_stack_ffffff00);
    *(undefined8 *)(puVar4 + 0x3d) = *(undefined8 *)piVar7;
    puVar4[0x3f] = piVar7[2];
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"synctime");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"thrust");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"thrust");
      local_8 = 0x2f;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"rotationrate");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"rotationrate");
      local_8 = 0x30;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"tubes");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"tubes");
      local_8 = 0x31;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"jumpdistance");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"jumpdistance");
      local_8 = 0x32;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"ladarrange");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"ladarrange");
      local_8 = 0x33;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"range");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"range");
      local_8 = 0x34;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"grappletime");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"grappletime");
      local_8 = 0x35;
      goto LAB_0044c970;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hacktime");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 != 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hacktime");
      local_8 = 0x36;
      goto LAB_0044c970;
    }
  }
  else {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"synctime");
    local_8 = 0x2e;
LAB_0044c970:
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar8 = (char *)FUN_00402490((undefined4 *)pbVar2);
    dVar13 = atof(pcVar8);
    local_8 = 0xffffffff;
    puVar4[0x41] = (float)dVar13;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"spinuptime");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 == 0) {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"plottime");
    iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    FUN_00401b20((int *)local_2c);
    if (iVar9 == 0) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"ladarradius");
      iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
      FUN_00401b20((int *)local_2c);
      if (iVar9 == 0) {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"reloadtime");
        iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
        FUN_00401b20((int *)local_2c);
        if (iVar9 == 0) {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hackrange");
          iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
          FUN_00401b20((int *)local_2c);
          pcVar10 = atoi_exref;
          if (iVar9 == 0) goto LAB_0044ca1f;
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"hackrange");
          local_8 = 0x3b;
        }
        else {
          std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"reloadtime");
          local_8 = 0x3a;
        }
        pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        pcVar8 = (char *)FUN_00402490((undefined4 *)pbVar2);
        pcVar10 = atoi_exref;
        iVar9 = atoi(pcVar8);
        local_8 = 0xffffffff;
        puVar4[0x42] = (float)iVar9;
        FUN_00401b20((int *)local_2c);
        goto LAB_0044ca1f;
      }
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"ladarradius");
      local_8 = 0x39;
    }
    else {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"plottime");
      local_8 = 0x38;
    }
  }
  else {
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"spinuptime");
    local_8 = 0x37;
  }
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pcVar8 = (char *)FUN_00402490((undefined4 *)pbVar2);
  dVar13 = atof(pcVar8);
  local_8 = 0xffffffff;
  puVar4[0x42] = (float)dVar13;
  FUN_00401b20((int *)local_2c);
  pcVar10 = atoi_exref;
LAB_0044ca1f:
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,"calctime");
  iVar9 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  FUN_00401b20((int *)local_2c);
  if (iVar9 != 0) {
    std::basic_string<>::basic_string<>(local_bc,"calctime");
    local_8 = 0x3c;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_bc);
    FUN_00402490((undefined4 *)pbVar2);
    iVar9 = (*pcVar10)();
    local_8 = 0xffffffff;
    puVar4[0x43] = (float)iVar9;
    FUN_00401b20((int *)local_bc);
  }
  FUN_00412900((void *)(DAT_0065b5cc + 0xc),&local_cc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
