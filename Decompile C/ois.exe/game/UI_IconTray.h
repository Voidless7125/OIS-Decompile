typedef struct UI_IconTray UI_IconTray, *PUI_IconTray;


struct UI_IconTray { // PlaceHolder Class Structure
};


void __thiscall UI_IconTray::UI_IconTray(UI_IconTray *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_IconTray::`scalar_deleting_destructor'(UI_IconTray *this,uint param_1);
void __thiscall UI_IconTray::~UI_IconTray(UI_IconTray *this);
void __thiscall UI_IconTray::cleanupRender(UI_IconTray *this);
void __thiscall UI_IconTray::render(UI_IconTray *this);
void __thiscall UI_IconTray::specialDataCheckFunction(UI_IconTray *this,float param_1);
void __thiscall UI_IconTray::mouseHoverUpdate(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_IconTray::mouseHoverCancel(UI_IconTray *this);
void __thiscall UI_IconTray::mouseMove(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_IconTray::mouseUp(UI_IconTray *this,float param_2,float param_3);
bool __thiscall UI_IconTray::canNext(UI_IconTray *this);
basic_string<> * __thiscall UI_IconTray::getDragLook(UI_IconTray *this,basic_string<> *param_2,float param_3,float param_4);
int __thiscall UI_IconTray::getDragValue(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_IconTray::dragOnto(UI_IconTray *this,undefined4 param_1,int param_2,float param_4,float param_5);
