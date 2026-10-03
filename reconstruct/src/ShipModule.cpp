// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall ShipModule::isAtHighPower(ShipModule *this)
bool ShipModule::isAtHighPower()

{
  return (bool)((char *)this)[0x62];
}


// Ghidra: bool __thiscall ShipModule::hasBooted(ShipModule *this)
bool ShipModule::hasBooted()

{
  return (bool)((char *)this)[0x2c];
}


// Ghidra: ShipModule * __thiscall ShipModule::ShipModule(ShipModule *this,ShipModuleClass *param_1)
ShipModule::ShipModule(ShipModuleClass * param_1)

{
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005be042;
  // [seh] local_1c = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  // [vtable] *(undefined ***)this = vftable;
  *(ShipModuleClass **)((char *)this + 8) = param_1;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined2 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
  *(undefined4 *)((char *)this + 0x28) = 100;
  ((char *)this)[0x2c] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x30) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0x1000101;
  *(undefined4 *)((char *)this + 100) = 100;
  *(undefined4 *)((char *)this + 0x68) = 0;
  *(undefined1 **)((char *)this + 0x6c) = &DAT_bf800000;
  ((char *)this)[0x70] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x74) = 0;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x80) = 0;
  *(undefined4 *)((char *)this + 0x84) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 4);
  if (((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 7 || (iVar1 == 9)))) ||
     ((iVar1 == 0xb || ((iVar1 == 8 || (iVar1 == 0xd)))))) {
    ((char *)this)[0x14] = (byte)0x1;
  }
  else {
    ((char *)this)[0x14] = (byte)0x0;
  }
  *(undefined4 *)((char *)this + 0x1e) = 0x1010101;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0;
  *(undefined4 *)((char *)this + 0x54) = 0;
  *(undefined4 *)((char *)this + 0x58) = 0;
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
  *(int **)((char *)this + 0xc) = piVar4;
  // [seh] ExceptionList = local_1c;
  return;
}


// Ghidra: void __thiscall ShipModule::resetDefaultEMCONState(ShipModule *this)
void ShipModule::resetDefaultEMCONState()

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((char *)this + 8) + 4);
  if (((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) && ((iVar1 != 7 && (iVar1 != 9)))) &&
     ((iVar1 != 0xb && ((iVar1 != 8 && (iVar1 != 0xd)))))) {
    ((char *)this)[0x14] = (byte)0x0;
    return;
  }
  ((char *)this)[0x14] = (byte)0x1;
  return;
}


// Ghidra: int __thiscall ShipModule::getWidth(ShipModule *this)
int ShipModule::getWidth()

{
  return *(int *)(*(int *)((char *)this + 8) + 0x80);
}


// Ghidra: int __thiscall ShipModule::getHeight(ShipModule *this)
int ShipModule::getHeight()

{
  return *(int *)(*(int *)((char *)this + 8) + 0x84);
}


// Ghidra: void __thiscall ShipModule::drainPower(ShipModule *this,float param_1)
void ShipModule::drainPower(float param_1)

{
  ShipModule SVar1;
  float unaff_ESI;
  
  if (((char *)this)[99] != (byte)0x0) {
    ((char *)this)[0x60] = (byte)0x1;
    if (((char *)this)[0x62] == (byte)0x0) {
      if (0.0 < *(float *)(*(int *)((char *)this + 8) + 0xc0)) {
        SVar1 = (ShipModule)(*(SystemManager **)((char *)this + 4))->drawPower(unaff_ESI);
        ((char *)this)[0x60] = SVar1;
      }
    }
    else if (0.0 < *(float *)(*(int *)((char *)this + 8) + 0xbc)) {
      SVar1 = (ShipModule)(*(SystemManager **)((char *)this + 4))->drawPower(unaff_ESI);
      ((char *)this)[0x60] = SVar1;
      return;
    }
  }
  return;
}


// Ghidra: float __thiscall ShipModule::getCurrentPowerDrain(ShipModule *this)
float ShipModule::getCurrentPowerDrain()

{
  float10 in_ST0;
  float fVar1;
  
  if (((char *)this)[99] == (byte)0x0) {
    return (float)in_ST0;
  }
  if (((char *)this)[0x62] != (byte)0x0) {
    fVar1 = ComponentInterfaceInstance::getPowerModifier
                      (*(ComponentInterfaceInstance **)((char *)this + 0xc));
    return fVar1;
  }
  fVar1 = (*(ComponentInterfaceInstance **)((char *)this + 0xc))->getPowerModifier()
  ;
  return fVar1;
}


// Ghidra: void __thiscall ShipModule::generatePower(ShipModule *this,float param_1)
void ShipModule::generatePower(float param_1)

{
  int iVar1;
  float unaff_ESI;
  float local_10;
  
  if (((char *)this)[99] != (byte)0x0) {
    local_10 = 1.0;
    if (*(int *)(*(int *)((char *)this + 8) + 4) == 0xd) {
      local_10 = (float)*(double *)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x28);
      Sector::getSolarRadiationAt
                (*(Sector **)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x24),local_10,
                 (float)*(double *)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x30));
      local_10 = *(float *)(*(int *)((char *)this + 8) + 0x104) * local_10;
    }
    iVar1 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)((char *)this + 0xc));
    if (0.0 < *(float *)(*(int *)((char *)this + 8) + 200) * ((float)iVar1 / 100.0) * local_10) {
      if (*(int *)(*(int *)((char *)this + 8) + 4) == 0xd) {
        Sector::getSolarRadiationAt
                  (*(Sector **)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x24),
                   (float)*(double *)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x28),
                   (float)*(double *)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x30));
      }
      (*(ComponentInterfaceInstance **)((char *)this + 0xc))->getEfficiencyPercent()
      ;
      (*(SystemManager **)((char *)this + 4))->generatePower(unaff_ESI);
    }
  }
  return;
}


