// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: PrivateCommOption * __thiscall PrivateCommOption::PrivateCommOption (PrivateCommOption *this,undefined4 param_1,undefined4 param_2,void *param_4)
PrivateCommOption::PrivateCommOption(undefined4 param_1, undefined4 param_2, void * param_4)

{
  char stack0x00000024[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000038;
  std::string abStack_3c [12];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b40da;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0xf;
  ((char *)this)[8] = (byte)0x0;
  // [seh] local_8 = 2;
  uStack_7 = 0;
  ghidra::str::ctor((std::string *)((char *)this + 0x20),(std::string *)&param_4);
  *(undefined4 *)((char *)this + 0x38) = param_1;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0xf;
  ((char *)this)[0x68] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  _local_8 = CONCAT31(uStack_7,6);
  ghidra::str::ctor(abStack_3c,(std::string *)&stack0x00000024);
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PrivateCommOption::setActionFunction(PrivateCommOption *this,void *param_2)
void PrivateCommOption::setActionFunction(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  ghidra::lib::function_t *pfVar3;
  void *pvVar4;
  void *pvVar5;
  uint unaff_EDI;
  uint uVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000018;
  std::string abStack_6c [12];
  undefined4 uStack_60;
  char *pcVar8;
  int *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  uVar6 = in_stack_00000018;
  pvVar4 = param_2;
  // [seh] puStack_c = &DAT_005b4110;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_60 = 0x42f8d2;
  pcVar8 = pcVar2;
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    ghidra::str::ctor(abStack_6c,(std::string *)&param_2);
    getShipCommandType();
    pfVar3 = (ghidra::lib::function_t *)ShipInterface::getShipCommandFunction((ShipCommand)pcVar8);
    // [seh] local_8._0_1_ = 1;
    ghidra::lib::function__operator_x3d_x3c_x3e((ghidra::lib::function_t *)((char *)this + 0x80),pfVar3);
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
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
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)pcVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PrivateCommOption::setExistFunction(PrivateCommOption *this,void *param_2)
void PrivateCommOption::setExistFunction(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  ghidra::lib::function_t *pfVar3;
  void *pvVar4;
  void *pvVar5;
  uint unaff_EDI;
  uint uVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000018;
  std::string abStack_6c [12];
  undefined4 uStack_60;
  char *pcVar8;
  int *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  uVar6 = in_stack_00000018;
  pvVar4 = param_2;
  // [seh] puStack_c = &DAT_005b4110;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_60 = 0x42f9d2;
  pcVar8 = pcVar2;
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    ghidra::str::ctor(abStack_6c,(std::string *)&param_2);
    getShipCheckDataType();
    pfVar3 = (ghidra::lib::function_t *)ShipData::getCheckFunction((ShipDataCheckType)pcVar8);
    // [seh] local_8._0_1_ = 1;
    ghidra::lib::function__operator_x3d((ghidra::lib::function_t *)((char *)this + 0x40),pfVar3);
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
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
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)pcVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PrivateCommOption::~PrivateCommOption(PrivateCommOption *this)
PrivateCommOption::~PrivateCommOption()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  PrivateCommOption *pPVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b4200;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pPVar1 = *(PrivateCommOption **)((char *)this + 0xa4);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    (**(code **)(*(int *)pPVar1 + 0x10))
              // [cookie] (pPVar1 != this + 0x80,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)((char *)this + 0xa4) = 0;
  }
  // [seh] local_8 = 0xffffffff;
  uVar2 = *(uint *)((char *)this + 0x7c);
  if (0xf < uVar2) {
    pvVar3 = *(void **)((char *)this + 0x68);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_004307e7;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0xf;
  ((char *)this)[0x68] = (byte)0x0;
  // [seh] local_8 = 1;
  pPVar1 = *(PrivateCommOption **)((char *)this + 100);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    (**(code **)(*(int *)pPVar1 + 0x10))(pPVar1 != this + 0x40);
    *(undefined4 *)((char *)this + 100) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x34);
  if (0xf < uVar2) {
    pvVar3 = *(void **)((char *)this + 0x20);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) goto LAB_004307e7;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0xf;
  ((char *)this)[0x20] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x1c);
  if (0xf < uVar2) {
    pvVar3 = *(void **)((char *)this + 8);
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
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0xf;
  ((char *)this)[8] = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: PrivateCommOption * __thiscall PrivateCommOption::PrivateCommOption(PrivateCommOption *this,PrivateCommOption *param_1)
PrivateCommOption::PrivateCommOption(PrivateCommOption * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  PrivateCommOption *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b4adc;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)((char *)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((char *)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((char *)this + 0xc) = uVar6;
  *(undefined4 *)((char *)this + 0x10) = uVar2;
  *(undefined4 *)((char *)this + 0x14) = uVar3;
  *(undefined8 *)((char *)this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  param_1[8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((char *)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((char *)this + 0x24) = uVar6;
  *(undefined4 *)((char *)this + 0x28) = uVar2;
  *(undefined4 *)((char *)this + 0x2c) = uVar3;
  *(undefined8 *)((char *)this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  param_1[0x20] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((char *)this + 100) = 0;
  uStack_7 = 0;
  uVar4 = uStack_7;
  // [seh] local_8 = 2;
  uStack_7 = 0;
  pPVar1 = *(PrivateCommOption **)(param_1 + 100);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    if (pPVar1 == param_1 + 0x40) {
      uVar6 = (**(code **)(*(int *)pPVar1 + 4))(this + 0x40,uVar5);
      *(undefined4 *)((char *)this + 100) = uVar6;
      // [seh] local_8 = 3;
      pPVar1 = *(PrivateCommOption **)(param_1 + 100);
      uVar4 = uStack_7;
      if (pPVar1 != (PrivateCommOption *)0x0) {
        (**(code **)(*(int *)pPVar1 + 0x10))(pPVar1 != param_1 + 0x40);
        *(undefined4 *)(param_1 + 100) = 0;
        uVar4 = uStack_7;
      }
    }
    else {
      *(PrivateCommOption **)((char *)this + 100) = pPVar1;
      *(undefined4 *)(param_1 + 100) = 0;
      uVar4 = uStack_7;
    }
  }
  uStack_7 = uVar4;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((char *)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((char *)this + 0x6c) = uVar6;
  *(undefined4 *)((char *)this + 0x70) = uVar2;
  *(undefined4 *)((char *)this + 0x74) = uVar3;
  *(undefined8 *)((char *)this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xf;
  param_1[0x68] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  // [seh] local_8 = 6;
  pPVar1 = *(PrivateCommOption **)(param_1 + 0xa4);
  if (pPVar1 != (PrivateCommOption *)0x0) {
    if (pPVar1 == param_1 + 0x80) {
      uVar6 = (**(code **)(*(int *)pPVar1 + 4))((char *)this + 0x80);
      *(undefined4 *)((char *)this + 0xa4) = uVar6;
      _local_8 = CONCAT31(uStack_7,7);
      pPVar1 = *(PrivateCommOption **)(param_1 + 0xa4);
      if (pPVar1 == (PrivateCommOption *)0x0) {
        // [seh] ExceptionList = local_10;
        return;
      }
      (**(code **)(*(int *)pPVar1 + 0x10))(pPVar1 != param_1 + 0x80);
    }
    else {
      *(PrivateCommOption **)((char *)this + 0xa4) = pPVar1;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: PrivateCommOption * __thiscall PrivateCommOption::PrivateCommOption(PrivateCommOption *this,PrivateCommOption *param_1)
PrivateCommOption::PrivateCommOption(PrivateCommOption * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined4 uVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b4b3c;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)((char *)this + 4) = *(undefined4 *)(param_1 + 4);
  ghidra::str::ctor((std::string *)((char *)this + 8),(std::string *)(param_1 + 8));
  // [seh] local_8 = 0;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x20),(std::string *)(param_1 + 0x20));
  *(undefined4 *)((char *)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((char *)this + 100) = 0;
  // [seh] local_8._0_1_ = 2;
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 100))(this + 0x40,uVar1);
    *(undefined4 *)((char *)this + 100) = uVar2;
  }
  // [seh] local_8._0_1_ = 3;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x68),(std::string *)(param_1 + 0x68));
  *(undefined4 *)((char *)this + 0xa4) = 0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,5);
  if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0xa4))((char *)this + 0x80);
    *(undefined4 *)((char *)this + 0xa4) = uVar2;
  }
  // [seh] ExceptionList = local_10;
  return;
}
