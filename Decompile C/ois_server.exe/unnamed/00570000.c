#include "../ois_server.exe.h"


void __fastcall FUN_00570160(int param_1)

{
  Ref *this;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x530);
  uVar1 = (uint)((int)*(undefined4 **)(param_1 + 0x534) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(param_1 + 0x534) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x138))(1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x530);
  uVar2 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x53c);
  uVar1 = (uint)((int)*(undefined4 **)(param_1 + 0x540) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(param_1 + 0x540) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x138))(1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x53c);
  puVar3 = *(undefined4 **)(param_1 + 0x548);
  uVar1 = (uint)((int)*(undefined4 **)(param_1 + 0x54c) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(param_1 + 0x54c) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      this = (Ref *)*puVar3;
      (**(code **)(*(int *)this + 0x138))(1);
      cocos2d::Ref::autorelease(this);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  piVar5 = (int *)(param_1 + 0x508);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x548);
  iVar4 = 4;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 0x138))(1);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int **)(param_1 + 0x520) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x520) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x520) = 0;
  }
  if (*(int **)(param_1 + 0x524) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x524) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x524) = 0;
  }
  if (*(int **)(param_1 + 0x528) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x528) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x528) = 0;
  }
  if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x52c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x52c) = 0;
  }
  return;
}


void __thiscall
FUN_00570310(void *this,float param_1,undefined4 param_2,float param_3,undefined4 param_4,
            char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uint in_stack_ffffffc4;
  void *pvVar10;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8d7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  pvVar10 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,"white.png",9);
  piVar3 = (int *)FUN_00591910(pvVar10);
  local_14 = (int *)0x0;
  local_8._0_1_ = 2;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)this + 0x108))();
  puVar1 = *(undefined4 **)((int)this + 0x540);
  local_14 = piVar3;
  if (*(undefined4 **)((int)this + 0x544) == puVar1) {
    FUN_00414080((void *)((int)this + 0x53c),puVar1,&local_14);
  }
  else {
    *puVar1 = piVar3;
    *(int *)((int)this + 0x540) = *(int *)((int)this + 0x540) + 4;
  }
  (**(code **)(*piVar3 + 0x4c))();
  fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&param_1,(Vec2 *)&param_3);
  iVar2 = *piVar3;
  fVar4 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
  local_14 = (int *)((1.5 - fVar6 * 0.5 * fVar4 * fVar4) * fVar4 * fVar6);
  (**(code **)(iVar2 + 0xb0))();
  (**(code **)(iVar2 + 0x2c))();
  FUN_00592f80(param_1,param_2,param_3);
  (**(code **)(*piVar3 + 0xbc))();
  iVar2 = *piVar3;
  if (param_5 == '\0') {
    uVar9 = 0x80;
    uVar8 = 0x80;
    uVar7 = 0x80;
  }
  else {
    uVar9 = 0xff;
    uVar8 = 0xff;
    uVar7 = 0xff;
  }
  uVar5 = cocos2d::Color3B::Color3B((Color3B *)&stack0x00000015,uVar7,uVar8,uVar9);
  (**(code **)(iVar2 + 0x25c))(uVar5);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005704e0(void *this,int param_1,Rect *param_2,char param_3)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  Rect *pRVar7;
  Node *this_00;
  float *pfVar8;
  int iVar9;
  char *pcVar10;
  void *pvVar11;
  byte ****ppppbVar12;
  char cVar13;
  void *in_stack_ffffff2c;
  void *in_stack_ffffff3c;
  char *pcVar14;
  uint uVar15;
  void *local_9c [5];
  uint local_88;
  int *local_84;
  undefined4 local_80;
  Node *local_7c;
  float local_78;
  float local_74;
  float local_70;
  Rect *local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  Rect *local_58;
  char local_51;
  undefined4 local_50;
  Rect *local_4c;
  Rect *local_48;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8e14;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = param_1 * 4;
  local_60 = param_1;
  local_4c = param_2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
  pcVar14 = (&PTR_s_Slot_HapNode_005e0bb8)
            [**(int **)(*(int *)(**(int **)(param_2 + 0xc) + 0x50) + iVar1)];
  local_58 = (Rect *)(pcVar14 + 1);
  pcVar10 = pcVar14;
  do {
    cVar13 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar13 != '\0');
  local_84 = this;
  FUN_00402690(local_2c,pcVar14,(int)pcVar10 - (int)local_58);
  local_8 = 0;
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1dc) == local_60) {
    uVar15 = 0xd;
    pcVar14 = "_Selected.png";
LAB_005705e7:
    FUN_00403640(local_2c,pcVar14,uVar15);
  }
  else {
    pfVar8 = *(float **)(iVar1 + 4 + *(int *)(param_2 + 0xc));
    if (pfVar8 == (float *)0x0) {
      uVar15 = 0xe;
      pcVar14 = "_EmptyEdge.png";
      goto LAB_005705e7;
    }
    if (*pfVar8 < (float)*(int *)((int)pfVar8[1] + 0x10)) {
      uVar15 = 0xe;
      pcVar14 = "_Destroyed.png";
      goto LAB_005705e7;
    }
    if (*pfVar8 < (float)*(int *)((int)pfVar8[1] + 0x14)) {
      uVar15 = 0xc;
      pcVar14 = "_Damaged.png";
      goto LAB_005705e7;
    }
    FUN_00402690(local_2c,&PTR_005ce008,0);
  }
  ppppbVar12 = local_2c;
  if (0xf < local_18) {
    ppppbVar12 = (byte ****)local_2c[0];
  }
  uVar15 = FUN_004031f0((byte *)ppppbVar12,local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar15 == '\0') {
    FUN_004024e0(&stack0xffffff3c,local_2c);
    local_48 = (Rect *)FUN_00591910(in_stack_ffffff3c);
    local_5c = 0x3f000000;
    local_58 = (Rect *)0x3f000000;
    local_8._0_1_ = 1;
    (**(code **)(*(int *)local_48 + 0xa0))();
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)local_48 + 0x4c))();
    (**(code **)(*(int *)this + 0x108))();
    piVar3 = *(int **)((int)this + 0x534);
    local_58 = local_48;
    if (*(int **)((int)this + 0x538) == piVar3) {
      FUN_00414080((void *)((int)this + 0x530),piVar3,&local_58);
    }
    else {
      *piVar3 = (int)local_48;
      *(int *)((int)this + 0x534) = *(int *)((int)this + 0x534) + 4;
    }
  }
  iVar9 = *(int *)(iVar1 + 4 + *(int *)(param_2 + 0xc));
  if (iVar9 == 0) {
    in_stack_ffffff2c = (void *)0x570a2c;
    FUN_00591e00(&stack0xffffff3c,"%s_Empty.png");
    local_48 = (Rect *)FUN_00591910(in_stack_ffffff3c);
    local_50 = 0x3f000000;
    local_4c = (Rect *)0x3f000000;
    local_8._0_1_ = 8;
    (**(code **)(*(int *)local_48 + 0xa0))();
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)local_48 + 0x4c))();
    pfVar8 = (float *)(**(code **)(*(int *)local_48 + 0xb0))();
    local_7c = (Node *)*pfVar8;
    iVar9 = (**(code **)(*(int *)local_48 + 0xb0))();
    local_58 = *(Rect **)(iVar9 + 4);
    (**(code **)(*(int *)this + 0x108))();
    piVar3 = *(int **)((int)this + 0x534);
    local_4c = local_48;
    if (*(int **)((int)this + 0x538) == piVar3) {
      FUN_00414080((void *)((int)this + 0x530),piVar3,&local_4c);
    }
    else {
      *piVar3 = (int)local_48;
      *(int *)((int)this + 0x534) = *(int *)((int)this + 0x534) + 4;
    }
    goto LAB_00570ad6;
  }
  local_58 = *(Rect **)(iVar9 + 4);
  local_51 = '\x01';
  FUN_004024e0(local_44,(undefined4 *)(local_58 + 0x68));
  local_8._0_1_ = 2;
  pfVar8 = *(float **)(iVar1 + 4 + *(int *)(param_2 + 0xc));
  fVar4 = pfVar8[1];
  fVar2 = *pfVar8;
  if ((float)*(int *)((int)fVar4 + 0x10) <= fVar2) {
    cVar13 = local_51;
    if (fVar2 < (float)*(int *)((int)fVar4 + 0x14)) {
      FUN_00403640(local_44,"_Damaged",8);
      cVar13 = local_51;
    }
  }
  else {
    FUN_00403640(local_44,"_Destroyed",10);
    cVar13 = '\0';
  }
  if ((param_3 != '\0') ||
     (pfVar8 = *(float **)(iVar1 + 4 + *(int *)(param_2 + 0xc)),
     *pfVar8 <= (float)*(int *)((int)pfVar8[1] + 0x10) &&
     (float)*(int *)((int)pfVar8[1] + 0x10) != *pfVar8)) {
    if ((cVar13 == '\0') || (*(int *)(local_58 + 0x30) < 2)) goto LAB_00570747;
    this_00 = (Node *)FUN_005adb0f(0x2b8);
    local_8._0_1_ = 3;
    uVar5 = *(undefined4 *)(local_58 + 0x30);
    local_7c = this_00;
    local_58 = *(Rect **)(local_58 + 0x34);
    FUN_004024e0(local_9c,local_44);
    local_8._0_1_ = 4;
    cocos2d::Node::Node(this_00);
    local_8._0_1_ = 5;
    *(undefined ***)this_00 = UIAnimatedSprite::vftable;
    FUN_004024e0(this_00 + 0x278,local_9c);
    *(undefined4 *)(this_00 + 0x290) = uVar5;
    *(undefined4 *)(this_00 + 0x294) = 0;
    *(Rect **)(this_00 + 0x298) = local_58;
    *(undefined4 *)(this_00 + 0x29c) = 0;
    *(undefined4 *)(this_00 + 0x2a0) = 0;
    *(undefined4 *)(this_00 + 0x2a4) = 0;
    *(undefined4 *)(this_00 + 0x2a8) = 0;
    *(undefined4 *)(this_00 + 0x2ac) = 0;
    *(undefined4 *)(this_00 + 0x2b0) = 0;
    local_8._0_1_ = 3;
    if (0xf < local_88) {
      pvVar11 = local_9c[0];
      if ((0xfff < local_88 + 1) &&
         (pvVar11 = *(void **)((int)local_9c[0] + -4),
         0x1f < (uint)((int)local_9c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_8._0_1_ = 2;
    local_58 = (Rect *)this_00;
    FUN_005620e0((int *)this_00);
    local_80 = 0x3f000000;
    local_7c = (Node *)0x3f000000;
    local_8._0_1_ = 6;
    (**(code **)(*(int *)this_00 + 0xa0))();
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*(int *)this_00 + 0x4c))();
    this = local_84;
    (**(code **)(*local_84 + 0x108))();
    puVar6 = *(undefined4 **)((int)this + 0x54c);
    if (*(undefined4 **)((int)this + 0x550) == puVar6) {
      FUN_00414080((int *)((int)this + 0x548),puVar6,&local_58);
      this_00 = (Node *)local_58;
    }
    else {
      *puVar6 = this_00;
      *(int *)((int)this + 0x54c) = *(int *)((int)this + 0x54c) + 4;
    }
    pfVar8 = (float *)(**(code **)(*(int *)this_00 + 0xb0))();
    local_7c = (Node *)*pfVar8;
    iVar9 = (**(code **)(*(int *)this_00 + 0xb0))();
    param_2 = local_4c;
  }
  else {
    FUN_00403640(local_44,"_Offline",8);
LAB_00570747:
    in_stack_ffffff2c = (void *)0x570763;
    FUN_00591e00(&stack0xffffff3c,"%s.png");
    local_48 = (Rect *)FUN_00591910(in_stack_ffffff3c);
    local_50 = 0x3f000000;
    local_4c = (Rect *)0x3f000000;
    local_8._0_1_ = 7;
    (**(code **)(*(int *)local_48 + 0xa0))();
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*(int *)local_48 + 0x4c))();
    (**(code **)(*(int *)this + 0x108))();
    piVar3 = *(int **)((int)this + 0x534);
    local_4c = local_48;
    if (*(int **)((int)this + 0x538) == piVar3) {
      FUN_00414080((void *)((int)this + 0x530),piVar3,&local_4c);
    }
    else {
      *piVar3 = (int)local_48;
      *(int *)((int)this + 0x534) = *(int *)((int)this + 0x534) + 4;
    }
    pfVar8 = (float *)(**(code **)(*(int *)local_48 + 0xb0))();
    local_7c = (Node *)*pfVar8;
    iVar9 = (**(code **)(*(int *)local_48 + 0xb0))();
  }
  local_58 = *(Rect **)(iVar9 + 4);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pvVar11 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar11 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
