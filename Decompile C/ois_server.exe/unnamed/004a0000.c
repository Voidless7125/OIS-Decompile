#include "../ois_server.exe.h"


int * __thiscall FUN_004a0060(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0xa0) + uVar2 * 4);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


int * __thiscall FUN_004a00a0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x60) + uVar2 * 4);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


void __fastcall FUN_004a00e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  void **ppvVar3;
  void *pvVar4;
  void **ppvVar5;
  uint in_stack_ffffff28;
  undefined4 *in_stack_ffffff2c;
  undefined1 local_bc [8];
  undefined4 uStack_b4;
  undefined1 auStack_a4 [8];
  undefined4 uStack_9c;
  void *local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined1 *local_64;
  undefined1 *local_60;
  int local_5c;
  undefined4 *local_58;
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
  puStack_18 = &LAB_005bb2af;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_70 = 0;
  local_6c = 0xf;
  local_80[0] = (void *)((uint)local_80[0] & 0xffffff00);
  local_5c = param_1;
  FUN_00402690(local_80,"licenses_acquired",0x11);
  local_14 = 0;
  if (DAT_0065c294 == 0) {
    local_58 = (undefined4 *)FUN_005adb0f(0x28);
    local_14 = CONCAT31(local_14._1_3_,1);
    DAT_0065c294 = FUN_0051e500(local_58);
  }
  local_14 = 0xffffffff;
  if (0xf < local_6c) {
    pvVar4 = local_80[0];
    if ((0xfff < local_6c + 1) &&
       (pvVar4 = *(void **)((int)local_80[0] + -4),
       0x1f < (uint)((int)local_80[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  local_58 = (undefined4 *)&stack0xffffff58;
  uStack_b4 = 0x4a01d3;
  FUN_00402690(&stack0xffffff58,&PTR_005ce008,0);
  local_60 = &stack0xffffff40;
  local_14 = 3;
  FUN_00402690(&stack0xffffff40,"licenses_acquired",0x11);
  local_14 = CONCAT31(local_14._1_3_,4);
  pvVar4 = (void *)(in_stack_ffffff28 & 0xffffff00);
  FUN_00402690(&stack0xffffff28,"commerce",8);
  local_14 = 0xffffffff;
  FUN_00401a50(pvVar4);
  *(undefined4 *)(param_1 + 0xd8) = **(undefined4 **)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  ppvVar5 = (void **)(param_1 + 0x68);
  ppvVar3 = ppvVar5;
  if (0xf < *(uint *)(param_1 + 0x7c)) {
    ppvVar3 = *ppvVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar2 = FUN_004031f0((byte *)ppvVar3,uVar1,&DAT_005eaeb0,3);
  if ((char)uVar2 == '\0') {
    local_2c = 0xf00000000;
    local_3c = (void *)((uint)local_3c & 0xffffff00);
    local_14 = 5;
    ppvVar3 = ppvVar5;
    if (0xf < *(uint *)(param_1 + 0x7c)) {
      ppvVar3 = *ppvVar5;
    }
    uVar2 = FUN_004031f0((byte *)ppvVar3,uVar1,(byte *)&PTR_005ce008,0);
    if ((char)uVar2 == '\0') {
      if (&local_3c != ppvVar5) {
        if (0xf < *(uint *)(param_1 + 0x7c)) {
          ppvVar5 = *ppvVar5;
        }
        FUN_00402690(&local_3c,ppvVar5,uVar1);
      }
    }
    else {
      uStack_9c = 0x4a02f7;
      ppvVar3 = (void **)FUN_00591e00((undefined1 *)local_54,
                                      "%s,\n\nThank you for signing up with us. We will now ensure contracts are accessible to you for all trading stations where we have a business presence."
                                     );
      if (&local_3c != ppvVar3) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar3;
        pvStack_38 = ppvVar3[1];
        pvStack_34 = ppvVar3[2];
        pvStack_30 = ppvVar3[3];
        local_2c = *(undefined8 *)(ppvVar3 + 4);
        ppvVar3[4] = (void *)0x0;
        ppvVar3[5] = (void *)0xf;
        *(undefined1 *)ppvVar3 = 0;
      }
      if (0xf < local_40) {
        pvVar4 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar4 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
    }
    local_64 = auStack_a4;
    FUN_004024e0(auStack_a4,&local_3c);
    local_60 = local_bc;
    local_14._0_1_ = 6;
    local_bc[0] = 0;
    FUN_00402690(local_bc,"Welcome",7);
    local_58 = (undefined4 *)&stack0xffffff2c;
    local_14._0_1_ = 7;
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)(local_5c + 0x20));
    local_14._0_1_ = 8;
    pvVar4 = (void *)FUN_00412700();
    local_14 = CONCAT31(local_14._1_3_,5);
    FUN_0043aad0(pvVar4,in_stack_ffffff2c);
    if (0xf < local_2c._4_4_) {
      pvVar4 = local_3c;
      if ((0xfff < local_2c._4_4_ + 1) &&
         (pvVar4 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_004a0420(void *this,byte *param_1)

{
  undefined4 *puVar1;
  byte ***pppbVar2;
  uint uVar3;
  void **ppvVar4;
  byte **ppbVar5;
  uint uVar6;
  byte ****ppppbVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb2e8;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  iVar9 = 0xb0;
  if (*(char *)(DAT_0065b444 + 0x11b) == '\0') {
    iVar9 = 0xbc;
  }
  puVar1 = *(undefined4 **)(iVar9 + 4 + (int)this);
  puVar10 = *(undefined4 **)(iVar9 + (int)this);
  ppvVar4 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar4;
    if (puVar10 == puVar1) {
LAB_004a04ec:
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
    FUN_004024e0(local_2c,puVar10);
    uVar3 = local_18;
    pppbVar2 = local_2c[0];
    ppbVar5 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar5 = (byte **)param_1;
    }
    ppppbVar7 = local_2c;
    if (0xf < local_18) {
      ppppbVar7 = (byte ****)local_2c[0];
    }
    uVar6 = FUN_004031f0((byte *)ppppbVar7,local_1c,(byte *)ppbVar5,in_stack_00000014);
    if ((char)uVar6 != '\0') {
      if (0xf < uVar3) {
        ppppbVar7 = (byte ****)pppbVar2;
        if ((0xfff < uVar3 + 1) &&
           (ppppbVar7 = (byte ****)pppbVar2[-1],
           (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar7)))) {
LAB_004a0538:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar7);
      }
      goto LAB_004a04ec;
    }
    if (0xf < uVar3) {
      ppppbVar7 = (byte ****)pppbVar2;
      if ((0xfff < uVar3 + 1) &&
         (ppppbVar7 = (byte ****)pppbVar2[-1],
         (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar7)))) goto LAB_004a0538;
      FUN_005adb3f(ppppbVar7);
    }
    puVar10 = puVar10 + 6;
    ppvVar4 = ExceptionList;
  } while( true );
}


void __thiscall FUN_004a0580(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *in_stack_ffffff50;
  undefined1 local_98 [4];
  undefined4 uStack_94;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  char *pcVar9;
  uint local_4c;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb360;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)((int)this + 0xe0) != '\0') {
    uVar7 = 0;
    piVar3 = *(int **)((int)this + 0x80);
    iVar4 = *(int *)((int)this + 0xd8);
    uVar8 = *(int *)((int)this + 0x84) - (int)piVar3 >> 2;
    if (uVar8 != 0) {
      do {
        if (iVar4 < *piVar3) goto LAB_004a05ea;
        uVar7 = uVar7 + 1;
        iVar4 = iVar4 - *piVar3;
        piVar3 = piVar3 + 1;
      } while (uVar7 < uVar8);
    }
    uVar7 = uVar8 - 1;
LAB_004a05ea:
    iVar4 = *(int *)((int)this + 0xd8) + param_1;
    *(int *)((int)this + 0xd8) = iVar4;
    if (iVar4 < 0) {
      *(undefined4 *)((int)this + 0xd8) = 0;
      iVar4 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 200);
      if (iVar1 < iVar4) {
        *(int *)((int)this + 0xd8) = iVar1;
        iVar4 = iVar1;
      }
    }
    if ((*(int *)((int)this + 0xdc) != -1) &&
       (iVar1 = *(int *)((int)this + 0xdc) + -1, *(int *)((int)this + 0xdc) = iVar1, iVar1 < 1)) {
      *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
      FUN_00591e00(auStack_80,
                   "%s,\n\nThe suspension period has expired. Contracts will once again be made available to you."
                  );
      local_8 = 0;
      local_98[0] = 0;
      FUN_00402690(local_98,"New Opportunities",0x11);
      local_8._0_1_ = 1;
      FUN_004024e0(&stack0xffffff50,(undefined4 *)((int)this + 0x20));
      local_8 = CONCAT31(local_8._1_3_,2);
      pvVar2 = (void *)FUN_00412700();
      local_8 = 0xffffffff;
      FUN_0043aad0(pvVar2,in_stack_ffffff50);
      *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
      iVar4 = **(int **)((int)this + 0x80);
      *(int *)((int)this + 0xd8) = iVar4;
    }
    uVar8 = 0;
    piVar3 = *(int **)((int)this + 0x80);
    uVar6 = *(int *)((int)this + 0x84) - (int)piVar3 >> 2;
    if (uVar6 != 0) {
      do {
        if (iVar4 < piVar3[uVar8]) goto LAB_004a070b;
        iVar4 = iVar4 - piVar3[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
    uVar8 = uVar6 - 1;
LAB_004a070b:
    local_4c = uVar6 - 1;
    if ((int)uVar8 <= (int)uVar7) {
      iVar4 = *(int *)((int)this + 0xd8);
      uVar5 = 0;
      uVar8 = local_4c;
      if (uVar6 != 0) {
        do {
          uVar8 = uVar5;
          if (iVar4 < *piVar3) break;
          iVar4 = iVar4 - *piVar3;
          uVar5 = uVar5 + 1;
          piVar3 = piVar3 + 1;
          uVar8 = local_4c;
        } while (uVar5 < uVar6);
      }
      if ((uVar8 == 0) && (uVar8 = FUN_004a0960((int)this), uVar7 != uVar8)) {
        *(undefined4 *)((int)this + 0xd8) = 0;
        *(undefined4 *)((int)this + 0xdc) = 5;
        uStack_94 = 0x4a08e8;
        FUN_00591e00(auStack_80,
                     "%s,\n\nDue to your repeated failures and activities, we are forced to suspend you from receiving any contracts from us for a period of %d days."
                    );
        local_8 = 7;
        local_98[0] = 0;
        FUN_00402690(local_98,"SUSPENDED",9);
        local_8._0_1_ = 8;
        FUN_004024e0(&stack0xffffff50,(undefined4 *)((int)this + 0x20));
        local_8 = CONCAT31(local_8._1_3_,9);
        pvVar2 = (void *)FUN_00412700();
        local_8 = 0xffffffff;
        FUN_0043aad0(pvVar2,in_stack_ffffff50);
      }
      goto LAB_004a0940;
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    uVar7 = 0;
    local_8 = 3;
    iVar4 = *(int *)((int)this + 0xd8);
    if (uVar6 != 0) {
      do {
        if (iVar4 < *piVar3) goto LAB_004a074b;
        uVar7 = uVar7 + 1;
        iVar4 = iVar4 - *piVar3;
        piVar3 = piVar3 + 1;
      } while (uVar7 < uVar6);
    }
    uVar7 = uVar6 - 1;
LAB_004a074b:
    if ((int)uVar7 < 2) {
      pcVar9 = 
      "%s,\n\nThank for you acting to fix your business relationship with us. Contracts will once again be made available to you."
      ;
    }
    else {
      pcVar9 = 
      "%s,\n\nYour recent actions have impressed us, and as a result we have the pleasure of informing you that additional contract opportunities are being made available to you."
      ;
    }
    uStack_78 = 0x4a0775;
    piVar3 = (int *)FUN_00591e00((undefined1 *)local_48,pcVar9);
    FUN_00413230(local_30,piVar3);
    if (0xf < local_34) {
      pvVar2 = local_48[0];
      if ((0xfff < local_34 + 1) &&
         (pvVar2 = *(void **)((int)local_48[0] + -4),
         0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar2)))) goto LAB_004a07a7;
      FUN_005adb3f(pvVar2);
    }
    FUN_004024e0(auStack_80,local_30);
    local_8._0_1_ = 4;
    local_98[0] = 0;
    FUN_00402690(local_98,"New Contracts",0xd);
    local_8._0_1_ = 5;
    FUN_004024e0(&stack0xffffff50,(undefined4 *)((int)this + 0x20));
    local_8._0_1_ = 6;
    pvVar2 = (void *)FUN_00412700();
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0043aad0(pvVar2,in_stack_ffffff50);
    if (0xf < local_1c) {
      pvVar2 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar2 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar2)))) {
LAB_004a07a7:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
  }
LAB_004a0940:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


uint __fastcall FUN_004a0960(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0xd8);
  uVar2 = 0;
  uVar4 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x80) + uVar2 * 4);
      if (iVar3 < iVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 - iVar1;
    } while (uVar2 < uVar4);
  }
  return uVar4 - 1;
}


int __fastcall FUN_004a09a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0xd8);
  uVar4 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x80) + uVar3 * 4);
      if (iVar2 < iVar1) goto LAB_004a09d3;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 - iVar1;
    } while (uVar3 < uVar4);
  }
  uVar3 = uVar4 - 1;
LAB_004a09d3:
  if ((((int)uVar3 < 0) ||
      ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2) <= uVar3)) ||
     (iVar2 = (int)((float)*(int *)(*(int *)(param_1 + 0x8c) + uVar3 * 4) -
                   *(float *)(param_1 + 0xd0)), iVar2 < 0)) {
    iVar2 = 0;
  }
  return iVar2;
}


void __fastcall FUN_004a0a10(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0xd0);
  if (0.0 < fVar1) {
    uVar3 = 0;
    iVar4 = *(int *)(param_1 + 0xd8);
    uVar5 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2;
    if (uVar5 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x80) + uVar3 * 4);
        if (iVar4 < iVar2) goto LAB_004a0a61;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 - iVar2;
      } while (uVar3 < uVar5);
    }
    uVar3 = uVar5 - 1;
LAB_004a0a61:
    if ((int)uVar3 < 3) {
      if ((int)uVar3 < 0) {
        return;
      }
    }
    else {
      uVar3 = 2;
    }
    uVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
    if ((uVar3 < uVar5) && (uVar5 != 0)) {
      fVar6 = ((float)*(int *)(*(int *)(param_1 + 0x98) + uVar3 * 4) / 100.0) / 10.0;
      if (fVar6 == 0.0) {
        FUN_00591070("ERROR","ERROR: Invalid interest rate for faction %s");
        return;
      }
      FUN_00591070("WORLD","Loan of %.0fc to %s added %.2f credits in interest.");
      *(float *)(param_1 + 0xd0) = fVar1 * fVar6 + *(float *)(param_1 + 0xd0);
    }
  }
  return;
}


void __thiscall FUN_004a0b40(void *this,int param_1)

