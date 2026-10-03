#include "../ois_server.exe.h"


void __fastcall FUN_0055c290(int param_1)

{
  undefined4 *puVar1;
  uint in_stack_ffffffd8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0;
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
    FUN_0055b740(*(void **)(param_1 + 0x2c));
    puVar1 = (undefined4 *)(in_stack_ffffffd8 & 0xffffff00);
    FUN_00402690(&stack0xffffffd8,"[`$arrows`!] - [`$return`!]",0x1b);
    FUN_0055b940(*(void **)(param_1 + 0x2c),2,puVar1);
    FUN_0055b840(*(void **)(param_1 + 0x2c));
  }
  return;
}


int * __thiscall FUN_0055c300(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x3c) + uVar2 * 4);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


undefined4 __thiscall FUN_0055c340(void *this,int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0x1a) {
    piVar5 = (int *)((int)this + 4);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 < 0) {
      *(int *)((int)this + 4) = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2) + -1;
    }
  }
  else {
    if (param_1 != 0x1b) {
      if (param_1 == 0x84) {
        iVar6 = *(int *)((int)DAT_0065b5cc + 0xd0);
        pvVar2 = DAT_0065b5cc;
        if (DAT_0065b3d4 == iVar6) {
          cVar1 = *(char *)(iVar6 + 0xd0);
          if (*(char *)(DAT_0065b444 + 0x71) == '\0') {
            if (cVar1 == '\0') {
              uVar4 = FUN_004e81c0(iVar6);
              return CONCAT31((int3)((uint)uVar4 >> 8),1);
            }
            uVar4 = FUN_004e8220(iVar6);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          FUN_004122b0();
          if (cVar1 != '\0') {
            uVar4 = FUN_0041c620(0x6d,0);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          uVar4 = FUN_0041c620(0x6e,0);
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
      }
      else {
        piVar5 = FUN_0055c300(this,*(int *)(*(int *)((int)this + 0x30) + *(int *)((int)this + 4) * 4
                                           ));
        pvVar2 = (void *)(**(code **)(*(int *)piVar5[7] + 8))();
      }
      goto LAB_0055c4e3;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    if ((uint)(*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2) <=
        *(uint *)((int)this + 4)) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  FUN_0055be10((int)this);
  iVar7 = -1;
  iVar3 = 8;
  iVar6 = *(int *)((int)DAT_0065b5cc + 0xd0);
  pvVar2 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar2,iVar6,iVar3,iVar7);
  iVar6 = DAT_0065b3d4;
  if (DAT_0065b3d4 == 0) {
    iVar6 = *(int *)((int)DAT_0065b5cc + 0xd0);
  }
  pvVar2 = (void *)FUN_00402f60();
  if (DAT_0065506a != '\0') {
    iVar3 = rand();
    iVar3 = iVar3 % 3 + 1;
    if (iVar6 == 0) {
      uVar4 = FUN_00557af0(pvVar2,0,0xd,iVar3,0,'\x01',1.0);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    uVar4 = FUN_00557fb0(pvVar2,iVar6,0xd,iVar3);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
LAB_0055c4e3:
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}


Sprite * __thiscall FUN_0055c4f0(void *this,byte param_1)

{
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = DummyObject::vftable;
  *(undefined ***)((int)this + 0x278) = DummyObject::vftable;
  bVar1 = cc_assert_script_compatible("This should never be hit until the program closes.");
  if (!bVar1) {
    cocos2d::log("Assert failed: %s","This should never be hit until the program closes.",uVar2);
  }
  cocos2d::log("Destructor called.");
  cocos2d::Sprite::~Sprite(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall
FUN_0055c590(Node *param_1,int param_2,undefined4 param_3,Node param_4,byte *param_5)

{
  SpriteFrameCache *this;
  Texture2D *pTVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Size *pSVar5;
  byte **ppbVar6;
  void *pvVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *in_XMM3_Da;
  uint in_stack_00000020;
  uint in_stack_00000024;
  int *in_stack_ffffff98;
  basic_string<> *pbVar10;
  Size local_3c [4];
  Node *local_38;
  undefined4 *local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7a68;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38 = param_1;
  local_34 = in_XMM3_Da;
  cocos2d::Node::Node(param_1);
  param_1[0x27c] = param_4;
  *(undefined ***)param_1 = UIText::vftable;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27d) = 0x101;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(int *)(param_1 + 0x294) = param_2;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 **)(param_1 + 0x28c) = local_34;
  *(int *)(param_1 + 0x284) = (int)((float)local_34 * 5.0);
  *(int *)(param_1 + 0x288) = (int)((float)local_34 * 7.0);
  *(undefined4 *)(param_1 + 0x298) = param_3;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0xf;
  param_1[0x2a8] = (Node)0x0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0xf;
  param_1[0x2c0] = (Node)0x0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  local_8._0_1_ = 6;
  if (DAT_0065b3e9 == '\0') {
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    FUN_00402690(local_30,"dosfont.plist",0xd);
    pbVar10 = (basic_string<> *)local_30;
    local_8._0_1_ = 7;
    this = cocos2d::SpriteFrameCache::getInstance();
    cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this,pbVar10);
    local_8._0_1_ = 6;
    if (0xf < local_1c) {
      pvVar7 = local_30[0];
      if (0xfff < local_1c + 1) {
        pvVar7 = *(void **)((int)local_30[0] + -4);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7))) {
LAB_0055c74c:
          local_8._0_1_ = 6;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar7);
    }
    FUN_00591070("RENDER","Sprite frames cached from \'%s\'");
    DAT_0065b3e9 = '\x01';
  }
  if (this_0065b3f4 == (Texture2D *)0x0) {
    pTVar1 = (Texture2D *)FUN_005adb0f(0x10);
    this_0065b3f4 = pTVar1;
    *(undefined4 *)(pTVar1 + 4) = 0x2600;
    *(undefined4 *)pTVar1 = 0x2600;
    *(undefined4 *)(pTVar1 + 8) = 0x812f;
    *(undefined4 *)(pTVar1 + 0xc) = 0x812f;
  }
  if ((param_2 == -1) && (in_stack_00000020 != 0)) {
    FUN_004024e0(&stack0xffffff98,&param_5);
    iVar2 = FUN_0055ebd0(in_stack_ffffff98);
    *(int *)(param_1 + 0x294) = iVar2 + 2;
  }
  ppbVar6 = &param_5;
  if (0xf < in_stack_00000024) {
    ppbVar6 = (byte **)param_5;
  }
  uVar3 = FUN_004031f0((byte *)ppbVar6,in_stack_00000020,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    FUN_004024e0(&stack0xffffff98,&param_5);
    FUN_0055ce90(param_1,'\0','\0',in_stack_ffffff98);
  }
  if (*(int *)(param_1 + 0x298) == -1) {
    FUN_004024e0(&stack0xffffff98,(undefined4 *)(param_1 + 0x2c0));
    iVar2 = FUN_0055d140((int *)(param_1 + 0x2d8),*(uint *)(param_1 + 0x294),in_stack_ffffff98);
    *(int *)(param_1 + 0x29c) = iVar2;
    *(int *)(param_1 + 0x298) = (int)((float)(iVar2 + -1) + (float)iVar2 * 7.0);
  }
  ppbVar6 = &param_5;
  if (0xf < in_stack_00000024) {
    ppbVar6 = (byte **)param_5;
  }
  uVar3 = FUN_004031f0((byte *)ppbVar6,in_stack_00000020,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    FUN_0055e1b0((int *)param_1);
  }
  iVar2 = *(int *)(param_1 + 0x294);
  if (iVar2 == -1) {
    local_34 = *(undefined4 **)(param_1 + 0x2dc);
    iVar2 = 0;
    puVar9 = *(undefined4 **)(param_1 + 0x2d8);
    if (puVar9 != local_34) {
      do {
        FUN_004024e0(local_30,puVar9);
        local_8._0_1_ = 8;
        FUN_004024e0(&stack0xffffff98,local_30);
        iVar4 = FUN_0055ebd0(in_stack_ffffff98);
        local_8._0_1_ = 6;
        if (iVar2 < iVar4) {
          iVar2 = iVar4;
        }
        if (0xf < local_1c) {
          pvVar7 = local_30[0];
          if (0xfff < local_1c + 1) {
            pvVar7 = *(void **)((int)local_30[0] + -4);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7))) goto LAB_0055c74c;
          }
          FUN_005adb3f(pvVar7);
        }
        puVar9 = puVar9 + 6;
      } while (puVar9 != local_34);
    }
    iVar4 = *(int *)(param_1 + 0x298);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x298);
  }
  pSVar5 = (Size *)cocos2d::Size::Size(local_3c,(float)iVar2,(float)iVar4);
  cocos2d::Node::setContentSize(param_1,pSVar5);
  if (0xf < in_stack_00000024) {
    pbVar8 = param_5;
    if (0xfff < in_stack_00000024 + 1) {
      pbVar8 = *(byte **)(param_5 + -4);
      if ((byte *)0x1f < param_5 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_0055c9e0(void *this,byte param_1)

{
  FUN_0055cbe0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


Ref * __fastcall FUN_0055ca10(int param_1,undefined4 param_2,Node param_3,void *param_4)

{
  Node *pNVar1;
  Ref *this;
  void *pvVar2;
  uint in_stack_0000001c;
  byte *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7aaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pNVar1 = (Node *)FUN_005adc7c(0x2f0);
  local_8._0_1_ = 1;
  if (pNVar1 == (Node *)0x0) {
    this = (Ref *)0x0;
  }
  else {
    FUN_004024e0(&stack0xffffffbc,&param_4);
    this = (Ref *)FUN_0055c590(pNVar1,param_1,param_2,param_3,in_stack_ffffffbc);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (this == (Ref *)0x0) {
    this = (Ref *)0x0;
  }
  else {
    cocos2d::Ref::autorelease(this);
  }
  if (0xf < in_stack_0000001c) {
    pvVar2 = param_4;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar2 = *(void **)((int)param_4 + -4), 0x1f < (uint)((int)param_4 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}


Ref * __thiscall FUN_0055cb00(Node param_1,void *param_2)

{
  Node *pNVar1;
  Ref *this;
  void *pvVar2;
  uint in_stack_00000018;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7aea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pNVar1 = (Node *)FUN_005adc7c(0x2f0);
  local_8._0_1_ = 1;
  if (pNVar1 == (Node *)0x0) {
    this = (Ref *)0x0;
  }
  else {
    FUN_004024e0(&stack0xffffffc0,&param_2);
    this = (Ref *)FUN_0055c590(pNVar1,-1,0xffffffff,param_1,in_stack_ffffffc0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (this == (Ref *)0x0) {
    this = (Ref *)0x0;
  }
  else {
    cocos2d::Ref::autorelease(this);
  }
  if (0xf < in_stack_00000018) {
    pvVar2 = param_2;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar2 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0055cbe0(Node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c7b10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UIText::vftable;
  FUN_0055d0c0((int)param_1);
  pvVar1 = *(void **)(param_1 + 0x2e4);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x2ec) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0055cd34;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  FUN_004025a0((int *)(param_1 + 0x2d8));
  if (0xf < *(uint *)(param_1 + 0x2d4)) {
    pvVar1 = *(void **)(param_1 + 0x2c0);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2d4) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0055cd34;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0xf;
  param_1[0x2c0] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 700)) {
    pvVar1 = *(void **)(param_1 + 0x2a8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 700) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0055cd34:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0xf;
  param_1[0x2a8] = (Node)0x0;
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


undefined2 * __fastcall FUN_0055cd40(undefined2 *param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == 'b') {
    *param_1 = DAT_0065b8a0;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8a2;
    return param_1;
  }
  if ((byte)(param_2 - 0x31U) < 9) {
    iVar1 = (param_2 + -0x30) * 3;
    *param_1 = *(undefined2 *)((int)&DAT_0065b8a0 + iVar1);
    *(undefined1 *)(param_1 + 1) = (&DAT_0065b8a2)[iVar1];
    return param_1;
  }
  if (param_2 == '0') {
    *param_1 = DAT_0065b8be;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8c0;
    return param_1;
  }
  if (param_2 == '!') {
    *param_1 = DAT_0065b8c1;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8c3;
    return param_1;
  }
  if (param_2 == '@') {
    *param_1 = DAT_0065b8c4;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8c6;
    return param_1;
  }
  if (param_2 == '#') {
    *param_1 = DAT_0065b8c7;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8c9;
    return param_1;
  }
  if (param_2 == '$') {
    *param_1 = DAT_0065b8ca;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8cc;
    return param_1;
  }
  if (param_2 == '%') {
    *param_1 = DAT_0065b8cd;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8cf;
    return param_1;
  }
  if (param_2 == '^') {
    *param_1 = DAT_0065b8d0;
    *(undefined1 *)(param_1 + 1) = DAT_0065b8d2;
    return param_1;
  }
  if (param_2 == '&') {
    FUN_0055cd40(param_1,*(char *)(*(int *)(DAT_0065b3d4 + 0x254) + 0xd4));
    return param_1;
  }
  if (param_2 == '*') {
    FUN_0055cd40(param_1,*(char *)(*(int *)(DAT_0065b3d4 + 0x254) + 0xd5));
    return param_1;
  }
  *param_1 = DAT_0065b8b5;
  *(undefined1 *)(param_1 + 1) = DAT_0065b8b7;
  return param_1;
}


void __thiscall FUN_0055ce90(void *this,char param_1,char param_2,int *param_3)

{
  int **this_00;
  int iVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 *in_stack_ffffff9c;
  Size local_38 [8];
  undefined4 *local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7b40;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (int **)((int)this + 0x2c0);
  local_8 = 0;
  *(undefined1 *)((int)this + 0x27e) = 1;
  if (this_00 != &param_3) {
    ppiVar2 = &param_3;
    if (0xf < in_stack_00000020) {
      ppiVar2 = (int **)param_3;
    }
    FUN_00402690(this_00,ppiVar2,in_stack_0000001c);
  }
  if (*(int *)((int)this + 0x298) == -1) {
    FUN_004024e0(&stack0xffffff9c,this_00);
    iVar3 = FUN_0055d140((int *)((int)this + 0x2d8),*(uint *)((int)this + 0x294),in_stack_ffffff9c);
    *(int *)((int)this + 0x29c) = iVar3;
    *(int *)((int)this + 0x298) = (int)((float)(iVar3 + -1) + (float)iVar3 * 7.0);
  }
  if (param_2 != '\0') {
    *(undefined4 *)((int)this + 0x294) = 0xffffffff;
  }
  if (param_1 != '\0') {
    FUN_0055e1b0(this);
  }
  iVar3 = *(int *)((int)this + 0x294);
  if (iVar3 == -1) {
    local_30 = *(undefined4 **)((int)this + 0x2dc);
    iVar3 = 0;
    puVar7 = *(undefined4 **)((int)this + 0x2d8);
    if (puVar7 != local_30) {
      do {
        FUN_004024e0(local_2c,puVar7);
        local_8._0_1_ = 1;
        FUN_004024e0(&stack0xffffff9c,local_2c);
        iVar4 = FUN_0055ebd0(in_stack_ffffff9c);
        local_8 = (uint)local_8._1_3_ << 8;
        if (iVar3 < iVar4) {
          iVar3 = iVar4;
        }
        if (0xf < local_18) {
          pvVar5 = local_2c[0];
          if (0xfff < local_18 + 1) {
            pvVar5 = *(void **)((int)local_2c[0] + -4);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_0055d065;
          }
          FUN_005adb3f(pvVar5);
        }
        puVar7 = puVar7 + 6;
      } while (puVar7 != local_30);
    }
    iVar4 = *(int *)((int)this + 0x298);
  }
  else {
    iVar4 = *(int *)((int)this + 0x298);
  }
  iVar1 = *(int *)this;
  cocos2d::Size::Size(local_38,(float)iVar3,(float)iVar4);
  (**(code **)(iVar1 + 0xac))();
  if (0xf < in_stack_00000020) {
    piVar6 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      piVar6 = (int *)param_3[-1];
      if (0x1f < (uint)((int)param_3 + (-4 - (int)piVar6))) {
LAB_0055d065:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(piVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0055d0a0(Node *param_1)

{
  FUN_0055d0c0((int)param_1);
                    // WARNING: Could not recover jumptable at 0x0055d0ab. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::cleanup(param_1);
  return;
}


void __fastcall FUN_0055d0c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x2e4);
  if (*(int *)(param_1 + 0x2e8) - iVar1 >> 2 != 0) {
    do {
      if (uVar2 == 0x10) {
        *(undefined4 *)(iVar1 + 0x40) = 0;
      }
      else {
        cocos2d::Ref::autorelease(*(Ref **)(iVar1 + uVar2 * 4));
        (**(code **)(**(int **)(*(int *)(param_1 + 0x2e4) + uVar2 * 4) + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x2e4) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x2e4);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x2e8) - iVar1 >> 2));
  }
  *(int *)(param_1 + 0x2e8) = iVar1;
  return;
}


void __fastcall FUN_0055d140(int *param_1,uint param_2,undefined4 *param_3)

{
  int *this;
  undefined1 uVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  byte ******ppppppbVar5;
  uint uVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_fffffebc;
  uint local_120;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  uint local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int local_e4;
  uint local_e0;
  int *local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  uint local_c0;
  char local_b9;
  int *local_b8;
  void *local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_9c;
  int local_98;
  void *local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c;
  int local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined1 local_5c;
  int local_58;
  void *local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  uint uStack_40;
  byte *****local_3c [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005c7bf5;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 0;
  local_104 = param_1;
  FUN_004028b0((int *)*param_1,(int *)param_1[1]);
  param_1[1] = *param_1;
  local_118 = (int *)0x0;
  local_b8 = (int *)0x0;
  local_114 = (int *)0x0;
  local_110 = (int *)0x0;
  local_10c = (int *)0x0;
  piVar11 = (int *)0x0;
  local_f0 = (int *)0x0;
  local_ec = (int *)0x0;
  local_e8 = (int *)0x0;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (byte *****)((uint)local_3c[0] & 0xffffff00);
  local_14._0_1_ = 3;
  local_d4 = 0;
  if (in_stack_00000014 != 0) {
    do {
      uVar6 = local_28;
      ppuVar3 = &param_3;
      if (0xf < in_stack_00000018) {
        ppuVar3 = (undefined4 **)param_3;
      }
      if (*(char *)((int)ppuVar3 + local_d4) == ' ') {
        local_64 = 0;
        local_60 = 0xf;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        local_5c = 0;
        local_14 = CONCAT31(local_14._1_3_,4);
        ppppppbVar5 = local_3c;
        if (0xf < local_28) {
          ppppppbVar5 = (byte ******)local_3c[0];
        }
        uVar2 = FUN_004031f0((byte *)ppppppbVar5,local_2c,(byte *)&PTR_005ce008,0);
        if ((char)uVar2 == '\0') {
          ppppppbVar5 = local_3c;
          if (0xf < uVar6) {
            ppppppbVar5 = (byte ******)local_3c[0];
          }
          FUN_00402690(local_74,ppppppbVar5,local_2c);
          FUN_004024e0(&stack0xfffffebc,local_3c);
          local_58 = FUN_0055ebd0(in_stack_fffffebc);
          if (local_e8 == piVar11) {
            FUN_0055f070(&local_f0,piVar11,local_74);
          }
          else {
            FUN_004024e0(piVar11,local_74);
            *(undefined1 *)(piVar11 + 6) = local_5c;
            piVar11[7] = local_58;
            local_ec = piVar11 + 8;
          }
          local_2c = 0;
          ppppppbVar5 = local_3c;
          if (0xf < local_28) {
            ppppppbVar5 = (byte ******)local_3c[0];
          }
          *(byte *)ppppppbVar5 = 0;
          piVar11 = local_ec;
        }
        FUN_00402690(local_74,&DAT_005e7468,1);
        in_stack_fffffebc = (void *)((uint)in_stack_fffffebc & 0xffffff00);
        FUN_00402690(&stack0xfffffebc,&DAT_005e7468,1);
        local_58 = FUN_0055ebd0(in_stack_fffffebc);
        local_5c = 1;
        if (local_e8 == piVar11) {
          FUN_0055f070(&local_f0,piVar11,local_74);
        }
        else {
          FUN_004024e0(piVar11,local_74);
          *(undefined1 *)(piVar11 + 6) = local_5c;
          piVar11[7] = local_58;
          local_ec = piVar11 + 8;
        }
        piVar11 = local_ec;
        pvVar10 = local_74[0];
        uVar6 = local_60;
joined_r0x0055d516:
        local_14._0_1_ = 3;
        if (0xf < uVar6) {
          local_14._0_1_ = 3;
          pvVar8 = pvVar10;
          if ((0xfff < uVar6 + 1) &&
             (pvVar8 = *(void **)((int)pvVar10 + -4), uVar1 = (undefined1)local_14,
             0x1f < (uint)((int)pvVar10 + (-4 - (int)pvVar8)))) goto LAB_0055d658;
          FUN_005adb3f(pvVar8);
        }
      }
      else {
        ppuVar3 = &param_3;
        if (0xf < in_stack_00000018) {
          ppuVar3 = (undefined4 **)param_3;
        }
        if (*(char *)((int)ppuVar3 + local_d4) != '\n') {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)&local_54,&DAT_005ce018);
          local_14._0_1_ = 6;
          puVar12 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar12 = (undefined4 *)*puVar4;
          }
          FUN_00403640(local_3c,puVar12,puVar4[4]);
          pvVar10 = local_54;
          uVar6 = uStack_40;
          goto joined_r0x0055d516;
        }
        if (local_2c != 0) {
          local_84 = 0;
          local_80 = 0xf;
          local_94[0] = (void *)((uint)local_94[0] & 0xffffff00);
          local_7c = 0;
          local_14 = CONCAT31(local_14._1_3_,5);
          ppppppbVar5 = local_3c;
          if (0xf < local_28) {
            ppppppbVar5 = (byte ******)local_3c[0];
          }
          FUN_00402690(local_94,ppppppbVar5,local_2c);
          FUN_004024e0(&stack0xfffffebc,local_3c);
          local_78 = FUN_0055ebd0(in_stack_fffffebc);
          if (local_e8 == piVar11) {
            FUN_0055f070(&local_f0,piVar11,local_94);
          }
          else {
            FUN_004024e0(piVar11,local_94);
            *(undefined1 *)(piVar11 + 6) = local_7c;
            piVar11[7] = local_78;
            local_ec = piVar11 + 8;
          }
          local_14._0_1_ = 3;
          if (0xf < local_80) {
            pvVar10 = local_94[0];
            if ((0xfff < local_80 + 1) &&
               (pvVar10 = *(void **)((int)local_94[0] + -4), uVar1 = (undefined1)local_14,
               0x1f < (uint)((int)local_94[0] + (-4 - (int)pvVar10)))) goto LAB_0055d658;
            FUN_005adb3f(pvVar10);
          }
        }
        piVar11 = local_110;
        local_2c = 0;
        ppppppbVar5 = local_3c;
        if (0xf < local_28) {
          ppppppbVar5 = (byte ******)local_3c[0];
        }
        *(byte *)ppppppbVar5 = 0;
        if (local_118 == local_110) {
          FUN_0055ee60(&local_114,local_110,(int *)&local_f0);
          local_118 = local_10c;
        }
        else {
          FUN_0055f2a0(local_110,(int *)&local_f0);
          local_110 = piVar11 + 3;
        }
        piVar11 = local_f0;
        FUN_0055f230(local_f0,local_ec);
        local_ec = piVar11;
      }
      local_d4 = local_d4 + 1;
    } while (local_d4 < in_stack_00000014);
    if (local_2c != 0) {
      local_a4 = 0;
      local_a0 = 0xf;
      local_b4[0] = (void *)((uint)local_b4[0] & 0xffffff00);
      local_9c = 0;
      local_14 = CONCAT31(local_14._1_3_,7);
      ppppppbVar5 = local_3c;
      if (0xf < local_28) {
        ppppppbVar5 = (byte ******)local_3c[0];
      }
      FUN_00402690(local_b4,ppppppbVar5,local_2c);
      FUN_004024e0(&stack0xfffffebc,local_3c);
      local_98 = FUN_0055ebd0(in_stack_fffffebc);
      if (local_e8 == piVar11) {
        FUN_0055f070(&local_f0,piVar11,local_b4);
      }
      else {
        FUN_004024e0(piVar11,local_b4);
        *(undefined1 *)(piVar11 + 6) = local_9c;
        piVar11[7] = local_98;
        local_ec = piVar11 + 8;
      }
      piVar11 = local_ec;
      local_2c = 0;
      ppppppbVar5 = local_3c;
      if (0xf < local_28) {
        ppppppbVar5 = (byte ******)local_3c[0];
      }
      local_14._0_1_ = 3;
      *(byte *)ppppppbVar5 = 0;
      if (0xf < local_a0) {
        pvVar10 = local_b4[0];
        if ((0xfff < local_a0 + 1) &&
           (pvVar10 = *(void **)((int)local_b4[0] + -4), uVar1 = (undefined1)local_14,
           0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar10)))) {
LAB_0055d658:
          local_14._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
    }
    local_b8 = local_114;
  }
  local_114 = local_b8;
  if ((int)piVar11 - (int)local_f0 >> 5 != 0) {
    if (local_118 == local_110) {
      FUN_0055ee60(&local_114,local_110,(int *)&local_f0);
      local_118 = local_10c;
      local_b8 = local_114;
    }
    else {
      FUN_0055f2a0(local_110,(int *)&local_f0);
      local_110 = local_110 + 3;
    }
    piVar11 = local_f0;
    FUN_0055f230(local_f0,local_ec);
    local_ec = piVar11;
  }
  local_120 = 0;
  local_108 = ((int)local_110 - (int)local_b8) / 0xc;
  if (local_108 != 0) {
    do {
      piVar11 = (int *)0x0;
      local_dc = (int *)0x0;
      local_fc = (int *)0x0;
      local_100 = (int *)0x0;
      local_f8 = (int *)0x0;
      local_f4 = (int *)0x0;
      local_cc = (int *)0x0;
      local_c8 = (int *)0x0;
      local_c4 = (int *)0x0;
      local_d0 = local_120 * 3;
      local_14._0_1_ = 9;
      local_c0 = 0;
      local_e0 = 0;
      local_b9 = '\0';
      if ((uint)(local_b8[local_120 * 3 + 1] - local_b8[local_120 * 3]) < 0x20) {
        local_44 = 0;
        uStack_40 = 0xf;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        FUN_00402690(&local_54,&PTR_005ce008,0);
        pvVar10 = local_54;
        local_14._0_1_ = 10;
        piVar7 = (int *)local_104[1];
        if ((int *)local_104[2] == piVar7) {
          FUN_004036d0(local_104,piVar7,(int *)&local_54);
          uVar6 = uStack_40;
        }
        else {
          local_54 = (void *)((uint)local_54 & 0xffffff00);
          *piVar7 = (int)pvVar10;
          piVar7[1] = iStack_50;
          piVar7[2] = iStack_4c;
          piVar7[3] = iStack_48;
          piVar7[4] = local_44;
          piVar7[5] = uStack_40;
          local_104[1] = local_104[1] + 0x18;
          uVar6 = 0xf;
        }
        local_14._0_1_ = 9;
        uVar1 = (undefined1)local_14;
        local_14._0_1_ = 9;
        if (0xf < uVar6) {
          pvVar10 = local_54;
          if ((0xfff < uVar6 + 1) &&
             (pvVar10 = *(void **)((int)local_54 + -4),
             0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10)))) goto LAB_0055d658;
          FUN_005adb3f(pvVar10);
        }
      }
      local_d4 = 0;
      iVar9 = local_b8[local_120 * 3];
      if (local_b8[local_120 * 3 + 1] - iVar9 >> 5 != 0) {
        local_e4 = 0;
        do {
          puVar12 = (undefined4 *)(local_e4 + iVar9);
          if (*(char *)(local_e4 + 0x18 + iVar9) == '\0') {
            if (local_c4 == local_c8) {
              FUN_0055f070(&local_cc,local_c8,puVar12);
            }
            else {
              FUN_004024e0(local_c8,puVar12);
              *(undefined1 *)(local_c8 + 6) = *(undefined1 *)(puVar12 + 6);
              local_c8[7] = puVar12[7];
              local_c8 = local_c8 + 8;
            }
            local_b9 = '\0';
LAB_0055dc95:
            local_c0 = local_c0 + *(int *)(local_b8[local_d0] + 0x1c + local_e4);
          }
          else {
            if (local_b9 != '\0') {
              if (local_c4 == local_c8) {
                FUN_0055f070(&local_cc,local_c8,puVar12);
                local_b9 = '\x01';
              }
              else {
                FUN_004024e0(local_c8,puVar12);
                local_b9 = '\x01';
                *(undefined1 *)(local_c8 + 6) = *(undefined1 *)(puVar12 + 6);
                local_c8[7] = puVar12[7];
                local_c8 = local_c8 + 8;
              }
              goto LAB_0055dc95;
            }
            if (param_2 == 0xffffffff) {
LAB_0055dae2:
              local_e0 = local_e0 + local_c0;
              local_c0 = (int)local_c8 - (int)local_cc >> 5;
              local_d8 = 0;
              piVar7 = local_cc;
              if (local_c0 != 0) {
                do {
                  if (local_f4 == piVar11) {
                    FUN_0055f070(&local_fc,piVar11,piVar7);
                  }
                  else {
                    FUN_004024e0(piVar11,piVar7);
                    *(char *)(piVar11 + 6) = (char)piVar7[6];
                    piVar11[7] = piVar7[7];
                    local_f8 = piVar11 + 8;
                  }
                  local_d8 = local_d8 + 1;
                  piVar11 = local_f8;
                  piVar7 = piVar7 + 8;
                } while (local_d8 < local_c0);
                local_dc = local_fc;
                local_100 = local_f8;
              }
              FUN_0055f230(local_cc,local_c8);
              local_c8 = local_cc;
              puVar12 = (undefined4 *)(local_b8[local_d0] + local_e4);
              if (local_c4 == local_cc) {
                FUN_0055f070(&local_cc,local_cc,puVar12);
              }
              else {
                FUN_004024e0(local_cc,puVar12);
                *(undefined1 *)(local_cc + 6) = *(undefined1 *)(puVar12 + 6);
                local_cc[7] = puVar12[7];
                local_c8 = local_cc + 8;
              }
              local_c0 = *(int *)(local_b8[local_d0] + 0x1c + local_e4);
            }
            else {
              uVar6 = (int)local_c8 - (int)local_cc >> 5;
              uVar2 = (int)piVar11 - (int)local_dc >> 5;
              if (uVar6 + uVar2 + local_e0 + local_c0 <= param_2) goto LAB_0055dae2;
              local_44 = 0;
              uStack_40 = 0xf;
              local_54 = (void *)((uint)local_54 & 0xffffff00);
              local_14 = CONCAT31(local_14._1_3_,0xb);
              local_e0 = 0;
              piVar7 = piVar11;
              piVar11 = local_dc;
              local_d8 = uVar2;
              local_c0 = uVar6;
              if (uVar2 != 0) {
                do {
                  piVar7 = piVar11;
                  if (0xf < (uint)piVar11[5]) {
                    piVar7 = (int *)*piVar11;
                  }
                  FUN_00403640(&local_54,piVar7,piVar11[4]);
                  local_e0 = local_e0 + 1;
                  piVar7 = local_100;
                  piVar11 = piVar11 + 8;
                } while (local_e0 < uVar2);
              }
              piVar11 = local_dc;
              this = (int *)local_104[1];
              if ((int *)local_104[2] == this) {
                FUN_00403840(local_104,this,&local_54);
              }
              else {
                FUN_004024e0(this,&local_54);
                local_104[1] = local_104[1] + 0x18;
              }
              local_e0 = 0;
              FUN_0055f230(piVar11,piVar7);
              local_100 = piVar11;
              local_d8 = 0;
              local_f8 = piVar11;
              if (local_c0 != 0) {
                piVar7 = local_cc + 7;
                uVar6 = local_c0;
                do {
                  if ((char)piVar7[-1] == '\0') {
                    if (local_f4 == piVar11) {
                      FUN_0055f070(&local_fc,piVar11,piVar7 + -7);
                    }
                    else {
                      FUN_004024e0(piVar11,piVar7 + -7);
                      *(char *)(piVar11 + 6) = (char)piVar7[-1];
                      piVar11[7] = *piVar7;
                      local_f8 = piVar11 + 8;
                    }
                    local_e0 = local_e0 + *piVar7;
                    uVar6 = local_c0;
                    piVar11 = local_f8;
                  }
                  local_d8 = local_d8 + 1;
                  piVar7 = piVar7 + 8;
                } while (local_d8 < uVar6);
                local_dc = local_fc;
              }
              local_100 = piVar11;
              FUN_0055f230(local_cc,local_c8);
              local_c8 = local_cc;
              puVar12 = (undefined4 *)(local_b8[local_d0] + local_e4);
              if (local_c4 == local_cc) {
                FUN_0055f070(&local_cc,local_cc,puVar12);
              }
              else {
                FUN_004024e0(local_cc,puVar12);
                *(undefined1 *)(local_cc + 6) = *(undefined1 *)(puVar12 + 6);
                local_cc[7] = puVar12[7];
                local_c8 = local_cc + 8;
              }
              local_c0 = *(int *)(local_b8[local_d0] + 0x1c + local_e4);
              local_14._0_1_ = 9;
              if (0xf < uStack_40) {
                pvVar10 = local_54;
                if ((0xfff < uStack_40 + 1) &&
                   (pvVar10 = *(void **)((int)local_54 + -4), uVar1 = (undefined1)local_14,
                   0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10)))) goto LAB_0055d658;
                FUN_005adb3f(pvVar10);
              }
            }
          }
          local_d4 = local_d4 + 1;
          local_e4 = local_e4 + 0x20;
          iVar9 = local_b8[local_d0];
        } while (local_d4 < (uint)(local_b8[local_d0 + 1] - iVar9 >> 5));
      }
      local_d0 = (int)local_c8 - (int)local_cc >> 5;
      if (local_d0 != 0) {
        if ((param_2 == 0xffffffff) ||
           (uVar6 = (int)piVar11 - (int)local_dc >> 5,
           uVar6 + local_d0 + local_e0 + local_c0 <= param_2)) {
          local_d8 = 0;
          piVar7 = local_cc;
          if (local_d0 != 0) {
            do {
              if (local_f4 == piVar11) {
                FUN_0055f070(&local_fc,piVar11,piVar7);
              }
              else {
                FUN_004024e0(piVar11,piVar7);
                *(char *)(piVar11 + 6) = (char)piVar7[6];
                piVar11[7] = piVar7[7];
                local_f8 = piVar11 + 8;
              }
              local_d8 = local_d8 + 1;
              piVar11 = local_f8;
              piVar7 = piVar7 + 8;
            } while (local_d8 < local_d0);
            local_dc = local_fc;
          }
          piVar7 = local_cc;
          FUN_0055f230(local_cc,local_c8);
          local_c8 = piVar7;
        }
        else {
          local_44 = 0;
          uStack_40 = 0xf;
          local_54 = (void *)((uint)local_54 & 0xffffff00);
          local_14 = CONCAT31(local_14._1_3_,0xc);
          local_d4 = 0;
          piVar7 = piVar11;
          piVar11 = local_dc;
          local_d8 = uVar6;
          if (uVar6 != 0) {
            do {
              piVar7 = piVar11;
              if (0xf < (uint)piVar11[5]) {
                piVar7 = (int *)*piVar11;
              }
              FUN_00403640(&local_54,piVar7,piVar11[4]);
              local_d4 = local_d4 + 1;
              piVar7 = local_100;
              piVar11 = piVar11 + 8;
            } while (local_d4 < uVar6);
          }
          uVar6 = local_d0;
          piVar11 = (int *)local_104[1];
          if ((int *)local_104[2] == piVar11) {
            FUN_00403840(local_104,piVar11,&local_54);
          }
          else {
            FUN_004024e0(piVar11,&local_54);
            local_104[1] = local_104[1] + 0x18;
          }
          piVar11 = local_dc;
          FUN_0055f230(local_dc,piVar7);
          local_f8 = piVar11;
          local_d4 = 0;
          if (uVar6 != 0) {
            piVar7 = local_cc + 6;
            uVar6 = local_d0;
            do {
              if ((char)*piVar7 == '\0') {
                if (local_f4 == piVar11) {
                  FUN_0055f070(&local_fc,piVar11,piVar7 + -6);
                  uVar6 = local_d0;
                  piVar11 = local_f8;
                }
                else {
                  FUN_004024e0(piVar11,piVar7 + -6);
                  *(char *)(piVar11 + 6) = (char)*piVar7;
                  piVar11[7] = piVar7[1];
                  local_f8 = piVar11 + 8;
                  uVar6 = local_d0;
                  piVar11 = local_f8;
                }
              }
              local_d4 = local_d4 + 1;
              piVar7 = piVar7 + 8;
            } while (local_d4 < uVar6);
            local_dc = local_fc;
          }
          piVar7 = local_cc;
          FUN_0055f230(local_cc,local_c8);
          local_14._0_1_ = 9;
          local_c8 = piVar7;
          if (0xf < uStack_40) {
            pvVar10 = local_54;
            if ((0xfff < uStack_40 + 1) &&
               (pvVar10 = *(void **)((int)local_54 + -4), uVar1 = (undefined1)local_14,
               0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10)))) goto LAB_0055d658;
            FUN_005adb3f(pvVar10);
          }
        }
      }
      uVar6 = (int)piVar11 - (int)local_dc >> 5;
      if (uVar6 != 0) {
        local_44 = 0;
        uStack_40 = 0xf;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        local_14 = CONCAT31(local_14._1_3_,0xd);
        uVar2 = 0;
        do {
          piVar11 = local_dc;
          if (0xf < (uint)local_dc[5]) {
            piVar11 = (int *)*local_dc;
          }
          FUN_00403640(&local_54,piVar11,local_dc[4]);
          piVar11 = local_104;
          uVar2 = uVar2 + 1;
          local_dc = local_dc + 8;
        } while (uVar2 < uVar6);
        piVar7 = (int *)local_104[1];
        if ((int *)local_104[2] == piVar7) {
          FUN_00403840(local_104,piVar7,&local_54);
        }
        else {
          FUN_004024e0(piVar7,&local_54);
          piVar11[1] = piVar11[1] + 0x18;
        }
        local_14._0_1_ = 9;
        if (0xf < uStack_40) {
          pvVar10 = local_54;
          if ((0xfff < uStack_40 + 1) &&
             (pvVar10 = *(void **)((int)local_54 + -4), uVar1 = (undefined1)local_14,
             0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10)))) goto LAB_0055d658;
          FUN_005adb3f(pvVar10);
        }
      }
      FUN_0055ed70((int *)&local_cc);
      local_14._0_1_ = 3;
      FUN_0055ed70((int *)&local_fc);
      local_120 = local_120 + 1;
    } while (local_120 < local_108);
  }
  local_108 = (local_104[1] - *local_104) / 0x18;
  if (0xf < local_28) {
    ppppppbVar5 = (byte ******)local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (ppppppbVar5 = (byte ******)local_3c[0][-1],
       (byte *)0x1f < (byte *)((int)local_3c[0] + (-4 - (int)ppppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppppbVar5);
  }
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (byte *****)((uint)local_3c[0] & 0xffffff00);
  FUN_0055ed70((int *)&local_f0);
  piVar7 = local_110;
  piVar11 = local_b8;
  if (local_b8 != (int *)0x0) {
    for (; piVar11 != piVar7; piVar11 = piVar11 + 3) {
      FUN_0055ed70(piVar11);
    }
    piVar11 = local_b8;
    if ((0xfff < (uint)((((int)local_118 - (int)local_b8) / 0xc) * 0xc)) &&
       (piVar11 = (int *)local_b8[-1], 0x1f < (uint)((int)local_b8 + (-4 - (int)piVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar11);
  }
  if (0xf < in_stack_00000018) {
    puVar12 = param_3;
    if ((0xfff < in_stack_00000018 + 1) &&
       (puVar12 = (undefined4 *)param_3[-1], 0x1f < (uint)((int)param_3 + (-4 - (int)puVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar12);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0055e1b0(int *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  Sprite *pSVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  Ref *this;
  Texture2D *this_00;
  byte bVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  void *pvVar14;
  uint uVar15;
  int *this_01;
  void *in_stack_ffffff50;
  undefined4 *in_stack_ffffff6c;
  Texture2D *pTVar16;
  undefined2 local_67;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  float local_4c;
  int local_48;
  Ref *local_44;
  int local_40;
  Sprite *local_3c;
  undefined2 local_38;
  undefined1 local_36;
  int *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7c76;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  if (*(char *)((int)param_1 + 0x27e) != '\0') {
    if (DAT_0065c308 == (undefined4 *)0x0) {
      pSVar5 = (Sprite *)FUN_005adb0f(0x468);
      local_8 = 0;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_3c = pSVar5;
      FUN_00402690(local_2c,"white.png",9);
      local_8._0_1_ = 1;
      cocos2d::Sprite::Sprite(pSVar5);
      local_8._0_1_ = 2;
      *(undefined ***)pSVar5 = DummyObject::vftable;
      *(undefined ***)(pSVar5 + 0x278) = DummyObject::vftable;
      cocos2d::Sprite::initWithFile(pSVar5,(basic_string<> *)local_2c);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_18) {
        pvVar14 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar14 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
LAB_0055e28a:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar14);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      DAT_0065c308 = (undefined4 *)pSVar5;
      cocos2d::Ref::retain((Ref *)pSVar5);
    }
    FUN_0055d0c0((int)param_1);
    cocos2d::Color3B::Color3B((Color3B *)&local_38);
    local_38 = DAT_0065b8b5;
    local_36 = DAT_0065b8b7;
    FUN_004024e0(&stack0xffffff6c,param_1 + 0xb0);
    iVar6 = FUN_0055d140(param_1 + 0xb6,param_1[0xa5],in_stack_ffffff6c);
    param_1[0xa7] = iVar6;
    iVar11 = param_1[0xb7] - param_1[0xb6];
    local_2d = '\0';
    iVar6 = iVar11 >> 0x1f;
    if (iVar11 / 0x18 + iVar6 != iVar6) {
      local_40 = 0;
      pSVar5 = (Sprite *)0x0;
      do {
        iVar7 = (**(code **)(*param_1 + 0xb0))();
        local_3c = pSVar5 + 1;
        uVar15 = 0;
        iVar6 = param_1[0xb6];
        puVar8 = (undefined4 *)(local_40 + iVar6);
        iVar11 = 0;
        local_48 = 0;
        local_4c = (*(float *)(iVar7 + 4) - (float)(param_1[0xa2] * (int)local_3c)) -
                   (float)(int)pSVar5;
        if (puVar8[4] != 0) {
          do {
            uVar2 = puVar8[5];
            puVar12 = puVar8;
            if (0xf < uVar2) {
              puVar12 = (undefined4 *)*puVar8;
            }
            param_1 = local_34;
            if (*(char *)((int)puVar12 + uVar15) == '`') {
              uVar15 = uVar15 + 1;
              if ((uint)puVar8[4] <= uVar15) break;
              puVar12 = puVar8;
              if (0xf < uVar2) {
                puVar12 = (undefined4 *)*puVar8;
              }
              if (*(char *)((int)puVar12 + uVar15) == 'a') {
                local_2d = '\x01';
              }
              else {
                if (0xf < uVar2) {
                  puVar8 = (undefined4 *)*puVar8;
                }
                puVar9 = FUN_0055cd40(&local_67,*(char *)((int)puVar8 + uVar15));
                local_38 = *puVar9;
                local_36 = *(undefined1 *)(puVar9 + 1);
                param_1 = local_34;
              }
            }
            else {
              puVar12 = puVar8;
              if (0xf < uVar2) {
                puVar12 = (undefined4 *)*puVar8;
              }
              if (*(char *)((int)puVar12 + uVar15) != ' ') {
                puVar12 = puVar8;
                if (0xf < uVar2) {
                  puVar12 = (undefined4 *)*puVar8;
                }
                bVar10 = *(byte *)((int)puVar12 + uVar15);
                if (local_2d != '\0') {
                  local_2d = '\0';
                  if (0xf < uVar2) {
                    puVar8 = (undefined4 *)*puVar8;
                  }
                  switch(*(undefined1 *)((int)puVar8 + uVar15)) {
                  case 0x30:
                    bVar10 = 0x88;
                    break;
                  case 0x31:
                    bVar10 = 0x82;
                    break;
                  case 0x32:
                    bVar10 = 0x83;
                    break;
                  case 0x33:
                    bVar10 = 0x84;
                    break;
                  case 0x34:
                    bVar10 = 0x85;
                    break;
                  case 0x35:
                    bVar10 = 4;
                    break;
                  case 0x36:
                    bVar10 = 5;
                    break;
                  case 0x37:
                    bVar10 = 6;
                    break;
                  case 0x38:
                    bVar10 = 7;
                    break;
                  case 0x39:
                    bVar10 = 0x87;
                    break;
                  case 0x61:
                    bVar10 = 0x8c;
                    break;
                  case 0x62:
                    bVar10 = 0x91;
                    break;
                  case 99:
                    bVar10 = 0x89;
                    break;
                  case 100:
                    bVar10 = 0x8d;
                    break;
                  case 0x65:
                    bVar10 = 0x8f;
                    break;
                  case 0x66:
                    bVar10 = 0x8a;
                    break;
                  case 0x67:
                    bVar10 = 0x8b;
                    break;
                  case 0x68:
                    bVar10 = 0x8e;
                    break;
                  case 0x69:
                    bVar10 = 0x90;
                    break;
                  case 0x6a:
                    bVar10 = 0xe;
                    break;
                  case 0x6b:
                    bVar10 = 0xf;
                    break;
                  case 0x6c:
                    bVar10 = 0x10;
                    break;
                  case 0x6d:
                    bVar10 = 0x11;
                    break;
                  case 0x6e:
                    bVar10 = 0x12;
                    break;
                  case 0x6f:
                    bVar10 = 0x92;
                    break;
                  case 0x70:
                    bVar10 = 0x93;
                    break;
                  case 0x71:
                    bVar10 = 0x94;
                    break;
                  case 0x72:
                    bVar10 = 0x95;
                    break;
                  case 0x73:
                    bVar10 = 0x96;
                    break;
                  case 0x74:
                    bVar10 = 0x97;
                    break;
                  case 0x75:
                    bVar10 = 0x98;
                    break;
                  case 0x76:
                    bVar10 = 0x99;
                    break;
                  case 0x77:
                    bVar10 = 0x9a;
                    break;
                  case 0x78:
                    bVar10 = 0x9b;
                  }
                }
                local_1c = 0;
                local_18 = 0xf;
                local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
                if (DAT_0065b3d0 == '\0') {
                  pcVar3 = (&PTR_s_CHAR_unknown_png_005e03b8)[bVar10];
                  pcVar13 = pcVar3;
                  do {
                    cVar1 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar1 != '\0');
                  FUN_00402690(local_2c,pcVar3,(int)pcVar13 - (int)(pcVar3 + 1));
                  local_8 = 4;
                  this = (Ref *)cocos2d::Sprite::createWithSpriteFrameName
                                          ((basic_string<> *)local_2c);
                }
                else {
                  pcVar3 = (&PTR_s_CHAR_unknown_png_005e0148)[bVar10];
                  pcVar13 = pcVar3;
                  do {
                    cVar1 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar1 != '\0');
                  FUN_00402690(local_2c,pcVar3,(int)pcVar13 - (int)(pcVar3 + 1));
                  local_8 = 3;
                  this = (Ref *)cocos2d::Sprite::create((basic_string<> *)local_2c);
                }
                local_8 = -1;
                local_44 = this;
                if (0xf < local_18) {
                  pvVar14 = local_2c[0];
                  if ((0xfff < local_18 + 1) &&
                     (pvVar14 = *(void **)((int)local_2c[0] + -4),
                     0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) goto LAB_0055e28a;
                  FUN_005adb3f(pvVar14);
                }
                pTVar16 = this_0065b3f4;
                this_00 = (Texture2D *)(**(code **)(*(int *)(this + 0x278) + 0xc))();
                cocos2d::Texture2D::setTexParameters(this_00,(_TexParams *)pTVar16);
                local_5c = 0;
                local_58 = 0;
                local_8 = 5;
                (**(code **)(*(int *)this + 0xa0))();
                piVar4 = local_34;
                local_8 = 0xffffffff;
                (**(code **)(*(int *)this + 0x40))();
                (**(code **)(*(int *)this + 0x25c))();
                local_64 = (float)local_48;
                local_60 = local_4c;
                local_8 = 6;
                (**(code **)(*(int *)this + 0x4c))();
                local_8 = 0xffffffff;
                cocos2d::Ref::retain(this);
                puVar8 = (undefined4 *)piVar4[0xba];
                this_01 = piVar4 + 0xb9;
                if ((int)puVar8 - *this_01 >> 2 == 0x10) {
                  local_54 = DAT_0065c308;
                  if ((undefined4 *)piVar4[0xbb] == puVar8) {
                    FUN_00414080(this_01,puVar8,&local_54);
                  }
                  else {
                    *puVar8 = DAT_0065c308;
                    piVar4[0xba] = piVar4[0xba] + 4;
                  }
                  puVar8 = (undefined4 *)piVar4[0xba];
                }
                if ((undefined4 *)piVar4[0xbb] == puVar8) {
                  FUN_00414080(this_01,puVar8,&local_44);
                }
                else {
                  *puVar8 = this;
                  piVar4[0xba] = piVar4[0xba] + 4;
                }
                param_1 = local_34;
                (**(code **)(*local_34 + 0x10c))();
                iVar11 = local_48;
              }
              iVar11 = iVar11 + 1 + param_1[0xa1];
              local_48 = iVar11;
            }
            uVar15 = uVar15 + 1;
            iVar6 = param_1[0xb6];
            puVar8 = (undefined4 *)(local_40 + iVar6);
          } while (uVar15 < (uint)puVar8[4]);
        }
        local_40 = local_40 + 0x18;
        pSVar5 = local_3c;
      } while (local_3c < (Sprite *)((param_1[0xb7] - iVar6) / 0x18));
    }
    if ((char)param_1[0x9f] != '\0') {
      if ((int *)param_1[0xa0] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0xa0] + 0x138))();
        param_1[0xa0] = 0;
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"white.png",9);
      local_8 = 7;
      pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_2c);
      local_8 = 0xffffffff;
      param_1[0xa0] = (int)pSVar5;
      if (0xf < local_18) {
        pvVar14 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar14 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar14);
      }
      (**(code **)(*param_1 + 0x108))();
      (**(code **)(*(int *)param_1[0xa0] + 0x25c))();
      (**(code **)(*(int *)param_1[0xa0] + 0x244))();
      local_50 = 0;
      local_4c = 0.0;
      local_8 = 8;
      (**(code **)(*(int *)param_1[0xa0] + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*(int *)param_1[0xa0] + 0x48))();
      FUN_004024e0(&stack0xffffff50,param_1 + 0xb0);
      FUN_0055ebd0(in_stack_ffffff50);
      iVar6 = *(int *)param_1[0xa0];
      (**(code **)(iVar6 + 0xb0))();
      piVar4 = local_34;
      (**(code **)(iVar6 + 0x24))();
      iVar6 = *(int *)piVar4[0xa0];
      (**(code **)(iVar6 + 0xb0))();
      param_1 = local_34;
      (**(code **)(iVar6 + 0x2c))();
    }
    *(undefined1 *)((int)param_1 + 0x27e) = 0;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_0055e9e0(void *param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffffb4;
  int local_24;
  int local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar6 = 0;
  local_14 = 0;
  FUN_004024e0(&stack0xffffffb4,&param_1);
  FUN_00592d70(&local_24,'\n',in_stack_ffffffb4);
  local_18 = (local_20 - local_24) / 0x18;
  if (local_18 != 0) {
    puVar5 = (uint *)(local_24 + 0x10);
    do {
      uVar7 = *puVar5;
      iVar3 = 0;
      uVar6 = 0;
      iVar4 = iVar3;
      if (uVar7 != 0) {
        do {
          puVar1 = puVar5 + -4;
          if (0xf < puVar5[1]) {
            puVar1 = (uint *)*puVar1;
          }
          iVar3 = iVar4 + 1;
          if (*(char *)((int)puVar1 + uVar6) != '`') {
            iVar3 = iVar4;
          }
          uVar6 = uVar6 + 1;
          iVar4 = iVar3;
        } while (uVar6 < uVar7);
      }
      uVar7 = uVar7 + iVar3 * -2;
      uVar6 = local_14;
      if (local_14 < uVar7 + 1) {
        uVar6 = uVar7;
      }
      puVar5 = puVar5 + 6;
      local_18 = local_18 + -1;
      local_14 = uVar6;
    } while (local_18 != 0);
  }
  FUN_004025a0(&local_24);
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar2 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar6;
}


undefined1 * __thiscall FUN_0055eaf0(void *this,undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7cc1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  uVar5 = 0;
  ppuVar2 = (undefined4 **)param_1;
  uVar3 = in_stack_00000018;
  uVar4 = in_stack_00000014;
  if (in_stack_00000014 != 0) {
    do {
      ppuVar1 = &param_1;
      if (0xf < uVar3) {
        ppuVar1 = ppuVar2;
      }
      if (*(char *)((int)ppuVar1 + uVar5) == '`') {
        uVar5 = uVar5 + 1;
      }
      else {
        ppuVar1 = &param_1;
        if (0xf < uVar3) {
          ppuVar1 = ppuVar2;
        }
        FUN_004034f0(this,*(undefined1 *)((int)ppuVar1 + uVar5));
        ppuVar2 = (undefined4 **)param_1;
        uVar3 = in_stack_00000018;
        uVar4 = in_stack_00000014;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (0xf < uVar3) {
    ppuVar1 = ppuVar2;
    if (0xfff < uVar3 + 1) {
      ppuVar1 = (undefined4 **)ppuVar2[-1];
      if (0x1f < (uint)((int)ppuVar2 + (-4 - (int)ppuVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppuVar1);
  }
  ExceptionList = local_10;
  return this;
}


int __cdecl FUN_0055ebd0(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  float in_XMM0_Da;
  uint in_stack_00000018;
  void *in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3198;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffc4,&param_1);
  uVar1 = FUN_0055e9e0(in_stack_ffffffc4);
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
  return (int)(in_XMM0_Da * 5.0 * (float)(int)uVar1 + (float)(int)(uVar1 - 1));
}


void __thiscall FUN_0055ec90(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x2e8) - *(int *)((int)this + 0x2e4) >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x2e4) + uVar1 * 4) + 0x244))(param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)((int)this + 0x2e8) - *(int *)((int)this + 0x2e4) >> 2));
  }
  return;
}


void __fastcall FUN_0055ece0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)param_1[1];
    if (piVar1 != piVar2) {
      do {
        FUN_0055ed70(piVar1);
        piVar1 = piVar1 + 3;
      } while (piVar1 != piVar2);
      piVar1 = (int *)*param_1;
    }
    piVar2 = piVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)piVar1) / 0xc) * 0xc)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void __fastcall thunk_FUN_0055ed70(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    FUN_0055f230((int *)*param_1,(int *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xffffffe0U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void __fastcall FUN_0055ed70(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    FUN_0055f230((int *)*param_1,(int *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xffffffe0U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_0055edd0(int *param_1,int *param_2)

{
  FUN_0055f230(param_1,param_2);
  return;
}


void FUN_0055edf0(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    FUN_0055ed70(param_1);
  }
  return;
}


int __thiscall FUN_0055ee60(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)this;
  iVar1 = ((int)param_1 - iVar5) / 0xc;
  iVar2 = (*(int *)((int)this + 4) - iVar5) / 0xc;
  if (iVar2 == 0x15555555) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = iVar2 + 1;
  uVar4 = (*(int *)((int)this + 8) - iVar5) / 0xc;
  uVar3 = uVar6;
  if ((uVar4 <= 0x15555555 - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar6)) {
    uVar3 = uVar6;
  }
  uVar6 = uVar3 * 0xc;
  if (uVar3 < 0x15555556) {
    if (0xfff < uVar6) goto LAB_0055ef20;
    if (uVar6 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)FUN_005adb0f(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_0055ef20:
    uVar4 = uVar6 + 0x23;
    if (uVar4 <= uVar6) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_005adb0f(uVar4);
    if (iVar5 == 0) goto LAB_0055ef43;
    puVar11 = (undefined4 *)(iVar5 + 0x23U & 0xffffffe0);
    puVar11[-1] = iVar5;
  }
  local_8 = 0;
  FUN_0055f2a0(puVar11 + iVar1 * 3,param_2);
  puVar8 = *(undefined4 **)((int)this + 4);
  puVar7 = *(undefined4 **)this;
  puVar12 = puVar11;
  if (param_1 != puVar8) {
    FUN_0055f3f0(*(undefined4 **)this,param_1,puVar11);
    puVar8 = *(undefined4 **)((int)this + 4);
    puVar7 = param_1;
    puVar12 = puVar11 + iVar1 * 3 + 3;
  }
  FUN_0055f3f0(puVar7,puVar8,puVar12);
  piVar9 = *(int **)this;
  if (piVar9 != (int *)0x0) {
    piVar10 = *(int **)((int)this + 4);
    if (piVar9 != piVar10) {
      do {
        FUN_0055ed70(piVar9);
        piVar9 = piVar9 + 3;
      } while (piVar9 != piVar10);
      piVar9 = *(int **)this;
    }
    piVar10 = piVar9;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)piVar9) / 0xc) * 0xc)) &&
       (piVar10 = (int *)piVar9[-1], 0x1f < (uint)((int)piVar9 + (-4 - (int)piVar10)))) {
LAB_0055ef43:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar10);
  }
  *(undefined4 **)this = puVar11;
  *(undefined4 **)((int)this + 4) = puVar11 + iVar2 * 3 + 3;
  *(undefined4 **)((int)this + 8) = puVar11 + uVar3 * 3;
  ExceptionList = local_10;
  return *(int *)this + iVar1 * 0xc;
}


