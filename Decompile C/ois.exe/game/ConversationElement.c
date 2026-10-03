#include "../ois.exe.h"


// public: __thiscall ConversationElement::ConversationElement(int,int)

ConversationElement * __thiscall
ConversationElement::ConversationElement(ConversationElement *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)(this + 4) = param_1;
  this[8] = (ConversationElement)0x1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xf;
  this[0xc] = (ConversationElement)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0xf;
  this[0x24] = (ConversationElement)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0xf;
  this[0x3c] = (ConversationElement)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return this;
}


// public: class ConversationOption * __thiscall ConversationElement::getOption(int)

ConversationOption * __thiscall
ConversationElement::getOption(ConversationElement *this,int param_1)

{
  ConversationOption *pCVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 100) - *(int *)(this + 0x60) >> 2;
  if (uVar3 != 0) {
    do {
      pCVar1 = *(ConversationOption **)(*(int *)(this + 0x60) + uVar2 * 4);
      if (*(int *)pCVar1 == param_1) {
        return pCVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (ConversationOption *)0x0;
}
