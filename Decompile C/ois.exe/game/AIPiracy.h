typedef struct AIPiracy AIPiracy, *PAIPiracy;


struct AIPiracy { // PlaceHolder Class Structure
};


int __thiscall AIPiracy::shipWeight(AIPiracy *this,SensorData *param_1);
void __thiscall AIPiracy::ignoreVessel(AIPiracy *this,void *param_2);
void __thiscall AIPiracy::recalculateLogic(AIPiracy *this);
void __thiscall AIPiracy::runLogic(AIPiracy *this,float param_1);
void __thiscall AIPiracy::enterState(AIPiracy *this);
void __thiscall AIPiracy::leaveState(AIPiracy *this);
void __thiscall AIPiracy::runApproachTargetLogic(AIPiracy *this,float param_1);
void __thiscall AIPiracy::removeDesireTarget(AIPiracy *this,GameObject *param_1);
void __thiscall AIPiracy::removeSensorObject(AIPiracy *this,SensorData *param_1);
char * __thiscall AIPiracy::describe(AIPiracy *this);
void * __thiscall AIPiracy::`vector_deleting_destructor'(AIPiracy *this,uint param_1);
