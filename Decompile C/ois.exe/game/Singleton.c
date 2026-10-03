#include "../ois.exe.h"


// public: static class NetworkClient * __cdecl Singleton<class NetworkClient>::getInstance(void)

NetworkClient * __cdecl Singleton<>::getInstance(void)

{
  NetworkClient *pNVar1;
  
  pNVar1 = instance;
  if (instance == (NetworkClient *)0x0) {
    pNVar1 = operator_new(0x38);
    instance = pNVar1;
    *(undefined4 *)(pNVar1 + 0x10) = 0;
    *(undefined4 *)(pNVar1 + 0x14) = 0xf;
    *pNVar1 = (NetworkClient)0x0;
    *(undefined4 *)(pNVar1 + 0x18) = 0xffffffff;
    pNVar1[0x1c] = (NetworkClient)0x0;
    *(undefined4 *)(pNVar1 + 0x20) = 0;
    *(undefined4 *)(pNVar1 + 0x24) = 0;
    *(undefined4 *)(pNVar1 + 0x28) = 0;
    *(undefined4 *)(pNVar1 + 0x2c) = 0;
    *(undefined4 *)(pNVar1 + 0x30) = 0;
    *(undefined4 *)(pNVar1 + 0x34) = 0;
  }
  return pNVar1;
}


// public: static class Stats * __cdecl Singleton<class Stats>::getInstance(void)

Stats * __cdecl Singleton<Stats>::getInstance(void)

{
  Stats *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b129f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (instance == (Stats *)0x0) {
    this = operator_new(0x58);
    local_8 = 0;
    instance = (Stats *)Stats::Stats(this);
  }
  ExceptionList = local_10;
  return instance;
}


// public: static class PresentationInterface * __cdecl Singleton<class
// PresentationInterface>::getInstance(void)

PresentationInterface * __cdecl Singleton<>::getInstance(void)

{
  PresentationInterface *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1272;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (instance == (PresentationInterface *)0x0) {
    this = operator_new(0x418);
    local_8 = 0;
    instance = (PresentationInterface *)PresentationInterface::PresentationInterface(this);
  }
  ExceptionList = local_10;
  return instance;
}


// public: static class NetworkServer * __cdecl Singleton<class NetworkServer>::getInstance(void)

NetworkServer * __cdecl Singleton<>::getInstance(void)

{
  NetworkServer *this;
  RakPeer *this_00;
  undefined4 uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1378;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = instance;
  if (instance == (NetworkServer *)0x0) {
    this = operator_new(0x98);
    local_8 = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0xf;
    *this = (NetworkServer)0x0;
    std::basic_string<>::assign((basic_string<> *)this,"Objects Server",0xe);
    *(undefined1 **)(this + 0x18) = &DAT_bf800000;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0xffffffff;
    *(undefined4 *)(this + 0x28) = 8;
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
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0xf;
    *(basic_string<> *)(this + 0x54) = (basic_string<>)0x0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    local_8._0_1_ = 5;
    this_00 = operator_new(0x5e0);
    local_8 = CONCAT31(local_8._1_3_,6);
    memset(this_00,0,0x5e0);
    uVar1 = RakNet::RakPeer::RakPeer(this_00);
    *(undefined4 *)(this + 0x90) = uVar1;
    *(undefined4 *)(this + 0x94) = 0;
  }
  ExceptionList = local_10;
  instance = this;
  return this;
}


// public: static class SoundEngine * __cdecl Singleton<class SoundEngine>::getInstance(void)

SoundEngine * __cdecl Singleton<>::getInstance(void)

