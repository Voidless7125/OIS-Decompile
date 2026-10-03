#include "../ois.exe.h"


// public: void __thiscall PrivateCommsManager::reset(void)

void __thiscall PrivateCommsManager::reset(PrivateCommsManager *this)

{
  GameData *pGVar1;
  
  pGVar1 = g_gameData;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  if (*(int *)(pGVar1 + 0xd0) != 0) {
    *(undefined4 *)(*(int *)(pGVar1 + 0xd0) + 0x374) = 0;
  }
  this[0x80] = (PrivateCommsManager)0x0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined1 **)(this + 0x18) = &DAT_bf800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x84) = &DAT_bf800000;
  return;
}


// public: virtual bool __thiscall PrivateCommsManager::keyPressed(enum
// cocos2d::EventKeyboard::KeyCode)

bool __thiscall PrivateCommsManager::keyPressed(PrivateCommsManager *this,KeyCode param_1)

{
  PrivateCommsManager *pPVar1;
  PrivateComm *this_00;
  GameData *pGVar2;
  bool bVar3;
  char cVar4;
  SoundEngine *pSVar5;
  ConversationElement *pCVar6;
  uint uVar7;
  Ship *pSVar8;
  PrivateCommsManager *this_01;
  ConversationManager *this_02;
  uint uVar9;
  int iVar10;
  Ship *unaff_EDI;
  int *piVar11;
  Sound SVar12;
  int iVar13;
  
  if (*(float *)(this + 0x18) != -1.0) {
    iVar13 = -1;
    SVar12 = 10;
    pSVar8 = *(Ship **)(g_gameData + 0xd0);
    pSVar5 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar5,pSVar8,SVar12,iVar13);
    return true;
  }
  iVar13 = *(int *)(this + 0x6c);
  if (iVar13 == 1) {
    if (param_1 == 0x1d) {
      this_00 = *(PrivateComm **)(this + 0x70);
      if (this_00 == (PrivateComm *)0x0) {
        return false;
      }
      iVar13 = PrivateComm::getNextValidElement(this_00);
      *(int *)(this_00 + 0x24) = iVar13;
      PrivateComm::render(*(PrivateComm **)(this + 0x70),(basic_string<> *)(this + 0x38),
                          (basic_string<> *)(this + 0x50));
      render(this,true,true);
    }
    else if (param_1 == 0x1c) {
      if (*(PrivateComm **)(this + 0x70) == (PrivateComm *)0x0) {
        return false;
      }
      PrivateComm::changeElement(*(PrivateComm **)(this + 0x70),-1);
      PrivateComm::render(*(PrivateComm **)(this + 0x70),(basic_string<> *)(this + 0x38),
                          (basic_string<> *)(this + 0x50));
      render(this,true,true);
    }
    else {
      if (((param_1 != 0x3b) && (param_1 != 0xa4)) && (param_1 != 0x23)) {
        return false;
      }
      iVar13 = PrivateComm::selectElement(*(PrivateComm **)(this + 0x70));
      if (iVar13 != -2) {
        if (iVar13 == -1) {
          goBackToList(this);
          render(this,false,true);
          goto LAB_00430e77;
        }
        generateSpaceStationComms
                  (this_01,*(PrivateComm **)(this + 0x70),
                   *(SpaceStation **)(*(PrivateComm **)(this + 0x70) + 8));
        *(int *)(*(int *)(this + 0x70) + 0x28) = iVar13;
        *(undefined4 *)(*(int *)(this + 0x70) + 0x24) = 0;
        iVar13 = PrivateComm::getValidatedElement(*(PrivateComm **)(this + 0x70));
        *(int *)(*(int *)(this + 0x70) + 0x24) = iVar13;
      }
      render(this,false,true);
    }
    goto LAB_00430e77;
  }
  if (iVar13 == 2) {
    if (((param_1 != 0x3b) && (param_1 != 0xa4)) && (param_1 != 0x23)) {
      return false;
    }
    if (*(int *)(this + 0x8c) == 0) {
      goBackToList(this);
      render(this,false,true);
      return true;
    }
    if (*(char *)(*(int *)(this + 0x8c) + 0x1d) != '\0') {
      *(undefined1 **)(this + 0x10) = &DAT_bf800000;
    }
    iVar13 = -1;
    SVar12 = 8;
    pSVar8 = *(Ship **)(g_gameData + 0xd0);
    pSVar5 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar5,pSVar8,SVar12,iVar13);
    pGVar2 = g_gameData;
    *(undefined4 *)(this + 0x6c) = 3;
    *(undefined4 *)(*(int *)(pGVar2 + 0xd0) + 0x374) = 0;
    Singleton<>::getInstance();
    pCVar6 = Conversation::getElement(*(Conversation **)(this + 0x8c),*(int *)(this + 0x88));
    ConversationManager::performElementActions(this_02,pCVar6);
    render(this,false,true);
    bVar3 = hasValidOptionInCurrentElement(this);
    this[4] = (PrivateCommsManager)!bVar3;
    goto LAB_00430e77;
  }
  if (iVar13 == 0) {
    if (param_1 == 0x1d) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= *(uint *)(this + 0xc)) {
        *(undefined4 *)(this + 0xc) = 0;
        render(this,true,true);
        goto LAB_00430e77;
      }
    }
    else {
      if (param_1 != 0x1c) {
        if (((param_1 == 0x3b) || (param_1 == 0xa4)) || (param_1 == 0x23)) {
          if (((*(int *)(g_gameData + 0xd0) == 0) ||
              (piVar11 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x1c),
              piVar11 == (int *)0x0)) ||
             ((cVar4 = (**(code **)(*piVar11 + 0x10))(0), cVar4 == '\0' ||
              ((*(int *)(this + 0xc) < 0 ||
               (*(char *)(*(int *)(*(int *)(this + 0x74) + *(int *)(this + 0xc) * 4) + 1) == '\0')))
              ))) {
            ShipInterface::soundLow(unaff_EDI);
            return false;
          }
          ShipInterface::soundHigh(unaff_EDI);
          switchTo(this,*(int *)(this + 0xc));
          render(this,false,true);
          goto LAB_00430e77;
        }
        bVar3 = param_1 == 7;
LAB_00430bd7:
        if (!bVar3) {
          return false;
        }
        goto LAB_00430bdd;
      }
      pPVar1 = this + 0xc;
      *(int *)pPVar1 = *(int *)pPVar1 + -1;
      if (*(int *)pPVar1 < 0) {
        *(int *)(this + 0xc) = (*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) + -1;
        render(this,true,true);
        goto LAB_00430e77;
      }
    }
  }
  else {
    if (iVar13 != 3) {
      return false;
    }
    if (this[0x80] != (PrivateCommsManager)0x0) {
      if (((param_1 != 7) && (param_1 != 0x3b)) && (param_1 != 0xa4)) {
        bVar3 = param_1 == 0x23;
        goto LAB_00430bd7;
      }
LAB_00430bdd:
      goBackToList(this);
      ShipInterface::soundLow(unaff_EDI);
      goto LAB_00430e77;
    }
    iVar13 = *(int *)(this + 0x8c);
    if (iVar13 == 0) {
      ShipInterface::soundLow(unaff_EDI);
      goBackToList(this);
      goto LAB_00430e77;
    }
    if (param_1 == 0x1d) {
      uVar7 = 0;
      uVar9 = *(int *)(iVar13 + 0xa4) - *(int *)(iVar13 + 0xa0) >> 2;
      if (uVar9 != 0) {
        do {
          piVar11 = *(int **)(*(int *)(iVar13 + 0xa0) + uVar7 * 4);
          if (*piVar11 == *(int *)(this + 0x88)) goto LAB_00430d0f;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
      piVar11 = (int *)0x0;
LAB_00430d0f:
      if ((char)piVar11[2] == '\0') {
        *(int *)(this + 0x94) = *(int *)(this + 0x94) + 1;
        if ((uint)(piVar11[0x19] - piVar11[0x18] >> 2) <= *(uint *)(this + 0x94)) {
          *(undefined4 *)(this + 0x94) = 0;
          render(this,true,true);
          goto LAB_00430e77;
        }
      }
      else {
        for (iVar13 = 0; iVar13 < 5; iVar13 = iVar13 + 1) {
          uVar7 = *(int *)(this + 0x94) + 1;
          *(uint *)(this + 0x94) = uVar7;
          iVar10 = piVar11[0x18];
          if ((uint)(piVar11[0x19] - iVar10 >> 2) <= uVar7) {
            *(undefined4 *)(this + 0x94) = 0;
            uVar7 = 0;
            iVar10 = piVar11[0x18];
          }
          bVar3 = ConversationOption::checkReq
                            (*(ConversationOption **)(iVar10 + uVar7 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          if (bVar3) break;
        }
      }
    }
    else {
      if (param_1 != 0x1c) {
        if (((param_1 != 0x3b) && (param_1 != 0xa4)) && (param_1 != 0x23)) {
          return false;
        }
        activateCurrentConversationElement(this);
        goto LAB_00430e77;
      }
      uVar7 = 0;
      uVar9 = *(int *)(iVar13 + 0xa4) - *(int *)(iVar13 + 0xa0) >> 2;
      if (uVar9 != 0) {
        do {
          piVar11 = *(int **)(*(int *)(iVar13 + 0xa0) + uVar7 * 4);
          if (*piVar11 == *(int *)(this + 0x88)) goto LAB_00430dde;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
      piVar11 = (int *)0x0;
LAB_00430dde:
      if ((char)piVar11[2] == '\0') {
        pPVar1 = this + 0x94;
        *(int *)pPVar1 = *(int *)pPVar1 + -1;
        if (*(int *)pPVar1 < 0) {
          *(int *)(this + 0x94) = (piVar11[0x19] - piVar11[0x18] >> 2) + -1;
        }
      }
      else {
        for (iVar13 = 0; iVar13 < 5; iVar13 = iVar13 + 1) {
          iVar10 = *(int *)(this + 0x94) + -1;
          *(int *)(this + 0x94) = iVar10;
          if (iVar10 < 0) {
            iVar10 = (piVar11[0x19] - piVar11[0x18] >> 2) + -1;
            *(int *)(this + 0x94) = iVar10;
          }
          bVar3 = ConversationOption::checkReq
                            (*(ConversationOption **)(piVar11[0x18] + iVar10 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          if (bVar3) break;
        }
      }
    }
  }
  render(this,true,true);
LAB_00430e77:
  pSVar8 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar8 = *(Ship **)(g_gameData + 0xd0);
  }
  pSVar5 = Singleton<>::getInstance();
  SoundEngine::playRandomKeyPress(pSVar5,pSVar8);
  return true;
}


// public: int __thiscall PrivateCommsManager::firstValidConversationOption(void)

int __thiscall PrivateCommsManager::firstValidConversationOption(PrivateCommsManager *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  iVar3 = *(int *)(*(int *)(this + 0x8c) + 0xa0);
  uVar2 = *(int *)(*(int *)(this + 0x8c) + 0xa4) - iVar3 >> 2;
  if (uVar2 != 0) {
    do {
      piVar5 = *(int **)(iVar3 + uVar4 * 4);
      if (*piVar5 == *(int *)(this + 0x88)) goto LAB_00430ee3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  piVar5 = (int *)0x0;
LAB_00430ee3:
  uVar2 = 0;
  iVar3 = piVar5[0x18];
  if (piVar5[0x19] - iVar3 >> 2 != 0) {
    do {
      bVar1 = ConversationOption::checkReq
                        (*(ConversationOption **)(iVar3 + uVar2 * 4),
                         *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                         *(BankAccount **)(g_gameData + 0x124));
      if (bVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = piVar5[0x18];
    } while (uVar2 < (uint)(piVar5[0x19] - iVar3 >> 2));
  }
  return 0;
}


// public: void __thiscall PrivateCommsManager::activateCurrentConversationElement(void)

void __thiscall PrivateCommsManager::activateCurrentConversationElement(PrivateCommsManager *this)

{
  ConversationOption *this_00;
  bool bVar1;
  int *piVar2;
  SoundEngine *pSVar3;
  ConversationElement *pCVar4;
  uint uVar5;
  ConversationManager *this_01;
  uint uVar6;
  Ship *pSVar7;
  Sound SVar8;
  int iVar9;
  
  uVar6 = 0;
  iVar9 = *(int *)(*(int *)(this + 0x8c) + 0xa0);
  uVar5 = *(int *)(*(int *)(this + 0x8c) + 0xa4) - iVar9 >> 2;
  if (uVar5 != 0) {
    do {
      piVar2 = *(int **)(iVar9 + uVar6 * 4);
      if (*piVar2 == *(int *)(this + 0x88)) goto LAB_00430f76;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  piVar2 = (int *)0x0;
LAB_00430f76:
  this_00 = *(ConversationOption **)(piVar2[0x18] + *(int *)(this + 0x94) * 4);
  if (this_00 == (ConversationOption *)0x0) {
    debugPrint("WARNING","Invalid conversation option selected in pComms");
    return;
  }
  bVar1 = ConversationOption::checkReq
                    (this_00,*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                     *(BankAccount **)(g_gameData + 0x124));
  if (bVar1) {
    Singleton<>::getInstance();
    uVar5 = 0;
    if (*(int *)(this_00 + 0x5c) - *(int *)(this_00 + 0x58) >> 2 != 0) {
      do {
        MetaGameAction::perform(*(MetaGameAction **)(*(int *)(this_00 + 0x58) + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(*(int *)(this_00 + 0x5c) - *(int *)(this_00 + 0x58) >> 2));
    }
    if (*(int *)(this_00 + 8) < 0) {
      if (*(char *)(*(int *)(this + 0x8c) + 0x1d) != '\0') {
        goBackToList(this);
        bVar1 = hasValidOptionInCurrentElement(this);
        this[4] = (PrivateCommsManager)!bVar1;
        return;
      }
      this[0x80] = (PrivateCommsManager)0x1;
      *(undefined4 *)(this + 0x84) = 0x40400000;
      *(undefined4 *)(this + 0x94) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      bVar1 = true;
    }
    else {
      *(int *)(this + 0x88) = *(int *)(this_00 + 8);
      iVar9 = firstValidConversationOption(this);
      *(int *)(this + 0x94) = iVar9;
      debugPrint("DETAIL","Selected option %d",*(undefined4 *)(this_00 + 8));
      iVar9 = -1;
      SVar8 = 8;
      pSVar7 = *(Ship **)(g_gameData + 0xd0);
      pSVar3 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar3,pSVar7,SVar8,iVar9);
      *(undefined4 *)(this + 0x18) = 0;
      Singleton<>::getInstance();
      pCVar4 = Conversation::getElement(*(Conversation **)(this + 0x8c),*(int *)(this + 0x88));
      ConversationManager::performElementActions(this_01,pCVar4);
      bVar1 = false;
    }
    render(this,true,bVar1);
    bVar1 = hasValidOptionInCurrentElement(this);
    this[4] = (PrivateCommsManager)!bVar1;
  }
  else {
    debugPrint("DETAIL","Option invalid.");
    iVar9 = -1;
    SVar8 = 10;
    pSVar7 = *(Ship **)(g_gameData + 0xd0);
    pSVar3 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar3,pSVar7,SVar8,iVar9);
    if ((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      LogSystem::addLogLine
                ((LogSystem *)g_gameData,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),
                 &DAT_00000002,"You must complete a task before proceeding.");
      return;
    }
  }
  return;
}


// public: void __thiscall PrivateCommsManager::switchTo(int)

void __thiscall PrivateCommsManager::switchTo(PrivateCommsManager *this,int param_1)

{
  Ship *this_00;
  int iVar1;
  basic_string<> *pbVar2;
  int iVar3;
  Conversation *pCVar4;
  basic_string<> *pbVar5;
  ConversationElement *pCVar6;
  ConversationManager *this_01;
  basic_string<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  bool in_stack_ffffffe8;
  bool in_stack_ffffffec;
  
  iVar3 = param_1 * 4;
  this_00 = *(Ship **)(*(int *)(iVar3 + *(int *)(this + 0x74)) + 8);
  if (this_00 != (Ship *)0x0) {
    iVar1 = *(int *)(*(int *)(this_00 + 0x254) + 0x158);
    if (iVar1 == 1) {
      *(undefined4 *)(this + 0x6c) = 1;
      iVar3 = *(int *)(iVar3 + *(int *)(this + 0x74));
      *(int *)(this + 0x70) = iVar3;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      iVar3 = PrivateComm::getValidatedElement(*(PrivateComm **)(this + 0x70));
      *(int *)(*(int *)(this + 0x70) + 0x24) = iVar3;
      *(undefined4 *)(this + 0x90) = *(undefined4 *)(*(int *)(this + 0x70) + 8);
      render(this,false,true);
      return;
    }
    if ((iVar1 == 0) || (iVar1 == 3)) {
      pCVar4 = Ship::getConversation(this_00,in_stack_ffffffe8,in_stack_ffffffec);
      *(Conversation **)(this + 0x8c) = pCVar4;
      pbVar2 = *(basic_string<> **)(*(int *)(*(int *)(*(int *)(this + 0x74) + iVar3) + 8) + 0x360);
      pbVar5 = std::_Find_unchecked<>
                         ((basic_string<> *)(*(int *)(g_gameData + 0xd0) + 0x238),unaff_EDI,
                          unaff_ESI);
      if (pbVar5 != pbVar2) {
        *(undefined4 *)(this + 0x8c) = 0;
        pCVar4 = (Conversation *)0x0;
      }
      iVar1 = *(int *)(*(int *)(iVar3 + *(int *)(this + 0x74)) + 8);
      if (pCVar4 == (Conversation *)0x0) {
        if (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 0) {
          return;
        }
      }
      else {
        *(int *)(this + 0x90) = iVar1;
      }
      *(undefined4 *)(this + 0x6c) = 3;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + *(int *)(this + 0x74));
      this[0x80] = (PrivateCommsManager)0x0;
      *(undefined4 *)(this + 0x88) = 0;
      iVar3 = firstValidConversationOption(this);
      *(int *)(this + 0x94) = iVar3;
      if (*(int *)(this + 0x8c) != 0) {
        Singleton<>::getInstance();
        pCVar6 = Conversation::getElement(*(Conversation **)(this + 0x8c),*(int *)(this + 0x88));
        ConversationManager::performElementActions(this_01,pCVar6);
      }
    }
  }
  render(this,false,true);
  return;
}


// public: void __thiscall PrivateCommsManager::cancelCurrentHail(void)

void __thiscall PrivateCommsManager::cancelCurrentHail(PrivateCommsManager *this)

{
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x374) = 0;
  this[0x80] = (PrivateCommsManager)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  render(this,true,true);
  return;
}


// public: void __thiscall PrivateCommsManager::goBackToList(void)

void __thiscall PrivateCommsManager::goBackToList(PrivateCommsManager *this)

{
  this[0x80] = (PrivateCommsManager)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  render(this,true,true);
  return;
}


// public: bool __thiscall PrivateCommsManager::runSecureSpaceStationBBSLogic(float)

bool __thiscall
PrivateCommsManager::runSecureSpaceStationBBSLogic(PrivateCommsManager *this,float param_1)

{
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  basic_string<> *pbVar9;
  nothrow_t *pnVar10;
  char *pcVar11;
  float in_XMM1_Da;
  float fVar12;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4278;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar12 = *(float *)(this + 0x10) - in_XMM1_Da;
  *(float *)(this + 0x10) = fVar12;
  local_14 = uVar2;
  if (0.0 < fVar12) {
    pbVar9 = (basic_string<> *)(this + 0x20);
    if (*(basic_string<> **)(this + 0x68) != pbVar9) {
      if (0xf < *(uint *)(this + 0x34)) {
        pbVar9 = *(basic_string<> **)pbVar9;
      }
      std::basic_string<>::assign
                (*(basic_string<> **)(this + 0x68),(char *)pbVar9,*(uint *)(this + 0x30));
      fVar12 = *(float *)(this + 0x10);
    }
    if (1.4 < fVar12) {
      pcVar3 = (char *)strUsingArgs((char *)local_2c," `^%c",0x86,uVar2);
      local_8 = 1;
      pcVar11 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar11 = *(char **)pcVar3;
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x68),pcVar11,*(uint *)(pcVar3 + 0x10));
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar10);
      }
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      iVar7 = rand();
      pcVar3 = (char *)strUsingArgs((char *)local_44,"\n`2Syncing : `0[`2%d%d%d%d`0]",iVar7 % 10,
                                    iVar6 % 10,iVar5 % 10,iVar4 % 10);
      local_8 = 2;
      pcVar11 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar11 = *(char **)pcVar3;
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x68),pcVar11,*(uint *)(pcVar3 + 0x10));
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar10);
      }
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_2c," `$%c",1,uVar2);
      local_8 = 0;
      pcVar11 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar11 = *(char **)pcVar3;
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x68),pcVar11,*(uint *)(pcVar3 + 0x10));
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar10);
      }
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n`2Syncing : `0[done]",0x15);
    }
  }
  else {
    *(undefined1 **)(this + 0x10) = &DAT_bf800000;
    **(undefined1 **)(this + 0x70) = 1;
  }
  ExceptionList = local_10;
  uVar1 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// public: bool __thiscall PrivateCommsManager::runSecureShipHailLogic(float)

