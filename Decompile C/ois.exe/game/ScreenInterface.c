#include "../ois.exe.h"


// public: __thiscall ScreenInterface::ScreenInterface(class RoomObject *,enum
// EScreenType::ScreenType,bool,class cocos2d::Sprite3D *,int,int,class ScreenLayout *)

ScreenInterface * __thiscall
ScreenInterface::ScreenInterface
          (ScreenInterface *this,RoomObject *param_1,ScreenType param_2,bool param_3,
          Sprite3D *param_4,int param_5,int param_6,ScreenLayout *param_7)

{
  GameData *pGVar1;
  bool bVar2;
  undefined4 *puVar3;
  Screen_PC *this_00;
  undefined4 uVar4;
  TopBar *this_01;
  int iVar5;
  undefined1 extraout_CL;
  undefined1 uVar6;
  basic_string<> *pbVar7;
  basic_string<> abStack_40 [8];
  undefined4 uStack_38;
  char *pcVar8;
  undefined1 uVar9;
  uint uVar10;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c9115;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (ScreenInterface)0x0;
  this[0x51] = (ScreenInterface)param_3;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined2 *)(this + 0x70) = 1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0xf;
  this[0x74] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0xf;
  this[0xa0] = (ScreenInterface)0x0;
  local_8 = 5;
  uStack_7 = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0xf;
  this[0xb8] = (ScreenInterface)0x0;
  std::basic_string<>::assign((basic_string<> *)(this + 0xb8),"%c_MouseCursor.png",0x12);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0xf;
  this[0xd0] = (ScreenInterface)0x0;
  local_8 = 7;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0xf8));
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0xf;
  this[0xfc] = (ScreenInterface)0x0;
  *(Sprite3D **)(this + 0x11c) = param_4;
  this[0x114] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 4;
  *(ScreenType *)(this + 0x128) = param_2;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0xf;
  this[0x130] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x148) = 0;
  this[0x14c] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x150) = 0x42800000;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  this[0x15c] = (ScreenInterface)0x0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(ScreenLayout **)(this + 0x180) = param_7;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(RoomObject **)(this + 0x18c) = param_1;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  local_8 = 0xc;
  uVar6 = local_8;
  local_8 = 0xc;
  *(undefined4 *)(this + 0x19c) = 0;
  if (param_7 != (ScreenLayout *)0x0) {
    *(undefined4 *)(this + 0x128) = 0;
  }
  if (param_5 == -1) {
    bVar2 = cc_assert_script_compatible("ERROR");
    if (bVar2) {
      ExceptionList = local_10;
      return this;
    }
    cocos2d::log("Assert failed: %s");
    ExceptionList = local_10;
    return this;
  }
  *(int *)(this + 0x60) = param_5;
  *(int *)(this + 0x68) = param_5;
  *(int *)(this + 100) = param_6;
  if (this[0x51] == (ScreenInterface)0x0) {
    *(int *)(this + 0x6c) = param_6;
  }
  else {
    *(int *)(this + 0x6c) = param_6 + 0xc;
  }
  iVar5 = *(int *)(this + 0x17c);
  if (iVar5 != 0) {
    *(int *)(iVar5 + 0x54) = param_5;
    *(undefined4 *)(iVar5 + 0x58) = 0xc;
  }
  iVar5 = *(int *)(this + 0x128);
  if (iVar5 == 1) {
    puVar3 = operator_new(0x44);
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[3] = this;
    puVar3[4] = 0;
    *puVar3 = Screen_Terminal::vftable;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    _local_8 = CONCAT31(uStack_7,0x10);
    std::basic_string<>::assign((basic_string<> *)(this + 0x30),"SysTerm",7);
    *(undefined1 *)(puVar3 + 1) = 1;
LAB_0055596f:
    *(undefined2 *)((int)puVar3 + 7) = 0x101;
  }
  else {
    local_8 = uVar6;
    if (iVar5 == 3) {
      this_00 = operator_new(0x50);
      local_8 = 0x11;
      uStack_38 = 0x555625;
      uVar4 = Screen_PC::Screen_PC(this_00,this,param_5,param_6);
      *(undefined4 *)(this + 300) = uVar4;
      goto LAB_0055597f;
    }
    if (iVar5 != 0) {
      if (iVar5 == 4) {
        puVar3 = operator_new(0x4c);
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puVar3[3] = this;
        puVar3[4] = 0;
        *puVar3 = Screen_TradeTerminal::vftable;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        uVar10 = 5;
        _local_8 = CONCAT31(uStack_7,0x18);
        pcVar8 = "Trade";
LAB_00555955:
        puVar3[0x10] = 0xffffffff;
        puVar3[0x11] = 0;
        *(undefined1 *)(puVar3 + 0x12) = 0;
      }
      else if (iVar5 == 5) {
        puVar3 = operator_new(0x48);
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puVar3[3] = this;
        puVar3[4] = 0;
        *puVar3 = Screen_UpgradeTerminal::vftable;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        uVar10 = 8;
        _local_8 = CONCAT31(uStack_7,0x1c);
        puVar3[0x11] = 0xffffffff;
        pcVar8 = "Mechanic";
      }
      else {
        if (iVar5 != 6) {
          if (iVar5 == 7) {
            puVar3 = operator_new(0x30);
            puVar3[1] = 0;
            *(undefined1 *)(puVar3 + 2) = 0;
            puVar3[3] = this;
            puVar3[4] = 0;
            *puVar3 = Screen_RTComms::vftable;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0;
            puVar3[10] = 0;
            puVar3[0xb] = 0;
            _local_8 = CONCAT31(uStack_7,0x23);
            std::basic_string<>::assign((basic_string<> *)(this + 0x30),"RTComms",7);
            pGVar1 = g_gameData;
            *(undefined1 *)((int)puVar3 + 7) = 1;
            *(undefined1 *)(puVar3 + 1) = 1;
            *(undefined4 *)(puVar3[3] + 0x188) =
                 *(undefined4 *)(*(int *)(*(int *)(pGVar1 + 0xd0) + 0x40) + 0x1c);
            goto LAB_00555975;
          }
          if (iVar5 != 8) goto LAB_0055597f;
          puVar3 = operator_new(0x4c);
          puVar3[1] = 0;
          *(undefined1 *)(puVar3 + 2) = 0;
          puVar3[3] = this;
          puVar3[4] = 0;
          *puVar3 = Screen_WeaponTerminal::vftable;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          uVar10 = 7;
          _local_8 = CONCAT31(uStack_7,0x27);
          pcVar8 = "Weapons";
          goto LAB_00555955;
        }
        puVar3 = operator_new(0x40);
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puVar3[3] = this;
        puVar3[4] = 0;
        *puVar3 = Screen_ContractTerminal::vftable;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        uVar10 = 9;
        _local_8 = CONCAT31(uStack_7,0x20);
        pcVar8 = "Contracts";
      }
      std::basic_string<>::assign((basic_string<> *)(this + 0x30),pcVar8,uVar10);
      goto LAB_0055596f;
    }
    puVar3 = operator_new(0x2c);
    puVar3[1] = 0x1000000;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[3] = this;
    *puVar3 = Screen_Custom::vftable;
    *(undefined1 *)((int)puVar3 + 0x15) = 1;
    puVar3[6] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    _local_8 = CONCAT31(uStack_7,0x14);
    puVar3[4] = param_7;
    pbVar7 = (basic_string<> *)(param_7 + 0x30);
    if ((basic_string<> *)(this + 0x30) != pbVar7) {
      if (0xf < *(uint *)(param_7 + 0x44)) {
        pbVar7 = *(basic_string<> **)pbVar7;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(this + 0x30),(char *)pbVar7,*(uint *)(param_7 + 0x40));
      param_7 = (ScreenLayout *)puVar3[4];
    }
    iVar5 = *(int *)(param_7 + 0x54);
    *(int *)(this + 0x184) = iVar5;
    if (iVar5 == 0) {
      *(undefined1 *)(puVar3 + 2) = 1;
    }
  }
LAB_00555975:
  *(undefined4 **)(this + 300) = puVar3;
LAB_0055597f:
  local_8 = 0xc;
  cleanupScreen(this);
  if (*(int **)(this + 300) != (int *)0x0) {
    (**(code **)(**(int **)(this + 300) + 4))();
  }
  std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)(this + 0xb8));
  setMouseCursor(this);
  if (*(int *)(*(int *)(this + 300) + 0x10) == 0) {
    this_01 = operator_new(0x88);
    _local_8 = CONCAT31(uStack_7,0x29);
    uVar9 = false;
    uVar6 = extraout_CL;
  }
  else {
    this_01 = operator_new(0x88);
    _local_8 = CONCAT31(uStack_7,0x28);
    uVar6 = *(undefined1 *)(*(int *)(*(int *)(this + 300) + 0x10) + 0x58);
    uVar9 = uVar6;
  }
  iVar5 = TopBar::TopBar(this_01,(bool)uVar6,(bool)uVar9);
  *(int *)(this + 0x17c) = iVar5;
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)(iVar5 + 0x58) = 0xc;
  this[0x70] = (ScreenInterface)0x1;
  ExceptionList = local_10;
  return this;
}


// public: __thiscall ScreenInterface::~ScreenInterface(void)

void __thiscall ScreenInterface::~ScreenInterface(ScreenInterface *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9130;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  cleanupScreen(this);
  if (*(int **)(this + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x120) + 0x138))(1,uVar2);
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x120));
    *(undefined4 *)(this + 0x120) = 0;
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 0x138))(1);
    cocos2d::Ref::autorelease(*(Ref **)(this + 0xe8));
    *(undefined4 *)(this + 0xe8) = 0;
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 0x138))(1);
    cocos2d::Ref::autorelease(*(Ref **)(this + 0xf4));
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(int **)(this + 0x154) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x154) + 0x138))(1);
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x154));
    *(undefined4 *)(this + 0x154) = 0;
  }
  if (*(int **)(this + 0x158) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x158) + 0x138))(1);
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x158));
    *(undefined4 *)(this + 0x158) = 0;
  }
  if (*(int **)(this + 300) != (int *)0x0) {
    (**(code **)(**(int **)(this + 300) + 0x10))();
    if (*(undefined4 **)(this + 300) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 300))(1);
    }
    *(undefined4 *)(this + 300) = 0;
  }
  if (*(int **)(this + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xec) + 0x138))(1);
    *(undefined4 *)(this + 0xec) = 0;
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 0x138))(1);
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 0x138))(1);
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 0x138))(1);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x138))(1);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  pvVar1 = *(void **)(this + 400);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x198) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 0x198) = 0;
  }
  uVar2 = *(uint *)(this + 0x144);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x130);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0xf;
  this[0x130] = (ScreenInterface)0x0;
  uVar2 = *(uint *)(this + 0x110);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0xfc);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0xf;
  this[0xfc] = (ScreenInterface)0x0;
  uVar2 = *(uint *)(this + 0xe4);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0xd0);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0xf;
  this[0xd0] = (ScreenInterface)0x0;
  uVar2 = *(uint *)(this + 0xcc);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0xb8);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0xf;
  this[0xb8] = (ScreenInterface)0x0;
  uVar2 = *(uint *)(this + 0xb4);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0xa0);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0xf;
  this[0xa0] = (ScreenInterface)0x0;
  std::vector<>::_Tidy((vector<> *)(this + 0x94));
  uVar2 = *(uint *)(this + 0x88);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x74);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0xf;
  this[0x74] = (ScreenInterface)0x0;
  uVar2 = *(uint *)(this + 0x44);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x30);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00555ecb;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (ScreenInterface)0x0;
  uVar2 = *(uint *)(this + 0x18);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_00555ecb:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (ScreenInterface)0x0;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ScreenInterface::setToolTip(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct cocos2d::Color3B)

