// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ContractClass * __thiscall ContractManager::getContractClassForIdentifier(undefined4 param_1,char *param_2)
ContractClass * ContractManager::getContractClassForIdentifier(undefined4 param_1, char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  char *pcVar3;
  TradeEngine *pTVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  ContractClass *pCVar8;
  uint unaff_EDI;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005bb04c;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar7 = 0;
  pTVar4 = ghidra::Singleton<void>::instance;
  do {
    if (pTVar4 == (TradeEngine *)0x0) {
      pTVar4 = operator_new(300);
      // [seh] local_8._0_1_ = 1;
      pTVar4 = (TradeEngine *)new ((void *)(pTVar4)) TradeEngine();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      ghidra::Singleton<void>::instance = pTVar4;
    }
    if ((uint)(*(int *)(pTVar4 + 4) - *(int *)pTVar4 >> 2) <= uVar7) {
      pCVar8 = (ContractClass *)0x0;
LAB_004849af:
      if (0xf < in_stack_00000018) {
        pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
        pcVar3 = param_2;
        if ((nothrow_t *)0xfff < pnVar6) {
          pcVar3 = *(char **)(param_2 + -4);
          pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if ((char *)0x1f < param_2 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar3,pnVar6);
      }
      // [seh] ExceptionList = local_10;
      return pCVar8;
    }
    uVar9 = 0;
    while( true ) {
      if (pTVar4 == (TradeEngine *)0x0) {
        pTVar4 = operator_new(300);
        // [seh] local_8._0_1_ = 2;
        pTVar4 = (TradeEngine *)new ((void *)(pTVar4)) TradeEngine();
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        ghidra::Singleton<void>::instance = pTVar4;
      }
      iVar1 = *(int *)(*(int *)pTVar4 + uVar7 * 4);
      if ((uint)(*(int *)(iVar1 + 0xa4) - *(int *)(iVar1 + 0xa0) >> 2) <= uVar9) break;
      pcVar5 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar5 = param_2;
      }
      bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
      if (bVar2) {
        pCVar8 = *(ContractClass **)
                  (*(int *)(*(int *)(*(int *)pTVar4 + uVar7 * 4) + 0xa0) + uVar9 * 4);
        goto LAB_004849af;
      }
      uVar9 = uVar9 + 1;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


// Ghidra: Contract * __thiscall ContractManager::generateContract(void)
Contract * ContractManager::generateContract()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000014[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000008[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  Dice *pDVar3;
  ContractClass *pCVar4;
  ContractClass *pCVar5;
  int iVar6;
  std::string *pbVar7;
  std::string *pbVar8;
  int iVar9;
  std::string *pbVar10;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  std::string *this_;
  std::string *in_stack_00000014;
  uint in_stack_00000024;
  uint in_stack_00000028;
  ghidra::vector avStack_50 [4];
  undefined4 uStack_4c;
  std::string abStack_44 [12];
  undefined4 uStack_38;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bb088;
  // [seh] local_10 = ExceptionList;
  // [cookie] pDVar3 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  uStack_4c = 0x484a43;
  ghidra::str::ctor(abStack_44,(std::string *)&stack0x00000014);
  // [seh] local_8._0_1_ = 2;
  ghidra::lib::vector__vector(avStack_50,(ghidra::vector *)&stack0x00000008);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  pCVar4 = getRandomContractClassForLocation();
  if (pCVar4 == (ContractClass *)0x0) {
    this_ = (std::string *)0x0;
  }
  else {
    this_ = operator_new(0x5c);
    pbVar10 = this_ + 0x38;
    *(undefined4 *)((char *)this_ + 0x10) = 0;
    *(undefined4 *)((char *)this_ + 0x14) = 0xf;
    *this_ = (std::string)0x0;
    *(undefined1 **)((char *)this_ + 0x18) = &DAT_bf800000;
    *(undefined4 *)((char *)this_ + 0x1c) = 0;
    *(undefined4 *)((char *)this_ + 0x30) = 0;
    *(undefined4 *)((char *)this_ + 0x34) = 0xf;
    ((char *)this_)[0x20] = (std::string)0x0;
    *(undefined4 *)((char *)this_ + 0x48) = 0;
    *(undefined4 *)((char *)this_ + 0x4c) = 0xf;
    *pbVar10 = (std::string)0x0;
    *(undefined4 *)((char *)this_ + 0x50) = 0;
    *(undefined4 *)((char *)this_ + 0x54) = 0;
    *(undefined4 *)((char *)this_ + 0x58) = 0;
    uStack_38 = 0x484aee;
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pDVar3,unaff_EDI);
    if ((!bVar2) && (this_ != (std::string *)pCVar4)) {
      pCVar5 = pCVar4;
      if (0xf < *(uint *)(pCVar4 + 0x14)) {
        pCVar5 = *(ContractClass **)pCVar4;
      }
      uStack_38 = 0x484b0e;
      ghidra::str::assign(this_,(char *)pCVar5,*(uint *)(pCVar4 + 0x10));
    }
    *(ContractClass **)((char *)this_ + 0x54) = pCVar4;
    iVar9 = *(int *)(pCVar4 + 0x18);
    if (iVar9 == 1) {
      iVar9 = *(int *)(pCVar4 + 0x20);
      iVar1 = *(int *)(pCVar4 + 0x1c);
      iVar6 = rand();
      pbVar10 = (std::string *)
                (*(int *)(pCVar4 + 0x1c) + (iVar6 % ((iVar9 - iVar1) / 0x18)) * 0x18);
      if (this_ + 0x20 != pbVar10) {
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar8 = *(std::string **)pbVar10;
        }
        uStack_38 = 0x484b60;
        ghidra::str::assign(this_ + 0x20,(char *)pbVar8,*(uint *)(pbVar10 + 0x10));
      }
    }
    else if (iVar9 == 0) {
      if (pbVar10 != (std::string *)&stack0x00000014) {
        pbVar8 = (std::string *)&stack0x00000014;
        if (0xf < in_stack_00000028) {
          pbVar8 = in_stack_00000014;
        }
        uStack_38 = 0x484b87;
        ghidra::str::assign(pbVar10,(char *)pbVar8,in_stack_00000024);
      }
    }
    else if (iVar9 == 2) {
      pbVar8 = (std::string *)&stack0x00000014;
      if (0xf < in_stack_00000028) {
        pbVar8 = in_stack_00000014;
      }
      uStack_38 = 0x484bb8;
      bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)pbVar8,in_stack_00000024,(char *)pDVar3,unaff_EDI);
      if (bVar2) {
        ghidra::lib::basic_string__operator_x3d(pbVar10,(std::string *)&stack0x00000014);
        iVar9 = *(int *)(pCVar4 + 0x20);
        iVar1 = *(int *)(pCVar4 + 0x1c);
        iVar6 = rand();
        pbVar7 = (std::string *)
                 (*(int *)(pCVar4 + 0x1c) + (iVar6 % ((iVar9 - iVar1) / 0x18)) * 0x18);
      }
      else {
        iVar9 = *(int *)(pCVar4 + 0x20);
        iVar1 = *(int *)(pCVar4 + 0x1c);
        iVar6 = rand();
        ghidra::lib::basic_string__operator_x3d
                  (this_ + 0x38,
                   (std::string *)
                   (*(int *)(pCVar4 + 0x1c) + (iVar6 % ((iVar9 - iVar1) / 0x18)) * 0x18));
        pbVar7 = (std::string *)&stack0x00000014;
      }
      ghidra::lib::basic_string__operator_x3d(this_ + 0x20,pbVar7);
    }
    pbVar8 = operator_new(0x48);
    *(undefined4 *)(pbVar8 + 0x10) = 0;
    *(undefined4 *)(pbVar8 + 0x14) = 0xf;
    *pbVar8 = (std::string)0x0;
    *(undefined4 *)(pbVar8 + 0x18) = 0;
    *(undefined4 *)(pbVar8 + 0x1c) = 0;
    *(undefined4 *)(pbVar8 + 0x20) = 0;
    *(undefined4 *)(pbVar8 + 0x24) = 0;
    *(undefined4 *)(pbVar8 + 0x28) = 0;
    *(undefined4 *)(pbVar8 + 0x2c) = 0;
    *(undefined4 *)(pbVar8 + 0x40) = 0;
    *(undefined4 *)(pbVar8 + 0x44) = 0xf;
    pbVar8[0x30] = (std::string)0x0;
    *(std::string **)((char *)this_ + 0x58) = pbVar8;
    iVar9 = *(int *)(pCVar4 + 0x40);
    pbVar10 = (std::string *)(iVar9 + 8);
    if (pbVar8 != pbVar10) {
      if (0xf < *(uint *)(iVar9 + 0x1c)) {
        pbVar10 = *(std::string **)pbVar10;
      }
      uStack_38 = 0x484caf;
      ghidra::str::assign(pbVar8,(char *)pbVar10,*(uint *)(iVar9 + 0x18));
    }
    iVar9 = diceRoll(pDVar3);
    *(int *)(*(int *)((char *)this_ + 0x58) + 0x18) = iVar9;
    *(undefined4 *)(*(int *)((char *)this_ + 0x58) + 0x1c) = *(undefined4 *)(*(int *)((char *)this_ + 0x58) + 0x18);
    *(undefined4 *)(*(int *)((char *)this_ + 0x58) + 0x20) = *(undefined4 *)(*(int *)((char *)this_ + 0x58) + 0x18);
    *(undefined4 *)(*(int *)((char *)this_ + 0x58) + 0x24) = *(undefined4 *)(*(int *)(pCVar4 + 0x40) + 4);
    *(undefined4 *)(*(int *)((char *)this_ + 0x58) + 0x28) = **(undefined4 **)(pCVar4 + 0x40);
    *(int *)(*(int *)((char *)this_ + 0x58) + 0x2c) =
         (int)((float)(&economyDiffMultipler)[*(int *)(g_gameLogic + 0xc4)] *
               (float)*(int *)(*(int *)(pCVar4 + 0x40) + 0x20) +
              (float)*(int *)(*(int *)(pCVar4 + 0x40) + 0x20));
    *(float *)((char *)this_ + 0x1c) = (float)*(int *)(pCVar4 + 0x44);
  }
  if (0xf < in_stack_00000028) {
    pnVar11 = (nothrow_t *)(in_stack_00000028 + 1);
    pbVar10 = in_stack_00000014;
    if ((nothrow_t *)0xfff < pnVar11) {
      pbVar10 = *(std::string **)(in_stack_00000014 + -4);
      pnVar11 = (nothrow_t *)(in_stack_00000028 + 0x24);
      if ((std::string *)0x1f < in_stack_00000014 + (-4 - (int)pbVar10)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x484d5a;
    operator_delete(pbVar10,pnVar11);
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0xf;
  in_stack_00000014 = (std::string *)((uint)in_stack_00000014 & 0xffffff00);
  ghidra::lib::vector___Tidy((ghidra::vector *)&stack0x00000008);
  // [seh] ExceptionList = local_10;
  return (Contract *)this_;
}
