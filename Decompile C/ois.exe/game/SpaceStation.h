typedef struct SpaceStation SpaceStation, *PSpaceStation;


struct SpaceStation { // PlaceHolder Structure
};


SpaceStation * __thiscall SpaceStation::SpaceStation(SpaceStation *this,undefined4 param_1,void *param_3);
void __thiscall SpaceStation::shipUndocking(SpaceStation *this,Ship *param_1);
void __thiscall SpaceStation::shipDocking(SpaceStation *this,Ship *param_1);
bool __thiscall SpaceStation::shipHasPaidForUse(SpaceStation *this,char *param_2);
bool __thiscall SpaceStation::requestUndockingClearance(SpaceStation *this,Ship *param_1,bool param_2);
void __thiscall SpaceStation::regenerateExtras(SpaceStation *this);
basic_string<> * __thiscall SpaceStation::getTagFor(SpaceStation *this,basic_string<> *param_2,char *param_3);
void __thiscall SpaceStation::dockShip(SpaceStation *this,Ship *param_1);
bool __thiscall SpaceStation::shipHasDockingClearance(SpaceStation *this,Ship *param_1);
bool __thiscall SpaceStation::shipHasUndockingClearance(SpaceStation *this,Ship *param_1);
DockingRequest * __thiscall SpaceStation::getDockingRequest(SpaceStation *this,Ship *param_1);
void __thiscall SpaceStation::runLogic(SpaceStation *this,float param_1);
void __thiscall SpaceStation::checkExistState(SpaceStation *this);
void __thiscall SpaceStation::addAmount(SpaceStation *this,int param_1);
void __thiscall SpaceStation::removeAmount(SpaceStation *this,int param_1);
int __thiscall SpaceStation::getCurrentAmountOwed(SpaceStation *this);
void __thiscall SpaceStation::clearPassengers(SpaceStation *this);
void __thiscall SpaceStation::populatePassengers(SpaceStation *this);
