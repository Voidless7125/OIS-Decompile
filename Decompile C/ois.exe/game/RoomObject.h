typedef struct RoomObject RoomObject, *PRoomObject;


struct RoomObject { // PlaceHolder Class Structure
};


bool __thiscall RoomObject::isCharacter(RoomObject *this);
RoomObject * __thiscall RoomObject::RoomObject(RoomObject *this);
void __thiscall RoomObject::cleanupObject(RoomObject *this);
bool __thiscall RoomObject::spawnPointCheck(RoomObject *this);
void __thiscall RoomObject::updateRotationForCamera(RoomObject *this);
void __thiscall RoomObject::render(RoomObject *this,Node *param_1);
void __thiscall RoomObject::setMesh(RoomObject *this,bool param_2,Texture2D *param_3,char *param_4);
void __thiscall RoomObject::setMesh(RoomObject *this,bool param_2,void *param_3);
void __thiscall RoomObject::runAnimation(RoomObject *this);
void __thiscall RoomObject::animationDoneCallback(RoomObject *this);
void __thiscall RoomObject::switchToScreen(RoomObject *this,int param_1);
void __thiscall RoomObject::recheckValidScreens(RoomObject *this);
void __thiscall RoomObject::nextValidScreen(RoomObject *this);
void __thiscall RoomObject::renderAllScreens(RoomObject *this);
void __thiscall RoomObject::generateScreen(RoomObject *this,int param_1);
bool __thiscall RoomObject::isInteractAble(RoomObject *this);
void __thiscall RoomObject::resetScreen(RoomObject *this,bool param_1);
void __thiscall RoomObject::resetTopBars(RoomObject *this,bool param_1);
void __thiscall RoomObject::resetTopBar(RoomObject *this,bool param_1);
basic_string<> * __thiscall RoomObject::describe(RoomObject *this);
void __thiscall RoomObject::resetPosition(RoomObject *this);
void __thiscall RoomObject::movePosition(RoomObject *this);
void __thiscall RoomObject::updatePosition(RoomObject *this);
void __thiscall RoomObject::recheckTabs(RoomObject *this);
void __thiscall RoomObject::runLogic(RoomObject *this,float param_1);
void __thiscall RoomObject::clearTextureElements(RoomObject *this);
void __thiscall RoomObject::addTextureElement(RoomObject *this,undefined4 param_2,undefined4 *param_3);
Sprite * __thiscall RoomObject::getTextureElement(RoomObject *this,char *param_2);
void __thiscall RoomObject::unsetCharacter(RoomObject *this);
void __thiscall RoomObject::setCharacter(RoomObject *this,int param_2,void *param_3);
