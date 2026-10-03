#include "../ois_server.exe.h"


void __thiscall FUN_00588230(void *this,float param_1)

{
  float fVar1;
  
  if ((DAT_0065b3d4 != 0) &&
     (fVar1 = *(float *)((int)this + 0x444) - param_1, *(float *)((int)this + 0x444) = fVar1,
     fVar1 < 0.0)) {
    *(undefined4 *)((int)this + 0x444) = 0x3f19999a;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


void __thiscall FUN_00588270(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  Size *pSVar8;
  void *pvVar9;
  byte *pbVar10;
  void *pvVar11;
  int iVar12;
  double dVar13;
  void *in_stack_ffffff64;
  uint in_stack_ffffff7c;
  undefined4 *puVar14;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int iStack_44;
  char local_3d;
  void *local_3c [3];
  int local_30 [2];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005ca572;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = UI_Sheet::vftable;
  *(undefined4 *)((int)this + 0x428) = 0xffffffff;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined2 *)((int)this + 0x430) = 1;
  *(undefined1 *)((int)this + 0x432) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 1;
  *(undefined4 *)((int)this + 0x440) = 1;
  *(undefined4 *)((int)this + 0x444) = 0xc;
  *(undefined2 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined2 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0xf;
  *(undefined1 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(int *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  local_14 = 7;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined1 *)((int)this + 0x284) = 1;
  *(undefined1 *)((int)this + 0x286) = 1;
  *(undefined1 *)((int)this + 0x2dc) = 1;
  pvVar11 = (void *)(in_stack_ffffff7c & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,&DAT_0062bf84,4);
  pbVar3 = FUN_00557760((void *)((int)this + 0x290),local_3c,pvVar11);
  pbVar10 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar10 = *(byte **)pbVar3;
  }
  uVar4 = FUN_004031f0(pbVar10,*(uint *)(pbVar3 + 0x10),(byte *)&PTR_005ce008,0);
  local_3d = (char)uVar4;
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
  if (local_3d == '\0') {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff7c,&DAT_0062bf84,4);
    pcVar5 = FUN_00557760((void *)((int)this + 0x290),local_3c,pvVar11);
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar6 = atoi(pcVar5);
    *(int *)((int)this + 0x43c) = iVar6;
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
  else {
    *(undefined4 *)((int)this + 0x43c) = 2;
  }
  *(int *)((int)this + 0x434) = *(int *)((int)this + 0x2a0) + -0xe;
  puVar14 = (undefined4 *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,"titles",6);
  bVar2 = FUN_005576d0((void *)((int)this + 0x290),puVar14);
  if (bVar2) {
    in_stack_ffffff64 = (void *)((uint)in_stack_ffffff64 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"titles",6);
    FUN_00557760((void *)((int)this + 0x290),&stack0xffffff7c,in_stack_ffffff64);
    piVar7 = (int *)FUN_00592d70(local_30,'|',puVar14);
    if ((int *)((int)this + 0x480) != piVar7) {
      FUN_004025a0((int *)((int)this + 0x480));
      *(int *)((int)this + 0x480) = *piVar7;
      *(int *)((int)this + 0x484) = piVar7[1];
      *(int *)((int)this + 0x488) = piVar7[2];
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
    }
    FUN_004025a0(local_30);
    *(undefined1 *)((int)this + 0x454) = 1;
  }
  puVar14 = (undefined4 *)((uint)puVar14 & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,"widths",6);
  bVar2 = FUN_005576d0((void *)((int)this + 0x290),puVar14);
  if (bVar2) {
    in_stack_ffffff64 = (void *)((uint)in_stack_ffffff64 & 0xffffff00);
    FUN_00402690(&stack0xffffff64,"widths",6);
    FUN_00557760((void *)((int)this + 0x290),&stack0xffffff7c,in_stack_ffffff64);
    FUN_00592d70(local_30,'|',puVar14);
    local_14._0_1_ = 8;
    local_50 = 0;
    if (0 < *(int *)((int)this + 0x43c)) {
      local_4c = 0;
      do {
        pcVar5 = (char *)(local_30[0] + local_4c);
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar5 = *(char **)pcVar5;
        }
        dVar13 = atof(pcVar5);
        piVar7 = *(int **)((int)this + 0x478);
        iVar6 = (int)((double)*(int *)((int)this + 0x434) * (dVar13 / 100.0));
        local_48 = SUB84(dVar13 / 100.0,0);
        _local_48 = CONCAT44(iVar6,local_48);
        if (*(int **)((int)this + 0x47c) == piVar7) {
          FUN_004141e0((void *)((int)this + 0x474),piVar7,&iStack_44);
        }
        else {
          *piVar7 = iVar6;
          *(int *)((int)this + 0x478) = *(int *)((int)this + 0x478) + 4;
        }
        local_50 = local_50 + 1;
        local_4c = local_4c + 0x18;
      } while (local_50 < *(int *)((int)this + 0x43c));
    }
    local_14 = CONCAT31(local_14._1_3_,7);
    FUN_004025a0(local_30);
  }
  else {
    iVar6 = *(int *)((int)this + 0x43c);
    local_4c = 0;
    if (0 < iVar6) {
      do {
        iVar6 = *(int *)((int)this + 0x434) / iVar6;
        piVar7 = *(int **)((int)this + 0x478);
        _local_48 = CONCAT44(iVar6,local_48);
        if (*(int **)((int)this + 0x47c) == piVar7) {
          FUN_004141e0((void *)((int)this + 0x474),piVar7,&iStack_44);
        }
        else {
          *piVar7 = iVar6;
          *(int *)((int)this + 0x478) = *(int *)((int)this + 0x478) + 4;
        }
        iVar6 = *(int *)((int)this + 0x43c);
        local_4c = local_4c + 1;
      } while (local_4c < iVar6);
    }
  }
  pvVar11 = (void *)((uint)puVar14 & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,"selecttext",10);
  bVar2 = FUN_005576d0((void *)((int)this + 0x290),pvVar11);
  if (bVar2) {
    *(undefined1 *)((int)this + 0x455) = 1;
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff7c,"selecttext",10);
    piVar7 = FUN_00557760((void *)((int)this + 0x290),local_3c,pvVar11);
    if ((int *)((int)this + 0x458) != piVar7) {
      FUN_00401b20((int *)((int)this + 0x458));
      iVar6 = piVar7[1];
      iVar12 = piVar7[2];
      iVar1 = piVar7[3];
      *(int *)((int)this + 0x458) = *piVar7;
      *(int *)((int)this + 0x45c) = iVar6;
      *(int *)((int)this + 0x460) = iVar12;
      *(int *)((int)this + 0x464) = iVar1;
      *(undefined8 *)((int)this + 0x468) = *(undefined8 *)(piVar7 + 4);
      piVar7[4] = 0;
      piVar7[5] = 0xf;
      *(undefined1 *)piVar7 = 0;
    }
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
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,"input",5);
  bVar2 = FUN_005576d0((void *)((int)this + 0x290),pvVar11);
  if (bVar2) {
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    FUN_00402690(&stack0xffffff7c,"input",5);
    pbVar3 = FUN_00557760((void *)((int)this + 0x290),local_3c,pvVar11);
    pbVar10 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar10 = *(byte **)pbVar3;
    }
    uVar4 = FUN_004031f0(pbVar10,*(uint *)(pbVar3 + 0x10),(byte *)"keymapping",10);
    local_3d = (char)uVar4;
    if (0xf < local_28) {
      pvVar11 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar11 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    if (local_3d != '\0') {
      *(undefined4 *)((int)this + 0x470) = 1;
    }
  }
  iVar6 = *(int *)((int)this + 0x2a4) / 0xc;
  *(int *)((int)this + 0x440) = iVar6;
  if (*(int *)((int)this + 0x2a4) % 0xc != 0) {
    *(int *)((int)this + 0x29c) =
         *(int *)((int)this + 0x29c) + (iVar6 * 0xc - *(int *)((int)this + 0x2a4));
    *(int *)((int)this + 0x2a4) = iVar6 * 0xc;
  }
  if (*(char *)((int)this + 0x455) != '\0') {
    *(int *)((int)this + 0x440) = iVar6 + -1;
  }
  piVar7 = *(int **)((int)this + 0x3f0);
  *(int **)((int)this + 0x450) = piVar7;
  iVar6 = *piVar7;
  *(int *)((int)this + 0x44c) = iVar6;
  if ((iVar6 != *piVar7) ||
     (bVar2 = FUN_004de400(*(undefined4 *)((int)this + 0x3f4),(int *)((int)this + 0x48c)), bVar2)) {
    iVar6 = *(int *)((int)this + 0x490);
    iVar12 = *(int *)((int)this + 0x48c);
    if (iVar12 != iVar6) {
      do {
        FUN_0043bfa0(iVar12);
        iVar12 = iVar12 + 0x60;
      } while (iVar12 != iVar6);
      iVar12 = *(int *)((int)this + 0x48c);
    }
    *(int *)((int)this + 0x490) = iVar12;
    FUN_004de1e0(*(undefined4 *)((int)this + 0x3f4),(int *)((int)this + 0x48c));
    (**(code **)(*(int *)this + 0x294))();
    *(undefined4 *)((int)this + 0x44c) = **(undefined4 **)((int)this + 0x450);
  }
  pSVar8 = (Size *)cocos2d::Size::Size((Size *)&local_48,(float)*(int *)((int)this + 0x2a0),
                                       (float)*(int *)((int)this + 0x2a4));
  cocos2d::Node::setContentSize(this,pSVar8);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


Node * __thiscall FUN_00588a60(void *this,byte param_1)

{
  FUN_00588a90(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00588a90(Node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c84a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_Sheet::vftable;
  FUN_00588d60((int)param_1);
  pvVar2 = *(void **)(param_1 + 0x4b0);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x4b8) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00588d4b;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x4a4);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x4ac) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00588d4b;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x498);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x4a0) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00588d4b;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x48c);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 0x490);
    if (pvVar2 != pvVar1) {
      do {
        FUN_0043bfa0((int)pvVar2);
        pvVar2 = (void *)((int)pvVar2 + 0x60);
      } while (pvVar2 != pvVar1);
      pvVar2 = *(void **)(param_1 + 0x48c);
    }
    pvVar1 = pvVar2;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x494) - (int)pvVar2) / 0x60) * 0x60)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00588d4b;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
  }
  FUN_004025a0((int *)(param_1 + 0x480));
  pvVar2 = *(void **)(param_1 + 0x474);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x47c) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1))))
    goto LAB_00588d4b;
    FUN_005adb3f(pvVar1);
    *(undefined4 *)(param_1 + 0x474) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x46c)) {
    pvVar2 = *(void **)(param_1 + 0x458);
    pvVar1 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x46c) + 1) &&
       (pvVar1 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar1)))) {
LAB_00588d4b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0xf;
  param_1[0x458] = (Node)0x0;
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00588d60(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x4a4);
  if (*(int *)(param_1 + 0x4a8) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x4a4) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x4a4);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x4a8) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x4a8) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x4b0);
  if (*(int *)(param_1 + 0x4b4) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x4b0) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x4b0);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x4b4) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x4b4) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x498);
  if (*(int *)(param_1 + 0x49c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x498) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x498);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x49c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x49c) = iVar2;
  if (*(int **)(param_1 + 0x4bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4bc) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  return;
}


