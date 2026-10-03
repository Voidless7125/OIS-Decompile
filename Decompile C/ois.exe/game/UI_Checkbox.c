#include "../ois.exe.h"


// public: virtual void * __thiscall UI_Checkbox::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_Checkbox::_scalar_deleting_destructor_(UI_Checkbox *this,uint param_1)

{
  UI_Checkbox *pUVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ca220;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x428) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x428) = 0;
  }
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1);
    *(undefined4 *)(this + 0x42c) = 0;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  pUVar1 = *(UI_Checkbox **)(this + 0x45c);
  if (pUVar1 != (UI_Checkbox *)0x0) {
    (**(code **)(*(int *)pUVar1 + 0x10))(pUVar1 != this + 0x438);
    *(undefined4 *)(this + 0x45c) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x460);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_Checkbox::cleanupRender(void)

void __thiscall UI_Checkbox::cleanupRender(UI_Checkbox *this)

{
  if (*(int **)(this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x428) + 0x138))(1);
    *(undefined4 *)(this + 0x428) = 0;
  }
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1);
    *(undefined4 *)(this + 0x42c) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_Checkbox::render(void)

void __thiscall UI_Checkbox::render(UI_Checkbox *this)

{
  int iVar1;
  Sprite *pSVar2;
  UI_Checkbox *pUVar3;
  UIText *pUVar4;
  char *pcVar5;
  char cVar6;
  Size local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca249;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  if (this[0x27c] == (UI_Checkbox)0x0) {
    pcVar5 = "%c_Checkbox_Greyed.png";
  }
  else {
    pcVar5 = "%c_Checkbox_Filled.png";
    if (**(char **)(this + 0x434) == '\0') {
      pcVar5 = "%c_Checkbox.png";
    }
  }
  strUsingArgs(&stack0xffffffb8,pcVar5);
  pSVar2 = loadSprite();
  *(Sprite **)(this + 0x428) = pSVar2;
  (**(code **)(*(int *)this + 0x10c))();
  cVar6 = '8';
  if (this[0x27c] != (UI_Checkbox)0x0) {
    if (**(char **)(this + 0x434) == '\0') {
      cVar6 = *(char *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd4);
    }
    else {
      cVar6 = *(char *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd5);
    }
  }
  pUVar3 = this + 0x2ac;
  if (0xf < *(uint *)(this + 0x2c0)) {
    pUVar3 = *(UI_Checkbox **)pUVar3;
  }
  strUsingArgs(&stack0xffffffb4,"`%c%s",(int)cVar6,pUVar3);
  pUVar4 = UIText::create();
  *(UIText **)(this + 0x42c) = pUVar4;
  local_18 = 0;
  local_14 = 0x3f000000;
  local_8 = 0;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  local_8 = 0xffffffff;
  iVar1 = **(int **)(this + 0x42c);
  (**(code **)(**(int **)(this + 0x428) + 0xb0))();
  (**(code **)(iVar1 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  cocos2d::Size::Size(local_20,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4));
  (**(code **)(iVar1 + 0xac))();
  this[0x431] = this[0x27c];
  this[0x430] = **(UI_Checkbox **)(this + 0x434);
  **(undefined1 **)(this + 0x288) = 1;
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Checkbox::specialDataCheckFunction(float)

void __thiscall UI_Checkbox::specialDataCheckFunction(UI_Checkbox *this,float param_1)

{
  if ((this[0x27c] != this[0x431]) || (this[0x430] != **(UI_Checkbox **)(this + 0x434))) {
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual void __thiscall UI_Checkbox::mouseUp(class cocos2d::Vec2)

void __thiscall UI_Checkbox::mouseUp(UI_Checkbox *this)

{
  ShipDataInputType SVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c91f9;
  local_10 = ExceptionList;
  SVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  **(char **)(this + 0x434) = **(char **)(this + 0x434) == '\0';
  (**(code **)(*(int *)this + 0x294))();
  runDataInputSync(SVar1);
  ExceptionList = local_10;
  return;
}
