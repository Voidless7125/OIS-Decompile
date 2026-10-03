#include "../ois_server.exe.h"


undefined4 * __fastcall FUN_0049c1a0(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    FUN_005adb3f((void *)*param_1);
  }
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


void __fastcall FUN_0049c210(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_004025a0((int *)(param_1 + 0xbc));
  FUN_004025a0((int *)(param_1 + 0xb0));
  pvVar1 = *(void **)(param_1 + 0xa4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0xac) - (int)pvVar1) / 0xc) * 0xc)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x98);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0xa0) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x8c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x94) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x80);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x88) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x7c)) {
    pvVar1 = *(void **)(param_1 + 0x68);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x7c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xf;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (0xf < *(uint *)(param_1 + 100)) {
    pvVar1 = *(void **)(param_1 + 0x50);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 100) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0xf;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (0xf < *(uint *)(param_1 + 0x4c)) {
    pvVar1 = *(void **)(param_1 + 0x38);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x4c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pvVar1 = *(void **)(param_1 + 0x20);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x34) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0049c502;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pvVar1 = *(void **)(param_1 + 8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x1c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0049c502:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


void __thiscall FUN_0049c510(void *this,int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  size_t sVar6;
  int *this_00;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  void *local_8;
  
  local_8 = this;
  if ((char)param_2 == '\0') {
    local_c = (int *)((int)this + 0x70);
    piVar1 = (int *)*local_c;
    uVar3 = 0;
    uVar5 = *(int *)((int)this + 0x74) - (int)piVar1 >> 2;
    this_00 = local_c;
    if (uVar5 != 0) {
      do {
        puVar4 = (undefined4 *)piVar1[uVar3];
        this_00 = (int *)((int)this + 0x70);
        if (puVar4[5] == *(int *)(param_1 + 0x14)) {
          local_10 = *(int **)((int)this + 0x74);
          param_2 = puVar4;
          puVar2 = FUN_00414000(&local_14,(int *)&param_2,piVar1,local_10);
          piVar1 = (int *)*puVar2;
          if (piVar1 != local_10) {
            sVar6 = *(int *)((int)local_8 + 0x74) - (int)local_10;
            memmove(piVar1,local_10,sVar6);
            *(size_t *)((int)local_8 + 0x74) = sVar6 + (int)piVar1;
            this_00 = local_c;
          }
          goto LAB_0049c62c;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  else {
    piVar1 = *(int **)((int)this + 0x88);
    this_00 = (int *)((int)this + 0x88);
    uVar3 = 0;
    uVar5 = *(int *)((int)this + 0x8c) - (int)piVar1 >> 2;
    local_10 = this_00;
    if (uVar5 != 0) {
      do {
        puVar4 = (undefined4 *)piVar1[uVar3];
        if (puVar4[5] == *(int *)(param_1 + 0x14)) {
          local_c = *(int **)((int)this + 0x8c);
          param_2 = puVar4;
          puVar2 = FUN_00414000(&local_14,(int *)&param_2,piVar1,local_c);
          piVar1 = (int *)*puVar2;
          if (piVar1 != local_c) {
            sVar6 = *(int *)((int)local_8 + 0x8c) - (int)local_c;
            memmove(piVar1,local_c,sVar6);
            *(size_t *)((int)local_8 + 0x8c) = sVar6 + (int)piVar1;
            this_00 = local_10;
          }
LAB_0049c62c:
          if (puVar4 != (undefined4 *)0x0) {
            FUN_0049c1a0(puVar4);
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  piVar1 = (int *)this_00[1];
  if ((int *)this_00[2] == piVar1) {
    FUN_00414080(this_00,piVar1,&param_1);
    return;
  }
  *piVar1 = param_1;
  this_00[1] = this_00[1] + 4;
  return;
}


void __thiscall FUN_0049c670(void *this,byte *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte **ppbVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  byte *in_stack_ffffffac;
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bad97;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < in_stack_0000001c) {
    piVar1 = (int *)((int)this + 0x7c);
    piVar5 = (int *)*piVar1;
    uVar10 = 0;
    iVar9 = in_stack_0000001c;
    if (*(int *)((int)this + 0x80) - (int)piVar5 >> 2 != 0) {
      do {
        iVar9 = *piVar5;
        ppbVar3 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar3 = (byte **)param_1;
        }
        pbVar8 = (byte *)(iVar9 + 0x18);
        if (0xf < *(uint *)(iVar9 + 0x2c)) {
          pbVar8 = *(byte **)(iVar9 + 0x18);
        }
        uVar4 = FUN_004031f0(pbVar8,*(uint *)(iVar9 + 0x28),(byte *)ppbVar3,in_stack_00000014);
        if ((char)uVar4 != '\0') {
          piVar1 = (int *)(*(int *)(*piVar1 + uVar10 * 4) + 0x10);
          *piVar1 = *piVar1 + in_stack_0000001c;
          goto LAB_0049c808;
        }
        uVar10 = uVar10 + 1;
        piVar5 = piVar5 + 1;
        iVar9 = in_stack_0000001c;
      } while (uVar10 < (uint)(*(int *)((int)this + 0x80) - *piVar1 >> 2));
    }
    FUN_004024e0(&stack0xffffffac,&param_1);
    piVar5 = (int *)FUN_004a8380(in_stack_ffffffac);
    local_1c = (int *)FUN_005adb0f(0x34);
    local_8._0_1_ = 1;
    local_1c = FUN_0049bb20(local_1c,*piVar5);
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c[1] = 1;
    local_1c[2] = 1;
    local_1c[3] = 1;
    local_18 = local_1c;
    piVar6 = (int *)FUN_005adb0f(0x2c);
    piVar5 = piVar6 + 2;
    piVar5[0] = 1;
    piVar5[1] = 1;
    *piVar6 = iVar9;
    piVar6[1] = 1;
    piVar6[4] = 0;
    piVar6[6] = 0x3c;
    piVar6[7] = 5;
    piVar6[8] = 3;
    piVar6[9] = 3;
    piVar6[10] = 0;
    iVar7 = FUN_00591370(piVar5);
    piVar6[5] = iVar7;
    iVar7 = (piVar6[7] * iVar7) / 2;
    piVar6[8] = iVar7;
    piVar6[9] = iVar7;
    *local_18 = (int)piVar6;
    local_18[4] = iVar9;
    puVar2 = *(undefined4 **)((int)this + 0x80);
    if (*(undefined4 **)((int)this + 0x84) == puVar2) {
      FUN_00414080(piVar1,puVar2,&local_1c);
    }
    else {
      *puVar2 = local_18;
      *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 4;
    }
  }
LAB_0049c808:
  if (0xf < in_stack_00000018) {
    pbVar8 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar8 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar8))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0049c860(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    uVar3 = 0;
    uVar5 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
    if (uVar5 != 0) {
      while (iVar4 = *(int *)(*(int *)((int)this + 0x70) + uVar3 * 4),
            *(int *)(iVar4 + 0x14) != param_1) {
        uVar3 = uVar3 + 1;
        if (uVar5 <= uVar3) {
          return;
        }
      }
      piVar1 = (int *)(iVar4 + 0x10);
      *piVar1 = *piVar1 - param_2;
      iVar4 = *(int *)((int)this + 0x70);
      iVar2 = *(int *)(iVar4 + uVar3 * 4);
      if (*(int *)(iVar2 + 0x10) < 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        iVar4 = *(int *)((int)this + 0x70);
      }
      *(undefined4 *)(*(int *)(uVar3 * 4 + iVar4) + 0x30) = 0xffffffff;
    }
  }
  return;
}


void __thiscall FUN_0049c8d0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
  if (uVar3 != 0) {
    do {
      piVar2 = *(int **)(*(int *)((int)this + 0x70) + uVar1 * 4);
      if (piVar2[5] == param_1) goto LAB_0049c928;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = 0;
  uVar3 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2;
  if (uVar3 != 0) {
    while (piVar2 = *(int **)(*(int *)((int)this + 0x88) + uVar1 * 4), piVar2[5] != param_1) {
      uVar1 = uVar1 + 1;
      if (uVar3 <= uVar1) {
        return;
      }
    }
LAB_0049c928:
    *(int *)(*piVar2 + 0x24) = *(int *)(*piVar2 + 0x24) - param_2;
  }
  return;
}


undefined4 __thiscall FUN_0049c940(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x88) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x14) == param_1) {
        return *(undefined4 *)(iVar1 + 0x10);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


uint __thiscall FUN_0049c980(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = 0;
  uVar4 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x88) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        piVar1 = (int *)*piVar1;
        iVar2 = piVar1[7];
        iVar5 = iVar2 + -1;
        if (piVar1[9] / piVar1[5] < iVar2) {
          iVar5 = piVar1[9] / piVar1[5];
        }
        return CONCAT31((int3)((uint)(iVar2 / 2) >> 8),
                        (byte)((uint)((iVar5 - iVar2 / 2) * piVar1[1] + *piVar1) >> 0x1f)) ^ 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return uVar3 & 0xffffff00;
}


void __thiscall FUN_0049c9f0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005bade0;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar11 = 0;
  puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar3 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar9 >> 2;
  if (uVar3 != 0) {
    do {
      if (*(int *)*puVar9 == param_2) break;
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar11 < uVar3);
  }
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  uVar3 = 0;
  local_14 = 0;
  uStack_13 = 0;
  piVar4 = *(int **)((int)this + 0x88);
  uVar11 = *(int *)((int)this + 0x8c) - (int)piVar4 >> 2;
  if (uVar11 != 0) {
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1[5] == param_2) {
        if (piVar1 != (int *)0x0) {
          local_58 = 0;
          iVar13 = *(int *)(*piVar1 + 0x24);
          iVar7 = -1;
          puStack_20 = &stack0xfffffffc;
          puVar2 = &stack0xfffffffc;
          if (0 < param_3) goto LAB_0049cb58;
          goto LAB_0049cda8;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar11);
  }
  FUN_00591070("WORLD","No valid cost for this item.");
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  if (0xf < uStack_28) {
    pvVar10 = local_3c;
    if ((0xfff < uStack_28 + 1) &&
       (pvVar10 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))
       )) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  goto LAB_0049ce3c;
LAB_0049cb58:
  do {
    puStack_20 = puVar2;
    piVar4 = (int *)*piVar1;
    if (piVar4[5] == 0) {
      iVar12 = piVar4[7];
      iVar8 = 0;
    }
    else {
      iVar5 = iVar13 / piVar4[5];
      iVar12 = piVar4[7];
      iVar8 = iVar12 + -1;
      if (iVar5 < iVar12) {
        iVar8 = iVar5;
      }
    }
    iVar5 = 0;
    if (-1 < iVar8 + -1) {
      iVar5 = iVar8 + -1;
    }
    iVar12 = piVar4[1] * (iVar5 - iVar12 / 2) + *piVar4;
    if (iVar12 == 0) {
      iVar12 = 1;
    }
    if ((iVar12 == iVar7) || (iVar7 == -1)) {
      local_58 = local_58 + 1;
      if (iVar7 != -1) {
        iVar12 = iVar7;
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`0%s `7@ `%c%d`$c `%%x %d\n");
      local_14 = 1;
      puVar9 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar9 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_3c,puVar9,puVar6[4]);
      local_14 = 0;
      if (0xf < local_40) {
        pvVar10 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar10 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) goto LAB_0049cd98;
        FUN_005adb3f(pvVar10);
      }
      local_58 = 1;
    }
    param_3 = param_3 + -1;
    iVar7 = iVar13 + -1;
    iVar13 = 0;
    if (-1 < iVar7) {
      iVar13 = iVar7;
    }
    iVar7 = iVar12;
    puVar2 = puStack_20;
  } while (0 < param_3);
  if (0 < local_58) {
    puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`0%s `7@ `%c%d`$c `%%x %d\n");
    local_14 = 2;
    puVar9 = puVar6;
    if (0xf < (uint)puVar6[5]) {
      puVar9 = (undefined4 *)*puVar6;
    }
    FUN_00403640(&local_3c,puVar9,puVar6[4]);
    local_14 = 0;
    if (0xf < local_40) {
      pvVar10 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar10 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) {
LAB_0049cd98:
        local_14 = 0;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
  }
LAB_0049cda8:
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"\n`0Total: `$%dc\n");
  local_14 = 3;
  puVar9 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar9 = (undefined4 *)*puVar6;
  }
  FUN_00403640(&local_3c,puVar9,puVar6[4]);
  if (0xf < local_40) {
    pvVar10 = local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pvVar10 = *(void **)((int)local_54[0] + -4),
       0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_3c;
  param_1[1] = uStack_38;
  param_1[2] = uStack_34;
  param_1[3] = uStack_30;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_28,local_2c);
LAB_0049ce3c:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined4 __thiscall FUN_0049ce60(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte **ppbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int local_8;
  
  pbVar2 = param_1;
  uVar6 = 0;
  local_8 = *(int *)((int)this + 0x7c);
  uVar8 = *(int *)((int)this + 0x80) - local_8 >> 2;
  if (uVar8 != 0) {
    do {
      iVar1 = *(int *)(local_8 + uVar6 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar2;
      }
      pbVar5 = (byte *)(iVar1 + 0x18);
      if (0xf < *(uint *)(iVar1 + 0x2c)) {
        pbVar5 = *(byte **)(iVar1 + 0x18);
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x28),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar3 != '\0') goto LAB_0049cf41;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  local_8 = *(int *)((int)this + 0x70);
  uVar6 = 0;
  uVar8 = *(int *)((int)this + 0x74) - local_8 >> 2;
  if (uVar8 != 0) {
    do {
      iVar1 = *(int *)(local_8 + uVar6 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar2;
      }
      pbVar5 = (byte *)(iVar1 + 0x18);
      if (0xf < *(uint *)(iVar1 + 0x2c)) {
        pbVar5 = *(byte **)(iVar1 + 0x18);
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x28),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar3 != '\0') goto LAB_0049cf41;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  uVar7 = 0;
LAB_0049cf16:
  if (0xf < in_stack_00000018) {
    pbVar5 = pbVar2;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar5 = *(byte **)(pbVar2 + -4), (byte *)0x1f < pbVar2 + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  return uVar7;
LAB_0049cf41:
  uVar7 = *(undefined4 *)(*(int *)(local_8 + uVar6 * 4) + 0x10);
  goto LAB_0049cf16;
}


undefined4 __thiscall FUN_0049cf60(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = *(int *)((int)this + 0x80) - *(int *)((int)this + 0x7c) >> 2;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x7c) + uVar1 * 4);
      if (*(int *)(iVar2 + 0x14) == param_1) goto LAB_0049cfb6;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = 0;
  uVar3 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x70) + uVar1 * 4);
      if (*(int *)(iVar2 + 0x14) == param_1) {
LAB_0049cfb6:
        return *(undefined4 *)(iVar2 + 0x10);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  return 0;
}


void __thiscall FUN_0049cfc0(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 == '\0') {
    if (*(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2 != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + uVar2 * 4) + 0x10) = 0;
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + iVar1) + 0x30) = 0xffffffff;
      } while (uVar2 < (uint)(*(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2));
    }
    uVar2 = 0;
    if (*(int *)((int)this + 0x80) - *(int *)((int)this + 0x7c) >> 2 != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x7c) + uVar2 * 4) + 0x10) = 0;
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x7c) + iVar1) + 0x30) = 0xffffffff;
      } while (uVar2 < (uint)(*(int *)((int)this + 0x80) - *(int *)((int)this + 0x7c) >> 2));
    }
  }
  else if (*(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2 != 0) {
    do {
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x88) + uVar2 * 4) + 0x10) = 0;
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x88) + iVar1) + 0x30) = 0xffffffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2));
    return;
  }
  return;
}


