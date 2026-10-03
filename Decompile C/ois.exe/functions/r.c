#include "../ois.exe.h"


// void __cdecl runDataInputSync(enum EShipDataInputType::ShipDataInputType)

void __cdecl runDataInputSync(ShipDataInputType param_1)

{
  GameLogic *pGVar1;
  GameLogic *pGVar2;
  GameData *pGVar3;
  uint uVar4;
  Infopedia *pIVar5;
  Ship *pSVar6;
  SoundEngine *this;
  FictionData *pFVar7;
  Faction *this_00;
  int iVar8;
  TradeEngine *pTVar9;
  PowerManager *pPVar10;
  undefined4 in_ECX;
  int iVar11;
  undefined4 *puVar12;
  NetworkData *this_01;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  uint uVar13;
  undefined4 unaff_EDI;
  basic_string<> abStack_3c [8];
  undefined4 uStack_34;
  Sound SVar14;
  Shop SVar15;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar3 = g_gameData;
  pGVar2 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bffb8;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  switch(in_ECX) {
  case 2:
  case 3:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    ExceptionList = &local_10;
    OISConfiguration::save();
    ExceptionList = local_10;
    return;
  case 0x10:
    ExceptionList = &local_10;
    pIVar5 = Singleton<Infopedia>::getInstance();
    std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)(pIVar5 + 0x1c));
    local_8 = 0;
    pIVar5 = Singleton<Infopedia>::getInstance();
    local_8 = 0xffffffff;
    Infopedia::setArticle(pIVar5);
    ExceptionList = local_10;
    return;
  case 0x11:
    ExceptionList = &local_10;
    LogSystem::setHistoryItem
              (*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224),
               *(int *)(*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224) + 0x14));
    ExceptionList = local_10;
    return;
  case 0x12:
    SVar15 = 0;
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    TradeEngine::selectLeftSide(pTVar9,SVar15);
    ExceptionList = local_10;
    return;
  case 0x13:
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    iVar8 = *(int *)(pTVar9 + 0x11c);
    iVar11 = *(int *)(iVar8 + 0x4c);
    if (iVar11 < 0) {
      iVar11 = *(int *)(iVar8 + 0x5c);
    }
    else {
      *(int *)(iVar8 + 0x5c) = iVar11;
      *(undefined4 *)(iVar8 + 0x50) = 0xffffffff;
    }
    if (-1 < iVar11) {
      *(undefined4 *)(iVar8 + 0x48) = 2;
      *(undefined4 *)(iVar8 + 0x60) = 1;
      ExceptionList = local_10;
      return;
    }
    goto LAB_004dd62e;
  case 0x14:
    SVar15 = 0;
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    TradeEngine::selectRightSide(pTVar9,SVar15);
    ExceptionList = local_10;
    return;
  case 0x15:
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    iVar8 = *(int *)(pTVar9 + 0x11c);
    iVar11 = *(int *)(iVar8 + 0x50);
    if (iVar11 < 0) {
      iVar11 = *(int *)(iVar8 + 0x5c);
    }
    else {
      *(int *)(iVar8 + 0x5c) = iVar11;
      *(undefined4 *)(iVar8 + 0x4c) = 0xffffffff;
    }
    if (-1 < iVar11) {
      *(undefined4 *)(iVar8 + 0x48) = 1;
      *(undefined4 *)(iVar8 + 0x60) = 1;
      ExceptionList = local_10;
      return;
    }
