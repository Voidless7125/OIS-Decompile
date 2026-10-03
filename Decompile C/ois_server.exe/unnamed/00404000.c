#include "../ois_server.exe.h"


void * __thiscall FUN_00404000(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)this + 0x34)) {
    pvVar1 = *(void **)((int)this + 0x20);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x34) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004040a2;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined1 *)((int)this + 0x20) = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
    pvVar1 = *(void **)((int)this + 8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x1c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004040a2:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined1 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_004040b0(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af858;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  local_20 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_8 = 0;
  iVar6 = param_1[1];
  local_18 = 0;
  if (param_1[2] - iVar6 >> 2 != 0) {
    do {
      uVar1 = local_18;
      iVar3 = *(int *)(iVar6 + local_18 * 4);
      local_11 = 1;
      local_20 = (undefined4 *)0x0;
      if (*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2 == 0) {
LAB_00404180:
        puVar5 = (undefined4 *)(iVar6 + local_18 * 4);
        if (puVar7 == local_1c) {
          FUN_004141e0(&local_30,local_1c,puVar5);
          local_24 = local_28;
          puVar7 = local_28;
          local_1c = local_2c;
        }
        else {
          *local_1c = *puVar5;
          local_2c = local_1c + 1;
          local_1c = local_2c;
        }
      }
      else {
        uVar8 = 0;
        do {
          cVar2 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar6 + uVar1 * 4) + 8) + uVar8 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          uVar8 = uVar8 + 1;
          local_11 = local_11 & -(cVar2 != '\0');
          iVar6 = param_1[1];
          iVar3 = *(int *)(iVar6 + uVar1 * 4);
        } while (uVar8 < (uint)(*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2));
        puVar7 = local_24;
        if (local_11 != 0) goto LAB_00404180;
      }
      iVar6 = param_1[1];
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(param_1[2] - iVar6 >> 2));
    local_20 = local_30;
  }
  iVar6 = (int)local_1c - (int)local_20 >> 2;
  local_30 = local_20;
  if (iVar6 == 1) {
    uVar4 = *local_20;
  }
  else {
    iVar3 = rand();
    uVar4 = local_20[iVar3 % iVar6];
  }
  *param_1 = uVar4;
  if (local_20 != (undefined4 *)0x0) {
    puVar5 = local_20;
    if ((0xfff < ((int)puVar7 - (int)local_20 & 0xfffffffcU)) &&
       (puVar5 = (undefined4 *)local_20[-1], 0x1f < (uint)((int)local_20 + (-4 - (int)puVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_10;
  return;
}


undefined4 * __fastcall FUN_00404240(undefined4 *param_1)

{
  undefined4 **this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  void *pvVar6;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  __time64_t _Var7;
  uint in_stack_ffffff8c;
  undefined1 local_5c [4];
  undefined4 uStack_58;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af98e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 0x100;
  local_18 = param_1;
  cocos2d::Color3B::Color3B((Color3B *)((int)param_1 + 6),'\0','c','2');
  puVar1 = (undefined4 *)FUN_005adb0f(0x80);
  local_8 = 0;
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  local_14 = puVar1;
  FUN_00402690(local_34,"CERESPILOT",10);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0xf;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0xf;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0xffffffff;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
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
  param_1[3] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_8 = 1;
  puVar1 = param_1 + 0x12;
  param_1[0x11] = 0;
  *puVar1 = 0;
  param_1[0x13] = 0;
  local_14 = puVar1;
  uVar2 = FUN_004136c0();
  *puVar1 = uVar2;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 1;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  param_1[0x22] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  param_1[0x28] = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0xf;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  this = (undefined4 **)(param_1 + 0x32);
  param_1[0x36] = 0;
  param_1[0x37] = 0xf;
  *(undefined1 *)this = 0;
  ppuVar5 = (undefined4 **)(param_1 + 0x39);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0xf;
  *(undefined1 *)ppuVar5 = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0xf;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((int)param_1 + 0x11e) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0xbf800000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xf;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0xf;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0xf;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0xf;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0xf;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x1c6) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  local_14 = (undefined4 *)0x0;
  piVar3 = FUN_00413130(this_00,(int *)&local_14);
  FUN_00402690(piVar3,"OP-ZRGZ",7);
  local_14 = (undefined4 *)0x1;
  piVar3 = FUN_00413130(this_01,(int *)&local_14);
  FUN_00402690(piVar3,"OP-LAGO",7);
  local_14 = (undefined4 *)0x2;
  piVar3 = FUN_00413130(this_02,(int *)&local_14);
  FUN_00402690(piVar3,"OP-NARAIL",9);
  local_14 = (undefined4 *)0x3;
  piVar3 = FUN_00413130(this_03,(int *)&local_14);
  FUN_00402690(piVar3,"OP-STINDO",9);
  local_14 = (undefined4 *)0x4;
  piVar3 = FUN_00413130(this_04,(int *)&local_14);
  FUN_00402690(piVar3,"OP-DOUROS",9);
  local_14 = (undefined4 *)0x5;
  piVar3 = FUN_00413130(this_05,(int *)&local_14);
  FUN_00402690(piVar3,"OP-ADRICS",9);
  local_14 = (undefined4 *)0x6;
  piVar3 = FUN_00413130(this_06,(int *)&local_14);
  FUN_00402690(piVar3,"OP-SOBEL",8);
  local_14 = (undefined4 *)0x7;
  piVar3 = FUN_00413130(this_07,(int *)&local_14);
  FUN_00402690(piVar3,"OP-LASSLS",9);
  local_14 = (undefined4 *)0x8;
  piVar3 = FUN_00413130(this_08,(int *)&local_14);
  FUN_00402690(piVar3,"OP-HALLEY",9);
  local_14 = (undefined4 *)0x9;
  piVar3 = FUN_00413130(this_09,(int *)&local_14);
  FUN_00402690(piVar3,"OP-RUZAPT",9);
  local_14 = (undefined4 *)0xb;
  piVar3 = FUN_00413130(this_10,(int *)&local_14);
  FUN_00402690(piVar3,"OP-AURRAS",9);
  param_1[100] = 0x2c;
  param_1[99] = 9;
  param_1[0x62] = 3;
  param_1[0x61] = 4;
  param_1[0x60] = 0x32;
  param_1[0x5f] = 0;
  param_1[0x2a] = 2;
  if ((undefined4 **)(param_1 + 0x2b) != &DAT_006555c8) {
    ppuVar4 = &DAT_006555c8;
    if (0xf < DAT_006555dc) {
      ppuVar4 = (undefined4 **)DAT_006555c8;
    }
    FUN_00402690(param_1 + 0x2b,ppuVar4,DAT_006555d8);
  }
  param_1[0x38] = 0;
  if (ppuVar5 != &DAT_00655538) {
    ppuVar4 = &DAT_00655538;
    if (0xf < DAT_0065554c) {
      ppuVar4 = (undefined4 **)DAT_00655538;
    }
    FUN_00402690(ppuVar5,ppuVar4,DAT_00655548);
  }
  param_1[0x31] = 2;
  if (this != &DAT_00655640) {
    ppuVar5 = &DAT_00655640;
    if (0xf < DAT_00655654) {
      ppuVar5 = (undefined4 **)DAT_00655640;
    }
    FUN_00402690(this,ppuVar5,DAT_00655650);
  }
  param_1[0x3f] = 1;
  FUN_00402690(param_1 + 0x40,&DAT_005e1e5c,3);
  FUN_00591070(&PTR_005ce008,(char *)&PTR_005ce008);
  _Var7 = _time64((__time64_t *)0x0);
  uStack_58 = 0x40485d;
  srand((uint)_Var7);
  local_14 = (undefined4 *)local_5c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"HapNode",7);
  local_8._0_1_ = 0xc;
  puVar1 = (undefined4 *)(in_stack_ffffff8c & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_HapNode",0x10);
  local_8._0_1_ = 0xb;
  FUN_0040e4b0(param_1,0,puVar1);
  FUN_0040e420(param_1,0,0);
  local_1c = local_5c;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"Cluster-M",9);
  local_8._0_1_ = 0xd;
  puVar1 = (undefined4 *)((uint)puVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_ClusterM",0x11);
  local_8._0_1_ = 0xb;
  FUN_0040e4b0(param_1,1,puVar1);
  FUN_0040e420(param_1,1,1);
  local_1c = local_5c;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"Ro/Aut",6);
  local_8._0_1_ = 0xe;
  puVar1 = (undefined4 *)((uint)puVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_RoAut",0xe);
  local_8._0_1_ = 0xb;
  FUN_0040e4b0(param_1,2,puVar1);
  FUN_0040e420(param_1,2,2);
  local_1c = local_5c;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"Shp-1",5);
  local_8._0_1_ = 0xf;
  puVar1 = (undefined4 *)((uint)puVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_Shp1",0xd);
  local_8._0_1_ = 0xb;
  FUN_0040e4b0(param_1,3,puVar1);
  FUN_0040e420(param_1,3,3);
  local_1c = local_5c;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"Tas Converter",0xd);
  local_8._0_1_ = 0x10;
  puVar1 = (undefined4 *)((uint)puVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_TasConverter",0x15);
  local_8._0_1_ = 0xb;
  FUN_0040e4b0(param_1,4,puVar1);
  FUN_0040e420(param_1,4,4);
  local_1c = local_5c;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"Adapters/Buffers",0x10);
  local_8._0_1_ = 0x11;
  puVar1 = (undefined4 *)((uint)puVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_Buffer",0xf);
  local_8._0_1_ = 0xb;
  FUN_0040e4b0(param_1,5,puVar1);
  FUN_0040e420(param_1,5,5);
  FUN_0040e420(param_1,5,10);
  FUN_0040e420(param_1,5,0xb);
  local_1c = local_5c;
  local_5c[0] = 0;
  FUN_00402690(local_5c,"Special",7);
  local_8._0_1_ = 0x12;
  puVar1 = (undefined4 *)((uint)puVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"Selector_Misc",0xd);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_0040e4b0(param_1,6,puVar1);
  FUN_0040e420(param_1,6,6);
  FUN_0040e420(param_1,6,7);
  FUN_0040e420(param_1,6,8);
  FUN_0040e420(param_1,6,9);
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_00404bb0(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  local_8 = 0;
  FUN_004132d0(*(int **)(iVar1 + 4));
  *(int *)(*param_1 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  FUN_005adb3f((void *)*param_1);
  ExceptionList = local_10;
  return;
}


float FUN_00404c20(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005afa5c;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar5 = 0.0;
  local_14 = 0.0;
  uVar7 = 0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  piVar6 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
  iVar4 = DAT_0065b5cc;
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0) - *piVar6 >> 2 != 0) {
    do {
      iVar8 = *(int *)(*piVar6 + uVar7 * 4);
      bVar9 = false;
      if (*(int *)(iVar8 + 0x254) != 0) {
        bVar9 = *(int *)(*(int *)(iVar8 + 0x254) + 0x158) == 1;
      }
      if ((bVar9) && (*(char *)(iVar8 + 0x389) == '\0')) {
        if (local_18 == 0.0) {
LAB_00404d72:
          bVar9 = true;
        }
        else {
          local_28 = (float)*(double *)(iVar8 + 0x28);
          local_24 = (float)*(double *)(iVar8 + 0x30);
          local_30 = (float)*(double *)(*(int *)(iVar4 + 0xd0) + 0x28);
          local_2c = (float)*(double *)(*(int *)(iVar4 + 0xd0) + 0x30);
          local_8 = 1;
          fVar5 = 4.2039e-45;
          local_14 = 4.2039e-45;
          fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&local_28);
          local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
          iVar4 = DAT_0065b5cc;
          if ((1.5 - fVar10 * 0.5 * local_14 * local_14) * local_14 * fVar10 < local_1c)
          goto LAB_00404d72;
          bVar9 = false;
        }
        if (((uint)fVar5 & 2) != 0) {
          fVar5 = (float)((uint)fVar5 & 0xfffffffd);
        }
        if (((uint)fVar5 & 1) != 0) {
          fVar5 = (float)((uint)fVar5 & 0xfffffffe);
        }
        if (bVar9) {
          local_18 = *(float *)(*(int *)(*(int *)(iVar4 + 0xd8) + 0xcc) + uVar7 * 4);
          local_38 = (float)*(double *)((int)local_18 + 0x28);
          local_34 = (float)*(double *)((int)local_18 + 0x30);
          local_40 = (float)*(double *)(*(int *)(iVar4 + 0xd0) + 0x28);
          local_3c = (float)*(double *)(*(int *)(iVar4 + 0xd0) + 0x30);
          local_8 = 3;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_40,(Vec2 *)&local_38);
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          local_1c = (1.5 - local_1c * 0.5 * local_14 * local_14) * local_14 * local_1c;
          iVar4 = DAT_0065b5cc;
        }
      }
      uVar7 = uVar7 + 1;
      piVar6 = (int *)(*(int *)(iVar4 + 0xd8) + 0xcc);
    } while (uVar7 < (uint)(*(int *)(*(int *)(iVar4 + 0xd8) + 0xd0) - *piVar6 >> 2));
    if (local_18 != 0.0) {
      ExceptionList = local_10;
      return local_18;
    }
  }
  iVar8 = 0;
  uVar7 = 0;
  if (*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2 != 0) {
    do {
      iVar1 = *(int *)(uVar7 * 4 + *(int *)(iVar4 + 0x3c));
      iVar3 = *(int *)(iVar4 + 0xd8);
      if ((iVar1 != iVar3) && (*(int *)(iVar1 + 0x118) != 2)) {
        if (iVar8 == 0) {
LAB_00404f82:
          bVar9 = true;
        }
        else {
          local_48 = (float)*(int *)(iVar3 + 0x7c);
          local_44 = (float)*(int *)(iVar3 + 0x80);
          iVar4 = *(int *)(*(int *)(iVar4 + 0x3c) + uVar7 * 4);
          local_50 = (float)*(int *)(iVar4 + 0x7c);
          local_4c = (float)*(int *)(iVar4 + 0x80);
          local_8 = 5;
          fVar5 = (float)((uint)fVar5 | 0xc);
          local_14 = fVar5;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_50,(Vec2 *)&local_48);
          local_18 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          iVar4 = DAT_0065b5cc;
          if ((1.5 - local_1c * 0.5 * local_18 * local_18) * local_18 * local_1c < local_20)
          goto LAB_00404f82;
          bVar9 = false;
        }
        if (((uint)fVar5 & 8) != 0) {
          fVar5 = (float)((uint)fVar5 & 0xfffffff7);
        }
        if (((uint)fVar5 & 4) != 0) {
          fVar5 = (float)((uint)fVar5 & 0xfffffffb);
        }
        if (bVar9) {
          iVar8 = *(int *)(uVar7 * 4 + *(int *)(iVar4 + 0x3c));
          local_58 = (float)*(int *)(*(int *)(iVar4 + 0xd8) + 0x7c);
          local_54 = (float)*(int *)(*(int *)(iVar4 + 0xd8) + 0x80);
          iVar4 = *(int *)(*(int *)(iVar4 + 0x3c) + uVar7 * 4);
          local_60 = (float)*(int *)(iVar4 + 0x7c);
          local_5c = (float)*(int *)(iVar4 + 0x80);
          local_8 = 7;
          local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_60,(Vec2 *)&local_58);
          local_18 = (float)(0x5f3759df - ((uint)local_20 >> 1));
          local_20 = (1.5 - local_20 * 0.5 * local_18 * local_18) * local_18 * local_20;
          iVar4 = DAT_0065b5cc;
        }
      }
      local_8 = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2));
    if (iVar8 != 0) {
      do {
        do {
          iVar4 = *(int *)(iVar8 + 0xd0);
          iVar1 = *(int *)(iVar8 + 0xcc);
          iVar3 = rand();
          fVar5 = *(float *)(*(int *)(iVar8 + 0xcc) + (iVar3 % (iVar4 - iVar1 >> 2)) * 4);
        } while (fVar5 == 0.0);
        bVar9 = false;
        if (*(int *)((int)fVar5 + 0x254) != 0) {
          bVar9 = *(int *)(*(int *)((int)fVar5 + 0x254) + 0x158) == 1;
        }
      } while ((!bVar9) || (*(char *)((int)fVar5 + 0x389) != '\0'));
      ExceptionList = local_10;
      return fVar5;
    }
  }
  local_8 = 0xffffffff;
  FUN_00591070("ERROR","Cannot calculate a nearest sector to the player somehow.");
  bVar9 = cc_assert_script_compatible("This should never happen.");
  if (!bVar9) {
    cocos2d::log("Assert failed: %s","This should never happen.",uVar2);
  }
  ExceptionList = local_10;
  return 0.0;
}