{
  byte *pbVar1;
  uint uVar2;
  void *pvVar3;
  byte *pbVar4;
  float fVar5;
  undefined4 *in_stack_ffffff94;
  undefined1 local_54 [8];
  undefined4 uStack_4c;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb3c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar5 = *(float *)((int)this + 0xd0) - (float)param_1;
  *(float *)((int)this + 0xd0) = fVar5;
  if (1.0 <= fVar5) {
    if (*(int *)((int)this + 0xd4) != 0) {
      ExceptionList = pvVar3;
      return;
    }
  }
  else {
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  pbVar1 = (byte *)((int)this + 0x68);
  pbVar4 = pbVar1;
  if (0xf < *(uint *)((int)this + 0x7c)) {
    pbVar4 = *(byte **)pbVar1;
  }
  uStack_30 = 0x4a0bd1;
  uVar2 = FUN_004031f0(pbVar4,*(uint *)((int)this + 0x78),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    FUN_004024e0(auStack_3c,(undefined4 *)pbVar1);
    local_8 = 0;
    local_54[0] = 0;
    FUN_00402690(local_54,"Loan Repaid",0xb);
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)this + 0x20));
    local_8 = CONCAT31(local_8._1_3_,2);
  }
  else {
    uStack_4c = 0x4a0c57;
    FUN_00591e00(auStack_3c,"%s,\n\nThank you for repaying your loan.");
    local_8 = 3;
    local_54[0] = 0;
    FUN_00402690(local_54,"Loan Repaid",0xb);
    local_8._0_1_ = 4;
    FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)this + 0x20));
    local_8 = CONCAT31(local_8._1_3_,5);
  }
  pvVar3 = (void *)FUN_00412700();
  local_8 = 0xffffffff;
  FUN_0043aad0(pvVar3,in_stack_ffffff94);
  ExceptionList = local_10;
  return;
}


int * __thiscall FUN_004a0cd0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 **)this;
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 4) - (int)puVar1 >> 2;
  if (uVar3 != 0) {
    do {
      if (*(int *)*puVar1 == param_1) {
        return (int *)*puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


undefined4 __thiscall FUN_004a0d10(void *this,byte *param_1)

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
  iVar1 = *(int *)this;
  uVar7 = 0;
  uVar9 = *(int *)((int)this + 4) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = (byte *)(iVar2 + 8);
      if (0xf < *(uint *)(iVar2 + 0x1c)) {
        pbVar6 = *(byte **)(iVar2 + 8);
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x18),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_004a0d66;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_004a0d66:
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


undefined4 __cdecl FUN_004a0db0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte **ppbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar1 = param_1;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_005ce010,1);
  if ((char)uVar2 == '\0') {
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar1;
    }
    uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_005e922c,2);
    if ((char)uVar2 != '\0') {
      uVar4 = 4;
      goto LAB_004a0e9f;
    }
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar1;
    }
    uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_005e9234,1);
    if ((char)uVar2 != '\0') {
      uVar4 = 2;
      goto LAB_004a0e9f;
    }
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar1;
    }
    uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_005e923c,2);
    if ((char)uVar2 != '\0') {
      uVar4 = 5;
      goto LAB_004a0e9f;
    }
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar1;
    }
    uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_005e9230,1);
    if ((char)uVar2 != '\0') {
      uVar4 = 3;
      goto LAB_004a0e9f;
    }
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar1;
    }
    uVar2 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_005e9238,2);
    if ((char)uVar2 != '\0') {
      uVar4 = 1;
      goto LAB_004a0e9f;
    }
  }
  uVar4 = 0;
LAB_004a0e9f:
  if (0xf < in_stack_00000018) {
    pbVar5 = pbVar1;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar5 = *(byte **)(pbVar1 + -4);
      if ((byte *)0x1f < pbVar1 + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar5);
  }
  return uVar4;
}


void __thiscall FUN_004a0ee0(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte *pbVar7;
  int iVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte in_stack_0000001c;
  byte *in_stack_ffffffb8;
  char cVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar4 = in_stack_00000018;
  ppbVar6 = (byte **)param_1;
  puStack_c = &LAB_005b3098;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar1 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,(byte *)&PTR_005ce008,0);
  if ((char)uVar1 != '\0') goto LAB_004a1107;
  iVar8 = *(int *)(DAT_0065b5cc + 0xcc);
  if (iVar8 != 0) {
    if (*(char *)(iVar8 + 0x164) == '\0') {
      if (in_stack_0000001c == 1) {
        pbVar7 = (byte *)(iVar8 + 0x168);
        pbVar5 = pbVar7;
        if (0xf < *(uint *)(iVar8 + 0x17c)) {
          pbVar5 = *(byte **)pbVar7;
        }
        uVar1 = *(uint *)(iVar8 + 0x178);
        uVar2 = FUN_004031f0(pbVar5,uVar1,(byte *)&PTR_005ce008,0);
        if ((char)uVar2 != '\0') goto LAB_004a0fcd;
        ppbVar3 = &param_1;
        if (0xf < uVar4) {
          ppbVar3 = ppbVar6;
        }
        if (0xf < *(uint *)(iVar8 + 0x17c)) {
          pbVar7 = *(byte **)pbVar7;
        }
        uVar1 = FUN_004031f0(pbVar7,uVar1,(byte *)ppbVar3,in_stack_00000014);
        if ((char)uVar1 == '\0') goto LAB_004a0fcd;
        cVar9 = '\x01';
LAB_004a102c:
        FUN_00406f80(cVar9);
        ppbVar6 = (byte **)param_1;
      }
      else {
LAB_004a0fcd:
        if (in_stack_0000001c == 1) {
          pbVar7 = (byte *)(iVar8 + 0x198);
          pbVar5 = pbVar7;
          if (0xf < *(uint *)(iVar8 + 0x1ac)) {
            pbVar5 = *(byte **)pbVar7;
          }
          uVar1 = *(uint *)(iVar8 + 0x1a8);
          uVar2 = FUN_004031f0(pbVar5,uVar1,(byte *)&PTR_005ce008,0);
          if ((char)uVar2 == '\0') {
            ppbVar3 = &param_1;
            if (0xf < uVar4) {
              ppbVar3 = ppbVar6;
            }
            if (0xf < *(uint *)(iVar8 + 0x1ac)) {
              pbVar7 = *(byte **)pbVar7;
            }
            uVar4 = FUN_004031f0(pbVar7,uVar1,(byte *)ppbVar3,in_stack_00000014);
            if ((char)uVar4 != '\0') {
              cVar9 = '\0';
              goto LAB_004a102c;
            }
          }
        }
      }
    }
    if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x164) == '\0') {
      iVar8 = 0;
      pbVar7 = (byte *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x1c8);
      do {
        ppbVar3 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar3 = ppbVar6;
        }
        pbVar5 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar5 = *(byte **)pbVar7;
        }
        uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar7 + 0x10),(byte *)ppbVar3,in_stack_00000014);
        if ((char)uVar4 != '\0') {
          if (iVar8 != -1) {
            FUN_00591070(&DAT_005cdc70,"Team %d won.");
            FUN_00406cf0(iVar8);
          }
          break;
        }
        iVar8 = iVar8 + 1;
        pbVar7 = pbVar7 + 0x6c;
      } while (iVar8 < 3);
    }
  }
  if (in_stack_0000001c == 1) {
    FUN_004024e0(&stack0xffffffb8,&param_1);
    FUN_0040d340(in_stack_ffffffb8);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)param_1;
    }
    uVar4 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,(byte *)"PASSENGER_FLAG",0xe);
    if (((char)uVar4 != '\0') && (*(int *)(DAT_0065b5cc + 0x128) != 0)) {
      FUN_004854a0(*(int *)(DAT_0065b5cc + 0x128));
    }
  }
  pbVar7 = FUN_004a2bf0((void *)((int)this + 0xc),(byte *)&param_1);
  *pbVar7 = in_stack_0000001c;
  ppbVar6 = (byte **)param_1;
  uVar4 = in_stack_00000018;
LAB_004a1107:
  if (0xf < uVar4) {
    pbVar7 = (byte *)ppbVar6;
    if ((0xfff < uVar4 + 1) &&
       (pbVar7 = *(byte **)((int)ppbVar6 + -4),
       (byte *)0x1f < (byte *)((int)ppbVar6 + (-4 - (int)pbVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  ExceptionList = local_10;
  return;
}


byte __thiscall FUN_004a1150(void *this,void *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte bVar3;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = FUN_004a2bf0((void *)((int)this + 0xc),(byte *)&param_1);
  if (*pbVar1 == 0) {
    bVar3 = 0;
  }
  else {
    pbVar1 = FUN_004a2bf0((void *)((int)this + 0xc),(byte *)&param_1);
    bVar3 = *pbVar1;
  }
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
  return bVar3;
}


void __fastcall FUN_004a11f0(undefined4 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = param_1[3];
  FUN_004132d0(*(int **)(iVar1 + 4));
  uVar6 = 0;
  *(int *)(param_1[3] + 4) = iVar1;
  *(int *)param_1[3] = iVar1;
  *(int *)(param_1[3] + 8) = iVar1;
  param_1[4] = 0;
  puVar5 = (undefined4 *)*param_1;
  uVar7 = (param_1[1] - (int)puVar5) + 3U >> 2;
  if ((undefined4 *)param_1[1] < puVar5) {
    uVar7 = 0;
  }
  if (uVar7 != 0) {
    do {
      puVar2 = (undefined2 *)*puVar5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0xbf800000;
    } while (uVar6 != uVar7);
  }
  piVar3 = *(int **)(DAT_0065b5cc + 100);
  for (piVar8 = *(int **)(DAT_0065b5cc + 0x60); piVar8 != piVar3; piVar8 = piVar8 + 1) {
    uVar6 = 0;
    puVar5 = *(undefined4 **)(*piVar8 + 0x3dc);
    puVar4 = *(undefined4 **)(*piVar8 + 0x3e0);
    uVar7 = (uint)((int)puVar4 + (3 - (int)puVar5)) >> 2;
    if (puVar4 < puVar5) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      do {
        puVar2 = (undefined2 *)*puVar5;
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 + 1;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0xbf800000;
      } while (uVar6 != uVar7);
    }
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Type propagation algorithm not settling

void __thiscall FUN_004a12e0(void *this,char *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  undefined4 *this_00;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  void *pvVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float in_XMM1_Da;
  void **in_stack_ffffff40;
  void *in_stack_ffffff44;
  uint local_8c;
  void *local_84 [5];
  uint local_70;
  char *******local_6c [4];
  uint local_5c;
  uint local_58;
  void *local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined8 local_44;
  char *******local_3c [4];
  int local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &LAB_005bb418;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar1 = local_44;
  puVar4 = &stack0xfffffffc;
  if (param_1[1] != '\0') goto LAB_004a191e;
  puVar2 = *(undefined4 **)(param_1 + 0x4c);
  puVar11 = *(undefined4 **)(param_1 + 0x48);
  bVar3 = true;
  puVar4 = &stack0xfffffffc;
  if (puVar11 != puVar2) {
    do {
      puStack_20 = puVar4;
      FUN_004024e0(local_3c,puVar11);
      local_14 = 0;
      if (local_2c != 0) {
        pppppppcVar8 = (char *******)local_3c;
        if (0xf < local_28) {
          pppppppcVar8 = local_3c[0];
        }
        if (*(char *)pppppppcVar8 == '!') {
          bVar3 = false;
        }
        else {
          FUN_004024e0(&stack0xffffff44,local_3c);
          local_14._0_1_ = 1;
          this_00 = FUN_00412df0();
          local_14 = (uint)local_14._1_3_ << 8;
          in_stack_ffffff40 = (void **)0x4a13be;
          bVar6 = FUN_004a1150(this_00,in_stack_ffffff44);
          if (bVar6 == 0) {
            bVar3 = false;
          }
        }
      }
      local_14._1_3_ = 0xffffff;
      local_14._0_1_ = 0xff;
      if (0xf < local_28) {
        local_14._0_1_ = 0xff;
        local_14._1_3_ = 0xffffff;
        pppppppcVar8 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pppppppcVar8 = (char *******)local_3c[0][-1], uVar5 = (undefined1)local_14,
           (char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)pppppppcVar8)))) goto LAB_004a1530;
        FUN_005adb3f(pppppppcVar8);
      }
      puVar11 = puVar11 + 6;
      puVar4 = puStack_20;
    } while (puVar11 != puVar2);
    if (!bVar3) {
      uVar12 = 0;
      iVar13 = *(int *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 0x40) - iVar13 >> 2 != 0) {
        do {
          cVar7 = FUN_004a23b0(*(void **)(iVar13 + uVar12 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          uVar1 = local_44;
          puVar4 = puStack_20;
          if (cVar7 == '\0') goto LAB_004a191e;
          uVar12 = uVar12 + 1;
          iVar13 = *(int *)(param_1 + 0x3c);
        } while (uVar12 < (uint)(*(int *)(param_1 + 0x40) - iVar13 >> 2));
      }
      puVar4 = puStack_20;
      if (*(float *)(param_1 + 0x20) < 0.0) {
        iVar13 = *(int *)(param_1 + 0x18);
        if (((((iVar13 != 0) || (*(int *)(param_1 + 0x14) != 0)) || (*(int *)(param_1 + 0x10) != 0))
            || ((*(int *)(param_1 + 0xc) != 0 || (*(int *)(param_1 + 8) != 0)))) ||
           (*(float *)(param_1 + 4) != 0.0)) {
          local_54 = *(void **)(DAT_0065b444 + 0x17c);
          iStack_50 = *(int *)(DAT_0065b444 + 0x180);
          iStack_4c = *(int *)(DAT_0065b444 + 0x184);
          iStack_48 = *(int *)(DAT_0065b444 + 0x188);
          uVar1 = *(undefined8 *)(DAT_0065b444 + 0x18c);
          local_44._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
          if ((int)local_44._4_4_ < iVar13) goto LAB_004a191e;
          bVar3 = (int)local_44._4_4_ <= iVar13;
          local_44 = uVar1;
          if (bVar3) {
            local_44._0_4_ = (int)uVar1;
            if (((int)local_44 < *(int *)(param_1 + 0x14)) ||
               ((bVar3 = (int)local_44 <= *(int *)(param_1 + 0x14), bVar3 &&
                ((iStack_48 < *(int *)(param_1 + 0x10) ||
                 ((iStack_48 <= *(int *)(param_1 + 0x10) &&
                  ((iStack_4c < *(int *)(param_1 + 0xc) ||
                   ((iStack_4c <= *(int *)(param_1 + 0xc) && (iStack_50 < *(int *)(param_1 + 8))))))
                  ))))))) goto LAB_004a191e;
          }
        }
        uVar1 = local_44;
        if (*param_1 != '\0') goto LAB_004a191e;
        if (0.0 < *(float *)(param_1 + 0x1c)) {
          *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x1c) * 60.0 * 60.0;
          FUN_00591070("WORLD","Counting down %.2f hours in-game before firing \'%s\'");
          *param_1 = '\x01';
          uVar1 = local_44;
          puVar4 = puStack_20;
          goto LAB_004a191e;
        }
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = -0x80;
        param_1[0x23] = -0x41;
        puVar2 = *(undefined4 **)(param_1 + 0x4c);
        for (puVar11 = *(undefined4 **)(param_1 + 0x48); puVar11 != puVar2; puVar11 = puVar11 + 6) {
          FUN_004024e0(local_6c,puVar11);
          local_14 = 3;
          pppppppcVar8 = (char *******)local_6c;
          if (0xf < local_58) {
            pppppppcVar8 = local_6c[0];
          }
          if (*(char *)pppppppcVar8 == '!') {
            FUN_004033e0(local_6c,(undefined1 *)local_3c,1,local_5c);
            local_14._0_1_ = 4;
            FUN_004024e0(&stack0xffffff40,local_3c);
            FUN_004a0ee0(this,(byte *)in_stack_ffffff40);
            FUN_00591070("WORLD"," - \'%s\' unset");
            in_stack_ffffff40 = local_84;
            FUN_00591e00((undefined1 *)in_stack_ffffff40,"%02d-%02d-%02d %d:%d");
            local_14._0_1_ = 5;
            FUN_00591070("WORLD","Flag \'%s\' unset as date/time %s has passed.");
            local_14._0_1_ = 4;
            uVar5 = (undefined1)local_14;
            local_14._0_1_ = 4;
            if (0xf < local_70) {
              pvVar10 = local_84[0];
              if ((0xfff < local_70 + 1) &&
                 (pvVar10 = *(void **)((int)local_84[0] + -4),
                 0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar10)))) goto LAB_004a1530;
              FUN_005adb3f(pvVar10);
            }
            local_14._0_1_ = 3;
            if (0xf < local_28) {
              pppppppcVar8 = local_3c[0];
              if ((0xfff < local_28 + 1) &&
                 (pppppppcVar8 = (char *******)local_3c[0][-1], uVar5 = (undefined1)local_14,
                 (char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)pppppppcVar8))))
              goto LAB_004a1530;
              FUN_005adb3f(pppppppcVar8);
            }
          }
          else {
            FUN_004024e0(&stack0xffffff40,local_6c);
            FUN_004a0ee0(this,(byte *)in_stack_ffffff40);
            FUN_00591070("WORLD"," - \'%s\' set");
            in_stack_ffffff40 = &local_54;
            FUN_00591e00((undefined1 *)in_stack_ffffff40,"%02d-%02d-%02d %d:%d");
            local_14._0_1_ = 6;
            FUN_00591070("WORLD","Flag \'%s\' set as date/time %s has passed.");
            local_14._0_1_ = 3;
            if (0xf < local_44._4_4_) {
              pvVar10 = local_54;
              if ((0xfff < local_44._4_4_ + 1) &&
                 (pvVar10 = *(void **)((int)local_54 + -4), uVar5 = (undefined1)local_14,
                 0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10)))) goto LAB_004a1530;
              FUN_005adb3f(pvVar10);
            }
            local_44 = 0xf00000000;
            local_54 = (void *)((uint)local_54 & 0xffffff00);
          }
          local_14._0_1_ = 0xff;
          local_14._1_3_ = 0xffffff;
          if (0xf < local_58) {
            pppppppcVar8 = local_6c[0];
            if ((0xfff < local_58 + 1) &&
               (pppppppcVar8 = (char *******)local_6c[0][-1], uVar5 = (undefined1)local_14,
               (char *)0x1f < (char *)((int)local_6c[0] + (-4 - (int)pppppppcVar8))))
            goto LAB_004a1530;
            FUN_005adb3f(pppppppcVar8);
          }
        }
      }
      else {
        fVar14 = *(float *)(param_1 + 0x20) - in_XMM1_Da * 24.0;
        *(float *)(param_1 + 0x20) = fVar14;
        uVar1 = local_44;
        if (0.0 < fVar14) goto LAB_004a191e;
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = -0x80;
        param_1[0x23] = -0x41;
        pppppppcVar8 = (char *******)local_3c;
        FUN_00591e00((undefined1 *)pppppppcVar8,"%02d-%02d-%02d %d:%d");
        local_14 = 2;
        FUN_00591070("WORLD","Flags firing as date/time %s AND a delay of %.1f hours has passed.");
        local_14._0_1_ = 0xff;
        local_14._1_3_ = 0xffffff;
        if (0xf < local_28) {
          pppppppcVar9 = local_3c[0];
          if ((0xfff < local_28 + 1) &&
             (pppppppcVar9 = (char *******)local_3c[0][-1], uVar5 = (undefined1)local_14,
             (char *)0x1f < (char *)((int)local_3c[0] + (-4 - (int)pppppppcVar9)))) {
LAB_004a1530:
            local_14._0_1_ = uVar5;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppppcVar9);
        }
        local_8c = 0;
        iVar13 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 0x1f;
        if ((*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48)) / 0x18 + iVar13 != iVar13) {
          iVar13 = 0;
          do {
            FUN_004024e0(&stack0xffffff40,(undefined4 *)(*(int *)(param_1 + 0x48) + iVar13));
            FUN_004a0ee0(this,(byte *)pppppppcVar8);
            FUN_00591070("WORLD"," - \'%s\' set");
            local_8c = local_8c + 1;
            iVar13 = iVar13 + 0x18;
          } while (local_8c < (uint)((*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48)) / 0x18));
        }
      }
    }
  }
  param_1[1] = '\x01';
  uVar1 = local_44;
  puVar4 = puStack_20;
