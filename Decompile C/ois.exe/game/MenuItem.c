#include "../ois.exe.h"


// public: __thiscall MenuItem::~MenuItem(void)

void __thiscall MenuItem::~MenuItem(MenuItem *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x60);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x4c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00439a75;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0xf;
  this[0x4c] = (MenuItem)0x0;
  uVar1 = *(uint *)(this + 0x48);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x34);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00439a75;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xf;
  this[0x34] = (MenuItem)0x0;
  uVar1 = *(uint *)(this + 0x30);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x1c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00439a75;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (MenuItem)0x0;
  uVar1 = *(uint *)(this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_00439a75:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (MenuItem)0x0;
  return;
}


// public: __thiscall MenuItem::MenuItem(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

MenuItem * __thiscall MenuItem::MenuItem(MenuItem *this,undefined4 param_1,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 in_stack_00000030;
  uint in_stack_00000034;
  void *in_stack_00000038;
  uint in_stack_0000004c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c5e8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  *(undefined4 *)this = param_1;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 4),(basic_string<> *)&param_3);
  local_8._0_1_ = 3;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x1c),(basic_string<> *)&stack0x00000038);
  local_8 = CONCAT31(local_8._1_3_,4);
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x34),(basic_string<> *)&stack0x00000020);
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0xf;
  this[0x4c] = (MenuItem)0x0;
  this[100] = (MenuItem)0x0;
  if (0xf < in_stack_0000001c) {
    pnVar2 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar2 = (nothrow_t *)(in_stack_00000034 + 1);
    pvVar1 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000020 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000030 = 0;
  in_stack_00000034 = 0xf;
  in_stack_00000020 = (void *)((uint)in_stack_00000020 & 0xffffff00);
  if (0xf < in_stack_0000004c) {
    pnVar2 = (nothrow_t *)(in_stack_0000004c + 1);
    pvVar1 = in_stack_00000038;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000038 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000004c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000038 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}
