typedef struct UI_Menu UI_Menu, *PUI_Menu;


struct UI_Menu { // PlaceHolder Class Structure
};


UI_Menu * __thiscall UI_Menu::UI_Menu(UI_Menu *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_Menu::`scalar_deleting_destructor'(UI_Menu *this,uint param_1);
void __thiscall UI_Menu::~UI_Menu(UI_Menu *this);
void __thiscall UI_Menu::cleanupRender(UI_Menu *this);
bool __thiscall UI_Menu::recheckButtonPressed(UI_Menu *this,float param_2,float param_3);
void __thiscall UI_Menu::render(UI_Menu *this);
void __thiscall UI_Menu::specialDataCheckFunction(UI_Menu *this,float param_1);
void __thiscall UI_Menu::mouseMove(UI_Menu *this,undefined4 param_2,float param_3);
void __thiscall UI_Menu::mouseUp(UI_Menu *this,undefined4 param_2,float param_3);
void __thiscall UI_Menu::mouseHoverCancel(UI_Menu *this);
bool __thiscall UI_Menu::triggerButton(UI_Menu *this,ButtonElement *param_1);
void __thiscall UI_Menu::runTrigger(UI_Menu *this,void *param_2);
void __thiscall UI_Menu::clearMenu(UI_Menu *this);
void __thiscall UI_Menu::removeButtonData(UI_Menu *this);
void __thiscall UI_Menu::changedMenu(UI_Menu *this);
bool __thiscall UI_Menu::canNext(UI_Menu *this);
void __thiscall UI_Menu::updateButtonSelected(UI_Menu *this);
void __thiscall UI_Menu::performPrev(UI_Menu *this);
void __thiscall UI_Menu::performNext(UI_Menu *this);
bool __thiscall UI_Menu::keyDown(UI_Menu *this,KeyCode param_1);
bool __thiscall UI_Menu::keyUp(UI_Menu *this,KeyCode param_1);
bool __thiscall UI_Menu::containsPoint(UI_Menu *this,undefined4 param_2,undefined4 param_3);