{
  SoundEngine *pSVar1;
  uint uVar2;
  SoundEngine *pSVar3;
  int iVar4;
  FMOD_RESULT FVar5;
  char *pcVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b13e6;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pSVar3 = instance;
  if (instance == (SoundEngine *)0x0) {
    pSVar3 = operator_new(0x70);
    *pSVar3 = (SoundEngine)0x1;
    *(undefined4 *)(pSVar3 + 4) = 0;
    *(undefined4 *)(pSVar3 + 8) = 0x41200000;
    *(undefined4 *)(pSVar3 + 0x1c) = 0;
    *(undefined4 *)(pSVar3 + 0x20) = 0xf;
    pSVar3[0xc] = (SoundEngine)0x0;
    *(undefined4 *)(pSVar3 + 0x24) = 0;
    *(undefined4 *)(pSVar3 + 0x28) = 0;
    *(undefined4 *)(pSVar3 + 0x2c) = 0;
    *(undefined4 *)(pSVar3 + 0x30) = 0;
    *(undefined4 *)(pSVar3 + 0x34) = 0;
    *(undefined4 *)(pSVar3 + 0x38) = 0;
    *(undefined4 *)(pSVar3 + 0x3c) = 0;
    *(undefined4 *)(pSVar3 + 0x40) = 0;
    pSVar3[0x44] = (SoundEngine)0x0;
    *(undefined4 *)(pSVar3 + 0x48) = 0;
    *(undefined4 *)(pSVar3 + 0x4c) = 0;
    *(undefined4 *)(pSVar3 + 0x50) = 0;
    *(undefined4 *)(pSVar3 + 0x54) = 0;
    *(undefined4 *)(pSVar3 + 0x58) = 0;
    *(undefined4 *)(pSVar3 + 0x5c) = 0;
    *(undefined4 *)(pSVar3 + 0x60) = 0;
    local_8 = 5;
    pSVar1 = pSVar3 + 0x6c;
    *(undefined4 *)(pSVar3 + 100) = 0;
    *(undefined4 *)(pSVar3 + 0x68) = 0;
    iVar4 = FMOD_System_Create(pSVar1);
    if (iVar4 == 0) {
      FVar5 = FMOD::System::init(*(int *)pSVar1,100,(void *)0x0);
      if (FVar5 == 0) {
        param_1_0065d528 = *(System **)pSVar1;
        pcVar6 = "FMOD initialized.";
      }
      else {
        pcVar6 = "FMOD::System::init failure.";
      }
    }
    else {
      pcVar6 = "FMOD::System creation fail.";
    }
    debugPrint("SOUND",pcVar6,uVar2);
  }
  ExceptionList = local_10;
  instance = pSVar3;
  return pSVar3;
}


// public: static class ServerPresentationInterface * __cdecl Singleton<class
// ServerPresentationInterface>::getInstance(void)

ServerPresentationInterface * __cdecl Singleton<>::getInstance(void)

{
  ServerPresentationInterface *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1463;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = instance;
  if (instance == (ServerPresentationInterface *)0x0) {
    this = operator_new(0x2f0);
    local_8 = 0;
    cocos2d::Layer::Layer((Layer *)this);
    *(undefined ***)this = ServerPresentationInterface::vftable;
    *(undefined4 *)(this + 0x290) = 0;
    *(undefined4 *)(this + 0x294) = 0;
    *(undefined4 *)(this + 0x298) = 0;
    *(undefined4 *)(this + 0x29c) = 0;
    *(undefined4 *)(this + 0x2a0) = 0;
    *(undefined4 *)(this + 0x2a4) = 0;
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined4 *)(this + 700) = 0;
    *(undefined4 *)(this + 0x2c0) = 0xf;
    *(Layer *)(this + 0x2ac) = (Layer)0x0;
    *(undefined4 *)(this + 0x2c4) = 0;
    *(undefined4 *)(this + 0x2d8) = 0;
    *(undefined4 *)(this + 0x2dc) = 0xf;
    *(Layer *)(this + 0x2c8) = (Layer)0x0;
    *(undefined4 *)(this + 0x2e0) = 0;
    *(undefined4 *)(this + 0x2e4) = 0;
    *(undefined4 *)(this + 0x2e8) = 0;
    local_8 = CONCAT31(local_8._1_3_,5);
    ServerPresentationInterface::configureMenus(this);
    ServerPresentationInterface::renderOutlines(this);
  }
  ExceptionList = local_10;
  instance = this;
  return this;
}


// public: static class PowerManager * __cdecl Singleton<class PowerManager>::getInstance(void)

PowerManager * __cdecl Singleton<>::getInstance(void)

{
  PowerManager *pPVar1;
  
  pPVar1 = instance;
  if (instance == (PowerManager *)0x0) {
    pPVar1 = operator_new(4);
    instance = pPVar1;
    *(undefined4 *)pPVar1 = 0xffffffff;
  }
  return pPVar1;
}


