#include "../ois_server.exe.h"


Node * __thiscall FUN_0058c0e0(void *this,byte param_1)

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
  *(undefined ***)this = UI_TextBox::vftable;
  if (*(int **)((int)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x430) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x430) = 0;
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


void __fastcall FUN_0058c190(int param_1)

{
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int **)(param_1 + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  return;
}


void __fastcall FUN_0058c1e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void **ppvVar3;
  Ref *pRVar4;
  basic_string<> *pbVar5;
  Scale9Sprite *pSVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  void *in_stack_ffffff70;
  Size local_6c [8];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44;
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 *local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca885;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  (**(code **)(*param_1 + 0x290))();
  puVar1 = (undefined4 *)param_1[0x112];
  if (puVar1 == (undefined4 *)0x0) {
    uStack_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_1c = puVar1;
    FUN_00402690(local_2c,&PTR_005ce008,0);
    ppvVar3 = local_2c;
    uVar9 = 1;
  }
  else {
    ppvVar3 = (void **)FUN_004024e0(local_5c,puVar1);
    uVar9 = 2;
  }
  local_44 = *ppvVar3;
  pvStack_40 = ppvVar3[1];
  pvStack_3c = ppvVar3[2];
  pvStack_38 = ppvVar3[3];
  local_34 = *(undefined8 *)(ppvVar3 + 4);
  ppvVar3[4] = (void *)0x0;
  ppvVar3[5] = (void *)0xf;
  *(undefined1 *)ppvVar3 = 0;
  local_8 = 1;
  if ((uVar9 & 2) != 0) {
    local_60 = uVar9 & 0xfffffffd;
    if (0xf < local_48) {
      pvVar10 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar10 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    uVar9 = local_60;
  }
  local_8._0_1_ = 2;
  if (((uVar9 & 1) != 0) && (0xf < uStack_18)) {
    pvVar10 = local_2c[0];
    if ((0xfff < uStack_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if ((char)param_1[0x10a] == '\0') {
    FUN_00591e00(&stack0xffffff70,"`7%s%s");
    pRVar4 = FUN_0055ca10(-1,0xffffffff,(Node)0x0,in_stack_ffffff70);
    param_1[0x10b] = (int)pRVar4;
    local_64 = 0;
    local_60 = 0x3f000000;
    local_8._0_1_ = 6;
    (**(code **)(*(int *)pRVar4 + 0xa0))();
    local_8._0_1_ = 2;
    (**(code **)(*(int *)param_1[0x10b] + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    pcVar7 = "%c_TextBox_Selected.png";
    if ((char)param_1[0x106] == '\0') {
      pcVar7 = "%c_TextBox_Unselected.png";
    }
    pbVar5 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar7);
    local_8._0_1_ = 7;
    pSVar6 = cocos2d::ui::Scale9Sprite::create(pbVar5);
    local_8._0_1_ = 2;
    param_1[0x10c] = (int)pSVar6;
    if (0xf < uStack_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < uStack_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    local_8._0_1_ = 8;
  }
  else {
    FUN_00591e00(&stack0xffffff70,&DAT_006166fc);
    pRVar4 = FUN_0055ca10(-1,0xffffffff,(Node)0x0,in_stack_ffffff70);
    param_1[0x10b] = (int)pRVar4;
    local_64 = 0;
    local_60 = 0x3f000000;
    local_8._0_1_ = 3;
    (**(code **)(*(int *)pRVar4 + 0xa0))();
    local_8._0_1_ = 2;
    (**(code **)(*(int *)param_1[0x10b] + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    pbVar5 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_TextBox_Greyed.png");
    local_8._0_1_ = 4;
    pSVar6 = cocos2d::ui::Scale9Sprite::create(pbVar5);
    local_8._0_1_ = 2;
    param_1[0x10c] = (int)pSVar6;
    if (0xf < uStack_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < uStack_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    local_8._0_1_ = 5;
  }
  local_60 = 0;
  local_64 = 0;
  (**(code **)(*(int *)param_1[0x10c] + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(*(int *)param_1[0x10c] + 0x48))(0,0);
  iVar2 = *(int *)param_1[0x10c];
  uVar8 = cocos2d::Size::Size((Size *)&local_64,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar2 + 0xac))(uVar8);
  (**(code **)(*param_1 + 0x10c))(param_1[0x10c]);
  iVar2 = *param_1;
  uVar8 = cocos2d::Size::Size(local_6c,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar2 + 0xac))(uVar8);
  *(undefined1 *)param_1[0xa2] = 1;
  if (0xf < local_34._4_4_) {
    pvVar10 = local_44;
    if ((0xfff < local_34._4_4_ + 1) &&
       (pvVar10 = *(void **)((int)local_44 + -4), 0x1f < (uint)((int)local_44 + (-4 - (int)pvVar10))
       )) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0058c6c0(void *this,float param_1)

{
  float fVar1;
  
  if (((DAT_0065b3d4 != 0) && (*(char *)((int)this + 0x418) != '\0')) &&
     (fVar1 = *(float *)((int)this + 0x444) - param_1, *(float *)((int)this + 0x444) = fVar1,
     fVar1 <= 0.0)) {
    *(undefined4 *)((int)this + 0x444) = 0x3f800000;
    *(bool *)((int)this + 0x440) = *(char *)((int)this + 0x440) == '\0';
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


void __fastcall FUN_0058c720(int param_1)

{
  *(undefined4 *)(param_1 + 0x444) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x440) = 1;
  return;
}


void __fastcall FUN_0058c740(int param_1)

{
  FUN_004dd240(*(undefined4 *)(param_1 + 0x3f4));
  return;
}


void __thiscall FUN_0058c750(void *this,int param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  byte ****ppppbVar8;
  char cVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int local_48;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c1110;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (((*(char *)((int)this + 0x428) != '\0') || (*(char *)((int)this + 0x418) == '\0')) ||
     (*(undefined4 **)((int)this + 0x448) == (undefined4 *)0x0)) goto LAB_0058c9b7;
  FUN_004024e0(local_2c,*(undefined4 **)((int)this + 0x448));
  local_8 = 0;
  if (((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) {
    if (*(int *)((int)this + 0x3f4) == 5) {
      FUN_004e9cd0(*(int *)(DAT_0065b5cc + 0xd0));
    }
LAB_0058c917:
    (**(code **)(*(int *)this + 0x294))(uVar3);
    iVar4 = DAT_0065b3d4;
    if (DAT_0065b3d4 == 0) {
      iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
    }
    pvVar7 = (void *)FUN_00402f60();
    FUN_00558a20(pvVar7,iVar4);
  }
  else {
    if (((param_1 == 7) || (param_1 == 0x17)) || (param_1 == 0x2e)) {
      puVar6 = *(undefined4 **)((int)this + 0x448);
      uVar1 = puVar6[4];
      if (uVar1 < 2) {
        if (uVar1 != 1) goto LAB_0058c942;
        puVar6[4] = 0;
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        *(undefined1 *)puVar6 = 0;
      }
      else {
        puVar10 = puVar6;
        if (0xf < (uint)puVar6[5]) {
          puVar10 = (undefined4 *)*puVar6;
        }
        FUN_0042b9b0(puVar6,&local_48,(int)((uVar1 - 1) + (int)puVar10));
      }
      goto LAB_0058c917;
    }
    local_48 = param_1;
    iVar4 = FUN_004023e0();
    if (local_48 - 0x7cU < 0x1a) {
      if (*(char *)(iVar4 + 0x2f8) == '\0') {
        cVar9 = (char)local_48 + -0x1b;
      }
      else {
        cVar9 = (char)local_48 + -0x3b;
      }
    }
    else {
      pvVar7 = (void *)(iVar4 + 0x2f0);
      if (*(char *)(iVar4 + 0x2f8) == '\0') {
        pvVar7 = (void *)(iVar4 + 0x2e8);
      }
      piVar5 = FUN_00534390(pvVar7,&local_48);
      cVar9 = (char)*piVar5;
    }
    if ((cVar9 != '\0') &&
       (*(uint *)(*(int *)((int)this + 0x448) + 0x10) < *(uint *)((int)this + 0x438))) {
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005ce018);
      local_8._0_1_ = 1;
      FUN_00403490(*(void **)((int)this + 0x448),puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar7 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      goto LAB_0058c917;
    }
  }
LAB_0058c942:
  pbVar2 = *(byte **)((int)this + 0x448);
  pbVar11 = pbVar2;
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar11 = *(byte **)pbVar2;
  }
  ppppbVar8 = local_2c;
  if (0xf < local_18) {
    ppppbVar8 = (byte ****)local_2c[0];
  }
  uVar3 = FUN_004031f0((byte *)ppppbVar8,local_1c,pbVar11,*(uint *)(pbVar2 + 0x10));
  if ((char)uVar3 == '\0') {
    FUN_004dd240(*(undefined4 *)((int)this + 0x3f4));
  }
  if (0xf < local_18) {
    ppppbVar8 = (byte ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppbVar8 = (byte ****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar8);
  }
LAB_0058c9b7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __thiscall FUN_0058c9e0(void *this,int param_1)

{
  int iVar1;
  uint in_EAX;
  
  if ((*(char *)((int)this + 0x428) == '\0') && (*(char *)((int)this + 0x418) != '\0')) {
    if (((param_1 == 0xa4) || ((param_1 == 0x23 || (param_1 == 10)))) &&
       ((*(char *)((int)this + 0x434) == '\0' &&
        ((((param_1 = FUN_004023e0(), *(int *)(param_1 + 0x350) != 0 &&
           (iVar1 = *(int *)(param_1 + 0x354), iVar1 != 0)) &&
          (param_1 = *(int *)(iVar1 + 0x164), param_1 != 0)) && (*(char *)(param_1 + 0x418) != '\0')
         ))))) {
      *(undefined1 *)(param_1 + 0x418) = 0;
      (**(code **)(**(int **)(iVar1 + 0x164) + 0x2c0))();
      param_1 = (**(code **)(**(int **)(iVar1 + 0x164) + 0x294))();
      *(undefined4 *)(iVar1 + 0x164) = 0;
    }
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


void __thiscall FUN_0058ca80(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  Size *pSVar2;
  byte *pbVar3;
  uint uVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  uint in_stack_ffffff90;
  void *pvVar7;
  Size local_40 [4];
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca8dc;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = this;
  FUN_00553370(this,param_1,param_2,param_3);
  pbVar3 = (byte *)((int)this + 0x43c);
  *(undefined ***)this = UI_TextField::vftable;
  *(undefined2 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x450) = 0xf;
  *pbVar3 = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0xf;
  *(undefined1 *)((int)this + 0x454) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(int *)((int)this + 0x490) = param_2[4] + -0x1a;
  pvVar7 = (void *)(in_stack_ffffff90 & 0xffffff00);
  FUN_00402690(&stack0xffffff90,"sticktobottom",0xd);
  uVar1 = FUN_00557620(param_2,pvVar7);
  if ((char)uVar1 != '\0') {
    *(undefined2 *)((int)this + 0x428) = 0x101;
  }
  *(undefined1 *)((int)this + 0x284) = 1;
  *(undefined1 *)((int)this + 0x286) = 1;
  pSVar2 = (Size *)cocos2d::Size::Size(local_40,(float)*(int *)((int)this + 0x2a0),
                                       (float)*(int *)((int)this + 0x2a4));
  cocos2d::Node::setContentSize(this,pSVar2);
  if (DAT_0065b3d4 != 0) {
    local_34 = *(undefined4 *)((int)this + 1000);
    local_38 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
    if (*(int **)((int)this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)((int)this + 0x3e4) + 8))();
    uVar1 = local_1c;
    ppppbVar6 = (byte ****)local_30[0];
    local_8._0_1_ = 3;
    if (0xf < *(uint *)((int)this + 0x450)) {
      pbVar3 = *(byte **)pbVar3;
    }
    ppppbVar5 = local_30;
    if (0xf < local_1c) {
      ppppbVar5 = (byte ****)local_30[0];
    }
    uVar4 = FUN_004031f0((byte *)ppppbVar5,local_20,pbVar3,*(uint *)((int)this + 0x44c));
    if ((char)uVar4 == '\0') {
      if (*(char *)((int)this + 0x428) == '\0') {
        *(undefined4 *)((int)this + 0x434) = 0;
      }
      else {
        FUN_0058dab0((int)this);
      }
      (**(code **)(*(int *)this + 0x294))();
      uVar1 = local_1c;
      ppppbVar6 = (byte ****)local_30[0];
    }
    if (0xf < uVar1) {
      ppppbVar5 = ppppbVar6;
      if (0xfff < uVar1 + 1) {
        ppppbVar5 = (byte ****)ppppbVar6[-1];
        if ((byte *)0x1f < (byte *)((int)ppppbVar6 + (-4 - (int)ppppbVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppppbVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_0058cd10(void *this,byte param_1)

{
  FUN_0058cd40(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0058cd40(Node *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c7b10;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_TextField::vftable;
  if (*(int **)(param_1 + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x46c) + 0x138))(1,uVar2);
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  if (*(int **)(param_1 + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x470) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x470) = 0;
  }
  if (*(int **)(param_1 + 0x474) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x474) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x474) = 0;
  }
  if (*(int **)(param_1 + 0x478) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x478) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x478) = 0;
  }
  if (*(int **)(param_1 + 0x47c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x47c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  if (*(int **)(param_1 + 0x480) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x480) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x480) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x468)) {
    pvVar1 = *(void **)(param_1 + 0x454);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x468) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0058ceee;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0xf;
  param_1[0x454] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x450)) {
    pvVar1 = *(void **)(param_1 + 0x43c);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x450) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_0058ceee:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0xf;
  param_1[0x43c] = (Node)0x0;
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0058cf00(int param_1)

{
  if (*(int **)(param_1 + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x46c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  if (*(int **)(param_1 + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x470) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x470) = 0;
  }
  if (*(int **)(param_1 + 0x474) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x474) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x474) = 0;
  }
  if (*(int **)(param_1 + 0x478) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x478) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x478) = 0;
  }
  if (*(int **)(param_1 + 0x47c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x47c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  if (*(int **)(param_1 + 0x480) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x480) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x480) = 0;
  }
  return;
}


void __fastcall FUN_0058cfc0(int *param_1)

{
  int iVar1;
  basic_string<> *pbVar2;
  Scale9Sprite *pSVar3;
  char *pcVar4;
  Ref *pRVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *******pppppppiVar8;
  int *piVar9;
  undefined4 *puVar10;
  void *pvVar11;
  uint uVar12;
  void *in_stack_ffffff40;
  void *pvVar13;
  undefined4 *in_stack_ffffff68;
  undefined4 *puVar14;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int ******local_44 [4];
  uint local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca986;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  param_1[0x10e] = param_1[0xa8] + -0xd;
  FUN_0058dab0((int)param_1);
  param_1[0x10b] = (int)(param_1[0xa9] + -4 + (param_1[0xa9] + -4 >> 0x1f & 7U)) >> 3;
  local_50 = param_1[0xfa];
  local_48 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
  if ((int *)param_1[0xf9] == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(*(int *)param_1[0xf9] + 8))();
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_004024e0(&stack0xffffff68,local_44);
  FUN_0055d140(&local_64,param_1[0x10e] - 2,in_stack_ffffff68);
  if (((char)param_1[0x10a] != '\0') && (*(char *)((int)param_1 + 0x429) != '\0')) {
    iVar1 = (local_60 - local_64) / 0x18 - param_1[0x122];
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    param_1[0x10d] = iVar1;
  }
  FUN_0058dab0((int)param_1);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Border.png");
  local_8._0_1_ = 2;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8._0_1_ = 1;
  param_1[0x11f] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) {
LAB_0058d13c:
      local_8._0_1_ = 1;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_4c = 0;
  local_48 = 0;
  local_8._0_1_ = 3;
  (**(code **)(*(int *)param_1[0x11f] + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(*(int *)param_1[0x11f] + 0x48))();
  iVar1 = *(int *)param_1[0x11f];
  cocos2d::Size::Size((Size *)&local_58,(float)param_1[0x10e],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  if ((char)param_1[0x123] == '\0') {
    pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8._0_1_ = 5;
  }
  else {
    pcVar4 = "%c_Button_Depressed.png";
    if (*(char *)((int)param_1 + 0x48e) == '\0') {
      pcVar4 = "%c_Button_Undepressed.png";
    }
    pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar4);
    local_8._0_1_ = 4;
  }
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8._0_1_ = 1;
  param_1[0x11b] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar13 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_0058d251;
    FUN_005adb3f(pvVar13);
  }
  local_4c = 0;
  local_48 = 0x3f800000;
  local_8._0_1_ = 6;
  puVar14 = &local_4c;
  (**(code **)(*(int *)param_1[0x11b] + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(*(int *)param_1[0x11b] + 0x48))();
  iVar1 = *(int *)param_1[0x11b];
  cocos2d::Size::Size((Size *)&local_58,12.0,12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff40,"`%c`a1");
  pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff40);
  param_1[0x11c] = (int)pRVar5;
  local_4c = 0x3f000000;
  local_48 = 0x3f000000;
  local_8._0_1_ = 7;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8._0_1_ = 1;
  piVar9 = (int *)param_1[0x11b];
  iVar1 = *(int *)param_1[0x11c];
  (**(code **)(*(int *)param_1[0x11b] + 0x74))();
  (**(code **)(*piVar9 + 0x6c))();
  (**(code **)(iVar1 + 0x48))();
  pvVar13 = (void *)0x58d3d6;
  (**(code **)(*param_1 + 0x108))();
  piVar9 = param_1 + 0x115;
  param_1[0x119] = 0;
  if (0xf < (uint)param_1[0x11a]) {
    piVar9 = (int *)param_1[0x115];
  }
  *(undefined1 *)piVar9 = 0;
  uVar12 = 0;
  uVar7 = (local_60 - local_64) / 0x18;
  local_50 = uVar7;
  if (uVar7 != 0) {
    do {
      if ((param_1[0x10d] <= (int)uVar12) &&
         (uVar7 = local_50, (int)uVar12 < param_1[0x122] + param_1[0x10d])) {
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e42b8);
        local_8._0_1_ = 8;
        puVar10 = puVar6;
        if (0xf < (uint)puVar6[5]) {
          puVar10 = (undefined4 *)*puVar6;
        }
        FUN_00403640(param_1 + 0x115,puVar10,puVar6[4]);
        local_8._0_1_ = 1;
        uVar7 = local_50;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0058d13c;
          FUN_005adb3f(pvVar11);
          uVar7 = local_50;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar7);
  }
  if ((int *******)(param_1 + 0x10f) != local_44) {
    pppppppiVar8 = local_44;
    if (0xf < local_30) {
      pppppppiVar8 = (int *******)local_44[0];
    }
    FUN_00402690(param_1 + 0x10f,pppppppiVar8,local_34);
  }
  FUN_004024e0(&stack0xffffff68,param_1 + 0x115);
  pRVar5 = FUN_0055cb00((Node)0x0,puVar14);
  param_1[0x120] = (int)pRVar5;
  local_4c = 0;
  local_48 = 0x3f800000;
  local_8._0_1_ = 9;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(*(int *)param_1[0x120] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  if (*(char *)((int)param_1 + 0x48d) == '\0') {
    pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Greyed.png");
    local_8._0_1_ = 0xb;
  }
  else {
    pcVar4 = "%c_Button_Depressed.png";
    if (*(char *)((int)param_1 + 0x48f) == '\0') {
      pcVar4 = "%c_Button_Undepressed.png";
    }
    pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,pcVar4);
    local_8._0_1_ = 10;
  }
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8._0_1_ = 1;
  param_1[0x11d] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0058d251;
    FUN_005adb3f(pvVar11);
  }
  local_4c = 0;
  local_48 = 0;
  local_8._0_1_ = 0xc;
  (**(code **)(*(int *)param_1[0x11d] + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(*(int *)param_1[0x11d] + 0x48))();
  iVar1 = *(int *)param_1[0x11d];
  cocos2d::Size::Size((Size *)&local_58,12.0,12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*param_1 + 0x10c))();
  FUN_00591e00(&stack0xffffff40,"`%c`a2");
  pRVar5 = FUN_0055cb00((Node)0x0,pvVar13);
  param_1[0x11e] = (int)pRVar5;
  local_58 = 0x3f000000;
  local_54 = 0x3f000000;
  local_8._0_1_ = 0xd;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8._0_1_ = 1;
  piVar9 = (int *)param_1[0x11d];
  iVar1 = *(int *)param_1[0x11e];
  (**(code **)(*(int *)param_1[0x11d] + 0x74))();
  (**(code **)(*piVar9 + 0x6c))();
  (**(code **)(iVar1 + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  if ((char)param_1[0x10a] != '\0') {
    *(bool *)((int)param_1 + 0x429) = *(char *)((int)param_1 + 0x48d) == '\0';
  }
  *(undefined1 *)param_1[0xa2] = 1;
  FUN_004025a0(&local_64);
  if (0xf < local_30) {
    pppppppiVar8 = (int *******)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pppppppiVar8 = (int *******)local_44[0][-1],
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pppppppiVar8)))) {
LAB_0058d251:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppiVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0058d7f0(int *param_1)

{
  uint uVar1;
  byte ****ppppbVar2;
  byte *pbVar3;
  uint uVar4;
  byte ****ppppbVar5;
  undefined4 local_38;
  int local_34;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3228;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0065b3d4 != 0) {
    local_34 = param_1[0xfa];
    local_38 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
    if ((int *)param_1[0xf9] == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(*(int *)param_1[0xf9] + 8))(local_30,&local_38,&local_34,local_18);
    uVar4 = local_1c;
    ppppbVar5 = (byte ****)local_30[0];
    local_8 = 0;
    pbVar3 = (byte *)(param_1 + 0x10f);
    if (0xf < (uint)param_1[0x114]) {
      pbVar3 = (byte *)param_1[0x10f];
    }
    ppppbVar2 = local_30;
    if (0xf < local_1c) {
      ppppbVar2 = (byte ****)local_30[0];
    }
    uVar1 = FUN_004031f0((byte *)ppppbVar2,local_20,pbVar3,param_1[0x113]);
    if ((char)uVar1 == '\0') {
      if ((char)param_1[0x10a] == '\0') {
        param_1[0x10d] = 0;
      }
      else {
        FUN_0058dab0((int)param_1);
      }
      (**(code **)(*param_1 + 0x294))();
      uVar4 = local_1c;
      ppppbVar5 = (byte ****)local_30[0];
    }
    if (0xf < uVar4) {
      ppppbVar2 = ppppbVar5;
      if (0xfff < uVar4 + 1) {
        ppppbVar2 = (byte ****)ppppbVar5[-1];
        if ((byte *)0x1f < (byte *)((int)ppppbVar5 + (-4 - (int)ppppbVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppppbVar2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0058d920(void *this,float param_1,float param_2)

{
  uint uVar1;
  int *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0058dc10(this,param_1,param_2);
  (**(code **)(*extraout_ECX + 0x294))(uVar1,this);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0058d980(void *this,float param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0058dc10(this,param_1,param_2);
  if (*(char *)((int)this + 0x48e) != '\0') {
    iVar6 = -1;
    iVar5 = 9;
    iVar4 = DAT_0065b3d4;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar3,iVar4,iVar5,iVar6);
    piVar1 = (int *)((int)this + 0x434);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)((int)this + 0x434) = 0;
    }
    *(undefined1 *)((int)this + 0x429) = 0;
    (**(code **)(*(int *)this + 0x294))(uVar2);
  }
  if (*(char *)((int)this + 0x48f) != '\0') {
    iVar6 = -1;
    iVar5 = 8;
    iVar4 = DAT_0065b3d4;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar3,iVar4,iVar5,iVar6);
    iVar4 = *(int *)((int)this + 0x484) - *(int *)((int)this + 0x488);
    *(int *)((int)this + 0x434) = *(int *)((int)this + 0x434) + 1;
    if (iVar4 <= *(int *)((int)this + 0x434)) {
      *(int *)((int)this + 0x434) = iVar4;
    }
    *(undefined1 *)((int)this + 0x429) = 0;
    (**(code **)(*(int *)this + 0x294))();
  }
  *(undefined2 *)((int)this + 0x48e) = 0;
  (**(code **)(*(int *)this + 0x294))();
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0058da90(int *param_1)

{
  *(undefined2 *)((int)param_1 + 0x48e) = 0;
                    // WARNING: Could not recover jumptable at 0x0058da9b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x294))();
  return;
}


void __fastcall FUN_0058dab0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *in_stack_ffffff90;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca9c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
  if (*(int **)(param_1 + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(param_1 + 0x3e4) + 8))();
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_8 = 1;
  FUN_004024e0(&stack0xffffff90,local_2c);
  FUN_0055d140(&local_3c,*(int *)(param_1 + 0x438) - 2,in_stack_ffffff90);
  uVar5 = (local_38 - local_3c) / 0x18;
  iVar2 = *(int *)(param_1 + 0x2a4) + -2;
  *(uint *)(param_1 + 0x484) = uVar5;
  uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  *(uint *)(param_1 + 0x488) = uVar3;
  *(bool *)(param_1 + 0x48c) = 0 < *(int *)(param_1 + 0x434);
  if (uVar3 < uVar5) {
    uVar5 = uVar5 - *(int *)(param_1 + 0x434);
    bVar1 = uVar5 != uVar3 && -1 < (int)(uVar5 - uVar3);
  }
  else {
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x48d) = bVar1;
  FUN_004025a0(&local_3c);
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
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


void __thiscall FUN_0058dc10(void *this,float param_1,float param_2)

{
  undefined1 uVar1;
  
  if ((((*(char *)((int)this + 0x48c) == '\0') ||
       (param_1 < (float)(*(int *)((int)this + 0x438) + 1))) ||
      ((float)(*(int *)((int)this + 0x438) + 0xd) < param_1)) ||
     ((param_2 < 0.0 || (12.0 < param_2)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)this + 0x48e) = uVar1;
  if (((*(char *)((int)this + 0x48d) != '\0') &&
      ((float)(*(int *)((int)this + 0x438) + 1) <= param_1)) &&
     ((param_1 <= (float)(*(int *)((int)this + 0x438) + 0xd) &&
      (((float)(*(int *)((int)this + 0x2a4) + -0xc) <= param_2 &&
       (param_2 <= (float)*(int *)((int)this + 0x2a4))))))) {
    *(undefined1 *)((int)this + 0x48f) = 1;
    return;
  }
  *(undefined1 *)((int)this + 0x48f) = 0;
  return;
}


Node * __thiscall FUN_0058dce0(void *this,byte param_1)

{
  FUN_0058dd10(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0058dd10(Node *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_WeaponTubes::vftable;
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x428);
  if (*(int *)(param_1 + 0x42c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + uVar6 * 4) = 0;
      }
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x428);
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x42c) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x42c) = iVar5;
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x434);
  if (*(int *)(param_1 + 0x438) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x434) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(param_1 + 0x434);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x438) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x438) = iVar5;
  pvVar2 = *(void **)(param_1 + 0x434);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x43c) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0058deba;
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x428);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)(param_1 + 0x430) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
LAB_0058deba:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
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


void __fastcall FUN_0058ded0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x428);
  if (*(int *)(param_1 + 0x42c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x428);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x42c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x42c) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x434);
  if (*(int *)(param_1 + 0x438) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x434) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x434);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x438) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x438) = iVar2;
  return;
}


void __fastcall FUN_0058df80(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  Ref *pRVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  Ref *pRVar9;
  Color3B *pCVar10;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  uint uVar14;
  void *pvVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  uint3 uVar18;
  undefined1 *puVar19;
  char *pcVar20;
  uchar uVar21;
  void *in_stack_ffffff8c;
  uchar uVar22;
  uchar uVar23;
  Ref *local_40;
  int local_3c;
  int *local_38;
  int local_34;
  Ref *local_30;
  int local_2c;
  int *local_28;
  Color3B local_22 [3];
  Color3B local_1f [3];
  Color3B local_1c [3];
  Color3B local_19 [3];
  Color3B local_16 [3];
  Color3B local_13 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca9f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = param_1;
  (**(code **)(*param_1 + 0x290))();
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
  if (((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x10))(), cVar3 != '\0')) &&
     (cVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) + 0x1c)
              )(), cVar3 != '\0')) {
    piVar1 = param_1 + 0x10a;
    local_2c = 0xf;
    local_34 = 0;
    local_3c = 0x3c;
    piVar12 = param_1;
    do {
      if (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1b4) + -1 == local_34) {
        pcVar20 = "%c_WeaponTube_Selected.png";
      }
      else if (*(float *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) +
                                  8) + 0x104) <= (float)local_34) {
        pcVar20 = "%c_WeaponTube_None.png";
      }
      else {
        pcVar20 = "%c_WeaponTube_NotSelected.png";
      }
      FUN_00591e00(&stack0xffffff8c,pcVar20);
      piVar4 = (int *)FUN_00591910(in_stack_ffffff8c);
      (**(code **)(*piVar4 + 0x48))();
      (**(code **)(*piVar12 + 0x10c))();
      puVar2 = (undefined4 *)param_1[0x10b];
      if ((undefined4 *)param_1[0x10c] == puVar2) {
        local_38 = piVar4;
        FUN_00414080(piVar1,puVar2,&local_38);
      }
      else {
        *puVar2 = piVar4;
        param_1[0x10b] = param_1[0x10b] + 4;
      }
      iVar11 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
      local_38 = *(int **)(local_3c + iVar11);
      if ((float)local_34 < *(float *)(*(int *)(iVar11 + 8) + 0x104)) {
        if (local_38 == (int *)0x0) {
LAB_0058e17a:
          puVar19 = &stack0xffffff8c;
          FUN_00591e00(&stack0xffffff8c,"%c_WeaponTube_NoWeapon.png");
          local_30 = (Ref *)FUN_00591910(in_stack_ffffff8c);
        }
        else {
          iVar11 = *(int *)(local_38[0x11] + 0x70);
          if (iVar11 == 3) {
            pcVar20 = "%c_WeaponTube_Torpedo.png";
          }
          else if (iVar11 == 5) {
            pcVar20 = "%c_WeaponTube_Mine.png";
          }
          else {
            if (iVar11 != 4) goto LAB_0058e17a;
            pcVar20 = "%c_WeaponTube_Probe.png";
          }
          puVar19 = &stack0xffffff8c;
          FUN_00591e00(puVar19,pcVar20);
          local_30 = (Ref *)FUN_00591910(in_stack_ffffff8c);
        }
        iVar11 = local_2c + -0xd;
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*piVar12 + 0x10c))();
        puVar2 = (undefined4 *)param_1[0x10b];
        if ((undefined4 *)param_1[0x10c] == puVar2) {
          FUN_00414080(piVar1,puVar2,&local_30);
        }
        else {
          *puVar2 = local_30;
          param_1[0x10b] = param_1[0x10b] + 4;
        }
        puVar17 = &stack0xffffff80;
        FUN_00591e00(&stack0xffffff80,"`%c%d");
        pRVar5 = FUN_0055cb00((Node)0x0,puVar19);
        local_8 = 0;
        local_30 = pRVar5;
        (**(code **)(*(int *)pRVar5 + 0xa0))();
        local_8 = 0xffffffff;
        in_stack_ffffff8c = (void *)(float)local_2c;
        (**(code **)(*(int *)pRVar5 + 0x48))();
        piVar12 = local_28;
        (**(code **)(*local_28 + 0x10c))();
        puVar2 = (undefined4 *)piVar12[0x10e];
        if ((undefined4 *)piVar12[0x10f] == puVar2) {
          FUN_00414080(piVar12 + 0x10d,puVar2,&local_30);
        }
        else {
          *puVar2 = local_30;
          piVar12[0x10e] = piVar12[0x10e] + 4;
        }
        piVar4 = local_38;
        uVar18 = (uint3)((uint)puVar17 >> 8);
        if ((local_38 == (int *)0x0) || ((char)local_38[0xef] == '\0')) {
          pvVar15 = (void *)((uint)uVar18 << 8);
          uVar16 = 0x58e320;
          FUN_00402690(&stack0xffffff70,"WeaponGlyphs_Power_False.png",0x1c);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        else {
          pvVar15 = (void *)((uint)uVar18 << 8);
          uVar16 = 0x58e2f2;
          FUN_00402690(&stack0xffffff70,"WeaponGlyphs_Power_True.png",0x1b);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        (**(code **)(*(int *)local_30 + 0x48))();
        pRVar5 = local_30;
        (**(code **)(*local_28 + 0x10c))();
        puVar2 = (undefined4 *)param_1[0x10b];
        if ((undefined4 *)param_1[0x10c] == puVar2) {
          FUN_00414080(piVar1,puVar2,&local_30);
        }
        else {
          *puVar2 = local_30;
          param_1[0x10b] = param_1[0x10b] + 4;
        }
        uVar18 = (uint3)((uint)uVar16 >> 8);
        if ((piVar4 == (int *)0x0) || ((char)piVar4[0xff] == '\0')) {
          pvVar15 = (void *)((uint)uVar18 << 8);
          uVar16 = 0x58e3d6;
          FUN_00402690(&stack0xffffff64,"WeaponGlyphs_Linked_False.png",0x1d);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        else {
          pvVar15 = (void *)((uint)uVar18 << 8);
          uVar16 = 0x58e3a8;
          FUN_00402690(&stack0xffffff64,"WeaponGlyphs_Linked_True.png",0x1c);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*local_28 + 0x10c))();
        puVar2 = (undefined4 *)param_1[0x10b];
        if ((undefined4 *)param_1[0x10c] == puVar2) {
          FUN_00414080(piVar1,puVar2,&local_30);
        }
        else {
          *puVar2 = local_30;
          param_1[0x10b] = param_1[0x10b] + 4;
        }
        uVar18 = (uint3)((uint)uVar16 >> 8);
        if ((piVar4 == (int *)0x0) || (*(char *)((int)piVar4 + 0x3c5) == '\0')) {
          pvVar15 = (void *)((uint)uVar18 << 8);
          uVar14 = 0x58e492;
          FUN_00402690(&stack0xffffff58,"WeaponGlyphs_Armed_False.png",0x1c);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        else {
          pvVar15 = (void *)((uint)uVar18 << 8);
          uVar14 = 0x58e464;
          FUN_00402690(&stack0xffffff58,"WeaponGlyphs_Armed_True.png",0x1b);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*local_28 + 0x10c))();
        puVar2 = (undefined4 *)param_1[0x10b];
        if ((undefined4 *)param_1[0x10c] == puVar2) {
          FUN_00414080(piVar1,puVar2,&local_30);
        }
        else {
          *puVar2 = local_30;
          param_1[0x10b] = param_1[0x10b] + 4;
        }
        uVar18 = (uint3)(uVar14 >> 8);
        if (piVar4 == (int *)0x0) {
          pvVar15 = (void *)((uint)uVar18 << 8);
          FUN_00402690(&stack0xffffff4c,"WeaponGlyphs_Detected_False.png",0x1f);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
        else {
          iVar8 = piVar4[0xe3];
          if (iVar8 == 0) {
LAB_0058e565:
            pvVar15 = (void *)((uint)uVar18 << 8);
          }
          else {
            if (*(int *)(iVar8 + 0x30) == 0) {
              pvVar15 = (void *)((uint)uVar18 << 8);
LAB_0058e51e:
              FUN_00402690(&stack0xffffff4c,"WeaponGlyphs_Detected_True.png",0x1e);
              local_30 = (Ref *)FUN_00591910(pvVar15);
              goto LAB_0058e5bf;
            }
            if (*(int *)(iVar8 + 0x30) != 1) goto LAB_0058e565;
            uVar6 = FUN_0050c850(piVar4,iVar8 + -8);
            pvVar15 = (void *)(uVar14 & 0xffffff00);
            if ((char)uVar6 != '\0') goto LAB_0058e51e;
          }
          FUN_00402690(&stack0xffffff4c,"WeaponGlyphs_Detected_False.png",0x1f);
          local_30 = (Ref *)FUN_00591910(pvVar15);
        }
LAB_0058e5bf:
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*local_28 + 0x10c))();
        puVar2 = (undefined4 *)param_1[0x10b];
        if ((undefined4 *)param_1[0x10c] == puVar2) {
          FUN_00414080(piVar1,puVar2,&local_30);
        }
        else {
          *puVar2 = local_30;
          param_1[0x10b] = param_1[0x10b] + 4;
        }
        piVar12 = local_28;
        if (piVar4 != (int *)0x0) {
          iVar8 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
          iVar7 = FUN_00437c60(*(int **)(iVar8 + 0xc));
          iVar8 = FUN_0051c650(local_38,(int)(((float)iVar7 / 100.0) * 0.5 *
                                             *(float *)(*(int *)(*(int *)(*(int *)(iVar8 + 4) + 0x20
                                                                         ) + 8) + 0x108)));
          local_38 = (int *)(float)iVar8;
          in_stack_ffffff8c = (void *)((uint)in_stack_ffffff8c & 0xffffff00);
          FUN_00402690(&stack0xffffff8c,"WeaponGlyphs_Battery.png",0x18);
          pRVar9 = (Ref *)FUN_00591910(in_stack_ffffff8c);
          local_30 = pRVar9;
          (**(code **)(*(int *)pRVar9 + 0x48))();
          (**(code **)(*local_28 + 0x10c))();
          puVar2 = (undefined4 *)param_1[0x10b];
          local_40 = pRVar9;
          if ((undefined4 *)param_1[0x10c] == puVar2) {
            FUN_00414080(piVar1,puVar2,&local_40);
          }
          else {
            *puVar2 = pRVar9;
            param_1[0x10b] = param_1[0x10b] + 4;
          }
          if ((float)local_38 == 0.0) {
            (**(code **)(*(int *)pRVar9 + 0xb4))();
          }
          else {
            if (20.0 <= (float)local_38) {
              if (80.0 <= (float)local_38) {
                uVar23 = '^';
                uVar22 = 0xa1;
                uVar21 = 'X';
                pCVar10 = local_19;
              }
              else {
                uVar23 = '\0';
                uVar22 = 0xff;
                uVar21 = 0xff;
                pCVar10 = local_16;
              }
            }
            else {
              uVar23 = '\0';
              uVar22 = '\0';
              uVar21 = 0x80;
              pCVar10 = local_13;
            }
            iVar8 = *(int *)pRVar9;
            cocos2d::Color3B::Color3B(pCVar10,uVar21,uVar22,uVar23);
            (**(code **)(iVar8 + 0x25c))();
          }
          pvVar15 = (void *)((uint)pRVar5 & 0xffffff00);
          FUN_00402690(&stack0xffffff7c,"white.png",9);
          pRVar5 = (Ref *)FUN_00591910(pvVar15);
          in_stack_ffffff8c = (void *)(float)iVar11;
          (**(code **)(*(int *)pRVar5 + 0x48))();
          (**(code **)(*(int *)pRVar5 + 0x24))();
          iVar11 = *(int *)pRVar5;
          fVar13 = (float10)(**(code **)(iVar11 + 0x74))();
          local_40 = (Ref *)(float)fVar13;
          (**(code **)(iVar11 + 0x2c))();
          if (20.0 <= (float)local_38) {
            if (80.0 <= (float)local_38) {
              uVar23 = '^';
              uVar22 = 0xa1;
              uVar21 = 'X';
              pCVar10 = local_22;
            }
            else {
              uVar23 = '\0';
              uVar22 = 0xff;
              uVar21 = 0xff;
              pCVar10 = local_1f;
            }
          }
          else {
            uVar23 = '\0';
            uVar22 = '\0';
            uVar21 = 0x80;
            pCVar10 = local_1c;
          }
          iVar11 = *(int *)pRVar5;
          cocos2d::Color3B::Color3B(pCVar10,uVar21,uVar22,uVar23);
          (**(code **)(iVar11 + 0x25c))();
          (**(code **)(*local_28 + 0x10c))();
          puVar2 = (undefined4 *)param_1[0x10b];
          local_40 = pRVar5;
          if ((undefined4 *)param_1[0x10c] == puVar2) {
            FUN_00414080(piVar1,puVar2,&local_40);
            piVar12 = local_28;
          }
          else {
            *puVar2 = pRVar5;
            param_1[0x10b] = param_1[0x10b] + 4;
            piVar12 = local_28;
          }
        }
      }
      local_34 = local_34 + 1;
      local_2c = local_2c + 0x1e;
      local_3c = local_3c + 4;
    } while (local_3c < 0x5c);
    *(undefined1 *)piVar12[0xa2] = 1;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0058e8c0(int *param_1)

