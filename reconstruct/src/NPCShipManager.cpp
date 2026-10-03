// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall NPCShipManager::generateNewFreighter(NPCShipManager *this,int param_1)
void NPCShipManager::generateNewFreighter(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  NameManager *pNVar2;
  Ship *this_00;
  ShipBehaviour *this_01;
  int iVar3;
  ShipModule *pSVar4;
  ShipModuleClass *pSVar5;
  SpaceStation *pSVar6;
  SpaceStation *pSVar7;
  int iVar8;
  NPCShipManager *this_02;
  NPCShipManager *this_03;
  PrivateCommsManager *this_04;
  void *pvVar9;
  nothrow_t *pnVar10;
  int iVar11;
  bool bVar12;
  std::string abStack_e8 [16];
  undefined4 uStack_d8;
  std::string abStack_d0 [16];
  undefined4 uStack_c0;
  std::string abStack_b8 [12];
  undefined4 uStack_ac;
  uint local_a0;
  char *pcVar13;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bda34;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  // [seh] local_8 = 0;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar12 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar12 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar12) {
    uVar1 = 7;
    pcVar13 = "leander";
  }
  else {
    uVar1 = 5;
    pcVar13 = "ceres";
  }
  ghidra::str::assign((std::string *)local_48,pcVar13,uVar1);
  pNVar2 = ghidra::any_singleton();
  (pNVar2)->generateFreighterName();
  // [seh] local_8._0_1_ = 1;
  pNVar2 = ghidra::any_singleton();
  (pNVar2)->generateGeneralRego();
  // [seh] local_8._0_1_ = 2;
  local_a0 = local_a0 & 0xffffff00;
  uStack_ac = 0x4a9867;
  ghidra::str::assign((std::string *)&local_a0,"stock",5);
  // [seh] local_8._0_1_ = 3;
  uStack_c0 = 0x4a987c;
  ghidra::str::ctor(abStack_b8,(std::string *)local_48);
  // [seh] local_8._0_1_ = 4;
  uStack_d8 = 0x4a9891;
  ghidra::str::ctor(abStack_d0,(std::string *)local_60);
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor(abStack_e8,(std::string *)local_30);
  // [seh] local_8._0_1_ = 2;
  this_00 = GameLogic::generateShip();
  this_01 = operator_new(0x164);
  // [seh] local_8._0_1_ = 7;
  iVar3 = new ((void *)(this_01)) ShipBehaviour(this_00, 1);
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  *(int *)(this_00 + 0x44) = iVar3;
  *(undefined4 *)(iVar3 + 0x74) = 3;
  iVar3 = rand();
  *(int *)(*(int *)(this_00 + 0x44) + 0x78) = iVar3 % 3;
  if ((*(int *)(*(int *)(this_00 + 0x44) + 0x70) != 0) &&
     (*(int *)(*(int *)(this_00 + 0x44) + 0x70) != 3)) {
    local_a0 = 0x4a992d;
    debugPrint("AI","%s: My captain is %s and %s");
  }
  (this_00)->giveFullPower();
  pSVar4 = operator_new(0x88);
  // [seh] local_8._0_1_ = 8;
  local_a0 = local_a0 & 0xffffff00;
  uStack_ac = 0x4a996c;
  ghidra::str::assign((std::string *)&local_a0,"eb10",4);
  pSVar5 = GameData::getModuleClassWithIdentifier();
  pSVar4 = (ShipModule *)new ((void *)(pSVar4)) ShipModule(pSVar5);
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  (*(SystemManager **)(this_00 + 0x40))->addModule(pSVar4, -1);
  (*(ShipBehaviour **)(this_00 + 0x44))->configureShipDesires();
  debugPrint("GAME","Generating freighter: %s");
  pSVar6 = getRandomSpaceStation(this_02,*(int *)(this_00 + 0x20),*(Ship **)((char *)this + 4));
  *(SpaceStation **)((char *)this + 4) = pSVar6;
  pSVar7 = pSVar6 + 8;
  if ((std::string *)(*(int *)(this_00 + 0x44) + 0x7c) != (std::string *)pSVar7) {
    if (0xf < *(uint *)(pSVar6 + 0x1c)) {
      pSVar7 = *(SpaceStation **)pSVar7;
    }
    ghidra::str::assign
              ((std::string *)(*(int *)(this_00 + 0x44) + 0x7c),(char *)pSVar7,
               *(uint *)(pSVar6 + 0x18));
  }
  pSVar7 = pSVar6 + 0x238;
  if ((std::string *)(*(int *)(this_00 + 0x44) + 0x94) != (std::string *)pSVar7) {
    if (0xf < *(uint *)(pSVar6 + 0x24c)) {
      pSVar7 = *(SpaceStation **)pSVar7;
    }
    ghidra::str::assign
              ((std::string *)(*(int *)(this_00 + 0x44) + 0x94),(char *)pSVar7,
               *(uint *)(pSVar6 + 0x248));
  }
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(pSVar6 + 0x28);
  *(undefined8 *)(this_00 + 0x30) = *(undefined8 *)(pSVar6 + 0x30);
  ghidra::str::ctor
            ((std::string *)&local_a0,(std::string *)(*(int *)(this_00 + 0x44) + 0x94));
  pSVar7 = GameData::getSpaceStation();
  pSVar7 = getRandomSpaceStation(this_03,*(int *)(this_00 + 0x20),(Ship *)pSVar7);
  setFreighterDestination(this,this_00,pSVar7);
  ghidra::any_singleton();
  (this_04)->generateShipComms(this_00);
  iVar3 = rand();
  if (3 < iVar3 % 6 + 1) {
    iVar11 = 0;
    iVar3 = 8;
    do {
      iVar8 = rand();
      iVar11 = iVar11 + iVar8 % 10 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(float *)(*(int *)(this_00 + 0x44) + 100) = (float)(iVar11 + 0x14);
  }
  if (0xf < local_4c) {
    pnVar10 = (nothrow_t *)(local_4c + 1);
    pvVar9 = local_60[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_60[0] + -4);
      pnVar10 = (nothrow_t *)(local_4c + 0x24);
      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_1c) {
    pnVar10 = (nothrow_t *)(local_1c + 1);
    pvVar9 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_30[0] + -4);
      pnVar10 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_34) {
    pnVar10 = (nothrow_t *)(local_34 + 1);
    pvVar9 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_48[0] + -4);
      pnVar10 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NPCShipManager::setFreighterDestination(NPCShipManager *this,Ship *param_1,SpaceStation *param_2)
void NPCShipManager::setFreighterDestination(Ship * param_1, SpaceStation * param_2)

