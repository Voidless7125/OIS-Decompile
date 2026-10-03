// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Pather * __thiscall Pather::Pather(Pather *this)
Pather::Pather()

{
  ghidra::vector *pvVar1;
  MetaGameAction *pMVar2;
  MetaGameAction **ppMVar3;
  Pather *pPVar4;
  Pather *pPVar5;
  ghidra::lib::_Tree_node_t *p_Var6;
  int iVar7;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  Pather *this_01;
  uint uVar8;
  MetaGameAction *local_18;
  Pather *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ccc05;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pvVar1 = (ghidra::vector *)((char *)this + 4);
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)pvVar1 = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined4 *)((char *)this + 0xc) = 0;
  // [seh] local_8 = 0;
  iVar7 = 0x20;
  ((char *)this)[0x10] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x14) = 0x20;
  local_14 = this;
  if ((uint)(*(int *)((char *)this + 0xc) - *(int *)pvVar1 >> 2) < 0x20) {
    ghidra::lib::vector___Reallocate_exactly(pvVar1,0x20);
    iVar7 = *(int *)((char *)this + 0x14);
  }
  uVar8 = 0;
  if (iVar7 != 0) {
    do {
      local_18 = operator_new(0x18);
      *(undefined4 *)local_18 = 0;
      *(undefined4 *)(local_18 + 4) = 0;
      *(undefined4 *)(local_18 + 8) = 0;
      *(undefined4 *)(local_18 + 0xc) = 0;
      *(undefined8 *)(local_18 + 0x10) = 0;
      ppMVar3 = *(MetaGameAction ***)((char *)this + 8);
      if (*(MetaGameAction ***)((char *)this + 0xc) == ppMVar3) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)pvVar1,ppMVar3,&local_18);
      }
      else {
        *ppMVar3 = local_18;
        *(int *)((char *)this + 8) = *(int *)((char *)this + 8) + 4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((char *)this + 0x14));
  }
  pPVar4 = local_14;
  // [seh] local_8 = 1;
  this_01 = local_14 + 0x18;
  _eh_vector_constructor_iterator_(this_01,0xc,4,std::vector<>::ghidra::vector,std::vector<>::~ghidra::vector);
  // [seh] local_8._0_1_ = 2;
  *(undefined4 *)(pPVar4 + 0x48) = 0;
  *(undefined4 *)(pPVar4 + 0x4c) = 0;
  pMVar2 = (MetaGameAction *)(pPVar4 + 100);
  *(undefined4 *)(pPVar4 + 0x50) = 0;
  *(undefined4 *)(pPVar4 + 0x54) = 0;
  *(undefined4 *)(pPVar4 + 0x58) = 0;
  *(undefined4 *)(pPVar4 + 0x5c) = 0;
  *(undefined4 *)pMVar2 = 0;
  *(undefined4 *)(pPVar4 + 0x68) = 0;
  local_18 = pMVar2;
  p_Var6 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  pPVar5 = local_14;
  *(ghidra::lib::_Tree_node_t **)pMVar2 = p_Var6;
  *(undefined4 *)(pPVar4 + 0x6c) = 0;
  *(undefined4 *)(pPVar4 + 0x70) = 0;
  *(undefined4 *)(local_14 + 0x74) = 0;
  *(undefined4 *)(local_14 + 0x78) = 0;
  *(undefined4 *)(local_14 + 0x7c) = 0;
  *(undefined4 *)(local_14 + 0x80) = 0;
  pvVar1 = (ghidra::vector *)(local_14 + 0x84);
  *(undefined4 *)pvVar1 = 0;
  *(undefined4 *)(local_14 + 0x88) = 0;
  *(undefined4 *)(local_14 + 0x8c) = 0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,5);
  iVar7 = 0x400;
  local_14[0x90] = (byte)0x0;
  *(undefined4 *)(local_14 + 0x94) = 0x400;
  if ((uint)(*(int *)(local_14 + 0x8c) - *(int *)pvVar1 >> 2) < 0x400) {
    ghidra::lib::vector___Reallocate_exactly(pvVar1,0x400);
    iVar7 = *(int *)(pPVar5 + 0x94);
  }
  uVar8 = 0;
  if (iVar7 != 0) {
    do {
      local_18 = operator_new(0x18);
      *(undefined4 *)local_18 = 0;
      *(undefined4 *)(local_18 + 4) = 0;
      *(undefined4 *)(local_18 + 8) = 0;
      *(undefined4 *)(local_18 + 0xc) = 0;
      *(undefined8 *)(local_18 + 0x10) = 0;
      ppMVar3 = *(MetaGameAction ***)(pPVar5 + 0x88);
      if (*(MetaGameAction ***)(pPVar5 + 0x8c) == ppMVar3) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)pvVar1,ppMVar3,&local_18);
      }
      else {
        *ppMVar3 = local_18;
        *(int *)(pPVar5 + 0x88) = *(int *)(pPVar5 + 0x88) + 4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(pPVar5 + 0x94));
  }
  // [seh] local_8 = CONCAT31(local_8._1_3_,6);
  uVar8 = 0;
  do {
    if ((uint)(*(int *)(this_01 + 8) - *(int *)this_01 >> 2) < 0x10) {
      ghidra::lib::vector___Reallocate_exactly((ghidra::vector *)this_01,0x10);
    }
    uVar8 = uVar8 + 1;
    this_01 = this_01 + 0xc;
  } while (uVar8 < 4);
  // [seh] ExceptionList = local_10;
  return local_14;
}


