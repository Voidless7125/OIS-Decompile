#include "../ois.exe.h"


// public: __thiscall Pool<class PathNode>::~Pool<class PathNode>(void)

void __thiscall Pool<PathNode>::~Pool<PathNode>(Pool<PathNode> *this)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  nothrow_t *pnVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar5 = *(undefined4 **)this;
  uVar3 = (*(int *)(this + 4) - (int)puVar5) + 3U >> 2;
  if (*(undefined4 **)(this + 4) < puVar5) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      operator_delete((void *)*puVar5,(nothrow_t *)0x18);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != uVar3);
    puVar5 = *(undefined4 **)this;
  }
  *(undefined4 **)(this + 4) = puVar5;
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar4);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class PathNode * __thiscall Pool<class PathNode>::TakeObject(void)

PathNode * __thiscall Pool<PathNode>::TakeObject(Pool<PathNode> *this)

{
  MetaGameAction **ppMVar1;
  PathNode *pPVar2;
  uint uVar3;
  uint uVar4;
  MetaGameAction *local_8;
  
  if (*(int *)this == *(int *)(this + 4)) {
    debugPrint("DETAIL","POOL: insufficient objects in pool");
    if (this[0xc] != (Pool<PathNode>)0x0) {
      return (PathNode *)0x0;
    }
    debugPrint("DETAIL","POOL: doubling capacity, consider increasing the default capacity");
    uVar4 = *(uint *)(this + 0x10);
    uVar3 = uVar4 * 2;
    *(uint *)(this + 0x10) = uVar3;
    if ((uint)(*(int *)(this + 8) - *(int *)this >> 2) < uVar3) {
      if (0x3fffffff < uVar3) {
                    // WARNING: Subroutine does not return
        std::vector<>::_Xlength();
      }
      std::vector<>::_Reallocate_exactly((vector<> *)this,uVar3);
      uVar3 = *(uint *)(this + 0x10);
    }
    if (uVar4 < uVar3) {
      do {
        local_8 = operator_new(0x18);
        *(undefined4 *)local_8 = 0;
        *(undefined4 *)(local_8 + 4) = 0;
        *(undefined4 *)(local_8 + 8) = 0;
        *(undefined4 *)(local_8 + 0xc) = 0;
        *(undefined8 *)(local_8 + 0x10) = 0;
        ppMVar1 = *(MetaGameAction ***)(this + 4);
        if (*(MetaGameAction ***)(this + 8) == ppMVar1) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)this,ppMVar1,&local_8);
        }
        else {
          *ppMVar1 = local_8;
          *(int *)(this + 4) = *(int *)(this + 4) + 4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(this + 0x10));
    }
  }
  pPVar2 = *(PathNode **)(*(int *)(this + 4) + -4);
  *(int *)(this + 4) = *(int *)(this + 4) + -4;
  *(undefined4 *)(pPVar2 + 8) = 0;
  *(undefined4 *)(pPVar2 + 0xc) = 0;
  *(undefined4 *)(pPVar2 + 0x10) = 0;
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x14) = 0;
  return pPVar2;
}