int __thiscall FUN_0049d0b0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar3 = 0;
  uVar5 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
  if (uVar5 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x70) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        if (piVar1[0xc] != -1) {
          return piVar1[0xc];
        }
        uVar3 = 0;
        puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x84);
        uVar5 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar6 >> 2;
        if (uVar5 != 0) goto LAB_0049d110;
        goto LAB_0049d11e;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  return -1;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 1;
    if (uVar5 <= uVar3) break;
LAB_0049d110:
    piVar4 = (int *)*puVar6;
    if (*piVar4 == piVar1[5]) goto LAB_0049d120;
  }
LAB_0049d11e:
  piVar4 = (int *)0x0;
LAB_0049d120:
  if (piVar4[0x16] < 0) {
    return piVar4[0x16];
  }
  piVar1 = (int *)*piVar1;
  iVar2 = piVar1[7];
  iVar7 = iVar2 + -1;
  if (piVar1[9] / piVar1[5] < iVar2) {
    iVar7 = piVar1[9] / piVar1[5];
  }
  return (iVar7 - iVar2 / 2) * piVar1[1] + *piVar1;
}


int __thiscall FUN_0049d160(void *this,int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *in_stack_ffffffa4;
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bae20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar8 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar5 >> 2;
  if (uVar8 != 0) {
    do {
      piVar1 = (int *)*puVar5;
      if (*piVar1 == param_1) goto LAB_0049d1c0;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < uVar8);
  }
  piVar1 = (int *)0x0;
LAB_0049d1c0:
  FUN_004024e0(auStack_44,(undefined4 *)piVar1[7]);
  if (param_2 == '\0') {
    local_8 = 1;
    FUN_004024e0(&stack0xffffffa4,this);
    local_8 = 0xffffffff;
    iVar2 = FUN_0040fe10(in_stack_ffffffa4);
  }
  else {
    local_8 = 0;
    FUN_004024e0(&stack0xffffffa4,this);
    local_8 = 0xffffffff;
    iVar2 = FUN_0040ff50(in_stack_ffffffa4);
  }
  if (iVar2 == -1) {
    uVar6 = 0;
    uVar8 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
    if (uVar8 != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x70) + uVar6 * 4);
        if (piVar1[5] == param_1) {
          if (piVar1[0xc] != -1) {
            ExceptionList = local_10;
            return piVar1[0xc];
          }
          if (param_2 != '\0') {
            uStack_34 = 0x49d26d;
            piVar3 = FUN_004a84a0(piVar1[5]);
            if (piVar3[0x16] < 0) {
              ExceptionList = local_10;
              return piVar3[0x16];
            }
            piVar1 = (int *)*piVar1;
            iVar2 = piVar1[7];
            iVar4 = iVar2 + -1;
            if (piVar1[9] / piVar1[5] < iVar2) {
              iVar4 = piVar1[9] / piVar1[5];
            }
            ExceptionList = local_10;
            return (iVar4 - iVar2 / 2) * piVar1[1] + *piVar1;
          }
          piVar1 = (int *)*piVar1;
          iVar2 = piVar1[7];
          iVar4 = iVar2 + -1;
          if (piVar1[9] / piVar1[5] < iVar2) {
            iVar4 = piVar1[9] / piVar1[5];
          }
          iVar7 = 0;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          ExceptionList = local_10;
          return (iVar7 - iVar2 / 2) * piVar1[1] + *piVar1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
    iVar2 = -1;
  }
  ExceptionList = local_10;
  return iVar2;
}


