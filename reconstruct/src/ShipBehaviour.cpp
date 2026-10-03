// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ShipBehaviour * __thiscall ShipBehaviour::ShipBehaviour(ShipBehaviour *this,Ship *param_1,CraftPurpose param_2)
ShipBehaviour::ShipBehaviour(Ship * param_1, CraftPurpose param_2)

{
  void *pvVar1;
  int iVar2;
  ghidra::lib::_Tree_node_t *p_Var3;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  int iVar4;
  int iVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c258c;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 4) = 1;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
  *(undefined4 *)((char *)this + 0x28) = 0xf;
  ((char *)this)[0x14] = (byte)0x0;
  // [seh] local_8 = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0;
  pvVar1 = operator_new(0x34);
  iVar5 = 0;
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  *(undefined1 *)((int)pvVar1 + 0x10) = 0;
  *(undefined1 **)((int)pvVar1 + 0x14) = &DAT_bf800000;
  *(undefined1 *)((int)pvVar1 + 0x18) = 0;
  iVar4 = 6;
  do {
    iVar2 = rand();
    iVar5 = iVar5 + iVar2 % 10 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 2;
  iVar2 = 0;
  *(float *)((int)pvVar1 + 0x1c) = (float)(iVar5 + 0x1e);
  do {
    iVar5 = rand();
    iVar2 = iVar2 + iVar5 % 0xc + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 **)((int)pvVar1 + 0x24) = &DAT_bf800000;
  *(float *)((int)pvVar1 + 0x20) = (float)(iVar2 + 5);
  *(undefined4 *)((int)pvVar1 + 0x28) = 0;
  *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x30) = 0;
  *(Ship **)((char *)this + 0x6c) = param_1;
  *(void **)((char *)this + 0x3c) = pvVar1;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined1 **)((char *)this + 0x44) = &DAT_bf800000;
  ((char *)this)[0x48] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x54) = 0xffffffff;
  ((char *)this)[0x58] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x5c) = 0xffffffff;
  ((char *)this)[0x60] = (byte)0x0;
  *(undefined1 **)((char *)this + 100) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x68) = 0;
  *(CraftPurpose *)((char *)this + 0x70) = param_2;
  *(undefined4 *)((char *)this + 0x74) = 1;
  *(undefined4 *)((char *)this + 0x78) = 1;
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0xf;
  ((char *)this)[0x7c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0xf;
  ((char *)this)[0x94] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0xf;
  ((char *)this)[0xac] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  *(undefined4 *)((char *)this + 200) = 0;
  *(undefined4 *)((char *)this + 0xcc) = 0;
  *(undefined4 *)((char *)this + 0xd0) = 0;
  *(undefined4 *)((char *)this + 0xd4) = 0xc61c3c00;
  *(undefined4 *)((char *)this + 0xd8) = 0xc61c3c00;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0xf;
  ((char *)this)[0xdc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xf8) = 0;
  *(undefined4 *)((char *)this + 0xfc) = 0;
  *(undefined4 *)((char *)this + 0x100) = 0;
  *(undefined4 *)((char *)this + 0x104) = 0;
  *(undefined2 *)((char *)this + 0x108) = 0;
  *(undefined4 *)((char *)this + 0x10c) = 0;
  *(undefined4 *)((char *)this + 0x110) = 0;
  *(undefined4 *)((char *)this + 0x114) = 0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,6);
  *(undefined4 *)((char *)this + 0x118) = 0;
  *(undefined4 *)((char *)this + 0x11c) = 0;
  p_Var3 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0x118) = p_Var3;
  ((char *)this)[0x120] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x124) = 0;
  *(undefined4 *)((char *)this + 300) = 0;
  *(undefined4 *)((char *)this + 0x130) = 0;
  *(undefined4 *)((char *)this + 0x134) = 0;
  *(undefined4 *)((char *)this + 0x138) = 0;
  *(undefined4 *)((char *)this + 0x13c) = 0;
  *(undefined4 *)((char *)this + 0x140) = 0;
  *(undefined4 *)((char *)this + 0x144) = 0;
  *(undefined4 *)((char *)this + 0x148) = 0;
  *(undefined4 *)((char *)this + 0x14c) = 0;
  *(undefined4 *)((char *)this + 0x150) = 0;
  *(undefined4 *)((char *)this + 0x154) = 0;
  *(undefined4 *)((char *)this + 0x158) = 0;
  **(undefined4 **)((char *)this + 0x3c) = *(undefined4 *)((char *)this + 0x6c);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ShipBehaviour::~ShipBehaviour(ShipBehaviour *this)
