#include "../ois.exe.h"


// public: bool __thiscall ShipModule::isAtHighPower(void)

bool __thiscall ShipModule::isAtHighPower(ShipModule *this)

{
  return (bool)this[0x62];
}


// public: virtual bool __thiscall ShipModule::hasBooted(void)

bool __thiscall ShipModule::hasBooted(ShipModule *this)

{
  return (bool)this[0x2c];
}


// public: __thiscall ShipModule::ShipModule(class ShipModuleClass *)

ShipModule * __thiscall ShipModule::ShipModule(ShipModule *this,ShipModuleClass *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005be042;
  local_1c = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined ***)this = vftable;
  *(ShipModuleClass **)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 100;
  this[0x2c] = (ShipModule)0x1;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0x1000101;
  *(undefined4 *)(this + 100) = 100;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined1 **)(this + 0x6c) = &DAT_bf800000;
  this[0x70] = (ShipModule)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 4);
  if (((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 7 || (iVar1 == 9)))) ||
     ((iVar1 == 0xb || ((iVar1 == 8 || (iVar1 == 0xd)))))) {
    this[0x14] = (ShipModule)0x1;
  }
  else {
    this[0x14] = (ShipModule)0x0;
  }
  *(undefined4 *)(this + 0x1e) = 0x1010101;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  piVar4 = operator_new(0xa4);
  local_14 = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
  *piVar4 = iVar1;
  if (iVar1 == 0) {
    debugPrint("DETAIL","Unknown component interface instance.",uVar3);
    bVar2 = cc_assert_script_compatible("Unknown componentinterface");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","Unknown componentinterface");
    }
  }
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[0x10] = 0;
  piVar4[0x11] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0;
  piVar4[0x14] = 0;
  piVar4[0x15] = 0;
  piVar4[0x16] = 0;
  piVar4[0x17] = 0;
  piVar4[0x18] = 0;
  piVar4[0x19] = 0;
  piVar4[0x1a] = 0;
  piVar4[0x1b] = 0;
  piVar4[0x1c] = 0;
  piVar4[0x1d] = 0;
  piVar4[0x1e] = 0;
  piVar4[0x1f] = 0;
  piVar4[0x20] = 0;
  piVar4[0x21] = 0;
  piVar4[0x22] = 0;
  piVar4[0x23] = 0;
  piVar4[0x24] = 0;
  piVar4[0x25] = 0;
  piVar4[0x26] = 0;
  piVar4[0x27] = 0;
  piVar4[0x28] = 0;
  *(int **)(this + 0xc) = piVar4;
  ExceptionList = local_1c;
  return this;
}


// public: void __thiscall ShipModule::resetDefaultEMCONState(void)

void __thiscall ShipModule::resetDefaultEMCONState(ShipModule *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 8) + 4);
  if (((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) && ((iVar1 != 7 && (iVar1 != 9)))) &&
     ((iVar1 != 0xb && ((iVar1 != 8 && (iVar1 != 0xd)))))) {
    this[0x14] = (ShipModule)0x0;
    return;
  }
  this[0x14] = (ShipModule)0x1;
  return;
}


// public: virtual int __thiscall ShipModule::getWidth(void)

int __thiscall ShipModule::getWidth(ShipModule *this)

{
  return *(int *)(*(int *)(this + 8) + 0x80);
}


// public: virtual int __thiscall ShipModule::getHeight(void)

int __thiscall ShipModule::getHeight(ShipModule *this)

{
  return *(int *)(*(int *)(this + 8) + 0x84);
}


// public: virtual void __thiscall ShipModule::drainPower(float)

void __thiscall ShipModule::drainPower(ShipModule *this,float param_1)

{
  ShipModule SVar1;
  float unaff_ESI;
  
  if (this[99] != (ShipModule)0x0) {
    this[0x60] = (ShipModule)0x1;
    if (this[0x62] == (ShipModule)0x0) {
      if (0.0 < *(float *)(*(int *)(this + 8) + 0xc0)) {
        SVar1 = (ShipModule)SystemManager::drawPower(*(SystemManager **)(this + 4),unaff_ESI);
        this[0x60] = SVar1;
      }
    }
    else if (0.0 < *(float *)(*(int *)(this + 8) + 0xbc)) {
      SVar1 = (ShipModule)SystemManager::drawPower(*(SystemManager **)(this + 4),unaff_ESI);
      this[0x60] = SVar1;
      return;
    }
  }
  return;
}


// public: float __thiscall ShipModule::getCurrentPowerDrain(void)

float __thiscall ShipModule::getCurrentPowerDrain(ShipModule *this)

{
  float10 in_ST0;
  float fVar1;
  
  if (this[99] == (ShipModule)0x0) {
    return (float)in_ST0;
  }
  if (this[0x62] != (ShipModule)0x0) {
    fVar1 = ComponentInterfaceInstance::getPowerModifier
                      (*(ComponentInterfaceInstance **)(this + 0xc));
    return fVar1;
  }
  fVar1 = ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(this + 0xc))
  ;
  return fVar1;
}


// public: virtual void __thiscall ShipModule::generatePower(float)

void __thiscall ShipModule::generatePower(ShipModule *this,float param_1)

{
  int iVar1;
  float unaff_ESI;
  float local_10;
  
  if (this[99] != (ShipModule)0x0) {
    local_10 = 1.0;
    if (*(int *)(*(int *)(this + 8) + 4) == 0xd) {
      local_10 = (float)*(double *)(*(int *)(*(int *)(this + 4) + 0x48) + 0x28);
      Sector::getSolarRadiationAt
                (*(Sector **)(*(int *)(*(int *)(this + 4) + 0x48) + 0x24),local_10,
                 (float)*(double *)(*(int *)(*(int *)(this + 4) + 0x48) + 0x30));
      local_10 = *(float *)(*(int *)(this + 8) + 0x104) * local_10;
    }
    iVar1 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(this + 0xc));
    if (0.0 < *(float *)(*(int *)(this + 8) + 200) * ((float)iVar1 / 100.0) * local_10) {
      if (*(int *)(*(int *)(this + 8) + 4) == 0xd) {
        Sector::getSolarRadiationAt
                  (*(Sector **)(*(int *)(*(int *)(this + 4) + 0x48) + 0x24),
                   (float)*(double *)(*(int *)(*(int *)(this + 4) + 0x48) + 0x28),
                   (float)*(double *)(*(int *)(*(int *)(this + 4) + 0x48) + 0x30));
      }
      ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
      SystemManager::generatePower(*(SystemManager **)(this + 4),unaff_ESI);
    }
  }
  return;
}


