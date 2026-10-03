#include "../ois.exe.h"


// public: virtual bool __thiscall ScreenElement::keyUp(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall ScreenElement::keyUp(ScreenElement *this,KeyCode param_1)

{
  return false;
}


// public: virtual void __thiscall ScreenElement::mouseDown(class cocos2d::Vec2)

void __thiscall ScreenElement::mouseDown(void)

{
  return;
}


// public: virtual bool __thiscall ScreenElement::canDrag(void)

bool __thiscall ScreenElement::canDrag(ScreenElement *this)

{
  return *(int *)(this + 0x41c) != -1;
}


// public: virtual int __thiscall ScreenElement::getDragID(void)

int __thiscall ScreenElement::getDragID(ScreenElement *this)

{
  return *(int *)(this + 0x41c);
}


// public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __thiscall ScreenElement::getDragLook(class cocos2d::Vec2)

basic_string<> * __thiscall ScreenElement::getDragLook(undefined4 param_1,basic_string<> *param_2)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8e89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (basic_string<>)0x0;
  std::basic_string<>::assign(param_2,"",0);
  ExceptionList = local_10;
  return param_2;
}


// public: virtual int __thiscall ScreenElement::getDragValue(class cocos2d::Vec2)

int __thiscall ScreenElement::getDragValue(ScreenElement *this)

{
  return *(int *)(this + 0x420);
}


// public: virtual void __thiscall ScreenElement::dragOnto(int,int,class cocos2d::Vec2)

void __thiscall ScreenElement::dragOnto(void)

{
  return;
}


// public: __thiscall ScreenElement::ScreenElement(class ScreenInterface *,class Widget &,bool *)

ScreenElement * __thiscall
ScreenElement::ScreenElement
          (ScreenElement *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8eb9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cocos2d::Node::Node((Node *)this);
  local_8 = 0;
  *(ScreenInterface **)(this + 0x278) = param_1;
  *(undefined ***)this = vftable;
  this[0x27c] = (ScreenElement)0x1;
  *(undefined4 *)(this + 0x280) = 0xffffffff;
  *(undefined4 *)(this + 0x284) = 0;
  *(bool **)(this + 0x288) = param_3;
  Widget::Widget((Widget *)(this + 0x290),param_2);
  *(undefined2 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x41c) = 0xffffffff;
  *(undefined4 *)(this + 0x420) = 0;
  ExceptionList = local_10;
  return this;
}


// public: virtual void * __thiscall ScreenElement::`vector deleting destructor'(unsigned int)

void * __thiscall ScreenElement::_vector_deleting_destructor_(ScreenElement *this,uint param_1)

{
  *(undefined ***)this = vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x428);
  }
  return this;
}


// public: virtual __thiscall ScreenElement::~ScreenElement(void)

void __thiscall ScreenElement::~ScreenElement(ScreenElement *this)

{
  *(undefined ***)this = vftable;
  Widget::~Widget((Widget *)(this + 0x290));
                    // WARNING: Could not recover jumptable at 0x00555167. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::~Node((Node *)this);
  return;
}


// public: virtual void __thiscall ScreenElement::setActive(bool)

void __thiscall ScreenElement::setActive(ScreenElement *this,bool param_1)

{
  undefined3 in_stack_00000005;
  
  this[0x27c] = (ScreenElement)param_1;
  (**(code **)(*(int *)this + 0xb4))(_param_1);
  **(undefined1 **)(this + 0x288) = 1;
  return;
}


// public: virtual bool __thiscall ScreenElement::containsPoint(class cocos2d::Vec2)

bool __thiscall ScreenElement::containsPoint(ScreenElement *this)

{
  bool bVar1;
  Rect *this_00;
  Rect local_20 [16];
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8ef2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this_00 = (Rect *)(**(code **)(*(int *)this + 0x1b4))
                              (local_20,___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&stack0x00000004);
  cocos2d::Rect::~Rect(local_20);
  ExceptionList = local_10;
  return bVar1;
}