LAB_004a191e:
  puStack_20 = puVar4;
  local_44 = uVar1;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004a1940(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)*param_1;
  uVar2 = (param_1[1] - (int)puVar3) + 3 >> 2;
  uVar4 = 0;
  if ((undefined4 *)param_1[1] < puVar3) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      FUN_004a12e0(param_1,(char *)*puVar3);
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  iVar1 = *(int *)(DAT_0065b5cc + 0xcc);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x3dc);
    uVar4 = 0;
    uVar2 = (uint)((int)*(undefined4 **)(iVar1 + 0x3e0) + (3 - (int)puVar3)) >> 2;
    if (*(undefined4 **)(iVar1 + 0x3e0) < puVar3) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      do {
        FUN_004a12e0(param_1,(char *)*puVar3);
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
    }
  }
  return;
}


undefined2 * __fastcall FUN_004a19f0(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined2 *local_8;
  
  local_8 = param_1;
  local_8 = (undefined2 *)FUN_005adb0f(0x54);
  local_8 = FUN_0043db80(local_8);
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (*(undefined4 **)(param_1 + 4) != puVar1) {
    *puVar1 = local_8;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 4;
    return local_8;
  }
  FUN_00414080(param_1,puVar1,&local_8);
  return local_8;
}


void __thiscall FUN_004a1a40(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  int iVar6;
  uint uVar7;
  basic_string<> *pbVar8;
  basic_string<> *pbVar9;
  undefined4 uVar10;
  void *pvVar11;
  basic_string<> *pbVar12;
  basic_string<> **this_00;
  int iVar13;
  uint uVar14;
  int iVar15;
  basic_string<> *pbVar16;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffff4c;
  basic_string<> *local_80;
  int local_7c;
  basic_string<> *local_78;
  void *local_74 [5];
  uint local_60;
  basic_string<> *local_5c [4];
  uint local_4c;
  uint local_48;
  basic_string<> *local_44 [4];
  uint local_34;
  uint local_30;
  basic_string<> *local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bb4ac;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar12 = (basic_string<> *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *pbVar12 = (basic_string<>)0x0;
  local_8 = 1;
  uStack_7 = 0;
  local_78 = this;
  FUN_004024e0((void *)((int)this + 0x20),&param_1);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (basic_string<> *)((uint)local_2c[0] & 0xffffff00);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (basic_string<> *)((uint)local_5c[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (basic_string<> *)((uint)local_44[0] & 0xffffff00);
  local_8 = 5;
  uVar1 = local_8;
  local_8 = 5;
  uVar14 = 0;
  local_7c = 0;
  if (in_stack_00000014 != 0) {
    do {
      if (local_7c == 0) {
        ppuVar5 = &param_1;
        if (0xf < in_stack_00000018) {
          ppuVar5 = (undefined4 **)param_1;
        }
        if (*(char *)((int)ppuVar5 + uVar14) != '>') {
          ppuVar5 = &param_1;
          if (0xf < in_stack_00000018) {
            ppuVar5 = (undefined4 **)param_1;
          }
          if (*(char *)((int)ppuVar5 + uVar14) != '=') {
            ppuVar5 = &param_1;
            if (0xf < in_stack_00000018) {
              ppuVar5 = (undefined4 **)param_1;
            }
            if (*(char *)((int)ppuVar5 + uVar14) != '<') {
              ppuVar5 = &param_1;
              if (0xf < in_stack_00000018) {
                ppuVar5 = (undefined4 **)param_1;
              }
              if (*(char *)((int)ppuVar5 + uVar14) != '!') {
                puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005ce018);
                local_8 = 7;
                puVar4 = puVar3;
                if (0xf < (uint)puVar3[5]) {
                  puVar4 = (undefined4 *)*puVar3;
                }
                uVar7 = puVar3[4];
                this_00 = local_2c;
                goto LAB_004a1cd6;
              }
            }
          }
        }
        puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005ce018);
        local_8 = 6;
        puVar3 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar3 = (undefined4 *)*puVar4;
        }
        FUN_00403640(local_5c,puVar3,puVar4[4]);
        local_8 = 5;
        if (0xf < local_60) {
          pvVar11 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar11 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar11)))) goto LAB_004a22b5;
          FUN_005adb3f(pvVar11);
        }
        local_7c = 1;
      }
      else {
        if (local_7c == 1) {
          ppuVar5 = &param_1;
          if (0xf < in_stack_00000018) {
            ppuVar5 = (undefined4 **)param_1;
          }
          if (*(char *)((int)ppuVar5 + uVar14) != '>') {
            ppuVar5 = &param_1;
            if (0xf < in_stack_00000018) {
              ppuVar5 = (undefined4 **)param_1;
            }
            if (*(char *)((int)ppuVar5 + uVar14) != '=') {
              ppuVar5 = &param_1;
              if (0xf < in_stack_00000018) {
                ppuVar5 = (undefined4 **)param_1;
              }
              if (*(char *)((int)ppuVar5 + uVar14) != '<') {
                ppuVar5 = &param_1;
                if (0xf < in_stack_00000018) {
                  ppuVar5 = (undefined4 **)param_1;
                }
                if (*(char *)((int)ppuVar5 + uVar14) != '!') {
                  local_7c = 2;
                  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005ce018);
                  local_8 = 9;
                  goto LAB_004a1cc5;
                }
              }
            }
          }
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005ce018);
          local_8 = 8;
          puVar4 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar4 = (undefined4 *)*puVar3;
          }
          uVar7 = puVar3[4];
          this_00 = local_5c;
        }
        else {
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005ce018);
          local_8 = 10;
LAB_004a1cc5:
          puVar4 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar4 = (undefined4 *)*puVar3;
          }
          uVar7 = puVar3[4];
          this_00 = local_44;
        }
