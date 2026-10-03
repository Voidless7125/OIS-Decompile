#include "../ois.exe.h"


// float __cdecl fastDistance(class cocos2d::Vec2 const &,class cocos2d::Vec2 const &)

float __cdecl fastDistance(Vec2 *param_1,Vec2 *param_2)

{
  Vec2 *in_ECX;
  Vec2 *in_EDX;
  float10 extraout_ST1;
  
  cocos2d::Vec2::getDistanceSq(in_ECX,in_EDX);
  return (float)extraout_ST1;
}


// class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __cdecl firstWordSeparated(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __cdecl firstWordSeparated(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  vector<> *in_ECX;
  int iVar5;
  basic_string<> *pbVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  char *pcVar9;
  uint unaff_EDI;
  int iVar10;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd0d1;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = 3;
  pcVar9 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar9 = param_1;
  }
  bVar2 = false;
  iVar5 = (int)(pcVar9 + in_stack_00000014) - (int)pcVar9;
  iVar10 = 0;
  if (pcVar9 + in_stack_00000014 < pcVar9) {
    iVar5 = 0;
  }
  local_14 = pcVar4;
  if (iVar5 != 0) {
    do {
      cVar1 = *pcVar9;
      if (bVar2) {
        pbVar6 = (basic_string<> *)local_44;
LAB_0059496c:
        std::basic_string<>::push_back(pbVar6,cVar1);
      }
      else {
        bVar3 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
        if (bVar3) {
          if ((cVar1 != ' ') && (cVar1 != '\t')) goto LAB_00594969;
        }
        else {
          if ((cVar1 != ' ') && (cVar1 != '\t')) {
LAB_00594969:
            pbVar6 = (basic_string<> *)local_2c;
            goto LAB_0059496c;
          }
          bVar2 = true;
        }
      }
      iVar10 = iVar10 + 1;
      pcVar9 = pcVar9 + 1;
    } while (iVar10 != iVar5);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  std::vector<>::_Emplace_reallocate<>(in_ECX,(basic_string<> *)0x0,(basic_string<> *)local_2c);
  pbVar6 = *(basic_string<> **)(in_ECX + 4);
  if (*(basic_string<> **)(in_ECX + 8) == pbVar6) {
    std::vector<>::_Emplace_reallocate<>(in_ECX,(basic_string<> *)pbVar6,(basic_string<> *)local_44)
    ;
  }
  else {
    std::basic_string<>::basic_string<>(pbVar6,(basic_string<> *)local_44);
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
  }
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar7 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar9 = param_1;
    if ((nothrow_t *)0xfff < pnVar8) {
      pcVar9 = *(char **)(param_1 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_1 + (-4 - (int)pcVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar9,pnVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __cdecl find_pe_section(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c) + param_1;
  iVar2 = iVar1 + 0x18 + (uint)*(ushort *)(iVar1 + 0x14);
  iVar1 = (uint)*(ushort *)(iVar1 + 6) * 0x28 + iVar2;
  while( true ) {
    if (iVar2 == iVar1) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc)))) break;
    iVar2 = iVar2 + 0x28;
  }
  return iVar2;
}


// free

void __cdecl free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x005b0b2e. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}
