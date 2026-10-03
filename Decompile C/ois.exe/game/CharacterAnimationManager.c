#include "../ois.exe.h"


// public: void __thiscall CharacterAnimationManager::addAnimation(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
CharacterAnimationManager::addAnimation(CharacterAnimationManager *this,basic_string<> *param_2)

{
  AnimationFrames **ppAVar1;
  AnimationSet *pAVar2;
  basic_string<> *this_00;
  basic_string<> *this_01;
  basic_string<> *pbVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_14 = (basic_string<> *)this;
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)&param_2);
  pAVar2 = getSet(this);
  if (pAVar2 == (AnimationSet *)0x0) {
    this_00 = operator_new(0x24);
    pbVar3 = (basic_string<> *)0x0;
    this_01 = (basic_string<> *)0x0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0xf;
    *this_00 = (basic_string<>)0x0;
    *(undefined4 *)(this_00 + 0x18) = 0;
    *(undefined4 *)(this_00 + 0x1c) = 0;
    *(undefined4 *)(this_00 + 0x20) = 0;
    local_14 = this_00;
    if (this_00 != (basic_string<> *)&param_2) {
      pbVar3 = (basic_string<> *)&param_2;
      if (0xf < in_stack_00000018) {
        pbVar3 = param_2;
      }
      uStack_30 = 0x42e639;
      std::basic_string<>::assign(this_00,(char *)pbVar3,in_stack_00000014);
      pbVar3 = *(basic_string<> **)(this_00 + 0x20);
      this_01 = *(basic_string<> **)(this_00 + 0x1c);
    }
    if (pbVar3 == this_01) {
      uStack_30 = 0x42e65d;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(this_00 + 0x18),(basic_string<> *)this_01,
                 (basic_string<> *)&stack0x0000001c);
    }
    else {
      std::basic_string<>::basic_string<>(this_01,(basic_string<> *)&stack0x0000001c);
      *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 0x18;
    }
    ppAVar1 = *(AnimationFrames ***)(this + 4);
    if (*(AnimationFrames ***)(this + 8) == ppAVar1) {
      uStack_30 = 0x42e679;
      std::vector<>::_Emplace_reallocate<>((vector<> *)this,ppAVar1,(AnimationFrames **)&local_14);
    }
    else {
      *ppAVar1 = (AnimationFrames *)this_00;
      *(int *)(this + 4) = *(int *)(this + 4) + 4;
    }
  }
  else {
    pbVar3 = *(basic_string<> **)(pAVar2 + 0x1c);
    if (*(basic_string<> **)(pAVar2 + 0x20) == pbVar3) {
      uStack_30 = 0x42e5df;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(pAVar2 + 0x18),(basic_string<> *)pbVar3,
                 (basic_string<> *)&stack0x0000001c);
    }
    else {
      std::basic_string<>::basic_string<>(pbVar3,(basic_string<> *)&stack0x0000001c);
      *(int *)(pAVar2 + 0x1c) = *(int *)(pAVar2 + 0x1c) + 0x18;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(basic_string<> **)(param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x42e6ac;
    operator_delete(pbVar3,pnVar5);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (basic_string<> *)((uint)param_2 & 0xffffff00);
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
  ExceptionList = local_10;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall CharacterAnimationManager::getRandomAnimation(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

basic_string<> * __thiscall
CharacterAnimationManager::getRandomAnimation
          (CharacterAnimationManager *this,basic_string<> *param_2,void *param_3)

{
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
  basic_string<> *pbVar11;
  uint unaff_EDI;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  char *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  basic_string<> abStack_40 [12];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3f60;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)&param_3);
  pAVar5 = getSet(this);
  if (pAVar5 == (AnimationSet *)0x0) {
    bVar3 = cc_assert_script_compatible("INVALID ANIMATION");
    if (!bVar3) {
      uStack_34 = 0x42e78b;
      cocos2d::log("Assert failed: %s");
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = (basic_string<>)0x0;
    uStack_34 = 0x42e7ad;
    std::basic_string<>::assign(param_2,"",0);
  }
  else {
    pbVar11 = *(basic_string<> **)(pAVar5 + 0x18);
    if ((*(int *)(pAVar5 + 0x1c) - (int)pbVar11) - 0x18U < 0x18) {
      std::basic_string<>::basic_string<>(param_2,pbVar11);
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
            *param_2 = (basic_string<>)0x0;
            uStack_34 = 0x42e91d;
            std::basic_string<>::assign(param_2,"",0);
            goto LAB_0042e7ad;
          }
          break;
        }
        iVar1 = *(int *)(pAVar5 + 0x1c);
        iVar2 = *(int *)(pAVar5 + 0x18);
        iVar10 = rand();
        iVar10 = iVar10 % ((iVar1 - iVar2) / 0x18);
        pbVar11 = *(basic_string<> **)(pAVar5 + 0x18);
        pcVar6 = (char *)&stack0x00000020;
        if (0xf < in_stack_00000034) {
          pcVar6 = in_stack_00000020;
        }
        uStack_34 = 0x42e8aa;
        bVar3 = std::_Traits_equal<>(pcVar6,in_stack_00000030,pcVar4,unaff_EDI);
        if (bVar3) {
          iVar10 = -1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar10 == -1);
      std::basic_string<>::basic_string<>(param_2,pbVar11 + iVar10 * 0x18);
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
  ExceptionList = local_10;
  return param_2;
}


// public: class AnimationSet * __thiscall CharacterAnimationManager::getSet(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

AnimationSet * __thiscall
CharacterAnimationManager::getSet(CharacterAnimationManager *this,char *param_2)

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
  uVar8 = *(int *)(this + 4) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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