// public: static class NetworkData * __cdecl Singleton<class NetworkData>::getInstance(void)

NetworkData * __cdecl Singleton<>::getInstance(void)

{
  if (instance == (NetworkData *)0x0) {
    instance = operator_new(1);
  }
  return instance;
}


// public: static class AuthorityManager * __cdecl Singleton<class
// AuthorityManager>::getInstance(void)

AuthorityManager * __cdecl Singleton<>::getInstance(void)

{
  AuthorityManager *pAVar1;
  _Tree_node<> *p_Var2;
  _Tree_comp_alloc<> *this;
  _Tree_comp_alloc<> *this_00;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2562;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pAVar1 = instance;
  if (instance == (AuthorityManager *)0x0) {
    pAVar1 = operator_new(0x1c);
    local_8 = 0;
    *(undefined4 *)pAVar1 = 0;
    *(undefined4 *)(pAVar1 + 4) = 0;
    *(undefined4 *)(pAVar1 + 8) = 0;
    *(undefined4 *)(pAVar1 + 0xc) = 0;
    *(undefined8 *)(pAVar1 + 0x10) = 0;
    *(undefined4 *)(pAVar1 + 0x18) = 0;
    *(undefined4 *)pAVar1 = 0;
    *(undefined4 *)(pAVar1 + 4) = 0;
    p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this);
    *(_Tree_node<> **)pAVar1 = p_Var2;
    *(undefined4 *)(pAVar1 + 8) = 0;
    *(undefined4 *)(pAVar1 + 0xc) = 0;
    *(undefined4 *)(pAVar1 + 0x10) = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    *(undefined4 *)(pAVar1 + 0x14) = 0;
    *(undefined4 *)(pAVar1 + 0x18) = 0;
    p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
    *(_Tree_node<> **)(pAVar1 + 0x14) = p_Var2;
  }
  ExceptionList = local_10;
  instance = pAVar1;
  return pAVar1;
}


// public: static class BountyManager * __cdecl Singleton<class BountyManager>::getInstance(void)

BountyManager * __cdecl Singleton<>::getInstance(void)

{
  BountyManager *pBVar1;
  
  pBVar1 = instance;
  if (instance == (BountyManager *)0x0) {
    pBVar1 = operator_new(0xc);
    instance = pBVar1;
    *(undefined4 *)pBVar1 = 0;
    *(undefined4 *)(pBVar1 + 4) = 0;
    *(undefined4 *)(pBVar1 + 8) = 0;
  }
  return pBVar1;
}


// public: static class NotesManager * __cdecl Singleton<class NotesManager>::getInstance(void)

NotesManager * __cdecl Singleton<>::getInstance(void)

{
  NotesManager *pNVar1;
  
  pNVar1 = instance;
  if (instance == (NotesManager *)0x0) {
    pNVar1 = operator_new(4);
    instance = pNVar1;
    *(undefined4 *)pNVar1 = 0xffffffff;
  }
  return pNVar1;
}


// public: static class TabletManager * __cdecl Singleton<class TabletManager>::getInstance(void)

TabletManager * __cdecl Singleton<>::getInstance(void)

{
  TabletManager *pTVar1;
  
  pTVar1 = instance;
  if (instance == (TabletManager *)0x0) {
    pTVar1 = operator_new(0x4c);
    instance = pTVar1;
    *(undefined ***)pTVar1 = TabletManager::vftable;
    *(undefined4 *)(pTVar1 + 4) = 0xffffffff;
    *(undefined4 *)(pTVar1 + 0xc) = 0;
    *(undefined4 *)(pTVar1 + 0x10) = 0;
    *(undefined4 *)(pTVar1 + 0x14) = 0;
    pTVar1[0x18] = (TabletManager)0x0;
    *(undefined4 *)(pTVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pTVar1 + 0x20) = 0;
    *(undefined4 *)(pTVar1 + 0x28) = 0;
    *(undefined4 *)(pTVar1 + 0x2c) = 0;
    *(undefined4 *)(pTVar1 + 0x30) = 0;
    *(undefined4 *)(pTVar1 + 0x34) = 0;
    *(undefined4 *)(pTVar1 + 0x38) = 0;
    *(undefined4 *)(pTVar1 + 0x3c) = 0;
    *(undefined4 *)(pTVar1 + 0x40) = 0;
    *(undefined4 *)(pTVar1 + 0x44) = 0;
    *(undefined4 *)(pTVar1 + 0x48) = 0;
  }
  return pTVar1;
}