ShipBehaviour::~ShipBehaviour()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::lib::_Tree_t *this_00;
  int iVar1;
  void *pvVar2;
  Destination *pDVar3;
  void *pvVar4;
  uint uVar5;
  nothrow_t *pnVar6;
  int *piVar7;
  ghidra::lib::allocator_t *unaff_EDI;
  uint uVar8;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf6c0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pDVar3 = (Destination *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  uVar8 = 0;
  piVar7 = *(int **)((char *)this + 0xc4);
  uVar5 = (uint)((int)*(int **)((char *)this + 200) + (3 - (int)piVar7)) >> 2;
  if (*(int **)((char *)this + 200) < piVar7) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar7)(1);
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != uVar5);
  }
  *(undefined4 *)((char *)this + 200) = *(undefined4 *)((char *)this + 0xc4);
  <>::~<>((<> *)((char *)this + 0x128));
  iVar1 = *(int *)((char *)this + 0x118);
  this_00 = (ghidra::lib::_Tree_t *)((char *)this + 0x118);
  // [seh] local_8 = 0;
  ghidra::lib::_Tree___Erase(this_00,*(ghidra::lib::_Tree_node_t **)(iVar1 + 4));
  *(int *)(*(int *)this_00 + 4) = iVar1;
  **(int **)this_00 = iVar1;
  *(int *)(*(int *)this_00 + 8) = iVar1;
  *(undefined4 *)((char *)this + 0x11c) = 0;
  operator_delete(*(void **)this_00,(nothrow_t *)0x2c);
  if (*(Destination **)((char *)this + 0x10c) != (Destination *)0x0) {
    ghidra::lib::_Destroy_range___x28_x29(*(Destination **)((char *)this + 0x10c),pDVar3,unaff_EDI);
    pvVar2 = *(void **)((char *)this + 0x10c);
    pnVar6 = (nothrow_t *)(((*(int *)((char *)this + 0x114) - (int)pvVar2) / 0x24) * 0x24);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00502d0f;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x10c) = 0;
    *(undefined4 *)((char *)this + 0x110) = 0;
    *(undefined4 *)((char *)this + 0x114) = 0;
  }
  uVar5 = *(uint *)((char *)this + 0xf0);
  if (0xf < uVar5) {
    pvVar2 = *(void **)((char *)this + 0xdc);
    pnVar6 = (nothrow_t *)(uVar5 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = (nothrow_t *)(uVar5 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00502d0f;
    }
    operator_delete(pvVar4,pnVar6);
  }
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0xf;
  ((char *)this)[0xdc] = (byte)0x0;
  pvVar2 = *(void **)((char *)this + 0xc4);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0xcc) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00502d0f;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0xc4) = 0;
    *(undefined4 *)((char *)this + 200) = 0;
    *(undefined4 *)((char *)this + 0xcc) = 0;
  }
  uVar5 = *(uint *)((char *)this + 0xc0);
  if (0xf < uVar5) {
    pvVar2 = *(void **)((char *)this + 0xac);
    pnVar6 = (nothrow_t *)(uVar5 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = (nothrow_t *)(uVar5 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00502d0f;
    }
    operator_delete(pvVar4,pnVar6);
  }
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0xf;
  ((char *)this)[0xac] = (byte)0x0;
  uVar5 = *(uint *)((char *)this + 0xa8);
  if (0xf < uVar5) {
    pvVar2 = *(void **)((char *)this + 0x94);
    pnVar6 = (nothrow_t *)(uVar5 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = (nothrow_t *)(uVar5 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00502d0f;
    }
    operator_delete(pvVar4,pnVar6);
  }
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0xf;
  ((char *)this)[0x94] = (byte)0x0;
  uVar5 = *(uint *)((char *)this + 0x90);
  if (0xf < uVar5) {
    pvVar2 = *(void **)((char *)this + 0x7c);
    pnVar6 = (nothrow_t *)(uVar5 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = (nothrow_t *)(uVar5 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00502d0f;
    }
    operator_delete(pvVar4,pnVar6);
  }
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0xf;
  ((char *)this)[0x7c] = (byte)0x0;
  uVar5 = *(uint *)((char *)this + 0x28);
  if (0xf < uVar5) {
    pvVar2 = *(void **)((char *)this + 0x14);
    pnVar6 = (nothrow_t *)(uVar5 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = (nothrow_t *)(uVar5 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
LAB_00502d0f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
  }
  *(undefined4 *)((char *)this + 0x24) = 0;
  *(undefined4 *)((char *)this + 0x28) = 0xf;
  ((char *)this)[0x14] = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ShipBehaviour::configureShipDesires(ShipBehaviour *this)
void ShipBehaviour::configureShipDesires()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  AnimationFrames **ppAVar1;
  bool bVar2;
  char *pcVar3;
  AIDesire *pAVar4;
  AIAttack *pAVar5;
  AITravel *this_01;
  int iVar6;
  int iVar7;
  GameData *pGVar8;
  uint uVar9;
  uint unaff_EDI;
  std::string local_44 [16];
  undefined4 local_34;
  AITravel *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c2664;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  this_00 = (ghidra::vector *)((char *)this + 0xc4);
  if (*(int *)((char *)this + 200) - *(int *)this_00 >> 2 == 0) {
    iVar6 = *(int *)((char *)this + 0x70);
    if (iVar6 == 1) {
      // [seh] ExceptionList = &local_10;
      local_14 = operator_new(0x40);
      // [seh] local_8 = 0;
      local_14 = (AITravel *)new ((void *)(local_14)) AITravel(*(Ship **)((char *)this + 0x6c));
      // [seh] local_8 = 0xffffffff;
      ppAVar1 = *(AnimationFrames ***)((char *)this + 200);
      if (*(AnimationFrames ***)((char *)this + 0xcc) == ppAVar1) {
        local_34 = 0x502dbf;
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_14);
        // [seh] ExceptionList = local_10;
        return;
      }
      *ppAVar1 = (AnimationFrames *)local_14;
      *(int *)((char *)this + 200) = *(int *)((char *)this + 200) + 4;
      // [seh] ExceptionList = local_10;
      return;
    }
    if (iVar6 == 7) {
      // [seh] ExceptionList = &local_10;
      local_14 = operator_new(0x40);
      // [seh] local_8 = 1;
      local_14 = (AITravel *)new ((void *)(local_14)) AITravel(*(Ship **)((char *)this + 0x6c));
      // [seh] local_8 = 0xffffffff;
      ppAVar1 = *(AnimationFrames ***)((char *)this + 200);
      if (*(AnimationFrames ***)((char *)this + 0xcc) == ppAVar1) {
        local_34 = 0x502e1e;
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_14);
      }
      else {
        *ppAVar1 = (AnimationFrames *)local_14;
        *(int *)((char *)this + 200) = *(int *)((char *)this + 200) + 4;
      }
      pAVar4 = operator_new(0x38);
      // [seh] local_8 = 2;
      local_34 = 0;
      local_44[0] = (std::string)0x0;
      local_14 = (AITravel *)pAVar4;
      ghidra::str::assign(local_44,"Scan",4);
      new ((void *)(pAVar4)) AIDesire(1);
      // [seh] local_8 = 0xffffffff;
      *(undefined ***)pAVar4 = AIScan::vftable;
      *(undefined1 **)(pAVar4 + 0x30) = &DAT_bf800000;
      *(undefined4 *)(pAVar4 + 0x34) = 0;
      ppAVar1 = *(AnimationFrames ***)((char *)this + 200);
      if (*(AnimationFrames ***)((char *)this + 0xcc) == ppAVar1) {
        local_34 = 0x502e9c;
        local_14 = (AITravel *)pAVar4;
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_14);
      }
      else {
        *ppAVar1 = (AnimationFrames *)pAVar4;
        *(int *)((char *)this + 200) = *(int *)((char *)this + 200) + 4;
        local_14 = (AITravel *)pAVar4;
      }
      pAVar5 = operator_new(0x38);
      // [seh] local_8 = 3;
      local_14 = (AITravel *)new ((void *)(pAVar5)) AIAttack(*(Ship **)((char *)this + 0x6c));
      // [seh] local_8 = 0xffffffff;
      ppAVar1 = *(AnimationFrames ***)((char *)this + 200);
      if (*(AnimationFrames ***)((char *)this + 0xcc) == ppAVar1) {
        local_34 = 0x502ee0;
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,(AnimationFrames **)&local_14);
      }
      else {
        *ppAVar1 = (AnimationFrames *)local_14;
        *(int *)((char *)this + 200) = *(int *)((char *)this + 200) + 4;
      }
      if (*(char *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) == '\0') {
        *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) = 1;
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    else {
      if (iVar6 == 2) {
        // [seh] ExceptionList = &local_10;
        pAVar4 = operator_new(0x50);
        // [seh] local_8 = 4;
        local_34 = 0;
        local_44[0] = (std::string)0x0;
        ghidra::str::assign(local_44,"Hunt",4);
        new ((void *)(pAVar4)) AIDesire(3);
        *(undefined ***)pAVar4 = AIHunt::vftable;
        *(undefined4 *)(pAVar4 + 0x30) = 0;
        *(undefined4 *)(pAVar4 + 0x40) = 0;
        *(undefined4 *)(pAVar4 + 0x44) = 0;
        // [seh] local_8 = 0xffffffff;
        *(undefined4 *)(pAVar4 + 0x48) = 0;
        *(undefined4 *)(pAVar4 + 0x4c) = 0;
        local_14 = (AITravel *)pAVar4;
        ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
        pAVar4 = operator_new(0x5c);
        // [seh] local_8 = 5;
        local_34 = 0;
        local_44[0] = (std::string)0x0;
        ghidra::str::assign(local_44,"Piracy",6);
        new ((void *)(pAVar4)) AIDesire(4);
        *(undefined ***)pAVar4 = AIPiracy::vftable;
        *(undefined4 *)(pAVar4 + 0x30) = 0;
        pAVar4[0x3c] = (byte)0x0;
        pAVar4[0x3e] = (byte)0x0;
        *(undefined4 *)(pAVar4 + 0x48) = 0;
        *(undefined4 *)(pAVar4 + 0x50) = 0;
        *(undefined4 *)(pAVar4 + 0x54) = 0;
        *(undefined4 *)(pAVar4 + 0x58) = 0;
        // [seh] local_8 = 0xffffffff;
        pAVar4[0x2c] = (byte)0x1;
        local_14 = (AITravel *)pAVar4;
        ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
        pAVar4 = operator_new(0x3c);
        // [seh] local_8 = 6;
        local_34 = 0;
        local_44[0] = (std::string)0x0;
        ghidra::str::assign(local_44,"Scavenge",8);
        new ((void *)(pAVar4)) AIDesire(5);
        *(undefined ***)pAVar4 = AIScavenge::vftable;
        *(undefined4 *)(pAVar4 + 0x38) = 0;
      }
      else {
        if (iVar6 == 3) {
          return;
        }
        if (iVar6 == 4) {
          return;
        }
        if (iVar6 == 8) {
          // [seh] ExceptionList = &local_10;
          if (*(char *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) == '\0') {
            *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) = 1;
          }
          pAVar4 = operator_new(0x5c);
          // [seh] local_8 = 7;
          local_34 = 0;
          local_44[0] = (std::string)0x0;
          ghidra::str::assign(local_44,"Patrol",6);
          new ((void *)(pAVar4)) AIDesire(6);
          *(undefined ***)pAVar4 = AIPatrol::vftable;
          *(undefined4 *)(pAVar4 + 0x3c) = 0;
          *(undefined4 *)(pAVar4 + 0x40) = 0;
          *(undefined4 *)(pAVar4 + 0x44) = 0;
          // [seh] local_8 = 0xffffffff;
          *(undefined4 *)(pAVar4 + 0x48) = 0;
          *(undefined4 *)(pAVar4 + 0x4c) = 0;
          *(undefined4 *)(pAVar4 + 0x50) = 0;
          *(undefined4 *)(pAVar4 + 0x54) = 0;
          *(undefined4 *)(pAVar4 + 0x58) = 0;
          local_14 = (AITravel *)pAVar4;
          ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
          pAVar5 = operator_new(0x38);
          // [seh] local_8 = 8;
          local_14 = (AITravel *)new ((void *)(pAVar5)) AIAttack(*(Ship **)((char *)this + 0x6c));
          // [seh] local_8 = 0xffffffff;
          ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
          uVar9 = 0;
          iVar6 = *(int *)(g_gameData + 0x9c);
          pGVar8 = g_gameData;
          if (*(int *)(g_gameData + 0xa0) - iVar6 >> 2 == 0) {
            // [seh] ExceptionList = local_10;
            return;
          }
          do {
            iVar6 = *(int *)(iVar6 + uVar9 * 4);
            if (((*(int *)(iVar6 + 0x1c) == *(int *)(pGVar8 + 0xd8)) &&
                (*(char *)(iVar6 + 0x18) != '\0')) && (*(char *)(iVar6 + 0x20) != '\0')) {
              ghidra::lib::basic_string__operator_x3d
                        ((std::string *)((char *)this + 0x14),(std::string *)(iVar6 + 0x24));
              pGVar8 = g_gameData;
            }
            uVar9 = uVar9 + 1;
            iVar6 = *(int *)(pGVar8 + 0x9c);
          } while (uVar9 < (uint)(*(int *)(pGVar8 + 0xa0) - iVar6 >> 2));
          // [seh] ExceptionList = local_10;
          return;
        }
        if (iVar6 != 6) {
          return;
        }
        // [seh] ExceptionList = &local_10;
        this_01 = operator_new(0x40);
        // [seh] local_8 = 9;
        local_14 = (AITravel *)new ((void *)(this_01)) AITravel(*(Ship **)((char *)this + 0x6c));
        // [seh] local_8 = 0xffffffff;
        ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
        pAVar5 = operator_new(0x38);
        // [seh] local_8 = 10;
        local_14 = (AITravel *)new ((void *)(pAVar5)) AIAttack(*(Ship **)((char *)this + 0x6c));
        // [seh] local_8 = 0xffffffff;
        ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
        iVar6 = *(int *)((char *)this + 0x124);
        if (iVar6 == 0) {
          // [seh] ExceptionList = local_10;
          return;
        }
        local_34 = 0x503288;
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
        if ((bVar2) &&
           (iVar7 = *(int *)(iVar6 + 0x1fc) - *(int *)(iVar6 + 0x1f8), iVar6 = iVar7 >> 0x1f,
           iVar7 / 0x30 + iVar6 == iVar6)) {
          // [seh] ExceptionList = local_10;
          return;
        }
        pAVar4 = operator_new(0x68);
        // [seh] local_8 = 0xb;
        local_34 = 0;
        local_44[0] = (std::string)0x0;
        ghidra::str::assign(local_44,"Follow",6);
        new ((void *)(pAVar4)) AIDesire(7);
        *(undefined ***)pAVar4 = AIFollow::vftable;
        *(undefined4 *)(pAVar4 + 0x30) = 0;
        *(undefined4 *)(pAVar4 + 0x34) = 0;
        *(undefined4 *)(pAVar4 + 0x38) = 0;
        *(undefined4 *)(pAVar4 + 0x3c) = 0;
        pAVar4[0x40] = (byte)0x0;
        *(undefined4 *)(pAVar4 + 0x44) = 0x41f00000;
        *(undefined4 *)(pAVar4 + 0x58) = 0;
        *(undefined4 *)(pAVar4 + 0x5c) = 0xf;
        pAVar4[0x48] = (byte)0x0;
        *(undefined4 *)(pAVar4 + 100) = 0;
      }
      // [seh] local_8 = 0xffffffff;
      local_14 = (AITravel *)pAVar4;
      ghidra::lib::vector__push_back((ghidra::vector *)this_00,(UIText **)&local_14);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ShipBehaviour::detectWeaponLaunch(ShipBehaviour *this,Ship *param_1,Weapon *param_2)
void ShipBehaviour::detectWeaponLaunch(Ship * param_1, Weapon * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff50[1] = {0};  // [pseudo] address of an unnamed stack slot
  LogSystem *this_00;
  bool bVar1;
  char *pcVar2;
  AuthorityManager *pAVar3;
  int *piVar4;
  SensorData *this_01;
  std::string *pbVar5;
  int extraout_ECX;
  int iVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint unaff_EDI;
  std::string abStack_c4 [8];
  undefined4 uStack_bc;
  std::string abStack_ac [8];
  undefined4 uStack_a4;
  void *local_74 [5];
  uint local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c26c8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar2;
  if ((((*(int *)((char *)this + 0x70) == 7) || (*(int *)((char *)this + 0x70) == 8)) &&
      (*(int *)(param_1 + 0x44) != 0)) &&
     ((iVar6 = *(int *)(*(int *)(param_1 + 0x44) + 0x70), iVar6 != 7 && (iVar6 != 8)))) {
    ghidra::str::ctor
              ((std::string *)local_5c,(std::string *)(param_1 + 0x238));
    // [seh] local_8 = 0;
    pAVar3 = ghidra::any_singleton();
    // [seh] local_8 = 1;
    piVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(pAVar3 + 0x14),(std::string *)local_5c);
    iVar6 = *piVar4;
    // [seh] local_8 = 0xffffffff;
    if (0xf < local_48) {
      pnVar8 = (nothrow_t *)(local_48 + 1);
      pvVar7 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_5c[0] + -4);
        pnVar8 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    if (iVar6 == 1) goto LAB_005037fe;
    ghidra::str::ctor(abStack_ac,(std::string *)(param_1 + 0x238));
    // [seh] local_8 = 2;
    pAVar3 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pAVar3)->reportBelligerant();
    this_01 = (*(Ship **)((char *)this + 0x6c))->getSensorDataForShipID(*(int *)(param_1 + 0x250));
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    // [seh] local_8 = 3;
    iVar6 = 0;
    if ((this_01 == (SensorData *)0x0) ||
       (bVar1 = (this_01)->analysed(), iVar6 = extraout_ECX, !bVar1)) {
      ghidra::str::ctor
                ((std::string *)local_2c,
                 (std::string *)(*(int *)(*(int *)(iVar6 + 0x130) + 0x254) + 0x48));
      // [seh] local_8 = CONCAT31(local_8._1_3_,7);
      uStack_a4 = 0x5036d6;
      ghidra::lib::transform___x28_x29();
      uStack_a4 = 0x5036f3;
      pbVar5 = (std::string *)strUsingArgs((char *)local_74);
      ghidra::lib::basic_string__operator_x3d((std::string *)local_44,pbVar5);
    }
    else {
      iVar6 = *(int *)(extraout_ECX + 0x130);
      if (*(char *)(*(int *)(iVar6 + 0x40) + 0x34) == '\0') {
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("Unknown",7,pcVar2,unaff_EDI);
        if (bVar1) {
          ghidra::str::ctor
                    ((std::string *)local_2c,(std::string *)(*(int *)(iVar6 + 0x254) + 0x48));
          // [seh] local_8 = CONCAT31(local_8._1_3_,5);
          uStack_a4 = 0x503618;
          ghidra::lib::transform___x28_x29();
        }
        else {
          ghidra::str::ctor
                    ((std::string *)local_2c,(std::string *)(extraout_ECX + 0x48));
          // [seh] local_8 = CONCAT31(local_8._1_3_,6);
          uStack_a4 = 0x50366e;
          ghidra::lib::transform___x28_x29();
        }
      }
      else {
        ghidra::str::ctor
                  ((std::string *)local_2c,(std::string *)(iVar6 + 8));
        // [seh] local_8 = CONCAT31(local_8._1_3_,4);
        uStack_a4 = 0x503511;
        ghidra::lib::transform___x28_x29();
      }
      uStack_a4 = 0x50352e;
      pbVar5 = (std::string *)strUsingArgs((char *)local_5c);
      ghidra::lib::basic_string__operator_x3d((std::string *)local_44,pbVar5);
      local_74[0] = local_5c[0];
      local_60 = local_48;
    }
    if (0xf < local_60) {
      pnVar8 = (nothrow_t *)(local_60 + 1);
      pvVar7 = local_74[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_74[0] + -4);
        pnVar8 = (nothrow_t *)(local_60 + 0x24);
        if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar7))) goto LAB_00503560;
      }
      operator_delete(pvVar7,pnVar8);
    }
    // [seh] local_8._0_1_ = 3;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    ghidra::str::ctor(abStack_ac,(std::string *)local_44);
    // [seh] local_8._0_1_ = 8;
    ghidra::str::ctor
              (abStack_c4,(std::string *)(*(int *)((char *)this + 0x6c) + 0x238));
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    (*(ShipChatter **)((char *)this + 0x3c))->addMessage(3);
    this_00 = *(LogSystem **)(this_01 + 0x130);
    if ((this_00 != (LogSystem *)0x0) && (this_00[0x234] != (byte)0x0)) {
      uStack_a4 = 0x503783;
      (this_00)->addLogLine(*(LogPriority *)(this_00 + 0x224), &DAT_00000004);
    }
    if (*(Ship **)((char *)this + 0x40) != param_1) {
      *(Ship **)((char *)this + 0x40) = param_1;
      uStack_bc = 0x5037bf;
      ghidra::str::assign
                ((std::string *)&stack0xffffff50,"Engaging a belligerant, the %s",0x1e);
      Ship::log();
    }
    if (0xf < local_30) {
      pnVar8 = (nothrow_t *)(local_30 + 1);
      pvVar7 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_44[0] + -4);
        pnVar8 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
LAB_00503560:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
  }
LAB_005037fe:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall ShipBehaviour::forgetPiracyTarget(ShipBehaviour *this,Ship *param_1)
void ShipBehaviour::forgetPiracyTarget(Ship * param_1)

{
  std::string *pbVar1;
  bool bVar2;
  undefined4 *puVar3;
  std::string *pbVar4;
  int iVar5;
  uint uVar6;
  std::string *unaff_ESI;
  std::string *unaff_EDI;
  std::string local_34 [16];
  undefined4 local_24;
  std::string *pbVar7;
  
  if (param_1 != (Ship *)0x0) {
    uVar6 = 0;
    iVar5 = *(int *)((char *)this + 0xc4);
    if (*(int *)((char *)this + 200) - iVar5 >> 2 != 0) {
      do {
        iVar5 = *(int *)(iVar5 + uVar6 * 4);
        local_24 = 0x503871;
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("Piracy",6,(char *)unaff_EDI,(uint)unaff_ESI);
        if (bVar2) {
          pbVar1 = *(std::string **)(iVar5 + 0x54);
          local_24 = 0x503897;
          puVar3 = (undefined4 *)ghidra::lib::remove___x28_x29();
          pbVar7 = (std::string *)*puVar3;
          iVar5 = *(int *)(*(int *)((char *)this + 0xc4) + uVar6 * 4);
          if (pbVar7 != pbVar1) {
            pbVar4 = ghidra::lib::_Move_unchecked___x28_x29(pbVar7,unaff_EDI,unaff_ESI);
            ghidra::lib::_Destroy_range_t
                      ((std::string *)pbVar7,(std::string *)unaff_EDI,(ghidra::lib::allocator_t *)unaff_ESI
                      );
            *(std::string **)(iVar5 + 0x54) = pbVar4;
          }
          local_24 = 0;
          local_34[0] = (std::string)0x0;
          ghidra::str::assign
                    (local_34,
                     "As they haven\'t dropped all their cargo, I\'m going to try pirating from %s again."
                     ,0x51);
          Ship::log();
        }
        uVar6 = uVar6 + 1;
        iVar5 = *(int *)((char *)this + 0xc4);
      } while (uVar6 < (uint)(*(int *)((char *)this + 200) - iVar5 >> 2));
    }
  }
  return;
}