// Ghidra: bool __thiscall ShipModule::isDestroyed(ShipModule *this)
bool ShipModule::isDestroyed()

{
  int iVar1;
  
  iVar1 = (*(ComponentInterfaceInstance **)((char *)this + 0xc))->damagePercent();
  if (*(int *)(*(int *)((char *)this + 8) + 0xe0) <= iVar1) {
    iVar1 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)((char *)this + 0xc));
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}


// Ghidra: bool __thiscall ShipModule::isDamaged(ShipModule *this)
bool ShipModule::isDamaged()

{
  int iVar1;
  
  iVar1 = (*(ComponentInterfaceInstance **)((char *)this + 0xc))->damagePercent();
  return iVar1 < *(int *)(*(int *)((char *)this + 8) + 0xdc);
}


// Ghidra: int __thiscall ShipModule::getValue(ShipModule *this)
int ShipModule::getValue()

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)(*(int *)((char *)this + 0xc) + 0x54);
  iVar4 = *(int *)(*(int *)((char *)this + 8) + 0x90);
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


// Ghidra: float __thiscall ShipModule::getInvertedEfficiencyFloat(ShipModule *this)
float ShipModule::getInvertedEfficiencyFloat()

{
  float10 extraout_ST0;
  
  (*(ComponentInterfaceInstance **)((char *)this + 0xc))->getEfficiencyPercent();
  return (float)extraout_ST0;
}


// Ghidra: int __thiscall ShipModule::getFreeHousingSlots(ShipModule *this)
int ShipModule::getFreeHousingSlots()

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((char *)this + 8);
  if (*(int *)(iVar1 + 4) != 8) {
    return 0;
  }
  iVar2 = getHousedObjectCount(this);
  return (int)(*(float *)(iVar1 + 0x104) - (float)iVar2);
}


// Ghidra: void __thiscall ShipModule::removeAllHousedObjects(ShipModule *this)
void ShipModule::removeAllHousedObjects()

{
  Weapon *this_00;
  int iVar1;
  ShipModule *pSVar2;
  
  pSVar2 = this + 0x3c;
  iVar1 = 8;
  do {
    this_00 = *(Weapon **)pSVar2;
    if (this_00 != (Weapon *)0x0) {
      (this_00)->~Weapon();
      operator_delete(this_00,(nothrow_t *)0x428);
    }
    *(undefined4 *)pSVar2 = 0;
    pSVar2 = pSVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// Ghidra: int __thiscall ShipModule::getHousedObjectCount(ShipModule *this)
int ShipModule::getHousedObjectCount()

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((char *)this + 0x3c) != 0) + 1;
  if (*(int *)((char *)this + 0x40) == 0) {
    uVar2 = (uint)(*(int *)((char *)this + 0x3c) != 0);
  }
  uVar1 = uVar2 + 1;
  if (*(int *)((char *)this + 0x44) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)((char *)this + 0x48) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)((char *)this + 0x4c) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)((char *)this + 0x50) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)((char *)this + 0x54) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)((char *)this + 0x58) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// Ghidra: bool __thiscall ShipModule::validHousedWeaponInSlot(ShipModule *this,int param_1)
bool ShipModule::validHousedWeaponInSlot(int param_1)

{
  if ((uint)param_1 < 8) {
    return *(int *)(this + param_1 * 4 + 0x3c) != 0;
  }
  return false;
}


// Ghidra: float __thiscall ShipModule::actualMaxPowerStorage(ShipModule *this)
float ShipModule::actualMaxPowerStorage()

{
  char cVar1;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (((char *)this)[99] != (byte)0x0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    in_ST0 = extraout_ST0;
    if (cVar1 == '\0') {
      (*(ComponentInterfaceInstance **)((char *)this + 0xc))->getEfficiencyPercent()
      ;
      return (float)extraout_ST0_00;
    }
  }
  return (float)in_ST0;
}


// Ghidra: float __thiscall ShipModule::getCurrentGenerationRate(ShipModule *this)
float ShipModule::getCurrentGenerationRate()

{
  int iVar1;
  float10 extraout_ST0;
  
  if (*(int *)(*(int *)((char *)this + 8) + 4) == 0xd) {
    iVar1 = *(int *)(*(int *)((char *)this + 4) + 0x48);
    Sector::getSolarRadiationAt
              (*(Sector **)(*(int *)(*(int *)((char *)this + 4) + 0x48) + 0x24),
               (float)*(double *)(iVar1 + 0x28),(float)*(double *)(iVar1 + 0x30));
  }
  (*(ComponentInterfaceInstance **)((char *)this + 0xc))->getEfficiencyPercent();
  return (float)extraout_ST0;
}


// Ghidra: float __thiscall ShipModule::getCurrentLADARRange(ShipModule *this)
float ShipModule::getCurrentLADARRange()

{
  float10 extraout_ST0;
  
  (*(ComponentInterfaceInstance **)((char *)this + 0xc))->getEfficiencyPercent();
  return (float)extraout_ST0;
}


// Ghidra: float __thiscall ShipModule::getCurrentJumpRange(ShipModule *this)
float ShipModule::getCurrentJumpRange()

{
  float10 extraout_ST0;
  
  ComponentInterfaceInstance::getEfficiencyPercent
            (*(ComponentInterfaceInstance **)(*(int *)(*(int *)((char *)this + 4) + 0x14) + 0xc));
  return (float)extraout_ST0;
}


// Ghidra: void __thiscall ShipModule::damageModule(ShipModule *this,int param_1,int param_2)
void ShipModule::damageModule(int param_1, int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  (*(ComponentInterfaceInstance **)((char *)this + 0xc))->damage(param_1, param_2);
  if (((char *)this)[99] != (byte)0x0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    if (cVar1 == '\0') {
      iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)((char *)this + 0xc));
      fVar3 = *(float *)(*(int *)((char *)this + 8) + 0xc4) * ((float)iVar2 / 100.0);
      goto LAB_004ae893;
    }
  }
  fVar3 = 0.0;