void __fastcall FUN_00588e80(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  Ref *pRVar5;
  int iVar6;
  float *pfVar7;
  Scale9Sprite *pSVar8;
  void **ppvVar9;
  char *pcVar10;
  basic_string<> *pbVar11;
  int iVar12;
  void **ppvVar13;
  void *pvVar14;
  int iVar15;
  void *in_stack_ffffff08;
  void *pvVar16;
  Scale9Sprite *in_stack_ffffff1c;
  Size local_bc [10];
  Color3B local_b2 [3];
  Color3B local_af [3];
  Size local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int *local_8c;
  int local_88;
  int local_84;
  Scale9Sprite *local_80;
  uint local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  char local_61;
  Ref *local_60;
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
  puStack_c = &LAB_005ca635;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_1;
  (**(code **)(*param_1 + 0x290))();
  local_68 = param_1 + 0x123;
  if ((param_1[0x10a] == -1) || (param_1[0x10a] != (param_1[0x124] - *local_68) / 0x60)) {
    param_1[0x10b] = 0;
    param_1[0x10a] = (param_1[0x124] - *local_68) / 0x60;
  }
  iVar12 = 0;
  if (0 < param_1[0x110]) {
    do {
      local_7c = 0xffffffff;
      if (((char)param_1[0x115] == '\0') || (iVar12 != 0)) {
        local_7c = iVar12 + -1 + param_1[0x10b];
      }
      local_84 = iVar12 + 1;
      local_88 = param_1[0xa9] - param_1[0x111] * local_84;
      if (local_7c == 0xffffffff) {
        local_61 = false;
      }
      else {
        local_61 = *(int *)param_1[0x114] == *(int *)(local_7c * 0x60 + *local_68);
      }
      if ((((char)param_1[0x115] != '\0') && (iVar12 == 0)) || ((bool)local_61 != false)) {
        pvVar16 = (void *)((uint)in_stack_ffffff1c & 0xffffff00);
        FUN_00402690(&stack0xffffff1c,"white.png",9);
        pRVar5 = (Ref *)FUN_00591910(pvVar16);
        iVar12 = *(int *)pRVar5;
        local_60 = pRVar5;
        if (local_61 == '\0') {
          cocos2d::Color3B::Color3B(local_b2,'\0',0xbf,0xff);
          (**(code **)(iVar12 + 0x25c))();
        }
        else {
          cocos2d::Color3B::Color3B(local_af,0xff,0xff,0xff);
          (**(code **)(iVar12 + 0x25c))();
        }
        (**(code **)(*(int *)pRVar5 + 0x244))();
        iVar12 = *(int *)pRVar5;
        iVar15 = param_1[0x111];
        iVar6 = (**(code **)(iVar12 + 0xb0))();
        local_78 = *(float *)(iVar6 + 4);
        iVar6 = local_8c[0x10d];
        pfVar7 = (float *)(**(code **)(*(int *)local_60 + 0xb0))();
        cocos2d::Size::Size(local_bc,(float)iVar6 / *pfVar7,(float)iVar15 / local_78);
        pRVar5 = local_60;
        (**(code **)(iVar12 + 0xac))();
        local_9c = 0;
        local_98 = 0;
        local_8 = 0;
        (**(code **)(*(int *)pRVar5 + 0xa0))();
        local_8 = 0xffffffff;
        in_stack_ffffff1c = (Scale9Sprite *)0x0;
        (**(code **)(*(int *)pRVar5 + 0x48))();
        param_1 = local_8c;
        (**(code **)(*local_8c + 0x10c))();
        puVar1 = (undefined4 *)param_1[0x12a];
        if ((undefined4 *)param_1[299] == puVar1) {
          FUN_00414080(param_1 + 0x129,puVar1,&local_60);
        }
        else {
          *puVar1 = pRVar5;
          param_1[0x12a] = param_1[0x12a] + 4;
        }
      }
      local_60 = (Ref *)0x0;
      local_78 = 0.0;
      if (0 < param_1[0x10f]) {
        do {
          fVar4 = local_78;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"MenuBorder.png",0xe);
          local_8 = 1;
          pSVar8 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
          local_8 = 0xffffffff;
          local_80 = pSVar8;
          if (0xf < local_18) {
            pvVar16 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar16 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) goto LAB_00589738;
            FUN_005adb3f(pvVar16);
          }
          local_a4 = 0;
          local_a0 = 0;
          local_8 = 2;
          (**(code **)(*(int *)pSVar8 + 0xa0))();
          local_8 = 0xffffffff;
          (**(code **)(*(int *)pSVar8 + 0x48))();
          iVar12 = *(int *)(param_1[0x11d] + (int)fVar4 * 4);
          local_60 = local_60 + iVar12;
          iVar15 = *(int *)pSVar8;
          cocos2d::Size::Size(local_ac,(float)(int)((uint)((int)local_78 < param_1[0x10f] + -1) +
                                                   iVar12),12.0);
          (**(code **)(iVar15 + 0xac))();
          in_stack_ffffff1c = pSVar8;
          (**(code **)(*param_1 + 0x108))();
          puVar1 = (undefined4 *)param_1[0x12d];
          if ((undefined4 *)param_1[0x12e] == puVar1) {
            FUN_00414080(param_1 + 300,puVar1,&local_80);
          }
          else {
            *puVar1 = pSVar8;
            param_1[0x12d] = param_1[0x12d] + 4;
          }
          local_78 = (float)((int)local_78 + 1);
        } while ((int)local_78 < param_1[0x10f]);
      }
      local_74 = CONCAT31(local_74._1_3_,0x37);
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      local_8._0_1_ = 4;
      local_8._1_3_ = 0;
      if (local_7c == 0xffffffff) {
        ppvVar9 = (void **)param_1[0x120];
        if (local_5c != ppvVar9) {
          ppvVar13 = ppvVar9;
          if ((void *)0xf < ppvVar9[5]) {
            ppvVar13 = *ppvVar9;
          }
          FUN_00402690(local_5c,ppvVar13,(uint)ppvVar9[4]);
          ppvVar9 = (void **)param_1[0x120];
        }
        ppvVar13 = ppvVar9 + 6;
        if (local_44 != ppvVar13) {
          if ((void *)0xf < ppvVar9[0xb]) {
            ppvVar13 = *ppvVar13;
          }
          FUN_00402690(local_44,ppvVar13,(uint)ppvVar9[10]);
        }
        local_74 = CONCAT31(local_74._1_3_,0x25);
      }
      else if ((-1 < (int)local_7c) && (local_7c < (uint)((local_68[1] - *local_68) / 0x60))) {
        local_74 = 0x30;
        if (local_61 == '\0') {
          local_74 = 0x37;
        }
        iVar15 = local_7c * 0x60;
        iVar12 = *local_68;
        ppvVar9 = (void **)(iVar12 + 0x20 + iVar15);
        if (local_5c != ppvVar9) {
          ppvVar13 = ppvVar9;
          if ((void *)0xf < ppvVar9[5]) {
            ppvVar13 = *ppvVar9;
          }
          FUN_00402690(local_5c,ppvVar13,(uint)ppvVar9[4]);
          iVar12 = *local_68;
        }
        ppvVar9 = (void **)(iVar15 + 0x38 + iVar12);
        if (local_44 != ppvVar9) {
          ppvVar13 = ppvVar9;
          if ((void *)0xf < ppvVar9[5]) {
            ppvVar13 = *ppvVar9;
          }
          FUN_00402690(local_44,ppvVar13,(uint)ppvVar9[4]);
        }
      }
      pvVar16 = (void *)0x5893e5;
      FUN_00591e00(&stack0xffffff1c,"`%c%s");
      pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff1c);
      local_94 = 0;
      local_90 = 0;
      local_8._0_1_ = 5;
      local_60 = pRVar5;
      (**(code **)(*(int *)pRVar5 + 0xa0))();
      local_8 = CONCAT31(local_8._1_3_,4);
      (**(code **)(*(int *)pRVar5 + 0x48))();
      (**(code **)(*param_1 + 0x108))();
      puVar1 = (undefined4 *)param_1[0x127];
      if ((undefined4 *)param_1[0x128] == puVar1) {
        FUN_00414080(param_1 + 0x126,puVar1,&local_60);
      }
      else {
        *puVar1 = local_60;
        param_1[0x127] = param_1[0x127] + 4;
      }
      FUN_00591e00(&stack0xffffff08,"`%c%s");
      local_60 = FUN_0055cb00((Node)0x0,pvVar16);
      local_70 = 0;
      local_6c = 0;
      local_8._0_1_ = 6;
      in_stack_ffffff1c = (Scale9Sprite *)&local_70;
      (**(code **)(*(int *)local_60 + 0xa0))();
      pRVar5 = local_60;
      local_8 = CONCAT31(local_8._1_3_,4);
      (**(code **)(*(int *)local_60 + 0x48))();
      in_stack_ffffff08 = (void *)0x589528;
      (**(code **)(*param_1 + 0x108))();
      piVar2 = (int *)param_1[0x127];
      if ((int *)param_1[0x128] == piVar2) {
        FUN_00414080(param_1 + 0x126,piVar2,&local_60);
      }
      else {
        *piVar2 = (int)pRVar5;
        param_1[0x127] = param_1[0x127] + 4;
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      if (0xf < local_30) {
        pvVar16 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar16 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar16)))) goto LAB_00589738;
        FUN_005adb3f(pvVar16);
      }
      local_8 = 0xffffffff;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_48) {
        pvVar16 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar16 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar16)))) goto LAB_00589738;
        FUN_005adb3f(pvVar16);
      }
      iVar12 = local_84;
    } while (local_84 < param_1[0x110]);
  }
  piVar2 = local_68;
  if ((*(char *)((int)param_1 + 0x455) != '\0') && (*(int *)param_1[0x114] != -1)) {
    FUN_004024e0(&stack0xffffff1c,param_1 + 0x116);
    pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff1c);
    local_70 = 0;
    local_6c = 0;
    local_8 = 7;
    local_60 = pRVar5;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pRVar5 + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    puVar1 = (undefined4 *)param_1[0x127];
    if ((undefined4 *)param_1[0x128] == puVar1) {
      FUN_00414080(param_1 + 0x126,puVar1,&local_60);
    }
    else {
      *puVar1 = pRVar5;
      param_1[0x127] = param_1[0x127] + 4;
    }
  }
  if ((char)param_1[0x10c] != '\0') {
    if (((uint)param_1[0x110] < (uint)((piVar2[1] - *piVar2) / 0x60)) && (0 < param_1[0x10b])) {
      pcVar10 = "%c_Button_Depressed.png";
      if (*(char *)((int)param_1 + 0x431) == '\0') {
        pcVar10 = "%c_Button_Undepressed.png";
      }
      pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar10);
      local_8 = 8;
    }
    else {
      pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
      local_8 = 9;
    }
    pSVar8 = cocos2d::ui::Scale9Sprite::create(pbVar11);
    local_8 = 0xffffffff;
    local_60 = (Ref *)pSVar8;
    if (0xf < local_18) {
      pvVar16 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar16 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) goto LAB_00589738;
      FUN_005adb3f(pvVar16);
    }
    local_70 = 0;
    local_6c = 0x3f800000;
    local_8 = 10;
    (**(code **)(*(int *)pSVar8 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pSVar8 + 0x48))();
    iVar12 = *(int *)pSVar8;
    cocos2d::Size::Size(local_ac,12.0,12.0);
    (**(code **)(iVar12 + 0xac))();
    (**(code **)(*param_1 + 0x10c))();
    puVar1 = (undefined4 *)param_1[0x12a];
    if ((undefined4 *)param_1[299] == puVar1) {
      FUN_00414080(param_1 + 0x129,puVar1,&local_60);
      pSVar8 = (Scale9Sprite *)local_60;
    }
    else {
      *puVar1 = pSVar8;
      param_1[0x12a] = param_1[0x12a] + 4;
    }
    FUN_00591e00(&stack0xffffff08,"`%c`a1");
    pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff08);
    local_70 = 0x3f000000;
    local_6c = 0x3f000000;
    local_8 = 0xb;
    local_60 = pRVar5;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    iVar12 = *(int *)pRVar5;
    (**(code **)(*(int *)pSVar8 + 0x74))();
    (**(code **)(*(int *)pSVar8 + 0x6c))();
    pRVar5 = local_60;
    (**(code **)(iVar12 + 0x48))();
    pvVar16 = (void *)0x5898fb;
    (**(code **)(*param_1 + 0x108))();
    puVar1 = (undefined4 *)param_1[0x127];
    if ((undefined4 *)param_1[0x128] == puVar1) {
      FUN_00414080(param_1 + 0x126,puVar1,&local_60);
    }
    else {
      *puVar1 = pRVar5;
      param_1[0x127] = param_1[0x127] + 4;
    }
    piVar2 = local_68;
    uVar3 = (local_68[1] - *local_68) / 0x60;
    if (((uint)param_1[0x110] < uVar3) && (param_1[0x10b] + param_1[0x110] < (int)uVar3)) {
      pcVar10 = "%c_Button_Depressed.png";
      if (*(char *)((int)param_1 + 0x432) == '\0') {
        pcVar10 = "%c_Button_Undepressed.png";
      }
      pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar10);
      local_8 = 0xc;
    }
    else {
      pbVar11 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
      local_8 = 0xd;
    }
    pSVar8 = cocos2d::ui::Scale9Sprite::create(pbVar11);
    local_8 = 0xffffffff;
    local_60 = (Ref *)pSVar8;
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
LAB_00589738:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar14);
    }
    uVar3 = (piVar2[1] - *piVar2) / 0x60;
    if (((uint)param_1[0x110] < uVar3) && (param_1[0x10b] + param_1[0x110] < (int)uVar3)) {
      local_7c = 0x37;
      if (*(char *)((int)param_1 + 0x432) != '\0') {
        local_7c = 0x25;
      }
    }
    else {
      local_7c = 0x38;
    }
    local_70 = 0;
    local_6c = 0;
    local_8 = 0xe;
    (**(code **)(*(int *)pSVar8 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pSVar8 + 0x48))();
    iVar12 = *(int *)pSVar8;
    cocos2d::Size::Size(local_ac,12.0,12.0);
    (**(code **)(iVar12 + 0xac))();
    (**(code **)(*param_1 + 0x10c))();
    puVar1 = (undefined4 *)param_1[0x12a];
    if ((undefined4 *)param_1[299] == puVar1) {
      FUN_00414080(param_1 + 0x129,puVar1,&local_60);
      pSVar8 = (Scale9Sprite *)local_60;
    }
    else {
      *puVar1 = pSVar8;
      param_1[0x12a] = param_1[0x12a] + 4;
    }
    FUN_00591e00(&stack0xffffff08,"`%c`a2");
    pRVar5 = FUN_0055cb00((Node)0x0,pvVar16);
    local_94 = 0x3f000000;
    local_90 = 0x3f000000;
    local_8 = 0xf;
    local_60 = pRVar5;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    iVar12 = *(int *)pRVar5;
    (**(code **)(*(int *)pSVar8 + 0x74))();
    (**(code **)(*(int *)pSVar8 + 0x6c))();
    pRVar5 = local_60;
    (**(code **)(iVar12 + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    piVar2 = (int *)param_1[0x127];
    if ((int *)param_1[0x128] == piVar2) {
      FUN_00414080(param_1 + 0x126,piVar2,&local_60);
    }
    else {
      *piVar2 = (int)pRVar5;
      param_1[0x127] = param_1[0x127] + 4;
    }
  }
  param_1[0x113] = *(int *)param_1[0x114];
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00589bf0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1[0x113] == *(int *)param_1[0x114]) &&
     (bVar2 = FUN_004de400(param_1[0xfd],param_1 + 0x123), !bVar2)) {
    return;
  }
  iVar1 = param_1[0x124];
  iVar3 = param_1[0x123];
  if (iVar3 != iVar1) {
    do {
      FUN_0043bfa0(iVar3);
      iVar3 = iVar3 + 0x60;
    } while (iVar3 != iVar1);
    iVar3 = param_1[0x123];
  }
  param_1[0x124] = iVar3;
  FUN_004de1e0(param_1[0xfd],param_1 + 0x123);
  (**(code **)(*param_1 + 0x294))();
  param_1[0x113] = *(int *)param_1[0x114];
  return;
}


