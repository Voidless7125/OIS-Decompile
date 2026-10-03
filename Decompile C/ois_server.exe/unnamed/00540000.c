#include "../ois_server.exe.h"


undefined4 * __thiscall
FUN_00540050(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void **ppvVar1;
  void *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5a08;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0053fd40(this,param_3,param_1);
    param_3 = param_3 + 0x10;
    ppvVar1 = ExceptionList;
    this = extraout_ECX;
  }
  ExceptionList = local_10;
  return param_3;
}


TypeDescriptor * FUN_005400d0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_005400e0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


void __thiscall FUN_00540110(void *this,undefined1 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar1 = *(code **)((int)this + 4);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (*pcVar1)(*param_1,uVar2,uVar3,uVar4);
  return;
}


void __fastcall FUN_00540170(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; piVar2 != piVar1; piVar2 = piVar2 + 0x10) {
    FUN_0053d810(piVar2);
  }
  return;
}


TypeDescriptor * FUN_005401a0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_005401b0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_005401d0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_005401e0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


void __thiscall FUN_00540210(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar2 = *(code **)((int)this + 4);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar6 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 4);
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  (*pcVar2)(uVar6,param_1[1],param_1[2],param_1[3],uVar1,uVar3,uVar4,uVar5);
  return;
}


undefined4 * __thiscall FUN_005402a0(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined ***)this = Screen_Custom::vftable;
  pvVar1 = *(void **)((int)this + 0x20);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x28) - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00540320(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


void __fastcall FUN_00540330(void *param_1)

{
  undefined4 *puVar1;
  int iVar3;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FUN_005403a0(param_1);
    iVar2 = *(int *)((int)param_1 + 0x10);
    iVar3 = *(int *)((int)param_1 + 0xc);
    if ((undefined4 *)(iVar3 + 0x94) != (undefined4 *)(iVar2 + 0x70)) {
      FUN_00544cd0((undefined4 *)(iVar3 + 0x94),*(Rect **)(iVar2 + 0x70),*(Rect **)(iVar2 + 0x74));
      iVar2 = *(int *)((int)param_1 + 0x10);
      iVar3 = *(int *)((int)param_1 + 0xc);
    }
    puVar1 = (undefined4 *)(iVar2 + 0x7c);
    if ((undefined4 *)(iVar3 + 0xb8) != puVar1) {
      if (0xf < *(uint *)(iVar2 + 0x90)) {
        puVar1 = (undefined4 *)*puVar1;
      }
      FUN_00402690((undefined4 *)(iVar3 + 0xb8),puVar1,*(uint *)(iVar2 + 0x8c));
    }
  }
  return;
}