bool __thiscall PrivateCommsManager::runSecureShipHailLogic(PrivateCommsManager *this,float param_1)

{
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  basic_string<> *pbVar5;
  nothrow_t *pnVar6;
  float in_XMM1_Da;
  float fVar7;
  char *pcVar8;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b42b8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar7 = *(float *)(this + 0x10) - in_XMM1_Da;
  *(float *)(this + 0x10) = fVar7;
  local_14 = uVar2;
  if (0.0 < fVar7) {
    pbVar5 = (basic_string<> *)(this + 0x20);
    if (*(basic_string<> **)(this + 0x68) != pbVar5) {
      if (0xf < *(uint *)(this + 0x34)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign
                (*(basic_string<> **)(this + 0x68),(char *)pbVar5,*(uint *)(this + 0x30));
      fVar7 = *(float *)(this + 0x10);
    }
    if (1.4 < fVar7) {
      pcVar3 = (char *)strUsingArgs((char *)local_2c," `^%c",0x86,uVar2);
      local_8 = 2;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar8,*(uint *)(pcVar3 + 0x10))
      ;
      local_8 = 0xffffffff;
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
      fVar7 = *(float *)(this + 8);
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0.10769231 < fVar7) {
        if (0.21538462 < fVar7) {
          if (0.32307693 < fVar7) {
            if (0.43076923 < fVar7) {
              if (0.53846157 < fVar7) {
                if (0.64615387 < fVar7) {
                  if (0.75384617 < fVar7) {
                    if (0.86153847 < fVar7) {
                      if (0.9692308 < fVar7) {
                        if (1.0769231 < fVar7) {
                          if (1.1846154 < fVar7) {
                            if (1.2923077 < fVar7) {
                              uVar2 = 0x22;
                              pcVar8 = "\n`2Hailing : `0[`8..........`7o`0]";
                            }
                            else {
                              uVar2 = 0x24;
                              pcVar8 = "\n`2Hailing : `0[`8.........`7o`%O`0]";
                            }
                          }
                          else {
                            uVar2 = 0x28;
                            pcVar8 = "\n`2Hailing : `0[`8........`7o`%O`7o`8`0]";
                          }
                        }
                        else {
                          uVar2 = 0x28;
                          pcVar8 = "\n`2Hailing : `0[`8.......`7o`%O`7o`8.`0]";
                        }
                      }
                      else {
                        uVar2 = 0x28;
                        pcVar8 = "\n`2Hailing : `0[`8......`7o`%O`7o`8..`0]";
                      }
                    }
                    else {
                      uVar2 = 0x28;
                      pcVar8 = "\n`2Hailing : `0[`8.....`7o`%O`7o`8...`0]";
                    }
                  }
                  else {
                    uVar2 = 0x28;
                    pcVar8 = "\n`2Hailing : `0[`8....`7o`%O`7o`8....`0]";
                  }
                }
                else {
                  uVar2 = 0x28;
                  pcVar8 = "\n`2Hailing : `0[`8...`7o`%O`7o`8.....`0]";
                }
              }
              else {
                uVar2 = 0x28;
                pcVar8 = "\n`2Hailing : `0[`8..`7o`%O`7o`8......`0]";
              }
            }
            else {
              uVar2 = 0x28;
              pcVar8 = "\n`2Hailing : `0[`8.`7o`%O`7o`8.......`0]";
            }
          }
          else {
            uVar2 = 0x24;
            pcVar8 = "\n`2Hailing : `0[`%O`7o`8.........`0]";
          }
        }
        else {
          uVar2 = 0x22;
          pcVar8 = "\n`2Hailing : `0[`7o`8..........`0]";
        }
      }
      else {
        uVar2 = 0x20;
        pcVar8 = "\n`2Hailing : `0[`8...........`0]";
      }
    }
    else if (*(int *)(this + 0x8c) == 0) {
      pcVar3 = (char *)strUsingArgs((char *)local_44," `$%c",0x86,uVar2);
      local_8 = 1;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar8,*(uint *)(pcVar3 + 0x10))
      ;
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pnVar6 = (nothrow_t *)(local_30 + 1);
        pvVar4 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar4 = *(void **)((int)local_44[0] + -4);
          pnVar6 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar6);
      }
      uVar2 = 0x20;
      pcVar8 = "\n`2Hailing : `0[`$no response`0]";
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_44," `$%c",1,uVar2);
      local_8 = 0;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar8,*(uint *)(pcVar3 + 0x10))
      ;
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pnVar6 = (nothrow_t *)(local_30 + 1);
        pvVar4 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar4 = *(void **)((int)local_44[0] + -4);
          pnVar6 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar6);
      }
      uVar2 = 0x20;
      pcVar8 = "\n`2Hailing : `0[ `%connected`0 ]";
    }
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar8,uVar2);
  }
  else {
    *(undefined1 **)(this + 0x10) = &DAT_bf800000;
    if ((*(int *)(this + 0x8c) != 0) && (*(undefined1 **)(this + 0x70) != (undefined1 *)0x0)) {
      **(undefined1 **)(this + 0x70) = 1;
    }
  }
  ExceptionList = local_10;
  uVar1 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// public: void __thiscall PrivateCommsManager::runLogic(float)

void __thiscall PrivateCommsManager::runLogic(PrivateCommsManager *this,float param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  Conversation *pCVar5;
  int *piVar6;
  Ship *pSVar7;
  SoundEngine *pSVar8;
  FlagManager *pFVar9;
  uint uVar10;
  LogSystem *this_00;
  void *pvVar11;
  LogSystem *this_01;
  nothrow_t *pnVar12;
  uint uVar13;
  uint unaff_EDI;
  float fVar14;
  float in_XMM1_Da;
  float fVar15;
  Sound SVar16;
  int iVar17;
  uint local_40;
  bool local_3c;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b42f0;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar4;
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 0) goto LAB_00431ea9;
  if ((((0.0 <= *(float *)(this + 0x84)) &&
       (fVar14 = *(float *)(this + 0x84) - in_XMM1_Da, *(float *)(this + 0x84) = fVar14,
       fVar14 <= 0.0)) &&
      (*(undefined1 **)(this + 0x84) = &DAT_bf800000, *(int *)(this + 0x6c) == 3)) &&
     ((*(int *)(this + 0x8c) != 0 && (this[0x80] != (PrivateCommsManager)0x0)))) {
    debugPrint("DETAIL","Auto-closing comms.");
    goBackToList(this);
  }
  if ((*(int *)(this + 0x6c) == 0) || (*(int *)(this + 0x6c) == 1)) {
    if (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) != 3) {
      iVar17 = *(int *)(g_gameData + 0xd8);
      local_40 = 0;
      if (*(int *)(iVar17 + 0xd0) - *(int *)(iVar17 + 0xcc) >> 2 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0xf8);
          if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) ||
             (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x1c),
             piVar6 == (int *)0x0)) {
LAB_004319fc:
            local_3c = false;
          }
          else {
            cVar2 = (**(code **)(*piVar6 + 0x10))();
            local_3c = true;
            if (cVar2 == '\0') goto LAB_004319fc;
          }
          pCVar5 = Ship::getForcedConversation
                             (*(Ship **)(*(int *)(iVar17 + 0xcc) + local_40 * 4),local_3c);
          if (pCVar5 != (Conversation *)0x0) {
            iVar1 = *(int *)(*(int *)(iVar17 + 0xcc) + local_40 * 4);
            if (iVar1 != *(int *)(g_gameData + 0xd0)) {
              piVar6 = *(int **)(iVar1 + 0x214);
              uVar10 = 0;
              uVar13 = *(int *)(iVar1 + 0x218) - (int)piVar6 >> 2;
              if (uVar13 != 0) {
                do {
                  if (*(int *)(*piVar6 + 0x130) == *(int *)(g_gameData + 0xd0)) {
                    if (*(float *)(*piVar6 + 0x40) <= 0.5) goto LAB_00431ab6;
                    break;
                  }
                  uVar10 = uVar10 + 1;
                  piVar6 = piVar6 + 1;
                } while (uVar10 < uVar13);
              }
              iVar1 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158);
              if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_00431a93;
            }
LAB_00431ab6:
            if (*(int *)(this + 0x8c) == 0) {
              *(undefined4 *)(this + 0x14) = *(undefined4 *)(pCVar5 + 0x24);
              *(Conversation **)(this + 0x8c) = pCVar5;
            }
            break;
          }
LAB_00431a93:
          local_40 = local_40 + 1;
        } while (local_40 < (uint)(*(int *)(iVar17 + 0xd0) - *(int *)(iVar17 + 0xcc) >> 2));
      }
    }
    iVar17 = *(int *)(this + 0x8c);
    if (iVar17 != 0) {
      if (*(char *)(iVar17 + 0x1d) == '\0') {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff94,(basic_string<> *)(iVar17 + 4));
        pSVar7 = GameData::getShipWithRego();
        *(Ship **)(this + 0x90) = pSVar7;
      }
      else {
        pSVar7 = *(Ship **)(g_gameData + 0xd0);
        *(Ship **)(this + 0x90) = pSVar7;
      }
      if (pSVar7 != (Ship *)0x0) {
        *(Ship **)(*(int *)(g_gameData + 0xd0) + 0x374) = pSVar7;
        *(undefined4 *)(this + 0x88) = 0;
        *(undefined4 *)(this + 0x94) = 0;
        *(undefined4 *)(this + 8) = 0;
        *(undefined4 *)(this + 0x6c) = 2;
        *(undefined4 *)(this + 0x70) = 0;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)local_2c,(basic_string<> *)(*(int *)(this + 0x90) + 8));
        local_8 = 0;
        std::transform<>();
        if (*(char *)(*(int *)(this + 0x8c) + 0x1d) == '\0') {
          LogSystem::addLogLine
                    (this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),(char *)0x3);
        }
        else {
          LogSystem::addLogLine
                    (this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),(char *)0x3);
        }
        debugPrint("DETAIL","HAILING PLAYER");
        if (0xf < local_18) {
          pnVar12 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar12 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar12);
        }
        goto LAB_00431ea9;
      }
      *(undefined4 *)(this + 0x8c) = 0;
    }
  }
  fVar14 = *(float *)(this + 8);
  fVar15 = fVar14 + in_XMM1_Da;
  *(float *)(this + 8) = fVar15;
  if (((fVar14 < 0.7) && (0.7 <= fVar15)) && (*(int *)(*(int *)(g_gameData + 0xd0) + 0x374) != 0)) {
    if ((*(int *)(this + 0x8c) == 0) || (*(char *)(*(int *)(this + 0x8c) + 0x1d) == '\0')) {
      pSVar8 = Singleton<>::getInstance();
      if (*pSVar8 != (SoundEngine)0x0) {
        SoundEngine::addSound(pSVar8,6,0x27,-1,false,true,1.0);
      }
    }
    else {
      iVar17 = -1;
      SVar16 = 0x2e;
      pSVar8 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar8,SVar16,iVar17);
    }
  }
  if (1.4 <= *(float *)(this + 8)) {
    *(undefined4 *)(this + 8) = 0;
  }
  iVar17 = *(int *)(this + 0x6c);
  if (iVar17 == 0) {
    regenerateList(this);
LAB_00431dbc:
    render(this,true,true);
  }
  else {
    if (iVar17 == 2) {
      if ((0.0 <= *(float *)(this + 0x14)) &&
         (fVar14 = *(float *)(this + 0x14) - in_XMM1_Da, *(float *)(this + 0x14) = fVar14,
         fVar14 < 0.0)) {
        *(undefined1 **)(this + 0x14) = &DAT_bf800000;
        debugPrint("GAME","Conversation timed out.");
        iVar17 = *(int *)(this + 0x8c);
        bVar3 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
        if (!bVar3) {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff90,(basic_string<> *)(iVar17 + 0x2c));
          local_8 = 1;
          pFVar9 = Singleton<>::getInstance();
          local_8 = 0xffffffff;
          FlagManager::setFlag(pFVar9);
        }
        cancelCurrentHail(this);
      }
      goto LAB_00431dbc;
    }
    if ((iVar17 == 3) && (*(float *)(this + 0x18) == -1.0)) goto LAB_00431dbc;
  }
  if (0.0 < *(float *)(this + 0x10)) {
    if (*(int *)(this + 0x6c) == 1) {
      bVar3 = runSecureSpaceStationBBSLogic(this,(float)pcVar4);
    }
    else {
      if (*(int *)(this + 0x6c) != 3) goto LAB_00431e04;
      bVar3 = runSecureShipHailLogic(this,(float)pcVar4);
    }
    if (bVar3 != false) goto LAB_00431ea9;
  }
