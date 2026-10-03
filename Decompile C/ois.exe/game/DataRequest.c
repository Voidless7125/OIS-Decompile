#include "../ois.exe.h"


// public: __thiscall DataRequest::DataRequest(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,enum ERequestType::RequestType)

void __thiscall
DataRequest::DataRequest(DataRequest *this,undefined4 param_2,int param_3,void *param_4)

{
  undefined3 uVar1;
  undefined1 *puVar2;
  function<> *pfVar3;
  uint uVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  int iVar7;
  int iVar8;
  uint in_stack_00000020;
  basic_string<> abStack_6c [12];
  undefined4 uStack_60;
  undefined1 *puVar9;
  int *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b283e;
  local_10 = ExceptionList;
  puVar2 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(int *)this = param_3;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  *(undefined1 **)(this + 0x58) = &DAT_bf800000;
  *(undefined4 *)(this + 0x5c) = param_2;
  if (param_3 == 0) {
    puVar9 = puVar2;
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)&param_4);
    getShipCheckDataType();
    pfVar3 = (function<> *)ShipData::getCheckFunction((ShipDataCheckType)puVar9);
    local_8 = 3;
    std::function<>::operator=((function<> *)(this + 8),pfVar3);
    local_8 = 4;
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
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)&param_4);
    getShipDataType();
    pfVar3 = (function<> *)ShipNumericalData::getDataFunction((ShipDataType)puVar9);
    local_8 = 5;
    std::function<>::operator=((function<> *)(this + 0x30),pfVar3);
    local_8 = 6;
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
  *(float *)(this + 0x58) = (float)iVar8;
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
  ExceptionList = local_10;
  __security_check_cookie((int)((uint)puVar2 ^ (uint)&stack0xfffffffc));
  return;
}
