// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIAttack::recalculateLogic(AIAttack *this)
void AIAttack::recalculateLogic()

{
  Ship *pSVar1;
  bool bVar2;
  
  *(undefined4 *)((char *)this + 0x20) = 0;
  pSVar1 = *(Ship **)(*(int *)(*(Ship **)((char *)this + 0x24) + 0x44) + 0x40);
  if (pSVar1 != (Ship *)0x0) {
    bVar2 = (*(Ship **)((char *)this + 0x24))->canCurrentlyDetect(pSVar1);
    if (bVar2) {
      *(undefined4 *)((char *)this + 0x20) = 0x40400000;
      return;
    }
    *(undefined4 *)((char *)this + 0x20) = 0x40000000;
  }
  return;
}


// Ghidra: void __thiscall AIAttack::runLogic(AIAttack *this,float param_1)
void AIAttack::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  Ship *pSVar2;
  SensorData *this_00;
  int iVar3;
  char cVar4;
  bool bVar5;
  Vec2 *pVVar6;
  int iVar7;
  undefined4 *puVar8;
  ShipBehaviour *this_01;
  undefined4 *puVar9;
  Vec2 *unaff_EDI;
  float fVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  std::string local_60 [12];
  undefined4 uStack_54;
  float local_30;
  float local_2c;
  SensorData *local_28;
  float local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  float local_18;
  char local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1db4;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar6 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  if (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x40) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20);
  // [seh] ExceptionList = &local_10;
  if ((piVar1 == (int *)0x0) || (cVar4 = (**(code **)(*piVar1 + 0x10))(), cVar4 == '\0')) {
    local_60[0] = (std::string)0x0;
    ghidra::str::assign(local_60,"No weapon system. Cannot engage.",0x20);
    Ship::log();
    *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x40) = 0;
    // [seh] ExceptionList = local_10;
    return;
  }
  pSVar2 = *(Ship **)((char *)this + 0x24);
  iVar7 = (*(ShipModule **)(*(int *)(pSVar2 + 0x40) + 0x20))->getHousedObjectCount();
  if (iVar7 == 0) {
    local_60[0] = (std::string)0x0;
    ghidra::str::assign(local_60,"No weapons. Cannot engage.",0x1a);
    Ship::log();
    // [seh] ExceptionList = local_10;
    return;
  }
  local_28 = Ship::getSensorDataForShipID
                       (pSVar2,*(int *)(*(int *)(*(int *)(pSVar2 + 0x44) + 0x40) + 0x250));
  if (local_28 == (SensorData *)0x0) {
    uStack_54 = 0x4fc15e;
    debugPrint("ERROR","Error: somehow enemy vessel has no sensor data.");
    // [seh] ExceptionList = local_10;
    return;
  }
  (local_28)->getPresumedLocation();
  local_24 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
  fVar10 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
  // [seh] local_8 = 1;
  local_20 = (undefined1 *)fVar10;
  fastDistance(pVVar6,unaff_EDI);
  // [seh] local_8 = 0xffffffff;
  local_1c = (undefined4 *)fVar10;
  bVar5 = ShipModule::validHousedWeaponInSlot
                    (*(ShipModule **)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20),
                     *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c));
  if (!bVar5) {
    iVar7 = (this_01)->getNextTubeWithValidWeapon();
    *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) = iVar7;
    uStack_54 = 0;
    ghidra::str::assign
              ((std::string *)&stack0xffffff9c,
               "Had an invalid weapon selected Changing over to tube %d",0x37);
    Ship::log();
  }
  if ((float)local_1c <= 120.0) {
    local_60[0] = (std::string)0x0;
    ghidra::str::assign(local_60,"",0);
    bVar5 = (*(Ship **)((char *)this + 0x24))->hasWeaponFired();
    if (!bVar5) {
      pSVar2 = *(Ship **)((char *)this + 0x24);
      bVar5 = (pSVar2)->weaponSpunUp();
      if (!bVar5) {
        *(undefined1 *)(*(int *)(pSVar2 + 0x44) + 0x58) = 1;
        goto LAB_004fc27d;
      }
    }
  }
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
LAB_004fc27d:
  if ((float)local_1c <= *(float *)((char *)this + 0x30)) {
    pSVar2 = *(Ship **)((char *)this + 0x24);
    bVar5 = (pSVar2)->weaponSpunUp();
    if (bVar5) {
      puVar8 = *(undefined4 **)(pSVar2 + 0x218);
      puVar9 = *(undefined4 **)(pSVar2 + 0x214);
      local_11 = (float)(int)(&fireSolution)[*(int *)(*(int *)(pSVar2 + 0x44) + 0x74)] <=
                 *(float *)(local_28 + 0x128);
      puVar11 = &DAT_bf800000;
      local_20 = &DAT_bf800000;
      local_1c = puVar8;
      if (puVar9 != puVar8) {
        do {
          this_00 = (SensorData *)*puVar9;
          if (((*(int *)(this_00 + 0xe0) == 0) && (*(int *)(this_00 + 0xd8) == 4)) &&
             (*(float *)(this_00 + 0x38) <= 30.0 && *(float *)(this_00 + 0x38) != 30.0)) {
            local_30 = (float)*(double *)(pSVar2 + 0x28);
            local_2c = (float)*(double *)(pSVar2 + 0x30);
            // [seh] local_8 = 2;
            pVVar6 = (Vec2 *)(this_00)->getPresumedLocation();
            // [seh] local_8 = CONCAT31(local_8._1_3_,3);
            fVar10 = cocos2d::Vec2::getDistanceSq(pVVar6,(Vec2 *)&local_30);
            local_18 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
            // [seh] local_8 = 0xffffffff;
            puVar12 = (undefined1 *)((1.5 - fVar10 * 0.5 * local_18 * local_18) * local_18 * fVar10)
            ;
            puVar8 = local_1c;
            if (((float)local_20 == -1.0) || (puVar11 = local_20, (float)puVar12 < (float)local_20))
            {
              puVar11 = puVar12;
              local_20 = puVar12;
            }
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar8);
      }
      if ((((float)puVar11 != -1.0) && ((float)puVar11 < 70.0)) || (local_11 != '\0')) {
        local_60[0] = (std::string)0x0;
        ghidra::str::assign(local_60,"",0);
        bVar5 = (*(Ship **)((char *)this + 0x24))->hasWeaponFired();
        if (!bVar5) {
          iVar7 = *(int *)(*(int *)((char *)this + 0x24) + 0x44);
          iVar3 = *(int *)(iVar7 + 0x40);
          *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20) + 0x3c +
                            *(int *)(iVar7 + 0x5c) * 4) + 0x38c) = -(uint)(iVar3 != 0) & iVar3 + 8U;
          puVar8 = (undefined4 *)(local_28)->getPresumedLocation();
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20) + 0x3c +
                          *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) * 4);
          *(undefined4 *)(iVar7 + 300) = *puVar8;
          *(undefined4 *)(iVar7 + 0x130) = puVar8[1];
          (*(Ship **)((char *)this + 0x24))->fireWeapon(*(int *)(*(int *)(*(Ship **)((char *)this + 0x24) + 0x44) + 0x5c));
          local_60[0] = (std::string)0x0;
          ghidra::str::assign(local_60,"Fired a torpedo at my target.",0x1d);
          Ship::log();
        }
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIAttack::enterState(AIAttack *this)
void AIAttack::enterState()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  int iVar2;
  Vec2 *pVVar3;
  uint uVar4;
  SensorData *this_00;
  Vec2 *unaff_EDI;
  bool bVar5;
  float fVar6;
  float fVar7;
  std::string local_54 [8];
  undefined4 uStack_4c;
  float local_48;
  float local_44;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1de2;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar3 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_44 = 0.0;
  local_54[0] = (std::string)0x0;
  ghidra::str::assign(local_54,"Entering combat with target \'%s\'",0x20);
  Ship::log();
  *(undefined4 *)((char *)this + 0x34) = 0;
  iVar2 = *(int *)(*(Ship **)((char *)this + 0x24) + 0x44);
  if (((*(int *)(iVar2 + 0x70) != 7) && (*(int *)(iVar2 + 0x70) != 8)) &&
     (*(int *)(iVar2 + 0x74) != 3)) {
    if (*(int *)(iVar2 + 0x74) == 2) {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      bVar5 = uVar4 == 0;
      if ((int)uVar4 < 0) {
        bVar5 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar5) {
        *(undefined4 *)((char *)this + 0x34) = 0;
        goto LAB_004fc71c;
      }
    }
    else {
      this_00 = Ship::getSensorDataForShipID
                          (*(Ship **)((char *)this + 0x24),*(int *)(*(int *)(iVar2 + 0x40) + 0x250));
      if (this_00 == (SensorData *)0x0) {
        local_44 = 7.32605e-39;
        debugPrint("ERROR","Error: somehow enemy vessel has no sensor data.");
        // [seh] ExceptionList = local_10;
        return;
      }
      local_48 = (float)((double)*(float *)(this_00 + 0x104) + *(double *)(this_00 + 0x10));
      fVar6 = (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18));
      uStack_4c = 0x4fc67c;
      local_44 = fVar6;
      angleInDegreesFrom();
      fVar1 = *(float *)(*(int *)(this_00 + 0x130) + 0x120);
      (this_00)->getPresumedLocation();
      fVar7 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
      // [seh] local_8 = 1;
      fastDistance(pVVar3,unaff_EDI);
      // [seh] local_8 = 0xffffffff;
      if (fVar7 <= 60.0) {
        *(undefined4 *)((char *)this + 0x34) = 0;
        goto LAB_004fc71c;
      }
      if ((int)(fVar1 - (float)(int)fVar6) - 0x5aU < 0xb5) {
        *(undefined4 *)((char *)this + 0x34) = 0;
        goto LAB_004fc71c;
      }
    }
  }
  *(undefined4 *)((char *)this + 0x34) = 1;