LAB_004ae893:
  if (fVar3 < *(float *)((char *)this + 0x5c)) {
    *(float *)((char *)this + 0x5c) = fVar3;
  }
  return;
}


// Ghidra: bool __thiscall ShipModule::isFunctional(ShipModule *this,bool param_1)
bool ShipModule::isFunctional(bool param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1) || (((char *)this)[99] != (byte)0x0)) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    if (cVar1 == '\0') {
      iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)((char *)this + 0xc));
      if (iVar2 != 0) {
        return true;
      }
    }
  }
  return false;
}


// Ghidra: void __thiscall ShipModule::disconnect(ShipModule *this,Ship *param_1)
void ShipModule::disconnect(Ship * param_1)

{
  SoundEngine *this_00;
  FlagManager *pFVar1;
  std::string local_3c [8];
  undefined4 uStack_34;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be068;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  switch(*(undefined4 *)(*(int *)((char *)this + 8) + 4)) {
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
      (param_1)->cancelAutopilot();
    }
    break;
  case 8:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) = 0;
    break;
  case 9:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      (param_1)->cancelAutopilot();
    }
    break;
  case 10:
    if (-1.0 < *(float *)(param_1 + 0x58)) {
      debugPrint("GAME","Jump drive lost power - discharging.");
      (param_1)->dischargeJumpDrive();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14) = 0;
    break;
  case 0xb:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10) = 0;
    if (*(int *)(param_1 + 0xd4) == 1) {
      (param_1)->cancelAutopilot();
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
  if ((*(int *)(*(int *)((char *)this + 8) + 4) == 10) && (*(float *)(param_1 + 0x58) != -1.0)) {
    uStack_34 = 0x4aea5b;
    ShipInterface::doJmpDischargeJumpDrive(param_1,1,0,0);
  }
  iVar2 = *(int *)((char *)this + 0x7c);
  ((char *)this)[99] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  if (iVar2 != -1) {
    this_00 = ghidra::any_singleton();
    (this_00)->pauseSound(iVar2);
  }
  if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
     (*(int *)(*(int *)((char *)this + 8) + 4) == 7)) {
    local_3c[0] = (std::string)0x0;
    ghidra::str::assign(local_3c,"helm_connected",0xe);
    // [seh] local_8 = 0;
    pFVar1 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar1)->setFlag();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ShipModule::connect(ShipModule *this,Ship *param_1)
void ShipModule::connect(Ship * param_1)

{
  GameData *pGVar1;
  void **ppvVar2;
  SoundEngine *this_00;
  FlagManager *pFVar3;
  ShipModule *extraout_ECX;
  std::string local_34 [16];
  undefined4 local_24;
  ShipModule *local_20;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar1 = g_gameData;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be0c0;
  // [seh] local_10 = ExceptionList;
  local_20 = this;
  ppvVar2 = &local_10;
  switch(*(undefined4 *)(*(int *)((char *)this + 8) + 4)) {
  case 3:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x28);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x28) = this;
    ppvVar2 = ExceptionList;
    break;
  case 4:
    local_20 = (ShipModule *)**(int **)(param_1 + 0x40);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    **(int **)(param_1 + 0x40) = (int)this;
    ppvVar2 = ExceptionList;
    break;
  case 5:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 8);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 8) = this;
    ppvVar2 = ExceptionList;
    break;
  case 7:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x24) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x24) != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x24) = this;
    ppvVar2 = ExceptionList;
    if ((*(int *)(pGVar1 + 0xcc) == 0) || (*(int *)(*(int *)(pGVar1 + 0xcc) + 0x70) != 1)) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"helm_connected",0xe);
    // [seh] local_8 = 1;
    goto LAB_004aee10;
  case 8:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x20) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x20) != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x20) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (byte)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"has_weapon_launcher",0x13);
    // [seh] local_8 = 2;
    goto LAB_004aee10;
  case 9:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x18);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x18) = this;
    ppvVar2 = ExceptionList;
    break;
  case 10:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x14) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x14) != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x14) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (byte)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"has_jump_drive",0xe);
    // [seh] local_8 = 0;
    goto LAB_004aee10;
  case 0xb:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x10);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x10) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0xc:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0xc);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0xc) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0xe:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x1c);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 0x1c) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0xf:
    local_20 = *(ShipModule **)(*(int *)(param_1 + 0x40) + 4);
    if ((local_20 != (ShipModule *)0x0) && (local_20 != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(*(int *)(param_1 + 0x40) + 4) = this;
    ppvVar2 = ExceptionList;
    break;
  case 0x10:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x30) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x30) != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x30) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (byte)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"has_hacking_module",0x12);
    // [seh] local_8 = 3;
    goto LAB_004aee10;
  case 0x11:
    local_20 = *(ShipModule **)(param_1 + 0x40);
    if ((*(ShipModule **)(local_20 + 0x2c) != (ShipModule *)0x0) &&
       (*(ShipModule **)(local_20 + 0x2c) != this)) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(ShipModule **)(local_20 + 0x2c) = this;
    ppvVar2 = ExceptionList;
    if (param_1[0x234] == (byte)0x0) break;
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"has_grappler",0xc);
    // [seh] local_8 = 4;