int __thiscall FUN_0049d2f0(void *this,int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  byte *in_stack_ffffffa8;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bae50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar9 = 0;
  puVar8 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar6 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar8 >> 2;
  if (uVar6 != 0) {
    do {
      piVar3 = (int *)*puVar8;
      if (*piVar3 == param_1) goto LAB_0049d350;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < uVar6);
  }
  piVar3 = (int *)0x0;
LAB_0049d350:
  FUN_004024e0(auStack_40,(undefined4 *)piVar3[7]);
  if (param_3 == '\0') {
    local_8 = 1;
    FUN_004024e0(&stack0xffffffa8,this);
    local_8 = 0xffffffff;
    iVar4 = FUN_0040fe10(in_stack_ffffffa8);
  }
  else {
    local_8 = 0;
    FUN_004024e0(&stack0xffffffa8,this);
    local_8 = 0xffffffff;
    iVar4 = FUN_0040ff50(in_stack_ffffffa8);
  }
  if (iVar4 == -1) {
    uVar6 = 0;
    piVar3 = *(int **)((int)this + 0x70);
    uVar9 = *(int *)((int)this + 0x74) - (int)piVar3 >> 2;
    if (uVar9 != 0) {
      do {
        if (*(int *)(piVar3[uVar6] + 0x14) == param_1) {
          iVar4 = *(int *)(piVar3[uVar6] + 0x30);
          if (iVar4 != -1) {
            ExceptionList = local_10;
            return iVar4 * param_2;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    iVar4 = 0;
    if (param_3 == '\0') {
      uVar6 = 0;
      if (uVar9 != 0) {
        do {
          piVar1 = (int *)*piVar3;
          if (piVar1[5] == param_1) {
            if (piVar1 == (int *)0x0) {
              ExceptionList = local_10;
              return 0;
            }
            piVar1 = (int *)*piVar1;
            _param_3 = param_2;
            iVar10 = piVar1[9];
            if (0 < param_2) {
              iVar2 = piVar1[7];
              do {
                if (piVar1[5] == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar5 = iVar10 / piVar1[5];
                  iVar7 = iVar2 + -1;
                  if (iVar5 < iVar2) {
                    iVar7 = iVar5;
                  }
                }
                iVar5 = 0;
                if (-1 < iVar7 + -1) {
                  iVar5 = iVar7 + -1;
                }
                iVar7 = (iVar5 - iVar2 / 2) * piVar1[1] + *piVar1;
                if (iVar7 < 1) {
                  iVar7 = 1;
                }
                iVar4 = iVar4 + iVar7;
                _param_3 = _param_3 + -1;
                iVar7 = iVar10 + -1;
                iVar10 = 0;
                if (-1 < iVar7) {
                  iVar10 = iVar7;
                }
              } while (0 < _param_3);
            }
            ExceptionList = local_10;
            return iVar4;
          }
          uVar6 = uVar6 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar6 < uVar9);
      }
      ExceptionList = local_10;
      return 0;
    }
    piVar3 = FUN_004a84a0(param_1);
    iVar4 = piVar3[0x16];
    if (-1 < iVar4) {
      uStack_34 = 0x49d401;
      iVar4 = FUN_0049d160(this,param_1,'\x01');
      ExceptionList = local_10;
      return iVar4 * param_2;
    }
  }
  ExceptionList = local_10;
  return iVar4 * param_2;
}


int __thiscall FUN_0049d510(void *this,int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2;
  if (uVar6 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x88) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        if (piVar1[0xc] != -1) {
          return piVar1[0xc];
        }
        piVar1 = (int *)*piVar1;
        iVar4 = piVar1[9] / piVar1[5];
        if (param_2 != '\0') {
          iVar2 = piVar1[7];
          iVar5 = iVar2 + -1;
          if (iVar4 < iVar2) {
            iVar5 = iVar4;
          }
          return (iVar5 - iVar2 / 2) * piVar1[1] + *piVar1;
        }
        iVar2 = piVar1[7];
        iVar5 = iVar2 + -1;
        if (iVar4 < iVar2) {
          iVar5 = iVar4;
        }
        iVar4 = 0;
        if (-1 < iVar5 + -1) {
          iVar4 = iVar5 + -1;
        }
        return (iVar4 - iVar2 / 2) * piVar1[1] + *piVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  return -1;
}


int __thiscall FUN_0049d5b0(void *this,int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = 0;
  iVar8 = 0;
  if (param_3 == '\0') {
    uVar5 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2;
    if (uVar5 != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x88) + uVar3 * 4);
        if (piVar1[5] == param_1) {
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          piVar1 = (int *)*piVar1;
          param_1 = param_2;
          iVar7 = piVar1[9];
          if (0 < param_2) {
            iVar2 = piVar1[7];
            do {
              if (piVar1[5] == 0) {
                iVar6 = 0;
              }
              else {
                iVar4 = iVar7 / piVar1[5];
                iVar6 = iVar2 + -1;
                if (iVar4 < iVar2) {
                  iVar6 = iVar4;
                }
              }
              iVar4 = 0;
              if (-1 < iVar6 + -1) {
                iVar4 = iVar6 + -1;
              }
              param_1 = param_1 + -1;
              iVar8 = iVar8 + (iVar4 - iVar2 / 2) * piVar1[1] + *piVar1;
              iVar6 = iVar7 + -1;
              iVar7 = 0;
              if (-1 < iVar6) {
                iVar7 = iVar6;
              }
            } while (0 < param_1);
          }
          return iVar8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    return 0;
  }
  uVar5 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88) >> 2;
  if (uVar5 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x88) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        iVar8 = piVar1[0xc];
        if (iVar8 == -1) {
          piVar1 = (int *)*piVar1;
          iVar8 = piVar1[7];
          iVar7 = iVar8 + -1;
          if (piVar1[9] / piVar1[5] < iVar8) {
            iVar7 = piVar1[9] / piVar1[5];
          }
          return ((iVar7 - iVar8 / 2) * piVar1[1] + *piVar1) * param_2;
        }
        goto LAB_0049d5f0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  iVar8 = -1;
LAB_0049d5f0:
  return iVar8 * param_2;
}


void __thiscall FUN_0049d6f0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *in_stack_ffffff44;
  int *local_70;
  int local_68;
  int local_64;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bae98;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar10 = 0;
  local_68 = param_3;
  puVar8 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar3 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar8 >> 2;
  if (uVar3 != 0) {
    do {
      local_70 = (int *)*puVar8;
      if (*local_70 == param_2) goto LAB_0049d776;
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar10 < uVar3);
  }
  local_70 = (int *)0x0;
LAB_0049d776:
  FUN_004024e0(&stack0xffffff5c,(undefined4 *)local_70[7]);
  local_14 = 0;
  FUN_004024e0(&stack0xffffff44,this);
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  iVar4 = FUN_0040ff50(in_stack_ffffff44);
  if (iVar4 == -1) {
    local_2c = 0;
    uStack_28 = 0xf;
    local_3c = (void *)((uint)local_3c & 0xffffff00);
    uVar3 = 0;
    local_14._0_1_ = 1;
    local_14._1_3_ = 0;
    piVar5 = *(int **)((int)this + 0x70);
    uVar10 = *(int *)((int)this + 0x74) - (int)piVar5 >> 2;
    if (uVar10 != 0) {
      do {
        piVar1 = (int *)*piVar5;
        if (piVar1[5] == param_2) {
          if (piVar1 != (int *)0x0) {
            iVar12 = -1;
            local_64 = 0;
            iVar4 = *(int *)(*piVar1 + 0x24);
            if (0 < param_3) goto LAB_0049d8a4;
            goto LAB_0049daf8;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 < uVar10);
    }
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    if (0xf < uStack_28) {
      pvVar9 = local_3c;
      if ((0xfff < uStack_28 + 1) &&
         (pvVar9 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar9))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
  }
  else {
    FUN_00591e00((undefined1 *)param_1,"`7%s x%d @ `%c%dc");
  }
  goto LAB_0049db8c;
LAB_0049d8a4:
  do {
    iVar6 = *(int *)(*piVar1 + 0x14);
    iVar2 = *(int *)(*piVar1 + 0x1c);
    if (iVar6 == 0) {
      iVar11 = 0;
    }
    else {
      iVar6 = iVar4 / iVar6;
      iVar11 = iVar2 + -1;
      if (iVar6 < iVar2) {
        iVar11 = iVar6;
      }
    }
    iVar6 = 0;
    if (-1 < iVar11 + -1) {
      iVar6 = iVar11 + -1;
    }
    iVar6 = ((int *)*piVar1)[1] * (iVar6 - iVar2 / 2) + *(int *)*piVar1;
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    if ((iVar6 == iVar12) || (iVar12 == -1)) {
      local_64 = local_64 + 1;
      if (iVar12 != -1) {
        iVar6 = iVar12;
      }
    }
    else {
      puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`0%s `7@ `%c%d`$c `%%x %d\n");
      local_14._0_1_ = 2;
      puVar8 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar8 = (undefined4 *)*puVar7;
      }
      FUN_00403640(&local_3c,puVar8,puVar7[4]);
      local_14._0_1_ = 1;
      if (0xf < local_40) {
        pvVar9 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar9 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9)))) goto LAB_0049dae8;
        FUN_005adb3f(pvVar9);
      }
      local_64 = 1;
    }
    local_68 = local_68 + -1;
    iVar12 = iVar4 + -1;
    iVar4 = 0;
    if (-1 < iVar12) {
      iVar4 = iVar12;
    }
    iVar12 = iVar6;
  } while (0 < local_68);
  if (0 < local_64) {
    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"`0%s `7@ `%c%d`$c `%%x %d\n");
    local_14._0_1_ = 3;
    puVar8 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar8 = (undefined4 *)*puVar7;
    }
    FUN_00403640(&local_3c,puVar8,puVar7[4]);
    local_14._0_1_ = 1;
    if (0xf < local_40) {
      pvVar9 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar9 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9)))) {
LAB_0049dae8:
        local_14._0_1_ = 1;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
  }
LAB_0049daf8:
  puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_54,"\n`0Total: `$%dc\n");
  local_14._0_1_ = 4;
  puVar8 = puVar7;
  if (0xf < (uint)puVar7[5]) {
    puVar8 = (undefined4 *)*puVar7;
  }
  FUN_00403640(&local_3c,puVar8,puVar7[4]);
  if (0xf < local_40) {
    pvVar9 = local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pvVar9 = *(void **)((int)local_54[0] + -4),
       0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_3c;
  param_1[1] = uStack_38;
  param_1[2] = uStack_34;
  param_1[3] = uStack_30;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_28,local_2c);
LAB_0049db8c:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_0049dbb0(void *this,undefined1 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005baee1;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  bVar3 = true;
  FUN_00403640(param_1,"`%Available:\n\n",0xe);
  puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  puVar1 = *(undefined4 **)(DAT_0065b5cc + 0x88);
joined_r0x0049dc3a:
  if (puVar9 == puVar1) {
    ExceptionList = local_10;
    __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
  piVar2 = (int *)*puVar9;
  uVar6 = 0;
  piVar4 = *(int **)((int)this + 0x7c);
  uVar11 = *(int *)((int)this + 0x80) - (int)piVar4 >> 2;
  if (uVar11 != 0) {
    do {
      iVar10 = *piVar4;
      if (*(int *)(iVar10 + 0x14) == *piVar2) goto LAB_0049dc98;
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar6 < uVar11);
  }
  uVar6 = 0;
  piVar4 = *(int **)((int)this + 0x70);
  uVar11 = *(int *)((int)this + 0x74) - (int)piVar4 >> 2;
  if (uVar11 != 0) {
    do {
      iVar10 = *piVar4;
      if (*(int *)(iVar10 + 0x14) == *piVar2) goto LAB_0049dc98;
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar6 < uVar11);
  }
  goto LAB_0049dd9a;
LAB_0049dc98:
  if (0 < *(int *)(iVar10 + 0x10)) {
    if (!bVar3) {
      FUN_00403640(param_1,&DAT_005e75f8,1);
    }
    iVar10 = *piVar2;
    FUN_0049d160(this,iVar10,'\0');
    uVar6 = 0;
    puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x84);
    uVar11 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar7 >> 2;
    if (uVar11 != 0) {
      do {
        if (*(int *)*puVar7 == iVar10) break;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar11);
    }
    FUN_0049d160(this,*piVar2,'\x01');
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,"`7%s x%d @ `%c%dc");
    local_8 = 1;
    puVar7 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar7 = (undefined4 *)*puVar5;
    }
    FUN_00403640(param_1,puVar7,puVar5[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      pvVar8 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar8 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    bVar3 = false;
  }
LAB_0049dd9a:
  puVar9 = puVar9 + 1;
  goto joined_r0x0049dc3a;
}


void __thiscall FUN_0049dde0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint uVar11;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  local_1c = ExceptionList;
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005baf31;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = 0;
  puVar10 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  puVar1 = *(undefined4 **)(DAT_0065b5cc + 0x88);
  do {
    if (puVar10 == puVar1) {
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    piVar2 = (int *)*puVar10;
    uVar6 = FUN_0049e520(this,*piVar2);
    if ((char)uVar6 != '\0') {
      iVar3 = *piVar2;
      FUN_0049d0b0(this,iVar3);
      FUN_0049d160(this,iVar3,'\x01');
      uVar6 = 0;
      puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x84);
      uVar11 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar7 >> 2;
      if (uVar11 != 0) {
        do {
          if (*(int *)*puVar7 == iVar3) break;
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 < uVar11);
      }
      piVar8 = (int *)FUN_00591e00((undefined1 *)local_3c,"`7%s @ ~`%c%dc");
      local_14 = 1;
      piVar2 = (int *)param_1[1];
      if ((int *)param_1[2] == piVar2) {
        FUN_004036d0(param_1,piVar2,piVar8);
      }
      else {
        piVar2[4] = 0;
        piVar2[5] = 0;
        iVar3 = piVar8[1];
        iVar4 = piVar8[2];
        iVar5 = piVar8[3];
        *piVar2 = *piVar8;
        piVar2[1] = iVar3;
        piVar2[2] = iVar4;
        piVar2[3] = iVar5;
        iVar3 = piVar8[5];
        piVar2[4] = piVar8[4];
        piVar2[5] = iVar3;
        piVar8[4] = 0;
        piVar8[5] = 0xf;
        *(undefined1 *)piVar8 = 0;
        param_1[1] = param_1[1] + 0x18;
      }
      local_14 = local_14 & 0xffffff00;
      if (0xf < local_28) {
        pvVar9 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar9 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
    }
    puVar10 = puVar10 + 1;
  } while( true );
}


void __thiscall FUN_0049dfe0(void *this,undefined1 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int *piVar11;
  void **in_stack_ffffff58;
  void *local_60 [5];
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
  
  puStack_c = &LAB_005bafa2;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  bVar2 = false;
  piVar8 = *(int **)((int)this + 0x98);
  if ((uint)((int)piVar8 - *(int *)((int)this + 0x94)) < 4) {
    FUN_00403640(param_1,"`7No contracts available to you at present.",0x2b);
    piVar8 = *(int **)((int)this + 0x98);
  }
  piVar11 = *(int **)((int)this + 0x94);
  bVar1 = true;
  do {
    if (piVar11 == piVar8) {
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar6 = *piVar11;
    if (!bVar1) {
      FUN_00403640(param_1,&DAT_005e75f8,1);
    }
    FUN_004024e0(&stack0xffffff58,*(undefined4 **)(iVar6 + 0x58));
    iVar4 = FUN_004a8380((byte *)in_stack_ffffff58);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)(iVar6 + 0x38));
    iVar5 = FUN_004a6de0((byte *)in_stack_ffffff58);
    FUN_004024e0(&stack0xffffff58,(undefined4 *)(iVar6 + 0x20));
    iVar6 = FUN_004a6de0((byte *)in_stack_ffffff58);
    if ((iVar5 == 0) || (iVar6 == 0)) {
      FUN_00403640(param_1,"[invalid contract]",0x12);
    }
    else {
      if (*(int *)(iVar6 + 0x24) != *(int *)(DAT_0065b5cc + 0xd8)) {
        FUN_00591e00((undefined1 *)local_60," (%s)");
        local_8._0_1_ = 1;
        local_8._1_3_ = 0;
        bVar2 = true;
      }
      FUN_004024e0(local_30,*(undefined4 **)(iVar4 + 0x1c));
      local_8 = 2;
      in_stack_ffffff58 = local_48;
      puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)in_stack_ffffff58,"`%%%s`7, %s -> %s%s");
      local_8._0_1_ = 3;
      puVar9 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar9 = (undefined4 *)*puVar7;
      }
      FUN_00403640(param_1,puVar9,puVar7[4]);
      local_8._0_1_ = 2;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 2;
      if (0xf < local_34) {
        pvVar10 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar10 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) goto LAB_0049e2cb;
        FUN_005adb3f(pvVar10);
      }
      local_8._0_1_ = 1;
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      if (0xf < local_1c) {
        pvVar10 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar10 = *(void **)((int)local_30[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10)))) goto LAB_0049e2cb;
        FUN_005adb3f(pvVar10);
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      if ((bVar2) && (bVar2 = false, 0xf < local_4c)) {
        pvVar10 = local_60[0];
        if ((0xfff < local_4c + 1) &&
           (pvVar10 = *(void **)((int)local_60[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar10)))) {
LAB_0049e2cb:
          local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
    }
    piVar11 = piVar11 + 1;
    bVar1 = false;
  } while( true );
}