LAB_00431e04:
  if ((((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
      && (this[4] != (PrivateCommsManager)0x0)) &&
     (bVar3 = hasValidOptionInCurrentElement(this), bVar3)) {
    this[4] = (PrivateCommsManager)0x0;
    debugPrint("DETAIL","Just got a valid option in a private comms conversation");
    iVar17 = -1;
    SVar16 = 0x26;
    pSVar8 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar8,SVar16,iVar17);
    LogSystem::addLogLine
              (this_01,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001);
  }
  if (*(float *)(this + 0x18) != -1.0) {
    if (*(int *)(this + 0x6c) == 1) {
      renderComm(this,(float)pcVar4);
    }
    else if (*(int *)(this + 0x6c) == 3) {
      renderConversation(this,(float)pcVar4);
    }
  }
LAB_00431ea9:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommsManager::renderConversation(float)

void __thiscall PrivateCommsManager::renderConversation(PrivateCommsManager *this,float param_1)

{
  uint uVar1;
  char *pcVar2;
  SoundEngine *pSVar3;
  PrivateCommsManager *pPVar4;
  char ****ppppcVar5;
  uint uVar6;
  void *pvVar7;
  basic_string<> *pbVar8;
  nothrow_t *pnVar9;
  bool bVar10;
  float in_XMM1_Da;
  float fVar11;
  Ship *pSVar12;
  char *pcVar13;
  Sound SVar14;
  char cVar15;
  int iVar16;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4340;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar8 = (basic_string<> *)(this + 0x20);
  local_14 = uVar1;
  if (*(basic_string<> **)(this + 0x68) != pbVar8) {
    if (0xf < *(uint *)(this + 0x34)) {
      pbVar8 = *(basic_string<> **)pbVar8;
    }
    std::basic_string<>::assign
              (*(basic_string<> **)(this + 0x68),(char *)pbVar8,*(uint *)(this + 0x30));
  }
  if (*(int *)(this + 0x8c) == 0) {
    pcVar2 = (char *)strUsingArgs((char *)local_2c," `$%c",0x86,uVar1);
    local_8 = 0;
    pcVar13 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar13 = *(char **)pcVar2;
    }
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar13,*(uint *)(pcVar2 + 0x10));
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      ppppcVar5 = (char ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar5 = (char ****)local_2c[0][-1];
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar5,pnVar9);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),"\n`2Hailing : `0[`$no response`0]",0x20);
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n",1);
    uVar1 = 0x23;
    pcVar13 = "\n`2[`$backspace`2/`$enter`2] - back";
  }
  else {
    pcVar2 = (char *)strUsingArgs((char *)local_2c," `$%c",1,uVar1);
    local_8 = 1;
    pcVar13 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar13 = *(char **)pcVar2;
    }
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar13,*(uint *)(pcVar2 + 0x10));
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      ppppcVar5 = (char ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar5 = (char ****)local_2c[0][-1];
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar5,pnVar9);
    }
    uVar1 = 2;
    pcVar13 = "\n\n";
  }
  std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar13,uVar1);
  fVar11 = in_XMM1_Da * 96.0 + *(float *)(this + 0x18);
  *(float *)(this + 0x18) = fVar11;
  uVar1 = *(uint *)(this + 0x48);
  if (fVar11 <= (float)((double)(int)uVar1 +
                       *(double *)
                        (&__xmm_41f00000000000000000000000000000 + ((int)uVar1 >> 0x1f) * -8))) {
    pPVar4 = this + 0x38;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    uVar6 = (int)fVar11;
    if (uVar1 < (uint)(int)fVar11) {
      uVar6 = uVar1;
    }
    if (0xf < *(uint *)(this + 0x4c)) {
      pPVar4 = *(PrivateCommsManager **)pPVar4;
    }
    std::basic_string<>::assign((basic_string<> *)local_2c,(char *)pPVar4,uVar6);
    local_8 = 2;
    ppppcVar5 = local_2c;
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),(char *)ppppcVar5,local_1c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      ppppcVar5 = (char ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar5 = (char ****)local_2c[0][-1];
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar5,pnVar9);
    }
    if (*(int *)(this + 0x1c) != (int)*(float *)(this + 0x18)) {
      *(int *)(this + 0x1c) = (int)*(float *)(this + 0x18);
      iVar16 = rand();
      pSVar3 = Singleton<>::getInstance();
      if (*pSVar3 != (SoundEngine)0x0) {
        SoundEngine::addSound(pSVar3,6,7,iVar16 % 3 + 1,false,true,1.0);
      }
    }
    iVar16 = 4;
    fVar11 = (float)((double)*(int *)(this + 0x48) +
                    *(double *)
                     (&__xmm_41f00000000000000000000000000000 + (*(int *)(this + 0x48) >> 0x1f) * -8
                     )) - *(float *)(this + 0x18);
    if ((4.0 <= fVar11) || (iVar16 = (int)fVar11, 0 < iVar16)) {
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68)," ",1);
      iVar16 = iVar16 + -1;
      if (0 < iVar16) {
        do {
          uVar1 = rand();
          uVar1 = uVar1 & 0x80000001;
          bVar10 = uVar1 == 0;
          if ((int)uVar1 < 0) {
            bVar10 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar10) {
            cVar15 = '7';
          }
          else {
            cVar15 = '8';
          }
          addGarbageChar(this,cVar15);
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      pcVar2 = (char *)strUsingArgs((char *)local_44,"`$%c",3);
      local_8 = 3;
      pcVar13 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar13 = *(char **)pcVar2;
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x68),pcVar13,*(uint *)(pcVar2 + 0x10));
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar9);
      }
    }
  }
  else {
    iVar16 = -1;
    if (*(int *)(this + 0x8c) == 0) {
      SVar14 = 10;
    }
    else {
      SVar14 = 8;
    }
    pSVar12 = *(Ship **)(g_gameData + 0xd0);
    pSVar3 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar3,pSVar12,SVar14,iVar16);
    *(undefined1 **)(this + 0x18) = &DAT_bf800000;
    pPVar4 = this + 0x38;
    if (0xf < *(uint *)(this + 0x4c)) {
      pPVar4 = *(PrivateCommsManager **)(this + 0x38);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),(char *)pPVar4,*(uint *)(this + 0x48));
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n\n",2);
    pPVar4 = this + 0x50;
    if (0xf < *(uint *)(this + 100)) {
      pPVar4 = *(PrivateCommsManager **)(this + 0x50);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),(char *)pPVar4,*(uint *)(this + 0x60));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommsManager::renderComm(float)

void __thiscall PrivateCommsManager::renderComm(PrivateCommsManager *this,float param_1)

{
  SoundEngine *pSVar1;
  PrivateCommsManager *pPVar2;
  char ****ppppcVar3;
  uint uVar4;
  char *pcVar5;
  basic_string<> *this_00;
  uint uVar6;
  void *pvVar7;
  basic_string<> *pbVar8;
  nothrow_t *pnVar9;
  char *pcVar10;
  bool bVar11;
  float in_XMM1_Da;
  float fVar12;
  Ship *pSVar13;
  Sound SVar14;
  char cVar15;
  int iVar16;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4380;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = *(basic_string<> **)(this + 0x68);
  pbVar8 = (basic_string<> *)(this + 0x20);
  if (this_00 != pbVar8) {
    if (0xf < *(uint *)(this + 0x34)) {
      pbVar8 = *(basic_string<> **)pbVar8;
    }
    std::basic_string<>::assign(this_00,(char *)pbVar8,*(uint *)(this + 0x30));
    this_00 = *(basic_string<> **)(this + 0x68);
  }
  std::basic_string<>::append(this_00,"\n\n",2);
  fVar12 = in_XMM1_Da * 96.0 + *(float *)(this + 0x18);
  *(float *)(this + 0x18) = fVar12;
  uVar4 = *(uint *)(this + 0x48);
  if (fVar12 <= (float)((double)(int)uVar4 +
                       *(double *)
                        (&__xmm_41f00000000000000000000000000000 + ((int)uVar4 >> 0x1f) * -8))) {
    pPVar2 = this + 0x38;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    uVar6 = (int)fVar12;
    if (uVar4 < (uint)(int)fVar12) {
      uVar6 = uVar4;
    }
    if (0xf < *(uint *)(this + 0x4c)) {
      pPVar2 = *(PrivateCommsManager **)pPVar2;
    }
    std::basic_string<>::assign((basic_string<> *)local_2c,(char *)pPVar2,uVar6);
    local_8 = 0;
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),(char *)ppppcVar3,local_1c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      ppppcVar3 = (char ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar3 = (char ****)local_2c[0][-1];
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar3,pnVar9);
    }
    if (*(int *)(this + 0x1c) != (int)*(float *)(this + 0x18)) {
      *(int *)(this + 0x1c) = (int)*(float *)(this + 0x18);
      iVar16 = rand();
      pSVar1 = Singleton<>::getInstance();
      if (*pSVar1 != (SoundEngine)0x0) {
        SoundEngine::addSound(pSVar1,6,7,iVar16 % 3 + 1,false,true,1.0);
      }
    }
    iVar16 = 4;
    fVar12 = (float)((double)*(int *)(this + 0x48) +
                    *(double *)
                     (&__xmm_41f00000000000000000000000000000 + (*(int *)(this + 0x48) >> 0x1f) * -8
                     )) - *(float *)(this + 0x18);
    if ((4.0 <= fVar12) || (iVar16 = (int)fVar12, 0 < iVar16)) {
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68)," ",1);
      iVar16 = iVar16 + -1;
      if (0 < iVar16) {
        do {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000001;
          bVar11 = uVar4 == 0;
          if ((int)uVar4 < 0) {
            bVar11 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar11) {
            cVar15 = '7';
          }
          else {
            cVar15 = '8';
          }
          addGarbageChar(this,cVar15);
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44,"`$%c",3);
      local_8 = 1;
      pcVar10 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar10 = *(char **)pcVar5;
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x68),pcVar10,*(uint *)(pcVar5 + 0x10));
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar9);
      }
    }
  }
  else {
    iVar16 = -1;
    SVar14 = 8;
    pSVar13 = *(Ship **)(g_gameData + 0xd0);
    pSVar1 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar1,pSVar13,SVar14,iVar16);
    *(undefined1 **)(this + 0x18) = &DAT_bf800000;
    pPVar2 = this + 0x38;
    if (0xf < *(uint *)(this + 0x4c)) {
      pPVar2 = *(PrivateCommsManager **)(this + 0x38);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),(char *)pPVar2,*(uint *)(this + 0x48));
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n\n",2);
    pPVar2 = this + 0x50;
    if (0xf < *(uint *)(this + 100)) {
      pPVar2 = *(PrivateCommsManager **)(this + 0x50);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),(char *)pPVar2,*(uint *)(this + 0x60));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommsManager::addGarbageChar(char)

