#include "../ois.exe.h"


// public: __thiscall InputCommand::~InputCommand(void)

void __thiscall InputCommand::~InputCommand(InputCommand *this)

{
  InputCommand *pIVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pIVar1 = *(InputCommand **)(this + 0x2c);
  if (pIVar1 != (InputCommand *)0x0) {
    (**(code **)(*(int *)pIVar1 + 0x10))
              (pIVar1 != this + 8,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  ExceptionList = local_10;
  return;
}
