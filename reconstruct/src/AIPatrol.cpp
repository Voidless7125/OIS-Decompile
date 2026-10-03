// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIPatrol::doneAtLocation(AIPatrol *this)
void AIPatrol::doneAtLocation()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffa4[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EDI;
  NavPoint *pNVar5;
  float fVar6;
  std::string local_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  AIPatrol *local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1f72;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)((char *)this_ + 0x3c);
  local_1c = this_;
  if (iVar1 == 0) {
    iVar1 = *(int *)((char *)this_ + 0x24);
    iVar3 = *(int *)(iVar1 + 0x44);
    local_48 = 0x4fd989;
    bVar2 = ghidra::lib::_Traits_equal_t
                      // [cookie] ("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
    if (bVar2) {
      pNVar5 = (*(Sector **)(iVar1 + 0x24))->getRandomNavPoint(0);
      if (pNVar5 == (NavPoint *)0x0) {
        // [seh] ExceptionList = local_10;
        return;
      }
      local_2c = (float)*(double *)(*(int *)((char *)this_ + 0x24) + 0x28);
      local_28 = (float)*(double *)(*(int *)((char *)this_ + 0x24) + 0x30);
      // [seh] local_8 = 1;
      local_1c = (AIPatrol *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)(pNVar5 + 8));
      local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
      local_4c = 0;
      local_48 = 0xf;
      ghidra::str::assign
                ((std::string *)&stack0xffffffa4,
                 "Travelling around the map on military patrol. Distance to my selected waypoint: %fGms"
                 ,0x55);
      Ship::log();
      // [seh] local_8 = 0xffffffff;
    }
    else {
      ghidra::str::ctor(local_54,(std::string *)(iVar3 + 0x14));
      pNVar5 = (*(Sector **)(*(int *)((char *)this_ + 0x24) + 0x24))->getNavPointNearZoneSet();
      if (pNVar5 == (NavPoint *)0x0) {
        // [seh] ExceptionList = local_10;
        return;
      }
      local_54[0] = (std::string)0x0;
      ghidra::str::assign
                (local_54,"Preparing to head to a new waypoint near our patrol zone.",0x39);
      Ship::log();
    }
  }
  else {
    local_24 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
    local_20 = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
    iVar1 = *(int *)(*(int *)((char *)this_ + 0x24) + 0x24);
    // [seh] local_8 = 0;
    pNVar5 = (NavPoint *)0x0;
    uVar4 = 0;
    iVar3 = *(int *)(iVar1 + 0xa8);
    if (*(int *)(iVar1 + 0xac) - iVar3 >> 2 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + uVar4 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (*(int *)(iVar3 + 0x38) != 3)) {
          local_18 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar3 + 8),(Vec2 *)&local_24);
          local_14 = (float)(0x5f3759df - ((uint)local_18 >> 1));
          local_18 = (1.5 - local_18 * 0.5 * local_14 * local_14) * local_14 * local_18;
          if (pNVar5 != (NavPoint *)0x0) {
            fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(pNVar5 + 8),(Vec2 *)&local_24);
            local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
            if ((1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6 <= local_18)
            goto LAB_004fd909;
          }
          pNVar5 = *(NavPoint **)(*(int *)(iVar1 + 0xa8) + uVar4 * 4);
        }
LAB_004fd909:
        uVar4 = uVar4 + 1;
        iVar3 = *(int *)(iVar1 + 0xa8);
      } while (uVar4 < (uint)(*(int *)(iVar1 + 0xac) - iVar3 >> 2));
    }
    // [seh] local_8 = 0xffffffff;
    if (pNVar5 == (NavPoint *)0x0) {
      // [seh] ExceptionList = local_10;
      return;
    }
    local_54[0] = (std::string)0x0;
    ghidra::str::assign(local_54,"Moving as close as we can get to the intruder.",0x2e);
    this_ = local_1c;
    Ship::log();
  }
  (*(Ship **)((char *)this_ + 0x24))->mapCourseTo(pNVar5);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPatrol::enterState(AIPatrol *this)
void AIPatrol::enterState()

{
  ((char *)this)[0x30] = (byte)0x0;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  return;
}


// Ghidra: void __thiscall AIPatrol::leaveState(AIPatrol *this)
void AIPatrol::leaveState()

{
  *(undefined4 *)((char *)this + 0x3c) = 0;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  return;
}


