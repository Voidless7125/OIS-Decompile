// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIFollow::recalculateLogic(AIFollow *this)
void AIFollow::recalculateLogic()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  std::string *pbVar2;
  GameData *pGVar3;
  bool bVar4;
  char *pcVar5;
  FlagManager *pFVar6;
  std::string *pbVar7;
  std::string *pbVar8;
  uint unaff_EDI;
  std::string abStack_70 [12];
  undefined4 uStack_64;
  std::string local_44 [24];
  std::string *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1e28;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x20) = 0;
  iVar1 = *(int *)(*(int *)(*(Ship **)((char *)this + 0x24) + 0x44) + 0x124);
  local_14 = pcVar5;
  if ((iVar1 != 0) && (bVar4 = (*(Ship **)((char *)this + 0x24))->canDetectPlayerShip(), bVar4)) {
    uStack_64 = 0x4fc9f4;
    bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
    if (!bVar4) {
      ghidra::str::ctor(abStack_70,(std::string *)(iVar1 + 0x1dc));
      // [seh] local_8 = 0;
      pFVar6 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      bVar4 = (pFVar6)->flagSet();
      pGVar3 = g_gameData;
      if (bVar4) {
        *(undefined4 *)((char *)this + 0x20) = 0x40000000;
        *(undefined4 *)((char *)this + 100) = *(undefined4 *)(pGVar3 + 0xd0);
      }
    }
    iVar1 = *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x124);
    pbVar2 = *(std::string **)(iVar1 + 0x1fc);
    for (pbVar8 = *(std::string **)(iVar1 + 0x1f8); pbVar8 != pbVar2; pbVar8 = pbVar8 + 0x30) {
      ghidra::str::ctor(local_44,pbVar8);
      // [seh] local_8 = 1;
      ghidra::str::ctor((std::string *)local_2c,pbVar8 + 0x18);
      // [seh] local_8 = 2;
      ghidra::str::ctor(abStack_70,(std::string *)local_44);
      // [seh] local_8._0_1_ = 3;
      pFVar6 = ghidra::any_singleton();
      // [seh] local_8._0_1_ = 2;
      bVar4 = (pFVar6)->flagSet();
      if (bVar4) {
        ghidra::str::ctor(abStack_70,(std::string *)local_2c);
        // [seh] local_8._0_1_ = 4;
        pFVar6 = ghidra::any_singleton();
        // [seh] local_8 = CONCAT31(local_8._1_3_,2);
        bVar4 = (pFVar6)->flagSet();
        if (!bVar4) {
          if ((std::string *)((char *)this + 0x48) != (std::string *)local_2c) {
            pbVar7 = (std::string *)local_2c;
            if (0xf < local_18) {
              pbVar7 = local_2c[0];
            }
            uStack_64 = 0x4fcaf0;
            ghidra::str::assign((std::string *)((char *)this + 0x48),(char *)pbVar7,local_1c);
          }
          *(undefined4 *)((char *)this + 0x20) = 0x40000000;
        }
      }
      // [seh] local_8 = 0xffffffff;
      ghidra::lib::pair___x7epair((ghidra::lib::pair_t *)local_44);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIFollow::runLogic(AIFollow *this,float param_1)
void AIFollow::runLogic(float param_1)

{
  char stack0xffffffc4[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  Ship *pSVar2;
  bool bVar3;
  int iVar4;
  FlagManager *pFVar5;
  Ship *pSVar6;
  std::string local_38 [16];
  undefined4 local_28;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1e60;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pSVar6 = *(Ship **)((char *)this + 100);
  if (((pSVar6 == (Ship *)0x0) && (pSVar2 = *(Ship **)(g_gameData + 0xd0), pSVar2 != (Ship *)0x0))
     && (bVar3 = (*(Ship **)((char *)this + 0x24))->canDetectPlayerShip(), bVar3)) {
    *(Ship **)((char *)this + 100) = pSVar2;
    pSVar6 = pSVar2;
  }
  if (((char *)this)[0x40] == (byte)0x0) {
    // [seh] ExceptionList = local_10;
    return;
  }
  fVar1 = *(float *)((char *)this + 0x60);
  *(float *)((char *)this + 0x60) = param_1 + fVar1;
  if (param_1 + fVar1 < *(float *)((char *)this + 0x44)) {
    // [seh] ExceptionList = local_10;
    return;
  }
  if (pSVar6 == (Ship *)0x0) {
    // [seh] ExceptionList = local_10;
    return;
  }
  local_28 = 0x4fcbb6;
  bVar3 = (*(Ship **)((char *)this + 0x24))->canCurrentlyDetect(pSVar6);
  if (!bVar3) {
    // [seh] ExceptionList = local_10;
    return;
  }
  iVar4 = *(int *)(pSVar6 + 0x1c8) - *(int *)(pSVar6 + 0x1c4) >> 5;
  if (((iVar4 == 0) ||
      (iVar4 = *(int *)(iVar4 * 0x20 + -0xc + *(int *)(pSVar6 + 0x1c4)), iVar4 == 0)) ||
     (*(int *)(iVar4 + 0x30) != 1)) {
LAB_004fcc03:
    ghidra::str::ctor(local_38,(std::string *)((char *)this + 0x48));
    // [seh] local_8 = 0;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    bVar3 = (pFVar5)->flagSet();
    if (!bVar3) goto LAB_004fcc50;
  }
  else {
    bVar3 = false;
    if (*(int *)(iVar4 + 0x24c) != 0) {
      bVar3 = *(int *)(*(int *)(iVar4 + 0x24c) + 0x158) == 1;
    }
    if (!bVar3) goto LAB_004fcc03;
  }
  if ((*(float *)(*(int *)((char *)this + 100) + 0x54) == -1.0) &&
     (*(char *)(*(int *)(*(int *)((char *)this + 100) + 0x40) + 0x34) != '\0')) {
    // [seh] ExceptionList = local_10;
    return;
  }
LAB_004fcc50:
  local_28 = 0;
  local_38[0] = (std::string)0x0;
  ghidra::str::assign
            (local_38,"Vessel disobeyed instruction to proceed to port. Acting accordingly.",0x44);
  Ship::log();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffc4,(std::string *)((char *)this + 0x48));
  // [seh] local_8 = 1;
  pFVar5 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pFVar5)->setFlag();
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIFollow::removeDesireTarget(AIFollow *this,GameObject *param_1)
void AIFollow::removeDesireTarget(GameObject * param_1)

{
  if (param_1 == (GameObject *)(-(uint)(*(int *)((char *)this + 100) != 0) & *(int *)((char *)this + 100) + 8U)) {
    *(undefined4 *)((char *)this + 100) = 0;
  }
  return;
}


// Ghidra: void __thiscall AIFollow::enterState(AIFollow *this)
void AIFollow::enterState()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  int iVar2;
  std::string *pbVar3;
  bool bVar4;
  FlagManager *pFVar5;
  std::string *pbVar6;
  std::string abStack_74 [16];
  undefined4 uStack_64;
  std::string local_44 [24];
  std::string local_2c [24];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_10 = ExceptionList;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c1e98;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar2 = *(int *)((char *)this + 0x24);
  *(undefined4 *)(iVar2 + 900) = *(undefined4 *)((char *)this + 100);
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  ((char *)this)[0x40] = (byte)0x0;
  iVar2 = *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x124);
  pbVar3 = *(std::string **)(iVar2 + 0x1fc);
  for (pbVar6 = *(std::string **)(iVar2 + 0x1f8); pbVar6 != pbVar3; pbVar6 = pbVar6 + 0x30) {
    uStack_64 = 0x4fcd69;
    ghidra::str::ctor(local_44,pbVar6);
    // [seh] local_8 = 0;
    uStack_64 = 0x4fcd7c;
    ghidra::str::ctor(local_2c,pbVar6 + 0x18);
    // [seh] local_8 = 1;
    ghidra::str::ctor(abStack_74,(std::string *)local_44);
    // [seh] local_8._0_1_ = 2;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    bVar4 = (pFVar5)->flagSet();
    if (bVar4) {
      *(undefined2 *)((char *)this + 0x40) = 1;
      iVar2 = *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x124);
      if ((iVar2 != 0) && (fVar1 = *(float *)(iVar2 + 500), fVar1 != -1.0)) {
        *(float *)((char *)this + 0x44) = fVar1;
      }
      *(undefined4 *)((char *)this + 0x60) = 0;
    }
    // [seh] local_8 = 0xffffffff;
    ghidra::lib::pair___x7epair((ghidra::lib::pair_t *)local_44);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIFollow::leaveState(AIFollow *this)
void AIFollow::leaveState()

{
  int iVar1;
  
  iVar1 = *(int *)((char *)this + 0x24);
  if (*(int *)(iVar1 + 900) == *(int *)((char *)this + 100)) {
    *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  }
  *(undefined4 *)((char *)this + 100) = 0;
  return;
}
