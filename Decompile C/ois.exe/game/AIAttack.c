#include "../ois.exe.h"


// public: virtual void __thiscall AIAttack::recalculateLogic(void)

void __thiscall AIAttack::recalculateLogic(AIAttack *this)

{
  Ship *pSVar1;
  bool bVar2;
  
  *(undefined4 *)(this + 0x20) = 0;
  pSVar1 = *(Ship **)(*(int *)(*(Ship **)(this + 0x24) + 0x44) + 0x40);
  if (pSVar1 != (Ship *)0x0) {
    bVar2 = Ship::canCurrentlyDetect(*(Ship **)(this + 0x24),pSVar1);
    if (bVar2) {
      *(undefined4 *)(this + 0x20) = 0x40400000;
      return;
    }
    *(undefined4 *)(this + 0x20) = 0x40000000;
  }
  return;
}


// public: virtual void __thiscall AIAttack::runLogic(float)

void __thiscall AIAttack::runLogic(AIAttack *this,float param_1)

{
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
  basic_string<> local_60 [12];
  undefined4 uStack_54;
  float local_30;
  float local_2c;
  SensorData *local_28;
  float local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1db4;
  local_10 = ExceptionList;
  pVVar6 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  if (*(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x40) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(this + 0x24) + 0x40) + 0x20);
  ExceptionList = &local_10;
  if ((piVar1 == (int *)0x0) || (cVar4 = (**(code **)(*piVar1 + 0x10))(), cVar4 == '\0')) {
    local_60[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_60,"No weapon system. Cannot engage.",0x20);
    Ship::log();
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x40) = 0;
    ExceptionList = local_10;
    return;
  }
  pSVar2 = *(Ship **)(this + 0x24);
  iVar7 = ShipModule::getHousedObjectCount(*(ShipModule **)(*(int *)(pSVar2 + 0x40) + 0x20));
  if (iVar7 == 0) {
    local_60[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_60,"No weapons. Cannot engage.",0x1a);
    Ship::log();
    ExceptionList = local_10;
    return;
  }
  local_28 = Ship::getSensorDataForShipID
                       (pSVar2,*(int *)(*(int *)(*(int *)(pSVar2 + 0x44) + 0x40) + 0x250));
  if (local_28 == (SensorData *)0x0) {
    uStack_54 = 0x4fc15e;
    debugPrint("ERROR","Error: somehow enemy vessel has no sensor data.");
    ExceptionList = local_10;
    return;
  }
  SensorData::getPresumedLocation(local_28);
  local_24 = (float)*(double *)(*(int *)(this + 0x24) + 0x28);
  fVar10 = (float)*(double *)(*(int *)(this + 0x24) + 0x30);
  local_8 = 1;
  local_20 = (undefined1 *)fVar10;
  fastDistance(pVVar6,unaff_EDI);
  local_8 = 0xffffffff;
  local_1c = (undefined4 *)fVar10;
  bVar5 = ShipModule::validHousedWeaponInSlot
                    (*(ShipModule **)(*(int *)(*(int *)(this + 0x24) + 0x40) + 0x20),
                     *(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x5c));
  if (!bVar5) {
    iVar7 = ShipBehaviour::getNextTubeWithValidWeapon(this_01);
    *(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x5c) = iVar7;
    uStack_54 = 0;
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffff9c,
               "Had an invalid weapon selected Changing over to tube %d",0x37);
    Ship::log();
  }
  if ((float)local_1c <= 120.0) {
    local_60[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_60,"",0);
    bVar5 = Ship::hasWeaponFired(*(Ship **)(this + 0x24));
    if (!bVar5) {
      pSVar2 = *(Ship **)(this + 0x24);
      bVar5 = Ship::weaponSpunUp(pSVar2);
      if (!bVar5) {
        *(undefined1 *)(*(int *)(pSVar2 + 0x44) + 0x58) = 1;
        goto LAB_004fc27d;
      }
    }
  }
  *(undefined1 *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x58) = 0;
