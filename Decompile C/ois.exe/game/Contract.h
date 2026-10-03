typedef struct Contract Contract, *PContract;


struct Contract { // PlaceHolder Structure
};


void * __thiscall Contract::`scalar_deleting_destructor'(Contract *this,uint param_1);
int __thiscall Contract::hoursLeft(Contract *this);
void __thiscall Contract::describeThreeLines(Contract *this,bool param_1,bool param_2);
void __thiscall Contract::describeShort(Contract *this);
void __thiscall Contract::describeShortToVector(Contract *this);
void __thiscall Contract::performContractCompletion(Contract *this);
void __thiscall Contract::performContractFailure(Contract *this);
