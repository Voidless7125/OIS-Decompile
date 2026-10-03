// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall Game::init(Game *this)
bool Game::init()

{
  std::string *this_00;
  bool bVar1;
  HardwareOutput *pHVar2;
  PresentationInterface *pPVar3;
  GameLogic *pGVar4;
  ServerPresentationInterface *pSVar5;
  NetworkServer *this_01;
  undefined2 *puVar6;
  int iVar7;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *pGVar8;
  GameLogic *extraout_ECX_01;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b12d2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar1 = cocos2d::Layer::init((Layer *)this);
  if (!bVar1) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  if (HardwareOutput::m_instance == (HardwareOutput *)0x0) {
    pHVar2 = operator_new(0x14);
    HardwareOutput::m_instance = pHVar2;
    *pHVar2 = (byte)0x0;
    *(undefined4 *)(pHVar2 + 4) = 0;
    *(undefined4 *)(pHVar2 + 8) = 0;
    *(undefined4 *)(pHVar2 + 0xc) = 0;
    *(undefined4 *)(pHVar2 + 0x10) = 0;
  }
  this_00 = (std::string *)(g_gameData + 0xb4);
  g_gameLogic[0x72] = (byte)0x1;
  ghidra::str::assign(this_00,"mainmenu",8);
  pGVar4 = g_gameLogic;
  pGVar8 = g_gameLogic + 0x71;
  *(undefined4 *)g_gameLogic = 1;
  if ((*pGVar8 == (byte)0x0) && (pGVar8 = extraout_ECX, pGVar4[0x72] == (byte)0x0)) {
LAB_00402d47:
    if (pGVar4[0x70] == (byte)0x0) goto LAB_00402d57;
  }
  else {
    ghidra::any_singleton();
    if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
      pPVar3 = operator_new(0x418);
      // [seh] local_8 = 0;
      ghidra::Singleton<void>::instance =
           (PresentationInterface *)new ((void *)(pPVar3)) PresentationInterface();
      // [seh] local_8 = 0xffffffff;
    }
    pPVar3 = ghidra::Singleton<void>::instance;
    *(PresentationInterface **)((char *)this + 0x290) = ghidra::Singleton<void>::instance;
    *(Game **)(pPVar3 + 0x404) = this;
    (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)((char *)this + 0x290));
    pGVar4 = g_gameLogic;
    pGVar8 = extraout_ECX_00;
    if (g_gameLogic[0x72] == (byte)0x0) goto LAB_00402d47;
  }
  (pGVar8)->initialiseScenario();
  pGVar4 = g_gameLogic;
  pGVar8 = extraout_ECX_01;
LAB_00402d57:
  if (pGVar4[0x72] != (byte)0x0) {
    (pGVar8)->initialiseClient(true);
    pGVar4 = g_gameLogic;
  }
  if (pGVar4[0x70] != (byte)0x0) {
    pSVar5 = ghidra::any_singleton();
    *(ServerPresentationInterface **)((char *)this + 0x294) = pSVar5;
    (**(code **)(*(int *)this + 0x10c))(pSVar5);
    this_01 = ghidra::any_singleton();
    if (*(void **)(this_01 + 0x94) != (void *)0x0) {
      operator_delete(*(void **)(this_01 + 0x94),(nothrow_t *)0x34);
    }
    puVar6 = operator_new(0x34);
    *(undefined1 *)(puVar6 + 0x16) = 1;
    *(undefined1 *)(puVar6 + 1) = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0;
    *(undefined4 *)(puVar6 + 0x11) = 2;
    *(undefined2 **)(this_01 + 0x94) = puVar6;
    *puVar6 = 0xa608;
    *(undefined2 *)(*(int *)(this_01 + 0x94) + 0x22) = 2;
    iVar7 = (**(code **)(**(int **)(this_01 + 0x90) + 4))
                      (*(undefined4 *)(this_01 + 0x28),*(undefined4 *)(this_01 + 0x94),1,0xfffe7961)
    ;
    (**(code **)(**(int **)(this_01 + 0x90) + 0x1c))(*(undefined2 *)(this_01 + 0x28));
    if (iVar7 == 0) {
      debugPrint("MULTI","SERVER: Listening on port %d",0xa608);
    }
    *(undefined4 *)(this_01 + 0x24) = 0xa608;
    *(undefined4 *)(this_01 + 0x1c) = 1;
    (this_01)->startSyncingServerInfoState();
  }
  cocos2d::Node::scheduleUpdate((Node *)this);
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: void __thiscall Game::update(Game *this,float param_1)
void Game::update(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  NetworkClient *this_00;
  ServerPresentationInterface *pSVar3;
  NetworkServer *pNVar4;
  undefined4 ****ppppuVar5;
  SoundEngine *this_01;
  GameLogic *extraout_ECX;
  GameLogic *this_02;
  LogSystem *this_03;
  undefined4 ****ppppuVar6;
  uint unaff_EDI;
  uint uVar7;
  nothrow_t *pnVar8;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b12f8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar2;
  if (g_gameLogic[0x71] != (byte)0x0) {
    this_00 = ghidra::any_singleton();
    (this_00)->runLogic((float)pcVar2);
  }
  if (g_gameLogic[0x70] != (byte)0x0) {
    pSVar3 = ghidra::any_singleton();
    (**(code **)(*(int *)pSVar3 + 0x1e8))(param_1);
    pNVar4 = ghidra::any_singleton();
    (pNVar4)->runLogic((float)pcVar2);
  }
  if (g_gameLogic[0x73] == (byte)0x0) {
    if ((g_gameLogic[0x72] != (byte)0x0) || (g_gameLogic[0x71] != (byte)0x0)) {
      (g_gameLogic)->runClientLogic((float)pcVar2);
    }
    this_02 = g_gameLogic;
    if ((g_gameLogic[0x72] != (byte)0x0) ||
       ((g_gameLogic[0x70] != (byte)0x0 &&
        (pNVar4 = ghidra::any_singleton(), this_02 = extraout_ECX, *(int *)(pNVar4 + 0x1c) == 3))
       )) {
      (this_02)->runServerLogic((float)pcVar2);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  // [seh] local_8 = 0;
  if (0 < *(int *)(g_gameLogic + 100)) {
    bVar1 = (g_gameLogic)->safeForTimeCompression((std::string *)local_2c);
    uVar7 = local_18;
    ppppuVar6 = (undefined4 ****)local_2c[0];
    if (!bVar1) {
      *(undefined4 *)(g_gameLogic + 100) = 0;
      bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
      if (!bVar1) {
        ppppuVar5 = local_2c;
        if (0xf < uVar7) {
          ppppuVar5 = ppppuVar6;
        }
        LogSystem::addLogLine
                  (this_03,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000004,"%s",
                   ppppuVar5);
        this_01 = ghidra::any_singleton();
        ppppuVar6 = (undefined4 ****)local_2c[0];
        uVar7 = local_18;
        if (*this_01 != (byte)0x0) {
          (this_01)->addSound(6, 0x2d, -1, false, true, 1.0);
          ppppuVar6 = (undefined4 ****)local_2c[0];
          uVar7 = local_18;
        }
      }
    }
    if (0xf < uVar7) {
      pnVar8 = (nothrow_t *)(uVar7 + 1);
      ppppuVar5 = ppppuVar6;
      if ((nothrow_t *)0xfff < pnVar8) {
        ppppuVar5 = (undefined4 ****)ppppuVar6[-1];
        pnVar8 = (nothrow_t *)(uVar7 + 0x24);
        if (0x1f < (uint)((int)ppppuVar6 + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar5,pnVar8);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
