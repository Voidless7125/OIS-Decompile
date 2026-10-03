typedef struct UI_TextField UI_TextField, *PUI_TextField;


struct UI_TextField { // PlaceHolder Class Structure
};


void __thiscall UI_TextField::cleanup(UI_TextField *this);
void __thiscall UI_TextField::UI_TextField(UI_TextField *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_TextField::`vector_deleting_destructor'(UI_TextField *this,uint param_1);
void __thiscall UI_TextField::~UI_TextField(UI_TextField *this);
void __thiscall UI_TextField::cleanupRender(UI_TextField *this);
void __thiscall UI_TextField::render(UI_TextField *this);
void __thiscall UI_TextField::specialDataCheckFunction(UI_TextField *this,float param_1);
void __thiscall UI_TextField::mouseDown(UI_TextField *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_TextField::mouseUp(UI_TextField *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_TextField::mouseCancel(UI_TextField *this);
void __thiscall UI_TextField::resetButtonsValid(UI_TextField *this);
void __thiscall UI_TextField::updatePressedStates(UI_TextField *this,float param_2,float param_3);