LAB_00570ad6:
  cocos2d::Rect::Rect((Rect *)&local_78);
  local_8 = CONCAT31(local_8._1_3_,9);
  iVar9 = *(int *)(iVar1 + *(int *)(*(int *)(*(int *)(param_2 + 8) + 0xd8) + 0x50));
  local_78 = *(float *)(iVar9 + 0xc) - (float)local_7c * 0.5;
  local_68 = local_60;
  local_4c = *(Rect **)((int)this + 0x558);
  local_74 = *(float *)(iVar9 + 0x10) - (float)local_58 * 0.5;
  local_70 = (float)local_7c;
  local_6c = local_58;
  if (*(Rect **)((int)this + 0x55c) == local_4c) {
    FUN_00572b50((int *)((int)this + 0x554),local_4c,(Rect *)&local_78);
  }
  else {
    cocos2d::Rect::Rect(local_4c,(Rect *)&local_78);
    *(int *)(local_4c + 0x10) = local_68;
    *(int *)((int)this + 0x558) = *(int *)((int)this + 0x558) + 0x14;
  }
  piVar3 = *(int **)(param_2 + 0xc);
  local_68 = local_60 + 100;
  local_78 = *(float *)(*(int *)(iVar1 + *(int *)(*piVar3 + 0x50)) + 0xc) - local_70 * 0.5;
  local_74 = (float)local_6c * 0.5 + *(float *)(*(int *)(iVar1 + *(int *)(*piVar3 + 0x50)) + 0x10);
  if (piVar3[local_60 + 0x15] == 0) {
    in_stack_ffffff2c = (void *)((uint)in_stack_ffffff2c & 0xffffff00);
    FUN_00402690(&stack0xffffff2c,"Addon_Empty.png",0xf);
    local_4c = (Rect *)FUN_00591910(in_stack_ffffff2c);
    local_8._0_1_ = 0xb;
  }
  else {
    FUN_00591e00(&stack0xffffff2c,"%s.png");
    local_4c = (Rect *)FUN_00591910(in_stack_ffffff2c);
    local_8._0_1_ = 10;
  }
  local_60 = 0x3f000000;
  local_64 = 0x3f000000;
  (**(code **)(*(int *)local_4c + 0xa0))();
  pRVar7 = local_4c;
  local_8 = CONCAT31(local_8._1_3_,9);
  (**(code **)(*(int *)local_4c + 0x48))();
  piVar3 = local_84;
  (**(code **)(*local_84 + 0x108))();
  puVar6 = (undefined4 *)piVar3[0x14d];
  local_4c = pRVar7;
  if ((undefined4 *)piVar3[0x14e] == puVar6) {
    FUN_00414080(piVar3 + 0x14c,puVar6,&local_4c);
  }
  else {
    *puVar6 = pRVar7;
    piVar3[0x14d] = piVar3[0x14d] + 4;
  }
  pRVar7 = *(Rect **)((int)this + 0x558);
  local_6c = (Rect *)0x41f00000;
  if (*(Rect **)((int)this + 0x55c) == pRVar7) {
    FUN_00572b50((int *)((int)this + 0x554),pRVar7,(Rect *)&local_78);
  }
  else {
    cocos2d::Rect::Rect(pRVar7,(Rect *)&local_78);
    *(int *)(pRVar7 + 0x10) = local_68;
    *(int *)((int)this + 0x558) = *(int *)((int)this + 0x558) + 0x14;
  }
  cocos2d::Rect::~Rect((Rect *)&local_78);
  if (0xf < local_18) {
    ppppbVar12 = (byte ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar12 = (byte ****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00570d80(int *param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_stack_ffffffd0;
  uint3 uVar7;
  void *pvVar6;
  
  if (param_1[0x148] != 0) {
    uVar7 = (uint3)((uint)in_stack_ffffffd0 >> 8);
    if ((char)param_1[0x146] == '\0') {
      pcVar4 = "ShieldSwitch_Off_Bright.png";
      if (*(char *)((int)param_1 + 0x519) == '\0') {
        pcVar4 = "ShieldSwitch_Off.png";
      }
      pvVar6 = (void *)((uint)uVar7 << 8);
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(&stack0xffffffd0,pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
      piVar2 = (int *)FUN_00591910(pvVar6);
      param_1[0x14b] = (int)piVar2;
      iVar5 = *piVar2;
      (**(code **)(*(int *)param_1[0x148] + 0xb0))();
      (**(code **)(*(int *)param_1[0x14b] + 0xb0))();
    }
    else {
      pcVar4 = "ShieldSwitch_On_Bright.png";
      if (*(char *)((int)param_1 + 0x519) == '\0') {
        pcVar4 = "ShieldSwitch_On.png";
      }
      pvVar6 = (void *)((uint)uVar7 << 8);
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(&stack0xffffffd0,pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
      piVar2 = (int *)FUN_00591910(pvVar6);
      param_1[0x14b] = (int)piVar2;
      iVar5 = *piVar2;
      (**(code **)(*(int *)param_1[0x148] + 0xb0))();
      (**(code **)(*(int *)param_1[0x14b] + 0xb0))();
    }
    (**(code **)(iVar5 + 0x48))();
    (**(code **)(*param_1 + 0x108))();
  }
  return;
}


void __fastcall FUN_00570ef0(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  Rect *this;
  Rect *pRVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  void *in_stack_ffffffb8;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c82d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  pRVar8 = (Rect *)param_1[0x156];
  this = (Rect *)param_1[0x155];
  if (this != pRVar8) {
    do {
      cocos2d::Rect::~Rect(this);
      this = this + 0x14;
    } while (this != pRVar8);
    this = (Rect *)param_1[0x155];
  }
  param_1[0x156] = (int)this;
  if (param_1[0x10a] == 0) {
    ExceptionList = local_10;
    return;
  }
  pcVar11 = "%s.png";
  FUN_00591e00(&stack0xffffffb8,"%s.png");
  iVar5 = FUN_00591910(in_stack_ffffffb8);
  param_1[0x148] = iVar5;
  (**(code **)(*param_1 + 0x108))();
  pRVar8 = (Rect *)param_1[0x10a];
  local_14 = 0;
  if (*(int *)(*(int *)(*(int *)(pRVar8 + 8) + 0xd8) + 0x60) -
      *(int *)(*(int *)(*(int *)(pRVar8 + 8) + 0xd8) + 0x5c) >> 2 != 0) {
    do {
      iVar5 = local_14 * 4;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1[0x10a] + 8) + 0xd8) + 0x5c);
      uVar6 = FUN_004373d0(*(void **)(param_1[0x10a] + 0xc),*(int *)(*(int *)(iVar2 + iVar5) + 0x10)
                          );
      iVar2 = *(int *)(iVar2 + iVar5);
      pfVar3 = *(float **)(*(int *)(*(int *)(*(int *)(param_1[0x10a] + 8) + 0xd8) + 0x5c) + iVar5);
      pcVar11 = (char *)0x57102b;
      FUN_00570310(param_1,*pfVar3,pfVar3[1],*(float *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                   (char)uVar6);
      pRVar8 = (Rect *)param_1[0x10a];
      local_14 = local_14 + 1;
    } while (local_14 <
             (uint)(*(int *)(*(int *)(*(int *)(pRVar8 + 8) + 0xd8) + 0x60) -
                    *(int *)(*(int *)(*(int *)(pRVar8 + 8) + 0xd8) + 0x5c) >> 2));
  }
  uVar9 = 0;
  if (*(int *)(**(int **)(pRVar8 + 0xc) + 0x54) - *(int *)(**(int **)(pRVar8 + 0xc) + 0x50) >> 2 !=
      0) {
    do {
      if ((pRVar8[99] == (Rect)0x0) ||
         (uVar6 = FUN_004373d0(*(void **)(pRVar8 + 0xc),
                               *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(pRVar8 + 8) + 0xd8) +
                                                         0x50) + uVar9 * 4) + 4)),
         (char)uVar6 == '\0')) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      FUN_005704e0(param_1,uVar9,pRVar8,cVar4);
      pRVar8 = (Rect *)param_1[0x10a];
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(**(int **)(pRVar8 + 0xc) + 0x54) -
                            *(int *)(**(int **)(pRVar8 + 0xc) + 0x50) >> 2));
  }
  pcVar10 = "ComponentBackground_Border.png";
  pvVar12 = (void *)((uint)pcVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffffb0,"ComponentBackground_Border.png",0x1e);
  iVar5 = FUN_00591910(pvVar12);
  param_1[0x14a] = iVar5;
  (**(code **)(*param_1 + 0x108))();
  FUN_00570d80(param_1);
  fVar1 = (float)param_1[0x138];
  if (*(char *)(param_1[0x10a] + 0x1c) == '\0') {
    if (fVar1 != -2.0) goto LAB_00571148;
    param_1[0x138] = -0x40800000;
  }
  else {
    if (fVar1 == -1.0) {
      param_1[0x138] = -0x40000000;
      goto LAB_0057119a;
    }
LAB_00571148:
    if (fVar1 == -2.0) goto LAB_0057119a;
  }
  pcVar10 = (char *)((uint)pcVar10 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"ComponentBackground_Glass.png",0x1d);
  iVar5 = FUN_00591910(pcVar10);
  param_1[0x14a] = iVar5;
  FUN_00571960((int)param_1);
  (**(code **)(*param_1 + 0x108))();
