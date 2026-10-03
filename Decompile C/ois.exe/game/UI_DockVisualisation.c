#include "../ois.exe.h"


// public: virtual void __thiscall UI_DockVisualisation::cleanupRender(void)

void __thiscall UI_DockVisualisation::cleanupRender(UI_DockVisualisation *this)

{
  if (*(int **)(this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x428) + 0x138))(1);
    *(undefined4 *)(this + 0x428) = 0;
  }
  return;
}


// public: virtual void * __thiscall UI_DockVisualisation::`vector deleting destructor'(unsigned
// int)

void * __thiscall
UI_DockVisualisation::_vector_deleting_destructor_(UI_DockVisualisation *this,uint param_1)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)(this + 0x428) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x430);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_DockVisualisation::render(void)

void __thiscall UI_DockVisualisation::render(UI_DockVisualisation *this)

{
  basic_string<> abStack_24 [16];
  undefined4 uStack_14;
  Sprite *pSStack_10;
  
  pSStack_10 = (Sprite *)0x568fef;
  (**(code **)(*(int *)this + 0x290))();
  uStack_14 = 0;
  pSStack_10 = (Sprite *)0xf;
  abStack_24[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(abStack_24,"DockingReticule.png",0x13);
  pSStack_10 = loadSprite();
  *(Sprite **)(this + 0x428) = pSStack_10;
  uStack_14 = 0x56902a;
  (**(code **)(*(int *)this + 0x10c))();
  **(undefined1 **)(this + 0x288) = 1;
  return;
}
