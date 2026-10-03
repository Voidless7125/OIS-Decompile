#include "../ois.exe.h"


// public: __thiscall EngineeringSlotLocation::EngineeringSlotLocation(int,enum
// EModuleSlotType::ModuleSlotType,int,class cocos2d::Vec2,enum EHullLocation::HullLocation)

EngineeringSlotLocation * __thiscall
EngineeringSlotLocation::EngineeringSlotLocation
          (EngineeringSlotLocation *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_7;
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = param_6;
  return this;
}
