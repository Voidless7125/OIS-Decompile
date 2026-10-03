#include "../ois.exe.h"


// public: __thiscall InputOption::InputOption(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,enum EShipCommand::ShipCommand,enum
// cocos2d::EventKeyboard::KeyCode)

InputOption * __thiscall InputOption::InputOption(InputOption *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)this,(basic_string<> *)&param_2);
  *(undefined4 *)(this + 0x1c) = in_stack_00000020;
  *(undefined4 *)(this + 0x20) = in_stack_00000020;
  this[0x18] = (InputOption)0x0;
  *(undefined4 *)(this + 0x24) = in_stack_0000001c;
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
  ExceptionList = local_10;
  return this;
}
