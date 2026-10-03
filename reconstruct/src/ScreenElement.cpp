// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall ScreenElement::keyUp(ScreenElement *this,KeyCode param_1)
bool ScreenElement::keyUp(KeyCode param_1)

{
  return false;
}


// Ghidra: void __thiscall ScreenElement::mouseDown(void)
void ScreenElement::mouseDown()

{
  return;
}


// Ghidra: bool __thiscall ScreenElement::canDrag(ScreenElement *this)
bool ScreenElement::canDrag()

{
  return *(int *)((char *)this + 0x41c) != -1;
}


// Ghidra: int __thiscall ScreenElement::getDragID(ScreenElement *this)
int ScreenElement::getDragID()

{
  return *(int *)((char *)this + 0x41c);
}


// Ghidra: basic_string<> * __thiscall ScreenElement::getDragLook(undefined4 param_1,basic_string<> *param_2)
std::string * ScreenElement::getDragLook(undefined4 param_1, std::string * param_2)

{
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8e89;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (std::string)0x0;
  ghidra::str::assign(param_2,"",0);
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: int __thiscall ScreenElement::getDragValue(ScreenElement *this)
int ScreenElement::getDragValue()

{
  return *(int *)((char *)this + 0x420);
}


// Ghidra: void __thiscall ScreenElement::dragOnto(void)
void ScreenElement::dragOnto()

{
  return;
}


// Ghidra: ScreenElement * __thiscall ScreenElement::ScreenElement (ScreenElement *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)
ScreenElement::ScreenElement(ScreenInterface * param_1, Widget * param_2, bool * param_3)

{
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c8eb9;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  cocos2d::Node::Node((Node *)this);
  // [seh] local_8 = 0;
  *(ScreenInterface **)((char *)this + 0x278) = param_1;
  // [vtable] *(undefined ***)this = vftable;
  ((char *)this)[0x27c] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x280) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x284) = 0;
  *(bool **)((char *)this + 0x288) = param_3;
  new ((void *)((Widget *)((char *)this + 0x290))) Widget(param_2);
  *(undefined2 *)((char *)this + 0x418) = 0;
  *(undefined4 *)((char *)this + 0x41c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x420) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ScreenElement::~ScreenElement(ScreenElement *this)
ScreenElement::~ScreenElement()

{
  // [vtable] *(undefined ***)this = vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
                    // WARNING: Could not recover jumptable at 0x00555167. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::~Node((Node *)this);
  return;
}


// Ghidra: void __thiscall ScreenElement::setActive(ScreenElement *this,bool param_1)
void ScreenElement::setActive(bool param_1)

{
  undefined3 in_stack_00000005;
  
  ((char *)this)[0x27c] = (ScreenElement)param_1;
  (**(code **)(*(int *)this + 0xb4))(_param_1);
  **(undefined1 **)((char *)this + 0x288) = 1;
  return;
}


// Ghidra: bool __thiscall ScreenElement::containsPoint(ScreenElement *this)
bool ScreenElement::containsPoint()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  Rect *this_00;
  Rect local_20 [16];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c8ef2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  this_00 = (Rect *)(**(code **)(*(int *)this + 0x1b4))
                              // [cookie] (local_20,___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&stack0x00000004);
  cocos2d::Rect::~Rect(local_20);
  // [seh] ExceptionList = local_10;
  return bVar1;
}
