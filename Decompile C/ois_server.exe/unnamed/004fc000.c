#include "../ois_server.exe.h"


void __fastcall FUN_004fc230(int param_1)

{
  uint in_stack_ffffffdc;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(in_stack_ffffffdc & 0xffffff00);
  FUN_00402690(&stack0xffffffdc,"Leaving combat mode.",0x14);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar1);
  return;
}


void __thiscall FUN_004fc270(void *this,int param_1)

{
  if (*(int *)((int)this + 0x28) == param_1) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}


void __thiscall FUN_004fc290(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x28) != 0) &&
     (*(uint *)((int)this + 0x28) ==
      (-(uint)(*(int *)(param_1 + 0x130) != 0) & *(int *)(param_1 + 0x130) + 8U))) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}


void __fastcall FUN_004fc2c0(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = AIDesire::vftable;
  if (0xf < (uint)param_1[7]) {
    pvVar1 = (void *)param_1[2];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


void * __thiscall FUN_004fc320(void *this,void *param_1)

{
  FUN_004024e0(param_1,(undefined4 *)((int)this + 8));
  return param_1;
}


undefined4 * __thiscall FUN_004fc340(void *this,byte param_1)

{
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


undefined4 * __thiscall FUN_004fc370(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined ***)this = AIFollow::vftable;
  *(undefined4 *)((int)this + 100) = 0;
  if (0xf < *(uint *)((int)this + 0x5c)) {
    pvVar1 = *(void **)((int)this + 0x48);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x5c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined1 *)((int)this + 0x48) = 0;
  FUN_004fc2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_004fc3f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 ***pppuVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *in_stack_ffffff90;
  int local_44 [6];
  undefined4 **local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0008;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x124);
  if ((iVar1 != 0) && (uVar4 = FUN_00515560(*(int *)(param_1 + 0x24)), (char)uVar4 != '\0')) {
    pbVar9 = (byte *)(iVar1 + 0x1dc);
    pbVar8 = pbVar9;
    if (0xf < *(uint *)(iVar1 + 0x1f0)) {
      pbVar8 = *(byte **)pbVar9;
    }
    uVar4 = FUN_004031f0(pbVar8,*(uint *)(iVar1 + 0x1ec),(byte *)&PTR_005ce008,0);
    if ((char)uVar4 == '\0') {
      FUN_004024e0(&stack0xffffff90,(undefined4 *)pbVar9);
      local_8 = 0;
      puVar5 = FUN_00412df0();
      local_8 = 0xffffffff;
      bVar3 = FUN_004a1150(puVar5,in_stack_ffffff90);
      iVar1 = DAT_0065b5cc;
      if (bVar3 != 0) {
        *(undefined4 *)(param_1 + 0x20) = 0x40000000;
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 0xd0);
      }
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x124);
    puVar2 = *(undefined4 **)(iVar1 + 0x1fc);
    for (puVar5 = *(undefined4 **)(iVar1 + 0x1f8); puVar5 != puVar2; puVar5 = puVar5 + 0xc) {
      FUN_004024e0(local_44,puVar5);
      local_8 = 1;
      FUN_004024e0(local_2c,puVar5 + 6);
      local_8 = 2;
      FUN_004024e0(&stack0xffffff90,local_44);
      local_8._0_1_ = 3;
      puVar6 = FUN_00412df0();
      local_8._0_1_ = 2;
      bVar3 = FUN_004a1150(puVar6,in_stack_ffffff90);
      if (bVar3 != 0) {
        FUN_004024e0(&stack0xffffff90,local_2c);
        local_8._0_1_ = 4;
        puVar6 = FUN_00412df0();
        local_8 = CONCAT31(local_8._1_3_,2);
        bVar3 = FUN_004a1150(puVar6,in_stack_ffffff90);
        if (bVar3 == 0) {
          if ((undefined4 ***)(param_1 + 0x48) != local_2c) {
            pppuVar7 = local_2c;
            if (0xf < local_18) {
              pppuVar7 = (undefined4 ***)local_2c[0];
            }
            FUN_00402690((undefined4 ***)(param_1 + 0x48),pppuVar7,local_1c);
          }
          *(undefined4 *)(param_1 + 0x20) = 0x40000000;
        }
      }
      local_8 = 0xffffffff;
      FUN_00419bc0(local_44);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004fc5a0(void *this,float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  byte *pbVar8;
  void *in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0040;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)((int)this + 100);
  if (((iVar5 == 0) && (iVar3 = *(int *)(DAT_0065b5cc + 0xd0), iVar3 != 0)) &&
     (uVar2 = FUN_00515560(*(int *)((int)this + 0x24)), (char)uVar2 != '\0')) {
    *(int *)((int)this + 100) = iVar3;
    iVar5 = iVar3;
  }
  if (*(char *)((int)this + 0x40) == '\0') {
    ExceptionList = local_10;
    return;
  }
  fVar7 = param_1 + *(float *)((int)this + 0x60);
  *(float *)((int)this + 0x60) = fVar7;
  if (fVar7 < *(float *)((int)this + 0x44)) {
    ExceptionList = local_10;
    return;
  }
  if (iVar5 == 0) {
    ExceptionList = local_10;
    return;
  }
  uVar2 = FUN_0050c850(*(void **)((int)this + 0x24),iVar5);
  if ((char)uVar2 == '\0') {
    ExceptionList = local_10;
    return;
  }
  iVar3 = *(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) >> 5;
  if (((iVar3 == 0) || (iVar5 = *(int *)(iVar3 * 0x20 + -0xc + *(int *)(iVar5 + 0x1c4)), iVar5 == 0)
      ) || (*(int *)(iVar5 + 0x30) != 1)) {
LAB_004fc673:
    FUN_004024e0(&stack0xffffffc8,(undefined4 *)((int)this + 0x48));
    local_8 = 0;
    puVar4 = FUN_00412df0();
    local_8 = 0xffffffff;
    bVar1 = FUN_004a1150(puVar4,in_stack_ffffffc8);
    if (bVar1 == 0) goto LAB_004fc6c0;
  }
  else {
    bVar6 = false;
    if (*(int *)(iVar5 + 0x24c) != 0) {
      bVar6 = *(int *)(*(int *)(iVar5 + 0x24c) + 0x158) == 1;
    }
    if (!bVar6) goto LAB_004fc673;
  }
  if ((*(float *)(*(int *)((int)this + 100) + 0x54) == -1.0) &&
     (*(char *)(*(int *)(*(int *)((int)this + 100) + 0x40) + 0x34) != '\0')) {
    ExceptionList = local_10;
    return;
  }
LAB_004fc6c0:
  puVar4 = (undefined4 *)((uint)in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,
               "Vessel disobeyed instruction to proceed to port. Acting accordingly.",0x44);
  pbVar8 = *(byte **)((int)this + 0x24);
  FUN_0050ae50(pbVar8,puVar4);
  FUN_004024e0(&stack0xffffffc4,(undefined4 *)((int)this + 0x48));
  local_8 = 1;
  puVar4 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar4,pbVar8);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004fc730(void *this,uint param_1)

{
  if (param_1 == (-(uint)(*(int *)((int)this + 100) != 0) & *(int *)((int)this + 100) + 8U)) {
    *(undefined4 *)((int)this + 100) = 0;
  }
  return;
}


void __fastcall FUN_004fc750(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 *this;
  undefined4 *puVar5;
  void *in_stack_ffffff8c;
  int local_44 [6];
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0078;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 900) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x124);
  puVar3 = *(undefined4 **)(iVar2 + 0x1fc);
  for (puVar5 = *(undefined4 **)(iVar2 + 0x1f8); puVar5 != puVar3; puVar5 = puVar5 + 0xc) {
    FUN_004024e0(local_44,puVar5);
    local_8 = 0;
    FUN_004024e0(local_2c,puVar5 + 6);
    local_8 = 1;
    FUN_004024e0(&stack0xffffff8c,local_44);
    local_8._0_1_ = 2;
    this = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar4 = FUN_004a1150(this,in_stack_ffffff8c);
    if (bVar4 != 0) {
      *(undefined2 *)(param_1 + 0x40) = 1;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x124);
      if ((iVar2 != 0) && (fVar1 = *(float *)(iVar2 + 500), fVar1 != -1.0)) {
        *(float *)(param_1 + 0x44) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    local_8 = 0xffffffff;
    FUN_00419bc0(local_44);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004fc890(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar1 + 900) == *(int *)(param_1 + 100)) {
    *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}


void __fastcall FUN_004fc8e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  return;
}


void __fastcall FUN_004fc8f0(int param_1)

{
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x58) = 0;
  return;
}


void __fastcall FUN_004fc900(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  uint in_stack_ffffff60;
  undefined4 *puVar6;
  int local_44;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);
  if ((*(char *)(iVar3 + 0x15d) != '\0') && (*(int *)(iVar3 + 0x74) != 3)) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x78);
    if (iVar3 == 0) {
      iVar3 = 0;
      local_44 = 2;
      do {
        iVar1 = rand();
        iVar3 = iVar3 + iVar1 % 6 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      fVar5 = (float)(iVar3 + 0x1e);
    }
    else if (iVar3 == 1) {
      iVar3 = 0;
      local_44 = 3;
      do {
        iVar1 = rand();
        iVar3 = iVar3 + iVar1 % 6 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      fVar5 = (float)(iVar3 + 0x32);
    }
    else if (iVar3 == 2) {
      iVar3 = 0;
      local_44 = 4;
      do {
        iVar1 = rand();
        iVar3 = iVar3 + iVar1 % 6 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      fVar5 = (float)(iVar3 + 100);
    }
    else {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    puVar6 = (undefined4 *)(in_stack_ffffff60 & 0xffffff00);
    FUN_00402690(&stack0xffffff60,"Coming to stop and lurking in this nebula for %.0f seconds",0x3a)
    ;
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar6);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar4 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    fVar5 = *(float *)(*(int *)(param_1 + 0x24) + 0x120);
    if (bVar4) {
      fVar5 = fVar5 + 90.0;
    }
    else {
      fVar5 = fVar5 - 90.0;
    }
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 360.0;
    }
    else if (360.0 <= fVar5) {
      fVar5 = fVar5 - 360.0;
    }
    *(float *)(param_1 + 0x3c) = fVar5;
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x34) * 0.5;
    return;
  }
  FUN_004fcaa0(param_1);
  return;
}


void __fastcall FUN_004fcaa0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  char *pcVar6;
  uint in_stack_ffffffb4;
  undefined4 *puVar7;
  float local_1c;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c00bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x74) == 3) {
LAB_004fcc00:
    iVar3 = FUN_00521010(*(void **)(*(int *)(param_1 + 0x24) + 0x24),1);
    if (((iVar3 == 0) &&
        (iVar3 = FUN_00521010(*(void **)(*(int *)(param_1 + 0x24) + 0x24),0), iVar3 == 0)) &&
       (iVar3 = FUN_00521010(*(void **)(*(int *)(param_1 + 0x24) + 0x24),1), iVar3 == 0)) {
      ExceptionList = local_10;
      return;
    }
    local_1c = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x28);
    local_18 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x30);
    local_8 = 0;
    fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)(iVar3 + 8));
    local_14 = 0x5f3759df - ((uint)fVar5 >> 1);
  }
  else {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar4 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar4) goto LAB_004fcc00;
    iVar3 = FUN_00521010(*(void **)(*(int *)(param_1 + 0x24) + 0x24),5);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar3 != 0) {
      local_1c = (float)*(double *)(iVar1 + 0x28);
      local_18 = (float)*(double *)(iVar1 + 0x30);
      local_8 = 1;
      fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)(iVar3 + 8));
      local_14 = 0x5f3759df - ((uint)fVar5 >> 1);
      uVar2 = 0x71;
      pcVar6 = 
      "I am heading a nebula to lie in wait for a potential target. Distance to my selected point within a nebula: %fGms"
      ;
      goto LAB_004fcccc;
    }
    iVar3 = FUN_00521010(*(void **)(iVar1 + 0x24),0);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_00521010(*(void **)(*(int *)(param_1 + 0x24) + 0x24),1), iVar3 == 0)) {
      ExceptionList = local_10;
      return;
    }
    local_1c = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x28);
    local_18 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x30);
    local_8 = 2;
    FUN_00591010((Vec2 *)&local_1c,(Vec2 *)(iVar3 + 8));
  }
  uVar2 = 0x56;
  pcVar6 = "Travelling around the map hunting for targets. Distance to my selected waypoint: %fGms";
