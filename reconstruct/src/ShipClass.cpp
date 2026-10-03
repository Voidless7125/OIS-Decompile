// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ShipClass * __thiscall ShipClass::ShipClass(ShipClass *this,VesselType param_1)
ShipClass::ShipClass(VesselType param_1)

{
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c412b;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0xf;
  ((char *)this)[0x30] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x5c) = 0xf;
  ((char *)this)[0x48] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x70) = 0;
  *(undefined4 *)((char *)this + 0x74) = 0xf;
  ((char *)this)[0x60] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x88) = 0;
  *(undefined4 *)((char *)this + 0x8c) = 0xf;
  ((char *)this)[0x78] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa0) = 0;
  *(undefined4 *)((char *)this + 0xa4) = 0xf;
  ((char *)this)[0x90] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xb8) = 0;
  *(undefined4 *)((char *)this + 0xbc) = 0xf;
  ((char *)this)[0xa8] = (byte)0x0;
  // [seh] local_8 = 7;
  *(undefined4 *)((char *)this + 0xc0) = 0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  *(undefined4 *)((char *)this + 200) = 0;
  *(undefined4 *)((char *)this + 0xcc) = 0x44c;
  ((char *)this)[0xd0] = (byte)0x43;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0xd1),'\0','c','2');
  *(undefined2 *)((char *)this + 0xd4) = 0x3032;
  *(undefined4 *)((char *)this + 0xd8) = 10000;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0xdc),0xff,'\0','\0');
  *(undefined2 *)((char *)this + 0xdf) = 1;
  *(undefined4 *)((char *)this + 0xe4) = 6;
  *(undefined4 *)((char *)this + 0xe8) = 6;
  *(undefined4 *)((char *)this + 0xfc) = 0;
  *(undefined4 *)((char *)this + 0x100) = 0xf;
  ((char *)this)[0xec] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x104) = 0;
  *(undefined4 *)((char *)this + 0x108) = 0x3f99999a;
  *(undefined4 *)((char *)this + 0x10c) = 0;
  *(undefined4 *)((char *)this + 0x110) = 0;
  *(undefined4 *)((char *)this + 0x114) = 0;
  *(undefined4 *)((char *)this + 0x118) = 0;
  *(undefined4 *)((char *)this + 0x11c) = 0;
  *(undefined4 *)((char *)this + 0x120) = 0;
  *(undefined4 *)((char *)this + 0x134) = 0;
  *(undefined4 *)((char *)this + 0x138) = 0xf;
  ((char *)this)[0x124] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x13c) = 0;
  *(undefined4 *)((char *)this + 0x140) = 0;
  *(undefined4 *)((char *)this + 0x144) = 0;
  *(undefined4 *)((char *)this + 0x148) = 0;
  *(undefined4 *)((char *)this + 0x14c) = 0;
  *(VesselType *)((char *)this + 0x158) = param_1;
  *(undefined4 *)((char *)this + 0x15c) = 8;
  *(undefined4 *)((char *)this + 0x160) = 0xc;
  *(undefined4 *)((char *)this + 0x164) = 100;
  *(undefined4 *)((char *)this + 0x168) = 0;
  *(undefined4 *)((char *)this + 0x16c) = 0;
  *(undefined4 *)((char *)this + 0x170) = 0;
  *(undefined4 *)((char *)this + 0x174) = 0;
  *(undefined4 *)((char *)this + 0x178) = 0;
  *(undefined4 *)((char *)this + 0x17c) = 0;
  *(undefined4 *)((char *)this + 0x180) = 0;
  *(undefined4 *)((char *)this + 0x184) = 0;
  *(undefined4 *)((char *)this + 0x188) = 0;
  *(undefined4 *)((char *)this + 0x18c) = 0;
  *(undefined4 *)((char *)this + 400) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: ShipConfiguration * __thiscall ShipClass::getShipConfiguration(ShipClass *this,char *param_2)
ShipConfiguration * ShipClass::getShipConfiguration(char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  ShipConfiguration *pSVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)((char *)this + 0x184);
  uVar6 = *(int *)((char *)this + 0x188) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar8 = *(ShipConfiguration **)(iVar1 + uVar7 * 4);
        goto LAB_0051aa78;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pSVar8 = (ShipConfiguration *)0x0;
LAB_0051aa78:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return pSVar8;
}


// Ghidra: void __thiscall ShipClass::hullStrengthForSection(ShipClass *this,HullLocation param_1)
void ShipClass::hullStrengthForSection(HullLocation param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int in_stack_00000008;
  
  piVar1 = *(int **)((char *)this + 0x118);
  uVar5 = 0;
  iVar2 = *(int *)((char *)this + 0x11c) - (int)piVar1 >> 0x1f;
  iVar4 = (*(int *)((char *)this + 0x11c) - (int)piVar1) / 0xc + iVar2;
  piVar3 = piVar1;
  if (iVar4 != iVar2) {
    do {
      if (*piVar3 == in_stack_00000008) {
        iVar2 = piVar1[uVar5 * 3 + 2];
        *(undefined8 *)param_1 = *(undefined8 *)(piVar1 + uVar5 * 3);
        *(int *)(param_1 + 8) = iVar2;
        return;
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar5 < (uint)(iVar4 - iVar2));
  }
  iVar2 = piVar1[2];
  *(undefined8 *)param_1 = *(undefined8 *)piVar1;
  *(int *)(param_1 + 8) = iVar2;
  return;
}


// Ghidra: bool __thiscall ShipClass::canBeDockedWith(ShipClass *this)
bool ShipClass::canBeDockedWith()

{
  int iVar1;
  
  iVar1 = *(int *)((char *)this + 0x158);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    return false;
  }
  return true;
}
