#include "../ois.exe.h"


// enum EQuadrant::Quadrant __cdecl invertQuadrant(enum EQuadrant::Quadrant)

Quadrant __cdecl invertQuadrant(Quadrant param_1)

{
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 0:
    return 2;
  case 1:
    return 3;
  default:
    return 0;
  case 3:
    return 1;
  }
}


// bool __cdecl isShipDataType(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

bool __cdecl isShipDataType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  undefined **ppuVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  ppuVar6 = &PTR_s_NONE_005e01f0;
  while( true ) {
    pcVar2 = *ppuVar6;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) break;
    ppuVar6 = ppuVar6 + 1;
    if (0x5e028b < (int)ppuVar6) {
      bVar3 = false;
LAB_004dbbbc:
      if (0xf < in_stack_00000018) {
        pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
        pvVar7 = param_1;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar7 = *(void **)((int)param_1 + -4);
          pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar5);
      }
      return bVar3;
    }
  }
  bVar3 = true;
  goto LAB_004dbbbc;
}


// bool __cdecl isShipTextDataType(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

bool __cdecl isShipTextDataType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  undefined **ppuVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  ppuVar6 = &PTR_s_NONE_005e0d80;
  while( true ) {
    pcVar2 = *ppuVar6;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) break;
    ppuVar6 = ppuVar6 + 1;
    if (0x5e0f0b < (int)ppuVar6) {
      bVar3 = false;
LAB_004dbdfc:
      if (0xf < in_stack_00000018) {
        pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
        pvVar7 = param_1;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar7 = *(void **)((int)param_1 + -4);
          pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar5);
      }
      return bVar3;
    }
  }
  bVar3 = true;
  goto LAB_004dbdfc;
}
