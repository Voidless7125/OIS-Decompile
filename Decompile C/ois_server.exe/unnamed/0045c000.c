#include "../ois_server.exe.h"


void FUN_0045e0c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  undefined4 *puVar16;
  int iVar17;
  byte *****pppppbVar18;
  code *pcVar19;
  double dVar20;
  char cVar21;
  byte *in_stack_ffffff3c;
  byte *local_a0;
  byte *local_9c;
  byte *local_98;
  byte *local_94;
  byte *local_90;
  void *local_8c;
  char local_85;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  basic_string<> local_74 [24];
  void *local_5c [3];
  undefined4 *local_50;
  byte *local_4c;
  byte *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ****local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b5c32;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_90 = (byte *)0x0;
  local_78 = (byte *)0x0;
  pbVar6 = (byte *)FUN_005adb0f(0xac);
  pbVar6[0x10] = 0;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  pbVar6[0x14] = 0xf;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  *pbVar6 = 0;
  pbVar6[0x1c] = 0;
  pbVar6[0x1d] = 0;
  pbVar6[0x1e] = 0;
  pbVar6[0x1f] = 0;
  pbVar6[0x20] = 0;
  pbVar6[0x21] = 0;
  pbVar6[0x22] = 0;
  pbVar6[0x23] = 0;
  pbVar6[0x24] = 0;
  pbVar6[0x25] = 0;
  pbVar6[0x26] = 0;
  pbVar6[0x27] = 0;
  local_9c = pbVar6 + 0x28;
  pbVar6[0x38] = 0;
  pbVar6[0x39] = 0;
  pbVar6[0x3a] = 0;
  pbVar6[0x3b] = 0;
  pbVar6[0x3c] = 0xf;
  pbVar6[0x3d] = 0;
  pbVar6[0x3e] = 0;
  pbVar6[0x3f] = 0;
  *local_9c = 0;
  local_84 = pbVar6 + 0x48;
  pbVar6[0x44] = 0;
  pbVar6[0x45] = 0;
  pbVar6[0x46] = 0;
  pbVar6[0x47] = 0;
  pbVar6[0x58] = 0;
  pbVar6[0x59] = 0;
  pbVar6[0x5a] = 0;
  pbVar6[0x5b] = 0;
  pbVar6[0x5c] = 0xf;
  pbVar6[0x5d] = 0;
  pbVar6[0x5e] = 0;
  pbVar6[0x5f] = 0;
  *local_84 = 0;
  local_80 = pbVar6 + 0x70;
  pbVar6[0x60] = 0;
  pbVar6[0x61] = 0;
  pbVar6[0x62] = 0;
  pbVar6[99] = 0;
  pbVar6[100] = 0;
  pbVar6[0x65] = 0;
  pbVar6[0x66] = 0;
  pbVar6[0x67] = 0;
  pbVar6[0x68] = 1;
  pbVar6[0x69] = 0;
  pbVar6[0x6a] = 0;
  pbVar6[0x6b] = 0;
  pbVar6[0x6c] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  pbVar6[0x74] = 0;
  pbVar6[0x75] = 0;
  pbVar6[0x76] = 0;
  pbVar6[0x77] = 0;
  pbVar6[0x78] = 0;
  pbVar6[0x79] = 0;
  pbVar6[0x7a] = 0;
  pbVar6[0x7b] = 0;
  local_94 = pbVar6 + 0x7c;
  local_94[0] = 0;
  local_94[1] = 0;
  local_94[2] = 0;
  local_94[3] = 0;
  pbVar6[0x80] = 0;
  pbVar6[0x81] = 0;
  pbVar6[0x82] = 0;
  pbVar6[0x83] = 0;
  pbVar6[0x84] = 0;
  pbVar6[0x85] = 0;
  pbVar6[0x86] = 0;
  pbVar6[0x87] = 0;
  local_98 = pbVar6 + 0x88;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  pbVar6[0x8c] = 0;
  pbVar6[0x8d] = 0;
  pbVar6[0x8e] = 0;
  pbVar6[0x8f] = 0;
  pbVar6[0x90] = 0;
  pbVar6[0x91] = 0;
  pbVar6[0x92] = 0;
  pbVar6[0x93] = 0;
  local_8 = 7;
  pbVar6[0x94] = 100;
  pbVar6[0x95] = 0;
  pbVar6[0x96] = 0;
  pbVar6[0x97] = 0;
  pbVar6[0x98] = 0;
  pbVar6[0x9c] = 0;
  pbVar6[0x9d] = 0;
  pbVar6[0x9e] = 0;
  pbVar6[0x9f] = 0;
  pbVar6[0xa0] = 0;
  pbVar6[0xa1] = 0;
  pbVar6[0xa2] = 0;
  pbVar6[0xa3] = 0;
  pbVar6[0xa4] = 0;
  pbVar6[0xa5] = 0;
  pbVar6[0xa6] = 0;
  pbVar6[0xa7] = 0;
  pbVar6[0xa8] = 0;
  pbVar6[0xa9] = 0;
  pbVar6[0xaa] = 0;
  pbVar6[0xab] = 0;
  DAT_00655060 = DAT_00655060 + 1;
  local_7c = pbVar6;
  pbVar7 = (byte *)FUN_00591e00((undefined1 *)local_44,"contract%d");
  if (pbVar6 != pbVar7) {
    FUN_00401b20((int *)pbVar6);
    iVar17 = *(int *)(pbVar7 + 4);
    iVar3 = *(int *)(pbVar7 + 8);
    iVar4 = *(int *)(pbVar7 + 0xc);
    *(int *)pbVar6 = *(int *)pbVar7;
    *(int *)(pbVar6 + 4) = iVar17;
    *(int *)(pbVar6 + 8) = iVar3;
    *(int *)(pbVar6 + 0xc) = iVar4;
    iVar17 = *(int *)(pbVar7 + 0x14);
    *(int *)(pbVar6 + 0x10) = *(int *)(pbVar7 + 0x10);
    *(int *)(pbVar6 + 0x14) = iVar17;
    pbVar7[0x10] = 0;
    pbVar7[0x11] = 0;
    pbVar7[0x12] = 0;
    pbVar7[0x13] = 0;
    pbVar7[0x14] = 0xf;
    pbVar7[0x15] = 0;
    pbVar7[0x16] = 0;
    pbVar7[0x17] = 0;
    *pbVar7 = 0;
  }
  if (0xf < local_30) {
    pvVar10 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar10 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
LAB_0045e28d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_8 = 0xffffffff;
  local_4c = (byte *)0x0;
  local_48 = &DAT_0000000f;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_a0 = pbVar6;
  FUN_00402690(local_5c,&DAT_005e99fc,4);
  local_8 = 8;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  FUN_004024e0(&local_2c,(undefined4 *)pbVar6);
  ppppbVar14 = local_2c;
  iVar17 = 0;
  do {
    pcVar15 = (&PTR_s_takefrom_005ce6c4)[iVar17];
    pcVar12 = pcVar15 + 1;
    do {
      cVar21 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar21 != '\0');
    pppppbVar18 = &local_2c;
    if (0xf < uStack_18) {
      pppppbVar18 = (byte *****)ppppbVar14;
    }
    uVar8 = FUN_004031f0((byte *)pppppbVar18,local_1c,(&PTR_s_takefrom_005ce6c4)[iVar17],
                         (int)pcVar15 - (int)pcVar12);
    if ((char)uVar8 != '\0') {
      if (0xf < uStack_18) {
        pppppbVar18 = (byte *****)ppppbVar14;
        if ((0xfff < uStack_18 + 1) &&
           (pppppbVar18 = (byte *****)ppppbVar14[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar14 + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar18);
      }
      goto LAB_0045e3a1;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 3);
  if (0xf < uStack_18) {
    pppppbVar18 = (byte *****)ppppbVar14;
    if ((0xfff < uStack_18 + 1) &&
       (pppppbVar18 = (byte *****)ppppbVar14[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar14 + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar18);
  }
  iVar17 = 2;
LAB_0045e3a1:
  pbVar6 = local_7c;
  local_2c = (byte ****)((uint)local_2c & 0xffffff00);
  uStack_18 = 0xf;
  local_1c = 0;
  *(int *)(local_7c + 0x18) = iVar17;
  local_8 = 0xffffffff;
  if (&DAT_0000000f < local_48) {
    pvVar10 = local_5c[0];
    if (((byte *)0xfff < local_48 + 1) &&
       (pvVar10 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
    iVar17 = *(int *)(pbVar6 + 0x18);
  }
  if (iVar17 != 1) {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,&DAT_005e98b0,2);
    FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
    pbVar6 = local_48;
    iVar17 = 0;
    local_78 = local_4c;
    while (local_78 != pbVar6) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_78);
    }
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    if (iVar17 != 0) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,&DAT_005e98b0,2);
      local_8 = 9;
      pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
      if (local_7c != pbVar6) {
        pbVar7 = pbVar6;
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar7 = *(byte **)pbVar6;
        }
        FUN_00402690(local_7c,pbVar7,*(uint *)(pbVar6 + 0x10));
      }
      local_8 = 0xffffffff;
      if (0xf < uStack_18) {
        ppppbVar14 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar14 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar14);
      }
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,&DAT_005ea63c,2);
    FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
    pbVar6 = local_48;
    iVar17 = 0;
    local_78 = local_4c;
    while (local_78 != pbVar6) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_78);
    }
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,&DAT_005ea63c,2);
    if (iVar17 == 0) {
      iVar17 = FUN_0047d0f0((byte *)&local_2c);
      if (0xf < uStack_18) {
        pppppbVar18 = (byte *****)local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (pppppbVar18 = (byte *****)local_2c[-1],
           (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar18);
      }
      if (iVar17 != 0) {
        uVar8 = 0;
        local_78 = (byte *)0x0;
        do {
          local_1c = 0;
          uStack_18 = 0xf;
          local_2c = (byte ****)((uint)local_2c & 0xffffff00);
          FUN_00402690(&local_2c,&DAT_005ea63c,2);
          local_8 = 0xb;
          pbVar6 = FUN_0047d5c0((byte *)&local_2c);
          iVar17 = *(int *)(pbVar6 + 4);
          iVar3 = *(int *)pbVar6;
          local_8 = 0xffffffff;
          if (0xf < uStack_18) {
            pppppbVar18 = (byte *****)local_2c;
            if ((0xfff < uStack_18 + 1) &&
               (pppppbVar18 = (byte *****)local_2c[-1],
               (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) goto LAB_0045e28d;
            FUN_005adb3f(pppppbVar18);
          }
          if ((uint)((iVar17 - iVar3) / 0x18) <= uVar8) break;
          local_1c = 0;
          uStack_18 = 0xf;
          local_2c = (byte ****)((uint)local_2c & 0xffffff00);
          FUN_00402690(&local_2c,&DAT_005ea63c,2);
          local_8 = 0xc;
          pbVar7 = FUN_0047d5c0((byte *)&local_2c);
          pbVar6 = local_78;
          piVar11 = *(int **)(local_7c + 0x20);
          if (*(int **)(local_7c + 0x24) == piVar11) {
            FUN_00403840(local_7c + 0x1c,piVar11,(undefined4 *)(local_78 + *(int *)pbVar7));
          }
          else {
            FUN_004024e0(piVar11,(undefined4 *)(local_78 + *(int *)pbVar7));
            *(int *)(local_7c + 0x20) = *(int *)(local_7c + 0x20) + 0x18;
          }
          local_8 = 0xffffffff;
          if (0xf < uStack_18) {
            pppppbVar18 = (byte *****)local_2c;
            if ((0xfff < uStack_18 + 1) &&
               (pppppbVar18 = (byte *****)local_2c[-1],
               (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) goto LAB_0045e28d;
            FUN_005adb3f(pppppbVar18);
          }
          uVar8 = uVar8 + 1;
          local_78 = pbVar6 + 0x18;
        } while( true );
      }
    }
    else {
      local_8 = 10;
      pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
      pbVar6 = local_7c;
      piVar11 = *(int **)(local_7c + 0x20);
      if (*(int **)(local_7c + 0x24) == piVar11) {
        FUN_00403840(local_7c + 0x1c,piVar11,(undefined4 *)pbVar7);
      }
      else {
        FUN_004024e0(piVar11,(undefined4 *)pbVar7);
        *(int *)(pbVar6 + 0x20) = *(int *)(pbVar6 + 0x20) + 0x18;
      }
      local_8 = 0xffffffff;
      if (0xf < uStack_18) {
        pppppbVar18 = (byte *****)local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (pppppbVar18 = (byte *****)local_2c[-1],
           (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar18);
      }
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,&DAT_005ea634,4);
    FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
    pbVar6 = local_48;
    iVar17 = 0;
    local_78 = local_4c;
    while (local_78 != pbVar6) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_78);
    }
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    if (iVar17 != 0) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,&DAT_005ea634,4);
      local_8 = 0xd;
      pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
      if (local_9c != pbVar6) {
        pbVar7 = pbVar6;
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar7 = *(byte **)pbVar6;
        }
        FUN_00402690(local_9c,pbVar7,*(uint *)(pbVar6 + 0x10));
      }
      local_8 = 0xffffffff;
      if (0xf < uStack_18) {
        ppppbVar14 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar14 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar14);
      }
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"onwire",6);
    local_8 = 0xe;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
    pbVar6 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar6 = *(byte **)pbVar7;
    }
    uVar8 = FUN_004031f0(pbVar6,*(uint *)(pbVar7 + 0x10),&DAT_005e425c,4);
    local_8 = 0xffffffff;
    local_85 = (char)uVar8;
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    local_1c = 0;
    local_7c[0x98] = local_85 != '\0';
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"usagedelay",10);
    FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
    pbVar6 = local_48;
    iVar17 = 0;
    local_78 = local_4c;
    while (local_78 != pbVar6) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_78);
    }
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    if (iVar17 != 0) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"usagedelay",10);
      local_8 = 0xf;
      pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar6 = *(byte **)pbVar6;
      }
      dVar20 = atof((char *)pbVar6);
      local_8 = 0xffffffff;
      *(float *)(local_7c + 0x9c) = (float)dVar20;
      if (0xf < uStack_18) {
        ppppbVar14 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar14 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar14);
      }
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"spawnchance",0xb);
    FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
    pbVar6 = local_48;
    iVar17 = 0;
    local_78 = local_4c;
    while (local_78 != pbVar6) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_78);
    }
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    pbVar6 = local_7c;
    if (iVar17 != 0) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"spawnchance",0xb);
      local_8 = 0x10;
      pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar6 = *(byte **)pbVar6;
      }
      iVar17 = atoi((char *)pbVar6);
      pbVar6 = local_7c;
      local_8 = 0xffffffff;
      *(int *)(local_7c + 0x94) = iVar17;
      if (0xf < uStack_18) {
        ppppbVar14 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar14 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar14);
      }
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"timebonuslimit",0xe);
    local_8 = 0x11;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar7 = *(byte **)pbVar7;
    }
    iVar17 = atoi((char *)pbVar7);
    *(int *)(pbVar6 + 0xa0) = iVar17;
    local_8 = 0xffffffff;
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"timebonus",9);
    local_8 = 0x12;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar7 = *(byte **)pbVar7;
    }
    iVar17 = atoi((char *)pbVar7);
    *(int *)(pbVar6 + 0xa4) = iVar17;
    local_8 = 0xffffffff;
    if (0xf < uStack_18) {
      ppppbVar14 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (ppppbVar14 = (byte ****)local_2c[-1],
         0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar14);
    }
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (byte ****)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"faction",7);
    local_8 = 0x13;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
    pbVar6 = local_84;
    if (local_84 != pbVar7) {
      pbVar13 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar13 = *(byte **)pbVar7;
      }
      FUN_00402690(local_84,pbVar13,*(uint *)(pbVar7 + 0x10));
    }
    local_8 = 0xffffffff;
    if (0xf < uStack_18) {
      pppppbVar18 = (byte *****)local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pppppbVar18 = (byte *****)local_2c[-1],
         (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppbVar18);
    }
    uVar8 = *(uint *)(pbVar6 + 0x14);
    pbVar7 = pbVar6;
    if (0xf < uVar8) {
      pbVar7 = *(byte **)pbVar6;
    }
    uVar2 = *(uint *)(pbVar6 + 0x10);
    uVar9 = FUN_004031f0(pbVar7,uVar2,(byte *)&PTR_005ce008,0);
    if ((char)uVar9 == '\0') {
      pbVar6 = local_84;
      if (0xf < uVar8) {
        pbVar6 = *(byte **)local_84;
      }
      uVar8 = FUN_004031f0(pbVar6,uVar2,(byte *)"jacksonfarlane",0xe);
      if ((char)uVar8 != '\0') {
        cocos2d::log((char *)&param_1_005ea640);
      }
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"cargo",5);
      FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
      pbVar6 = local_48;
      iVar17 = 0;
      local_78 = local_4c;
      while (local_78 != pbVar6) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_78);
      }
      FUN_00401b20((int *)&local_2c);
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"cargo",5);
      if (iVar17 == 0) {
        FUN_00401b20((int *)local_44);
      }
      else {
        local_8 = 0x14;
        pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        FUN_004024e0(&stack0xffffff3c,(undefined4 *)pbVar6);
        FUN_00592d70(&local_50,',',(undefined4 *)in_stack_ffffff3c);
        local_8 = CONCAT31(local_8._1_3_,0x16);
        FUN_00401b20((int *)local_44);
        pvVar10 = (void *)FUN_005adb0f(0x30);
        local_8c = pvVar10;
        memset(pvVar10,0,0x30);
        pbVar6 = local_7c;
        puVar1 = (undefined4 *)((int)pvVar10 + 8);
        *(undefined4 *)((int)pvVar10 + 0x18) = 0;
        *(undefined4 *)((int)pvVar10 + 0x1c) = 0xf;
        *(undefined1 *)puVar1 = 0;
        *(undefined4 *)((int)pvVar10 + 0x24) = 0;
        *(undefined4 *)((int)pvVar10 + 0x28) = 0;
        *(undefined4 *)((int)pvVar10 + 0x2c) = 0;
        *(void **)(local_7c + 0x40) = pvVar10;
        if (puVar1 != local_50) {
          puVar16 = local_50;
          if (0xf < (uint)local_50[5]) {
            puVar16 = (undefined4 *)*local_50;
          }
          FUN_00402690(puVar1,puVar16,local_50[4]);
        }
        FUN_004024e0(&stack0xffffff3c,(undefined4 *)(*(int *)(pbVar6 + 0x40) + 8));
        iVar17 = FUN_004a8380(in_stack_ffffff3c);
        if (iVar17 == 0) {
          FUN_00591070("ERROR","Unknown good in contract: \'%s\'");
        }
        FUN_004024e0(&local_2c,*(undefined4 **)(iVar17 + 0x1c));
        iVar17 = *(int *)(pbVar6 + 0x40);
        local_90 = (byte *)0x4;
        pppppbVar18 = (byte *****)(iVar17 + 8);
        if (pppppbVar18 != &local_2c) {
          FUN_00401b20((int *)pppppbVar18);
          ppppbVar14 = local_2c;
          local_2c = (byte ****)((uint)local_2c & 0xffffff00);
          *pppppbVar18 = ppppbVar14;
          *(undefined4 *)(iVar17 + 0xc) = uStack_28;
          *(undefined4 *)(iVar17 + 0x10) = uStack_24;
          *(undefined4 *)(iVar17 + 0x14) = uStack_20;
          *(ulonglong *)(iVar17 + 0x18) = CONCAT44(uStack_18,local_1c);
          local_1c = 0;
          uStack_18 = 0xf;
        }
        FUN_00401b20((int *)&local_2c);
        FUN_004024e0(&stack0xffffff3c,local_50 + 6);
        piVar11 = FUN_00592840(&uStack_20,in_stack_ffffff3c);
        iVar17 = *(int *)(pbVar6 + 0x40);
        *(undefined8 *)(iVar17 + 0x24) = *(undefined8 *)piVar11;
        *(int *)(iVar17 + 0x2c) = piVar11[2];
        if ((uint)(((int)local_4c - (int)local_50) / 0x18) < 3) {
          **(undefined4 **)(pbVar6 + 0x40) = 0xffffffff;
        }
        else {
          pcVar12 = (char *)(local_50 + 0xc);
          if (0xf < (uint)local_50[0x11]) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar17 = atoi(pcVar12);
          **(int **)(local_7c + 0x40) = iVar17;
        }
        if ((uint)(((int)local_4c - (int)local_50) / 0x18) < 4) {
          *(undefined4 *)(*(int *)(local_7c + 0x40) + 4) = 0xffffffff;
        }
        else {
          pcVar12 = (char *)(local_50 + 0x12);
          if (0xf < (uint)local_50[0x17]) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar17 = atoi(pcVar12);
          *(int *)(*(int *)(local_7c + 0x40) + 4) = iVar17;
        }
        if (4 < (uint)(((int)local_4c - (int)local_50) / 0x18)) {
          pcVar12 = (char *)(local_50 + 0x18);
          if (0xf < (uint)local_50[0x1d]) {
            pcVar12 = *(char **)pcVar12;
          }
          iVar17 = atoi(pcVar12);
          *(int *)(*(int *)(local_7c + 0x40) + 0x20) = iVar17;
        }
        local_8 = 0xffffffff;
        FUN_004025a0((int *)&local_50);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"timelimit",9);
      FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)local_44);
      pbVar6 = local_48;
      iVar17 = 0;
      local_78 = local_4c;
      while (local_78 != pbVar6) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_78);
      }
      FUN_00401b20((int *)local_44);
      if (iVar17 == 0) {
        local_7c[0x44] = 0xff;
        local_7c[0x45] = 0xff;
        local_7c[0x46] = 0xff;
        local_7c[0x47] = 0xff;
      }
      else {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,"timelimit",9);
        local_8 = 0x17;
        pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar6 = *(byte **)pbVar6;
        }
        iVar17 = atoi((char *)pbVar6);
        local_8 = 0xffffffff;
        *(int *)(local_7c + 0x44) = iVar17;
        FUN_00401b20((int *)local_44);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"factiontier",0xb);
      FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)local_44);
      pbVar6 = local_48;
      iVar17 = 0;
      local_78 = local_4c;
      while (local_78 != pbVar6) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_78);
      }
      FUN_00401b20((int *)local_44);
      if (iVar17 != 0) {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,"factiontier",0xb);
        local_8 = 0x18;
        pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar6 = *(byte **)pbVar6;
        }
        iVar17 = atoi((char *)pbVar6);
        local_8 = 0xffffffff;
        *(int *)(local_7c + 0x68) = iVar17;
        FUN_00401b20((int *)local_44);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,&DAT_005e970c,3);
      FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)local_44);
      pbVar6 = local_48;
      iVar17 = 0;
      local_78 = local_4c;
      while (local_78 != pbVar6) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_78);
      }
      FUN_00401b20((int *)local_44);
      if (iVar17 == 0) {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005e970c,3);
        iVar17 = FUN_0047d0f0((byte *)local_44);
        FUN_00401b20((int *)local_44);
        if (iVar17 != 0) {
          uVar8 = 0;
          local_84 = (byte *)0x0;
          while( true ) {
            local_1c = 0;
            uStack_18 = 0xf;
            local_2c = (byte ****)((uint)local_2c & 0xffffff00);
            FUN_00402690(&local_2c,&DAT_005e970c,3);
            local_8 = 0x1c;
            pbVar6 = FUN_0047d5c0((byte *)&local_2c);
            iVar17 = *(int *)(pbVar6 + 4);
            iVar3 = *(int *)pbVar6;
            local_8 = 0xffffffff;
            if (0xf < uStack_18) {
              pppppbVar18 = (byte *****)local_2c;
              if ((0xfff < uStack_18 + 1) &&
                 (pppppbVar18 = (byte *****)local_2c[-1],
                 (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18))))
              goto LAB_0045e28d;
              FUN_005adb3f(pppppbVar18);
            }
            if ((uint)((iVar17 - iVar3) / 0x18) <= uVar8) break;
            pbVar6 = (byte *)FUN_005adb0f(0x40);
            local_8 = 0x1d;
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
            local_48 = pbVar6;
            FUN_00402690(local_44,&DAT_005e970c,3);
            local_8 = CONCAT31(local_8._1_3_,0x1e);
            local_90 = (byte *)((uint)local_90 | 2);
            local_78 = local_90;
            pbVar7 = FUN_0047d5c0((byte *)local_44);
            FUN_004024e0(&stack0xffffff3c,(undefined4 *)(local_84 + *(int *)pbVar7));
            local_8c = (void *)FUN_004a1a40(pbVar6,(undefined4 *)in_stack_ffffff3c);
            local_8 = 0x1f;
            puVar1 = *(undefined4 **)(local_80 + 4);
            if (*(undefined4 **)(local_80 + 8) == puVar1) {
              FUN_004141e0(local_80,puVar1,&local_8c);
            }
            else {
              *puVar1 = local_8c;
              *(int *)(local_80 + 4) = *(int *)(local_80 + 4) + 4;
            }
            local_8 = 0xffffffff;
            FUN_00401b20((int *)local_44);
            local_84 = local_84 + 0x18;
            uVar8 = uVar8 + 1;
            local_90 = (byte *)((uint)local_90 & 0xfffffffd);
          }
        }
      }
      else {
        pvVar10 = (void *)FUN_005adb0f(0x40);
        local_8 = 0x19;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        local_8c = pvVar10;
        FUN_00402690(local_44,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        local_78 = (byte *)((uint)local_90 | 1);
        pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        FUN_004024e0(&stack0xffffff3c,(undefined4 *)pbVar6);
        local_84 = (byte *)FUN_004a1a40(pvVar10,(undefined4 *)in_stack_ffffff3c);
        local_8 = 0x1b;
        puVar1 = *(undefined4 **)(local_80 + 4);
        if (*(undefined4 **)(local_80 + 8) == puVar1) {
          FUN_004141e0(local_80,puVar1,&local_84);
        }
        else {
          *puVar1 = local_84;
          *(int *)(local_80 + 4) = *(int *)(local_80 + 4) + 4;
        }
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_44);
      }
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"flagoncomplete",0xe);
      FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
      pbVar6 = local_48;
      iVar17 = 0;
      local_80 = local_4c;
      while (local_80 != pbVar6) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_80);
      }
      if (0xf < uStack_18) {
        pppppbVar18 = (byte *****)local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (pppppbVar18 = (byte *****)local_2c[-1],
           (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar18);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"flagoncomplete",0xe);
      if (iVar17 == 0) {
        iVar17 = FUN_0047d0f0((byte *)local_44);
        FUN_00401b20((int *)local_44);
        if (iVar17 != 0) {
          uVar8 = 0;
          local_80 = (byte *)0x0;
          do {
            local_1c = 0;
            uStack_18 = 0xf;
            local_2c = (byte ****)((uint)local_2c & 0xffffff00);
            FUN_00402690(&local_2c,"flagoncomplete",0xe);
            local_8 = 0x21;
            pbVar6 = FUN_0047d5c0((byte *)&local_2c);
            iVar17 = *(int *)(pbVar6 + 4);
            iVar3 = *(int *)pbVar6;
            local_8 = 0xffffffff;
            if (0xf < uStack_18) {
              pppppbVar18 = (byte *****)local_2c;
              if ((0xfff < uStack_18 + 1) &&
                 (pppppbVar18 = (byte *****)local_2c[-1],
                 (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18))))
              goto LAB_0045e28d;
              FUN_005adb3f(pppppbVar18);
            }
            if ((uint)((iVar17 - iVar3) / 0x18) <= uVar8) break;
            local_1c = 0;
            uStack_18 = 0xf;
            local_2c = (byte ****)((uint)local_2c & 0xffffff00);
            FUN_00402690(&local_2c,"flagoncomplete",0xe);
            local_8 = 0x22;
            pbVar7 = FUN_0047d5c0((byte *)&local_2c);
            pbVar6 = local_80;
            piVar11 = *(int **)(local_94 + 4);
            if (*(int **)(local_94 + 8) == piVar11) {
              FUN_00403840(local_94,piVar11,(undefined4 *)(local_80 + *(int *)pbVar7));
            }
            else {
              FUN_004024e0(piVar11,(undefined4 *)(local_80 + *(int *)pbVar7));
              *(int *)(local_94 + 4) = *(int *)(local_94 + 4) + 0x18;
            }
            local_8 = 0xffffffff;
            if (0xf < uStack_18) {
              pppppbVar18 = (byte *****)local_2c;
              if ((0xfff < uStack_18 + 1) &&
                 (pppppbVar18 = (byte *****)local_2c[-1],
                 (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18))))
              goto LAB_0045e28d;
              FUN_005adb3f(pppppbVar18);
            }
            uVar8 = uVar8 + 1;
            local_80 = pbVar6 + 0x18;
          } while( true );
        }
      }
      else {
        local_8 = 0x20;
        pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        pbVar6 = local_94;
        piVar11 = *(int **)(local_94 + 4);
        if (*(int **)(local_94 + 8) == piVar11) {
          FUN_00403840(local_94,piVar11,(undefined4 *)pbVar7);
        }
        else {
          FUN_004024e0(piVar11,(undefined4 *)pbVar7);
          *(int *)(pbVar6 + 4) = *(int *)(pbVar6 + 4) + 0x18;
        }
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_44);
      }
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"flagonfailure",0xd);
      FUN_00419820(&DAT_0065b530,(int *)&local_4c,(byte *)&local_2c);
      pbVar6 = local_48;
      iVar17 = 0;
      local_80 = local_4c;
      while (local_80 != pbVar6) {
        iVar17 = iVar17 + 1;
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_80);
      }
      if (0xf < uStack_18) {
        ppppbVar14 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar14 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar14);
      }
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"flagonfailure",0xd);
      if (iVar17 == 0) {
        iVar17 = FUN_0047d0f0((byte *)&local_2c);
        if (0xf < uStack_18) {
          pppppbVar18 = (byte *****)local_2c;
          if ((0xfff < uStack_18 + 1) &&
             (pppppbVar18 = (byte *****)local_2c[-1],
             (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppbVar18);
        }
        if (iVar17 != 0) {
          uVar8 = 0;
          local_80 = (byte *)0x0;
          while( true ) {
            local_1c = 0;
            uStack_18 = 0xf;
            local_2c = (byte ****)((uint)local_2c & 0xffffff00);
            FUN_00402690(&local_2c,"flagonfailure",0xd);
            local_8 = 0x24;
            pbVar6 = FUN_0047d5c0((byte *)&local_2c);
            iVar17 = *(int *)(pbVar6 + 4);
            iVar3 = *(int *)pbVar6;
            local_8 = 0xffffffff;
            if (0xf < uStack_18) {
              pppppbVar18 = (byte *****)local_2c;
              if ((0xfff < uStack_18 + 1) &&
                 (pppppbVar18 = (byte *****)local_2c[-1],
                 (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18))))
              goto LAB_0045e28d;
              FUN_005adb3f(pppppbVar18);
            }
            if ((uint)((iVar17 - iVar3) / 0x18) <= uVar8) break;
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
            FUN_00402690(local_44,"flagonfailure",0xd);
            local_8 = 0x25;
            pbVar7 = FUN_0047d5c0((byte *)local_44);
            pbVar6 = local_80;
            if (*(int **)(local_98 + 8) == *(int **)(local_98 + 4)) {
              FUN_00403840(local_98,*(int **)(local_98 + 4),
                           (undefined4 *)(local_80 + *(int *)pbVar7));
            }
            else {
              FUN_004033c0(local_98,(undefined4 *)(local_80 + *(int *)pbVar7));
            }
            local_8 = 0xffffffff;
            FUN_00401b20((int *)local_44);
            uVar8 = uVar8 + 1;
            local_80 = pbVar6 + 0x18;
          }
        }
      }
      else {
        local_8 = 0x23;
        pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)&local_2c);
        pbVar6 = local_98;
        piVar11 = *(int **)(local_98 + 4);
        if (*(int **)(local_98 + 8) == piVar11) {
          FUN_00403840(local_98,piVar11,(undefined4 *)pbVar7);
        }
        else {
          FUN_004024e0(piVar11,(undefined4 *)pbVar7);
          *(int *)(pbVar6 + 4) = *(int *)(pbVar6 + 4) + 0x18;
        }
        local_8 = 0xffffffff;
        if (0xf < uStack_18) {
          pppppbVar18 = (byte *****)local_2c;
          if ((0xfff < uStack_18 + 1) &&
             (pppppbVar18 = (byte *****)local_2c[-1],
             (byte *)0x1f < (byte *)((int)local_2c + (-4 - (int)pppppbVar18)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppbVar18);
        }
      }
      std::basic_string<>::basic_string<>((basic_string<> *)local_44,"successgain");
      iVar17 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
      FUN_00401b20((int *)local_44);
      pcVar19 = atoi_exref;
      if (iVar17 != 0) {
        std::basic_string<>::basic_string<>((basic_string<> *)local_44,"successgain");
        local_8 = 0x26;
        pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        pcVar12 = (char *)FUN_00402490((undefined4 *)pbVar6);
        pcVar19 = atoi_exref;
        iVar17 = atoi(pcVar12);
        local_8 = 0xffffffff;
        *(int *)(local_7c + 0x60) = iVar17;
        FUN_00401b20((int *)local_44);
      }
      std::basic_string<>::basic_string<>((basic_string<> *)local_44,"failurepenalty");
      iVar17 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
      FUN_00401b20((int *)local_44);
      if (iVar17 != 0) {
        std::basic_string<>::basic_string<>(local_74,"failurepenalty");
        local_8 = 0x27;
        pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
        FUN_00402490((undefined4 *)pbVar6);
        iVar17 = (*pcVar19)();
        local_8 = 0xffffffff;
        *(int *)(local_7c + 100) = iVar17;
        FUN_00401b20((int *)local_74);
      }
      local_48 = &stack0xffffff3c;
      FUN_004024e0(&stack0xffffff3c,(undefined4 *)local_9c);
      cVar21 = '\0';
      local_8 = 0x28;
      pvVar10 = (void *)FUN_00412d40();
      local_8 = 0xffffffff;
      pbVar6 = FUN_00486270(pvVar10,cVar21,in_stack_ffffff3c);
      FUN_00412900(pbVar6 + 0xa0,&local_a0);
    }
    else {
      FUN_00591070("ERROR","No faction for this contract.");
      bVar5 = cc_assert_script_compatible("No faction for this contract.");
      if (!bVar5) {
        cocos2d::log("Assert failed: %s");
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0045fb00(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  void *pvVar10;
  undefined4 uVar11;
  code *pcVar12;
  char *pcVar13;
  float fVar14;
  double dVar15;
  byte *in_stack_ffffff40;
  int local_98;
  int local_94;
  byte *local_8c;
  undefined4 *local_88 [3];
  Vec2 local_7c [4];
  undefined4 *local_78;
  byte *local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  byte local_5d;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte *local_44;
  int local_40;
  int local_3c;
  byte *local_38;
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
  puStack_c = &LAB_005b5d3d;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  uVar11 = 3;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e99fc,4);
  local_8 = 0;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar5 = *(byte **)pbVar3;
  }
  uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar3 + 0x10),(byte *)"torpedo",7);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
