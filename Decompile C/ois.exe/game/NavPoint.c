#include "../ois.exe.h"


// public: void __thiscall NavPoint::removeAdjacentNavpoint(int)

void __thiscall NavPoint::removeAdjacentNavpoint(NavPoint *this,int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar1 = *(void **)(this + 0x2c);
  puVar4 = (undefined4 *)std::remove<>(*(undefined4 *)(this + 0x28),pvVar1);
  pvVar2 = (void *)*puVar4;
  if (pvVar2 != pvVar1) {
    iVar3 = *(int *)(this + 0x2c);
    memmove(pvVar2,pvVar1,iVar3 - (int)pvVar1);
    *(int *)(this + 0x2c) = (iVar3 - (int)pvVar1) + (int)pvVar2;
  }
  return;
}