{
  char stack0xffffffb0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  CargoHold *pCVar2;
  int iVar3;
  SpaceStation *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  GameObject *pGVar11;
  int iVar12;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_1c;
  
  ghidra::str::ctor
            ((std::string *)&stack0xffffffb0,(std::string *)(*(int *)(param_1 + 0x44) + 0x94))
  ;
  pSVar4 = GameData::getSpaceStation();
  pGVar11 = (GameObject *)(param_2 + 8);
  if (param_2 == (SpaceStation *)0x0) {
    pGVar11 = (GameObject *)0x0;
  }
  (*(ShipBehaviour **)(param_1 + 0x44))->giveTravelTask(pGVar11, SUB41(param_2,0));
  *(GameObject **)(*(int *)(param_1 + 0x44) + 0xc) = pGVar11;
  if (pSVar4 == (SpaceStation *)0x0) {
    pSVar4 = (SpaceStation *)0x0;
  }
  else {
    pSVar4 = pSVar4 + 8;
  }
  *(SpaceStation **)(*(int *)(param_1 + 0x44) + 8) = pSVar4;
  iVar1 = *(int *)((char *)this + 0x18);
  iVar12 = *(int *)((char *)this + 0x14);
  iVar5 = rand();
  debugPrint("DETAIL","Selected route %d/%d");
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x38) =
       *(undefined4 *)(*(int *)((char *)this + 0x14) + (iVar5 % (iVar1 - iVar12 >> 2)) * 4);
  iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
  iVar6 = rand();
  iVar6 = iVar6 % (iVar1 + -1);
  local_1c = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x38);
  iVar12 = *(int *)(iVar1 + 0x1c);
  iVar5 = *(int *)(iVar1 + 0x24);
  if ((iVar5 != iVar12) && (-1 < iVar5)) {
    iVar12 = iVar5;
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  local_28 = iVar6 + 1;
  if ((-1 < iVar1) && (local_1c = 1, local_28 = iVar6, iVar6 < 1)) {
    local_28 = 1;
  }
  uVar8 = 0;
  puVar10 = *(undefined4 **)(g_gameData + 0x84);
  uVar7 = *(int *)(g_gameData + 0x88) - (int)puVar10 >> 2;
  if (uVar7 != 0) {
    do {
      local_24 = (int *)puVar10[uVar8];
      if (*local_24 == iVar12) goto LAB_004a9cbd;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  local_24 = (int *)0x0;
LAB_004a9cbd:
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      local_2c = (int *)*puVar10;
      if (*local_2c == iVar1) goto LAB_004a9ce2;
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar8 < uVar7);
  }
  local_2c = (int *)0x0;
LAB_004a9ce2:
  if (local_24 != (int *)0x0) {
    iVar6 = 0;
    iVar5 = 0xc;
    do {
      if (iVar6 < local_28) {
        pCVar2 = *(CargoHold **)(param_1 + 0x1f8);
        iVar3 = local_24[0x17];
        if (((iVar6 < 0) || ((0 < *(int *)(pCVar2 + 8) && (*(int *)(pCVar2 + 8) <= iVar6)))) ||
           (*(int *)(pCVar2 + iVar5) == 0)) {
          (pCVar2)->addPod(iVar6);
        }
        iVar9 = iVar12;
        if ((iVar3 != 0) && (iVar3 - 1U < 3)) {
          *(undefined1 *)(iVar3 + *(int *)(pCVar2 + iVar5)) = 1;
        }
LAB_004a9da2:
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + iVar5) + 8) = 0x14;
        *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + iVar5) + 4) = iVar9;
      }
      else if (iVar6 < local_28 + local_1c) {
        iVar3 = local_2c[0x17];
        pCVar2 = *(CargoHold **)(param_1 + 0x1f8);
        if ((iVar6 < 0) ||
           (((0 < *(int *)(pCVar2 + 8) && (*(int *)(pCVar2 + 8) <= iVar6)) ||
            (*(int *)(pCVar2 + iVar5) == 0)))) {
          (pCVar2)->addPod(iVar6);
        }
        iVar9 = iVar1;
        if ((iVar3 != 0) && (iVar3 - 1U < 3)) {
          *(undefined1 *)(iVar3 + *(int *)(pCVar2 + iVar5)) = 1;
        }
        goto LAB_004a9da2;
      }
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x44);
  }
  debugPrint("WORLD","Freighter: %s [%s] travelling %s -> %s");
  return;
}


// Ghidra: void __thiscall NPCShipManager::generateNewPoliceVessel(NPCShipManager *this,int param_1)
void NPCShipManager::generateNewPoliceVessel(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff64[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  uint uVar2;
  NameManager *pNVar3;
  Sector *this_00;
  NavPoint *pNVar4;
  Ship *this_01;
  ShipBehaviour *this_02;
  int iVar5;
  WeaponClass *pWVar6;
  undefined4 *puVar7;
  PrivateCommsManager *this_03;
  void *pvVar8;
  nothrow_t *pnVar9;
  bool bVar10;
  std::string abStack_e0 [16];
  undefined4 uStack_d0;
  std::string abStack_c8 [16];
  undefined4 uStack_b8;
  std::string abStack_b0 [8];
  undefined4 uStack_a8;
  uint local_98;
  char *pcVar11;
  int iVar12;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bdaa2;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  // [seh] local_8 = 0;
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar10 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar10) {
    uVar2 = 5;
    pcVar11 = "akula";
  }
  else {
    uVar2 = 6;
    pcVar11 = "kyushu";
  }
  ghidra::str::assign((std::string *)local_30,pcVar11,uVar2);
  pNVar3 = ghidra::any_singleton();
  (pNVar3)->generatePoliceName();
  // [seh] local_8._0_1_ = 1;
  pNVar3 = ghidra::any_singleton();
  (pNVar3)->generatePoliceRego();
  // [seh] local_8._0_1_ = 2;
  for (puVar7 = *(undefined4 **)(g_gameData + 0x3c); puVar7 != *(undefined4 **)(g_gameData + 0x40);
      puVar7 = puVar7 + 1) {
    this_00 = (Sector *)*puVar7;
    if (*(int *)this_00 == param_1) goto LAB_004a9eef;
  }
  this_00 = (Sector *)0x0;
LAB_004a9eef:
  pNVar4 = (this_00)->getRandomNavPoint(0);
  if (pNVar4 != (NavPoint *)0x0) {
    local_98 = local_98 & 0xffffff00;
    ghidra::str::assign((std::string *)&local_98,"stock",5);
    // [seh] local_8._0_1_ = 3;
    uStack_b8 = 0x4a9f3c;
    ghidra::str::ctor(abStack_b0,(std::string *)local_30);
    // [seh] local_8._0_1_ = 4;
    uStack_d0 = 0x4a9f51;
    ghidra::str::ctor(abStack_c8,(std::string *)local_48);
    // [seh] local_8._0_1_ = 5;
    ghidra::str::ctor(abStack_e0,(std::string *)local_60);
    // [seh] local_8._0_1_ = 2;
    this_01 = GameLogic::generateShip();
    this_02 = operator_new(0x164);
    // [seh] local_8._0_1_ = 7;
    iVar5 = new ((void *)(this_02)) ShipBehaviour(this_01, 7);
    // [seh] local_8._0_1_ = 2;
    *(int *)(this_01 + 0x44) = iVar5;
    *(undefined4 *)(iVar5 + 0x74) = 3;
    iVar5 = rand();
    *(int *)(*(int *)(this_01 + 0x44) + 0x78) = iVar5 % 3;
    if ((*(int *)(*(int *)(this_01 + 0x44) + 0x70) != 0) &&
       (*(int *)(*(int *)(this_01 + 0x44) + 0x70) != 3)) {
      local_98 = 0x4a9fee;
      debugPrint("AI","%s: My captain is %s and %s");
    }
    *(double *)(this_01 + 0x28) = (double)*(float *)(pNVar4 + 8);
    fVar1 = *(float *)(pNVar4 + 0xc);
    *(undefined4 *)(this_01 + 100) = 1;
    *(double *)(this_01 + 0x30) = (double)fVar1;
    (this_01)->giveFullPower();
    iVar5 = 0;
    *(undefined4 *)(*(int *)(this_01 + 0x44) + 4) = 1;
    if (0.0 < *(float *)(*(int *)(*(int *)(*(int *)(this_01 + 0x40) + 0x20) + 8) + 0x108)) {
      do {
        iVar12 = -1;
        uStack_a8 = 0x4aa064;
        ghidra::str::assign((std::string *)&stack0xffffff64,"m10",3);
        pWVar6 = GameData::getWeaponClassWithIdentifier();
        (this_01)->addWeapon(pWVar6, iVar12);
        iVar5 = iVar5 + 1;
      } while ((float)iVar5 <
               *(float *)(*(int *)(*(int *)(*(int *)(this_01 + 0x40) + 0x20) + 8) + 0x108));
    }
    (*(ShipBehaviour **)(this_01 + 0x44))->configureShipDesires();
    ghidra::str::assign((std::string *)(this_01 + 0x80),"Unknown",7);
    ghidra::any_singleton();
    (this_03)->generateShipComms(this_01);
  }
  if (0xf < local_34) {
    pnVar9 = (nothrow_t *)(local_34 + 1);
    pvVar8 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_48[0] + -4);
      pnVar9 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_4c) {
    pnVar9 = (nothrow_t *)(local_4c + 1);
    pvVar8 = local_60[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_60[0] + -4);
      pnVar9 = (nothrow_t *)(local_4c + 0x24);
      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_1c) {
    pnVar9 = (nothrow_t *)(local_1c + 1);
    pvVar8 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_30[0] + -4);
      pnVar9 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: Ship * __thiscall NPCShipManager::generateNewMilitaryVessel(NPCShipManager *this,int param_1)
