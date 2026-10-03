// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Widget * __thiscall Widget::Widget(Widget *this)
Widget::Widget()

{
  ghidra::lib::_Tree_node_t *p_Var1;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b5397;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 4) = 0;
  ((char *)this)[0x18] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0xf;
  ((char *)this)[0x1c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0xf;
  ((char *)this)[0x34] = (byte)0x0;
  ((char *)this)[0x4c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x50) = 1;
  *(undefined4 *)((char *)this + 0x54) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0;
  *(undefined4 *)((char *)this + 0x80) = 0;
  *(undefined4 *)((char *)this + 0x84) = 0;
  *(undefined4 *)((char *)this + 0xac) = 0;
  *(undefined2 *)((char *)this + 0xb0) = 0;
  *(undefined4 *)((char *)this + 0xb4) = 0;
  *(undefined4 *)((char *)this + 200) = 0;
  *(undefined4 *)((char *)this + 0xcc) = 0xf;
  ((char *)this)[0xb8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xf4) = 0;
  ((char *)this)[0xf8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x124) = 0;
  *(undefined4 *)((char *)this + 300) = 0;
  *(undefined4 *)((char *)this + 0x154) = 0;
  // [seh] local_8 = 7;
  *(undefined4 *)((char *)this + 0x158) = 0;
  *(undefined4 *)((char *)this + 0x15c) = 99;
  *(undefined4 *)((char *)this + 0x160) = 0;
  *(undefined4 *)((char *)this + 0x164) = 0x43;
  *(undefined4 *)((char *)this + 0x168) = 0;
  *(undefined4 *)((char *)this + 0x16c) = 0;
  p_Var1 = ghidra::lib::_Tree_comp_alloc___Buyheadnode((ghidra::lib::_Tree_comp_alloc_t *)this);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0x168) = p_Var1;
  ((char *)this)[0x170] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x174) = 0;
  *(undefined4 *)((char *)this + 0x178) = 0;
  *(undefined4 *)((char *)this + 0x17c) = 0;
  *(undefined4 *)((char *)this + 0x180) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Widget::~Widget(Widget *this)
Widget::~Widget()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Widget *pWVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  Widget *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b8080;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_14 = this;
  ghidra::lib::_Tree__erase((ghidra::lib::_Tree_t *)((char *)this + 0x168),&local_14,**(undefined4 **)((char *)this + 0x168),
                      *(undefined4 **)((char *)this + 0x168));
  operator_delete(*(void **)((char *)this + 0x168),(nothrow_t *)&DAT_00000040);
  // [seh] local_8 = 0;
  pWVar1 = *(Widget **)((char *)this + 0x154);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x130,uVar3);
    *(undefined4 *)((char *)this + 0x154) = 0;
  }
  // [seh] local_8 = 1;
  pWVar1 = *(Widget **)((char *)this + 0x124);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x100);
    *(undefined4 *)((char *)this + 0x124) = 0;
  }
  // [seh] local_8 = 2;
  pWVar1 = *(Widget **)((char *)this + 0xf4);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0xd0);
    *(undefined4 *)((char *)this + 0xf4) = 0;
  }
  // [seh] local_8 = 0xffffffff;
  uVar3 = *(uint *)((char *)this + 0xcc);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0xb8);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0046623a;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 200) = 0;
  *(undefined4 *)((char *)this + 0xcc) = 0xf;
  ((char *)this)[0xb8] = (byte)0x0;
  // [seh] local_8 = 3;
  pWVar1 = *(Widget **)((char *)this + 0xac);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x88);
    *(undefined4 *)((char *)this + 0xac) = 0;
  }
  // [seh] local_8 = 4;
  pWVar1 = *(Widget **)((char *)this + 0x7c);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(int *)pWVar1 + 0x10))(pWVar1 != this + 0x58);
    *(undefined4 *)((char *)this + 0x7c) = 0;
  }
  uVar3 = *(uint *)((char *)this + 0x48);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x34);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0046623a;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0xf;
  ((char *)this)[0x34] = (byte)0x0;
  uVar3 = *(uint *)((char *)this + 0x30);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x1c);
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
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0xf;
  ((char *)this)[0x1c] = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: Widget * __thiscall Widget::Widget(Widget *this,Widget *param_1)