LAB_004aee10:
    pFVar3 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar3)->setFlag();
    local_20 = extraout_ECX;
    ppvVar2 = ExceptionList;
  }
  // [seh] ExceptionList = ppvVar2;
  if (((char *)this)[99] == (byte)0x0) {
    ((char *)this)[0x2c] = (byte)0x0;
    *(undefined4 *)((char *)this + 0x24) = 0;
  }
  iVar4 = *(int *)((char *)this + 0x7c);
  ((char *)this)[99] = (byte)0x1;
  if (iVar4 != -1) {
    local_24 = 0x4aee47;
    this_00 = ghidra::any_singleton();
    local_20 = (ShipModule *)0x4aee51;
    (this_00)->unpauseSound(iVar4);
  }
  if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) &&
     (*(int *)(*(int *)((char *)this + 8) + 4) == 7)) {
    local_24 = 0;
    local_20 = (ShipModule *)0xf;
    local_34[0] = (std::string)0x0;
    ghidra::str::assign(local_34,"helm_connected",0xe);
    // [seh] local_8 = 5;
    pFVar3 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar3)->setFlag();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: float __thiscall ShipModule::runLogic(ShipModule *this,float param_1,Ship *param_2)
float ShipModule::runLogic(float param_1, Ship * param_2)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff78[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
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
  std::string *pbVar17;
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
  std::string abStack_b8 [12];
  undefined4 uStack_ac;
  ShipModule aSStack_a0 [8];
  undefined4 uStack_98;
  Ship *pSVar30;
  Sound SVar31;
  char *pcVar32;
  char *pcVar33;
  std::string *local_5c;
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be18b;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar7 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_4c = (Ship *)param_1;
  local_50 = in_XMM1_Da;
  local_44 = this_;
  local_14 = pVVar7;
  if (*(float *)((char *)this_ + 0x80) <= 0.0) {
    iVar9 = *(int *)((char *)this_ + 0x84);
    pSVar16 = ghidra::any_singleton();
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
    iVar9 = *(int *)((char *)this_ + 0x84);
    pSVar16 = ghidra::any_singleton();
    (pSVar16)->pauseSound(iVar9);
  }
  else {
    fVar29 = *(float *)((char *)this_ + 0x80) - in_XMM1_Da;
    *(float *)((char *)this_ + 0x80) = fVar29;
    if (0.0 < fVar29) {
      iVar9 = *(int *)((char *)this_ + 0x84);
      pSVar16 = ghidra::any_singleton();
      for (piVar20 = *(int **)(pSVar16 + 0x2c); piVar20 != *(int **)(pSVar16 + 0x30);
          piVar20 = piVar20 + 1) {
        if (*(int *)(*piVar20 + 0x24) == iVar9) {
          pbVar2 = *(bool **)(*piVar20 + 0x30);
          if (((pbVar2 != (bool *)0x0) &&
              (FVar8 = FMOD::ChannelControl::getPaused(pbVar2), FVar8 == 0)) && (local_39 != '\0'))
          {
            iVar9 = *(int *)((char *)this_ + 0x84);
            pSVar16 = ghidra::any_singleton();
            (pSVar16)->unpauseSound(iVar9);
          }
          break;
        }
      }
    }
    else {
      *(undefined4 *)((char *)this_ + 0x80) = 0;
    }
  }
LAB_004af02d:
  if ((((char *)this_)[99] == (byte)0x0) || (cVar5 = (**(code **)(*(int *)this_ + 0x14))(), cVar5 != '\0')
     ) goto LAB_004b0369;
  if (((char *)this_)[0x2c] == (byte)0x0) {
    iVar9 = *(int *)((char *)this_ + 8);
    if (*(int *)(iVar9 + 0x8c) != 0) {
      fVar29 = *(float *)((char *)this_ + 0x24);
      *(float *)((char *)this_ + 0x24) = local_50 + fVar29;
      fVar28 = (float)*(int *)(iVar9 + 0x8c);
      *(int *)((char *)this_ + 0x28) = (int)(((local_50 + fVar29) / fVar28) * 100.0);
      fVar29 = (float)*(int *)(iVar9 + 0x8c);
      if (*(int *)(iVar9 + 4) == 3) {
        getInvertedEfficiencyFloat(this_);
        fVar29 = fVar28 * (float)*(int *)(*(int *)((char *)this_ + 8) + 0x8c);
      }
      else if (*(int *)(iVar9 + 4) == 7) {
        getInvertedEfficiencyFloat(this_);
        fVar29 = (float)*(int *)(*(int *)((char *)this_ + 8) + 0x8c) * fVar28 * 0.5;
      }
      if (*(float *)((char *)this_ + 0x24) < fVar29) goto LAB_004b0369;
      *(undefined1 **)((char *)this_ + 0x24) = &DAT_bf800000;
      *(undefined4 *)((char *)this_ + 0x28) = 100;
    }
    ((char *)this_)[0x2c] = (byte)0x1;
  }
  if ((((char *)this_)[99] == (byte)0x0) || (cVar5 = (**(code **)(*(int *)this_ + 0x14))(), cVar5 != '\0')
     ) {
    fVar29 = 0.0;
  }
  else {
    iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)((char *)this_ + 0xc));
    fVar29 = *(float *)(*(int *)((char *)this_ + 8) + 0xc4) * ((float)iVar9 / 100.0);
  }
  if (fVar29 < *(float *)((char *)this_ + 0x5c)) {
    *(float *)((char *)this_ + 0x5c) = fVar29;
  }
  (**(code **)(*(int *)this_ + 0xc))();
  iVar9 = *(int *)((char *)this_ + 8);
  if ((0.0 < *(float *)(iVar9 + 0xc0)) || (0.0 < *(float *)(iVar9 + 0xbc))) {
    (**(code **)(*(int *)this_ + 8))();
    iVar9 = *(int *)((char *)this_ + 8);
  }
  if (((char *)this_)[0x62] == (byte)0x0) {
    if ((((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
        && (*(int *)(iVar9 + 4) == 9)) && (((char *)this_)[0x70] != (byte)0x0)) {
      local_40 = (Ship *)&stack0xffffff78;
      ghidra::str::assign((std::string *)&stack0xffffff78,"is_rotating",0xb);
      // [seh] local_8 = 2;
      pFVar10 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar10)->setFlag();
    }
    if (((char *)this_)[0x70] == (byte)0x1) {
      ((char *)this_)[0x70] = (byte)0x0;
    }
  }
  else {
    if (((*(int *)(g_gameData + 0xcc) != 0) && (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1))
       && ((*(int *)(iVar9 + 4) == 9 && (((char *)this_)[0x70] == (byte)0x0)))) {
      local_40 = (Ship *)&stack0xffffff78;
      ghidra::str::assign((std::string *)&stack0xffffff78,"is_rotating",0xb);
      // [seh] local_8 = 0;
      pFVar10 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar10)->setFlag();
      local_40 = (Ship *)&stack0xffffff78;
      ghidra::str::assign((std::string *)&stack0xffffff78,"has_rotated",0xb);
      // [seh] local_8 = 1;
      pFVar10 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar10)->setFlag();
      iVar9 = *(int *)((char *)this_ + 8);
    }
    if (((char *)this_)[0x60] == (byte)0x0) {
      debugPrint("DETAIL","%s: WARNING: not enough power to run %s");
      iVar9 = *(int *)(*(int *)((char *)this_ + 8) + 4);
      if (iVar9 == 0xb) {
        ((char *)this_)[0x62] = (byte)0x0;
        iVar9 = *(int *)((int)param_1 + 0xd4);
joined_r0x004af501:
        if (iVar9 != 0) goto LAB_004af5c3;
      }
      else {
        if (iVar9 == 9) {
          ((char *)this_)[0x62] = (byte)0x0;
          iVar9 = *(int *)((int)param_1 + 0xd4);
          goto joined_r0x004af501;
        }
        if (iVar9 == 8) {
          iVar9 = *(int *)(*(int *)(*(int *)((char *)this_ + 4) + 0x20) + 0x30);
          if ((iVar9 != -1) &&
             (pWVar19 = *(Weapon **)(*(int *)(*(int *)((char *)this_ + 4) + 0x20) + 0x3c + iVar9 * 4),
             pWVar19 != (Weapon *)0x0)) {
            if (iVar9 == -1) {
              pWVar19 = (Weapon *)0x0;
            }
            bVar6 = (pWVar19)->isSpinningUp();
            if (bVar6) {
              (this_01)->addLogLine(*(LogPriority *)((int)param_1 + 0x224), &DAT_00000002);
              iVar9 = *(int *)(*(int *)(*(int *)((char *)this_ + 4) + 0x20) + 0x30);
              if (iVar9 == -1) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)(*(int *)(*(int *)((char *)this_ + 4) + 0x20) + 0x3c + iVar9 * 4);
              }
              *(undefined1 **)(iVar9 + 0x3c0) = &DAT_bf800000;
              *(undefined1 *)(iVar9 + 0x3bc) = 0;
            }
          }
          *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x20) + 0x62) = 0;
          goto LAB_004af5c3;
        }
        if (iVar9 == 0xf) {
          ((char *)this_)[0x62] = (byte)0x0;
        }
        else {
          if ((iVar9 != 0xe) || (((char *)this_)[0x62] == (byte)0x0)) goto LAB_004af5c3;
          ((char *)this_)[0x62] = (byte)0x0;
          *(undefined1 **)((int)param_1 + 0x160) = &DAT_bf800000;
        }
      }
      (this_00)->addLogLine(*(LogPriority *)((int)param_1 + 0x224), (char *)0x3);
    }
    else {
      iVar9 = *(int *)(iVar9 + 4);
      if (iVar9 == 0xb) {
        ComponentInterfaceInstance::getEfficiencyPercent
                  (*(ComponentInterfaceInstance **)((char *)this_ + 0xc));
        ((Ship *)param_1)->accelerate((double)CONCAT44(unaff_EDI,pVVar7));
      }
      else if (iVar9 == 9) {
        if (*(int *)((char *)this_ + 0x34) == 1) {
          iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)((char *)this_ + 0xc));
          fVar29 = *(float *)(*(int *)((char *)this_ + 8) + 0x104) * ((float)iVar9 / 100.0) * local_50 +
                   *(float *)((int)param_1 + 0x120);
LAB_004af344:
          *(float *)((int)param_1 + 0x120) = fVar29;
        }
        else if (*(int *)((char *)this_ + 0x34) == 2) {
          iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)((char *)this_ + 0xc));
          fVar29 = *(float *)((int)param_1 + 0x120) -
                   *(float *)(*(int *)((char *)this_ + 8) + 0x104) * ((float)iVar9 / 100.0) * local_50;
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
        iVar9 = *(int *)(*(int *)((char *)this_ + 4) + 0x20);
        iVar18 = *(int *)(iVar9 + 0x30);
        if ((iVar18 != -1) &&
           (pWVar19 = *(Weapon **)(iVar9 + 0x3c + iVar18 * 4), pWVar19 != (Weapon *)0x0)) {
          local_40 = (Ship *)0x0;
          pWVar11 = pWVar19;
          if (iVar18 == -1) {
            pWVar11 = (Weapon *)0x0;
          }
          if (pWVar11[0x3bc] == (byte)0x0) {
            if ((iVar18 != -1) && (pWVar19 != (Weapon *)0x0)) {
              if (iVar18 == -1) {
                pWVar19 = (Weapon *)0x0;
              }
              bVar6 = (pWVar19)->isSpinningUp();
              if (bVar6) {
                if ((extraout_EDX != -1) &&
                   (pWVar19 = *(Weapon **)(iVar9 + 0x3c + extraout_EDX * 4),
                   pWVar19 != (Weapon *)0x0)) {
                  if (extraout_EDX == -1) {
                    pWVar19 = (Weapon *)0x0;
                  }
                  bVar6 = (pWVar19)->isSpinningUp();
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
            iVar18 = *(int *)(*(int *)(*(int *)((char *)this_ + 4) + 0x20) + 0x30);
            if (iVar18 == -1) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)(*(int *)(*(int *)((char *)this_ + 4) + 0x20) + 0x3c + iVar18 * 4);
            }
            *(float *)(iVar18 + 0x3c0) =
                 (float)(int)(((float)iVar12 / 100.0) * 0.5 *
                             *(float *)(*(int *)(*(int *)(*(int *)(iVar9 + 4) + 0x20) + 8) + 0x108))
            ;
            goto LAB_004af5c3;
          }
        }
        ((char *)this_)[0x62] = (byte)0x0;
      }
    }