Ship * NPCShipManager::generateNewMilitaryVessel(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff64[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  uint uVar2;
  NameManager *pNVar3;
  undefined4 *puVar4;
  NavPoint *pNVar5;
  ShipBehaviour *this_00;
  int iVar6;
  WeaponClass *pWVar7;
  Ship *pSVar8;
  Sector *pSVar9;
  PrivateCommsManager *this_01;
  void *pvVar10;
  nothrow_t *pnVar11;
  bool bVar12;
  std::string abStack_e0 [16];
  undefined4 uStack_d0;
  std::string abStack_c8 [16];
  undefined4 uStack_b8;
  std::string abStack_b0 [8];
  undefined4 uStack_a8;
  uint local_98;
  char *pcVar13;
  int iVar14;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bdb46;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  // [seh] local_8 = 0;
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar12 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar12 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar12) {
    uVar2 = 5;
    pcVar13 = "akula";
  }
  else {
    uVar2 = 9;
    pcVar13 = "headliner";
  }
  ghidra::str::assign((std::string *)local_30,pcVar13,uVar2);
  pNVar3 = ghidra::any_singleton();
  (pNVar3)->generatePoliceName();
  // [seh] local_8._0_1_ = 1;
  pNVar3 = ghidra::any_singleton();
  (pNVar3)->generatePoliceRego();
  for (puVar4 = *(undefined4 **)(g_gameData + 0x3c); puVar4 != *(undefined4 **)(g_gameData + 0x40);
      puVar4 = puVar4 + 1) {
    pSVar9 = (Sector *)*puVar4;
    if (*(int *)pSVar9 == param_1) goto LAB_004aa25f;
  }
  pSVar9 = (Sector *)0x0;
LAB_004aa25f:
  if (*(int *)(g_gameData + 0xd0) == 0) {
    // [seh] local_8 = 4;
  }
  else {
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
  }
  pNVar5 = (pSVar9)->getRandomNavPointNotNear();
  // [seh] local_8 = 2;
  if (pNVar5 != (NavPoint *)0x0) {
    local_98 = local_98 & 0xffffff00;
    ghidra::str::assign((std::string *)&local_98,"stock",5);
    // [seh] local_8._0_1_ = 5;
    uStack_b8 = 0x4aa31d;
    ghidra::str::ctor(abStack_b0,(std::string *)local_30);
    // [seh] local_8._0_1_ = 6;
    uStack_d0 = 0x4aa332;
    ghidra::str::ctor(abStack_c8,(std::string *)local_48);
    // [seh] local_8._0_1_ = 7;
    ghidra::str::ctor(abStack_e0,(std::string *)local_60);
    // [seh] local_8._0_1_ = 2;
    pSVar8 = GameLogic::generateShip();
    this_00 = operator_new(0x164);
    // [seh] local_8._0_1_ = 9;
    iVar6 = new ((void *)(this_00)) ShipBehaviour(pSVar8, 8);
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    *(int *)(pSVar8 + 0x44) = iVar6;
    *(undefined4 *)(iVar6 + 0x74) = 3;
    iVar6 = rand();
    *(int *)(*(int *)(pSVar8 + 0x44) + 0x78) = iVar6 % 3;
    if ((*(int *)(*(int *)(pSVar8 + 0x44) + 0x70) != 0) &&
       (*(int *)(*(int *)(pSVar8 + 0x44) + 0x70) != 3)) {
      local_98 = 0x4aa3cf;
      debugPrint("AI","%s: My captain is %s and %s");
    }
    *(double *)(pSVar8 + 0x28) = (double)*(float *)(pNVar5 + 8);
    fVar1 = *(float *)(pNVar5 + 0xc);
    *(undefined4 *)(pSVar8 + 100) = 1;
    *(double *)(pSVar8 + 0x30) = (double)fVar1;
    (pSVar8)->giveFullPower();
    iVar6 = 0;
    *(undefined4 *)(*(int *)(pSVar8 + 0x44) + 4) = 1;
    if (0.0 < *(float *)(*(int *)(*(int *)(*(int *)(pSVar8 + 0x40) + 0x20) + 8) + 0x108)) {
      do {
        iVar14 = -1;
        uStack_a8 = 0x4aa444;
        ghidra::str::assign((std::string *)&stack0xffffff64,"e10",3);
        pWVar7 = GameData::getWeaponClassWithIdentifier();
        (pSVar8)->addWeapon(pWVar7, iVar14);
        iVar6 = iVar6 + 1;
      } while ((float)iVar6 <
               *(float *)(*(int *)(*(int *)(*(int *)(pSVar8 + 0x40) + 0x20) + 8) + 0x108));
    }
    (*(ShipBehaviour **)(pSVar8 + 0x44))->configureShipDesires();
    ghidra::any_singleton();
    (this_01)->generateShipComms(pSVar8);
  }
  if (0xf < local_34) {
    pnVar11 = (nothrow_t *)(local_34 + 1);
    pvVar10 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_48[0] + -4);
      pnVar11 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_4c) {
    pnVar11 = (nothrow_t *)(local_4c + 1);
    pvVar10 = local_60[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_60[0] + -4);
      pnVar11 = (nothrow_t *)(local_4c + 0x24);
      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_1c) {
    pnVar11 = (nothrow_t *)(local_1c + 1);
    pvVar10 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_30[0] + -4);
      pnVar11 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] pSVar8 = (Ship *)__security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return pSVar8;
}


