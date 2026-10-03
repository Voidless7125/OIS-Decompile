// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall WeaponState::checkState(WeaponState *this)
bool WeaponState::checkState()

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  std::string *pbVar6;
  std::string *pbVar7;
  uint unaff_ESI;
  char *unaff_EDI;
  int iVar8;
  char *local_8;
  
  bVar4 = false;
  iVar8 = *(int *)((char *)this + 4);
  pbVar7 = (std::string *)((char *)this + 0xc);
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 0x254);
    pbVar6 = (std::string *)(iVar1 + 0x60);
    if (0xf < *(uint *)((char *)this + 0x20)) {
      pbVar7 = *(std::string **)pbVar7;
    }
    uVar2 = *(uint *)(iVar1 + 0x70);
    bVar5 = ghidra::lib::_Traits_equal___x28_x29((char *)pbVar7,*(uint *)((char *)this + 0x1c),unaff_EDI,unaff_ESI);
    if (!bVar5) {
      if ((std::string *)((char *)this + 0xc) != pbVar6) {
        if (0xf < *(uint *)(iVar1 + 0x74)) {
          pbVar6 = *(std::string **)pbVar6;
        }
        ghidra::str::assign((std::string *)((char *)this + 0xc),(char *)pbVar6,uVar2);
        iVar8 = *(int *)((char *)this + 4);
      }
      bVar4 = true;
    }
    if (*(float *)((char *)this + 0x6c) != *(float *)(iVar8 + 0x41c)) {
      *(float *)((char *)this + 0x6c) = *(float *)(iVar8 + 0x41c);
      bVar4 = true;
    }
    if ((*(float *)((char *)this + 0x24) != *(float *)(iVar8 + 0x390)) ||
       (*(float *)((char *)this + 0x28) != *(float *)(iVar8 + 0x394))) {
      bVar4 = true;
      *(undefined4 *)((char *)this + 0x24) = *(undefined4 *)(iVar8 + 0x390);
      *(undefined4 *)((char *)this + 0x28) = *(undefined4 *)(iVar8 + 0x394);
    }
    uVar2 = *(uint *)(iVar8 + 0x414);
    local_8 = (char *)(iVar8 + 0x400);
    if (0xf < uVar2) {
      local_8 = *(char **)local_8;
    }
    uVar3 = *(uint *)(iVar8 + 0x410);
    bVar5 = ghidra::lib::_Traits_equal___x28_x29(local_8,uVar3,unaff_EDI,unaff_ESI);
    if (!bVar5) {
      pbVar7 = (std::string *)(iVar8 + 0x400);
      if ((std::string *)((char *)this + 0x2c) != pbVar7) {
        if (0xf < uVar2) {
          pbVar7 = *(std::string **)pbVar7;
        }
        ghidra::str::assign((std::string *)((char *)this + 0x2c),(char *)pbVar7,uVar3);
        iVar8 = *(int *)((char *)this + 4);
      }
      bVar4 = true;
    }
    uVar2 = *(uint *)(iVar8 + 0x3b4);
    local_8 = (char *)(iVar8 + 0x3a0);
    if (0xf < uVar2) {
      local_8 = *(char **)local_8;
    }
    uVar3 = *(uint *)(iVar8 + 0x3b0);
    bVar5 = ghidra::lib::_Traits_equal___x28_x29(local_8,uVar3,unaff_EDI,unaff_ESI);
    if (!bVar5) {
      pbVar7 = (std::string *)(iVar8 + 0x3a0);
      if ((std::string *)((char *)this + 0x44) != pbVar7) {
        if (0xf < uVar2) {
          pbVar7 = *(std::string **)pbVar7;
        }
        ghidra::str::assign((std::string *)((char *)this + 0x44),(char *)pbVar7,uVar3);
        iVar8 = *(int *)((char *)this + 4);
      }
      bVar4 = true;
    }
    if (*(int *)((char *)this + 0x60) != *(int *)(iVar8 + 0x3b8)) {
      *(int *)((char *)this + 0x60) = *(int *)(iVar8 + 0x3b8);
      bVar4 = true;
    }
    if (*(int *)((char *)this + 0x5c) != *(int *)(iVar8 + 0x3d0)) {
      *(int *)((char *)this + 0x5c) = *(int *)(iVar8 + 0x3d0);
      bVar4 = true;
    }
    if (((char *)this)[100] != *(WeaponState *)(iVar8 + 0x3bc)) {
      ((char *)this)[100] = *(WeaponState *)(iVar8 + 0x3bc);
      bVar4 = true;
    }
    if (*(float *)((char *)this + 0x68) != *(float *)(iVar8 + 0x3c0)) {
      *(float *)((char *)this + 0x68) = *(float *)(iVar8 + 0x3c0);
      bVar4 = true;
    }
    if (((char *)this)[0x70] != *(WeaponState *)(iVar8 + 0x3c4)) {
      ((char *)this)[0x70] = *(WeaponState *)(iVar8 + 0x3c4);
      bVar4 = true;
    }
    if (((char *)this)[0x71] != *(WeaponState *)(iVar8 + 0x3c5)) {
      ((char *)this)[0x71] = *(WeaponState *)(iVar8 + 0x3c5);
      bVar4 = true;
    }
    if (((char *)this)[0x72] != *(WeaponState *)(iVar8 + 0x3fc)) {
      ((char *)this)[0x72] = *(WeaponState *)(iVar8 + 0x3fc);
      bVar4 = true;
    }
    if (*(float *)((char *)this + 0x74) != *(float *)(iVar8 + 0x418)) {
      *(float *)((char *)this + 0x74) = *(float *)(iVar8 + 0x418);
      bVar4 = true;
    }
    if (*(int *)((char *)this + 0x78) != *(int *)(iVar8 + 0x420)) {
      *(int *)((char *)this + 0x78) = *(int *)(iVar8 + 0x420);
      bVar4 = true;
    }
    return bVar4;
  }
  bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_EDI,unaff_ESI);
  if (!bVar4) {
    ghidra::str::assign(pbVar7,"",0);
    return true;
  }
  return false;
}
