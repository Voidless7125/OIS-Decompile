#include "../ois_server.exe.h"


void __cdecl FUN_004527e0(void *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffffa4;
  byte *local_2c;
  int local_28;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4c39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffa4,&param_1);
  FUN_00592d70(&local_2c,',',in_stack_ffffffa4);
  pbVar2 = local_2c;
  uVar4 = *(uint *)(local_2c + 0x14);
  pbVar7 = local_2c;
  if (0xf < uVar4) {
    pbVar7 = *(byte **)local_2c;
  }
  uVar3 = FUN_004031f0(pbVar7,*(uint *)(local_2c + 0x10),(byte *)"clusterm",8);
  if ((char)uVar3 == '\0') {
    pbVar7 = pbVar2;
    if (0xf < uVar4) {
      pbVar7 = *(byte **)pbVar2;
    }
    uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"hapnode",7);
    if ((char)uVar3 == '\0') {
      pbVar7 = pbVar2;
      if (0xf < uVar4) {
        pbVar7 = *(byte **)pbVar2;
      }
      uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"roaut",5);
      if ((char)uVar3 == '\0') {
        pbVar7 = pbVar2;
        if (0xf < uVar4) {
          pbVar7 = *(byte **)pbVar2;
        }
        uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),&DAT_005e8630,4);
        if ((char)uVar3 == '\0') {
          pbVar7 = pbVar2;
          if (0xf < uVar4) {
            pbVar7 = *(byte **)pbVar2;
          }
          uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"microcomp",9);
          if ((char)uVar3 == '\0') {
            pbVar7 = pbVar2;
            if (0xf < uVar4) {
              pbVar7 = *(byte **)pbVar2;
            }
            uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"tasconverter",0xc);
            if ((char)uVar3 == '\0') {
              pbVar7 = pbVar2;
              if (0xf < uVar4) {
                pbVar7 = *(byte **)pbVar2;
              }
              uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"buffer",6);
              if ((char)uVar3 == '\0') {
                pbVar7 = pbVar2;
                if (0xf < uVar4) {
                  pbVar7 = *(byte **)pbVar2;
                }
                uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"emrelay",7);
                if ((char)uVar3 == '\0') {
                  pbVar7 = pbVar2;
                  if (0xf < uVar4) {
                    pbVar7 = *(byte **)pbVar2;
                  }
                  uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),&DAT_005e8698,4);
                  if ((char)uVar3 == '\0') {
                    pbVar7 = pbVar2;
                    if (0xf < uVar4) {
                      pbVar7 = *(byte **)pbVar2;
                    }
                    uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"burner",6);
                    if ((char)uVar3 == '\0') {
                      pbVar7 = pbVar2;
                      if (0xf < uVar4) {
                        pbVar7 = *(byte **)pbVar2;
                      }
                      uVar4 = FUN_004031f0(pbVar7,*(uint *)(pbVar2 + 0x10),(byte *)"magnode",7);
                      puVar9 = local_14;
                      if ((char)uVar4 != '\0') {
                        puVar9 = (undefined4 *)0x9;
                      }
                    }
                    else {
                      puVar9 = (undefined4 *)0x7;
                    }
                  }
                  else {
                    puVar9 = (undefined4 *)0xc;
                  }
                }
                else {
                  puVar9 = (undefined4 *)0x8;
                }
              }
              else {
                puVar9 = (undefined4 *)0x5;
              }
            }
            else {
              puVar9 = (undefined4 *)0x4;
            }
          }
          else {
            puVar9 = (undefined4 *)0x6;
          }
        }
        else {
          puVar9 = (undefined4 *)0x3;
        }
      }
      else {
        puVar9 = (undefined4 *)0x2;
      }
    }
    else {
      puVar9 = (undefined4 *)0x0;
    }
  }
  else {
    puVar9 = (undefined4 *)0x1;
  }
  pbVar7 = pbVar2 + 0x18;
  if (0xf < *(uint *)(pbVar2 + 0x2c)) {
    pbVar7 = *(byte **)pbVar7;
  }
  local_20 = atoi((char *)pbVar7);
  pbVar7 = local_2c + 0x30;
  if (0xf < *(uint *)(local_2c + 0x44)) {
    pbVar7 = *(byte **)pbVar7;
  }
  local_14 = (undefined4 *)atoi((char *)pbVar7);
  iVar8 = -1;
  if (3 < (uint)((local_28 - (int)local_2c) / 0x18)) {
    pbVar7 = local_2c + 0x48;
    if (0xf < *(uint *)(local_2c + 0x5c)) {
      pbVar7 = *(byte **)pbVar7;
    }
    iVar8 = atoi((char *)pbVar7);
  }
  local_1c = (undefined4 *)((uint)local_1c & 0xffffff00);
  if ((uint)((local_28 - (int)local_2c) / 0x18) < 5) {
    uVar6 = 0;
  }
  else {
    pbVar7 = local_2c + 0x60;
    if (0xf < *(uint *)(local_2c + 0x74)) {
      pbVar7 = *(byte **)(local_2c + 0x60);
    }
    uVar4 = FUN_004031f0(pbVar7,*(uint *)(local_2c + 0x70),&DAT_005e425c,4);
    uVar6 = SUB41(local_1c,0);
    if ((char)uVar4 != '\0') {
      uVar6 = 1;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  if (iVar8 != -1) {
    if (iVar8 < 0) {
      *(undefined1 *)((local_18 - iVar8) + 0x48) = 1;
      if (-*(int *)(local_18 + 0x34) != iVar8 && *(int *)(local_18 + 0x34) <= -iVar8) {
        *(int *)(local_18 + 0x34) = -iVar8;
      }
    }
    else {
      *(undefined1 *)(local_18 + 0x48 + iVar8) = 1;
      if (*(int *)(local_18 + 0x30) < iVar8) {
        *(int *)(local_18 + 0x30) = iVar8;
      }
    }
  }
  local_1c = (undefined4 *)FUN_005adb0f(0x14);
  *local_1c = puVar9;
  local_1c[1] = iVar8;
  *(undefined1 *)(local_1c + 2) = uVar6;
  local_1c[3] = (float)local_20;
  local_1c[4] = (float)(int)local_14;
  piVar1 = *(int **)(local_18 + 0x54);
  local_14 = local_1c;
  if (*(int **)(local_18 + 0x58) == piVar1) {
    FUN_00414080((void *)(local_18 + 0x50),piVar1,&local_14);
  }
  else {
    *piVar1 = (int)local_1c;
    *(int *)(local_18 + 0x54) = *(int *)(local_18 + 0x54) + 4;
  }
  FUN_004025a0((int *)&local_2c);
  if (0xf < in_stack_00000018) {
    pvVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar5 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00452ba0(void *this,void *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  char *pcVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff8c;
  char *local_30;
  int local_2c;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4ca3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff8c,&param_1);
  FUN_00592d70(&local_30,',',in_stack_ffffff8c);
  pcVar4 = local_30;
  if (0xf < *(uint *)(local_30 + 0x14)) {
    pcVar4 = *(char **)local_30;
  }
  local_18 = (float)atoi(pcVar4);
  pcVar4 = local_30 + 0x18;
  if (0xf < *(uint *)(local_30 + 0x2c)) {
    pcVar4 = *(char **)pcVar4;
  }
  local_24 = atoi(pcVar4);
  pcVar4 = local_30 + 0x30;
  if (0xf < *(uint *)(local_30 + 0x44)) {
    pcVar4 = *(char **)pcVar4;
  }
  local_14 = (float *)atoi(pcVar4);
  pcVar4 = local_30 + 0x48;
  if (0xf < *(uint *)(local_30 + 0x5c)) {
    pcVar4 = *(char **)pcVar4;
  }
  local_20 = atoi(pcVar4);
  fVar6 = -NAN;
  if ((local_2c - (int)local_30) / 0x18 == 5) {
    pcVar4 = local_30 + 0x60;
    if (0xf < *(uint *)(local_30 + 0x74)) {
      pcVar4 = *(char **)pcVar4;
    }
    fVar6 = (float)atoi(pcVar4);
  }
  pfVar2 = local_14;
  local_8._0_1_ = 3;
  pfVar3 = (float *)FUN_005adb0f(0x14);
  fVar7 = (float)local_20;
  local_1c = (float)(int)local_18;
  local_18 = (float)local_24;
  local_8._0_1_ = 6;
  local_14 = pfVar3;
  _eh_vector_constructor_iterator_(pfVar3,8,2,Vec2_exref,~Vec2_exref);
  pfVar3[4] = fVar6;
  *pfVar3 = local_1c;
  pfVar3[1] = local_18;
  pfVar3[2] = (float)(int)pfVar2;
  local_8 = CONCAT31(local_8._1_3_,3);
  pfVar3[3] = fVar7;
  puVar1 = *(undefined4 **)((int)this + 0x60);
  if (*(undefined4 **)((int)this + 100) == puVar1) {
    local_14 = pfVar3;
    FUN_00414080((void *)((int)this + 0x5c),puVar1,&local_14);
  }
  else {
    *puVar1 = pfVar3;
    *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 4;
    local_14 = pfVar3;
  }
  FUN_004025a0((int *)&local_30);
  if (0xf < in_stack_00000018) {
    pvVar5 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar5 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return;
}


void FUN_00452db0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  void *pvVar10;
  int iVar11;
  undefined4 *in_stack_ffffff70;
  byte *local_68;
  byte *local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [3];
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
  puStack_c = &LAB_005b4d18;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar4 = (byte *)FUN_005adb0f(0x68);
  local_34 = 0;
  pbVar6 = pbVar4 + 0x18;
  local_30 = 0xf;
  pbVar4[0x10] = 0;
  pbVar4[0x11] = 0;
  pbVar4[0x12] = 0;
  pbVar4[0x13] = 0;
  pbVar4[0x14] = 0xf;
  pbVar4[0x15] = 0;
  pbVar4[0x16] = 0;
  pbVar4[0x17] = 0;
  *pbVar4 = 0;
  pbVar4[0x28] = 0;
  pbVar4[0x29] = 0;
  pbVar4[0x2a] = 0;
  pbVar4[0x2b] = 0;
  pbVar4[0x2c] = 0xf;
  pbVar4[0x2d] = 0;
  pbVar4[0x2e] = 0;
  pbVar4[0x2f] = 0;
  *pbVar6 = 0;
  pbVar4[0x4c] = 0;
  pbVar4[0x4d] = 0;
  pbVar4[0x4e] = 0;
  pbVar4[0x4f] = 0;
  pbVar4[0x50] = 0;
  pbVar4[0x51] = 0;
  pbVar4[0x52] = 0;
  pbVar4[0x53] = 0;
  pbVar4[0x54] = 0;
  pbVar4[0x55] = 0;
  pbVar4[0x56] = 0;
  pbVar4[0x57] = 0;
  pbVar4[0x58] = 0;
  pbVar4[0x59] = 0;
  pbVar4[0x5a] = 0;
  pbVar4[0x5b] = 0;
  pbVar4[0x5c] = 0;
  pbVar4[0x5d] = 0;
  pbVar4[0x5e] = 0;
  pbVar4[0x5f] = 0;
  pbVar4[0x60] = 0;
  pbVar4[0x61] = 0;
  pbVar4[0x62] = 0;
  pbVar4[99] = 0;
  pbVar4[100] = 0;
  pbVar4[0x65] = 0;
  pbVar4[0x66] = 0;
  pbVar4[0x67] = 0;
  pbVar4[0x30] = 0;
  pbVar4[0x31] = 0;
  pbVar4[0x32] = 0;
  pbVar4[0x33] = 0;
  pbVar4[0x34] = 0;
  pbVar4[0x35] = 0;
  pbVar4[0x36] = 0;
  pbVar4[0x37] = 0;
  pbVar4[0x48] = 0;
  pbVar4[0x49] = 0;
  pbVar4[0x4a] = 0;
  pbVar4[0x4b] = 0;
  pbVar4[0x38] = 4;
  pbVar4[0x39] = 0;
  pbVar4[0x3a] = 0;
  pbVar4[0x3b] = 0;
  pbVar4[0x3c] = 4;
  pbVar4[0x3d] = 0;
  pbVar4[0x3e] = 0;
  pbVar4[0x3f] = 0;
  pbVar4[0x48] = 2;
  pbVar4[0x49] = 0;
  pbVar4[0x4a] = 0;
  pbVar4[0x4b] = 0;
  pbVar4[0x40] = 4;
  pbVar4[0x41] = 0;
  pbVar4[0x42] = 0;
  pbVar4[0x43] = 0;
  pbVar4[0x4c] = 2;
  pbVar4[0x4d] = 0;
  pbVar4[0x4e] = 0;
  pbVar4[0x4f] = 0;
  pbVar4[0x44] = 4;
  pbVar4[0x45] = 0;
  pbVar4[0x46] = 0;
  pbVar4[0x47] = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_68 = pbVar4;
  local_64 = pbVar4;
  FUN_00402690(local_44,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (pbVar6 != pbVar5) {
    pbVar9 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar9 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar6,pbVar9,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar10 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar10 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
LAB_00452efe:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"background",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar8 = local_30;
  iVar11 = 0;
  local_60 = local_34;
  while (local_60 != uVar8) {
    iVar11 = iVar11 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar11 == 0) {
    FUN_00402690(pbVar4,&DAT_005e4c64,4);
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"background",10);
    local_8 = 1;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (pbVar4 != pbVar6) {
      pbVar5 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar5 = *(byte **)pbVar6;
      }
      FUN_00402690(pbVar4,pbVar5,*(uint *)(pbVar6 + 0x10));
    }
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"asets",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar8 = local_30;
  iVar11 = 0;
  local_60 = local_34;
  while (local_60 != uVar8) {
    iVar11 = iVar11 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar11 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"asets",5);
    local_8 = 2;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff70,(undefined4 *)pbVar6);
    FUN_00592d70(&local_38,',',in_stack_ffffff70);
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
    pcVar7 = local_38;
    if (0xf < *(uint *)(local_38 + 0x14)) {
      pcVar7 = *(char **)local_38;
    }
    iVar11 = atoi(pcVar7);
    *(int *)(pbVar4 + 0x40) = iVar11;
    pcVar7 = local_38 + 0x18;
    if (0xf < *(uint *)(local_38 + 0x2c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar11 = atoi(pcVar7);
    *(int *)(pbVar4 + 0x38) = iVar11;
    FUN_004025a0((int *)&local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"bsets",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar8 = local_30;
  iVar11 = 0;
  local_60 = local_34;
  while (local_60 != uVar8) {
    iVar11 = iVar11 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar11 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"bsets",5);
    local_8 = 3;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff70,(undefined4 *)pbVar6);
    FUN_00592d70(&local_38,',',in_stack_ffffff70);
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
    pcVar7 = local_38;
    if (0xf < *(uint *)(local_38 + 0x14)) {
      pcVar7 = *(char **)local_38;
    }
    iVar11 = atoi(pcVar7);
    *(int *)(pbVar4 + 0x44) = iVar11;
    pcVar7 = local_38 + 0x18;
    if (0xf < *(uint *)(local_38 + 0x2c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar11 = atoi(pcVar7);
    *(int *)(pbVar4 + 0x3c) = iVar11;
    FUN_004025a0((int *)&local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"socket",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar8 = local_30;
  iVar11 = 0;
  local_60 = local_34;
  while (local_60 != uVar8) {
    iVar11 = iVar11 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar11 != 0) {
    iVar11 = 0;
    do {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"socket",6);
      local_8 = 4;
      pbVar6 = (&PTR_s_univerisal_005ce660)[iVar11];
      pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar4 = pbVar6;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      pbVar9 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar9 = *(byte **)pbVar5;
      }
      uVar8 = FUN_004031f0(pbVar9,*(uint *)(pbVar5 + 0x10),pbVar6,(int)pbVar4 - (int)(pbVar6 + 1));
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00452efe;
        FUN_005adb3f(pvVar10);
      }
      if ((char)uVar8 != '\0') {
        *(int *)(local_64 + 0x4c) = iVar11;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"componentslot",0xd);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar8 = local_30;
  iVar11 = 0;
  local_60 = local_34;
  while (local_60 != uVar8) {
    iVar11 = iVar11 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar11 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"componentslot",0xd);
    local_8 = 5;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff70,(undefined4 *)pbVar6);
    FUN_004527e0(in_stack_ffffff70);
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"componentslot",0xd);
  iVar11 = FUN_0047d0f0((byte *)local_2c);
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
  if (iVar11 != 0) {
    uVar8 = 0;
    iVar11 = 0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"componentslot",0xd);
      local_8 = 6;
      pbVar6 = FUN_0047d5c0((byte *)local_2c);
      iVar2 = *(int *)(pbVar6 + 4);
      iVar3 = *(int *)pbVar6;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00452efe;
        FUN_005adb3f(pvVar10);
      }
      if ((uint)((iVar2 - iVar3) / 0x18) <= uVar8) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"componentslot",0xd);
      local_8 = 7;
      pbVar6 = FUN_0047d5c0((byte *)local_2c);
      FUN_004024e0(&stack0xffffff70,(undefined4 *)(*(int *)pbVar6 + iVar11));
      FUN_004527e0(in_stack_ffffff70);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00452efe;
        FUN_005adb3f(pvVar10);
      }
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 0x18;
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea28c,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_34,(byte *)local_2c);
  uVar8 = local_30;
  iVar11 = 0;
  local_60 = local_34;
  while (local_60 != uVar8) {
    iVar11 = iVar11 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar11 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005ea28c,4);
    local_8 = 8;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff70,(undefined4 *)pbVar6);
    FUN_00452ba0(local_64,in_stack_ffffff70);
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea28c,4);
  iVar11 = FUN_0047d0f0((byte *)local_2c);
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
  if (iVar11 != 0) {
    uVar8 = 0;
    iVar11 = 0;
    while( true ) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005ea28c,4);
      local_8 = 9;
      pbVar6 = FUN_0047d5c0((byte *)local_2c);
      iVar2 = *(int *)(pbVar6 + 4);
      iVar3 = *(int *)pbVar6;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00452efe;
        FUN_005adb3f(pvVar10);
      }
      if ((uint)((iVar2 - iVar3) / 0x18) <= uVar8) break;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      FUN_00402690(local_5c,&DAT_005ea28c,4);
      local_8 = 10;
      pbVar6 = FUN_0047d5c0((byte *)local_5c);
      FUN_004024e0(&stack0xffffff70,(undefined4 *)(*(int *)pbVar6 + iVar11));
      FUN_00452ba0(local_64,in_stack_ffffff70);
      local_8 = 0xffffffff;
      if (0xf < local_48) {
        pvVar10 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar10 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) goto LAB_00452efe;
        FUN_005adb3f(pvVar10);
      }
      uVar8 = uVar8 + 1;
      local_4c = 0;
      local_48 = 0xf;
      iVar11 = iVar11 + 0x18;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    }
  }
  if (DAT_0065b4d8 == DAT_0065b4d4) {
    FUN_0047e2f0(DAT_0065b4d4,&local_68);
  }
  else {
    *DAT_0065b4d4 = local_64;
    DAT_0065b4d4 = DAT_0065b4d4 + 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004539e0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  byte *pbVar10;
  void *pvVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  int *local_7c;
  int local_78;
  int local_74;
  int *local_70;
  char local_69;
  int local_68;
  int local_64;
  int local_60;
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
  puStack_c = &LAB_005b4e25;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  piVar4 = (int *)FUN_005adb0f(0x84);
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_70 = piVar4;
  FUN_00402690(local_2c,"classtype",9);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_60 = 1;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(local_44,(undefined4 *)pbVar5);
  ppppbVar9 = (byte ****)local_44[0];
  *piVar4 = -1;
  iVar13 = 0;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 10;
  piVar4[9] = 0;
  piVar4[10] = -1;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  *(undefined1 *)((int)piVar4 + 0x2e) = 1;
  piVar4[0xc] = 1;
  piVar4[0xd] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0xf;
  *(undefined1 *)(piVar4 + 0xe) = 0;
  piVar4[0x18] = 0;
  piVar4[0x19] = 0xf;
  *(undefined1 *)(piVar4 + 0x14) = 0;
  piVar4[0x1e] = 0;
  piVar4[0x1f] = 0xf;
  *(undefined1 *)(piVar4 + 0x1a) = 0;
  piVar4[0x20] = -1;
  do {
    pbVar5 = (&PTR_s_hapnode_005ce5f0)[iVar13];
    pbVar12 = pbVar5;
    do {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
    ppppbVar8 = local_44;
    if (0xf < local_30) {
      ppppbVar8 = ppppbVar9;
    }
    uVar6 = FUN_004031f0((byte *)ppppbVar8,local_34,pbVar5,(int)pbVar12 - (int)(pbVar5 + 1));
    if ((char)uVar6 != '\0') {
      local_70[0x20] = iVar13;
      ppppbVar9 = (byte ****)local_44[0];
      break;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0xd);
  if (0xf < local_30) {
    ppppbVar8 = ppppbVar9;
    if ((0xfff < local_30 + 1) &&
       (ppppbVar8 = (byte ****)ppppbVar9[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar9 + (-4 - (int)ppppbVar8)))) {
LAB_00453b8d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  piVar4 = local_70;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
  local_8 = 0xffffffff;
  local_7c = local_70;
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
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 3;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar13 = atoi((char *)pbVar5);
  *piVar4 = iVar13;
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
  FUN_00402690(local_2c,"sturdiness",10);
  local_8 = 4;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  dVar15 = atof((char *)pbVar5);
  piVar4[7] = (int)(float)dVar15;
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
  FUN_00402690(local_2c,"mindamage",9);
  local_8 = 5;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar13 = atoi((char *)pbVar5);
  piVar4[4] = iVar13;
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
  FUN_00402690(local_2c,"powermodifier",0xd);
  FUN_00419820(&DAT_0065b530,&local_68,(byte *)local_2c);
  iVar14 = local_64;
  iVar13 = 0;
  local_60 = local_68;
  while (local_60 != iVar14) {
    iVar13 = iVar13 + 1;
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"powermodifier",0xd);
    local_8 = 6;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar15 = atof((char *)pbVar5);
    piVar4[1] = (int)(float)dVar15;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emissionsmodifier",0x11);
  FUN_00419820(&DAT_0065b530,&local_68,(byte *)local_2c);
  iVar14 = local_64;
  iVar13 = 0;
  local_60 = local_68;
  while (local_60 != iVar14) {
    iVar13 = iVar13 + 1;
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"emissionsmodifier",0x11);
    local_8 = 7;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar15 = atof((char *)pbVar5);
    piVar4[3] = (int)(float)dVar15;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"efficiencymodifier",0x12);
  FUN_00419820(&DAT_0065b530,&local_68,(byte *)local_2c);
  iVar14 = local_64;
  iVar13 = 0;
  local_60 = local_68;
  while (local_60 != iVar14) {
    iVar13 = iVar13 + 1;
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"efficiencymodifier",0x12);
    local_8 = 8;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar15 = atof((char *)pbVar5);
    piVar4[2] = (int)(float)dVar15;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 9;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(piVar4 + 0xe) != pbVar5) {
    pbVar12 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar12 = *(byte **)pbVar5;
    }
    FUN_00402690(piVar4 + 0xe,pbVar12,*(uint *)(pbVar5 + 0x10));
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
  FUN_00402690(local_2c,"manufacturer",0xc);
  local_8 = 10;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(piVar4 + 0x14) != pbVar5) {
    pbVar12 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar12 = *(byte **)pbVar5;
    }
    FUN_00402690(piVar4 + 0x14,pbVar12,*(uint *)(pbVar5 + 0x10));
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
  FUN_00402690(local_2c,"animateframes",0xd);
  FUN_00419820(&DAT_0065b530,&local_68,(byte *)local_2c);
  iVar14 = local_64;
  iVar13 = 0;
  local_60 = local_68;
  while (local_60 != iVar14) {
    iVar13 = iVar13 + 1;
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"animateframes",0xd);
    local_8 = 0xb;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar13 = atoi((char *)pbVar5);
    piVar4[0xc] = iVar13;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"animatetime",0xb);
  FUN_00419820(&DAT_0065b530,&local_68,(byte *)local_2c);
  iVar14 = local_64;
  iVar13 = 0;
  local_60 = local_68;
  while (local_60 != iVar14) {
    iVar13 = iVar13 + 1;
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"animatetime",0xb);
    local_8 = 0xc;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    dVar15 = atof((char *)pbVar5);
    piVar4[0xd] = (int)(float)dVar15;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"basecost",8);
  FUN_00419820(&DAT_0065b530,&local_68,(byte *)local_2c);
  iVar13 = 0;
  local_60 = local_68;
  while (local_60 != local_64) {
    iVar13 = iVar13 + 1;
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"basecost",8);
    local_8 = 0xd;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar13 = atoi((char *)pbVar5);
    piVar4[8] = iVar13;
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
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"buffer",6);
  local_8 = 0xe;
  bVar3 = false;
  local_60 = 2;
  FUN_00419820(&DAT_0065b530,&local_78,(byte *)local_2c);
  iVar13 = local_74;
  iVar14 = 0;
  local_64 = local_78;
  if (local_78 != local_74) {
    do {
      iVar14 = iVar14 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_64);
    } while (local_64 != iVar13);
    if (iVar14 != 0) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"buffer",6);
      local_8 = 0xf;
      bVar3 = true;
      local_60 = 6;
      pbVar12 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
      pbVar5 = pbVar12;
      if (0xf < *(uint *)(pbVar12 + 0x14)) {
        pbVar5 = *(byte **)pbVar12;
      }
      uVar6 = FUN_004031f0(pbVar5,*(uint *)(pbVar12 + 0x10),&DAT_005e425c,4);
      local_69 = '\x01';
      if ((char)uVar6 != '\0') goto LAB_004545fd;
    }
  }
  local_69 = '\0';
