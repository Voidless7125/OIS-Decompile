typedef struct UI_SelectTray UI_SelectTray, *PUI_SelectTray;


struct UI_SelectTray { // PlaceHolder Class Structure
};


void * __thiscall UI_SelectTray::`vector_deleting_destructor'(UI_SelectTray *this,uint param_1);
void __thiscall UI_SelectTray::~UI_SelectTray(UI_SelectTray *this);
void __thiscall UI_SelectTray::cleanupRender(UI_SelectTray *this);
void __thiscall UI_SelectTray::render(UI_SelectTray *this);
void __thiscall UI_SelectTray::mouseMove(UI_SelectTray *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_SelectTray::mouseUp(UI_SelectTray *this,float param_2,float param_3);
void __thiscall UI_SelectTray::mouseCancel(UI_SelectTray *this);
bool __thiscall UI_SelectTray::checkButtonStates(UI_SelectTray *this,float param_2,float param_3);