// Ghidra: void __thiscall ShipBehaviour::runLogic(ShipBehaviour *this,float param_1)
void ShipBehaviour::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ShipModule *pSVar9;
  FlagManager *pFVar10;
  bool *pbVar11;
  ModuleType extraout_ECX;
  ModuleType MVar12;
  LogSystem *this_00;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  std::string abStack_44 [8];
  undefined4 uStack_3c;
  char *pcVar16;
  undefined4 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf7b0;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar6 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  if ((*(int *)(g_gameData + 0xd0) == 0) && (g_gameLogic[0x70] == (byte)0x0)) {
    return;
  }
  iVar8 = *(int *)((char *)this + 200);
  uVar14 = 0;
  iVar7 = *(int *)((char *)this + 0xc4);
  // [seh] ExceptionList = &local_10;
  if (iVar8 - iVar7 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((char *)this + 0xc4) + uVar14 * 4) + 0x10))();
      iVar8 = *(int *)((char *)this + 200);
      uVar14 = uVar14 + 1;
      iVar7 = *(int *)((char *)this + 0xc4);
    } while (uVar14 < (uint)(iVar8 - iVar7 >> 2));
  }
  piVar15 = (int *)0x0;
  uVar13 = iVar8 - iVar7 >> 2;
  uVar14 = 0;
  if (uVar13 == 0) {
    // [seh] ExceptionList = local_10;
    return;
  }
  do {
    piVar3 = *(int **)(iVar7 + uVar14 * 4);
    fVar2 = (float)piVar3[8];
    if (piVar15 == (int *)0x0) {
      if (0.0 < fVar2) {
LAB_005039e9:
        piVar15 = piVar3;
      }
    }
    else if ((float)piVar15[8] <= fVar2 && fVar2 != (float)piVar15[8]) goto LAB_005039e9;
    uVar14 = uVar14 + 1;
  } while (uVar14 < uVar13);
  if (piVar15 == (int *)0x0) {
    // [seh] ExceptionList = local_10;
    return;
  }
  piVar3 = *(int **)((char *)this + 0xd0);
  if (piVar15 != piVar3) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x24))();
    }
    *(int **)((char *)this + 0xd0) = piVar15;
    (**(code **)(*piVar15 + 0x20))();
    abStack_44[0] = (std::string)0x0;
    ghidra::str::assign(abStack_44,"Switching to desire - %s",0x18);
    Ship::log();
  }
  switch(*(undefined4 *)((char *)this + 0x70)) {
  case 1:
    merchant_runLogic(this,fVar6);
    break;
  case 7:
  case 8:
    if (*(char *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) = 1;
    }
  case 2:
  case 6:
    general_runLogic(this,fVar6);
  }
  (**(code **)(**(int **)((char *)this + 0xd0) + 0x14))();
  if (((char *)this)[0x50] == (byte)0x0) {
    if (*(int *)((char *)this + 0x4c) == -1) {
      iVar8 = *(int *)((char *)this + 0x74);
      iVar7 = SystemManager::getCurrentPowerPercentage
                        (*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40));
      if (iVar7 < (int)(&batteryFlatLevel)[iVar8]) {
        *(int **)((char *)this + 0x4c) = (&batteryChargedLevel)[iVar8];
      }
    }
    else {
      iVar8 = SystemManager::getCurrentPowerPercentage
                        (*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40));
      if (*(int *)((char *)this + 0x4c) <= iVar8) {
        *(undefined4 *)((char *)this + 0x4c) = 0xffffffff;
      }
    }
  }
  if (((char *)this)[0x58] != (byte)0x0) {
    if (*(int *)((char *)this + 0x54) == -1) {
      iVar8 = *(int *)((char *)this + 0x74);
      iVar7 = SystemManager::getCurrentPowerPercentage
                        (*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40));
      if (iVar7 < (int)(&batteryFlatLevel)[iVar8]) {
        *(int **)((char *)this + 0x54) = (&batteryChargedLevel)[iVar8];
      }
    }
    else {
      iVar8 = SystemManager::getCurrentPowerPercentage
                        (*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40));
      if (*(int *)((char *)this + 0x54) <= iVar8) {
        *(undefined4 *)((char *)this + 0x54) = 0xffffffff;
      }
    }
  }
  if ((((char *)this)[0x50] == (byte)0x0) && (*(int *)((char *)this + 0x4c) == -1)) {
    if ((*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40) == (SystemManager *)0x0) ||
       (pSVar9 = (*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40))->getModule(1, true),
       pSVar9 == (ShipModule *)0x0)) goto LAB_00503bb2;
    SystemManager::disconnectModulesOfType
              (*(SystemManager **)(*(int *)((char *)this + 0x6c) + 0x40),extraout_ECX);
    pcVar16 = "%s: Turning my reactors off.";
  }
  else {
    MVar12 = *(ModuleType *)((char *)this + 0x6c);
    if (*(SystemManager **)(MVar12 + 0x40) != (SystemManager *)0x0) {
      pSVar9 = (*(SystemManager **)(MVar12 + 0x40))->getModule(1, true);
      if (pSVar9 != (ShipModule *)0x0) goto LAB_00503bb2;
      MVar12 = *(ModuleType *)((char *)this + 0x6c);
    }
    (*(SystemManager **)(MVar12 + 0x40))->connectModulesOfType(MVar12);
    pcVar16 = "%s: Turning my reactors on.";
  }
  uStack_3c = 0x503baf;
  debugPrint("GAME",pcVar16);
LAB_00503bb2:
  iVar7 = *(int *)((char *)this + 0x6c);
  iVar8 = *(int *)(*(int *)(iVar7 + 0x40) + 0x20);
  if ((iVar8 != 0) && (((char *)this)[0x58] != (byte)0x0)) {
    if (*(int *)((char *)this + 0x54) == -1) {
      uVar14 = *(uint *)((char *)this + 0x5c);
      if (uVar14 < 8) {
        bVar5 = *(int *)(iVar8 + 0x3c + uVar14 * 4) != 0;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) {
        uVar14 = getNextTubeWithValidWeapon(this);
        iVar7 = *(int *)((char *)this + 0x6c);
        *(uint *)((char *)this + 0x5c) = uVar14;
      }
      iVar8 = *(int *)(*(int *)(iVar7 + 0x40) + 0x20);
      if (*(uint *)(iVar8 + 0x30) != uVar14) {
        *(uint *)(iVar8 + 0x30) = uVar14;
        iVar7 = *(int *)((char *)this + 0x6c);
      }
      if (*(char *)(*(int *)(*(int *)(iVar7 + 0x40) + 0x20) + 0x62) == '\0') {
        ghidra::str::assign
                  ((std::string *)&stack0xffffffb8,"Attempting to spin up tube %d",0x1d);
        Ship::log();
        *(undefined1 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x20) + 0x62) = 1;
      }
    }
    else if (*(char *)(iVar8 + 0x62) != '\0') {
      ghidra::str::assign
                ((std::string *)&stack0xffffffb8,"Pausing weapon spin-up of tube %d",0x21);
      Ship::log();
      *(undefined1 *)(*(int *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x20) + 0x62) = 0;
    }
  }
  iVar8 = *(int *)((char *)this + 0x124);
  if (((iVar8 != 0) && (*(int *)(iVar8 + 0x208) != 0)) &&
     (bVar5 = (*(Ship **)((char *)this + 0x6c))->canDetectPlayerShip(), bVar5)) {
    puVar4 = *(undefined4 **)(iVar8 + 0x204);
    local_14 = (undefined4 *)*puVar4;
    while (local_14 != puVar4) {
      pbVar1 = (std::string *)(local_14 + 4);
      ghidra::str::ctor(abStack_44,pbVar1);
      bVar5 = hasSentMessageForFlag(this);
      if (!bVar5) {
        ghidra::str::ctor(abStack_44,pbVar1);
        // [seh] local_8 = 0;
        pFVar10 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        bVar5 = (pFVar10)->flagSet();
        if (bVar5) {
          ghidra::str::ctor((std::string *)&stack0xffffffb8,pbVar1);
          // [seh] local_8 = 1;
          pFVar10 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          (pFVar10)->setFlag();
          pbVar11 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x118),(std::string *)pbVar1);
          *pbVar11 = true;
          uStack_3c = 0x503d86;
          LogSystem::addLogLine
                    (this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000004);
        }
      }
      ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b
                ((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_14);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall ShipBehaviour::hasSentMessageForFlag(ShipBehaviour *this,char *param_2)
bool ShipBehaviour::hasSentMessageForFlag(char * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  void **ppvVar5;
  bool bVar6;
  undefined1 uVar7;
  char *pcVar8;
  char *pcVar9;
  nothrow_t *pnVar10;
  uint unaff_EDI;
  void *pvVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *local_38;
  char local_31;
  void *local_30 [5];
  uint local_1c;
  char local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c26f8;
  // [cookie] pcVar8 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] local_8 = 0;
  puVar1 = *(undefined4 **)((char *)this + 0x118);
  local_14 = pcVar8;
  ppvVar5 = &local_10;
  puVar2 = (undefined4 *)*puVar1;
  // [seh] local_10 = ExceptionList;
  do {
    // [seh] ExceptionList = ppvVar5;
    local_38 = puVar2;
    if (puVar2 == puVar1) {
LAB_00503e9e:
      if (0xf < in_stack_00000018) {
        pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
        pcVar8 = param_2;
        if ((nothrow_t *)0xfff < pnVar10) {
          pcVar8 = *(char **)(param_2 + -4);
          pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if ((char *)0x1f < param_2 + (-4 - (int)pcVar8)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar8,pnVar10);
      }
      // [seh] ExceptionList = local_10;
      // [cookie] uVar7 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return (bool)uVar7;
    }
    ghidra::str::ctor((std::string *)local_30,(std::string *)(puVar2 + 4));
    uVar4 = local_1c;
    pvVar3 = local_30[0];
    local_31 = *(char *)(puVar2 + 10);
    pcVar9 = (char *)&param_2;
    if (0xf < in_stack_00000018) {
      pcVar9 = param_2;
    }
    local_18 = local_31;
    bVar6 = ghidra::lib::_Traits_equal___x28_x29(pcVar9,in_stack_00000014,pcVar8,unaff_EDI);
    if ((bVar6) && (local_31 == '\x01')) {
      if (0xf < uVar4) {
        pnVar10 = (nothrow_t *)(uVar4 + 1);
        pvVar11 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar11 = *(void **)((int)pvVar3 + -4);
          pnVar10 = (nothrow_t *)(uVar4 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar11))) {
LAB_00503eea:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar10);
      }
      goto LAB_00503e9e;
    }
    if (0xf < uVar4) {
      pnVar10 = (nothrow_t *)(uVar4 + 1);
      pvVar11 = pvVar3;
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar11 = *(void **)((int)pvVar3 + -4);
        pnVar10 = (nothrow_t *)(uVar4 + 0x24);
        if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar11))) goto LAB_00503eea;
      }
      operator_delete(pvVar11,pnVar10);
    }
    ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_38)
    ;
    ppvVar5 = ExceptionList;
    puVar2 = local_38;
  } while( true );
}


// Ghidra: void __thiscall ShipBehaviour::updateSurroundingData(ShipBehaviour *this)
void ShipBehaviour::updateSurroundingData()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  float fVar2;
  Vec2 *pVVar3;
  SyntheticObject *pSVar4;
  AnimationFrames **ppAVar5;
  int iVar6;
  ShipBehaviour *this_00;
  char *pcVar7;
  AnimationFrames *pAVar8;
  Vec2 *unaff_EDI;
  bool bVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  float fVar12;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  uint local_28;
  float local_24;
  undefined1 *local_20;
  float local_1c;
  AnimationFrames *local_18;
  GameLogic *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c27a3;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar3 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_24 = 0.0;
  local_1c = 0.0;
  if (*(char *)(*(int *)((char *)this + 0x6c) + 0x234) == '\0') {
    *(undefined4 *)((char *)this + 0x154) = *(undefined4 *)((char *)this + 0x150);
    *(undefined4 *)((char *)this + 0x148) = *(undefined4 *)((char *)this + 0x144);
    *(undefined4 *)((char *)this + 0x13c) = *(undefined4 *)((char *)this + 0x138);
    *(undefined4 *)((char *)this + 0x130) = *(undefined4 *)((char *)this + 300);
    iVar6 = *(int *)((char *)this + 0x6c);
    *(undefined4 *)((char *)this + 0x128) = 0;
    iVar1 = *(int *)(iVar6 + 0x184);
    if (iVar1 == 0) {
      *(undefined2 *)((char *)this + 0x15c) = 0;
    }
    else if (*(char *)(iVar1 + 4) == '\0') {
      if (0 < *(int *)(iVar1 + 0x40)) {
        *(undefined2 *)((char *)this + 0x15c) = 0x100;
      }
    }
    else {
      *(undefined2 *)((char *)this + 0x15c) = 1;
    }
    local_28 = 0;
    if (*(int *)(iVar6 + 0x218) - *(int *)(iVar6 + 0x214) >> 2 != 0) {
      do {
        fVar2 = local_1c;
        pAVar8 = *(AnimationFrames **)(*(int *)(iVar6 + 0x214) + local_28 * 4);
        if ((pAVar8 != (AnimationFrames *)0x0) && (*(float *)(pAVar8 + 0x118) == 0.0)) {
          local_34 = (float)*(double *)(iVar6 + 0x28);
          local_30 = (float)*(double *)(iVar6 + 0x30);
          local_3c = (float)((double)*(float *)(pAVar8 + 0x104) + *(double *)(pAVar8 + 0x10));
          local_38 = (float)((double)*(float *)(pAVar8 + 0x108) + *(double *)(pAVar8 + 0x18));
          // [seh] local_8 = 1;
          local_18 = pAVar8;
          local_24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&local_34);
          local_14 = (GameLogic *)(0x5f3759df - ((uint)local_24 >> 1));
          // [seh] local_8 = 0xffffffff;
          iVar6 = *(int *)(pAVar8 + 0x130);
          fVar12 = (1.5 - local_24 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
                   local_24;
          if (iVar6 == 0) {
LAB_005042df:
            if ((((*(int *)(pAVar8 + 0xe0) == 6) &&
                 (pSVar4 = Sector::getSyntheticObjectWithID
                                     (*(Sector **)(*(int *)((char *)this + 0x6c) + 0x24),
                                      *(int *)(pAVar8 + 4)), pSVar4 != (SyntheticObject *)0x0)) &&
                (bVar9 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar3,(uint)unaff_EDI), bVar9)) &&
               ((bVar9 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar3,(uint)unaff_EDI), bVar9 &&
                (bVar9 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar3,(uint)unaff_EDI), bVar9)))) {
              ppAVar5 = *(AnimationFrames ***)((char *)this + 0x148);
              if (*(AnimationFrames ***)((char *)this + 0x14c) == ppAVar5) {
                this_00 = this + 0x144;
                goto LAB_005043a5;
              }
              *ppAVar5 = pAVar8;
              *(int *)((char *)this + 0x148) = *(int *)((char *)this + 0x148) + 4;
            }
          }
          else {
            bVar9 = false;
            if (*(int *)(iVar6 + 0x254) != 0) {
              bVar9 = *(int *)(*(int *)(iVar6 + 0x254) + 0x158) == 0;
            }
            if (!bVar9) goto LAB_005042df;
            iVar1 = *(int *)(iVar6 + 0x44);
            if ((iVar1 == 0) || (*(int *)(iVar1 + 0x70) != 7)) {
              if ((*(char *)(iVar6 + 0x234) == '\0') &&
                 ((iVar1 == 0 || ((*(int *)(iVar1 + 0x70) != 1 && (*(int *)(iVar1 + 0x70) != 0))))))
              {
                if ((*(char *)(*(int *)(iVar6 + 0x40) + 0x34) == '\0') &&
                   (fVar12 <= (float)(&unsafeDistance)[*(int *)((char *)this + 0x74)])) {
                  ppAVar5 = *(AnimationFrames ***)((char *)this + 0x13c);
                  if (*(AnimationFrames ***)((char *)this + 0x140) == ppAVar5) {
                    this_00 = this + 0x138;
                    goto LAB_005043a5;
                  }
                  *ppAVar5 = pAVar8;
                  *(int *)((char *)this + 0x13c) = *(int *)((char *)this + 0x13c) + 4;
                }
                goto LAB_005043ae;
              }
              ppAVar5 = *(AnimationFrames ***)((char *)this + 0x130);
              if (*(AnimationFrames ***)((char *)this + 0x134) != ppAVar5) {
                *ppAVar5 = pAVar8;
                *(int *)((char *)this + 0x130) = *(int *)((char *)this + 0x130) + 4;
                goto LAB_005043ae;
              }
              this_00 = this + 300;
LAB_005043a5:
              ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)this_00,ppAVar5,&local_18);
              pAVar8 = local_18;
            }
            else {
              if ((float)(&authorityCareDistance)[*(int *)((char *)this + 0x74)] < fVar12) {
LAB_00504203:
                bVar9 = false;
              }
              else {
                iVar6 = *(int *)((char *)this + 0x128);
                if (iVar6 != 0) {
                  puVar10 = (undefined1 *)
                            (float)((double)*(float *)(iVar6 + 0x108) + *(double *)(iVar6 + 0x18));
                  // [seh] local_8 = 5;
                  local_24 = (float)((uint)fVar2 | 0xf);
                  local_1c = local_24;
                  fastDistance(pVVar3,unaff_EDI);
                  local_20 = puVar10;
                  fastDistance(pVVar3,unaff_EDI);
                  if ((float)puVar10 <= (float)local_20) goto LAB_00504203;
                }
                bVar9 = true;
              }
              if (((uint)local_1c & 8) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffff7);
              }
              if (((uint)local_1c & 4) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffffb);
              }
              if (((uint)local_1c & 2) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffffd);
              }
              // [seh] local_8 = 0xffffffff;
              if (((uint)local_1c & 1) != 0) {
                local_1c = (float)((uint)local_1c & 0xfffffffe);
              }
              if (bVar9) {
                *(AnimationFrames **)((char *)this + 0x128) = pAVar8;
              }
            }
          }
