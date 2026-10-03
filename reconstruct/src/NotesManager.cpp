// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall NotesManager::populateNotes(NotesManager *this,vector<> *param_1)
void NotesManager::populateNotes(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 *puVar1;
  bool bVar2;
  ListData *pLVar3;
  FictionData *pFVar4;
  allocator<ListData> *paVar5;
  FlagManager *pFVar6;
  char *pcVar7;
  word *pwVar8;
  char *pcVar9;
  GameData *pGVar10;
  void *pvVar11;
  nothrow_t *pnVar12;
  uint uVar13;
  ListData *unaff_EDI;
  std::string local_27c [12];
  undefined4 uStack_270;
  undefined4 uStack_260;
  uint local_254;
  Color3B local_226 [3];
  Color3B local_223 [3];
  undefined1 *local_220;
  Color3B local_21b [3];
  code *local_218;
  undefined1 *local_214;
  undefined4 local_210;
  char local_209;
  ListData local_208 [96];
  ListData local_1a8 [96];
  ListData local_148 [96];
  ListData local_e8 [100];
  void *local_84 [5];
  uint local_70;
  void *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  uint uStack_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  ListData *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  // [seh] puStack_18 = &DAT_005b51c3;
  // [seh] local_1c = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  uVar13 = 0;
  local_218 = Color3B_exref;
  pFVar4 = ghidra::Singleton<void>::instance;
  local_24 = pLVar3;
  while( true ) {
    local_210 = uVar13;
    if (pFVar4 == (FictionData *)0x0) {
      pFVar4 = operator_new(0x18);
      *(undefined4 *)(pFVar4 + 0x10) = 0;
      *(undefined4 *)(pFVar4 + 0x14) = 0;
      *(undefined4 *)pFVar4 = 0;
      *(undefined4 *)(pFVar4 + 4) = 0;
      *(undefined4 *)(pFVar4 + 8) = 0;
      *(undefined4 *)(pFVar4 + 0xc) = 0;
      *(undefined4 *)(pFVar4 + 0x10) = 0;
      *(undefined4 *)(pFVar4 + 0x14) = 0;
      ghidra::Singleton<void>::instance = pFVar4;
    }
    if (((uint)(*(int *)(pFVar4 + 0x10) - *(int *)(pFVar4 + 0xc) >> 2) <= uVar13) ||
       (g_gameLogic[0x11b] != (byte)0x0)) break;
    local_209 = '\x01';
    uVar13 = 0;
    while( true ) {
      if (pFVar4 == (FictionData *)0x0) {
        pFVar4 = operator_new(0x18);
        *(undefined4 *)(pFVar4 + 0x10) = 0;
        *(undefined4 *)(pFVar4 + 0x14) = 0;
        *(undefined4 *)pFVar4 = 0;
        *(undefined4 *)(pFVar4 + 4) = 0;
        *(undefined4 *)(pFVar4 + 8) = 0;
        *(undefined4 *)(pFVar4 + 0xc) = 0;
        *(undefined4 *)(pFVar4 + 0x10) = 0;
        *(undefined4 *)(pFVar4 + 0x14) = 0;
        ghidra::Singleton<void>::instance = pFVar4;
      }
      local_214 = (undefined1 *)(local_210 * 4);
      if ((uint)(*(int *)(*(int *)(local_214 + *(int *)(pFVar4 + 0xc)) + 0x34) -
                 *(int *)(*(int *)(local_214 + *(int *)(pFVar4 + 0xc)) + 0x30) >> 2) <= uVar13)
      goto LAB_0043ba76;
      if (pFVar4 == (FictionData *)0x0) {
        pFVar4 = operator_new(0x18);
        *(undefined4 *)(pFVar4 + 0x10) = 0;
        *(undefined4 *)(pFVar4 + 0x14) = 0;
        *(undefined4 *)pFVar4 = 0;
        *(undefined4 *)(pFVar4 + 4) = 0;
        *(undefined4 *)(pFVar4 + 8) = 0;
        *(undefined4 *)(pFVar4 + 0xc) = 0;
        *(undefined4 *)(pFVar4 + 0x10) = 0;
        *(undefined4 *)(pFVar4 + 0x14) = 0;
        ghidra::Singleton<void>::instance = pFVar4;
      }
      bVar2 = Requirement::checkReq
                        (*(Requirement **)
                          (*(int *)(*(int *)(local_214 + *(int *)(pFVar4 + 0xc)) + 0x30) +
                          uVar13 * 4),*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                         *(BankAccount **)(g_gameData + 0x124));
      pFVar4 = ghidra::Singleton<void>::instance;
      if (!bVar2) break;
      uVar13 = uVar13 + 1;
    }
    local_209 = '\0';
LAB_0043ba76:
    if (local_209 == '\0') {
      uVar13 = local_210 + 1;
    }
    else {
      local_254 = 0x43baa2;
      cocos2d::Color3B::Color3B(local_223,0x80,'@',0x80);
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar13 = local_210;
      local_214 = (undefined1 *)&uStack_260;
      uStack_270 = 0x43bb2b;
      strUsingArgs((char *)&uStack_260);
      local_14 = 0;
      local_27c[0] = (std::string)0x0;
      ghidra::str::assign(local_27c,"",0);
      local_14 = 0xffffffff;
      paVar5 = (allocator<ListData> *)new ((void *)(local_e8)) ListData(uVar13 + 3000);
      local_14 = 1;
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      local_14._0_1_ = 0xff;
      local_14._1_3_ = 0xffffff;
      (local_e8)->~ListData();
      uVar13 = uVar13 + 1;
      pFVar4 = ghidra::Singleton<void>::instance;
    }
  }
  if (*(int *)(g_gameData + 0x128) == 0) {
    local_214 = (undefined1 *)&local_254;
    local_254 = local_254 & 0xffffff00;
    uStack_260 = 0x43bbf7;
    ghidra::str::assign((std::string *)&local_254,"has_passenger",0xd);
    local_14 = 2;
    pFVar6 = ghidra::any_singleton();
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    bVar2 = (pFVar6)->flagSet();
    if (!bVar2) goto LAB_0043bc17;
  }
  bVar2 = true;
LAB_0043bc17:
  if (bVar2 != false) {
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_3c,"PASSENGER\n",10);
    local_14._0_1_ = 3;
    local_14._1_3_ = 0;
    if (*(int *)(g_gameData + 0x128) != 0) {
      ghidra::str::ctor
                ((std::string *)&local_254,
                 (std::string *)(*(int *)(*(int *)(g_gameData + 0x128) + 0xc) + 0x18));
      GameData::getSpaceStation();
      pcVar7 = (char *)strUsingArgs((char *)local_84);
      local_14._0_1_ = 4;
      pcVar9 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar9 = *(char **)pcVar7;
      }
      ghidra::str::append((std::string *)local_3c,pcVar9,*(uint *)(pcVar7 + 0x10));
      local_14._0_1_ = 3;
      if (0xf < local_70) {
        pnVar12 = (nothrow_t *)(local_70 + 1);
        pvVar11 = local_84[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_84[0] + -4);
          pnVar12 = (nothrow_t *)(local_70 + 0x24);
          if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar11))) {
LAB_0043bcd1:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
    }
    local_254 = 0x43bcfd;
    cocos2d::Color3B::Color3B(local_226,'@','@',0x80);
    local_214 = (undefined1 *)&uStack_260;
    ghidra::str::ctor((std::string *)&uStack_260,(std::string *)local_3c);
    local_14._0_1_ = 5;
    local_27c[0] = (std::string)0x0;
    ghidra::str::assign(local_27c,"",0);
    local_14._0_1_ = 3;
    paVar5 = (allocator<ListData> *)new ((void *)(local_148)) ListData(1000);
    local_14 = CONCAT31(local_14._1_3_,6);
    if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
      std::vector<>::_Emplace_reallocate<ListData>
                (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
    }
    else {
      ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
    }
    (local_148)->~ListData();
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    if (0xf < local_28) {
      pnVar12 = (nothrow_t *)(local_28 + 1);
      pvVar11 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_3c[0] + -4);
        pnVar12 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  }
  pGVar10 = g_gameData + 0x13c;
  local_210 = 0;
  if (*(int *)(g_gameData + 0x140) - *(int *)pGVar10 >> 2 != 0) {
    do {
      local_44 = 0;
      uStack_40 = 0xf;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      local_14._0_1_ = 7;
      local_14._1_3_ = 0;
      pwVar8 = (word *)Contract::describeThreeLines
                                 (*(Contract **)(*(int *)pGVar10 + local_210 * 4),SUB41(local_84,0),
                                  SUB41(pGVar10,0));
      if ((word *)&local_54 != pwVar8) {
        // [mislabelled-dtor] word::~word((word *)&local_54);
        local_54 = *(void **)pwVar8;
        uStack_50 = *(undefined4 *)(pwVar8 + 4);
        uStack_4c = *(undefined4 *)(pwVar8 + 8);
        uStack_48 = *(undefined4 *)(pwVar8 + 0xc);
        local_44 = *(undefined4 *)(pwVar8 + 0x10);
        uStack_40 = *(uint *)(pwVar8 + 0x14);
        *(undefined4 *)(pwVar8 + 0x10) = 0;
        *(undefined4 *)(pwVar8 + 0x14) = 0xf;
        *pwVar8 = (word)0x0;
      }
      if (0xf < local_70) {
        pnVar12 = (nothrow_t *)(local_70 + 1);
        pvVar11 = local_84[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_84[0] + -4);
          pnVar12 = (nothrow_t *)(local_70 + 0x24);
          if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar11))) goto LAB_0043bcd1;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_254 = 0x43beac;
      cocos2d::Color3B::Color3B(local_21b,'@',0x80,'D');
      local_214 = (undefined1 *)&uStack_260;
      ghidra::str::ctor((std::string *)&uStack_260,(std::string *)&local_54)
      ;
      local_14._0_1_ = 8;
      local_27c[0] = (std::string)0x0;
      ghidra::str::assign(local_27c,"",0);
      uVar13 = local_210;
      local_14._0_1_ = 7;
      paVar5 = (allocator<ListData> *)new ((void *)(local_1a8)) ListData(local_210);
      local_14 = CONCAT31(local_14._1_3_,9);
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      (local_1a8)->~ListData();
      local_14._0_1_ = 0xff;
      local_14._1_3_ = 0xffffff;
      if (0xf < uStack_40) {
        pnVar12 = (nothrow_t *)(uStack_40 + 1);
        pvVar11 = local_54;
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_54 + -4);
          pnVar12 = (nothrow_t *)(uStack_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar11))) goto LAB_0043bcd1;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_210 = uVar13 + 1;
      pGVar10 = g_gameData + 0x13c;
    } while (local_210 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)pGVar10 >> 2));
  }
  pGVar10 = g_gameData + 0x130;
  local_214 = (undefined1 *)0x0;
  if (*(int *)(g_gameData + 0x134) - *(int *)pGVar10 >> 2 != 0) {
    do {
      local_5c = 0;
      uStack_58 = 0xf;
      local_6c = (void *)((uint)local_6c & 0xffffff00);
      local_14._0_1_ = 10;
      local_14._1_3_ = 0;
      pwVar8 = (word *)Bounty::describeThreeLines
                                 (*(Bounty **)(*(int *)pGVar10 + (int)local_214 * 4));
      if ((word *)&local_6c != pwVar8) {
        // [mislabelled-dtor] word::~word((word *)&local_6c);
        local_6c = *(void **)pwVar8;
        uStack_68 = *(undefined4 *)(pwVar8 + 4);
        uStack_64 = *(undefined4 *)(pwVar8 + 8);
        uStack_60 = *(undefined4 *)(pwVar8 + 0xc);
        local_5c = *(undefined4 *)(pwVar8 + 0x10);
        uStack_58 = *(uint *)(pwVar8 + 0x14);
        *(undefined4 *)(pwVar8 + 0x10) = 0;
        *(undefined4 *)(pwVar8 + 0x14) = 0xf;
        *pwVar8 = (word)0x0;
      }
      if (0xf < local_70) {
        pnVar12 = (nothrow_t *)(local_70 + 1);
        pvVar11 = local_84[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_84[0] + -4);
          pnVar12 = (nothrow_t *)(local_70 + 0x24);
          if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar11))) goto LAB_0043bcd1;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_254 = 0x43c069;
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_210 + 1),0x80,'@','D');
      local_220 = (undefined1 *)&uStack_260;
      ghidra::str::ctor((std::string *)&uStack_260,(std::string *)&local_6c)
      ;
      local_14._0_1_ = 0xb;
      local_27c[0] = (std::string)0x0;
      ghidra::str::assign(local_27c,"",0);
      puVar1 = local_214;
      local_14._0_1_ = 10;
      paVar5 = (allocator<ListData> *)new ((void *)(local_208)) ListData(local_214 + 2000);
      local_14 = CONCAT31(local_14._1_3_,0xc);
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      (local_208)->~ListData();
      local_14._0_1_ = 0xff;
      local_14._1_3_ = 0xffffff;
      if (0xf < uStack_58) {
        pnVar12 = (nothrow_t *)(uStack_58 + 1);
        pvVar11 = local_6c;
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_6c + -4);
          pnVar12 = (nothrow_t *)(uStack_58 + 0x24);
          if (0x1f < (uint)((int)local_6c + (-4 - (int)pvVar11))) goto LAB_0043bcd1;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_214 = puVar1 + 1;
      pGVar10 = g_gameData + 0x130;
    } while (local_214 < (undefined1 *)(*(int *)(g_gameData + 0x134) - *(int *)pGVar10 >> 2));
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall NotesManager::getSelectedNotesText(NotesManager *this)
void NotesManager::getSelectedNotesText()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Contract *this_00;
  undefined1 uVar1;
  FictionData *pFVar2;
  char *pcVar3;
  char *pcVar4;
  SpaceStation *pSVar5;
  std::string *pbVar6;
  Good *pGVar7;
  int iVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  std::string *in_stack_00000004;
  std::string abStack_74 [4];
  undefined4 uStack_70;
  uint uVar11;
  SpaceStation *local_50;
  SpaceStation *local_48;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005b52a0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  // [seh] local_8._0_1_ = 0;
  // [seh] local_8._1_3_ = 0;
  uVar11 = *(uint *)this;
  if (uVar11 == 0xffffffff) {
    ghidra::str::assign
              ((std::string *)&local_44,
               "`7Tasks, contracts and jobs you\'ve taken on can be selected above.",0x42);
  }
  else {
    if (2999 < (int)uVar11) {
      pFVar2 = ghidra::any_singleton();
      iVar8 = *(int *)(*(int *)(pFVar2 + 0xc) + -12000 + uVar11 * 4);
      ghidra::str::append((std::string *)&local_44,"`%",2);
      pcVar3 = (char *)(iVar8 + 0x18);
      if (0xf < *(uint *)(iVar8 + 0x2c)) {
        pcVar3 = *(char **)(iVar8 + 0x18);
      }
      uVar11 = *(uint *)(iVar8 + 0x28);
      goto LAB_0043cecb;
    }
    if ((int)uVar11 < 2000) {
      if ((int)uVar11 < 1000) {
        if ((uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2) <= uVar11) {
          *(undefined4 *)this = 0xffffffff;
          *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
          *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
          *in_stack_00000004 = (std::string)0x0;
          ghidra::str::assign(in_stack_00000004,"",0);
          if (uStack_30 < 0x10) goto LAB_0043ceef;
          pnVar10 = (nothrow_t *)(uStack_30 + 1);
          pvVar9 = local_44;
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_44 + -4);
            pnVar10 = (nothrow_t *)(uStack_30 + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar9))) goto LAB_0043c690;
          }
          goto LAB_0043c386;
        }
        this_00 = *(Contract **)(*(int *)(g_gameData + 0x13c) + uVar11 * 4);
        ghidra::str::ctor
                  (abStack_74,(std::string *)(*(int *)(this_00 + 0x54) + 0x48));
        // [seh] local_8._0_1_ = 0xc;
        pFVar2 = ghidra::any_singleton();
        // [seh] local_8._0_1_ = 0;
        (pFVar2)->getFactionForID();
        ghidra::str::append((std::string *)&local_44,"`!CARGO CONTRACT\n\n",0x12);
        local_48 = (SpaceStation *)0x0;
        local_50 = (SpaceStation *)0x0;
        pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 0xd;
        ghidra::str::append((std::string *)&local_44,pbVar6);
        // [seh] local_8._0_1_ = 0;
        uVar1 = (undefined1)local_8;
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar10 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar10 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
          }
          operator_delete(pvVar9,pnVar10);
        }
        if ((*(int *)(*(int *)(this_00 + 0x54) + 0x18) == 2) ||
           (*(int *)(*(int *)(this_00 + 0x54) + 0x18) == 1)) {
          ghidra::str::ctor(abStack_74,(std::string *)(this_00 + 0x20));
          local_48 = GameData::getSpaceStation();
          if (local_48 == (SpaceStation *)ShipData::currentlyBoardedShip) {
            ghidra::str::append((std::string *)&local_44,"`7Deliver to `!here\n",0x14);
          }
          else {
            uStack_70 = 0x43caad;
            pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8._0_1_ = 0xe;
            ghidra::str::append((std::string *)&local_44,pbVar6);
            // [seh] local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar10 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar10 = (nothrow_t *)(local_18 + 0x24);
                uVar1 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
        }
        if ((*(int *)(*(int *)(this_00 + 0x54) + 0x18) == 2) ||
           (*(int *)(*(int *)(this_00 + 0x54) + 0x18) == 0)) {
          ghidra::str::ctor(abStack_74,(std::string *)(this_00 + 0x38));
          local_50 = GameData::getSpaceStation();
          if (local_50 == (SpaceStation *)ShipData::currentlyBoardedShip) {
            ghidra::str::append((std::string *)&local_44,"`7From `%here\n",0xe);
          }
          else {
            uStack_70 = 0x43cb62;
            pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8._0_1_ = 0xf;
            ghidra::str::append((std::string *)&local_44,pbVar6);
            // [seh] local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar10 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar10 = (nothrow_t *)(local_18 + 0x24);
                uVar1 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
        }
        if (0.0 < *(float *)(this_00 + 0x1c)) {
          uStack_70 = 0x43cbd5;
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 0x10;
          ghidra::str::append((std::string *)&local_44,pbVar6);
          // [seh] local_8._0_1_ = 0;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              uVar1 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
            }
            operator_delete(pvVar9,pnVar10);
          }
          (this_00)->hoursLeft();
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 0x11;
          ghidra::str::append((std::string *)&local_44,pbVar6);
          // [seh] local_8._0_1_ = 0;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              uVar1 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
            }
            operator_delete(pvVar9,pnVar10);
          }
        }
        ghidra::str::append((std::string *)&local_44,"\n",1);
        if (*(int *)(*(int *)(this_00 + 0x58) + 0x2c) < 1) {
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 0x13;
        }
        else {
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 0x12;
        }
        ghidra::str::append((std::string *)&local_44,pbVar6);
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar10 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar10 = (nothrow_t *)(local_18 + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
          }
          operator_delete(pvVar9,pnVar10);
        }
        ghidra::str::append((std::string *)&local_44,"\n",1);
        pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 0x14;
        ghidra::str::append((std::string *)&local_44,pbVar6);
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar10 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar10 = (nothrow_t *)(local_18 + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
          }
          operator_delete(pvVar9,pnVar10);
        }
        ghidra::str::append((std::string *)&local_44,"\n",1);
        ghidra::str::append((std::string *)&local_44,"`7Cargo Details\n",0x10);
        ghidra::str::ctor(abStack_74,*(std::string **)(this_00 + 0x58));
        pGVar7 = GameData::getGoodWithShortName();
        pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 0x15;
        ghidra::str::append((std::string *)&local_44,pbVar6);
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar10 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar10 = (nothrow_t *)(local_18 + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0043c690;
          }
          operator_delete(pvVar9,pnVar10);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        iVar8 = CargoHold::amountCanHold
                          (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                           *(GoodContainmentOption *)(pGVar7 + 0x5c));
        if (iVar8 < *(int *)(*(int *)(this_00 + 0x58) + 0x18)) {
          uVar11 = 5;
          pcVar3 = "`@no\n";
        }
        else {
          uVar11 = 6;
          pcVar3 = "`0yes\n";
        }
        ghidra::str::append((std::string *)&local_44,pcVar3,uVar11);
        ghidra::str::append((std::string *)&local_44,"`7Jump : ",9);
        if ((*(int *)(*(int *)(this_00 + 0x54) + 0x18) == 1) ||
           (*(int *)(*(int *)(this_00 + 0x54) + 0x18) == 2)) {
          if (*(int *)(local_48 + 0x24) == *(int *)(g_gameData + 0xd8)) {
            pcVar3 = "`0no\n";
            uVar11 = 5;
          }
          else {
            pcVar3 = "`$yes\n";
            uVar11 = 6;
          }
        }
        else if (*(int *)(local_50 + 0x24) == *(int *)(g_gameData + 0xd8)) {
          uVar11 = 5;
          pcVar3 = "`0no\n";
        }
        else {
          uVar11 = 6;
          pcVar3 = "`$yes\n";
        }
      }
      else {
        if (*(int *)(g_gameData + 0x128) != 0) {
          ghidra::str::ctor
                    (abStack_74,*(std::string **)(*(int *)(g_gameData + 0x128) + 0xc));
          GameData::getSpaceStation();
          ghidra::str::ctor
                    (abStack_74,
                     (std::string *)(*(int *)(*(int *)(g_gameData + 0x128) + 0xc) + 0x18));
          pSVar5 = GameData::getSpaceStation();
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 7;
          ghidra::str::append((std::string *)&local_44,pbVar6);
          // [seh] local_8._0_1_ = 0;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar9,pnVar10);
          }
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 8;
          ghidra::str::append((std::string *)&local_44,pbVar6);
          // [seh] local_8._0_1_ = 0;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar9,pnVar10);
          }
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 9;
          ghidra::str::append((std::string *)&local_44,pbVar6);
          // [seh] local_8._0_1_ = 0;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar9,pnVar10);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (*(int *)(pSVar5 + 0x24) == *(int *)(g_gameData + 0xd8)) {
            ghidra::str::append
                      ((std::string *)&local_44,"`%Sector: `#[this sector]\n",0x1a);
          }
          else {
            pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8._0_1_ = 10;
            ghidra::str::append((std::string *)&local_44,pbVar6);
            // [seh] local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar10 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar10 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar9,pnVar10);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 0xb;
          ghidra::str::append((std::string *)&local_44,pbVar6);
          goto LAB_0043c666;
        }
        pcVar3 = 
        "`!*SPECIAL* Internal systems indicate passenger cabin is marked as taken. `%(not booked through AutoTravel)\n"
        ;
        uVar11 = 0x6c;
      }