LAB_004fc71c:
  local_44 = 0.0;
  local_54[0] = (std::string)0x0;
  ghidra::str::assign(local_54,"Attack pattern chosen: %s",0x19);
  Ship::log();
  iVar2 = *(int *)((char *)this + 0x24);
  if (*(int *)((char *)this + 0x34) == 0) {
    *(undefined1 **)((char *)this + 0x30) = &DAT_428c0000;
    *(undefined4 *)(iVar2 + 0x380) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x40);
  }
  else {
    *(undefined4 *)((char *)this + 0x30) = 0x43160000;
    *(undefined4 *)(iVar2 + 900) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x40);
  }
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIAttack::leaveState(AIAttack *this)
void AIAttack::leaveState()

{
  std::string local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0xf;
  local_24[0] = (std::string)0x0;
  ghidra::str::assign(local_24,"Leaving combat mode.",0x14);
  Ship::log();
  return;
}


// Ghidra: AIAttack * __thiscall AIAttack::AIAttack(AIAttack *this,Ship *param_1)
AIAttack::AIAttack(Ship * param_1)

{
  std::string local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  Ship *pSStack_10;
  
  pSStack_10 = param_1;
  local_18 = 0;
  local_14 = 0xf;
  local_28[0] = (std::string)0x0;
  ghidra::str::assign(local_28,"Attack",6);
  new ((void *)((AIDesire *)this)) AIDesire(2);
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 0x30) = 0;
  ((char *)this)[0x2c] = (byte)0x1;
  return;
}
