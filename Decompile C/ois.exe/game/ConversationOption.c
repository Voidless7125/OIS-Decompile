#include "../ois.exe.h"


// public: __thiscall ConversationOption::ConversationOption(int,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int)

ConversationOption * __thiscall
ConversationOption::ConversationOption
          (ConversationOption *this,undefined4 param_1,undefined4 param_2,void *param_4)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b423e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = in_stack_00000024;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xf;
  this[0xc] = (ConversationOption)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0xf;
  this[0x24] = (ConversationOption)0x0;
  local_8 = 2;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x3c),(basic_string<> *)&param_4);
  this[0x54] = (ConversationOption)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_4;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_4 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}


// public: bool __thiscall ConversationOption::checkReq(class CargoHold *,class BankAccount *)

bool __thiscall
ConversationOption::checkReq(ConversationOption *this,CargoHold *param_1,BankAccount *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  
  bVar4 = false;
  uVar5 = 0;
  iVar3 = *(int *)(this + 100);
  iVar2 = *(int *)(this + 0x68) - iVar3 >> 2;
  if (this[0x54] == (ConversationOption)0x0) {
    bVar4 = true;
    if (iVar2 != 0) {
      do {
        bVar1 = Requirement::checkReq(*(Requirement **)(iVar3 + uVar5 * 4),param_1,param_2);
        iVar3 = *(int *)(this + 100);
        uVar5 = uVar5 + 1;
        bVar4 = (bool)(bVar4 & -bVar1);
      } while (uVar5 < (uint)(*(int *)(this + 0x68) - iVar3 >> 2));
    }
  }
  else if (iVar2 != 0) {
    do {
      bVar1 = Requirement::checkReq(*(Requirement **)(iVar3 + uVar5 * 4),param_1,param_2);
      iVar3 = *(int *)(this + 100);
      if (bVar1) {
        bVar4 = true;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(this + 0x68) - iVar3 >> 2));
    return bVar4;
  }
  return bVar4;
}
