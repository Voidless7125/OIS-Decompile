// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall CharacterAnimationManager::addAnimation(CharacterAnimationManager *this,basic_string<> *param_2)
void CharacterAnimationManager::addAnimation(std::string * param_2)

{
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  AnimationSet *pAVar2;
  std::string *this_00;
  std::string *this_01;
  std::string *pbVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  std::string abStack_3c [12];
  undefined4 uStack_30;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b3f30;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_14 = (std::string *)this;
  ghidra::str::ctor(abStack_3c,(std::string *)&param_2);
  pAVar2 = getSet(this);
  if (pAVar2 == (AnimationSet *)0x0) {
    this_00 = operator_new(0x24);
    pbVar3 = (std::string *)0x0;
    this_01 = (std::string *)0x0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0xf;
    *this_00 = (std::string)0x0;
    *(undefined4 *)(this_00 + 0x18) = 0;
    *(undefined4 *)(this_00 + 0x1c) = 0;
    *(undefined4 *)(this_00 + 0x20) = 0;
    local_14 = this_00;
    if (this_00 != (std::string *)&param_2) {
      pbVar3 = (std::string *)&param_2;
      if (0xf < in_stack_00000018) {
        pbVar3 = param_2;
      }
      uStack_30 = 0x42e639;
      ghidra::str::assign(this_00,(char *)pbVar3,in_stack_00000014);
      pbVar3 = *(std::string **)(this_00 + 0x20);
      this_01 = *(std::string **)(this_00 + 0x1c);
    }
    if (pbVar3 == this_01) {
      uStack_30 = 0x42e65d;
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(this_00 + 0x18),(std::string *)this_01,
                 (std::string *)&stack0x0000001c);
    }
    else {
      ghidra::str::ctor(this_01,(std::string *)&stack0x0000001c);
      *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 0x18;
    }
    ppAVar1 = *(AnimationFrames ***)((char *)this + 4);
    if (*(AnimationFrames ***)((char *)this + 8) == ppAVar1) {
      uStack_30 = 0x42e679;
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)this,ppAVar1,(AnimationFrames **)&local_14);
    }
    else {
      *ppAVar1 = (AnimationFrames *)this_00;
      *(int *)((char *)this + 4) = *(int *)((char *)this + 4) + 4;
    }
  }
  else {
    pbVar3 = *(std::string **)(pAVar2 + 0x1c);
    if (*(std::string **)(pAVar2 + 0x20) == pbVar3) {
      uStack_30 = 0x42e5df;
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(pAVar2 + 0x18),(std::string *)pbVar3,
                 (std::string *)&stack0x0000001c);
    }
    else {
      ghidra::str::ctor(pbVar3,(std::string *)&stack0x0000001c);
      *(int *)(pAVar2 + 0x1c) = *(int *)(pAVar2 + 0x1c) + 0x18;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(std::string **)(param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((std::string *)0x1f < param_2 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x42e6ac;
    operator_delete(pbVar3,pnVar5);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (std::string *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar5 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)in_stack_0000001c + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x42e6f4;
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: basic_string<> * __thiscall CharacterAnimationManager::getRandomAnimation (CharacterAnimationManager *this,basic_string<> *param_2,void *param_3)
std::string * CharacterAnimationManager::getRandomAnimation(std::string * param_2, void * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000020[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  AnimationSet *pAVar5;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  nothrow_t *pnVar9;
  int iVar10;
  std::string *pbVar11;
  uint unaff_EDI;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  char *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  std::string abStack_40 [12];
  undefined4 uStack_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b3f60;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  ghidra::str::ctor(abStack_40,(std::string *)&param_3);
  pAVar5 = getSet(this);
  if (pAVar5 == (AnimationSet *)0x0) {
    bVar3 = cc_assert_script_compatible("INVALID ANIMATION");
    if (!bVar3) {
      uStack_34 = 0x42e78b;
      cocos2d::log("Assert failed: %s");
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = (std::string)0x0;
    uStack_34 = 0x42e7ad;
    ghidra::str::assign(param_2,"",0);
  }
  else {
    pbVar11 = *(std::string **)(pAVar5 + 0x18);
    if ((*(int *)(pAVar5 + 0x1c) - (int)pbVar11) - 0x18U < 0x18) {
      ghidra::str::ctor(param_2,pbVar11);
    }
    else {
      iVar10 = -1;
      iVar8 = 0;
      do {
        if (99 < iVar8) {
          if (iVar10 == -1) {
            bVar3 = cc_assert_script_compatible("INVALID ANIMATION");
            if (!bVar3) {
              uStack_34 = 0x42e8fb;
              cocos2d::log("Assert failed: %s");
            }
            *(undefined4 *)(param_2 + 0x10) = 0;
            *(undefined4 *)(param_2 + 0x14) = 0xf;
            *param_2 = (std::string)0x0;
            uStack_34 = 0x42e91d;
            ghidra::str::assign(param_2,"",0);
            goto LAB_0042e7ad;
          }
          break;
        }
        iVar1 = *(int *)(pAVar5 + 0x1c);
        iVar2 = *(int *)(pAVar5 + 0x18);
        iVar10 = rand();
        iVar10 = iVar10 % ((iVar1 - iVar2) / 0x18);
        pbVar11 = *(std::string **)(pAVar5 + 0x18);
        pcVar6 = (char *)&stack0x00000020;
        if (0xf < in_stack_00000034) {
          pcVar6 = in_stack_00000020;
        }
        uStack_34 = 0x42e8aa;
        bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar6,in_stack_00000030,pcVar4,unaff_EDI);
        if (bVar3) {
          iVar10 = -1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar10 == -1);
      ghidra::str::ctor(param_2,pbVar11 + iVar10 * 0x18);
    }
  }
LAB_0042e7ad:
  if (0xf < in_stack_0000001c) {
    pnVar9 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar7 = param_3;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)param_3 + -4);
      pnVar9 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x42e7e0;
    operator_delete(pvVar7,pnVar9);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar9 = (nothrow_t *)(in_stack_00000034 + 1);
    pcVar4 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar4 = *(char **)(in_stack_00000020 + -4);
      pnVar9 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((char *)0x1f < in_stack_00000020 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x42e929;
    operator_delete(pcVar4,pnVar9);
  }
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: AnimationSet * __thiscall CharacterAnimationManager::getSet(CharacterAnimationManager *this,char *param_2)
AnimationSet * CharacterAnimationManager::getSet(char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  AnimationSet *pAVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)this;
  uVar6 = 0;
  uVar8 = *(int *)((char *)this + 4) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pAVar7 = *(AnimationSet **)(iVar1 + uVar6 * 4);
        goto LAB_0042e9a4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pAVar7 = (AnimationSet *)0x0;
LAB_0042e9a4:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return pAVar7;
}
