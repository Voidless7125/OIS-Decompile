#include "../ois_server.exe.h"


undefined4 FUN_004a8020(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  iVar1 = *(int *)(DAT_0065b5cc + 0xc);
  uVar7 = 0;
  uVar9 = *(int *)(DAT_0065b5cc + 0x10) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0x50);
      if (0xf < *(uint *)(iVar2 + 100)) {
        pbVar6 = *(byte **)(iVar2 + 0x50);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x60),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a8079;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_004a8079:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


undefined4 FUN_004a80d0(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  iVar1 = *(int *)(DAT_0065b5cc + 0x18);
  uVar7 = 0;
  uVar9 = *(int *)(DAT_0065b5cc + 0x1c) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0x60);
      if (0xf < *(uint *)(iVar2 + 0x74)) {
        pbVar6 = *(byte **)(iVar2 + 0x60);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x70),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a8129;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_004a8129:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


undefined4 FUN_004a8180(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  iVar1 = *(int *)(DAT_0065b5cc + 0x24);
  uVar7 = 0;
  uVar9 = *(int *)(DAT_0065b5cc + 0x28) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0x60);
      if (0xf < *(uint *)(iVar2 + 0x74)) {
        pbVar6 = *(byte **)(iVar2 + 0x60);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x70),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a81d9;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_004a81d9:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


undefined4 FUN_004a8230(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  iVar1 = *(int *)(DAT_0065b5cc + 0x48);
  uVar7 = 0;
  uVar9 = *(int *)(DAT_0065b5cc + 0x4c) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0x18);
      if (0xf < *(uint *)(iVar2 + 0x2c)) {
        pbVar6 = *(byte **)(iVar2 + 0x18);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x28),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a8289;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_004a8289:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar6 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


undefined4 FUN_004a82e0(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  uVar7 = 0;
  iVar1 = *(int *)(DAT_0065b5cc + 0x60);
  uVar6 = *(int *)(DAT_0065b5cc + 100) - iVar1 >> 2;
  if (uVar6 != 0) {
    do {
      pbVar9 = *(byte **)(iVar1 + uVar7 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar5 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar9 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a8337;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar8 = 0;
LAB_004a8337:
  if (0xf < in_stack_00000018) {
    pbVar9 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar9 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar9);
  }
  return uVar8;
}


undefined4 FUN_004a8380(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte **ppbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  uint uVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_8;
  
  iVar1 = *(int *)(DAT_0065b5cc + 0x84);
  local_8 = 0;
  uVar5 = *(int *)(DAT_0065b5cc + 0x88) - iVar1 >> 2;
  if (uVar5 != 0) {
    do {
      uVar10 = 0;
      iVar2 = *(int *)(local_8 * 4 + iVar1);
      iVar6 = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c);
      iVar2 = iVar6 >> 0x1f;
      if (iVar6 / 0x18 + iVar2 != iVar2) {
        iVar2 = *(int *)(local_8 * 4 + iVar1);
        pbVar8 = *(byte **)(iVar2 + 0x1c);
        do {
          ppbVar3 = &param_1;
          if (0xf < in_stack_00000018) {
            ppbVar3 = (byte **)param_1;
          }
          pbVar7 = pbVar8;
          if (0xf < *(uint *)(pbVar8 + 0x14)) {
            pbVar7 = *(byte **)pbVar8;
          }
          uVar4 = FUN_004031f0(pbVar7,*(uint *)(pbVar8 + 0x10),(byte *)ppbVar3,in_stack_00000014);
          if ((char)uVar4 != '\0') {
            uVar9 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0x84) + local_8 * 4);
            goto LAB_004a843c;
          }
          uVar10 = uVar10 + 1;
          pbVar8 = pbVar8 + 0x18;
        } while (uVar10 < (uint)((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c)) / 0x18));
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  uVar9 = 0;
LAB_004a843c:
  if (0xf < in_stack_00000018) {
    pbVar8 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar8 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar8))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar8);
  }
  return uVar9;
}


int * FUN_004a84a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(DAT_0065b5cc + 0x88) - *(int *)(DAT_0065b5cc + 0x84) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(DAT_0065b5cc + 0x84) + uVar2 * 4);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


undefined4 FUN_004a84f0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float in_XMM3_Da;
  float fVar5;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  iVar1 = DAT_0065b5cc;
  puStack_c = &LAB_005bbb62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  uVar4 = 0;
  iVar3 = *(int *)(DAT_0065b5cc + 0x30);
  if (*(int *)(DAT_0065b5cc + 0x34) - iVar3 >> 2 != 0) {
    cVar2 = param_4._0_1_;
    local_14 = in_XMM3_Da;
    do {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
      if ((*(int *)(iVar3 + 0x18) == param_1) &&
         (((cVar2 == '\0' || (*(int *)(iVar3 + 0x30) != 0)) ||
          ((*(int *)(iVar3 + 0x54) != 3 && (*(int *)(iVar3 + 0x54) != 4)))))) {
        local_1c = (float)*(double *)(iVar3 + 0x20);
        local_18 = (float)*(double *)(iVar3 + 0x28);
        local_8 = 1;
        fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)&param_2);
        param_4 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
        if ((1.5 - fVar5 * 0.5 * param_4 * param_4) * param_4 * fVar5 <= local_14) {
          ExceptionList = local_10;
          return *(undefined4 *)(*(int *)(iVar1 + 0x30) + uVar4 * 4);
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar1 + 0x30);
    } while (uVar4 < (uint)(*(int *)(iVar1 + 0x34) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return 0;
}


undefined4 FUN_004a8640(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  uVar7 = 0;
  iVar1 = *(int *)(DAT_0065b5cc + 0x9c);
  uVar6 = *(int *)(DAT_0065b5cc + 0xa0) - iVar1 >> 2;
  if (uVar6 != 0) {
    do {
      pbVar9 = *(byte **)(iVar1 + uVar7 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar5 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar9 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a86a4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar8 = 0;
LAB_004a86a4:
  if (0xf < in_stack_00000018) {
    pbVar9 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar9 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar9);
  }
  return uVar8;
}


void FUN_004a86f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0065b5cc;
  uVar3 = 0;
  if (*(int *)(DAT_0065b5cc + 0xa0) - *(int *)(DAT_0065b5cc + 0x9c) >> 2 != 0) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x9c) + uVar3 * 4) + 0x18) = 0;
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x9c) + iVar1) + 0x19) = 0;
    } while (uVar3 < (uint)(*(int *)(iVar2 + 0xa0) - *(int *)(iVar2 + 0x9c) >> 2));
  }
  return;
}


undefined4 __cdecl FUN_004a8750(float param_1,float param_2)

{
  undefined4 uVar1;
  
  if (param_1 <= 0.0) {
    uVar1 = 0;
    if (param_2 <= 0.0) {
      uVar1 = 3;
    }
    return uVar1;
  }
  uVar1 = 2;
  if (0.0 < param_2) {
    uVar1 = 1;
  }
  return uVar1;
}


int __cdecl FUN_004a8780(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005ddae4)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_004a87ce;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
LAB_004a87ce:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


undefined4 __fastcall FUN_004a8810(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 2;
  case 1:
    return 3;
  default:
    return 0;
  case 3:
    return 1;
  }
}


void __thiscall FUN_004a8850(void *this,float param_1,float param_2)

{
  *(double *)((int)this + 0x20) = (double)param_1;
  *(double *)((int)this + 0x28) = (double)param_2;
  return;
}