void __thiscall FUN_0049e2e0(void *this,undefined1 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  void **in_stack_ffffff78;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb00a;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffff78,this);
  iVar3 = FUN_004a6de0((byte *)in_stack_ffffff78);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  bVar2 = false;
  piVar7 = *(int **)(iVar3 + 0x40c);
  if ((uint)((int)piVar7 - *(int *)(iVar3 + 0x408)) < 4) {
    FUN_00403640(param_1,"`7No passengers waiting at this station.",0x28);
    piVar7 = *(int **)(iVar3 + 0x40c);
  }
  piVar8 = *(int **)(iVar3 + 0x408);
  bVar1 = true;
  do {
    if (piVar8 == piVar7) {
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar3 = *piVar8;
    if (!bVar1) {
      FUN_00403640(param_1,&DAT_005e75f8,1);
    }
    FUN_004024e0(&stack0xffffff78,(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x18));
    iVar3 = FUN_004a6de0((byte *)in_stack_ffffff78);
    if (*(int *)(iVar3 + 0x24) != *(int *)(DAT_0065b5cc + 0xd8)) {
      FUN_00591e00((undefined1 *)local_48," (%s)");
      local_8 = 1;
      bVar2 = true;
    }
    in_stack_ffffff78 = local_30;
    puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)in_stack_ffffff78,"`7%s -> %s%s, `$%dc");
    local_8 = 2;
    puVar5 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar5 = (undefined4 *)*puVar4;
    }
    FUN_00403640(param_1,puVar5,puVar4[4]);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_1c) {
      pvVar6 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar6 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) goto LAB_0049e4f5;
      FUN_005adb3f(pvVar6);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    local_8 = 0;
    if ((bVar2) && (bVar2 = false, 0xf < local_34)) {
      pvVar6 = local_48[0];
      if ((0xfff < local_34 + 1) &&
         (pvVar6 = *(void **)((int)local_48[0] + -4),
         0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6)))) {
LAB_0049e4f5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    piVar8 = piVar8 + 1;
    bVar1 = false;
  } while( true );
}


uint __thiscall FUN_0049e520(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte *in_stack_ffffffac;
  undefined1 auStack_3c [24];
  uint uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb038;
  local_10 = ExceptionList;
  uStack_24 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = 0;
  puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar3 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar4 >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = (int *)*puVar4;
      if (*piVar1 == param_1) goto LAB_0049e577;
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 < uVar3);
  }
  piVar1 = (int *)0x0;
LAB_0049e577:
  FUN_004024e0(auStack_3c,(undefined4 *)piVar1[7]);
  local_8 = 0;
  FUN_004024e0(&stack0xffffffac,this);
  local_8 = 0xffffffff;
  iVar2 = FUN_0040fe10(in_stack_ffffffac);
  if (iVar2 != -1) {
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  uVar3 = 0;
  piVar1 = *(int **)((int)this + 0x70);
  uVar6 = *(int *)((int)this + 0x74) - (int)piVar1 >> 2;
  if (uVar6 != 0) {
    do {
      if (((int *)*piVar1)[5] == param_1) {
        piVar1 = *(int **)*piVar1;
        iVar2 = piVar1[7];
        iVar5 = iVar2 + -1;
        if (piVar1[9] / piVar1[5] < iVar2) {
          iVar5 = piVar1[9] / piVar1[5];
        }
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)(iVar2 / 2) >> 8),
                        (byte)((uint)((iVar5 - iVar2 / 2) * piVar1[1] + *piVar1) >> 0x1f)) ^ 1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar3 < uVar6);
  }
  ExceptionList = local_10;
  return (uint)piVar1 & 0xffffff00;
}