LAB_004fc27d:
  if ((float)local_1c <= *(float *)(this + 0x30)) {
    pSVar2 = *(Ship **)(this + 0x24);
    bVar5 = Ship::weaponSpunUp(pSVar2);
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
            local_8 = 2;
            pVVar6 = (Vec2 *)SensorData::getPresumedLocation(this_00);
            local_8 = CONCAT31(local_8._1_3_,3);
            fVar10 = cocos2d::Vec2::getDistanceSq(pVVar6,(Vec2 *)&local_30);
            local_18 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
            local_8 = 0xffffffff;
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
        local_60[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_60,"",0);
        bVar5 = Ship::hasWeaponFired(*(Ship **)(this + 0x24));
        if (!bVar5) {
          iVar7 = *(int *)(*(int *)(this + 0x24) + 0x44);
          iVar3 = *(int *)(iVar7 + 0x40);
          *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0x40) + 0x20) + 0x3c +
                            *(int *)(iVar7 + 0x5c) * 4) + 0x38c) = -(uint)(iVar3 != 0) & iVar3 + 8U;
          puVar8 = (undefined4 *)SensorData::getPresumedLocation(local_28);
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0x40) + 0x20) + 0x3c +
                          *(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x5c) * 4);
          *(undefined4 *)(iVar7 + 300) = *puVar8;
          *(undefined4 *)(iVar7 + 0x130) = puVar8[1];
          Ship::fireWeapon(*(Ship **)(this + 0x24),
                           *(int *)(*(int *)(*(Ship **)(this + 0x24) + 0x44) + 0x5c));
          local_60[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_60,"Fired a torpedo at my target.",0x1d);
          Ship::log();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall AIAttack::enterState(void)

void __thiscall AIAttack::enterState(AIAttack *this)

{
  float fVar1;
  int iVar2;
  Vec2 *pVVar3;
  uint uVar4;
  SensorData *this_00;
  Vec2 *unaff_EDI;
  bool bVar5;
  float fVar6;
  float fVar7;
  basic_string<> local_54 [8];
  undefined4 uStack_4c;
  float local_48;
  float local_44;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1de2;
  local_10 = ExceptionList;
  pVVar3 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_44 = 0.0;
  local_54[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_54,"Entering combat with target \'%s\'",0x20);
  Ship::log();
  *(undefined4 *)(this + 0x34) = 0;
  iVar2 = *(int *)(*(Ship **)(this + 0x24) + 0x44);
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
        *(undefined4 *)(this + 0x34) = 0;
        goto LAB_004fc71c;
      }
    }
    else {
      this_00 = Ship::getSensorDataForShipID
                          (*(Ship **)(this + 0x24),*(int *)(*(int *)(iVar2 + 0x40) + 0x250));
      if (this_00 == (SensorData *)0x0) {
        local_44 = 7.32605e-39;
        debugPrint("ERROR","Error: somehow enemy vessel has no sensor data.");
        ExceptionList = local_10;
        return;
      }
      local_48 = (float)((double)*(float *)(this_00 + 0x104) + *(double *)(this_00 + 0x10));
      fVar6 = (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18));
      uStack_4c = 0x4fc67c;
      local_44 = fVar6;
      angleInDegreesFrom();
      fVar1 = *(float *)(*(int *)(this_00 + 0x130) + 0x120);
      SensorData::getPresumedLocation(this_00);
      fVar7 = (float)*(double *)(*(int *)(this + 0x24) + 0x30);
      local_8 = 1;
      fastDistance(pVVar3,unaff_EDI);
      local_8 = 0xffffffff;
      if (fVar7 <= 60.0) {
        *(undefined4 *)(this + 0x34) = 0;
        goto LAB_004fc71c;
      }
      if ((int)(fVar1 - (float)(int)fVar6) - 0x5aU < 0xb5) {
        *(undefined4 *)(this + 0x34) = 0;
        goto LAB_004fc71c;
      }
    }
  }
  *(undefined4 *)(this + 0x34) = 1;
LAB_004fc71c:
  local_44 = 0.0;
  local_54[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_54,"Attack pattern chosen: %s",0x19);
  Ship::log();
  iVar2 = *(int *)(this + 0x24);
  if (*(int *)(this + 0x34) == 0) {
    *(undefined1 **)(this + 0x30) = &DAT_428c0000;
    *(undefined4 *)(iVar2 + 0x380) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x40);
  }
  else {
    *(undefined4 *)(this + 0x30) = 0x43160000;
    *(undefined4 *)(iVar2 + 900) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x40);
  }
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall AIAttack::leaveState(void)

void __thiscall AIAttack::leaveState(AIAttack *this)

{
  basic_string<> local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0xf;
  local_24[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_24,"Leaving combat mode.",0x14);
  Ship::log();
  return;
}


// public: __thiscall AIAttack::AIAttack(class Ship *)

AIAttack * __thiscall AIAttack::AIAttack(AIAttack *this,Ship *param_1)

{
  basic_string<> local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  Ship *pSStack_10;
  
  pSStack_10 = param_1;
  local_18 = 0;
  local_14 = 0xf;
  local_28[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_28,"Attack",6);
  AIDesire::AIDesire((AIDesire *)this,2);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x2c] = (AIAttack)0x1;
  return this;
}
