typedef struct ScreenElement ScreenElement, *PScreenElement;


struct ScreenElement { // PlaceHolder Class Structure
};


bool __thiscall ScreenElement::keyUp(ScreenElement *this,KeyCode param_1);
void __thiscall ScreenElement::mouseDown(void);
bool __thiscall ScreenElement::canDrag(ScreenElement *this);
int __thiscall ScreenElement::getDragID(ScreenElement *this);
basic_string<> * __thiscall ScreenElement::getDragLook(undefined4 param_1,basic_string<> *param_2);
int __thiscall ScreenElement::getDragValue(ScreenElement *this);
void __thiscall ScreenElement::dragOnto(void);
ScreenElement * __thiscall ScreenElement::ScreenElement(ScreenElement *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall ScreenElement::`vector_deleting_destructor'(ScreenElement *this,uint param_1);
void __thiscall ScreenElement::~ScreenElement(ScreenElement *this);
void __thiscall ScreenElement::setActive(ScreenElement *this,bool param_1);
bool __thiscall ScreenElement::containsPoint(ScreenElement *this);