LAB_004fcccc:
  puVar7 = (undefined4 *)(in_stack_ffffffb4 & 0xffffff00);
  FUN_00402690(&stack0xffffffb4,pcVar6,uVar2);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar7);
  local_8 = 0xffffffff;
  if (iVar3 != 0) {
    FUN_00517ce0(*(void **)(param_1 + 0x24),iVar3);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fcd20(int param_1)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint in_stack_ffffffc0;
  undefined4 *puVar7;
  uint in_stack_ffffffc4;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c00f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x50) = 1;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x58) = 0;
  iVar4 = *(int *)(param_1 + 0x24);
  if (*(char *)(*(int *)(iVar4 + 0x40) + 0x34) != '\0') {
    *(undefined1 *)(*(int *)(iVar4 + 0x40) + 0x34) = 0;
    iVar4 = *(int *)(param_1 + 0x24);
  }
  if ((*(int *)(iVar4 + 0xd4) != 1) && (*(char *)(iVar4 + 0x2ec) == '\0')) {
    FUN_00591070("WORLD","%s reached navpoint, selecting new one");
    FUN_004fc900(param_1);
    iVar4 = *(int *)(param_1 + 0x24);
  }
  if ((*(int *)(*(int *)(iVar4 + 0x44) + 0x34) == 0) &&
     (*(int *)(*(int *)(iVar4 + 0x44) + 0x10) == 0)) {
    local_18 = 0.0;
    local_14 = 0.0;
    local_8 = 0;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(iVar4 + 0x118),(Vec2 *)&local_18);
    local_8 = 0xffffffff;
    if ((0.0 < local_14) && (*(int *)(*(int *)(param_1 + 0x24) + 0xd4) != 1)) {
      FUN_00518af0(*(int *)(param_1 + 0x24));
    }
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(*(int *)(iVar4 + 0x44) + 0x34);
  if (iVar2 != 0) {
    local_18 = (float)*(double *)(iVar4 + 0x28);
    local_14 = (float)*(double *)(iVar4 + 0x30);
    local_8 = 1;
    fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar2 + 8),(Vec2 *)&local_18);
    local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
    fVar5 = (1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14;
    local_8 = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x24);
    if (*(int *)(iVar4 + 0xd4) == 1) {
      iVar2 = *(int *)(iVar4 + 0x1c4);
      iVar4 = *(int *)(iVar4 + 0x1c8) - iVar2 >> 5;
      if (((iVar4 != 0) && (iVar4 = iVar4 * 0x20, iVar2 + -0x20 + iVar4 != 0)) &&
         (bVar3 = cocos2d::Vec2::equals((Vec2 *)(iVar4 + iVar2 + -0x18),(Vec2 *)(param_1 + 0x48)),
         bVar3)) {
        ExceptionList = local_10;
        return;
      }
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x34) != 0) {
      if (fVar5 * fVar6 <= 5.0) {
        puVar7 = (undefined4 *)(in_stack_ffffffc4 & 0xffffff00);
        FUN_00402690(&stack0xffffffc4,"Arrived at destination.",0x17);
        FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar7);
        FUN_004fcaa0(param_1);
        ExceptionList = local_10;
        return;
      }
      if (*(int *)(*(int *)(param_1 + 0x24) + 0xd4) != 1) {
        puVar7 = (undefined4 *)(in_stack_ffffffc0 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"Beginning transit to nav point %d",0x21);
        FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar7);
        FUN_00517b40(*(void **)(param_1 + 0x24),
                     *(int *)(*(int *)((int)*(void **)(param_1 + 0x24) + 0x44) + 0x34));
        iVar4 = *(int *)(param_1 + 0x24);
        dVar1 = *(double *)(iVar4 + 0x30);
        *(float *)(param_1 + 0x40) = (float)*(double *)(iVar4 + 0x28);
        *(float *)(param_1 + 0x44) = (float)dVar1;
        iVar4 = *(int *)(*(int *)(iVar4 + 0x44) + 0x34);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0xc);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fcfe0(int param_1)

{
  int iVar1;
  float fVar2;
  float in_XMM1_Da;
  float fVar3;
  undefined4 *in_stack_ffffffc4;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0119;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x50) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  if (*(char *)(iVar1 + 0x34) != '\0') {
    *(undefined1 *)(iVar1 + 0x34) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x34) - in_XMM1_Da;
  *(float *)(param_1 + 0x34) = fVar2;
  if ((*(float *)(param_1 + 0x38) != -1.0) &&
     (fVar3 = *(float *)(param_1 + 0x38) - in_XMM1_Da, *(float *)(param_1 + 0x38) = fVar3,
     fVar3 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
    in_stack_ffffffc4 = (undefined4 *)((uint)in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,"Roating to avoid a blind spot problem while lurking in nebula.",
                 0x3e);
    FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),in_stack_ffffffc4);
    fVar2 = *(float *)(param_1 + 0x34);
  }
  if (0.0 < fVar2) {
    local_1c = 0;
    local_18 = 0;
    local_8 = 0;
    local_14 = cocos2d::Vec2::getDistance
                         ((Vec2 *)(*(int *)(param_1 + 0x24) + 0x118),(Vec2 *)&local_1c);
    local_8 = 0xffffffff;
    if ((0.0 < local_14) && (*(int *)(*(int *)(param_1 + 0x24) + 0xd4) != 1)) {
      FUN_00518af0(*(int *)(param_1 + 0x24));
      ExceptionList = local_10;
      return;
    }
    fVar2 = *(float *)(param_1 + 0x3c);
    if (*(float *)(param_1 + 0x38) == -1.0) {
      fVar2 = fVar2 - 180.0;
      if (0.0 <= fVar2) {
        if (360.0 <= fVar2) {
          fVar2 = fVar2 - 360.0;
        }
      }
      else {
        fVar2 = fVar2 + 360.0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (*(float *)(iVar1 + 0x120) != fVar2) {
      *(undefined4 *)(iVar1 + 0xd4) = 1;
      *(undefined4 *)(iVar1 + 0x2c0) = 0;
      *(undefined4 *)(iVar1 + 0x2c4) = 0;
      FUN_005174e0(*(int *)(param_1 + 0x24));
    }
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  puVar4 = (undefined4 *)((uint)in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,"No targets here. Moving on.",0x1b);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar4);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_004fcaa0(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fd1d0(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_004fcd20(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_004fcfe0(param_1);
  }
  return;
}


void __fastcall FUN_004fd200(float param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  float fVar7;
  uint in_stack_ffffffa4;
  undefined4 *puVar8;
  byte *in_stack_ffffffac;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0152;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)param_1 + 0x3c);
  local_1c = param_1;
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)param_1 + 0x24);
    iVar2 = *(int *)(iVar1 + 0x44);
    pbVar5 = (byte *)(iVar2 + 0x14);
    pbVar3 = pbVar5;
    if (0xf < *(uint *)(iVar2 + 0x28)) {
      pbVar3 = *(byte **)pbVar5;
    }
    uVar4 = FUN_004031f0(pbVar3,*(uint *)(iVar2 + 0x24),(byte *)&PTR_005ce008,0);
    if ((char)uVar4 == '\0') {
      FUN_004024e0(&stack0xffffffac,(undefined4 *)pbVar5);
      puVar6 = FUN_00520b80(*(void **)(*(int *)((int)param_1 + 0x24) + 0x24),in_stack_ffffffac);
      if (puVar6 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      puVar8 = (undefined4 *)((uint)in_stack_ffffffac & 0xffffff00);
      FUN_00402690(&stack0xffffffac,"Preparing to head to a new waypoint near our patrol zone.",0x39
                  );
      FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar8);
    }
    else {
      puVar6 = (undefined4 *)FUN_00521010(*(void **)(iVar1 + 0x24),0);
      if (puVar6 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      local_2c = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x28);
      local_28 = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x30);
      local_8 = 1;
      local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)(puVar6 + 2));
      local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
      puVar8 = (undefined4 *)(in_stack_ffffffa4 & 0xffffff00);
      FUN_00402690(&stack0xffffffa4,
                   "Travelling around the map on military patrol. Distance to my selected waypoint: %fGms"
                   ,0x55);
      FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar8);
      local_8 = 0xffffffff;
    }
  }
  else {
    local_24 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
    local_20 = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x24);
    local_8 = 0;
    puVar6 = (undefined4 *)0x0;
    uVar4 = 0;
    iVar2 = *(int *)(iVar1 + 0xa8);
    if (*(int *)(iVar1 + 0xac) - iVar2 >> 2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + uVar4 * 4);
        if ((*(int *)(iVar2 + 4) == 0) && (*(int *)(iVar2 + 0x38) != 3)) {
          local_18 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar2 + 8),(Vec2 *)&local_24);
          local_14 = (float)(0x5f3759df - ((uint)local_18 >> 1));
          local_18 = (1.5 - local_18 * 0.5 * local_14 * local_14) * local_14 * local_18;
          if (puVar6 != (undefined4 *)0x0) {
            fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)(puVar6 + 2),(Vec2 *)&local_24);
            local_14 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
            if ((1.5 - fVar7 * 0.5 * local_14 * local_14) * local_14 * fVar7 <= local_18)
            goto LAB_004fd379;
          }
          puVar6 = *(undefined4 **)(*(int *)(iVar1 + 0xa8) + uVar4 * 4);
        }
LAB_004fd379:
        uVar4 = uVar4 + 1;
        iVar2 = *(int *)(iVar1 + 0xa8);
      } while (uVar4 < (uint)(*(int *)(iVar1 + 0xac) - iVar2 >> 2));
    }
    local_8 = 0xffffffff;
    if (puVar6 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
    puVar8 = (undefined4 *)((uint)in_stack_ffffffac & 0xffffff00);
    FUN_00402690(&stack0xffffffac,"Moving as close as we can get to the intruder.",0x2e);
    param_1 = local_1c;
    FUN_0050ae50(*(undefined4 *)((int)local_1c + 0x24),puVar8);
  }
  FUN_00517ce0(*(void **)((int)param_1 + 0x24),(int)puVar6);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fd550(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


void __fastcall FUN_004fd570(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x58) = 0;
  return;
}


