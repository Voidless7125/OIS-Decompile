#include "../ois_server.exe.h"


void __thiscall FUN_00530000(void *this,int param_1)

{
  Node *pNVar1;
  undefined4 *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  RotateTo *pRVar6;
  void *this_01;
  float fVar7;
  uint in_stack_ffffff9c;
  byte *pbVar8;
  float fVar9;
  undefined4 local_38;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c449c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x2d4) != 0) {
    FUN_0052f8b0(this,&local_1c,param_1);
    local_8 = 0;
    if (*(int *)(param_1 + 0x28) == 1) {
      if (((*(int *)((int)this + 0x3a0) == 0) || (*(char *)((int)this + 0x39d) == '\0')) ||
         (DAT_0065b3e8 == '\0')) {
        pNVar1 = FUN_00412990();
        if (pNVar1[0x285] != (Node)0x0) {
          FUN_00412990();
          FUN_00524240();
        }
        if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
            (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
           (*(int *)((int)this + 0x350) != 0)) {
          pbVar8 = (byte *)(in_stack_ffffff9c & 0xffffff00);
          FUN_00402690(&stack0xffffff9c,"has_zoomed_from_monitor",0x17);
          local_8._0_1_ = 1;
          this_00 = FUN_00412df0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004a0ee0(this_00,pbVar8);
        }
        FUN_00530750(this,0xffffffff);
      }
    }
    else if (((*(int *)((int)this + 0x354) == 0) || (*(int *)((int)this + 0x350) == 0)) ||
            (*(char *)(*(int *)((int)this + 0x350) + 4) == '\0')) {
      if (((*(int *)((int)this + 0x3a0) == 0) || (*(char *)((int)this + 0x39d) == '\0')) &&
         (iVar2 = FUN_00535370(*(void **)((int)this + 0x2d4),local_1c,local_18), iVar2 != 0)) {
        uVar3 = FUN_00532810((int)this);
        if ((char)uVar3 != '\0') {
          ExceptionList = local_10;
          return;
        }
        iVar4 = FUN_0052b780(iVar2);
        if ((char)iVar4 == '\0') {
          if (*(uint *)(iVar2 + 900) == 0xffffffff) {
            if (*(int *)(iVar2 + 0x61c) != 0) {
              if ((*(char *)(iVar2 + 0x5ec) == '\0') && (*(char *)(DAT_0065b444 + 0x71) != '\0')) {
                FUN_004122b0();
                FUN_0041c620(*(undefined4 *)(iVar2 + 0x5f0),0);
              }
              else {
                FUN_00417820(iVar2 + 0x5f8);
              }
              iVar2 = *(int *)(iVar2 + 0x368);
              if (iVar2 != 0) {
                iVar4 = -1;
                this_01 = (void *)FUN_00402f60();
                FUN_00557f80(this_01,iVar2,iVar4);
              }
            }
          }
          else {
            FUN_00530750(this,*(uint *)(iVar2 + 900));
          }
        }
        else {
          (**(code **)(**(int **)(iVar2 + 0x3dc) + 200))();
          *(ulonglong *)(iVar2 + 0x40) = CONCAT44(fStack_34,local_38);
          *(undefined4 *)(iVar2 + 0x48) = local_30;
          local_24 = 0.0;
          local_20 = 0;
          local_8._0_1_ = 3;
          pfVar5 = (float *)(**(code **)(**(int **)(iVar2 + 0x3dc) + 0x5c))();
          fVar7 = *pfVar5;
          local_24 = fVar7;
          iVar4 = (**(code **)(**(int **)(iVar2 + 0x3dc) + 0x5c))();
          local_20 = *(undefined4 *)(iVar4 + 4);
          local_8._0_1_ = 4;
          local_2c = *(float *)(iVar2 + 0x3b8);
          local_28 = *(undefined4 *)(iVar2 + 0x3bc);
          FUN_00592f80(fVar7,local_20,local_2c);
          if (DAT_0065b3eb == '\0') {
            fVar7 = fVar7 + 90.0;
          }
          fVar9 = 4.0;
          iVar4 = **(int **)(iVar2 + 0x3dc);
          fStack_34 = fVar7;
          pRVar6 = cocos2d::RotateTo::create(1.4,(Vec3 *)&local_38);
          cocos2d::EaseInOut::create((ActionInterval *)pRVar6,fVar9);
          (**(code **)(iVar4 + 0x1d0))();
          local_8 = (uint)local_8._1_3_ << 8;
          cocos2d::Vec3::~Vec3((Vec3 *)&local_38);
          FUN_00530750(this,*(uint *)(iVar2 + 900));
        }
      }
    }
    else {
      local_1c = local_1c / DAT_0065ba28;
      local_18 = local_18 / DAT_0065ba2c;
      (**(code **)(**(int **)((int)this + 0x354) + 4))();
    }
    if (*(char *)(DAT_0065b444 + 0x1c6) != '\0') {
      *(undefined1 *)(DAT_0065b444 + 0x1c6) = 0;
      FUN_00529a20();
      FUN_0052a5a0();
      DAT_00655098 = 2;
      DAT_00655094 = 2;
      FUN_0052b100(*(int *)(DAT_0065b5cc + 0xd0),0.0);
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00530400(void *this,int param_1)

{
  uint uVar1;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1f69;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0052f8b0(this,&local_18,param_1);
  local_8 = 0;
  if (((*(int *)((int)this + 0x354) != 0) && (*(int *)((int)this + 0x350) != 0)) &&
     (*(char *)(*(int *)((int)this + 0x350) + 4) != '\0')) {
    local_18 = local_18 / DAT_0065ba28;
    local_14 = local_14 / DAT_0065ba2c;
    if (*(int *)(param_1 + 0x28) != 1) {
      (**(code **)**(undefined4 **)((int)this + 0x354))(local_18,local_14,uVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005304b0(void *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1f69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0052f8b0(this,&local_18,param_1);
  local_8 = 0;
  bVar1 = *(float *)(param_1 + 0x38) == 0.0;
  bVar2 = 0.0 < *(float *)(param_1 + 0x38);
  if (DAT_00655068 != '\0') {
    if ((*(int *)((int)this + 0x3a0) != 0) && (*(char *)((int)this + 0x39d) != '\0')) {
      if (DAT_0065b3e8 != '\0') {
        ExceptionList = local_10;
        return;
      }
      FUN_0052f030(this,'\0');
      ExceptionList = local_10;
      return;
    }
    if (*(int *)((int)this + 0x350) == 0) {
      if (((bVar2 || bVar1) ||
          (iVar3 = FUN_00535370(*(void **)((int)this + 0x2d4),local_18,local_14), iVar3 == 0)) ||
         (uVar4 = *(uint *)(iVar3 + 900), uVar4 == 0xffffffff)) goto LAB_00530596;
    }
    else {
      if (!bVar2 && !bVar1) goto LAB_00530596;
      uVar4 = 0xffffffff;
    }
    FUN_00530750(this,uVar4);
  }
LAB_00530596:
  if ((*(int *)((int)this + 0x350) != 0) && (*(char *)(*(int *)((int)this + 0x350) + 4) != '\0')) {
    local_18 = local_18 / DAT_0065ba28;
    local_14 = local_14 / DAT_0065ba2c;
  }
  *(float *)((int)this + 0x394) = local_18;
  *(float *)((int)this + 0x398) = local_14;
  ExceptionList = local_10;
  return;
}


uint __cdecl FUN_005305f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  char cVar4;
  Layer *pLVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint in_stack_ffffffc8;
  void *pvVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c44d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  dVar3 = (double)CONCAT44(param_3,param_2);
  uVar7 = (uint)CONCAT21((short)((uint)ExceptionList >> 0x10),
                         (dVar3 == -1.0) << 6 | NAN(dVar3) << 2 | 2U | dVar3 < -1.0) << 8;
  if (dVar3 != -1.0) {
    FUN_00591070("RENDER","toggling object %d");
    if (DAT_0065c25c == (Layer *)0x0) {
      pLVar5 = (Layer *)FUN_005adb0f(0x418);
      local_8 = 0;
      DAT_0065c25c = FUN_0052b7a0(pLVar5);
      local_8 = 0xffffffff;
    }
    iVar6 = *(int *)(DAT_0065c25c + 0x2d4);
    uVar7 = 0;
    piVar1 = *(int **)(iVar6 + 0x90);
    uVar9 = *(int *)(iVar6 + 0x94) - (int)piVar1 >> 2;
    piVar8 = piVar1;
    if (uVar9 != 0) {
      while (iVar6 = *piVar8, *(int *)(iVar6 + 0x50) != (int)dVar3) {
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
        if (uVar9 <= uVar7) {
          ExceptionList = local_10;
          return CONCAT31((int3)((uint)iVar6 >> 8),1);
        }
      }
      iVar2 = piVar1[uVar7];
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x584) != 0) {
          iVar6 = DAT_0065b3d4;
          if (DAT_0065b3d4 == 0) {
            iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
          }
          pvVar10 = (void *)(in_stack_ffffffc8 & 0xffffff00);
          FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
          cVar4 = FUN_00417780((void *)(iVar2 + 0x560),iVar6,0,pvVar10);
          uVar7 = CONCAT31(extraout_var,cVar4);
          if (cVar4 == '\0') goto LAB_00530628;
        }
        iVar6 = FUN_0053bb20(iVar2);
      }
    }
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)iVar6 >> 8),1);
  }
LAB_00530628:
  ExceptionList = local_10;
  return uVar7 & 0xffffff00;
}


void __thiscall FUN_00530750(void *this,uint param_1)

