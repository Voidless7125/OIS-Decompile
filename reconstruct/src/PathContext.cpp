// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall PathContext::~PathContext(PathContext *this)
PathContext::~PathContext()

{
  PathContext *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9130;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_14 = this;
  reset(this);
  operator_delete__(*(void **)((char *)this + 0x20));
  ghidra::lib::_Tree__erase((ghidra::lib::_Tree_t *)((char *)this + 0x14),&local_14,**(undefined4 **)((char *)this + 0x14),
                      *(undefined4 **)((char *)this + 0x14));
  operator_delete(*(void **)((char *)this + 0x14),(nothrow_t *)0x14);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall PathContext::reset(PathContext *this)
void PathContext::reset()

{
  MetaGameAction **ppMVar1;
  Pather *pPVar2;
  int iVar3;
  MetaGameAction *local_8;
  
  local_8 = (MetaGameAction *)this;
  ghidra::lib::_Tree__clear((ghidra::lib::_Tree_t *)((char *)this + 0x14));
  if (*(int *)((char *)this + 0x20) == 0) {
    *(undefined4 *)((char *)this + 0x1c) = 0;
    return;
  }
  iVar3 = 0;
  pPVar2 = Singleton<Pather>::getInstance();
  if (0 < *(int *)(pPVar2 + 0x74)) {
    do {
      if (*(int *)(*(int *)((char *)this + 0x20) + iVar3 * 4) != 0) {
        pPVar2 = Singleton<Pather>::getInstance();
        local_8 = *(MetaGameAction **)(*(int *)((char *)this + 0x20) + iVar3 * 4);
        if (local_8 != (MetaGameAction *)0x0) {
          ppMVar1 = *(MetaGameAction ***)(pPVar2 + 0x88);
          if (*(MetaGameAction ***)(pPVar2 + 0x8c) == ppMVar1) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pPVar2 + 0x84),ppMVar1,&local_8);
          }
          else {
            *ppMVar1 = local_8;
            *(int *)(pPVar2 + 0x88) = *(int *)(pPVar2 + 0x88) + 4;
          }
        }
        *(undefined4 *)(*(int *)((char *)this + 0x20) + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
      pPVar2 = Singleton<Pather>::getInstance();
    } while (iVar3 < *(int *)(pPVar2 + 0x74));
    *(undefined4 *)((char *)this + 0x1c) = 0;
    return;
  }
  *(undefined4 *)((char *)this + 0x1c) = 0;
  return;
}