void __thiscall FUN_00589c80(void *this,float param_1,float param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c85e9;
  local_10 = ExceptionList;
  uVar6 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  cVar7 = '\0';
  cVar1 = *(char *)((int)this + 0x431);
  cVar2 = *(char *)((int)this + 0x432);
  bVar3 = false;
  uVar4 = (*(int *)((int)this + 0x490) - *(int *)((int)this + 0x48c)) / 0x60;
  if (*(uint *)((int)this + 0x440) < uVar4) {
    if ((((0 < *(int *)((int)this + 0x42c)) &&
         ((float)(*(int *)((int)this + 0x2a0) + -0xc) <= param_1)) &&
        (param_1 < (float)*(int *)((int)this + 0x2a0))) && (param_2 < 12.0)) {
      bVar3 = 0.0 <= param_2;
    }
    if (((*(int *)((int)this + 0x440) + *(int *)((int)this + 0x42c) < (int)uVar4) &&
        ((float)(*(int *)((int)this + 0x2a0) + -0xc) <= param_1)) &&
       ((param_1 < (float)*(int *)((int)this + 0x2a0) &&
        ((param_2 < (float)*(int *)((int)this + 0x2a4) &&
         ((float)(*(int *)((int)this + 0x2a4) + -0xc) <= param_2)))))) {
      cVar7 = '\x01';
    }
  }
  if ((bVar3 != (bool)cVar1) || (cVar8 = cVar2, cVar5 = cVar1, cVar7 != cVar2)) {
    *(bool *)((int)this + 0x431) = bVar3;
    *(char *)((int)this + 0x432) = cVar7;
    cVar8 = cVar7;
    cVar5 = bVar3;
  }
  if ((cVar1 != cVar5) || (cVar2 != cVar8)) {
    (**(code **)(*(int *)this + 0x294))(uVar6);
  }
  ExceptionList = local_10;
  return;
}