int __thiscall FUN_0055f070(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7d00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 5;
  if (iVar4 == 0x7ffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar8 = *(int *)((int)this + 8) - iVar2 >> 5;
  uVar5 = uVar1;
  if ((uVar8 <= 0x7ffffff - (uVar8 >> 1)) && (uVar5 = (uVar8 >> 1) + uVar8, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar8 = uVar5 * 0x20;
  if (uVar5 < 0x8000000) {
    if (0xfff < uVar8) goto LAB_0055f102;
    if (uVar8 == 0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)FUN_005adb0f(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_0055f102:
    uVar6 = uVar8 + 0x23;
    if (uVar6 <= uVar8) {
      uVar6 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar6);
    if (iVar4 == 0) goto LAB_0055f125;
    piVar11 = (int *)(iVar4 + 0x23U & 0xffffffe0);
    piVar11[-1] = iVar4;
  }
  uVar8 = (int)param_1 - iVar2 & 0xffffffe0;
  local_8 = 0;
  FUN_004024e0((void *)(uVar8 + (int)piVar11),param_2);
  *(undefined1 *)(uVar8 + 0x18 + (int)piVar11) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(uVar8 + 0x1c + (int)piVar11) = param_2[7];
  puVar10 = *(undefined4 **)((int)this + 4);
  puVar9 = *(undefined4 **)this;
  piVar12 = piVar11;
  if (param_1 != puVar10) {
    FUN_0055f460(*(undefined4 **)this,param_1,piVar11);
    puVar10 = *(undefined4 **)((int)this + 4);
    puVar9 = param_1;
    piVar12 = (int *)((int)(uVar8 + (int)piVar11) + 0x20);
  }
  FUN_0055f460(puVar9,puVar10,piVar12);
  if (*(int **)this != (int *)0x0) {
    FUN_0055f230(*(int **)this,*(int **)((int)this + 4));
    pvVar3 = *(void **)this;
    pvVar7 = pvVar3;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar3 & 0xffffffe0U)) &&
       (pvVar7 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar7)))) {
LAB_0055f125:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  *(int **)this = piVar11;
  *(int **)((int)this + 4) = piVar11 + uVar1 * 8;
  *(int **)((int)this + 8) = piVar11 + uVar5 * 8;
  ExceptionList = local_10;
  return *(int *)this + uVar8;
}


void __fastcall FUN_0055f230(int *param_1,int *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < (uint)param_1[5]) {
      pvVar1 = (void *)*param_1;
      pvVar2 = pvVar1;
      if ((0xfff < param_1[5] + 1U) &&
         (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 8;
  } while( true );
}


uint * __thiscall FUN_0055f2a0(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7d28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar4 = param_1[1] - *param_1 >> 5;
  if (uVar4 != 0) {
    if (0x7ffffff < uVar4) {
                    // WARNING: Subroutine does not return
      FUN_00403b30();
    }
    uVar4 = uVar4 * 0x20;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005adb0f(uVar4);
      }
    }
    else {
      uVar2 = uVar4 + 0x23;
      if (uVar2 <= uVar4) {
        uVar2 = 0xffffffff;
      }
      iVar3 = FUN_005adb0f(uVar2);
      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar2 - 4) = iVar3;
    }
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = *(int *)this + uVar4;
    this_00 = *(int **)this;
    puVar1 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)*param_1;
    local_8 = 1;
    for (; puVar5 != puVar1; puVar5 = puVar5 + 8) {
      FUN_004024e0(this_00,puVar5);
      *(undefined1 *)(this_00 + 6) = *(undefined1 *)(puVar5 + 6);
      this_00[7] = puVar5[7];
      this_00 = this_00 + 8;
    }
    FUN_0055f230(this_00,this_00);
    *(int **)((int)this + 4) = this_00;
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __fastcall FUN_0055f3f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_3;
  if (param_1 != param_2) {
    puVar3 = param_1 + 2;
    do {
      *puVar4 = 0;
      puVar1 = puVar3 + 3;
      puVar4[1] = 0;
      puVar2 = puVar3 + 1;
      *(undefined4 *)((int)param_3 + (-0xc - (int)param_1) + (int)puVar1) = 0;
      *puVar4 = puVar3[-2];
      puVar4[1] = puVar3[-1];
      puVar4 = puVar4 + 3;
      *(undefined4 *)((int)param_3 + (-0xc - (int)param_1) + (int)puVar1) = *puVar3;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar1;
    } while (puVar2 != param_2);
  }
  return puVar4;
}