// Ghidra: Ship * __thiscall NPCShipManager::generateNewPirateVessel(NPCShipManager *this,int param_1)
Ship * NPCShipManager::generateNewPirateVessel(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff44[1] = {0};  // [pseudo] address of an unnamed stack slot
  NameManager *this_00;
  undefined4 *puVar1;
  NavPoint *pNVar2;
  Ship *pSVar3;
  WeaponClass *pWVar4;
  PrivateCommsManager *this_01;
  void *pvVar5;
  nothrow_t *pnVar6;
  Sector *pSVar7;
  int iVar8;
  std::string abStack_100 [16];
  undefined4 uStack_f0;
  std::string abStack_e8 [16];
  undefined4 uStack_d8;
  std::string abStack_d0 [8];
  undefined4 uStack_c8;
  char *pcVar9;
  std::string abStack_b8 [8];
  undefined4 uStack_b0;
  int iVar10;
  void *local_78 [4];
  undefined4 local_68;
  uint local_64;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bdc4a;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  // [seh] local_8._0_1_ = 1;
  // [seh] local_8._1_3_ = 0;
  rand();
  ghidra::str::assign((std::string *)local_48,"leander",7);
  ghidra::str::assign((std::string *)local_30,"stock",5);
  local_68 = 0;
  local_64 = 0xf;
  local_78[0] = (void *)((uint)local_78[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_78,"pirate",6);
  // [seh] local_8._0_1_ = 2;
  this_00 = ghidra::any_singleton();
  (this_00)->generateGeneralRego();
  for (puVar1 = *(undefined4 **)(g_gameData + 0x3c); puVar1 != *(undefined4 **)(g_gameData + 0x40);
      puVar1 = puVar1 + 1) {
    pSVar7 = (Sector *)*puVar1;
    if (*(int *)pSVar7 == param_1) goto LAB_004aa663;
  }
  pSVar7 = (Sector *)0x0;
LAB_004aa663:
  if (*(int *)(g_gameData + 0xd0) == 0) {
    // [seh] local_8 = 5;
  }
  else {
    // [seh] local_8 = CONCAT31(local_8._1_3_,4);
  }
  uStack_b0 = 0x4aa6d6;
  pNVar2 = (pSVar7)->getRandomNavPointNotNear();
  if (pNVar2 == (NavPoint *)0x0) {
    if (*(int *)(g_gameData + 0xd0) == 0) {
      // [seh] local_8 = 7;
    }
    else {
      // [seh] local_8 = 6;
    }
    uStack_b0 = 0x4aa76b;
    pNVar2 = (pSVar7)->getRandomNavPointNotNear();
    if (pNVar2 != (NavPoint *)0x0) goto LAB_004aa811;
    if (*(int *)(g_gameData + 0xd0) == 0) {
      // [seh] local_8 = 9;
    }
    else {
      // [seh] local_8 = 8;
    }
    uStack_b0 = 0x4aa800;
    pNVar2 = (pSVar7)->getRandomNavPointNotNear();
    if (pNVar2 != (NavPoint *)0x0) goto LAB_004aa811;
  }
  else {
LAB_004aa811:
    // [seh] local_8 = 3;
    if (3 < (uint)(*(int *)(pNVar2 + 0x2c) - *(int *)(pNVar2 + 0x28))) {
      ghidra::str::ctor(abStack_b8,(std::string *)local_30);
      // [seh] local_8._0_1_ = 10;
      uStack_d8 = 0x4aa849;
      ghidra::str::ctor(abStack_d0,(std::string *)local_48);
      // [seh] local_8._0_1_ = 0xb;
      uStack_f0 = 0x4aa861;
      ghidra::str::ctor(abStack_e8,(std::string *)local_60);
      // [seh] local_8._0_1_ = 0xc;
      ghidra::str::ctor(abStack_100,(std::string *)local_78);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      pSVar3 = GameLogic::generateShip();
      uStack_b0 = 0x4aa893;
      (pSVar3)->initialiseBehaviour(2, 4, 3);
      *(undefined4 *)(pSVar3 + 100) = 3;
      *(double *)(pSVar3 + 0x28) = (double)*(float *)(pNVar2 + 8);
      *(double *)(pSVar3 + 0x30) = (double)*(float *)(pNVar2 + 0xc);
      *(undefined1 *)(*(int *)(pSVar3 + 0x40) + 0x34) = 0;
      (pSVar3)->giveFullPower();
      if ((*(int *)(*(int *)(pSVar3 + 0x40) + 0x20) != 0) &&
         (iVar8 = 0,
         0.0 < *(float *)(*(int *)(*(int *)(*(int *)(pSVar3 + 0x40) + 0x20) + 8) + 0x108))) {
        do {
          iVar10 = -1;
          if (*(int *)(*(int *)(pSVar3 + 0x44) + 0x74) == 2) {
            pcVar9 = "m10";
          }
          else if (*(int *)(*(int *)(pSVar3 + 0x44) + 0x74) == 3) {
            pcVar9 = "m12";
          }
          else {
            pcVar9 = "e10";
          }
          uStack_c8 = 0x4aa927;
          ghidra::str::assign((std::string *)&stack0xffffff44,pcVar9,3);
          pWVar4 = GameData::getWeaponClassWithIdentifier();
          (pSVar3)->addWeapon(pWVar4, iVar10);
          iVar8 = iVar8 + 1;
        } while ((float)iVar8 <
                 *(float *)(*(int *)(*(int *)(*(int *)(pSVar3 + 0x40) + 0x20) + 8) + 0x108));
      }
      (*(ShipBehaviour **)(pSVar3 + 0x44))->configureShipDesires();
      ghidra::any_singleton();
      (this_01)->generateShipComms(pSVar3);
      goto LAB_004aa969;
    }
  }
  // [seh] local_8 = 3;
LAB_004aa969:
  if (0xf < local_4c) {
    pnVar6 = (nothrow_t *)(local_4c + 1);
    pvVar5 = local_60[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_60[0] + -4);
      pnVar6 = (nothrow_t *)(local_4c + 0x24);
      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  if (0xf < local_64) {
    pnVar6 = (nothrow_t *)(local_64 + 1);
    pvVar5 = local_78[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_78[0] + -4);
      pnVar6 = (nothrow_t *)(local_64 + 0x24);
      if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  if (0xf < local_1c) {
    pnVar6 = (nothrow_t *)(local_1c + 1);
    pvVar5 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_30[0] + -4);
      pnVar6 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  if (0xf < local_34) {
    pnVar6 = (nothrow_t *)(local_34 + 1);
    pvVar5 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_48[0] + -4);
      pnVar6 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] pSVar3 = (Ship *)__security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return pSVar3;
}


// Ghidra: Ship * __thiscall NPCShipManager::generateVesselFromBounty(NPCShipManager *this,Bounty *param_1)
Ship * NPCShipManager::generateVesselFromBounty(Bounty * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffa4[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  Ship *this_00;
  WeaponClass *pWVar5;
  undefined4 *puVar6;
  std::string *pbVar7;
  int iVar8;
  Sector *pSVar9;
  uint unaff_EDI;
  std::string abStack_a0 [16];
  undefined4 uStack_90;
  std::string abStack_88 [16];
  undefined4 uStack_78;
  std::string abStack_70 [8];
  undefined4 uStack_68;
  std::string abStack_58 [4];
  undefined4 uStack_54;
  int iVar10;
  NavPoint *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bdd34;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  puVar6 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar6 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      pSVar9 = (Sector *)*puVar6;
      if (*(int *)pSVar9 == *(int *)(*(int *)(param_1 + 0x4c) + 0x18)) goto LAB_004aaad7;
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(g_gameData + 0x40));
  }
  pSVar9 = (Sector *)0x0;
LAB_004aaad7:
  // [seh] local_8 = (uint)(*(int *)(g_gameData + 0xd0) == 0);
  local_18 = (pSVar9)->getRandomNavPointNotNear();
  if (local_18 == (NavPoint *)0x0) {
    if (*(int *)(g_gameData + 0xd0) == 0) {
      // [seh] local_8 = 3;
    }
    else {
      // [seh] local_8 = 2;
    }
    local_18 = (pSVar9)->getRandomNavPointNotNear();
    if (local_18 == (NavPoint *)0x0) {
      if (*(int *)(g_gameData + 0xd0) == 0) {
        // [seh] local_8 = 5;
      }
      else {
        // [seh] local_8 = 4;
      }
      local_18 = (pSVar9)->getRandomNavPointNotNear();
      if (local_18 == (NavPoint *)0x0) {
        // [seh] ExceptionList = local_10;
        return (Ship *)0x0;
      }
    }
  }
  // [seh] local_8 = 0xffffffff;
  if ((uint)(*(int *)(local_18 + 0x2c) - *(int *)(local_18 + 0x28)) < 4) {
    // [seh] ExceptionList = local_10;
    return (Ship *)0x0;
  }
  ghidra::str::ctor
            (abStack_58,(std::string *)(*(int *)(param_1 + 0x4c) + 0x3c));
  // [seh] local_8 = 6;
  uStack_78 = 0x4aacd8;
  ghidra::str::ctor
            (abStack_70,(std::string *)(*(int *)(param_1 + 0x4c) + 0x24));
  // [seh] local_8._0_1_ = 7;
  uStack_90 = 0x4aaced;
  ghidra::str::ctor(abStack_88,(std::string *)(param_1 + 0x34));
  // [seh] local_8 = CONCAT31(local_8._1_3_,8);
  ghidra::str::ctor(abStack_a0,(std::string *)(param_1 + 4));
  // [seh] local_8 = 0xffffffff;
  this_00 = GameLogic::generateShip();
  (this_00)->initialiseBehaviour(2, 3, 3);
  if (this_00 == (Ship *)0x0) {
    uStack_54 = 0x4aad50;
    debugPrint("ERROR","Unable to create bounty: %s, %s");
  }
  pbVar7 = (std::string *)(param_1 + 0x1c);
  if ((std::string *)(this_00 + 0x80) != pbVar7) {
    if (0xf < *(uint *)(param_1 + 0x30)) {
      pbVar7 = *(std::string **)pbVar7;
    }
    ghidra::str::assign
              ((std::string *)(this_00 + 0x80),(char *)pbVar7,*(uint *)(param_1 + 0x2c));
  }
  *(undefined4 *)(this_00 + 100) = 3;
  *(double *)(this_00 + 0x28) = (double)*(float *)(local_18 + 8);
  fVar1 = *(float *)(local_18 + 0xc);
  this_00[0x326] = (byte)0x1;
  *(double *)(this_00 + 0x30) = (double)fVar1;
  (this_00)->giveFullPower();
  if ((*(int *)(*(int *)(this_00 + 0x40) + 0x20) != 0) &&
     (iVar8 = 0, 0.0 < *(float *)(*(int *)(*(int *)(*(int *)(this_00 + 0x40) + 0x20) + 8) + 0x108)))
  {
    do {
      iVar2 = *(int *)(param_1 + 0x4c);
      bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI);
      iVar10 = -1;
      if (bVar3) {
        uStack_68 = 0x4aae22;
        ghidra::str::assign((std::string *)&stack0xffffffa4,"e10",3);
      }
      else {
        ghidra::str::ctor
                  ((std::string *)&stack0xffffffa4,(std::string *)(iVar2 + 0x54));
      }
      pWVar5 = GameData::getWeaponClassWithIdentifier();
      (this_00)->addWeapon(pWVar5, iVar10);
      iVar8 = iVar8 + 1;
    } while ((float)iVar8 <
             *(float *)(*(int *)(*(int *)(*(int *)(this_00 + 0x40) + 0x20) + 8) + 0x108));
  }
  (*(ShipBehaviour **)(this_00 + 0x44))->configureShipDesires();
  // [seh] ExceptionList = local_10;
  return this_00;
}