LAB_0057119a:
  iVar5 = 0;
  do {
    pcVar10 = (char *)((uint)pcVar10 & 0xffffff00);
    FUN_00402690(&stack0xffffffa8,"ComponentBackground_Screw.png",0x1d);
    piVar7 = (int *)FUN_00591910(pcVar10);
    local_8 = 0;
    (**(code **)(*piVar7 + 0xa0))();
    local_8 = 0xffffffff;
    switch(iVar5) {
    case 0:
      break;
    case 1:
      (**(code **)(*piVar7 + 0x48))();
      goto LAB_00571285;
    case 2:
      break;
    case 3:
      break;
    default:
      goto LAB_00571285;
    }
    (**(code **)(*piVar7 + 0x48))();
LAB_00571285:
    param_1[iVar5 + 0x142] = (int)piVar7;
    (**(code **)(*param_1 + 0x108))();
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      FUN_005717a0((int)param_1);
      *(undefined1 *)param_1[0xa2] = 1;
      iVar5 = *param_1;
      (**(code **)(*(int *)param_1[0x148] + 0xb0))();
      (**(code **)(iVar5 + 0xac))();
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


void __thiscall FUN_005712f0(void *this,float param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  float fVar15;
  undefined4 uVar16;
  int local_10;
  int local_c;
  
  iVar10 = DAT_0065b5cc;
  if (DAT_0065b3d4 == 0) {
    return;
  }
  uVar8 = 0;
  bVar14 = false;
  iVar9 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  iVar1 = *(int *)(iVar9 + 0x3c);
  uVar7 = *(int *)(iVar9 + 0x40) - iVar1 >> 2;
  if (uVar7 != 0) {
    do {
      local_10 = *(int *)(iVar1 + uVar8 * 4);
      if (*(int *)(local_10 + 0x10) == *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8))
      goto LAB_0057134c;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  local_10 = 0;
LAB_0057134c:
  iVar9 = *(int *)((int)this + 0x428);
  if (local_10 != iVar9) {
    *(int *)((int)this + 0x428) = local_10;
    if (local_10 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)(local_10 + 99);
    }
    *(undefined1 *)((int)this + 0x430) = uVar5;
    *(undefined4 *)((int)this + 0x42c) = *(undefined4 *)(*(int *)(iVar10 + 0xd0) + 0x1dc);
    if (local_10 == 0) {
      *(undefined1 *)((int)this + 0x431) = 1;
      fVar15 = -2.0;
    }
    else {
      *(undefined1 *)((int)this + 0x431) = *(undefined1 *)(local_10 + 0x1e);
      fVar15 = (float)(int)((*(char *)(local_10 + 0x1e) == '\0') - 2);
    }
    *(float *)((int)this + 0x4e8) = fVar15;
    if (local_10 == 0) {
      *(undefined1 *)((int)this + 0x432) = 1;
      fVar15 = -2.0;
    }
    else {
      *(undefined1 *)((int)this + 0x432) = *(undefined1 *)(local_10 + 0x1f);
      fVar15 = (float)(int)((*(char *)(local_10 + 0x1f) == '\0') - 2);
    }
    *(float *)((int)this + 0x4ec) = fVar15;
    if (local_10 == 0) {
      *(undefined1 *)((int)this + 0x433) = 1;
      fVar15 = -2.0;
    }
    else {
      *(undefined1 *)((int)this + 0x433) = *(undefined1 *)(local_10 + 0x20);
      fVar15 = (float)(int)((*(char *)(local_10 + 0x20) == '\0') - 2);
    }
    *(float *)((int)this + 0x4f0) = fVar15;
    if (local_10 == 0) {
      *(undefined1 *)((int)this + 0x434) = 1;
      fVar15 = -2.0;
    }
    else {
      *(undefined1 *)((int)this + 0x434) = *(undefined1 *)(local_10 + 0x21);
      fVar15 = (float)(int)((*(char *)(local_10 + 0x21) == '\0') - 2);
    }
    *(float *)((int)this + 0x4f4) = fVar15;
    if (local_10 == 0) {
      bVar14 = true;
    }
    else {
      bVar14 = *(char *)(local_10 + 0x1c) == '\0';
    }
    *(bool *)((int)this + 0x4dc) = bVar14;
    *(undefined4 *)((int)this + 0x438) = 0xffffffff;
    bVar14 = true;
    iVar9 = local_10;
  }
  iVar10 = *(int *)(iVar10 + 0xd0);
  if (iVar9 == 0) {
    *(undefined4 *)(iVar10 + 0x1d8) = 0xffffffff;
    return;
  }
  iVar10 = *(int *)(iVar10 + 0x1dc);
  if (*(int *)((int)this + 0x42c) != iVar10) {
    *(int *)((int)this + 0x42c) = iVar10;
    bVar14 = true;
  }
  if (*(char *)((int)this + 0x430) != *(char *)(iVar9 + 99)) {
    *(char *)((int)this + 0x430) = *(char *)(iVar9 + 99);
    (**(code **)(*(int *)this + 0x294))();
    return;
  }
  uVar7 = 0;
  iVar10 = *(int *)((int)this + 0x548);
  bVar4 = false;
  if (*(int *)((int)this + 0x54c) - iVar10 >> 2 != 0) {
    do {
      piVar2 = *(int **)(iVar10 + uVar7 * 4);
      iVar10 = piVar2[0xa4];
      if (1 < iVar10) {
        fVar15 = (float)piVar2[0xa7] + param_1;
        piVar2[0xa7] = (int)fVar15;
        if ((float)piVar2[0xa6] / (float)iVar10 <= fVar15) {
          piVar2[0xa5] = piVar2[0xa5] + 1;
          piVar2[0xa7] = (int)(fVar15 - (float)piVar2[0xa6] / (float)iVar10);
          if (iVar10 <= piVar2[0xa5]) {
            piVar2[0xa5] = 0;
          }
          FUN_005620e0(piVar2);
          bVar4 = true;
        }
      }
      uVar7 = uVar7 + 1;
      iVar10 = *(int *)((int)this + 0x548);
    } while (uVar7 < (uint)(*(int *)((int)this + 0x54c) - iVar10 >> 2));
  }
  pcVar12 = (char *)((int)this + 0x431);
  pcVar11 = (char *)(local_10 + 0x1e);
  puVar13 = (undefined4 *)((int)this + 0x4e8);
  local_c = 4;
  do {
    uVar16 = 0x43b40000;
    if (*pcVar12 != *pcVar11) {
      if (*pcVar11 == '\0') {
        uVar16 = 0;
      }
      *puVar13 = uVar16;
      *pcVar12 = *pcVar11;
      FUN_00591070("DETAIL","Begun toggling screw %d");
    }
    puVar13 = puVar13 + 1;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar10 = *(int *)((int)this + 0x438);
  if (iVar10 == -1) {
    *(uint *)((int)this + 0x438) = (uint)(*(char *)(local_10 + 0x1c) != '\0');
  }
  else {
    if (iVar10 == 0) {
      if (*(char *)(local_10 + 0x1c) == '\0') goto LAB_005716bb;
      *(undefined4 *)((int)this + 0x438) = 1;
      if (*(float *)((int)this + 0x4e0) == -1.0) {
        *(undefined4 *)((int)this + 0x4e0) = 0;
      }
      *(undefined2 *)((int)this + 0x4dc) = 0;
    }
    else {
      if ((iVar10 != 1) || (*(char *)(local_10 + 0x1c) != '\0')) goto LAB_005716bb;
      if (*(float *)((int)this + 0x4e0) == -2.0) {
        *(undefined4 *)((int)this + 0x4e0) = 0;
      }
      *(undefined2 *)((int)this + 0x4dc) = 0x101;
      *(undefined4 *)((int)this + 0x438) = 0;
    }
    bVar14 = true;
  }
LAB_005716bb:
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8) != -1) {
    iVar10 = 0x54;
    do {
      piVar2 = *(int **)((int)this + iVar10 + 1000);
      iVar9 = *(int *)(*(int *)((int)this + 0x428) + 0xc);
      pfVar3 = *(float **)(iVar9 + -0x50 + iVar10);
      if (piVar2 != (int *)0x0) {
        if (((pfVar3 != (float *)0x0) && (*piVar2 == *(int *)pfVar3[1])) &&
           ((float)piVar2[1] == *pfVar3)) goto LAB_00571726;
LAB_005716ff:
        FUN_00571820((int)this);
        goto LAB_00571766;
      }
      if (pfVar3 != (float *)0x0) goto LAB_005716ff;
LAB_00571726:
      piVar2 = *(int **)((int)this + iVar10 + 0x438);
      pfVar3 = *(float **)(iVar9 + iVar10);
      if (piVar2 == (int *)0x0) {
        if (pfVar3 != (float *)0x0) goto LAB_005716ff;
      }
      else if (((pfVar3 == (float *)0x0) || (*piVar2 != *(int *)pfVar3[1])) ||
              ((float)piVar2[1] != *pfVar3)) goto LAB_005716ff;
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0xa4);
  }
  if (bVar14) {
LAB_00571766:
    (**(code **)(*(int *)this + 0x294))();
  }
  cVar6 = FUN_00571a90(this);
  if ((cVar6 != '\0') || (bVar4)) {
    **(undefined1 **)((int)this + 0x288) = 1;
  }
  return;
}


