#include "../ois.exe.h"


// public: __thiscall PrivateCommOption::PrivateCommOption(enum
// EPrivateCommOptionType::PrivateCommOptionType,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

PrivateCommOption * __thiscall
PrivateCommOption::PrivateCommOption
          (PrivateCommOption *this,undefined4 param_1,undefined4 param_2,void *param_4)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000038;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b40da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (PrivateCommOption)0x0;
  local_8 = 2;
  uStack_7 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x20),(basic_string<> *)&param_4);
  *(undefined4 *)(this + 0x38) = param_1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (PrivateCommOption)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  _local_8 = CONCAT31(uStack_7,6);
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)&stack0x00000024);
  setExistFunction(this);
  if (0xf < in_stack_00000020) {
    pnVar2 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar1 = param_4;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_4 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x42f818;
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0xf;
  param_4 = (void *)((uint)param_4 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar2 = (nothrow_t *)(in_stack_00000038 + 1);
    pvVar1 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000024 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x42f860;
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall PrivateCommOption::setActionFunction(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall PrivateCommOption::setActionFunction(PrivateCommOption *this,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  function<> *pfVar3;
  void *pvVar4;
  void *pvVar5;
  uint unaff_EDI;
  uint uVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000018;
  basic_string<> abStack_6c [12];
  undefined4 uStack_60;
  char *pcVar8;
  int *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar6 = in_stack_00000018;
  pvVar4 = param_2;
  puStack_c = &DAT_005b4110;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_60 = 0x42f8d2;
  pcVar8 = pcVar2;
  bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)&param_2);
    getShipCommandType();
    pfVar3 = (function<> *)ShipInterface::getShipCommandFunction((ShipCommand)pcVar8);
    local_8._0_1_ = 1;
    std::function<>::operator=<>((function<> *)(this + 0x80),pfVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    pvVar4 = param_2;
    uVar6 = in_stack_00000018;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
      pvVar4 = param_2;
      uVar6 = in_stack_00000018;
    }
  }
  if (0xf < uVar6) {
    pnVar7 = (nothrow_t *)(uVar6 + 1);
    pvVar5 = pvVar4;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)pvVar4 + -4);
      pnVar7 = (nothrow_t *)(uVar6 + 0x24);
      if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_60 = 0x42f958;
    operator_delete(pvVar5,pnVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)pcVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PrivateCommOption::setExistFunction(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall PrivateCommOption::setExistFunction(PrivateCommOption *this,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  function<> *pfVar3;
  void *pvVar4;
  void *pvVar5;
  uint unaff_EDI;
  uint uVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000018;
  basic_string<> abStack_6c [12];
  undefined4 uStack_60;
  char *pcVar8;
  int *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar6 = in_stack_00000018;
  pvVar4 = param_2;
  puStack_c = &DAT_005b4110;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_60 = 0x42f9d2;
  pcVar8 = pcVar2;
  bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)&param_2);
    getShipCheckDataType();
    pfVar3 = (function<> *)ShipData::getCheckFunction((ShipDataCheckType)pcVar8);
    local_8._0_1_ = 1;
    std::function<>::operator=((function<> *)(this + 0x40),pfVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    pvVar4 = param_2;
    uVar6 = in_stack_00000018;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
      pvVar4 = param_2;
      uVar6 = in_stack_00000018;
    }
  }
  if (0xf < uVar6) {
    pnVar7 = (nothrow_t *)(uVar6 + 1);
    pvVar5 = pvVar4;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)pvVar4 + -4);
      pnVar7 = (nothrow_t *)(uVar6 + 0x24);
      if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_60 = 0x42fa55;
    operator_delete(pvVar5,pnVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)pcVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// public: __thiscall PrivateCommOption::~PrivateCommOption(void)

void __thiscall PrivateCommOption::~PrivateCommOption(PrivateCommOption *this)