// Ghidra: void __thiscall Pather::runLogic(Pather *this,float param_1)
void Pather::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  Pather *pPVar2;
  void *pvVar3;
  undefined4 *puVar4;
  PathNode *pPVar5;
  int *piVar6;
  undefined1 uVar7;
  undefined1 extraout_CL;
  Pather *extraout_ECX;
  Pather *extraout_ECX_00;
  Pather *extraout_ECX_01;
  int iVar8;
  undefined1 local_34 [4];
  Pather *local_30;
  Pather *local_2c;
  Pather *local_28;
  Pather *local_24;
  PathNode *local_20;
  int local_1c;
  int local_18;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ccc88;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x48) = 0;
  pPVar2 = this;
  do {
    uVar7 = SUB41(pPVar2,0);
    if (*(int *)((char *)this + 0x4c) == 0) {
      iVar8 = 0;
      pPVar2 = this + 0x18;
      do {
        if (*(int *)pPVar2 != *(int *)(pPVar2 + 4)) {
          pPVar2 = this + (iVar8 + 2) * 0xc;
          *(undefined4 *)((char *)this + 0x4c) = **(undefined4 **)pPVar2;
          pvVar3 = (void *)((int)*(void **)pPVar2 + 4);
          memmove(*(void **)pPVar2,pvVar3,*(int *)(pPVar2 + 4) - (int)pvVar3);
          *(int *)(pPVar2 + 4) = *(int *)(pPVar2 + 4) + -4;
          iVar8 = *(int *)((char *)this + 0x4c);
          goto LAB_00591700;
        }
        iVar8 = iVar8 + 1;
        pPVar2 = pPVar2 + 0xc;
      } while (iVar8 < 4);
      iVar8 = 0;
LAB_00591700:
      *(int *)((char *)this + 0x4c) = iVar8;
      if (iVar8 == 0) {
        // [seh] ExceptionList = local_10;
        return;
      }
      ((PathContext *)((char *)this + 0x50))->reset();
      piVar6 = *(int **)((char *)this + 0x4c);
      local_20 = (PathNode *)piVar6[2];
      local_14 = *piVar6;
      local_1c = piVar6[3];
      local_18 = piVar6[1];
      pPVar2 = Singleton<Pather>::instance;
      if (*(int *)((char *)this + 0x70) == 0) {
        if (Singleton<Pather>::instance == (Pather *)0x0) {
          local_24 = operator_new(0x98);
          // [seh] local_8 = 0;
          Singleton<Pather>::instance = (Pather *)Pather(local_24);
          // [seh] local_8 = 0xffffffff;
        }
        debugPrint("DETAIL","Allocating %lu space for states",
                   *(int *)(Singleton<Pather>::instance + 0x74) << 2,uVar1);
        if (Singleton<Pather>::instance == (Pather *)0x0) {
          local_28 = operator_new(0x98);
          // [seh] local_8 = 1;
          Singleton<Pather>::instance = (Pather *)Pather(local_28);
          // [seh] local_8 = 0xffffffff;
        }
        pvVar3 = operator_new__(-(uint)((int)((ulonglong)
                                              *(uint *)(Singleton<Pather>::instance + 0x74) * 4 >>
                                             0x20) != 0) |
                                (uint)((ulonglong)*(uint *)(Singleton<Pather>::instance + 0x74) * 4)
                               );
        pPVar2 = Singleton<Pather>::instance;
        *(void **)((char *)this + 0x70) = pvVar3;
        iVar8 = 0;
        while( true ) {
          if (pPVar2 == (Pather *)0x0) {
            local_2c = operator_new(0x98);
            // [seh] local_8 = 2;
            pPVar2 = (Pather *)Pather(local_2c);
            // [seh] local_8 = 0xffffffff;
            Singleton<Pather>::instance = pPVar2;
          }
          if (*(int *)(pPVar2 + 0x74) <= iVar8) break;
          *(undefined4 *)(*(int *)((char *)this + 0x70) + iVar8 * 4) = 0;
          iVar8 = iVar8 + 1;
        }
      }
      iVar8 = local_14;
      *(int *)((char *)this + 0x54) = local_18;
      *(int *)((char *)this + 0x58) = local_1c;
      *(int *)((char *)this + 0x50) = local_14;
      *(PathNode **)((char *)this + 0x5c) = local_20;
      if (pPVar2 == (Pather *)0x0) {
        local_30 = operator_new(0x98);
        // [seh] local_8 = 3;
        pPVar2 = (Pather *)Pather(local_30);
        // [seh] local_8 = 0xffffffff;
        Singleton<Pather>::instance = pPVar2;
      }
      local_20 = Pool<PathNode>::TakeObject((Pool<PathNode> *)(pPVar2 + 0x84));
      *(int *)(local_20 + 4) = iVar8;
      *(undefined4 *)(local_20 + 0x14) = 1;
      *(PathNode **)(*(int *)((char *)this + 0x70) + iVar8 * 4) = local_20;
      ghidra::lib::_Tree___Insert_hint
                ((ghidra::lib::_Tree_t *)((char *)this + 100),local_34,*(undefined4 *)((char *)this + 100),&local_20,local_30);
      *(undefined4 *)((char *)this + 0x60) = 0;
      puVar4 = (undefined4 *)(*(int *)(*(int *)((char *)this + 0x4c) + 0x14) + 8);
      if (0xf < *(uint *)(*(int *)(*(int *)((char *)this + 0x4c) + 0x14) + 0x1c)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      debugPrint("DETAIL","Pather: taking next request off the queue, it\'s for %s.",puVar4);
      uVar7 = extraout_CL;
      if (*(int *)((char *)this + 0x4c) == 0) {
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    pPVar5 = calculatePath(this,(PathContext *)((char *)this + 0x50),1000 - *(int *)((char *)this + 0x48),
                           (bool)uVar7);
    if (pPVar5 == (PathNode *)0x0) {
      pPVar2 = extraout_ECX;
      if (*(int *)((char *)this + 0x68) == 0) {
        puVar4 = (undefined4 *)(*(int *)(*(int *)((char *)this + 0x4c) + 0x14) + 8);
        if (0xf < *(uint *)(*(int *)(*(int *)((char *)this + 0x4c) + 0x14) + 0x1c)) {
          puVar4 = (undefined4 *)*puVar4;
        }
        debugPrint("DETAIL","Pather: No valid path, sending failed() on to %s",puVar4,uVar1);
        iVar8 = *(int *)(*(int *)((char *)this + 0x4c) + 0x14);
        piVar6 = (int *)(iVar8 + 8);
        if (0xf < *(uint *)(iVar8 + 0x1c)) {
          piVar6 = (int *)*piVar6;
        }
        debugPrint("GAME","%s: path failed.",piVar6,uVar1);
        *(undefined4 *)(iVar8 + 0x2f0) = 0;
        *(undefined1 *)(iVar8 + 0x2ec) = 0;
        pPVar2 = extraout_ECX_01;
        goto LAB_0059198c;
      }
    }
    else {
      puVar4 = (undefined4 *)(*(int *)(*(int *)((char *)this + 0x4c) + 0x14) + 8);
      if (0xf < *(uint *)(*(int *)(*(int *)((char *)this + 0x4c) + 0x14) + 0x1c)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      debugPrint("DETAIL","Pather: Finished a path, passing that on to %s",puVar4,uVar1);
      (*(Ship **)(*(int *)((char *)this + 0x4c) + 0x14))->pathComplete(pPVar5);
      pPVar2 = extraout_ECX_00;
LAB_0059198c:
      *(undefined4 *)(*(int *)((char *)this + 0x4c) + 0x14) = 0;
      *(undefined4 *)((char *)this + 0x4c) = 0;
    }
    if (999 < *(uint *)((char *)this + 0x48)) {
      // [seh] ExceptionList = local_10;
      return;
    }
  } while( true );
}


// Ghidra: void __thiscall Pather::resetSector(Pather *this)
void Pather::resetSector()

{
  void *pvVar1;
  Pather *pPVar2;
  int iVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cccc2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x70) != 0) {
    iVar3 = 0;
    pPVar2 = Singleton<Pather>::instance;
    while( true ) {
      if (pPVar2 == (Pather *)0x0) {
        pPVar2 = operator_new(0x98);
        // [seh] local_8 = 0;
        pPVar2 = (Pather *)Pather(pPVar2);
        // [seh] local_8 = 0xffffffff;
        Singleton<Pather>::instance = pPVar2;
      }
      if (*(int *)(pPVar2 + 0x74) <= iVar3) break;
      pvVar1 = *(void **)(*(int *)((char *)this + 0x70) + iVar3 * 4);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,(nothrow_t *)0x18);
        *(undefined4 *)(*(int *)((char *)this + 0x70) + iVar3 * 4) = 0;
        pPVar2 = Singleton<Pather>::instance;
      }
      iVar3 = iVar3 + 1;
    }
    *(undefined4 *)((char *)this + 0x70) = 0;
  }
  *(undefined4 *)((char *)this + 0x7c) = *(undefined4 *)((char *)this + 0x78);
  *(undefined4 *)((char *)this + 0x1c) = *(undefined4 *)((char *)this + 0x18);
  *(undefined4 *)((char *)this + 0x28) = *(undefined4 *)((char *)this + 0x24);
  *(undefined4 *)((char *)this + 0x34) = *(undefined4 *)((char *)this + 0x30);
  *(undefined4 *)((char *)this + 0x40) = *(undefined4 *)((char *)this + 0x3c);
  *(undefined4 *)((char *)this + 0x4c) = 0;
  ((PathContext *)((char *)this + 0x50))->reset();
  *(int *)((char *)this + 0x74) =
       *(int *)(*(int *)(g_gameData + 0xd8) + 0xac) - *(int *)(*(int *)(g_gameData + 0xd8) + 0xa8)
       >> 2;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: PathNode * __thiscall Pather::calculatePath(Pather *this,PathContext *param_1,uint param_2,bool param_3)