// public: static class FictionData * __cdecl Singleton<class FictionData>::getInstance(void)

FictionData * __cdecl Singleton<>::getInstance(void)

{
  if (instance == (FictionData *)0x0) {
    instance = operator_new(0x18);
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
    *(undefined4 *)instance = 0;
    *(undefined4 *)(instance + 4) = 0;
    *(undefined4 *)(instance + 8) = 0;
    *(undefined4 *)(instance + 0xc) = 0;
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
  }
  return instance;
}


// public: static class Infopedia * __cdecl Singleton<class Infopedia>::getInstance(void)

Infopedia * __cdecl Singleton<Infopedia>::getInstance(void)

{
  Infopedia *pIVar1;
  
  pIVar1 = instance;
  if (instance == (Infopedia *)0x0) {
    pIVar1 = operator_new(0x5c);
    instance = pIVar1;
    *(undefined4 *)(pIVar1 + 0x10) = 0;
    *(undefined4 *)(pIVar1 + 0x14) = 0xf;
    *pIVar1 = (Infopedia)0x0;
    *(undefined4 *)(pIVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)(pIVar1 + 0x2c) = 0;
    *(undefined4 *)(pIVar1 + 0x30) = 0xf;
    pIVar1[0x1c] = (Infopedia)0x0;
    *(undefined4 *)(pIVar1 + 0x34) = 0;
    *(undefined4 *)(pIVar1 + 0x38) = 0;
    *(undefined4 *)(pIVar1 + 0x3c) = 0;
    *(undefined4 *)(pIVar1 + 0x40) = 0;
    *(undefined4 *)(pIVar1 + 0x44) = 0;
    *(undefined4 *)(pIVar1 + 0x48) = 0;
    *(undefined4 *)(pIVar1 + 0x4c) = 0;
    *(undefined4 *)(pIVar1 + 0x50) = 0;
    *(undefined4 *)(pIVar1 + 0x54) = 0;
    *(undefined4 *)(pIVar1 + 0x58) = 0;
  }
  return pIVar1;
}


// public: static class JunkManager * __cdecl Singleton<class JunkManager>::getInstance(void)

JunkManager * __cdecl Singleton<>::getInstance(void)

{
  if (instance == (JunkManager *)0x0) {
    instance = operator_new(0x18);
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
    *(undefined4 *)instance = 0;
    *(undefined4 *)(instance + 4) = 0;
    *(undefined4 *)(instance + 8) = 0;
    *(undefined4 *)(instance + 0xc) = 0;
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
  }
  return instance;
}


// public: static class PrivateCommsManager * __cdecl Singleton<class
// PrivateCommsManager>::getInstance(void)

PrivateCommsManager * __cdecl Singleton<>::getInstance(void)

{
  PrivateCommsManager *pPVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2592;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pPVar1 = instance;
  if (instance == (PrivateCommsManager *)0x0) {
    pPVar1 = operator_new(0xa4);
    local_8 = 0;
    *(undefined ***)pPVar1 = PrivateCommsManager::vftable;
    pPVar1[4] = (PrivateCommsManager)0x0;
    *(undefined4 *)(pPVar1 + 8) = 0;
    *(undefined4 *)(pPVar1 + 0xc) = 0;
    *(undefined4 *)(pPVar1 + 0x10) = 0;
    *(undefined1 **)(pPVar1 + 0x14) = &DAT_bf800000;
    *(undefined1 **)(pPVar1 + 0x18) = &DAT_bf800000;
    *(undefined4 *)(pPVar1 + 0x1c) = 0xffffffff;
    _eh_vector_constructor_iterator_
              (pPVar1 + 0x20,0x18,3,std::basic_string<>::basic_string<>,word::~word);
    *(undefined4 *)(pPVar1 + 0x68) = 0;
    *(undefined4 *)(pPVar1 + 0x6c) = 0;
    *(undefined4 *)(pPVar1 + 0x70) = 0;
    *(undefined4 *)(pPVar1 + 0x74) = 0;
    *(undefined4 *)(pPVar1 + 0x78) = 0;
    *(undefined4 *)(pPVar1 + 0x7c) = 0;
    pPVar1[0x80] = (PrivateCommsManager)0x0;
    *(undefined1 **)(pPVar1 + 0x84) = &DAT_bf800000;
    *(undefined4 *)(pPVar1 + 0x88) = 0xffffffff;
    *(undefined4 *)(pPVar1 + 0x8c) = 0;
    *(undefined4 *)(pPVar1 + 0x94) = 0xffffffff;
    *(undefined4 *)(pPVar1 + 0x98) = 0;
    *(undefined4 *)(pPVar1 + 0x9c) = 0;
    *(undefined4 *)(pPVar1 + 0xa0) = 0;
  }
  ExceptionList = local_10;
  instance = pPVar1;
  return pPVar1;
}