void FUN_00405130(void)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  byte *pbVar5;
  LPCSTR ***ppppCVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint in_stack_ffffff8c;
  uint local_48;
  LPCSTR **local_44 [4];
  undefined4 local_34;
  uint local_30;
  LPCSTR **local_2c [3];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afaa0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = (void *)FUN_00412bf0();
  FUN_004a4b50(pvVar2);
  FUN_0043de90("objectsinspace.txt",'\0');
  puVar3 = DAT_0065b394;
  if (DAT_0065b394 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005adb0f(0xc);
    DAT_0065b394 = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  piVar1 = (int *)puVar3[1];
  for (piVar8 = (int *)*puVar3; piVar8 != piVar1; piVar8 = piVar8 + 1) {
    if (*(char *)(*piVar8 + 0x60) != '\0') {
      FUN_00591e00((undefined1 *)local_2c,".\\%s\\include.txt");
      local_8 = 0;
      ppppCVar6 = local_2c;
      if (0xf < local_18) {
        ppppCVar6 = (LPCSTR ***)local_2c[0];
      }
      DVar4 = GetFileAttributesA((LPCSTR)ppppCVar6);
      if ((DVar4 != 0xffffffff) && ((DVar4 & 0x10) == 0)) {
        ppppCVar6 = local_2c;
        if (0xf < local_18) {
          ppppCVar6 = (LPCSTR ***)local_2c[0];
        }
        FUN_0043de90(ppppCVar6,'\x01');
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        ppppCVar6 = (LPCSTR ***)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppCVar6 = (LPCSTR ***)local_2c[0][-1],
           (LPCSTR)0x1f < (LPCSTR)((int)local_2c[0] + (-4 - (int)ppppCVar6)))) goto LAB_00405494;
        FUN_005adb3f(ppppCVar6);
      }
    }
  }
  puVar3 = (undefined4 *)(in_stack_ffffff8c & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"news_",5);
  FUN_0058f3b0(&local_20,puVar3);
  local_8 = 1;
  uVar13 = 0;
  iVar11 = local_1c - local_20 >> 0x1f;
  if ((local_1c - local_20) / 0x18 + iVar11 != iVar11) {
    iVar11 = 0;
    do {
      FUN_004024e0(&stack0xffffff8c,(undefined4 *)(iVar11 + local_20));
      FUN_0043e4e0(puVar3);
      iVar11 = iVar11 + 0x18;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)((local_1c - local_20) / 0x18));
  }
  local_8 = 0xffffffff;
  FUN_004025a0(&local_20);
  pvVar2 = (void *)((uint)puVar3 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"info_",5);
  FUN_0058f3b0(&local_20,pvVar2);
  local_8 = 2;
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  FUN_00402690(&stack0xffffff8c,"info_main.txt",0xd);
  FUN_0043f180(pvVar2);
  local_48 = 0;
  iVar11 = local_1c - local_20 >> 0x1f;
  if ((local_1c - local_20) / 0x18 + iVar11 != iVar11) {
    iVar10 = 0;
    iVar11 = local_20;
    do {
      pbVar5 = (byte *)(iVar10 + iVar11);
      pbVar7 = pbVar5;
      if (0xf < *(uint *)(iVar10 + 0x14 + iVar11)) {
        pbVar7 = *(byte **)pbVar5;
      }
      uVar13 = FUN_004031f0(pbVar7,*(uint *)(pbVar5 + 0x10),(byte *)"info_main.txt",0xd);
      if ((char)uVar13 == '\0') {
        FUN_004024e0(&stack0xffffff8c,(undefined4 *)pbVar5);
        FUN_0043f180(pvVar2);
        iVar11 = local_20;
      }
      local_48 = local_48 + 1;
      iVar10 = iVar10 + 0x18;
    } while (local_48 < (uint)((local_1c - iVar11) / 0x18));
  }
  local_8 = 0xffffffff;
  FUN_004025a0(&local_20);
  FUN_00440100();
  pbVar5 = (byte *)FUN_004124e0();
  FUN_004a39f0(pbVar5);
  pbVar5[0x18] = 0;
  pbVar5[0x19] = 0;
  pbVar5[0x1a] = 0;
  pbVar5[0x1b] = 0;
  if (*(int *)(pbVar5 + 0x3c) - (int)*(undefined4 **)(pbVar5 + 0x38) >> 2 != 0) {
    pbVar7 = (byte *)**(undefined4 **)(pbVar5 + 0x38);
    *(byte **)(pbVar5 + 0x34) = pbVar7;
    if (pbVar5 + 0x1c != pbVar7) {
      pbVar9 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar9 = *(byte **)pbVar7;
      }
      FUN_00402690(pbVar5 + 0x1c,pbVar9,*(uint *)(pbVar7 + 0x10));
    }
  }
  FUN_004127d0();
  FUN_0058f040((int *)local_44);
  local_8 = 3;
  FUN_00403640(local_44,"stats.dat",9);
  ppppCVar6 = local_44;
  if (0xf < local_30) {
    ppppCVar6 = (LPCSTR ***)local_44[0];
  }
  DVar4 = GetFileAttributesA((LPCSTR)ppppCVar6);
  if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) != 0)) {
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      ppppCVar6 = (LPCSTR ***)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppCVar6 = (LPCSTR ***)local_44[0][-1],
         (LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppCVar6);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    FUN_004127d0();
    uVar13 = 0;
    piVar8 = *(int **)(DAT_0065b5cc + 0x60);
    uVar12 = (uint)((int)*(int **)(DAT_0065b5cc + 100) + (3 - (int)piVar8)) >> 2;
    if (*(int **)(DAT_0065b5cc + 100) < piVar8) {
      uVar12 = 0;
    }
    if (uVar12 != 0) {
      do {
        iVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(iVar11 + 0x3c4) = 0xbf800000;
        *(undefined4 *)(iVar11 + 0x3d0) = 0;
        *(undefined4 *)(iVar11 + 0x3d4) = 0;
        *(undefined4 *)(iVar11 + 0x3c8) = 0;
        *(undefined4 *)(iVar11 + 0x3cc) = 0;
      } while (uVar13 != uVar12);
    }
  }
  else {
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      ppppCVar6 = (LPCSTR ***)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppCVar6 = (LPCSTR ***)local_44[0][-1],
         (LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar6)))) {
LAB_00405494:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppCVar6);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    FUN_004127d0();
    FUN_004b6fb0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00405590(char param_1)

