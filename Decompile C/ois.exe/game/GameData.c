#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: __thiscall GameData::GameData(void)

GameData * __thiscall GameData::GameData(GameData *this)

{
  BankEngine *pBVar1;
  BankAccount *pBVar2;
  undefined4 *puVar3;
  _Tree_node<> *p_Var4;
  basic_string<> *pbVar5;
  _Tree_comp_alloc<> *this_00;
  basic_string<> local_48 [16];
  undefined4 local_38;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bd775;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0xf;
  this[0xb4] = (GameData)0x0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  this[0xd4] = (GameData)0x43;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0xf;
  this[0xdc] = (GameData)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0xf;
  this[0xf4] = (GameData)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0xf;
  this[0x10c] = (GameData)0x0;
  local_8 = 0x12;
  uStack_7 = 0;
  local_38 = 0;
  local_48[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_48,"CERESPILOT",10);
  local_8 = 0x13;
  pBVar1 = Singleton<BankEngine>::instance;
  if (Singleton<BankEngine>::instance == (BankEngine *)0x0) {
    pBVar1 = operator_new(0xc);
    Singleton<BankEngine>::instance = pBVar1;
    *(undefined4 *)pBVar1 = 0;
    *(undefined4 *)(pBVar1 + 4) = 0;
    *(undefined4 *)(pBVar1 + 8) = 0;
  }
  local_8 = 0x12;
  pBVar2 = BankEngine::openAccount(pBVar1);
  *(BankAccount **)(this + 0x124) = pBVar2;
  *(undefined4 *)(this + 0x128) = 0;
  puVar3 = operator_new(0x2c);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  local_8 = 0x15;
  puVar3[3] = 0;
  puVar3[4] = 0;
  p_Var4 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
  puVar3[3] = p_Var4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined4 **)(this + 300) = puVar3;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0xffffffff;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0xf;
  this[0x158] = (GameData)0x0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0xf;
  this[0x17c] = (GameData)0x0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xf;
  this[0x194] = (GameData)0x0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0xf;
  this[0x1ac] = (GameData)0x0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0xf;
  this[0x1cc] = (GameData)0x0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0xf;
  this[0x1f0] = (GameData)0x0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0xf;
  this[0x208] = (GameData)0x0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0xf;
  this[0x220] = (GameData)0x0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0xf;
  this[0x25c] = (GameData)0x0;
  _local_8 = CONCAT31(uStack_7,0x1d);
  *(undefined4 *)(this + 0x274) = 0;
  if ((basic_string<> *)(this + 0xb4) != &OISConfiguration::scenario) {
    pbVar5 = &OISConfiguration::scenario;
    if (0xf < DAT_006577ac) {
      pbVar5 = _scenario;
    }
    local_38 = 0x4a6aec;
    std::basic_string<>::assign((basic_string<> *)(this + 0xb4),(char *)pbVar5,DAT_006577a8);
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall GameData::<unnamed-type-m_shipState>::~<unnamed-type-m_shipState>(void)

void __thiscall GameData::<>::~<>(<> *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  pvVar1 = *(void **)(this + 0x74);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x7c) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004a6c61;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
  }
  uVar2 = *(uint *)(this + 0x70);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x5c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004a6c61;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0xf;
  this[0x5c] = (<>)0x0;
  uVar2 = *(uint *)(this + 0x50);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x3c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004a6c61;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0xf;
  this[0x3c] = (<>)0x0;
  uVar2 = *(uint *)(this + 0x38);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x24);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_004a6c61;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0xf;
  this[0x24] = (<>)0x0;
  uVar2 = *(uint *)(this + 0x20);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0xc);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_004a6c61:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xf;
  this[0xc] = (<>)0x0;
  return;
}


// public: __thiscall
// GameData::<unnamed-type-m_currentServerDetails>::~<unnamed-type-m_currentServerDetails>(void)