{
  void *pvVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte ****ppppbVar13;
  float in_XMM2_Da;
  ulonglong in_stack_ffffff40;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  byte ***local_48 [2];
  Vec3 local_40 [8];
  uint local_38;
  uint local_34;
  byte ***local_30 [2];
  Vec3 local_28 [8];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4533;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int **)((int)this + 0x350) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x350) + 0x24))();
  }
  *(undefined8 *)((int)this + 0x314) = *(undefined8 *)((int)this + 0x2fc);
  *(undefined4 *)((int)this + 0x31c) = *(undefined4 *)((int)this + 0x304);
  *(undefined8 *)((int)this + 800) = *(undefined8 *)((int)this + 0x308);
  *(undefined4 *)((int)this + 0x328) = *(undefined4 *)((int)this + 0x310);
  *(uint *)((int)this + 0x3b0) = param_1;
  cocos2d::Vec3::Vec3(local_40,(Vec3 *)(*(int *)((int)this + 0x2d4) + 0x74));
  local_8 = 0;
  cocos2d::Vec3::operator*(local_40,(float)&local_54);
  local_8 = 0xffffffff;
  cocos2d::Vec3::~Vec3(local_40);
  *(ulonglong *)((int)this + 0x32c) = CONCAT44(uStack_50,local_54);
  *(undefined4 *)((int)this + 0x334) = local_4c;
  cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
  DAT_0065b3e8 = 0;
  *(undefined8 *)((int)this + 0x338) = *(undefined8 *)(*(int *)((int)this + 0x2d4) + 0x80);
  *(undefined4 *)((int)this + 0x340) = *(undefined4 *)(*(int *)((int)this + 0x2d4) + 0x88);
  FUN_00402690(&DAT_00655858,&PTR_005ce008,0);
  *(float *)((int)this + 0x40c) = in_XMM2_Da;
  *(undefined4 *)((int)this + 0x410) = 0;
  if ((int)param_1 < 0) {
LAB_00530d26:
    pvVar1 = *(void **)((int)this + 0x2d4);
    if (*(int *)((int)pvVar1 + 0x38) != -1) {
      iVar9 = FUN_005352e0(pvVar1,*(int *)((int)pvVar1 + 0x38));
      *(int *)((int)this + 0x34c) = iVar9;
      *(undefined4 *)((int)this + 0x348) = *(undefined4 *)((int)pvVar1 + 0x38);
      uVar7 = FUN_00535280(pvVar1,*(int *)((int)pvVar1 + 0x38));
      *(undefined4 *)((int)this + 0x350) = uVar7;
      uVar7 = FUN_00535230(pvVar1,*(int *)((int)pvVar1 + 0x38));
      iVar6 = DAT_0065b5cc;
      *(undefined4 *)((int)this + 0x354) = uVar7;
      iVar9 = *(int *)(*(int *)(iVar6 + 0xd0) + 0x224);
      *(undefined4 *)(iVar9 + 0x58) = uVar7;
      if (*(int *)(iVar9 + 0x10) != 0) {
        FUN_005273a0(iVar9);
        iVar6 = DAT_0065b5cc;
      }
      *(undefined4 *)(iVar9 + 0x58) = 0;
      FUN_005273a0(*(int *)(*(int *)(iVar6 + 0xd0) + 0x224));
      goto LAB_00530daf;
    }
    if (*(int *)(DAT_0065b5cc + 0xd0) != 0) {
      FUN_005278f0(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224));
    }
    *(undefined4 *)((int)this + 0x354) = 0;
    *(undefined4 *)((int)this + 0x350) = 0;
    *(undefined4 *)((int)this + 0x34c) = 0;
    *(undefined4 *)((int)this + 0x348) = 0xffffffff;
    (**(code **)(**(int **)((int)this + 0x364) + 0xb4))();
    if (*(int *)(DAT_0065b5cc + 0xd0) != 0) {
      iVar9 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
      iVar6 = *(int *)((int)*(void **)((int)this + 0x2d4) + 0x3c);
      if (iVar6 == -1) {
        *(undefined4 *)(iVar9 + 0x58) = 0;
      }
      else {
        uVar7 = FUN_00535230(*(void **)((int)this + 0x2d4),iVar6);
        *(undefined4 *)(iVar9 + 0x58) = uVar7;
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        FUN_005273a0(iVar9);
      }
      *(undefined4 *)(iVar9 + 0x58) = 0;
    }
  }
  else {
    pvVar1 = *(void **)((int)this + 0x2d4);
    if ((uint)((*(int *)((int)pvVar1 + 0xa8) - *(int *)((int)pvVar1 + 0xa4)) / 0x1c) <= param_1)
    goto LAB_00530d26;
    iVar6 = param_1 * 0x1c;
    iVar9 = *(int *)(iVar6 + 0x18 + *(int *)((int)pvVar1 + 0xa4));
    *(int *)((int)this + 0x348) = iVar9;
    uVar7 = FUN_00535280(pvVar1,iVar9);
    *(undefined4 *)((int)this + 0x350) = uVar7;
    iVar8 = FUN_005352e0(pvVar1,iVar9);
    *(int *)((int)this + 0x34c) = iVar8;
    iVar9 = FUN_005352e0(pvVar1,iVar9);
    FUN_0052f510(this,iVar9);
    if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
        (*(int *)((int)this + 0x350) != 0)) &&
       (iVar9 = *(int *)(*(int *)((int)this + 0x350) + 0x10), iVar9 != 0)) {
      pbVar12 = (byte *)(iVar9 + 0x18);
      if (0xf < *(uint *)(iVar9 + 0x2c)) {
        pbVar12 = *(byte **)(iVar9 + 0x18);
      }
      uVar10 = FUN_004031f0(pbVar12,*(uint *)(iVar9 + 0x28),(byte *)"c_nav",5);
      if ((char)uVar10 != '\0') {
        in_stack_ffffff40 = in_stack_ffffff40 & 0xffffffffffffff00;
        FUN_00402690(&stack0xffffff40,"has_viewed_nav_screen",0x15);
        local_8 = 1;
        puVar11 = FUN_00412df0();
        local_8 = 0xffffffff;
        FUN_004a0ee0(puVar11,(byte *)in_stack_ffffff40);
      }
    }
    puVar11 = (undefined4 *)(in_stack_ffffff40 >> 0x20);
    iVar9 = *(int *)(*(int *)((int)this + 0x34c) + 0x3c);
    if ((iVar9 == 5) || (iVar9 == 6)) {
      uStack_68 = 0;
      local_64 = 0xf;
      local_8 = 2;
      iVar9 = *(int *)(*(int *)((int)this + 0x34c) + 0x100);
      if ((iVar9 == 0) || (iVar9 = *(int *)(iVar9 + 0x1c), iVar9 == 0)) {
LAB_00530cdf:
        *(undefined4 *)((int)this + 0x354) = 0;
        *(undefined4 *)((int)this + 0x350) = 0;
        *(undefined4 *)((int)this + 0x34c) = 0;
        *(undefined4 *)((int)this + 0x348) = 0xffffffff;
        *(undefined4 *)((int)this + 0x3b0) = 0xffffffff;
        (**(code **)(**(int **)((int)this + 0x364) + 0xb4))();
        goto LAB_00530f62;
      }
      uStack_50 = 0;
      local_4c = 0xf;
      local_60 = 0;
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      FUN_004024e0(local_48,(undefined4 *)(iVar9 + 0xf8));
      local_8 = CONCAT31(local_8._1_3_,4);
      ppppbVar13 = local_48;
      if (0xf < local_34) {
        ppppbVar13 = (byte ****)local_48[0];
      }
      bVar3 = false;
      uVar10 = FUN_004031f0((byte *)ppppbVar13,local_38,(byte *)"femalepassenger",0xf);
      if ((char)uVar10 == '\0') {
        FUN_004024e0(local_30,(undefined4 *)
                              (*(int *)(*(int *)(*(int *)((int)this + 0x34c) + 0x100) + 0x1c) + 0xf8
                              ));
        ppppbVar13 = local_30;
        if (0xf < local_1c) {
          ppppbVar13 = (byte ****)local_30[0];
        }
        bVar3 = true;
        uVar10 = FUN_004031f0((byte *)ppppbVar13,local_20,(byte *)"malepassenger",0xd);
        if ((char)uVar10 != '\0') goto LAB_00530a97;
        bVar4 = false;
      }
      else {
LAB_00530a97:
        bVar4 = true;
      }
      if ((bVar3) && (0xf < local_1c)) {
        ppppbVar13 = (byte ****)local_30[0];
        if ((0xfff < local_1c + 1) &&
           (ppppbVar13 = (byte ****)local_30[0][-1],
           (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar13);
      }
      local_8 = 3;
      if (0xf < local_34) {
        ppppbVar13 = (byte ****)local_48[0];
        if ((0xfff < local_34 + 1) &&
           (ppppbVar13 = (byte ****)local_48[0][-1],
           (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar13);
      }
      if (bVar4) {
        piVar2 = *(int **)(DAT_0065b5cc + 0x128);
        if ((((piVar2 == (int *)0x0) || (*piVar2 == 0)) || (*(int *)(*piVar2 + 0x5c) < 0)) ||
           ((char)piVar2[0x24] != '\0')) goto LAB_00530cdf;
        puVar11 = (undefined4 *)(CONCAT35((int3)((uint)puVar11 >> 8),9) >> 0x20);
        FUN_00402690(&stack0xffffff44,"passenger",9);
        FUN_005325c0(this,*(int *)(**(int **)(DAT_0065b5cc + 0x128) + 0x5c),puVar11);
        *(undefined1 *)(*(int *)(DAT_0065b5cc + 0x128) + 0x90) = 1;
      }
      else {
        FUN_004024e0(&stack0xffffff44,
                     (undefined4 *)
                     (*(int *)(*(int *)(*(int *)((int)this + 0x34c) + 0x100) + 0x1c) + 0xf8));
        cVar5 = FUN_005325c0(this,-1,puVar11);
        if (cVar5 == '\0') goto LAB_00530cdf;
        FUN_00402690((void *)(*(int *)((int)this + 0x34c) + 200),&PTR_005ce008,0);
      }
      FUN_0053be80(*(int *)((int)this + 0x3a0));
      FUN_0053b6a0(*(int *)((int)this + 0x3a0));
      FUN_0052eec0(this,4);
      local_8 = 0xffffffff;
    }
    cocos2d::Vec3::Vec3(local_28,(Vec3 *)(*(int *)(*(int *)((int)this + 0x2d4) + 0xa4) + iVar6));
    local_8 = 5;
    cocos2d::Vec3::operator*(local_28,(float)&local_6c);
    local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_28);
    *(ulonglong *)((int)this + 0x32c) = CONCAT44(uStack_68,local_6c);
    *(undefined4 *)((int)this + 0x334) = local_64;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_6c);
    iVar9 = *(int *)((int)*(void **)((int)this + 0x2d4) + 0xa4);
    *(undefined8 *)((int)this + 0x338) = *(undefined8 *)(iVar9 + 0xc + iVar6);
    *(undefined4 *)((int)this + 0x340) = *(undefined4 *)(iVar9 + 0x14 + iVar6);
    uVar7 = FUN_00535230(*(void **)((int)this + 0x2d4),*(int *)((int)this + 0x348));
    iVar9 = DAT_0065b5cc;
    *(undefined4 *)((int)this + 0x354) = uVar7;
    iVar9 = *(int *)(*(int *)(iVar9 + 0xd0) + 0x224);
    *(undefined4 *)(iVar9 + 0x58) = uVar7;
    if (*(int *)(iVar9 + 0x10) != 0) {
      FUN_005273a0(iVar9);
    }
    *(undefined4 *)(iVar9 + 0x58) = 0;
LAB_00530daf:
    (**(code **)(**(int **)((int)this + 0x364) + 0xb4))();
  }
  if (in_XMM2_Da == 0.0) {
    *(undefined8 *)((int)this + 0x2fc) = *(undefined8 *)((int)this + 0x32c);
    *(undefined4 *)((int)this + 0x304) = *(undefined4 *)((int)this + 0x334);
    *(undefined8 *)((int)this + 0x308) = *(undefined8 *)((int)this + 0x338);
    *(undefined1 *)((int)this + 0x344) = 0;
    *(undefined4 *)((int)this + 0x310) = *(undefined4 *)((int)this + 0x340);
  }
  else {
    *(undefined1 *)((int)this + 0x344) = 1;
  }
  FUN_00591070("RENDER","Moving camera from %f, %f, %f -> %f, %f, %f, taking %f seconds");
  if (((param_1 == 0xffffffff) && (*(int *)((int)this + 0x3a0) != 0)) &&
     (*(char *)((int)this + 0x39d) != '\0')) {
    FUN_0052f030(this,'\0');
  }
LAB_00530f62:
  iVar9 = FUN_005352e0(*(void **)((int)this + 0x2d4),*(int *)((int)this + 0x348));
  FUN_0052f510(this,iVar9);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 * FUN_00530fa0(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int *this;
  int local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4568;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_8 = 0;
  local_14 = 0;
  iVar3 = *(int *)((int)_DstBuf_0065b3dc + 0x18);
  if (*(int *)((int)_DstBuf_0065b3dc + 0x1c) - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + local_14 * 4);
      uVar6 = 0;
      iVar4 = *(int *)(iVar3 + 0x90);
      if (*(int *)(iVar3 + 0x94) - iVar4 >> 2 != 0) {
        do {
          iVar3 = *(int *)(iVar4 + uVar6 * 4);
          if (*(char *)(iVar3 + 0xfe) != '\0') {
            pbVar7 = (byte *)(iVar3 + 0x58);
            pbVar5 = pbVar7;
            if (0xf < *(uint *)(iVar3 + 0x6c)) {
              pbVar5 = *(byte **)pbVar7;
            }
            uVar1 = FUN_004031f0(pbVar5,*(uint *)(iVar3 + 0x68),(byte *)&PTR_005ce008,0);
            if ((char)uVar1 == '\0') {
              if (local_18 == this) {
                FUN_00403840(&local_20,this,(undefined4 *)pbVar7);
                this = local_1c;
              }
              else {
                FUN_004024e0(this,(undefined4 *)pbVar7);
                local_1c = this + 6;
                this = local_1c;
              }
            }
          }
          uVar6 = uVar6 + 1;
          iVar3 = *(int *)(*(int *)((int)_DstBuf_0065b3dc + 0x18) + local_14 * 4);
          iVar4 = *(int *)(iVar3 + 0x90);
        } while (uVar6 < (uint)(*(int *)(iVar3 + 0x94) - iVar4 >> 2));
      }
      local_14 = local_14 + 1;
      iVar3 = *(int *)((int)_DstBuf_0065b3dc + 0x18);
    } while (local_14 < (uint)(*(int *)((int)_DstBuf_0065b3dc + 0x1c) - iVar3 >> 2));
  }
  iVar4 = local_20;
  iVar3 = ((int)this - local_20) / 0x18;
  if (iVar3 != 0) {
    iVar2 = rand();
    FUN_004024e0(param_1,(undefined4 *)(iVar4 + (iVar2 % (iVar3 + -1)) * 0x18));
    FUN_004025a0(&local_20);
    ExceptionList = local_10;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  FUN_004025a0(&local_20);
  ExceptionList = local_10;
  return param_1;
}


