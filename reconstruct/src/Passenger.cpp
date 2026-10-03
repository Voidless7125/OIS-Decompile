// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Passenger * __thiscall Passenger::Passenger(Passenger *this)
Passenger::Passenger()

{
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0;
  *(undefined4 *)((char *)this + 0x3c) = 100;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0;
  *(undefined4 *)((char *)this + 0x48) = 0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0;
  *(undefined4 *)((char *)this + 0x54) = 0;
  return;
}


// Ghidra: void __thiscall Passenger::addQuirk(undefined4 param_1,undefined4 *param_2)
void Passenger::addQuirk(undefined4 param_1, undefined4 * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  bool bVar2;
  char *pcVar3;
  PassengerManager *pPVar4;
  char ****ppppcVar5;
  undefined4 *puVar6;
  nothrow_t *pnVar7;
  AnimationFrames *pAVar8;
  uint unaff_EDI;
  uint in_stack_00000018;
  char ***local_34 [4];
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  AnimationFrames *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005bb0c0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor((std::string *)local_34,(std::string *)&param_2);
  // [seh] local_8._0_1_ = 1;
  pPVar4 = ghidra::any_singleton();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  pAVar8 = (AnimationFrames *)0x0;
  local_18 = *(int *)(pPVar4 + 0xc);
  local_14 = (AnimationFrames *)(*(int *)(pPVar4 + 0x10) - local_18 >> 2);
  if (local_14 != (AnimationFrames *)0x0) {
    do {
      ppppcVar5 = local_34;
      if (0xf < local_20) {
        ppppcVar5 = (char ****)local_34[0];
      }
      bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar5,local_24,pcVar3,unaff_EDI);
      if (bVar2) {
        pAVar8 = *(AnimationFrames **)(local_18 + (int)pAVar8 * 4);
        if (0xf < local_20) {
          pnVar7 = (nothrow_t *)(local_20 + 1);
          ppppcVar5 = (char ****)local_34[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            ppppcVar5 = (char ****)local_34[0][-1];
            pnVar7 = (nothrow_t *)(local_20 + 0x24);
            if ((char *)0x1f < (char *)((int)local_34[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar5,pnVar7);
        }
        goto LAB_00484f0c;
      }
      pAVar8 = pAVar8 + 1;
    } while (pAVar8 < local_14);
  }
  if (0xf < local_20) {
    pnVar7 = (nothrow_t *)(local_20 + 1);
    ppppcVar5 = (char ****)local_34[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      ppppcVar5 = (char ****)local_34[0][-1];
      pnVar7 = (nothrow_t *)(local_20 + 0x24);
      if ((char *)0x1f < (char *)((int)local_34[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar5,pnVar7);
  }
  pAVar8 = (AnimationFrames *)0x0;
LAB_00484f0c:
  local_14 = pAVar8;
  if (pAVar8 == (AnimationFrames *)0x0) {
    puVar6 = &param_2;
    if (0xf < in_stack_00000018) {
      puVar6 = param_2;
    }
    debugPrint("ERROR","Invalid quirk, \'%s\'",puVar6);
    bVar2 = cc_assert_script_compatible("Invalid quirk.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","Invalid quirk.");
    }
  }
  else {
    ppAVar1 = *(AnimationFrames ***)(local_1c + 0x50);
    if (*(AnimationFrames ***)(local_1c + 0x54) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(local_1c + 0x4c),ppAVar1,&local_14);
    }
    else {
      *ppAVar1 = pAVar8;
      *(int *)(local_1c + 0x50) = *(int *)(local_1c + 0x50) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      puVar6 = (undefined4 *)param_2[-1];
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar6,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  return;
}