LAB_004545fd:
  local_8 = 0xe;
  if (bVar3) {
    if (0xf < local_30) {
      ppppbVar9 = (byte ****)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppbVar9 = (byte ****)local_44[0][-1],
         (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)ppppbVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar9);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ***)((uint)local_44[0] & 0xffffff00);
  }
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (local_69 != '\0') {
    *(undefined1 *)((int)local_70 + 0x2d) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"socket",6);
  FUN_00419820(&DAT_0065b530,&local_78,(byte *)local_2c);
  iVar14 = local_74;
  iVar13 = 0;
  local_64 = local_78;
  while (local_64 != iVar14) {
    iVar13 = iVar13 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 != 0) {
    iVar13 = 0;
    do {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"socket",6);
      local_8 = 0x10;
      pbVar5 = (&PTR_s_univerisal_005ce660)[iVar13];
      pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar12 = pbVar5;
      do {
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      pbVar10 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar10 = *(byte **)pbVar7;
      }
      uVar6 = FUN_004031f0(pbVar10,*(uint *)(pbVar7 + 0x10),pbVar5,(int)pbVar12 - (int)(pbVar5 + 1))
      ;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar11 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar11 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_00453b8d;
        FUN_005adb3f(pvVar11);
      }
      if ((char)uVar6 != '\0') {
        local_70[9] = iVar13;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"adapter",7);
  FUN_00419820(&DAT_0065b530,&local_78,(byte *)local_2c);
  iVar13 = 0;
  local_64 = local_78;
  while (local_64 != local_74) {
    iVar13 = iVar13 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
    FUN_005adb3f(pvVar11);
  }
  if (iVar13 == 0) {
    if (local_70[0x20] == 0xb) {
      *(undefined1 *)(local_70 + 0xb) = 1;
    }
  }
  else {
    iVar13 = 0;
    *(undefined1 *)(local_70 + 0xb) = 1;
    do {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"adapter",7);
      local_8 = 0x11;
      pbVar5 = (&PTR_s_univerisal_005ce660)[iVar13];
      pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar12 = pbVar5;
      do {
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      pbVar10 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar10 = *(byte **)pbVar7;
      }
      uVar6 = FUN_004031f0(pbVar10,*(uint *)(pbVar7 + 0x10),pbVar5,(int)pbVar12 - (int)(pbVar5 + 1))
      ;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar11 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar11 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_00453b8d;
        FUN_005adb3f(pvVar11);
      }
      if ((char)uVar6 != '\0') {
        local_70[10] = iVar13;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  }
  piVar4 = local_70;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e986c,4);
  local_8 = 0x12;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if ((byte *)(piVar4 + 0x1a) != pbVar5) {
    pbVar12 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar12 = *(byte **)pbVar5;
    }
    FUN_00402690(piVar4 + 0x1a,pbVar12,*(uint *)(pbVar5 + 0x10));
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
  FUN_00402690(local_2c,"efficiencydropwhendamaged",0x19);
  local_8 = 0x13;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar13 = atoi((char *)pbVar5);
  piVar4[6] = iVar13;
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
  FUN_00402690(local_2c,"damagebeforeefficiencydrop",0x1a);
  local_8 = 0x14;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar13 = atoi((char *)pbVar5);
  piVar4[5] = iVar13;
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
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,"canrepair",9);
  local_8 = 0x15;
  pbVar12 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  pbVar5 = pbVar12;
  if (0xf < *(uint *)(pbVar12 + 0x14)) {
    pbVar5 = *(byte **)pbVar12;
  }
  uVar6 = FUN_004031f0(pbVar5,*(uint *)(pbVar12 + 0x10),(byte *)"false",5);
  local_8 = 0xffffffff;
  if (0xf < local_48) {
    pvVar11 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar11 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if ((char)uVar6 != '\0') {
    *(undefined1 *)((int)piVar4 + 0x2e) = 0;
  }
  pvVar11 = DAT_0065b5cc;
  puVar2 = *(undefined4 **)((int)DAT_0065b5cc + 4);
  if (*(undefined4 **)((int)DAT_0065b5cc + 8) == puVar2) {
    FUN_00414080(DAT_0065b5cc,puVar2,&local_7c);
  }
  else {
    *puVar2 = piVar4;
    *(int *)((int)pvVar11 + 4) = *(int *)((int)pvVar11 + 4) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
