#include "../ois.exe.h"


// public: __thiscall Stats::Stats(void)

void __thiscall Stats::Stats(Stats *this)

{
  map<> *this_00;
  _Tree_node<> *p_Var1;
  _Tree_node<> *p_Var2;
  int iVar3;
  undefined4 uVar4;
  basic_string<> *pbVar5;
  _Tree_comp_alloc<> *this_01;
  _Tree_comp_alloc<> *this_02;
  _Tree_comp_alloc<> *this_03;
  void *pvVar6;
  nothrow_t *pnVar7;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4694;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this[4] = (Stats)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = CCallback<>::vftable;
  *(Stats **)(this + 0xc) = this;
  *(code **)(this + 0x10) = onUserStatsReceived;
  SteamAPI_RegisterCallback(this,0x44d,local_14);
  local_8 = 0;
  this[0x18] = (Stats)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)(this + 0x14) = CCallback<>::vftable;
  *(Stats **)(this + 0x20) = this;
  *(code **)(this + 0x24) = onUserStatsStored;
  SteamAPI_RegisterCallback(this + 0x14,0x44e);
  local_8._0_1_ = 1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode(this_01);
  *(_Tree_node<> **)(this + 0x38) = p_Var1;
  this_00 = (map<> *)(this + 0x40);
  local_8._0_1_ = 2;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 0x44) = 0;
  p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this_02);
  *(_Tree_node<> **)this_00 = p_Var2;
  local_8._0_1_ = 3;
  iVar3 = SteamInternal_ContextInit
                    (&`class_CSteamAPIContext&___cdecl_SteamInternal_ModuleContext(void)'::__l2::
                      s_CallbackCounterAndContext);
  uVar4 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x24))();
  *(undefined4 *)(this + 0x48) = uVar4;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode(this_03);
  *(_Tree_node<> **)(this + 0x50) = p_Var1;
  local_8._0_1_ = 4;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"visited_every_starsystem",0x18);
  local_8._0_1_ = 5;
  pbVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_2c);
  std::basic_string<>::assign(pbVar5,"test",4);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
    pnVar7 = (nothrow_t *)(local_18 + 1);
    pvVar6 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      pnVar7 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"visited_every_starsystem",0x18);
  local_8 = CONCAT31(local_8._1_3_,6);
  pbVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_2c);
  std::basic_string<>::assign(pbVar5,"test",4);
  if (0xf < local_18) {
    pnVar7 = (nothrow_t *)(local_18 + 1);
    pvVar6 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      pnVar7 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Stats::setBinaryStat(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall Stats::setBinaryStat(Stats *this,void *param_2)

{
  int *piVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3b48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = std::map<>::operator[]((map<> *)(this + 0x50),(basic_string<> *)&param_2);
  *piVar1 = 1;
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Stats::setStat(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall Stats::setStat(Stats *this,void *param_2)

{
  int *piVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  int in_stack_0000001c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3b48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = std::map<>::operator[]((map<> *)(this + 0x50),(basic_string<> *)&param_2);
  *piVar1 = in_stack_0000001c;
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Stats::addStat(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall Stats::addStat(Stats *this,int param_2,void *param_3)

{
  int *piVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  int iVar4;
  uint in_stack_0000001c;
  basic_string<> abStack_54 [16];
  undefined4 uStack_44;
  int local_24;
  int local_20;
  _Tree<> *local_1c;
  int local_18 [2];
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c46c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = (_Tree<> *)(this + 0x50);
  uStack_44 = 0x51f706;
  std::_Tree<>::_Eqrange<>(local_1c,(basic_string<> *)&local_24);
  iVar4 = 0;
  local_18[0] = local_24;
  if (local_24 != local_20) {
    do {
      iVar4 = iVar4 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)local_18);
    } while (local_18[0] != local_20);
    if (iVar4 != 0) {
      piVar1 = std::map<>::operator[]((map<> *)local_1c,(basic_string<> *)&param_3);
      iVar4 = *piVar1;
      piVar1 = std::map<>::operator[]((map<> *)local_1c,(basic_string<> *)&param_3);
      *piVar1 = param_2 + iVar4;
      goto LAB_0051f762;
    }
  }
  std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)&param_3);
  setStat(this);
LAB_0051f762:
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_44 = 0x51f795;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall Stats::storeStats(void)

bool __thiscall Stats::storeStats(Stats *this)

{
  map<> *this_00;
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 ****ppppuVar6;
  char *pcVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  GameData *pGVar10;
  undefined **ppuVar11;
  bool bVar12;
  uint local_68;
  uint local_64;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4710;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  debugPrint("DETAIL","Storing Steam Stats",local_14);
  this_00 = (map<> *)(this + 0x50);
  ppuVar11 = &PTR_s_torps_fired_005e18c8;
  do {
    pcVar2 = *ppuVar11;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    pcVar7 = pcVar2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    std::basic_string<>::assign((basic_string<> *)local_2c,pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
    local_8 = 0;
    iVar4 = SteamInternal_ContextInit
                      (&`class_CSteamAPIContext&___cdecl_SteamInternal_ModuleContext(void)'::__l2::
                        s_CallbackCounterAndContext);
    iVar4 = **(int **)(iVar4 + 0x14);
    piVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_2c);
    (**(code **)(iVar4 + 0x10))(*ppuVar11,*piVar5);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      ppppuVar6 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppuVar6 = (undefined4 ****)local_2c[0][-1];
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar6))) goto LAB_0051fc28;
      }
      operator_delete(ppppuVar6,pnVar9);
    }
    pcVar2 = *ppuVar11;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    pcVar7 = pcVar2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    std::basic_string<>::assign((basic_string<> *)local_5c,pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
    local_8 = 1;
    piVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_5c);
    debugPrint("DETAIL","Saved stat for id %s: %d",*ppuVar11,*piVar5);
    local_8 = 0xffffffff;
    if (0xf < local_48) {
      pnVar9 = (nothrow_t *)(local_48 + 1);
      pvVar8 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_5c[0] + -4);
        pnVar9 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) goto LAB_0051fc28;
      }
      operator_delete(pvVar8,pnVar9);
    }
    ppuVar11 = ppuVar11 + 1;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  } while ((int)ppuVar11 < 0x5e196c);
  local_64 = 0;
  pGVar10 = g_gameData;
  if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
    do {
      iVar4 = **(int **)(*(int *)(pGVar10 + 0x3c) + local_64 * 4);
      if (iVar4 < 1000) {
        strUsingArgs((char *)local_2c,"visited_sector_%d",iVar4);
        local_8 = 2;
        iVar4 = SteamInternal_ContextInit
                          (&`class_CSteamAPIContext&___cdecl_SteamInternal_ModuleContext(void)'::
                            __l2::s_CallbackCounterAndContext);
        ppppuVar6 = local_2c;
        if (0xf < local_18) {
          ppppuVar6 = (undefined4 ****)local_2c[0];
        }
        iVar4 = **(int **)(iVar4 + 0x14);
        piVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_2c);
        (**(code **)(iVar4 + 0x10))(ppppuVar6,*piVar5);
        ppppuVar6 = local_2c;
        if (0xf < local_18) {
          ppppuVar6 = (undefined4 ****)local_2c[0];
        }
        piVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_2c);
        debugPrint("DETAIL","Saved stat for id %s: %d",ppppuVar6,*piVar5);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pnVar9 = (nothrow_t *)(local_18 + 1);
          ppppuVar6 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            ppppuVar6 = (undefined4 ****)local_2c[0][-1];
            pnVar9 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar6))) {
LAB_0051fc28:
              local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppuVar6,pnVar9);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        pGVar10 = g_gameData;
      }
      local_64 = local_64 + 1;
    } while (local_64 < (uint)(*(int *)(pGVar10 + 0x40) - *(int *)(pGVar10 + 0x3c) >> 2));
  }
  local_68 = 0;
  if (*(int *)(pGVar10 + 0x40) - *(int *)(pGVar10 + 0x3c) >> 2 != 0) {
    do {
      piVar5 = *(int **)(*(int *)(pGVar10 + 0x3c) + local_68 * 4);
      if ((*piVar5 < 1000) && (local_64 = 0, piVar5[0x34] - piVar5[0x33] >> 2 != 0)) {
        do {
          iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(pGVar10 + 0x3c) + local_68 * 4) + 0xcc) +
                          local_64 * 4);
          bVar12 = false;
          if (*(int *)(iVar4 + 0x254) != 0) {
            bVar12 = *(int *)(*(int *)(iVar4 + 0x254) + 0x158) == 1;
          }
          if (bVar12) {
            piVar5 = (int *)(iVar4 + 0x238);
            if (0xf < *(uint *)(iVar4 + 0x24c)) {
              piVar5 = (int *)*piVar5;
            }
            strUsingArgs((char *)local_44,"visited_station_%s",piVar5);
            local_8 = 3;
            iVar4 = SteamInternal_ContextInit
                              (&`class_CSteamAPIContext&___cdecl_SteamInternal_ModuleContext(void)'
                                ::__l2::s_CallbackCounterAndContext);
            ppppuVar6 = local_44;
            if (0xf < local_30) {
              ppppuVar6 = (undefined4 ****)local_44[0];
            }
            iVar4 = **(int **)(iVar4 + 0x14);
            piVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_44);
            (**(code **)(iVar4 + 0x10))(ppppuVar6,*piVar5);
            ppppuVar6 = local_44;
            if (0xf < local_30) {
              ppppuVar6 = (undefined4 ****)local_44[0];
            }
            piVar5 = std::map<>::operator[](this_00,(basic_string<> *)local_44);
            debugPrint("DETAIL","Saved stat for id %s: %d",ppppuVar6,*piVar5);
            local_8 = 0xffffffff;
            if (0xf < local_30) {
              pnVar9 = (nothrow_t *)(local_30 + 1);
              ppppuVar6 = (undefined4 ****)local_44[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                ppppuVar6 = (undefined4 ****)local_44[0][-1];
                pnVar9 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar6))) goto LAB_0051fc28;
              }
              operator_delete(ppppuVar6,pnVar9);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
            pGVar10 = g_gameData;
          }
          local_64 = local_64 + 1;
          iVar4 = *(int *)(*(int *)(pGVar10 + 0x3c) + local_68 * 4);
        } while (local_64 < (uint)(*(int *)(iVar4 + 0xd0) - *(int *)(iVar4 + 0xcc) >> 2));
      }
      local_68 = local_68 + 1;
    } while (local_68 < (uint)(*(int *)(pGVar10 + 0x40) - *(int *)(pGVar10 + 0x3c) >> 2));
  }
  iVar4 = SteamInternal_ContextInit
                    (&`class_CSteamAPIContext&___cdecl_SteamInternal_ModuleContext(void)'::__l2::
                      s_CallbackCounterAndContext);
  (**(code **)(**(int **)(iVar4 + 0x14) + 0x28))();
  ExceptionList = local_10;
  uVar3 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: void __thiscall Stats::onUserStatsReceived(struct UserStatsReceived_t *)

void __thiscall Stats::onUserStatsReceived(Stats *this,UserStatsReceived_t *param_1)

{
  char *pcVar1;
  _Tree<> *this_00;
  Stats *pSVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  char *pcVar7;
  nothrow_t *pnVar8;
  GameData *pGVar9;
  code *pcVar10;
  undefined **ppuVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  basic_string<> abStack_9c [8];
  undefined4 uStack_94;
  void *local_70 [4];
  undefined4 local_60;
  uint local_5c;
  _Tree<> *local_58;
  int local_54;
  Stats *local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c4760;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = this;
  debugPrint("DETAIL","Received Steam Stats");
  local_58 = (_Tree<> *)(this + 0x50);
  local_8 = 0;
  iVar4 = *(int *)local_58;
  std::_Tree<>::_Erase(local_58,*(_Tree_node<> **)(iVar4 + 4));
  *(int *)(*(int *)(this + 0x50) + 4) = iVar4;
  **(int **)(this + 0x50) = iVar4;
  local_8 = 0xffffffff;
  *(int *)(*(int *)(this + 0x50) + 8) = iVar4;
  *(undefined4 *)(this + 0x54) = 0;
  if ((*(int *)(this + 0x48) == *(int *)param_1) && (*(int *)(this + 0x4c) == *(int *)(param_1 + 4))
     ) {
    if (*(int *)(param_1 + 8) == 1) {
      ppuVar11 = &PTR_s_torps_fired_005e18c8;
      pcVar10 = SteamInternal_ContextInit_exref;
      do {
        iVar4 = (*pcVar10)();
        (**(code **)(**(int **)(iVar4 + 0x14) + 8))();
        iVar4 = (*pcVar10)();
        uStack_94 = 0x51fd12;
        cVar3 = (**(code **)(**(int **)(iVar4 + 0x14) + 8))();
        if (cVar3 != '\0') {
          pcVar1 = *ppuVar11;
          abStack_9c[0] = (basic_string<>)0x0;
          pcVar7 = pcVar1;
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          std::basic_string<>::assign(abStack_9c,pcVar1,(int)pcVar7 - (int)(pcVar1 + 1));
          setStat(local_4c);
          uStack_94 = 0x51fd64;
          debugPrint("DETAIL","Set stat for id %s to: %d");
          pcVar10 = SteamInternal_ContextInit_exref;
        }
        this_00 = local_58;
        ppuVar11 = ppuVar11 + 1;
      } while ((int)ppuVar11 < 0x5e196c);
      uVar12 = 0;
      if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
        do {
          strUsingArgs((char *)local_30);
          local_8 = 1;
          iVar4 = SteamInternal_ContextInit();
          cVar3 = (**(code **)(**(int **)(iVar4 + 0x14) + 8))();
          if (cVar3 != '\0') {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_70,(basic_string<> *)local_30);
            pSVar2 = local_4c;
            local_8._0_1_ = 2;
            piVar5 = std::map<>::operator[]((map<> *)this_00,(basic_string<> *)local_70);
            local_8 = CONCAT31(local_8._1_3_,1);
            *piVar5 = (int)pSVar2;
            if (0xf < local_5c) {
              pnVar8 = (nothrow_t *)(local_5c + 1);
              pvVar6 = local_70[0];
              if ((nothrow_t *)0xfff < pnVar8) {
                pvVar6 = *(void **)((int)local_70[0] + -4);
                pnVar8 = (nothrow_t *)(local_5c + 0x24);
                if (0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar6))) {
LAB_00520088:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar8);
            }
            uStack_94 = 0x51fe5a;
            debugPrint("DETAIL","Set stat for id %s to: %d");
          }
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
            pnVar8 = (nothrow_t *)(local_1c + 1);
            pvVar6 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar6 = *(void **)((int)local_30[0] + -4);
              pnVar8 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6))) goto LAB_00520088;
            }
            operator_delete(pvVar6,pnVar8);
          }
          uVar12 = uVar12 + 1;
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        } while (uVar12 < (uint)(*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2));
      }
      uVar12 = 0;
      pGVar9 = g_gameData;
      if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
        do {
          uVar13 = 0;
          iVar4 = *(int *)(*(int *)(pGVar9 + 0x3c) + uVar12 * 4);
          if (*(int *)(iVar4 + 0xd0) - *(int *)(iVar4 + 0xcc) >> 2 != 0) {
            do {
              bVar14 = false;
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(pGVar9 + 0x3c) + uVar12 * 4) +
                                                0xcc) + uVar13 * 4) + 0x254);
              if (iVar4 != 0) {
                bVar14 = *(int *)(iVar4 + 0x158) == 1;
              }
              if (bVar14) {
                strUsingArgs((char *)local_48);
                local_8 = 3;
                iVar4 = SteamInternal_ContextInit();
                cVar3 = (**(code **)(**(int **)(iVar4 + 0x14) + 8))();
                if (cVar3 != '\0') {
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)local_70,(basic_string<> *)local_48);
                  iVar4 = local_54;
                  local_8._0_1_ = 4;
                  piVar5 = std::map<>::operator[]((map<> *)local_58,(basic_string<> *)local_70);
                  local_8 = CONCAT31(local_8._1_3_,3);
                  *piVar5 = iVar4;
                  if (0xf < local_5c) {
                    pnVar8 = (nothrow_t *)(local_5c + 1);
                    pvVar6 = local_70[0];
                    if ((nothrow_t *)0xfff < pnVar8) {
                      pvVar6 = *(void **)((int)local_70[0] + -4);
                      pnVar8 = (nothrow_t *)(local_5c + 0x24);
                      if (0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar6))) goto LAB_00520088;
                    }
                    operator_delete(pvVar6,pnVar8);
                  }
                  local_60 = 0;
                  local_5c = 0xf;
                  local_70[0] = (void *)((uint)local_70[0] & 0xffffff00);
                  uStack_94 = 0x520004;
                  debugPrint("DETAIL","Set stat for id %s to: %d");
                }
                local_8 = 0xffffffff;
                if (0xf < local_34) {
                  pnVar8 = (nothrow_t *)(local_34 + 1);
                  pvVar6 = local_48[0];
                  if ((nothrow_t *)0xfff < pnVar8) {
                    pvVar6 = *(void **)((int)local_48[0] + -4);
                    pnVar8 = (nothrow_t *)(local_34 + 0x24);
                    if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6))) goto LAB_00520088;
                  }
                  operator_delete(pvVar6,pnVar8);
                }
                local_38 = 0;
                local_34 = 0xf;
                local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
                pGVar9 = g_gameData;
              }
              uVar13 = uVar13 + 1;
              iVar4 = *(int *)(*(int *)(pGVar9 + 0x3c) + uVar12 * 4);
            } while (uVar13 < (uint)(*(int *)(iVar4 + 0xd0) - *(int *)(iVar4 + 0xcc) >> 2));
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(*(int *)(pGVar9 + 0x40) - *(int *)(pGVar9 + 0x3c) >> 2));
      }
    }
    else {
      debugPrint("DETAIL","STEAM: RequestStats - failed, %d\n");
    }
  }
  debugPrint("DETAIL","STEAM: Stats synchronised.");
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall Stats::onUserStatsStored(struct UserStatsStored_t *)

void __thiscall Stats::onUserStatsStored(Stats *this,UserStatsStored_t *param_1)

{
  debugPrint("DETAIL","STEAM: Stats Stored");
  return;
}


// public: bool __thiscall Stats::hasCustomStat(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall Stats::hasCustomStat(Stats *this,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  
  uVar1 = std::_Tree<>::count((_Tree<> *)(this + 0x38),(basic_string<> *)&param_2);
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  return uVar1 != 0;
}


// public: float __thiscall Stats::getCustomStat(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

float __thiscall Stats::getCustomStat(Stats *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2368;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::map<>::operator[]((map<> *)(this + 0x38),(basic_string<> *)&param_2);
  fVar3 = extraout_ST0;
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
    fVar3 = extraout_ST0_00;
  }
  ExceptionList = local_10;
  return (float)fVar3;
}


// public: void __thiscall Stats::setCustomStat(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,float)

void __thiscall Stats::setCustomStat(Stats *this,void *param_2)

{
  float *pfVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  float in_XMM2_Da;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2368;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pfVar1 = std::map<>::operator[]((map<> *)(this + 0x38),(basic_string<> *)&param_2);
  *pfVar1 = in_XMM2_Da;
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}