void __fastcall FUN_005403a0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  Node *this;
  int iVar3;
  undefined8 *puVar4;
  Ref *pRVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  Vec2 *pVVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  Vec2 local_150 [8];
  Vec2 local_148 [8];
  Vec2 local_140 [8];
  Vec2 local_138 [8];
  Vec2 local_130 [8];
  Vec2 local_128 [8];
  Vec2 local_120 [8];
  Node *local_118;
  Ref *local_114;
  Node *local_110;
  Ref *local_10c;
  void *local_108;
  void *local_104;
  void *local_100;
  void *local_fc;
  void *local_f8;
  void *local_f4;
  Ref *local_f0;
  void *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  Vec2 local_a0 [8];
  Vec2 local_98 [8];
  Vec2 local_90 [8];
  Vec2 local_88 [8];
  Ref *local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
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
  Node *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined8 local_24;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5c82;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = *(int *)((int)param_1 + 0x10);
  if (*(char *)(iVar3 + 0x5b) != '\0') {
    *(undefined1 *)((int)param_1 + 4) = 1;
  }
  if (*(char *)(iVar3 + 0x5a) != '\0') {
    *(undefined1 *)((int)param_1 + 6) = 1;
  }
  iVar7 = *(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100);
  local_28 = 0;
  iVar3 = iVar7 >> 0x1f;
  if (iVar7 / 0x188 + iVar3 != iVar3) {
    do {
      iVar11 = local_28 * 0x188;
      *(undefined1 *)((int)param_1 + 0x14) = *(undefined1 *)(*(int *)((int)param_1 + 0xc) + 0x51);
      iVar3 = *(int *)((int)param_1 + 0x10);
      iVar7 = *(int *)(iVar3 + 100);
      local_1c = CONCAT44((undefined4 *)(iVar7 + iVar11),(undefined4)local_1c);
      switch(*(undefined4 *)(iVar7 + iVar11)) {
      case 0:
        FUN_005431a0((Ref *)(iVar11 + iVar7));
        break;
      case 1:
      case 2:
        FUN_005416b0(param_1,(Ref *)(iVar11 + iVar7));
        break;
      case 3:
      case 4:
        FUN_00541880(param_1,(Ref *)(iVar11 + iVar7));
        break;
      case 5:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00541a40((undefined4 *)(*(int *)(iVar3 + 100) + iVar11),(Ref *)0x0);
        break;
      case 6:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00541a40((undefined4 *)(*(int *)(iVar3 + 100) + iVar11),(Ref *)0x1);
        break;
      case 7:
        FUN_00542280(param_1,(Node *)(iVar11 + iVar7));
        break;
      case 8:
        this = (Node *)FUN_005adb0f(0x448);
        local_8 = 0;
        local_10c = (Ref *)this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)local_1c._4_4_,
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_Data::vftable;
        *(int *)(this + 0x438) = 0;
        *(int *)(this + 0x43c) = 0xf;
        *(Ref *)(this + 0x428) = (Ref)0x0;
        *(int *)(this + 0x440) = 0;
        *(int *)(this + 0x444) = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_8 = 1;
        (**(code **)(*(int *)this + 0xa0))(&local_a8);
        local_64 = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_60 = (float)iVar3;
        local_8 = 2;
        pfVar8 = &local_64;
        goto LAB_00540535;
      case 9:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00543550(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 10:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        local_1c = 0;
        local_ec = (void *)FUN_005adb0f(0x510);
        local_8 = 0xf;
        pRVar5 = (Ref *)FUN_005735f0(local_ec,*(int *)((int)param_1 + 0xc),
                                     (undefined4 *)(iVar3 + iVar11),
                                     (undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x70));
        local_d0 = 0;
        local_cc = 0;
        local_8 = 0x10;
        (**(code **)(*(int *)pRVar5 + 0xa0))(&local_d0);
        local_5c = (float)*(int *)(pRVar5 + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(pRVar5 + 0x2a4) + *(int *)(pRVar5 + 0x29c);
        }
        else {
          iVar3 = *(int *)(pRVar5 + 0x29c) + 0xc + *(int *)(pRVar5 + 0x2a4);
        }
        local_58 = (float)iVar3;
        local_8 = 0x11;
        (**(code **)(*(int *)pRVar5 + 0x4c))(&local_5c);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar5 + 0x2c))(0xbf800000);
        (**(code **)(*(int *)pRVar5 + 0x294))();
        cocos2d::Ref::retain(pRVar5);
        pRVar5[0x419] = (Ref)0x1;
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) {
          FUN_00544b70((void *)((int)param_1 + 0x20),puVar4,&local_1c);
        }
        else {
          *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 8;
          *puVar4 = 0;
        }
        iVar3 = *(int *)((int)param_1 + 0xc);
        local_1c = CONCAT44(pRVar5,(undefined4)local_1c);
        puVar12 = *(undefined4 **)(iVar3 + 0x194);
        if (*(undefined4 **)(iVar3 + 0x198) == puVar12) {
          FUN_00414080((void *)(iVar3 + 400),puVar12,(undefined4 *)((int)&local_1c + 4));
          *(Ref **)((int)param_1 + 0x18) = pRVar5;
          *(undefined1 *)((int)param_1 + 7) = 1;
        }
        else {
          *puVar12 = pRVar5;
          *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
          *(Ref **)((int)param_1 + 0x18) = pRVar5;
          *(undefined1 *)((int)param_1 + 7) = 1;
        }
        break;
      case 0xb:
        FUN_00542fe0(param_1,(Ref *)(iVar11 + iVar7));
        break;
      case 0xc:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        local_1c = 0;
        this = (Node *)FUN_005adb0f(0x440);
        local_8 = 0x12;
        local_80 = (Ref *)this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)(iVar3 + iVar11),
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_PowerScreen::vftable;
        *(undefined4 *)(this + 0x430) = 0;
        *(undefined4 *)(this + 0x434) = 0;
        *(undefined4 *)(this + 0x438) = 0;
        *(Ref *)(this + 0x2dc) = (Ref)0x1;
        *(Ref *)(this + 0x284) = (Ref)0x1;
        *(Ref *)(this + 0x286) = (Ref)0x1;
        local_d8 = 0;
        local_d4 = 0;
        local_8 = 0x13;
        (**(code **)(*(int *)this + 0xa0))(&local_d8);
        local_44 = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_40 = (float)iVar3;
        local_8 = 0x14;
        (**(code **)(*(int *)this + 0x4c))(&local_44);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)this + 0x2c))(0xbf800000);
        (**(code **)(*(int *)this + 0x294))();
        cocos2d::Ref::retain((Ref *)this);
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) {
          FUN_00544b70((void *)((int)param_1 + 0x20),puVar4,&local_1c);
        }
        else {
          *puVar4 = 0;
          *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 8;
        }
        goto LAB_0054058c;
      case 0xd:
        local_24 = 0;
        this = (Node *)FUN_005adb0f(0x448);
        local_8 = 0x15;
        local_f0 = (Ref *)this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)local_1c._4_4_,
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_PowerDetailScreen::vftable;
        *(undefined4 *)(this + 0x438) = 0;
        *(undefined4 *)(this + 0x43c) = 0xf;
        *(Ref *)(this + 0x428) = (Ref)0x0;
        *(undefined4 *)(this + 0x440) = 0;
        local_e0 = 0;
        local_dc = 0;
        local_8 = 0x16;
        (**(code **)(*(int *)this + 0xa0))(&local_e0);
        local_74 = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_70 = (float)iVar3;
        local_8 = 0x17;
        (**(code **)(*(int *)this + 0x4c))(&local_74);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)this + 0x2c))(0xbf800000);
        (**(code **)(*(int *)this + 0x294))();
        cocos2d::Ref::retain((Ref *)this);
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) {
          FUN_00544b70((void *)((int)param_1 + 0x20),puVar4,&local_24);
        }
        else {
          *puVar4 = 0;
          *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 8;
        }
        goto LAB_0054058c;
      case 0xe:
        this = (Node *)FUN_005adb0f(0x430);
        local_8 = 0xc;
        local_118 = this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)local_1c._4_4_,
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_Border::vftable;
        *(undefined4 *)(this + 0x428) = 0;
        local_c8 = 0;
        local_c4 = 0;
        local_8 = 0xd;
        cocos2d::Node::setAnchorPoint(this,(Vec2 *)&local_c8);
        local_54 = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_50 = (float)iVar3;
        local_8 = 0xe;
        pfVar8 = &local_54;
        goto LAB_00540535;
      case 0xf:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00541c70(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x10:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        local_f4 = (void *)FUN_005adb0f(0x560);
        local_8 = 0x1b;
        this = (Node *)FUN_0056fc50(local_f4,*(int *)((int)param_1 + 0xc),
                                    (undefined4 *)(iVar3 + iVar11),
                                    *(int *)((int)param_1 + 0xc) + 0x70);
        local_8 = 0xffffffff;
        uVar6 = cocos2d::Vec2::Vec2(local_120,0.0,0.0);
        local_8 = 0x1c;
        (**(code **)(*(int *)this + 0xa0))(uVar6);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_120);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + *(int *)(this + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_88,(float)*(int *)(this + 0x298),(float)iVar3);
        local_8 = 0x1d;
        (**(code **)(*(int *)this + 0x4c))(local_88);
        pVVar9 = local_88;
        goto LAB_00540fc3;
      case 0x11:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00541e30(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x12:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        this = (Node *)FUN_005adb0f(0x448);
        local_8 = 0x18;
        local_34 = this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)(iVar3 + iVar11),
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_Multimeter::vftable;
        *(undefined4 *)(this + 0x428) = 0;
        *(undefined4 *)(this + 0x42c) = 0;
        *(undefined4 *)(this + 0x430) = 0;
        *(undefined4 *)(this + 0x434) = 0;
        *(undefined4 *)(this + 0x438) = 0;
        *(undefined4 *)(this + 0x43c) = 0xc2ac0000;
        *(undefined4 *)(this + 0x440) = 0xc2ac0000;
        this[0x444] = (Node)0x0;
        this[0x286] = (Node)0x1;
        local_e8 = 0;
        local_e4 = 0;
        local_8 = 0x19;
        cocos2d::Node::setAnchorPoint(this,(Vec2 *)&local_e8);
        local_7c = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_78 = (float)iVar3;
        local_8 = 0x1a;
        (**(code **)(*(int *)this + 0x4c))(&local_7c);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)this + 0x2c))(0xbf800000);
        (**(code **)(*(int *)this + 0x294))();
        cocos2d::Ref::retain((Ref *)this);
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        local_24 = 0;
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) goto LAB_00540ed0;
        goto LAB_00540578;
      case 0x13:
        FUN_00542ae0(param_1,(Ref *)(iVar11 + iVar7));
        break;
      case 0x14:
        FUN_00542e30(param_1,(Ref *)(iVar11 + iVar7));
        break;
      case 0x15:
        FUN_00542c60(param_1,(Ref *)(iVar11 + iVar7));
        break;
      case 0x16:
        this = (Node *)FUN_005adb0f(0x440);
        local_8 = 9;
        local_114 = (Ref *)this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)local_1c._4_4_,
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_SensorSelect::vftable;
        *(int *)(this + 0x428) = 0;
        *(int *)(this + 0x42c) = 0;
        *(int *)(this + 0x430) = -1;
        *(int *)(this + 0x434) = 0;
        *(int *)(this + 0x438) = 0;
        *(int *)(this + 0x43c) = 0;
        local_c0 = 0;
        local_bc = 0;
        local_8 = 10;
        (**(code **)(*(int *)this + 0xa0))(&local_c0);
        local_4c = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_48 = (float)iVar3;
        local_8 = 0xb;
        pfVar8 = &local_4c;
        goto LAB_00540535;
      case 0x17:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00542080(param_1,(Node *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x18:
        this = (Node *)FUN_005adb0f(0x430);
        local_8 = 6;
        local_110 = this;
        FUN_00553370(this,*(int *)((int)param_1 + 0xc),(undefined4 *)local_1c._4_4_,
                     *(int *)((int)param_1 + 0xc) + 0x70);
        *(undefined ***)this = UI_DockVisualisation::vftable;
        *(undefined4 *)(this + 0x428) = 0;
        local_b8 = 0;
        local_b4 = 0;
        local_8 = 7;
        cocos2d::Node::setAnchorPoint(this,(Vec2 *)&local_b8);
        local_3c = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_38 = (float)iVar3;
        local_8 = 8;
        pfVar8 = &local_3c;
        goto LAB_00540535;
      case 0x19:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        local_f8 = (void *)FUN_005adb0f(0x498);
        local_8 = 0x1e;
        this = (Node *)FUN_0058ca80(local_f8,*(int *)((int)param_1 + 0xc),
                                    (undefined4 *)(iVar3 + iVar11),
                                    *(int *)((int)param_1 + 0xc) + 0x70);
        local_8 = 0xffffffff;
        uVar6 = cocos2d::Vec2::Vec2(local_128,0.0,0.0);
        local_8 = 0x1f;
        (**(code **)(*(int *)this + 0xa0))(uVar6);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_128);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + *(int *)(this + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_90,(float)*(int *)(this + 0x298),(float)iVar3);
        local_8 = 0x20;
        (**(code **)(*(int *)this + 0x4c))(local_90);
        pVVar9 = local_90;
        goto LAB_00540fc3;
      case 0x1a:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_005439f0(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x1b:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_005437c0(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x1c:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00543ff0(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x1d:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00544210(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x1e:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00543c50(param_1,(Ref *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x1f:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        local_104 = (void *)FUN_005adb0f(0x478);
        local_8 = 0x27;
        this = FUN_0056d840(local_104,*(int *)((int)param_1 + 0xc),(undefined4 *)(iVar3 + iVar11),
                            (int *)(*(int *)((int)param_1 + 0xc) + 0x70));
        local_8 = 0xffffffff;
        uVar6 = cocos2d::Vec2::Vec2(local_150,0.0,0.0);
        local_8 = 0x28;
        (**(code **)(*(int *)this + 0xa0))(uVar6);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_150);
        (**(code **)(*(int *)this + 0x2c))(0xbf800000);
        (**(code **)(*(int *)this + 0x294))();
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + *(int *)(this + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_a0,(float)*(int *)(this + 0x298),(float)iVar3);
        local_8 = 0x29;
        (**(code **)(*(int *)this + 0x4c))(local_a0);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_a0);
        goto LAB_00540fe9;
      case 0x20:
        *(undefined1 *)((int)param_1 + 4) = 1;
        FUN_00543e40(param_1,(Node *)(*(int *)(iVar3 + 100) + iVar11));
        break;
      case 0x21:
        *(undefined1 *)((int)param_1 + 4) = 1;
        puVar12 = (undefined4 *)(*(int *)(iVar3 + 100) + iVar11);
        local_fc = (void *)FUN_005adb0f(0x4a0);
        local_8 = 0x21;
        pRVar5 = (Ref *)FUN_005691d0(local_fc,*(int *)((int)param_1 + 0xc),puVar12,
                                     *(int *)((int)param_1 + 0xc) + 0x70);
        local_8 = 0xffffffff;
        local_1c._4_4_ = pRVar5;
        uVar6 = cocos2d::Vec2::Vec2(local_130,0.0,0.0);
        local_8 = 0x22;
        (**(code **)(*(int *)local_1c._4_4_ + 0xa0))(uVar6);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_130);
        cocos2d::Vec2::Vec2((Vec2 *)&local_30);
        local_8 = 0x23;
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          puVar12 = (undefined4 *)
                    cocos2d::Vec2::Vec2(local_140,(float)(int)puVar12[2],
                                        (float)(int)(puVar12[5] + puVar12[3]));
          local_30 = *puVar12;
          pVVar9 = local_140;
        }
        else {
          puVar12 = (undefined4 *)
                    cocos2d::Vec2::Vec2(local_138,(float)(int)puVar12[2],
                                        (float)(puVar12[3] + puVar12[5] + 0xc));
          local_30 = *puVar12;
          pVVar9 = local_138;
        }
        local_2c = puVar12[1];
        cocos2d::Vec2::~Vec2(pVVar9);
        pRVar5 = local_1c._4_4_;
        (**(code **)(*(int *)local_1c._4_4_ + 0x4c))(&local_30);
        (**(code **)(*(int *)pRVar5 + 0x2c))(0xbf800000);
        (**(code **)(*(int *)pRVar5 + 0x294))();
        cocos2d::Ref::retain(pRVar5);
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        local_24 = 0;
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) {
          FUN_00544b70((void *)((int)param_1 + 0x20),puVar4,&local_24);
        }
        else {
          *puVar4 = 0;
          *(undefined8 **)((int)param_1 + 0x24) = puVar4 + 1;
        }
        iVar3 = *(int *)((int)param_1 + 0xc);
        local_1c = CONCAT44(pRVar5,(undefined4)local_1c);
        puVar12 = *(undefined4 **)(iVar3 + 0x194);
        if (*(undefined4 **)(iVar3 + 0x198) == puVar12) {
          FUN_00414080((void *)(iVar3 + 400),puVar12,(undefined4 *)((int)&local_1c + 4));
        }
        else {
          *puVar12 = pRVar5;
          *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
        }
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_30);
        break;
      case 0x22:
        *(undefined1 *)((int)param_1 + 4) = 1;
        iVar3 = *(int *)(iVar3 + 100);
        local_100 = (void *)FUN_005adb0f(0x470);
        local_8 = 0x24;
        this = (Node *)FUN_00565f50(local_100,*(int *)((int)param_1 + 0xc),
                                    (undefined4 *)(iVar3 + iVar11),
                                    *(int *)((int)param_1 + 0xc) + 0x70);
        local_8 = 0xffffffff;
        uVar6 = cocos2d::Vec2::Vec2(local_148,0.0,0.0);
        local_8 = 0x25;
        (**(code **)(*(int *)this + 0xa0))(uVar6);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_148);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + *(int *)(this + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_98,(float)*(int *)(this + 0x298),(float)iVar3);
        local_8 = 0x26;
        (**(code **)(*(int *)this + 0x4c))(local_98);
        pVVar9 = local_98;
