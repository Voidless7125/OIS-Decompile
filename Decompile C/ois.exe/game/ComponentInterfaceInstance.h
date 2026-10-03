typedef struct ComponentInterfaceInstance ComponentInterfaceInstance, *PComponentInterfaceInstance;


struct ComponentInterfaceInstance { // PlaceHolder Structure
};


int __thiscall ComponentInterfaceInstance::getComponentCount(ComponentInterfaceInstance *this);
void __thiscall ComponentInterfaceInstance::applyConfiguration(ComponentInterfaceInstance *this,ModuleConfiguration *param_1);
bool __thiscall ComponentInterfaceInstance::setActive(ComponentInterfaceInstance *this,int param_1);
int __thiscall ComponentInterfaceInstance::damagePercent(ComponentInterfaceInstance *this);
void __thiscall ComponentInterfaceInstance::damageAtLocation(ComponentInterfaceInstance *this,int param_1,DamageType param_2,int param_3,int param_4);
void __thiscall ComponentInterfaceInstance::damage(ComponentInterfaceInstance *this,int param_1,DamageType param_2);
int __thiscall ComponentInterfaceInstance::getEfficiencyPercent(ComponentInterfaceInstance *this);
float __thiscall ComponentInterfaceInstance::getEmissionsModifier(ComponentInterfaceInstance *this);
float __thiscall ComponentInterfaceInstance::getPowerModifier(ComponentInterfaceInstance *this);
