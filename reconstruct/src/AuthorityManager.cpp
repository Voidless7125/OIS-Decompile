// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall AuthorityManager::shipHasBeenScanned(AuthorityManager *this,void *param_2)
bool AuthorityManager::shipHasBeenScanned(void * param_2)

{
  uint uVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  bool bVar4;
  uint in_stack_00000018;
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b1e48;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor((std::string *)local_28,(std::string *)&param_2);
  uVar1 = ghidra::lib::_Tree__count((ghidra::lib::_Tree_t *)this,(std::string *)local_28);
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
  // [seh] ExceptionList = local_10;
  return bVar4;
}


// Ghidra: void __thiscall AuthorityManager::haveScannedShip(AuthorityManager *this,void *param_2)
void AuthorityManager::haveScannedShip(void * param_2)

{
  float *pfVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b3b48;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pfVar1 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)this,(std::string *)&param_2);
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AuthorityManager::reportBelligerant(AuthorityManager *this,char param_2,void *param_3)
void AuthorityManager::reportBelligerant(char param_2, void * param_3)

{
  char stack0xffffffb4[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff84[1] = {0};  // [pseudo] address of an unnamed stack slot
  Ship *pSVar1;
  int *piVar2;
  SpaceStation *this_00;
  Stats *pSVar3;
  EmailManager *pEVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  Ship *pSVar7;
  uint in_stack_0000001c;
  std::string abStack_78 [8];
  undefined4 uStack_70;
  char *local_60;
  Ship *pSStack_5c;
  // [seh] undefined4 *puStack_58;
  std::string local_48 [4];
  undefined4 uStack_44;
  int iVar8;
  Faction *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005bd950;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(local_48,(std::string *)&param_3);
  pSVar1 = GameData::getShipWithRego();
  if (pSVar1 == (Ship *)0x0) {
    debugPrint("ERROR","Belligerant reported who no longer exists.");
  }
  else {
    pSVar7 = pSVar1 + 8;
    uStack_44 = 0x4a8bda;
    debugPrint("GAME","Belligerant reported: %s / %s");
    piVar2 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x14),(std::string *)&param_3);
    *piVar2 = 1;
    if ((pSVar1[0x234] != (byte)0x0) && (*(char *)(*(int *)(pSVar1 + 0x40) + 0x34) != '\0')) {
      local_14 = (Faction *)0x0;
      ghidra::str::ctor
                (local_48,(std::string *)(*(int *)(pSVar1 + 0x24) + 0xf0));
      this_00 = GameData::getSpaceStation();
      if (this_00 != (SpaceStation *)0x0) {
        local_14 = (*(Sector **)(pSVar1 + 0x24))->getMainFaction();
        if (param_2 == '\0') {
          iVar8 = 1000;
        }
        else {
          iVar8 = 2000;
        }
        (this_00)->addAmount(iVar8);
      }
      local_48[0] = (std::string)0x0;
      ghidra::str::assign(local_48,"fines_received",0xe);
      // [seh] local_8._0_1_ = 1;
      pSVar3 = Singleton<Stats>::getInstance();
      // [seh] local_8._0_1_ = 0;
      (pSVar3)->addStat();
      // [seh] puStack_58 = (undefined4 *)0x4a8cb6;
      ghidra::str::assign((std::string *)&stack0xffffffb4,"",0);
      // [seh] local_8._0_1_ = 2;
      uStack_70 = 0x4a8cdf;
      ghidra::str::assign((std::string *)&stack0xffffff9c,"fines_received",0xe);
      // [seh] local_8._0_1_ = 3;
      ghidra::str::assign((std::string *)&stack0xffffff84,"play",4);
      // [seh] local_8._0_1_ = 0;
      Analytics::logEvent();
      if (param_2 == '\0') {
        // [seh] puStack_58 = (undefined4 *)(*(int *)(pSVar1 + 0x24) + 0x1c);
        if (0xf < *(uint *)(*(int *)(pSVar1 + 0x24) + 0x30)) {
          // [seh] puStack_58 = (undefined4 *)*puStack_58;
        }
        if (0xf < *(uint *)(pSVar1 + 0x1c)) {
          pSVar7 = *(Ship **)pSVar7;
        }
        local_60 = 
        "To: Owner, %s.\n\nYou were identified firing weapons in %s.\n\nA fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly.\n\nContinued belligerancy in this sector will be dealt with harshly."
        ;
        pSStack_5c = pSVar7;
        strUsingArgs((char *)local_48);
        // [seh] local_8._0_1_ = 7;
        local_60 = (char *)((uint)local_60 & 0xffffff00);
        ghidra::str::assign((std::string *)&local_60,"BELLIGERANCY FINE",0x11);
        // [seh] local_8._0_1_ = 8;
        ghidra::str::ctor(abStack_78,(std::string *)(local_14 + 0x20));
        // [seh] local_8._0_1_ = 9;
      }
      else {
        // [seh] puStack_58 = (undefined4 *)(*(int *)(pSVar1 + 0x24) + 0x1c);
        if (0xf < *(uint *)(*(int *)(pSVar1 + 0x24) + 0x30)) {
          // [seh] puStack_58 = (undefined4 *)*puStack_58;
        }
        if (0xf < *(uint *)(pSVar1 + 0x1c)) {
          pSVar7 = *(Ship **)pSVar7;
        }
        local_60 = 
        "To: Owner, %s.\n\nYou were identified attempting to engage in piracy in %s.\n\nA fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly.\n\nContinued violence or threats of violence in this sector will be dealt with harshly."
        ;
        pSStack_5c = pSVar7;
        strUsingArgs((char *)local_48);
        // [seh] local_8._0_1_ = 4;
        local_60 = (char *)((uint)local_60 & 0xffffff00);
        ghidra::str::assign((std::string *)&local_60,"PIRACY FINE",0xb);
        // [seh] local_8._0_1_ = 5;
        ghidra::str::ctor(abStack_78,(std::string *)(local_14 + 0x20));
        // [seh] local_8._0_1_ = 6;
      }
      pEVar4 = ghidra::any_singleton();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      (pEVar4)->addCustomEmail();
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
  // [seh] ExceptionList = local_10;
  return;
}
