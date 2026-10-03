// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Room * __thiscall Structure::getRoom(Structure *this,int param_1)
Room * Structure::getRoom(int param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  Room *pRVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this_ + 0x1c) - *(int *)((char *)this_ + 0x18) >> 2;
  if (uVar3 != 0) {
    do {
      pRVar1 = *(Room **)(*(int *)((char *)this_ + 0x18) + uVar2 * 4);
      if (*(int *)(pRVar1 + 0x1c) == param_1) {
        return pRVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  if (0xf < *(uint *)((char *)this_ + 0x14)) {
    this_ = *(Structure **)this_;
  }
  debugPrint("ERROR","Unknown room %d in structure %s",param_1,this_);
  return (Room *)0x0;
}
