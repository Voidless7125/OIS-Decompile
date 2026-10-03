// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: BankAccount * __thiscall BankEngine::openAccount(BankEngine *this,void *param_2)
BankAccount * BankEngine::openAccount(void * param_2)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int *piVar1;
  int iVar2;
  BankAccount *pBVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  uint in_stack_00000018;
  int in_stack_0000001c;
  void *local_34 [5];
  uint local_20;
  BankAccount *local_18;
  BankEngine *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bac1f;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = this_;
  local_18 = operator_new(0x2c);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  ghidra::str::ctor((std::string *)local_34,(std::string *)&param_2);
LAB_00481de6:
  do {
    iVar4 = rand();
    pBVar3 = local_18;
    piVar1 = *(int **)this_;
    uVar9 = 0;
    iVar4 = iVar4 % 26000 + 0x2711;
    iVar2 = *(int *)(local_14 + 4) - (int)piVar1 >> 0x1f;
    iVar7 = (*(int *)(local_14 + 4) - (int)piVar1) / 0x2c + iVar2;
    piVar5 = piVar1;
    this_ = local_14;
    if (iVar7 != iVar2) {
      do {
        if (*piVar5 == iVar4) {
          if (piVar1 + uVar9 * 0xb != (int *)0x0) goto LAB_00481de6;
          break;
        }
        uVar9 = uVar9 + 1;
        piVar5 = piVar5 + 0xb;
      } while (uVar9 < (uint)(iVar7 - iVar2));
    }
    if (iVar4 != -1) {
      // [seh] local_8 = CONCAT31(local_8._1_3_,2);
      *(int *)local_18 = iVar4;
      ghidra::str::ctor
                ((std::string *)(local_18 + 4),(std::string *)local_34);
      *(int *)(pBVar3 + 0x1c) = 0;
      *(int *)(pBVar3 + 0x20) = 0;
      *(int *)(pBVar3 + 0x24) = 0;
      *(int *)(pBVar3 + 0x28) = 0;
      if (0xf < local_20) {
        pnVar8 = (nothrow_t *)(local_20 + 1);
        pvVar6 = local_34[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar6 = *(void **)((int)local_34[0] + -4);
          pnVar8 = (nothrow_t *)(local_20 + 0x24);
          if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar8);
      }
      *(int *)(pBVar3 + 0x1c) = in_stack_0000001c;
      if (0xf < in_stack_00000018) {
        pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
        pvVar6 = param_2;
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar6 = *(void **)((int)param_2 + -4);
          pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar8);
      }
      // [seh] ExceptionList = local_10;
      return pBVar3;
    }
  } while( true );
}