uint __thiscall FUN_00589e00(void *this,float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(char *)((int)this + 0x430) == '\0') ||
     (uVar3 = *(int *)((int)this + 0x434) + 1, param_1 < (float)(int)uVar3)) {
    iVar4 = (int)param_2;
    if ((iVar4 < 0) || (*(int *)((int)this + 0x2a4) < iVar4)) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar4 / *(int *)((int)this + 0x444);
    }
    uVar3 = *(int *)((int)this + 0x42c) + iVar4;
    uVar2 = uVar3 - 1;
    if (*(char *)((int)this + 0x454) == '\0') {
      uVar2 = uVar3;
    }
    if (((int)uVar2 < 0) ||
       ((uint)((*(int *)((int)this + 0x490) - *(int *)((int)this + 0x48c)) / 0x60) <= uVar2)) {
      uVar2 = 0xffffffff;
    }
    FUN_00591070("DETAIL","item number %d selected");
    if (uVar2 == 0xffffffff) {
      **(undefined4 **)((int)this + 0x450) = 0xffffffff;
    }
    else {
      **(undefined4 **)((int)this + 0x450) =
           *(undefined4 *)(uVar2 * 0x60 + *(int *)((int)this + 0x48c));
    }
    FUN_004dd240(*(undefined4 *)((int)this + 0x3f4));
    uVar2 = (**(code **)(*(int *)this + 0x294))();
    ExceptionList = local_10;
    return uVar2;
  }
  if (*(char *)((int)this + 0x431) == '\0') {
    if (*(char *)((int)this + 0x432) == '\0') goto LAB_00589ef9;
    iVar4 = *(int *)((int)this + 0x490) - *(int *)((int)this + 0x48c);
    uVar3 = iVar4 * 0x2aaaaaab;
    uVar1 = iVar4 / 0x60;
    if ((uVar1 <= *(uint *)((int)this + 0x440)) ||
       (uVar3 = *(int *)((int)this + 0x42c) + *(uint *)((int)this + 0x440), (int)uVar1 <= (int)uVar3
       )) goto LAB_00589ef9;
    **(undefined4 **)((int)this + 0x450) = 0xffffffff;
    *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + 1;
  }
  else {
    uVar3 = (*(int *)((int)this + 0x490) - *(int *)((int)this + 0x48c)) / 0x60;
    if ((uVar3 <= *(uint *)((int)this + 0x440)) || (*(int *)((int)this + 0x42c) < 1))
    goto LAB_00589ef9;
    **(undefined4 **)((int)this + 0x450) = 0xffffffff;
    *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + -1;
  }
  uVar3 = (**(code **)(*(int *)this + 0x294))(uVar2);
LAB_00589ef9:
  *(undefined2 *)((int)this + 0x431) = 0;
  ExceptionList = local_10;
  return uVar3;
}


