// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ShipInstance * __thiscall ShipInstance::ShipInstance(ShipInstance *this,Scenario *param_1)
ShipInstance::ShipInstance(Scenario * param_1)

{
  ghidra::lib::_Tree_node_t *p_Var1;
  ghidra::lib::_Tree_node_t *p_Var2;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  ghidra::lib::_Tree_comp_alloc_t *this_01;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005bf6a3;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0xf;
  ((char *)this)[4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0xf;
  ((char *)this)[0x1c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0xf;
  ((char *)this)[0x34] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0;
  *(undefined4 *)((char *)this + 0x54) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0;
  *(undefined4 *)((char *)this + 0x6c) = 0xf;
  ((char *)this)[0x58] = (byte)0x0;
  // [seh] local_8 = 4;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_
            (this + 0x70,0xc,8,std::vector<>::ghidra::vector,std::vector<>::~ghidra::vector);
  ((char *)this)[0xd8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0;
  *(undefined4 *)((char *)this + 0xf4) = 0;
  ((char *)this)[0xf8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xfc) = 0;
  *(undefined4 *)((char *)this + 0x100) = 0;
  *(undefined4 *)((char *)this + 0x104) = 0;
  // [seh] local_8 = 7;
  *(undefined4 *)((char *)this + 0x108) = 0;
  *(undefined4 *)((char *)this + 0x10c) = 0;
  p_Var1 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0x108) = p_Var1;
  ((char *)this)[0x115] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x128) = 0;
  *(undefined4 *)((char *)this + 300) = 0xf;
  ((char *)this)[0x118] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x140) = 0;
  *(undefined4 *)((char *)this + 0x144) = 0xf;
  ((char *)this)[0x130] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x158) = 0;
  *(undefined4 *)((char *)this + 0x15c) = 0xf;
  ((char *)this)[0x148] = (byte)0x0;
  *(undefined2 *)((char *)this + 0x160) = 0;
  *(undefined4 *)((char *)this + 0x174) = 0;
  *(undefined4 *)((char *)this + 0x178) = 0xf;
  ((char *)this)[0x164] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x18c) = 0;
  *(undefined4 *)((char *)this + 400) = 0xf;
  ((char *)this)[0x17c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1a4) = 0;
  *(undefined4 *)((char *)this + 0x1a8) = 0xf;
  ((char *)this)[0x194] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1bc) = 0;
  *(undefined4 *)((char *)this + 0x1c0) = 0xf;
  ((char *)this)[0x1ac] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1d4) = 0;
  *(undefined4 *)((char *)this + 0x1d8) = 0xf;
  ((char *)this)[0x1c4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1ec) = 0;
  *(undefined4 *)((char *)this + 0x1f0) = 0xf;
  ((char *)this)[0x1dc] = (byte)0x0;
  *(undefined1 **)((char *)this + 500) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x1f8) = 0;
  *(undefined4 *)((char *)this + 0x1fc) = 0;
  *(undefined4 *)((char *)this + 0x200) = 0;
  _local_8 = CONCAT31(uStack_7,0x12);
  *(undefined4 *)((char *)this + 0x204) = 0;
  *(undefined4 *)((char *)this + 0x208) = 0;
  p_Var2 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_01);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0x204) = p_Var2;
  *(undefined4 *)((char *)this + 0x21c) = 0;
  *(undefined4 *)((char *)this + 0x220) = 0xf;
  ((char *)this)[0x20c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x224) = 0;
  *(undefined4 *)((char *)this + 0x228) = 0;
  *(undefined4 *)((char *)this + 0x22c) = 0;
  *(undefined4 *)((char *)this + 0x230) = 0;
  *(undefined4 *)((char *)this + 0x234) = 0;
  *(undefined4 *)((char *)this + 0x238) = 0;
  *(undefined4 *)((char *)this + 0x23c) = 0;
  *(undefined4 *)((char *)this + 0x240) = 0;
  *(undefined4 *)((char *)this + 0x244) = 0;
  *(undefined4 *)((char *)this + 0x248) = 0;
  *(undefined4 *)((char *)this + 0x24c) = 4;
  *(undefined4 *)((char *)this + 0x250) = 3;
  *(undefined2 *)((char *)this + 0x254) = 0x100;
  *(undefined4 *)((char *)this + 600) = 0;
  *(undefined4 *)((char *)this + 0x25c) = 0;
  *(undefined4 *)((char *)this + 0x260) = 0;
  *(undefined4 *)((char *)this + 0x264) = 0;
  *(undefined4 *)((char *)this + 0x268) = 0;
  *(undefined4 *)((char *)this + 0x26c) = 0;
  *(undefined4 *)((char *)this + 0x270) = 0;
  *(undefined4 *)((char *)this + 0x274) = 0;
  *(undefined4 *)((char *)this + 0x278) = 0;
  *(undefined4 *)((char *)this + 0x27c) = 0;
  *(undefined4 *)((char *)this + 0x280) = 0;
  *(undefined4 *)((char *)this + 0x284) = 0;
  *(undefined4 *)((char *)this + 0x288) = 0;
  *(undefined4 *)((char *)this + 0x28c) = 0;
  *(undefined4 *)((char *)this + 0x290) = 0;
  *(Scenario **)((char *)this + 0x294) = param_1;
  *(undefined4 *)((char *)this + 0xd0) = 0x1010101;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall ShipInstance::readyToSpawn(ShipInstance *this)
