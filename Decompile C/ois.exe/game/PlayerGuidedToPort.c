#include "../ois.exe.h"


// public: __thiscall PlayerGuidedToPort::PlayerGuidedToPort(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

PlayerGuidedToPort * __thiscall
PlayerGuidedToPort::PlayerGuidedToPort(PlayerGuidedToPort *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b5468;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<>::basic_string<>((basic_string<> *)this,(basic_string<> *)&param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x18),(basic_string<> *)&stack0x0000001c);
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
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar2 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar1 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_0000001c + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}