void __thiscall ScreenInterface::setToolTip(ScreenInterface *this,basic_string<> *param_2)

{
  bool bVar1;
  basic_string<> *pbVar2;
  nothrow_t *pnVar3;
  uint uVar4;
  basic_string<> *pbVar5;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined2 uStack0000001c;
  ScreenInterface SStack0000001e;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar4 = in_stack_00000018;
  pbVar5 = param_2;
  puStack_c = &DAT_005b4f48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar2 = (basic_string<> *)&param_2;
  if (0xf < in_stack_00000018) {
    pbVar2 = param_2;
  }
  bVar1 = std::_Traits_equal<>
                    ((char *)pbVar2,in_stack_00000014,
                     (char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
  if (!bVar1) {
    this[0x114] = (ScreenInterface)0x1;
    if ((basic_string<> *)(this + 0xfc) != (basic_string<> *)&param_2) {
      pbVar2 = (basic_string<> *)&param_2;
      if (0xf < uVar4) {
        pbVar2 = pbVar5;
      }
      std::basic_string<>::assign((basic_string<> *)(this + 0xfc),(char *)pbVar2,in_stack_00000014);
      uVar4 = in_stack_00000018;
      pbVar5 = param_2;
    }
    *(undefined2 *)(this + 0xf8) = uStack0000001c;
    this[0xfa] = SStack0000001e;
  }
  if (0xf < uVar4) {
    pnVar3 = (nothrow_t *)(uVar4 + 1);
    pbVar2 = pbVar5;
    if ((nothrow_t *)0xfff < pnVar3) {
      pbVar2 = *(basic_string<> **)(pbVar5 + -4);
      pnVar3 = (nothrow_t *)(uVar4 + 0x24);
      if ((basic_string<> *)0x1f < pbVar5 + (-4 - (int)pbVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ScreenInterface::clearToolTip(void)

void __thiscall ScreenInterface::clearToolTip(ScreenInterface *this)

{
  bool bVar1;
  char *unaff_ESI;
  ScreenInterface *pSVar2;
  uint unaff_retaddr;
  
  pSVar2 = this + 0xfc;
  bVar1 = std::_Traits_equal<>("",0,unaff_ESI,unaff_retaddr);
  if (!bVar1) {
    *(undefined4 *)(this + 0x10c) = 0;
    if (0xf < *(uint *)(this + 0x110)) {
      pSVar2 = *(ScreenInterface **)pSVar2;
    }
    *pSVar2 = (ScreenInterface)0x0;
  }
  return;
}


// public: void __thiscall ScreenInterface::cleanupScreen(void)

void __thiscall ScreenInterface::cleanupScreen(ScreenInterface *this)

{
  int *piVar1;
  TopBar *this_00;
  int iVar2;
  uint uVar3;
  
  if (*(Ref **)(this + 0xf0) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0xf0));
    *(undefined4 *)(this + 0xf0) = 0;
  }
  uVar3 = 0;
  iVar2 = *(int *)(this + 400);
  if (*(int *)(this + 0x194) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x290))();
        cocos2d::Ref::autorelease(*(Ref **)(*(int *)(this + 400) + uVar3 * 4));
        (**(code **)(**(int **)(*(int *)(this + 400) + uVar3 * 4) + 0x19c))();
        piVar1 = *(int **)(*(int *)(this + 400) + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x138))(1);
          *(undefined4 *)(*(int *)(this + 400) + uVar3 * 4) = 0;
        }
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 400);
    } while (uVar3 < (uint)(*(int *)(this + 0x194) - iVar2 >> 2));
  }
  *(int *)(this + 0x194) = iVar2;
  this_00 = *(TopBar **)(this + 0x17c);
  if (this_00 != (TopBar *)0x0) {
    TopBar::~TopBar(this_00);
    operator_delete(this_00,(nothrow_t *)0x88);
    *(undefined4 *)(this + 0x17c) = 0;
  }
  return;
}


// public: void __thiscall ScreenInterface::setMouseCursor(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall ScreenInterface::setMouseCursor(ScreenInterface *this,basic_string<> *param_2)

{
  bool bVar1;
  basic_string<> *pbVar2;
  Sprite *pSVar3;
  void *pvVar4;
  basic_string<> *pbVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c9169;
  local_10 = ExceptionList;
  local_14 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pbVar5 = (basic_string<> *)(this + 0xd0);
  local_8 = 0;
  pbVar2 = pbVar5;
  if (0xf < *(uint *)(this + 0xe4)) {
    pbVar2 = *(basic_string<> **)pbVar5;
  }
  bVar1 = std::_Traits_equal<>((char *)pbVar2,*(uint *)(this + 0xe0),local_14,unaff_EDI);
  if (!bVar1) {
    if (*(Ref **)(this + 0xe8) != (Ref *)0x0) {
      cocos2d::Ref::autorelease(*(Ref **)(this + 0xe8));
      if (*(int **)(this + 0xe8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xe8) + 0x138))(1);
        *(undefined4 *)(this + 0xe8) = 0;
      }
    }
    pbVar2 = (basic_string<> *)&param_2;
    if (0xf < in_stack_00000018) {
      pbVar2 = param_2;
    }
    pbVar2 = (basic_string<> *)strUsingArgs((char *)local_2c,pbVar2,(int)(char)g_gameData[0xd4]);
    local_8._0_1_ = 1;
    pSVar3 = cocos2d::Sprite::create(pbVar2);
    local_8._0_1_ = 0;
    *(Sprite **)(this + 0xe8) = pSVar3;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar6);
    }
    local_34 = 0;
    local_30 = 0x3f800000;
    local_8._0_1_ = 2;
    (**(code **)(**(int **)(this + 0xe8) + 0xa0))(&local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)(this + 0xe8) + 0x2c))(&DAT_bf800000);
    (**(code **)(**(int **)(this + 0xe8) + 0x4c))(this + 0x168);
    cocos2d::Ref::retain(*(Ref **)(this + 0xe8));
    if (pbVar5 != (basic_string<> *)&param_2) {
      pbVar2 = (basic_string<> *)&param_2;
      if (0xf < in_stack_00000018) {
        pbVar2 = param_2;
      }
      std::basic_string<>::assign(pbVar5,(char *)pbVar2,in_stack_00000014);
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar5 = param_2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pbVar5 = *(basic_string<> **)(param_2 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall ScreenInterface::setMouseOverlay(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall ScreenInterface::setMouseOverlay(ScreenInterface *this,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  Sprite *pSVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  uint unaff_EDI;
  uint in_stack_00000018;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c91a1;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(Ref **)(this + 0x118) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x118));
    if (*(int **)(this + 0x118) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x118) + 0x138))(1);
      *(undefined4 *)(this + 0x118) = 0;
    }
  }
  uVar5 = in_stack_00000018;
  pvVar6 = param_2;
  bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    pSVar3 = cocos2d::Sprite::create((basic_string<> *)&param_2);
    *(Sprite **)(this + 0x118) = pSVar3;
    local_18 = 0;
    local_14 = 0x3f800000;
    local_8._0_1_ = 1;
    (**(code **)(*(int *)pSVar3 + 0xa0))(&local_18);
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)(this + 0x118) + 0x2c))(&DAT_bf800000);
    (**(code **)(**(int **)(this + 0x118) + 0x4c))(this + 0x168);
    cocos2d::Ref::retain(*(Ref **)(this + 0x118));
    uVar5 = in_stack_00000018;
    pvVar6 = param_2;
  }
  if (0xf < uVar5) {
    pnVar4 = (nothrow_t *)(uVar5 + 1);
    pvVar7 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar7 = *(void **)((int)pvVar6 + -4);
      pnVar4 = (nothrow_t *)(uVar5 + 0x24);
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar4);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ScreenInterface::updateMouseCursor(class cocos2d::Vec2)

void __thiscall ScreenInterface::updateMouseCursor(ScreenInterface *this)