void __fastcall FUN_004fd590(void *param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  void *this;
  ulonglong uVar13;
  float fVar14;
  uint in_stack_ffffffa4;
  undefined4 *in_stack_ffffffa8;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 *local_24;
  float local_20;
  float local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0193;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar11 = (char *)0x0;
  uVar13 = 0xbf800000;
  fVar14 = -1.0;
  local_1c = -1.0;
  local_14 = (char *)0x0;
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x24);
  puVar8 = *(undefined4 **)(iVar9 + 0x134);
  local_24 = *(undefined4 **)(iVar9 + 0x138);
  if (puVar8 != local_24) {
    do {
      local_18 = (char *)*puVar8;
      uVar5 = FUN_004105f0(local_18);
      if ((char)uVar5 != '\0') {
        iVar9 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x44);
        pbVar12 = (byte *)(iVar9 + 0x14);
        pbVar10 = pbVar12;
        if (0xf < *(uint *)(iVar9 + 0x28)) {
          pbVar10 = *(byte **)pbVar12;
        }
        local_20 = *(float *)(iVar9 + 0x24);
        uVar6 = FUN_004031f0(pbVar10,(uint)local_20,(byte *)&PTR_005ce008,0);
        pcVar11 = local_14;
        if ((char)uVar6 == '\0') {
          pbVar10 = (byte *)(local_18 + 4);
          if (0xf < *(uint *)(local_18 + 0x18)) {
            pbVar10 = *(byte **)(local_18 + 4);
          }
          if (0xf < *(uint *)(iVar9 + 0x28)) {
            pbVar12 = *(byte **)pbVar12;
          }
          uVar6 = FUN_004031f0(pbVar12,(uint)local_20,pbVar10,*(uint *)(local_18 + 0x14));
          pcVar2 = local_18;
          pcVar11 = local_14;
          if ((char)uVar6 != '\0') {
            local_30 = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x28);
            local_2c = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x30);
            local_8 = 0;
            local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)(local_18 + 0xe8),(Vec2 *)&local_30);
            local_18 = (char *)(0x5f3759df - ((uint)local_20 >> 1));
            local_8 = 0xffffffff;
            uVar13 = (ulonglong)(uint)local_1c;
            fVar14 = (1.5 - local_20 * 0.5 * (float)local_18 * (float)local_18) * (float)local_18 *
                     local_20;
            if ((local_1c == -1.0) || (pcVar11 = local_14, fVar14 < local_1c)) {
              uVar13 = (ulonglong)(uint)fVar14;
              local_14 = pcVar2;
              pcVar11 = pcVar2;
              local_1c = fVar14;
            }
          }
        }
      }
      fVar14 = (float)uVar13;
      puVar8 = puVar8 + 1;
    } while (puVar8 != local_24);
  }
  if ((pcVar11 != *(char **)((int)param_1 + 0x34)) || (*(float *)((int)param_1 + 0x38) != fVar14)) {
    *(float *)((int)param_1 + 0x38) = fVar14;
    *(char **)((int)param_1 + 0x34) = pcVar11;
  }
  iVar9 = *(int *)((int)param_1 + 0x24);
  if (*(char *)(*(int *)(iVar9 + 0x40) + 0x34) == '\0') {
    *(undefined1 *)(*(int *)(iVar9 + 0x40) + 0x34) = 1;
    iVar9 = *(int *)((int)param_1 + 0x24);
  }
  *(undefined1 *)(*(int *)(iVar9 + 0x44) + 0x50) = 1;
  iVar9 = *(int *)((int)param_1 + 0x24);
  if ((*(int *)(iVar9 + 0xd4) != 1) && (*(char *)(iVar9 + 0x2ec) == '\0')) {
    FUN_00591070("WORLD","%s reached navpoint, selecting new one");
    FUN_004fd200((float)param_1);
    iVar9 = *(int *)((int)param_1 + 0x24);
  }
  if ((*(int *)(*(int *)(iVar9 + 0x44) + 0x34) == 0) &&
     (*(int *)(*(int *)(iVar9 + 0x44) + 0x10) == 0)) {
    local_30 = 0.0;
    local_2c = 0.0;
    local_8 = 1;
    local_24 = (undefined4 *)cocos2d::Vec2::getDistance((Vec2 *)(iVar9 + 0x118),(Vec2 *)&local_30);
    local_8 = 0xffffffff;
    if ((0.0 < (float)local_24) && (*(int *)(*(int *)((int)param_1 + 0x24) + 0xd4) != 1)) {
      FUN_00518af0(*(int *)((int)param_1 + 0x24));
    }
  }
  iVar9 = *(int *)((int)param_1 + 0x24);
  iVar1 = *(int *)(*(int *)(iVar9 + 0x44) + 0x34);
  if (iVar1 != 0) {
    local_30 = (float)*(double *)(iVar9 + 0x28);
    local_2c = (float)*(double *)(iVar9 + 0x30);
    local_8 = 2;
    local_24 = (undefined4 *)cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar1 + 8),(Vec2 *)&local_30);
    local_18 = (char *)(0x5f3759df - ((uint)local_24 >> 1));
    local_8 = 0xffffffff;
    iVar9 = *(int *)((int)param_1 + 0x24);
    fVar14 = (1.5 - (float)local_24 * 0.5 * (float)local_18 * (float)local_18) * (float)local_18 *
             (float)local_24;
    if (*(int *)(iVar9 + 0xd4) == 1) {
      iVar1 = *(int *)(iVar9 + 0x1c4);
      iVar9 = *(int *)(iVar9 + 0x1c8) - iVar1 >> 5;
      if (((iVar9 != 0) && (iVar9 = iVar9 * 0x20, iVar1 + -0x20 + iVar9 != 0)) &&
         (bVar3 = cocos2d::Vec2::equals
                            ((Vec2 *)(iVar9 + iVar1 + -0x18),(Vec2 *)((int)param_1 + 0x48)), bVar3))
      {
        ExceptionList = local_10;
        return;
      }
    }
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x34) != 0) {
      if (5.0 < fVar14) {
        if (*(int *)(*(int *)((int)param_1 + 0x24) + 0xd4) != 1) {
          puVar8 = (undefined4 *)(in_stack_ffffffa4 & 0xffffff00);
          FUN_00402690(&stack0xffffffa4,"Beginning transit to nav point %d",0x21);
          FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar8);
          this = *(void **)((int)param_1 + 0x24);
          iVar9 = *(int *)(*(int *)((int)this + 0x44) + 0x34);
          if (iVar9 != 0) {
            FUN_005179b0((int)this);
            *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0x1c4);
            *(int *)(*(int *)((int)this + 0x44) + 0x34) = iVar9;
            FUN_00517ce0(this,iVar9);
            this = *(void **)((int)param_1 + 0x24);
          }
          local_28 = (float)*(double *)((int)this + 0x28);
          local_24 = (undefined4 *)(float)*(double *)((int)this + 0x30);
          *(float *)((int)param_1 + 0x40) = local_28;
          *(undefined4 **)((int)param_1 + 0x44) = local_24;
          iVar9 = *(int *)(*(int *)((int)this + 0x44) + 0x34);
          *(undefined4 *)((int)param_1 + 0x48) = *(undefined4 *)(iVar9 + 8);
          *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)(iVar9 + 0xc);
        }
      }
      else {
        in_stack_ffffffa8 = (undefined4 *)((uint)in_stack_ffffffa8 & 0xffffff00);
        FUN_00402690(&stack0xffffffa8,"Arrived at destination.",0x17);
        FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),in_stack_ffffffa8);
        FUN_004fd200((float)param_1);
      }
    }
  }
  if (*(int *)((int)param_1 + 0x3c) != 0) {
    if (*(float *)(*(int *)((int)param_1 + 0x3c) + 0x40) <= 0.5) {
      FUN_004fdb10(param_1);
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x3c) = 0;
    ExceptionList = local_10;
    return;
  }
  iVar9 = *(int *)((int)param_1 + 0x24);
  uVar6 = 0;
  if (*(int *)(*(int *)(iVar9 + 0x44) + 0x154) - *(int *)(*(int *)(iVar9 + 0x44) + 0x150) >> 2 != 0)
  {
    while ((iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x44) + 0x150) + uVar6 * 4) + 0x130)
           , iVar9 != 0 && (*(char *)(iVar9 + 0x234) != '\0'))) {
      iVar9 = *(int *)((int)param_1 + 0x34);
      pbVar12 = (byte *)(iVar9 + 0x78);
      pbVar10 = pbVar12;
      if (0xf < *(uint *)(iVar9 + 0x8c)) {
        pbVar10 = *(byte **)pbVar12;
      }
      uVar7 = FUN_004031f0(pbVar10,*(uint *)(iVar9 + 0x88),(byte *)&PTR_005ce008,0);
      if ((char)uVar7 != '\0') break;
      local_24 = (undefined4 *)&stack0xffffffa8;
      FUN_004024e0(&stack0xffffffa8,(undefined4 *)pbVar12);
      local_8 = 3;
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      bVar4 = FUN_004a1150(puVar8,in_stack_ffffffa8);
      if (bVar4 == 0) break;
      iVar9 = *(int *)((int)param_1 + 0x24);
      uVar6 = uVar6 + 1;
      if ((uint)(*(int *)(*(int *)(iVar9 + 0x44) + 0x154) - *(int *)(*(int *)(iVar9 + 0x44) + 0x150)
                >> 2) <= uVar6) {
        ExceptionList = local_10;
        return;
      }
    }
    *(undefined4 *)((int)param_1 + 0x3c) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x150) + uVar6 * 4);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fdb10(void *param_1)

{
  int *this;
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  char *pcVar8;
  float fVar9;
  byte *pbVar10;
  void *in_stack_ffffff9c;
  void *local_3c [5];
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c01d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x44);
  if (*(int *)(iVar2 + 0x5c) == -1) {
    iVar2 = FUN_00505e40(iVar2);
    *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x5c) = iVar2;
  }
  if (*(float *)(*(int *)((int)param_1 + 0x34) + 0x38) + 60.0 < *(float *)((int)param_1 + 0x38))
  goto LAB_004fdd38;
  FUN_004024e0(&stack0xffffff9c,
               (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x3c) + 0x130) + 0x238));
  pbVar10 = (byte *)0x4fdb8e;
  bVar1 = FUN_004fdf30(param_1,in_stack_ffffff9c);
  if (bVar1) goto LAB_004fdd38;
  iVar2 = *(int *)((int)param_1 + 0x34);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x74) == '\0')) {
    uVar5 = *(uint *)(iVar2 + 0xbc);
    pcVar8 = (char *)(iVar2 + 0xa8);
    pbVar6 = (byte *)pcVar8;
    if (0xf < uVar5) {
      pbVar6 = *(byte **)pcVar8;
    }
    uVar3 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0xb8),(byte *)&PTR_005ce008,0);
    if ((char)uVar3 == '\0') {
      if (0xf < uVar5) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    else {
      pcVar8 = "ATTENTION: Restricted area. Turn around or be fired upon.";
    }
LAB_004fdc11:
    FUN_00527550(*(int **)(*(int *)(*(int *)((int)param_1 + 0x3c) + 0x130) + 0x224),4,pcVar8);
  }
  else {
    uVar5 = *(uint *)(iVar2 + 0xbc);
    pcVar8 = (char *)(iVar2 + 0xa8);
    pbVar6 = (byte *)pcVar8;
    if (0xf < uVar5) {
      pbVar6 = *(byte **)pcVar8;
    }
    uVar3 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0xb8),(byte *)&PTR_005ce008,0);
    if ((char)uVar3 == '\0') {
      if (0xf < uVar5) {
        pcVar8 = *(char **)pcVar8;
      }
      goto LAB_004fdc11;
    }
  }
  iVar2 = *(int *)((int)param_1 + 0x3c);
  if (*(char *)(*(int *)(iVar2 + 0x130) + 0x234) != '\0') {
    FUN_00591070(&DAT_005cdc70,"Zone breached by player, flag \'%s\' being set");
    local_14 = &stack0xffffff98;
    FUN_004024e0(&stack0xffffff98,(undefined4 *)(*(int *)((int)param_1 + 0x34) + 0x90));
    local_8 = 0;
    puVar4 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar4,pbVar10);
    iVar2 = *(int *)((int)param_1 + 0x3c);
  }
  FUN_004024e0(local_3c,(undefined4 *)(*(int *)(iVar2 + 0x130) + 0x238));
  local_8 = 1;
  FUN_004024e0(&stack0xffffff9c,local_3c);
  bVar1 = FUN_004fdf30(param_1,in_stack_ffffff9c);
  if (!bVar1) {
    this = *(int **)((int)param_1 + 0x54);
    if (*(int **)((int)param_1 + 0x58) == this) {
      FUN_00403840((void *)((int)param_1 + 0x50),this,local_3c);
    }
    else {
      FUN_004024e0(this,local_3c);
      *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + 0x18;
    }
  }
  local_8 = 0xffffffff;
  if (0xf < local_28) {
    pvVar7 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar7 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  if (*(int *)(*(int *)((int)param_1 + 0x24) + 0xd4) == 1) {
    FUN_00517400(*(int *)((int)param_1 + 0x24));
  }
LAB_004fdd38:
  if (*(float *)((int)param_1 + 0x38) <= *(float *)(*(int *)((int)param_1 + 0x34) + 0x38)) {
    if (*(char *)(*(int *)((int)param_1 + 0x34) + 0x75) == '\0') {
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x40) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + 0x130);
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x24);
      uVar5 = FUN_0050f5f0(iVar2);
      iVar2 = *(int *)(iVar2 + 0x44);
      if ((char)uVar5 == '\0') {
        *(undefined1 *)(iVar2 + 0x58) = 1;
        ExceptionList = local_10;
        return;
      }
      *(undefined1 *)(iVar2 + 0x58) = 0;
      local_1c = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x28);
      local_18 = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x30);
      iVar2 = *(int *)((int)param_1 + 0x3c);
      local_24 = (float)((double)*(float *)(iVar2 + 0x104) + *(double *)(iVar2 + 0x10));
      local_20 = (float)((double)*(float *)(iVar2 + 0x108) + *(double *)(iVar2 + 0x18));
      local_8 = 3;
      fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)&local_1c);
      local_14 = (undefined1 *)(0x5f3759df - ((uint)fVar9 >> 1));
      local_8 = 0xffffffff;
      if ((1.5 - fVar9 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar9 <= 100.0
         ) {
        puVar4 = (undefined4 *)((uint)in_stack_ffffff9c & 0xffffff00);
        FUN_00402690(&stack0xffffff9c,"Firing weapon as our target remains in the forbidden zone.",
                     0x3a);
        FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar4);
        iVar2 = *(int *)(*(int *)((int)param_1 + 0x3c) + 0x130);
        FUN_0051e300(*(void **)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20) +
                                0x3c + *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) +
                                               0x5c) * 4),-(uint)(iVar2 != 0) & iVar2 + 8U);
        FUN_0050fa00(*(void **)((int)param_1 + 0x24),
                     *(int *)(*(int *)((int)*(void **)((int)param_1 + 0x24) + 0x44) + 0x5c));
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004fdef0(void *this,int param_1)

