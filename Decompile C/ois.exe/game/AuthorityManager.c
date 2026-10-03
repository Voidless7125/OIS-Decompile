#include "../ois.exe.h"


// public: bool __thiscall AuthorityManager::shipHasBeenScanned(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall AuthorityManager::shipHasBeenScanned(AuthorityManager *this,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000018;
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)local_28,(basic_string<> *)&param_2);
  uVar1 = std::_Tree<>::count((_Tree<> *)this,(basic_string<> *)local_28);
  if (uVar1 == 0) {
    if (0xf < local_14) {
      pnVar3 = (nothrow_t *)(local_14 + 1);
      pvVar2 = local_28[0];
      if ((nothrow_t *)0xfff < pnVar3) {
        pvVar2 = *(void **)((int)local_28[0] + -4);
        pnVar3 = (nothrow_t *)(local_14 + 0x24);
        if (0x1f < (uint)((int)local_28[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar3);
    }
    bVar4 = false;
  }
  else {
    if (0xf < local_14) {
      pnVar3 = (nothrow_t *)(local_14 + 1);
      pvVar2 = local_28[0];
      if ((nothrow_t *)0xfff < pnVar3) {
        pvVar2 = *(void **)((int)local_28[0] + -4);
        pnVar3 = (nothrow_t *)(local_14 + 0x24);
        if (0x1f < (uint)((int)local_28[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar3);
    }
    bVar4 = true;
  }
  local_28[0] = (void *)((uint)local_28[0] & 0xffffff00);
  local_14 = 0xf;
  local_18 = 0;
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return bVar4;
}


// public: void __thiscall AuthorityManager::haveScannedShip(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall AuthorityManager::haveScannedShip(AuthorityManager *this,void *param_2)

{
  float *pfVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3b48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pfVar1 = std::map<>::operator[]((map<> *)this,(basic_string<> *)&param_2);
  *pfVar1 = 180.0;
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall AuthorityManager::reportBelligerant(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool)

void __thiscall
AuthorityManager::reportBelligerant(AuthorityManager *this,char param_2,void *param_3)

{
  Ship *pSVar1;
  int *piVar2;
  SpaceStation *this_00;
  Stats *pSVar3;
  EmailManager *pEVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  Ship *pSVar7;
  uint in_stack_0000001c;
  basic_string<> abStack_78 [8];
  undefined4 uStack_70;
  char *local_60;
  Ship *pSStack_5c;
  undefined4 *puStack_58;
  basic_string<> local_48 [4];
  undefined4 uStack_44;
  int iVar8;
  Faction *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bd950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(local_48,(basic_string<> *)&param_3);
  pSVar1 = GameData::getShipWithRego();
  if (pSVar1 == (Ship *)0x0) {
    debugPrint("ERROR","Belligerant reported who no longer exists.");
  }
  else {
    pSVar7 = pSVar1 + 8;
    uStack_44 = 0x4a8bda;
    debugPrint("GAME","Belligerant reported: %s / %s");
    piVar2 = std::map<>::operator[]((map<> *)(this + 0x14),(basic_string<> *)&param_3);
    *piVar2 = 1;
    if ((pSVar1[0x234] != (Ship)0x0) && (*(char *)(*(int *)(pSVar1 + 0x40) + 0x34) != '\0')) {
      local_14 = (Faction *)0x0;
      std::basic_string<>::basic_string<>
                (local_48,(basic_string<> *)(*(int *)(pSVar1 + 0x24) + 0xf0));
      this_00 = GameData::getSpaceStation();
      if (this_00 != (SpaceStation *)0x0) {
        local_14 = Sector::getMainFaction(*(Sector **)(pSVar1 + 0x24));
        if (param_2 == '\0') {
          iVar8 = 1000;
        }
        else {
          iVar8 = 2000;
        }
        SpaceStation::addAmount(this_00,iVar8);
      }
      local_48[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_48,"fines_received",0xe);
      local_8._0_1_ = 1;
      pSVar3 = Singleton<Stats>::getInstance();
      local_8._0_1_ = 0;
      Stats::addStat(pSVar3);
      puStack_58 = (undefined4 *)0x4a8cb6;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"",0);
      local_8._0_1_ = 2;
      uStack_70 = 0x4a8cdf;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff9c,"fines_received",0xe);
      local_8._0_1_ = 3;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff84,"play",4);
      local_8._0_1_ = 0;
      Analytics::logEvent();
      if (param_2 == '\0') {
        puStack_58 = (undefined4 *)(*(int *)(pSVar1 + 0x24) + 0x1c);
        if (0xf < *(uint *)(*(int *)(pSVar1 + 0x24) + 0x30)) {
          puStack_58 = (undefined4 *)*puStack_58;
        }
        if (0xf < *(uint *)(pSVar1 + 0x1c)) {
          pSVar7 = *(Ship **)pSVar7;
        }
        local_60 = 
        "To: Owner, %s.\n\nYou were identified firing weapons in %s.\n\nA fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly.\n\nContinued belligerancy in this sector will be dealt with harshly."
        ;
        pSStack_5c = pSVar7;
        strUsingArgs((char *)local_48);
        local_8._0_1_ = 7;
        local_60 = (char *)((uint)local_60 & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)&local_60,"BELLIGERANCY FINE",0x11);
        local_8._0_1_ = 8;
        std::basic_string<>::basic_string<>(abStack_78,(basic_string<> *)(local_14 + 0x20));
        local_8._0_1_ = 9;
      }
      else {
        puStack_58 = (undefined4 *)(*(int *)(pSVar1 + 0x24) + 0x1c);
        if (0xf < *(uint *)(*(int *)(pSVar1 + 0x24) + 0x30)) {
          puStack_58 = (undefined4 *)*puStack_58;
        }
        if (0xf < *(uint *)(pSVar1 + 0x1c)) {
          pSVar7 = *(Ship **)pSVar7;
        }
        local_60 = 
        "To: Owner, %s.\n\nYou were identified attempting to engage in piracy in %s.\n\nA fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly.\n\nContinued violence or threats of violence in this sector will be dealt with harshly."
        ;
        pSStack_5c = pSVar7;
        strUsingArgs((char *)local_48);
        local_8._0_1_ = 4;
        local_60 = (char *)((uint)local_60 & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)&local_60,"PIRACY FINE",0xb);
        local_8._0_1_ = 5;
        std::basic_string<>::basic_string<>(abStack_78,(basic_string<> *)(local_14 + 0x20));
        local_8._0_1_ = 6;
      }
      pEVar4 = Singleton<>::getInstance();
      local_8 = (uint)local_8._1_3_ << 8;
      EmailManager::addCustomEmail(pEVar4);
    }
  }
  if (0xf < in_stack_0000001c) {
    pnVar6 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return;
}