void __fastcall FUN_005717a0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)(param_1 + 0x508);
  iVar4 = 4;
  do {
    if ((int *)*piVar3 != (int *)0x0) {
      iVar5 = *(int *)*piVar3;
      if ((float)piVar3[-8] == -1.0) {
        (**(code **)(iVar5 + 0xb4))(0);
      }
      else {
        pcVar1 = *(code **)(iVar5 + 0xb4);
        if ((float)piVar3[-8] == -2.0) {
          (*pcVar1)(1);
          piVar2 = (int *)*piVar3;
          iVar5 = 0;
        }
        else {
          (*pcVar1)(1);
          piVar2 = (int *)*piVar3;
          iVar5 = piVar3[-8];
        }
        (**(code **)(*piVar2 + 0xbc))(iVar5);
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


void __fastcall FUN_00571820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int local_8;
  
  uVar8 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  piVar7 = *(int **)(iVar1 + 0x3c);
  uVar6 = *(int *)(iVar1 + 0x40) - (int)piVar7 >> 2;
  if (uVar6 != 0) {
    piVar5 = piVar7;
    while (*(int *)(*piVar5 + 0x10) != *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8)) {
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 1;
      if (uVar6 <= uVar8) {
        return;
      }
    }
    iVar1 = piVar7[uVar8];
    if (iVar1 != 0) {
      iVar3 = -0x438 - param_1;
      local_8 = 0x14;
      iVar2 = -param_1;
      piVar7 = (int *)(param_1 + 0x48c);
      do {
        if ((void *)piVar7[-0x14] != (void *)0x0) {
          FUN_005adb3f((void *)piVar7[-0x14]);
          piVar7[-0x14] = 0;
        }
        if (*(int *)((int)piVar7 + *(int *)(iVar1 + 0xc) + iVar2 + -0x488) != 0) {
          puVar4 = (undefined8 *)FUN_005adb0f(8);
          *puVar4 = 0;
          piVar7[-0x14] = (int)puVar4;
          *(undefined4 *)puVar4 =
               **(undefined4 **)(*(int *)((int)piVar7 + *(int *)(iVar1 + 0xc) + iVar2 + -0x488) + 4)
          ;
          *(undefined4 *)(piVar7[-0x14] + 4) =
               **(undefined4 **)((int)piVar7 + *(int *)(iVar1 + 0xc) + iVar2 + -0x488);
        }
        if ((void *)*piVar7 != (void *)0x0) {
          FUN_005adb3f((void *)*piVar7);
          *piVar7 = 0;
        }
        if (*(int *)((int)piVar7 + *(int *)(iVar1 + 0xc) + iVar3) != 0) {
          puVar4 = (undefined8 *)FUN_005adb0f(8);
          *puVar4 = 0;
          *piVar7 = (int)puVar4;
          *(undefined4 *)puVar4 =
               **(undefined4 **)(*(int *)((int)piVar7 + *(int *)(iVar1 + 0xc) + iVar3) + 4);
          *(undefined4 *)(*piVar7 + 4) =
               **(undefined4 **)((int)piVar7 + *(int *)(iVar1 + 0xc) + iVar3);
        }
        piVar7 = piVar7 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}


void __fastcall FUN_00571960(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x4e0) == -1.0) {
    (**(code **)(**(int **)(param_1 + 0x528) + 0x48))(0,0);
    return;
  }
  iVar2 = **(int **)(param_1 + 0x528);
  if (*(float *)(param_1 + 0x4e0) != -2.0) {
    pcVar1 = *(code **)(iVar2 + 0xb0);
    if (*(char *)(param_1 + 0x4dd) == '\0') {
      iVar2 = (*pcVar1)();
      fVar5 = *(float *)(param_1 + 0x4e0);
      piVar4 = *(int **)(param_1 + 0x528);
      if (*(float *)(iVar2 + 4) <= fVar5) {
        *(undefined4 *)(param_1 + 0x4e0) = 0xc0000000;
        (**(code **)(*piVar4 + 0xb4))(0);
        return;
      }
    }
    else {
      iVar2 = (*pcVar1)();
      piVar4 = *(int **)(param_1 + 0x528);
      if (*(float *)(param_1 + 0x4e0) < *(float *)(iVar2 + 4)) {
        iVar2 = *piVar4;
        iVar3 = (**(code **)(iVar2 + 0xb0))();
        (**(code **)(iVar2 + 0x48))(0,*(float *)(iVar3 + 4) - *(float *)(param_1 + 0x4e0));
        (**(code **)(**(int **)(param_1 + 0x528) + 0xb4))(1);
        return;
      }
      *(undefined4 *)(param_1 + 0x4e0) = 0xbf800000;
      fVar5 = 0.0;
    }
    (**(code **)(*piVar4 + 0x48))(0,fVar5);
    (**(code **)(**(int **)(param_1 + 0x528) + 0xb4))(1);
    return;
  }
  (**(code **)(iVar2 + 0xb4))(0);
  return;
}


undefined1 __fastcall FUN_00571a90(int *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  float in_XMM1_Da;
  float fVar11;
  undefined4 uVar12;
  undefined1 local_5;
  
  iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
  uVar6 = 0;
  local_5 = 0;
  iVar5 = *(int *)(*(int *)(iVar4 + 0x40) + 0x3c);
  uVar3 = *(int *)(*(int *)(iVar4 + 0x40) + 0x40) - iVar5 >> 2;
  if (uVar3 != 0) {
    do {
      piVar9 = *(int **)(iVar5 + uVar6 * 4);
      if (piVar9[4] == *(int *)(iVar4 + 0x1d8)) goto LAB_00571adf;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  piVar9 = (int *)0x0;
LAB_00571adf:
  if ((*(int *)(iVar4 + 0x1d8) == -1) || (piVar9 == (int *)0x0)) {
    return 0;
  }
  iVar4 = param_1[0x146];
  cVar1 = *(char *)((int)param_1 + 0x519);
  fVar11 = in_XMM1_Da;
  if ((char)param_1[0x137] == '\0') {
    *(undefined1 *)(param_1 + 0x146) = 0;
    cVar2 = (**(code **)(*piVar9 + 0x14))();
    if (cVar2 == '\0') {
      fVar10 = (float)param_1[0x147];
      if (fVar10 == -1.0) {
        param_1[0x147] = 0;
        fVar10 = 0.0;
      }
      goto LAB_00571b98;
    }
    param_1[0x147] = -0x40800000;
  }
  else {
    *(undefined1 *)(param_1 + 0x146) = 1;
    uVar3 = FUN_00571e00();
    if ((char)uVar3 == '\0') {
      fVar10 = (float)param_1[0x147];
      if (fVar10 == -1.0) {
        param_1[0x147] = 0;
        fVar10 = 0.0;
      }
    }
    else {
      param_1[0x147] = -0x40800000;
      fVar10 = -1.0;
    }
LAB_00571b98:
    if (fVar10 != -1.0) {
      fVar10 = fVar10 + fVar11;
      param_1[0x147] = (int)fVar10;
      if (fVar10 < 1.0) {
        *(bool *)((int)param_1 + 0x519) = 0.7 <= fVar10;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x519) = 0;
        param_1[0x147] = (int)(fVar10 - 1.0);
      }
    }
  }
  if (((char)iVar4 != (char)param_1[0x146]) || (cVar1 != *(char *)((int)param_1 + 0x519))) {
    local_5 = 1;
    FUN_00570d80(param_1);
  }
  if ((float)param_1[0x138] < 0.0) goto LAB_00571d14;
  param_1[0x138] = (int)(in_XMM1_Da * 600.0 + (float)param_1[0x138]);
  if (*(char *)((int)param_1 + 0x4dd) == '\0') {
    iVar4 = (**(code **)(*(int *)param_1[0x14a] + 0xb0))();
    fVar11 = (float)param_1[0x138];
    piVar7 = (int *)param_1[0x14a];
    if (fVar11 < *(float *)(iVar4 + 4)) goto LAB_00571ce2;
    param_1[0x138] = -0x40000000;
    uVar12 = 0;
  }
  else {
    iVar4 = (**(code **)(*(int *)param_1[0x14a] + 0xb0))();
    piVar7 = (int *)param_1[0x14a];
    if ((float)param_1[0x138] < *(float *)(iVar4 + 4)) {
      iVar4 = *piVar7;
      iVar5 = (**(code **)(iVar4 + 0xb0))();
      (**(code **)(iVar4 + 0x48))(0,*(float *)(iVar5 + 4) - (float)param_1[0x138]);
    }
    else {
      param_1[0x138] = -0x40800000;
      fVar11 = 0.0;
LAB_00571ce2:
      (**(code **)(*piVar7 + 0x48))(0,fVar11);
    }
    piVar7 = (int *)param_1[0x14a];
    uVar12 = 1;
  }
  (**(code **)(*piVar7 + 0xb4))(uVar12);
  FUN_00571960((int)param_1);
  local_5 = 1;
LAB_00571d14:
  fVar11 = (float)param_1[0x139] + in_XMM1_Da;
  param_1[0x139] = (int)fVar11;
  if (0.025 <= fVar11) {
    pfVar8 = (float *)(param_1 + 0x13a);
    iVar4 = 0;
    param_1[0x139] = (int)(fVar11 - 0.025);
    do {
      fVar11 = *pfVar8;
      if ((fVar11 != -2.0) && (fVar11 != -1.0)) {
        if (*(char *)(iVar4 + 0x1e + (int)piVar9) == '\0') {
          fVar11 = fVar11 - 45.0;
          *pfVar8 = fVar11;
          if (fVar11 <= 0.0) {
            pfVar8[4] = (float)((int)pfVar8[4] + 1);
            *pfVar8 = fVar11 + 360.0;
            if (1 < (int)pfVar8[4]) {
              *pfVar8 = -1.0;
              goto LAB_00571dcd;
            }
          }
        }
        else {
          fVar11 = fVar11 + 45.0;
          *pfVar8 = fVar11;
          if (360.0 <= fVar11) {
            pfVar8[4] = (float)((int)pfVar8[4] + 1);
            *pfVar8 = fVar11 - 360.0;
            if (1 < (int)pfVar8[4]) {
              *pfVar8 = -2.0;
LAB_00571dcd:
              pfVar8[4] = 0.0;
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      pfVar8 = pfVar8 + 1;
    } while (iVar4 < 4);
    FUN_005717a0((int)param_1);
  }
  return local_5;
}


uint FUN_00571e00(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  iVar1 = *(int *)(iVar4 + 0x3c);
  uVar2 = *(int *)(iVar4 + 0x40) - iVar1 >> 2;
  if (uVar2 != 0) {
    do {
      iVar4 = *(int *)(iVar1 + uVar3 * 4);
      if (*(int *)(iVar4 + 0x10) == *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8))
      goto LAB_00571e36;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  iVar4 = 0;
LAB_00571e36:
  uVar2 = 0;
  do {
    if (*(char *)(iVar4 + 0x1e + uVar2) != '\0') {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return uVar2 & 0xffffff00;
}


void __thiscall FUN_00571e60(void *this,undefined4 param_1,float param_2)

{
  int *piVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  Size *pSVar5;
  Vec2 *pVVar6;
  Rect *this_00;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *in_stack_ffffffac;
  Rect local_28 [16];
  undefined **local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c8e52;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = (**(code **)(*(int *)this + 0xb0))();
  piVar1 = *(int **)((int)this + 0x52c);
  param_2 = *(float *)(iVar4 + 4) - param_2;
  pSVar5 = (Size *)(**(code **)(**(int **)((int)this + 0x52c) + 0xb0))();
  pVVar6 = (Vec2 *)(**(code **)(*piVar1 + 0x5c))();
  this_00 = (Rect *)cocos2d::Rect::Rect(local_28,pVVar6,pSVar5);
  local_8._0_1_ = 1;
  bVar3 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  cocos2d::Rect::~Rect(local_28);
  if (bVar3) {
    uVar7 = FUN_00571e00();
    if ((char)uVar7 == '\0') {
      in_stack_ffffffac = (byte *)((uint)in_stack_ffffffac & 0xffffff00);
      FUN_00402690(&stack0xffffffac,"Module open/close switch",0x18);
      FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffac);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    iVar4 = FUN_00572500((int)this);
    if (iVar4 != -1) {
      if (99 < iVar4) {
        FUN_005542e0(*(int *)((int)this + 0x278));
        ExceptionList = local_10;
        return;
      }
      iVar8 = FUN_005225b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),
                           *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8));
      local_18 = (undefined **)(iVar4 * 4);
      pfVar2 = *(float **)(*(int *)(iVar8 + 0xc) + 4 + (int)local_18);
      if (pfVar2 != (float *)0x0) {
        local_11 = *pfVar2 <= (float)*(int *)((int)pfVar2[1] + 0x14) &&
                   (float)*(int *)((int)pfVar2[1] + 0x14) != *pfVar2;
        local_18 = &PTR_005ce008;
        FUN_00591e00(&stack0xffffffac,"%s %s %s%s");
        FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffac);
        ExceptionList = local_10;
        return;
      }
      FUN_00591e00(&stack0xffffffac,"%s slot");
      FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffac);
      ExceptionList = local_10;
      return;
    }
  }
  iVar4 = *(int *)((int)this + 0x278);
  pbVar10 = (byte *)(iVar4 + 0xfc);
  pbVar9 = pbVar10;
  if (0xf < *(uint *)(iVar4 + 0x110)) {
    pbVar9 = *(byte **)pbVar10;
  }
  uVar7 = FUN_004031f0(pbVar9,*(uint *)(iVar4 + 0x10c),(byte *)&PTR_005ce008,0);
  if ((char)uVar7 == '\0') {
    *(undefined4 *)(iVar4 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar4 + 0x110)) {
      pbVar10 = *(byte **)pbVar10;
    }
    *pbVar10 = 0;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00572110(void *this,float param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  Size *pSVar4;
  Vec2 *pVVar5;
  Rect *this_00;
  void *this_01;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  Rect local_28 [16];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c8e52;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
  uVar6 = 0;
  param_2 = *(float *)(iVar3 + 4) - param_2;
  local_18 = *(int *)(DAT_0065b5cc + 0xd0);
  piVar1 = *(int **)(*(int *)(local_18 + 0x40) + 0x3c);
  uVar8 = *(int *)(*(int *)(local_18 + 0x40) + 0x40) - (int)piVar1 >> 2;
  if (uVar8 != 0) {
    piVar7 = piVar1;
    do {
      if (*(int *)(*piVar7 + 0x10) == *(int *)(local_18 + 0x1d8)) {
        local_14 = piVar1[uVar6];
        goto LAB_00572194;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < uVar8);
  }
  local_14 = 0;
LAB_00572194:
  if (26.0 <= param_1) {
LAB_005721d6:
    fVar9 = (float)(*(int *)((int)this + 0x2a0) + -0x1a);
    if (fVar9 <= param_1) {
      if (param_2 < (float)(*(int *)((int)this + 0x2a4) + -0x1a)) {
        if ((param_1 < fVar9) || (26.0 <= param_2)) goto LAB_005722d4;
        iVar3 = 2;
      }
      else {
        iVar3 = 3;
      }
      goto LAB_00572222;
    }
LAB_005722d4:
    piVar1 = *(int **)((int)this + 0x52c);
    pSVar4 = (Size *)(**(code **)(**(int **)((int)this + 0x52c) + 0xb0))();
    pVVar5 = (Vec2 *)(**(code **)(*piVar1 + 0x5c))();
    this_00 = (Rect *)cocos2d::Rect::Rect(local_28,pVVar5,pSVar4);
    local_8._0_1_ = 1;
    bVar2 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&param_1);
    local_8 = (uint)local_8._1_3_ << 8;
    cocos2d::Rect::~Rect(local_28);
    if (!bVar2) {
      if (*(char *)(local_14 + 0x1c) != '\0') {
        iVar3 = FUN_00572500((int)this);
        if (iVar3 == -1) {
          if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
            FUN_004122b0();
            FUN_0041c620(0x7d,0);
            ExceptionList = local_10;
            return;
          }
          iVar3 = -1;
        }
        else {
          if (99 < iVar3) {
            iVar3 = iVar3 + -100;
          }
          if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
            FUN_004122b0();
            FUN_0041c620(0x7d,0);
            ExceptionList = local_10;
            return;
          }
        }
        FUN_004e17b0(*(int *)(DAT_0065b5cc + 0xd0),iVar3);
        ExceptionList = local_10;
        return;
      }
      FUN_00591070("DETAIL","shield not open");
      FUN_00527550(*(int **)(DAT_0065b3d4 + 0x224),3,"Close shield first.");
      goto LAB_005723ea;
    }
    uVar6 = FUN_00571e00();
    if ((char)uVar6 == '\0') {
      if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
        FUN_004e1980(*(int *)(DAT_0065b5cc + 0xd0));
        ExceptionList = local_10;
        return;
      }
      if (DAT_0065c2c8 == 0) {
        DAT_0065c2c8 = FUN_005adb0f(1);
      }
      FUN_0041c620(0x82,0);
      ExceptionList = local_10;
      return;
    }
    pcVar11 = "Remove screws first..";
  }
  else {
    if (26.0 <= param_2) {
      if (param_2 < (float)(*(int *)((int)this + 0x2a4) + -0x1a)) goto LAB_005721d6;
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
LAB_00572222:
    if (*(char *)((int)this + 0x4dc) == '\0') {
      pcVar11 = "Close shield first.";
    }
    else {
      if (*(char *)(local_14 + 99) == '\0') {
        if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
          if (DAT_0065c2c8 == 0) {
            DAT_0065c2c8 = FUN_005adb0f(1);
          }
          FUN_0041c620(0x81,0);
          (**(code **)(*(int *)this + 0x294))();
          ExceptionList = local_10;
          return;
        }
        FUN_004e1900(local_18,iVar3);
        (**(code **)(*(int *)this + 0x294))();
        ExceptionList = local_10;
        return;
      }
      pcVar11 = "Disconnect module from power before unscrewing.";
    }
  }
  FUN_00527550(*(int **)(DAT_0065b3d4 + 0x224),3,pcVar11);
LAB_005723ea:
  iVar12 = -1;
  iVar10 = 10;
  iVar3 = DAT_0065b3d4;
  this_01 = (void *)FUN_00402f60();
  FUN_00557fb0(this_01,iVar3,iVar10,iVar12);
  ExceptionList = local_10;
  return;
}


undefined4 __fastcall FUN_00572500(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x554);
  iVar2 = *(int *)(param_1 + 0x558) - iVar5;
  iVar4 = iVar2 >> 0x1f;
  if (iVar2 / 0x14 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      bVar1 = cocos2d::Rect::containsPoint((Rect *)(iVar4 + iVar5),(Vec2 *)&stack0x00000004);
      if (bVar1) {
        ExceptionList = local_10;
        return *(undefined4 *)(*(int *)(param_1 + 0x554) + 0x10 + uVar3 * 0x14);
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(param_1 + 0x554);
      iVar4 = iVar4 + 0x14;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x558) - iVar5) / 0x14));
  }
  ExceptionList = local_10;
  return 0xffffffff;
}