void __thiscall GameData::<>::~<>(<> *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  std::vector<>::~vector<>((vector<> *)(this + 0x48));
  std::vector<>::~vector<>((vector<> *)(this + 0x3c));
  uVar1 = *(uint *)(this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004a6d07;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (<>)0x0;
  uVar1 = *(uint *)(this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_004a6d07:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (<>)0x0;
  return;
}


// public: class Ship * __thiscall GameData::getShipWithinDistance(int,class
// cocos2d::Vec2,float,class Ship *,bool)

Ship * __thiscall
GameData::getShipWithinDistance(undefined4 param_1_00,int param_1,int param_3,char param_4)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bd7a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
        local_8 = 1;
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&stack0x00000010);
        fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        if ((1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6 <= local_18) {
          ExceptionList = local_10;
          return *(Ship **)(piVar4[0x33] + uVar5 * 4);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = piVar4[0x33];
    } while (uVar5 < (uint)(piVar4[0x34] - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return (Ship *)0x0;
}


// public: class Ship * __thiscall GameData::getShipWithID(int)

Ship * __thiscall GameData::getShipWithID(GameData *this,int param_1)

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


// public: class SpaceStation * __thiscall GameData::getSpaceStation(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

SpaceStation * __thiscall GameData::getSpaceStation(undefined4 param_1,char *param_2)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005b37a8;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
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
            bVar2 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
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
  ExceptionList = local_10;
  return pSVar11;
}


// public: class Sector * __thiscall GameData::getSectorOfShip(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Sector * __thiscall GameData::getSectorOfShip(undefined4 param_1,char *param_2)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005b1e48;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
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
          bVar2 = std::_Traits_equal<>(pcVar6,in_stack_00000014,pcVar3,unaff_EDI);
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
  ExceptionList = local_10;
  return pSVar11;
}


// public: class Ship * __thiscall GameData::getShipWithRego(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Ship * __thiscall GameData::getShipWithRego(undefined4 param_1,char *param_2)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005b37a8;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
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
          bVar2 = std::_Traits_equal<>(pcVar6,in_stack_00000014,pcVar3,unaff_EDI);
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
  ExceptionList = local_10;
  return pSVar12;
}


// public: class Sector * __thiscall GameData::getSectorWithID(int)

Sector * __thiscall GameData::getSectorWithID(GameData *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x3c);
  while( true ) {
    if (puVar1 == *(undefined4 **)(this + 0x40)) {
      return (Sector *)0x0;
    }
    if (*(int *)*puVar1 == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return (Sector *)*puVar1;
}


// public: class Sector * __thiscall GameData::getSectorWithShortName(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

Sector * __thiscall GameData::getSectorWithShortName(undefined4 param_1,char *param_2)

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
    bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class HazardCategory * __thiscall GameData::getNebulaHazardCategory(int)

HazardCategory * __thiscall GameData::getNebulaHazardCategory(GameData *this,int param_1)

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


// public: class HazardCategory * __thiscall GameData::getAsteroidHazardCategory(int)

HazardCategory * __thiscall GameData::getAsteroidHazardCategory(GameData *this,int param_1)

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


// public: class Structure * __thiscall GameData::getStructure(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool)

Structure * __thiscall GameData::getStructure(GameData *this,char param_2,char *param_3)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string<> *pbVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  char *pcVar8;
  uint uVar9;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_38 [5];
  uint local_24;
  basic_string<> *local_1c;
  basic_string<> *local_18 [2];
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  pcVar8 = param_3;
  puStack_c = &DAT_005bd7df;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  this_00 = (vector<> *)(this + 0xa8);
  local_8 = 0;
  uVar9 = 0;
  pbVar5 = *(basic_string<> **)this_00;
  if (*(int *)(this + 0xac) - (int)pbVar5 >> 2 != 0) {
    do {
      pcVar4 = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        pcVar4 = pcVar8;
      }
      local_18[0] = pbVar5;
      bVar2 = std::_Traits_equal<>(pcVar4,in_stack_00000018,pcVar3,unaff_EDI);
      if (bVar2) {
        pbVar5 = *(basic_string<> **)(*(int *)this_00 + uVar9 * 4);
        goto LAB_004a76b0;
      }
      uVar9 = uVar9 + 1;
      pbVar5 = local_18[0] + 4;
      local_18[0] = pbVar5;
    } while (uVar9 < (uint)(*(int *)(this + 0xac) - *(int *)this_00 >> 2));
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
    pbVar5 = (basic_string<> *)0x0;
    pcVar8 = param_3;
  }
  else {
    pbVar5 = operator_new(0x24);
    local_8._0_1_ = 1;
    local_1c = pbVar5;
    std::basic_string<>::basic_string<>((basic_string<> *)local_38,(basic_string<> *)&param_3);
    local_8._0_1_ = 2;
    std::basic_string<>::basic_string<>(pbVar5,(basic_string<> *)local_38);
    *(undefined4 *)(pbVar5 + 0x18) = 0;
    *(undefined4 *)(pbVar5 + 0x1c) = 0;
    *(undefined4 *)(pbVar5 + 0x20) = 0;
    local_8._0_1_ = 1;
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
    local_8 = (uint)local_8._1_3_ << 8;
    ppAVar1 = *(AnimationFrames ***)(this + 0xac);
    local_18[0] = pbVar5;
    if (*(AnimationFrames ***)(this + 0xb0) == ppAVar1) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar1,(AnimationFrames **)local_18);
      pcVar8 = param_3;
      pbVar5 = local_18[0];
    }
    else {
      *ppAVar1 = (AnimationFrames *)pbVar5;
      *(int *)(this + 0xac) = *(int *)(this + 0xac) + 4;
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
  ExceptionList = local_10;
  return (Structure *)pbVar5;
}


