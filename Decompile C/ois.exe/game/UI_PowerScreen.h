typedef struct UI_PowerScreen UI_PowerScreen, *PUI_PowerScreen;


struct UI_PowerScreen { // PlaceHolder Class Structure
};


void * __thiscall UI_PowerScreen::`vector_deleting_destructor'(UI_PowerScreen *this,uint param_1);
void __thiscall UI_PowerScreen::~UI_PowerScreen(UI_PowerScreen *this);
void __thiscall UI_PowerScreen::cleanupRender(UI_PowerScreen *this);
void __thiscall UI_PowerScreen::render(UI_PowerScreen *this);
void __thiscall UI_PowerScreen::renderModule(UI_PowerScreen *this,ShipModule *param_1,int param_2,int param_3);
void __thiscall UI_PowerScreen::updateRender(UI_PowerScreen *this);
bool __thiscall UI_PowerScreen::updateEmissionState(UI_PowerScreen *this,Sprite *param_1,ShipModule *param_2);
void __thiscall UI_PowerScreen::specialDataCheckFunction(UI_PowerScreen *this,float param_1);
void __thiscall UI_PowerScreen::mouseUp(UI_PowerScreen *this,float param_2,float param_3);
void __thiscall UI_PowerScreen::mouseHoverUpdate(UI_PowerScreen *this,float param_2,float param_3);
Sprite * __thiscall UI_PowerScreen::renderEmcon(UI_PowerScreen *this,bool param_1);