void __thiscall FUN_005725d0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8e79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0;
  iVar7 = *(int *)(DAT_0065b5cc + 0xd0);
  piVar4 = *(int **)(*(int *)(iVar7 + 0x40) + 0x3c);
  uVar6 = *(int *)(*(int *)(iVar7 + 0x40) + 0x40) - (int)piVar4 >> 2;
  if (uVar6 != 0) {
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x10) == *(int *)(iVar7 + 0x1d8)) goto LAB_00572636;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar6);
  }
  iVar1 = 0;
LAB_00572636:
  if ((param_1 != 100) && (param_1 != 0x65)) {
    iVar8 = -1;
    iVar1 = 10;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar7,iVar1,iVar8);
    ExceptionList = local_10;
    return;
  }
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    FUN_00591070("DETAIL","shield not open");
    iVar8 = -1;
    iVar1 = 10;
    iVar7 = *(int *)(DAT_0065b5cc + 0xd0);
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar7,iVar1,iVar8);
    ExceptionList = local_10;
    return;
  }
  (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
  puVar3 = (undefined1 *)FUN_00572500((int)this);
  if (puVar3 != (undefined1 *)0xffffffff) {
    if (param_1 == 0x65) {
      if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
        FUN_004122b0();
        FUN_0041c620(0x7f,0);
        ExceptionList = local_10;
        return;
      }
      FUN_004e0d60(*(int *)(DAT_0065b5cc + 0xd0),(int)puVar3,param_2);
    }
    else {
      if (99 < (int)puVar3) {
        puVar3 = puVar3 + -100;
      }
      if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
        FUN_004122b0();
        FUN_0041c620(0x7e,0);
        ExceptionList = local_10;
        return;
      }
      FUN_004e1290(*(undefined1 **)(DAT_0065b5cc + 0xd0),puVar3,param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


undefined1 * __thiscall FUN_005727e0(void *this,undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8ea9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  piVar3 = *(int **)(iVar1 + 0x3c);
  uVar5 = *(int *)(iVar1 + 0x40) - (int)piVar3 >> 2;
  if (uVar5 != 0) {
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x10) == *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8))
      goto LAB_00572845;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar5);
  }
  iVar1 = 0;