{
  bool bVar1;
  ScreenInterface *pSVar2;
  int iVar3;
  uint unaff_EDI;
  int iVar4;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3eb9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar2 = this + 0xa0;
  local_8 = 0;
  uStack_30 = 0x55643e;
  bVar1 = std::_Traits_equal<>("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI)
  ;
  if (bVar1) {
    iVar4 = *(int *)(this + 0x94);
    local_14 = 0;
    iVar3 = *(int *)(this + 0x98) - iVar4 >> 0x1f;
    if ((*(int *)(this + 0x98) - iVar4) / 0x28 + iVar3 != iVar3) {
      iVar3 = 0;
      do {
        bVar1 = cocos2d::Rect::containsPoint((Rect *)(iVar3 + iVar4),(Vec2 *)&stack0x00000004);
        if (bVar1) {
          pSVar2 = (ScreenInterface *)(*(int *)(this + 0x94) + local_14 * 0x28 + 0x10);
          goto LAB_005564bc;
        }
        iVar4 = *(int *)(this + 0x94);
        iVar3 = iVar3 + 0x28;
        local_14 = local_14 + 1;
      } while (local_14 < (uint)((*(int *)(this + 0x98) - iVar4) / 0x28));
    }
    pSVar2 = this + 0xb8;
  }
LAB_005564bc:
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)pSVar2);
  setMouseCursor(this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall ScreenInterface::onMouseMove(class cocos2d::Vec2)

void __thiscall ScreenInterface::onMouseMove(ScreenInterface *this,float param_2,float param_3)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c91c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(float *)(this + 0x168) = (float)*(int *)(this + 0x68) * param_2;
  *(float *)(this + 0x16c) = (float)*(int *)(this + 0x6c) * param_3;
  updateMousePosition(this,false,false);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall ScreenInterface::onMouseUp(class cocos2d::Vec2)

void __thiscall ScreenInterface::onMouseUp(ScreenInterface *this,float param_2,float param_3)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c91f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(float *)(this + 0x168) = (float)*(int *)(this + 0x68) * param_2;
  *(float *)(this + 0x16c) = (float)*(int *)(this + 0x6c) * param_3;
  updateMousePosition(this,true,true);
  this[0x15c] = (ScreenInterface)0x0;
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall ScreenInterface::onMouseDown(class cocos2d::Vec2)

void __thiscall ScreenInterface::onMouseDown(ScreenInterface *this,float param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  basic_string<> *pbVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  basic_string<> abStack_64 [8];
  undefined4 uStack_5c;
  void **ppvStack_58;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005c9232;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(this + 0x160);
  *(float *)(this + 0x168) = (float)*(int *)(this + 0x68) * param_2;
  *(float *)(this + 0x16c) = (float)*(int *)(this + 0x6c) * param_3;
  if ((piVar1 != (int *)0x0) && (piVar1[0x107] != -1)) {
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x168);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x16c);
    local_8 = 1;
    (**(code **)(*piVar1 + 0x5c))();
    (**(code **)(**(int **)(this + 0x160) + 0x5c))();
    ppvStack_58 = (void **)0x5566ef;
    iVar2 = (**(code **)(**(int **)(this + 0x160) + 0x2dc))();
    *(int *)(this + 0x90) = iVar2;
    if (iVar2 != -1) {
      ppvStack_58 = local_2c;
      *(undefined4 *)(this + 0x8c) = *(undefined4 *)(*(int *)(this + 0x160) + 0x41c);
      uStack_5c = 0x55673a;
      pbVar3 = (basic_string<> *)(**(code **)(**(int **)(this + 0x160) + 0x2d8))();
      std::basic_string<>::operator=((basic_string<> *)(this + 0x74),pbVar3);
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ppvStack_58 = (void **)0x556778;
        operator_delete(pvVar4,pnVar5);
      }
      std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)(this + 0x74));
      setMouseOverlay(this);
    }
    local_8 = local_8 & 0xffffff00;
  }
  ppvStack_58 = (void **)0x55679c;
  updateMousePosition(this,true,false);
  this[0x15c] = (ScreenInterface)0x1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall ScreenInterface::updateMousePosition(bool,bool)

void __thiscall
ScreenInterface::updateMousePosition(ScreenInterface *this,bool param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  Vec2 *pVVar5;
  Size *pSVar6;
  int iVar7;
  PresentationInterface *pPVar8;
  int *piVar9;
  SoundEngine *pSVar10;
  RoomObject *pRVar11;
  ScreenElement *pSVar12;
  float *pfVar13;
  int iVar14;
  ScreenElement *pSVar15;
  float fVar16;
  uint uVar17;
  Vec2 *unaff_EDI;
  int iVar18;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  Ship *pSVar19;
  Sound SVar20;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9269;
  local_10 = ExceptionList;
  pVVar5 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_18 = CONCAT31((int3)((uint)ExceptionList >> 8),param_2);
  if ((*(int *)(this + 0x17c) != 0) && (this[0x51] != (ScreenInterface)0x0)) {
    piVar9 = *(int **)(*(int *)(this + 0x17c) + 0x2c);
    if (piVar9 == (int *)0x0) {
      cocos2d::Size::Size((Size *)&local_24,0.0,0.0);
    }
    else {
      pSVar6 = (Size *)(**(code **)(*piVar9 + 0xb0))();
      cocos2d::Size::Size((Size *)&local_24,pSVar6);
    }
    iVar7 = (int)local_20;
    local_20 = (float)(uint)(*(float *)(this + 0x16c) <= (float)iVar7);
    *(bool *)(*(int *)(this + 0x17c) + 0x84) = *(float *)(this + 0x16c) <= (float)iVar7;
    iVar18 = (int)*(float *)(this + 0x168);
    iVar7 = *(int *)(this + 0x17c);
    if (*(int *)(iVar7 + 0x54) + -0xb < iVar18) {
      iVar18 = -2;
LAB_005569ed:
      local_1c = *(float *)(iVar7 + 0x68);
      uVar17 = 0;
      iVar14 = *(int *)(iVar7 + 0x6c) - (int)local_1c;
      iVar1 = iVar14 >> 0x1f;
      iVar14 = iVar14 / 0x2c + iVar1;
      if (iVar14 != iVar1) {
        piVar9 = (int *)((int)local_1c + 0x24);
        do {
          if (*piVar9 == iVar18) {
            uVar2 = *(uint *)(iVar7 + 0x80);
            *(uint *)(iVar7 + 0x80) = uVar17;
            if (uVar2 != uVar17) goto LAB_0055690b;
            goto LAB_00556916;
          }
          uVar17 = uVar17 + 1;
          piVar9 = piVar9 + 0xb;
        } while (uVar17 < (uint)(iVar14 - iVar1));
      }
      if (*(int *)(iVar7 + 0x80) != -1) goto LAB_0055690b;
      *(undefined4 *)(iVar7 + 0x80) = 0xffffffff;
    }
    else {
      local_14 = *(float *)(iVar7 + 0x68);
      local_1c = (float)((*(int *)(iVar7 + 0x6c) - (int)local_14) / 0x2c);
      if ((uint)local_1c < 2) {
        iVar18 = -1;
      }
      else {
        fVar16 = 0.0;
        if (local_1c != 0.0) {
          piVar9 = (int *)((int)local_14 + 0x20);
          do {
            if ((piVar9[-1] <= iVar18) && (iVar18 <= *piVar9 + piVar9[-1])) {
              iVar18 = *(int *)((int)fVar16 * 0x2c + 0x24 + (int)local_14);
              goto LAB_005568e8;
            }
            fVar16 = (float)((int)fVar16 + 1);
            piVar9 = piVar9 + 0xb;
          } while ((uint)fVar16 < (uint)local_1c);
        }
        iVar18 = -1;
LAB_005568e8:
        if (iVar18 != -1) goto LAB_005569ed;
      }
      if (*(int *)(iVar7 + 0x80) == -1) goto LAB_005569ed;
      *(undefined4 *)(iVar7 + 0x80) = 0xffffffff;
LAB_0055690b:
      TopBar::render(*(TopBar **)(this + 0x17c));
    }
LAB_00556916:
    if (((char)local_18 != '\0') && (local_20._0_1_ != '\0')) {
      if (-1 < iVar18) {
        pPVar8 = Singleton<>::getInstance();
        if (*(int *)(pPVar8 + 0x350) == 0) {
          ExceptionList = local_10;
          return;
        }
        if ((*(int *)(pPVar8 + 0x34c) != 0) &&
           (*(int *)(*(int *)(pPVar8 + 0x34c) + 0x388) == iVar18)) {
          ExceptionList = local_10;
          return;
        }
        pRVar11 = *(RoomObject **)(*(int *)(*(int *)(pPVar8 + 0x350) + 0xc) + 0x54);
        iVar7 = *(int *)(pRVar11 + iVar18 * 4 + 0x624);
        iVar1 = *(int *)(pRVar11 + *(int *)(pRVar11 + 0x388) * 4 + 0x624);
        *(undefined4 *)(iVar7 + 0x168) = *(undefined4 *)(iVar1 + 0x168);
        *(undefined4 *)(iVar7 + 0x16c) = *(undefined4 *)(iVar1 + 0x16c);
        *(int *)(pRVar11 + 0x388) = iVar18;
        RoomObject::resetScreen(pRVar11,SUB41(pRVar11,0));
        iVar7 = *(int *)(pPVar8 + 0x3a0);
        if ((iVar7 == 0) || (pPVar8[0x39d] == (PresentationInterface)0x0)) {
          PresentationInterface::switchToConsoleID(pPVar8,*(int *)(pPVar8 + 0x348));
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x624 + *(int *)(iVar7 + 0x388) * 4);
          *(int *)(pPVar8 + 0x354) = iVar7;
          *(undefined4 *)(pPVar8 + 0x350) = *(undefined4 *)(iVar7 + 300);
        }
        iVar7 = -1;
        SVar20 = 8;
        pSVar19 = *(Ship **)(g_gameData + 0xd0);
        uStack_44 = 0x556a7b;
        pSVar10 = Singleton<>::getInstance();
        uStack_44 = 0x556a82;
        SoundEngine::playSound(pSVar10,pSVar19,SVar20,iVar7);
        ExceptionList = local_10;
        return;
      }
      if (iVar18 == -1) {
        iVar7 = *(int *)(*(int *)(this + 0x17c) + 0x60);
        if (iVar7 != 0) {
          if ((*(char *)(iVar7 + 0x3a4) == '\0') && (*(char *)(iVar7 + 0x3a5) == '\0')) {
            pPVar8 = Singleton<>::getInstance();
            if ((((*(int *)(pPVar8 + 0x350) != 0) && (iVar7 = *(int *)(pPVar8 + 0x34c), iVar7 != 0))
                && (iVar18 = (*(int *)(iVar7 + 0x398) - *(int *)(iVar7 + 0x394)) / 0x50,
                   *(char *)(*(int *)(iVar7 + 0x394) + -0x4b + iVar18 * 0x50) != '\0')) &&
               (*(int *)(iVar7 + 0x388) != iVar18 + -2)) {
              *(undefined1 *)(iVar7 + 0x3a4) = 0;
              *(undefined1 *)(*(int *)(pPVar8 + 0x34c) + 0x3a5) = 1;
              iVar7 = *(int *)(pPVar8 + 0x34c);
              iVar18 = 0;
              if (*(char *)(*(int *)(iVar7 + 0x394) + 5 + *(int *)(iVar7 + 0x388) * 0x50) == '\0') {
                iVar18 = *(int *)(iVar7 + 0x388);
              }
              *(int *)(iVar7 + 0x3a0) = iVar18;
              iVar7 = *(int *)(pPVar8 + 0x34c);
              iVar18 = *(int *)(iVar7 + 0x398) - *(int *)(iVar7 + 0x394);
              *(int *)(iVar7 + 0x388) = iVar18 / 0x50 + -2;
              RoomObject::resetScreen(*(RoomObject **)(pPVar8 + 0x34c),SUB41(iVar18,0));
              PresentationInterface::switchToConsoleID(pPVar8,*(int *)(pPVar8 + 0x348));
              SVar20 = 8;
LAB_00556d98:
              iVar7 = -1;
              pSVar19 = *(Ship **)(g_gameData + 0xd0);
              uStack_44 = 0x556da8;
              pSVar10 = Singleton<>::getInstance();
              uStack_44 = 0x556daf;
              SoundEngine::playSound(pSVar10,pSVar19,SVar20,iVar7);
            }
          }
          else {
            pPVar8 = Singleton<>::getInstance();
            if ((*(int *)(pPVar8 + 0x350) != 0) &&
               ((iVar7 = *(int *)(pPVar8 + 0x34c), iVar7 != 0 &&
                (*(int *)(iVar7 + 0x388) != *(int *)(iVar7 + 0x3a0))))) {
              *(undefined1 *)(iVar7 + 0x3a4) = 0;
              *(undefined1 *)(*(int *)(pPVar8 + 0x34c) + 0x3a5) = 0;
              iVar7 = *(int *)(pPVar8 + 0x34c);
              *(undefined4 *)(iVar7 + 0x388) = *(undefined4 *)(iVar7 + 0x3a0);
              pRVar11 = *(RoomObject **)(pPVar8 + 0x34c);
LAB_00556d82:
              RoomObject::resetScreen(pRVar11,SUB41(iVar7,0));
              PresentationInterface::switchToConsoleID(pPVar8,*(int *)(pPVar8 + 0x348));
              SVar20 = 9;
              goto LAB_00556d98;
            }
          }
        }
      }
      else if ((iVar18 == -2) && (iVar7 = *(int *)(*(int *)(this + 0x17c) + 0x60), iVar7 != 0)) {
        if ((*(char *)(iVar7 + 0x3a4) == '\0') && (*(char *)(iVar7 + 0x3a5) == '\0')) {
          pPVar8 = Singleton<>::getInstance();
          if (*(int *)(pPVar8 + 0x350) != 0) {
            pRVar11 = *(RoomObject **)(pPVar8 + 0x34c);
            if (pRVar11 == (RoomObject *)0x0) {
              iVar7 = *(int *)(*(Room **)(pPVar8 + 0x2d4) + 0x38);
              if ((iVar7 == -1) ||
                 (pRVar11 = Room::getObjectForScreenID(*(Room **)(pPVar8 + 0x2d4),iVar7),
                 pRVar11 == (RoomObject *)0x0)) goto LAB_00556daf;
            }
            iVar7 = (*(int *)(pRVar11 + 0x398) - *(int *)(pRVar11 + 0x394)) / 0x50;
            if ((*(char *)(*(int *)(pRVar11 + 0x394) + -0x4b + iVar7 * 0x50) != '\0') &&
               (iVar18 = *(int *)(pRVar11 + 0x388), iVar18 != iVar7 + -1)) {
              *(undefined2 *)(pRVar11 + 0x3a4) = 1;
              iVar7 = 0;
              if (*(char *)(*(int *)(pRVar11 + 0x394) + 5 + iVar18 * 0x50) == '\0') {
                iVar7 = iVar18;
              }
              *(int *)(pRVar11 + 0x3a0) = iVar7;
              *(int *)(pRVar11 + 0x388) =
                   (*(int *)(pRVar11 + 0x398) - *(int *)(pRVar11 + 0x394)) / 0x50 + -1;
              RoomObject::resetScreen
                        (pRVar11,SUB41(*(int *)(pRVar11 + 0x398) - *(int *)(pRVar11 + 0x394),0));
              PresentationInterface::switchToConsoleID(pPVar8,*(int *)(pPVar8 + 0x348));
              SVar20 = 8;
              goto LAB_00556d98;
            }
          }
        }
        else {
          pPVar8 = Singleton<>::getInstance();
          if (*(int *)(pPVar8 + 0x350) != 0) {
            pRVar11 = *(RoomObject **)(pPVar8 + 0x34c);
            if (pRVar11 == (RoomObject *)0x0) {
              iVar7 = *(int *)(*(Room **)(pPVar8 + 0x2d4) + 0x38);
              if (iVar7 == -1) goto LAB_00556daf;
              pRVar11 = Room::getObject(*(Room **)(pPVar8 + 0x2d4),iVar7);
            }
            iVar7 = *(int *)(pRVar11 + 0x3a0);
            if (*(int *)(pRVar11 + 0x388) != iVar7) {
              *(int *)(pRVar11 + 0x388) = iVar7;
              *(undefined2 *)(pRVar11 + 0x3a4) = 0;
              goto LAB_00556d82;
            }
          }
        }
      }
    }
  }
