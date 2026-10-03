#include "../ois.exe.h"


// public: __thiscall ServerMenuItem::ServerMenuItem(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::function<void
// __cdecl(int)>,int,class std::function<bool __cdecl(int)>,bool)

ServerMenuItem * __thiscall
ServerMenuItem::ServerMenuItem(ServerMenuItem *this,undefined4 param_1,void *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  int *in_stack_00000044;
  undefined4 in_stack_00000048;
  int *in_stack_00000070;
  ServerMenuItem in_stack_00000074;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c685e;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  *(undefined4 *)this = param_1;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 4),(basic_string<> *)&param_3);
  *(undefined4 *)(this + 0x44) = 0;
  local_8._0_1_ = 4;
  if (in_stack_00000044 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000044)(this + 0x20,uVar1);
    *(undefined4 *)(this + 0x44) = uVar2;
  }
  *(undefined4 *)(this + 0x6c) = 0;
  local_8._0_1_ = 6;
  if (in_stack_00000070 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000070)(this + 0x48);
    *(undefined4 *)(this + 0x6c) = uVar2;
  }
  *(undefined4 *)(this + 0x70) = in_stack_00000048;
  local_8._0_1_ = 1;
  this[0x74] = in_stack_00000074;
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (in_stack_00000044 != (int *)0x0) {
    (**(code **)(*in_stack_00000044 + 0x10))(in_stack_00000044 != (int *)&stack0x00000020);
    in_stack_00000044 = (int *)0x0;
  }
  local_8 = 8;
  if (in_stack_00000070 != (int *)0x0) {
    (**(code **)(*in_stack_00000070 + 0x10))(in_stack_00000070 != (int *)&stack0x0000004c);
  }
  ExceptionList = local_10;
  return this;
}
