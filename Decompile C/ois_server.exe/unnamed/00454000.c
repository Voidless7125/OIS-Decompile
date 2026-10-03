#include "../ois_server.exe.h"


void __cdecl FUN_00454ba0(void *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  uint in_stack_00000018;
  byte *in_stack_ffffff8c;
  void *local_4c [5];
  uint local_38;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4e77;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff8c,&param_1);
  FUN_00592d70(&local_28,',',(undefined4 *)in_stack_ffffff8c);
  local_8._0_1_ = 1;
  local_18 = -1;
  if (6 < (uint)((local_24 - (int)local_28) / 0x18)) {
    pcVar2 = (char *)(local_28 + 0x24);
    if (0xf < (uint)local_28[0x29]) {
      pcVar2 = *(char **)pcVar2;
    }
    local_18 = atoi(pcVar2);
  }
  piVar3 = (int *)FUN_005adb0f(0x30);
  local_8._0_1_ = 2;
  pcVar2 = (char *)(local_28 + 0x1e);
  if (0xf < (uint)local_28[0x23]) {
    pcVar2 = *(char **)pcVar2;
  }
  local_34 = piVar3;
  local_2c = atoi(pcVar2);
  pcVar2 = (char *)(local_28 + 0x18);
  if (0xf < (uint)local_28[0x1d]) {
    pcVar2 = *(char **)pcVar2;
  }
  local_14 = (int *)atoi(pcVar2);
  puVar1 = local_28;
  pbVar6 = (byte *)(local_28 + 0x12);
  if (0xf < (uint)local_28[0x17]) {
    pbVar6 = (byte *)local_28[0x12];
  }
  uVar4 = FUN_004031f0(pbVar6,local_28[0x16],&DAT_005e425c,4);
  FUN_004024e0(&stack0xffffff8c,puVar1 + 0xc);
  local_1c = FUN_00535de0(in_stack_ffffff8c);
  pbVar6 = (byte *)(local_28 + 6);
  if (0xf < (uint)local_28[0xb]) {
    pbVar6 = (byte *)local_28[6];
  }
  uVar5 = FUN_004031f0(pbVar6,local_28[10],&DAT_005e425c,4);
  FUN_004024e0(local_4c,local_28);
  local_8._0_1_ = 3;
  *piVar3 = local_18;
  piVar3[1] = local_2c;
  FUN_004024e0(piVar3 + 2,local_4c);
  piVar3[9] = local_1c;
  *(char *)(piVar3 + 8) = (char)uVar5;
  *(char *)(piVar3 + 10) = (char)uVar4;
  piVar3[0xb] = (int)local_14;
  local_8._0_1_ = 2;
  if (0xf < local_38) {
    pvVar7 = local_4c[0];
    if (0xfff < local_38 + 1) {
      pvVar7 = *(void **)((int)local_4c[0] + -4);
      if (0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar1 = *(undefined4 **)(local_30 + 0x20);
  local_14 = piVar3;
  if (*(undefined4 **)(local_30 + 0x24) == puVar1) {
    FUN_00414080((void *)(local_30 + 0x1c),puVar1,&local_14);
  }
  else {
    *puVar1 = piVar3;
    *(int *)(local_30 + 0x20) = *(int *)(local_30 + 0x20) + 4;
  }
  FUN_004025a0((int *)&local_28);
  if (0xf < in_stack_00000018) {
    pvVar7 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar7 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  ExceptionList = local_10;
  return;
}


void __cdecl FUN_00454dc0(void *param_1)

{
  int *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint in_stack_00000018;
  byte *in_stack_ffffff9c;
  undefined4 *local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4eb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff9c,&param_1);
  FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff9c);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar1 = (undefined4 *)FUN_005adb0f(0x28);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  local_1c = puVar1;
  local_18 = puVar1;
  if (puVar1 != local_38) {
    puVar3 = local_38;
    if (0xf < (uint)local_38[5]) {
      puVar3 = (undefined4 *)*local_38;
    }
    FUN_00402690(puVar1,puVar3,local_38[4]);
  }
  FUN_004024e0(&stack0xffffff9c,local_38 + 6);
  iVar2 = FUN_00535de0(in_stack_ffffff9c);
  puVar1[6] = iVar2;
  puVar3 = puVar1;
  if (2 < (uint)((local_34 - (int)local_38) / 0x18)) {
    FUN_004024e0(&stack0xffffff9c,local_38 + 0xc);
    FUN_00592d70(&local_2c,':',(undefined4 *)in_stack_ffffff9c);
    local_8._0_1_ = 2;
    local_14 = 0;
    iVar2 = local_28 - local_2c >> 0x1f;
    if ((local_28 - local_2c) / 0x18 + iVar2 != iVar2) {
      iVar2 = 0;
      do {
        this = (int *)puVar1[8];
        if ((int *)puVar1[9] == this) {
          FUN_00403840(puVar1 + 7,this,(undefined4 *)(local_2c + iVar2));
        }
        else {
          FUN_004024e0(this,(undefined4 *)(local_2c + iVar2));
          puVar1[8] = puVar1[8] + 0x18;
        }
        iVar2 = iVar2 + 0x18;
        local_14 = local_14 + 1;
        puVar3 = local_1c;
      } while (local_14 < (uint)((local_28 - local_2c) / 0x18));
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004025a0(&local_2c);
  }
  puVar1 = *(undefined4 **)(local_20 + 0x2c);
  if (*(undefined4 **)(local_20 + 0x30) == puVar1) {
    FUN_00414080((void *)(local_20 + 0x28),puVar1,&local_18);
  }
  else {
    *puVar1 = puVar3;
    *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 4;
  }
  FUN_004025a0((int *)&local_38);
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar4 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00454fb0(void *this,void *param_1)

{
  char *pcVar1;
  char cVar2;
  int *this_00;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  void *pvVar10;
  char *pcVar11;
  byte *pbVar12;
  uint in_stack_00000018;
  byte *in_stack_ffffff90;
  byte ***local_40 [3];
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b4ef8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff90,&param_1);
  FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff90);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3 = (undefined4 *)FUN_005adb0f(0x60);
  puVar3[4] = 0;
  puVar3[5] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0xf;
  *(undefined1 *)(puVar3 + 6) = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0xf;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  local_28 = puVar3;
  local_24 = puVar3;
  if (puVar3 != local_20) {
    puVar7 = local_20;
    if (0xf < (uint)local_20[5]) {
      puVar7 = (undefined4 *)*local_20;
    }
    FUN_00402690(puVar3,puVar7,local_20[4]);
  }
  pbVar9 = (byte *)(local_20 + 6);
  if (0xf < (uint)local_20[0xb]) {
    pbVar9 = (byte *)local_20[6];
  }
  uVar4 = FUN_004031f0(pbVar9,local_20[10],&DAT_005e425c,4);
  *(char *)(puVar3 + 0xc) = (char)uVar4;
  FUN_004024e0(&stack0xffffff90,local_20 + 0xc);
  iVar5 = FUN_00535de0(in_stack_ffffff90);
  puVar3[0x13] = iVar5;
  FUN_004024e0(local_40,local_20 + 0x12);
  iVar5 = 0;
  while( true ) {
    pcVar11 = (&PTR_DAT_005dfc80)[iVar5];
    pcVar1 = pcVar11 + 1;
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    ppppbVar8 = local_40;
    if (0xf < local_2c) {
      ppppbVar8 = (byte ****)local_40[0];
    }
    uVar4 = FUN_004031f0((byte *)ppppbVar8,local_30,(&PTR_DAT_005dfc80)[iVar5],
                         (int)pcVar11 - (int)pcVar1);
    if ((char)uVar4 != '\0') break;
    iVar5 = iVar5 + 1;
    if (4 < iVar5) {
      if (0xf < local_2c) {
        ppppbVar8 = (byte ****)local_40[0];
        if ((0xfff < local_2c + 1) &&
           (ppppbVar8 = (byte ****)local_40[0][-1],
           (byte *)0x1f < (byte *)((int)local_40[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
      iVar5 = 4;
LAB_00455181:
      puVar7 = local_24;
      local_24[0x14] = iVar5;
      if (4 < (uint)((local_1c - (int)local_20) / 0x18)) {
        FUN_004024e0(&stack0xffffff90,local_20 + 0x18);
        FUN_00592d70(&local_34,':',(undefined4 *)in_stack_ffffff90);
        local_8 = CONCAT31(local_8._1_3_,2);
        local_14 = 0;
        iVar5 = (int)(local_30 - local_34) >> 0x1f;
        if ((int)(local_30 - local_34) / 0x18 + iVar5 != iVar5) {
          iVar5 = 0;
          do {
            this_00 = (int *)puVar3[0x16];
            if ((int *)puVar3[0x17] == this_00) {
              FUN_00403840(puVar3 + 0x15,this_00,(undefined4 *)(local_34 + iVar5));
            }
            else {
              FUN_004024e0(this_00,(undefined4 *)(local_34 + iVar5));
              puVar3[0x16] = puVar3[0x16] + 0x18;
            }
            iVar5 = iVar5 + 0x18;
            local_14 = local_14 + 1;
            puVar7 = local_24;
          } while (local_14 < (uint)((int)(local_30 - local_34) / 0x18));
        }
        if (5 < (uint)((local_1c - (int)local_20) / 0x18)) {
          uVar4 = local_20[0x23];
          pbVar12 = (byte *)(local_20 + 0x1e);
          pbVar9 = pbVar12;
          if (0xf < uVar4) {
            pbVar9 = *(byte **)pbVar12;
          }
          local_14 = local_20[0x22];
          uVar6 = FUN_004031f0(pbVar9,local_14,&DAT_005e425c,4);
          if ((char)uVar6 == '\0') {
            pbVar9 = pbVar12;
            if (0xf < uVar4) {
              pbVar9 = *(byte **)pbVar12;
            }
            uVar6 = FUN_004031f0(pbVar9,local_14,(byte *)"false",5);
            if ((char)uVar6 == '\0') {
              pbVar9 = pbVar12;
              if (0xf < uVar4) {
                pbVar9 = *(byte **)pbVar12;
              }
              uVar6 = FUN_004031f0(pbVar9,local_14,(byte *)&PTR_005ce008,0);
              if (((char)uVar6 == '\0') && ((byte *)(puVar7 + 0xd) != pbVar12)) {
                if (0xf < uVar4) {
                  pbVar12 = *(byte **)pbVar12;
                }
                FUN_00402690(puVar7 + 0xd,pbVar12,local_14);
              }
            }
            else {
              *(undefined1 *)((int)puVar7 + 0x31) = 0;
            }
          }
          else {
            *(undefined1 *)((int)puVar7 + 0x31) = 1;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004025a0(&local_34);
      }
      puVar3 = *(undefined4 **)((int)this + 0x38);
      if (*(undefined4 **)((int)this + 0x3c) == puVar3) {
        FUN_00414080((void *)((int)this + 0x34),puVar3,&local_28);
      }
      else {
        *puVar3 = puVar7;
        *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 4;
      }
      FUN_004025a0((int *)&local_20);
      if (0xf < in_stack_00000018) {
        pvVar10 = param_1;
        if ((0xfff < in_stack_00000018 + 1) &&
           (pvVar10 = *(void **)((int)param_1 + -4),
           0x1f < (uint)((int)param_1 + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
      ExceptionList = local_10;
      return;
    }
  }
  if (0xf < local_2c) {
    ppppbVar8 = (byte ****)local_40[0];
    if ((0xfff < local_2c + 1) &&
       (ppppbVar8 = (byte ****)local_40[0][-1],
       (byte *)0x1f < (byte *)((int)local_40[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  goto LAB_00455181;
}


void FUN_00455370(void)

{
  byte *this;
  undefined4 *puVar1;
  byte *_Dst;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
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
  puStack_c = &LAB_005b24c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Dst = (byte *)FUN_005adb0f(0x48);
  memset(_Dst,0,0x48);
  _Dst[0x14] = 0xf;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  pbVar3 = _Dst + 0x18;
  _Dst[0x28] = 0;
  _Dst[0x29] = 0;
  _Dst[0x2a] = 0;
  _Dst[0x2b] = 0;
  this = _Dst + 0x30;
  _Dst[0x2c] = 0xf;
  _Dst[0x2d] = 0;
  _Dst[0x2e] = 0;
  _Dst[0x2f] = 0;
  *pbVar3 = 0;
  _Dst[0x40] = 0;
  _Dst[0x41] = 0;
  _Dst[0x42] = 0;
  _Dst[0x43] = 0;
  _Dst[0x44] = 0xf;
  _Dst[0x45] = 0;
  _Dst[0x46] = 0;
  _Dst[0x47] = 0;
  *this = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = _Dst;
  FUN_00402690(local_2c,&DAT_005e986c,4);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (_Dst != pbVar2) {
    pbVar5 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar5 = *(byte **)pbVar2;
    }
    FUN_00402690(_Dst,pbVar5,*(uint *)(pbVar2 + 0x10));
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
  FUN_00402690(local_2c,"artist",6);
  local_8 = 1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar3 != pbVar2) {
    pbVar5 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar5 = *(byte **)pbVar2;
    }
    FUN_00402690(pbVar3,pbVar5,*(uint *)(pbVar2 + 0x10));
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
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,&DAT_005e431c,4);
  local_8 = 2;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (this != pbVar3) {
    pbVar2 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar2 = *(byte **)pbVar3;
    }
    FUN_00402690(this,pbVar2,*(uint *)(pbVar3 + 0x10));
  }
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
  iVar4 = FUN_00402f60();
  puVar1 = *(undefined4 **)(iVar4 + 0x5c);
  if (*(undefined4 **)(iVar4 + 0x60) == puVar1) {
    FUN_00414080((void *)(iVar4 + 0x58),puVar1,&local_48);
  }
  else {
    *puVar1 = _Dst;
    *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004555e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *in_stack_ffffff74;
  int *local_68 [3];
  int *local_5c [3];
  int *local_50;
  int *local_4c;
  int *local_48;
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
  puStack_c = &LAB_005b4f48;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea398,2);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  piVar1 = local_4c;
  iVar8 = 0;
  local_48 = local_50;
  while (local_48 != piVar1) {
    iVar8 = iVar8 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_00455684:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005ea398,2);
  if (iVar8 == 0) {
    iVar8 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar8 != 0) {
      uVar9 = 0;
      local_48 = (int *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,&DAT_005ea398,2);
        local_8 = 3;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar4 + 4);
        iVar3 = *(int *)pbVar4;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_00455684;
          FUN_005adb3f(pvVar6);
        }
        if ((uint)((iVar8 - iVar3) / 0x18) <= uVar9) break;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005ea398,2);
        local_8 = 4;
        pbVar4 = FUN_0047d5c0((byte *)local_44);
        FUN_004024e0(&stack0xffffff74,(undefined4 *)(*(int *)pbVar4 + (int)local_48));
        FUN_00592d70(local_68,',',in_stack_ffffff74);
        local_8 = CONCAT31(local_8._1_3_,6);
        if (0xf < local_30) {
          pvVar6 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar6 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) goto LAB_00455684;
          FUN_005adb3f(pvVar6);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        piVar5 = (int *)FUN_005adb0f(0x1c);
        piVar1 = piVar5 + 1;
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0xf;
        *(undefined1 *)piVar1 = 0;
        *piVar5 = DAT_0065b3c0;
        DAT_0065b3c0 = DAT_0065b3c0 + 1;
        local_4c = piVar5;
        if (piVar1 != local_68[0]) {
          piVar7 = local_68[0];
          if (0xf < (uint)local_68[0][5]) {
            piVar7 = (int *)*local_68[0];
          }
          FUN_00402690(piVar1,piVar7,local_68[0][4]);
        }
        iVar8 = DAT_0065b5cc;
        puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x94);
        if (*(undefined4 **)(DAT_0065b5cc + 0x98) == puVar2) {
          FUN_00414080((void *)(DAT_0065b5cc + 0x90),puVar2,&local_4c);
        }
        else {
          *puVar2 = piVar5;
          *(int *)(iVar8 + 0x94) = *(int *)(iVar8 + 0x94) + 4;
        }
        local_8 = 0xffffffff;
        FUN_004025a0((int *)local_68);
        uVar9 = uVar9 + 1;
        local_48 = local_48 + 6;
      }
    }
  }
  else {
    local_8 = 0;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff74,(undefined4 *)pbVar4);
    FUN_00592d70(local_5c,',',in_stack_ffffff74);
    local_8 = CONCAT31(local_8._1_3_,2);
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
    piVar5 = (int *)FUN_005adb0f(0x1c);
    piVar1 = piVar5 + 1;
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0xf;
    *(undefined1 *)piVar1 = 0;
    *piVar5 = DAT_0065b3c0;
    DAT_0065b3c0 = DAT_0065b3c0 + 1;
    local_48 = piVar5;
    if (piVar1 != local_5c[0]) {
      piVar7 = local_5c[0];
      if (0xf < (uint)local_5c[0][5]) {
        piVar7 = (int *)*local_5c[0];
      }
      FUN_00402690(piVar1,piVar7,local_5c[0][4]);
    }
    iVar8 = DAT_0065b5cc;
    puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x94);
    if (*(undefined4 **)(DAT_0065b5cc + 0x98) == puVar2) {
      FUN_00414080((void *)(DAT_0065b5cc + 0x90),puVar2,&local_48);
    }
    else {
      *puVar2 = piVar5;
      *(int *)(iVar8 + 0x94) = *(int *)(iVar8 + 0x94) + 4;
    }
    FUN_004025a0((int *)local_5c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004559f0(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_stack_ffffff84;
  byte *local_54 [3];
  byte *local_48 [3];
  uint local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b4f98;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emote",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_38,(byte *)local_2c);
  pbVar1 = local_34;
  iVar9 = 0;
  local_30 = local_38;
  while (local_30 != pbVar1) {
    iVar9 = iVar9 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_30)
    ;
  }
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_00455a94:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"emote",5);
  if (iVar9 == 0) {
    iVar9 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar9 != 0) {
      uVar7 = 0;
      pbVar1 = (byte *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_3c = uVar7;
        local_34 = pbVar1;
        FUN_00402690(local_2c,"emote",5);
        local_8 = 3;
        pbVar3 = FUN_0047d5c0((byte *)local_2c);
        iVar9 = *(int *)(pbVar3 + 4);
        iVar8 = *(int *)pbVar3;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_00455a94;
          FUN_005adb3f(pvVar6);
        }
        if ((uint)((iVar9 - iVar8) / 0x18) <= uVar7) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"emote",5);
        local_8 = 4;
        pbVar3 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff84,(undefined4 *)(pbVar1 + *(int *)pbVar3));
        FUN_00592d70(local_54,',',in_stack_ffffff84);
        local_8 = CONCAT31(local_8._1_3_,6);
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_00455a94;
          FUN_005adb3f(pvVar6);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_30 = local_54[0];
        pbVar1 = local_54[0];
        if (0xf < *(uint *)(local_54[0] + 0x14)) {
          local_30 = *(byte **)local_54[0];
          pbVar1 = *(byte **)local_54[0];
        }
        pbVar3 = local_54[0];
        if (0xf < *(uint *)(local_54[0] + 0x14)) {
          pbVar3 = *(byte **)local_54[0];
        }
        iVar9 = (int)(pbVar1 + *(int *)(local_54[0] + 0x10)) - (int)pbVar3;
        iVar8 = 0;
        if (pbVar1 + *(int *)(local_54[0] + 0x10) < pbVar3) {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          do {
            iVar4 = tolower((int)(char)pbVar3[iVar8]);
            local_30[iVar8] = (byte)iVar4;
            iVar8 = iVar8 + 1;
          } while (iVar8 != iVar9);
        }
        pbVar3 = local_54[0];
        pbVar1 = local_54[0] + 0x18;
        pbVar5 = local_54[0];
        puVar2 = FUN_0047d270();
        pbVar5 = FUN_0047d6a0(puVar2 + 6,pbVar5);
        if (pbVar5 != pbVar1) {
          if (0xf < *(uint *)(pbVar3 + 0x2c)) {
            pbVar1 = *(byte **)pbVar1;
          }
          FUN_00402690(pbVar5,pbVar1,*(uint *)(pbVar3 + 0x28));
        }
        local_8 = 0xffffffff;
        FUN_004025a0((int *)local_54);
        uVar7 = local_3c + 1;
        pbVar1 = local_34 + 0x18;
      }
    }
  }
  else {
    local_8 = 0;
    pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff84,(undefined4 *)pbVar1);
    FUN_00592d70(local_48,',',in_stack_ffffff84);
    local_8 = CONCAT31(local_8._1_3_,2);
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
    pbVar3 = local_48[0];
    pbVar1 = local_48[0];
    if (0xf < *(uint *)(local_48[0] + 0x14)) {
      pbVar1 = *(byte **)local_48[0];
      pbVar3 = *(byte **)local_48[0];
    }
    pbVar5 = local_48[0];
    if (0xf < *(uint *)(local_48[0] + 0x14)) {
      pbVar5 = *(byte **)local_48[0];
    }
    FUN_00413ec0(&local_34,tolower_exref,(char *)pbVar5,
                 (char *)(pbVar3 + *(int *)(local_48[0] + 0x10)),pbVar1);
    pbVar1 = local_48[0] + 0x18;
    pbVar3 = local_48[0];
    puVar2 = FUN_0047d270();
    pbVar3 = FUN_0047d6a0(puVar2 + 6,pbVar3);
    if (pbVar3 != pbVar1) {
      if (0xf < *(uint *)(local_48[0] + 0x2c)) {
        pbVar1 = *(byte **)pbVar1;
      }
      FUN_00402690(pbVar3,pbVar1,*(uint *)(local_48[0] + 0x28));
    }
    FUN_004025a0((int *)local_48);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00455df0(void)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *in_stack_ffffff74;
  undefined4 *local_68 [3];
  undefined4 *local_5c [3];
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
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
  puStack_c = &LAB_005b4f48;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"animationframes",0xf);
  FUN_00419820(&DAT_0065b530,(int *)&local_50,(byte *)local_2c);
  puVar3 = local_4c;
  iVar8 = 0;
  local_48 = local_50;
  while (local_48 != puVar3) {
    iVar8 = iVar8 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_00455e94:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"animationframes",0xf);
  if (iVar8 == 0) {
    iVar8 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar8 != 0) {
      uVar9 = 0;
      local_48 = (undefined4 *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"animationframes",0xf);
        local_8 = 3;
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        iVar8 = *(int *)(pbVar2 + 4);
        iVar1 = *(int *)pbVar2;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar6 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar6 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_00455e94;
          FUN_005adb3f(pvVar6);
        }
        if ((uint)((iVar8 - iVar1) / 0x18) <= uVar9) break;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,"animationframes",0xf);
        local_8 = 4;
        pbVar2 = FUN_0047d5c0((byte *)local_44);
        FUN_004024e0(&stack0xffffff74,(undefined4 *)(*(int *)pbVar2 + (int)local_48));
        FUN_00592d70(local_68,',',in_stack_ffffff74);
        local_8 = CONCAT31(local_8._1_3_,6);
        if (0xf < local_30) {
          pvVar6 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar6 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) goto LAB_00455e94;
          FUN_005adb3f(pvVar6);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        puVar3 = (undefined4 *)FUN_005adb0f(0x20);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[5] = 0xf;
        local_4c = puVar3;
        if (puVar3 != local_68[0]) {
          puVar7 = local_68[0];
          if (0xf < (uint)local_68[0][5]) {
            puVar7 = (undefined4 *)*local_68[0];
          }
          FUN_00402690(puVar3,puVar7,local_68[0][4]);
        }
        pcVar5 = (char *)(local_68[0] + 6);
        if (0xf < (uint)local_68[0][0xb]) {
          pcVar5 = *(char **)pcVar5;
        }
        iVar8 = atoi(pcVar5);
        puVar3[6] = iVar8;
        pcVar5 = (char *)(local_68[0] + 0xc);
        if (0xf < (uint)local_68[0][0x11]) {
          pcVar5 = *(char **)pcVar5;
        }
        iVar8 = atoi(pcVar5);
        puVar3[7] = iVar8;
        puVar4 = FUN_0047d270();
        puVar7 = (undefined4 *)puVar4[4];
        if ((undefined4 *)puVar4[5] == puVar7) {
          FUN_00414080(puVar4 + 3,puVar7,&local_4c);
        }
        else {
          *puVar7 = puVar3;
          puVar4[4] = puVar4[4] + 4;
        }
        local_8 = 0xffffffff;
        FUN_004025a0((int *)local_68);
        uVar9 = uVar9 + 1;
        local_48 = local_48 + 6;
      }
    }
  }
  else {
    local_8 = 0;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff74,(undefined4 *)pbVar2);
    FUN_00592d70(local_5c,',',in_stack_ffffff74);
    local_8 = CONCAT31(local_8._1_3_,2);
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
    puVar3 = (undefined4 *)FUN_005adb0f(0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[5] = 0xf;
    local_48 = puVar3;
    if (puVar3 != local_5c[0]) {
      puVar7 = local_5c[0];
      if (0xf < (uint)local_5c[0][5]) {
        puVar7 = (undefined4 *)*local_5c[0];
      }
      FUN_00402690(puVar3,puVar7,local_5c[0][4]);
    }
    pcVar5 = (char *)(local_5c[0] + 6);
    if (0xf < (uint)local_5c[0][0xb]) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar8 = atoi(pcVar5);
    puVar3[6] = iVar8;
    pcVar5 = (char *)(local_5c[0] + 0xc);
    if (0xf < (uint)local_5c[0][0x11]) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar8 = atoi(pcVar5);
    puVar3[7] = iVar8;
    puVar4 = FUN_0047d270();
    puVar7 = (undefined4 *)puVar4[4];
    if ((undefined4 *)puVar4[5] == puVar7) {
      FUN_00414080(puVar4 + 3,puVar7,&local_48);
    }
    else {
      *puVar7 = puVar3;
      puVar4[4] = puVar4[4] + 4;
    }
    FUN_004025a0((int *)local_5c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00456220(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *pvVar9;
  uint uVar10;
  void *in_stack_ffffff68;
  int *local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
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
  puStack_c = &LAB_005b5018;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar4 = (int *)FUN_005adb0f(0x40);
  local_1c = 0;
  piVar4[5] = 0;
  pbVar7 = (byte *)(piVar4 + 1);
  piVar4[6] = 0xf;
  *pbVar7 = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_70 = piVar4;
  local_64 = piVar4;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  iVar6 = atoi((char *)pbVar5);
  *piVar4 = iVar6;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar9 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar9 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
LAB_00456327:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 1;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar7 != pbVar5) {
    pbVar8 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar8 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar7,pbVar8,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
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
  FUN_00402690(local_2c,"overlay",7);
  FUN_00419820(&DAT_0065b530,&local_6c,(byte *)local_2c);
  iVar1 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != iVar1) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"overlay",7);
  if (iVar6 == 0) {
    iVar6 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar6 != 0) {
      uVar10 = 0;
      iVar6 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"overlay",7);
        local_8 = 3;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00456327;
          FUN_005adb3f(pvVar9);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar10) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"overlay",7);
        local_8 = 4;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff68,(undefined4 *)(*(int *)pbVar7 + iVar6));
        FUN_00454ba0(in_stack_ffffff68);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00456327;
          FUN_005adb3f(pvVar9);
        }
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 0x18;
      }
    }
  }
  else {
    local_8 = 2;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff68,(undefined4 *)pbVar7);
    FUN_00454ba0(in_stack_ffffff68);
    local_8 = 0xffffffff;
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
  FUN_00402690(local_2c,"component",9);
  FUN_00419820(&DAT_0065b530,&local_6c,(byte *)local_2c);
  iVar1 = local_68;
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != iVar1) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"component",9);
  if (iVar6 == 0) {
    iVar6 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar6 != 0) {
      uVar10 = 0;
      iVar6 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"component",9);
        local_8 = 6;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00456327;
          FUN_005adb3f(pvVar9);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar10) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"component",9);
        local_8 = 7;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff68,(undefined4 *)(*(int *)pbVar7 + iVar6));
        FUN_00454dc0(in_stack_ffffff68);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00456327;
          FUN_005adb3f(pvVar9);
        }
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 0x18;
      }
    }
  }
  else {
    local_8 = 5;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff68,(undefined4 *)pbVar7);
    FUN_00454dc0(in_stack_ffffff68);
    local_8 = 0xffffffff;
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
  FUN_00402690(local_2c,"addition",8);
  FUN_00419820(&DAT_0065b530,&local_6c,(byte *)local_2c);
  iVar6 = 0;
  local_60 = local_6c;
  while (local_60 != local_68) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
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
  if (iVar6 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"addition",8);
    iVar6 = FUN_0047d0f0((byte *)local_2c);
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
    piVar4 = local_64;
    if (iVar6 != 0) {
      uVar10 = 0;
      iVar6 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"addition",8);
        local_8 = 9;
        pbVar7 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar7 + 4);
        iVar2 = *(int *)pbVar7;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00456327;
          FUN_005adb3f(pvVar9);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        piVar4 = local_64;
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar10) break;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        FUN_00402690(local_5c,"addition",8);
        local_8 = 10;
        pbVar7 = FUN_0047d5c0((byte *)local_5c);
        FUN_004024e0(&stack0xffffff68,(undefined4 *)(*(int *)pbVar7 + iVar6));
        FUN_00454fb0(local_64,in_stack_ffffff68);
        local_8 = 0xffffffff;
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_00456327;
          FUN_005adb3f(pvVar9);
        }
        uVar10 = uVar10 + 1;
        local_4c = 0;
        local_48 = 0xf;
        iVar6 = iVar6 + 0x18;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"addition",8);
    local_8 = 8;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff68,(undefined4 *)pbVar7);
    piVar4 = local_64;
    FUN_00454fb0(local_64,in_stack_ffffff68);
    local_8 = 0xffffffff;
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
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  iVar6 = DAT_0065b5cc;
  piVar3 = *(int **)(DAT_0065b5cc + 0x70);
  if (*(int **)(DAT_0065b5cc + 0x74) == piVar3) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x6c),piVar3,&local_70);
  }
  else {
    *piVar3 = (int)piVar4;
    *(int *)(iVar6 + 0x70) = *(int *)(iVar6 + 0x70) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00456c00(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 ****ppppuVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined4 *puVar14;
  undefined4 ****ppppuVar15;
  undefined4 ***pppuVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined2 in_FPUControlWord;
  double dVar20;
  void *in_stack_ffffff28;
  undefined4 *puVar21;
  undefined1 *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  int local_8c;
  undefined1 *local_84;
  undefined4 *local_80;
  byte *local_7c;
  byte *local_78;
  void *local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44 [3];
  byte *local_38;
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
  puStack_c = &LAB_005b520b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_70 = (byte *)0x0;
  local_6c = (byte *)0x0;
  puVar4 = (undefined1 *)FUN_005adb0f(0x110);
  *puVar4 = 0;
  *(undefined2 *)(puVar4 + 8) = 1;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 0x20) = 0xf;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0x34) = 0;
  *(undefined4 *)(puVar4 + 0x38) = 0xf;
  puVar4[0x24] = 0;
  *(undefined4 *)(puVar4 + 0x3c) = 0;
  *(undefined4 *)(puVar4 + 0x40) = 0;
  puVar4[0x44] = 0;
  *(undefined4 *)(puVar4 + 0x48) = 0;
  *(undefined4 *)(puVar4 + 0x4c) = 0;
  *(undefined4 *)(puVar4 + 0x50) = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *(undefined4 *)(puVar4 + 0x54) = 0;
  *(undefined4 *)(puVar4 + 0x58) = 0;
  local_84 = puVar4;
  cocos2d::Color3B::Color3B((Color3B *)(puVar4 + 0x5c),0xff,0x9a,0x80);
  *(undefined4 *)(puVar4 + 0x60) = 0;
  *(undefined4 *)(puVar4 + 100) = 0;
  *(undefined4 *)(puVar4 + 0x68) = 0;
  puVar21 = (undefined4 *)(puVar4 + 0x6c);
  local_8._0_1_ = 4;
  *puVar21 = 0;
  *(undefined4 *)(puVar4 + 0x70) = 0;
  local_94 = puVar21;
  uVar5 = FUN_004136c0();
  *puVar21 = uVar5;
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar21 = (undefined4 *)0x456d22;
  _eh_vector_constructor_iterator_
            (puVar4 + 0x74,0x18,5,(_func_void_void_ptr *)&LAB_00403160,FUN_00401b20);
  pbVar11 = puVar4 + 0xec;
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  pbVar11[0] = 0;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  *(undefined4 *)(puVar4 + 0xf0) = 0;
  *(undefined4 *)(puVar4 + 0xf4) = 0;
  *(undefined4 *)(puVar4 + 0x108) = 0;
  *(undefined4 *)(puVar4 + 0x10c) = 0xf;
  puVar4[0xf8] = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_98 = puVar4;
  local_68 = pbVar11;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar6 = local_78;
  iVar18 = 0;
  local_60 = local_7c;
  while (local_60 != pbVar6) {
    iVar18 = iVar18 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
LAB_00456de4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  puVar19 = local_84;
  if (iVar18 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e98b0,2);
    local_8 = 6;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(local_44,(undefined4 *)pbVar6);
    puVar19 = local_84;
    local_8._0_1_ = 7;
    ppppuVar15 = (undefined4 ****)(local_84 + 0xf8);
    if (ppppuVar15 != local_44) {
      ppppuVar7 = local_44;
      if (0xf < local_30) {
        ppppuVar7 = (undefined4 ****)local_44[0];
      }
      FUN_00402690(ppppuVar15,ppppuVar7,local_34);
    }
    if (0xf < *(uint *)(puVar19 + 0x10c)) {
      ppppuVar15 = (undefined4 ****)*ppppuVar15;
    }
    uVar8 = FUN_0042eeb0((int)ppppuVar15,*(uint *)(puVar19 + 0x108),0,(byte *)"extra",5);
    if (uVar8 != 0xffffffff) {
      puVar19[9] = 1;
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    if (0xf < local_30) {
      ppppuVar15 = (undefined4 ****)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppuVar15 = (undefined4 ****)local_44[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_44[0] + (-4 - (int)ppppuVar15)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar15);
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
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
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 8;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar19 + 0xc != pbVar6) {
    pbVar10 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar10 = *(byte **)pbVar6;
    }
    FUN_00402690(puVar19 + 0xc,pbVar10,*(uint *)(pbVar6 + 0x10));
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
  FUN_00402690(local_2c,"language",8);
  local_8 = 9;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar19 + 0x24 != pbVar6) {
    pbVar10 = pbVar6;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar10 = *(byte **)pbVar6;
    }
    FUN_00402690(puVar19 + 0x24,pbVar10,*(uint *)(pbVar6 + 0x10));
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
  FUN_00402690(local_2c,"modelclass",10);
  local_8 = 10;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  iVar18 = atoi((char *)pbVar6);
  puVar19 = local_84;
  uVar17 = 0;
  uVar8 = *(int *)(DAT_0065b5cc + 0x70) - *(int *)(DAT_0065b5cc + 0x6c) >> 2;
  if (uVar8 != 0) {
    do {
      piVar9 = *(int **)(*(int *)(DAT_0065b5cc + 0x6c) + uVar17 * 4);
      if (*piVar9 == iVar18) goto LAB_004570a4;
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar8);
  }
  piVar9 = (int *)0x0;
LAB_004570a4:
  local_8 = 0xffffffff;
  *(int **)(local_84 + 4) = piVar9;
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
  FUN_00402690(local_2c,"passenger",9);
  local_8 = 0xb;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar6 = pbVar10;
  if (0xf < *(uint *)(pbVar10 + 0x14)) {
    pbVar6 = *(byte **)pbVar10;
  }
  uVar8 = FUN_004031f0(pbVar6,*(uint *)(pbVar10 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  cVar3 = (char)uVar8;
  local_60._3_1_ = cVar3;
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
  if (local_60._3_1_ != '\0') {
    puVar19[8] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"gender",6);
  local_8 = 0xc;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar6 = pbVar10;
  if (0xf < *(uint *)(pbVar10 + 0x14)) {
    pbVar6 = *(byte **)pbVar10;
  }
  uVar8 = FUN_004031f0(pbVar6,*(uint *)(pbVar10 + 0x10),&DAT_005ea3ec,4);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  local_60._3_1_ = (char)uVar8;
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
  if (local_60._3_1_ == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"gender",6);
    local_8 = 0xd;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar6 = pbVar10;
    if (0xf < *(uint *)(pbVar10 + 0x14)) {
      pbVar6 = *(byte **)pbVar10;
    }
    uVar8 = FUN_004031f0(pbVar6,*(uint *)(pbVar10 + 0x10),(byte *)"neutral",7);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    local_60._3_1_ = (char)uVar8;
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
    uVar5 = 0;
    if (local_60._3_1_ != '\0') {
      uVar5 = 2;
    }
    *(undefined4 *)(puVar19 + 0x40) = uVar5;
  }
  else {
    *(undefined4 *)(puVar19 + 0x40) = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"location",8);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar6 = local_78;
  iVar18 = 0;
  local_60 = local_7c;
  while (local_60 != pbVar6) {
    iVar18 = iVar18 + 1;
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
  if (iVar18 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"location",8);
    iVar18 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar18 != 0) {
      uVar8 = 0;
      local_60 = (byte *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"location",8);
        local_8 = 0x11;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar18 = *(int *)(pbVar6 + 4);
        iVar1 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        if ((uint)((iVar18 - iVar1) / 0x18) <= uVar8) break;
        pvVar13 = (void *)FUN_005adb0f(0x40);
        local_8 = 0x12;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_74 = pvVar13;
        FUN_00402690(local_2c,"location",8);
        local_8 = CONCAT31(local_8._1_3_,0x13);
        local_70 = (byte *)((uint)local_70 | 2);
        local_6c = local_70;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff40,(undefined4 *)(local_60 + *(int *)pbVar6));
        local_64 = FUN_0042e820(pvVar13,puVar21);
        local_8 = 0x14;
        puVar14 = *(undefined4 **)(puVar4 + 0xf0);
        if (*(undefined4 **)(puVar4 + 0xf4) == puVar14) {
          FUN_00414080(pbVar11,puVar14,&local_64);
        }
        else {
          *puVar14 = local_64;
          *(int *)(puVar4 + 0xf0) = *(int *)(puVar4 + 0xf0) + 4;
        }
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        local_70 = (byte *)((uint)local_70 & 0xfffffffd);
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        uVar8 = uVar8 + 1;
        local_60 = local_60 + 0x18;
      } while( true );
    }
  }
  else {
    pbVar6 = (byte *)FUN_005adb0f(0x40);
    local_8 = 0xe;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_64 = pbVar6;
    FUN_00402690(local_2c,"location",8);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    local_6c = (byte *)0x1;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar10);
    local_64 = FUN_0042e820(pbVar6,puVar21);
    local_8 = 0x10;
    puVar14 = *(undefined4 **)(puVar4 + 0xf0);
    if (*(undefined4 **)(puVar4 + 0xf4) == puVar14) {
      FUN_00414080(pbVar11,puVar14,&local_64);
    }
    else {
      *puVar14 = local_64;
      *(int *)(puVar4 + 0xf0) = *(int *)(puVar4 + 0xf0) + 4;
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
  FUN_00402690(local_2c,&DAT_005e9718,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar6 = local_78;
  iVar18 = 0;
  local_6c = local_7c;
  while (local_6c != pbVar6) {
    iVar18 = iVar18 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
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
  if (iVar18 != 0) {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,&DAT_005e9718,4);
    local_8 = 0x15;
    pbVar11 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar11);
    FUN_00592d70(&local_90,',',puVar21);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    if (0xf < local_30) {
      pppuVar16 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pppuVar16 = (undefined4 ***)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pppuVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppuVar16);
    }
    uVar8 = 0;
    local_34 = 0;
    local_30 = 0xf;
    iVar18 = local_8c - (int)local_90 >> 0x1f;
    local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
    if ((local_8c - (int)local_90) / 0x18 + iVar18 != iVar18) {
      iVar18 = 0;
      do {
        puVar4 = local_84;
        piVar9 = *(int **)(local_84 + 0x4c);
        if (*(int **)(local_84 + 0x50) == piVar9) {
          FUN_00403840(local_84 + 0x48,piVar9,(undefined4 *)(iVar18 + (int)local_90));
        }
        else {
          FUN_004024e0(piVar9,(undefined4 *)(iVar18 + (int)local_90));
          *(int *)(puVar4 + 0x4c) = *(int *)(puVar4 + 0x4c) + 0x18;
        }
        uVar8 = uVar8 + 1;
        iVar18 = iVar18 + 0x18;
      } while (uVar8 < (uint)((local_8c - (int)local_90) / 0x18));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_90);
    pbVar11 = local_68;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locations",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar6 = local_78;
  iVar18 = 0;
  local_6c = local_7c;
  while (local_6c != pbVar6) {
    iVar18 = iVar18 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
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
  if (iVar18 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"locations",9);
    iVar18 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar18 != 0) {
      pbVar6 = (byte *)0x0;
      local_60 = (byte *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_64 = pbVar6;
        FUN_00402690(local_2c,"locations",9);
        local_8 = 0x1e;
        pbVar10 = FUN_0047d5c0((byte *)local_2c);
        iVar18 = *(int *)(pbVar10 + 4);
        iVar1 = *(int *)pbVar10;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        if ((byte *)((iVar18 - iVar1) / 0x18) <= pbVar6) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"locations",9);
        local_8 = 0x1f;
        pbVar10 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff40,(undefined4 *)(local_60 + *(int *)pbVar10));
        FUN_00592d70(&local_90,',',puVar21);
        local_8._0_1_ = 0x21;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_004024e0(&stack0xffffff40,local_90);
        FUN_00592d70(&local_38,'+',puVar21);
        local_8._0_1_ = 0x22;
        local_70 = (byte *)0x0;
        iVar18 = (int)(local_34 - (int)local_38) >> 0x1f;
        if ((int)(local_34 - (int)local_38) / 0x18 + iVar18 != iVar18) {
          local_6c = (byte *)0x0;
          do {
            FUN_004024e0(local_5c,(undefined4 *)(local_6c + (int)local_38));
            local_8._0_1_ = 0x23;
            uVar8 = 1;
            if (1 < (uint)((local_8c - (int)local_90) / 0x18)) {
              iVar18 = 0x18;
              do {
                FUN_00403640(local_5c,&DAT_005ea418,1);
                puVar12 = (undefined4 *)((int)local_90 + iVar18);
                puVar14 = puVar12;
                if (0xf < (uint)puVar12[5]) {
                  puVar14 = (undefined4 *)*puVar12;
                }
                FUN_00403640(local_5c,puVar14,puVar12[4]);
                uVar8 = uVar8 + 1;
                iVar18 = iVar18 + 0x18;
              } while (uVar8 < (uint)((local_8c - (int)local_90) / 0x18));
            }
            pbVar6 = (byte *)FUN_005adb0f(0x40);
            local_8._0_1_ = 0x24;
            local_78 = pbVar6;
            FUN_004024e0(&stack0xffffff40,local_5c);
            local_68 = FUN_0042e820(pbVar6,puVar21);
            local_8._0_1_ = 0x23;
            puVar14 = *(undefined4 **)(pbVar11 + 4);
            if (*(undefined4 **)(pbVar11 + 8) == puVar14) {
              FUN_00414080(pbVar11,puVar14,&local_68);
            }
            else {
              *puVar14 = local_68;
              *(int *)(pbVar11 + 4) = *(int *)(pbVar11 + 4) + 4;
            }
            local_8._0_1_ = 0x22;
            if (0xf < local_48) {
              pvVar13 = local_5c[0];
              if ((0xfff < local_48 + 1) &&
                 (pvVar13 = *(void **)((int)local_5c[0] + -4),
                 0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
              FUN_005adb3f(pvVar13);
            }
            local_70 = (byte *)((int)local_70 + 1);
            local_6c = local_6c + 0x18;
            pbVar6 = local_64;
          } while (local_70 < (uint)((int)(local_34 - (int)local_38) / 0x18));
        }
        FUN_004025a0((int *)&local_38);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0((int *)&local_90);
        pbVar6 = pbVar6 + 1;
        local_60 = local_60 + 0x18;
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"locations",9);
    local_8 = 0x18;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar6);
    FUN_00592d70(&local_80,',',puVar21);
    local_8._0_1_ = 0x1a;
    if (0xf < local_30) {
      pppuVar16 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pppuVar16 = (undefined4 ***)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pppuVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppuVar16);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
    FUN_004024e0(&stack0xffffff40,local_80);
    FUN_00592d70(&local_90,'+',puVar21);
    local_8._0_1_ = 0x1b;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0x1b;
    local_70 = (byte *)0x0;
    iVar18 = local_8c - (int)local_90 >> 0x1f;
    if ((local_8c - (int)local_90) / 0x18 + iVar18 != iVar18) {
      local_6c = (byte *)0x0;
      do {
        FUN_004024e0(local_5c,(undefined4 *)(local_6c + (int)local_90));
        local_8._0_1_ = 0x1c;
        uVar8 = 1;
        if (1 < (uint)(((int)local_7c - (int)local_80) / 0x18)) {
          iVar18 = 0x18;
          do {
            FUN_00403640(local_5c,&DAT_005ea418,1);
            puVar12 = (undefined4 *)((int)local_80 + iVar18);
            puVar14 = puVar12;
            if (0xf < (uint)puVar12[5]) {
              puVar14 = (undefined4 *)*puVar12;
            }
            FUN_00403640(local_5c,puVar14,puVar12[4]);
            uVar8 = uVar8 + 1;
            iVar18 = iVar18 + 0x18;
          } while (uVar8 < (uint)(((int)local_7c - (int)local_80) / 0x18));
        }
        pvVar13 = (void *)FUN_005adb0f(0x40);
        local_8._0_1_ = 0x1d;
        local_74 = pvVar13;
        FUN_004024e0(&stack0xffffff40,local_5c);
        local_68 = FUN_0042e820(pvVar13,puVar21);
        local_8._0_1_ = 0x1c;
        puVar14 = *(undefined4 **)(pbVar11 + 4);
        if (*(undefined4 **)(pbVar11 + 8) == puVar14) {
          FUN_00414080(pbVar11,puVar14,&local_68);
        }
        else {
          *puVar14 = local_68;
          *(int *)(pbVar11 + 4) = *(int *)(pbVar11 + 4) + 4;
        }
        local_8._0_1_ = 0x1b;
        if (0xf < local_48) {
          pvVar13 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar13 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        local_70 = (byte *)((int)local_70 + 1);
        local_6c = local_6c + 0x18;
        uVar2 = (undefined1)local_8;
      } while (local_70 < (uint)((local_8c - (int)local_90) / 0x18));
    }
    local_8._0_1_ = uVar2;
    FUN_004025a0((int *)&local_90);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_80);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"nameknown",9);
  local_8 = 0x25;
  pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar11 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar11 = *(byte **)pbVar6;
  }
  uVar8 = FUN_004031f0(pbVar11,*(uint *)(pbVar6 + 0x10),(byte *)"false",5);
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
  puVar4 = local_84;
  if ((char)uVar8 != '\0') {
    local_84[0x44] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"skinColour",10);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar11 = local_78;
  iVar18 = 0;
  local_64 = local_7c;
  while (local_64 != pbVar11) {
    iVar18 = iVar18 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
  if (iVar18 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"skinColour",10);
    local_8 = 0x26;
    pbVar11 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar11);
    FUN_00592d70(&local_38,':',puVar21);
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
    if (2 < (uint)((int)(local_34 - (int)local_38) / 0x18)) {
      pbVar11 = local_38;
      if (0xf < *(uint *)(local_38 + 0x14)) {
        pbVar11 = *(byte **)local_38;
      }
      dVar20 = atof((char *)pbVar11);
      local_60 = (byte *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
      local_68 = (byte *)(int)ROUND(dVar20);
      puVar4[0x5c] = local_68._0_1_;
      pbVar11 = local_38 + 0x18;
      if (0xf < *(uint *)(local_38 + 0x2c)) {
        pbVar11 = *(byte **)pbVar11;
      }
      dVar20 = atof((char *)pbVar11);
      local_60 = (byte *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
      local_68 = (byte *)(int)ROUND(dVar20);
      puVar4[0x5d] = local_68._0_1_;
      pbVar11 = local_38 + 0x30;
      if (0xf < *(uint *)(local_38 + 0x44)) {
        pbVar11 = *(byte **)pbVar11;
      }
      dVar20 = atof((char *)pbVar11);
      local_60 = (byte *)CONCAT22(in_FPUControlWord,(undefined2)local_60);
      local_68 = (byte *)(int)ROUND(dVar20);
      puVar4[0x5e] = local_68._0_1_;
    }
    FUN_004025a0((int *)&local_38);
  }
  local_8 = 0x27;
  iVar18 = *(int *)(puVar4 + 0x6c);
  FUN_004132d0(*(int **)(iVar18 + 4));
  uVar8 = 0;
  *(int *)(*(int *)(puVar4 + 0x6c) + 4) = iVar18;
  **(int **)(puVar4 + 0x6c) = iVar18;
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  *(int *)(*(int *)(puVar4 + 0x6c) + 8) = iVar18;
  *(undefined4 *)(puVar4 + 0x70) = 0;
  if (*(int *)(*(int *)(puVar4 + 4) + 0x20) - *(int *)(*(int *)(puVar4 + 4) + 0x1c) >> 2 != 0) {
    do {
      iVar18 = *(int *)(*(int *)(*(int *)(puVar4 + 4) + 0x1c) + uVar8 * 4);
      uVar5 = *(undefined4 *)(iVar18 + 4);
      pbVar11 = FUN_00412f20(puVar4 + 0x6c,(byte *)(iVar18 + 8));
      uVar8 = uVar8 + 1;
      *(undefined4 *)pbVar11 = uVar5;
    } while (uVar8 < (uint)(*(int *)(*(int *)(puVar4 + 4) + 0x20) -
                            *(int *)(*(int *)(puVar4 + 4) + 0x1c) >> 2));
  }
  puVar14 = (undefined4 *)(puVar4 + 0x74);
  *(undefined4 *)(puVar4 + 0x84) = 0;
  if (0xf < *(uint *)(puVar4 + 0x88)) {
    puVar14 = (undefined4 *)*puVar14;
  }
  *(undefined1 *)puVar14 = 0;
  puVar14 = (undefined4 *)(puVar4 + 0x8c);
  *(undefined4 *)(puVar4 + 0x9c) = 0;
  if (0xf < *(uint *)(puVar4 + 0xa0)) {
    puVar14 = (undefined4 *)*puVar14;
  }
  *(undefined1 *)puVar14 = 0;
  puVar14 = (undefined4 *)(puVar4 + 0xa4);
  *(undefined4 *)(puVar4 + 0xb4) = 0;
  if (0xf < *(uint *)(puVar4 + 0xb8)) {
    puVar14 = (undefined4 *)*puVar14;
  }
  *(undefined1 *)puVar14 = 0;
  puVar14 = (undefined4 *)(puVar4 + 0xbc);
  *(undefined4 *)(puVar4 + 0xcc) = 0;
  if (0xf < *(uint *)(puVar4 + 0xd0)) {
    puVar14 = (undefined4 *)*puVar14;
  }
  *(undefined1 *)puVar14 = 0;
  puVar14 = (undefined4 *)(puVar4 + 0xd4);
  *(undefined4 *)(puVar4 + 0xe4) = 0;
  if (0xf < *(uint *)(puVar4 + 0xe8)) {
    puVar14 = (undefined4 *)*puVar14;
  }
  *(undefined1 *)puVar14 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"overlay",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar11 = local_78;
  iVar18 = 0;
  local_64 = local_7c;
  while (local_64 != pbVar11) {
    iVar18 = iVar18 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
  FUN_00402690(local_2c,"overlay",7);
  if (iVar18 == 0) {
    iVar18 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar18 != 0) {
      uVar8 = 0;
      pbVar11 = (byte *)0x0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        local_64 = pbVar11;
        FUN_00402690(local_2c,"overlay",7);
        local_8 = 0x2b;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar18 = *(int *)(pbVar6 + 4);
        iVar1 = *(int *)pbVar6;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        if ((uint)((iVar18 - iVar1) / 0x18) <= uVar8) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"overlay",7);
        local_8 = 0x2c;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff40,(undefined4 *)(pbVar11 + *(int *)pbVar6));
        FUN_00592d70(&local_38,':',puVar21);
        local_8._0_1_ = 0x2e;
        if (0xf < local_18) {
          pvVar13 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar13 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00456de4;
          FUN_005adb3f(pvVar13);
        }
        pbVar11 = local_38 + 0x18;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (0xf < *(uint *)(local_38 + 0x2c)) {
          pbVar11 = *(byte **)pbVar11;
        }
        pbVar6 = FUN_00412f20(local_94,local_38);
        iVar18 = atoi((char *)pbVar11);
        *(int *)pbVar6 = iVar18;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0((int *)&local_38);
        uVar8 = uVar8 + 1;
        pbVar11 = local_64 + 0x18;
      }
    }
  }
  else {
    local_8 = 0x28;
    pbVar11 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar11);
    FUN_00592d70(&local_38,':',puVar21);
    local_8 = CONCAT31(local_8._1_3_,0x2a);
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
    pbVar11 = local_38 + 0x18;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < *(uint *)(local_38 + 0x2c)) {
      pbVar11 = *(byte **)pbVar11;
    }
    pbVar6 = FUN_00412f20(puVar4 + 0x6c,local_38);
    iVar18 = atoi((char *)pbVar11);
    *(int *)pbVar6 = iVar18;
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"additions",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  pbVar11 = local_78;
  iVar18 = 0;
  local_64 = local_7c;
  while (local_64 != pbVar11) {
    iVar18 = iVar18 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
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
  if (iVar18 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"additions",9);
    local_8 = 0x2f;
    pbVar11 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff40,(undefined4 *)pbVar11);
    FUN_00592d70(&local_90,',',puVar21);
    local_8 = CONCAT31(local_8._1_3_,0x31);
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
    uVar8 = 0;
    local_1c = 0;
    local_18 = 0xf;
    iVar18 = local_8c - (int)local_90 >> 0x1f;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if ((local_8c - (int)local_90) / 0x18 + iVar18 != iVar18) {
      iVar18 = 0;
      do {
        FUN_004024e0(&stack0xffffff40,(undefined4 *)(iVar18 + (int)local_90));
        FUN_00592d70(&local_38,':',puVar21);
        local_8._0_1_ = 0x32;
        local_78 = &stack0xffffff40;
        if ((uint)((int)(local_34 - (int)local_38) / 0x18) < 2) {
          puVar21 = (undefined4 *)((uint)puVar21 & 0xffffff00);
          FUN_00402690(&stack0xffffff40,&PTR_005ce008,0);
          local_8._0_1_ = 0x34;
        }
        else {
          local_78 = &stack0xffffff40;
          FUN_004024e0(&stack0xffffff40,(undefined4 *)(local_38 + 0x18));
          local_8._0_1_ = 0x33;
        }
        FUN_004024e0(&stack0xffffff28,(undefined4 *)local_38);
        local_8._0_1_ = 0x32;
        FUN_0042ec20(local_84,in_stack_ffffff28);
        local_8 = CONCAT31(local_8._1_3_,0x31);
        FUN_004025a0((int *)&local_38);
        uVar8 = uVar8 + 1;
        iVar18 = iVar18 + 0x18;
      } while (uVar8 < (uint)((local_8c - (int)local_90) / 0x18));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_90);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_00402690(local_5c,&DAT_005e98b0,2);
  local_8 = 0x35;
  pbVar11 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  if (pbVar11 != (byte *)&DAT_006556d8) {
    pbVar6 = pbVar11;
    if (0xf < *(uint *)(pbVar11 + 0x14)) {
      pbVar6 = *(byte **)pbVar11;
    }
    FUN_00402690(&DAT_006556d8,pbVar6,*(uint *)(pbVar11 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_48) {
    pvVar13 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar13 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  iVar18 = DAT_0065b5cc;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  puVar21 = *(undefined4 **)(DAT_0065b5cc + 0x7c);
  if (*(undefined4 **)(DAT_0065b5cc + 0x80) == puVar21) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x78),puVar21,&local_98);
  }
  else {
    *puVar21 = local_84;
    *(int *)(iVar18 + 0x7c) = *(int *)(iVar18 + 0x7c) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
