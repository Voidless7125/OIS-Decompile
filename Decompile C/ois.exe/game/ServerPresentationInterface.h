typedef struct ServerPresentationInterface ServerPresentationInterface, *PServerPresentationInterface;


struct ServerPresentationInterface { // PlaceHolder Structure
};


void * __thiscall ServerPresentationInterface::`scalar_deleting_destructor'(ServerPresentationInterface *this,uint param_1);
void __thiscall ServerPresentationInterface::~ServerPresentationInterface(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::renderOutlines(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::update(ServerPresentationInterface *this,float param_1);
void __thiscall ServerPresentationInterface::configureMenus(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::renderServerMenu(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::quit(ServerPresentationInterface *this,int param_1);
void __thiscall ServerPresentationInterface::forceStart(ServerPresentationInterface *this,int param_1);
void __thiscall ServerPresentationInterface::setScenario(ServerPresentationInterface *this,int param_1);
bool __thiscall ServerPresentationInterface::difficultySelected(ServerPresentationInterface *this,int param_1);
void __thiscall ServerPresentationInterface::setDifficulty(ServerPresentationInterface *this,int param_1);
