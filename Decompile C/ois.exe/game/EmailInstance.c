#include "../ois.exe.h"


// public: __thiscall EmailInstance::EmailInstance(void)

EmailInstance * __thiscall EmailInstance::EmailInstance(EmailInstance *this)

{
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (EmailInstance)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (EmailInstance)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xf;
  this[0x34] = (EmailInstance)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0xf;
  this[0x4c] = (EmailInstance)0x0;
  this[100] = (EmailInstance)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (EmailInstance)0x0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xf;
  this[0x80] = (EmailInstance)0x0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  this[0x9c] = (EmailInstance)0x0;
  return this;
}


// public: void * __thiscall EmailInstance::`scalar deleting destructor'(unsigned int)

void * __thiscall EmailInstance::_scalar_deleting_destructor_(EmailInstance *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x94);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x80);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00439bc5;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xf;
  this[0x80] = (EmailInstance)0x0;
  uVar1 = *(uint *)(this + 0x7c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x68);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_00439bc5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (EmailInstance)0x0;
  MenuItem::~MenuItem((MenuItem *)this);
  operator_delete(this,(nothrow_t *)0xa0);
  return this;
}