// public: virtual bool __thiscall ShipModule::isDestroyed(void)

bool __thiscall ShipModule::isDestroyed(ShipModule *this)

{
  int iVar1;
  
  iVar1 = ComponentInterfaceInstance::damagePercent(*(ComponentInterfaceInstance **)(this + 0xc));
  if (*(int *)(*(int *)(this + 8) + 0xe0) <= iVar1) {
    iVar1 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(this + 0xc));
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}


// public: virtual bool __thiscall ShipModule::isDamaged(void)

bool __thiscall ShipModule::isDamaged(ShipModule *this)

{
  int iVar1;
  
  iVar1 = ComponentInterfaceInstance::damagePercent(*(ComponentInterfaceInstance **)(this + 0xc));
  return iVar1 < *(int *)(*(int *)(this + 8) + 0xdc);
}


// public: int __thiscall ShipModule::getValue(void)

int __thiscall ShipModule::getValue(ShipModule *this)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)(*(int *)(this + 0xc) + 0x54);
  iVar4 = *(int *)(*(int *)(this + 8) + 0x90);
  iVar3 = 0x14;
  do {
    pfVar1 = (float *)puVar2[-0x14];
    if (pfVar1 != (float *)0x0) {
      fVar6 = (float)*(int *)((int)pfVar1[1] + 0x20) * (*pfVar1 / 100.0);
      fVar5 = 1.0;
      if (1.0 <= fVar6) {
        fVar5 = fVar6;
      }
      iVar4 = iVar4 + (int)fVar5;
    }
    pfVar1 = (float *)*puVar2;
    if (pfVar1 != (float *)0x0) {
      fVar6 = (float)*(int *)((int)pfVar1[1] + 0x20) * (*pfVar1 / 100.0);
      fVar5 = 1.0;
      if (1.0 <= fVar6) {
        fVar5 = fVar6;
      }
      iVar4 = iVar4 + (int)fVar5;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar4;
}


// public: float __thiscall ShipModule::getInvertedEfficiencyFloat(void)

float __thiscall ShipModule::getInvertedEfficiencyFloat(ShipModule *this)

{
  float10 extraout_ST0;
  
  ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc));
  return (float)extraout_ST0;
}


// public: int __thiscall ShipModule::getFreeHousingSlots(void)

int __thiscall ShipModule::getFreeHousingSlots(ShipModule *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  if (*(int *)(iVar1 + 4) != 8) {
    return 0;
  }
  iVar2 = getHousedObjectCount(this);
  return (int)(*(float *)(iVar1 + 0x104) - (float)iVar2);
}


// public: void __thiscall ShipModule::removeAllHousedObjects(void)

void __thiscall ShipModule::removeAllHousedObjects(ShipModule *this)

{
  Weapon *this_00;
  int iVar1;
  ShipModule *pSVar2;
  
  pSVar2 = this + 0x3c;
  iVar1 = 8;
  do {
    this_00 = *(Weapon **)pSVar2;
    if (this_00 != (Weapon *)0x0) {
      Weapon::~Weapon(this_00);
      operator_delete(this_00,(nothrow_t *)0x428);
    }
    *(undefined4 *)pSVar2 = 0;
    pSVar2 = pSVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// public: int __thiscall ShipModule::getHousedObjectCount(void)

int __thiscall ShipModule::getHousedObjectCount(ShipModule *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(this + 0x3c) != 0) + 1;
  if (*(int *)(this + 0x40) == 0) {
    uVar2 = (uint)(*(int *)(this + 0x3c) != 0);
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0x48) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0x4c) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0x50) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0x54) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0x58) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// public: bool __thiscall ShipModule::validHousedWeaponInSlot(int)

bool __thiscall ShipModule::validHousedWeaponInSlot(ShipModule *this,int param_1)

{
  if ((uint)param_1 < 8) {
    return *(int *)(this + param_1 * 4 + 0x3c) != 0;
  }
  return false;
}


// public: float __thiscall ShipModule::actualMaxPowerStorage(void)

float __thiscall ShipModule::actualMaxPowerStorage(ShipModule *this)

{
  char cVar1;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (this[99] != (ShipModule)0x0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    in_ST0 = extraout_ST0;
    if (cVar1 == '\0') {
      ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
      return (float)extraout_ST0_00;
    }
  }
  return (float)in_ST0;
}


// public: float __thiscall ShipModule::getCurrentGenerationRate(void)

float __thiscall ShipModule::getCurrentGenerationRate(ShipModule *this)

{
  int iVar1;
  float10 extraout_ST0;
  
  if (*(int *)(*(int *)(this + 8) + 4) == 0xd) {
    iVar1 = *(int *)(*(int *)(this + 4) + 0x48);
    Sector::getSolarRadiationAt
              (*(Sector **)(*(int *)(*(int *)(this + 4) + 0x48) + 0x24),
               (float)*(double *)(iVar1 + 0x28),(float)*(double *)(iVar1 + 0x30));
  }
  ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc));
  return (float)extraout_ST0;
}


// public: float __thiscall ShipModule::getCurrentLADARRange(void)

float __thiscall ShipModule::getCurrentLADARRange(ShipModule *this)

{
  float10 extraout_ST0;
  
  ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc));
  return (float)extraout_ST0;
}


// public: float __thiscall ShipModule::getCurrentJumpRange(void)

float __thiscall ShipModule::getCurrentJumpRange(ShipModule *this)

{
  float10 extraout_ST0;
  
  ComponentInterfaceInstance::getEfficiencyPercent
            (*(ComponentInterfaceInstance **)(*(int *)(*(int *)(this + 4) + 0x14) + 0xc));
  return (float)extraout_ST0;
}


// public: void __thiscall ShipModule::damageModule(int,int)

void __thiscall ShipModule::damageModule(ShipModule *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  ComponentInterfaceInstance::damage(*(ComponentInterfaceInstance **)(this + 0xc),param_1,param_2);
  if (this[99] != (ShipModule)0x0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    if (cVar1 == '\0') {
      iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(this + 0xc));
      fVar3 = *(float *)(*(int *)(this + 8) + 0xc4) * ((float)iVar2 / 100.0);
      goto LAB_004ae893;
    }
  }
  fVar3 = 0.0;
