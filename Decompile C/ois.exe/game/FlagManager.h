typedef struct FlagManager FlagManager, *PFlagManager;


struct FlagManager { // PlaceHolder Structure
};


void __thiscall FlagManager::setFlag(FlagManager *this,char *param_2);
bool __thiscall FlagManager::flagSet(FlagManager *this,void *param_2);
void __thiscall FlagManager::reset(FlagManager *this);
void __thiscall FlagManager::runFlagLogic(FlagManager *this,float param_1,FlagTimeToSet *param_2);
void __thiscall FlagManager::runLogic(FlagManager *this,float param_1);
FlagTimeToSet * __thiscall FlagManager::addFlagToSet(FlagManager *this);