// public: class Room * __thiscall GameData::getRoom(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

Room * __thiscall GameData::getRoom(undefined4 param_1,void *param_2)

{
  GameData *pGVar1;
  bool bVar2;
  Structure *this;
  Room *pRVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  int in_stack_0000001c;
  basic_string<> abStack_34 [4];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_2);
  this = getStructure(pGVar1,0);
  if (this == (Structure *)0x0) {
    debugPrint("ERROR","Error: invalid structure \'%s\'");
    uStack_30 = 0x4a7774;
    bVar2 = cc_assert_script_compatible("Error: invalid structure");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  pRVar3 = Structure::getRoom(this,in_stack_0000001c);
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
  ExceptionList = local_10;
  return pRVar3;
}


// public: class GameCharacter * __thiscall GameData::getCharacter(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

GameCharacter * __thiscall GameData::getCharacter(undefined4 param_1,char *param_2)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005bd068;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uVar10 = 0;
  iVar7 = *(int *)(g_gameData + 0x78);
  local_14 = pcVar4;
  if (*(int *)(g_gameData + 0x7c) - iVar7 >> 2 != 0) {
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_2c,(basic_string<> *)(*(int *)(iVar7 + uVar10 * 4) + 0xf8))
      ;
      pvVar2 = local_2c[0];
      pcVar5 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar5 = param_2;
      }
      bVar3 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
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
  ExceptionList = local_10;
  pGVar6 = (GameCharacter *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pGVar6;
}


// public: class GameCharacter * __thiscall GameData::getExtraWithTag(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// SpaceStation *)

GameCharacter * __thiscall GameData::getExtraWithTag(undefined4 param_1,void *param_2)