LAB_004ae893:
  if (fVar3 < *(float *)(this + 0x5c)) {
    *(float *)(this + 0x5c) = fVar3;
  }
  return;
}


// public: virtual bool __thiscall ShipModule::isFunctional(bool)

bool __thiscall ShipModule::isFunctional(ShipModule *this,bool param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1) || (this[99] != (ShipModule)0x0)) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    if (cVar1 == '\0') {
      iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(this + 0xc));
      if (iVar2 != 0) {
        return true;
      }
    }
  }
  return false;
}


// public: void __thiscall ShipModule::disconnect(class Ship *)

void __thiscall ShipModule::disconnect(ShipModule *this,Ship *param_1)

{
  SoundEngine *this_00;
  FlagManager *pFVar1;
  basic_string<> local_3c [8];
  undefined4 uStack_34;
  int iVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(*(undefined4 *)(*(int *)(this + 8) + 4)) {
  case 3:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28) = 0;
    break;
  case 4:
    **(undefined4 **)(param_1 + 0x40) = 0;
    break;
  case 5:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = 0;
    break;
  case 7:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      Ship::cancelAutopilot(param_1);
    }
    break;
  case 8:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) = 0;
    break;
  case 9:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      Ship::cancelAutopilot(param_1);
    }
    break;
  case 10:
    if (-1.0 < *(float *)(param_1 + 0x58)) {
      debugPrint("GAME","Jump drive lost power - discharging.");
      Ship::dischargeJumpDrive(param_1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14) = 0;
    break;
  case 0xb:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      Ship::cancelAutopilot(param_1);
    }
    break;
  case 0xc:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc) = 0;
    break;
  case 0xe:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c) = 0;
    break;
  case 0xf:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = 0;
    break;
  case 0x10:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x30) = 0;
    break;
  case 0x11:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c) = 0;
  }
  if ((*(int *)(*(int *)(this + 8) + 4) == 10) && (*(float *)(param_1 + 0x58) != -1.0)) {
    uStack_34 = 0x4aea5b;
    ShipInterface::doJmpDischargeJumpDrive(param_1,1,0,0);
  }
  iVar2 = *(int *)(this + 0x7c);
  this[99] = (ShipModule)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  if (iVar2 != -1) {
    this_00 = Singleton<>::getInstance();
    SoundEngine::pauseSound(this_00,iVar2);
  }
  if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
     (*(int *)(*(int *)(this + 8) + 4) == 7)) {
    local_3c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_3c,"helm_connected",0xe);
    local_8 = 0;
    pFVar1 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar1);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ShipModule::connect(class Ship *)

void __thiscall ShipModule::connect(ShipModule *this,Ship *param_1)

{
  GameData *pGVar1;
  void **ppvVar2;
  SoundEngine *this_00;
  FlagManager *pFVar3;
  ShipModule *extraout_ECX;
  basic_string<> local_34 [16];
  undefined4 local_24;
  ShipModule *local_20;
  int iVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameData;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be0c0;
  local_10 = ExceptionList;
  local_20 = this;
  ppvVar2 = &local_10;
  switch(*(undefined4 *)(*(int *)(this + 8) + 4)) {
  case 3:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x28);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x28) = this;
    ppvVar2 = ExceptionList;
    break;
  case 4:
    local_20 = (ShipModule *)**(int **)(param_1 + 0x40);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    **(int **)(param_1 + 0x40) = (int)this;
    ppvVar2 = ExceptionList;
    break;
  case 5:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 8);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 8) = this;
    ppvVar2 = ExceptionList;
    break;
  case 7:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x24) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x24) != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x24) = this;
    ppvVar2 = ExceptionList;
    if ((*(int *)(pGVar1 + 0xcc) == 0) || (*(int *)(*(int *)(pGVar1 + 0xcc) + 0x70) != 1)) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"helm_connected",0xe);
    local_8 = 1;
    goto LAB_004aee10;
  case 8:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x20) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x20) != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x20) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (Ship)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"has_weapon_launcher",0x13);
    local_8 = 2;
    goto LAB_004aee10;
  case 9:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x18);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x18) = this;
    ppvVar2 = ExceptionList;
    break;
  case 10:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x14) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x14) != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x14) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (Ship)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"has_jump_drive",0xe);
    local_8 = 0;
    goto LAB_004aee10;
  case 0xb:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x10);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x10) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0xc:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0xc);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0xc) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0xe:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x1c);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x1c) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0xf:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 4);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 4) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0x10:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x30) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x30) != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x30) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (Ship)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"has_hacking_module",0x12);
    local_8 = 3;
    goto LAB_004aee10;
  case 0x11:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x2c) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x2c) != this)) {
      return;
    }
    ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x2c) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (Ship)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"has_grappler",0xc);
    local_8 = 4;