// public: static class EmailManager * __cdecl Singleton<class EmailManager>::getInstance(void)

EmailManager * __cdecl Singleton<>::getInstance(void)

{
  EmailManager *pEVar1;
  
  pEVar1 = instance;
  if (instance == (EmailManager *)0x0) {
    pEVar1 = operator_new(0x2c);
    instance = pEVar1;
    *pEVar1 = (EmailManager)0x0;
    *(undefined4 *)(pEVar1 + 4) = 0;
    *(undefined4 *)(pEVar1 + 8) = 0;
    *(undefined4 *)(pEVar1 + 0xc) = 0;
    *(undefined4 *)(pEVar1 + 0x10) = 0;
    *(undefined4 *)(pEVar1 + 0x14) = 0;
    *(undefined4 *)(pEVar1 + 0x18) = 0;
    *(undefined4 *)(pEVar1 + 0x1c) = 0;
    *(undefined4 *)(pEVar1 + 0x20) = 0;
    *(undefined4 *)(pEVar1 + 0x24) = 0;
    *(undefined4 *)(pEVar1 + 0x28) = 0;
  }
  return pEVar1;
}


// public: static class SaveHandler * __cdecl Singleton<class SaveHandler>::getInstance(void)

SaveHandler * __cdecl Singleton<>::getInstance(void)

