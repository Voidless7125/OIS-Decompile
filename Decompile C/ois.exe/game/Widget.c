#include "../ois.exe.h"


// public: __thiscall Widget::Widget(void)

Widget * __thiscall Widget::Widget(Widget *this)

{
  _Tree_node<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b5397;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 4) = 0;
  this[0x18] = (Widget)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (Widget)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xf;
  this[0x34] = (Widget)0x0;
  this[0x4c] = (Widget)0x0;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined2 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0xf;
  this[0xb8] = (Widget)0x0;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0xf8] = (Widget)0x0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  local_8 = 7;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 99;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0x43;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode((_Tree_comp_alloc<> *)this);
  *(_Tree_node<> **)(this + 0x168) = p_Var1;
  this[0x170] = (Widget)0x0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  ExceptionList = local_10;
  return this;
}


// public: __thiscall Widget::~Widget(void)

void __thiscall Widget::~Widget(Widget *this)

{
  Widget *pWVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  Widget *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b8080;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = this;
  std::_Tree<>::erase((_Tree<> *)(this + 0x168),&local_14,**(undefined4 **)(this + 0x168),
                      *(undefined4 **)(this + 0x168));
  operator_delete(*(void **)(this + 0x168),(nothrow_t *)&DAT_00000040);
  local_8 = 0;
  pWVar1 = *(Widget **)(this + 0x154);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x130,uVar3);
    *(undefined4 *)(this + 0x154) = 0;
  }
  local_8 = 1;
  pWVar1 = *(Widget **)(this + 0x124);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x100);
    *(undefined4 *)(this + 0x124) = 0;
  }
  local_8 = 2;
  pWVar1 = *(Widget **)(this + 0xf4);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0xd0);
    *(undefined4 *)(this + 0xf4) = 0;
  }
  local_8 = 0xffffffff;
  uVar3 = *(uint *)(this + 0xcc);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0xb8);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0046623a;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0xf;
  this[0xb8] = (Widget)0x0;
  local_8 = 3;
  pWVar1 = *(Widget **)(this + 0xac);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x88);
    *(undefined4 *)(this + 0xac) = 0;
  }
  local_8 = 4;
  pWVar1 = *(Widget **)(this + 0x7c);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x58);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  uVar3 = *(uint *)(this + 0x48);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x34);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0046623a;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xf;
  this[0x34] = (Widget)0x0;
  uVar3 = *(uint *)(this + 0x30);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x1c);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
LAB_0046623a:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (Widget)0x0;
  ExceptionList = local_10;
  return;
}


// public: __thiscall Widget::Widget(class Widget const &)

Widget * __thiscall Widget::Widget(Widget *this,Widget *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba89f;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x18] = param_1[0x18];
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x1c),(basic_string<> *)(param_1 + 0x1c));
  local_8 = 0;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x34),(basic_string<> *)(param_1 + 0x34));
  this[0x4c] = param_1[0x4c];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x7c) = 0;
  local_8._0_1_ = 2;
  if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x7c))(this + 0x58,uVar3);
    *(undefined4 *)(this + 0x7c) = uVar4;
  }
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0xac) = 0;
  local_8._0_1_ = 4;
  if (*(undefined4 **)(param_1 + 0xac) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0xac))(this + 0x88);
    *(undefined4 *)(this + 0xac) = uVar4;
  }
  local_8._0_1_ = 5;
  this[0xb0] = param_1[0xb0];
  this[0xb1] = param_1[0xb1];
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0xb8),(basic_string<> *)(param_1 + 0xb8));
  *(undefined4 *)(this + 0xf4) = 0;
  local_8._0_1_ = 7;
  if (*(undefined4 **)(param_1 + 0xf4) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0xf4))(this + 0xd0);
    *(undefined4 *)(this + 0xf4) = uVar4;
  }
  this[0xf8] = param_1[0xf8];
  *(undefined4 *)(this + 0x124) = 0;
  local_8._0_1_ = 9;
  if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x124))(this + 0x100);
    *(undefined4 *)(this + 0x124) = uVar4;
  }
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(this + 0x154) = 0;
  local_8._0_1_ = 0xb;
  if (*(undefined4 **)(param_1 + 0x154) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x154))(this + 0x130);
    *(undefined4 *)(this + 0x154) = uVar4;
  }
  local_8 = CONCAT31(local_8._1_3_,0xc);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  std::_Tree<>::_Tree<><>
            ((_Tree<> *)(this + 0x168),(_Tree<> *)(param_1 + 0x168),(allocator<> *)(this + 0x168));
  this[0x170] = param_1[0x170];
  uVar4 = *(undefined4 *)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  uVar2 = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = uVar4;
  *(undefined4 *)(this + 0x17c) = uVar1;
  *(undefined4 *)(this + 0x180) = uVar2;
  ExceptionList = local_10;
  return this;
}


