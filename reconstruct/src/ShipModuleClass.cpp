// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ShipModuleClass * __thiscall ShipModuleClass::ShipModuleClass (ShipModuleClass *this,undefined4 param_1,undefined4 param_2,void *param_4)
ShipModuleClass::ShipModuleClass(undefined4 param_1, undefined4 param_2, void * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000024[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000003c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined1 *puVar2;
  ModuleSlotType MVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  void *in_stack_0000003c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be229;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar2 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((char *)this + 4) = param_2;
  ghidra::str::ctor((std::string *)((char *)this + 8),(std::string *)&param_4);
  // [seh] local_8._0_1_ = 3;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x20),(std::string *)&stack0x00000024);
  // [seh] local_8._0_1_ = 4;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x38),(std::string *)&stack0x0000003c);
  *(undefined4 *)((char *)this + 0x60) = 0;
  *(undefined4 *)((char *)this + 100) = 0xf;
  ((char *)this)[0x50] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0xf;
  ((char *)this)[0x68] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x80) = 1;
  *(undefined4 *)((char *)this + 0x84) = 1;
  *(undefined4 *)((char *)this + 0x88) = in_stack_00000054;
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0;
  *(undefined4 *)((char *)this + 0xac) = 0xf;
  ((char *)this)[0x98] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xb0) = 1;
  *(undefined4 *)((char *)this + 0xcc) = 0;
  *(undefined4 *)((char *)this + 0xd0) = 0;
  *(undefined4 *)((char *)this + 0xd4) = 0;
  *(undefined4 *)((char *)this + 0xdc) = in_stack_00000058;
  *(undefined4 *)((char *)this + 0xd8) = 0;
  *(undefined4 *)((char *)this + 0xe0) = in_stack_0000005c;
  *(undefined4 *)((char *)this + 0xe4) = 0;
  *(undefined4 *)((char *)this + 0xe8) = 0;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0;
  *(undefined4 *)((char *)this + 0xf4) = 0;
  *(undefined4 *)((char *)this + 0xf8) = 0;
  *(undefined4 *)((char *)this + 0xfc) = 0;
  ((char *)this)[0x100] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x104) = 0;
  *(undefined4 *)((char *)this + 0x108) = 0;
  *(undefined4 *)((char *)this + 0x10c) = 0;
  *(undefined4 *)((char *)this + 0x114) = 0;
  *(undefined4 *)((char *)this + 0x118) = 0;
  *(undefined4 *)((char *)this + 0x11c) = 0;
  *(undefined4 *)((char *)this + 0x120) = 0;
  *(undefined4 *)((char *)this + 0x124) = 0;
  *(undefined4 *)((char *)this + 0x128) = 0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,10);
  iVar1 = *(int *)((char *)this + 4);
  if (((iVar1 == 2) || (iVar1 == 9)) || (iVar1 == 0xe)) {
    ((char *)this)[0x94] = (byte)0x1;
  }
  else {
    ((char *)this)[0x94] = (byte)0x0;
  }
  MVar3 = getSlotTypeForModuleType((ModuleType)puVar2);
  *(ModuleSlotType *)((char *)this + 0x110) = MVar3;
  *(undefined4 *)((char *)this + 0xc0) = 0;
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  *(undefined4 *)((char *)this + 200) = 0;
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar4 = param_4;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_4 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0xf;
  param_4 = (void *)((uint)param_4 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar5 = (nothrow_t *)(in_stack_00000038 + 1);
    pvVar4 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)in_stack_00000024 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  in_stack_00000034 = 0;
  in_stack_00000038 = 0xf;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000050) {
    pnVar5 = (nothrow_t *)(in_stack_00000050 + 1);
    pvVar4 = in_stack_0000003c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)in_stack_0000003c + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000050 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000003c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: ModuleSlotType __cdecl ShipModuleClass::getSlotTypeForModuleType(ModuleType param_1)
ModuleSlotType ShipModuleClass::getSlotTypeForModuleType(ModuleType param_1)

{
  bool bVar1;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 0:
  case 0x12:
    bVar1 = cc_assert_script_compatible("Module error: invalid module type.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","Module error: invalid module type.");
    }
    break;
  case 1:
  case 10:
    return 2;
  case 5:
  case 6:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
    return 1;
  case 0xb:
    return 3;
  }
  return 0;
}


// Ghidra: ModuleConfiguration * __thiscall ShipModuleClass::getRandomConfigurationOfType(ShipModuleClass *this,int param_1)
ModuleConfiguration * ShipModuleClass::getRandomConfigurationOfType(int param_1)

{
  ModuleConfiguration *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ModuleConfiguration *pMVar6;
  
  iVar4 = *(int *)((char *)this + 0x124) - (int)*(undefined4 **)((char *)this + 0x120) >> 2;
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      iVar4 = 100;
      do {
        if (iVar4 < 1) {
          return (ModuleConfiguration *)0x0;
        }
        iVar2 = *(int *)((char *)this + 0x124);
        iVar4 = iVar4 + -1;
        iVar3 = *(int *)((char *)this + 0x120);
        iVar5 = rand();
        pMVar1 = *(ModuleConfiguration **)
                  (*(int *)((char *)this + 0x120) + (iVar5 % (iVar2 - iVar3 >> 2)) * 4);
        pMVar6 = (ModuleConfiguration *)0x0;
        if (*(int *)pMVar1 == 0) {
          pMVar6 = pMVar1;
        }
      } while (pMVar6 == (ModuleConfiguration *)0x0);
      return pMVar6;
    }
    pMVar1 = (ModuleConfiguration *)**(undefined4 **)((char *)this + 0x120);
    if (*(int *)pMVar1 == 0) {
      return pMVar1;
    }
  }
  return (ModuleConfiguration *)0x0;
}