undefined1 * __thiscall FUN_00589fe0(void *this,char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void **ppvVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_100 [204];
  undefined4 uStackY_34;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca66f;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  if (*(int *)((int)this + 0x470) != 1) goto LAB_0058a154;
  if (**(int **)((int)this + 0x450) == -1) {
    return auStackY_100;
  }
  ExceptionList = ppvVar5;
  if (DAT_0065c2fc == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x24);
    local_8 = 0;
    DAT_0065c2fc = FUN_00524b00(puVar1);
  }
  local_8 = 0xffffffff;
  if (param_1 == (char *)0x0) {
LAB_0058a128:
    iVar8 = 10;
  }
  else {
    uVar6 = 0;
    puVar1 = (undefined4 *)DAT_0065c2fc[6];
    uVar7 = DAT_0065c2fc[7] - (int)puVar1 >> 2;
    if (uVar7 != 0) {
      do {
        if (*(char **)*puVar1 == param_1) {
          iVar8 = **(int **)((int)this + 0x450);
          iVar2 = FUN_004b32a0();
          iVar8 = *(int *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar8 * 4) + 0x24);
          pvVar4 = (void *)FUN_004b32a0();
          FUN_00526c90(pvVar4,iVar8,param_1);
          FUN_004b2910();
          iVar8 = 8;
          goto LAB_0058a12c;
        }
        uVar6 = uVar6 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar6 < uVar7);
    }
    if (param_1 != (char *)0x6) goto LAB_0058a128;
    iVar8 = **(int **)((int)this + 0x450);
    iVar2 = FUN_004b32a0();
    iVar8 = *(int *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar8 * 4) + 0x24);
    iVar3 = FUN_004b32a0();
    uVar6 = 0;
    iVar2 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0x10) - iVar2 >> 2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + uVar6 * 4);
        if (*(int *)(iVar2 + 0x24) == iVar8) {
          *(undefined4 *)(iVar2 + 0x1c) = 0;
        }
        uVar6 = uVar6 + 1;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (uVar6 < (uint)(*(int *)(iVar3 + 0x10) - iVar2 >> 2));
    }
    FUN_004b2910();
    iVar8 = 8;
  }
LAB_0058a12c:
  iVar3 = -1;
  uStackY_34 = 0x58a137;
  iVar2 = DAT_0065b3d4;
  pvVar4 = (void *)FUN_00402f60();
  uStackY_34 = 0x58a13e;
  FUN_00557fb0(pvVar4,iVar2,iVar8,iVar3);
  **(undefined4 **)((int)this + 0x450) = 0xffffffff;
  ppvVar5 = (void **)(**(code **)(*(int *)this + 0x294))();
LAB_0058a154:
  ExceptionList = local_10;
  return (undefined1 *)CONCAT31((int3)((uint)ppvVar5 >> 8),1);
}


int * __thiscall FUN_0058a170(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined3 extraout_var;
  void *pvVar2;
  Color3B *this_00;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca6b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00553370(this,param_1,param_2,param_3);
  local_8 = 0;
  *(undefined ***)this = UI_ShipHullState::vftable;
  *(undefined2 *)((int)this + 0x428) = 0;
  uVar6 = 0x58a1db;
  _eh_vector_constructor_iterator_
            ((void *)((int)this + 0x440),0x18,5,(_func_void_void_ptr *)&LAB_00403160,FUN_00401b20);
  local_8 = CONCAT31(local_8._1_3_,1);
  this_00 = (Color3B *)((int)this + 0x4b8);
  iVar4 = 5;
  do {
    cocos2d::Color3B::Color3B(this_00);
    this_00 = this_00 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  pvVar2 = (void *)(uVar6 & 0xffffff00);
  FUN_00402690(&stack0xffffffc0,"ownedship",9);
  uVar6 = FUN_00557620((void *)((int)this + 0x290),pvVar2);
  if ((char)uVar6 != '\0') {
    *(undefined1 *)((int)this + 0x429) = 1;
  }
  *(undefined4 *)((int)this + 0x42c) = 0;
  piVar3 = (int *)((int)this + 0x4c8);
  *(undefined4 *)((int)this + 0x430) = 0;
  pcVar5 = (char *)((int)this + 0x4dc);
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *piVar3 = 0xff;
  *(undefined4 *)((int)this + 0x4cc) = 0xff;
  *(undefined4 *)((int)this + 0x4d0) = 0xff;
  *(undefined4 *)((int)this + 0x4d4) = 0xff;
  *(undefined4 *)((int)this + 0x4d8) = 0xff;
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  *(undefined1 *)((int)this + 0x4e0) = 0;
  FUN_0058aa20((int)this);
  if (DAT_0065b3d4 != (void *)0x0) {
    pvVar2 = DAT_0065b3d4;
    if (*(char *)((int)this + 0x429) != '\0') {
      pvVar2 = *(void **)(DAT_0065b5cc + 0xd0);
    }
    if (pvVar2 != (void *)0x0) {
      do {
        cVar1 = FUN_0050be90(pvVar2,(int)(pcVar5 + (-0x4dc - (int)this)));
        iVar4 = CONCAT31(extraout_var,cVar1);
        if ((iVar4 == 0) || (iVar4 == 5)) {
          *piVar3 = 0xff;
        }
        else if (*pcVar5 == '\0') {
          iVar4 = (int)((float)*piVar3 - *(float *)(&DAT_005e0dc8 + iVar4 * 4) * 0.0);
          *piVar3 = iVar4;
          if (iVar4 < 0x41) {
            *piVar3 = 0x40;
            *pcVar5 = '\x01';
          }
        }
        else {
          iVar4 = (int)(*(float *)(&DAT_005e0dc8 + iVar4 * 4) * 0.0 + (float)*piVar3);
          *piVar3 = iVar4;
          if (0xfe < iVar4) {
            *piVar3 = 0xff;
            *pcVar5 = '\0';
          }
        }
        pcVar5 = pcVar5 + 1;
        piVar3 = piVar3 + 1;
      } while ((int)(pcVar5 + (-0x4dc - (int)this)) < 5);
    }
    cVar1 = FUN_0058aa20((int)this);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_0058a3e0(void *this,byte param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_ShipHullState::vftable;
  if (*(int **)((int)this + 0x4e4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x4e4) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x4e4) = 0;
  }
  piVar3 = (int *)((int)this + 0x42c);
  iVar2 = 5;
  do {
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 0x138))(1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)((int)this + 0x4f0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x4f0) + 0x138))(1);
    *(undefined4 *)((int)this + 0x4f0) = 0;
  }
  _eh_vector_destructor_iterator_((void *)((int)this + 0x440),0x18,5,FUN_00401b20);
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058a4d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x4e4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4e4) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x4e4) = 0;
  }
  piVar1 = (int *)(param_1 + 0x42c);
  iVar2 = 5;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x138))(1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x4f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4f0) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x4f0) = 0;
  }
  return;
}


void __fastcall FUN_0058a540(int *param_1)

