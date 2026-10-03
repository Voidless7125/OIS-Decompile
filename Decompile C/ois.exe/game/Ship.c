#include "../ois.exe.h"


// public: bool __thiscall Ship::isSpaceShip(void)

bool __thiscall Ship::isSpaceShip(Ship *this)

{
  if (*(int *)(this + 0x254) != 0) {
    return *(int *)(*(int *)(this + 0x254) + 0x158) == 0;
  }
  return false;
}


// public: bool __thiscall Ship::isSpaceStation(void)

bool __thiscall Ship::isSpaceStation(Ship *this)

{
  if (*(int *)(this + 0x254) != 0) {
    return *(int *)(*(int *)(this + 0x254) + 0x158) == 1;
  }
  return false;
}


// public: float __thiscall Ship::getSpeed(void)

float __thiscall Ship::getSpeed(Ship *this)

{
  float10 extraout_ST1;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b14a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_18);
  ExceptionList = local_10;
  return (float)extraout_ST1;
}


// public: int __thiscall Ship::getNextSensorID(void)

int __thiscall Ship::getNextSensorID(Ship *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x220);
  *(int *)(this + 0x220) = iVar1 + 1;
  return iVar1;
}


// public: virtual void __thiscall Ship::shipDocking(class Ship *)

void __thiscall Ship::shipDocking(Ship *this,Ship *param_1)

{
  return;
}


// public: bool __thiscall Ship::isJumpGate(void)

bool __thiscall Ship::isJumpGate(Ship *this)

{
  if (*(int *)(this + 0x254) != 0) {
    return *(int *)(*(int *)(this + 0x254) + 0x158) == 2;
  }
  return false;
}


// public: __thiscall Ship::Ship(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class ShipClass *,enum ECraftPurpose::CraftPurpose)

Ship * __thiscall Ship::Ship(Ship *this,int param_2,int param_3,basic_string<> *param_4)

{
  bool bVar1;
  GameData *pGVar2;
  int iVar3;
  Dice *pDVar4;
  _Tree_node<> *p_Var5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  basic_string<> *pbVar9;
  nothrow_t *pnVar10;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  basic_string<> *in_stack_00000024;
  uint in_stack_00000034;
  uint in_stack_00000038;
  void *local_1c;
  undefined *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_18 = &DAT_005c3112;
  local_1c = ExceptionList;
  pDVar4 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (Ship)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined1 **)(this + 0x54) = &DAT_bf800000;
  *(undefined1 **)(this + 0x58) = &DAT_bf800000;
  *(undefined1 **)(this + 0x5c) = &DAT_bf800000;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (Ship)0x0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xf;
  this[0x80] = (Ship)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0xf;
  this[0x98] = (Ship)0x0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0xf;
  this[0xb0] = (Ship)0x0;
  *(undefined4 *)(this + 200) = 0xc61c3c00;
  *(undefined4 *)(this + 0xcc) = 0xc61c3c00;
  this[0xd0] = (Ship)0x1;
  *(undefined4 *)(this + 0xd4) = 0;
  this[0xd8] = (Ship)0x0;
  *(undefined4 *)(this + 0xdc) = 0;
  this[0xe4] = (Ship)0x0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined1 **)(this + 0x100) = &DAT_bf800000;
  this[0x104] = (Ship)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined1 **)(this + 0x114) = &DAT_bf800000;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined1 **)(this + 0x124) = &DAT_bf800000;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0xc61c3c00;
  *(undefined4 *)(this + 0x130) = 0xc61c3c00;
  local_14 = 10;
  uStack_13 = 0;
  *(undefined1 **)(this + 0x148) = &DAT_bf800000;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  p_Var5 = std::_Tree_comp_alloc<>::_Buyheadnode((_Tree_comp_alloc<> *)this);
  *(_Tree_node<> **)(this + 0x14c) = p_Var5;
  *(undefined4 *)(this + 0x154) = 0;
  this[0x15c] = (Ship)0x0;
  *(undefined1 **)(this + 0x160) = &DAT_bf800000;
  *(undefined1 **)(this + 0x164) = &DAT_bf800000;
  this[0x168] = (Ship)0x0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0xffffffff;
  *(undefined4 *)(this + 400) = 0xffffffff;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0xffffffff;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined2 *)(this + 0x1b0) = 1;
  this[0x1b2] = (Ship)0x0;
  *(undefined4 *)(this + 0x1b4) = 1;
  *(undefined4 *)(this + 0x1b8) = 0xc61c3c00;
  *(undefined4 *)(this + 0x1bc) = 0xc61c3c00;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  local_14 = 0xd;
  *(undefined4 *)(this + 0x1d0) = 0xffffffff;
  *(undefined4 *)(this + 0x1d4) = 0xffffffff;
  *(undefined4 *)(this + 0x1d8) = 0xffffffff;
  *(undefined4 *)(this + 0x1dc) = 0xffffffff;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0xffffffff;
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  puVar6 = operator_new(0x50);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 4) = 0x18;
  *(undefined4 *)(puVar6 + 0x44) = 0;
  *(undefined4 *)(puVar6 + 0x48) = 0;
  *(undefined4 *)(puVar6 + 0x4c) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *(undefined4 *)(puVar6 + 0x10) = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0;
  *(undefined4 *)(puVar6 + 0x18) = 0;
  *(undefined4 *)(puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 0x20) = 0;
  *(undefined4 *)(puVar6 + 0x24) = 0;
  *(undefined4 *)(puVar6 + 0x28) = 0;
  *(undefined4 *)(puVar6 + 0x2c) = 0;
  *(undefined4 *)(puVar6 + 0x30) = 0;
  *(undefined4 *)(puVar6 + 0x34) = 0;
  *(undefined4 *)(puVar6 + 0x38) = 0;
  *(undefined8 *)(puVar6 + 0x3c) = 0;
  *(undefined1 **)(this + 0x1f8) = puVar6;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 1;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  this[0x235] = (Ship)0x1;
  this[0x234] = (Ship)(param_3 == 0);
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0xf;
  this[0x238] = (Ship)0x0;
  iVar8 = m_nextIdentifier;
  iVar3 = m_nextIdentifier + 1;
  *(int *)(this + 0x250) = m_nextIdentifier;
  m_nextIdentifier = iVar3;
  *(int *)(this + 0x254) = param_2;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0xf;
  this[600] = (Ship)0x0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined2 *)(this + 0x280) = 0x101;
  *(undefined4 *)(this + 0x290) = 0xe147ae14;
  *(undefined4 *)(this + 0x294) = 0x4059547a;
  *(undefined4 *)(this + 0x298) = 0xe147ae14;
  *(undefined4 *)(this + 0x29c) = 0x4059547a;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2a4) = 0x41b00000;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  this[0x2c8] = (Ship)0x0;
  *(undefined1 **)(this + 0x2cc) = &DAT_bf800000;
  this[0x2d0] = (Ship)0x0;
  this[0x2ec] = (Ship)0x0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0xffffffff;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  this[0x318] = (Ship)0x0;
  *(undefined1 **)(this + 0x31c) = &DAT_bf800000;
  *(undefined2 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x323) = 1;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x340) = 0xf;
  this[0x32c] = (Ship)0x0;
  local_14 = 0x16;
  *(undefined2 *)(this + 0x344) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  p_Var5 = std::_Tree_comp_alloc<>::_Buyheadnode((_Tree_comp_alloc<> *)iVar8);
  *(_Tree_node<> **)(this + 0x348) = p_Var5;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x354) = 0xc61c3c00;
  *(undefined4 *)(this + 0x358) = 0xc61c3c00;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  _local_14 = CONCAT31(uStack_13,0x1a);
  *(undefined4 *)(this + 0x374) = 0;
  *(undefined4 *)(this + 0x378) = 1;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  if ((basic_string<> *)(this + 8) != (basic_string<> *)&param_4) {
    pbVar9 = (basic_string<> *)&param_4;
    if (0xf < in_stack_00000020) {
      pbVar9 = param_4;
    }
    std::basic_string<>::assign((basic_string<> *)(this + 8),(char *)pbVar9,in_stack_0000001c);
  }
  if ((basic_string<> *)(this + 0x238) != (basic_string<> *)&stack0x00000024) {
    pbVar9 = (basic_string<> *)&stack0x00000024;
    if (0xf < in_stack_00000038) {
      pbVar9 = in_stack_00000024;
    }
    std::basic_string<>::assign((basic_string<> *)(this + 0x238),(char *)pbVar9,in_stack_00000034);
  }
  puVar7 = operator_new(0x4c);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  *(undefined1 *)(puVar7 + 0xd) = 1;
  iVar8 = rand();
  pGVar2 = g_gameData;
  puVar7[0xe] = (float)(iVar8 % 0x1e + 0x12d);
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  iVar8 = *(int *)(pGVar2 + 0xcc);
  if (iVar8 != 0) {
    if (*(char *)(iVar8 + 0x377) == '\0') {
      if ((*(int *)(iVar8 + 0x378) == 0) && (*(int *)(iVar8 + 0x380) == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        iVar8 = diceRoll(pDVar4);
        puVar7[0xe] = (float)iVar8;
      }
    }
    else {
      puVar7[0xe] = &DAT_bf800000;
    }
  }
  *(undefined4 **)(this + 0x40) = puVar7;
  puVar7[0x12] = this;
  setDefaultEMCONSettings(this);
  CargoHold::configureSlots
            (*(CargoHold **)(this + 0x1f8),*(int *)(*(int *)(this + 0x254) + 0xe8),
             *(int *)(*(int *)(this + 0x254) + 0xe4));
  puVar7 = operator_new(0x60);
  *puVar7 = this;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0xf;
  *(undefined1 *)(puVar7 + 6) = 0;
  puVar7[0xc] = &DAT_bf800000;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = &DAT_bf000000;
  puVar7[0x12] = &DAT_bf800000;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  *(undefined4 **)(this + 0x224) = puVar7;
  iVar8 = *(int *)(this + 0x254);
  pbVar9 = (basic_string<> *)(iVar8 + 0xec);
  if ((basic_string<> *)(this + 0x68) != pbVar9) {
    if (0xf < *(uint *)(iVar8 + 0x100)) {
      pbVar9 = *(basic_string<> **)pbVar9;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this + 0x68),(char *)pbVar9,*(uint *)(iVar8 + 0xfc));
  }
  if (param_3 == 0) {
    if (g_gameLogic[0x11a] == (GameLogic)0x0) {
      setFullFog(this);
    }
    else {
      setNoFog(this);
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar10 = (nothrow_t *)(in_stack_00000020 + 1);
    pbVar9 = param_4;
    if ((nothrow_t *)0xfff < pnVar10) {
      pbVar9 = *(basic_string<> **)(param_4 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if ((basic_string<> *)0x1f < param_4 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar9,pnVar10);
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0xf;
  param_4 = (basic_string<> *)((uint)param_4 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar10 = (nothrow_t *)(in_stack_00000038 + 1);
    pbVar9 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar10) {
      pbVar9 = *(basic_string<> **)(in_stack_00000024 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000024 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar9,pnVar10);
  }
  ExceptionList = local_1c;
  return this;
}


// public: __thiscall Ship::~Ship(void)

void __thiscall Ship::~Ship(Ship *this)

{
  _Tree<> *this_00;
  CargoHold *this_01;
  ShipBehaviour *this_02;
  Conversation *this_03;
  int *piVar1;
  uint uVar2;
  Ship *pSVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  void *pvVar8;
  int *piVar9;
  int local_1c;
  Ship *local_18;
  _Tree<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3130;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  pSVar3 = this + 8;
  if (0xf < *(uint *)(this + 0x1c)) {
    pSVar3 = *(Ship **)(this + 8);
  }
  local_18 = this;
  debugPrint("WORLD","%s: deleting object.",pSVar3,uVar2);
  if ((*(int *)(this + 0x44) != 0) && (*(int *)(*(int *)(this + 0x44) + 0x70) == 0)) {
    removeAllFog(this);
  }
  pvVar8 = *(void **)(this + 0x224);
  if (pvVar8 != (void *)0x0) {
    local_8 = 0;
    if (*(int **)((int)pvVar8 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)((int)pvVar8 + 0x34) + 0x138))(1);
      *(undefined4 *)((int)pvVar8 + 0x34) = 0;
    }
    std::vector<>::_Tidy((vector<> *)((int)pvVar8 + 0x4c));
    std::vector<>::_Tidy((vector<> *)((int)pvVar8 + 0x38));
    uVar2 = *(uint *)((int)pvVar8 + 0x2c);
    if (0xf < uVar2) {
      pvVar6 = *(void **)((int)pvVar8 + 0x18);
      pnVar7 = (nothrow_t *)(uVar2 + 1);
      pvVar4 = pvVar6;
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar4 = *(void **)((int)pvVar6 + -4);
        pnVar7 = (nothrow_t *)(uVar2 + 0x24);
        if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar4))) goto LAB_0050b221;
      }
      operator_delete(pvVar4,pnVar7);
    }
    *(undefined4 *)((int)pvVar8 + 0x28) = 0;
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0xf;
    *(undefined1 *)((int)pvVar8 + 0x18) = 0;
    pvVar6 = *(void **)((int)pvVar8 + 4);
    if (pvVar6 != (void *)0x0) {
      pnVar7 = (nothrow_t *)((*(int *)((int)pvVar8 + 0xc) - (int)pvVar6 >> 2) * 4);
      pvVar4 = pvVar6;
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar4 = *(void **)((int)pvVar6 + -4);
        pnVar7 = pnVar7 + 0x23;
        if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar4))) goto LAB_0050b221;
      }
      operator_delete(pvVar4,pnVar7);
      *(undefined4 *)((int)pvVar8 + 4) = 0;
      *(undefined4 *)((int)pvVar8 + 8) = 0;
      *(undefined4 *)((int)pvVar8 + 0xc) = 0;
    }
    local_8 = 0xffffffff;
    operator_delete(pvVar8,(nothrow_t *)0x60);
  }
  this_01 = *(CargoHold **)(this + 0x1f8);
  if (this_01 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(this_01,(uint)this_01);
  }
  this_02 = *(ShipBehaviour **)(this + 0x44);
  if (this_02 != (ShipBehaviour *)0x0) {
    ShipBehaviour::~ShipBehaviour(this_02);
    operator_delete(this_02,(nothrow_t *)0x164);
  }
  uVar2 = 0;
  pvVar8 = *(void **)(this + 0x368);
  if (*(int *)(this + 0x36c) - (int)pvVar8 >> 2 != 0) {
    do {
      this_03 = *(Conversation **)((int)pvVar8 + uVar2 * 4);
      if ((this_03 != (Conversation *)0x0) && (this_03[0x28] != (Conversation)0x0)) {
        Conversation::~Conversation(this_03);
        operator_delete(this_03,(nothrow_t *)0xac);
        *(undefined4 *)(*(int *)(this + 0x368) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
      pvVar8 = *(void **)(this + 0x368);
    } while (uVar2 < (uint)(*(int *)(this + 0x36c) - (int)pvVar8 >> 2));
  }
  if (pvVar8 != (void *)0x0) {
    pnVar7 = (nothrow_t *)((*(int *)(this + 0x370) - (int)pvVar8 >> 2) * 4);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
    *(undefined4 *)(this + 0x368) = 0;
    *(undefined4 *)(this + 0x36c) = 0;
    *(undefined4 *)(this + 0x370) = 0;
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x35c));
  std::_Tree<>::erase((_Tree<> *)(this + 0x348),&local_1c,**(undefined4 **)(this + 0x348),
                      *(undefined4 **)(this + 0x348));
  operator_delete(*(void **)(this + 0x348),(nothrow_t *)0x18);
  uVar2 = *(uint *)(this + 0x340);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 0x32c);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x340) = 0xf;
  this[0x32c] = (Ship)0x0;
  pvVar8 = *(void **)(this + 0x270);
  if (pvVar8 != (void *)0x0) {
    pnVar7 = (nothrow_t *)((*(int *)(this + 0x278) - (int)pvVar8 >> 2) * 4);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
    *(undefined4 *)(this + 0x270) = 0;
    *(undefined4 *)(this + 0x274) = 0;
    *(undefined4 *)(this + 0x278) = 0;
  }
  uVar2 = *(uint *)(this + 0x26c);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 600);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0xf;
  this[600] = (Ship)0x0;
  uVar2 = *(uint *)(this + 0x24c);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 0x238);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0xf;
  this[0x238] = (Ship)0x0;
  pvVar8 = *(void **)(this + 0x228);
  if (pvVar8 != (void *)0x0) {
    pnVar7 = (nothrow_t *)((*(int *)(this + 0x230) - (int)pvVar8 >> 2) * 4);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
    *(undefined4 *)(this + 0x228) = 0;
    *(undefined4 *)(this + 0x22c) = 0;
    *(undefined4 *)(this + 0x230) = 0;
  }
  pvVar8 = *(void **)(this + 0x214);
  if (pvVar8 != (void *)0x0) {
    pnVar7 = (nothrow_t *)((*(int *)(this + 0x21c) - (int)pvVar8 >> 2) * 4);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
    *(undefined4 *)(this + 0x214) = 0;
    *(undefined4 *)(this + 0x218) = 0;
    *(undefined4 *)(this + 0x21c) = 0;
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x208));
  std::vector<>::_Tidy((vector<> *)(this + 0x1fc));
  pvVar8 = *(void **)(this + 0x1c4);
  if (pvVar8 != (void *)0x0) {
    pnVar7 = (nothrow_t *)(*(int *)(this + 0x1cc) - (int)pvVar8 & 0xffffffe0);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1c8) = 0;
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  iVar5 = *(int *)(this + 0x14c);
  this_00 = (_Tree<> *)(this + 0x14c);
  local_8 = 1;
  piVar9 = *(int **)(iVar5 + 4);
  local_1c = iVar5;
  local_14 = this_00;
  if (*(char *)((int)piVar9 + 0xd) == '\0') {
    do {
      std::_Tree<>::_Erase(this_00,(_Tree_node<> *)piVar9[2]);
      piVar1 = (int *)*piVar9;
      operator_delete(piVar9,(nothrow_t *)0x18);
      piVar9 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar5 = *(int *)this_00;
    this = local_18;
  }
  *(int *)(iVar5 + 4) = local_1c;
  **(int **)local_14 = local_1c;
  *(int *)(*(int *)local_14 + 8) = local_1c;
  *(undefined4 *)(local_14 + 4) = 0;
  operator_delete(*(void **)local_14,(nothrow_t *)0x18);
  uVar2 = *(uint *)(this + 0xc4);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 0xb0);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0xf;
  this[0xb0] = (Ship)0x0;
  uVar2 = *(uint *)(this + 0xac);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 0x98);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0xf;
  this[0x98] = (Ship)0x0;
  uVar2 = *(uint *)(this + 0x94);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 0x80);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xf;
  this[0x80] = (Ship)0x0;
  uVar2 = *(uint *)(this + 0x7c);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 0x68);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) goto LAB_0050b221;
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (Ship)0x0;
  uVar2 = *(uint *)(this + 0x1c);
  if (0xf < uVar2) {
    pvVar8 = *(void **)(this + 8);
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar6 = pvVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar8 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar6))) {
LAB_0050b221:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (Ship)0x0;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::initialiseBehaviour(enum ECraftPurpose::CraftPurpose,int,int)

void __thiscall Ship::initialiseBehaviour(Ship *this,CraftPurpose param_1,int param_2,int param_3)

{
  uint uVar1;
  ShipBehaviour *this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  Ship *pSVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3174;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x164);
  if (param_2 < 4) {
    local_8 = 1;
    iVar4 = ShipBehaviour::ShipBehaviour(this_00,this,param_1);
    local_8 = 0xffffffff;
    *(int *)(this + 0x44) = iVar4;
    *(int *)(iVar4 + 0x74) = param_2;
  }
  else {
    local_8 = 0;
    uVar2 = ShipBehaviour::ShipBehaviour(this_00,this,param_1);
    local_8 = 0xffffffff;
    *(undefined4 *)(this + 0x44) = uVar2;
    uVar3 = rand();
    uVar3 = uVar3 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(this + 0x44) + 0x74) = uVar3;
  }
  if (param_3 < 3) {
    *(int *)(*(int *)(this + 0x44) + 0x78) = param_3;
  }
  else {
    iVar4 = rand();
    *(int *)(*(int *)(this + 0x44) + 0x78) = iVar4 % 3;
  }
  iVar4 = *(int *)(this + 0x44);
  if ((*(int *)(iVar4 + 0x70) != 0) && (*(int *)(iVar4 + 0x70) != 3)) {
    pSVar5 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    debugPrint("AI","%s: My captain is %s and %s",pSVar5,
               (&PTR_s_cautious_005e181c)[*(int *)(iVar4 + 0x74)],
               (&PTR_s_green_005e1840)[*(int *)(iVar4 + 0x78)],uVar1);
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// public: void __cdecl Ship::log(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,...)

void __thiscall Ship::log(undefined4 param_1,int param_2,char *param_3,...)

{
  char *pcVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  va_list unaff_ESI;
  undefined4 *puVar4;
  uint in_stack_0000001c;
  void *local_4030 [5];
  uint local_401c;
  undefined1 local_4018 [16384];
  char *local_18;
  undefined4 uStack_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c31a3;
  local_10 = ExceptionList;
  uStack_14 = 0x50b58b;
  local_18 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  pcVar1 = (char *)&param_3;
  if (0xf < in_stack_0000001c) {
    pcVar1 = param_3;
  }
  _vsnprintf(pcVar1,(size_t)&stack0x00000020,local_18,unaff_ESI);
  puVar4 = (undefined4 *)(param_2 + 8);
  if (0xf < *(uint *)(param_2 + 0x1c)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  pcVar1 = (char *)strUsingArgs((char *)local_4030,"%s: %s",puVar4,local_4018);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar1 = *(char **)pcVar1;
  }
  debugPrint("GAME",pcVar1);
  if (0xf < local_401c) {
    pnVar3 = (nothrow_t *)(local_401c + 1);
    pvVar2 = local_4030[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_4030[0] + -4);
      pnVar3 = (nothrow_t *)(local_401c + 0x24);
      if (0x1f < (uint)((int)local_4030[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pcVar1 = *(char **)(param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar1)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar1,pnVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Ship::setNoFog(void)

void __thiscall Ship::setNoFog(Ship *this)

{
  GameData *pGVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar4 = 0;
  if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
    do {
      pvVar2 = operator_new(0x300);
      memset(pvVar2,0,0x300);
      local_8 = 0;
      _eh_vector_constructor_iterator_
                (pvVar2,0xc,0x40,std::vector<>::vector<>,std::vector<>::~vector<>);
      local_8 = 0xffffffff;
      piVar3 = std::map<>::operator[]
                         ((map<> *)(this + 0x348),*(int **)(*(int *)(g_gameData + 0x3c) + uVar4 * 4)
                         );
      pGVar1 = g_gameData;
      uVar4 = uVar4 + 1;
      *piVar3 = (int)pvVar2;
    } while (uVar4 < (uint)(*(int *)(pGVar1 + 0x40) - *(int *)(pGVar1 + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::setFullFog(void)

void __thiscall Ship::setFullFog(Ship *this)

{
  FogInstance *this_00;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
    do {
      this_00 = operator_new(0x300);
      memset(this_00,0,0x300);
      local_8 = 0;
      _eh_vector_constructor_iterator_
                (this_00,0xc,0x40,std::vector<>::vector<>,std::vector<>::~vector<>);
      local_8 = 0xffffffff;
      piVar1 = std::map<>::operator[]
                         ((map<> *)(this + 0x348),*(int **)(*(int *)(g_gameData + 0x3c) + uVar2 * 4)
                         );
      *piVar1 = (int)this_00;
      if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
        FogInstance::resetFog(this_00);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::removeAllFog(void)

void __thiscall Ship::removeAllFog(Ship *this)

{
  void *pvVar1;
  int iVar2;
  _Tree<> *this_00;
  int *piVar3;
  GameData *pGVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  _Tree<> *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c31d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(this + 0x34c) != 0) &&
     (pGVar4 = g_gameData + 0x3c, 3 < (uint)(*(int *)(g_gameData + 0x40) - *(int *)pGVar4))) {
    local_1c = (_Tree<> *)(this + 0x348);
    local_14 = 0;
    do {
      if (*(int *)(local_1c + 4) == 0) {
        ExceptionList = local_10;
        return;
      }
      std::_Tree<>::_Eqrange<int>(local_1c,&local_30);
      iVar2 = local_2c;
      iVar5 = 0;
      local_18 = local_30;
      if (local_30 != local_2c) {
        do {
          iVar5 = iVar5 + 1;
          std::_Tree_unchecked_const_iterator<>::operator++
                    ((_Tree_unchecked_const_iterator<> *)&local_18);
          this_00 = local_1c;
        } while (local_18 != iVar2);
        if (iVar5 != 0) {
          piVar3 = std::map<>::operator[]((map<> *)local_1c,*(int **)(*(int *)pGVar4 + local_14));
          pvVar1 = (void *)*piVar3;
          std::_Tree<>::_Eqrange<int>(this_00,&local_28);
          iVar2 = local_24;
          local_18 = local_28;
          while (local_18 != iVar2) {
            std::_Tree_unchecked_const_iterator<>::operator++
                      ((_Tree_unchecked_const_iterator<> *)&local_18);
          }
          std::_Tree<>::erase(this_00,local_20,local_28,iVar2);
          if (pvVar1 != (void *)0x0) {
            local_8 = 0;
            _eh_vector_destructor_iterator_(pvVar1,0xc,0x40,std::vector<>::~vector<>);
            local_8 = 0xffffffff;
            operator_delete(pvVar1,(nothrow_t *)0x300);
          }
        }
      }
      pGVar4 = g_gameData + 0x3c;
      local_14 = local_14 + 4;
    } while ((*(int *)(g_gameData + 0x40) - *(int *)pGVar4 & 0xfffffffcU) != 0);
  }
  ExceptionList = local_10;
  return;
}


// public: double __thiscall Ship::relativeAngleToLocation(class cocos2d::Vec2)

double __thiscall Ship::relativeAngleToLocation(Ship *this,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  
  dVar1 = trueAngleToPosition(this,param_2,param_3);
  return dVar1;
}


// public: double __thiscall Ship::relativeAngleToObject(class GameObject *)

double __thiscall Ship::relativeAngleToObject(Ship *this,GameObject *param_1)

{
  float10 extraout_ST1;
  
  __CIatan2();
  return (double)extraout_ST1;
}


// public: double __thiscall Ship::trueAngleToPosition(class cocos2d::Vec2)

double __thiscall Ship::trueAngleToPosition(Ship *this,float param_2)

{
  float10 extraout_ST1;
  
  __CIatan2(*(double *)(this + 0x28) - (double)param_2);
  return (double)extraout_ST1;
}


// public: double __thiscall Ship::trueAngleToObject(class GameObject *)

double __thiscall Ship::trueAngleToObject(Ship *this,GameObject *param_1)

{
  float10 extraout_ST1;
  
  __CIatan2(*(double *)(this + 0x28) - (double)(float)*(double *)(param_1 + 0x20));
  return (double)extraout_ST1;
}


// public: class SensorData * __thiscall Ship::getMostDangerousSensorObject(void)

SensorData * __thiscall Ship::getMostDangerousSensorObject(Ship *this)

{
  int iVar1;
  uint uVar2;
  SensorData *pSVar3;
  float fVar4;
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
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3214;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar3 = (SensorData *)0x0;
  iVar1 = *(int *)(this + 0x214);
  local_14 = 0.0;
  uVar2 = 0;
  if (*(int *)(this + 0x218) - iVar1 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if ((*(int *)(iVar1 + 0xe0) == 0) && (*(char *)(iVar1 + 0x10c) == '\0')) {
        local_20 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
        local_1c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
        local_28 = (float)*(double *)(this + 0x28);
        local_24 = (float)*(double *)(this + 0x30);
        local_8 = 1;
        fVar4 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
        local_18 = (float)(0x5f3759df - ((uint)fVar4 >> 1));
        fVar4 = (1.5 - fVar4 * 0.5 * local_18 * local_18) * local_18 * fVar4;
        if (((pSVar3 == (SensorData *)0x0) || (*(int *)(pSVar3 + 0xe0) == 0)) || (fVar4 < local_14))
        {
LAB_0050bdd0:
          local_14 = fVar4;
          pSVar3 = *(SensorData **)(*(int *)(this + 0x214) + uVar2 * 4);
        }
      }
      else if (*(int *)(iVar1 + 0xe0) == 1) {
        local_30 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
        local_2c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
        local_38 = (float)*(double *)(this + 0x28);
        local_34 = (float)*(double *)(this + 0x30);
        local_8 = 3;
        fVar4 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&local_30);
        local_18 = (float)(0x5f3759df - ((uint)fVar4 >> 1));
        fVar4 = (1.5 - fVar4 * 0.5 * local_18 * local_18) * local_18 * fVar4;
        if (((pSVar3 == (SensorData *)0x0) || (fVar4 < local_14)) || (*(int *)(pSVar3 + 0xe0) != 0))
        goto LAB_0050bdd0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(this + 0x214);
    } while (uVar2 < (uint)(*(int *)(this + 0x218) - iVar1 >> 2));
  }
  ExceptionList = local_10;
  return pSVar3;
}


// public: void __thiscall Ship::selectNextValidSensorObject(void)

void __thiscall Ship::selectNextValidSensorObject(Ship *this)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  nothrow_t *pnVar5;
  HullDamageChance *pHVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  HullDamageChance *pHVar10;
  int *piVar11;
  int *local_28;
  HullDamageChance *local_24;
  HullDamageChance *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  HullDamageChance *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3238;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this[0x1b2] = (Ship)0x0;
  pHVar10 = (HullDamageChance *)0x0;
  local_14 = (HullDamageChance *)0x0;
  pHVar6 = (HullDamageChance *)0x0;
  local_28 = (int *)0x0;
  local_24 = (HullDamageChance *)0x0;
  local_20 = (HullDamageChance *)0x0;
  local_8 = 0;
  uVar8 = 0;
  iVar3 = *(int *)(this + 0x214);
  if (*(int *)(this + 0x218) - iVar3 >> 2 != 0) {
    do {
      iVar7 = *(int *)(this + 0xfc);
      if (iVar7 == 1) {
        iVar7 = *(int *)(*(int *)(iVar3 + uVar8 * 4) + 0xd8);
        if ((iVar7 != 2) && (iVar7 != 1)) {
joined_r0x0050beb2:
          if (iVar7 != 3) goto LAB_0050beb4;
        }
      }
      else {
        if (iVar7 != 2) goto joined_r0x0050beb2;
        iVar7 = *(int *)(*(int *)(iVar3 + uVar8 * 4) + 0xd8);
        if ((iVar7 == 4) || (iVar7 == 0)) goto LAB_0050bee8;
LAB_0050beb4:
        local_1c = *(undefined4 *)(iVar3 + uVar8 * 4);
        local_18 = 0;
        if (pHVar10 == pHVar6) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_28,pHVar6,(HullDamageChance *)&local_1c);
          local_14 = local_20;
          pHVar6 = local_24;
          pHVar10 = local_20;
        }
        else {
          *(undefined4 *)pHVar6 = local_1c;
          *(undefined4 *)(pHVar6 + 4) = 0;
          local_24 = pHVar6 + 8;
          pHVar6 = local_24;
        }
      }
LAB_0050bee8:
      uVar8 = uVar8 + 1;
      iVar3 = *(int *)(this + 0x214);
    } while (uVar8 < (uint)(*(int *)(this + 0x218) - iVar3 >> 2));
  }
  iVar3 = *(int *)(this + 0x24);
  uVar8 = 0;
  if (*(int *)(iVar3 + 0x94) - *(int *)(iVar3 + 0x90) >> 2 != 0) {
    do {
      if ((*(int *)(this + 0xfc) != 1) && (*(int *)(this + 0xfc) != 2)) {
        local_1c = 0;
        local_18 = *(undefined4 *)(*(int *)(iVar3 + 0x90) + uVar8 * 4);
        if (local_14 == pHVar6) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_28,pHVar6,(HullDamageChance *)&local_1c);
          local_14 = local_20;
          pHVar6 = local_24;
        }
        else {
          *(undefined4 *)pHVar6 = 0;
          *(undefined4 *)(pHVar6 + 4) = local_18;
          local_24 = pHVar6 + 8;
          pHVar6 = local_24;
        }
      }
      iVar3 = *(int *)(this + 0x24);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(iVar3 + 0x94) - *(int *)(iVar3 + 0x90) >> 2));
  }
  uVar8 = (int)pHVar6 - (int)local_28 >> 3;
  if (uVar8 == 0) {
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 400) = 0xffffffff;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1a8) = 0xffffffff;
    if (this[0x1b0] != (Ship)0x0) {
      *(undefined4 *)(this + 0x19c) = 0;
      *(undefined4 *)(this + 0x198) = 0xffffffff;
      *(undefined4 *)(this + 0x1a4) = 0;
      *(undefined4 *)(this + 0x1a0) = 0xffffffff;
    }
  }
  else {
    iVar3 = *(int *)(this + 0x194);
    if ((iVar3 == 0) && (*(int *)(this + 0x1ac) == 0)) {
      iVar3 = *local_28;
      if (iVar3 == 0) {
        iVar3 = 0;
        *(int *)(this + 0x1ac) = local_28[1];
        *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(local_28[1] + 0x38);
      }
      else {
        *(int *)(this + 0x194) = iVar3;
        *(undefined4 *)(this + 400) = *(undefined4 *)*local_28;
      }
      if (this[0x1b0] == (Ship)0x0) goto LAB_0050c138;
      *(int *)(this + 0x19c) = iVar3;
    }
    else {
      uVar1 = 0;
      if (uVar8 != 0) {
        do {
          if (((*(int *)(this + 0x1ac) != 0) && (*(int *)(this + 0x1ac) == local_28[uVar1 * 2 + 1]))
             || ((iVar3 != 0 && (iVar3 == local_28[uVar1 * 2])))) {
            if (uVar1 != 0xffffffff) {
              uVar4 = uVar8 - 1;
              if (uVar1 + 1 < uVar8) {
                uVar4 = uVar1 + 1;
              }
              piVar11 = local_28 + uVar4 * 2;
              iVar3 = *piVar11;
              if (iVar3 == 0) {
                *(undefined4 *)(this + 0x194) = 0;
                iVar3 = 0;
                *(undefined4 *)(this + 400) = 0xffffffff;
                iVar7 = piVar11[1];
                *(int *)(this + 0x1ac) = iVar7;
                uVar9 = *(undefined4 *)(piVar11[1] + 0x38);
                uVar2 = 0xffffffff;
                *(undefined4 *)(this + 0x1a8) = uVar9;
              }
              else {
                *(int *)(this + 0x194) = iVar3;
                iVar7 = 0;
                uVar9 = 0xffffffff;
                uVar2 = *(undefined4 *)*piVar11;
                *(undefined4 *)(this + 400) = uVar2;
                *(undefined4 *)(this + 0x1ac) = 0;
                *(undefined4 *)(this + 0x1a8) = 0xffffffff;
              }
              if (this[0x1b0] == (Ship)0x0) goto LAB_0050c138;
              *(int *)(this + 0x19c) = iVar3;
              *(int *)(this + 0x1a4) = iVar7;
              *(undefined4 *)(this + 0x1a0) = uVar9;
              goto LAB_0050c132;
            }
            break;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar8);
      }
      iVar7 = *local_28;
      if (iVar7 == 0) {
        *(int *)(this + 0x1ac) = local_28[1];
        *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(local_28[1] + 0x38);
      }
      else {
        *(int *)(this + 0x194) = iVar7;
        *(undefined4 *)(this + 400) = *(undefined4 *)*local_28;
        iVar3 = iVar7;
      }
      if (this[0x1b0] == (Ship)0x0) goto LAB_0050c138;
      *(int *)(this + 0x19c) = iVar3;
    }
    uVar2 = *(undefined4 *)(this + 400);
LAB_0050c132:
    *(undefined4 *)(this + 0x198) = uVar2;
  }
LAB_0050c138:
  if (local_28 != (int *)0x0) {
    pnVar5 = (nothrow_t *)((int)local_14 - (int)local_28 & 0xfffffff8);
    piVar11 = local_28;
    if ((nothrow_t *)0xfff < pnVar5) {
      piVar11 = (int *)local_28[-1];
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)local_28 + (-4 - (int)piVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(piVar11,pnVar5);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::selectPrevValidSensorObject(void)

void __thiscall Ship::selectPrevValidSensorObject(Ship *this)

{
  uint uVar1;
  undefined4 uVar2;
  HullDamageChance *pHVar3;
  int iVar4;
  nothrow_t *pnVar5;
  HullDamageChance *pHVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *local_28;
  HullDamageChance *local_24;
  HullDamageChance *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  HullDamageChance *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3238;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this[0x1b2] = (Ship)0x0;
  pHVar6 = (HullDamageChance *)0x0;
  local_14 = (HullDamageChance *)0x0;
  pHVar3 = (HullDamageChance *)0x0;
  local_28 = (int *)0x0;
  local_24 = (HullDamageChance *)0x0;
  local_20 = (HullDamageChance *)0x0;
  local_8 = 0;
  uVar9 = 0;
  iVar10 = *(int *)(this + 0x214);
  if (*(int *)(this + 0x218) - iVar10 >> 2 != 0) {
    do {
      iVar4 = *(int *)(this + 0xfc);
      if (iVar4 == 1) {
        iVar4 = *(int *)(*(int *)(iVar10 + uVar9 * 4) + 0xd8);
        if ((iVar4 != 2) && (iVar4 != 1)) {
joined_r0x0050c222:
          if (iVar4 != 3) goto LAB_0050c224;
        }
      }
      else {
        if (iVar4 != 2) goto joined_r0x0050c222;
        iVar4 = *(int *)(*(int *)(iVar10 + uVar9 * 4) + 0xd8);
        if ((iVar4 == 4) || (iVar4 == 0)) goto LAB_0050c258;
LAB_0050c224:
        local_1c = *(undefined4 *)(iVar10 + uVar9 * 4);
        local_18 = 0;
        if (pHVar6 == pHVar3) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_28,pHVar3,(HullDamageChance *)&local_1c);
          local_14 = local_20;
          pHVar3 = local_24;
          pHVar6 = local_20;
        }
        else {
          *(undefined4 *)pHVar3 = local_1c;
          *(undefined4 *)(pHVar3 + 4) = 0;
          local_24 = pHVar3 + 8;
          pHVar3 = local_24;
        }
      }
LAB_0050c258:
      uVar9 = uVar9 + 1;
      iVar10 = *(int *)(this + 0x214);
    } while (uVar9 < (uint)(*(int *)(this + 0x218) - iVar10 >> 2));
  }
  iVar10 = *(int *)(this + 0x24);
  uVar9 = 0;
  if (*(int *)(iVar10 + 0x94) - *(int *)(iVar10 + 0x90) >> 2 != 0) {
    do {
      if ((*(int *)(this + 0xfc) != 1) && (*(int *)(this + 0xfc) != 2)) {
        local_1c = 0;
        local_18 = *(undefined4 *)(*(int *)(iVar10 + 0x90) + uVar9 * 4);
        if (local_14 == pHVar3) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_28,pHVar3,(HullDamageChance *)&local_1c);
          local_14 = local_20;
          pHVar3 = local_24;
        }
        else {
          *(undefined4 *)pHVar3 = 0;
          *(undefined4 *)(pHVar3 + 4) = local_18;
          local_24 = pHVar3 + 8;
          pHVar3 = local_24;
        }
      }
      iVar10 = *(int *)(this + 0x24);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(iVar10 + 0x94) - *(int *)(iVar10 + 0x90) >> 2));
  }
  uVar9 = (int)pHVar3 - (int)local_28 >> 3;
  if (uVar9 == 0) {
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 400) = 0xffffffff;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1a8) = 0xffffffff;
    if (this[0x1b0] != (Ship)0x0) {
      *(undefined4 *)(this + 0x19c) = 0;
      *(undefined4 *)(this + 0x198) = 0xffffffff;
      *(undefined4 *)(this + 0x1a4) = 0;
      *(undefined4 *)(this + 0x1a0) = 0xffffffff;
    }
    goto LAB_0050c465;
  }
  iVar10 = *(int *)(this + 0x194);
  if ((iVar10 == 0) && (*(int *)(this + 0x1ac) == 0)) {
    iVar10 = *local_28;
    iVar4 = iVar10;
    if (iVar10 != 0) goto LAB_0050c398;
LAB_0050c435:
    *(int *)(this + 0x1ac) = local_28[1];
    *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(local_28[1] + 0x38);
    iVar4 = iVar10;
  }
  else {
    uVar1 = 0;
    if (uVar9 != 0) {
      do {
        if (((*(int *)(this + 0x1ac) != 0) && (*(int *)(this + 0x1ac) == local_28[uVar1 * 2 + 1]))
           || ((iVar10 != 0 && (iVar10 == local_28[uVar1 * 2])))) {
          if (uVar1 != 0xffffffff) {
            iVar10 = 0;
            if (-1 < (int)(uVar1 - 1)) {
              iVar10 = uVar1 - 1;
            }
            piVar7 = local_28 + iVar10 * 2;
            iVar4 = *piVar7;
            if (iVar4 == 0) {
              *(undefined4 *)(this + 0x194) = 0;
              iVar4 = 0;
              *(undefined4 *)(this + 400) = 0xffffffff;
              iVar10 = piVar7[1];
              *(int *)(this + 0x1ac) = iVar10;
              uVar8 = *(undefined4 *)(piVar7[1] + 0x38);
              uVar2 = 0xffffffff;
              *(undefined4 *)(this + 0x1a8) = uVar8;
            }
            else {
              *(int *)(this + 0x194) = iVar4;
              iVar10 = 0;
              uVar8 = 0xffffffff;
              uVar2 = *(undefined4 *)*piVar7;
              *(undefined4 *)(this + 400) = uVar2;
              *(undefined4 *)(this + 0x1ac) = 0;
              *(undefined4 *)(this + 0x1a8) = 0xffffffff;
            }
            if (this[0x1b0] == (Ship)0x0) goto LAB_0050c465;
            *(int *)(this + 0x1a4) = iVar10;
            *(undefined4 *)(this + 0x1a0) = uVar8;
            goto LAB_0050c459;
          }
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar9);
    }
    iVar4 = *local_28;
    if (iVar4 == 0) goto LAB_0050c435;
LAB_0050c398:
    *(int *)(this + 0x194) = iVar4;
    *(undefined4 *)(this + 400) = *(undefined4 *)*local_28;
  }
  if (this[0x1b0] != (Ship)0x0) {
    uVar2 = *(undefined4 *)(this + 400);
LAB_0050c459:
    *(int *)(this + 0x19c) = iVar4;
    *(undefined4 *)(this + 0x198) = uVar2;
  }
LAB_0050c465:
  if (local_28 != (int *)0x0) {
    pnVar5 = (nothrow_t *)((int)local_14 - (int)local_28 & 0xfffffff8);
    piVar7 = local_28;
    if ((nothrow_t *)0xfff < pnVar5) {
      piVar7 = (int *)local_28[-1];
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)local_28 + (-4 - (int)piVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(piVar7,pnVar5);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::setEmcon(bool)

void __thiscall Ship::setEmcon(Ship *this,bool param_1)

{
  ShipModule *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(this + 0x40);
  this[0xe4] = (Ship)param_1;
  if (*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2 != 0) {
    do {
      this_00 = *(ShipModule **)(*(int *)(iVar1 + 0x3c) + uVar2 * 4);
      if ((param_1) && (this_00[0x14] == (ShipModule)0x0)) {
        ShipModule::disconnect(this_00,this);
      }
      else {
        ShipModule::connect(this_00,this);
      }
      iVar1 = *(int *)(this + 0x40);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
  }
  return;
}


// public: virtual bool __thiscall Ship::hullDamaged(void)

bool __thiscall Ship::hullDamaged(Ship *this)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  puVar1 = *(undefined4 **)(this + 0x14c);
  local_8 = (undefined4 *)*puVar1;
  while( true ) {
    if (local_8 == puVar1) {
      return false;
    }
    if (0 < (int)local_8[5]) break;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_8);
  }
  return true;
}


// public: virtual bool __thiscall Ship::isDestroyed(void)

bool __thiscall Ship::isDestroyed(Ship *this)

{
  int *piVar1;
  ShipClass *this_00;
  int *piVar2;
  undefined1 local_14 [4];
  char local_10;
  int local_c;
  int *local_8;
  
  piVar1 = *(int **)(this + 0x14c);
  local_8 = (int *)*piVar1;
  if (local_8 != piVar1) {
    this_00 = *(ShipClass **)(this + 0x254);
    do {
      piVar2 = local_8;
      ShipClass::hullStrengthForSection(this_00,(HullLocation)local_14);
      if ((local_10 != '\0') && (local_c <= piVar2[5])) {
        return true;
      }
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_8);
    } while (local_8 != piVar1);
  }
  return false;
}


// public: enum EHullDamageState::HullDamageState __thiscall Ship::getDamageStateForHullSection(enum
// EHullLocation::HullLocation)

HullDamageState __thiscall Ship::getDamageStateForHullSection(Ship *this,HullLocation param_1)

{
  int iVar1;
  int iVar2;
  HullLocation *pHVar3;
  uint uVar4;
  
  uVar4 = 0;
  pHVar3 = *(HullLocation **)(*(int *)(this + 0x254) + 0x118);
  iVar2 = *(int *)(*(int *)(this + 0x254) + 0x11c) - (int)pHVar3;
  iVar1 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 0xc + iVar1;
  if (iVar2 != iVar1) {
    do {
      if (*pHVar3 == param_1) {
        iVar1 = getDamageAmountForHullSection(this,param_1);
        iVar1 = 100 - iVar1;
        if (iVar1 == 100) {
          return 0;
        }
        if (0x54 < iVar1) {
          return 1;
        }
        if (0x3b < iVar1) {
          return 2;
        }
        if (0x18 < iVar1) {
          return 3;
        }
        return (iVar1 < 1) + 4;
      }
      uVar4 = uVar4 + 1;
      pHVar3 = pHVar3 + 3;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return 0;
}


// public: int __thiscall Ship::getHullDamagePercent(void)

int __thiscall Ship::getHullDamagePercent(Ship *this)

{
  Ship *pSVar1;
  int iVar2;
  int iVar3;
  HullLocation HVar4;
  HullLocation *pHVar5;
  uint uVar6;
  float fVar7;
  undefined1 local_1c [12];
  float local_10;
  Ship *local_c;
  float local_8;
  
  HVar4 = 0;
  local_8 = 0.0;
  local_10 = 0.0;
  local_c = this;
  do {
    iVar2 = getDamageAmountForHullSection(this,HVar4);
    pSVar1 = local_c;
    uVar6 = 0;
    pHVar5 = *(HullLocation **)(*(int *)(this + 0x254) + 0x118);
    iVar3 = *(int *)(*(int *)(this + 0x254) + 0x11c) - (int)pHVar5;
    fVar7 = (float)iVar2 + local_10;
    iVar2 = iVar3 >> 0x1f;
    iVar3 = iVar3 / 0xc + iVar2;
    local_10 = fVar7;
    if (iVar3 != iVar2) {
      do {
        if (*pHVar5 == HVar4) {
          iVar2 = ShipClass::hullStrengthForSection
                            (*(ShipClass **)(local_c + 0x254),(HullLocation)local_1c);
          local_8 = (float)*(int *)(iVar2 + 8) + local_8;
          break;
        }
        uVar6 = uVar6 + 1;
        pHVar5 = pHVar5 + 3;
      } while (uVar6 < (uint)(iVar3 - iVar2));
    }
    HVar4 = HVar4 + 1;
    this = pSVar1;
    if (4 < (int)HVar4) {
      return (int)((fVar7 / local_8) * 100.0);
    }
  } while( true );
}


// public: int __thiscall Ship::getDamageAmountForHullSection(enum EHullLocation::HullLocation)

int __thiscall Ship::getDamageAmountForHullSection(Ship *this,HullLocation param_1)

{
  ShipClass *this_00;
  int iVar1;
  HullLocation HVar2;
  int *piVar3;
  int iVar4;
  HullLocation *pHVar5;
  uint uVar6;
  undefined1 local_14 [8];
  int local_c;
  Ship *local_8;
  
  HVar2 = param_1;
  this_00 = *(ShipClass **)(this + 0x254);
  uVar6 = 0;
  pHVar5 = *(HullLocation **)(this_00 + 0x118);
  iVar1 = *(int *)(this_00 + 0x11c) - (int)pHVar5 >> 0x1f;
  iVar4 = (*(int *)(this_00 + 0x11c) - (int)pHVar5) / 0xc + iVar1;
  if (iVar4 != iVar1) {
    do {
      if (*pHVar5 == param_1) {
        local_8 = this;
        ShipClass::hullStrengthForSection(this_00,(HullLocation)local_14);
        param_1 = HVar2;
        piVar3 = std::map<>::operator[]((map<> *)(local_8 + 0x14c),(int *)&param_1);
        return (int)(((float)*piVar3 / (float)local_c) * 100.0);
      }
      uVar6 = uVar6 + 1;
      pHVar5 = pHVar5 + 3;
    } while (uVar6 < (uint)(iVar4 - iVar1));
  }
  return 0;
}


// public: void __thiscall Ship::setSector(int)

void __thiscall Ship::setSector(Ship *this,int param_1)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  Ship SVar3;
  FlagManager *pFVar4;
  CommsManager *this_00;
  int *piVar5;
  JunkManager *pJVar6;
  void *pvVar7;
  undefined4 *puVar8;
  nothrow_t *pnVar9;
  char acStack_60 [8];
  undefined4 uStack_58;
  undefined4 local_54;
  void *local_38 [5];
  uint local_24;
  Stats *local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c32a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  SVar3 = this[0x234];
  if (SVar3 != (Ship)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_38,(basic_string<> *)(*(int *)(this + 0x24) + 0x1c));
      if (0xf < local_24) {
        pnVar9 = (nothrow_t *)(local_24 + 1);
        pvVar7 = local_38[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_38[0] + -4);
          pnVar9 = (nothrow_t *)(local_24 + 0x24);
          if (0x1f < (uint)((int)local_38[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        local_54 = 0x50c831;
        operator_delete(pvVar7,pnVar9);
      }
      local_18 = acStack_60;
      strUsingArgs(acStack_60,"visited_sector_%d");
      local_8 = 0;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        local_1c = operator_new(0x58);
        local_8 = CONCAT31(local_8._1_3_,1);
        Singleton<Stats>::instance = (Stats *)Stats::Stats(local_1c);
      }
      local_8 = 0xffffffff;
      Stats::setBinaryStat(Singleton<Stats>::instance);
      local_1c = (Stats *)&stack0xffffff9c;
      strUsingArgs(&stack0xffffff9c,"in_sector_%d",**(undefined4 **)(this + 0x24));
      local_8 = 2;
      pFVar4 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar4);
      SVar3 = this[0x234];
    }
    if (SVar3 != (Ship)0x0) {
      this_00 = Singleton<>::getInstance();
      CommsManager::reset(this_00);
    }
  }
  if (*(Sector **)(this + 0x24) != (Sector *)0x0) {
    Sector::removeShip(*(Sector **)(this + 0x24),this);
  }
  *(int *)(this + 0x20) = param_1;
  if (param_1 != -1) {
    for (puVar8 = *(undefined4 **)(g_gameData + 0x3c); puVar8 != *(undefined4 **)(g_gameData + 0x40)
        ; puVar8 = puVar8 + 1) {
      piVar5 = (int *)*puVar8;
      if (*piVar5 == param_1) goto LAB_0050c911;
    }
    piVar5 = (int *)0x0;
LAB_0050c911:
    *(int **)(this + 0x24) = piVar5;
    ppAVar1 = (AnimationFrames **)piVar5[0x34];
    if ((AnimationFrames **)piVar5[0x35] == ppAVar1) {
      local_54 = 0x50c937;
      param_1 = (int)this;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(piVar5 + 0x33),ppAVar1,(AnimationFrames **)&param_1);
    }
    else {
      *ppAVar1 = (AnimationFrames *)this;
      piVar5[0x34] = piVar5[0x34] + 4;
    }
  }
  if ((this[0x234] != (Ship)0x0) && (*(undefined4 **)(this + 0x24) != (undefined4 *)0x0)) {
    param_1 = (int)&stack0xffffff9c;
    strUsingArgs(&stack0xffffff9c,"visited_sector_%d",**(undefined4 **)(this + 0x24));
    local_8 = 3;
    pFVar4 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar4);
    param_1 = (int)&stack0xffffffb0;
    local_8 = 4;
    local_54 = *(undefined4 *)(this + 0x24);
    uStack_58 = 0x50c9b5;
    pJVar6 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    uStack_58 = 0x50c9c3;
    JunkManager::generateJunkForSector(pJVar6);
    iVar2 = *(int *)(this + 0x20);
    if (((iVar2 != 5) &&
        ((((iVar2 != 0x65 && (iVar2 != 0x66)) && (iVar2 != 0x69)) &&
         ((iVar2 != 4 && (iVar2 != 0x6b)))))) &&
       (((iVar2 != 0x71 &&
         (((iVar2 != 0x74 && (iVar2 != 6)) &&
          ((iVar2 != 9 && (((iVar2 != 0x68 && (iVar2 != 0x6a)) && (iVar2 != 0xb)))))))) &&
        (((iVar2 != 0x6e && (iVar2 != 10)) && (iVar2 != 0x76)))))) {
      param_1 = (int)&stack0xffffff9c;
      local_54 = 0;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff9c,"visited_outer_rim",0x11);
      local_8 = 5;
      pFVar4 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar4);
    }
    param_1 = (int)&stack0xffffff9c;
    strUsingArgs(&stack0xffffff9c,"in_sector_%d",**(undefined4 **)(this + 0x24));
    local_8 = 6;
    pFVar4 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar4);
    if (((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
       && (*(int *)(*(int *)(this + 0x24) + 0x118) == 2)) {
      *(undefined1 *)(*(int *)(this + 0x40) + 0x34) = 0;
      ExceptionList = local_10;
      return;
    }
    *(undefined1 *)(*(int *)(this + 0x40) + 0x34) = 1;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::giveFullPower(void)

void __thiscall Ship::giveFullPower(Ship *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(int *)(this + 0x40) + 0x40) - *(int *)(*(int *)(this + 0x40) + 0x3c) >> 2 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(this + 0x40) + 0x3c) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc4);
    } while (uVar2 < (uint)(*(int *)(*(int *)(this + 0x40) + 0x40) -
                            *(int *)(*(int *)(this + 0x40) + 0x3c) >> 2));
  }
  return;
}


// public: void __thiscall Ship::addModulesWithConfig(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall Ship::addModulesWithConfig(Ship *this,void *param_2)

{
  ShipModuleClass *pSVar1;
  bool bVar2;
  ShipConfiguration *pSVar3;
  ShipModule *pSVar4;
  ShipConfiguration *pSVar5;
  int iVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  uint unaff_EDI;
  uint in_stack_00000018;
  basic_string<> abStack_44 [8];
  undefined4 uStack_3c;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c32da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar2 = std::_Traits_equal<>
                    ("menu",4,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
  if (!bVar2) {
    std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&param_2);
    pSVar3 = ShipClass::getShipConfiguration(*(ShipClass **)(this + 0x254));
    if (pSVar3 == (ShipConfiguration *)0x0) {
      debugPrint("ERROR","Invalid ship configuration.");
      uStack_3c = 0x50cbd9;
      bVar2 = cc_assert_script_compatible("Ship configuration invalid.");
      if (!bVar2) {
        cocos2d::log("Assert failed: %s");
      }
    }
    else {
      uVar9 = 0;
      iVar6 = *(int *)(pSVar3 + 0x34);
      if (*(int *)(pSVar3 + 0x38) - iVar6 >> 2 != 0) {
        do {
          pSVar1 = *(ShipModuleClass **)(*(int *)(iVar6 + uVar9 * 4) + 4);
          pSVar4 = operator_new(0x88);
          local_8._0_1_ = 1;
          pSVar4 = (ShipModule *)ShipModule::ShipModule(pSVar4,pSVar1);
          local_8 = (uint)local_8._1_3_ << 8;
          ComponentInterfaceInstance::applyConfiguration
                    (*(ComponentInterfaceInstance **)(pSVar4 + 0xc),
                     (ModuleConfiguration *)**(undefined4 **)(pSVar1 + 0x120));
          if (*(int *)(*(int *)(pSVar4 + 8) + 4) == 5) {
            *(int *)(pSVar4 + 0x68) = (int)*(float *)(*(int *)(pSVar4 + 8) + 0x104);
          }
          SystemManager::addModule
                    (*(SystemManager **)(this + 0x40),pSVar4,
                     **(int **)(*(int *)(pSVar3 + 0x34) + uVar9 * 4));
          uVar9 = uVar9 + 1;
          iVar6 = *(int *)(pSVar3 + 0x34);
        } while (uVar9 < (uint)(*(int *)(pSVar3 + 0x38) - iVar6 >> 2));
      }
      setDefaultEMCONSettings(this);
      if ((basic_string<> *)(this + 600) != (basic_string<> *)pSVar3) {
        pSVar5 = pSVar3;
        if (0xf < *(uint *)(pSVar3 + 0x14)) {
          pSVar5 = *(ShipConfiguration **)pSVar3;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)(this + 600),(char *)pSVar5,*(uint *)(pSVar3 + 0x10));
      }
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_2;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)param_2 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::setDefaultEMCONSettings(void)

void __thiscall Ship::setDefaultEMCONSettings(Ship *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(*(int *)(this + 0x40) + 0x3c);
    if ((uVar3 < (uint)(*(int *)(*(int *)(this + 0x40) + 0x40) - iVar1 >> 2)) &&
       (iVar1 = *(int *)(iVar1 + uVar3 * 4), iVar1 != 0)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + 4);
      if (((iVar2 == 2) || (((iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 7)))) ||
         (((iVar2 == 9 || (iVar2 == 0xb)) || (iVar2 == 8)))) {
        *(undefined1 *)(iVar1 + 0x14) = 1;
      }
      else {
        *(undefined1 *)(iVar1 + 0x14) = 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x1e);
  return;
}


// public: bool __thiscall Ship::reactorOnline(void)

bool __thiscall Ship::reactorOnline(Ship *this)

{
  ShipModule *pSVar1;
  
  if (*(SystemManager **)(this + 0x40) != (SystemManager *)0x0) {
    pSVar1 = SystemManager::getModule(*(SystemManager **)(this + 0x40),1,true);
    if (pSVar1 != (ShipModule *)0x0) {
      return true;
    }
  }
  return false;
}


// public: class SensorData * __thiscall Ship::getSensorDataNear(class cocos2d::Vec2,float)

SensorData * __thiscall Ship::getSensorDataNear(Ship *this)

{
  Vec2 *pVVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float in_XMM2_Da;
  float fVar5;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c3312;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  uVar4 = 0;
  iVar3 = *(int *)(this + 0x214);
  if (*(int *)(this + 0x218) - iVar3 >> 2 != 0) {
    do {
      local_8 = 0;
      pVVar1 = (Vec2 *)SensorData::getPresumedLocation(*(SensorData **)(iVar3 + uVar4 * 4));
      local_8 = 1;
      fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0x00000004,pVVar1);
      fVar2 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
      if ((1.5 - fVar5 * 0.5 * fVar2 * fVar2) * fVar2 * fVar5 < in_XMM2_Da) {
        ExceptionList = local_10;
        return *(SensorData **)(*(int *)(this + 0x214) + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(this + 0x214);
    } while (uVar4 < (uint)(*(int *)(this + 0x218) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return (SensorData *)0x0;
}


// public: class SensorData * __thiscall Ship::getSensorDataForShipID(int)

SensorData * __thiscall Ship::getSensorDataForShipID(Ship *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x214);
  while( true ) {
    if (piVar1 == *(int **)(this + 0x218)) {
      return (SensorData *)0x0;
    }
    if (*(int *)((SensorData *)*piVar1 + 0x124) == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return (SensorData *)*piVar1;
}


// public: class SensorData * __thiscall Ship::getSensorDataForSyntheticObjectID(int)

SensorData * __thiscall Ship::getSensorDataForSyntheticObjectID(Ship *this,int param_1)

{
  SensorData *pSVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x218) - *(int *)(this + 0x214) >> 2;
  if (uVar3 != 0) {
    do {
      pSVar1 = *(SensorData **)(*(int *)(this + 0x214) + uVar2 * 4);
      if (*(int *)(pSVar1 + 4) == param_1) {
        return pSVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (SensorData *)0x0;
}


// public: class SensorData * __thiscall Ship::getSensorData(int)

SensorData * __thiscall Ship::getSensorData(Ship *this,int param_1)

{
  SensorData *pSVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != -1) {
    uVar2 = 0;
    uVar3 = *(int *)(this + 0x218) - *(int *)(this + 0x214) >> 2;
    if (uVar3 != 0) {
      do {
        pSVar1 = *(SensorData **)(*(int *)(this + 0x214) + uVar2 * 4);
        if (*(int *)pSVar1 == param_1) {
          return pSVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return (SensorData *)0x0;
}


// public: bool __thiscall Ship::getLinkedProbeDetectionOf(class Ship *)

bool __thiscall Ship::getLinkedProbeDetectionOf(Ship *this,Ship *param_1)

{
  Ship *this_00;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (Ship *)0x0) {
    if (*(int *)(*(int *)(this + 0x40) + 0x20) != 0) {
      iVar2 = 0;
      puVar3 = (undefined4 *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
      do {
        this_00 = (Ship *)*puVar3;
        if ((((this_00 != (Ship *)0x0) && (this_00[0x3c4] != (Ship)0x0)) &&
            (this_00[0x3fc] != (Ship)0x0)) && (*(int *)(*(int *)(this_00 + 0x388) + 0x1b4) == 4)) {
          bVar1 = canCurrentlyDetect(this_00,param_1);
          if (bVar1) {
            return true;
          }
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < 8);
    }
  }
  return false;
}


// public: bool __thiscall Ship::canCurrentlyDetect(class Ship *)

bool __thiscall Ship::canCurrentlyDetect(Ship *this,Ship *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x218) - *(int *)(this + 0x214) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x214) + uVar2 * 4);
      if (*(Ship **)(iVar1 + 0x130) == param_1) {
        return *(float *)(iVar1 + 0x40) <= 0.5;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return false;
}


// public: void __thiscall Ship::removeSensorDataForSyntheticID(int)

void __thiscall Ship::removeSensorDataForSyntheticID(Ship *this,int param_1)

{
  uint uVar1;
  int iVar2;
  SensorData *pSVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(this + 0x44) != 0) {
    uVar4 = 0;
    iVar2 = *(int *)(*(int *)(this + 0x24) + 0x9c);
    uVar1 = *(int *)(*(int *)(this + 0x24) + 0xa0) - iVar2 >> 2;
    if (uVar1 != 0) {
      do {
        iVar5 = *(int *)(iVar2 + uVar4 * 4);
        if (*(int *)(iVar5 + 0x44) == param_1) goto LAB_0050d04f;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    iVar5 = 0;
LAB_0050d04f:
    iVar2 = *(int *)(*(int *)(this + 0x44) + 0xc4);
    if (*(int *)(*(int *)(this + 0x44) + 200) - iVar2 >> 2 != 0) {
      uVar1 = 0;
      do {
        (**(code **)(**(int **)(iVar2 + uVar1 * 4) + 0x18))(-(uint)(iVar5 != 0) & iVar5 + 8U);
        uVar1 = uVar1 + 1;
        iVar2 = *(int *)(*(int *)(this + 0x44) + 0xc4);
      } while (uVar1 < (uint)(*(int *)(*(int *)(this + 0x44) + 200) - iVar2 >> 2));
    }
  }
  uVar1 = 0;
  uVar4 = *(int *)(this + 0x218) - *(int *)(this + 0x214) >> 2;
  if (uVar4 != 0) {
    do {
      pSVar3 = *(SensorData **)(*(int *)(this + 0x214) + uVar1 * 4);
      if (*(int *)(pSVar3 + 4) == param_1) goto LAB_0050d0bf;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar4);
  }
  pSVar3 = (SensorData *)0x0;
LAB_0050d0bf:
  removeSensorData(this,pSVar3);
  return;
}


// public: void __thiscall Ship::removeSensorData(class SensorData *)

void __thiscall Ship::removeSensorData(Ship *this,SensorData *param_1)

{
  int iVar1;
  void *pvVar2;
  FlagManager *pFVar3;
  undefined4 *puVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  uint uVar8;
  basic_string<> abStack_6c [12];
  undefined4 uStack_60;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3350;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != (SensorData *)0x0) {
    iVar1 = *(int *)(this + 0x44);
    if (iVar1 != 0) {
      puVar4 = *(undefined4 **)(iVar1 + 0xc4);
      uVar8 = 0;
      uVar7 = (uint)((int)*(undefined4 **)(iVar1 + 200) + (3 - (int)puVar4)) >> 2;
      if (*(undefined4 **)(iVar1 + 200) < puVar4) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        do {
          (**(code **)(*(int *)*puVar4 + 0x1c))();
          puVar4 = puVar4 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
    }
    if (this[0x234] != (Ship)0x0) {
      if (*(int *)(param_1 + 0x130) != 0) {
        uStack_60 = 0x50d18d;
        strUsingArgs((char *)local_30);
        local_8 = 0;
        uStack_60 = 0x50d1ca;
        std::transform<>();
        std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)local_30);
        local_8._0_1_ = 1;
        pFVar3 = Singleton<>::getInstance();
        local_8 = (uint)local_8._1_3_ << 8;
        FlagManager::setFlag(pFVar3);
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
          pnVar6 = (nothrow_t *)(local_1c + 1);
          pvVar5 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar6) {
            pvVar5 = *(void **)((int)local_30[0] + -4);
            pnVar6 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar5,pnVar6);
        }
      }
      iVar1 = *(int *)(param_1 + 0xe0);
      if ((((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 4)) || (iVar1 == 7)) {
        Sector::getSyntheticObjectWithID(*(Sector **)(this + 0x24),*(int *)(param_1 + 4));
        uStack_60 = 0x50d277;
        strUsingArgs((char *)local_30);
        local_8 = 2;
        uStack_60 = 0x50d2b4;
        std::transform<>();
        std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)local_30);
        local_8._0_1_ = 3;
        pFVar3 = Singleton<>::getInstance();
        local_8 = CONCAT31(local_8._1_3_,2);
        FlagManager::setFlag(pFVar3);
        if (0xf < local_1c) {
          pnVar6 = (nothrow_t *)(local_1c + 1);
          pvVar5 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar6) {
            pvVar5 = *(void **)((int)local_30[0] + -4);
            pnVar6 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar5,pnVar6);
        }
      }
    }
    pvVar5 = *(void **)(this + 0x218);
    puVar4 = (undefined4 *)std::remove<>();
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != pvVar5) {
      iVar1 = *(int *)(this + 0x218);
      uStack_60 = 0x50d34b;
      memmove(pvVar2,pvVar5,iVar1 - (int)pvVar5);
      *(int *)(this + 0x218) = (iVar1 - (int)pvVar5) + (int)pvVar2;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Ship::clearSensorData(void)

void __thiscall Ship::clearSensorData(Ship *this)

{
  SensorData *this_00;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (this[0x234] != (Ship)0x0) {
    clearWaypointFlags(this);
    *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(this + 0x1c4);
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 400) = 0xffffffff;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x198) = 0xffffffff;
  }
  puVar3 = *(undefined4 **)(this + 0x214);
  uVar2 = 0;
  uVar1 = (uint)((int)*(undefined4 **)(this + 0x218) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(this + 0x218) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (SensorData *)*puVar3;
      if (this_00 != (SensorData *)0x0) {
        SensorData::~SensorData(this_00);
        operator_delete(this_00,(nothrow_t *)0x138);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)(this + 0x218) = *(undefined4 *)(this + 0x214);
  return;
}


// public: virtual bool __thiscall Ship::alwaysKnown(class Ship *)

bool __thiscall Ship::alwaysKnown(Ship *this,Ship *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0x254) + 0x158);
  if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) &&
     ((iVar1 != 4 || (*(Ship **)(this + 0x39c) != param_1)))) {
    return false;
  }
  return true;
}


// public: void __thiscall Ship::runPassiveSensorLogic(float)

void __thiscall Ship::runPassiveSensorLogic(Ship *this,float param_1)

{
  FlagManager *pFVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  float in_XMM1_Da;
  double dVar8;
  undefined4 uStack_a8;
  undefined4 ***pppuStack_a4;
  int iStack_a0;
  undefined4 ***pppuStack_9c;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined1 *local_5c;
  float local_58;
  float local_54;
  Ship *local_50;
  float local_4c;
  undefined1 *local_48;
  undefined4 ***local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c33b2;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  iVar2 = *(int *)(this + 0x214);
  local_54 = in_XMM1_Da;
  local_50 = this;
  if (*(int *)(this + 0x218) - iVar2 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + uVar5 * 4);
      fVar6 = local_54 + *(float *)(iVar2 + 0x40);
      *(float *)(iVar2 + 0x40) = fVar6;
      if (((0.25 <= fVar6) && (*(float *)(iVar2 + 0x38) != -1.0)) &&
         (*(float *)(iVar2 + 0x34) != 0.0)) {
        local_60 = (float)*(double *)(iVar2 + 0x18);
        local_64 = (float)*(double *)(iVar2 + 0x10);
        local_4c = *(float *)(iVar2 + 0x34) * local_54;
        local_8 = 0;
        dVar8 = (double)*(float *)(iVar2 + 0x38) * 0.017453292519943295;
        dVar7 = dVar8;
        __libm_sse2_sin_precise();
        local_48 = (undefined1 *)(float)(dVar7 * (double)local_4c);
        __libm_sse2_cos_precise();
        local_5c = local_48;
        local_58 = (float)(dVar8 * (double)local_4c);
        local_8 = CONCAT31(local_8._1_3_,1);
        cocos2d::Vec2::operator+((Vec2 *)&local_64,(Vec2 *)&local_6c);
        local_8 = 0xffffffff;
        *(double *)(*(int *)(*(int *)(this + 0x214) + uVar5 * 4) + 0x10) = (double)local_6c;
        *(double *)(*(int *)(*(int *)(this + 0x214) + uVar5 * 4) + 0x18) = (double)local_68;
      }
      if ((this[0x234] != (Ship)0x0) &&
         (iVar2 = *(int *)(*(int *)(this + 0x214) + uVar5 * 4), *(int *)(iVar2 + 0x130) != 0)) {
        if (*(float *)(iVar2 + 0x40) <
            (float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] * 0.25) {
          if (*(char *)(iVar2 + 0x44) == '\0') {
            pppuStack_9c = (undefined4 ***)0x50d742;
            strUsingArgs((char *)local_44);
            local_8 = 4;
            pppuStack_9c = local_44;
            if (0xf < local_30) {
              pppuStack_9c = local_44[0];
            }
            iStack_a0 = local_34 + (int)pppuStack_9c;
            pppuStack_a4 = local_44;
            if (0xf < local_30) {
              pppuStack_a4 = local_44[0];
            }
            uStack_a8 = 0x50d77c;
            std::transform<>();
            local_48 = (undefined1 *)&uStack_a8;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&uStack_a8,(basic_string<> *)local_44);
            local_8._0_1_ = 5;
            pFVar1 = Singleton<>::getInstance();
            local_8 = CONCAT31(local_8._1_3_,4);
            FlagManager::setFlag(pFVar1);
            local_8 = 0xffffffff;
            if (0xf < local_30) {
              pnVar4 = (nothrow_t *)(local_30 + 1);
              ppppuVar3 = (undefined4 ****)local_44[0];
              if ((nothrow_t *)0xfff < pnVar4) {
                ppppuVar3 = (undefined4 ****)local_44[0][-1];
                pnVar4 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar3))) goto LAB_0050d831;
              }
              operator_delete(ppppuVar3,pnVar4);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
            this = local_50;
          }
        }
        else if (*(char *)(iVar2 + 0x44) != '\0') {
          pppuStack_9c = (undefined4 ***)0x50d662;
          strUsingArgs((char *)local_2c);
          local_8 = 2;
          pppuStack_9c = local_2c;
          if (0xf < local_18) {
            pppuStack_9c = local_2c[0];
          }
          iStack_a0 = local_1c + (int)pppuStack_9c;
          pppuStack_a4 = local_2c;
          if (0xf < local_18) {
            pppuStack_a4 = local_2c[0];
          }
          uStack_a8 = 0x50d69c;
          std::transform<>();
          local_48 = (undefined1 *)&uStack_a8;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&uStack_a8,(basic_string<> *)local_2c);
          local_8._0_1_ = 3;
          pFVar1 = Singleton<>::getInstance();
          local_8 = CONCAT31(local_8._1_3_,2);
          FlagManager::setFlag(pFVar1);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar4 = (nothrow_t *)(local_18 + 1);
            ppppuVar3 = (undefined4 ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar4) {
              ppppuVar3 = (undefined4 ****)local_2c[0][-1];
              pnVar4 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {
LAB_0050d831:
                local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(ppppuVar3,pnVar4);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
          this = local_50;
        }
      }
      iVar2 = *(int *)(*(int *)(this + 0x214) + uVar5 * 4);
      if (0.25 <= *(float *)(iVar2 + 0x40)) {
        *(undefined1 *)(iVar2 + 0x44) = 0;
      }
      uVar5 = uVar5 + 1;
      iVar2 = *(int *)(this + 0x214);
    } while (uVar5 < (uint)(*(int *)(this + 0x218) - iVar2 >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class WaveformData __thiscall Ship::getWaveform(float)

float __thiscall Ship::getWaveform(Ship *this,float param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float in_XMM2_Da;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c33f9;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  local_8 = 0;
  uVar5 = 0;
  iVar4 = *(int *)(this + 0x40);
  if (*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2 != 0) {
    do {
      cVar2 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x3c) + uVar5 * 4) + 0x10))(0);
      if (cVar2 != '\0') {
        iVar4 = *(int *)(*(int *)(*(int *)(this + 0x40) + 0x3c) + uVar5 * 4);
        iVar1 = *(int *)(iVar4 + 8);
        if (*(char *)(iVar4 + 0x62) == '\0') {
          iVar4 = *(int *)(iVar1 + 0xd4);
        }
        else {
          iVar4 = *(int *)(iVar1 + 0xcc);
        }
        if (0.0 < (float)iVar4 * in_XMM2_Da) {
          WaveformData::addPeak
                    ((WaveformData *)param_1,(float)(int)((float)iVar4 * in_XMM2_Da),uVar3);
        }
      }
      iVar4 = *(int *)(this + 0x40);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(iVar4 + 0x40) - *(int *)(iVar4 + 0x3c) >> 2));
  }
  if (*(char *)(iVar4 + 0x34) != '\0') {
    WaveformData::addPeak((WaveformData *)param_1,1.26117e-43,uVar3);
  }
  ExceptionList = local_10;
  return param_1;
}


// public: bool __thiscall Ship::isDisabled(bool)

bool __thiscall Ship::isDisabled(Ship *this,bool param_1)

{
  char cVar1;
  ShipModule *pSVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x20))();
  if ((((((cVar1 == '\0') && (*(int **)(*(int *)(this + 0x40) + 0x18) != (int *)0x0)) &&
        (cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x10))(0), cVar1 != '\0'))
       && (((*(SystemManager **)(this + 0x40) != (SystemManager *)0x0 &&
            (pSVar2 = SystemManager::getModule(*(SystemManager **)(this + 0x40),1,false),
            pSVar2 != (ShipModule *)0x0)) &&
           ((cVar1 = (**(code **)(*(int *)pSVar2 + 0x14))(), cVar1 == '\0' &&
            ((*(int **)(*(int *)(this + 0x40) + 0x10) != (int *)0x0 &&
             (cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x10) + 0x10))(0),
             cVar1 != '\0')))))))) && (*(int **)(*(int *)(this + 0x40) + 0x24) != (int *)0x0)) &&
     (((cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x24) + 0x10))(0), cVar1 != '\0' &&
       (*(int **)(*(int *)(this + 0x40) + 0x28) != (int *)0x0)) &&
      (cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x28) + 0x10))(0), cVar1 != '\0'))))
  {
    if (!param_1) {
      return false;
    }
    if ((*(int **)(*(int *)(this + 0x40) + 0x20) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x20) + 0x10))(0), cVar1 != '\0')) {
      return false;
    }
  }
  return true;
}


// public: class Ship * __thiscall Ship::performSensorScan(float)

Ship * __thiscall Ship::performSensorScan(Ship *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  UIText *pUVar3;
  char cVar4;
  Dice *pDVar5;
  int iVar6;
  uint uVar7;
  FlagManager *pFVar8;
  vector<> *pvVar9;
  ShipModule *pSVar10;
  int iVar11;
  basic_string<> *pbVar12;
  SyntheticObject *pSVar13;
  JumpPoint **ppJVar14;
  SensorData *pSVar15;
  Ship *pSVar16;
  LogSystem *this_00;
  Ship *pSVar17;
  undefined1 *puVar18;
  Vec2 *unaff_EDI;
  int iVar19;
  bool bVar20;
  SensorData SVar21;
  undefined4 uVar22;
  float fVar24;
  double dVar25;
  undefined1 auVar26 [12];
  float fVar23;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  float in_XMM1_Da;
  vector<> local_f8 [12];
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined1 *local_b4;
  undefined1 *local_a8;
  float local_a4;
  undefined1 *local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  Ship *local_80;
  uint local_7c;
  undefined1 local_75;
  SensorData *local_74;
  SensorData *local_70;
  Ship *local_6c;
  float local_68;
  float local_64;
  Ship *local_60;
  undefined1 local_59;
  undefined1 *local_58;
  Ship *local_54;
  Ship *local_50;
  Ship *local_4c;
  char local_45;
  undefined1 *local_44;
  Ship *local_40;
  float local_3c;
  undefined1 *local_38;
  char local_31;
  UIText *local_30;
  basic_string<> local_2c [24];
  Dice *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c363c;
  local_10 = ExceptionList;
  pDVar5 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_44 = (undefined1 *)0x0;
  bVar20 = *(int *)(this + 0xd4) != 3;
  local_38 = (undefined1 *)0x0;
  local_64 = in_XMM1_Da;
  local_60 = this;
  local_14 = pDVar5;
  if ((this[0x2d0] == (Ship)0x0) &&
     (((int *)**(int **)(this + 0x40) == (int *)0x0 ||
      (cVar4 = (**(code **)(*(int *)**(int **)(this + 0x40) + 0x10))(), cVar4 == '\0')))) {
    bVar20 = false;
  }
  pSVar17 = (Ship *)0x0;
  local_30 = (UIText *)0x0;
  auVar28 = ZEXT816(0);
  local_7c = local_7c & 0xffffff00;
  local_68 = 0.0;
  local_54 = (Ship *)0x0;
  if ((((int *)**(int **)(this + 0x40) != (int *)0x0) &&
      (cVar4 = (**(code **)(*(int *)**(int **)(this + 0x40) + 0x10))(), cVar4 != '\0')) && (bVar20))
  {
    iVar6 = *(int *)(this + 0x24);
    local_50 = (Ship *)0x0;
    if (*(int *)(iVar6 + 0xd0) - *(int *)(iVar6 + 0xcc) >> 2 != 0) {
      do {
        local_31 = '\0';
        local_45 = '\0';
        pSVar16 = *(Ship **)(*(int *)(iVar6 + 0xcc) + (int)local_50 * 4);
        local_6c = pSVar17;
        local_4c = pSVar16;
        local_40 = pSVar17;
        if (pSVar16 != this) {
          local_44 = (undefined1 *)0x5;
          relativeAngleToObject
                    (this,(GameObject *)(-(uint)(pSVar16 != (Ship *)0x0) & (uint)(pSVar16 + 8)));
          dVar25 = auVar28._0_8_;
          if (((g_gameLogic[0x140] == (GameLogic)0x0) || (this[0x234] != (Ship)0x0)) ||
             (pSVar17 = local_54,
             *(char *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xcc) + (int)local_50 * 4) + 0x234)
             == '\0')) {
            iVar6 = *(int *)(*(int *)(pSVar16 + 0x254) + 0x158);
            if ((((iVar6 == 2) || (iVar6 == 1)) || (iVar6 == 3)) &&
               (*(char *)(*(int *)(pSVar16 + 0x40) + 0x34) != '\0')) {
              auVar28._0_12_ = ZEXT812(0x41200000);
              auVar28._12_4_ = 0;
              local_3c = 10.0;
              local_45 = '\x01';
              local_31 = '\x01';
              puVar18 = local_44;
            }
            else if (((iVar6 == 4) && (*(Ship **)(pSVar16 + 0x39c) == this)) &&
                    (pSVar16[0x3fc] != (Ship)0x0)) {
              auVar28._0_12_ = ZEXT812(0x41200000);
              auVar28._12_4_ = 0;
              local_3c = 10.0;
              local_31 = '\x01';
              puVar18 = &DAT_00000064;
            }
            else {
              local_a4 = (float)*(double *)(pSVar16 + 0x28);
              local_a0 = (undefined1 *)(float)*(double *)(pSVar16 + 0x30);
              local_38 = (undefined1 *)((uint)local_38 | 0xc0);
              local_bc = (float)*(double *)(this + 0x28);
              local_b8 = (float)*(double *)(this + 0x30);
              local_8 = 1;
              local_68 = cocos2d::Vec2::getDistance((Vec2 *)&local_bc,(Vec2 *)&local_a4);
              local_8 = 0xffffffff;
              iVar6 = ComponentInterfaceInstance::getEfficiencyPercent
                                (*(ComponentInterfaceInstance **)(**(int **)(this + 0x40) + 0xc));
              local_68 = ((float)iVar6 / 100.0) * local_68;
              local_3c = *(float *)(pSVar16 + 0xe0);
              iVar6 = ComponentInterfaceInstance::getEfficiencyPercent
                                (*(ComponentInterfaceInstance **)(**(int **)(this + 0x40) + 0xc));
              local_3c = *(float *)(*(int *)(**(int **)(this + 0x40) + 8) + 0xe4) *
                         ((float)iVar6 / 100.0) * local_3c;
              if ((*(int *)(g_gameData + 0xcc) == 0) ||
                 (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
                if (this[0x234] == (Ship)0x0) {
                  if ((float)(&combatDiffSensorMultipler)[*(int *)(g_gameLogic + 0xa8)] != 1.0) {
                    local_3c = local_3c *
                               (2.0 - (float)(&combatDiffSensorMultipler)
                                             [*(int *)(g_gameLogic + 0xa8)]);
                  }
                }
                else {
                  local_3c = local_3c *
                             (float)(&combatDiffSensorMultipler)[*(int *)(g_gameLogic + 0xa8)];
                }
              }
              if (0.0 < local_3c) {
                if ((*(int *)(pSVar16 + 0x184) != 0) && (0.0 < *(double *)(pSVar16 + 0x140))) {
                  local_3c = local_3c -
                             (float)(((double)*(int *)(*(int *)(pSVar16 + 0x184) + 0x40) *
                                     *(double *)(pSVar16 + 0x140)) / 100.0) * local_3c;
                }
                if ((*(int *)(this + 0x184) != 0) && (0.0 < *(double *)(this + 0x140))) {
                  local_3c = local_3c -
                             (float)(((double)*(int *)(*(int *)(this + 0x184) + 0x44) *
                                     *(double *)(this + 0x140)) / 100.0) * local_3c;
                }
                if ((*(int *)(pSVar16 + 0xd4) == 2) &&
                   (iVar6 = *(int *)(pSVar16 + 0xec), iVar6 != 2)) {
                  if (iVar6 == 1) {
                    local_3c = local_3c * 0.08;
                  }
                  else if (iVar6 == 0) {
                    local_3c = local_3c * 0.6;
                  }
                }
              }
              auVar26 = ZEXT812(0);
              if (0.0 <= local_3c - local_68) {
                auVar26._4_8_ = 0;
                auVar26._0_4_ = local_3c - local_68;
              }
              auVar28._12_4_ = 0;
              auVar28._0_12_ = auVar26;
              local_3c = auVar26._0_4_;
              puVar18 = local_44;
              if ((int)dVar25 - 0x82U < 0x65) {
                local_3c = 0.0;
              }
            }
            if ((this[0x2d0] != (Ship)0x0) && (this[0x234] != (Ship)0x0)) {
              auVar28._0_12_ = ZEXT812(0x42480000);
              auVar28._12_4_ = 0;
              local_3c = 50.0;
              local_31 = '\x01';
            }
            local_30 = (UIText *)getSensorDataForShipID(this,*(int *)(pSVar16 + 0x250));
            if (pSVar16[0x168] != (Ship)0x0) {
              if (local_30 != (UIText *)0x0) {
                debugPrint("DETAIL","%s: Sensor shadow removed.");
                pSVar15 = getSensorDataForShipID(this,*(int *)(pSVar16 + 0x250));
                removeSensorData(this,pSVar15);
                iVar6 = *(int *)(this + 0x24);
                break;
              }
              local_3c = 0.0;
            }
            if (*(int *)(pSVar16 + 0xd4) == 3) {
              local_3c = 0.0;
            }
            bVar20 = getLinkedProbeDetectionOf(this,pSVar16);
            if (bVar20) {
              auVar28._0_12_ = ZEXT812(0x42480000);
              auVar28._12_4_ = 0;
              local_3c = 50.0;
LAB_0050de85:
              if (local_30 == (UIText *)0x0) {
                iVar6 = diceRoll(pDVar5);
                local_44 = (undefined1 *)(float)iVar6;
                if (*(int *)(*(int *)(pSVar16 + 0x254) + 0x158) == 4) {
                  local_44 = (undefined1 *)((float)local_44 * 0.5);
                }
                if (*(char *)(*(int *)(pSVar16 + 0x40) + 0x34) != '\0') {
                  local_44 = &DAT_3f800000;
                }
                local_70 = operator_new(0x138);
                local_8 = 2;
                iVar6 = *(int *)(this + 0x220);
                *(int *)(this + 0x220) = iVar6 + 1;
                local_30 = (UIText *)
                           SensorData::SensorData
                                     (local_70,*(int *)(pSVar16 + 0x250),iVar6,(float)pDVar5);
                local_8 = 0xffffffff;
                *(undefined4 *)(local_30 + 300) = *(undefined4 *)(this + 0x20);
                *(Ship **)(local_30 + 0x130) = pSVar16;
                *(undefined4 *)(local_30 + 0xd8) =
                     *(undefined4 *)(*(int *)(pSVar16 + 0x254) + 0x158);
                *(SensorData *)(local_30 + 8) = (SensorData)0x1;
                *(SensorData *)(local_30 + 9) = (SensorData)0x1;
                *(undefined4 *)(local_30 + 0x11c) = 0;
                *(float *)(local_30 + 0x128) = (float)(int)puVar18;
                bVar20 = false;
                iVar6 = *(int *)(pSVar16 + 0x254);
                if (iVar6 != 0) {
                  bVar20 = *(int *)(iVar6 + 0x158) == 1;
                }
                if (bVar20) {
                  iVar6 = 0;
                  iVar19 = 2;
                  do {
                    uVar7 = rand();
                    uVar7 = uVar7 & 0x80000001;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                    }
                    iVar6 = iVar6 + 1 + uVar7;
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                  iVar6 = iVar6 + 8;
                }
                else {
                  bVar20 = false;
                  if (iVar6 != 0) {
                    bVar20 = *(int *)(iVar6 + 0x158) == 4;
                  }
                  iVar6 = 0;
                  if (bVar20) {
                    iVar19 = 3;
                    do {
                      iVar11 = rand();
                      iVar6 = iVar6 + iVar11 % 7 + 1;
                      iVar19 = iVar19 + -1;
                    } while (iVar19 != 0);
                  }
                  else {
                    iVar19 = 4;
                    do {
                      iVar11 = rand();
                      iVar6 = iVar6 + iVar11 % 3 + 1;
                      iVar19 = iVar19 + -1;
                    } while (iVar19 != 0);
                  }
                  iVar6 = iVar6 + 10;
                  pSVar16 = local_4c;
                }
                this = local_60;
                *(double *)(local_30 + 0x28) = (double)iVar6;
                iVar6 = rand();
                dVar25 = (double)(iVar6 % 0x168);
                *(double *)(local_30 + 0x20) = dVar25;
                if ((this[0x234] != (Ship)0x0) && (*(int *)(local_30 + 0x130) != 0)) {
                  strUsingArgs((char *)local_2c);
                  local_8 = 3;
                  std::basic_string<>::end(local_2c);
                  std::transform<>();
                  local_4c = (Ship *)&stack0xfffffedc;
                  local_58 = &stack0xfffffedc;
                  std::_Compressed_pair<>::_Compressed_pair<><>
                            ((_Compressed_pair<> *)&stack0xfffffedc,&stack0xfffffedc,&local_75);
                  local_8._0_1_ = 4;
                  std::basic_string<>::_Construct_lv_contents
                            ((basic_string<> *)&stack0xfffffedc,(basic_string<> *)local_2c);
                  local_8._0_1_ = 5;
                  pFVar8 = Singleton<>::getInstance();
                  local_8 = CONCAT31(local_8._1_3_,3);
                  FlagManager::setFlag(pFVar8);
                  local_8 = 6;
                  word::~word((word *)local_2c);
                  local_8 = 0xffffffff;
                  this = local_60;
                }
                if (local_45 == '\0') {
                  *(SensorData *)(local_30 + 0x121) = (SensorData)0x1;
                }
                else {
                  *(SensorData *)(local_30 + 0x120) = (SensorData)0x1;
                }
                std::vector<>::push_back((vector<> *)(this + 0x214),&local_30);
                local_54 = pSVar16;
                if (local_6c != (Ship *)0x0) {
                  local_54 = local_40;
                }
                trueAngleToObject(this,(GameObject *)(pSVar16 + 8));
                *(int *)(local_30 + 0x30) = (int)dVar25;
                if ((*(int *)(local_30 + 0x130) != 0) &&
                   (*(int *)(*(int *)(*(int *)(local_30 + 0x130) + 0x254) + 0x158) == 0)) {
                  debugPrint("GAME","%s: detected vessel %s (%s) at range %f");
                }
              }
              else {
                if (*(int *)(this + 0x20) != *(int *)(local_30 + 300)) {
                  std::basic_string<>::assign((basic_string<> *)(local_30 + 0x48),"Unknown",7);
                  std::basic_string<>::assign((basic_string<> *)(local_30 + 0xc0),"Unknown",7);
                  std::basic_string<>::assign((basic_string<> *)(local_30 + 0xa8),"Unknown",7);
                  std::basic_string<>::assign((basic_string<> *)(local_30 + 0x78),"Unknown",7);
                  *(undefined4 *)(local_30 + 0x34) = 0;
                }
                relativeAngleToObject(this,(GameObject *)(pSVar16 + 8));
                *(int *)(local_30 + 0x30) = (int)auVar28._0_8_;
                *(undefined4 *)(local_30 + 0x40) = 0;
                if (((this[0x234] != (Ship)0x0) && (*(int *)(local_30 + 0x130) != 0)) &&
                   (*(SensorData *)(local_30 + 0x44) == (SensorData)0x0)) {
                  strUsingArgs((char *)local_2c);
                  local_8 = 7;
                  std::basic_string<>::end(local_2c);
                  std::transform<>();
                  local_40 = (Ship *)&stack0xfffffedc;
                  local_74 = (SensorData *)&stack0xfffffedc;
                  std::_Compressed_pair<>::_Compressed_pair<><>
                            ((_Compressed_pair<> *)&stack0xfffffedc,&stack0xfffffedc,&local_59);
                  local_8._0_1_ = 8;
                  std::basic_string<>::_Construct_lv_contents
                            ((basic_string<> *)&stack0xfffffedc,(basic_string<> *)local_2c);
                  local_8._0_1_ = 9;
                  pFVar8 = Singleton<>::getInstance();
                  local_8 = CONCAT31(local_8._1_3_,7);
                  FlagManager::setFlag(pFVar8);
                  local_8 = 10;
                  word::~word((word *)local_2c);
                  local_8 = 0xffffffff;
                  this = local_60;
                }
              }
              *(SensorData *)(local_30 + 0x44) = (SensorData)0x1;
              *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(pSVar16 + 0x28);
              uVar22 = *(undefined4 *)(pSVar16 + 0x30);
              uVar2 = *(undefined4 *)(pSVar16 + 0x34);
              *(undefined4 *)(local_30 + 0x18) = uVar22;
              *(undefined4 *)(local_30 + 0x1c) = uVar2;
              getMotionAngle(pSVar16);
              *(undefined4 *)(local_30 + 0x38) = uVar22;
              pSVar17 = (Ship *)0x41f00000;
              if ((30.0 < local_68) && (local_68 < 120.0)) {
                pSVar17 = (Ship *)((1.0 - (local_68 - 30.0) / 90.0) * 0.8 + 0.2);
              }
              pvVar9 = (vector<> *)getWaveform(pSVar16,(float)local_f8);
              std::vector<>::operator=((vector<> *)(local_30 + 0xec),pvVar9);
              local_8 = 0xb;
              std::vector<>::~vector<>(local_f8);
              local_8 = 0xffffffff;
              if ((uint)(*(int *)(local_30 + 0xfc) - *(int *)(local_30 + 0xf8)) < 8) {
LAB_0050e433:
                std::vector<>::operator=
                          ((vector<> *)(local_30 + 0xf8),(vector<> *)(local_30 + 0xec));
              }
              else {
                WaveformData::getStrength((WaveformData *)(local_30 + 0xec));
                local_40 = pSVar17;
                WaveformData::getStrength((WaveformData *)(local_30 + 0xf8));
                if ((float)pSVar17 < (float)local_40) goto LAB_0050e433;
              }
              if (*(int *)(local_30 + 0x130) != 0) {
                local_c4 = 0;
                local_c0 = 0;
                local_8 = 0xc;
                local_40 = (Ship *)cocos2d::Vec2::getDistance
                                             ((Vec2 *)(*(int *)(local_30 + 0x130) + 0x118),
                                              (Vec2 *)&local_c4);
                local_8 = 0xffffffff;
                auVar28 = ZEXT416(local_40);
                if (0.1 < (float)local_40) {
                  trueAngleToObject(*(Ship **)(local_30 + 0x130),(GameObject *)(this + 8));
                  dVar25 = auVar28._0_8_;
                  getMotionAngle(*(Ship **)(local_30 + 0x130));
                  iVar19 = (int)((float)(int)dVar25 - auVar28._0_4_);
                  iVar6 = iVar19 + 0x168;
                  if (-1 < iVar19) {
                    iVar6 = iVar19;
                  }
                  if ((iVar6 < 0x165) && (4 < iVar6)) {
LAB_0050e573:
                    bVar20 = false;
                  }
                  else {
                    local_cc = (float)*(double *)(*(int *)(local_30 + 0x130) + 0x28);
                    local_c8 = (float)*(double *)(*(int *)(local_30 + 0x130) + 0x30);
                    local_d4 = (float)*(double *)(this + 0x28);
                    fVar23 = (float)*(double *)(this + 0x30);
                    local_8 = 0xe;
                    local_44 = (undefined1 *)((uint)local_38 | 0x603);
                    local_d0 = fVar23;
                    local_38 = local_44;
                    fastDistance((Vec2 *)pDVar5,unaff_EDI);
                    if (75.0 < fVar23) goto LAB_0050e573;
                    bVar20 = true;
                  }
                  if (((uint)local_38 & 2) != 0) {
                    local_38 = (undefined1 *)((uint)local_38 & 0xfffffffd);
                  }
                  local_8 = 0xffffffff;
                  if (((uint)local_38 & 1) != 0) {
                    local_38 = (undefined1 *)((uint)local_38 & 0xfffffffe);
                  }
                  local_7c = local_7c & 0xff;
                  if (bVar20) {
                    local_7c = 1;
                  }
                }
              }
              fVar23 = *(float *)(local_30 + 0x128);
              if (fVar23 < 100.0) {
                fVar24 = 1.0;
                if (1.0 <= local_3c) {
                  fVar24 = local_3c;
                }
                fVar1 = 12.0;
                if (fVar24 <= 12.0) {
                  fVar1 = fVar24;
                }
                *(float *)(local_30 + 0x128) = fVar1 * local_64 + fVar23;
                fVar23 = *(float *)(local_30 + 0x128);
              }
              if (100.0 < fVar23) {
                *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
              }
              *(SensorData *)(local_30 + 0x10c) = *(SensorData *)(*(int *)(pSVar16 + 0x40) + 0x34);
              if (*(SystemManager **)(pSVar16 + 0x40) == (SystemManager *)0x0) {
                SVar21 = (SensorData)0x0;
              }
              else {
                pSVar10 = SystemManager::getModule(*(SystemManager **)(pSVar16 + 0x40),1,true);
                SVar21 = (SensorData)(pSVar10 != (ShipModule *)0x0);
              }
              *(SensorData *)(local_30 + 0x10f) = SVar21;
              if (((*(int **)(*(int *)(pSVar16 + 0x40) + 0x10) == (int *)0x0) ||
                  (cVar4 = (**(code **)(**(int **)(*(int *)(pSVar16 + 0x40) + 0x10) + 0x10))(),
                  cVar4 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(pSVar16 + 0x40) + 0x10) + 0x62) == '\0')) {
                SVar21 = (SensorData)0x0;
              }
              else {
                SVar21 = (SensorData)0x1;
              }
              *(SensorData *)(local_30 + 0x10e) = SVar21;
              if (((*(int **)(*(int *)(pSVar16 + 0x40) + 0x18) == (int *)0x0) ||
                  (cVar4 = (**(code **)(**(int **)(*(int *)(pSVar16 + 0x40) + 0x18) + 0x10))(),
                  cVar4 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(pSVar16 + 0x40) + 0x18) + 0x62) == '\0')) {
                SVar21 = (SensorData)0x0;
              }
              else {
                SVar21 = (SensorData)0x1;
              }
              *(SensorData *)(local_30 + 0x10d) = SVar21;
              if (((*(int **)(*(int *)(pSVar16 + 0x40) + 0x14) == (int *)0x0) ||
                  (cVar4 = (**(code **)(**(int **)(*(int *)(pSVar16 + 0x40) + 0x14) + 0x10))(),
                  cVar4 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(pSVar16 + 0x40) + 0x14) + 0x62) == '\0')) {
                SVar21 = (SensorData)0x0;
              }
              else {
                SVar21 = (SensorData)0x1;
              }
              *(SensorData *)(local_30 + 0x110) = SVar21;
              *(SensorData *)(local_30 + 0x111) = (SensorData)0x0;
              if (((*(int **)(*(int *)(pSVar16 + 0x40) + 0x20) == (int *)0x0) ||
                  (cVar4 = (**(code **)(**(int **)(*(int *)(pSVar16 + 0x40) + 0x20) + 0x10))(),
                  cVar4 == '\0')) ||
                 (*(char *)(*(int *)(*(int *)(pSVar16 + 0x40) + 0x20) + 0x62) == '\0')) {
                SVar21 = (SensorData)0x0;
              }
              else {
                SVar21 = (SensorData)0x1;
              }
              *(SensorData *)(local_30 + 0x112) = SVar21;
              if (*(char *)(*(int *)(pSVar16 + 0x40) + 0x34) == '\0') {
                if ((20.0 < *(float *)(local_30 + 0x128)) &&
                   (iVar6 = rand(), 80.0 < ((float)iVar6 / 32767.0) * 100.0)) {
                  std::basic_string<>::operator=
                            ((basic_string<> *)(local_30 + 0x60),
                             *(basic_string<> **)(pSVar16 + 0x254));
                }
                if (10.0 < *(float *)(local_30 + 0x128)) {
                  local_e4 = 0;
                  local_e0 = 0;
                  local_8 = 0x10;
                  local_40 = (Ship *)cocos2d::Vec2::getDistance
                                               ((Vec2 *)(pSVar16 + 0x118),(Vec2 *)&local_e4);
                  *(Ship **)(local_30 + 0x34) = local_40;
                }
                puVar18 = local_38;
                if (*(float *)(local_30 + 0x128) <= 90.0) {
LAB_0050e902:
                  if ((*(int *)(local_30 + 0xe0) == 0) &&
                     (*(int *)(*(int *)(*(int *)(local_30 + 0x130) + 0x254) + 0x158) == 4)) {
                    local_9c = (float)*(double *)(this + 0x28);
                    local_98 = (float)*(double *)(this + 0x30);
                    local_80 = (Ship *)(float)*(double *)(local_30 + 0x18);
                    fVar23 = (float)*(double *)(local_30 + 0x10);
                    local_8 = 0x14;
                    local_44 = (undefined1 *)((uint)puVar18 | 0x1030);
                    local_84 = fVar23;
                    local_38 = local_44;
                    fastDistance((Vec2 *)pDVar5,unaff_EDI);
                    if (fVar23 <= 50.0) goto LAB_0050e994;
                  }
                  bVar20 = false;
                }
                else {
                  local_ec = (float)*(double *)(this + 0x28);
                  local_e8 = (float)*(double *)(this + 0x30);
                  local_90 = (float)*(double *)(local_30 + 0x18);
                  fVar23 = (float)*(double *)(local_30 + 0x10);
                  local_8 = 0x12;
                  puVar18 = (undefined1 *)((uint)local_38 | 0x80c);
                  local_94 = fVar23;
                  local_44 = puVar18;
                  local_38 = puVar18;
                  fastDistance((Vec2 *)pDVar5,unaff_EDI);
                  if (50.0 < fVar23) goto LAB_0050e902;
LAB_0050e994:
                  bVar20 = true;
                }
                if (((uint)local_38 & 0x20) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xffffffdf);
                }
                if (((uint)local_38 & 0x10) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xffffffef);
                }
                if (((uint)local_38 & 8) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xfffffff7);
                }
                local_8 = 0xffffffff;
                if (((uint)local_38 & 4) != 0) {
                  local_38 = (undefined1 *)((uint)local_38 & 0xfffffffb);
                }
                if (bVar20) {
                  std::basic_string<>::operator=
                            ((basic_string<> *)(local_30 + 0x90),(basic_string<> *)(pSVar16 + 0x238)
                            );
                }
              }
              else {
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x60),*(basic_string<> **)(pSVar16 + 0x254)
                          );
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x48),(basic_string<> *)(pSVar16 + 8));
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x90),(basic_string<> *)(pSVar16 + 0x238));
                std::basic_string<>::_Equal((basic_string<> *)(pSVar16 + 8),"");
                local_dc = 0;
                local_d8 = 0;
                *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
                *(undefined1 **)(local_30 + 0x38) = &DAT_bf800000;
                *(undefined1 **)(local_30 + 0x3c) = &DAT_bf800000;
                local_8 = 0xf;
                local_40 = (Ship *)cocos2d::Vec2::getDistance
                                             ((Vec2 *)(pSVar16 + 0x118),(Vec2 *)&local_dc);
                local_8 = 0xffffffff;
                *(Ship **)(local_30 + 0x34) = local_40;
              }
              if (g_gameLogic[0x142] != (GameLogic)0x0) {
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x60),*(basic_string<> **)(pSVar16 + 0x254)
                          );
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x48),(basic_string<> *)(pSVar16 + 8));
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x90),(basic_string<> *)(pSVar16 + 0x238));
              }
              if (5.0 < *(float *)(local_30 + 0x128)) {
                local_8c = 0.0;
                local_88 = 0.0;
                local_8 = 0x15;
                pSVar17 = (Ship *)cocos2d::Vec2::getDistance
                                            ((Vec2 *)(pSVar16 + 0x118),(Vec2 *)&local_8c);
                local_8 = 0xffffffff;
                local_40 = pSVar17;
                if (0.0 < (float)pSVar17) {
                  getMotionAngle(pSVar16);
                  *(Ship **)(local_30 + 0x38) = pSVar17;
                }
              }
              auVar28 = ZEXT416((uint)*(float *)(local_30 + 0x128));
              if (25.0 < *(float *)(local_30 + 0x128)) {
                *(undefined4 *)(local_30 + 0x3c) = *(undefined4 *)(pSVar16 + 0x120);
              }
              if (*(int *)(local_30 + 0xe0) == 0) {
                iVar6 = *(int *)(local_30 + 0x130);
                if ((*(int *)(iVar6 + 100) == *(int *)(this + 100)) ||
                   (((*(int *)(iVar6 + 0x44) != 0 &&
                     (iVar19 = *(int *)(*(int *)(iVar6 + 0x44) + 0x124), iVar19 != 0)) &&
                    (*(int *)(iVar19 + 0x248) != 0)))) {
                  *(undefined4 *)(local_30 + 0xdc) = 0;
                }
                else if (*(int *)(*(int *)(iVar6 + 0x254) + 0x158) == 4) {
                  if ((iVar6 == 0) ||
                     (bVar20 = std::basic_string<>::_Equal
                                         ((basic_string<> *)(iVar6 + 0x3a0),
                                          (basic_string<> *)(this + 0x238)), !bVar20)) {
                    *(undefined4 *)(local_30 + 0xdc) = 2;
                  }
                  else {
                    *(undefined4 *)(local_30 + 0xdc) = 0;
                  }
                }
                else {
                  auVar28 = ZEXT416((uint)*(float *)(local_30 + 0x118));
                  if (*(float *)(local_30 + 0x118) != 0.0) goto LAB_0050eb96;
                  if (*(char *)(*(int *)(iVar6 + 0x40) + 0x34) == '\0') {
                    *(undefined4 *)(local_30 + 0xdc) = 2;
                  }
                  else {
                    *(uint *)(local_30 + 0xdc) = (*(int *)(iVar6 + 100) != 0) + 1;
                  }
                }
              }
              else {
LAB_0050eb96:
                *(undefined4 *)(local_30 + 0xdc) = 3;
              }
              if ((*(int *)(pSVar16 + 100) == *(int *)(this + 100)) ||
                 (cVar4 = local_31, *(int *)(*(int *)(pSVar16 + 0x254) + 0x158) == 4)) {
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x60),*(basic_string<> **)(pSVar16 + 0x254)
                          );
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x48),(basic_string<> *)(pSVar16 + 8));
                std::basic_string<>::operator=
                          ((basic_string<> *)(local_30 + 0x90),(basic_string<> *)(pSVar16 + 0x238));
                *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
                auVar28 = ZEXT416((uint)*(float *)(local_30 + 0x118));
                cVar4 = '\x01';
                if (1.0 <= *(float *)(local_30 + 0x118)) {
                  *(undefined4 *)(local_30 + 0x118) = 0x3a83126f;
                }
              }
LAB_0050ec75:
              if ((local_30 != (UIText *)0x0) &&
                 (((auVar28 = ZEXT416((uint)*(float *)(local_30 + 0x118)),
                   *(float *)(local_30 + 0x118) == 0.0 &&
                   (*(SensorData *)(local_30 + 0x45) == (SensorData)0x0)) || (cVar4 != '\0')))) {
                *(SensorData *)(local_30 + 0x45) = (SensorData)0x1;
              }
            }
            else {
              auVar28 = ZEXT416((uint)local_3c);
              if (0.0 < local_3c) goto LAB_0050de85;
              if (local_30 != (UIText *)0x0) {
                fVar23 = *(float *)(local_30 + 0x128) - local_64 * 4.0;
                auVar28 = ZEXT416((uint)fVar23);
                *(float *)(local_30 + 0x128) = fVar23;
                if (*(float *)(local_30 + 0x128) <= 0.0 && *(float *)(local_30 + 0x128) != 0.0) {
                  *(undefined4 *)(local_30 + 0x128) = 0;
                }
                std::vector<>::clear((vector<> *)(local_30 + 0xec));
                cVar4 = local_31;
                goto LAB_0050ec75;
              }
            }
            pSVar17 = local_54;
            if ((this[0x2d0] != (Ship)0x0) && (local_30 != (UIText *)0x0)) {
              *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x60),*(basic_string<> **)(pSVar16 + 0x254));
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x48),(basic_string<> *)(pSVar16 + 8));
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x90),(basic_string<> *)(pSVar16 + 0x238));
              *(SensorData *)(local_30 + 0x45) = (SensorData)0x1;
              pSVar17 = local_54;
            }
          }
        }
        iVar6 = *(int *)(this + 0x24);
        local_50 = local_50 + 1;
      } while (local_50 < (Ship *)(*(int *)(iVar6 + 0xd0) - *(int *)(iVar6 + 0xcc) >> 2));
    }
    local_3c = 0.0;
    if (*(int *)(iVar6 + 0xa0) - *(int *)(iVar6 + 0x9c) >> 2 != 0) {
      do {
        fVar23 = local_3c;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x9c) + (int)local_3c * 4);
        if (*(char *)(iVar6 + 0x40) == '\0') {
          local_40 = this + 8;
          local_8c = (float)*(double *)(this + 0x28);
          local_88 = (float)*(double *)(this + 0x30);
          local_38 = (undefined1 *)((uint)local_38 | 0x6000);
          local_84 = (float)*(double *)(iVar6 + 0x28);
          pSVar17 = (Ship *)(float)*(double *)(iVar6 + 0x30);
          local_8 = 0x17;
          local_80 = pSVar17;
          fastDistance((Vec2 *)pDVar5,unaff_EDI);
          local_8 = 0xffffffff;
          local_4c = *(Ship **)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0x9c) + (int)fVar23 * 4) +
                               100);
          if ((float)local_4c == -1.0) {
            local_4c = (Ship *)0x43000000;
          }
          local_50 = pSVar17;
          iVar6 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)(**(int **)(this + 0x40) + 0xc));
          auVar27._4_8_ = 0;
          auVar27._0_4_ = ((float)iVar6 / 100.0) * (float)local_4c;
          if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1) {
            auVar27 = ZEXT812(0x44480000);
          }
          auVar28._12_4_ = 0;
          auVar28._0_12_ = auVar27;
          if ((float)local_50 <= auVar27._0_4_) {
            local_30 = (UIText *)
                       getSensorDataForSyntheticObjectID
                                 (this,*(int *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0x9c) +
                                                        (int)fVar23 * 4) + 0x44));
            if (local_30 == (UIText *)0x0) {
              debugPrint("GAME","%s: detected synthetic object \'%s\' for the first time");
              local_74 = operator_new(0x138);
              local_8 = 0x18;
              iVar6 = *(int *)(this + 0x220);
              *(int *)(this + 0x220) = iVar6 + 1;
              local_30 = (UIText *)SensorData::SensorData(local_74,-1,iVar6,(float)pDVar5);
              local_8 = 0xffffffff;
              if (this[0x234] != (Ship)0x0) {
                strUsingArgs((char *)local_2c);
                local_8 = 0x19;
                std::basic_string<>::end(local_2c);
                std::transform<>();
                local_58 = &stack0xfffffedc;
                local_b4 = &stack0xfffffedc;
                std::_Compressed_pair<>::_Compressed_pair<><>
                          ((_Compressed_pair<> *)&stack0xfffffedc,local_74,&local_59);
                local_8._0_1_ = 0x1a;
                std::basic_string<>::_Construct_lv_contents
                          ((basic_string<> *)&stack0xfffffedc,(basic_string<> *)local_2c);
                local_8._0_1_ = 0x1b;
                pFVar8 = Singleton<>::getInstance();
                local_8 = CONCAT31(local_8._1_3_,0x19);
                FlagManager::setFlag(pFVar8);
                local_8 = 0x1c;
                word::~word((word *)local_2c);
                this = local_60;
              }
              local_8 = 0xffffffff;
              if ((*(int *)(g_gameData + 0xcc) == 0) ||
                 (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
                bVar20 = std::basic_string<>::_Equal
                                   ((basic_string<> *)
                                    (*(int *)(*(int *)(*(int *)(this + 0x24) + 0x9c) +
                                             (int)fVar23 * 4) + 0x68),
                                    (basic_string<> *)(this + 0x238));
                if (bVar20) {
                  debugPrint("GAME","%s: it\'s our own cargo pod");
                  *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
                }
                else {
                  *(undefined4 *)(local_30 + 0x128) = 0;
                }
              }
              else {
                *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
              }
              iVar19 = 0;
              *(undefined4 *)(local_30 + 0xe4) = 0x44;
              iVar6 = 9;
              do {
                iVar11 = rand();
                this = local_60;
                iVar19 = iVar19 + 1 + iVar11 % 6;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              iVar6 = (int)local_3c * 4;
              *(int *)(local_30 + 0xe8) = iVar19 + 0xf;
              *(undefined4 *)(local_30 + 0x114) = 0xc0000000;
              *(SensorData *)(local_30 + 0x121) = (SensorData)0x1;
              *(SensorData *)(local_30 + 0x10c) = (SensorData)0x1;
              *(undefined4 *)(local_30 + 4) =
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(local_60 + 0x24) + 0x9c) + iVar6) + 0x44);
              *(undefined4 *)(local_30 + 300) = *(undefined4 *)(local_60 + 0x20);
              iVar19 = *(int *)(*(int *)(iVar6 + *(int *)(*(int *)(local_60 + 0x24) + 0x9c)) + 0x60)
              ;
              if (iVar19 == 3) {
                *(undefined4 *)(local_30 + 0xe0) = 3;
              }
              else if (iVar19 == 0) {
                *(undefined4 *)(local_30 + 0xe0) = 4;
              }
              else if (iVar19 == 2) {
                *(undefined4 *)(local_30 + 0xe0) = 5;
              }
              else if (iVar19 == 1) {
                *(undefined4 *)(local_30 + 0xe0) = 6;
              }
              else if (iVar19 == 4) {
                *(undefined4 *)(local_30 + 0xe0) = 7;
              }
              pbVar12 = (basic_string<> *)strUsingArgs((char *)local_2c);
              std::basic_string<>::operator=((basic_string<> *)(local_30 + 0x90),pbVar12);
              local_8 = 0x1d;
              word::~word((word *)local_2c);
              local_8 = 0xffffffff;
              *(SensorData *)(local_30 + 8) = (SensorData)0x1;
              *(SensorData *)(local_30 + 9) = (SensorData)0x1;
              *(undefined4 *)(local_30 + 0x11c) = 0;
              std::basic_string<>::assign((basic_string<> *)(local_30 + 0xc0),"`$unknown",9);
              bVar20 = std::basic_string<>::_Equal
                                 ((basic_string<> *)
                                  (*(int *)(*(int *)(*(int *)(this + 0x24) + 0x9c) + iVar6) + 0x68),
                                  (basic_string<> *)(this + 0x238));
              if (bVar20) {
                *(undefined4 *)(local_30 + 0xdc) = 0;
              }
              std::vector<>::push_back((vector<> *)(this + 0x214),&local_30);
            }
            else {
              pSVar13 = Sector::getSyntheticObjectWithID
                                  (*(Sector **)(this + 0x24),*(int *)(local_30 + 4));
              if (pSVar13 == (SyntheticObject *)0x0) {
                *(float *)(local_30 + 0x128) = *(float *)(local_30 + 0x128) - local_64 * 4.0;
                if (*(float *)(local_30 + 0x128) <= 0.0 && *(float *)(local_30 + 0x128) != 0.0) {
                  *(undefined4 *)(local_30 + 0x128) = 0;
                }
              }
              else {
                if ((*(int *)(pSVar13 + 0x60) == 2) && (0.0 <= *(float *)(pSVar13 + 0xe0))) {
                  local_9c = (float)*(double *)(this + 0x28);
                  local_98 = (float)*(double *)(this + 0x30);
                  local_38 = (undefined1 *)((uint)local_38 | 0x18000);
                  local_94 = (float)*(double *)(pSVar13 + 0x28);
                  fVar23 = (float)*(double *)(pSVar13 + 0x30);
                  local_8 = 0x1f;
                  local_90 = fVar23;
                  fastDistance((Vec2 *)pDVar5,unaff_EDI);
                  local_8 = 0xffffffff;
                  if (fVar23 <= *(float *)(pSVar13 + 0xe0)) {
                    std::_String_val<>::_String_val<>((_String_val<> *)local_2c);
                    local_8 = 0x20;
                    std::basic_string<>::_Construct_lv_contents
                              (local_2c,(basic_string<> *)(pSVar13 + 0x98));
                    local_8 = 0x21;
                    bVar20 = std::basic_string<>::_Equal(local_2c,"");
                    if (!bVar20) {
                      local_58 = &stack0xfffffee0;
                      local_a8 = &stack0xfffffee0;
                      std::_String_val<>::_String_val<>((_String_val<> *)&stack0xfffffee0);
                      local_8._0_1_ = 0x22;
                      std::basic_string<>::_Construct_lv_contents
                                ((basic_string<> *)&stack0xfffffee0,(basic_string<> *)local_2c);
                      local_8._0_1_ = 0x23;
                      pFVar8 = Singleton<>::getInstance();
                      local_8._0_1_ = 0x21;
                      bVar20 = FlagManager::flagSet(pFVar8);
                      if (!bVar20) {
                        local_58 = &stack0xfffffedc;
                        local_6c = (Ship *)&stack0xfffffedc;
                        std::_String_val<>::_String_val<>((_String_val<> *)&stack0xfffffedc);
                        local_8._0_1_ = 0x24;
                        std::basic_string<>::_Construct_lv_contents
                                  ((basic_string<> *)&stack0xfffffedc,(basic_string<> *)local_2c);
                        local_8._0_1_ = 0x25;
                        pFVar8 = Singleton<>::getInstance();
                        local_8 = CONCAT31(local_8._1_3_,0x21);
                        FlagManager::setFlag(pFVar8);
                        debugPrint("DETAIL",
                                   "Set flag as required for this synthetic object as we are close enough and can detect it"
                                  );
                      }
                    }
                    local_8 = 0x26;
                    word::~word((word *)local_2c);
                    local_8 = 0xffffffff;
                  }
                }
                if (*(float *)(local_30 + 0x128) < 100.0) {
                  fVar23 = *(float *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0x9c) +
                                              (int)local_3c * 4) + 100);
                  fVar24 = local_64 * 20.0;
                  if (fVar23 * 0.25 <= (float)local_50) {
                    if (fVar23 * 0.5 <= (float)local_50) {
                      fVar24 = fVar24 * 0.5;
                    }
                  }
                  else {
                    fVar24 = fVar24 + fVar24;
                  }
                  *(float *)(local_30 + 0x128) = fVar24 + *(float *)(local_30 + 0x128);
                  if (100.0 < *(float *)(local_30 + 0x128)) {
                    if (((*(int *)(pSVar13 + 0x60) == 2) && (this[0x234] != (Ship)0x0)) &&
                       (*(float *)(pSVar13 + 0xe0) == -1.0)) {
                      std::_String_val<>::_String_val<>((_String_val<> *)local_2c);
                      local_8 = 0x27;
                      std::basic_string<>::_Construct_lv_contents
                                (local_2c,(basic_string<> *)(pSVar13 + 0x98));
                      local_8 = 0x28;
                      bVar20 = std::basic_string<>::_Equal(local_2c,"");
                      if (!bVar20) {
                        local_58 = &stack0xfffffee0;
                        local_44 = &stack0xfffffee0;
                        std::_String_val<>::_String_val<>((_String_val<> *)&stack0xfffffee0);
                        local_8._0_1_ = 0x29;
                        std::basic_string<>::_Construct_lv_contents
                                  ((basic_string<> *)&stack0xfffffee0,(basic_string<> *)local_2c);
                        local_8._0_1_ = 0x2a;
                        pFVar8 = Singleton<>::getInstance();
                        local_8._0_1_ = 0x28;
                        bVar20 = FlagManager::flagSet(pFVar8);
                        if (!bVar20) {
                          local_58 = &stack0xfffffedc;
                          local_a0 = &stack0xfffffedc;
                          std::_String_val<>::_String_val<>((_String_val<> *)&stack0xfffffedc);
                          local_8._0_1_ = 0x2b;
                          std::basic_string<>::_Construct_lv_contents
                                    ((basic_string<> *)&stack0xfffffedc,(basic_string<> *)local_2c);
                          local_8._0_1_ = 0x2c;
                          pFVar8 = Singleton<>::getInstance();
                          local_8 = CONCAT31(local_8._1_3_,0x28);
                          FlagManager::setFlag(pFVar8);
                          debugPrint("DETAIL",
                                     "Set flag as required for this synthetic object as the solution is at full"
                                    );
                          LogSystem::addLogLine
                                    (this_00,*(LogPriority *)(this + 0x224),&DAT_00000002);
                        }
                      }
                      local_8 = 0xffffffff;
                      word::~word((word *)local_2c);
                    }
                    *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
                  }
                }
                pUVar3 = local_30;
                iVar6 = diceRoll(0,(int)pDVar5,(int)unaff_EDI);
                if ((float)(iVar6 + 0xf) < *(float *)(pUVar3 + 0x128)) {
                  if (((*(int *)(local_30 + 0x130) == 0) ||
                      (iVar6 = *(int *)(*(int *)(local_30 + 0x130) + 0x44), iVar6 == 0)) ||
                     ((iVar6 = *(int *)(iVar6 + 0x124), iVar6 == 0 ||
                      (*(char *)(iVar6 + 0x160) == '\0')))) {
                    pbVar12 = (basic_string<> *)
                              CargoHold::describeCargo
                                        (*(CargoHold **)(pSVar13 + 0xe8),SUB41(local_2c,0));
                    std::basic_string<>::operator=((basic_string<> *)(local_30 + 0xc0),pbVar12);
                    word::~word((word *)local_2c);
                  }
                  else {
                    std::vector<>::size((vector<> *)(g_gameData + 0x84));
                    uVar7 = random((int)pDVar5);
                    ppJVar14 = std::vector<>::operator[]((vector<> *)(g_gameData + 0x84),uVar7);
                    std::basic_string<>::operator=
                              ((basic_string<> *)(local_30 + 0xc0),(basic_string<> *)(*ppJVar14 + 4)
                              );
                  }
                }
              }
            }
            fVar23 = local_3c;
            *(undefined4 *)(local_30 + 0x40) = 0;
            ppJVar14 = std::vector<>::operator[]
                                 ((vector<> *)(*(int *)(this + 0x24) + 0x9c),(uint)local_3c);
            *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(*ppJVar14 + 0x28);
            ppJVar14 = std::vector<>::operator[]
                                 ((vector<> *)(*(int *)(this + 0x24) + 0x9c),(uint)fVar23);
            auVar28._8_8_ = 0;
            auVar28._0_8_ = (double)*(ulonglong *)(*ppJVar14 + 0x30);
            *(ulonglong *)(local_30 + 0x18) = *(ulonglong *)(*ppJVar14 + 0x30);
          }
          pUVar3 = local_30;
          if (local_30 != (UIText *)0x0) {
            iVar6 = diceRoll(0,(int)pDVar5,(int)unaff_EDI);
            auVar28 = ZEXT416((uint)*(float *)(pUVar3 + 0x128));
            if (((float)(iVar6 + 0xf) < *(float *)(pUVar3 + 0x128)) &&
               (*(SensorData *)(local_30 + 0x45) == (SensorData)0x0)) {
              *(SensorData *)(local_30 + 0x45) = (SensorData)0x1;
            }
          }
        }
        iVar6 = *(int *)(this + 0x24);
        local_3c = (float)((int)local_3c + 1);
      } while ((uint)local_3c < (uint)(*(int *)(iVar6 + 0xa0) - *(int *)(iVar6 + 0x9c) >> 2));
    }
  }
  if (((*(int **)(*(int *)(this + 0x40) + 4) != (int *)0x0) &&
      (cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 4) + 0x10))(), cVar4 != '\0')) &&
     (bVar20 = ShipModule::isAtHighPower(*(ShipModule **)(*(int *)(this + 0x40) + 4)), bVar20)) {
    pSVar17 = (Ship *)0x0;
    local_4c = (Ship *)0x0;
    uVar7 = std::vector<>::size((vector<> *)(*(int *)(this + 0x24) + 0xcc));
    if (uVar7 != 0) {
      do {
        pSVar17 = Sector::getShip(*(Sector **)(this + 0x24),(int)pSVar17);
        local_50 = pSVar17;
        if (pSVar17 != this) {
          GameObject::getLocation((GameObject *)(this + 8));
          local_6c = pSVar17 + 8;
          local_8 = 0x2d;
          GameObject::getLocation((GameObject *)local_6c);
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          fastDistance((Vec2 *)pDVar5,unaff_EDI);
          local_40 = auVar28._0_4_;
          ShipModule::getCurrentLADARRange(*(ShipModule **)(*(int *)(this + 0x40) + 4));
          bVar20 = (float)local_40 <= auVar28._0_4_;
          cocos2d::Vec2::~Vec2((Vec2 *)&local_8c);
          local_8 = 0xffffffff;
          cocos2d::Vec2::~Vec2((Vec2 *)&local_84);
          if (bVar20) {
            GameObject::getLocation((GameObject *)local_6c);
            relativeAngleToLocation(this);
            pSVar17 = local_50;
            dVar25 = auVar28._0_8_;
            fVar23 = *(float *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 4) + 8) + 0x104) * 0.5;
            if (((float)(int)dVar25 <= fVar23) ||
               (fVar23 = 360.0 - fVar23, auVar28 = ZEXT416((uint)fVar23),
               fVar23 <= (float)(int)dVar25)) {
              local_30 = (UIText *)getSensorDataForShipID(this,*(int *)(local_50 + 0x250));
              if (local_30 == (UIText *)0x0) {
                pSVar15 = operator_new(0x138);
                local_8 = 0x2f;
                local_74 = pSVar15;
                iVar6 = getNextSensorID(this);
                local_30 = (UIText *)
                           SensorData::SensorData
                                     (pSVar15,*(int *)(pSVar17 + 0x250),iVar6,(float)pDVar5);
                local_8 = 0xffffffff;
                *(undefined4 *)(local_30 + 300) = *(undefined4 *)(this + 0x20);
                *(Ship **)(local_30 + 0x130) = pSVar17;
                *(undefined4 *)(local_30 + 0xd8) =
                     *(undefined4 *)(*(int *)(pSVar17 + 0x254) + 0x158);
                *(SensorData *)(local_30 + 8) = (SensorData)0x1;
                *(SensorData *)(local_30 + 9) = (SensorData)0x1;
                *(undefined4 *)(local_30 + 0x11c) = 0;
                *(undefined4 *)(local_30 + 0x128) = 0;
                std::vector<>::push_back((vector<> *)(this + 0x214),&local_30);
                if (local_54 == (Ship *)0x0) {
                  local_54 = pSVar17;
                }
                trueAngleToObject(this,(GameObject *)(pSVar17 + 8));
                *(int *)(local_30 + 0x30) = (int)auVar28._0_8_;
                iVar6 = *(int *)(local_30 + 0x130);
                if ((iVar6 != 0) && (*(int *)(*(int *)(iVar6 + 0x254) + 0x158) == 0)) {
                  auVar28._0_8_ = (double)local_68;
                  auVar28._8_8_ = 0;
                  std::basic_string<>::c_str((basic_string<> *)(iVar6 + 0x238));
                  std::basic_string<>::c_str((basic_string<> *)(*(int *)(local_30 + 0x130) + 8));
                  std::basic_string<>::c_str((basic_string<> *)(this + 8));
                  debugPrint("GAME","%s: detected vessel %s (%s) at range %f, on LADAR");
                }
              }
              else {
                if ((*(float *)(local_30 + 0x128) < 100.0) &&
                   (*(float *)(local_30 + 0x128) = local_64 * 60.0 + *(float *)(local_30 + 0x128),
                   100.0 < *(float *)(local_30 + 0x128))) {
                  *(undefined4 *)(local_30 + 0x128) = 0x42c80000;
                }
                *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(pSVar17 + 0x28);
                auVar28._8_8_ = 0;
                auVar28._0_8_ = (double)*(ulonglong *)(pSVar17 + 0x30);
                *(ulonglong *)(local_30 + 0x18) = *(ulonglong *)(pSVar17 + 0x30);
              }
              *(SensorData *)(local_30 + 0x44) = (SensorData)0x1;
              *(undefined4 *)(local_30 + 0x40) = 0;
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x60),*(basic_string<> **)(pSVar17 + 0x254));
              std::basic_string<>::operator=
                        ((basic_string<> *)(local_30 + 0x90),(basic_string<> *)(pSVar17 + 0x238));
              getSpeed(pSVar17);
              *(int *)(local_30 + 0x34) = auVar28._0_4_;
              *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(pSVar17 + 0x28);
              auVar28._8_8_ = 0;
              auVar28._0_8_ = (double)*(ulonglong *)(pSVar17 + 0x30);
              *(ulonglong *)(local_30 + 0x18) = *(ulonglong *)(pSVar17 + 0x30);
              *(SensorData *)(local_30 + 0x122) = (SensorData)0x1;
              getSpeed(pSVar17);
              if (0.0 < auVar28._0_4_) {
                getMotionAngle(pSVar17);
                *(int *)(local_30 + 0x38) = auVar28._0_4_;
              }
            }
          }
        }
        pSVar17 = local_4c + 1;
        local_4c = pSVar17;
        pSVar16 = (Ship *)std::vector<>::size((vector<> *)(*(int *)(this + 0x24) + 0xcc));
      } while (pSVar17 < pSVar16);
    }
  }
  this[0x104] = SUB41(local_7c,0);
  ExceptionList = local_10;
  pSVar17 = (Ship *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pSVar17;
}


// public: bool __thiscall Ship::canUseWeapons(void)

bool __thiscall Ship::canUseWeapons(Ship *this)

{
  int iVar1;
  
  if (this[0x234] == (Ship)0x0) {
    if (*(int *)(*(int *)(this + 0x40) + 0x20) == 0) {
      return false;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
  }
  else {
    if (*(int *)(this + 0xd4) == 3) {
      return false;
    }
    if (*(int *)(*(int *)(this + 0x40) + 0x20) == 0) {
      return false;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x38 + *(int *)(this + 0x1b4) * 4);
  }
  if (iVar1 == 0) {
    return false;
  }
  return true;
}


// public: void __thiscall Ship::removeWeapon(class Weapon *)

void __thiscall Ship::removeWeapon(Ship *this,Weapon *param_1)

{
  int iVar1;
  FlagManager *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  SensorData *pSVar7;
  uint uVar8;
  uint uVar9;
  basic_string<> local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3680;
  local_10 = ExceptionList;
  uVar8 = 0;
  iVar5 = *(int *)(*(int *)(this + 0x40) + 0x3c);
  if (*(int *)(*(int *)(this + 0x40) + 0x40) - iVar5 >> 2 == 0) {
    return;
  }
  do {
    iVar5 = *(int *)(iVar5 + uVar8 * 4);
    iVar4 = 0;
    iVar1 = 0x3c;
    do {
      if (*(Weapon **)(iVar1 + iVar5) == param_1) {
        ExceptionList = &local_10;
        *(undefined4 *)(iVar5 + 0x3c + iVar4 * 4) = 0;
        if (this[0x234] == (Ship)0x0) goto LAB_0050fc4f;
        if (*(int *)(*(int *)(this + 0x40) + 0x20) == 0) goto LAB_0050fb9e;
        iVar5 = 0;
        piVar6 = (int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
        goto LAB_0050fb80;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar1 < 0x5c);
    uVar8 = uVar8 + 1;
    iVar5 = *(int *)(*(int *)(this + 0x40) + 0x3c);
    if ((uint)(*(int *)(*(int *)(this + 0x40) + 0x40) - iVar5 >> 2) <= uVar8) {
      return;
    }
  } while( true );
  while( true ) {
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
    if (7 < iVar5) break;
LAB_0050fb80:
    if ((*piVar6 != 0) && (*(int *)(*(int *)(*piVar6 + 0x388) + 0x1b4) == 3)) goto LAB_0050fbdf;
  }
LAB_0050fb9e:
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_44,"has_torpedo",0xb);
  local_8 = 0;
  pFVar2 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  FlagManager::setFlag(pFVar2);
LAB_0050fbdf:
  if (*(int *)(*(int *)(this + 0x40) + 0x20) != 0) {
    iVar5 = 0;
    piVar6 = (int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
    do {
      if ((*piVar6 != 0) && (*(int *)(*(int *)(*piVar6 + 0x388) + 0x1b4) == 4)) goto LAB_0050fc4f;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 8);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_44,"has_probe",9);
  local_8 = 1;
  pFVar2 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  FlagManager::setFlag(pFVar2);
LAB_0050fc4f:
  piVar6 = *(int **)(this + 0x194);
  if ((piVar6 != (int *)0x0) && ((Weapon *)piVar6[0x4c] == param_1)) {
    if (*piVar6 != -1) {
      uVar8 = 0;
      puVar3 = *(undefined4 **)(this + 0x214);
      uVar9 = *(int *)(this + 0x218) - (int)puVar3 >> 2;
      if (uVar9 != 0) {
        do {
          pSVar7 = (SensorData *)*puVar3;
          if (*(int *)pSVar7 == *piVar6) goto LAB_0050fc92;
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar8 < uVar9);
      }
    }
    pSVar7 = (SensorData *)0x0;
LAB_0050fc92:
    local_30 = 0x50fc9a;
    removeSensorData(this,pSVar7);
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 400) = 0xffffffff;
  }
  piVar6 = *(int **)(this + 0x19c);
  if ((piVar6 != (int *)0x0) && ((Weapon *)piVar6[0x4c] == param_1)) {
    if (*piVar6 != -1) {
      uVar8 = 0;
      puVar3 = *(undefined4 **)(this + 0x214);
      uVar9 = *(int *)(this + 0x218) - (int)puVar3 >> 2;
      if (uVar9 != 0) {
        do {
          pSVar7 = (SensorData *)*puVar3;
          if (*(int *)pSVar7 == *piVar6) goto LAB_0050fcf1;
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar8 < uVar9);
      }
    }
    pSVar7 = (SensorData *)0x0;
LAB_0050fcf1:
    local_30 = 0x50fcf9;
    removeSensorData(this,pSVar7);
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x198) = 0xffffffff;
  }
  ExceptionList = local_10;
  return;
}


// public: int __thiscall Ship::maxWeapons(void)

int __thiscall Ship::maxWeapons(Ship *this)

{
  if (*(int *)(*(int *)(this + 0x40) + 0x20) == 0) {
    return 0;
  }
  return (int)*(float *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 8) + 0x104);
}


// public: bool __thiscall Ship::weaponSpunUp(void)

bool __thiscall Ship::weaponSpunUp(Ship *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(*(int *)(this + 0x40) + 0x20) != 0) {
    iVar2 = 0;
    piVar3 = (int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
    do {
      iVar1 = *piVar3;
      if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) == '\0')) && (*(char *)(iVar1 + 0x3bc) != '\0')
         ) {
        return true;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 8);
  }
  return false;
}


// public: bool __thiscall Ship::hasWeaponFired(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall Ship::hasWeaponFired(Ship *this,char *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  nothrow_t *pnVar4;
  int *piVar5;
  uint unaff_ESI;
  char *pcVar6;
  char *unaff_EDI;
  int iVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar6 = param_2;
  if (*(int *)(*(int *)(this + 0x40) + 0x20) != 0) {
    iVar7 = 0;
    piVar5 = (int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
    do {
      iVar1 = *piVar5;
      pcVar6 = param_2;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) != '\0')) {
        bVar2 = std::_Traits_equal<>("",0,unaff_EDI,unaff_ESI);
        pcVar6 = param_2;
        if (bVar2) {
          bVar2 = true;
          goto LAB_0050fe4d;
        }
        iVar1 = *(int *)(iVar1 + 0x38c);
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x30) == 1)) && (iVar1 != 8)) {
          pcVar3 = (char *)&param_2;
          if (0xf < in_stack_00000018) {
            pcVar3 = param_2;
          }
          bVar2 = std::_Traits_equal<>(pcVar3,in_stack_00000014,unaff_EDI,unaff_ESI);
          if (bVar2) {
            bVar2 = true;
            goto LAB_0050fe4d;
          }
        }
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 < 8);
  }
  bVar2 = false;
LAB_0050fe4d:
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = pcVar6;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar3 = *(char **)(pcVar6 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar6 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar4);
  }
  return bVar2;
}


// public: int __thiscall Ship::addWeapon(class WeaponClass *,int)

int __thiscall Ship::addWeapon(Ship *this,WeaponClass *param_1,int param_2)

{
  basic_string<> *this_00;
  float fVar1;
  ShipModule *this_01;
  int iVar2;
  Weapon *pWVar3;
  Ship *this_02;
  FlagManager *pFVar4;
  int *piVar5;
  uint local_3c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c36c2;
  local_10 = ExceptionList;
  if (param_1 == (WeaponClass *)0x0) {
    ExceptionList = &local_10;
    debugPrint("ERROR","Error: null weapon class being added.");
    ExceptionList = local_10;
    return -1;
  }
  this_01 = *(ShipModule **)(*(int *)(this + 0x40) + 0x20);
  if (this_01 == (ShipModule *)0x0) {
    return -1;
  }
  ExceptionList = &local_10;
  iVar2 = ShipModule::getHousedObjectCount(this_01);
  if ((*(float *)(*(int *)(this_01 + 8) + 0x108) <= (float)iVar2) && (param_2 != -1)) {
    ExceptionList = local_10;
    return -1;
  }
  pWVar3 = operator_new(0x428);
  local_8 = 0;
  this_02 = (Ship *)Weapon::Weapon(pWVar3,this,param_1);
  local_8 = 0xffffffff;
  initialiseBehaviour(this_02,*(CraftPurpose *)(param_1 + 0x1b4),4,3);
  local_3c = local_3c & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_3c,"stock",5);
  addModulesWithConfig(this_02);
  this_00 = (basic_string<> *)(this_02 + 8);
  if (*(int *)(param_1 + 0x1b4) == 3) {
    std::basic_string<>::assign(this_00,"Torpedo",7);
    if (this[0x234] == (Ship)0x0) goto LAB_00510047;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffffc0,"has_torpedo",0xb);
    local_8 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x1b4) != 4) {
      std::basic_string<>::assign(this_00,"Unknown",7);
      goto LAB_00510047;
    }
    std::basic_string<>::assign(this_00,"Probe",5);
    if (this[0x234] == (Ship)0x0) goto LAB_00510047;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffffc0,"has_probe",9);
    local_8 = 2;
  }
  pFVar4 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  FlagManager::setFlag(pFVar4);
LAB_00510047:
  if (param_2 != -1) {
LAB_0051009e:
    if (*(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c + param_2 * 4) != 0) {
      debugPrint("DETAIL","%s: Clearing weapon slot %d");
      iVar2 = *(int *)(this + 0x40);
      pWVar3 = *(Weapon **)(*(int *)(iVar2 + 0x20) + 0x3c + param_2 * 4);
      if (pWVar3 != (Weapon *)0x0) {
        Weapon::~Weapon(pWVar3);
        operator_delete(pWVar3,(nothrow_t *)0x428);
        iVar2 = *(int *)(this + 0x40);
      }
      *(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x3c + param_2 * 4) = 0;
    }
    this_02[800] = (Ship)0x1;
    *(int *)(this_02 + 0x3c8) = param_2;
    *(Ship **)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c + param_2 * 4) = this_02;
    local_3c = 0x510147;
    debugPrint("DETAIL","%s: Weapon added to slot %d%s");
    ExceptionList = local_10;
    return param_2;
  }
  param_2 = 0;
  fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 8) + 0x108);
  if (0.0 < fVar1) {
    piVar5 = (int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x3c);
    do {
      if (((param_2 < 8) && ((uint)param_2 < 9)) && (*piVar5 == 0)) {
        if (param_2 == 0xffffffff) {
          ExceptionList = local_10;
          return -1;
        }
        goto LAB_0051009e;
      }
      param_2 = param_2 + 1;
      piVar5 = piVar5 + 1;
    } while ((float)param_2 < fVar1);
  }
  ExceptionList = local_10;
  return -1;
}


// public: void __thiscall Ship::fireWeapon(int)

void __thiscall Ship::fireWeapon(Ship *this,int param_1)

{
  int iVar1;
  ShipBehaviour *this_00;
  int *piVar2;
  float fVar3;
  FlagManager *pFVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  Ship *pSVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  basic_string<> local_74 [4];
  undefined4 uStack_70;
  undefined8 local_48;
  undefined1 *local_3c;
  undefined1 *local_38;
  Ship *local_34;
  void *local_30 [5];
  uint local_1c;
  float local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3701;
  local_10 = ExceptionList;
  fVar3 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_3c = (undefined1 *)(param_1 * 4 + 0x3c);
  pSVar11 = *(Ship **)(*(int *)(*(int *)(this + 0x40) + 0x20) + (int)local_3c);
  local_34 = pSVar11;
  local_18 = fVar3;
  if (pSVar11 == (Ship *)0x0) {
    debugPrint("DETAIL","%s: Tried to fire slot %d, no such slot exists.");
  }
  else {
    if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
       && (this[0x234] != (Ship)0x0)) {
      local_38 = local_74;
      local_74[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_74,"fired_torpedo",0xd);
      local_8 = 0;
      pFVar4 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar4);
    }
    pSVar11[800] = (Ship)0x0;
    setSector(pSVar11,*(int *)(this + 0x20));
    pSVar11[0x3c4] = (Ship)0x1;
    *(undefined8 *)(pSVar11 + 0x28) = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(pSVar11 + 0x30) = *(undefined8 *)(this + 0x30);
    *(undefined4 *)(pSVar11 + 100) = *(undefined4 *)(this + 100);
    fVar13 = (float)*(double *)(this + 0x28);
    angleInDegreesFrom();
    dVar14 = (double)(int)fVar13 * 0.017453292519943295;
    local_48 = dVar14;
    __libm_sse2_cos_precise();
    local_38 = (undefined1 *)(float)(dVar14 * 0.25);
    dVar14 = local_48;
    __libm_sse2_sin_precise();
    *(Ship **)(pSVar11 + 0x39c) = this;
    pSVar11[0x3fc] = (Ship)0x1;
    *(double *)(pSVar11 + 0x28) = (double)(float)(dVar14 * 0.25) + *(double *)(pSVar11 + 0x28);
    *(double *)(pSVar11 + 0x30) = (double)(float)local_38 + *(double *)(pSVar11 + 0x30);
    if (((this[0x234] != (Ship)0x0) && (*(int *)(pSVar11 + 0x38c) != 0)) &&
       (*(int *)(*(int *)(pSVar11 + 0x38c) + 0x30) == 1)) {
      strUsingArgs((char *)local_30);
      local_8 = 1;
      std::transform<>();
      local_38 = local_74;
      std::basic_string<>::basic_string<>(local_74,(basic_string<> *)local_30);
      local_8._0_1_ = 2;
      pFVar4 = Singleton<>::getInstance();
      local_8 = CONCAT31(local_8._1_3_,1);
      FlagManager::setFlag(pFVar4);
      local_8 = 0xffffffff;
      pSVar11 = local_34;
      if (0xf < local_1c) {
        pnVar9 = (nothrow_t *)(local_1c + 1);
        pvVar6 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar6 = *(void **)((int)local_30[0] + -4);
          pnVar9 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar9);
        pSVar11 = local_34;
      }
    }
    ComponentInterfaceInstance::getEfficiencyPercent
              (*(ComponentInterfaceInstance **)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0xc));
    SystemManager::totalPossiblePower(*(SystemManager **)(pSVar11 + 0x40));
    SystemManager::generatePower(*(SystemManager **)(pSVar11 + 0x40),fVar3);
    pSVar11[0x3bc] = (Ship)0x1;
    *(undefined4 *)(pSVar11 + 0x3d0) = 1;
    local_48 = (double)CONCAT44((float)*(double *)(pSVar11 + 0x30),
                                (float)*(double *)(pSVar11 + 0x28));
    local_8 = 3;
    local_3c = (undefined1 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_48,(Vec2 *)(pSVar11 + 300))
    ;
    local_34 = (Ship *)(0x5f3759df - ((uint)local_3c >> 1));
    local_8 = 0xffffffff;
    *(float *)(pSVar11 + 0x3d4) =
         (1.5 - (float)local_3c * 0.5 * (float)local_34 * (float)local_34) * (float)local_34 *
         (float)local_3c;
    debugPrint("AI","%s: launched from %s");
    uStack_70 = 0x5105b5;
    debugPrint("GAME","%s: Weapon launched, (%s class, rego %s).");
    if ((*(int *)(*(int *)(pSVar11 + 0x388) + 0x1b4) == 3) ||
       (*(int *)(*(int *)(pSVar11 + 0x388) + 0x1b4) == 5)) {
      local_38 = (undefined1 *)0x0;
      local_34 = *(Ship **)(*(int *)(this + 0x24) + 0xcc);
      pSVar11 = *(Ship **)(*(int *)(this + 0x24) + 0xd0);
      local_3c = (undefined1 *)((uint)(pSVar11 + (3 - (int)local_34)) >> 2);
      if (pSVar11 < local_34) {
        local_3c = (undefined1 *)0x0;
      }
      if (local_3c != (undefined1 *)0x0) {
        do {
          iVar1 = *(int *)local_34;
          uVar7 = 0;
          piVar5 = *(int **)(iVar1 + 0x214);
          uVar10 = *(int *)(iVar1 + 0x218) - (int)piVar5 >> 2;
          if (uVar10 != 0) {
            do {
              if (*(Ship **)(*piVar5 + 0x130) == this) {
                if ((*(float *)(*piVar5 + 0x40) <= 0.5) &&
                   (this_00 = *(ShipBehaviour **)(iVar1 + 0x44), this_00 != (ShipBehaviour *)0x0)) {
                  ShipBehaviour::detectWeaponLaunch(this_00,this,(Weapon *)this_00);
                }
                break;
              }
              uVar7 = uVar7 + 1;
              piVar5 = piVar5 + 1;
            } while (uVar7 < uVar10);
          }
          local_38 = local_38 + 1;
          local_34 = local_34 + 4;
        } while (local_38 != local_3c);
      }
    }
    uVar7 = 0;
    piVar5 = *(int **)(*(int *)(this + 0x24) + 0xcc);
    piVar2 = *(int **)(*(int *)(this + 0x24) + 0xd0);
    puVar8 = (undefined1 *)((uint)((int)piVar2 + (3 - (int)piVar5)) >> 2);
    if (piVar2 < piVar5) {
      puVar8 = (undefined1 *)0x0;
    }
    local_3c = puVar8;
    if (puVar8 != (undefined1 *)0x0) {
      do {
        bVar12 = false;
        if (*(int *)(*piVar5 + 0x254) != 0) {
          bVar12 = *(int *)(*(int *)(*piVar5 + 0x254) + 0x158) == 0;
        }
        if (bVar12) {
          detectsWeaponLaunchFiredAtIt((Ship *)*piVar5,this);
          puVar8 = local_3c;
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while ((undefined1 *)uVar7 != puVar8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: enum EHullLocation::HullLocation __thiscall Ship::getDamageLocationForAngle(enum
// EDamageAngle::DamageAngle)

HullLocation __thiscall Ship::getDamageLocationForAngle(Ship *this,DamageAngle param_1)

{
  DamageAngle *pDVar1;
  int iVar2;
  int iVar3;
  Ship *pSVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_8;
  
  local_8 = 0;
  iVar3 = *(int *)(this + 0x254);
  if (*(int *)(iVar3 + 0x110) - *(int *)(iVar3 + 0x10c) >> 2 != 0) {
    do {
      pDVar1 = *(DamageAngle **)(*(int *)(iVar3 + 0x10c) + local_8 * 4);
      if (*pDVar1 == param_1) {
        iVar6 = 0;
        uVar5 = 0;
        if ((int)(pDVar1[2] - pDVar1[1]) >> 3 == 0) {
LAB_0051082a:
          pSVar4 = this + 8;
          if (0xf < *(uint *)(this + 0x1c)) {
            pSVar4 = *(Ship **)pSVar4;
          }
          debugPrint("DETAIL","%s: can\'t damage any hull locations left from angle %s",pSVar4,
                     (&PTR_s_Bow_005e180c)[param_1]);
          return 4;
        }
        do {
          iVar2 = getDamageAmountForHullSection
                            (this,*(HullLocation *)
                                   (*(int *)(*(int *)(*(int *)(iVar3 + 0x10c) + local_8 * 4) + 4) +
                                   uVar5 * 8));
          iVar3 = *(int *)(this + 0x254);
          if (iVar2 < 100) {
            iVar6 = iVar6 + *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x10c) + local_8 * 4) + 4) +
                                     4 + uVar5 * 8);
          }
          uVar5 = uVar5 + 1;
          iVar2 = *(int *)(*(int *)(iVar3 + 0x10c) + local_8 * 4);
        } while (uVar5 < (uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 3));
        if (iVar6 == 0) goto LAB_0051082a;
        iVar3 = rand();
        uVar5 = 0;
        iVar2 = iVar3 % iVar6 + -1;
        iVar3 = *(int *)(*(int *)(*(int *)(this + 0x254) + 0x10c) + local_8 * 4);
        iVar6 = *(int *)(iVar3 + 4);
        uVar7 = *(int *)(iVar3 + 8) - iVar6 >> 3;
        if (uVar7 != 0) {
          do {
            iVar3 = *(int *)(iVar6 + 4 + uVar5 * 8);
            if (iVar2 < iVar3) {
              return *(HullLocation *)(uVar5 * 8 + iVar6);
            }
            iVar2 = iVar2 - iVar3;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar7);
        }
      }
      iVar3 = *(int *)(this + 0x254);
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(iVar3 + 0x110) - *(int *)(iVar3 + 0x10c) >> 2));
  }
  return 1;
}


// public: virtual void __thiscall Ship::destroy(void)

void __thiscall Ship::destroy(Ship *this)

{
  DamageType unaff_ESI;
  Ship *pSVar1;
  
  SystemManager::newDamage(*(SystemManager **)(this + 0x40),4,0.0,unaff_ESI);
  pSVar1 = this + 8;
  if (0xf < *(uint *)(this + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("GAME","%s: destroying myself",pSVar1);
  return;
}


// public: virtual bool __thiscall Ship::damage(int,float,enum EDamageType::DamageType,class Ship *)

bool __thiscall Ship::damage(Ship *this,int param_1,float param_2,DamageType param_3,Ship *param_4)

{
  basic_string<> *this_00;
  MetaGameAction **ppMVar1;
  Ship *pSVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  DamageAngle DVar7;
  HullLocation HVar8;
  int iVar9;
  NetworkServer *pNVar10;
  Stats *pSVar11;
  FlagManager *pFVar12;
  SoundEngine *pSVar13;
  PresentationInterface *pPVar14;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  void *pvVar15;
  BountyManager *this_01;
  LogSystem *pLVar16;
  BountyManager *this_02;
  int *piVar17;
  GameLogic *this_03;
  GameLogic *extraout_ECX_01;
  GameData *pGVar18;
  LogSystem *this_04;
  nothrow_t *pnVar19;
  basic_string<> *pbVar20;
  MetaGameAction *pMVar21;
  uint unaff_EDI;
  Ship *pSVar22;
  undefined1 *puVar23;
  float fVar24;
  basic_string<> local_b8 [12];
  undefined4 uStack_ac;
  Ship local_a0 [8];
  undefined4 uStack_98;
  char *pcVar25;
  Sound SVar26;
  uint uVar27;
  MetaGameAction *local_58;
  undefined1 *local_54;
  Ship *local_50;
  Ship *local_4c;
  undefined1 *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  LogSystem *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c37f1;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_50 = param_4;
  local_4c = (Ship *)0x0;
  local_14 = pcVar6;
  if (param_2 <= 0.0) goto LAB_00511ba6;
  if ((g_gameLogic[0x141] != (GameLogic)0x0) && (this[0x234] != (Ship)0x0)) {
    debugPrint("GAME","%s: player is in invulnerable mode, tok no damage");
    goto LAB_00511ba6;
  }
  iVar9 = *(int *)(*(int *)(this + 0x254) + 0x158);
  if ((((iVar9 == 4) || (iVar9 == 1)) || (iVar9 == 2)) || (iVar9 == 3)) goto LAB_00511ba6;
  local_4c = this + 8;
  debugPrint("GAME","%s: TAKING %f damage of type %s");
  if (this[0x234] != (Ship)0x0) {
    if (param_3 == 1) {
      g_gameData[0x172] = (GameData)0x1;
    }
    else if (param_3 == 0) {
      g_gameData[0x171] = (GameData)0x1;
    }
  }
  local_58 = (MetaGameAction *)
             ((float)(&combatDiffMultipler)[*(int *)(g_gameLogic + 0xa8)] * param_2 + param_2);
  if (param_1 - 0x2eU < 0x10d) {
    if (param_1 < 0x88) {
      DVar7 = 3;
    }
    else {
      DVar7 = (0xe1 < param_1) + 1;
    }
  }
  else {
    DVar7 = 0;
  }
  if (param_3 == 0) {
    HVar8 = getDamageLocationForAngle(this,DVar7);
LAB_00510b77:
    iVar9 = getDamageAmountForHullSection(this,HVar8);
    if (99 < iVar9) {
      debugPrint("GAME",
                 "%s: Unable to apply damage, no hull locations from this angle left undamaged.");
      goto LAB_00511ba6;
    }
  }
  else {
    if (param_3 == 2) {
      HVar8 = getDamageLocationForAngle(this,DVar7);
      goto LAB_00510b77;
    }
    if (param_3 == 5) {
      HVar8 = getDamageLocationForAngle(this,DVar7);
      goto LAB_00510b77;
    }
    if (param_3 == 1) {
      HVar8 = getDamageLocationForAngle(this,DVar7);
    }
    else {
      iVar9 = rand();
      HVar8 = iVar9 % 5;
      if ((param_3 == 4) || (param_3 != 3)) goto LAB_00510b77;
    }
  }
  fVar24 = SUB84((double)(float)local_58,0);
  debugPrint("GAME","%s: Applying a max of %f %s damage to hull location \'%s\'");
  SystemManager::damage(*(SystemManager **)(this + 0x40),HVar8,(float)param_3,(DamageType)pcVar6);
  if ((*(char *)(*(int *)(g_gameData + 0xcc) + 0x30f) != '\0') &&
     (this != *(Ship **)(g_gameData + 0xd0))) {
    SystemManager::damage(*(SystemManager **)(this + 0x40),4,0.0,(DamageType)pcVar6);
  }
  bVar3 = isDisabled(this,this[0x234] == (Ship)0x0);
  if ((bVar3) && (this[0x344] == (Ship)0x0)) {
    this[0x344] = (Ship)0x1;
    if (this[0x234] != (Ship)0x0) {
      local_8 = 0;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      local_4c = (Ship *)&DAT_00000001;
      if (*(int **)(*(int *)(this + 0x40) + 0x18) == (int *)0x0) {
        uVar27 = 0x16;
        pcVar25 = "RCS Module destroyed.\n";
LAB_00510bbd:
        std::basic_string<>::append((basic_string<> *)local_44,pcVar25,uVar27);
      }
      else {
        cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x14))();
        if (cVar4 != '\0') {
          uVar27 = 0x1b;
          pcVar25 = "RCS Module non-functional.\n";
          goto LAB_00510bbd;
        }
      }
      if (*(int **)(*(int *)(this + 0x40) + 0x10) == (int *)0x0) {
        uVar27 = 0x16;
        pcVar25 = "Main Drive destroyed.\n";
LAB_00510bea:
        std::basic_string<>::append((basic_string<> *)local_44,pcVar25,uVar27);
      }
      else {
        cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x10) + 0x14))();
        if (cVar4 != '\0') {
          uVar27 = 0x1b;
          pcVar25 = "Main Drive non-functional.\n";
          goto LAB_00510bea;
        }
      }
      if (*(int **)(*(int *)(this + 0x40) + 0x24) == (int *)0x0) {
        uVar27 = 0x17;
        pcVar25 = "Helm System destroyed.\n";
LAB_00510c17:
        std::basic_string<>::append((basic_string<> *)local_44,pcVar25,uVar27);
      }
      else {
        cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x24) + 0x14))();
        if (cVar4 != '\0') {
          uVar27 = 0x1c;
          pcVar25 = "Helm System non-functional.\n";
          goto LAB_00510c17;
        }
      }
      if (*(int **)(*(int *)(this + 0x40) + 0x28) == (int *)0x0) {
        uVar27 = 0x12;
        pcVar25 = "NavCom destroyed.\n";
LAB_00510c44:
        std::basic_string<>::append((basic_string<> *)local_44,pcVar25,uVar27);
      }
      else {
        cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x28) + 0x14))();
        if (cVar4 != '\0') {
          uVar27 = 0x17;
          pcVar25 = "NavCom non-functional.\n";
          goto LAB_00510c44;
        }
      }
      SystemManager::getMaxBatteryStorage(*(SystemManager **)(this + 0x40));
      if (fVar24 <= 0.0) {
        std::basic_string<>::append((basic_string<> *)local_44,"No functional batteries.\n",0x19);
      }
      SystemManager::getMaxTheoreticalPowerGeneration(*(SystemManager **)(this + 0x40));
      pLVar16 = extraout_ECX;
      if (fVar24 <= 0.0) {
        std::basic_string<>::append
                  ((basic_string<> *)local_44,"No means of power generation.\n",0x1e);
        pLVar16 = extraout_ECX_00;
      }
      LogSystem::addLogLine(pLVar16,*(LogPriority *)(this + 0x224),&DAT_00000004);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pnVar19 = (nothrow_t *)(local_30 + 1);
        pvVar15 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar19) {
          pvVar15 = *(void **)((int)local_44[0] + -4);
          pnVar19 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) {
LAB_00510cd8:
            local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar19);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
    if (((*(int *)(this + 0x44) != 0) &&
        (iVar9 = *(int *)(*(int *)(this + 0x44) + 0x124), iVar9 != 0)) &&
       (*(char *)(iVar9 + 0x114) != '\0')) {
      if (g_gameLogic[0x70] == (GameLogic)0x0) {
        if ((g_gameLogic[0x72] != (GameLogic)0x0) &&
           (pLVar16 = *(LogSystem **)(g_gameData + 0xd0), this != (Ship *)pLVar16)) {
          LogSystem::addLogLine(pLVar16,*(LogPriority *)(pLVar16 + 0x224),&DAT_00000004);
        }
      }
      else {
        pNVar10 = Singleton<>::getInstance();
        pSVar22 = (Ship *)0x0;
        piVar17 = *(int **)(pNVar10 + 0x3c);
        local_4c = (Ship *)((uint)((int)*(int **)(pNVar10 + 0x40) + (3 - (int)piVar17)) >> 2);
        if (*(int **)(pNVar10 + 0x40) < piVar17) {
          local_4c = (Ship *)0x0;
        }
        if (local_4c != (Ship *)0x0) {
          do {
            pLVar16 = *(LogSystem **)(*piVar17 + 100);
            if ((pLVar16 != (LogSystem *)0x0) && (pLVar16 != (LogSystem *)this)) {
              LogSystem::addLogLine(pLVar16,*(LogPriority *)(pLVar16 + 0x224),&DAT_00000004);
            }
            pSVar22 = pSVar22 + 1;
            piVar17 = piVar17 + 1;
          } while (pSVar22 != local_4c);
        }
      }
    }
    if (((this[0x234] == (Ship)0x0) && (local_50 != (Ship *)0x0)) && (local_50[0x234] != (Ship)0x0))
    {
      local_54 = &stack0xffffff7c;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"ships_disabled",0xe);
      local_8 = 1;
      pSVar11 = Singleton<Stats>::getInstance();
      local_8 = 0xffffffff;
      Stats::addStat(pSVar11);
      local_54 = &stack0xffffff78;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"",0);
      local_4c = local_a0;
      local_8 = 2;
      local_a0[0] = (Ship)0x0;
      uStack_ac = 0x510e7c;
      std::basic_string<>::assign((basic_string<> *)local_a0,"ships_disabled",0xe);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_b8[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_b8,"play",4);
      local_8 = 0xffffffff;
      Analytics::logEvent();
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)(this + 0x238))
    ;
    local_8 = 4;
    std::transform<>();
    local_48 = &stack0xffffff78;
    uStack_98 = 0x510f1b;
    strUsingArgs(&stack0xffffff78);
    local_8._0_1_ = 5;
    pFVar12 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,4);
    FlagManager::setFlag(pFVar12);
    debugPrint("GAME","%s: I have just been disabled.");
    puVar23 = (undefined1 *)0x0;
    local_4c = *(Ship **)(g_gameData + 0x130);
    local_54 = (undefined1 *)(*(int *)(g_gameData + 0x134) - (int)local_4c >> 2);
    if (local_54 != (undefined1 *)0x0) {
      do {
        iVar9 = *(int *)(local_4c + (int)puVar23 * 4);
        pcVar25 = (char *)(iVar9 + 0x34);
        if (0xf < *(uint *)(iVar9 + 0x48)) {
          pcVar25 = *(char **)(iVar9 + 0x34);
        }
        bVar3 = std::_Traits_equal<>(pcVar25,*(uint *)(iVar9 + 0x44),pcVar6,unaff_EDI);
        if (bVar3) {
          Singleton<>::getInstance();
          BountyManager::completeBounty(this_01,*(Bounty **)(local_4c + (int)puVar23 * 4));
          break;
        }
        puVar23 = puVar23 + 1;
      } while (puVar23 < local_54);
    }
    pGVar18 = g_gameData;
    piVar17 = (int *)(*(int *)(g_gameData + 0xcc) + 0x3a0 + *(int *)(this + 100) * 4);
    *piVar17 = *piVar17 + -1;
    if (*(int *)(this + 100) != 0) {
      iVar9 = *(int *)(pGVar18 + 0xcc);
      pcVar25 = (char *)(iVar9 + 0x84);
      if (0xf < *(uint *)(iVar9 + 0x98)) {
        pcVar25 = *(char **)(iVar9 + 0x84);
      }
      bVar3 = std::_Traits_equal<>(pcVar25,*(uint *)(iVar9 + 0x94),pcVar6,unaff_EDI);
      if (bVar3) {
        debugPrint("GAME","%s: I was the priority target for team %d");
        pGVar18 = g_gameData;
        piVar17 = (int *)(*(int *)(g_gameData + 0xcc) + 0x3ac + *(int *)(this + 100) * 4);
        *piVar17 = *piVar17 + -1;
        Scenario::checkCompletionStates(*(Scenario **)(pGVar18 + 0xcc));
        Scenario::messageScenarioState(*(Scenario **)(g_gameData + 0xcc));
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pLVar16 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pLVar16 = *(LogSystem **)(local_2c[0] + -4);
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        if ((LogSystem *)0x1f < local_2c[0] + (-4 - (int)pLVar16)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pLVar16,pnVar19);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (LogSystem *)((uint)local_2c[0] & 0xffffff00);
  }
  if ((*(char *)(*(int *)(g_gameData + 0xcc) + 0x374) != '\0') &&
     (bVar3 = isDisabled(this,false), !bVar3)) {
    (**(code **)(*(int *)this + 0x20))();
  }
  cVar4 = (**(code **)(*(int *)this + 0x20))();
  pSVar22 = local_50;
  if (((cVar4 != '\0') && (param_3 == 0)) &&
     ((this[0x234] == (Ship)0x0 && (local_50 == *(Ship **)(g_gameData + 0xd0))))) {
    local_48 = &stack0xffffff78;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"has_destroyed_ship",0x12);
    local_8 = 6;
    pFVar12 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar12);
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)(this + 0x238))
    ;
    local_8 = 7;
    std::transform<>();
    uStack_98 = 0x5111d7;
    local_48 = &stack0xffffff78;
    strUsingArgs(&stack0xffffff78);
    local_8._0_1_ = 8;
    pFVar12 = Singleton<>::getInstance();
    local_8._0_1_ = 7;
    FlagManager::setFlag(pFVar12);
    if (((this[0x234] == (Ship)0x0) && (pSVar22 != (Ship *)0x0)) && (pSVar22[0x234] != (Ship)0x0)) {
      local_48 = &stack0xffffff7c;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"ships_destroyed",0xf);
      local_8._0_1_ = 9;
      pSVar11 = Singleton<Stats>::getInstance();
      local_8._0_1_ = 7;
      Stats::addStat(pSVar11);
      local_48 = &stack0xffffff78;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"",0);
      local_54 = local_a0;
      local_8._0_1_ = 10;
      local_a0[0] = (Ship)0x0;
      uStack_ac = 0x511299;
      std::basic_string<>::assign((basic_string<> *)local_a0,"ships_destroyed",0xf);
      local_8._0_1_ = 0xb;
      local_b8[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_b8,"play",4);
      local_8 = CONCAT31(local_8._1_3_,7);
      Analytics::logEvent();
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pLVar16 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pLVar16 = *(LogSystem **)(local_2c[0] + -4);
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        if ((LogSystem *)0x1f < local_2c[0] + (-4 - (int)pLVar16)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pLVar16,pnVar19);
    }
  }
  cVar4 = (**(code **)(*(int *)this + 0x24))();
  if (cVar4 == '\0') {
LAB_0051140c:
    if (this[0x234] != (Ship)0x0) goto LAB_00511415;
LAB_00511441:
    puVar23 = (undefined1 *)0x0;
    local_4c = *(Ship **)(g_gameData + 0x130);
    local_54 = (undefined1 *)(*(int *)(g_gameData + 0x134) - (int)local_4c >> 2);
    if (local_54 != (undefined1 *)0x0) {
      do {
        iVar9 = *(int *)(local_4c + (int)puVar23 * 4);
        pcVar25 = (char *)(iVar9 + 0x34);
        if (0xf < *(uint *)(iVar9 + 0x48)) {
          pcVar25 = *(char **)(iVar9 + 0x34);
        }
        bVar3 = std::_Traits_equal<>(pcVar25,*(uint *)(iVar9 + 0x44),pcVar6,unaff_EDI);
        if (bVar3) {
          Singleton<>::getInstance();
          BountyManager::completeBounty(this_02,*(Bounty **)(local_4c + (int)puVar23 * 4));
          break;
        }
        puVar23 = puVar23 + 1;
      } while (puVar23 < local_54);
    }
  }
  else {
    if (this[0x234] == (Ship)0x0) {
      if (pSVar22 == *(Ship **)(g_gameData + 0xd0)) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)local_2c,(basic_string<> *)(this + 0x238));
        local_8 = 0xc;
        std::transform<>();
        local_48 = &stack0xffffff78;
        uStack_98 = 0x5113a6;
        strUsingArgs(&stack0xffffff78);
        local_8._0_1_ = 0xd;
        pFVar12 = Singleton<>::getInstance();
        local_8 = CONCAT31(local_8._1_3_,0xc);
        FlagManager::setFlag(pFVar12);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pnVar19 = (nothrow_t *)(local_18 + 1);
          pLVar16 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar19) {
            pLVar16 = *(LogSystem **)(local_2c[0] + -4);
            pnVar19 = (nothrow_t *)(local_18 + 0x24);
            if ((LogSystem *)0x1f < local_2c[0] + (-4 - (int)pLVar16)) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pLVar16,pnVar19);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (LogSystem *)((uint)local_2c[0] & 0xffffff00);
      }
      goto LAB_0051140c;
    }
LAB_00511415:
    if (((param_3 != 2) && (param_3 != 4)) && (param_3 != 0)) goto LAB_00511441;
    if (80.0 <= (float)local_58) {
      damageConsole(this);
    }
  }
  cVar4 = (**(code **)(*(int *)this + 0x20))();
  pGVar18 = g_gameData;
  if (cVar4 == '\0') {
    if (this == *(Ship **)(g_gameData + 0xd0)) {
      iVar9 = *(int *)(g_gameData + 0xcc);
      pcVar25 = (char *)(iVar9 + 0x84);
      if (0xf < *(uint *)(iVar9 + 0x98)) {
        pcVar25 = *(char **)pcVar25;
      }
      bVar3 = std::_Traits_equal<>(pcVar25,*(uint *)(iVar9 + 0x94),pcVar6,unaff_EDI);
      if (bVar3) {
        LogSystem::addLogLine(this_04,*(LogPriority *)(this + 0x224),(char *)0x3);
      }
    }
    if (this[0x234] == (Ship)0x0) goto LAB_00511ba6;
    if (param_3 == 1) {
      iVar9 = -1;
      SVar26 = 2;
      pSVar22 = this;
      pSVar13 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar13,pSVar22,SVar26,iVar9);
      local_48 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)(this + 0x238));
      local_8 = 0x10;
      pPVar14 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar14);
      iVar9 = rand();
      iVar9 = (iVar9 % 6) * 2 + 2;
      pPVar14 = Singleton<>::getInstance();
      PresentationInterface::flicker(pPVar14,iVar9);
      goto LAB_00511ba6;
    }
    if (param_3 == 3) {
      iVar9 = rand();
      iVar9 = iVar9 % 3 + 1;
      SVar26 = 0x1e;
      pSVar22 = this;
      pSVar13 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar13,pSVar22,SVar26,iVar9);
      local_48 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)(this + 0x238));
      local_8 = 0x11;
      pPVar14 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar14);
      uVar27 = rand();
      uVar27 = uVar27 & 0x80000001;
      if ((int)uVar27 < 0) {
        uVar27 = uVar27 - 1 | 0xfffffffe;
LAB_00511b4a:
        uVar27 = uVar27 + 1;
      }
    }
    else if (param_3 == 4) {
      iVar9 = rand();
      iVar9 = iVar9 % 3 + 1;
      SVar26 = 0x1e;
      pSVar22 = this;
      pSVar13 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar13,pSVar22,SVar26,iVar9);
      iVar9 = rand();
      iVar9 = iVar9 % 3 + 1;
      SVar26 = 0x1f;
      pSVar22 = this;
      pSVar13 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar13,pSVar22,SVar26,iVar9);
      local_48 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)(this + 0x238));
      local_8 = 0x12;
      pPVar14 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar14);
      uVar27 = rand();
      uVar27 = uVar27 & 0x80000003;
      if ((int)uVar27 < 0) {
        uVar27 = uVar27 - 1 | 0xfffffffc;
        goto LAB_00511b4a;
      }
    }
    else if (param_3 == 2) {
      iVar9 = rand();
      iVar9 = iVar9 % 3 + 1;
      SVar26 = 0x1f;
      pSVar22 = this;
      pSVar13 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar13,pSVar22,SVar26,iVar9);
      local_48 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)(this + 0x238));
      local_8 = 0x13;
      pPVar14 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar14);
      uVar27 = rand();
      uVar27 = uVar27 & 0x80000001;
      if ((int)uVar27 < 0) {
        uVar27 = uVar27 - 1 | 0xfffffffe;
        goto LAB_00511b4a;
      }
    }
    else {
      if (param_3 != 0) {
        if (param_3 == 5) {
          local_48 = &stack0xffffff7c;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)(this + 0x238));
          local_8 = 0x15;
          pPVar14 = Singleton<>::getInstance();
          local_8 = 0xffffffff;
          PresentationInterface::addShake(pPVar14);
        }
        goto LAB_00511ba6;
      }
      iVar9 = -1;
      SVar26 = 2;
      pSVar22 = this;
      pSVar13 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar13,pSVar22,SVar26,iVar9);
      local_48 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)(this + 0x238));
      local_8 = 0x14;
      pPVar14 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar14);
      uVar27 = rand();
      uVar27 = uVar27 & 0x80000007;
      if ((int)uVar27 < 0) {
        uVar27 = uVar27 - 1 | 0xfffffff8;
        goto LAB_00511b4a;
      }
    }
    iVar9 = uVar27 * 2 + 2;
    pPVar14 = Singleton<>::getInstance();
    PresentationInterface::flicker(pPVar14,iVar9);
    goto LAB_00511ba6;
  }
  uVar27 = 0;
  this[0xd8] = (Ship)0x1;
  iVar9 = *(int *)(pGVar18 + 0xd8);
  piVar17 = (int *)(iVar9 + 0xcc);
  if (*(int *)(iVar9 + 0xd0) - *piVar17 >> 2 != 0) {
    do {
      local_48 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,
                 (basic_string<> *)(*(int *)(*piVar17 + uVar27 * 4) + 0x238));
      local_8 = 0xe;
      pNVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      bVar3 = NetworkServer::shipHasConnectedClient(pNVar10);
      if (bVar3) {
        strUsingArgs((char *)local_2c);
        local_8 = 0xf;
        pLVar16 = (LogSystem *)local_2c;
        if (0xf < local_18) {
          pLVar16 = local_2c[0];
        }
        LogSystem::addLogLine
                  (pLVar16,*(LogPriority *)
                            (*(int *)(uVar27 * 4 + *(int *)(*(int *)(g_gameData + 0xd8) + 0xcc)) +
                            0x224),(char *)0x3);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pnVar19 = (nothrow_t *)(local_18 + 1);
          pLVar16 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar19) {
            pLVar16 = *(LogSystem **)(local_2c[0] + -4);
            pnVar19 = (nothrow_t *)(local_18 + 0x24);
            if ((LogSystem *)0x1f < local_2c[0] + (-4 - (int)pLVar16)) goto LAB_00510cd8;
          }
          operator_delete(pLVar16,pnVar19);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (LogSystem *)((uint)local_2c[0] & 0xffffff00);
      }
      uVar27 = uVar27 + 1;
      piVar17 = (int *)(*(int *)(g_gameData + 0xd8) + 0xcc);
      pGVar18 = g_gameData;
    } while (uVar27 < (uint)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xd0) - *piVar17 >> 2));
  }
  *(undefined4 *)(pGVar18 + 0x1e8) = *(undefined4 *)(pGVar18 + 0x1e4);
  local_58 = (MetaGameAction *)0x0;
  do {
    pMVar21 = local_58;
    iVar9 = getDamageAmountForHullSection(this,(HullLocation)local_58);
    pGVar18 = g_gameData;
    if (99 < iVar9) {
      ppMVar1 = *(MetaGameAction ***)(g_gameData + 0x1e8);
      if (*(MetaGameAction ***)(g_gameData + 0x1ec) == ppMVar1) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(g_gameData + 0x1e4),ppMVar1,&local_58);
        pMVar21 = local_58;
      }
      else {
        *ppMVar1 = pMVar21;
        *(int *)(pGVar18 + 0x1e8) = *(int *)(pGVar18 + 0x1e8) + 4;
      }
    }
    pSVar22 = local_50;
    local_58 = pMVar21 + 1;
  } while ((int)local_58 < 5);
  if (local_50 == (Ship *)0x0) {
    pcVar6 = "";
    uVar27 = 0;
LAB_005116ba:
    std::basic_string<>::assign((basic_string<> *)(g_gameData + 0x1cc),pcVar6,uVar27);
    this_03 = extraout_ECX_01;
  }
  else {
    this_03 = *(GameLogic **)(local_50 + 0x254);
    bVar3 = false;
    if (this_03 != (GameLogic *)0x0) {
      bVar3 = *(int *)(this_03 + 0x158) == 4;
    }
    pSVar2 = local_50;
    if ((!bVar3) || (pSVar2 = *(Ship **)(local_50 + 0x39c), pSVar2 != (Ship *)0x0)) {
      pcVar6 = (char *)(pSVar2 + 8);
      this_03 = (GameLogic *)(g_gameData + 0x1cc);
      if (this_03 != (GameLogic *)pcVar6) {
        if (0xf < *(uint *)(pSVar2 + 0x1c)) {
          pcVar6 = *(char **)pcVar6;
        }
        uVar27 = *(uint *)(pSVar2 + 0x18);
        goto LAB_005116ba;
      }
    }
  }
  bVar3 = GameLogic::hasPassenger(this_03);
  pGVar18 = g_gameData;
  if (bVar3) {
    g_gameData[0x1c7] = (GameData)0x1;
  }
  if ((g_gameLogic[0x72] != (GameLogic)0x0) && (this[0x234] != (Ship)0x0)) {
    *(undefined4 *)g_gameLogic = 2;
  }
  this_00 = (basic_string<> *)(pGVar18 + 0x17c);
  pbVar20 = (basic_string<> *)(this + 8);
  if (this_00 != pbVar20) {
    if (0xf < *(uint *)(this + 0x1c)) {
      pbVar20 = *(basic_string<> **)pbVar20;
    }
    std::basic_string<>::assign(this_00,(char *)pbVar20,*(uint *)(this + 0x18));
    pGVar18 = g_gameData;
  }
  iVar9 = *(int *)(this + 0x254);
  pbVar20 = (basic_string<> *)(iVar9 + 0x48);
  if ((basic_string<> *)(pGVar18 + 0x194) != pbVar20) {
    if (0xf < *(uint *)(iVar9 + 0x5c)) {
      pbVar20 = *(basic_string<> **)pbVar20;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(pGVar18 + 0x194),(char *)pbVar20,*(uint *)(iVar9 + 0x58));
    iVar9 = *(int *)(this + 0x254);
    pGVar18 = g_gameData;
  }
  pbVar20 = (basic_string<> *)(iVar9 + 0x30);
  if ((basic_string<> *)(pGVar18 + 0x1ac) != pbVar20) {
    if (0xf < *(uint *)(iVar9 + 0x44)) {
      pbVar20 = *(basic_string<> **)pbVar20;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(pGVar18 + 0x1ac),(char *)pbVar20,*(uint *)(iVar9 + 0x40));
    pGVar18 = g_gameData;
  }
  *(undefined4 *)(pGVar18 + 0x178) = *(undefined4 *)(this + 0x20);
  if (((pSVar22 != (Ship *)0x0) && (iVar9 = *(int *)(pSVar22 + 0x44), iVar9 != 0)) &&
     ((iVar9 = *(int *)(iVar9 + 0x70), iVar9 == 7 || (iVar9 == 8)))) {
    *(GameLogic *)(pGVar18 + 0x1c8) = (GameLogic)0x1;
  }
  GameLogic::writeObituary((GameLogic *)pGVar18);
  if (((*(int *)(this + 0x44) != 0) && (iVar9 = *(int *)(*(int *)(this + 0x44) + 0x124), iVar9 != 0)
      ) && (*(char *)(iVar9 + 0x114) != '\0')) {
    if (g_gameLogic[0x70] == (GameLogic)0x0) {
      if ((g_gameLogic[0x72] != (GameLogic)0x0) &&
         (pLVar16 = *(LogSystem **)(g_gameData + 0xd0), this != (Ship *)pLVar16)) {
        LogSystem::addLogLine(pLVar16,*(LogPriority *)(pLVar16 + 0x224),&DAT_00000004);
      }
    }
    else {
      pNVar10 = Singleton<>::getInstance();
      puVar23 = (undefined1 *)0x0;
      piVar17 = *(int **)(pNVar10 + 0x3c);
      local_54 = (undefined1 *)((uint)((int)*(int **)(pNVar10 + 0x40) + (3 - (int)piVar17)) >> 2);
      if (*(int **)(pNVar10 + 0x40) < piVar17) {
        local_54 = (undefined1 *)0x0;
      }
      if (local_54 != (undefined1 *)0x0) {
        do {
          pLVar16 = *(LogSystem **)(*piVar17 + 100);
          if ((pLVar16 != (LogSystem *)0x0) && (pLVar16 != (LogSystem *)this)) {
            LogSystem::addLogLine(pLVar16,*(LogPriority *)(pLVar16 + 0x224),&DAT_00000004);
          }
          puVar23 = puVar23 + 1;
          piVar17 = piVar17 + 1;
        } while (puVar23 != local_54);
      }
    }
  }
LAB_00511ba6:
  ExceptionList = local_10;
  uVar5 = __security_check_cookie((int)((uint)local_14 ^ (uint)&stack0xfffffffc));
  return (bool)uVar5;
}


// public: void __thiscall Ship::repairConsoleDamage(void)

void __thiscall Ship::repairConsoleDamage(Ship *this)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 *puVar7;
  
  debugPrint("GAME","Repaired player\'s console damage.");
  puVar7 = *(undefined4 **)(this + 0x228);
  puVar1 = *(undefined4 **)(this + 0x22c);
  do {
    if (puVar7 == puVar1) {
      *(undefined4 *)(this + 0x22c) = *(undefined4 *)(this + 0x228);
      return;
    }
    piVar2 = (int *)*puVar7;
    if (piVar2 != (int *)0x0) {
      uVar3 = piVar2[5];
      if (0xf < uVar3) {
        pvVar4 = (void *)*piVar2;
        pnVar6 = (nothrow_t *)(uVar3 + 1);
        pvVar5 = pvVar4;
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)pvVar4 + -4);
          pnVar6 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar6);
      }
      piVar2[4] = 0;
      piVar2[5] = 0xf;
      *(undefined1 *)piVar2 = 0;
      operator_delete(piVar2,(nothrow_t *)&DAT_00000028);
    }
    puVar7 = puVar7 + 1;
  } while( true );
}


// public: void __thiscall Ship::damageConsole(void)

void __thiscall Ship::damageConsole(Ship *this)

{
  int iVar1;
  MetaGameAction **ppMVar2;
  MetaGameAction *pMVar3;
  bool bVar4;
  char *pcVar5;
  ConsoleDamage *pCVar6;
  PresentationInterface *extraout_ECX;
  PresentationInterface *this_00;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  uint unaff_EDI;
  uint uVar11;
  nothrow_t *pnVar12;
  basic_string<> abStack_6c [8];
  undefined4 uStack_64;
  Vec3 local_44 [8];
  float local_3c;
  MetaGameAction *local_34;
  PresentationInterface *local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3864;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  this_00 = (PresentationInterface *)this;
  local_14 = pcVar5;
  if (Singleton<>::instance == (PresentationInterface *)0x0) {
    local_30 = operator_new(0x418);
    local_8 = 0;
    Singleton<>::instance =
         (PresentationInterface *)PresentationInterface::PresentationInterface(local_30);
    this_00 = extraout_ECX;
  }
  local_8 = 0xffffffff;
  PresentationInterface::getConsoleToDamage(this_00);
  uVar11 = local_18;
  pvVar9 = local_2c[0];
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  bVar4 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
  if (!bVar4) {
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)local_2c);
    pCVar6 = getConsoleDamage(this);
    pvVar9 = local_2c[0];
    uVar11 = local_18;
    if (pCVar6 == (ConsoleDamage *)0x0) {
      pCVar6 = operator_new(0x28);
      local_8._0_1_ = 2;
      local_30 = (PresentationInterface *)pCVar6;
      std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)local_2c);
      local_34 = (MetaGameAction *)ConsoleDamage::ConsoleDamage(pCVar6);
      local_8._0_1_ = 1;
      ppMVar2 = *(MetaGameAction ***)(this + 0x22c);
      if (*(MetaGameAction ***)(this + 0x230) == ppMVar2) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x228),ppMVar2,&local_34);
      }
      else {
        *ppMVar2 = local_34;
        *(int *)(this + 0x22c) = *(int *)(this + 0x22c) + 4;
      }
      local_34 = (MetaGameAction *)Singleton<>::instance;
      if (Singleton<>::instance == (PresentationInterface *)0x0) {
        local_30 = operator_new(0x418);
        local_8._0_1_ = 3;
        Singleton<>::instance =
             (PresentationInterface *)PresentationInterface::PresentationInterface(local_30);
        local_8._0_1_ = 1;
      }
      iVar8 = *(int *)(Singleton<>::instance + 0x2d4);
      uVar11 = 0;
      piVar7 = (int *)(iVar8 + 0x90);
      local_34 = (MetaGameAction *)Singleton<>::instance;
      if (*(int *)(iVar8 + 0x94) - *(int *)(iVar8 + 0x90) >> 2 != 0) {
        do {
          local_30 = (PresentationInterface *)*piVar7;
          iVar1 = uVar11 * 4;
          if ((*(char *)(*(int *)(local_30 + iVar1) + 0xfe) != '\0') &&
             (bVar4 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI), !bVar4)) {
            std::basic_string<>::basic_string<>
                      (abStack_6c,(basic_string<> *)(*(int *)(local_30 + iVar1) + 0x58));
            local_30 = (PresentationInterface *)getConsoleDamage(ShipData::currentlyBoardedShip);
            pMVar3 = local_34;
            if (local_30 == (PresentationInterface *)0x0) break;
            cocos2d::Vec3::Vec3(local_44,(Vec3 *)(*(int *)(*(int *)(*(int *)(local_34 + 0x2d4) +
                                                                   0x90) + iVar1) + 0x2fc));
            local_8._0_1_ = 4;
            local_3c = (float)*(int *)(local_30 + 0x24) + local_3c;
            (**(code **)(**(int **)(*(int *)(iVar1 + *(int *)(*(int *)(pMVar3 + 0x2d4) + 0x90)) +
                                   0x3dc) + 0xc4))();
            local_8._0_1_ = 1;
            cocos2d::Vec3::~Vec3(local_44);
            iVar8 = *(int *)(pMVar3 + 0x2d4);
          }
          piVar7 = (int *)(iVar8 + 0x90);
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)(*(int *)(iVar8 + 0x94) - *piVar7 >> 2));
      }
      uStack_64 = 0x511eef;
      debugPrint("GAME","Damaged player\'s %s console.");
      pvVar9 = local_2c[0];
      uVar11 = local_18;
    }
  }
  if (0xf < uVar11) {
    pnVar12 = (nothrow_t *)(uVar11 + 1);
    pvVar10 = pvVar9;
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)pvVar9 + -4);
      pnVar12 = (nothrow_t *)(uVar11 + 0x24);
      if (0x1f < (uint)((int)pvVar9 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class ConsoleDamage * __thiscall Ship::getConsoleDamage(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ConsoleDamage * __thiscall Ship::getConsoleDamage(Ship *this,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  ConsoleDamage *pCVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(this + 0x228);
  uVar6 = *(int *)(this + 0x22c) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pCVar8 = *(ConsoleDamage **)(iVar1 + uVar7 * 4);
        goto LAB_00511fa8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pCVar8 = (ConsoleDamage *)0x0;
LAB_00511fa8:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return pCVar8;
}


// public: int __thiscall Ship::getValue(void)

int __thiscall Ship::getValue(Ship *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  iVar6 = *(int *)(*(int *)(this + 0x254) + 0xd8);
  iVar1 = getHullDamagePercent(this);
  fVar8 = (100.0 - (float)iVar1) / 100.0;
  if (fVar8 < 1.0) {
    iVar6 = (int)((float)(iVar6 / 5) * fVar8 + (float)(iVar6 - iVar6 / 5));
  }
  uVar7 = 0;
  iVar1 = *(int *)(*(int *)(this + 0x40) + 0x3c);
  uVar5 = *(int *)(*(int *)(this + 0x40) + 0x40) - iVar1 >> 2;
  if (uVar5 != 0) {
    do {
      iVar2 = ShipModule::getValue(*(ShipModule **)(iVar1 + uVar7 * 4));
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + iVar2;
    } while (uVar7 < uVar5);
  }
  iVar1 = 0xe;
  piVar4 = (int *)(*(int *)(this + 0x1f8) + 0xc);
  do {
    iVar2 = *piVar4;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = 0xfa;
      if (*(char *)(iVar2 + 1) == '\0') {
        iVar3 = 100;
      }
      if (*(char *)(iVar2 + 2) != '\0') {
        iVar3 = iVar3 + 0xfa;
      }
    }
    iVar6 = iVar6 + iVar3;
    piVar4 = piVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return iVar6;
}


// public: bool __thiscall Ship::hasCargo(void)

bool __thiscall Ship::hasCargo(Ship *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(this + 0x1f8) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(this + 0x254) + 0xe4)) {
      piVar2 = (int *)(*(int *)(this + 0x1f8) + 0xc);
      do {
        iVar1 = *piVar2;
        if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) && (0 < *(int *)(iVar1 + 8))) {
          return true;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(*(int *)(this + 0x254) + 0xe4));
    }
  }
  return false;
}


// public: bool __thiscall Ship::hasEmptyPodSlot(void)

bool __thiscall Ship::hasEmptyPodSlot(Ship *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(this + 0x254) + 0xe4)) {
    piVar3 = (int *)(*(int *)(this + 0x1f8) + 0xc);
    do {
      if ((iVar2 < 0) ||
         (((iVar1 = *(int *)(*(int *)(this + 0x1f8) + 8), 0 < iVar1 && (iVar1 <= iVar2)) ||
          (*piVar3 == 0)))) {
        return true;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(*(int *)(this + 0x254) + 0xe4));
  }
  return false;
}


// public: int __thiscall Ship::getNextEmptyCargoPod(void)

int __thiscall Ship::getNextEmptyCargoPod(Ship *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x1f8);
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar2 = 0xc;
    do {
      if (*(int *)(*(int *)(this + 0x254) + 0xe4) <= iVar3) {
        return -1;
      }
      if ((iVar2 < 0xc) ||
         (((0 < *(int *)(iVar1 + 8) && (*(int *)(iVar1 + 8) <= iVar3)) ||
          (*(int *)(iVar2 + iVar1) == 0)))) {
        return iVar3;
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar2 < 0x44);
  }
  return -1;
}


// public: void __thiscall Ship::setDocked(class Ship *,bool,bool)

void __thiscall Ship::setDocked(Ship *this,Ship *param_1,bool param_2,bool param_3)

{
  int iVar1;
  GameData *pGVar2;
  bool bVar3;
  CommsManager *this_00;
  PrivateCommsManager *this_01;
  SoundEngine *this_02;
  PresentationInterface *pPVar4;
  TradeEngine *this_03;
  Stats *pSVar5;
  NPCShipManager *pNVar6;
  Pather *pPVar7;
  int *extraout_ECX;
  int *piVar8;
  void *pvVar9;
  GameLogic *this_04;
  PresentationInterface *this_05;
  SaveHandler *this_06;
  nothrow_t *pnVar10;
  uint uVar11;
  basic_string<> abStack_90 [12];
  undefined4 uStack_84;
  basic_string<> abStack_78 [12];
  undefined4 uStack_6c;
  basic_string<> abStack_5c [8];
  undefined4 uStack_54;
  int *piStack_50;
  Ship *pSVar12;
  Sound SVar13;
  int iVar14;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c38f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this[0x234] != (Ship)0x0) {
    this_00 = Singleton<>::getInstance();
    CommsManager::reset(this_00);
    this_01 = Singleton<>::getInstance();
    pGVar2 = g_gameData;
    *(undefined4 *)(this_01 + 0x6c) = 0;
    *(undefined4 *)(this_01 + 0x70) = 0;
    *(undefined4 *)(this_01 + 0x8c) = 0;
    *(undefined4 *)(this_01 + 0x90) = 0;
    *(undefined4 *)(this_01 + 0xc) = 0;
    *(undefined4 *)(*(int *)(pGVar2 + 0xd0) + 0x374) = 0;
    PrivateCommsManager::render(this_01,true,true);
  }
  clearSensorData(this);
  piVar8 = extraout_ECX;
  if (!param_3) {
    uVar11 = 0;
    piVar8 = (int *)(*(int *)(this + 0x40) + 0x3c);
    this[0xe4] = (Ship)0x0;
    if (*(int *)(*(int *)(this + 0x40) + 0x40) - *piVar8 >> 2 != 0) {
      do {
        ShipModule::connect(*(ShipModule **)(*(int *)(*(int *)(this + 0x40) + 0x3c) + uVar11 * 4),
                            this);
        uVar11 = uVar11 + 1;
        piVar8 = (int *)(*(int *)(this + 0x40) + 0x3c);
      } while (uVar11 < (uint)(*(int *)(*(int *)(this + 0x40) + 0x40) - *piVar8 >> 2));
    }
  }
  if (!param_2) {
    iVar14 = -1;
    SVar13 = 4;
    uStack_54 = 0x5122b9;
    piStack_50 = piVar8;
    pSVar12 = this;
    this_02 = Singleton<>::getInstance();
    piStack_50 = (int *)0x5122c3;
    SoundEngine::playSound(this_02,pSVar12,SVar13,iVar14);
  }
  if (*(Ship **)(g_gameData + 0xd0) == this) {
    pPVar4 = Singleton<>::getInstance();
    iVar14 = *(int *)(pPVar4 + 0x2d4);
    if ((iVar14 != 0) && (ShipData::currentlyBoardedShip != (Ship *)0x0)) {
      *(undefined2 *)(pPVar4 + 0x3cc) = *(undefined2 *)(iVar14 + 0x8c);
      pPVar4[0x3ce] = *(PresentationInterface *)(iVar14 + 0x8e);
      bVar3 = cocos2d::Color3B::operator==((Color3B *)(pPVar4 + 0x3cf),(Color3B *)(pPVar4 + 0x3cc));
      if (!bVar3) {
        *(undefined4 *)(pPVar4 + 0x3c4) = 0;
        *(undefined4 *)(pPVar4 + 0x3c8) = 0x40000000;
        pPVar4[0x3c0] = (PresentationInterface)0x1;
      }
    }
  }
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(this + 0x270);
  *(Ship **)(this + 0x178) = param_1;
  (*(code *)**(undefined4 **)param_1)();
  *(undefined4 *)(this + 0xf8) = 2;
  *(undefined4 *)(this + 0xd4) = 3;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  iVar14 = *(int *)(*(int *)(*(SpaceStation **)(this + 0x178) + 0x254) + 0x158);
  if (((iVar14 == 1) || (iVar14 == 2)) || (iVar14 == 3)) {
    SpaceStation::dockShip(*(SpaceStation **)(this + 0x178),this);
    if (this[0x234] == (Ship)0x0) goto LAB_005126de;
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this_03 = operator_new(300);
      local_8 = 0;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this_03);
      local_8 = 0xffffffff;
    }
    TradeEngine::resetStates(Singleton<>::instance);
  }
  if (this[0x234] != (Ship)0x0) {
    if (!param_3) {
      iVar14 = *(int *)(this + 0x178);
      iVar1 = *(int *)(*(int *)(iVar14 + 0x254) + 0x158);
      if ((iVar1 == 1) || (iVar1 == 3)) {
        iVar1 = *(int *)(iVar14 + 0x390);
        if (iVar1 == 0) {
          piStack_50 = (int *)0x51242f;
          debugPrint("ERROR","Tried to add owed amount to station with no faction.");
        }
        else {
          *(float *)(iVar1 + 0xd0) = (float)*(int *)(iVar14 + 0x3dc) + *(float *)(iVar1 + 0xd0);
        }
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)local_30,(basic_string<> *)(iVar14 + 8));
        if (0xf < local_1c) {
          pnVar10 = (nothrow_t *)(local_1c + 1);
          pvVar9 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_30[0] + -4);
            pnVar10 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          piStack_50 = (int *)0x51248e;
          operator_delete(pvVar9,pnVar10);
        }
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        uStack_6c = 0x5124c5;
        strUsingArgs((char *)abStack_5c);
        local_8 = 1;
        if (Singleton<Stats>::instance == (Stats *)0x0) {
          pSVar5 = operator_new(0x58);
          local_8 = CONCAT31(local_8._1_3_,2);
          Singleton<Stats>::instance = (Stats *)Stats::Stats(pSVar5);
        }
        local_8 = 0xffffffff;
        Stats::setBinaryStat(Singleton<Stats>::instance);
        abStack_5c[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(abStack_5c,"times_docked",0xc);
        local_8 = 3;
        if (Singleton<Stats>::instance == (Stats *)0x0) {
          pSVar5 = operator_new(0x58);
          local_8 = CONCAT31(local_8._1_3_,4);
          Singleton<Stats>::instance = (Stats *)Stats::Stats(pSVar5);
        }
        local_8 = 0xffffffff;
        Stats::addStat(Singleton<Stats>::instance);
        piStack_50 = (int *)0x0;
        uStack_6c = 0x512592;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffa0,"",0);
        local_8 = 5;
        abStack_78[0] = (basic_string<>)0x0;
        uStack_84 = 0x5125be;
        std::basic_string<>::assign(abStack_78,"times_docked",0xc);
        local_8 = CONCAT31(local_8._1_3_,6);
        abStack_90[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(abStack_90,"play",4);
        local_8 = 0xffffffff;
        Analytics::logEvent();
        GameLogic::runPlayerDockLogic(this_04);
      }
    }
    iVar14 = *(int *)(*(int *)(this + 0x40) + 0xc);
    if ((iVar14 != 0) && (*(char *)(iVar14 + 0x62) != '\0')) {
      *(undefined1 *)(iVar14 + 0x62) = 0;
    }
    Singleton<>::getInstance();
    PresentationInterface::resetSpaceStationScreens(this_05);
    Sector::removeAllWeapons(*(Sector **)(this + 0x24));
    pNVar6 = Singleton<>::getInstance();
    *pNVar6 = (NPCShipManager)0x1;
    piStack_50 = (int *)0x512635;
    debugPrint("GAME","Removing all ships on next NPCShipManager cycle.");
    pPVar7 = Singleton<Pather>::instance;
    *(undefined4 *)(g_gameData + 0xd8) = *(undefined4 *)(this + 0x24);
    if (pPVar7 == (Pather *)0x0) {
      pPVar7 = operator_new(0x98);
      local_8 = 7;
      pPVar7 = (Pather *)Pather::Pather(pPVar7);
      local_8 = 0xffffffff;
      Singleton<Pather>::instance = pPVar7;
    }
    *(undefined4 *)(pPVar7 + 0x7c) = *(undefined4 *)(pPVar7 + 0x78);
    *(undefined4 *)(pPVar7 + 0x1c) = *(undefined4 *)(pPVar7 + 0x18);
    *(undefined4 *)(pPVar7 + 0x28) = *(undefined4 *)(pPVar7 + 0x24);
    *(undefined4 *)(pPVar7 + 0x34) = *(undefined4 *)(pPVar7 + 0x30);
    *(undefined4 *)(pPVar7 + 0x40) = *(undefined4 *)(pPVar7 + 0x3c);
    *(undefined4 *)(pPVar7 + 0x4c) = 0;
    PathContext::reset((PathContext *)(pPVar7 + 0x50));
    if (((g_gameLogic[4] == (GameLogic)0x0) && (!param_3)) &&
       ((iVar14 = *(int *)(*(int *)(param_1 + 0x254) + 0x158), iVar14 == 1 ||
        ((iVar14 == 2 || (iVar14 == 3)))))) {
      Singleton<>::getInstance();
      SaveHandler::saveGame(this_06);
    }
  }
LAB_005126de:
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  if (0.0 <= *(float *)(this + 0x58)) {
    *(undefined1 **)(this + 0x58) = &DAT_bf800000;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::dockWith(class Ship *,bool)

void __thiscall Ship::dockWith(Ship *this,Ship *param_1,bool param_2)

{
  LogSystem *this_00;
  uint uVar1;
  Ship *pSVar2;
  PresentationInterface *pPVar3;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  Weapon *extraout_ECX_01;
  Weapon *this_01;
  PresentationInterface *extraout_ECX_02;
  PresentationInterface *extraout_ECX_03;
  SaveHandler *this_02;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3922;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  clearSensorData(this);
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(this + 0x270);
  *(Ship **)(this + 0x178) = param_1;
  (*(code *)**(undefined4 **)param_1)(param_1,uVar1);
  *(undefined4 *)(this + 0xf8) = 1;
  *(undefined4 *)(this + 0xd4) = 3;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  this_01 = (Weapon *)extraout_ECX;
  if (this[0xe4] != (Ship)0x0) {
    if (this[0x234] == (Ship)0x0) {
      this[0xe4] = (Ship)0x0;
    }
    else {
      ShipInterface::doDeactivateEMCONMode(this,0,0,0);
      this_01 = (Weapon *)extraout_ECX_00;
    }
  }
  iVar4 = *(int *)(*(int *)(this + 0x40) + 0x20);
  if ((iVar4 != 0) && (*(int *)(*(int *)(iVar4 + 8) + 4) == 8)) {
    puVar5 = (undefined4 *)(iVar4 + 0x3c);
    iVar4 = 8;
    do {
      this_01 = (Weapon *)*puVar5;
      if ((this_01 != (Weapon *)0x0) && (this_01[0x3c4] != (Weapon)0x0)) {
        *puVar5 = 0;
        Sector::removeWeapon(*(Sector **)(this_01 + 0x24),this_01);
        this_01 = extraout_ECX_01;
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (this[0xe4] != (Ship)0x0) {
    this[0xe4] = (Ship)0x0;
  }
  if (this[0x234] != (Ship)0x0) {
    if (*(int *)(*(int *)(*(int *)(this + 0x178) + 0x254) + 0x158) == 1) {
      GameLogic::runPlayerDockLogic((GameLogic *)this_01);
    }
    this_00 = *(LogSystem **)(*(int *)(this + 0x40) + 0xc);
    if ((this_00 != (LogSystem *)0x0) && (this_00[0x62] != (LogSystem)0x0)) {
      this_00[0x62] = (LogSystem)0x0;
    }
    pSVar2 = param_1 + 8;
    if (0xf < *(uint *)(param_1 + 0x1c)) {
      pSVar2 = *(Ship **)pSVar2;
    }
    LogSystem::addLogLine
              (this_00,*(LogPriority *)(this + 0x224),&DAT_00000001,"Docking with %s",pSVar2);
    pPVar3 = extraout_ECX_02;
    if (Singleton<>::instance == (PresentationInterface *)0x0) {
      pPVar3 = operator_new(0x418);
      local_8 = 0;
      Singleton<>::instance =
           (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar3);
      local_8 = 0xffffffff;
      pPVar3 = extraout_ECX_03;
    }
    PresentationInterface::resetSpaceStationScreens(pPVar3);
    iVar4 = *(int *)(*(int *)(param_1 + 0x254) + 0x158);
    if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
      Singleton<>::getInstance();
      SaveHandler::saveGame(this_02);
    }
  }
  fVar6 = (float)*(int *)(*(int *)(*(int *)(this + 0x178) + 0x254) + 0x15c);
  *(float *)(this + 0x108) = fVar6;
  *(float *)(this + 0x10c) = fVar6;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::undock(bool)

void __thiscall Ship::undock(Ship *this,bool param_1)

{
  int iVar1;
  SpaceStation *this_00;
  void *pvVar2;
  void *pvVar3;
  FlagManager *pFVar4;
  DockingRequest *pDVar5;
  undefined4 *puVar6;
  SaveHandler *this_01;
  ModuleType extraout_ECX;
  ModuleType MVar7;
  allocator<> *unaff_EDI;
  float fVar8;
  basic_string<> local_4c [12];
  undefined4 uStack_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3948;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Destroy_range<>
            ((basic_string<> *)this,(basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc),
             unaff_EDI);
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(this + 0x35c);
  if (this[0x325] != (Ship)0x0) {
    this[0x325] = (Ship)0x0;
  }
  MVar7 = *(ModuleType *)(this + 0x178);
  if (((MVar7 != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) &&
     ((iVar1 = *(int *)(*(int *)(MVar7 + 0x254) + 0x158), iVar1 == 1 ||
      ((iVar1 == 2 || (iVar1 == 3)))))) {
    Singleton<>::getInstance();
    SaveHandler::saveGame(this_01);
    MVar7 = extraout_ECX;
  }
  if (this[0xe4] == (Ship)0x0) {
    SystemManager::connectModulesOfType(*(SystemManager **)(this + 0x40),MVar7);
  }
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(this + 0x270);
  if (this[0x234] != (Ship)0x0) {
    if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x314) != '\0') {
      debugPrint("GAME","resetting NPC positions.");
      GameLogic::resetSyntheticInstances(g_gameLogic);
      GameLogic::resetShipsInScenario(g_gameLogic,false);
    }
    local_4c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_4c,"is_docked",9);
    local_8 = 0;
    pFVar4 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar4);
  }
  this_00 = *(SpaceStation **)(this + 0x178);
  iVar1 = *(int *)(*(int *)(this_00 + 0x254) + 0x158);
  if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) && (*(int *)(this_00 + 0x3dc) != 0)) {
    pDVar5 = SpaceStation::getDockingRequest(this_00,this);
    if (pDVar5 != (DockingRequest *)0x0) {
      pvVar2 = *(void **)(this_00 + 0x3c8);
      puVar6 = (undefined4 *)std::remove<>();
      pvVar3 = (void *)*puVar6;
      if (pvVar3 != pvVar2) {
        iVar1 = *(int *)(this_00 + 0x3c8);
        uStack_40 = 0x512acc;
        memmove(pvVar3,pvVar2,iVar1 - (int)pvVar2);
        *(int *)(this_00 + 0x3c8) = (iVar1 - (int)pvVar2) + (int)pvVar3;
      }
    }
    operator_delete(pDVar5,(nothrow_t *)0xc);
    if (this[0x234] != (Ship)0x0) {
      if (*(TradeLocation **)(this_00 + 0x398) != (TradeLocation *)0x0) {
        TradeLocation::clearShipsForSale(*(TradeLocation **)(this_00 + 0x398));
        TradeLocation::resetAndRepopulate(*(TradeLocation **)(this_00 + 0x398));
      }
      SpaceStation::clearPassengers(this_00);
      SpaceStation::populatePassengers(this_00);
    }
  }
  if ((*(int *)(this + 0xf8) == 2) && (*(int *)(this + 0xd4) == 3)) {
    if (param_1) {
      *(undefined4 *)(this + 0xf8) = 0;
      *(undefined1 **)(this + 0x108) = &DAT_bf800000;
      *(undefined1 **)(this + 0x10c) = &DAT_bf800000;
      *(undefined4 *)(this + 0xd4) = 0;
      *(undefined4 *)(this + 0x2c0) = 0;
      *(undefined4 *)(this + 0x2c4) = 0;
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)(this + 0xf8) = 3;
    fVar8 = (float)*(int *)(*(int *)(*(int *)(this + 0x178) + 0x254) + 0x160);
    *(float *)(this + 0x108) = fVar8;
    *(float *)(this + 0x10c) = fVar8;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::detectsWeaponLaunchFiredAtIt(class Ship *)

void __thiscall Ship::detectsWeaponLaunchFiredAtIt(Ship *this,Ship *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FlagManager *pFVar3;
  word *pwVar4;
  void *pvVar5;
  uint uVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  basic_string<> abStack_88 [12];
  undefined4 uStack_7c;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &DAT_005c3988;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar6 = 0;
  piVar2 = *(int **)(this + 0x214);
  uVar8 = *(int *)(this + 0x218) - (int)piVar2 >> 2;
  puVar1 = &stack0xfffffffc;
  if (uVar8 != 0) {
    do {
      if (*(Ship **)(*piVar2 + 0x130) == param_1) {
        puVar1 = &stack0xfffffffc;
        if (*(float *)(*piVar2 + 0x40) <= 0.5) {
          uStack_7c = 0x512c85;
          strUsingArgs((char *)&local_3c);
          local_14 = 0;
          uStack_7c = 0x512cc2;
          std::transform<>();
          std::basic_string<>::basic_string<>(abStack_88,(basic_string<> *)&local_3c);
          local_14._0_1_ = 1;
          pFVar3 = Singleton<>::getInstance();
          local_14 = (uint)local_14._1_3_ << 8;
          FlagManager::setFlag(pFVar3);
          if (param_1[0x234] != (Ship)0x0) {
            uStack_7c = 0x512d1b;
            pwVar4 = (word *)strUsingArgs((char *)local_54);
            if ((word *)&local_3c != pwVar4) {
              word::~word((word *)&local_3c);
              local_3c = *(void **)pwVar4;
              uStack_38 = *(undefined4 *)(pwVar4 + 4);
              uStack_34 = *(undefined4 *)(pwVar4 + 8);
              uStack_30 = *(undefined4 *)(pwVar4 + 0xc);
              local_2c = *(undefined8 *)(pwVar4 + 0x10);
              *(undefined4 *)(pwVar4 + 0x10) = 0;
              *(undefined4 *)(pwVar4 + 0x14) = 0xf;
              *pwVar4 = (word)0x0;
            }
            if (0xf < local_40) {
              pnVar7 = (nothrow_t *)(local_40 + 1);
              pvVar5 = local_54[0];
              if ((nothrow_t *)0xfff < pnVar7) {
                pvVar5 = *(void **)((int)local_54[0] + -4);
                pnVar7 = (nothrow_t *)(local_40 + 0x24);
                if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar5,pnVar7);
            }
            uStack_7c = 0x512db9;
            std::transform<>();
            std::basic_string<>::basic_string<>(abStack_88,(basic_string<> *)&local_3c);
            local_14._0_1_ = 2;
            pFVar3 = Singleton<>::getInstance();
            local_14 = (uint)local_14._1_3_ << 8;
            FlagManager::setFlag(pFVar3);
          }
          puVar1 = puStack_20;
          if (0xf < local_2c._4_4_) {
            pnVar7 = (nothrow_t *)(local_2c._4_4_ + 1);
            pvVar5 = local_3c;
            if ((nothrow_t *)0xfff < pnVar7) {
              pvVar5 = *(void **)((int)local_3c + -4);
              pnVar7 = (nothrow_t *)(local_2c._4_4_ + 0x24);
              if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar5,pnVar7);
            puVar1 = puStack_20;
          }
        }
        break;
      }
      uVar6 = uVar6 + 1;
      piVar2 = piVar2 + 1;
      puVar1 = &stack0xfffffffc;
    } while (uVar6 < uVar8);
  }
  puStack_20 = puVar1;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: bool __thiscall Ship::isDocked(void)

bool __thiscall Ship::isDocked(Ship *this)

{
  if ((*(int *)(this + 0xd4) == 3) && (*(int *)(this + 0xf8) == 2)) {
    return true;
  }
  return false;
}


// public: bool __thiscall Ship::isUndocking(void)

bool __thiscall Ship::isUndocking(Ship *this)

{
  if ((*(int *)(this + 0xd4) == 3) && (*(int *)(this + 0xf8) == 3)) {
    return true;
  }
  return false;
}


// public: void __thiscall Ship::runDockLogic(float)

void __thiscall Ship::runDockLogic(Ship *this,float param_1)

{
  undefined4 *puVar1;
  PresentationInterface *this_00;
  LogSystem *extraout_ECX;
  LogSystem *this_01;
  float unaff_EDI;
  float fVar2;
  double dVar3;
  float in_XMM1_Da;
  float fVar4;
  float local_c;
  
  fVar2 = *(float *)(this + 0x108);
  if ((fVar2 == 0.0) && (*(int *)(this + 0xf8) != 2)) {
    *(undefined4 *)(this + 0xf8) = 2;
  }
  this_01 = (LogSystem *)this;
  if (*(int *)(this + 0xf8) != 3) {
    SystemManager::disconnectModulesOfType(*(SystemManager **)(this + 0x40),(ModuleType)this);
    fVar2 = *(float *)(this + 0x108);
    this_01 = extraout_ECX;
  }
  if ((0.0 < fVar2) && (*(float *)(this + 0x108) = fVar2 - in_XMM1_Da, fVar2 - in_XMM1_Da <= 0.0)) {
    if (*(int *)(this + 0xf8) == 1) {
      *(undefined4 *)(this + 0xf8) = 2;
      if (this[0x234] != (Ship)0x0) {
        puVar1 = (undefined4 *)(*(int *)(this + 0x178) + 8);
        if (0xf < *(uint *)(*(int *)(this + 0x178) + 0x1c)) {
          puVar1 = (undefined4 *)*puVar1;
        }
        LogSystem::addLogLine
                  (this_01,*(LogPriority *)(this + 0x224),&DAT_00000001,"Fully docked with %s",
                   puVar1);
      }
      setDocked(this,*(Ship **)(this + 0x178),false,false);
    }
    else if (*(int *)(this + 0xf8) == 3) {
      *(undefined4 *)(this + 0xf8) = 0;
      *(uint *)(this + 0xd4) = (uint)(*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5 != 0);
      *(undefined4 *)(this + 0x2c0) = 0;
      *(undefined4 *)(this + 0x2c4) = 0;
      if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
      {
        fVar4 = (float)*(double *)(*(int *)(this + 0x178) + 0x30);
        fVar2 = (float)*(double *)(*(int *)(this + 0x178) + 0x28);
        rand();
        positionFromPoint(fVar2,fVar4);
        *(double *)(this + 0x28) = (double)in_XMM1_Da;
        dVar3 = (double)local_c;
        *(double *)(this + 0x30) = dVar3;
        relativeAngleToObject
                  (this,(GameObject *)
                        (-(uint)(*(int *)(this + 0x178) != 0) & *(int *)(this + 0x178) + 8U));
        setSpeed(this,unaff_EDI);
        fVar2 = (float)dVar3 + 180.0;
        if (360.0 <= fVar2) {
          fVar2 = fVar2 - 360.0;
        }
        *(float *)(this + 0x120) = fVar2;
      }
      else {
        dVar3 = *(double *)(*(int *)(this + 0x178) + 0x28);
        *(double *)(this + 0x30) = (double)(float)*(double *)(*(int *)(this + 0x178) + 0x30);
        *(double *)(this + 0x28) = (double)(float)dVar3 + 5.0;
        setSpeed(this,unaff_EDI);
      }
      *(undefined4 *)(this + 300) = 0xc61c3c00;
      *(undefined4 *)(this + 0x178) = 0;
      *(undefined4 *)(this + 0x130) = 0xc61c3c00;
      if (this[0x234] != (Ship)0x0) {
        this_00 = Singleton<>::getInstance();
        PresentationInterface::switchToHelmControlAfterUndocking(this_00);
      }
    }
    *(undefined4 *)(this + 0x108) = 0;
    *(undefined4 *)(this + 0x10c) = 0;
  }
  return;
}


// public: void __thiscall Ship::runOrbitLogic(float)

void __thiscall Ship::runOrbitLogic(Ship *this,float param_1)

{
  int iVar1;
  LogSystem *this_00;
  char cVar2;
  int *piVar3;
  LogSystem *this_01;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fStack_1c;
  
  fVar7 = 0.0;
  fVar4 = *(float *)(this + 0xf4);
  if ((fVar4 == 0.0) && (*(int *)(this + 0xe8) != 2)) {
    *(undefined4 *)(this + 0xe8) = 3;
    GameLogic::getOrbitChangeTime((GameLogic *)this,3,this);
    *(float *)(this + 0xf4) = fVar4;
  }
  piVar3 = *(int **)(*(int *)(this + 0x40) + 0x18);
  if (fVar4 <= fVar7) {
    if (piVar3 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar3 + 0x10))(0);
      if (cVar2 != '\0') {
        *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 0;
      }
    }
  }
  else if (piVar3 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar3 + 0x10))(0);
    if (((cVar2 != '\0') &&
        (*(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 1,
        *(char *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x60) != '\0')) &&
       (fVar4 = *(float *)(this + 0xf4), *(float *)(this + 0xf4) = fVar4 - fStack_1c,
       fVar4 - fStack_1c <= 0.0)) {
      iVar1 = *(int *)(this + 0xe8);
      if ((iVar1 == 1) || (iVar1 == 3)) {
        *(undefined4 *)(this + 0xe8) = 2;
      }
      else if (iVar1 == 5) {
        if (this[0x234] != (Ship)0x0) {
          piVar3 = *(int **)(this + 0x16c);
          if (0xf < (uint)piVar3[5]) {
            piVar3 = (int *)*piVar3;
          }
          LogSystem::addLogLine
                    (this_01,*(LogPriority *)(this + 0x224),&DAT_00000001,"Left orbit of %s",piVar3)
          ;
        }
        *(undefined4 *)(this + 0xe8) = 0;
        *(uint *)(this + 0xd4) = (uint)(*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5 != 0);
        *(undefined4 *)(this + 0x2c0) = 0;
        *(undefined4 *)(this + 0x2c4) = 0;
        *(float *)(this + 0x120) = *(float *)(this + 0x128);
        dVar5 = (double)*(float *)(this + 0x128) * 0.017453292519943295;
        dVar6 = dVar5;
        __libm_sse2_sin_precise();
        __libm_sse2_cos_precise();
        *(float *)(this + 0x118) = (float)(dVar6 * 1.2000000476837158);
        *(float *)(this + 0x11c) = (float)(dVar5 * 1.2000000476837158);
        *(double *)(this + 0x28) =
             (double)*(float *)(this + 0x118) * 0.25 + *(double *)(this + 0x28);
        *(double *)(this + 0x30) =
             (double)*(float *)(this + 0x11c) * 0.25 + *(double *)(this + 0x30);
        if (*(int **)(*(int *)(this + 0x40) + 0x18) != (int *)0x0) {
          cVar2 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x10))(0);
          if (cVar2 != '\0') {
            *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 0;
            *(undefined4 *)(this + 0xf4) = 0;
            return;
          }
        }
      }
      else if (iVar1 == 4) {
        this_00 = *(LogSystem **)(this + 0xf0);
        *(LogSystem **)(this + 0xec) = this_00;
        *(undefined4 *)(this + 0xe8) = 2;
        if (this[0x234] != (Ship)0x0) {
          piVar3 = *(int **)(this + 0x16c);
          if (0xf < (uint)piVar3[5]) {
            piVar3 = (int *)*piVar3;
          }
          LogSystem::addLogLine
                    (this_00,*(LogPriority *)(this + 0x224),&DAT_00000001,
                     "Moved into %s orbit of %s",(&PTR_s_standard_005e1780)[(int)this_00],piVar3);
          *(undefined4 *)(this + 0xf4) = 0;
          return;
        }
      }
      *(undefined4 *)(this + 0xf4) = 0;
      return;
    }
  }
  return;
}


// public: void __thiscall Ship::clearSelectPoints(void)

void __thiscall Ship::clearSelectPoints(Ship *this)

{
  *(undefined4 *)(this + 0x1b8) = 0xc61c3c00;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a0) = 0xffffffff;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  *(undefined4 *)(this + 400) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1bc) = 0xc61c3c00;
  return;
}


// public: void __thiscall Ship::beginJump(int,class cocos2d::Vec2)

void __thiscall Ship::beginJump(Ship *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  SoundEngine *this_00;
  Ship *pSVar3;
  Sound SVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c39b9;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(float *)(this + 0x54) == -1.0) {
    *(undefined4 *)(this + 300) = 0xc61c3c00;
    *(undefined4 *)(this + 0x130) = 0xc61c3c00;
    *(undefined4 *)(this + 0x1b8) = 0xc61c3c00;
    *(undefined4 *)(this + 0x1bc) = 0xc61c3c00;
    *(undefined4 *)(this + 0x48) = param_3;
    *(undefined4 *)(this + 0x4c) = param_4;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1a0) = 0xffffffff;
    *(undefined4 *)(this + 0x198) = 0xffffffff;
    *(undefined4 *)(this + 400) = 0xffffffff;
    *(undefined4 *)(this + 0x1a8) = 0xffffffff;
    *(undefined4 *)(this + 0x50) = param_1;
    *(undefined4 *)(this + 0x54) = 0x40600000;
    iVar2 = rand();
    iVar2 = iVar2 % 3 + 1;
    SVar4 = 0xb;
    pSVar3 = this;
    this_00 = Singleton<>::getInstance();
    SoundEngine::playSound(this_00,pSVar3,SVar4,iVar2);
    pSVar3 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pSVar3 = *(Ship **)pSVar3;
    }
    debugPrint("GAME","%s: beginning jump, time remaining %f",pSVar3,(double)*(float *)(this + 0x54)
               ,uVar1);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::performSectorChange(int)

void __thiscall Ship::performSectorChange(Ship *this,int param_1)

{
  int iVar1;
  basic_string<> *pbVar2;
  basic_string<> *pbVar3;
  NPCShipManager *pNVar4;
  Pather *this_00;
  AuthorityManager *this_01;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c39f2;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pNVar4 = Singleton<>::getInstance();
  *pNVar4 = (NPCShipManager)0x1;
  debugPrint("GAME","Removing all ships on next NPCShipManager cycle.");
  clearSensorData(this);
  setSector(this,param_1);
  Sector::repopulateTradeLocations(*(Sector **)(this + 0x24));
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  if (*(undefined4 **)(this + 0x178) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x178))(this);
    *(undefined4 *)(this + 0x178) = 0;
  }
  if (this[0x234] != (Ship)0x0) {
    *(undefined4 *)(g_gameData + 0xd8) = *(undefined4 *)(this + 0x24);
    if (Singleton<Pather>::instance == (Pather *)0x0) {
      this_00 = operator_new(0x98);
      local_8 = 0;
      Singleton<Pather>::instance = (Pather *)Pather::Pather(this_00);
      local_8 = 0xffffffff;
    }
    Pather::resetSector(Singleton<Pather>::instance);
    this_01 = Singleton<>::getInstance();
    local_8 = 1;
    iVar1 = *(int *)this_01;
    std::_Tree<>::_Erase((_Tree<> *)this_01,*(_Tree_node<> **)(iVar1 + 4));
    pbVar2 = *(basic_string<> **)this_01;
    *(int *)(pbVar2 + 4) = iVar1;
    **(int **)this_01 = iVar1;
    *(int *)(*(int *)this_01 + 8) = iVar1;
    *(undefined4 *)(this_01 + 4) = 0;
    std::_Destroy_range<>(pbVar2,pbVar3,unaff_EDI);
    *(undefined4 *)(this_01 + 0xc) = *(undefined4 *)(this_01 + 8);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::dischargeJumpDrive(void)

void __thiscall Ship::dischargeJumpDrive(Ship *this)

{
  float fVar1;
  SoundEngine *this_00;
  PresentationInterface *pPVar2;
  LogSystem *this_01;
  undefined4 uStack_44;
  undefined4 uStack_40;
  Ship *pSStack_3c;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(float *)(this + 0x58) != -1.0) {
    debugPrint("GAME","Discharging jump charge.");
    fVar1 = *(float *)(this + 0x58);
    *(undefined1 **)(this + 0x58) = &DAT_bf800000;
    *(undefined1 **)(this + 0x5c) = &DAT_bf800000;
    *(undefined4 *)(this + 0x60) = 0xffffffff;
    if (*(int *)(*(int *)(this + 0x40) + 0x14) != 0) {
      *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x14) + 0x62) = 0;
    }
    iVar5 = -1;
    SVar4 = 0x1d;
    uStack_40 = 0x513774;
    pSVar3 = this;
    this_00 = Singleton<>::getInstance();
    pSStack_3c = (Ship *)0x51377e;
    SoundEngine::playSound(this_00,pSVar3,SVar4,iVar5);
    pSStack_3c = (Ship *)0x513790;
    LogSystem::addLogLine(this_01,*(LogPriority *)(this + 0x224),&DAT_00000004);
    if (this == *(Ship **)(g_gameData + 0xd0)) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&uStack_44,(basic_string<> *)(this + 0x238));
      local_8 = 0;
      pPVar2 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar2);
    }
    rand();
    if (0x45 < (int)(100.0 - fVar1)) {
      SystemManager::resetHardware(*(SystemManager **)(this + 0x40),0x3c);
    }
    pSStack_3c = (Ship *)0x51383b;
    debugPrint("GAME","EMP blast from discharging jump drive: %d units");
    uStack_40 = *(undefined4 *)(this + 0x24);
    uStack_44 = 1;
    pSStack_3c = this;
    GameLogic::explosion();
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: void __thiscall Ship::runJumpLogic(float)

void __thiscall Ship::runJumpLogic(Ship *this,float param_1)

{
  Color3B *pCVar1;
  undefined4 *puVar2;
  GameData *pGVar3;
  PresentationInterface *pPVar4;
  void *pvVar5;
  float fVar6;
  int iVar7;
  Stats *pSVar8;
  PrivateCommsManager *pPVar9;
  PresentationInterface *pPVar10;
  FlagManager *pFVar11;
  SoundEngine *this_00;
  ModuleType extraout_ECX;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  float in_XMM1_Da;
  double dVar19;
  basic_string<> local_98 [12];
  undefined4 uStack_8c;
  Ship *local_80;
  double local_7c;
  Sound SVar20;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  Sector *local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  pvVar5 = ExceptionList;
  puStack_c = &DAT_005c3ab5;
  local_10 = ExceptionList;
  fVar6 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  if (*(float *)(this + 0x54) == -1.0) {
    return;
  }
  fVar17 = *(float *)(this + 0x54) - in_XMM1_Da;
  ExceptionList = &local_10;
  *(float *)(this + 0x54) = fVar17;
  if (0.0 < fVar17) {
    ExceptionList = pvVar5;
    return;
  }
  *(undefined1 **)(this + 0x54) = &DAT_bf800000;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  local_2c = 0.0;
  local_28 = 0.0;
  local_8 = 0;
  uStack_7 = 0;
  iVar7 = *(int *)(this + 0x178);
  if (iVar7 != 0) {
    bVar16 = false;
    if (*(int *)(iVar7 + 0x254) != 0) {
      bVar16 = *(int *)(*(int *)(iVar7 + 0x254) + 0x158) == 2;
    }
    if (bVar16) {
      local_1c = GameData::getSectorWithID(g_gameData,*(int *)(iVar7 + 0x38c));
      uVar15 = 0;
      piVar12 = *(int **)(local_1c + 0xcc);
      uVar14 = *(int *)(local_1c + 0xd0) - (int)piVar12 >> 2;
      if (uVar14 != 0) {
        do {
          iVar7 = *piVar12;
          if ((*(int *)(*(int *)(iVar7 + 0x254) + 0x158) == 2) &&
             (*(int *)(iVar7 + 0x38c) == *(int *)(this + 0x20))) {
            local_2c = (float)*(double *)(iVar7 + 0x28);
            local_28 = (float)*(double *)(iVar7 + 0x30);
            goto LAB_0051399c;
          }
          uVar15 = uVar15 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar15 < uVar14);
      }
      debugPrint("GAME","WARNING: tried to travel to system \'%s\' but no jumpgate found");
      local_28 = 0.0;
      local_2c = 0.0;
LAB_0051399c:
      local_24 = (double)CONCAT44(local_28,local_2c);
      debugPrint("GAME","Arriving at position %f, %f thanks to jumpgate");
      goto LAB_00513c72;
    }
  }
  if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
    local_1c = (Sector *)(1.0 - *(float *)(this + 0x5c) / 100.0);
    iVar7 = rand();
    local_34 = *(undefined4 *)(this + 0x48);
    local_30 = *(undefined4 *)(this + 0x4c);
    local_24 = (double)(int)((float)local_1c * 120.0);
    dVar19 = (double)(iVar7 % 0x168) * 0.017453292519943295;
    dVar18 = dVar19;
    __libm_sse2_sin_precise();
    local_14 = (undefined1 *)(float)(dVar18 * local_24);
    __libm_sse2_cos_precise();
    local_24 = (double)CONCAT44((float)(dVar19 * local_24),local_14);
    local_8 = 2;
    cocos2d::Vec2::operator+((Vec2 *)&local_34,(Vec2 *)&local_18);
    local_8 = 0;
    local_2c = local_18;
    local_28 = (float)local_14;
    fVar17 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)(this + 0x48));
    local_14 = (undefined1 *)(0x5f3759df - ((uint)fVar17 >> 1));
    local_80 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      local_80 = *(Ship **)local_80;
    }
    local_7c = (double)(float)local_1c;
    uStack_8c = 0x513baa;
    debugPrint("GAME","%s: Misjump offset: %f, dist = %.2f, %f,%f -> %f, %f");
    if (this[0x234] != (Ship)0x0) {
      local_1c = (Sector *)&stack0xffffff9c;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff9c,"jumpdrive_uses",0xe);
      local_8 = 3;
      pSVar8 = Singleton<Stats>::getInstance();
      local_8 = 0;
      Stats::addStat(pSVar8);
      local_1c = (Sector *)&stack0xffffff98;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff98,"",0);
      local_14 = (undefined1 *)&local_80;
      local_8 = 4;
      local_80 = (Ship *)((uint)local_80 & 0xffffff00);
      uStack_8c = 0x513c43;
      std::basic_string<>::assign((basic_string<> *)&local_80,"jumpdrive_uses",0xe);
      local_8 = 5;
      local_98[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_98,"play",4);
      local_8 = 0;
      Analytics::logEvent();
    }
  }
  else {
    local_2c = *(float *)(this + 0x48);
    local_28 = *(float *)(this + 0x4c);
  }
LAB_00513c72:
  g_gameLogic[0x11e] = (GameLogic)0x1;
  performSectorChange(this,*(int *)(this + 0x50));
  *(undefined1 **)(this + 0x128) = &DAT_bf800000;
  *(double *)(this + 0x28) = (double)local_2c;
  *(double *)(this + 0x30) = (double)local_28;
  SystemManager::connectModulesOfType(*(SystemManager **)(this + 0x40),extraout_ECX);
  SystemManager::resetHardware(*(SystemManager **)(this + 0x40),100);
  if (this[0x234] != (Ship)0x0) {
    pPVar9 = Singleton<>::getInstance();
    PrivateCommsManager::reset(pPVar9);
  }
  *(undefined4 *)(this + 0x120) = 0x42340000;
  setSpeed(this,fVar6);
  *(undefined1 **)(this + 0x58) = &DAT_bf800000;
  *(undefined1 **)(this + 0x5c) = &DAT_bf800000;
  pPVar9 = Singleton<>::getInstance();
  PrivateCommsManager::cancelCurrentHail(pPVar9);
  pGVar3 = g_gameData;
  if (this == *(Ship **)(g_gameData + 0xd0)) {
    fVar6 = (float)*(double *)(this + 0x28);
    PresentationData::m_lockToShip = true;
    DAT_0065e060 = (float)*(double *)(this + 0x30);
    _m_mapCenterPoint = fVar6;
    *(undefined4 *)(this + 0x1d0) = 0xffffffff;
    if (PresentationData::m_mapZoomLevel == 0) {
      PresentationData::m_mapZoomLevel = 1;
    }
    if ((*(int *)(pGVar3 + 0xcc) == 0) || (*(int *)(*(int *)(pGVar3 + 0xcc) + 0x70) != 1)) {
      local_24 = (double)CONCAT44(&stack0xffffff9c,fVar6);
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff9c,(basic_string<> *)(this + 0x238));
      local_8 = 0xb;
      pPVar10 = Singleton<>::getInstance();
      local_8 = 0;
      PresentationInterface::addShake(pPVar10);
    }
    else {
      local_24 = (double)CONCAT44(&stack0xffffff9c,fVar6);
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff9c,(basic_string<> *)(this + 0x238));
      local_8 = 6;
      pPVar10 = Singleton<>::getInstance();
      local_8 = 0;
      PresentationInterface::addShake(pPVar10);
      iVar7 = *(int *)(this + 0x40);
      if (*(int *)(iVar7 + 0x24) != 0) {
        iVar13 = 0;
        do {
          iVar7 = *(int *)(this + 0x40);
          puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar7 + 0x24) + 0xc) + 4 + iVar13);
          if ((puVar2 != (undefined4 *)0x0) && (*(int *)(puVar2[1] + 0x80) == 6)) {
            *puVar2 = 0x40000000;
            iVar7 = *(int *)(this + 0x40);
          }
          iVar13 = iVar13 + 4;
        } while (iVar13 < 0x50);
      }
      if (*(int *)(iVar7 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(iVar7 + 0x18) + 0x34) = 1;
        *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 1;
      }
      local_24 = (double)CONCAT44(&stack0xffffff98,(undefined4)local_24);
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff98,"tutorial_jumped",0xf);
      local_8 = 7;
      pFVar11 = Singleton<>::getInstance();
      local_8 = 0;
      FlagManager::setFlag(pFVar11);
      local_24 = (double)CONCAT44(&stack0xffffff98,(undefined4)local_24);
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff98,"only_plot_to_beacons",0x14);
      local_8 = 8;
      pFVar11 = Singleton<>::getInstance();
      local_8 = 0;
      FlagManager::setFlag(pFVar11);
      local_24 = (double)CONCAT44(&stack0xffffff98,(undefined4)local_24);
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff98,"only_plot_to_op-lago",0x14);
      local_8 = 9;
      pFVar11 = Singleton<>::getInstance();
      local_8 = 0;
      FlagManager::setFlag(pFVar11);
      local_24 = (double)CONCAT44(&stack0xffffff98,(undefined4)local_24);
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff98,"angle_50",8);
      local_8 = 10;
      pFVar11 = Singleton<>::getInstance();
      local_8 = 0;
      FlagManager::setFlag(pFVar11);
    }
    iVar7 = -1;
    SVar20 = 0xc;
    this_00 = Singleton<>::getInstance();
    SoundEngine::playSound(this_00,this,SVar20,iVar7);
    if (Singleton<>::instance == (PresentationInterface *)0x0) {
      pPVar10 = operator_new(0x418);
      local_24 = (double)CONCAT44(pPVar10,(undefined4)local_24);
      local_8 = 0xc;
      Singleton<>::instance =
           (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar10);
      local_8 = 0;
    }
    pPVar4 = Singleton<>::instance;
    pPVar10 = Singleton<>::instance + 0x2d4;
    pCVar1 = (Color3B *)(Singleton<>::instance + 0x3cc);
    *(undefined2 *)pCVar1 = *(undefined2 *)(*(int *)pPVar10 + 0x8c);
    pPVar4[0x3ce] = *(PresentationInterface *)(*(int *)pPVar10 + 0x8e);
    bVar16 = cocos2d::Color3B::operator==((Color3B *)(pPVar4 + 0x3cf),pCVar1);
    if (!bVar16) {
      *(undefined4 *)(pPVar4 + 0x3c4) = 0;
      *(undefined4 *)(pPVar4 + 0x3c8) = 0x40000000;
      pPVar4[0x3c0] = (PresentationInterface)0x1;
    }
    Sector::removeAllWeapons(*(Sector **)(this + 0x24));
    GameLogic::resetSyntheticInstances(g_gameLogic);
  }
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  if (this[0x234] != (Ship)0x0) {
    pPVar10 = Singleton<>::getInstance();
    PresentationInterface::switchToHelmControlAfterUndocking(pPVar10);
    this[0x345] = (Ship)0x1;
  }
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall Ship::runLogic(float)

void __thiscall Ship::runLogic(Ship *this,float param_1)

{
  undefined1 *puVar1;
  basic_string<> *pbVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  map<> *pmVar6;
  char cVar7;
  char *pcVar8;
  Zone *pZVar9;
  FlagManager *pFVar10;
  basic_string<> *pbVar11;
  Zone *pZVar12;
  basic_string<> *pbVar13;
  PresentationInterface *pPVar14;
  int *piVar15;
  int iVar16;
  LogSystem *this_00;
  LogSystem *this_01;
  LogSystem *extraout_ECX;
  void *pvVar17;
  LogSystem *extraout_ECX_00;
  LogSystem *this_02;
  LogSystem *this_03;
  LogSystem *this_04;
  nothrow_t *pnVar18;
  FogInstance *pFVar19;
  int iVar20;
  float unaff_EDI;
  uint uVar21;
  bool bVar22;
  float fVar23;
  Ship *pSVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  uint uStack_94;
  char *pcStack_84;
  undefined1 *puStack_80;
  float local_4c;
  FogInstance *local_48;
  undefined1 *local_44;
  map<> *local_40;
  float local_3c;
  float local_38;
  undefined1 *local_34;
  Ship *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3bb7;
  local_10 = ExceptionList;
  pcVar8 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar22 = false;
  if (*(int *)(this + 0x254) != 0) {
    bVar22 = *(int *)(*(int *)(this + 0x254) + 0x158) == 0;
  }
  local_30 = this;
  local_14 = pcVar8;
  if ((bVar22) && (pZVar9 = Sector::getZone(*(Sector **)(this + 0x24)), pZVar9 != (Zone *)0x0)) {
    if (this[0x234] == (Ship)0x0) {
LAB_0051412b:
      std::map<>::operator[]((map<> *)(pZVar9 + 0xd8),(basic_string<> *)(this + 0x238));
      bVar22 = std::_Traits_equal<>("",0,pcVar8,(uint)unaff_EDI);
      if (!bVar22) {
        local_34 = (undefined1 *)&pcStack_84;
        pbVar11 = std::map<>::operator[]((map<> *)(pZVar9 + 0xd8),(basic_string<> *)(this + 0x238));
        std::basic_string<>::basic_string<>((basic_string<> *)&pcStack_84,(basic_string<> *)pbVar11)
        ;
        local_8 = 2;
        pFVar10 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        bVar22 = FlagManager::flagSet(pFVar10);
        if (!bVar22) {
          local_34 = &stack0xffffff78;
          pbVar11 = std::map<>::operator[]
                              ((map<> *)(pZVar9 + 0xd8),(basic_string<> *)(this + 0x238));
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff78,(basic_string<> *)pbVar11);
          local_8 = 3;
          goto LAB_005141c8;
        }
      }
    }
    else {
      bVar22 = std::_Traits_equal<>("",0,pcVar8,(uint)unaff_EDI);
      if (bVar22) goto LAB_0051412b;
      local_34 = (undefined1 *)&pcStack_84;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&pcStack_84,(basic_string<> *)(pZVar9 + 0xc0));
      local_8 = 0;
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      bVar22 = FlagManager::flagSet(pFVar10);
      if (bVar22) goto LAB_0051412b;
      local_34 = &stack0xffffff78;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff78,(basic_string<> *)(pZVar9 + 0xc0));
      local_8 = 1;
LAB_005141c8:
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar10);
    }
    local_40 = (map<> *)(pZVar9 + 0xe0);
    pbVar2 = (basic_string<> *)(this + 0x238);
    std::map<>::operator[](local_40,pbVar2);
    bVar22 = std::_Traits_equal<>("",0,pcVar8,(uint)unaff_EDI);
    if (!bVar22) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)CONCAT31(local_2c[0]._1_3_,bVar22);
      std::basic_string<>::assign((basic_string<> *)local_2c,"zoneentered_",0xc);
      local_8 = 4;
      pZVar12 = pZVar9 + 4;
      if (0xf < *(uint *)(pZVar9 + 0x18)) {
        pZVar12 = *(Zone **)(pZVar9 + 4);
      }
      std::basic_string<>::append
                ((basic_string<> *)local_2c,(char *)pZVar12,*(uint *)(pZVar9 + 0x14));
      std::basic_string<>::append((basic_string<> *)local_2c,"_",1);
      pbVar13 = pbVar2;
      if (0xf < *(uint *)(this + 0x24c)) {
        pbVar13 = *(basic_string<> **)pbVar2;
      }
      std::basic_string<>::append
                ((basic_string<> *)local_2c,(char *)pbVar13,*(uint *)(this + 0x248));
      local_34 = (undefined1 *)&pcStack_84;
      std::basic_string<>::basic_string<>((basic_string<> *)&pcStack_84,(basic_string<> *)local_2c);
      local_8._0_1_ = 5;
      pFVar10 = Singleton<>::getInstance();
      local_8._0_1_ = 4;
      bVar22 = FlagManager::flagSet(pFVar10);
      if (!bVar22) {
        std::map<>::operator[](local_40,pbVar2);
        puStack_80 = (undefined1 *)0x5142d2;
        LogSystem::addLogLine
                  (this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000004);
        local_34 = &stack0xffffff78;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff78,(basic_string<> *)local_2c);
        local_8._0_1_ = 6;
        pFVar10 = Singleton<>::getInstance();
        local_8 = CONCAT31(local_8._1_3_,4);
        FlagManager::setFlag(pFVar10);
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar18 = (nothrow_t *)(local_18 + 1);
        pvVar17 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar17 = *(void **)((int)local_2c[0] + -4);
          pnVar18 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar17,pnVar18);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
  }
  if (this[0xd0] == (Ship)0x0) goto LAB_00515292;
  if ((0.0 < *(float *)(this + 0x31c)) &&
     (fVar25 = *(float *)(this + 0x31c) - param_1, *(float *)(this + 0x31c) = fVar25, fVar25 <= 0.0)
     ) {
    *(undefined1 **)(this + 0x31c) = &DAT_bf800000;
    debugPrint("DETAIL","Preparing to be towed...");
    if (this[0x234] != (Ship)0x0) {
      pPVar14 = Singleton<>::getInstance();
      *(undefined4 *)(pPVar14 + 0x2a4) = 1;
      pPVar14 = Singleton<>::getInstance();
      *(undefined2 *)(pPVar14 + 0x2a0) = 0x101;
      *(undefined4 *)(pPVar14 + 0x29c) = 1;
      *(undefined4 *)(pPVar14 + 0x2ac) = 0x3f19999a;
      *(undefined4 *)(pPVar14 + 0x2a8) = 0x3f19999a;
    }
  }
  if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
     (this[0x234] != (Ship)0x0)) {
    if (this[0x321] == (Ship)0x0) {
      if ((*(int *)(this + 0xd4) == 1) &&
         (*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5 != 0)) {
        local_34 = &stack0xffffff78;
        this[0x321] = (Ship)0x1;
        uStack_94 = 0x5144ac;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"on_course",9);
        local_8 = 8;
        goto LAB_005144b3;
      }
    }
    else if ((*(int *)(this + 0xd4) != 1) ||
            ((uint)(*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4)) < 0x20)) {
      local_34 = &stack0xffffff78;
      this[0x321] = (Ship)0x0;
      uStack_94 = 0x514459;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"on_course",9);
      local_8 = 7;
LAB_005144b3:
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar10);
    }
    piVar15 = *(int **)(*(int *)(this + 0x40) + 0x20);
    if (this[0x322] == (Ship)0x0) {
      if ((((piVar15 != (int *)0x0) && (cVar7 = (**(code **)(*piVar15 + 0x10))(), cVar7 != '\0')) &&
          (*(char *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x62) != '\0')) &&
         (*(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x38 + *(int *)(this + 0x1b4) * 4) != 0)
         ) {
        local_34 = &stack0xffffff78;
        uStack_94 = 0x5145b1;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"spinning_up_weapon",0x12);
        local_8 = 10;
        pFVar10 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        FlagManager::setFlag(pFVar10);
        if ((*(int *)(g_gameData + 0xcc) != 0) &&
           (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
          uStack_94 = 0x514607;
          local_34 = &stack0xffffff78;
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffff78,"has_been_spinning_up_weapon",0x1b);
          local_8 = 0xb;
          pFVar10 = Singleton<>::getInstance();
          local_8 = 0xffffffff;
          FlagManager::setFlag(pFVar10);
        }
        this[0x322] = (Ship)0x1;
      }
    }
    else if (((piVar15 == (int *)0x0) || (cVar7 = (**(code **)(*piVar15 + 0x10))(), cVar7 == '\0'))
            || ((*(char *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x62) == '\0' ||
                (*(int *)(*(int *)(*(int *)(this + 0x40) + 0x20) + 0x38 + *(int *)(this + 0x1b4) * 4
                         ) == 0)))) {
      local_34 = &stack0xffffff78;
      uStack_94 = 0x51452a;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"spinning_up_weapon",0x12);
      local_8 = 9;
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar10);
      this[0x322] = (Ship)0x0;
    }
    if (this[0x323] == (Ship)0x0) {
      local_40 = (map<> *)cocos2d::Vec2::getLength((Vec2 *)(this + 0x118));
      if ((float)local_40 == 0.0) {
        local_34 = &stack0xffffff78;
        uStack_94 = 0x5146dc;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"is_moving",9);
        local_8 = 0xd;
        pFVar10 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        FlagManager::setFlag(pFVar10);
        this[0x323] = (Ship)0x1;
      }
    }
    else {
      local_40 = (map<> *)cocos2d::Vec2::getLength((Vec2 *)(this + 0x118));
      if (0.0 < (float)local_40) {
        local_34 = &stack0xffffff78;
        uStack_94 = 0x514678;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"is_moving",9);
        local_8 = 0xc;
        pFVar10 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        FlagManager::setFlag(pFVar10);
        this[0x323] = (Ship)0x0;
      }
    }
  }
  GameLogic::setHazardState();
  runHeatLogic(this,(float)pcVar8);
  (**(code **)(*(int *)this + 0x18))();
  runSensorLogic(this,(float)pcVar8);
  runCommsLogic(this,(float)pcVar8);
  if ((g_gameLogic[0x72] != (GameLogic)0x0) && (this[0x234] != (Ship)0x0)) {
    fVar25 = *(float *)(this + 0x350);
    *(float *)(this + 0x350) = fVar25 - param_1;
    if (fVar25 - param_1 <= 0.0) {
      *(undefined4 *)(this + 0x350) = 0x40000000;
      if ((*(float *)(this + 0x354) == -9999.0) && (*(float *)(this + 0x358) == -9999.0)) {
        dVar26 = *(double *)(this + 0x28);
        dVar27 = *(double *)(this + 0x30);
      }
      else {
        dVar26 = *(double *)(this + 0x28);
        dVar27 = *(double *)(this + 0x30);
        if ((*(float *)(this + 0x354) == (float)dVar26) &&
           (*(float *)(this + 0x358) == (float)dVar27)) goto LAB_0051492f;
      }
      local_38 = (float)dVar26;
      local_34 = (undefined1 *)(float)dVar27;
      *(float *)(this + 0x354) = local_38;
      *(undefined1 **)(this + 0x358) = local_34;
      local_44 = (undefined1 *)(float)*(double *)(this + 0x28);
      local_3c = (float)*(double *)(this + 0x30);
      local_8 = 0xe;
      piVar15 = std::map<>::operator[]((map<> *)(this + 0x348),(int *)(this + 0x20));
      local_48 = (FogInstance *)*piVar15;
      local_8 = 0xf;
      iVar20 = (int)(((float)local_44 + 600.0) / 150.0);
      iVar16 = (int)((local_3c + 600.0) / 150.0);
      uVar21 = iVar16 - 1;
      local_40 = (map<> *)(iVar16 + 1);
      if ((int)uVar21 <= (int)local_40) {
        puVar1 = (undefined1 *)(iVar20 + -1);
        puVar4 = puVar1;
        puVar5 = puVar1;
        pFVar19 = local_48;
        pmVar6 = local_40;
        local_34 = puVar1;
        this = local_30;
        do {
          for (; local_30 = this, (int)puVar4 <= iVar20 + 1; puVar4 = puVar4 + 1) {
            if ((uVar21 < 8) && (puVar5 < (undefined1 *)0x8)) {
              pcStack_84 = (char *)0x514901;
              puStack_80 = puVar4;
              FogInstance::removeFogInRadius(pFVar19);
              pFVar19 = local_48;
            }
            puVar5 = puVar5 + 1;
            puVar1 = local_34;
            pmVar6 = local_40;
            this = local_30;
          }
          uVar21 = uVar21 + 1;
          puVar4 = puVar1;
          puVar5 = puVar1;
        } while ((int)uVar21 <= (int)pmVar6);
      }
      local_8 = 0xffffffff;
    }
LAB_0051492f:
    iVar16 = *(int *)(this + 0x24);
    uVar21 = 0;
    if (*(int *)(iVar16 + 0xa0) - *(int *)(iVar16 + 0x9c) >> 2 != 0) {
      do {
        iVar20 = uVar21 * 4;
        iVar16 = *(int *)(iVar20 + *(int *)(iVar16 + 0x9c));
        if ((*(char *)(iVar16 + 0x40) != '\0') && (0.0 < *(float *)(iVar16 + 0xe0))) {
          local_38 = (float)*(double *)(this + 0x28);
          local_34 = (undefined1 *)(float)*(double *)(this + 0x30);
          local_4c = (float)*(double *)(iVar16 + 0x28);
          local_48 = (FogInstance *)(float)*(double *)(iVar16 + 0x30);
          local_8 = 0x11;
          local_30 = (Ship *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_4c,(Vec2 *)&local_38);
          local_3c = (float)(0x5f3759df - ((uint)local_30 >> 1));
          iVar16 = *(int *)(iVar20 + *(int *)(*(int *)(this + 0x24) + 0x9c));
          local_8 = 0xffffffff;
          if ((1.5 - (float)local_30 * 0.5 * local_3c * local_3c) * local_3c * (float)local_30 <=
              *(float *)(iVar16 + 0xe0)) {
            local_30 = (Ship *)&pcStack_84;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&pcStack_84,(basic_string<> *)(iVar16 + 0x98));
            local_8 = 0x12;
            pFVar10 = Singleton<>::getInstance();
            local_8 = 0xffffffff;
            bVar22 = FlagManager::flagSet(pFVar10);
            if (!bVar22) {
              debugPrint("GAME","Proximity to invisible flag beacon hit - setting flag \'%s\'");
              local_30 = (Ship *)&stack0xffffff78;
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)&stack0xffffff78,
                         (basic_string<> *)
                         (*(int *)(*(int *)(*(int *)(this + 0x24) + 0x9c) + iVar20) + 0x98));
              local_8 = 0x13;
              pFVar10 = Singleton<>::getInstance();
              local_8 = 0xffffffff;
              FlagManager::setFlag(pFVar10);
            }
          }
        }
        iVar16 = *(int *)(this + 0x24);
        uVar21 = uVar21 + 1;
      } while (uVar21 < (uint)(*(int *)(iVar16 + 0xa0) - *(int *)(iVar16 + 0x9c) >> 2));
    }
  }
  if ((0.0 <= *(float *)(this + 0x100)) &&
     (fVar25 = *(float *)(this + 0x100) + param_1, *(float *)(this + 0x100) = fVar25, 100.0 < fVar25
     )) {
    *(undefined1 **)(this + 0x100) = &DAT_bf800000;
  }
  if (((0.0 < *(float *)(this + 0x58)) && (*(int **)(*(int *)(this + 0x40) + 0x14) != (int *)0x0))
     && (cVar7 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x14) + 0x10))(), cVar7 != '\0')) {
    iVar16 = *(int *)(*(int *)(this + 0x40) + 0x14);
    if (*(char *)(iVar16 + 0x62) == '\0') {
      *(undefined1 *)(iVar16 + 0x62) = 1;
    }
    else if (*(char *)(iVar16 + 0x60) != '\0') {
      if (this == *(Ship **)(g_gameData + 0xd0)) {
        local_30 = (Ship *)&pcStack_84;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&pcStack_84,(basic_string<> *)(this + 0x238));
        local_8 = 0x14;
        pPVar14 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        PresentationInterface::addShake(pPVar14);
      }
      fVar25 = *(float *)(this + 0x58);
      *(float *)(this + 0x58) = fVar25 - param_1;
      if (fVar25 - param_1 < 0.0) {
        *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x14) + 0x62) = 0;
        *(undefined4 *)(this + 0x58) = 0;
        debugPrint("GAME","%s: Jump drive spun up.");
      }
    }
  }
  if (((0.0 <= *(float *)(this + 0x5c)) && (*(float *)(this + 0x5c) < 100.0)) &&
     (*(float *)(this + 0x54) == -1.0)) {
    if ((*(int **)(*(int *)(this + 0x40) + 0x14) == (int *)0x0) ||
       (cVar7 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x14) + 0x10))(), cVar7 == '\0')) {
      *(undefined1 **)(this + 0x5c) = &DAT_bf800000;
    }
    else {
      fVar25 = (100.0 / *(float *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 0x14) + 8) + 0x10c)) *
               param_1 + *(float *)(this + 0x5c);
      *(float *)(this + 0x5c) = fVar25;
      if (100.0 <= fVar25) {
        *(undefined4 *)(this + 0x5c) = 0x42c80000;
        debugPrint("GAME","%s: Jump solution calculated.");
      }
    }
  }
  runJumpLogic(this,(float)pcVar8);
  iVar16 = *(int *)(this + 0xd4);
  if (iVar16 == 1) {
    if ((((*(float *)(this + 0x128) == -1.0) ||
         (*(float *)(this + 0x128) == *(float *)(this + 0x120))) ||
        (*(int **)(*(int *)(this + 0x40) + 0x18) == (int *)0x0)) ||
       (cVar7 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x10))(), cVar7 == '\0')) {
      if (*(int *)(*(int *)(this + 0x40) + 0x18) != 0) {
        *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 0;
      }
      if (*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5 == 0) {
        *(undefined4 *)(this + 0xd4) = 0;
        *(undefined4 *)(this + 0x2c0) = 0;
        *(undefined4 *)(this + 0x2c4) = 0;
      }
    }
    else {
      fVar25 = *(float *)(this + 0x120);
      fVar3 = *(float *)(this + 0x124);
      if (fVar25 != fVar3) {
        iVar16 = *(int *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x34);
        if (iVar16 == 2) {
          fVar23 = *(float *)(this + 0x128);
          if (fVar25 <= fVar3) {
            if (fVar23 <= fVar3) {
              bVar22 = fVar23 < fVar25;
LAB_00514e11:
              if (!bVar22 && fVar23 != fVar25) goto LAB_00514e17;
            }
          }
          else if ((fVar23 < fVar3) || (fVar25 <= fVar23)) {
LAB_00514e17:
            *(float *)(this + 0x120) = fVar23;
            iVar16 = *(int *)(*(int *)(this + 0x40) + 0x18);
            if (iVar16 != 0) {
              *(undefined1 *)(iVar16 + 0x62) = 0;
            }
            goto LAB_00514e85;
          }
        }
        else if (iVar16 == 1) {
          fVar23 = *(float *)(this + 0x128);
          if (fVar25 < fVar3) {
            if ((fVar3 < fVar23) || (fVar23 <= fVar25)) goto LAB_00514e17;
          }
          else if (fVar3 <= fVar23) {
            bVar22 = fVar25 < fVar23;
            goto LAB_00514e11;
          }
        }
      }
      if (*(char *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) == '\0') {
        pcStack_84 = (char *)0x0;
        puStack_80 = &DAT_0000000f;
        uStack_94 = uStack_94 & 0xffffff00;
        std::basic_string<>::assign
                  ((basic_string<> *)&uStack_94,"Beginning rotation to %f, difference %f.",0x28);
        log();
        *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 1;
      }
    }
  }
  else if (iVar16 == 2) {
    runOrbitLogic(this,(float)pcVar8);
  }
  else if (iVar16 == 3) {
    runDockLogic(this,(float)pcVar8);
  }
LAB_00514e85:
  if ((*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5 == 0) ||
     ((*(int **)(*(int *)(this + 0x40) + 0x10) != (int *)0x0 &&
      (cVar7 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x10) + 0x10))(), cVar7 != '\0')))) {
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      local_30 = (Ship *)&pcStack_84;
      pcStack_84 = (char *)((uint)pcStack_84 & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&pcStack_84,"lock_at_50",10);
      local_8 = 0x15;
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      bVar22 = FlagManager::flagSet(pFVar10);
      if (bVar22) {
        pSVar24 = *(Ship **)(this + 0x120);
        differenceBetweenAngles((float)pcVar8,unaff_EDI);
        fVar25 = 50.0;
        local_30 = pSVar24;
        differenceBetweenAngles((float)pcVar8,unaff_EDI);
        if (fVar25 <= (float)local_30) {
          *(undefined4 *)(this + 0x120) = 0x42480000;
          local_30 = (Ship *)&stack0xffffff78;
          *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 0;
          uStack_94 = 0x514f93;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"angle_50",8);
          local_8 = 0x16;
          pFVar10 = Singleton<>::getInstance();
          local_8 = 0xffffffff;
          FlagManager::setFlag(pFVar10);
          uStack_94 = 0x514fd4;
          local_30 = (Ship *)&stack0xffffff78;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"lock_at_50",10);
          local_8 = 0x17;
          pFVar10 = Singleton<>::getInstance();
          local_8 = 0xffffffff;
          FlagManager::setFlag(pFVar10);
        }
      }
    }
    if (*(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5 == 0) {
      if (((*(float *)(this + 0x128) != -1.0) &&
          (*(float *)(this + 0x128) == *(float *)(this + 0x120))) && (*(int *)(this + 0xd4) == 1)) {
        *(undefined4 *)(this + 0xd4) = 0;
        *(undefined4 *)(this + 0x2c0) = 0;
        *(undefined4 *)(this + 0x2c4) = 0;
      }
    }
    else if (*(int *)(this + 0xd4) == 1) {
      runMotionLogic(this,(float)pcVar8);
    }
    if (this[0x345] != (Ship)0x0) {
      iVar16 = *(int *)(this + 0x24);
      this[0x345] = (Ship)0x0;
      uVar21 = 0;
      local_3c = 0.0;
      local_44 = (undefined1 *)0x0;
      if (*(int *)(iVar16 + 0x88) - *(int *)(iVar16 + 0x84) >> 2 != 0) {
        do {
          iVar16 = *(int *)(*(int *)(*(int *)(iVar16 + 0x84) + uVar21 * 4) + 0x54);
          if (iVar16 != 1) {
            if (iVar16 == 0) {
              local_30 = (Ship *)&stack0xffffff8c;
              local_8 = 0x18;
              piVar15 = std::map<>::operator[]((map<> *)(this + 0x348),(int *)(this + 0x20));
              local_8 = 0xffffffff;
              bVar22 = FogInstance::fogObscuresPoint((FogInstance *)*piVar15);
              if (!bVar22) {
                local_3c = (float)((int)local_3c + 1);
              }
            }
            else if (iVar16 == 2) {
              local_30 = (Ship *)&stack0xffffff8c;
              local_8 = 0x19;
              piVar15 = std::map<>::operator[]((map<> *)(this + 0x348),(int *)(this + 0x20));
              local_8 = 0xffffffff;
              bVar22 = FogInstance::fogObscuresPoint((FogInstance *)*piVar15);
              if (!bVar22) {
                local_44 = local_44 + 1;
              }
            }
          }
          iVar16 = *(int *)(this + 0x24);
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)(*(int *)(iVar16 + 0x88) - *(int *)(iVar16 + 0x84) >> 2));
      }
      if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
      {
        strUsingArgs((char *)local_2c);
        local_8 = 0x1a;
        LogSystem::addLogLine(this_01,*(LogPriority *)(this + 0x224),&DAT_00000001);
        local_8 = 0xffffffff;
        this_02 = extraout_ECX;
        if (0xf < local_18) {
          pnVar18 = (nothrow_t *)(local_18 + 1);
          pvVar17 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar18) {
            pvVar17 = *(void **)((int)local_2c[0] + -4);
            pnVar18 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar17,pnVar18);
          this_02 = extraout_ECX_00;
        }
        puStack_80 = (undefined1 *)0x51521f;
        LogSystem::addLogLine(this_02,*(LogPriority *)(this + 0x224),&DAT_00000001);
        puStack_80 = (undefined1 *)0x515237;
        LogSystem::addLogLine(this_03,*(LogPriority *)(this + 0x224),&DAT_00000001);
        puStack_80 = local_44;
        pcStack_84 = "%d moons known";
        LogSystem::addLogLine(this_04,*(LogPriority *)(this + 0x224),&DAT_00000001);
      }
    }
    *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x310);
    local_4c = 0.0;
    local_48 = (FogInstance *)0x0;
    local_8 = 0x1b;
    fVar25 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_4c);
    *(float *)(this + 0x310) = fVar25;
    *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x120);
  }
LAB_00515292:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Ship::runSensorLogic(float)

void __thiscall Ship::runSensorLogic(Ship *this,float param_1)

{
  LogSystem *this_00;
  undefined1 uVar1;
  char cVar2;
  Ship SVar3;
  Dice *pDVar4;
  int iVar5;
  uint uVar6;
  Stats *pSVar7;
  FlagManager *pFVar8;
  SoundEngine *this_01;
  undefined4 *puVar9;
  GameData *pGVar10;
  void *pvVar11;
  undefined1 *puVar12;
  nothrow_t *pnVar13;
  SensorData *pSVar14;
  MetaGameAction *pMVar15;
  MetaGameAction *pMVar16;
  Vec2 *unaff_EDI;
  code *pcVar17;
  bool bVar18;
  float fVar19;
  MetaGameAction *pMVar20;
  MetaGameAction *pMVar21;
  undefined4 uVar23;
  undefined1 auVar22 [16];
  float in_XMM1_Da;
  basic_string<> abStack_dc [12];
  undefined4 uStack_d0;
  MetaGameAction aMStack_c4 [12];
  undefined4 uStack_b8;
  char *pcVar24;
  Ship *pSVar25;
  MetaGameAction **ppMVar27;
  undefined8 uVar26;
  MetaGameAction *local_74;
  MetaGameAction *local_70;
  MetaGameAction *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  float local_60;
  undefined1 *local_5c;
  float local_58;
  MetaGameAction *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  float local_48;
  float local_44;
  MetaGameAction *local_40;
  MetaGameAction *local_3c;
  char local_35;
  MetaGameAction *local_34;
  MetaGameAction *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  Dice *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c3c92;
  local_10 = ExceptionList;
  pDVar4 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pMVar15 = (MetaGameAction *)0x0;
  local_30 = (MetaGameAction *)0x0;
  local_34 = (MetaGameAction *)0x0;
  local_14 = pDVar4;
  if (((int *)**(int **)(this + 0x40) != (int *)0x0) &&
     (local_48 = in_XMM1_Da, cVar2 = (**(code **)(*(int *)**(int **)(this + 0x40) + 0x10))(),
     cVar2 != '\0')) {
    if ((this[0x234] != (Ship)0x0) &&
       (((*(int *)(this + 0xd4) != 3 || (*(int *)(this + 0xf8) != 2)) &&
        (*(char *)(*(int *)(g_gameData + 0xcc) + 0x310) != '\0')))) {
      fVar19 = *(float *)(this + 0x114);
      if (fVar19 == -1.0) {
        iVar5 = diceRoll(pDVar4);
        fVar19 = (float)iVar5;
      }
      *(float *)(this + 0x114) = fVar19 - local_48;
      if (fVar19 - local_48 <= 0.0) {
        iVar5 = diceRoll(pDVar4);
        pcVar17 = rand_exref;
        *(float *)(this + 0x114) = (float)iVar5;
        uVar6 = rand();
        uVar6 = uVar6 & 0x80000001;
        bVar18 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar18) goto LAB_00515633;
        if (this[0x234] == (Ship)0x0) goto LAB_00515633;
        local_50 = &DAT_bf800000;
        local_4c = &DAT_bf800000;
        uVar6 = 0;
        iVar5 = *(int *)(this + 0x24);
        if (*(int *)(iVar5 + 0xd0) - *(int *)(iVar5 + 0xcc) >> 2 == 0) {
LAB_0051562d:
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          pcVar17 = rand_exref;
          goto LAB_00515633;
        }
        do {
          local_30 = *(MetaGameAction **)(iVar5 + 0xcc);
          iVar5 = *(int *)(local_30 + uVar6 * 4);
          if ((*(int *)(*(int *)(iVar5 + 0x254) + 0x158) == 0) &&
             (*(char *)(*(int *)(iVar5 + 0x40) + 0x34) == '\0')) {
            if (((float)local_50 == -1.0) && ((float)local_4c == -1.0)) {
LAB_005154fa:
              bVar18 = true;
            }
            else {
              local_60 = (float)*(double *)(iVar5 + 0x28);
              local_5c = (undefined1 *)(float)*(double *)(iVar5 + 0x30);
              local_44 = (float)*(double *)(this + 0x28);
              local_40 = (MetaGameAction *)(float)*(double *)(this + 0x30);
              local_58 = (float)*(double *)(*(int *)(local_30 + uVar6 * 4) + 0x28);
              pMVar20 = (MetaGameAction *)(float)*(double *)(*(int *)(local_30 + uVar6 * 4) + 0x30);
              local_8 = 3;
              local_34 = (MetaGameAction *)((uint)pMVar15 | 7);
              local_54 = pMVar20;
              local_30 = local_34;
              fastDistance((Vec2 *)pDVar4,unaff_EDI);
              local_3c = pMVar20;
              fastDistance((Vec2 *)pDVar4,unaff_EDI);
              if ((float)local_3c < (float)pMVar20) goto LAB_005154fa;
              bVar18 = false;
            }
            if (((uint)local_34 & 4) != 0) {
              local_34 = (MetaGameAction *)((uint)local_34 & 0xfffffffb);
            }
            if (((uint)local_34 & 2) != 0) {
              local_34 = (MetaGameAction *)((uint)local_34 & 0xfffffffd);
            }
            if (((uint)local_34 & 1) != 0) {
              local_34 = (MetaGameAction *)((uint)local_34 & 0xfffffffe);
            }
            pMVar15 = local_34;
            if (bVar18) {
              iVar5 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xcc) + uVar6 * 4);
              local_68 = (undefined1 *)(float)*(double *)(iVar5 + 0x28);
              local_64 = (undefined1 *)(float)*(double *)(iVar5 + 0x30);
              local_50 = local_68;
              local_4c = local_64;
            }
          }
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          iVar5 = *(int *)(this + 0x24);
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)(*(int *)(iVar5 + 0xd0) - *(int *)(iVar5 + 0xcc) >> 2));
        if (((float)local_50 == -1.0) || ((float)local_4c == -1.0)) goto LAB_0051562d;
        uVar23 = 0;
        puVar12 = local_4c;
        trueAngleToPosition(this);
        pcVar17 = rand_exref;
        iVar5 = rand();
        pMVar15 = (MetaGameAction *)
                  (int)((double)(iVar5 % 0x14 + -10) + (double)CONCAT44(uVar23,puVar12));
        local_30 = pMVar15;
        if ((int)(*(float *)(this + 0x120) - (float)(int)pMVar15) - 0x82U < 0x65) goto LAB_00515633;
        debugPrint("DETAIL","Added ghost in vague direction of an enemy.");
        while (pMVar15 == (MetaGameAction *)0xffffffff) {
LAB_00515633:
          do {
            iVar5 = (*pcVar17)();
            local_30 = (MetaGameAction *)(iVar5 % 0x168);
            pMVar15 = local_30;
          } while ((int)(*(float *)(this + 0x120) - (float)(int)local_30) - 0x82U < 0x65);
        }
        iVar5 = 8;
        do {
          rand();
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        positionDelta((float)pDVar4,(float)unaff_EDI);
        local_8 = 4;
        uVar6 = rand();
        uVar6 = uVar6 & 0x80000001;
        bVar18 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar18) {
          local_30 = (MetaGameAction *)0x0;
        }
        else {
          iVar5 = rand();
          local_30 = (MetaGameAction *)((float)(iVar5 % 100) / 100.0);
        }
        iVar5 = rand();
        addSensorGhost(this,(int)local_58,(int)(float)local_54,iVar5 % 0x168,(float)local_30);
      }
    }
    pMVar20 = (MetaGameAction *)0x0;
    pMVar15 = (MetaGameAction *)0x0;
    local_30 = (MetaGameAction *)0x0;
    local_74 = (MetaGameAction *)0x0;
    local_3c = (MetaGameAction *)0x0;
    local_70 = (MetaGameAction *)0x0;
    local_34 = (MetaGameAction *)0x0;
    local_6c = (MetaGameAction *)0x0;
    local_8._0_1_ = 5;
    local_8._1_3_ = 0;
    iVar5 = *(int *)(this + 0x214);
    local_40 = (MetaGameAction *)0x0;
    if (*(int *)(this + 0x218) - iVar5 >> 2 != 0) {
      do {
        pMVar16 = local_40;
        ppMVar27 = *(MetaGameAction ***)(iVar5 + (int)local_40 * 4);
        if ((float)ppMVar27[0x10] <= 120.0) {
          if ((ppMVar27[0x38] != (MetaGameAction *)0x0) || ((float)ppMVar27[0x10] <= 1.0)) {
            if ((ppMVar27[0x38] == (MetaGameAction *)&DAT_00000001) &&
               ((float)ppMVar27[0x45] != -1.0)) {
              pMVar21 = (MetaGameAction *)((float)ppMVar27[0x45] - local_48);
              ppMVar27[0x45] = pMVar21;
              if ((float)pMVar21 <= 0.0) {
                pMVar21 = (MetaGameAction *)((float)ppMVar27[0x4a] - local_48 * 0.4);
                ppMVar27[0x4a] = pMVar21;
                if ((float)pMVar21 <= 0.0) {
                  ppMVar27[0x4a] = (MetaGameAction *)0x0;
                }
                ppMVar27[0x45] = (MetaGameAction *)&DAT_bf800000;
              }
              else {
                ppMVar27[0x10] = (MetaGameAction *)0x0;
                ppMVar27[0x4a] = (MetaGameAction *)(local_48 * 0.9 + (float)ppMVar27[0x4a]);
              }
            }
            if ((0.0 < (float)ppMVar27[0x46]) &&
               (pMVar21 = (MetaGameAction *)((float)ppMVar27[0x46] - local_48),
               ppMVar27[0x46] = pMVar21, (float)pMVar21 <= 0.0)) {
              ppMVar27[0x46] = (MetaGameAction *)0x0;
              ppMVar27 = *(MetaGameAction ***)(*(int *)(this + 0x214) + (int)local_40 * 4);
              pMVar21 = ppMVar27[0x38];
              if ((pMVar21 == (MetaGameAction *)&DAT_00000001) ||
                 (pMVar21 == (MetaGameAction *)&DAT_00000002)) {
                if (pMVar15 == pMVar20) goto LAB_00515779;
                *(MetaGameAction **)pMVar20 = *ppMVar27;
                pMVar20 = pMVar20 + 4;
                local_70 = pMVar20;
                local_3c = pMVar20;
              }
              else {
                SVar3 = this[0x234];
                if (SVar3 == (Ship)0x0) {
LAB_00515979:
                  if ((*(int *)(this + 0x44) != 0) && (*(int *)(*(int *)(this + 0x44) + 0x70) == 2))
                  {
                    uVar6 = 0;
                    pGVar10 = g_gameData + 0x9c;
                    pMVar16 = local_40;
                    if (*(int *)(g_gameData + 0xa0) - *(int *)pGVar10 >> 2 != 0) {
                      do {
                        iVar5 = *(int *)(uVar6 * 4 + *(int *)pGVar10);
                        if (((*(char *)(iVar5 + 0x18) != '\0') &&
                            (*(int *)(iVar5 + 0x1c) == *(int *)(this + 0x24))) &&
                           (bVar18 = std::_Traits_equal<>("",0,(char *)pDVar4,(uint)unaff_EDI),
                           !bVar18)) {
                          debugPrint("GAME",
                                     "Player was detected by a pirate, which is a scenario-specific setting."
                                    );
                          local_64 = &stack0xffffff54;
                          std::basic_string<>::basic_string<>
                                    ((basic_string<> *)&stack0xffffff54,
                                     (basic_string<> *)
                                     (*(int *)(*(int *)(g_gameData + 0x9c) + uVar6 * 4) + 0x5c));
                          local_8._0_1_ = 9;
                          pFVar8 = Singleton<>::getInstance();
                          local_8._0_1_ = 5;
                          FlagManager::setFlag(pFVar8);
                        }
                        uVar6 = uVar6 + 1;
                        pGVar10 = g_gameData + 0x9c;
                        pMVar16 = local_40;
                        pMVar20 = local_3c;
                      } while (uVar6 < (uint)(*(int *)(g_gameData + 0xa0) - *(int *)pGVar10 >> 2));
                    }
                  }
                }
                else {
                  if (pMVar21 == (MetaGameAction *)0x5) {
                    local_5c = &stack0xffffff58;
                    std::basic_string<>::assign
                              ((basic_string<> *)&stack0xffffff58,"beacons_detected",0x10);
                    local_8._0_1_ = 6;
                    pSVar7 = Singleton<Stats>::getInstance();
                    local_8._0_1_ = 5;
                    Stats::addStat(pSVar7);
                    uStack_b8 = 0x515913;
                    local_5c = &stack0xffffff54;
                    std::basic_string<>::assign((basic_string<> *)&stack0xffffff54,"",0);
                    local_30 = aMStack_c4;
                    local_8._0_1_ = 7;
                    aMStack_c4[0] = (MetaGameAction)0x0;
                    uStack_d0 = 0x51593c;
                    std::basic_string<>::assign
                              ((basic_string<> *)aMStack_c4,"beacons_detected",0x10);
                    local_8._0_1_ = 8;
                    abStack_dc[0] = (basic_string<>)0x0;
                    std::basic_string<>::assign(abStack_dc,"play",4);
                    local_8._0_1_ = 5;
                    Analytics::logEvent();
                    SVar3 = this[0x234];
                  }
                  if (SVar3 == (Ship)0x0) goto LAB_00515979;
                }
                iVar5 = *(int *)(*(int *)(this + 0x214) + (int)pMVar16 * 4);
                pMVar15 = local_34;
                if (*(int *)(iVar5 + 0xe0) == 0) {
                  iVar5 = *(int *)(iVar5 + 0x130);
                  local_35 = '\0';
                  local_58 = (float)*(double *)(iVar5 + 0x28);
                  local_54 = (MetaGameAction *)(float)*(double *)(iVar5 + 0x30);
                  auVar22 = ZEXT416((uint)(float)*(double *)(this + 0x30));
                  local_8._0_1_ = 0xb;
                  fastDistance((Vec2 *)pDVar4,unaff_EDI);
                  pMVar15 = local_40;
                  local_8._0_1_ = 5;
                  uVar1 = (undefined1)local_8;
                  local_8._0_1_ = 5;
                  local_30 = auVar22._0_4_;
                  if (this[0x234] == (Ship)0x0) {
                    iVar5 = *(int *)(this + 0x214);
                    local_8._0_1_ = uVar1;
                    if (*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + (int)pMVar16 * 4) + 0x130) +
                                         0x254) + 0x158) == 0) {
                      debugPrint("GAME",
                                 "%s: Analysed vessel \'%s\' for the first time at a distance of %f"
                                );
                      iVar5 = *(int *)(this + 0x214);
                    }
                    if (*(char *)(*(int *)(*(int *)(iVar5 + (int)pMVar16 * 4) + 0x130) + 0x234) !=
                        '\0') {
                      debugPrint("GAME","%s: Player detected.");
                      iVar5 = *(int *)(this + 0x214);
                    }
                    pMVar15 = local_34;
                    if ((*(char *)(*(int *)(*(int *)(iVar5 + (int)pMVar16 * 4) + 0x130) + 0x234) !=
                         '\0') &&
                       (iVar5 = *(int *)(*(int *)(this + 0x44) + 0x124), pMVar16 = local_40,
                       iVar5 != 0)) {
                      bVar18 = std::_Traits_equal<>("",0,(char *)pDVar4,(uint)unaff_EDI);
                      pMVar15 = local_34;
                      pMVar16 = local_40;
                      if (!bVar18) {
                        local_64 = &stack0xffffff54;
                        std::basic_string<>::basic_string<>
                                  ((basic_string<> *)&stack0xffffff54,
                                   (basic_string<> *)(iVar5 + 0x1c4));
                        local_8._0_1_ = 0xe;
                        pFVar8 = Singleton<>::getInstance();
                        local_8._0_1_ = 5;
                        FlagManager::setFlag(pFVar8);
                        pMVar15 = local_34;
                        pMVar16 = local_40;
                      }
                    }
                  }
                  else {
                    this_00 = *(LogSystem **)
                               (*(int *)(*(int *)(this + 0x214) + (int)local_40 * 4) + 0x130);
                    iVar5 = *(int *)(*(int *)(this_00 + 0x254) + 0x158);
                    if (((iVar5 == 2) || (iVar5 == 1)) || (iVar5 == 3)) {
                      if (*(char *)(*(int *)(this_00 + 0x40) + 0x34) == '\0') {
                        pcVar24 = &DAT_00000001;
LAB_00515bd7:
                        LogSystem::addLogLine(this_00,*(LogPriority *)(this + 0x224),pcVar24);
                      }
                    }
                    else if (iVar5 == 4) {
                      if (*(Ship **)(this_00 + 0x39c) != this) {
                        LogSystem::addLogLine(this_00,*(LogPriority *)(this + 0x224),(char *)0x3);
                        local_35 = '\x01';
                      }
                    }
                    else {
                      if (*(char *)(*(int *)(this_00 + 0x40) + 0x34) != '\0') {
                        pcVar24 = (char *)0x0;
                        goto LAB_00515bd7;
                      }
                      if ((this_00 != (LogSystem *)0x0) &&
                         (*(int *)(this_00 + 100) != *(int *)(this + 100))) {
                        LogSystem::addLogLine(this_00,*(LogPriority *)(this + 0x224),&DAT_00000001);
                        local_35 = '\x01';
                      }
                      debugPrint("GAME","%s: Detected %s at distance: %.2f");
                    }
                    if (((*(int *)(g_gameData + 0xcc) != 0) &&
                        (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
                       (*(int *)(*(int *)(*(int *)(this + 0x214) + (int)pMVar15 * 4) + 0x130) != 0))
                    {
                      strUsingArgs((char *)local_2c);
                      local_8._0_1_ = 0xc;
                      std::transform<>();
                      local_64 = &stack0xffffff54;
                      std::basic_string<>::basic_string<>
                                ((basic_string<> *)&stack0xffffff54,(basic_string<> *)local_2c);
                      local_8._0_1_ = 0xd;
                      pFVar8 = Singleton<>::getInstance();
                      local_8._0_1_ = 0xc;
                      FlagManager::setFlag(pFVar8);
                      local_8._0_1_ = 5;
                      if (0xf < local_18) {
                        pnVar13 = (nothrow_t *)(local_18 + 1);
                        pvVar11 = local_2c[0];
                        if ((nothrow_t *)0xfff < pnVar13) {
                          pvVar11 = *(void **)((int)local_2c[0] + -4);
                          pnVar13 = (nothrow_t *)(local_18 + 0x24);
                          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))
                          goto LAB_00515f8f;
                        }
                        operator_delete(pvVar11,pnVar13);
                      }
                      local_1c = 0;
                      local_18 = 0xf;
                      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
                    }
                    pMVar15 = local_34;
                    pMVar16 = local_40;
                    pMVar20 = local_3c;
                    if (local_35 != '\0') {
                      uVar26 = 0xffffffff00000001;
                      pSVar25 = this;
                      this_01 = Singleton<>::getInstance();
                      SoundEngine::playSound
                                (this_01,pSVar25,(Sound)uVar26,(int)((ulonglong)uVar26 >> 0x20));
                      pMVar15 = local_34;
                      pMVar16 = local_40;
                      pMVar20 = local_3c;
                    }
                  }
                }
              }
            }
          }
        }
        else if (pMVar15 == pMVar20) {
LAB_00515779:
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_74,(MetaGameAction **)pMVar20,ppMVar27);
          local_34 = local_6c;
          local_3c = local_70;
          pMVar15 = local_6c;
          pMVar20 = local_70;
        }
        else {
          *(MetaGameAction **)pMVar20 = *ppMVar27;
          pMVar20 = pMVar20 + 4;
          local_70 = pMVar20;
          local_3c = pMVar20;
        }
        local_40 = pMVar16 + 1;
        iVar5 = *(int *)(this + 0x214);
      } while (local_40 < (MetaGameAction *)(*(int *)(this + 0x218) - iVar5 >> 2));
      local_30 = local_74;
    }
    pMVar20 = (MetaGameAction *)((int)pMVar20 - (int)local_30 >> 2);
    local_40 = (MetaGameAction *)0x0;
    pMVar15 = local_30;
    local_74 = local_30;
    local_3c = pMVar20;
    if (pMVar20 != (MetaGameAction *)0x0) {
      do {
        if (*(int *)(pMVar15 + (int)local_40 * 4) != -1) {
          puVar12 = (undefined1 *)0x0;
          puVar9 = *(undefined4 **)(this + 0x214);
          local_5c = (undefined1 *)(*(int *)(this + 0x218) - (int)puVar9 >> 2);
          pMVar15 = local_30;
          if (local_5c != (undefined1 *)0x0) {
            do {
              pSVar14 = (SensorData *)*puVar9;
              pMVar20 = local_3c;
              if (*(int *)pSVar14 == *(int *)(local_30 + (int)local_40 * 4)) goto LAB_00515eb9;
              puVar12 = puVar12 + 1;
              puVar9 = puVar9 + 1;
            } while (puVar12 < local_5c);
          }
        }
        pSVar14 = (SensorData *)0x0;
LAB_00515eb9:
        removeSensorData(this,pSVar14);
        local_40 = local_40 + 1;
      } while (local_40 < pMVar20);
    }
    if (((this[0x1b2] != (Ship)0x0) &&
        (fVar19 = *(float *)(this + 0x110), *(float *)(this + 0x110) = fVar19 - local_48,
        fVar19 - local_48 <= 0.0)) &&
       (pSVar14 = getMostDangerousSensorObject(this), *(SensorData **)(this + 0x194) != pSVar14)) {
      *(SensorData **)(this + 0x194) = pSVar14;
      if (pSVar14 == (SensorData *)0x0) {
        *(undefined4 *)(this + 400) = 0xffffffff;
      }
      else {
        *(undefined4 *)(this + 400) = *(undefined4 *)pSVar14;
        *(undefined4 *)(this + 400) = *(undefined4 *)pSVar14;
        debugPrint("GAME","%s: Auto-selected new object: %d");
      }
      *(undefined4 *)(this + 0x1ac) = 0;
      *(undefined4 *)(this + 0x1a8) = 0xffffffff;
    }
    if (pMVar15 != (MetaGameAction *)0x0) {
      pnVar13 = (nothrow_t *)((int)local_34 - (int)pMVar15 & 0xfffffffc);
      pMVar20 = pMVar15;
      if ((nothrow_t *)0xfff < pnVar13) {
        pMVar20 = *(MetaGameAction **)(pMVar15 + -4);
        pnVar13 = pnVar13 + 0x23;
        if ((MetaGameAction *)0x1f < pMVar15 + (-4 - (int)pMVar20)) {
LAB_00515f8f:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pMVar20,pnVar13);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall Ship::canDetectPlayerShip(void)

bool __thiscall Ship::canDetectPlayerShip(Ship *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x214);
  while( true ) {
    if (piVar2 == *(int **)(this + 0x218)) {
      return false;
    }
    iVar1 = *(int *)(*piVar2 + 0x130);
    if (((iVar1 != 0) && (iVar1 == *(int *)(g_gameData + 0xd0))) &&
       (*(float *)(*piVar2 + 0x118) == 0.0)) break;
    piVar2 = piVar2 + 1;
  }
  return true;
}


// public: void __thiscall Ship::addSensorGhost(int,int,int,float)

void __thiscall Ship::addSensorGhost(Ship *this,int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  AnimationFrames **ppAVar2;
  Dice *pDVar3;
  SensorData *this_00;
  AnimationFrames *pAVar4;
  int iVar5;
  uint uVar6;
  Ship *pSVar7;
  int iVar8;
  int iVar9;
  AnimationFrames *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3cd2;
  local_10 = ExceptionList;
  pDVar3 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  this_00 = operator_new(0x138);
  local_8 = 0;
  iVar9 = *(int *)(this + 0x220);
  *(int *)(this + 0x220) = iVar9 + 1;
  diceRoll(pDVar3);
  pAVar4 = (AnimationFrames *)SensorData::SensorData(this_00,-1,iVar9,(float)pDVar3);
  local_8 = 0xffffffff;
  iVar8 = 0;
  *(double *)(pAVar4 + 0x10) = (double)param_1 + *(double *)(this + 0x28);
  *(double *)(pAVar4 + 0x18) = (double)param_2 + *(double *)(this + 0x30);
  iVar9 = 9;
  local_14 = pAVar4;
  do {
    iVar5 = rand();
    iVar8 = iVar8 + iVar5 % 6 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar8 = iVar8 + -10;
  if (iVar8 < 3) {
    iVar8 = 3;
  }
  *(int *)(pAVar4 + 0xe8) = iVar8;
  iVar9 = rand();
  switch(iVar9 % 5) {
  case 0:
    *(undefined4 *)(pAVar4 + 0xe4) = 0x44c;
    pAVar4[0x10f] = (AnimationFrames)0x1;
    break;
  case 1:
    *(undefined4 *)(pAVar4 + 0xe4) = 800;
    break;
  case 2:
    *(undefined4 *)(pAVar4 + 0xe4) = 0xbe;
    pAVar4[0x10e] = (AnimationFrames)0x1;
    break;
  case 3:
    *(undefined4 *)(pAVar4 + 0xe4) = 0x5f0;
    pAVar4[0x112] = (AnimationFrames)0x1;
    break;
  case 4:
    *(undefined4 *)(pAVar4 + 0xe4) = 0x4c;
  }
  iVar8 = 0;
  iVar9 = 2;
  do {
    uVar6 = rand();
    uVar6 = uVar6 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    iVar8 = iVar8 + 1 + uVar6;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(int *)(pAVar4 + 0xe4) = *(int *)(pAVar4 + 0xe4) + iVar8 + -4;
  if (*(int *)(pAVar4 + 0xe4) < 2) {
    *(undefined4 *)(pAVar4 + 0xe4) = 2;
  }
  else if (0x63e < *(int *)(pAVar4 + 0xe4)) {
    *(undefined4 *)(pAVar4 + 0xe4) = 0x63e;
  }
  *(float *)(pAVar4 + 0x3c) = (float)param_3;
  *(float *)(pAVar4 + 0x38) = (float)param_3;
  *(float *)(pAVar4 + 0x34) = param_4;
  *(undefined2 *)(pAVar4 + 8) = 0x101;
  *(undefined4 *)(pAVar4 + 0xe0) = 1;
  iVar9 = rand();
  if (iVar9 % 6 < 2) {
    *(undefined1 **)(pAVar4 + 0x114) = &DAT_bf800000;
  }
  else {
    fVar1 = *(float *)(pAVar4 + 0x118);
    iVar9 = rand();
    *(float *)(pAVar4 + 0x114) = (float)(iVar9 % (int)fVar1);
    debugPrint("DETAIL","Ghost detection timer: %.0f/%.0f",(double)(iVar9 % (int)fVar1),
               (double)*(float *)(pAVar4 + 0x118));
  }
  ppAVar2 = *(AnimationFrames ***)(this + 0x218);
  if (*(AnimationFrames ***)(this + 0x21c) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x214),ppAVar2,&local_14);
    pAVar4 = local_14;
  }
  else {
    *ppAVar2 = pAVar4;
    *(int *)(this + 0x218) = *(int *)(this + 0x218) + 4;
  }
  pSVar7 = this + 8;
  if (0xf < *(uint *)(this + 0x1c)) {
    pSVar7 = *(Ship **)pSVar7;
  }
  debugPrint("GAME","%s: Added sensor ghost at delta %d, %d to ship %s (freq: %d, str: %d)",pSVar7,
             param_1,param_2,pSVar7,*(undefined4 *)(pAVar4 + 0xe4),*(undefined4 *)(pAVar4 + 0xe8));
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::takeHazardDamage(void)

void __thiscall Ship::takeHazardDamage(Ship *this)

{
  int iVar1;
  Stats *this_00;
  uint extraout_ECX;
  basic_string<> local_78 [12];
  undefined4 uStack_6c;
  basic_string<> local_60 [12];
  undefined4 uStack_54;
  Ship *local_44;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bbf87;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(this + 0x184) != 0) {
    local_44 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      local_44 = *(Ship **)local_44;
    }
    debugPrint("DETAIL","%s: taking damage at %f, %f in hazard %s");
    if (this[0x234] != (Ship)0x0) {
      local_44 = (Ship *)0x516389;
      LogSystem::addLogLine
                (*(LogSystem **)(this + 0x184),*(LogPriority *)(this + 0x224),&DAT_00000004);
      local_44 = (Ship *)(extraout_ECX & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_44,"hazard_damage",0xd);
      local_8 = 0;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        this_00 = operator_new(0x58);
        local_8 = CONCAT31(local_8._1_3_,1);
        Singleton<Stats>::instance = (Stats *)Stats::Stats(this_00);
      }
      local_8 = 0xffffffff;
      Stats::addStat(Singleton<Stats>::instance);
      uStack_54 = 0x516412;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffffb8,"",0);
      local_8 = 2;
      local_60[0] = (basic_string<>)0x0;
      uStack_6c = 0x51643e;
      std::basic_string<>::assign(local_60,"hazard_damage",0xd);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_78[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_78,"play",4);
      local_8 = 0xffffffff;
      Analytics::logEvent();
      if (this[0x234] != (Ship)0x0) {
        iVar1 = *(int *)(*(int *)(this + 0x184) + 0x30);
        if (iVar1 == 2) {
          g_gameData[0x1c4] = (GameData)0x1;
        }
        else if (iVar1 == 3) {
          g_gameData[0x1c5] = (GameData)0x1;
        }
        else if (iVar1 == 4) {
          g_gameData[0x1c6] = (GameData)0x1;
        }
      }
    }
    rand();
    iVar1 = *(int *)this;
    diceRoll(*(Dice **)(*(int *)(this + 0x184) + 0x30));
    (**(code **)(iVar1 + 0xc))();
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::runCommsLogic(float)

void __thiscall Ship::runCommsLogic(Ship *this,float param_1)

{
  float fVar1;
  GameLogic *pGVar2;
  char cVar3;
  EmailManager *this_00;
  Ship *pSVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  CommsData *pCVar8;
  float fStack_10;
  
  if (*(int **)(*(int *)(this + 0x40) + 0x1c) != (int *)0x0) {
    cVar3 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x1c) + 0x10))(0);
    if (cVar3 != '\0') {
      iVar6 = *(int *)(this + 0x40);
      if (*(float *)(this + 0x160) == -1.0) {
        iVar6 = *(int *)(iVar6 + 0x1c);
        if (*(float *)(this + 0x164) == -1.0) {
          if (*(char *)(iVar6 + 0x62) != '\0') {
            *(undefined1 *)(iVar6 + 0x62) = 0;
          }
        }
        else {
          if (*(char *)(iVar6 + 0x62) != '\0') {
            *(undefined1 *)(iVar6 + 0x62) = 0;
          }
          if (this[0x15c] == (Ship)0x0) {
            *(undefined1 **)(this + 0x164) = &DAT_bf800000;
            return;
          }
          fVar1 = *(float *)(this + 0x164);
          *(float *)(this + 0x164) = fVar1 - fStack_10;
          if (fVar1 - fStack_10 <= 0.0) {
            pSVar4 = this + 8;
            *(undefined1 **)(this + 0x164) = &DAT_bf800000;
            if (0xf < *(uint *)(this + 0x1c)) {
              pSVar4 = *(Ship **)pSVar4;
            }
            pcVar7 = "%s: Beginning automated comms sync";
            goto LAB_005166c4;
          }
        }
      }
      else {
        if (*(char *)(*(int *)(iVar6 + 0x1c) + 0x62) == '\0') {
          *(undefined1 *)(*(int *)(iVar6 + 0x1c) + 0x62) = 1;
          iVar6 = *(int *)(this + 0x40);
        }
        if (*(char *)(*(int *)(iVar6 + 0x1c) + 0x60) == '\0') {
          pSVar4 = this + 8;
          if (0xf < *(uint *)(this + 0x1c)) {
            pSVar4 = *(Ship **)pSVar4;
          }
          pcVar7 = "%s: comms sync reset due to lack of power";
LAB_005166c4:
          debugPrint("DETAIL",pcVar7,pSVar4);
          iVar6 = *(int *)(*(int *)(this + 0x40) + 0x1c);
          iVar5 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)(iVar6 + 0xc));
          *(float *)(this + 0x160) =
               (((float)iVar5 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
               *(float *)(*(int *)(iVar6 + 8) + 0x104);
          return;
        }
        fVar1 = *(float *)(this + 0x160);
        *(float *)(this + 0x160) = fVar1 - fStack_10;
        pGVar2 = g_gameLogic;
        if (fVar1 - fStack_10 <= 0.0) {
          *(undefined1 **)(this + 0x160) = &DAT_bf800000;
          ComputerSystem::syncArticles
                    (*(ComputerSystem **)(pGVar2 + 0xc),*(undefined4 *)(g_gameData + 300),
                     *(undefined4 *)(this + 0x20),(float)*(double *)(this + 0x28),
                     (float)*(double *)(this + 0x30));
          pCVar8 = *(CommsData **)(g_gameData + 300);
          this_00 = Singleton<>::getInstance();
          EmailManager::syncEmails(this_00,pCVar8);
          pSVar4 = this + 8;
          if (0xf < *(uint *)(this + 0x1c)) {
            pSVar4 = *(Ship **)pSVar4;
          }
          debugPrint("DETAIL","%s: performed comms sync",pSVar4);
          if (this[0x15c] != (Ship)0x0) {
            *(undefined4 *)(this + 0x164) = 0x43340000;
            return;
          }
        }
      }
    }
  }
  return;
}


// public: void __thiscall Ship::runHeatLogic(float)

void __thiscall Ship::runHeatLogic(Ship *this,float param_1)

{
  float fVar1;
  LogSystem *pLVar2;
  uint uVar3;
  int iVar4;
  SoundEngine *pSVar5;
  int iVar6;
  LogSystem *this_00;
  uint uVar7;
  bool bVar8;
  float in_XMM1_Da;
  float fVar9;
  float fVar10;
  Ship *pSVar11;
  Sound SVar12;
  undefined8 uVar13;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3d02;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *(int *)(this + 0x24);
  if (iVar4 != 0) {
    local_2c = (float)*(double *)(this + 0x28);
    local_28 = (float)*(double *)(this + 0x30);
    local_8 = 0;
    uVar7 = 0;
    iVar6 = *(int *)(iVar4 + 0x84);
    local_18 = in_XMM1_Da;
    if (*(int *)(iVar4 + 0x88) - iVar6 >> 2 != 0) {
      do {
        iVar6 = *(int *)(iVar6 + uVar7 * 4);
        if (*(int *)(iVar6 + 0x54) == 1) {
          local_24 = (float)*(double *)(iVar6 + 0x20);
          local_20 = (float)*(double *)(iVar6 + 0x28);
          local_8 = CONCAT31(local_8._1_3_,1);
          fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)&local_24);
          local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
          fVar10 = (1.5 - fVar10 * 0.5 * local_14 * local_14) * local_14 * fVar10;
          if (fVar10 <= 22.0) {
            local_14 = 1.0 - fVar10 / 22.0;
            local_8 = 0xffffffff;
            if (0.0 < local_14) {
              fVar10 = (float)*(double *)(this + 0x28);
              Sector::getAngleToNearestStar
                        (*(Sector **)(this + 0x24),fVar10,(float)*(double *)(this + 0x30));
              *(float *)(this + 0x30c) = fVar10;
              fVar10 = local_14 * 120.0 * local_18 + *(float *)(this + 500);
              *(float *)(this + 500) = fVar10;
              goto LAB_005168d2;
            }
            break;
          }
        }
        uVar7 = uVar7 + 1;
        iVar6 = *(int *)(iVar4 + 0x84);
      } while (uVar7 < (uint)(*(int *)(iVar4 + 0x88) - iVar6 >> 2));
    }
    local_8 = 0xffffffff;
    fVar10 = *(float *)(this + 500);
    if (0.0 < fVar10) {
      fVar10 = fVar10 - local_18 * 36.0;
      *(float *)(this + 500) = fVar10;
      if (fVar10 < 0.0) {
        *(undefined4 *)(this + 500) = 0;
        debugPrint("DETAIL","%s: Hull temperature now at zero.");
        fVar10 = *(float *)(this + 500);
      }
    }
LAB_005168d2:
    fVar1 = *(float *)(this + 0x304);
    if (fVar1 != fVar10) {
      if (fVar1 < fVar10) {
        pLVar2 = *(LogSystem **)(*(int *)(this + 0x254) + 0xcc);
        fVar9 = (float)((int)pLVar2 / 3);
        if ((fVar10 <= fVar9) || (fVar9 < fVar1)) {
          if (((float)(int)pLVar2 < fVar10) && (fVar1 <= (float)(int)pLVar2)) {
            LogSystem::addLogLine
                      (pLVar2,*(LogPriority *)(this + 0x224),(char *)0x3,
                       "WARNING: Hull temperature passing %d degrees.",pLVar2,uVar3);
            LogSystem::addLogLine
                      (this_00,*(LogPriority *)(this + 0x224),&DAT_00000004,
                       "Serious hull damage imminent.");
            uVar13 = 0xffffffff00000025;
            pSVar11 = this;
            pSVar5 = Singleton<>::getInstance();
            SoundEngine::playSound(pSVar5,pSVar11,(Sound)uVar13,(int)((ulonglong)uVar13 >> 0x20));
          }
        }
        else if (*(int *)(*(int *)(this + 0x254) + 0x158) == 4) {
          pLVar2 = *(LogSystem **)(this + 0x39c);
          if ((pLVar2 != (LogSystem *)0x0) && (this[0x3fc] != (Ship)0x0)) {
            LogSystem::addLogLine
                      (pLVar2,*(LogPriority *)(pLVar2 + 0x224),&DAT_00000002,
                       "WARNING: Weapon from tube %d reporting high heat levels.",
                       *(int *)(this + 0x3c8) + 1,uVar3);
          }
        }
        else {
          LogSystem::addLogLine
                    (pLVar2,*(LogPriority *)(this + 0x224),&DAT_00000004,
                     "WARNING: Hull temperature passing %d degrees.",(int)pLVar2 / 3,uVar3);
        }
      }
      fVar10 = *(float *)(this + 500);
      *(float *)(this + 0x304) = fVar10;
    }
    if ((float)((int)(*(int *)(*(int *)(this + 0x254) + 0xcc) +
                     (*(int *)(*(int *)(this + 0x254) + 0xcc) >> 0x1f & 7U)) >> 3) <= fVar10) {
      fVar10 = *(float *)(this + 0x308);
      if (0.0 < fVar10) {
        fVar10 = fVar10 - local_18;
        *(float *)(this + 0x308) = fVar10;
        if (fVar10 < 0.0) {
          uVar3 = rand();
          uVar3 = uVar3 & 0x80000001;
          bVar8 = uVar3 == 0;
          if ((int)uVar3 < 0) {
            bVar8 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar8) {
            local_18 = *(float *)(this + 500) / (float)*(int *)(*(int *)(this + 0x254) + 0xcc);
            debugPrint("GAME",
                       "Damage modifier for upcoming heat damage, based on distance: angle %.0f, modifier %.02f"
                       ,(double)*(float *)(this + 0x30c),(double)local_18);
            iVar4 = rand();
            (**(code **)(*(int *)this + 0xc))
                      ((int)*(float *)(this + 0x30c),(float)(iVar4 % 0xe + 9) * local_18,5);
          }
          uVar3 = rand();
          uVar3 = uVar3 & 0x80000003;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
          }
          iVar4 = uVar3 + 1;
          SVar12 = 0x24;
          pSVar11 = this;
          pSVar5 = Singleton<>::getInstance();
          SoundEngine::playSound(pSVar5,pSVar11,SVar12,iVar4);
          fVar10 = *(float *)(this + 0x308);
        }
      }
      if (fVar10 <= 0.0) {
        uVar3 = rand();
        uVar3 = uVar3 & 0x80000003;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        *(float *)(this + 0x308) = (float)(int)(uVar3 + 3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall Ship::runHazardLogic(float)

void __thiscall Ship::runHazardLogic(Ship *this,float param_1)

{
  char cVar1;
  Dice *pDVar2;
  FlagManager *pFVar3;
  int iVar4;
  PresentationInterface *pPVar5;
  SoundEngine *this_00;
  int *piVar6;
  float fVar7;
  undefined4 uStack_3c;
  Ship *pSVar8;
  char *pcVar9;
  Sound SVar10;
  int iVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3d38;
  local_10 = ExceptionList;
  pDVar2 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  if (this[800] != (Ship)0x0) {
    return;
  }
  if (this[0x326] != (Ship)0x0) {
    return;
  }
  piVar6 = *(int **)(this + 0x184);
  if (piVar6 == (int *)0x0) {
    if (*(int *)(g_gameData + 0xcc) == 0) {
      return;
    }
    if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) {
      return;
    }
    if (this[0x324] == (Ship)0x0) {
      return;
    }
    ExceptionList = &local_10;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffffc0,"in_nebula",9);
    local_8 = 0;
    pFVar3 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar3);
    this[0x324] = (Ship)0x0;
    ExceptionList = local_10;
    return;
  }
  if (((*(int *)(this + 0x2fc) != *piVar6) || (*(int *)(this + 0x300) != piVar6[8])) ||
     (fVar7 = *(float *)(this + 0x148), ExceptionList = &local_10, fVar7 == -1.0)) {
    ExceptionList = &local_10;
    iVar4 = diceRoll(pDVar2);
    piVar6 = *(int **)(this + 0x184);
    fVar7 = (float)iVar4;
    *(float *)(this + 0x148) = fVar7;
    *(int *)(this + 0x2fc) = *piVar6;
    *(int *)(this + 0x300) = piVar6[8];
  }
  if (((char)piVar6[1] != '\0') &&
     (*(float *)(this + 0x148) = fVar7 - param_1, fVar7 - param_1 <= 0.0)) {
    iVar4 = diceRoll(pDVar2);
    *(float *)(this + 0x148) = (float)iVar4;
    if ((((*(int *)(this + 0x188) == 1) &&
         ((*(int **)(*(int *)(this + 0x40) + 0xc) != (int *)0x0 &&
          (cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0xc) + 0x10))(), cVar1 != '\0')))
         ) && (*(char *)(*(int *)(*(int *)(this + 0x40) + 0xc) + 0x62) != '\0')) &&
       (*(float *)(*(int *)(*(int *)(this + 0x40) + 0xc) + 0x6c) == -1.0)) {
      debugPrint("GAME","%s: firing point defence laser at incoming asteroid");
      iVar4 = diceRoll(pDVar2);
      uStack_3c = 0x516dea;
      debugPrint("DETAIL","%s: %d/%d");
      if (2 < iVar4) {
        pcVar9 = "%s: miss.";
      }
      else {
        pcVar9 = "%s: hit asteroid";
      }
      debugPrint("GAME",pcVar9);
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&uStack_3c,(basic_string<> *)(this + 0x238));
      local_8 = 1;
      pPVar5 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar5);
      iVar11 = -1;
      SVar10 = 0x21;
      pSVar8 = this;
      this_00 = Singleton<>::getInstance();
      SoundEngine::playSound(this_00,pSVar8,SVar10,iVar11);
      *(undefined4 *)(*(int *)(*(int *)(this + 0x40) + 0xc) + 0x6c) =
           *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 0xc) + 8) + 0x108);
      if (2 >= iVar4) goto LAB_00516e8f;
    }
    takeHazardDamage(this);
  }
LAB_00516e8f:
  if ((((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
      && (this[0x324] == (Ship)0x0)) &&
     ((*(int **)(this + 0x184) != (int *)0x0 && (**(int **)(this + 0x184) == 2)))) {
    std::basic_string<>::assign((basic_string<> *)&stack0xffffffc0,"in_nebula",9);
    local_8 = 2;
    pFVar3 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar3);
    this[0x324] = (Ship)0x1;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::resetBurnVector(void)

void __thiscall Ship::resetBurnVector(Ship *this)

{
  int iVar1;
  float fVar2;
  float unaff_EDI;
  float10 fVar3;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  basic_string<> abStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  Vec2 local_34 [16];
  undefined8 local_24;
  undefined8 local_1c;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3d69;
  local_10 = ExceptionList;
  fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar1 = *(int *)(this + 0x1c4);
  if (0x1f < (uint)(*(int *)(this + 0x1c8) - iVar1)) {
    local_24 = *(double *)(this + 0x28) - (double)*(float *)(iVar1 + 8);
    local_1c = (double)*(float *)(iVar1 + 0xc) - *(double *)(this + 0x30);
    fVar3 = (float10)__CIatan2();
    local_24 = (double)fVar3;
    dVar5 = (local_24 * 180.0) / 3.141592653589793 - 90.0;
    if (dVar5 < 0.0) {
      dVar5 = dVar5 + 360.0;
    }
    local_14 = (float)dVar5;
    local_1c = 0.0;
    local_8 = 0;
    fVar6 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_1c);
    local_1c = (double)CONCAT44(fVar6,(undefined4)local_1c);
    local_8 = 0xffffffff;
    if (fVar6 == 0.0) {
      *(float *)(this + 0x2cc) = local_14;
    }
    else {
      uStack_50 = 0.0;
      uStack_58 = (double)CONCAT44(0x51704c,(undefined4)uStack_58);
      angleInDegreesFrom();
      positionDelta(fVar2,unaff_EDI);
      positionDelta(fVar2,unaff_EDI);
      uStack_50 = (double)CONCAT44(0x517088,(undefined4)uStack_50);
      cocos2d::Vec2::operator-(local_34,(Vec2 *)&local_24);
      uStack_50 = 0.0;
      uStack_58 = (double)CONCAT44(0x5170b7,(undefined4)uStack_58);
      uVar4 = local_24._4_4_;
      angleInDegreesFrom();
      *(undefined4 *)(this + 0x2cc) = uVar4;
    }
    *(float *)(*(int *)(this + 0x1c4) + 0x10) = local_14;
    fVar2 = SUB84((double)local_14,0);
    uStack_50 = *(double *)(this + 0x118);
    uStack_58 = 0.0;
    uStack_5c = 0x517108;
    angleInDegreesFrom();
    uStack_50 = (double)fVar2;
    uStack_58 = (double)*(float *)(this + 0x2cc);
    uStack_60 = 0;
    uStack_5c = 0xf;
    abStack_70[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(abStack_70,"Picked a burn angle of %f, to get from %f to %d",0x2f);
    log();
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::switchTravelState(enum ETravelState::TravelState)

void __thiscall Ship::switchTravelState(Ship *this,TravelState param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  double dVar4;
  basic_string<> abStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(TravelState *)(this + 0x2c0) == param_1) {
    if (param_1 != 2) {
      return;
    }
  }
  else {
    *(TravelState *)(this + 0x2c0) = param_1;
    this[0x2c8] = (Ship)0x0;
    if (param_1 != 2) {
      return;
    }
    uStack_1c = 0x517193;
    resetBurnVector(this);
  }
  iVar1 = *(int *)(this + 0x1c4);
  if (*(int *)(this + 0x1c8) - iVar1 >> 5 != 0) {
    uStack_1c = 0x5171ee;
    fVar2 = (float10)__CIatan2();
    dVar4 = ((double)fVar2 * 180.0) / 3.141592653589793 - 90.0;
    if (dVar4 < 0.0) {
      dVar4 = dVar4 + 360.0;
    }
    fVar3 = *(float *)(iVar1 + 0x10);
    if (fVar3 != -1.0) {
      fVar3 = fVar3 - (float)dVar4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 * -1.0;
      }
      if (fVar3 < 45.0) {
        return;
      }
    }
    uStack_20 = 0;
    uStack_1c = 0xf;
    abStack_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(abStack_30,"Resetting angle to target / burn vector.",0x28);
    log();
    uStack_1c = 0x517286;
    resetBurnVector(this);
  }
  return;
}


// public: void __thiscall Ship::runMotionLogic(float)

void __thiscall Ship::runMotionLogic(Ship *this,float param_1)

{
  vector<> *pvVar1;
  float fVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  Vec2 *pVVar6;
  float fVar7;
  int iVar8;
  Vec2 *unaff_EDI;
  float fVar9;
  undefined4 uVar11;
  double dVar10;
  undefined1 *puVar12;
  basic_string<> abStack_78 [12];
  undefined4 uStack_6c;
  TravelState TVar13;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c3dab;
  local_10 = ExceptionList;
  pVVar6 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  dVar10 = (double)(ulonglong)(uint)*(float *)(this + 0x128);
  if (*(float *)(this + 0x128) != -1.0) {
    if (((*(int **)(*(int *)(this + 0x40) + 0x18) != (int *)0x0) &&
        (cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x10))(), cVar4 != '\0'))
       && (*(char *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) == '\0')) {
      *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 1;
    }
    fVar7 = *(float *)(this + 0x120);
    differenceBetweenAngles((float)pVVar6,(float)unaff_EDI);
    fVar9 = *(float *)(this + 0x128);
    uVar11 = 0;
    local_24 = fVar7;
    differenceBetweenAngles((float)pVVar6,(float)unaff_EDI);
    dVar10 = (double)CONCAT44(uVar11,fVar9);
    if (fVar9 <= local_24) {
      *(float *)(this + 0x120) = *(float *)(this + 0x128);
      dVar10 = (double)*(float *)(this + 0x128);
      abStack_78[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(abStack_78,"Hit desired angle of %f",0x17);
      log();
      *(undefined1 **)(this + 0x128) = &DAT_bf800000;
      *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x62) = 0;
    }
  }
  pvVar1 = (vector<> *)(this + 0x1c4);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x120);
  iVar8 = *(int *)pvVar1;
  if ((uint)(*(int *)(this + 0x1c8) - iVar8) < 0x20) {
    debugPrint("DETAIL","Motion complete.");
    switchTravelState(this,0);
    *(undefined4 *)(this + 0xd4) = 0;
    *(undefined4 *)(this + 0x2c0) = 0;
    *(undefined4 *)(this + 0x2c4) = 0;
    ExceptionList = local_10;
    return;
  }
  if ((*(float *)(iVar8 + 8) == -9999.0) &&
     (dVar10 = (double)(ulonglong)(uint)*(float *)(iVar8 + 0xc), *(float *)(iVar8 + 0xc) == -9999.0)
     ) {
    performAllStopLogic(this,(float)pVVar6);
    ExceptionList = local_10;
    return;
  }
  if (*(float *)(iVar8 + 8) == 0.0) {
    fVar7 = *(float *)(iVar8 + 0xc);
    uVar11 = 0;
    dVar10 = (double)(ulonglong)(uint)fVar7;
    if (fVar7 == 0.0) {
      debugPrint("DETAIL","WARNING: Heading to 0, 0 for some reason.");
      dVar10 = (double)CONCAT44(uVar11,fVar7);
      iVar8 = *(int *)pvVar1;
    }
  }
  trueAngleToPosition(this);
  local_14 = (float)dVar10;
  local_28 = (float)*(double *)(this + 0x28);
  local_24 = (float)*(double *)(this + 0x30);
  local_8 = 0;
  local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)(iVar8 + 8));
  fVar7 = (float)(0x5f3759df - ((uint)local_20 >> 1));
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = (1.5 - local_20 * 0.5 * fVar7 * fVar7) * fVar7 * local_20;
  local_8 = 1;
  local_18 = fVar7;
  local_18 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_28);
  local_8 = 0xffffffff;
  distanceToDecelerateFromFull(this);
  uStack_6c = 0x517564;
  local_24 = fVar7;
  angleInDegreesFrom();
  if (*(int *)(*(int *)(this + 0x40) + 0x18) == 0) {
    puVar12 = &DAT_bf800000;
  }
  else {
    puVar12 = (undefined1 *)
              (360.0 / *(float *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 8) + 0x104));
  }
  fVar9 = local_24 * 1.4;
  local_1c = fVar7;
  if (((float)puVar12 * 1.4 + fVar9 <= local_20) || (getSpeed(this), fVar9 <= 0.0)) {
    if (0.2 <= local_18) {
      TVar13 = 2;
    }
    else {
      TVar13 = 1;
    }
  }
  else {
    TVar13 = 4;
  }
  switchTravelState(this,TVar13);
  iVar8 = *(int *)(this + 0x2c0);
  *(int *)(this + 0x2c4) = iVar8;
  fVar7 = SUB84((double)local_20,0);
  *(double *)(this + 0x138) = (double)local_20;
  if (iVar8 != 1) {
    if (iVar8 == 2) {
      fVar7 = (float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] * 0.5;
      if ((local_14 < local_1c - fVar7) || (fVar9 = fVar7 + local_1c, fVar9 < local_14)) {
        fVar9 = *(float *)(this + 0x2cc);
        fVar2 = *(float *)(this + 0x120);
        if ((fVar2 < fVar9 - fVar7) || (fVar9 + fVar7 < fVar2)) {
          rotateTo(this,(float)pVVar6);
          ExceptionList = local_10;
          return;
        }
        if (fVar2 != fVar9) {
          *(float *)(this + 0x120) = fVar9;
        }
      }
      else {
        if (local_14 != local_1c) {
          setMotionAngle(this,(float)pVVar6);
          getMotionAngle(this);
          local_1c = fVar9;
        }
        if (((local_14 != *(float *)(this + 0x120)) &&
            (iVar8 = SystemManager::getCurrentPowerPercentage(*(SystemManager **)(this + 0x40)),
            0x19 < iVar8)) &&
           ((*(float *)(this + 0x120) != local_14 ||
            ((*(int **)(*(int *)(this + 0x40) + 0x18) == (int *)0x0 ||
             (cVar4 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x10))(),
             cVar4 != '\0')))))) {
          rotateTo(this,(float)pVVar6);
        }
        if ((((local_14 < local_1c - 0.01) || (local_1c + 0.01 < local_14)) ||
            (*(float *)(this + 0x120) != local_14)) ||
           ((*(float *)(*(int *)(this + 0x254) + 0x108) <= local_18 ||
            (iVar8 = SystemManager::getCurrentPowerPercentage(*(SystemManager **)(this + 0x40)),
            iVar8 < 0x10)))) {
          if (*(char *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) == '\0') {
            ExceptionList = local_10;
            return;
          }
          *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 0;
          ExceptionList = local_10;
          return;
        }
      }
      *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 1;
      ExceptionList = local_10;
      return;
    }
    if (iVar8 == 4) {
      iVar8 = *(int *)(*(int *)(this + 0x40) + 0x10);
      if ((iVar8 != 0) && (*(char *)(iVar8 + 0x62) != '\0')) {
        *(undefined1 *)(iVar8 + 0x62) = 0;
      }
      if (*(int *)(this + 0x1c8) - *(int *)pvVar1 >> 5 == 1) {
        fVar7 = local_14 + 180.0;
        if (360.0 <= fVar7) {
          fVar7 = fVar7 - 360.0;
        }
        fVar9 = *(float *)(this + 0x120);
        if ((fVar9 < fVar7 - (float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] * 0.5) ||
           ((float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] * 0.5 + fVar7 < fVar9)) {
          rotateTo(this,(float)pVVar6);
        }
        else {
          if (fVar7 != fVar9) {
            *(float *)(this + 0x120) = fVar7;
          }
          iVar8 = *(int *)(*(int *)(this + 0x40) + 0x10);
          if (local_24 < local_20) {
            if ((iVar8 != 0) && (*(char *)(iVar8 + 0x62) != '\0')) {
              *(undefined1 *)(iVar8 + 0x62) = 0;
              this[0x2c8] = (Ship)0x0;
            }
          }
          else {
            *(undefined1 *)(iVar8 + 0x62) = 1;
          }
        }
        if (local_20 < 0.1) {
          if (0.3 < local_18) {
            debugPrint("WORLD",
                       "Overshot our mark slightly - too fast. Removing waypoint and coming to a complete stop as close as we can."
                      );
            *(undefined4 *)(this + 0x1c8) = *(undefined4 *)pvVar1;
            switchTravelState(this,4);
            ExceptionList = local_10;
            return;
          }
          *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 0;
          setSpeed(this,(float)pVVar6);
          *(double *)(this + 0x28) = (double)*(float *)(*(int *)pvVar1 + 8);
          *(double *)(this + 0x30) = (double)*(float *)(*(int *)pvVar1 + 0xc);
          *(undefined4 *)(this + 0x1c8) = *(undefined4 *)pvVar1;
          debugPrint("WORLD","%s: reached our final destination.");
          *(undefined4 *)(this + 0xd4) = 0;
          *(undefined4 *)(this + 0x2c0) = 0;
          *(undefined4 *)(this + 0x2c4) = 0;
          switchTravelState(this,0);
          this[0x2c8] = (Ship)0x0;
          ExceptionList = local_10;
          return;
        }
      }
      else if (local_20 < 4.0) {
        std::vector<>::erase(pvVar1);
        pfVar3 = *(float **)pvVar1;
        local_28 = (float)*(double *)(this + 0x28);
        local_24 = (float)*(double *)(this + 0x30);
        *pfVar3 = local_28;
        pfVar3[1] = local_24;
        resetBurnVector(this);
        local_28 = (float)*(double *)(this + 0x28);
        fVar7 = (float)*(double *)(this + 0x30);
        local_8 = 2;
        local_24 = fVar7;
        fastDistance(pVVar6,unaff_EDI);
        local_8 = 0xffffffff;
        *(double *)(this + 0x138) = (double)fVar7;
        uStack_6c = 0x517b5b;
        debugPrint("WORLD","%s: Hit waypoint, %d remaining.");
        ExceptionList = local_10;
        return;
      }
    }
    else if (iVar8 == 5) {
      if ((*(float *)(this + 0x118) == 0.0) && (*(float *)(this + 0x11c) == 0.0)) {
        *(undefined4 *)(this + 0x2c4) = 0;
        switchTravelState(this,0);
        ExceptionList = local_10;
        return;
      }
      bVar5 = isStopping(this);
      if (!bVar5) {
        std::vector<>::insert(pvVar1);
      }
    }
    ExceptionList = local_10;
    return;
  }
  iVar8 = *(int *)(*(int *)(this + 0x40) + 0x10);
  if ((iVar8 != 0) && (*(char *)(iVar8 + 0x62) != '\0')) {
    *(undefined1 *)(iVar8 + 0x62) = 0;
  }
  if (this[0x2c8] == (Ship)0x0) {
    SystemManager::getMaxBatteryStorage(*(SystemManager **)(this + 0x40));
    fVar9 = 30.0;
    if (fVar7 < 30.0) {
      SystemManager::getMaxBatteryStorage(*(SystemManager **)(this + 0x40));
      fVar7 = (fVar7 / 10.0) * 9.0;
      fVar9 = fVar7;
      local_24 = fVar7;
    }
    SystemManager::totalCurrentPower(*(SystemManager **)(this + 0x40));
    if ((fVar7 < fVar9) && (this[0x2c8] == (Ship)0x0)) {
      ExceptionList = local_10;
      return;
    }
  }
  fVar7 = *(float *)(this + 0x120);
  if ((local_14 < fVar7 - 1.0) || (fVar7 + 1.0 < local_14)) {
    rotateTo(this,(float)pVVar6);
    this[0x2c8] = (Ship)0x1;
    ExceptionList = local_10;
    return;
  }
  if (local_14 != fVar7) {
    *(float *)(this + 0x120) = local_14;
  }
  if ((local_18 < *(float *)(*(int *)(this + 0x254) + 0x108) - 1e-05) &&
     (iVar8 = SystemManager::getCurrentPowerPercentage(*(SystemManager **)(this + 0x40)), 4 < iVar8)
     ) {
    *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 1;
    this[0x2c8] = (Ship)0x1;
    ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 0;
  this[0x2c8] = (Ship)0x1;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::performAllStopLogic(float)

void __thiscall Ship::performAllStopLogic(Ship *this,float param_1)

{
  int iVar1;
  float fVar2;
  Ship *pSVar3;
  float fVar4;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3dd9;
  local_10 = ExceptionList;
  fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_18 = 0;
  local_14 = 0.0;
  local_8 = 0;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_18);
  local_8 = 0xffffffff;
  fVar4 = 0.1;
  if (local_14 <= 0.1) {
    *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 0;
    setSpeed(this,fVar2);
    iVar1 = *(int *)(this + 0x1c4);
    if (*(int *)(this + 0x1c8) - iVar1 >> 5 != 0) {
      std::vector<>::erase((vector<> *)(this + 0x1c4),&local_14,iVar1);
    }
    resetBurnVector(this);
    pSVar3 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pSVar3 = *(Ship **)pSVar3;
    }
    debugPrint("GAME","%s: Came to a halt.",pSVar3);
    ExceptionList = local_10;
    return;
  }
  angleInDegreesFrom(0,0,*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x11c));
  local_14 = fVar4 + 180.0;
  fVar4 = local_14;
  if (360.0 <= local_14) {
    fVar4 = local_14 - 360.0;
  }
  if (fVar4 != *(float *)(this + 0x128)) {
    rotateTo(this,fVar2);
  }
  if (360.0 <= local_14) {
    local_14 = local_14 - 360.0;
  }
  if (*(float *)(this + 0x120) == local_14) {
    *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 1;
    ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0x62) = 0;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::setMotionAngle(float)

void __thiscall Ship::setMotionAngle(Ship *this,float param_1)

{
  uint uVar1;
  double dVar2;
  float in_XMM1_Da;
  double dVar3;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3e1b;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_14 = 0.0;
  local_8 = 0;
  local_1c = in_XMM1_Da;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_18);
  local_2c = 0;
  local_28 = 0;
  local_8 = 1;
  dVar3 = (double)local_1c * 0.017453292519943295;
  dVar2 = dVar3;
  __libm_sse2_sin_precise(uVar1);
  local_1c = (float)(dVar2 * (double)local_14);
  __libm_sse2_cos_precise();
  local_20 = local_1c;
  local_1c = (float)(dVar3 * (double)local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  cocos2d::Vec2::operator+((Vec2 *)&local_2c,(Vec2 *)&local_18);
  *(undefined4 *)(this + 0x118) = local_18;
  *(float *)(this + 0x11c) = local_14;
  ExceptionList = local_10;
  return;
}


// public: float __thiscall Ship::getMotionAngle(void)

float __thiscall Ship::getMotionAngle(Ship *this)

{
  float fVar1;
  
  fVar1 = angleInDegreesFrom(0,0,*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x11c),this);
  return fVar1;
}


// public: void __thiscall Ship::cancelAutopilot(void)

void __thiscall Ship::cancelAutopilot(Ship *this)

{
  Ship *pSVar1;
  
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  pSVar1 = this + 8;
  if (0xf < *(uint *)(this + 0x1c)) {
    pSVar1 = *(Ship **)pSVar1;
  }
  debugPrint("GAME","%s: Autopilot cancelled.",pSVar1,this);
  return;
}


// public: float __thiscall Ship::distanceToDecelerateFromFull(void)

float __thiscall Ship::distanceToDecelerateFromFull(Ship *this)

{
  float10 in_ST0;
  float10 extraout_ST0;
  
  if (*(int *)(*(int *)(this + 0x40) + 0x10) == 0) {
    return (float)in_ST0;
  }
  ComponentInterfaceInstance::getEfficiencyPercent
            (*(ComponentInterfaceInstance **)(*(int *)(*(int *)(this + 0x40) + 0x10) + 0xc));
  return (float)extraout_ST0;
}


// public: void __thiscall Ship::rotateTo(float)

void __thiscall Ship::rotateTo(Ship *this,float param_1)

{
  char cVar1;
  float unaff_ESI;
  float fVar2;
  float in_XMM1_Da;
  float fVar3;
  
  if (*(int **)(*(int *)(this + 0x40) + 0x18) != (int *)0x0) {
    fVar3 = 0.0;
    cVar1 = (**(code **)(**(int **)(*(int *)(this + 0x40) + 0x18) + 0x10))();
    if ((cVar1 != '\0') && (in_XMM1_Da != *(float *)(this + 0x128))) {
      fVar2 = in_XMM1_Da;
      differenceBetweenAngles(fVar3,unaff_ESI);
      if (fVar2 <= 0.6) {
        *(float *)(this + 0x120) = in_XMM1_Da;
        return;
      }
      *(float *)(this + 0x128) = in_XMM1_Da;
      fVar3 = in_XMM1_Da - *(float *)(this + 0x120);
      if ((fVar3 < 180.0) && ((0.0 <= fVar3 || (fVar3 < -180.0)))) {
        *(undefined4 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x34) = 1;
        return;
      }
      *(undefined4 *)(*(int *)(*(int *)(this + 0x40) + 0x18) + 0x34) = 2;
    }
  }
  return;
}


// public: void __thiscall Ship::addWaypoint(class cocos2d::Vec2)

void __thiscall Ship::addWaypoint(Ship *this,undefined4 param_2,undefined4 param_3)

{
  Waypoint *pWVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3e49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pWVar1 = *(Waypoint **)(this + 0x1c8);
  local_30 = 0;
  local_2c = 0;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = &DAT_bf800000;
  local_1c = 0;
  local_18 = 0;
  if (*(Waypoint **)(this + 0x1cc) == pWVar1) {
    std::vector<>::_Emplace_reallocate<Waypoint>
              ((vector<> *)(this + 0x1c4),pWVar1,(Waypoint *)&local_30);
  }
  else {
    *(undefined4 *)pWVar1 = 0;
    *(undefined4 *)(pWVar1 + 4) = 0;
    *(undefined4 *)(pWVar1 + 8) = param_2;
    *(undefined4 *)(pWVar1 + 0xc) = param_3;
    *(undefined1 **)(pWVar1 + 0x10) = &DAT_bf800000;
    *(undefined4 *)(pWVar1 + 0x14) = 0;
    pWVar1[0x18] = (Waypoint)0x0;
    *(undefined4 *)(pWVar1 + 0x1c) = local_14;
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 0x20;
  }
  setWaypointFlags(this);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::addWaypoint(class GameObject *)

void __thiscall Ship::addWaypoint(Ship *this,GameObject *param_1)

{
  Waypoint *pWVar1;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined1 *local_18;
  GameObject *local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  pWVar1 = *(Waypoint **)(this + 0x1c8);
  local_20 = (float)*(double *)(param_1 + 0x20);
  local_24 = 0;
  local_18 = &DAT_bf800000;
  local_14 = param_1;
  local_10 = 0;
  local_1c = (float)*(double *)(param_1 + 0x28);
  if (*(Waypoint **)(this + 0x1cc) != pWVar1) {
    *(undefined4 *)pWVar1 = 0;
    *(undefined4 *)(pWVar1 + 4) = 0;
    *(float *)(pWVar1 + 8) = local_20;
    *(float *)(pWVar1 + 0xc) = local_1c;
    *(undefined1 **)(pWVar1 + 0x10) = &DAT_bf800000;
    *(GameObject **)(pWVar1 + 0x14) = param_1;
    pWVar1[0x18] = (Waypoint)0x0;
    *(undefined4 *)(pWVar1 + 0x1c) = local_c;
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 0x20;
    setWaypointFlags(this);
    return;
  }
  std::vector<>::_Emplace_reallocate<Waypoint>
            ((vector<> *)(this + 0x1c4),pWVar1,(Waypoint *)&local_28);
  setWaypointFlags(this);
  return;
}


// public: class cocos2d::Vec2 __thiscall Ship::getNextWaypointLocation(void)

void __thiscall Ship::getNextWaypointLocation(Ship *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_stack_00000004;
  
  iVar2 = *(int *)(this + 0x1c4);
  if (*(int *)(this + 0x1c8) - iVar2 >> 5 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *in_stack_00000004 = *(undefined4 *)(iVar2 + 8);
    in_stack_00000004[1] = uVar1;
    return;
  }
  *in_stack_00000004 = 0xc61c3c00;
  in_stack_00000004[1] = 0xc61c3c00;
  return;
}


// public: class cocos2d::Vec2 __thiscall Ship::getFinalWaypointLocation(void)

void __thiscall Ship::getFinalWaypointLocation(Ship *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_stack_00000004;
  
  iVar2 = *(int *)(this + 0x1c4);
  iVar3 = *(int *)(this + 0x1c8) - iVar2 >> 5;
  if (iVar3 != 0) {
    iVar3 = iVar3 * 0x20;
    uVar1 = *(undefined4 *)(iVar3 + -0x14 + iVar2);
    *in_stack_00000004 = *(undefined4 *)(iVar3 + -0x18 + iVar2);
    in_stack_00000004[1] = uVar1;
    return;
  }
  *in_stack_00000004 = 0xc61c3c00;
  in_stack_00000004[1] = 0xc61c3c00;
  return;
}


// public: class GameObject * __thiscall Ship::getFinalWaypointObject(void)

GameObject * __thiscall Ship::getFinalWaypointObject(Ship *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5;
  if (iVar1 != 0) {
    return *(GameObject **)(iVar1 * 0x20 + -0xc + *(int *)(this + 0x1c4));
  }
  return (GameObject *)0x0;
}


// public: class Waypoint * __thiscall Ship::getFinalWaypoint(void)

Waypoint * __thiscall Ship::getFinalWaypoint(Ship *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5;
  if (iVar1 != 0) {
    return (Waypoint *)(iVar1 * 0x20 + -0x20 + *(int *)(this + 0x1c4));
  }
  return (Waypoint *)0x0;
}


// public: void __thiscall Ship::setWaypointFlags(void)

void __thiscall Ship::setWaypointFlags(Ship *this)

{
  int iVar1;
  basic_string<> *pbVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  basic_string<> abStack_70 [12];
  undefined4 uStack_64;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c3e80;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (this[0x234] != (Ship)0x0) {
    iVar1 = *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5;
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 * 0x20 + -0xc + *(int *)(this + 0x1c4)), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x30) == 1)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      uStack_64 = 0x5183ae;
      pbVar2 = (basic_string<> *)strUsingArgs((char *)local_44);
      std::basic_string<>::operator=((basic_string<> *)local_2c,pbVar2);
      if (0xf < local_30) {
        pnVar5 = (nothrow_t *)(local_30 + 1);
        pvVar4 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_44[0] + -4);
          pnVar5 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      uStack_64 = 0x518423;
      std::transform<>();
      std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)local_2c);
      local_8._0_1_ = 1;
      pFVar3 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      FlagManager::setFlag(pFVar3);
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
        operator_delete(pvVar4,pnVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Ship::clearWaypointFlags(void)

void __thiscall Ship::clearWaypointFlags(Ship *this)

{
  int iVar1;
  basic_string<> *pbVar2;
  FlagManager *pFVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  basic_string<> abStack_70 [12];
  undefined4 uStack_64;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c3e80;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (this[0x234] != (Ship)0x0) {
    iVar1 = *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5;
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 * 0x20 + -0xc + *(int *)(this + 0x1c4)), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x30) == 1)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      uStack_64 = 0x51853e;
      pbVar2 = (basic_string<> *)strUsingArgs((char *)local_44);
      std::basic_string<>::operator=((basic_string<> *)local_2c,pbVar2);
      if (0xf < local_30) {
        pnVar5 = (nothrow_t *)(local_30 + 1);
        pvVar4 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_44[0] + -4);
          pnVar5 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      uStack_64 = 0x5185b3;
      std::transform<>();
      std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)local_2c);
      local_8._0_1_ = 1;
      pFVar3 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      FlagManager::setFlag(pFVar3);
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
        operator_delete(pvVar4,pnVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Ship::travelTo(class NavPoint *)

void __thiscall Ship::travelTo(Ship *this,NavPoint *param_1)

{
  if (param_1 != (NavPoint *)0x0) {
    clearWaypointFlags(this);
    *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(this + 0x1c4);
    *(NavPoint **)(*(int *)(this + 0x44) + 0x34) = param_1;
    mapCourseTo(this,param_1);
  }
  return;
}


// public: void __thiscall Ship::cancelTravel(void)

void __thiscall Ship::cancelTravel(Ship *this)

{
  clearWaypointFlags(this);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(this + 0x1c4);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  return;
}


// public: void __thiscall Ship::mapCourseTo(class cocos2d::Vec2)

void __thiscall Ship::mapCourseTo(Ship *this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Ship *pSVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3eb9;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(this + 0x2f4) = param_2;
  *(undefined4 *)(this + 0x2f8) = param_3;
  *(undefined4 *)(this + 0x2f0) = 0;
  iVar3 = Sector::getNavMeshIDClosestTo
                    (*(Sector **)(this + 0x24),(float)*(double *)(this + 0x28),
                     (float)*(double *)(this + 0x30),1);
  iVar4 = Sector::getNavMeshIDClosestTo(*(Sector **)(this + 0x24),param_2,param_3,0);
  if ((iVar3 == -1) || (iVar4 == -1)) {
    puVar6 = (undefined4 *)(*(int *)(this + 0x24) + 0x1c);
    if (0xf < *(uint *)(*(int *)(this + 0x24) + 0x30)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    pSVar5 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    debugPrint("WORLD","%s: ERROR - unable to find a nav mesh in sector %s",pSVar5,puVar6,uVar2);
    bVar1 = cc_assert_script_compatible("ERROR");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","ERROR");
    }
  }
  executeCourse(this,iVar3,iVar4);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::mapCourseTo(class NavPoint *)

void __thiscall Ship::mapCourseTo(Ship *this,NavPoint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  Ship *pSVar5;
  
  iVar2 = Sector::getNavMeshIDClosestTo
                    (*(Sector **)(this + 0x24),(float)*(double *)(this + 0x28),
                     (float)*(double *)(this + 0x30),1);
  iVar3 = Sector::getNavMeshIDClosestTo
                    (*(Sector **)(this + 0x24),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x2f8) = *(undefined4 *)(param_1 + 0xc);
  if ((iVar2 == -1) || (iVar3 == -1)) {
    puVar4 = (undefined4 *)(*(int *)(this + 0x24) + 0x1c);
    if (0xf < *(uint *)(*(int *)(this + 0x24) + 0x30)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pSVar5 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    debugPrint("WORLD","%s: ERROR - unable to find a nav mesh in sector %s",pSVar5,puVar4);
    bVar1 = cc_assert_script_compatible("ERROR");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","ERROR");
    }
  }
  executeCourse(this,iVar2,iVar3);
  return;
}


// public: void __thiscall Ship::mapCourseTo(class Ship *)

void __thiscall Ship::mapCourseTo(Ship *this,Ship *param_1)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Ship *pSVar5;
  undefined4 *puVar6;
  
  *(uint *)(this + 0x2f0) = -(uint)(param_1 != (Ship *)0x0) & (uint)(param_1 + 8);
  dVar1 = *(double *)(param_1 + 0x30);
  *(float *)(this + 0x2f4) = (float)*(double *)(param_1 + 0x28);
  *(float *)(this + 0x2f8) = (float)dVar1;
  iVar3 = Sector::getNavMeshIDClosestTo
                    (*(Sector **)(this + 0x24),(float)*(double *)(this + 0x28),
                     (float)*(double *)(this + 0x30),1);
  iVar4 = Sector::getNavMeshIDClosestTo
                    (*(Sector **)(this + 0x24),(float)*(double *)(param_1 + 0x28),
                     (float)*(double *)(param_1 + 0x30),0);
  if ((iVar3 == -1) || (iVar4 == -1)) {
    puVar6 = (undefined4 *)(*(int *)(this + 0x24) + 0x1c);
    if (0xf < *(uint *)(*(int *)(this + 0x24) + 0x30)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    pSVar5 = this + 8;
    if (0xf < *(uint *)(this + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    debugPrint("WORLD","%s: ERROR - unable to find a nav mesh in sector %s",pSVar5,puVar6);
    bVar2 = cc_assert_script_compatible("ERROR");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","ERROR");
    }
  }
  executeCourse(this,iVar3,iVar4);
  return;
}


// public: void __thiscall Ship::executeCourse(int,int)

void __thiscall Ship::executeCourse(Ship *this,int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  vector<> *this_00;
  int iVar3;
  uint uVar4;
  float fVar5;
  Pather *pPVar6;
  int iVar7;
  MetaGameAction **ppMVar8;
  Ship *pSVar9;
  Pather *pPVar10;
  int iVar11;
  float fVar12;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  Pather *local_8;
  
  local_8 = (Pather *)0xffffffff;
  puStack_c = &DAT_005c3f04;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar12 = cocos2d::Vec2::getDistanceSq
                     ((Vec2 *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xa8) + param_1 * 4) + 8),
                      (Vec2 *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xa8) + param_2 * 4) + 8));
  pPVar10 = Singleton<Pather>::instance;
  fVar5 = (float)(0x5f3759df - ((uint)fVar12 >> 1));
  if (this[0x2ec] != (Ship)0x0) {
    if (Singleton<Pather>::instance == (Pather *)0x0) {
      pPVar6 = operator_new(0x98);
      local_8 = pPVar10;
      Singleton<Pather>::instance = (Pather *)Pather::Pather(pPVar6);
      local_8 = (Pather *)0xffffffff;
    }
    pPVar6 = Singleton<Pather>::instance;
    debugPrint("DETAIL","Pather: Removing requests for owner",uVar4);
    pPVar10 = pPVar6 + 0x3c;
    local_14 = 3;
    do {
      iVar11 = *(int *)(pPVar10 + 4) - *(int *)pPVar10 >> 2;
      if (iVar11 != 0) {
        while (iVar11 = iVar11 + -1, -1 < iVar11) {
          iVar7 = *(int *)pPVar10;
          iVar3 = *(int *)(iVar7 + iVar11 * 4);
          if ((iVar3 != 0) && (*(Ship **)(iVar3 + 0x14) == this)) {
            if (iVar3 == *(int *)(pPVar6 + 0x4c)) {
              *(undefined4 *)(pPVar6 + 0x4c) = 0;
              iVar7 = *(int *)pPVar10;
            }
            pvVar2 = (void *)(iVar7 + iVar11 * 4);
            pvVar1 = (void *)((int)pvVar2 + 4);
            memmove(pvVar2,pvVar1,*(int *)(pPVar10 + 4) - (int)pvVar1);
            *(int *)(pPVar10 + 4) = *(int *)(pPVar10 + 4) + -4;
          }
        }
      }
      local_14 = local_14 + -1;
      pPVar10 = pPVar10 + -0xc;
    } while (-1 < local_14);
    debugPrint("DETAIL","Pather: Finished removing requests.");
  }
  pPVar10 = Singleton<Pather>::instance;
  pSVar9 = this + 0x2d4;
  this[0x2ec] = (Ship)0x1;
  *(undefined4 *)(this + 0x2d8) = 0xffffffff;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2e4) = 4;
  *(undefined4 *)(this + 0x2e8) = 0;
  *(int *)pSVar9 = param_1;
  *(int *)(this + 0x2d8) = param_2;
  *(Ship **)(this + 0x2e8) = this;
  *(undefined4 *)(this + 0x2dc) = 0;
  if (pPVar10 == (Pather *)0x0) {
    param_1 = (int)operator_new(0x98);
    local_8 = (Pather *)0x1;
    pPVar10 = (Pather *)Pather::Pather((Pather *)param_1);
    local_8 = (Pather *)0xffffffff;
    Singleton<Pather>::instance = pPVar10;
  }
  param_1 = CONCAT13(this[0x234],(undefined3)param_1);
  iVar11 = 0x30;
  if (this[0x234] != (Ship)0x0) {
    iVar11 = 0x18;
  }
  this_00 = (vector<> *)(pPVar10 + iVar11);
  ppMVar8 = *(MetaGameAction ***)(this_00 + 4);
  if (((int)ppMVar8 - *(int *)this_00 & 0xfffffffcU) == 0x40) {
    debugPrint("DETAIL","Pather: Maximum queued path requests exceeded",uVar4);
    iVar11 = 0x34;
    if (param_1._3_1_ != '\0') {
      iVar11 = 0x1c;
    }
    ppMVar8 = *(MetaGameAction ***)(pPVar10 + iVar11);
  }
  param_1 = (int)pSVar9;
  if (*(MetaGameAction ***)(this_00 + 8) == ppMVar8) {
    std::vector<>::_Emplace_reallocate<>(this_00,ppMVar8,(MetaGameAction **)&param_1);
  }
  else {
    *ppMVar8 = (MetaGameAction *)pSVar9;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
  }
  debugPrint("DETAIL","Pather: Got path request from %s");
  debugPrint("DETAIL","Pather: Requests in queue: %d");
  pSVar9 = this + 8;
  if (0xf < *(uint *)(this + 0x1c)) {
    pSVar9 = *(Ship **)pSVar9;
  }
  debugPrint("GAME","%s: plotting a course to nav point %d, distance as the neutrino flies is %fGms"
             ,pSVar9,**(undefined4 **)(*(int *)(*(int *)(this + 0x24) + 0xa8) + param_2 * 4),
             (double)((1.5 - fVar12 * 0.5 * fVar5 * fVar5) * fVar5 * fVar12));
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::pathComplete(class PathNode *)

void __thiscall Ship::pathComplete(Ship *this,PathNode *param_1)

{
  AnimationFrames **ppAVar1;
  bool bVar2;
  Ship *pSVar3;
  GameObject *pGVar4;
  int iVar5;
  word *pwVar6;
  size_t sVar7;
  void *pvVar8;
  LogSystem *this_00;
  LogSystem *this_01;
  AnimationFrames *pAVar9;
  nothrow_t *pnVar10;
  AnimationFrames **ppAVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  basic_string<> local_dc [12];
  undefined4 local_d0;
  AnimationFrames *local_98;
  AnimationFrames *local_94;
  AnimationFrames *local_90;
  float local_8c;
  AnimationFrames *local_88;
  AnimationFrames *local_84;
  AnimationFrames *local_80;
  AnimationFrames **local_7c;
  AnimationFrames **local_78;
  Vec2 local_74 [8];
  AnimationFrames **local_6c;
  AnimationFrames **local_68;
  AnimationFrames *local_64;
  int *local_60;
  AnimationFrames *local_5c;
  AnimationFrames *local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005c3f57;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  debugPrint("GAME","%s: path successful. Executing.");
  this[0x2ec] = (Ship)0x0;
  clearWaypointFlags(this);
  pAVar9 = (AnimationFrames *)0x0;
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(this + 0x1c4);
  local_64 = (AnimationFrames *)0x0;
  local_80 = (AnimationFrames *)0x0;
  local_7c = (AnimationFrames **)0x0;
  local_6c = (AnimationFrames **)0x0;
  local_78 = (AnimationFrames **)0x0;
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 1;
  ppAVar11 = (AnimationFrames **)0x0;
  ppAVar1 = local_68;
  for (local_60 = *(int **)param_1;
      (local_68 = ppAVar11, local_60 != (int *)0x0 && (*local_60 != 0)); local_60 = (int *)*local_60
      ) {
    local_5c = *(AnimationFrames **)(*(int *)(*(int *)(this + 0x24) + 0xa8) + local_60[1] * 4);
    local_58 = local_5c;
    if (local_6c == local_68) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)&local_80,(AnimationFrames **)pAVar9,&local_58);
      local_6c = local_78;
      local_64 = local_80;
      pAVar9 = local_80;
      ppAVar11 = local_7c;
    }
    else if (pAVar9 == (AnimationFrames *)local_68) {
      *local_68 = local_5c;
      local_7c = local_68 + 1;
      ppAVar11 = local_7c;
    }
    else {
      *local_68 = local_68[-1];
      sVar7 = (int)local_68 + (-4 - (int)pAVar9);
      ppAVar11 = local_68 + 1;
      local_7c = ppAVar11;
      memmove((void *)((int)local_68 - sVar7),pAVar9,sVar7);
      *(AnimationFrames **)local_64 = local_5c;
      pAVar9 = local_64;
    }
    ppAVar1 = local_68;
  }
  piVar12 = (int *)((int)local_68 - (int)pAVar9 >> 2);
  local_5c = (AnimationFrames *)0x0;
  local_68 = ppAVar1;
  local_60 = piVar12;
  if (piVar12 != (int *)0x0) {
    do {
      local_68 = *(AnimationFrames ***)(pAVar9 + (int)local_5c * 4);
      if ((*(char *)(local_68 + 0xd) == '\0') ||
         (local_5c != (AnimationFrames *)((int)piVar12 - 1U))) {
        local_98 = local_68[2];
        local_94 = local_68[3];
        local_88 = local_98;
        local_84 = local_94;
        iVar5 = rand();
        rand();
        dVar13 = (double)(iVar5 % 0x168) * 0.017453292519943295;
        dVar14 = dVar13;
        __libm_sse2_sin_precise();
        local_58 = (AnimationFrames *)(float)(dVar14 * 0.0);
        __libm_sse2_cos_precise();
        local_90 = local_58;
        local_8c = (float)(dVar13 * 0.0);
        local_14._0_1_ = 4;
        cocos2d::Vec2::operator+((Vec2 *)&local_98,local_74);
        local_14 = CONCAT31(local_14._1_3_,5);
        addWaypoint(this);
        pwVar6 = (word *)strUsingArgs((char *)local_54);
        if ((word *)&local_3c != pwVar6) {
          word::~word((word *)&local_3c);
          local_3c = *(void **)pwVar6;
          uStack_38 = *(undefined4 *)(pwVar6 + 4);
          uStack_34 = *(undefined4 *)(pwVar6 + 8);
          uStack_30 = *(undefined4 *)(pwVar6 + 0xc);
          local_2c = *(undefined8 *)(pwVar6 + 0x10);
          *(undefined4 *)(pwVar6 + 0x10) = 0;
          *(undefined4 *)(pwVar6 + 0x14) = 0xf;
          *pwVar6 = (word)0x0;
        }
        if (0xf < local_40) {
          pnVar10 = (nothrow_t *)(local_40 + 1);
          pvVar8 = local_54[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar8 = *(void **)((int)local_54[0] + -4);
            pnVar10 = (nothrow_t *)(local_40 + 0x24);
            if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8))) goto LAB_0051928f;
          }
          operator_delete(pvVar8,pnVar10);
        }
        local_d0 = 0;
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff20,"WP #%d: %f,%f (np #%d, %s)",0x1a);
        log();
        local_14 = CONCAT31(local_14._1_3_,1);
        piVar12 = local_60;
      }
      else {
        pSVar3 = Sector::getSpaceStationClosestTo(*(Sector **)(this + 0x24));
        if ((pSVar3 == (Ship *)0x0) ||
           (pGVar4 = (GameObject *)(pSVar3 + 8), piVar12 = local_60, pGVar4 == (GameObject *)0x0)) {
          Sector::getSpaceStationClosestTo(*(Sector **)(this + 0x24));
          bVar2 = cc_assert_script_compatible
                            (
                            "ERROR: nav point marked for space station, but there\'s no space station."
                            );
          if (!bVar2) {
            cocos2d::log("Assert failed: %s");
          }
        }
        else {
          addWaypoint(this,pGVar4);
          if ((GameObject *)&local_3c != pGVar4) {
            if (0xf < *(uint *)(pSVar3 + 0x1c)) {
              pGVar4 = *(GameObject **)pGVar4;
            }
            std::basic_string<>::assign
                      ((basic_string<> *)&local_3c,(char *)pGVar4,*(uint *)(pSVar3 + 0x18));
          }
          local_dc[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_dc,"WP #%d: %f,%f %s",0x10);
          log();
          piVar12 = local_60;
        }
      }
      local_5c = (AnimationFrames *)((int)local_5c + 1);
      pAVar9 = local_64;
    } while (local_5c < piVar12);
  }
  if (*(GameObject **)(this + 0x2f0) == (GameObject *)0x0) {
    addWaypoint(this);
    if (this[0x234] != (Ship)0x0) {
      LogSystem::addLogLine(this_01,*(LogPriority *)(this + 0x224),&DAT_00000001);
    }
    local_d0 = 0x51923e;
    debugPrint("GAME","%s: %d nodes plotted to get to %f, %f. Engaging.");
  }
  else {
    addWaypoint(this,*(GameObject **)(this + 0x2f0));
    if (this[0x234] != (Ship)0x0) {
      LogSystem::addLogLine(this_00,*(LogPriority *)(this + 0x224),&DAT_00000001);
    }
    debugPrint("GAME","%s: %d nodes plotted to get to %s. Engaging.");
  }
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  if (0xf < local_2c._4_4_) {
    pnVar10 = (nothrow_t *)(local_2c._4_4_ + 1);
    pvVar8 = local_3c;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)local_3c + -4);
      pnVar10 = (nothrow_t *)(local_2c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
LAB_0051928f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar10);
  }
  if (local_64 != (AnimationFrames *)0x0) {
    pnVar10 = (nothrow_t *)((int)local_6c - (int)local_64 & 0xfffffffc);
    pAVar9 = local_64;
    if ((nothrow_t *)0xfff < pnVar10) {
      pAVar9 = *(AnimationFrames **)(local_64 + -4);
      pnVar10 = pnVar10 + 0x23;
      if ((AnimationFrames *)0x1f < local_64 + (-4 - (int)pAVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pAVar9,pnVar10);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: bool __thiscall Ship::isTravellingByAutopilot(void)

bool __thiscall Ship::isTravellingByAutopilot(Ship *this)

{
  return *(int *)(this + 0xd4) == 1;
}


// public: bool __thiscall Ship::isStopping(void)

bool __thiscall Ship::isStopping(Ship *this)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 5;
  if (uVar3 != 0) {
    pfVar1 = (float *)(*(int *)(this + 0x1c4) + 8);
    do {
      if ((*pfVar1 == -9999.0) && (pfVar1[1] == -9999.0)) {
        return true;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 8;
    } while (uVar2 < uVar3);
  }
  return false;
}


// public: void __thiscall Ship::setSpeed(float)

void __thiscall Ship::setSpeed(Ship *this,float param_1)

{
  float in_XMM1_Da;
  float fVar1;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3f89;
  local_10 = ExceptionList;
  if (in_XMM1_Da == 0.0) {
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    return;
  }
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar1 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_18);
  *(float *)(this + 0x118) = (*(float *)(this + 0x118) / fVar1) * in_XMM1_Da;
  *(float *)(this + 0x11c) = (*(float *)(this + 0x11c) / fVar1) * in_XMM1_Da;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::accelerate(double)

void __thiscall Ship::accelerate(Ship *this,double param_1)

{
  float fVar1;
  double dVar2;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double local_2c;
  undefined8 local_24;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3fcb;
  local_10 = ExceptionList;
  fVar1 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_2c = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  local_1c = (float)*(double *)(this + 0x28);
  local_18 = (float)*(double *)(this + 0x30);
  local_8 = 0;
  cocos2d::Vec2::operator+((Vec2 *)(this + 0x118),(Vec2 *)&local_24);
  dVar2 = (double)(ulonglong)local_24._4_4_;
  trueAngleToPosition(this,(undefined4)local_24,local_24._4_4_);
  if ((float)dVar2 == *(float *)(this + 0x120)) {
    local_24 = 0.0;
    local_8 = 1;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_24);
    local_8 = 0xffffffff;
    if (local_14 == *(float *)(*(int *)(this + 0x254) + 0x108)) {
      ExceptionList = local_10;
      return;
    }
  }
  dVar2 = (double)*(float *)(this + 0x120) * 0.017453292519943295;
  local_24 = dVar2;
  __libm_sse2_cos_precise();
  local_14 = (float)(dVar2 * local_2c);
  dVar2 = local_24;
  __libm_sse2_sin_precise();
  dVar2 = dVar2 * local_2c;
  local_2c = 0.0;
  *(float *)(this + 0x118) = (float)dVar2 + *(float *)(this + 0x118);
  *(float *)(this + 0x11c) = local_14 + *(float *)(this + 0x11c);
  local_8 = 2;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x118),(Vec2 *)&local_2c);
  local_8 = 0xffffffff;
  if (*(float *)(*(int *)(this + 0x254) + 0x108) < local_14) {
    setSpeed(this,fVar1);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Ship::allStop(void)

void __thiscall Ship::allStop(Ship *this)

{
  Waypoint *pWVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  clearWaypointFlags(this);
  pWVar1 = *(Waypoint **)(this + 0x1c4);
  *(Waypoint **)(this + 0x1c8) = pWVar1;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0xc61c3c00;
  uStack_18 = 0xc61c3c00;
  local_14 = &DAT_bf800000;
  local_10 = 0;
  local_c = 0;
  if (*(Waypoint **)(this + 0x1cc) == pWVar1) {
    std::vector<>::_Emplace_reallocate<Waypoint>
              ((vector<> *)(this + 0x1c4),pWVar1,(Waypoint *)&local_24);
  }
  else {
    *(undefined4 *)pWVar1 = 0;
    *(undefined4 *)(pWVar1 + 4) = 0;
    *(undefined4 *)(pWVar1 + 8) = 0xc61c3c00;
    *(undefined4 *)(pWVar1 + 0xc) = 0xc61c3c00;
    *(undefined1 **)(pWVar1 + 0x10) = &DAT_bf800000;
    *(undefined4 *)(pWVar1 + 0x14) = 0;
    pWVar1[0x18] = (Waypoint)0x0;
    *(undefined4 *)(pWVar1 + 0x1c) = local_8;
    *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 0x20;
  }
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  return;
}


// public: class Conversation * __thiscall Ship::getForcedConversation(bool)

Conversation * __thiscall Ship::getForcedConversation(Ship *this,bool param_1)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  Ship *local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4012;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  iVar4 = *(int *)(this + 0x368);
  local_18 = this;
  if (*(int *)(this + 0x36c) - iVar4 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar4 + uVar6 * 4);
      if (*(char *)(iVar2 + 0x28) == '\0') {
        if (*(char *)(iVar2 + 0x1d) == '\0') {
          if (!param_1) {
            if (*(char *)(iVar2 + 0x1c) != '\0') goto LAB_005198e3;
            goto LAB_00519705;
          }
LAB_0051970d:
          if (0.0 < *(float *)(iVar2 + 0x20)) {
            local_20 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
            local_1c = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
            local_28 = (float)*(double *)(this + 0x28);
            local_24 = (float)*(double *)(this + 0x30);
            local_8 = 1;
            fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
            iVar4 = *(int *)(this + 0x368);
            local_14 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
            fVar7 = (1.5 - fVar7 * 0.5 * local_14 * local_14) * local_14 * fVar7;
            pfVar1 = (float *)(*(int *)(iVar4 + uVar6 * 4) + 0x20);
            local_8 = 0xffffffff;
            if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) goto LAB_005198e3;
          }
        }
        else {
LAB_00519705:
          if (param_1) goto LAB_0051970d;
        }
        iVar2 = *(int *)(iVar4 + uVar6 * 4);
        local_14 = 0.0;
        bVar5 = 1;
        if (*(char *)(iVar2 + 0x90) == '\0') {
          if (*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2 != 0) {
            do {
              fVar7 = local_14;
              bVar3 = Requirement::checkReq
                                (*(Requirement **)
                                  (*(int *)(*(int *)(iVar4 + uVar6 * 4) + 0x94) + (int)local_14 * 4)
                                 ,*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                 *(BankAccount **)(g_gameData + 0x124));
              local_14 = (float)((int)fVar7 + 1);
              bVar5 = bVar5 & -bVar3;
              iVar4 = *(int *)(local_18 + 0x368);
              iVar2 = *(int *)(iVar4 + uVar6 * 4);
            } while ((uint)local_14 < (uint)(*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2));
          }
        }
        else {
          bVar5 = 0;
          if (*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2 != 0) {
            do {
              fVar7 = local_14;
              bVar3 = Requirement::checkReq
                                (*(Requirement **)
                                  (*(int *)(*(int *)(iVar4 + uVar6 * 4) + 0x94) + (int)local_14 * 4)
                                 ,*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                 *(BankAccount **)(g_gameData + 0x124));
              if (bVar3) {
                bVar5 = 1;
              }
              local_14 = (float)((int)fVar7 + 1);
              iVar4 = *(int *)(local_18 + 0x368);
              iVar2 = *(int *)(iVar4 + uVar6 * 4);
            } while ((uint)local_14 < (uint)(*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2));
          }
        }
        this = local_18;
        if (bVar5 != 0) {
          ExceptionList = local_10;
          return *(Conversation **)(iVar4 + uVar6 * 4);
        }
      }
LAB_005198e3:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(this + 0x36c) - iVar4 >> 2));
  }
  ExceptionList = local_10;
  return (Conversation *)0x0;
}


// public: class Conversation * __thiscall Ship::getConversation(bool,bool)

Conversation * __thiscall Ship::getConversation(Ship *this,bool param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint local_8;
  
  iVar4 = *(int *)(this + 0x368);
  uVar6 = 0;
  if (*(int *)(this + 0x36c) - iVar4 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar4 + uVar6 * 4);
      if ((*(char *)(iVar1 + 0x1d) == '\0') && (*(char *)(iVar1 + 0x1c) == '\0')) {
        bVar5 = 1;
        iVar3 = *(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2;
        local_8 = 0;
        if (*(char *)(iVar1 + 0x90) == '\0') {
          if (iVar3 != 0) {
            do {
              bVar2 = Requirement::checkReq
                                (*(Requirement **)
                                  (*(int *)(*(int *)(iVar4 + uVar6 * 4) + 0x94) + local_8 * 4),
                                 *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                 *(BankAccount **)(g_gameData + 0x124));
              local_8 = local_8 + 1;
              bVar5 = bVar5 & -bVar2;
              iVar4 = *(int *)(this + 0x368);
              iVar1 = *(int *)(iVar4 + uVar6 * 4);
            } while (local_8 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
          }
        }
        else {
          bVar5 = 0;
          if (iVar3 != 0) {
            do {
              bVar2 = Requirement::checkReq
                                (*(Requirement **)
                                  (*(int *)(*(int *)(iVar4 + uVar6 * 4) + 0x94) + local_8 * 4),
                                 *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                 *(BankAccount **)(g_gameData + 0x124));
              if (bVar2) {
                bVar5 = 1;
              }
              local_8 = local_8 + 1;
              iVar4 = *(int *)(this + 0x368);
              iVar1 = *(int *)(iVar4 + uVar6 * 4);
            } while (local_8 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
          }
        }
        if (bVar5 != 0) {
          return *(Conversation **)(iVar4 + uVar6 * 4);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(this + 0x36c) - iVar4 >> 2));
  }
  return (Conversation *)0x0;
}


// public: void __thiscall Ship::generateSaleDescription(enum EModuleType::ModuleType,enum
// EModuleType::ModuleType)

void __thiscall Ship::generateSaleDescription(Ship *this,ModuleType param_1,ModuleType param_2)

{
  basic_string<> *this_00;
  char cVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  nothrow_t *pnVar8;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4040;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (basic_string<> *)(this + 0x32c);
  *(undefined4 *)(this + 0x33c) = 0;
  pbVar3 = this_00;
  if (0xf < *(uint *)(this + 0x340)) {
    pbVar3 = *(basic_string<> **)this_00;
  }
  *pbVar3 = (basic_string<>)0x0;
  local_14 = uVar2;
  iVar4 = rand();
  pcVar5 = (&PTR_s_Sorry_to_let_her_go_but_need_th_005e178c)[iVar4 % 7];
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::append(this_00,pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  std::basic_string<>::append(this_00," ",1);
  cVar1 = (**(code **)(*(int *)this + 0x24))(uVar2);
  if (cVar1 == '\0') {
    iVar4 = rand();
    pcVar5 = (&PTR_s_Kept_in_pristine_condition__005e1750)[iVar4 % 6];
    pcVar7 = pcVar5;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar4 = rand();
    pcVar5 = (&PTR_s_Fixer_upper__005e16f4)[iVar4 % 5];
    pcVar7 = pcVar5;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  std::basic_string<>::append(this_00,pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  iVar4 = rand();
  if (iVar4 % 3 != 0) {
    std::basic_string<>::append(this_00," ",1);
    iVar4 = rand();
    pcVar5 = (&PTR_s_Has_a_good_espresso_machine_in__005e17f0)[iVar4 % 7];
    pcVar7 = pcVar5;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    std::basic_string<>::append(this_00,pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  }
  if (param_1 != 0) {
    std::basic_string<>::append(this_00," ",1);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    pcVar7 = (char *)strUsingArgs((char *)local_2c,
                                  (&PTR_s_Has_an_after_market__s_installe_005e184c)[uVar2],
                                  (&PTR_s_Unknown_005e17a8)[param_1]);
    local_8 = 0;
    pcVar5 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar5 = *(char **)pcVar7;
    }
    std::basic_string<>::append(this_00,pcVar5,*(uint *)(pcVar7 + 0x10));
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar8);
    }
  }
  if (param_2 != 0) {
    std::basic_string<>::append(this_00," ",1);
    iVar4 = rand();
    pcVar7 = (char *)strUsingArgs((char *)local_44,(&PTR_s_Needs_a_new__s__005e1874)[iVar4 % 3],
                                  (&PTR_s_Unknown_005e17a8)[param_2]);
    local_8 = 1;
    pcVar5 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar5 = *(char **)pcVar7;
    }
    std::basic_string<>::append(this_00,pcVar5,*(uint *)(pcVar7 + 0x10));
    if (0xf < local_30) {
      pnVar8 = (nothrow_t *)(local_30 + 1);
      pvVar6 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar6 = *(void **)((int)local_44[0] + -4);
        pnVar8 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
