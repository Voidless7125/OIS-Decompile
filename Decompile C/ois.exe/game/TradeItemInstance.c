#include "../ois.exe.h"


// public: __thiscall TradeItemInstance::TradeItemInstance(int)

TradeItemInstance * __thiscall
TradeItemInstance::TradeItemInstance(TradeItemInstance *this,int param_1)

{
  GameData *pGVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  pGVar1 = g_gameData;
  uVar4 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)(this + 0x14) = param_1;
  puVar2 = *(undefined4 **)(pGVar1 + 0x84);
  uVar3 = *(int *)(pGVar1 + 0x88) - (int)puVar2 >> 2;
  if (uVar3 != 0) {
    do {
      piVar5 = (int *)*puVar2;
      if (*piVar5 == param_1) goto LAB_0049bcc1;
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  piVar5 = (int *)0x0;
LAB_0049bcc1:
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x18),(basic_string<> *)piVar5[7]);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return this;
}


// public: void * __thiscall TradeItemInstance::`scalar deleting destructor'(unsigned int)

void * __thiscall
TradeItemInstance::_scalar_deleting_destructor_(TradeItemInstance *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this,(nothrow_t *)0x2c);
  }
  uVar1 = *(uint *)(this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (TradeItemInstance)0x0;
  operator_delete(this,(nothrow_t *)0x34);
  return this;
}