void __thiscall FUN_00531140(void *this,byte *param_1)

{
  undefined1 *puVar1;
  byte ****ppppbVar2;
  uint uVar3;
  byte **ppbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  float in_XMM1_Da;
  float in_XMM2_Da;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte ***local_48 [4];
  uint local_38;
  uint local_34;
  float local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  pbVar5 = param_1;
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005c45ab;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_14 = 0;
  local_24 = this;
  puVar1 = &stack0xfffffffc;
  if (DAT_0065b3cf != '\0') goto LAB_005312a9;
  if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
    local_2c = in_XMM2_Da;
    puStack_20 = &stack0xfffffffc;
    FUN_004024e0(local_48,&param_1);
    local_14._0_1_ = 1;
    local_24 = FUN_00402de0();
    local_14 = CONCAT31(local_14._1_3_,2);
    uVar8 = 0;
    iVar9 = *(int *)(local_24 + 0x3c);
    if (*(int *)(local_24 + 0x40) - iVar9 >> 2 != 0) {
      do {
        local_28 = *(undefined4 **)(iVar9 + uVar8 * 4);
        pbVar5 = (byte *)(local_28 + 0x12);
        ppppbVar2 = local_48;
        if (0xf < local_34) {
          ppppbVar2 = (byte ****)local_48[0];
        }
        if (0xf < (uint)local_28[0x17]) {
          pbVar5 = *(byte **)pbVar5;
        }
        uVar3 = FUN_004031f0(pbVar5,local_28[0x16],(byte *)ppppbVar2,local_38);
        if ((char)uVar3 != '\0') {
          puVar6 = local_28;
          if (DAT_0065c2c8 == 0) {
            DAT_0065c2c8 = FUN_005adb0f(1);
            puVar6 = *(undefined4 **)(iVar9 + uVar8 * 4);
          }
          FUN_0041daa0(*puVar6,puVar6[1],puVar6[2],puVar6[3],0,local_2c);
        }
        uVar8 = uVar8 + 1;
        iVar9 = *(int *)(local_24 + 0x3c);
      } while (uVar8 < (uint)(*(int *)(local_24 + 0x40) - iVar9 >> 2));
    }
    pbVar5 = param_1;
    puVar1 = puStack_20;
    if (0xf < local_34) {
      ppppbVar2 = (byte ****)local_48[0];
      if ((0xfff < local_34 + 1) &&
         (ppppbVar2 = (byte ****)local_48[0][-1],
         (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)ppppbVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar2);
      pbVar5 = param_1;
      puVar1 = puStack_20;
    }
    goto LAB_005312a9;
  }
  iVar9 = *(int *)(DAT_0065b5cc + 0xd0);
  puVar1 = &stack0xfffffffc;
  if (iVar9 == 0) {
LAB_00531324:
    puStack_20 = puVar1;
    ppbVar4 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar4 = (byte **)pbVar5;
    }
    uVar8 = FUN_004031f0((byte *)ppbVar4,in_stack_00000014,(byte *)&PTR_005ce008,0);
    puVar1 = puStack_20;
    if ((char)uVar8 == '\0') goto LAB_005312a9;
  }
  else {
    pbVar7 = (byte *)(iVar9 + 0x238);
    ppbVar4 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar4 = (byte **)param_1;
    }
    if (0xf < *(uint *)(iVar9 + 0x24c)) {
      pbVar7 = *(byte **)(iVar9 + 0x238);
    }
    uVar8 = FUN_004031f0(pbVar7,*(uint *)(iVar9 + 0x248),(byte *)ppbVar4,in_stack_00000014);
    puVar1 = puStack_20;
    if ((char)uVar8 == '\0') goto LAB_00531324;
  }
  if (*(float *)(local_24 + 0x3d8) <= in_XMM2_Da && in_XMM2_Da != *(float *)(local_24 + 0x3d8)) {
    *(float *)(local_24 + 0x3d8) = in_XMM2_Da;
  }
  puVar1 = puStack_20;
  if (*(float *)(local_24 + 0x400) <= in_XMM1_Da && in_XMM1_Da != *(float *)(local_24 + 0x400)) {
    *(float *)(local_24 + 0x400) = in_XMM1_Da;
  }
LAB_005312a9:
  puStack_20 = puVar1;
  if (0xf < in_stack_00000018) {
    pbVar7 = pbVar5;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar7 = *(byte **)(pbVar5 + -4), (byte *)0x1f < pbVar5 + (-4 - (int)pbVar7))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  ExceptionList = local_1c;
  return;
}


void __thiscall FUN_005313a0(void *this,int param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  
  if ((char)param_1 == '\0') {
    puVar2 = (undefined2 *)((int)&param_1 + 1);
    param_1 = (uint)*(uint3 *)(*(int *)((int)this + 0x2d4) + 0x8c) << 8;
  }
  else {
    puVar2 = (undefined2 *)cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),0x80,'\0',0x80);
  }
  *(undefined2 *)((int)this + 0x3cc) = *puVar2;
  *(undefined1 *)((int)this + 0x3ce) = *(undefined1 *)(puVar2 + 1);
  bVar1 = cocos2d::Color3B::operator==
                    ((Color3B *)((int)this + 0x3cf),(Color3B *)((int)this + 0x3cc));
  if (!bVar1) {
    *(undefined4 *)((int)this + 0x3c4) = 0;
    *(undefined4 *)((int)this + 0x3c8) = 0x40000000;
    *(undefined1 *)((int)this + 0x3c0) = 1;
  }
  return;
}


void __thiscall FUN_00531430(void *this,char param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  
  if ((*(int *)((int)this + 0x2d4) != 0) && (DAT_0065b3d4 != 0)) {
    if (param_1 == '\0') {
      puVar2 = (undefined2 *)(*(int *)((int)this + 0x2d4) + 0x8c);
    }
    else {
      puVar2 = (undefined2 *)(*(int *)(DAT_0065b3d4 + 0x254) + 0xdc);
    }
    *(undefined2 *)((int)this + 0x3cc) = *puVar2;
    *(undefined1 *)((int)this + 0x3ce) = *(undefined1 *)(puVar2 + 1);
    bVar1 = cocos2d::Color3B::operator==
                      ((Color3B *)((int)this + 0x3cf),(Color3B *)((int)this + 0x3cc));
    if (!bVar1) {
      *(undefined4 *)((int)this + 0x3c4) = 0;
      *(undefined4 *)((int)this + 0x3c8) = 0x40000000;
      *(undefined1 *)((int)this + 0x3c0) = 1;
    }
  }
  return;
}


void __fastcall FUN_005314b0(int param_1)