void __thiscall PrivateCommsManager::addGarbageChar(PrivateCommsManager *this,char param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b43b8;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = rand();
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`%c%c",(int)param_1,
                                (int)(char)(&DAT_005e97dc)[iVar2 % 0xe],uVar1);
  local_8 = 0;
  pcVar5 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar5 = *(char **)pcVar3;
  }
  std::basic_string<>::append(*(basic_string<> **)(this + 0x68),pcVar5,*(uint *)(pcVar3 + 0x10));
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommsManager::render(bool,bool)

void __thiscall PrivateCommsManager::render(PrivateCommsManager *this,bool param_1,bool param_2)

{
  int iVar1;
  PrivateComm *this_00;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  undefined4 *puVar5;
  basic_string<> *pbVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
  int *piVar10;
  PrivateCommsManager *pPVar11;
  void *pvVar12;
  nothrow_t *pnVar13;
  undefined4 uVar14;
  basic_string<> *pbVar15;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4478;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if ((*(int *)(this + 0x68) == 0) || (g_gameLogic[0x72] == (GameLogic)0x0)) goto LAB_0043316e;
  pbVar15 = (basic_string<> *)(this + 0x20);
  *(undefined4 *)(this + 0x30) = 0;
  pbVar3 = pbVar15;
  if (0xf < *(uint *)(this + 0x34)) {
    pbVar3 = *(basic_string<> **)pbVar15;
  }
  *pbVar3 = (basic_string<>)0x0;
  pPVar11 = this + 0x38;
  *(undefined4 *)(this + 0x48) = 0;
  if (0xf < *(uint *)(this + 0x4c)) {
    pPVar11 = *(PrivateCommsManager **)(this + 0x38);
  }
  pbVar3 = (basic_string<> *)(this + 0x50);
  *pPVar11 = (PrivateCommsManager)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(this + 100)) {
    pbVar4 = *(basic_string<> **)pbVar3;
  }
  *pbVar4 = (basic_string<>)0x0;
  std::basic_string<>::append(pbVar15,"`% StS Comms v`!1.7.2`7 by Purchase Tech\n\n",0x2a);
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 1) {
    if ((*(int *)(this + 0x8c) == 0) || (*(char *)(*(int *)(this + 0x8c) + 0x1d) == '\0')) {
      iVar1 = *(int *)(this + 0x90);
      if (iVar1 == 0) {
        pcVar7 = "unknown";
      }
      else {
        pcVar7 = (char *)(iVar1 + 8);
        if (0xf < *(uint *)(iVar1 + 0x1c)) {
          pcVar7 = *(char **)pcVar7;
        }
      }
      pcVar8 = (char *)strUsingArgs((char *)local_2c,"`2Source  : `!%s\n",pcVar7);
      local_8 = 3;
      pcVar7 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar7 = *(char **)pcVar8;
      }
      std::basic_string<>::append(pbVar15,pcVar7,*(uint *)(pcVar8 + 0x10));
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar9,pnVar13);
      }
      iVar1 = *(int *)(this + 0x90);
      if (iVar1 == 0) {
        pcVar7 = "unknown";
      }
      else {
        pcVar7 = (char *)(iVar1 + 0x238);
        if (0xf < *(uint *)(iVar1 + 0x24c)) {
          pcVar7 = *(char **)pcVar7;
        }
      }
      pcVar8 = (char *)strUsingArgs((char *)local_2c,"`2ID      : `%c%s\n",
                                    (uint)(iVar1 == 0) * 8 + 0x30,pcVar7,uVar2);
      local_8 = 4;
      pcVar7 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar7 = *(char **)pcVar8;
      }
      std::basic_string<>::append(pbVar15,pcVar7,*(uint *)(pcVar8 + 0x10));
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar9,pnVar13);
      }
      pcVar8 = (char *)strUsingArgs((char *)local_2c,"`2Encrypt.: `!pby-4");
      local_8 = 5;
      pcVar7 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar7 = *(char **)pcVar8;
      }
      std::basic_string<>::append(pbVar15,pcVar7,*(uint *)(pcVar8 + 0x10));
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_004329be;
      }
    }
    else {
      puVar5 = (undefined4 *)PrivateComm::describeSource(*(PrivateComm **)(this + 0x70));
      local_8 = 0;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Source  : `!INTERCOM\n",puVar5);
      local_8._0_1_ = 1;
      std::basic_string<>::append(pbVar15,pbVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_30) {
        pnVar13 = (nothrow_t *)(local_30 + 1);
        pvVar12 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_44[0] + -4);
          pnVar13 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_8 = 0xffffffff;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar9,pnVar13);
      }
      std::basic_string<>::append(pbVar15,"`2ID      : `!PASSENGER CABIN\n",0x1e);
      pbVar6 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Encrypt.: `$pby-1");
      local_8 = 2;
      std::basic_string<>::append(pbVar15,pbVar6);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)local_2c[0][-1]))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_004329be:
        local_8 = 0xffffffff;
        operator_delete(ppppuVar9,pnVar13);
      }
    }
    PrivateComm::render(*(PrivateComm **)(this + 0x70),(basic_string<> *)(this + 0x38),pbVar3);
    if (!param_1) {
      puVar5 = *(undefined4 **)(this + 0x68);
      puVar5[4] = 0;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
      pPVar11 = this + 0x20;
      if (0xf < *(uint *)(this + 0x34)) {
        pPVar11 = *(PrivateCommsManager **)(this + 0x20);
      }
      std::basic_string<>::append
                (*(basic_string<> **)(this + 0x68),(char *)pPVar11,*(uint *)(this + 0x30));
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n\n",2);
      *(undefined4 *)(this + 0x18) = 0;
      if (**(char **)(this + 0x70) == '\0') {
        *(undefined4 *)(this + 0x10) = 0x40a00000;
      }
LAB_004330f7:
      if (*(int *)(this + 0x6c) != 0) goto LAB_0043316e;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        if (*(int *)(this + 0x90) == *(int *)(g_gameData + 0xd0)) {
          if (*(float *)(this + 8) < 0.7) {
            pcVar7 = "\n\n\n                  `@** INTERCOM **";
          }
          else {
            pcVar7 = "\n\n\n                  `$** INTERCOM **";
          }
          std::basic_string<>::assign(pbVar15,pcVar7,0x25);
          std::basic_string<>::append(pbVar15,"\n\n               `2From: `!PASSENGER CABIN",0x2a);
          std::basic_string<>::append
                    (pbVar15,"\n\n               `2[`$enter`2 to answer intercom]",0x31);
        }
        else {
          if (*(float *)(this + 8) < 0.7) {
            pcVar7 = "\n\n\n                `@** INCOMING HAIL **";
          }
          else {
            pcVar7 = "\n\n\n                `$** INCOMING HAIL **";
          }
          std::basic_string<>::assign(pbVar15,pcVar7,0x28);
          iVar1 = *(int *)(this + 0x90);
          if ((*(char *)(*(int *)(iVar1 + 0x40) + 0x34) != '\0') ||
             (uVar14 = 0x40, *(int *)(iVar1 + 100) == 1)) {
            uVar14 = 0x30;
          }
          piVar10 = (int *)(iVar1 + 8);
          if (0xf < *(uint *)(iVar1 + 0x1c)) {
            piVar10 = (int *)*piVar10;
          }
          pbVar6 = (basic_string<> *)
                   strUsingArgs((char *)local_2c,"\n\n               `2From: `%c%s",uVar14,piVar10,
                                uVar2);
          local_8 = 0x10;
          std::basic_string<>::append(pbVar15,pbVar6);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            ppppuVar9 = (undefined4 ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              ppppuVar9 = (undefined4 ****)local_2c[0][-1];
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) goto LAB_00432c82;
            }
            operator_delete(ppppuVar9,pnVar13);
          }
          puVar5 = (undefined4 *)(*(int *)(this + 0x90) + 0x238);
          if (0xf < *(uint *)(*(int *)(this + 0x90) + 0x24c)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          pbVar6 = (basic_string<> *)
                   strUsingArgs((char *)local_2c,"\n               `2Rego: `0%s",puVar5);
          local_8 = 0x11;
          std::basic_string<>::append(pbVar15,pbVar6);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            ppppuVar9 = (undefined4 ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              ppppuVar9 = (undefined4 ****)local_2c[0][-1];
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) goto LAB_00432c82;
            }
            operator_delete(ppppuVar9,pnVar13);
          }
          piVar10 = *(int **)(*(int *)(this + 0x90) + 0x254);
          if (0xf < (uint)piVar10[5]) {
            piVar10 = (int *)*piVar10;
          }
          pbVar6 = (basic_string<> *)
                   strUsingArgs((char *)local_5c,"\n               `2Cls.: `0%s",piVar10);
          local_8 = 0x12;
          std::basic_string<>::append(pbVar15,pbVar6);
          local_8 = 0xffffffff;
          if (0xf < local_48) {
            pnVar13 = (nothrow_t *)(local_48 + 1);
            pvVar12 = local_5c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar12 = *(void **)((int)local_5c[0] + -4);
              pnVar13 = (nothrow_t *)(local_48 + 0x24);
              if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar12))) goto LAB_00432c82;
            }
            operator_delete(pvVar12,pnVar13);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          std::basic_string<>::append
                    (pbVar15,"\n\n               `2[`$enter`2 to answer hail]",0x2d);
        }
      }
      else {
        renderList(this);
      }
      if (!param_1) goto LAB_004330f7;
      goto LAB_004330fd;
    }
    this_00 = *(PrivateComm **)(this + 0x70);
    iVar1 = *(int *)(this + 0x8c);
    if (this_00 == (PrivateComm *)0x0) {
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x1d) == '\0')) {
        iVar1 = *(int *)(this + 0x90);
        piVar10 = (int *)(iVar1 + 8);
        if (0xf < *(uint *)(iVar1 + 0x1c)) {
          piVar10 = (int *)*piVar10;
        }
        puVar5 = (undefined4 *)(iVar1 + 0x238);
        if (0xf < *(uint *)(iVar1 + 0x24c)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        strUsingArgs((char *)local_2c,"%s / %s",puVar5,piVar10,uVar2);
        local_8 = 0xc;
        ppppuVar9 = local_2c;
        if (0xf < local_18) {
          ppppuVar9 = (undefined4 ****)local_2c[0];
        }
        pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Source  : `!%s\n",ppppuVar9);
        local_8._0_1_ = 0xd;
        std::basic_string<>::append(pbVar15,pbVar6);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        if (0xf < local_30) {
          pnVar13 = (nothrow_t *)(local_30 + 1);
          pvVar12 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar12 = *(void **)((int)local_44[0] + -4);
            pnVar13 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_00432c82;
          }
          operator_delete(pvVar12,pnVar13);
        }
        local_8 = 0xffffffff;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          ppppuVar9 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            ppppuVar9 = (undefined4 ****)local_2c[0][-1];
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) goto LAB_00432c82;
          }
          operator_delete(ppppuVar9,pnVar13);
        }
        iVar1 = *(int *)(this + 0x90);
        if (iVar1 == 0) {
          pcVar7 = "unknown";
        }
        else {
          pcVar7 = (char *)(iVar1 + 0x80);
          if (0xf < *(uint *)(iVar1 + 0x94)) {
            pcVar7 = *(char **)pcVar7;
          }
        }
        pbVar6 = (basic_string<> *)
                 strUsingArgs((char *)local_2c,"`2ID      : `%c%s\n",(uint)(iVar1 == 0) * 8 + 0x30,
                              pcVar7);
        local_8 = 0xe;
        std::basic_string<>::append(pbVar15,pbVar6);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          ppppuVar9 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            ppppuVar9 = (undefined4 ****)local_2c[0][-1];
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) goto LAB_00432c82;
          }
          operator_delete(ppppuVar9,pnVar13);
        }
        pbVar6 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Encrypt.: `$pby-3");
        local_8 = 0xf;
      }
      else {
        std::basic_string<>::append(pbVar15,"`2Source  : `!INTERCOM\n",0x17);
        std::basic_string<>::append(pbVar15,"`2ID      : `!PASSENGER CABIN\n",0x1e);
        pbVar6 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Encrypt.: `$pby-1");
        local_8 = 0xb;
      }
LAB_00432c41:
      std::basic_string<>::append(pbVar15,pbVar6);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
LAB_00432c82:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar9,pnVar13);
      }
    }
    else {
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x1d) == '\0')) {
        puVar5 = (undefined4 *)PrivateComm::describeSource(this_00);
        local_8 = 8;
        if (0xf < (uint)puVar5[5]) {
          puVar5 = (undefined4 *)*puVar5;
        }
        pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Source  : `!%s\n",puVar5);
        local_8._0_1_ = 9;
        std::basic_string<>::append(pbVar15,pbVar6);
        local_8 = CONCAT31(local_8._1_3_,8);
        if (0xf < local_30) {
          pnVar13 = (nothrow_t *)(local_30 + 1);
          pvVar12 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar12 = *(void **)((int)local_44[0] + -4);
            pnVar13 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar12,pnVar13);
        }
        local_8 = 0xffffffff;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          ppppuVar9 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            ppppuVar9 = (undefined4 ****)local_2c[0][-1];
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppuVar9,pnVar13);
        }
        iVar1 = *(int *)(this + 0x90);
        if (iVar1 == 0) {
          pcVar7 = "unknown";
        }
        else {
          pcVar7 = (char *)(iVar1 + 0x80);
          if (0xf < *(uint *)(iVar1 + 0x94)) {
            pcVar7 = *(char **)pcVar7;
          }
        }
        pbVar6 = (basic_string<> *)
                 strUsingArgs((char *)local_2c,"`2ID      : `%c%s\n",(uint)(iVar1 == 0) * 8 + 0x30,
                              pcVar7);
        local_8 = 10;
        goto LAB_00432c41;
      }
      puVar5 = (undefined4 *)PrivateComm::describeSource(this_00);
      local_8 = 6;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Source  : `!INTERCOM\n",puVar5);
      local_8._0_1_ = 7;
      std::basic_string<>::append(pbVar15,pbVar6);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (0xf < local_30) {
        pnVar13 = (nothrow_t *)(local_30 + 1);
        pvVar12 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_44[0] + -4);
          pnVar13 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_8 = 0xffffffff;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        ppppuVar9 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar9 = (undefined4 ****)local_2c[0][-1];
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar9,pnVar13);
      }
      std::basic_string<>::append(pbVar15,"`2ID      : `!PASSENGER CABIN\n",0x1e);
    }
    if (this[0x80] == (PrivateCommsManager)0x0) {
      if (*(int *)(this + 0x8c) != 0) {
        renderCurrentConversationElement(this);
      }
    }
    else {
      std::basic_string<>::append
                ((basic_string<> *)(this + 0x38),"`0** CONNECTION TERMINATED **",0x1d);
    }
    if (!param_1) {
      puVar5 = *(undefined4 **)(this + 0x68);
      puVar5[4] = 0;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),(basic_string<> *)pbVar15);
      std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n\n",2);
      *(undefined4 *)(this + 0x18) = 0;
      if (*(char *)(*(int *)(this + 0x8c) + 0x1d) == '\0') {
        *(undefined4 *)(this + 0x10) = 0x40a00000;
      }
      goto LAB_004330f7;
    }
  }
LAB_004330fd:
  if (param_2) {
    pbVar3 = *(basic_string<> **)(this + 0x68);
    pbVar15 = (basic_string<> *)(this + 0x20);
    if (pbVar3 != pbVar15) {
      if (0xf < *(uint *)(this + 0x34)) {
        pbVar15 = *(basic_string<> **)pbVar15;
      }
      std::basic_string<>::assign(pbVar3,(char *)pbVar15,*(uint *)(this + 0x30));
      pbVar3 = *(basic_string<> **)(this + 0x68);
    }
    std::basic_string<>::append(pbVar3,"\n\n",2);
    pPVar11 = this + 0x38;
    if (0xf < *(uint *)(this + 0x4c)) {
      pPVar11 = *(PrivateCommsManager **)(this + 0x38);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),(char *)pPVar11,*(uint *)(this + 0x48));
    std::basic_string<>::append(*(basic_string<> **)(this + 0x68),"\n\n",2);
    pPVar11 = this + 0x50;
    if (0xf < *(uint *)(this + 100)) {
      pPVar11 = *(PrivateCommsManager **)(this + 0x50);
    }
    std::basic_string<>::append
              (*(basic_string<> **)(this + 0x68),(char *)pPVar11,*(uint *)(this + 0x60));
  }
LAB_0043316e:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommsManager::renderList(void)

void __thiscall PrivateCommsManager::renderList(PrivateCommsManager *this)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  nothrow_t *pnVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b44b0;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x1c), piVar1 != (int *)0x0)
     ) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,local_14);
    if (cVar2 != '\0') {
      std::basic_string<>::append((basic_string<> *)(this + 0x20),"`2Comms Targets:\n",0x11);
      iVar6 = *(int *)(this + 0x78);
      uVar9 = 0;
      iVar8 = *(int *)(this + 0x74);
      if (iVar6 - iVar8 >> 2 != 0) {
        do {
          if (uVar9 != 0) {
            std::basic_string<>::append((basic_string<> *)(this + 0x20),"\n",1);
          }
          if (uVar9 == *(uint *)(this + 0xc)) {
            uVar11 = 10;
            pcVar10 = "`2[`$*`2] ";
          }
          else {
            uVar11 = 6;
            pcVar10 = "`2[ ] ";
          }
          std::basic_string<>::append((basic_string<> *)(this + 0x20),pcVar10,uVar11);
          iVar6 = *(int *)(*(int *)(this + 0x74) + uVar9 * 4);
          if (*(char *)(iVar6 + 1) == '\0') {
            puVar4 = (undefined4 *)(iVar6 + 0x2c);
            if (0xf < *(uint *)(iVar6 + 0x40)) {
              puVar4 = (undefined4 *)*puVar4;
            }
            pcVar3 = (char *)strUsingArgs((char *)local_2c,"`%c",(int)*(char *)((int)puVar4 + 1));
            local_8 = 1;
            pcVar10 = pcVar3;
            if (0xf < *(uint *)(pcVar3 + 0x14)) {
              pcVar10 = *(char **)pcVar3;
            }
            std::basic_string<>::append
                      ((basic_string<> *)(this + 0x20),pcVar10,*(uint *)(pcVar3 + 0x10));
            local_8 = 0xffffffff;
            if (0xf < local_18) {
              pnVar7 = (nothrow_t *)(local_18 + 1);
              pvVar5 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar7) {
                pvVar5 = *(void **)((int)local_2c[0] + -4);
                pnVar7 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_004333bb;
              }
              operator_delete(pvVar5,pnVar7);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
          else {
            pcVar10 = (char *)(iVar6 + 0x2c);
            if (0xf < *(uint *)(iVar6 + 0x40)) {
              pcVar10 = *(char **)pcVar10;
            }
            pcVar3 = (char *)strUsingArgs((char *)local_44,"`%c",(int)*pcVar10);
            local_8 = 0;
            pcVar10 = pcVar3;
            if (0xf < *(uint *)(pcVar3 + 0x14)) {
              pcVar10 = *(char **)pcVar3;
            }
            std::basic_string<>::append
                      ((basic_string<> *)(this + 0x20),pcVar10,*(uint *)(pcVar3 + 0x10));
            local_8 = 0xffffffff;
            if (0xf < local_30) {
              pnVar7 = (nothrow_t *)(local_30 + 1);
              pvVar5 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar7) {
                pvVar5 = *(void **)((int)local_44[0] + -4);
                pnVar7 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
LAB_004333bb:
                  local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar5,pnVar7);
            }
          }
          iVar6 = *(int *)(*(int *)(this + 0x74) + uVar9 * 4);
          pcVar10 = (char *)(iVar6 + 0xc);
          if (0xf < *(uint *)(iVar6 + 0x20)) {
            pcVar10 = *(char **)(iVar6 + 0xc);
          }
          std::basic_string<>::append
                    ((basic_string<> *)(this + 0x20),pcVar10,*(uint *)(iVar6 + 0x1c));
          iVar6 = *(int *)(this + 0x78);
          uVar9 = uVar9 + 1;
          iVar8 = *(int *)(this + 0x74);
        } while (uVar9 < (uint)(iVar6 - iVar8 >> 2));
      }
      if ((iVar6 - iVar8 & 0xfffffffcU) == 0) {
        std::basic_string<>::append
                  ((basic_string<> *)(this + 0x20),"\n`2 ** no valid comms targets detected **",0x29
                  );
      }
      std::basic_string<>::assign((basic_string<> *)(this + 0x50),"`2[`$arrows`2/`$enter`2]",0x18);
      goto LAB_004333d0;
    }
  }
  std::basic_string<>::append
            ((basic_string<> *)(this + 0x20),"`$NO CONNECTION TO ACTIVE COMMS MODULE",0x26);
LAB_004333d0:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommsManager::renderCurrentConversationElement(void)

