// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: int __thiscall ShipMechanics::hullRepairCost(ShipMechanics *this,Ship *param_1,HullLocation param_2)
int ShipMechanics::hullRepairCost(Ship * param_1, HullLocation param_2)

{
  int iVar1;
  HullLocation *pHVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  pHVar2 = *(HullLocation **)(*(int *)(param_1 + 0x254) + 0x118);
  iVar3 = *(int *)(*(int *)(param_1 + 0x254) + 0x11c) - (int)pHVar2;
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0xc + iVar1;
  if (iVar3 != iVar1) {
    do {
      if (*pHVar2 == param_2) {
        iVar1 = (param_1)->getDamageAmountForHullSection(*pHVar2);
        return iVar1 * 5;
      }
      uVar4 = uVar4 + 1;
      pHVar2 = pHVar2 + 3;
    } while (uVar4 < (uint)(iVar3 - iVar1));
  }
  return 0;
}


// Ghidra: int __thiscall ShipMechanics::getRepairPoints(ShipMechanics *this,Ship *param_1)
int ShipMechanics::getRepairPoints(Ship * param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar3 = 0;
  uVar2 = 0;
  local_8 = *(int *)(*(int *)(param_1 + 0x254) + 0x118);
  iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0x11c) - local_8;
  iVar4 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      iVar1 = (param_1)->getDamageAmountForHullSection(*(HullLocation *)(iVar4 + local_8));
      iVar3 = iVar3 + iVar1;
      iVar4 = iVar4 + 0xc;
      uVar2 = uVar2 + 1;
      local_8 = *(int *)(*(int *)(param_1 + 0x254) + 0x118);
    } while (uVar2 < (uint)((*(int *)(*(int *)(param_1 + 0x254) + 0x11c) - local_8) / 0xc));
  }
  return iVar3;
}


// Ghidra: void __thiscall ShipMechanics::performHullRepairAll(ShipMechanics *this,Ship *param_1)
void ShipMechanics::performHullRepairAll(Ship * param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  GameData *pGVar5;
  ShipMechanics *local_8;
  
  local_8 = this;
  iVar1 = getRepairPoints(this,param_1);
  if (iVar1 != 0) {
    pGVar5 = g_gameData + 0xd0;
    param_1 = (Ship *)0x0;
    iVar1 = *(int *)pGVar5;
    iVar3 = *(int *)(*(int *)(iVar1 + 0x254) + 0x11c) - *(int *)(*(int *)(iVar1 + 0x254) + 0x118);
    iVar4 = iVar3 >> 0x1f;
    if (iVar3 / 0xc + iVar4 != iVar4) {
      iVar4 = 0;
      do {
        local_8 = *(ShipMechanics **)(iVar4 + *(int *)(*(int *)(iVar1 + 0x254) + 0x118));
        piVar2 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(*(int *)pGVar5 + 0x14c),(int *)&local_8);
        iVar4 = iVar4 + 0xc;
        pGVar5 = g_gameData + 0xd0;
        param_1 = param_1 + 1;
        *piVar2 = 0;
        iVar1 = *(int *)pGVar5;
      } while (param_1 < (Ship *)((*(int *)(*(int *)(iVar1 + 0x254) + 0x11c) -
                                  *(int *)(*(int *)(iVar1 + 0x254) + 0x118)) / 0xc));
    }
  }
  return;
}


// Ghidra: void __thiscall ShipMechanics::itemiseHullRepairCost(ShipMechanics *this,Ship *param_1,TextEngine *param_2)
void ShipMechanics::itemiseHullRepairCost(Ship * param_1, TextEngine * param_2)

{
  char stack0xffffffd0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  int iVar3;
  TextEngine *this_00;
  TextEngine *this_01;
  TextEngine *this_02;
  int iVar4;
  uint local_c;
  int local_8;
  
  local_c = 0;
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x254);
  iVar3 = *(int *)(iVar2 + 0x11c) - *(int *)(iVar2 + 0x118);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar1 != iVar1) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x118) + 8 + local_8);
      iVar2 = Ship::getDamageAmountForHullSection
                        (param_1,*(HullLocation *)(*(int *)(iVar2 + 0x118) + local_8));
      iVar3 = Ship::getDamageAmountForHullSection
                        (param_1,*(HullLocation *)
                                  (*(int *)(*(int *)(param_1 + 0x254) + 0x118) + local_8));
      iVar4 = iVar4 + iVar3;
      if (iVar1 == iVar2) {
        this_00 = (TextEngine *)0x38;
      }
      else if (iVar1 - iVar2 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
        this_00 = (TextEngine *)&DAT_00000040;
      }
      else {
        this_00 = (TextEngine *)&DAT_00000030;
        if (iVar1 - iVar2 < iVar1 / 2) {
          this_00 = (TextEngine *)0x24;
        }
      }
      (this_00)->addLinef((char *)param_2);
      local_c = local_c + 1;
      local_8 = local_8 + 0xc;
      iVar2 = *(int *)(param_1 + 0x254);
    } while (local_c < (uint)((*(int *)(iVar2 + 0x11c) - *(int *)(iVar2 + 0x118)) / 0xc));
  }
  (param_2)->addBlankLine();
  if (iVar4 == 0) {
    ghidra::str::assign((std::string *)&stack0xffffffd0,"`0** ship undamaged **",0x16);
    (param_2)->addLine();
    return;
  }
  (this_01)->addLinef((char *)param_2);
  (this_02)->addLinef((char *)param_2);
  return;
}


// Ghidra: int __thiscall ShipMechanics::moduleRepairCost(ShipMechanics *this,Ship *param_1)
int ShipMechanics::moduleRepairCost(Ship * param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  piVar4 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - (int)piVar4 >> 2;
  if (iVar6 == 0) {
    return 0;
  }
  do {
    iVar5 = 0;
    puVar2 = *(undefined4 **)(*piVar4 + 0xc);
    iVar3 = 0x14;
    do {
      puVar2 = puVar2 + 1;
      if (((float *)*puVar2 != (float *)0x0) && (fVar1 = *(float *)*puVar2, fVar1 < 100.0)) {
        iVar5 = (int)((100.0 - fVar1) + (float)iVar5);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar4 = piVar4 + 1;
    local_8 = local_8 + (int)((float)iVar5 * 0.02);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return local_8;
}
