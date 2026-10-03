#include "../ois.exe.h"


// public: __thiscall UpgradeCommand::UpgradeCommand(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::function<void __cdecl(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>)

UpgradeCommand * __thiscall UpgradeCommand::UpgradeCommand(UpgradeCommand *this,void *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int *in_stack_00000040;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005c7540;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<>::basic_string<>((basic_string<> *)this,(basic_string<> *)&param_2);
  *(undefined4 *)(this + 0x3c) = 0;
  local_8._0_1_ = 3;
  if (in_stack_00000040 != (int *)0x0) {
    uVar2 = (**(code **)*in_stack_00000040)(this + 0x18,uVar1);
    *(undefined4 *)(this + 0x3c) = uVar2;
  }
  local_8 = (uint)local_8._1_3_ << 8;
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
  local_8 = 4;
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
  }
  ExceptionList = local_10;
  return this;
}
