typedef struct AIAttack AIAttack, *PAIAttack;


struct AIAttack { // PlaceHolder Class Structure
};


void __thiscall AIAttack::recalculateLogic(AIAttack *this);
void __thiscall AIAttack::runLogic(AIAttack *this,float param_1);
void __thiscall AIAttack::enterState(AIAttack *this);
void __thiscall AIAttack::leaveState(AIAttack *this);
AIAttack * __thiscall AIAttack::AIAttack(AIAttack *this,Ship *param_1);
