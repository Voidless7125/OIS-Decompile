#include "../ois.exe.h"


// public: __thiscall SpaceStation::SpaceStation(class ShipClass *,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

SpaceStation * __thiscall
SpaceStation::SpaceStation(SpaceStation *this,undefined4 param_1,void *param_3)

{
  FictionData *pFVar1;
  Faction *pFVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_0000001c;
  basic_string<> local_54 [12];
  undefined4 uStack_48;
  basic_string<> local_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c4210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_3c[0] = (basic_string<>)0x0;
  uStack_48 = 0x51b54a;
  std::basic_string<>::assign(local_3c,"",0);
  local_8._0_1_ = 1;
  local_54[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_54,"",0);
  local_8._0_1_ = 0;
  Ship::Ship((Ship *)this,param_1,9);
  local_8._0_1_ = 2;
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0x388) = 0;
  *(undefined4 *)(this + 0x38c) = 0xffffffff;
  std::basic_string<>::basic_string<>(local_3c,(basic_string<> *)&param_3);
  local_8._0_1_ = 3;
  pFVar1 = Singleton<>::getInstance();
  local_8 = CONCAT31(local_8._1_3_,2);
  pFVar2 = FictionData::getFactionForID(pFVar1);
  *(Faction **)(this + 0x390) = pFVar2;
  *(undefined4 *)(this + 0x394) = 0x50;
  *(undefined4 *)(this + 0x398) = 0;
  *(undefined4 *)(this + 0x3ac) = 0;
  *(undefined4 *)(this + 0x3b0) = 0xf;
  this[0x39c] = (SpaceStation)0x0;
  *(undefined4 *)(this + 0x3b4) = 1;
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined4 *)(this + 0x3c0) = 0;
  *(undefined4 *)(this + 0x3c4) = 0;
  *(undefined4 *)(this + 0x3c8) = 0;
  *(undefined4 *)(this + 0x3cc) = 0;
  *(undefined4 *)(this + 0x3d0) = 0;
  *(undefined4 *)(this + 0x3d4) = 0;
  *(undefined4 *)(this + 0x3d8) = 0;
  *(undefined4 *)(this + 0x3dc) = 10;
  *(undefined4 *)(this + 0x3e0) = 0x16;
  *(undefined4 *)(this + 0x3e4) = 0;
  *(undefined4 *)(this + 1000) = 0x3c;
  *(undefined4 *)(this + 0x3ec) = 0;
  *(undefined4 *)(this + 0x3f0) = 0;
  *(undefined4 *)(this + 0x3f4) = 0;
  *(undefined4 *)(this + 0x3f8) = 0;
  *(undefined4 *)(this + 0x3fc) = 0;
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined4 *)(this + 0x404) = 0;
  *(undefined4 *)(this + 0x408) = 0;
  *(undefined4 *)(this + 0x40c) = 0;
  *(undefined4 *)(this + 0x410) = 0;
  *(undefined4 *)(this + 0x414) = 0;
  *(undefined4 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x41c) = 0;
  *(undefined4 *)(this + 0x420) = 0;
  *(undefined4 *)(this + 0x424) = 0;
  *(undefined4 *)(this + 0x428) = 0;
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
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall SpaceStation::shipUndocking(class Ship *)