LAB_00540fc3:
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(pVVar9);
        (**(code **)(*(int *)this + 0x2c))(0xbf800000);
        (**(code **)(*(int *)this + 0x294))();
LAB_00540fe9:
        cocos2d::Ref::retain((Ref *)this);
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        local_24 = 0;
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) {
LAB_00540ed0:
          local_24 = 0;
          puVar10 = &local_24;
          goto LAB_00540585;
        }
        *puVar4 = 0;
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 8;
        goto LAB_0054058c;
      case 0x23:
        FUN_00542690(param_1,(Node *)(iVar11 + iVar7));
        break;
      case 0x24:
        FUN_00542870(param_1,(Node *)(iVar11 + iVar7));
        break;
      case 0x25:
        local_108 = (void *)FUN_005adb0f(0x4c0);
        local_8 = 3;
        this = (Node *)FUN_00588270(local_108,*(int *)((int)param_1 + 0xc),
                                    (undefined4 *)(iVar11 + iVar7),
                                    *(int *)((int)param_1 + 0xc) + 0x70);
        local_b0 = 0;
        local_ac = 0;
        local_8 = 4;
        (**(code **)(*(int *)this + 0xa0))(&local_b0,uVar2);
        local_6c = (float)*(int *)(this + 0x298);
        if (*(char *)((int)param_1 + 0x14) == '\0') {
          iVar3 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
        }
        else {
          iVar3 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
        }
        local_68 = (float)iVar3;
        local_8 = 5;
        pfVar8 = &local_6c;