LAB_005043ae:
          if (((*(int *)(pAVar8 + 0x130) != 0) &&
              (*(char *)(*(int *)(pAVar8 + 0x130) + 0x234) != '\0')) &&
             (bVar9 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar3,(uint)unaff_EDI), !bVar9)) {
            iVar6 = *(int *)((char *)this + 0x6c);
            uVar11 = 0xbf800000;
            local_24 = 0.0;
            local_14 = (GameLogic *)0x0;
            local_20 = &DAT_bf800000;
            if (*(int *)(*(int *)(iVar6 + 0x24) + 0x138) - *(int *)(*(int *)(iVar6 + 0x24) + 0x134)
                >> 2 != 0) {
              do {
                bVar9 = GameLogic::zoneActive
                                  (local_14,*(Zone **)(*(int *)(*(int *)(iVar6 + 0x24) + 0x134) +
                                                      (int)local_14 * 4));
                if ((bVar9) &&
                   (bVar9 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar3,(uint)unaff_EDI), !bVar9)) {
                  local_2c = *(int *)(*(int *)((char *)this + 0x6c) + 0x24);
                  iVar6 = *(int *)(*(int *)(local_2c + 0x134) + (int)local_14 * 4);
                  pcVar7 = (char *)(iVar6 + 4);
                  if (0xf < *(uint *)(iVar6 + 0x18)) {
                    pcVar7 = *(char **)(iVar6 + 4);
                  }
                  bVar9 = ghidra::lib::_Traits_equal_t
                                    (pcVar7,*(uint *)(iVar6 + 0x14),(char *)pVVar3,(uint)unaff_EDI);
                  if (bVar9) {
                    puVar10 = (undefined1 *)(float)*(double *)(*(int *)(pAVar8 + 0x130) + 0x30);
                    // [seh] local_8 = 6;
                    fastDistance(pVVar3,unaff_EDI);
                    uVar11 = ZEXT48(local_20);
                    // [seh] local_8 = 0xffffffff;
                    if (((float)local_20 == -1.0) || ((float)puVar10 < (float)local_20)) {
                      uVar11 = ZEXT48(puVar10);
                      local_24 = *(float *)((int)local_14 * 4 +
                                           *(int *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x24) + 0x134))
                      ;
                      local_20 = puVar10;
                    }
                  }
                }
                iVar6 = *(int *)((char *)this + 0x6c);
                local_14 = local_14 + 1;
              } while (local_14 <
                       (GameLogic *)
                       (*(int *)(*(int *)(iVar6 + 0x24) + 0x138) -
                        *(int *)(*(int *)(iVar6 + 0x24) + 0x134) >> 2));
              if (((float)uVar11 != -1.0) &&
                 ((float)uVar11 <= *(float *)((int)local_24 + 0x38) * 1.5)) {
                ppAVar5 = *(AnimationFrames ***)((char *)this + 0x154);
                if (*(AnimationFrames ***)((char *)this + 0x158) == ppAVar5) {
                  ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x150),ppAVar5,&local_18)
                  ;
                }
                else {
                  *ppAVar5 = pAVar8;
                  *(int *)((char *)this + 0x154) = *(int *)((char *)this + 0x154) + 4;
                }
              }
            }
          }
        }
        iVar6 = *(int *)((char *)this + 0x6c);
        local_28 = local_28 + 1;
      } while (local_28 < (uint)(*(int *)(iVar6 + 0x218) - *(int *)(iVar6 + 0x214) >> 2));
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ShipBehaviour::giveTravelTask(ShipBehaviour *this,GameObject *param_1,bool param_2)
void ShipBehaviour::giveTravelTask(GameObject * param_1, bool param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c27f4;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = 0.0;
  if (*(int *)((char *)this + 4) != 1) {
    return;
  }
  iVar1 = *(int *)((char *)this + 0x10);
  // [seh] ExceptionList = &local_10;
  if (iVar1 != 0) {
    local_1c = (float)*(double *)(*(int *)((char *)this + 0x6c) + 0x28);
    local_18 = (float)*(double *)(*(int *)((char *)this + 0x6c) + 0x30);
    local_24 = (float)*(double *)(iVar1 + 0x20);
    local_20 = (float)*(double *)(iVar1 + 0x28);
    // [seh] local_8 = 1;
    local_14 = 4.2039e-45;
    fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)&local_1c);
    local_14 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
    if ((1.5 - fVar5 * 0.5 * local_14 * local_14) * local_14 * fVar5 <= 0.1) {
      bVar2 = true;
      goto LAB_005046e5;
    }
  }
  bVar2 = false;
LAB_005046e5:
  // [seh] local_8 = 0xffffffff;
  if (bVar2) {
    *(undefined4 *)((char *)this + 8) = *(undefined4 *)((char *)this + 0x10);
  }
  else {
    *(undefined4 *)((char *)this + 8) = 0;
  }
  *(GameObject **)((char *)this + 0x10) = param_1;
  *(undefined4 *)((char *)this + 4) = 0;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(GameObject **)param_1;
  }
  puVar4 = (undefined4 *)(*(int *)((char *)this + 0x6c) + 8);
  if (0xf < *(uint *)(*(int *)((char *)this + 0x6c) + 0x1c)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  debugPrint("AI","%s: Travelling to %s",puVar4,param_1,uVar3);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ShipBehaviour::merchant_runLogic(ShipBehaviour *this,float param_1)
void ShipBehaviour::merchant_runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  Ship *pSVar3;
  int *piVar4;
  bool bVar5;
  char *pcVar6;
  std::string *pbVar7;
  NPCShipManager *this_00;
  SpaceStation *pSVar8;
  NPCShipManager *this_01;
  std::string *pbVar9;
  uint unaff_EDI;
  std::string *this_02;
  float in_XMM1_Da;
  float fVar10;
  float fVar11;
  std::string abStack_4c [4];
  undefined4 uStack_48;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c2846;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (*(char *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) == '\0') {
    *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x34) = 1;
  }
  ((char *)this)[0x50] = (byte)0x1;
  local_1c = in_XMM1_Da;
  (*(ShipChatter **)((char *)this + 0x3c))->runLogic((float)pcVar6);
  iVar1 = *(int *)((char *)this + 0xc);
  if (iVar1 != 0) {
    local_18 = (float)*(double *)(*(int *)((char *)this + 0x6c) + 0x28);
    local_14 = (float)*(double *)(*(int *)((char *)this + 0x6c) + 0x30);
    local_24 = (float)*(double *)(iVar1 + 0x20);
    local_20 = (float)*(double *)(iVar1 + 0x28);
    // [seh] local_8 = 1;
    fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)&local_18);
    local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
    // [seh] local_8 = 0xffffffff;
    if (0.05 < (1.5 - fVar10 * 0.5 * local_14 * local_14) * local_14 * fVar10) {
      *(undefined1 *)(*(int *)((char *)this + 0x6c) + 0x168) = 0;
    }
    else {
      *(undefined1 *)(*(int *)((char *)this + 0x6c) + 0x168) = 1;
      pbVar9 = *(std::string **)((char *)this + 0x10);
      this_02 = (std::string *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x44) + 0x7c);
      pbVar7 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar7 = *(std::string **)pbVar9;
      }
      local_14 = *(float *)(pbVar9 + 0x10);
      bVar5 = ghidra::lib::_Traits_equal___x28_x29((char *)pbVar7,(uint)local_14,pcVar6,unaff_EDI);
      if ((!bVar5) && (this_02 != pbVar9)) {
        if (0xf < *(uint *)(pbVar9 + 0x14)) {
          pbVar9 = *(std::string **)pbVar9;
        }
        ghidra::str::assign(this_02,(char *)pbVar9,(uint)local_14);
      }
    }
  }
  iVar1 = *(int *)((char *)this + 0x6c);
  if ((*(char *)(iVar1 + 0x168) == '\0') && (iVar2 = *(int *)((char *)this + 8), iVar2 != 0)) {
    local_24 = (float)*(double *)(iVar1 + 0x28);
    local_20 = (float)*(double *)(iVar1 + 0x30);
    local_18 = (float)*(double *)(iVar2 + 0x20);
    local_14 = (float)*(double *)(iVar2 + 0x28);
    // [seh] local_8 = 3;
    fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_18,(Vec2 *)&local_24);
    local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
    // [seh] local_8 = 0xffffffff;
    if (0.05 < (1.5 - fVar10 * 0.5 * local_14 * local_14) * local_14 * fVar10) {
      *(undefined1 *)(*(int *)((char *)this + 0x6c) + 0x168) = 0;
    }
    else {
      *(undefined1 *)(*(int *)((char *)this + 0x6c) + 0x168) = 1;
    }
  }
  if ((*(float *)((char *)this + 100) != -1.0) &&
     (local_1c = *(float *)((char *)this + 100) - local_1c, *(float *)((char *)this + 100) = local_1c,
     local_1c <= 0.0)) {
    *(undefined1 **)((char *)this + 100) = &DAT_bf800000;
    *(undefined4 *)((char *)this + 4) = 1;
    uStack_48 = 0x504a17;
    debugPrint("AI","%s: Leaving %s");
    pSVar3 = *(Ship **)((char *)this + 0x6c);
    uStack_48 = 0x504a1f;
    this_00 = ghidra::any_singleton();
    ghidra::str::ctor
              (abStack_4c,(std::string *)(*(int *)(pSVar3 + 0x44) + 0x94));
    pSVar8 = GameData::getSpaceStation();
    pSVar8 = (this_01)->getRandomSpaceStation(*(int *)(pSVar3 + 0x20), (Ship *)pSVar8);
    (this_00)->setFreighterDestination(pSVar3, pSVar8);
    piVar4 = *(int **)((char *)this + 0x3c);
    iVar1 = *piVar4;
    *(undefined1 *)(piVar4 + 4) = 0;
    *(undefined1 *)(piVar4 + 6) = 0;
    iVar2 = *(int *)(*(int *)(iVar1 + 0x44) + 0x10);
    local_24 = (float)*(double *)(iVar2 + 0x20);
    local_20 = (float)*(double *)(iVar2 + 0x28);
    local_18 = (float)*(double *)(iVar1 + 0x28);
    local_14 = (float)*(double *)(iVar1 + 0x30);
    // [seh] local_8 = 5;
    fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_18,(Vec2 *)&local_24);
    fVar10 = (float)(0x5f3759df - ((uint)fVar11 >> 1));
    piVar4[5] = (int)((1.5 - fVar11 * 0.5 * fVar10 * fVar10) * fVar10 * fVar11);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall ShipBehaviour::respondToPirateDemand(ShipBehaviour *this,Ship *param_1)
bool ShipBehaviour::respondToPirateDemand(Ship * param_1)

