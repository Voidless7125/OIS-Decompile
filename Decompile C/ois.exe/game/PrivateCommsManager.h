typedef struct PrivateCommsManager PrivateCommsManager, *PPrivateCommsManager;


struct PrivateCommsManager { // PlaceHolder Structure
};


void __thiscall PrivateCommsManager::reset(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::keyPressed(PrivateCommsManager *this,KeyCode param_1);
int __thiscall PrivateCommsManager::firstValidConversationOption(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::activateCurrentConversationElement(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::switchTo(PrivateCommsManager *this,int param_1);
void __thiscall PrivateCommsManager::cancelCurrentHail(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::goBackToList(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::runSecureSpaceStationBBSLogic(PrivateCommsManager *this,float param_1);
bool __thiscall PrivateCommsManager::runSecureShipHailLogic(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::runLogic(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::renderConversation(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::renderComm(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::addGarbageChar(PrivateCommsManager *this,char param_1);
void __thiscall PrivateCommsManager::render(PrivateCommsManager *this,bool param_1,bool param_2);
void __thiscall PrivateCommsManager::renderList(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::renderCurrentConversationElement(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::hasValidOptionInCurrentElement(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::regenerateList(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::generateSpaceStationComms(PrivateCommsManager *this,PrivateComm *param_1,SpaceStation *param_2);
void __thiscall PrivateCommsManager::generateShipComms(PrivateCommsManager *this,Ship *param_1);
