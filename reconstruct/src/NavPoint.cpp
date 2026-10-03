// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall NavPoint::removeAdjacentNavpoint(NavPoint *this,int param_1)
void NavPoint::removeAdjacentNavpoint(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar1 = *(void **)((char *)this + 0x2c);
  puVar4 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0x28),pvVar1);
  pvVar2 = (void *)*puVar4;
  if (pvVar2 != pvVar1) {
    iVar3 = *(int *)((char *)this + 0x2c);
    memmove(pvVar2,pvVar1,iVar3 - (int)pvVar1);
    *(int *)((char *)this + 0x2c) = (iVar3 - (int)pvVar1) + (int)pvVar2;
  }
  return;
}