{
  std::string *this_00;
  Ship *pSVar1;
  bool bVar2;
  float fVar3;
  Vec2 *this_01;
  int iVar4;
  AuthorityManager *pAVar5;
  std::string *pbVar6;
  Quadrant QVar7;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_02;
  LogSystem *this_03;
  char *extraout_EDX;
  char *extraout_EDX_00;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  std::string abStack_84 [4];
  undefined4 uStack_80;
  std::string local_6c [4];
  undefined4 uStack_68;
  float local_3c;
  float local_38;
  std::string *local_34;
  float local_30;
  undefined4 *local_2c;
  float local_28;
  float local_24;
  Ship *local_20;
  float local_1c;
  int *local_18;
  undefined1 local_13;
  char local_12;
  char local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c28e6;
  // [seh] local_10 = ExceptionList;
  uVar8 = 0;
  bVar2 = false;
  local_1c = 0.0;
  local_20 = *(Ship **)((char *)this + 0x6c);
  if ((local_20 == (Ship *)0x0) || (param_1 == (Ship *)0x0)) {
    return false;
  }
  this_00 = *(std::string **)((int)local_20 + 0x360);
  local_34 = (std::string *)(param_1 + 0x238);
  // [seh] ExceptionList = &local_10;
  if (*(std::string **)((int)local_20 + 0x364) == this_00) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((int)local_20 + 0x35c),(std::string *)this_00,local_34);
  }
  else {
    ghidra::str::ctor(this_00,local_34);
    *(int *)((int)local_20 + 0x360) = *(int *)((int)local_20 + 0x360) + 0x18;
  }
  local_20 = param_1 + 8;
  local_30 = (float)*(double *)(param_1 + 0x28);
  local_12 = '\0';
  local_11 = '\0';
  local_2c = (undefined4 *)(float)*(double *)(param_1 + 0x30);
  local_28 = (float)*(double *)(*(int *)((char *)this + 0x6c) + 0x28);
  local_24 = (float)*(double *)(*(int *)((char *)this + 0x6c) + 0x30);
  // [seh] local_8 = 1;
  local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_30);
  fVar3 = (float)(0x5f3759df - ((uint)local_1c >> 1));
  local_18 = (&dropCargoChance)[*(int *)((char *)this + 0x74)];
  fVar3 = (1.5 - local_1c * 0.5 * fVar3 * fVar3) * fVar3 * local_1c;
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') {
    if (fVar3 <= 180.0) {
      if (120.0 < fVar3) {
        local_18 = (int *)(((int)local_18 / 3) * 2);
      }
    }
    else {
      local_18 = (int *)0x5;
      local_11 = '\x01';
    }
  }
  else {
    local_18 = (int *)0x2;
  }
  local_24 = *(float *)((char *)this + 0x6c);
  puVar10 = *(undefined4 **)((int)local_24 + 0x214);
  local_2c = *(undefined4 **)((int)local_24 + 0x218);
  piVar9 = local_18;
  if (puVar10 != local_2c) {
    do {
      iVar4 = *(int *)((SensorData *)*puVar10 + 0x130);
      if (iVar4 == 0) {
LAB_00504d87:
        bVar12 = false;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x254);
        bVar12 = false;
        if (iVar4 != 0) {
          bVar12 = *(int *)(iVar4 + 0x158) == 4;
        }
        if (!bVar12) goto LAB_00504d87;
        local_3c = (float)*(double *)((int)local_24 + 0x28);
        local_38 = (float)*(double *)((int)local_24 + 0x30);
        // [seh] local_8 = 2;
        local_1c = (float)(uVar8 | 1);
        this_01 = (Vec2 *)((SensorData *)*puVar10)->getPresumedLocation();
        // [seh] local_8 = 3;
        uVar8 = 3;
        bVar2 = true;
        local_1c = 4.2039e-45;
        fVar3 = cocos2d::Vec2::getDistanceSq(this_01,(Vec2 *)&local_3c);
        local_1c = (float)(0x5f3759df - ((uint)fVar3 >> 1));
        if (100.0 <= (1.5 - fVar3 * 0.5 * local_1c * local_1c) * local_1c * fVar3)
        goto LAB_00504d87;
        bVar12 = true;
      }
      if ((uVar8 & 2) != 0) {
        uVar8 = uVar8 & 0xfffffffd;
      }
      if (bVar2) {
        uVar8 = uVar8 & 0xfffffffe;
        bVar2 = false;
      }
      if (bVar12) {
        local_12 = '\x01';
        piVar9 = (int *)(int)((double)(int)(&dropCargoChance)[*(int *)((char *)this + 0x74)] * 1.5);
        if (100 < (int)((double)(int)(&dropCargoChance)[*(int *)((char *)this + 0x74)] * 1.5)) {
          piVar9 = (int *)0x64;
        }
        break;
      }
      puVar10 = puVar10 + 1;
      piVar9 = local_18;
    } while (puVar10 != local_2c);
  }
  // [seh] local_8 = 0xffffffff;
  local_13 = 1;
  if (*(int *)((char *)this + 0x70) == 1) {
    if ((piVar9 == (int *)0x64) || (iVar4 = rand(), iVar4 % 100 + 1 <= (int)piVar9)) {
      pSVar1 = *(Ship **)((char *)this + 0x6c);
      iVar4 = -1;
      iVar11 = 0;
      do {
        if (99 < iVar11) {
          if (iVar4 == -1) goto LAB_00504f30;
          break;
        }
        iVar4 = rand();
        iVar4 = iVar4 % 0xe;
        if (*(int *)(*(int *)(pSVar1 + 0x1f8) + 0xc + iVar4 * 4) == 0) {
          iVar4 = -1;
        }
        iVar11 = iVar11 + 1;
      } while (iVar4 == -1);
      *(int *)(pSVar1 + 0x1ec) = iVar4;
      uStack_68 = 0x504f2d;
      ShipInterface::doJettisonCargo(pSVar1,0,0,0);
LAB_00504f30:
      local_2c = (undefined4 *)local_6c;
      local_6c[0] = (std::string)0x0;
      ghidra::str::assign(local_6c,"Please call off your attack. We are complying.",0x2e);
      // [seh] local_8 = 4;
      ghidra::str::ctor
                (abStack_84,(std::string *)(*(int *)((char *)this + 0x6c) + 0x238));
      // [seh] local_8 = 0xffffffff;
      (*(ShipChatter **)((char *)this + 0x3c))->addMessage(2);
      if (param_1[0x234] != (byte)0x0) {
        (this_03)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000004);
      }
    }
    else {
      local_2c = (undefined4 *)local_6c;
      local_6c[0] = (std::string)0x0;
      ghidra::str::assign(local_6c,"EMERGENCY! Pirate attack in progress.",0x25);
      // [seh] local_8 = 5;
      ghidra::str::ctor
                (abStack_84,(std::string *)(*(int *)((char *)this + 0x6c) + 0x238));
      // [seh] local_8 = 0xffffffff;
      (*(ShipChatter **)((char *)this + 0x3c))->addMessage(3);
      if (param_1[0x234] != (byte)0x0) {
        this_02 = extraout_ECX;
        if (((*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') && (local_11 == '\0')) &&
           (local_12 != '\0')) {
          rand();
          this_02 = extraout_ECX_00;
        }
        (this_02)->addLogLine(*(LogPriority *)(param_1 + 0x224), &DAT_00000004);
      }
      local_13 = 0;
    }
  }
  pSVar1 = *(Ship **)((char *)this + 0x6c);
  bVar2 = (pSVar1)->canCurrentlyDetect(param_1);
  if (bVar2) {
    if (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') {
      QVar7 = ((GameObject *)local_20)->getQuadrant();
      (g_gameLogic)->reportPirate(QVar7);
      ((GameObject *)local_20)->getQuadrant();
      strUsingArgs(extraout_EDX);
      // [seh] local_8 = 8;
      pbVar6 = (std::string *)(*(int *)((char *)this + 0x6c) + 0x238);
    }
    else {
      ghidra::str::ctor(local_6c,local_34);
      // [seh] local_8 = 6;
      pAVar5 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pAVar5)->reportBelligerant();
      uStack_80 = 0x505017;
      strUsingArgs((char *)local_6c);
      // [seh] local_8 = 7;
      pbVar6 = (std::string *)(*(int *)((char *)this + 0x6c) + 0x238);
    }
  }
  else {
    QVar7 = ((GameObject *)(pSVar1 + 8))->getQuadrant();
    (g_gameLogic)->reportPirate(QVar7);
    ((GameObject *)local_20)->getQuadrant();
    strUsingArgs(extraout_EDX_00);
    // [seh] local_8 = 9;
    pbVar6 = (std::string *)(*(int *)((char *)this + 0x6c) + 0x238);
  }
  ghidra::str::ctor(abStack_84,pbVar6);
  // [seh] local_8 = 0xffffffff;
  (*(ShipChatter **)((char *)this + 0x3c))->addMessage(3);
  // [seh] ExceptionList = local_10;
  return (bool)local_13;
}