{
  int iVar1;
  int iVar2;
  BaseLight *pBVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  Node *pNVar8;
  Director *pDVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  byte *in_stack_ffffffb8;
  char cVar16;
  char cVar17;
  int iVar18;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afaea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar15 = false;
  if ((*(char *)(DAT_0065b444 + 0x72) == '\0') ||
     (*(char *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x315) == '\0')) {
LAB_004055f8:
    if (*(char *)(DAT_0065b444 + 0x1c5) != '\0') {
LAB_00405605:
      iVar10 = *(int *)((int)DAT_0065b5cc + 0xd0);
      iVar18 = *(int *)(iVar10 + 0x178);
      if (iVar18 != 0) goto LAB_00405615;
    }
    iVar10 = *(int *)((int)DAT_0065b5cc + 0xd0);
  }
  else {
    if (*(char *)(DAT_0065b444 + 0x1c5) != '\0') goto LAB_00405605;
    iVar10 = *(int *)((int)DAT_0065b5cc + 0xd0);
    iVar18 = *(int *)(iVar10 + 0x178);
    if (iVar18 == 0) goto LAB_004055f8;
    bVar15 = true;
LAB_00405615:
    bVar14 = false;
    if (*(int *)(iVar18 + 0x254) != 0) {
      bVar14 = *(int *)(*(int *)(iVar18 + 0x254) + 0x158) == 1;
    }
    if (bVar14) {
      FUN_004024e0(&stack0xffffffb8,(undefined4 *)(iVar18 + 0x68));
      _DstBuf_0065b3dc = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffffb8);
      piVar11 = (int *)((int)DAT_0065b5cc + 0xd0);
      DAT_0065b3d4 = *(int *)(*piVar11 + 0x178);
      *(undefined1 *)((int)DAT_0065b5cc + 0xd4) =
           *(undefined1 *)(*(int *)(DAT_0065b3d4 + 0x254) + 0xd0);
      FUN_0051afc0(*(void **)(*piVar11 + 0x178));
      goto LAB_004056e9;
    }
  }
  FUN_004024e0(&stack0xffffffb8,(undefined4 *)(iVar10 + 0x68));
  _DstBuf_0065b3dc = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffffb8);
  if ((_DstBuf_0065b3dc == (int *)0x0) &&
     (bVar14 = cc_assert_script_compatible("No valid structure for current ship."), !bVar14)) {
    cocos2d::log("Assert failed: %s");
  }
  DAT_0065b3d4 = *(int *)((int)DAT_0065b5cc + 0xd0);
LAB_004056e9:
  puVar5 = FUN_004125d0();
  cVar17 = '\x01';
  cVar16 = '\x01';
  puVar5[0x1a] = &DAT_00655810;
  puVar5 = FUN_004125d0();
  FUN_00432470(puVar5,cVar16,cVar17);
  if (DAT_0065c2a4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_005adb0f(0x20);
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    local_8 = 1;
    puVar5[5] = 0;
    puVar5[6] = 0;
    uVar6 = FUN_004036a0();
    local_8 = 0xffffffff;
    DAT_0065c2a4 = puVar5;
    puVar5[5] = uVar6;
  }
  FUN_00527af0();
  if ((bVar15) ||
     ((*(char *)(iVar4 + 0x1c5) != '\0' &&
      (*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x178) != 0)))) {
    iVar18 = *(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x178) + 0x2ac);
    pvVar7 = (void *)FUN_004023e0();
    FUN_0052df00(pvVar7,iVar18);
    iVar18 = *(int *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x178) + 0x254);
    bVar15 = false;
    if (iVar18 != 0) {
      bVar15 = *(int *)(iVar18 + 0x158) == 1;
    }
    if (!bVar15) {
      FUN_004023e0();
    }
    else {
      FUN_004023e0();
    }
    FUN_0052ddd0(*(int *)((int)DAT_0065b5cc + 0xd0),!bVar15);
  }
  else {
    iVar18 = 0;
    pvVar7 = (void *)FUN_004023e0();
    FUN_0052df00(pvVar7,iVar18);
  }
  iVar18 = FUN_004023e0();
  iVar18 = *(int *)(iVar18 + 0x2d4);
  if (iVar18 != 0) {
    puVar5 = *(undefined4 **)(iVar18 + 0x90);
    local_18 = 0;
    uVar12 = (uint)((int)*(undefined4 **)(iVar18 + 0x94) + (3 - (int)puVar5)) >> 2;
    if (*(undefined4 **)(iVar18 + 0x94) < puVar5) {
      uVar12 = 0;
    }
    if (uVar12 != 0) {
      do {
        pvVar7 = (void *)*puVar5;
        if (*(int *)((int)pvVar7 + 0x3c) == 4) {
          FUN_0053ad70((int)pvVar7);
          *(undefined4 *)((int)pvVar7 + 0x388) = 0;
          if (*(char *)(*(int *)((int)pvVar7 + 0x394) + 4) == '\0') {
            FUN_0053ae80((int)pvVar7);
          }
          iVar10 = *(int *)((int)pvVar7 + 0x398) - *(int *)((int)pvVar7 + 0x394);
          uVar13 = 0;
          iVar18 = iVar10 >> 0x1f;
          if (iVar10 / 0x50 + iVar18 != iVar18) {
            piVar11 = (int *)((int)pvVar7 + 0x624);
            do {
              if (*piVar11 == 0) {
                FUN_0053b0a0(pvVar7,uVar13);
              }
              uVar13 = uVar13 + 1;
              piVar11 = piVar11 + 1;
            } while (uVar13 < (uint)((*(int *)((int)pvVar7 + 0x398) - *(int *)((int)pvVar7 + 0x394))
                                    / 0x50));
          }
        }
        local_18 = local_18 + 1;
        puVar5 = puVar5 + 1;
      } while (local_18 != uVar12);
    }
  }
  iVar18 = FUN_004023e0();
  FUN_0052c340(iVar18);
  pvVar7 = DAT_0065b5cc;
  if (*(int *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x70) != 0) {
    iVar18 = FUN_004023e0();
    *(undefined2 *)(iVar18 + 0x2a0) = 0x101;
    *(undefined4 *)(iVar18 + 0x29c) = 2;
    (**(code **)(**(int **)(iVar18 + 0x2b0) + 0x244))();
    pvVar7 = DAT_0065b5cc;
    *(undefined4 *)(iVar18 + 0x2ac) = 0x3ee66667;
    *(undefined4 *)(iVar18 + 0x2a8) = 0x3ee66667;
  }
  if (param_1 != '\0') {
    iVar18 = FUN_004023e0();
    iVar18 = **(int **)(iVar18 + 0x404);
    FUN_00412a50();
    (**(code **)(iVar18 + 0x108))();
    iVar18 = FUN_004023e0();
    iVar18 = **(int **)(iVar18 + 0x404);
    FUN_00412990();
    (**(code **)(iVar18 + 0x108))();
    pNVar8 = FUN_00412a50();
    pNVar8[0x278] = (Node)0x0;
    *(undefined4 *)(pNVar8 + 0x280) = 0;
    FUN_00523940((int *)pNVar8);
    pDVar9 = cocos2d::Director::getInstance();
    cocos2d::EventDispatcher::removeEventListener
              (*(EventDispatcher **)(pDVar9 + 0x58),*(EventListener **)(pNVar8 + 0x28c));
    *(undefined4 *)(pNVar8 + 0x28c) = 0;
    FUN_00523f80();
    pvVar7 = DAT_0065b5cc;
  }
  if (*(int *)(*(int *)((int)pvVar7 + 0xcc) + 0x70) == 0) {
    if ((DAT_0065b3d1 == '\0') && (*(char *)(DAT_0065b444 + 0x78) != '\0')) {
      uVar12 = 0;
      pvVar7 = (void *)FUN_004023e0();
      FUN_00530750(pvVar7,uVar12);
      iVar10 = FUN_004023e0();
      uVar12 = 0;
      iVar18 = *(int *)(iVar10 + 0x2d4);
      *(undefined4 *)(iVar10 + 0x294) = 0x41c80000;
      *(undefined4 *)(iVar10 + 0x298) = 0x41200000;
      if (*(int *)(iVar18 + 0x94) - *(int *)(iVar18 + 0x90) >> 2 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(iVar18 + 0x90) + uVar12 * 4);
          iVar2 = *(int *)(iVar1 + 0x3c);
          if (((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          if (bVar15) {
            pBVar3 = *(BaseLight **)(iVar1 + 0x3d8);
            if (pBVar3 != (BaseLight *)0x0) {
              cocos2d::BaseLight::setIntensity(pBVar3,0.0);
              iVar18 = *(int *)(iVar10 + 0x2d4);
            }
            pBVar3 = *(BaseLight **)(*(int *)(*(int *)(iVar18 + 0x90) + uVar12 * 4) + 0x3d4);
            if (pBVar3 != (BaseLight *)0x0) {
              cocos2d::BaseLight::setIntensity(pBVar3,0.0);
              iVar18 = *(int *)(iVar10 + 0x2d4);
            }
            pBVar3 = *(BaseLight **)(*(int *)(*(int *)(iVar18 + 0x90) + uVar12 * 4) + 0x3d0);
            if (pBVar3 != (BaseLight *)0x0) {
              cocos2d::BaseLight::setIntensity(pBVar3,0.0);
              iVar18 = *(int *)(iVar10 + 0x2d4);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(*(int *)(iVar18 + 0x94) - *(int *)(iVar18 + 0x90) >> 2));
      }
      if (*(BaseLight **)(iVar18 + 0x9c) != (BaseLight *)0x0) {
        cocos2d::BaseLight::setIntensity(*(BaseLight **)(iVar18 + 0x9c),0.0);
      }
      FUN_00402f60();
      pvVar7 = DAT_0065b5cc;
    }
    else {
      *(undefined1 *)(DAT_0065b444 + 5) = 0;
    }
  }
  if (((*(char *)(iVar4 + 0x71) != '\0') ||
      (((iVar18 = *(int *)(*(int *)((int)pvVar7 + 0xcc) + 0x70), iVar18 != 2 && (iVar18 != 1)) &&
       (iVar18 != 0)))) && (*(char *)(*(int *)((int)pvVar7 + 0xcc) + 0x30d) == '\0')) {
    iVar18 = 1;
    pvVar7 = (void *)FUN_004023e0();
    FUN_0052eec0(pvVar7,iVar18);
    pvVar7 = DAT_0065b5cc;
  }
  if (((DAT_0065b39a != '\0') &&
      ((*(char *)(iVar4 + 0x72) != '\0' || (*(char *)(iVar4 + 0x71) != '\0')))) &&
     (*(int *)(*(int *)((int)pvVar7 + 0xcc) + 0x70) != 0)) {
    FUN_00591070("DETAIL","Initialising hardware interface...");
    pvVar7 = (void *)FUN_004029a0();
    FUN_004159f0(pvVar7);
    uVar12 = 0;
    if (*(int *)((int)pvVar7 + 0xc) - *(int *)((int)pvVar7 + 8) >> 2 != 0) {
      do {
        FUN_00591070("HARDWARE","Initialising interface %d");
        FUN_00415bc0(pvVar7,uVar12);
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)((int)pvVar7 + 0xc) - *(int *)((int)pvVar7 + 8) >> 2));
    }
    FUN_00591070("DETAIL","Hardware interface initialised.");
  }
  ExceptionList = local_10;
  return;
}