LAB_00572845:
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    (**(code **)(*(int *)this + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
    iVar1 = FUN_00572500((int)this);
    FUN_00591070("DETAIL","ELEMENT: %d");
    if (iVar1 != -1) {
      iVar2 = FUN_005225b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),
                           *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e4));
      if (iVar1 < 100) {
        if (*(int *)(*(int *)(iVar2 + 0xc) + 4 + iVar1 * 4) != 0) {
          FUN_00591e00(param_1,"%s_Icon.png");
          ExceptionList = local_10;
          return param_1;
        }
      }
      else if (*(int *)(*(int *)(iVar2 + 0xc) + -0x13c + iVar1 * 4) != 0) {
        FUN_00591e00(param_1,"%s_Icon.png");
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  ExceptionList = local_10;
  return param_1;
}


undefined4 __fastcall FUN_00572960(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2049;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
  piVar3 = *(int **)(iVar1 + 0x3c);
  uVar5 = *(int *)(iVar1 + 0x40) - (int)piVar3 >> 2;
  if (uVar5 != 0) {
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x10) == *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8))
      goto LAB_005729c5;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar5);
  }
  iVar1 = 0;
LAB_005729c5:
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    return 0xffffffff;
  }
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0xb0))(DAT_0065500c ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_00572500((int)param_1);
  FUN_00591070("DETAIL","ELEMENT: %d");
  ExceptionList = local_10;
  return uVar2;
}


void __fastcall FUN_00572a50(int *param_1)