LAB_00556daf:
  pSVar12 = getElementAtPosition(this);
  pSVar15 = *(ScreenElement **)(this + 0x160);
  if (pSVar12 == (ScreenElement *)0x0) {
    if (pSVar15 != (ScreenElement *)0x0) {
      (**(code **)(*(int *)pSVar15 + 0x298))();
      if (*(char *)((int)*(int **)(this + 0x160) + 0x286) != '\0') {
        (**(code **)(**(int **)(this + 0x160) + 0x2b4))();
        (**(code **)(**(int **)(this + 0x160) + 0x2ac))();
      }
    }
    cVar4 = (char)local_18;
    if (cVar4 == '\0') goto LAB_00557207;
    if (*(int *)(this + 0x164) != 0) {
      debugPrint("DETAIL","De-select an element in this screen.");
      *(undefined1 *)(*(int *)(this + 0x164) + 0x418) = 0;
      (**(code **)(**(int **)(this + 0x164) + 0x2c0))();
      (**(code **)(**(int **)(this + 0x164) + 0x294))();
      *(undefined4 *)(this + 0x164) = 0;
      goto LAB_005571b0;
    }
  }
  else {
    if ((pSVar12 != pSVar15) && (pSVar15 != (ScreenElement *)0x0)) {
      if (pSVar15[0x286] != (ScreenElement)0x0) {
        (**(code **)(*(int *)pSVar15 + 0x2b4))();
        (**(code **)(**(int **)(this + 0x160) + 0x2ac))();
        pSVar15 = *(ScreenElement **)(this + 0x160);
      }
      (**(code **)(*(int *)pSVar15 + 0x298))();
    }
    if ((pSVar12[0x285] != (ScreenElement)0x0) &&
       (local_18 = local_18 & 0xff, this[0x15c] != (ScreenInterface)0x0)) {
      local_18 = 1;
    }
    local_24 = *(float *)(this + 0x168);
    fVar16 = *(float *)(this + 0x16c);
    local_8 = 0;
    local_20 = fVar16;
    local_14 = local_24;
    pfVar13 = (float *)(**(code **)(*(int *)pSVar12 + 0x5c))();
    local_24 = local_14 - *pfVar13;
    local_14 = local_24;
    iVar7 = (**(code **)(*(int *)pSVar12 + 0x5c))();
    local_20 = (float)*(int *)(pSVar12 + 0x2a4) + (fVar16 - *(float *)(iVar7 + 4));
    local_1c = local_20;
    if (this[0x15c] != (ScreenInterface)0x0) {
      (**(code **)(*(int *)pSVar12 + 0x2a4))();
    }
    fVar16 = local_14;
    (**(code **)(*(int *)pSVar12 + 0x2b0))();
    if ((*(int **)(this + 0x188) == (int *)0x0) ||
       (cVar4 = (**(code **)(**(int **)(this + 0x188) + 0x10))(), cVar4 != '\0')) {
      if ((char)local_18 == '\0') {
        if (param_1) {
          if (pSVar12[0x286] != (ScreenElement)0x0) {
            (**(code **)(*(int *)pSVar12 + 0x2a4))();
          }
          (**(code **)(*(int *)pSVar12 + 0x298))();
        }
      }
      else {
        bVar3 = false;
        if ((*(int *)(this + 0x8c) == -1) || (fastDistance(pVVar5,unaff_EDI), fVar16 <= 4.0)) {
          if ((pSVar12[0x287] == (ScreenElement)0x0) || (pSVar12[0x27c] == (ScreenElement)0x0)) {
            if ((pSVar12[0x286] == (ScreenElement)0x0) || (pSVar12[0x27c] == (ScreenElement)0x0)) {
              uStack_44 = 0x557047;
              (**(code **)(**(int **)(this + 300) + 0x2c))();
            }
            else {
              (**(code **)(*(int *)pSVar12 + 0x2a8))();
            }
          }
          else {
            debugPrint("DETAIL","Selected UI element");
            if (*(int *)(this + 0x164) != 0) {
              *(undefined1 *)(*(int *)(this + 0x164) + 0x418) = 0;
              (**(code **)(**(int **)(this + 0x164) + 0x2c0))();
              (**(code **)(**(int **)(this + 0x164) + 0x294))();
            }
            *(ScreenElement **)(this + 0x164) = pSVar12;
            pSVar12[0x418] = (ScreenElement)0x1;
            (**(code **)(**(int **)(this + 0x164) + 700))();
            (**(code **)(**(int **)(this + 0x164) + 0x294))();
            bVar3 = true;
          }
        }
        else {
          uStack_44 = *(undefined4 *)(this + 0x8c);
          uStack_4c = CONCAT44(0x556f63,(undefined4)uStack_4c);
          (**(code **)(*(int *)pSVar12 + 0x2e4))();
        }
        uStack_4c = 0;
        (**(code **)(*(int *)pSVar12 + 0x298))();
        if ((!bVar3) && (*(int *)(this + 0x164) != 0)) {
          debugPrint("DETAIL","De-select an element in this screen.");
          *(undefined1 *)(*(int *)(this + 0x164) + 0x418) = 0;
          (**(code **)(**(int **)(this + 0x164) + 0x2c0))();
          (**(code **)(**(int **)(this + 0x164) + 0x294))();
          *(undefined4 *)(this + 0x164) = 0;
          local_8 = 0xffffffff;
          goto LAB_005571b0;
        }
      }
    }
    local_8 = 0xffffffff;
LAB_005571b0:
    cVar4 = (char)local_18;
  }
  if (cVar4 != '\0') {
    std::basic_string<>::assign((basic_string<> *)(this + 0x74),"",0);
    uStack_4c = uStack_4c & 0xffffffffffffff00;
    std::basic_string<>::assign((basic_string<> *)&uStack_4c,"",0);
    setMouseOverlay(this);
    *(undefined4 *)(this + 0x8c) = 0xffffffff;
    *(undefined4 *)(this + 0x90) = 0xffffffff;
    this[0x70] = (ScreenInterface)0x1;
  }
