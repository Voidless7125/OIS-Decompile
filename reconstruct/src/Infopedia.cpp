// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Infopedia::setArticle(Infopedia *this,void *param_2)
void Infopedia::setArticle(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  char ***pppcVar2;
  bool bVar3;
  char *pcVar4;
  char ****ppppcVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  void *pvVar8;
  std::string *pbVar9;
  uint uVar10;
  uint unaff_EDI;
  uint in_stack_00000018;
  char ***local_34 [4];
  uint local_24;
  uint local_20;
  Infopedia *local_1c;
  int local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2408;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_1c = this;
  ghidra::str::ctor((std::string *)local_34,(std::string *)&param_2);
  pppcVar2 = local_34[0];
  local_18 = *(int *)((char *)this + 0x38);
  uVar10 = 0;
  local_14 = *(int *)((char *)this + 0x3c) - local_18 >> 2;
  if (local_14 != 0) {
    do {
      ppppcVar5 = local_34;
      if (0xf < local_20) {
        ppppcVar5 = (char ****)pppcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar5,local_24,pcVar4,unaff_EDI);
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
    pbVar1 = *(std::string **)(*(int *)(local_1c + 0x38) + uVar7 * 4);
    *(std::string **)(local_1c + 0x34) = pbVar1;
    if ((std::string *)(local_1c + 0x1c) != pbVar1) {
      pbVar9 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar9 = *(std::string **)pbVar1;
      }
      ghidra::str::assign
                ((std::string *)(local_1c + 0x1c),(char *)pbVar9,*(uint *)(pbVar1 + 0x10));
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Infopedia::setArticle(Infopedia *this,int param_1)
void Infopedia::setArticle(int param_1)

{
  std::string *pbVar1;
  int iVar2;
  std::string *pbVar3;
  
  iVar2 = 0;
  if (param_1 != -1) {
    iVar2 = param_1;
  }
  *(int *)((char *)this + 0x18) = iVar2;
  if ((*(int *)((char *)this + 0x3c) - *(int *)((char *)this + 0x38) & 0xfffffffcU) != 0) {
    pbVar1 = *(std::string **)(*(int *)((char *)this + 0x38) + iVar2 * 4);
    *(std::string **)((char *)this + 0x34) = pbVar1;
    if ((std::string *)((char *)this + 0x1c) != pbVar1) {
      pbVar3 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar3 = *(std::string **)pbVar1;
      }
      ghidra::str::assign
                ((std::string *)((char *)this + 0x1c),(char *)pbVar3,*(uint *)(pbVar1 + 0x10));
    }
  }
  return;
}


// Ghidra: void __thiscall Infopedia::refilterArticles(Infopedia *this)
void Infopedia::refilterArticles()

{
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  AnimationFrames **ppAVar3;
  bool bVar4;
  std::string *pbVar5;
  std::string *unaff_ESI;
  std::string *unaff_EDI;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)((char *)this + 0x3c) = *(undefined4 *)((char *)this + 0x38);
  if (*(int *)((char *)this + 0x48) - *(int *)((char *)this + 0x44) >> 2 != 0) {
    do {
      bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)unaff_EDI,(uint)unaff_ESI);
      if ((bVar4) ||
         (pbVar2 = *(std::string **)(*(int *)(*(int *)((char *)this + 0x44) + local_8 * 4) + 0x4c),
         pbVar5 = ghidra::lib::_Find_unchecked___x28_x29((std::string *)this,unaff_EDI,unaff_ESI),
         pbVar5 != pbVar2)) {
        ppAVar3 = *(AnimationFrames ***)((char *)this + 0x3c);
        ppAVar1 = (AnimationFrames **)(*(int *)((char *)this + 0x44) + local_8 * 4);
        if (*(AnimationFrames ***)((char *)this + 0x40) == ppAVar3) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x38),ppAVar3,ppAVar1);
        }
        else {
          *ppAVar3 = *ppAVar1;
          *(int *)((char *)this + 0x3c) = *(int *)((char *)this + 0x3c) + 4;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)((char *)this + 0x48) - *(int *)((char *)this + 0x44) >> 2));
  }
  return;
}
