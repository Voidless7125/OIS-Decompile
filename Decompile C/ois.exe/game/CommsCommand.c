#include "../ois.exe.h"


// public: __thiscall CommsCommand::CommsCommand(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::function<void __cdecl(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>,bool,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

CommsCommand * __thiscall CommsCommand::CommsCommand(CommsCommand *this,void *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int *in_stack_00000040;
  CommsCommand in_stack_00000044;
  void *in_stack_00000048;
  undefined4 in_stack_00000058;
  uint in_stack_0000005c;
  void *in_stack_00000060;
  uint in_stack_00000074;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8426;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 3;
  std::basic_string<>::basic_string<>((basic_string<> *)this,(basic_string<> *)&param_2);
  local_8._0_1_ = 4;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x18),(basic_string<> *)&stack0x00000048);
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x30),(basic_string<> *)&stack0x00000060);
  this[0x48] = in_stack_00000044;
  *(undefined4 *)(this + 0x74) = 0;
  local_8._0_1_ = 7;
  if (in_stack_00000040 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000040)(this + 0x50,uVar1);
    *(undefined4 *)(this + 0x74) = uVar2;
  }
  local_8._0_1_ = 2;
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
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,8);
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
    in_stack_00000040 = (int *)0x0;
  }
  if (0xf < in_stack_0000005c) {
    pnVar4 = (nothrow_t *)(in_stack_0000005c + 1);
    pvVar3 = in_stack_00000048;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)in_stack_00000048 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000005c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000048 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000058 = 0;
  in_stack_0000005c = 0xf;
  in_stack_00000048 = (void *)((uint)in_stack_00000048 & 0xffffff00);
  if (0xf < in_stack_00000074) {
    pnVar4 = (nothrow_t *)(in_stack_00000074 + 1);
    pvVar3 = in_stack_00000060;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)in_stack_00000060 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000074 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000060 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall CommsCommand::~CommsCommand(void)

void __thiscall CommsCommand::~CommsCommand(CommsCommand *this)

{
  CommsCommand *pCVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pCVar1 = *(CommsCommand **)(this + 0x74);
  if (pCVar1 != (CommsCommand *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x10))
              (pCVar1 != this + 0x50,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(this + 0x74) = 0;
  }
  uVar2 = *(uint *)(this + 0x44);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(this + 0x30);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_005475a5;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (CommsCommand)0x0;
  uVar2 = *(uint *)(this + 0x2c);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(this + 0x18);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_005475a5;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (CommsCommand)0x0;
  uVar2 = *(uint *)(this + 0x14);
  if (0xf < uVar2) {
    pvVar3 = *(void **)this;
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
LAB_005475a5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (CommsCommand)0x0;
  ExceptionList = local_10;
  return;
}