{
  if (DAT_0065b3d4 != 0) {
    (**(code **)(*param_1 + 0x294))();
  }
  return;
}


void __thiscall FUN_0058e8e0(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  byte *in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7329;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
      (iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40), iVar4 != 0)) &&
     (piVar1 = *(int **)(iVar4 + 0x20), piVar1 != (int *)0x0)) {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 != '\0') {
      iVar4 = (int)(param_1 / 30.0);
      if ((iVar4 < 0) ||
         (iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20),
         *(float *)(*(int *)(iVar2 + 8) + 0x104) <= (float)iVar4)) {
        if ((float)iVar4 <
            *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) + 8)
                      + 0x104)) {
          FUN_005542e0(*(int *)((int)this + 0x278));
          ExceptionList = local_10;
          return;
        }
        uVar8 = 0xf;
        pcVar7 = "No torpedo tube";
      }
      else {
        iVar4 = *(int *)(iVar2 + 0x3c + iVar4 * 4);
        if (iVar4 != 0) {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffffc4,
                     (&PTR_s_Player_005e0df4)[*(int *)(*(int *)(iVar4 + 0x44) + 0x70)]);
          FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffc4);
          ExceptionList = local_10;
          return;
        }
        uVar8 = 0x12;
        pcVar7 = "Empty torpedo tube";
      }
      in_stack_ffffffc4 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
      FUN_00402690(&stack0xffffffc4,pcVar7,uVar8);
      FUN_005541f0(*(void **)((int)this + 0x278),in_stack_ffffffc4);
      ExceptionList = local_10;
      return;
    }
  }
  iVar4 = *(int *)((int)this + 0x278);
  pbVar6 = (byte *)(iVar4 + 0xfc);
  pbVar5 = pbVar6;
  if (0xf < *(uint *)(iVar4 + 0x110)) {
    pbVar5 = *(byte **)pbVar6;
  }
  uVar8 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0x10c),(byte *)&PTR_005ce008,0);
  if ((char)uVar8 == '\0') {
    *(undefined4 *)(iVar4 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar4 + 0x110)) {
      pbVar6 = *(byte **)pbVar6;
    }
    *pbVar6 = 0;
  }
  ExceptionList = local_10;
  return;
}


