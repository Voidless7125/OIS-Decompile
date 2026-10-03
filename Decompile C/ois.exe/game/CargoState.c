#include "../ois.exe.h"


// public: void __thiscall CargoState::setState(void)

void __thiscall CargoState::setState(CargoState *this)

{
  AnimationFrames **ppAVar1;
  CargoState *this_00;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  CargoState *local_c [2];
  
  uVar3 = 0;
  puVar4 = *(undefined4 **)this;
  uVar2 = (*(int *)(this + 4) - (int)puVar4) + 3U >> 2;
  if (*(undefined4 **)(this + 4) < puVar4) {
    uVar2 = 0;
  }
  local_c[0] = this;
  if (uVar2 != 0) {
    do {
      operator_delete((void *)*puVar4,(nothrow_t *)0x8);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar2);
    puVar4 = *(undefined4 **)local_c[0];
  }
  this_00 = local_c[0];
  *(undefined4 **)(local_c[0] + 4) = puVar4;
  uVar2 = 0;
  if (*(int *)(*(int *)(*(int *)(local_c[0] + 0xc) + 0x1f8) + 0x48) -
      *(int *)(*(int *)(*(int *)(local_c[0] + 0xc) + 0x1f8) + 0x44) >> 2 != 0) {
    do {
      local_c[0] = operator_new(8);
      *(undefined8 *)local_c[0] = 0;
      *(undefined4 *)local_c[0] =
           **(undefined4 **)
             (*(int *)(*(int *)(*(int *)(*(int *)(this_00 + 0xc) + 0x1f8) + 0x44) + uVar2 * 4) + 4);
      *(undefined4 *)(local_c[0] + 4) =
           **(undefined4 **)(*(int *)(*(int *)(*(int *)(this_00 + 0xc) + 0x1f8) + 0x44) + uVar2 * 4)
      ;
      ppAVar1 = *(AnimationFrames ***)(this_00 + 4);
      if (*(AnimationFrames ***)(this_00 + 8) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)this_00,ppAVar1,(AnimationFrames **)local_c);
      }
      else {
        *ppAVar1 = (AnimationFrames *)local_c[0];
        *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(*(int *)(*(int *)(this_00 + 0xc) + 0x1f8) + 0x48) -
                            *(int *)(*(int *)(*(int *)(this_00 + 0xc) + 0x1f8) + 0x44) >> 2));
  }
  return;
}