void __thiscall SpaceStation::shipUndocking(SpaceStation *this,Ship *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  SpaceStation *pSVar4;
  Ship *pSVar5;
  int *piVar6;
  char *pcVar7;
  
  piVar1 = *(int **)(this + 0x3d4);
  for (piVar6 = *(int **)(this + 0x3d0); (piVar6 != piVar1 && ((Ship *)*piVar6 != param_1));
      piVar6 = piVar6 + 1) {
  }
  if (piVar6 == piVar1) {
    pSVar5 = param_1 + 8;
    if (0xf < *(uint *)(param_1 + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    pSVar4 = this + 0x238;
    if (0xf < *(uint *)(this + 0x24c)) {
      pSVar4 = *(SpaceStation **)pSVar4;
    }
    pcVar7 = "%s: vessel \'%s\' was NOT listed as docked, but was asked to undock.";
  }
  else {
    puVar3 = (undefined4 *)std::remove<>(*(int **)(this + 0x3d0),piVar1);
    piVar6 = (int *)*puVar3;
    if (piVar6 != piVar1) {
      iVar2 = *(int *)(this + 0x3d4);
      memmove(piVar6,piVar1,iVar2 - (int)piVar1);
      *(int *)(this + 0x3d4) = (iVar2 - (int)piVar1) + (int)piVar6;
    }
    pSVar5 = param_1 + 8;
    if (0xf < *(uint *)(param_1 + 0x1c)) {
      pSVar5 = *(Ship **)pSVar5;
    }
    pSVar4 = this + 0x238;
    if (0xf < *(uint *)(this + 0x24c)) {
      pSVar4 = *(SpaceStation **)pSVar4;
    }
    pcVar7 = "%s: vessel \'%s\' has undocked from us.";
  }
  debugPrint("GAME",pcVar7,pSVar4,pSVar5);
  return;
}


// public: virtual void __thiscall SpaceStation::shipDocking(class Ship *)

void __thiscall SpaceStation::shipDocking(SpaceStation *this,Ship *param_1)

{
  int *piVar1;
  AnimationFrames **ppAVar2;
  Ship *pSVar3;
  Ship *pSVar4;
  int iVar5;
  SpaceStation *pSVar6;
  int *piVar7;
  char *pcVar8;
  
  piVar7 = *(int **)(this + 0x3d0);
  piVar1 = *(int **)(this + 0x3d4);
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
      if (0xf < *(uint *)(this + 0x24c)) {
        pSVar6 = *(SpaceStation **)pSVar6;
      }
      pcVar8 = "%s: vessel \'%s\' asked to dock, but was already docked.";
      goto LAB_0051b8d3;
    }
  }
  ppAVar2 = *(AnimationFrames ***)(this + 0x3d4);
  if (*(AnimationFrames ***)(this + 0x3d8) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x3d0),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)param_1;
    *(int *)(this + 0x3d4) = *(int *)(this + 0x3d4) + 4;
  }
  pSVar4 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar4 = *(Ship **)pSVar4;
  }
  pSVar6 = this + 0x238;
  if (0xf < *(uint *)(this + 0x24c)) {
    pSVar6 = *(SpaceStation **)pSVar6;
  }
  pcVar8 = "%s: vessel \'%s\' docked with us";
LAB_0051b8d3:
  pSVar3 = param_1;
  debugPrint("GAME",pcVar8,pSVar6,pSVar4);
  if (pSVar3[0x234] != (Ship)0x0) {
    iVar5 = rand();
    *(int *)(this + 0x3b4) = iVar5 % 10 + 1;
  }
  return;
}


// public: bool __thiscall SpaceStation::shipHasPaidForUse(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall SpaceStation::shipHasPaidForUse(SpaceStation *this,char *param_2)

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
  uVar1 = (*(int *)(this + 0x418) - *(int *)(this + 0x414)) / 0x18;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
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


// public: bool __thiscall SpaceStation::requestUndockingClearance(class Ship *,bool)

bool __thiscall
SpaceStation::requestUndockingClearance(SpaceStation *this,Ship *param_1,bool param_2)

