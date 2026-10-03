typedef struct Faction Faction, *PFaction;


struct Faction { // PlaceHolder Structure
};


void __thiscall Faction::~Faction(Faction *this);
void __thiscall Faction::getAccess(Faction *this);
bool __thiscall Faction::officeAtLocation(Faction *this,char *param_2);
void __thiscall Faction::modifyState(Faction *this,int param_1);
int __thiscall Faction::getCurrentTier(Faction *this);
int __thiscall Faction::amountCanBorrow(Faction *this);
void __thiscall Faction::runDayEndLogic(Faction *this);
void __thiscall Faction::repay(Faction *this,int param_1);