{
  int iVar1;
  
  if (((*(int *)((int)this + 0x3c) != 0) &&
      (iVar1 = *(int *)(*(int *)((int)this + 0x3c) + 0x130), iVar1 != 0)) && (iVar1 + 8 == param_1))
  {
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  if (*(int *)((int)this + 0x28) == param_1) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}


bool __thiscall FUN_004fdf30(void *this,void *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  void *pvVar3;
  uint in_stack_00000018;
  
  pbVar1 = *(byte **)((int)this + 0x54);
  pbVar2 = FUN_004143f0(*(byte **)((int)this + 0x50),pbVar1,(byte *)&param_1);
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
  return pbVar2 != pbVar1;
}


void __fastcall FUN_004fdf90(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *this;
  byte *pbVar3;
  byte *in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be3e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00591070(&DAT_005cdc70,"Vessel tried and failed to hack me.");
    iVar1 = *(int *)(param_1 + 0x34);
    pbVar3 = (byte *)(iVar1 + 0x44);
    if (0xf < *(uint *)(iVar1 + 0x58)) {
      pbVar3 = *(byte **)(iVar1 + 0x44);
    }
    uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0x54),(byte *)&PTR_005ce008,0);
    if ((char)uVar2 == '\0') {
      FUN_00591070(&DAT_005cdc70,"Setting flag.");
      FUN_004024e0(&stack0xffffffc8,(undefined4 *)(*(int *)(param_1 + 0x34) + 0x44));
      local_8 = 0;
      this = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(this,in_stack_ffffffc8);
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fe050(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *this;
  byte *pbVar3;
  byte *in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be3e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    pbVar3 = (byte *)(iVar1 + 0x5c);
    if (0xf < *(uint *)(iVar1 + 0x70)) {
      pbVar3 = *(byte **)(iVar1 + 0x5c);
    }
    uVar2 = FUN_004031f0(pbVar3,*(uint *)(iVar1 + 0x6c),(byte *)&PTR_005ce008,0);
    if ((char)uVar2 == '\0') {
      FUN_00591070(&DAT_005cdc70,"Hacked a vessel patrolling a zone, setting a flag.");
      FUN_004024e0(&stack0xffffffc8,(undefined4 *)(*(int *)(param_1 + 0x34) + 0x5c));
      local_8 = 0;
      this = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(this,in_stack_ffffffc8);
    }
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_004fe100(void *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  float fVar11;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c022d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_18 = this;
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0xb8) == '\0') {
    uVar2 = FUN_004105a0(*(int *)(*(int *)((int)this + 0x24) + 0x20));
    if ((char)uVar2 != '\0') goto LAB_004fe15a;
  }
  else {
LAB_004fe15a:
    if (*(char *)(*(int *)(param_1 + 0x130) + 0x234) != '\0') {
      ExceptionList = local_10;
      return 0xf;
    }
  }
  iVar6 = *(int *)((int)this + 0x24);
  if (*(float *)(&DAT_005df5d8 + *(int *)(*(int *)(iVar6 + 0x44) + 0x74) * 4) != -1.0) {
    local_20 = (float)*(double *)(iVar6 + 0x28);
    local_1c = (float)*(double *)(iVar6 + 0x30);
    local_28 = (float)((double)*(float *)(param_1 + 0x104) + *(double *)(param_1 + 0x10));
    local_24 = (float)((double)*(float *)(param_1 + 0x108) + *(double *)(param_1 + 0x18));
    local_8 = 1;
    local_14 = 3;
    fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
    fVar3 = (float)(0x5f3759df - ((uint)fVar11 >> 1));
    iVar6 = *(int *)((int)this + 0x24);
    fVar11 = (1.5 - fVar11 * 0.5 * fVar3 * fVar3) * fVar3 * fVar11;
    if (*(float *)(&DAT_005df5d8 + *(int *)(*(int *)(iVar6 + 0x44) + 0x74) * 4) <= fVar11 &&
        fVar11 != *(float *)(&DAT_005df5d8 + *(int *)(*(int *)(iVar6 + 0x44) + 0x74) * 4)) {
      bVar1 = true;
      goto LAB_004fe26f;
    }
  }
  bVar1 = false;
LAB_004fe26f:
  local_8 = 0xffffffff;
  if (bVar1) {
    ExceptionList = local_10;
    return 0;
  }
  fVar3 = (float)((double)*(float *)(param_1 + 0x108) + *(double *)(param_1 + 0x18));
  FUN_00592f80((float)((double)*(float *)(param_1 + 0x104) + *(double *)(param_1 + 0x10)),fVar3,
               (float)*(double *)(iVar6 + 0x28));
  iVar10 = 5;
  iVar6 = *(int *)(*(int *)(param_1 + 0x130) + 0x254);
  pbVar9 = (byte *)(iVar6 + 0x60);
  uVar2 = -(uint)(0xb4 < (int)(*(float *)(*(int *)(param_1 + 0x130) + 0x120) - (float)(int)fVar3) -
                         0x5aU) & 0xfffffff6;
  iVar8 = uVar2 + 10;
  pbVar7 = pbVar9;
  if (0xf < *(uint *)(iVar6 + 0x74)) {
    pbVar7 = *(byte **)pbVar9;
  }
  uVar5 = *(uint *)(iVar6 + 0x70);
  uVar4 = FUN_004031f0(pbVar7,uVar5,(byte *)"ceres",5);
  if ((char)uVar4 == '\0') {
    pbVar7 = pbVar9;
    if (0xf < *(uint *)(iVar6 + 0x74)) {
      pbVar7 = *(byte **)pbVar9;
    }
    uVar4 = FUN_004031f0(pbVar7,uVar5,(byte *)"proxima",7);
    if ((char)uVar4 == '\0') {
      pbVar7 = pbVar9;
      if (0xf < *(uint *)(iVar6 + 0x74)) {
        pbVar7 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar7,uVar5,(byte *)"enceladus",9);
      if ((char)uVar4 == '\0') {
        pbVar7 = pbVar9;
        if (0xf < *(uint *)(iVar6 + 0x74)) {
          pbVar7 = *(byte **)pbVar9;
        }
        uVar4 = FUN_004031f0(pbVar7,uVar5,(byte *)"leander",7);
        if ((char)uVar4 == '\0') {
          if (0xf < *(uint *)(iVar6 + 0x74)) {
            pbVar9 = *(byte **)pbVar9;
          }
          uVar5 = FUN_004031f0(pbVar9,uVar5,(byte *)"coleman",7);
          if ((char)uVar5 != '\0') {
            iVar10 = 4;
          }
        }
        else {
          iVar10 = 3;
        }
      }
      else {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = 2;
    }
  }
  else {
    iVar10 = 4;
  }
  if (*(char *)(*(int *)(*(int *)((int)local_18 + 0x24) + 0x44) + 0x15d) != '\0') {
    local_28 = 0.0;
    local_24 = 0.0;
    local_8 = 2;
    fVar3 = cocos2d::Vec2::getDistance
                      ((Vec2 *)(*(int *)((int)local_18 + 0x24) + 0x118),(Vec2 *)&local_28);
    if (fVar3 == 0.0) {
      iVar8 = uVar2 + 0xc;
    }
    else {
      iVar8 = uVar2 + 0xb;
    }
  }
  ExceptionList = local_10;
  return iVar10 + iVar8;
}


void __thiscall FUN_004fe470(void *this,void *param_1)

{
  int *this_00;
  void *pvVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this_00 = *(int **)((int)this + 0x54);
  if (*(int **)((int)this + 0x58) == this_00) {
    FUN_00403840((void *)((int)this + 0x50),this_00,&param_1);
  }
  else {
    FUN_004024e0(this_00,&param_1);
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 0x18;
  }
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fe510(void *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint in_stack_ffffff8c;
  undefined4 *puVar7;
  void *in_stack_ffffff90;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  int local_34;
  float local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c026a;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c = 0;
  local_8 = 0;
  iVar5 = 0;
  iVar4 = *(int *)((int)param_1 + 0x24);
  local_34 = 0;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x44) + 0x128);
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (*(int *)((int)param_1 + 0x48) == 0) {
    if ((iVar3 == 0) &&
       (local_38 = 0,
       *(int *)(*(int *)(iVar4 + 0x44) + 0x130) - *(int *)(*(int *)(iVar4 + 0x44) + 300) >> 2 != 0))
    {
      do {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x44) + 300) + local_38 * 4);
        if ((*(int *)(iVar4 + 0x130) != 0) &&
           (pbVar1 = FUN_004143f0(*(byte **)((int)param_1 + 0x50),*(byte **)((int)param_1 + 0x54),
                                  (byte *)(iVar4 + 0x90)), iVar5 = local_34,
           pbVar1 == *(byte **)((int)param_1 + 0x54))) {
          if ((*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0xb8) == '\0') &&
             (uVar2 = FUN_00511860(*(int *)(iVar4 + 0x130)), (char)uVar2 == '\0')) {
            puVar7 = (undefined4 *)(in_stack_ffffff8c & 0xffffff00);
            FUN_00402690(&stack0xffffff8c,"Ignoring vessel \'%s\' as it has no cargo we can detect."
                         ,0x36);
            FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar7);
            FUN_004024e0(&stack0xffffff90,(undefined4 *)(*(int *)(iVar4 + 0x130) + 0x238));
            in_stack_ffffff8c = 0x4fe657;
            FUN_004fe470(param_1,in_stack_ffffff90);
            iVar5 = local_34;
          }
          else {
            local_40 = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x28);
            local_3c = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x30);
            local_48 = (float)((double)*(float *)(iVar4 + 0x104) + *(double *)(iVar4 + 0x10));
            local_44 = (float)((double)*(float *)(iVar4 + 0x108) + *(double *)(iVar4 + 0x18));
            local_8._0_1_ = 2;
            fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_48,(Vec2 *)&local_40);
            local_30 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
            local_8 = (uint)local_8._1_3_ << 8;
            if (((*(int *)(&DAT_005df30c +
                          *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x78) * 4) == 0)
                || (iVar5 = local_34,
                   (1.5 - fVar6 * 0.5 * local_30 * local_30) * local_30 * fVar6 <=
                   (float)*(int *)(&DAT_005df30c +
                                  *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x78) *
                                  4))) &&
               ((iVar3 = FUN_004fe100(param_1,iVar4), local_34 == 0 || (iVar5 = local_34, 0 < iVar3)
                ))) {
              iVar5 = iVar4;
              local_34 = iVar4;
            }
          }
        }
        iVar4 = *(int *)((int)param_1 + 0x24);
        local_38 = local_38 + 1;
      } while (local_38 <
               (uint)(*(int *)(*(int *)(iVar4 + 0x44) + 0x130) -
                      *(int *)(*(int *)(iVar4 + 0x44) + 300) >> 2));
      if (iVar5 != 0) {
        *(undefined4 *)((int)param_1 + 0x20) = 0x40000000;
        *(int *)((int)param_1 + 0x48) = iVar5;
        FUN_00591070(&DAT_0060dfc4,"%s: selected possible piracy target, %s");
      }
    }
  }
  else if ((iVar3 == 0) && (*(float *)(*(int *)((int)param_1 + 0x48) + 0x40) <= 120.0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 0x40000000;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004fe7f0(void *param_1)

{
  int iVar1;
  float fVar2;
  float fStack00000004;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c02a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)param_1 + 0x4c) == 0) {
    FUN_004fed00(param_1);
  }
  else if (*(int *)((int)param_1 + 0x4c) == 1) {
    *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x50) = 0;
    local_18 = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x28);
    local_14 = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x30);
    iVar1 = *(int *)((int)param_1 + 0x48);
    local_20 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
    local_1c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
    local_8 = 1;
    fVar2 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&local_18);
    fStack00000004 = (float)(0x5f3759df - ((uint)fVar2 >> 1));
    local_8 = 0xffffffff;
    fVar2 = (1.5 - fVar2 * 0.5 * fStack00000004 * fStack00000004) * fStack00000004 * fVar2;
    if (*(float *)((int)param_1 + 0x40) <= fVar2 && fVar2 != *(float *)((int)param_1 + 0x40)) {
      FUN_00591070(&DAT_0060dfc4,
                   "%s: My target distance is increasing. We should be more or less behind him, time to approach as quietly as we can."
                  );
      *(undefined4 *)((int)param_1 + 0x4c) = 0;
      *(undefined4 *)((int)param_1 + 0x30) = 0;
      FUN_00591070(&DAT_0060dfc4,"%s: changing piracy state to %s");
      iVar1 = *(int *)((int)param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0x380) = *(undefined4 *)(*(int *)((int)param_1 + 0x48) + 0x130);
      *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
      *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fe9b0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint in_stack_ffffffb8;
  undefined4 *puVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &param_1_005c02db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  puVar5 = (undefined4 *)(in_stack_ffffffb8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,"Entering piracy mode.",0x15);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar5);
  iVar2 = FUN_00505e40(*(int *)(*(int *)(param_1 + 0x24) + 0x44));
  *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x5c) = iVar2;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x15d) == '\0') {
LAB_004feaa2:
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00591070(&DAT_0060dfc4,"%s: changing piracy state to %s");
    iVar2 = *(int *)(param_1 + 0x24);
    local_18 = 0xc61c3c00;
    local_14 = -9999.0;
    *(undefined4 *)(iVar2 + 0x380) = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x130);
    *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
    *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  }
  else {
    local_18 = 0;
    local_14 = 0.0;
    local_8 = 0;
    local_14 = cocos2d::Vec2::getDistance
                         ((Vec2 *)(*(int *)(param_1 + 0x24) + 0x118),(Vec2 *)&local_18);
    local_8 = 0xffffffff;
    if ((local_14 != 0.0) || (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x74) == 3))
    goto LAB_004feaa2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    FUN_00591070(&DAT_0060dfc4,"%s: changing piracy state to %s");
  }
  local_20 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x28);
  local_1c = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x30);
  iVar2 = *(int *)(param_1 + 0x48);
  local_28 = (float)((double)*(float *)(iVar2 + 0x104) + *(double *)(iVar2 + 0x10));
  local_24 = (float)((double)*(float *)(iVar2 + 0x108) + *(double *)(iVar2 + 0x18));
  local_8 = 2;
  fVar4 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
  iVar2 = DAT_0065b5cc;
  local_14 = (float)(0x5f3759df - ((uint)fVar4 >> 1));
  *(float *)(param_1 + 0x40) = (1.5 - fVar4 * 0.5 * local_14 * local_14) * local_14 * fVar4;
  if (*(char *)(*(int *)(iVar2 + 0xcc) + 0xb8) == '\0') {
    uVar3 = FUN_004105a0(*(int *)(*(int *)(param_1 + 0x24) + 0x20));
    uVar1 = 0;
    if ((char)uVar3 == '\0') goto LAB_004febe7;
  }
  uVar1 = 1;