int * __fastcall FUN_0055f460(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 5;
    do {
      piVar6[4] = 0;
      *(undefined4 *)((int)param_3 + (-0x20 - (int)param_1) + (int)(puVar5 + 8)) = 0;
      iVar2 = puVar5[-4];
      iVar3 = puVar5[-3];
      iVar4 = puVar5[-2];
      *piVar6 = puVar5[-5];
      piVar6[1] = iVar2;
      piVar6[2] = iVar3;
      piVar6[3] = iVar4;
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      *(undefined1 *)(piVar6 + 6) = *(undefined1 *)(puVar5 + 1);
      piVar6[7] = puVar5[2];
      puVar1 = puVar5 + 3;
      piVar6 = piVar6 + 8;
      puVar5 = puVar5 + 8;
    } while (puVar1 != param_2);
  }
  FUN_0055f230(piVar6,piVar6);
  return piVar6;
}


void __fastcall FUN_0055f4e0(undefined4 *param_1)

{
  FUN_0055f230((int *)*param_1,(int *)param_1[1]);
  return;
}


void __thiscall FUN_0055f4ed(void *this,byte param_1)

{
  FUN_0055c4f0((void *)((int)this + -0x278),param_1);
  return;
}


void __thiscall
FUN_0055f500(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            int param_5,byte *param_6)