{
  basic_string<> *pbVar1;
  undefined4 *puVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  AnimationFrames **ppAVar8;
  int iVar9;
  GameCharacter *pGVar10;
  int iVar11;
  undefined4 *puVar12;
  basic_string<> *unaff_EDI;
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd810;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  ppAVar13 = (AnimationFrames **)0x0;
  ppAVar8 = (AnimationFrames **)0x0;
  local_1c = g_gameData;
  local_34 = (undefined4 *)0x0;
  local_30 = (AnimationFrames **)0x0;
  local_14 = (AnimationFrames **)0x0;
  local_2c = (AnimationFrames **)0x0;
  local_8 = 1;
  iVar9 = *(int *)(g_gameData + 0x78);
  local_18 = 0;
  if (*(int *)(g_gameData + 0x7c) - iVar9 >> 2 != 0) {
    do {
      local_28 = local_18 * 4;
      local_24 = *(int *)(iVar9 + local_28);
      if ((*(char *)(local_24 + 9) != '\0') &&
         (pbVar1 = *(basic_string<> **)(local_24 + 0x4c), local_20 = iVar9,
         pbVar4 = std::_Find_unchecked<>((basic_string<> *)&param_2,pbVar3,unaff_EDI),
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
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_34,ppAVar8,(AnimationFrames **)(iVar11 + local_28));
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
  ExceptionList = local_10;
  return pGVar10;
}


// public: void __thiscall GameData::setUniqueObjects(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,bool)

void __thiscall
GameData::setUniqueObjects(undefined4 param_1,int param_2,byte param_3,void *param_4)

{
  GameData *pGVar1;
  Structure *pSVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000020;
  basic_string<> abStack_44 [12];
  undefined4 uStack_38;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005bd838;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&param_4);
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
  ExceptionList = local_10;
  return;
}


// public: class GameCharacter * __thiscall GameData::getCharacterAtSpawnPoint(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

GameCharacter * __thiscall GameData::getCharacterAtSpawnPoint(undefined4 param_1,char *param_2)

{
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
  basic_string<> abStack_5c [12];
  undefined4 uStack_50;
  GameCharacter *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd878;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  pGVar16 = (GameCharacter *)0x0;
  local_14 = (GameCharacter *)0x0;
  piVar12 = *(int **)(g_gameData + 0x78);
  piVar1 = *(int **)(g_gameData + 0x7c);
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  pGVar4 = local_14;
  pGVar15 = g_gameData;
  do {
    ExceptionList = ppvVar5;
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
      ExceptionList = local_10;
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
      bVar6 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar7,unaff_EDI);
      if (bVar6) {
LAB_004a7d0b:
        pcVar8 = (char *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pcVar8 = in_stack_0000001c;
        }
        uStack_50 = 0x4a7d2e;
        bVar6 = std::_Traits_equal<>(pcVar8,in_stack_0000002c,pcVar7,unaff_EDI);
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
          std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)(pGVar2 + 0xf8));
          local_8._0_1_ = 2;
          pCVar9 = Singleton<>::getInstance();
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar10 = ConversationManager::hasConversationToForce(pCVar9);
          pGVar15 = g_gameData;
          if (iVar10 == -1) goto LAB_004a7dd0;
        }
      }
      else {
        uStack_50 = 0x4a7cd4;
        bVar6 = std::_Traits_equal<>("PLAYERSHIP",10,pcVar7,unaff_EDI);
        if ((bVar6) && (ShipData::currentlyBoardedShip == *(Ship **)(pGVar15 + 0xd0)))
        goto LAB_004a7d0b;
        uStack_50 = 0x4a7d00;
        bVar6 = std::_Traits_equal<>("ANYSTATION",10,pcVar7,unaff_EDI);
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


// public: class CharacterLocation * __thiscall GameData::getCharacterLocationAtSpawnPoint(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

CharacterLocation * __thiscall
GameData::getCharacterLocationAtSpawnPoint(undefined4 param_1,char *param_2)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar2 = g_gameData;
  puStack_c = &DAT_005bd8b0;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
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
          bVar3 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
          if ((bVar3) ||
             (((bVar3 = std::_Traits_equal<>("PLAYERSHIP",10,pcVar4,unaff_EDI), bVar3 &&
               (ShipData::currentlyBoardedShip == *(Ship **)(pGVar10 + 0xd0))) ||
              (bVar3 = std::_Traits_equal<>("ANYSTATION",10,pcVar4,unaff_EDI), bVar3)))) {
            pcVar5 = (char *)&stack0x0000001c;
            if (0xf < in_stack_00000030) {
              pcVar5 = in_stack_0000001c;
            }
            bVar3 = std::_Traits_equal<>(pcVar5,in_stack_0000002c,pcVar4,unaff_EDI);
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
  ExceptionList = local_10;
  return pCVar9;
}


// public: class ShipModuleClass * __thiscall GameData::getModuleClassWithIdentifier(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipModuleClass * __thiscall
GameData::getModuleClassWithIdentifier(undefined4 param_1,char *param_2)

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
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class ShipClass * __thiscall GameData::getShipClassWithIdentifier(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipClass * __thiscall GameData::getShipClassWithIdentifier(undefined4 param_1,char *param_2)

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
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class WeaponClass * __thiscall GameData::getWeaponClassWithIdentifier(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

WeaponClass * __thiscall GameData::getWeaponClassWithIdentifier(undefined4 param_1,char *param_2)

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
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class ScreenLayout * __thiscall GameData::getScreenLayout(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ScreenLayout * __thiscall GameData::getScreenLayout(undefined4 param_1,char *param_2)

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
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class Scenario * __thiscall GameData::getScenario(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Scenario * __thiscall GameData::getScenario(undefined4 param_1,char *param_2)

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
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class Good * __thiscall GameData::getGoodWithShortName(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

Good * __thiscall GameData::getGoodWithShortName(undefined4 param_1,char *param_2)

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
          bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: class Good * __thiscall GameData::getGood(int)

Good * __thiscall GameData::getGood(GameData *this,int param_1)

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


// public: class StellarObject * __thiscall GameData::getStellarObjectWithinDistance(int,class
// cocos2d::Vec2,float,bool)

StellarObject * __thiscall
GameData::getStellarObjectWithinDistance
          (undefined4 param_1_00,int param_1,undefined4 param_3,undefined4 param_4,float param_5)

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
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  pGVar1 = g_gameData;
  puStack_c = &DAT_005bd8e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
        local_8 = 1;
        fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)&param_3);
        param_5 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
        if ((1.5 - fVar5 * 0.5 * param_5 * param_5) * param_5 * fVar5 <= local_14) {
          ExceptionList = local_10;
          return *(StellarObject **)(*(int *)(pGVar1 + 0x30) + uVar4 * 4);
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(pGVar1 + 0x30);
    } while (uVar4 < (uint)(*(int *)(pGVar1 + 0x34) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return (StellarObject *)0x0;
}


// public: class StateModifier * __thiscall GameData::getStateModifier(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

StateModifier * __thiscall GameData::getStateModifier(undefined4 param_1,char *param_2)

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
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: void __thiscall GameData::resetStateModifiers(void)

void __thiscall GameData::resetStateModifiers(GameData *this)

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