{
  PrivateCommOption *pPVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pPVar1 = *(PrivateCommOption **)(this + 0xa4);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    (**(code **)(*(int *)pPVar1 + 0x10))
              (pPVar1 != this + 0x80,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(this + 0xa4) = 0;
  }
  local_8 = 0xffffffff;
  uVar2 = *(uint *)(this + 0x7c);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(this + 0x68);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_004307e7;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (PrivateCommOption)0x0;
  local_8 = 1;
  pPVar1 = *(PrivateCommOption **)(this + 100);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    (**(code **)(*(int *)pPVar1 + 0x10))(pPVar1 != this + 0x40);
    *(undefined4 *)(this + 100) = 0;
  }
  uVar2 = *(uint *)(this + 0x34);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(this + 0x20);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_004307e7;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xf;
  this[0x20] = (PrivateCommOption)0x0;
  uVar2 = *(uint *)(this + 0x1c);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(this + 8);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
LAB_004307e7:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (PrivateCommOption)0x0;
  ExceptionList = local_10;
  return;
}


// public: __thiscall PrivateCommOption::PrivateCommOption(class PrivateCommOption &&)

PrivateCommOption * __thiscall
PrivateCommOption::PrivateCommOption(PrivateCommOption *this,PrivateCommOption *param_1)

{
  PrivateCommOption *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b4adc;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  param_1[8] = (PrivateCommOption)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar6;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  param_1[0x20] = (PrivateCommOption)0x0;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 100) = 0;
  uStack_7 = 0;
  uVar4 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  pPVar1 = *(PrivateCommOption **)(param_1 + 100);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    if (pPVar1 == param_1 + 0x40) {
      uVar6 = (**(code **)(*(int *)pPVar1 + 4))(this + 0x40,uVar5);
      *(undefined4 *)(this + 100) = uVar6;
      local_8 = 3;
      pPVar1 = *(PrivateCommOption **)(param_1 + 100);
      uVar4 = uStack_7;
      if (pPVar1 != (PrivateCommOption *)0x0) {
        (**(code **)(*(int *)pPVar1 + 0x10))(pPVar1 != param_1 + 0x40);
        *(undefined4 *)(param_1 + 100) = 0;
        uVar4 = uStack_7;
      }
    }
    else {
      *(PrivateCommOption **)(this + 100) = pPVar1;
      *(undefined4 *)(param_1 + 100) = 0;
      uVar4 = uStack_7;
    }
  }
  uStack_7 = uVar4;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = uVar6;
  *(undefined4 *)(this + 0x70) = uVar2;
  *(undefined4 *)(this + 0x74) = uVar3;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xf;
  param_1[0x68] = (PrivateCommOption)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  local_8 = 6;
  pPVar1 = *(PrivateCommOption **)(param_1 + 0xa4);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    if (pPVar1 == param_1 + 0x80) {
      uVar6 = (**(code **)(*(int *)pPVar1 + 4))(this + 0x80);
      *(undefined4 *)(this + 0xa4) = uVar6;
      _local_8 = CONCAT31(uStack_7,7);
      pPVar1 = *(PrivateCommOption **)(param_1 + 0xa4);
      if (pPVar1 == (PrivateCommOption *)0x0) {
        ExceptionList = local_10;
        return this;
      }
      (**(code **)(*(int *)pPVar1 + 0x10))(pPVar1 != param_1 + 0x80);
    }
    else {
      *(PrivateCommOption **)(this + 0xa4) = pPVar1;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall PrivateCommOption::PrivateCommOption(class PrivateCommOption const &)

PrivateCommOption * __thiscall
PrivateCommOption::PrivateCommOption(PrivateCommOption *this,PrivateCommOption *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4b3c;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 8),(basic_string<> *)(param_1 + 8));
  local_8 = 0;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x20),(basic_string<> *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 100) = 0;
  local_8._0_1_ = 2;
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 100))(this + 0x40,uVar1);
    *(undefined4 *)(this + 100) = uVar2;
  }
  local_8._0_1_ = 3;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x68),(basic_string<> *)(param_1 + 0x68));
  *(undefined4 *)(this + 0xa4) = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0xa4))(this + 0x80);
    *(undefined4 *)(this + 0xa4) = uVar2;
  }
  ExceptionList = local_10;
  return this;
}
