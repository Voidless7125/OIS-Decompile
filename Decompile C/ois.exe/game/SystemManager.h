typedef struct SystemManager SystemManager, *PSystemManager;


struct SystemManager { // PlaceHolder Structure
};


void __thiscall SystemManager::generatePower(SystemManager *this,float param_1);
bool __thiscall SystemManager::drawPower(SystemManager *this,float param_1);
ShipModule * __thiscall SystemManager::addEmptyModule(SystemManager *this,int param_1,void *param_3);
bool __thiscall SystemManager::addModule(SystemManager *this,ShipModule *param_1,int param_2);
void __thiscall SystemManager::removeModule(SystemManager *this,ShipModule *param_1);
bool __thiscall SystemManager::canAddModule(SystemManager *this,ShipModule *param_1);
ShipModule * __thiscall SystemManager::getModule(SystemManager *this,ModuleType param_1,bool param_2);
void __thiscall SystemManager::connectModulesOfType(SystemManager *this,ModuleType param_1);
void __thiscall SystemManager::disconnectModulesOfType(SystemManager *this,ModuleType param_1);
ShipModule * __thiscall SystemManager::getModule(SystemManager *this,int param_1);
int __thiscall SystemManager::getSlotForType(SystemManager *this,ModuleType param_1);
float __thiscall SystemManager::getMaxBatteryStorage(SystemManager *this);
float __thiscall SystemManager::getMaxTheoreticalPowerGeneration(SystemManager *this);
ShipModule * __thiscall SystemManager::getBattery(SystemManager *this,int param_1);
int __thiscall SystemManager::getCurrentPowerPercentage(SystemManager *this);
float __thiscall SystemManager::totalCurrentPower(SystemManager *this);
float __thiscall SystemManager::totalPossiblePower(SystemManager *this);
void __thiscall SystemManager::resetHardware(SystemManager *this,int param_1);
float __thiscall SystemManager::totalPowerDrain(SystemManager *this);
float __thiscall SystemManager::totalPowerGeneration(SystemManager *this);
void __thiscall SystemManager::runAttritionLogic(SystemManager *this,float param_1);
void __thiscall SystemManager::newDamage(SystemManager *this,HullLocation param_1,float param_2,DamageType param_3);
void __thiscall SystemManager::damage(SystemManager *this,HullLocation param_1,float param_2,DamageType param_3);