LAB_00540535:
        (**(code **)(*(int *)this + 0x4c))(pfVar8);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)this + 0x2c))(0xbf800000);
        (**(code **)(*(int *)this + 0x294))();
        cocos2d::Ref::retain((Ref *)this);
        puVar4 = *(undefined8 **)((int)param_1 + 0x24);
        local_1c = 0;
        if (*(undefined8 **)((int)param_1 + 0x28) == puVar4) {
          puVar10 = &local_1c;
LAB_00540585:
          FUN_00544b70((void *)((int)param_1 + 0x20),puVar4,puVar10);
        }
        else {
LAB_00540578:
          *puVar4 = 0;
          *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 8;
        }
LAB_0054058c:
        iVar3 = *(int *)((int)param_1 + 0xc);
        local_1c = CONCAT44(this,(undefined4)local_1c);
        puVar12 = *(undefined4 **)(iVar3 + 0x194);
        if (*(undefined4 **)(iVar3 + 0x198) == puVar12) {
          FUN_00414080((void *)(iVar3 + 400),puVar12,(undefined4 *)((int)&local_1c + 4));
        }
        else {
          *puVar12 = this;
          *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
        }
        break;
      case 0x26:
        FUN_00542440(param_1,(Node *)(iVar11 + iVar7));
      }
      uVar1 = local_28;
      iVar3 = *(int *)(*(int *)((int)param_1 + 0xc) + 400);
      *(uint *)(*(int *)(iVar3 + -4 +
                        (*(int *)(*(int *)((int)param_1 + 0xc) + 0x194) - iVar3 >> 2) * 4) + 0x280)
           = local_28;
      iVar3 = *(int *)((int)param_1 + 0x10);
      iVar11 = *(int *)(iVar3 + 100) + iVar11;
      if ((*(int *)(iVar11 + 0x7c) != 0) || (*(int *)(iVar11 + 0xf4) != 0)) {
        FUN_005445a0(param_1,iVar11,local_28);
        iVar3 = *(int *)((int)param_1 + 0x10);
      }
      local_28 = uVar1 + 1;
    } while (local_28 < (uint)((*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100)) / 0x188));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00541660(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 400);
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x194) - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x294))();
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 400);
    } while (uVar2 < (uint)(*(int *)(*(int *)(param_1 + 0xc) + 0x194) - iVar1 >> 2));
  }
  return;
}


