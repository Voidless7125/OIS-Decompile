typedef struct CargoHold CargoHold, *PCargoHold;


struct CargoHold { // PlaceHolder Structure
};


void * __thiscall CargoHold::`scalar_deleting_destructor'(CargoHold *this,uint param_1);
void __thiscall CargoHold::describePod(CargoHold *this,int param_1,bool param_2);
void __thiscall CargoHold::configureSlots(CargoHold *this,int param_1,int param_2);
int __thiscall CargoHold::totalUnitsFree(CargoHold *this);
basic_string<> * __thiscall CargoHold::describeCargo(CargoHold *this,bool param_1);
bool __thiscall CargoHold::addToHold(CargoHold *this,int param_1,int param_2,int param_3);
void __thiscall CargoHold::removeFromHold(CargoHold *this,int param_1,int param_2,int param_3);
void __thiscall CargoHold::removeFromHold(CargoHold *this,Good *param_1,int param_2,int param_3);
int __thiscall CargoHold::getPodSellCost(CargoHold *this,int param_1);
bool __thiscall CargoHold::addPod(CargoHold *this,int param_1);
bool __thiscall CargoHold::podExists(CargoHold *this,int param_1);
void __thiscall CargoHold::removePod(CargoHold *this,int param_1);
void __thiscall CargoHold::addOption(CargoHold *this,int param_1,GoodContainmentOption param_2);
int __thiscall CargoHold::amountCanHold(CargoHold *this,Good *param_1);
int __thiscall CargoHold::amountCanHold(CargoHold *this,GoodContainmentOption param_1);
int __thiscall CargoHold::totalBaseValue(CargoHold *this);
int __thiscall CargoHold::amountHeld(CargoHold *this,int param_1);
int __thiscall CargoHold::amountHeld(CargoHold *this,GoodContainmentOption param_1);
void __thiscall CargoHold::addComponent(CargoHold *this,ShipComponent *param_1);
bool __thiscall CargoHold::hasComponent(CargoHold *this,int param_1);
void __thiscall CargoHold::removeComponent(CargoHold *this,ShipComponent *param_1);