// Ghidra: void __thiscall ShipBehaviour::general_runLogic(ShipBehaviour *this,float param_1)
void ShipBehaviour::general_runLogic(float param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff74[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule *this_00;
  int ***pppiVar1;
  GameData *pGVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  FlagManager *pFVar8;
  AuthorityManager *pAVar9;
  int ****ppppiVar10;
  Ship *pSVar11;
  int iVar12;
  LogSystem *this_01;
  LogSystem *this_02;
  int ****ppppiVar13;
  void *pvVar14;
  int extraout_EDX;
  nothrow_t *pnVar15;
  int iVar16;
  uint unaff_EDI;
  int *piVar17;
  int *piVar18;
  std::string abStack_a0 [8];
  undefined4 uStack_98;
  std::string abStack_88 [8];
  undefined4 uStack_80;
  FollowMode FVar19;
  int ***local_60 [4];
  uint local_50;
  uint local_4c;
  ShipBehaviour *local_44;
  undefined1 *local_40;
  int ***local_3c;
  int *local_38;
  int *local_34;
  void *local_30 [5];
  uint local_1c;
  int local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c2940;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_44 = this_;
  local_14 = pcVar5;
  updateSurroundingData(this_);
  if ((*(int *)((char *)this_ + 0x124) == 0) || (*(char *)(*(int *)((char *)this_ + 0x124) + 0x160) == '\0')) {
    if (((char *)this_)[0x160] == (byte)0x0) goto LAB_005051a1;
    if (*(char *)(*(int *)(*(int *)((char *)this_ + 0x6c) + 0x40) + 0x34) != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((char *)this_ + 0x6c) + 0x40) + 0x34) = 0;
    }
    if (((char *)this_)[0x50] != (byte)0x0) {
      ((char *)this_)[0x50] = (byte)0x0;
    }
  }
  else {
    iVar6 = *(int *)(*(int *)((char *)this_ + 0x6c) + 0x40);
    if (*(char *)(*(int *)((char *)this_ + 0xd0) + 0x2c) == '\0') {
      if (*(char *)(iVar6 + 0x34) == '\0') {
        *(undefined1 *)(iVar6 + 0x34) = 1;
      }
LAB_005051a1:
      ((char *)this_)[0x50] = (byte)0x1;
    }
    else {
      if (*(char *)(iVar6 + 0x34) != '\0') {
        *(undefined1 *)(iVar6 + 0x34) = 0;
      }
      ((char *)this_)[0x50] = (byte)0x0;
    }
  }
  iVar6 = *(int *)((char *)this_ + 0x124);
  if (iVar6 != 0) {
    iVar12 = *(int *)(iVar6 + 0x268) - *(int *)(iVar6 + 0x264);
    iVar16 = iVar12 >> 0x1f;
    if (iVar12 / 0x24 + iVar16 != iVar16) {
      runGeneralDestinationLogic(this_,(float)pcVar5);
      iVar6 = *(int *)((char *)this_ + 0x124);
    }
    if (iVar6 != 0) {
      iVar6 = *(int *)((char *)this_ + 0x6c);
      iVar16 = *(int *)(iVar6 + 0x40);
      if ((((iVar16 != 0) && (piVar17 = *(int **)(iVar16 + 0x20), piVar17 != (int *)0x0)) &&
          (cVar3 = (**(code **)(*piVar17 + 0x10))(), cVar3 != '\0')) &&
         ((this_00 = *(ShipModule **)(*(int *)(iVar6 + 0x40) + 0x20), this_00 != (ShipModule *)0x0
          && (iVar6 = (this_00)->getHousedObjectCount(), 0 < iVar6)))) {
        if (*(int *)((char *)this_ + 0x40) == 0) {
          local_34 = (int *)0x0;
          local_3c = *(int ****)(*(int *)((char *)this_ + 0x6c) + 0x214);
          ppppiVar13 = *(int *****)(*(int *)((char *)this_ + 0x6c) + 0x218);
          piVar17 = (int *)((uint)((int)ppppiVar13 + (3 - (int)local_3c)) >> 2);
          if (ppppiVar13 < local_3c) {
            piVar17 = (int *)0x0;
          }
          local_38 = piVar17;
          if (piVar17 != (int *)0x0) {
            do {
              pppiVar1 = (int ***)*local_3c;
              pSVar11 = (Ship *)pppiVar1[0x4c];
              if (((pSVar11 != (Ship *)0x0) && ((float)pppiVar1[0x10] <= 0.5)) &&
                 (((float)pppiVar1[0x46] == 0.0 &&
                  (((iVar6 = *(int *)(pSVar11 + 100), piVar17 = local_38,
                    iVar6 != *(int *)(*(int *)((char *)this_ + 0x6c) + 100) &&
                    (pppiVar1[0x38] == (int **)0x0)) &&
                   (bVar4 = (pSVar11)->isSpaceShip(), piVar17 = local_38, bVar4)))))) {
                piVar18 = *(int **)(extraout_EDX * 0x6c + 0x22c + *(int *)(g_gameData + 0xcc));
                piVar7 = *(int **)(extraout_EDX * 0x6c + 0x228 + *(int *)(g_gameData + 0xcc));
                if (piVar7 != piVar18) {
                  do {
                    if (*piVar7 == iVar6) break;
                    piVar7 = piVar7 + 1;
                  } while (piVar7 != piVar18);
                  if (piVar7 != piVar18) {
                    *(Ship **)((char *)this_ + 0x40) = pSVar11;
                    *(undefined1 **)((char *)this_ + 0x44) = &DAT_42f00000;
                    abStack_88[0] = (std::string)0x0;
                    ghidra::str::assign
                              (abStack_88,"Detected a vessel on an enemy team. Engaging.",0x2d);
                    Ship::log();
                    piVar17 = local_38;
                  }
                }
              }
              local_34 = (int *)((int)local_34 + 1);
              local_3c = local_3c + 1;
            } while (local_34 != piVar17);
          }
        }
        iVar6 = *(int *)((char *)this_ + 0x124);
        if ((*(char *)(iVar6 + 0x161) != '\0') && (((char *)this_)[0x120] == (byte)0x0)) {
          bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
          if (!bVar4) {
            local_40 = abStack_88;
            ghidra::str::ctor(abStack_88,(std::string *)(iVar6 + 0x194));
            // [seh] local_8 = 0;
            pFVar8 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            bVar4 = (pFVar8)->flagSet();
            if (!bVar4) goto LAB_00505531;
            iVar6 = *(int *)((char *)this_ + 0x124);
          }
          bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
          if (!bVar4) {
            local_40 = abStack_88;
            ghidra::str::ctor(abStack_88,(std::string *)(iVar6 + 0x17c));
            // [seh] local_8 = 1;
            pFVar8 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            bVar4 = (pFVar8)->flagSet();
            if (bVar4) goto LAB_00505531;
          }
          pGVar2 = g_gameData;
          pSVar11 = *(Ship **)(g_gameData + 0xd0);
          bVar4 = (*(Ship **)((char *)this_ + 0x6c))->canCurrentlyDetect(pSVar11);
          if ((bVar4) && (*(Ship **)((char *)this_ + 0x40) != pSVar11)) {
            ((char *)this_)[0x120] = (byte)0x1;
            *(undefined4 *)((char *)this_ + 0x40) = *(undefined4 *)(pGVar2 + 0xd0);
            *(undefined1 **)((char *)this_ + 0x44) = &DAT_42f00000;
            abStack_88[0] = (std::string)0x0;
            ghidra::str::assign(abStack_88,"Detected the player ship. Engaging.",0x23);
            Ship::log();
            iVar6 = *(int *)((char *)this_ + 0x124);
            bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
            if (!bVar4) {
              local_40 = abStack_88;
              ghidra::str::ctor(abStack_88,(std::string *)(iVar6 + 0x164));
              // [seh] local_8 = 2;
              abStack_a0[0] = (std::string)0x0;
              ghidra::str::assign(abStack_a0,"XX-XXX",6);
              // [seh] local_8 = 0xffffffff;
              (*(ShipChatter **)((char *)this_ + 0x3c))->addMessage(3);
              uStack_80 = 0x50552e;
              LogSystem::addLogLine
                        (this_01,*(LogPriority *)(*(int *)((char *)this_ + 0x40) + 0x224),&DAT_00000004);
            }
          }
        }
LAB_00505531:
        iVar6 = *(int *)((char *)this_ + 0x124);
        if ((*(char *)(iVar6 + 0x161) != '\0') && (*(int *)((char *)this_ + 0x40) != 0)) {
          bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
          if (!bVar4) {
            local_40 = abStack_88;
            ghidra::str::ctor(abStack_88,(std::string *)(iVar6 + 0x1ac));
            // [seh] local_8 = 3;
            pFVar8 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            bVar4 = (pFVar8)->flagSet();
            if (bVar4) {
              abStack_88[0] = (std::string)0x0;
              ghidra::str::assign(abStack_88,"Cancelled attack on player.",0x1b);
              Ship::log();
              iVar6 = *(int *)((char *)this_ + 0x124);
              bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
              if (!bVar4) {
                local_40 = abStack_88;
                ghidra::str::ctor(abStack_88,(std::string *)(iVar6 + 0x17c));
                // [seh] local_8 = 4;
                abStack_a0[0] = (std::string)0x0;
                ghidra::str::assign(abStack_a0,"XX-XXX",6);
                // [seh] local_8 = 0xffffffff;
                (*(ShipChatter **)((char *)this_ + 0x3c))->addMessage(3);
                uStack_80 = 0x50566d;
                LogSystem::addLogLine
                          (this_02,*(LogPriority *)(*(int *)((char *)this_ + 0x40) + 0x224),&DAT_00000004);
              }
              iVar6 = *(int *)((char *)this_ + 0x6c);
              if (*(int *)(*(int *)(iVar6 + 0x40) + 0x20) != 0) {
                iVar16 = 0x3c;
                do {
                  piVar17 = *(int **)(*(int *)(*(int *)(iVar6 + 0x40) + 0x20) + iVar16);
                  if ((piVar17 != (int *)0x0) && ((char)piVar17[0xf1] != '\0')) {
                    (**(code **)(*piVar17 + 0x10))();
                  }
                  iVar16 = iVar16 + 4;
                } while (iVar16 < 0x5c);
              }
              *(undefined4 *)((char *)this_ + 0x40) = 0;
            }
          }
        }
      }
    }
  }
  if ((*(int *)((char *)this_ + 0x70) == 7) || (*(int *)((char *)this_ + 0x70) == 8)) {
    if (*(char *)(*(int *)(*(int *)((char *)this_ + 0x6c) + 0x40) + 0x34) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)((char *)this_ + 0x6c) + 0x40) + 0x34) = 1;
    }
    if (*(int *)((char *)this_ + 0x40) == 0) {
      pAVar9 = ghidra::any_singleton();
      piVar17 = *(int **)(pAVar9 + 0x14);
      local_38 = (int *)*piVar17;
      while (piVar18 = local_38, local_38 != piVar17) {
        ghidra::str::ctor
                  ((std::string *)local_30,(std::string *)(local_38 + 4));
        local_18 = piVar18[10];
        // [seh] local_8 = 5;
        ghidra::str::ctor((std::string *)local_60,(std::string *)local_30);
        local_3c = local_60[0];
        piVar18 = *(int **)(*(int *)((char *)this_ + 0x6c) + 0x214);
        piVar7 = *(int **)(*(int *)((char *)this_ + 0x6c) + 0x218);
        ppppiVar13 = (int ****)local_60[0];
        local_34 = piVar7;
        if (piVar18 != piVar7) {
          do {
            iVar6 = *piVar18;
            if (*(int *)(iVar6 + 0x130) != 0) {
              ppppiVar10 = local_60;
              if (0xf < local_4c) {
                ppppiVar10 = ppppiVar13;
              }
              bVar4 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppiVar10,local_50,pcVar5,unaff_EDI);
              piVar7 = local_34;
              ppppiVar13 = (int ****)local_3c;
              if (bVar4) {
                if (0xf < local_4c) {
                  pnVar15 = (nothrow_t *)(local_4c + 1);
                  if ((nothrow_t *)0xfff < pnVar15) {
                    ppppiVar13 = (int ****)local_3c[-1];
                    pnVar15 = (nothrow_t *)(local_4c + 0x24);
                    if (0x1f < (uint)((int)local_3c + (-4 - (int)ppppiVar13))) goto LAB_00505941;
                  }
                  operator_delete(ppppiVar13,pnVar15);
                }
                local_50 = 0;
                local_4c = 0xf;
                local_60[0] = (int ***)((uint)local_60[0] & 0xffffff00);
                if ((((iVar6 == 0) || (*(int *)(iVar6 + 0x130) == 0)) ||
                    (*(float *)(iVar6 + 0x118) != 0.0)) || (0.5 < *(float *)(iVar6 + 0x40)))
                goto LAB_005057c6;
                *(int *)(local_44 + 0x40) = *(int *)(iVar6 + 0x130);
                uStack_98 = 0x505906;
                ghidra::str::assign
                          ((std::string *)&stack0xffffff74,
                           "Detected a vessel marked as a billegerant - %s. Time to get into combat with them."
                           ,0x52);
                this_ = local_44;
                Ship::log();
                // [seh] local_8 = 0xffffffff;
                if (local_1c < 0x10) goto LAB_00505951;
                pnVar15 = (nothrow_t *)(local_1c + 1);
                pvVar14 = local_30[0];
                if ((nothrow_t *)0xfff < pnVar15) {
                  pvVar14 = *(void **)((int)local_30[0] + -4);
                  pnVar15 = (nothrow_t *)(local_1c + 0x24);
                  if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar14))) goto LAB_00505941;
                }
                operator_delete(pvVar14,pnVar15);
                goto LAB_00505951;
              }
            }
            piVar18 = piVar18 + 1;
          } while (piVar18 != piVar7);
        }
        if (0xf < local_4c) {
          pnVar15 = (nothrow_t *)(local_4c + 1);
          ppppiVar10 = ppppiVar13;
          if ((nothrow_t *)0xfff < pnVar15) {
            ppppiVar10 = (int ****)ppppiVar13[-1];
            pnVar15 = (nothrow_t *)(local_4c + 0x24);
            if (0x1f < (uint)((int)ppppiVar13 + (-4 - (int)ppppiVar10))) goto LAB_00505941;
          }
          operator_delete(ppppiVar10,pnVar15);
        }
        local_60[0] = (int ***)((uint)local_60[0] & 0xffffff00);
LAB_005057c6:
        local_4c = 0xf;
        local_50 = 0;
        // [seh] local_8 = 0xffffffff;
        if (0xf < local_1c) {
          pnVar15 = (nothrow_t *)(local_1c + 1);
          pvVar14 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar14 = *(void **)((int)local_30[0] + -4);
            pnVar15 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar14))) {
LAB_00505941:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar14,pnVar15);
        }
        ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b
                  ((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_38);
        this_ = local_44;
      }
    }
  }
LAB_00505951:
  iVar6 = *(int *)((char *)this_ + 0x6c);
  pSVar11 = *(Ship **)(iVar6 + 0x37c);
  if (pSVar11 == (Ship *)0x0) {
    pSVar11 = *(Ship **)(iVar6 + 900);
    if (pSVar11 == (Ship *)0x0) {
      pSVar11 = *(Ship **)(iVar6 + 0x380);
      if (pSVar11 == (Ship *)0x0) goto LAB_0050598d;
      FVar19 = 1;
    }
    else {
      FVar19 = 2;
    }
  }
  else {
    if (*(int *)(pSVar11 + 0xd4) != 1) goto LAB_0050598d;
    FVar19 = 0;
  }
  correctWaypointsToFlyWith(this_,pSVar11,FVar19);
LAB_0050598d:
  (*(ShipChatter **)((char *)this_ + 0x3c))->runLogic((float)pcVar5);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall ShipBehaviour::runGeneralDestinationLogic(ShipBehaviour *this,float param_1)