LAB_004febe7:
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004fec10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_ffffffc8;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,"Leaving piracy mode.",0x14);
  FUN_0050ae50(*(undefined4 *)(param_1 + 0x24),puVar4);
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(int *)(*(int *)(iVar2 + 0x40) + 0x20) != 0) {
    iVar3 = 0x3c;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(*(int *)(iVar2 + 0x40) + 0x20));
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) != '\0')) {
        FUN_00591070("DETAIL","%s: I have shut down.");
        *(undefined1 *)(iVar1 + 0x3c5) = 0;
        *(undefined1 *)(iVar1 + 0x3cc) = 1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x5c);
    iVar2 = *(int *)(param_1 + 0x24);
  }
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0x380) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


void __fastcall FUN_004fed00(void *param_1)

{
  int iVar1;
  byte ***pppbVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  byte ****ppppbVar9;
  int *piVar10;
  byte ****ppppbVar11;
  void *pvVar12;
  uint uVar13;
  int extraout_EDX;
  uint uVar14;
  float fVar15;
  undefined1 *in_XMM1_Da;
  uint in_stack_ffffff54;
  char *pcVar16;
  undefined4 *in_stack_ffffff68;
  uint uVar17;
  byte *in_stack_ffffff6c;
  float local_68;
  float local_64;
  float local_60;
  byte *local_5c;
  float local_58;
  undefined1 *local_54;
  uint local_50;
  float local_4c;
  undefined1 *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0342;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = in_XMM1_Da;
  if ((*(int *)((int)param_1 + 0x24) == 0) ||
     (iVar8 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x44), iVar8 == 0)) {
    FUN_00591070("ERROR","Invalid ship for behaviour logic AIPiracy");
    goto LAB_004ff7b8;
  }
  if (*(int *)((int)param_1 + 0x48) == 0) goto LAB_004ff7b8;
  *(undefined1 *)(iVar8 + 0x50) = 0;
  *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x58) = 0;
  fVar15 = *(float *)((int)param_1 + 0x30) + (float)in_XMM1_Da;
  *(float *)((int)param_1 + 0x30) = fVar15;
  if (fVar15 <= 120.0) {
    local_4c = (float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x28);
    local_48 = (undefined1 *)(float)*(double *)(*(int *)((int)param_1 + 0x24) + 0x30);
    iVar8 = *(int *)((int)param_1 + 0x48);
    local_68 = (float)((double)*(float *)(iVar8 + 0x104) + *(double *)(iVar8 + 0x10));
    fVar15 = (float)((double)*(float *)(iVar8 + 0x108) + *(double *)(iVar8 + 0x18));
    local_8 = 1;
    local_64 = fVar15;
    FUN_00591010((Vec2 *)&local_68,(Vec2 *)&local_4c);
    local_8 = 0xffffffff;
    iVar8 = *(int *)((int)param_1 + 0x24);
    if (20.0 <= fVar15) {
      if (*(int *)(iVar8 + 0x380) == 0) {
        *(undefined4 *)(iVar8 + 0x380) = *(undefined4 *)(*(int *)((int)param_1 + 0x48) + 0x130);
        goto LAB_004fee7a;
      }
    }
    else {
      *(undefined4 *)(iVar8 + 0x380) = 0;
LAB_004fee7a:
      local_4c = -9999.0;
      *(undefined4 *)(iVar8 + 200) = 0xc61c3c00;
      local_48 = (undefined1 *)0xc61c3c00;
      *(undefined4 *)(iVar8 + 0xcc) = 0xc61c3c00;
    }
    local_60 = fVar15;
    FUN_004024e0(local_2c,(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x48) + 0x130) + 0x238));
    iVar8 = *(int *)((int)param_1 + 0x24);
    local_50 = 0;
    pbVar6 = *(byte **)(iVar8 + 0x214);
    local_48 = (undefined1 *)(*(int *)(iVar8 + 0x218) - (int)pbVar6 >> 2);
    ppppbVar9 = (byte ****)local_2c[0];
    local_5c = pbVar6;
    if (local_48 != (undefined1 *)0x0) {
      do {
        pppbVar2 = local_2c[0];
        local_64 = *(float *)(pbVar6 + local_50 * 4);
        if (*(int *)((int)local_64 + 0xe0) == 6) {
          uVar13 = 0;
          piVar10 = *(int **)(*(int *)(iVar8 + 0x24) + 0x9c);
          uVar17 = *(int *)(*(int *)(iVar8 + 0x24) + 0xa0) - (int)piVar10 >> 2;
          if (uVar17 != 0) {
            do {
              iVar8 = *piVar10;
              ppppbVar9 = (byte ****)pppbVar2;
              if (*(int *)(iVar8 + 0x44) == *(int *)((int)local_64 + 4)) {
                if (iVar8 == 0) break;
                ppppbVar11 = local_2c;
                if (0xf < local_18) {
                  ppppbVar11 = (byte ****)local_2c[0];
                }
                uVar17 = FUN_004031f0((byte *)ppppbVar11,local_1c,(byte *)&PTR_005ce008,0);
                if ((char)uVar17 == '\0') {
                  pbVar6 = (byte *)(iVar8 + 0x68);
                  if (0xf < *(uint *)(iVar8 + 0x7c)) {
                    pbVar6 = *(byte **)(iVar8 + 0x68);
                  }
                  ppppbVar11 = local_2c;
                  if (0xf < local_18) {
                    ppppbVar11 = (byte ****)pppbVar2;
                  }
                  uVar17 = FUN_004031f0((byte *)ppppbVar11,local_1c,pbVar6,*(uint *)(iVar8 + 0x78));
                  if ((char)uVar17 == '\0') break;
                }
                if (0xf < local_18) {
                  if ((0xfff < local_18 + 1) &&
                     (ppppbVar9 = (byte ****)pppbVar2[-1],
                     (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar9)))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_005adb3f(ppppbVar9);
                }
                in_stack_ffffff68 = (undefined4 *)((uint)in_stack_ffffff68 & 0xffffff00);
                FUN_00402690(&stack0xffffff68,"Ignoring vessel \'%s\' as they\'ve dropped cargo.",
                             0x2e);
                FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),in_stack_ffffff68);
                iVar8 = 0x3c;
                do {
                  piVar10 = *(int **)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20
                                              ) + iVar8);
                  if ((piVar10 != (int *)0x0) && ((char)piVar10[0xf1] != '\0')) {
                    (**(code **)(*piVar10 + 0x10))();
                  }
                  iVar8 = iVar8 + 4;
                } while (iVar8 < 0x5c);
                FUN_004024e0(&stack0xffffff6c,
                             (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x48) + 0x130) + 0x238)
                            );
                FUN_004fe470(param_1,in_stack_ffffff6c);
                puVar7 = (undefined4 *)((uint)in_stack_ffffff6c & 0xffffff00);
                FUN_00402690(&stack0xffffff6c,"Prey dropped cargo. A wise choice.",0x22);
                FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar7);
                local_54 = &stack0xffffff6c;
                FUN_00402690(&stack0xffffff6c,"A wise choice.",0xe);
                local_8 = 2;
                puVar7 = (undefined4 *)(in_stack_ffffff54 & 0xffffff00);
                FUN_00402690(&stack0xffffff54,"XX-XXX",6);
                local_8 = 0xffffffff;
                FUN_005199a0(*(void **)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x3c),3,
                             puVar7);
                *(undefined4 *)((int)param_1 + 0x48) = 0;
                goto LAB_004ff7b8;
              }
              uVar13 = uVar13 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar13 < uVar17);
          }
          iVar8 = *(int *)((int)param_1 + 0x24);
          pbVar6 = local_5c;
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_48);
    }
    ppppbVar11 = ppppbVar9;
    if (0xf < local_18) {
      if ((0xfff < local_18 + 1) &&
         (ppppbVar11 = (byte ****)ppppbVar9[-1],
         (byte *)0x1f < (byte *)((int)ppppbVar9 + (-4 - (int)ppppbVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar11);
    }
    uVar17 = (uint)ppppbVar11 & 0xffffff00;
    piVar10 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20);
    local_50 = uVar17;
    if (((piVar10 != (int *)0x0) && (cVar3 = (**(code **)(*piVar10 + 0x10))(), cVar3 != '\0')) &&
       (iVar8 = *(int *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20) + 0x3c +
                        *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x5c) * 4),
       iVar8 != 0)) {
      uVar17 = (uint)(*(char *)(iVar8 + 0x3bc) != '\0');
      local_50 = uVar17;
    }
    cVar3 = (char)uVar17;
    if (*(char *)((int)param_1 + 0x3c) == '\0') {
      if (cVar3 != '\0') {
        piVar10 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20);
        if ((piVar10 != (int *)0x0) && (cVar4 = (**(code **)(*piVar10 + 0x10))(), cVar4 != '\0')) {
          *(undefined1 *)((int)param_1 + 0x3c) = 1;
          in_stack_ffffff68 = (undefined4 *)((uint)in_stack_ffffff68 & 0xffffff00);
          FUN_00402690(&stack0xffffff68,"Spun up my weapon in tube %d.",0x1d);
          FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),in_stack_ffffff68);
        }
        goto LAB_004ff1d7;
      }
