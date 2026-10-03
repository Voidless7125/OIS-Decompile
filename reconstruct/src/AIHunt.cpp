// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIHunt::recalculateLogic(AIHunt *this)
void AIHunt::recalculateLogic()

{
  *(undefined4 *)((char *)this + 0x20) = 0x3f800000;
  return;
}


// Ghidra: void __thiscall AIHunt::enterState(AIHunt *this)
void AIHunt::enterState()

{
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  return;
}


// Ghidra: void __thiscall AIHunt::hitTravelLocation(AIHunt *this)
void AIHunt::hitTravelLocation()

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  std::string local_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  int local_44;
  
  iVar3 = *(int *)(*(int *)((char *)this + 0x24) + 0x44);
  if ((*(char *)(iVar3 + 0x15d) != '\0') && (*(int *)(iVar3 + 0x74) != 3)) {
    *(undefined4 *)((char *)this + 0x30) = 1;
    iVar3 = *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x78);
    if (iVar3 == 0) {
      iVar3 = 0;
      local_44 = 2;
      do {
        local_88 = (double)CONCAT44(0x4fcee5,(undefined4)local_88);
        iVar1 = rand();
        iVar3 = iVar3 + iVar1 % 6 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      fVar5 = (float)(iVar3 + 0x1e);
    }
    else if (iVar3 == 1) {
      iVar3 = 0;
      local_44 = 3;
      do {
        local_88 = (double)CONCAT44(0x4fcf16,(undefined4)local_88);
        iVar1 = rand();
        iVar3 = iVar3 + iVar1 % 6 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      fVar5 = (float)(iVar3 + 0x32);
    }
    else if (iVar3 == 2) {
      iVar3 = 0;
      local_44 = 4;
      do {
        local_88 = (double)CONCAT44(0x4fcf47,(undefined4)local_88);
        iVar1 = rand();
        iVar3 = iVar3 + iVar1 % 6 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      fVar5 = (float)(iVar3 + 100);
    }
    else {
      fVar5 = 0.0;
    }
    *(float *)((char *)this + 0x34) = fVar5;
    local_88 = (double)fVar5;
    local_90 = 0;
    local_8c = 0xf;
    local_a0[0] = (std::string)0x0;
    ghidra::str::assign
              (local_a0,"Coming to stop and lurking in this nebula for %.0f seconds",0x3a);
    Ship::log();
    local_88 = (double)CONCAT44(0x4fcfa4,(undefined4)local_88);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar4 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar4) {
      fVar5 = *(float *)(*(int *)((char *)this + 0x24) + 0x120) + 90.0;
    }
    else {
      fVar5 = *(float *)(*(int *)((char *)this + 0x24) + 0x120) - 90.0;
    }
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 360.0;
    }
    else if (360.0 <= fVar5) {
      fVar5 = fVar5 - 360.0;
    }
    *(float *)((char *)this + 0x3c) = fVar5;
    *(float *)((char *)this + 0x38) = *(float *)((char *)this + 0x34) * 0.5;
    return;
  }
  local_88 = (double)CONCAT44(0x4fd01c,(undefined4)local_88);
  doneAtLocation(this);
  return;
}