{
  int *piVar1;
  byte ****ppppbVar2;
  int iVar3;
  byte ****ppppbVar4;
  Ref *pRVar5;
  int iVar6;
  void *pvVar7;
  byte *pbVar8;
  uint uVar9;
  void *in_stack_ffffff60;
  char *pcVar10;
  int *local_70;
  int *local_68;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte ***local_44;
  byte **ppbStack_40;
  byte **ppbStack_3c;
  byte **ppbStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca6e9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  pvVar7 = DAT_0065b3d4;
  if (*(char *)((int)param_1 + 0x429) != '\0') {
    pvVar7 = *(void **)(DAT_0065b5cc + 0xd0);
  }
  if (pvVar7 == (void *)0x0) goto LAB_0058a9f6;
  local_60 = 0;
  local_68 = param_1 + 0x10b;
  local_70 = param_1 + 0x110;
  do {
    uVar9 = 0;
    piVar1 = *(int **)(*(int *)((int)pvVar7 + 0x254) + 0x118);
    iVar6 = *(int *)(*(int *)((int)pvVar7 + 0x254) + 0x11c) - (int)piVar1;
    iVar3 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0xc + iVar3;
    if (iVar6 != iVar3) {
      do {
        if (*piVar1 == local_60) {
          FUN_004024e0(&stack0xffffff60,local_70);
          piVar1 = (int *)FUN_00591910(in_stack_ffffff60);
          *local_68 = (int)piVar1;
          (**(code **)(*piVar1 + 0x25c))();
          (**(code **)(*(int *)*local_68 + 0x244))();
          (**(code **)(*param_1 + 0x108))();
          iVar3 = *param_1;
          (**(code **)(*(int *)*local_68 + 0xb0))();
          in_stack_ffffff60 = (void *)0x58a7be;
          (**(code **)(iVar3 + 0xac))();
          break;
        }
        uVar9 = uVar9 + 1;
        piVar1 = piVar1 + 3;
      } while (uVar9 < (uint)(iVar6 - iVar3));
    }
    local_68 = local_68 + 1;
    local_60 = local_60 + 1;
    local_70 = local_70 + 6;
  } while (local_60 < 5);
  local_34 = 0xf00000000;
  local_44 = (byte ***)((uint)local_44 & 0xffffff00);
  local_8 = 0;
  if (param_1[0x13b] == -1) {
    iVar3 = FUN_0050bf30(pvVar7);
    if (iVar3 < 4) {
      uVar9 = 9;
      pcVar10 = "`0nominal";
    }
    else if (iVar3 < 0x15) {
      uVar9 = 0xc;
      pcVar10 = "`3light dmg.";
    }
    else if (iVar3 < 0x33) {
      uVar9 = 0xb;
      pcVar10 = "`$med. dmg.";
    }
    else if (iVar3 < 0x4c) {
      uVar9 = 0xc;
      pcVar10 = "`^heavy dmg.";
    }
    else {
      uVar9 = 10;
      pcVar10 = "`@CRITICAL";
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,pcVar10,uVar9);
    local_8 = CONCAT31(local_8._1_3_,1);
    ppppbVar2 = (byte ****)FUN_00591e00((undefined1 *)local_5c,"`%%Hull: %s");
    if (&local_44 != ppppbVar2) {
      FUN_00401b20((int *)&local_44);
      local_44 = *ppppbVar2;
      ppbStack_40 = (byte **)ppppbVar2[1];
      ppbStack_3c = (byte **)ppppbVar2[2];
      ppbStack_38 = (byte **)ppppbVar2[3];
      local_34 = *(undefined8 *)(ppppbVar2 + 4);
      ppppbVar2[4] = (byte ***)0x0;
      ppppbVar2[5] = (byte ***)0xf;
      *(undefined1 *)ppppbVar2 = 0;
    }
    if (0xf < local_48) {
      pvVar7 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar7 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    local_8 = local_8 & 0xffffff00;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_0058a8ec;
    }
  }
  else {
    FUN_00591e00(&stack0xffffff60,"UI_Schematic_%s_selector_%s.png");
    piVar1 = (int *)FUN_00591910(in_stack_ffffff60);
    param_1[0x139] = (int)piVar1;
    iVar3 = *piVar1;
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_60 + 1),0xff,0xff,0xff);
    (**(code **)(iVar3 + 0x25c))();
    (**(code **)(*param_1 + 0x108))();
    FUN_0050be90(pvVar7,param_1[0x13b]);
    ppppbVar2 = (byte ****)FUN_00591e00((undefined1 *)local_5c,"`%%%s: %s");
    if (&local_44 != ppppbVar2) {
      FUN_00401b20((int *)&local_44);
      local_44 = *ppppbVar2;
      ppbStack_40 = (byte **)ppppbVar2[1];
      ppbStack_3c = (byte **)ppppbVar2[2];
      ppbStack_38 = (byte **)ppppbVar2[3];
      local_34 = *(undefined8 *)(ppppbVar2 + 4);
      ppppbVar2[4] = (byte ***)0x0;
      ppppbVar2[5] = (byte ***)0xf;
      *(undefined1 *)ppppbVar2 = 0;
    }
    if (0xf < local_48) {
      pvVar7 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar7 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
LAB_0058a8ec:
      FUN_005adb3f(pvVar7);
    }
  }
  ppppbVar2 = (byte ****)local_44;
  iVar3 = param_1[0x13c];
  if (iVar3 == 0) {
LAB_0058a93c:
    FUN_004024e0(&stack0xffffff60,&local_44);
    pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff60);
    param_1[0x13c] = (int)pRVar5;
    local_8._0_1_ = 2;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)param_1[0x13c] + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    ppppbVar2 = (byte ****)local_44;
  }
  else {
    pbVar8 = (byte *)(iVar3 + 0x2c0);
    ppppbVar4 = &local_44;
    if (0xf < local_34._4_4_) {
      ppppbVar4 = (byte ****)local_44;
    }
    if (0xf < *(uint *)(iVar3 + 0x2d4)) {
      pbVar8 = *(byte **)(iVar3 + 0x2c0);
    }
    uVar9 = FUN_004031f0(pbVar8,*(uint *)(iVar3 + 0x2d0),(byte *)ppppbVar4,(uint)local_34);
    if ((char)uVar9 == '\0') goto LAB_0058a93c;
  }
  *(undefined1 *)param_1[0xa2] = 1;
  if (0xf < local_34._4_4_) {
    ppppbVar4 = ppppbVar2;
    if ((0xfff < local_34._4_4_ + 1) &&
       (ppppbVar4 = (byte ****)ppppbVar2[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar2 + (-4 - (int)ppppbVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar4);
  }
LAB_0058a9f6:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0058aa20(int param_1)

{
  char cVar1;
  uint uVar2;
  void *this;
  undefined3 extraout_var;
  byte ******ppppppbVar3;
  int iVar4;
  byte ******ppppppbVar5;
  byte ******ppppppbVar6;
  byte ******this_00;
  int iVar7;
  float in_XMM1_Da;
  float fVar8;
  int local_44;
  int local_3c;
  Color3B *local_34;
  byte *****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca718;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = DAT_0065b3d4;
  if (*(char *)(param_1 + 0x429) != '\0') {
    this = *(void **)(DAT_0065b5cc + 0xd0);
  }
  local_14 = uVar2;
  if (this != (void *)0x0) {
    local_34 = (Color3B *)(param_1 + 0x4b8);
    this_00 = (byte ******)(param_1 + 0x440);
    local_3c = param_1 + 0x4c8;
    local_44 = 0;
    do {
      cVar1 = FUN_0050be90(this,local_44);
      FUN_00591e00((undefined1 *)local_2c,"UI_Schematic_%s_%s.png");
      ppppppbVar6 = (byte ******)local_2c[0];
      local_8 = 0;
      ppppppbVar3 = local_2c;
      if (0xf < local_18) {
        ppppppbVar3 = (byte ******)local_2c[0];
      }
      ppppppbVar5 = this_00;
      if ((byte *****)0xf < this_00[5]) {
        ppppppbVar5 = (byte ******)*this_00;
      }
      FUN_004031f0((byte *)ppppppbVar5,(uint)this_00[4],(byte *)ppppppbVar3,local_1c);
      if (*(int **)(local_3c + -0x9c) != (int *)0x0) {
        (**(code **)(**(int **)(local_3c + -0x9c) + 0x23c))(uVar2);
      }
      iVar4 = CONCAT31(extraout_var,cVar1) * 3;
      cocos2d::Color3B::operator!=(local_34,(Color3B *)(&DAT_0065b714 + iVar4));
      *(undefined2 *)local_34 = *(undefined2 *)(&DAT_0065b714 + iVar4);
      local_34[2] = *(Color3B *)(iVar4 + 0x65b716);
      if (this_00 != local_2c) {
        ppppppbVar3 = local_2c;
        if (0xf < local_18) {
          ppppppbVar3 = ppppppbVar6;
        }
        FUN_00402690(this_00,ppppppbVar3,local_1c);
        ppppppbVar6 = (byte ******)local_2c[0];
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        ppppppbVar3 = ppppppbVar6;
        if ((0xfff < local_18 + 1) &&
           (ppppppbVar3 = (byte ******)ppppppbVar6[-1],
           (byte *)0x1f < (byte *)((int)ppppppbVar6 + (-4 - (int)ppppppbVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppppbVar3);
      }
      this_00 = this_00 + 6;
      local_3c = local_3c + 4;
      local_44 = local_44 + 1;
      local_34 = local_34 + 3;
    } while (local_44 < 5);
    fVar8 = *(float *)(param_1 + 0x4e8) - in_XMM1_Da;
    *(float *)(param_1 + 0x4e8) = fVar8;
    if (0.0 >= fVar8) {
      *(undefined4 *)(param_1 + 0x4e8) = 0x40800000;
    }
    iVar4 = *(int *)(param_1 + 0x4ec);
    if (iVar4 == -1) {
      iVar7 = 4;
    }
    else {
      iVar7 = iVar4;
      if (0.0 < fVar8) goto LAB_0058ac9b;
    }
    do {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x4ec) = iVar4;
      if (4 < iVar4) {
        *(undefined4 *)(param_1 + 0x4ec) = 0;
        iVar4 = 0;
      }
      iVar4 = FUN_0050bff0(this,iVar4);
      if (0 < iVar4) goto LAB_0058ac9b;
      iVar4 = *(int *)(param_1 + 0x4ec);
    } while (iVar4 != iVar7);
    *(undefined4 *)(param_1 + 0x4ec) = 0xffffffff;
  }
LAB_0058ac9b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0058acc0(void *this,float param_1)

{
  char cVar1;
  void *this_00;
  undefined3 extraout_var;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_0065b3d4 != (void *)0x0) {
    this_00 = DAT_0065b3d4;
    if (*(char *)((int)this + 0x429) != '\0') {
      this_00 = *(void **)(DAT_0065b5cc + 0xd0);
    }
    if (this_00 != (void *)0x0) {
      iVar4 = 0;
      piVar3 = (int *)((int)this + 0x4c8);
      do {
        cVar1 = FUN_0050be90(this_00,iVar4);
        iVar2 = CONCAT31(extraout_var,cVar1);
        if ((iVar2 == 0) || (iVar2 == 5)) {
          *piVar3 = 0xff;
        }
        else if (*(char *)(iVar4 + 0x4dc + (int)this) == '\0') {
          iVar2 = (int)((float)*piVar3 - *(float *)(&DAT_005e0dc8 + iVar2 * 4) * param_1);
          *piVar3 = iVar2;
          if (iVar2 < 0x41) {
            *piVar3 = 0x40;
            *(undefined1 *)(iVar4 + 0x4dc + (int)this) = 1;
          }
        }
        else {
          iVar2 = (int)((float)*piVar3 + *(float *)(&DAT_005e0dc8 + iVar2 * 4) * param_1);
          *piVar3 = iVar2;
          if (0xfe < iVar2) {
            *piVar3 = 0xff;
            *(undefined1 *)(iVar4 + 0x4dc + (int)this) = 0;
          }
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < 5);
    }
    cVar1 = FUN_0058aa20((int)this);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  return;
}


Node * __thiscall FUN_0058adb0(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_Slider::vftable;
  if (*(int **)((int)this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x43c) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x43c) = 0;
  }
  if (*(int **)((int)this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x438) + 0x138))(1);
    *(undefined4 *)((int)this + 0x438) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  if (*(int **)((int)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x430) + 0x138))(1);
    *(undefined4 *)((int)this + 0x430) = 0;
  }
  if (*(int **)((int)this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x434) + 0x138))(1);
    *(undefined4 *)((int)this + 0x434) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058aec0(int param_1)

{
  if (*(int **)(param_1 + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x438) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  if (*(int **)(param_1 + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int **)(param_1 + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x434) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  return;
}


void __fastcall FUN_0058af60(int *param_1)

{
  int *piVar1;
  int iVar2;
  basic_string<> *pbVar3;
  Scale9Sprite *pSVar4;
  Ref *pRVar5;
  void *pvVar6;
  void *in_stack_ffffff60;
  undefined1 *puVar7;
  char *pcVar8;
  void *in_stack_ffffff88;
  Size local_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca76c;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  param_1[0x112] = 0;
  iVar2 = FUN_004de5d0(param_1[0xfd]);
  piVar1 = (int *)param_1[0x110];
  param_1[0x113] = iVar2;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 < param_1[0x112]) {
      *piVar1 = param_1[0x112];
    }
    else if (iVar2 < *piVar1) {
      *piVar1 = iVar2;
    }
  }
  pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Slider_Background.png");
  local_8 = 0;
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8 = 0xffffffff;
  param_1[0x10e] = (int)pSVar4;
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
  local_30 = 0;
  local_8 = 1;
  (**(code **)(*(int *)param_1[0x10e] + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x10e] + 0x48))();
  iVar2 = *(int *)param_1[0x10e];
  cocos2d::Size::Size((Size *)&local_34,(float)param_1[0xa8],4.0);
  (**(code **)(iVar2 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  pcVar8 = "%c_Slider_Head.png";
  FUN_00591e00(&stack0xffffff88,"%c_Slider_Head.png");
  iVar2 = FUN_00591910(in_stack_ffffff88);
  param_1[0x10f] = iVar2;
  (**(code **)(*param_1 + 0x108))();
  if ((char)param_1[0x10a] != '\0') {
    puVar7 = &stack0xffffff80;
    FUN_00591e00(&stack0xffffff80,&DAT_005e1d38);
    pRVar5 = FUN_0055cb00((Node)0x0,pcVar8);
    param_1[0x10b] = (int)pRVar5;
    local_34 = 0x3f000000;
    local_30 = 0x3f800000;
    local_8 = 2;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*param_1 + 0x108))();
    FUN_00591e00(&stack0xffffff74,&DAT_0062c650);
    pRVar5 = FUN_0055cb00((Node)0x0,puVar7);
    param_1[0x10c] = (int)pRVar5;
    local_34 = 0;
    local_30 = 0;
    local_8 = 3;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)param_1[0x10c] + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    FUN_00591e00(&stack0xffffff60,&DAT_0062c650);
    pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff60);
    param_1[0x10d] = (int)pRVar5;
    local_34 = 0x3f800000;
    local_30 = 0;
    local_8 = 4;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)param_1[0x10d] + 0x48))();
    (**(code **)(*param_1 + 0x108))();
  }
  param_1[0x111] = *(int *)param_1[0x110];
  (**(code **)(*(int *)param_1[0x10f] + 0xb0))();
  (**(code **)(*(int *)param_1[0x10f] + 0x48))();
  if ((int *)param_1[0x10b] != (int *)0x0) {
    iVar2 = *(int *)param_1[0x10b];
    (**(code **)(*(int *)param_1[0x10f] + 0xb0))();
    (**(code **)(iVar2 + 0x48))();
  }
  iVar2 = *param_1;
  cocos2d::Size::Size(local_3c,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar2 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0058b3f0(int *param_1)

{
  int iVar1;
  
  if (DAT_0065b3d4 != 0) {
    if (((((int *)param_1[0x110] == (int *)0x0) || (*(int *)param_1[0x110] == param_1[0x111])) &&
        (param_1[0x112] == 0)) && (iVar1 = FUN_004de5d0(param_1[0xfd]), param_1[0x113] == iVar1)) {
      return;
    }
    (**(code **)(*param_1 + 0x294))();
  }
  return;
}


void __thiscall FUN_0058b440(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*(int *)this + 0x2a8))(param_1,param_2,DAT_0065500c ^ (uint)&stack0xfffffffc,this);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0058b4a0(void *this,float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7329;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = (int)param_1;
  if ((1 < iVar4) && (iVar4 <= *(int *)((int)this + 0x2a0) + -2)) {
    iVar1 = *(int *)((int)this + 0x44c);
    iVar3 = *(int *)((int)this + 0x448);
    iVar4 = (int)(((float)(iVar4 + -2) / (float)(*(int *)((int)this + 0x2a0) + -4)) *
                  (float)(iVar1 - iVar3) + (float)iVar3);
    if ((iVar3 <= iVar4) && (iVar3 = iVar4, iVar1 < iVar4)) {
      iVar3 = iVar1;
    }
    if ((iVar3 != -1) && (iVar3 != **(int **)((int)this + 0x440))) {
      **(int **)((int)this + 0x440) = iVar3;
      (**(code **)(*(int *)this + 0x294))(uVar2);
      FUN_00591070("DETAIL","new value = %d");
      FUN_004dd240(*(undefined4 *)((int)this + 0x3f4));
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0058b590(void *this,double param_1)

{
  if (*(float *)((int)this + 0x434) != (float)(int)param_1) {
    *(float *)((int)this + 0x434) = (float)(int)param_1;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


undefined4 * __thiscall
FUN_0058b5d0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,int param_6,int param_7)

{
  code *pcVar1;
  
  FUN_00553370(this,param_1,param_2,param_3);
  *(int *)((int)this + 0x43c) = param_6;
  *(undefined ***)this = UI_StatusBar::vftable;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x434) = 0x40800000;
  *(undefined4 *)((int)this + 0x438) = param_5;
  *(int *)((int)this + 0x440) = param_7;
  pcVar1 = BLACK_exref;
  *(undefined2 *)((int)this + 0x444) = *(undefined2 *)BLACK_exref;
  *(code *)((int)this + 0x446) = pcVar1[2];
  pcVar1 = RED_exref;
  *(undefined2 *)((int)this + 0x447) = *(undefined2 *)RED_exref;
  *(code *)((int)this + 0x449) = pcVar1[2];
  *(undefined4 *)((int)this + 0x44c) = 0x1e;
  pcVar1 = YELLOW_exref;
  *(undefined2 *)((int)this + 0x450) = *(undefined2 *)YELLOW_exref;
  *(code *)((int)this + 0x452) = pcVar1[2];
  *(undefined4 *)((int)this + 0x454) = 0x50;
  pcVar1 = GREEN_exref;
  *(undefined2 *)((int)this + 0x458) = *(undefined2 *)GREEN_exref;
  *(code *)((int)this + 0x45a) = pcVar1[2];
  *(bool *)((int)this + 0x430) = param_7 < param_6;
  return this;
}


Node * __thiscall FUN_0058b6c0(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_StatusBar::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058b770(int *param_1)

{
  int iVar1;
  int *piVar2;
  Sprite *pSVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  int *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca7c2;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  (**(code **)(*param_1 + 0x290))(local_14);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"white.png",9);
  local_8 = 0;
  pSVar3 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  param_1[0x10a] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar10);
  }
  iVar6 = param_1[0x110];
  iVar1 = *(int *)param_1[0x10a];
  iVar4 = (**(code **)(iVar1 + 0xb0))();
  iVar8 = param_1[0x10f];
  local_34 = *(float *)(iVar4 + 4);
  pfVar5 = (float *)(**(code **)(*(int *)local_30[0x10a] + 0xb0))();
  piVar2 = local_30;
  (**(code **)(iVar1 + 0x3c))((float)iVar8 / *pfVar5,(float)iVar6 / local_34);
  (**(code **)(*(int *)piVar2[0x10a] + 0x25c))(piVar2 + 0x111);
  local_40 = 0;
  local_3c = 0.0;
  local_8 = 1;
  (**(code **)(*(int *)piVar2[0x10a] + 0xa0))(&local_40);
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x108))(piVar2[0x10a],0xffffffff);
  local_38 = (float)*piVar2;
  iVar6 = (**(code **)(*(int *)piVar2[0x10a] + 0xb0))();
  local_34 = *(float *)(iVar6 + 4);
  iVar6 = *(int *)piVar2[0x10a];
  pfVar5 = (float *)(**(code **)(*(int *)piVar2[0x10a] + 0xb0))();
  piVar2 = (int *)piVar2[0x10a];
  fVar11 = (float10)(**(code **)(iVar6 + 0x30))();
  fVar12 = (float)(fVar11 * (float10)local_34);
  fVar11 = (float10)(**(code **)(*piVar2 + 0x28))();
  uVar7 = cocos2d::Size::Size((Size *)&local_40,(float)(fVar11 * (float10)*pfVar5),fVar12);
  piVar2 = local_30;
  (**(code **)((int)local_38 + 0xac))(uVar7);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"white.png",9);
  local_8 = 2;
  pSVar3 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  piVar2[0x10b] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar10);
  }
  iVar6 = piVar2[0x110];
  iVar1 = *(int *)piVar2[0x10b];
  if ((char)piVar2[0x10c] == '\0') {
    iVar8 = (**(code **)(*(int *)piVar2[0x10a] + 0xb0))();
    local_38 = *(float *)(iVar8 + 4);
    local_34 = (float)piVar2[0x10d];
    local_3c = (float)piVar2[0x10e];
    iVar8 = piVar2[0x10f];
    pfVar5 = (float *)(**(code **)(*(int *)local_30[0x10b] + 0xb0))();
    fVar12 = (((float)(iVar6 + -2) / local_38) * local_34) / local_3c;
    fVar13 = (float)(iVar8 + -2) / *pfVar5;
  }
  else {
    iVar4 = (**(code **)(*(int *)piVar2[0x10a] + 0xb0))();
    iVar8 = piVar2[0x10f];
    local_38 = *(float *)(iVar4 + 4);
    pfVar5 = (float *)(**(code **)(*(int *)local_30[0x10b] + 0xb0))();
    fVar12 = (float)(iVar6 + -2) / local_38;
    fVar13 = ((float)(iVar8 + -2) / *pfVar5) * ((float)local_30[0x10d] / (float)local_30[0x10e]);
  }
  piVar2 = local_30;
  (**(code **)(iVar1 + 0x3c))(fVar13,fVar12);
  (**(code **)(*(int *)piVar2[0x10b] + 0x48))(0x3f800000,0x3f800000);
  local_48 = 0;
  local_44 = 0;
  local_8 = 3;
  (**(code **)(*(int *)piVar2[0x10b] + 0xa0))(&local_48);
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x10c))(piVar2[0x10b]);
  iVar6 = (int)(((float)piVar2[0x10d] / (float)piVar2[0x10e]) * 100.0);
  if (piVar2[0x115] < iVar6) {
    piVar9 = piVar2 + 0x116;
  }
  else {
    piVar9 = piVar2 + 0x114;
    if (iVar6 <= piVar2[0x113]) {
      piVar9 = (int *)((int)piVar2 + 0x447);
    }
  }
  (**(code **)(*(int *)piVar2[0x10b] + 0x25c))(piVar9);
  *(undefined1 *)piVar2[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_0058bba0(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_SystemBar::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058bc50(int *param_1)

{
  int iVar1;
  basic_string<> *pbVar2;
  Scale9Sprite *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  Size local_34 [8];
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9f98;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))(local_14);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_MenuBar.png");
  local_8 = 0;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x10b] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  iVar1 = *(int *)param_1[0x10b];
  uVar4 = cocos2d::Size::Size(local_34,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))(uVar4);
  (**(code **)(*param_1 + 0x10c))(param_1[0x10b]);
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0058bd70(void *this,undefined8 param_1)

