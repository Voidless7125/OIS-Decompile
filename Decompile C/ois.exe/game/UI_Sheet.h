typedef struct UI_Sheet UI_Sheet, *PUI_Sheet;


struct UI_Sheet { // PlaceHolder Class Structure
};


void __thiscall UI_Sheet::mouseCancel(UI_Sheet *this);
void __thiscall UI_Sheet::UI_Sheet(UI_Sheet *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_Sheet::`scalar_deleting_destructor'(UI_Sheet *this,uint param_1);
void __thiscall UI_Sheet::~UI_Sheet(UI_Sheet *this);
void __thiscall UI_Sheet::cleanupRender(UI_Sheet *this);
void __thiscall UI_Sheet::render(UI_Sheet *this);
void __thiscall UI_Sheet::specialDataCheckFunction(UI_Sheet *this,float param_1);
void __thiscall UI_Sheet::mouseMove(UI_Sheet *this,float param_2,float param_3);
void __thiscall UI_Sheet::mouseUp(UI_Sheet *this,float param_2,float param_3);
bool __thiscall UI_Sheet::keyUp(UI_Sheet *this,KeyCode param_1);
