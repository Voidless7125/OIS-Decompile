#include "../ois.exe.h"


// class std::function<double __cdecl(class Ship *,int)> __cdecl
// ShipNumericalData::getDataFunction(enum EShipDataType::ShipDataType)

void __cdecl ShipNumericalData::getDataFunction(ShipDataType param_1)

{
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  switch(in_EDX) {
  default:
    in_ECX[1] = returnNothing;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 1:
    in_ECX[1] = getPowerLevel;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 2:
    in_ECX[1] = getPowerLevelPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 3:
    in_ECX[1] = getPowerFlow;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 4:
    in_ECX[1] = getPowerFlowPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 5:
    in_ECX[1] = getPowerGeneration;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 6:
    in_ECX[1] = getPowerGenerationPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 7:
    in_ECX[1] = getPowerDrain;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 8:
    in_ECX[1] = getPowerDrainPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 9:
    in_ECX[1] = getDesiredDirection;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 10:
    in_ECX[1] = getMotionAngle;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0xb:
    in_ECX[1] = getDirection;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0xc:
    in_ECX[1] = getCurrentSpeed;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0xd:
    in_ECX[1] = getCurrentSpeedPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0xe:
    in_ECX[1] = getExteriorPressure;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0xf:
    in_ECX[1] = getInteriorPressure;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x10:
    in_ECX[1] = getAirlockPressure;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x11:
    in_ECX[1] = getTemperature;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x12:
    in_ECX[1] = getCurrentDistanceToNavObject;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x13:
    in_ECX[1] = getCurrentBearingToNavObject;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x14:
    in_ECX[1] = getNebulaDensity;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x15:
    in_ECX[1] = getNebulaDensity;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x16:
    in_ECX[1] = getTubeSelected;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x17:
    in_ECX[1] = getAmountOwedToDockedStation;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x18:
    in_ECX[1] = getAmountOwedToCommsStation;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x1a:
    in_ECX[1] = getCurrentTubeSpinUpPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x1b:
    in_ECX[1] = getTubeSpinUpPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x1c:
    in_ECX[1] = getEngCurrentRepairPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x1d:
    in_ECX[1] = getJumpSolution;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x1e:
    in_ECX[1] = getMainDrivePowerLevel;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x1f:
    in_ECX[1] = getHullHeatTemperature;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x20:
    in_ECX[1] = getSolarRadiationPercent;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x21:
    in_ECX[1] = getGrappleArmPercentage;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x22:
    in_ECX[1] = getHackPercentage;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x23:
    in_ECX[1] = getPendingEmails;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x24:
    in_ECX[1] = getUnreadEmails;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x25:
    in_ECX[1] = getReadEmails;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  case 0x26:
    in_ECX[1] = getPlayerCredits;
    *in_ECX = std::_Func_impl_no_alloc<>::vftable;
    in_ECX[9] = in_ECX;
    return;
  }
}


// double __cdecl ShipNumericalData::getPowerFlow(class Ship *,int)

double __cdecl ShipNumericalData::getPowerFlow(Ship *param_1,int param_2)

{
  float in_XMM0_Da;
  float fVar1;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  SystemManager::totalPowerGeneration(*(SystemManager **)(param_1 + 0x40));
  fVar1 = in_XMM0_Da;
  SystemManager::totalPowerDrain(*(SystemManager **)(param_1 + 0x40));
  return (double)(fVar1 - in_XMM0_Da);
}


// double __cdecl ShipNumericalData::getPowerFlowPercent(class Ship *,int)

double __cdecl ShipNumericalData::getPowerFlowPercent(Ship *param_1,int param_2)

{
  float in_XMM0_Da;
  float fVar1;
  double dVar2;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  SystemManager::totalPowerGeneration(*(SystemManager **)(param_1 + 0x40));
  fVar1 = in_XMM0_Da;
  SystemManager::totalPowerDrain(*(SystemManager **)(param_1 + 0x40));
  if (in_XMM0_Da < fVar1) {
    dVar2 = getPowerGenerationPercent(param_1,0);
    return dVar2;
  }
  dVar2 = getPowerDrainPercent(param_1,0);
  return 0.0 - dVar2;
}


// double __cdecl ShipNumericalData::getPowerLevel(class Ship *,int)

double __cdecl ShipNumericalData::getPowerLevel(Ship *param_1,int param_2)