Widget::Widget(Widget * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ba89f;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)((char *)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((char *)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((char *)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((char *)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  ((char *)this)[0x18] = param_1[0x18];
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x1c),(std::string *)(param_1 + 0x1c));
  // [seh] local_8 = 0;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x34),(std::string *)(param_1 + 0x34));
  ((char *)this)[0x4c] = param_1[0x4c];
  *(undefined4 *)((char *)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((char *)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((char *)this + 0x7c) = 0;
  // [seh] local_8._0_1_ = 2;
  if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x7c))(this + 0x58,uVar3);
    *(undefined4 *)((char *)this + 0x7c) = uVar4;
  }
  *(undefined4 *)((char *)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((char *)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((char *)this + 0xac) = 0;
  // [seh] local_8._0_1_ = 4;
  if (*(undefined4 **)(param_1 + 0xac) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0xac))((char *)this + 0x88);
    *(undefined4 *)((char *)this + 0xac) = uVar4;
  }
  // [seh] local_8._0_1_ = 5;
  ((char *)this)[0xb0] = param_1[0xb0];
  ((char *)this)[0xb1] = param_1[0xb1];
  *(undefined4 *)((char *)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  ghidra::str::ctor
            ((std::string *)((char *)this + 0xb8),(std::string *)(param_1 + 0xb8));
  *(undefined4 *)((char *)this + 0xf4) = 0;
  // [seh] local_8._0_1_ = 7;
  if (*(undefined4 **)(param_1 + 0xf4) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0xf4))((char *)this + 0xd0);
    *(undefined4 *)((char *)this + 0xf4) = uVar4;
  }
  ((char *)this)[0xf8] = param_1[0xf8];
  *(undefined4 *)((char *)this + 0x124) = 0;
  // [seh] local_8._0_1_ = 9;
  if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x124))((char *)this + 0x100);
    *(undefined4 *)((char *)this + 0x124) = uVar4;
  }
  *(undefined4 *)((char *)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((char *)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((char *)this + 0x154) = 0;
  // [seh] local_8._0_1_ = 0xb;
  if (*(undefined4 **)(param_1 + 0x154) != (undefined4 *)0x0) {
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x154))((char *)this + 0x130);
    *(undefined4 *)((char *)this + 0x154) = uVar4;
  }
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xc);
  *(undefined4 *)((char *)this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)((char *)this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)((char *)this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((char *)this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  std::_Tree<>::ghidra::lib::_Tree_t<>
            ((ghidra::lib::_Tree_t *)((char *)this + 0x168),(ghidra::lib::_Tree_t *)(param_1 + 0x168),(ghidra::lib::allocator_t *)((char *)this + 0x168));
  ((char *)this)[0x170] = param_1[0x170];
  uVar4 = *(undefined4 *)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  uVar2 = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((char *)this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)((char *)this + 0x178) = uVar4;
  *(undefined4 *)((char *)this + 0x17c) = uVar1;
  *(undefined4 *)((char *)this + 0x180) = uVar2;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: Widget * __thiscall Widget::Widget(Widget *this,Widget *param_1)
Widget::Widget(Widget * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ghidra::lib::_Tree_node_t *p_Var6;
  ghidra::lib::_Tree_comp_alloc_t *extraout_ECX;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  Widget *pWVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005bab1f;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)((char *)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((char *)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((char *)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((char *)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  ((char *)this)[0x18] = param_1[0x18];
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((char *)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((char *)this + 0x20) = uVar5;
  *(undefined4 *)((char *)this + 0x24) = uVar1;
  *(undefined4 *)((char *)this + 0x28) = uVar2;
  *(undefined8 *)((char *)this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  param_1[0x1c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((char *)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((char *)this + 0x38) = uVar5;
  *(undefined4 *)((char *)this + 0x3c) = uVar1;
  *(undefined4 *)((char *)this + 0x40) = uVar2;
  *(undefined8 *)((char *)this + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  param_1[0x34] = (byte)0x0;
  ((char *)this)[0x4c] = param_1[0x4c];
  *(undefined4 *)((char *)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((char *)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((char *)this + 0x7c) = 0;
  uStack_7 = 0;
  uVar3 = uStack_7;
  // [seh] local_8 = 2;
  uStack_7 = 0;
  pWVar7 = *(Widget **)(param_1 + 0x7c);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0x58) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))(this + 0x58,uVar4);
      *(undefined4 *)((char *)this + 0x7c) = uVar5;
      // [seh] local_8 = 3;
      pWVar7 = *(Widget **)(param_1 + 0x7c);
      uVar3 = uStack_7;
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x7c) = 0;
        uVar3 = uStack_7;
      }
    }
    else {
      *(Widget **)((char *)this + 0x7c) = pWVar7;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      uVar3 = uStack_7;
    }
  }
  uStack_7 = uVar3;
  *(undefined4 *)((char *)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((char *)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((char *)this + 0xac) = 0;
  // [seh] local_8 = 5;
  pWVar7 = *(Widget **)(param_1 + 0xac);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0x88) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))((char *)this + 0x88);
      *(undefined4 *)((char *)this + 0xac) = uVar5;
      // [seh] local_8 = 6;
      pWVar7 = *(Widget **)(param_1 + 0xac);
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x88);
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
    }
    else {
      *(Widget **)((char *)this + 0xac) = pWVar7;
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  ((char *)this)[0xb0] = param_1[0xb0];
  ((char *)this)[0xb1] = param_1[0xb1];
  *(undefined4 *)((char *)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((char *)this + 200) = 0;
  *(undefined4 *)((char *)this + 0xcc) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((char *)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((char *)this + 0xbc) = uVar5;
  *(undefined4 *)((char *)this + 0xc0) = uVar1;
  *(undefined4 *)((char *)this + 0xc4) = uVar2;
  *(undefined8 *)((char *)this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  param_1[0xb8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xf4) = 0;
  // [seh] local_8 = 9;
  pWVar7 = *(Widget **)(param_1 + 0xf4);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0xd0) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))((char *)this + 0xd0);
      *(undefined4 *)((char *)this + 0xf4) = uVar5;
      // [seh] local_8 = 10;
      pWVar7 = *(Widget **)(param_1 + 0xf4);
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0xd0);
        *(undefined4 *)(param_1 + 0xf4) = 0;
      }
    }
    else {
      *(Widget **)((char *)this + 0xf4) = pWVar7;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  ((char *)this)[0xf8] = param_1[0xf8];
  *(undefined4 *)((char *)this + 0x124) = 0;
  // [seh] local_8 = 0xc;
  pWVar7 = *(Widget **)(param_1 + 0x124);
  if (pWVar7 != (Widget *)0x0) {
    if (pWVar7 == param_1 + 0x100) {
      uVar5 = (**(code **)(*(int *)pWVar7 + 4))((char *)this + 0x100);
      *(undefined4 *)((char *)this + 0x124) = uVar5;
      // [seh] local_8 = 0xd;
      pWVar7 = *(Widget **)(param_1 + 0x124);
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x100);
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
    }
    else {
      *(Widget **)((char *)this + 0x124) = pWVar7;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  *(undefined4 *)((char *)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((char *)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((char *)this + 0x154) = 0;
  // [seh] local_8 = 0xf;
  this_00 = *(ghidra::lib::_Tree_comp_alloc_t **)(param_1 + 0x154);
  if (this_00 != (ghidra::lib::_Tree_comp_alloc_t *)0x0) {
    if (this_00 == (ghidra::lib::_Tree_comp_alloc_t *)(param_1 + 0x130)) {
      uVar5 = (**(code **)(*(int *)this_00 + 4))((char *)this + 0x130);
      *(undefined4 *)((char *)this + 0x154) = uVar5;
      // [seh] local_8 = 0x10;
      pWVar7 = *(Widget **)(param_1 + 0x154);
      this_00 = (ghidra::lib::_Tree_comp_alloc_t *)0x0;
      if (pWVar7 != (Widget *)0x0) {
        (**(code **)(*(int *)pWVar7 + 0x10))(pWVar7 != param_1 + 0x130);
        *(undefined4 *)(param_1 + 0x154) = 0;
        this_00 = extraout_ECX;
      }
    }
    else {
      *(ghidra::lib::_Tree_comp_alloc_t **)((char *)this + 0x154) = this_00;
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
  }
  _local_8 = CONCAT31(uStack_7,0x11);
  *(undefined4 *)((char *)this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)((char *)this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)((char *)this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((char *)this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  pWVar7 = this + 0x168;
  *(undefined4 *)pWVar7 = 0;
  *(undefined4 *)((char *)this + 0x16c) = 0;
  p_Var6 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  *(ghidra::lib::_Tree_node_t **)pWVar7 = p_Var6;
  *(undefined4 *)pWVar7 = *(undefined4 *)(param_1 + 0x168);
  *(ghidra::lib::_Tree_node_t **)(param_1 + 0x168) = p_Var6;
  uVar5 = *(undefined4 *)((char *)this + 0x16c);
  *(undefined4 *)((char *)this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x16c) = uVar5;
  ((char *)this)[0x170] = param_1[0x170];
  uVar5 = *(undefined4 *)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  uVar2 = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((char *)this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)((char *)this + 0x178) = uVar5;
  *(undefined4 *)((char *)this + 0x17c) = uVar1;
  *(undefined4 *)((char *)this + 0x180) = uVar2;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Widget::unpackExistFunction(Widget *this,void *param_2)
void Widget::unpackExistFunction(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 *puVar1;
  ghidra::lib::function_t *pfVar2;
  std::string *_Str;
  int iVar3;
  std::string *pbVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  std::string *this_00;
  uint in_stack_00000018;
  std::string abStack_70 [8];
  undefined4 uStack_68;
  std::string *pbStack_64;
  std::string *local_4c;
  int local_48;
  int *local_18;
  undefined1 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c93c0;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar1 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = puVar1;
  ghidra::str::ctor(abStack_70,(std::string *)&param_2);
  splitStringBy();
  // [seh] local_8._0_1_ = 1;
  iVar3 = (local_48 - (int)local_4c) / 0x18;
  if (iVar3 == 1) {
    ghidra::str::ctor(abStack_70,local_4c);
    getShipCheckDataType();
    pfVar2 = (ghidra::lib::function_t *)ShipData::getCheckFunction((ShipDataCheckType)puVar1);
    // [seh] local_8._0_1_ = 2;
    ghidra::lib::function__operator_x3d((ghidra::lib::function_t *)((char *)this + 0xd0),pfVar2);
    // [seh] local_8._0_1_ = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  else if (iVar3 == 2) {
    ghidra::str::ctor(abStack_70,local_4c);
    getShipCheckDataType();
    pfVar2 = (ghidra::lib::function_t *)ShipData::getCheckFunction((ShipDataCheckType)puVar1);
    // [seh] local_8._0_1_ = 4;
    ghidra::lib::function__operator_x3d((ghidra::lib::function_t *)((char *)this + 0xd0),pfVar2);
    // [seh] local_8._0_1_ = 5;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    // [seh] local_8._0_1_ = 1;
    _Str = local_4c + 0x18;
    if (0xf < *(uint *)(local_4c + 0x2c)) {
      _Str = *(std::string **)_Str;
    }
    iVar3 = atoi((char *)_Str);
    *(int *)((char *)this + 0xb4) = iVar3;
    this_00 = (std::string *)((char *)this + 0xb8);
    pbVar4 = (std::string *)(local_4c + 0x18);
    if (this_00 != pbVar4) {
      if (0xf < *(uint *)(local_4c + 0x2c)) {
        pbVar4 = *(std::string **)pbVar4;
      }
      pbStack_64 = (std::string *)0x55903b;
      ghidra::str::assign(this_00,(char *)pbVar4,*(uint *)(local_4c + 0x28));
    }
    if (0xf < *(uint *)((char *)this + 0xcc)) {
      this_00 = *(std::string **)this_00;
    }
    uStack_68 = 0x55906a;
    pbStack_64 = this_00;
    ghidra::lib::transform___x28_x29();
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_4c);
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
    pbStack_64 = (std::string *)0x5590a8;
    operator_delete(pvVar5,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((int)((uint)local_14 ^ (uint)&stack0xfffffffc));
  return;
}


// Ghidra: void __thiscall Widget::unpackOptions(Widget *this,int param_2,int param_3,undefined4 param_4,uint param_5)
void Widget::unpackOptions(int param_2, int param_3, undefined4 param_4, uint param_5)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  std::string *this_00;
  std::string *pbVar5;
  std::string *pbVar6;
  int iVar7;
  uint unaff_EDI;
  char *pcVar8;
  std::string abStack_54 [12];
  undefined4 uStack_48;
  uint uVar9;
  std::string *local_2c;
  int local_28;
  int local_20;
  std::string *local_1c;
  int local_18;
  Widget *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c9400;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = this;
  if (param_5 < (uint)((param_3 - param_2) / 0x18)) {
    local_18 = param_5 * 0x18;
    do {
      ghidra::str::ctor(abStack_54,(std::string *)(local_18 + param_2));
      splitStringBy();
      // [seh] local_8._0_1_ = 1;
      iVar4 = (local_28 - (int)local_2c) / 0x18;
      if (iVar4 == 2) {
        local_1c = local_2c;
        pbVar5 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          local_1c = *(std::string **)local_2c;
          pbVar5 = *(std::string **)local_2c;
        }
        pbVar6 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar6 = *(std::string **)local_2c;
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
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("tooltip",7,pcVar2,unaff_EDI);
        if (bVar1) {
          pcVar8 = (char *)(pbVar5 + 0x18);
          this_00 = (std::string *)(local_14 + 0x34);
          if (this_00 != (std::string *)pcVar8) {
            if (0xf < *(uint *)(pbVar5 + 0x2c)) {
              pcVar8 = *(char **)pcVar8;
            }
            uVar9 = *(uint *)(pbVar5 + 0x28);
LAB_005592b4:
            uStack_48 = 0x5592b9;
            ghidra::str::assign(this_00,pcVar8,uVar9);
          }
        }
        else {
          pcVar8 = (char *)(pbVar5 + 0x18);
          this_00 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(local_14 + 0x168),pbVar5);
          if (this_00 != (std::string *)pcVar8) {
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
          local_1c = *(std::string **)local_2c;
          pbVar5 = *(std::string **)local_2c;
        }
        pbVar6 = local_2c;
        if (0xf < *(uint *)(local_2c + 0x14)) {
          pbVar6 = *(std::string **)local_2c;
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
        this_00 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(local_14 + 0x168),local_2c);
        uVar9 = 4;
        pcVar8 = "true";
        goto LAB_005592b4;
      }
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_2c);
      local_18 = local_18 + 0x18;
      param_5 = param_5 + 1;
    } while (param_5 < (uint)((param_3 - param_2) / 0x18));
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&param_2);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall Widget::getOptionAsBool(Widget *this,void *param_2)
bool Widget::getOptionAsBool(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint unaff_EBX;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2368;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x168),(std::string *)&param_2);
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("true",4,pcVar2,unaff_EBX);
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
  // [seh] ExceptionList = local_10;
  return bVar1;
}


// Ghidra: bool __thiscall Widget::hasOption(Widget *this,void *param_2)
bool Widget::hasOption(void * param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  int iVar3;
  uint in_stack_00000018;
  int local_10;
  int local_c;
  int local_8;
  
  ghidra::lib::_Tree___Eqrange((ghidra::lib::_Tree_t *)((char *)this + 0x168),(std::string *)&local_10);
  iVar3 = 0;
  local_8 = local_10;
  while (local_8 != local_c) {
    iVar3 = iVar3 + 1;
    ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_8);
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


// Ghidra: basic_string<> * __thiscall Widget::getOption(Widget *this,basic_string<> *param_2,void *param_3)
std::string * Widget::getOption(std::string * param_2, void * param_3)

{
  std::string *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c2508;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pbVar1 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x168),(std::string *)&param_3);
  ghidra::str::ctor(param_2,(std::string *)pbVar1);
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
  // [seh] ExceptionList = local_10;
  return param_2;
}
