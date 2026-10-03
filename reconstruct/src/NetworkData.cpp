// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall NetworkData::sendSetClientInfo(undefined4 param_1,void *param_2)
void NetworkData::sendSetClientInfo(undefined4 param_1, void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff98[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  NetworkClient *pNVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  undefined4 uStack_58;
  std::string abStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_2c [24];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2e00;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_38 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_2c[0] = 0x87;
  uStack_58._0_1_ = (<>)0xd2;
  uStack_58._1_3_ = 0x41c6;
  local_14 = uStack_38;
  ghidra::str::ctor(abStack_50,(std::string *)&stack0x0000001c);
  safeStrCpy();
  uStack_58._0_1_ = (<>)0xea;
  uStack_58._1_3_ = 0x41c6;
  ghidra::str::ctor(abStack_50,(std::string *)&param_2);
  safeStrCpy();
  uStack_3c = 0x41c6ff;
  pNVar2 = ghidra::any_singleton();
  uStack_3c = 0;
  uStack_40 = 1;
  piVar1 = *(int **)(pNVar2 + 0x30);
  RakNet::AddressOrGUID::AddressOrGUID
            ((AddressOrGUID *)&stack0xffffff98,(RakNetGUID *)&DAT_00657688);
  (**(code **)(*piVar1 + 0x50))(local_2c,0x17,1,3,0);
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar4 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar3 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)in_stack_0000001c + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendShipCommand (NetworkData *this,int param_1,double param_2,double param_3,double param_4)
void NetworkData::sendShipCommand(int param_1, double param_2, double param_3, double param_4)

{
  char stack0xffffff50[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  NetworkClient *pNVar2;
  undefined4 in_stack_00000008;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_a8;
  undefined1 auStack_7c [24];
  undefined1 local_64;
  int local_63;
  undefined8 local_4f;
  uint local_44;
  
  // [cookie] local_44 = ___security_cookie ^ (uint)auStack_7c;
  local_4f = CONCAT44(param_2._0_4_,in_stack_00000008);
  local_64 = 0x90;
  local_63 = param_1;
  if (OISConfiguration::multiDebug) {
    uStack_a8._0_2_ = 0xc83b;
    uStack_a8._2_2_ = 0x41;
    debugPrint("NETWORK","Client: Sent run command %d (%f, %f, %f)");
  }
  pNVar2 = ghidra::any_singleton();
  piVar1 = *(int **)(pNVar2 + 0x30);
  uStack_b8 = 0x41c859;
  RakNet::AddressOrGUID::AddressOrGUID
            ((AddressOrGUID *)&stack0xffffff50,(RakNetGUID *)&DAT_00657688);
  uStack_b8 = 3;
  uStack_bc = 1;
  uStack_c0 = 0x1d;
  (**(code **)(*piVar1 + 0x50))(&local_64);
  // [cookie] __security_check_cookie((uint)&uStack_c0 ^ 1);
  return;
}


// Ghidra: void __thiscall NetworkData::sendSync(NetworkData *this,RakNetGUID param_1,SyncNode *param_2)
void NetworkData::sendSync(RakNetGUID param_1, SyncNode * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 uVar1;
  undefined8 uVar2;
  void **ppvVar3;
  int *piVar4;
  NetworkServer *pNVar5;
  void **ppvVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  AddressOrGUID AStack_8c;
  RakNetGUID local_54;
  undefined1 local_44;
  undefined4 local_43;
  void *local_3f [4];
  undefined4 local_2f;
  uint local_2b;
  RakNetGUID local_24;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b2e68;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (*(int *)(param_2 + 4) == 3) {
    local_2f = 0;
    local_2b = 0xf;
    local_3f[0] = (void *)((uint)local_3f[0] & 0xffffff00);
    // [seh] local_8 = 0;
    local_43 = *(undefined4 *)param_2;
    ppvVar3 = *(void ***)(param_2 + 8);
    local_44 = 0x8f;
    if (local_3f != ppvVar3) {
      ppvVar6 = ppvVar3;
      if ((void *)0xf < ppvVar3[5]) {
        ppvVar6 = *ppvVar3;
      }
      AStack_8c._36_4_ = 0x41ca3a;
      ghidra::str::assign((std::string *)local_3f,(char *)ppvVar6,(uint)ppvVar3[4]);
    }
    local_24.g._0_4_ = (undefined4)param_1.g;
    local_24.g._4_1_ = param_1.g._4_1_;
    local_24.g._5_1_ = param_1.g._5_1_;
    local_24.g._6_2_ = param_1.g._6_2_;
    local_24.systemIndex = param_1.systemIndex;
    local_24._10_2_ = param_1._10_2_;
    local_24._12_4_ = param_1._12_4_;
    ghidra::any_singleton();
    pNVar5 = ghidra::any_singleton();
    piVar4 = *(int **)(pNVar5 + 0x90);
    RakNet::AddressOrGUID::AddressOrGUID(&AStack_8c,&local_24);
    (**(code **)(*piVar4 + 0x50))(&local_44,0x1d,1,3,0);
    if (0xf < local_2b) {
      pnVar8 = (nothrow_t *)(local_2b + 1);
      pvVar7 = local_3f[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_3f[0] + -4);
        pnVar8 = (nothrow_t *)(local_2b + 0x24);
        if (0x1f < (uint)((int)local_3f[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
  }
  else {
    local_24.g._0_4_ = CONCAT31((int3)*(undefined4 *)param_2,0x8e);
    local_24.g._4_1_ = (undefined1)((uint)*(undefined4 *)param_2 >> 0x18);
    switch(*(int *)(param_2 + 4)) {
    case 0:
      uVar1 = **(undefined4 **)(param_2 + 8);
      local_24.g._5_1_ = (undefined1)uVar1;
      local_24.g._6_2_ = (undefined2)((uint)uVar1 >> 8);
      local_24.systemIndex._0_1_ = (undefined1)((uint)uVar1 >> 0x18);
      break;
    case 1:
      uVar1 = **(undefined4 **)(param_2 + 8);
      local_24.g._5_1_ = (undefined1)uVar1;
      local_24.g._6_2_ = (undefined2)((uint)uVar1 >> 8);
      local_24.systemIndex._0_1_ = (undefined1)((uint)uVar1 >> 0x18);
      break;
    case 2:
      uVar2 = **(undefined8 **)(param_2 + 8);
      local_24.g._5_1_ = (undefined1)uVar2;
      local_24.g._6_2_ = (undefined2)((ulonglong)uVar2 >> 8);
      local_24._8_4_ = SUB84((ulonglong)uVar2 >> 0x18,0);
      local_24._12_1_ = SUB81((ulonglong)uVar2 >> 0x38,0);
      break;
    case 4:
      local_24.g._5_1_ = **(undefined1 **)(param_2 + 8);
    }
    local_54.g._0_4_ = (undefined4)param_1.g;
    local_54.g._4_4_ = param_1.g._4_4_;
    local_54.systemIndex = param_1.systemIndex;
    local_54._10_2_ = param_1._10_2_;
    local_54._12_4_ = param_1._12_4_;
    ghidra::any_singleton();
    pNVar5 = ghidra::any_singleton();
    piVar4 = *(int **)(pNVar5 + 0x90);
    RakNet::AddressOrGUID::AddressOrGUID(&AStack_8c,&local_54);
    (**(code **)(*piVar4 + 0x50))(&local_24,0xd,1,3,0);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendSetModuleBasicSettings (NetworkData *this,RakNetGUID param_1,int param_2,int param_3,ShipModule *param_4)
void NetworkData::sendSetModuleBasicSettings(RakNetGUID param_1, int param_2, int param_3, ShipModule * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  NetworkServer *pNVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  AddressOrGUID AStack_74;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  RakNetGUID local_38;
  undefined1 local_28;
  int local_27;
  int local_23;
  undefined4 local_1f;
  ShipModule local_1b;
  ShipModule local_1a;
  ShipModule local_19;
  ShipModule local_18;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_27 = param_2;
  local_1f = *(undefined4 *)(param_4 + 0x5c);
  local_23 = param_3;
  local_1b = param_4[0x62];
  local_1a = param_4[0x60];
  local_19 = param_4[0x61];
  local_f = *(undefined4 *)(param_4 + 0x6c);
  local_13 = *(undefined4 *)(param_4 + 100);
  local_18 = param_4[99];
  local_17 = *(undefined4 *)(param_4 + 0x34);
  local_28 = 0x92;
  local_38.g._0_4_ = (int)param_1.g;
  local_38.g._4_4_ = param_1.g._4_4_;
  local_38.systemIndex = param_1.systemIndex;
  local_38._10_2_ = param_1._10_2_;
  local_38._12_4_ = param_1._12_4_;
  uStack_48 = 0x41cdaf;
  ghidra::any_singleton();
  uStack_48 = 0x41cdb4;
  pNVar1 = ghidra::any_singleton();
  uStack_48 = 0;
  uStack_4c = 0;
  piVar2 = *(int **)(pNVar1 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_74,&local_38);
  (**(code **)(*piVar2 + 0x50))(&local_28,0x1d,1,3,0);
  uVar5 = 0;
  local_38.g._0_4_ = (int)param_1.g;
  local_38.g._4_4_ = param_1.g._4_4_;
  local_38.systemIndex = param_1.systemIndex;
  local_38._10_2_ = param_1._10_2_;
  local_38._12_4_ = param_1._12_4_;
  pNVar1 = ghidra::any_singleton();
  uVar4 = *(int *)(pNVar1 + 0x40) - *(int *)(pNVar1 + 0x3c) >> 2;
  if (uVar4 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(pNVar1 + 0x3c) + uVar5 * 4);
      if ((*piVar2 == (int)local_38.g) && (piVar2[1] == local_38.g._4_4_)) goto LAB_0041ce16;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar2 = (int *)0x0;
LAB_0041ce16:
  if (OISConfiguration::multiDebug != false) {
    piVar3 = piVar2 + 10;
    if (0xf < (uint)piVar2[0xf]) {
      piVar3 = (int *)*piVar3;
    }
    debugPrint("NETWORK","Sent set module basic settings (%d, %d) to client %s",param_2,param_3,
               piVar3);
  }
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendSetModuleDetails (NetworkData *this,RakNetGUID param_1,int param_2,int param_3,ShipModule *param_4)
void NetworkData::sendSetModuleDetails(RakNetGUID param_1, int param_2, int param_3, ShipModule * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  NetworkServer *pNVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  AddressOrGUID AStack_80;
  undefined4 uStack_58;
  undefined4 uStack_54;
  RakNetGUID local_44;
  undefined1 local_34;
  int local_33;
  int local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  ShipModule local_1f;
  ShipModule local_1e;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  ShipModule local_11;
  ShipModule local_10;
  undefined4 local_f;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_33 = param_2;
  local_2b = *(undefined4 *)(param_4 + 0x24);
  local_2f = param_3;
  local_27 = *(undefined4 *)(param_4 + 0x28);
  local_1e = param_4[0x2c];
  local_1d = *(undefined4 *)(param_4 + 0x30);
  local_19 = *(undefined4 *)(param_4 + 0x68);
  local_34 = 0x93;
  if (*(int *)(param_4 + 0x18) == 0) {
    local_15 = 0xffffffff;
  }
  else {
    local_15 = *(undefined4 *)(*(int *)(param_4 + 0x18) + 0x250);
  }
  local_11 = param_4[0x1c];
  local_10 = param_4[0x1d];
  local_23 = *(undefined4 *)(param_4 + 0x38);
  local_1f = param_4[0x14];
  local_f = *(undefined4 *)(param_4 + 0x1e);
  local_44.g._0_4_ = (int)param_1.g;
  local_44.g._4_4_ = param_1.g._4_4_;
  local_44.systemIndex = param_1.systemIndex;
  local_44._10_2_ = param_1._10_2_;
  local_44._12_4_ = param_1._12_4_;
  uStack_54 = 0x41ceef;
  ghidra::any_singleton();
  uStack_54 = 0x41cef4;
  pNVar1 = ghidra::any_singleton();
  uStack_54 = 0;
  uStack_58 = 0;
  piVar2 = *(int **)(pNVar1 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_80,&local_44);
  (**(code **)(*piVar2 + 0x50))(&local_34,0x29,1,3,0);
  uVar5 = 0;
  local_44.g._0_4_ = (int)param_1.g;
  local_44.g._4_4_ = param_1.g._4_4_;
  local_44.systemIndex = param_1.systemIndex;
  local_44._10_2_ = param_1._10_2_;
  local_44._12_4_ = param_1._12_4_;
  pNVar1 = ghidra::any_singleton();
  uVar4 = *(int *)(pNVar1 + 0x40) - *(int *)(pNVar1 + 0x3c) >> 2;
  if (uVar4 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(pNVar1 + 0x3c) + uVar5 * 4);
      if ((*piVar2 == (int)local_44.g) && (piVar2[1] == local_44.g._4_4_)) goto LAB_0041cf56;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar2 = (int *)0x0;
LAB_0041cf56:
  if (OISConfiguration::multiDebug != false) {
    piVar3 = piVar2 + 10;
    if (0xf < (uint)piVar2[0xf]) {
      piVar3 = (int *)*piVar3;
    }
    debugPrint("NETWORK","Sent set module details (%d, %d) to client %s",param_2,param_3,piVar3);
  }
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendSetComponent(NetworkData *this,RakNetGUID param_1,ShipModule *param_2,int param_3)
void NetworkData::sendSetComponent(RakNetGUID param_1, ShipModule * param_2, int param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  NetworkServer *pNVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  AddressOrGUID AStack_74;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  RakNetGUID local_38;
  ShipModule *local_28;
  int local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_17;
  undefined4 local_13;
  int local_f;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = 0x9d;
  local_28 = param_2;
  local_1f = *(undefined4 *)(*(int *)(param_2 + 8) + 4);
  local_1b = *(undefined4 *)(param_2 + 0x10);
  local_17 = param_3;
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4 + param_3 * 4);
  if (iVar1 == 0) {
    local_13 = 0xffffffff;
    local_f = 0;
  }
  else {
    local_13 = **(undefined4 **)(iVar1 + 4);
    local_f = (int)**(float **)(*(int *)(param_2 + 0xc) + 4 + param_3 * 4);
  }
  local_38.g._0_4_ = (int)param_1.g;
  local_38.g._4_4_ = param_1.g._4_4_;
  local_38.systemIndex = param_1.systemIndex;
  local_38._10_2_ = param_1._10_2_;
  local_38._12_4_ = param_1._12_4_;
  uStack_48 = 0x41d00d;
  ghidra::any_singleton();
  uStack_48 = 0x41d012;
  pNVar2 = ghidra::any_singleton();
  uStack_48 = 0;
  uStack_4c = 0;
  piVar3 = *(int **)(pNVar2 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_74,&local_38);
  (**(code **)(*piVar3 + 0x50))(&local_20,0x15,1,3,0);
  uVar7 = 0;
  local_38.g._0_4_ = (int)param_1.g;
  local_38.g._4_4_ = param_1.g._4_4_;
  local_38.systemIndex = param_1.systemIndex;
  local_38._10_2_ = param_1._10_2_;
  local_38._12_4_ = param_1._12_4_;
  pNVar2 = ghidra::any_singleton();
  local_24 = *(int *)(pNVar2 + 0x3c);
  uVar5 = *(int *)(pNVar2 + 0x40) - local_24 >> 2;
  if (uVar5 != 0) {
    do {
      piVar3 = *(int **)(local_24 + uVar7 * 4);
      if ((*piVar3 == (int)local_38.g) && (piVar3[1] == local_38.g._4_4_)) goto LAB_0041d07f;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  piVar3 = (int *)0x0;
LAB_0041d07f:
  if (OISConfiguration::multiDebug != false) {
    piVar6 = piVar3 + 10;
    if (0xf < (uint)piVar3[0xf]) {
      piVar6 = (int *)*piVar6;
    }
    puVar4 = (undefined4 *)(*(int *)(local_28 + 8) + 8);
    if (0xf < *(uint *)(*(int *)(local_28 + 8) + 0x1c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    debugPrint("NETWORK",
               "Sending SET_COMPONENT packet for module %s, slot %d, class/damage = %d/%d to client %s"
               ,puVar4,param_3,local_13,local_f,piVar6);
  }
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendSetAddon(NetworkData *this,RakNetGUID param_1,ShipModule *param_2,int param_3)
void NetworkData::sendSetAddon(RakNetGUID param_1, ShipModule * param_2, int param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int *piVar2;
  NetworkServer *pNVar3;
  AddressOrGUID AStack_64;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  RakNetGUID local_30;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_17;
  undefined4 local_13;
  int local_f;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = 0x9e;
  local_1f = *(undefined4 *)(*(int *)(param_2 + 8) + 4);
  local_1b = *(undefined4 *)(param_2 + 0x10);
  local_17 = param_3;
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x54 + param_3 * 4);
  if (iVar1 == 0) {
    local_13 = 0xffffffff;
    local_f = 0;
  }
  else {
    local_13 = **(undefined4 **)(iVar1 + 4);
    local_f = (int)**(float **)(*(int *)(param_2 + 0xc) + 0x54 + param_3 * 4);
  }
  local_30.g._0_4_ = (undefined4)param_1.g;
  local_30.g._4_4_ = param_1.g._4_4_;
  local_30.systemIndex = param_1.systemIndex;
  local_30._10_2_ = param_1._10_2_;
  local_30._12_4_ = param_1._12_4_;
  uStack_38 = 0x41d5d8;
  ghidra::any_singleton();
  uStack_38 = 0x41d5dd;
  pNVar3 = ghidra::any_singleton();
  uStack_38 = 0;
  uStack_3c = 0;
  piVar2 = *(int **)(pNVar3 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_64,&local_30);
  (**(code **)(*piVar2 + 0x50))(&local_20,0x15,1,3,0);
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendUpdateSensorDataBasic(NetworkData *this,RakNetGUID param_1,SensorData *param_2)
void NetworkData::sendUpdateSensorDataBasic(RakNetGUID param_1, SensorData * param_2)

{
  int *piVar1;
  NetworkServer *pNVar2;
  AddressOrGUID AStack_8c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  RakNetGUID local_14;
  
  local_58 = 0x94;
  local_4f = *(undefined4 *)(param_2 + 0x10);
  uStack_4b = *(undefined4 *)(param_2 + 0x14);
  uStack_47 = *(undefined4 *)(param_2 + 0x18);
  uStack_43 = *(undefined4 *)(param_2 + 0x1c);
  local_57 = *(undefined4 *)param_2;
  local_3b = *(undefined4 *)(param_2 + 0x30);
  local_3f = *(undefined4 *)(param_2 + 0x118);
  local_1f = *(undefined4 *)(param_2 + 0x104);
  local_37 = *(undefined4 *)(param_2 + 0x34);
  uStack_33 = *(undefined4 *)(param_2 + 0x38);
  uStack_2f = *(undefined4 *)(param_2 + 0x3c);
  uStack_2b = *(undefined4 *)(param_2 + 0x40);
  local_1b = *(undefined4 *)(param_2 + 0x108);
  local_23 = *(undefined4 *)(param_2 + 0x114);
  local_27 = *(undefined4 *)(param_2 + 0x128);
  local_14.g._0_4_ = (undefined4)param_1.g;
  local_14.g._4_4_ = param_1.g._4_4_;
  local_14.systemIndex = param_1.systemIndex;
  local_14._10_2_ = param_1._10_2_;
  local_14._12_4_ = param_1._12_4_;
  uStack_60 = 0x41d68f;
  ghidra::any_singleton();
  uStack_60 = 0x41d694;
  pNVar2 = ghidra::any_singleton();
  uStack_60 = 0;
  uStack_64 = 0;
  piVar1 = *(int **)(pNVar2 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_8c,&local_14);
  (**(code **)(*piVar1 + 0x50))(&local_58,0x41,1,3,0);
  return;
}


// Ghidra: void __thiscall NetworkData::sendUpdateSensorDataAdvanced(NetworkData *this,RakNetGUID param_1,SensorData *param_2)
void NetworkData::sendUpdateSensorDataAdvanced(RakNetGUID param_1, SensorData * param_2)

{
  char stack0xfffffef0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  NetworkServer *pNVar2;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_100;
  std::string abStack_f8 [4];
  undefined4 uStack_f4;
  undefined1 auStack_dc [12];
  RakNetGUID local_d0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined4 local_b3;
  uint uStack_58;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  SensorData local_37;
  SensorData local_36;
  SensorData local_35;
  SensorData local_34;
  SensorData local_33;
  SensorData local_32;
  SensorData local_31;
  SensorData local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_14;
  
  // [cookie] local_14 = ___security_cookie ^ (uint)auStack_dc;
  local_b8 = 0x95;
  local_b7 = *(undefined4 *)param_2;
  uStack_100._0_1_ = (<>)0x7;
  uStack_100._1_3_ = 0x41d7;
  ghidra::str::ctor(abStack_f8,(std::string *)(param_2 + 0x48));
  safeStrCpy();
  uStack_100._0_1_ = (<>)0x20;
  uStack_100._1_3_ = 0x41d7;
  ghidra::str::ctor(abStack_f8,(std::string *)(param_2 + 0x60));
  safeStrCpy();
  uStack_100._0_1_ = (<>)0x3c;
  uStack_100._1_3_ = 0x41d7;
  ghidra::str::ctor(abStack_f8,(std::string *)(param_2 + 0x90));
  safeStrCpy();
  local_53 = *(undefined4 *)(param_2 + 0xe0);
  local_4f = *(undefined4 *)(param_2 + 0xe4);
  local_4b = *(undefined4 *)(param_2 + 0xe8);
  local_37 = param_2[0x10c];
  local_36 = param_2[0x10f];
  local_35 = param_2[0x10d];
  local_47 = *(undefined4 *)(param_2 + 0x20);
  uStack_43 = *(undefined4 *)(param_2 + 0x24);
  uStack_3f = *(undefined4 *)(param_2 + 0x28);
  uStack_3b = *(undefined4 *)(param_2 + 0x2c);
  local_34 = param_2[0x10e];
  local_32 = param_2[0x112];
  local_33 = param_2[0x110];
  local_31 = param_2[0x111];
  local_2c = *(undefined4 *)(param_2 + 0x11c);
  local_24 = *(undefined4 *)(param_2 + 0xd8);
  local_20 = *(undefined4 *)(param_2 + 300);
  local_28 = *(undefined4 *)(param_2 + 0xdc);
  local_2d = param_2[0x45];
  local_b3 = *(undefined4 *)(param_2 + 0x124);
  if (OISConfiguration::multiDebug != false) {
    uStack_f4 = 0x41d84f;
    debugPrint("NETWORK","Packed Advanced: %d/ %s");
    if (OISConfiguration::multiDebug != false) {
      debugPrint("NETWORK","ship type = %d");
    }
  }
  local_d0.g._0_4_ = (undefined4)param_1.g;
  local_d0.g._4_4_ = param_1.g._4_4_;
  local_d0.systemIndex = param_1.systemIndex;
  local_d0._10_2_ = param_1._10_2_;
  local_d0._12_4_ = param_1._12_4_;
  ghidra::any_singleton();
  pNVar2 = ghidra::any_singleton();
  piVar1 = *(int **)(pNVar2 + 0x90);
  uStack_118 = 0x41d8a0;
  RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffef0,&local_d0);
  uStack_118 = 3;
  uStack_11c = 1;
  uStack_120 = 0x9c;
  (**(code **)(*piVar1 + 0x50))(&local_b8);
  // [cookie] __security_check_cookie(uStack_58 ^ (uint)&uStack_120);
  return;
}


// Ghidra: void __thiscall NetworkData::sendUpdateSensorWaveform(NetworkData *this,RakNetGUID param_1,SensorData *param_2)
void NetworkData::sendUpdateSensorWaveform(RakNetGUID param_1, SensorData * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int *piVar2;
  NetworkServer *pNVar3;
  uint uVar4;
  uint uVar5;
  AddressOrGUID AStack_19c;
  undefined4 uStack_174;
  undefined4 uStack_170;
  RakNetGUID local_164;
  undefined1 local_154;
  undefined4 local_153;
  undefined4 local_14b [80];
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_154 = 0x96;
  uVar4 = 0;
  local_14b[0] = 0;
  local_14b[1] = 0;
  local_14b[2] = 0;
  local_14b[3] = 0;
  local_14b[4] = 0;
  local_14b[5] = 0;
  local_14b[6] = 0;
  local_14b[7] = 0;
  local_153 = *(undefined4 *)param_2;
  uVar5 = *(int *)(param_2 + 0xf0) - *(int *)(param_2 + 0xec) >> 3;
  local_14b[8] = 0;
  local_14b[9] = 0;
  local_14b[10] = 0;
  local_14b[0xb] = 0;
  local_14b[0xc] = 0;
  local_14b[0xd] = 0;
  local_14b[0xe] = 0;
  local_14b[0xf] = 0;
  local_14b[0x10] = 0;
  local_14b[0x11] = 0;
  local_14b[0x12] = 0;
  local_14b[0x13] = 0;
  local_14b[0x14] = 0;
  local_14b[0x15] = 0;
  local_14b[0x16] = 0;
  local_14b[0x17] = 0;
  local_14b[0x18] = 0;
  local_14b[0x19] = 0;
  local_14b[0x1a] = 0;
  local_14b[0x1b] = 0;
  local_14b[0x1c] = 0;
  local_14b[0x1d] = 0;
  local_14b[0x1e] = 0;
  local_14b[0x1f] = 0;
  local_14b[0x20] = 0;
  local_14b[0x21] = 0;
  local_14b[0x22] = 0;
  local_14b[0x23] = 0;
  local_14b[0x24] = 0;
  local_14b[0x25] = 0;
  local_14b[0x26] = 0;
  local_14b[0x27] = 0;
  local_14b[0x28] = 0;
  local_14b[0x29] = 0;
  local_14b[0x2a] = 0;
  local_14b[0x2b] = 0;
  local_14b[0x2c] = 0;
  local_14b[0x2d] = 0;
  local_14b[0x2e] = 0;
  local_14b[0x2f] = 0;
  local_14b[0x30] = 0;
  local_14b[0x31] = 0;
  local_14b[0x32] = 0;
  local_14b[0x33] = 0;
  local_14b[0x34] = 0;
  local_14b[0x35] = 0;
  local_14b[0x36] = 0;
  local_14b[0x37] = 0;
  local_14b[0x38] = 0;
  local_14b[0x39] = 0;
  local_14b[0x3a] = 0;
  local_14b[0x3b] = 0;
  local_14b[0x3c] = 0;
  local_14b[0x3d] = 0;
  local_14b[0x3e] = 0;
  local_14b[0x3f] = 0;
  local_14b[0x40] = 0;
  local_14b[0x41] = 0;
  local_14b[0x42] = 0;
  local_14b[0x43] = 0;
  local_14b[0x44] = 0;
  local_14b[0x45] = 0;
  local_14b[0x46] = 0;
  local_14b[0x47] = 0;
  local_14b[0x48] = 0;
  local_14b[0x49] = 0;
  local_14b[0x4a] = 0;
  local_14b[0x4b] = 0;
  local_14b[0x4c] = 0;
  local_14b[0x4d] = 0;
  local_14b[0x4e] = 0;
  local_14b[0x4f] = 0;
  if (uVar5 != 0) {
    do {
      if (0x13 < (int)uVar4) break;
      iVar1 = *(int *)(param_2 + 0xec);
      local_14b[uVar4] = *(undefined4 *)(iVar1 + 4 + uVar4 * 8);
      local_14b[uVar4 + 0x14] = *(undefined4 *)(iVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  uVar4 = 0;
  uVar5 = *(int *)(param_2 + 0xfc) - *(int *)(param_2 + 0xf8) >> 3;
  if (uVar5 != 0) {
    do {
      if (0x13 < (int)uVar4) break;
      iVar1 = *(int *)(param_2 + 0xf8);
      local_14b[uVar4 + 0x28] = *(undefined4 *)(iVar1 + 4 + uVar4 * 8);
      local_14b[uVar4 + 0x3c] = *(undefined4 *)(iVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  local_164.g._0_4_ = (undefined4)param_1.g;
  local_164.g._4_4_ = param_1.g._4_4_;
  local_164.systemIndex = param_1.systemIndex;
  local_164._10_2_ = param_1._10_2_;
  local_164._12_4_ = param_1._12_4_;
  uStack_170 = 0x41d9f2;
  ghidra::any_singleton();
  uStack_170 = 0x41d9f7;
  pNVar3 = ghidra::any_singleton();
  uStack_170 = 0;
  uStack_174 = 0;
  piVar2 = *(int **)(pNVar3 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_19c,&local_164);
  (**(code **)(*piVar2 + 0x50))(&local_154,0x149,1,3,0);
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendLog(NetworkData *this,RakNetGUID param_1,LogLine *param_2)
void NetworkData::sendLog(RakNetGUID param_1, LogLine * param_2)

{
  char stack0xfffffeb0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  NetworkServer *pNVar2;
  std::string *pbVar3;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_140;
  std::string abStack_138 [16];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_118 [8];
  RakNetGUID local_110;
  undefined1 local_100;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  uint uStack_58;
  undefined4 local_1f;
  uint local_14;
  
  // [cookie] local_14 = ___security_cookie ^ (uint)auStack_118;
  local_100 = 0x98;
  local_1f = *(undefined4 *)(param_2 + 0x30);
  pbVar3 = (std::string *)(param_2 + 0x18);
  uStack_140._0_1_ = (<>)0x7c;
  uStack_140._1_3_ = 0x41da;
  ghidra::str::ctor(abStack_138,pbVar3);
  safeStrCpy();
  local_ff = *(undefined4 *)param_2;
  local_fb = *(undefined4 *)(param_2 + 4);
  local_f7 = *(undefined4 *)(param_2 + 8);
  local_f3 = *(undefined4 *)(param_2 + 0xc);
  local_ef = *(undefined4 *)(param_2 + 0x10);
  local_eb = *(undefined4 *)(param_2 + 0x14);
  local_110.g._0_4_ = (undefined4)param_1.g;
  local_110.g._4_4_ = param_1.g._4_4_;
  local_110.systemIndex = param_1.systemIndex;
  local_110._10_2_ = param_1._10_2_;
  local_110._12_4_ = param_1._12_4_;
  uStack_124 = 0x41dac4;
  ghidra::any_singleton();
  uStack_124 = 0x41dac9;
  pNVar2 = ghidra::any_singleton();
  uStack_124 = 0;
  uStack_128 = 0;
  piVar1 = *(int **)(pNVar2 + 0x90);
  uStack_158 = 0x41dae2;
  RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffeb0,&local_110);
  uStack_158 = 3;
  uStack_15c = 1;
  (**(code **)(*piVar1 + 0x50))(&local_100,0xe5);
  if (OISConfiguration::multiDebug != false) {
    if (0xf < *(uint *)(param_2 + 0x2c)) {
      pbVar3 = *(std::string **)pbVar3;
    }
    debugPrint("NETWORK","Sent message \'%s\' to client",pbVar3);
  }
  // [cookie] __security_check_cookie(uStack_58 ^ (uint)&uStack_15c);
  return;
}


// Ghidra: void __thiscall NetworkData::sendChatLineToServer(undefined4 param_1,undefined4 *param_2)
void NetworkData::sendChatLineToServer(undefined4 param_1, undefined4 * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff10[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  NetworkClient *pNVar2;
  undefined4 *puVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000018;
  undefined4 uStack_e0;
  std::string abStack_d8 [16];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined2 local_b4 [80];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2f28;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_c0 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_b4[0] = 0xa3;
  uStack_e0._0_1_ = (<>)0x8a;
  uStack_e0._1_3_ = 0x41db;
  local_14 = uStack_c0;
  ghidra::str::ctor(abStack_d8,(std::string *)&param_2);
  safeStrCpy();
  uStack_c4 = 0x41dba2;
  pNVar2 = ghidra::any_singleton();
  uStack_c4 = 0;
  uStack_c8 = 1;
  piVar1 = *(int **)(pNVar2 + 0x30);
  RakNet::AddressOrGUID::AddressOrGUID
            ((AddressOrGUID *)&stack0xffffff10,(RakNetGUID *)&DAT_00657688);
  (**(code **)(*piVar1 + 0x50))(local_b4,0x9f,1,3,0);
  if (OISConfiguration::multiDebug != false) {
    puVar3 = &param_2;
    if (0xf < in_stack_00000018) {
      puVar3 = param_2;
    }
    debugPrint("NETWORK","Sent message \'%s\' to server",puVar3);
  }
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      puVar3 = (undefined4 *)param_2[-1];
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendPresentationCommand (NetworkData *this,RakNetGUID param_1,int param_2,float param_3,float param_4)
void NetworkData::sendPresentationCommand(RakNetGUID param_1, int param_2, float param_3, float param_4)

{
  int *piVar1;
  NetworkServer *pNVar2;
  uint uVar3;
  undefined4 uStack_8c;
  float fStack_88;
  AddressOrGUID AStack_80;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_48 [8];
  RakNetGUID local_40;
  undefined1 local_24;
  int local_23;
  float local_1b;
  uint local_14;
  
  // [cookie] local_14 = ___security_cookie ^ (uint)auStack_48;
  local_24 = 0x9a;
  local_1b = param_3;
  local_23 = param_2;
  local_40.g._0_4_ = (undefined4)param_1.g;
  local_40.g._4_4_ = param_1.g._4_4_;
  local_40.systemIndex = param_1.systemIndex;
  local_40._10_2_ = param_1._10_2_;
  local_40._12_4_ = param_1._12_4_;
  uStack_54 = 0x41dc9a;
  ghidra::any_singleton();
  uStack_54 = 0x41dc9f;
  pNVar2 = ghidra::any_singleton();
  uStack_54 = 0;
  uStack_58 = 0;
  piVar1 = *(int **)(pNVar2 + 0x90);
  fStack_88 = 6.048486e-39;
  RakNet::AddressOrGUID::AddressOrGUID(&AStack_80,&local_40);
  fStack_88 = 4.2039e-45;
  uStack_8c = 1;
  (**(code **)(*piVar1 + 0x50))(&local_24,0xd);
  if (OISConfiguration::multiDebug != false) {
    uVar3 = (uint)DAT_0065e444;
    DAT_0065e444 = DAT_0065e444 + 1;
    RakNet::RakNetGUID::ToString(&param_1,&DAT_00662560 + (uVar3 & 7) * 0x40);
    debugPrint("NETWORK","Sent presentation command \'%d\' (param2 %f, %f) to client %s",param_2,
               (double)fStack_88,(double)param_3,&DAT_00662560 + (uVar3 & 7) * 0x40);
  }
  // [cookie] __security_check_cookie(uStack_58 ^ (uint)&uStack_8c);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetScenario(NetworkData *this,Packet_SetScenario *param_1)
void NetworkData::unpackSetScenario(Packet_SetScenario * param_1)

{
  Packet_SetScenario PVar1;
  Packet_SetScenario *pPVar2;
  Scenario *pSVar3;
  Packet_SetScenario *pPVar4;
  std::string local_30 [8];
  undefined4 uStack_28;
  
  pPVar4 = param_1 + 1;
  if (OISConfiguration::multiDebug) {
    uStack_28 = 0x41dd78;
    debugPrint("NETWORK","RECEIVED SET SCENARIO - \'%s\'");
  }
  pPVar2 = pPVar4;
  do {
    PVar1 = *pPVar2;
    pPVar2 = pPVar2 + 1;
  } while (PVar1 != (Packet_SetScenario)0x0);
  ghidra::str::assign
            ((std::string *)(g_gameData + 0xb4),(char *)pPVar4,(int)pPVar2 - (int)(param_1 + 2));
  local_30[0] = (std::string)0x0;
  pPVar2 = pPVar4;
  do {
    PVar1 = *pPVar2;
    pPVar2 = pPVar2 + 1;
  } while (PVar1 != (Packet_SetScenario)0x0);
  ghidra::str::assign(local_30,(char *)pPVar4,(int)pPVar2 - (int)(param_1 + 2));
  pSVar3 = GameData::getScenario();
  *(Scenario **)(g_gameData + 0xcc) = pSVar3;
  if (pSVar3 == (Scenario *)0x0) {
    uStack_28 = 0x41ddee;
    debugPrint("ERROR","ERROR: Unknown scenario \'%s\'");
  }
  return;
}


// Ghidra: void __thiscall NetworkData::sendChatLineFromServer(undefined4 param_1,void *param_2)
void NetworkData::sendChatLineFromServer(undefined4 param_1, void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffefc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  int *piVar2;
  NetworkServer *pNVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  undefined4 uStack_f8;
  std::string local_ec [8];
  undefined4 uStack_e4;
  RakNetGUID local_c8;
  undefined1 local_b4 [160];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2f60;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_b4[0] = 0xa3;
  if (in_stack_00000014 == 0) {
    local_ec[0] = (std::string)0x0;
    uStack_f8 = 0x41de6e;
    ghidra::str::assign(local_ec,"",0);
  }
  else {
    ghidra::str::ctor(local_ec,(std::string *)&param_2);
  }
  safeStrCpy();
  ghidra::str::ctor(local_ec,(std::string *)&stack0x0000001c);
  safeStrCpy();
  uVar6 = 0;
  pNVar3 = ghidra::any_singleton();
  if (*(int *)(pNVar3 + 0x40) - *(int *)(pNVar3 + 0x3c) >> 2 != 0) {
    do {
      pNVar3 = ghidra::any_singleton();
      puVar1 = *(undefined4 **)(*(int *)(pNVar3 + 0x3c) + uVar6 * 4);
      local_c8.g._0_4_ = *puVar1;
      local_c8.g._4_4_ = puVar1[1];
      local_c8._8_4_ = puVar1[2];
      local_c8._12_4_ = puVar1[3];
      ghidra::any_singleton();
      pNVar3 = ghidra::any_singleton();
      piVar2 = *(int **)(pNVar3 + 0x90);
      RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffefc,&local_c8);
      (**(code **)(*piVar2 + 0x50))(local_b4,0x9f,1,3,0);
      uVar6 = uVar6 + 1;
      pNVar3 = ghidra::any_singleton();
    } while (uVar6 < (uint)(*(int *)(pNVar3 + 0x40) - *(int *)(pNVar3 + 0x3c) >> 2));
  }
  if (OISConfiguration::multiDebug != false) {
    uStack_e4._0_2_ = 0xdf40;
    uStack_e4._2_2_ = 0x41;
    debugPrint("NETWORK","Sent message \'%s\' to all clients");
  }
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar5 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)in_stack_0000001c + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::sendMessageToClient(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_3)
void NetworkData::sendMessageToClient(undefined4 param_1_00, undefined4 * param_1, undefined4 * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffefc[1] = {0};  // [pseudo] address of an unnamed stack slot
  NetworkServer *pNVar1;
  undefined4 *puVar2;
  int *piVar3;
  nothrow_t *pnVar4;
  uint in_stack_0000001c;
  undefined4 uStack_f8;
  std::string local_ec [16];
  undefined4 local_dc;
  undefined4 local_d8;
  uint uStack_d4;
  RakNetGUID local_c8;
  undefined1 local_b4 [160];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2f98;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_d4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_b4[0] = 0xa3;
  local_dc = 0;
  local_d8 = 0xf;
  local_ec[0] = (std::string)0x0;
  uStack_f8 = 0x41e040;
  local_14 = uStack_d4;
  ghidra::str::assign(local_ec,"system",6);
  safeStrCpy();
  ghidra::str::ctor(local_ec,(std::string *)&param_3);
  safeStrCpy();
  local_c8.g._0_4_ = *param_1;
  local_c8.g._4_4_ = param_1[1];
  local_c8._8_4_ = param_1[2];
  local_c8._12_4_ = param_1[3];
  local_d8 = 0x41e07d;
  ghidra::any_singleton();
  local_d8 = 0x41e082;
  pNVar1 = ghidra::any_singleton();
  local_d8 = 0;
  local_dc = 0;
  piVar3 = *(int **)(pNVar1 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffefc,&local_c8);
  (**(code **)(*piVar3 + 0x50))(local_b4,0x9f,1,3,0);
  if (OISConfiguration::multiDebug != false) {
    piVar3 = param_1 + 10;
    if (0xf < (uint)param_1[0xf]) {
      piVar3 = (int *)*piVar3;
    }
    puVar2 = &param_3;
    if (0xf < in_stack_0000001c) {
      puVar2 = param_3;
    }
    debugPrint("NETWORK","Sent message \'%s\' to %s",puVar2,piVar3);
  }
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    puVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      puVar2 = (undefined4 *)param_3[-1];
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar2,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetScenarioState(NetworkData *this,Packet_SetScenarioState *param_1)
void NetworkData::unpackSetScenarioState(Packet_SetScenarioState * param_1)

{
  GameData *pGVar1;
  
  if (*(int *)(g_gameData + 0xcc) == 0) {
    debugPrint("ERROR","ERROR: Unknown scenario but a scenariostate is trying to be set");
  }
  if (OISConfiguration::multiDebug != false) {
    debugPrint("NETWORK","RECEIVED SET SCENARIO STATE");
  }
  pGVar1 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x388) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x394) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3a0) = *(undefined4 *)(param_1 + 0x19);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3ac) = *(undefined4 *)(param_1 + 0x25);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3b8) = *(undefined4 *)(param_1 + 0x31);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x38c) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x398) = *(undefined4 *)(param_1 + 0x11);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3a4) = *(undefined4 *)(param_1 + 0x1d);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3b0) = *(undefined4 *)(param_1 + 0x29);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3bc) = *(undefined4 *)(param_1 + 0x35);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x390) = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x39c) = *(undefined4 *)(param_1 + 0x15);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3a8) = *(undefined4 *)(param_1 + 0x21);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3b4) = *(undefined4 *)(param_1 + 0x2d);
  *(undefined4 *)(*(int *)(pGVar1 + 0xcc) + 0x3c0) = *(undefined4 *)(param_1 + 0x39);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetCargoComponents(NetworkData *this,Packet_CargoState *param_1)
void NetworkData::unpackSetCargoComponents(Packet_CargoState * param_1)

{
  int iVar1;
  GameData *pGVar2;
  GameData *pGVar3;
  ShipComponent *pSVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  Packet_CargoState *pPVar9;
  int local_18;
  
  uVar8 = 0;
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  puVar6 = *(undefined4 **)(iVar1 + 0x44);
  uVar7 = (*(int *)(iVar1 + 0x48) - (int)puVar6) + 3U >> 2;
  if (*(undefined4 **)(iVar1 + 0x48) < puVar6) {
    uVar7 = 0;
  }
  if (uVar7 != 0) {
    do {
      if ((void *)*puVar6 != (void *)0x0) {
        operator_delete((void *)*puVar6,(nothrow_t *)0x8);
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != uVar7);
  }
  *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x44);
  pPVar9 = param_1 + 1;
  local_18 = 0x14;
  do {
    if (*(int *)pPVar9 != -1) {
      pSVar4 = operator_new(8);
      pGVar2 = g_gameData;
      iVar1 = *(int *)pPVar9;
      uVar7 = 0;
      *(undefined4 *)pSVar4 = 0x42c80000;
      pGVar3 = g_gameData;
      uVar8 = *(int *)(pGVar2 + 4) - *(int *)pGVar2 >> 2;
      if (uVar8 != 0) {
        puVar6 = *(undefined4 **)pGVar2;
        do {
          if (*(int *)*puVar6 == iVar1) {
            uVar5 = (*(undefined4 **)pGVar2)[uVar7];
            goto LAB_0041e348;
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 < uVar8);
      }
      uVar5 = 0;
LAB_0041e348:
      *(undefined4 *)(pSVar4 + 4) = uVar5;
      *(int *)pSVar4 = *(int *)(pPVar9 + 0x50);
      (*(CargoHold **)(*(int *)(pGVar3 + 0xd0) + 0x1f8))->addComponent(pSVar4);
    }
    pPVar9 = pPVar9 + 4;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      if (OISConfiguration::multiDebug != false) {
        debugPrint("NETWORK","Updated ship component states: %d components in hold",
                   *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) -
                   *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) >> 2);
      }
      return;
    }
  } while( true );
}


// Ghidra: void __thiscall NetworkData::unpackSetModuleBasicSettings(NetworkData *this,Packet_SetModuleBasicSettings *param_1)
void NetworkData::unpackSetModuleBasicSettings(Packet_SetModuleBasicSettings * param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (OISConfiguration::multiDebug) {
    debugPrint("NETWORK","RECEIVED SET MODULEBASICDATA REQUEST");
  }
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
  uVar3 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar1 >> 2;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 5)) {
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_1 + 9);
          *(Packet_SetModuleBasicSettings *)(iVar2 + 0x62) = param_1[0xd];
          *(Packet_SetModuleBasicSettings *)(iVar2 + 0x60) = param_1[0xe];
          *(Packet_SetModuleBasicSettings *)(iVar2 + 0x61) = param_1[0xf];
          *(Packet_SetModuleBasicSettings *)(iVar2 + 99) = param_1[0x10];
          *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x11);
          *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(param_1 + 0x15);
          *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(param_1 + 0x19);
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  debugPrint("ERROR","Module Type %d / slot %d doesn\'t exist in the player\'s ship.",
             *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5));
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetModuleDetails(NetworkData *this,Packet_SetModuleDetails *param_1)
void NetworkData::unpackSetModuleDetails(Packet_SetModuleDetails * param_1)

{
  AnimationFrames **ppAVar1;
  void *pvVar2;
  void *pvVar3;
  AnimationFrames **ppAVar4;
  GameData *pGVar5;
  Ship *pSVar6;
  undefined4 *puVar7;
  int iVar8;
  GameData *this_00;
  AnimationFrames *pAVar9;
  size_t sVar10;
  AnimationFrames *local_18;
  void *local_14;
  int local_10;
  
  if (OISConfiguration::multiDebug) {
    debugPrint("NETWORK","RECEIVED SET MODULEDETAILS REQUEST");
  }
  this_00 = (GameData *)0x0;
  iVar8 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
  pGVar5 = (GameData *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar8 >> 2);
  if (pGVar5 != (GameData *)0x0) {
    do {
      pAVar9 = *(AnimationFrames **)(iVar8 + (int)this_00 * 4);
      if (*(int *)(pAVar9 + 0x10) == *(int *)(param_1 + 5)) goto LAB_0041e4ef;
      this_00 = this_00 + 1;
    } while (this_00 < pGVar5);
  }
  pAVar9 = (AnimationFrames *)0x0;
LAB_0041e4ef:
  local_18 = pAVar9;
  if (pAVar9 == (AnimationFrames *)0x0) {
    debugPrint("ERROR","Module Type %d / slot %d doesn\'t exist in the player\'s ship.",
               *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5));
    return;
  }
  *(undefined4 *)(pAVar9 + 0x24) = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(pAVar9 + 0x28) = *(undefined4 *)(param_1 + 0xd);
  pAVar9[0x2c] = *(AnimationFrames *)(param_1 + 0x16);
  *(undefined4 *)(pAVar9 + 0x30) = *(undefined4 *)(param_1 + 0x17);
  *(undefined4 *)(pAVar9 + 0x68) = *(undefined4 *)(param_1 + 0x1b);
  pAVar9[0x1c] = *(AnimationFrames *)(param_1 + 0x23);
  pAVar9[0x1d] = *(AnimationFrames *)(param_1 + 0x24);
  pAVar9[0x14] = *(AnimationFrames *)(param_1 + 0x15);
  pAVar9[0x1e] = *(AnimationFrames *)(param_1 + 0x25);
  pAVar9[0x1f] = *(AnimationFrames *)(param_1 + 0x26);
  pAVar9[0x20] = *(AnimationFrames *)(param_1 + 0x27);
  pAVar9[0x21] = *(AnimationFrames *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x1f) == -1) {
    *(undefined4 *)(pAVar9 + 0x18) = 0;
  }
  else {
    pSVar6 = (this_00)->getShipWithID(*(int *)(param_1 + 0x1f));
    *(Ship **)(pAVar9 + 0x18) = pSVar6;
  }
  if (*(int *)(param_1 + 0x11) != *(int *)(pAVar9 + 0x38)) {
    *(int *)(pAVar9 + 0x38) = *(int *)(param_1 + 0x11);
    pvVar2 = *(void **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
    local_14 = pvVar2;
    puVar7 = (undefined4 *)
             ghidra::lib::remove___x28_x29(*(undefined4 *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c),
                           pvVar2);
    pvVar3 = (void *)*puVar7;
    iVar8 = *(int *)(g_gameData + 0xd0);
    local_10 = *(int *)(iVar8 + 0x40);
    if (pvVar3 != pvVar2) {
      sVar10 = *(int *)(local_10 + 0x40) - (int)local_14;
      memmove(pvVar3,local_14,sVar10);
      *(size_t *)(local_10 + 0x40) = sVar10 + (int)pvVar3;
      iVar8 = *(int *)(g_gameData + 0xd0);
    }
    iVar8 = *(int *)(iVar8 + 0x40);
    ppAVar1 = (AnimationFrames **)(*(int *)(iVar8 + 0x3c) + *(int *)(pAVar9 + 0x38) * 4);
    ppAVar4 = *(AnimationFrames ***)(iVar8 + 0x40);
    if (*(AnimationFrames ***)(iVar8 + 0x44) != ppAVar4) {
      if (ppAVar1 == ppAVar4) {
        *ppAVar4 = pAVar9;
        *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 4;
        return;
      }
      *ppAVar4 = ppAVar4[-1];
      *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 4;
      sVar10 = (int)ppAVar4 + (-4 - (int)ppAVar1);
      memmove((void *)((int)ppAVar4 - sVar10),ppAVar1,sVar10);
      *ppAVar1 = pAVar9;
      return;
    }
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar8 + 0x3c),ppAVar1,&local_18);
  }
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetComponent(NetworkData *this,Packet_SetComponent *param_1)
void NetworkData::unpackSetComponent(Packet_SetComponent * param_1)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  float fVar4;
  GameData *pGVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  char *pcVar16;
  
  uVar9 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
  uVar13 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - (int)piVar1 >> 2;
  if (uVar13 != 0) {
    piVar12 = piVar1;
    do {
      if (*(int *)(*piVar12 + 0x10) == *(int *)(param_1 + 5)) {
        iVar14 = piVar1[uVar9];
        goto LAB_0041e6ba;
      }
      uVar9 = uVar9 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar9 < uVar13);
  }
  iVar14 = 0;
LAB_0041e6ba:
  if (OISConfiguration::multiDebug) {
    puVar6 = (undefined4 *)(*(int *)(iVar14 + 8) + 8);
    if (0xf < *(uint *)(*(int *)(iVar14 + 8) + 0x1c)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    debugPrint("NETWORK","Unpacking component for module %s",puVar6);
  }
  bVar15 = OISConfiguration::multiDebug;
  iVar7 = *(int *)(param_1 + 9);
  iVar11 = *(int *)(iVar14 + 0xc);
  pfVar2 = *(float **)(iVar11 + 4 + iVar7 * 4);
  if (*(int *)(param_1 + 0xd) == -1) {
    if (pfVar2 != (float *)0x0) {
      if (OISConfiguration::multiDebug != false) {
        puVar6 = (undefined4 *)(*(int *)(iVar14 + 8) + 8);
        if (0xf < *(uint *)(*(int *)(iVar14 + 8) + 0x1c)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        puVar10 = (undefined4 *)((int)pfVar2[1] + 0x38);
        if (0xf < *(uint *)((int)pfVar2[1] + 0x4c)) {
          puVar10 = (undefined4 *)*puVar10;
        }
        debugPrint("NETWORK","Removing component (%s, %.0f%% damage) from module %s",puVar10,
                   SUB84((double)*pfVar2,0),(int)((ulonglong)(double)*pfVar2 >> 0x20),puVar6);
        iVar7 = *(int *)(param_1 + 9);
        iVar11 = *(int *)(iVar14 + 0xc);
      }
      pvVar3 = *(void **)(iVar11 + 4 + iVar7 * 4);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3,(nothrow_t *)0x8);
        iVar7 = *(int *)(param_1 + 9);
        iVar11 = *(int *)(iVar14 + 0xc);
      }
      *(undefined4 *)(iVar11 + 4 + iVar7 * 4) = 0;
      return;
    }
  }
  else {
    if (pfVar2 == (float *)0x0) {
      puVar6 = operator_new(8);
      pGVar5 = g_gameData;
      iVar7 = *(int *)(param_1 + 0xd);
      *puVar6 = 0x42c80000;
      uVar9 = 0;
      uVar13 = *(int *)(pGVar5 + 4) - *(int *)pGVar5 >> 2;
      if (uVar13 != 0) {
        puVar10 = *(undefined4 **)pGVar5;
        do {
          if (*(int *)*puVar10 == iVar7) {
            uVar8 = (*(undefined4 **)pGVar5)[uVar9];
            goto LAB_0041e827;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 < uVar13);
      }
      uVar8 = 0;
LAB_0041e827:
      bVar15 = OISConfiguration::multiDebug == false;
      puVar6[1] = uVar8;
      *(undefined4 **)(*(int *)(iVar14 + 0xc) + 4 + *(int *)(param_1 + 9) * 4) = puVar6;
      **(float **)(*(int *)(iVar14 + 0xc) + 4 + *(int *)(param_1 + 9) * 4) =
           (float)*(int *)(param_1 + 0x11);
      if (bVar15) {
        return;
      }
      iVar7 = *(int *)(param_1 + 9);
      pfVar2 = *(float **)(*(int *)(iVar14 + 0xc) + 4 + iVar7 * 4);
      fVar4 = pfVar2[1];
      puVar6 = (undefined4 *)((int)fVar4 + 0x38);
      if (0xf < *(uint *)((int)fVar4 + 0x4c)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      fVar4 = *pfVar2;
      pcVar16 = "Added component (%s, slot %d) with damage %.0f%%";
    }
    else {
      *pfVar2 = (float)*(int *)(param_1 + 0x11);
      if (bVar15 == false) {
        return;
      }
      iVar7 = *(int *)(param_1 + 9);
      pfVar2 = *(float **)(*(int *)(iVar14 + 0xc) + 4 + iVar7 * 4);
      fVar4 = pfVar2[1];
      puVar6 = (undefined4 *)((int)fVar4 + 0x38);
      if (0xf < *(uint *)((int)fVar4 + 0x4c)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      fVar4 = *pfVar2;
      pcVar16 = "Set damage of component (%s, slot %d) to %.0f%%";
    }
    debugPrint("NETWORK",pcVar16,puVar6,iVar7,SUB84((double)fVar4,0),
               (int)((ulonglong)(double)fVar4 >> 0x20));
  }
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetAddon(NetworkData *this,Packet_SetAddon *param_1)
void NetworkData::unpackSetAddon(Packet_SetAddon * param_1)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  float fVar4;
  GameData *pGVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  char *pcVar16;
  
  uVar9 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
  uVar13 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - (int)piVar1 >> 2;
  if (uVar13 != 0) {
    piVar12 = piVar1;
    do {
      if (*(int *)(*piVar12 + 0x10) == *(int *)(param_1 + 5)) {
        iVar14 = piVar1[uVar9];
        goto LAB_0041e8fa;
      }
      uVar9 = uVar9 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar9 < uVar13);
  }
  iVar14 = 0;
LAB_0041e8fa:
  if (OISConfiguration::multiDebug) {
    puVar6 = (undefined4 *)(*(int *)(iVar14 + 8) + 8);
    if (0xf < *(uint *)(*(int *)(iVar14 + 8) + 0x1c)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    debugPrint("NETWORK","Unpacking addon for module %s",puVar6);
  }
  bVar15 = OISConfiguration::multiDebug;
  iVar7 = *(int *)(param_1 + 9);
  iVar11 = *(int *)(iVar14 + 0xc);
  pfVar2 = *(float **)(iVar11 + 0x54 + iVar7 * 4);
  if (*(int *)(param_1 + 0xd) == -1) {
    if (pfVar2 != (float *)0x0) {
      if (OISConfiguration::multiDebug != false) {
        puVar6 = (undefined4 *)(*(int *)(iVar14 + 8) + 8);
        if (0xf < *(uint *)(*(int *)(iVar14 + 8) + 0x1c)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        puVar10 = (undefined4 *)((int)pfVar2[1] + 0x38);
        if (0xf < *(uint *)((int)pfVar2[1] + 0x4c)) {
          puVar10 = (undefined4 *)*puVar10;
        }
        debugPrint("NETWORK","Removing component (%s, %.0f%% damage) from module %s",puVar10,
                   SUB84((double)*pfVar2,0),(int)((ulonglong)(double)*pfVar2 >> 0x20),puVar6);
        iVar7 = *(int *)(param_1 + 9);
        iVar11 = *(int *)(iVar14 + 0xc);
      }
      pvVar3 = *(void **)(iVar11 + 0x54 + iVar7 * 4);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3,(nothrow_t *)0x8);
        iVar7 = *(int *)(param_1 + 9);
        iVar11 = *(int *)(iVar14 + 0xc);
      }
      *(undefined4 *)(iVar11 + 0x54 + iVar7 * 4) = 0;
      return;
    }
  }
  else {
    if (pfVar2 == (float *)0x0) {
      puVar6 = operator_new(8);
      pGVar5 = g_gameData;
      iVar7 = *(int *)(param_1 + 0xd);
      *puVar6 = 0x42c80000;
      uVar9 = 0;
      uVar13 = *(int *)(pGVar5 + 4) - *(int *)pGVar5 >> 2;
      if (uVar13 != 0) {
        puVar10 = *(undefined4 **)pGVar5;
        do {
          if (*(int *)*puVar10 == iVar7) {
            uVar8 = (*(undefined4 **)pGVar5)[uVar9];
            goto LAB_0041ea67;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 < uVar13);
      }
      uVar8 = 0;
LAB_0041ea67:
      bVar15 = OISConfiguration::multiDebug == false;
      puVar6[1] = uVar8;
      *(undefined4 **)(*(int *)(iVar14 + 0xc) + 0x54 + *(int *)(param_1 + 9) * 4) = puVar6;
      **(float **)(*(int *)(iVar14 + 0xc) + 0x54 + *(int *)(param_1 + 9) * 4) =
           (float)*(int *)(param_1 + 0x11);
      if (bVar15) {
        return;
      }
      iVar7 = *(int *)(param_1 + 9);
      pfVar2 = *(float **)(*(int *)(iVar14 + 0xc) + 0x54 + iVar7 * 4);
      fVar4 = pfVar2[1];
      puVar6 = (undefined4 *)((int)fVar4 + 0x38);
      if (0xf < *(uint *)((int)fVar4 + 0x4c)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      fVar4 = *pfVar2;
      pcVar16 = "Added component (%s, slot %d) with damage %.0f%%";
    }
    else {
      *pfVar2 = (float)*(int *)(param_1 + 0x11);
      if (bVar15 == false) {
        return;
      }
      iVar7 = *(int *)(param_1 + 9);
      pfVar2 = *(float **)(*(int *)(iVar14 + 0xc) + 0x54 + iVar7 * 4);
      fVar4 = pfVar2[1];
      puVar6 = (undefined4 *)((int)fVar4 + 0x38);
      if (0xf < *(uint *)((int)fVar4 + 0x4c)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      fVar4 = *pfVar2;
      pcVar16 = "Set damage of component (%s, slot %d) to %.0f%%";
    }
    debugPrint("NETWORK",pcVar16,puVar6,iVar7,SUB84((double)fVar4,0),
               (int)((ulonglong)(double)fVar4 >> 0x20));
  }
  return;
}


// Ghidra: void __thiscall NetworkData::unpackUpdateSensorDataAdvanced (NetworkData *this,Packet_UpdateSensorDataAdvanced *param_1)
void NetworkData::unpackUpdateSensorDataAdvanced(Packet_UpdateSensorDataAdvanced * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Packet_UpdateSensorDataAdvanced PVar1;
  int iVar2;
  AnimationFrames **ppAVar3;
  Packet_UpdateSensorDataAdvanced *pPVar4;
  float fVar5;
  uint uVar6;
  Packet_UpdateSensorDataAdvanced *pPVar7;
  undefined4 *puVar8;
  std::string *this_00;
  uint uVar9;
  Packet_UpdateSensorDataAdvanced *pPVar10;
  bool bVar11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pPVar4 = param_1;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b2fd2;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar5 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pPVar10 = param_1 + 1;
  param_1 = *(Packet_UpdateSensorDataAdvanced **)(g_gameData + 0xd0);
  if (*(int *)pPVar10 != -1) {
    uVar6 = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x214);
    uVar9 = *(int *)(param_1 + 0x218) - (int)puVar8 >> 2;
    if (uVar9 != 0) {
      do {
        if (*(int *)*puVar8 == *(int *)pPVar10) {
          pPVar10 = *(Packet_UpdateSensorDataAdvanced **)(*(int *)(param_1 + 0x214) + uVar6 * 4);
          goto LAB_0041eb57;
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar6 < uVar9);
    }
    pPVar10 = (Packet_UpdateSensorDataAdvanced *)0x0;
LAB_0041eb57:
    if (pPVar10 != (Packet_UpdateSensorDataAdvanced *)0x0) goto LAB_0041ebed;
  }
  param_1 = operator_new(0x138);
  // [seh] local_8 = 0;
  param_1 = (Packet_UpdateSensorDataAdvanced *)
            SensorData::SensorData
                      ((SensorData *)param_1,*(int *)(pPVar4 + 5),*(int *)(pPVar4 + 1),fVar5);
  // [seh] local_8 = 0xffffffff;
  iVar2 = *(int *)(g_gameData + 0xd0);
  ppAVar3 = *(AnimationFrames ***)(iVar2 + 0x218);
  if (*(AnimationFrames ***)(iVar2 + 0x21c) == ppAVar3) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(iVar2 + 0x214),ppAVar3,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar3 = (AnimationFrames *)param_1;
    *(int *)(iVar2 + 0x218) = *(int *)(iVar2 + 0x218) + 4;
  }
  pPVar10 = param_1;
  if (OISConfiguration::multiDebug != false) {
    debugPrint("NETWORK","Making new sensordata object: %d",*(undefined4 *)(pPVar4 + 1));
  }
LAB_0041ebed:
  *(undefined4 *)(pPVar10 + 0xd8) = *(undefined4 *)(pPVar4 + 0x94);
  pPVar7 = pPVar4 + 9;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Packet_UpdateSensorDataAdvanced)0x0);
  this_00 = (std::string *)(pPVar10 + 0x48);
  ghidra::str::assign(this_00,(char *)(pPVar4 + 9),(int)pPVar7 - (int)(pPVar4 + 10));
  param_1 = pPVar4 + 0x3c;
  pPVar7 = pPVar4 + 0x3b;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Packet_UpdateSensorDataAdvanced)0x0);
  ghidra::str::assign
            ((std::string *)(pPVar10 + 0x60),(char *)(pPVar4 + 0x3b),(int)pPVar7 - (int)param_1);
  param_1 = pPVar4 + 0x5c;
  pPVar7 = pPVar4 + 0x5b;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Packet_UpdateSensorDataAdvanced)0x0);
  ghidra::str::assign
            ((std::string *)(pPVar10 + 0x90),(char *)(pPVar4 + 0x5b),(int)pPVar7 - (int)param_1);
  *(undefined4 *)(pPVar10 + 0xe4) = *(undefined4 *)(pPVar4 + 0x69);
  *(undefined4 *)(pPVar10 + 0xe8) = *(undefined4 *)(pPVar4 + 0x6d);
  *(undefined4 *)(pPVar10 + 0xe0) = *(undefined4 *)(pPVar4 + 0x65);
  *(undefined4 *)(pPVar10 + 300) = *(undefined4 *)(pPVar4 + 0x98);
  pPVar10[0x10c] = pPVar4[0x81];
  pPVar10[0x10f] = pPVar4[0x82];
  pPVar10[0x10e] = pPVar4[0x84];
  pPVar10[0x10d] = pPVar4[0x83];
  *(undefined4 *)(pPVar10 + 0x11c) = *(undefined4 *)(pPVar4 + 0x8c);
  pPVar10[9] = (Packet_UpdateSensorDataAdvanced)0x1;
  *(undefined4 *)(pPVar10 + 0xdc) = *(undefined4 *)(pPVar4 + 0x90);
  param_1 = pPVar4 + 0x3c;
  pPVar7 = pPVar4 + 0x3b;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Packet_UpdateSensorDataAdvanced)0x0);
  ghidra::str::assign
            ((std::string *)(pPVar10 + 0x60),(char *)(pPVar4 + 0x3b),(int)pPVar7 - (int)param_1);
  bVar11 = OISConfiguration::multiDebug != false;
  pPVar10[0x45] = pPVar4[0x8b];
  *(undefined8 *)(pPVar10 + 0x28) = *(undefined8 *)(pPVar4 + 0x79);
  *(undefined8 *)(pPVar10 + 0x20) = *(undefined8 *)(pPVar4 + 0x71);
  if (bVar11) {
    if (0xf < *(uint *)(pPVar10 + 0x5c)) {
      this_00 = *(std::string **)this_00;
    }
    debugPrint("NETWORK","Unpacked Advanced: %d/ %s",*(undefined4 *)(pPVar4 + 1),this_00);
    if (OISConfiguration::multiDebug != false) {
      debugPrint("NETWORK","ship type = %d",*(undefined4 *)(pPVar10 + 0xd8));
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall NetworkData::unpackUpdateSensorWaveform(NetworkData *this,Packet_UpdateSensorWaveform *param_1)
void NetworkData::unpackUpdateSensorWaveform(Packet_UpdateSensorWaveform * param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  HullDamageChance *pHVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  Packet_UpdateSensorWaveform *pPVar8;
  char *pcVar9;
  float local_10;
  float local_c;
  
  iVar7 = *(int *)(param_1 + 1);
  if (iVar7 != -1) {
    uVar6 = 0;
    iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x214);
    uVar5 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x218) - iVar1 >> 2;
    if (uVar5 != 0) {
      do {
        piVar2 = *(int **)(iVar1 + uVar6 * 4);
        if (*piVar2 == iVar7) {
          if (piVar2 != (int *)0x0) {
            iVar7 = 0;
            piVar2[0x3c] = piVar2[0x3b];
            pPVar8 = param_1 + 9;
            goto LAB_0041ee00;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  if (!OISConfiguration::multiDebug) {
    return;
  }
  pcVar9 = "No sensordata for sensorID: %d";
  goto LAB_0041edcf;
  while( true ) {
    local_c = *(float *)pPVar8;
    pHVar4 = (HullDamageChance *)piVar2[0x3c];
    local_10 = fVar3;
    if ((HullDamageChance *)piVar2[0x3d] == pHVar4) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(piVar2 + 0x3b),pHVar4,(HullDamageChance *)&local_10);
    }
    else {
      *(float *)pHVar4 = fVar3;
      *(float *)(pHVar4 + 4) = local_c;
      piVar2[0x3c] = piVar2[0x3c] + 8;
    }
    iVar7 = iVar7 + 1;
    pPVar8 = pPVar8 + 4;
    if (0x13 < iVar7) break;
LAB_0041ee00:
    fVar3 = *(float *)(pPVar8 + 0x50);
    if ((fVar3 == 0.0) && (*(float *)pPVar8 == 0.0)) break;
  }
  iVar7 = 0;
  pPVar8 = param_1 + 0xa9;
  piVar2[0x3f] = piVar2[0x3e];
  do {
    fVar3 = *(float *)(pPVar8 + 0x50);
    if ((fVar3 == 0.0) && (*(float *)pPVar8 == 0.0)) break;
    local_c = *(float *)pPVar8;
    pHVar4 = (HullDamageChance *)piVar2[0x3f];
    local_10 = fVar3;
    if ((HullDamageChance *)piVar2[0x40] == pHVar4) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(piVar2 + 0x3e),pHVar4,(HullDamageChance *)&local_10);
    }
    else {
      *(float *)pHVar4 = fVar3;
      *(float *)(pHVar4 + 4) = local_c;
      piVar2[0x3f] = piVar2[0x3f] + 8;
    }
    iVar7 = iVar7 + 1;
    pPVar8 = pPVar8 + 4;
  } while (iVar7 < 0x14);
  if (OISConfiguration::multiDebug == false) {
    return;
  }
  iVar7 = *(int *)(param_1 + 1);
  pcVar9 = "Unpacked Waveform for sensorID %d";
LAB_0041edcf:
  debugPrint("NETWORK",pcVar9,iVar7);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackDataRequest(NetworkData *this,RakNetGUID param_1,Packet_DataRequest *param_2)
void NetworkData::unpackDataRequest(RakNetGUID param_1, Packet_DataRequest * param_2)

{
  RakNetGUID *this_00;
  NetworkServer *pNVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (OISConfiguration::multiDebug) {
    debugPrint("NETWORK","RECEIVED DATA REQUEST: %s",
               (&PTR_s_Ship_Data_005d0594)[*(int *)(param_2 + 1)]);
  }
  uVar3 = 0;
  pNVar1 = ghidra::any_singleton();
  uVar2 = *(int *)(pNVar1 + 0x40) - *(int *)(pNVar1 + 0x3c) >> 2;
  if (uVar2 != 0) {
    do {
      this_00 = *(RakNetGUID **)(*(int *)(pNVar1 + 0x3c) + uVar3 * 4);
      if (((int)this_00->g == (int)param_1.g) && (*(int *)((int)&this_00->g + 4) == param_1.g._4_4_)
         ) {
        if (this_00 != (RakNetGUID *)0x0) {
          if (*(int *)(param_2 + 1) == 0) {
            bVar4 = OISConfiguration::multiDebug == false;
            *(undefined1 *)&this_00[6].g = 1;
            if (bVar4) {
              return;
            }
            uVar2 = (uint)DAT_0065e444;
            DAT_0065e444 = DAT_0065e444 + 1;
            RakNet::RakNetGUID::ToString(this_00,&DAT_00662560 + (uVar2 & 7) * 0x40);
            debugPrint("NETWORK","Enabling ship data from client %s",
                       &DAT_00662560 + (uVar2 & 7) * 0x40);
            return;
          }
          if (*(int *)(param_2 + 1) != 1) {
            return;
          }
          *(undefined1 *)((int)&this_00[6].g + 1) = 1;
          if (OISConfiguration::multiDebug == false) {
            return;
          }
          uVar2 = (uint)DAT_0065e444;
          DAT_0065e444 = DAT_0065e444 + 1;
          RakNet::RakNetGUID::ToString(this_00,&DAT_00662560 + (uVar2 & 7) * 0x40);
          debugPrint("NETWORK","Enabling ship sensor data from client %s",
                     &DAT_00662560 + (uVar2 & 7) * 0x40);
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  debugPrint("ERROR","packet came from unknown client.");
  return;
}


// Ghidra: void __thiscall NetworkData::unpackServerAdmin(NetworkData *this,RakNetGUID param_1,Packet_ServerAdmin *param_2)
void NetworkData::unpackServerAdmin(RakNetGUID param_1, Packet_ServerAdmin * param_2)

{
  int *piVar1;
  NetworkServer *pNVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  pNVar2 = ghidra::any_singleton();
  uVar3 = *(int *)(pNVar2 + 0x40) - *(int *)(pNVar2 + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(pNVar2 + 0x3c) + uVar4 * 4);
      if ((*piVar1 == (int)param_1.g) && (piVar1[1] == param_1.g._4_4_)) {
        if (piVar1 != (int *)0x0) {
          if (*(int *)(param_2 + 1) != 0) {
            return;
          }
          debugPrint("MULTI","Received server admin request: SERVER_ADMIN_SET_DIFFICULTY");
          uVar3 = *(uint *)(param_2 + 5);
          if (uVar3 < 4) {
            OISConfiguration::difficulty = uVar3;
            OISConfiguration::save();
            *(undefined4 *)(g_gameLogic + 0xa0) = *(undefined4 *)(param_2 + 5);
            return;
          }
          debugPrint("MULTI","Illegal difficulty: %d",uVar3);
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  debugPrint("ERROR","packet came from unknown client.");
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetGoLiveState (NetworkData *this,RakNetGUID param_1,Packet_SetGoLiveState *param_2)
void NetworkData::unpackSetGoLiveState(RakNetGUID param_1, Packet_SetGoLiveState * param_2)

{
  int *piVar1;
  NetworkServer *pNVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  std::string local_64 [8];
  undefined4 uStack_5c;
  std::string local_4c [8];
  undefined4 uStack_44;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3010;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pNVar2 = ghidra::any_singleton();
  uVar4 = 0;
  piVar5 = *(int **)(pNVar2 + 0x3c);
  uVar3 = *(int *)(pNVar2 + 0x40) - (int)piVar5 >> 2;
  if (uVar3 != 0) {
    do {
      piVar6 = (int *)*piVar5;
      if ((*piVar6 == (int)param_1.g) && (piVar6[1] == param_1.g._4_4_)) goto LAB_0041f170;
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < uVar3);
  }
  piVar6 = (int *)0x0;
LAB_0041f170:
  if (OISConfiguration::multiDebug != false) {
    uStack_44 = 0x41f194;
    debugPrint("NETWORK","RECEIVED SET READY STATE REQUEST: %s");
  }
  *(Packet_SetGoLiveState *)((int)piVar6 + 0x41) = param_2[1];
  pNVar2 = ghidra::any_singleton();
  piVar1 = *(int **)(pNVar2 + 0x40);
  for (piVar5 = *(int **)(pNVar2 + 0x3c); piVar5 != piVar1; piVar5 = piVar5 + 1) {
    if ((*(int *)*piVar5 == (int)param_1.g) && (((int *)*piVar5)[1] == param_1.g._4_4_)) {
      local_4c[0] = (std::string)0x0;
      if (*(char *)((int)piVar6 + 0x41) == '\0') {
        ghidra::str::assign(local_4c,"You are no longer ready to launch.",0x22);
        // [seh] local_8 = 1;
      }
      else {
        ghidra::str::assign(local_4c,"You are ready to launch.",0x18);
        // [seh] local_8 = 0;
      }
    }
    else if (*(char *)((int)piVar6 + 0x41) == '\0') {
      uStack_5c = 0x41f263;
      strUsingArgs((char *)local_4c);
      // [seh] local_8 = 3;
    }
    else {
      uStack_5c = 0x41f23e;
      strUsingArgs((char *)local_4c);
      // [seh] local_8 = 2;
    }
    local_64[0] = (std::string)0x0;
    ghidra::str::assign(local_64,"system",6);
    // [seh] local_8 = 0xffffffff;
    sendChatLineFromServer();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetClientInfo(NetworkData *this,RakNetGUID param_1,Packet_SetClientInfo *param_2)
void NetworkData::unpackSetClientInfo(RakNetGUID param_1, Packet_SetClientInfo * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff5c[1] = {0};  // [pseudo] address of an unnamed stack slot
  Packet_SetClientInfo PVar1;
  int *piVar2;
  RakNetGUID *this_00;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  NetworkServer *pNVar8;
  void **ppvVar9;
  Ship *pSVar10;
  int iVar11;
  uint uVar12;
  Packet_SetClientInfo *pPVar13;
  void *pvVar14;
  undefined4 uVar15;
  char *pcVar16;
  int *piVar17;
  nothrow_t *pnVar18;
  uint uVar19;
  uint unaff_EDI;
  ushort *this_01;
  undefined4 uStack_8c;
  int local_3c;
  bool local_2d;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3079;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar7;
  if (OISConfiguration::multiDebug) {
    debugPrint("NETWORK","RECEIVED SHIP CLIENT REQUEST: %s");
  }
  pNVar8 = ghidra::any_singleton();
  uVar12 = 0;
  piVar2 = *(int **)(pNVar8 + 0x3c);
  uVar19 = *(int *)(pNVar8 + 0x40) - (int)piVar2 >> 2;
  piVar17 = piVar2;
  if (uVar19 == 0) {
LAB_0041f35a:
    debugPrint("ERROR","packet came from unknown client.");
  }
  else {
    while( true ) {
      if ((*(int *)*piVar17 == (int)param_1.g) && (((int *)*piVar17)[1] == param_1.g._4_4_)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      uVar12 = uVar12 + 1;
      piVar17 = piVar17 + 1;
      if (uVar19 <= uVar12) goto LAB_0041f35a;
    }
    this_00 = (RakNetGUID *)piVar2[uVar12];
    if (this_00 == (RakNetGUID *)0x0) goto LAB_0041f35a;
    bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar7,unaff_EDI);
    this_01 = &this_00[4].systemIndex;
    local_2d = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar7,unaff_EDI);
    pPVar13 = param_2 + 1;
    do {
      PVar1 = *pPVar13;
      pPVar13 = pPVar13 + 1;
    } while (PVar1 != (Packet_SetClientInfo)0x0);
    ghidra::str::assign
              ((std::string *)&this_00[2].systemIndex,(char *)(param_2 + 1),
               (int)pPVar13 - (int)(param_2 + 2));
    pPVar13 = param_2 + 0xd;
    do {
      PVar1 = *pPVar13;
      pPVar13 = pPVar13 + 1;
    } while (PVar1 != (Packet_SetClientInfo)0x0);
    ghidra::str::assign
              ((std::string *)this_01,(char *)(param_2 + 0xd),(int)pPVar13 - (int)(param_2 + 0xe)
              );
    bVar6 = ghidra::lib::_Traits_equal___x28_x29("auto",4,pcVar7,unaff_EDI);
    if (bVar6) {
      pNVar8 = ghidra::any_singleton();
      // [seh] local_8 = 0;
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      piVar2 = *(int **)(*(int *)(g_gameData + 0xcc) + 0x7c);
      piVar17 = *(int **)(*(int *)(g_gameData + 0xcc) + 0x78);
      uVar12 = 0xf;
      if (piVar17 != piVar2) {
        do {
          iVar3 = *piVar17;
          if (*(int *)(iVar3 + 0xe8) == 0) {
            ghidra::str::ctor
                      ((std::string *)&uStack_8c,(std::string *)(iVar3 + 0x1c));
            bVar6 = (pNVar8)->shipHasConnectedClient();
            if (bVar6) goto LAB_0041f4b8;
            ppvVar9 = (void **)(iVar3 + 0x1c);
            if (&local_2c != ppvVar9) {
              if (0xf < *(uint *)(iVar3 + 0x30)) {
                ppvVar9 = *ppvVar9;
              }
              ghidra::str::assign
                        ((std::string *)&local_2c,(char *)ppvVar9,*(uint *)(iVar3 + 0x2c));
              uVar12 = uStack_18;
              goto LAB_0041f4c5;
            }
            break;
          }
LAB_0041f4b8:
          piVar17 = piVar17 + 1;
        } while (piVar17 != piVar2);
        uVar12 = 0xf;
      }
LAB_0041f4c5:
      if ((void **)this_01 != &local_2c) {
        // [mislabelled-dtor] word::~word((word *)this_01);
        pvVar14 = local_2c;
        uVar12 = 0xf;
        local_2c = (void *)((uint)local_2c & 0xffffff00);
        *(void **)this_01 = pvVar14;
        *(undefined4 *)&this_00[4].field_0xc = uStack_28;
        *(undefined4 *)&this_00[5].g = uStack_24;
        *(undefined4 *)((int)&this_00[5].g + 4) = uStack_20;
        *(ulonglong *)&this_00[5].systemIndex = CONCAT44(uStack_18,local_1c);
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < uVar12) {
        pnVar18 = (nothrow_t *)(uVar12 + 1);
        pvVar14 = local_2c;
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar14 = *(void **)((int)local_2c + -4);
          pnVar18 = (nothrow_t *)(uVar12 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar14,pnVar18);
      }
      local_2d = true;
    }
    ghidra::str::ctor((std::string *)&uStack_8c,(std::string *)this_01);
    pSVar10 = GameData::getShipWithRego();
    *(Ship **)((int)&this_00[6].g + 4) = pSVar10;
    if (pSVar10 == (Ship *)0x0) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = *(undefined4 *)(pSVar10 + 0x250);
    }
    *(undefined4 *)((int)&this_00[4].g + 4) = uVar15;
    if (pSVar10 == (Ship *)0x0) {
      uVar12 = (uint)DAT_0065e444;
      DAT_0065e444 = DAT_0065e444 + 1;
      RakNet::RakNetGUID::ToString(this_00,&DAT_00662560 + (uVar12 & 7) * 0x40);
      debugPrint("MULTI","Setting client %s to username \'%s\'");
    }
    else {
      uVar12 = (uint)DAT_0065e444;
      DAT_0065e444 = DAT_0065e444 + 1;
      RakNet::RakNetGUID::ToString(this_00,&DAT_00662560 + (uVar12 & 7) * 0x40);
      uStack_8c = 0x41f5bb;
      debugPrint("MULTI","Setting client %s to username \'%s\', ship %s");
    }
    if ((local_2d != false) && (bVar6 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar7,unaff_EDI), !bVar6)) {
      ghidra::str::ctor((std::string *)&uStack_8c,(std::string *)this_01);
      // [seh] local_8 = 1;
      pNVar8 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pNVar8)->sendShipDetailsToClient();
    }
    if (bVar5) {
      strUsingArgs((char *)&uStack_8c);
      // [seh] local_8 = 2;
      ghidra::str::assign((std::string *)&stack0xffffff5c,"system",6);
      // [seh] local_8 = 0xffffffff;
      sendChatLineFromServer();
    }
    if ((local_2d != false) && (bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar7,unaff_EDI), !bVar5)) {
      local_3c = 0;
      iVar3 = *(int *)(g_gameData + 0xcc);
      iVar4 = *(int *)(iVar3 + 0x78);
      iVar11 = *(int *)(iVar3 + 0x7c) - iVar4;
      do {
        if (iVar11 >> 2 == 0) {
          strUsingArgs((char *)&uStack_8c);
          // [seh] local_8 = 5;
          ghidra::str::assign((std::string *)&stack0xffffff5c,"system",6);
          // [seh] local_8 = CONCAT31(local_8._1_3_,6);
LAB_0041f82e:
          if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
            ghidra::Singleton<void>::instance = operator_new(1);
          }
          // [seh] local_8 = 0xffffffff;
          sendChatLineFromServer();
          break;
        }
        iVar4 = *(int *)(iVar4 + local_3c * 4);
        pcVar16 = (char *)(iVar4 + 0x1c);
        if (0xf < *(uint *)(iVar4 + 0x30)) {
          pcVar16 = *(char **)(iVar4 + 0x1c);
        }
        bVar5 = ghidra::lib::_Traits_equal___x28_x29(pcVar16,*(uint *)(iVar4 + 0x2c),pcVar7,unaff_EDI);
        if (bVar5) {
          strUsingArgs((char *)&uStack_8c);
          // [seh] local_8 = 3;
          ghidra::str::assign((std::string *)&stack0xffffff5c,"system",6);
          // [seh] local_8 = CONCAT31(local_8._1_3_,4);
          goto LAB_0041f82e;
        }
        local_3c = local_3c + 1;
        iVar4 = *(int *)(iVar3 + 0x78);
        iVar11 = *(int *)(iVar3 + 0x7c) - iVar4;
      } while( true );
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackReceiveMessageFromServer(NetworkData *this,Packet_SendMessage *param_1)
void NetworkData::unpackReceiveMessageFromServer(Packet_SendMessage * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Packet_SendMessage PVar1;
  bool bVar2;
  char *pcVar3;
  char ****ppppcVar4;
  NetworkClient *pNVar5;
  Packet_SendMessage *pPVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  char ****ppppcVar9;
  uint unaff_EDI;
  uint uVar10;
  std::string abStack_8c [4];
  undefined4 uStack_88;
  char ***local_5c [4];
  uint local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b30c0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  pPVar6 = param_1 + 1;
  do {
    PVar1 = *pPVar6;
    pPVar6 = pPVar6 + 1;
  } while (PVar1 != (Packet_SendMessage)0x0);
  local_14 = pcVar3;
  ghidra::str::assign
            ((std::string *)local_2c,(char *)(param_1 + 1),(int)pPVar6 - (int)(param_1 + 2));
  // [seh] local_8 = 0;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
  pPVar6 = param_1 + 0xe;
  do {
    PVar1 = *pPVar6;
    pPVar6 = pPVar6 + 1;
  } while (PVar1 != (Packet_SendMessage)0x0);
  ghidra::str::assign
            ((std::string *)local_5c,(char *)(param_1 + 0xe),(int)pPVar6 - (int)(param_1 + 0xf));
  uVar10 = local_18;
  ppppcVar9 = (char ****)local_2c[0];
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
  if (!bVar2) {
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("system",6,pcVar3,unaff_EDI);
    if (bVar2) {
      ghidra::str::assign((std::string *)local_44,"`$",2);
    }
    else {
      ghidra::str::assign((std::string *)local_44,"`%",2);
      ppppcVar4 = local_2c;
      if (0xf < uVar10) {
        ppppcVar4 = ppppcVar9;
      }
      ghidra::str::append((std::string *)local_44,(char *)ppppcVar4,local_1c);
      ghidra::str::append((std::string *)local_44,": ",2);
      ppppcVar9 = (char ****)local_2c[0];
      uVar10 = local_18;
    }
  }
  ppppcVar4 = local_5c;
  if (0xf < local_48) {
    ppppcVar4 = (char ****)local_5c[0];
  }
  ghidra::str::append((std::string *)local_44,(char *)ppppcVar4,local_4c);
  ghidra::str::ctor(abStack_8c,(std::string *)local_44);
  // [seh] local_8._0_1_ = 3;
  pNVar5 = ghidra::any_singleton();
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  (pNVar5)->addChatLogItem();
  if (OISConfiguration::multiDebug != false) {
    uStack_88 = 0x41f9ea;
    debugPrint("NETWORK","Received chat line from \'%s\': %s");
  }
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar7 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar8 = (nothrow_t *)(local_48 + 1);
    ppppcVar4 = (char ****)local_5c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppcVar4 = (char ****)local_5c[0][-1];
      pnVar8 = (nothrow_t *)(local_48 + 0x24);
      if ((char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar4,pnVar8);
  }
  if (0xf < uVar10) {
    pnVar8 = (nothrow_t *)(uVar10 + 1);
    ppppcVar4 = ppppcVar9;
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppcVar4 = (char ****)ppppcVar9[-1];
      pnVar8 = (nothrow_t *)(uVar10 + 0x24);
      if ((char *)0x1f < (char *)((int)ppppcVar9 + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar4,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackReceiveMessageFromClient (NetworkData *this,RakNetGUID param_1,Packet_SendMessage *param_2)
void NetworkData::unpackReceiveMessageFromClient(RakNetGUID param_1, Packet_SendMessage * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Packet_SendMessage PVar1;
  int *piVar2;
  bool bVar3;
  NetworkServer *pNVar4;
  char ****ppppcVar5;
  uint uVar6;
  Packet_SendMessage *pPVar7;
  nothrow_t *pnVar8;
  int *piVar9;
  uint uVar10;
  char ****ppppcVar11;
  int iVar12;
  std::string abStack_74 [12];
  undefined4 uStack_68;
  std::string local_5c [4];
  undefined4 uStack_58;
  char ***local_2c [2];
  int local_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3110;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_24 = (int)param_1.g;
  iStack_20 = param_1.g._4_4_;
  iStack_1c = param_1._8_4_;
  uStack_18 = param_1._12_4_;
  pNVar4 = ghidra::any_singleton();
  uVar6 = 0;
  piVar2 = *(int **)(pNVar4 + 0x3c);
  uVar10 = *(int *)(pNVar4 + 0x40) - (int)piVar2 >> 2;
  piVar9 = piVar2;
  if (uVar10 != 0) {
    do {
      if ((*(int *)*piVar9 == local_24) && (((int *)*piVar9)[1] == iStack_20)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar12 = piVar2[uVar6];
        goto LAB_0041fb3a;
      }
      uVar6 = uVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar6 < uVar10);
  }
  iVar12 = 0;
LAB_0041fb3a:
  uStack_58 = 0x41fb5d;
  debugPrint("MULTI","Received chat line from client \'%s\': %s");
  iStack_1c = 0;
  uStack_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  pPVar7 = param_2 + 0xe;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Packet_SendMessage)0x0);
  ghidra::str::assign
            ((std::string *)local_2c,(char *)(param_2 + 0xe),(int)pPVar7 - (int)(param_2 + 0xf));
  ppppcVar11 = (char ****)local_2c[0];
  // [seh] local_8 = 0;
  if (iStack_1c != 0) {
    ppppcVar5 = local_2c;
    if (0xf < uStack_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    if (*(char *)ppppcVar5 == '/') {
      ghidra::str::ctor(local_5c,(std::string *)local_2c);
      // [seh] local_8._0_1_ = 1;
      pNVar4 = ghidra::any_singleton();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      (pNVar4)->parseRemoteCommand();
      ppppcVar11 = (char ****)local_2c[0];
      goto LAB_0041fc5a;
    }
  }
  pPVar7 = param_2 + 0xe;
  local_5c[0] = (std::string)0x0;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Packet_SendMessage)0x0);
  uStack_68 = 0x41fc20;
  ghidra::str::assign(local_5c,(char *)(param_2 + 0xe),(int)pPVar7 - (int)(param_2 + 0xf));
  // [seh] local_8._0_1_ = 2;
  ghidra::str::ctor(abStack_74,(std::string *)(iVar12 + 0x28));
  // [seh] local_8._0_1_ = 3;
  if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(1);
  }
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  sendChatLineFromServer();
LAB_0041fc5a:
  if (0xf < uStack_18) {
    pnVar8 = (nothrow_t *)(uStack_18 + 1);
    ppppcVar5 = ppppcVar11;
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppcVar5 = (char ****)ppppcVar11[-1];
      pnVar8 = (nothrow_t *)(uStack_18 + 0x24);
      if ((char *)0x1f < (char *)((int)ppppcVar11 + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar5,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackWeaponCommand(NetworkData *this,Packet_WeaponCommand *param_1)
void NetworkData::unpackWeaponCommand(Packet_WeaponCommand * param_1)

{
  Packet_WeaponCommand PVar1;
  Weapon *pWVar2;
  WeaponClass *pWVar3;
  Packet_WeaponCommand *pPVar4;
  std::string local_30 [4];
  undefined4 uStack_2c;
  
  if (OISConfiguration::multiDebug) {
    debugPrint("NETWORK","RECEIVED WEAPON COMMAND");
  }
  if (*(int *)(param_1 + 1) == 0) {
    if (OISConfiguration::multiDebug != false) {
      uStack_2c = 0x41fd67;
      debugPrint("NETWORK","Adding weapon \'%s\' to tube %d");
    }
    local_30[0] = (std::string)0x0;
    pPVar4 = param_1 + 9;
    do {
      PVar1 = *pPVar4;
      pPVar4 = pPVar4 + 1;
    } while (PVar1 != (Packet_WeaponCommand)0x0);
    ghidra::str::assign(local_30,(char *)(param_1 + 9),(int)pPVar4 - (int)(param_1 + 10));
    pWVar3 = GameData::getWeaponClassWithIdentifier();
    (*(Ship **)(g_gameData + 0xd0))->addWeapon(pWVar3, *(int *)(param_1 + 5));
  }
  else if (*(int *)(param_1 + 1) == 1) {
    if (OISConfiguration::multiDebug != false) {
      debugPrint("NETWORK","Removing a weapon from tube \'%d\'");
    }
    pWVar2 = *(Weapon **)
              (*(int *)(*(int *)(*(Ship **)(g_gameData + 0xd0) + 0x40) + 0x20) + 0x3c +
              *(int *)(param_1 + 5) * 4);
    if (pWVar2 != (Weapon *)0x0) {
      (*(Ship **)(g_gameData + 0xd0))->removeWeapon(pWVar2);
      return;
    }
    debugPrint("ERROR","Unable to remove weapon.");
    return;
  }
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSetHullState(NetworkData *this,Packet_HullState *param_1)
void NetworkData::unpackSetHullState(Packet_HullState * param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = ghidra::lib::map__operator_x5b_x5d
                     ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x14c),(int *)(param_1 + 1));
  bVar2 = OISConfiguration::multiDebug != false;
  *piVar1 = *(int *)(param_1 + 5);
  if (bVar2) {
    debugPrint("NETWORK","HULL DAMAGE STATE CHANGE: %s is now %d",
               (&PTR_s_Bow_005d0224)[*(int *)(param_1 + 1)],*(undefined4 *)(param_1 + 5));
  }
  return;
}


// Ghidra: void __thiscall NetworkData::unpackServerInfoAdvanced(NetworkData *this,Packet_ServerInfoAdvanced *param_1)
void NetworkData::unpackServerInfoAdvanced(Packet_ServerInfoAdvanced * param_1)

{
  GameData *pGVar1;
  Packet_ServerInfoAdvanced PVar2;
  ServerUserState *this_00;
  ServerShipState *this_01;
  AnimationFrames **ppAVar3;
  std::string *pbVar4;
  GameData *pGVar5;
  Packet_ServerInfoAdvanced *pPVar6;
  Packet_ServerInfoAdvanced *pPVar7;
  uint uVar8;
  Packet_ServerInfoAdvanced *pPVar9;
  std::string *local_10;
  Packet_ServerInfoAdvanced *local_c;
  Packet_ServerInfoAdvanced *local_8;
  
  uVar8 = 0;
  pGVar5 = g_gameData;
  if (*(int *)(g_gameData + 0x248) - *(int *)(g_gameData + 0x244) >> 2 != 0) {
    do {
      this_00 = *(ServerUserState **)(*(int *)(pGVar5 + 0x244) + uVar8 * 4);
      if (this_00 != (ServerUserState *)0x0) {
        ServerUserState::_scalar_deleting_destructor_(this_00,(uint)this_00);
        pGVar5 = g_gameData;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(pGVar5 + 0x248) - *(int *)(pGVar5 + 0x244) >> 2));
  }
  uVar8 = 0;
  *(undefined4 *)(pGVar5 + 0x248) = *(undefined4 *)(pGVar5 + 0x244);
  if (*(int *)(pGVar5 + 0x254) - *(int *)(pGVar5 + 0x250) >> 2 != 0) {
    do {
      this_01 = *(ServerShipState **)(*(int *)(pGVar5 + 0x250) + uVar8 * 4);
      if (this_01 != (ServerShipState *)0x0) {
        (this_01)->~ServerShipState();
        operator_delete(this_01,(nothrow_t *)0x68);
        pGVar5 = g_gameData;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(pGVar5 + 0x254) - *(int *)(pGVar5 + 0x250) >> 2));
  }
  *(undefined4 *)(pGVar5 + 0x254) = *(undefined4 *)(pGVar5 + 0x250);
  pPVar6 = param_1 + 0x11a1;
  pPVar9 = param_1 + 1;
  param_1 = (Packet_ServerInfoAdvanced *)0x8;
  do {
    local_8 = pPVar6;
    if (*pPVar6 != (Packet_ServerInfoAdvanced)0x0) {
      pbVar4 = operator_new(0x34);
      memset(pbVar4,0,0x34);
      *(undefined4 *)(pbVar4 + 0x14) = 0xf;
      *(undefined4 *)(pbVar4 + 0x28) = 0;
      *(undefined4 *)(pbVar4 + 0x2c) = 0xf;
      pbVar4[0x18] = (std::string)0x0;
      local_c = local_8 + 1;
      pPVar6 = local_8;
      do {
        PVar2 = *pPVar6;
        pPVar6 = pPVar6 + 1;
      } while (PVar2 != (Packet_ServerInfoAdvanced)0x0);
      local_10 = pbVar4;
      ghidra::str::assign(pbVar4,(char *)local_8,(int)pPVar6 - (int)local_c);
      local_c = local_8 + 0xd;
      pPVar6 = local_8 + 0xc;
      do {
        PVar2 = *pPVar6;
        pPVar6 = pPVar6 + 1;
      } while (PVar2 != (Packet_ServerInfoAdvanced)0x0);
      ghidra::str::assign(pbVar4 + 0x18,(char *)(local_8 + 0xc),(int)pPVar6 - (int)local_c);
      pPVar6 = local_8;
      pbVar4[0x31] = *(std::string *)(local_8 + 0x17);
      pbVar4[0x30] = *(std::string *)(local_8 + 0x16);
      pGVar5 = g_gameData;
      ppAVar3 = *(AnimationFrames ***)(g_gameData + 0x248);
      if (*(AnimationFrames ***)(g_gameData + 0x24c) == ppAVar3) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(g_gameData + 0x244),ppAVar3,(AnimationFrames **)&local_10);
        pGVar5 = g_gameData;
      }
      else {
        *ppAVar3 = (AnimationFrames *)pbVar4;
        pGVar1 = pGVar5 + 0x248;
        *(int *)pGVar1 = *(int *)pGVar1 + 4;
      }
    }
    if (*pPVar9 != (Packet_ServerInfoAdvanced)0x0) {
      pbVar4 = operator_new(0x68);
      memset(pbVar4,0,0x68);
      *(undefined4 *)(pbVar4 + 0x14) = 0xf;
      *(undefined4 *)(pbVar4 + 0x28) = 0;
      *(undefined4 *)(pbVar4 + 0x2c) = 0xf;
      pbVar4[0x18] = (std::string)0x0;
      *(undefined4 *)(pbVar4 + 0x40) = 0;
      *(undefined4 *)(pbVar4 + 0x44) = 0xf;
      pbVar4[0x30] = (std::string)0x0;
      *(undefined4 *)(pbVar4 + 0x58) = 0;
      *(undefined4 *)(pbVar4 + 0x5c) = 0xf;
      pbVar4[0x48] = (std::string)0x0;
      pPVar7 = pPVar9;
      do {
        PVar2 = *pPVar7;
        pPVar7 = pPVar7 + 1;
      } while (PVar2 != (Packet_ServerInfoAdvanced)0x0);
      local_c = (Packet_ServerInfoAdvanced *)pbVar4;
      ghidra::str::assign(pbVar4,(char *)pPVar9,(int)pPVar7 - (int)(pPVar9 + 1));
      local_10 = (std::string *)(pPVar9 + 0x15);
      pPVar7 = pPVar9 + 0x14;
      do {
        PVar2 = *pPVar7;
        pPVar7 = pPVar7 + 1;
      } while (PVar2 != (Packet_ServerInfoAdvanced)0x0);
      ghidra::str::assign(pbVar4 + 0x18,(char *)(pPVar9 + 0x14),(int)pPVar7 - (int)local_10)
      ;
      *(undefined4 *)(pbVar4 + 100) = *(undefined4 *)(pPVar9 + 0x230);
      *(undefined4 *)(pbVar4 + 0x60) = *(undefined4 *)(pPVar9 + 0x22c);
      local_10 = (std::string *)(pPVar9 + 0x1f);
      pPVar7 = pPVar9 + 0x1e;
      do {
        PVar2 = *pPVar7;
        pPVar7 = pPVar7 + 1;
      } while (PVar2 != (Packet_ServerInfoAdvanced)0x0);
      ghidra::str::assign(pbVar4 + 0x30,(char *)(pPVar9 + 0x1e),(int)pPVar7 - (int)local_10)
      ;
      local_10 = (std::string *)(pPVar9 + 0x2b);
      pPVar7 = pPVar9 + 0x2a;
      do {
        PVar2 = *pPVar7;
        pPVar7 = pPVar7 + 1;
      } while (PVar2 != (Packet_ServerInfoAdvanced)0x0);
      ghidra::str::assign(pbVar4 + 0x48,(char *)(pPVar9 + 0x2a),(int)pPVar7 - (int)local_10)
      ;
      pGVar5 = g_gameData;
      ppAVar3 = *(AnimationFrames ***)(g_gameData + 0x254);
      if (*(AnimationFrames ***)(g_gameData + 600) == ppAVar3) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(g_gameData + 0x250),ppAVar3,(AnimationFrames **)&local_c);
        pGVar5 = g_gameData;
      }
      else {
        *ppAVar3 = (AnimationFrames *)pbVar4;
        pGVar1 = pGVar5 + 0x254;
        *(int *)pGVar1 = *(int *)pGVar1 + 4;
      }
    }
    pPVar6 = pPVar6 + 0x18;
    pPVar9 = pPVar9 + 0x234;
    param_1 = param_1 + -1;
  } while (param_1 != (Packet_ServerInfoAdvanced *)0x0);
  if (OISConfiguration::multiDebug != false) {
    local_8 = pPVar6;
    debugPrint("NETWORK","Advanced server info updated: %d users, %d ships",
               *(int *)(pGVar5 + 0x248) - *(int *)(pGVar5 + 0x244) >> 2,
               *(int *)(pGVar5 + 0x254) - *(int *)(pGVar5 + 0x250) >> 2);
  }
  return;
}


// Ghidra: void __thiscall NetworkData::unpackAddShip(NetworkData *this,RakNetGUID param_1,Packet_AddShip *param_2)
void NetworkData::unpackAddShip(RakNetGUID param_1, Packet_AddShip * param_2)

{
  Packet_AddShip PVar1;
  GameData *pGVar2;
  Ship *pSVar3;
  Packet_AddShip *pPVar4;
  bool bVar5;
  std::string local_8c [12];
  undefined4 uStack_80;
  std::string local_74 [12];
  undefined4 uStack_68;
  std::string local_5c [12];
  undefined4 uStack_50;
  uint local_44;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3158;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if ((OISConfiguration::multiDebug) &&
     (debugPrint("NETWORK","RECEIVED SHIP ADD REQUEST"), OISConfiguration::multiDebug != false)) {
    local_44 = 0x42034a;
    debugPrint("NETWORK","Ship name: %s, rego: %s, class: %s");
  }
  local_44 = local_44 & 0xffffff00;
  uStack_50 = 0x42037d;
  ghidra::str::assign((std::string *)&local_44,"",0);
  // [seh] local_8 = 0;
  local_5c[0] = (std::string)0x0;
  pPVar4 = param_2 + 1;
  do {
    PVar1 = *pPVar4;
    pPVar4 = pPVar4 + 1;
  } while (PVar1 != (Packet_AddShip)0x0);
  uStack_68 = 0x4203b8;
  ghidra::str::assign(local_5c,(char *)(param_2 + 1),(int)pPVar4 - (int)(param_2 + 2));
  // [seh] local_8._0_1_ = 1;
  local_74[0] = (std::string)0x0;
  pPVar4 = param_2 + 0x53;
  do {
    PVar1 = *pPVar4;
    pPVar4 = pPVar4 + 1;
  } while (PVar1 != (Packet_AddShip)0x0);
  uStack_80 = 0x4203f2;
  ghidra::str::assign(local_74,(char *)(param_2 + 0x53),(int)pPVar4 - (int)(param_2 + 0x54))
  ;
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  local_8c[0] = (std::string)0x0;
  pPVar4 = param_2 + 0x21;
  do {
    PVar1 = *pPVar4;
    pPVar4 = pPVar4 + 1;
  } while (PVar1 != (Packet_AddShip)0x0);
  ghidra::str::assign(local_8c,(char *)(param_2 + 0x21),(int)pPVar4 - (int)(param_2 + 0x22))
  ;
  // [seh] local_8 = 0xffffffff;
  pSVar3 = GameLogic::generateShip();
  pGVar2 = g_gameData;
  bVar5 = OISConfiguration::multiDebug != false;
  *(undefined4 *)(pSVar3 + 0x378) = 0;
  *(undefined4 *)(pGVar2 + 0xd8) = *(undefined4 *)(pSVar3 + 0x24);
  *(Ship **)(pGVar2 + 0xd0) = pSVar3;
  if (bVar5) {
    debugPrint("NETWORK","Added ship \'%s\' to sector \'%s\' for player.");
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall NetworkData::unpackRunCommand(NetworkData *this,RakNetGUID param_1,Packet_RunCommand *param_2)
void NetworkData::unpackRunCommand(RakNetGUID param_1, Packet_RunCommand * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffac[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  NetworkServer *pNVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  uint extraout_EDX;
  nothrow_t *pnVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  ShipCommand in_stack_ffffff74;
  char *in_stack_ffffff78;
  char *in_stack_ffffff7c;
  undefined *in_stack_ffffff80;
  undefined8 in_stack_ffffff84;
  undefined4 in_stack_ffffff8c;
  undefined4 in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  char *pcVar12;
  undefined4 uVar13;
  Packet_RunCommand *pPVar14;
  int in_stack_ffffffac;
  int *local_30;
  undefined4 ***local_2c [2];
  int local_24;
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3190;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_14 = uVar4;
  bVar3 = PresentationData::isLocalCommand(uVar4);
  if (bVar3) {
    uStack_1c._0_2_ = 0;
    uStack_1c._2_2_ = 0;
    uStack_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    if (extraout_EDX < 0xd7) {
      pcVar12 = (&PTR_s_NONE_005e1078)[extraout_EDX];
      pcVar8 = pcVar12;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar8 - (int)(pcVar12 + 1);
    }
    else {
      uVar4 = 0xf;
      pcVar12 = "invalid command";
    }
    ghidra::str::assign((std::string *)local_2c,pcVar12,uVar4);
    // [seh] local_8 = 0;
    ppppuVar5 = local_2c;
    if (0xf < uStack_18) {
      ppppuVar5 = (undefined4 ****)local_2c[0];
    }
    debugPrint("MULTI","ERROR: Local command \'%s\' is sent through to the server.",ppppuVar5);
    if (0xf < uStack_18) {
      pnVar10 = (nothrow_t *)(uStack_18 + 1);
      ppppuVar5 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        ppppuVar5 = (undefined4 ****)local_2c[0][-1];
        pnVar10 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar5,pnVar10);
    }
  }
  else {
    local_24 = (int)param_1.g;
    iStack_20 = param_1.g._4_4_;
    uStack_1c._0_2_ = param_1.systemIndex;
    uStack_1c._2_2_ = param_1._10_2_;
    uStack_18 = param_1._12_4_;
    pNVar6 = ghidra::any_singleton();
    uVar11 = 0;
    piVar9 = *(int **)(pNVar6 + 0x3c);
    uVar7 = *(int *)(pNVar6 + 0x40) - (int)piVar9 >> 2;
    if (uVar7 != 0) {
      do {
        piVar2 = (int *)*piVar9;
        if ((*piVar2 == local_24) && (piVar2[1] == iStack_20)) {
          if (piVar2 != (int *)0x0) {
            uVar13 = 0x4205de;
            pPVar14 = param_2;
            pNVar6 = ghidra::any_singleton();
            if (*(int *)(pNVar6 + 0x1c) == 3) {
              if (OISConfiguration::multiDebug != false) {
                in_stack_ffffff8c = *(undefined4 *)(param_2 + 0xd);
                in_stack_ffffff90 = *(undefined4 *)(param_2 + 0x11);
                in_stack_ffffff94 = *(undefined4 *)(param_2 + 0x15);
                uVar13 = *(undefined4 *)(param_2 + 0x19);
                in_stack_ffffff84 = *(undefined8 *)(param_2 + 5);
                in_stack_ffffff80 = (&PTR_s_NONE_005d0238)[*(int *)(param_2 + 1)];
                in_stack_ffffff7c = "Server: Executing command: %s (%f, %f, %f)";
                in_stack_ffffff78 = "NETWORK";
                in_stack_ffffff74 = 0x420620;
                debugPrint("NETWORK","Server: Executing command: %s (%f, %f, %f)",in_stack_ffffff80,
                           in_stack_ffffff84,in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,
                           uVar13);
              }
              ShipInterface::getShipCommandFunction(in_stack_ffffff74);
              std::function<>::ghidra::lib::function_t<>
                        ((ghidra::lib::function_t *)&stack0xffffffac,in_stack_ffffff74,in_stack_ffffff78,
                         in_stack_ffffff7c,in_stack_ffffff80,in_stack_ffffff84,in_stack_ffffff8c,
                         in_stack_ffffff90,in_stack_ffffff94,uVar13);
              // [seh] local_8 = 1;
              if (local_30 != (int *)0x0) {
                ghidra::lib::_Func_class__operator_x28_x29
                          ((ghidra::func_class *)&stack0xffffffac,(Ship *)piVar2[0x19],
                           (double)CONCAT44(uVar4,(int)((ulonglong)*(undefined8 *)(param_2 + 0x15)
                                                       >> 0x20)),
                           (double)CONCAT44(unaff_ESI,unaff_EDI),
                           (double)CONCAT44(in_stack_ffffffac,pPVar14));
              }
              // [seh] local_8 = 2;
              if (local_30 != (int *)0x0) {
                (**(code **)(*local_30 + 0x10))(local_30 != (int *)&stack0xffffffac);
              }
            }
          }
          break;
        }
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar11 < uVar7);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall NetworkData::unpackSyncNumerical(NetworkData *this,Packet_SyncValueNumerical *param_1)
void NetworkData::unpackSyncNumerical(Packet_SyncValueNumerical * param_1)

{
  Ship *pSVar1;
  int iVar2;
  bool bVar3;
  GameData *this_00;
  Sector *pSVar4;
  PresentationInterface *this_01;
  SensorData *pSVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  
  this_00 = g_gameData;
  bVar3 = OISConfiguration::multiDebug;
  switch(*(undefined4 *)(param_1 + 1)) {
  case 5:
    *(undefined8 *)(*(int *)(g_gameData + 0xd0) + 0x28) = *(undefined8 *)(param_1 + 5);
    if (bVar3) {
      debugPrint("NETWORK","new x pos = %f",*(undefined8 *)(*(int *)(this_00 + 0xd0) + 0x28));
      return;
    }
    break;
  case 6:
    *(undefined8 *)(*(int *)(g_gameData + 0xd0) + 0x30) = *(undefined8 *)(param_1 + 5);
    if (bVar3) {
      debugPrint("NETWORK","new y pos = %f",*(undefined8 *)(*(int *)(this_00 + 0xd0) + 0x28));
      return;
    }
    break;
  case 7:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x20) = *(undefined4 *)(param_1 + 5);
    pSVar4 = (this_00)->getSectorWithID(*(int *)(param_1 + 5));
    *(Sector **)(*(int *)(this_00 + 0xd0) + 0x24) = pSVar4;
    return;
  case 8:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x48) = *(undefined4 *)(param_1 + 5);
    return;
  case 9:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x4c) = *(undefined4 *)(param_1 + 5);
    return;
  case 10:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x50) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xb:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x54) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xc:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x5c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xd:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x58) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xe:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x60) = *(undefined4 *)(param_1 + 5);
    return;
  case 0xf:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xd4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x10:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0xd8) = param_1[5];
    return;
  default:
    if (OISConfiguration::multiDebug) {
      debugPrint("NETWORK","Unknown numerical sync identifier: %d");
    }
    break;
  case 0x12:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xdc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x13:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xe0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x14:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0xe4) = param_1[5];
    uVar9 = *(undefined1 *)(*(int *)(this_00 + 0xd0) + 0xe4);
    this_01 = ghidra::any_singleton();
    (this_01)->switchEmconMode((bool)uVar9);
    return;
  case 0x15:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xe8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x16:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xec) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x17:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xf0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x18:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xf4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x19:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xf8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1a:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x104) = param_1[5];
    return;
  case 0x1b:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x108) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1c:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x10c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1d:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x118) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1e:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x11c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x1f:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x120) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x20:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x128) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x21:
  case 0x22:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 300) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x23:
    *(undefined8 *)(*(int *)(g_gameData + 0xd0) + 0x138) = *(undefined8 *)(param_1 + 5);
    return;
  case 0x24:
    *(undefined8 *)(*(int *)(g_gameData + 0xd0) + 0x140) = *(undefined8 *)(param_1 + 5);
    return;
  case 0x25:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x148) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x26:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x168) = param_1[5];
    return;
  case 0x27:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1b8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x28:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1bc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x29:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 400) = *(undefined4 *)(param_1 + 5);
    pSVar1 = *(Ship **)(this_00 + 0xd0);
    pSVar5 = (pSVar1)->getSensorData(*(int *)(param_1 + 5));
    *(SensorData **)(pSVar1 + 0x194) = pSVar5;
    return;
  case 0x2a:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a8) = *(undefined4 *)(param_1 + 5);
    if (*(int *)(param_1 + 5) != -1) {
      iVar6 = *(int *)(*(int *)(this_00 + 0xd0) + 0x24);
      uVar7 = 0;
      iVar2 = *(int *)(iVar6 + 0x84);
      uVar8 = *(int *)(iVar6 + 0x88) - iVar2 >> 2;
      if (uVar8 != 0) {
        do {
          iVar6 = *(int *)(iVar2 + uVar7 * 4);
          if (*(int *)(iVar6 + 0x38) == *(int *)(param_1 + 5)) goto LAB_00420c62;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
    iVar6 = 0;
LAB_00420c62:
    *(int *)(*(int *)(this_00 + 0xd0) + 0x1ac) = iVar6;
    return;
  case 0x2b:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x198) = *(undefined4 *)(param_1 + 5);
    pSVar1 = *(Ship **)(this_00 + 0xd0);
    pSVar5 = (pSVar1)->getSensorData(*(int *)(param_1 + 5));
    *(SensorData **)(pSVar1 + 0x19c) = pSVar5;
    return;
  case 0x2c:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a0) = *(undefined4 *)(param_1 + 5);
    if (*(int *)(param_1 + 5) != -1) {
      iVar6 = *(int *)(*(int *)(this_00 + 0xd0) + 0x24);
      uVar7 = 0;
      iVar2 = *(int *)(iVar6 + 0x84);
      uVar8 = *(int *)(iVar6 + 0x88) - iVar2 >> 2;
      if (uVar8 != 0) {
        do {
          iVar6 = *(int *)(iVar2 + uVar7 * 4);
          if (*(int *)(iVar6 + 0x38) == *(int *)(param_1 + 5)) goto LAB_00420c07;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
    iVar6 = 0;
LAB_00420c07:
    *(int *)(*(int *)(this_00 + 0xd0) + 0x1a4) = iVar6;
    return;
  case 0x2d:
  case 0x2e:
    break;
  case 0x30:
    *(Packet_SyncValueNumerical *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x34) = param_1[5]
    ;
    return;
  case 0x31:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x188) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x32:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x18c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x33:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x1b0) = param_1[5];
    return;
  case 0x34:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x1b1) = param_1[5];
    return;
  case 0x35:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0xfc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x36:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x1b2) = param_1[5];
    return;
  case 0x37:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1b4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x38:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 100) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x39:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1d0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3a:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1d8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3b:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1dc) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3c:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1e0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3d:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1e4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3e:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1e8) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x3f:
    *(float *)(*(int *)(g_gameData + 0xd0) + 500) = (float)*(int *)(param_1 + 5);
    return;
  case 0x40:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x15c) = param_1[5];
    return;
  case 0x41:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x160) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x43:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1ec) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x44:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f0) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x45:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x100) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x47:
    *(Packet_SyncValueNumerical *)(*(int *)(g_gameData + 0xd0) + 0x318) = param_1[5];
    return;
  case 0x48:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x31c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x49:
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1d4) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4a:
    *(undefined4 *)(g_gameLogic + 0x180) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4b:
    *(undefined4 *)(g_gameLogic + 0x184) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4c:
    *(undefined4 *)(g_gameLogic + 0x188) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4d:
    *(undefined4 *)(g_gameLogic + 0x18c) = *(undefined4 *)(param_1 + 5);
    return;
  case 0x4e:
    *(undefined4 *)(g_gameLogic + 400) = *(undefined4 *)(param_1 + 5);
    return;
  }
  return;
}