{
  float in_XMM0_Da;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  SystemManager::totalCurrentPower(*(SystemManager **)(param_1 + 0x40));
  return (double)in_XMM0_Da;
}


// double __cdecl ShipNumericalData::getPowerLevelPercent(class Ship *,int)

double __cdecl ShipNumericalData::getPowerLevelPercent(Ship *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  iVar1 = SystemManager::getCurrentPowerPercentage(*(SystemManager **)(param_1 + 0x40));
  return (double)iVar1;
}


// double __cdecl ShipNumericalData::getPowerGeneration(class Ship *,int)

double __cdecl ShipNumericalData::getPowerGeneration(Ship *param_1,int param_2)

{
  float in_XMM0_Da;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  SystemManager::totalPowerGeneration(*(SystemManager **)(param_1 + 0x40));
  return (double)in_XMM0_Da;
}


// double __cdecl ShipNumericalData::getPowerGenerationPercent(class Ship *,int)

double __cdecl ShipNumericalData::getPowerGenerationPercent(Ship *param_1,int param_2)

{
  SystemManager *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  float in_XMM0_Da;
  float fVar4;
  float fVar5;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  this = *(SystemManager **)(param_1 + 0x40);
  fVar4 = 0.0;
  piVar2 = *(int **)(this + 0x3c);
  for (iVar3 = *(int *)(this + 0x40) - (int)piVar2 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    fVar4 = *(float *)(*(int *)(iVar1 + 8) + 200) + fVar4;
    in_XMM0_Da = fVar4;
  }
  SystemManager::totalPowerGeneration(this);
  fVar4 = (in_XMM0_Da / fVar4) * 100.0;
  if (fVar4 < 0.0) {
    return 0.0;
  }
  fVar5 = 100.0;
  if (fVar4 <= 100.0) {
    fVar5 = fVar4;
  }
  return (double)fVar5;
}


// double __cdecl ShipNumericalData::getPowerDrain(class Ship *,int)

double __cdecl ShipNumericalData::getPowerDrain(Ship *param_1,int param_2)

{
  float in_XMM0_Da;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  SystemManager::totalPowerDrain(*(SystemManager **)(param_1 + 0x40));
  return (double)in_XMM0_Da;
}


// double __cdecl ShipNumericalData::getPowerDrainPercent(class Ship *,int)

double __cdecl ShipNumericalData::getPowerDrainPercent(Ship *param_1,int param_2)

