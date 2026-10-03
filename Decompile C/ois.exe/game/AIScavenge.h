typedef struct AIScavenge AIScavenge, *PAIScavenge;


struct AIScavenge { // PlaceHolder Class Structure
};


void __thiscall AIScavenge::recalculateLogic(AIScavenge *this);
void __thiscall AIScavenge::enterState(AIScavenge *this);
void __thiscall AIScavenge::leaveState(AIScavenge *this);
void __thiscall AIScavenge::runLogic(AIScavenge *this,float param_1);
void __thiscall AIScavenge::removeDesireTarget(AIScavenge *this,GameObject *param_1);
void * __thiscall AIScavenge::`vector_deleting_destructor'(AIScavenge *this,uint param_1);
