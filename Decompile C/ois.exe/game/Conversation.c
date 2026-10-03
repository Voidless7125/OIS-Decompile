#include "../ois.exe.h"


// public: __thiscall Conversation::Conversation(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Conversation * __thiscall
Conversation::Conversation(Conversation *this,undefined4 param_1,void *param_3)

{
  GameCharacter *pGVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  basic_string<> abStack_38 [12];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bcfcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)this = param_1;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 4),(basic_string<> *)&param_3);
  *(undefined4 *)(this + 0x1c) = 0x1000000;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined1 **)(this + 0x24) = &DAT_bf800000;
  this[0x28] = (Conversation)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0xf;
  this[0x2c] = (Conversation)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xf;
  this[0x44] = (Conversation)0x0;
  local_8._0_1_ = 3;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0xf;
  *(basic_string<> *)(this + 0x5c) = (basic_string<>)0x0;
  uStack_2c = 0x4a00c7;
  std::basic_string<>::assign((basic_string<> *)(this + 0x5c),"neutral",7);
  local_8._0_1_ = 4;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0xf;
  *(basic_string<> *)(this + 0x74) = (basic_string<>)0x0;
  uStack_2c = 0x4a00eb;
  std::basic_string<>::assign((basic_string<> *)(this + 0x74),"neutral",7);
  this[0x90] = (Conversation)0x0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  std::basic_string<>::basic_string<>(abStack_38,(basic_string<> *)&param_3);
  pGVar1 = GameData::getCharacter();
  *(GameCharacter **)(this + 0x8c) = pGVar1;
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_2c = 0x4a017e;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return this;
}


// public: class ConversationElement * __thiscall Conversation::getElement(int)

ConversationElement * __thiscall Conversation::getElement(Conversation *this,int param_1)

{
  ConversationElement *pCVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0xa4) - *(int *)(this + 0xa0) >> 2;
  if (uVar3 != 0) {
    do {
      pCVar1 = *(ConversationElement **)(*(int *)(this + 0xa0) + uVar2 * 4);
      if (*(int *)pCVar1 == param_1) {
        return pCVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (ConversationElement *)0x0;
}


// public: __thiscall Conversation::~Conversation(void)

void __thiscall Conversation::~Conversation(Conversation *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0xa8) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0050b44a;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0xa0) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
  }
  pvVar1 = *(void **)(this + 0x94);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x9c) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0050b44a;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
  }
  uVar2 = *(uint *)(this + 0x88);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x74);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0050b44a;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0xf;
  this[0x74] = (Conversation)0x0;
  uVar2 = *(uint *)(this + 0x70);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x5c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0050b44a;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0xf;
  this[0x5c] = (Conversation)0x0;
  uVar2 = *(uint *)(this + 0x58);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x44);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0050b44a;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xf;
  this[0x44] = (Conversation)0x0;
  uVar2 = *(uint *)(this + 0x40);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x2c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0050b44a;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0xf;
  this[0x2c] = (Conversation)0x0;
  uVar2 = *(uint *)(this + 0x18);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0050b44a:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (Conversation)0x0;
  return;
}