LAB_00557207:
  *(ScreenElement **)(this + 0x160) = pSVar12;
  updateMouseCursor(this);
  ExceptionList = local_10;
  return;
}


// public: class ScreenElement * __thiscall ScreenInterface::getElementAtPosition(class
// cocos2d::Vec2)

ScreenElement * __thiscall
ScreenInterface::getElementAtPosition(ScreenInterface *this,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c9299;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0;
  iVar4 = *(int *)(this + 400);
  if (*(int *)(this + 0x194) - iVar4 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar4 + uVar5 * 4);
      if (((((char)piVar1[0xa1] != '\0') || (*(char *)((int)piVar1 + 0x287) != '\0')) &&
          ((char)piVar1[0x9f] != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x2e8))(param_2,param_3,uVar3), cVar2 != '\0')) {
        ExceptionList = local_10;
        return *(ScreenElement **)(*(int *)(this + 400) + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)(this + 400);
    } while (uVar5 < (uint)(*(int *)(this + 0x194) - iVar4 >> 2));
  }
  ExceptionList = local_10;
  return (ScreenElement *)0x0;
}


// public: void __thiscall ScreenInterface::update(float,bool)

void __thiscall ScreenInterface::update(ScreenInterface *this,float param_1,bool param_2)

{
  basic_string<> *this_00;
  int *piVar1;
  int iVar2;
  ShipModule *this_01;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  basic_string<> *pbVar6;
  RenderTexture *this_02;
  UIText *pUVar7;
  Scale9Sprite *pSVar8;
  float *pfVar9;
  ScreenElement *pSVar10;
  Node *pNVar11;
  basic_string<> *pbVar12;
  Sprite *pSVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  void *pvVar17;
  nothrow_t *pnVar18;
  ScreenInterface *pSVar19;
  code *pcVar20;
  basic_string<> *unaff_EDI;
  ConsoleDamage *pCVar21;
  Texture2D *pTVar22;
  float fVar23;
  float in_XMM1_Da;
  char *pcVar24;
  uint uVar25;
  Size local_94 [4];
  float *local_90;
  ScreenInterface *local_8c;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  ConsoleDamage *local_7c;
  ScreenElement local_75;
  undefined4 local_74;
  float local_70;
  void *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *local_5c;
  uint uStack_58;
  basic_string<> *local_54 [4];
  uint local_44;
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_2c;
  uint uStack_28;
  basic_string<> *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005c9376;
  local_1c = ExceptionList;
  pbVar6 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_8c = this;
  local_84 = in_XMM1_Da;
  local_24 = pbVar6;
  puVar3 = &stack0xfffffffc;
  if (((g_gameData == (GameData *)0x0) ||
      (puVar3 = &stack0xfffffffc, *(int *)(g_gameData + 0xd0) == 0)) ||
     (puVar3 = &stack0xfffffffc, *(int *)(*(int *)(g_gameData + 0xd0) + 0x40) == 0))
  goto LAB_00558eba;
  puVar3 = &stack0xfffffffc;
  if (*(TopBar **)(this + 0x17c) != (TopBar *)0x0) {
    TopBar::runLogic(*(TopBar **)(this + 0x17c),(float)pbVar6);
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  local_80 = *(int *)(this + 0x184);
  if (local_80 != 0) {
    iVar14 = 0;
    piVar16 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
    piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
    local_7c = (ConsoleDamage *)((uint)((int)piVar1 + (3 - (int)piVar16)) >> 2);
    if (piVar1 < piVar16) {
      local_7c = (ConsoleDamage *)0x0;
    }
    if (local_7c != (ConsoleDamage *)0x0) {
      pCVar21 = (ConsoleDamage *)0x0;
      iVar15 = iVar14;
      do {
        iVar2 = *piVar16;
        iVar14 = iVar15;
        if (((*(int *)(*(int *)(*piVar16 + 8) + 4) == local_80) && (iVar14 = iVar2, iVar15 != 0)) &&
           ((iVar14 = iVar15, *(char *)(iVar15 + 99) == '\0' && (*(char *)(iVar2 + 99) != '\0')))) {
          iVar14 = iVar2;
        }
        pCVar21 = pCVar21 + 1;
        piVar16 = piVar16 + 1;
        iVar15 = iVar14;
        this = local_8c;
      } while (pCVar21 != local_7c);
    }
    if ((*(int *)(this + 0x188) == 0) || (*(int *)(this + 0x188) != iVar14)) {
      *(int *)(this + 0x188) = iVar14;
    }
  }
  if (*(int *)(this + 0x120) == 0) {
    this_02 = cocos2d::RenderTexture::create(*(int *)(this + 0x68),*(int *)(this + 0x6c));
    *(RenderTexture **)(this + 0x120) = this_02;
    cocos2d::Ref::retain((Ref *)this_02);
  }
  piVar16 = *(int **)(this + 300);
  if (((char)piVar16[1] != '\0') &&
     ((in_XMM1_Da = *(float *)(this + 0x168), in_XMM1_Da != *(float *)(this + 0x170) ||
      (in_XMM1_Da = *(float *)(this + 0x16c), in_XMM1_Da != *(float *)(this + 0x174))))) {
    this[0x70] = (ScreenInterface)0x1;
  }
  if (piVar16 != (int *)0x0) {
    in_XMM1_Da = local_84;
    (**(code **)(*piVar16 + 8))();
  }
  if (0x9f < *(int *)(this + 0x68)) {
    in_XMM1_Da = *(float *)(g_gameLogic + 0x124);
    if (in_XMM1_Da == -1.0) {
      if (*(int **)(this + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x2c) + 0xb4))();
      }
    }
    else {
      if (*(int **)(this + 0x28) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x28) + 0x138))();
        *(undefined4 *)(this + 0x28) = 0;
      }
      if (*(Ref **)(this + 0x2c) != (Ref *)0x0) {
        cocos2d::Ref::autorelease(*(Ref **)(this + 0x2c));
        *(undefined4 *)(this + 0x2c) = 0;
      }
      strUsingArgs(&stack0xffffff44);
      pUVar7 = UIText::create();
      *(UIText **)(this + 0x28) = pUVar7;
      (**(code **)(*(int *)pUVar7 + 0x2c))();
      cocos2d::Ref::retain(*(Ref **)(this + 0x28));
      local_74 = 0x3f800000;
      local_70 = 1.0;
      local_14 = 0;
      (**(code **)(**(int **)(this + 0x28) + 0xa0))();
      local_14 = 0xffffffff;
      (**(code **)(**(int **)(this + 0x28) + 0x48))();
      local_2c = (int *)0x0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_3c,"TimeCompression.png",0x13);
      local_14 = 1;
      pSVar8 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
      local_14 = 0xffffffff;
      *(Scale9Sprite **)(this + 0x2c) = pSVar8;
      if (0xf < uStack_28) {
        pnVar18 = (nothrow_t *)(uStack_28 + 1);
        pvVar17 = local_3c;
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar17 = *(void **)((int)local_3c + -4);
          pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar17,pnVar18);
      }
      cocos2d::Ref::retain(*(Ref **)(this + 0x2c));
      iVar14 = **(int **)(this + 0x2c);
      pTVar22 = (Texture2D *)
                cocos2d::Color3B::Color3B((Color3B *)((int)&local_80 + 1),0x8f,0xc2,0xff);
      (**(code **)(iVar14 + 0x25c))();
      (**(code **)(*(int *)(*(int *)(this + 0x2c) + 0x278) + 0xc))();
      setTexParams(pTVar22);
      iVar14 = **(int **)(this + 0x2c);
      iVar15 = (**(code **)(**(int **)(this + 0x28) + 0xb0))();
      local_7c = *(ConsoleDamage **)(iVar15 + 4);
      pfVar9 = (float *)(**(code **)(**(int **)(this + 0x28) + 0xb0))();
      cocos2d::Size::Size((Size *)&local_74,*pfVar9 + 4.0,(float)local_7c + 4.0);
      (**(code **)(iVar14 + 0xac))();
      local_74 = 0x3f000000;
      local_70 = 0.5;
      local_14 = 2;
      (**(code **)(**(int **)(this + 0x2c) + 0xa0))();
      local_14 = 0xffffffff;
      local_70 = (float)**(int **)(this + 0x2c);
      iVar14 = (**(code **)(**(int **)(this + 0x28) + 0xb0))();
      local_7c = *(ConsoleDamage **)(iVar14 + 4);
      iVar14 = **(int **)(this + 0x28);
      local_80 = iVar14;
      local_90 = (float *)(**(code **)(**(int **)(this + 0x28) + 0xb0))();
      (**(code **)(iVar14 + 0x74))();
      local_7c = (ConsoleDamage *)((float)local_7c * 0.5);
      (**(code **)(iVar14 + 0x6c))();
      this = local_8c;
      in_XMM1_Da = *local_90 * 0.5;
      local_90 = (float *)in_XMM1_Da;
      (**(code **)((int)local_70 + 0x48))();
    }
    if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
      local_70 = *(float *)(*(int *)(ShipData::currentlyBoardedShip + 0x224) + 0x4c);
      iVar15 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x224) + 0x50) - (int)local_70;
      iVar14 = iVar15 >> 0x1f;
      iVar15 = iVar15 / 0x18 + iVar14;
      if (iVar15 == iVar14) {
        if (iVar15 == iVar14) {
          pSVar19 = this + 4;
          bVar4 = std::_Traits_equal<>("",0,(char *)pbVar6,(uint)unaff_EDI);
          if (!bVar4) {
            *(undefined4 *)(this + 0x14) = 0;
            if (0xf < *(uint *)(this + 0x18)) {
              pSVar19 = *(ScreenInterface **)pSVar19;
            }
            *pSVar19 = (ScreenInterface)0x0;
            if (*(Ref **)(this + 0x24) != (Ref *)0x0) {
              cocos2d::Ref::autorelease(*(Ref **)(this + 0x24));
              if (*(int **)(this + 0x24) != (int *)0x0) {
                (**(code **)(**(int **)(this + 0x24) + 0x138))();
                *(undefined4 *)(this + 0x24) = 0;
              }
            }
            if (*(Ref **)(this + 0x1c) != (Ref *)0x0) {
              cocos2d::Ref::autorelease(*(Ref **)(this + 0x1c));
              *(undefined4 *)(this + 0x1c) = 0;
            }
            if (*(Ref **)(this + 0x20) != (Ref *)0x0) {
              cocos2d::Ref::autorelease(*(Ref **)(this + 0x20));
              *(undefined4 *)(this + 0x20) = 0;
            }
          }
        }
      }
      else {
        bVar4 = std::operator!=<>(pbVar6,unaff_EDI);
        if (bVar4) {
          if (*(int **)(this + 0x24) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x24) + 0x138))();
            *(undefined4 *)(this + 0x24) = 0;
          }
          if (*(Ref **)(this + 0x1c) != (Ref *)0x0) {
            cocos2d::Ref::autorelease(*(Ref **)(this + 0x1c));
            *(undefined4 *)(this + 0x1c) = 0;
          }
          if (*(Ref **)(this + 0x20) != (Ref *)0x0) {
            cocos2d::Ref::autorelease(*(Ref **)(this + 0x20));
            *(undefined4 *)(this + 0x20) = 0;
          }
          std::basic_string<>::operator=
                    ((basic_string<> *)(this + 4),
                     *(basic_string<> **)(*(int *)(ShipData::currentlyBoardedShip + 0x224) + 0x4c));
          strUsingArgs(&stack0xffffff44);
          pUVar7 = UIText::create();
          *(UIText **)(this + 0x24) = pUVar7;
          (**(code **)(*(int *)pUVar7 + 0x2c))();
          cocos2d::Ref::retain(*(Ref **)(this + 0x24));
          local_74 = 0x3f000000;
          local_70 = 0.5;
          local_14 = 3;
          (**(code **)(**(int **)(this + 0x24) + 0xa0))();
          local_14 = 0xffffffff;
          pTVar22 = (Texture2D *)(float)(*(int *)(this + 0x68) / 2);
          (**(code **)(**(int **)(this + 0x24) + 0x48))();
          local_2c = (int *)0x0;
          uStack_28 = 0xf;
          local_3c = (void *)((uint)local_3c & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)&local_3c,"EmergencyBorder.png",0x13);
          local_14 = 4;
          pSVar8 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
          local_14 = 0xffffffff;
          *(Scale9Sprite **)(this + 0x1c) = pSVar8;
          if (0xf < uStack_28) {
            pnVar18 = (nothrow_t *)(uStack_28 + 1);
            pvVar17 = local_3c;
            if ((nothrow_t *)0xfff < pnVar18) {
              pvVar17 = *(void **)((int)local_3c + -4);
              pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
              if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar17,pnVar18);
          }
          cocos2d::Ref::retain(*(Ref **)(this + 0x1c));
          (**(code **)(*(int *)(*(int *)(this + 0x1c) + 0x278) + 0xc))();
          setTexParams(pTVar22);
          iVar14 = **(int **)(this + 0x1c);
          iVar15 = (**(code **)(**(int **)(this + 0x24) + 0xb0))();
          local_70 = *(float *)(iVar15 + 4);
          pfVar9 = (float *)(**(code **)(**(int **)(this + 0x24) + 0xb0))();
          cocos2d::Size::Size(local_94,*pfVar9 + 12.0,local_70 + 12.0);
          (**(code **)(iVar14 + 0xac))();
          local_74 = 0x3f000000;
          local_70 = 0.5;
          local_14 = 5;
          (**(code **)(**(int **)(this + 0x1c) + 0xa0))();
          local_14 = 0xffffffff;
          pTVar22 = (Texture2D *)(float)(*(int *)(this + 0x68) / 2);
          (**(code **)(**(int **)(this + 0x1c) + 0x48))();
          local_2c = (int *)0x0;
          uStack_28 = 0xf;
          local_3c = (void *)((uint)local_3c & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)&local_3c,"EmergencyBorder_Dim.png",0x17);
          local_14 = 6;
          pSVar8 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
          local_14 = 0xffffffff;
          *(Scale9Sprite **)(this + 0x20) = pSVar8;
          if (0xf < uStack_28) {
            pnVar18 = (nothrow_t *)(uStack_28 + 1);
            pvVar17 = local_3c;
            if ((nothrow_t *)0xfff < pnVar18) {
              pvVar17 = *(void **)((int)local_3c + -4);
              pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
              if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar17,pnVar18);
          }
          cocos2d::Ref::retain(*(Ref **)(this + 0x20));
          (**(code **)(*(int *)(*(int *)(this + 0x20) + 0x278) + 0xc))();
          setTexParams(pTVar22);
          iVar14 = **(int **)(this + 0x20);
          iVar15 = (**(code **)(**(int **)(this + 0x24) + 0xb0))();
          local_70 = *(float *)(iVar15 + 4);
          pfVar9 = (float *)(**(code **)(**(int **)(this + 0x24) + 0xb0))();
          cocos2d::Size::Size(local_94,*pfVar9 + 12.0,local_70 + 12.0);
          (**(code **)(iVar14 + 0xac))();
          local_74 = 0x3f000000;
          local_70 = 0.5;
          local_14 = 7;
          (**(code **)(**(int **)(this + 0x20) + 0xa0))();
          local_14 = 0xffffffff;
          in_XMM1_Da = (float)(*(int *)(this + 0x68) / 2);
          (**(code **)(**(int **)(this + 0x20) + 0x48))
                    (in_XMM1_Da,(float)(*(int *)(this + 0x6c) / 3));
        }
      }
    }
  }
  pSVar10 = getElementAtPosition(this);
  if (pSVar10 == (ScreenElement *)0x0) {
LAB_00557c99:
    clearToolTip(this);
  }
  else {
    local_75 = pSVar10[0x2dc];
    if (local_75 == (ScreenElement)0x0) {
      bVar4 = std::_Traits_equal<>("",0,(char *)pbVar6,(uint)unaff_EDI);
      if (bVar4) {
        if (local_75 == (ScreenElement)0x0) goto LAB_00557c99;
      }
      else {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff40,(basic_string<> *)(pSVar10 + 0x2c4));
        setToolTip(this);
      }
    }
  }
  if ((this[0x114] != (ScreenInterface)0x0) && (OISConfiguration::tooltips != false)) {
    if (*(int *)(this + 0xec) == 0) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff44,(basic_string<> *)(this + 0xfc));
      pUVar7 = UIText::create();
      pcVar20 = retain_exref;
      *(UIText **)(this + 0xec) = pUVar7;
      cocos2d::Ref::retain((Ref *)pUVar7);
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff44,(basic_string<> *)(this + 0xfc));
      UIText::setText(*(UIText **)(this + 0xec));
      pcVar20 = retain_exref;
    }
    piVar16 = *(int **)(this + 0xf0);
    if (piVar16 == (int *)0x0) {
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      uStack_28 = 0xf;
      local_2c = piVar16;
      std::basic_string<>::assign((basic_string<> *)&local_3c,"ToolTip.png",0xb);
      local_14 = 8;
      pSVar8 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)&local_3c);
      local_14 = 0xffffffff;
      *(Scale9Sprite **)(this + 0xf0) = pSVar8;
      if (0xf < uStack_28) {
        pnVar18 = (nothrow_t *)(uStack_28 + 1);
        pvVar17 = local_3c;
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar17 = *(void **)((int)local_3c + -4);
          pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar17,pnVar18);
      }
      (*pcVar20)();
      (**(code **)(**(int **)(this + 0xf0) + 0x10c))();
      piVar16 = *(int **)(this + 0xf0);
    }
    if (*(int *)(this + 0xf4) == 0) {
      pNVar11 = cocos2d::Node::create();
      *(Node **)(this + 0xf4) = pNVar11;
      (*pcVar20)();
      (**(code **)(**(int **)(this + 0xf4) + 0x10c))();
      piVar16 = *(int **)(this + 0xf0);
    }
    (**(code **)(*piVar16 + 0x25c))();
    iVar14 = **(int **)(this + 0xf0);
    iVar15 = (**(code **)(**(int **)(this + 0xec) + 0xb0))();
    local_70 = *(float *)(iVar15 + 4);
    pfVar9 = (float *)(**(code **)(**(int **)(this + 0xec) + 0xb0))();
    in_XMM1_Da = *pfVar9 + 4.0;
    cocos2d::Size::Size(local_94,in_XMM1_Da,local_70 + 4.0);
    (**(code **)(iVar14 + 0xac))();
    local_74 = 0;
    local_70 = 0.0;
    local_14 = 9;
    (**(code **)(**(int **)(this + 0xec) + 0xa0))();
    local_14 = 0xffffffff;
    (**(code **)(**(int **)(this + 0xec) + 0x48))();
    local_74 = 0x3f000000;
    local_70 = 0.5;
    local_14 = 10;
    (**(code **)(**(int **)(this + 0xf4) + 0xa0))();
    local_14 = 0xffffffff;
    (**(code **)(**(int **)(this + 0xf4) + 0x2c))();
    this[0x114] = (ScreenInterface)0x0;
  }
  pfVar9 = (float *)0x0;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