LAB_004aee10:
    pFVar3 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar3);
    local_20 = extraout_ECX;
    ppvVar2 = ExceptionList;
  }
  ExceptionList = ppvVar2;
  if (this[99] == (ShipModule)0x0) {
    this[0x2c] = (ShipModule)0x0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  iVar4 = *(int *)(this + 0x7c);
  this[99] = (ShipModule)0x1;
  if (iVar4 != -1) {
    local_24 = 0x4aee47;
    this_00 = Singleton<>::getInstance();
    local_20 = (ShipModule *)0x4aee51;
    SoundEngine::unpauseSound(this_00,iVar4);
  }
  if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
     (*(int *)(*(int *)(this + 8) + 4) == 7)) {
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_34,"helm_connected",0xe);
    local_8 = 5;
    pFVar3 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    FlagManager::setFlag(pFVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: float __thiscall ShipModule::runLogic(float,class Ship *)

float __thiscall ShipModule::runLogic(ShipModule *this,float param_1,Ship *param_2)

{
  undefined8 uVar1;
  bool *pbVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  Vec2 *pVVar7;
  FMOD_RESULT FVar8;
  int iVar9;
  FlagManager *pFVar10;
  Weapon *pWVar11;
  int iVar12;
  SensorData *pSVar13;
  Stats *pSVar14;
  PresentationInterface *pPVar15;
  SoundEngine *pSVar16;
  basic_string<> *pbVar17;
  int iVar18;
  Weapon *pWVar19;
  int *piVar20;
  LogSystem *this_00;
  LogSystem *this_01;
  HackEngine *extraout_ECX;
  HackEngine *extraout_ECX_00;
  void *pvVar21;
  LogSystem *extraout_ECX_01;
  LogSystem *this_02;
  HackEngine *extraout_ECX_02;
  HackEngine *extraout_ECX_03;
  HackEngine *pHVar22;
  LogSystem *this_03;
  CargoHold *this_04;
  GameLogic *this_05;
  int extraout_EDX;
  int extraout_EDX_00;
  nothrow_t *pnVar23;
  ShipModule *pSVar24;
  Vec2 *unaff_EDI;
  uint uVar25;
  SyntheticObject *pSVar26;
  float10 fVar27;
  float fVar28;
  float in_XMM1_Da;
  float fVar29;
  basic_string<> abStack_b8 [12];
  undefined4 uStack_ac;
  ShipModule aSStack_a0 [8];
  undefined4 uStack_98;
  Ship *pSVar30;
  Sound SVar31;
  char *pcVar32;
  char *pcVar33;
  basic_string<> *local_5c;
  int local_58;
  float local_50;
  Ship *local_4c;
  float local_48;
  ShipModule *local_44;
  Ship *local_40;
  char local_39;
  void *local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined8 local_20;
  undefined1 *local_18;
  Vec2 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be18b;
  local_10 = ExceptionList;
  pVVar7 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_4c = (Ship *)param_1;
  local_50 = in_XMM1_Da;
  local_44 = this;
  local_14 = pVVar7;
  if (*(float *)(this + 0x80) <= 0.0) {
    iVar9 = *(int *)(this + 0x84);
    pSVar16 = Singleton<>::getInstance();
    for (piVar20 = *(int **)(pSVar16 + 0x2c); piVar20 != *(int **)(pSVar16 + 0x30);
        piVar20 = piVar20 + 1) {
      if (*(int *)(*piVar20 + 0x24) == iVar9) {
        pbVar2 = *(bool **)(*piVar20 + 0x30);
        if (((pbVar2 != (bool *)0x0) &&
            (FVar8 = FMOD::ChannelControl::getPaused(pbVar2), FVar8 == 0)) && (local_39 != '\0'))
        goto LAB_004af02d;
        break;
      }
    }
    iVar9 = *(int *)(this + 0x84);
    pSVar16 = Singleton<>::getInstance();
    SoundEngine::pauseSound(pSVar16,iVar9);
  }
  else {
    fVar29 = *(float *)(this + 0x80) - in_XMM1_Da;
    *(float *)(this + 0x80) = fVar29;
    if (0.0 < fVar29) {
      iVar9 = *(int *)(this + 0x84);
      pSVar16 = Singleton<>::getInstance();
      for (piVar20 = *(int **)(pSVar16 + 0x2c); piVar20 != *(int **)(pSVar16 + 0x30);
          piVar20 = piVar20 + 1) {
        if (*(int *)(*piVar20 + 0x24) == iVar9) {
          pbVar2 = *(bool **)(*piVar20 + 0x30);
          if (((pbVar2 != (bool *)0x0) &&
              (FVar8 = FMOD::ChannelControl::getPaused(pbVar2), FVar8 == 0)) && (local_39 != '\0'))
          {
            iVar9 = *(int *)(this + 0x84);
            pSVar16 = Singleton<>::getInstance();
            SoundEngine::unpauseSound(pSVar16,iVar9);
          }
          break;
        }
      }
    }
    else {
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
LAB_004af02d:
  if ((this[99] == (ShipModule)0x0) || (cVar5 = (**(code **)(*(int *)this + 0x14))(), cVar5 != '\0')
     ) goto LAB_004b0369;
  if (this[0x2c] == (ShipModule)0x0) {
    iVar9 = *(int *)(this + 8);
    if (*(int *)(iVar9 + 0x8c) != 0) {
      fVar29 = *(float *)(this + 0x24);
      *(float *)(this + 0x24) = local_50 + fVar29;
      fVar28 = (float)*(int *)(iVar9 + 0x8c);
      *(int *)(this + 0x28) = (int)(((local_50 + fVar29) / fVar28) * 100.0);
      fVar29 = (float)*(int *)(iVar9 + 0x8c);
      if (*(int *)(iVar9 + 4) == 3) {
        getInvertedEfficiencyFloat(this);
        fVar29 = fVar28 * (float)*(int *)(*(int *)(this + 8) + 0x8c);
      }
      else if (*(int *)(iVar9 + 4) == 7) {
        getInvertedEfficiencyFloat(this);
        fVar29 = (float)*(int *)(*(int *)(this + 8) + 0x8c) * fVar28 * 0.5;
      }
      if (*(float *)(this + 0x24) < fVar29) goto LAB_004b0369;
      *(undefined1 **)(this + 0x24) = &DAT_bf800000;
      *(undefined4 *)(this + 0x28) = 100;
    }
    this[0x2c] = (ShipModule)0x1;
  }
  if ((this[99] == (ShipModule)0x0) || (cVar5 = (**(code **)(*(int *)this + 0x14))(), cVar5 != '\0')
     ) {
    fVar29 = 0.0;
  }
  else {
    iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(this + 0xc));
    fVar29 = *(float *)(*(int *)(this + 8) + 0xc4) * ((float)iVar9 / 100.0);
  }
  if (fVar29 < *(float *)(this + 0x5c)) {
    *(float *)(this + 0x5c) = fVar29;
  }
  (**(code **)(*(int *)this + 0xc))();
  iVar9 = *(int *)(this + 8);
  if ((0.0 < *(float *)(iVar9 + 0xc0)) || (0.0 < *(float *)(iVar9 + 0xbc))) {
    (**(code **)(*(int *)this + 8))();
    iVar9 = *(int *)(this + 8);
  }
  if (this[0x62] == (ShipModule)0x0) {
    if ((((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
        && (*(int *)(iVar9 + 4) == 9)) && (this[0x70] != (ShipModule)0x0)) {
      local_40 = (Ship *)&stack0xffffff78;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"is_rotating",0xb);
      local_8 = 2;
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar10);
    }
    if (this[0x70] == (ShipModule)0x1) {
      this[0x70] = (ShipModule)0x0;
    }
  }
  else {
    if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
       && ((*(int *)(iVar9 + 4) == 9 && (this[0x70] == (ShipModule)0x0)))) {
      local_40 = (Ship *)&stack0xffffff78;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"is_rotating",0xb);
      local_8 = 0;
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar10);
      local_40 = (Ship *)&stack0xffffff78;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"has_rotated",0xb);
      local_8 = 1;
      pFVar10 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      FlagManager::setFlag(pFVar10);
      iVar9 = *(int *)(this + 8);
    }
    if (this[0x60] == (ShipModule)0x0) {
      debugPrint("DETAIL","%s: WARNING: not enough power to run %s");
      iVar9 = *(int *)(*(int *)(this + 8) + 4);
      if (iVar9 == 0xb) {
        this[0x62] = (ShipModule)0x0;
        iVar9 = *(int *)((int)param_1 + 0xd4);
joined_r0x004af501:
        if (iVar9 != 0) goto LAB_004af5c3;
      }
      else {
        if (iVar9 == 9) {
          this[0x62] = (ShipModule)0x0;
          iVar9 = *(int *)((int)param_1 + 0xd4);
          goto joined_r0x004af501;
        }
        if (iVar9 == 8) {
          iVar9 = *(int *)(*(int *)(*(int *)(this + 4) + 0x20) + 0x30);
          if ((iVar9 != -1) &&
             (pWVar19 = *(Weapon **)(*(int *)(*(int *)(this + 4) + 0x20) + 0x3c + iVar9 * 4),
             pWVar19 != (Weapon *)0x0)) {
            if (iVar9 == -1) {
              pWVar19 = (Weapon *)0x0;
            }
            bVar6 = Weapon::isSpinningUp(pWVar19);
            if (bVar6) {
              LogSystem::addLogLine(this_01,*(LogPriority *)((int)param_1 + 0x224),&DAT_00000002);
              iVar9 = *(int *)(*(int *)(*(int *)(this + 4) + 0x20) + 0x30);
              if (iVar9 == -1) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)(*(int *)(*(int *)(this + 4) + 0x20) + 0x3c + iVar9 * 4);
              }
              *(undefined1 **)(iVar9 + 0x3c0) = &DAT_bf800000;
              *(undefined1 *)(iVar9 + 0x3bc) = 0;
            }
          }
          *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x20) + 0x62) = 0;
          goto LAB_004af5c3;
        }
        if (iVar9 == 0xf) {
          this[0x62] = (ShipModule)0x0;
        }
        else {
          if ((iVar9 != 0xe) || (this[0x62] == (ShipModule)0x0)) goto LAB_004af5c3;
          this[0x62] = (ShipModule)0x0;
          *(undefined1 **)((int)param_1 + 0x160) = &DAT_bf800000;
        }
      }
      LogSystem::addLogLine(this_00,*(LogPriority *)((int)param_1 + 0x224),(char *)0x3);
    }
    else {
      iVar9 = *(int *)(iVar9 + 4);
      if (iVar9 == 0xb) {
        ComponentInterfaceInstance::getEfficiencyPercent
                  (*(ComponentInterfaceInstance **)(this + 0xc));
        Ship::accelerate((Ship *)param_1,(double)CONCAT44(unaff_EDI,pVVar7));
      }
      else if (iVar9 == 9) {
        if (*(int *)(this + 0x34) == 1) {
          iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)(this + 0xc));
          fVar29 = *(float *)(*(int *)(this + 8) + 0x104) * ((float)iVar9 / 100.0) * local_50 +
                   *(float *)((int)param_1 + 0x120);
LAB_004af344:
          *(float *)((int)param_1 + 0x120) = fVar29;
        }
        else if (*(int *)(this + 0x34) == 2) {
          iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)(this + 0xc));
          fVar29 = *(float *)((int)param_1 + 0x120) -
                   *(float *)(*(int *)(this + 8) + 0x104) * ((float)iVar9 / 100.0) * local_50;
          goto LAB_004af344;
        }
        fVar29 = *(float *)((int)param_1 + 0x120);
        if (fVar29 < 360.0) {
          if (fVar29 < 0.0) {
            *(float *)((int)param_1 + 0x120) = fVar29 + 360.0;
          }
        }
        else {
          *(float *)((int)param_1 + 0x120) = fVar29 - 360.0;
        }
      }
      else if (iVar9 == 8) {
        iVar9 = *(int *)(*(int *)(this + 4) + 0x20);
        iVar18 = *(int *)(iVar9 + 0x30);
        if ((iVar18 != -1) &&
           (pWVar19 = *(Weapon **)(iVar9 + 0x3c + iVar18 * 4), pWVar19 != (Weapon *)0x0)) {
          local_40 = (Ship *)0x0;
          pWVar11 = pWVar19;
          if (iVar18 == -1) {
            pWVar11 = (Weapon *)0x0;
          }
          if (pWVar11[0x3bc] == (Weapon)0x0) {
            if ((iVar18 != -1) && (pWVar19 != (Weapon *)0x0)) {
              if (iVar18 == -1) {
                pWVar19 = (Weapon *)0x0;
              }
              bVar6 = Weapon::isSpinningUp(pWVar19);
              if (bVar6) {
                if ((extraout_EDX != -1) &&
                   (pWVar19 = *(Weapon **)(iVar9 + 0x3c + extraout_EDX * 4),
                   pWVar19 != (Weapon *)0x0)) {
                  if (extraout_EDX == -1) {
                    pWVar19 = (Weapon *)0x0;
                  }
                  bVar6 = Weapon::isSpinningUp(pWVar19);
                  if (bVar6) {
                    if (extraout_EDX_00 == -1) {
                      piVar20 = (int *)0x0;
                    }
                    else {
                      piVar20 = *(int **)(iVar9 + 0x3c + extraout_EDX_00 * 4);
                    }
                    (**(code **)(*piVar20 + 0x14))();
                  }
                }
                goto LAB_004af5c3;
              }
            }
            iVar12 = ComponentInterfaceInstance::getEfficiencyPercent
                               (*(ComponentInterfaceInstance **)(iVar9 + 0xc));
            iVar18 = *(int *)(*(int *)(*(int *)(this + 4) + 0x20) + 0x30);
            if (iVar18 == -1) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)(*(int *)(*(int *)(this + 4) + 0x20) + 0x3c + iVar18 * 4);
            }
            *(float *)(iVar18 + 0x3c0) =
                 (float)(int)(((float)iVar12 / 100.0) * 0.5 *
                             *(float *)(*(int *)(*(int *)(*(int *)(iVar9 + 4) + 0x20) + 8) + 0x108))
            ;
            goto LAB_004af5c3;
          }
        }
        this[0x62] = (ShipModule)0x0;
      }
    }
