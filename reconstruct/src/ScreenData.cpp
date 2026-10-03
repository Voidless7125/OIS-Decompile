// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ScreenData * __thiscall ScreenData::ScreenData(ScreenData *this)
ScreenData::ScreenData()

{
  *(undefined4 *)this = 1;
  *(undefined2 *)((char *)this + 4) = 1;
  *(undefined4 *)((char *)this + 8) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xc) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x20) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0xf;
  ((char *)this)[0x10] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  return;
}


// Ghidra: void __thiscall ScreenData::~ScreenData(ScreenData *this)
ScreenData::~ScreenData()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ScreenData *pSVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b1790;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pSVar1 = *(ScreenData **)((char *)this + 0x4c);
  if (pSVar1 != (ScreenData *)0x0) {
    (**(code **)(*(int *)pSVar1 + 0x10))
              // [cookie] (pSVar1 != this + 0x28,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)((char *)this + 0x4c) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x24);
  if (0xf < uVar2) {
    pvVar3 = *(void **)((char *)this + 0x10);
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
  *(undefined4 *)((char *)this + 0x20) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0xf;
  ((char *)this)[0x10] = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: ScreenData * __thiscall ScreenData::ScreenData(ScreenData *this,ScreenData *param_1)
ScreenData::ScreenData(ScreenData * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined4 uVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ba7f3;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  ((char *)this)[4] = param_1[4];
  ((char *)this)[5] = param_1[5];
  *(undefined4 *)((char *)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x10),(std::string *)(param_1 + 0x10));
  *(undefined4 *)((char *)this + 0x4c) = 0;
  // [seh] local_8 = 1;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x4c))(this + 0x28,uVar1);
    *(undefined4 *)((char *)this + 0x4c) = uVar2;
  }
  // [seh] ExceptionList = local_10;
  return;
}