LAB_00557f34:
    piVar16 = *(int **)(g_gameData + 0xd0);
    if ((piVar16 == (int *)0x0) ||
       ((((char)piVar16[0x34] != '\0' || (*(int *)(*(int *)(this + 300) + 0x10) == 0)) ||
        (*(char *)(*(int *)(*(int *)(this + 300) + 0x10) + 0x5d) != '\0')))) {
      if (*(int *)(this + 0x184) != 0) {
        if ((piVar16 == (int *)0x0) || (cVar5 = (**(code **)(*piVar16 + 0x20))(), cVar5 != '\0')) {
          pfVar9 = (float *)0x9;
        }
        else if (*(int **)(this + 0x188) == (int *)0x0) {
          pfVar9 = (float *)0x4;
        }
        else {
          cVar5 = (**(code **)(**(int **)(this + 0x188) + 0x14))();
          if (cVar5 == '\0') {
            this_01 = *(ShipModule **)(this + 0x188);
            if (this_01[99] == (ShipModule)0x0) {
              pfVar9 = (float *)0x3;
            }
            else if (this_01[0x2c] == (ShipModule)0x0) {
              pfVar9 = (float *)0x2;
            }
            else {
              ShipModule::getCurrentPowerDrain(this_01);
              if ((in_XMM1_Da <= 0.0) || (*(char *)(*(int *)(this + 0x188) + 0x60) != '\0')) {
                cVar5 = (**(code **)(**(int **)(this + 0x188) + 0x18))();
                if (cVar5 != '\0') {
                  fVar23 = *(float *)(this + 0x48);
                  local_90 = (float *)0x1;
                  *(float *)(this + 0x48) = fVar23 - local_84;
                  if (fVar23 - local_84 <= 0.0) {
                    iVar14 = *(int *)(this + 0x4c);
                    *(int *)(this + 0x4c) = iVar14 + 1;
                    if (2 < iVar14 + 1) {
                      *(undefined4 *)(this + 0x4c) = 0;
                    }
                    strUsingArgs(&stack0xffffff44);
                    pSVar13 = loadSprite();
                    *(Sprite **)(this + 0x154) = pSVar13;
                    local_70 = (float)*(int *)(this + 0x6c);
                    iVar14 = *(int *)pSVar13;
                    (**(code **)(iVar14 + 0xb0))();
                    (**(code **)(iVar14 + 0x2c))();
                    iVar14 = **(int **)(this + 0x154);
                    (**(code **)(iVar14 + 0xb0))();
                    (**(code **)(iVar14 + 0x2c))();
                    this = local_8c;
                    local_74 = 0x3f000000;
                    local_70 = 0.5;
                    local_14 = 0xb;
                    (**(code **)(**(int **)(local_8c + 0x154) + 0xa0))();
                    local_14 = 0xffffffff;
                    iVar14 = **(int **)(this + 0x154);
                    iVar15 = (**(code **)(iVar14 + 0xb0))();
                    local_70 = *(float *)(iVar15 + 4);
                    (**(code **)(**(int **)(this + 0x154) + 0xb0))();
                    (**(code **)(iVar14 + 0x48))();
                    cocos2d::Ref::retain(*(Ref **)(this + 0x154));
                    *(undefined4 *)(this + 0x48) = 0x3dcccccd;
                  }
                  pfVar9 = local_90;
                  if (this[0x14c] == (ScreenInterface)0x0) {
                    fVar23 = 40.0;
                  }
                  else {
                    fVar23 = -40.0;
                  }
                  fVar23 = fVar23 * local_84 + *(float *)(this + 0x150);
                  *(float *)(this + 0x150) = fVar23;
                  if (64.0 <= fVar23) {
                    if (255.0 < fVar23) {
                      *(undefined4 *)(this + 0x150) = 0x437f0000;
                      goto LAB_005581f9;
                    }
                  }
                  else {
                    *(undefined4 *)(this + 0x150) = 0x42800000;
LAB_005581f9:
                    this[0x14c] = (ScreenInterface)(this[0x14c] == (ScreenInterface)0x0);
                  }
                  if (*(int **)(this + 0x154) != (int *)0x0) {
                    (**(code **)(**(int **)(this + 0x154) + 0x244))();
                  }
                  this[0x70] = (ScreenInterface)0x1;
                }
              }
              else {
                pfVar9 = (float *)0x6;
              }
            }
          }
          else {
            pfVar9 = (float *)0x5;
          }
        }
      }
    }
    else {
      pfVar9 = (float *)0x7;
    }
  }
  else {
    bVar4 = false;
    if (*(int *)(ShipData::currentlyBoardedShip + 0x254) != 0) {
      bVar4 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0x158) == 0;
    }
    if ((!bVar4) || (*(int *)(ShipData::currentlyBoardedShip + 0x378) != 1)) goto LAB_00557f34;
    pfVar9 = (float *)0x8;
  }
  if (pfVar9 != (float *)*(float *)(this + 0x124)) {
    this[0x70] = (ScreenInterface)0x1;
    *(float **)(this + 0x124) = pfVar9;
    if ((pfVar9 != (float *)0x1) && (*(int **)(this + 0x154) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 0x154) + 0x138))();
      *(undefined4 *)(this + 0x154) = 0;
    }
  }
  local_44 = 0;
  local_40 = 0xf;
  local_54[0] = (basic_string<> *)((uint)local_54[0] & 0xffffff00);
  local_14 = 0xc;
  local_75 = (ScreenElement)0x1;
  if (pfVar9 == (float *)0x9) {
    fVar23 = *(float *)(this + 0x48);
    local_75 = (ScreenElement)0x0;
    *(float *)(this + 0x48) = fVar23 - local_84;
    if (fVar23 - local_84 <= 0.0) {
      *(undefined4 *)(this + 0x48) = 0x3e4ccccd;
      this[0x50] = (ScreenInterface)(this[0x50] == (ScreenInterface)0x0);
    }
    if (0x3c < *(int *)(this + 0x68)) {
      uVar25 = 0x1e;
      if (this[0x50] == (ScreenInterface)0x0) {
        pcVar24 = "`$** EMERGENCY: HULL BREACH **";
      }
      else {
        pcVar24 = "`@** EMERGENCY: HULL BREACH **";
      }
      goto LAB_00558568;
    }
  }
  else if ((pfVar9 != (float *)0x0) && (pfVar9 != (float *)0x1)) {
    iVar14 = *(int *)(this + 0x124);
    local_75 = (ScreenElement)0x0;
    if (iVar14 == 7) {
      if (*(int *)(this + 0x68) < 0x3d) goto LAB_0055856d;
      local_70 = *(float *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x70);
      bVar4 = std::_Traits_equal<>("proxima",7,(char *)pbVar6,(uint)unaff_EDI);
      if (bVar4) {
        uVar25 = 0x47;
        pcVar24 = "`!HW `%Industries `#Proxima OS `2v`02.01\n`$ - authentication required-\n";
      }
      else {
        bVar4 = std::_Traits_equal<>("enceladus",9,(char *)pbVar6,(uint)unaff_EDI);
        if (bVar4) {
          uVar25 = 0x3d;
          pcVar24 = "`%ENCELADUS `!ShipOS `2v`01.00\n`$ - authentication required-\n";
        }
        else {
          uVar25 = 0x40;
          pcVar24 = "`!V`%entarii `0Ceres OS `2v`01.81\n`$ - authentication required-\n";
        }
      }
    }
    else if (iVar14 == 2) {
      local_80 = *(int *)(this + 0x188);
      if (local_80 != 0) {
        if (*(char *)(local_80 + 0x2c) == '\0') {
          local_5c = (int *)0x0;
          uStack_58 = 0xf;
          local_6c = (void *)((uint)local_6c & 0xffffff00);
          local_14 = 0xd;
          iVar14 = *(int *)(local_80 + 8);
          local_7c = (ConsoleDamage *)0x0;
          if (*(int *)(iVar14 + 0x118) - *(int *)(iVar14 + 0x114) >> 5 != 0) {
            iVar15 = 0;
            do {
              if ((*(int *)(iVar15 + *(int *)(iVar14 + 0x114)) <= *(int *)(local_80 + 0x28)) &&
                 ((iVar2 = *(int *)(iVar15 + 4 + *(int *)(iVar14 + 0x114)), iVar2 == -1 ||
                  (*(int *)(local_80 + 0x28) <= iVar2)))) {
                bVar4 = std::_Traits_equal<>("",0,(char *)pbVar6,(uint)unaff_EDI);
                if (!bVar4) {
                  std::basic_string<>::append((basic_string<> *)&local_6c,"\n",1);
                  iVar14 = *(int *)(local_80 + 8);
                }
                iVar14 = *(int *)(iVar14 + 0x114) + iVar15;
                pcVar24 = (char *)(iVar14 + 8);
                if (0xf < *(uint *)(iVar14 + 0x1c)) {
                  pcVar24 = *(char **)(iVar14 + 8);
                }
                std::basic_string<>::append
                          ((basic_string<> *)&local_6c,pcVar24,*(uint *)(iVar14 + 0x18));
                iVar14 = *(int *)(local_80 + 8);
              }
              iVar15 = iVar15 + 0x20;
              local_7c = local_7c + 1;
              this = local_8c;
            } while (local_7c <
                     (ConsoleDamage *)(*(int *)(iVar14 + 0x118) - *(int *)(iVar14 + 0x114) >> 5));
          }
          local_3c = local_6c;
          local_6c = (void *)((uint)local_6c & 0xffffff00);
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          local_2c = local_5c;
          uStack_28 = uStack_58;
          local_5c = (int *)0x0;
          uStack_58 = 0xf;
        }
        else {
          local_2c = (int *)0x0;
          uStack_28 = 0xf;
          local_3c = (void *)((uint)local_3c & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)&local_3c,"",0);
        }
        local_14._0_1_ = 0xe;
        std::basic_string<>::append((basic_string<> *)local_54,(basic_string<> *)&local_3c);
        local_14 = CONCAT31(local_14._1_3_,0xc);
        if (0xf < uStack_28) {
          pnVar18 = (nothrow_t *)(uStack_28 + 1);
          pvVar17 = local_3c;
          if ((nothrow_t *)0xfff < pnVar18) {
            pvVar17 = *(void **)((int)local_3c + -4);
            pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar17,pnVar18);
        }
        goto LAB_0055856d;
      }
      uVar25 = 0x13;
      pcVar24 = "`@Error: `$unknown.";
    }
    else if (iVar14 == 3) {
      uVar25 = 0x24;
      pcVar24 = "`@Error #78: `$module is `7disabled\n";
    }
    else if (iVar14 == 5) {
      uVar25 = 0x3e;
      pcVar24 = "`@Error #98: `$module_sync failed, module is `@non-functional\n";
    }
    else if (iVar14 == 4) {
      uVar25 = 0x23;
      pcVar24 = "`@Error #12: `$**no module found**\n";
    }
    else if (iVar14 == 8) {
      uVar25 = 0x15;
      pcVar24 = "`%-locked by broker-\n";
    }
    else {
      if (iVar14 != 6) goto LAB_0055856d;
      uVar25 = 0x26;
      pcVar24 = "`@Error #6: `$**module out of power**\n";
    }
