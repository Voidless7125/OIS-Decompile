typedef struct AIPatrol AIPatrol, *PAIPatrol;


struct AIPatrol { // PlaceHolder Class Structure
};


void __thiscall AIPatrol::doneAtLocation(AIPatrol *this);
void __thiscall AIPatrol::enterState(AIPatrol *this);
void __thiscall AIPatrol::leaveState(AIPatrol *this);
void __thiscall AIPatrol::runLogic(AIPatrol *this,float param_1);
void __thiscall AIPatrol::runZoneBreachLogic(AIPatrol *this,float param_1);
void __thiscall AIPatrol::removeDesireTarget(AIPatrol *this,GameObject *param_1);
bool __thiscall AIPatrol::hasBeenWarned(AIPatrol *this,void *param_2);
void __thiscall AIPatrol::vesselFailedHackingMe(AIPatrol *this,Ship *param_1);
void __thiscall AIPatrol::vesselHackedMe(AIPatrol *this,Ship *param_1);