// Ghidra: SpaceStation * __thiscall NPCShipManager::getRandomSpaceStation(NPCShipManager *this,int param_1,Ship *param_2)
SpaceStation * NPCShipManager::getRandomSpaceStation(int param_1, Ship * param_2)

{
  AnimationFrames *pAVar1;
  SpaceStation *pSVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  AnimationFrames **ppAVar6;
  nothrow_t *pnVar7;
  AnimationFrames **ppAVar8;
  int *piVar9;
  void *pvVar10;
  void *local_20;
  AnimationFrames **local_1c;
  AnimationFrames **local_18;
  AnimationFrames *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bdd58;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  for (puVar5 = *(undefined4 **)(g_gameData + 0x3c); puVar5 != *(undefined4 **)(g_gameData + 0x40);
      puVar5 = puVar5 + 1) {
    piVar9 = (int *)*puVar5;
    if (*piVar9 == param_1) goto LAB_004aaedf;
  }
  piVar9 = (int *)0x0;
LAB_004aaedf:
  ppAVar8 = (AnimationFrames **)0x0;
  local_20 = (void *)0x0;
  ppAVar6 = (AnimationFrames **)0x0;
  local_1c = (AnimationFrames **)0x0;
  local_18 = (AnimationFrames **)0x0;
  // [seh] local_8 = 0;
  iVar4 = piVar9[0x33];
  param_1 = 0;
  if (piVar9[0x34] - iVar4 >> 2 != 0) {
    do {
      pAVar1 = *(AnimationFrames **)(iVar4 + param_1 * 4);
      if ((*(int *)(*(int *)(pAVar1 + 0x254) + 0x158) == 1) &&
         (pAVar1 != (AnimationFrames *)param_2)) {
        local_14 = pAVar1;
        if (ppAVar6 == ppAVar8) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_20,ppAVar8,&local_14);
          ppAVar6 = local_18;
          ppAVar8 = local_1c;
        }
        else {
          *ppAVar8 = pAVar1;
          local_1c = ppAVar8 + 1;
          ppAVar8 = local_1c;
        }
      }
      iVar4 = piVar9[0x33];
      param_1 = param_1 + 1;
    } while ((uint)param_1 < (uint)(piVar9[0x34] - iVar4 >> 2));
  }
  pvVar3 = local_20;
  iVar4 = rand();
  pSVar2 = *(SpaceStation **)((int)pvVar3 + (iVar4 % (((int)ppAVar8 - (int)pvVar3 >> 2) + -1)) * 4);
  if (pvVar3 != (void *)0x0) {
    pnVar7 = (nothrow_t *)((int)ppAVar6 - (int)pvVar3 & 0xfffffffc);
    pvVar10 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar10 = *(void **)((int)pvVar3 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return pSVar2;
}


// Ghidra: void __thiscall NPCShipManager::removeAllShipsInSector(NPCShipManager *this,int param_1)
void NPCShipManager::removeAllShipsInSector(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  AnimationFrames *pAVar6;
  GameLogic *extraout_ECX;
  AnimationFrames *pAVar7;
  int *piVar8;
  AnimationFrames *pAVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  AnimationFrames *local_30;
  AnimationFrames *local_2c;
  AnimationFrames *local_28;
  int local_24;
  AnimationFrames *local_20;
  AnimationFrames *local_1c;
  NPCShipManager *local_18;
  AnimationFrames *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b1638;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)((char *)this + 8);
  uVar11 = 0;
  iVar3 = *(int *)((char *)this + 0xc) - (int)piVar1 >> 0x1f;
  piVar8 = piVar1;
  if ((*(int *)((char *)this + 0xc) - (int)piVar1) / 0xc + iVar3 != iVar3) {
    while (*piVar8 != param_1) {
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 3;
      if ((uint)((*(int *)((char *)this + 0xc) - (int)piVar1) / 0xc) <= uVar11) {
        return;
      }
    }
    pAVar9 = (AnimationFrames *)0x0;
    pAVar6 = (AnimationFrames *)0x0;
    local_1c = (AnimationFrames *)0x0;
    local_30 = (AnimationFrames *)0x0;
    local_2c = (AnimationFrames *)0x0;
    local_14 = (AnimationFrames *)0x0;
    local_28 = (AnimationFrames *)0x0;
    // [seh] local_8 = 0;
    local_24 = uVar11 * 0xc;
    param_1 = 0;
    puVar12 = *(uint **)(piVar1[uVar11 * 3 + 1] + 0xcc);
    puVar2 = *(uint **)(piVar1[uVar11 * 3 + 1] + 0xd0);
    pAVar7 = (AnimationFrames *)((uint)((int)puVar2 + (3 - (int)puVar12)) >> 2);
    if (puVar2 < puVar12) {
      pAVar7 = (AnimationFrames *)0x0;
    }
    // [seh] ExceptionList = &local_10;
    local_20 = pAVar7;
    local_18 = this;
    if (pAVar7 != (AnimationFrames *)0x0) {
      do {
        local_20 = (AnimationFrames *)*puVar12;
        if ((*(int *)(local_20 + 0x44) != 0) &&
           ((((iVar3 = *(int *)(*(int *)(local_20 + 0x44) + 0x70), iVar3 == 1 || (iVar3 == 2)) ||
             (iVar3 == 8)) || (iVar3 == 7)))) {
          if (pAVar9 == pAVar6) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)&local_30,(AnimationFrames **)pAVar6,&local_20);
            pAVar6 = local_2c;
            pAVar9 = local_28;
          }
          else {
            *(AnimationFrames **)pAVar6 = local_20;
            local_2c = pAVar6 + 4;
            pAVar6 = local_2c;
          }
        }
        puVar12 = puVar12 + 1;
        param_1 = param_1 + 1;
      } while ((AnimationFrames *)param_1 != pAVar7);
      local_1c = local_30;
      local_14 = pAVar9;
    }
    uVar13 = 0;
    uVar11 = (uint)(pAVar6 + (3 - (int)local_1c)) >> 2;
    if (pAVar6 < local_1c) {
      uVar11 = 0;
    }
    pAVar9 = local_1c;
    local_30 = local_1c;
    if (uVar11 != 0) {
      do {
        ((GameLogic *)pAVar6)->entirelyRemoveShip(*(Ship **)pAVar9, false);
        uVar13 = uVar13 + 1;
        pAVar6 = (AnimationFrames *)extraout_ECX;
        pAVar9 = pAVar9 + 4;
      } while (uVar13 != uVar11);
    }
    pAVar6 = local_14;
    iVar3 = *(int *)(local_24 + 4 + *(int *)(local_18 + 8));
    puVar5 = (undefined4 *)(iVar3 + 0x1c);
    if (0xf < *(uint *)(iVar3 + 0x30)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    debugPrint("AI","Removed all ships from sector \'%s\' in NPCManager.",puVar5,uVar4);
    if (local_1c != (AnimationFrames *)0x0) {
      pnVar10 = (nothrow_t *)((int)pAVar6 - (int)local_1c & 0xfffffffc);
      pAVar6 = local_1c;
      if ((nothrow_t *)0xfff < pnVar10) {
        pAVar6 = *(AnimationFrames **)(local_1c + -4);
        pnVar10 = pnVar10 + 0x23;
        if ((AnimationFrames *)0x1f < local_1c + (-4 - (int)pAVar6)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pAVar6,pnVar10);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall NPCShipManager::reset(NPCShipManager *this)
void NPCShipManager::reset()

{
  ghidra::vector *this_00;
  AnimationFrames **ppAVar1;
  NPCShipManager *local_8;
  
  *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)((char *)this + 8);
  this_00 = (ghidra::vector *)((char *)this + 0x14);
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 0x18) = *(undefined4 *)this_00;
  local_8 = this;
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x66;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x6d;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x73;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x74;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x74;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0x7c;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x77;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x77;
  *(undefined4 *)(local_8 + 0x20) = 0xfffffffe;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x7a;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0x7a;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x1;
  *(undefined4 *)(local_8 + 0x24) = 0x7c;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
  }
  local_8 = operator_new(0x2c);
  *(undefined4 *)local_8 = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined2 *)(local_8 + 0x29) = 0;
  *(AnimationFrames *)(local_8 + 0x2b) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 0;
  *(undefined4 *)(local_8 + 0x14) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x1c) = 0xfffffffe;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(AnimationFrames *)(local_8 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x18);
  if (*(AnimationFrames ***)((char *)this + 0x1c) != ppAVar1) {
    *ppAVar1 = (AnimationFrames *)local_8;
    *(int *)((char *)this + 0x18) = *(int *)((char *)this + 0x18) + 4;
    return;
  }
  ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_8);
  return;
}