// Ghidra: void __thiscall AIPatrol::runLogic(AIPatrol *this,float param_1)
void AIPatrol::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffa4[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  NavPoint *pNVar2;
  Zone *pZVar3;
  bool bVar4;
  char *pcVar5;
  FlagManager *pFVar6;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *extraout_ECX_01;
  GameLogic *this_00;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint unaff_EDI;
  Zone *pZVar10;
  Ship *this_01;
  ulonglong uVar11;
  undefined1 *puVar12;
  float fVar13;
  std::string local_58 [8];
  undefined4 uStack_50;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 *local_24;
  float local_20;
  undefined1 *local_1c;
  Zone *local_18;
  Zone *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1fb3;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pZVar10 = (Zone *)0x0;
  uVar11 = 0xbf800000;
  puVar12 = &DAT_bf800000;
  local_1c = &DAT_bf800000;
  local_14 = (Zone *)0x0;
  puVar8 = *(undefined4 **)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x134);
  local_24 = *(undefined4 **)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x138);
  this_00 = (GameLogic *)this;
  if (puVar8 != local_24) {
    do {
      local_18 = (Zone *)*puVar8;
      bVar4 = (this_00)->zoneActive(local_18);
      this_00 = extraout_ECX;
      if (bVar4) {
        local_20 = *(float *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x24);
        bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
        this_00 = extraout_ECX_00;
        pZVar10 = local_14;
        if (!bVar4) {
          pZVar10 = local_18 + 4;
          if (0xf < *(uint *)(local_18 + 0x18)) {
            pZVar10 = *(Zone **)(local_18 + 4);
          }
          bVar4 = ghidra::lib::_Traits_equal___x28_x29((char *)pZVar10,*(uint *)(local_18 + 0x14),pcVar5,unaff_EDI);
          pZVar3 = local_18;
          this_00 = extraout_ECX_01;
          pZVar10 = local_14;
          if (bVar4) {
            local_30 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
            local_2c = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
            // [seh] local_8 = 0;
            local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)(local_18 + 0xe8),(Vec2 *)&local_30);
            this_00 = (GameLogic *)((uint)local_20 >> 1);
            local_18 = (Zone *)(0x5f3759df - (int)this_00);
            // [seh] local_8 = 0xffffffff;
            uVar11 = ZEXT48(local_1c);
            puVar12 = (undefined1 *)
                      ((1.5 - local_20 * 0.5 * (float)local_18 * (float)local_18) * (float)local_18
                      * local_20);
            if (((float)local_1c == -1.0) || (pZVar10 = local_14, (float)puVar12 < (float)local_1c))
            {
              uVar11 = ZEXT48(puVar12);
              local_14 = pZVar3;
              pZVar10 = pZVar3;
              local_1c = puVar12;
            }
          }
        }
      }
      puVar12 = (undefined1 *)uVar11;
      puVar8 = puVar8 + 1;
    } while (puVar8 != local_24);
  }
  if ((pZVar10 != *(Zone **)((char *)this + 0x34)) || (*(float *)((char *)this + 0x38) != (float)puVar12)) {
    *(undefined1 **)((char *)this + 0x38) = puVar12;
    *(Zone **)((char *)this + 0x34) = pZVar10;
  }
  iVar7 = *(int *)((char *)this + 0x24);
  if (*(char *)(*(int *)(iVar7 + 0x40) + 0x34) == '\0') {
    *(undefined1 *)(*(int *)(iVar7 + 0x40) + 0x34) = 1;
    iVar7 = *(int *)((char *)this + 0x24);
  }
  *(undefined1 *)(*(int *)(iVar7 + 0x44) + 0x50) = 1;
  iVar7 = *(int *)((char *)this + 0x24);
  if ((*(int *)(iVar7 + 0xd4) != 1) && (*(char *)(iVar7 + 0x2ec) == '\0')) {
    uStack_50 = 0x4fdd27;
    debugPrint("WORLD","%s reached navpoint, selecting new one");
    doneAtLocation(this);
    iVar7 = *(int *)((char *)this + 0x24);
  }
  if ((*(int *)(*(int *)(iVar7 + 0x44) + 0x34) == 0) &&
     (*(int *)(*(int *)(iVar7 + 0x44) + 0x10) == 0)) {
    local_30 = 0.0;
    local_2c = 0.0;
    // [seh] local_8 = 1;
    local_24 = (undefined4 *)cocos2d::Vec2::getDistance((Vec2 *)(iVar7 + 0x118),(Vec2 *)&local_30);
    // [seh] local_8 = 0xffffffff;
    if ((0.0 < (float)local_24) && (*(int *)(*(Ship **)((char *)this + 0x24) + 0xd4) != 1)) {
      (*(Ship **)((char *)this + 0x24))->allStop();
    }
  }
  iVar7 = *(int *)((char *)this + 0x24);
  iVar1 = *(int *)(*(int *)(iVar7 + 0x44) + 0x34);
  if (iVar1 != 0) {
    local_30 = (float)*(double *)(iVar7 + 0x28);
    local_2c = (float)*(double *)(iVar7 + 0x30);
    // [seh] local_8 = 2;
    local_24 = (undefined4 *)cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar1 + 8),(Vec2 *)&local_30);
    local_18 = (Zone *)(0x5f3759df - ((uint)local_24 >> 1));
    // [seh] local_8 = 0xffffffff;
    iVar7 = *(int *)((char *)this + 0x24);
    fVar13 = (1.5 - (float)local_24 * 0.5 * (float)local_18 * (float)local_18) * (float)local_18 *
             (float)local_24;
    if (*(int *)(iVar7 + 0xd4) == 1) {
      iVar1 = *(int *)(iVar7 + 0x1c4);
      iVar7 = *(int *)(iVar7 + 0x1c8) - iVar1 >> 5;
      if (((iVar7 != 0) && (iVar7 = iVar7 * 0x20, iVar1 + -0x20 + iVar7 != 0)) &&
         (bVar4 = cocos2d::Vec2::equals((Vec2 *)(iVar7 + iVar1 + -0x18),(Vec2 *)((char *)this + 0x48)),
         bVar4)) {
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    if (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x34) != 0) {
      if (5.0 < fVar13) {
        if (*(int *)(*(int *)((char *)this + 0x24) + 0xd4) != 1) {
          ghidra::str::assign
                    ((std::string *)&stack0xffffffa4,"Beginning transit to nav point %d",0x21);
          Ship::log();
          this_01 = *(Ship **)((char *)this + 0x24);
          pNVar2 = *(NavPoint **)(*(int *)(this_01 + 0x44) + 0x34);
          if (pNVar2 != (NavPoint *)0x0) {
            (this_01)->clearWaypointFlags();
            *(undefined4 *)(this_01 + 0x1c8) = *(undefined4 *)(this_01 + 0x1c4);
            *(NavPoint **)(*(int *)(this_01 + 0x44) + 0x34) = pNVar2;
            (this_01)->mapCourseTo(pNVar2);
            this_01 = *(Ship **)((char *)this + 0x24);
          }
          local_28 = (float)*(double *)(this_01 + 0x28);
          local_24 = (undefined4 *)(float)*(double *)(this_01 + 0x30);
          *(float *)((char *)this + 0x40) = local_28;
          *(undefined4 **)((char *)this + 0x44) = local_24;
          iVar7 = *(int *)(*(int *)(this_01 + 0x44) + 0x34);
          *(undefined4 *)((char *)this + 0x48) = *(undefined4 *)(iVar7 + 8);
          *(undefined4 *)((char *)this + 0x4c) = *(undefined4 *)(iVar7 + 0xc);
        }
      }
      else {
        local_58[0] = (std::string)0x0;
        ghidra::str::assign(local_58,"Arrived at destination.",0x17);
        Ship::log();
        doneAtLocation(this);
      }
    }
  }
  if (*(int *)((char *)this + 0x3c) != 0) {
    if (*(float *)(*(int *)((char *)this + 0x3c) + 0x40) <= 0.5) {
      runZoneBreachLogic(this,(float)pcVar5);
      // [seh] ExceptionList = local_10;
      return;
    }
    *(undefined4 *)((char *)this + 0x3c) = 0;
    // [seh] ExceptionList = local_10;
    return;
  }
  iVar7 = *(int *)((char *)this + 0x24);
  uVar9 = 0;
  if (*(int *)(*(int *)(iVar7 + 0x44) + 0x154) - *(int *)(*(int *)(iVar7 + 0x44) + 0x150) >> 2 != 0)
  {
    while ((iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x44) + 0x150) + uVar9 * 4) + 0x130)
           , iVar7 != 0 && (*(char *)(iVar7 + 0x234) != '\0'))) {
      iVar7 = *(int *)((char *)this + 0x34);
      bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
      if (bVar4) break;
      local_24 = (undefined4 *)local_58;
      ghidra::str::ctor(local_58,(std::string *)(iVar7 + 0x78));
      // [seh] local_8 = 3;
      pFVar6 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      bVar4 = (pFVar6)->flagSet();
      if (!bVar4) break;
      iVar7 = *(int *)((char *)this + 0x24);
      uVar9 = uVar9 + 1;
      if ((uint)(*(int *)(*(int *)(iVar7 + 0x44) + 0x154) - *(int *)(*(int *)(iVar7 + 0x44) + 0x150)
                >> 2) <= uVar9) {
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    *(undefined4 *)((char *)this + 0x3c) =
         *(undefined4 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x150) + uVar9 * 4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPatrol::runZoneBreachLogic(AIPatrol *this,float param_1)
void AIPatrol::runZoneBreachLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff98[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  Ship *this_01;
  bool bVar1;
  char *pcVar2;
  int iVar3;
  FlagManager *pFVar4;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_02;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  float fVar7;
  std::string local_64 [8];
  undefined4 uStack_5c;
  void *local_3c [5];
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1ff2;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (*(int *)(*(ShipBehaviour **)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) == -1) {
    iVar3 = ShipBehaviour::getNextTubeWithValidWeapon
                      (*(ShipBehaviour **)(*(int *)((char *)this + 0x24) + 0x44));
    *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) = iVar3;
  }
  if (*(float *)(*(int *)((char *)this + 0x34) + 0x38) + 60.0 < *(float *)((char *)this + 0x38)) goto LAB_004fe2d8;
  ghidra::str::ctor
            (local_64,(std::string *)(*(int *)(*(int *)((char *)this + 0x3c) + 0x130) + 0x238));
  bVar1 = hasBeenWarned(this);
  if (bVar1) goto LAB_004fe2d8;
  if ((*(int *)((char *)this + 0x34) == 0) || (*(char *)(*(int *)((char *)this + 0x34) + 0x74) == '\0')) {
    ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
    this_02 = extraout_ECX_00;
LAB_004fe1b1:
    uStack_5c = 0x4fe1c7;
    LogSystem::addLogLine
              (this_02,*(LogPriority *)(*(int *)(*(int *)((char *)this + 0x3c) + 0x130) + 0x224),
               &DAT_00000004);
  }
  else {
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
    this_02 = extraout_ECX;
    if (!bVar1) goto LAB_004fe1b1;
  }
  iVar3 = *(int *)((char *)this + 0x3c);
  if (*(char *)(*(int *)(iVar3 + 0x130) + 0x234) != '\0') {
    uStack_5c = 0x4fe1fc;
    debugPrint("GAME","Zone breached by player, flag \'%s\' being set");
    local_14 = &stack0xffffff98;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff98,(std::string *)(*(int *)((char *)this + 0x34) + 0x90));
    // [seh] local_8 = 0;
    pFVar4 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar4)->setFlag();
    iVar3 = *(int *)((char *)this + 0x3c);
  }
  ghidra::str::ctor
            ((std::string *)local_3c,(std::string *)(*(int *)(iVar3 + 0x130) + 0x238));
  // [seh] local_8 = 1;
  ghidra::str::ctor(local_64,(std::string *)local_3c);
  bVar1 = hasBeenWarned(this);
  if (!bVar1) {
    this_00 = *(std::string **)((char *)this + 0x54);
    if (*(std::string **)((char *)this + 0x58) == this_00) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)((char *)this + 0x50),(std::string *)this_00,(std::string *)local_3c);
    }
    else {
      ghidra::str::ctor(this_00,(std::string *)local_3c);
      *(int *)((char *)this + 0x54) = *(int *)((char *)this + 0x54) + 0x18;
    }
  }
  // [seh] local_8 = 0xffffffff;
  if (0xf < local_28) {
    pnVar6 = (nothrow_t *)(local_28 + 1);
    pvVar5 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_3c[0] + -4);
      pnVar6 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  if (*(int *)(*(Ship **)((char *)this + 0x24) + 0xd4) == 1) {
    (*(Ship **)((char *)this + 0x24))->cancelAutopilot();
  }