void __fastcall FUN_0049e640(byte *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_c;
  uint local_8;
  
  FUN_0049cfc0(param_1,'\0');
  FUN_0049cfc0(this,'\x01');
  iVar2 = *(int *)(param_1 + 0x70);
  local_c = 0;
  if (*(int *)(param_1 + 0x74) - iVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_c * 4 + iVar2);
      iVar4 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)(iVar1 + 0xc);
      if ((iVar4 != 0) || (iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 8);
        iVar5 = 0;
        if ((0 < iVar1) && (0 < iVar4)) {
          do {
            iVar2 = rand();
            iVar5 = iVar5 + iVar2 % iVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar2 = *(int *)(param_1 + 0x70);
        }
        iVar3 = iVar3 + iVar5;
      }
      *(int *)(*(int *)(local_c * 4 + iVar2) + 0x10) = iVar3;
      iVar2 = *(int *)(param_1 + 0x70);
      local_c = local_c + 1;
    } while (local_c < (uint)(*(int *)(param_1 + 0x74) - iVar2 >> 2));
  }
  iVar2 = *(int *)(param_1 + 0x88);
  local_8 = 0;
  if (*(int *)(param_1 + 0x8c) - iVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_8 * 4 + iVar2);
      iVar4 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)(iVar1 + 0xc);
      if ((iVar4 != 0) || (iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 8);
        iVar5 = 0;
        if ((0 < iVar1) && (0 < iVar4)) {
          do {
            iVar2 = rand();
            iVar5 = iVar5 + iVar2 % iVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        iVar3 = iVar3 + iVar5;
      }
      *(int *)(*(int *)(local_8 * 4 + iVar2) + 0x10) = iVar3;
      iVar2 = *(int *)(param_1 + 0x88);
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(param_1 + 0x8c) - iVar2 >> 2));
  }
  FUN_0049e7b0((int)param_1);
  FUN_0049e810((undefined4 *)param_1);
  FUN_0049ea50(param_1);
  return;
}


void __fastcall FUN_0049e790(byte *param_1)

{
  FUN_0049e7b0((int)param_1);
  FUN_0049e810((undefined4 *)param_1);
  FUN_0049ea50(param_1);
  return;
}


void __fastcall FUN_0049e7b0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x94);
  uVar1 = (uint)((int)*(undefined4 **)(param_1 + 0x98) + (3 - (int)puVar2)) >> 2;
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 0x98) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*puVar2 != (int *)0x0) {
        FUN_0040fae0((int *)*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
  return;
}


void __fastcall FUN_0049e810(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  byte abStack_5c [8];
  undefined4 uStack_54;
  int local_30;
  int *local_2c;
  int *local_28;
  undefined1 *local_24;
  int local_20;
  byte *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb078;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = param_1[0x13];
  local_14 = 0;
  local_18 = param_1;
  if (param_1[0x14] - iVar5 >> 2 != 0) {
    do {
      iVar7 = *(int *)(local_14 * 4 + iVar5);
      local_1c = (byte *)(local_14 * 4 + iVar5);
      if (*(char *)(iVar7 + 0xe0) != '\0') {
        uVar6 = 0;
        piVar4 = *(int **)(iVar7 + 0x80);
        iVar5 = *(int *)(iVar7 + 0xd8);
        uVar8 = *(int *)(iVar7 + 0x84) - (int)piVar4 >> 2;
        if (uVar8 != 0) {
          do {
            if (iVar5 < *piVar4) goto LAB_0049e8a3;
            uVar6 = uVar6 + 1;
            iVar5 = iVar5 - *piVar4;
            piVar4 = piVar4 + 1;
          } while (uVar6 < uVar8);
        }
        uVar6 = uVar8 - 1;
LAB_0049e8a3:
        if (uVar6 < (uint)((*(int *)(iVar7 + 0xa8) - *(int *)(iVar7 + 0xa4)) / 0xc)) {
          iVar5 = *(int *)local_1c;
          uVar6 = 0;
          piVar4 = *(int **)(iVar5 + 0x80);
          iVar7 = *(int *)(iVar5 + 0xd8);
          uVar8 = *(int *)(iVar5 + 0x84) - (int)piVar4 >> 2;
          if (uVar8 != 0) {
            do {
              if (iVar7 < *piVar4) goto LAB_0049e91b;
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 - *piVar4;
              piVar4 = piVar4 + 1;
            } while (uVar6 < uVar8);
          }
          uVar6 = uVar8 - 1;
LAB_0049e91b:
          local_20 = FUN_00591370((int *)(*(int *)(iVar5 + 0xa4) + uVar6 * 0xc));
          iVar7 = 0;
          iVar5 = 0;
          local_30 = 0;
          local_2c = (int *)0x0;
          local_28 = (int *)0x0;
          local_8 = 0;
          do {
            puVar3 = local_18;
            if (local_20 <= iVar5) break;
            local_1c = abStack_5c;
            uStack_64 = 0x49e959;
            FUN_004024e0(abStack_5c,local_18);
            local_24 = auStack_68;
            local_8._0_1_ = 1;
            FUN_0042b900(auStack_68,&local_30);
            local_8._0_1_ = 2;
            iVar2 = puVar3[0x13];
            iVar1 = local_14 * 4;
            if (DAT_0065c28c == 0) {
              DAT_0065c28c = FUN_005adb0f(1);
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_1c = FUN_00484870(**(uint **)(iVar2 + iVar1));
            if (local_1c == (byte *)0x0) {
              iVar7 = iVar7 + 1;
            }
            else {
              puVar3 = (undefined4 *)local_18[0x26];
              if ((undefined4 *)local_18[0x27] == puVar3) {
                FUN_004141e0(local_18 + 0x25,puVar3,&local_1c);
              }
              else {
                *puVar3 = local_1c;
                local_18[0x26] = local_18[0x26] + 4;
              }
              piVar4 = local_2c;
              if (local_28 == local_2c) {
                FUN_00403840(&local_30,local_2c,*(undefined4 **)(local_1c + 0x54));
                iVar5 = iVar5 + 1;
              }
              else {
                FUN_004024e0(local_2c,*(undefined4 **)(local_1c + 0x54));
                local_2c = piVar4 + 6;
                iVar5 = iVar5 + 1;
              }
            }
          } while (iVar7 < 100);
          local_8 = 0xffffffff;
          FUN_004025a0(&local_30);
        }
        else {
          uStack_54 = 0x49e8de;
          FUN_00591070("ERROR",
                       "Unable to generate contracts for %s, no information as to how many to spawn."
                      );
        }
      }
      local_14 = local_14 + 1;
      iVar5 = local_18[0x13];
    } while (local_14 < (uint)(local_18[0x14] - iVar5 >> 2));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0049ea50(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  byte *in_stack_ffffffac;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb0a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar7 = 0;
  piVar8 = (int *)(DAT_0065b5cc + 0x13c);
  if (*(int *)(DAT_0065b5cc + 0x140) - *piVar8 >> 2 != 0) {
    do {
      iVar1 = *(int *)(*piVar8 + uVar7 * 4);
      pbVar9 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar9 = *(byte **)param_1;
      }
      pbVar5 = (byte *)(iVar1 + 0x38);
      if (0xf < *(uint *)(iVar1 + 0x4c)) {
        pbVar5 = *(byte **)(iVar1 + 0x38);
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x48),pbVar9,*(uint *)(param_1 + 0x10));
      if ((char)uVar3 != '\0') {
        puVar2 = *(undefined4 **)(*(int *)(*piVar8 + uVar7 * 4) + 0x58);
        iVar1 = puVar2[6];
        FUN_004024e0(local_2c,puVar2);
        local_8 = 0;
        FUN_004024e0(&stack0xffffffac,local_2c);
        pbVar9 = (byte *)0x49eb02;
        iVar4 = FUN_0049ce60(param_1,in_stack_ffffffac);
        local_8 = 0xffffffff;
        if ((iVar4 == 0) || (iVar4 < iVar1)) {
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0049ebed;
            FUN_005adb3f(pvVar6);
          }
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_18 = 0xf;
          local_1c = 0;
          FUN_004024e0(&stack0xffffffa8,
                       *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + uVar7 * 4) + 0x58)
                      );
          FUN_0049c670(param_1,pbVar9);
        }
        else {
          if (0xf < local_18) {
            pvVar6 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar6 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_0049ebed:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar6);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        }
      }
      uVar7 = uVar7 + 1;
      piVar8 = (int *)(DAT_0065b5cc + 0x13c);
    } while (uVar7 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - *piVar8 >> 2));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0049ec00(byte *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *local_18;
  byte *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = 0;
  iVar10 = 2;
  local_14 = param_1;
  do {
    uVar3 = rand();
    uVar3 = uVar3 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    iVar8 = iVar8 + 1 + uVar3;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_10 = iVar8 + 0x1e;
  local_8 = 0;
  local_c = 0;
  iVar10 = 0;
LAB_0049ec40:
  if ((99 < local_8) && (local_10 <= iVar10)) {
    return;
  }
  iVar10 = DAT_0065b5cc[1];
  iVar8 = *DAT_0065b5cc;
  local_8 = local_8 + 1;
  iVar4 = rand();
  iVar8 = **(int **)(*DAT_0065b5cc + (iVar4 % (iVar10 - iVar8 >> 2)) * 4);
  pbVar6 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar6 = *(byte **)param_1;
  }
  uVar3 = FUN_004031f0(pbVar6,*(uint *)(param_1 + 0x10),(byte *)"OP-LASSLS",9);
  if ((char)uVar3 != '\0') goto code_r0x0049ec95;
  goto LAB_0049eca3;
code_r0x0049ec95:
  iVar10 = local_c;
  if (iVar8 != 0x5d) {
LAB_0049eca3:
    puVar5 = (undefined4 *)FUN_005adb0f(8);
    piVar2 = DAT_0065b5cc;
    uVar3 = 0;
    *puVar5 = 0x42c80000;
    uVar9 = piVar2[1] - *piVar2 >> 2;
    local_18 = puVar5;
    if (uVar9 != 0) {
      local_18 = (undefined4 *)*piVar2;
      puVar7 = local_18;
      do {
        if (*(int *)*puVar7 == iVar8) {
          iVar10 = local_18[uVar3];
          goto LAB_0049ece2;
        }
        uVar3 = uVar3 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar3 < uVar9);
    }
    iVar10 = 0;
LAB_0049ece2:
    puVar5[1] = iVar10;
    if ((*(int *)(iVar10 + 0x80) == 10) || (*(int *)(iVar10 + 0x80) == 0xb)) {
      FUN_005adb3f(puVar5);
      param_1 = local_14;
      iVar10 = local_c;
    }
    else {
      iVar10 = local_c + 1;
      local_c = iVar10;
      local_18 = (undefined4 *)FUN_005adb0f(8);
      param_1 = local_14;
      uVar1 = *(undefined4 *)(puVar5[1] + 0x20);
      *local_18 = puVar5;
      local_18[1] = uVar1;
      puVar5 = *(undefined4 **)(local_14 + 0x68);
      if (*(undefined4 **)(local_14 + 0x6c) == puVar5) {
        FUN_00414080(local_14 + 100,puVar5,&local_18);
      }
      else {
        *puVar5 = local_18;
        *(int *)(local_14 + 0x68) = *(int *)(local_14 + 0x68) + 4;
      }
    }
  }
  goto LAB_0049ec40;
}