void ShipBehaviour::runGeneralDestinationLogic(float param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff60[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff5c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff64[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Destination *pDVar6;
  bool bVar7;
  Vec2 *pVVar8;
  FlagManager *pFVar9;
  std::string *pbVar10;
  Ship *pSVar11;
  int iVar12;
  int iVar13;
  Destination *pDVar14;
  std::string *pbVar15;
  std::string *extraout_ECX;
  uint uVar16;
  ShipBehaviour *pSVar17;
  float *pfVar18;
  word *pwVar19;
  std::string *pbVar20;
  Vec2 *unaff_EDI;
  Destination *pDVar21;
  undefined1 *puVar22;
  float in_XMM1_Da;
  float fVar23;
  uint local_94 [2];
  undefined8 local_8c;
  word *local_6c;
  undefined4 local_68;
  Destination *local_64;
  float local_60;
  undefined1 *local_5c;
  ShipBehaviour *local_58;
  ShipBehaviour *local_54;
  Destination *local_50;
  Destination *local_4c;
  ShipBehaviour *local_48;
  Destination *local_44;
  float local_40;
  undefined1 *local_3c;
  float local_38;
  float local_34;
  std::string *local_30 [4];
  uint local_20;
  uint local_1c;
  Destination local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c2a74;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar8 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_4c = (Destination *)0x0;
  local_44 = (Destination *)0x0;
  local_54 = this_;
  local_14 = pVVar8;
  if (((*(int *)((char *)this_ + 0x124) == 0) || (*(char *)(*(int *)((char *)this_ + 0x6c) + 0x2ec) != '\0')) ||
     ((((char *)this_)[0x108] == (byte)0x0 &&
      ((((char *)this_)[0x60] != (byte)0x0 &&
       (iVar12 = *(int *)((char *)this_ + 0x110) - *(int *)((char *)this_ + 0x10c) >> 0x1f,
       (*(int *)((char *)this_ + 0x110) - *(int *)((char *)this_ + 0x10c)) / 0x24 + iVar12 == iVar12))))))
  goto LAB_00506537;
  fVar23 = *(float *)((char *)this_ + 0x104);
  if (0.0 < fVar23) {
    fVar23 = fVar23 - in_XMM1_Da;
    *(float *)((char *)this_ + 0x104) = fVar23;
    if (fVar23 < 0.0) {
      local_8c = (double)CONCAT44(0x505a75,(undefined4)local_8c);
      debugPrint("AI","Wait timer hit.");
      *(undefined4 *)((char *)this_ + 0x104) = 0;
      fVar23 = 0.0;
    }
  }
  pSVar17 = this_ + 0xd4;
  local_58 = pSVar17;
  if (((*(float *)((char *)this_ + 0xd4) == -9999.0) && (*(float *)((char *)this_ + 0xd8) == -9999.0)) &&
     (fVar23 <= 0.0)) {
    pDVar21 = (Destination *)((char *)this_ + 0x10c);
    local_64 = pDVar21;
    if ((*(int *)((char *)this_ + 0x110) - *(int *)pDVar21) / 0x24 == 0) {
      if ((((char *)this_)[0x108] != (byte)0x0) || (((char *)this_)[0x60] == (byte)0x0)) {
        pSVar17 = *(ShipBehaviour **)(*(int *)((char *)this_ + 0x124) + 0x264);
        local_58 = *(ShipBehaviour **)(*(int *)((char *)this_ + 0x124) + 0x268);
        local_48 = pSVar17;
        if (pSVar17 != local_58) {
          do {
            local_38 = *(float *)pSVar17;
            local_34 = *(float *)(pSVar17 + 4);
            // [seh] local_8 = 0;
            local_48 = pSVar17;
            ghidra::str::ctor
                      ((std::string *)local_30,(std::string *)(pSVar17 + 8));
            local_18 = *(Destination *)(pSVar17 + 0x20);
            local_40 = (float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x28);
            puVar22 = (undefined1 *)(float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x30);
            // [seh] local_8._0_1_ = 2;
            // [seh] local_8._1_3_ = 0;
            local_3c = puVar22;
            fastDistance(pVVar8,unaff_EDI);
            // [seh] local_8 = CONCAT31(local_8._1_3_,1);
            if (10.0 < (float)puVar22) {
              pDVar21 = *(Destination **)((char *)this_ + 0x110);
              if (*(Destination **)((char *)this_ + 0x114) == pDVar21) {
                local_8c = (double)CONCAT44(0x505bf6,(undefined4)local_8c);
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)((char *)this_ + 0x10c),pDVar21,(Destination *)&local_38);
              }
              else {
                *(float *)pDVar21 = local_38;
                *(float *)(pDVar21 + 4) = local_34;
                // [seh] local_8 = CONCAT31(local_8._1_3_,3);
                local_64 = pDVar21;
                ghidra::str::ctor
                          ((std::string *)(pDVar21 + 8),(std::string *)local_30);
                pDVar21[0x20] = local_18;
                *(int *)((char *)this_ + 0x110) = *(int *)((char *)this_ + 0x110) + 0x24;
              }
              ((ModuleRenderData *)&local_38)->~ModuleRenderData();
            }
            else {
              ((ModuleRenderData *)&local_38)->~ModuleRenderData();
              local_48 = pSVar17;
            }
            pSVar17 = local_48 + 0x24;
            local_48 = pSVar17;
          } while (pSVar17 != local_58);
        }
        ((char *)this_)[0x60] = (byte)0x1;
      }
    }
    else {
      local_38 = -9999.0;
      local_34 = -9999.0;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (std::string *)((uint)local_30[0] & 0xffffff00);
      // [seh] local_8 = 4;
      pDVar14 = (Destination *)&DAT_00000064;
      local_40 = -9999.0;
      local_3c = (undefined1 *)0xc61c3c00;
      *(undefined4 *)((char *)this_ + 0xd4) = 0xc61c3c00;
      *(undefined4 *)((char *)this_ + 0xd8) = 0xc61c3c00;
      do {
        pDVar14 = pDVar14 + -1;
        pbVar15 = (std::string *)pDVar14;
        if ((int)pDVar14 < 1) {
LAB_00505f77:
          pSVar17 = this_ + 0xd4;
          goto LAB_00505f7d;
        }
        pfVar18 = *(float **)pDVar21;
        pbVar15 = (std::string *)(*(int *)((char *)this_ + 0x110) - (int)pfVar18);
        local_48 = (ShipBehaviour *)((int)pbVar15 / 0x24);
        if (local_48 == (ShipBehaviour *)0x0) {
          pDVar21 = (Destination *)((char *)this_ + 0x10c);
          goto LAB_00505f77;
        }
        if ((((char *)this_)[0x109] != (byte)0x0) && (local_48 != (ShipBehaviour *)&DAT_00000001)) {
          iVar12 = rand();
          pfVar18 = (float *)(*(int *)((char *)this_ + 0x10c) + (iVar12 % (int)(local_48 + -1)) * 0x24);
        }
        local_38 = *pfVar18;
        local_34 = pfVar18[1];
        pbVar15 = (std::string *)(pfVar18 + 2);
        if ((std::string *)local_30 != pbVar15) {
          if (0xf < (uint)pfVar18[7]) {
            pbVar15 = *(std::string **)pbVar15;
          }
          local_8c = (double)CONCAT44(0x505ce7,(undefined4)local_8c);
          ghidra::str::assign((std::string *)local_30,(char *)pbVar15,(uint)pfVar18[6]);
        }
        local_4c = *(Destination **)((char *)this_ + 0x110);
        local_18 = *(Destination *)(pfVar18 + 8);
        pDVar21 = *(Destination **)((char *)this_ + 0x10c);
        if (pDVar21 != local_4c) {
          do {
            local_5c = &stack0xffffff60;
            // [seh] local_8._0_1_ = 5;
            ghidra::str::ctor
                      ((std::string *)&stack0xffffff68,(std::string *)local_30);
            // [seh] local_8 = CONCAT31(local_8._1_3_,4);
            bVar7 = Destination::operator==(pDVar21);
            if (bVar7) break;
            pDVar21 = pDVar21 + 0x24;
          } while (pDVar21 != local_4c);
          if (pDVar21 != local_4c) {
            local_50 = pDVar21 + 0x24;
            if (local_50 != local_4c) {
              local_6c = (word *)(pDVar21 + 8);
              local_48 = (ShipBehaviour *)(pDVar21 + 0x2c);
              do {
                local_3c = &stack0xffffff60;
                // [seh] local_8._0_1_ = 6;
                ghidra::str::ctor
                          ((std::string *)&stack0xffffff68,(std::string *)local_30);
                pDVar6 = local_50;
                // [seh] local_8 = CONCAT31(local_8._1_3_,4);
                bVar7 = Destination::operator==(local_50);
                pSVar17 = local_48;
                if (!bVar7) {
                  *(undefined4 *)pDVar21 = *(undefined4 *)pDVar6;
                  *(undefined4 *)(pDVar21 + 4) = *(undefined4 *)(pDVar6 + 4);
                  if (local_6c != (word *)local_48) {
                    // [mislabelled-dtor] word::~word(local_6c);
                    fVar23 = *(float *)(pSVar17 + 4);
                    fVar1 = *(float *)(pSVar17 + 8);
                    fVar2 = *(float *)(pSVar17 + 0xc);
                    *(float *)local_6c = *(float *)pSVar17;
                    *(float *)(local_6c + 4) = fVar23;
                    *(float *)(local_6c + 8) = fVar1;
                    *(float *)(local_6c + 0xc) = fVar2;
                    fVar23 = *(float *)(pSVar17 + 0x14);
                    *(float *)(local_6c + 0x10) = *(float *)(pSVar17 + 0x10);
                    *(float *)(local_6c + 0x14) = fVar23;
                    *(float *)(pSVar17 + 0x10) = 0.0;
                    *(float *)(pSVar17 + 0x14) = 2.10195e-44;
                    *pSVar17 = (byte)0x0;
                  }
                  pDVar21 = pDVar21 + 0x24;
                  *(ShipBehaviour *)(local_6c + 0x18) = pSVar17[0x18];
                  local_6c = local_6c + 0x24;
                }
                local_48 = pSVar17 + 0x24;
                local_50 = local_50 + 0x24;
              } while (local_50 != local_4c);
            }
            if (pDVar21 != local_4c) {
              local_50 = *(Destination **)(local_54 + 0x110);
              if (local_4c != local_50) {
                local_48 = (ShipBehaviour *)(pDVar21 + 8);
                pwVar19 = (word *)(local_4c + 8);
                do {
                  *(undefined4 *)pDVar21 = *(undefined4 *)local_4c;
                  *(undefined4 *)(pDVar21 + 4) = *(undefined4 *)(local_4c + 4);
                  if (local_48 != (ShipBehaviour *)pwVar19) {
                    // [mislabelled-dtor] word::~word((word *)local_48);
                    uVar3 = *(undefined4 *)(pwVar19 + 4);
                    uVar4 = *(undefined4 *)(pwVar19 + 8);
                    uVar5 = *(undefined4 *)(pwVar19 + 0xc);
                    *(undefined4 *)local_48 = *(undefined4 *)pwVar19;
                    *(undefined4 *)(local_48 + 4) = uVar3;
                    *(undefined4 *)(local_48 + 8) = uVar4;
                    *(undefined4 *)(local_48 + 0xc) = uVar5;
                    uVar3 = *(undefined4 *)(pwVar19 + 0x14);
                    *(undefined4 *)(local_48 + 0x10) = *(undefined4 *)(pwVar19 + 0x10);
                    *(undefined4 *)(local_48 + 0x14) = uVar3;
                    *(undefined4 *)(pwVar19 + 0x10) = 0;
                    *(undefined4 *)(pwVar19 + 0x14) = 0xf;
                    *pwVar19 = (word)0x0;
                  }
                  local_4c = local_4c + 0x24;
                  *(word *)(local_48 + 0x18) = pwVar19[0x18];
                  pDVar21 = pDVar21 + 0x24;
                  local_48 = local_48 + 0x24;
                  pwVar19 = pwVar19 + 0x24;
                } while (local_4c != local_50);
              }
              pSVar17 = local_54;
              ghidra::lib::_Destroy_range___x28_x29(local_4c,(Destination *)pVVar8,(ghidra::lib::allocator_t *)unaff_EDI);
              *(Destination **)(pSVar17 + 0x110) = pDVar21;
            }
          }
        }
        pbVar20 = local_30[0];
        local_8c = (double)CONCAT44(0x505ecf,(undefined4)local_8c);
        bVar7 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar8,(uint)unaff_EDI);
        if (bVar7) break;
        local_48 = (ShipBehaviour *)local_94;
        if (local_18 == (byte)0x0) {
          ghidra::str::ctor((std::string *)local_94,(std::string *)local_30)
          ;
          // [seh] local_8._0_1_ = 8;
          pFVar9 = ghidra::any_singleton();
          // [seh] local_8 = CONCAT31(local_8._1_3_,4);
          bVar7 = (pFVar9)->flagSet();
        }
        else {
          local_48 = (ShipBehaviour *)local_94;
          ghidra::str::ctor((std::string *)local_94,(std::string *)local_30)
          ;
          // [seh] local_8._0_1_ = 7;
          pFVar9 = ghidra::any_singleton();
          // [seh] local_8 = CONCAT31(local_8._1_3_,4);
          bVar7 = (pFVar9)->flagSet();
          bVar7 = !bVar7;
        }
        pDVar21 = (Destination *)(local_54 + 0x10c);
        pbVar20 = local_30[0];
        this_ = local_54;
      } while (bVar7 == false);
      *(float *)local_58 = local_38;
      pbVar15 = (std::string *)(local_58 + 8);
      *(float *)(local_58 + 4) = local_34;
      if (pbVar15 != (std::string *)local_30) {
        pbVar10 = (std::string *)local_30;
        if (0xf < local_1c) {
          pbVar10 = pbVar20;
        }
        local_8c = (double)CONCAT44(0x505f60,(undefined4)local_8c);
        ghidra::str::assign(pbVar15,(char *)pbVar10,local_20);
        pbVar15 = extraout_ECX;
      }
      *(Destination *)(local_58 + 0x20) = local_18;
      pSVar17 = local_58;
      pDVar21 = local_64;
      this_ = local_54;
LAB_00505f7d:
      if ((*(float *)pSVar17 == -9999.0) && (*(float *)(pSVar17 + 4) == -9999.0)) {
        ghidra::lib::_Destroy_range___x28_x29((Destination *)pbVar15,(Destination *)pVVar8,(ghidra::lib::allocator_t *)unaff_EDI)
        ;
        *(int *)(pDVar21 + 4) = *(int *)pDVar21;
        ((ModuleRenderData *)&local_38)->~ModuleRenderData();
        goto LAB_00506537;
      }
      local_8c = (double)local_38;
      local_94[0] = 0;
      local_94[1] = 0xf;
      ghidra::str::assign
                ((std::string *)&stack0xffffff5c,"Beginning transit to new destination - %f, %f",
                 0x2d);
      Ship::log();
      if (*(int *)(*(Ship **)((char *)this_ + 0x6c) + 0xd4) == 1) {
        (*(Ship **)((char *)this_ + 0x6c))->cancelAutopilot();
      }
      local_8c = (double)CONCAT44(0x506048,(undefined4)local_8c);
      pSVar11 = (*(Sector **)(*(int *)((char *)this_ + 0x6c) + 0x24))->getSpaceStationClosestTo();
      if (pSVar11 == (Ship *)0x0) {
LAB_005060bc:
        bVar7 = false;
      }
      else {
        local_40 = (float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x28);
        local_3c = (undefined1 *)(float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x30);
        local_60 = (float)*(double *)(pSVar11 + 0x28);
        puVar22 = (undefined1 *)(float)*(double *)(pSVar11 + 0x30);
        // [seh] local_8 = 10;
        local_44 = (Destination *)0x3;
        local_4c = (Destination *)0x3;
        local_5c = puVar22;
        fastDistance(pVVar8,unaff_EDI);
        if (0.05 < (float)puVar22) goto LAB_005060bc;
        bVar7 = true;
      }
      if (((uint)local_44 & 2) != 0) {
        local_44 = (Destination *)((uint)local_44 & 0xfffffffd);
      }
      // [seh] local_8 = 4;
      if (((uint)local_44 & 1) != 0) {
        local_44 = (Destination *)((uint)local_44 & 0xfffffffe);
      }
      if (bVar7) {
        ghidra::lib::basic_string__operator_x3d
                  ((std::string *)((char *)this_ + 0x7c),(std::string *)(pSVar11 + 8));
      }
      else {
        local_8c = (double)CONCAT44(0x5060fc,(undefined4)local_8c);
        ghidra::str::assign((std::string *)((char *)this_ + 0x7c),"",0);
      }
      local_8c = (double)CONCAT44(0x50611f,(undefined4)local_8c);
      pSVar11 = (*(Sector **)(*(int *)((char *)this_ + 0x6c) + 0x24))->getSpaceStationClosestTo();
      if (pSVar11 == (Ship *)0x0) {
LAB_00506172:
        bVar7 = false;
      }
      else {
        local_40 = (float)*(double *)(pSVar11 + 0x28);
        puVar22 = (undefined1 *)(float)*(double *)(pSVar11 + 0x30);
        // [seh] local_8 = CONCAT31(local_8._1_3_,0xb);
        local_4c = (Destination *)((uint)local_44 | 4);
        local_44 = local_4c;
        local_3c = puVar22;
        fastDistance(pVVar8,unaff_EDI);
        if (0.05 < (float)puVar22) goto LAB_00506172;
        bVar7 = true;
      }
      // [seh] local_8 = 4;
      if (((uint)local_44 & 4) != 0) {
        local_44 = (Destination *)((uint)local_44 & 0xfffffffb);
      }
      if (bVar7) {
        ghidra::lib::basic_string__operator_x3d
                  ((std::string *)((char *)this_ + 0xac),(std::string *)(pSVar11 + 8));
      }
      else {
        local_8c = (double)CONCAT44(0x5061aa,(undefined4)local_8c);
        ghidra::str::assign((std::string *)((char *)this_ + 0xac),"",0);
      }
      ((ModuleRenderData *)&local_38)->~ModuleRenderData();
    }
    pSVar17 = this_ + 0xd4;
  }
  local_40 = 0.0;
  local_3c = (undefined1 *)0x0;
  *(undefined1 *)(*(int *)((char *)this_ + 0x6c) + 0x168) = 0;
  // [seh] local_8 = 0xc;
  local_64 = (Destination *)
             cocos2d::Vec2::getDistance((Vec2 *)(*(int *)((char *)this_ + 0x6c) + 0x118),(Vec2 *)&local_40);
  // [seh] local_8 = 0xffffffff;
  if ((float)local_64 == 0.0) {
    local_8c = (double)CONCAT44(0x506237,(undefined4)local_8c);
    pSVar11 = (*(Sector **)(*(int *)((char *)this_ + 0x6c) + 0x24))->getSpaceStationClosestTo();
    if (pSVar11 == (Ship *)0x0) {
LAB_005062a8:
      bVar7 = false;
    }
    else {
      local_40 = (float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x28);
      local_3c = (undefined1 *)(float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x30);
      local_60 = (float)*(double *)(pSVar11 + 0x28);
      puVar22 = (undefined1 *)(float)*(double *)(pSVar11 + 0x30);
      local_4c = (Destination *)((uint)local_44 | 0x18);
      // [seh] local_8 = 0xe;
      local_5c = puVar22;
      local_44 = local_4c;
      fastDistance(pVVar8,unaff_EDI);
      if (1.0 < (float)puVar22) goto LAB_005062a8;
      bVar7 = true;
    }
    if (((uint)local_44 & 0x10) != 0) {
      local_44 = (Destination *)((uint)local_44 & 0xffffffef);
    }
    if (((uint)local_44 & 8) != 0) {
      local_44 = (Destination *)((uint)local_44 & 0xfffffff7);
    }
    if (bVar7) {
      *(undefined1 *)(*(int *)((char *)this_ + 0x6c) + 0x168) = 1;
    }
  }
  // [seh] local_8 = 0xffffffff;
  if ((*(float *)pSVar17 != -9999.0) || (*(float *)(pSVar17 + 4) != -9999.0)) {
    fVar23 = *(float *)((char *)this_ + 0x104);
    if (fVar23 <= 0.0) {
      (*(Ship **)((char *)this_ + 0x6c))->getSpeed();
      if (fVar23 == 0.0) {
        local_40 = (float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x28);
        puVar22 = (undefined1 *)(float)*(double *)(*(int *)((char *)this_ + 0x6c) + 0x30);
        // [seh] local_8 = 0xf;
        local_3c = puVar22;
        fastDistance(pVVar8,unaff_EDI);
        // [seh] local_8 = 0xffffffff;
        if (10.0 < (float)puVar22) {
          local_60 = *(float *)pSVar17;
          local_5c = *(undefined1 **)(pSVar17 + 4);
          iVar12 = *(int *)(*(int *)((char *)this_ + 0x6c) + 0x1c4);
          iVar13 = *(int *)(*(int *)((char *)this_ + 0x6c) + 0x1c8) - iVar12 >> 5;
          if (iVar13 != 0) {
            iVar13 = iVar13 * 0x20;
            uVar16 = (uint)local_44 | 0x40;
            local_64 = *(Destination **)(iVar13 + -0x14 + iVar12);
            local_68 = *(undefined4 *)(iVar13 + -0x18 + iVar12);
            if ((char)uVar16 < '\0') {
              uVar16 = (uint)local_44 & 0xffffff7f;
            }
            // [seh] local_8 = 0x11;
            local_4c = (Destination *)(uVar16 & 0xffffffbf | 0x20);
            bVar7 = cocos2d::Vec2::equals((Vec2 *)&local_68,(Vec2 *)&local_60);
            if (bVar7) goto LAB_00506537;
          }
          // [seh] local_8 = 0xffffffff;
          local_94[0] = local_94[0] & 0xffffff00;
          ghidra::str::assign
                    ((std::string *)local_94,"Mapping a course to our destination.",0x24);
          Ship::log();
          local_8c = (double)CONCAT44(0x506537,(undefined4)local_8c);
          (*(Ship **)((char *)this_ + 0x6c))->mapCourseTo();
        }
        else {
          local_94[0] = local_94[0] & 0xffffff00;
          ghidra::str::assign((std::string *)local_94,"Reached destination.",0x14);
          Ship::log();
          if ((*(int *)((char *)this_ + 0xf8) != 0) || (*(int *)((char *)this_ + 0x100) != 0)) {
            iVar12 = diceRoll((Dice *)pVVar8);
            *(float *)((char *)this_ + 0x104) = (float)iVar12;
            local_8c = 3.18299368644791e-313;
            ghidra::str::assign
                      ((std::string *)&stack0xffffff64,
                       "Waiting %f seconds before heading to next destination...",0x38);
            Ship::log();
          }
          local_40 = -9999.0;
          local_3c = (undefined1 *)0xc61c3c00;
          *(float *)pSVar17 = -9999.0;
          *(float *)(pSVar17 + 4) = -9999.0;
        }
      }
    }
    else {
      (*(Ship **)((char *)this_ + 0x6c))->getSpeed();
      if ((0.0 < fVar23) && (bVar7 = (*(Ship **)((char *)this_ + 0x6c))->isStopping(), !bVar7)) {
        local_94[0] = CONCAT31(local_94[0]._1_3_,bVar7);
        ghidra::str::assign((std::string *)local_94,"Bringing myself to a stop..",0x1b);
        Ship::log();
        (*(Ship **)((char *)this_ + 0x6c))->allStop();
      }
    }
  }