// public: __thiscall Widget::Widget(class Widget &&)

Widget * __thiscall Widget::Widget(Widget *this,Widget *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  uint uVar4;
  undefined4 uVar5;
  _Tree_node<> *p_Var6;
  _Tree_comp_alloc<> *extraout_ECX;
  _Tree_comp_alloc<> *this_00;
  Widget *pWVar7;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005bab1f;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x18] = param_1[0x18];
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  param_1[0x1c] = (Widget)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = uVar5;
  *(undefined4 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  param_1[0x34] = (Widget)0x0;
  this[0x4c] = param_1[0x4c];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x7c) = 0;
  uStack_7 = 0;
  uVar3 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  pWVar7 = *(Widget **)(param_1 + 0x7c);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0x58) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))(this + 0x58,uVar4);
      *(undefined4 *)(this + 0x7c) = uVar5;
      local_8 = 3;
      pWVar7 = *(Widget **)(param_1 + 0x7c);
      uVar3 = uStack_7;
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x7c) = 0;
        uVar3 = uStack_7;
      }
    }
    else {
      *(Widget **)(this + 0x7c) = pWVar7;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      uVar3 = uStack_7;
    }
  }
  uStack_7 = uVar3;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0xac) = 0;
  local_8 = 5;
  pWVar7 = *(Widget **)(param_1 + 0xac);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0x88) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))(this + 0x88);
      *(undefined4 *)(this + 0xac) = uVar5;
      local_8 = 6;
      pWVar7 = *(Widget **)(param_1 + 0xac);
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x88);
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
    }
    else {
      *(Widget **)(this + 0xac) = pWVar7;
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  this[0xb0] = param_1[0xb0];
  this[0xb1] = param_1[0xb1];
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = uVar5;
  *(undefined4 *)(this + 0xc0) = uVar1;
  *(undefined4 *)(this + 0xc4) = uVar2;
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  param_1[0xb8] = (Widget)0x0;
  *(undefined4 *)(this + 0xf4) = 0;
  local_8 = 9;
  pWVar7 = *(Widget **)(param_1 + 0xf4);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0xd0) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))(this + 0xd0);
      *(undefined4 *)(this + 0xf4) = uVar5;
      local_8 = 10;
      pWVar7 = *(Widget **)(param_1 + 0xf4);
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0xd0);
        *(undefined4 *)(param_1 + 0xf4) = 0;
      }
    }
    else {
      *(Widget **)(this + 0xf4) = pWVar7;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  this[0xf8] = param_1[0xf8];
  *(undefined4 *)(this + 0x124) = 0;
  local_8 = 0xc;
  pWVar7 = *(Widget **)(param_1 + 0x124);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0x100) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))(this + 0x100);
      *(undefined4 *)(this + 0x124) = uVar5;
      local_8 = 0xd;
      pWVar7 = *(Widget **)(param_1 + 0x124);
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x100);
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
    }
    else {
      *(Widget **)(this + 0x124) = pWVar7;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(this + 0x154) = 0;
  local_8 = 0xf;
  this_00 = *(_Tree_comp_alloc<> **)(param_1 + 0x154);
  if (this_00 != (_Tree_comp_alloc<> *)0x0) {
    if (this_00 == (_Tree_comp_alloc<> *)(param_1 + 0x130)) {
      uVar5 = (**(code **)(*(int *)this_00 + 4))(this + 0x130);
      *(undefined4 *)(this + 0x154) = uVar5;
      local_8 = 0x10;
      pWVar7 = *(Widget **)(param_1 + 0x154);
      this_00 = (_Tree_comp_alloc<> *)0x0;
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x130);
        *(undefined4 *)(param_1 + 0x154) = 0;
        this_00 = extraout_ECX;
      }
    }
    else {
      *(_Tree_comp_alloc<> **)(this + 0x154) = this_00;
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
  }
  _local_8 = CONCAT31(uStack_7,0x11);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  pWVar7 = this + 0x168;
  *(undefined4 *)pWVar7 = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  p_Var6 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
  *(_Tree_node<> **)pWVar7 = p_Var6;
  *(undefined4 *)pWVar7 = *(undefined4 *)(param_1 + 0x168);
  *(_Tree_node<> **)(param_1 + 0x168) = p_Var6;
  uVar5 = *(undefined4 *)(this + 0x16c);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x16c) = uVar5;
  this[0x170] = param_1[0x170];
  uVar5 = *(undefined4 *)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  uVar2 = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = uVar5;
  *(undefined4 *)(this + 0x17c) = uVar1;
  *(undefined4 *)(this + 0x180) = uVar2;
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall Widget::unpackExistFunction(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall Widget::unpackExistFunction(Widget *this,void *param_2)

{
  undefined1 *puVar1;
  function<> *pfVar2;
  basic_string<> *_Str;
  int iVar3;
  basic_string<> *pbVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  basic_string<> *this_00;
  uint in_stack_00000018;
  basic_string<> abStack_70 [8];
  undefined4 uStack_68;
  basic_string<> *pbStack_64;
  basic_string<> *local_4c;
  int local_48;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c93c0;
  local_10 = ExceptionList;
  puVar1 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = puVar1;
  std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)&param_2);
  splitStringBy();
  local_8._0_1_ = 1;
  iVar3 = (local_48 - (int)local_4c) / 0x18;
  if (iVar3 == 1) {
    std::basic_string<>::basic_string<>(abStack_70,local_4c);
    getShipCheckDataType();
    pfVar2 = (function<> *)ShipData::getCheckFunction((ShipDataCheckType)puVar1);
    local_8._0_1_ = 2;
    std::function<>::operator=((function<> *)(this + 0xd0),pfVar2);
    local_8._0_1_ = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  else if (iVar3 == 2) {
    std::basic_string<>::basic_string<>(abStack_70,local_4c);
    getShipCheckDataType();
    pfVar2 = (function<> *)ShipData::getCheckFunction((ShipDataCheckType)puVar1);
    local_8._0_1_ = 4;
    std::function<>::operator=((function<> *)(this + 0xd0),pfVar2);
    local_8._0_1_ = 5;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    local_8._0_1_ = 1;
    _Str = local_4c + 0x18;
    if (0xf < *(uint *)(local_4c + 0x2c)) {
      _Str = *(basic_string<> **)_Str;
    }
    iVar3 = atoi((char *)_Str);
    *(int *)(this + 0xb4) = iVar3;
    this_00 = (basic_string<> *)(this + 0xb8);
    pbVar4 = (basic_string<> *)(local_4c + 0x18);
    if (this_00 != pbVar4) {
      if (0xf < *(uint *)(local_4c + 0x2c)) {
        pbVar4 = *(basic_string<> **)pbVar4;
      }
      pbStack_64 = (basic_string<> *)0x55903b;
      std::basic_string<>::assign(this_00,(char *)pbVar4,*(uint *)(local_4c + 0x28));
    }
    if (0xf < *(uint *)(this + 0xcc)) {
      this_00 = *(basic_string<> **)this_00;
    }
    uStack_68 = 0x55906a;
    pbStack_64 = this_00;
    std::transform<>();
  }
  std::vector<>::_Tidy((vector<> *)&local_4c);
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar5 = param_2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_2 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    pbStack_64 = (basic_string<> *)0x5590a8;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie((int)((uint)local_14 ^ (uint)&stack0xfffffffc));
  return;
}