{
  Rect *this;
  Rect *pRVar1;
  
  this = (Rect *)*param_1;
  if (this != (Rect *)0x0) {
    pRVar1 = (Rect *)param_1[1];
    if (this != pRVar1) {
      do {
        cocos2d::Rect::~Rect(this);
        this = this + 0x14;
      } while (this != pRVar1);
      this = (Rect *)*param_1;
    }
    pRVar1 = this;
    if ((0xfff < (uint)(((param_1[2] - (int)this) / 0x14) * 0x14)) &&
       (pRVar1 = *(Rect **)(this + -4), (Rect *)0x1f < this + (-4 - (int)pRVar1))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_00572ae0(Rect *param_1,Rect *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    cocos2d::Rect::~Rect(param_1);
  }
  return;
}


int __thiscall FUN_00572b50(void *this,Rect *param_1,Rect *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Rect *pRVar5;
  Rect *pRVar6;
  uint uVar7;
  int iVar8;
  Rect *pRVar9;
  Rect *pRVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8ee8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = *(int *)this;
  iVar4 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (iVar4 == 0xccccccc) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar7 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  uVar2 = uVar1;
  if ((uVar7 <= 0xccccccc - (uVar7 >> 1)) && (uVar2 = (uVar7 >> 1) + uVar7, uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar7 = uVar2 * 0x14;
  if (uVar2 < 0xccccccd) {
    if (0xfff < uVar7) goto LAB_00572c13;
    if (uVar7 == 0) {
      pRVar5 = (Rect *)0x0;
    }
    else {
      pRVar5 = (Rect *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_00572c13:
    uVar3 = uVar7 + 0x23;
    if (uVar3 <= uVar7) {
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar3);
    if (iVar4 == 0) goto LAB_00572c38;
    pRVar5 = (Rect *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)(pRVar5 + -4) = iVar4;
  }
  iVar8 = (((int)param_1 - iVar8) / 0x14) * 0x14;
  pRVar6 = pRVar5 + iVar8;
  local_8 = 0;
  cocos2d::Rect::Rect(pRVar6,param_2);
  *(undefined4 *)(pRVar6 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  pRVar10 = *(Rect **)((int)this + 4);
  if (param_1 == pRVar10) {
    pRVar6 = *(Rect **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pRVar9 = pRVar5;
    for (; pRVar6 != pRVar10; pRVar6 = pRVar6 + 0x14) {
      cocos2d::Rect::Rect(pRVar9,pRVar6);
      *(undefined4 *)(pRVar9 + 0x10) = *(undefined4 *)(pRVar6 + 0x10);
      pRVar9 = pRVar9 + 0x14;
    }
  }
  else {
    pRVar10 = *(Rect **)this;
    local_8._0_1_ = 2;
    pRVar9 = pRVar5;
    for (; pRVar10 != param_1; pRVar10 = pRVar10 + 0x14) {
      cocos2d::Rect::Rect(pRVar9,pRVar10);
      *(undefined4 *)(pRVar9 + 0x10) = *(undefined4 *)(pRVar10 + 0x10);
      pRVar9 = pRVar9 + 0x14;
    }
    pRVar10 = *(Rect **)((int)this + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    for (; param_1 != pRVar10; param_1 = param_1 + 0x14) {
      cocos2d::Rect::Rect(pRVar6 + 0x14,param_1);
      *(undefined4 *)(pRVar6 + 0x24) = *(undefined4 *)(param_1 + 0x10);
      pRVar6 = pRVar6 + 0x14;
    }
  }
  pRVar10 = *(Rect **)this;
  if (pRVar10 != (Rect *)0x0) {
    pRVar6 = *(Rect **)((int)this + 4);
    if (pRVar10 != pRVar6) {
      do {
        cocos2d::Rect::~Rect(pRVar10);
        pRVar10 = pRVar10 + 0x14;
      } while (pRVar10 != pRVar6);
      pRVar10 = *(Rect **)this;
    }
    pRVar6 = pRVar10;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pRVar10) / 0x14) * 0x14)) &&
       (pRVar6 = *(Rect **)(pRVar10 + -4), (Rect *)0x1f < pRVar10 + (-4 - (int)pRVar6))) {
LAB_00572c38:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pRVar6);
  }
  *(Rect **)this = pRVar5;
  *(Rect **)((int)this + 4) = pRVar5 + uVar1 * 0x14;
  *(Rect **)((int)this + 8) = pRVar5 + uVar2 * 0x14;
  ExceptionList = local_10;
  return *(int *)this + iVar8;
}


void __fastcall FUN_00572e10(undefined4 *param_1)

{
  Rect *pRVar1;
  Rect *this;
  
  pRVar1 = (Rect *)param_1[1];
  for (this = (Rect *)*param_1; this != pRVar1; this = this + 0x14) {
    cocos2d::Rect::~Rect(this);
  }
  return;
}


Node * __thiscall FUN_00572e40(void *this,byte param_1)

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
  *(undefined ***)this = UI_Multimeter::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
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
  if (*(int **)((int)this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x438) + 0x138))(1);
    *(undefined4 *)((int)this + 0x438) = 0;
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


void __fastcall FUN_00572f50(int param_1)

{
  if (*(int **)(param_1 + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x428) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x428) = 0;
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
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x438) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  return;
}


void __fastcall FUN_00572ff0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint in_stack_ffffff84;
  void *pvVar7;
  uint in_stack_ffffff98;
  char *pcVar8;
  uint uVar9;
  uint in_stack_ffffffb8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8f22;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  iVar3 = *(int *)(DAT_0065b3d4 + 0x254);
  pbVar6 = (byte *)(iVar3 + 0x60);
  uVar9 = *(uint *)(iVar3 + 0x74);
  pbVar5 = pbVar6;
  if (0xf < uVar9) {
    pbVar5 = *(byte **)pbVar6;
  }
  uVar1 = *(uint *)(iVar3 + 0x70);
  uVar2 = FUN_004031f0(pbVar5,uVar1,(byte *)"enceladus",9);
  if ((char)uVar2 == '\0') {
    pbVar5 = pbVar6;
    if (0xf < uVar9) {
      pbVar5 = *(byte **)pbVar6;
    }
    uVar2 = FUN_004031f0(pbVar5,uVar1,(byte *)"proxima",7);
    if ((char)uVar2 == '\0') {
      if (0xf < uVar9) {
        pbVar6 = *(byte **)pbVar6;
      }
      uVar9 = FUN_004031f0(pbVar6,uVar1,(byte *)"remora",6);
      if ((char)uVar9 == '\0') {
        uVar9 = 0x22;
        pcVar8 = "Ventarii_Multimeter_Background.png";
      }
      else {
        uVar9 = 0x20;
        pcVar8 = "Remora_Multimeter_Background.png";
      }
    }
    else {
      uVar9 = 0x21;
      pcVar8 = "Proxima_Multimeter_Background.png";
    }
  }
  else {
    uVar9 = 0x23;
    pcVar8 = "Enceladus_Multimeter_Background.png";
  }
  pvVar7 = (void *)(in_stack_ffffffb8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,pcVar8,uVar9);
  iVar3 = FUN_00591910(pvVar7);
  param_1[0x10a] = iVar3;
  (**(code **)(*param_1 + 0x108))();
  pvVar7 = (void *)((uint)pcVar8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb0,"Ventarii_Multimeter_Indicator.png",0x21);
  piVar4 = (int *)FUN_00591910(pvVar7);
  param_1[0x10b] = (int)piVar4;
  local_8 = 0;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  iVar3 = *(int *)param_1[0x10b];
  (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar3 + 0x48))();
  (**(code **)(*(int *)param_1[0x10b] + 0xbc))();
  (**(code **)(*param_1 + 0x108))();
  pvVar7 = (void *)(in_stack_ffffff98 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,"Ventarii_Multimeter_Indicator_Base.png",0x26);
  piVar4 = (int *)FUN_00591910(pvVar7);
  param_1[0x10c] = (int)piVar4;
  local_8 = 1;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  iVar3 = *(int *)param_1[0x10c];
  (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar3 + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  pvVar7 = (void *)(in_stack_ffffff84 & 0xffffff00);
  FUN_00402690(&stack0xffffff84,"Ventarii_Multimeter_Border.png",0x1e);
  iVar3 = FUN_00591910(pvVar7);
  param_1[0x10d] = iVar3;
  (**(code **)(*param_1 + 0x108))();
  *(undefined1 *)param_1[0xa2] = 1;
  iVar3 = *param_1;
  (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar3 + 0xac))();
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005732e0(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  char *pcVar9;
  uint uVar10;
  uint in_stack_ffffffd0;
  void *pvVar11;
  
  if (DAT_0065b3d4 == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d8);
  if (iVar1 == -1) {
    return;
  }
  iVar1 = FUN_005225b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),iVar1);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_00437c60(*(int **)(iVar1 + 0xc));
  iVar2 = iVar2 / 2;
  if (100 < iVar2) {
    iVar2 = 100;
  }
  iVar5 = (int)(((float)iVar2 / 100.0) * 172.0 - 86.0);
  fVar7 = (float)iVar5;
  if (fVar7 == *(float *)((int)this + 0x440)) {
    iVar3 = rand();
    fVar7 = (float)iVar5 + (((float)iVar3 / 32767.0) * 3.0 - 1.5);
  }
  *(float *)((int)this + 0x440) = fVar7;
  if ((*(char *)(iVar1 + 0x1d) == '\0') && (*(float *)((int)this + 0x43c) == -86.0)) {
    *(float *)((int)this + 0x43c) = fVar7;
  }
  else {
    *(undefined1 *)(iVar1 + 0x1d) = 0;
    fVar7 = *(float *)((int)this + 0x440);
  }
  fVar8 = *(float *)((int)this + 0x43c);
  if (fVar8 == fVar7) goto LAB_0057345b;
  if (fVar7 <= fVar8) {
    if (fVar7 < fVar8) {
      fVar8 = fVar8 - param_1 * 90.0;
      bVar6 = fVar7 < fVar8;
      goto LAB_00573429;
    }
  }
  else {
    fVar8 = param_1 * 90.0 + fVar8;
    bVar6 = fVar8 < fVar7;
LAB_00573429:
    *(float *)((int)this + 0x43c) = fVar8;
    if (!bVar6 && fVar8 != fVar7) {
      *(float *)((int)this + 0x43c) = fVar7;
    }
  }
  (**(code **)(**(int **)((int)this + 0x42c) + 0xbc))();
  **(undefined1 **)((int)this + 0x288) = 1;
LAB_0057345b:
  if (iVar2 == 0) {
    if ((*(char *)((int)this + 0x444) == '\0') && (*(int *)((int)this + 0x438) != 0)) {
      return;
    }
    *(undefined1 *)((int)this + 0x444) = 0;
    if (*(int **)((int)this + 0x438) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x438) + 0x138))();
      *(undefined4 *)((int)this + 0x438) = 0;
    }
    uVar10 = 0x20;
    pcVar9 = "Ventarii_Multimeter_RedLight.png";
  }
  else {
    if ((*(char *)((int)this + 0x444) != '\0') && (*(int *)((int)this + 0x438) != 0)) {
      return;
    }
    *(undefined1 *)((int)this + 0x444) = 1;
    if (*(int **)((int)this + 0x438) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x438) + 0x138))();
      *(undefined4 *)((int)this + 0x438) = 0;
    }
    uVar10 = 0x22;
    pcVar9 = "Ventarii_Multimeter_GreenLight.png";
  }
  pvVar11 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  FUN_00402690(&stack0xffffffd0,pcVar9,uVar10);
  uVar4 = FUN_00591910(pvVar11);
  *(undefined4 *)((int)this + 0x438) = uVar4;
  (**(code **)(*(int *)this + 0x108))();
  return;
}


