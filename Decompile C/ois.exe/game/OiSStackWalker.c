#include "../ois.exe.h"


// public: virtual void * __thiscall OiSStackWalker::`scalar deleting destructor'(unsigned int)

void * __thiscall OiSStackWalker::_scalar_deleting_destructor_(OiSStackWalker *this,uint param_1)

{
  StackWalker::~StackWalker((StackWalker *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x20);
  }
  return this;
}


// public: virtual __thiscall OiSStackWalker::~OiSStackWalker(void)

void __thiscall OiSStackWalker::~OiSStackWalker(OiSStackWalker *this)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005b1790;
  pvStack_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = StackWalker::vftable;
  if (*(void **)(this + 0x14) != (void *)0x0) {
    free(*(void **)(this + 0x14));
  }
  puVar1 = *(undefined4 **)(this + 4);
  *(undefined4 *)(this + 0x14) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uStack_8 = 0;
    if ((code *)puVar1[4] != (code *)0x0) {
      (*(code *)puVar1[4])(puVar1[2],uVar2);
    }
    if ((HMODULE)puVar1[1] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar1[1]);
    }
    puVar1[1] = 0;
    *puVar1 = 0;
    if ((void *)puVar1[3] != (void *)0x0) {
      free((void *)puVar1[3]);
    }
    puVar1[3] = 0;
    operator_delete(puVar1,(nothrow_t *)&DAT_00000044);
  }
  *(undefined4 *)(this + 4) = 0;
  ExceptionList = pvStack_10;
  return;
}


// protected: virtual void __thiscall OiSStackWalker::OnOutput(char const *)

void __thiscall OiSStackWalker::OnOutput(OiSStackWalker *this,char *param_1)

{
  if (_File_0065d538 != (_iobuf *)0x0) {
    _fprintf((FILE *)_File_0065d538,"%s",param_1);
    OutputDebugStringA(param_1);
    return;
  }
  debugPrint("CRASH","%s");
  OutputDebugStringA(param_1);
  return;
}