bool ShipInstance::readyToSpawn()

{
  CargoHold *pCVar1;
  std::string *pbVar2;
  bool bVar3;
  std::string *pbVar4;
  Ship *pSVar5;
  int iVar6;
  CargoHold *pCVar7;
  std::string *unaff_ESI;
  uint uVar8;
  std::string *unaff_EDI;
  std::string abStack_44 [12];
  undefined4 uStack_38;
  int local_10;
  int iStack_c;
  
  pCVar7 = (CargoHold *)0x0;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (pCVar1 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8), pCVar1 != (CargoHold *)0x0)) {
    pCVar7 = pCVar1;
  }
  uVar8 = 0;
  iVar6 = *(int *)((char *)this + 0x270);
  if (*(int *)((char *)this + 0x274) - iVar6 >> 2 != 0) {
    do {
      uStack_38 = 0x4ca53f;
      bVar3 = Requirement::checkReq
                        (*(Requirement **)(iVar6 + uVar8 * 4),pCVar7,
                         *(BankAccount **)(g_gameData + 0x124));
      if (!bVar3) {
        return false;
      }
      uVar8 = uVar8 + 1;
      iVar6 = *(int *)((char *)this + 0x270);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x274) - iVar6 >> 2));
  }
  iVar6 = *(int *)((char *)this + 0x290);
  if ((((iVar6 != 0) || (*(int *)((char *)this + 0x28c) != 0)) || (*(int *)((char *)this + 0x288) != 0)) ||
     (((*(int *)((char *)this + 0x284) != 0 || (*(int *)((char *)this + 0x280) != 0)) ||
      (*(float *)((char *)this + 0x27c) != 0.0)))) {
    iStack_c = (int)((ulonglong)*(undefined8 *)(g_gameLogic + 0x18c) >> 0x20);
    if (iVar6 <= iStack_c) {
      if (iVar6 < iStack_c) {
        return false;
      }
      local_10 = (int)*(undefined8 *)(g_gameLogic + 0x18c);
      if (*(int *)((char *)this + 0x28c) <= local_10) {
        if (*(int *)((char *)this + 0x28c) < local_10) {
          return false;
        }
        if (*(int *)((char *)this + 0x288) <= *(int *)(g_gameLogic + 0x188)) {
          if (*(int *)((char *)this + 0x288) < *(int *)(g_gameLogic + 0x188)) {
            return false;
          }
          if (*(int *)((char *)this + 0x284) <= *(int *)(g_gameLogic + 0x184)) {
            if (*(int *)((char *)this + 0x284) < *(int *)(g_gameLogic + 0x184)) {
              return false;
            }
            if (*(int *)((char *)this + 0x280) <= *(int *)(g_gameLogic + 0x180)) {
              return false;
            }
          }
        }
      }
    }
  }
  pbVar2 = *(std::string **)(*(int *)((char *)this + 0x294) + 0x3f8);
  pbVar4 = ghidra::lib::_Find_unchecked___x28_x29((std::string *)((char *)this + 0x1c),unaff_EDI,unaff_ESI);
  if (pbVar4 != pbVar2) {
    return false;
  }
  ghidra::str::ctor(abStack_44,(std::string *)((char *)this + 0x1c));
  pSVar5 = GameData::getShipWithRego();
  return pSVar5 == (Ship *)0x0;
}