void FUN_00405c30(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = DAT_0065c2a0;
  if (DAT_0065c2a0 == (uint *)0x0) {
    puVar4 = (uint *)FUN_005adb0f(0xc);
    DAT_0065c2a0 = puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  piVar6 = (int *)*puVar4;
  uVar8 = 0;
  uVar10 = (uint)((int)puVar4[1] + (3 - (int)piVar6)) >> 2;
  if ((int *)puVar4[1] < piVar6) {
    uVar10 = 0;
  }
  if (uVar10 != 0) {
    do {
      iVar9 = *piVar6;
      piVar6 = piVar6 + 1;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(iVar9 + 8) = 0xbf800000;
    } while (uVar8 != uVar10);
  }
  FUN_004a86f0();
  puVar5 = FUN_00412b00();
  FUN_004ab070(puVar5);
  piVar6 = FUN_004122d0();
  local_8 = 0;
  iVar9 = *piVar6;
  FUN_004132d0(*(int **)(iVar9 + 4));
  *(int *)(*piVar6 + 4) = iVar9;
  *(int *)*piVar6 = iVar9;
  local_8 = 0xffffffff;
  *(int *)(*piVar6 + 8) = iVar9;
  piVar6[1] = 0;
  FUN_004028b0((int *)piVar6[2],(int *)piVar6[3]);
  piVar6[3] = piVar6[2];
  iVar9 = *(int *)(DAT_0065b5cc + 0x124);
  *(undefined4 *)(iVar9 + 0x1c) = 0;
  FUN_00481ef0(*(uint **)(iVar9 + 0x20),*(uint **)(iVar9 + 0x24));
  iVar3 = DAT_0065b5cc;
  *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar9 + 0x20);
  FUN_004b3980(*(uint **)(iVar3 + 300));
  uVar8 = 0;
  iVar9 = DAT_0065b5cc;
  if (*(int *)(DAT_0065b5cc + 0x134) - *(int *)(DAT_0065b5cc + 0x130) >> 2 != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(iVar9 + 0x130) + uVar8 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_00405e80(pvVar1);
        iVar9 = DAT_0065b5cc;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(iVar9 + 0x134) - *(int *)(iVar9 + 0x130) >> 2));
  }
  *(undefined4 *)(iVar9 + 0x134) = *(undefined4 *)(iVar9 + 0x130);
  puVar5 = FUN_004125d0();
  iVar3 = DAT_0065b5cc;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  iVar9 = *(int *)(iVar3 + 0xd0);
  if (iVar9 != 0) {
    *(undefined4 *)(iVar9 + 0x374) = 0;
  }
  bVar11 = DAT_0065b39a != '\0';
  *(undefined1 *)(puVar5 + 0x20) = 0;
  puVar5[7] = 0xffffffff;
  puVar5[6] = 0xbf800000;
  puVar5[4] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[0x21] = 0xbf800000;
  if ((bVar11) &&
     (((*(char *)(iVar2 + 0x72) != '\0' || (*(char *)(iVar2 + 0x71) != '\0')) &&
      (*(int *)(*(int *)(iVar3 + 0xcc) + 0x70) != 0)))) {
    FUN_00591070("DETAIL","Shutting down hardware interface...");
    puVar7 = DAT_0065b3a4;
    if (DAT_0065b3a4 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)FUN_005adb0f(0x14);
      DAT_0065b3a4 = puVar7;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      *(undefined4 *)(puVar7 + 0x10) = 0;
    }
    FUN_00415990((int)puVar7);
  }
  ExceptionList = local_10;
  return;
}