{
  int iVar1;
  SystemManager *this;
  uint uVar2;
  uint uVar3;
  float in_XMM0_Da;
  float fVar4;
  float fVar5;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  this = *(SystemManager **)(param_1 + 0x40);
  uVar2 = 0;
  fVar5 = 0.0;
  fVar4 = 0.0;
  uVar3 = *(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(*(int *)(*(int *)(this + 0x3c) + iVar1) + 8);
      in_XMM0_Da = *(float *)(iVar1 + 0xc0) + fVar4 + *(float *)(iVar1 + 0xbc);
      fVar4 = in_XMM0_Da;
    } while (uVar2 < uVar3);
  }
  SystemManager::totalPowerDrain(this);
  fVar4 = (in_XMM0_Da / fVar4) * 100.0;
  if (fVar5 <= fVar4) {
    fVar5 = 100.0;
    if (fVar4 <= 100.0) {
      fVar5 = fVar4;
    }
    return (double)fVar5;
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getDirection(class Ship *,int)

double __cdecl ShipNumericalData::getDirection(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return (double)*(float *)(param_1 + 0x120);
}


// double __cdecl ShipNumericalData::getMotionAngle(class Ship *,int)

double __cdecl ShipNumericalData::getMotionAngle(Ship *param_1,int param_2)

{
  char cVar1;
  float in_XMM0_Da;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0);
    if (cVar1 != '\0') {
      if ((*(float *)(param_1 + 0x118) == 0.0) &&
         (in_XMM0_Da = *(float *)(param_1 + 0x11c), in_XMM0_Da == 0.0)) {
        return (double)*(float *)(param_1 + 0x120);
      }
      angleInDegreesFrom(0,0,*(float *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
      return (double)in_XMM0_Da;
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getDesiredDirection(class Ship *,int)

double __cdecl ShipNumericalData::getDesiredDirection(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return (double)*(float *)(param_1 + 0x128);
}


// double __cdecl ShipNumericalData::getCurrentSpeed(class Ship *,int)

double __cdecl ShipNumericalData::getCurrentSpeed(Ship *param_1,int param_2)

{
  char cVar1;
  float in_XMM0_Da;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0);
    if (cVar1 != '\0') {
      Ship::getSpeed(param_1);
      return (double)in_XMM0_Da;
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getCurrentSpeedPercent(class Ship *,int)

double __cdecl ShipNumericalData::getCurrentSpeedPercent(Ship *param_1,int param_2)

{
  char cVar1;
  float in_XMM0_Da;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x24) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x24) + 0x10))(0);
    if (cVar1 != '\0') {
      Ship::getSpeed(param_1);
      return (double)((in_XMM0_Da / 1.2) * 100.0);
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::returnNothing(class Ship *,int)

double __cdecl ShipNumericalData::returnNothing(Ship *param_1,int param_2)

{
  return 0.0;
}


// double __cdecl ShipNumericalData::getInteriorPressure(class Ship *,int)

double __cdecl ShipNumericalData::getInteriorPressure(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return *(double *)(param_1 + 0x290);
}


// double __cdecl ShipNumericalData::getExteriorPressure(class Ship *,int)

double __cdecl ShipNumericalData::getExteriorPressure(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return *(double *)(param_1 + 0x288);
}


// double __cdecl ShipNumericalData::getAirlockPressure(class Ship *,int)

double __cdecl ShipNumericalData::getAirlockPressure(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return *(double *)(param_1 + 0x298);
}


// double __cdecl ShipNumericalData::getCurrentDistanceToNavObject(class Ship *,int)

double __cdecl ShipNumericalData::getCurrentDistanceToNavObject(Ship *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c0b7d;
  local_10 = ExceptionList;
  if (param_1 != (Ship *)0x0) {
    iVar1 = *(int *)(param_1 + 0x1a4);
    if (iVar1 != 0) {
      local_18 = (float)*(double *)(iVar1 + 0x20);
      local_14 = (float)*(double *)(iVar1 + 0x28);
      local_8 = 1;
      ExceptionList = &local_10;
      fVar3 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0xffffffe0,(Vec2 *)&local_18);
      fVar2 = (float)(0x5f3759df - ((uint)fVar3 >> 1));
      ExceptionList = local_10;
      return (double)((1.5 - fVar3 * 0.5 * fVar2 * fVar2) * fVar2 * fVar3);
    }
    iVar1 = *(int *)(param_1 + 0x19c);
    if (iVar1 != 0) {
      local_18 = (float)*(double *)(param_1 + 0x28);
      fVar2 = (float)*(double *)(param_1 + 0x30);
      local_8 = 3;
      ExceptionList = &local_10;
      local_14 = fVar2;
      fastDistance((Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc),
                   (Vec2 *)(float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10)));
      ExceptionList = local_10;
      return (double)fVar2;
    }
    if ((*(float *)(param_1 + 0x1b8) != -9999.0) || (*(float *)(param_1 + 0x1bc) != -9999.0)) {
      fVar2 = (float)*(double *)(param_1 + 0x30);
      local_8 = 4;
      ExceptionList = &local_10;
      fastDistance((Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc),
                   (Vec2 *)(float)*(double *)(param_1 + 0x28));
      ExceptionList = local_10;
      return (double)fVar2;
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getCurrentBearingToNavObject(class Ship *,int)

double __cdecl ShipNumericalData::getCurrentBearingToNavObject(Ship *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  double in_XMM0_Qa;
  double dVar3;
  
  if (param_1 != (Ship *)0x0) {
    iVar1 = *(int *)(param_1 + 0x1a4);
    if (iVar1 != 0) {
      dVar3 = (double)(ulonglong)(uint)(float)*(double *)(iVar1 + 0x20);
      Ship::trueAngleToPosition
                (param_1,(float)*(double *)(iVar1 + 0x20),(float)*(double *)(iVar1 + 0x28));
      return dVar3;
    }
    iVar1 = *(int *)(param_1 + 0x19c);
    if (iVar1 != 0) {
      fVar2 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
      dVar3 = (double)(ulonglong)(uint)fVar2;
      Ship::trueAngleToPosition
                (param_1,fVar2,
                 (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18)));
      return dVar3;
    }
    if ((*(float *)(param_1 + 0x1b8) != -9999.0) ||
       (in_XMM0_Qa = (double)(ulonglong)(uint)*(float *)(param_1 + 0x1bc),
       *(float *)(param_1 + 0x1bc) != -9999.0)) {
      Ship::trueAngleToPosition
                (param_1,*(float *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
      return in_XMM0_Qa;
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getNebulaDensity(class Ship *,int)

double __cdecl ShipNumericalData::getNebulaDensity(Ship *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  dVar1 = (double)((int)((*(double *)(param_1 + 0x140) * 100.0) / 5.0) * 5);
  dVar2 = 5.0;
  if (5.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}


// double __cdecl ShipNumericalData::getTubeSelected(class Ship *,int)

double __cdecl ShipNumericalData::getTubeSelected(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return (double)*(int *)(param_1 + 0x1b4);
}


// double __cdecl ShipNumericalData::getTemperature(class Ship *,int)

double __cdecl ShipNumericalData::getTemperature(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return (double)*(float *)(param_1 + 0x2a4);
}


// double __cdecl ShipNumericalData::getAmountOwedToDockedStation(class Ship *,int)

double __cdecl ShipNumericalData::getAmountOwedToDockedStation(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != (Ship *)0x0) && (iVar1 = *(int *)(param_1 + 0x178), iVar1 != 0)) &&
     ((iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158), iVar2 == 1 ||
      ((iVar2 == 2 || (iVar2 == 3)))))) {
    if (*(int *)(iVar1 + 0x390) == 0) {
      return 0.0;
    }
    return (double)(int)*(float *)(*(int *)(iVar1 + 0x390) + 0xd0);
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getAmountOwedToCommsStation(class Ship *,int)

double __cdecl ShipNumericalData::getAmountOwedToCommsStation(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != (Ship *)0x0) && (iVar1 = *(int *)(param_1 + 0x17c), iVar1 != 0)) &&
     ((iVar2 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158), iVar2 == 1 ||
      ((iVar2 == 2 || (iVar2 == 3)))))) {
    if (*(int *)(iVar1 + 0x390) == 0) {
      return 0.0;
    }
    return (double)(int)*(float *)(*(int *)(iVar1 + 0x390) + 0xd0);
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getTubeSpinUpPercent(class Ship *,int)

double __cdecl ShipNumericalData::getTubeSpinUpPercent(Ship *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if ((cVar1 != '\0') && ((uint)param_2 < 8)) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
      iVar2 = *(int *)(iVar3 + 0x38 + param_2 * 4);
      if (iVar2 == 0) {
        return -2.0;
      }
      if (*(char *)(iVar2 + 0x3bc) != '\0') {
        return 100.0;
      }
      iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(iVar3 + 0xc));
      iVar3 = Weapon::getSpinUpPercent
                        (*(Weapon **)
                          (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + param_2 * 4),
                         (int)(((float)iVar2 / 100.0) * 0.5 *
                              *(float *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 0x20) + 8) + 0x108)
                              ));
      return (double)iVar3;
    }
  }
  return -1.0;
}


