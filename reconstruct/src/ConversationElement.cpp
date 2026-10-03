// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ConversationElement * __thiscall ConversationElement::ConversationElement(ConversationElement *this,int param_1,int param_2)
ConversationElement::ConversationElement(int param_1, int param_2)

{
  *(int *)this = param_2;
  *(int *)((char *)this + 4) = param_1;
  ((char *)this)[8] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0xf;
  ((char *)this)[0xc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xf;
  ((char *)this)[0x24] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0xf;
  ((char *)this)[0x3c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x54) = 0;
  *(undefined4 *)((char *)this + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0;
  return;
}


// Ghidra: ConversationOption * __thiscall ConversationElement::getOption(ConversationElement *this,int param_1)
ConversationOption * ConversationElement::getOption(int param_1)

{
  ConversationOption *pCVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 100) - *(int *)((char *)this + 0x60) >> 2;
  if (uVar3 != 0) {
    do {
      pCVar1 = *(ConversationOption **)(*(int *)((char *)this + 0x60) + uVar2 * 4);
      if (*(int *)pCVar1 == param_1) {
        return pCVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (ConversationOption *)0x0;
}