void __thiscall PrivateCommsManager::renderCurrentConversationElement(PrivateCommsManager *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  word *pwVar9;
  basic_string<> *pbVar10;
  char *pcVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  nothrow_t *pnVar15;
  word *this_00;
  basic_string<> *this_01;
  undefined1 auStack_2c [3];
  char local_29;
  PrivateCommsManager *local_28;
  void *local_24 [4];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)auStack_2c;
  uVar6 = 0;
  iVar13 = *(int *)(*(int *)(this + 0x8c) + 0xa0);
  uVar14 = *(int *)(*(int *)(this + 0x8c) + 0xa4) - iVar13 >> 2;
  local_28 = this;
  if (uVar14 != 0) {
    do {
      piVar1 = *(int **)(iVar13 + uVar6 * 4);
      if (*piVar1 == *(int *)(this + 0x88)) {
        if (piVar1 != (int *)0x0) {
          piVar8 = piVar1 + 0xf;
          if (0xf < (uint)piVar1[0x14]) {
            piVar8 = (int *)*piVar8;
          }
          pwVar9 = (word *)strUsingArgs((char *)local_24,"`7%s",piVar8);
          this_00 = (word *)(this + 0x38);
          if (this_00 != pwVar9) {
            word::~word(this_00);
            uVar2 = *(undefined4 *)(pwVar9 + 4);
            uVar3 = *(undefined4 *)(pwVar9 + 8);
            uVar4 = *(undefined4 *)(pwVar9 + 0xc);
            *(undefined4 *)this_00 = *(undefined4 *)pwVar9;
            *(undefined4 *)(this + 0x3c) = uVar2;
            *(undefined4 *)(this + 0x40) = uVar3;
            *(undefined4 *)(this + 0x44) = uVar4;
            uVar2 = *(undefined4 *)(pwVar9 + 0x14);
            *(undefined4 *)(this + 0x48) = *(undefined4 *)(pwVar9 + 0x10);
            *(undefined4 *)(this + 0x4c) = uVar2;
            *(undefined4 *)(pwVar9 + 0x10) = 0;
            *(undefined4 *)(pwVar9 + 0x14) = 0xf;
            *pwVar9 = (word)0x0;
          }
          if (0xf < local_10) {
            pnVar15 = (nothrow_t *)(local_10 + 1);
            pvVar12 = local_24[0];
            if ((nothrow_t *)0xfff < pnVar15) {
              pvVar12 = *(void **)((int)local_24[0] + -4);
              pnVar15 = (nothrow_t *)(local_10 + 0x24);
              if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar12,pnVar15);
          }
          this_01 = (basic_string<> *)(local_28 + 0x50);
          local_14 = 0;
          local_10 = 0xf;
          local_24[0] = (void *)((uint)local_24[0] & 0xffffff00);
          *(undefined4 *)(local_28 + 0x60) = 0;
          pbVar10 = this_01;
          if (0xf < *(uint *)(local_28 + 100)) {
            pbVar10 = *(basic_string<> **)this_01;
          }
          *pbVar10 = (basic_string<>)0x0;
          uVar6 = 0;
          iVar13 = piVar1[0x18];
          if (piVar1[0x19] - iVar13 >> 2 != 0) goto LAB_00433570;
          goto LAB_00433488;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar14);
  }
  puVar7 = (undefined4 *)(*(int *)(this + 0x8c) + 4);
  if (0xf < *(uint *)(*(int *)(this + 0x8c) + 0x18)) {
    puVar7 = (undefined4 *)*puVar7;
  }
  debugPrint("ERROR","Cannot find conversation element %d in conversation with %s",
             *(undefined4 *)(this + 0x88),puVar7);
  bVar5 = cc_assert_script_compatible("Invalid conversation element.");
  if (!bVar5) {
    cocos2d::log("Assert failed: %s","Invalid conversation element.");
  }
LAB_00433488:
  __security_check_cookie(local_c ^ (uint)auStack_2c);
  return;
LAB_00433570:
  local_29 = ConversationOption::checkReq
                       (*(ConversationOption **)(iVar13 + uVar6 * 4),
                        *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                        *(BankAccount **)(g_gameData + 0x124));
  if (((bool)local_29) || ((char)piVar1[2] == '\0')) {
    if (uVar6 != 0) {
      std::basic_string<>::append(this_01,"\n",1);
    }
    pcVar11 = "`2[ ] ";
    if (uVar6 == *(uint *)(local_28 + 0x94)) {
      pcVar11 = "`2[`$*`2] ";
    }
    std::basic_string<>::append(this_01,pcVar11,(uint)(uVar6 == *(uint *)(local_28 + 0x94)) * 4 + 6)
    ;
    if (local_29 == '\0') {
      pcVar11 = "`8";
LAB_00433625:
      std::basic_string<>::append(this_01,pcVar11,2);
    }
    else if ((*(int *)(g_gameData + 0xcc) != 0) &&
            (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
      if (*(float *)(local_28 + 8) < 0.7) {
        pcVar11 = "`%";
      }
      else {
        pcVar11 = "`!";
      }
      goto LAB_00433625;
    }
    iVar13 = *(int *)(piVar1[0x18] + uVar6 * 4);
    pcVar11 = (char *)(iVar13 + 0x3c);
    if (0xf < *(uint *)(iVar13 + 0x50)) {
      pcVar11 = *(char **)(iVar13 + 0x3c);
    }
    std::basic_string<>::append(this_01,pcVar11,*(uint *)(iVar13 + 0x4c));
  }
  uVar6 = uVar6 + 1;
  iVar13 = piVar1[0x18];
  if ((uint)(piVar1[0x19] - iVar13 >> 2) <= uVar6) {
    __security_check_cookie(local_c ^ (uint)auStack_2c);
    return;
  }
  goto LAB_00433570;
}


// public: bool __thiscall PrivateCommsManager::hasValidOptionInCurrentElement(void)

bool __thiscall PrivateCommsManager::hasValidOptionInCurrentElement(PrivateCommsManager *this)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 0x8c);
  if (iVar5 != 0) {
    uVar3 = 0;
    uVar4 = *(int *)(iVar5 + 0xa4) - *(int *)(iVar5 + 0xa0) >> 2;
    if (uVar4 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar5 + 0xa0) + uVar3 * 4);
        if (*piVar1 == *(int *)(this + 0x88)) {
          if (piVar1 == (int *)0x0) {
            return false;
          }
          uVar3 = 0;
          iVar5 = piVar1[0x18];
          if (piVar1[0x19] - iVar5 >> 2 == 0) {
            return false;
          }
          do {
            bVar2 = ConversationOption::checkReq
                              (*(ConversationOption **)(iVar5 + uVar3 * 4),
                               *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                               *(BankAccount **)(g_gameData + 0x124));
            if (bVar2) {
              return true;
            }
            uVar3 = uVar3 + 1;
            iVar5 = piVar1[0x18];
          } while (uVar3 < (uint)(piVar1[0x19] - iVar5 >> 2));
          return false;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  return false;
}


// public: bool __thiscall PrivateCommsManager::regenerateList(void)

bool __thiscall PrivateCommsManager::regenerateList(PrivateCommsManager *this)

{
  int iVar1;
  SpaceStation *pSVar2;
  AnimationFrames **ppAVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  PrivateComm *pPVar7;
  basic_string<> *pbVar8;
  undefined4 *puVar9;
  char *pcVar10;
  AnimationFrames *pAVar11;
  int iVar12;
  uint uVar13;
  PrivateCommsManager *this_00;
  basic_string<> *pbVar14;
  int *piVar15;
  void *pvVar16;
  char *pcVar17;
  PrivateCommsManager *pPVar18;
  int *piVar19;
  nothrow_t *pnVar20;
  AnimationFrames *pAVar21;
  GameData *pGVar22;
  uint uVar23;
  uint unaff_EDI;
  PrivateCommsManager *pPVar24;
  AnimationFrames *local_80;
  PrivateCommsManager *local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005b4500;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  puVar9 = *(undefined4 **)(this + 0x74);
  local_7c = this + 0x74;
  pAVar21 = (AnimationFrames *)0x0;
  pAVar11 = (AnimationFrames *)((*(int *)(this + 0x78) - (int)puVar9) + 3U >> 2);
  if (*(undefined4 **)(this + 0x78) < puVar9) {
    pAVar11 = (AnimationFrames *)0x0;
  }
  local_80 = pAVar11;
  local_14 = pcVar6;
  if (pAVar11 != (AnimationFrames *)0x0) {
    do {
      pPVar7 = (PrivateComm *)*puVar9;
      if (pPVar7 != (PrivateComm *)0x0) {
        PrivateComm::~PrivateComm(pPVar7);
        operator_delete(pPVar7,(nothrow_t *)0x50);
        pAVar11 = local_80;
      }
      pAVar21 = pAVar21 + 1;
      puVar9 = puVar9 + 1;
    } while (pAVar21 != pAVar11);
  }
  pGVar22 = g_gameData;
  *(int *)(local_7c + 4) = *(int *)local_7c;
  local_78 = 0;
  iVar1 = *(int *)(pGVar22 + 0xd8);
  iVar12 = *(int *)(iVar1 + 0xcc);
  pPVar18 = local_7c;
  if (*(int *)(iVar1 + 0xd0) - iVar12 >> 2 != 0) {
    do {
      pSVar2 = *(SpaceStation **)(iVar12 + local_78 * 4);
      if (((*(int *)(*(int *)(pSVar2 + 0x254) + 0x158) == 1) ||
          (*(int *)(*(int *)(pSVar2 + 0x254) + 0x158) == 3)) &&
         ((*(int *)(pSVar2 + 0x40) == 0 || (*(char *)(*(int *)(pSVar2 + 0x40) + 0x34) != '\0')))) {
        local_80 = *(AnimationFrames **)pPVar18;
        uVar13 = 0;
        uVar23 = *(int *)(pPVar18 + 4) - (int)local_80 >> 2;
        pAVar11 = local_80;
        if (uVar23 != 0) {
          do {
            if (*(SpaceStation **)(*(int *)pAVar11 + 8) == pSVar2) {
              if (*(int *)(local_80 + uVar13 * 4) != 0) {
                *(undefined1 *)(*(int *)(local_80 + uVar13 * 4) + 1) = 1;
                pPVar18 = local_7c;
                goto LAB_00433a3c;
              }
              break;
            }
            uVar13 = uVar13 + 1;
            pAVar11 = pAVar11 + 4;
          } while (uVar13 < uVar23);
        }
        pPVar7 = operator_new(0x50);
        pbVar8 = (basic_string<> *)(pPVar7 + 0xc);
        *(undefined2 *)pPVar7 = 0;
        *(undefined4 *)(pPVar7 + 4) = 0xffffffff;
        *(undefined4 *)(pPVar7 + 8) = 0;
        *(undefined4 *)(pPVar7 + 0x1c) = 0;
        *(undefined4 *)(pPVar7 + 0x20) = 0xf;
        *pbVar8 = (basic_string<>)0x0;
        *(undefined4 *)(pPVar7 + 0x24) = 0;
        *(undefined4 *)(pPVar7 + 0x28) = 0;
        *(undefined4 *)(pPVar7 + 0x3c) = 0;
        *(undefined4 *)(pPVar7 + 0x40) = 0xf;
        pPVar7[0x2c] = (PrivateComm)0x0;
        *(undefined4 *)(pPVar7 + 0x44) = 0;
        *(undefined4 *)(pPVar7 + 0x48) = 0;
        *(undefined4 *)(pPVar7 + 0x4c) = 0;
        local_80 = (AnimationFrames *)pPVar7;
        generateSpaceStationComms(this_00,pPVar7,pSVar2);
        pbVar14 = (basic_string<> *)(pSVar2 + 8);
        if (pbVar8 != pbVar14) {
          if (0xf < *(uint *)(pSVar2 + 0x1c)) {
            pbVar14 = *(basic_string<> **)pbVar14;
          }
          std::basic_string<>::assign(pbVar8,(char *)pbVar14,*(uint *)(pSVar2 + 0x18));
        }
        *(undefined4 *)(pPVar7 + 4) = *(undefined4 *)(pSVar2 + 0x250);
        *(SpaceStation **)(pPVar7 + 8) = pSVar2;
        pPVar7[1] = (PrivateComm)0x1;
        std::basic_string<>::assign((basic_string<> *)(pPVar7 + 0x2c),"%7",2);
        ppAVar3 = *(AnimationFrames ***)(local_7c + 4);
        if (*(AnimationFrames ***)(local_7c + 8) == ppAVar3) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)local_7c,ppAVar3,&local_80);
          pPVar7 = (PrivateComm *)local_80;
        }
        else {
          *ppAVar3 = (AnimationFrames *)pPVar7;
          *(int *)(local_7c + 4) = *(int *)(local_7c + 4) + 4;
        }
        pGVar22 = g_gameData;
        pPVar18 = local_7c;
        if ((*(int *)(g_gameData + 0xcc) != 0) &&
           (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
          *(AnimationFrames *)(pPVar7 + 1) = (AnimationFrames)0x0;
        }
      }
LAB_00433a3c:
      local_78 = local_78 + 1;
      iVar12 = *(int *)(iVar1 + 0xcc);
    } while (local_78 < (uint)(*(int *)(iVar1 + 0xd0) - iVar12 >> 2));
  }
  piVar15 = (int *)(*(int *)(pGVar22 + 0xd0) + 0x214);
  local_78 = 0;
  pPVar24 = local_7c;
  if (*(int *)(*(int *)(pGVar22 + 0xd0) + 0x218) - *piVar15 >> 2 != 0) {
    do {
      iVar1 = *(int *)(*piVar15 + local_78 * 4);
      pPVar24 = local_7c;
      if (((*(int *)(iVar1 + 0xe0) == 0) && (iVar1 = *(int *)(iVar1 + 0x130), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 0)) {
        piVar15 = *(int **)pPVar18;
        uVar13 = 0;
        uVar23 = *(int *)(pPVar18 + 4) - (int)piVar15 >> 2;
        piVar19 = piVar15;
        if (uVar23 != 0) {
          do {
            if ((*(int *)(*piVar19 + 8) == iVar1) && (iVar1 != 0)) {
              pAVar11 = (AnimationFrames *)piVar15[uVar13];
              goto LAB_00433ae1;
            }
            uVar13 = uVar13 + 1;
            piVar19 = piVar19 + 1;
          } while (uVar13 < uVar23);
        }
        pAVar11 = (AnimationFrames *)0x0;
LAB_00433ae1:
        if (pAVar11 == (AnimationFrames *)0x0) {
          pAVar11 = operator_new(0x50);
          *(undefined2 *)pAVar11 = 0;
          *(int *)(pAVar11 + 4) = -1;
          *(int *)(pAVar11 + 8) = 0;
          *(int *)(pAVar11 + 0x1c) = 0;
          *(int *)(pAVar11 + 0x20) = 0xf;
          pAVar11[0xc] = (AnimationFrames)0x0;
          *(int *)(pAVar11 + 0x24) = 0;
          *(int *)(pAVar11 + 0x28) = 0;
          *(int *)(pAVar11 + 0x3c) = 0;
          *(int *)(pAVar11 + 0x40) = 0xf;
          *(basic_string<> *)(pAVar11 + 0x2c) = (basic_string<>)0x0;
          *(int *)(pAVar11 + 0x44) = 0;
          *(int *)(pAVar11 + 0x48) = 0;
          *(int *)(pAVar11 + 0x4c) = 0;
          local_80 = pAVar11;
          std::basic_string<>::assign((basic_string<> *)(pAVar11 + 0x2c),"!8",2);
          pPVar24 = local_7c;
          pGVar22 = g_gameData;
          iVar1 = *(int *)(local_78 * 4 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x214));
          if (*(int *)(iVar1 + 0x130) != 0) {
            *(int *)(pAVar11 + 4) = *(int *)(iVar1 + 0x124);
            *(int *)(pAVar11 + 8) =
                 *(int *)(*(int *)(local_78 * 4 + *(int *)(*(int *)(pGVar22 + 0xd0) + 0x214)) +
                         0x130);
          }
          ppAVar3 = *(AnimationFrames ***)(local_7c + 4);
          if (*(AnimationFrames ***)(local_7c + 8) == ppAVar3) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)local_7c,ppAVar3,&local_80);
            pGVar22 = g_gameData;
            pAVar11 = local_80;
          }
          else {
            *ppAVar3 = pAVar11;
            *(int *)(local_7c + 4) = *(int *)(local_7c + 4) + 4;
          }
        }
        iVar1 = *(int *)(*(int *)(*(int *)(pGVar22 + 0xd0) + 0x214) + local_78 * 4);
        pbVar8 = (basic_string<> *)(iVar1 + 0x48);
        if ((basic_string<> *)(pAVar11 + 0xc) != pbVar8) {
          if (0xf < *(uint *)(iVar1 + 0x5c)) {
            pbVar8 = *(basic_string<> **)pbVar8;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pAVar11 + 0xc),(char *)pbVar8,*(uint *)(iVar1 + 0x58));
          pGVar22 = g_gameData;
        }
        iVar1 = *(int *)(pGVar22 + 0xd0);
        bVar4 = std::_Traits_equal<>("Unknown",7,pcVar6,unaff_EDI);
        if (bVar4) {
          bVar4 = std::_Traits_equal<>("Unknown",7,pcVar6,unaff_EDI);
          if (bVar4) {
            puVar9 = (undefined4 *)
                     SensorData::describe
                               (*(SensorData **)(local_78 * 4 + *(int *)(iVar1 + 0x214)),
                                SUB41(local_44,0),'\0');
            local_8 = 0;
            if (0xf < (uint)puVar9[5]) {
              puVar9 = (undefined4 *)*puVar9;
            }
            pcVar10 = (char *)strUsingArgs((char *)local_2c," (%s)",puVar9);
            local_8._0_1_ = 1;
            pcVar17 = pcVar10;
            if (0xf < *(uint *)(pcVar10 + 0x14)) {
              pcVar17 = *(char **)pcVar10;
            }
            std::basic_string<>::append
                      ((basic_string<> *)(pAVar11 + 0xc),pcVar17,*(uint *)(pcVar10 + 0x10));
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pnVar20 = (nothrow_t *)(local_18 + 1);
              pvVar16 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar20) {
                pvVar16 = *(void **)((int)local_2c[0] + -4);
                pnVar20 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16))) goto LAB_00433f11;
              }
              operator_delete(pvVar16,pnVar20);
            }
            local_8 = -1;
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            if (0xf < local_30) {
              pnVar20 = (nothrow_t *)(local_30 + 1);
              pvVar16 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar20) {
                pvVar16 = *(void **)((int)local_44[0] + -4);
                pnVar20 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar16))) {
LAB_00433f11:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar16,pnVar20);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
          else {
            iVar1 = *(int *)(*(int *)(iVar1 + 0x214) + local_78 * 4);
            puVar9 = (undefined4 *)(iVar1 + 0x60);
            if (0xf < *(uint *)(iVar1 + 0x74)) {
              puVar9 = (undefined4 *)*puVar9;
            }
            pcVar10 = (char *)strUsingArgs((char *)local_5c," (%s)",puVar9);
            local_8 = 2;
            pcVar17 = pcVar10;
            if (0xf < *(uint *)(pcVar10 + 0x14)) {
              pcVar17 = *(char **)pcVar10;
            }
            std::basic_string<>::append
                      ((basic_string<> *)(pAVar11 + 0xc),pcVar17,*(uint *)(pcVar10 + 0x10));
            local_8 = -1;
            if (0xf < local_48) {
              pnVar20 = (nothrow_t *)(local_48 + 1);
              pvVar16 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar20) {
                pvVar16 = *(void **)((int)local_5c[0] + -4);
                pnVar20 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar16))) goto LAB_00433f11;
              }
              operator_delete(pvVar16,pnVar20);
            }
            local_4c = 0;
            local_48 = 0xf;
            local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          }
        }
        else {
          iVar1 = *(int *)(*(int *)(iVar1 + 0x214) + local_78 * 4);
          puVar9 = (undefined4 *)(iVar1 + 0x60);
          if (0xf < *(uint *)(iVar1 + 0x74)) {
            puVar9 = (undefined4 *)*puVar9;
          }
          pcVar10 = (char *)strUsingArgs((char *)local_74," (%s)",puVar9);
          local_8 = 3;
          pcVar17 = pcVar10;
          if (0xf < *(uint *)(pcVar10 + 0x14)) {
            pcVar17 = *(char **)pcVar10;
          }
          std::basic_string<>::append
                    ((basic_string<> *)(pAVar11 + 0xc),pcVar17,*(uint *)(pcVar10 + 0x10));
          local_8 = -1;
          if (0xf < local_60) {
            pnVar20 = (nothrow_t *)(local_60 + 1);
            pvVar16 = local_74[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              pvVar16 = *(void **)((int)local_74[0] + -4);
              pnVar20 = (nothrow_t *)(local_60 + 0x24);
              if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar16))) goto LAB_00433f11;
            }
            operator_delete(pvVar16,pnVar20);
          }
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        }
        pGVar22 = g_gameData;
        pAVar11[1] = (AnimationFrames)
                     (*(float *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x214) +
                                         local_78 * 4) + 0x40) <= 0.5);
      }
      piVar15 = (int *)(*(int *)(pGVar22 + 0xd0) + 0x214);
      local_78 = local_78 + 1;
      pPVar18 = local_7c;
    } while (local_78 < (uint)(*(int *)(*(int *)(pGVar22 + 0xd0) + 0x218) - *piVar15 >> 2));
  }
  uVar13 = *(int *)(pPVar24 + 4) - *(int *)pPVar24 >> 2;
  if (uVar13 <= *(uint *)(this + 0xc)) {
    *(uint *)(this + 0xc) = uVar13 - 1;
  }
  ExceptionList = local_10;
  uVar5 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// public: void __thiscall PrivateCommsManager::generateSpaceStationComms(class PrivateComm *,class