LAB_0043cecb:
      ghidra::str::append((std::string *)&local_44,pcVar3,uVar11);
    }
    else {
      if ((uint)(*(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2) <= uVar11 - 2000)
      {
        *(undefined4 *)this = 0xffffffff;
        *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
        *in_stack_00000004 = (std::string)0x0;
        ghidra::str::assign(in_stack_00000004,"",0);
        if (uStack_30 < 0x10) goto LAB_0043ceef;
        pnVar10 = (nothrow_t *)(uStack_30 + 1);
        pvVar9 = local_44;
        if ((nothrow_t *)0xfff < pnVar10) {
          pnVar10 = (nothrow_t *)(uStack_30 + 0x24);
          pvVar9 = *(void **)((int)local_44 + -4);
          if (0x1f < (uint)((int)local_44 + (-4 - (int)*(void **)((int)local_44 + -4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_0043c386:
        operator_delete(pvVar9,pnVar10);
        goto LAB_0043ceef;
      }
      iVar8 = *(int *)(*(int *)(g_gameData + 0x130) + -8000 + uVar11 * 4);
      ghidra::str::ctor
                (abStack_74,(std::string *)(*(int *)(iVar8 + 0x4c) + 0x24));
      GameData::getShipClassWithIdentifier();
      (g_gameData)->getSectorWithID(*(int *)(*(int *)(iVar8 + 0x4c) + 0x18));
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 1;
      pcVar3 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar3 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)&local_44,pcVar3,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 2;
      pcVar3 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar3 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)&local_44,pcVar3,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 3;
      pcVar3 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar3 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)&local_44,pcVar3,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 4;
      pcVar3 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar3 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)&local_44,pcVar3,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 5;
      pcVar3 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar3 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)&local_44,pcVar3,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      iVar8 = *(int *)(*(int *)(iVar8 + 0x4c) + 0x1c);
      if (iVar8 == 0) {
        uVar11 = 0x14;
        pcVar3 = "`%Threat: `0Minimal\n";
LAB_0043c631:
        ghidra::str::append((std::string *)&local_44,pcVar3,uVar11);
      }
      else {
        if (iVar8 == 1) {
          pcVar3 = "`%Threat: `$Possible\n";
          uVar11 = 0x15;
          goto LAB_0043c631;
        }
        if (iVar8 == 2) {
          pcVar3 = "`%Threat: `@Dangerous\n";
          uVar11 = 0x16;
          goto LAB_0043c631;
        }
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 6;
      pcVar3 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar3 = *(char **)pcVar4;
      }
      ghidra::str::append((std::string *)&local_44,pcVar3,*(uint *)(pcVar4 + 0x10));
LAB_0043c666:
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          uVar1 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
LAB_0043c690:
            // [seh] local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
  *(void **)in_stack_00000004 = local_44;
  *(undefined4 *)(in_stack_00000004 + 4) = uStack_40;
  *(undefined4 *)(in_stack_00000004 + 8) = uStack_3c;
  *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_38;
  *(ulonglong *)(in_stack_00000004 + 0x10) = CONCAT44(uStack_30,local_34);
LAB_0043ceef:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