LAB_004af5c3:
    if (((char *)this_)[0x70] == (byte)0x0) {
      ((char *)this_)[0x70] = (byte)0x1;
    }
  }
  if ((*(int *)(*(int *)((char *)this_ + 8) + 4) == 8) &&
     (cVar5 = (**(code **)(*(int *)this_ + 0x10))(), cVar5 != '\0')) {
    pSVar24 = this_ + 0x3c;
    iVar9 = 8;
    do {
      iVar18 = *(int *)pSVar24;
      if ((((iVar18 != 0) && (*(char *)(iVar18 + 0x3fc) != '\0')) &&
          (iVar12 = *(int *)(iVar18 + 0x38c), iVar12 != 0)) && (*(int *)(iVar12 + 0x30) == 1)) {
        pSVar13 = (*(Ship **)(iVar18 + 0x39c))->getSensorDataForShipID(*(int *)(iVar12 + 0x248));
        if (pSVar13 == (SensorData *)0x0) {
          *(undefined4 *)(iVar18 + 0x3b8) = 0;
        }
        else {
          *(int *)(iVar18 + 0x3b8) = (int)*(float *)(pSVar13 + 0x128);
        }
      }
      pSVar24 = pSVar24 + 4;
      iVar9 = iVar9 + -1;
      this_ = local_44;
      param_1 = (float)local_4c;
    } while (iVar9 != 0);
  }
  if (((*(int *)(*(int *)((char *)this_ + 8) + 4) == 0xc) &&
      (cVar5 = (**(code **)(*(int *)this_ + 0x10))(), cVar5 != '\0')) &&
     ((((char *)this_)[0x62] != (byte)0x0 && (*(float *)((char *)this_ + 0x6c) == -1.0)))) {
    local_40 = (Ship *)&stack0xffffff8c;
    // [seh] local_8 = 3;
    (*(ComponentInterfaceInstance **)((char *)this_ + 0xc))->getEfficiencyPercent();
    // [seh] local_8 = 0xffffffff;
    local_40 = GameData::getShipWithinDistance();
    if (local_40 != (Ship *)0x0) {
      local_18 = (undefined1 *)(float)*(double *)((int)param_1 + 0x30);
      local_20 = CONCAT44((float)*(double *)((int)param_1 + 0x28),(undefined4)local_20);
      local_48 = (float)*(double *)(local_40 + 0x28);
      local_44 = (ShipModule *)(float)*(double *)(local_40 + 0x30);
      // [seh] local_8 = 5;
      fastDistance(pVVar7,unaff_EDI);
      // [seh] local_8 = 0xffffffff;
      debugPrint("GAME","%s: firing point defence laser at %s, at range %f");
      local_44 = (ShipModule *)diceRoll((Dice *)pVVar7);
      debugPrint("DETAIL","%s: %d/%d");
      if (local_44 == (ShipModule *)&DAT_00000001) {
        debugPrint("GAME","%s: hit PDL target. Delivering heat damage.");
        pSVar30 = local_40;
        angleInDegreesFrom();
        (**(code **)(*(int *)pSVar30 + 0xc))();
        if ((*(char *)(*(int *)(*(int *)((char *)this_ + 4) + 0x48) + 0x234) != '\0') &&
           (cVar5 = (**(code **)(*(int *)pSVar30 + 0x20))(), cVar5 != '\0')) {
          local_40 = (Ship *)&stack0xffffff7c;
          ghidra::str::assign((std::string *)&stack0xffffff7c,"pdl_kills",9);
          // [seh] local_8 = 6;
          pSVar14 = Singleton<Stats>::getInstance();
          // [seh] local_8 = 0xffffffff;
          (pSVar14)->addStat();
          local_40 = (Ship *)&stack0xffffff78;
          ghidra::str::assign((std::string *)&stack0xffffff78,"",0);
          local_44 = aSStack_a0;
          // [seh] local_8 = 7;
          aSStack_a0[0] = (byte)0x0;
          uStack_ac = 0x4af97b;
          ghidra::str::assign((std::string *)aSStack_a0,"pdl_kills",9);
          // [seh] local_8 = CONCAT31(local_8._1_3_,8);
          abStack_b8[0] = (std::string)0x0;
          ghidra::str::assign(abStack_b8,"play",4);
          // [seh] local_8 = 0xffffffff;
          Analytics::logEvent();
        }
      }
      else {
        debugPrint("GAME","%s: miss.");
      }
      local_18 = &stack0xffffff7c;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff7c,(std::string *)((int)param_1 + 0x238));
      // [seh] local_8 = 9;
      pPVar15 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pPVar15)->addShake();
      iVar9 = -1;
      SVar31 = 0x21;
      pSVar30 = (Ship *)param_1;
      pSVar16 = ghidra::any_singleton();
      (pSVar16)->playSound(pSVar30, SVar31, iVar9);
      iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)((char *)this_ + 0xc));
      *(float *)((char *)this_ + 0x6c) =
           *(float *)(*(int *)((char *)this_ + 8) + 0x108) * (((float)iVar9 / 100.0 - 1.0) * -1.0 + 1.0);
    }
  }
  if (*(int *)(*(int *)((char *)this_ + 8) + 4) == 0x10) {
    cVar5 = (**(code **)(*(int *)this_ + 0x10))();
    if ((cVar5 == '\0') || ((*(float *)((char *)this_ + 0x6c) != 0.0 && (*(float *)((char *)this_ + 0x6c) != -1.0))))
    {
      cVar5 = (**(code **)(*(int *)this_ + 0x10))();
      if ((cVar5 == '\0') || (*(float *)((char *)this_ + 0x6c) < 0.0)) {
        cVar5 = (**(code **)(*(int *)this_ + 0x10))();
        if ((cVar5 == '\0') && (0.0 < *(float *)((char *)this_ + 0x6c))) {
          *(int *)((char *)this_ + 0x6c) = -0x40000000;
          debugPrint("DETAIL","Hack failed due to hack unit failing");
        }
      }
      else {
        pSVar30 = *(Ship **)((char *)this_ + 0x18);
        this_03 = extraout_ECX_01;
        if (((pSVar30 == (Ship *)0x0) || (pSVar30[0x168] != (byte)0x0)) ||
           (bVar6 = ((Ship *)param_1)->canCurrentlyDetect(pSVar30), this_03 = this_02, !bVar6)) {
          (this_03)->addLogLine(*(LogPriority *)((int)param_1 + 0x224), (char *)0x3);
          ((char *)this_)[0x62] = (byte)0x0;
          *(int *)((char *)this_ + 0x6c) = -0x40000000;
        }
        else if ((((char *)this_)[0x60] == (byte)0x0) || (((char *)this_)[0x62] == (byte)0x0)) {
          (this_02)->addLogLine(*(LogPriority *)((int)param_1 + 0x224), (char *)0x3);
          ((char *)this_)[0x62] = (byte)0x0;
          *(int *)((char *)this_ + 0x6c) = -0x40000000;
        }
        else {
          bVar6 = (pSVar30)->canCurrentlyDetect((Ship *)param_1);
          if (bVar6) {
            debugPrint("DETAIL","Hack failed - target detected us.");
            pHVar22 = extraout_ECX_02;
            if (Singleton<HackEngine>::instance == (HackEngine *)0x0) {
              Singleton<HackEngine>::instance = operator_new(1);
              pHVar22 = extraout_ECX_03;
            }
            (pHVar22)->failHack((Ship *)param_1);
            ((char *)this_)[0x62] = (byte)0x0;
            *(int *)((char *)this_ + 0x6c) = -0x40000000;
          }
        }
      }
    }
    else {
      if (*(int *)((char *)this_ + 0x18) != 0) {
        pHVar22 = extraout_ECX;
        if (Singleton<HackEngine>::instance == (HackEngine *)0x0) {
          Singleton<HackEngine>::instance = operator_new(1);
          pHVar22 = extraout_ECX_00;
        }
        HackEngine::performHack
                  (pHVar22,(Ship *)param_1,*(CommsData **)(g_gameData + 300),
                   *(BankAccount **)(g_gameData + 0x124));
        if (*(char *)(*(int *)(*(int *)((char *)this_ + 4) + 0x48) + 0x234) != '\0') {
          local_18 = &stack0xffffff7c;
          ghidra::str::assign((std::string *)&stack0xffffff7c,"ships_hacked",0xc);
          // [seh] local_8 = 10;
          pSVar14 = Singleton<Stats>::getInstance();
          // [seh] local_8 = 0xffffffff;
          (pSVar14)->addStat();
          local_18 = &stack0xffffff78;
          ghidra::str::assign((std::string *)&stack0xffffff78,"",0);
          local_40 = (Ship *)aSStack_a0;
          // [seh] local_8 = 0xb;
          aSStack_a0[0] = (byte)0x0;
          uStack_ac = 0x4afb7d;
          ghidra::str::assign((std::string *)aSStack_a0,"ships_hacked",0xc);
          // [seh] local_8 = CONCAT31(local_8._1_3_,0xc);
          abStack_b8[0] = (std::string)0x0;
          ghidra::str::assign(abStack_b8,"play",4);
          // [seh] local_8 = 0xffffffff;
          Analytics::logEvent();
          ghidra::str::ctor
                    ((std::string *)local_38,(std::string *)(*(int *)((char *)this_ + 0x18) + 0x238));
          // [seh] local_8 = 0xd;
          ghidra::lib::transform___x28_x29();
          uStack_98 = 0x4afc1e;
          local_18 = &stack0xffffff78;
          strUsingArgs(&stack0xffffff78);
          // [seh] local_8._0_1_ = 0xe;
          pFVar10 = ghidra::any_singleton();
          // [seh] local_8 = CONCAT31(local_8._1_3_,0xd);
          (pFVar10)->setFlag();
          // [seh] local_8 = 0xffffffff;
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
      ((char *)this_)[0x62] = (byte)0x0;
      *(int *)((char *)this_ + 0x6c) = -0x40000000;
    }
  }
  if (((*(int *)(*(int *)((char *)this_ + 8) + 4) == 0x11) &&
      (cVar5 = (**(code **)(*(int *)this_ + 0x10))(), cVar5 != '\0')) &&
     ((*(float *)((char *)this_ + 0x6c) == -1.0 && (*(int *)((char *)this_ + 0x34) != 0)))) {
    debugPrint("DETAIL","Grappling arm done.");
    uVar25 = *(uint *)((char *)this_ + 0x34);
    if ((int)uVar25 < 1) {
      if ((int)uVar25 < 0) {
        uVar25 = ~uVar25;
        local_44 = (ShipModule *)((Ship *)param_1)->getNextEmptyCargoPod();
        if (((0xd < (int)uVar25) || (local_44 == (ShipModule *)0xffffffff)) ||
           (bVar6 = (*(CargoHold **)((int)param_1 + 0x1f8))->podExists((int)local_44), bVar6
           )) goto LAB_004b0245;
        (this_04)->addPod((int)local_44);
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
        (*(CargoHold **)(*(int *)((int)param_1 + 0x174) + 0xe8))->removePod(uVar25);
        local_18 = &stack0xffffff7c;
        ghidra::str::assign((std::string *)&stack0xffffff7c,"cargo_collected",0xf);
        // [seh] local_8 = 0xf;
        pSVar14 = Singleton<Stats>::getInstance();
        // [seh] local_8 = 0xffffffff;
        (pSVar14)->addStat();
        local_18 = &stack0xffffff78;
        ghidra::str::assign((std::string *)&stack0xffffff78,"",0);
        local_4c = (Ship *)aSStack_a0;
        // [seh] local_8 = 0x10;
        aSStack_a0[0] = (byte)0x0;
        uStack_ac = 0x4b0075;
        ghidra::str::assign((std::string *)aSStack_a0,"cargo_collected",0xf);
        // [seh] local_8 = CONCAT31(local_8._1_3_,0x11);
        abStack_b8[0] = (std::string)0x0;
        ghidra::str::assign(abStack_b8,"play",4);
        // [seh] local_8 = 0xffffffff;
        Analytics::logEvent();
        debugPrint("DETAIL","Transfered %dx goodID %d from moored object to ship");
        local_4c = *(Ship **)((int)param_1 + 0x174);
        pbVar17 = (std::string *)(local_4c + 0x98);
        bVar6 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar7,(uint)unaff_EDI);
        pSVar26 = (SyntheticObject *)local_4c;
        if (!bVar6) {
          ghidra::str::ctor((std::string *)&stack0xffffff7c,pbVar17);
          splitStringBy();
          // [seh] local_8 = 0x12;
          iVar9 = (local_58 - (int)local_5c) / 0x18;
          if (iVar9 == 2) {
            pbVar17 = local_5c + 0x18;
            if (0xf < *(uint *)(local_5c + 0x2c)) {
              pbVar17 = *(std::string **)pbVar17;
            }
            iVar9 = atoi((char *)pbVar17);
            if (iVar9 != -1) {
LAB_004b016d:
              pbVar17 = local_5c;
              bVar6 = CargoHold::podExists
                                (*(CargoHold **)(*(int *)((int)param_1 + 0x174) + 0xe8),iVar9);
              if (!bVar6) {
                local_18 = &stack0xffffff7c;
                ghidra::str::ctor((std::string *)&stack0xffffff7c,pbVar17);
                // [seh] local_8._0_1_ = 0x13;
                pFVar10 = ghidra::any_singleton();
                // [seh] local_8._0_1_ = 0x12;
                bVar6 = (pFVar10)->flagSet();
                if (!bVar6) {
                  debugPrint("DETAIL","Cargo with flag has been taken; setting flag \'%s\'.");
                  local_18 = &stack0xffffff78;
                  ghidra::str::ctor((std::string *)&stack0xffffff78,local_5c);
                  // [seh] local_8._0_1_ = 0x14;
                  pFVar10 = ghidra::any_singleton();
                  // [seh] local_8 = CONCAT31(local_8._1_3_,0x12);
                  (pFVar10)->setFlag();
                }
              }
            }
          }
          else if (iVar9 == 1) {
            iVar9 = 0;
            goto LAB_004b016d;
          }
          // [seh] local_8 = 0xffffffff;
          ghidra::lib::vector___Tidy((ghidra::vector *)&local_5c);
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
          (this_05)->removeSyntheticObject(pSVar26);
          pcVar32 = "DETAIL";
          pcVar33 = "Removed a now-empty synthetic object after removing the last cargo from it.";
          goto LAB_004b024f;
        }
      }
    }
    else {
      iVar9 = uVar25 - 1;
      local_44 = (ShipModule *)
                 (*(SyntheticObject **)((int)param_1 + 0x174))->getNextEmptyCargoPod();
      if (((iVar9 < 0xe) &&
          (bVar6 = (*(CargoHold **)((int)param_1 + 0x1f8))->podExists(iVar9), bVar6)) &&
         (local_44 != (ShipModule *)0xffffffff)) {
        (*(CargoHold **)(*(int *)((int)param_1 + 0x174) + 0xe8))->addPod((int)local_44);
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
        (*(CargoHold **)((int)param_1 + 0x1f8))->removePod(iVar9);
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
    *(int *)((char *)this_ + 0x6c) = -0x40000000;
    *(int *)((char *)this_ + 0x34) = 0;
  }
  if (((char *)this_)[0x60] != (byte)0x0) {
    if ((*(int *)((char *)this_ + 0x84) != -1) && (((char *)this_)[0x62] != (byte)0x0)) {
      *(float *)((char *)this_ + 0x80) = (float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] * 0.2;
    }
    if (((((char *)this_)[0x60] != (byte)0x0) && (0.0 < *(float *)((char *)this_ + 0x6c))) &&
       (local_50 = *(float *)((char *)this_ + 0x6c) - local_50, *(float *)((char *)this_ + 0x6c) = local_50,
       local_50 < 0.0)) {
      *(undefined1 **)((char *)this_ + 0x6c) = &DAT_bf800000;
      debugPrint("DETAIL","%s: Internal timer hit.");
    }
  }
  if (((char *)this_)[99] != (byte)0x0) {
    if (((char *)this_)[0x62] == (byte)0x0) {
      local_4c = (Ship *)(float)*(int *)(*(int *)((char *)this_ + 8) + 0xd4);
      (*(ComponentInterfaceInstance **)((char *)this_ + 0xc))->getEmissionsModifier()
      ;
    }
    else {
      local_40 = (Ship *)((float)*(int *)((char *)this_ + 100) / 100.0);
      local_4c = (Ship *)(float)*(int *)(*(int *)((char *)this_ + 8) + 0xcc);
      (*(ComponentInterfaceInstance **)((char *)this_ + 0xc))->getEmissionsModifier()
      ;
    }
  }
LAB_004b0369:
  // [seh] ExceptionList = local_10;
  // [cookie] fVar27 = (float10)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (float)fVar27;
}