LAB_004af5c3:
    if (this[0x70] == (ShipModule)0x0) {
      this[0x70] = (ShipModule)0x1;
    }
  }
  if ((*(int *)(*(int *)(this + 8) + 4) == 8) &&
     (cVar5 = (**(code **)(*(int *)this + 0x10))(), cVar5 != '\0')) {
    pSVar24 = this + 0x3c;
    iVar9 = 8;
    do {
      iVar18 = *(int *)pSVar24;
      if ((((iVar18 != 0) && (*(char *)(iVar18 + 0x3fc) != '\0')) &&
          (iVar12 = *(int *)(iVar18 + 0x38c), iVar12 != 0)) && (*(int *)(iVar12 + 0x30) == 1)) {
        pSVar13 = Ship::getSensorDataForShipID(*(Ship **)(iVar18 + 0x39c),*(int *)(iVar12 + 0x248));
        if (pSVar13 == (SensorData *)0x0) {
          *(undefined4 *)(iVar18 + 0x3b8) = 0;
        }
        else {
          *(int *)(iVar18 + 0x3b8) = (int)*(float *)(pSVar13 + 0x128);
        }
      }
      pSVar24 = pSVar24 + 4;
      iVar9 = iVar9 + -1;
      this = local_44;
      param_1 = (float)local_4c;
    } while (iVar9 != 0);
  }
  if (((*(int *)(*(int *)(this + 8) + 4) == 0xc) &&
      (cVar5 = (**(code **)(*(int *)this + 0x10))(), cVar5 != '\0')) &&
     ((this[0x62] != (ShipModule)0x0 && (*(float *)(this + 0x6c) == -1.0)))) {
    local_40 = (Ship *)&stack0xffffff8c;
    local_8 = 3;
    ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc));
    local_8 = 0xffffffff;
    local_40 = GameData::getShipWithinDistance();
    if (local_40 != (Ship *)0x0) {
      local_18 = (undefined1 *)(float)*(double *)((int)param_1 + 0x30);
      local_20 = CONCAT44((float)*(double *)((int)param_1 + 0x28),(undefined4)local_20);
      local_48 = (float)*(double *)(local_40 + 0x28);
      local_44 = (ShipModule *)(float)*(double *)(local_40 + 0x30);
      local_8 = 5;
      fastDistance(pVVar7,unaff_EDI);
      local_8 = 0xffffffff;
      debugPrint("GAME","%s: firing point defence laser at %s, at range %f");
      local_44 = (ShipModule *)diceRoll((Dice *)pVVar7);
      debugPrint("DETAIL","%s: %d/%d");
      if (local_44 == (ShipModule *)&DAT_00000001) {
        debugPrint("GAME","%s: hit PDL target. Delivering heat damage.");
        pSVar30 = local_40;
        angleInDegreesFrom();
        (**(code **)(*(int *)pSVar30 + 0xc))();
        if ((*(char *)(*(int *)(*(int *)(this + 4) + 0x48) + 0x234) != '\0') &&
           (cVar5 = (**(code **)(*(int *)pSVar30 + 0x20))(), cVar5 != '\0')) {
          local_40 = (Ship *)&stack0xffffff7c;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"pdl_kills",9);
          local_8 = 6;
          pSVar14 = Singleton<Stats>::getInstance();
          local_8 = 0xffffffff;
          Stats::addStat(pSVar14);
          local_40 = (Ship *)&stack0xffffff78;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"",0);
          local_44 = aSStack_a0;
          local_8 = 7;
          aSStack_a0[0] = (ShipModule)0x0;
          uStack_ac = 0x4af97b;
          std::basic_string<>::assign((basic_string<> *)aSStack_a0,"pdl_kills",9);
          local_8 = CONCAT31(local_8._1_3_,8);
          abStack_b8[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(abStack_b8,"play",4);
          local_8 = 0xffffffff;
          Analytics::logEvent();
        }
      }
      else {
        debugPrint("GAME","%s: miss.");
      }
      local_18 = &stack0xffffff7c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)((int)param_1 + 0x238));
      local_8 = 9;
      pPVar15 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      PresentationInterface::addShake(pPVar15);
      iVar9 = -1;
      SVar31 = 0x21;
      pSVar30 = (Ship *)param_1;
      pSVar16 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar16,pSVar30,SVar31,iVar9);
      iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(this + 0xc));
      *(float *)(this + 0x6c) =
           *(float *)(*(int *)(this + 8) + 0x108) * (((float)iVar9 / 100.0 - 1.0) * -1.0 + 1.0);
    }
  }
  if (*(int *)(*(int *)(this + 8) + 4) == 0x10) {
    cVar5 = (**(code **)(*(int *)this + 0x10))();
    if ((cVar5 == '\0') || ((*(float *)(this + 0x6c) != 0.0 && (*(float *)(this + 0x6c) != -1.0))))
    {
      cVar5 = (**(code **)(*(int *)this + 0x10))();
      if ((cVar5 == '\0') || (*(float *)(this + 0x6c) < 0.0)) {
        cVar5 = (**(code **)(*(int *)this + 0x10))();
        if ((cVar5 == '\0') && (0.0 < *(float *)(this + 0x6c))) {
          *(int *)(this + 0x6c) = -0x40000000;
          debugPrint("DETAIL","Hack failed due to hack unit failing");
        }
      }
      else {
        pSVar30 = *(Ship **)(this + 0x18);
        this_03 = extraout_ECX_01;
        if (((pSVar30 == (Ship *)0x0) || (pSVar30[0x168] != (Ship)0x0)) ||
           (bVar6 = Ship::canCurrentlyDetect((Ship *)param_1,pSVar30), this_03 = this_02, !bVar6)) {
          LogSystem::addLogLine(this_03,*(LogPriority *)((int)param_1 + 0x224),(char *)0x3);
          this[0x62] = (ShipModule)0x0;
          *(int *)(this + 0x6c) = -0x40000000;
        }
        else if ((this[0x60] == (ShipModule)0x0) || (this[0x62] == (ShipModule)0x0)) {
          LogSystem::addLogLine(this_02,*(LogPriority *)((int)param_1 + 0x224),(char *)0x3);
          this[0x62] = (ShipModule)0x0;
          *(int *)(this + 0x6c) = -0x40000000;
        }
        else {
          bVar6 = Ship::canCurrentlyDetect(pSVar30,(Ship *)param_1);
          if (bVar6) {
            debugPrint("DETAIL","Hack failed - target detected us.");
            pHVar22 = extraout_ECX_02;
            if (Singleton<HackEngine>::instance == (HackEngine *)0x0) {
              Singleton<HackEngine>::instance = operator_new(1);
              pHVar22 = extraout_ECX_03;
            }
            HackEngine::failHack(pHVar22,(Ship *)param_1);
            this[0x62] = (ShipModule)0x0;
            *(int *)(this + 0x6c) = -0x40000000;
          }
        }
      }
    }
    else {
      if (*(int *)(this + 0x18) != 0) {
        pHVar22 = extraout_ECX;
        if (Singleton<HackEngine>::instance == (HackEngine *)0x0) {
          Singleton<HackEngine>::instance = operator_new(1);
          pHVar22 = extraout_ECX_00;
        }
        HackEngine::performHack
                  (pHVar22,(Ship *)param_1,*(CommsData **)(g_gameData + 300),
                   *(BankAccount **)(g_gameData + 0x124));
        if (*(char *)(*(int *)(*(int *)(this + 4) + 0x48) + 0x234) != '\0') {
          local_18 = &stack0xffffff7c;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"ships_hacked",0xc);
          local_8 = 10;
          pSVar14 = Singleton<Stats>::getInstance();
          local_8 = 0xffffffff;
          Stats::addStat(pSVar14);
          local_18 = &stack0xffffff78;
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"",0);
          local_40 = (Ship *)aSStack_a0;
          local_8 = 0xb;
          aSStack_a0[0] = (ShipModule)0x0;
          uStack_ac = 0x4afb7d;
          std::basic_string<>::assign((basic_string<> *)aSStack_a0,"ships_hacked",0xc);
          local_8 = CONCAT31(local_8._1_3_,0xc);
          abStack_b8[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(abStack_b8,"play",4);
          local_8 = 0xffffffff;
          Analytics::logEvent();
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)local_38,(basic_string<> *)(*(int *)(this + 0x18) + 0x238));
          local_8 = 0xd;
          std::transform<>();
          uStack_98 = 0x4afc1e;
          local_18 = &stack0xffffff78;
          strUsingArgs(&stack0xffffff78);
          local_8._0_1_ = 0xe;
          pFVar10 = Singleton<>::getInstance();
          local_8 = CONCAT31(local_8._1_3_,0xd);
          FlagManager::setFlag(pFVar10);
          local_8 = 0xffffffff;
          if (0xf < local_24) {
            pnVar23 = (nothrow_t *)(local_24 + 1);
            pvVar21 = local_38[0];
            if ((nothrow_t *)0xfff < pnVar23) {
              pvVar21 = *(void **)((int)local_38[0] + -4);
              pnVar23 = (nothrow_t *)(local_24 + 0x24);
              if (0x1f < (uint)((int)local_38[0] + (-4 - (int)pvVar21))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar21,pnVar23);
          }
          local_28 = 0;
          local_24 = 0xf;
          local_38[0] = (void *)((uint)local_38[0] & 0xffffff00);
          param_1 = (float)local_4c;
        }
      }
      this[0x62] = (ShipModule)0x0;
      *(int *)(this + 0x6c) = -0x40000000;
    }
  }
  if (((*(int *)(*(int *)(this + 8) + 4) == 0x11) &&
      (cVar5 = (**(code **)(*(int *)this + 0x10))(), cVar5 != '\0')) &&
     ((*(float *)(this + 0x6c) == -1.0 && (*(int *)(this + 0x34) != 0)))) {
    debugPrint("DETAIL","Grappling arm done.");
    uVar25 = *(uint *)(this + 0x34);
    if ((int)uVar25 < 1) {
      if ((int)uVar25 < 0) {
        uVar25 = ~uVar25;
        local_44 = (ShipModule *)Ship::getNextEmptyCargoPod((Ship *)param_1);
        if (((0xd < (int)uVar25) || (local_44 == (ShipModule *)0xffffffff)) ||
           (bVar6 = CargoHold::podExists(*(CargoHold **)((int)param_1 + 0x1f8),(int)local_44), bVar6
           )) goto LAB_004b0245;
        CargoHold::addPod(this_04,(int)local_44);
        puVar4 = *(undefined8 **)
                  (*(int *)(*(int *)((int)param_1 + 0x174) + 0xe8) + 0xc + uVar25 * 4);
        uVar1 = *puVar4;
        puVar3 = *(undefined2 **)(*(int *)((int)param_1 + 0x1f8) + 0xc + (int)local_44 * 4);
        local_18 = *(undefined1 **)(puVar4 + 1);
        local_20._0_2_ = (undefined2)uVar1;
        *puVar3 = (undefined2)local_20;
        local_20._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
        *(undefined1 *)(puVar3 + 1) = local_20._2_1_;
        *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1f8) + 0xc + (int)local_44 * 4) + 4) =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)((int)param_1 + 0x174) + 0xe8) + 0xc + uVar25 * 4) + 4);
        *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1f8) + 0xc + (int)local_44 * 4) + 8) =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)((int)param_1 + 0x174) + 0xe8) + 0xc + uVar25 * 4) + 8);
        local_20 = uVar1;
        CargoHold::removePod(*(CargoHold **)(*(int *)((int)param_1 + 0x174) + 0xe8),uVar25);
        local_18 = &stack0xffffff7c;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"cargo_collected",0xf);
        local_8 = 0xf;
        pSVar14 = Singleton<Stats>::getInstance();
        local_8 = 0xffffffff;
        Stats::addStat(pSVar14);
        local_18 = &stack0xffffff78;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"",0);
        local_4c = (Ship *)aSStack_a0;
        local_8 = 0x10;
        aSStack_a0[0] = (ShipModule)0x0;
        uStack_ac = 0x4b0075;
        std::basic_string<>::assign((basic_string<> *)aSStack_a0,"cargo_collected",0xf);
        local_8 = CONCAT31(local_8._1_3_,0x11);
        abStack_b8[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(abStack_b8,"play",4);
        local_8 = 0xffffffff;
        Analytics::logEvent();
        debugPrint("DETAIL","Transfered %dx goodID %d from moored object to ship");
        local_4c = *(Ship **)((int)param_1 + 0x174);
        pbVar17 = (basic_string<> *)(local_4c + 0x98);
        bVar6 = std::_Traits_equal<>("",0,(char *)pVVar7,(uint)unaff_EDI);
        pSVar26 = (SyntheticObject *)local_4c;
        if (!bVar6) {
          std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,pbVar17);
          splitStringBy();
          local_8 = 0x12;
          iVar9 = (local_58 - (int)local_5c) / 0x18;
          if (iVar9 == 2) {
            pbVar17 = local_5c + 0x18;
            if (0xf < *(uint *)(local_5c + 0x2c)) {
              pbVar17 = *(basic_string<> **)pbVar17;
            }
            iVar9 = atoi((char *)pbVar17);
            if (iVar9 != -1) {
LAB_004b016d:
              pbVar17 = local_5c;
              bVar6 = CargoHold::podExists
                                (*(CargoHold **)(*(int *)((int)param_1 + 0x174) + 0xe8),iVar9);
              if (!bVar6) {
                local_18 = &stack0xffffff7c;
                std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,pbVar17);
                local_8._0_1_ = 0x13;
                pFVar10 = Singleton<>::getInstance();
                local_8._0_1_ = 0x12;
                bVar6 = FlagManager::flagSet(pFVar10);
                if (!bVar6) {
                  debugPrint("DETAIL","Cargo with flag has been taken; setting flag \'%s\'.");
                  local_18 = &stack0xffffff78;
                  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff78,local_5c);
                  local_8._0_1_ = 0x14;
                  pFVar10 = Singleton<>::getInstance();
                  local_8 = CONCAT31(local_8._1_3_,0x12);
                  FlagManager::setFlag(pFVar10);
                }
              }
            }
          }
          else if (iVar9 == 1) {
            iVar9 = 0;
            goto LAB_004b016d;
          }
          local_8 = 0xffffffff;
          std::vector<>::_Tidy((vector<> *)&local_5c);
          pSVar26 = *(SyntheticObject **)((int)param_1 + 0x174);
        }
        iVar9 = *(int *)(pSVar26 + 0xe8);
        if (iVar9 != 0) {
          iVar18 = 0;
          this_05 = (GameLogic *)(iVar9 + 0xc);
          do {
            if (((-1 < iVar18) && ((*(int *)(iVar9 + 8) < 1 || (iVar18 < *(int *)(iVar9 + 8))))) &&
               (*(int *)this_05 != 0)) goto LAB_004b0257;
            iVar18 = iVar18 + 1;
            this_05 = this_05 + 4;
          } while (iVar18 < 0xe);
          GameLogic::removeSyntheticObject(this_05,pSVar26);
          pcVar32 = "DETAIL";
          pcVar33 = "Removed a now-empty synthetic object after removing the last cargo from it.";
          goto LAB_004b024f;
        }
      }
    }
    else {
      iVar9 = uVar25 - 1;
      local_44 = (ShipModule *)
                 SyntheticObject::getNextEmptyCargoPod(*(SyntheticObject **)((int)param_1 + 0x174));
      if (((iVar9 < 0xe) &&
          (bVar6 = CargoHold::podExists(*(CargoHold **)((int)param_1 + 0x1f8),iVar9), bVar6)) &&
         (local_44 != (ShipModule *)0xffffffff)) {
        CargoHold::addPod(*(CargoHold **)(*(int *)((int)param_1 + 0x174) + 0xe8),(int)local_44);
        puVar3 = *(undefined2 **)
                  (*(int *)(*(int *)((int)param_1 + 0x174) + 0xe8) + 0xc + (int)local_44 * 4);
        uVar1 = **(undefined8 **)(*(int *)((int)param_1 + 0x1f8) + 0xc + iVar9 * 4);
        local_20._0_2_ = (undefined2)uVar1;
        *puVar3 = (undefined2)local_20;
        local_20._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
        *(undefined1 *)(puVar3 + 1) = local_20._2_1_;
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)param_1 + 0x174) + 0xe8) + 0xc + (int)local_44 * 4) + 4) =
             *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1f8) + 0xc + iVar9 * 4) + 4);
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)param_1 + 0x174) + 0xe8) + 0xc + (int)local_44 * 4) + 8) =
             *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1f8) + 0xc + iVar9 * 4) + 8);
        local_20 = uVar1;
        CargoHold::removePod(*(CargoHold **)((int)param_1 + 0x1f8),iVar9);
        debugPrint("DETAIL","Transfered %dx goodID %d from ship to moored object");
      }
      else {
LAB_004b0245:
        pcVar32 = "WARNING";
        pcVar33 = 
        "Cannot move the cargo pod from ship to the moored object, but could when arm was engaged.";
LAB_004b024f:
        debugPrint(pcVar32,pcVar33);
      }
    }
