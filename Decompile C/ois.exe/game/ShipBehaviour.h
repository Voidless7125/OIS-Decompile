typedef struct ShipBehaviour ShipBehaviour, *PShipBehaviour;


struct ShipBehaviour { // PlaceHolder Class Structure
};


ShipBehaviour * __thiscall ShipBehaviour::ShipBehaviour(ShipBehaviour *this,Ship *param_1,CraftPurpose param_2);
void __thiscall ShipBehaviour::<>::~<>(<> *this);
void __thiscall ShipBehaviour::~ShipBehaviour(ShipBehaviour *this);
void __thiscall ShipBehaviour::configureShipDesires(ShipBehaviour *this);
void __thiscall ShipBehaviour::detectWeaponLaunch(ShipBehaviour *this,Ship *param_1,Weapon *param_2);
void __thiscall ShipBehaviour::forgetPiracyTarget(ShipBehaviour *this,Ship *param_1);
void __thiscall ShipBehaviour::runLogic(ShipBehaviour *this,float param_1);
bool __thiscall ShipBehaviour::hasSentMessageForFlag(ShipBehaviour *this,char *param_2);
void __thiscall ShipBehaviour::updateSurroundingData(ShipBehaviour *this);
void __thiscall ShipBehaviour::giveTravelTask(ShipBehaviour *this,GameObject *param_1,bool param_2);
void __thiscall ShipBehaviour::merchant_runLogic(ShipBehaviour *this,float param_1);
bool __thiscall ShipBehaviour::respondToPirateDemand(ShipBehaviour *this,Ship *param_1);
void __thiscall ShipBehaviour::general_runLogic(ShipBehaviour *this,float param_1);
void __thiscall ShipBehaviour::runGeneralDestinationLogic(ShipBehaviour *this,float param_1);
int __thiscall ShipBehaviour::getNextTubeWithValidWeapon(ShipBehaviour *this);
void __thiscall ShipBehaviour::correctWaypointsToFlyWith(ShipBehaviour *this,Ship *param_1,FollowMode param_2);
