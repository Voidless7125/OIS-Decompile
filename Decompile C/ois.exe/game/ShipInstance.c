#include "../ois.exe.h"


// public: __thiscall ShipInstance::ShipInstance(class Scenario *)

ShipInstance * __thiscall ShipInstance::ShipInstance(ShipInstance *this,Scenario *param_1)

{
  _Tree_node<> *p_Var1;
  _Tree_node<> *p_Var2;
  _Tree_comp_alloc<> *this_00;
  _Tree_comp_alloc<> *this_01;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bf6a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *this = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xf;
  this[0x34] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0xf;
  this[0x58] = (ShipInstance)0x0;
  local_8 = 4;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_
            (this + 0x70,0xc,8,std::vector<>::vector<>,std::vector<>::~vector<>);
  this[0xd8] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0xf8] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  local_8 = 7;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
  *(_Tree_node<> **)(this + 0x108) = p_Var1;
  this[0x115] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0xf;
  this[0x118] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0xf;
  this[0x130] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0xf;
  this[0x148] = (ShipInstance)0x0;
  *(undefined2 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0xf;
  this[0x164] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0xf;
  this[0x17c] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xf;
  this[0x194] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0xf;
  this[0x1ac] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0xf;
  this[0x1c4] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0xf;
  this[0x1dc] = (ShipInstance)0x0;
  *(undefined1 **)(this + 500) = &DAT_bf800000;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  _local_8 = CONCAT31(uStack_7,0x12);
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this_01);
  *(_Tree_node<> **)(this + 0x204) = p_Var2;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0xf;
  this[0x20c] = (ShipInstance)0x0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 4;
  *(undefined4 *)(this + 0x250) = 3;
  *(undefined2 *)(this + 0x254) = 0x100;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(Scenario **)(this + 0x294) = param_1;
  *(undefined4 *)(this + 0xd0) = 0x1010101;
  ExceptionList = local_10;
  return this;
}


// public: bool __thiscall ShipInstance::readyToSpawn(void)

bool __thiscall ShipInstance::readyToSpawn(ShipInstance *this)

{
  CargoHold *pCVar1;
  basic_string<> *pbVar2;
  bool bVar3;
  basic_string<> *pbVar4;
  Ship *pSVar5;
  int iVar6;
  CargoHold *pCVar7;
  basic_string<> *unaff_ESI;
  uint uVar8;
  basic_string<> *unaff_EDI;
  basic_string<> abStack_44 [12];
  undefined4 uStack_38;
  int local_10;
  int iStack_c;
  
  pCVar7 = (CargoHold *)0x0;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (pCVar1 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8), pCVar1 != (CargoHold *)0x0)) {
    pCVar7 = pCVar1;
  }
  uVar8 = 0;
  iVar6 = *(int *)(this + 0x270);
  if (*(int *)(this + 0x274) - iVar6 >> 2 != 0) {
    do {
      uStack_38 = 0x4ca53f;
      bVar3 = Requirement::checkReq
                        (*(Requirement **)(iVar6 + uVar8 * 4),pCVar7,
                         *(BankAccount **)(g_gameData + 0x124));
      if (!bVar3) {
        return false;
      }
      uVar8 = uVar8 + 1;
      iVar6 = *(int *)(this + 0x270);
    } while (uVar8 < (uint)(*(int *)(this + 0x274) - iVar6 >> 2));
  }
  iVar6 = *(int *)(this + 0x290);
  if ((((iVar6 != 0) || (*(int *)(this + 0x28c) != 0)) || (*(int *)(this + 0x288) != 0)) ||
     (((*(int *)(this + 0x284) != 0 || (*(int *)(this + 0x280) != 0)) ||
      (*(float *)(this + 0x27c) != 0.0)))) {
    iStack_c = (int)((ulonglong)*(undefined8 *)(g_gameLogic + 0x18c) >> 0x20);
    if (iVar6 <= iStack_c) {
      if (iVar6 < iStack_c) {
        return false;
      }
      local_10 = (int)*(undefined8 *)(g_gameLogic + 0x18c);
      if (*(int *)(this + 0x28c) <= local_10) {
        if (*(int *)(this + 0x28c) < local_10) {
          return false;
        }
        if (*(int *)(this + 0x288) <= *(int *)(g_gameLogic + 0x188)) {
          if (*(int *)(this + 0x288) < *(int *)(g_gameLogic + 0x188)) {
            return false;
          }
          if (*(int *)(this + 0x284) <= *(int *)(g_gameLogic + 0x184)) {
            if (*(int *)(this + 0x284) < *(int *)(g_gameLogic + 0x184)) {
              return false;
            }
            if (*(int *)(this + 0x280) <= *(int *)(g_gameLogic + 0x180)) {
              return false;
            }
          }
        }
      }
    }
  }
  pbVar2 = *(basic_string<> **)(*(int *)(this + 0x294) + 0x3f8);
  pbVar4 = std::_Find_unchecked<>((basic_string<> *)(this + 0x1c),unaff_EDI,unaff_ESI);
  if (pbVar4 != pbVar2) {
    return false;
  }
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)(this + 0x1c));
  pSVar5 = GameData::getShipWithRego();
  return pSVar5 == (Ship *)0x0;
}
