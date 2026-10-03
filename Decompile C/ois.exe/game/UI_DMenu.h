typedef struct UI_DMenu UI_DMenu, *PUI_DMenu;


struct UI_DMenu { // PlaceHolder Class Structure
};


void __thiscall UI_DMenu::UI_DMenu(UI_DMenu *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_DMenu::`vector_deleting_destructor'(UI_DMenu *this,uint param_1);
void __thiscall UI_DMenu::~UI_DMenu(UI_DMenu *this);
void __thiscall UI_DMenu::cleanupRender(UI_DMenu *this);
void __thiscall UI_DMenu::render(UI_DMenu *this);
bool __thiscall UI_DMenu::updatePressedButton(UI_DMenu *this,float param_2,float param_3);
void __thiscall UI_DMenu::specialDataCheckFunction(UI_DMenu *this,float param_1);
void __thiscall UI_DMenu::mouseMove(UI_DMenu *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_DMenu::mouseUp(UI_DMenu *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_DMenu::mouseHoverCancel(UI_DMenu *this);
