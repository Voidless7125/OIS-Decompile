#include "../ois.exe.h"


// bool __cdecl stringStartsWith(unsigned char *,char const *)

bool __cdecl stringStartsWith(uchar *param_1,char *param_2)

{
  byte *in_ECX;
  int in_EDX;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = in_EDX - (int)in_ECX;
  while( true ) {
    if (in_ECX[iVar2] == 0) {
      return true;
    }
    if ((int)(char)in_ECX[iVar2] != (uint)*in_ECX) break;
    iVar1 = iVar1 + 1;
    in_ECX = in_ECX + 1;
    if (0x1fff < iVar1) {
      return false;
    }
  }
  return false;
}


// bool __cdecl shipDataCanPrev(enum EShipDataInputType::ShipDataInputType)

bool __cdecl shipDataCanPrev(ShipDataInputType param_1)

{
  Infopedia *pIVar1;
  TradeEngine *pTVar2;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 10:
    if (0 < OISConfiguration::currentResolution) {
      return true;
    }
    break;
  case 0x10:
    pIVar1 = Singleton<Infopedia>::getInstance();
    return 0 < *(int *)(pIVar1 + 0x18);
  case 0x11:
    return 0 < *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x224) + 0x14);
  case 0x36:
    pTVar2 = Singleton<>::getInstance();
    return (bool)((byte)((uint)*(undefined4 *)(*(int *)(pTVar2 + 0x11c) + 0x54) >> 0x1f) ^ 1);
  case 0x37:
    pTVar2 = Singleton<>::getInstance();
    return (bool)((byte)((uint)*(undefined4 *)(*(int *)(pTVar2 + 0x11c) + 0x58) >> 0x1f) ^ 1);
  case 0x38:
    pTVar2 = Singleton<>::getInstance();
    return (bool)((byte)((uint)*(undefined4 *)(*(int *)(pTVar2 + 0x11c) + 0xdc) >> 0x1f) ^ 1);
  case 0x39:
    pTVar2 = Singleton<>::getInstance();
    return (bool)((byte)((uint)*(undefined4 *)(*(int *)(pTVar2 + 0x11c) + 0xe0) >> 0x1f) ^ 1);
  case 0x3b:
    return 0 < *(int *)(g_gameLogic + 0xa8);
  case 0x3c:
    return 0 < *(int *)(g_gameLogic + 0xc4);
  case 0x3d:
    return 0 < *(int *)(g_gameLogic + 0xe0);
  case 0x3e:
    if ((g_gameLogic[0x11b] != (GameLogic)0x0) && (0 < *(int *)(g_gameLogic + 0xfc))) {
      return true;
    }
  }
  return false;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// bool __cdecl shipDataCanNext(enum EShipDataInputType::ShipDataInputType)

bool __cdecl shipDataCanNext(ShipDataInputType param_1)

{
  int iVar1;
  int iVar2;
  Infopedia *pIVar3;
  TradeEngine *pTVar4;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 10:
    if ((uint)OISConfiguration::currentResolution < (DAT_0065d764 - _validResolutions >> 3) - 1U) {
      return true;
    }
    break;
  case 0x10:
    pIVar3 = Singleton<Infopedia>::getInstance();
    iVar2 = *(int *)(pIVar3 + 0x3c);
    iVar1 = *(int *)(pIVar3 + 0x38);
    pIVar3 = Singleton<Infopedia>::getInstance();
    return *(uint *)(pIVar3 + 0x18) < (iVar2 - iVar1 >> 2) - 1U;
  case 0x11:
    iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x224);
    return *(uint *)(iVar2 + 0x14) < (*(int *)(iVar2 + 0x3c) - *(int *)(iVar2 + 0x38)) / 0x18 - 1U;
  case 0x36:
    pTVar4 = Singleton<>::getInstance();
    return *(int *)(*(int *)(pTVar4 + 0x11c) + 0x54) < 0xc;
  case 0x37:
    pTVar4 = Singleton<>::getInstance();
    return *(int *)(*(int *)(pTVar4 + 0x11c) + 0x58) < 6;
  case 0x38:
    pTVar4 = Singleton<>::getInstance();
    return *(int *)(*(int *)(pTVar4 + 0x11c) + 0xdc) < 5;
  case 0x39:
    pTVar4 = Singleton<>::getInstance();
    return *(int *)(*(int *)(pTVar4 + 0x11c) + 0xe0) < 0xe;
  case 0x3b:
    return *(int *)(g_gameLogic + 0xa8) < 3;
  case 0x3c:
    return *(int *)(g_gameLogic + 0xc4) < 4;
  case 0x3d:
    return *(int *)(g_gameLogic + 0xe0) < 3;
  case 0x3e:
    if ((g_gameLogic[0x11b] != (GameLogic)0x0) && (*(int *)(g_gameLogic + 0xfc) < 0xb)) {
      return true;
    }
  }
  return false;
}