void * __fastcall FUN_00405e80(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x48)) {
    pvVar1 = *(void **)((int)param_1 + 0x34);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x48) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00405f5e;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0xf;
  *(undefined1 *)((int)param_1 + 0x34) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x30)) {
    pvVar1 = *(void **)((int)param_1 + 0x1c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00405f5e;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0xf;
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    pvVar1 = *(void **)((int)param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00405f5e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


void FUN_00405f70(void)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 **ppuVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 **this;
  int iVar17;
  bool bVar18;
  uint in_stack_ffffff64;
  undefined4 local_84 [3];
  undefined4 uStack_78;
  byte *pbVar19;
  byte *in_stack_ffffff98;
  void *local_40 [3];
  int local_34;
  int *piStack_30;
  uint local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar17 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afbb5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = DAT_0065b444;
  pvVar10 = *(void **)(DAT_0065b5cc + 0x128);
  if (pvVar10 != (void *)0x0) {
    FUN_00406b80((int)pvVar10);
    FUN_005adb3f(pvVar10);
    *(undefined4 *)(DAT_0065b5cc + 0x128) = 0;
  }
  if (*(char *)(iVar17 + 0x1c5) == '\0') {
    *(undefined4 *)(iVar17 + 400) = 0x2c;
    *(undefined4 *)(iVar17 + 0x18c) = 9;
    *(undefined4 *)(iVar17 + 0x188) = 3;
    *(undefined4 *)(iVar17 + 0x184) = 4;
    *(undefined4 *)(iVar17 + 0x180) = 0x32;
    *(undefined4 *)(iVar17 + 0x17c) = 0;
  }
  *(undefined1 *)(iVar17 + 4) = 1;
  puVar5 = FUN_00412df0();
  FUN_004a11f0(puVar5);
  uVar16 = 0;
  piVar6 = DAT_0065c290;
  while( true ) {
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_005adb0f(0x18);
      piVar6[4] = 0;
      piVar6[5] = 0;
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      DAT_0065c290 = piVar6;
    }
    if ((uint)(piVar6[1] - *piVar6 >> 2) <= uVar16) break;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_005adb0f(0x18);
      piVar6[4] = 0;
      piVar6[5] = 0;
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      DAT_0065c290 = piVar6;
    }
    iVar14 = *(int *)(*piVar6 + uVar16 * 4);
    uVar16 = uVar16 + 1;
    *(undefined4 *)(iVar14 + 0xd4) = 0;
    *(undefined1 *)(iVar14 + 0xe0) = 0;
    *(undefined4 *)(iVar14 + 0xd0) = 0;
    *(undefined4 *)(iVar14 + 0xd8) = 0;
    *(undefined4 *)(iVar14 + 0xdc) = 0xffffffff;
  }
  FUN_0040fa80();
  if (*(char *)(DAT_0065b444 + 0x72) != '\0') {
    *(undefined4 *)(DAT_0065b5cc + 0xd0) = 0;
  }
  if (DAT_0065c288 == (int *)0x0) {
    local_24 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (int *)FUN_00485f60(local_24);
    local_8 = 0xffffffff;
  }
  FUN_00489d50(DAT_0065c288);
  puVar5 = DAT_0065c270;
  if (DAT_0065c270 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_005adb0f(0x2c);
    DAT_0065c270 = puVar5;
    *(undefined1 *)puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    local_24 = puVar5;
  }
  FUN_004399f0((int)puVar5);
  FUN_004b3980(*(uint **)(DAT_0065b5cc + 300));
  this = (undefined4 **)(DAT_0065b5cc + 0xb4);
  ppuVar7 = this;
  if (0xf < *(uint *)(DAT_0065b5cc + 200)) {
    ppuVar7 = (undefined4 **)*this;
  }
  uVar16 = FUN_004031f0((byte *)ppuVar7,*(uint *)(DAT_0065b5cc + 0xc4),(byte *)&PTR_005ce008,0);
  if (((char)uVar16 != '\0') && (this != &DAT_00655798)) {
    ppuVar7 = &DAT_00655798;
    if (0xf < DAT_006557ac) {
      ppuVar7 = (undefined4 **)DAT_00655798;
    }
    FUN_00402690(this,ppuVar7,DAT_006557a8);
  }
  *(undefined4 *)(iVar17 + 0xa0) = DAT_00655078;
  FUN_00591070(&DAT_005cdc70,"Difficulty loaded from config: %s");
  FUN_004024e0(&stack0xffffff98,(undefined4 *)(DAT_0065b5cc + 0xb4));
  pbVar19 = (byte *)0x40627a;
  uVar8 = FUN_004a82e0(in_stack_ffffff98);
  *(undefined4 *)(DAT_0065b5cc + 0xcc) = uVar8;
  FUN_00591070(&DAT_005cdc70,"Initialising scenario \'%s\'");
  iVar14 = DAT_0065b5cc;
  if ((*(char *)(DAT_0065b444 + 0x72) == '\0') && (*(char *)(DAT_0065b444 + 0x70) == '\0')) {
    iVar13 = *(int *)(DAT_0065b5cc + 0xd0);
    DAT_0065b3d4 = iVar13;
    *(undefined1 *)(DAT_0065b5cc + 0xd4) = *(undefined1 *)(*(int *)(iVar13 + 0x254) + 0xd0);
  }
  else {
    *(undefined1 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x164) = 0;
    if ((*(char *)(iVar17 + 0x1c5) == '\0') && (*(int *)(*(int *)(iVar14 + 0xcc) + 0x70) == 2)) {
      piStack_30 = (int *)0x0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      FUN_00402690(local_40,"games_started",0xd);
      local_8 = 1;
      if (DAT_0065c294 == 0) {
        local_24 = (undefined4 *)FUN_005adb0f(0x28);
        local_8 = CONCAT31(local_8._1_3_,2);
        DAT_0065c294 = FUN_0051e500(local_24);
      }
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
        pvVar10 = local_40[0];
        if ((0xfff < local_2c + 1) &&
           (pvVar10 = *(void **)((int)local_40[0] + -4),
           0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
      local_24 = (undefined4 *)&stack0xffffff94;
      pbVar19 = (byte *)((uint)pbVar19 & 0xffffff00);
      uStack_78 = 0x4063bf;
      FUN_00402690(&stack0xffffff94,&PTR_005ce008,0);
      local_20 = local_84;
      local_8 = 4;
      local_84[0]._0_1_ = 0;
      FUN_00402690(local_84,"games_started",0xd);
      local_8 = CONCAT31(local_8._1_3_,5);
      pvVar10 = (void *)(in_stack_ffffff64 & 0xffffff00);
      FUN_00402690(&stack0xffffff64,&DAT_005e1d30,4);
      local_8 = 0xffffffff;
      FUN_00401a50(pvVar10);
      iVar14 = DAT_0065b5cc;
    }
    piVar6 = (int *)(*(int *)(iVar14 + 0xcc) + 0x318);
    local_1c = 0;
    if (*(int *)(*(int *)(iVar14 + 0xcc) + 0x31c) - *piVar6 >> 2 != 0) {
      local_18 = DAT_0065c2bc;
      do {
        uVar16 = local_1c;
        iVar17 = *piVar6;
        puVar5 = local_18;
        if (local_18 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_005adb0f(0x20);
          *(undefined1 *)puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          local_8 = 8;
          local_28 = puVar5;
          local_18 = puVar5;
          FUN_004ab070(puVar5);
          local_8 = 0xffffffff;
          DAT_0065c2bc = puVar5;
        }
        local_24 = puVar5 + 2;
        piVar6 = (int *)puVar5[2];
        iVar17 = *(int *)(iVar17 + uVar16 * 4);
        uVar16 = 0;
        iVar14 = puVar5[3] - (int)piVar6 >> 0x1f;
        iVar13 = (puVar5[3] - (int)piVar6) / 0xc + iVar14;
        if (iVar13 != iVar14) {
          do {
            if (*piVar6 == iVar17) goto LAB_00406554;
            uVar16 = uVar16 + 1;
            piVar6 = piVar6 + 3;
          } while (uVar16 < (uint)(iVar13 - iVar14));
        }
        puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        for (puVar11 = puVar9; puVar11 != *(undefined4 **)(DAT_0065b5cc + 0x40);
            puVar11 = puVar11 + 1) {
          piVar6 = (int *)*puVar11;
          if (*piVar6 == iVar17) goto LAB_0040650f;
        }
        piVar6 = (int *)0x0;
LAB_0040650f:
        local_2c = piVar6[0x46];
        for (; puVar9 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar9 = puVar9 + 1) {
          piStack_30 = (int *)*puVar9;
          if (*piStack_30 == iVar17) goto LAB_0040652f;
        }
        piStack_30 = (int *)0x0;
LAB_0040652f:
        puVar1 = (undefined8 *)puVar5[3];
        local_34 = iVar17;
        if ((undefined8 *)puVar5[4] == puVar1) {
          FUN_0047de90(local_24,puVar1,(undefined8 *)&local_34);
          local_18 = DAT_0065c2bc;
        }
        else {
          *puVar1 = CONCAT44(piStack_30,iVar17);
          *(uint *)(puVar1 + 1) = local_2c;
          puVar5[3] = puVar5[3] + 0xc;
        }
LAB_00406554:
        local_1c = local_1c + 1;
        piVar6 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x318);
        iVar14 = DAT_0065b5cc;
      } while (local_1c < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x31c) - *piVar6 >> 2));
    }
    if (*(char *)(*(int *)(iVar14 + 0xcc) + 0x311) == '\0') {
      iVar17 = 0x158;
      do {
        iVar13 = 0;
        iVar14 = *(int *)(iVar17 + *(int *)(iVar14 + 0xcc));
        if (1 < iVar14) {
          if (0 < iVar14) {
            iVar13 = rand();
            iVar13 = iVar13 % iVar14 + 1;
          }
          iVar13 = iVar13 + -1;
        }
        *(int *)(local_14 + -0x104 + iVar17) = iVar13;
        FUN_00591070(&DAT_005cdc70,"waypoint set selection for team %d: %d/%d");
        iVar17 = iVar17 + 4;
        iVar14 = DAT_0065b5cc;
      } while (iVar17 < 0x164);
    }
    else {
      iVar17 = *(int *)(*(int *)(iVar14 + 0xcc) + 0x15c);
      iVar14 = 0;
      if (0 < iVar17) {
        iVar14 = rand();
        iVar14 = iVar14 % iVar17 + 1;
      }
      FUN_00591070(&DAT_005cdc70,"Waypoint set selection sync\'d: picked %d for teams 1 & 2");
      iVar17 = 0;
      do {
        if (iVar17 < 1) {
          if (iVar17 == 0) {
            *(undefined4 *)(local_14 + 0x54) = 0;
            goto LAB_0040661e;
          }
        }
        else {
          *(int *)(local_14 + 0x54 + iVar17 * 4) = iVar14 + -1;
LAB_0040661e:
          FUN_00591070(&DAT_005cdc70,"waypoint set selection for team %d: %d/%d");
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < 3);
    }
    local_1c = 0;
    piVar6 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 1000);
    iVar14 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3ec) - *piVar6;
    iVar17 = iVar14 >> 0x1f;
    if (iVar14 / 0x18 + iVar17 != iVar17) {
      iVar17 = 0;
      do {
        local_28 = (undefined4 *)&stack0xffffff94;
        FUN_004024e0(&stack0xffffff94,(undefined4 *)(*piVar6 + iVar17));
        local_8 = 9;
        if (DAT_0065c274 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)FUN_005adb0f(0x30);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          local_8 = CONCAT31(local_8._1_3_,0xb);
          puVar5 = puVar9 + 3;
          *puVar5 = 0;
          puVar9[4] = 0;
          local_24 = puVar9;
          local_20 = puVar5;
          uVar8 = FUN_004136c0();
          *puVar5 = uVar8;
          puVar9[9] = 0;
          puVar9[10] = 0xf;
          *(undefined1 *)(puVar9 + 5) = 0;
          DAT_0065c274 = puVar9;
        }
        local_8 = 0xffffffff;
        FUN_004a0ee0(DAT_0065c274,pbVar19);
        iVar17 = iVar17 + 0x18;
        local_1c = local_1c + 1;
        piVar6 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 1000);
      } while (local_1c < (uint)((*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3ec) - *piVar6) / 0x18)
              );
    }
    FUN_0040bc20();
    iVar17 = local_14;
    FUN_00408110();
    if (*(char *)(DAT_0065b444 + 0x1c5) == '\0') {
      FUN_00408760('\x01');
      FUN_004077b0(iVar17);
    }
    else {
      FUN_004083e0('\x01');
    }
    iVar14 = DAT_0065b5cc;
    iVar17 = DAT_0065b444;
    *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) =
         *(int *)(&DAT_005ce098 + *(int *)(DAT_0065b444 + 0xe0) * 4) +
         *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 100);
    if (*(char *)(iVar17 + 0x1c5) != '\0') {
      iVar17 = FUN_004127d0();
      FUN_004b7fc0(iVar17);
      iVar14 = DAT_0065b5cc;
    }
    local_18 = (undefined4 *)0x0;
    iVar17 = *(int *)(*(int *)(iVar14 + 0xd8) + 0xcc);
    if (*(int *)(*(int *)(iVar14 + 0xd8) + 0xd0) - iVar17 >> 2 != 0) {
      do {
        uVar16 = (int)local_18 * 4;
        iVar17 = *(int *)(uVar16 + iVar17);
        iVar13 = *(int *)(*(int *)(iVar17 + 0x254) + 0x158);
        local_1c = uVar16;
        if (((iVar13 == 3) || (iVar13 == 1)) || (iVar13 == 0)) {
          uVar15 = 0;
          *(undefined4 *)(iVar17 + 0x36c) = *(undefined4 *)(iVar17 + 0x368);
          puVar5 = FUN_00412870();
          iVar14 = DAT_0065b5cc;
          if ((int)(puVar5[0x10] - puVar5[0xf]) >> 2 != 0) {
            do {
              puVar5 = FUN_00412870();
              iVar17 = uVar15 * 4;
              if ((*(char *)(*(int *)(iVar17 + puVar5[0xf]) + 0x1d) == '\0') ||
                 (*(char *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc) + uVar16) +
                           0x234) == '\0')) {
                piVar6 = (int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc) + local_1c);
                puVar5 = FUN_00412870();
                iVar14 = *(int *)(puVar5[0xf] + iVar17);
                iVar13 = *piVar6;
                pbVar19 = (byte *)(iVar13 + 0x238);
                if (0xf < *(uint *)(iVar13 + 0x24c)) {
                  pbVar19 = *(byte **)(iVar13 + 0x238);
                }
                pbVar12 = (byte *)(iVar14 + 4);
                if (0xf < *(uint *)(iVar14 + 0x18)) {
                  pbVar12 = *(byte **)(iVar14 + 4);
                }
                uVar16 = FUN_004031f0(pbVar12,*(uint *)(iVar14 + 0x14),pbVar19,
                                      *(uint *)(iVar13 + 0x248));
                if ((char)uVar16 != '\0') {
                  puVar5 = FUN_00412870();
                  iVar14 = puVar5[0xf];
                  iVar13 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc) +
                                   (int)local_18 * 4);
                  goto LAB_00406966;
                }
              }
              else {
                puVar5 = FUN_00412870();
                iVar14 = puVar5[0xf];
                iVar13 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc) + uVar16);