LAB_004a1cd6:
        FUN_00403640(this_00,puVar4,uVar7);
        local_8 = 5;
        if (0xf < local_60) {
          pvVar11 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar11 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar11)))) goto LAB_004a22b5;
          FUN_005adb3f(pvVar11);
        }
      }
      uVar14 = uVar14 + 1;
      uVar1 = local_8;
    } while (uVar14 < in_stack_00000014);
  }
  local_8 = uVar1;
  local_78 = (basic_string<> *)local_2c;
  if (0xf < local_18) {
    local_78 = local_2c[0];
  }
  pbVar9 = (basic_string<> *)local_2c;
  if (0xf < local_18) {
    pbVar9 = local_2c[0];
  }
  iVar15 = 0;
  iVar13 = (int)(local_78 + local_1c) - (int)pbVar9;
  if (local_78 + local_1c < pbVar9) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    do {
      iVar6 = tolower((int)(char)pbVar9[iVar15]);
      local_78[iVar15] = SUB41(iVar6,0);
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar13);
  }
  pbVar9 = (basic_string<> *)local_44;
  if (0xf < local_30) {
    pbVar9 = local_44[0];
  }
  pbVar8 = (basic_string<> *)local_44;
  if (0xf < local_30) {
    pbVar8 = local_44[0];
  }
  iVar15 = 0;
  iVar13 = (int)(pbVar9 + local_34) - (int)pbVar8;
  if (pbVar9 + local_34 < pbVar8) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    do {
      iVar6 = tolower((int)(char)pbVar8[iVar15]);
      pbVar9[iVar15] = SUB41(iVar6,0);
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar13);
  }
  uVar14 = local_1c;
  pbVar9 = (basic_string<> *)local_2c;
  if (0xf < local_18) {
    pbVar9 = local_2c[0];
  }
  uVar7 = FUN_004031f0((byte *)pbVar9,local_1c,(byte *)"check",5);
  if ((char)uVar7 != '\0') {
    *(undefined4 *)this = 0xf;
    if (pbVar12 != (basic_string<> *)local_44) {
      pbVar9 = (basic_string<> *)local_44;
      if (0xf < local_30) {
        pbVar9 = local_44[0];
      }
      FUN_00402690(pbVar12,pbVar9,local_34);
    }
    pbVar9 = pbVar12;
    local_80 = pbVar12;
    if (0xf < *(uint *)((int)this + 0x1c)) {
      local_80 = *(basic_string<> **)pbVar12;
      pbVar9 = *(basic_string<> **)pbVar12;
    }
    if (0xf < *(uint *)((int)this + 0x1c)) {
      pbVar12 = *(basic_string<> **)pbVar12;
    }
    pbVar8 = pbVar9 + *(int *)((int)this + 0x18) + -(int)pbVar12;
    pbVar16 = (basic_string<> *)0x0;
    if (pbVar9 + *(int *)((int)this + 0x18) < pbVar12) {
      pbVar8 = (basic_string<> *)0x0;
    }
    local_78 = pbVar8;
    if (pbVar8 != (basic_string<> *)0x0) {
      do {
        iVar13 = toupper((int)(char)pbVar16[(int)pbVar12]);
        local_80[(int)pbVar16] = SUB41(iVar13,0);
        pbVar16 = pbVar16 + 1;
      } while (pbVar16 != pbVar8);
    }
    goto LAB_004a2285;
  }
  pbVar9 = (basic_string<> *)local_2c;
  if (0xf < local_18) {
    pbVar9 = local_2c[0];
  }
  uVar7 = FUN_004031f0((byte *)pbVar9,uVar14,(byte *)"headingtostarbase",0x11);
  if ((char)uVar7 == '\0') {
    pbVar9 = (basic_string<> *)local_2c;
    if (0xf < local_18) {
      pbVar9 = local_2c[0];
    }
    uVar7 = FUN_004031f0((byte *)pbVar9,uVar14,(byte *)"headingtofaction",0x10);
    if ((char)uVar7 == '\0') {
      pbVar9 = (basic_string<> *)local_2c;
      if (0xf < local_18) {
        pbVar9 = local_2c[0];
      }
      uVar7 = FUN_004031f0((byte *)pbVar9,uVar14,(byte *)"headingtoneareststarbase",0x18);
      if ((char)uVar7 != '\0') {
        *(undefined4 *)this = 0xb;
        goto LAB_004a2285;
      }
      pbVar9 = (basic_string<> *)local_2c;
      if (0xf < local_18) {
        pbVar9 = local_2c[0];
      }
      uVar7 = FUN_004031f0((byte *)pbVar9,uVar14,(byte *)"headingto",9);
      pbVar9 = pbVar12;
      if ((char)uVar7 == '\0') {
        pbVar8 = (basic_string<> *)local_2c;
        if (0xf < local_18) {
          pbVar8 = local_2c[0];
        }
        uVar7 = FUN_004031f0((byte *)pbVar8,uVar14,(byte *)"hasfreeweaponslot",0x11);
        if ((char)uVar7 != '\0') {
          *(undefined4 *)this = 5;
LAB_004a20f0:
          FUN_004024e0(&stack0xffffff4c,local_5c);
          uVar10 = FUN_004a0db0(in_stack_ffffff4c);
          *(undefined4 *)((int)this + 4) = uVar10;
          goto LAB_004a2285;
        }
        if (local_34 == 0) {
          std::basic_string<>::operator=(pbVar12,(basic_string<> *)local_2c);
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)this = 1;
          goto LAB_004a2285;
        }
        if (uVar14 == 0) {
          std::basic_string<>::operator=(pbVar12,(basic_string<> *)local_44);
          *(undefined4 *)((int)this + 4) = 1;
          *(undefined4 *)this = 2;
          goto LAB_004a2285;
        }
        pbVar8 = (basic_string<> *)local_2c;
        if (0xf < local_18) {
          pbVar8 = local_2c[0];
        }
        uVar7 = FUN_004031f0((byte *)pbVar8,uVar14,(byte *)"money",5);
        if ((char)uVar7 == '\0') {
          pbVar8 = (basic_string<> *)local_2c;
          if (0xf < local_18) {
            pbVar8 = local_2c[0];
          }
          uVar7 = FUN_004031f0((byte *)pbVar8,uVar14,&DAT_0060d640,2);
          if ((char)uVar7 != '\0') {
            *(undefined4 *)this = 7;
            FUN_004024e0(&stack0xffffff4c,local_5c);
            uVar10 = FUN_004a0db0(in_stack_ffffff4c);
            *(undefined4 *)((int)this + 4) = uVar10;
            std::basic_string<>::operator=(pbVar12,(basic_string<> *)local_44);
            pbVar8 = pbVar12;
            if (0xf < *(uint *)((int)this + 0x1c)) {
              pbVar9 = *(basic_string<> **)pbVar12;
              pbVar8 = *(basic_string<> **)pbVar12;
            }
            pbVar8 = pbVar8 + *(int *)((int)this + 0x18);
            if (0xf < *(uint *)((int)this + 0x1c)) {
              pbVar12 = *(basic_string<> **)pbVar12;
            }
            goto LAB_004a20b2;
          }
          pbVar9 = (basic_string<> *)local_2c;
          if (0xf < local_18) {
            pbVar9 = local_2c[0];
          }
          uVar7 = FUN_004031f0((byte *)pbVar9,uVar14,(byte *)"hasfreecomponentslot",0x14);
          if ((char)uVar7 != '\0') {
            *(undefined4 *)this = 6;
            goto LAB_004a20f0;
          }
          pbVar9 = (basic_string<> *)local_2c;
          if (0xf < local_18) {
            pbVar9 = local_2c[0];
          }
          uVar14 = FUN_004031f0((byte *)pbVar9,uVar14,(byte *)"hascomponent",0xc);
          if ((char)uVar14 != '\0') {
            pbVar9 = (basic_string<> *)local_5c;
            if (0xf < local_48) {
              pbVar9 = local_5c[0];
            }
            uVar14 = FUN_004031f0((byte *)pbVar9,local_4c,&DAT_005e9238,2);
            *(undefined4 *)((int)this + 4) = 0;
            *(uint *)this = ((char)uVar14 != '\0') + 8;
            std::basic_string<>::operator=(pbVar12,(basic_string<> *)local_44);
            goto LAB_004a2285;
          }
          local_78 = (basic_string<> *)&stack0xffffff4c;
          FUN_004024e0(&stack0xffffff4c,local_2c);
          local_8 = 0xb;
          pvVar11 = (void *)FUN_00412770();
          local_8 = 5;
          bVar2 = FUN_0051e7c0(pvVar11,in_stack_ffffff4c);
          if (bVar2) {
            *(undefined4 *)this = 10;
            FUN_004024e0(&stack0xffffff4c,local_5c);
            uVar10 = FUN_004a0db0(in_stack_ffffff4c);
            *(undefined4 *)((int)this + 4) = uVar10;
            std::basic_string<>::operator=(pbVar12,(basic_string<> *)local_2c);
          }
          else {
            *(undefined4 *)this = 4;
            FUN_004024e0(&stack0xffffff4c,local_5c);
            uVar10 = FUN_004a0db0(in_stack_ffffff4c);
            pbVar12 = (basic_string<> *)local_2c;
            if (0xf < local_18) {
              pbVar12 = local_2c[0];
            }
            *(undefined4 *)((int)this + 4) = uVar10;
            pbVar9 = (basic_string<> *)local_2c;
            if (0xf < local_18) {
              pbVar9 = local_2c[0];
            }
            pbVar8 = (basic_string<> *)local_2c;
            if (0xf < local_18) {
              pbVar8 = local_2c[0];
            }
            FUN_00413ec0(&local_78,tolower_exref,(char *)pbVar8,(char *)(pbVar12 + local_1c),pbVar9)
            ;
            FUN_004024e0(&stack0xffffff4c,local_2c);
            puVar3 = (undefined4 *)FUN_004a8380(in_stack_ffffff4c);
            if (puVar3 == (undefined4 *)0x0) {
              FUN_00591070("ERROR","Invalid good \'%s\'");
              bVar2 = cc_assert_script_compatible("Invalid good.");
              if (!bVar2) {
                cocos2d::log("Assert failed: %s");
              }
            }
            *(undefined4 *)((int)this + 0x3c) = *puVar3;
          }
          pbVar12 = (basic_string<> *)local_44;
          if (0xf < local_30) {
            pbVar12 = local_44[0];
          }
          iVar13 = atoi((char *)pbVar12);
        }
        else {
          *(undefined4 *)this = 3;
          FUN_004024e0(&stack0xffffff4c,local_5c);
          uVar10 = FUN_004a0db0(in_stack_ffffff4c);
          *(undefined4 *)((int)this + 4) = uVar10;
          pbVar12 = (basic_string<> *)local_44;
          if (0xf < local_30) {
            pbVar12 = local_44[0];
          }
          iVar13 = atoi((char *)pbVar12);
        }
        *(int *)((int)this + 0x38) = iVar13;
      }
      else {
        *(undefined4 *)this = 0xc;
        if (pbVar12 != (basic_string<> *)local_44) {
          pbVar8 = (basic_string<> *)local_44;
          if (0xf < local_30) {
            pbVar8 = local_44[0];
          }
          FUN_00402690(pbVar12,pbVar8,local_34);
        }
        pbVar8 = pbVar12;
        if (0xf < *(uint *)((int)this + 0x1c)) {
          pbVar9 = *(basic_string<> **)pbVar12;
          pbVar8 = *(basic_string<> **)pbVar12;
        }
        pbVar8 = pbVar8 + *(int *)((int)this + 0x18);
        if (0xf < *(uint *)((int)this + 0x1c)) {
          pbVar12 = *(basic_string<> **)pbVar12;
        }
LAB_004a20b2:
        FUN_00413ec0(&local_78,toupper_exref,(char *)pbVar12,(char *)pbVar8,pbVar9);
      }
      goto LAB_004a2285;
    }
    *(undefined4 *)this = 0xd;
  }
  else {
    *(undefined4 *)this = 0xe;
  }
  if (pbVar12 != (basic_string<> *)local_44) {
    pbVar9 = (basic_string<> *)local_44;
    if (0xf < local_30) {
      pbVar9 = local_44[0];
    }
    FUN_00402690(pbVar12,pbVar9,local_34);
  }
LAB_004a2285:
  DAT_0065b3bc = FUN_00412df0();
  if (0xf < local_30) {
    pbVar12 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pbVar12 = *(basic_string<> **)(local_44[0] + -4),
       (basic_string<> *)0x1f < local_44[0] + (-4 - (int)pbVar12))) {
LAB_004a22b5:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar12);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (basic_string<> *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pbVar12 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pbVar12 = *(basic_string<> **)(local_5c[0] + -4),
       (basic_string<> *)0x1f < local_5c[0] + (-4 - (int)pbVar12))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar12);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (basic_string<> *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_18) {
    pbVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pbVar12 = *(basic_string<> **)(local_2c[0] + -4),
       (basic_string<> *)0x1f < local_2c[0] + (-4 - (int)pbVar12))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar12);
  }
  if (0xf < in_stack_00000018) {
    puVar3 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (puVar3 = (undefined4 *)param_1[-1], 0x1f < (uint)((int)param_1 + (-4 - (int)puVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004a23b0(void *this,void *param_1)

{
  byte bVar1;
  uint uVar2;
  byte ******ppppppbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *******pppppppbVar9;
  int extraout_EDX;
  byte *pbVar10;
  char *pcVar11;
  void *in_stack_ffffff7c;
  byte ******local_5c [4];
  uint local_4c;
  uint local_48;
  undefined local_3c [36];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb4e8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar7 = *(int *)this;
  if (iVar7 == 0) goto switchD_004a253a_default;
  if (iVar7 == 7) {
    if (*(int *)((int)this + 4) == 0) {
      pbVar8 = (byte *)((int)this + 8);
      if (0xf < *(uint *)((int)this + 0x1c)) {
        pbVar8 = *(byte **)((int)this + 8);
      }
      uVar5 = FUN_004031f0(pbVar8,*(uint *)((int)this + 0x18),(byte *)"PLAYERSHIP",10);
      if (((((char)uVar5 == '\0') && (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3)) &&
          (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8) == 2)) && (DAT_0065b3d4 != 0)) {
        FUN_00413e90((byte *)(DAT_0065b3d4 + 0x238),(byte *)((int)this + 8));
      }
    }
    else if (*(int *)((int)this + 4) == 1) {
      uVar5 = *(uint *)((int)this + 0x1c);
      pbVar10 = (byte *)((int)this + 8);
      pbVar8 = pbVar10;
      if (0xf < uVar5) {
        pbVar8 = *(byte **)pbVar10;
      }
      uVar2 = *(uint *)((int)this + 0x18);
      uVar6 = FUN_004031f0(pbVar8,uVar2,(byte *)"PLAYERSHIP",10);
      if ((((char)uVar6 == '\0') &&
          (cVar4 = FUN_005124e0(*(int *)(DAT_0065b5cc + 0xd0)), cVar4 == '\0')) &&
         (DAT_0065b3d4 != 0)) {
        if (0xf < uVar5) {
          pbVar10 = *(byte **)pbVar10;
        }
        pbVar8 = (byte *)(DAT_0065b3d4 + 0x238);
        if (0xf < *(uint *)(DAT_0065b3d4 + 0x24c)) {
          pbVar8 = *(byte **)(DAT_0065b3d4 + 0x238);
        }
        FUN_004031f0(pbVar8,*(uint *)(DAT_0065b3d4 + 0x248),pbVar10,uVar2);
      }
    }
    goto switchD_004a253a_default;
  }
  if (iVar7 != 3) {
    if (iVar7 != 4) {
      if (iVar7 == 1) {
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)this + 8));
        FUN_004a1150(DAT_0065b3bc,in_stack_ffffff7c);
        goto switchD_004a253a_default;
      }
      if (iVar7 == 2) {
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)this + 8));
        FUN_004a1150(DAT_0065b3bc,in_stack_ffffff7c);
        goto switchD_004a253a_default;
      }
      if (iVar7 == 5) {
        iVar7 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
        if (iVar7 != 0) {
          FUN_004ae4a0(iVar7);
        }
        goto switchD_004a253a_default;
      }
      if (iVar7 == 6) goto switchD_004a253a_default;
      if (iVar7 == 8) {
        pcVar11 = (char *)((int)this + 8);
        if (0xf < *(uint *)((int)this + 0x1c)) {
          pcVar11 = *(char **)pcVar11;
        }
        iVar7 = atoi(pcVar11);
        FUN_00507670(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar7);
        goto switchD_004a253a_default;
      }
      if (iVar7 == 9) {
        pcVar11 = (char *)((int)this + 8);
        if (0xf < *(uint *)((int)this + 0x1c)) {
          pcVar11 = *(char **)pcVar11;
        }
        iVar7 = atoi(pcVar11);
        FUN_00507670(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar7);
        goto switchD_004a253a_default;
      }
      if (iVar7 != 10) {
        if (iVar7 == 0xb) {
          iVar7 = FUN_0051fc00(*(void **)(DAT_0065b5cc + 0xd8),1);
          if (iVar7 != 0) {
            FUN_005177d0(*(int *)(DAT_0065b5cc + 0xd0));
          }
        }
        else if (iVar7 == 0xe) {
          iVar7 = FUN_005177d0(*(int *)(DAT_0065b5cc + 0xd0));
          if ((iVar7 != 0) && (*(int *)(iVar7 + 0x30) == 1)) {
            FUN_00403c90(iVar7 + -8);
          }
        }
        else {
          if (iVar7 == 0xc) {
            iVar7 = FUN_005177d0(*(int *)(DAT_0065b5cc + 0xd0));
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x30) != 1)) goto switchD_004a253a_default;
            pbVar10 = (byte *)(iVar7 + 0x230);
            pbVar8 = (byte *)((int)this + 8);
            if (0xf < *(uint *)((int)this + 0x1c)) {
              pbVar8 = *(byte **)((int)this + 8);
            }
            if (0xf < *(uint *)(iVar7 + 0x244)) {
              pbVar10 = *(byte **)pbVar10;
            }
            uVar5 = *(uint *)(iVar7 + 0x240);
          }
          else {
            if (iVar7 != 0xd) {
              if (iVar7 == 0xf) {
                FUN_004024e0(local_5c,(undefined4 *)((int)this + 8));
                ppppppbVar3 = local_5c[0];
                iVar7 = 0;
                do {
                  pbVar8 = (&PTR_DAT_005de750)[iVar7];
                  pbVar10 = pbVar8;
                  do {
                    bVar1 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                  } while (bVar1 != 0);
                  pppppppbVar9 = local_5c;
                  if (0xf < local_48) {
                    pppppppbVar9 = (byte *******)ppppppbVar3;
                  }
                  uVar5 = FUN_004031f0((byte *)pppppppbVar9,local_4c,pbVar8,
                                       (int)pbVar10 - (int)(pbVar8 + 1));
                  if ((char)uVar5 != '\0') {
                    if (0xf < local_48) {
                      pppppppbVar9 = (byte *******)ppppppbVar3;
                      if ((0xfff < local_48 + 1) &&
                         (pppppppbVar9 = (byte *******)ppppppbVar3[-1],
                         (byte *)0x1f < (byte *)((int)ppppppbVar3 + (-4 - (int)pppppppbVar9)))) {
                    // WARNING: Subroutine does not return
                        _invalid_parameter_noinfo_noreturn();
                      }
                      FUN_005adb3f(pppppppbVar9);
                    }
                    goto LAB_004a295b;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 0x153);
                if (0xf < local_48) {
                  pppppppbVar9 = (byte *******)ppppppbVar3;
                  if ((0xfff < local_48 + 1) &&
                     (pppppppbVar9 = (byte *******)ppppppbVar3[-1],
                     (byte *)0x1f < (byte *)((int)ppppppbVar3 + (-4 - (int)pppppppbVar9)))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_005adb3f(pppppppbVar9);
                }
                iVar7 = 0;
LAB_004a295b:
                local_5c[0] = (byte ******)((uint)local_5c[0] & 0xffffff00);
                local_48 = 0xf;
                local_4c = 0;
                FUN_004da1b0(local_3c,iVar7);
                local_8 = 0;
                in_stack_ffffff7c = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
                FUN_00402690(&stack0xffffff7c,&PTR_005ce008,0);
                FUN_00417780(local_3c,*(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffff7c);
                local_8 = 1;
                if (local_18 != (int *)0x0) {
                  (**(code **)(*local_18 + 0x10))();
                }
              }
              goto switchD_004a253a_default;
            }
            iVar7 = FUN_005177d0(*(int *)(DAT_0065b5cc + 0xd0));
            if ((((iVar7 == 0) || (*(int *)(iVar7 + 0x30) != 1)) ||
                (uVar5 = FUN_00403c90(iVar7 + -8), (char)uVar5 == '\0')) ||
               (iVar7 = *(int *)(extraout_EDX + 0x390), iVar7 == 0)) goto switchD_004a253a_default;
            pbVar8 = (byte *)((int)this + 8);
            if (0xf < *(uint *)((int)this + 0x1c)) {
              pbVar8 = *(byte **)((int)this + 8);
            }
            pbVar10 = (byte *)(iVar7 + 8);
            if (0xf < *(uint *)(iVar7 + 0x1c)) {
              pbVar10 = *(byte **)(iVar7 + 8);
            }
            uVar5 = *(uint *)(iVar7 + 0x18);
          }
          FUN_004031f0(pbVar10,uVar5,pbVar8,*(uint *)((int)this + 0x18));
        }
        goto switchD_004a253a_default;
      }
      pbVar8 = (byte *)((int)this + 8);
      iVar7 = FUN_00412770();
      FUN_004a2a30((void *)(iVar7 + 0x10),pbVar8);
      switch(*(undefined4 *)((int)this + 4)) {
      case 0:
        goto switchD_004a25c4_caseD_0;
      case 1:
        goto switchD_004a25c4_caseD_1;
      case 2:
        goto switchD_004a25c4_caseD_2;
      case 3:
        goto switchD_004a25c4_caseD_3;
      case 4:
        goto switchD_004a25c4_caseD_4;
      case 5:
        goto switchD_004a25c4_caseD_5;
      default:
        goto switchD_004a253a_default;
      }
    }
    if (param_1 == (void *)0x0) goto switchD_004a253a_default;
    FUN_005073a0(param_1,*(int *)((int)this + 0x3c));
    switch(*(undefined4 *)((int)this + 4)) {
    case 0:
      goto switchD_004a25c4_caseD_0;
    case 1:
      goto switchD_004a25c4_caseD_1;
    case 2:
      goto switchD_004a25c4_caseD_2;
    case 3:
      goto switchD_004a25c4_caseD_3;
    case 4:
      goto switchD_004a25c4_caseD_4;
    case 5:
      goto switchD_004a25c4_caseD_5;
    default:
      goto switchD_004a253a_default;
    }
  }
  switch(*(undefined4 *)((int)this + 4)) {
  case 0:
switchD_004a25c4_caseD_0:
    break;
  case 1:
switchD_004a25c4_caseD_1:
    break;
  case 2:
switchD_004a25c4_caseD_2:
    break;
  case 3:
switchD_004a25c4_caseD_3:
    break;
  case 4:
switchD_004a25c4_caseD_4:
    break;
  case 5:
switchD_004a25c4_caseD_5:
  default:
    break;
  }
