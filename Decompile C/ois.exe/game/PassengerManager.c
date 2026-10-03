#include "../ois.exe.h"


// public: class std::vector<class Passenger *,class std::allocator<class Passenger *> > __thiscall
// PassengerManager::getValidPassengersForLocation(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

vector<> * __thiscall
PassengerManager::getValidPassengersForLocation
          (PassengerManager *this,vector<> *param_2,char *param_3)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  nothrow_t *pnVar6;
  int iVar7;
  uint unaff_EDI;
  uint uVar8;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_20;
  char *local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bb2b1;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  iVar7 = *(int *)this;
  local_20 = 0;
  if (*(int *)(this + 4) - iVar7 >> 2 != 0) {
    do {
      iVar1 = local_20 * 4;
      local_1c = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        local_1c = param_3;
      }
      bVar3 = std::_Traits_equal<>(local_1c,in_stack_00000018,pcVar4,unaff_EDI);
      if (bVar3) {
        uVar8 = 0;
        if (*(int *)(*(int *)(iVar1 + iVar7) + 0x44) - *(int *)(*(int *)(iVar1 + iVar7) + 0x40) >> 2
            != 0) {
          iVar5 = *(int *)(*(int *)(iVar1 + iVar7) + 0x40);
          do {
            Requirement::checkReq
                      (*(Requirement **)(iVar5 + uVar8 * 4),
                       *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                       *(BankAccount **)(g_gameData + 0x124));
            uVar8 = uVar8 + 1;
            iVar7 = *(int *)this;
            iVar5 = *(int *)(*(int *)(iVar7 + iVar1) + 0x40);
          } while (uVar8 < (uint)(*(int *)(*(int *)(iVar7 + iVar1) + 0x44) - iVar5 >> 2));
        }
        ppAVar2 = *(AnimationFrames ***)(param_2 + 4);
        if (*(AnimationFrames ***)(param_2 + 8) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>(param_2,ppAVar2,(AnimationFrames **)(iVar1 + iVar7));
        }
        else {
          *ppAVar2 = *(AnimationFrames **)(iVar1 + iVar7);
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 4;
        }
      }
      local_20 = local_20 + 1;
      iVar7 = *(int *)this;
    } while (local_20 < (uint)(*(int *)(this + 4) - iVar7 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pnVar6 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar4 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar4 = *(char **)(param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar6);
  }
  ExceptionList = local_10;
  return param_2;
}
