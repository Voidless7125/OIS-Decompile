#include "../ois.exe.h"


// public: __thiscall Message::Message(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Message * __thiscall Message::Message(Message *this,undefined4 param_1,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 in_stack_00000030;
  uint in_stack_00000034;
  void *in_stack_00000038;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  void *in_stack_00000050;
  uint in_stack_00000064;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4eb1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  *(undefined4 *)this = 0xffffffff;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 4),(basic_string<> *)&param_3);
  local_8._0_1_ = 4;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x1c),(basic_string<> *)&stack0x00000020);
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x34),(basic_string<> *)&stack0x00000050);
  local_8 = CONCAT31(local_8._1_3_,6);
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x4c),(basic_string<> *)&stack0x00000038);
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
  in_stack_00000048 = 0;
  in_stack_0000004c = 0xf;
  in_stack_00000038 = (void *)((uint)in_stack_00000038 & 0xffffff00);
  if (0xf < in_stack_00000064) {
    pnVar2 = (nothrow_t *)(in_stack_00000064 + 1);
    pvVar1 = in_stack_00000050;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000050 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000064 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000050 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}
