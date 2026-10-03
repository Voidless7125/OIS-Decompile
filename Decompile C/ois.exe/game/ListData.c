#include "../ois.exe.h"


// public: __thiscall ListData::ListData(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct cocos2d::Color3B,int,bool)

ListData * __thiscall ListData::ListData(ListData *this,undefined4 param_1,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000038;
  undefined2 uStack0000003c;
  ListData LStack0000003e;
  undefined4 in_stack_00000040;
  ListData in_stack_00000044;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b5121;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)this = param_1;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 4),(basic_string<> *)&param_3);
  local_8._0_1_ = 2;
  *(undefined4 *)(this + 0x1c) = in_stack_00000020;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x20),(basic_string<> *)&stack0x00000024);
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0xf;
  this[0x38] = (ListData)0x0;
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)(this + 0x50) = in_stack_00000040;
  *(undefined2 *)(this + 0x58) = uStack0000003c;
  *(undefined1 **)(this + 0x54) = &DAT_bf800000;
  this[0x5a] = LStack0000003e;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x5b));
  this[0x5e] = in_stack_00000044;
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
  if (0xf < in_stack_00000038) {
    pnVar2 = (nothrow_t *)(in_stack_00000038 + 1);
    pvVar1 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000024 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall ListData::~ListData(void)

void __thiscall ListData::~ListData(ListData *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x4c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x38);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0043c24f;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0xf;
  this[0x38] = (ListData)0x0;
  uVar1 = *(uint *)(this + 0x34);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x20);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0043c24f;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xf;
  this[0x20] = (ListData)0x0;
  uVar1 = *(uint *)(this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0043c24f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (ListData)0x0;
  return;
}
