typedef struct ShipModule ShipModule, *PShipModule;


struct ShipModule { // PlaceHolder Structure
};


bool __thiscall ShipModule::isAtHighPower(ShipModule *this);
bool __thiscall ShipModule::hasBooted(ShipModule *this);
ShipModule * __thiscall ShipModule::ShipModule(ShipModule *this,ShipModuleClass *param_1);
void __thiscall ShipModule::resetDefaultEMCONState(ShipModule *this);
int __thiscall ShipModule::getWidth(ShipModule *this);
int __thiscall ShipModule::getHeight(ShipModule *this);
void __thiscall ShipModule::drainPower(ShipModule *this,float param_1);
float __thiscall ShipModule::getCurrentPowerDrain(ShipModule *this);
void __thiscall ShipModule::generatePower(ShipModule *this,float param_1);
bool __thiscall ShipModule::isDestroyed(ShipModule *this);
bool __thiscall ShipModule::isDamaged(ShipModule *this);
int __thiscall ShipModule::getValue(ShipModule *this);
float __thiscall ShipModule::getInvertedEfficiencyFloat(ShipModule *this);
int __thiscall ShipModule::getFreeHousingSlots(ShipModule *this);
void __thiscall ShipModule::removeAllHousedObjects(ShipModule *this);
int __thiscall ShipModule::getHousedObjectCount(ShipModule *this);
bool __thiscall ShipModule::validHousedWeaponInSlot(ShipModule *this,int param_1);
float __thiscall ShipModule::actualMaxPowerStorage(ShipModule *this);
float __thiscall ShipModule::getCurrentGenerationRate(ShipModule *this);
float __thiscall ShipModule::getCurrentLADARRange(ShipModule *this);
float __thiscall ShipModule::getCurrentJumpRange(ShipModule *this);
void __thiscall ShipModule::damageModule(ShipModule *this,int param_1,int param_2);
bool __thiscall ShipModule::isFunctional(ShipModule *this,bool param_1);
void __thiscall ShipModule::disconnect(ShipModule *this,Ship *param_1);
void __thiscall ShipModule::connect(ShipModule *this,Ship *param_1);
float __thiscall ShipModule::runLogic(ShipModule *this,float param_1,Ship *param_2);