{
  Vec3 *this;
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  Camera *pCVar7;
  float *pfVar8;
  undefined4 uVar9;
  Vec3 *pVVar10;
  int iVar11;
  BaseLight *this_00;
  code *pcVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  float in_XMM1_Da;
  undefined8 uVar16;
  Vec3 local_64 [12];
  Vec3 local_58 [12];
  Vec3 local_4c [12];
  undefined8 local_40;
  undefined4 local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4606;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    return;
  }
  ExceptionList = &local_10;
  local_18 = in_XMM1_Da;
  if (DAT_0065b3cf != '\0') goto LAB_005317e7;
  if ((*(char *)(DAT_0065b444 + 0x73) == '\0') && (0.0 < *(float *)(param_1 + 0x3d8))) {
    fVar14 = *(float *)(param_1 + 0x3d8) - in_XMM1_Da;
    *(float *)(param_1 + 0x3d8) = fVar14;
    if (0.0 < fVar14) {
      if (((*(float *)(param_1 + 0x3dc) == *(float *)(param_1 + 0x3f4)) &&
          (*(float *)(param_1 + 0x3e0) == *(float *)(param_1 + 0x3f8))) &&
         (*(float *)(param_1 + 0x3e4) == *(float *)(param_1 + 0x3fc))) {
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar13 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar13 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar13) {
          fVar14 = 0.0 - *(float *)(param_1 + 0x400);
        }
        else {
          fVar14 = *(float *)(param_1 + 0x400);
        }
        *(float *)(param_1 + 0x3f4) = fVar14;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar13 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar13 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar13) {
          fVar14 = 0.0 - *(float *)(param_1 + 0x400);
        }
        else {
          fVar14 = *(float *)(param_1 + 0x400);
        }
        *(float *)(param_1 + 0x3f8) = fVar14;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar13 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar13 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar13) {
          fVar14 = 0.0 - *(float *)(param_1 + 0x400);
        }
        else {
          fVar14 = *(float *)(param_1 + 0x400);
        }
        *(float *)(param_1 + 0x3fc) = fVar14;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      *(undefined4 *)(param_1 + 0x3fc) = 0;
      *(undefined4 *)(param_1 + 0x400) = 0;
    }
  }
  if (*(int *)(param_1 + 0x3b0) == -1) {
    *(float *)(param_1 + 0x3ec) =
         (*(float *)(param_1 + 0x394) / DAT_0065ba28 - 1.0) * -1.0 * 1.6 - 0.8;
    *(float *)(param_1 + 1000) =
         (*(float *)(param_1 + 0x398) / DAT_0065ba2c - 1.0) * -1.0 * 1.6 - 0.8;
  }
  else {
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    *(undefined4 *)(param_1 + 1000) = 0;
  }
  fVar14 = *(float *)(param_1 + 0x3dc);
  fVar1 = *(float *)(param_1 + 0x3f4);
  if (fVar14 <= fVar1) {
    if (fVar14 < fVar1) {
      fVar14 = local_18 * 96.0 + fVar14;
      *(float *)(param_1 + 0x3dc) = fVar14;
      bVar13 = fVar14 < fVar1;
      goto LAB_00531739;
    }
  }
  else {
    fVar14 = fVar14 - local_18 * 96.0;
    *(float *)(param_1 + 0x3dc) = fVar14;
    bVar13 = fVar1 < fVar14;
LAB_00531739:
    if (!bVar13 && fVar1 != fVar14) {
      *(float *)(param_1 + 0x3dc) = fVar1;
    }
  }
  fVar14 = *(float *)(param_1 + 0x3e0);
  fVar1 = *(float *)(param_1 + 0x3f8);
  if (fVar14 <= fVar1) {
    if (fVar14 < fVar1) {
      fVar14 = local_18 * 96.0 + fVar14;
      *(float *)(param_1 + 0x3e0) = fVar14;
      bVar13 = fVar14 < fVar1;
      goto LAB_0053178b;
    }
  }
  else {
    fVar14 = fVar14 - local_18 * 96.0;
    *(float *)(param_1 + 0x3e0) = fVar14;
    bVar13 = fVar1 < fVar14;
LAB_0053178b:
    if (!bVar13 && fVar1 != fVar14) {
      *(float *)(param_1 + 0x3e0) = fVar1;
    }
  }
  fVar14 = *(float *)(param_1 + 0x3e4);
  fVar1 = *(float *)(param_1 + 0x3fc);
  if (fVar14 <= fVar1) {
    if (fVar1 <= fVar14) goto LAB_005317e7;
    fVar14 = local_18 * 96.0 + fVar14;
    *(float *)(param_1 + 0x3e4) = fVar14;
    bVar13 = fVar14 < fVar1;
  }
  else {
    fVar14 = fVar14 - local_18 * 96.0;
    *(float *)(param_1 + 0x3e4) = fVar14;
    bVar13 = fVar1 < fVar14;
  }
  if (!bVar13 && fVar1 != fVar14) {
    *(float *)(param_1 + 0x3e4) = fVar1;
  }
