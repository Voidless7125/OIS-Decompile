// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: SpaceStation * __thiscall SpaceStation::SpaceStation(SpaceStation *this,undefined4 param_1,void *param_3)
SpaceStation::SpaceStation(undefined4 param_1, void * param_3)

{
  FictionData *pFVar1;
  Faction *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_0000001c;
  std::string local_54 [12];
  undefined4 uStack_48;
  std::string local_3c [12];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c4210;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_3c[0] = (std::string)0x0;
  uStack_48 = 0x51b54a;
  ghidra::str::assign(local_3c,"",0);
  // [seh] local_8._0_1_ = 1;
  local_54[0] = (std::string)0x0;
  ghidra::str::assign(local_54,"",0);
  // [seh] local_8._0_1_ = 0;
  new ((void *)((Ship *)this)) Ship(param_1, 9);
  // [seh] local_8._0_1_ = 2;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined2 *)((char *)this + 0x388) = 0;
  *(undefined4 *)((char *)this + 0x38c) = 0xffffffff;
  ghidra::str::ctor(local_3c,(std::string *)&param_3);
  // [seh] local_8._0_1_ = 3;
  pFVar1 = ghidra::any_singleton();
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  pFVar2 = (pFVar1)->getFactionForID();
  *(Faction **)((char *)this + 0x390) = pFVar2;
  *(undefined4 *)((char *)this + 0x394) = 0x50;
  *(undefined4 *)((char *)this + 0x398) = 0;
  *(undefined4 *)((char *)this + 0x3ac) = 0;
  *(undefined4 *)((char *)this + 0x3b0) = 0xf;
  ((char *)this)[0x39c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x3b4) = 1;
  *(undefined4 *)((char *)this + 0x3b8) = 0;
  *(undefined4 *)((char *)this + 0x3bc) = 0;
  *(undefined4 *)((char *)this + 0x3c0) = 0;
  *(undefined4 *)((char *)this + 0x3c4) = 0;
  *(undefined4 *)((char *)this + 0x3c8) = 0;
  *(undefined4 *)((char *)this + 0x3cc) = 0;
  *(undefined4 *)((char *)this + 0x3d0) = 0;
  *(undefined4 *)((char *)this + 0x3d4) = 0;
  *(undefined4 *)((char *)this + 0x3d8) = 0;
  *(undefined4 *)((char *)this + 0x3dc) = 10;
  *(undefined4 *)((char *)this + 0x3e0) = 0x16;
  *(undefined4 *)((char *)this + 0x3e4) = 0;
  *(undefined4 *)((char *)this + 1000) = 0x3c;
  *(undefined4 *)((char *)this + 0x3ec) = 0;
  *(undefined4 *)((char *)this + 0x3f0) = 0;
  *(undefined4 *)((char *)this + 0x3f4) = 0;
  *(undefined4 *)((char *)this + 0x3f8) = 0;
  *(undefined4 *)((char *)this + 0x3fc) = 0;
  *(undefined4 *)((char *)this + 0x400) = 0;
  *(undefined4 *)((char *)this + 0x404) = 0;
  *(undefined4 *)((char *)this + 0x408) = 0;
  *(undefined4 *)((char *)this + 0x40c) = 0;
  *(undefined4 *)((char *)this + 0x410) = 0;
  *(undefined4 *)((char *)this + 0x414) = 0;
  *(undefined4 *)((char *)this + 0x418) = 0;
  *(undefined4 *)((char *)this + 0x41c) = 0;
  *(undefined4 *)((char *)this + 0x420) = 0;
  *(undefined4 *)((char *)this + 0x424) = 0;
  *(undefined4 *)((char *)this + 0x428) = 0;
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x51b756;
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall SpaceStation::shipUndocking(SpaceStation *this,Ship *param_1)
void SpaceStation::shipUndocking(Ship * param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  SpaceStation *pSVar4;
  Ship *pSVar5;
  int *piVar6;
  char *pcVar7;
  
  piVar1 = *(int **)((char *)this + 0x3d4);
  for (piVar6 = *(int **)((char *)this + 0x3d0); (piVar6 != piVar1 && ((Ship *)*piVar6 != param_1));
      piVar6 = piVar6 + 1) {
  }
  if (piVar6 == piVar1) {
    pSVar5 = param_1 + 8;
    if (0xf < *(uint *)(param_1 + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    pSVar4 = this + 0x238;
    if (0xf < *(uint *)((char *)this + 0x24c)) {
      pSVar4 = *(SpaceStation **)pSVar4;
    }
    pcVar7 = "%s: vessel \'%s\' was NOT listed as docked, but was asked to undock.";
  }
  else {
    puVar3 = (undefined4 *)ghidra::lib::remove___x28_x29(*(int **)((char *)this + 0x3d0),piVar1);
    piVar6 = (int *)*puVar3;
    if (piVar6 != piVar1) {
      iVar2 = *(int *)((char *)this + 0x3d4);
      memmove(piVar6,piVar1,iVar2 - (int)piVar1);
      *(int *)((char *)this + 0x3d4) = (iVar2 - (int)piVar1) + (int)piVar6;
    }
    pSVar5 = param_1 + 8;
    if (0xf < *(uint *)(param_1 + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    pSVar4 = this + 0x238;
    if (0xf < *(uint *)((char *)this + 0x24c)) {
      pSVar4 = *(SpaceStation **)pSVar4;
    }
    pcVar7 = "%s: vessel \'%s\' has undocked from us.";
  }
  debugPrint("GAME",pcVar7,pSVar4,pSVar5);
  return;
}


// Ghidra: void __thiscall SpaceStation::shipDocking(SpaceStation *this,Ship *param_1)
void SpaceStation::shipDocking(Ship * param_1)

{
  int *piVar1;
  AnimationFrames **ppAVar2;
  Ship *pSVar3;
  Ship *pSVar4;
  int iVar5;
  SpaceStation *pSVar6;
  int *piVar7;
  char *pcVar8;
  
  piVar7 = *(int **)((char *)this + 0x3d0);
  piVar1 = *(int **)((char *)this + 0x3d4);
  if (piVar7 != piVar1) {
    do {
      if ((Ship *)*piVar7 == param_1) break;
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
    if (piVar7 != piVar1) {
      pSVar4 = param_1 + 8;
      if (0xf < *(uint *)(param_1 + 0x1c)) {
        pSVar4 = *(Ship **)pSVar4;
      }
      pSVar6 = this + 0x238;
      if (0xf < *(uint *)((char *)this + 0x24c)) {
        pSVar6 = *(SpaceStation **)pSVar6;
      }
      pcVar8 = "%s: vessel \'%s\' asked to dock, but was already docked.";
      goto LAB_0051b8d3;
    }
  }
  ppAVar2 = *(AnimationFrames ***)((char *)this + 0x3d4);
  if (*(AnimationFrames ***)((char *)this + 0x3d8) == ppAVar2) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x3d0),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)param_1;
    *(int *)((char *)this + 0x3d4) = *(int *)((char *)this + 0x3d4) + 4;
  }
  pSVar4 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar4 = *(Ship **)pSVar4;
  }
  pSVar6 = this + 0x238;
  if (0xf < *(uint *)((char *)this + 0x24c)) {
    pSVar6 = *(SpaceStation **)pSVar6;
  }
  pcVar8 = "%s: vessel \'%s\' docked with us";
LAB_0051b8d3:
  pSVar3 = param_1;
  debugPrint("GAME",pcVar8,pSVar6,pSVar4);
  if (pSVar3[0x234] != (byte)0x0) {
    iVar5 = rand();
    *(int *)((char *)this + 0x3b4) = iVar5 % 10 + 1;
  }
  return;
}


// Ghidra: bool __thiscall SpaceStation::shipHasPaidForUse(SpaceStation *this,char *param_2)
bool SpaceStation::shipHasPaidForUse(char * param_2)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  bool local_5;
  
  pcVar2 = param_2;
  uVar1 = (*(int *)((char *)this + 0x418) - *(int *)((char *)this + 0x414)) / 0x18;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        local_5 = true;
        goto LAB_0051b980;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  local_5 = false;
LAB_0051b980:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return local_5;
}


// Ghidra: bool __thiscall SpaceStation::requestUndockingClearance(SpaceStation *this,Ship *param_1,bool param_2)
bool SpaceStation::requestUndockingClearance(Ship * param_1, bool param_2)

{
  MetaGameAction **ppMVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined3 in_stack_00000009;
  
  if (!param_2) {
    if (*(int *)((char *)this + 0x3dc) == 0) {
      return true;
    }
    if ((*(int *)((char *)this + 0x390) != 0) && (0 < (int)*(float *)(*(int *)((char *)this + 0x390) + 0xd0))) {
      return false;
    }
  }
  if (*(int *)((char *)this + 0x3dc) != 0) {
    uVar3 = 0;
    puVar4 = *(undefined4 **)((char *)this + 0x3c4);
    uVar5 = *(int *)((char *)this + 0x3c8) - (int)puVar4 >> 2;
    if (uVar5 != 0) {
      do {
        if (*(Ship **)*puVar4 == param_1) {
          iVar2 = *(int *)(*(int *)((char *)this + 0x3c4) + uVar3 * 4);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 8) = 2;
            return true;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < uVar5);
    }
  }
  _param_2 = operator_new(0xc);
  *(Ship **)_param_2 = param_1;
  *(undefined4 *)(_param_2 + 4) = 0;
  *(undefined4 *)(_param_2 + 8) = 2;
  ppMVar1 = *(MetaGameAction ***)((char *)this + 0x3c8);
  if (*(MetaGameAction ***)((char *)this + 0x3cc) == ppMVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x3c4),ppMVar1,(MetaGameAction **)&param_2);
    return true;
  }
  *ppMVar1 = _param_2;
  *(int *)((char *)this + 0x3c8) = *(int *)((char *)this + 0x3c8) + 4;
  return true;
}