LAB_004ff1db:
      *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x50) = 1;
      *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x58) = 1;
    }
    else {
LAB_004ff1d7:
      if (cVar3 == '\0') goto LAB_004ff1db;
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x44);
      if (80.0 <= local_60) {
        *(undefined1 *)(iVar8 + 0x50) = 1;
      }
      else {
        *(undefined1 *)(iVar8 + 0x50) = 0;
      }
    }
    if ((*(char *)((int)param_1 + 0x3d) == '\0') &&
       ((*(float *)(&DAT_005df5d8 +
                   *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x74) * 4) == -1.0 ||
        (local_60 <=
         *(float *)(&DAT_005df5d8 +
                   *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x74) * 4) * 1.5)))) {
      *(undefined1 *)((int)param_1 + 0x3d) = 1;
      in_stack_ffffff6c = (byte *)((uint)in_stack_ffffff6c & 0xffffff00);
      FUN_00402690(&stack0xffffff6c,"Warned target.",0xe);
      FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),(undefined4 *)in_stack_ffffff6c);
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      local_8 = 3;
      iVar8 = *(int *)((int)param_1 + 0x48);
      pbVar6 = (byte *)(iVar8 + 0x48);
      if (0xf < *(uint *)(iVar8 + 0x5c)) {
        pbVar6 = *(byte **)(iVar8 + 0x48);
      }
      uVar17 = FUN_004031f0(pbVar6,*(uint *)(iVar8 + 0x58),(byte *)"Unknown",7);
      if ((char)uVar17 == '\0') {
        puVar7 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "Attention %s! Drop your cargo now or be destroyed.");
        local_8._0_1_ = 5;
      }
      else {
        puVar7 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "Attention unknown %s class vessel - drop your cargo now or be destroyed!"
                             );
        local_8._0_1_ = 4;
      }
      FUN_00403490(local_44,puVar7);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (0xf < local_18) {
        ppppbVar9 = (byte ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppbVar9 = (byte ****)local_2c[0][-1],
           (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar9)))) goto LAB_004ff328;
        FUN_005adb3f(ppppbVar9);
      }
      uVar14 = 0;
      uVar17 = (uint)local_2c[0] >> 8;
      local_2c[0] = (byte ***)(uVar17 << 8);
      local_18 = 0xf;
      local_1c = 0;
      local_48 = *(undefined1 **)(*(int *)((int)param_1 + 0x24) + 0x20);
      piVar10 = *(int **)(DAT_0065b5cc + 0x9c);
      uVar13 = *(int *)(DAT_0065b5cc + 0xa0) - (int)piVar10 >> 2;
      if (uVar13 != 0) {
        do {
          if ((*(char *)(*piVar10 + 0x18) != '\0') &&
             ((undefined1 *)**(int **)(*piVar10 + 0x1c) == local_48)) {
            FUN_004024e0(local_2c,(undefined4 *)(*piVar10 + 0x78));
            goto LAB_004ff3d3;
          }
          uVar14 = uVar14 + 1;
          piVar10 = piVar10 + 1;
        } while (uVar14 < uVar13);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (byte ***)(uVar17 << 8);
      FUN_00402690(local_2c,&PTR_005ce008,0);
LAB_004ff3d3:
      uVar17 = local_18;
      ppppbVar9 = (byte ****)local_2c[0];
      local_8 = CONCAT31(local_8._1_3_,6);
      ppppbVar11 = local_2c;
      if (0xf < local_18) {
        ppppbVar11 = (byte ****)local_2c[0];
      }
      uVar13 = FUN_004031f0((byte *)ppppbVar11,local_1c,(byte *)&PTR_005ce008,0);
      if (((((char)uVar13 == '\0') && (*(int *)((int)param_1 + 0x48) != 0)) &&
          (iVar8 = *(int *)(*(int *)((int)param_1 + 0x48) + 0x130), iVar8 != 0)) &&
         (*(char *)(iVar8 + 0x234) != '\0')) {
        std::basic_string<>::operator=((basic_string<> *)local_44,(basic_string<> *)local_2c);
        uVar17 = local_18;
        ppppbVar9 = (byte ****)local_2c[0];
      }
      local_48 = &stack0xffffff6c;
      FUN_004024e0(&stack0xffffff6c,local_44);
      local_8._0_1_ = 7;
      in_stack_ffffff68 = (undefined4 *)0x0;
      puVar7 = (undefined4 *)(in_stack_ffffff54 & 0xffffff00);
      FUN_00402690(&stack0xffffff54,"XX-XXX",6);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_005199a0(*(void **)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x3c),3,puVar7);
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x48) + 0x130);
      local_48 = *(undefined1 **)(DAT_0065b5cc + 0xd0);
      local_5c = (byte *)((int)local_48 + 0x238);
      if (0xf < *(uint *)((int)local_48 + 0x24c)) {
        local_5c = *(byte **)local_5c;
      }
      pbVar6 = (byte *)(iVar8 + 0x238);
      if (0xf < *(uint *)(iVar8 + 0x24c)) {
        pbVar6 = *(byte **)(iVar8 + 0x238);
      }
      uVar13 = FUN_004031f0(pbVar6,*(uint *)(iVar8 + 0x248),local_5c,
                            *(uint *)((int)local_48 + 0x248));
      if ((char)uVar13 != '\0') {
        FUN_00527550(*(int **)((int)local_48 + 0x224),4,"PIRATE: DROP YOUR CARGO OR BE DESTROYED.");
      }
      iVar8 = rand();
      local_8 = CONCAT31(local_8._1_3_,3);
      *(float *)((int)param_1 + 0x38) = (float)(iVar8 % 6 + 3);
      if (0xf < uVar17) {
        ppppbVar11 = ppppbVar9;
        if ((0xfff < uVar17 + 1) &&
           (ppppbVar11 = (byte ****)ppppbVar9[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar9 + (-4 - (int)ppppbVar11)))) goto LAB_004ff328;
        FUN_005adb3f(ppppbVar11);
      }
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pvVar12 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar12 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) {
LAB_004ff328:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar12);
      }
      cVar3 = (char)local_50;
    }
    if ((0.0 < *(float *)((int)param_1 + 0x38)) &&
       (fVar15 = *(float *)((int)param_1 + 0x38) - (float)local_54,
       *(float *)((int)param_1 + 0x38) = fVar15, fVar15 <= 0.0)) {
      *(undefined4 *)((int)param_1 + 0x38) = 0;
      if ((*(int *)((int)param_1 + 0x48) != 0) &&
         ((iVar8 = *(int *)(*(int *)((int)param_1 + 0x48) + 0x130), iVar8 != 0 &&
          (puVar7 = *(undefined4 **)(iVar8 + 0x44), puVar7 != (undefined4 *)0x0)))) {
        (**(code **)*puVar7)();
      }
    }
    if (*(char *)((int)param_1 + 0x3e) == '\0') {
      piVar10 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20);
      if ((piVar10 != (int *)0x0) && (cVar4 = (**(code **)(*piVar10 + 0x10))(), cVar4 != '\0')) {
        iVar8 = *(int *)((int)param_1 + 0x24);
        if (((*(float *)(&DAT_005df5d8 + *(int *)(*(int *)(iVar8 + 0x44) + 0x74) * 4) == -1.0) ||
            (local_60 <= *(float *)(&DAT_005df5d8 + *(int *)(*(int *)(iVar8 + 0x44) + 0x74) * 4)))
           && (cVar3 != '\0')) {
          bVar5 = FUN_004ae570(*(void **)(*(int *)(iVar8 + 0x40) + 0x20),
                               *(uint *)(*(int *)(iVar8 + 0x44) + 0x5c));
          if (bVar5) {
            *(undefined1 *)((int)param_1 + 0x3e) = 1;
            iVar1 = *(int *)(*(int *)((int)param_1 + 0x48) + 0x130);
            *(uint *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x40) + 0x20) + 0x3c +
                              *(int *)(*(int *)(iVar8 + 0x44) + 0x5c) * 4) + 0x38c) =
                 -(uint)(iVar1 != 0) & iVar1 + 8U;
            iVar8 = *(int *)((int)param_1 + 0x48);
            local_58 = (float)((double)*(float *)(iVar8 + 0x104) + *(double *)(iVar8 + 0x10));
            local_54 = (undefined1 *)
                       (float)((double)*(float *)(iVar8 + 0x108) + *(double *)(iVar8 + 0x18));
            iVar8 = *(int *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x40) + 0x20) + 0x3c
                            + *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x5c) * 4);
            *(float *)(iVar8 + 300) = local_58;
            *(undefined1 **)(iVar8 + 0x130) = local_54;
            FUN_0050fa00(*(void **)((int)param_1 + 0x24),
                         *(int *)(*(int *)((int)*(void **)((int)param_1 + 0x24) + 0x44) + 0x5c));
            in_stack_ffffff6c = (byte *)((uint)in_stack_ffffff6c & 0xffffff00);
            FUN_00402690(&stack0xffffff6c,"Fired a torpedo at my target.",0x1d);
            FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),(undefined4 *)in_stack_ffffff6c);
          }
          else {
            iVar8 = FUN_00505e40(extraout_EDX);
            *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 0x5c) = iVar8;
            in_stack_ffffff68 = (undefined4 *)((uint)in_stack_ffffff68 & 0xffffff00);
            FUN_00402690(&stack0xffffff68,"Had an invalid weapon selected Changing over to tube %d",
                         0x37);
            FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),in_stack_ffffff68);
          }
        }
      }
      if (*(char *)((int)param_1 + 0x3e) == '\0') goto LAB_004ff7b8;
    }
    in_stack_ffffff6c = (byte *)((uint)in_stack_ffffff6c & 0xffffff00);
    FUN_00402690(&stack0xffffff6c,&PTR_005ce008,0);
    cVar3 = FUN_0050f630(*(void **)((int)param_1 + 0x24),in_stack_ffffff6c);
    if (cVar3 != '\0') goto LAB_004ff7b8;
    FUN_004024e0(&stack0xffffff6c,
                 (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x48) + 0x130) + 0x238));
    FUN_004fe470(param_1,in_stack_ffffff6c);
    uVar17 = 0x3c;
    pcVar16 = "Giving up on this piracy target. Already wasted one torpedo.";
  }
  else {
    FUN_004024e0(&stack0xffffff6c,
                 (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x48) + 0x130) + 0x238));
    FUN_004fe470(param_1,in_stack_ffffff6c);
    uVar17 = 0x47;
    pcVar16 = "Giving up on this piracy target. They\'re giving up too much of a chase.";
  }
  puVar7 = (undefined4 *)((uint)in_stack_ffffff6c & 0xffffff00);
  FUN_00402690(&stack0xffffff6c,pcVar16,uVar17);
  FUN_0050ae50(*(undefined4 *)((int)param_1 + 0x24),puVar7);
  *(undefined4 *)((int)param_1 + 0x48) = 0;
