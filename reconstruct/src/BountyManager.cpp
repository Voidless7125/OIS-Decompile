// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall BountyManager::completeBounty(BountyManager *this,Bounty *param_1)
void BountyManager::completeBounty(Bounty * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff78[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff60[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  int iVar2;
  Sector *this_00;
  Faction *pFVar3;
  void **ppvVar4;
  EmailManager *pEVar5;
  undefined4 *puVar6;
  Stats *this_01;
  LogSystem *this_02;
  uint extraout_ECX;
  void *pvVar7;
  GameData *extraout_ECX_00;
  GameData *pGVar8;
  nothrow_t *pnVar9;
  bool bVar10;
  uint local_b8;
  void *local_b4;
  void *pvStack_b0;
  void *pvStack_ac;
  uint local_9c;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bad51;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  debugPrint("GAME","Bounty complete on vessel %s");
  (this_02)->addLogLine(*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224), &DAT_00000002)
  ;
  ghidra::str::assign((std::string *)&stack0xffffff7c,"Bounty",6);
  (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
  puVar6 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar6 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      this_00 = (Sector *)*puVar6;
      if (*(int *)this_00 == *(int *)(param_1 + 0x50)) goto LAB_00482556;
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(g_gameData + 0x40));
  }
  this_00 = (Sector *)0x0;
LAB_00482556:
  pFVar3 = (this_00)->getMainFaction();
  bVar10 = pFVar3 == (Faction *)0x0;
  if (bVar10) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_2c,"Unknown",7);
    ppvVar4 = local_2c;
  }
  else {
    ppvVar4 = (void **)ghidra::str::ctor
                                 ((std::string *)local_44,(std::string *)(pFVar3 + 0x20));
  }
  // [seh] local_8 = (uint)bVar10;
  local_9c = 0x4825eb;
  strUsingArgs(&stack0xffffff7c);
  // [seh] local_8 = 2;
  local_9c = extraout_ECX & 0xffffff00;
  ghidra::str::assign((std::string *)&local_9c,"Bounty Earned",0xd);
  local_b4 = *ppvVar4;
  pvStack_b0 = ppvVar4[1];
  pvStack_ac = ppvVar4[2];
  ppvVar4[4] = (void *)0x0;
  ppvVar4[5] = (void *)0xf;
  *(undefined1 *)ppvVar4 = 0;
  // [seh] local_8._0_1_ = 4;
  local_b8 = 0x482655;
  pEVar5 = ghidra::any_singleton();
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  local_b8 = 0x482660;
  (pEVar5)->addCustomEmail();
  // [seh] local_8 = 0;
  if ((bVar10) && (0xf < local_18)) {
    pnVar9 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar9 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  // [seh] local_8 = 0xffffffff;
  if (!bVar10) {
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
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 8) = 0x4728c000;
  pvVar7 = *(void **)(g_gameData + 0x134);
  puVar6 = (undefined4 *)ghidra::lib::remove___x28_x29();
  pvVar1 = (void *)*puVar6;
  pGVar8 = extraout_ECX_00;
  if (pvVar1 != pvVar7) {
    iVar2 = *(int *)(g_gameData + 0x134);
    memmove(pvVar1,pvVar7,iVar2 - (int)pvVar7);
    pGVar8 = g_gameData;
    *(int *)(g_gameData + 0x134) = (iVar2 - (int)pvVar7) + (int)pvVar1;
  }
  Bounty::_scalar_deleting_destructor_(param_1,(uint)pGVar8);
  ghidra::str::assign((std::string *)&stack0xffffff7c,"bounties_completed",0x12);
  // [seh] local_8 = 5;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_01 = operator_new(0x58);
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    Singleton<Stats>::instance = (Stats *)new ((void *)(this_01)) Stats();
  }
  // [seh] local_8 = 0xffffffff;
  (Singleton<Stats>::instance)->addStat();
  ghidra::str::assign((std::string *)&stack0xffffff78,"",0);
  // [seh] local_8 = 7;
  pvStack_ac = (void *)0x482823;
  ghidra::str::assign((std::string *)&stack0xffffff60,"bounties_completed",0x12);
  // [seh] local_8 = CONCAT31(local_8._1_3_,8);
  local_b8 = local_b8 & 0xffffff00;
  ghidra::str::assign((std::string *)&local_b8,"commerce",8);
  // [seh] local_8 = 0xffffffff;
  Analytics::logEvent();
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
