// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall DataRequest::DataRequest(DataRequest *this,undefined4 param_2,int param_3,void *param_4)
DataRequest::DataRequest(undefined4 param_2, int param_3, void * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined3 uVar1;
  undefined1 *puVar2;
  ghidra::lib::function_t *pfVar3;
  uint uVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  int iVar7;
  int iVar8;
  uint in_stack_00000020;
  std::string abStack_6c [12];
  undefined4 uStack_60;
  undefined1 *puVar9;
  int *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b283e;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar2 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(int *)this = param_3;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x54) = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  // [seh] local_8 = 2;
  uStack_7 = 0;
  *(undefined1 **)((char *)this + 0x58) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x5c) = param_2;
  if (param_3 == 0) {
    puVar9 = puVar2;
    ghidra::str::ctor(abStack_6c,(std::string *)&param_4);
    getShipCheckDataType();
    pfVar3 = (ghidra::lib::function_t *)ShipData::getCheckFunction((ShipDataCheckType)puVar9);
    // [seh] local_8 = 3;
    ghidra::lib::function__operator_x3d((ghidra::lib::function_t *)((char *)this + 8),pfVar3);
    // [seh] local_8 = 4;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    iVar8 = 0;
    iVar7 = 2;
    do {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      iVar8 = iVar8 + 1 + uVar4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar8 = iVar8 + 4;
  }
  else {
    uStack_7 = uVar1;
    if ((param_3 != 1) && (param_3 != 2)) {
      uStack_60 = 0x415d8f;
      debugPrint("HARDWARE","Data request type error from hardware.");
      goto LAB_00415e08;
    }
    puVar9 = puVar2;
    ghidra::str::ctor(abStack_6c,(std::string *)&param_4);
    getShipDataType();
    pfVar3 = (ghidra::lib::function_t *)ShipNumericalData::getDataFunction((ShipDataType)puVar9);
    // [seh] local_8 = 5;
    ghidra::lib::function__operator_x3d((ghidra::lib::function_t *)((char *)this + 0x30),pfVar3);
    // [seh] local_8 = 6;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    iVar8 = 0;
    iVar7 = 2;
    do {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      iVar8 = iVar8 + 1 + uVar4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(float *)((char *)this + 0x58) = (float)iVar8;
LAB_00415e08:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_4;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_4 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_60 = 0x415e3b;
    operator_delete(pvVar5,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((int)((uint)puVar2 ^ (uint)&stack0xfffffffc));
  return;
}
