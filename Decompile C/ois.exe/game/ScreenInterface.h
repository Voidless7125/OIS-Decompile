typedef struct ScreenInterface ScreenInterface, *PScreenInterface;


struct ScreenInterface { // PlaceHolder Structure
};


ScreenInterface * __thiscall ScreenInterface::ScreenInterface(ScreenInterface *this,RoomObject *param_1,ScreenType param_2,bool param_3,Sprite3D *param_4,int param_5,int param_6,ScreenLayout *param_7);
void __thiscall ScreenInterface::~ScreenInterface(ScreenInterface *this);
void __thiscall ScreenInterface::setToolTip(ScreenInterface *this,basic_string<> *param_2);
void __thiscall ScreenInterface::clearToolTip(ScreenInterface *this);
void __thiscall ScreenInterface::cleanupScreen(ScreenInterface *this);
void __thiscall ScreenInterface::setMouseCursor(ScreenInterface *this,basic_string<> *param_2);
void __thiscall ScreenInterface::setMouseOverlay(ScreenInterface *this,void *param_2);
void __thiscall ScreenInterface::updateMouseCursor(ScreenInterface *this);
void __thiscall ScreenInterface::onMouseMove(ScreenInterface *this,float param_2,float param_3);
void __thiscall ScreenInterface::onMouseUp(ScreenInterface *this,float param_2,float param_3);
void __thiscall ScreenInterface::onMouseDown(ScreenInterface *this,float param_2,float param_3);
void __thiscall ScreenInterface::updateMousePosition(ScreenInterface *this,bool param_1,bool param_2);
ScreenElement * __thiscall ScreenInterface::getElementAtPosition(ScreenInterface *this,undefined4 param_2,undefined4 param_3);
void __thiscall ScreenInterface::update(ScreenInterface *this,float param_1,bool param_2);
