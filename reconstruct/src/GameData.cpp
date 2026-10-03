// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: GameData * __thiscall GameData::GameData(GameData *this)
GameData::GameData()

{
  BankEngine *pBVar1;
  BankAccount *pBVar2;
  undefined4 *puVar3;
  ghidra::lib::_Tree_node_t *p_Var4;
  std::string *pbVar5;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  std::string local_48 [16];
  undefined4 local_38;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005bd775;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0;
  *(undefined4 *)((char *)this + 0x54) = 0;
  *(undefined4 *)((char *)this + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0;
  *(undefined4 *)((char *)this + 0x6c) = 0;
  *(undefined4 *)((char *)this + 0x70) = 0;
  *(undefined4 *)((char *)this + 0x74) = 0;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0;
  *(undefined4 *)((char *)this + 0x80) = 0;
  *(undefined4 *)((char *)this + 0x84) = 0;
  *(undefined4 *)((char *)this + 0x88) = 0;
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0;
  *(undefined4 *)((char *)this + 0x94) = 0;
  *(undefined4 *)((char *)this + 0x98) = 0;
  *(undefined4 *)((char *)this + 0x9c) = 0;
  *(undefined4 *)((char *)this + 0xa0) = 0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0;
  *(undefined4 *)((char *)this + 0xac) = 0;
  *(undefined4 *)((char *)this + 0xb0) = 0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  *(undefined4 *)((char *)this + 200) = 0xf;
  ((char *)this)[0xb4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xcc) = 0;
  *(undefined4 *)((char *)this + 0xd0) = 0;
  ((char *)this)[0xd4] = (byte)0x43;
  *(undefined4 *)((char *)this + 0xd8) = 0;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0xf;
  ((char *)this)[0xdc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x104) = 0;
  *(undefined4 *)((char *)this + 0x108) = 0xf;
  ((char *)this)[0xf4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x11c) = 0;
  *(undefined4 *)((char *)this + 0x120) = 0xf;
  ((char *)this)[0x10c] = (byte)0x0;
  // [seh] local_8 = 0x12;
  uStack_7 = 0;
  local_38 = 0;
  local_48[0] = (std::string)0x0;
  ghidra::str::assign(local_48,"CERESPILOT",10);
  // [seh] local_8 = 0x13;
  pBVar1 = Singleton<BankEngine>::instance;
  if (Singleton<BankEngine>::instance == (BankEngine *)0x0) {
    pBVar1 = operator_new(0xc);
    Singleton<BankEngine>::instance = pBVar1;
    *(undefined4 *)pBVar1 = 0;
    *(undefined4 *)(pBVar1 + 4) = 0;
    *(undefined4 *)(pBVar1 + 8) = 0;
  }
  // [seh] local_8 = 0x12;
  pBVar2 = (pBVar1)->openAccount();
  *(BankAccount **)((char *)this + 0x124) = pBVar2;
  *(undefined4 *)((char *)this + 0x128) = 0;
  puVar3 = operator_new(0x2c);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  // [seh] local_8 = 0x15;
  puVar3[3] = 0;
  puVar3[4] = 0;
  p_Var4 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  puVar3[3] = p_Var4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined4 **)((char *)this + 300) = puVar3;
  *(undefined4 *)((char *)this + 0x130) = 0;
  *(undefined4 *)((char *)this + 0x134) = 0;
  *(undefined4 *)((char *)this + 0x138) = 0;
  *(undefined4 *)((char *)this + 0x13c) = 0;
  *(undefined4 *)((char *)this + 0x140) = 0;
  *(undefined4 *)((char *)this + 0x144) = 0;
  *(undefined4 *)((char *)this + 0x148) = 0;
  *(undefined4 *)((char *)this + 0x14c) = 0;
  *(undefined4 *)((char *)this + 0x150) = 0;
  *(undefined4 *)((char *)this + 0x154) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x168) = 0;
  *(undefined4 *)((char *)this + 0x16c) = 0xf;
  ((char *)this)[0x158] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x18c) = 0;
  *(undefined4 *)((char *)this + 400) = 0xf;
  ((char *)this)[0x17c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1a4) = 0;
  *(undefined4 *)((char *)this + 0x1a8) = 0xf;
  ((char *)this)[0x194] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1bc) = 0;
  *(undefined4 *)((char *)this + 0x1c0) = 0xf;
  ((char *)this)[0x1ac] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1dc) = 0;
  *(undefined4 *)((char *)this + 0x1e0) = 0xf;
  ((char *)this)[0x1cc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1e4) = 0;
  *(undefined4 *)((char *)this + 0x1e8) = 0;
  *(undefined4 *)((char *)this + 0x1ec) = 0;
  *(undefined4 *)((char *)this + 0x200) = 0;
  *(undefined4 *)((char *)this + 0x204) = 0xf;
  ((char *)this)[0x1f0] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x218) = 0;
  *(undefined4 *)((char *)this + 0x21c) = 0xf;
  ((char *)this)[0x208] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x230) = 0;
  *(undefined4 *)((char *)this + 0x234) = 0xf;
  ((char *)this)[0x220] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x244) = 0;
  *(undefined4 *)((char *)this + 0x248) = 0;
  *(undefined4 *)((char *)this + 0x24c) = 0;
  *(undefined4 *)((char *)this + 0x250) = 0;
  *(undefined4 *)((char *)this + 0x254) = 0;
  *(undefined4 *)((char *)this + 600) = 0;
  *(undefined4 *)((char *)this + 0x26c) = 0;
  *(undefined4 *)((char *)this + 0x270) = 0xf;
  ((char *)this)[0x25c] = (byte)0x0;
  _local_8 = CONCAT31(uStack_7,0x1d);
  *(undefined4 *)((char *)this + 0x274) = 0;
  if ((std::string *)((char *)this + 0xb4) != &OISConfiguration::scenario) {
    pbVar5 = &OISConfiguration::scenario;
    if (0xf < DAT_006577ac) {
      pbVar5 = _scenario;
    }
    local_38 = 0x4a6aec;
    ghidra::str::assign((std::string *)((char *)this + 0xb4),(char *)pbVar5,DAT_006577a8);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: Ship * __thiscall GameData::getShipWithinDistance(undefined4 param_1_00,int param_1,int param_3,char param_4)
Ship * GameData::getShipWithinDistance(undefined4 param_1_00, int param_1, int param_3, char param_4)

{
  char stack0x00000010[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float in_XMM2_Da;
  float fVar6;
  float local_20;
  float local_1c;
  float local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005bd7a2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  uStack_7 = 0;
  for (puVar2 = *(undefined4 **)(g_gameData + 0x3c); puVar2 != *(undefined4 **)(g_gameData + 0x40);
      puVar2 = puVar2 + 1) {
    piVar4 = (int *)*puVar2;
    if (*piVar4 == param_1) goto LAB_004a6d65;
  }
  piVar4 = (int *)0x0;
LAB_004a6d65:
  uVar5 = 0;
  iVar3 = piVar4[0x33];
  local_18 = in_XMM2_Da;
  if (piVar4[0x34] - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar5 * 4);
      if ((iVar3 != param_3) &&
         (((param_4 == '\0' || (*(char *)(*(int *)(iVar3 + 0x40) + 0x34) == '\0')) ||
          (*(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 4)))) {
        local_20 = (float)*(double *)(iVar3 + 0x28);
        local_1c = (float)*(double *)(iVar3 + 0x30);
        // [seh] local_8 = 1;
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&stack0x00000010);
        fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        if ((1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6 <= local_18) {
          // [seh] ExceptionList = local_10;
          return *(Ship **)(piVar4[0x33] + uVar5 * 4);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = piVar4[0x33];
    } while (uVar5 < (uint)(piVar4[0x34] - iVar3 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return (Ship *)0x0;
}


// Ghidra: Ship * __thiscall GameData::getShipWithID(GameData *this,int param_1)
Ship * GameData::getShipWithID(int param_1)

{
  int iVar1;
  Ship *pSVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  piVar6 = *(int **)(g_gameData + 0x3c);
  uVar7 = 0;
  uVar3 = *(int *)(g_gameData + 0x40) - (int)piVar6 >> 2;
  if (uVar3 != 0) {
    do {
      uVar4 = 0;
      iVar1 = *(int *)(*piVar6 + 0xcc);
      uVar5 = *(int *)(*piVar6 + 0xd0) - iVar1 >> 2;
      if (uVar5 != 0) {
        do {
          pSVar2 = *(Ship **)(iVar1 + uVar4 * 4);
          if (*(int *)(pSVar2 + 0x250) == param_1) {
            return pSVar2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 < uVar3);
  }
  return (Ship *)0x0;
}


// Ghidra: SpaceStation * __thiscall GameData::getSpaceStation(undefined4 param_1,char *param_2)
SpaceStation * GameData::getSpaceStation(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  SpaceStation *pSVar11;
  uint unaff_EDI;
  int iVar12;
  uint uVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005b37a8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pcVar5 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar5 = param_2;
  }
  pcVar8 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar8 = param_2;
  }
  iVar9 = 0;
  iVar12 = (int)(pcVar5 + in_stack_00000014) - (int)pcVar8;
  if (pcVar5 + in_stack_00000014 < pcVar8) {
    iVar12 = 0;
  }
  if (iVar12 != 0) {
    do {
      iVar4 = toupper((int)pcVar8[iVar9]);
      pcVar5[iVar9] = (char)iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar12);
  }
  iVar9 = *(int *)(pGVar1 + 0x3c);
  local_14 = 0;
  uVar7 = *(int *)(pGVar1 + 0x40) - iVar9 >> 2;
  if (uVar7 != 0) {
    do {
      iVar12 = *(int *)(iVar9 + local_14 * 4);
      uVar10 = 0;
      iVar4 = *(int *)(iVar12 + 0xcc);
      uVar13 = *(int *)(iVar12 + 0xd0) - iVar4 >> 2;
      if (uVar13 != 0) {
        do {
          iVar12 = *(int *)(*(int *)(*(int *)(iVar4 + uVar10 * 4) + 0x254) + 0x158);
          if (((iVar12 == 1) || (iVar12 == 2)) || (iVar12 == 3)) {
            pcVar5 = (char *)&param_2;
            if (0xf < in_stack_00000018) {
              pcVar5 = param_2;
            }
            bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
            if (bVar2) {
              pSVar11 = *(SpaceStation **)(iVar4 + uVar10 * 4);
              goto LAB_004a705b;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      local_14 = local_14 + 1;
    } while (local_14 < uVar7);
  }
  pSVar11 = (SpaceStation *)0x0;
LAB_004a705b:
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar5 = param_2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar5 = *(char **)(param_2 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar5,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  return pSVar11;
}


// Ghidra: Sector * __thiscall GameData::getSectorOfShip(undefined4 param_1,char *param_2)
Sector * GameData::getSectorOfShip(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  int iVar9;
  uint uVar10;
  Sector *pSVar11;
  uint unaff_EDI;
  int iVar12;
  uint uVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005b1e48;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pcVar4 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar4 = param_2;
  }
  pcVar6 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar6 = param_2;
  }
  iVar12 = (int)(pcVar4 + in_stack_00000014) - (int)pcVar6;
  iVar9 = 0;
  if (pcVar4 + in_stack_00000014 < pcVar6) {
    iVar12 = 0;
  }
  if (iVar12 != 0) {
    do {
      iVar5 = toupper((int)pcVar6[iVar9]);
      pcVar4[iVar9] = (char)iVar5;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar12);
  }
  pcVar4 = param_2;
  local_14 = 0;
  iVar9 = *(int *)(pGVar1 + 0x3c);
  uVar7 = *(int *)(pGVar1 + 0x40) - iVar9 >> 2;
  if (uVar7 != 0) {
    do {
      pSVar11 = *(Sector **)(iVar9 + local_14 * 4);
      uVar10 = 0;
      uVar13 = *(int *)(pSVar11 + 0xd0) - *(int *)(pSVar11 + 0xcc) >> 2;
      if (uVar13 != 0) {
        do {
          pcVar6 = (char *)&param_2;
          if (0xf < in_stack_00000018) {
            pcVar6 = pcVar4;
          }
          bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar6,in_stack_00000014,pcVar3,unaff_EDI);
          if (bVar2) goto LAB_004a71d8;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      local_14 = local_14 + 1;
    } while (local_14 < uVar7);
  }
  pSVar11 = (Sector *)0x0;
LAB_004a71d8:
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = pcVar4;
    if ((nothrow_t *)0xfff < pnVar8) {
      pcVar3 = *(char **)(pcVar4 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar4 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  return pSVar11;
}


// Ghidra: Ship * __thiscall GameData::getShipWithRego(undefined4 param_1,char *param_2)
Ship * GameData::getShipWithRego(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  nothrow_t *pnVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  Ship *pSVar12;
  uint unaff_EDI;
  int iVar13;
  uint uVar14;
  uint in_stack_00000014;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005b37a8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pcVar6 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar6 = param_2;
  }
  pcVar8 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar8 = param_2;
  }
  iVar13 = (int)(pcVar6 + in_stack_00000014) - (int)pcVar8;
  iVar10 = 0;
  if (pcVar6 + in_stack_00000014 < pcVar8) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    do {
      iVar4 = toupper((int)pcVar8[iVar10]);
      pcVar6[iVar10] = (char)iVar4;
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar13);
  }
  uVar9 = 0;
  iVar10 = *(int *)(pGVar1 + 0x3c);
  uVar5 = *(int *)(pGVar1 + 0x40) - iVar10 >> 2;
  if (uVar5 != 0) {
    do {
      iVar13 = *(int *)(iVar10 + uVar9 * 4);
      uVar11 = 0;
      iVar4 = *(int *)(iVar13 + 0xcc);
      uVar14 = *(int *)(iVar13 + 0xd0) - iVar4 >> 2;
      if (uVar14 != 0) {
        do {
          pcVar6 = (char *)&param_2;
          if (0xf < in_stack_00000018) {
            pcVar6 = param_2;
          }
          bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar6,in_stack_00000014,pcVar3,unaff_EDI);
          if (bVar2) {
            pSVar12 = *(Ship **)(iVar4 + uVar11 * 4);
            goto LAB_004a735b;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar14);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  pSVar12 = (Ship *)0x0;
LAB_004a735b:
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar6 = *(char **)(param_2 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar6,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return pSVar12;
}


// Ghidra: Sector * __thiscall GameData::getSectorWithID(GameData *this,int param_1)
Sector * GameData::getSectorWithID(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((char *)this + 0x3c);
  while( true ) {
    if (puVar1 == *(undefined4 **)((char *)this + 0x40)) {
      return (Sector *)0x0;
    }
    if (*(int *)*puVar1 == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return (Sector *)*puVar1;
}


// Ghidra: Sector * __thiscall GameData::getSectorWithShortName(undefined4 param_1,char *param_2)
Sector * GameData::getSectorWithShortName(undefined4 param_1, char * param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  Sector *pSVar6;
  uint unaff_ESI;
  undefined4 *puVar7;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  puVar1 = *(undefined4 **)(g_gameData + 0x40);
  for (puVar7 = *(undefined4 **)(g_gameData + 0x3c); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    pSVar6 = (Sector *)*puVar7;
    pcVar4 = (char *)&param_2;
    if (0xf < in_stack_00000018) {
      pcVar4 = pcVar2;
    }
    bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004a7435;
  }
  pSVar6 = (Sector *)0x0;
LAB_004a7435:
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
  return pSVar6;
}


// Ghidra: HazardCategory * __thiscall GameData::getNebulaHazardCategory(GameData *this,int param_1)
HazardCategory * GameData::getNebulaHazardCategory(int param_1)

{
  HazardCategory *pHVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(g_gameData + 0x58) - *(int *)(g_gameData + 0x54) >> 2;
  if (uVar3 != 0) {
    do {
      pHVar1 = *(HazardCategory **)(*(int *)(g_gameData + 0x54) + uVar2 * 4);
      if ((*(int *)(pHVar1 + 0x20) == param_1) && (*(int *)pHVar1 == 2)) {
        return pHVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (HazardCategory *)0x0;
}


// Ghidra: HazardCategory * __thiscall GameData::getAsteroidHazardCategory(GameData *this,int param_1)
HazardCategory * GameData::getAsteroidHazardCategory(int param_1)

{
  HazardCategory *pHVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(g_gameData + 0x58) - *(int *)(g_gameData + 0x54) >> 2;
  if (uVar3 != 0) {
    do {
      pHVar1 = *(HazardCategory **)(*(int *)(g_gameData + 0x54) + uVar2 * 4);
      if ((*(int *)(pHVar1 + 0x20) == param_1) && (*(int *)pHVar1 == 1)) {
        return pHVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (HazardCategory *)0x0;
}


// Ghidra: Structure * __thiscall GameData::getStructure(GameData *this,char param_2,char *param_3)
Structure * GameData::getStructure(char param_2, char * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  AnimationFrames **ppAVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  std::string *pbVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  char *pcVar8;
  uint uVar9;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_38 [5];
  uint local_24;
  std::string *local_1c;
  std::string *local_18 [2];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  pcVar8 = param_3;
  // [seh] puStack_c = &DAT_005bd7df;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  this_00 = (ghidra::vector *)((char *)this + 0xa8);
  // [seh] local_8 = 0;
  uVar9 = 0;
  pbVar5 = *(std::string **)this_00;
  if (*(int *)((char *)this + 0xac) - (int)pbVar5 >> 2 != 0) {
    do {
      pcVar4 = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        pcVar4 = pcVar8;
      }
      local_18[0] = pbVar5;
      bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000018,pcVar3,unaff_EDI);
      if (bVar2) {
        pbVar5 = *(std::string **)(*(int *)this_00 + uVar9 * 4);
        goto LAB_004a76b0;
      }
      uVar9 = uVar9 + 1;
      pbVar5 = local_18[0] + 4;
      local_18[0] = pbVar5;
    } while (uVar9 < (uint)(*(int *)((char *)this + 0xac) - *(int *)this_00 >> 2));
  }
  if (param_2 == '\0') {
    pcVar3 = (char *)&param_3;
    if (0xf < in_stack_0000001c) {
      pcVar3 = pcVar8;
    }
    debugPrint("ERROR","ERROR: INVALID structure \'%s\'",pcVar3);
    bVar2 = cc_assert_script_compatible("ERROR: invalid structure.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","ERROR: invalid structure.");
    }
    pbVar5 = (std::string *)0x0;
    pcVar8 = param_3;
  }
  else {
    pbVar5 = operator_new(0x24);
    // [seh] local_8._0_1_ = 1;
    local_1c = pbVar5;
    ghidra::str::ctor((std::string *)local_38,(std::string *)&param_3);
    // [seh] local_8._0_1_ = 2;
    ghidra::str::ctor(pbVar5,(std::string *)local_38);
    *(undefined4 *)(pbVar5 + 0x18) = 0;
    *(undefined4 *)(pbVar5 + 0x1c) = 0;
    *(undefined4 *)(pbVar5 + 0x20) = 0;
    // [seh] local_8._0_1_ = 1;
    if (0xf < local_24) {
      pnVar7 = (nothrow_t *)(local_24 + 1);
      pvVar6 = local_38[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_38[0] + -4);
        pnVar7 = (nothrow_t *)(local_24 + 0x24);
        if (0x1f < (uint)((int)local_38[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    ppAVar1 = *(AnimationFrames ***)((char *)this + 0xac);
    local_18[0] = pbVar5;
    if (*(AnimationFrames ***)((char *)this + 0xb0) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)local_18);
      pcVar8 = param_3;
      pbVar5 = local_18[0];
    }
    else {
      *ppAVar1 = (AnimationFrames *)pbVar5;
      *(int *)((char *)this + 0xac) = *(int *)((char *)this + 0xac) + 4;
      pcVar8 = param_3;
    }
  }
LAB_004a76b0:
  if (0xf < in_stack_0000001c) {
    pnVar7 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar3 = pcVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar3 = *(char **)(pcVar8 + -4);
      pnVar7 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < pcVar8 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return (Structure *)pbVar5;
}


// Ghidra: Room * __thiscall GameData::getRoom(undefined4 param_1,void *param_2)
Room * GameData::getRoom(undefined4 param_1, void * param_2)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  GameData *pGVar1;
  bool bVar2;
  Structure *this_;
  Room *pRVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  int in_stack_0000001c;
  std::string abStack_34 [4];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005b2dc8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_34,(std::string *)&param_2);
  this_ = getStructure(pGVar1,0);
  if (this_ == (Structure *)0x0) {
    debugPrint("ERROR","Error: invalid structure \'%s\'");
    uStack_30 = 0x4a7774;
    bVar2 = cc_assert_script_compatible("Error: invalid structure");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  pRVar3 = (this_)->getRoom(in_stack_0000001c);
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return pRVar3;
}


// Ghidra: GameCharacter * __thiscall GameData::getCharacter(undefined4 param_1,char *param_2)
GameCharacter * GameData::getCharacter(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  GameCharacter *pGVar6;
  int iVar7;
  nothrow_t *pnVar8;
  void *pvVar9;
  uint unaff_EDI;
  uint uVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005bd068;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar10 = 0;
  iVar7 = *(int *)(g_gameData + 0x78);
  local_14 = pcVar4;
  if (*(int *)(g_gameData + 0x7c) - iVar7 >> 2 != 0) {
    do {
      ghidra::str::ctor
                ((std::string *)local_2c,(std::string *)(*(int *)(iVar7 + uVar10 * 4) + 0xf8))
      ;
      pvVar2 = local_2c[0];
      pcVar5 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar5 = param_2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar9 = pvVar2;
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar9 = *(void **)((int)pvVar2 + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar9))) goto LAB_004a78e8;
        }
        operator_delete(pvVar9,pnVar8);
      }
      if (bVar3) break;
      uVar10 = uVar10 + 1;
      iVar7 = *(int *)(pGVar1 + 0x78);
    } while (uVar10 < (uint)(*(int *)(pGVar1 + 0x7c) - iVar7 >> 2));
  }
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar8) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) {
LAB_004a78e8:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] pGVar6 = (GameCharacter *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pGVar6;
}


// Ghidra: GameCharacter * __thiscall GameData::getExtraWithTag(undefined4 param_1,void *param_2)
GameCharacter * GameData::getExtraWithTag(undefined4 param_1, void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  undefined4 *puVar2;
  std::string *pbVar3;
  std::string *pbVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  AnimationFrames **ppAVar8;
  int iVar9;
  GameCharacter *pGVar10;
  int iVar11;
  undefined4 *puVar12;
  std::string *unaff_EDI;
  AnimationFrames **ppAVar13;
  uint uVar14;
  nothrow_t *pnVar15;
  uint in_stack_00000018;
  int in_stack_0000001c;
  undefined4 *local_34;
  AnimationFrames **local_30;
  AnimationFrames **local_2c;
  int local_28;
  int local_24;
  int local_20;
  GameData *local_1c;
  uint local_18;
  AnimationFrames **local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bd810;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  ppAVar13 = (AnimationFrames **)0x0;
  ppAVar8 = (AnimationFrames **)0x0;
  local_1c = g_gameData;
  local_34 = (undefined4 *)0x0;
  local_30 = (AnimationFrames **)0x0;
  local_14 = (AnimationFrames **)0x0;
  local_2c = (AnimationFrames **)0x0;
  // [seh] local_8 = 1;
  iVar9 = *(int *)(g_gameData + 0x78);
  local_18 = 0;
  if (*(int *)(g_gameData + 0x7c) - iVar9 >> 2 != 0) {
    do {
      local_28 = local_18 * 4;
      local_24 = *(int *)(iVar9 + local_28);
      if ((*(char *)(local_24 + 9) != '\0') &&
         (pbVar1 = *(std::string **)(local_24 + 0x4c), local_20 = iVar9,
         pbVar4 = ghidra::lib::_Find_unchecked___x28_x29((std::string *)&param_2,pbVar3,unaff_EDI),
         pbVar4 != pbVar1)) {
        uVar14 = 0;
        piVar5 = *(int **)(in_stack_0000001c + 0x3ec);
        iVar11 = *(int *)(in_stack_0000001c + 0x3f0) - (int)piVar5;
        iVar9 = iVar11 >> 0x1f;
        iVar7 = iVar11 / 0x1c + iVar9;
        iVar11 = local_20;
        ppAVar13 = local_14;
        if (iVar7 != iVar9) {
          do {
            if (*piVar5 == local_24) goto LAB_004a7a35;
            uVar14 = uVar14 + 1;
            piVar5 = piVar5 + 7;
          } while (uVar14 < (uint)(iVar7 - iVar9));
          iVar11 = *(int *)(local_1c + 0x78);
        }
        if (local_14 == ppAVar8) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_34,ppAVar8,(AnimationFrames **)(iVar11 + local_28));
          local_14 = local_2c;
          ppAVar8 = local_30;
          ppAVar13 = local_2c;
        }
        else {
          *ppAVar8 = *(AnimationFrames **)(iVar11 + local_28);
          local_30 = ppAVar8 + 1;
          ppAVar8 = local_30;
        }
      }
LAB_004a7a35:
      local_18 = local_18 + 1;
      iVar9 = *(int *)(local_1c + 0x78);
      local_20 = iVar9;
    } while (local_18 < (uint)(*(int *)(local_1c + 0x7c) - iVar9 >> 2));
  }
  puVar2 = local_34;
  iVar9 = (int)ppAVar8 - (int)local_34 >> 2;
  pGVar10 = (GameCharacter *)0x0;
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      pGVar10 = (GameCharacter *)*local_34;
    }
    else {
      iVar11 = rand();
      pGVar10 = (GameCharacter *)puVar2[iVar11 % iVar9];
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    pnVar15 = (nothrow_t *)((int)ppAVar13 - (int)puVar2 & 0xfffffffc);
    puVar12 = puVar2;
    if ((nothrow_t *)0xfff < pnVar15) {
      puVar12 = (undefined4 *)puVar2[-1];
      pnVar15 = pnVar15 + 0x23;
      if (0x1f < (uint)((int)puVar2 + (-4 - (int)puVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar12,pnVar15);
  }
  if (0xf < in_stack_00000018) {
    pnVar15 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar6 = *(void **)((int)param_2 + -4);
      pnVar15 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar15);
  }
  // [seh] ExceptionList = local_10;
  return pGVar10;
}


// Ghidra: void __thiscall GameData::setUniqueObjects(undefined4 param_1,int param_2,byte param_3,void *param_4)
void GameData::setUniqueObjects(undefined4 param_1, int param_2, byte param_3, void * param_4)

{
  GameData *pGVar1;
  Structure *pSVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000020;
  std::string abStack_44 [12];
  undefined4 uStack_38;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005bd838;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_44,(std::string *)&param_4);
  pSVar2 = getStructure(pGVar1,0);
  local_14 = 0;
  iVar5 = *(int *)(pSVar2 + 0x18);
  if (*(int *)(pSVar2 + 0x1c) - iVar5 >> 2 != 0) {
    do {
      iVar5 = *(int *)(iVar5 + local_14 * 4);
      uVar3 = 0;
      iVar6 = *(int *)(iVar5 + 0x90);
      if (*(int *)(iVar5 + 0x94) - iVar6 >> 2 != 0) {
        do {
          iVar6 = *(int *)(iVar6 + uVar3 * 4);
          if (*(int *)(iVar6 + 0x31c) == param_2) {
            *(byte *)(iVar6 + 0x34c) = param_3 ^ 1;
          }
          uVar3 = uVar3 + 1;
          iVar6 = *(int *)(iVar5 + 0x90);
        } while (uVar3 < (uint)(*(int *)(iVar5 + 0x94) - iVar6 >> 2));
      }
      local_14 = local_14 + 1;
      iVar5 = *(int *)(pSVar2 + 0x18);
    } while (local_14 < (uint)(*(int *)(pSVar2 + 0x1c) - iVar5 >> 2));
  }
  if (0xf < in_stack_00000020) {
    pnVar7 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_4;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar4 = *(void **)((int)param_4 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x4a7c08;
    operator_delete(pvVar4,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: GameCharacter * __thiscall GameData::getCharacterAtSpawnPoint(undefined4 param_1,char *param_2)
GameCharacter * GameData::getCharacterAtSpawnPoint(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  GameCharacter *pGVar2;
  int *piVar3;
  GameCharacter *pGVar4;
  void **ppvVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  ConversationManager *pCVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  nothrow_t *pnVar14;
  GameData *pGVar15;
  GameCharacter *pGVar16;
  uint unaff_EDI;
  uint uVar17;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  std::string abStack_5c [12];
  undefined4 uStack_50;
  GameCharacter *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bd878;
  // [cookie] pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] local_8 = 1;
  pGVar16 = (GameCharacter *)0x0;
  local_14 = (GameCharacter *)0x0;
  piVar12 = *(int **)(g_gameData + 0x78);
  piVar1 = *(int **)(g_gameData + 0x7c);
  ppvVar5 = &local_10;
  // [seh] local_10 = ExceptionList;
  pGVar4 = local_14;
  pGVar15 = g_gameData;
  do {
    // [seh] ExceptionList = ppvVar5;
    if (piVar12 == piVar1) {
      if (0xf < in_stack_00000018) {
        pnVar14 = (nothrow_t *)(in_stack_00000018 + 1);
        pcVar7 = param_2;
        if ((nothrow_t *)0xfff < pnVar14) {
          pcVar7 = *(char **)(param_2 + -4);
          pnVar14 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if ((char *)0x1f < param_2 + (-4 - (int)pcVar7)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_50 = 0x4a7e2a;
        operator_delete(pcVar7,pnVar14);
      }
      in_stack_00000014 = 0;
      in_stack_00000018 = 0xf;
      param_2 = (char *)((uint)param_2 & 0xffffff00);
      if (0xf < in_stack_00000030) {
        pnVar14 = (nothrow_t *)(in_stack_00000030 + 1);
        pcVar7 = in_stack_0000001c;
        if ((nothrow_t *)0xfff < pnVar14) {
          pcVar7 = *(char **)(in_stack_0000001c + -4);
          pnVar14 = (nothrow_t *)(in_stack_00000030 + 0x24);
          if ((char *)0x1f < in_stack_0000001c + (-4 - (int)pcVar7)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_50 = 0x4a7e72;
        operator_delete(pcVar7,pnVar14);
      }
      // [seh] ExceptionList = local_10;
      return pGVar16;
    }
    pGVar2 = (GameCharacter *)*piVar12;
    piVar3 = *(int **)(pGVar2 + 0xf0);
    for (piVar11 = *(int **)(pGVar2 + 0xec); piVar11 != piVar3; piVar11 = piVar11 + 1) {
      iVar10 = *piVar11;
      pcVar8 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar8 = param_2;
      }
      uStack_50 = 0x4a7cb5;
      bVar6 = ghidra::lib::_Traits_equal___x28_x29(pcVar8,in_stack_00000014,pcVar7,unaff_EDI);
      if (bVar6) {
LAB_004a7d0b:
        pcVar8 = (char *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pcVar8 = in_stack_0000001c;
        }
        uStack_50 = 0x4a7d2e;
        bVar6 = ghidra::lib::_Traits_equal___x28_x29(pcVar8,in_stack_0000002c,pcVar7,unaff_EDI);
        if (!bVar6) goto LAB_004a7dd0;
        uVar17 = 0;
        iVar13 = *(int *)(iVar10 + 0x30);
        if (*(int *)(iVar10 + 0x34) - iVar13 >> 2 != 0) {
          do {
            uStack_50 = 0x4a7d6a;
            bVar6 = Requirement::checkReq
                              (*(Requirement **)(iVar13 + uVar17 * 4),
                               *(CargoHold **)(*(int *)(pGVar15 + 0xd0) + 0x1f8),
                               *(BankAccount **)(pGVar15 + 0x124));
            pGVar15 = g_gameData;
            if (!bVar6) goto LAB_004a7dd0;
            uVar17 = uVar17 + 1;
            iVar13 = *(int *)(iVar10 + 0x30);
          } while (uVar17 < (uint)(*(int *)(iVar10 + 0x34) - iVar13 >> 2));
        }
        local_14 = pGVar2;
        if (pGVar4 != (GameCharacter *)0x0) {
          ghidra::str::ctor(abStack_5c,(std::string *)(pGVar2 + 0xf8));
          // [seh] local_8._0_1_ = 2;
          pCVar9 = ghidra::any_singleton();
          // [seh] local_8 = CONCAT31(local_8._1_3_,1);
          iVar10 = (pCVar9)->hasConversationToForce();
          pGVar15 = g_gameData;
          if (iVar10 == -1) goto LAB_004a7dd0;
        }
      }
      else {
        uStack_50 = 0x4a7cd4;
        bVar6 = ghidra::lib::_Traits_equal___x28_x29("PLAYERSHIP",10,pcVar7,unaff_EDI);
        if ((bVar6) && (ShipData::currentlyBoardedShip == *(Ship **)(pGVar15 + 0xd0)))
        goto LAB_004a7d0b;
        uStack_50 = 0x4a7d00;
        bVar6 = ghidra::lib::_Traits_equal___x28_x29("ANYSTATION",10,pcVar7,unaff_EDI);
        if (bVar6) goto LAB_004a7d0b;
LAB_004a7dd0:
        local_14 = pGVar4;
      }
      pGVar16 = local_14;
      pGVar4 = local_14;
    }
    piVar12 = piVar12 + 1;
    ppvVar5 = ExceptionList;
  } while( true );
}


// Ghidra: CharacterLocation * __thiscall GameData::getCharacterLocationAtSpawnPoint(undefined4 param_1,char *param_2)
CharacterLocation * GameData::getCharacterLocationAtSpawnPoint(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  GameData *pGVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  CharacterLocation *pCVar9;
  uint unaff_EDI;
  GameData *pGVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar2 = g_gameData;
  // [seh] puStack_c = &DAT_005bd8b0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_18 = 0;
  iVar6 = *(int *)(g_gameData + 0x78);
  pGVar10 = g_gameData;
  if (*(int *)(g_gameData + 0x7c) - iVar6 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar6 + local_18 * 4);
      local_14 = 0;
      if (*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec) >> 2 != 0) {
        do {
          iVar1 = *(int *)(iVar6 + local_18 * 4);
          pcVar5 = (char *)&param_2;
          if (0xf < in_stack_00000018) {
            pcVar5 = param_2;
          }
          bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
          if ((bVar3) ||
             (((bVar3 = ghidra::lib::_Traits_equal___x28_x29("PLAYERSHIP",10,pcVar4,unaff_EDI), bVar3 &&
               (ShipData::currentlyBoardedShip == *(Ship **)(pGVar10 + 0xd0))) ||
              (bVar3 = ghidra::lib::_Traits_equal___x28_x29("ANYSTATION",10,pcVar4,unaff_EDI), bVar3)))) {
            pcVar5 = (char *)&stack0x0000001c;
            if (0xf < in_stack_00000030) {
              pcVar5 = in_stack_0000001c;
            }
            bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_0000002c,pcVar4,unaff_EDI);
            if (bVar3) {
              uVar8 = 0;
              pCVar9 = *(CharacterLocation **)(*(int *)(iVar1 + 0xec) + local_14 * 4);
              if (*(int *)(pCVar9 + 0x34) - *(int *)(pCVar9 + 0x30) >> 2 != 0) {
                do {
                  bVar3 = Requirement::checkReq
                                    (*(Requirement **)
                                      (*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + local_18 * 4) +
                                                                 0xec) + local_14 * 4) + 0x30) +
                                      uVar8 * 4),*(CargoHold **)(*(int *)(pGVar10 + 0xd0) + 0x1f8),
                                     *(BankAccount **)(pGVar10 + 0x124));
                  pGVar10 = g_gameData;
                  if (!bVar3) goto LAB_004a8065;
                  uVar8 = uVar8 + 1;
                  iVar6 = *(int *)(pGVar2 + 0x78);
                  iVar1 = *(int *)(*(int *)(*(int *)(iVar6 + local_18 * 4) + 0xec) + local_14 * 4);
                } while (uVar8 < (uint)(*(int *)(iVar1 + 0x34) - *(int *)(iVar1 + 0x30) >> 2));
              }
              if (pCVar9 != (CharacterLocation *)0x0) goto LAB_004a80af;
            }
          }
LAB_004a8065:
          local_14 = local_14 + 1;
          iVar6 = *(int *)(pGVar2 + 0x78);
          iVar1 = *(int *)(iVar6 + local_18 * 4);
        } while (local_14 < (uint)(*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec) >> 2));
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(*(int *)(pGVar2 + 0x7c) - iVar6 >> 2));
  }
  pCVar9 = (CharacterLocation *)0x0;
LAB_004a80af:
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar7);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar7 = (nothrow_t *)(in_stack_00000030 + 1);
    pcVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar4 = *(char **)(in_stack_0000001c + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((char *)0x1f < in_stack_0000001c + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return pCVar9;
}


// Ghidra: ShipModuleClass * __thiscall GameData::getModuleClassWithIdentifier(undefined4 param_1,char *param_2)
ShipModuleClass * GameData::getModuleClassWithIdentifier(undefined4 param_1, char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  ShipModuleClass *pSVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(g_gameData + 0xc);
  uVar6 = 0;
  uVar8 = *(int *)(g_gameData + 0x10) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar7 = *(ShipModuleClass **)(iVar1 + uVar6 * 4);
        goto LAB_004a81a9;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pSVar7 = (ShipModuleClass *)0x0;
LAB_004a81a9:
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
  return pSVar7;
}


// Ghidra: ShipClass * __thiscall GameData::getShipClassWithIdentifier(undefined4 param_1,char *param_2)
ShipClass * GameData::getShipClassWithIdentifier(undefined4 param_1, char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  ShipClass *pSVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(g_gameData + 0x18);
  uVar6 = 0;
  uVar8 = *(int *)(g_gameData + 0x1c) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar7 = *(ShipClass **)(iVar1 + uVar6 * 4);
        goto LAB_004a8259;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pSVar7 = (ShipClass *)0x0;
LAB_004a8259:
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
  return pSVar7;
}


// Ghidra: WeaponClass * __thiscall GameData::getWeaponClassWithIdentifier(undefined4 param_1,char *param_2)
WeaponClass * GameData::getWeaponClassWithIdentifier(undefined4 param_1, char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  WeaponClass *pWVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(g_gameData + 0x24);
  uVar6 = 0;
  uVar8 = *(int *)(g_gameData + 0x28) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pWVar7 = *(WeaponClass **)(iVar1 + uVar6 * 4);
        goto LAB_004a8309;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pWVar7 = (WeaponClass *)0x0;
LAB_004a8309:
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
  return pWVar7;
}


// Ghidra: ScreenLayout * __thiscall GameData::getScreenLayout(undefined4 param_1,char *param_2)
ScreenLayout * GameData::getScreenLayout(undefined4 param_1, char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  ScreenLayout *pSVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(g_gameData + 0x48);
  uVar6 = 0;
  uVar8 = *(int *)(g_gameData + 0x4c) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar7 = *(ScreenLayout **)(iVar1 + uVar6 * 4);
        goto LAB_004a83b9;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pSVar7 = (ScreenLayout *)0x0;
LAB_004a83b9:
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
  return pSVar7;
}


// Ghidra: Scenario * __thiscall GameData::getScenario(undefined4 param_1,char *param_2)
Scenario * GameData::getScenario(undefined4 param_1, char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  Scenario *pSVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  uVar7 = 0;
  iVar1 = *(int *)(g_gameData + 0x60);
  uVar6 = *(int *)(g_gameData + 100) - iVar1 >> 2;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar8 = *(Scenario **)(iVar1 + uVar7 * 4);
        goto LAB_004a8467;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pSVar8 = (Scenario *)0x0;
LAB_004a8467:
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
  return pSVar8;
}


// Ghidra: Good * __thiscall GameData::getGoodWithShortName(undefined4 param_1,char *param_2)
Good * GameData::getGoodWithShortName(undefined4 param_1, char * param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  nothrow_t *pnVar7;
  uint unaff_ESI;
  Good *pGVar8;
  char *unaff_EDI;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_8;
  
  iVar1 = *(int *)(g_gameData + 0x84);
  local_8 = 0;
  uVar5 = *(int *)(g_gameData + 0x88) - iVar1 >> 2;
  if (uVar5 != 0) {
    do {
      uVar9 = 0;
      iVar2 = *(int *)(local_8 * 4 + iVar1);
      iVar6 = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c);
      iVar2 = iVar6 >> 0x1f;
      if (iVar6 / 0x18 + iVar2 != iVar2) {
        iVar2 = *(int *)(local_8 * 4 + iVar1);
        do {
          pcVar4 = (char *)&param_2;
          if (0xf < in_stack_00000018) {
            pcVar4 = param_2;
          }
          bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
          if (bVar3) {
            pGVar8 = *(Good **)(*(int *)(g_gameData + 0x84) + local_8 * 4);
            goto LAB_004a856c;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c)) / 0x18));
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  pGVar8 = (Good *)0x0;
LAB_004a856c:
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar7);
  }
  return pGVar8;
}


// Ghidra: Good * __thiscall GameData::getGood(GameData *this,int param_1)
Good * GameData::getGood(int param_1)

{
  Good *pGVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(g_gameData + 0x88) - *(int *)(g_gameData + 0x84) >> 2;
  if (uVar3 != 0) {
    do {
      pGVar1 = *(Good **)(*(int *)(g_gameData + 0x84) + uVar2 * 4);
      if (*(int *)pGVar1 == param_1) {
        return pGVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (Good *)0x0;
}


// Ghidra: StellarObject * __thiscall GameData::getStellarObjectWithinDistance (undefined4 param_1_00,int param_1,undefined4 param_3,undefined4 param_4,float param_5)
StellarObject * GameData::getStellarObjectWithinDistance(undefined4 param_1_00, int param_1, undefined4 param_3, undefined4 param_4, float param_5)

{
  GameData *pGVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float in_XMM3_Da;
  float fVar5;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  pGVar1 = g_gameData;
  // [seh] puStack_c = &DAT_005bd8e2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  uStack_7 = 0;
  uVar4 = 0;
  iVar3 = *(int *)(g_gameData + 0x30);
  if (*(int *)(g_gameData + 0x34) - iVar3 >> 2 != 0) {
    cVar2 = param_5._0_1_;
    local_14 = in_XMM3_Da;
    do {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
      if ((*(int *)(iVar3 + 0x18) == param_1) &&
         (((cVar2 == '\0' || (*(int *)(iVar3 + 0x30) != 0)) ||
          ((*(int *)(iVar3 + 0x54) != 3 && (*(int *)(iVar3 + 0x54) != 4)))))) {
        local_1c = (float)*(double *)(iVar3 + 0x20);
        local_18 = (float)*(double *)(iVar3 + 0x28);
        // [seh] local_8 = 1;
        fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)&param_3);
        param_5 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
        if ((1.5 - fVar5 * 0.5 * param_5 * param_5) * param_5 * fVar5 <= local_14) {
          // [seh] ExceptionList = local_10;
          return *(StellarObject **)(*(int *)(pGVar1 + 0x30) + uVar4 * 4);
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(pGVar1 + 0x30);
    } while (uVar4 < (uint)(*(int *)(pGVar1 + 0x34) - iVar3 >> 2));
  }
  // [seh] ExceptionList = local_10;
  return (StellarObject *)0x0;
}


// Ghidra: StateModifier * __thiscall GameData::getStateModifier(undefined4 param_1,char *param_2)
StateModifier * GameData::getStateModifier(undefined4 param_1, char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  StateModifier *pSVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  uVar7 = 0;
  iVar1 = *(int *)(g_gameData + 0x9c);
  uVar6 = *(int *)(g_gameData + 0xa0) - iVar1 >> 2;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar8 = *(StateModifier **)(iVar1 + uVar7 * 4);
        goto LAB_004a87d4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pSVar8 = (StateModifier *)0x0;
LAB_004a87d4:
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
  return pSVar8;
}


// Ghidra: void __thiscall GameData::resetStateModifiers(GameData *this)
void GameData::resetStateModifiers()

{
  int iVar1;
  GameData *pGVar2;
  uint uVar3;
  
  pGVar2 = g_gameData;
  uVar3 = 0;
  if (*(int *)(g_gameData + 0xa0) - *(int *)(g_gameData + 0x9c) >> 2 != 0) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(pGVar2 + 0x9c) + uVar3 * 4) + 0x18) = 0;
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(*(int *)(*(int *)(pGVar2 + 0x9c) + iVar1) + 0x19) = 0;
    } while (uVar3 < (uint)(*(int *)(pGVar2 + 0xa0) - *(int *)(pGVar2 + 0x9c) >> 2));
  }
  return;
}