// SpaceStation *)

void __thiscall
PrivateCommsManager::generateSpaceStationComms
          (PrivateCommsManager *this,PrivateComm *param_1,SpaceStation *param_2)

{
  PrivateCommElement *pPVar1;
  PrivateCommElement *pPVar2;
  PrivateCommOption *pPVar3;
  int iVar4;
  word *pwVar5;
  DockingRequest *pDVar6;
  char *pcVar7;
  PrivateCommOption *pPVar8;
  char ****ppppcVar9;
  char *pcVar10;
  nothrow_t *pnVar11;
  basic_string<> *pbVar12;
  vector<> *this_00;
  basic_string<> local_2fc [12];
  undefined4 uStack_2f0;
  basic_string<> local_2e4 [4];
  undefined4 uStack_2e0;
  PrivateCommElement *local_2bc;
  PrivateCommElement *local_2b8;
  int local_2b0;
  int local_2ac;
  SpaceStation *local_2a8;
  PrivateCommElement *local_2a4;
  vector<> *local_2a0;
  uint local_29c;
  undefined1 *local_298;
  PrivateCommElement *local_294;
  uint local_290;
  PrivateCommElement *local_28c;
  PrivateCommOption local_288 [168];
  undefined4 local_1e0;
  undefined4 local_1dc;
  basic_string<> local_1c0 [24];
  undefined4 local_1a8;
  PrivateCommOption local_138 [172];
  char ***local_8c [4];
  uint local_7c;
  uint local_78;
  char ***local_74 [4];
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  char **local_54;
  char **ppcStack_50;
  char **ppcStack_4c;
  char **ppcStack_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  PrivateCommOption *pPStack_30;
  PrivateCommOption *local_2c;
  PrivateCommOption *local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005b47ea;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_294 = (PrivateCommElement *)param_1;
  local_2a8 = param_2;
  local_29c = 0;
  PrivateComm::reset(param_1);
  *(SpaceStation **)(param_1 + 8) = param_2;
  local_5c = 0xffffffff;
  local_58 = -1;
  local_44 = 0xf00000000;
  local_54 = (char **)((uint)local_54 & 0xffffff00);
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  pPStack_30 = (PrivateCommOption *)0x0;
  local_2c = (PrivateCommOption *)0x0;
  local_28 = (PrivateCommOption *)0x0;
  local_14._0_1_ = 0;
  local_14._1_3_ = 0;
  pwVar5 = (word *)strUsingArgs((char *)local_74);
  if ((word *)&local_54 != pwVar5) {
    word::~word((word *)&local_54);
    local_54 = *(char ***)pwVar5;
    ppcStack_50 = *(char ***)(pwVar5 + 4);
    ppcStack_4c = *(char ***)(pwVar5 + 8);
    ppcStack_48 = *(char ***)(pwVar5 + 0xc);
    local_44 = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_60) {
    pnVar11 = (nothrow_t *)(local_60 + 1);
    ppppcVar9 = (char ****)local_74[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_74[0][-1];
      pnVar11 = (nothrow_t *)(local_60 + 0x24);
      if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9))) {
LAB_0043405c:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (char ***)((uint)local_74[0] & 0xffffff00);
  if ((*(int *)(param_2 + 0x3dc) == 0) ||
     ((pDVar6 = SpaceStation::getDockingRequest(param_2,*(Ship **)(g_gameData + 0xd0)),
      pDVar6 != (DockingRequest *)0x0 && (*(int *)(pDVar6 + 8) == 0)))) {
    std::basic_string<>::append
              ((basic_string<> *)&local_54,"\n\n`#You currently have docking clearance.",0x29);
  }
  if ((*(int *)(param_2 + 0x390) != 0) && (0 < (int)*(float *)(*(int *)(param_2 + 0x390) + 0xd0))) {
    pcVar7 = (char *)strUsingArgs((char *)local_8c);
    local_14._0_1_ = 1;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_54,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_14._0_1_ = 0;
    if (0xf < local_78) {
      pnVar11 = (nothrow_t *)(local_78 + 1);
      ppppcVar9 = (char ****)local_8c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        ppppcVar9 = (char ****)local_8c[0][-1];
        pnVar11 = (nothrow_t *)(local_78 + 0x24);
        if ((char *)0x1f < (char *)((int)local_8c[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar9,pnVar11);
    }
    local_7c = 0;
    local_78 = 0xf;
    local_8c[0] = (char ***)((uint)local_8c[0] & 0xffffff00);
  }
  if ((0 < *(int *)(param_2 + 0x3e4)) &&
     (*(char *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x34) == '\0')) {
    pcVar7 = (char *)strUsingArgs((char *)local_74);
    local_14._0_1_ = 2;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_54,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_14._0_1_ = 0;
    if (0xf < local_60) {
      pnVar11 = (nothrow_t *)(local_60 + 1);
      ppppcVar9 = (char ****)local_74[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        ppppcVar9 = (char ****)local_74[0][-1];
        pnVar11 = (nothrow_t *)(local_60 + 0x24);
        if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar9,pnVar11);
    }
  }
  local_28c = (PrivateCommElement *)local_2e4;
  local_58 = 0;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x4341f7;
  std::basic_string<>::assign(local_2e4,"NEEDS_DOCKING_PERMISSION",0x18);
  local_14._0_1_ = 3;
  strUsingArgs((char *)local_2fc,"Request Docking Permission (`$%dc`7)",
               *(undefined4 *)(param_2 + 0x3dc));
  local_14._0_1_ = 0;
  PrivateCommOption::PrivateCommOption((PrivateCommOption *)&local_1e0,2,1);
  local_14 = CONCAT31(local_14._1_3_,4);
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x43424d;
  std::basic_string<>::assign(local_2e4,"REQUEST_DOCKING_PERMISSION",0x1a);
  PrivateCommOption::setActionFunction((PrivateCommOption *)&local_1e0);
  local_1dc = 4;
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)&pPStack_30,local_2c,(PrivateCommOption *)&local_1e0);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,(PrivateCommOption *)&local_1e0);
    local_2c = local_2c + 0xa8;
  }
  local_1a8 = 2;
  local_1e0 = 2;
  std::basic_string<>::assign(local_1c0,"Cancel Docking Permission",0x19);
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x4342d2;
  std::basic_string<>::assign(local_2e4,"HAS_DOCKING_PERMISSION",0x16);
  PrivateCommOption::setExistFunction((PrivateCommOption *)&local_1e0);
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x4342ff;
  std::basic_string<>::assign(local_2e4,"RESCIND_DOCKING_PERMISSION",0x1a);
  PrivateCommOption::setActionFunction((PrivateCommOption *)&local_1e0);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)&pPStack_30,local_2c,(PrivateCommOption *)&local_1e0);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,(PrivateCommOption *)&local_1e0);
    local_2c = local_2c + 0xa8;
  }
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x43435a;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 5;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"View Current Goods for Sale",0x1b);
  local_14._0_1_ = 4;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,3);
  local_14 = CONCAT31(local_14._1_3_,6);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 4;
  PrivateCommOption::~PrivateCommOption(local_138);
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x4343ee;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 7;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"View Current Buy Prices",0x17);
  local_14._0_1_ = 4;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,4);
  local_14 = CONCAT31(local_14._1_3_,8);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 4;
  PrivateCommOption::~PrivateCommOption(local_138);
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x434482;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 9;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"View Current Contracts",0x16);
  local_14._0_1_ = 4;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,5);
  local_14 = CONCAT31(local_14._1_3_,10);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 4;
  PrivateCommOption::~PrivateCommOption(local_138);
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x434516;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0xb;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"View Current Passengers",0x17);
  local_14._0_1_ = 4;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,6);
  local_14 = CONCAT31(local_14._1_3_,0xc);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 4;
  PrivateCommOption::~PrivateCommOption(local_138);
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x4345aa;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0xd;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"Disconnect",10);
  local_14._0_1_ = 4;
  PrivateCommOption::PrivateCommOption(local_288,1,6);
  local_14 = CONCAT31(local_14._1_3_,0xe);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,local_288);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,local_288);
    local_2c = local_2c + 0xa8;
  }
  pPVar2 = local_294;
  this_00 = (vector<> *)(local_294 + 0x44);
  pPVar1 = *(PrivateCommElement **)(local_294 + 0x48);
  local_2a0 = this_00;
  if (*(PrivateCommElement **)(local_294 + 0x4c) == pPVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
  }
  else {
    *(undefined4 *)pPVar1 = local_5c;
    *(int *)(pPVar1 + 4) = local_58;
    local_28c = pPVar1;
    std::basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
    local_14._0_1_ = 0xf;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
    local_14._0_1_ = 0x10;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
    local_14 = CONCAT31(local_14._1_3_,0xe);
    *(int *)(pPVar2 + 0x48) = *(int *)(pPVar2 + 0x48) + 0x38;
  }
  uStack_2e0 = 0x4346a0;
  pwVar5 = (word *)strUsingArgs((char *)local_74);
  if ((word *)&local_54 != pwVar5) {
    word::~word((word *)&local_54);
    local_54 = *(char ***)pwVar5;
    ppcStack_50 = *(char ***)(pwVar5 + 4);
    ppcStack_4c = *(char ***)(pwVar5 + 8);
    ppcStack_48 = *(char ***)(pwVar5 + 0xc);
    local_44 = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_60) {
    pnVar11 = (nothrow_t *)(local_60 + 1);
    ppppcVar9 = (char ****)local_74[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_74[0][-1];
      pnVar11 = (nothrow_t *)(local_60 + 0x24);
      if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  pPVar3 = local_2c;
  local_58 = 1;
  for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(pPVar8);
    this_00 = local_2a0;
  }
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x434765;
  local_2c = pPStack_30;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0x11;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"back",4);
  local_14._0_1_ = 0xe;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
  local_14 = CONCAT31(local_14._1_3_,0x12);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 0xe;
  PrivateCommOption::~PrivateCommOption(local_138);
  pPVar1 = *(PrivateCommElement **)(this_00 + 4);
  if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
  }
  else {
    *(undefined4 *)pPVar1 = local_5c;
    *(int *)(pPVar1 + 4) = local_58;
    local_28c = pPVar1;
    std::basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
    local_14._0_1_ = 0x13;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
    local_14._0_1_ = 0x14;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
    local_14._0_1_ = 0xe;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
  }
  uStack_2e0 = 0x434863;
  pwVar5 = (word *)strUsingArgs((char *)local_74);
  if ((word *)&local_54 != pwVar5) {
    word::~word((word *)&local_54);
    local_54 = *(char ***)pwVar5;
    ppcStack_50 = *(char ***)(pwVar5 + 4);
    ppcStack_4c = *(char ***)(pwVar5 + 8);
    ppcStack_48 = *(char ***)(pwVar5 + 0xc);
    local_44 = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_60) {
    pnVar11 = (nothrow_t *)(local_60 + 1);
    ppppcVar9 = (char ****)local_74[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_74[0][-1];
      pnVar11 = (nothrow_t *)(local_60 + 0x24);
      if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  pPVar3 = local_2c;
  local_58 = 2;
  for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(pPVar8);
    this_00 = local_2a0;
  }
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x434926;
  local_2c = pPStack_30;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0x15;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"back",4);
  local_14._0_1_ = 0xe;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
  local_14 = CONCAT31(local_14._1_3_,0x16);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 0xe;
  PrivateCommOption::~PrivateCommOption(local_138);
  pPVar1 = *(PrivateCommElement **)(this_00 + 4);
  if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
  }
  else {
    *(undefined4 *)pPVar1 = local_5c;
    *(int *)(pPVar1 + 4) = local_58;
    local_28c = pPVar1;
    std::basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
    local_14._0_1_ = 0x17;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
    local_14._0_1_ = 0x18;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
    local_14._0_1_ = 0xe;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
  }
  if (*(TradeLocation **)(local_2a8 + 0x398) == (TradeLocation *)0x0) {
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (char ***)((uint)local_74[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_74,"**no commerce available**",0x19);
    ppppcVar9 = local_74;
    local_290 = 2;
    local_29c = 2;
LAB_00434a57:
    word::~word((word *)&local_54);
    local_54 = (char **)*ppppcVar9;
    ppcStack_50 = (char **)ppppcVar9[1];
    ppcStack_4c = (char **)ppppcVar9[2];
    ppcStack_48 = (char **)ppppcVar9[3];
    local_44 = *(undefined8 *)(ppppcVar9 + 4);
    ppppcVar9[4] = (char ***)0x0;
    ppppcVar9[5] = (char ***)0xf;
    *(undefined1 *)ppppcVar9 = 0;
  }
  else {
    ppppcVar9 = (char ****)
                TradeLocation::getCurrentTradeSummary(*(TradeLocation **)(local_2a8 + 0x398));
    local_290 = 1;
    local_29c = 1;
    if ((char ****)&local_54 != ppppcVar9) goto LAB_00434a57;
  }
  if ((local_290 & 2) != 0) {
    local_29c = local_290 & 0xfffffffd;
    local_290 = local_29c;
    word::~word((word *)local_74);
  }
  local_14 = 0xe;
  if ((local_290 & 1) != 0) {
    local_29c = local_290 & 0xfffffffe;
    local_290 = local_29c;
    word::~word((word *)local_8c);
  }
  pPVar3 = local_2c;
  local_58 = 3;
  for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(pPVar8);
    this_00 = local_2a0;
  }
  local_28c = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x434b25;
  local_2c = pPStack_30;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0x1a;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"back",4);
  local_14._0_1_ = 0xe;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
  local_14 = CONCAT31(local_14._1_3_,0x1b);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 0xe;
  PrivateCommOption::~PrivateCommOption(local_138);
  pPVar1 = *(PrivateCommElement **)(this_00 + 4);
  if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
  }
  else {
    *(undefined4 *)pPVar1 = local_5c;
    *(int *)(pPVar1 + 4) = local_58;
    local_28c = pPVar1;
    std::basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
    local_14._0_1_ = 0x1c;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
    local_14._0_1_ = 0x1d;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
    local_14._0_1_ = 0xe;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
  }
  if (*(TradeLocation **)(local_2a8 + 0x398) == (TradeLocation *)0x0) {
    std::basic_string<>::assign((basic_string<> *)&local_54,"**no commerce available**",0x19);
    pPVar3 = local_2c;
    local_58 = 4;
    for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
      PrivateCommOption::~PrivateCommOption(pPVar8);
      this_00 = local_2a0;
    }
    local_28c = (PrivateCommElement *)local_2e4;
    local_2e4[0] = (basic_string<>)0x0;
    uStack_2f0 = 0x434c67;
    local_2c = pPStack_30;
    std::basic_string<>::assign(local_2e4,"",0);
    local_14._0_1_ = 0x1e;
    local_2fc[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_2fc,"back",4);
    local_14._0_1_ = 0xe;
    pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
    local_14 = CONCAT31(local_14._1_3_,0x1f);
    if (local_28 == local_2c) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
    }
    else {
      PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
      local_2c = local_2c + 0xa8;
    }
    local_14._0_1_ = 0xe;
    PrivateCommOption::~PrivateCommOption(local_138);
    pPVar1 = *(PrivateCommElement **)(this_00 + 4);
    if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
      std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
    }
    else {
      *(undefined4 *)pPVar1 = local_5c;
      *(int *)(pPVar1 + 4) = local_58;
      local_28c = pPVar1;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
      local_14._0_1_ = 0x20;
      std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
      local_14._0_1_ = 0x21;
      std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
      local_14._0_1_ = 0xe;
      *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
    }
  }
  else {
    TradeLocation::getCurrentBuyPrices(*(TradeLocation **)(local_2a8 + 0x398));
    local_14._0_1_ = 0x22;
    local_2b0 = 0;
    local_2ac = 4;
    local_7c = 0;
    local_78 = 0xf;
    local_8c[0] = (char ***)((uint)local_8c[0] & 0xffffff00);
    std::basic_string<>::assign
              ((basic_string<> *)local_8c,"`7Current estimated buy prices:\n\n",0x21);
    local_14._0_1_ = 0x23;
    local_294 = local_2bc;
    local_28c = local_2b8;
    pbVar12 = (basic_string<> *)local_2bc;
    if (local_2bc != local_2b8) {
      do {
        local_294 = (PrivateCommElement *)pbVar12;
        std::basic_string<>::basic_string<>((basic_string<> *)local_74,pbVar12);
        local_14._0_1_ = 0x24;
        ppppcVar9 = local_74;
        if (0xf < local_60) {
          ppppcVar9 = (char ****)local_74[0];
        }
        std::basic_string<>::append((basic_string<> *)local_8c,(char *)ppppcVar9,local_64);
        std::basic_string<>::append((basic_string<> *)local_8c,"\n",1);
        local_2b0 = local_2b0 + 1;
        if (0xb < local_2b0) {
          local_2b0 = 0;
          ppppcVar9 = local_8c;
          if (0xf < local_78) {
            ppppcVar9 = (char ****)local_8c[0];
          }
          std::basic_string<>::assign((basic_string<> *)&local_54,(char *)ppppcVar9,local_7c);
          pPVar3 = local_2c;
          iVar4 = local_2ac + 10;
          local_58 = local_2ac;
          for (pPVar8 = pPStack_30; local_2ac = iVar4, pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
            PrivateCommOption::~PrivateCommOption(pPVar8);
            iVar4 = local_2ac;
            this_00 = local_2a0;
          }
          local_298 = local_2e4;
          local_2e4[0] = (basic_string<>)0x0;
          uStack_2f0 = 0x434e6b;
          local_2c = pPStack_30;
          std::basic_string<>::assign(local_2e4,"",0);
          local_14._0_1_ = 0x25;
          local_2fc[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_2fc,"next",4);
          local_14._0_1_ = 0x24;
          pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,local_2ac);
          local_14 = CONCAT31(local_14._1_3_,0x26);
          if (local_28 == local_2c) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
          }
          else {
            PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
            local_2c = local_2c + 0xa8;
          }
          local_14._0_1_ = 0x24;
          PrivateCommOption::~PrivateCommOption(local_138);
          pPVar1 = *(PrivateCommElement **)(this_00 + 4);
          if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
            std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
          }
          else {
            *(undefined4 *)pPVar1 = local_5c;
            *(int *)(pPVar1 + 4) = local_58;
            local_2a4 = pPVar1;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
            local_14._0_1_ = 0x27;
            std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
            local_14._0_1_ = 0x28;
            std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
            *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
          }
          ppppcVar9 = local_8c;
          if (0xf < local_78) {
            ppppcVar9 = (char ****)local_8c[0];
          }
          local_7c = 0;
          *(char *)ppppcVar9 = '\0';
          pbVar12 = (basic_string<> *)local_294;
        }
        local_14._0_1_ = 0x23;
        if (0xf < local_60) {
          pnVar11 = (nothrow_t *)(local_60 + 1);
          ppppcVar9 = (char ****)local_74[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            ppppcVar9 = (char ****)local_74[0][-1];
            pnVar11 = (nothrow_t *)(local_60 + 0x24);
            if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9)))
            goto LAB_0043405c;
          }
          operator_delete(ppppcVar9,pnVar11);
        }
        local_294 = (PrivateCommElement *)(pbVar12 + 0x18);
        pbVar12 = (basic_string<> *)local_294;
      } while (local_294 != local_28c);
    }
    if (local_7c != 0) {
      ppppcVar9 = local_8c;
      if (0xf < local_78) {
        ppppcVar9 = (char ****)local_8c[0];
      }
      std::basic_string<>::assign((basic_string<> *)&local_54,(char *)ppppcVar9,local_7c);
      pPVar3 = local_2c;
      local_58 = local_2ac;
      for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
        PrivateCommOption::~PrivateCommOption(pPVar8);
        this_00 = local_2a0;
      }
      local_2a4 = (PrivateCommElement *)local_2e4;
      local_2e4[0] = (basic_string<>)0x0;
      uStack_2f0 = 0x435015;
      local_2c = pPStack_30;
      std::basic_string<>::assign(local_2e4,"",0);
      local_14._0_1_ = 0x29;
      local_2fc[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_2fc,"done",4);
      local_14._0_1_ = 0x23;
      pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
      local_14 = CONCAT31(local_14._1_3_,0x2a);
      if (local_28 == local_2c) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
      }
      else {
        PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
        local_2c = local_2c + 0xa8;
      }
      local_14._0_1_ = 0x23;
      PrivateCommOption::~PrivateCommOption(local_138);
      pPVar1 = *(PrivateCommElement **)(this_00 + 4);
      if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
        std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
      }
      else {
        *(undefined4 *)pPVar1 = local_5c;
        *(int *)(pPVar1 + 4) = local_58;
        local_2a4 = pPVar1;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
        local_14._0_1_ = 0x2b;
        std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
        local_14._0_1_ = 0x2c;
        std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
        *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
      }
    }
    local_14._0_1_ = 0x22;
    if (0xf < local_78) {
      pnVar11 = (nothrow_t *)(local_78 + 1);
      ppppcVar9 = (char ****)local_8c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        ppppcVar9 = (char ****)local_8c[0][-1];
        pnVar11 = (nothrow_t *)(local_78 + 0x24);
        if ((char *)0x1f < (char *)((int)local_8c[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar9,pnVar11);
    }
    local_7c = 0;
    local_78 = 0xf;
    local_8c[0] = (char ***)((uint)local_8c[0] & 0xffffff00);
    local_14._0_1_ = 0xe;
    std::vector<>::_Tidy((vector<> *)&local_2bc);
  }
  if (*(TradeLocation **)(local_2a8 + 0x398) == (TradeLocation *)0x0) {
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (char ***)((uint)local_74[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_74,"**no commerce available**",0x19);
    ppppcVar9 = local_74;
    local_290 = local_290 | 8;
LAB_004351a9:
    local_29c = local_290;
    word::~word((word *)&local_54);
    local_54 = (char **)*ppppcVar9;
    ppcStack_50 = (char **)ppppcVar9[1];
    ppcStack_4c = (char **)ppppcVar9[2];
    ppcStack_48 = (char **)ppppcVar9[3];
    local_44 = *(undefined8 *)(ppppcVar9 + 4);
    ppppcVar9[4] = (char ***)0x0;
    ppppcVar9[5] = (char ***)0xf;
    *(undefined1 *)ppppcVar9 = 0;
  }
  else {
    ppppcVar9 = (char ****)
                TradeLocation::getCurrentContractSummary(*(TradeLocation **)(local_2a8 + 0x398));
    local_14._0_1_ = 0x2d;
    local_29c = local_290 | 4;
    local_290 = local_29c;
    if ((char ****)&local_54 != ppppcVar9) goto LAB_004351a9;
  }
  if (((local_290 & 8) != 0) &&
     (local_29c = local_290 & 0xfffffff7, local_290 = local_29c, 0xf < local_60)) {
    pnVar11 = (nothrow_t *)(local_60 + 1);
    ppppcVar9 = (char ****)local_74[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_74[0][-1];
      pnVar11 = (nothrow_t *)(local_60 + 0x24);
      if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  local_14 = 0xe;
  if (((local_290 & 4) != 0) &&
     (local_29c = local_290 & 0xfffffffb, local_290 = local_29c, 0xf < local_78)) {
    pnVar11 = (nothrow_t *)(local_78 + 1);
    ppppcVar9 = (char ****)local_8c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_8c[0][-1];
      pnVar11 = (nothrow_t *)(local_78 + 0x24);
      if ((char *)0x1f < (char *)((int)local_8c[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  pPVar3 = local_2c;
  local_58 = 5;
  for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(pPVar8);
    this_00 = local_2a0;
  }
  local_2a4 = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x4352d5;
  local_2c = pPStack_30;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0x2e;
  local_2fc[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_2fc,"back",4);
  local_14._0_1_ = 0xe;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
  local_14 = CONCAT31(local_14._1_3_,0x2f);
  if (local_28 == local_2c) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)&pPStack_30,local_2c,pPVar8);
  }
  else {
    PrivateCommOption::PrivateCommOption(local_2c,pPVar8);
    local_2c = local_2c + 0xa8;
  }
  local_14._0_1_ = 0xe;
  PrivateCommOption::~PrivateCommOption(local_138);
  pPVar1 = *(PrivateCommElement **)(this_00 + 4);
  if (*(PrivateCommElement **)(this_00 + 8) == pPVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,pPVar1,(PrivateCommElement *)&local_5c);
  }
  else {
    *(undefined4 *)pPVar1 = local_5c;
    *(int *)(pPVar1 + 4) = local_58;
    local_2a4 = pPVar1;
    std::basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)&local_54);
    local_14._0_1_ = 0x30;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)&local_3c);
    local_14._0_1_ = 0x31;
    std::vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)&pPStack_30);
    local_14._0_1_ = 0xe;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x38;
  }
  if (*(TradeLocation **)(local_2a8 + 0x398) == (TradeLocation *)0x0) {
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (char ***)((uint)local_74[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_74,"**no commerce info available**",0x1e);
    local_290 = local_290 | 0x20;
    ppppcVar9 = local_74;
  }
  else {
    ppppcVar9 = (char ****)
                TradeLocation::getCurrentPassengerSummary(*(TradeLocation **)(local_2a8 + 0x398));
    local_14._0_1_ = 0x32;
    local_290 = local_290 | 0x10;
    if ((char ****)&local_54 == ppppcVar9) goto LAB_0043542e;
  }
  word::~word((word *)&local_54);
  local_54 = (char **)*ppppcVar9;
  ppcStack_50 = (char **)ppppcVar9[1];
  ppcStack_4c = (char **)ppppcVar9[2];
  ppcStack_48 = (char **)ppppcVar9[3];
  local_44 = *(undefined8 *)(ppppcVar9 + 4);
  ppppcVar9[4] = (char ***)0x0;
  ppppcVar9[5] = (char ***)0xf;
  *(undefined1 *)ppppcVar9 = 0;
LAB_0043542e:
  if (((local_290 & 0x20) != 0) && (local_290 = local_290 & 0xffffffdf, 0xf < local_60)) {
    pnVar11 = (nothrow_t *)(local_60 + 1);
    ppppcVar9 = (char ****)local_74[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_74[0][-1];
      pnVar11 = (nothrow_t *)(local_60 + 0x24);
      if ((char *)0x1f < (char *)((int)local_74[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  local_14 = 0xe;
  if (((local_290 & 0x10) != 0) && (0xf < local_78)) {
    pnVar11 = (nothrow_t *)(local_78 + 1);
    ppppcVar9 = (char ****)local_8c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar9 = (char ****)local_8c[0][-1];
      pnVar11 = (nothrow_t *)(local_78 + 0x24);
      if ((char *)0x1f < (char *)((int)local_8c[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar11);
  }
  pPVar3 = local_2c;
  local_58 = 6;
  for (pPVar8 = pPStack_30; pPVar8 != pPVar3; pPVar8 = pPVar8 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(pPVar8);
    this_00 = local_2a0;
  }
  local_2a4 = (PrivateCommElement *)local_2e4;
  local_2e4[0] = (basic_string<>)0x0;
  uStack_2f0 = 0x435515;
  local_2c = pPStack_30;
  std::basic_string<>::assign(local_2e4,"",0);
  local_14._0_1_ = 0x33;
  std::basic_string<>::basic_string<>(local_2fc,"back");
  local_14._0_1_ = 0xe;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
  local_14._0_1_ = 0x34;
  std::vector<>::push_back((vector<> *)&pPStack_30,pPVar8);
  local_14._0_1_ = 0xe;
  PrivateCommOption::~PrivateCommOption(local_138);
  std::vector<>::emplace_back<>(this_00,(PrivateCommElement *)&local_5c);
  std::basic_string<>::operator=
            ((basic_string<> *)&local_54,
             "`7Unfortunately, docking permission has been `@denied`7. Please reverse course immediately."
            );
  local_58 = 9;
  std::vector<>::clear((vector<> *)&pPStack_30);
  local_2a4 = (PrivateCommElement *)local_2e4;
  std::basic_string<>::basic_string<>(local_2e4,"");
  local_14._0_1_ = 0x35;
  std::basic_string<>::basic_string<>(local_2fc,"back");
  local_14._0_1_ = 0xe;
  pPVar8 = (PrivateCommOption *)PrivateCommOption::PrivateCommOption(local_138,0,0);
  local_14._0_1_ = 0x36;
  std::vector<>::push_back((vector<> *)&pPStack_30,pPVar8);
  local_14 = CONCAT31(local_14._1_3_,0xe);
  PrivateCommOption::~PrivateCommOption(local_138);
  std::vector<>::emplace_back<>(this_00,(PrivateCommElement *)&local_5c);
  PrivateCommOption::~PrivateCommOption(local_288);
  PrivateCommOption::~PrivateCommOption((PrivateCommOption *)&local_1e0);
  PrivateCommElement::~PrivateCommElement((PrivateCommElement *)&local_5c);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall PrivateCommsManager::generateShipComms(class Ship *)

void __thiscall PrivateCommsManager::generateShipComms(PrivateCommsManager *this,Ship *param_1)

{
  MetaGameAction **ppMVar1;
  Faction *pFVar2;
  Conversation *pCVar3;
  AnimationFrames *pAVar4;
  basic_string<> *pbVar5;
  ConversationOption *pCVar6;
  Requirement *pRVar7;
  MetaGameAction *pMVar8;
  uint uVar9;
  int iVar10;
  AnimationFrames **ppAVar11;
  void *pvVar12;
  nothrow_t *pnVar13;
  vector<> *this_00;
  vector<> *pvVar14;
  bool bVar15;
  char *pcVar16;
  basic_string<> local_78 [4];
  undefined4 uStack_74;
  Conversation **ppCVar17;
  basic_string<> *local_50;
  AnimationFrames *local_4c;
  Conversation *local_48;
  AnimationFrames *local_44;
  Requirement *local_40;
  AnimationFrames *local_3c;
  ConversationOption *local_38;
  basic_string<> *local_34;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b49ac;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar14 = (vector<> *)(param_1 + 0x368);
  local_4c = (AnimationFrames *)param_1;
  if ((3 < (uint)(*(int *)(param_1 + 0x36c) - *(int *)pvVar14)) ||
     (iVar10 = *(int *)(param_1 + 0x44), iVar10 == 0)) goto LAB_00436379;
  if (*(int *)(iVar10 + 0x70) == 7) {
    pFVar2 = Sector::getMainFaction(*(Sector **)(param_1 + 0x24));
    if (pFVar2 == (Faction *)0x0) goto LAB_00436379;
    pCVar3 = operator_new(0xac);
    local_8 = 0;
    local_48 = pCVar3;
    std::basic_string<>::basic_string<>(local_78,(basic_string<> *)(param_1 + 0x238));
    local_50 = (basic_string<> *)Conversation::Conversation(pCVar3);
    local_8 = 0xffffffff;
    *(undefined2 *)(local_50 + 0x1c) = 0;
    local_50[0x28] = (basic_string<>)0x1;
    local_48 = (Conversation *)local_50;
    local_34 = operator_new(0x6c);
    pAVar4 = (AnimationFrames *)
             ConversationElement::ConversationElement((ConversationElement *)local_34,0,0);
    local_44 = pAVar4;
    rand();
    uStack_74 = 0x435731;
    pbVar5 = (basic_string<> *)strUsingArgs((char *)local_30);
    std::basic_string<>::operator=((basic_string<> *)(pAVar4 + 0x3c),pbVar5);
    if (0xf < local_1c) {
      pnVar13 = (nothrow_t *)(local_1c + 1);
      pvVar12 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_30[0] + -4);
        pnVar13 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) goto LAB_00435763;
      }
      operator_delete(pvVar12,pnVar13);
    }
    pCVar6 = operator_new(0x70);
    local_8 = 1;
    local_34 = (basic_string<> *)pCVar6;
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff84,"I have detected a vessel engaging in piracy.",
               0x2c);
    pAVar4 = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,0,0);
    local_8 = 0xffffffff;
    local_3c = pAVar4;
    local_34 = (basic_string<> *)pAVar4;
    pRVar7 = operator_new(0x40);
    local_8 = 2;
    local_78[0] = (basic_string<>)0x0;
    local_40 = pRVar7;
    std::basic_string<>::assign(local_78,"!PIRATE_REPORTED",0x10);
    local_40 = (Requirement *)Requirement::Requirement(pRVar7);
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(pAVar4 + 100),(InputOption **)&local_40);
    pAVar4 = local_44;
    ppAVar11 = *(AnimationFrames ***)(local_44 + 100);
    if (*(AnimationFrames ***)(local_44 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)(local_44 + 0x60),ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)local_34;
      *(int *)(local_44 + 100) = *(int *)(local_44 + 100) + 4;
    }
    pCVar6 = operator_new(0x70);
    local_8 = 3;
    local_38 = pCVar6;
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff84,
               "I have sensor evidence of a merchant smuggling illegal goods.",0x3d);
    local_40 = (Requirement *)ConversationOption::ConversationOption(pCVar6,1,0);
    local_8 = 0xffffffff;
    local_3c = (AnimationFrames *)local_40;
    pMVar8 = operator_new(0x24);
    local_8 = 4;
    local_78[0] = (basic_string<>)0x0;
    local_38 = (ConversationOption *)pMVar8;
    std::basic_string<>::assign(local_78,"",0);
    local_34 = (basic_string<> *)MetaGameAction::MetaGameAction(pMVar8);
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(local_40 + 0x58),(InputOption **)&local_34);
    pRVar7 = operator_new(0x40);
    local_8 = 5;
    local_78[0] = (basic_string<>)0x0;
    local_38 = (ConversationOption *)pRVar7;
    std::basic_string<>::assign(local_78,"check=SMUGGLER_DETECTED",0x17);
    local_34 = (basic_string<> *)Requirement::Requirement(pRVar7);
    pRVar7 = local_40;
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(local_40 + 100),(InputOption **)&local_34);
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)(pAVar4 + 0x60),ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)pRVar7;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000001;
    bVar15 = uVar9 == 0;
    if ((int)uVar9 < 0) {
      bVar15 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar15) {
      pCVar6 = operator_new(0x70);
      local_8 = 6;
      uVar9 = 0x58;
      pcVar16 = 
      "Oh. Nothing. Sorry, my finger slipped on the comms panel. Sorry for taking up your time.";
    }
    else {
      pCVar6 = operator_new(0x70);
      local_8 = 7;
      uVar9 = 0x2e;
      pcVar16 = "Never mind. Apologies for taking up your time.";
    }
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,pcVar16,uVar9);
    local_3c = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,2,0);
    local_8 = 0xffffffff;
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)(pAVar4 + 0x60),ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = local_3c;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    pbVar5 = local_50;
    pvVar14 = (vector<> *)(local_50 + 0xa0);
    ppAVar11 = *(AnimationFrames ***)(local_50 + 0xa4);
    if (*(AnimationFrames ***)(local_50 + 0xa8) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(pvVar14,ppAVar11,&local_44);
    }
    else {
      *ppAVar11 = pAVar4;
      *(int *)(local_50 + 0xa4) = *(int *)(local_50 + 0xa4) + 4;
    }
    local_38 = operator_new(0x6c);
    pAVar4 = (AnimationFrames *)
             ConversationElement::ConversationElement((ConversationElement *)local_38,0,1);
    local_44 = pAVar4;
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000001;
    bVar15 = uVar9 == 0;
    if ((int)uVar9 < 0) {
      bVar15 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar15) {
      uVar9 = 0x37;
      pcVar16 = "`7Can you give us the location of the suspected pirate?";
    }
    else {
      uVar9 = 0x36;
      pcVar16 = "`7In which quadrant did you detect the alleged pirate?";
    }
    std::basic_string<>::assign((basic_string<> *)(pAVar4 + 0x3c),pcVar16,uVar9);
    pCVar6 = operator_new(0x70);
    local_8 = 8;
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"Quadrant A",10);
    local_40 = (Requirement *)ConversationOption::ConversationOption(pCVar6,0,1);
    local_8 = 0xffffffff;
    local_3c = (AnimationFrames *)local_40;
    pMVar8 = operator_new(0x24);
    local_8 = 9;
    local_78[0] = (basic_string<>)0x0;
    local_38 = (ConversationOption *)pMVar8;
    std::basic_string<>::assign(local_78,"A",1);
    local_34 = (basic_string<> *)MetaGameAction::MetaGameAction(pMVar8);
    pRVar7 = local_40;
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(local_40 + 0x58),(InputOption **)&local_34);
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    this_00 = (vector<> *)(pAVar4 + 0x60);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)pRVar7;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    pCVar6 = operator_new(0x70);
    local_8 = 10;
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"Quadrant B",10);
    local_40 = (Requirement *)ConversationOption::ConversationOption(pCVar6,1,1);
    local_8 = 0xffffffff;
    local_3c = (AnimationFrames *)local_40;
    pMVar8 = operator_new(0x24);
    local_8 = 0xb;
    local_78[0] = (basic_string<>)0x0;
    local_38 = (ConversationOption *)pMVar8;
    std::basic_string<>::assign(local_78,"B",1);
    local_34 = (basic_string<> *)MetaGameAction::MetaGameAction(pMVar8);
    pRVar7 = local_40;
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(local_40 + 0x58),(InputOption **)&local_34);
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)pRVar7;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    pCVar6 = operator_new(0x70);
    local_8 = 0xc;
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"Quadrant C",10);
    local_40 = (Requirement *)ConversationOption::ConversationOption(pCVar6,2,1);
    local_8 = 0xffffffff;
    local_3c = (AnimationFrames *)local_40;
    pMVar8 = operator_new(0x24);
    local_8 = 0xd;
    local_78[0] = (basic_string<>)0x0;
    local_38 = (ConversationOption *)pMVar8;
    std::basic_string<>::assign(local_78,"C",1);
    local_34 = (basic_string<> *)MetaGameAction::MetaGameAction(pMVar8);
    pRVar7 = local_40;
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(local_40 + 0x58),(InputOption **)&local_34);
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)pRVar7;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    pCVar6 = operator_new(0x70);
    local_8 = 0xe;
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"Quadrant D",10);
    local_40 = (Requirement *)ConversationOption::ConversationOption(pCVar6,3,1);
    local_8 = 0xffffffff;
    local_3c = (AnimationFrames *)local_40;
    pMVar8 = operator_new(0x24);
    local_8 = 0xf;
    local_78[0] = (basic_string<>)0x0;
    local_38 = (ConversationOption *)pMVar8;
    std::basic_string<>::assign(local_78,"D",1);
    local_34 = (basic_string<> *)MetaGameAction::MetaGameAction(pMVar8);
    pRVar7 = local_40;
    local_8 = 0xffffffff;
    std::vector<>::push_back((vector<> *)(local_40 + 0x58),(InputOption **)&local_34);
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = (AnimationFrames *)pRVar7;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    pCVar6 = operator_new(0x70);
    local_8 = 0x10;
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"Never mind. Sorry.",0x12);
    local_3c = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,4,1);
    local_8 = 0xffffffff;
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = local_3c;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    ppAVar11 = *(AnimationFrames ***)(pbVar5 + 0xa4);
    if (*(AnimationFrames ***)(pbVar5 + 0xa8) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(pvVar14,ppAVar11,&local_44);
    }
    else {
      *ppAVar11 = local_44;
      *(int *)(pbVar5 + 0xa4) = *(int *)(pbVar5 + 0xa4) + 4;
    }
    local_38 = operator_new(0x6c);
    pAVar4 = (AnimationFrames *)
             ConversationElement::ConversationElement((ConversationElement *)local_38,0,2);
    local_44 = pAVar4;
    std::basic_string<>::assign
              ((basic_string<> *)(pAVar4 + 0x3c),
               "Thank you for this information. We will investigate this and contact you.",0x49);
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000001;
    bVar15 = uVar9 == 0;
    if ((int)uVar9 < 0) {
      bVar15 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar15) {
      pCVar6 = operator_new(0x70);
      local_8 = 0x11;
      uVar9 = 10;
      pcVar16 = "Thank you.";
    }
    else {
      pCVar6 = operator_new(0x70);
      local_8 = 0x12;
      uVar9 = 0xb;
      pcVar16 = "No problem.";
    }
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,pcVar16,uVar9);
    ConversationOption::ConversationOption(pCVar6,0,2);
    local_8 = 0xffffffff;
    pCVar6 = operator_new(0x70);
    local_8 = 0x13;
    local_38 = pCVar6;
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff84,"Just doing my civic duty, sir!",0x1e);
    local_3c = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,1,2);
    local_8 = 0xffffffff;
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)(pAVar4 + 0x60),ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = local_3c;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    ppAVar11 = *(AnimationFrames ***)(pbVar5 + 0xa4);
    if (*(AnimationFrames ***)(pbVar5 + 0xa8) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(pvVar14,ppAVar11,&local_44);
    }
    else {
      *ppAVar11 = pAVar4;
      *(int *)(pbVar5 + 0xa4) = *(int *)(pbVar5 + 0xa4) + 4;
    }
    local_38 = operator_new(0x6c);
    pAVar4 = (AnimationFrames *)
             ConversationElement::ConversationElement((ConversationElement *)local_38,0,3);
    local_44 = pAVar4;
    std::basic_string<>::assign
              ((basic_string<> *)(pAVar4 + 0x3c),
               "Thank you for this information. We will send a patrol vessel to this quadrant as soon as possible."
               ,0x62);
    pCVar6 = operator_new(0x70);
    local_8 = 0x14;
    local_38 = pCVar6;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"Thank you.",10);
    local_3c = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,0,3);
    local_8 = 0xffffffff;
    ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
    if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)(pAVar4 + 0x60),ppAVar11,&local_3c);
    }
    else {
      *ppAVar11 = local_3c;
      *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
    }
    ppAVar11 = *(AnimationFrames ***)(pbVar5 + 0xa4);
    if (*(AnimationFrames ***)(pbVar5 + 0xa8) == ppAVar11) {
      std::vector<>::_Emplace_reallocate<>(pvVar14,ppAVar11,&local_44);
    }
    else {
      *ppAVar11 = pAVar4;
      *(int *)(pbVar5 + 0xa4) = *(int *)(pbVar5 + 0xa4) + 4;
    }
    pvVar14 = (vector<> *)(local_4c + 0x368);
    ppAVar11 = *(AnimationFrames ***)(local_4c + 0x36c);
    if (*(AnimationFrames ***)(local_4c + 0x370) != ppAVar11) {
      *ppAVar11 = (AnimationFrames *)local_50;
      *(int *)(local_4c + 0x36c) = *(int *)(local_4c + 0x36c) + 4;
      goto LAB_00436379;
    }
    ppCVar17 = &local_48;
    goto LAB_00436373;
  }
  if ((iVar10 == 0) || (*(int *)(iVar10 + 0x70) != 1)) goto LAB_00436379;
  pCVar3 = operator_new(0xac);
  local_8 = 0x15;
  local_48 = (Conversation *)(param_1 + 0x238);
  local_38 = (ConversationOption *)pCVar3;
  std::basic_string<>::basic_string<>(local_78,(basic_string<> *)local_48);
  local_50 = (basic_string<> *)Conversation::Conversation(pCVar3);
  local_8 = 0xffffffff;
  *(undefined2 *)(local_50 + 0x1c) = 0;
  local_50[0x28] = (basic_string<>)0x1;
  local_34 = local_50;
  local_38 = operator_new(0x6c);
  pAVar4 = (AnimationFrames *)
           ConversationElement::ConversationElement((ConversationElement *)local_38,0,0);
  local_3c = pAVar4;
  uVar9 = rand();
  uVar9 = uVar9 & 0x80000003;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar9) {
  default:
    uVar9 = 0xc;
    pcVar16 = "`7Hey there!";
    break;
  case 1:
    uVar9 = 0x1e;
    pcVar16 = "`7Greetings, fellow traveller.";
    break;
  case 2:
    goto LAB_004360fa;
  case 3:
LAB_004360fa:
    pbVar5 = (basic_string<> *)strUsingArgs((char *)local_30);
    std::basic_string<>::operator=((basic_string<> *)(pAVar4 + 0x3c),pbVar5);
    if (0xf < local_1c) {
      pnVar13 = (nothrow_t *)(local_1c + 1);
      pvVar12 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_30[0] + -4);
        pnVar13 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) {
LAB_00435763:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
    goto LAB_00436170;
  }
  std::basic_string<>::assign((basic_string<> *)(pAVar4 + 0x3c),pcVar16,uVar9);