{
  MetaGameAction **ppMVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined3 in_stack_00000009;
  
  if (!param_2) {
    if (*(int *)(this + 0x3dc) == 0) {
      return true;
    }
    if ((*(int *)(this + 0x390) != 0) && (0 < (int)*(float *)(*(int *)(this + 0x390) + 0xd0))) {
      return false;
    }
  }
  if (*(int *)(this + 0x3dc) != 0) {
    uVar3 = 0;
    puVar4 = *(undefined4 **)(this + 0x3c4);
    uVar5 = *(int *)(this + 0x3c8) - (int)puVar4 >> 2;
    if (uVar5 != 0) {
      do {
        if (*(Ship **)*puVar4 == param_1) {
          iVar2 = *(int *)(*(int *)(this + 0x3c4) + uVar3 * 4);
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
  ppMVar1 = *(MetaGameAction ***)(this + 0x3c8);
  if (*(MetaGameAction ***)(this + 0x3cc) == ppMVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(this + 0x3c4),ppMVar1,(MetaGameAction **)&param_2);
    return true;
  }
  *ppMVar1 = _param_2;
  *(int *)(this + 0x3c8) = *(int *)(this + 0x3c8) + 4;
  return true;
}


// public: void __thiscall SpaceStation::regenerateExtras(void)

void __thiscall SpaceStation::regenerateExtras(SpaceStation *this)

{
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
  allocator<> *unaff_EDI;
  bool bVar11;
  basic_string<> abStack_cc [4];
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
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &DAT_005c4253;
  local_1c = ExceptionList;
  local_24 = (ExtraSpawned *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  bVar11 = false;
  local_8c = 0;
  if (*(int *)(this + 0x254) != 0) {
    bVar11 = *(int *)(*(int *)(this + 0x254) + 0x158) == 1;
  }
  local_7c = this;
  puVar3 = &stack0xfffffffc;
  if (bVar11) {
    std::_Destroy_range<>((ExtraSpawned *)this,local_24,unaff_EDI);
    *(undefined4 *)(this + 0x3f0) = *(undefined4 *)(this + 0x3ec);
    std::basic_string<>::basic_string<>(abStack_cc,(basic_string<> *)(this + 0x68));
    local_78 = GameData::getStructure(g_gameData);
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
                std::basic_string<>::basic_string<>
                          (abStack_cc,
                           (basic_string<> *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(local_78 + 0x18) + local_74 * 4) +
                                             0x90) + iVar1) + 0x58));
                getTagFor(local_7c);
                local_14 = 0;
                std::basic_string<>::basic_string<>
                          ((basic_string<> *)&stack0xffffff30,(basic_string<> *)local_70);
                pGVar6 = GameData::getExtraWithTag();
                if (pGVar6 != (GameCharacter *)0x0) {
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)local_a8,
                             (basic_string<> *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(local_78 + 0x18) + local_74 * 4) +
                                               0x90) + iVar1) + 0x58));
                  local_14._0_1_ = 1;
                  local_58 = pGVar6;
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)&local_54,(basic_string<> *)local_a8);
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
                    std::vector<>::_Emplace_reallocate<>
                              ((vector<> *)(local_7c + 0x3ec),pEVar2,(ExtraSpawned *)&local_58);
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
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)local_3c,(basic_string<> *)(pGVar6 + 0xf8));
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
  puStack_20 = puVar3;
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall SpaceStation::getTagFor(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

basic_string<> * __thiscall
SpaceStation::getTagFor(SpaceStation *this,basic_string<> *param_2,char *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  basic_string<> *pbVar3;
  bool bVar4;
  char *pcVar5;
  Structure *pSVar6;
  char *pcVar7;
  basic_string<> *pbVar8;
  int iVar9;
  int iVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> abStack_48 [12];
  undefined4 uStack_3c;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b37d8;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)(this + 0x68));
  pSVar6 = GameData::getStructure(g_gameData,0);
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
          bVar4 = std::_Traits_equal<>(pcVar7,in_stack_00000018,pcVar5,unaff_EDI);
          if (bVar4) {
            pbVar8 = (basic_string<> *)0x0;
            puVar1 = *(undefined4 **)(iVar10 + 0x5c8);
            iVar12 = 0;
            iVar10 = *(int *)(iVar10 + 0x5cc) - (int)puVar1 >> 2;
            if (iVar10 == 0) {
              iVar10 = *(int *)(this + 0x3bc) - (int)*(undefined4 **)(this + 0x3b8) >> 2;
              if (iVar10 == 1) {
                pbVar8 = (basic_string<> *)**(undefined4 **)(this + 0x3b8);
              }
              else {
                if (iVar10 == 0) goto LAB_0051c15a;
                do {
                  if (0x31 < iVar12) break;
                  iVar10 = *(int *)(this + 0x3bc);
                  iVar2 = *(int *)(this + 0x3b8);
                  iVar9 = rand();
                  pbVar3 = *(basic_string<> **)
                            (*(int *)(this + 0x3b8) + (iVar9 % (iVar10 - iVar2 >> 2)) * 4);
                  iVar10 = rand();
                  pbVar8 = (basic_string<> *)0x0;
                  if (iVar10 % 100 + 1 <= *(int *)(pbVar3 + 0x18)) {
                    pbVar8 = pbVar3;
                  }
                  iVar12 = iVar12 + 1;
                } while (pbVar8 == (basic_string<> *)0x0);
              }
            }
            else if (iVar10 == 1) {
              pbVar8 = (basic_string<> *)*puVar1;
            }
            else {
              do {
                if (0x31 < iVar12) break;
                iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(pSVar6 + 0x18) + local_14 * 4) + 0x90)
                                 + local_1c * 4);
                iVar2 = *(int *)(iVar10 + 0x5cc);
                iVar10 = *(int *)(iVar10 + 0x5c8);
                iVar9 = rand();
                pbVar3 = *(basic_string<> **)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(pSVar6 + 0x18) +
                                                              local_14 * 4) + 0x90) + local_1c * 4)
                                   + 0x5c8) + (iVar9 % (iVar2 - iVar10 >> 2)) * 4);
                iVar10 = rand();
                pbVar8 = (basic_string<> *)0x0;
                if (iVar10 % 100 + 1 <= *(int *)(pbVar3 + 0x18)) {
                  pbVar8 = pbVar3;
                }
                iVar12 = iVar12 + 1;
              } while (pbVar8 == (basic_string<> *)0x0);
            }
            if (pbVar8 != (basic_string<> *)0x0) {
              std::basic_string<>::basic_string<>(param_2,pbVar8);
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
              ExceptionList = local_10;
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
  *param_2 = (basic_string<>)0x0;
  uStack_3c = 0x51c1c4;
  std::basic_string<>::assign(param_2,"",0);
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
  ExceptionList = local_10;
  return param_2;
}