LAB_004ff7b8:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004ff7e0(void *this,int param_1)

{
  int iVar1;
  
  if (((*(int *)((int)this + 0x48) != 0) &&
      (iVar1 = *(int *)(*(int *)((int)this + 0x48) + 0x130), iVar1 != 0)) && (iVar1 + 8 == param_1))
  {
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  if (*(int *)((int)this + 0x28) == param_1) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}


void __thiscall FUN_004ff820(void *this,int param_1)

{
  if (param_1 == *(int *)((int)this + 0x48)) {
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  return;
}


undefined1 * __thiscall FUN_004ff840(void *this,undefined1 *param_1)

{
  if (*(int *)((int)this + 0x48) != 0) {
    FUN_00591e00(param_1,"Piracy from %s (%s)");
    return param_1;
  }
  FUN_00591e00(param_1,"Piracy without a target (%s)");
  return param_1;
}


void __fastcall FUN_004ff8b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  float fVar7;
  void *local_48 [5];
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c03ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
LAB_004ff8e4:
    *(undefined4 *)(param_1 + 0x20) = 0x40000000;
    ExceptionList = local_10;
    return;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  local_14 = 0;
  if (*(int *)(iVar4 + 0x218) - *(int *)(iVar4 + 0x214) >> 2 != 0) {
    do {
      iVar1 = local_14 * 4;
      iVar2 = *(int *)(iVar1 + *(int *)(iVar4 + 0x214));
      if ((*(float *)(iVar2 + 0x118) == 0.0) && (iVar3 = *(int *)(iVar2 + 0x130), iVar3 != 0)) {
        bVar6 = false;
        if (*(int *)(iVar3 + 0x254) != 0) {
          bVar6 = *(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 0;
        }
        if ((bVar6) && (*(float *)(iVar2 + 0x40) <= 0.5)) {
          if (*(char *)(iVar3 + 0x234) == '\0') {
            if (*(int *)(iVar3 + 0x44) == 0) {
              bVar6 = false;
            }
            else {
              iVar2 = *(int *)(*(int *)(iVar3 + 0x44) + 0x70);
              if ((((iVar2 == 6) || (iVar2 == 0)) || (iVar2 == 1)) || (iVar2 == 2))
              goto LAB_004ff9b6;
              bVar6 = false;
            }
          }
          else {
LAB_004ff9b6:
            bVar6 = true;
          }
          if (bVar6) {
            local_28 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x28);
            local_24 = (float)*(double *)(*(int *)(param_1 + 0x24) + 0x30);
            local_20 = local_1c | 1;
            iVar4 = *(int *)(*(int *)(iVar1 + *(int *)(iVar4 + 0x214)) + 0x130);
            local_30 = (float)*(double *)(iVar4 + 0x28);
            fVar7 = (float)*(double *)(iVar4 + 0x30);
            local_8 = 1;
            local_1c = local_1c | 3;
            local_2c = fVar7;
            local_18 = iVar1;
            FUN_00591010((Vec2 *)&local_30,(Vec2 *)&local_28);
            if (70.0 < fVar7) {
LAB_004ffadd:
              bVar6 = false;
            }
            else {
              FUN_004024e0(local_48,(undefined4 *)
                                    (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x214) +
                                                      iVar1) + 0x130) + 0x238));
              local_8 = 2;
              this = FUN_004122d0();
              local_8 = CONCAT31(local_8._1_3_,1);
              iVar4 = FUN_004a8d60(this,(byte *)local_48);
              if (iVar4 != 0) {
                if (0xf < local_34) {
                  pvVar5 = local_48[0];
                  if (0xfff < local_34 + 1) {
                    pvVar5 = *(void **)((int)local_48[0] + -4);
                    if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar5))) goto LAB_004ffb4c;
                  }
                  FUN_005adb3f(pvVar5);
                }
                goto LAB_004ffadd;
              }
              if (0xf < local_34) {
                pvVar5 = local_48[0];
                if (0xfff < local_34 + 1) {
                  pvVar5 = *(void **)((int)local_48[0] + -4);
                  if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar5))) {
LAB_004ffb4c:
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FUN_005adb3f(pvVar5);
              }
              bVar6 = true;
            }
            local_1c = local_20 & 0xfffffffc;
            if (bVar6) {
              *(undefined4 *)(param_1 + 0x34) =
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x214) + iVar1) + 0x130);
            }
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0x24);
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(iVar4 + 0x218) - *(int *)(iVar4 + 0x214) >> 2));
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_004ff8e4;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004ffb60(void *this,float param_1)

{
  undefined1 *this_00;
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 ****ppppuVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  float fVar10;
  undefined4 *in_stack_ffffff48;
  undefined4 *in_stack_ffffff60;
  byte *in_stack_ffffff78;
  char *pcVar11;
  float local_64;
  undefined1 *local_60;
  float local_5c;
  undefined1 *local_58;
  int *local_54;
  byte *local_50;
  byte *local_4c;
  char local_46;
  char local_45;
  void *local_44 [5];
  uint local_30;
  undefined4 ***local_2c;
  undefined4 **ppuStack_28;
  undefined4 **ppuStack_24;
  undefined4 **ppuStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0497;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)((int)this + 0x24);
  if (*(char *)(*(int *)(iVar2 + 0x40) + 0x34) == '\0') {
    *(undefined1 *)(*(int *)(iVar2 + 0x40) + 0x34) = 1;
    iVar2 = *(int *)((int)this + 0x24);
  }
  *(undefined1 *)(*(int *)(iVar2 + 0x44) + 0x50) = 1;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x58) = 0;
  iVar2 = *(int *)((int)this + 0x34);
  if (iVar2 == 0) goto LAB_00500666;
  local_64 = (float)*(double *)(*(int *)((int)this + 0x24) + 0x28);
  local_60 = (undefined1 *)(float)*(double *)(*(int *)((int)this + 0x24) + 0x30);
  local_5c = (float)*(double *)(iVar2 + 0x28);
  local_58 = (undefined1 *)(float)*(double *)(iVar2 + 0x30);
  local_8 = 1;
  local_54 = (int *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_5c,(Vec2 *)&local_64);
  local_4c = (byte *)(0x5f3759df - ((uint)local_54 >> 1));
  local_8 = 0xffffffff;
  if ((25.0 <= (1.5 - (float)local_54 * 0.5 * (float)local_4c * (float)local_4c) * (float)local_4c *
               (float)local_54) ||
     (fVar10 = *(float *)((int)this + 0x30) - param_1, *(float *)((int)this + 0x30) = fVar10,
     0.0 < fVar10)) goto LAB_00500666;
  iVar2 = *(int *)((int)this + 0x24);
  uVar8 = 0;
  local_54 = (int *)0x0;
  local_45 = '\0';
  if (*(int *)(*(int *)(iVar2 + 0x24) + 0x110) - *(int *)(*(int *)(iVar2 + 0x24) + 0x10c) >> 2 != 0)
  {
    do {
      pvVar4 = *(void **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x24) + 0x10c) + uVar8 * 4) + 0x18);
      if ((pvVar4 == (void *)0x0) ||
         (cVar1 = FUN_004a23b0(pvVar4,*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8)),
         cVar1 != '\0')) {
        FUN_004024e0(&stack0xffffff78,
                     *(undefined4 **)
                      (*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x24) + 0x10c) + uVar8 * 4));
        local_54 = (int *)FUN_004a8380(in_stack_ffffff78);
        if ((local_54 != (int *)0x0) &&
           ((pvVar4 = *(void **)(*(int *)((int)this + 0x34) + 0x1f8), pvVar4 != (void *)0x0 &&
            (iVar2 = FUN_005073a0(pvVar4,*local_54), 0 < iVar2)))) {
          local_45 = '\x01';
          break;
        }
      }
      iVar2 = *(int *)((int)this + 0x24);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(*(int *)(iVar2 + 0x24) + 0x110) -
                            *(int *)(*(int *)(iVar2 + 0x24) + 0x10c) >> 2));
  }
  iVar2 = *(int *)((int)this + 0x34);
  if (*(char *)(iVar2 + 0x234) != '\0') {
    local_58 = &stack0xffffff78;
    in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
    FUN_00402690(&stack0xffffff78,"times_scanned",0xd);
    local_8 = 2;
    uVar7 = extraout_ECX;
    if (DAT_0065c294 == 0) {
      local_50 = (byte *)FUN_005adb0f(0x28);
      local_8 = CONCAT31(local_8._1_3_,3);
      DAT_0065c294 = FUN_0051e500((undefined4 *)local_50);
      uVar7 = extraout_ECX_00;
    }
    local_8 = 0xffffffff;
    FUN_0051e750(uVar7,in_stack_ffffff78);
    iVar2 = *(int *)((int)this + 0x34);
  }
  local_46 = '\0';
  if ((*(int *)(iVar2 + 0x40) == 0) || (*(char *)(*(int *)(iVar2 + 0x40) + 0x34) != '\0')) {
    if (*(int *)(iVar2 + 0x44) != 0) {
      if (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) != 2) {
        pbVar9 = (byte *)(iVar2 + 8);
        if (0xf < *(uint *)(iVar2 + 0x1c)) {
          pbVar9 = *(byte **)(iVar2 + 8);
        }
        uVar8 = FUN_004031f0(pbVar9,*(uint *)(iVar2 + 0x18),(byte *)"pirate",6);
        if ((char)uVar8 == '\0') goto LAB_004ffe1f;
      }
      goto LAB_004ffe15;
    }
  }
  else {
LAB_004ffe15:
    local_46 = '\x01';
  }
LAB_004ffe1f:
  local_1c = 0xf00000000;
  local_2c = (undefined4 ***)((uint)local_2c & 0xffffff00);
  local_8 = 4;
  if (local_46 == '\0') {
    if (local_45 != '\0') {
      piVar3 = (int *)FUN_00591e00((undefined1 *)local_44,
                                   "Attention %s - contraband detected. A fine is being issued.");
      FUN_00413230(&local_2c,piVar3);
      if (0xf < local_30) {
        pvVar4 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar4 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) goto LAB_004ffecc;
        FUN_005adb3f(pvVar4);
      }
      local_60 = &stack0xffffff78;
      FUN_004024e0(&stack0xffffff78,&local_2c);
      local_8._0_1_ = 7;
      FUN_004024e0(&stack0xffffff60,(undefined4 *)(*(int *)((int)this + 0x24) + 0x238));
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005199a0(*(void **)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x3c),1,
                   in_stack_ffffff60);
      goto LAB_005002ab;
    }