PathNode * Pather::calculatePath(PathContext * param_1, uint param_2, bool param_3)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  int *piVar2;
  MetaGameAction **ppMVar3;
  bool bVar4;
  int iVar5;
  GameData *pGVar6;
  ghidra::lib::_Tree_node_t *p_Var7;
  MetaGameAction *pMVar8;
  Pather *pPVar9;
  int iVar10;
  PathNode *pPVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  Pather *pPVar19;
  float fVar20;
  undefined1 local_4c [8];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  Pather *local_3c;
  Pather *local_38;
  PathNode *local_34;
  float local_30;
  uint local_2c;
  PathContext *local_28;
  MetaGameAction *local_24;
  Pather *local_20;
  uint local_1c;
  Pather *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ccd04;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_20 = this_;
  // [cookie] debugPrint("DETAIL","Pather: Calculating path.",___security_cookie ^ (uint)&stack0xfffffffc);
  if (*(int *)param_1 == *(int *)(param_1 + 4)) {
    // [seh] ExceptionList = local_10;
    return *(PathNode **)(**(int **)(param_1 + 0x14) + 0x10);
  }
  local_28 = param_1 + 0x14;
  local_2c = 0;
  iVar10 = *(int *)(param_1 + 0x18);
  while (iVar10 != 0) {
    iVar10 = **(int **)(param_1 + 0x14);
    iVar12 = *(int *)(iVar10 + 0x10);
    *(int *)(param_1 + 0x10) = iVar12;
    if (*(int *)(iVar12 + 4) == *(int *)(param_1 + 4)) {
      *(uint *)((char *)this_ + 0x48) = *(int *)((char *)this_ + 0x48) + local_2c;
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_2c;
      debugPrint("DETAIL","Pather: request completed in %u iterations",
                 *(undefined4 *)(param_1 + 0x1c));
      // [seh] ExceptionList = local_10;
      return *(PathNode **)(param_1 + 0x10);
    }
    if (*(char *)((int)*(int **)(iVar10 + 8) + 0xd) == '\0') {
      piVar2 = (int *)**(int **)(iVar10 + 8);
      cVar1 = *(char *)((int)piVar2 + 0xd);
      while (cVar1 == '\0') {
        piVar2 = (int *)*piVar2;
        cVar1 = *(char *)((int)piVar2 + 0xd);
      }
    }
    else {
      cVar1 = *(char *)(*(int *)(iVar10 + 4) + 0xd);
      iVar12 = iVar10;
      iVar5 = *(int *)(iVar10 + 4);
      while ((cVar1 == '\0' && (iVar12 == *(int *)(iVar5 + 8)))) {
        cVar1 = *(char *)(*(int *)(iVar5 + 4) + 0xd);
        iVar12 = iVar5;
        iVar5 = *(int *)(iVar5 + 4);
      }
    }
    p_Var7 = ghidra::lib::_Tree_val___Extract((ghidra::lib::_Tree_val_t *)(param_1 + 0x14),iVar10);
    operator_delete(p_Var7,(nothrow_t *)0x14);
    pPVar19 = this_ + 0x78;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 2;
    iVar10 = *(int *)pPVar19;
    *(int *)((char *)this_ + 0x7c) = iVar10;
    iVar12 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    if ((iVar12 < 0) || (*(int *)(local_20 + 0x74) <= iVar12)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_18 = pPVar19;
    if ((bVar4) &&
       (local_30 = *(float *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xa8) + iVar12 * 4),
       *(int *)((int)local_30 + 4) == 0)) {
      iVar12 = *(int *)((int)local_30 + 0x28);
      local_1c = 0;
      if (*(int *)((int)local_30 + 0x2c) - iVar12 >> 2 != 0) {
        do {
          pPVar19 = local_18;
          local_24 = (MetaGameAction *)0x0;
          puVar17 = *(undefined4 **)(*(int *)(g_gameData + 0xd8) + 0xa8);
          pMVar8 = (MetaGameAction *)
                   (*(int *)(*(int *)(g_gameData + 0xd8) + 0xac) - (int)puVar17 >> 2);
          if (pMVar8 != (MetaGameAction *)0x0) {
            do {
              if (*(int *)*puVar17 == *(int *)(iVar12 + local_1c * 4)) goto LAB_00591c61;
              local_24 = local_24 + 1;
              puVar17 = puVar17 + 1;
            } while (local_24 < pMVar8);
          }
          local_24 = (MetaGameAction *)0xffffffff;
LAB_00591c61:
          if (local_24 != (MetaGameAction *)0xffffffff) {
            ppMVar3 = *(MetaGameAction ***)(local_18 + 4);
            if (*(MetaGameAction ***)(local_18 + 8) == ppMVar3) {
              ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)local_18,ppMVar3,&local_24);
            }
            else {
              *ppMVar3 = local_24;
              *(int *)(local_18 + 4) = *(int *)(local_18 + 4) + 4;
            }
          }
          local_1c = local_1c + 1;
          iVar12 = *(int *)((int)local_30 + 0x28);
        } while (local_1c < (uint)(*(int *)((int)local_30 + 0x2c) - iVar12 >> 2));
        iVar10 = *(int *)(pPVar19 + 4);
      }
    }
    iVar12 = *(int *)pPVar19;
    local_1c = 0;
    pPVar9 = Singleton<Pather>::instance;
    if (iVar10 - iVar12 >> 2 != 0) {
      do {
        uVar16 = local_1c;
        iVar10 = *(int *)(iVar12 + local_1c * 4);
        if ((iVar10 < 0) || (*(int *)(local_20 + 0x74) <= iVar10)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (-1 < iVar10) {
            if (pPVar9 == (Pather *)0x0) {
              local_38 = operator_new(0x98);
              // [seh] local_8 = 0;
              pPVar9 = (Pather *)Pather(local_38);
              // [seh] local_8 = 0xffffffff;
              iVar12 = *(int *)pPVar19;
              Singleton<Pather>::instance = pPVar9;
            }
            pPVar19 = local_18;
            if (((iVar10 < *(int *)(pPVar9 + 0x74)) &&
                (iVar10 = *(int *)(*(int *)(param_1 + 0x20) + iVar10 * 4), iVar10 != 0)) &&
               (*(int *)(iVar10 + 0x14) == 2)) goto LAB_0059208b;
          }
          iVar10 = *(int *)(iVar12 + uVar16 * 4);
          if ((iVar10 < 0) || (*(int *)(local_20 + 0x74) <= iVar10)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            iVar10 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xa8) + iVar10 * 4);
            if (*(int *)(iVar10 + 4) == 0) {
              switch(*(undefined4 *)(param_1 + 0xc)) {
              case 0:
                iVar10 = *(int *)(iVar10 + 0x38);
                if (iVar10 == 0) goto switchD_00591d95_caseD_3;
                if (iVar10 == 5) {
                  fVar20 = 2.0;
                }
                else if (iVar10 == 1) {
                  fVar20 = 3.0;
                }
                else {
LAB_00591dcb:
                  if (iVar10 == 2) {
                    fVar20 = 50.0;
                  }
                  else if (iVar10 == 3) {
                    fVar20 = 50.0;
                  }
                  else {
                    if (iVar10 != 4) goto switchD_00591d95_caseD_3;
                    fVar20 = 100.0;
                  }
                }
                break;
              case 1:
                iVar10 = *(int *)(iVar10 + 0x38);
                if (iVar10 == 0) {
                  fVar20 = 2.0;
                }
                else {
                  if (iVar10 == 5) goto switchD_00591d95_caseD_3;
                  if (iVar10 != 1) goto LAB_00591dcb;
                  fVar20 = 2.0;
                }
                break;
              case 2:
                iVar10 = *(int *)(iVar10 + 0x38);
                if (iVar10 == 0) goto switchD_00591d95_caseD_3;
                if (iVar10 == 5) {
                  fVar20 = 2.0;
                }
                else if (iVar10 == 1) {
                  fVar20 = 3.0;
                }
                else if (iVar10 == 2) {
                  fVar20 = 3.0;
                }
                else if (iVar10 == 3) {
                  fVar20 = 3.0;
                }
                else {
                  if (iVar10 != 4) goto switchD_00591d95_caseD_3;
                  fVar20 = 3.0;
                }
                break;
              default:
switchD_00591d95_caseD_3:
                fVar20 = 1.0;
              }
            }
            else {
              fVar20 = 0.0;
            }
          }
          else {
            fVar20 = 0.0;
          }
          iVar10 = *(int *)(iVar12 + uVar16 * 4);
          local_24 = (MetaGameAction *)(*(float *)(*(int *)(param_1 + 0x10) + 8) + fVar20);
          if (-1 < iVar10) {
            if (pPVar9 == (Pather *)0x0) {
              local_3c = operator_new(0x98);
              // [seh] local_8 = 1;
              pPVar9 = (Pather *)Pather(local_3c);
              // [seh] local_8 = 0xffffffff;
              Singleton<Pather>::instance = pPVar9;
            }
            if (((iVar10 < *(int *)(pPVar9 + 0x74)) &&
                (pPVar11 = *(PathNode **)(*(int *)(param_1 + 0x20) + iVar10 * 4), uVar16 = local_1c,
                pPVar11 != (PathNode *)0x0)) && (*(int *)(pPVar11 + 0x14) == 1)) {
              local_34 = pPVar11;
              if ((float)local_24 < *(float *)(pPVar11 + 8)) {
                puVar17 = *(undefined4 **)local_28;
                puVar15 = (undefined4 *)puVar17[1];
                puVar18 = puVar17;
                if (*(char *)((int)puVar15 + 0xd) == '\0') {
                  puVar13 = puVar15;
                  do {
                    if (*(float *)(pPVar11 + 0x10) <= *(float *)(puVar13[4] + 0x10)) {
                      if ((*(char *)((int)puVar17 + 0xd) != '\0') &&
                         (*(float *)(pPVar11 + 0x10) < *(float *)(puVar13[4] + 0x10))) {
                        puVar17 = puVar13;
                      }
                      puVar14 = (undefined4 *)*puVar13;
                      puVar18 = puVar13;
                    }
                    else {
                      puVar14 = (undefined4 *)puVar13[2];
                    }
                    puVar13 = puVar14;
                  } while (*(char *)((int)puVar14 + 0xd) == '\0');
                }
                if (*(char *)((int)puVar17 + 0xd) == '\0') {
                  puVar15 = (undefined4 *)*puVar17;
                }
                puVar13 = puVar18;
                if (*(char *)((int)puVar15 + 0xd) == '\0') {
                  do {
                    if (*(float *)(puVar15[4] + 0x10) <= *(float *)(pPVar11 + 0x10)) {
                      puVar14 = (undefined4 *)puVar15[2];
                    }
                    else {
                      puVar14 = (undefined4 *)*puVar15;
                      puVar17 = puVar15;
                    }
                    puVar15 = puVar14;
                  } while (*(char *)((int)puVar14 + 0xd) == '\0');
                }
                while (puVar13 != puVar17) {
                  puVar15 = (undefined4 *)puVar13[2];
                  if (*(char *)((int)puVar15 + 0xd) == '\0') {
                    cVar1 = *(char *)((int)*puVar15 + 0xd);
                    puVar13 = puVar15;
                    puVar15 = (undefined4 *)*puVar15;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((int)*puVar15 + 0xd);
                      puVar13 = puVar15;
                      puVar15 = (undefined4 *)*puVar15;
                    }
                  }
                  else {
                    cVar1 = *(char *)((int)puVar13[1] + 0xd);
                    puVar14 = (undefined4 *)puVar13[1];
                    puVar15 = puVar13;
                    while ((puVar13 = puVar14, cVar1 == '\0' &&
                           (puVar15 == (undefined4 *)puVar13[2]))) {
                      cVar1 = *(char *)((int)puVar13[1] + 0xd);
                      puVar14 = (undefined4 *)puVar13[1];
                      puVar15 = puVar13;
                    }
                  }
                }
                ghidra::lib::_Tree__erase((ghidra::lib::_Tree_t *)local_28,local_40,puVar18,puVar17);
                pPVar19 = local_18;
                iVar10 = *(int *)(g_gameData + 0xd8);
                *(MetaGameAction **)(pPVar11 + 8) = local_24;
                local_30 = cocos2d::Vec2::getDistanceSq
                                     ((Vec2 *)(*(int *)(*(int *)(iVar10 + 0xa8) +
                                                       *(int *)(*(int *)local_18 + local_1c * 4) * 4
                                                       ) + 8),
                                      (Vec2 *)(*(int *)(*(int *)(iVar10 + 0xa8) +
                                                       *(int *)(param_1 + 4) * 4) + 8));
                local_24 = (MetaGameAction *)(0x5f3759df - ((uint)local_30 >> 1));
                fVar20 = (1.5 - local_30 * 0.5 * (float)local_24 * (float)local_24) *
                         (float)local_24 * local_30;
                *(float *)(pPVar11 + 0xc) = fVar20;
                *(float *)(pPVar11 + 0x10) = *(float *)(pPVar11 + 8) * fVar20;
                *(undefined4 *)pPVar11 = *(undefined4 *)(param_1 + 0x10);
                ghidra::lib::_Tree___Insert_nohint
                          ((ghidra::lib::_Tree_t *)(param_1 + 0x14),local_4c,0,&local_34,param_1);
                pPVar9 = Singleton<Pather>::instance;
                uVar16 = local_1c;
              }
              goto LAB_0059208b;
            }
          }
          pPVar11 = Pool<PathNode>::TakeObject((Pool<PathNode> *)(local_20 + 0x84));
          *(undefined4 *)(pPVar11 + 4) = *(undefined4 *)(*(int *)pPVar19 + uVar16 * 4);
          pGVar6 = g_gameData;
          iVar10 = *(int *)pPVar19;
          *(MetaGameAction **)(pPVar11 + 8) = local_24;
          fVar20 = cocos2d::Vec2::getDistanceSq
                             ((Vec2 *)(*(int *)(*(int *)(*(int *)(pGVar6 + 0xd8) + 0xa8) +
                                               *(int *)(iVar10 + uVar16 * 4) * 4) + 8),
                              (Vec2 *)(*(int *)(*(int *)(*(int *)(pGVar6 + 0xd8) + 0xa8) +
                                               *(int *)(param_1 + 4) * 4) + 8));
          local_24 = (MetaGameAction *)(0x5f3759df - ((uint)fVar20 >> 1));
          fVar20 = (1.5 - fVar20 * 0.5 * (float)local_24 * (float)local_24) * (float)local_24 *
                   fVar20;
          *(float *)(pPVar11 + 0xc) = fVar20;
          *(float *)(pPVar11 + 0x10) = *(float *)(pPVar11 + 8) * fVar20;
          *(undefined4 *)pPVar11 = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(pPVar11 + 0x14) = 1;
          *(PathNode **)(*(int *)(param_1 + 0x20) + *(int *)(pPVar11 + 4) * 4) = pPVar11;
          local_34 = pPVar11;
          ghidra::lib::_Tree___Insert_hint
                    ((ghidra::lib::_Tree_t *)(param_1 + 0x14),local_44,*(undefined4 *)(param_1 + 0x14),&local_34,
                     param_1);
          pPVar9 = Singleton<Pather>::instance;
        }
LAB_0059208b:
        local_1c = uVar16 + 1;
        iVar12 = *(int *)pPVar19;
      } while (local_1c < (uint)(*(int *)(pPVar19 + 4) - iVar12 >> 2));
    }
    local_2c = local_2c + 1;
    this_ = local_20;
    if (param_2 < local_2c) break;
    iVar10 = *(int *)(param_1 + 0x18);
  }
  *(uint *)((char *)this_ + 0x48) = *(int *)((char *)this_ + 0x48) + local_2c;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_2c;
  debugPrint("DETAIL","Pather: failed to calculate after %d iterations",local_2c);
  // [seh] ExceptionList = local_10;
  return (PathNode *)0x0;
}