LAB_00406966:
                puVar5 = *(undefined4 **)(iVar13 + 0x36c);
                if (*(undefined4 **)(iVar13 + 0x370) == puVar5) {
                  FUN_00414080((void *)(iVar13 + 0x368),puVar5,(undefined4 *)(iVar14 + iVar17));
                }
                else {
                  *puVar5 = *(undefined4 *)(iVar14 + iVar17);
                  *(int *)(iVar13 + 0x36c) = *(int *)(iVar13 + 0x36c) + 4;
                }
              }
              uVar15 = uVar15 + 1;
              puVar5 = FUN_00412870();
              iVar14 = DAT_0065b5cc;
              uVar16 = local_1c;
            } while (uVar15 < (uint)((int)(puVar5[0x10] - puVar5[0xf]) >> 2));
          }
        }
        local_18 = (undefined4 *)((int)local_18 + 1);
        iVar17 = *(int *)(*(int *)(iVar14 + 0xd8) + 0xcc);
      } while (local_18 < (undefined4 *)(*(int *)(*(int *)(iVar14 + 0xd8) + 0xd0) - iVar17 >> 2));
    }
    uVar16 = 0;
    iVar17 = *(int *)(iVar14 + 0x3c);
    if (*(int *)(iVar14 + 0x40) - iVar17 >> 2 != 0) {
      do {
        iVar17 = *(int *)(iVar17 + uVar16 * 4);
        uVar15 = 0;
        iVar13 = *(int *)(iVar17 + 0xcc);
        if (*(int *)(iVar17 + 0xd0) - iVar13 >> 2 != 0) {
          do {
            iVar17 = *(int *)(iVar13 + uVar15 * 4);
            bVar18 = false;
            iVar13 = *(int *)(iVar17 + 0x254);
            if (iVar13 != 0) {
              bVar18 = *(int *)(iVar13 + 0x158) == 1;
            }
            if (bVar18) {
              FUN_0051b920(iVar17);
              iVar14 = DAT_0065b5cc;
            }
            uVar15 = uVar15 + 1;
            iVar17 = *(int *)(*(int *)(iVar14 + 0x3c) + uVar16 * 4);
            iVar13 = *(int *)(iVar17 + 0xcc);
          } while (uVar15 < (uint)(*(int *)(iVar17 + 0xd0) - iVar13 >> 2));
        }
        uVar16 = uVar16 + 1;
        iVar17 = *(int *)(iVar14 + 0x3c);
      } while (uVar16 < (uint)(*(int *)(iVar14 + 0x40) - iVar17 >> 2));
    }
    uVar15 = 0;
    piVar6 = *(int **)(*(int *)(iVar14 + 0xd8) + 0xcc);
    piVar2 = *(int **)(*(int *)(iVar14 + 0xd8) + 0xd0);
    uVar16 = (uint)((int)piVar2 + (3 - (int)piVar6)) >> 2;
    if (piVar2 < piVar6) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      do {
        bVar18 = false;
        iVar17 = *(int *)(*piVar6 + 0x254);
        if (iVar17 != 0) {
          bVar18 = *(int *)(iVar17 + 0x158) == 1;
        }
        if ((bVar18) && (pbVar19 = *(byte **)(*piVar6 + 0x398), pbVar19 != (byte *)0x0)) {
          FUN_0049e640(pbVar19);
        }
        uVar15 = uVar15 + 1;
        piVar6 = piVar6 + 1;
        iVar14 = DAT_0065b5cc;
      } while (uVar15 != uVar16);
    }
    iVar13 = DAT_0065b3d4;
    *(undefined4 *)(local_14 + 0x6c) = 0;
    *(undefined4 *)(local_14 + 0x68) = 0;
    iVar17 = local_14;
  }
  if (*(char *)(DAT_0065b444 + 0x1c5) == '\0') {
    iVar13 = *(int *)(iVar14 + 0x124);
    puVar5 = (undefined4 *)(iVar13 + 4);
    if ((undefined4 *)(iVar14 + 0xf4) != puVar5) {
      if (0xf < *(uint *)(iVar13 + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      FUN_00402690((undefined4 *)(iVar14 + 0xf4),puVar5,*(uint *)(iVar13 + 0x14));
    }
  }
  else {
    iVar3 = *(int *)(iVar14 + 0xd0);
    if (*(int *)(iVar3 + 0x178) != 0) {
      iVar4 = *(int *)(*(int *)(iVar3 + 0x178) + 0x254);
      bVar18 = false;
      if (iVar4 != 0) {
        bVar18 = *(int *)(iVar4 + 0x158) == 1;
      }
      if ((bVar18) && (iVar3 == iVar13)) {
        *(undefined1 *)(iVar3 + 0x280) = 1;
        *(undefined1 *)(*(int *)(iVar14 + 0xd0) + 0x281) = 1;
        goto LAB_00406b5e;
      }
    }
    *(undefined1 *)(iVar3 + 0x280) = 0;
    *(undefined1 *)(*(int *)(iVar14 + 0xd0) + 0x281) = 0;
  }
LAB_00406b5e:
  *(undefined1 *)(iVar17 + 4) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00406b80(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x84)) {
    pvVar1 = *(void **)(param_1 + 0x70);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x84) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00406ce4;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xf;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (0xf < *(uint *)(param_1 + 0x6c)) {
    pvVar1 = *(void **)(param_1 + 0x58);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x6c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00406ce4;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xf;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (0xf < *(uint *)(param_1 + 0x54)) {
    pvVar1 = *(void **)(param_1 + 0x40);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x54) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00406ce4;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xf;
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (0xf < *(uint *)(param_1 + 0x3c)) {
    pvVar1 = *(void **)(param_1 + 0x28);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x3c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00406ce4;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pvVar1 = *(void **)(param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x24) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00406ce4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


void FUN_00406cf0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined4 *puVar14;
  void *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar5 = ExceptionList;
  iVar3 = DAT_0065b5cc;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afbf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(uint *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x388) = (param_1 != 0) + 1;
  *(uint *)(*(int *)(iVar3 + 0xcc) + 0x38c) = (param_1 != 1) + 1;
  *(uint *)(*(int *)(iVar3 + 0xcc) + 0x390) = (param_1 != 2) + 1;
  *(int *)(*(int *)(iVar3 + 0xcc) + 0x3d8) = param_1;
  if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
    puVar6 = FUN_00402de0();
    puVar14 = *(undefined4 **)(puVar6 + 0x3c);
    puVar1 = *(undefined4 **)(puVar6 + 0x40);
    if (puVar14 == puVar1) {
      ExceptionList = local_10;
      return;
    }
    do {
      puVar2 = (undefined4 *)*puVar14;
      iVar3 = puVar2[0x19];
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 100);
        iVar9 = iVar3 * 0x6c;
        if (iVar3 == param_1) {
          pbVar12 = (byte *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x1e0 + iVar9);
          pbVar10 = pbVar12;
          if (0xf < *(uint *)(pbVar12 + 0x14)) {
            pbVar10 = *(byte **)pbVar12;
          }
          uVar7 = FUN_004031f0(pbVar10,*(uint *)(pbVar12 + 0x10),(byte *)&PTR_005ce008,0);
          if ((char)uVar7 == '\0') {
            FUN_004024e0(&stack0xffffffc0,(undefined4 *)pbVar12);
            local_8 = 0;
          }
          else {
            in_stack_ffffffc0 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
            FUN_00402690(&stack0xffffffc0,"Scenario won.",0xd);
            local_8 = 1;
          }
        }
        else {
          pbVar12 = (byte *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x210 + iVar9);
          pbVar10 = pbVar12;
          if (0xf < *(uint *)(pbVar12 + 0x14)) {
            pbVar10 = *(byte **)pbVar12;
          }
          uVar7 = FUN_004031f0(pbVar10,*(uint *)(pbVar12 + 0x10),(byte *)&PTR_005ce008,0);
          if ((char)uVar7 == '\0') {
            FUN_004024e0(&stack0xffffffc0,(undefined4 *)pbVar12);
            local_8 = 2;
          }
          else {
            in_stack_ffffffc0 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
            FUN_00402690(&stack0xffffffc0,"Scenario failed.",0x10);
            local_8 = 3;
          }
        }
        if (DAT_0065c2c8 == 0) {
          DAT_0065c2c8 = FUN_005adb0f(1);
        }
        local_8 = 0xffffffff;
        FUN_0041de30(puVar2,in_stack_ffffffc0);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar1);
    ExceptionList = local_10;
    return;
  }
  if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
    ExceptionList = pvVar5;
    return;
  }
  iVar9 = *(int *)(iVar3 + 0xd0);
  iVar4 = *(int *)(iVar9 + 100);
  iVar11 = iVar4 * 0x6c;
  if (param_1 == iVar4) {
    pcVar13 = (char *)(*(int *)(iVar3 + 0xcc) + 0x1e0 + iVar11);
    uVar7 = *(uint *)(pcVar13 + 0x14);
    pbVar10 = (byte *)pcVar13;
    if (0xf < uVar7) {
      pbVar10 = *(byte **)pcVar13;
    }
    uVar8 = FUN_004031f0(pbVar10,*(uint *)(pcVar13 + 0x10),(byte *)&PTR_005ce008,0);
    if ((char)uVar8 != '\0') {
      pcVar13 = "Scenario won.";
      goto LAB_00406f4f;
    }
  }
  else {
    pcVar13 = (char *)(*(int *)(iVar3 + 0xcc) + 0x210 + iVar11);
    uVar7 = *(uint *)(pcVar13 + 0x14);
    pbVar10 = (byte *)pcVar13;
    if (0xf < uVar7) {
      pbVar10 = *(byte **)pcVar13;
    }
    uVar8 = FUN_004031f0(pbVar10,*(uint *)(pcVar13 + 0x10),(byte *)&PTR_005ce008,0);
    if ((char)uVar8 != '\0') {
      pcVar13 = "Scenario failed.";
      goto LAB_00406f4f;
    }
  }
  if (0xf < uVar7) {
    pcVar13 = *(char **)pcVar13;
  }
LAB_00406f4f:
  FUN_00527550(*(int **)(iVar9 + 0x224),3,pcVar13);
  ExceptionList = local_10;
  return;
}