// void __cdecl shipDataChangePrev(enum EShipDataInputType::ShipDataInputType)

void __cdecl shipDataChangePrev(ShipDataInputType param_1)

{
  bool bVar1;
  Infopedia *pIVar2;
  int iVar3;
  TradeEngine *pTVar4;
  undefined4 in_ECX;
  ShipDataInputType unaff_retaddr;
  
  switch(in_ECX) {
  case 10:
    bVar1 = shipDataCanPrev(unaff_retaddr);
    if (bVar1) {
      OISConfiguration::currentResolution = OISConfiguration::currentResolution + -1;
      OISConfiguration::setRes();
      return;
    }
    break;
  case 0x10:
    pIVar2 = Singleton<Infopedia>::getInstance();
    if (0 < *(int *)(pIVar2 + 0x18)) {
      pIVar2 = Singleton<Infopedia>::getInstance();
      iVar3 = *(int *)(pIVar2 + 0x18) + -1;
      pIVar2 = Singleton<Infopedia>::getInstance();
      Infopedia::setArticle(pIVar2,iVar3);
      return;
    }
    break;
  case 0x11:
    iVar3 = *(int *)(*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224) + 0x14);
    if (0 < iVar3) {
      LogSystem::setHistoryItem(*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224),iVar3 + -1);
      return;
    }
    break;
  case 0x36:
    pTVar4 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar4 + 0x11c) + 0x54) = *(int *)(*(int *)(pTVar4 + 0x11c) + 0x54) + -1;
    goto LAB_004dddca;
  case 0x37:
    pTVar4 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar4 + 0x11c) + 0x58) = *(int *)(*(int *)(pTVar4 + 0x11c) + 0x58) + -1;
LAB_004dddca:
    pTVar4 = Singleton<>::getInstance();
    TradeEngine::resetComponentFilter(pTVar4);
    pTVar4 = Singleton<>::getInstance();
    TradeEngine::clearComponentSelection(pTVar4);
    return;
  case 0x38:
    pTVar4 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar4 + 0x11c) + 0xdc) = *(int *)(*(int *)(pTVar4 + 0x11c) + 0xdc) + -1;
    goto LAB_004dde03;
  case 0x39:
    pTVar4 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar4 + 0x11c) + 0xe0) = *(int *)(*(int *)(pTVar4 + 0x11c) + 0xe0) + -1;
LAB_004dde03:
    pTVar4 = Singleton<>::getInstance();
    TradeEngine::resetModuleFilter(pTVar4);
    pTVar4 = Singleton<>::getInstance();
    TradeEngine::clearModuleSelection(pTVar4);
    return;
  case 0x3b:
    GameLogic::setCombatDifficulty(g_gameLogic,*(int *)(g_gameLogic + 0xa8) + -1);
    return;
  case 0x3c:
    GameLogic::setEconomyDifficulty(g_gameLogic,*(int *)(g_gameLogic + 0xc4) + -1);
    return;
  case 0x3d:
    GameLogic::setStartBonus(g_gameLogic,*(int *)(g_gameLogic + 0xe0) + -1);
    return;
  case 0x3e:
    GameLogic::setStartLocation(g_gameLogic,*(int *)(g_gameLogic + 0xfc) + -1);
  }
  return;
}


// void __cdecl shipDataChangeNext(enum EShipDataInputType::ShipDataInputType)