Ref * __thiscall FUN_005416b0(void *this,Ref *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  undefined2 *puVar4;
  int iVar5;
  float10 fVar6;
  undefined4 in_stack_ffffffb0;
  float local_28;
  float local_24;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pRVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5cc4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (double)(ulonglong)(uint)local_20;
  local_24 = *(float *)(DAT_0065b5cc + 0xd0);
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0xac) + 8))
                             (&local_24,(int)&local_20 + 4,DAT_0065500c ^ (uint)&stack0xfffffffc);
  local_20 = (double)fVar6;
  param_1 = (Ref *)FUN_005adb0f(0x460);
  local_8 = 0;
  pRVar3 = (Ref *)FUN_0058b5d0(param_1,*(int *)((int)this + 0xc),(undefined4 *)pRVar3,
                               *(int *)((int)this + 0xc) + 0x70,in_stack_ffffffb0,0x42c80000,
                               *(int *)(pRVar3 + 0x10),*(int *)(pRVar3 + 0x14));
  local_8 = 0xffffffff;
  puVar4 = (undefined2 *)
           cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),'\x18','\x18','\x18');
  local_28 = 0.0;
  local_24 = 0.0;
  *(undefined2 *)(pRVar3 + 0x444) = *puVar4;
  pRVar3[0x446] = *(Ref *)(puVar4 + 1);
  local_8 = 1;
  (**(code **)(*(int *)pRVar3 + 0xa0))(&local_28);
  local_28 = (float)*(int *)(pRVar3 + 0x298);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(pRVar3 + 0x2a4) + *(int *)(pRVar3 + 0x29c);
  }
  else {
    iVar5 = *(int *)(pRVar3 + 0x29c) + 0xc + *(int *)(pRVar3 + 0x2a4);
  }
  local_24 = (float)iVar5;
  local_8 = 2;
  (**(code **)(*(int *)pRVar3 + 0x4c))(&local_28);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pRVar3 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)pRVar3 + 0x294))();
  cocos2d::Ref::retain(pRVar3);
  pdVar1 = *(double **)((int)this + 0x24);
  if (*(double **)((int)this + 0x28) == pdVar1) {
    FUN_00544b70((void *)((int)this + 0x20),pdVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *pdVar1 = local_20;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = pRVar3;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = pRVar3;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return pRVar3;
}


Ref * __thiscall FUN_00541880(void *this,Ref *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  undefined2 *puVar4;
  int iVar5;
  float10 fVar6;
  float local_28;
  float local_24;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pRVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5d04;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (double)(ulonglong)(uint)local_20;
  local_24 = *(float *)(DAT_0065b5cc + 0xd0);
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0xac) + 8))
                             (&local_24,(int)&local_20 + 4,DAT_0065500c ^ (uint)&stack0xfffffffc);
  local_20 = (double)fVar6;
  param_1 = (Ref *)FUN_005adb0f(0x458);
  local_8 = 0;
  iVar5 = *(int *)((int)this + 0xc);
  pRVar3 = (Ref *)FUN_00562c00(param_1,iVar5,(undefined4 *)pRVar3,iVar5 + 0x70,iVar5,
                               *(int *)(pRVar3 + 0x10),*(int *)(pRVar3 + 0x14));
  local_8 = 0xffffffff;
  puVar4 = (undefined2 *)
           cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),'\x18','\x18','\x18');
  local_28 = 0.0;
  local_24 = 0.0;
  *(undefined2 *)(pRVar3 + 0x448) = *puVar4;
  pRVar3[0x44a] = *(Ref *)(puVar4 + 1);
  local_8 = 1;
  (**(code **)(*(int *)pRVar3 + 0xa0))(&local_28);
  local_28 = (float)*(int *)(pRVar3 + 0x298);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(pRVar3 + 0x2a4) + *(int *)(pRVar3 + 0x29c);
  }
  else {
    iVar5 = *(int *)(pRVar3 + 0x29c) + 0xc + *(int *)(pRVar3 + 0x2a4);
  }
  local_24 = (float)iVar5;
  local_8 = 2;
  (**(code **)(*(int *)pRVar3 + 0x4c))(&local_28);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pRVar3 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)pRVar3 + 0x294))();
  cocos2d::Ref::retain(pRVar3);
  pdVar1 = *(double **)((int)this + 0x24);
  if (*(double **)((int)this + 0x28) == pdVar1) {
    FUN_00544b70((void *)((int)this + 0x20),pdVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *pdVar1 = local_20;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = pRVar3;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = pRVar3;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return pRVar3;
}


Ref * FUN_00541a40(undefined4 *param_1,Ref *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  Ref RVar5;
  Ref *this;
  int iVar6;
  void *pvVar7;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined8 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5d54;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c._4_4_ = (Ref *)FUN_005adb0f(0x460);
  local_8 = 0;
  uVar1 = param_1[5];
  uVar2 = param_1[4];
  FUN_004024e0(local_34,param_1 + 7);
  this = local_1c._4_4_;
  local_8._0_1_ = 1;
  FUN_00553370(local_1c._4_4_,*(int *)(local_14 + 0xc),param_1,*(int *)(local_14 + 0xc) + 0x70);
  local_8._0_1_ = 2;
  *(undefined4 *)(this + 0x42c) = uVar1;
  RVar5 = param_2._0_1_;
  *(undefined ***)this = UI_Button::vftable;
  *(undefined4 *)(this + 0x428) = uVar2;
  this[0x430] = param_2._0_1_;
  FUN_004024e0(this + 0x434,local_34);
  *(undefined2 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x45c) = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  this[0x284] = (Ref)(RVar5 == (Ref)0x0);
  *(undefined4 *)(this + 0x450) = 0;
  *(undefined4 *)(this + 0x454) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  if (0xf < local_20) {
    pvVar7 = local_34[0];
    if (0xfff < local_20 + 1) {
      pvVar7 = *(void **)((int)local_34[0] + -4);
      if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  local_1c = 0;
  local_8 = 3;
  (**(code **)(*(int *)this + 0xa0))(&local_1c);
  if (*(char *)(local_14 + 0x14) == '\0') {
    iVar6 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
  }
  else {
    iVar6 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
  }
  local_1c = CONCAT44((float)iVar6,(float)*(int *)(this + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this + 0x4c))(&local_1c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this + 0x294))();
  cocos2d::Ref::retain(this);
  puVar3 = *(undefined8 **)(local_14 + 0x24);
  local_1c = 0;
  if (*(undefined8 **)(local_14 + 0x28) == puVar3) {
    FUN_00544b70((void *)(local_14 + 0x20),puVar3,&local_1c);
  }
  else {
    *(int *)(local_14 + 0x24) = *(int *)(local_14 + 0x24) + 8;
    *puVar3 = 0;
  }
  iVar6 = *(int *)(local_14 + 0xc);
  param_2 = this;
  puVar4 = *(undefined4 **)(iVar6 + 0x194);
  if (*(undefined4 **)(iVar6 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar6 + 400),puVar4,&param_2);
  }
  else {
    *puVar4 = this;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this;
}


Ref * __thiscall FUN_00541c70(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  Ref *this_00;
  int iVar4;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5d94;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x448);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_EngPanel::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  this_00[0x2dc] = (Ref)0x1;
  this_00[0x286] = (Ref)0x1;
  this_00[0x284] = (Ref)0x1;
  *(undefined4 *)(this_00 + 0x41c) = 200;
  local_20 = 0;
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar4 + 0x194);
  if (*(undefined4 **)(iVar4 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar4 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00541e30(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Ref *this_00;
  Ref *this_01;
  uint uVar3;
  int iVar4;
  uint in_stack_ffffffb8;
  void *pvVar5;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5df8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_01 = (Ref *)FUN_005adb0f(0x450);
  this_00 = param_1;
  local_20 = CONCAT44(this_01,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_01,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_01 = UI_ComponentStorage::vftable;
  *(undefined4 *)(this_01 + 0x428) = 0;
  *(undefined4 *)(this_01 + 0x42c) = 0;
  *(undefined4 *)(this_01 + 0x430) = 0;
  *(undefined4 *)(this_01 + 0x434) = 0xffffffff;
  *(undefined4 *)(this_01 + 0x444) = 0;
  *(undefined4 *)(this_01 + 0x448) = 0;
  *(undefined4 *)(this_01 + 0x44c) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  pvVar5 = (void *)(in_stack_ffffffb8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,"invmode",7);
  uVar3 = FUN_00557620(this_00,pvVar5);
  if ((char)uVar3 == '\0') {
    iVar4 = *(int *)(DAT_0065b5cc + 0xd0) + 0x1dc;
  }
  else {
    iVar4 = *(int *)(DAT_0065b5cc + 0xd0) + 0x1d4;
  }
  *(int *)(this_01 + 0x438) = iVar4;
  this_01[0x286] = (Ref)0x1;
  this_01[0x284] = (Ref)0x1;
  pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,"nodrag",6);
  uVar3 = FUN_00557620(this_00,pvVar5);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(this_01 + 0x41c) = 100;
  }
  FUN_00564db0((int *)this_01);
  local_20 = 0;
  local_8 = 4;
  (**(code **)(*(int *)this_01 + 0xa0))();
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar4 = *(int *)(this_01 + 0x2a4) + *(int *)(this_01 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_01 + 0x29c) + 0xc + *(int *)(this_01 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar4,(float)*(int *)(this_01 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_01 + 0x4c))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_01 + 0x2c))();
  (**(code **)(*(int *)this_01 + 0x294))();
  cocos2d::Ref::retain(this_01);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar4 + 0x194);
  if (*(undefined4 **)(iVar4 + 0x198) == puVar2) {
    param_1 = this_01;
    FUN_00414080((void *)(iVar4 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_01;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_01;
}


Node * __thiscall FUN_00542080(void *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  Node *this_00;
  Size *pSVar4;
  int iVar5;
  bool bVar6;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5e68;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Node *)FUN_005adb0f(0x440);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_WeaponTubes::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar6 = DAT_0065b3d4 != 0;
  this_00[0x2dc] = (Node)0x1;
  this_00[0x284] = (Node)0x1;
  this_00[0x286] = (Node)0x1;
  if (bVar6) {
    (**(code **)(*(int *)this_00 + 0x294))(uVar3);
  }
  pSVar4 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize(this_00,pSVar4);
  local_20 = 0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Node * __thiscall FUN_00542280(void *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Node *pNVar3;
  Node *pNVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *in_stack_ffffffb8;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pNVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5ec6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x50) < 2) {
    pNVar4 = (Node *)FUN_005adb0f(0x498);
    local_8 = 1;
    param_1 = pNVar4;
    FUN_004024e0(&stack0xffffffb8,(undefined4 *)(pNVar3 + 0x1c));
    iVar5 = *(int *)((int)this + 0xc);
    uVar7 = 0;
    uVar6 = 1;
  }
  else {
    pNVar4 = (Node *)FUN_005adb0f(0x498);
    local_8 = 0;
    param_1 = pNVar4;
    FUN_004024e0(&stack0xffffffb8,(undefined4 *)(pNVar3 + 0x1c));
    iVar5 = *(int *)((int)this + 0xc);
    uVar7 = *(undefined4 *)(pNVar3 + 0x54);
    uVar6 = *(undefined4 *)(pNVar3 + 0x50);
  }
  pNVar4 = FUN_0056bf00(pNVar4,iVar5,(undefined4 *)pNVar3,iVar5 + 0x70,uVar6,uVar7,in_stack_ffffffb8
                       );
  local_20 = 0;
  pNVar4[0x468] = pNVar3[0x18];
  local_8 = 2;
  (**(code **)(*(int *)pNVar4 + 0xa0))();
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(pNVar4 + 0x2a4) + *(int *)(pNVar4 + 0x29c);
  }
  else {
    iVar5 = *(int *)(pNVar4 + 0x29c) + 0xc + *(int *)(pNVar4 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar5,(float)*(int *)(pNVar4 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)pNVar4 + 0x4c))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pNVar4 + 0x2c))();
  (**(code **)(*(int *)pNVar4 + 0x294))();
  cocos2d::Ref::retain((Ref *)pNVar4);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = pNVar4;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = pNVar4;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return pNVar4;
}