void FUN_00406f80(char param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
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
  int local_8;
  
  puVar9 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afc40;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar3 = FUN_0040fd70();
  iVar7 = DAT_0065b5cc;
  if (cVar3 != '\0') {
    *(undefined1 *)(DAT_0065b5cc + 0x1c7) = 1;
  }
  iVar6 = *(int *)(iVar7 + 0xd0);
  puVar4 = (undefined4 *)(iVar6 + 8);
  if ((undefined4 *)(iVar7 + 0x17c) != puVar4) {
    if (0xf < *(uint *)(iVar6 + 0x1c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(iVar7 + 0x17c),puVar4,*(uint *)(iVar6 + 0x18));
    iVar7 = DAT_0065b5cc;
  }
  iVar6 = *(int *)(*(int *)(iVar7 + 0xd0) + 0x254);
  puVar4 = (undefined4 *)(iVar6 + 0x48);
  if ((undefined4 *)(iVar7 + 0x194) != puVar4) {
    if (0xf < *(uint *)(iVar6 + 0x5c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(iVar7 + 0x194),puVar4,*(uint *)(iVar6 + 0x58));
    iVar7 = DAT_0065b5cc;
  }
  iVar6 = *(int *)(*(int *)(iVar7 + 0xd0) + 0x254);
  puVar4 = (undefined4 *)(iVar6 + 0x30);
  if ((undefined4 *)(iVar7 + 0x1ac) != puVar4) {
    if (0xf < *(uint *)(iVar6 + 0x44)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(iVar7 + 0x1ac),puVar4,*(uint *)(iVar6 + 0x40));
    iVar7 = DAT_0065b5cc;
  }
  *(undefined4 *)(iVar7 + 0x178) = *(undefined4 *)(*(int *)(iVar7 + 0xd0) + 0x20);
  *(undefined1 *)(*(int *)(iVar7 + 0xcc) + 0x164) = 1;
  *(char *)(iVar7 + 0x170) = param_1;
  FUN_004106d0();
  iVar7 = DAT_0065b5cc;
  if (param_1 == '\0') {
    piVar1 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3d0);
    *piVar1 = *piVar1 + 1;
    goto LAB_0040748e;
  }
  piVar1 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3d0);
  *piVar1 = *piVar1 + 1;
  fVar2 = *(float *)(*(int *)(iVar7 + 0xcc) + 0x3c4);
  if (fVar2 == -1.0) {
LAB_004072f6:
    FUN_00591070("DETAIL","Made best time for this scenario.");
    iVar7 = DAT_0065b5cc;
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3c4) = puVar9[0x1a];
    *(undefined4 *)(*(int *)(iVar7 + 0xcc) + 0x3cc) = puVar9[0x1b];
    if (*(void **)(iVar7 + 0xd0) == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0050bf30(*(void **)(iVar7 + 0xd0));
      iVar7 = DAT_0065b5cc;
    }
    *(int *)(*(int *)(iVar7 + 0xcc) + 0x3c8) = iVar6;
  }
  else {
    if ((float)puVar9[0x1a] <= fVar2 && fVar2 != (float)puVar9[0x1a]) {
      FUN_00403640((void *)(iVar7 + 0x158),"\n\n`%** BEST TIME FOR THIS SCENARIO **\n",0x26);
      FUN_00591e00((undefined1 *)local_44,"%dm %ds");
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"\n`7(Previous best %s)");
      local_8._0_1_ = 1;
      puVar4 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar4 = (undefined4 *)*puVar5;
      }
      FUN_00403640((void *)(DAT_0065b5cc + 0x158),puVar4,puVar5[4]);
      local_8 = (uint)local_8._1_3_ << 8;
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
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
        pvVar8 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar8 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      goto LAB_004072f6;
    }
    if (0.0 < fVar2) {
      FUN_00593280((undefined1 *)local_2c);
      local_8 = 2;
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`7Personal best %s");
      local_8._0_1_ = 3;
      puVar9 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar9 = (undefined4 *)*puVar4;
      }
      FUN_00403640((void *)(DAT_0065b5cc + 0x158),puVar9,puVar4[4]);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_30) {
        pvVar8 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar8 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_8 = 0xffffffff;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
      iVar7 = DAT_0065b5cc;
    }
  }
  FUN_00403640((void *)(iVar7 + 0x158),"\n\n`%- Stats -\n",0xe);
  if (*(void **)(DAT_0065b5cc + 0xd0) != (void *)0x0) {
    FUN_0050bf30(*(void **)(DAT_0065b5cc + 0xd0));
  }
  puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Hull Damage: %d%%\n");
  local_8 = 4;
  puVar9 = puVar4;
  if (0xf < (uint)puVar4[5]) {
    puVar9 = (undefined4 *)*puVar4;
  }
  FUN_00403640((void *)(DAT_0065b5cc + 0x158),puVar9,puVar4[4]);
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
  puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Torps Fired: %d\n");
  local_8 = 5;
  puVar9 = puVar4;
  if (0xf < (uint)puVar4[5]) {
    puVar9 = (undefined4 *)*puVar4;
  }
  FUN_00403640((void *)(DAT_0065b5cc + 0x158),puVar9,puVar4[4]);
  local_8 = 0xffffffff;
  if (0xf < local_48) {
    pvVar8 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar8 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
LAB_0040748e:
  FUN_004127d0();
  FUN_004b71c0();
  *DAT_0065b444 = 3;
  FUN_00591070("DETAIL","Scenario over, %s.");
  FUN_00591070("DETAIL","Obituary text: %s");
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00407510(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  byte *pbVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *in_stack_ffffff98;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afc88;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004024e0(local_2c,(undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x238));
  local_8 = 0;
  ppppuVar7 = local_2c;
  if (0xf < local_18) {
    ppppuVar7 = (undefined4 ****)local_2c[0];
  }
  ppppuVar5 = local_2c;
  if (0xf < local_18) {
    ppppuVar5 = (undefined4 ****)local_2c[0];
  }
  iVar8 = 0;
  iVar10 = (local_1c + (int)ppppuVar7) - (int)ppppuVar5;
  if ((undefined4 ****)(local_1c + (int)ppppuVar7) < ppppuVar5) {
    iVar10 = 0;
  }
  if (iVar10 != 0) {
    do {
      iVar2 = tolower((int)*(char *)(iVar8 + (int)ppppuVar5));
      *(char *)(iVar8 + (int)ppppuVar7) = (char)iVar2;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar10);
  }
  FUN_00591e00(&stack0xffffff98,"visited_starbase_%s");
  local_8._0_1_ = 1;
  puVar3 = FUN_00412df0();
  local_8._0_1_ = 0;
  FUN_004a0ee0(puVar3,in_stack_ffffff98);
  in_stack_ffffff98 = (byte *)((uint)in_stack_ffffff98 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,"is_docked",9);
  local_8._0_1_ = 2;
  puVar3 = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a0ee0(puVar3,in_stack_ffffff98);
  iVar8 = *(int *)(DAT_0065b5cc + 0x128);
  if (iVar8 != 0) {
    iVar10 = *(int *)(iVar8 + 0xc);
    iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
    pbVar9 = (byte *)(iVar2 + 0x238);
    if (0xf < *(uint *)(iVar2 + 0x24c)) {
      pbVar9 = *(byte **)(iVar2 + 0x238);
    }
    pbVar6 = (byte *)(iVar10 + 0x18);
    if (0xf < *(uint *)(iVar10 + 0x2c)) {
      pbVar6 = *(byte **)(iVar10 + 0x18);
    }
    uVar4 = FUN_004031f0(pbVar6,*(uint *)(iVar10 + 0x28),pbVar9,*(uint *)(iVar2 + 0x248));
    if ((char)uVar4 == '\0') {
      if ((((*(int *)(DAT_0065b444 + 0x18c) + *(int *)(DAT_0065b444 + 400) * 0xc) * 0x1f +
           *(int *)(DAT_0065b444 + 0x188)) * 0x18 - *(int *)(iVar8 + 0x8c)) +
          *(int *)(DAT_0065b444 + 0x184) < 9) goto LAB_00407757;
      FUN_004854a0(iVar8);
    }
    else {
      FUN_00591070("WORLD","Player delivered passenger \'%s\' to %s");
      FUN_004856d0(*(int **)(DAT_0065b5cc + 0x128));
    }
    iVar8 = DAT_0065b5cc;
    *(undefined1 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x280) = 0;
    *(undefined1 *)(*(int *)(iVar8 + 0xd0) + 0x281) = 0;
    pvVar1 = *(void **)(iVar8 + 0x128);
    if (pvVar1 != (void *)0x0) {
      FUN_00406b80((int)pvVar1);
      FUN_005adb3f(pvVar1);
      iVar8 = DAT_0065b5cc;
    }
    *(undefined4 *)(iVar8 + 0x128) = 0;
  }
LAB_00407757:
  if (0xf < local_18) {
    ppppuVar7 = (undefined4 ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppuVar7 = (undefined4 ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004077b0(int param_1)

{
  int iVar1;
  byte ****ppppbVar2;
  char *pcVar3;
  uint uVar4;
  byte ******ppppppbVar5;
  undefined1 *puVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  byte ******ppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *pbVar13;
  char *pcVar14;
  void *pvVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  int local_8c;
  int iStack_88;
  byte ******local_80 [4];
  uint local_70;
  uint local_6c;
  byte ******local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  byte *****local_4c;
  byte ******local_48;
  byte *****local_44;
  byte ******local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005afcb8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puStack_20 = &stack0xfffffffc;
  if ((((*(char *)(DAT_0065b444 + 0x11b) == '\0') &&
       (iVar17 = *(int *)(DAT_0065b5cc + 0xcc), puStack_20 = &stack0xfffffffc, iVar17 != 0)) &&
      (puStack_20 = &stack0xfffffffc, *(int *)(DAT_0065b5cc + 0xd8) != 0)) &&
     ((puStack_20 = &stack0xfffffffc, *(int *)(DAT_0065b5cc + 0xd0) != 0 &&
      (local_50 = 0, iVar18 = DAT_0065b5cc, puStack_20 = &stack0xfffffffc, puVar6 = &stack0xfffffffc
      , *(int *)(iVar17 + 0x334) - *(int *)(iVar17 + 0x330) >> 2 != 0)))) {
    do {
      puStack_20 = puVar6;
      uVar4 = local_50;
      iVar1 = local_50 * 4;
      if (*(int *)(*(int *)(*(int *)(iVar17 + 0x330) + iVar1) + 0x38) != **(int **)(iVar18 + 0xd8))
      goto LAB_0040801b;
      FUN_004024e0(local_68,(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(iVar18 + 0xcc) + 0x330) + iVar1) + 4));
      iVar18 = DAT_0065b5cc;
      local_44 = (byte *****)0x0;
      local_4c = (byte *****)
                 ((*(int *)(DAT_0065b5cc + 0x14c) - *(int *)(DAT_0065b5cc + 0x148)) / 0x18);
      local_48 = local_68[0];
      if ((byte ******)local_4c != (byte ******)0x0) {
        local_40 = (byte ******)0x0;
        do {
          pbVar16 = (byte *)((int)local_40 + *(int *)(iVar18 + 0x148));
          pppppppbVar12 = local_68;
          if (0xf < local_54) {
            pppppppbVar12 = (byte *******)local_48;
          }
          pbVar13 = pbVar16;
          if (0xf < *(uint *)(pbVar16 + 0x14)) {
            pbVar13 = *(byte **)pbVar16;
          }
          uVar9 = FUN_004031f0(pbVar13,*(uint *)(pbVar16 + 0x10),(byte *)pppppppbVar12,local_58);
          if ((char)uVar9 != '\0') {
            if (0xf < local_54) {
              pppppppbVar12 = (byte *******)local_48;
              if ((0xfff < local_54 + 1) &&
                 (pppppppbVar12 = (byte *******)local_48[-1],
                 (byte *)0x1f < (byte *)((int)local_48 + (-4 - (int)pppppppbVar12))))
              goto LAB_00408109;
              FUN_005adb3f(pppppppbVar12);
              iVar18 = DAT_0065b5cc;
            }
            local_58 = 0;
            local_54 = 0xf;
            local_68[0] = (byte ******)((uint)local_68[0] & 0xffffff00);
            goto LAB_0040801b;
          }
          local_44 = (byte *****)((int)local_44 + 1);
          local_40 = local_40 + 6;
        } while (local_44 < local_4c);
      }
      if (0xf < local_54) {
        pppppppbVar12 = (byte *******)local_48;
        if ((0xfff < local_54 + 1) &&
           (pppppppbVar12 = (byte *******)local_48[-1],
           (byte *)0x1f < (byte *)((int)local_48 + (-4 - (int)pppppppbVar12)))) goto LAB_00408109;
        FUN_005adb3f(pppppppbVar12);
        iVar18 = DAT_0065b5cc;
      }
      local_58 = 0;
      local_54 = 0xf;
      local_68[0] = (byte ******)((uint)local_68[0] & 0xffffff00);
      local_4c = *(byte ******)(*(int *)(iVar18 + 0xcc) + 0x330);
      ppppbVar2 = (byte ****)local_4c[uVar4][0x18];
      if (ppppbVar2 == (byte ****)0x0) {
LAB_004079e7:
        FUN_004024e0(local_80,local_4c[uVar4] + 1);
        local_44 = (byte *****)0x0;
        local_48 = *(byte *******)(DAT_0065b5cc + 0xd8);
        ppppppbVar10 = (byte ******)local_48[0x27];
        local_40 = local_80[0];
        if ((int)local_48[0x28] - (int)ppppppbVar10 >> 2 != 0) {
          do {
            iVar18 = DAT_0065b5cc;
            local_4c = ppppppbVar10[(int)local_44];
            ppppppbVar10 = (byte ******)(local_4c + 0x12);
            pppppppbVar12 = local_80;
            if (0xf < local_6c) {
              pppppppbVar12 = (byte *******)local_40;
            }
            if ((byte *****)0xf < local_4c[0x17]) {
              ppppppbVar10 = (byte ******)*ppppppbVar10;
            }
            uVar9 = FUN_004031f0((byte *)ppppppbVar10,(uint)local_4c[0x16],(byte *)pppppppbVar12,
                                 local_70);
            if ((char)uVar9 != '\0') {
              if (0xf < local_6c) {
                pppppppbVar12 = (byte *******)local_40;
                if ((0xfff < local_6c + 1) &&
                   (pppppppbVar12 = (byte *******)local_40[-1],
                   (byte *)0x1f < (byte *)((int)local_40 + (-4 - (int)pppppppbVar12))))
                goto LAB_00408109;
                FUN_005adb3f(pppppppbVar12);
                iVar18 = DAT_0065b5cc;
              }
              local_70 = 0;
              local_6c = 0xf;
              local_80[0] = (byte ******)((uint)local_80[0] & 0xffffff00);
              if ((byte ******)local_4c != (byte ******)0x0) goto LAB_0040801b;
              goto LAB_00407ae0;
            }
            local_44 = (byte *****)((int)local_44 + 1);
            ppppppbVar10 = (byte ******)local_48[0x27];
          } while (local_44 < (byte ******)((int)local_48[0x28] - (int)ppppppbVar10 >> 2));
        }
        if (0xf < local_6c) {
          if ((0xfff < local_6c + 1) &&
             (pppppppbVar12 = (byte *******)local_40[-1],
             pbVar16 = (byte *)((int)local_40 + (-4 - (int)pppppppbVar12)),
             local_40 = (byte ******)pppppppbVar12, (byte *)0x1f < pbVar16)) goto LAB_00408109;
          FUN_005adb3f(local_40);
        }
        local_80[0] = (byte ******)((uint)local_80[0] & 0xffffff00);
        iVar18 = DAT_0065b5cc;
LAB_00407ae0:
        local_6c = 0xf;
        local_70 = 0;
        local_48 = (byte ******)(*(int *)(iVar18 + 0xcc) + 0x330);
        local_44 = (byte *****)0x0;
        if ((int)(*local_48)[uVar4][0x16] - (int)(*local_48)[uVar4][0x15] >> 2 != 0) {
          do {
            cVar7 = FUN_004a23b0((*local_48)[uVar4][0x15][(int)local_44],
                                 *(void **)(*(int *)(iVar18 + 0xd0) + 0x1f8));
            iVar18 = DAT_0065b5cc;
            if (cVar7 == '\0') goto LAB_0040801b;
            local_48 = (byte ******)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330);
            local_44 = (byte *****)((int)local_44 + 1);
          } while (local_44 <
                   (byte ******)((int)(*local_48)[uVar4][0x16] - (int)(*local_48)[uVar4][0x15] >> 2)
                  );
        }
        pppppppbVar11 =
             (byte *******)
             FUN_0051f310(*(void **)(iVar18 + 0xd8),
                          *(undefined4 **)
                           (*(int *)(*(int *)(*(int *)(iVar18 + 0xcc) + 0x330) + iVar1) + 0x1c));
        iVar17 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330) + iVar1);
        pppppppbVar12 = (byte *******)(iVar17 + 0x80);
        local_48 = (byte ******)pppppppbVar11;
        if (pppppppbVar11 + 0x32 != pppppppbVar12) {
          if (0xf < *(uint *)(iVar17 + 0x94)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 0x32,pppppppbVar12,*(uint *)(iVar17 + 0x90));
        }
        iVar17 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330) + iVar1);
        pppppppbVar12 = (byte *******)(iVar17 + 0x20);
        if (pppppppbVar11 + 0x1a != pppppppbVar12) {
          if (0xf < *(uint *)(iVar17 + 0x34)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 0x1a,pppppppbVar12,*(uint *)(iVar17 + 0x30));
        }
        iVar17 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330) + iVar1);
        pppppppbVar12 = (byte *******)(iVar17 + 0x20);
        if (pppppppbVar11 + 0x20 != pppppppbVar12) {
          if (0xf < *(uint *)(iVar17 + 0x34)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 0x20,pppppppbVar12,*(uint *)(iVar17 + 0x30));
        }
        iVar17 = *(int *)(iVar1 + *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330));
        pppppppbVar12 = (byte *******)(iVar17 + 0xb0);
        if (pppppppbVar11 + 2 != pppppppbVar12) {
          if (0xf < *(uint *)(iVar17 + 0xc4)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 2,pppppppbVar12,*(uint *)(iVar17 + 0xc0));
        }
        iVar18 = DAT_0065b5cc;
        *(byte *)(pppppppbVar11 + 0x10) =
             **(byte **)(iVar1 + *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330));
        iVar17 = *(int *)(iVar1 + *(int *)(*(int *)(iVar18 + 0xcc) + 0x330));
        pppppppbVar12 = (byte *******)(iVar17 + 0xd4);
        if (pppppppbVar11 + 0x2c != pppppppbVar12) {
          if (0xf < *(uint *)(iVar17 + 0xe8)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 0x2c,pppppppbVar12,*(uint *)(iVar17 + 0xe4));
          iVar18 = DAT_0065b5cc;
        }
        iVar17 = *(int *)(iVar1 + *(int *)(*(int *)(iVar18 + 0xcc) + 0x330));
        pppppppbVar12 = (byte *******)(iVar17 + 4);
        if (pppppppbVar11 + 0x12 != pppppppbVar12) {
          if (0xf < *(uint *)(iVar17 + 0x18)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 0x12,pppppppbVar12,*(uint *)(iVar17 + 0x14));
          iVar18 = DAT_0065b5cc;
        }
        FUN_004040b0(*(undefined4 **)
                      (*(int *)(*(int *)(*(int *)(iVar18 + 0xcc) + 0x330) + iVar1) + 0xec));
        iVar17 = DAT_0065b5cc;
        *(double *)(pppppppbVar11 + 10) =
             (double)*(float *)**(undefined4 **)
                                 (*(int *)(iVar1 + *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x330))
                                 + 0xec);
        *(double *)(pppppppbVar11 + 0xc) =
             (double)*(float *)(**(int **)(*(int *)(*(int *)(*(int *)(iVar17 + 0xcc) + 0x330) +
                                                   iVar1) + 0xec) + 4);
        if (pppppppbVar11[0x18] == (byte ******)0x2) {
          pppppppbVar11[0x38] =
               *(byte *******)(*(int *)(*(int *)(*(int *)(iVar17 + 0xcc) + 0x330) + iVar1) + 0x7c);
        }
        iVar18 = *(int *)(iVar1 + *(int *)(*(int *)(iVar17 + 0xcc) + 0x330));
        pppppppbVar12 = (byte *******)(iVar18 + 100);
        if (pppppppbVar11 + 0x26 != pppppppbVar12) {
          if (0xf < *(uint *)(iVar18 + 0x78)) {
            pppppppbVar12 = (byte *******)*pppppppbVar12;
          }
          FUN_00402690(pppppppbVar11 + 0x26,pppppppbVar12,*(uint *)(iVar18 + 0x74));
          iVar17 = DAT_0065b5cc;
        }
        uVar9 = 0;
        local_40 = (byte ******)(*(int *)(iVar17 + 0xcc) + 0x330);
        if ((int)(*local_40)[uVar4][0x10] - (int)(*local_40)[uVar4][0xf] >> 2 != 0) {
          local_44 = (byte *****)0xc;
          do {
            local_40 = *(byte *******)((int)(*local_40)[uVar4][0xf] + (int)local_44 + -0xc);
            local_4c = local_48[0x3a];
            if (((int)uVar9 < 0) ||
               (((0 < (int)local_4c[2] && ((int)local_4c[2] <= (int)uVar9)) ||
                (*(int *)((int)local_4c + (int)local_44) == 0)))) {
              FUN_005070d0(local_4c,uVar9);
              iVar17 = DAT_0065b5cc;
            }
            if ((local_40 != (byte ******)0x0) &&
               (local_4c = *(byte ******)((int)local_4c + (int)local_44), (int)local_40 - 1U < 3)) {
              *(undefined1 *)((int)local_4c + (int)local_40) = 1;
              iVar17 = DAT_0065b5cc;
            }
            local_44 = (byte *****)((int)local_44 + 4);
            local_40 = (byte ******)(*(int *)(iVar17 + 0xcc) + 0x330);
            uVar9 = uVar9 + 1;
          } while (uVar9 < (uint)((int)(*local_40)[uVar4][0x10] - (int)(*local_40)[uVar4][0xf] >> 2)
                  );
        }
        local_44 = (byte *****)0x0;
        iVar18 = *(int *)(*(int *)(*(int *)(iVar17 + 0xcc) + 0x330) + iVar1);
        if (*(int *)(iVar18 + 0x4c) - *(int *)(iVar18 + 0x48) >> 2 != 0) {
          local_40 = (byte ******)0xc;
          do {
            ppppppbVar5 = local_48;
            ppppppbVar10 = (byte ******)local_48[0x3a];
            iVar18 = iVar17;
            if (*(int *)((int)local_40 + (int)ppppppbVar10) == 0) {
              FUN_00591070("ERROR","No pod to add to synthetic %s");
              bVar8 = cc_assert_script_compatible("No pod to add to synthetic");
              if (!bVar8) {
                cocos2d::log("Assert failed: %s","No pod to add to synthetic");
              }
              ppppppbVar10 = (byte ******)ppppppbVar5[0x3a];
              iVar18 = DAT_0065b5cc;
            }
            local_44 = (byte *****)((int)local_44 + 1);
            pppppppbVar12 = (byte *******)(local_40 + 1);
            *(undefined4 *)(*(int *)((int)local_40 + (int)ppppppbVar10) + 4) =
                 **(undefined4 **)
                   ((int)local_40 +
                   *(int *)(*(int *)(*(int *)(*(int *)(iVar18 + 0xcc) + 0x330) + iVar1) + 0x48) +
                   -0xc);
            iVar17 = DAT_0065b5cc;
            *(undefined4 *)(*(int *)((int)local_40 + (int)local_48[0x3a]) + 8) =
                 *(undefined4 *)
                  (*(int *)((int)local_40 +
                           *(int *)(*(int *)(iVar1 + *(int *)(*(int *)(iVar18 + 0xcc) + 0x330)) +
                                   0x48) + -0xc) + 4);
            iVar18 = *(int *)(*(int *)(*(int *)(iVar17 + 0xcc) + 0x330) + iVar1);
            local_40 = (byte ******)pppppppbVar12;
          } while (local_44 < (byte ******)(*(int *)(iVar18 + 0x4c) - *(int *)(iVar18 + 0x48) >> 2))
          ;
        }
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        pcVar3 = (&PTR_s_Debris_005df81c)[(int)local_48[0x18]];
        pcVar14 = pcVar3;
        do {
          cVar7 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar7 != '\0');
        FUN_00402690(local_3c,pcVar3,(int)pcVar14 - (int)(pcVar3 + 1));
        local_14 = 0;
        FUN_00591070("WORLD","Added synthetic instance: %s");
        local_14 = 0xffffffff;
        if (0xf < local_28) {
          pvVar15 = local_3c[0];
          if ((0xfff < local_28 + 1) &&
             (pvVar15 = *(void **)((int)local_3c[0] + -4),
             0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15)))) {
LAB_00408109:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar15);
        }
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        iVar18 = DAT_0065b5cc;
      }
      else {
        iStack_88 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x18c) >> 0x20);
        if (iStack_88 < (int)ppppbVar2[5]) goto LAB_004079e7;
        if (iStack_88 <= (int)ppppbVar2[5]) {
          local_8c = (int)*(undefined8 *)(param_1 + 0x18c);
          if ((local_8c < (int)ppppbVar2[4]) ||
             ((local_8c <= (int)ppppbVar2[4] &&
              ((*(int *)(param_1 + 0x188) < (int)ppppbVar2[3] ||
               ((*(int *)(param_1 + 0x188) <= (int)ppppbVar2[3] &&
                ((*(int *)(param_1 + 0x184) < (int)ppppbVar2[2] ||
                 ((*(int *)(param_1 + 0x184) <= (int)ppppbVar2[2] &&
                  (*(int *)(param_1 + 0x180) < (int)ppppbVar2[1])))))))))))) goto LAB_004079e7;
        }
      }
LAB_0040801b:
      iVar17 = *(int *)(iVar18 + 0xcc);
      local_50 = local_50 + 1;
      puVar6 = puStack_20;
    } while (local_50 < (uint)(*(int *)(iVar17 + 0x334) - *(int *)(iVar17 + 0x330) >> 2));
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