switchD_004a253a_default:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


byte * __thiscall FUN_004a2a30(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  pbVar8 = *(byte **)this;
  pbVar7 = this;
  pbVar10 = pbVar8;
  if ((*(byte **)(pbVar8 + 4))[0xd] == 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    pbVar9 = *(byte **)(pbVar8 + 4);
    do {
      pbVar7 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar7 = *(byte **)param_1;
      }
      pbVar6 = pbVar9 + 0x10;
      if (0xf < *(uint *)(pbVar9 + 0x24)) {
        pbVar6 = *(byte **)(pbVar9 + 0x10);
      }
      uVar4 = *(uint *)(pbVar9 + 0x20);
      uVar3 = uVar4;
      if (uVar1 < uVar4) {
        uVar3 = uVar1;
      }
      while (uVar2 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar6 != *(int *)pbVar7) goto LAB_004a2aa6;
        pbVar6 = pbVar6 + 4;
        pbVar7 = pbVar7 + 4;
        uVar3 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004a2ada:
        uVar3 = 0;
      }
      else {
LAB_004a2aa6:
        bVar11 = *pbVar6 < *pbVar7;
        if ((*pbVar6 == *pbVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar11 = pbVar6[1] < pbVar7[1], pbVar6[1] == pbVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar11 = pbVar6[2] < pbVar7[2], pbVar6[2] == pbVar7[2] &&
               ((uVar2 == 0xffffffff || (bVar11 = pbVar6[3] < pbVar7[3], pbVar6[3] == pbVar7[3])))))
              ))))))) goto LAB_004a2ada;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= uVar4) goto LAB_004a2af0;
LAB_004a2b87:
        pbVar6 = *(byte **)(pbVar9 + 8);
      }
      else {
        if ((int)uVar3 < 0) goto LAB_004a2b87;
LAB_004a2af0:
        pbVar6 = *(byte **)pbVar9;
        pbVar10 = pbVar9;
      }
      pbVar7 = param_1;
      pbVar9 = pbVar6;
    } while (pbVar6[0xd] == 0);
  }
  if (pbVar10 == pbVar8) goto LAB_004a2bb0;
  pbVar8 = pbVar10 + 0x10;
  if (0xf < *(uint *)(pbVar10 + 0x24)) {
    pbVar8 = *(byte **)(pbVar10 + 0x10);
  }
  pbVar7 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar7 = *(byte **)param_1;
  }
  uVar1 = *(uint *)(pbVar10 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    uVar4 = uVar1;
  }
  while (uVar3 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_004a2b4d;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar4 = uVar3;
  }
  if (uVar3 == 0xfffffffc) {
LAB_004a2b8f:
    uVar4 = 0;
  }
  else {
LAB_004a2b4d:
    bVar11 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar3 == 0xfffffffd ||
        ((bVar11 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar3 == 0xfffffffe ||
          ((bVar11 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar3 == 0xffffffff || (bVar11 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3])))))))))
        ))) goto LAB_004a2b8f;
    uVar4 = -(uint)bVar11 | 1;
  }
  if (uVar4 == 0) {
    if (uVar1 <= *(uint *)(param_1 + 0x10)) goto LAB_004a2ba1;
  }
  else if (-1 < (int)uVar4) {
LAB_004a2ba1:
    return pbVar10 + 0x28;
  }
LAB_004a2bb0:
  piVar5 = (int *)FUN_00414440(this,pbVar7,&param_1);
  FUN_004a2db0(this,&param_1,pbVar10,(byte *)(piVar5 + 4),piVar5);
  return param_1 + 0x28;
}


byte * __thiscall FUN_004a2bf0(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  piVar5 = *(int **)this;
  pbVar7 = this;
  piVar10 = piVar5;
  if (*(char *)(piVar5[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    piVar8 = (int *)piVar5[1];
    do {
      pbVar7 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar7 = *(byte **)param_1;
      }
      pbVar6 = (byte *)(piVar8 + 4);
      if (0xf < (uint)piVar8[9]) {
        pbVar6 = (byte *)piVar8[4];
      }
      uVar4 = piVar8[8];
      uVar3 = uVar4;
      if (uVar1 < uVar4) {
        uVar3 = uVar1;
      }
      while (uVar2 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar6 != *(int *)pbVar7) goto LAB_004a2c66;
        pbVar6 = pbVar6 + 4;
        pbVar7 = pbVar7 + 4;
        uVar3 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004a2c9a:
        uVar3 = 0;
      }
      else {
LAB_004a2c66:
        bVar11 = *pbVar6 < *pbVar7;
        if ((*pbVar6 == *pbVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar11 = pbVar6[1] < pbVar7[1], pbVar6[1] == pbVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar11 = pbVar6[2] < pbVar7[2], pbVar6[2] == pbVar7[2] &&
               ((uVar2 == 0xffffffff || (bVar11 = pbVar6[3] < pbVar7[3], pbVar6[3] == pbVar7[3])))))
              ))))))) goto LAB_004a2c9a;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= uVar4) goto LAB_004a2cb0;
LAB_004a2d47:
        piVar9 = (int *)piVar8[2];
      }
      else {
        if ((int)uVar3 < 0) goto LAB_004a2d47;
LAB_004a2cb0:
        piVar9 = (int *)*piVar8;
        piVar10 = piVar8;
      }
      pbVar7 = param_1;
      piVar8 = piVar9;
    } while (*(char *)((int)piVar9 + 0xd) == '\0');
  }
  if (piVar10 == piVar5) goto LAB_004a2d70;
  pbVar6 = (byte *)(piVar10 + 4);
  if (0xf < (uint)piVar10[9]) {
    pbVar6 = (byte *)piVar10[4];
  }
  pbVar7 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar7 = *(byte **)param_1;
  }
  uVar1 = piVar10[8];
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    uVar4 = uVar1;
  }
  while (uVar3 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)pbVar7 != *(int *)pbVar6) goto LAB_004a2d0d;
    pbVar7 = pbVar7 + 4;
    pbVar6 = pbVar6 + 4;
    uVar4 = uVar3;
  }
  if (uVar3 == 0xfffffffc) {
LAB_004a2d4f:
    uVar4 = 0;
  }
  else {
LAB_004a2d0d:
    bVar11 = *pbVar7 < *pbVar6;
    if ((*pbVar7 == *pbVar6) &&
       ((uVar3 == 0xfffffffd ||
        ((bVar11 = pbVar7[1] < pbVar6[1], pbVar7[1] == pbVar6[1] &&
         ((uVar3 == 0xfffffffe ||
          ((bVar11 = pbVar7[2] < pbVar6[2], pbVar7[2] == pbVar6[2] &&
           ((uVar3 == 0xffffffff || (bVar11 = pbVar7[3] < pbVar6[3], pbVar7[3] == pbVar6[3])))))))))
        ))) goto LAB_004a2d4f;
    uVar4 = -(uint)bVar11 | 1;
  }
  if (uVar4 == 0) {
    if (uVar1 <= *(uint *)(param_1 + 0x10)) goto LAB_004a2d61;
  }
  else if (-1 < (int)uVar4) {
LAB_004a2d61:
    return (byte *)(piVar10 + 10);
  }
LAB_004a2d70:
  piVar5 = (int *)FUN_004a33d0(this,pbVar7,&param_1);
  FUN_004144c0(this,&param_1,piVar10,(byte *)(piVar5 + 4),piVar5);
  return param_1 + 0x28;
}


