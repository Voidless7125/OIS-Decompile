#include "../ois.exe.h"


// public: virtual void __thiscall AITravel::runLogic(float)

void __thiscall AITravel::runLogic(AITravel *this,float param_1)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  Waypoint *pWVar7;
  Ship *pSVar8;
  float fVar9;
  float fVar10;
  basic_string<> local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  AITravel *pAVar11;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c24d6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0.0;
  iVar6 = *(int *)(this + 0x24);
  if (*(char *)(*(int *)(iVar6 + 0x44) + 0x58) != '\0') {
    *(undefined1 *)(*(int *)(iVar6 + 0x44) + 0x58) = 0;
    iVar6 = *(int *)(this + 0x24);
  }
  if ((*(int *)(*(int *)(iVar6 + 0x44) + 0x34) == 0) &&
     (*(int *)(*(int *)(iVar6 + 0x44) + 0x10) == 0)) {
    local_18 = 0;
    local_14 = 0.0;
    local_8 = 0;
    local_40 = 0x501c98;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(iVar6 + 0x118),(Vec2 *)&local_18);
    local_8 = 0xffffffff;
    if ((0.0 < local_14) && (*(int *)(*(Ship **)(this + 0x24) + 0xd4) != 1)) {
      Ship::allStop(*(Ship **)(this + 0x24));
    }
  }
  iVar6 = *(int *)(this + 0x24);
  iVar2 = *(int *)(*(int *)(iVar6 + 0x44) + 0x10);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(iVar6 + 0x44) + 0x34);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_28 = (float)*(double *)(iVar6 + 0x28);
    local_24 = (float)*(double *)(iVar6 + 0x30);
    local_8 = 3;
    local_40 = 0x501ee0;
    fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar2 + 8),(Vec2 *)&local_28);
    local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
    local_8 = 0xffffffff;
    pSVar8 = *(Ship **)(this + 0x24);
    fVar9 = (1.5 - local_14 * fVar10 * 0.5 * local_14) * local_14;
    if (*(int *)(pSVar8 + 0xd4) == 1) {
      iVar6 = *(int *)(pSVar8 + 0x1c8) - *(int *)(pSVar8 + 0x1c4) >> 5;
      if ((iVar6 != 0) && (iVar6 * 0x20 + -0x20 + *(int *)(pSVar8 + 0x1c4) != 0)) {
        pAVar11 = this + 0x38;
        local_40 = 0x501f74;
        pWVar7 = Ship::getFinalWaypoint(pSVar8);
        local_40 = 0x501f7d;
        bVar4 = cocos2d::Vec2::equals((Vec2 *)(pWVar7 + 8),(Vec2 *)pAVar11);
        if (bVar4) {
          ExceptionList = local_10;
          return;
        }
      }
    }
    puVar3 = *(undefined4 **)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x34);
    if (puVar3 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
    if (fVar9 * fVar10 <= 5.0) {
      local_40 = *puVar3;
      local_48 = 0;
      local_44 = 0xf;
      std::basic_string<>::assign
                ((basic_string<> *)&stack0xffffffa8,
                 "Arrived at destination, nav point %d. %d destinations remaining in pool.",0x48);
      Ship::log();
      *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 4) = 1;
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(this + 0x24) + 0xd4) == 1) {
      ExceptionList = local_10;
      return;
    }
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_54,"Beginning transit to nav point %d",0x21);
    Ship::log();
    local_40 = 0x50204e;
    Ship::travelTo(*(Ship **)(this + 0x24),
                   *(NavPoint **)(*(int *)(*(Ship **)(this + 0x24) + 0x44) + 0x34));
    iVar6 = *(int *)(this + 0x24);
    dVar1 = *(double *)(iVar6 + 0x30);
    *(float *)(this + 0x30) = (float)*(double *)(iVar6 + 0x28);
    *(float *)(this + 0x34) = (float)dVar1;
    iVar6 = *(int *)(*(int *)(iVar6 + 0x44) + 0x34);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(iVar6 + 8);
    fVar9 = *(float *)(iVar6 + 0xc);
  }
  else {
    if (*(int *)(iVar6 + 0xd4) == 1) {
      iVar5 = *(int *)(iVar6 + 0x1c8) - *(int *)(iVar6 + 0x1c4) >> 5;
      if (((iVar5 != 0) &&
          (iVar5 = *(int *)(iVar5 * 0x20 + -0xc + *(int *)(iVar6 + 0x1c4)), iVar5 != 0)) &&
         (iVar5 == iVar2)) {
        ExceptionList = local_10;
        return;
      }
    }
    local_20 = (float)*(double *)(iVar6 + 0x28);
    local_1c = (float)*(double *)(iVar6 + 0x30);
    local_28 = (float)*(double *)(iVar2 + 0x20);
    local_24 = (float)*(double *)(iVar2 + 0x28);
    local_8 = 2;
    local_14 = 4.2039e-45;
    local_40 = 0x501d55;
    bVar4 = cocos2d::Vec2::equals((Vec2 *)&local_28,(Vec2 *)&local_20);
    local_8 = 0xffffffff;
    if (bVar4) {
      local_44 = 0;
      local_40 = 0xf;
      local_54[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_54,"Arrived at destination, \'%s\'.",0x1d);
      Ship::log();
      *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 4) = 1;
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x10) == 0) {
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(this + 0x24) + 0xd4) == 1) {
      ExceptionList = local_10;
      return;
    }
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_54,"Beginning transit to %s",0x17);
    Ship::log();
    pSVar8 = *(Ship **)(this + 0x24);
    iVar6 = *(int *)(*(int *)(pSVar8 + 0x44) + 0x10);
    if (iVar6 != 0) {
      Ship::clearWaypointFlags(pSVar8);
      *(undefined4 *)(pSVar8 + 0x1c8) = *(undefined4 *)(pSVar8 + 0x1c4);
      *(int *)(*(int *)(pSVar8 + 0x44) + 0x10) = iVar6;
      local_40 = 0x501e4a;
      Ship::mapCourseTo(pSVar8,(Ship *)(iVar6 + -8));
      pSVar8 = *(Ship **)(this + 0x24);
    }
    dVar1 = *(double *)(pSVar8 + 0x30);
    *(float *)(this + 0x30) = (float)*(double *)(pSVar8 + 0x28);
    *(float *)(this + 0x34) = (float)dVar1;
    fVar9 = (float)*(double *)(*(int *)(*(int *)(pSVar8 + 0x44) + 0x10) + 0x28);
    *(float *)(this + 0x38) = (float)*(double *)(*(int *)(*(int *)(pSVar8 + 0x44) + 0x10) + 0x20);
  }
  *(float *)(this + 0x3c) = fVar9;
  ExceptionList = local_10;
  return;
}


// public: __thiscall AITravel::AITravel(class Ship *)

AITravel * __thiscall AITravel::AITravel(AITravel *this,Ship *param_1)

{
  basic_string<> local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  Ship *pSStack_10;
  
  pSStack_10 = param_1;
  local_18 = 0;
  local_14 = 0xf;
  local_28[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_28,"Travel",6);
  AIDesire::AIDesire((AIDesire *)this,0);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return this;
}


// public: virtual void * __thiscall AITravel::`vector deleting destructor'(unsigned int)

void * __thiscall AITravel::_vector_deleting_destructor_(AITravel *this,uint param_1)

{
  AIDesire::~AIDesire((AIDesire *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000040);
  }
  return this;
}
