// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Faction * __thiscall FictionData::getFactionForNumber(FictionData *this,int param_1)
Faction * FictionData::getFactionForNumber(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 **)this;
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 4) - (int)puVar1 >> 2;
  if (uVar3 != 0) {
    do {
      if (*(int *)*puVar1 == param_1) {
        return (Faction *)*puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  return (Faction *)0x0;
}


// Ghidra: Faction * __thiscall FictionData::getFactionForID(FictionData *this,char *param_2)
Faction * FictionData::getFactionForID(char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  Faction *pFVar7;
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
        pFVar7 = *(Faction **)(iVar1 + uVar6 * 4);
        goto LAB_004a0e86;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pFVar7 = (Faction *)0x0;
LAB_004a0e86:
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
  return pFVar7;
}