LAB_004fe2d8:
  if (*(float *)((char *)this + 0x38) <= *(float *)(*(int *)((char *)this + 0x34) + 0x38)) {
    if (*(char *)(*(int *)((char *)this + 0x34) + 0x75) == '\0') {
      *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x40) =
           *(undefined4 *)(*(int *)((char *)this + 0x3c) + 0x130);
    }
    else {
      this_01 = *(Ship **)((char *)this + 0x24);
      bVar1 = (this_01)->weaponSpunUp();
      iVar3 = *(int *)(this_01 + 0x44);
      if (!bVar1) {
        *(undefined1 *)(iVar3 + 0x58) = 1;
        // [seh] ExceptionList = local_10;
        return;
      }
      *(undefined1 *)(iVar3 + 0x58) = 0;
      local_1c = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
      local_18 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
      iVar3 = *(int *)((char *)this + 0x3c);
      local_24 = (float)((double)*(float *)(iVar3 + 0x104) + *(double *)(iVar3 + 0x10));
      local_20 = (float)((double)*(float *)(iVar3 + 0x108) + *(double *)(iVar3 + 0x18));
      // [seh] local_8 = 3;
      fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)&local_1c);
      local_14 = (undefined1 *)(0x5f3759df - ((uint)fVar7 >> 1));
      // [seh] local_8 = 0xffffffff;
      if ((1.5 - fVar7 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar7 <= 100.0
         ) {
        local_64[0] = (std::string)0x0;
        ghidra::str::assign
                  (local_64,"Firing weapon as our target remains in the forbidden zone.",0x3a);
        Ship::log();
        (*(Weapon **)
                           (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20) + 0x3c +
                           *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) * 4))->setTarget((GameObject *)
                          (-(uint)(*(int *)(*(int *)((char *)this + 0x3c) + 0x130) != 0) &
                          *(int *)(*(int *)((char *)this + 0x3c) + 0x130) + 8U));
        (*(Ship **)((char *)this + 0x24))->fireWeapon(*(int *)(*(int *)(*(Ship **)((char *)this + 0x24) + 0x44) + 0x5c));
        // [seh] ExceptionList = local_10;
        return;
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPatrol::removeDesireTarget(AIPatrol *this,GameObject *param_1)
void AIPatrol::removeDesireTarget(GameObject * param_1)