void * __thiscall FUN_00573530(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c06b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(this,&param_2);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = param_1;
  if (0xf < in_stack_0000001c) {
    pvVar1 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar1 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __thiscall
FUN_005735f0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  uint in_stack_ffffffc0;
  void *pvVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8fd5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = UI_NavMap::vftable;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined2 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
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
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0xffffffff;
  *(undefined1 *)((int)this + 0x4cc) = 1;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4dc) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0xf;
  *(undefined1 *)((int)this + 0x4e4) = 0;
  local_8 = 10;
  pvVar9 = (void *)(in_stack_ffffffc0 & 0xffffff00);
  FUN_00402690(&stack0xffffffc0,"viewmode",8);
  uVar4 = FUN_00557620((void *)((int)this + 0x290),pvVar9);
  if ((char)uVar4 != '\0') {
    *(undefined1 *)((int)this + 0x45d) = 1;
  }
  *(undefined1 *)((int)this + 0x284) = 1;
  *(undefined1 *)((int)this + 0x286) = 1;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  param_3 = this;
  if (DAT_0065b984 == DAT_0065b980) {
    FUN_0057cfb0(DAT_0065b980,&param_3);
  }
  else {
    *DAT_0065b980 = this;
    DAT_0065b980 = DAT_0065b980 + 1;
  }
  fVar6 = 0.0;
  iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
  if (((iVar1 == 0) || (piVar2 = *(int **)(*(int *)(iVar1 + 0x40) + 0x24), piVar2 == (int *)0x0)) ||
     (cVar3 = (**(code **)(*piVar2 + 0x10))(), cVar3 == '\0')) {
    dVar8 = 0.0;
  }
  else if ((*(float *)(iVar1 + 0x118) == 0.0) && (fVar6 = *(float *)(iVar1 + 0x11c), fVar6 == 0.0))
  {
    dVar8 = (double)*(float *)(iVar1 + 0x120);
  }
  else {
    FUN_00592f80(0.0,0,*(float *)(iVar1 + 0x118));
    dVar8 = (double)fVar6;
  }
  iVar1 = DAT_0065b5cc;
  dVar7 = 0.0;
  *(double *)((int)this + 0x500) = dVar8;
  if (*(int *)(iVar1 + 0xd0) != 0) {
    dVar7 = (double)*(float *)(*(int *)(iVar1 + 0xd0) + 0x120);
  }
  *(double *)((int)this + 0x508) = dVar7;
  if (*(char *)((int)this + 0x45d) == '\0') {
    uVar5 = *(undefined4 *)(&UNK_005e0c20 + DAT_00655098 * 4);
  }
  else {
    uVar5 = *(undefined4 *)(&UNK_005e0ca8 + DAT_00655094 * 4);
  }
  *(undefined4 *)((int)this + 0x4fc) = uVar5;
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_005739a0(void *this,byte param_1)

{
  FUN_005739d0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_005739d0(Node *param_1)

{
  void *pvVar1;
  int *_Src;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  size_t _Size;
  int *_Dst;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c8ff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_NavMap::vftable;
  _Src = DAT_0065b980;
  _Dst = DAT_0065b97c;
  if (DAT_0065b97c != DAT_0065b980) {
    do {
      if ((Node *)*_Dst == param_1) break;
      _Dst = _Dst + 1;
    } while (_Dst != DAT_0065b980);
    if (_Dst != DAT_0065b980) {
      piVar3 = _Dst + 1;
      uVar4 = 0;
      uVar5 = (uint)((int)DAT_0065b980 + (3 - (int)piVar3)) >> 2;
      if (DAT_0065b980 < piVar3) {
        uVar5 = 0;
      }
      if (uVar5 != 0) {
        do {
          if ((Node *)*piVar3 != param_1) {
            *_Dst = *piVar3;
            _Dst = _Dst + 1;
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar4 != uVar5);
      }
      if (_Dst != _Src) {
        _Size = (int)DAT_0065b980 - (int)_Src;
        memmove(_Dst,_Src,_Size);
        DAT_0065b980 = (int *)(_Size + (int)_Dst);
      }
    }
  }
  FUN_00573e10((int)param_1);
  if (0xf < *(uint *)(param_1 + 0x4f8)) {
    pvVar1 = *(void **)(param_1 + 0x4e4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x4f8) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0xf;
  param_1[0x4e4] = (Node)0x0;
  pvVar1 = *(void **)(param_1 + 0x4b4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x4bc) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x4a4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x4ac) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x498);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x4a0) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x48c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x494) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x480);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x488) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  if (*(void **)(param_1 + 0x440) != (void *)0x0) {
    FUN_0057d3b0(*(void **)(param_1 + 0x440),*(void **)(param_1 + 0x444));
    pvVar1 = *(void **)(param_1 + 0x440);
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x448) - (int)pvVar1) / 0x14) * 0x14)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x444) = 0;
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x434);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x43c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00573dfd;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x428);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x430) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00573dfd:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x428) = 0;
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00573e10(int param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint local_8;
  
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x4b4);
  if (*(int *)(param_1 + 0x4b8) - iVar4 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x4b4) + uVar3 * 4) + 0x138))(1);
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x4b4);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x4b8) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x4b8) = iVar4;
  if (*(int **)(param_1 + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x460) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  if (*(int **)(param_1 + 0x464) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x464) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x464) = 0;
  }
  if (*(int **)(param_1 + 0x468) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x468) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  if (*(int **)(param_1 + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x46c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  if (*(int **)(param_1 + 0x47c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x47c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  if (*(int **)(param_1 + 0x474) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x474) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x474) = 0;
  }
  if (*(int **)(param_1 + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x470) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x470) = 0;
  }
  if (*(int **)(param_1 + 0x4b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  if (*(int **)(param_1 + 0x4e0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4e0) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x480);
  if (*(int *)(param_1 + 0x484) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x480) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x480);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x484) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x484) = iVar4;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x48c);
  if (*(int *)(param_1 + 0x490) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x48c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x48c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x490) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x490) = iVar4;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x498);
  if (*(int *)(param_1 + 0x49c) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x498) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x498);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x49c) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x49c) = iVar4;
  if (*(int **)(param_1 + 0x4c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c0) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x428);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x42c) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 0x2c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x428) + uVar3 * 4) + 0x2c) = 0;
        iVar4 = *(int *)(param_1 + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 0x28);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x428) + uVar3 * 4) + 0x28) = 0;
        iVar4 = *(int *)(param_1 + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 0x20);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x428) + uVar3 * 4) + 0x20) = 0;
        iVar4 = *(int *)(param_1 + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 0x24);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x428) + uVar3 * 4) + 0x24) = 0;
        iVar4 = *(int *)(param_1 + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 0x30);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x428) + uVar3 * 4) + 0x30) = 0;
        iVar4 = *(int *)(param_1 + 0x428);
      }
      piVar1 = *(int **)(iVar4 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        if (0xf < (uint)piVar1[5]) {
          pvVar5 = (void *)*piVar1;
          pvVar2 = pvVar5;
          if ((0xfff < piVar1[5] + 1U) &&
             (pvVar2 = *(void **)((int)pvVar5 + -4), 0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar2))
             )) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar2);
        }
        piVar1[4] = 0;
        piVar1[5] = 0xf;
        *(undefined1 *)piVar1 = 0;
        FUN_005adb3f(piVar1);
      }
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x428);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x42c) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x42c) = iVar4;
  pvVar5 = *(void **)(param_1 + 0x444);
  pvVar2 = *(void **)(param_1 + 0x440);
  local_8 = 0;
  iVar4 = (int)pvVar5 - (int)pvVar2 >> 0x1f;
  if (((int)pvVar5 - (int)pvVar2) / 0x14 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)((int)pvVar2 + iVar4 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(iVar4 + 0x10 + *(int *)(param_1 + 0x440)) = 0;
      }
      pvVar2 = *(void **)(param_1 + 0x440);
      iVar4 = iVar4 + 0x14;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)(param_1 + 0x444) - (int)pvVar2) / 0x14));
    pvVar5 = *(void **)(param_1 + 0x444);
  }
  FUN_0057d3b0(pvVar2,pvVar5);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x440);
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x434);
  if (*(int *)(param_1 + 0x438) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x434) + uVar3 * 4) + 4) = 0;
        iVar4 = *(int *)(param_1 + 0x434);
      }
      piVar1 = (int *)**(int **)(iVar4 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        **(undefined4 **)(*(int *)(param_1 + 0x434) + uVar3 * 4) = 0;
        iVar4 = *(int *)(param_1 + 0x434);
      }
      piVar1 = *(int **)(*(int *)(iVar4 + uVar3 * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x434) + uVar3 * 4) + 0xc) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x434);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x438) - iVar4 >> 2));
  }
  *(int *)(param_1 + 0x438) = iVar4;
  return;
}