{
  SaveHandler *pSVar1;
  SaveMetaData *this;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b25ca;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = instance;
  if (instance == (SaveHandler *)0x0) {
    pSVar1 = operator_new(0x2c);
    *(undefined4 *)(pSVar1 + 0x24) = 0;
    *(undefined4 *)(pSVar1 + 0x28) = 0xf;
    pSVar1[0x14] = (SaveHandler)0x0;
    local_8 = 1;
    iVar3 = 0;
    do {
      this = operator_new(0x108);
      uVar2 = SaveMetaData::SaveMetaData(this);
      *(undefined4 *)(pSVar1 + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  ExceptionList = local_10;
  instance = pSVar1;
  return pSVar1;
}


// public: static class ConversationManager * __cdecl Singleton<class
// ConversationManager>::getInstance(void)

ConversationManager * __cdecl Singleton<>::getInstance(void)

{
  ConversationManager *pCVar1;
  
  pCVar1 = instance;
  if (instance == (ConversationManager *)0x0) {
    pCVar1 = operator_new(0x48);
    instance = pCVar1;
    *(undefined4 *)(pCVar1 + 8) = 0x20;
    *(undefined4 *)(pCVar1 + 4) = 0x50;
    *(undefined4 *)(pCVar1 + 0x10) = 0;
    pCVar1[0x14] = (ConversationManager)0x0;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
    *(undefined4 *)(pCVar1 + 0x20) = 0;
    *(undefined4 *)(pCVar1 + 0x34) = 0;
    *(undefined4 *)(pCVar1 + 0x38) = 0xf;
    pCVar1[0x24] = (ConversationManager)0x0;
    *(undefined ***)pCVar1 = ConversationManager::vftable;
    *(int *)(pCVar1 + 0xc) = *(int *)(pCVar1 + 8) + -8;
    *(undefined4 *)(pCVar1 + 0x3c) = 0;
    *(undefined4 *)(pCVar1 + 0x40) = 0;
    *(undefined4 *)(pCVar1 + 0x44) = 0;
  }
  return pCVar1;
}


// public: static class SectorEditor * __cdecl Singleton<class SectorEditor>::getInstance(void)

SectorEditor * __cdecl Singleton<>::getInstance(void)

{
  SectorEditor *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2602;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = instance;
  if (instance == (SectorEditor *)0x0) {
    this = operator_new(0x298);
    local_8 = 0;
    cocos2d::Node::Node((Node *)this);
    *(undefined ***)this = SectorEditor::vftable;
    *(undefined4 *)(this + 0x278) = 0;
    *(undefined4 *)(this + 0x27c) = 0;
    *(undefined4 *)(this + 0x280) = 0xffffffff;
    *(undefined2 *)(this + 0x284) = 0;
    *(undefined4 *)(this + 0x288) = 0;
    *(undefined4 *)(this + 0x28c) = 0;
    *(undefined4 *)(this + 0x290) = 0;
    *(undefined4 *)(this + 0x294) = 0;
  }
  ExceptionList = local_10;
  instance = this;
  return this;
}


// public: static class RoomEditor * __cdecl Singleton<class RoomEditor>::getInstance(void)

RoomEditor * __cdecl Singleton<RoomEditor>::getInstance(void)

{
  RoomEditor *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2632;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = instance;
  if (instance == (RoomEditor *)0x0) {
    this = operator_new(0x290);
    local_8 = 0;
    cocos2d::Node::Node((Node *)this);
    *(undefined ***)this = RoomEditor::vftable;
    *(undefined2 *)(this + 0x278) = 0;
    *(undefined4 *)(this + 0x27c) = 0;
    *(undefined4 *)(this + 0x280) = 0;
    *(undefined4 *)(this + 0x284) = 0;
    *(undefined4 *)(this + 0x288) = 0;
    *(undefined4 *)(this + 0x28c) = 0;
  }
  ExceptionList = local_10;
  instance = this;
  return this;
}


// public: static class NPCShipManager * __cdecl Singleton<class NPCShipManager>::getInstance(void)

NPCShipManager * __cdecl Singleton<>::getInstance(void)

{
  NPCShipManager *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2675;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = instance;
  if (instance == (NPCShipManager *)0x0) {
    this = operator_new(0x20);
    *this = (NPCShipManager)0x0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    local_8 = 2;
    NPCShipManager::reset(this);
  }
  ExceptionList = local_10;
  instance = this;
  return this;
}


// public: static class NameManager * __cdecl Singleton<class NameManager>::getInstance(void)

NameManager * __cdecl Singleton<>::getInstance(void)

{
  NameManager *pNVar1;
  
  pNVar1 = instance;
  if (instance == (NameManager *)0x0) {
    pNVar1 = operator_new(0x9c);
    instance = pNVar1;
    *(undefined4 *)pNVar1 = 0;
    *(undefined4 *)(pNVar1 + 4) = 0;
    *(undefined4 *)(pNVar1 + 8) = 0;
    *(undefined4 *)(pNVar1 + 0xc) = 0;
    *(undefined4 *)(pNVar1 + 0x10) = 0;
    *(undefined4 *)(pNVar1 + 0x14) = 0;
    *(undefined4 *)(pNVar1 + 0x18) = 0;
    *(undefined4 *)(pNVar1 + 0x1c) = 0;
    *(undefined4 *)(pNVar1 + 0x20) = 0;
    *(undefined4 *)(pNVar1 + 0x24) = 0;
    *(undefined4 *)(pNVar1 + 0x28) = 0;
    *(undefined4 *)(pNVar1 + 0x2c) = 0;
    *(undefined4 *)(pNVar1 + 0x30) = 0;
    *(undefined4 *)(pNVar1 + 0x34) = 0;
    *(undefined4 *)(pNVar1 + 0x38) = 0;
    *(undefined4 *)(pNVar1 + 0x3c) = 0;
    *(undefined4 *)(pNVar1 + 0x40) = 0;
    *(undefined4 *)(pNVar1 + 0x44) = 0;
    *(undefined4 *)(pNVar1 + 0x48) = 0;
    *(undefined4 *)(pNVar1 + 0x4c) = 0;
    *(undefined4 *)(pNVar1 + 0x50) = 0;
    *(undefined4 *)(pNVar1 + 0x54) = 0;
    *(undefined4 *)(pNVar1 + 0x58) = 0;
    *(undefined4 *)(pNVar1 + 0x5c) = 0;
    *(undefined4 *)(pNVar1 + 0x60) = 0;
    *(undefined4 *)(pNVar1 + 100) = 0;
    *(undefined4 *)(pNVar1 + 0x68) = 0;
    *(undefined4 *)(pNVar1 + 0x6c) = 0;
    *(undefined4 *)(pNVar1 + 0x70) = 0;
    *(undefined4 *)(pNVar1 + 0x74) = 0;
    *(undefined4 *)(pNVar1 + 0x78) = 0;
    *(undefined4 *)(pNVar1 + 0x7c) = 0;
    *(undefined4 *)(pNVar1 + 0x80) = 0;
    *(undefined4 *)(pNVar1 + 0x84) = 0;
    *(undefined4 *)(pNVar1 + 0x88) = 0;
    *(undefined4 *)(pNVar1 + 0x8c) = 0;
    *(undefined4 *)(pNVar1 + 0x90) = 0;
    *(undefined4 *)(pNVar1 + 0x94) = 0;
    *(undefined4 *)(pNVar1 + 0x98) = 0;
  }
  return pNVar1;
}


// public: static class TradeEngine * __cdecl Singleton<class TradeEngine>::getInstance(void)

TradeEngine * __cdecl Singleton<>::getInstance(void)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b26a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  ExceptionList = local_10;
  return instance;
}


// public: static class CommsManager * __cdecl Singleton<class CommsManager>::getInstance(void)

CommsManager * __cdecl Singleton<>::getInstance(void)

{
  CommsManager *pCVar1;
  
  pCVar1 = instance;
  if (instance == (CommsManager *)0x0) {
    pCVar1 = operator_new(0x20);
    instance = pCVar1;
    *(undefined ***)pCVar1 = CommsManager::vftable;
    *(undefined4 *)(pCVar1 + 4) = 0x50;
    *(undefined4 *)(pCVar1 + 8) = 0x28;
    pCVar1[0xc] = (CommsManager)0x0;
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
  }
  return pCVar1;
}


// public: static class FlagManager * __cdecl Singleton<class FlagManager>::getInstance(void)

FlagManager * __cdecl Singleton<>::getInstance(void)

{
  FlagManager *pFVar1;
  _Tree_node<> *p_Var2;
  _Tree_comp_alloc<> *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b26d7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pFVar1 = instance;
  if (instance == (FlagManager *)0x0) {
    pFVar1 = operator_new(0x30);
    *(undefined4 *)pFVar1 = 0;
    *(undefined4 *)(pFVar1 + 4) = 0;
    *(undefined4 *)(pFVar1 + 8) = 0;
    local_8 = 1;
    *(undefined4 *)(pFVar1 + 0xc) = 0;
    *(undefined4 *)(pFVar1 + 0x10) = 0;
    p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this);
    *(_Tree_node<> **)(pFVar1 + 0xc) = p_Var2;
    *(undefined4 *)(pFVar1 + 0x24) = 0;
    *(undefined4 *)(pFVar1 + 0x28) = 0xf;
    pFVar1[0x14] = (FlagManager)0x0;
  }
  ExceptionList = local_10;
  instance = pFVar1;
  return pFVar1;
}


// public: static class Pather * __cdecl Singleton<class Pather>::getInstance(void)

Pather * __cdecl Singleton<Pather>::getInstance(void)

{
  Pather *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2712;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (instance == (Pather *)0x0) {
    this = operator_new(0x98);
    local_8 = 0;
    instance = (Pather *)Pather::Pather(this);
  }
  ExceptionList = local_10;
  return instance;
}


// public: static class PassengerManager * __cdecl Singleton<class
// PassengerManager>::getInstance(void)

PassengerManager * __cdecl Singleton<>::getInstance(void)

{
  if (instance == (PassengerManager *)0x0) {
    instance = operator_new(0x18);
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
    *(undefined4 *)instance = 0;
    *(undefined4 *)(instance + 4) = 0;
    *(undefined4 *)(instance + 8) = 0;
    *(undefined4 *)(instance + 0xc) = 0;
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
  }
  return instance;
}


// public: static class ShipChatterData * __cdecl Singleton<class
// ShipChatterData>::getInstance(void)

ShipChatterData * __cdecl Singleton<>::getInstance(void)

{
  if (instance == (ShipChatterData *)0x0) {
    instance = operator_new(0x3c);
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
    *(undefined4 *)(instance + 0x1c) = 0;
    *(undefined4 *)(instance + 0x20) = 0;
    *(undefined4 *)(instance + 0x28) = 0;
    *(undefined4 *)(instance + 0x2c) = 0;
    *(undefined4 *)(instance + 0x34) = 0;
    *(undefined4 *)(instance + 0x38) = 0;
    *(undefined4 *)instance = 0;
    *(undefined4 *)(instance + 4) = 0;
    *(undefined4 *)(instance + 8) = 0;
    *(undefined4 *)(instance + 0xc) = 0;
    *(undefined4 *)(instance + 0x10) = 0;
    *(undefined4 *)(instance + 0x14) = 0;
    *(undefined4 *)(instance + 0x18) = 0;
    *(undefined4 *)(instance + 0x1c) = 0;
    *(undefined4 *)(instance + 0x20) = 0;
    *(undefined4 *)(instance + 0x24) = 0;
    *(undefined4 *)(instance + 0x28) = 0;
    *(undefined4 *)(instance + 0x2c) = 0;
    *(undefined4 *)(instance + 0x30) = 0;
    *(undefined4 *)(instance + 0x34) = 0;
    *(undefined4 *)(instance + 0x38) = 0;
  }
  return instance;
}


// public: static class CharacterAnimationManager * __cdecl Singleton<class
// CharacterAnimationManager>::getInstance(void)

CharacterAnimationManager * __cdecl Singleton<>::getInstance(void)

{
  CharacterAnimationManager *pCVar1;
  _Tree_node<> *p_Var2;
  _Tree_comp_alloc<> *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba692;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = instance;
  if (instance == (CharacterAnimationManager *)0x0) {
    pCVar1 = operator_new(0x20);
    *(undefined4 *)pCVar1 = 0;
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(undefined4 *)(pCVar1 + 8) = 0;
    *(undefined4 *)(pCVar1 + 0xc) = 0;
    *(undefined4 *)(pCVar1 + 0x10) = 0;
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
    *(undefined4 *)pCVar1 = 0;
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(undefined4 *)(pCVar1 + 8) = 0;
    *(undefined4 *)(pCVar1 + 0xc) = 0;
    *(undefined4 *)(pCVar1 + 0x10) = 0;
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    local_8 = 2;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
    p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this);
    *(_Tree_node<> **)(pCVar1 + 0x18) = p_Var2;
  }
  ExceptionList = local_10;
  instance = pCVar1;
  return pCVar1;
}


