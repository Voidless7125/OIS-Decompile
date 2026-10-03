// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ConversationOption * __thiscall ConversationOption::ConversationOption (ConversationOption *this,undefined4 param_1,undefined4 param_2,void *param_4)
ConversationOption::ConversationOption(undefined4 param_1, undefined4 param_2, void * param_4)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b423e;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((char *)this + 4) = param_2;
  *(undefined4 *)((char *)this + 8) = in_stack_00000024;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0xf;
  ((char *)this)[0xc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xf;
  ((char *)this)[0x24] = (byte)0x0;
  // [seh] local_8 = 2;
  ghidra::str::ctor((std::string *)((char *)this + 0x3c),(std::string *)&param_4);
  ((char *)this)[0x54] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0;
  *(undefined4 *)((char *)this + 0x6c) = 0;
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall ConversationOption::checkReq(ConversationOption *this,CargoHold *param_1,BankAccount *param_2)
bool ConversationOption::checkReq(CargoHold * param_1, BankAccount * param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  
  bVar4 = false;
  uVar5 = 0;
  iVar3 = *(int *)((char *)this + 100);
  iVar2 = *(int *)((char *)this + 0x68) - iVar3 >> 2;
  if (((char *)this)[0x54] == (byte)0x0) {
    bVar4 = true;
    if (iVar2 != 0) {
      do {
        bVar1 = (*(Requirement **)(iVar3 + uVar5 * 4))->checkReq(param_1, param_2);
        iVar3 = *(int *)((char *)this + 100);
        uVar5 = uVar5 + 1;
        bVar4 = (bool)(bVar4 & -bVar1);
      } while (uVar5 < (uint)(*(int *)((char *)this + 0x68) - iVar3 >> 2));
    }
  }
  else if (iVar2 != 0) {
    do {
      bVar1 = (*(Requirement **)(iVar3 + uVar5 * 4))->checkReq(param_1, param_2);
      iVar3 = *(int *)((char *)this + 100);
      if (bVar1) {
        bVar4 = true;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)((char *)this + 0x68) - iVar3 >> 2));
    return bVar4;
  }
  return bVar4;
}