// Ghidra: void __thiscall NPCShipManager::runSectorLogic(NPCShipManager *this,int param_1)
void NPCShipManager::runSectorLogic(int param_1)

{
  SpaceStation *pSVar1;
  NPCShipManager *pNVar2;
  int *piVar3;
  undefined4 *puVar4;
  NPCShipManager *pNVar5;
  Ship *pSVar6;
  int *piVar7;
  SpaceStation *pSVar8;
  GameObject *pGVar9;
  undefined1 uVar10;
  int iVar11;
  int *piVar12;
  NPCShipManager *this_00;
  undefined4 *puVar14;
  GameData *pGVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  std::string local_a4 [4];
  undefined4 uStack_a0;
  std::string abStack_98 [4];
  undefined4 local_94;
  NPCShipManager *local_4c;
  int *local_48;
  SpaceStation *pSVar13;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x312) != '\0') {
    uVar17 = 0;
    iVar18 = 0;
    iVar11 = param_1 * 0xc;
    iVar19 = *(int *)(*(int *)((char *)this + 8) + 4 + iVar11);
    piVar7 = *(int **)(iVar19 + 0xcc);
    piVar12 = *(int **)(iVar19 + 0xd0);
    uVar16 = (uint)((int)piVar12 + (3 - (int)piVar7)) >> 2;
    if (piVar12 < piVar7) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      do {
        if ((*(int *)(*piVar7 + 0x44) != 0) && (*(int *)(*(int *)(*piVar7 + 0x44) + 0x70) == 1)) {
          iVar18 = iVar18 + 1;
        }
        uVar17 = uVar17 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar17 != uVar16);
    }
    if (iVar18 < (int)(&SM_MerchantCount)[*(int *)(*(int *)((char *)this + 8) + 8 + iVar11)]) {
      generateNewFreighter(this,*(int *)(*(int *)((char *)this + 8) + iVar11));
    }
    local_4c = *(NPCShipManager **)((char *)this + 8);
    iVar19 = 0;
    uVar17 = 0;
    pNVar5 = local_4c + iVar11;
    piVar7 = *(int **)(*(int *)(pNVar5 + 4) + 0xcc);
    piVar12 = *(int **)(*(int *)(pNVar5 + 4) + 0xd0);
    uVar16 = (uint)((int)piVar12 + (3 - (int)piVar7)) >> 2;
    if (piVar12 < piVar7) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      do {
        if ((*(int *)(*piVar7 + 0x44) != 0) && (*(int *)(*(int *)(*piVar7 + 0x44) + 0x70) == 7)) {
          iVar19 = iVar19 + 1;
        }
        uVar17 = uVar17 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar17 != uVar16);
      local_4c = *(NPCShipManager **)((char *)this + 8);
    }
    if (iVar19 < (int)(&SM_PoliceCount)[*(int *)(pNVar5 + 8)]) {
      generateNewPoliceVessel(local_4c,*(int *)pNVar5);
      local_4c = *(NPCShipManager **)((char *)this + 8);
    }
    local_48 = *(int **)(*(int *)(g_gameData + 0xcc) + 0xb4);
    if (local_48 == (int *)0xffffffff) {
      local_4c = *(NPCShipManager **)((char *)this + 8);
      local_48 = (&SM_PirateCount)[*(int *)(local_4c + iVar11 + 8)];
    }
    uVar17 = 0;
    iVar19 = 0;
    pNVar5 = *(NPCShipManager **)(*(int *)(local_4c + iVar11 + 4) + 0xcc);
    pNVar2 = *(NPCShipManager **)(*(int *)(local_4c + iVar11 + 4) + 0xd0);
    uVar16 = (uint)(pNVar2 + (3 - (int)pNVar5)) >> 2;
    if (pNVar2 < pNVar5) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      do {
        if ((*(int *)(*(int *)pNVar5 + 0x44) != 0) &&
           (*(int *)(*(int *)(*(int *)pNVar5 + 0x44) + 0x70) == 2)) {
          iVar19 = iVar19 + 1;
        }
        uVar17 = uVar17 + 1;
        pNVar5 = pNVar5 + 4;
      } while (uVar17 != uVar16);
    }
    if (iVar19 < (int)local_48) {
      generateNewPirateVessel(pNVar5,*(int *)(local_4c + iVar11));
    }
    piVar7 = *(int **)(g_gameData + 0x9c);
    iVar19 = *(int *)(g_gameData + 0xa0) - (int)piVar7 >> 2;
    piVar12 = (int *)0x0;
    if (iVar19 != 0) {
      do {
        iVar18 = *piVar7;
        if (((*(int *)(iVar18 + 0x1c) == *(int *)(g_gameData + 0xd8)) &&
            (*(char *)(iVar18 + 0x18) != '\0')) && ((int)piVar12 < (int)*(int **)(iVar18 + 0x58))) {
          piVar12 = *(int **)(iVar18 + 0x58);
        }
        piVar7 = piVar7 + 1;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    piVar7 = (&SM_MilitaryCount)[*(int *)(*(int *)((char *)this + 8) + 8 + iVar11)];
    if (piVar12 != (int *)0x0) {
      piVar7 = piVar12;
    }
    iVar18 = 0;
    uVar17 = 0;
    iVar19 = *(int *)(*(int *)((char *)this + 8) + 4 + iVar11);
    piVar12 = *(int **)(iVar19 + 0xcc);
    piVar3 = *(int **)(iVar19 + 0xd0);
    uVar16 = (uint)((int)piVar3 + (3 - (int)piVar12)) >> 2;
    if (piVar3 < piVar12) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      do {
        if ((*(int *)(*piVar12 + 0x44) != 0) && (*(int *)(*(int *)(*piVar12 + 0x44) + 0x70) == 8)) {
          iVar18 = iVar18 + 1;
        }
        uVar17 = uVar17 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar17 != uVar16);
    }
    if (iVar18 < (int)piVar7) {
      generateNewMilitaryVessel
                (*(NPCShipManager **)((char *)this + 8),*(int *)(*(NPCShipManager **)((char *)this + 8) + iVar11));
    }
    uVar16 = 0;
    pGVar15 = g_gameData;
    if (*(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2 != 0) {
      do {
        iVar19 = *(int *)(*(int *)(pGVar15 + 0x130) + uVar16 * 4);
        if (*(int *)(*(int *)(iVar19 + 0x4c) + 0x18) == **(int **)(pGVar15 + 0xd8)) {
          uStack_a0 = 0x4ab987;
          ghidra::str::ctor(abStack_98,(std::string *)(iVar19 + 0x34));
          pSVar6 = (*(Sector **)(g_gameData + 0xd8))->getShip();
          pGVar15 = g_gameData;
          if (pSVar6 == (Ship *)0x0) {
            debugPrint("WORLD","Spawning a bounty here.");
            generateVesselFromBounty
                      (this_00,*(Bounty **)(*(int *)(g_gameData + 0x130) + uVar16 * 4));
            pGVar15 = g_gameData;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uint)(*(int *)(pGVar15 + 0x134) - *(int *)(pGVar15 + 0x130) >> 2));
    }
  }
  iVar19 = *(int *)(*(int *)((char *)this + 8) + 4 + param_1 * 0xc);
  puVar4 = *(undefined4 **)(iVar19 + 0xd0);
  for (puVar14 = *(undefined4 **)(iVar19 + 0xcc); puVar14 != puVar4; puVar14 = puVar14 + 1) {
    pSVar6 = (Ship *)*puVar14;
    pNVar5 = *(NPCShipManager **)(pSVar6 + 0x44);
    if (pNVar5 != (NPCShipManager *)0x0) {
      bVar20 = false;
      if (*(int *)(pSVar6 + 0x254) != 0) {
        bVar20 = *(int *)(*(int *)(pSVar6 + 0x254) + 0x158) == 0;
      }
      if (bVar20) {
        if (*(int *)(pNVar5 + 0x70) == 1) {
          if (*(int *)(pNVar5 + 4) == 1) {
            iVar11 = 0;
            iVar19 = 8;
            do {
              iVar18 = rand();
              iVar11 = iVar11 + 1 + iVar18 % 10;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
            *(float *)(*(int *)(pSVar6 + 0x44) + 100) = (float)(iVar11 + 0x14);
            local_94 = 0;
            local_a4[0] = (std::string)0x0;
            ghidra::str::assign(local_a4,"Waiting at %s for %.0f seconds.",0x1f);
            Ship::log();
            iVar19 = *(int *)(*(int *)(pSVar6 + 0x44) + 0x10);
            piVar7 = (int *)(iVar19 + 0x24c);
            if (iVar19 == 0) {
              piVar7 = (int *)&DAT_00000254;
            }
            bVar20 = false;
            if (*piVar7 != 0) {
              bVar20 = *(int *)(*piVar7 + 0x158) == 1;
            }
            if (bVar20) {
              pNVar5 = (NPCShipManager *)(-(uint)(iVar19 != 0) & iVar19 - 8U);
            }
            else {
              iVar19 = *(int *)(*(int *)(pSVar6 + 0x44) + 8);
              if (iVar19 == 0) {
                pNVar5 = (NPCShipManager *)0x0;
              }
              else {
                pNVar5 = (NPCShipManager *)(iVar19 + -8);
              }
            }
            pSVar8 = getRandomSpaceStation(pNVar5,*(int *)(pSVar6 + 0x20),(Ship *)pNVar5);
            pSVar1 = pSVar8 + 8;
            pSVar13 = pSVar1;
            if (0xf < *(uint *)(pSVar8 + 0x1c)) {
              pSVar13 = *(SpaceStation **)pSVar1;
            }
            uVar10 = SUB41(pSVar13,0);
            local_94 = 0x4abb4a;
            debugPrint("WORLD","%s being sent to %s");
            pGVar9 = (GameObject *)0x0;
            if (pSVar8 != (SpaceStation *)0x0) {
              pGVar9 = (GameObject *)pSVar1;
            }
            (*(ShipBehaviour **)(pSVar6 + 0x44))->giveTravelTask(pGVar9, (bool)uVar10);
          }
        }
        else if (*(int *)(pNVar5 + 0x70) == 7) {
          runPoliceVesselLogic(pNVar5,pSVar6);
        }
      }
    }
  }
  return;
}


// Ghidra: void __thiscall NPCShipManager::runPoliceVesselLogic(NPCShipManager *this,Ship *param_1)
void NPCShipManager::runPoliceVesselLogic(Ship * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffa0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  AnimationFrames *pAVar2;
  GameLogic *pGVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  NavPoint *pNVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  NavPoint *pNVar11;
  nothrow_t *pnVar12;
  NavPoint *pNVar13;
  uint uVar14;
  uint unaff_EDI;
  void *pvVar15;
  void *pvVar16;
  float fVar17;
  void *local_34;
  NavPoint *local_30;
  NavPoint *local_2c;
  NavPoint *local_28;
  float local_24;
  NavPoint *local_20;
  int local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar3 = g_gameLogic;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bdda2;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_28 = (NavPoint *)0x0;
  iVar8 = *(int *)(param_1 + 0x44);
  if ((((iVar8 != 0) && (*(int *)(iVar8 + 0xd0) != 0)) &&
      (*(int *)(*(int *)(iVar8 + 0xd0) + 4) == 0)) &&
     (bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI), !bVar4)) {
    *(undefined4 *)(iVar8 + 4) = 1;
    iVar8 = *(int *)(param_1 + 0x44);
  }
  if (*(int *)(iVar8 + 4) != 1) {
    // [seh] ExceptionList = local_10;
    return;
  }
  bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
  if (bVar4) {
    pNVar13 = (*(Sector **)(param_1 + 0x24))->getRandomNavPointNotNear();
  }
  else {
    ghidra::str::ctor
              ((std::string *)&stack0xffffffa0,(std::string *)(pGVar3 + 0x194));
    local_28 = (NavPoint *)getQuadrant();
    iVar8 = *(int *)(param_1 + 0x24);
    pNVar11 = (NavPoint *)0x0;
    iVar10 = *(int *)(iVar8 + 0xa8);
    iVar6 = *(int *)(iVar8 + 0xac) - iVar10 >> 2;
    pNVar13 = pNVar11;
    local_1c = iVar8;
    if (iVar6 != 0) {
      local_2c = (NavPoint *)0x0;
      pNVar13 = (NavPoint *)0x0;
      local_34 = (void *)0x0;
      local_30 = (NavPoint *)0x0;
      // [seh] local_8 = 0;
      local_18 = 0;
      if (iVar6 != 0) {
        local_20 = (NavPoint *)0x3;
        do {
          ppAVar1 = (AnimationFrames **)(iVar10 + local_18 * 4);
          pAVar2 = *ppAVar1;
          if ((*(int *)(pAVar2 + 4) == 0) && (*(int *)(pAVar2 + 0x38) == 0)) {
            if (0.0 < *(float *)(pAVar2 + 8)) {
              pNVar7 = (NavPoint *)((*(float *)(pAVar2 + 0xc) <= 0.0) + 1);
            }
            else {
              pNVar7 = (NavPoint *)0x0;
              if (*(float *)(pAVar2 + 0xc) <= 0.0) {
                pNVar7 = local_20;
              }
            }
            if (pNVar7 == local_28) {
              if (pNVar11 == pNVar13) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_34,(AnimationFrames **)pNVar13,ppAVar1);
                pNVar11 = local_2c;
                pNVar13 = local_30;
              }
              else {
                *(AnimationFrames **)pNVar13 = pAVar2;
                local_30 = pNVar13 + 4;
                pNVar13 = local_30;
              }
            }
          }
          iVar10 = *(int *)(iVar8 + 0xa8);
          local_18 = local_18 + 1;
        } while (local_18 < (uint)(*(int *)(iVar8 + 0xac) - iVar10 >> 2));
      }
      pvVar15 = local_34;
      uVar14 = (int)pNVar13 - (int)local_34;
      if (uVar14 < 4) {
        // [seh] local_8 = 0xffffffff;
        if (local_34 != (void *)0x0) {
          pnVar12 = (nothrow_t *)((int)pNVar11 - (int)local_34 & 0xfffffffc);
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar15 = *(void **)((int)local_34 + -4);
            pnVar12 = pnVar12 + 0x23;
            if (0x1f < (uint)((int)local_34 + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar15,pnVar12);
        }
        pNVar13 = (NavPoint *)0x0;
      }
      else {
        iVar8 = rand();
        local_28 = *(NavPoint **)((int)pvVar15 + (iVar8 % (((int)uVar14 >> 2) + -1)) * 4);
        // [seh] local_8 = 0xffffffff;
        pNVar13 = local_28;
        if (pvVar15 != (void *)0x0) {
          pnVar12 = (nothrow_t *)((int)pNVar11 - (int)pvVar15 & 0xfffffffc);
          pvVar16 = pvVar15;
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar16 = *(void **)((int)pvVar15 + -4);
            pnVar12 = pnVar12 + 0x23;
            if (0x1f < (uint)((int)pvVar15 + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar16,pnVar12);
          pNVar13 = local_28;
        }
      }
    }
    ghidra::str::assign((std::string *)(g_gameLogic + 0x194),"",0);
  }
  if (pNVar13 == (NavPoint *)0x0) {
    debugPrint("WARNING","Unable to generate valid waypoint within 20gms of %s");
    // [seh] ExceptionList = local_10;
    return;
  }
  iVar8 = *(int *)(param_1 + 0x44);
  if (*(int *)(iVar8 + 4) != 1) goto LAB_004abf2d;
  if (*(int *)(iVar8 + 0x30) != 0) {
    *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x30);
  }
  if (*(int *)(iVar8 + 0x34) == 0) {
LAB_004abec8:
    bVar4 = false;
  }
  else {
    local_24 = (float)*(double *)(*(int *)(iVar8 + 0x6c) + 0x28);
    local_20 = (NavPoint *)(float)*(double *)(*(int *)(iVar8 + 0x6c) + 0x30);
    // [seh] local_8 = 1;
    local_28 = (NavPoint *)&DAT_00000001;
    fVar17 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)(*(int *)(iVar8 + 0x34) + 8));
    fVar9 = (float)(0x5f3759df - ((uint)fVar17 >> 1));
    if (0.1 < (1.5 - fVar17 * 0.5 * fVar9 * fVar9) * fVar9 * fVar17) goto LAB_004abec8;
    bVar4 = true;
  }
  // [seh] local_8 = 0xffffffff;
  if (bVar4) {
    *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar8 + 0x34);
  }
  else {
    *(undefined4 *)(iVar8 + 0x30) = 0;
  }
  *(NavPoint **)(iVar8 + 0x34) = pNVar13;
  *(undefined4 *)(iVar8 + 4) = 0;
  debugPrint("AI","%s: Travelling to nav point at %f, %f");
LAB_004abf2d:
  ghidra::str::assign((std::string *)&stack0xffffff9c,"Patrolling to nav point %d",0x1a);
  Ship::log();
  // [seh] ExceptionList = local_10;
  return;
}