LAB_005317e7:
  pcVar12 = ~Vec3_exref;
  if (*(char *)(param_1 + 0x344) != '\0') {
    local_1c = *(float *)(param_1 + 0x410) + local_18;
    local_28 = *(float *)(param_1 + 0x32c) - *(float *)(param_1 + 0x314);
    *(float *)(param_1 + 0x410) = local_1c;
    local_1c = local_1c / *(float *)(param_1 + 0x40c);
    local_24 = *(float *)(param_1 + 0x330) - *(float *)(param_1 + 0x318);
    local_20 = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x31c);
    local_34 = (float *)(*(float *)(param_1 + 0x338) - *(float *)(param_1 + 800));
    local_30 = *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x324);
    dVar15 = (double)(local_1c * 3.1415927);
    local_2c = *(float *)(param_1 + 0x340) - *(float *)(param_1 + 0x328);
    libm_sse2_cos_precise(uVar4);
    local_1c = ((float)dVar15 - 1.0) * local_1c * -0.5;
    if (1.0 < local_1c) {
      *(undefined1 *)(param_1 + 0x344) = 0;
      local_1c = 1.0;
    }
    puVar6 = (undefined8 *)
             cocos2d::Vec3::Vec3(local_4c,local_1c * local_28 + *(float *)(param_1 + 0x314),
                                 local_1c * local_24 + *(float *)(param_1 + 0x318),
                                 local_1c * local_20 + *(float *)(param_1 + 0x31c));
    *(undefined8 *)(param_1 + 0x2fc) = *puVar6;
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(puVar6 + 1);
    cocos2d::Vec3::~Vec3(local_4c);
    puVar6 = (undefined8 *)
             cocos2d::Vec3::Vec3(local_4c,local_1c * (float)local_34 + *(float *)(param_1 + 800),
                                 local_1c * local_30 + *(float *)(param_1 + 0x324),
                                 local_1c * local_2c + *(float *)(param_1 + 0x328));
    *(undefined8 *)(param_1 + 0x308) = *puVar6;
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(puVar6 + 1);
    cocos2d::Vec3::~Vec3(local_4c);
    if (local_1c == 1.0) {
      FUN_00591070("RENDER","Moved to %f, %f, %f");
    }
  }
  pCVar7 = cocos2d::Camera::getDefaultCamera();
  local_34 = (float *)(**(code **)(*(int *)pCVar7 + 0x7c))();
  local_8 = 0;
  this = (Vec3 *)(param_1 + 0x2fc);
  pfVar8 = (float *)cocos2d::Vec3::operator+(this,local_4c);
  if (((*pfVar8 != *local_34) || (pfVar8[1] != local_34[1])) ||
     (local_11 = '\0', pfVar8[2] != local_34[2])) {
    local_11 = '\x01';
  }
  cocos2d::Vec3::~Vec3(local_4c);
  local_8 = 0xffffffff;
  cocos2d::Vec3::~Vec3(local_58);
  if (local_11 != '\0') {
    pCVar7 = cocos2d::Camera::getDefaultCamera();
    uVar9 = cocos2d::Vec3::operator+(this,local_58);
    local_8 = 1;
    (**(code **)(*(int *)pCVar7 + 0x78))(uVar9);
    pcVar12 = ~Vec3_exref;
    local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_58);
  }
  pCVar7 = cocos2d::Camera::getDefaultCamera();
  local_34 = (float *)(**(code **)(*(int *)pCVar7 + 200))();
  local_8 = 2;
  pVVar10 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)(param_1 + 0x308),local_4c);
  iVar11 = param_1 + 0x3dc;
  local_8 = CONCAT31(local_8._1_3_,3);
  pfVar8 = (float *)cocos2d::Vec3::operator+(pVVar10,local_58);
  if (((*pfVar8 != *local_34) || (pfVar8[1] != local_34[1])) ||
     (local_11 = '\0', pfVar8[2] != local_34[2])) {
    local_11 = '\x01';
  }
  (*pcVar12)();
  (*pcVar12)();
  local_8 = 0xffffffff;
  (*pcVar12)();
  if (local_11 != '\0') {
    pCVar7 = cocos2d::Camera::getDefaultCamera();
    uVar16 = CONCAT44(iVar11,param_1 + 1000);
    pVVar10 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)(param_1 + 0x308),local_58);
    iVar11 = param_1 + 0x3dc;
    local_8 = 4;
    uVar9 = cocos2d::Vec3::operator+(pVVar10,local_64);
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)(*(int *)pCVar7 + 0xc4))(uVar9,iVar11,uVar16);
    cocos2d::Vec3::~Vec3(local_64);
    local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_58);
  }
  iVar11 = *(int *)(param_1 + 0x2d4);
  uVar4 = 0;
  if (*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2 != 0) {
    do {
      iVar3 = *(int *)(*(int *)(iVar11 + 0x90) + uVar4 * 4);
      if (*(char *)(iVar3 + 0x3f4) != '\0') {
        uVar9 = *(undefined4 *)(param_1 + 0x300);
        *(undefined4 *)(iVar3 + 0x41c) = *(undefined4 *)this;
        *(undefined4 *)(iVar3 + 0x420) = uVar9;
        *(undefined4 *)(iVar3 + 0x424) = *(undefined4 *)(param_1 + 0x304);
        iVar11 = *(int *)(param_1 + 0x2d4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2));
  }
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(char *)(*(int *)(param_1 + 0x3a0) + 0x3f4) != '\0')) {
    cocos2d::Vec3::Vec3((Vec3 *)&local_40,*(float *)this / DAT_006550a4,
                        *(float *)(param_1 + 0x300) / DAT_006550a4,
                        *(float *)(param_1 + 0x304) / DAT_006550a4);
    iVar11 = *(int *)(param_1 + 0x3a0);
    *(undefined8 *)(iVar11 + 0x41c) = local_40;
    *(undefined4 *)(iVar11 + 0x424) = local_38;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_40);
  }
  if (*(float *)(param_1 + 0x2c8) <= -1.0) {
    FUN_00531f20(param_1);
  }
  else if (*(int *)(param_1 + 0x2c4) != -1) {
    fVar14 = *(float *)(param_1 + 0x2c8) - local_18;
    *(float *)(param_1 + 0x2c8) = fVar14;
    if (fVar14 <= 0.0) {
      cVar2 = *(char *)(param_1 + 0x2cc);
      *(bool *)(param_1 + 0x2cc) = cVar2 == '\0';
      iVar11 = *(int *)(param_1 + 0x2c4) + -1;
      *(int *)(param_1 + 0x2c4) = iVar11;
      if (iVar11 < 0) {
        *(undefined4 *)(param_1 + 0x2c8) = 0xbf800000;
        *(undefined1 *)(param_1 + 0x2cc) = 0;
      }
      else {
        if (cVar2 == '\0') {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = (float)(int)(uVar4 + 1) * 0.1;
        }
        else if (iVar11 < 4) {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = (float)(int)(uVar4 + 1) * 0.2;
        }
        else {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          fVar14 = (float)(int)(uVar4 + 1) * 0.07;
        }
        *(float *)(param_1 + 0x2c8) = fVar14;
      }
    }
    if (*(char *)(param_1 + 0x2cc) == '\0') {
      *(undefined4 *)(param_1 + 700) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 700) = 0x3d75c28f;
    }
  }
  fVar14 = *(float *)(param_1 + 700);
  fVar1 = *(float *)(param_1 + 0x2c0);
  if (fVar14 != fVar1) {
    if (fVar14 <= fVar1) {
      local_18 = fVar1 - local_18 * 8.0;
      *(float *)(param_1 + 0x2c0) = local_18;
      if (local_18 < fVar14) {
        *(float *)(param_1 + 0x2c0) = fVar14;
        local_18 = fVar14;
      }
    }
    else {
      local_18 = local_18 * 6.0 + fVar1;
      *(float *)(param_1 + 0x2c0) = local_18;
      if (fVar14 < local_18) {
        *(float *)(param_1 + 0x2c0) = fVar14;
        local_18 = fVar14;
      }
    }
    iVar11 = *(int *)(param_1 + 0x2d4);
    uVar4 = 0;
    if (*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2 != 0) {
      do {
        iVar11 = *(int *)(*(int *)(iVar11 + 0x90) + uVar4 * 4);
        iVar3 = *(int *)(iVar11 + 0x3c);
        if ((((iVar3 == 3) || (iVar3 == 1)) || (iVar3 == 2)) && (*(char *)(iVar11 + 0x380) == '\0'))
        {
          if (iVar3 == 1) {
            fVar14 = *(float *)(iVar11 + 0x3ac);
            this_00 = *(BaseLight **)(iVar11 + 0x3d0);
          }
          else if (iVar3 == 3) {
            fVar14 = *(float *)(iVar11 + 0x3ac);
            this_00 = *(BaseLight **)(iVar11 + 0x3d8);
          }
          else {
            if (iVar3 != 2) goto LAB_00531edf;
            fVar14 = *(float *)(iVar11 + 0x3ac);
            this_00 = *(BaseLight **)(iVar11 + 0x3d4);
          }
          cocos2d::BaseLight::setIntensity(this_00,fVar14 * local_18);
        }
LAB_00531edf:
        iVar11 = *(int *)(param_1 + 0x2d4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2));
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00531f20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float in_XMM1_Da;
  float fVar8;
  undefined2 local_8;
  undefined1 local_6;
  
  if (*(float *)(param_1 + 0x3d4) == 0.0) {
    if (*(char *)(param_1 + 0x3c0) != '\0') {
      fVar7 = *(float *)(param_1 + 0x3c8);
      fVar8 = *(float *)(param_1 + 0x3c4) + in_XMM1_Da;
      *(float *)(param_1 + 0x3c4) = fVar8;
      if (fVar7 <= fVar8) {
        *(float *)(param_1 + 0x3c4) = fVar7;
        *(undefined1 *)(param_1 + 0x3c0) = 0;
        *(undefined4 *)(param_1 + 0x3d4) = 0x40000000;
        fVar8 = fVar7;
      }
      iVar5 = *(int *)(param_1 + 0x2d4);
      fVar8 = fVar8 / fVar7;
      uVar6 = 0;
      if (*(int *)(iVar5 + 0x94) - *(int *)(iVar5 + 0x90) >> 2 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4);
          iVar2 = *(int *)(iVar1 + 0x3c);
          if ((((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) && (*(char *)(iVar1 + 0x380) == '\0')
             ) {
            cocos2d::Color3B::Color3B((Color3B *)&local_8);
            iVar5 = *(int *)(param_1 + 0x2d4);
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d0);
            if (piVar3 != (int *)0x0) {
              puVar4 = (undefined2 *)(**(code **)(*piVar3 + 0x254))();
              iVar5 = *(int *)(param_1 + 0x2d4);
              local_8 = *puVar4;
              local_6 = *(undefined1 *)(puVar4 + 1);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d8);
            if (piVar3 != (int *)0x0) {
              puVar4 = (undefined2 *)(**(code **)(*piVar3 + 0x254))();
              iVar5 = *(int *)(param_1 + 0x2d4);
              local_8 = *puVar4;
              local_6 = *(undefined1 *)(puVar4 + 1);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d4);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x254))();
              iVar5 = *(int *)(param_1 + 0x2d4);
            }
            local_8 = CONCAT11((char)(int)((float)(int)((uint)*(byte *)(param_1 + 0x3cd) -
                                                       (uint)*(byte *)(param_1 + 0x3d0)) * fVar8 +
                                          (float)*(byte *)(param_1 + 0x3d0)),
                               (char)(int)((float)(int)((uint)*(byte *)(param_1 + 0x3cc) -
                                                       (uint)*(byte *)(param_1 + 0x3cf)) * fVar8 +
                                          (float)*(byte *)(param_1 + 0x3cf)));
            local_6 = (undefined1)
                      (int)((float)(int)((uint)*(byte *)(param_1 + 0x3ce) -
                                        (uint)*(byte *)(param_1 + 0x3d1)) * fVar8 +
                           (float)*(byte *)(param_1 + 0x3d1));
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d0);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x25c))(&local_8);
              iVar5 = *(int *)(param_1 + 0x2d4);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d8);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x25c))(&local_8);
              iVar5 = *(int *)(param_1 + 0x2d4);
            }
            piVar3 = *(int **)(*(int *)(*(int *)(iVar5 + 0x90) + uVar6 * 4) + 0x3d4);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x25c))(&local_8);
              iVar5 = *(int *)(param_1 + 0x2d4);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)(*(int *)(iVar5 + 0x94) - *(int *)(iVar5 + 0x90) >> 2));
      }
      if (*(int *)(param_1 + 0x3a4) != 0) {
        cocos2d::Color3B::Color3B((Color3B *)&local_8);
        iVar5 = *(int *)(param_1 + 0x3a4);
        if (*(int **)(iVar5 + 0x3d0) != (int *)0x0) {
          puVar4 = (undefined2 *)(**(code **)(**(int **)(iVar5 + 0x3d0) + 0x254))();
          iVar5 = *(int *)(param_1 + 0x3a4);
          local_8 = *puVar4;
          local_6 = *(undefined1 *)(puVar4 + 1);
        }
        if (*(int **)(iVar5 + 0x3d8) != (int *)0x0) {
          puVar4 = (undefined2 *)(**(code **)(**(int **)(iVar5 + 0x3d8) + 0x254))();
          iVar5 = *(int *)(param_1 + 0x3a4);
          local_8 = *puVar4;
          local_6 = *(undefined1 *)(puVar4 + 1);
        }
        if (*(int **)(iVar5 + 0x3d4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d4) + 0x254))();
          iVar5 = *(int *)(param_1 + 0x3a4);
        }
        local_8 = CONCAT11((char)(int)((float)(int)((uint)*(byte *)(param_1 + 0x3cd) -
                                                   (uint)*(byte *)(param_1 + 0x3d0)) * fVar8 +
                                      (float)*(byte *)(param_1 + 0x3d0)),
                           (char)(int)((float)(int)((uint)*(byte *)(param_1 + 0x3cc) -
                                                   (uint)*(byte *)(param_1 + 0x3cf)) * fVar8 +
                                      (float)*(byte *)(param_1 + 0x3cf)));
        local_6 = (undefined1)
                  (int)((float)(int)((uint)*(byte *)(param_1 + 0x3ce) -
                                    (uint)*(byte *)(param_1 + 0x3d1)) * fVar8 +
                       (float)*(byte *)(param_1 + 0x3d1));
        if (*(int **)(iVar5 + 0x3d0) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d0) + 0x25c))(&local_8);
          iVar5 = *(int *)(param_1 + 0x3a4);
        }
        if (*(int **)(iVar5 + 0x3d8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d8) + 0x25c))(&local_8);
          iVar5 = *(int *)(param_1 + 0x3a4);
        }
        if (*(int **)(iVar5 + 0x3d4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x3d4) + 0x25c))(&local_8);
        }
      }
      if (1.0 <= fVar8) {
        FUN_00591070("RENDER","Lights at desired level.");
        *(undefined2 *)(param_1 + 0x3cf) = *(undefined2 *)(param_1 + 0x3cc);
        *(undefined1 *)(param_1 + 0x3d1) = *(undefined1 *)(param_1 + 0x3ce);
        *(undefined4 *)(param_1 + 0x3d4) = 0x40000000;
        *(undefined1 *)(param_1 + 0x3c0) = 0;
      }
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x3d4) - in_XMM1_Da;
    *(float *)(param_1 + 0x3d4) = fVar7;
    if (fVar7 < 0.0) {
      *(undefined4 *)(param_1 + 0x3d4) = 0;
      return;
    }
  }
  return;
}