LAB_00436170:
  iVar10 = rand();
  switch(iVar10 % 6) {
  case 0:
    uVar9 = 0x15;
    pcVar16 = " State your business.";
    break;
  case 1:
    uVar9 = 0x11;
    pcVar16 = " Can we help you?";
    break;
  case 2:
    uVar9 = 0x1e;
    pcVar16 = " How\'s your ship treating you?";
    break;
  case 3:
    uVar9 = 0x16;
    pcVar16 = " What\'s the good word?";
    break;
  case 4:
    uVar9 = 0x1d;
    pcVar16 = " How\'re things going for you?";
    break;
  case 5:
    uVar9 = 0xb;
    pcVar16 = " What\'s up?";
    break;
  default:
    goto switchD_00436183_default;
  }
  std::basic_string<>::append((basic_string<> *)(pAVar4 + 0x3c),pcVar16,uVar9);
switchD_00436183_default:
  pCVar6 = operator_new(0x70);
  local_8 = 0x16;
  local_38 = pCVar6;
  std::basic_string<>::assign
            ((basic_string<> *)&stack0xffffff84,"Drop your cargo or be fired upon.",0x21);
  pAVar4 = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,0,0);
  local_8 = 0xffffffff;
  local_4c = pAVar4;
  local_44 = pAVar4;
  pMVar8 = operator_new(0x24);
  local_8 = 0x17;
  local_38 = (ConversationOption *)pMVar8;
  std::basic_string<>::basic_string<>(local_78,(basic_string<> *)local_48);
  local_48 = (Conversation *)MetaGameAction::MetaGameAction(pMVar8);
  local_8 = 0xffffffff;
  ppMVar1 = *(MetaGameAction ***)(pAVar4 + 0x5c);
  if (*(MetaGameAction ***)(pAVar4 + 0x60) == ppMVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pAVar4 + 0x58),ppMVar1,(MetaGameAction **)&local_48);
  }
  else {
    *ppMVar1 = (MetaGameAction *)local_48;
    *(int *)(pAVar4 + 0x5c) = *(int *)(pAVar4 + 0x5c) + 4;
  }
  pAVar4 = local_3c;
  ppAVar11 = *(AnimationFrames ***)(local_3c + 100);
  if (*(AnimationFrames ***)(local_3c + 0x68) == ppAVar11) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(local_3c + 0x60),ppAVar11,&local_44);
  }
  else {
    *ppAVar11 = local_4c;
    *(int *)(local_3c + 100) = *(int *)(local_3c + 100) + 4;
  }
  uVar9 = rand();
  uVar9 = uVar9 & 0x80000001;
  bVar15 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar15 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar15) {
    pCVar6 = operator_new(0x70);
    local_8 = 0x18;
    uVar9 = 0x58;
    pcVar16 = 
    "Oh. Nothing. Sorry, my finger slipped on the comms panel. Sorry for taking up your time.";
  }
  else {
    pCVar6 = operator_new(0x70);
    local_8 = 0x19;
    uVar9 = 0x2e;
    pcVar16 = "Never mind. Apologies for taking up your time.";
  }
  local_38 = pCVar6;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,pcVar16,uVar9);
  local_44 = (AnimationFrames *)ConversationOption::ConversationOption(pCVar6,2,0);
  local_8 = 0xffffffff;
  ppAVar11 = *(AnimationFrames ***)(pAVar4 + 100);
  if (*(AnimationFrames ***)(pAVar4 + 0x68) == ppAVar11) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(pAVar4 + 0x60),ppAVar11,&local_44);
  }
  else {
    *ppAVar11 = local_44;
    *(int *)(pAVar4 + 100) = *(int *)(pAVar4 + 100) + 4;
  }
  pbVar5 = local_34;
  ppAVar11 = *(AnimationFrames ***)(local_34 + 0xa4);
  if (*(AnimationFrames ***)(local_34 + 0xa8) == ppAVar11) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(local_34 + 0xa0),ppAVar11,&local_3c);
  }
  else {
    *ppAVar11 = local_3c;
    *(int *)(local_34 + 0xa4) = *(int *)(local_34 + 0xa4) + 4;
  }
  ppAVar11 = *(AnimationFrames ***)(param_1 + 0x36c);
  if (*(AnimationFrames ***)(param_1 + 0x370) == ppAVar11) {
    ppCVar17 = (Conversation **)&local_50;
LAB_00436373:
    std::vector<>::_Emplace_reallocate<>(pvVar14,ppAVar11,(AnimationFrames **)ppCVar17);
  }
  else {
    *ppAVar11 = (AnimationFrames *)pbVar5;
    *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x36c) + 4;
  }
LAB_00436379:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