LAB_0045fbb4:
      local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if ((char)uVar4 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e99fc,4);
    local_8 = 1;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar5 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar5 = *(byte **)pbVar3;
    }
    uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar3 + 0x10),(byte *)"probe",5);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
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
    if ((char)uVar4 == '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e99fc,4);
      local_8 = 2;
      pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar5 = pbVar3;
      if (0xf < *(uint *)(pbVar3 + 0x14)) {
        pbVar5 = *(byte **)pbVar3;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar3 + 0x10),&DAT_005ea708,4);
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
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
      if ((char)uVar4 != '\0') {
        uVar11 = 5;
      }
    }
    else {
      uVar11 = 4;
    }
  }
  else {
    uVar11 = 3;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"warhead",7);
  local_8 = 3;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar5 = *(byte **)pbVar3;
  }
  uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar3 + 0x10),&DAT_005ea704,3);
  local_8 = 0xffffffff;
  local_5d = (byte)uVar4;
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
  pbVar3 = (byte *)FUN_005adb0f(0x1b8);
  local_8 = 4;
  local_8c = pbVar3;
  local_68 = pbVar3;
  FUN_00519c60(pbVar3,4);
  *(uint *)(pbVar3 + 0x194) = (uint)local_5d;
  pbVar3[0x198] = 0;
  pbVar3[0x199] = 0;
  pbVar3[0x19a] = 0x80;
  pbVar3[0x19b] = 0x3f;
  pbVar3[0x19c] = 0;
  pbVar3[0x19d] = 0;
  pbVar3[0x19e] = 0;
  pbVar3[0x19f] = 0;
  pbVar3[0x1a0] = 100;
  pbVar3[0x1a1] = 0;
  pbVar3[0x1a2] = 0;
  pbVar3[0x1a3] = 0;
  pbVar3[0x1a4] = 0;
  local_8 = 0xffffffff;
  pbVar3[0x1a8] = 0;
  pbVar3[0x1a9] = 0;
  pbVar3[0x1aa] = 0;
  pbVar3[0x1ab] = 0;
  pbVar3[0x1ac] = 0;
  pbVar3[0x1ad] = 0;
  pbVar3[0x1ae] = 0;
  pbVar3[0x1af] = 0;
  pbVar3[0x1b0] = 0;
  pbVar3[0x1b1] = 0;
  pbVar3[0x1b2] = 0;
  pbVar3[0x1b3] = 0;
  *(undefined4 *)(pbVar3 + 0x1b4) = uVar11;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_70 = pbVar3;
  FUN_00402690(local_2c,"basecost",8);
  local_8 = 5;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  *(int *)(pbVar3 + 0x1a0) = iVar6;
  local_8 = 0xffffffff;
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
  FUN_00402690(local_2c,"canprobestar",0xc);
  local_8 = 6;
  pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar5 = pbVar7;
  if (0xf < *(uint *)(pbVar7 + 0x14)) {
    pbVar5 = *(byte **)pbVar7;
  }
  uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar7 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_5d = (byte)uVar4;
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
  if (local_5d != '\0') {
    pbVar3[0x1a4] = 1;
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,"defaults",8);
  local_8 = 7;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar5);
  FUN_00592d70(&local_98,',',(undefined4 *)in_stack_ffffff40);
  local_8._0_1_ = 9;
  if (0xf < local_48) {
    pvVar10 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar10 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  pbVar7 = (byte *)FUN_005adb0f(0x40);
  pbVar7[0x10] = 0;
  pbVar7[0x11] = 0;
  pbVar7[0x12] = 0;
  pbVar7[0x13] = 0;
  pbVar5 = pbVar7 + 0x34;
  pbVar7[0x14] = 0xf;
  pbVar7[0x15] = 0;
  pbVar7[0x16] = 0;
  pbVar7[0x17] = 0;
  *pbVar7 = 0;
  pbVar7[0x28] = 0;
  pbVar7[0x29] = 0;
  pbVar7[0x2a] = 0;
  pbVar7[0x2b] = 0;
  pbVar7[0x2c] = 0xf;
  pbVar7[0x2d] = 0;
  pbVar7[0x2e] = 0;
  pbVar7[0x2f] = 0;
  pbVar7[0x18] = 0;
  pbVar7[0x30] = 0;
  pbVar7[0x31] = 0;
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar7[0x38] = 0;
  pbVar7[0x39] = 0;
  pbVar7[0x3a] = 0;
  pbVar7[0x3b] = 0;
  pbVar7[0x3c] = 0;
  pbVar7[0x3d] = 0;
  pbVar7[0x3e] = 0;
  pbVar7[0x3f] = 0;
  local_74 = pbVar7;
  local_68 = pbVar7;
  FUN_00402690(pbVar7,"stock",5);
  local_64 = (byte *)0x0;
  iVar6 = local_94 - local_98 >> 0x1f;
  if ((local_94 - local_98) / 0x18 + iVar6 != iVar6) {
    iVar6 = 0;
    do {
      FUN_004024e0(&stack0xffffff40,(undefined4 *)(local_98 + iVar6));
      iVar8 = FUN_004a8020(in_stack_ffffff40);
      if (iVar8 != 0) {
        local_78 = (undefined4 *)FUN_005adb0f(8);
        *local_78 = 0xffffffff;
        local_78[1] = iVar8;
        puVar1 = *(undefined4 **)(pbVar7 + 0x38);
        if (*(undefined4 **)(pbVar7 + 0x3c) == puVar1) {
          FUN_00414080(pbVar5,puVar1,&local_78);
        }
        else {
          *puVar1 = local_78;
          *(int *)(pbVar7 + 0x38) = *(int *)(pbVar7 + 0x38) + 4;
        }
      }
      iVar6 = iVar6 + 0x18;
      local_64 = (byte *)((int)local_64 + 1);
      pbVar3 = local_8c;
    } while (local_64 < (uint)((local_94 - local_98) / 0x18));
  }
  puVar1 = *(undefined4 **)(pbVar3 + 0x188);
  if (*(undefined4 **)(pbVar3 + 0x18c) == puVar1) {
    FUN_00414080(pbVar3 + 0x184,puVar1,&local_68);
  }
  else {
    *puVar1 = local_74;
    *(int *)(pbVar3 + 0x188) = *(int *)(pbVar3 + 0x188) + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hullmaxtemperature",0x12);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  pbVar5 = local_68;
  iVar6 = 0;
  local_64 = local_6c;
  while (local_64 != pbVar5) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
  pcVar12 = atoi_exref;
  if (iVar6 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"hullmaxtemperature",0x12);
    local_8._0_1_ = 10;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar12 = atoi_exref;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar6 = atoi((char *)pbVar5);
    *(int *)(pbVar3 + 0xcc) = iVar6;
    local_8._0_1_ = 9;
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
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 0x60 != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar3 + 0x60,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 9;
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
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar3,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 9;
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
  FUN_00402690(local_2c,"shortname",9);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 0x48 != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar3 + 0x48,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 9;
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
  FUN_00402690(local_2c,"description",0xb);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 0x90 != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar3 + 0x90,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 9;
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
  FUN_00402690(local_2c,"manufacturer",0xc);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 + 0x78 != pbVar5) {
    pbVar7 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar7 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar3 + 0x78,pbVar7,*(uint *)(pbVar5 + 0x10));
  }
  local_8._0_1_ = 9;
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
  FUN_00402690(local_2c,"warheadsize",0xb);
  local_8._0_1_ = 0x10;
  FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  iVar6 = (*pcVar12)();
  local_8._0_1_ = 9;
  *(float *)(pbVar3 + 0x198) = (float)iVar6;
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
  FUN_00402690(local_2c,"spinuptime",10);
  local_8._0_1_ = 0x11;
  FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  iVar6 = (*pcVar12)();
  local_8._0_1_ = 9;
  *(float *)(pbVar3 + 0x19c) = (float)iVar6;
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
  FUN_00402690(local_2c,"maxspeed",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
  pbVar5 = local_68;
  iVar6 = 0;
  local_64 = local_6c;
  while (local_64 != pbVar5) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
  if (iVar6 != 0) {
    local_34 = 0;
    local_30 = 0xf;
    local_44 = (byte *)((uint)local_44 & 0xffffff00);
    FUN_00402690(&local_44,"maxspeed",8);
    local_8._0_1_ = 0x12;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)&local_44);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar15 = atof((char *)pbVar5);
    *(float *)(pbVar3 + 0x108) = (float)dVar15;
    local_8._0_1_ = 9;
    if (0xf < local_30) {
      pbVar5 = local_44;
      if ((0xfff < local_30 + 1) &&
         (pbVar5 = *(byte **)(local_44 + -4), (byte *)0x1f < local_44 + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pbVar5);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44 = (byte *)((uint)local_44 & 0xffffff00);
  }
  iVar6 = DAT_0065b5cc;
  puVar1 = *(undefined4 **)(DAT_0065b5cc + 0x28);
  if (*(undefined4 **)(DAT_0065b5cc + 0x2c) == puVar1) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x24),puVar1,&local_70);
    pbVar3 = local_70;
  }
  else {
    *puVar1 = pbVar3;
    *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"modulelocation",0xe);
  iVar6 = FUN_0047d0f0((byte *)local_2c);
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
  if (iVar6 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"modulelocation",0xe);
    FUN_00419820(&DAT_0065b530,(int *)&local_6c,(byte *)local_2c);
    pbVar5 = local_68;
    iVar6 = 0;
    local_70 = local_6c;
    while (local_70 != pbVar5) {
      iVar6 = iVar6 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_70);
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
    if (iVar6 != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"modulelocation",0xe);
      local_8._0_1_ = 0x18;
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar5);
      FUN_00592d70(local_88,',',(undefined4 *)in_stack_ffffff40);
      local_8._0_1_ = 0x1a;
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
      pbVar5 = *(byte **)(pbVar3 + 400);
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      *(byte **)(pbVar3 + 400) = pbVar5 + 1;
      FUN_004024e0(&stack0xffffff40,local_88[0] + 0x18);
      local_68 = (byte *)FUN_00519b40(in_stack_ffffff40);
      pcVar9 = (char *)(local_88[0] + 0x12);
      if (0xf < (uint)local_88[0][0x17]) {
        pcVar9 = *(char **)pcVar9;
      }
      pcVar13 = (char *)(local_88[0] + 0xc);
      if (0xf < (uint)local_88[0][0x11]) {
        pcVar13 = *(char **)pcVar13;
      }
      iVar6 = atoi(pcVar9);
      fVar14 = (float)iVar6;
      iVar6 = atoi(pcVar13);
      cocos2d::Vec2::Vec2(local_7c,(float)iVar6,fVar14);
      local_8._0_1_ = 0x1b;
      pcVar9 = (char *)(local_88[0] + 6);
      if (0xf < (uint)local_88[0][0xb]) {
        pcVar9 = *(char **)pcVar9;
      }
      iVar6 = atoi(pcVar9);
      FUN_004024e0(&stack0xffffff40,local_88[0]);
      local_40 = FUN_004b0240(in_stack_ffffff40);
      local_8._0_1_ = 0x1a;
      local_38 = local_68;
      local_44 = pbVar5;
      local_3c = iVar6;
      cocos2d::Vec2::Vec2((Vec2 *)&local_34,local_7c);
      cocos2d::Vec2::~Vec2(local_7c);
      puVar1 = *(undefined4 **)(pbVar3 + 0x140);
      if (*(undefined4 **)(pbVar3 + 0x144) == puVar1) {
        FUN_0047e880(pbVar3 + 0x13c,puVar1,&local_44);
      }
      else {
        *puVar1 = local_44;
        puVar1[1] = local_40;
        puVar1[2] = local_3c;
        puVar1[3] = local_38;
        cocos2d::Vec2::Vec2((Vec2 *)(puVar1 + 4),(Vec2 *)&local_34);
        *(int *)(pbVar3 + 0x140) = *(int *)(pbVar3 + 0x140) + 0x18;
      }
      cocos2d::Vec2::~Vec2((Vec2 *)&local_34);
      FUN_004025a0((int *)local_88);
    }
  }
  else {
    uVar4 = 0;
    local_64 = (byte *)0x0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"modulelocation",0xe);
      local_8._0_1_ = 0x13;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = *(int *)(pbVar5 + 4);
      iVar8 = *(int *)pbVar5;
      local_8._0_1_ = 9;
      uVar2 = (undefined1)local_8;
      local_8._0_1_ = 9;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_0045fbb4;
        FUN_005adb3f(pvVar10);
      }
      if ((uint)((iVar6 - iVar8) / 0x18) <= uVar4) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"modulelocation",0xe);
      local_8._0_1_ = 0x14;
      pbVar5 = FUN_0047d5c0((byte *)local_2c);
      FUN_004024e0(&stack0xffffff40,(undefined4 *)(local_64 + *(int *)pbVar5));
      FUN_00592d70(local_88,',',(undefined4 *)in_stack_ffffff40);
      local_8._0_1_ = 0x16;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4), uVar2 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_0045fbb4;
        FUN_005adb3f(pvVar10);
      }
      local_68 = *(byte **)(pbVar3 + 400);
      local_1c = 0;
      *(byte **)(pbVar3 + 400) = local_68 + 1;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_004024e0(&stack0xffffff40,local_88[0] + 0x18);
      local_74 = (byte *)FUN_00519b40(in_stack_ffffff40);
      pcVar9 = (char *)(local_88[0] + 0x12);
      if (0xf < (uint)local_88[0][0x17]) {
        pcVar9 = *(char **)pcVar9;
      }
      pcVar13 = (char *)(local_88[0] + 0xc);
      if (0xf < (uint)local_88[0][0x11]) {
        pcVar13 = *(char **)pcVar13;
      }
      iVar6 = atoi(pcVar9);
      fVar14 = (float)iVar6;
      iVar6 = atoi(pcVar13);
      cocos2d::Vec2::Vec2(local_7c,(float)iVar6,fVar14);
      local_8._0_1_ = 0x17;
      pcVar9 = (char *)(local_88[0] + 6);
      if (0xf < (uint)local_88[0][0xb]) {
        pcVar9 = *(char **)pcVar9;
      }
      iVar6 = atoi(pcVar9);
      FUN_004024e0(&stack0xffffff40,local_88[0]);
      local_40 = FUN_004b0240(in_stack_ffffff40);
      local_8 = CONCAT31(local_8._1_3_,0x16);
      local_38 = local_74;
      local_44 = local_68;
      local_3c = iVar6;
      cocos2d::Vec2::Vec2((Vec2 *)&local_34,local_7c);
      cocos2d::Vec2::~Vec2(local_7c);
      puVar1 = *(undefined4 **)(pbVar3 + 0x140);
      if (*(undefined4 **)(pbVar3 + 0x144) == puVar1) {
        FUN_0047e880(pbVar3 + 0x13c,puVar1,&local_44);
      }
      else {
        *puVar1 = local_44;
        puVar1[1] = local_40;
        puVar1[2] = local_3c;
        puVar1[3] = local_38;
        cocos2d::Vec2::Vec2((Vec2 *)(puVar1 + 4),(Vec2 *)&local_34);
        *(int *)(pbVar3 + 0x140) = *(int *)(pbVar3 + 0x140) + 0x18;
      }
      cocos2d::Vec2::~Vec2((Vec2 *)&local_34);
      local_8._0_1_ = 9;
      FUN_004025a0((int *)local_88);
      uVar4 = uVar4 + 1;
      local_64 = local_64 + 0x18;
    }
  }
  FUN_004025a0(&local_98);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
