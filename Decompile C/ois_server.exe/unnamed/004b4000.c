#include "../ois_server.exe.h"


void __fastcall FUN_004b4360(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *_Dst;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc8df;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)(param_1 + 0x5c);
  if (iVar6 == 0) {
    FUN_00591070("ERROR","Attempting to send a draft, but no draft is selected.");
    ExceptionList = local_10;
    return;
  }
  uVar9 = 0;
  if (*(int *)(iVar6 + 0x68) - *(int *)(iVar6 + 100) >> 2 != 0) {
    do {
      cVar3 = FUN_004a23b0(*(void **)(*(int *)(iVar6 + 100) + uVar9 * 4),
                           *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
      if (cVar3 == '\0') {
        FUN_00591070("ERROR",
                     "Attempting to send a draft, but the draft requirements are not met somehow.");
        ExceptionList = local_10;
        return;
      }
      iVar6 = *(int *)(param_1 + 0x5c);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(iVar6 + 0x68) - *(int *)(iVar6 + 100) >> 2));
  }
  FUN_00591070(&DAT_005cdc70,"Sending draft: %s");
  uVar9 = 0;
  if (*(int *)(*(int *)(param_1 + 0x5c) + 0x74) - *(int *)(*(int *)(param_1 + 0x5c) + 0x70) >> 2 !=
      0) {
    do {
      FUN_004a3f20(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) + 0x70) + uVar9 * 4));
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(*(int *)(param_1 + 0x5c) + 0x74) -
                            *(int *)(*(int *)(param_1 + 0x5c) + 0x70) >> 2));
  }
  FUN_00591070(&DAT_005cdc70,"Performed actions...");
  iVar6 = *(int *)(DAT_0065b5cc + 300);
  piVar1 = *(int **)(iVar6 + 0x24);
  if (*(int **)(iVar6 + 0x28) == piVar1) {
    FUN_00403840((void *)(iVar6 + 0x20),piVar1,(undefined4 *)**(undefined4 **)(param_1 + 0x5c));
  }
  else {
    FUN_004024e0(piVar1,(undefined4 *)**(undefined4 **)(param_1 + 0x5c));
    *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 0x18;
  }
  FUN_00591070(&DAT_005cdc70,"Draft set \'%s\' marked as read");
  iVar6 = **(int **)(param_1 + 0x5c);
  piVar1 = *(int **)(iVar6 + 0x58);
  _Dst = *(int **)(iVar6 + 0x54);
  if (_Dst != piVar1) {
    do {
      if ((int *)*_Dst == *(int **)(param_1 + 0x5c)) break;
      _Dst = _Dst + 1;
    } while (_Dst != piVar1);
    if (_Dst != piVar1) {
      piVar5 = _Dst + 1;
      uVar9 = 0;
      local_14 = (uint)((int)piVar1 + (3 - (int)piVar5)) >> 2;
      if (piVar1 < piVar5) {
        local_14 = 0;
      }
      if (local_14 != 0) {
        do {
          if (*piVar5 != *(int *)(param_1 + 0x5c)) {
            *_Dst = *piVar5;
            _Dst = _Dst + 1;
          }
          uVar9 = uVar9 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar9 != local_14);
      }
    }
  }
  local_18 = (undefined4 *)**(int **)(param_1 + 0x5c);
  if (_Dst != piVar1) {
    iVar6 = local_18[0x16];
    memmove(_Dst,piVar1,iVar6 - (int)piVar1);
    local_18[0x16] = (iVar6 - (int)piVar1) + (int)_Dst;
  }
  local_18 = (undefined4 *)FUN_005adb0f(0xa0);
  puVar4 = (undefined4 *)FUN_004398a0((int)local_18);
  iVar6 = *(int *)(param_1 + 0x5c);
  puVar8 = (undefined4 *)(iVar6 + 0x1c);
  local_18 = puVar4;
  if (puVar4 + 0x1a != puVar8) {
    if (0xf < *(uint *)(iVar6 + 0x30)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(puVar4 + 0x1a,puVar8,*(uint *)(iVar6 + 0x2c));
  }
  iVar6 = *(int *)(DAT_0065b5cc + 0x124);
  puVar8 = (undefined4 *)(iVar6 + 4);
  if (puVar4 + 1 != puVar8) {
    if (0xf < *(uint *)(iVar6 + 0x18)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(puVar4 + 1,puVar8,*(uint *)(iVar6 + 0x14));
  }
  iVar6 = *(int *)(param_1 + 0x5c);
  puVar8 = (undefined4 *)(iVar6 + 0x34);
  if (puVar4 + 7 != puVar8) {
    if (0xf < *(uint *)(iVar6 + 0x48)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(puVar4 + 7,puVar8,*(uint *)(iVar6 + 0x44));
    iVar6 = *(int *)(param_1 + 0x5c);
  }
  puVar8 = (undefined4 *)(iVar6 + 0x4c);
  if (puVar4 + 0xd != puVar8) {
    if (0xf < *(uint *)(iVar6 + 0x60)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(puVar4 + 0xd,puVar8,*(uint *)(iVar6 + 0x5c));
    iVar6 = *(int *)(param_1 + 0x5c);
  }
  puVar8 = (undefined4 *)(iVar6 + 0x34);
  if (puVar4 + 0x13 != puVar8) {
    if (0xf < *(uint *)(iVar6 + 0x48)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(puVar4 + 0x13,puVar8,*(uint *)(iVar6 + 0x44));
  }
  iVar6 = DAT_0065b5cc;
  *(undefined1 *)(puVar4 + 0x19) = 1;
  pvVar7 = *(void **)(iVar6 + 300);
  piVar1 = *(int **)((int)pvVar7 + 4);
  if (*(int **)((int)pvVar7 + 8) == piVar1) {
    FUN_00414080(pvVar7,piVar1,&local_18);
  }
  else {
    *piVar1 = (int)puVar4;
    *(int *)((int)pvVar7 + 4) = *(int *)((int)pvVar7 + 4) + 4;
  }
  pvVar7 = *(void **)(param_1 + 0x5c);
  if (pvVar7 != (void *)0x0) {
    FUN_004b4750((int)pvVar7);
    FUN_005adb3f(pvVar7);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00402690(local_30,"emails_sent",0xb);
  local_8 = 0;
  if (DAT_0065c294 == 0) {
    local_18 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_0065c294 = FUN_0051e500(local_18);
  }
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
    pvVar7 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar7 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
  if (iVar6 != 0) {
    if ((*(int *)(iVar6 + 0xd4) == 3) && (*(int *)(iVar6 + 0xf8) == 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_004127d0();
      FUN_004b8550();
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004b4750(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x70);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x78) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b48fd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  pvVar1 = *(void **)(param_1 + 100);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x6c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b48fd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x60)) {
    pvVar1 = *(void **)(param_1 + 0x4c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x60) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b48fd;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (0xf < *(uint *)(param_1 + 0x48)) {
    pvVar1 = *(void **)(param_1 + 0x34);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x48) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b48fd;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (0xf < *(uint *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(param_1 + 0x1c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b48fd;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pvVar1 = *(void **)(param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004b48fd:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


void __fastcall FUN_004b4910(void *param_1)

{
  FUN_004b4940(param_1);
  FUN_00591070("DETAIL","doneWithDraft()");
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  return;
}


void __fastcall FUN_004b4940(void *param_1)

{
  uint in_stack_ffffffd8;
  byte *pbVar1;
  
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x18) = 2;
  pbVar1 = (byte *)(in_stack_ffffffd8 & 0xffffff00);
  FUN_00402690(&stack0xffffffd8,&PTR_005ce008,0);
  FUN_004b5d40(param_1,*(int *)(DAT_0065b5cc + 300),pbVar1);
  *(undefined4 *)((int)param_1 + 8) = 0;
  return;
}


void __fastcall FUN_004b49a0(void *param_1)

{
  FUN_004b49d0(param_1);
  *(undefined4 *)((int)param_1 + 8) = 0;
  FUN_00591070("DETAIL","doneWithEmail()");
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  return;
}


void __fastcall FUN_004b49d0(void *param_1)

{
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x18) = 1;
  FUN_004b56a0(param_1,*(int **)(DAT_0065b5cc + 300));
  return;
}


void __fastcall FUN_004b4a00(void *param_1)

{
  FUN_004b4a20(param_1);
  *(undefined4 *)((int)param_1 + 8) = 0;
  return;
}


void __fastcall FUN_004b4a20(void *param_1)

{
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x18) = 3;
  FUN_004b53b0(param_1,*(void **)(DAT_0065b5cc + 300));
  return;
}


undefined4 __thiscall FUN_004b4a70(void *this,byte *param_1)

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
  iVar1 = *(int *)((int)this + 0x68);
  uVar7 = 0;
  uVar9 = *(int *)((int)this + 0x6c) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 0x6c);
      if (0xf < *(uint *)(iVar2 + 0x80)) {
        pbVar6 = *(byte **)(iVar2 + 0x6c);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x7c),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004b4ac9;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_004b4ac9:
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


void __thiscall FUN_004b4b10(void *this,int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  void **ppvVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *in_stack_ffffff34;
  undefined1 auStack_b4 [24];
  undefined **local_9c;
  code *local_98;
  uint in_stack_ffffff74;
  byte *pbVar10;
  void *local_54;
  void *pvStack_50;
  void *pvStack_4c;
  void *pvStack_48;
  undefined8 local_44;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bc967;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puVar1 = &stack0xfffffffc;
  if (*(void **)((int)this + 100) != (void *)0x0) {
    if (param_2 < (uint)(param_1[1] - *param_1 >> 2)) {
      puVar4 = (undefined4 *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*param_1 + param_2 * 4);
      *(undefined4 *)((int)this + 0x54) = 0;
      puVar2 = puVar4;
      if (0xf < *(uint *)((int)this + 0x58)) {
        puVar2 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)puVar2 = 0;
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`2From: `0%s^");
      local_14 = 0;
      puVar2 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      FUN_00403640(puVar4,puVar2,puVar3[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar5 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar5 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`2To  : `0%s^");
      local_14 = 1;
      puVar2 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      FUN_00403640(puVar4,puVar2,puVar3[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar5 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar5 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`2Subj: `!%s^");
      local_14 = 2;
      puVar2 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      FUN_00403640(puVar4,puVar2,puVar3[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar5 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar5 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`2---^");
      local_14 = 3;
      puVar2 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      FUN_00403640(puVar4,puVar2,puVar3[4]);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar5 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar5 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      iVar6 = *(int *)((int)this + 0x18);
      pvVar5 = (void *)(iVar6 + 0x34);
      if (0xf < *(uint *)(iVar6 + 0x48)) {
        pvVar5 = *(void **)(iVar6 + 0x34);
      }
      FUN_00403640(puVar4,pvVar5,*(uint *)(iVar6 + 0x44));
      pbVar10 = (byte *)(in_stack_ffffff74 & 0xffffff00);
      local_98 = (code *)0x4b4dc0;
      FUN_00402690(&stack0xffffff74,"emails_read",0xb);
      local_14 = 4;
      uVar8 = extraout_ECX;
      if (DAT_0065c294 == 0) {
        puVar4 = (undefined4 *)FUN_005adb0f(0x28);
        local_14 = CONCAT31(local_14._1_3_,5);
        DAT_0065c294 = FUN_0051e500(puVar4);
        uVar8 = extraout_ECX_00;
      }
      local_14 = 0xffffffff;
      FUN_0051e750(uVar8,pbVar10);
      FUN_004024e0(&stack0xffffff74,(undefined4 *)(*(int *)((int)this + 0x18) + 0x80));
      local_14 = 6;
      pvVar5 = (void *)FUN_00412700();
      local_14 = 0xffffffff;
      iVar6 = FUN_00439a90(pvVar5,pbVar10);
      if (((iVar6 != 0) && (*(char *)(*(int *)((int)this + 0x18) + 100) == '\0')) &&
         (uVar9 = 0, *(int *)(iVar6 + 0x90) - *(int *)(iVar6 + 0x8c) >> 2 != 0)) {
        do {
          FUN_004a3f20(*(int **)(*(int *)(iVar6 + 0x8c) + uVar9 * 4));
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)(*(int *)(iVar6 + 0x90) - *(int *)(iVar6 + 0x8c) >> 2));
      }
      *(undefined1 *)(*(int *)((int)this + 0x18) + 100) = 1;
      FUN_0042dcd0(*(int *)((int)this + 100));
      FUN_0042de40(*(void **)((int)this + 100),"`2Displaying `0\"%s\"`2...");
      FUN_0042dcd0(*(int *)((int)this + 100));
      FUN_00591e00((undefined1 *)&local_54,"`7[`$arrows`7 - scroll/`$return`7 - done]");
      local_14 = 7;
      iVar6 = FUN_004b3a50((int)param_1);
      if (iVar6 < 1) {
        local_9c = std::_Func_impl_no_alloc<>::vftable;
        local_98 = FUN_004b49a0;
        local_14._0_1_ = 10;
        FUN_004024e0(auStack_b4,&local_54);
        local_14._0_1_ = 0xb;
      }
      else {
        ppvVar7 = (void **)FUN_00591e00((undefined1 *)local_3c,
                                        "`7[`$arrows`7 - scroll/`7send `$r`7eply/`$return`7 - done]"
                                       );
        if (&local_54 != ppvVar7) {
          FUN_00401b20((int *)&local_54);
          local_54 = *ppvVar7;
          pvStack_50 = ppvVar7[1];
          pvStack_4c = ppvVar7[2];
          pvStack_48 = ppvVar7[3];
          local_44 = *(undefined8 *)(ppvVar7 + 4);
          ppvVar7[4] = (void *)0x0;
          ppvVar7[5] = (void *)0xf;
          *(undefined1 *)ppvVar7 = 0;
        }
        if (0xf < local_28) {
          pvVar5 = local_3c[0];
          if ((0xfff < local_28 + 1) &&
             (pvVar5 = *(void **)((int)local_3c[0] + -4),
             0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar5);
        }
        local_9c = std::_Func_impl_no_alloc<>::vftable;
        local_98 = FUN_004b49a0;
        local_14._0_1_ = 8;
        FUN_004024e0(auStack_b4,&local_54);
        local_14._0_1_ = 9;
      }
      FUN_004024e0(&stack0xffffff34,(undefined4 *)((int)this + 0x44));
      local_14 = CONCAT31(local_14._1_3_,7);
      FUN_0042bdf0(*(void **)((int)this + 100),in_stack_ffffff34);
      *(undefined4 *)((int)this + 8) = 1;
      puVar1 = puStack_20;
      if (0xf < local_44._4_4_) {
        pvVar5 = local_54;
        if ((0xfff < local_44._4_4_ + 1) &&
           (pvVar5 = *(void **)((int)local_54 + -4),
           0x1f < (uint)((int)local_54 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
        puVar1 = puStack_20;
      }
    }
    else {
      puStack_20 = &stack0xfffffffc;
      FUN_0042de40(*(void **)((int)this + 100),"Invalid email number: %d");
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined4 * __thiscall FUN_004b5070(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  size_t _Size;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  void *local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bc9b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_30 = 0;
  piVar7 = (int *)0x0;
  piVar8 = (int *)0x0;
  local_14 = (int *)0x0;
  local_3c = (int *)0x0;
  local_18 = (int *)0x0;
  local_38 = (int *)0x0;
  local_20 = (int *)0x0;
  local_34 = (int *)0x0;
  local_8 = 1;
  iVar3 = *(int *)((int)this + 0x68);
  local_24 = 0;
  local_28 = this;
  if (*(int *)((int)this + 0x6c) - iVar3 >> 2 == 0) {
LAB_004b52e8:
    uVar2 = (int)piVar8 - (int)piVar7 >> 2;
    FUN_00591070("DETAIL","News articles: %d");
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_30 = 1;
    local_2c = (int *)0x0;
    if (uVar2 != 0) {
      do {
        piVar7 = (int *)param_1[1];
        if ((int *)param_1[2] == piVar7) {
          FUN_00403840(param_1,piVar7,(undefined4 *)(local_14[(int)local_2c] + 0x1c));
        }
        else {
          FUN_004024e0(piVar7,(undefined4 *)(local_14[(int)local_2c] + 0x1c));
          param_1[1] = param_1[1] + 0x18;
        }
        local_2c = (int *)((int)local_2c + 1);
      } while (local_2c < uVar2);
    }
    if (local_14 != (int *)0x0) {
      piVar7 = local_14;
      if ((0xfff < ((int)local_20 - (int)local_14 & 0xfffffffcU)) &&
         (piVar7 = (int *)local_14[-1], 0x1f < (uint)((int)local_14 + (-4 - (int)piVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(piVar7);
    }
    ExceptionList = local_10;
    return param_1;
  }
LAB_004b50e0:
  uVar2 = FUN_004b6850(*(void **)(iVar3 + local_24 * 4),'\x01');
  if ((char)uVar2 != '\0') {
    local_1c = (int *)(*(int *)((int)local_28 + 0x68) + local_24 * 4);
    iVar3 = *local_1c;
    if (*(int *)(iVar3 + 0x84) != 0) {
      piVar5 = (int *)0x0;
      local_2c = (int *)((int)piVar8 - (int)piVar7 >> 2);
      if (local_2c != (int *)0x0) {
        do {
          iVar1 = piVar7[(int)piVar5];
          if ((*(int *)(iVar1 + 0x9c) < *(int *)(iVar3 + 0x9c)) ||
             ((*(int *)(iVar1 + 0x9c) <= *(int *)(iVar3 + 0x9c) &&
              ((piVar7 = local_14, *(int *)(iVar1 + 0x98) < *(int *)(iVar3 + 0x98) ||
               ((*(int *)(iVar1 + 0x98) <= *(int *)(iVar3 + 0x98) &&
                ((*(int *)(iVar1 + 0x94) < *(int *)(iVar3 + 0x94) ||
                 ((*(int *)(iVar1 + 0x94) <= *(int *)(iVar3 + 0x94) &&
                  ((*(int *)(iVar1 + 0x90) < *(int *)(iVar3 + 0x90) ||
                   ((*(int *)(iVar1 + 0x90) <= *(int *)(iVar3 + 0x90) &&
                    (*(int *)(iVar1 + 0x8c) < *(int *)(iVar3 + 0x8c))))))))))))))))) {
            if (piVar5 != (int *)0xffffffff) {
              piVar7 = piVar7 + (int)piVar5;
              local_2c = piVar8;
              if (local_20 == piVar8) {
                FUN_00414080(&local_3c,piVar7,local_1c);
                local_20 = local_34;
                local_14 = local_3c;
                local_18 = local_38;
              }
              else if (piVar7 == piVar8) {
                *piVar8 = *local_1c;
                local_38 = piVar8 + 1;
                local_18 = local_38;
              }
              else {
                iVar3 = *local_1c;
                _Size = (int)(local_18 + -1) - (int)piVar7;
                *local_18 = local_18[-1];
                local_38 = piVar8 + 1;
                local_18 = local_38;
                memmove((void *)((int)piVar8 - _Size),piVar7,_Size);
                *piVar7 = iVar3;
              }
              uVar2 = (int)local_18 - (int)local_14 >> 2;
              piVar7 = local_14;
              piVar8 = local_18;
              if ((uVar2 < 0xb) ||
                 (local_1c = (int *)local_14[uVar2 - 1], piVar5 = local_14, local_14 == local_18))
              goto LAB_004b52cc;
              goto LAB_004b5240;
            }
            break;
          }
          piVar5 = (int *)((int)piVar5 + 1);
        } while (piVar5 < local_2c);
      }
      if (local_2c < (int *)0xa) {
        if (local_20 == piVar8) {
          FUN_00414080(&local_3c,piVar8,local_1c);
          local_20 = local_34;
          local_14 = local_3c;
          piVar7 = local_3c;
          piVar8 = local_38;
          local_18 = local_38;
        }
        else {
          *piVar8 = *local_1c;
          piVar8 = piVar8 + 1;
          local_38 = piVar8;
          local_18 = piVar8;
        }
      }
    }
  }
  goto LAB_004b52cc;
  while (piVar5 = piVar5 + 1, piVar5 != local_18) {
LAB_004b5240:
    if ((int *)*piVar5 == local_1c) break;
  }
  if (piVar5 != local_18) {
    piVar4 = piVar5 + 1;
    piVar6 = (int *)0x0;
    local_2c = (int *)((uint)((int)local_18 + (3 - (int)piVar4)) >> 2);
    if (local_18 < piVar4) {
      local_2c = (int *)0x0;
    }
    if (local_2c != (int *)0x0) {
      do {
        if ((int *)*piVar4 != local_1c) {
          *piVar5 = *piVar4;
          piVar5 = piVar5 + 1;
        }
        piVar6 = (int *)((int)piVar6 + 1);
        piVar4 = piVar4 + 1;
      } while (piVar6 != local_2c);
    }
    local_38 = local_18;
    if (piVar5 != local_18) {
      piVar8 = piVar5;
      local_38 = piVar5;
      local_18 = piVar5;
    }
  }
LAB_004b52cc:
  local_24 = local_24 + 1;
  iVar3 = *(int *)((int)local_28 + 0x68);
  if ((uint)(*(int *)((int)local_28 + 0x6c) - iVar3 >> 2) <= local_24) goto LAB_004b52e8;
  goto LAB_004b50e0;
}


void __thiscall FUN_004b53b0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *in_stack_ffffff2c;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  uint in_stack_ffffff3c;
  undefined **local_ac;
  code *local_a8;
  undefined1 local_a4;
  int *local_a0;
  undefined4 uStack_90;
  void *pvVar9;
  byte *in_stack_ffffff7c;
  int local_5c;
  int *local_58;
  int *local_54;
  undefined1 local_4d;
  int *local_4c;
  undefined1 *local_48;
  void *local_44;
  undefined1 *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_1c = ExceptionList;
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &LAB_005bc9f8;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_44 = param_1;
  local_4c = this;
  if ((*(int *)((int)param_1 + 0x18) - *(int *)((int)param_1 + 0x14)) / 0x18 == 0) {
    pvVar9 = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
    uStack_90 = 0x4b542f;
    FUN_00402690(&stack0xffffff7c,"`7No articles in system.",0x18);
    FUN_0042ddb0(*(void **)((int)this + 100),pvVar9);
    FUN_0042dcd0(*(int *)((int)this + 100));
  }
  else {
    piVar4 = (int *)0x0;
    local_5c = 0;
    local_58 = (int *)0x0;
    local_54 = (int *)0x0;
    local_14 = 0;
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x34);
    puVar5 = (undefined1 *)((*(int *)((int)param_1 + 0x18) - *(int *)((int)param_1 + 0x14)) / 0x18);
    puStack_20 = &stack0xfffffffc;
    while (puVar5 = puVar5 + -1, local_48 = puVar5, -1 < (int)puVar5) {
      FUN_004024e0(&stack0xffffff7c,
                   (undefined4 *)(*(int *)((int)local_44 + 0x14) + (int)puVar5 * 0x18));
      pvVar9 = (void *)0x4b549f;
      local_40 = (undefined1 *)FUN_004b4a70(local_4c,in_stack_ffffff7c);
      if (local_40 != (undefined1 *)0x0) {
        piVar3 = (int *)local_4c[0xe];
        if ((int *)local_4c[0xf] == piVar3) {
          FUN_004141e0(local_4c + 0xd,piVar3,&local_48);
          puVar5 = local_48;
        }
        else {
          *piVar3 = (int)puVar5;
          local_4c[0xe] = local_4c[0xe] + 4;
        }
        uStack_90 = 0x4b54f3;
        FUN_004024e0(&stack0xffffff78,
                     (undefined4 *)(*(int *)((int)local_44 + 0x14) + (int)puVar5 * 0x18));
        FUN_004b3c60(local_44,pvVar9);
        piVar3 = (int *)FUN_00591e00((undefined1 *)local_3c,"`%c%s");
        local_14._0_1_ = 1;
        if (local_54 == piVar4) {
          FUN_004036d0(&local_5c,piVar4,piVar3);
        }
        else {
          piVar4[4] = 0;
          piVar4[5] = 0;
          iVar8 = piVar3[1];
          iVar1 = piVar3[2];
          iVar2 = piVar3[3];
          *piVar4 = *piVar3;
          piVar4[1] = iVar8;
          piVar4[2] = iVar1;
          piVar4[3] = iVar2;
          iVar8 = piVar3[5];
          piVar4[4] = piVar3[4];
          piVar4[5] = iVar8;
          local_58 = piVar4 + 6;
          piVar3[4] = 0;
          piVar3[5] = 0xf;
          *(undefined1 *)piVar3 = 0;
        }
        piVar4 = local_58;
        local_14 = (uint)local_14._1_3_ << 8;
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
    }
    local_40 = &stack0xffffff7c;
    uStack_90 = 0x4b55d2;
    FUN_00402690(&stack0xffffff7c,"** no options **",0x10);
    piVar4 = local_4c;
    local_48 = (undefined1 *)&local_ac;
    local_ac = std::_Func_impl_no_alloc<>::vftable;
    local_a8 = FUN_004b5670;
    local_a4 = local_4d;
    local_a0 = local_4c;
    local_4c = (int *)&stack0xffffff3c;
    local_14._0_1_ = 3;
    pcVar7 = "`7Articles [`$Q`7uit]";
    piVar3 = (int *)(in_stack_ffffff3c & 0xffffff00);
    puVar6 = (undefined4 *)0x4b561f;
    FUN_00402690(&stack0xffffff3c,"`7Articles [`$Q`7uit]",0x15);
    local_14._0_1_ = 4;
    iVar8 = *piVar4;
    FUN_0042b900(&stack0xffffff2c,&local_5c);
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_0042cbe0((void *)piVar4[0x19],in_stack_ffffff2c,puVar6,pcVar7,iVar8,piVar3);
    FUN_004025a0(&local_5c);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_004b5670(void *this,int param_1)

{
  *(int *)this = param_1;
  FUN_004b3d20(this,*(int *)(DAT_0065b5cc + 300),*(uint *)(*(int *)((int)this + 0x34) + param_1 * 4)
              );
  return;
}


void __thiscall FUN_004b56a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *in_stack_ffffff40;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  uint in_stack_ffffff50;
  undefined **local_98;
  code *local_94;
  undefined1 local_90;
  int *local_8c;
  undefined4 uStack_7c;
  uint in_stack_ffffff90;
  int local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 *local_3c;
  undefined1 *local_38;
  int *local_34;
  undefined1 local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  local_8 = -1;
  puStack_c = &LAB_005bca48;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  local_40 = this;
  if (*(int *)((int)this + 100) != 0) {
    if ((uint)(param_1[1] - *param_1) < 4) {
      pvVar4 = (void *)(in_stack_ffffff90 & 0xffffff00);
      uStack_7c = 0x4b570b;
      FUN_00402690(&stack0xffffff90,"Inbox empty.",0xc);
      FUN_0042ddb0(*(void **)((int)this + 100),pvVar4);
    }
    else {
      piVar5 = (int *)0x0;
      local_4c = 0;
      local_48 = (int *)0x0;
      local_44 = (int *)0x0;
      local_3c = (undefined4 *)((int)this + 0xc);
      local_8 = 0;
      *(undefined4 *)((int)this + 0x10) = *local_3c;
      puVar7 = local_3c;
      puVar6 = (undefined1 *)(param_1[1] - *param_1 >> 2);
      while (local_38 = puVar6 + -1, -1 < (int)local_38) {
        puVar6 = local_38;
        if (*(char *)(*(int *)(*param_1 + (int)local_38 * 4) + 0x9c) == '\0') {
          piVar3 = (int *)puVar7[1];
          if ((int *)puVar7[2] == piVar3) {
            FUN_004141e0(puVar7,piVar3,&local_38);
            param_1 = local_34;
          }
          else {
            *piVar3 = (int)local_38;
            puVar7[1] = puVar7[1] + 4;
          }
          puVar6 = local_38;
          local_2d = *(undefined1 *)(*(int *)(*param_1 + (int)local_38 * 4) + 100);
          piVar3 = (int *)FUN_00591e00((undefined1 *)local_2c,"`%c%s : `%c%s");
          local_8._0_1_ = 1;
          if (local_44 == piVar5) {
            FUN_004036d0(&local_4c,piVar5,piVar3);
          }
          else {
            piVar5[4] = 0;
            piVar5[5] = 0;
            iVar9 = piVar3[1];
            iVar1 = piVar3[2];
            iVar2 = piVar3[3];
            *piVar5 = *piVar3;
            piVar5[1] = iVar9;
            piVar5[2] = iVar1;
            piVar5[3] = iVar2;
            iVar9 = piVar3[5];
            piVar5[4] = piVar3[4];
            piVar5[5] = iVar9;
            local_48 = piVar5 + 6;
            piVar3[4] = 0;
            piVar3[5] = 0xf;
            *(undefined1 *)piVar3 = 0;
          }
          piVar5 = local_48;
          local_8 = (uint)local_8._1_3_ << 8;
          puVar7 = local_3c;
          param_1 = local_34;
          if (0xf < local_18) {
            pvVar4 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar4 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar4);
            puVar7 = local_3c;
            param_1 = local_34;
          }
        }
      }
      local_3c = (undefined4 *)&stack0xffffff90;
      uStack_7c = 0x4b5881;
      FUN_00402690(&stack0xffffff90,"** no options **",0x10);
      piVar5 = local_40;
      local_38 = (undefined1 *)&local_98;
      local_98 = std::_Func_impl_no_alloc<>::vftable;
      local_94 = FUN_004b62a0;
      local_90 = local_2d;
      local_8c = local_40;
      local_40 = (int *)&stack0xffffff50;
      local_8._0_1_ = 3;
      pcVar8 = "Messages `7- `%Inbox `7- [`$S`7end message] [`$D`7elete] [`$Q`7uit]";
      piVar3 = (int *)(in_stack_ffffff50 & 0xffffff00);
      puVar7 = (undefined4 *)0x4b58ce;
      FUN_00402690(&stack0xffffff50,
                   "Messages `7- `%Inbox `7- [`$S`7end message] [`$D`7elete] [`$Q`7uit]",0x43);
      local_8._0_1_ = 4;
      iVar9 = *piVar5;
      FUN_0042b900(&stack0xffffff40,&local_4c);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0042cbe0((void *)piVar5[0x19],in_stack_ffffff40,puVar7,pcVar8,iVar9,piVar3);
      FUN_004025a0(&local_4c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004b5920(void *this,int param_1,int param_2)

{
  undefined4 *this_00;
  byte *pbVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined4 *in_stack_ffffff5c;
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  undefined **local_74;
  code *local_70;
  void *local_6c;
  undefined4 uStack_5c;
  int local_34;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bca98;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 100) != 0) {
    local_34 = 0;
    uVar11 = 0;
    while( true ) {
      puVar4 = DAT_0065c270;
      if (DAT_0065c270 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)FUN_005adb0f(0x2c);
        DAT_0065c270 = puVar4;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 4) = 0;
        *(undefined4 *)(puVar4 + 8) = 0;
        *(undefined4 *)(puVar4 + 0xc) = 0;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        *(undefined4 *)(puVar4 + 0x14) = 0;
        *(undefined4 *)(puVar4 + 0x18) = 0;
        *(undefined4 *)(puVar4 + 0x1c) = 0;
        *(undefined4 *)(puVar4 + 0x20) = 0;
        *(undefined4 *)(puVar4 + 0x24) = 0;
        *(undefined4 *)(puVar4 + 0x28) = 0;
      }
      if ((uint)(*(int *)(puVar4 + 0x24) - *(int *)(puVar4 + 0x20) >> 2) <= uVar11) break;
      pbVar1 = *(byte **)(param_1 + 0x24);
      iVar5 = FUN_00412700();
      pbVar6 = FUN_004143f0(*(byte **)(param_1 + 0x20),*(byte **)(param_1 + 0x24),
                            *(byte **)(*(int *)(iVar5 + 0x20) + uVar11 * 4));
      if (pbVar6 == pbVar1) {
        iVar5 = FUN_00412700();
        uVar12 = 0;
        iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + uVar11 * 4);
        iVar9 = *(int *)(iVar5 + 0x48);
        if (*(int *)(iVar5 + 0x4c) - iVar9 >> 2 != 0) {
          do {
            cVar3 = FUN_004a23b0(*(void **)(iVar9 + uVar12 * 4),
                                 *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
            if (cVar3 == '\0') goto LAB_004b5add;
            uVar12 = uVar12 + 1;
            iVar9 = *(int *)(iVar5 + 0x48);
          } while (uVar12 < (uint)(*(int *)(iVar5 + 0x4c) - iVar9 >> 2));
        }
        uVar12 = 0;
        iVar9 = *(int *)(iVar5 + 0x54);
        if (*(int *)(iVar5 + 0x58) - iVar9 >> 2 != 0) {
          do {
            iVar2 = *(int *)(iVar9 + uVar12 * 4);
            uVar13 = 0;
            if (*(int *)(iVar2 + 0x68) - *(int *)(iVar2 + 100) >> 2 != 0) {
              do {
                cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar9 + uVar12 * 4) + 100) +
                                               uVar13 * 4),
                                     *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
                if (cVar3 == '\0') goto LAB_004b5acd;
                iVar9 = *(int *)(iVar5 + 0x54);
                uVar13 = uVar13 + 1;
                iVar2 = *(int *)(iVar9 + uVar12 * 4);
              } while (uVar13 < (uint)(*(int *)(iVar2 + 0x68) - *(int *)(iVar2 + 100) >> 2));
            }
            bVar14 = local_34 == param_2;
            local_34 = local_34 + 1;
            if (bVar14) {
              this_00 = (undefined4 *)((int)this + 0x44);
              *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar9 + uVar12 * 4);
              *(undefined4 *)((int)this + 0x54) = 0;
              puVar7 = this_00;
              if (0xf < *(uint *)((int)this + 0x58)) {
                puVar7 = (undefined4 *)*this_00;
              }
              *(undefined1 *)puVar7 = 0;
              uStack_5c = 0x4b5b23;
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2To  : `0%s^");
              local_8 = 0;
              puVar7 = puVar8;
              if (0xf < (uint)puVar8[5]) {
                puVar7 = (undefined4 *)*puVar8;
              }
              FUN_00403640(this_00,puVar7,puVar8[4]);
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
              uStack_5c = 0x4b5b9c;
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2Subj: `!%s^");
              local_8 = 1;
              puVar7 = puVar8;
              if (0xf < (uint)puVar8[5]) {
                puVar7 = (undefined4 *)*puVar8;
              }
              FUN_00403640(this_00,puVar7,puVar8[4]);
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
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`2---^");
              local_8 = 2;
              puVar7 = puVar8;
              if (0xf < (uint)puVar8[5]) {
                puVar7 = (undefined4 *)*puVar8;
              }
              FUN_00403640(this_00,puVar7,puVar8[4]);
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
              iVar5 = *(int *)((int)this + 0x5c);
              pvVar10 = (void *)(iVar5 + 0x4c);
              if (0xf < *(uint *)(iVar5 + 0x60)) {
                pvVar10 = *(void **)(iVar5 + 0x4c);
              }
              FUN_00403640(this_00,pvVar10,*(uint *)(iVar5 + 0x5c));
              if (*(int *)((int)this + 100) != 0) {
                FUN_0042dcd0(*(int *)((int)this + 100));
                uStack_5c = 0x4b5ca8;
                FUN_0042de40(*(void **)((int)this + 100),"`2Displaying `0\"%s\"`2...");
                FUN_0042dcd0(*(int *)((int)this + 100));
                local_74 = std::_Func_impl_no_alloc<>::vftable;
                local_70 = FUN_004b4910;
                local_8 = 3;
                local_7c = 0;
                local_78 = 0xf;
                local_8c[0] = 0;
                local_6c = this;
                FUN_00402690(local_8c,"7 [`$S`7end / `$enter`7 - done]",0x1f);
                local_8 = CONCAT31(local_8._1_3_,4);
                FUN_004024e0(&stack0xffffff5c,this_00);
                local_8 = 0xffffffff;
                FUN_0042bdf0(*(void **)((int)this + 100),in_stack_ffffff5c);
              }
              *(undefined4 *)((int)this + 8) = 2;
              goto LAB_004b5d1f;
            }
LAB_004b5acd:
            uVar12 = uVar12 + 1;
            iVar9 = *(int *)(iVar5 + 0x54);
          } while (uVar12 < (uint)(*(int *)(iVar5 + 0x58) - iVar9 >> 2));
        }
      }
LAB_004b5add:
      uVar11 = uVar11 + 1;
    }
  }
LAB_004b5d1f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004b5d40(void *this,int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte **ppbVar9;
  void *pvVar10;
  int *piVar11;
  int *piVar12;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_ffffff40;
  undefined4 *puVar13;
  char *pcVar14;
  uint in_stack_ffffff50;
  undefined **local_98;
  code *local_94;
  undefined1 local_90;
  undefined1 *local_8c;
  undefined4 uStack_7c;
  undefined1 local_70 [4];
  undefined4 uStack_6c;
  int local_4c;
  int *local_48;
  int *local_44;
  undefined1 *local_40;
  byte *local_3c;
  uint local_38;
  byte *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bcb08;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_40 = this;
  if ((byte **)((int)this + 0x1c) != &param_2) {
    ppbVar9 = &param_2;
    if (0xf < in_stack_0000001c) {
      ppbVar9 = (byte **)param_2;
    }
    FUN_00402690((byte **)((int)this + 0x1c),ppbVar9,in_stack_00000018);
  }
  piVar12 = (int *)0x0;
  local_4c = 0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_38 = 0;
  pbVar5 = DAT_0065c270;
  do {
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = (byte *)FUN_005adb0f(0x2c);
      DAT_0065c270 = pbVar5;
      *pbVar5 = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[0x14] = 0;
      pbVar5[0x15] = 0;
      pbVar5[0x16] = 0;
      pbVar5[0x17] = 0;
      pbVar5[0x18] = 0;
      pbVar5[0x19] = 0;
      pbVar5[0x1a] = 0;
      pbVar5[0x1b] = 0;
      pbVar5[0x1c] = 0;
      pbVar5[0x1d] = 0;
      pbVar5[0x1e] = 0;
      pbVar5[0x1f] = 0;
      pbVar5[0x20] = 0;
      pbVar5[0x21] = 0;
      pbVar5[0x22] = 0;
      pbVar5[0x23] = 0;
      pbVar5[0x24] = 0;
      pbVar5[0x25] = 0;
      pbVar5[0x26] = 0;
      pbVar5[0x27] = 0;
      pbVar5[0x28] = 0;
      pbVar5[0x29] = 0;
      pbVar5[0x2a] = 0;
      pbVar5[0x2b] = 0;
      local_3c = pbVar5;
    }
    puVar3 = local_40;
    if ((uint)(*(int *)(pbVar5 + 0x24) - *(int *)(pbVar5 + 0x20) >> 2) <= local_38) {
      if (*(int *)(local_40 + 100) != 0) {
        iVar8 = (int)piVar12 - local_4c >> 0x1f;
        if (((int)piVar12 - local_4c) / 0x18 + iVar8 == iVar8) {
          local_40 = local_70;
          local_70[0] = 0;
          uStack_7c = 0x4b61d2;
          FUN_00402690(local_70,"** no options **",0x10);
          local_3c = (byte *)&local_98;
          local_98 = std::_Func_impl_no_alloc<>::vftable;
          local_94 = FUN_004b62f0;
          local_90 = local_48._0_1_;
          local_8c = puVar3;
          local_34 = &stack0xffffff50;
          local_8._0_1_ = 7;
          pcVar14 = "Messages `7- `%Drafts `7- [`$I`7nbox] [`$Q`7uit]";
          piVar12 = (int *)(in_stack_ffffff50 & 0xffffff00);
          puVar13 = (undefined4 *)0x4b621c;
          FUN_00402690(&stack0xffffff50,"Messages `7- `%Drafts `7- [`$I`7nbox] [`$Q`7uit]",0x30);
          local_8._0_1_ = 8;
        }
        else {
          local_40 = local_70;
          local_70[0] = 0;
          uStack_7c = 0x4b615d;
          FUN_00402690(local_70,"** no options **",0x10);
          local_3c = (byte *)&local_98;
          local_98 = std::_Func_impl_no_alloc<>::vftable;
          local_94 = FUN_004b62f0;
          local_90 = local_48._0_1_;
          local_8c = puVar3;
          local_34 = &stack0xffffff50;
          local_8._0_1_ = 4;
          pcVar14 = "Messages `7- `%Drafts `7- [`$I`7nbox] [`$Q`7uit]";
          piVar12 = (int *)(in_stack_ffffff50 & 0xffffff00);
          puVar13 = (undefined4 *)0x4b61a7;
          FUN_00402690(&stack0xffffff50,"Messages `7- `%Drafts `7- [`$I`7nbox] [`$Q`7uit]",0x30);
          local_8._0_1_ = 5;
        }
        iVar8 = -1;
        FUN_0042b900(&stack0xffffff40,&local_4c);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042cbe0(*(void **)(puVar3 + 100),in_stack_ffffff40,puVar13,pcVar14,iVar8,piVar12);
      }
      FUN_004025a0(&local_4c);
      if (0xf < in_stack_0000001c) {
        pbVar5 = param_2;
        if ((0xfff < in_stack_0000001c + 1) &&
           (pbVar5 = *(byte **)(param_2 + -4), (byte *)0x1f < param_2 + (-4 - (int)pbVar5))) {
LAB_004b626a:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pbVar5);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar6 = *(byte **)(param_1 + 0x24);
    local_3c = pbVar6;
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = (byte *)FUN_005adb0f(0x2c);
      DAT_0065c270 = pbVar5;
      *pbVar5 = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[0x14] = 0;
      pbVar5[0x15] = 0;
      pbVar5[0x16] = 0;
      pbVar5[0x17] = 0;
      pbVar5[0x18] = 0;
      pbVar5[0x19] = 0;
      pbVar5[0x1a] = 0;
      pbVar5[0x1b] = 0;
      pbVar5[0x1c] = 0;
      pbVar5[0x1d] = 0;
      pbVar5[0x1e] = 0;
      pbVar5[0x1f] = 0;
      pbVar5[0x20] = 0;
      pbVar5[0x21] = 0;
      pbVar5[0x22] = 0;
      pbVar5[0x23] = 0;
      pbVar5[0x24] = 0;
      pbVar5[0x25] = 0;
      pbVar5[0x26] = 0;
      pbVar5[0x27] = 0;
      pbVar5[0x28] = 0;
      pbVar5[0x29] = 0;
      pbVar5[0x2a] = 0;
      pbVar5[0x2b] = 0;
      pbVar6 = *(byte **)(param_1 + 0x24);
      local_34 = pbVar5;
    }
    pbVar6 = FUN_004143f0(*(byte **)(param_1 + 0x20),pbVar6,
                          *(byte **)(*(int *)(pbVar5 + 0x20) + local_38 * 4));
    if (pbVar6 == local_3c) {
      ppbVar9 = &param_2;
      if (0xf < in_stack_0000001c) {
        ppbVar9 = (byte **)param_2;
      }
      uVar7 = FUN_004031f0((byte *)ppbVar9,in_stack_00000018,(byte *)&PTR_005ce008,0);
      if ((char)uVar7 == '\0') {
        iVar8 = FUN_00412700();
        pbVar5 = *(byte **)(*(int *)(iVar8 + 0x20) + local_38 * 4);
        ppbVar9 = &param_2;
        if (0xf < in_stack_0000001c) {
          ppbVar9 = (byte **)param_2;
        }
        pbVar6 = pbVar5;
        if (0xf < *(uint *)(pbVar5 + 0x14)) {
          pbVar6 = *(byte **)pbVar5;
        }
        uVar7 = FUN_004031f0(pbVar6,*(uint *)(pbVar5 + 0x10),(byte *)ppbVar9,in_stack_00000018);
        pbVar5 = DAT_0065c270;
        if ((char)uVar7 == '\0') goto LAB_004b610d;
      }
      iVar8 = FUN_00412700();
      pbVar6 = *(byte **)(*(int *)(iVar8 + 0x20) + local_38 * 4);
      local_34 = (byte *)0x0;
      iVar8 = *(int *)(pbVar6 + 0x48);
      local_3c = pbVar6;
      if (*(int *)(pbVar6 + 0x4c) - iVar8 >> 2 != 0) {
        do {
          cVar4 = FUN_004a23b0(*(void **)(iVar8 + (int)local_34 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          pbVar5 = DAT_0065c270;
          if (cVar4 == '\0') goto LAB_004b610d;
          iVar8 = *(int *)(pbVar6 + 0x48);
          local_34 = local_34 + 1;
        } while (local_34 < (byte *)(*(int *)(pbVar6 + 0x4c) - iVar8 >> 2));
      }
      iVar8 = *(int *)(pbVar6 + 0x54);
      local_34 = (byte *)0x0;
      pbVar5 = DAT_0065c270;
      if (*(int *)(pbVar6 + 0x58) - iVar8 >> 2 != 0) {
        do {
          local_2d = '\x01';
          piVar11 = (int *)((int)local_34 * 4 + iVar8);
          uVar7 = 0;
          cVar4 = local_2d;
          if (*(int *)(*piVar11 + 0x68) - *(int *)(*piVar11 + 100) >> 2 != 0) {
            do {
              cVar4 = FUN_004a23b0(*(void **)(*(int *)(*piVar11 + 100) + uVar7 * 4),
                                   *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
              if (cVar4 == '\0') {
                cVar4 = '\0';
                break;
              }
              uVar7 = uVar7 + 1;
              piVar11 = (int *)(*(int *)(local_3c + 0x54) + (int)local_34 * 4);
              cVar4 = local_2d;
            } while (uVar7 < (uint)(*(int *)(*piVar11 + 0x68) - *(int *)(*piVar11 + 100) >> 2));
          }
          pbVar6 = local_3c;
          if (cVar4 != '\0') {
            uStack_6c = 0x4b604c;
            piVar11 = (int *)FUN_00591e00((undefined1 *)local_2c,"`%%To:%s `7: `%%%s");
            local_8._0_1_ = 2;
            if (local_44 == piVar12) {
              FUN_004036d0(&local_4c,piVar12,piVar11);
            }
            else {
              piVar12[4] = 0;
              piVar12[5] = 0;
              iVar8 = piVar11[1];
              iVar1 = piVar11[2];
              iVar2 = piVar11[3];
              *piVar12 = *piVar11;
              piVar12[1] = iVar8;
              piVar12[2] = iVar1;
              piVar12[3] = iVar2;
              iVar8 = piVar11[5];
              piVar12[4] = piVar11[4];
              piVar12[5] = iVar8;
              local_48 = piVar12 + 6;
              piVar11[4] = 0;
              piVar11[5] = 0xf;
              *(undefined1 *)piVar11 = 0;
            }
            piVar12 = local_48;
            local_8 = CONCAT31(local_8._1_3_,1);
            if (0xf < local_18) {
              pvVar10 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar10 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_004b626a;
              FUN_005adb3f(pvVar10);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
          iVar8 = *(int *)(pbVar6 + 0x54);
          local_34 = local_34 + 1;
          pbVar5 = DAT_0065c270;
        } while (local_34 < (byte *)(*(int *)(pbVar6 + 0x58) - iVar8 >> 2));
      }
    }
LAB_004b610d:
    local_38 = local_38 + 1;
  } while( true );
}


void __thiscall FUN_004b62a0(void *this,int param_1)

{
  if (param_1 == -1) {
    FUN_004b56a0(this,*(int **)(DAT_0065b5cc + 300));
    return;
  }
  *(int *)this = param_1;
  FUN_004b4b10(this,*(int **)(DAT_0065b5cc + 300),*(uint *)(*(int *)((int)this + 0xc) + param_1 * 4)
              );
  return;
}


void __thiscall FUN_004b62f0(void *this,int param_1)

{
  uint in_stack_ffffffd8;
  byte *pbVar1;
  
  if (param_1 == -1) {
    pbVar1 = (byte *)(in_stack_ffffffd8 & 0xffffff00);
    FUN_00402690(&stack0xffffffd8,&PTR_005ce008,0);
    FUN_004b5d40(this,*(int *)(DAT_0065b5cc + 300),pbVar1);
    return;
  }
  FUN_004b5920(this,*(int *)(DAT_0065b5cc + 300),param_1);
  return;
}


void __fastcall FUN_004b6360(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (uVar1 = 0, *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2 != 0)) {
    do {
      FUN_004b6960(*(void **)(*(int *)(param_1 + 0x68) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2));
  }
  return;
}


void __thiscall FUN_004b63c0(void *this,void *param_1,uint param_2)

{
  byte *pbVar1;
  int *this_00;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *in_stack_ffffffa4;
  void *local_34 [5];
  uint local_20;
  byte *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bcb39;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar5 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    while (*(uint *)*puVar5 != param_2) {
      puVar5 = puVar5 + 1;
      if (puVar5 == *(undefined4 **)(DAT_0065b5cc + 0x40)) {
        return;
      }
    }
    if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
       ((ExceptionList = &local_10, iVar3 = FUN_0051fc00((uint *)*puVar5,1), iVar3 != 0 ||
        ((*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3 &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8) == 2)))))) {
      iVar3 = *(int *)((int)this + 0x68);
      local_14 = 0;
      param_2 = 0;
      if (*(int *)((int)this + 0x6c) - iVar3 >> 2 != 0) {
        do {
          FUN_004024e0(local_34,(undefined4 *)(*(int *)(param_2 * 4 + iVar3) + 0x6c));
          pbVar1 = *(byte **)((int)param_1 + 0x18);
          local_18 = FUN_004143f0(*(byte **)((int)param_1 + 0x14),pbVar1,(byte *)local_34);
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
          if (local_18 == pbVar1) {
            iVar3 = param_2 * 4;
            FUN_004024e0(&stack0xffffffa4,
                         (undefined4 *)(*(int *)(*(int *)((int)this + 0x68) + iVar3) + 0x6c));
            bVar2 = FUN_004b3c60(param_1,in_stack_ffffffa4);
            if ((bVar2 == 0) &&
               (uVar4 = FUN_004b6850(*(void **)(*(int *)((int)this + 0x68) + iVar3),'\x01'),
               (char)uVar4 != '\0')) {
              this_00 = *(int **)((int)param_1 + 0x18);
              puVar5 = (undefined4 *)(*(int *)(iVar3 + *(int *)((int)this + 0x68)) + 0x6c);
              if (*(int **)((int)param_1 + 0x1c) == this_00) {
                FUN_00403840((void *)((int)param_1 + 0x14),this_00,puVar5);
              }
              else {
                FUN_004024e0(this_00,puVar5);
                *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + 0x18;
              }
              local_14 = local_14 + 1;
            }
          }
          iVar3 = *(int *)((int)this + 0x68);
          param_2 = param_2 + 1;
        } while (param_2 < (uint)(*(int *)((int)this + 0x6c) - iVar3 >> 2));
      }
      FUN_00591070("WORLD","%d/%d articles synced");
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004b65c0(int param_1)

{
  int iVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  int iVar5;
  uint local_34;
  undefined4 ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcb68;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x74);
    local_34 = 0;
    if (*(int *)(param_1 + 0x78) - iVar5 >> 2 != 0) {
      do {
        FUN_004024e0(local_30,(undefined4 *)(*(int *)(local_34 * 4 + iVar5) + 4));
        local_8 = 0;
        ppppuVar3 = local_30;
        if (0xf < local_1c) {
          ppppuVar3 = (undefined4 ****)local_30[0];
        }
        ppppuVar2 = local_30;
        if (0xf < local_1c) {
          ppppuVar2 = (undefined4 ****)local_30[0];
        }
        iVar5 = 0;
        iVar4 = (local_20 + (int)ppppuVar3) - (int)ppppuVar2;
        if ((undefined4 ****)(local_20 + (int)ppppuVar3) < ppppuVar2) {
          iVar4 = 0;
        }
        if (iVar4 != 0) {
          do {
            iVar1 = toupper((int)*(char *)(iVar5 + (int)ppppuVar2));
            *(char *)(iVar5 + (int)ppppuVar3) = (char)iVar1;
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar4);
        }
        FUN_0042de40(*(void **)(param_1 + 100)," `2%s.%s");
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
          ppppuVar3 = (undefined4 ****)local_30[0];
          if ((0xfff < local_1c + 1) &&
             (ppppuVar3 = (undefined4 ****)local_30[0][-1],
             0x1f < (uint)((int)local_30[0] + (-4 - (int)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppuVar3);
        }
        iVar5 = *(int *)(param_1 + 0x74);
        local_34 = local_34 + 1;
      } while (local_34 < (uint)(*(int *)(param_1 + 0x78) - iVar5 >> 2));
      iVar4 = *(int *)(param_1 + 100);
    }
    FUN_0042dcd0(iVar4);
    FUN_0042de40(*(void **)(param_1 + 100),"`2File count: %d");
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004b6760(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_005adb3f(this);
  }
  return;
}


int __fastcall FUN_004b6780(int param_1)

{
  return param_1 + 4;
}


TypeDescriptor * FUN_004b6790(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_004b67a0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}


void __thiscall FUN_004b67d0(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_005adb3f(this);
  }
  return;
}


TypeDescriptor * FUN_004b67f0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_004b6800(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


void __fastcall FUN_004b6820(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004b6828. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 4))();
  return;
}


void __thiscall FUN_004b6830(void *this,undefined4 *param_1)

{
  (**(code **)((int)this + 4))(*param_1);
  return;
}


uint __thiscall FUN_004b6850(void *this,char param_1)

{
  float fVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(DAT_0065b5cc + 0xd0) != 0) {
    in_EAX = *(uint *)((int)this + 0x9c);
    if (((int)in_EAX <= *(int *)(DAT_0065b444 + 400)) &&
       (((int)in_EAX < *(int *)(DAT_0065b444 + 400) ||
        ((in_EAX = *(uint *)((int)this + 0x98), (int)in_EAX <= *(int *)(DAT_0065b444 + 0x18c) &&
         (((int)in_EAX < *(int *)(DAT_0065b444 + 0x18c) ||
          ((in_EAX = *(uint *)((int)this + 0x94), (int)in_EAX <= *(int *)(DAT_0065b444 + 0x188) &&
           (((int)in_EAX < *(int *)(DAT_0065b444 + 0x188) ||
            ((in_EAX = *(uint *)((int)this + 0x90), (int)in_EAX <= *(int *)(DAT_0065b444 + 0x184) &&
             (((int)in_EAX < *(int *)(DAT_0065b444 + 0x184) ||
              (in_EAX = *(uint *)((int)this + 0x8c), (int)in_EAX <= *(int *)(DAT_0065b444 + 0x180)))
             )))))))))))))) {
      uVar3 = 0;
      iVar2 = *(int *)((int)this + 0xd4);
      in_EAX = 0;
      if (*(int *)((int)this + 0xd8) - iVar2 >> 2 != 0) {
        do {
          in_EAX = FUN_004a23b0(*(void **)(iVar2 + uVar3 * 4),
                                *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          if ((char)in_EAX == '\0') goto LAB_004b694e;
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)((int)this + 0xd4);
          in_EAX = *(int *)((int)this + 0xd8) - iVar2 >> 2;
        } while (uVar3 < in_EAX);
      }
      if (param_1 != '\0') {
        fVar1 = *(float *)((int)this + 100);
        in_EAX = (uint)CONCAT21((short)(in_EAX >> 0x10),
                                (fVar1 == 0.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < 0.0) << 8;
        if (fVar1 != 0.0) goto LAB_004b694e;
      }
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
LAB_004b694e:
  return in_EAX & 0xffffff00;
}


undefined4 __fastcall FUN_004b6960(void *param_1)

{
  uint uVar1;
  int iVar2;
  float in_XMM1_Da;
  float fVar3;
  
  uVar1 = FUN_004b6850(param_1,'\0');
  if ((char)uVar1 != '\0') {
    fVar3 = *(float *)((int)param_1 + 100);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                     CONCAT11((fVar3 == -1.0) << 6 | NAN(fVar3) << 2 | 2U | fVar3 < -1.0,(char)uVar1
                             ));
    if (fVar3 == -1.0) {
      *(float *)((int)param_1 + 100) = *(float *)((int)param_1 + 0x68);
      if (*(float *)((int)param_1 + 0x68) == 0.0) {
        uVar1 = FUN_00591070("DETAIL","Article \'%s\' ready to publish now");
      }
      else {
        uVar1 = FUN_00591070("DETAIL","Article \'%s\' ready to publish in time: %.02f");
      }
    }
  }
  if ((0.0 <= *(float *)((int)param_1 + 100)) &&
     (fVar3 = *(float *)((int)param_1 + 100) - ((in_XMM1_Da * 24.0) / 60.0) / 60.0,
     *(float *)((int)param_1 + 100) = fVar3, fVar3 <= 0.0)) {
    iVar2 = *(int *)((int)param_1 + 0xb8);
    *(undefined4 *)((int)param_1 + 100) = 0;
    *(undefined4 *)((int)param_1 + 0xa0) = *(undefined4 *)((int)param_1 + 0x88);
    *(undefined4 *)((int)param_1 + 0xa4) = *(undefined4 *)((int)param_1 + 0x8c);
    *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)((int)param_1 + 0x90);
    *(undefined4 *)((int)param_1 + 0xac) = *(undefined4 *)((int)param_1 + 0x94);
    *(undefined8 *)((int)param_1 + 0xb0) = *(undefined8 *)((int)param_1 + 0x98);
    if (0 < iVar2) {
      iVar2 = FUN_004b37d0((undefined4 *)((int)param_1 + 0xa0),iVar2);
    }
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


undefined1 * __fastcall FUN_004b6a70(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xf;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xf;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xf;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xf;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xf;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xf;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 2;
  *(undefined4 *)(param_1 + 0xf8) = 2;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0;
  return param_1;
}


void * __thiscall FUN_004b6b90(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  double dVar5;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3198;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(this,&param_1);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar4 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar4 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar4) {
    dVar5 = -2.5;
  }
  else {
    dVar5 = 2.5;
  }
  *(int *)((int)this + 0x24) = (int)dVar5;
  iVar2 = rand();
  *(float *)((int)this + 0x18) = (float)(iVar2 % 100 + 1) / 100.0;
  iVar2 = rand();
  *(float *)((int)this + 0x1c) = (float)(iVar2 % 100 + 1) / 100.0;
  iVar2 = rand();
  *(int *)((int)this + 0x20) = iVar2 % 5;
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar3 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_004b6ca0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0x3c]) {
    pvVar1 = (void *)param_1[0x37];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x3c] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xf;
  *(undefined1 *)(param_1 + 0x37) = 0;
  if (0xf < (uint)param_1[0x36]) {
    pvVar1 = (void *)param_1[0x31];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x36] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0xf;
  *(undefined1 *)(param_1 + 0x31) = 0;
  if (0xf < (uint)param_1[0x30]) {
    pvVar1 = (void *)param_1[0x2b];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x30] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0xf;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  if (0xf < (uint)param_1[0x2a]) {
    pvVar1 = (void *)param_1[0x25];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x2a] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0xf;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (0xf < (uint)param_1[0x24]) {
    pvVar1 = (void *)param_1[0x1f];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x24] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0xf;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (0xf < (uint)param_1[0x1e]) {
    pvVar1 = (void *)param_1[0x19];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x1e] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xf;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (0xf < (uint)param_1[0x18]) {
    pvVar1 = (void *)param_1[0x13];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x18] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0xf;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (0xf < (uint)param_1[0x11]) {
    pvVar1 = (void *)param_1[0xc];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x11] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004b6f9c;
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004b6f9c:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


void FUN_004b6fb0(void)

{
  char ****ppppcVar1;
  FILE *_File;
  int iVar2;
  void *pvVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcba0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0058f040((int *)local_2c);
  local_8 = 0;
  FUN_00403640(local_2c,"stats.dat",9);
  ppppcVar1 = local_2c;
  if (0xf < local_18) {
    ppppcVar1 = (char ****)local_2c[0];
  }
  _File = fopen((char *)ppppcVar1,(char *)&_Mode_0060f660);
  FUN_00591070(&DAT_005cdc70,"Loading scenario stats...");
  fread(&local_4c,4,1,_File);
  if (local_4c == 0xa805b) {
    fread(local_5c,4,1,_File);
    fread(&local_48,4,1,_File);
    iVar4 = 0;
    if (0 < local_48) {
      do {
        FUN_004b88b0((undefined1 *)local_44,_File);
        local_8 = CONCAT31(local_8._1_3_,1);
        fread(&local_50,4,1,_File);
        pbVar5 = (byte *)0x1;
        fread(&local_54,4,1,_File);
        fread(&local_58,4,1,_File);
        fread(local_60,4,1,_File);
        fread(local_64,4,1,_File);
        FUN_004024e0(&stack0xffffff6c,local_44);
        iVar2 = FUN_004a82e0(pbVar5);
        if (iVar2 == 0) {
          FUN_00591070("ERROR","Scenario \'%s\' in stats is unknown.");
        }
        else {
          *(undefined4 *)(iVar2 + 0x3c4) = local_50;
          *(undefined4 *)(iVar2 + 0x3d0) = local_54;
          *(undefined4 *)(iVar2 + 0x3d4) = local_58;
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pvVar3 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar3 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) goto LAB_004b7192;
          FUN_005adb3f(pvVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_48);
    }
    fclose(_File);
    FUN_00591070("DETAIL","Loaded scenario stats from %f.");
  }
  if (0xf < local_18) {
    ppppcVar1 = (char ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppcVar1 = (char ****)local_2c[0][-1],
       (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar1)))) {
LAB_004b7192:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Type propagation algorithm not settling

void FUN_004b71c0(void)

{
  undefined4 *puVar1;
  char *******pppppppcVar2;
  FILE *_File;
  uint uVar3;
  int *_Str;
  int local_40 [4];
  undefined4 *local_30;
  char *******local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcbd8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0058f040((int *)local_2c);
  local_8 = 0;
  FUN_00403640(local_2c,"stats.dat",9);
  pppppppcVar2 = (char *******)local_2c;
  if (0xf < local_18) {
    pppppppcVar2 = local_2c[0];
  }
  _File = fopen((char *)pppppppcVar2,(char *)&_Mode_0060f6d4);
  _Str = local_40 + 2;
  local_40[2] = 0xa805b;
  fwrite(_Str,4,1,_File);
  local_40[1] = 1;
  fwrite(local_40 + 1,4,1,_File);
  local_40[0] = *(int *)(DAT_0065b5cc + 100) - *(int *)(DAT_0065b5cc + 0x60) >> 2;
  fwrite(local_40,4,1,_File);
  local_40[3] = 0;
  local_30 = *(undefined4 **)(DAT_0065b5cc + 0x60);
  uVar3 = (uint)((int)*(undefined4 **)(DAT_0065b5cc + 100) + (3 - (int)local_30)) >> 2;
  if (*(undefined4 **)(DAT_0065b5cc + 100) < local_30) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*local_30;
      FUN_004024e0(&stack0xffffff90,puVar1);
      FUN_004b8810(_File,_Str);
      fwrite(puVar1 + 0xf1,4,1,_File);
      fwrite(puVar1 + 0xf4,4,1,_File);
      fwrite(puVar1 + 0xf5,4,1,_File);
      fwrite(puVar1 + 0xf2,4,1,_File);
      _Str = (int *)0x1;
      fwrite(puVar1 + 0xf3,4,1,_File);
      local_40[3] = local_40[3] + 1;
      local_30 = local_30 + 1;
    } while (local_40[3] != uVar3);
  }
  fclose(_File);
  FUN_00591070("DETAIL","Saved scenario stats to %f.");
  if (0xf < local_18) {
    pppppppcVar2 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppppcVar2 = (char *******)local_2c[0][-1],
       (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppppcVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppcVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004b7390(void)

{
  undefined4 *puVar1;
  LPCSTR ******pppppppCVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_48 [5];
  uint local_34;
  LPCSTR *****local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcc10;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0058f2c0((int *)local_30);
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,"/objects%02d.sav");
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar3 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_30,puVar3,puVar1[4]);
  if (0xf < local_34) {
    pvVar4 = local_48[0];
    if ((0xfff < local_34 + 1) &&
       (pvVar4 = *(void **)((int)local_48[0] + -4),
       0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  pppppppCVar2 = local_30;
  if (0xf < local_1c) {
    pppppppCVar2 = (LPCSTR ******)local_30[0];
  }
  GetFileAttributesA((LPCSTR)pppppppCVar2);
  if (0xf < local_1c) {
    pppppppCVar2 = (LPCSTR ******)local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pppppppCVar2 = (LPCSTR ******)local_30[0][-1],
       (LPCSTR)0x1f < (LPCSTR)((int)local_30[0] + (-4 - (int)pppppppCVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppCVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004b74b0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  int *****pppppiVar7;
  int *****pppppiVar8;
  void *pvVar9;
  FILE *_File;
  char *pcVar10;
  int local_7c;
  FILE *local_78;
  int local_74;
  char local_6e;
  char local_6d;
  void *local_6c [5];
  uint local_58;
  void *local_54 [5];
  uint local_40;
  int ****local_3c;
  int ***pppiStack_38;
  int ***pppiStack_34;
  int ***pppiStack_30;
  int ***local_2c;
  int ***pppiStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bcc48;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_78 = param_1;
  puVar4 = (undefined1 *)FUN_005adb0f(0x108);
  piVar5 = (int *)FUN_004b6a70(puVar4);
  piVar6 = (int *)FUN_004b88b0((undefined1 *)local_54,param_1);
  if (piVar5 != piVar6) {
    FUN_00401b20(piVar5);
    iVar1 = piVar6[1];
    iVar2 = piVar6[2];
    iVar3 = piVar6[3];
    *piVar5 = *piVar6;
    piVar5[1] = iVar1;
    piVar5[2] = iVar2;
    piVar5[3] = iVar3;
    iVar1 = piVar6[5];
    piVar5[4] = piVar6[4];
    piVar5[5] = iVar1;
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < local_40) {
    pvVar9 = local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pvVar9 = *(void **)((int)local_54[0] + -4),
       0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9)))) {
LAB_004b756b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  local_6e = '\x01';
  _File = local_78;
  do {
    local_6d = '\0';
    local_7c = 0;
    fread(&local_7c,4,1,_File);
    fread(&local_6d,1,1,_File);
    local_74 = -1;
    local_2c = (int ***)0x0;
    pppiStack_28 = (int ***)0xf;
    local_3c = (int ****)((uint)local_3c & 0xffffff00);
    local_14 = 0;
    if (local_6d == '\0') {
      fread(&local_74,4,1,_File);
    }
    else {
      pppppiVar7 = (int *****)FUN_004b88b0((undefined1 *)local_6c,_File);
      if (&local_3c != pppppiVar7) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *pppppiVar7;
        pppiStack_38 = (int ***)pppppiVar7[1];
        pppiStack_34 = (int ***)pppppiVar7[2];
        pppiStack_30 = (int ***)pppppiVar7[3];
        local_2c = (int ***)pppppiVar7[4];
        pppiStack_28 = (int ***)pppppiVar7[5];
        pppppiVar7[4] = (int ****)0x0;
        pppppiVar7[5] = (int ****)0xf;
        *(undefined1 *)pppppiVar7 = 0;
      }
      _File = local_78;
      if (0xf < local_58) {
        pvVar9 = local_6c[0];
        if ((0xfff < local_58 + 1) &&
           (pvVar9 = *(void **)((int)local_6c[0] + -4),
           0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar9)))) goto LAB_004b756b;
        FUN_005adb3f(pvVar9);
        _File = local_78;
      }
    }
    if (local_7c < 0x3ea) {
      if (local_7c == 0x3e9) {
        pppppiVar7 = (int *****)(piVar5 + 0xc);
        goto LAB_004b7684;
      }
      if (local_7c != -9999) goto switchD_004b76b0_caseD_3ed;
      local_6e = '\0';
      goto LAB_004b7754;
    }
    switch(local_7c) {
    case 0x3ea:
      piVar5[0x12] = local_74;
      break;
    case 0x3eb:
      pppppiVar7 = (int *****)(piVar5 + 0x13);
      goto LAB_004b7684;
    case 0x3ec:
      pppppiVar7 = (int *****)(piVar5 + 0x19);
      goto LAB_004b7684;
    default:
switchD_004b76b0_caseD_3ed:
      if (local_6d == '\0') {
        pcVar10 = "Unknown metadata \'%d\', with number \'%d\'";
      }
      else {
        pcVar10 = "Unknown metadata \'%d\', with string \'%s\'";
      }
      FUN_00591070("ERROR",pcVar10);
      break;
    case 0x3ee:
      pppppiVar7 = (int *****)(piVar5 + 0x1f);
      goto LAB_004b7684;
    case 0x3ef:
      pppppiVar7 = (int *****)(piVar5 + 0x25);
      goto LAB_004b7684;
    case 0x3f0:
      piVar5[0x41] = local_74;
      break;
    case 0x3f1:
      pppppiVar7 = (int *****)(piVar5 + 0x31);
      goto LAB_004b7684;
    case 0x3f2:
      pppppiVar7 = (int *****)(piVar5 + 0x37);
LAB_004b7684:
      if (pppppiVar7 != &local_3c) {
        pppppiVar8 = &local_3c;
        if ((int ****)0xf < pppiStack_28) {
          pppppiVar8 = (int *****)local_3c;
        }
        FUN_00402690(pppppiVar7,pppppiVar8,(uint)local_2c);
      }
      break;
    case 0x3f3:
      piVar5[0x40] = local_74;
      break;
    case 0x3f4:
      *(bool *)(piVar5 + 0x3f) = local_74 == 1;
      break;
    case 0x3f5:
      piVar5[0x3d] = local_74;
      break;
    case 0x3f6:
      piVar5[0x3e] = local_74;
    }
LAB_004b7754:
    local_14 = 0xffffffff;
    if ((int ****)0xf < pppiStack_28) {
      pppppiVar7 = (int *****)local_3c;
      if ((0xfff < (int)pppiStack_28 + 1U) &&
         (pppppiVar7 = (int *****)local_3c[-1],
         0x1f < (uint)((int)local_3c + (-4 - (int)pppppiVar7)))) goto LAB_004b756b;
      FUN_005adb3f(pppppiVar7);
    }
    if (local_6e == '\0') {
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


void __fastcall FUN_004b77f0(FILE *param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  uint in_stack_00000018;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3198;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_11 = 1;
  local_18 = param_2;
  fwrite(&local_18,4,1,param_1);
  puVar2 = (undefined4 *)0x1;
  fwrite(&local_11,1,1,param_1);
  FUN_004127d0();
  FUN_004024e0(&stack0xffffffc4,&param_3);
  FUN_004b8810(param_1,puVar2);
  if (0xf < in_stack_00000018) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void FUN_004b78b0(FILE *param_1)

{
  int iVar1;
  void **ppvVar2;
  undefined4 *in_stack_ffffff54;
  void *pvVar3;
  char *pcVar4;
  __time64_t local_88;
  undefined1 *local_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 local_6d;
  void *local_6c [5];
  uint local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bcc80;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_004024e0(local_54,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x124) + 4));
  local_14 = 0;
  FUN_004024e0(&stack0xffffff54,local_54);
  FUN_004b8810(param_1,in_stack_ffffff54);
  pvVar3 = (void *)((uint)in_stack_ffffff54 & 0xffffff00);
  FUN_00402690(&stack0xffffff54,"1.0.8",5);
  FUN_004b77f0(param_1,0x3f2,pvVar3);
  FUN_004024e0(&stack0xffffff54,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x124) + 4));
  FUN_004b77f0(param_1,0x3e9,pvVar3);
  local_6d = 0;
  local_74 = *(undefined4 *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c);
  local_78 = 0x3ea;
  fwrite(&local_78,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  fwrite(&local_74,4,1,param_1);
  FUN_004024e0(&stack0xffffff54,(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 8));
  FUN_004b77f0(param_1,0x3eb,pvVar3);
  FUN_004024e0(&stack0xffffff54,
               (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0x60));
  FUN_004b77f0(param_1,0x3ec,pvVar3);
  local_78 = (uint)(*(char *)(DAT_0065b444 + 0x11b) != '\0');
  local_74 = 0x3f4;
  local_6d = 0;
  fwrite(&local_74,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  fwrite(&local_78,4,1,param_1);
  local_78 = *(uint *)(DAT_0065b444 + 0xc4);
  local_74 = 0x3f5;
  local_6d = 0;
  fwrite(&local_74,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  fwrite(&local_78,4,1,param_1);
  local_78 = *(uint *)(DAT_0065b444 + 0xa8);
  local_74 = 0x3f6;
  local_6d = 0;
  fwrite(&local_74,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  pvVar3 = (void *)0x1;
  fwrite(&local_78,4,1,param_1);
  local_78 = 0xc;
  local_74 = 0x3f3;
  local_6d = 0;
  fwrite(&local_74,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  fwrite(&local_78,4,1,param_1);
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if (iVar1 != 0) {
    FUN_004024e0(&stack0xffffff54,(undefined4 *)(iVar1 + 0x238));
    FUN_004b77f0(param_1,0x3f1,pvVar3);
  }
  local_78 = **(uint **)(DAT_0065b5cc + 0xd8);
  local_74 = 0x3f0;
  local_6d = 0;
  fwrite(&local_74,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  fwrite(&local_78,4,1,param_1);
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = CONCAT31(local_14._1_3_,1);
  local_88 = _time64((__time64_t *)0x0);
  _localtime64(&local_88);
  pcVar4 = "%02d:%02d %02d-%02d-%d";
  ppvVar2 = (void **)FUN_00591e00((undefined1 *)local_6c,"%02d:%02d %02d-%02d-%d");
  if (&local_3c != ppvVar2) {
    FUN_00401b20((int *)&local_3c);
    local_3c = *ppvVar2;
    pvStack_38 = ppvVar2[1];
    pvStack_34 = ppvVar2[2];
    pvStack_30 = ppvVar2[3];
    local_2c = *(undefined8 *)(ppvVar2 + 4);
    ppvVar2[4] = (void *)0x0;
    ppvVar2[5] = (void *)0xf;
    *(undefined1 *)ppvVar2 = 0;
  }
  if (0xf < local_58) {
    pvVar3 = local_6c[0];
    if (0xfff < local_58 + 1) {
      pvVar3 = *(void **)((int)local_6c[0] + -4);
      if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  FUN_004024e0(&stack0xffffff54,&local_3c);
  FUN_004b77f0(param_1,0x3ee,pcVar4);
  local_7c = &stack0xffffff54;
  FUN_00591e00(&stack0xffffff54,"%02d-%02d-%02d %d:%d");
  FUN_004b77f0(param_1,0x3ef,pcVar4);
  local_78 = 999;
  local_74 = 0xffffd8f1;
  local_6d = 0;
  fwrite(&local_74,4,1,param_1);
  fwrite(&local_6d,1,1,param_1);
  fwrite(&local_78,4,1,param_1);
  if (0xf < local_2c._4_4_) {
    pvVar3 = local_3c;
    if (0xfff < local_2c._4_4_ + 1) {
      pvVar3 = *(void **)((int)local_3c + -4);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  if (0xf < local_40) {
    pvVar3 = local_54[0];
    if (0xfff < local_40 + 1) {
      pvVar3 = *(void **)((int)local_54[0] + -4);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_004b7d60(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char ****ppppcVar4;
  FILE *_File;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined1 local_84 [4];
  int local_80;
  char *local_7c;
  void *local_78 [5];
  uint local_64;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  char ***local_48 [5];
  uint local_34;
  undefined4 ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bccc8;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0058f2c0((int *)local_48);
  local_8 = 0;
  if (param_1 == -1) {
    param_1 = *(int *)(DAT_0065b444 + 0x74);
  }
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_78,"/objects%02d.sav");
  local_8._0_1_ = 1;
  puVar7 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar7 = (undefined4 *)*puVar3;
  }
  FUN_00403640(local_48,puVar7,puVar3[4]);
  local_8._0_1_ = 0;
  if (0xf < local_64) {
    pvVar8 = local_78[0];
    if ((0xfff < local_64 + 1) &&
       (pvVar8 = *(void **)((int)local_78[0] + -4),
       0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ppppcVar4 = local_48;
  if (0xf < local_34) {
    ppppcVar4 = (char ****)local_48[0];
  }
  _File = fopen((char *)ppppcVar4,(char *)&_Mode_0060f660);
  fread(&local_7c,4,1,_File);
  if (local_7c == "elphine") {
    fread(local_84,4,1,_File);
    FUN_004b88b0((undefined1 *)local_30,_File);
    local_8._0_1_ = 2;
    piVar1 = (int *)(local_80 + param_1 * 4);
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      FUN_004b6ca0(piVar2);
      FUN_005adb3f(piVar2);
    }
    iVar5 = FUN_004b74b0(_File);
    *piVar1 = iVar5;
    if ((undefined4 ****)(iVar5 + 0xac) != local_30) {
      ppppuVar6 = local_30;
      if (0xf < local_1c) {
        ppppuVar6 = (undefined4 ****)local_30[0];
      }
      FUN_00402690((undefined4 ****)(iVar5 + 0xac),ppppuVar6,local_20);
    }
    FUN_004b88b0((undefined1 *)local_60,_File);
    fclose(_File);
    if (0xf < local_4c) {
      pvVar8 = local_60[0];
      if ((0xfff < local_4c + 1) &&
         (pvVar8 = *(void **)((int)local_60[0] + -4),
         0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_50 = 0;
    local_4c = 0xf;
    local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
    if (0xf < local_1c) {
      ppppuVar6 = (undefined4 ****)local_30[0];
      if ((0xfff < local_1c + 1) &&
         (ppppuVar6 = (undefined4 ****)local_30[0][-1],
         0x1f < (uint)((int)local_30[0] + (-4 - (int)ppppuVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar6);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
  }
  if (0xf < local_34) {
    ppppcVar4 = (char ****)local_48[0];
    if ((0xfff < local_34 + 1) &&
       (ppppcVar4 = (char ****)local_48[0][-1],
       (char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004b7fc0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char ****ppppcVar4;
  FILE *_File;
  undefined4 uVar5;
  undefined4 *puVar6;
  LPCSTR ***ppppCVar7;
  LPCSTR ***lpExistingFileName;
  void *pvVar8;
  char *pcVar9;
  char *local_98;
  int local_94;
  undefined4 local_90;
  void *local_8c [5];
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  char ***local_5c [5];
  uint local_48;
  LPCSTR **local_44 [4];
  undefined4 local_34;
  uint local_30;
  LPCSTR **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bcd31;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0058f2c0((int *)local_5c);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"/objects%02d.sav");
  local_8._0_1_ = 1;
  puVar6 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar6 = (undefined4 *)*puVar3;
  }
  FUN_00403640(local_5c,puVar6,puVar3[4]);
  local_8._0_1_ = 0;
  if (0xf < local_78) {
    pvVar8 = local_8c[0];
    if ((0xfff < local_78 + 1) &&
       (pvVar8 = *(void **)((int)local_8c[0] + -4),
       0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ppppcVar4 = local_5c;
  if (0xf < local_48) {
    ppppcVar4 = (char ****)local_5c[0];
  }
  _File = fopen((char *)ppppcVar4,(char *)&_Mode_0060f660);
  fread(&local_98,4,1,_File);
  if (local_98 == "elphine") {
    fread(&local_90,4,1,_File);
    FUN_004b88b0((undefined1 *)local_74,_File);
    local_8 = CONCAT31(local_8._1_3_,2);
    pcVar9 = "Scenario: %s";
    FUN_00591070("SAVEHANDLER","Scenario: %s");
    local_94 = DAT_0065b444;
    piVar1 = *(int **)(param_1 + *(int *)(DAT_0065b444 + 0x74) * 4);
    if (piVar1 != (int *)0x0) {
      FUN_004b6ca0(piVar1);
      FUN_005adb3f(piVar1);
    }
    iVar2 = DAT_0065b444;
    uVar5 = FUN_004b74b0(_File);
    *(undefined4 *)(param_1 + *(int *)(iVar2 + 0x74) * 4) = uVar5;
    FUN_004024e0(&stack0xffffff40,
                 (undefined4 *)(*(int *)(param_1 + *(int *)(iVar2 + 0x74) * 4) + 0x94));
    FUN_004b34b0((void *)(DAT_0065b444 + 0x17c),pcVar9);
    FUN_00591070("SAVEHANDLER","Save game version %d (OiS Version %s) located in file %s...");
    switch(local_90) {
    case 6:
      FUN_004c0850(_File);
      break;
    case 7:
      FUN_004c3380(_File);
      break;
    case 8:
      FUN_004c48b0(_File);
      break;
    case 9:
      FUN_004c6460(_File);
      break;
    case 10:
      FUN_004c7a70(_File);
      break;
    case 0xb:
      FUN_004c8cd0(_File);
      break;
    case 0xc:
      FUN_004b8d80(_File);
      break;
    default:
      FUN_00591070("SAVEHANDLER","Unknown save version. Cancelling load.");
    }
    fclose(_File);
    puVar3 = (undefined4 *)(*(int *)(DAT_0065b5cc + 0x124) + 4);
    iVar2 = *(int *)(param_1 + *(int *)(DAT_0065b444 + 0x74) * 4);
    puVar6 = (undefined4 *)(iVar2 + 0x30);
    if (puVar3 != puVar6) {
      if (0xf < *(uint *)(iVar2 + 0x44)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      FUN_00402690(puVar3,puVar6,*(uint *)(iVar2 + 0x40));
    }
    iVar2 = *(int *)(DAT_0065b5cc + 0x124);
    puVar6 = (undefined4 *)(iVar2 + 4);
    if ((undefined4 *)(DAT_0065b5cc + 0xf4) != puVar6) {
      if (0xf < *(uint *)(iVar2 + 0x18)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      FUN_00402690((undefined4 *)(DAT_0065b5cc + 0xf4),puVar6,*(uint *)(iVar2 + 0x14));
    }
    iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
    puVar6 = (undefined4 *)(iVar2 + 8);
    if ((undefined4 *)(DAT_0065b5cc + 0x10c) != puVar6) {
      if (0xf < *(uint *)(iVar2 + 0x1c)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      FUN_00402690((undefined4 *)(DAT_0065b5cc + 0x10c),puVar6,*(uint *)(iVar2 + 0x18));
    }
    FUN_00591070("SAVEHANDLER","Game loaded.");
    FUN_00591070("SAVEHANDLER","Backing up successfully loaded game...");
    FUN_0058f2c0((int *)local_44);
    local_8._0_1_ = 3;
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"/objects%02d.sav");
    local_8._0_1_ = 4;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640(local_44,puVar6,puVar3[4]);
    local_8._0_1_ = 3;
    if (0xf < local_78) {
      pvVar8 = local_8c[0];
      if ((0xfff < local_78 + 1) &&
         (pvVar8 = *(void **)((int)local_8c[0] + -4),
         0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    FUN_0058f2c0((int *)local_2c);
    local_8._0_1_ = 5;
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_8c,"/objects%02d.sav.bak");
    local_8._0_1_ = 6;
    puVar6 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar6 = (undefined4 *)*puVar3;
    }
    FUN_00403640(local_2c,puVar6,puVar3[4]);
    local_8._0_1_ = 5;
    if (0xf < local_78) {
      pvVar8 = local_8c[0];
      if ((0xfff < local_78 + 1) &&
         (pvVar8 = *(void **)((int)local_8c[0] + -4),
         0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    ppppCVar7 = local_2c;
    if (0xf < local_18) {
      ppppCVar7 = (LPCSTR ***)local_2c[0];
    }
    DeleteFileA((LPCSTR)ppppCVar7);
    ppppCVar7 = local_2c;
    if (0xf < local_18) {
      ppppCVar7 = (LPCSTR ***)local_2c[0];
    }
    lpExistingFileName = local_44;
    if (0xf < local_30) {
      lpExistingFileName = (LPCSTR ***)local_44[0];
    }
    CopyFileA((LPCSTR)lpExistingFileName,(LPCSTR)ppppCVar7,0);
    FUN_00591070("SAVEHANDLER","Backed up to \'%s\'");
    if (0xf < local_18) {
      ppppCVar7 = (LPCSTR ***)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppCVar7 = (LPCSTR ***)local_2c[0][-1],
         (LPCSTR)0x1f < (LPCSTR)((int)local_2c[0] + (-4 - (int)ppppCVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppCVar7);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (LPCSTR **)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_30) {
      ppppCVar7 = (LPCSTR ***)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppCVar7 = (LPCSTR ***)local_44[0][-1],
         (LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppCVar7);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_60) {
      pvVar8 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar8 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  }
  if (0xf < local_48) {
    ppppcVar4 = (char ****)local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (ppppcVar4 = (char ****)local_5c[0][-1],
       (char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppcVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
