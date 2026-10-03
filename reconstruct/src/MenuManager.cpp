// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Menu * __thiscall MenuManager::getMenu(MenuManager *this,int param_1)
Menu * MenuManager::getMenu(int param_1)

{
  Menu *pMVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 8) - *(int *)((char *)this + 4) >> 2;
  if (uVar3 != 0) {
    do {
      pMVar1 = *(Menu **)(*(int *)((char *)this + 4) + uVar2 * 4);
      if (*(int *)(pMVar1 + 0x278) == param_1) {
        return pMVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (Menu *)0x0;
}


// Ghidra: void __thiscall MenuManager::resetGame(MenuManager *this)
void MenuManager::resetGame()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  RoomObject *this_00;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  FlagManager *pFVar5;
  PresentationInterface *pPVar6;
  FictionData *pFVar7;
  Faction *this_01;
  GameLogic *this_02;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_03;
  TradeEngine *this_04;
  SaveHandler *this_05;
  int iVar8;
  uint unaff_EDI;
  RoomObject *pRVar9;
  std::string local_40 [12];
  undefined4 local_34;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c5fc8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)g_gameLogic = 1;
  ((GameLogic *)this)->shutDownCurrentScenario();
  (this_02)->initialiseScenario();
  local_34 = 0x52c0c1;
  bVar3 = ghidra::lib::_Traits_equal___x28_x29("objectsinspace",0xe,pcVar4,unaff_EDI);
  this_03 = extraout_ECX;
  if ((bVar3) && (g_gameLogic[0x119] != (byte)0x0)) {
    local_34 = 0;
    ghidra::str::assign
              ((std::string *)&stack0xffffffbc,"lock_manual_engine_control",0x1a);
    // [seh] local_8 = 0;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    local_34 = 0;
    ghidra::str::assign((std::string *)&stack0xffffffbc,"owi_tutorialnpcsdisabled",0x18);
    // [seh] local_8 = 1;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    this_03 = extraout_ECX_00;
  }
  (this_03)->initialiseClient(false);
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x30e) != '\0') {
    pPVar6 = ghidra::any_singleton();
    local_14 = 0;
    iVar1 = *(int *)(pPVar6 + 0x2d4);
    iVar8 = *(int *)(iVar1 + 0x90);
    if (*(int *)(iVar1 + 0x94) - iVar8 >> 2 != 0) {
      do {
        this_00 = *(RoomObject **)(iVar8 + local_14 * 4);
        if (*(int *)(this_00 + *(int *)(this_00 + 0x388) * 4 + 0x624) != 0) {
          local_34 = 0x52c1ee;
          bVar3 = ghidra::lib::_Traits_equal___x28_x29("c_weapons2",10,pcVar4,unaff_EDI);
          if (!bVar3) {
            iVar8 = 0;
            pRVar9 = this_00 + 0x624;
            do {
              iVar2 = *(int *)pRVar9;
              if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x128) == 0)) && (*(int *)(iVar2 + 300) != 0))
                 && (*(int *)(*(int *)(iVar2 + 300) + 0x10) != 0)) {
                local_34 = 0x52c23b;
                bVar3 = ghidra::lib::_Traits_equal___x28_x29("Weapons",7,pcVar4,unaff_EDI);
                if (bVar3) {
                  (this_00)->switchToScreen(iVar8);
                  local_34 = 0x52c287;
                  debugPrint("DETAIL","Switching helm display to ship control.");
                  goto LAB_0052c28a;
                }
              }
              iVar8 = iVar8 + 1;
              pRVar9 = pRVar9 + 4;
            } while (iVar8 < 10);
          }
        }
        iVar8 = *(int *)(iVar1 + 0x90);
        local_14 = local_14 + 1;
      } while (local_14 < (uint)(*(int *)(iVar1 + 0x94) - iVar8 >> 2));
    }
  }
LAB_0052c28a:
  local_34 = 0x52c2ae;
  bVar3 = ghidra::lib::_Traits_equal___x28_x29("objectsinspace",0xe,pcVar4,unaff_EDI);
  if (bVar3) {
    if (g_gameLogic[0x119] == (byte)0x0) goto LAB_0052c43a;
    local_34 = 0;
    ghidra::str::assign((std::string *)&stack0xffffffbc,"int_wendymafumoconv2done",0x18);
    // [seh] local_8 = 2;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    local_34 = 0;
    ghidra::str::assign((std::string *)&stack0xffffffbc,"owi_lesliegarbutconv1done",0x19)
    ;
    // [seh] local_8 = 3;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    local_34 = 0;
    ghidra::str::assign((std::string *)&stack0xffffffbc,"owi_lesliegarbutconv2done",0x19)
    ;
    // [seh] local_8 = 4;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
    local_34 = 0;
    ghidra::str::assign((std::string *)&stack0xffffffbc,"owi_lesliegarbutconv3done",0x19)
    ;
    // [seh] local_8 = 5;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar5)->setFlag();
  }
  if ((g_gameLogic[0x119] != (byte)0x0) && (g_gameLogic[0x11b] == (byte)0x0)) {
    local_40[0] = (std::string)0x0;
    ghidra::str::assign(local_40,"ulse",4);
    // [seh] local_8 = 6;
    pFVar7 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    this_01 = (pFVar7)->getFactionForID();
    if (this_01 != (Faction *)0x0) {
      (this_01)->getAccess();
      ghidra::any_singleton();
      (this_04)->repopulateCurrentContracts();
    }
  }
LAB_0052c43a:
  if (((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) &&
      (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)) {
    ghidra::any_singleton();
    (this_05)->saveGame();
  }
  // [seh] ExceptionList = local_10;
  return;
}
