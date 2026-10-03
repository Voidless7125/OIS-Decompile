typedef struct NameManager NameManager, *PNameManager;


struct NameManager { // PlaceHolder Structure
};


void __thiscall NameManager::loadNames(NameManager *this);
void __thiscall NameManager::generateFreighterName(NameManager *this);
void __thiscall NameManager::generatePirateName(NameManager *this);
void __thiscall NameManager::generatePoliceName(NameManager *this);
void __thiscall NameManager::loadLinesFromFile(undefined4 param_1,undefined4 *param_2,void *param_3);
void __thiscall NameManager::generateBuyableName(NameManager *this);
void __thiscall NameManager::addRego(NameManager *this,void *param_2);
void __thiscall NameManager::generateGeneralRego(NameManager *this);
void __thiscall NameManager::getLocationForRego(undefined4 param_1,basic_string<> *param_2,char *param_3);
void __thiscall NameManager::generatePoliceRego(NameManager *this);
bool __thiscall NameManager::regoExists(NameManager *this,char *param_2);
