#include "../ois.exe.h"


// public: virtual void * __thiscall UI_Border::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_Border::_scalar_deleting_destructor_(UI_Border *this,uint param_1)

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


// public: virtual void __thiscall UI_Border::render(void)

void __thiscall UI_Border::render(UI_Border *this)

{
  int iVar1;
  basic_string<> *pbVar2;
  Scale9Sprite *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca0f1;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))(local_14);
  pbVar2 = (basic_string<> *)
           strUsingArgs((char *)local_2c,"%c_Border.png",(int)(char)g_gameData[0xd4]);
  local_8 = 0;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  *(Scale9Sprite **)(this + 0x428) = pSVar3;
  if (0xf < local_18) {
    pnVar6 = (nothrow_t *)(local_18 + 1);
    pvVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      pnVar6 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  local_34 = 0;
  local_30 = 0;
  local_8 = 1;
  (**(code **)(**(int **)(this + 0x428) + 0xa0))(&local_34);
  local_8 = 0xffffffff;
  iVar1 = **(int **)(this + 0x428);
  uVar4 = cocos2d::Size::Size((Size *)&local_34,(float)*(int *)(this + 0x2a0),
                              (float)*(int *)(this + 0x2a4));
  (**(code **)(iVar1 + 0xac))(uVar4);
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)(this + 0x428));
  **(undefined1 **)(this + 0x288) = 1;
  iVar1 = *(int *)this;
  uVar4 = (**(code **)(**(int **)(this + 0x428) + 0xb0))();
  (**(code **)(iVar1 + 0xac))(uVar4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