void FUN_0049ed80(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb0f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00591070("DETAIL","Populating modules for station %s");
  local_18 = 1;
  do {
    if (local_18 != 0xf) {
      iVar12 = 200;
      local_1c = (int *)DAT_0065b5cc;
      do {
        if (iVar12 < 1) goto LAB_0049f12c;
        iVar1 = *(int *)((int)local_1c + 0x10);
        iVar12 = iVar12 + -1;
        iVar6 = *(int *)((int)local_1c + 0xc);
        iVar3 = rand();
        iVar1 = *(int *)(*(int *)((int)local_1c + 0xc) + (iVar3 % ((iVar1 - iVar6 >> 2) + -1)) * 4);
      } while ((*(int *)(iVar1 + 4) != local_18) || (*(int *)(iVar1 + 0x90) < 1));
      if (iVar1 != 0) {
        pvVar4 = (void *)FUN_005adb0f(0x88);
        local_8 = 0;
        puVar5 = FUN_004adec0(pvVar4,iVar1);
        local_8 = 0xffffffff;
        local_1c = FUN_004b0650(puVar5[2]);
        if (local_1c != (int *)0x0) {
          FUN_00437260((void *)puVar5[3],(int)local_1c);
          iVar12 = FUN_004ae3d0((int)puVar5);
          iVar6 = rand();
          puVar10 = (undefined4 *)
                    (int)((((float)(iVar6 % 100) / 100.0) * 0.2 + 0.9) * (float)iVar12);
          local_24 = puVar10;
          puVar7 = (undefined4 *)FUN_005adb0f(0xc);
          iVar12 = *local_1c;
          puVar7[1] = puVar10;
          puVar7[2] = iVar12;
          *puVar7 = puVar5;
          puVar7[2] = *local_1c;
          local_14 = puVar7;
          FUN_00437210(puVar5[3]);
          FUN_00591070("DETAIL","Populating module %s with config %s: value %d, with %d components."
                      );
          puVar5 = *(undefined4 **)(local_20 + 0x5c);
          if (*(undefined4 **)(local_20 + 0x60) == puVar5) {
            FUN_00414080((void *)(local_20 + 0x58),puVar5,&local_14);
          }
          else {
            *puVar5 = puVar7;
            *(int *)(local_20 + 0x5c) = *(int *)(local_20 + 0x5c) + 4;
          }
        }
        rand();
        puVar5 = (undefined4 *)0x0;
        iVar12 = 0;
        local_14 = (undefined4 *)0x0;
        do {
          if (99 < iVar12) break;
          iVar12 = iVar12 + 1;
          pvVar4 = (void *)FUN_005adb0f(0x88);
          local_8 = 1;
          puVar7 = FUN_004adec0(pvVar4,iVar1);
          local_8 = 0xffffffff;
          local_24 = puVar7;
          iVar6 = rand();
          if (iVar6 % 6 == 0) {
            piVar8 = FUN_004b0650(puVar7[2]);
            if (piVar8 != (int *)0x0) {
              FUN_00437260((void *)puVar7[3],(int)piVar8);
              iVar6 = 0;
              do {
                if (*(int *)(iVar6 + 4 + puVar7[3]) != 0) {
                  uVar9 = rand();
                  uVar9 = uVar9 & 0x80000003;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                  }
                  if (uVar9 == 0) {
                    iVar3 = rand();
                    iVar3 = iVar3 % 0xc + 0x4d;
LAB_0049f033:
                    pfVar2 = *(float **)(iVar6 + 4 + puVar7[3]);
                    *pfVar2 = *pfVar2 - (float)iVar3;
                  }
                  else {
                    if (uVar9 == 1) {
                      iVar3 = rand();
                      iVar3 = iVar3 % 0xc + 0x39;
                      goto LAB_0049f033;
                    }
                    if (uVar9 == 2) {
                      uVar9 = rand();
                      uVar9 = uVar9 & 0x80000003;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                      }
                      pfVar2 = *(float **)(iVar6 + 4 + puVar7[3]);
                      *pfVar2 = *pfVar2 - (float)(int)(uVar9 + 1);
                    }
                  }
                  rand();
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < 0x50);
              iVar6 = FUN_004ae3d0((int)puVar7);
              iVar3 = rand();
              local_24 = (undefined4 *)FUN_005adb0f(0xc);
              local_24[1] = (int)((((float)(iVar3 % 100) / 100.0) * 0.15 + 0.75) * (float)iVar6);
              local_24[2] = 1;
LAB_0049f0bb:
              *local_24 = puVar7;
              puVar5 = *(undefined4 **)(local_20 + 0x5c);
              if (*(undefined4 **)(local_20 + 0x60) == puVar5) {
                FUN_00414080((void *)(local_20 + 0x58),puVar5,&local_24);
                local_14 = (undefined4 *)((int)local_14 + 1);
                puVar5 = local_14;
              }
              else {
                *puVar5 = local_24;
                *(int *)(local_20 + 0x5c) = *(int *)(local_20 + 0x5c) + 4;
                local_14 = (undefined4 *)((int)local_14 + 1);
                puVar5 = local_14;
              }
            }
          }
          else {
            local_1c = (int *)puVar7[2];
            puVar10 = (undefined4 *)local_1c[0x48];
            iVar6 = local_1c[0x49] - (int)puVar10 >> 2;
            if (iVar6 != 0) {
              if (iVar6 == 1) {
                piVar8 = (int *)*puVar10;
                puVar5 = local_14;
                if (*piVar8 == 0) goto LAB_0049f11d;
              }
              else {
                iVar6 = 100;
                do {
                  piVar8 = (int *)0x0;
                  puVar7 = local_24;
                  if (iVar6 < 1) break;
                  iVar6 = iVar6 + -1;
                  iVar11 = local_1c[0x49] - (int)puVar10;
                  iVar3 = rand();
                  puVar10 = (undefined4 *)local_1c[0x48];
                  piVar8 = (int *)puVar10[iVar3 % (iVar11 >> 2)];
                  puVar7 = local_24;
                } while (*piVar8 == 0);
              }
              puVar5 = local_14;
              if (piVar8 != (int *)0x0) {
                FUN_00437260((void *)puVar7[3],(int)piVar8);
                local_1c = (int *)FUN_004ae3d0((int)puVar7);
                if (*piVar8 == 1) {
                  iVar6 = rand();
                  local_1c = (int *)(int)((((float)(iVar6 % 100) / 100.0) * 0.1 + 0.85) *
                                         (float)(int)local_1c);
                }
                else {
                  local_24 = (undefined4 *)(puVar7[2] + 8);
                  if (0xf < *(uint *)(puVar7[2] + 0x1c)) {
                    local_24 = (undefined4 *)*local_24;
                  }
                  FUN_00437210(puVar7[3]);
                  FUN_00591070("DETAIL",
                               "Populating module %s with config %s: value %d, with %d components.")
                  ;
                }
                local_24 = (undefined4 *)FUN_005adb0f(0xc);
                iVar6 = *piVar8;
                local_24[1] = local_1c;
                local_24[2] = iVar6;
                goto LAB_0049f0bb;
              }
            }
          }
LAB_0049f11d:
        } while ((int)puVar5 < 1);
      }
    }
LAB_0049f12c:
    local_18 = local_18 + 1;
    if (0x11 < local_18) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


void __fastcall FUN_0049f240(int param_1)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb118;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar9 = 0;
  iVar7 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar7 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar7 + uVar9 * 4);
      pcVar8 = (char *)(iVar7 + 8);
      if (0xf < *(uint *)(iVar7 + 0x1c)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_24 = 0;
      local_20 = 0xf;
      local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
      pcVar3 = pcVar8;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(local_34,pcVar8,(int)pcVar3 - (int)(pcVar8 + 1));
      local_8 = 0;
      local_14 = FUN_00412bf0();
      local_8 = 0xffffffff;
      pbVar2 = *(byte **)(local_14 + 0x88);
      puVar4 = (undefined4 *)
               FUN_00413f20(&local_18,(byte *)local_34,*(byte **)(local_14 + 0x84),pbVar2);
      if ((byte *)*puVar4 != pbVar2) {
        piVar5 = FUN_00414300((int *)pbVar2,*(int **)(local_14 + 0x88),(int *)*puVar4);
        FUN_004028b0(piVar5,*(int **)(local_14 + 0x88));
        *(int **)(local_14 + 0x88) = piVar5;
      }
      if (0xf < local_20) {
        pvVar6 = local_34[0];
        if (0xfff < local_20 + 1) {
          pvVar6 = *(void **)((int)local_34[0] + -4);
          if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar6);
      }
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x3c) + uVar9 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_0050a400(puVar4);
        FUN_005adb3f(puVar4);
      }
      uVar9 = uVar9 + 1;
      iVar7 = *(int *)(param_1 + 0x3c);
    } while (uVar9 < (uint)(*(int *)(param_1 + 0x40) - iVar7 >> 2));
  }
  *(int *)(param_1 + 0x40) = iVar7;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0049f3a0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint3 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int *local_4c;
  int *local_48;
  int *local_44;
  void *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  undefined4 *local_24;
  void *local_20;
  int *local_1c;
  uint local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005bb150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  FUN_0049f240((int)param_1);
  if (3 < (uint)(*(int *)((int)param_1 + 0x34) - *(int *)((int)param_1 + 0x30))) {
    FUN_00591070("WORLD","Cleared ships for sale at %s, generating fresh ones.");
    iVar10 = *(int *)((int)param_1 + 0x30);
    local_30 = 0;
    local_18 = 0;
    if (*(int *)((int)param_1 + 0x34) - iVar10 >> 2 != 0) {
      do {
        piVar7 = *(int **)(local_18 * 4 + iVar10);
        iVar10 = *piVar7;
        if ((iVar10 != 0) || (piVar7[2] != 0)) {
          local_28 = (int *)piVar7[2];
          iVar13 = 0;
          iVar1 = piVar7[1];
          if ((0 < iVar1) && (local_2c = iVar1, 0 < iVar10)) {
            do {
              iVar4 = rand();
              iVar13 = iVar13 + 1 + iVar4 % iVar1;
              iVar10 = iVar10 + -1;
              param_1 = local_14;
            } while (iVar10 != 0);
          }
          local_2c = iVar13 + (int)local_28;
          if (local_2c != 0) {
            puVar6 = (undefined4 *)0x0;
            puVar14 = (undefined4 *)0x0;
            local_20 = (void *)0x0;
            local_40 = (void *)0x0;
            local_3c = (undefined4 *)0x0;
            local_24 = (undefined4 *)0x0;
            local_38 = (undefined4 *)0x0;
            local_8 = 0;
            uVar12 = *(uint *)((int)local_14 + 0x30);
            iVar10 = *(int *)(local_18 * 4 + uVar12);
            local_28 = (int *)(*(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc));
            if (local_2c < (uint)((int)local_28 >> 2)) {
              piVar7 = (int *)0x0;
              local_1c = (int *)0x0;
              local_4c = (int *)0x0;
              local_48 = (int *)0x0;
              local_28 = (int *)0x0;
              local_44 = (int *)0x0;
              local_8._1_3_ = 0;
              uVar3 = local_8._1_3_;
              local_8._0_1_ = 1;
              local_8._1_3_ = 0;
              if (local_2c != 0) {
                do {
                  iVar10 = *(int *)(*(int *)((int)local_14 + 0x30) + local_18 * 4);
                  iVar1 = *(int *)(iVar10 + 0x10);
                  iVar10 = *(int *)(iVar10 + 0xc);
                  iVar13 = rand();
                  iVar13 = iVar13 % (iVar1 - iVar10 >> 2);
                  for (piVar5 = local_1c; local_34 = iVar13, piVar5 != piVar7; piVar5 = piVar5 + 1)
                  {
                    if (*piVar5 == iVar13) {
                      if (piVar5 != piVar7) goto LAB_0049f606;
                      break;
                    }
                  }
                  puVar6 = (undefined4 *)
                           (*(int *)(*(int *)(local_18 * 4 + *(int *)((int)local_14 + 0x30)) + 0xc)
                           + iVar13 * 4);
                  if (local_24 == puVar14) {
                    FUN_00414080(&local_40,puVar14,puVar6);
                    local_24 = local_38;
                    local_20 = local_40;
                  }
                  else {
                    *puVar14 = *puVar6;
                    local_3c = puVar14 + 1;
                  }
                  puVar14 = local_3c;
                  if (local_28 == piVar7) {
                    FUN_004141e0(&local_4c,piVar7,&local_34);
                    local_28 = local_44;
                    local_1c = local_4c;
                    piVar7 = local_48;
                  }
                  else {
                    *piVar7 = iVar13;
                    local_48 = piVar7 + 1;
                    piVar7 = local_48;
                  }
LAB_0049f606:
                  uVar3 = local_8._1_3_;
                } while ((uint)((int)puVar14 - (int)local_20 >> 2) < local_2c);
              }
              local_8._1_3_ = uVar3;
              local_8 = (uint)local_8._1_3_ << 8;
              pvVar8 = local_20;
              puVar2 = local_24;
              if (local_1c != (int *)0x0) {
                piVar7 = local_1c;
                if ((0xfff < ((int)local_28 - (int)local_1c & 0xfffffffcU)) &&
                   (piVar7 = (int *)local_1c[-1], 0x1f < (uint)((int)local_1c + (-4 - (int)piVar7)))
                   ) goto LAB_0049f714;
                FUN_005adb3f(piVar7);
                local_4c = (int *)0x0;
                local_48 = (int *)0x0;
                local_44 = (int *)0x0;
                pvVar8 = local_20;
                puVar2 = local_24;
              }
            }
            else {
              uVar11 = 0;
              pvVar8 = (void *)0x0;
              puVar2 = local_24;
              if ((int)local_28 >> 2 != 0) {
                do {
                  puVar14 = (undefined4 *)
                            (*(int *)(*(int *)(local_18 * 4 + uVar12) + 0xc) + uVar11 * 4);
                  if (puVar6 == local_3c) {
                    FUN_00414080(&local_40,local_3c,puVar14);
                    puVar6 = local_38;
                  }
                  else {
                    *local_3c = *puVar14;
                    local_3c = local_3c + 1;
                  }
                  uVar11 = uVar11 + 1;
                  uVar12 = *(uint *)((int)local_14 + 0x30);
                  iVar10 = *(int *)(uVar12 + local_18 * 4);
                  pvVar8 = local_40;
                  puVar14 = local_3c;
                  local_2c = uVar12;
                  puVar2 = puVar6;
                } while (uVar11 < (uint)(*(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc) >> 2));
              }
            }
            local_24 = puVar2;
            uVar12 = 0;
            uVar11 = (int)puVar14 - (int)pvVar8 >> 2;
            if (uVar11 != 0) {
              do {
                local_30 = local_30 + 1;
                FUN_0049f720(local_14,*(void ***)((int)pvVar8 + uVar12 * 4));
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar11);
            }
            local_8 = -1;
            param_1 = local_14;
            if (pvVar8 != (void *)0x0) {
              pvVar9 = pvVar8;
              if ((0xfff < ((int)local_24 - (int)pvVar8 & 0xfffffffcU)) &&
                 (pvVar9 = *(void **)((int)pvVar8 + -4),
                 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar9)))) {
LAB_0049f714:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar9);
              local_40 = (void *)0x0;
              local_3c = (undefined4 *)0x0;
              local_38 = (undefined4 *)0x0;
              param_1 = local_14;
            }
          }
        }
        iVar10 = *(int *)((int)param_1 + 0x30);
        local_18 = local_18 + 1;
      } while (local_18 < (uint)(*(int *)((int)param_1 + 0x34) - iVar10 >> 2));
    }
    FUN_00591070("WORLD","Generated %d ships.");
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0049f720(void *this,void **param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void **ppvVar6;
  int iVar7;
  void **ppvVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  void *pvVar17;
  bool bVar18;
  float fVar19;
  byte *****pppppbVar20;
  byte ****in_stack_ffffff60;
  byte *in_stack_ffffff78;
  void *local_58;
  int *local_54;
  int *local_50;
  void **local_4c;
  void **local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005bb1ac;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_1;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  puVar1 = param_1[5];
  local_40 = 0;
  local_3c = 0;
  ppvVar6 = param_1;
  if (&DAT_0000000f < puVar1) {
    ppvVar6 = *param_1;
  }
  pvVar9 = param_1[4];
  uVar4 = FUN_004031f0((byte *)ppvVar6,(uint)pvVar9,(byte *)"secondhand",10);
  ppvVar6 = local_4c;
  if ((char)uVar4 == '\0') {
    if (local_30 != local_4c) {
      ppvVar8 = local_4c;
      if (&DAT_0000000f < puVar1) {
        ppvVar8 = *local_4c;
      }
      FUN_00402690(local_30,ppvVar8,(uint)pvVar9);
    }
    FUN_004024e0(&stack0xffffff78,ppvVar6);
    piVar14 = (int *)FUN_004a80d0(in_stack_ffffff78);
    local_34 = piVar14;
    FUN_004024e0(&stack0xffffff78,ppvVar6 + 6);
    iVar16 = FUN_00519f30(piVar14,in_stack_ffffff78);
LAB_0049fa65:
    if (piVar14 != (int *)0x0) {
      piVar14 = (int *)FUN_005adb0f(0x388);
      local_48 = (void **)&stack0xffffff78;
      piVar15 = (int *)&stack0xffffff78;
      local_8._0_1_ = 2;
      local_38 = piVar14;
      pvVar9 = (void *)FUN_00412bf0();
      FUN_004a5f50(pvVar9,piVar15);
      pppppbVar20 = (byte *****)&stack0xffffff60;
      local_8._0_1_ = 3;
      pvVar9 = (void *)FUN_00412bf0();
      FUN_004a5bc0(pvVar9,pppppbVar20);
      local_8._0_1_ = 2;
      piVar14 = FUN_005099e0(piVar14,(int)local_34,9,in_stack_ffffff60);
      local_8 = (uint)local_8._1_3_ << 8;
      local_48 = local_4c + 6;
      local_44 = piVar14;
      local_34 = piVar14;
      FUN_004024e0(&stack0xffffff78,local_48);
      FUN_0050c3d0(piVar14,in_stack_ffffff78);
      iVar5 = DAT_0065b5cc;
      if (*(char *)(iVar16 + 0x31) == '\0') {
        piVar15 = (int *)(iVar16 + 0x18);
        if (piVar14 + 0xcb != piVar15) {
          if (0xf < *(uint *)(iVar16 + 0x2c)) {
            piVar15 = (int *)*piVar15;
          }
          FUN_00402690(piVar14 + 0xcb,piVar15,*(uint *)(iVar16 + 0x28));
        }
      }
      else {
        if (local_40 != 0) {
          iVar16 = 100;
          do {
            piVar14 = local_34;
            if (iVar16 < 1) goto LAB_0049fb69;
            iVar12 = *(int *)(iVar5 + 0x10);
            iVar16 = iVar16 + -1;
            iVar7 = *(int *)(iVar5 + 0xc);
            iVar10 = rand();
            iVar12 = *(int *)(*(int *)(iVar5 + 0xc) + (iVar10 % (iVar12 - iVar7 >> 2)) * 4);
          } while (*(int *)(iVar12 + 4) != local_40);
          piVar14 = local_34;
          if (iVar12 != 0) {
            local_38 = (int *)FUN_005adb0f(0x88);
            local_8._0_1_ = 4;
            puVar11 = FUN_004adec0(local_38,iVar12);
            piVar14 = local_34;
            local_8 = (uint)local_8._1_3_ << 8;
            if (puVar11 == (undefined4 *)0x0) {
              local_40 = 0;
            }
            else {
              FUN_00521d10((void *)local_34[0x10],(undefined1 *)puVar11,-1);
            }
          }
        }
LAB_0049fb69:
        piVar15 = local_34;
        if (local_3c != 0) {
          pvVar9 = (void *)piVar14[0x10];
          for (puVar11 = *(undefined4 **)((int)pvVar9 + 0x3c);
              puVar11 != *(undefined4 **)((int)pvVar9 + 0x40); puVar11 = puVar11 + 1) {
            puVar2 = (undefined4 *)*puVar11;
            if (*(int *)(puVar2[2] + 4) == local_3c) {
              FUN_00522090(pvVar9,(undefined1 *)puVar2);
              *puVar2 = ShipModule::vftable;
              FUN_005adb3f(puVar2);
              piVar14 = piVar15;
              goto LAB_0049fba2;
            }
            piVar14 = local_34;
          }
          local_3c = 0;
        }
LAB_0049fba2:
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000001;
        bVar18 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar18 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar18) {
          iVar16 = rand();
          local_38 = (int *)(iVar16 % 5);
          iVar5 = 0;
          iVar16 = 2;
          do {
            iVar12 = rand();
            piVar14 = local_34;
            iVar5 = iVar5 + 1 + iVar12 % 6;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          piVar15 = FUN_00420f40(local_34 + 0x53,(int *)&local_38);
          *piVar15 = iVar5;
        }
        local_38 = *(int **)(piVar14[0x10] + 0x40);
        piVar14 = *(int **)(piVar14[0x10] + 0x3c);
        if (piVar14 != local_38) {
          do {
            piVar15 = (int *)*piVar14;
            uVar4 = rand();
            uVar4 = uVar4 & 0x80000001;
            bVar18 = uVar4 == 0;
            if ((int)uVar4 < 0) {
              bVar18 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (bVar18) {
              iVar16 = rand();
              FUN_00437950((void *)piVar15[3],iVar16 % 6 + 1,3);
              if ((*(char *)((int)piVar15 + 99) == '\0') ||
                 (cVar3 = (**(code **)(*piVar15 + 0x14))(), cVar3 != '\0')) {
                fVar19 = 0.0;
              }
              else {
                iVar16 = FUN_00437c60((int *)piVar15[3]);
                fVar19 = *(float *)(piVar15[2] + 0xc4) * ((float)iVar16 / 100.0);
              }
              if (fVar19 < (float)piVar15[0x17]) {
                piVar15[0x17] = (int)fVar19;
              }
            }
            piVar14 = piVar14 + 1;
          } while (piVar14 != local_38);
        }
        piVar14 = local_34;
        FUN_00518fb0(local_34,local_40,local_3c);
      }
      piVar14[0xca] = (int)local_4c;
      puVar11 = *(undefined4 **)((int)this + 0x40);
      if (*(undefined4 **)((int)this + 0x44) == puVar11) {
        FUN_00414080((void *)((int)this + 0x3c),puVar11,&local_44);
      }
      else {
        *puVar11 = piVar14;
        *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 4;
      }
      FUN_00591070("WORLD","Generated ship: %s, %s-class, configuration %s");
    }
    if (0xf < local_1c) {
      pvVar9 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar9 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
  }
  else {
    piVar15 = (int *)0x0;
    local_58 = (void *)0x0;
    piVar14 = (int *)0x0;
    local_54 = (int *)0x0;
    local_50 = (int *)0x0;
    local_8._0_1_ = 1;
    local_44 = *(int **)(DAT_0065b5cc + 0x18);
    local_34 = (int *)0x0;
    local_38 = (int *)((uint)((int)*(int **)(DAT_0065b5cc + 0x1c) + (3 - (int)local_44)) >> 2);
    local_48 = (void **)0x0;
    if (*(int **)(DAT_0065b5cc + 0x1c) < local_44) {
      local_38 = (int *)0x0;
    }
    if (local_38 != (int *)0x0) {
      do {
        local_48 = (void **)*local_44;
        for (piVar13 = local_48[0x61]; piVar13 != local_48[0x62]; piVar13 = piVar13 + 1) {
          if (*(char *)(*piVar13 + 0x31) != '\0') {
            if (piVar14 == piVar15) {
              FUN_00414080(&local_58,piVar15,&local_48);
              piVar14 = local_50;
              piVar15 = local_54;
            }
            else {
              *piVar15 = (int)local_48;
              local_54 = piVar15 + 1;
              piVar15 = local_54;
            }
            break;
          }
        }
        local_34 = (int *)((int)local_34 + 1);
        local_44 = local_44 + 1;
      } while (local_34 != local_38);
    }
    pvVar9 = local_58;
    iVar16 = (int)piVar15 - (int)local_58 >> 2;
    if (iVar16 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_58 != (void *)0x0) {
        if ((0xfff < ((int)piVar14 - (int)local_58 & 0xfffffffcU)) &&
           (pvVar9 = *(void **)((int)local_58 + -4),
           0x1f < (uint)((int)local_58 + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
        FUN_00591070("WARNING","Unable to generate valid second-hand ship.");
        goto LAB_0049fd86;
      }
    }
    else {
      iVar5 = rand();
      local_34 = *(int **)((int)pvVar9 + (iVar5 % iVar16) * 4);
      local_8 = (uint)local_8._1_3_ << 8;
      if (pvVar9 != (void *)0x0) {
        pvVar17 = pvVar9;
        if ((0xfff < ((int)piVar14 - (int)pvVar9 & 0xfffffffcU)) &&
           (pvVar17 = *(void **)((int)pvVar9 + -4), 0x1f < (uint)((int)pvVar9 + (-4 - (int)pvVar17))
           )) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar17);
      }
      if (local_34 != (int *)0x0) {
        ppvVar6 = (void **)(local_34 + 0x18);
        if (local_30 != ppvVar6) {
          if (0xf < (uint)local_34[0x1d]) {
            ppvVar6 = *ppvVar6;
          }
          FUN_00402690(local_30,ppvVar6,local_34[0x1c]);
        }
        iVar5 = 100;
        do {
          iVar16 = 0;
          if (iVar5 < 1) break;
          iVar16 = local_34[0x62];
          iVar5 = iVar5 + 1;
          iVar12 = local_34[0x61];
          iVar7 = rand();
          iVar16 = *(int *)(local_34[0x61] + (iVar7 % (iVar16 - iVar12 >> 2)) * 4);
        } while (*(char *)(iVar16 + 0x31) == '\0');
        piVar14 = local_34;
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000001;
        bVar18 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar18 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar18) {
          iVar5 = rand();
          if (iVar5 % 6 < 2) {
            iVar5 = rand();
            switch(iVar5 % 6) {
            case 0:
              local_3c = 3;
              break;
            case 1:
              local_3c = 4;
              break;
            case 2:
              local_3c = 1;
              break;
            case 3:
              local_3c = 7;
              break;
            case 4:
              local_3c = 0xe;
              break;
            default:
              local_3c = 9;
            }
          }
          else {
            iVar5 = rand();
            switch(iVar5 % 6) {
            case 0:
            case 1:
              local_40 = 10;
              break;
            case 2:
              local_40 = 0x10;
              break;
            case 3:
            case 4:
              local_40 = 0x11;
              break;
            default:
              local_40 = 0xd;
            }
          }
        }
        goto LAB_0049fa65;
      }
    }
    FUN_00591070("WARNING","Unable to generate valid second-hand ship.");
  }
LAB_0049fd86:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_0049fdd0(void *this,void *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  
  bVar6 = 0;
  uVar7 = 0;
  iVar5 = *(int *)((int)this + 100);
  iVar3 = *(int *)((int)this + 0x68) - iVar5 >> 2;
  if (*(char *)((int)this + 0x54) == '\0') {
    bVar6 = 1;
    if (iVar3 != 0) {
      do {
        uVar4 = FUN_004a23b0(*(void **)(iVar5 + uVar7 * 4),param_1);
        iVar5 = *(int *)((int)this + 100);
        bVar1 = -((char)uVar4 != '\0');
        iVar3 = CONCAT31((int3)((uint)uVar4 >> 8),bVar1);
        uVar7 = uVar7 + 1;
        bVar6 = bVar6 & bVar1;
      } while (uVar7 < (uint)(*(int *)((int)this + 0x68) - iVar5 >> 2));
    }
  }
  else if (iVar3 != 0) {
    do {
      cVar2 = FUN_004a23b0(*(void **)(iVar5 + uVar7 * 4),param_1);
      iVar5 = *(int *)((int)this + 100);
      if (cVar2 != '\0') {
        bVar6 = 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)((int)this + 0x68) - iVar5 >> 2));
    return (uint)bVar6;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),bVar6);
}


undefined4 * __thiscall FUN_0049fe60(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined1 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  return this;
}


undefined4 * __thiscall FUN_0049fee0(void *this,undefined4 param_1,void *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  uint in_stack_0000001c;
  byte *in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb23b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)this = param_1;
  FUN_004024e0((void *)((int)this + 4),&param_2);
  *(undefined4 *)((int)this + 0x1c) = 0x1000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xbf800000;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined1 *)((int)this + 0x44) = 0;
  local_8._0_1_ = 3;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined1 *)((int)this + 0x5c) = 0;
  FUN_00402690((undefined1 *)((int)this + 0x5c),"neutral",7);
  local_8._0_1_ = 4;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xf;
  *(undefined1 *)((int)this + 0x74) = 0;
  FUN_00402690((undefined1 *)((int)this + 0x74),"neutral",7);
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_004024e0(&stack0xffffffc8,&param_2);
  uVar1 = FUN_004a76c0(in_stack_ffffffc8);
  *(undefined4 *)((int)this + 0x8c) = uVar1;
  if (0xf < in_stack_0000001c) {
    pvVar2 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar2 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}