// Ghidra: void __thiscall AIHunt::doneAtLocation(AIHunt *this)
void AIHunt::doneAtLocation()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  Vec2 *pVVar2;
  uint uVar3;
  NavPoint *pNVar4;
  Vec2 *unaff_EDI;
  bool bVar5;
  float fVar6;
  char *pcVar7;
  std::string local_4c [16];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1edb;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar2 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x74) == 3) {
LAB_004fd190:
    _local_34 = 2.124580250829e-314;
    pNVar4 = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getRandomNavPoint(1);
    if (pNVar4 == (NavPoint *)0x0) {
      _local_34 = 2.58446875690542e-317;
      pNVar4 = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getRandomNavPoint(0);
      if (pNVar4 == (NavPoint *)0x0) {
        _local_34 = 2.12458026910943e-314;
        pNVar4 = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getRandomNavPoint(1);
        if (pNVar4 == (NavPoint *)0x0) {
          // [seh] ExceptionList = local_10;
          return;
        }
      }
    }
    local_1c = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
    local_18 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
    // [seh] local_8 = 0;
    _local_34 = (double)CONCAT44((Vec2 *)(pNVar4 + 8),0x4fd1ff);
    fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)(pNVar4 + 8));
    local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
    fVar6 = (1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6;
  }
  else {
    _local_34 = (double)CONCAT44(0x4fd06f,local_34);
    uVar3 = rand();
    uVar3 = uVar3 & 0x80000001;
    bVar5 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar5 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar5) goto LAB_004fd190;
    _local_34 = 1.06125632817864e-313;
    pNVar4 = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getRandomNavPoint(5);
    iVar1 = *(int *)((char *)this + 0x24);
    if (pNVar4 != (NavPoint *)0x0) {
      local_1c = (float)*(double *)(iVar1 + 0x28);
      local_18 = (float)*(double *)(iVar1 + 0x30);
      // [seh] local_8 = 1;
      _local_34 = (double)CONCAT44((Vec2 *)(pNVar4 + 8),0x4fd0cd);
      fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_1c,(Vec2 *)(pNVar4 + 8));
      local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
      fVar6 = (1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6;
      uVar3 = 0x71;
      pcVar7 = 
      "I am heading a nebula to lie in wait for a potential target. Distance to my selected point within a nebula: %fGms"
      ;
      goto LAB_004fd25c;
    }
    _local_34 = 2.58441045715921e-317;
    pNVar4 = (*(Sector **)(iVar1 + 0x24))->getRandomNavPoint(0);
    if (pNVar4 == (NavPoint *)0x0) {
      _local_34 = 2.12458021080968e-314;
      pNVar4 = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getRandomNavPoint(1);
      if (pNVar4 == (NavPoint *)0x0) {
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    local_1c = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
    fVar6 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
    // [seh] local_8 = 2;
    _local_34 = (double)CONCAT44(0x4fd187,local_34);
    local_18 = fVar6;
    fastDistance(pVVar2,unaff_EDI);
  }
  uVar3 = 0x56;
  pcVar7 = "Travelling around the map hunting for targets. Distance to my selected waypoint: %fGms";
LAB_004fd25c:
  _local_34 = (double)fVar6;
  local_3c = 0;
  local_38 = 0xf;
  local_4c[0] = (std::string)0x0;
  ghidra::str::assign(local_4c,pcVar7,uVar3);
  Ship::log();
  // [seh] local_8 = 0xffffffff;
  if (pNVar4 != (NavPoint *)0x0) {
    _local_34 = (double)CONCAT44(pNVar4,0x4fd291);
    (*(Ship **)((char *)this + 0x24))->mapCourseTo(pNVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIHunt::runTravelLogic(AIHunt *this,float param_1)
void AIHunt::runTravelLogic(float param_1)

{
  char stack0xffffffc0[1] = {0};  // [pseudo] address of an unnamed stack slot
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  std::string local_3c [8];
  undefined4 uStack_34;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1f12;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 1;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  iVar4 = *(int *)((char *)this + 0x24);
  if (*(char *)(*(int *)(iVar4 + 0x40) + 0x34) != '\0') {
    *(undefined1 *)(*(int *)(iVar4 + 0x40) + 0x34) = 0;
    iVar4 = *(int *)((char *)this + 0x24);
  }
  if ((*(int *)(iVar4 + 0xd4) != 1) && (*(char *)(iVar4 + 0x2ec) == '\0')) {
    uStack_34 = 0x4fd32f;
    debugPrint("WORLD","%s reached navpoint, selecting new one");
    hitTravelLocation(this);
    iVar4 = *(int *)((char *)this + 0x24);
  }
  if ((*(int *)(*(int *)(iVar4 + 0x44) + 0x34) == 0) &&
     (*(int *)(*(int *)(iVar4 + 0x44) + 0x10) == 0)) {
    local_18 = 0.0;
    local_14 = 0.0;
    // [seh] local_8 = 0;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(iVar4 + 0x118),(Vec2 *)&local_18);
    // [seh] local_8 = 0xffffffff;
    if ((0.0 < local_14) && (*(int *)(*(Ship **)((char *)this + 0x24) + 0xd4) != 1)) {
      (*(Ship **)((char *)this + 0x24))->allStop();
    }
  }
  iVar4 = *(int *)((char *)this + 0x24);
  iVar2 = *(int *)(*(int *)(iVar4 + 0x44) + 0x34);
  if (iVar2 != 0) {
    local_18 = (float)*(double *)(iVar4 + 0x28);
    local_14 = (float)*(double *)(iVar4 + 0x30);
    // [seh] local_8 = 1;
    fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar2 + 8),(Vec2 *)&local_18);
    local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
    fVar5 = (1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14;
    // [seh] local_8 = 0xffffffff;
    iVar4 = *(int *)((char *)this + 0x24);
    if (*(int *)(iVar4 + 0xd4) == 1) {
      iVar2 = *(int *)(iVar4 + 0x1c4);
      iVar4 = *(int *)(iVar4 + 0x1c8) - iVar2 >> 5;
      if (((iVar4 != 0) && (iVar4 = iVar4 * 0x20, iVar2 + -0x20 + iVar4 != 0)) &&
         (bVar3 = cocos2d::Vec2::equals((Vec2 *)(iVar4 + iVar2 + -0x18),(Vec2 *)((char *)this + 0x48)),
         bVar3)) {
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    if (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x34) != 0) {
      if (fVar5 * fVar6 <= 5.0) {
        local_3c[0] = (std::string)0x0;
        ghidra::str::assign(local_3c,"Arrived at destination.",0x17);
        Ship::log();
        doneAtLocation(this);
        // [seh] ExceptionList = local_10;
        return;
      }
      if (*(int *)(*(int *)((char *)this + 0x24) + 0xd4) != 1) {
        ghidra::str::assign
                  ((std::string *)&stack0xffffffc0,"Beginning transit to nav point %d",0x21);
        Ship::log();
        (*(Ship **)((char *)this + 0x24))->travelTo(*(NavPoint **)(*(int *)(*(Ship **)((char *)this + 0x24) + 0x44) + 0x34));
        iVar4 = *(int *)((char *)this + 0x24);
        dVar1 = *(double *)(iVar4 + 0x30);
        *(float *)((char *)this + 0x40) = (float)*(double *)(iVar4 + 0x28);
        *(float *)((char *)this + 0x44) = (float)dVar1;
        iVar4 = *(int *)(*(int *)(iVar4 + 0x44) + 0x34);
        *(undefined4 *)((char *)this + 0x48) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)((char *)this + 0x4c) = *(undefined4 *)(iVar4 + 0xc);
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIHunt::runLurkLogic(AIHunt *this,float param_1)
void AIHunt::runLurkLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  float fVar2;
  float fVar3;
  float in_XMM1_Da;
  float fVar4;
  std::string local_3c [16];
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1f39;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 0;
  if (*(char *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x34) != '\0') {
    *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x34) = 0;
  }
  fVar3 = *(float *)((char *)this + 0x34) - in_XMM1_Da;
  *(float *)((char *)this + 0x34) = fVar3;
  if ((*(float *)((char *)this + 0x38) != -1.0) &&
     (fVar4 = *(float *)((char *)this + 0x38) - in_XMM1_Da, *(float *)((char *)this + 0x38) = fVar4, fVar4 <= 0.0))
  {
    *(undefined1 **)((char *)this + 0x38) = &DAT_bf800000;
    local_2c = 0;
    local_3c[0] = (std::string)0x0;
    ghidra::str::assign
              (local_3c,"Roating to avoid a blind spot problem while lurking in nebula.",0x3e);
    Ship::log();
    fVar3 = *(float *)((char *)this + 0x34);
  }
  if (0.0 < fVar3) {
    local_1c = 0;
    local_18 = 0;
    // [seh] local_8 = 0;
    local_2c = 0x4fd69e;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(*(int *)((char *)this + 0x24) + 0x118),(Vec2 *)&local_1c)
    ;
    // [seh] local_8 = 0xffffffff;
    if ((0.0 < local_14) && (*(int *)(*(Ship **)((char *)this + 0x24) + 0xd4) != 1)) {
      (*(Ship **)((char *)this + 0x24))->allStop();
      // [seh] ExceptionList = local_10;
      return;
    }
    fVar3 = *(float *)((char *)this + 0x3c);
    if (*(float *)((char *)this + 0x38) == -1.0) {
      fVar3 = fVar3 - 180.0;
      if (0.0 <= fVar3) {
        if (360.0 <= fVar3) {
          fVar3 = fVar3 - 360.0;
        }
      }
      else {
        fVar3 = fVar3 + 360.0;
      }
    }
    iVar1 = *(int *)((char *)this + 0x24);
    if (*(float *)(iVar1 + 0x120) != fVar3) {
      *(undefined4 *)(iVar1 + 0xd4) = 1;
      *(undefined4 *)(iVar1 + 0x2c0) = 0;
      *(undefined4 *)(iVar1 + 0x2c4) = 0;
      (*(Ship **)((char *)this + 0x24))->rotateTo(fVar2);
    }
    // [seh] ExceptionList = local_10;
    return;
  }
  *(undefined1 **)((char *)this + 0x34) = &DAT_bf800000;
  local_2c = 0;
  local_3c[0] = (std::string)0x0;
  ghidra::str::assign(local_3c,"No targets here. Moving on.",0x1b);
  Ship::log();
  *(undefined4 *)((char *)this + 0x30) = 0;
  doneAtLocation(this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIHunt::runLogic(AIHunt *this,float param_1)
void AIHunt::runLogic(float param_1)

{
  float unaff_EBP;
  
  if (*(int *)((char *)this + 0x30) == 0) {
    runTravelLogic(this,unaff_EBP);
    return;
  }
  if (*(int *)((char *)this + 0x30) == 1) {
    runLurkLogic(this,unaff_EBP);
  }
  return;
}
