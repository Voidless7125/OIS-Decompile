// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall InputCommand::~InputCommand(InputCommand *this)
InputCommand::~InputCommand()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  InputCommand *pIVar1;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b27f0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pIVar1 = *(InputCommand **)((char *)this + 0x2c);
  if (pIVar1 != (InputCommand *)0x0) {
    (**(code **)(*(int *)pIVar1 + 0x10))
              // [cookie] (pIVar1 != this + 8,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)((char *)this + 0x2c) = 0;
  }
  // [seh] ExceptionList = local_10;
  return;
}