undefined1 __thiscall FUN_004a8880(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  uint in_stack_00000018;
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(local_28,&param_1);
  iVar1 = FUN_004a8d60(this,(byte *)local_28);
  if (iVar1 == 0) {
    if (0xf < local_14) {
      pvVar2 = local_28[0];
      if (0xfff < local_14 + 1) {
        pvVar2 = *(void **)((int)local_28[0] + -4);
        if (0x1f < (uint)((int)local_28[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
    }
    uVar3 = 0;
  }
  else {
    if (0xf < local_14) {
      pvVar2 = local_28[0];
      if (0xfff < local_14 + 1) {
        pvVar2 = *(void **)((int)local_28[0] + -4);
        if (0x1f < (uint)((int)local_28[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
    }
    uVar3 = 1;
  }
  local_28[0] = (void *)((uint)local_28[0] & 0xffffff00);
  local_14 = 0xf;
  local_18 = 0;
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar3;
}


void __thiscall FUN_004a89a0(void *this,void *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = FUN_004a2a30(this,(byte *)&param_1);
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0x34;
  pbVar1[3] = 0x43;
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004a8a20(void *this,char param_1,void *param_2)

{
  int iVar1;
  byte *pbVar2;
  void *pvVar3;
  undefined4 extraout_ECX;
  uint in_stack_0000001c;
  uint in_stack_ffffff84;
  undefined4 *in_stack_ffffff88;
  byte *in_stack_ffffffb8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bbbd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffb8,&param_2);
  iVar1 = FUN_004a7100(in_stack_ffffffb8);
  if (iVar1 == 0) {
    FUN_00591070("ERROR","Belligerant reported who no longer exists.");
  }
  else {
    FUN_00591070(&DAT_005cdc70,"Belligerant reported: %s / %s");
    pbVar2 = FUN_00412f20((void *)((int)this + 0x14),(byte *)&param_2);
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    if ((*(char *)(iVar1 + 0x234) != '\0') && (*(char *)(*(int *)(iVar1 + 0x40) + 0x34) != '\0')) {
      local_14 = 0;
      FUN_004024e0(&stack0xffffffb8,(undefined4 *)(*(int *)(iVar1 + 0x24) + 0xf0));
      pvVar3 = (void *)FUN_004a6de0(in_stack_ffffffb8);
      if (pvVar3 != (void *)0x0) {
        local_14 = FUN_0051f090(*(int *)(iVar1 + 0x24));
        if (param_1 == '\0') {
          iVar1 = 1000;
        }
        else {
          iVar1 = 2000;
        }
        FUN_0051ba50(pvVar3,iVar1);
      }
      pvVar3 = (void *)((uint)in_stack_ffffffb8 & 0xffffff00);
      FUN_00402690(&stack0xffffffb8,"fines_received",0xe);
      local_8._0_1_ = 1;
      FUN_00412770();
      local_8._0_1_ = 0;
      FUN_0051e750(extraout_ECX,pvVar3);
      FUN_00402690(&stack0xffffffb4,&PTR_005ce008,0);
      local_8._0_1_ = 2;
      FUN_00402690(&stack0xffffff9c,"fines_received",0xe);
      local_8._0_1_ = 3;
      pvVar3 = (void *)(in_stack_ffffff84 & 0xffffff00);
      FUN_00402690(&stack0xffffff84,&DAT_0060d818,4);
      local_8._0_1_ = 0;
      FUN_00401a50(pvVar3);
      if (param_1 == '\0') {
        FUN_00591e00(&stack0xffffffb8,
                     "To: Owner, %s.\n\nYou were identified firing weapons in %s.\n\nA fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly.\n\nContinued belligerancy in this sector will be dealt with harshly."
                    );
        local_8._0_1_ = 7;
        FUN_00402690(&stack0xffffffa0,"BELLIGERANCY FINE",0x11);
        local_8._0_1_ = 8;
        FUN_004024e0(&stack0xffffff88,(undefined4 *)(local_14 + 0x20));
        local_8._0_1_ = 9;
      }
      else {
        FUN_00591e00(&stack0xffffffb8,
                     "To: Owner, %s.\n\nYou were identified attempting to engage in piracy in %s.\n\nA fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly.\n\nContinued violence or threats of violence in this sector will be dealt with harshly."
                    );
        local_8._0_1_ = 4;
        FUN_00402690(&stack0xffffffa0,"PIRACY FINE",0xb);
        local_8._0_1_ = 5;
        FUN_004024e0(&stack0xffffff88,(undefined4 *)(local_14 + 0x20));
        local_8._0_1_ = 6;
      }
      pvVar3 = (void *)FUN_00412700();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0043aad0(pvVar3,in_stack_ffffff88);
    }
  }
  if (0xf < in_stack_0000001c) {
    pvVar3 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar3 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_004a8d60(void *this,byte *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_c;
  int *local_8;
  
  FUN_00419820(this,(int *)&local_c,param_1);
  iVar4 = 0;
  while (local_c != local_8) {
    piVar2 = (int *)local_c[2];
    iVar4 = iVar4 + 1;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      local_c = piVar2;
      piVar2 = (int *)*piVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        local_c = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(local_c[1] + 0xd);
      piVar3 = (int *)local_c[1];
      piVar2 = local_c;
      while ((local_c = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_c[2]))) {
        cVar1 = *(char *)(local_c[1] + 0xd);
        piVar3 = (int *)local_c[1];
        piVar2 = local_c;
      }
    }
  }
  return iVar4;
}


undefined4 __thiscall FUN_004a8dd0(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  void *local_2c;
  int *local_28;
  int *local_24;
  void *local_20;
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbbf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar7 = (int *)0x0;
  local_20 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (int *)0x0;
  local_1c = (int *)0x0;
  local_24 = (int *)0x0;
  local_8 = 0;
  uVar6 = 0;
  iVar8 = *(int *)this;
  local_18 = this;
  if (*(int *)((int)this + 4) - iVar8 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar8 + uVar6 * 4);
      if (*(float *)(iVar4 + 0x40) <= 0.0) {
        uVar10 = 0;
        local_11 = '\x01';
        if (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 2 != 0) {
          do {
            cVar2 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar8 + uVar6 * 4) + 0x10) +
                                           uVar10 * 4),
                                 *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
            iVar8 = *local_18;
            if (cVar2 == '\0') {
              local_11 = '\0';
              break;
            }
            iVar4 = *(int *)(iVar8 + uVar6 * 4);
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)(*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 2));
        }
        if (local_11 != '\0') {
          iVar4 = *(int *)(iVar8 + uVar6 * 4);
          iVar3 = *(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2;
          if (iVar3 == 0) {
            if (local_1c == piVar7) {
              FUN_00414080(&local_2c,piVar7,(undefined4 *)(iVar8 + uVar6 * 4));
              local_1c = local_24;
              iVar8 = *local_18;
              piVar7 = local_28;
            }
            else {
              *piVar7 = iVar4;
              local_28 = piVar7 + 1;
              iVar8 = *local_18;
              piVar7 = local_28;
            }
          }
          else {
            local_20 = (void *)0x0;
            if (iVar3 != 0) {
              do {
                piVar1 = (int *)(iVar8 + uVar6 * 4);
                iVar8 = *piVar1;
                if (*(int *)(*(int *)(iVar8 + 0x1c) + (int)local_20 * 4) == *param_1) {
                  if (local_1c == piVar7) {
                    FUN_00414080(&local_2c,piVar7,piVar1);
                    local_1c = local_24;
                    piVar7 = local_28;
                  }
                  else {
                    *piVar7 = iVar8;
                    local_28 = piVar7 + 1;
                    piVar7 = local_28;
                  }
                }
                local_20 = (void *)((int)local_20 + 1);
                iVar8 = *local_18;
                iVar4 = *(int *)(iVar8 + uVar6 * 4);
              } while (local_20 < (void *)(*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2));
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(local_18[1] - iVar8 >> 2));
    local_20 = local_2c;
  }
  piVar1 = local_1c;
  iVar8 = (int)piVar7 - (int)local_20 >> 2;
  uVar9 = 0;
  local_2c = local_20;
  if (iVar8 != 0) {
    iVar4 = rand();
    uVar9 = *(undefined4 *)((int)local_20 + (iVar4 % iVar8) * 4);
  }
  if (local_20 != (void *)0x0) {
    pvVar5 = local_20;
    if ((0xfff < ((int)piVar1 - (int)local_20 & 0xfffffffcU)) &&
       (pvVar5 = *(void **)((int)local_20 - 4), 0x1f < (uint)((int)local_20 + (-4 - (int)pvVar5))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return uVar9;
}


void __thiscall FUN_004a8fe0(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  bool bVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  Vec2 *pVVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_64;
  float local_60;
  int local_5c;
  int local_58;
  float *local_54;
  undefined4 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  void *local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  float *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bbc43;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1[0x37] - param_1[0x36] >> 2 != 0) {
    piVar14 = (int *)0x0;
    iVar5 = 0;
    local_3c = this;
LAB_004a903b:
    do {
      if (99 < iVar5) {
        if (piVar14 == (int *)0x0) goto LAB_004a90f6;
        goto LAB_004a90d5;
      }
      iVar12 = param_1[0x37];
      iVar15 = param_1[0x36];
      iVar4 = rand();
      uVar10 = 0;
      piVar14 = *(int **)(param_1[0x36] + (iVar4 % (iVar12 - iVar15 >> 2)) * 4);
      iVar12 = piVar14[4];
      if (piVar14[5] - iVar12 >> 2 != 0) {
        do {
          cVar3 = FUN_004a23b0(*(void **)(iVar12 + uVar10 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          if (cVar3 == '\0') {
            piVar14 = (int *)0x0;
            iVar5 = iVar5 + 1;
            goto LAB_004a903b;
          }
          uVar10 = uVar10 + 1;
          iVar12 = piVar14[4];
        } while (uVar10 < (uint)(piVar14[5] - iVar12 >> 2));
      }
      iVar5 = iVar5 + 1;
    } while (piVar14 == (int *)0x0);
    iVar5 = rand();
    if (*piVar14 < iVar5 % 100) {
LAB_004a90f6:
      FUN_00591070("WORLD","No junk for this sector.");
    }
    else {
LAB_004a90d5:
      iVar5 = piVar14[1];
      if ((iVar5 == 0) && (piVar14[3] == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_40 = (undefined4 *)piVar14[3];
        iVar12 = piVar14[2];
        iVar15 = 0;
        if ((0 < iVar12) && (0 < iVar5)) {
          do {
            iVar4 = rand();
            iVar15 = iVar15 + 1 + iVar4 % iVar12;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_58 = (int)local_40 + iVar15;
        local_30 = 0;
        local_5c = 0;
        if (0 < local_58) {
          do {
            if (99 < local_5c) {
              ExceptionList = local_10;
              return;
            }
            local_5c = local_5c + 1;
            local_18 = (int *)FUN_004a8dd0(local_3c,param_1);
            if (local_18 != (int *)0x0) {
              iVar5 = local_18[10];
              local_70 = param_2;
              local_6c = param_3;
              local_8._0_1_ = 1;
              if (param_1[0x31] - param_1[0x30] >> 2 == 0) {
                FUN_00591070("WORLD","NOTE: No junk spawners for sector \'%s\'");
              }
              else {
                iVar12 = 0;
                do {
                  do {
                    pVVar11 = (Vec2 *)0x0;
                    iVar15 = iVar12 + 1;
                    if (99 < iVar12) goto LAB_004a926d;
                    iVar12 = param_1[0x31];
                    iVar4 = param_1[0x30];
                    iVar6 = rand();
                    pVVar11 = *(Vec2 **)(param_1[0x30] + (iVar6 % (iVar12 - iVar4 >> 2)) * 4);
                    iVar12 = iVar15;
                  } while (*(int *)(pVVar11 + 0xc) < iVar5);
                  local_40 = (undefined4 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_70,pVVar11);
                  local_2c = (undefined4 *)(0x5f3759df - ((uint)local_40 >> 1));
                } while ((1.5 - (float)local_40 * 0.5 * (float)local_2c * (float)local_2c) *
                         (float)local_2c * (float)local_40 < 100.0);
LAB_004a926d:
                local_8 = (uint)local_8._1_3_ << 8;
                if (pVVar11 == (Vec2 *)0x0) goto LAB_004a963e;
                FUN_00593120(&local_64,*(undefined4 *)pVVar11,*(undefined4 *)(pVVar11 + 4));
                local_8 = CONCAT31(local_8._1_3_,2);
                pcVar16 = "WORLD";
                FUN_00591070("WORLD","Spawning junk at location %f, %f...");
                local_2c = FUN_0051f310(param_1,(undefined4 *)(uint)(*local_18 == 0));
                local_2c[0x19] = 0x42f00000;
                FUN_004a8850(local_2c + 2,local_64,local_60);
                local_20 = 0;
                iVar5 = local_18[0xd];
                if ((iVar5 == 0) && (local_18[0xf] == 0)) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  local_1c = (float *)0x0;
                }
                else {
                  iVar12 = local_18[0xe];
                  iVar15 = 0;
                  local_40 = (undefined4 *)local_18[0xf];
                  if ((0 < iVar12) && (0 < iVar5)) {
                    do {
                      iVar4 = rand();
                      iVar15 = iVar15 + iVar4 % iVar12 + 1;
                      iVar5 = iVar5 + -1;
                    } while (iVar5 != 0);
                  }
                  local_1c = (float *)((int)local_40 + iVar15);
                }
                piVar14 = local_18;
                local_34 = 0;
                puVar9 = (undefined4 *)0x0;
                local_28 = (undefined4 *)0x0;
                local_7c = (undefined4 *)0x0;
                local_24 = (undefined4 *)0x0;
                local_78 = (undefined4 *)0x0;
                local_40 = (undefined4 *)0x0;
                local_74 = (undefined4 *)0x0;
                uVar10 = 0;
                local_8 = CONCAT31(local_8._1_3_,3);
                iVar5 = local_18[1];
                if (local_18[2] - iVar5 >> 2 != 0) {
                  do {
                    puVar8 = (undefined4 *)(iVar5 + uVar10 * 4);
                    if (puVar9 == local_78) {
                      FUN_00414080(&local_7c,local_78,puVar8);
                      puVar9 = local_74;
                    }
                    else {
                      *local_78 = *puVar8;
                      local_78 = local_78 + 1;
                    }
                    uVar10 = uVar10 + 1;
                    iVar5 = piVar14[1];
                  } while (uVar10 < (uint)(piVar14[2] - iVar5 >> 2));
                  local_28 = local_7c;
                  local_40 = puVar9;
                  local_24 = local_78;
                }
                local_54 = (float *)((int)local_24 - (int)local_28 >> 2);
                if (local_1c <= local_54) {
                  local_54 = local_1c;
                }
                local_7c = local_28;
                local_78 = local_24;
                if (0 < (int)local_54) {
                  local_1c = (float *)0xc;
                  puVar9 = local_24;
                  do {
                    puVar8 = local_28;
                    iVar5 = local_34 + 1;
                    bVar1 = 99 < local_34;
                    local_34 = iVar5;
                    if (bVar1) break;
                    iVar12 = (int)puVar9 - (int)local_28;
                    iVar5 = rand();
                    puVar8 = (undefined4 *)puVar8[iVar5 % (iVar12 >> 2)];
                    this_00 = (void *)local_2c[0x3a];
                    local_44 = puVar8[0xb];
                    local_38 = puVar8;
                    if ((local_20 < 0) ||
                       (((0 < *(int *)((int)this_00 + 8) && (*(int *)((int)this_00 + 8) <= local_20)
                         ) || (*(int *)((int)local_1c + (int)this_00) == 0)))) {
                      FUN_005070d0(this_00,local_20);
                    }
                    if ((local_44 != 0) && (local_44 - 1U < 3)) {
                      *(undefined1 *)(*(int *)((int)local_1c + (int)this_00) + local_44) = 1;
                    }
                    FUN_004024e0(&stack0xffffff58,puVar8);
                    local_50 = (undefined4 *)FUN_004a8380((byte *)pcVar16);
                    *(undefined4 *)(*(int *)((int)local_1c + local_2c[0x3a]) + 4) = *local_50;
                    iVar5 = puVar8[6];
                    if ((iVar5 == 0) && (puVar8[8] == 0)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    local_44 = iVar5;
                    if (bVar1) {
                      iVar15 = 0;
                    }
                    else {
                      local_4c = puVar8[8];
                      iVar15 = 0;
                      iVar12 = puVar8[7];
                      local_48 = iVar12;
                      if ((0 < iVar12) && (0 < iVar5)) {
                        do {
                          iVar4 = rand();
                          iVar15 = iVar15 + 1 + iVar4 % iVar12;
                          iVar5 = iVar5 + -1;
                          puVar8 = local_38;
                          puVar9 = local_24;
                        } while (iVar5 != 0);
                      }
                      iVar15 = local_4c + iVar15;
                    }
                    pfVar2 = local_1c;
                    *(int *)(*(int *)((int)local_1c + local_2c[0x3a]) + 8) = iVar15;
                    FUN_00591070("WORLD"," - added %dx %s");
                    local_1c = pfVar2 + 1;
                    local_20 = local_20 + 1;
                    puVar7 = local_28;
                    if (local_28 != puVar9) {
                      do {
                        if ((undefined4 *)*puVar7 == puVar8) break;
                        puVar7 = puVar7 + 1;
                      } while (puVar7 != puVar9);
                      if (puVar7 != puVar9) {
                        puVar8 = puVar7 + 1;
                        uVar13 = 0;
                        uVar10 = (uint)((int)puVar9 + (3 - (int)puVar8)) >> 2;
                        if (puVar9 < puVar8) {
                          uVar10 = 0;
                        }
                        if (uVar10 != 0) {
                          do {
                            if ((undefined4 *)*puVar8 != local_38) {
                              *puVar7 = (undefined4 *)*puVar8;
                              puVar7 = puVar7 + 1;
                            }
                            uVar13 = uVar13 + 1;
                            puVar8 = puVar8 + 1;
                          } while (uVar13 != uVar10);
                        }
                        local_78 = puVar9;
                        local_24 = puVar9;
                        if (puVar7 != puVar9) {
                          puVar9 = puVar7;
                          local_78 = puVar7;
                          local_24 = puVar7;
                        }
                      }
                    }
                  } while (local_20 < (int)local_54);
                }
                puVar9 = local_28;
                if (0.0 < (float)local_18[0xc]) {
                  local_18[0x10] = local_18[0xc];
                }
                local_54 = (float *)FUN_005adb0f(8);
                *local_54 = (float)local_2c;
                local_54[1] = (float)param_1;
                puVar8 = *(undefined4 **)((int)local_3c + 0x10);
                if (*(undefined4 **)((int)local_3c + 0x14) == puVar8) {
                  FUN_00414080((void *)((int)local_3c + 0xc),puVar8,&local_54);
                }
                else {
                  *puVar8 = local_54;
                  *(int *)((int)local_3c + 0x10) = *(int *)((int)local_3c + 0x10) + 4;
                }
                local_30 = local_30 + 1;
                local_8._0_1_ = 2;
                if (puVar9 != (undefined4 *)0x0) {
                  puVar8 = puVar9;
                  if ((0xfff < ((int)local_40 - (int)puVar9 & 0xfffffffcU)) &&
                     (puVar8 = (undefined4 *)puVar9[-1],
                     0x1f < (uint)((int)puVar9 + (-4 - (int)puVar8)))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_005adb3f(puVar8);
                  local_7c = (undefined4 *)0x0;
                  local_78 = (undefined4 *)0x0;
                  local_74 = (undefined4 *)0x0;
                }
              }
              local_8 = (uint)local_8._1_3_ << 8;
            }
LAB_004a963e:
          } while (local_30 < local_58);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004a9660(void *this,undefined1 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte ****ppppbVar7;
  int iVar8;
  bool bVar9;
  void *in_stack_ffffff18;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [12];
  undefined4 uStack_ac;
  uint in_stack_ffffff60;
  byte *pbVar10;
  char *pcVar11;
  byte *****pppppbVar12;
  void **ppvVar13;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  byte ****local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbcb4;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  local_8 = 0;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar9 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar9 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar9) {
    uVar1 = 7;
    pcVar11 = "leander";
  }
  else {
    uVar1 = 5;
    pcVar11 = "ceres";
  }
  FUN_00402690(local_48,pcVar11,uVar1);
  pppppbVar12 = local_30;
  pvVar2 = (void *)FUN_00412bf0();
  FUN_004a4fc0(pvVar2,pppppbVar12);
  ppvVar13 = local_60;
  local_8._0_1_ = 1;
  pvVar2 = (void *)FUN_00412bf0();
  FUN_004a5f50(pvVar2,(int *)ppvVar13);
  local_8._0_1_ = 2;
  in_stack_ffffff60 = in_stack_ffffff60 & 0xffffff00;
  uStack_ac = 0x4a9727;
  FUN_00402690(&stack0xffffff60,"stock",5);
  local_8._0_1_ = 3;
  uStack_c0 = 0x4a973c;
  FUN_004024e0(auStack_b8,local_48);
  local_8._0_1_ = 4;
  FUN_004024e0(auStack_d0,local_60);
  local_8._0_1_ = 5;
  FUN_004024e0(&stack0xffffff18,local_30);
  local_8._0_1_ = 2;
  puVar3 = FUN_0040e040(1,param_1,in_stack_ffffff18);
  pvVar2 = (void *)FUN_005adb0f(0x164);
  local_8._0_1_ = 7;
  puVar4 = FUN_00501e30(pvVar2,puVar3,1);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar3[0x11] = puVar4;
  puVar4[0x1d] = 3;
  iVar5 = rand();
  *(int *)(puVar3[0x11] + 0x78) = iVar5 % 3;
  if ((*(int *)(puVar3[0x11] + 0x70) != 0) && (*(int *)(puVar3[0x11] + 0x70) != 3)) {
    in_stack_ffffff60 = 0x4a97ed;
    FUN_00591070(&DAT_0060dfc4,"%s: My captain is %s and %s");
  }
  FUN_0050c390((int)puVar3);
  pvVar2 = (void *)FUN_005adb0f(0x88);
  local_8._0_1_ = 8;
  pbVar10 = (byte *)(in_stack_ffffff60 & 0xffffff00);
  uStack_ac = 0x4a982c;
  FUN_00402690(&stack0xffffff60,&DAT_0060df2c,4);
  iVar5 = FUN_004a8020(pbVar10);
  puVar4 = FUN_004adec0(pvVar2,iVar5);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00521d10((void *)puVar3[0x10],(undefined1 *)puVar4,-1);
  FUN_00502600(puVar3[0x11]);
  FUN_00591070(&DAT_005cdc70,"Generating freighter: %s");
  iVar5 = FUN_004aad50(puVar3[8],*(int *)((int)this + 4));
  *(int *)((int)this + 4) = iVar5;
  puVar4 = (undefined4 *)(iVar5 + 8);
  if ((undefined4 *)(puVar3[0x11] + 0x7c) != puVar4) {
    if (0xf < *(uint *)(iVar5 + 0x1c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(puVar3[0x11] + 0x7c),puVar4,*(uint *)(iVar5 + 0x18));
  }
  puVar4 = (undefined4 *)(iVar5 + 0x238);
  if ((undefined4 *)(puVar3[0x11] + 0x94) != puVar4) {
    if (0xf < *(uint *)(iVar5 + 0x24c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(puVar3[0x11] + 0x94),puVar4,*(uint *)(iVar5 + 0x248));
  }
  *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(iVar5 + 0x28);
  *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(iVar5 + 0x30);
  FUN_004024e0(&stack0xffffff60,(undefined4 *)(puVar3[0x11] + 0x94));
  iVar5 = FUN_004a6de0(pbVar10);
  iVar5 = FUN_004aad50(puVar3[8],iVar5);
  FUN_004a9a40(this,(int)puVar3,iVar5);
  FUN_004125d0();
  FUN_00435440(puVar3);
  iVar5 = rand();
  if (3 < iVar5 % 6 + 1) {
    iVar8 = 0;
    iVar5 = 8;
    do {
      iVar6 = rand();
      iVar8 = iVar8 + iVar6 % 10 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(float *)(puVar3[0x11] + 100) = (float)(iVar8 + 0x14);
  }
  if (0xf < local_4c) {
    pvVar2 = local_60[0];
    if ((0xfff < local_4c + 1) &&
       (pvVar2 = *(void **)((int)local_60[0] + -4),
       0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppppbVar7 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (ppppbVar7 = (byte ****)local_30[0][-1],
       0x1f < (uint)((int)local_30[0] + (-4 - (int)ppppbVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar7);
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (byte ****)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_34) {
    pvVar2 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar2 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004a9a40(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *in_stack_ffffffb0;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_1c;
  
  FUN_004024e0(&stack0xffffffb0,(undefined4 *)(*(int *)(param_1 + 0x44) + 0x94));
  iVar3 = FUN_004a6de0(in_stack_ffffffb0);
  iVar10 = param_2 + 8;
  if (param_2 == 0) {
    iVar10 = 0;
  }
  FUN_00503ed0(*(void **)(param_1 + 0x44),iVar10);
  *(int *)(*(int *)(param_1 + 0x44) + 0xc) = iVar10;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 8;
  }
  *(int *)(*(int *)(param_1 + 0x44) + 8) = iVar3;
  iVar10 = *(int *)((int)this + 0x18);
  iVar3 = *(int *)((int)this + 0x14);
  iVar4 = rand();
  FUN_00591070("DETAIL","Selected route %d/%d");
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x38) =
       *(undefined4 *)(*(int *)((int)this + 0x14) + (iVar4 % (iVar10 - iVar3 >> 2)) * 4);
  iVar10 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
  iVar5 = rand();
  iVar5 = iVar5 % (iVar10 + -1);
  local_1c = 0;
  iVar10 = *(int *)(*(int *)(param_1 + 0x44) + 0x38);
  iVar3 = *(int *)(iVar10 + 0x1c);
  iVar4 = *(int *)(iVar10 + 0x24);
  if ((iVar4 != iVar3) && (-1 < iVar4)) {
    iVar3 = iVar4;
  }
  iVar10 = *(int *)(iVar10 + 0x20);
  local_28 = iVar5 + 1;
  if ((-1 < iVar10) && (local_1c = 1, local_28 = iVar5, iVar5 < 1)) {
    local_28 = 1;
  }
  uVar7 = 0;
  puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar6 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar9 >> 2;
  if (uVar6 != 0) {
    do {
      local_24 = (int *)puVar9[uVar7];
      if (*local_24 == iVar3) goto LAB_004a9b7d;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  local_24 = (int *)0x0;
LAB_004a9b7d:
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      local_2c = (int *)*puVar9;
      if (*local_2c == iVar10) goto LAB_004a9ba2;
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 < uVar6);
  }
  local_2c = (int *)0x0;
LAB_004a9ba2:
  if (local_24 != (int *)0x0) {
    iVar5 = 0;
    iVar4 = 0xc;
    do {
      if (iVar5 < local_28) {
        pvVar1 = *(void **)(param_1 + 0x1f8);
        iVar2 = local_24[0x17];
        if (((iVar5 < 0) ||
            ((0 < *(int *)((int)pvVar1 + 8) && (*(int *)((int)pvVar1 + 8) <= iVar5)))) ||
           (*(int *)(iVar4 + (int)pvVar1) == 0)) {
          FUN_005070d0(pvVar1,iVar5);
        }
        iVar8 = iVar3;
        if ((iVar2 != 0) && (iVar2 - 1U < 3)) {
          *(undefined1 *)(iVar2 + *(int *)(iVar4 + (int)pvVar1)) = 1;
        }
LAB_004a9c62:
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + iVar4) + 8) = 0x14;
        *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + iVar4) + 4) = iVar8;
      }
      else if (iVar5 < local_28 + local_1c) {
        iVar2 = local_2c[0x17];
        pvVar1 = *(void **)(param_1 + 0x1f8);
        if ((iVar5 < 0) ||
           (((0 < *(int *)((int)pvVar1 + 8) && (*(int *)((int)pvVar1 + 8) <= iVar5)) ||
            (*(int *)(iVar4 + (int)pvVar1) == 0)))) {
          FUN_005070d0(pvVar1,iVar5);
        }
        iVar8 = iVar10;
        if ((iVar2 != 0) && (iVar2 - 1U < 3)) {
          *(undefined1 *)(iVar2 + *(int *)(iVar4 + (int)pvVar1)) = 1;
        }
        goto LAB_004a9c62;
      }
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0x44);
  }
  FUN_00591070("WORLD","Freighter: %s [%s] travelling %s -> %s");
  return;
}


void FUN_004a9cf0(undefined1 *param_1)

{
  float fVar1;
  uint uVar2;
  void *pvVar3;
  int *this;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte ****ppppbVar8;
  bool bVar9;
  void *in_stack_ffffff20;
  undefined1 auStack_c8 [16];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  byte *pbVar10;
  uint local_98;
  char *pcVar11;
  byte *****pppppbVar12;
  void **ppvVar13;
  byte ****local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbd22;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar9 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar9 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar9) {
    uVar2 = 5;
    pcVar11 = "akula";
  }
  else {
    uVar2 = 6;
    pcVar11 = "kyushu";
  }
  FUN_00402690(local_30,pcVar11,uVar2);
  pppppbVar12 = local_60;
  pvVar3 = (void *)FUN_00412bf0();
  FUN_004a5510(pvVar3,pppppbVar12);
  ppvVar13 = local_48;
  local_8._0_1_ = 1;
  pvVar3 = (void *)FUN_00412bf0();
  FUN_004a62a0(pvVar3,(int *)ppvVar13);
  local_8._0_1_ = 2;
  for (puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar5 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar5 = puVar5 + 1) {
    this = (int *)*puVar5;
    if ((undefined1 *)*this == param_1) goto LAB_004a9daf;
  }
  this = (int *)0x0;
LAB_004a9daf:
  iVar4 = FUN_00521010(this,0);
  if (iVar4 != 0) {
    pbVar10 = (byte *)0x0;
    local_98 = local_98 & 0xffffff00;
    FUN_00402690(&local_98,"stock",5);
    local_8._0_1_ = 3;
    uStack_b8 = 0x4a9dfc;
    FUN_004024e0(auStack_b0,local_30);
    local_8._0_1_ = 4;
    FUN_004024e0(auStack_c8,local_48);
    local_8._0_1_ = 5;
    FUN_004024e0(&stack0xffffff20,local_60);
    local_8._0_1_ = 2;
    puVar5 = FUN_0040e040(7,param_1,in_stack_ffffff20);
    pvVar3 = (void *)FUN_005adb0f(0x164);
    local_8._0_1_ = 7;
    puVar6 = FUN_00501e30(pvVar3,puVar5,7);
    local_8._0_1_ = 2;
    puVar5[0x11] = puVar6;
    puVar6[0x1d] = 3;
    iVar7 = rand();
    *(int *)(puVar5[0x11] + 0x78) = iVar7 % 3;
    if ((*(int *)(puVar5[0x11] + 0x70) != 0) && (*(int *)(puVar5[0x11] + 0x70) != 3)) {
      local_98 = 0x4a9eae;
      FUN_00591070(&DAT_0060dfc4,"%s: My captain is %s and %s");
    }
    *(double *)(puVar5 + 10) = (double)*(float *)(iVar4 + 8);
    fVar1 = *(float *)(iVar4 + 0xc);
    puVar5[0x19] = 1;
    *(double *)(puVar5 + 0xc) = (double)fVar1;
    FUN_0050c390((int)puVar5);
    iVar4 = 0;
    *(undefined4 *)(puVar5[0x11] + 4) = 1;
    if (0.0 < *(float *)(*(int *)(*(int *)(puVar5[0x10] + 0x20) + 8) + 0x108)) {
      do {
        uVar2 = 0xffffffff;
        pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
        uStack_a8 = 0x4a9f24;
        FUN_00402690(&stack0xffffff64,&DAT_0060a970,3);
        iVar7 = FUN_004a8180(pbVar10);
        FUN_0050f740(puVar5,iVar7,uVar2);
        iVar4 = iVar4 + 1;
      } while ((float)iVar4 < *(float *)(*(int *)(*(int *)(puVar5[0x10] + 0x20) + 8) + 0x108));
    }
    FUN_00502600(puVar5[0x11]);
    FUN_00402690(puVar5 + 0x20,"Unknown",7);
    FUN_004125d0();
    FUN_00435440(puVar5);
  }
  if (0xf < local_34) {
    pvVar3 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar3 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_4c) {
    ppppbVar8 = local_60[0];
    if ((0xfff < local_4c + 1) &&
       (ppppbVar8 = (byte ****)local_60[0][-1],
       0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (byte ****)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar3 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004aa060(undefined1 *param_1)

{
  float fVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *this;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *this_00;
  byte ****ppppbVar8;
  bool bVar9;
  void *in_stack_ffffff20;
  undefined1 auStack_c8 [16];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  byte *pbVar10;
  uint local_98;
  char *pcVar11;
  byte *****pppppbVar12;
  void **ppvVar13;
  byte ****local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbdc6;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar9 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar9 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar9) {
    uVar2 = 5;
    pcVar11 = "akula";
  }
  else {
    uVar2 = 9;
    pcVar11 = "headliner";
  }
  FUN_00402690(local_30,pcVar11,uVar2);
  pppppbVar12 = local_60;
  pvVar3 = (void *)FUN_00412bf0();
  FUN_004a5510(pvVar3,pppppbVar12);
  ppvVar13 = local_48;
  local_8._0_1_ = 1;
  pvVar3 = (void *)FUN_00412bf0();
  FUN_004a62a0(pvVar3,(int *)ppvVar13);
  for (puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar4 = puVar4 + 1) {
    this_00 = (int *)*puVar4;
    if ((undefined1 *)*this_00 == param_1) goto LAB_004aa11f;
  }
  this_00 = (int *)0x0;
LAB_004aa11f:
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
    local_8 = 4;
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  puVar4 = FUN_00521140(this_00,0);
  local_8 = 2;
  if (puVar4 != (undefined4 *)0x0) {
    pbVar10 = (byte *)0x0;
    local_98 = local_98 & 0xffffff00;
    FUN_00402690(&local_98,"stock",5);
    local_8._0_1_ = 5;
    uStack_b8 = 0x4aa1dd;
    FUN_004024e0(auStack_b0,local_30);
    local_8._0_1_ = 6;
    FUN_004024e0(auStack_c8,local_48);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff20,local_60);
    local_8._0_1_ = 2;
    this = FUN_0040e040(8,param_1,in_stack_ffffff20);
    pvVar3 = (void *)FUN_005adb0f(0x164);
    local_8._0_1_ = 9;
    puVar5 = FUN_00501e30(pvVar3,this,8);
    local_8 = CONCAT31(local_8._1_3_,2);
    this[0x11] = puVar5;
    puVar5[0x1d] = 3;
    iVar6 = rand();
    *(int *)(this[0x11] + 0x78) = iVar6 % 3;
    if ((*(int *)(this[0x11] + 0x70) != 0) && (*(int *)(this[0x11] + 0x70) != 3)) {
      local_98 = 0x4aa28f;
      FUN_00591070(&DAT_0060dfc4,"%s: My captain is %s and %s");
    }
    *(double *)(this + 10) = (double)(float)puVar4[2];
    fVar1 = (float)puVar4[3];
    this[0x19] = 1;
    *(double *)(this + 0xc) = (double)fVar1;
    FUN_0050c390((int)this);
    iVar6 = 0;
    *(undefined4 *)(this[0x11] + 4) = 1;
    if (0.0 < *(float *)(*(int *)(*(int *)(this[0x10] + 0x20) + 8) + 0x108)) {
      do {
        uVar2 = 0xffffffff;
        pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
        uStack_a8 = 0x4aa304;
        FUN_00402690(&stack0xffffff64,&DAT_005eb58c,3);
        iVar7 = FUN_004a8180(pbVar10);
        FUN_0050f740(this,iVar7,uVar2);
        iVar6 = iVar6 + 1;
      } while ((float)iVar6 < *(float *)(*(int *)(*(int *)(this[0x10] + 0x20) + 8) + 0x108));
    }
    FUN_00502600(this[0x11]);
    FUN_004125d0();
    FUN_00435440(this);
  }
  if (0xf < local_34) {
    pvVar3 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar3 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_4c) {
    ppppbVar8 = local_60[0];
    if ((0xfff < local_4c + 1) &&
       (ppppbVar8 = (byte ****)local_60[0][-1],
       0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (byte ****)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar3 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004aa430(undefined1 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *this;
  int iVar3;
  int *this_00;
  int iVar4;
  void *in_stack_ffffff00;
  undefined1 auStack_e8 [16];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined *puVar5;
  void **ppvVar6;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  uint uVar7;
  void *local_78 [4];
  undefined4 local_68;
  uint local_64;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbeca;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  rand();
  FUN_00402690(local_48,"leander",7);
  FUN_00402690(local_30,"stock",5);
  local_68 = 0;
  local_64 = 0xf;
  local_78[0] = (void *)((uint)local_78[0] & 0xffffff00);
  FUN_00402690(local_78,"pirate",6);
  ppvVar6 = local_60;
  local_8._0_1_ = 2;
  pvVar1 = (void *)FUN_00412bf0();
  FUN_004a5f50(pvVar1,(int *)ppvVar6);
  for (puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar2 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar2 = puVar2 + 1) {
    this_00 = (int *)*puVar2;
    if ((undefined1 *)*this_00 == param_1) goto LAB_004aa523;
  }
  this_00 = (int *)0x0;
LAB_004aa523:
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
    local_8 = 5;
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,4);
  }
  uStack_b0 = 0x4aa596;
  puVar2 = FUN_00521140(this_00,1);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
      local_8 = 7;
    }
    else {
      local_8 = 6;
    }
    uStack_b0 = 0x4aa62b;
    puVar2 = FUN_00521140(this_00,5);
    if (puVar2 != (undefined4 *)0x0) goto LAB_004aa6d1;
    if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
      local_8 = 9;
    }
    else {
      local_8 = 8;
    }
    uStack_b0 = 0x4aa6c0;
    puVar2 = FUN_00521140(this_00,0);
    if (puVar2 != (undefined4 *)0x0) goto LAB_004aa6d1;
  }
  else {
LAB_004aa6d1:
    local_8 = 3;
    if (3 < (uint)(puVar2[0xb] - puVar2[10])) {
      ppvVar6 = local_30;
      FUN_004024e0(auStack_b8,ppvVar6);
      local_8._0_1_ = 10;
      uStack_d8 = 0x4aa709;
      FUN_004024e0(auStack_d0,local_48);
      local_8._0_1_ = 0xb;
      FUN_004024e0(auStack_e8,local_60);
      local_8._0_1_ = 0xc;
      FUN_004024e0(&stack0xffffff00,local_78);
      local_8 = CONCAT31(local_8._1_3_,3);
      this = FUN_0040e040(2,param_1,in_stack_ffffff00);
      uStack_b0 = 0x4aa753;
      FUN_0050ad40(this,2,4,3);
      this[0x19] = 3;
      *(double *)(this + 10) = (double)(float)puVar2[2];
      *(double *)(this + 0xc) = (double)(float)puVar2[3];
      *(undefined1 *)(this[0x10] + 0x34) = 0;
      FUN_0050c390((int)this);
      if ((*(int *)(this[0x10] + 0x20) != 0) &&
         (iVar4 = 0, 0.0 < *(float *)(*(int *)(*(int *)(this[0x10] + 0x20) + 8) + 0x108))) {
        do {
          uVar7 = 0xffffffff;
          if (*(int *)(this[0x11] + 0x74) == 2) {
            puVar5 = &DAT_0060a970;
          }
          else if (*(int *)(this[0x11] + 0x74) == 3) {
            puVar5 = &DAT_0060a974;
          }
          else {
            puVar5 = &DAT_005eb58c;
          }
          ppvVar6 = (void **)((uint)ppvVar6 & 0xffffff00);
          uStack_c8 = 0x4aa7e7;
          FUN_00402690(&stack0xffffff44,puVar5,3);
          iVar3 = FUN_004a8180((byte *)ppvVar6);
          FUN_0050f740(this,iVar3,uVar7);
          iVar4 = iVar4 + 1;
        } while ((float)iVar4 < *(float *)(*(int *)(*(int *)(this[0x10] + 0x20) + 8) + 0x108));
      }
      FUN_00502600(this[0x11]);
      FUN_004125d0();
      FUN_00435440(this);
      goto LAB_004aa829;
    }
  }
  local_8 = 3;
LAB_004aa829:
  if (0xf < local_4c) {
    pvVar1 = local_60[0];
    if ((0xfff < local_4c + 1) &&
       (pvVar1 = *(void **)((int)local_60[0] + -4),
       0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_64) {
    pvVar1 = local_78[0];
    if ((0xfff < local_64 + 1) &&
       (pvVar1 = *(void **)((int)local_78[0] + -4),
       0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  if (0xf < local_1c) {
    pvVar1 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar1 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  if (0xf < local_34) {
    pvVar1 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar1 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * FUN_004aa940(int param_1)

{
  float fVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  int *this;
  byte *pbVar9;
  void *in_stack_ffffff60;
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  uint uVar10;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005bbfb4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      this = (int *)*puVar3;
      if (*this == *(int *)(*(int *)(param_1 + 0x4c) + 0x18)) goto LAB_004aa997;
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  this = (int *)0x0;
LAB_004aa997:
  local_8 = (uint)(*(int *)(DAT_0065b5cc + 0xd0) == 0);
  local_18 = FUN_00521140(this,1);
  if (local_18 == (undefined4 *)0x0) {
    if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
      local_8 = 3;
    }
    else {
      local_8 = 2;
    }
    local_18 = FUN_00521140(this,5);
    if (local_18 == (undefined4 *)0x0) {
      if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
        local_8 = 5;
      }
      else {
        local_8 = 4;
      }
      local_18 = FUN_00521140(this,0);
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return (undefined4 *)0x0;
      }
    }
  }
  local_8 = 0xffffffff;
  if ((uint)(local_18[0xb] - local_18[10]) < 4) {
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  pbVar2 = (byte *)(*(int *)(param_1 + 0x4c) + 0x3c);
  FUN_004024e0(auStack_58,(undefined4 *)pbVar2);
  local_8 = 6;
  uStack_78 = 0x4aab98;
  FUN_004024e0(auStack_70,(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x24));
  local_8._0_1_ = 7;
  FUN_004024e0(auStack_88,(undefined4 *)(param_1 + 0x34));
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004024e0(&stack0xffffff60,(undefined4 *)(param_1 + 4));
  local_8 = 0xffffffff;
  puVar3 = FUN_0040e040(2,*(undefined1 **)(*(int *)(param_1 + 0x4c) + 0x18),in_stack_ffffff60);
  FUN_0050ad40(puVar3,2,3,3);
  if (puVar3 == (undefined4 *)0x0) {
    uStack_54 = 0x4aac10;
    FUN_00591070("ERROR","Unable to create bounty: %s, %s");
  }
  puVar7 = (undefined4 *)(param_1 + 0x1c);
  if (puVar3 + 0x20 != puVar7) {
    if (0xf < *(uint *)(param_1 + 0x30)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    FUN_00402690(puVar3 + 0x20,puVar7,*(uint *)(param_1 + 0x2c));
  }
  puVar3[0x19] = 3;
  *(double *)(puVar3 + 10) = (double)(float)local_18[2];
  fVar1 = (float)local_18[3];
  *(undefined1 *)((int)puVar3 + 0x326) = 1;
  *(double *)(puVar3 + 0xc) = (double)fVar1;
  FUN_0050c390((int)puVar3);
  if ((*(int *)(puVar3[0x10] + 0x20) != 0) &&
     (iVar8 = 0, 0.0 < *(float *)(*(int *)(*(int *)(puVar3[0x10] + 0x20) + 8) + 0x108))) {
    do {
      iVar5 = *(int *)(param_1 + 0x4c);
      pbVar9 = (byte *)(iVar5 + 0x54);
      pbVar6 = pbVar9;
      if (0xf < *(uint *)(iVar5 + 0x68)) {
        pbVar6 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar6,*(uint *)(iVar5 + 100),(byte *)&PTR_005ce008,0);
      uVar10 = 0xffffffff;
      if ((char)uVar4 == '\0') {
        FUN_004024e0(&stack0xffffffa4,(undefined4 *)pbVar9);
      }
      else {
        pbVar2 = (byte *)((uint)pbVar2 & 0xffffff00);
        uStack_68 = 0x4aace2;
        FUN_00402690(&stack0xffffffa4,&DAT_005eb58c,3);
      }
      iVar5 = FUN_004a8180(pbVar2);
      FUN_0050f740(puVar3,iVar5,uVar10);
      iVar8 = iVar8 + 1;
    } while ((float)iVar8 < *(float *)(*(int *)(*(int *)(puVar3[0x10] + 0x20) + 8) + 0x108));
  }
  FUN_00502600(puVar3[0x11]);
  ExceptionList = local_10;
  return puVar3;
}


undefined4 FUN_004aad50(uint param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  void *pvVar9;
  void *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bbfd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar4 = puVar4 + 1) {
    puVar8 = (uint *)*puVar4;
    if (*puVar8 == param_1) goto LAB_004aad9f;
  }
  puVar8 = (uint *)0x0;
LAB_004aad9f:
  piVar7 = (int *)0x0;
  local_20 = (void *)0x0;
  piVar6 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_8 = 0;
  uVar5 = puVar8[0x33];
  param_1 = 0;
  if ((int)(puVar8[0x34] - uVar5) >> 2 != 0) {
    do {
      iVar3 = *(int *)(uVar5 + param_1 * 4);
      if ((*(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 1) && (iVar3 != param_2)) {
        local_14 = iVar3;
        if (piVar6 == piVar7) {
          FUN_00414080(&local_20,piVar7,&local_14);
          piVar6 = local_18;
          piVar7 = local_1c;
        }
        else {
          *piVar7 = iVar3;
          local_1c = piVar7 + 1;
          piVar7 = local_1c;
        }
      }
      uVar5 = puVar8[0x33];
      param_1 = param_1 + 1;
    } while (param_1 < (uint)((int)(puVar8[0x34] - uVar5) >> 2));
  }
  pvVar2 = local_20;
  iVar3 = rand();
  uVar1 = *(undefined4 *)((int)pvVar2 + (iVar3 % (((int)piVar7 - (int)pvVar2 >> 2) + -1)) * 4);
  if (pvVar2 != (void *)0x0) {
    pvVar9 = pvVar2;
    if ((0xfff < ((int)piVar6 - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar9 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  return uVar1;
}


void __thiscall FUN_004aae90(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  void *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af858;
  local_10 = ExceptionList;
  puVar5 = *(uint **)((int)this + 8);
  uVar7 = 0;
  iVar4 = *(int *)((int)this + 0xc) - (int)puVar5;
  iVar1 = iVar4 >> 0x1f;
  puVar3 = puVar5;
  if (iVar4 / 0xc + iVar1 != iVar1) {
    while (*puVar3 != param_1) {
      uVar7 = uVar7 + 1;
      puVar3 = puVar3 + 3;
      if ((uint)((*(int *)((int)this + 0xc) - (int)puVar5) / 0xc) <= uVar7) {
        return;
      }
    }
    puVar6 = (uint *)0x0;
    puVar2 = (uint *)0x0;
    local_1c = (uint *)0x0;
    local_30 = (uint *)0x0;
    local_2c = (uint *)0x0;
    local_14 = (uint *)0x0;
    local_28 = (uint *)0x0;
    local_8 = 0;
    local_24 = uVar7 * 0xc;
    param_1 = 0;
    puVar3 = *(uint **)(puVar5[uVar7 * 3 + 1] + 0xcc);
    puVar5 = *(uint **)(puVar5[uVar7 * 3 + 1] + 0xd0);
    uVar7 = (uint)((int)puVar5 + (3 - (int)puVar3)) >> 2;
    if (puVar5 < puVar3) {
      uVar7 = 0;
    }
    ExceptionList = &local_10;
    local_20 = uVar7;
    local_18 = this;
    if (uVar7 != 0) {
      do {
        local_20 = *puVar3;
        if ((*(int *)(local_20 + 0x44) != 0) &&
           ((((iVar1 = *(int *)(*(int *)(local_20 + 0x44) + 0x70), iVar1 == 1 || (iVar1 == 2)) ||
             (iVar1 == 8)) || (iVar1 == 7)))) {
          if (puVar6 == puVar2) {
            FUN_00414080(&local_30,puVar2,&local_20);
            puVar2 = local_2c;
            puVar6 = local_28;
          }
          else {
            *puVar2 = local_20;
            local_2c = puVar2 + 1;
            puVar2 = local_2c;
          }
        }
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      } while (param_1 != uVar7);
      local_1c = local_30;
      local_14 = puVar6;
    }
    uVar8 = 0;
    uVar7 = (uint)((int)puVar2 + (3 - (int)local_1c)) >> 2;
    if (puVar2 < local_1c) {
      uVar7 = 0;
    }
    puVar5 = local_1c;
    local_30 = local_1c;
    if (uVar7 != 0) {
      do {
        FUN_0040d4f0((undefined4 *)*puVar5,'\0');
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar8 != uVar7);
    }
    puVar5 = local_14;
    FUN_00591070(&DAT_0060dfc4,"Removed all ships from sector \'%s\' in NPCManager.");
    if (local_1c != (uint *)0x0) {
      puVar3 = local_1c;
      if ((0xfff < ((int)puVar5 - (int)local_1c & 0xfffffffcU)) &&
         (puVar3 = (uint *)local_1c[-1], 0x1f < (uint)((int)local_1c + (-4 - (int)puVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar3);
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004ab070(undefined4 *param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 *local_8;
  
  param_1[3] = param_1[2];
  this = param_1 + 5;
  param_1[1] = 0;
  param_1[6] = *this;
  local_8 = param_1;
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x66;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x6d;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x73;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x74;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x74;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0x7c;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x77;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x77;
  local_8[8] = 0xfffffffe;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x7a;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0x7a;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 1;
  local_8[9] = 0x7c;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] == puVar1) {
    FUN_00414080(this,puVar1,&local_8);
  }
  else {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
  }
  local_8 = (undefined4 *)FUN_005adb0f(0x2c);
  *local_8 = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  *(undefined2 *)((int)local_8 + 0x29) = 0;
  *(undefined1 *)((int)local_8 + 0x2b) = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0xfffffffe;
  local_8[8] = 0xffffffff;
  *(undefined1 *)(local_8 + 10) = 0;
  local_8[9] = 0xffffffff;
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] != puVar1) {
    *puVar1 = local_8;
    param_1[6] = param_1[6] + 4;
    return;
  }
  FUN_00414080(this,puVar1,&local_8);
  return;
}


void __thiscall FUN_004ab580(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 *in_stack_ffffff5c;
  byte *in_stack_ffffff68;
  int local_4c;
  int local_48;
  
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x312) != '\0') {
    uVar7 = 0;
    iVar8 = 0;
    iVar4 = param_1 * 0xc;
    iVar9 = *(int *)(*(int *)((int)this + 8) + 4 + iVar4);
    piVar5 = *(int **)(iVar9 + 0xcc);
    piVar1 = *(int **)(iVar9 + 0xd0);
    uVar6 = (uint)((int)piVar1 + (3 - (int)piVar5)) >> 2;
    if (piVar1 < piVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        if ((*(int *)(*piVar5 + 0x44) != 0) && (*(int *)(*(int *)(*piVar5 + 0x44) + 0x70) == 1)) {
          iVar8 = iVar8 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 != uVar6);
    }
    if (iVar8 < *(int *)(&DAT_005ddb20 + *(int *)(*(int *)((int)this + 8) + 8 + iVar4) * 4)) {
      FUN_004a9660(this,*(undefined1 **)(*(int *)((int)this + 8) + iVar4));
    }
    local_4c = *(int *)((int)this + 8);
    iVar9 = 0;
    uVar7 = 0;
    puVar2 = (undefined4 *)(local_4c + iVar4);
    piVar5 = *(int **)(puVar2[1] + 0xcc);
    piVar1 = *(int **)(puVar2[1] + 0xd0);
    uVar6 = (uint)((int)piVar1 + (3 - (int)piVar5)) >> 2;
    if (piVar1 < piVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        if ((*(int *)(*piVar5 + 0x44) != 0) && (*(int *)(*(int *)(*piVar5 + 0x44) + 0x70) == 7)) {
          iVar9 = iVar9 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 != uVar6);
      local_4c = *(int *)((int)this + 8);
    }
    if (iVar9 < *(int *)(&DAT_005ddafc + puVar2[2] * 4)) {
      FUN_004a9cf0((undefined1 *)*puVar2);
      local_4c = *(int *)((int)this + 8);
    }
    local_48 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0xb4);
    if (local_48 == -1) {
      local_4c = *(int *)((int)this + 8);
      local_48 = *(int *)(&DAT_005ddb08 + *(int *)(local_4c + 8 + iVar4) * 4);
    }
    uVar7 = 0;
    iVar8 = 0;
    iVar9 = *(int *)(local_4c + 4 + iVar4);
    piVar5 = *(int **)(iVar9 + 0xcc);
    piVar1 = *(int **)(iVar9 + 0xd0);
    uVar6 = (uint)((int)piVar1 + (3 - (int)piVar5)) >> 2;
    if (piVar1 < piVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        if ((*(int *)(*piVar5 + 0x44) != 0) && (*(int *)(*(int *)(*piVar5 + 0x44) + 0x70) == 2)) {
          iVar8 = iVar8 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 != uVar6);
    }
    if (iVar8 < local_48) {
      FUN_004aa430(*(undefined1 **)(local_4c + iVar4));
    }
    piVar5 = *(int **)(DAT_0065b5cc + 0x9c);
    iVar8 = *(int *)(DAT_0065b5cc + 0xa0) - (int)piVar5 >> 2;
    iVar9 = 0;
    if (iVar8 != 0) {
      do {
        iVar10 = *piVar5;
        if (((*(int *)(iVar10 + 0x1c) == *(int *)(DAT_0065b5cc + 0xd8)) &&
            (*(char *)(iVar10 + 0x18) != '\0')) && (iVar9 < *(int *)(iVar10 + 0x58))) {
          iVar9 = *(int *)(iVar10 + 0x58);
        }
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(&DAT_005ddb14 + *(int *)(*(int *)((int)this + 8) + 8 + iVar4) * 4);
    if (iVar9 != 0) {
      iVar8 = iVar9;
    }
    iVar10 = 0;
    uVar7 = 0;
    iVar9 = *(int *)(*(int *)((int)this + 8) + 4 + iVar4);
    piVar5 = *(int **)(iVar9 + 0xcc);
    piVar1 = *(int **)(iVar9 + 0xd0);
    uVar6 = (uint)((int)piVar1 + (3 - (int)piVar5)) >> 2;
    if (piVar1 < piVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        if ((*(int *)(*piVar5 + 0x44) != 0) && (*(int *)(*(int *)(*piVar5 + 0x44) + 0x70) == 8)) {
          iVar10 = iVar10 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 != uVar6);
    }
    if (iVar10 < iVar8) {
      FUN_004aa060(*(undefined1 **)(*(int *)((int)this + 8) + iVar4));
    }
    uVar6 = 0;
    iVar9 = DAT_0065b5cc;
    if (*(int *)(DAT_0065b5cc + 0x134) - *(int *)(DAT_0065b5cc + 0x130) >> 2 != 0) {
      do {
        iVar4 = *(int *)(*(int *)(iVar9 + 0x130) + uVar6 * 4);
        if (*(int *)(*(int *)(iVar4 + 0x4c) + 0x18) == **(int **)(iVar9 + 0xd8)) {
          FUN_004024e0(&stack0xffffff68,(undefined4 *)(iVar4 + 0x34));
          iVar4 = FUN_0051fb30(*(void **)(DAT_0065b5cc + 0xd8),in_stack_ffffff68);
          iVar9 = DAT_0065b5cc;
          if (iVar4 == 0) {
            FUN_00591070("WORLD","Spawning a bounty here.");
            FUN_004aa940(*(int *)(*(int *)(DAT_0065b5cc + 0x130) + uVar6 * 4));
            iVar9 = DAT_0065b5cc;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(*(int *)(iVar9 + 0x134) - *(int *)(iVar9 + 0x130) >> 2));
    }
  }
  iVar9 = *(int *)(*(int *)((int)this + 8) + 4 + param_1 * 0xc);
  piVar1 = *(int **)(iVar9 + 0xd0);
  for (piVar5 = *(int **)(iVar9 + 0xcc); piVar5 != piVar1; piVar5 = piVar5 + 1) {
    iVar9 = *piVar5;
    iVar4 = *(int *)(iVar9 + 0x44);
    if (iVar4 != 0) {
      bVar11 = false;
      if (*(int *)(iVar9 + 0x254) != 0) {
        bVar11 = *(int *)(*(int *)(iVar9 + 0x254) + 0x158) == 0;
      }
      if (bVar11) {
        if (*(int *)(iVar4 + 0x70) == 1) {
          if (*(int *)(iVar4 + 4) == 1) {
            iVar8 = 0;
            iVar4 = 8;
            do {
              iVar10 = rand();
              iVar8 = iVar8 + 1 + iVar10 % 10;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            *(float *)(*(int *)(iVar9 + 0x44) + 100) = (float)(iVar8 + 0x14);
            in_stack_ffffff5c = (undefined4 *)((uint)in_stack_ffffff5c & 0xffffff00);
            FUN_00402690(&stack0xffffff5c,"Waiting at %s for %.0f seconds.",0x1f);
            FUN_0050ae50(iVar9,in_stack_ffffff5c);
            iVar4 = *(int *)(*(int *)(iVar9 + 0x44) + 0x10);
            piVar3 = (int *)(iVar4 + 0x24c);
            if (iVar4 == 0) {
              piVar3 = (int *)&DAT_00000254;
            }
            bVar11 = false;
            if (*piVar3 != 0) {
              bVar11 = *(int *)(*piVar3 + 0x158) == 1;
            }
            if (bVar11) {
              uVar6 = -(uint)(iVar4 != 0) & iVar4 - 8U;
            }
            else {
              iVar4 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
              if (iVar4 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = iVar4 - 8;
              }
            }
            iVar8 = FUN_004aad50(*(uint *)(iVar9 + 0x20),uVar6);
            FUN_00591070("WORLD","%s being sent to %s");
            iVar4 = 0;
            if (iVar8 != 0) {
              iVar4 = iVar8 + 8;
            }
            FUN_00503ed0(*(void **)(iVar9 + 0x44),iVar4);
          }
        }
        else if (*(int *)(iVar4 + 0x70) == 7) {
          FUN_004aba50(iVar9);
        }
      }
    }
  }
  return;
}


void FUN_004aba50(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  void *pvVar13;
  void *pvVar14;
  float fVar15;
  undefined *in_stack_ffffff9c;
  undefined4 *puVar16;
  byte *in_stack_ffffffa0;
  void *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  float local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar10 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc022;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = (int *)0x0;
  iVar6 = *(int *)(param_1 + 0x44);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0xd0) != 0)) && (*(int *)(*(int *)(iVar6 + 0xd0) + 4) == 0)
     ) {
    pbVar8 = (byte *)(DAT_0065b444 + 0x194);
    if (0xf < *(uint *)(DAT_0065b444 + 0x1a8)) {
      pbVar8 = *(byte **)(DAT_0065b444 + 0x194);
    }
    uVar3 = FUN_004031f0(pbVar8,*(uint *)(DAT_0065b444 + 0x1a4),(byte *)&PTR_005ce008,0);
    if ((char)uVar3 == '\0') {
      *(undefined4 *)(iVar6 + 4) = 1;
      iVar6 = *(int *)(param_1 + 0x44);
    }
  }
  if (*(int *)(iVar6 + 4) != 1) {
    ExceptionList = local_10;
    return;
  }
  pbVar8 = (byte *)(iVar10 + 0x194);
  pbVar9 = pbVar8;
  if (0xf < *(uint *)(iVar10 + 0x1a8)) {
    pbVar9 = *(byte **)pbVar8;
  }
  uVar3 = FUN_004031f0(pbVar9,*(uint *)(iVar10 + 0x1a4),(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    FUN_004024e0(&stack0xffffffa0,(undefined4 *)pbVar8);
    in_stack_ffffff9c = (undefined *)0x4abb22;
    local_28 = (int *)FUN_004a8780(in_stack_ffffffa0);
    iVar6 = *(int *)(param_1 + 0x24);
    piVar11 = (int *)0x0;
    iVar10 = *(int *)(iVar6 + 0xa8);
    iVar4 = *(int *)(iVar6 + 0xac) - iVar10 >> 2;
    piVar12 = piVar11;
    local_1c = iVar6;
    if (iVar4 != 0) {
      local_2c = (int *)0x0;
      piVar12 = (int *)0x0;
      local_34 = (void *)0x0;
      local_30 = (int *)0x0;
      local_8 = 0;
      local_18 = 0;
      if (iVar4 != 0) {
        local_20 = (int *)0x3;
        do {
          piVar1 = (int *)(iVar10 + local_18 * 4);
          iVar10 = *piVar1;
          if ((*(int *)(iVar10 + 4) == 0) && (*(int *)(iVar10 + 0x38) == 0)) {
            if (0.0 < *(float *)(iVar10 + 8)) {
              piVar5 = (int *)((*(float *)(iVar10 + 0xc) <= 0.0) + 1);
            }
            else {
              piVar5 = (int *)0x0;
              if (*(float *)(iVar10 + 0xc) <= 0.0) {
                piVar5 = local_20;
              }
            }
            if (piVar5 == local_28) {
              if (piVar11 == piVar12) {
                FUN_00414080(&local_34,piVar12,piVar1);
                piVar11 = local_2c;
                piVar12 = local_30;
              }
              else {
                *piVar12 = iVar10;
                local_30 = piVar12 + 1;
                piVar12 = local_30;
              }
            }
          }
          iVar10 = *(int *)(iVar6 + 0xa8);
          local_18 = local_18 + 1;
        } while (local_18 < (uint)(*(int *)(iVar6 + 0xac) - iVar10 >> 2));
      }
      pvVar13 = local_34;
      uVar3 = (int)piVar12 - (int)local_34;
      if (uVar3 < 4) {
        local_8 = 0xffffffff;
        if (local_34 != (void *)0x0) {
          if ((0xfff < ((int)piVar11 - (int)local_34 & 0xfffffffcU)) &&
             (pvVar13 = *(void **)((int)local_34 + -4),
             0x1f < (uint)((int)local_34 + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar13);
        }
        piVar12 = (int *)0x0;
      }
      else {
        iVar6 = rand();
        local_28 = *(int **)((int)pvVar13 + (iVar6 % (((int)uVar3 >> 2) + -1)) * 4);
        local_8 = 0xffffffff;
        piVar12 = local_28;
        if (pvVar13 != (void *)0x0) {
          pvVar14 = pvVar13;
          if ((0xfff < ((int)piVar11 - (int)pvVar13 & 0xfffffffcU)) &&
             (pvVar14 = *(void **)((int)pvVar13 + -4),
             0x1f < (uint)((int)pvVar13 + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar14);
          piVar12 = local_28;
        }
      }
    }
    FUN_00402690((void *)(DAT_0065b444 + 0x194),&PTR_005ce008,0);
  }
  else {
    piVar12 = FUN_00521140(*(void **)(param_1 + 0x24),0);
  }
  if (piVar12 == (int *)0x0) {
    FUN_00591070("WARNING","Unable to generate valid waypoint within 20gms of %s");
    ExceptionList = local_10;
    return;
  }
  iVar6 = *(int *)(param_1 + 0x44);
  if (*(int *)(iVar6 + 4) != 1) goto LAB_004abded;
  if (*(int *)(iVar6 + 0x30) != 0) {
    *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x30);
  }
  if (*(int *)(iVar6 + 0x34) == 0) {
LAB_004abd88:
    bVar2 = false;
  }
  else {
    local_24 = (float)*(double *)(*(int *)(iVar6 + 0x6c) + 0x28);
    local_20 = (int *)(float)*(double *)(*(int *)(iVar6 + 0x6c) + 0x30);
    local_8 = 1;
    local_28 = (int *)0x1;
    fVar15 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)(*(int *)(iVar6 + 0x34) + 8));
    fVar7 = (float)(0x5f3759df - ((uint)fVar15 >> 1));
    if (0.1 < (1.5 - fVar15 * 0.5 * fVar7 * fVar7) * fVar7 * fVar15) goto LAB_004abd88;
    bVar2 = true;
  }
  local_8 = 0xffffffff;
  if (bVar2) {
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar6 + 0x34);
  }
  else {
    *(undefined4 *)(iVar6 + 0x30) = 0;
  }
  *(int **)(iVar6 + 0x34) = piVar12;
  *(undefined4 *)(iVar6 + 4) = 0;
  in_stack_ffffff9c = &DAT_0060dfc4;
  FUN_00591070(&DAT_0060dfc4,"%s: Travelling to nav point at %f, %f");
LAB_004abded:
  puVar16 = (undefined4 *)((uint)in_stack_ffffff9c & 0xffffff00);
  FUN_00402690(&stack0xffffff9c,"Patrolling to nav point %d",0x1a);
  FUN_0050ae50(param_1,puVar16);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004abe60(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0xc) * 0xc)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


undefined1 __fastcall FUN_004abed0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x62);
}


void FUN_004abee0(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  Color3B *pCVar11;
  void *pvVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 in_XMM0 [16];
  float fVar20;
  void *in_stack_fffffec0;
  undefined1 local_124 [16];
  undefined4 local_114;
  undefined4 local_110;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  Color3B local_ef [3];
  Color3B local_ec [3];
  Color3B local_e9 [3];
  Color3B local_e6 [3];
  Color3B local_e3 [3];
  Color3B local_e0 [3];
  Color3B local_dd [3];
  Color3B local_da [3];
  Color3B local_d7 [3];
  Color3B local_d4 [3];
  Color3B local_d1 [3];
  Color3B local_ce [3];
  Color3B local_cb [3];
  int *local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  char *local_b4;
  undefined1 *local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  void *local_a8 [5];
  uint local_94;
  undefined4 local_90 [21];
  float local_3c;
  undefined2 local_35;
  undefined1 local_33;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005bc074;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c8 = param_1;
  iVar7 = param_1[1];
  iVar15 = *param_1;
  if (iVar15 != iVar7) {
    do {
      FUN_0043bfa0(iVar15);
      iVar15 = iVar15 + 0x60;
    } while (iVar15 != iVar7);
    iVar15 = *param_1;
  }
  param_1[1] = iVar15;
  uVar8 = 0;
  fVar17 = 1.0;
  piVar14 = (int *)(DAT_0065b5cc + 0xd0);
  fVar20 = 1.0;
  local_c0 = 1.0;
  local_bc = 1.0;
  piVar2 = *(int **)(*(int *)(*piVar14 + 0x40) + 0x40);
  local_b8 = *(int **)(*(int *)(*piVar14 + 0x40) + 0x3c);
  uVar16 = (uint)((int)piVar2 + (3 - (int)local_b8)) >> 2;
  if (piVar2 < local_b8) {
    uVar16 = 0;
  }
  piVar13 = local_b8;
  if (uVar16 != 0) {
    do {
      fVar1 = *(float *)(*(int *)(*piVar13 + 8) + 0xc0);
      local_c0 = fVar20;
      if ((0.0 < fVar1) && (local_c0 = fVar1, fVar1 <= fVar20)) {
        local_c0 = fVar20;
      }
      fVar20 = *(float *)(*(int *)(*piVar13 + 8) + 0xbc);
      in_XMM0 = ZEXT416((uint)fVar20);
      if (0.0 < fVar20) {
        if (fVar20 <= fVar17) {
          in_XMM0 = ZEXT416((uint)fVar17);
        }
        fVar17 = in_XMM0._0_4_;
      }
      uVar8 = uVar8 + 1;
      piVar13 = piVar13 + 1;
      fVar20 = local_c0;
      local_bc = fVar17;
    } while (uVar8 != uVar16);
  }
  local_c4 = 0;
  if ((int)piVar2 - (int)local_b8 >> 2 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(*piVar14 + 0x40) + 0x3c) + local_c4 * 4);
      local_110 = 0x4ac00d;
      cocos2d::Color3B::Color3B((Color3B *)&local_ac,' ',' ','@');
      if (*(char *)((int)piVar2 + 99) == '\0') {
        uVar23 = '\x10';
        uVar22 = '\x10';
        uVar21 = '\x10';
        pCVar11 = local_cb;
LAB_004ac033:
        local_110 = 0x4ac035;
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar11,uVar21,uVar22,uVar23);
        local_ac = *puVar5;
        local_aa = *(undefined1 *)(puVar5 + 1);
      }
      else if (*(char *)((int)piVar2 + 0x62) != '\0') {
        uVar23 = ' ';
        uVar22 = ' ';
        uVar21 = '@';
        pCVar11 = local_ce;
        goto LAB_004ac033;
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      local_110 = 0x4ac08b;
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_a8,&DAT_0060e2cc);
      local_8._0_1_ = 1;
      puVar9 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar9 = (undefined4 *)*puVar6;
      }
      FUN_00403640(local_30,puVar9,puVar6[4]);
      local_8._0_1_ = 0;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 0;
      if (0xf < local_94) {
        pvVar12 = local_a8[0];
        if ((0xfff < local_94 + 1) &&
           (pvVar12 = *(void **)((int)local_a8[0] + -4),
           0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar12)))) goto LAB_004ac603;
        FUN_005adb3f(pvVar12);
      }
      local_110 = 0x4ac111;
      puVar6 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_a8,
                            (&PTR_s_Unknown_005ddb90)[*(int *)(piVar2[2] + 4)]);
      local_8._0_1_ = 2;
      puVar9 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar9 = (undefined4 *)*puVar6;
      }
      FUN_00403640(local_30,puVar9,puVar6[4]);
      local_8._0_1_ = 0;
      if (0xf < local_94) {
        pvVar12 = local_a8[0];
        if ((0xfff < local_94 + 1) &&
           (pvVar12 = *(void **)((int)local_a8[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar12)))) goto LAB_004ac603;
        FUN_005adb3f(pvVar12);
      }
      local_b0 = local_124;
      local_114 = 0;
      local_110 = 0xf;
      local_124[0] = 0;
      pcVar18 = (&PTR_DAT_005ddb38)[*(int *)(piVar2[2] + 4)];
      local_b4 = pcVar18 + 1;
      pcVar10 = pcVar18;
      do {
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      FUN_00402690(local_124,pcVar18,(int)pcVar10 - (int)local_b4);
      local_8._0_1_ = 3;
      FUN_004024e0(&stack0xfffffec0,local_30);
      local_8._0_1_ = 0;
      FUN_0043b590(local_90,piVar2[4],in_stack_fffffec0);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004ae5e0((int)piVar2);
      fVar20 = 0.0;
      if (in_XMM0._0_4_ <= 0.0) {
        iVar7 = piVar2[2];
        if (((iVar7 != 0) && (0.0 < *(float *)(iVar7 + 0xc4))) &&
           (*(char *)((int)piVar2 + 99) != '\0')) {
          cVar4 = (**(code **)(*piVar2 + 0x14))();
          if (cVar4 == '\0') {
            iVar7 = FUN_00437c60((int *)piVar2[3]);
            local_3c = *(float *)(piVar2[2] + 0xc4) * ((float)iVar7 / 100.0);
          }
          else {
            local_3c = 0.0;
          }
          local_3c = (float)piVar2[0x17] / local_3c;
          in_XMM0._0_8_ = (double)local_3c;
          in_XMM0._8_8_ = 0;
          if (0.8 <= in_XMM0._0_8_) {
            uVar22 = 0xff;
            uVar21 = '\0';
            pCVar11 = local_da;
            goto LAB_004ac526;
          }
          if (0.5 <= local_3c) {
            uVar22 = 0xff;
            pCVar11 = local_dd;
            goto LAB_004ac521;
          }
          pCVar11 = local_e0;
LAB_004ac51f:
          uVar22 = '\0';
          goto LAB_004ac521;
        }
        if (0.0 < *(float *)(iVar7 + 0xbc)) {
          if (*(char *)((int)piVar2 + 99) != '\0') {
            if (*(char *)((int)piVar2 + 0x62) == '\0') {
              puVar19 = *(undefined1 **)(iVar7 + 0xc0);
              local_b0 = puVar19;
              FUN_00438020((int *)piVar2[3]);
              fVar20 = (float)puVar19 * (float)local_b0 + (float)local_b0;
            }
            else {
              local_b0 = (undefined1 *)((float)piVar2[0x19] / 100.0);
              pcVar18 = *(char **)(iVar7 + 0xbc);
              local_b4 = pcVar18;
              FUN_00438020((int *)piVar2[3]);
              fVar20 = ((float)pcVar18 * (float)local_b4 + (float)local_b4) * (float)local_b0;
            }
          }
          local_3c = fVar20 / local_bc;
          in_XMM0._0_12_ = ZEXT812(0x3f000000);
          in_XMM0._12_4_ = 0;
          if (local_3c < 0.5) {
            uVar22 = 0xff;
            uVar21 = '\0';
            pCVar11 = local_e3;
            goto LAB_004ac526;
          }
          in_XMM0._0_8_ = (double)local_3c;
          in_XMM0._8_8_ = 0;
          if (0.8 <= in_XMM0._0_8_) {
            pCVar11 = local_e9;
            goto LAB_004ac51f;
          }
          uVar22 = 0xff;
          pCVar11 = local_e6;
          goto LAB_004ac521;
        }
        puVar19 = *(undefined1 **)(iVar7 + 0xc0);
        in_XMM0 = ZEXT416(puVar19);
        if (0.0 < (float)puVar19) {
          if (*(char *)((int)piVar2 + 99) != '\0') {
            if (*(char *)((int)piVar2 + 0x62) == '\0') {
              local_b0 = puVar19;
              FUN_00438020((int *)piVar2[3]);
              fVar20 = in_XMM0._0_4_ * (float)local_b0 + (float)local_b0;
            }
            else {
              local_b4 = (char *)((float)piVar2[0x19] / 100.0);
              puVar19 = *(undefined1 **)(iVar7 + 0xbc);
              local_b0 = puVar19;
              FUN_00438020((int *)piVar2[3]);
              fVar20 = ((float)puVar19 * (float)local_b0 + (float)local_b0) * (float)local_b4;
            }
          }
          local_3c = fVar20 / local_c0;
          in_XMM0._0_12_ = ZEXT812(0x3f000000);
          in_XMM0._12_4_ = 0;
          if (0.5 <= local_3c) {
            in_XMM0._0_8_ = (double)local_3c;
            in_XMM0._8_8_ = 0;
            if (0.8 <= in_XMM0._0_8_) {
              pCVar11 = (Color3B *)((int)&local_b8 + 1);
              goto LAB_004ac51f;
            }
            uVar22 = 0xff;
            pCVar11 = local_ef;
            goto LAB_004ac521;
          }
          uVar22 = 0xff;
          uVar21 = '\0';
          pCVar11 = local_ec;
          goto LAB_004ac526;
        }
      }
      else {
        if (*(char *)((int)piVar2 + 99) == '\0') {
LAB_004ac229:
          local_3c = 0.0;
        }
        else {
          FUN_004ae5e0((int)piVar2);
          fVar20 = in_XMM0._0_4_;
          if (*(char *)((int)piVar2 + 99) == '\0') goto LAB_004ac229;
          local_3c = *(float *)(piVar2[2] + 200);
        }
        local_3c = fVar20 / local_3c;
        if (1.0 < local_3c) {
          local_3c = 1.0;
        }
        in_XMM0._0_8_ = (double)local_3c;
        in_XMM0._8_8_ = 0;
        if (in_XMM0._0_8_ < 0.8) {
          if (local_3c < 0.5) {
            pCVar11 = local_d7;
            goto LAB_004ac51f;
          }
          uVar22 = 0xff;
          pCVar11 = local_d4;
LAB_004ac521:
          uVar21 = 0xff;
        }
        else {
          uVar22 = 0xff;
          uVar21 = '\0';
          pCVar11 = local_d1;
        }
LAB_004ac526:
        local_110 = 0x4ac528;
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar11,uVar21,uVar22,'\0');
        local_35 = *puVar5;
        local_33 = *(undefined1 *)(puVar5 + 1);
      }
      piVar2 = local_c8;
      puVar9 = (undefined4 *)local_c8[1];
      if ((undefined4 *)local_c8[2] == puVar9) {
        FUN_004adc80(local_c8,puVar9,local_90);
      }
      else {
        FUN_004adbd0(local_90,puVar9,local_90);
        piVar2[1] = piVar2[1] + 0x60;
      }
      FUN_0043bfa0((int)local_90);
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (0xf < local_1c) {
        pvVar12 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar12 = *(void **)((int)local_30[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12)))) {
LAB_004ac603:
          local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar12);
      }
      piVar14 = (int *)(DAT_0065b5cc + 0xd0);
      local_20 = 0;
      local_c4 = local_c4 + 1;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    } while (local_c4 <
             (uint)(*(int *)(*(int *)(*piVar14 + 0x40) + 0x40) -
                    *(int *)(*(int *)(*piVar14 + 0x40) + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
