// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: SyntheticObjectCargoInstance * __thiscall SyntheticObjectCargoInstance::SyntheticObjectCargoInstance (SyntheticObjectCargoInstance *this,undefined4 param_1,void *param_3)
SyntheticObjectCargoInstance::SyntheticObjectCargoInstance(undefined4 param_1, void * param_3)

{
  Good *pGVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  std::string abStack_38 [8];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4ac8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  *(undefined4 *)((char *)this + 4) = param_1;
  ghidra::str::ctor(abStack_38,(std::string *)&param_3);
  pGVar1 = GameData::getGoodWithShortName();
  if (pGVar1 == (Good *)0x0) {
    uStack_30 = 0x522f48;
    debugPrint("ERROR","invalid good \'%s\'");
  }
  *(undefined4 *)this = *(undefined4 *)pGVar1;
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
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return;
}
