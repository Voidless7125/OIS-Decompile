#include "../ois.exe.h"


// public: void __thiscall CommsData::clearState(void)

void __thiscall CommsData::clearState(CommsData *this)

{
  EmailInstance *this_00;
  int iVar1;
  basic_string<> *pbVar2;
  basic_string<> *pbVar3;
  basic_string<> *extraout_ECX;
  uint uVar4;
  undefined4 *puVar5;
  allocator<> *unaff_EDI;
  uint uVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b18f0;
  local_10 = ExceptionList;
  pbVar2 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uVar6 = 0;
  puVar5 = *(undefined4 **)this;
  pbVar3 = (basic_string<> *)0x0;
  uVar4 = (uint)((int)*(undefined4 **)(this + 4) + (3 - (int)puVar5)) >> 2;
  if (*(undefined4 **)(this + 4) < puVar5) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      this_00 = (EmailInstance *)*puVar5;
      pbVar3 = (basic_string<> *)0x0;
      if (this_00 != (EmailInstance *)0x0) {
        EmailInstance::_scalar_deleting_destructor_(this_00,(uint)this_00);
        pbVar3 = extraout_ECX;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != uVar4);
    puVar5 = *(undefined4 **)this;
  }
  *(undefined4 **)(this + 4) = puVar5;
  std::_Destroy_range<>(pbVar3,pbVar2,unaff_EDI);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x20);
  std::_Destroy_range<>(pbVar3,pbVar2,unaff_EDI);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x14);
  local_8 = 0;
  iVar1 = *(int *)(this + 0xc);
  std::_Tree<>::_Erase((_Tree<> *)(this + 0xc),*(_Tree_node<> **)(iVar1 + 4));
  *(int *)(*(int *)(this + 0xc) + 4) = iVar1;
  **(int **)(this + 0xc) = iVar1;
  *(int *)(*(int *)(this + 0xc) + 8) = iVar1;
  *(undefined4 *)(this + 0x10) = 0;
  ExceptionList = local_10;
  return;
}


// public: int __thiscall CommsData::getDraftCount(void)

int __thiscall CommsData::getDraftCount(CommsData *this)