void __thiscall FUN_00532350(void *this,byte *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte **ppbVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  byte ****ppppbVar9;
  byte *this_00;
  void *pvVar10;
  byte *pbVar11;
  byte ****ppppbVar12;
  uint uVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  uint local_38;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4640;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = false;
  local_8 = 1;
  iVar8 = *(int *)((int)this + 0x2d4);
  local_38 = 0;
  if (*(int *)(iVar8 + 0x94) - *(int *)(iVar8 + 0x90) >> 2 != 0) {
    do {
      iVar8 = *(int *)(local_38 * 4 + *(int *)(iVar8 + 0x90));
      iVar1 = *(int *)(iVar8 + 0x3c);
      ppppbVar12 = (byte ****)local_2c[0];
      uVar13 = local_18;
      if ((((iVar1 == 5) || (iVar1 == 6)) && (iVar8 = *(int *)(iVar8 + 0x100), iVar8 != 0)) &&
         (iVar8 = *(int *)(iVar8 + 0x1c), iVar8 != 0)) {
        FUN_004024e0(local_2c,(undefined4 *)(iVar8 + 0xf8));
        uVar13 = local_18;
        ppppbVar12 = (byte ****)local_2c[0];
        bVar3 = true;
        ppbVar4 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar4 = (byte **)param_1;
        }
        ppppbVar9 = local_2c;
        if (0xf < local_18) {
          ppppbVar9 = (byte ****)local_2c[0];
        }
        uVar5 = FUN_004031f0((byte *)ppppbVar9,local_1c,(byte *)ppbVar4,in_stack_00000014);
        if ((char)uVar5 == '\0') goto LAB_00532428;
        bVar2 = true;
      }
      else {
LAB_00532428:
        bVar2 = false;
      }
      if ((bVar3) && (bVar3 = false, 0xf < uVar13)) {
        ppppbVar9 = ppppbVar12;
        if ((0xfff < uVar13 + 1) &&
           (ppppbVar9 = (byte ****)ppppbVar12[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar12 + (-4 - (int)ppppbVar9)))) goto LAB_00532548;
        FUN_005adb3f(ppppbVar9);
      }
      if (bVar2) {
        iVar8 = *(int *)(*(int *)((int)this + 0x2d4) + 0x90);
        pbVar7 = (byte *)&stack0x0000001c;
        puVar6 = FUN_0047d270();
        pbVar7 = FUN_0047d6a0(puVar6 + 6,pbVar7);
        this_00 = (byte *)(*(int *)(iVar8 + local_38 * 4) + 200);
        if (this_00 != pbVar7) {
          pbVar11 = pbVar7;
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar11 = *(byte **)pbVar7;
          }
          FUN_00402690(this_00,pbVar11,*(uint *)(pbVar7 + 0x10));
        }
        FUN_00591070("WORLD","Giving %s the custom animation \'%s\' to play");
      }
      iVar8 = *(int *)((int)this + 0x2d4);
      local_38 = local_38 + 1;
    } while (local_38 < (uint)(*(int *)(iVar8 + 0x94) - *(int *)(iVar8 + 0x90) >> 2));
  }
  if (0xf < in_stack_00000018) {
    pbVar7 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar7 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar7))) {
LAB_00532548:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar7);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar10 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pvVar10 = *(void **)((int)in_stack_0000001c + -4),
       0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined1 __thiscall FUN_005325c0(void *this,int param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 **ppuVar6;
  undefined1 uVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  char cVar8;
  byte *in_stack_ffffffa8;
  void *local_30 [5];
  uint local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c4690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (*(int *)((int)this + 0x3a0) == 0) {
    uVar7 = 0;
  }
  else {
    FUN_004024e0(local_30,&param_2);
    local_8 = 1;
    pvVar1 = (void *)FUN_004123f0();
    local_18 = &stack0xffffffa8;
    local_8 = 2;
    FUN_004024e0(&stack0xffffffa8,local_30);
    cVar8 = '\0';
    local_8 = 3;
    puVar2 = FUN_00412870();
    local_8 = 2;
    iVar3 = FUN_00438ed0(puVar2,param_1,cVar8,in_stack_ffffffa8);
    *(int *)((int)pvVar1 + 0x20) = iVar3;
    if (iVar3 != 0) {
      FUN_004024e0(&stack0xffffffa8,(undefined4 *)(iVar3 + 4));
      uVar4 = FUN_004a76c0(in_stack_ffffffa8);
      *(undefined4 *)((int)pvVar1 + 0x10) = uVar4;
      if (*(int *)((int)pvVar1 + 0x20) != 0) {
        *(undefined1 *)((int)pvVar1 + 0x18) = 1;
        FUN_0055b0c0(pvVar1,0);
        *(undefined4 *)((int)pvVar1 + 0x24) = 0;
        *(undefined4 *)((int)pvVar1 + 4) = 0;
        *(undefined4 *)((int)pvVar1 + 8) = 0xbf800000;
        FUN_00412870();
        piVar5 = FUN_004a0060(*(void **)((int)pvVar1 + 0x20),*(int *)((int)pvVar1 + 0x1c));
        FUN_00439320((int)piVar5);
        local_8 = 0;
        if (0xf < local_1c) {
          pvVar1 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar1 = *(void **)((int)local_30[0] + -4),
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_00532670;
          FUN_005adb3f(pvVar1);
        }
        ppuVar6 = &param_2;
        if (0xf < in_stack_0000001c) {
          ppuVar6 = (undefined4 **)param_2;
        }
        DAT_0065b3e8 = 1;
        FUN_00402690(&DAT_00655858,ppuVar6,in_stack_00000018);
        uVar7 = 1;
        goto LAB_00532755;
      }
      FUN_00591070(&DAT_005cdc70,"\'%s\' person has nothing to say.");
    }
    if (0xf < local_1c) {
      pvVar1 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar1 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_00532670;
      FUN_005adb3f(pvVar1);
    }
    uVar7 = 0;
  }
LAB_00532755:
  if (0xf < in_stack_0000001c) {
    puVar2 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (puVar2 = (undefined4 *)param_2[-1], 0x1f < (uint)((int)param_2 + (-4 - (int)puVar2)))) {
LAB_00532670:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar2);
  }
  ExceptionList = local_10;
  return uVar7;
}


void __thiscall FUN_005327a0(void *this,undefined4 param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x2c4) = param_1;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  *(undefined1 *)((int)this + 0x2cc) = 1;
  *(float *)((int)this + 0x2c8) = (float)(int)(uVar1 + 1) * 0.1;
  return;
}


void FUN_005327f0(void)

{
  int iVar1;
  Director *this;
  
  iVar1 = FUN_00402f60();
  FUN_00557990(iVar1);
  this = cocos2d::Director::getInstance();
  cocos2d::Director::end(this);
  return;
}


uint __fastcall FUN_00532810(int param_1)

{
  undefined4 *this;
  int iVar1;
  void **ppvVar2;
  void **ppvVar3;
  byte *in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be228;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 0x2d4);
  ppvVar2 = ExceptionList;
  if (iVar1 != 0) {
    ppvVar3 = (void **)0x0;
    ppvVar2 = (void **)0x0;
    if (*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(iVar1 + 0x90) + (int)ppvVar3 * 4);
        if ((((*(int *)(iVar1 + 0x3c) == 5) || (*(int *)(iVar1 + 0x3c) == 6)) &&
            (*(int *)(iVar1 + 0x100) != 0)) && (*(char *)(iVar1 + 0xfd) == '\0')) {
          FUN_004024e0(&stack0xffffffc4,
                       (undefined4 *)(*(int *)(*(int *)(iVar1 + 0x100) + 0x1c) + 0xf8));
          local_8 = 0;
          this = FUN_00412870();
          local_8 = 0xffffffff;
          iVar1 = FUN_004390e0(this,in_stack_ffffffc4);
          if (iVar1 != -1) {
            ExceptionList = local_10;
            return CONCAT31((int3)((uint)iVar1 >> 8),1);
          }
        }
        iVar1 = *(int *)(param_1 + 0x2d4);
        ppvVar3 = (void **)((int)ppvVar3 + 1);
        ppvVar2 = (void **)(*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2);
      } while (ppvVar3 < ppvVar2);
    }
  }
  ExceptionList = local_10;
  return (uint)ppvVar2 & 0xffffff00;
}


Layer * __thiscall FUN_00532910(void *this,byte param_1)

{
  FUN_00532940(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00532940(Layer *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x2e0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x2e8) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00532aa8;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x2dc)) {
    pvVar1 = *(void **)(param_1 + 0x2c8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2dc) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00532aa8;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0xf;
  param_1[0x2c8] = (Layer)0x0;
  if (0xf < *(uint *)(param_1 + 0x2c0)) {
    pvVar1 = *(void **)(param_1 + 0x2ac);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2c0) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00532aa8;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0xf;
  param_1[0x2ac] = (Layer)0x0;
  pvVar1 = *(void **)(param_1 + 0x29c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x2a4) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00532aa8:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x00532aa2. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Layer::~Layer(param_1);
  return;
}


void __fastcall FUN_00532ab0(int *param_1)