// public: static class ShipMechanics * __cdecl Singleton<class ShipMechanics>::getInstance(void)

ShipMechanics * __cdecl Singleton<>::getInstance(void)

{
  if (instance == (ShipMechanics *)0x0) {
    instance = operator_new(1);
  }
  return instance;
}


// public: static class InputConfiguration * __cdecl Singleton<class
// InputConfiguration>::getInstance(void)

InputConfiguration * __cdecl Singleton<>::getInstance(void)

{
  InputConfiguration *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be4bf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (instance == (InputConfiguration *)0x0) {
    this = operator_new(0x24);
    local_8 = 0;
    instance = (InputConfiguration *)InputConfiguration::InputConfiguration(this);
  }
  ExceptionList = local_10;
  return instance;
}


// public: static class MenuManager * __cdecl Singleton<class MenuManager>::getInstance(void)

MenuManager * __cdecl Singleton<>::getInstance(void)

{
  MenuManager *pMVar1;
  
  pMVar1 = instance;
  if (instance == (MenuManager *)0x0) {
    pMVar1 = operator_new(0x10);
    instance = pMVar1;
    *(undefined4 *)pMVar1 = 0;
    *(undefined4 *)(pMVar1 + 4) = 0;
    *(undefined4 *)(pMVar1 + 8) = 0;
    *(undefined4 *)(pMVar1 + 0xc) = 0;
  }
  return pMVar1;
}