// public: void __thiscall Widget::unpackOptions(class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,int)

void __thiscall
Widget::unpackOptions(Widget *this,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  basic_string<> *this_00;
  basic_string<> *pbVar5;
  basic_string<> *pbVar6;
  int iVar7;
  uint unaff_EDI;
  char *pcVar8;
  basic_string<> abStack_54 [12];
  undefined4 uStack_48;
  uint uVar9;
  basic_string<> *local_2c;
  int local_28;
  int local_20;
  basic_string<> *local_1c;
  int local_18;
  Widget *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c9400;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  if (param_5 < (uint)((param_3 - param_2) / 0x18)) {
    local_18 = param_5 * 0x18;
    do {
      std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)(local_18 + param_2));
      splitStringBy();
      local_8._0_1_ = 1;
      iVar4 = (local_28 - (int)local_2c) / 0x18;
      if (iVar4 == 2) {
        local_1c = local_2c;
        pbVar5 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          local_1c = *(basic_string<> **)local_2c;
          pbVar5 = *(basic_string<> **)local_2c;
        }
        pbVar6 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar6 = *(basic_string<> **)local_2c;
        }
        iVar4 = (int)(pbVar5 + *(int *)(local_2c + 0x10)) - (int)pbVar6;
        iVar7 = 0;
        if (pbVar5 + *(int *)(local_2c + 0x10) < pbVar6) {
          iVar4 = 0;
        }
        local_20 = iVar4;
        if (iVar4 != 0) {
          do {
            iVar3 = tolower((int)(char)pbVar6[iVar7]);
            local_1c[iVar7] = SUB41(iVar3,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar4);
        }
        pbVar5 = local_2c;
        uStack_48 = 0x5591e5;
        bVar1 = std::_Traits_equal<>("tooltip",7,pcVar2,unaff_EDI);
        if (bVar1) {
          pcVar8 = (char *)(pbVar5 + 0x18);
          this_00 = (basic_string<> *)(local_14 + 0x34);
          if (this_00 != (basic_string<> *)pcVar8) {
            if (0xf < *(uint *)(pbVar5 + 0x2c)) {
              pcVar8 = *(char **)pcVar8;
            }
            uVar9 = *(uint *)(pbVar5 + 0x28);
LAB_005592b4:
            uStack_48 = 0x5592b9;
            std::basic_string<>::assign(this_00,pcVar8,uVar9);
          }
        }
        else {
          pcVar8 = (char *)(pbVar5 + 0x18);
          this_00 = std::map<>::operator[]((map<> *)(local_14 + 0x168),pbVar5);
          if (this_00 != (basic_string<> *)pcVar8) {
            if (0xf < *(uint *)(pbVar5 + 0x2c)) {
              pcVar8 = *(char **)pcVar8;
            }
            uVar9 = *(uint *)(pbVar5 + 0x28);
            goto LAB_005592b4;
          }
        }
      }
      else if (iVar4 == 1) {
        local_1c = local_2c;
        pbVar5 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          local_1c = *(basic_string<> **)local_2c;
          pbVar5 = *(basic_string<> **)local_2c;
        }
        pbVar6 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar6 = *(basic_string<> **)local_2c;
        }
        iVar4 = (int)(pbVar5 + *(int *)(local_2c + 0x10)) - (int)pbVar6;
        iVar7 = 0;
        if (pbVar5 + *(int *)(local_2c + 0x10) < pbVar6) {
          iVar4 = 0;
        }
        local_20 = iVar4;
        if (iVar4 != 0) {
          do {
            iVar3 = tolower((int)(char)pbVar6[iVar7]);
            local_1c[iVar7] = SUB41(iVar3,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar4);
        }
        this_00 = std::map<>::operator[]((map<> *)(local_14 + 0x168),local_2c);
        uVar9 = 4;
        pcVar8 = "true";
        goto LAB_005592b4;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      std::vector<>::_Tidy((vector<> *)&local_2c);
      local_18 = local_18 + 0x18;
      param_5 = param_5 + 1;
    } while (param_5 < (uint)((param_3 - param_2) / 0x18));
  }
  std::vector<>::_Tidy((vector<> *)&param_2);
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall Widget::getOptionAsBool(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall Widget::getOptionAsBool(Widget *this,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint unaff_EBX;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2368;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  std::map<>::operator[]((map<> *)(this + 0x168),(basic_string<> *)&param_2);
  bVar1 = std::_Traits_equal<>("true",4,pcVar2,unaff_EBX);
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return bVar1;
}


// public: bool __thiscall Widget::hasOption(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall Widget::hasOption(Widget *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  int iVar3;
  uint in_stack_00000018;
  int local_10;
  int local_c;
  int local_8;
  
  std::_Tree<>::_Eqrange<>((_Tree<> *)(this + 0x168),(basic_string<> *)&local_10);
  iVar3 = 0;
  local_8 = local_10;
  while (local_8 != local_c) {
    iVar3 = iVar3 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_8);
  }
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  return iVar3 == 1;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall Widget::getOption(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

basic_string<> * __thiscall Widget::getOption(Widget *this,basic_string<> *param_2,void *param_3)

{
  basic_string<> *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c2508;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = std::map<>::operator[]((map<> *)(this + 0x168),(basic_string<> *)&param_3);
  std::basic_string<>::basic_string<>(param_2,(basic_string<> *)pbVar1);
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return param_2;
}