Node * __thiscall FUN_00542440(void *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Node *this_00;
  Size *pSVar3;
  int iVar4;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5f38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (Node *)FUN_005adb0f(0x450);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_IntroSequence::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  iVar4 = DAT_0065b444;
  local_8 = CONCAT31(local_8._1_3_,3);
  if ((DAT_0065b3d1 == '\0') && (*(char *)(DAT_0065b444 + 0x78) != '\0')) {
    *(undefined4 *)(this_00 + 0x448) = 1;
    *(undefined4 *)(this_00 + 0x44c) = 0;
    *(undefined4 *)(this_00 + 0x440) = 0x3fc00000;
    *(undefined4 *)(this_00 + 0x444) = 0x3fc00000;
    *(undefined1 *)(iVar4 + 5) = 1;
  }
  else {
    *(undefined4 *)(this_00 + 0x448) = 4;
    *(undefined4 *)(this_00 + 0x44c) = 0;
    *(undefined4 *)(this_00 + 0x440) = 0xbf800000;
    *(undefined4 *)(this_00 + 0x444) = 0xbf800000;
  }
  FUN_0056d100(this_00,0.0);
  pSVar3 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize(this_00,pSVar3);
  local_20 = 0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar4 + 0x194);
  if (*(undefined4 **)(iVar4 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar4 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Node * __thiscall FUN_00542690(void *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Node *this_00;
  Size *pSVar3;
  int iVar4;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &param_2_005c5f9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (Node *)FUN_005adb0f(0x448);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_AdShell::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x42c) = 0xbf800000;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_005629a0(this_00,0.0);
  pSVar3 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize(this_00,pSVar3);
  local_20 = 0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar4 + 0x194);
  if (*(undefined4 **)(iVar4 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar4 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Node * __thiscall FUN_00542870(void *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  Node *this_00;
  float *pfVar4;
  Size *pSVar5;
  int iVar6;
  float fVar7;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6008;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Node *)FUN_005adb0f(0x448);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_NewsTicker::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (*(int *)(this_00 + 0x430) - *(int *)(this_00 + 0x42c) >> 2 != 0) {
    *(float *)(this_00 + 0x428) = *(float *)(this_00 + 0x428) - 0.0;
    pfVar4 = (float *)(**(code **)(*(int *)**(undefined4 **)(this_00 + 0x42c) + 0xb0))(uVar3);
    fVar7 = *(float *)(this_00 + 0x428);
    if (fVar7 < 0.0 - *pfVar4) {
      fVar7 = (float)*(int *)(*(int *)(this_00 + 0x278) + 0x68);
      *(float *)(this_00 + 0x428) = fVar7;
    }
    (**(code **)(*(int *)**(undefined4 **)(this_00 + 0x42c) + 0x68))((float)(int)fVar7);
    **(undefined1 **)(this_00 + 0x288) = 1;
  }
  pSVar5 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize(this_00,pSVar5);
  local_20 = 0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar6,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar6 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar6 + 0x194);
  if (*(undefined4 **)(iVar6 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar6 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00542ae0(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  uint uVar4;
  Ref *this_00;
  int iVar5;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pRVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6066;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 < 2) {
    param_1 = (Ref *)FUN_005adb0f(0x4f8);
  }
  else {
    param_1 = (Ref *)FUN_005adb0f(0x4f8);
  }
  local_8 = (uint)(iVar5 < 2);
  this_00 = (Ref *)FUN_0058a170(param_1,*(int *)((int)this + 0xc),(undefined4 *)pRVar3,
                                *(int *)((int)this + 0xc) + 0x70);
  local_20 = 0;
  this_00[0x428] = pRVar3[0x18];
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar4);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00542c60(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  uint uVar4;
  Ref *this_00;
  int iVar5;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pRVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c60c6;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 < 2) {
    this_00 = (Ref *)FUN_005adb0f(0x448);
  }
  else {
    this_00 = (Ref *)FUN_005adb0f(0x448);
  }
  local_8 = (uint)(iVar5 < 2);
  param_1 = this_00;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)pRVar3,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_SensorWaveform::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  local_20 = 0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar4);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00542e30(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  Ref *this_00;
  int iVar4;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6114;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x468);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_SensorDisplay::vftable;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0xf;
  this_00[0x428] = (Ref)0x0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x458) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0xf;
  this_00[0x448] = (Ref)0x0;
  *(undefined4 *)(this_00 + 0x460) = 0;
  local_20 = 0;
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar4 + 0x194);
  if (*(undefined4 **)(iVar4 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar4 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00542fe0(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  Ref *this_00;
  int iVar4;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c616a;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x458);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_SelectedObjectSummary::vftable;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0xf;
  this_00[0x428] = (Ref)0x0;
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 0;
  *(undefined4 *)(this_00 + 0x450) = 0;
  FUN_00402690(this_00 + 0x428,"`%Object: thing\nStuff: 2^",0x19);
  local_20 = 0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar4 + 0x194);
  if (*(undefined4 **)(iVar4 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar4 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * FUN_005431a0(Ref *param_1)

{
  Ref *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined4 *puVar5;
  uint uVar6;
  Ref *this;
  int iVar7;
  void *pvVar8;
  float10 fVar9;
  void *local_58 [4];
  undefined4 local_48;
  uint local_44;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pRVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c61e6;
  local_10 = ExceptionList;
  uVar6 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0xac) == 0) {
    this = (Ref *)FUN_005adb0f(0x478);
    local_28 = (double)CONCAT44(this,(undefined4)local_28);
    local_8 = 3;
    uVar2 = *(undefined4 *)(pRVar1 + 0x14);
    uVar3 = *(undefined4 *)(pRVar1 + 0x10);
    FUN_004024e0(local_58,(undefined4 *)(param_1 + 0x1c));
    local_8._0_1_ = 4;
    FUN_00553370(this,*(int *)(local_18 + 0xc),(undefined4 *)param_1,*(int *)(local_18 + 0xc) + 0x70
                );
    local_8._0_1_ = 5;
    *(undefined ***)this = UI_Text::vftable;
    this[0x428] = (Ref)0x1;
    *(undefined4 *)(this + 0x42c) = uVar3;
    *(undefined4 *)(this + 0x430) = uVar2;
    FUN_004024e0(this + 0x434,local_58);
    *(undefined4 *)(this + 0x45c) = 0;
    *(undefined4 *)(this + 0x460) = 0xf;
    this[0x44c] = (Ref)0x0;
    *(undefined8 *)(this + 0x468) = 0x4010000000000000;
    *(undefined4 *)(this + 0x470) = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    if (0xf < local_44) {
      pvVar8 = local_58[0];
      if (0xfff < local_44 + 1) {
        pvVar8 = *(void **)((int)local_58[0] + -4);
        if (0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar8);
    }
    local_48 = 0;
    local_44 = 0xf;
    local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
  }
  else {
    this = (Ref *)FUN_005adb0f(0x478);
    local_28 = (double)CONCAT44(this,(undefined4)local_28);
    local_8 = 0;
    local_1c = 0;
    local_20 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
    if (*(int **)(pRVar1 + 0xac) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)(pRVar1 + 0xac) + 8))(&local_20,&local_1c,uVar6);
    uVar2 = *(undefined4 *)(pRVar1 + 0x14);
    uVar3 = *(undefined4 *)(pRVar1 + 0x10);
    FUN_004024e0(local_40,(undefined4 *)(param_1 + 0x1c));
    local_8._0_1_ = 1;
    FUN_00553370(this,*(int *)(local_18 + 0xc),(undefined4 *)param_1,*(int *)(local_18 + 0xc) + 0x70
                );
    local_8._0_1_ = 2;
    *(undefined ***)this = UI_Text::vftable;
    this[0x428] = (Ref)0x0;
    *(undefined4 *)(this + 0x42c) = uVar3;
    *(undefined4 *)(this + 0x430) = uVar2;
    FUN_004024e0(this + 0x434,local_40);
    *(undefined4 *)(this + 0x45c) = 0;
    *(undefined4 *)(this + 0x460) = 0xf;
    this[0x44c] = (Ref)0x0;
    *(undefined8 *)(this + 0x468) = 0x4010000000000000;
    *(undefined4 *)(this + 0x470) = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_2c) {
      pvVar8 = local_40[0];
      if (0xfff < local_2c + 1) {
        pvVar8 = *(void **)((int)local_40[0] + -4);
        if (0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar8);
    }
    local_30 = 0;
    local_2c = 0xf;
    local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
  }
  local_28 = 0.0;
  local_8 = 6;
  (**(code **)(*(int *)this + 0xa0))(&local_28);
  if (*(char *)(local_18 + 0x14) == '\0') {
    iVar7 = *(int *)(this + 0x2a4) + *(int *)(this + 0x29c);
  }
  else {
    iVar7 = *(int *)(this + 0x29c) + 0xc + *(int *)(this + 0x2a4);
  }
  local_28 = (double)CONCAT44((float)iVar7,(float)*(int *)(this + 0x298));
  local_8 = 7;
  (**(code **)(*(int *)this + 0x4c))(&local_28);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this + 0x294))();
  cocos2d::Ref::retain(this);
  if (*(int *)(param_1 + 0xac) == 0) {
    local_28 = 0.0;
  }
  else {
    pRVar1 = param_1 + 0xac;
    param_1 = (Ref *)0x0;
    local_20 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
    if (*(int **)pRVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar9 = (float10)(**(code **)(**(int **)pRVar1 + 8))(&local_20,&param_1);
    local_28 = (double)fVar9;
  }
  pdVar4 = *(double **)(local_18 + 0x24);
  if (*(double **)(local_18 + 0x28) == pdVar4) {
    FUN_00544b70((void *)(local_18 + 0x20),pdVar4,&local_28);
  }
  else {
    *(int *)(local_18 + 0x24) = *(int *)(local_18 + 0x24) + 8;
    *pdVar4 = local_28;
  }
  iVar7 = *(int *)(local_18 + 0xc);
  puVar5 = *(undefined4 **)(iVar7 + 0x194);
  if (*(undefined4 **)(iVar7 + 0x198) == puVar5) {
    param_1 = this;
    FUN_00414080((void *)(iVar7 + 400),puVar5,&param_1);
  }
  else {
    *puVar5 = this;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this;
}


Ref * __thiscall FUN_00543550(void *this,Ref *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  Ref *this_00;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 local_28;
  float local_1c;
  Ref *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c623c;
  local_10 = ExceptionList;
  uVar6 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar8 = 0.0;
  local_28 = 0;
  this_00 = (Ref *)FUN_005adb0f(0x450);
  local_8 = 0;
  local_18 = this_00;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  iVar7 = DAT_0065b5cc;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_HelmControl::vftable;
  this_00[0x284] = (Ref)0x1;
  this_00[0x286] = (Ref)0x1;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  iVar7 = *(int *)(iVar7 + 0xd0);
  if (((iVar7 == 0) || (piVar1 = *(int **)(*(int *)(iVar7 + 0x40) + 0x24), piVar1 == (int *)0x0)) ||
     (cVar5 = (**(code **)(*piVar1 + 0x10))(0,uVar6), cVar5 == '\0')) {
    dVar9 = 0.0;
  }
  else if ((*(float *)(iVar7 + 0x118) == 0.0) && (fVar8 = *(float *)(iVar7 + 0x11c), fVar8 == 0.0))
  {
    dVar9 = (double)*(float *)(iVar7 + 0x120);
  }
  else {
    FUN_00592f80(0.0,0,*(float *)(iVar7 + 0x118));
    dVar9 = (double)fVar8;
  }
  iVar7 = DAT_0065b5cc;
  dVar10 = 0.0;
  *(double *)(this_00 + 0x438) = dVar9;
  uVar4 = DAT_0065b3e0;
  if (*(int *)(iVar7 + 0xd0) != 0) {
    dVar10 = (double)*(float *)(*(int *)(iVar7 + 0xd0) + 0x120);
  }
  *(double *)(this_00 + 0x440) = dVar10;
  *(undefined8 *)(this_00 + 0x448) = uVar4;
  local_1c = 0.0;
  local_18 = (Ref *)0x0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_1c);
  local_1c = (float)*(int *)(this_00 + 0x298);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_18 = (Ref *)(float)iVar7;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_1c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar2 = *(undefined8 **)((int)this + 0x24);
  if (*(undefined8 **)((int)this + 0x28) == puVar2) {
    FUN_00544b70((void *)((int)this + 0x20),puVar2,&local_28);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar2 = 0;
  }
  iVar7 = *(int *)((int)this + 0xc);
  puVar3 = *(undefined4 **)(iVar7 + 0x194);
  if (*(undefined4 **)(iVar7 + 0x198) == puVar3) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar7 + 400),puVar3,&param_1);
  }
  else {
    *puVar3 = this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_005437c0(void *this,Ref *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  Ref *pRVar4;
  uint uVar5;
  Ref *this_00;
  int iVar6;
  bool bVar7;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c628c;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x458);
  pRVar4 = param_1;
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar7 = DAT_0065b3d4 != 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined ***)this_00 = UI_Slider::vftable;
  this_00[0x428] = (Ref)0x1;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 100;
  *(undefined4 *)(this_00 + 0x450) = 1;
  *(undefined2 *)(this_00 + 0x284) = 0x101;
  this_00[0x286] = (Ref)0x1;
  piVar1 = *(int **)(pRVar4 + 0x160);
  *(int **)(this_00 + 0x440) = piVar1;
  if (bVar7) {
    if ((piVar1 == (int *)0x0) || (*piVar1 == -1)) {
      iVar6 = FUN_004de5d0(*(undefined4 *)(this_00 + 0x3f4));
      if (*(int *)(this_00 + 0x44c) == iVar6) goto LAB_005438d6;
    }
    (**(code **)(*(int *)this_00 + 0x294))(uVar5);
  }