LAB_004dd62e:
    *(undefined4 *)(iVar8 + 0x48) = 0;
    ExceptionList = local_10;
    return;
  case 0x16:
    ExceptionList = &local_10;
    Singleton<>::getInstance();
    ExceptionList = local_10;
    return;
  case 0x18:
    SVar15 = 2;
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    TradeEngine::selectRightSide(pTVar9,SVar15);
    ExceptionList = local_10;
    return;
  case 0x19:
    SVar15 = 2;
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    TradeEngine::selectLeftSide(pTVar9,SVar15);
    ExceptionList = local_10;
    return;
  case 0x1b:
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    pTVar9[0xe8] = (TradeEngine)0x0;
    ExceptionList = local_10;
    return;
  case 0x1c:
    ExceptionList = &local_10;
    Singleton<>::getInstance();
    goto LAB_004dd691;
  case 0x1d:
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    pTVar9[0xe8] = (TradeEngine)0x0;
LAB_004dd691:
    pSVar6 = ShipData::currentlyBoardedShip;
    if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
      pSVar6 = *(Ship **)(g_gameData + 0xd0);
    }
    iVar8 = -1;
    SVar14 = 0x2a;
    uStack_34 = 0x4dd6af;
    this = Singleton<>::getInstance();
    uStack_34 = 0x4dd6b6;
    SoundEngine::playSound(this,pSVar6,SVar14,iVar8);
    ExceptionList = local_10;
    return;
  case 0x1e:
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    *(undefined4 *)(pTVar9 + 0xec) = 0xffffffff;
    if ((*(int *)(pTVar9 + 0xcc) == 2) && (iVar8 = *(int *)(pTVar9 + 0xdc), iVar8 != -1)) {
      uVar13 = 0;
      pFVar7 = Singleton<>::getInstance();
      puVar12 = *(undefined4 **)pFVar7;
      uVar4 = *(int *)(pFVar7 + 4) - (int)puVar12 >> 2;
      if (uVar4 != 0) {
        do {
          this_00 = (Faction *)*puVar12;
          if (*(int *)this_00 == iVar8) goto LAB_004dd728;
          uVar13 = uVar13 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar13 < uVar4);
      }
      this_00 = (Faction *)0x0;
LAB_004dd728:
      iVar8 = Faction::amountCanBorrow(this_00);
      *(int *)(pTVar9 + 0xe0) = iVar8;
      goto LAB_004dd691;
    }
    break;
  case 0x26:
    ExceptionList = &local_10;
    pTVar9 = Singleton<>::getInstance();
    *(undefined4 *)(pTVar9 + 0x118) = 0xffffffff;
    ExceptionList = local_10;
    return;
  case 0x2b:
  case 0x2c:
    if (g_gameLogic[0x11b] != (GameLogic)0x0) {
      *(undefined2 *)(g_gameLogic + 0x118) = 0x101;
    }
    break;
  case 0x34:
    ExceptionList = &local_10;
    *(GameLogic *)(*(int *)(g_gameData + 0xd0) + 0x2d0) = g_gameLogic[0x142];
    if ((*(Ship **)(pGVar3 + 0xd0))[0x2d0] != (Ship)0x0) {
      Ship::removeAllFog(*(Ship **)(pGVar3 + 0xd0));
      Ship::setNoFog(*(Ship **)(g_gameData + 0xd0));
      ExceptionList = local_10;
      return;
    }
    break;
  case 0x35:
    if ((g_gameLogic[0x72] != (GameLogic)0x0) || (g_gameLogic[0x70] != (GameLogic)0x0)) {
      ExceptionList = &local_10;
      pPVar10 = Singleton<>::getInstance();
      *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1e8) = *(undefined4 *)pPVar10;
      ExceptionList = local_10;
      return;
    }
    if (g_gameLogic[0x71] != (GameLogic)0x0) {
      ExceptionList = &local_10;
      Singleton<>::getInstance();
      Singleton<>::getInstance();
      uStack_34 = 0x4dd813;
      NetworkData::sendShipCommand
                (this_01,0x7b,(double)((ulonglong)uVar4 << 0x20),
                 (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(in_ECX,unaff_EBX));
      ExceptionList = local_10;
      return;
    }
    break;
  case 0x3b:
    ExceptionList = &local_10;
    GameLogic::setCombatDifficulty(g_gameLogic,*(int *)(g_gameLogic + 0xa8));
    ExceptionList = local_10;
    return;
  case 0x3c:
    ExceptionList = &local_10;
    GameLogic::setEconomyDifficulty(g_gameLogic,*(int *)(g_gameLogic + 0xc4));
    ExceptionList = local_10;
    return;
  case 0x3d:
    ExceptionList = &local_10;
    GameLogic::setStartBonus(g_gameLogic,*(int *)(g_gameLogic + 0xe0));
    ExceptionList = local_10;
    return;
  case 0x3e:
    if (g_gameLogic[0x11b] != (GameLogic)0x0) {
      ExceptionList = &local_10;
      GameLogic::setStartLocation(g_gameLogic,*(int *)(g_gameLogic + 0xfc));
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    GameLogic::setStartLocation(g_gameLogic,1);
    ExceptionList = local_10;
    return;
  case 0x3f:
    pGVar1 = g_gameLogic + 0x11b;
    g_gameLogic[0x11c] = (GameLogic)(*pGVar1 == (GameLogic)0x0);
    if (*pGVar1 != (GameLogic)0x0) {
LAB_004dd94f:
      *(undefined2 *)(pGVar2 + 0x118) = 0x101;
      return;
    }
    goto LAB_004dd919;
  case 0x40:
    pGVar1 = g_gameLogic + 0x11c;
    g_gameLogic[0x11b] = (GameLogic)(*pGVar1 == (GameLogic)0x0);
    if (*pGVar1 == (GameLogic)0x0) goto LAB_004dd94f;
LAB_004dd919:
    *(undefined2 *)(pGVar2 + 0x118) = 0;
    return;
  case 0x41:
    ExceptionList = &local_10;
    std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)(g_gameLogic + 0x14c));
    GameLogic::setLocalServer();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


