#include "../ois.exe.h"


// public: __thiscall PathContext::~PathContext(void)

void __thiscall PathContext::~PathContext(PathContext *this)

{
  PathContext *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  reset(this);
  operator_delete__(*(void **)(this + 0x20));
  std::_Tree<>::erase((_Tree<> *)(this + 0x14),&local_14,**(undefined4 **)(this + 0x14),
                      *(undefined4 **)(this + 0x14));
  operator_delete(*(void **)(this + 0x14),(nothrow_t *)0x14);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall PathContext::reset(void)

void __thiscall PathContext::reset(PathContext *this)

{
  MetaGameAction **ppMVar1;
  Pather *pPVar2;
  int iVar3;
  MetaGameAction *local_8;
  
  local_8 = (MetaGameAction *)this;
  std::_Tree<>::clear((_Tree<> *)(this + 0x14));
  if (*(int *)(this + 0x20) == 0) {
    *(undefined4 *)(this + 0x1c) = 0;
    return;
  }
  iVar3 = 0;
  pPVar2 = Singleton<Pather>::getInstance();
  if (0 < *(int *)(pPVar2 + 0x74)) {
    do {
      if (*(int *)(*(int *)(this + 0x20) + iVar3 * 4) != 0) {
        pPVar2 = Singleton<Pather>::getInstance();
        local_8 = *(MetaGameAction **)(*(int *)(this + 0x20) + iVar3 * 4);
        if (local_8 != (MetaGameAction *)0x0) {
          ppMVar1 = *(MetaGameAction ***)(pPVar2 + 0x88);
          if (*(MetaGameAction ***)(pPVar2 + 0x8c) == ppMVar1) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)(pPVar2 + 0x84),ppMVar1,&local_8);
          }
          else {
            *ppMVar1 = local_8;
            *(int *)(pPVar2 + 0x88) = *(int *)(pPVar2 + 0x88) + 4;
          }
        }
        *(undefined4 *)(*(int *)(this + 0x20) + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
      pPVar2 = Singleton<Pather>::getInstance();
    } while (iVar3 < *(int *)(pPVar2 + 0x74));
    *(undefined4 *)(this + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}
