typedef struct PresentationInterface PresentationInterface, *PPresentationInterface;


struct PresentationInterface { // PlaceHolder Structure
};


Node * __thiscall PresentationInterface::PresentationInterface(PresentationInterface *this);
void * __thiscall PresentationInterface::`scalar_deleting_destructor'(PresentationInterface *this,uint param_1);
void __thiscall PresentationInterface::~PresentationInterface(PresentationInterface *this);
void __thiscall PresentationInterface::configureSoundForShip(PresentationInterface *this);
void __thiscall PresentationInterface::runFullFadeLogic(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::update(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::boardDockedVessel(PresentationInterface *this,Ship *param_1);
void __thiscall PresentationInterface::leaveDockedVessel(PresentationInterface *this,Ship *param_1);
void __thiscall PresentationInterface::boardMooredStructure(PresentationInterface *this,Ship *param_1);
void __thiscall PresentationInterface::setAirlockStates(PresentationInterface *this,Ship *param_1,bool param_2);
void __thiscall PresentationInterface::changeRoom(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::cleanupCurrentRoom(PresentationInterface *this);
void __thiscall PresentationInterface::showRoom(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::onKeyPressed(PresentationInterface *this,KeyCode param_1,Event *param_2);
void __thiscall PresentationInterface::switchToConsoleID(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::quitToMenu(PresentationInterface *this);
void __thiscall PresentationInterface::onKeyReleased(PresentationInterface *this,KeyCode param_1,Event *param_2);
void __thiscall PresentationInterface::resetSpaceStationScreens(PresentationInterface *this);
bool __thiscall PresentationInterface::tabletActive(PresentationInterface *this);
void __thiscall PresentationInterface::showTablet(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::setTabletScreen(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::hideTablet(PresentationInterface *this,bool param_1);
void __thiscall PresentationInterface::hideTabletInstantly(PresentationInterface *this);
void __thiscall PresentationInterface::switchToPComms(PresentationInterface *this);
void __thiscall PresentationInterface::setMessageFocus(PresentationInterface *this,RoomObject *param_1);
void __thiscall PresentationInterface::switchToHelmControlAfterUndocking(PresentationInterface *this);
void __thiscall PresentationInterface::moveToRTCommsStation(PresentationInterface *this);
char __thiscall PresentationInterface::keycodeToChar(PresentationInterface *this,KeyCode param_1,bool param_2,bool param_3);
void __thiscall PresentationInterface::eventLocationToLocation(PresentationInterface *this,EventMouse *param_1);
void __thiscall PresentationInterface::onMouseMove(PresentationInterface *this,Event *param_1);
void __thiscall PresentationInterface::onMouseUp(PresentationInterface *this,Event *param_1);
void __thiscall PresentationInterface::onMouseDown(PresentationInterface *this,Event *param_1);
void __thiscall PresentationInterface::onMouseScroll(PresentationInterface *this,Event *param_1);
bool __cdecl PresentationInterface::doToggleRoomObject(Ship *param_1,double param_2,double param_3,double param_4);
void __thiscall PresentationInterface::moveToCameraPos(PresentationInterface *this,int param_1,float param_2);
basic_string<> * __thiscall PresentationInterface::getConsoleToDamage(PresentationInterface *this);
void __thiscall PresentationInterface::addShake(PresentationInterface *this,char *param_2);
void __thiscall PresentationInterface::switchJumpMode(PresentationInterface *this,bool param_1);
void __thiscall PresentationInterface::switchEmconMode(PresentationInterface *this,bool param_1);
void __thiscall PresentationInterface::runCameraLogic(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::runLightLogic(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::giveEmoteToCharacter(PresentationInterface *this,char *param_2);
bool __thiscall PresentationInterface::talkToCharacter(PresentationInterface *this,undefined4 param_2,char *param_3);
void __thiscall PresentationInterface::flicker(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::exitGame(PresentationInterface *this);
bool __thiscall PresentationInterface::hasForcedConversationPending(PresentationInterface *this);
void __thiscall PresentationInterface::`vcall'{776,{flat}}'_}'(PresentationInterface *this);
void __thiscall PresentationInterface::`vcall'{780,{flat}}'_}'(PresentationInterface *this);