// public: void __thiscall SpaceStation::dockShip(class Ship *)

void __thiscall SpaceStation::dockShip(SpaceStation *this,Ship *param_1)

{
  int iVar1;
  LogSystem *this_00;
  
  if (param_1[0x234] != (Ship)0x0) {
    regenerateExtras(this);
  }
  if ((*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') &&
     (this_00 = *(LogSystem **)(this + 0x3e4), 0 < (int)this_00)) {
    if (param_1[0x234] != (Ship)0x0) {
      LogSystem::addLogLine
                (this_00,*(LogPriority *)(param_1 + 0x224),(char *)0x3,
                 "`^WARNING`7: Docked without an active iFF signal; `$%dc`7 fine.",this_00);
      this_00 = *(LogSystem **)(this + 0x3e4);
    }
    iVar1 = *(int *)(this + 0x390);
    if (iVar1 == 0) {
      debugPrint("ERROR","Tried to add owed amount to station with no faction.");
    }
    else {
      *(float *)(iVar1 + 0xd0) = (float)(int)this_00 + *(float *)(iVar1 + 0xd0);
    }
  }
  if ((param_1[0x234] != (Ship)0x0) && (*(TradeLocation **)(this + 0x398) != (TradeLocation *)0x0))
  {
    TradeLocation::resetAndRepopulate(*(TradeLocation **)(this + 0x398));
  }
  return;
}


// public: bool __thiscall SpaceStation::shipHasDockingClearance(class Ship *)

bool __thiscall SpaceStation::shipHasDockingClearance(SpaceStation *this,Ship *param_1)

{
  DockingRequest *pDVar1;
  
  if (*(int *)(this + 0x3dc) != 0) {
    pDVar1 = getDockingRequest(this,param_1);
    if ((pDVar1 == (DockingRequest *)0x0) || (*(int *)(pDVar1 + 8) != 0)) {
      return false;
    }
  }
  return true;
}


// public: bool __thiscall SpaceStation::shipHasUndockingClearance(class Ship *)

bool __thiscall SpaceStation::shipHasUndockingClearance(SpaceStation *this,Ship *param_1)

{
  DockingRequest *pDVar1;
  
  if ((*(int *)(this + 0x3dc) != 0) && (*(int *)(*(int *)(this + 0x254) + 0x158) != 3)) {
    pDVar1 = getDockingRequest(this,param_1);
    if ((pDVar1 == (DockingRequest *)0x0) || (*(int *)(pDVar1 + 8) != 2)) {
      return false;
    }
  }
  return true;
}


// public: struct DockingRequest * __thiscall SpaceStation::getDockingRequest(class Ship *)

DockingRequest * __thiscall SpaceStation::getDockingRequest(SpaceStation *this,Ship *param_1)

{
  DockingRequest *pDVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x3dc) != 0) {
    uVar2 = 0;
    uVar3 = *(int *)(this + 0x3c8) - *(int *)(this + 0x3c4) >> 2;
    if (uVar3 != 0) {
      do {
        pDVar1 = *(DockingRequest **)(*(int *)(this + 0x3c4) + uVar2 * 4);
        if (*(Ship **)pDVar1 == param_1) {
          return pDVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return (DockingRequest *)0x0;
}


// public: virtual void __thiscall SpaceStation::runLogic(float)

void __thiscall SpaceStation::runLogic(SpaceStation *this,float param_1)

{
  Ship::runLogic((Ship *)this,param_1);
  checkExistState(this);
  return;
}


// public: void __thiscall SpaceStation::checkExistState(void)

void __thiscall SpaceStation::checkExistState(SpaceStation *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  FlagManager *pFVar4;
  uint uVar5;
  char *pcVar6;
  basic_string<> local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4288;
  local_10 = ExceptionList;
  uStack_28 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(this + 0x424) - *(int *)(this + 0x420) >> 0x1f;
  if ((*(int *)(this + 0x424) - *(int *)(this + 0x420)) / 0x18 + iVar1 != iVar1) {
    uVar5 = 0;
    bVar2 = true;
    local_14 = 0;
    do {
      std::basic_string<>::basic_string<>
                (local_40,(basic_string<> *)(local_14 + *(int *)(this + 0x420)));
      local_8 = 0;
      pFVar4 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      bVar3 = FlagManager::flagSet(pFVar4);
      if (!bVar3) {
        bVar2 = false;
      }
      uVar5 = uVar5 + 1;
      local_14 = local_14 + 0x18;
    } while (uVar5 < (uint)((*(int *)(this + 0x424) - *(int *)(this + 0x420)) / 0x18));
    if (bVar2) {
      if (this[0x168] == (SpaceStation)0x0) {
        ExceptionList = local_10;
        return;
      }
      this[0x168] = (SpaceStation)0x0;
      uVar5 = 0x16;
      pcVar6 = "coming into existence.";
    }
    else {
      if (this[0x168] != (SpaceStation)0x0) {
        ExceptionList = local_10;
        return;
      }
      this[0x168] = (SpaceStation)0x1;
      uVar5 = 10;
      pcVar6 = "now hiding";
    }
    local_30 = 0;
    local_2c = 0xf;
    local_40[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_40,pcVar6,uVar5);
    Ship::log();
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall SpaceStation::addAmount(int)

void __thiscall SpaceStation::addAmount(SpaceStation *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x390);
  if (iVar1 == 0) {
    debugPrint("ERROR","Tried to add owed amount to station with no faction.",this);
    return;
  }
  *(float *)(iVar1 + 0xd0) = (float)param_1 + *(float *)(iVar1 + 0xd0);
  return;
}


// public: void __thiscall SpaceStation::removeAmount(int)

void __thiscall SpaceStation::removeAmount(SpaceStation *this,int param_1)

{
  _Tree<> *this_00;
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pvVar5 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c42b8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 0x390);
  if (iVar1 == 0) {
    pcVar8 = "Tried to remove owed amount to station with no faction.";
    pcVar7 = "ERROR";
    ExceptionList = &local_10;
  }
  else {
    if (*(float *)(iVar1 + 0xd0) <= 0.0) {
      return;
    }
    ExceptionList = &local_10;
    *(float *)(iVar1 + 0xd0) = *(float *)(iVar1 + 0xd0) - (float)param_1;
    if (*(float *)(*(int *)(this + 0x390) + 0xd0) != 0.0) {
      ExceptionList = pvVar5;
      return;
    }
    pFVar3 = Sector::getMainFaction(*(Sector **)(g_gameData + 0xd8));
    if (*(Faction **)(this + 0x390) != pFVar3) {
      ExceptionList = local_10;
      return;
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)local_30,(basic_string<> *)(*(int *)(g_gameData + 0xd0) + 0x238));
    local_8 = 0;
    pAVar4 = Singleton<>::getInstance();
    this_00 = (_Tree<> *)(pAVar4 + 0x14);
    local_8 = 1;
    iVar1 = *(int *)this_00;
    std::_Tree<>::_Erase(this_00,*(_Tree_node<> **)(iVar1 + 4));
    *(int *)(*(int *)this_00 + 4) = iVar1;
    **(int **)this_00 = iVar1;
    local_8 = 0xffffffff;
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
  ExceptionList = local_10;
  return;
}


// public: int __thiscall SpaceStation::getCurrentAmountOwed(void)

int __thiscall SpaceStation::getCurrentAmountOwed(SpaceStation *this)

{
  if (*(int *)(this + 0x390) == 0) {
    return 0;
  }
  return (int)*(float *)(*(int *)(this + 0x390) + 0xd0);
}


// public: void __thiscall SpaceStation::clearPassengers(void)

void __thiscall SpaceStation::clearPassengers(SpaceStation *this)

{
  PassengerInstance *this_00;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 0x408);
  uVar2 = 0;
  uVar1 = (uint)((int)*(undefined4 **)(this + 0x40c) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(this + 0x40c) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (PassengerInstance *)*puVar3;
      if (this_00 != (PassengerInstance *)0x0) {
        PassengerInstance::~PassengerInstance(this_00);
        operator_delete(this_00,(nothrow_t *)0x94);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)(this + 0x40c) = *(undefined4 *)(this + 0x408);
  return;
}


// public: void __thiscall SpaceStation::populatePassengers(void)

void __thiscall SpaceStation::populatePassengers(SpaceStation *this)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4314;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  diceRoll((Dice *)(___security_cookie ^ (uint)&stack0xfffffffc));
  debugPrint("WORLD","Trying to spawn %d passengers to pick up");
  local_2c = aPStack_64;
  local_1c = (AnimationFrames *)0x0;
  std::basic_string<>::basic_string<>((basic_string<> *)aPStack_64,(basic_string<> *)(this + 0x238))
  ;
  ppuVar15 = &local_3c;
  local_8 = 0;
  pPVar4 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  PassengerManager::getValidPassengersForLocation(pPVar4,ppuVar15);
  local_8 = 1;
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
          local_8._0_1_ = 2;
          pAVar6 = (AnimationFrames *)
                   PassengerInstance::PassengerInstance(local_2c,(Passenger *)local_3c[uVar5]);
          local_8 = CONCAT31(local_8._1_3_,1);
          uStack_60 = 0x51c8f6;
          local_1c = pAVar6;
          debugPrint("WORLD","Passenger \'%s\' is waiting at %s.");
          ppAVar1 = *(AnimationFrames ***)(pSVar3 + 0x40c);
          if (*(AnimationFrames ***)(pSVar3 + 0x410) == ppAVar1) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)(pSVar3 + 0x408),ppAVar1,&local_1c);
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
          local_8._0_1_ = 3;
          local_28 = (AnimationFrames *)PassengerInstance::PassengerInstance(local_30,pPVar2);
          local_8 = CONCAT31(local_8._1_3_,1);
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
            std::vector<>::_Emplace_reallocate<>((vector<> *)(pSVar3 + 0x408),ppAVar1,&local_28);
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
  ExceptionList = local_10;
  return;
}