undefined4 * __thiscall
FUN_004a2db0(void *this,undefined4 *param_1,byte *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  uint uStack_40;
  undefined4 local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  void *local_20;
  byte *local_1c;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb510;
  local_10 = ExceptionList;
  uStack_40 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_40;
    FUN_004a3450(this,param_1,'\x01',*(undefined4 **)this,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  local_28 = *(byte **)this;
  if (param_2 != *(byte **)local_28) {
    if (param_2 != local_28) {
      local_2c = param_2 + 0x10;
      pbVar11 = local_2c;
      if (0xf < *(uint *)(param_2 + 0x24)) {
        pbVar11 = *(byte **)local_2c;
      }
      pbVar9 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar9 = *(byte **)param_3;
      }
      local_1c = *(byte **)(param_3 + 0x10);
      pbVar12 = local_1c;
      if (*(byte **)(param_2 + 0x20) < local_1c) {
        pbVar12 = *(byte **)(param_2 + 0x20);
      }
      while (pbVar10 = pbVar12 + -4, (byte *)0x3 < pbVar12) {
        if (*(int *)pbVar9 != *(int *)pbVar11) goto LAB_004a3006;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar10;
      }
      if (pbVar10 == (byte *)0xfffffffc) {
LAB_004a303a:
        uVar7 = 0;
      }
      else {
LAB_004a3006:
        bVar13 = *pbVar9 < *pbVar11;
        if ((*pbVar9 == *pbVar11) &&
           ((pbVar10 == (byte *)0xfffffffd ||
            ((bVar13 = pbVar9[1] < pbVar11[1], pbVar9[1] == pbVar11[1] &&
             ((pbVar10 == (byte *)0xfffffffe ||
              ((bVar13 = pbVar9[2] < pbVar11[2], pbVar9[2] == pbVar11[2] &&
               ((pbVar10 == (byte *)0xffffffff ||
                (bVar13 = pbVar9[3] < pbVar11[3], pbVar9[3] == pbVar11[3]))))))))))))
        goto LAB_004a303a;
        uVar7 = -(uint)bVar13 | 1;
      }
      if (uVar7 == 0) {
        if (local_1c < *(byte **)(param_2 + 0x20)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(byte **)(param_2 + 0x20) < local_1c);
        }
      }
      if ((int)uVar7 < 0) {
        if (param_2[0xd] == 0) {
          pbVar11 = *(byte **)param_2;
          if (pbVar11[0xd] == 0) {
            bVar1 = (*(byte **)(pbVar11 + 8))[0xd];
            pbVar9 = *(byte **)(pbVar11 + 8);
            while (bVar1 == 0) {
              bVar1 = (*(byte **)(pbVar9 + 8))[0xd];
              pbVar11 = pbVar9;
              pbVar9 = *(byte **)(pbVar9 + 8);
            }
          }
          else {
            bVar1 = (*(byte **)(param_2 + 4))[0xd];
            pbVar12 = *(byte **)(param_2 + 4);
            pbVar9 = param_2;
            while ((pbVar11 = pbVar12, bVar1 == 0 && (pbVar9 == *(byte **)pbVar11))) {
              bVar1 = (*(byte **)(pbVar11 + 4))[0xd];
              pbVar12 = *(byte **)(pbVar11 + 4);
              pbVar9 = pbVar11;
            }
            if (pbVar9[0xd] != 0) {
              pbVar11 = pbVar9;
            }
          }
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
        }
        pbVar9 = param_3;
        if (0xf < *(uint *)(param_3 + 0x14)) {
          pbVar9 = *(byte **)param_3;
        }
        pbVar12 = pbVar11 + 0x10;
        if (0xf < *(uint *)(pbVar11 + 0x24)) {
          pbVar12 = *(byte **)(pbVar11 + 0x10);
        }
        local_2c = *(byte **)(pbVar11 + 0x20);
        pbVar10 = local_2c;
        if (local_1c < local_2c) {
          pbVar10 = local_1c;
        }
        while (local_24 = pbVar10 + -4, (byte *)0x3 < pbVar10) {
          if (*(int *)pbVar12 != *(int *)pbVar9) goto LAB_004a30fc;
          pbVar12 = pbVar12 + 4;
          pbVar9 = pbVar9 + 4;
          pbVar10 = local_24;
        }
        if (local_24 == (byte *)0xfffffffc) {
LAB_004a3133:
          uVar7 = 0;
        }
        else {
LAB_004a30fc:
          bVar13 = *pbVar12 < *pbVar9;
          if ((*pbVar12 == *pbVar9) &&
             ((local_24 == (byte *)0xfffffffd ||
              ((bVar13 = pbVar12[1] < pbVar9[1], pbVar12[1] == pbVar9[1] &&
               ((local_24 == (byte *)0xfffffffe ||
                ((bVar13 = pbVar12[2] < pbVar9[2], pbVar12[2] == pbVar9[2] &&
                 ((local_24 == (byte *)0xffffffff ||
                  (bVar13 = pbVar12[3] < pbVar9[3], pbVar12[3] == pbVar9[3]))))))))))))
          goto LAB_004a3133;
          uVar7 = -(uint)bVar13 | 1;
        }
        if (uVar7 == 0) {
          if (local_2c < local_1c) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(local_1c < local_2c);
          }
        }
        if ((int)uVar7 < 0) {
          iVar2 = *(int *)(pbVar11 + 8);
          if (*(char *)(iVar2 + 0xd) == '\0') {
            local_14 = (undefined1 *)&uStack_40;
            FUN_004a3450(this,param_1,'\x01',(undefined4 *)param_2,iVar2,param_4);
            ExceptionList = local_10;
            return param_1;
          }
          local_14 = (undefined1 *)&uStack_40;
          FUN_004a3450(this,param_1,'\0',(undefined4 *)pbVar11,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
      }
      pbVar11 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar11 = *(byte **)param_3;
      }
      pbVar9 = param_2 + 0x10;
      if (0xf < *(uint *)(param_2 + 0x24)) {
        pbVar9 = *(byte **)(param_2 + 0x10);
      }
      pbVar12 = *(byte **)(param_2 + 0x20);
      if (local_1c < *(byte **)(param_2 + 0x20)) {
        pbVar12 = local_1c;
      }
      while (pbVar10 = pbVar12 + -4, (byte *)0x3 < pbVar12) {
        if (*(int *)pbVar9 != *(int *)pbVar11) goto LAB_004a31e6;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar10;
      }
      if (pbVar10 == (byte *)0xfffffffc) {
LAB_004a321a:
        uVar7 = 0;
      }
      else {
LAB_004a31e6:
        bVar13 = *pbVar9 < *pbVar11;
        if ((*pbVar9 == *pbVar11) &&
           ((pbVar10 == (byte *)0xfffffffd ||
            ((bVar13 = pbVar9[1] < pbVar11[1], pbVar9[1] == pbVar11[1] &&
             ((pbVar10 == (byte *)0xfffffffe ||
              ((bVar13 = pbVar9[2] < pbVar11[2], pbVar9[2] == pbVar11[2] &&
               ((pbVar10 == (byte *)0xffffffff ||
                (bVar13 = pbVar9[3] < pbVar11[3], pbVar9[3] == pbVar11[3]))))))))))))
        goto LAB_004a321a;
        uVar7 = -(uint)bVar13 | 1;
      }
      if (uVar7 == 0) {
        pbVar9 = param_2 + 0x10;
        if (*(byte **)(param_2 + 0x20) < local_1c) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(local_1c < *(byte **)(param_2 + 0x20));
        }
      }
      if (-1 < (int)uVar7) goto LAB_004a337c;
      pbVar11 = *(byte **)(param_2 + 8);
      local_15 = pbVar11[0xd];
      pbVar9 = param_2;
      if (local_15 == 0) {
        bVar1 = (*(byte **)pbVar11)[0xd];
        pbVar12 = *(byte **)pbVar11;
        while (bVar1 == 0) {
          pbVar9 = *(byte **)pbVar12;
          pbVar11 = pbVar12;
          pbVar12 = pbVar9;
          bVar1 = pbVar9[0xd];
        }
      }
      else {
        bVar1 = (*(byte **)(param_2 + 4))[0xd];
        pbVar12 = *(byte **)(param_2 + 4);
        while ((pbVar11 = pbVar12, bVar1 == 0 && (pbVar9 == *(byte **)(pbVar11 + 8)))) {
          bVar1 = (*(byte **)(pbVar11 + 4))[0xd];
          pbVar12 = *(byte **)(pbVar11 + 4);
          pbVar9 = pbVar11;
        }
      }
      if (pbVar11 == local_28) goto LAB_004a332d;
      pbVar9 = pbVar11 + 0x10;
      if (0xf < *(uint *)(pbVar11 + 0x24)) {
        pbVar9 = *(byte **)(pbVar11 + 0x10);
      }
      pbVar12 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar12 = *(byte **)param_3;
      }
      pbVar10 = local_1c;
      if (*(byte **)(pbVar11 + 0x20) < local_1c) {
        pbVar10 = *(byte **)(pbVar11 + 0x20);
      }
      while (pbVar3 = pbVar10 + -4, (byte *)0x3 < pbVar10) {
        if (*(int *)pbVar12 != *(int *)pbVar9) goto LAB_004a32d6;
        pbVar12 = pbVar12 + 4;
        pbVar9 = pbVar9 + 4;
        pbVar10 = pbVar3;
      }
      if (pbVar3 == (byte *)0xfffffffc) {
LAB_004a330a:
        uVar7 = 0;
      }
      else {
LAB_004a32d6:
        bVar13 = *pbVar12 < *pbVar9;
        if ((*pbVar12 == *pbVar9) &&
           ((pbVar3 == (byte *)0xfffffffd ||
            ((bVar13 = pbVar12[1] < pbVar9[1], pbVar12[1] == pbVar9[1] &&
             ((pbVar3 == (byte *)0xfffffffe ||
              ((bVar13 = pbVar12[2] < pbVar9[2], pbVar12[2] == pbVar9[2] &&
               ((pbVar3 == (byte *)0xffffffff ||
                (bVar13 = pbVar12[3] < pbVar9[3], pbVar12[3] == pbVar9[3]))))))))))))
        goto LAB_004a330a;
        uVar7 = -(uint)bVar13 | 1;
      }
      if (uVar7 == 0) {
        if (local_1c < *(byte **)(pbVar11 + 0x20)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(byte **)(pbVar11 + 0x20) < local_1c);
        }
      }
      pbVar9 = (byte *)(uVar7 >> 0x1f);
      if ((int)uVar7 < 0) {
LAB_004a332d:
        if (local_15 == 0) {
          FUN_004a3450(this,param_1,'\x01',(undefined4 *)pbVar11,pbVar9,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_40;
        FUN_004a3450(this,param_1,'\0',(undefined4 *)param_2,pbVar9,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_004a337c;
    }
    local_2c = *(byte **)(local_28 + 8);
    pbVar11 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pbVar11 = *(byte **)param_3;
    }
    pbVar9 = local_2c + 0x10;
    if (0xf < *(uint *)(local_2c + 0x24)) {
      pbVar9 = *(byte **)(local_2c + 0x10);
    }
    uVar7 = *(uint *)(param_3 + 0x10);
    uVar5 = *(uint *)(local_2c + 0x20);
    uVar6 = uVar5;
    if (uVar7 < uVar5) {
      uVar6 = uVar7;
    }
    while (uVar4 = uVar6 - 4, 3 < uVar6) {
      if (*(int *)pbVar9 != *(int *)pbVar11) goto LAB_004a2f36;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
      uVar6 = uVar4;
    }
    if (uVar4 == 0xfffffffc) {
LAB_004a2f6a:
      uVar6 = 0;
    }
    else {
LAB_004a2f36:
      bVar13 = *pbVar9 < *pbVar11;
      if ((*pbVar9 == *pbVar11) &&
         ((uVar4 == 0xfffffffd ||
          ((bVar13 = pbVar9[1] < pbVar11[1], pbVar9[1] == pbVar11[1] &&
           ((uVar4 == 0xfffffffe ||
            ((bVar13 = pbVar9[2] < pbVar11[2], pbVar9[2] == pbVar11[2] &&
             ((uVar4 == 0xffffffff || (bVar13 = pbVar9[3] < pbVar11[3], pbVar9[3] == pbVar11[3])))))
            ))))))) goto LAB_004a2f6a;
      uVar6 = -(uint)bVar13 | 1;
    }
    if (uVar6 == 0) {
      if (uVar5 < uVar7) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar7 < uVar5);
      }
    }
    if ((int)uVar6 < 0) {
      local_14 = (undefined1 *)&uStack_40;
      FUN_004a3450(this,param_1,'\0',(undefined4 *)local_2c,pbVar9,param_4);
      ExceptionList = local_10;
      return param_1;
    }
    goto LAB_004a337c;
  }
  pbVar9 = param_2 + 0x10;
  if (0xf < *(uint *)(param_2 + 0x24)) {
    pbVar9 = *(byte **)(param_2 + 0x10);
  }
  pbVar11 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar11 = *(byte **)param_3;
  }
  uVar7 = *(uint *)(param_2 + 0x20);
  uVar5 = *(uint *)(param_3 + 0x10);
  if (uVar7 < *(uint *)(param_3 + 0x10)) {
    uVar5 = uVar7;
  }
  while (uVar6 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar11 != *(int *)pbVar9) goto LAB_004a2e66;
    pbVar11 = pbVar11 + 4;
    pbVar9 = pbVar9 + 4;
    uVar5 = uVar6;
  }
  if (uVar6 == 0xfffffffc) {
LAB_004a2e9a:
    uVar5 = 0;
  }
  else {
LAB_004a2e66:
    bVar13 = *pbVar11 < *pbVar9;
    if ((*pbVar11 == *pbVar9) &&
       ((uVar6 == 0xfffffffd ||
        ((bVar13 = pbVar11[1] < pbVar9[1], pbVar11[1] == pbVar9[1] &&
         ((uVar6 == 0xfffffffe ||
          ((bVar13 = pbVar11[2] < pbVar9[2], pbVar11[2] == pbVar9[2] &&
           ((uVar6 == 0xffffffff || (bVar13 = pbVar11[3] < pbVar9[3], pbVar11[3] == pbVar9[3])))))))
         ))))) goto LAB_004a2e9a;
    uVar5 = -(uint)bVar13 | 1;
  }
  if (uVar5 == 0) {
    if (*(uint *)(param_3 + 0x10) < uVar7) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(uVar7 < *(uint *)(param_3 + 0x10));
    }
  }
  if ((int)uVar5 < 0) {
    local_14 = (undefined1 *)&uStack_40;
    FUN_004a3450(this,param_1,'\x01',(undefined4 *)param_2,pbVar9,param_4);
    ExceptionList = local_10;
    return param_1;
  }
LAB_004a337c:
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_40;
  puVar8 = (undefined4 *)FUN_004a3570(this,&local_30,pbVar9,param_3,param_4);
  *param_1 = *puVar8;
  ExceptionList = local_10;
  return param_1;
}


int __thiscall FUN_004a33d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb530;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00414d60(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_004024e0((void *)(iVar1 + 0x10),(undefined4 *)*param_2);
  *(undefined1 *)(iVar1 + 0x28) = 0;
  ExceptionList = local_10;
  return iVar1;
}


void __thiscall
FUN_004a3450(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *piVar3;
  int *piVar4;
  
  if (0x5d1745b < *(uint *)((int)this + 4)) {
    FUN_00414d80(param_5);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar2 = (int *)piVar4[1];
    piVar3 = *(int **)piVar2[1];
    if (piVar2 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar3[3] == '\0') {
LAB_004a3508:
        *(undefined1 *)(piVar2 + 3) = 1;
        *(undefined1 *)(piVar3 + 3) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar2[2]) {
          FUN_00413e30(this,(int)piVar2);
          this = extraout_ECX;
          piVar4 = piVar2;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        FUN_00413dd0(this,*(int **)(piVar4[1] + 4));
        this = extraout_ECX_00;
      }
    }
    else {
      if ((char)piVar3[3] == '\0') goto LAB_004a3508;
      if (piVar4 == (int *)*piVar2) {
        FUN_00413dd0(this,piVar2);
        this = extraout_ECX_01;
        piVar4 = piVar2;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      FUN_00413e30(this,*(int *)(piVar4[1] + 4));
      this = extraout_ECX_02;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


void __thiscall
FUN_004a3570(void *this,undefined4 *param_1,undefined4 param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  byte local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bb550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar3 = 1;
  pbVar9 = *(byte **)this;
  local_20 = 1;
  pbVar8 = pbVar9;
  if ((*(byte **)(pbVar9 + 4))[0xd] == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    pbVar10 = *(byte **)(pbVar9 + 4);
    do {
      pbVar8 = pbVar10;
      pbVar10 = pbVar8 + 0x10;
      if (0xf < *(uint *)(pbVar8 + 0x24)) {
        pbVar10 = *(byte **)(pbVar8 + 0x10);
      }
      pbVar7 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar7 = *(byte **)param_3;
      }
      uVar6 = *(uint *)(pbVar8 + 0x20);
      uVar4 = uVar1;
      if (uVar6 < uVar1) {
        uVar4 = uVar6;
      }
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*(int *)pbVar7 != *(int *)pbVar10) goto LAB_004a360d;
        pbVar7 = pbVar7 + 4;
        pbVar10 = pbVar10 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004a3641:
        uVar4 = 0;
      }
      else {
LAB_004a360d:
        bVar11 = *pbVar7 < *pbVar10;
        if ((*pbVar7 == *pbVar10) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar11 = pbVar7[1] < pbVar10[1], pbVar7[1] == pbVar10[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar11 = pbVar7[2] < pbVar10[2], pbVar7[2] == pbVar10[2] &&
               ((uVar2 == 0xffffffff || (bVar11 = pbVar7[3] < pbVar10[3], pbVar7[3] == pbVar10[3])))
               ))))))))) goto LAB_004a3641;
        uVar4 = -(uint)bVar11 | 1;
      }
      if (uVar4 == 0) {
        if (uVar1 < uVar6) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar6 < uVar1);
        }
      }
      local_20 = (byte)(uVar4 >> 0x18);
      bVar3 = local_20 >> 7;
      local_20 = local_20 >> 7;
      if ((int)uVar4 < 0) {
        pbVar10 = *(byte **)pbVar8;
      }
      else {
        pbVar10 = *(byte **)(pbVar8 + 8);
      }
    } while (pbVar10[0xd] == 0);
  }
  pbVar10 = pbVar8;
  if (bVar3 != 0) {
    if (pbVar8 == *(byte **)pbVar9) {
      local_20 = 1;
      pbVar9 = pbVar8;
      goto LAB_004a3695;
    }
    if (pbVar8[0xd] == 0) {
      pbVar10 = *(byte **)pbVar8;
      if (pbVar10[0xd] == 0) {
        bVar3 = (*(byte **)(pbVar10 + 8))[0xd];
        pbVar9 = *(byte **)(pbVar10 + 8);
        while (bVar3 == 0) {
          bVar3 = (*(byte **)(pbVar9 + 8))[0xd];
          pbVar10 = pbVar9;
          pbVar9 = *(byte **)(pbVar9 + 8);
        }
      }
      else {
        bVar3 = (*(byte **)(pbVar8 + 4))[0xd];
        pbVar9 = *(byte **)(pbVar8 + 4);
        pbVar10 = pbVar8;
        while ((pbVar7 = pbVar9, bVar3 == 0 && (pbVar10 == *(byte **)pbVar7))) {
          bVar3 = (*(byte **)(pbVar7 + 4))[0xd];
          pbVar9 = *(byte **)(pbVar7 + 4);
          pbVar10 = pbVar7;
        }
        if (pbVar10[0xd] == 0) {
          pbVar10 = pbVar7;
        }
      }
    }
    else {
      pbVar10 = *(byte **)(pbVar8 + 8);
    }
  }
  pbVar7 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar7 = *(byte **)param_3;
  }
  pbVar9 = pbVar10 + 0x10;
  if (0xf < *(uint *)(pbVar10 + 0x24)) {
    pbVar9 = *(byte **)(pbVar10 + 0x10);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar6 = *(uint *)(pbVar10 + 0x20);
  if (uVar1 < *(uint *)(pbVar10 + 0x20)) {
    uVar6 = uVar1;
  }
  while (uVar4 = uVar6 - 4, 3 < uVar6) {
    if (*(int *)pbVar9 != *(int *)pbVar7) goto LAB_004a375a;
    pbVar9 = pbVar9 + 4;
    pbVar7 = pbVar7 + 4;
    uVar6 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_004a378e:
    uVar6 = 0;
  }
  else {
LAB_004a375a:
    bVar11 = *pbVar9 < *pbVar7;
    if ((*pbVar9 == *pbVar7) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar11 = pbVar9[1] < pbVar7[1], pbVar9[1] == pbVar7[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar11 = pbVar9[2] < pbVar7[2], pbVar9[2] == pbVar7[2] &&
           ((uVar4 == 0xffffffff || (bVar11 = pbVar9[3] < pbVar7[3], pbVar9[3] == pbVar7[3])))))))))
        ))) goto LAB_004a378e;
    uVar6 = -(uint)bVar11 | 1;
  }
  if (uVar6 == 0) {
    if (*(uint *)(pbVar10 + 0x20) < uVar1) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(uVar1 < *(uint *)(pbVar10 + 0x20));
    }
  }
  if (-1 < (int)uVar6) {
    FUN_00414d80(param_4);
    *param_1 = pbVar10;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004a3695:
  puVar5 = (undefined4 *)FUN_004a3450(this,&param_3,local_20,(undefined4 *)pbVar8,pbVar9,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004a3800(void *this,void *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte ***pppbVar3;
  byte ****ppppbVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint in_stack_00000018;
  byte ***local_34 [4];
  uint local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0628;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  FUN_004024e0(local_34,&param_1);
  pppbVar3 = local_34[0];
  local_18 = *(int *)((int)this + 0x38);
  uVar9 = 0;
  local_14 = *(int *)((int)this + 0x3c) - local_18 >> 2;
  if (local_14 != 0) {
    do {
      pbVar1 = *(byte **)(local_18 + uVar9 * 4);
      ppppbVar4 = local_34;
      if (0xf < local_20) {
        ppppbVar4 = (byte ****)pppbVar3;
      }
      pbVar6 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar6 = *(byte **)pbVar1;
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar1 + 0x10),(byte *)ppppbVar4,local_24);
      if ((char)uVar5 != '\0') {
        if (0xf < local_20) {
          ppppbVar4 = (byte ****)pppbVar3;
          if (0xfff < local_20 + 1) {
            ppppbVar4 = (byte ****)pppbVar3[-1];
            if ((byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar4))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_005adb3f(ppppbVar4);
        }
        goto LAB_004a38f9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_14);
  }
  if (0xf < local_20) {
    ppppbVar4 = (byte ****)pppbVar3;
    if (0xfff < local_20 + 1) {
      ppppbVar4 = (byte ****)pppbVar3[-1];
      if ((byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppbVar4);
  }
  uVar9 = 0xffffffff;
LAB_004a38f9:
  local_34[0] = (byte ***)((uint)local_34[0] & 0xffffff00);
  local_20 = 0xf;
  uVar5 = 0;
  if (uVar9 != 0xffffffff) {
    uVar5 = uVar9;
  }
  local_24 = 0;
  *(uint *)((int)local_1c + 0x18) = uVar5;
  if ((*(int *)((int)local_1c + 0x3c) - *(int *)((int)local_1c + 0x38) & 0xfffffffcU) != 0) {
    puVar2 = *(undefined4 **)(*(int *)((int)local_1c + 0x38) + uVar5 * 4);
    *(undefined4 **)((int)local_1c + 0x34) = puVar2;
    if ((undefined4 *)((int)local_1c + 0x1c) != puVar2) {
      puVar8 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar8 = (undefined4 *)*puVar2;
      }
      FUN_00402690((undefined4 *)((int)local_1c + 0x1c),puVar8,puVar2[4]);
    }
  }
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


void __thiscall FUN_004a39a0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (param_1 != -1) {
    iVar2 = param_1;
  }
  *(int *)((int)this + 0x18) = iVar2;
  if ((*(int *)((int)this + 0x3c) - *(int *)((int)this + 0x38) & 0xfffffffcU) != 0) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x38) + iVar2 * 4);
    *(undefined4 **)((int)this + 0x34) = puVar1;
    if ((undefined4 *)((int)this + 0x1c) != puVar1) {
      puVar3 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_00402690((undefined4 *)((int)this + 0x1c),puVar3,puVar1[4]);
    }
  }
  return;
}