// Ghidra: void __thiscall SpaceStation::regenerateExtras(SpaceStation *this)
void SpaceStation::regenerateExtras()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff30[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  ExtraSpawned *pEVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  GameCharacter *pGVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  int iVar10;
  ghidra::lib::allocator_t *unaff_EDI;
  bool bVar11;
  std::string abStack_cc [4];
  undefined4 uStack_c8;
  void *local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  int local_88;
  int local_84;
  uint local_80;
  SpaceStation *local_7c;
  Structure *local_78;
  uint local_74;
  void *local_70 [4];
  undefined4 local_60;
  uint local_5c;
  GameCharacter *local_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  ExtraSpawned *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  // [seh] puStack_18 = &DAT_005c4253;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = (ExtraSpawned *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  bVar11 = false;
  local_8c = 0;
  if (*(int *)((char *)this + 0x254) != 0) {
    bVar11 = *(int *)(*(int *)((char *)this + 0x254) + 0x158) == 1;
  }
  local_7c = this;
  puVar3 = &stack0xfffffffc;
  if (bVar11) {
    ghidra::lib::_Destroy_range___x28_x29((ExtraSpawned *)this,local_24,unaff_EDI);
    *(undefined4 *)((char *)this + 0x3f0) = *(undefined4 *)((char *)this + 0x3ec);
    ghidra::str::ctor(abStack_cc,(std::string *)((char *)this + 0x68));
    local_78 = (g_gameData)->getStructure();
    local_88 = 0;
    local_84 = 0;
    iVar5 = *(int *)(local_78 + 0x18);
    local_74 = 0;
    if (*(int *)(local_78 + 0x1c) - iVar5 >> 2 != 0) {
      do {
        iVar1 = *(int *)(iVar5 + local_74 * 4);
        iVar10 = local_74 * 4;
        local_80 = 0;
        if (*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2 != 0) {
          do {
            iVar1 = local_80 * 4;
            iVar5 = *(int *)(iVar1 + *(int *)(*(int *)(iVar5 + iVar10) + 0x90));
            if ((*(int *)(iVar5 + 0x3c) == 6) && (*(char *)(iVar5 + 0xfc) != '\0')) {
              local_84 = local_84 + 1;
              iVar5 = *(int *)(iVar5 + 0xf8);
              if ((((0 < iVar5) || (iVar5 = *(int *)(local_7c + 1000), iVar10 = 0, 0 < iVar5)) &&
                  (iVar10 = iVar5, iVar5 == 100)) || (iVar5 = rand(), iVar5 % 100 < iVar10)) {
                ghidra::str::ctor
                          (abStack_cc,
                           (std::string *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(local_78 + 0x18) + local_74 * 4) +
                                             0x90) + iVar1) + 0x58));
                getTagFor(local_7c);
                local_14 = 0;
                ghidra::str::ctor
                          ((std::string *)&stack0xffffff30,(std::string *)local_70);
                pGVar6 = GameData::getExtraWithTag();
                if (pGVar6 != (GameCharacter *)0x0) {
                  ghidra::str::ctor
                            ((std::string *)local_a8,
                             (std::string *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(local_78 + 0x18) + local_74 * 4) +
                                               0x90) + iVar1) + 0x58));
                  local_14._0_1_ = 1;
                  local_58 = pGVar6;
                  ghidra::str::ctor
                            ((std::string *)&local_54,(std::string *)local_a8);
                  local_14._0_1_ = 0;
                  uVar4 = (undefined1)local_14;
                  local_14._0_1_ = 0;
                  if (0xf < local_94) {
                    pnVar8 = (nothrow_t *)(local_94 + 1);
                    pvVar7 = local_a8[0];
                    if ((nothrow_t *)0xfff < pnVar8) {
                      pvVar7 = *(void **)((int)local_a8[0] + -4);
                      pnVar8 = (nothrow_t *)(local_94 + 0x24);
                      if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar7))) goto LAB_0051bf1b;
                    }
                    operator_delete(pvVar7,pnVar8);
                  }
                  local_98 = 0;
                  local_94 = 0xf;
                  local_a8[0] = (void *)((uint)local_a8[0] & 0xffffff00);
                  local_14._0_1_ = 2;
                  pEVar2 = *(ExtraSpawned **)(local_7c + 0x3f0);
                  if (*(ExtraSpawned **)(local_7c + 0x3f4) == pEVar2) {
                    ghidra::lib::vector___Emplace_reallocate
                              ((ghidra::vector *)(local_7c + 0x3ec),pEVar2,(ExtraSpawned *)&local_58);
                    uVar9 = uStack_40;
                  }
                  else {
                    *(GameCharacter **)pEVar2 = local_58;
                    *(undefined4 *)(pEVar2 + 0x14) = 0;
                    *(undefined4 *)(pEVar2 + 0x18) = 0;
                    *(void **)(pEVar2 + 4) = local_54;
                    *(undefined4 *)(pEVar2 + 8) = uStack_50;
                    *(undefined4 *)(pEVar2 + 0xc) = uStack_4c;
                    *(undefined4 *)(pEVar2 + 0x10) = uStack_48;
                    local_54 = (void *)((uint)local_54 & 0xffffff00);
                    *(undefined4 *)(pEVar2 + 0x14) = local_44;
                    *(uint *)(pEVar2 + 0x18) = uStack_40;
                    *(int *)(local_7c + 0x3f0) = *(int *)(local_7c + 0x3f0) + 0x1c;
                    uVar9 = 0xf;
                  }
                  local_14._0_1_ = 0;
                  if (0xf < uVar9) {
                    pnVar8 = (nothrow_t *)(uVar9 + 1);
                    pvVar7 = local_54;
                    if ((nothrow_t *)0xfff < pnVar8) {
                      pvVar7 = *(void **)((int)local_54 + -4);
                      pnVar8 = (nothrow_t *)(uVar9 + 0x24);
                      uVar4 = (undefined1)local_14;
                      if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar7))) goto LAB_0051bf1b;
                    }
                    operator_delete(pvVar7,pnVar8);
                  }
                  ghidra::str::ctor
                            ((std::string *)local_3c,(std::string *)(pGVar6 + 0xf8));
                  local_8c = local_8c | 1;
                  local_14._0_1_ = 3;
                  uStack_c8 = 0x51bdf8;
                  debugPrint("DETAIL","%s selected for spawn point %s");
                  local_14._0_1_ = 0;
                  if (0xf < local_28) {
                    pnVar8 = (nothrow_t *)(local_28 + 1);
                    pvVar7 = local_3c[0];
                    if ((nothrow_t *)0xfff < pnVar8) {
                      pvVar7 = *(void **)((int)local_3c[0] + -4);
                      pnVar8 = (nothrow_t *)(local_28 + 0x24);
                      uVar4 = (undefined1)local_14;
                      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7))) goto LAB_0051bf1b;
                    }
                    operator_delete(pvVar7,pnVar8);
                  }
                  local_88 = local_88 + 1;
                  local_2c = 0;
                  local_28 = 0xf;
                  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
                }
                local_14._0_1_ = 0xff;
                local_14._1_3_ = 0xffffff;
                if (0xf < local_5c) {
                  pnVar8 = (nothrow_t *)(local_5c + 1);
                  pvVar7 = local_70[0];
                  if ((nothrow_t *)0xfff < pnVar8) {
                    pvVar7 = *(void **)((int)local_70[0] + -4);
                    pnVar8 = (nothrow_t *)(local_5c + 0x24);
                    uVar4 = (undefined1)local_14;
                    if (0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar7))) {
LAB_0051bf1b:
                      local_14._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  operator_delete(pvVar7,pnVar8);
                }
                local_60 = 0;
                local_5c = 0xf;
                local_70[0] = (void *)((uint)local_70[0] & 0xffffff00);
              }
            }
            local_80 = local_80 + 1;
            iVar5 = *(int *)(local_78 + 0x18);
            iVar10 = local_74 * 4;
          } while (local_80 <
                   (uint)(*(int *)(*(int *)(iVar5 + iVar10) + 0x94) -
                          *(int *)(*(int *)(iVar5 + iVar10) + 0x90) >> 2));
        }
        local_74 = local_74 + 1;
      } while (local_74 < (uint)(*(int *)(local_78 + 0x1c) - iVar5 >> 2));
    }
    uStack_c8 = 0x51befa;
    debugPrint("DETAIL","Generated %d extras at %d spawn points");
    puVar3 = puStack_20;
  }
  // [seh] puStack_20 = puVar3;
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: basic_string<> * __thiscall SpaceStation::getTagFor(SpaceStation *this,basic_string<> *param_2,char *param_3)
std::string * SpaceStation::getTagFor(std::string * param_2, char * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  int iVar2;
  std::string *pbVar3;
  bool bVar4;
  char *pcVar5;
  Structure *pSVar6;
  char *pcVar7;
  std::string *pbVar8;
  int iVar9;
  int iVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  std::string abStack_48 [12];
  undefined4 uStack_3c;
  uint local_1c;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b37d8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_48,(std::string *)((char *)this + 0x68));
  pSVar6 = (g_gameData)->getStructure(0);
  local_14 = 0;
  iVar10 = *(int *)(pSVar6 + 0x18);
  if (*(int *)(pSVar6 + 0x1c) - iVar10 >> 2 != 0) {
    do {
      iVar12 = *(int *)(iVar10 + local_14 * 4);
      local_1c = 0;
      if (*(int *)(iVar12 + 0x94) - *(int *)(iVar12 + 0x90) >> 2 != 0) {
        do {
          iVar10 = *(int *)(*(int *)(*(int *)(iVar10 + local_14 * 4) + 0x90) + local_1c * 4);
          pcVar7 = (char *)&param_3;
          if (0xf < in_stack_0000001c) {
            pcVar7 = param_3;
          }
          uStack_3c = 0x51c043;
          bVar4 = ghidra::lib::_Traits_equal___x28_x29(pcVar7,in_stack_00000018,pcVar5,unaff_EDI);
          if (bVar4) {
            pbVar8 = (std::string *)0x0;
            puVar1 = *(undefined4 **)(iVar10 + 0x5c8);
            iVar12 = 0;
            iVar10 = *(int *)(iVar10 + 0x5cc) - (int)puVar1 >> 2;
            if (iVar10 == 0) {
              iVar10 = *(int *)((char *)this + 0x3bc) - (int)*(undefined4 **)((char *)this + 0x3b8) >> 2;
              if (iVar10 == 1) {
                pbVar8 = (std::string *)**(undefined4 **)((char *)this + 0x3b8);
              }
              else {
                if (iVar10 == 0) goto LAB_0051c15a;
                do {
                  if (0x31 < iVar12) break;
                  iVar10 = *(int *)((char *)this + 0x3bc);
                  iVar2 = *(int *)((char *)this + 0x3b8);
                  iVar9 = rand();
                  pbVar3 = *(std::string **)
                            (*(int *)((char *)this + 0x3b8) + (iVar9 % (iVar10 - iVar2 >> 2)) * 4);
                  iVar10 = rand();
                  pbVar8 = (std::string *)0x0;
                  if (iVar10 % 100 + 1 <= *(int *)(pbVar3 + 0x18)) {
                    pbVar8 = pbVar3;
                  }
                  iVar12 = iVar12 + 1;
                } while (pbVar8 == (std::string *)0x0);
              }
            }
            else if (iVar10 == 1) {
              pbVar8 = (std::string *)*puVar1;
            }
            else {
              do {
                if (0x31 < iVar12) break;
                iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(pSVar6 + 0x18) + local_14 * 4) + 0x90)
                                 + local_1c * 4);
                iVar2 = *(int *)(iVar10 + 0x5cc);
                iVar10 = *(int *)(iVar10 + 0x5c8);
                iVar9 = rand();
                pbVar3 = *(std::string **)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(pSVar6 + 0x18) +
                                                              local_14 * 4) + 0x90) + local_1c * 4)
                                   + 0x5c8) + (iVar9 % (iVar2 - iVar10 >> 2)) * 4);
                iVar10 = rand();
                pbVar8 = (std::string *)0x0;
                if (iVar10 % 100 + 1 <= *(int *)(pbVar3 + 0x18)) {
                  pbVar8 = pbVar3;
                }
                iVar12 = iVar12 + 1;
              } while (pbVar8 == (std::string *)0x0);
            }
            if (pbVar8 != (std::string *)0x0) {
              ghidra::str::ctor(param_2,pbVar8);
              if (0xf < in_stack_0000001c) {
                pnVar11 = (nothrow_t *)(in_stack_0000001c + 1);
                pcVar5 = param_3;
                if ((nothrow_t *)0xfff < pnVar11) {
                  pcVar5 = *(char **)(param_3 + -4);
                  pnVar11 = (nothrow_t *)(in_stack_0000001c + 0x24);
                  if ((char *)0x1f < param_3 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                uStack_3c = 0x51c232;
                operator_delete(pcVar5,pnVar11);
              }
              // [seh] ExceptionList = local_10;
              return param_2;
            }
          }
LAB_0051c15a:
          local_1c = local_1c + 1;
          iVar10 = *(int *)(pSVar6 + 0x18);
          iVar12 = *(int *)(iVar10 + local_14 * 4);
        } while (local_1c < (uint)(*(int *)(iVar12 + 0x94) - *(int *)(iVar12 + 0x90) >> 2));
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(pSVar6 + 0x1c) - iVar10 >> 2));
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (std::string)0x0;
  uStack_3c = 0x51c1c4;
  ghidra::str::assign(param_2,"",0);
  if (0xf < in_stack_0000001c) {
    pnVar11 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar5 = param_3;
    if ((nothrow_t *)0xfff < pnVar11) {
      pcVar5 = *(char **)(param_3 + -4);
      pnVar11 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_3c = 0x51c252;
    operator_delete(pcVar5,pnVar11);
  }
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: void __thiscall SpaceStation::dockShip(SpaceStation *this,Ship *param_1)
void SpaceStation::dockShip(Ship * param_1)

{
  int iVar1;
  LogSystem *this_00;
  
  if (param_1[0x234] != (byte)0x0) {
    regenerateExtras(this);
  }
  if ((*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') &&
     (this_00 = *(LogSystem **)((char *)this + 0x3e4), 0 < (int)this_00)) {
    if (param_1[0x234] != (byte)0x0) {
      LogSystem::addLogLine
                (this_00,*(LogPriority *)(param_1 + 0x224),(char *)0x3,
                 "`^WARNING`7: Docked without an active iFF signal; `$%dc`7 fine.",this_00);
      this_00 = *(LogSystem **)((char *)this + 0x3e4);
    }
    iVar1 = *(int *)((char *)this + 0x390);
    if (iVar1 == 0) {
      debugPrint("ERROR","Tried to add owed amount to station with no faction.");
    }
    else {
      *(float *)(iVar1 + 0xd0) = (float)(int)this_00 + *(float *)(iVar1 + 0xd0);
    }
  }
  if ((param_1[0x234] != (byte)0x0) && (*(TradeLocation **)((char *)this + 0x398) != (TradeLocation *)0x0))
  {
    (*(TradeLocation **)((char *)this + 0x398))->resetAndRepopulate();
  }
  return;
}


// Ghidra: bool __thiscall SpaceStation::shipHasDockingClearance(SpaceStation *this,Ship *param_1)
bool SpaceStation::shipHasDockingClearance(Ship * param_1)

{
  DockingRequest *pDVar1;
  
  if (*(int *)((char *)this + 0x3dc) != 0) {
    pDVar1 = getDockingRequest(this,param_1);
    if ((pDVar1 == (DockingRequest *)0x0) || (*(int *)(pDVar1 + 8) != 0)) {
      return false;
    }
  }
  return true;
}


// Ghidra: bool __thiscall SpaceStation::shipHasUndockingClearance(SpaceStation *this,Ship *param_1)
bool SpaceStation::shipHasUndockingClearance(Ship * param_1)

{
  DockingRequest *pDVar1;
  
  if ((*(int *)((char *)this + 0x3dc) != 0) && (*(int *)(*(int *)((char *)this + 0x254) + 0x158) != 3)) {
    pDVar1 = getDockingRequest(this,param_1);
    if ((pDVar1 == (DockingRequest *)0x0) || (*(int *)(pDVar1 + 8) != 2)) {
      return false;
    }
  }
  return true;
}


// Ghidra: DockingRequest * __thiscall SpaceStation::getDockingRequest(SpaceStation *this,Ship *param_1)
DockingRequest * SpaceStation::getDockingRequest(Ship * param_1)

{
  DockingRequest *pDVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((char *)this + 0x3dc) != 0) {
    uVar2 = 0;
    uVar3 = *(int *)((char *)this + 0x3c8) - *(int *)((char *)this + 0x3c4) >> 2;
    if (uVar3 != 0) {
      do {
        pDVar1 = *(DockingRequest **)(*(int *)((char *)this + 0x3c4) + uVar2 * 4);
        if (*(Ship **)pDVar1 == param_1) {
          return pDVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return (DockingRequest *)0x0;
}


// Ghidra: void __thiscall SpaceStation::runLogic(SpaceStation *this,float param_1)
void SpaceStation::runLogic(float param_1)

{
  ((Ship *)this)->runLogic(param_1);
  checkExistState(this);
  return;
}


// Ghidra: void __thiscall SpaceStation::checkExistState(SpaceStation *this)
void SpaceStation::checkExistState()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  bool bVar3;
  FlagManager *pFVar4;
  uint uVar5;
  char *pcVar6;
  std::string local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4288;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_28 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)((char *)this + 0x424) - *(int *)((char *)this + 0x420) >> 0x1f;
  if ((*(int *)((char *)this + 0x424) - *(int *)((char *)this + 0x420)) / 0x18 + iVar1 != iVar1) {
    uVar5 = 0;
    bVar2 = true;
    local_14 = 0;
    do {
      ghidra::str::ctor
                (local_40,(std::string *)(local_14 + *(int *)((char *)this + 0x420)));
      // [seh] local_8 = 0;
      pFVar4 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      bVar3 = (pFVar4)->flagSet();
      if (!bVar3) {
        bVar2 = false;
      }
      uVar5 = uVar5 + 1;
      local_14 = local_14 + 0x18;
    } while (uVar5 < (uint)((*(int *)((char *)this + 0x424) - *(int *)((char *)this + 0x420)) / 0x18));
    if (bVar2) {
      if (((char *)this)[0x168] == (byte)0x0) {
        // [seh] ExceptionList = local_10;
        return;
      }
      ((char *)this)[0x168] = (byte)0x0;
      uVar5 = 0x16;
      pcVar6 = "coming into existence.";
    }
    else {
      if (((char *)this)[0x168] != (byte)0x0) {
        // [seh] ExceptionList = local_10;
        return;
      }
      ((char *)this)[0x168] = (byte)0x1;
      uVar5 = 10;
      pcVar6 = "now hiding";
    }
    local_30 = 0;
    local_2c = 0xf;
    local_40[0] = (std::string)0x0;
    ghidra::str::assign(local_40,pcVar6,uVar5);
    Ship::log();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall SpaceStation::addAmount(SpaceStation *this,int param_1)
void SpaceStation::addAmount(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((char *)this + 0x390);
  if (iVar1 == 0) {
    debugPrint("ERROR","Tried to add owed amount to station with no faction.",this);
    return;
  }
  *(float *)(iVar1 + 0xd0) = (float)param_1 + *(float *)(iVar1 + 0xd0);
  return;
}


// Ghidra: void __thiscall SpaceStation::removeAmount(SpaceStation *this,int param_1)
void SpaceStation::removeAmount(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::lib::_Tree_t *this_00;
  int iVar1;
  uint uVar2;
  Faction *pFVar3;
  AuthorityManager *pAVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  char *pcVar7;
  char *pcVar8;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pvVar5 = ExceptionList;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c42b8;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((char *)this + 0x390);
  if (iVar1 == 0) {
    pcVar8 = "Tried to remove owed amount to station with no faction.";
    pcVar7 = "ERROR";
    // [seh] ExceptionList = &local_10;
  }
  else {
    if (*(float *)(iVar1 + 0xd0) <= 0.0) {
      return;
    }
    // [seh] ExceptionList = &local_10;
    *(float *)(iVar1 + 0xd0) = *(float *)(iVar1 + 0xd0) - (float)param_1;
    if (*(float *)(*(int *)((char *)this + 0x390) + 0xd0) != 0.0) {
      // [seh] ExceptionList = pvVar5;
      return;
    }
    pFVar3 = (*(Sector **)(g_gameData + 0xd8))->getMainFaction();
    if (*(Faction **)((char *)this + 0x390) != pFVar3) {
      // [seh] ExceptionList = local_10;
      return;
    }
    ghidra::str::ctor
              ((std::string *)local_30,(std::string *)(*(int *)(g_gameData + 0xd0) + 0x238));
    // [seh] local_8 = 0;
    pAVar4 = ghidra::any_singleton();
    this_00 = (ghidra::lib::_Tree_t *)(pAVar4 + 0x14);
    // [seh] local_8 = 1;
    iVar1 = *(int *)this_00;
    ghidra::lib::_Tree___Erase(this_00,*(ghidra::lib::_Tree_node_t **)(iVar1 + 4));
    *(int *)(*(int *)this_00 + 4) = iVar1;
    **(int **)this_00 = iVar1;
    // [seh] local_8 = 0xffffffff;
    *(int *)(*(int *)this_00 + 8) = iVar1;
    *(undefined4 *)(pAVar4 + 0x18) = 0;
    if (0xf < local_1c) {
      pnVar6 = (nothrow_t *)(local_1c + 1);
      pvVar5 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_30[0] + -4);
        pnVar6 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar8 = "Removing player from belligerants list.";
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    pcVar7 = "DETAIL";
  }
  debugPrint(pcVar7,pcVar8,uVar2);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __thiscall SpaceStation::getCurrentAmountOwed(SpaceStation *this)
int SpaceStation::getCurrentAmountOwed()

{
  if (*(int *)((char *)this + 0x390) == 0) {
    return 0;
  }
  return (int)*(float *)(*(int *)((char *)this + 0x390) + 0xd0);
}


// Ghidra: void __thiscall SpaceStation::clearPassengers(SpaceStation *this)
void SpaceStation::clearPassengers()

{
  PassengerInstance *this_00;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((char *)this + 0x408);
  uVar2 = 0;
  uVar1 = (uint)((int)*(undefined4 **)((char *)this + 0x40c) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)((char *)this + 0x40c) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (PassengerInstance *)*puVar3;
      if (this_00 != (PassengerInstance *)0x0) {
        (this_00)->~PassengerInstance();
        operator_delete(this_00,(nothrow_t *)0x94);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)((char *)this + 0x40c) = *(undefined4 *)((char *)this + 0x408);
  return;
}


// Ghidra: void __thiscall SpaceStation::populatePassengers(SpaceStation *this)
void SpaceStation::populatePassengers()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  Passenger *pPVar2;
  SpaceStation *pSVar3;
  PassengerManager *pPVar4;
  uint uVar5;
  AnimationFrames *pAVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  PassengerInstance *pPVar11;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  undefined4 **ppuVar15;
  PassengerInstance aPStack_64 [4];
  undefined4 uStack_60;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  PassengerInstance *local_30;
  PassengerInstance *local_2c;
  AnimationFrames *local_28;
  Passenger *local_24;
  AnimationFrames *local_1c;
  AnimationFrames *local_18;
  SpaceStation *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4314;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_14 = this;
  // [cookie] diceRoll((Dice *)(___security_cookie ^ (uint)&stack0xfffffffc));
  debugPrint("WORLD","Trying to spawn %d passengers to pick up");
  local_2c = aPStack_64;
  local_1c = (AnimationFrames *)0x0;
  ghidra::str::ctor((std::string *)aPStack_64,(std::string *)((char *)this + 0x238))
  ;
  ppuVar15 = &local_3c;
  // [seh] local_8 = 0;
  pPVar4 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pPVar4)->getValidPassengersForLocation(ppuVar15);
  // [seh] local_8 = 1;
  uVar5 = (int)local_38 - (int)local_3c >> 2;
  if (uVar5 == 0) {
    debugPrint("WORLD","No valid passengers to spawn.");
  }
  else {
    pPVar11 = (PassengerInstance *)0x0;
    pcVar14 = rand_exref;
    if (uVar5 < 4) {
      debugPrint("WORLD","Not enough valid passengers, or just enough. Spawning all %d.");
      pSVar3 = local_14;
      uVar5 = 0;
      if ((int)local_38 - (int)local_3c >> 2 != 0) {
        do {
          local_2c = operator_new(0x94);
          // [seh] local_8._0_1_ = 2;
          pAVar6 = (AnimationFrames *)
                   new ((void *)(local_2c)) PassengerInstance((Passenger *)local_3c[uVar5]);
          // [seh] local_8 = CONCAT31(local_8._1_3_,1);
          uStack_60 = 0x51c8f6;
          local_1c = pAVar6;
          debugPrint("WORLD","Passenger \'%s\' is waiting at %s.");
          ppAVar1 = *(AnimationFrames ***)(pSVar3 + 0x40c);
          if (*(AnimationFrames ***)(pSVar3 + 0x410) == ppAVar1) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pSVar3 + 0x408),ppAVar1,&local_1c);
          }
          else {
            *ppAVar1 = pAVar6;
            *(int *)(pSVar3 + 0x40c) = *(int *)(pSVar3 + 0x40c) + 4;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)local_38 - (int)local_3c >> 2));
      }
    }
    else {
      do {
        local_2c = pPVar11 + 1;
        if (99 < (int)pPVar11) break;
        iVar13 = (int)local_38 - (int)local_3c;
        iVar7 = (*pcVar14)();
        pPVar2 = (Passenger *)local_3c[iVar7 % (iVar13 >> 2)];
        local_24 = pPVar2;
        iVar7 = (*pcVar14)();
        pAVar6 = local_1c;
        if (iVar7 % 100 < *(int *)(pPVar2 + 0x3c)) {
          local_30 = operator_new(0x94);
          // [seh] local_8._0_1_ = 3;
          local_28 = (AnimationFrames *)new ((void *)(local_30)) PassengerInstance(pPVar2);
          // [seh] local_8 = CONCAT31(local_8._1_3_,1);
          for (puVar9 = local_3c; (puVar9 != local_38 && ((Passenger *)*puVar9 != pPVar2));
              puVar9 = puVar9 + 1) {
          }
          local_18 = local_28;
          if (puVar9 != local_38) {
            puVar8 = puVar9 + 1;
            uVar5 = 0;
            uVar12 = (uint)((int)local_38 + (3 - (int)puVar8)) >> 2;
            if (local_38 < puVar8) {
              uVar12 = 0;
            }
            if (uVar12 != 0) {
              do {
                if ((Passenger *)*puVar8 != local_24) {
                  *puVar9 = (Passenger *)*puVar8;
                  puVar9 = puVar9 + 1;
                }
                uVar5 = uVar5 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar5 != uVar12);
            }
            if (puVar9 != local_38) {
              memmove(puVar9,local_38,0);
              local_38 = puVar9;
            }
          }
          pSVar3 = local_14;
          pAVar6 = local_1c + 1;
          uStack_60 = 0x51ca39;
          local_1c = pAVar6;
          debugPrint("WORLD","Passenger \'%s\' is waiting at %s.");
          pcVar14 = rand_exref;
          ppAVar1 = *(AnimationFrames ***)(pSVar3 + 0x40c);
          if (*(AnimationFrames ***)(pSVar3 + 0x410) == ppAVar1) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pSVar3 + 0x408),ppAVar1,&local_28);
            pcVar14 = rand_exref;
          }
          else {
            *ppAVar1 = local_18;
            *(int *)(pSVar3 + 0x40c) = *(int *)(pSVar3 + 0x40c) + 4;
          }
        }
        pPVar11 = local_2c;
      } while ((int)pAVar6 < 3);
    }
  }
  if (local_3c != (undefined4 *)0x0) {
    pnVar10 = (nothrow_t *)(local_34 - (int)local_3c & 0xfffffffc);
    puVar9 = local_3c;
    if ((nothrow_t *)0xfff < pnVar10) {
      puVar9 = (undefined4 *)local_3c[-1];
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)local_3c + (-4 - (int)puVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar9,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  return;
}
