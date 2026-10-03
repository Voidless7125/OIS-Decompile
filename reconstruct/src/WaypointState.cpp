// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall WaypointState::setState(WaypointState *this)
void WaypointState::setState()

{
  int iVar1;
  Vec2 *pVVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  *(undefined4 *)((char *)this + 4) = *(undefined4 *)this;
  iVar1 = *(int *)(*(int *)((char *)this + 0xc) + 0x1c8);
  for (iVar3 = *(int *)(*(int *)((char *)this + 0xc) + 0x1c4); iVar3 != iVar1; iVar3 = iVar3 + 0x20) {
    local_10 = *(undefined4 *)(iVar3 + 0x14);
    local_1c = *(undefined4 *)(iVar3 + 8);
    local_18 = *(undefined4 *)(iVar3 + 0xc);
    local_14 = *(undefined4 *)(iVar3 + 0x10);
    local_c = *(undefined1 *)(iVar3 + 0x18);
    local_8 = *(undefined4 *)(iVar3 + 0x1c);
    pVVar2 = *(Vec2 **)((char *)this + 4);
    if (*(Vec2 **)((char *)this + 8) == pVVar2) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)this,pVVar2,(Vec2 *)&local_1c);
    }
    else {
      *(undefined4 *)pVVar2 = local_1c;
      *(undefined4 *)(pVVar2 + 4) = local_18;
      *(Vec2 **)((char *)this + 4) = pVVar2 + 8;
    }
  }
  return;
}


// Ghidra: bool __thiscall WaypointState::checkState(WaypointState *this)
bool WaypointState::checkState()

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  
  pfVar3 = *(float **)this;
  iVar1 = *(int *)(*(int *)((char *)this + 0xc) + 0x1c4);
  uVar5 = *(int *)(*(int *)((char *)this + 0xc) + 0x1c8) - iVar1 >> 5;
  if (uVar5 == *(int *)((char *)this + 4) - (int)pfVar3 >> 3) {
    uVar4 = 0;
    if (uVar5 != 0) {
      pfVar2 = (float *)(iVar1 + 8);
      do {
        if ((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) goto LAB_00421e37;
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + 2;
        pfVar2 = pfVar2 + 8;
      } while (uVar4 < uVar5);
    }
    return false;
  }
LAB_00421e37:
  setState(this);
  return true;
}
