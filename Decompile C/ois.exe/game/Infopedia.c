#include "../ois.exe.h"


// public: void __thiscall Infopedia::setArticle(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall Infopedia::setArticle(Infopedia *this,void *param_2)

{
  basic_string<> *pbVar1;
  char ***pppcVar2;
  bool bVar3;
  char *pcVar4;
  char ****ppppcVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  void *pvVar8;
  basic_string<> *pbVar9;
  uint uVar10;
  uint unaff_EDI;
  uint in_stack_00000018;
  char ***local_34 [4];
  uint local_24;
  uint local_20;
  Infopedia *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2408;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  std::basic_string<>::basic_string<>((basic_string<> *)local_34,(basic_string<> *)&param_2);
  pppcVar2 = local_34[0];
  local_18 = *(int *)(this + 0x38);
  uVar10 = 0;
  local_14 = *(int *)(this + 0x3c) - local_18 >> 2;
  if (local_14 != 0) {
    do {
      ppppcVar5 = local_34;
      if (0xf < local_20) {
        ppppcVar5 = (char ****)pppcVar2;
      }
      bVar3 = std::_Traits_equal<>((char *)ppppcVar5,local_24,pcVar4,unaff_EDI);
      if (bVar3) {
        if (0xf < local_20) {
          pnVar6 = (nothrow_t *)(local_20 + 1);
          ppppcVar5 = (char ****)pppcVar2;
          if ((nothrow_t *)0xfff < pnVar6) {
            ppppcVar5 = (char ****)pppcVar2[-1];
            pnVar6 = (nothrow_t *)(local_20 + 0x24);
            if ((char *)0x1f < (char *)((int)pppcVar2 + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar5,pnVar6);
        }
        goto LAB_004a3a19;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_14);
  }
  if (0xf < local_20) {
    pnVar6 = (nothrow_t *)(local_20 + 1);
    ppppcVar5 = (char ****)pppcVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      ppppcVar5 = (char ****)pppcVar2[-1];
      pnVar6 = (nothrow_t *)(local_20 + 0x24);
      if ((char *)0x1f < (char *)((int)pppcVar2 + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar5,pnVar6);
  }
  uVar10 = 0xffffffff;
LAB_004a3a19:
  local_34[0] = (char ***)((uint)local_34[0] & 0xffffff00);
  local_20 = 0xf;
  uVar7 = 0;
  if (uVar10 != 0xffffffff) {
    uVar7 = uVar10;
  }
  local_24 = 0;
  *(uint *)(local_1c + 0x18) = uVar7;
  if ((*(int *)(local_1c + 0x3c) - *(int *)(local_1c + 0x38) & 0xfffffffcU) != 0) {
    pbVar1 = *(basic_string<> **)(*(int *)(local_1c + 0x38) + uVar7 * 4);
    *(basic_string<> **)(local_1c + 0x34) = pbVar1;
    if ((basic_string<> *)(local_1c + 0x1c) != pbVar1) {
      pbVar9 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar9 = *(basic_string<> **)pbVar1;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(local_1c + 0x1c),(char *)pbVar9,*(uint *)(pbVar1 + 0x10));
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar8 = param_2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar8 = *(void **)((int)param_2 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Infopedia::setArticle(int)

void __thiscall Infopedia::setArticle(Infopedia *this,int param_1)

{
  basic_string<> *pbVar1;
  int iVar2;
  basic_string<> *pbVar3;
  
  iVar2 = 0;
  if (param_1 != -1) {
    iVar2 = param_1;
  }
  *(int *)(this + 0x18) = iVar2;
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) != 0) {
    pbVar1 = *(basic_string<> **)(*(int *)(this + 0x38) + iVar2 * 4);
    *(basic_string<> **)(this + 0x34) = pbVar1;
    if ((basic_string<> *)(this + 0x1c) != pbVar1) {
      pbVar3 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar3 = *(basic_string<> **)pbVar1;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(this + 0x1c),(char *)pbVar3,*(uint *)(pbVar1 + 0x10));
    }
  }
  return;
}


// public: void __thiscall Infopedia::refilterArticles(void)

void __thiscall Infopedia::refilterArticles(Infopedia *this)

{
  AnimationFrames **ppAVar1;
  basic_string<> *pbVar2;
  AnimationFrames **ppAVar3;
  bool bVar4;
  basic_string<> *pbVar5;
  basic_string<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x38);
  if (*(int *)(this + 0x48) - *(int *)(this + 0x44) >> 2 != 0) {
    do {
      bVar4 = std::_Traits_equal<>("",0,(char *)unaff_EDI,(uint)unaff_ESI);
      if ((bVar4) ||
         (pbVar2 = *(basic_string<> **)(*(int *)(*(int *)(this + 0x44) + local_8 * 4) + 0x4c),
         pbVar5 = std::_Find_unchecked<>((basic_string<> *)this,unaff_EDI,unaff_ESI),
         pbVar5 != pbVar2)) {
        ppAVar3 = *(AnimationFrames ***)(this + 0x3c);
        ppAVar1 = (AnimationFrames **)(*(int *)(this + 0x44) + local_8 * 4);
        if (*(AnimationFrames ***)(this + 0x40) == ppAVar3) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x38),ppAVar3,ppAVar1);
        }
        else {
          *ppAVar3 = *ppAVar1;
          *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 4;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(this + 0x48) - *(int *)(this + 0x44) >> 2));
  }
  return;
}