LAB_004b0257:
    *(int *)(this + 0x6c) = -0x40000000;
    *(int *)(this + 0x34) = 0;
  }
  if (this[0x60] != (ShipModule)0x0) {
    if ((*(int *)(this + 0x84) != -1) && (this[0x62] != (ShipModule)0x0)) {
      *(float *)(this + 0x80) = (float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] * 0.2;
    }
    if (((this[0x60] != (ShipModule)0x0) && (0.0 < *(float *)(this + 0x6c))) &&
       (local_50 = *(float *)(this + 0x6c) - local_50, *(float *)(this + 0x6c) = local_50,
       local_50 < 0.0)) {
      *(undefined1 **)(this + 0x6c) = &DAT_bf800000;
      debugPrint("DETAIL","%s: Internal timer hit.");
    }
  }
  if (this[99] != (ShipModule)0x0) {
    if (this[0x62] == (ShipModule)0x0) {
      local_4c = (Ship *)(float)*(int *)(*(int *)(this + 8) + 0xd4);
      ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
    }
    else {
      local_40 = (Ship *)((float)*(int *)(this + 100) / 100.0);
      local_4c = (Ship *)(float)*(int *)(*(int *)(this + 8) + 0xcc);
      ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
    }
  }
LAB_004b0369:
  ExceptionList = local_10;
  fVar27 = (float10)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (float)fVar27;
}