LAB_00506537:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: int __thiscall ShipBehaviour::getNextTubeWithValidWeapon(ShipBehaviour *this)
int ShipBehaviour::getNextTubeWithValidWeapon()

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x20);
  if (piVar4 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar4 + 0x10))(0);
    if (cVar2 != '\0') {
      iVar3 = 0;
      piVar4 = (int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x6c) + 0x40) + 0x20) + 0x3c);
      do {
        iVar1 = *piVar4;
        if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) == '\0')) &&
           (*(int *)(*(int *)(iVar1 + 0x388) + 0x1b4) == 3)) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 8);
    }
  }
  return -1;
}


// Ghidra: void __thiscall ShipBehaviour::correctWaypointsToFlyWith(ShipBehaviour *this,Ship *param_1,FollowMode param_2)
void ShipBehaviour::correctWaypointsToFlyWith(Ship * param_1, FollowMode param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  float fVar3;
  Vec2 *this_00;
  undefined4 *puVar4;
  int iVar5;
  Ship *this_01;
  Vec2 *unaff_EDI;
  double dVar6;
  double dVar7;
  float fVar8;
  std::string local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  double local_50;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c2b47;
  // [seh] local_10 = ExceptionList;
  local_14 = 0.0;
  if (param_1 == (Ship *)0x0) {
    return;
  }
  if (param_2 != 0) {
    if (param_2 == 2) {
      local_28 = (double)CONCAT44((float)*(double *)(param_1 + 0x30),
                                  (float)*(double *)(param_1 + 0x28));
      // [seh] local_8 = 5;
      // [seh] ExceptionList = &local_10;
      fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)(*(int *)((char *)this + 0x6c) + 200),(Vec2 *)&local_28);
      fVar3 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
      // [seh] local_8 = 0xffffffff;
      this_01 = *(Ship **)((char *)this + 0x6c);
      if (((*(float *)(this_01 + 200) == -9999.0) && (*(float *)(this_01 + 0xcc) == -9999.0)) ||
         (20.0 < (1.5 - fVar8 * 0.5 * fVar3 * fVar3) * fVar3 * fVar8)) {
        positionFromPoint();
        // [seh] local_8 = 6;
        iVar5 = *(int *)((char *)this + 0x6c);
        if ((*(float *)(iVar5 + 200) != -9999.0) || (*(float *)(iVar5 + 0xcc) != -9999.0)) {
          local_50 = (double)*(float *)(iVar5 + 0xcc);
          local_60 = 0;
          local_5c = 0xf;
          local_70[0] = (std::string)0x0;
          ghidra::str::assign
                    (local_70,"Correcting approach to my target (from %f,%f to %f,%f.",0x36);
          Ship::log();
          iVar5 = *(int *)((char *)this + 0x6c);
        }
        *(float *)(iVar5 + 200) = local_18;
        *(float *)(iVar5 + 0xcc) = local_14;
        this_01 = *(Ship **)((char *)this + 0x6c);
      }
      // [seh] local_8 = 0xffffffff;
      if (*(int *)(this_01 + 0x1c8) - *(int *)(this_01 + 0x1c4) >> 5 != 1) {
        (this_01)->clearWaypointFlags();
        *(undefined4 *)(this_01 + 0x1c8) = *(undefined4 *)(this_01 + 0x1c4);
        (*(Ship **)((char *)this + 0x6c))->addWaypoint();
        iVar5 = *(int *)((char *)this + 0x6c);
        *(undefined4 *)(iVar5 + 0xd4) = 1;
        *(undefined4 *)(iVar5 + 0x2c0) = 0;
        *(undefined4 *)(iVar5 + 0x2c4) = 0;
        debugPrint("DETAIL","%s: Approach waypoint added.");
        // [seh] ExceptionList = local_10;
        return;
      }
      this_00 = (Vec2 *)(this_01)->getFinalWaypointLocation();
      // [seh] local_8 = 7;
      goto LAB_00506d30;
    }
    if (param_2 != 1) {
      return;
    }
    local_20 = -9999.0;
    local_1c = -9999.0;
    if ((*(float *)(*(int *)((char *)this + 0x6c) + 200) == -9999.0) &&
       (ExceptionList = &local_10, *(float *)(*(int *)((char *)this + 0x6c) + 0xcc) == -9999.0)) {
LAB_00506c15:
      bVar2 = true;
    }
    else {
      fVar3 = (float)*(double *)(param_1 + 0x30);
      local_28 = (double)CONCAT44(fVar3,(float)*(double *)(param_1 + 0x28));
      // [seh] local_8 = 9;
      local_14 = 3.36312e-44;
      // [seh] ExceptionList = &local_10;
      // [cookie] fastDistance((Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
      if (20.0 < fVar3) goto LAB_00506c15;
      bVar2 = false;
    }
    // [seh] local_8 = 0xffffffff;
    if (bVar2) {
      puVar4 = (undefined4 *)positionFromPoint();
      iVar5 = *(int *)((char *)this + 0x6c);
      *(undefined4 *)(iVar5 + 200) = *puVar4;
      *(undefined4 *)(iVar5 + 0xcc) = puVar4[1];
    }
    this_01 = *(Ship **)((char *)this + 0x6c);
    if (*(int *)(this_01 + 0x1c8) - *(int *)(this_01 + 0x1c4) >> 5 != 1) {
      (this_01)->clearWaypointFlags();
      *(undefined4 *)(this_01 + 0x1c8) = *(undefined4 *)(this_01 + 0x1c4);
      (*(Ship **)((char *)this + 0x6c))->addWaypoint();
      iVar5 = *(int *)((char *)this + 0x6c);
      *(undefined4 *)(iVar5 + 0xd4) = 1;
      *(undefined4 *)(iVar5 + 0x2c0) = 0;
      *(undefined4 *)(iVar5 + 0x2c4) = 0;
      debugPrint("DETAIL","%s: Shadow waypoint added.");
      // [seh] ExceptionList = local_10;
      return;
    }
    this_00 = (Vec2 *)(this_01)->getFinalWaypointLocation();
    // [seh] local_8 = 10;
    goto LAB_00506d30;
  }
  param_2 = (FollowMode)(*(float *)(param_1 + 0x120) + 135.0);
  if (360.0 <= (float)param_2) {
    param_2 = (FollowMode)((float)param_2 - 360.0);
  }
  local_28 = -5.592396466345195e+29;
  iVar5 = *(int *)((char *)this + 0x6c);
  if ((*(float *)(iVar5 + 200) == -9999.0) &&
     (ExceptionList = &local_10, *(float *)(iVar5 + 0xcc) == -9999.0)) {
LAB_005066fd:
    bVar2 = true;
  }
  else {
    local_20 = (float)*(double *)(param_1 + 0x28);
    local_1c = (float)*(double *)(param_1 + 0x30);
    // [seh] local_8 = 1;
    local_14 = 4.2039e-45;
    // [seh] ExceptionList = &local_10;
    fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar5 + 200),(Vec2 *)&local_20);
    fVar3 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
    if (20.0 < (1.5 - fVar8 * 0.5 * fVar3 * fVar3) * fVar3 * fVar8) goto LAB_005066fd;
    bVar2 = false;
  }
  // [seh] local_8 = 0xffffffff;
  if (bVar2) {
    if ((*(float *)(*(int *)((char *)this + 0x6c) + 200) != -9999.0) ||
       (*(float *)(*(int *)((char *)this + 0x6c) + 0xcc) != -9999.0)) {
      local_50 = (double)((ulonglong)local_50 & 0xffffffffffffff00);
      local_5c = 0x50675d;
      ghidra::str::assign
                ((std::string *)&local_50,"Correcting approach to my formation target.",0x2b);
      Ship::log();
    }
    local_18 = (float)*(double *)(param_1 + 0x28);
    local_14 = (float)*(double *)(param_1 + 0x30);
    // [seh] local_8 = 2;
    dVar6 = (double)(float)param_2 * 0.017453292519943295;
    local_28 = dVar6;
    __libm_sse2_sin_precise();
    dVar7 = local_28;
    __libm_sse2_cos_precise();
    local_1c = (float)(dVar7 * 4.0);
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    local_20 = (float)(dVar6 * 4.0);
    cocos2d::Vec2::operator+((Vec2 *)&local_18,(Vec2 *)&local_28);
    iVar5 = *(int *)((char *)this + 0x6c);
    *(undefined4 *)(iVar5 + 200) = (undefined4)local_28;
    *(undefined4 *)(iVar5 + 0xcc) = local_28._4_4_;
  }
  // [seh] local_8 = 0xffffffff;
  this_01 = *(Ship **)((char *)this + 0x6c);
  if (*(int *)(this_01 + 0x1c8) - *(int *)(this_01 + 0x1c4) >> 5 != 1) {
    (this_01)->clearWaypointFlags();
    *(undefined4 *)(this_01 + 0x1c8) = *(undefined4 *)(this_01 + 0x1c4);
    (*(Ship **)((char *)this + 0x6c))->addWaypoint();
    iVar5 = *(int *)((char *)this + 0x6c);
    *(undefined4 *)(iVar5 + 0xd4) = 1;
    *(undefined4 *)(iVar5 + 0x2c0) = 0;
    *(undefined4 *)(iVar5 + 0x2c4) = 0;
    debugPrint("DETAIL","%s: Formation waypoint added.");
    // [seh] ExceptionList = local_10;
    return;
  }
  this_00 = (Vec2 *)(this_01)->getFinalWaypointLocation();
  // [seh] local_8 = 4;
LAB_00506d30:
  bVar2 = cocos2d::Vec2::equals(this_00,(Vec2 *)(this_01 + 200));
  // [seh] local_8 = 0xffffffff;
  if (!bVar2) {
    iVar5 = *(int *)((char *)this + 0x6c);
    iVar1 = *(int *)(iVar5 + 0x1c4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + 200);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + 0xcc);
    (*(Ship **)((char *)this + 0x6c))->resetBurnVector();
  }
  // [seh] ExceptionList = local_10;
  return;
}