void __cdecl shipDataChangeNext(ShipDataInputType param_1)

{
  int iVar1;
  LogSystem *this;
  bool bVar2;
  Infopedia *pIVar3;
  int iVar4;
  TradeEngine *pTVar5;
  undefined4 in_ECX;
  ShipDataInputType unaff_ESI;
  
  switch(in_ECX) {
  case 10:
    bVar2 = shipDataCanNext(unaff_ESI);
    if (bVar2) {
      OISConfiguration::currentResolution = OISConfiguration::currentResolution + 1;
      OISConfiguration::setRes();
      return;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3a:
    break;
  case 0x10:
    pIVar3 = Singleton<Infopedia>::getInstance();
    iVar4 = *(int *)(pIVar3 + 0x3c);
    iVar1 = *(int *)(pIVar3 + 0x38);
    pIVar3 = Singleton<Infopedia>::getInstance();
    if (*(uint *)(pIVar3 + 0x18) < (iVar4 - iVar1 >> 2) - 1U) {
      pIVar3 = Singleton<Infopedia>::getInstance();
      iVar4 = *(int *)(pIVar3 + 0x18) + 1;
      pIVar3 = Singleton<Infopedia>::getInstance();
      Infopedia::setArticle(pIVar3,iVar4);
      return;
    }
    break;
  case 0x11:
    this = *(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224);
    if (*(uint *)(this + 0x14) < (*(int *)(this + 0x3c) - *(int *)(this + 0x38)) / 0x18 - 1U) {
      LogSystem::setHistoryItem(this,*(uint *)(this + 0x14) + 1);
    }
    break;
  case 0x36:
    pTVar5 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar5 + 0x11c) + 0x54) = *(int *)(*(int *)(pTVar5 + 0x11c) + 0x54) + 1;
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::resetComponentFilter(pTVar5);
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::clearComponentSelection(pTVar5);
    return;
  case 0x37:
    pTVar5 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar5 + 0x11c) + 0x58) = *(int *)(*(int *)(pTVar5 + 0x11c) + 0x58) + 1;
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::resetComponentFilter(pTVar5);
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::clearComponentSelection(pTVar5);
    return;
  case 0x38:
    pTVar5 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar5 + 0x11c) + 0xdc) = *(int *)(*(int *)(pTVar5 + 0x11c) + 0xdc) + 1;
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::resetModuleFilter(pTVar5);
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::clearModuleSelection(pTVar5);
    return;
  case 0x39:
    pTVar5 = Singleton<>::getInstance();
    *(int *)(*(int *)(pTVar5 + 0x11c) + 0xe0) = *(int *)(*(int *)(pTVar5 + 0x11c) + 0xe0) + 1;
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::resetModuleFilter(pTVar5);
    pTVar5 = Singleton<>::getInstance();
    TradeEngine::clearModuleSelection(pTVar5);
    return;
  case 0x3b:
    GameLogic::setCombatDifficulty(g_gameLogic,*(int *)(g_gameLogic + 0xa8) + 1);
    return;
  case 0x3c:
    GameLogic::setEconomyDifficulty(g_gameLogic,*(int *)(g_gameLogic + 0xc4) + 1);
    return;
  case 0x3d:
    GameLogic::setStartBonus(g_gameLogic,*(int *)(g_gameLogic + 0xe0) + 1);
    return;
  case 0x3e:
    GameLogic::setStartLocation(g_gameLogic,*(int *)(g_gameLogic + 0xfc) + 1);
    return;
  default:
    goto switchD_004ddf04_default;
  }
switchD_004ddf04_default:
  return;
}


// void __cdecl shipDataChangeTo(enum EShipDataInputType::ShipDataInputType,int)