{
  int iVar1;
  
  if (((*(int *)((char *)this + 0x3c) != 0) && (iVar1 = *(int *)(*(int *)((char *)this + 0x3c) + 0x130), iVar1 != 0)
      ) && ((GameObject *)(iVar1 + 8) == param_1)) {
    *(undefined4 *)((char *)this + 0x3c) = 0;
  }
  if (*(GameObject **)((char *)this + 0x28) == param_1) {
    *(undefined4 *)((char *)this + 0x28) = 0;
  }
  return;
}


// Ghidra: bool __thiscall AIPatrol::hasBeenWarned(AIPatrol *this,void *param_2)
bool AIPatrol::hasBeenWarned(void * param_2)

{
  std::string *pbVar1;
  std::string *pbVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  std::string *unaff_EBX;
  std::string *unaff_ESI;
  uint in_stack_00000018;
  
  pbVar1 = *(std::string **)((char *)this + 0x54);
  pbVar2 = ghidra::lib::_Find_unchecked___x28_x29((std::string *)&param_2,unaff_ESI,unaff_EBX);
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  return pbVar2 != pbVar1;
}


// Ghidra: void __thiscall AIPatrol::vesselFailedHackingMe(AIPatrol *this,Ship *param_1)
void AIPatrol::vesselFailedHackingMe(Ship * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  FlagManager *pFVar3;
  uint unaff_ESI;
  std::string abStack_38 [16];
  undefined4 uStack_28;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0178;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x34) != 0) {
    uStack_28 = 0x4fe56b;
    debugPrint("GAME","Vessel tried and failed to hack me.");
    uStack_28 = 0x4fe58c;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_ESI);
    if (!bVar1) {
      uStack_28 = 0x4fe5a2;
      debugPrint("GAME","Setting flag.");
      ghidra::str::ctor
                (abStack_38,(std::string *)(*(int *)((char *)this + 0x34) + 0x44));
      // [seh] local_8 = 0;
      pFVar3 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar3)->setFlag();
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPatrol::vesselHackedMe(AIPatrol *this,Ship *param_1)
void AIPatrol::vesselHackedMe(Ship * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  FlagManager *pFVar2;
  uint unaff_ESI;
  std::string abStack_38 [16];
  undefined4 uStack_28;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c0178;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x34) != 0) {
    uStack_28 = 0x4fe638;
    bVar1 = ghidra::lib::_Traits_equal_t
                      // [cookie] ("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_ESI);
    if (!bVar1) {
      uStack_28 = 0x4fe64e;
      debugPrint("GAME","Hacked a vessel patrolling a zone, setting a flag.");
      ghidra::str::ctor
                (abStack_38,(std::string *)(*(int *)((char *)this + 0x34) + 0x5c));
      // [seh] local_8 = 0;
      pFVar2 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar2)->setFlag();
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}