{
  int iVar1;
  Scale9Sprite *this;
  Scale9Sprite *pSVar2;
  Texture2D *pTVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint in_stack_ffffff64;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  Scale9Sprite *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c46d2;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar7 = (undefined4 *)param_1[0xa7];
  local_18 = (Scale9Sprite *)(param_1 + 0xa7);
  uVar6 = 0;
  uVar4 = (param_1[0xa8] - (int)puVar7) + 3U >> 2;
  if ((undefined4 *)param_1[0xa8] < puVar7) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      (**(code **)(*(int *)*puVar7 + 0x138))();
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != uVar4);
  }
  this = local_18;
  *(int *)(local_18 + 4) = *(int *)local_18;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  FUN_00402690(local_3c,"E_Border.png",0xc);
  local_8 = 0;
  pSVar2 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_3c);
  local_8 = 0xffffffff;
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
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  iVar1 = *(int *)pSVar2;
  cocos2d::Size::Size((Size *)&local_1c,318.0,358.0);
  (**(code **)(iVar1 + 0xac))();
  local_1c = 0;
  local_18 = (Scale9Sprite *)0x0;
  local_8 = 1;
  (**(code **)(*(int *)pSVar2 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar2 + 0x40))();
  pTVar3 = (Texture2D *)(**(code **)(*(int *)(pSVar2 + 0x278) + 0xc))();
  local_20 = 0x2600;
  local_24 = 0x2600;
  local_1c = 0x812f;
  local_18 = (Scale9Sprite *)0x812f;
  cocos2d::Texture2D::setTexParameters(pTVar3,(_TexParams *)&local_24);
  (**(code **)(*(int *)pSVar2 + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  puVar7 = *(undefined4 **)(this + 4);
  local_18 = pSVar2;
  if (*(undefined4 **)(this + 8) == puVar7) {
    FUN_00414080(this,puVar7,&local_18);
  }
  else {
    *puVar7 = pSVar2;
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  FUN_00402690(local_3c,"E_Border.png",0xc);
  local_8 = 2;
  pSVar2 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_3c);
  local_8 = 0xffffffff;
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
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  iVar1 = *(int *)pSVar2;
  cocos2d::Size::Size((Size *)&local_1c,318.0,358.0);
  (**(code **)(iVar1 + 0xac))();
  local_1c = 0;
  local_18 = (Scale9Sprite *)0x0;
  local_8 = 3;
  (**(code **)(*(int *)pSVar2 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar2 + 0x40))();
  pTVar3 = (Texture2D *)(**(code **)(*(int *)(pSVar2 + 0x278) + 0xc))();
  local_20 = 0x2600;
  local_24 = 0x2600;
  local_1c = 0x812f;
  local_18 = (Scale9Sprite *)0x812f;
  cocos2d::Texture2D::setTexParameters(pTVar3,(_TexParams *)&local_24);
  (**(code **)(*(int *)pSVar2 + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  puVar7 = *(undefined4 **)(this + 4);
  local_18 = pSVar2;
  if (*(undefined4 **)(this + 8) == puVar7) {
    FUN_00414080(this,puVar7,&local_18);
  }
  else {
    *puVar7 = pSVar2;
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  pvVar5 = (void *)(in_stack_ffffff64 & 0xffffff00);
  FUN_00402690(&stack0xffffff64,"Logo_Lores.png",0xe);
  pSVar2 = (Scale9Sprite *)FUN_00591910(pvVar5);
  (**(code **)(*(int *)pSVar2 + 0x48))();
  (**(code **)(*(int *)pSVar2 + 0x40))();
  (**(code **)(*param_1 + 0x10c))();
  puVar7 = *(undefined4 **)(this + 4);
  local_18 = pSVar2;
  if (*(undefined4 **)(this + 8) == puVar7) {
    FUN_00414080(this,puVar7,&local_18);
  }
  else {
    *puVar7 = pSVar2;
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00532ea0(int *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte *****pppppbVar4;
  Ref *pRVar5;
  uint uVar6;
  byte *****pppppbVar7;
  byte ****ppppbVar8;
  undefined4 *puVar9;
  byte *****pppppbVar10;
  byte *****pppppbVar11;
  int *in_stack_ffffff8c;
  char *pcVar12;
  byte ****local_44 [4];
  uint local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c4752;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
  local_8 = 0;
  FUN_00402690(local_44,"Server Information:\n",0x14);
  FUN_00402de0();
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7 Name      : `%%%s\n");
  local_8._0_1_ = 1;
  puVar9 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar9 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_44,puVar9,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    ppppbVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar8 = (byte ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7 IP        : `%%%s:%s\n");
  local_8._0_1_ = 2;
  puVar9 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar9 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_44,puVar9,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    ppppbVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar8 = (byte ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  FUN_00403640(local_44,&DAT_005e75f8,1);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7 Scenario  : `%%%s\n");
  local_8._0_1_ = 3;
  puVar9 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar9 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_44,puVar9,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    ppppbVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar8 = (byte ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7 Difficulty: `%%%s\n");
  local_8._0_1_ = 4;
  puVar9 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar9 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_44,puVar9,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pppppbVar11 = (byte *****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppbVar11 = (byte *****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  FUN_00402de0();
  FUN_00402de0();
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7 Clients   : `%%%d/%d\n");
  local_8._0_1_ = 5;
  puVar9 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar9 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_44,puVar9,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pppppbVar11 = (byte *****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppbVar11 = (byte *****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  FUN_00403640(local_44,&DAT_005e75f8,1);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7 State     : ");
  local_8._0_1_ = 6;
  puVar9 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar9 = (undefined4 *)*puVar1;
  }
  FUN_00403640(local_44,puVar9,puVar1[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pppppbVar11 = (byte *****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppbVar11 = (byte *****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  puVar2 = FUN_00402de0();
  switch(*(undefined4 *)(puVar2 + 0x1c)) {
  case 0:
    uVar6 = 0xb;
    pcVar12 = "`$Disabled\n";
    break;
  case 1:
    uVar6 = 0x17;
    pcVar12 = "`9Awaiting Connections\n";
    break;
  case 2:
    uVar6 = 0xd;
    pcVar12 = "`!Game Lobby\n";
    break;
  case 3:
    uVar6 = 10;
    pcVar12 = "`0Running\n";
    break;
  default:
    goto LAB_00533234;
  }
  FUN_00403640(local_44,pcVar12,uVar6);
LAB_00533234:
  uVar6 = local_30;
  pppppbVar11 = (byte *****)(param_1 + 0xab);
  pppppbVar4 = local_44;
  if (0xf < local_30) {
    pppppbVar4 = (byte *****)local_44[0];
  }
  pppppbVar7 = pppppbVar11;
  if (0xf < (uint)param_1[0xb0]) {
    pppppbVar7 = (byte *****)*pppppbVar11;
  }
  uVar3 = FUN_004031f0((byte *)pppppbVar7,param_1[0xaf],(byte *)pppppbVar4,local_34);
  if ((char)uVar3 == '\0') {
    if (pppppbVar11 != local_44) {
      pppppbVar4 = local_44;
      if (0xf < uVar6) {
        pppppbVar4 = (byte *****)local_44[0];
      }
      FUN_00402690(pppppbVar11,pppppbVar4,local_34);
    }
    if (param_1[0xaa] == 0) {
      FUN_004024e0(&stack0xffffff8c,local_44);
      pRVar5 = FUN_0055ca10(0x13b,0x163,(Node)0x0,in_stack_ffffff8c);
      param_1[0xaa] = (int)pRVar5;
      (**(code **)(*(int *)pRVar5 + 0x40))();
      local_8._0_1_ = 7;
      (**(code **)(*(int *)param_1[0xaa] + 0xa0))();
      local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(*(int *)param_1[0xaa] + 0x48))();
      in_stack_ffffff8c = (int *)0x53332d;
      (**(code **)(*param_1 + 0x10c))();
    }
    else {
      FUN_004024e0(&stack0xffffff8c,local_44);
      FUN_0055ce90((void *)param_1[0xaa],'\x01','\0',in_stack_ffffff8c);
    }
  }
  FUN_00533cc0(param_1,(uint *)local_2c);
  pppppbVar4 = (byte *****)local_2c[0];
  local_8 = CONCAT31(local_8._1_3_,8);
  pppppbVar11 = (byte *****)(param_1 + 0xb2);
  pppppbVar7 = local_2c;
  if (0xf < local_18) {
    pppppbVar7 = (byte *****)local_2c[0];
  }
  pppppbVar10 = pppppbVar11;
  if (0xf < (uint)param_1[0xb7]) {
    pppppbVar10 = (byte *****)*pppppbVar11;
  }
  uVar6 = FUN_004031f0((byte *)pppppbVar10,param_1[0xb6],(byte *)pppppbVar7,local_1c);
  if ((char)uVar6 == '\0') {
    if (pppppbVar11 != local_2c) {
      pppppbVar7 = local_2c;
      if (0xf < local_18) {
        pppppbVar7 = pppppbVar4;
      }
      FUN_00402690(pppppbVar11,pppppbVar7,local_1c);
    }
    if (param_1[0xb1] == 0) {
      FUN_004024e0(&stack0xffffff8c,local_2c);
      pRVar5 = FUN_0055ca10(0x133,0x163,(Node)0x0,in_stack_ffffff8c);
      param_1[0xb1] = (int)pRVar5;
      (**(code **)(*(int *)pRVar5 + 0x40))();
      local_8._0_1_ = 9;
      (**(code **)(*(int *)param_1[0xb1] + 0xa0))();
      local_8 = CONCAT31(local_8._1_3_,8);
      (**(code **)(*(int *)param_1[0xb1] + 0x48))();
      (**(code **)(*param_1 + 0x10c))();
      pppppbVar4 = (byte *****)local_2c[0];
    }
    else {
      FUN_004024e0(&stack0xffffff8c,local_2c);
      FUN_0055ce90((void *)param_1[0xb1],'\x01','\0',in_stack_ffffff8c);
      pppppbVar4 = (byte *****)local_2c[0];
    }
  }
  if (0xf < local_18) {
    pppppbVar11 = pppppbVar4;
    if ((0xfff < local_18 + 1) &&
       (pppppbVar11 = (byte *****)pppppbVar4[-1],
       (byte *)0x1f < (byte *)((int)pppppbVar4 + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  if (0xf < local_30) {
    pppppbVar11 = (byte *****)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pppppbVar11 = (byte *****)local_44[0][-1],
       (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00533500(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *this;
  int iVar10;
  int *this_00;
  uint in_stack_ffffff3c;
  void *pvVar11;
  undefined **local_ac [2];
  code *local_a4;
  undefined4 local_a0;
  int local_98;
  undefined1 *local_88;
  uint uStack_84;
  undefined **local_80;
  undefined4 uStack_7c;
  uint in_stack_ffffff90;
  char *local_28;
  int *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c48a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = *(int *)(param_1 + 0x2e0);
  this_00 = (int *)(param_1 + 0x2e0);
  uVar9 = 0;
  local_24 = this_00;
  local_14 = param_1;
  if (*(int *)(param_1 + 0x2e4) - iVar8 >> 2 != 0) {
    do {
      piVar7 = *(int **)(iVar8 + uVar9 * 4);
      if (piVar7 != (int *)0x0) {
        FUN_005341e0(piVar7);
        FUN_005adb3f(piVar7);
      }
      uVar9 = uVar9 + 1;
      iVar8 = *this_00;
    } while (uVar9 < (uint)(*(int *)(param_1 + 0x2e4) - iVar8 >> 2));
  }
  *(int *)(local_14 + 0x2e4) = iVar8;
  pcVar2 = (char *)FUN_005adb0f(0x28);
  local_8 = 0;
  pvVar6 = (void *)(in_stack_ffffff90 & 0xffffff00);
  uStack_7c = 0x5335bb;
  local_28 = pcVar2;
  FUN_00402690(&stack0xffffff90,&PTR_005ce008,0);
  puVar3 = FUN_00534130(pcVar2,pvVar6);
  local_8 = 0xffffffff;
  local_1c = puVar3;
  local_18 = puVar3;
  pcVar2 = (char *)FUN_005adb0f(0x78);
  local_20 = &local_80;
  uStack_84 = 1;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  pvVar11 = (void *)(in_stack_ffffff3c & 0xffffff00);
  local_28 = pcVar2;
  FUN_00402690(&stack0xffffff3c,"Change Scenario",0xf);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_20 = FUN_00533fe0(pcVar2,0,pvVar11);
  this = puVar3 + 7;
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)puVar3[8];
  if ((undefined4 *)puVar3[9] == puVar5) {
    FUN_00414080(this,puVar5,&local_20);
  }
  else {
    *puVar5 = local_20;
    puVar3[8] = puVar3[8] + 4;
  }
  pvVar4 = (void *)FUN_005adb0f(0x78);
  uStack_84 = 2;
  local_28 = (char *)local_ac;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff3c,"Change Difficulty",0x11);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_20 = FUN_00533fe0(pvVar4,1,pvVar11);
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)puVar3[8];
  if ((undefined4 *)puVar3[9] == puVar5) {
    FUN_00414080(this,puVar5,&local_20);
  }
  else {
    *puVar5 = local_20;
    puVar3[8] = puVar3[8] + 4;
  }
  pvVar4 = (void *)FUN_005adb0f(0x78);
  uStack_84 = 0xffffffff;
  local_28 = (char *)local_ac;
  local_88 = (undefined1 *)local_ac;
  local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
  local_a4 = (code *)&LAB_00533f30;
  local_a0 = 0;
  local_98 = local_14;
  local_8._0_1_ = 9;
  local_8._1_3_ = 0;
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff3c,"Force Start",0xb);
  local_8 = CONCAT31(local_8._1_3_,7);
  local_20 = FUN_00533fe0(pvVar4,1,pvVar11);
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)puVar3[8];
  if ((undefined4 *)puVar3[9] == puVar5) {
    FUN_00414080(this,puVar5,&local_20);
  }
  else {
    *puVar5 = local_20;
    puVar3[8] = puVar3[8] + 4;
  }
  pvVar4 = (void *)FUN_005adb0f(0x78);
  uStack_84 = 0xffffffff;
  local_28 = (char *)local_ac;
  local_88 = (undefined1 *)local_ac;
  local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
  local_a4 = FUN_00533ea0;
  local_a0 = 0;
  local_98 = local_14;
  local_8._0_1_ = 0xc;
  local_8._1_3_ = 0;
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff3c,&DAT_0061fcb8,4);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_20 = FUN_00533fe0(pvVar4,2,pvVar11);
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)puVar3[8];
  if ((undefined4 *)puVar3[9] == puVar5) {
    FUN_00414080(this,puVar5,&local_20);
  }
  else {
    *puVar5 = local_20;
    puVar3[8] = puVar3[8] + 4;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x2e4);
  if (*(undefined4 **)(param_1 + 0x2e8) == puVar5) {
    FUN_00414080(this_00,puVar5,&local_18);
  }
  else {
    *puVar5 = local_1c;
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 4;
  }
  pvVar4 = (void *)FUN_005adb0f(0x28);
  local_8 = 0xd;
  pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
  uStack_7c = 0x5338ab;
  FUN_00402690(&stack0xffffff90,"Change Scenario",0xf);
  local_20 = FUN_00534130(pvVar4,pvVar6);
  iVar8 = local_14;
  local_8 = 0xffffffff;
  uVar9 = 0;
  piVar7 = (int *)(DAT_0065b5cc + 0x60);
  local_1c = (undefined4 *)0x0;
  local_18 = local_20;
  if (*(int *)(DAT_0065b5cc + 100) - *piVar7 >> 2 != 0) {
    do {
      iVar10 = *(int *)(uVar9 * 4 + *piVar7);
      if ((*(int *)(iVar10 + 0x6c) == 3) && (*(int *)(iVar10 + 0x68) != 0)) {
        pvVar4 = (void *)FUN_005adb0f(0x78);
        local_80 = std::_Func_impl_no_alloc<>::vftable;
        pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
        local_28 = (char *)local_ac;
        local_88 = (undefined1 *)local_ac;
        local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
        local_a4 = FUN_00533f40;
        local_a0 = 0;
        local_98 = iVar8;
        local_8._0_1_ = 0x10;
        local_8._1_3_ = 0;
        uStack_84 = uVar9;
        FUN_004024e0(&stack0xffffff3c,
                     (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0x60) + uVar9 * 4) + 0x18));
        local_8 = CONCAT31(local_8._1_3_,0xe);
        local_28 = (char *)FUN_00533fe0(pvVar4,local_1c,pvVar11);
        local_1c = (undefined4 *)((int)local_1c + 1);
        local_8 = 0xffffffff;
        puVar5 = (undefined4 *)local_20[8];
        if ((undefined4 *)local_20[9] == puVar5) {
          FUN_00414080(local_20 + 7,puVar5,&local_28);
        }
        else {
          *puVar5 = local_28;
          local_20[8] = local_20[8] + 4;
        }
      }
      uVar9 = uVar9 + 1;
      piVar7 = (int *)(DAT_0065b5cc + 0x60);
      this_00 = local_24;
    } while (uVar9 < (uint)(*(int *)(DAT_0065b5cc + 100) - *piVar7 >> 2));
  }
  pvVar4 = (void *)FUN_005adb0f(0x78);
  uStack_84 = 0;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 0x13;
  local_8._1_3_ = 0;
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff3c,&DAT_005ee2c4,4);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_28 = (char *)FUN_00533fe0(pvVar4,local_1c,pvVar11);
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)local_20[8];
  if ((undefined4 *)local_20[9] == puVar5) {
    FUN_00414080(local_20 + 7,puVar5,&local_28);
  }
  else {
    *puVar5 = local_28;
    local_20[8] = local_20[8] + 4;
  }
  puVar5 = (undefined4 *)this_00[1];
  if ((undefined4 *)this_00[2] == puVar5) {
    FUN_00414080(this_00,puVar5,&local_18);
  }
  else {
    *puVar5 = local_20;
    this_00[1] = this_00[1] + 4;
  }
  pvVar4 = (void *)FUN_005adb0f(0x28);
  local_8 = 0x14;
  pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
  uStack_7c = 0x533add;
  FUN_00402690(&stack0xffffff90,"Change Difficulty",0x11);
  puVar5 = FUN_00534130(pvVar4,pvVar6);
  iVar8 = local_14;
  iVar10 = 0;
  local_8 = 0xffffffff;
  local_1c = puVar5;
  local_18 = puVar5;
  do {
    local_20 = (undefined4 *)FUN_005adb0f(0x78);
    local_80 = std::_Func_impl_no_alloc<>::vftable;
    local_88 = (undefined1 *)local_ac;
    local_ac[0] = std::_Func_impl_no_alloc<>::vftable;
    local_a4 = FUN_00533fb0;
    local_a0 = 0;
    local_98 = iVar8;
    local_8._0_1_ = 0x17;
    local_8._1_3_ = 0;
    pcVar2 = (&PTR_DAT_005dfc24)[iVar10];
    local_28 = pcVar2 + 1;
    pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uStack_84 = iVar10;
    FUN_00402690(&stack0xffffff3c,(&PTR_DAT_005dfc24)[iVar10],(int)pcVar2 - (int)local_28);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    local_28 = (char *)FUN_00533fe0(local_20,iVar10,pvVar11);
    local_8 = 0xffffffff;
    puVar3 = (undefined4 *)puVar5[8];
    if ((undefined4 *)puVar5[9] == puVar3) {
      FUN_00414080(puVar5 + 7,puVar3,&local_28);
    }
    else {
      *puVar3 = local_28;
      puVar5[8] = puVar5[8] + 4;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  pvVar6 = (void *)FUN_005adb0f(0x78);
  uStack_84 = 0;
  local_88 = (undefined1 *)0x0;
  local_8._0_1_ = 0x1a;
  local_8._1_3_ = 0;
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff3c,&DAT_005ee2c4,4);
  local_8 = CONCAT31(local_8._1_3_,0x18);
  local_28 = (char *)FUN_00533fe0(pvVar6,4,pvVar11);
  local_8 = 0xffffffff;
  puVar3 = (undefined4 *)puVar5[8];
  if ((undefined4 *)puVar5[9] == puVar3) {
    FUN_00414080(puVar5 + 7,puVar3,&local_28);
  }
  else {
    *puVar3 = local_28;
    puVar5[8] = puVar5[8] + 4;
  }
  puVar5 = (undefined4 *)local_24[1];
  if ((undefined4 *)local_24[2] == puVar5) {
    FUN_00414080(local_24,puVar5,&local_18);
    ExceptionList = local_10;
    return;
  }
  *puVar5 = local_1c;
  local_24[1] = local_24[1] + 4;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00533cc0(void *this,uint *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2018;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  piVar3 = *(int **)((int)this + 0x2e0);
  local_30 = param_1;
  for (; piVar3 != *(int **)((int)this + 0x2e4); piVar3 = piVar3 + 1) {
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x18) == *(int *)((int)this + 0x294)) goto LAB_00533d1e;
  }
  iVar4 = 0;
LAB_00533d1e:
  *(int *)((int)this + 0x290) = iVar4;
  local_14 = uVar2;
  if (iVar4 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,"ERROR: INVALID MENU.",0x14);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    uVar6 = 0;
    if (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2 != 0) {
      do {
        if (uVar6 == *(uint *)((int)this + 0x298)) {
          uVar9 = 10;
          pcVar7 = "`7[`%o`7] ";
        }
        else {
          uVar9 = 6;
          pcVar7 = "`7[ ] ";
        }
        FUN_00403640(&local_2c,pcVar7,uVar9);
        iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0x290) + 0x1c) + uVar6 * 4);
        piVar3 = *(int **)(iVar4 + 0x6c);
        if (piVar3 != (int *)0x0) {
          if (*(char *)(iVar4 + 0x74) == '\0') {
            local_34 = *(uint **)(iVar4 + 0x70);
            cVar1 = (**(code **)(*piVar3 + 8))(&local_34,uVar2);
            if (cVar1 == '\0') {
              puVar8 = &DAT_00618b34;
            }
            else {
              puVar8 = &DAT_005e6758;
            }
          }
          else {
            local_38 = *(uint **)(iVar4 + 0x70);
            cVar1 = (**(code **)(*piVar3 + 8))(&local_38);
            if (cVar1 == '\0') {
              puVar8 = &DAT_005e7dbc;
            }
            else {
              puVar8 = &DAT_005e6758;
            }
          }
          FUN_00403640(&local_2c,puVar8,2);
        }
        iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0x290) + 0x1c) + uVar6 * 4);
        pvVar5 = (void *)(iVar4 + 4);
        if (0xf < *(uint *)(iVar4 + 0x18)) {
          pvVar5 = *(void **)(iVar4 + 4);
        }
        FUN_00403640(&local_2c,pvVar5,*(uint *)(iVar4 + 0x14));
        FUN_00403640(&local_2c,&DAT_005e75f8,1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(*(int *)(*(int *)((int)this + 0x290) + 0x20) -
                              *(int *)(*(int *)((int)this + 0x290) + 0x1c) >> 2));
    }
    local_30[4] = 0;
    local_30[5] = 0;
    *local_30 = local_2c;
    local_30[1] = uStack_28;
    local_30[2] = uStack_24;
    local_30[3] = uStack_20;
    *(ulonglong *)(local_30 + 4) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00533ea0(void)

