typedef struct AIFollow AIFollow, *PAIFollow;


struct AIFollow { // PlaceHolder Class Structure
};


void * __thiscall AIFollow::`scalar_deleting_destructor'(AIFollow *this,uint param_1);
void __thiscall AIFollow::recalculateLogic(AIFollow *this);
void __thiscall AIFollow::runLogic(AIFollow *this,float param_1);
void __thiscall AIFollow::removeDesireTarget(AIFollow *this,GameObject *param_1);
void __thiscall AIFollow::enterState(AIFollow *this);
void __thiscall AIFollow::leaveState(AIFollow *this);