LAB_005004e9:
    ppppuVar6 = (undefined4 ****)
                FUN_00591e00((undefined1 *)local_44,"Scans are clean. Travel safely, %s");
    if (&local_2c != ppppuVar6) {
      FUN_00401b20((int *)&local_2c);
      local_2c = *ppppuVar6;
      ppuStack_28 = ppppuVar6[1];
      ppuStack_24 = ppppuVar6[2];
      ppuStack_20 = ppppuVar6[3];
      local_1c = *(undefined8 *)(ppppuVar6 + 4);
      ppppuVar6[4] = (undefined4 ***)0x0;
      ppppuVar6[5] = (undefined4 ***)0xf;
      *(undefined1 *)ppppuVar6 = 0;
    }
    if (0xf < local_30) {
      pvVar4 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar4 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) goto LAB_004ffecc;
      FUN_005adb3f(pvVar4);
    }
    local_60 = &stack0xffffff78;
    FUN_004024e0(&stack0xffffff78,&local_2c);
    local_8._0_1_ = 0x14;
    FUN_004024e0(&stack0xffffff60,(undefined4 *)(*(int *)((int)this + 0x24) + 0x238));
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_005199a0(*(void **)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x3c),1,in_stack_ffffff60)
    ;
    iVar2 = *(int *)((int)this + 0x34);
    if (*(char *)(iVar2 + 0x234) != '\0') {
      ppppuVar6 = &local_2c;
      if (0xf < local_1c._4_4_) {
        ppppuVar6 = (undefined4 ****)local_2c;
      }
      FUN_00527550(*(int **)(iVar2 + 0x224),3,ppppuVar6);
      iVar2 = *(int *)((int)this + 0x34);
    }
    local_60 = &stack0xffffff78;
    FUN_004024e0(&stack0xffffff78,(undefined4 *)(iVar2 + 0x238));
    local_8._0_1_ = 0x15;
    puVar5 = FUN_004122d0();
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004a89a0(puVar5,in_stack_ffffff78);
    puVar5 = (undefined4 *)((uint)in_stack_ffffff78 & 0xffffff00);
    FUN_00402690(&stack0xffffff78,"Scanned vessel and found nothing. Moving on with my patrol.",0x3b
                );
    FUN_0050ae50(*(undefined4 *)((int)this + 0x24),puVar5);
  }
  else {
    if (local_45 == '\0') {
      if (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 2) {
LAB_005001b0:
        ppppuVar6 = (undefined4 ****)
                    FUN_00591e00((undefined1 *)local_44,
                                 "Attention unknown %s - you are travelling with your IFF off. A fine will be issued. Do not do this again."
                                );
        if (&local_2c != ppppuVar6) {
          FUN_00401b20((int *)&local_2c);
          local_2c = *ppppuVar6;
          ppuStack_28 = ppppuVar6[1];
          ppuStack_24 = ppppuVar6[2];
          ppuStack_20 = ppppuVar6[3];
          local_1c = *(undefined8 *)(ppppuVar6 + 4);
          ppppuVar6[4] = (undefined4 ***)0x0;
          ppppuVar6[5] = (undefined4 ***)0xf;
          *(undefined1 *)ppppuVar6 = 0;
        }
      }
      else {
        local_58 = *(undefined1 **)(iVar2 + 0x1c);
        local_4c = (byte *)(iVar2 + 8);
        pbVar9 = local_4c;
        if (&DAT_0000000f < local_58) {
          pbVar9 = *(byte **)local_4c;
        }
        uVar8 = FUN_004031f0(pbVar9,*(uint *)(iVar2 + 0x18),(byte *)"pirate",6);
        if ((char)uVar8 != '\0') goto LAB_005001b0;
        piVar3 = (int *)FUN_00591e00((undefined1 *)local_44,
                                     "Attention %s - you are travelling with your IFF off. A fine will be issued. Do not do this again."
                                    );
        FUN_00413230(&local_2c,piVar3);
      }
      if (0xf < local_30) {
        pvVar4 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar4 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) goto LAB_004ffecc;
        FUN_005adb3f(pvVar4);
      }
      local_58 = &stack0xffffff78;
      FUN_004024e0(&stack0xffffff78,&local_2c);
      local_8._0_1_ = 6;
    }
    else {
      if (*(int *)(*(int *)(iVar2 + 0x44) + 0x70) == 2) {
LAB_004ffed2:
        pcVar11 = 
        "Attention unknown %s - you are travelling with your IFF off AND carrying contraband. A fine will be issued. Do not do this again."
        ;
      }
      else {
        local_58 = *(undefined1 **)(iVar2 + 0x1c);
        local_4c = (byte *)(iVar2 + 8);
        pbVar9 = local_4c;
        if (&DAT_0000000f < local_58) {
          pbVar9 = *(byte **)local_4c;
        }
        uVar8 = FUN_004031f0(pbVar9,*(uint *)(iVar2 + 0x18),(byte *)"pirate",6);
        if ((char)uVar8 != '\0') goto LAB_004ffed2;
        pcVar11 = 
        "Attention %s - you are travelling with your IFF off AND carrying contraband. A fine will be issued. Do not do this again."
        ;
      }
      piVar3 = (int *)FUN_00591e00((undefined1 *)local_44,pcVar11);
      FUN_00413230(&local_2c,piVar3);
      if (0xf < local_30) {
        pvVar4 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar4 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) goto LAB_004ffecc;
        FUN_005adb3f(pvVar4);
      }
      local_58 = &stack0xffffff78;
      FUN_004024e0(&stack0xffffff78,&local_2c);
      local_8._0_1_ = 5;
    }
    FUN_004024e0(&stack0xffffff60,(undefined4 *)(*(int *)((int)this + 0x24) + 0x238));
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_005199a0(*(void **)(*(int *)(*(int *)((int)this + 0x24) + 0x44) + 0x3c),1,in_stack_ffffff60)
    ;
    local_4c = (byte *)0x0;
    FUN_004024e0(&stack0xffffff78,(undefined4 *)(*(int *)(*(int *)((int)this + 0x24) + 0x24) + 0xf0)
                );
    pvVar4 = (void *)FUN_004a6de0(in_stack_ffffff78);
    iVar2 = *(int *)((int)this + 0x34);
    if (*(char *)(iVar2 + 0x234) != '\0') {
      if (pvVar4 != (void *)0x0) {
        local_4c = (byte *)FUN_0051f090(*(int *)(*(int *)((int)this + 0x24) + 0x24));
        FUN_0051ba50(pvVar4,0x32);
        iVar2 = *(int *)((int)this + 0x34);
      }
      ppppuVar6 = &local_2c;
      if (0xf < local_1c._4_4_) {
        ppppuVar6 = (undefined4 ****)local_2c;
      }
      FUN_00527550(*(int **)(iVar2 + 0x224),3,ppppuVar6);
      in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
      local_58 = &stack0xffffff78;
      FUN_00402690(&stack0xffffff78,"fines_received",0xe);
      local_8._0_1_ = 8;
      uVar7 = extraout_ECX_01;
      if (DAT_0065c294 == 0) {
        local_50 = (byte *)FUN_005adb0f(0x28);
        local_8._0_1_ = 9;
        DAT_0065c294 = FUN_0051e500((undefined4 *)local_50);
        uVar7 = extraout_ECX_02;
      }
      local_8._0_1_ = 4;
      FUN_0051e750(uVar7,in_stack_ffffff78);
      local_50 = local_4c + 0x20;
      if (0xf < *(uint *)(local_4c + 0x34)) {
        local_50 = *(byte **)local_50;
      }
      pcVar11 = 
      "You were detected travelling in %s without your IFF active, %s. A fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly."
      ;
      local_58 = &stack0xffffff78;
      FUN_00591e00(&stack0xffffff78,
                   "You were detected travelling in %s without your IFF active, %s. A fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly."
                  );
      local_50 = &stack0xffffff60;
      local_8._0_1_ = 10;
      in_stack_ffffff60 = (undefined4 *)((uint)pcVar11 & 0xffffff00);
      FUN_00402690(&stack0xffffff60,"NO IFF FINE",0xb);
      local_60 = &stack0xffffff48;
      local_8._0_1_ = 0xb;
      FUN_004024e0(&stack0xffffff48,(undefined4 *)(local_4c + 0x20));
      local_8._0_1_ = 0xc;
      pvVar4 = (void *)FUN_00412700();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_0043aad0(pvVar4,in_stack_ffffff48);
      iVar2 = *(int *)((int)this + 0x34);
    }
    local_60 = &stack0xffffff78;
    FUN_004024e0(&stack0xffffff78,(undefined4 *)(iVar2 + 0x238));
    local_8._0_1_ = 0xd;
    puVar5 = FUN_004122d0();
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004a89a0(puVar5,in_stack_ffffff78);
    in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
    FUN_00402690(&stack0xffffff78,"Scanned vessel and found no IFF on. Moving on with my patrol.",
                 0x3d);
    FUN_0050ae50(*(undefined4 *)((int)this + 0x24),(undefined4 *)in_stack_ffffff78);
LAB_005002ab:
    if (local_45 != '\0') {
      local_4c = (byte *)0x0;
      FUN_004024e0(&stack0xffffff78,
                   (undefined4 *)(*(int *)(*(int *)((int)this + 0x24) + 0x24) + 0xf0));
      local_58 = (undefined1 *)FUN_004a6de0(in_stack_ffffff78);
      local_50 = (byte *)(*(int *)((int)this + 0x34) + 0x238);
      puVar5 = FUN_004122d0();
      piVar3 = (int *)puVar5[3];
      if ((int *)puVar5[4] == piVar3) {
        FUN_00403840(puVar5 + 2,piVar3,(undefined4 *)local_50);
      }
      else {
        FUN_004024e0(piVar3,(undefined4 *)local_50);
        puVar5[3] = puVar5[3] + 0x18;
      }
      this_00 = local_58;
      iVar2 = *(int *)((int)this + 0x34);
      if (*(char *)(iVar2 + 0x234) != '\0') {
        if (local_58 != (undefined1 *)0x0) {
          local_4c = (byte *)FUN_0051f090(*(int *)(*(int *)((int)this + 0x24) + 0x24));
          FUN_0051ba50(this_00,*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x24) + 0x108));
          iVar2 = *(int *)((int)this + 0x34);
        }
        ppppuVar6 = &local_2c;
        if (0xf < local_1c._4_4_) {
          ppppuVar6 = (undefined4 ****)local_2c;
        }
        FUN_00527550(*(int **)(iVar2 + 0x224),3,ppppuVar6);
        local_60 = &stack0xffffff78;
        in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
        FUN_00402690(&stack0xffffff78,"fines_received",0xe);
        local_8._0_1_ = 0xe;
        uVar7 = extraout_ECX_03;
        if (DAT_0065c294 == 0) {
          local_50 = (byte *)FUN_005adb0f(0x28);
          local_8._0_1_ = 0xf;
          DAT_0065c294 = FUN_0051e500((undefined4 *)local_50);
          uVar7 = extraout_ECX_04;
        }
        local_8._0_1_ = 4;
        FUN_0051e750(uVar7,in_stack_ffffff78);
        pbVar9 = local_4c + 0x20;
        local_50 = pbVar9;
        if (0xf < *(uint *)(local_4c + 0x34)) {
          local_50 = *(byte **)pbVar9;
        }
        local_58 = *(undefined1 **)(*(int *)((int)this + 0x24) + 0x24);
        local_54 = (int *)((int)local_58 + 0x1c);
        if (0xf < *(uint *)((int)local_58 + 0x30)) {
          local_54 = (int *)*local_54;
        }
        pcVar11 = 
        "You were detected travelling in %s while carrying a controlled substance, %s. A fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly."
        ;
        local_60 = &stack0xffffff78;
        FUN_00591e00(&stack0xffffff78,
                     "You were detected travelling in %s while carrying a controlled substance, %s. A fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly."
                    );
        local_54 = (int *)&stack0xffffff60;
        local_8._0_1_ = 0x10;
        in_stack_ffffff60 = (undefined4 *)((uint)pcVar11 & 0xffffff00);
        FUN_00402690(&stack0xffffff60,"SMUGGLING FINE",0xe);
        local_58 = &stack0xffffff48;
        local_8._0_1_ = 0x11;
        FUN_004024e0(&stack0xffffff48,(undefined4 *)pbVar9);
        local_8._0_1_ = 0x12;
        pvVar4 = (void *)FUN_00412700();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_0043aad0(pvVar4,in_stack_ffffff48);
        iVar2 = *(int *)((int)this + 0x34);
      }
      local_60 = &stack0xffffff78;
      FUN_004024e0(&stack0xffffff78,(undefined4 *)(iVar2 + 0x238));
      local_8._0_1_ = 0x13;
      puVar5 = FUN_004122d0();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004a89a0(puVar5,in_stack_ffffff78);
      in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
      FUN_00402690(&stack0xffffff78,"Scanned vessel and found contraband. Moving on with my patrol."
                   ,0x3e);
      FUN_0050ae50(*(undefined4 *)((int)this + 0x24),(undefined4 *)in_stack_ffffff78);
    }
    if ((local_46 == '\0') && (local_45 == '\0')) goto LAB_005004e9;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  if (0xf < local_1c._4_4_) {
    ppppuVar6 = (undefined4 ****)local_2c;
    if ((0xfff < local_1c._4_4_ + 1) &&
       (ppppuVar6 = (undefined4 ****)local_2c[-1],
       0x1f < (uint)((int)local_2c + (-4 - (int)ppppuVar6)))) {
LAB_004ffecc:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar6);
  }
LAB_00500666:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
