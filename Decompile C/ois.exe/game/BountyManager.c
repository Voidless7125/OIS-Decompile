#include "../ois.exe.h"


// public: void __thiscall BountyManager::completeBounty(class Bounty *)

void __thiscall BountyManager::completeBounty(BountyManager *this,Bounty *param_1)

{
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
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bad51;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  debugPrint("GAME","Bounty complete on vessel %s");
  LogSystem::addLogLine(this_02,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000002)
  ;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"Bounty",6);
  BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124));
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
  pFVar3 = Sector::getMainFaction(this_00);
  bVar10 = pFVar3 == (Faction *)0x0;
  if (bVar10) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"Unknown",7);
    ppvVar4 = local_2c;
  }
  else {
    ppvVar4 = (void **)std::basic_string<>::basic_string<>
                                 ((basic_string<> *)local_44,(basic_string<> *)(pFVar3 + 0x20));
  }
  local_8 = (uint)bVar10;
  local_9c = 0x4825eb;
  strUsingArgs(&stack0xffffff7c);
  local_8 = 2;
  local_9c = extraout_ECX & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_9c,"Bounty Earned",0xd);
  local_b4 = *ppvVar4;
  pvStack_b0 = ppvVar4[1];
  pvStack_ac = ppvVar4[2];
  ppvVar4[4] = (void *)0x0;
  ppvVar4[5] = (void *)0xf;
  *(undefined1 *)ppvVar4 = 0;
  local_8._0_1_ = 4;
  local_b8 = 0x482655;
  pEVar5 = Singleton<>::getInstance();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_b8 = 0x482660;
  EmailManager::addCustomEmail(pEVar5);
  local_8 = 0;
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
  local_8 = 0xffffffff;
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
  puVar6 = (undefined4 *)std::remove<>();
  pvVar1 = (void *)*puVar6;
  pGVar8 = extraout_ECX_00;
  if (pvVar1 != pvVar7) {
    iVar2 = *(int *)(g_gameData + 0x134);
    memmove(pvVar1,pvVar7,iVar2 - (int)pvVar7);
    pGVar8 = g_gameData;
    *(int *)(g_gameData + 0x134) = (iVar2 - (int)pvVar7) + (int)pvVar1;
  }
  Bounty::_scalar_deleting_destructor_(param_1,(uint)pGVar8);
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"bounties_completed",0x12);
  local_8 = 5;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_01 = operator_new(0x58);
    local_8 = CONCAT31(local_8._1_3_,6);
    Singleton<Stats>::instance = (Stats *)Stats::Stats(this_01);
  }
  local_8 = 0xffffffff;
  Stats::addStat(Singleton<Stats>::instance);
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"",0);
  local_8 = 7;
  pvStack_ac = (void *)0x482823;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff60,"bounties_completed",0x12);
  local_8 = CONCAT31(local_8._1_3_,8);
  local_b8 = local_b8 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_b8,"commerce",8);
  local_8 = 0xffffffff;
  Analytics::logEvent();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
