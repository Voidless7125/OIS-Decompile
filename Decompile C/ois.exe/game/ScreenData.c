#include "../ois.exe.h"


// public: __thiscall ScreenData::ScreenData(void)

ScreenData * __thiscall ScreenData::ScreenData(ScreenData *this)

{
  *(undefined4 *)this = 1;
  *(undefined2 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xf;
  this[0x10] = (ScreenData)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  return this;
}


// public: __thiscall ScreenData::~ScreenData(void)

void __thiscall ScreenData::~ScreenData(ScreenData *this)

{
  ScreenData *pSVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pSVar1 = *(ScreenData **)(this + 0x4c);
  if (pSVar1 != (ScreenData *)0x0) {
    (**(code **)(*(int *)pSVar1 + 0x10))
              (pSVar1 != this + 0x28,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(this + 0x4c) = 0;
  }
  uVar2 = *(uint *)(this + 0x24);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(this + 0x10);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xf;
  this[0x10] = (ScreenData)0x0;
  ExceptionList = local_10;
  return;
}


// public: __thiscall ScreenData::ScreenData(struct ScreenData const &)

ScreenData * __thiscall ScreenData::ScreenData(ScreenData *this,ScreenData *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba7f3;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  this[4] = param_1[4];
  this[5] = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x10),(basic_string<> *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x4c) = 0;
  local_8 = 1;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x4c))(this + 0x28,uVar1);
    *(undefined4 *)(this + 0x4c) = uVar2;
  }
  ExceptionList = local_10;
  return this;
}