{
  Layer *pLVar1;
  int iVar2;
  Director *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af532;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
  }
  local_8 = 0xffffffff;
  iVar2 = FUN_00402f60();
  FUN_00557990(iVar2);
  this = cocos2d::Director::getInstance();
  cocos2d::Director::end(this);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00533f40(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(DAT_0065b5cc + 0x60) + param_1 * 4);
  if ((undefined4 *)(DAT_0065b5cc + 0xb4) != puVar1) {
    puVar2 = puVar1;
    if (0xf < (uint)puVar1[5]) {
      puVar2 = (undefined4 *)*puVar1;
    }
    FUN_00402690((undefined4 *)(DAT_0065b5cc + 0xb4),puVar2,puVar1[4]);
  }
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  return;
}


undefined4 FUN_00533f90(int param_1)

{
  return CONCAT31((int3)((uint)DAT_0065b444 >> 8),param_1 == *(int *)(DAT_0065b444 + 0xa0));
}


void __thiscall FUN_00533fb0(void *this,undefined4 param_1)

{
  *(undefined4 *)(DAT_0065b444 + 0xa0) = param_1;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  return;
}


undefined4 * __thiscall FUN_00533fe0(void *this,undefined4 param_1,void *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  int *in_stack_00000044;
  undefined4 in_stack_00000048;
  int *in_stack_00000070;
  undefined1 in_stack_00000074;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c48fe;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  *(undefined4 *)this = param_1;
  FUN_004024e0((void *)((int)this + 4),&param_2);
  *(undefined4 *)((int)this + 0x44) = 0;
  local_8._0_1_ = 4;
  if (in_stack_00000044 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000044)((int)this + 0x20,uVar1);
    *(undefined4 *)((int)this + 0x44) = uVar2;
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  local_8._0_1_ = 6;
  if (in_stack_00000070 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000070)((int)this + 0x48);
    *(undefined4 *)((int)this + 0x6c) = uVar2;
  }
  *(undefined4 *)((int)this + 0x70) = in_stack_00000048;
  local_8._0_1_ = 1;
  *(undefined1 *)((int)this + 0x74) = in_stack_00000074;
  if (0xf < in_stack_0000001c) {
    pvVar3 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar3 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (in_stack_00000044 != (int *)0x0) {
    (**(code **)(*in_stack_00000044 + 0x10))(in_stack_00000044 != (int *)&stack0x00000020);
    in_stack_00000044 = (int *)0x0;
  }
  local_8 = 8;
  if (in_stack_00000070 != (int *)0x0) {
    (**(code **)(*in_stack_00000070 + 0x10))(in_stack_00000070 != (int *)&stack0x0000004c);
  }
  ExceptionList = local_10;
  return this;
}