void __cdecl shipDataChangeTo(ShipDataInputType param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GameLogic *pGVar4;
  GameData *pGVar5;
  undefined1 *puVar6;
  uint uVar7;
  Infopedia *this;
  word *pwVar8;
  int in_ECX;
  basic_string<> *pbVar9;
  basic_string<> *pbVar10;
  void *pvVar11;
  uint in_EDX;
  nothrow_t *pnVar12;
  basic_string<> *pbVar13;
  word *this_00;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  pGVar4 = g_gameLogic;
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bfff0;
  local_1c = ExceptionList;
  uVar7 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_24 = uVar7;
  puVar6 = &stack0xfffffffc;
  switch(in_ECX) {
  case 10:
    OISConfiguration::currentResolution = in_EDX;
    puStack_20 = &stack0xfffffffc;
    OISConfiguration::setRes();
    puVar6 = puStack_20;
    break;
  case 0x10:
    puStack_20 = &stack0xfffffffc;
    this = Singleton<Infopedia>::getInstance();
    Infopedia::setArticle(this,in_EDX);
    puVar6 = puStack_20;
    break;
  case 0x11:
    puStack_20 = &stack0xfffffffc;
    LogSystem::setHistoryItem(*(LogSystem **)(*(int *)(g_gameData + 0xd0) + 0x224),in_EDX);
    puVar6 = puStack_20;
    break;
  case 0x3b:
    puStack_20 = &stack0xfffffffc;
    GameLogic::setCombatDifficulty(g_gameLogic,in_EDX);
    puVar6 = puStack_20;
    break;
  case 0x3c:
    puStack_20 = &stack0xfffffffc;
    GameLogic::setEconomyDifficulty(g_gameLogic,in_EDX);
    puVar6 = puStack_20;
    break;
  case 0x3d:
    puStack_20 = &stack0xfffffffc;
    GameLogic::setStartBonus(g_gameLogic,in_EDX);
    puVar6 = puStack_20;
    break;
  case 0x3e:
    puStack_20 = &stack0xfffffffc;
    GameLogic::setStartLocation(g_gameLogic,in_EDX);
    puVar6 = puStack_20;
    break;
  case 0x41:
    puStack_20 = &stack0xfffffffc;
    GameLogic::getCurrentLocalServers((GameLogic *)(in_ECX + -10));
    local_14 = 1;
    if (((int)in_EDX < 0) || ((uint)((local_44 - local_48) / 0x18) <= in_EDX)) {
      *(undefined4 *)(pGVar4 + 0x148) = 0xffffffff;
      std::basic_string<>::assign((basic_string<> *)(pGVar4 + 0x14c),"",0);
      std::vector<>::_Tidy((vector<> *)&local_48);
      puVar6 = puStack_20;
    }
    else {
      *(uint *)(pGVar4 + 0x148) = in_EDX;
      pbVar13 = (basic_string<> *)(pGVar4 + 0x14c);
      pbVar9 = (basic_string<> *)(local_48 + in_EDX * 0x18);
      if (pbVar13 != pbVar9) {
        pbVar10 = pbVar9;
        if (0xf < *(uint *)(pbVar9 + 0x14)) {
          pbVar10 = *(basic_string<> **)pbVar9;
        }
        std::basic_string<>::assign(pbVar13,(char *)pbVar10,*(uint *)(pbVar9 + 0x10));
      }
      if (0xf < *(uint *)(pGVar4 + 0x160)) {
        pbVar13 = *(basic_string<> **)pbVar13;
      }
      pwVar8 = (word *)strUsingArgs((char *)local_3c,"Server name: %s\nLocation: 127.0.0.1",pbVar13,
                                    uVar7);
      this_00 = (word *)(pGVar4 + 0x164);
      if (this_00 != pwVar8) {
        word::~word(this_00);
        uVar1 = *(undefined4 *)(pwVar8 + 4);
        uVar2 = *(undefined4 *)(pwVar8 + 8);
        uVar3 = *(undefined4 *)(pwVar8 + 0xc);
        *(undefined4 *)this_00 = *(undefined4 *)pwVar8;
        *(undefined4 *)(pGVar4 + 0x168) = uVar1;
        *(undefined4 *)(pGVar4 + 0x16c) = uVar2;
        *(undefined4 *)(pGVar4 + 0x170) = uVar3;
        *(undefined8 *)(pGVar4 + 0x174) = *(undefined8 *)(pwVar8 + 0x10);
        *(undefined4 *)(pwVar8 + 0x10) = 0;
        *(undefined4 *)(pwVar8 + 0x14) = 0xf;
        *pwVar8 = (word)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
      std::vector<>::_Tidy((vector<> *)&local_48);
      puVar6 = puStack_20;
    }
    break;
  case 0x42:
    GameLogic::getCurrentPlayersAndShips(g_gameLogic);
    pGVar5 = g_gameData;
    local_14 = 0;
    if (((int)in_EDX < 0) || ((uint)((local_50 - local_54) / 0x18) <= in_EDX)) {
      *(undefined4 *)(g_gameData + 0x274) = 0xffffffff;
      std::basic_string<>::assign((basic_string<> *)(pGVar5 + 0x25c),"",0);
      std::vector<>::_Tidy((vector<> *)&local_54);
      puVar6 = puStack_20;
    }
    else {
      pbVar13 = (basic_string<> *)(local_54 + in_EDX * 0x18);
      *(uint *)(g_gameData + 0x274) = in_EDX;
      pbVar9 = (basic_string<> *)(pGVar5 + 0x25c);
      if (pbVar9 != pbVar13) {
        pbVar10 = pbVar13;
        if (0xf < *(uint *)(pbVar13 + 0x14)) {
          pbVar10 = *(basic_string<> **)pbVar13;
        }
        std::basic_string<>::assign(pbVar9,(char *)pbVar10,*(uint *)(pbVar13 + 0x10));
      }
      std::vector<>::_Tidy((vector<> *)&local_54);
      puVar6 = puStack_20;
    }
  }
  puStack_20 = puVar6;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// int __cdecl shipDataMax(enum EShipDataInputType::ShipDataInputType)

int __cdecl shipDataMax(ShipDataInputType param_1)

{
  TradeEngine *pTVar1;
  int iVar2;
  undefined4 in_ECX;
  Shop SVar3;
  
  switch(in_ECX) {
  default:
    return 100;
  case 0x12:
  case 0x16:
    SVar3 = 0;
    pTVar1 = Singleton<>::getInstance();
    iVar2 = TradeEngine::maxForCurrentTrade(pTVar1,SVar3);
    return iVar2;
  case 0x1a:
    SVar3 = 2;
    pTVar1 = Singleton<>::getInstance();
    iVar2 = TradeEngine::maxForCurrentTrade(pTVar1,SVar3);
    return iVar2;
  case 0x1f:
    pTVar1 = Singleton<>::getInstance();
    iVar2 = TradeEngine::getMaxLoanSize(pTVar1);
    return iVar2;
  }
}


// void __cdecl SteamInternal_OnContextInit(void *)

void __cdecl SteamInternal_OnContextInit(void *param_1)

{
  int iVar1;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  iVar1 = SteamAPI_GetHSteamPipe();
  if (iVar1 != 0) {
    CSteamAPIContext::Init(param_1);
    return;
  }
  return;
}


// void __cdecl safeStrCpy(char *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,int)

void __cdecl safeStrCpy(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  char ****ppppcVar5;
  nothrow_t *pnVar6;
  uint in_EDX;
  int iVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar4 = in_stack_00000018;
  puStack_c = &DAT_005cce00;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_stack_00000014 < in_EDX) {
    pcVar3 = (char *)&param_1;
    if (0xf < in_stack_00000018) {
      pcVar3 = param_1;
    }
    iVar7 = in_ECX - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar3[iVar7 + -1] = cVar1;
    } while (cVar1 != '\0');
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    uVar4 = in_EDX - 4;
    if (in_stack_00000014 < in_EDX - 4) {
      uVar4 = in_stack_00000014;
    }
    pcVar3 = (char *)&param_1;
    if (0xf < in_stack_00000018) {
      pcVar3 = param_1;
    }
    std::basic_string<>::assign((basic_string<> *)local_2c,pcVar3,uVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    std::basic_string<>::append((basic_string<> *)local_2c,"...",3);
    uVar2 = local_18;
    ppppcVar5 = local_2c;
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    iVar7 = in_ECX - (int)ppppcVar5;
    do {
      cVar1 = *(char *)ppppcVar5;
      ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
      *(char *)((int)ppppcVar5 + iVar7 + -1) = cVar1;
    } while (cVar1 != '\0');
    uVar4 = in_stack_00000018;
    if (0xf < uVar2) {
      pnVar6 = (nothrow_t *)(uVar2 + 1);
      ppppcVar5 = (char ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        ppppcVar5 = (char ****)local_2c[0][-1];
        pnVar6 = (nothrow_t *)(uVar2 + 0x24);
        if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar5,pnVar6);
      uVar4 = in_stack_00000018;
    }
  }
  if (0xf < uVar4) {
    pnVar6 = (nothrow_t *)(uVar4 + 1);
    pcVar3 = param_1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(param_1 + -4);
      pnVar6 = (nothrow_t *)(uVar4 + 0x24);
      if ((char *)0x1f < param_1 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// strWithMaxLength(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,int)

void __cdecl strWithMaxLength(word *param_1)

{
  undefined1 *puVar1;
  word *pwVar2;
  word *in_ECX;
  uint uVar3;
  void *pvVar4;
  uint in_EDX;
  nothrow_t *pnVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005cce54;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (word)0x0;
  if (in_stack_00000014 < in_EDX) {
    puVar1 = &stack0xfffffffc;
    if (in_ECX != (word *)&param_1) {
      pwVar2 = (word *)&param_1;
      if (0xf < in_stack_00000018) {
        pwVar2 = param_1;
      }
      std::basic_string<>::assign((basic_string<> *)in_ECX,(char *)pwVar2,in_stack_00000014);
      puVar1 = puStack_20;
    }
  }
  else {
    local_2c = 0;
    uStack_28 = 0xf;
    local_3c = (void *)((uint)local_3c & 0xffffff00);
    uVar3 = in_EDX - 4;
    if (in_stack_00000014 < in_EDX - 4) {
      uVar3 = in_stack_00000014;
    }
    pwVar2 = (word *)&param_1;
    if (0xf < in_stack_00000018) {
      pwVar2 = param_1;
    }
    puStack_20 = &stack0xfffffffc;
    std::basic_string<>::assign((basic_string<> *)&local_3c,(char *)pwVar2,uVar3);
    if (in_ECX == (word *)&local_3c) {
      if (0xf < uStack_28) {
        pnVar5 = (nothrow_t *)(uStack_28 + 1);
        pvVar4 = local_3c;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_3c + -4);
          pnVar5 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      std::basic_string<>::append((basic_string<> *)in_ECX,"...",3);
      puVar1 = puStack_20;
    }
    else {
      word::~word(in_ECX);
      *(void **)in_ECX = local_3c;
      *(undefined4 *)(in_ECX + 4) = uStack_38;
      *(undefined4 *)(in_ECX + 8) = uStack_34;
      *(undefined4 *)(in_ECX + 0xc) = uStack_30;
      *(ulonglong *)(in_ECX + 0x10) = CONCAT44(uStack_28,local_2c);
      std::basic_string<>::append((basic_string<> *)in_ECX,"...",3);
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pwVar2 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pwVar2 = *(word **)(param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((word *)0x1f < param_1 + (-4 - (int)pwVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pwVar2,pnVar5);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// void __cdecl setTexParams(class cocos2d::Texture2D *)

void __cdecl setTexParams(Texture2D *param_1)

{
  _TexParams *p_Var1;
  Texture2D *in_ECX;
  
  p_Var1 = this_0065d534;
  if (this_0065d534 == (_TexParams *)0x0) {
    p_Var1 = operator_new(0x10);
    this_0065d534 = p_Var1;
    *(undefined4 *)(p_Var1 + 4) = 0x2600;
    *(undefined4 *)p_Var1 = 0x2600;
    *(undefined4 *)(p_Var1 + 8) = 0x812f;
    *(undefined4 *)(p_Var1 + 0xc) = 0x812f;
  }
  cocos2d::Texture2D::setTexParameters(in_ECX,p_Var1);
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// strUsingArgs(char const *,...)

void __cdecl strUsingArgs(char *param_1,...)

{
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  char *in_stack_00000008;
  char local_400c [16388];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  _vsnprintf(in_stack_00000008,(size_t)&stack0x0000000c,unaff_ESI,param_1);
  pcVar2 = local_400c;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\x0f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *param_1 = '\0';
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)param_1,local_400c,(int)pcVar2 - (int)(local_400c + 1));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// stripWhiteSpaceFromBeginning(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

void __cdecl stripWhiteSpaceFromBeginning(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  basic_string<> *in_ECX;
  int iVar4;
  nothrow_t *pnVar5;
  char *pcVar6;
  int iVar7;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ccf41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (basic_string<>)0x0;
  bVar2 = false;
  bVar3 = false;
  pcVar6 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar6 = param_1;
  }
  iVar7 = 0;
  iVar4 = (int)(pcVar6 + in_stack_00000014) - (int)pcVar6;
  if (pcVar6 + in_stack_00000014 < pcVar6) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    do {
      cVar1 = *pcVar6;
      if (bVar2) {
LAB_00593c55:
        bVar2 = bVar3;
        std::basic_string<>::push_back(in_ECX,cVar1);
        bVar3 = bVar2;
      }
      else if ((cVar1 != '\t') && (cVar1 != ' ')) {
        bVar3 = true;
        goto LAB_00593c55;
      }
      iVar7 = iVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (iVar7 != iVar4);
  }
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar6 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar6 = *(char **)(param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_1 + (-4 - (int)pcVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar6,pnVar5);
  }
  ExceptionList = local_10;
  return;
}


// bool __cdecl stringContains(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

bool __cdecl stringContains(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  nothrow_t *pnVar3;
  uint uVar4;
  uint unaff_ESI;
  undefined4 *puVar5;
  char *unaff_EDI;
  void *pvVar6;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  
  uVar4 = in_stack_00000030;
  puVar5 = in_stack_0000001c;
  puVar1 = &stack0x0000001c;
  if (0xf < in_stack_00000030) {
    puVar1 = in_stack_0000001c;
  }
  uVar2 = std::_Traits_find<>((char *)0x0,(uint)puVar1,in_stack_0000002c,unaff_EDI,unaff_ESI);
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar6 = param_1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar6 = *(void **)((int)param_1 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar6))) goto LAB_00594784;
    }
    operator_delete(pvVar6,pnVar3);
    uVar4 = in_stack_00000030;
    puVar5 = in_stack_0000001c;
  }
  if (0xf < uVar4) {
    pnVar3 = (nothrow_t *)(uVar4 + 1);
    puVar1 = puVar5;
    if ((nothrow_t *)0xfff < pnVar3) {
      puVar1 = (undefined4 *)puVar5[-1];
      pnVar3 = (nothrow_t *)(uVar4 + 0x24);
      if (0x1f < (uint)((int)puVar5 + (-4 - (int)puVar1))) {
LAB_00594784:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar3);
  }
  return uVar2 != 0xffffffff;
}


// class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __cdecl splitStringBy(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,char)

void __cdecl splitStringBy(undefined4 *param_1)

{
  undefined1 uVar1;
  basic_string<> *pbVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 ****ppppuVar6;
  vector<> *in_ECX;
  char in_DL;
  undefined1 *puVar7;
  nothrow_t *pnVar8;
  uint unaff_EDI;
  uint uVar9;
  undefined4 ****ppppuVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  vector<> *local_34;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd129;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  uVar9 = 0;
  local_8 = 2;
  local_34 = in_ECX;
  local_14 = pcVar4;
  if (in_stack_00000014 != 0) {
    do {
      puVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        puVar5 = param_1;
      }
      if (*(char *)((int)puVar5 + uVar9) == in_DL) {
        pbVar2 = *(basic_string<> **)(in_ECX + 4);
        if (*(basic_string<> **)(in_ECX + 8) == pbVar2) {
          std::vector<>::_Emplace_reallocate<>
                    (in_ECX,(basic_string<> *)pbVar2,(basic_string<> *)local_2c);
          std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
        }
        else {
          std::basic_string<>::basic_string<>(pbVar2,(basic_string<> *)local_2c);
          *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
          std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
        }
      }
      else {
        puVar5 = &param_1;
        if (0xf < in_stack_00000018) {
          puVar5 = param_1;
        }
        uVar1 = *(undefined1 *)((int)puVar5 + uVar9);
        if (local_18 == local_1c) {
          local_34 = (vector<> *)((uint)local_34 & 0xffffff00);
          std::basic_string<>::_Reallocate_grow_by<>
                    ((basic_string<> *)local_2c,uVar1,local_34,uVar1,uVar1);
        }
        else {
          ppppuVar6 = local_2c;
          if (0xf < local_18) {
            ppppuVar6 = (undefined4 ****)local_2c[0];
          }
          puVar7 = (undefined1 *)(local_1c + (int)ppppuVar6);
          local_1c = local_1c + 1;
          *puVar7 = uVar1;
          puVar7[1] = 0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < in_stack_00000014);
  }
  uVar9 = local_18;
  ppppuVar6 = (undefined4 ****)local_2c[0];
  bVar3 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
  if (!bVar3) {
    pbVar2 = *(basic_string<> **)(in_ECX + 4);
    if (*(basic_string<> **)(in_ECX + 8) == pbVar2) {
      std::vector<>::_Emplace_reallocate<>
                (in_ECX,(basic_string<> *)pbVar2,(basic_string<> *)local_2c);
      uVar9 = local_18;
      ppppuVar6 = (undefined4 ****)local_2c[0];
    }
    else {
      std::basic_string<>::basic_string<>(pbVar2,(basic_string<> *)local_2c);
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
      uVar9 = local_18;
      ppppuVar6 = (undefined4 ****)local_2c[0];
    }
  }
  if (0xf < uVar9) {
    pnVar8 = (nothrow_t *)(uVar9 + 1);
    ppppuVar10 = ppppuVar6;
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppuVar10 = (undefined4 ****)ppppuVar6[-1];
      pnVar8 = (nothrow_t *)(uVar9 + 0x24);
      if (0x1f < (uint)((int)ppppuVar6 + (-4 - (int)ppppuVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar10,pnVar8);
  }
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar5 = param_1;
    if ((nothrow_t *)0xfff < pnVar8) {
      puVar5 = (undefined4 *)param_1[-1];
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar5,pnVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// unsigned int __cdecl SuperFastHashIncremental(char const *,int,unsigned int)

uint __cdecl SuperFastHashIncremental(char *param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *in_ECX;
  uint in_EDX;
  uint uVar4;
  int iVar5;
  
  if (in_ECX == (ushort *)0x0) {
    return 0;
  }
  uVar4 = in_EDX & 3;
  for (iVar5 = (int)in_EDX >> 2; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar2 = *in_ECX;
    puVar1 = in_ECX + 1;
    in_ECX = in_ECX + 2;
    uVar3 = (uint)(param_1 + uVar2) ^ ((uint)*puVar1 ^ (int)(param_1 + uVar2) * 0x20) << 0xb;
    param_1 = (char *)(uVar3 + (uVar3 >> 0xb));
  }
  if (uVar4 == 1) {
    uVar4 = (uint)(param_1 + (char)*in_ECX) ^ (int)(param_1 + (char)*in_ECX) * 0x400;
    uVar3 = uVar4 >> 1;
  }
  else if (uVar4 == 2) {
    uVar4 = (uint)(param_1 + *in_ECX) ^ (int)(param_1 + *in_ECX) * 0x800;
    uVar3 = uVar4 >> 0x11;
  }
  else {
    if (uVar4 != 3) goto LAB_005ade33;
    uVar4 = (uint)(param_1 + *in_ECX) ^
            ((int)(char)in_ECX[1] << 2 ^ (uint)(param_1 + *in_ECX)) << 0x10;
    uVar3 = uVar4 >> 0xb;
  }
  param_1 = (char *)(uVar4 + uVar3);
LAB_005ade33:
  uVar4 = (uint)param_1 ^ (int)param_1 * 8;
  uVar4 = uVar4 + (uVar4 >> 5);
  uVar4 = uVar4 ^ uVar4 * 0x10;
  uVar4 = uVar4 + (uVar4 >> 0x11);
  uVar4 = uVar4 ^ uVar4 * 0x2000000;
  return uVar4 + (uVar4 >> 6);
}