{
  basic_string<> *pbVar1;
  int iVar2;
  bool bVar3;
  EmailManager *pEVar4;
  basic_string<> *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  basic_string<> *unaff_ESI;
  uint uVar9;
  uint uVar10;
  basic_string<> *unaff_EDI;
  int local_10;
  
  uVar8 = 0;
  local_10 = 0;
  pEVar4 = Singleton<>::instance;
  do {
    if (pEVar4 == (EmailManager *)0x0) {
      pEVar4 = operator_new(0x2c);
      Singleton<>::instance = pEVar4;
      *pEVar4 = (EmailManager)0x0;
      *(undefined4 *)(pEVar4 + 4) = 0;
      *(undefined4 *)(pEVar4 + 8) = 0;
      *(undefined4 *)(pEVar4 + 0xc) = 0;
      *(undefined4 *)(pEVar4 + 0x10) = 0;
      *(undefined4 *)(pEVar4 + 0x14) = 0;
      *(undefined4 *)(pEVar4 + 0x18) = 0;
      *(undefined4 *)(pEVar4 + 0x1c) = 0;
      *(undefined4 *)(pEVar4 + 0x20) = 0;
      *(undefined4 *)(pEVar4 + 0x24) = 0;
      *(undefined4 *)(pEVar4 + 0x28) = 0;
    }
    if ((uint)(*(int *)(pEVar4 + 0x24) - *(int *)(pEVar4 + 0x20) >> 2) <= uVar8) {
      return local_10;
    }
    pbVar1 = *(basic_string<> **)(this + 0x24);
    if (pEVar4 == (EmailManager *)0x0) {
      pEVar4 = operator_new(0x2c);
      Singleton<>::instance = pEVar4;
      *pEVar4 = (EmailManager)0x0;
      *(undefined4 *)(pEVar4 + 4) = 0;
      *(undefined4 *)(pEVar4 + 8) = 0;
      *(undefined4 *)(pEVar4 + 0xc) = 0;
      *(undefined4 *)(pEVar4 + 0x10) = 0;
      *(undefined4 *)(pEVar4 + 0x14) = 0;
      *(undefined4 *)(pEVar4 + 0x18) = 0;
      *(undefined4 *)(pEVar4 + 0x1c) = 0;
      *(undefined4 *)(pEVar4 + 0x20) = 0;
      *(undefined4 *)(pEVar4 + 0x24) = 0;
      *(undefined4 *)(pEVar4 + 0x28) = 0;
    }
    pbVar5 = std::_Find_unchecked<>
                       (*(basic_string<> **)(*(int *)(pEVar4 + 0x20) + uVar8 * 4),unaff_EDI,
                        unaff_ESI);
    if (pbVar5 == pbVar1) {
      pEVar4 = Singleton<>::getInstance();
      uVar9 = 0;
      iVar2 = *(int *)(*(int *)(pEVar4 + 0x20) + uVar8 * 4);
      iVar6 = *(int *)(iVar2 + 0x48);
      if (*(int *)(iVar2 + 0x4c) - iVar6 >> 2 != 0) {
        do {
          bVar3 = Requirement::checkReq
                            (*(Requirement **)(iVar6 + uVar9 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          pEVar4 = Singleton<>::instance;
          if (!bVar3) goto LAB_004b3d97;
          uVar9 = uVar9 + 1;
          iVar6 = *(int *)(iVar2 + 0x48);
        } while (uVar9 < (uint)(*(int *)(iVar2 + 0x4c) - iVar6 >> 2));
      }
      uVar9 = 0;
      iVar6 = *(int *)(iVar2 + 0x54);
      pEVar4 = Singleton<>::instance;
      if (*(int *)(iVar2 + 0x58) - iVar6 >> 2 != 0) {
        do {
          iVar6 = *(int *)(iVar6 + uVar9 * 4);
          uVar10 = 0;
          iVar7 = *(int *)(iVar6 + 100);
          if (*(int *)(iVar6 + 0x68) - iVar7 >> 2 != 0) {
            do {
              bVar3 = Requirement::checkReq
                                (*(Requirement **)(iVar7 + uVar10 * 4),
                                 *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                 *(BankAccount **)(g_gameData + 0x124));
              if (!bVar3) goto LAB_004b3d7d;
              uVar10 = uVar10 + 1;
              iVar6 = *(int *)(*(int *)(iVar2 + 0x54) + uVar9 * 4);
              iVar7 = *(int *)(iVar6 + 100);
            } while (uVar10 < (uint)(*(int *)(iVar6 + 0x68) - iVar7 >> 2));
          }
          local_10 = local_10 + 1;
LAB_004b3d7d:
          uVar9 = uVar9 + 1;
          iVar6 = *(int *)(iVar2 + 0x54);
          pEVar4 = Singleton<>::instance;
        } while (uVar9 < (uint)(*(int *)(iVar2 + 0x58) - iVar6 >> 2));
      }
    }
LAB_004b3d97:
    uVar8 = uVar8 + 1;
  } while( true );
}


// public: bool __thiscall CommsData::articleRead(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall CommsData::articleRead(CommsData *this,void *param_2)

{
  bool *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  undefined1 uVar4;
  int iVar5;
  uint in_stack_00000018;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b37a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::_Tree<>::_Eqrange<>((_Tree<> *)(this + 0xc),(basic_string<> *)&local_1c);
  iVar5 = 0;
  local_14 = local_1c;
  if (local_1c != local_18) {
    do {
      iVar5 = iVar5 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
    } while (local_14 != local_18);
    if (iVar5 != 0) {
      pbVar1 = std::map<>::operator[]((map<> *)(this + 0xc),(basic_string<> *)&param_2);
      uVar4 = *pbVar1;
      goto LAB_004b3e23;
    }
  }
  uVar4 = 0;
LAB_004b3e23:
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return (bool)uVar4;
}
