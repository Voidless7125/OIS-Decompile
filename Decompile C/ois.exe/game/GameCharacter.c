#include "../ois.exe.h"


// public: void __thiscall GameCharacter::addAddition(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall GameCharacter::addAddition(GameCharacter *this,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  char ****ppppcVar3;
  undefined4 *puVar4;
  basic_string<> *pbVar5;
  uint uVar6;
  nothrow_t *pnVar7;
  int iVar8;
  int *piVar9;
  AnimationFrames **ppAVar10;
  AnimationFrames *pAVar11;
  uint unaff_EDI;
  uint uVar12;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  basic_string<> *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  char ***local_34 [4];
  uint local_24;
  uint local_20;
  int local_1c;
  GameCharacter *local_18;
  AnimationFrames *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3ff0;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  local_18 = this;
  std::basic_string<>::basic_string<>((basic_string<> *)local_34,(basic_string<> *)&param_2);
  pAVar11 = (AnimationFrames *)0x0;
  local_1c = *(int *)(*(int *)(this + 4) + 0x34);
  local_14 = (AnimationFrames *)(*(int *)(*(int *)(this + 4) + 0x38) - local_1c >> 2);
  if (local_14 != (AnimationFrames *)0x0) {
    do {
      ppppcVar3 = local_34;
      if (0xf < local_20) {
        ppppcVar3 = (char ****)local_34[0];
      }
      bVar1 = std::_Traits_equal<>((char *)ppppcVar3,local_24,pcVar2,unaff_EDI);
      if (bVar1) {
        pAVar11 = *(AnimationFrames **)(local_1c + (int)pAVar11 * 4);
        if (0xf < local_20) {
          pnVar7 = (nothrow_t *)(local_20 + 1);
          ppppcVar3 = (char ****)local_34[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            ppppcVar3 = (char ****)local_34[0][-1];
            pnVar7 = (nothrow_t *)(local_20 + 0x24);
            if ((char *)0x1f < (char *)((int)local_34[0] + (-4 - (int)ppppcVar3))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar3,pnVar7);
        }
        goto LAB_0042eeee;
      }
      pAVar11 = pAVar11 + 1;
    } while (pAVar11 < local_14);
  }
  if (0xf < local_20) {
    pnVar7 = (nothrow_t *)(local_20 + 1);
    ppppcVar3 = (char ****)local_34[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      ppppcVar3 = (char ****)local_34[0][-1];
      pnVar7 = (nothrow_t *)(local_20 + 0x24);
      if ((char *)0x1f < (char *)((int)local_34[0] + (-4 - (int)ppppcVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar3,pnVar7);
  }
  pAVar11 = (AnimationFrames *)0x0;
LAB_0042eeee:
  local_14 = pAVar11;
  if (pAVar11 == (AnimationFrames *)0x0) {
    puVar4 = &param_2;
    if (0xf < in_stack_00000018) {
      puVar4 = param_2;
    }
    debugPrint("ERROR","invalid addition \'%s\'",puVar4);
  }
  else {
    if ((basic_string<> *)(pAVar11 + 0x18) != (basic_string<> *)&stack0x0000001c) {
      pbVar5 = (basic_string<> *)&stack0x0000001c;
      if (0xf < in_stack_00000030) {
        pbVar5 = in_stack_0000001c;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar11 + 0x18),(char *)pbVar5,in_stack_0000002c);
    }
    uVar6 = 0;
    ppAVar10 = *(AnimationFrames ***)(local_18 + 100);
    iVar8 = *(int *)(local_18 + 0x60);
    uVar12 = (int)ppAVar10 - iVar8 >> 2;
    if (uVar12 != 0) {
      while( true ) {
        piVar9 = *(int **)(iVar8 + uVar6 * 4);
        if ((piVar9[0x14] != 4) && (*(int *)(pAVar11 + 0x50) == piVar9[0x14])) {
          if (0xf < (uint)piVar9[5]) {
            piVar9 = (int *)*piVar9;
          }
          if (0xf < *(uint *)(pAVar11 + 0x14)) {
            pAVar11 = *(AnimationFrames **)pAVar11;
          }
          debugPrint("ERROR","CLASH between additions \'%s\' and \'%s\'",pAVar11,piVar9);
          goto LAB_0042efad;
        }
        uVar6 = uVar6 + 1;
        if (uVar12 <= uVar6) break;
        iVar8 = *(int *)(local_18 + 0x60);
      }
      ppAVar10 = *(AnimationFrames ***)(local_18 + 100);
    }
    if (*(AnimationFrames ***)(local_18 + 0x68) == ppAVar10) {
      std::vector<>::_Emplace_reallocate<>((vector<> *)(local_18 + 0x60),ppAVar10,&local_14);
    }
    else {
      *ppAVar10 = pAVar11;
      *(int *)(local_18 + 100) = *(int *)(local_18 + 100) + 4;
    }
  }
LAB_0042efad:
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      puVar4 = (undefined4 *)param_2[-1];
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar4,pnVar7);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar7 = (nothrow_t *)(in_stack_00000030 + 1);
    pbVar5 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar7) {
      pbVar5 = *(basic_string<> **)(in_stack_0000001c + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_0000001c + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar5,pnVar7);
  }
  ExceptionList = local_10;
  return;
}
