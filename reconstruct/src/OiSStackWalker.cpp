// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall OiSStackWalker::~OiSStackWalker(OiSStackWalker *this)
OiSStackWalker::~OiSStackWalker()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b1790;
  pvStack_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &pvStack_10;
  *(undefined ***)this = StackWalker::vftable;
  if (*(void **)((char *)this + 0x14) != (void *)0x0) {
    free(*(void **)((char *)this + 0x14));
  }
  puVar1 = *(undefined4 **)((char *)this + 4);
  *(undefined4 *)((char *)this + 0x14) = 0;
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
  *(undefined4 *)((char *)this + 4) = 0;
  // [seh] ExceptionList = pvStack_10;
  return;
}


// Ghidra: void __thiscall OiSStackWalker::OnOutput(OiSStackWalker *this,char *param_1)
void OiSStackWalker::OnOutput(char * param_1)

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
