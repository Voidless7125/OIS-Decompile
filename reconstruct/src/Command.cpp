// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Command::~Command(Command *this)
Command::~Command()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Command *pCVar1;
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
  pCVar1 = *(Command **)((char *)this + 0x3c);
  if (pCVar1 != (Command *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x10))
              // [cookie] (pCVar1 != this + 0x18,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)((char *)this + 0x3c) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x14);
  if (0xf < uVar2) {
    pvVar3 = *(void **)this;
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
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}