// double __cdecl ShipNumericalData::getCurrentTubeSpinUpPercent(class Ship *,int)

double __cdecl ShipNumericalData::getCurrentTubeSpinUpPercent(Ship *param_1,int param_2)

{
  double dVar1;
  
  if (param_1 == (Ship *)0x0) {
    return -1.0;
  }
  dVar1 = getTubeSpinUpPercent(param_1,*(int *)(param_1 + 0x1b4));
  return dVar1;
}


// double __cdecl ShipNumericalData::getEngCurrentRepairPercent(class Ship *,int)

double __cdecl ShipNumericalData::getEngCurrentRepairPercent(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return (double)(100.0 - *(float *)(param_1 + 0x154) * 0.25 * 100.0);
}


// double __cdecl ShipNumericalData::getJumpSolution(class Ship *,int)

double __cdecl ShipNumericalData::getJumpSolution(Ship *param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x5c)) {
    fVar1 = *(float *)(param_1 + 0x5c);
  }
  return (double)fVar1;
}


// double __cdecl ShipNumericalData::getHullHeatTemperature(class Ship *,int)

double __cdecl ShipNumericalData::getHullHeatTemperature(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  return (double)*(float *)(param_1 + 500);
}


// double __cdecl ShipNumericalData::getSolarRadiationPercent(class Ship *,int)

