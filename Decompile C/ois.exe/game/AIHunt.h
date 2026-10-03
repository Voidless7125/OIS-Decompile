typedef struct AIHunt AIHunt, *PAIHunt;


struct AIHunt { // PlaceHolder Class Structure
};


void __thiscall AIHunt::recalculateLogic(AIHunt *this);
void __thiscall AIHunt::enterState(AIHunt *this);
void __thiscall AIHunt::hitTravelLocation(AIHunt *this);
void __thiscall AIHunt::doneAtLocation(AIHunt *this);
void __thiscall AIHunt::runTravelLogic(AIHunt *this,float param_1);
void __thiscall AIHunt::runLurkLogic(AIHunt *this,float param_1);
void __thiscall AIHunt::runLogic(AIHunt *this,float param_1);
void * __thiscall AIHunt::`vector_deleting_destructor'(AIHunt *this,uint param_1);
