#include "../ois.exe.h"


// public: virtual void __thiscall UI_Text::setValue(double)

void __thiscall UI_Text::setValue(UI_Text *this,double param_1)

{
  *(double *)(this + 0x468) = param_1;
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// public: virtual void * __thiscall UI_Text::`vector deleting destructor'(unsigned int)

void * __thiscall UI_Text::_vector_deleting_destructor_(UI_Text *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x470) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x470) = 0;
  }
  uVar2 = *(uint *)(this + 0x460);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x44c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0058dbf7;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x45c) = 0;
  *(undefined4 *)(this + 0x460) = 0xf;
  this[0x44c] = (UI_Text)0x0;
  uVar2 = *(uint *)(this + 0x448);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x434);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0058dbf7:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x444) = 0;
  *(undefined4 *)(this + 0x448) = 0xf;
  this[0x434] = (UI_Text)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x478);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_Text::cleanupRender(void)

void __thiscall UI_Text::cleanupRender(UI_Text *this)

{
  if (*(int **)(this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x470) + 0x138))(1);
    *(undefined4 *)(this + 0x470) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_Text::render(void)

void __thiscall UI_Text::render(UI_Text *this)

{
  int iVar1;
  word *pwVar2;
  UIText *pUVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc781;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  std::basic_string<>::basic_string<>((basic_string<> *)&local_2c,(basic_string<> *)(this + 0x434));
  local_8 = 0;
  if (this[0x428] == (UI_Text)0x0) {
    pwVar2 = (word *)strUsingArgs((char *)local_44);
    if ((word *)&local_2c != pwVar2) {
      word::~word((word *)&local_2c);
      local_2c = *(void **)pwVar2;
      uStack_28 = *(undefined4 *)(pwVar2 + 4);
      uStack_24 = *(undefined4 *)(pwVar2 + 8);
      uStack_20 = *(undefined4 *)(pwVar2 + 0xc);
      local_1c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff90,(basic_string<> *)&local_2c);
  pUVar3 = UIText::create(0);
  *(UIText **)(this + 0x470) = pUVar3;
  local_8._0_1_ = 1;
  (**(code **)(*(int *)pUVar3 + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(this + 0x470) + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  (**(code **)(**(int **)(this + 0x470) + 0xb0))();
  (**(code **)(iVar1 + 0xac))();
  **(undefined1 **)(this + 0x288) = 1;
  if (0xf < local_1c._4_4_) {
    pnVar5 = (nothrow_t *)(local_1c._4_4_ + 1);
    pvVar4 = local_2c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c + -4);
      pnVar5 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