double __cdecl ShipNumericalData::getSolarRadiationPercent(Ship *param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  fVar1 = (float)*(double *)(param_1 + 0x28);
  Sector::getSolarRadiationAt(*(Sector **)(param_1 + 0x24),fVar1,(float)*(double *)(param_1 + 0x30))
  ;
  return (double)(fVar1 * 100.0);
}


// double __cdecl ShipNumericalData::getMainDrivePowerLevel(class Ship *,int)

double __cdecl ShipNumericalData::getMainDrivePowerLevel(Ship *param_1,int param_2)

{
  char cVar1;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x10) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x10) + 0x10))(0);
    if (cVar1 != '\0') {
      return (double)*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getGrappleArmPercentage(class Ship *,int)

double __cdecl ShipNumericalData::getGrappleArmPercentage(Ship *param_1,int param_2)

{
  float fVar1;
  ShipModule *this;
  char cVar2;
  float fVar3;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x2c) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x2c) + 0x10))(0);
    if ((cVar2 != '\0') &&
       (this = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x2c), *(int *)(this + 0x34) != 0)) {
      fVar1 = *(float *)(this + 0x6c);
      fVar3 = fVar1;
      ShipModule::getInvertedEfficiencyFloat(this);
      return (double)(int)(100.0 - (fVar1 / (fVar3 * *(float *)(*(int *)(*(int *)(*(int *)(param_1 +
                                                                                          0x40) +
                                                                                 0x2c) + 8) + 0x104)
                                            )) * 100.0);
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getHackPercentage(class Ship *,int)

double __cdecl ShipNumericalData::getHackPercentage(Ship *param_1,int param_2)

{
  ShipModule *this;
  char cVar1;
  bool bVar2;
  float in_XMM0_Da;
  basic_string<> abStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((param_1 != (Ship *)0x0) && (*(int **)(*(int *)(param_1 + 0x40) + 0x30) != (int *)0x0)) {
    uStack_18 = 0;
    uStack_1c = 0x4ece7a;
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x30) + 0x10))();
    if (cVar1 != '\0') {
      uStack_20 = 0;
      uStack_1c = 0xf;
      abStack_30[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(abStack_30,"",0);
      bVar2 = ShipData::checkIsHacking(param_1,0);
      if (bVar2) {
        this = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x30);
        uStack_1c = 0x4ecebc;
        ShipModule::getInvertedEfficiencyFloat(this);
        return (double)(int)(100.0 - (*(float *)(this + 0x6c) /
                                     (in_XMM0_Da *
                                     *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) +
                                                        8) + 0x104))) * 100.0);
      }
    }
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getPendingEmails(class Ship *,int)

double __cdecl ShipNumericalData::getPendingEmails(Ship *param_1,int param_2)

{
  EmailManager *this;
  int iVar1;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  this = Singleton<>::getInstance();
  iVar1 = EmailManager::getUnsentEmailCount(this);
  return (double)iVar1;
}


// double __cdecl ShipNumericalData::getReadEmails(class Ship *,int)

double __cdecl ShipNumericalData::getReadEmails(Ship *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  Singleton<>::getInstance();
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) == '\0') {
    piVar1 = (int *)**(int **)(g_gameData + 300);
    iVar3 = 0;
    for (iVar5 = (*(int **)(g_gameData + 300))[1] - (int)piVar1 >> 2; iVar5 != 0; iVar5 = iVar5 + -1
        ) {
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
      iVar4 = iVar3 + 1;
      if (*(char *)(iVar2 + 100) == '\0') {
        iVar4 = iVar3;
      }
      iVar3 = iVar4;
    }
    return (double)iVar3;
  }
  return 0.0;
}


// double __cdecl ShipNumericalData::getUnreadEmails(class Ship *,int)

double __cdecl ShipNumericalData::getUnreadEmails(Ship *param_1,int param_2)

{
  int iVar1;
  EmailManager *this;
  
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  Singleton<>::getInstance();
  iVar1 = EmailManager::getUnreadEmailCount(this);
  return (double)iVar1;
}


// double __cdecl ShipNumericalData::getPlayerCredits(class Ship *,int)

double __cdecl ShipNumericalData::getPlayerCredits(Ship *param_1,int param_2)

{
  if (param_1 == (Ship *)0x0) {
    return 0.0;
  }
  if (*(int *)(g_gameData + 0x124) != 0) {
    return (double)*(int *)(*(int *)(g_gameData + 0x124) + 0x1c);
  }
  return 0.0;
}