LAB_005438d6:
  *(undefined4 *)(this_00 + 0x448) = 0;
  iVar6 = FUN_004de5d0(*(undefined4 *)(pRVar4 + 0x164));
  *(int *)(this_00 + 0x44c) = iVar6;
  local_20 = 0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar6,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar2 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar2) {
    FUN_00544b70((void *)((int)this + 0x20),puVar2,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar2 = 0;
  }
  iVar6 = *(int *)((int)this + 0xc);
  puVar3 = *(undefined4 **)(iVar6 + 0x194);
  if (*(undefined4 **)(iVar6 + 0x198) == puVar3) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar6 + 400),puVar3,&param_1);
  }
  else {
    *puVar3 = this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_005439f0(void *this,Ref *param_1)

{
  float fVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  Ref *pRVar4;
  Ref *this_00;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint in_stack_ffffffb8;
  void *pvVar8;
  undefined8 local_20;
  Ref *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c62dc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x450);
  pRVar4 = param_1;
  local_8 = 0;
  local_18 = this_00;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_TextBox::vftable;
  this_00[0x428] = (Ref)0x0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  this_00[0x434] = (Ref)0x0;
  *(undefined4 *)(this_00 + 0x438) = 8;
  iVar6 = *(int *)(pRVar4 + 0x10);
  this_00[0x440] = (Ref)0x1;
  *(int *)(this_00 + 0x43c) = iVar6 + -4;
  *(undefined4 *)(this_00 + 0x444) = 0x3f800000;
  *(undefined4 *)(this_00 + 0x448) = 0;
  pvVar8 = (void *)(in_stack_ffffffb8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,"nolosefocus",0xb);
  uVar5 = FUN_00557620(this_00 + 0x290,pvVar8);
  if ((char)uVar5 != '\0') {
    this_00[0x434] = (Ref)0x1;
  }
  bVar7 = DAT_0065b3d4 != 0;
  this_00[0x287] = (Ref)0x1;
  if (((bVar7) && (this_00[0x418] != (Ref)0x0)) &&
     (fVar1 = *(float *)(this_00 + 0x444), *(float *)(this_00 + 0x444) = fVar1 - 0.0,
     fVar1 - 0.0 <= 0.0)) {
    *(undefined4 *)(this_00 + 0x444) = 0x3f800000;
    this_00[0x440] = (Ref)(this_00[0x440] == (Ref)0x0);
    (**(code **)(*(int *)this_00 + 0x294))();
  }
  local_20 = 0;
  *(undefined4 *)(this_00 + 0x448) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(this_00 + 0x438) = *(undefined4 *)(param_1 + 0x174);
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))();
  (**(code **)(*(int *)this_00 + 0x294))();
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar6,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))();
  local_8 = 0xffffffff;
  cocos2d::Ref::retain(this_00);
  puVar2 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar2) {
    FUN_00544b70((void *)((int)this + 0x20),puVar2,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar2 = 0;
  }
  iVar6 = *(int *)((int)this + 0xc);
  puVar3 = *(undefined4 **)(iVar6 + 0x194);
  if (*(undefined4 **)(iVar6 + 0x198) == puVar3) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar6 + 400),puVar3,&param_1);
  }
  else {
    *puVar3 = this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00543c50(void *this,Ref *param_1)

{
  Ref RVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  Ref *pRVar4;
  bool bVar5;
  uint uVar6;
  Ref *this_00;
  int iVar7;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c633a;
  local_10 = ExceptionList;
  uVar6 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x460);
  pRVar4 = param_1;
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  *(undefined ***)this_00 = UI_Checkbox::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  this_00[0x284] = (Ref)0x1;
  this_00[0x286] = (Ref)0x1;
  iVar7 = *(int *)(pRVar4 + 0x160);
  *(int *)(this_00 + 0x434) = iVar7;
  if (iVar7 == 0) {
    bVar5 = cc_assert_script_compatible("ERROR: invalid data pointer");
    if (!bVar5) {
      cocos2d::log("Assert failed: %s","ERROR: invalid data pointer",uVar6);
    }
  }
  this_00[0x431] = this_00[0x27c];
  RVar1 = **(Ref **)(this_00 + 0x434);
  this_00[0x430] = RVar1;
  if (RVar1 != **(Ref **)(this_00 + 0x434)) {
    (**(code **)(*(int *)this_00 + 0x294))();
  }
  local_20 = 0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar7,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  cocos2d::Ref::retain(this_00);
  puVar2 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar2) {
    FUN_00544b70((void *)((int)this + 0x20),puVar2,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar2 = 0;
  }
  iVar7 = *(int *)((int)this + 0xc);
  puVar3 = *(undefined4 **)(iVar7 + 0x194);
  if (*(undefined4 **)(iVar7 + 0x198) == puVar3) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar7 + 400),puVar3,&param_1);
  }
  else {
    *puVar3 = this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Node * __thiscall FUN_00543e40(void *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  Node *this_00;
  Size *pSVar4;
  int iVar5;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &param_1_005c638c;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Node *)FUN_005adb0f(0x430);
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_SystemBar::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  pSVar4 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize(this_00,pSVar4);
  local_20 = 0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  cocos2d::Ref::retain((Ref *)this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar5 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar5 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


Ref * __thiscall FUN_00543ff0(void *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  Ref RVar4;
  uint uVar5;
  Ref *this_00;
  uint uVar6;
  int iVar7;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c63dc;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (Ref *)FUN_005adb0f(0x450);
  pRVar3 = param_1;
  local_20 = CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  FUN_00553370(this_00,*(int *)((int)this + 0xc),(undefined4 *)param_1,
               *(int *)((int)this + 0xc) + 0x70);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_Selector::vftable;
  *(undefined2 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined2 *)(this_00 + 0x448) = 0;
  iVar7 = *(int *)(pRVar3 + 0x10);
  this_00[0x284] = (Ref)0x1;
  *(int *)(this_00 + 0x44c) = iVar7 + -0x18;
  this_00[0x286] = (Ref)0x1;
  *(undefined4 *)(this_00 + 0x444) = *(undefined4 *)(pRVar3 + 0x160);
  uVar6 = FUN_004dd820(*(undefined4 *)(this_00 + 0x3f4));
  param_1 = (Ref *)CONCAT13((char)uVar6,param_1._0_3_);
  RVar4 = (Ref)FUN_004dd980(*(undefined4 *)(this_00 + 0x3f4));
  if ((param_1._3_1_ != this_00[0x428]) || (RVar4 != this_00[0x429])) {
    this_00[0x429] = RVar4;
    this_00[0x428] = param_1._3_1_;
    (**(code **)(*(int *)this_00 + 0x294))(uVar5);
  }
  local_20 = 0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (*(char *)((int)this + 0x14) == '\0') {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = CONCAT44((float)iVar7,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(0xbf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  puVar1 = *(undefined8 **)((int)this + 0x24);
  local_20 = 0;
  if (*(undefined8 **)((int)this + 0x28) == puVar1) {
    FUN_00544b70((void *)((int)this + 0x20),puVar1,&local_20);
  }
  else {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 8;
    *puVar1 = 0;
  }
  iVar7 = *(int *)((int)this + 0xc);
  puVar2 = *(undefined4 **)(iVar7 + 0x194);
  if (*(undefined4 **)(iVar7 + 0x198) == puVar2) {
    param_1 = this_00;
    FUN_00414080((void *)(iVar7 + 400),puVar2,&param_1);
  }
  else {
    *puVar2 = this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}
