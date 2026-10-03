// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ComponentInterface * __cdecl ComponentInterface::getInterface(char *param_1)
ComponentInterface * ComponentInterface::getInterface(char * param_1)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  nothrow_t *pnVar4;
  uint unaff_ESI;
  uint uVar5;
  ComponentInterface *pCVar6;
  char *unaff_EDI;
  uint uVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar1 = param_1;
  uVar5 = 0;
  uVar7 = DAT_0065d60c - _m_interfaces >> 2;
  if (uVar7 != 0) {
    do {
      pcVar3 = (char *)&param_1;
      if (0xf < in_stack_00000018) {
        pcVar3 = pcVar1;
      }
      bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar3,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar2) {
        pCVar6 = *(ComponentInterface **)(_m_interfaces + uVar5 * 4);
        goto LAB_004373a8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pCVar6 = (ComponentInterface *)0x0;
LAB_004373a8:
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = pcVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar3 = *(char **)(pcVar1 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar1 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar4);
  }
  return pCVar6;
}
