#include "../ois.exe.h"


// public: __thiscall Email::Email(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

Email * __thiscall Email::Email(Email *this,void *param_2)

{
  undefined4 extraout_ECX;
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  undefined4 in_stack_0000002c;
  uint in_stack_00000030;
  void *in_stack_00000034;
  undefined4 in_stack_00000044;
  uint in_stack_00000048;
  void *in_stack_0000004c;
  undefined4 in_stack_0000005c;
  uint in_stack_00000060;
  void *in_stack_00000064;
  uint in_stack_00000078;
  basic_string<> abStack_8c [16];
  undefined4 uStack_7c;
  basic_string<> abStack_74 [16];
  undefined4 uStack_64;
  basic_string<> abStack_5c [16];
  undefined4 uStack_4c;
  basic_string<> abStack_44 [12];
  undefined4 uStack_38;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4f18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 4;
  uStack_4c = 0x439726;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&stack0x00000064);
  local_8._0_1_ = 5;
  uStack_64 = 0x43973b;
  std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)&stack0x0000004c);
  local_8._0_1_ = 6;
  uStack_7c = 0x439750;
  std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)&stack0x00000034);
  local_8._0_1_ = 7;
  std::basic_string<>::basic_string<>(abStack_8c,(basic_string<> *)&param_2);
  local_8._0_1_ = 4;
  Message::Message((Message *)this,extraout_ECX);
  local_8 = CONCAT31(local_8._1_3_,8);
  *(undefined2 *)(this + 100) = 0;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x68),(basic_string<> *)&stack0x0000001c);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined1 **)(this + 0x98) = &DAT_bf800000;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0xf;
  this[0xa0] = (Email)0x0;
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
    uStack_38 = 0x439822;
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
    uStack_38 = 0x43986a;
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (void *)((uint)in_stack_0000001c & 0xffffff00);
  if (0xf < in_stack_00000048) {
    pnVar2 = (nothrow_t *)(in_stack_00000048 + 1);
    pvVar1 = in_stack_00000034;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000034 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000048 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000034 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x4398b2;
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000044 = 0;
  in_stack_00000048 = 0xf;
  in_stack_00000034 = (void *)((uint)in_stack_00000034 & 0xffffff00);
  if (0xf < in_stack_00000060) {
    pnVar2 = (nothrow_t *)(in_stack_00000060 + 1);
    pvVar1 = in_stack_0000004c;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_0000004c + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000060 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000004c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x4398fa;
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_0000005c = 0;
  in_stack_00000060 = 0xf;
  in_stack_0000004c = (void *)((uint)in_stack_0000004c & 0xffffff00);
  if (0xf < in_stack_00000078) {
    pnVar2 = (nothrow_t *)(in_stack_00000078 + 1);
    pvVar1 = in_stack_00000064;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000064 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000078 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000064 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x439942;
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}