LAB_00558568:
    std::basic_string<>::append((basic_string<> *)local_54,pcVar24,uVar25);
  }
LAB_0055856d:
  this_00 = (basic_string<> *)(this + 0x130);
  pbVar12 = this_00;
  if (0xf < *(uint *)(this + 0x144)) {
    pbVar12 = *(basic_string<> **)this_00;
  }
  bVar4 = std::_Traits_equal<>
                    ((char *)pbVar12,*(uint *)(this + 0x140),(char *)pbVar6,(uint)unaff_EDI);
  if (bVar4) {
    if (this[0x70] != (ScreenInterface)0x0) goto LAB_005585ae;
  }
  else {
    this[0x70] = (ScreenInterface)0x1;
LAB_005585ae:
    uVar25 = 0;
    pcVar24 = (char *)0x0;
    (**(code **)(**(int **)(this + 0x120) + 0x2a0))();
    if (local_75 == (ScreenElement)0x0) {
      pbVar6 = this_00;
      if (0xf < *(uint *)(this + 0x144)) {
        pbVar6 = *(basic_string<> **)this_00;
      }
      bVar4 = std::_Traits_equal<>((char *)pbVar6,*(uint *)(this + 0x140),pcVar24,uVar25);
      if ((!bVar4) || (pNVar11 = *(Node **)(this + 0x148), pNVar11 == (Node *)0x0)) {
        if (this_00 != (basic_string<> *)local_54) {
          pbVar6 = (basic_string<> *)local_54;
          if (0xf < local_40) {
            pbVar6 = local_54[0];
          }
          std::basic_string<>::assign(this_00,(char *)pbVar6,local_44);
        }
        if (*(int **)(this + 0x148) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x148) + 0x138))();
          *(undefined4 *)(this + 0x148) = 0;
        }
        pNVar11 = (Node *)0x0;
        if ((0xa0 < *(int *)(this + 0x68)) && (0x28 < *(int *)(this + 0x6c))) {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff34,(basic_string<> *)local_54);
          pUVar7 = UIText::create(0);
          *(UIText **)(this + 0x148) = pUVar7;
          iVar14 = *(int *)pUVar7;
          iVar15 = (**(code **)(iVar14 + 0xb0))();
          local_70 = *(float *)(iVar15 + 4);
          (**(code **)(**(int **)(this + 0x148) + 0xb0))();
          (**(code **)(iVar14 + 0x48))();
          (**(code **)(**(int **)(this + 0x148) + 0x2c))();
          local_88 = 0x3f000000;
          local_84 = 0.5;
          local_14._0_1_ = 0x14;
          (**(code **)(**(int **)(this + 0x148) + 0xa0))();
          local_14 = CONCAT31(local_14._1_3_,0xc);
          cocos2d::Ref::retain(*(Ref **)(this + 0x148));
          pNVar11 = *(Node **)(this + 0x148);
        }
        if (pNVar11 == (Node *)0x0) goto LAB_00558e46;
      }
      cocos2d::Node::visit(pNVar11);
    }
    else {
      iVar14 = *(int *)(this + 400);
      local_7c = (ConsoleDamage *)0x0;
      if (*(int *)(this + 0x194) - iVar14 >> 2 != 0) {
        do {
          pNVar11 = *(Node **)(iVar14 + (int)local_7c * 4);
          if (pNVar11[0x419] != (Node)0x0) {
            cocos2d::Node::visit(pNVar11);
          }
          local_7c = (ConsoleDamage *)((int)local_7c + 1);
          iVar14 = *(int *)(this + 400);
        } while (local_7c < (uint)(*(int *)(this + 0x194) - iVar14 >> 2));
      }
      local_7c = (ConsoleDamage *)0x0;
      if (*(int *)(this + 0x194) - iVar14 >> 2 != 0) {
        do {
          pNVar11 = *(Node **)(iVar14 + (int)local_7c * 4);
          if (pNVar11[0x419] == (Node)0x0) {
            cocos2d::Node::visit(pNVar11);
          }
          local_7c = local_7c + 1;
          iVar14 = *(int *)(this + 400);
        } while (local_7c < (ConsoleDamage *)(*(int *)(this + 0x194) - iVar14 >> 2));
      }
      if (((*(char *)(*(int *)(this + 0x18c) + 0xfe) != '\0') &&
          (bVar4 = std::_Traits_equal<>("",0,pcVar24,uVar25), !bVar4)) &&
         (ShipData::currentlyBoardedShip != (Ship *)0x0)) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff34,
                   (basic_string<> *)(*(int *)(this + 0x18c) + 0x58));
        local_7c = Ship::getConsoleDamage(ShipData::currentlyBoardedShip);
        if (local_7c != (ConsoleDamage *)0x0) {
          if (*(int **)(this + 0x158) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x158) + 0x138))();
            *(undefined4 *)(this + 0x158) = 0;
          }
          strUsingArgs(&stack0xffffff34,"UI_SmallCrack%d.png",*(int *)(local_7c + 0x20) + 1);
          pSVar13 = loadSprite();
          *(Sprite **)(this + 0x158) = pSVar13;
          (**(code **)(*(int *)pSVar13 + 0x2c))();
          cocos2d::Ref::retain(*(Ref **)(this + 0x158));
          local_74 = 0x3f000000;
          local_70 = 0.5;
          local_14._0_1_ = 0xf;
          (**(code **)(**(int **)(this + 0x158) + 0xa0))();
          local_14 = CONCAT31(local_14._1_3_,0xc);
          (**(code **)(**(int **)(this + 0x158) + 0x48))();
        }
      }
      if (*(Node **)(this + 0x19c) != (Node *)0x0) {
        cocos2d::Node::visit(*(Node **)(this + 0x19c));
      }
      if (0.0 < *(float *)(g_gameLogic + 0x124)) {
        if (*(Node **)(this + 0x2c) != (Node *)0x0) {
          cocos2d::Node::visit(*(Node **)(this + 0x2c));
        }
        if (*(Node **)(this + 0x28) != (Node *)0x0) {
          cocos2d::Node::visit(*(Node **)(this + 0x28));
        }
      }
      pcVar20 = visit_exref;
      if ((*(char *)(*(int *)(this + 300) + 4) != '\0') &&
         (*(char *)(*(int *)(this + 300) + 5) == '\0')) {
        (**(code **)(**(int **)(this + 0xe8) + 0x48))();
        cocos2d::Node::visit(*(Node **)(this + 0xe8));
        if ((*(float *)(this + 0x168) == *(float *)(this + 0x170)) &&
           (*(float *)(this + 0x16c) == *(float *)(this + 0x174))) {
          *(float *)(this + 0x178) = *(float *)(this + 0x178) + local_84;
        }
        else {
          *(undefined4 *)(this + 0x178) = 0;
        }
        *(undefined4 *)(this + 0x170) = *(undefined4 *)(this + 0x168);
        *(undefined4 *)(this + 0x174) = *(undefined4 *)(this + 0x16c);
        if (*(int **)(this + 0x118) != (int *)0x0) {
          iVar14 = **(int **)(this + 0x118);
          iVar15 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
          local_70 = *(float *)(iVar15 + 4);
          local_90 = *(float **)(this + 0x16c);
          (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
          (**(code **)(iVar14 + 0x48))();
          cocos2d::Node::visit(*(Node **)(this + 0x118));
        }
        bVar4 = std::_Traits_equal<>("",0,pcVar24,uVar25);
        pcVar20 = visit_exref;
        if ((!bVar4) && (OISConfiguration::tooltips != false)) {
          pfVar9 = (float *)(**(code **)(**(int **)(this + 0xec) + 0xb0))();
          local_84 = (float)*(int *)(this + 0x6c);
          if (*(float *)(this + 0x168) < (float)(*(int *)(this + 0x68) - (int)*pfVar9)) {
            iVar14 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
            local_84 = local_84 - *(float *)(iVar14 + 4);
            iVar14 = (**(code **)(**(int **)(this + 0xf0) + 0xb0))();
            local_74 = 0;
            if (*(float *)(this + 0x16c) < local_84 - *(float *)(iVar14 + 4)) {
              local_70 = 1.0;
              local_14._0_1_ = 0x13;
              (**(code **)(**(int **)(this + 0xf0) + 0xa0))();
              local_14 = CONCAT31(local_14._1_3_,0xc);
              iVar14 = **(int **)(this + 0xf4);
              iVar15 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
              local_70 = *(float *)(iVar15 + 4);
              local_90 = *(float **)(this + 0x16c);
              (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
            }
            else {
              local_70 = 0.0;
              local_14._0_1_ = 0x12;
              (**(code **)(**(int **)(this + 0xf0) + 0xa0))();
              local_14 = CONCAT31(local_14._1_3_,0xc);
              local_70 = *(float *)(this + 0x16c);
              iVar14 = **(int **)(this + 0xf4);
              (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
            }
LAB_00558c26:
            (**(code **)(iVar14 + 0x48))();
          }
          else {
            iVar14 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
            local_84 = local_84 - *(float *)(iVar14 + 4);
            iVar14 = (**(code **)(**(int **)(this + 0xf0) + 0xb0))();
            local_74 = 0x3f800000;
            if (*(float *)(this + 0x16c) < local_84 - *(float *)(iVar14 + 4)) {
              local_70 = 1.0;
              local_14._0_1_ = 0x11;
              (**(code **)(**(int **)(this + 0xf0) + 0xa0))();
              local_14 = CONCAT31(local_14._1_3_,0xc);
              iVar14 = **(int **)(this + 0xf4);
              (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
              goto LAB_00558c26;
            }
            local_70 = 0.0;
            local_14._0_1_ = 0x10;
            (**(code **)(**(int **)(this + 0xf0) + 0xa0))();
            local_14 = CONCAT31(local_14._1_3_,0xc);
            (**(code **)(**(int **)(this + 0xf4) + 0x48))();
          }
          pcVar20 = visit_exref;
          if (1.2 <= *(float *)(this + 0x178)) {
            cocos2d::Node::visit(*(Node **)(this + 0xf4));
          }
        }
      }
      bVar4 = std::_Traits_equal<>("",0,pcVar24,uVar25);
      if (!bVar4) {
        (*pcVar20)();
        (*pcVar20)();
      }
      if (*(int *)(this + 0x154) != 0) {
        (*pcVar20)();
      }
      if (*(int *)(this + 0x158) != 0) {
        (*pcVar20)();
      }
    }
LAB_00558e46:
    (**(code **)(**(int **)(this + 0x120) + 0x2a4))();
    pTVar22 = (Texture2D *)
              (**(code **)(*(int *)(*(int *)(*(int *)(this + 0x120) + 0x2ec) + 0x278) + 0xc))();
    cocos2d::Sprite3D::setTexture(*(Sprite3D **)(this + 0x11c),pTVar22);
    *(undefined2 *)(this + 0x70) = 0;
  }
  puVar3 = puStack_20;
  if (0xf < local_40) {
    pnVar18 = (nothrow_t *)(local_40 + 1);
    pbVar6 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar18) {
      pbVar6 = *(basic_string<> **)(local_54[0] + -4);
      pnVar18 = (nothrow_t *)(local_40 + 0x24);
      if ((basic_string<> *)0x1f < local_54[0] + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar6,pnVar18);
    puVar3 = puStack_20;
  }
LAB_00558eba:
  puStack_20 = puVar3;
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}
