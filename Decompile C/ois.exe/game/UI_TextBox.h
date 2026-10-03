typedef struct UI_TextBox UI_TextBox, *PUI_TextBox;


struct UI_TextBox { // PlaceHolder Class Structure
};


void * __thiscall UI_TextBox::`scalar_deleting_destructor'(UI_TextBox *this,uint param_1);
void __thiscall UI_TextBox::cleanupRender(UI_TextBox *this);
void __thiscall UI_TextBox::render(UI_TextBox *this);
void __thiscall UI_TextBox::specialDataCheckFunction(UI_TextBox *this,float param_1);
void __thiscall UI_TextBox::giveFocus(UI_TextBox *this);
void __thiscall UI_TextBox::loseFocus(UI_TextBox *this);
bool __thiscall UI_TextBox::keyDown(UI_TextBox *this,KeyCode param_1);
bool __thiscall UI_TextBox::keyUp(UI_TextBox *this,KeyCode param_1);
