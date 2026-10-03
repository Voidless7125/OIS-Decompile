#include "../ois.exe.h"


// public: void __thiscall SensorManager::down(class Ship *)

void __thiscall SensorManager::down(SensorManager *this,Ship *param_1)

{
  NetworkData *extraout_ECX;
  uint in_stack_ffffffc0;
  double in_stack_ffffffc4;
  double in_stack_ffffffcc;
  
  if (g_gameLogic[0x71] != (GameLogic)0x0) {
    if (Singleton<>::instance == (NetworkData *)0x0) {
      Singleton<>::instance = operator_new(1);
      this = (SensorManager *)extraout_ECX;
    }
    NetworkData::sendShipCommand
              ((NetworkData *)this,0x70,(double)((ulonglong)in_stack_ffffffc0 << 0x20),
               in_stack_ffffffc4,in_stack_ffffffcc);
    return;
  }
  Ship::selectNextValidSensorObject(param_1);
  return;
}


// public: void __thiscall SensorManager::up(class Ship *)

void __thiscall SensorManager::up(SensorManager *this,Ship *param_1)

{
  NetworkData *extraout_ECX;
  uint in_stack_ffffffc0;
  double in_stack_ffffffc4;
  double in_stack_ffffffcc;
  
  if (g_gameLogic[0x71] != (GameLogic)0x0) {
    if (Singleton<>::instance == (NetworkData *)0x0) {
      Singleton<>::instance = operator_new(1);
      this = (SensorManager *)extraout_ECX;
    }
    NetworkData::sendShipCommand
              ((NetworkData *)this,0x71,(double)((ulonglong)in_stack_ffffffc0 << 0x20),
               in_stack_ffffffc4,in_stack_ffffffcc);
    return;
  }
  Ship::selectPrevValidSensorObject(param_1);
  return;
}


// public: void __thiscall SensorManager::left(class Ship *)

void __thiscall SensorManager::left(SensorManager *this,Ship *param_1)

{
  int iVar1;
  NetworkData *extraout_ECX;
  uint unaff_EBP;
  undefined4 unaff_retaddr;
  double in_stack_00000008;
  
  if (g_gameLogic[0x71] != (GameLogic)0x0) {
    if (Singleton<>::instance == (NetworkData *)0x0) {
      Singleton<>::instance = operator_new(1);
      this = (SensorManager *)extraout_ECX;
    }
    NetworkData::sendShipCommand
              ((NetworkData *)this,0x73,(double)((ulonglong)unaff_EBP << 0x20),
               (double)CONCAT44(param_1,unaff_retaddr),in_stack_00000008);
    return;
  }
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 0xfc) + -1) {
    iVar1 = *(int *)(param_1 + 0xfc) + -1;
  }
  *(int *)(param_1 + 0xfc) = iVar1;
  return;
}


// public: void __thiscall SensorManager::right(class Ship *)

void __thiscall SensorManager::right(SensorManager *this,Ship *param_1)

{
  int iVar1;
  NetworkData *extraout_ECX;
  uint unaff_EBP;
  undefined4 unaff_retaddr;
  double in_stack_00000008;
  
  if (g_gameLogic[0x71] != (GameLogic)0x0) {
    if (Singleton<>::instance == (NetworkData *)0x0) {
      Singleton<>::instance = operator_new(1);
      this = (SensorManager *)extraout_ECX;
    }
    NetworkData::sendShipCommand
              ((NetworkData *)this,0x72,(double)((ulonglong)unaff_EBP << 0x20),
               (double)CONCAT44(param_1,unaff_retaddr),in_stack_00000008);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xfc) + 1;
  if (3 < iVar1) {
    iVar1 = 3;
  }
  *(int *)(param_1 + 0xfc) = iVar1;
  return;
}


// public: virtual bool __thiscall SensorManager::keyPressed(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall SensorManager::keyPressed(SensorManager *this,KeyCode param_1)

{
  NetworkData *extraout_ECX;
  Ship *this_00;
  uint in_stack_ffffffc0;
  double in_stack_ffffffc4;
  double in_stack_ffffffcc;
  
  if (((param_1 == 0x1c) || (param_1 == 0x25)) || (param_1 == 0x92)) {
    this_00 = *(Ship **)(g_gameData + 0xd0);
    if (g_gameLogic[0x71] != (GameLogic)0x0) {
      if (Singleton<>::instance == (NetworkData *)0x0) {
        Singleton<>::instance = operator_new(1);
        this_00 = (Ship *)extraout_ECX;
      }
      NetworkData::sendShipCommand
                ((NetworkData *)this_00,0x71,(double)((ulonglong)in_stack_ffffffc0 << 0x20),
                 in_stack_ffffffc4,in_stack_ffffffcc);
      return true;
    }
    Ship::selectPrevValidSensorObject(this_00);
    return true;
  }
  if (((param_1 != 0x1d) && (param_1 != 0x2b)) && (param_1 != 0x8e)) {
    if (((param_1 != 0x1a) && (param_1 != 0x27)) && (param_1 != 0x7c)) {
      if (((param_1 != 0x1b) && (param_1 != 0x29)) && (param_1 != 0x7f)) {
        return false;
      }
      right(this,*(Ship **)(g_gameData + 0xd0));
      return true;
    }
    left(this,*(Ship **)(g_gameData + 0xd0));
    return true;
  }
  down(this,*(Ship **)(g_gameData + 0xd0));
  return true;
}