void __fastcall FUN_004a39f0(byte *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2 != 0) {
    do {
      pbVar6 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar6 = *(byte **)param_1;
      }
      uVar4 = FUN_004031f0(pbVar6,*(uint *)(param_1 + 0x10),(byte *)&PTR_005ce008,0);
      if ((char)uVar4 == '\0') {
        iVar2 = *(int *)(*(int *)(param_1 + 0x44) + local_8 * 4);
        pbVar6 = *(byte **)(iVar2 + 0x4c);
        pbVar5 = FUN_004143f0(*(byte **)(iVar2 + 0x48),pbVar6,param_1);
        if (pbVar5 != pbVar6) goto LAB_004a3a4f;
      }
      else {
LAB_004a3a4f:
        puVar3 = *(undefined4 **)(param_1 + 0x3c);
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x44) + local_8 * 4);
        if (*(undefined4 **)(param_1 + 0x40) == puVar3) {
          FUN_00414080(param_1 + 0x38,puVar3,puVar1);
        }
        else {
          *puVar3 = *puVar1;
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2));
  }
  return;
}


basic_string<> * __thiscall FUN_004a3a90(void *this,int param_1,basic_string<> *param_2)

{
  undefined4 uVar1;
  undefined3 uVar2;
  undefined3 uVar3;
  bool bVar4;
  basic_string<> *pbVar5;
  int iVar6;
  basic_string<> *pbVar7;
  undefined4 *puVar8;
  basic_string<> *pbVar9;
  void *this_00;
  basic_string<> *pbVar10;
  basic_string<> *pbVar11;
  basic_string<> *pbVar12;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  byte *in_stack_ffffffb0;
  basic_string<> *local_20 [3];
  basic_string<> *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005bb5b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar7 = (basic_string<> *)((int)this + 4);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *pbVar7 = (basic_string<>)0x0;
  uStack_7 = 0;
  uVar2 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  local_14 = this;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else if (param_1 == 1) {
    *(undefined4 *)this = 1;
  }
  else {
    if (param_1 != 9) {
      if (param_1 == 2) {
        pbVar7 = (basic_string<> *)&param_2;
        if (0xf < in_stack_0000001c) {
          pbVar7 = param_2;
        }
        iVar6 = atoi((char *)pbVar7);
        *(undefined4 *)this = 2;
        *(int *)((int)this + 0x20) = iVar6;
        uVar3 = uStack_7;
        goto LAB_004a3ecc;
      }
      if (param_1 == 3) {
        pbVar7 = (basic_string<> *)&param_2;
        if (0xf < in_stack_0000001c) {
          pbVar7 = param_2;
        }
        iVar6 = atoi((char *)pbVar7);
        *(undefined4 *)this = 3;
        *(int *)((int)this + 0x20) = iVar6;
        uVar3 = uStack_7;
        goto LAB_004a3ecc;
      }
      if (param_1 == 4) {
        FUN_004024e0(&stack0xffffffb0,&param_2);
        FUN_00592d70(local_20,',',(undefined4 *)in_stack_ffffffb0);
        local_8 = 2;
        local_14 = local_20[0];
        pbVar9 = local_20[0];
        if (0xf < *(uint *)(local_20[0] + 0x14)) {
          local_14 = *(basic_string<> **)local_20[0];
          pbVar9 = *(basic_string<> **)local_20[0];
        }
        pbVar12 = local_20[0];
        if (0xf < *(uint *)(local_20[0] + 0x14)) {
          pbVar12 = *(basic_string<> **)local_20[0];
        }
        FUN_00413ec0(&local_14,tolower_exref,(char *)pbVar12,
                     (char *)(pbVar9 + *(int *)(local_20[0] + 0x10)),local_14);
        FUN_004024e0(&stack0xffffffb0,(undefined4 *)local_20[0]);
        puVar8 = (undefined4 *)FUN_004a8380(in_stack_ffffffb0);
        uVar1 = *puVar8;
        pbVar9 = local_20[0] + 0x18;
        if (0xf < *(uint *)(local_20[0] + 0x2c)) {
          pbVar9 = *(basic_string<> **)pbVar9;
        }
        iVar6 = atoi((char *)pbVar9);
        *(undefined4 *)this = 4;
        *(undefined4 *)((int)this + 0x1c) = uVar1;
        *(int *)((int)this + 0x20) = iVar6;
        FUN_004025a0((int *)local_20);
        uVar3 = uStack_7;
        goto LAB_004a3ecc;
      }
      if (param_1 == 5) {
        uStack_7 = uVar2;
        FUN_004024e0(&stack0xffffffb0,&param_2);
        FUN_00592d70(local_20,',',(undefined4 *)in_stack_ffffffb0);
        local_8 = 3;
        local_14 = local_20[0];
        pbVar9 = local_20[0];
        if (0xf < *(uint *)(local_20[0] + 0x14)) {
          local_14 = *(basic_string<> **)local_20[0];
          pbVar9 = *(basic_string<> **)local_20[0];
        }
        pbVar12 = local_20[0];
        if (0xf < *(uint *)(local_20[0] + 0x14)) {
          pbVar12 = *(basic_string<> **)local_20[0];
        }
        FUN_00413ec0(&local_14,tolower_exref,(char *)pbVar12,
                     (char *)(pbVar9 + *(int *)(local_20[0] + 0x10)),local_14);
        FUN_004024e0(&stack0xffffffb0,(undefined4 *)local_20[0]);
        puVar8 = (undefined4 *)FUN_004a8380(in_stack_ffffffb0);
        uVar1 = *puVar8;
        pbVar9 = local_20[0] + 0x18;
        if (0xf < *(uint *)(local_20[0] + 0x2c)) {
          pbVar9 = *(basic_string<> **)pbVar9;
        }
        iVar6 = atoi((char *)pbVar9);
        *(undefined4 *)this = 5;
        *(undefined4 *)((int)this + 0x1c) = uVar1;
        *(int *)((int)this + 0x20) = iVar6;
        FUN_004025a0((int *)local_20);
        uVar3 = uStack_7;
        goto LAB_004a3ecc;
      }
      if (param_1 == 6) {
        *(undefined4 *)this = 6;
      }
      else {
        uVar3 = uStack_7;
        if (param_1 == 0xd) {
          *(undefined4 *)this = 0xd;
          goto LAB_004a3ecc;
        }
        if (param_1 == 7) {
          *(undefined4 *)this = 7;
        }
        else if (param_1 == 10) {
          *(undefined4 *)this = 10;
        }
        else if (param_1 == 0xe) {
          *(undefined4 *)this = 0xe;
        }
        else if (param_1 == 0xf) {
          *(undefined4 *)this = 0xf;
        }
        else {
          if (param_1 != 0x10) {
            if (param_1 == 0xc) {
              *(undefined4 *)this = 0xc;
              uStack_7 = uVar2;
              FUN_004024e0(&stack0xffffffb0,&param_2);
              FUN_00592d70(local_20,',',(undefined4 *)in_stack_ffffffb0);
              local_8 = 4;
              pbVar9 = local_20[0] + 0x18;
              if (0xf < *(uint *)(local_20[0] + 0x2c)) {
                pbVar9 = *(basic_string<> **)pbVar9;
              }
              iVar6 = atoi((char *)pbVar9);
              *(int *)((int)this + 0x20) = iVar6;
              std::basic_string<>::operator=(pbVar7,local_20[0]);
              pbVar10 = pbVar7;
              pbVar5 = pbVar7;
              if (0xf < *(uint *)((int)this + 0x18)) {
                pbVar5 = *(basic_string<> **)pbVar7;
                pbVar10 = *(basic_string<> **)pbVar7;
              }
              pbVar11 = pbVar7;
              if (0xf < *(uint *)((int)this + 0x18)) {
                pbVar11 = *(basic_string<> **)pbVar7;
              }
              FUN_00413ec0(&local_14,tolower_exref,(char *)pbVar11,
                           (char *)(pbVar10 + *(int *)((int)this + 0x14)),pbVar5);
              local_14 = (basic_string<> *)&stack0xffffffb0;
              FUN_004024e0(&stack0xffffffb0,(undefined4 *)pbVar7);
              local_8 = 5;
              this_00 = (void *)FUN_00412770();
              local_8 = 4;
            }
            else {
              if (param_1 != 0xb) {
                if (param_1 == 0x11) {
                  *(undefined4 *)this = 0x11;
                }
                else if (param_1 == 0x12) {
                  *(undefined4 *)this = 0x12;
                }
                else if (param_1 == 0x13) {
                  *(undefined4 *)this = 0x13;
                }
                else {
                  if (param_1 != 0x14) goto LAB_004a3ecc;
                  *(undefined4 *)this = 0x14;
                }
                goto LAB_004a3ec1;
              }
              *(undefined4 *)this = 0xb;
              uStack_7 = uVar2;
              FUN_004024e0(&stack0xffffffb0,&param_2);
              FUN_00592d70(local_20,',',(undefined4 *)in_stack_ffffffb0);
              local_8 = 6;
              pbVar9 = local_20[0] + 0x18;
              if (0xf < *(uint *)(local_20[0] + 0x2c)) {
                pbVar9 = *(basic_string<> **)pbVar9;
              }
              iVar6 = atoi((char *)pbVar9);
              *(int *)((int)this + 0x20) = iVar6;
              std::basic_string<>::operator=(pbVar7,local_20[0]);
              pbVar10 = pbVar7;
              pbVar5 = pbVar7;
              if (0xf < *(uint *)((int)this + 0x18)) {
                pbVar5 = *(basic_string<> **)pbVar7;
                pbVar10 = *(basic_string<> **)pbVar7;
              }
              pbVar11 = pbVar7;
              if (0xf < *(uint *)((int)this + 0x18)) {
                pbVar11 = *(basic_string<> **)pbVar7;
              }
              FUN_00413ec0(&local_14,tolower_exref,(char *)pbVar11,
                           (char *)(pbVar10 + *(int *)((int)this + 0x14)),pbVar5);
              local_14 = (basic_string<> *)&stack0xffffffb0;
              FUN_004024e0(&stack0xffffffb0,(undefined4 *)pbVar7);
              local_8 = 7;
              this_00 = (void *)FUN_00412770();
              local_8 = 6;
            }
            bVar4 = FUN_0051e7c0(this_00,in_stack_ffffffb0);
            if (!bVar4) {
              FUN_00591070("ERROR","Invalid stat \'%s\'");
              bVar4 = cc_assert_script_compatible("Invalid stat");
              if (!bVar4) {
                cocos2d::log("Assert failed: %s");
              }
            }
            FUN_004025a0((int *)local_20);
            uVar3 = uStack_7;
            goto LAB_004a3ecc;
          }
          *(undefined4 *)this = 0x10;
        }
      }
LAB_004a3ec1:
      uStack_7 = uVar2;
      std::basic_string<>::operator=(pbVar7,(basic_string<> *)&param_2);
      uVar3 = uStack_7;
      goto LAB_004a3ecc;
    }
    *(undefined4 *)this = 9;
  }
  uVar3 = uVar2;
  if (pbVar7 != (basic_string<> *)&param_2) {
    pbVar5 = (basic_string<> *)&param_2;
    if (0xf < in_stack_0000001c) {
      pbVar5 = param_2;
    }
    FUN_00402690(pbVar7,pbVar5,in_stack_00000018);
    uVar3 = uStack_7;
  }
LAB_004a3ecc:
  uStack_7 = uVar3;
  if (0xf < in_stack_0000001c) {
    pbVar7 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar7 = *(basic_string<> **)(param_2 + -4),
       (basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar7))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_004a3f20(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  byte *pbVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  int *piVar10;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint in_stack_ffffff58;
  undefined1 local_90 [12];
  undefined4 uStack_84;
  byte *in_stack_ffffff88;
  byte *in_stack_ffffff8c;
  uint3 uVar17;
  void *pvVar16;
  void *local_4c [5];
  uint local_38;
  void *local_34 [5];
  uint local_20;
  float *local_1c;
  int *local_18;
  float *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *param_1;
  pvVar4 = (void *)DAT_0065b5cc[0x49];
  if (iVar5 == 0) {
    local_1c = (float *)&stack0xffffff88;
    FUN_004024e0(&stack0xffffff88,param_1 + 1);
    local_8 = 0;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffff88);
    FUN_00591070(&DAT_005cdc70,"Set flag \'%s\'");
    ExceptionList = local_10;
    return;
  }
  if (iVar5 == 1) {
    local_1c = (float *)&stack0xffffff88;
    FUN_004024e0(&stack0xffffff88,param_1 + 1);
    local_8 = 1;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffff88);
    FUN_00591070(&DAT_005cdc70,"Unset flag \'%s\'");
    ExceptionList = local_10;
    return;
  }
  uVar17 = (uint3)((uint)in_stack_ffffff8c >> 8);
  if (iVar5 == 2) {
    pvVar16 = (void *)((uint)uVar17 << 8);
    FUN_00402690(&stack0xffffff8c,"Transfer",8);
    FUN_004817b0(pvVar4,extraout_ECX,param_1[8],pvVar16);
    FUN_00591070(&DAT_005cdc70,"Gave %d credits to player.");
    ExceptionList = local_10;
    return;
  }
  if (iVar5 == 9) {
    piVar14 = param_1 + 1;
    piVar11 = piVar14;
    piVar10 = piVar14;
    if (0xf < (uint)param_1[6]) {
      piVar10 = (int *)*piVar14;
      piVar11 = (int *)*piVar14;
    }
    piVar12 = piVar14;
    if (0xf < (uint)param_1[6]) {
      piVar12 = (int *)*piVar14;
    }
    FUN_00413ec0(&local_1c,tolower_exref,(char *)piVar12,(char *)(param_1[5] + (int)piVar11),
                 (undefined1 *)piVar10);
    local_1c = (float *)&stack0xffffff8c;
    FUN_004024e0(&stack0xffffff8c,piVar14);
    local_8 = 2;
    pvVar4 = (void *)FUN_00412490();
    local_8 = 0xffffffff;
    iVar5 = FUN_004a0d10(pvVar4,in_stack_ffffff8c);
    if (iVar5 == 0) {
      FUN_00591070("WORLD","Invalid faction \'%s\'");
      bVar1 = cc_assert_script_compatible("Invalid faction.");
      if (!bVar1) {
        cocos2d::log("Assert failed: %s");
      }
    }
    else {
      FUN_004a00e0(iVar5);
      FUN_00591070(&DAT_005cdc70,"Gave player license for faction %s");
      FUN_00412d40();
      local_1c = (float *)DAT_0065b5cc[0x10];
      local_14 = (float *)DAT_0065b5cc[0xf];
      if (local_14 != local_1c) {
        do {
          uVar13 = 0;
          piVar10 = *(int **)((int)*local_14 + 0xcc);
          piVar11 = *(int **)((int)*local_14 + 0xd0);
          local_18 = (int *)((uint)((int)piVar11 + (3 - (int)piVar10)) >> 2);
          if (piVar11 < piVar10) {
            local_18 = (int *)0x0;
          }
          if (local_18 != (int *)0x0) {
            do {
              bVar1 = false;
              iVar5 = *(int *)(*piVar10 + 0x254);
              if (iVar5 != 0) {
                bVar1 = *(int *)(iVar5 + 0x158) == 1;
              }
              if ((bVar1) && (pbVar8 = *(byte **)(*piVar10 + 0x398), pbVar8 != (byte *)0x0)) {
                FUN_0049e7b0((int)pbVar8);
                FUN_0049e810((undefined4 *)pbVar8);
                FUN_0049ea50(pbVar8);
              }
              uVar13 = uVar13 + 1;
              piVar10 = piVar10 + 1;
            } while ((int *)uVar13 != local_18);
          }
          local_14 = local_14 + 1;
        } while (local_14 != local_1c);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (iVar5 == 3) {
    if (param_1[8] <= *(int *)((int)pvVar4 + 0x1c)) {
      pvVar16 = (void *)((uint)uVar17 << 8);
      FUN_00402690(&stack0xffffff8c,"Transfer",8);
      FUN_004817b0(pvVar4,extraout_ECX_00,-param_1[8],pvVar16);
      FUN_00591070(&DAT_005cdc70,"Took %d credits from player.");
      ExceptionList = local_10;
      return;
    }
  }
  else if (iVar5 == 6) {
    if (*(int *)(*(int *)(DAT_0065b5cc[0x34] + 0x40) + 0x20) != 0) {
      uVar13 = 0xffffffff;
      FUN_004024e0(&stack0xffffff88,param_1 + 1);
      iVar5 = FUN_004a8180(in_stack_ffffff88);
      FUN_0050f740((void *)DAT_0065b5cc[0x34],iVar5,uVar13);
      ExceptionList = local_10;
      return;
    }
  }
  else if (iVar5 == 7) {
    iVar5 = *(int *)(DAT_0065b5cc[0x34] + 0x1f8);
    iVar9 = *(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2;
    if (*(int *)(iVar5 + 4) != iVar9 && -1 < *(int *)(iVar5 + 4) - iVar9) {
      pfVar6 = (float *)FUN_005adb0f(8);
      local_18 = param_1 + 1;
      piVar10 = local_18;
      if (0xf < (uint)param_1[6]) {
        piVar10 = (int *)*local_18;
      }
      local_1c = pfVar6;
      local_1c = (float *)atoi((char *)piVar10);
      piVar10 = DAT_0065b5cc;
      uVar13 = 0;
      *pfVar6 = 100.0;
      piVar11 = DAT_0065b5cc;
      uVar15 = piVar10[1] - *piVar10 >> 2;
      if (uVar15 != 0) {
        local_14 = (float *)*piVar10;
        puVar3 = local_14;
        do {
          if (*(float **)*puVar3 == local_1c) {
            fVar7 = local_14[uVar13];
            goto LAB_004a433e;
          }
          uVar13 = uVar13 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar13 < uVar15);
      }
      fVar7 = 0.0;
LAB_004a433e:
      pfVar6[1] = fVar7;
      FUN_005074d0(*(void **)(piVar11[0x34] + 0x1f8),pfVar6);
      FUN_00591070(&DAT_005cdc70,"gave player component of type \'%s\'");
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar5 == 8) {
      piVar10 = param_1 + 1;
      if (0xf < (uint)param_1[6]) {
        piVar10 = (int *)*piVar10;
      }
      iVar5 = atoi((char *)piVar10);
      pvVar4 = *(void **)(DAT_0065b5cc[0x34] + 0x1f8);
      uVar13 = FUN_00507670(pvVar4,iVar5);
      if ((char)uVar13 == '\0') {
        FUN_00591070(&DAT_005cdc70,
                     "couldn\'t take component type \'%d\' from player as they don\'t have it");
        ExceptionList = local_10;
        return;
      }
      FUN_005076c0(pvVar4,*(float *****)(*(int *)((int)pvVar4 + 0x44) + iVar5 * 4));
      FUN_00591070(&DAT_005cdc70,"took component of type \'%d\' from player");
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 4) {
      uVar13 = 0;
      puVar3 = (undefined4 *)DAT_0065b5cc[0x21];
      uVar15 = DAT_0065b5cc[0x22] - (int)puVar3 >> 2;
      if (uVar15 != 0) {
        do {
          if (*(int *)*puVar3 == param_1[7]) {
            piVar10 = *(int **)(DAT_0065b5cc[0x21] + uVar13 * 4);
            goto LAB_004a445c;
          }
          uVar13 = uVar13 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar13 < uVar15);
      }
      piVar10 = (int *)0x0;
LAB_004a445c:
      iVar5 = param_1[8];
      pvVar4 = *(void **)(DAT_0065b5cc[0x34] + 0x1f8);
      iVar9 = FUN_00507200(pvVar4,piVar10);
      if (iVar9 < iVar5) {
        FUN_00591070(&DAT_005cdc70,"WARNING: couldn\'t add %dx cargo of type \'%d\' to player hold")
        ;
        ExceptionList = local_10;
        return;
      }
      FUN_00506db0(pvVar4,param_1[7],iVar5);
      FUN_00591070(&DAT_005cdc70,"Added %dx cargo of type \'%d\' to player hold");
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 5) {
      FUN_00506ed0(*(void **)(DAT_0065b5cc[0x34] + 0x1f8),param_1[7],param_1[8]);
      FUN_00591070(&DAT_005cdc70,"Removed %dx cargo of type \'%d\' from player hold");
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0xc) {
      local_18 = (int *)&stack0xffffff8c;
      local_1c = (float *)(float)param_1[8];
      FUN_004024e0(&stack0xffffff8c,param_1 + 1);
      local_8 = 3;
      pvVar4 = (void *)FUN_00412770();
      local_8 = 0xffffffff;
      FUN_0051e8b0(pvVar4,in_stack_ffffff8c);
      FUN_00591070(&DAT_005cdc70,"Set stat %s to %d.");
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0xb) {
      local_1c = (float *)(float)param_1[8];
      FUN_004024e0(local_34,param_1 + 1);
      local_8 = 4;
      iVar5 = FUN_00412770();
      local_8 = 5;
      pfVar6 = (float *)FUN_004a2a30((void *)(iVar5 + 0x10),(byte *)local_34);
      local_8 = 0xffffffff;
      *pfVar6 = *pfVar6 + (float)local_1c;
      if (0xf < local_20) {
        pvVar4 = local_34[0];
        if ((0xfff < local_20 + 1) &&
           (pvVar4 = *(void **)((int)local_34[0] + -4),
           0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      local_1c = (float *)&stack0xffffff8c;
      FUN_004024e0(&stack0xffffff8c,param_1 + 1);
      local_8 = 6;
      pvVar4 = (void *)FUN_00412770();
      local_8 = 0xffffffff;
      FUN_0051e820(pvVar4,in_stack_ffffff8c);
      FUN_00591070(&DAT_005cdc70,"Changed stat %s by %d, amount now %d.");
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0xd) {
      cVar2 = FUN_005124e0(DAT_0065b5cc[0x34]);
      if ((cVar2 != '\0') && (*(int *)(extraout_ECX_01 + 0x178) != 0)) {
        local_1c = (float *)&stack0xffffff8c;
        FUN_004024e0(&stack0xffffff8c,(undefined4 *)(*(int *)(extraout_ECX_01 + 0x178) + 0x238));
        cVar2 = '\0';
        local_8 = 7;
        pvVar4 = (void *)FUN_00412d40();
        local_8 = 0xffffffff;
        pbVar8 = FUN_00486270(pvVar4,cVar2,in_stack_ffffff8c);
        if (pbVar8 != (byte *)0x0) {
          FUN_0049e790(pbVar8);
        }
      }
      FUN_00591070(&DAT_005cdc70,"Reset contracts.");
    }
    else if (iVar5 == 0xe) {
      local_1c = (float *)&stack0xffffff8c;
      pvVar4 = (void *)((uint)uVar17 << 8);
      FUN_00402690(&stack0xffffff8c,"quests_accepted",0xf);
      local_8 = 8;
      FUN_00412770();
      local_8 = 0xffffffff;
      FUN_0051e750(extraout_ECX_02,pvVar4);
      local_1c = (float *)&stack0xffffff88;
      uStack_84 = 0x4a4760;
      FUN_00402690(&stack0xffffff88,&PTR_005ce008,0);
      local_18 = (int *)local_90;
      local_8 = 9;
      local_90[0] = 0;
      FUN_00402690(local_90,"quests_accepted",0xf);
      local_8 = CONCAT31(local_8._1_3_,10);
      pvVar4 = (void *)(in_stack_ffffff58 & 0xffffff00);
      FUN_00402690(&stack0xffffff58,&DAT_0060d818,4);
      local_8 = 0xffffffff;
      FUN_00401a50(pvVar4);
      FUN_00591070(&DAT_005cdc70,"Begun a quest.");
    }
    else if (iVar5 == 0xf) {
      local_1c = (float *)&stack0xffffff8c;
      pvVar4 = (void *)((uint)uVar17 << 8);
      FUN_00402690(&stack0xffffff8c,"quests_completed",0x10);
      local_8 = 0xb;
      FUN_00412770();
      local_8 = 0xffffffff;
      FUN_0051e750(extraout_ECX_03,pvVar4);
      local_1c = (float *)&stack0xffffff88;
      uStack_84 = 0x4a483a;
      FUN_00402690(&stack0xffffff88,&PTR_005ce008,0);
      local_18 = (int *)local_90;
      local_8 = 0xc;
      local_90[0] = 0;
      FUN_00402690(local_90,"quests_completed",0x10);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      pvVar4 = (void *)(in_stack_ffffff58 & 0xffffff00);
      FUN_00402690(&stack0xffffff58,&DAT_0060d818,4);
      local_8 = 0xffffffff;
      FUN_00401a50(pvVar4);
      FUN_00591070(&DAT_005cdc70,"Completed a quest.");
    }
    else if (iVar5 == 0x10) {
      local_1c = (float *)&stack0xffffff8c;
      pvVar4 = (void *)((uint)uVar17 << 8);
      FUN_00402690(&stack0xffffff8c,"quests_failed",0xd);
      local_8 = 0xe;
      FUN_00412770();
      local_8 = 0xffffffff;
      FUN_0051e750(extraout_ECX_04,pvVar4);
      local_1c = (float *)&stack0xffffff88;
      uStack_84 = 0x4a4918;
      FUN_00402690(&stack0xffffff88,&PTR_005ce008,0);
      local_18 = (int *)local_90;
      local_8 = 0xf;
      local_90[0] = 0;
      FUN_00402690(local_90,"quests_failed",0xd);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      pvVar4 = (void *)(in_stack_ffffff58 & 0xffffff00);
      FUN_00402690(&stack0xffffff58,&DAT_0060d818,4);
      local_8 = 0xffffffff;
      FUN_00401a50(pvVar4);
      FUN_00591070(&DAT_005cdc70,"Failed a quest.");
    }
    else {
      if (iVar5 == 0x11) {
        piVar10 = param_1 + 1;
        if (0xf < (uint)param_1[6]) {
          piVar10 = (int *)*piVar10;
        }
        atoi((char *)piVar10);
        rand();
        (**(code **)(*(int *)DAT_0065b5cc[0x34] + 0xc))();
        FUN_00591070(&DAT_005cdc70,"Damaged Player Ship with %d physical damage.");
        ExceptionList = local_10;
        return;
      }
      if (iVar5 == 0x12) {
        pbVar8 = (byte *)(DAT_0065b444 + 0x194);
        if (0xf < *(uint *)(DAT_0065b444 + 0x1a8)) {
          pbVar8 = *(byte **)(DAT_0065b444 + 0x194);
        }
        uVar13 = FUN_004031f0(pbVar8,*(uint *)(DAT_0065b444 + 0x1a4),(byte *)&PTR_005ce008,0);
        if ((char)uVar13 != '\0') {
          FUN_004024e0(&stack0xffffff8c,param_1 + 1);
          FUN_00411840(in_stack_ffffff8c);
          ExceptionList = local_10;
          return;
        }
      }
      else if (iVar5 == 0x13) {
        pbVar8 = (byte *)(DAT_0065b444 + 0x1ac);
        if (0xf < *(uint *)(DAT_0065b444 + 0x1c0)) {
          pbVar8 = *(byte **)(DAT_0065b444 + 0x1ac);
        }
        uVar13 = FUN_004031f0(pbVar8,*(uint *)(DAT_0065b444 + 0x1bc),(byte *)&PTR_005ce008,0);
        if ((char)uVar13 == '\0') {
          FUN_004113e0();
          ExceptionList = local_10;
          return;
        }
      }
      else if (iVar5 == 0x14) {
        FUN_004024e0(local_4c,param_1 + 1);
        local_8 = 0x11;
        FUN_004024e0(&stack0xffffff8c,local_4c);
        iVar5 = FUN_0051fb30(*(void **)(DAT_0065b5cc[0x34] + 0x24),in_stack_ffffff8c);
        (**(code **)**(undefined4 **)(iVar5 + 0x44))();
        if (0xf < local_38) {
          pvVar4 = local_4c[0];
          if ((0xfff < local_38 + 1) &&
             (pvVar4 = *(void **)((int)local_4c[0] + -4),
             0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar4);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}
