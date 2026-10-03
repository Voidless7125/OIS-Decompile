// WARNING! conflicting data type names: /Demangler/word - /word
typedef struct ShipModuleClass ShipModuleClass, *PShipModuleClass;


struct ShipModuleClass { // PlaceHolder Structure
};


ShipModuleClass * __thiscall ShipModuleClass::ShipModuleClass(ShipModuleClass *this,undefined4 param_1,undefined4 param_2,void *param_4);
ModuleSlotType __cdecl ShipModuleClass::getSlotTypeForModuleType(ModuleType param_1);
ModuleConfiguration * __thiscall ShipModuleClass::getRandomConfigurationOfType(ShipModuleClass *this,int param_1);