{
  *(undefined8 *)((int)this + 0x468) = param_1;
  (**(code **)(*(int *)this + 0x294))();
  return;
}


Node * __thiscall FUN_0058bd90(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_Text::vftable;
  if (*(int **)((int)this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x470) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x470) = 0;
  }
  if (0xf < *(uint *)((int)this + 0x460)) {
    pvVar1 = *(void **)((int)this + 0x44c);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x460) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0058bec7;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x460) = 0xf;
  *(undefined1 *)((int)this + 0x44c) = 0;
  if (0xf < *(uint *)((int)this + 0x448)) {
    pvVar1 = *(void **)((int)this + 0x434);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x448) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_0058bec7:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0xf;
  *(undefined1 *)((int)this + 0x434) = 0;
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058bed0(int param_1)

{
  if (*(int **)(param_1 + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x470) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x470) = 0;
  }
  return;
}


void __fastcall FUN_0058bf00(int *param_1)

{
  int iVar1;
  void **ppvVar2;
  Ref *pRVar3;
  void *pvVar4;
  int *piVar5;
  void *in_stack_ffffff90;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  void *pvStack_28;
  void *pvStack_24;
  void *pvStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca801;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  piVar5 = param_1 + 0x10d;
  FUN_004024e0(&local_2c,piVar5);
  local_8 = 0;
  if ((char)param_1[0x10a] == '\0') {
    if (0xf < (uint)param_1[0x112]) {
      piVar5 = (int *)*piVar5;
    }
    ppvVar2 = (void **)FUN_00591e00((undefined1 *)local_44,piVar5);
    if (&local_2c != ppvVar2) {
      FUN_00401b20((int *)&local_2c);
      local_2c = *ppvVar2;
      pvStack_28 = ppvVar2[1];
      pvStack_24 = ppvVar2[2];
      pvStack_20 = ppvVar2[3];
      local_1c = *(undefined8 *)(ppvVar2 + 4);
      ppvVar2[4] = (void *)0x0;
      ppvVar2[5] = (void *)0xf;
      *(undefined1 *)ppvVar2 = 0;
    }
    if (0xf < local_30) {
      pvVar4 = local_44[0];
      if (0xfff < local_30 + 1) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar4);
    }
  }
  FUN_004024e0(&stack0xffffff90,&local_2c);
  pRVar3 = FUN_0055ca10(param_1[0x10b],param_1[0x10c],(Node)0x0,in_stack_ffffff90);
  param_1[0x11c] = (int)pRVar3;
  local_8._0_1_ = 1;
  (**(code **)(*(int *)pRVar3 + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(*(int *)param_1[0x11c] + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  iVar1 = *param_1;
  (**(code **)(*(int *)param_1[0x11c] + 0xb0))();
  (**(code **)(iVar1 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  if (0xf < local_1c._4_4_) {
    pvVar4 = local_2c;
    if (0xfff < local_1c._4_4_ + 1) {
      pvVar4 = *(void **)((int)local_2c + -4);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
