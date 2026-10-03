#include "../ois.exe.h"


// public: class Room * __thiscall Structure::getRoom(int)

Room * __thiscall Structure::getRoom(Structure *this,int param_1)

{
  Room *pRVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x1c) - *(int *)(this + 0x18) >> 2;
  if (uVar3 != 0) {
    do {
      pRVar1 = *(Room **)(*(int *)(this + 0x18) + uVar2 * 4);
      if (*(int *)(pRVar1 + 0x1c) == param_1) {
        return pRVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  if (0xf < *(uint *)(this + 0x14)) {
    this = *(Structure **)this;
  }
  debugPrint("ERROR","Unknown room %d in structure %s",param_1,this);
  return (Room *)0x0;
}