// int __cdecl random(int)

int __cdecl random(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = rand();
  return iVar1 % in_ECX;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// replaceCharactersInString(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,char,char)

void __cdecl replaceCharactersInString(undefined4 *param_1)

{
  undefined4 *puVar1;
  basic_string<> *in_ECX;
  char in_DL;
  nothrow_t *pnVar2;
  uint uVar3;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint uVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd081;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (basic_string<>)0x0;
  uVar3 = 0;
  if (in_stack_00000014 != 0) {
    do {
      puVar1 = &param_1;
      if (0xf < in_stack_00000018) {
        puVar1 = param_1;
      }
      uVar4 = in_stack_0000001c;
      if (*(char *)((int)puVar1 + uVar3) != in_DL) {
        puVar1 = &param_1;
        if (0xf < in_stack_00000018) {
          puVar1 = param_1;
        }
        uVar4 = (uint)*(byte *)((int)puVar1 + uVar3);
      }
      std::basic_string<>::push_back(in_ECX,(char)uVar4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_stack_00000014);
  }
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      puVar1 = (undefined4 *)param_1[-1];
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}


// class cocos2d::Vec2 __cdecl randomPositionWithinRadius(class cocos2d::Vec2,float)

void __cdecl randomPositionWithinRadius(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  Vec2 *in_ECX;
  double dVar3;
  float in_XMM1_Da;
  double dVar4;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd19b;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = param_1;
  local_28 = param_2;
  local_1c._4_4_ = in_XMM1_Da;
  iVar2 = rand();
  local_20 = (float)(iVar2 % 0x168);
  iVar2 = 0;
  if (0 < (int)local_1c._4_4_) {
    iVar2 = rand();
    iVar2 = iVar2 % (int)local_1c._4_4_ + 1;
  }
  local_1c = (double)(iVar2 + -1);
  dVar4 = (double)(int)local_20 * 0.017453292519943295;
  dVar3 = dVar4;
  __libm_sse2_sin_precise(uVar1);
  local_20 = (float)(dVar3 * local_1c);
  __libm_sse2_cos_precise();
  local_24 = local_20;
  local_20 = (float)(dVar4 * local_1c);
  local_8 = CONCAT31(local_8._1_3_,2);
  cocos2d::Vec2::operator+((Vec2 *)&local_2c,in_ECX);
  ExceptionList = local_10;
  return;
}