{
  Node *this_00;
  SpriteFrameCache *this_01;
  Node *pNVar1;
  uint uVar2;
  SpriteBatchNode *pSVar3;
  Texture2D *this_02;
  Size *pSVar4;
  Node *pNVar5;
  byte **ppbVar6;
  undefined4 extraout_ECX;
  void *pvVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  Node *pNVar11;
  Node *pNVar12;
  bool bVar13;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 *in_stack_ffffff84;
  basic_string<> *pbVar14;
  _TexParams *p_Var15;
  Size local_50 [4];
  void *local_4c;
  int local_48;
  int local_44;
  Node *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7d87;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_4;
  local_44 = param_5;
  local_8 = 0;
  local_4c = this;
  local_40 = this;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = TextField::vftable;
  *(undefined1 *)((int)this + 0x428) = 1;
  *(int *)((int)this + 0x42c) = param_4;
  *(int *)((int)this + 0x430) = param_5;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar10 = (undefined1 *)((int)this + 0x43c);
  iVar9 = 4000;
  do {
    *puVar10 = 0x20;
    cocos2d::Color3B::Color3B((Color3B *)(puVar10 + 1),'X',0xa1,'^');
    cocos2d::Color3B::Color3B((Color3B *)(puVar10 + 4),'\0','\0','\0');
    puVar10 = puVar10 + 7;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = 4000;
  pNVar11 = local_40 + 0x719c;
  do {
    *pNVar11 = (Node)0x20;
    cocos2d::Color3B::Color3B((Color3B *)(pNVar11 + 1),'X',0xa1,'^');
    cocos2d::Color3B::Color3B((Color3B *)(pNVar11 + 4),'\0','\0','\0');
    this_00 = local_40;
    pNVar11 = pNVar11 + 7;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  bVar13 = DAT_0065b3ea == '\0';
  *(undefined4 *)(local_40 + 0x15bfc) = 0;
  **(undefined1 **)(local_40 + 0x288) = 1;
  if (bVar13) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"dosfont.plist",0xd);
    pbVar14 = (basic_string<> *)local_2c;
    local_8._0_1_ = 3;
    this_01 = cocos2d::SpriteFrameCache::getInstance();
    cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_01,pbVar14);
    local_8._0_1_ = 2;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    cocos2d::StringUtils::format((char *)local_2c);
    local_8._0_1_ = 4;
    cocos2d::log("%s : %s");
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    DAT_0065b3ea = '\x01';
  }
  pNVar11 = this_00 + 0xdefc;
  local_40 = (Node *)0x50;
  pNVar12 = this_00 + 0x43c;
  do {
    iVar9 = 0x32;
    pNVar1 = pNVar11;
    pNVar5 = pNVar12;
    do {
      pNVar5[28000] = (Node)0x20;
      *pNVar5 = (Node)0x20;
      pNVar5 = pNVar5 + 0x230;
      *(undefined4 *)(pNVar1 + 16000) = 0;
      *(undefined4 *)pNVar1 = 0;
      iVar9 = iVar9 + -1;
      pNVar1 = pNVar1 + 0x140;
    } while (iVar9 != 0);
    pNVar11 = pNVar11 + 4;
    pNVar12 = pNVar12 + 7;
    local_40 = (Node *)((int)local_40 + -1);
  } while (local_40 != (Node *)0x0);
  ppbVar6 = &param_6;
  if (0xf < in_stack_0000002c) {
    ppbVar6 = (byte **)param_6;
  }
  uVar2 = FUN_004031f0((byte *)ppbVar6,in_stack_00000028,(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    FUN_004024e0(&stack0xffffff84,&param_6);
    FUN_0055fa40(this_00,extraout_ECX,0,in_stack_ffffff84);
  }
  local_38 = 0x2600;
  local_3c = 0x2600;
  local_34 = 0x812f;
  local_30 = 0x812f;
  if (DAT_0065b3d0 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"dosfont.png",0xb);
    local_8._0_1_ = 5;
    pSVar3 = cocos2d::SpriteBatchNode::create((basic_string<> *)local_2c,0x1d);
    local_8 = CONCAT31(local_8._1_3_,2);
    *(SpriteBatchNode **)(this_00 + 0x15bfc) = pSVar3;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar7 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    p_Var15 = (_TexParams *)&local_3c;
    this_02 = (Texture2D *)(**(code **)(*(int *)(*(int *)(this_00 + 0x15bfc) + 0x278) + 0xc))();
    cocos2d::Texture2D::setTexParameters(this_02,p_Var15);
    cocos2d::Node::addChild(this_00,*(Node **)(this_00 + 0x15bfc),1);
  }
  pSVar4 = (Size *)cocos2d::Size::Size(local_50,(float)(local_48 * 6),(float)(local_44 << 3));
  cocos2d::Node::setContentSize(this_00,pSVar4);
  if (0xf < in_stack_0000002c) {
    pbVar8 = param_6;
    if ((0xfff < in_stack_0000002c + 1) &&
       (pbVar8 = *(byte **)(param_6 + -4), (byte *)0x1f < param_6 + (-4 - (int)pbVar8))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_0055f8f0(void *this,byte param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar6 = DAT_0065b3d0 == '\0';
  *(undefined ***)this = TextField::vftable;
  if ((bVar6) && (*(int **)((int)this + 0x15bfc) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x15bfc) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x15bfc) = 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x11d7c);
  iVar5 = 0x50;
  do {
    iVar3 = 0x32;
    puVar2 = puVar4;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x50;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0055f9d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((DAT_0065b3d0 == '\0') && (*(int **)(param_1 + 0x15bfc) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x15bfc) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x15bfc) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x11d7c);
  iVar4 = 0x50;
  do {
    iVar2 = 0x32;
    puVar1 = puVar3;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x50;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


void __thiscall FUN_0055fa40(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint local_1c;
  undefined2 local_14;
  undefined1 local_12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c7db8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined1 *)((int)this + 0x428) = 1;
  cocos2d::Color3B::Color3B((Color3B *)&local_14,'X',0xa1,'^');
  iVar6 = -1;
  local_1c = 0;
  uVar5 = local_12;
  uVar8 = local_14;
  if (in_stack_0000001c != 0) {
    do {
      ppuVar2 = &param_3;
      if (0xf < in_stack_00000020) {
        ppuVar2 = (undefined4 **)param_3;
      }
      if (*(char *)((int)ppuVar2 + local_1c) == '`') {
        if (in_stack_0000001c <= local_1c) break;
        ppuVar2 = &param_3;
        if (0xf < in_stack_00000020) {
          ppuVar2 = (undefined4 **)param_3;
        }
        cVar1 = *(char *)((int)ppuVar2 + local_1c + 1);
        iVar7 = iVar6;
        if (cVar1 == 'b') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8a0;
          local_12 = DAT_0065b8a2;
          uVar5 = DAT_0065b8a2;
          uVar8 = DAT_0065b8a0;
        }
        else if ((byte)(cVar1 - 0x31U) < 9) {
          local_1c = local_1c + 1;
          uVar8 = *(undefined2 *)(&DAT_0065b810 + cVar1 * 3);
          uVar5 = (&DAT_0065b812)[cVar1 * 3];
          local_14 = uVar8;
          local_12 = uVar5;
        }
        else if (cVar1 == '0') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8be;
          local_12 = DAT_0065b8c0;
          uVar5 = DAT_0065b8c0;
          uVar8 = DAT_0065b8be;
        }
        else if (cVar1 == '!') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8c1;
          local_12 = DAT_0065b8c3;
          uVar5 = DAT_0065b8c3;
          uVar8 = DAT_0065b8c1;
        }
        else if (cVar1 == '@') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8c4;
          local_12 = DAT_0065b8c6;
          uVar5 = DAT_0065b8c6;
          uVar8 = DAT_0065b8c4;
        }
        else if (cVar1 == '#') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8c7;
          local_12 = DAT_0065b8c9;
          uVar5 = DAT_0065b8c9;
          uVar8 = DAT_0065b8c7;
        }
        else if (cVar1 == '$') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8ca;
          local_12 = DAT_0065b8cc;
          uVar5 = DAT_0065b8cc;
          uVar8 = DAT_0065b8ca;
        }
        else if (cVar1 == '%') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8cd;
          local_12 = DAT_0065b8cf;
          uVar5 = DAT_0065b8cf;
          uVar8 = DAT_0065b8cd;
        }
        else if (cVar1 == '^') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8d0;
          local_12 = DAT_0065b8d2;
          uVar5 = DAT_0065b8d2;
          uVar8 = DAT_0065b8d0;
        }
        else {
          local_1c = local_1c + 1;
          local_14 = DAT_0065b8b5;
          local_12 = DAT_0065b8b7;
          uVar5 = DAT_0065b8b7;
          uVar8 = DAT_0065b8b5;
        }
      }
      else {
        iVar7 = iVar6 + 1;
        if (*(int *)((int)this + 0x42c) <= iVar7) break;
        ppuVar2 = &param_3;
        if (0xf < in_stack_00000020) {
          ppuVar2 = (undefined4 **)param_3;
        }
        *(undefined1 *)((iVar7 + param_2 * 0x50) * 7 + 0x719c + (int)this) =
             *(undefined1 *)((int)ppuVar2 + local_1c);
        puVar3 = (undefined2 *)((iVar6 + 0x103c + param_2 * 0x50) * 7 + (int)this);
        *puVar3 = uVar8;
        *(undefined1 *)(puVar3 + 1) = uVar5;
      }
      local_1c = local_1c + 1;
      iVar6 = iVar7;
    } while (local_1c < in_stack_0000001c);
  }
  if (0xf < in_stack_00000020) {
    puVar4 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (puVar4 = (undefined4 *)param_3[-1], 0x1f < (uint)((int)param_3 + (-4 - (int)puVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar4);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0055fcc0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  uint uVar4;
  Sprite *pSVar5;
  int iVar6;
  DelayTime *pDVar7;
  FadeOut *pFVar8;
  DelayTime *pDVar9;
  FadeIn *pFVar10;
  Sequence *pSVar11;
  RepeatForever *pRVar12;
  Color3B *pCVar13;
  float *pfVar14;
  char *pcVar15;
  void *pvVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  undefined4 uVar20;
  Color3B local_73 [3];
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  void *local_2c [4];
  int *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7e1c;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  if (((char)param_1[0x10a] != '\0') && (param_1[0xa2] != 0)) {
    local_40 = 0;
    local_4c = param_1 + 0x475f;
    local_44 = 7;
    piVar18 = param_1 + 0x1c67;
    local_30 = 0x475f;
    do {
      local_34 = 0;
      local_3c = 0;
      local_50 = piVar18;
      local_48 = local_4c;
      do {
        iVar6 = local_34;
        cVar1 = (char)*piVar18;
        if ((cVar1 == '\0') || (cVar1 == ' ')) {
          if ((int *)param_1[local_30 + local_34] != (int *)0x0) {
            (**(code **)(*(int *)param_1[local_30 + local_34] + 0x138))(1,uVar4);
            param_1[local_30 + iVar6] = 0;
          }
        }
        else if (cVar1 != (char)piVar18[-7000]) {
          iVar19 = local_34 + local_30;
          if ((int *)param_1[iVar19] != (int *)0x0) {
            (**(code **)(*(int *)param_1[iVar19] + 0x138))(1);
            param_1[iVar19] = 0;
          }
          local_1c = (int *)0x0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (DAT_0065b3d0 == '\0') {
            pcVar2 = (&PTR_s_CHAR_unknown_png_005e0898)[(char)*piVar18];
            local_38 = pcVar2 + 1;
            pcVar15 = pcVar2;
            do {
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar1 != '\0');
            FUN_00402690(local_2c,pcVar2,(int)pcVar15 - (int)local_38);
            local_8 = 1;
            pSVar5 = cocos2d::Sprite::createWithSpriteFrameName((basic_string<> *)local_2c);
          }
          else {
            pcVar2 = (&PTR_s_CHAR_unknown_png_005e0628)[(char)*piVar18];
            local_38 = pcVar2 + 1;
            pcVar15 = pcVar2;
            do {
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar1 != '\0');
            FUN_00402690(local_2c,pcVar2,(int)pcVar15 - (int)local_38);
            local_8 = 0;
            pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_2c);
          }
          local_8 = 0xffffffff;
          param_1[iVar19] = (int)pSVar5;
          if (0xf < local_18) {
            pvVar16 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar16 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) goto LAB_0056026c;
            FUN_005adb3f(pvVar16);
          }
          local_58 = 0;
          local_54 = 0;
          local_8 = 2;
          (**(code **)(*(int *)*local_48 + 0xa0))(&local_58);
          local_8 = 0xffffffff;
          (**(code **)(*(int *)param_1[iVar19] + 0x25c))((char *)((int)piVar18 + 1));
          iVar6 = (**(code **)(*param_1 + 0xb0))();
          local_60 = (float)(int)((float)local_3c + (float)param_1[0x10d]);
          local_5c = (float)(int)((float)param_1[0x10e] +
                                 ((*(float *)(iVar6 + 4) - (float)local_44) - (float)local_40));
          local_8 = 3;
          (**(code **)(*(int *)param_1[iVar19] + 0x4c))(&local_60);
          local_8 = 0xffffffff;
          if (DAT_0065b3d0 == '\0') {
            iVar6 = *(int *)param_1[0x56ff];
          }
          else {
            iVar6 = *param_1;
          }
          (**(code **)(iVar6 + 0x10c))(param_1[iVar19]);
          iVar6 = local_34;
          if ((char)*piVar18 == '\x03') {
            uVar20 = 0;
            pDVar7 = cocos2d::DelayTime::create(0.4);
            pFVar8 = cocos2d::FadeOut::create(0.01);
            pDVar9 = cocos2d::DelayTime::create(0.4);
            pFVar10 = cocos2d::FadeIn::create(0.01);
            pSVar11 = cocos2d::Sequence::create
                                ((FiniteTimeAction *)pFVar10,pDVar9,pFVar8,pDVar7,uVar20);
            iVar6 = *(int *)param_1[iVar19];
            pRVar12 = cocos2d::RepeatForever::create((ActionInterval *)pSVar11);
            (**(code **)(iVar6 + 0x1d0))(pRVar12);
            iVar6 = local_34;
          }
        }
        pCVar13 = (Color3B *)cocos2d::Color3B::Color3B(local_73,'\0','\0','\0');
        bVar3 = cocos2d::Color3B::operator==((Color3B *)(piVar18 + 1),pCVar13);
        if (bVar3) {
          if ((int *)param_1[local_30 + iVar6 + -4000] != (int *)0x0) {
            (**(code **)(*(int *)param_1[local_30 + iVar6 + -4000] + 0xb4))(0);
          }
        }
        else {
          iVar6 = iVar6 + local_30;
          piVar17 = (int *)param_1[iVar6 + -4000];
          if (piVar17 == (int *)0x0) {
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            local_18 = 0xf;
            local_1c = piVar17;
            FUN_00402690(local_2c,"white.png",9);
            local_8 = 4;
            pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_2c);
            local_8 = 0xffffffff;
            param_1[iVar6 + -4000] = (int)pSVar5;
            if (0xf < local_18) {
              pvVar16 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar16 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
LAB_0056026c:
                local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar16);
            }
            iVar6 = *(int *)param_1[iVar6 + -4000];
            iVar19 = (**(code **)(iVar6 + 0xb0))();
            local_38 = *(char **)(iVar19 + 4);
            pfVar14 = (float *)(**(code **)(*(int *)param_1[local_30 + local_34 + -4000] + 0xb0))();
            (**(code **)(iVar6 + 0x3c))(6.0 / *pfVar14,7.0 / (float)local_38);
            local_68 = 0;
            local_64 = 0;
            iVar6 = local_30 + local_34;
            local_8 = 5;
            (**(code **)(*(int *)param_1[iVar6 + -4000] + 0xa0))(&local_68);
            local_8 = 0xffffffff;
            iVar19 = (**(code **)(*param_1 + 0xb0))();
            local_70 = (float)(int)((float)local_3c + (float)param_1[0x10d]);
            local_6c = (float)(int)((float)param_1[0x10e] +
                                   ((*(float *)(iVar19 + 4) - (float)local_44) - (float)local_40));
            local_8 = 6;
            (**(code **)(*(int *)param_1[iVar6 + -4000] + 0x4c))(&local_70);
            local_8 = 0xffffffff;
            (**(code **)(*param_1 + 0x10c))(param_1[iVar6 + -4000]);
            piVar17 = (int *)param_1[iVar6 + -4000];
          }
          (**(code **)(*piVar17 + 0x25c))(piVar18 + 1);
          (**(code **)(*(int *)param_1[iVar6 + -4000] + 0xb4))(1);
          iVar6 = local_34;
        }
        local_34 = iVar6 + 1;
        local_48 = local_48 + 1;
        local_3c = local_3c + 6;
        piVar18[-7000] = *piVar18;
        *(short *)(piVar18 + -6999) = (short)piVar18[1];
        *(char *)((int)piVar18 + -0x6d5a) = *(char *)((int)piVar18 + 6);
        piVar18 = (int *)((int)piVar18 + 7);
      } while (local_3c < 0x1e0);
      local_30 = local_30 + 0x50;
      local_4c = local_4c + 0x50;
      local_40 = local_40 + 1;
      piVar18 = local_50 + 0x8c;
      local_44 = local_44 + 7;
    } while (local_30 < 0x56ff);
    *(undefined1 *)(param_1 + 0x10a) = 0;
    *(undefined1 *)param_1[0xa2] = 1;
    local_50 = piVar18;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
