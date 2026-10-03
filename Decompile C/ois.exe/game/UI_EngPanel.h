typedef struct UI_EngPanel UI_EngPanel, *PUI_EngPanel;


struct UI_EngPanel { // PlaceHolder Class Structure
};


void * __thiscall UI_EngPanel::`scalar_deleting_destructor'(UI_EngPanel *this,uint param_1);
void __thiscall UI_EngPanel::~UI_EngPanel(UI_EngPanel *this);
void __thiscall UI_EngPanel::cleanupRender(UI_EngPanel *this);
bool __thiscall UI_EngPanel::keyUp(UI_EngPanel *this,KeyCode param_1);
void __thiscall UI_EngPanel::render(UI_EngPanel *this);
void __thiscall UI_EngPanel::mouseUp(UI_EngPanel *this,float param_2,float param_3);
void __thiscall UI_EngPanel::mouseHoverUpdate(UI_EngPanel *this,float param_2,float param_3);
void __thiscall UI_EngPanel::specialDataCheckFunction(UI_EngPanel *this,float param_1);
basic_string<> * __thiscall UI_EngPanel::getDragLook(UI_EngPanel *this,basic_string<> *param_2,float param_3,float param_4);
int __thiscall UI_EngPanel::getDragValue(UI_EngPanel *this,float param_2,float param_3);
void __thiscall UI_EngPanel::dragOnto(UI_EngPanel *this,int param_1,int param_2,float param_4,float param_5);