void FUN_0058eac0(float param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7289;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,DAT_0065500c ^ (uint)&stack0xfffffffc);
    if (((cVar2 != '\0') && (iVar3 = (int)(param_1 / 30.0), -1 < iVar3)) &&
       ((float)iVar3 <
        *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) + 8) +
                  0x104))) {
      if (*(char *)(DAT_0065b444 + 0x71) != '\0') {
        FUN_004122b0();
        FUN_0041c620(0x19,0);
        ExceptionList = local_10;
        return;
      }
      FUN_004e8580(*(int *)(DAT_0065b5cc + 0xd0),iVar3 + 1);
    }
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0058ebc0(void)

{
  FileUtils **ppFVar1;
  void *pvVar2;
  undefined1 auStack_234 [4];
  void *local_230 [5];
  uint local_21c;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_234;
  GetCurrentDirectoryW(0x104,local_218);
  ppFVar1 = (FileUtils **)FUN_00591e00((undefined1 *)local_230,&DAT_0062dd90);
  if (ppFVar1 != &this_006558b8) {
    FUN_00401b20((int *)&this_006558b8);
    this_006558b8 = *ppFVar1;
    pFRam006558bc = ppFVar1[1];
    pFRam006558c0 = ppFVar1[2];
    pFRam006558c4 = ppFVar1[3];
    _DAT_006558c8 = *(undefined8 *)(ppFVar1 + 4);
    ppFVar1[4] = (FileUtils *)0x0;
    ppFVar1[5] = (FileUtils *)0xf;
    *(undefined1 *)ppFVar1 = 0;
  }
  if (0xf < local_21c) {
    pvVar2 = local_230[0];
    if (0xfff < local_21c + 1) {
      pvVar2 = *(void **)((int)local_230[0] + -4);
      if (0x1f < (uint)((int)local_230[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  __security_check_cookie(local_c ^ (uint)auStack_234);
  return;
}


undefined1 * __thiscall FUN_0058ec90(void *this,undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005caa41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  FUN_00402690(this,"assets\\",7);
  ppuVar1 = &param_1;
  if (0xf < in_stack_00000018) {
    ppuVar1 = (undefined4 **)param_1;
  }
  FUN_00403640(this,ppuVar1,in_stack_00000014);
  if (0xf < in_stack_00000018) {
    puVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar2 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar2);
  }
  ExceptionList = local_10;
  return this;
}


undefined1 * __thiscall FUN_0058ed50(void *this,undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005caa41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  ppuVar1 = &param_1;
  if (0xf < in_stack_00000018) {
    ppuVar1 = (undefined4 **)param_1;
  }
  FUN_00403640(this,ppuVar1,in_stack_00000014);
  if (0xf < in_stack_00000018) {
    puVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar2 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar2);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058ee00(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 **ppuVar1;
  char ****ppppcVar2;
  FILE *_File;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffff4c;
  int local_74;
  void *local_54 [5];
  uint local_40;
  char ***local_3c;
  char **ppcStack_38;
  char **ppcStack_34;
  char **ppcStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005caa73;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_2c = 0xf00000000;
  local_3c = (char ***)((uint)local_3c & 0xffffff00);
  local_14 = 1;
  if (param_2 == '\0') {
    ppuVar1 = &param_3;
    if (0xf < in_stack_00000018) {
      ppuVar1 = (undefined4 **)param_3;
    }
    puStack_20 = &stack0xfffffffc;
    FUN_00402690(&local_3c,ppuVar1,in_stack_00000014);
  }
  else {
    FUN_004024e0(&stack0xffffff4c,&param_3);
    ppppcVar2 = (char ****)FUN_0058ed50(local_54,in_stack_ffffff4c);
    if (&local_3c != ppppcVar2) {
      FUN_00401b20((int *)&local_3c);
      local_3c = *ppppcVar2;
      ppcStack_38 = (char **)ppppcVar2[1];
      ppcStack_34 = (char **)ppppcVar2[2];
      ppcStack_30 = (char **)ppppcVar2[3];
      local_2c = *(undefined8 *)(ppppcVar2 + 4);
      ppppcVar2[4] = (char ***)0x0;
      ppppcVar2[5] = (char ***)0xf;
      *(undefined1 *)ppppcVar2 = 0;
    }
    if (0xf < local_40) {
      pvVar4 = local_54[0];
      if (0xfff < local_40 + 1) {
        pvVar4 = *(void **)((int)local_54[0] + -4);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar4);
    }
  }
  ppppcVar2 = &local_3c;
  if (0xf < local_2c._4_4_) {
    ppppcVar2 = (char ****)local_3c;
  }
  _File = fopen((char *)ppppcVar2,(char *)&_Mode_0060f660);
  if (_File != (FILE *)0x0) {
    _fileno(_File);
    iVar3 = fstat64i32();
    if (iVar3 != -1) {
      pvVar4 = malloc(local_74 + 1);
      *(undefined1 *)(local_74 + (int)pvVar4) = 0;
      *param_1 = 0;
      do {
        iVar3 = getc(_File);
        if ((char)iVar3 == -1) break;
        *(char *)((int)pvVar4 + *param_1) = (char)iVar3;
        *param_1 = *param_1 + 1;
      } while (*param_1 != local_74);
      fclose(_File);
      *(undefined1 *)(*param_1 + (int)pvVar4) = 0;
      goto LAB_0058ef99;
    }
    fclose(_File);
  }
  *param_1 = -1;
LAB_0058ef99:
  if (0xf < local_2c._4_4_) {
    ppppcVar2 = (char ****)local_3c;
    if (0xfff < local_2c._4_4_ + 1) {
      ppppcVar2 = (char ****)local_3c[-1];
      if ((char *)0x1f < (char *)((int)local_3c + (-4 - (int)ppppcVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppcVar2);
  }
  local_2c = 0xf00000000;
  local_3c = (char ***)((uint)local_3c & 0xffffff00);
  if (0xf < in_stack_00000018) {
    puVar5 = param_3;
    if (0xfff < in_stack_00000018 + 1) {
      puVar5 = (undefined4 *)param_3[-1];
      if (0x1f < (uint)((int)param_3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0058f040(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  void *pvVar6;
  void *local_240 [5];
  uint local_22c;
  wchar_t local_228 [258];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005caac2;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_14 = 0;
  piVar4 = (int *)FUN_00591e00((undefined1 *)local_240,"%s\\ObjectsInSpace\\");
  if (param_1 != piVar4) {
    FUN_00401b20(param_1);
    iVar1 = piVar4[1];
    iVar2 = piVar4[2];
    iVar3 = piVar4[3];
    *param_1 = *piVar4;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar4 + 4);
    piVar4[4] = 0;
    piVar4[5] = 0xf;
    *(undefined1 *)piVar4 = 0;
  }
  if (0xf < local_22c) {
    pvVar6 = local_240[0];
    if ((0xfff < local_22c + 1) &&
       (pvVar6 = *(void **)((int)local_240[0] + -4),
       0x1f < (uint)((int)local_240[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  piVar4 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar4 = (int *)*param_1;
  }
  mbstowcs(local_228,(char *)piVar4,0x100);
  DVar5 = GetFileAttributesW(local_228);
  if ((DVar5 == 0xffffffff) || ((DVar5 & 0x10) == 0)) {
    if (0xf < (uint)param_1[5]) {
      param_1 = (int *)*param_1;
    }
    mbstowcs(local_228,(char *)param_1,0x100);
    CreateDirectoryW(local_228,(LPSECURITY_ATTRIBUTES)0x0);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0058f1d0(int *param_1)

{
  int *_Source;
  DWORD DVar1;
  wchar_t local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cab12;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0058f040(param_1);
  local_8 = 0;
  FUN_00403640(param_1,"mods\\",5);
  _Source = param_1;
  if (0xf < (uint)param_1[5]) {
    _Source = (int *)*param_1;
  }
  mbstowcs(local_214,(char *)_Source,0x100);
  DVar1 = GetFileAttributesW(local_214);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    if (0xf < (uint)param_1[5]) {
      param_1 = (int *)*param_1;
    }
    mbstowcs(local_214,(char *)param_1,0x100);
    CreateDirectoryW(local_214,(LPSECURITY_ATTRIBUTES)0x0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0058f2c0(int *param_1)

{
  int *_Source;
  DWORD DVar1;
  wchar_t local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cab62;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0058f040(param_1);
  local_8 = 0;
  FUN_00403640(param_1,"saves\\",6);
  _Source = param_1;
  if (0xf < (uint)param_1[5]) {
    _Source = (int *)*param_1;
  }
  mbstowcs(local_214,(char *)_Source,0x100);
  DVar1 = GetFileAttributesW(local_214);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    if (0xf < (uint)param_1[5]) {
      param_1 = (int *)*param_1;
    }
    mbstowcs(local_214,(char *)param_1,0x100);
    CreateDirectoryW(local_214,(LPSECURITY_ATTRIBUTES)0x0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0058f3b0(void *this,void *param_1)

{
  int *this_00;
  bool bVar1;
  HANDLE hFindFile;
  BOOL BVar2;
  void *pvVar3;
  uint in_stack_00000018;
  undefined4 *in_stack_fffffd34;
  undefined1 auStack_2b4 [8];
  undefined4 uStack_2ac;
  _WIN32_FIND_DATAW local_27c;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cabcd;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  hFindFile = FindFirstFileW(L".\\assets\\*",&local_27c);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_27c.dwFileAttributes & 0x10) == 0) {
        uStack_2ac = 0x58f462;
        FUN_00591e00((undefined1 *)local_2c,&DAT_0062dd90);
        local_8._0_1_ = 2;
        FUN_004024e0(auStack_2b4,&param_1);
        local_8._0_1_ = 3;
        FUN_004024e0(&stack0xfffffd34,local_2c);
        local_8 = CONCAT31(local_8._1_3_,2);
        bVar1 = FUN_005929b0(in_stack_fffffd34);
        if (bVar1) {
          this_00 = *(int **)((int)this + 4);
          if (*(int **)((int)this + 8) == this_00) {
            FUN_00403840(this,this_00,local_2c);
          }
          else {
            FUN_004024e0(this_00,local_2c);
            *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        if (0xf < local_18) {
          pvVar3 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar3 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) goto LAB_0058f529;
          FUN_005adb3f(pvVar3);
        }
      }
      BVar2 = FindNextFileW(hFindFile,&local_27c);
    } while (BVar2 != 0);
  }
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar3 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3)))) {
LAB_0058f529:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


float __fastcall FUN_0058f560(float param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cac09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cocos2d::Vec3::operator*((Vec3 *)&stack0x00000004,param_1);
  cocos2d::Vec3::~Vec3((Vec3 *)&stack0x00000004);
  ExceptionList = local_10;
  return param_1;
}


undefined4 * __fastcall FUN_0058f5d0(undefined4 *param_1)

{
  int *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cac85;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = param_1 + 1;
  *param_1 = Pather::vftable;
  *piVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_8 = 0;
  iVar5 = 0x20;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0x20;
  local_14 = param_1;
  if ((uint)(param_1[3] - *piVar6 >> 2) < 0x20) {
    FUN_005906a0(piVar6,0x20);
    iVar5 = param_1[5];
  }
  uVar7 = 0;
  if (iVar5 != 0) {
    do {
      local_18 = (undefined4 *)FUN_005adb0f(0x18);
      *local_18 = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      *(undefined8 *)(local_18 + 4) = 0;
      puVar1 = (undefined4 *)param_1[2];
      if ((undefined4 *)param_1[3] == puVar1) {
        FUN_004141e0(piVar6,puVar1,&local_18);
      }
      else {
        *puVar1 = local_18;
        param_1[2] = param_1[2] + 4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[5]);
  }
  puVar2 = local_14;
  local_8 = 1;
  piVar6 = local_14 + 6;
  _eh_vector_constructor_iterator_(piVar6,0xc,4,FUN_0042b080,FUN_00412930);
  local_8._0_1_ = 2;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar1 = puVar2 + 0x19;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *puVar1 = 0;
  puVar2[0x1a] = 0;
  local_18 = puVar1;
  uVar4 = FUN_00590860();
  puVar3 = local_14;
  *puVar1 = uVar4;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  local_14[0x1d] = 0;
  local_14[0x1e] = 0;
  local_14[0x1f] = 0;
  local_14[0x20] = 0;
  this = local_14 + 0x21;
  *this = 0;
  local_14[0x22] = 0;
  local_14[0x23] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar5 = 0x400;
  *(undefined1 *)(local_14 + 0x24) = 0;
  local_14[0x25] = 0x400;
  if ((uint)(local_14[0x23] - *this >> 2) < 0x400) {
    FUN_005906a0(this,0x400);
    iVar5 = puVar3[0x25];
  }
  uVar7 = 0;
  if (iVar5 != 0) {
    do {
      local_18 = (undefined4 *)FUN_005adb0f(0x18);
      *local_18 = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      *(undefined8 *)(local_18 + 4) = 0;
      puVar1 = (undefined4 *)puVar3[0x22];
      if ((undefined4 *)puVar3[0x23] == puVar1) {
        FUN_004141e0(this,puVar1,&local_18);
      }
      else {
        *puVar1 = local_18;
        puVar3[0x22] = puVar3[0x22] + 4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)puVar3[0x25]);
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  uVar7 = 0;
  do {
    if ((uint)(piVar6[2] - *piVar6 >> 2) < 0x10) {
      FUN_005906a0(piVar6,0x10);
    }
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 3;
  } while (uVar7 < 4);
  ExceptionList = local_10;
  return local_14;
}


undefined4 * __thiscall FUN_0058f800(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005caca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Pather::vftable;
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_14 = this;
  FUN_00590570((int)this + 0x50);
  FUN_00590880((uint *)((int)this + 0x84));
  pvVar1 = *(void **)((int)this + 0x78);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (uint)((*(int *)((int)this + 0x80) - (int)pvVar1 >> 2) * 4)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  local_8._0_1_ = 1;
  FUN_00590570((int)this + 0x50);
  free(*(void **)((int)this + 0x70));
  FUN_00590770((void *)((int)this + 100),&local_14,(int *)**(int **)((int)this + 100),
               *(int **)((int)this + 100));
  FUN_005adb3f(*(void **)((int)this + 100));
  local_8 = (uint)local_8._1_3_ << 8;
  _eh_vector_destructor_iterator_((void *)((int)this + 0x18),0xc,4,FUN_00412930);
  FUN_00590880((uint *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0058f950(void *param_1)

{
  void *_Src;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cad08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  do {
    if (*(int *)((int)param_1 + 0x4c) == 0) {
      iVar4 = 0;
      piVar1 = (int *)((int)param_1 + 0x18);
      do {
        if (*piVar1 != piVar1[1]) {
          puVar3 = (undefined4 *)((int)param_1 + (iVar4 + 2) * 0xc);
          *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)*puVar3;
          _Src = (void *)((int)*puVar3 + 4);
          memmove((void *)*puVar3,_Src,puVar3[1] - (int)_Src);
          puVar3[1] = puVar3[1] + -4;
          iVar4 = *(int *)((int)param_1 + 0x4c);
          goto LAB_0058f9d0;
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 3;
      } while (iVar4 < 4);
      iVar4 = 0;
LAB_0058f9d0:
      *(int *)((int)param_1 + 0x4c) = iVar4;
      if (iVar4 == 0) {
        ExceptionList = local_10;
        return;
      }
      FUN_00590570((int)param_1 + 0x50);
      piVar1 = *(int **)((int)param_1 + 0x4c);
      local_20 = (undefined4 *)piVar1[2];
      local_14 = *piVar1;
      local_1c = piVar1[3];
      local_18 = piVar1[1];
      puVar3 = DAT_0065c280;
      if (*(int *)((int)param_1 + 0x70) == 0) {
        if (DAT_0065c280 == (undefined4 *)0x0) {
          local_24 = (undefined4 *)FUN_005adb0f(0x98);
          local_8 = 0;
          DAT_0065c280 = FUN_0058f5d0(local_24);
          local_8 = 0xffffffff;
        }
        FUN_00591070("DETAIL","Allocating %lu space for states");
        if (DAT_0065c280 == (undefined4 *)0x0) {
          local_28 = (undefined4 *)FUN_005adb0f(0x98);
          local_8 = 1;
          DAT_0065c280 = FUN_0058f5d0(local_28);
          local_8 = 0xffffffff;
        }
        uVar2 = FUN_005ae4ea(-(uint)((int)((ulonglong)(uint)DAT_0065c280[0x1d] * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)(uint)DAT_0065c280[0x1d] * 4));
        puVar3 = DAT_0065c280;
        *(undefined4 *)((int)param_1 + 0x70) = uVar2;
        iVar4 = 0;
        while( true ) {
          if (puVar3 == (undefined4 *)0x0) {
            local_2c = (undefined4 *)FUN_005adb0f(0x98);
            local_8 = 2;
            puVar3 = FUN_0058f5d0(local_2c);
            local_8 = 0xffffffff;
            DAT_0065c280 = puVar3;
          }
          if ((int)puVar3[0x1d] <= iVar4) break;
          *(undefined4 *)(*(int *)((int)param_1 + 0x70) + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        }
      }
      iVar4 = local_14;
      *(int *)((int)param_1 + 0x54) = local_18;
      *(int *)((int)param_1 + 0x58) = local_1c;
      *(int *)((int)param_1 + 0x50) = local_14;
      *(undefined4 **)((int)param_1 + 0x5c) = local_20;
      if (puVar3 == (undefined4 *)0x0) {
        local_30 = (undefined4 *)FUN_005adb0f(0x98);
        local_8 = 3;
        puVar3 = FUN_0058f5d0(local_30);
        local_8 = 0xffffffff;
        DAT_0065c280 = puVar3;
      }
      local_20 = FUN_00590920(puVar3 + 0x21);
      local_20[1] = iVar4;
      local_20[5] = 1;
      *(undefined4 **)(*(int *)((int)param_1 + 0x70) + iVar4 * 4) = local_20;
      FUN_00590a10((void *)((int)param_1 + 100),&local_34,*(int **)((int)param_1 + 100),
                   (int *)&local_20,local_30);
      *(undefined4 *)((int)param_1 + 0x60) = 0;
      FUN_00591070("DETAIL","Pather: taking next request off the queue, it\'s for %s.");
      if (*(int *)((int)param_1 + 0x4c) == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    puVar3 = (undefined4 *)
             FUN_0058fd90(param_1,(int *)((int)param_1 + 0x50),1000 - *(int *)((int)param_1 + 0x48))
    ;
    if (puVar3 == (undefined4 *)0x0) {
      if (*(int *)((int)param_1 + 0x68) == 0) {
        FUN_00591070("DETAIL","Pather: No valid path, sending failed() on to %s");
        iVar4 = *(int *)(*(int *)((int)param_1 + 0x4c) + 0x14);
        FUN_00591070(&DAT_005cdc70,"%s: path failed.");
        *(undefined4 *)(iVar4 + 0x2f0) = 0;
        *(undefined1 *)(iVar4 + 0x2ec) = 0;
        goto LAB_0058fc5c;
      }
    }
    else {
      FUN_00591070("DETAIL","Pather: Finished a path, passing that on to %s");
      FUN_005181f0(*(void **)(*(int *)((int)param_1 + 0x4c) + 0x14),puVar3);
LAB_0058fc5c:
      *(undefined4 *)(*(int *)((int)param_1 + 0x4c) + 0x14) = 0;
      *(undefined4 *)((int)param_1 + 0x4c) = 0;
    }
    if (999 < *(uint *)((int)param_1 + 0x48)) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


void __fastcall FUN_0058fc90(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cad42;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar3 = 0;
    puVar2 = DAT_0065c280;
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_005adb0f(0x98);
        local_8 = 0;
        puVar2 = FUN_0058f5d0(puVar2);
        local_8 = 0xffffffff;
        DAT_0065c280 = puVar2;
      }
      if ((int)puVar2[0x1d] <= iVar3) break;
      pvVar1 = *(void **)(*(int *)(param_1 + 0x70) + iVar3 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_005adb3f(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x70) + iVar3 * 4) = 0;
        puVar2 = DAT_0065c280;
      }
      iVar3 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_00590570(param_1 + 0x50);
  *(int *)(param_1 + 0x74) =
       *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xac) -
       *(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xa8) >> 2;
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_0058fd90(void *this,int *param_1,uint param_2)

{
  char cVar1;
  float *pfVar2;
  bool bVar3;
  int *piVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int *local_34;
  float local_30;
  uint local_2c;
  int *local_28;
  float local_24;
  void *local_20;
  uint local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cad84;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = this;
  FUN_00591070("DETAIL","Pather: Calculating path.");
  if (*param_1 == param_1[1]) {
    ExceptionList = local_10;
    return *(int *)(*(int *)param_1[5] + 0x10);
  }
  local_28 = param_1 + 5;
  local_2c = 0;
  iVar7 = param_1[6];
  while (iVar7 != 0) {
    piVar4 = *(int **)param_1[5];
    iVar7 = piVar4[4];
    param_1[4] = iVar7;
    if (*(int *)(iVar7 + 4) == param_1[1]) {
      *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + local_2c;
      param_1[7] = param_1[7] + local_2c;
      FUN_00591070("DETAIL","Pather: request completed in %u iterations");
      ExceptionList = local_10;
      return param_1[4];
    }
    if (*(char *)(piVar4[2] + 0xd) == '\0') {
      piVar8 = *(int **)piVar4[2];
      cVar1 = *(char *)((int)piVar8 + 0xd);
      while (cVar1 == '\0') {
        piVar8 = (int *)*piVar8;
        cVar1 = *(char *)((int)piVar8 + 0xd);
      }
    }
    else {
      cVar1 = *(char *)(piVar4[1] + 0xd);
      piVar8 = piVar4;
      piVar12 = (int *)piVar4[1];
      while ((cVar1 == '\0' && (piVar8 == (int *)piVar12[2]))) {
        cVar1 = *(char *)(piVar12[1] + 0xd);
        piVar8 = piVar12;
        piVar12 = (int *)piVar12[1];
      }
    }
    piVar4 = FUN_004136e0(param_1 + 5,piVar4);
    FUN_005adb3f(piVar4);
    piVar4 = (int *)((int)this + 0x78);
    *(undefined4 *)(param_1[4] + 0x14) = 2;
    iVar7 = *piVar4;
    *(int *)((int)this + 0x7c) = iVar7;
    iVar9 = *(int *)(param_1[4] + 4);
    if ((iVar9 < 0) || (*(int *)((int)local_20 + 0x74) <= iVar9)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_18 = piVar4;
    if ((bVar3) &&
       (local_30 = *(float *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xa8) + iVar9 * 4),
       *(int *)((int)local_30 + 4) == 0)) {
      iVar9 = *(int *)((int)local_30 + 0x28);
      local_1c = 0;
      if (*(int *)((int)local_30 + 0x2c) - iVar9 >> 2 != 0) {
        do {
          piVar4 = local_18;
          local_24 = 0.0;
          puVar6 = *(undefined4 **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xa8);
          fVar5 = (float)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xac) - (int)puVar6 >> 2);
          if (fVar5 != 0.0) {
            do {
              if (*(int *)*puVar6 == *(int *)(iVar9 + local_1c * 4)) goto LAB_0058ff31;
              local_24 = (float)((int)local_24 + 1);
              puVar6 = puVar6 + 1;
            } while ((uint)local_24 < (uint)fVar5);
          }
          local_24 = -NAN;
LAB_0058ff31:
          if (local_24 != -NAN) {
            pfVar2 = (float *)local_18[1];
            if ((float *)local_18[2] == pfVar2) {
              FUN_004141e0(local_18,pfVar2,&local_24);
            }
            else {
              *pfVar2 = local_24;
              local_18[1] = local_18[1] + 4;
            }
          }
          local_1c = local_1c + 1;
          iVar9 = *(int *)((int)local_30 + 0x28);
        } while (local_1c < (uint)(*(int *)((int)local_30 + 0x2c) - iVar9 >> 2));
        iVar7 = piVar4[1];
      }
    }
    iVar9 = *piVar4;
    local_1c = 0;
    puVar6 = DAT_0065c280;
    if (iVar7 - iVar9 >> 2 != 0) {
      do {
        uVar13 = local_1c;
        iVar7 = *(int *)(iVar9 + local_1c * 4);
        if ((iVar7 < 0) || (*(int *)((int)local_20 + 0x74) <= iVar7)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (-1 < iVar7) {
            if (puVar6 == (undefined4 *)0x0) {
              local_38 = (undefined4 *)FUN_005adb0f(0x98);
              local_8 = 0;
              puVar6 = FUN_0058f5d0(local_38);
              local_8 = 0xffffffff;
              iVar9 = *piVar4;
              DAT_0065c280 = puVar6;
            }
            piVar4 = local_18;
            if (((iVar7 < (int)puVar6[0x1d]) &&
                (iVar7 = *(int *)(param_1[8] + iVar7 * 4), iVar7 != 0)) &&
               (*(int *)(iVar7 + 0x14) == 2)) goto LAB_0059035b;
          }
          iVar7 = *(int *)(iVar9 + uVar13 * 4);
          if ((iVar7 < 0) || (*(int *)((int)local_20 + 0x74) <= iVar7)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            iVar7 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xa8) + iVar7 * 4);
            if (*(int *)(iVar7 + 4) == 0) {
              switch(param_1[3]) {
              case 0:
                iVar7 = *(int *)(iVar7 + 0x38);
                if (iVar7 == 0) goto switchD_00590065_caseD_3;
                if (iVar7 == 5) {
                  local_24 = 2.0;
                }
                else if (iVar7 == 1) {
                  local_24 = 3.0;
                }
                else {
LAB_0059009b:
                  if (iVar7 == 2) {
                    local_24 = 50.0;
                  }
                  else if (iVar7 == 3) {
                    local_24 = 50.0;
                  }
                  else {
                    if (iVar7 != 4) goto switchD_00590065_caseD_3;
                    local_24 = 100.0;
                  }
                }
                break;
              case 1:
                iVar7 = *(int *)(iVar7 + 0x38);
                if (iVar7 == 0) {
                  local_24 = 2.0;
                }
                else {
                  if (iVar7 == 5) goto switchD_00590065_caseD_3;
                  if (iVar7 != 1) goto LAB_0059009b;
                  local_24 = 2.0;
                }
                break;
              case 2:
                iVar7 = *(int *)(iVar7 + 0x38);
                if (iVar7 == 0) goto switchD_00590065_caseD_3;
                if (iVar7 == 5) {
                  local_24 = 2.0;
                }
                else if (iVar7 == 1) {
                  local_24 = 3.0;
                }
                else if (iVar7 == 2) {
                  local_24 = 3.0;
                }
                else if (iVar7 == 3) {
                  local_24 = 3.0;
                }
                else {
                  if (iVar7 != 4) goto switchD_00590065_caseD_3;
                  local_24 = 3.0;
                }
                break;
              default:
switchD_00590065_caseD_3:
                local_24 = 1.0;
              }
            }
            else {
              local_24 = 0.0;
            }
          }
          else {
            local_24 = 0.0;
          }
          iVar7 = *(int *)(iVar9 + uVar13 * 4);
          local_24 = *(float *)(param_1[4] + 8) + local_24;
          if (-1 < iVar7) {
            if (puVar6 == (undefined4 *)0x0) {
              local_3c = (undefined4 *)FUN_005adb0f(0x98);
              local_8 = 1;
              puVar6 = FUN_0058f5d0(local_3c);
              local_8 = 0xffffffff;
              DAT_0065c280 = puVar6;
            }
            if (((iVar7 < (int)puVar6[0x1d]) &&
                (piVar8 = *(int **)(param_1[8] + iVar7 * 4), uVar13 = local_1c, piVar8 != (int *)0x0
                )) && (piVar8[5] == 1)) {
              local_34 = piVar8;
              if (local_24 < (float)piVar8[2]) {
                piVar4 = (int *)*local_28;
                piVar12 = (int *)piVar4[1];
                piVar14 = piVar4;
                if (*(char *)((int)piVar12 + 0xd) == '\0') {
                  piVar10 = piVar12;
                  do {
                    if ((float)piVar8[4] <= *(float *)(piVar10[4] + 0x10)) {
                      if ((*(char *)((int)piVar4 + 0xd) != '\0') &&
                         ((float)piVar8[4] < *(float *)(piVar10[4] + 0x10))) {
                        piVar4 = piVar10;
                      }
                      piVar11 = (int *)*piVar10;
                      piVar14 = piVar10;
                    }
                    else {
                      piVar11 = (int *)piVar10[2];
                    }
                    piVar10 = piVar11;
                  } while (*(char *)((int)piVar11 + 0xd) == '\0');
                }
                if (*(char *)((int)piVar4 + 0xd) == '\0') {
                  piVar12 = (int *)*piVar4;
                }
                piVar10 = piVar14;
                if (*(char *)((int)piVar12 + 0xd) == '\0') {
                  do {
                    if (*(float *)(piVar12[4] + 0x10) <= (float)piVar8[4]) {
                      piVar11 = (int *)piVar12[2];
                    }
                    else {
                      piVar11 = (int *)*piVar12;
                      piVar4 = piVar12;
                    }
                    piVar12 = piVar11;
                  } while (*(char *)((int)piVar11 + 0xd) == '\0');
                }
                while (piVar10 != piVar4) {
                  piVar12 = (int *)piVar10[2];
                  if (*(char *)((int)piVar12 + 0xd) == '\0') {
                    cVar1 = *(char *)(*piVar12 + 0xd);
                    piVar10 = piVar12;
                    piVar12 = (int *)*piVar12;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)(*piVar12 + 0xd);
                      piVar10 = piVar12;
                      piVar12 = (int *)*piVar12;
                    }
                  }
                  else {
                    cVar1 = *(char *)(piVar10[1] + 0xd);
                    piVar11 = (int *)piVar10[1];
                    piVar12 = piVar10;
                    while ((piVar10 = piVar11, cVar1 == '\0' && (piVar12 == (int *)piVar10[2]))) {
                      cVar1 = *(char *)(piVar10[1] + 0xd);
                      piVar11 = (int *)piVar10[1];
                      piVar12 = piVar10;
                    }
                  }
                }
                FUN_00590770(local_28,&local_40,piVar14,piVar4);
                piVar4 = local_18;
                iVar7 = *(int *)(DAT_0065b5cc + 0xd8);
                piVar8[2] = (int)local_24;
                iVar7 = *(int *)(iVar7 + 0xa8);
                local_30 = cocos2d::Vec2::getDistanceSq
                                     ((Vec2 *)(*(int *)(iVar7 + *(int *)(*local_18 + local_1c * 4) *
                                                                4) + 8),
                                      (Vec2 *)(*(int *)(iVar7 + param_1[1] * 4) + 8));
                local_24 = (float)(0x5f3759df - ((uint)local_30 >> 1));
                fVar5 = (1.5 - local_30 * 0.5 * local_24 * local_24) * local_24 * local_30;
                piVar8[3] = (int)fVar5;
                piVar8[4] = (int)((float)piVar8[2] * fVar5);
                *piVar8 = param_1[4];
                FUN_00590cc0(param_1 + 5,local_4c,'\0',(int *)&local_34,param_1);
                puVar6 = DAT_0065c280;
                uVar13 = local_1c;
              }
              goto LAB_0059035b;
            }
          }
          piVar8 = FUN_00590920((int *)((int)local_20 + 0x84));
          piVar8[1] = *(int *)(*piVar4 + uVar13 * 4);
          iVar9 = DAT_0065b5cc;
          iVar7 = *piVar4;
          piVar8[2] = (int)local_24;
          iVar9 = *(int *)(*(int *)(iVar9 + 0xd8) + 0xa8);
          fVar5 = cocos2d::Vec2::getDistanceSq
                            ((Vec2 *)(*(int *)(iVar9 + *(int *)(iVar7 + uVar13 * 4) * 4) + 8),
                             (Vec2 *)(*(int *)(iVar9 + param_1[1] * 4) + 8));
          local_24 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
          fVar5 = (1.5 - fVar5 * 0.5 * local_24 * local_24) * local_24 * fVar5;
          piVar8[3] = (int)fVar5;
          piVar8[4] = (int)((float)piVar8[2] * fVar5);
          *piVar8 = param_1[4];
          piVar8[5] = 1;
          *(int **)(param_1[8] + piVar8[1] * 4) = piVar8;
          local_34 = piVar8;
          FUN_00590a10(param_1 + 5,&local_44,(int *)param_1[5],(int *)&local_34,param_1);
          puVar6 = DAT_0065c280;
        }
LAB_0059035b:
        local_1c = uVar13 + 1;
        iVar9 = *piVar4;
      } while (local_1c < (uint)(piVar4[1] - iVar9 >> 2));
    }
    local_2c = local_2c + 1;
    this = local_20;
    if (param_2 < local_2c) break;
    iVar7 = param_1[6];
  }
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + local_2c;
  param_1[7] = param_1[7] + local_2c;
  FUN_00591070("DETAIL","Pather: failed to calculate after %d iterations");
  ExceptionList = local_10;
  return 0;
}
