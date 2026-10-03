// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall ComputerSystem::renderArticle(ComputerSystem *this,CommsData *param_1,int param_2)
void ComputerSystem::renderArticle(CommsData * param_1, int param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  Article *pAVar1;
  std::string *pbVar2;
  char *pcVar3;
  bool *pbVar4;
  Stats *this_01;
  char *pcVar5;
  TextEngine *this_02;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  undefined4 uStack_d4;
  std::string local_c8 [4];
  undefined4 uStack_c4;
  undefined4 uStack_bc;
  std::string local_b0 [12];
  undefined **local_a4;
  uint local_94;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005be607;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (*(char **)((char *)this + 100) != (char *)0x0) {
    if ((uint)param_2 < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18)) {
      ghidra::str::ctor
                ((std::string *)local_5c,
                 (std::string *)(*(int *)(param_1 + 0x14) + param_2 * 0x18));
      // [seh] local_8 = 0;
      ghidra::str::ctor((std::string *)&local_94,(std::string *)local_5c);
      pAVar1 = getArticle(this);
      this_00 = (std::string *)((char *)this + 0x44);
      *(Article **)((char *)this + 0x40) = pAVar1;
      *(undefined4 *)((char *)this + 0x54) = 0;
      pbVar2 = this_00;
      if (0xf < *(uint *)((char *)this + 0x58)) {
        pbVar2 = *(std::string **)this_00;
      }
      *pbVar2 = (std::string)0x0;
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 1;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar5,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8._0_1_ = 0;
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
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 2;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar5,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8._0_1_ = 0;
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
      if (*(char *)(*(int *)((char *)this + 0x40) + 0xec) == '\0') {
        ghidra::str::append(this_00,"^",1);
      }
      else {
        local_94 = 0x4b4060;
        strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 3;
        pcVar3 = (char *)strUsingArgs((char *)local_44);
        // [seh] local_8._0_1_ = 4;
        pcVar5 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar5 = *(char **)pcVar3;
        }
        ghidra::str::append(this_00,pcVar5,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8._0_1_ = 3;
        if (0xf < local_30) {
          pnVar7 = (nothrow_t *)(local_30 + 1);
          pvVar6 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_44[0] + -4);
            pnVar7 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar7);
        }
        // [seh] local_8._0_1_ = 0;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
      }
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 5;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar5,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8._0_1_ = 0;
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
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 6;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar5,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8._0_1_ = 0;
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
      pcVar3 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 7;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar5,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8._0_1_ = 0;
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
      (*(TextEngine **)((char *)this + 100))->addBlankLine();
      (this_02)->addLinef(*(char **)((char *)this + 100));
      (*(TextEngine **)((char *)this + 100))->addBlankLine();
      local_a4 = std::_Func_impl_no_alloc<>::vftable;
      // [seh] local_8._0_1_ = 8;
      uStack_c4 = 0x4b42cb;
      ghidra::str::ctor
                ((std::string *)&uStack_bc,(std::string *)(*(int *)((char *)this + 0x40) + 0x1c));
      // [seh] local_8._0_1_ = 9;
      ghidra::str::ctor((std::string *)&uStack_d4,(std::string *)this_00);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      (*(TextEngine **)((char *)this + 100))->showDocument();
      ghidra::str::ctor
                ((std::string *)&local_94,
                 (std::string *)(*(int *)(param_1 + 0x14) + param_2 * 0x18));
      pAVar1 = getArticle(this);
      uVar8 = 0;
      if (*(int *)(pAVar1 + 0xe4) - *(int *)(pAVar1 + 0xe0) >> 2 != 0) {
        do {
          (*(MetaGameAction **)(*(int *)(pAVar1 + 0xe0) + uVar8 * 4))->perform();
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(*(int *)(pAVar1 + 0xe4) - *(int *)(pAVar1 + 0xe0) >> 2));
      }
      pbVar4 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(param_1 + 0xc),(std::string *)(pAVar1 + 0x6c));
      *pbVar4 = true;
      local_94 = local_94 & 0xffffff00;
      ghidra::str::assign((std::string *)&local_94,"articles_read",0xd);
      // [seh] local_8._0_1_ = 10;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        this_01 = operator_new(0x58);
        // [seh] local_8._0_1_ = 0xb;
        Singleton<Stats>::instance = (Stats *)new ((void *)(this_01)) Stats();
      }
      // [seh] local_8._0_1_ = 0;
      (Singleton<Stats>::instance)->addStat();
      local_a4 = (undefined **)0x4b43d6;
      ghidra::str::assign((std::string *)&stack0xffffff68,"",0);
      // [seh] local_8._0_1_ = 0xc;
      local_b0[0] = (std::string)0x0;
      uStack_bc = 0x4b43ff;
      ghidra::str::assign(local_b0,"articles_read",0xd);
      // [seh] local_8._0_1_ = 0xd;
      local_c8[0] = (std::string)0x0;
      uStack_d4 = 0x4b4425;
      ghidra::str::assign(local_c8,"play",4);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      Analytics::logEvent();
      if (0xf < local_48) {
        pnVar7 = (nothrow_t *)(local_48 + 1);
        pvVar6 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_5c[0] + -4);
          pnVar7 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
    }
    else {
      TextEngine::addLinef
                ((TextEngine *)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)),
                 *(char **)((char *)this + 100));
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall ComputerSystem::sendCurrentDraft(ComputerSystem *this)
void ComputerSystem::sendCurrentDraft()

{
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  ghidra::vector *this_00;
  AnimationFrames **ppAVar2;
  EmailDraft *this_01;
  GameData *pGVar3;
  bool bVar4;
  AnimationFrames *pAVar5;
  int *piVar6;
  int iVar7;
  SaveHandler *this_02;
  Stats *pSVar8;
  std::string *pbVar9;
  uint uVar10;
  int *piVar11;
  std::string local_78 [12];
  undefined4 uStack_6c;
  std::string local_60 [12];
  undefined4 uStack_54;
  AnimationFrames local_44 [8];
  undefined4 uStack_3c;
  AnimationFrames *local_18;
  Stats *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be657;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar7 = *(int *)((char *)this + 0x5c);
  if (iVar7 == 0) {
    debugPrint("ERROR","Attempting to send a draft, but no draft is selected.");
    // [seh] ExceptionList = local_10;
    return;
  }
  uVar10 = 0;
  if (*(int *)(iVar7 + 0x68) - *(int *)(iVar7 + 100) >> 2 != 0) {
    do {
      bVar4 = Requirement::checkReq
                        (*(Requirement **)(*(int *)(iVar7 + 100) + uVar10 * 4),
                         *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                         *(BankAccount **)(g_gameData + 0x124));
      if (!bVar4) {
        debugPrint("ERROR",
                   "Attempting to send a draft, but the draft requirements are not met somehow.");
        // [seh] ExceptionList = local_10;
        return;
      }
      iVar7 = *(int *)((char *)this + 0x5c);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(*(int *)(iVar7 + 0x68) - *(int *)(iVar7 + 100) >> 2));
  }
  uStack_3c = 0x4b4556;
  debugPrint("GAME","Sending draft: %s");
  uVar10 = 0;
  if (*(int *)(*(int *)((char *)this + 0x5c) + 0x74) - *(int *)(*(int *)((char *)this + 0x5c) + 0x70) >> 2 != 0) {
    do {
      MetaGameAction::perform
                (*(MetaGameAction **)(*(int *)(*(int *)((char *)this + 0x5c) + 0x70) + uVar10 * 4));
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(*(int *)(*(int *)((char *)this + 0x5c) + 0x74) -
                             *(int *)(*(int *)((char *)this + 0x5c) + 0x70) >> 2));
  }
  debugPrint("GAME","Performed actions...");
  iVar7 = *(int *)(g_gameData + 300);
  pbVar9 = *(std::string **)(iVar7 + 0x24);
  if (*(std::string **)(iVar7 + 0x28) == pbVar9) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(iVar7 + 0x20),(std::string *)pbVar9,
               (std::string *)**(undefined4 **)((char *)this + 0x5c));
  }
  else {
    ghidra::str::ctor(pbVar9,(std::string *)**(undefined4 **)((char *)this + 0x5c));
    *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 0x18;
  }
  uStack_3c = 0x4b4611;
  debugPrint("GAME","Draft set \'%s\' marked as read");
  iVar7 = **(int **)((char *)this + 0x5c);
  piVar1 = *(int **)(iVar7 + 0x58);
  piVar11 = *(int **)(iVar7 + 0x54);
  if (piVar11 != piVar1) {
    do {
      if ((int *)*piVar11 == *(int **)((char *)this + 0x5c)) break;
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar1);
    if (piVar11 != piVar1) {
      piVar6 = piVar11 + 1;
      pSVar8 = (Stats *)0x0;
      local_14 = (Stats *)((uint)((int)piVar1 + (3 - (int)piVar6)) >> 2);
      if (piVar1 < piVar6) {
        local_14 = (Stats *)0x0;
      }
      if (local_14 != (Stats *)0x0) {
        do {
          if (*piVar6 != *(int *)((char *)this + 0x5c)) {
            *piVar11 = *piVar6;
            piVar11 = piVar11 + 1;
          }
          pSVar8 = pSVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (pSVar8 != local_14);
      }
    }
  }
  local_18 = (AnimationFrames *)**(int **)((char *)this + 0x5c);
  if (piVar11 != piVar1) {
    iVar7 = *(int *)(local_18 + 0x58);
    uStack_3c = 0x4b4682;
    memmove(piVar11,piVar1,iVar7 - (int)piVar1);
    *(int *)(local_18 + 0x58) = (iVar7 - (int)piVar1) + (int)piVar11;
  }
  local_18 = operator_new(0xa0);
  pAVar5 = (AnimationFrames *)new ((void *)((EmailInstance *)local_18)) EmailInstance();
  iVar7 = *(int *)((char *)this + 0x5c);
  pbVar9 = (std::string *)(iVar7 + 0x1c);
  local_18 = pAVar5;
  if ((std::string *)(pAVar5 + 0x68) != pbVar9) {
    if (0xf < *(uint *)(iVar7 + 0x30)) {
      pbVar9 = *(std::string **)pbVar9;
    }
    ghidra::str::assign
              ((std::string *)(pAVar5 + 0x68),(char *)pbVar9,*(uint *)(iVar7 + 0x2c));
  }
  iVar7 = *(int *)(g_gameData + 0x124);
  pbVar9 = (std::string *)(iVar7 + 4);
  if ((std::string *)(pAVar5 + 4) != pbVar9) {
    if (0xf < *(uint *)(iVar7 + 0x18)) {
      pbVar9 = *(std::string **)pbVar9;
    }
    ghidra::str::assign
              ((std::string *)(pAVar5 + 4),(char *)pbVar9,*(uint *)(iVar7 + 0x14));
  }
  iVar7 = *(int *)((char *)this + 0x5c);
  pbVar9 = (std::string *)(iVar7 + 0x34);
  if ((std::string *)(pAVar5 + 0x1c) != pbVar9) {
    if (0xf < *(uint *)(iVar7 + 0x48)) {
      pbVar9 = *(std::string **)pbVar9;
    }
    ghidra::str::assign
              ((std::string *)(pAVar5 + 0x1c),(char *)pbVar9,*(uint *)(iVar7 + 0x44));
    iVar7 = *(int *)((char *)this + 0x5c);
  }
  pbVar9 = (std::string *)(iVar7 + 0x4c);
  if ((std::string *)(pAVar5 + 0x34) != pbVar9) {
    if (0xf < *(uint *)(iVar7 + 0x60)) {
      pbVar9 = *(std::string **)pbVar9;
    }
    ghidra::str::assign
              ((std::string *)(pAVar5 + 0x34),(char *)pbVar9,*(uint *)(iVar7 + 0x5c));
    iVar7 = *(int *)((char *)this + 0x5c);
  }
  pbVar9 = (std::string *)(iVar7 + 0x34);
  if ((std::string *)(pAVar5 + 0x4c) != pbVar9) {
    if (0xf < *(uint *)(iVar7 + 0x48)) {
      pbVar9 = *(std::string **)pbVar9;
    }
    ghidra::str::assign
              ((std::string *)(pAVar5 + 0x4c),(char *)pbVar9,*(uint *)(iVar7 + 0x44));
  }
  pGVar3 = g_gameData;
  pAVar5[100] = (AnimationFrames)0x1;
  this_00 = *(ghidra::vector **)(pGVar3 + 300);
  ppAVar2 = *(AnimationFrames ***)(this_00 + 4);
  if (*(AnimationFrames ***)(this_00 + 8) == ppAVar2) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar2,&local_18);
  }
  else {
    *ppAVar2 = pAVar5;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
  }
  this_01 = *(EmailDraft **)((char *)this + 0x5c);
  if (this_01 != (EmailDraft *)0x0) {
    (this_01)->~EmailDraft();
    operator_delete(this_01,(nothrow_t *)0x7c);
  }
  local_18 = local_44;
  *(undefined4 *)((char *)this + 0x5c) = 0;
  local_44[0] = (AnimationFrames)0x0;
  ghidra::str::assign((std::string *)local_44,"emails_sent",0xb);
  // [seh] local_8 = 0;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_14 = operator_new(0x58);
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_14)) Stats();
  }
  // [seh] local_8 = 0xffffffff;
  (Singleton<Stats>::instance)->addStat();
  local_18 = (AnimationFrames *)&stack0xffffffb8;
  uStack_54 = 0x4b482a;
  ghidra::str::assign((std::string *)&stack0xffffffb8,"",0);
  local_14 = (Stats *)local_60;
  // [seh] local_8 = 2;
  local_60[0] = (std::string)0x0;
  uStack_6c = 0x4b4856;
  ghidra::str::assign(local_60,"emails_sent",0xb);
  // [seh] local_8 = CONCAT31(local_8._1_3_,3);
  local_78[0] = (std::string)0x0;
  ghidra::str::assign(local_78,"play",4);
  // [seh] local_8 = 0xffffffff;
  Analytics::logEvent();
  iVar7 = *(int *)(g_gameData + 0xd0);
  if (iVar7 != 0) {
    if ((*(int *)(iVar7 + 0xd4) == 3) && (*(int *)(iVar7 + 0xf8) == 2)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      ghidra::any_singleton();
      (this_02)->saveGame();
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ComputerSystem::doneWithDraft(ComputerSystem *this)
void ComputerSystem::doneWithDraft()

{
  showDrafts(this);
  debugPrint("DETAIL","doneWithDraft()");
  *(undefined4 *)((char *)this + 0x5c) = 0;
  return;
}


// Ghidra: void __thiscall ComputerSystem::showDrafts(ComputerSystem *this)
void ComputerSystem::showDrafts()

{
  std::string local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(*(int *)((char *)this + 4) + 0x18) = 2;
  local_18 = 0;
  local_14 = 0xf;
  local_28[0] = (std::string)0x0;
  ghidra::str::assign(local_28,"",0);
  renderDrafts(this,*(undefined4 *)(g_gameData + 300));
  *(undefined4 *)((char *)this + 8) = 0;
  return;
}


// Ghidra: void __thiscall ComputerSystem::doneWithEmail(ComputerSystem *this)
void ComputerSystem::doneWithEmail()

{
  showEmails(this);
  *(undefined4 *)((char *)this + 8) = 0;
  debugPrint("DETAIL","doneWithEmail()");
  *(undefined4 *)((char *)this + 0x18) = 0;
  return;
}


// Ghidra: void __thiscall ComputerSystem::showEmails(ComputerSystem *this)
void ComputerSystem::showEmails()

{
  *(undefined4 *)(*(int *)((char *)this + 4) + 0x18) = 1;
  renderEmails(this,*(CommsData **)(g_gameData + 300));
  return;
}


// Ghidra: void __thiscall ComputerSystem::doneWithArticle(ComputerSystem *this)
void ComputerSystem::doneWithArticle()

{
  showArticles(this);
  *(undefined4 *)((char *)this + 8) = 0;
  return;
}


// Ghidra: void __thiscall ComputerSystem::showArticles(ComputerSystem *this)
void ComputerSystem::showArticles()

{
  *(undefined4 *)(*(int *)((char *)this + 4) + 0x18) = 3;
  renderArticles(this,*(CommsData **)(g_gameData + 300));
  return;
}


// Ghidra: void __thiscall ComputerSystem::doneWithFile(ComputerSystem *this)
void ComputerSystem::doneWithFile()

{
  *(undefined4 *)(*(int *)((char *)this + 4) + 0x18) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  return;
}


// Ghidra: Article * __thiscall ComputerSystem::getArticle(ComputerSystem *this,char *param_2)
Article * ComputerSystem::getArticle(char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  Article *pAVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)((char *)this + 0x68);
  uVar6 = 0;
  uVar8 = *(int *)((char *)this + 0x6c) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pAVar7 = *(Article **)(iVar1 + uVar6 * 4);
        goto LAB_004b4c49;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pAVar7 = (Article *)0x0;
LAB_004b4c49:
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
  return pAVar7;
}


// Ghidra: void __thiscall ComputerSystem::renderEmail(ComputerSystem *this,CommsData *param_1,int param_2)
void ComputerSystem::renderEmail(CommsData * param_1, int param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  undefined1 *puVar1;
  std::string *pbVar2;
  char *pcVar3;
  Stats *this_01;
  EmailManager *pEVar4;
  Email *pEVar5;
  int iVar6;
  word *pwVar7;
  char *pcVar8;
  TextEngine *this_02;
  void *pvVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  undefined4 uStack_d4;
  std::string local_c8 [4];
  undefined4 uStack_c4;
  undefined4 uStack_bc;
  std::string local_b0 [12];
  undefined **local_a4;
  std::string local_94 [8];
  undefined4 uStack_8c;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005be6f7;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  puVar1 = &stack0xfffffffc;
  if (*(char **)((char *)this + 100) != (char *)0x0) {
    if ((uint)param_2 < (uint)(*(int *)(param_1 + 4) - *(int *)param_1 >> 2)) {
      this_00 = (std::string *)((char *)this + 0x44);
      *(undefined4 *)((char *)this + 0x18) = *(undefined4 *)(*(int *)param_1 + param_2 * 4);
      *(undefined4 *)((char *)this + 0x54) = 0;
      pbVar2 = this_00;
      if (0xf < *(uint *)((char *)this + 0x58)) {
        pbVar2 = *(std::string **)this_00;
      }
      *pbVar2 = (std::string)0x0;
      uStack_8c = 0x4b4d49;
      pcVar3 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 0;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar8,*(uint *)(pcVar3 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar10 = (nothrow_t *)(local_28 + 1);
        pvVar9 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_3c[0] + -4);
          pnVar10 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      uStack_8c = 0x4b4dc2;
      pcVar3 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 1;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar8,*(uint *)(pcVar3 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar10 = (nothrow_t *)(local_28 + 1);
        pvVar9 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_3c[0] + -4);
          pnVar10 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      uStack_8c = 0x4b4e3b;
      pcVar3 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 2;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar8,*(uint *)(pcVar3 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar10 = (nothrow_t *)(local_28 + 1);
        pvVar9 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_3c[0] + -4);
          pnVar10 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      pcVar3 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 3;
      pcVar8 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar8 = *(char **)pcVar3;
      }
      ghidra::str::append(this_00,pcVar8,*(uint *)(pcVar3 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar10 = (nothrow_t *)(local_28 + 1);
        pvVar9 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_3c[0] + -4);
          pnVar10 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      iVar6 = *(int *)((char *)this + 0x18);
      pcVar8 = (char *)(iVar6 + 0x34);
      if (0xf < *(uint *)(iVar6 + 0x48)) {
        pcVar8 = *(char **)(iVar6 + 0x34);
      }
      ghidra::str::append(this_00,pcVar8,*(uint *)(iVar6 + 0x44));
      local_94[0] = (std::string)0x0;
      ghidra::str::assign(local_94,"emails_read",0xb);
      local_14 = 4;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        this_01 = operator_new(0x58);
        local_14 = CONCAT31(local_14._1_3_,5);
        Singleton<Stats>::instance = (Stats *)new ((void *)(this_01)) Stats();
      }
      local_14 = 0xffffffff;
      (Singleton<Stats>::instance)->addStat();
      local_a4 = (undefined **)0x4b4fa6;
      ghidra::str::assign((std::string *)&stack0xffffff68,"",0);
      local_14 = 6;
      local_b0[0] = (std::string)0x0;
      uStack_bc = 0x4b4fd2;
      ghidra::str::assign(local_b0,"emails_read",0xb);
      local_14 = CONCAT31(local_14._1_3_,7);
      local_c8[0] = (std::string)0x0;
      uStack_d4 = 0x4b4ff8;
      ghidra::str::assign(local_c8,"play",4);
      local_14 = 0xffffffff;
      Analytics::logEvent();
      ghidra::str::ctor(local_94,(std::string *)(*(int *)((char *)this + 0x18) + 0x80))
      ;
      local_14 = 8;
      pEVar4 = ghidra::any_singleton();
      local_14 = 0xffffffff;
      pEVar5 = (pEVar4)->getEmail();
      if (((pEVar5 != (Email *)0x0) && (*(char *)(*(int *)((char *)this + 0x18) + 100) == '\0')) &&
         (uVar11 = 0, *(int *)(pEVar5 + 0x90) - *(int *)(pEVar5 + 0x8c) >> 2 != 0)) {
        do {
          (*(MetaGameAction **)(*(int *)(pEVar5 + 0x8c) + uVar11 * 4))->perform();
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)(*(int *)(pEVar5 + 0x90) - *(int *)(pEVar5 + 0x8c) >> 2));
      }
      *(undefined1 *)(*(int *)((char *)this + 0x18) + 100) = 1;
      (*(TextEngine **)((char *)this + 100))->addBlankLine();
      uStack_8c = 0x4b50b8;
      (this_02)->addLinef(*(char **)((char *)this + 100));
      (*(TextEngine **)((char *)this + 100))->addBlankLine();
      uStack_8c = 0x4b50e0;
      strUsingArgs((char *)&local_54);
      local_14 = 9;
      iVar6 = (param_1)->getDraftCount();
      if (iVar6 < 1) {
        local_a4 = std::_Func_impl_no_alloc<>::vftable;
        local_14._0_1_ = 0xc;
        uStack_c4 = 0x4b51f1;
        ghidra::str::ctor
                  ((std::string *)&uStack_bc,(std::string *)&local_54);
        local_14._0_1_ = 0xd;
      }
      else {
        uStack_8c = 0x4b5117;
        pwVar7 = (word *)strUsingArgs((char *)local_3c);
        if ((word *)&local_54 != pwVar7) {
          // [mislabelled-dtor] word::~word((word *)&local_54);
          local_54 = *(void **)pwVar7;
          uStack_50 = *(undefined4 *)(pwVar7 + 4);
          uStack_4c = *(undefined4 *)(pwVar7 + 8);
          uStack_48 = *(undefined4 *)(pwVar7 + 0xc);
          local_44 = *(undefined8 *)(pwVar7 + 0x10);
          *(undefined4 *)(pwVar7 + 0x10) = 0;
          *(undefined4 *)(pwVar7 + 0x14) = 0xf;
          *pwVar7 = (word)0x0;
        }
        if (0xf < local_28) {
          pnVar10 = (nothrow_t *)(local_28 + 1);
          pvVar9 = local_3c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_3c[0] + -4);
            pnVar10 = (nothrow_t *)(local_28 + 0x24);
            if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar10);
        }
        local_a4 = std::_Func_impl_no_alloc<>::vftable;
        local_14._0_1_ = 10;
        uStack_c4 = 0x4b51b2;
        ghidra::str::ctor
                  ((std::string *)&uStack_bc,(std::string *)&local_54);
        local_14._0_1_ = 0xb;
      }
      ghidra::str::ctor
                ((std::string *)&uStack_d4,(std::string *)((char *)this + 0x44));
      local_14 = CONCAT31(local_14._1_3_,9);
      (*(TextEngine **)((char *)this + 100))->showDocument();
      *(undefined4 *)((char *)this + 8) = 1;
      puVar1 = puStack_20;
      if (0xf < local_44._4_4_) {
        pnVar10 = (nothrow_t *)(local_44._4_4_ + 1);
        pvVar9 = local_54;
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_54 + -4);
          pnVar10 = (nothrow_t *)(local_44._4_4_ + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
        puVar1 = puStack_20;
      }
    }
    else {
      uStack_8c = 0x4b4d04;
      // [seh] puStack_20 = &stack0xfffffffc;
      ((TextEngine *)param_2)->addLinef(*(char **)((char *)this + 100));
      puVar1 = puStack_20;
    }
  }
  // [seh] puStack_20 = puVar1;
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: int __thiscall ComputerSystem::getMostRecentArticles(ComputerSystem *this,int param_1,bool param_2)
int ComputerSystem::getMostRecentArticles(int param_1, bool param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  bool bVar1;
  uint uVar2;
  AnimationFrames *pAVar3;
  int iVar4;
  size_t sVar5;
  AnimationFrames *pAVar6;
  AnimationFrames *pAVar7;
  nothrow_t *pnVar8;
  AnimationFrames *pAVar9;
  AnimationFrames *pAVar10;
  uint uVar11;
  AnimationFrames *local_3c;
  AnimationFrames *local_38;
  AnimationFrames *local_34;
  undefined4 local_30;
  AnimationFrames *local_2c;
  ComputerSystem *local_28;
  uint local_24;
  AnimationFrames *local_20;
  AnimationFrames *local_1c;
  AnimationFrames *local_18;
  AnimationFrames *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be741;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_30 = 0;
  pAVar9 = (AnimationFrames *)0x0;
  pAVar10 = (AnimationFrames *)0x0;
  local_14 = (AnimationFrames *)0x0;
  local_3c = (AnimationFrames *)0x0;
  local_18 = (AnimationFrames *)0x0;
  local_38 = (AnimationFrames *)0x0;
  local_20 = (AnimationFrames *)0x0;
  local_34 = (AnimationFrames *)0x0;
  // [seh] local_8 = 1;
  iVar4 = *(int *)((char *)this + 0x68);
  local_24 = 0;
  local_28 = this;
  if (*(int *)((char *)this + 0x6c) - iVar4 >> 2 == 0) {
LAB_004b54e8:
    uVar11 = (int)pAVar10 - (int)pAVar9 >> 2;
    debugPrint("DETAIL","News articles: %d",uVar11,uVar2);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    local_30 = 1;
    local_2c = (AnimationFrames *)0x0;
    if (uVar11 != 0) {
      do {
        this_00 = *(std::string **)(param_1 + 4);
        if (*(std::string **)(param_1 + 8) == this_00) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)param_1,(std::string *)this_00,
                     (std::string *)(*(int *)(local_14 + (int)local_2c * 4) + 0x1c));
        }
        else {
          ghidra::str::ctor
                    (this_00,(std::string *)(*(int *)(local_14 + (int)local_2c * 4) + 0x1c));
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
        }
        local_2c = (AnimationFrames *)((int)local_2c + 1);
      } while (local_2c < uVar11);
    }
    if (local_14 != (AnimationFrames *)0x0) {
      pnVar8 = (nothrow_t *)((int)local_20 - (int)local_14 & 0xfffffffc);
      pAVar9 = local_14;
      if ((nothrow_t *)0xfff < pnVar8) {
        pAVar9 = *(AnimationFrames **)(local_14 + -4);
        pnVar8 = pnVar8 + 0x23;
        if ((AnimationFrames *)0x1f < local_14 + (-4 - (int)pAVar9)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pAVar9,pnVar8);
    }
    // [seh] ExceptionList = local_10;
    return param_1;
  }
LAB_004b52e0:
  bVar1 = (*(Article **)(iVar4 + local_24 * 4))->readyToPublish(true);
  if (bVar1) {
    local_1c = (AnimationFrames *)(*(int *)(local_28 + 0x68) + local_24 * 4);
    pAVar3 = *(AnimationFrames **)local_1c;
    if (*(int *)(pAVar3 + 0x84) != 0) {
      pAVar6 = (AnimationFrames *)0x0;
      local_2c = (AnimationFrames *)((int)pAVar10 - (int)pAVar9 >> 2);
      if (local_2c != (AnimationFrames *)0x0) {
        do {
          iVar4 = *(int *)(pAVar9 + (int)pAVar6 * 4);
          if ((*(int *)(iVar4 + 0x9c) < *(int *)(pAVar3 + 0x9c)) ||
             ((*(int *)(iVar4 + 0x9c) <= *(int *)(pAVar3 + 0x9c) &&
              ((pAVar9 = local_14, *(int *)(iVar4 + 0x98) < *(int *)(pAVar3 + 0x98) ||
               ((*(int *)(iVar4 + 0x98) <= *(int *)(pAVar3 + 0x98) &&
                ((*(int *)(iVar4 + 0x94) < *(int *)(pAVar3 + 0x94) ||
                 ((*(int *)(iVar4 + 0x94) <= *(int *)(pAVar3 + 0x94) &&
                  ((*(int *)(iVar4 + 0x90) < *(int *)(pAVar3 + 0x90) ||
                   ((*(int *)(iVar4 + 0x90) <= *(int *)(pAVar3 + 0x90) &&
                    (*(int *)(iVar4 + 0x8c) < *(int *)(pAVar3 + 0x8c))))))))))))))))) {
            if (pAVar6 != (AnimationFrames *)0xffffffff) {
              pAVar9 = pAVar9 + (int)pAVar6 * 4;
              local_2c = pAVar10;
              if (local_20 == pAVar10) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)&local_3c,(AnimationFrames **)pAVar9,
                           (AnimationFrames **)local_1c);
                local_20 = local_34;
                local_14 = local_3c;
                local_18 = local_38;
              }
              else if (pAVar9 == pAVar10) {
                *(AnimationFrames **)pAVar10 = *(AnimationFrames **)local_1c;
                local_38 = pAVar10 + 4;
                local_18 = local_38;
              }
              else {
                pAVar3 = *(AnimationFrames **)local_1c;
                sVar5 = (int)(local_18 + -4) - (int)pAVar9;
                *(AnimationFrames **)local_18 = *(AnimationFrames **)(local_18 + -4);
                local_38 = pAVar10 + 4;
                local_18 = local_38;
                memmove(pAVar10 + -sVar5,pAVar9,sVar5);
                *(AnimationFrames **)pAVar9 = pAVar3;
              }
              uVar11 = (int)local_18 - (int)local_14 >> 2;
              pAVar9 = local_14;
              pAVar10 = local_18;
              if ((uVar11 < 0xb) ||
                 (local_1c = *(AnimationFrames **)(local_14 + uVar11 * 4 + -4), pAVar3 = local_14,
                 local_14 == local_18)) goto LAB_004b54cc;
              goto LAB_004b5440;
            }
            break;
          }
          pAVar6 = pAVar6 + 1;
        } while (pAVar6 < local_2c);
      }
      if (local_2c < (AnimationFrames *)0xa) {
        if (local_20 == pAVar10) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_3c,(AnimationFrames **)pAVar10,(AnimationFrames **)local_1c)
          ;
          local_20 = local_34;
          local_14 = local_3c;
          pAVar9 = local_3c;
          pAVar10 = local_38;
          local_18 = local_38;
        }
        else {
          *(AnimationFrames **)pAVar10 = *(AnimationFrames **)local_1c;
          pAVar10 = pAVar10 + 4;
          local_38 = pAVar10;
          local_18 = pAVar10;
        }
      }
    }
  }
  goto LAB_004b54cc;
  while (pAVar3 = pAVar3 + 4, pAVar3 != local_18) {
LAB_004b5440:
    if (*(AnimationFrames **)pAVar3 == local_1c) break;
  }
  if (pAVar3 != local_18) {
    pAVar6 = pAVar3 + 4;
    pAVar7 = (AnimationFrames *)0x0;
    local_2c = (AnimationFrames *)((uint)(local_18 + (3 - (int)pAVar6)) >> 2);
    if (local_18 < pAVar6) {
      local_2c = (AnimationFrames *)0x0;
    }
    if (local_2c != (AnimationFrames *)0x0) {
      do {
        if (*(AnimationFrames **)pAVar6 != local_1c) {
          *(AnimationFrames **)pAVar3 = *(AnimationFrames **)pAVar6;
          pAVar3 = pAVar3 + 4;
        }
        pAVar7 = pAVar7 + 1;
        pAVar6 = pAVar6 + 4;
      } while (pAVar7 != local_2c);
    }
    local_38 = local_18;
    if (pAVar3 != local_18) {
      pAVar10 = pAVar3;
      local_38 = pAVar3;
      local_18 = pAVar3;
    }
  }
LAB_004b54cc:
  local_24 = local_24 + 1;
  iVar4 = *(int *)(local_28 + 0x68);
  if ((uint)(*(int *)(local_28 + 0x6c) - iVar4 >> 2) <= local_24) goto LAB_004b54e8;
  goto LAB_004b52e0;
}


// Ghidra: void __thiscall ComputerSystem::renderArticles(ComputerSystem *this,CommsData *param_1)
void ComputerSystem::renderArticles(CommsData * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff78[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ComputerSystem *pCVar5;
  std::string *pbVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  std::string *pbVar9;
  MetaGameAction *pMVar10;
  ghidra::vector avStack_d4 [4];
  undefined4 uStack_d0;
  ComputerSystem local_c4 [16];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined **local_ac;
  code *local_a8;
  undefined1 local_a4;
  ComputerSystem *local_a0;
  undefined4 uStack_90;
  std::string local_84 [4];
  undefined4 uStack_80;
  undefined4 local_5c;
  std::string *local_58;
  std::string *local_54;
  undefined1 local_4d;
  ComputerSystem *local_4c;
  MetaGameAction *local_48;
  CommsData *local_44;
  Article *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] local_1c = ExceptionList;
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  // [seh] puStack_18 = &DAT_005be788;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  local_44 = param_1;
  local_4c = this;
  if ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18 == 0) {
    local_84[0] = (std::string)0x0;
    uStack_90 = 0x4b562f;
    ghidra::str::assign(local_84,"`7No articles in system.",0x18);
    (*(TextEngine **)((char *)this + 100))->addLine();
    (*(TextEngine **)((char *)this + 100))->addBlankLine();
  }
  else {
    pbVar9 = (std::string *)0x0;
    local_5c = 0;
    local_58 = (std::string *)0x0;
    local_54 = (std::string *)0x0;
    local_14 = 0;
    *(undefined4 *)((char *)this + 0x38) = *(undefined4 *)((char *)this + 0x34);
    pMVar10 = (MetaGameAction *)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18);
    // [seh] puStack_20 = &stack0xfffffffc;
    while (pMVar10 = pMVar10 + -1, local_48 = pMVar10, -1 < (int)pMVar10) {
      ghidra::str::ctor
                (local_84,(std::string *)(*(int *)(local_44 + 0x14) + (int)pMVar10 * 0x18));
      local_40 = getArticle(local_4c);
      if (local_40 != (Article *)0x0) {
        ppMVar1 = *(MetaGameAction ***)(local_4c + 0x38);
        if (*(MetaGameAction ***)(local_4c + 0x3c) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(local_4c + 0x34),ppMVar1,&local_48);
          pMVar10 = local_48;
        }
        else {
          *ppMVar1 = pMVar10;
          *(int *)(local_4c + 0x38) = *(int *)(local_4c + 0x38) + 4;
        }
        uStack_90 = 0x4b56f3;
        ghidra::str::ctor
                  ((std::string *)&stack0xffffff78,
                   (std::string *)(*(int *)(local_44 + 0x14) + (int)pMVar10 * 0x18));
        (local_44)->articleRead();
        uStack_80 = 0x4b5719;
        pbVar6 = (std::string *)strUsingArgs((char *)local_3c);
        local_14._0_1_ = 1;
        if (local_54 == pbVar9) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_5c,pbVar9,pbVar6);
        }
        else {
          *(undefined4 *)(pbVar9 + 0x10) = 0;
          *(undefined4 *)(pbVar9 + 0x14) = 0;
          uVar2 = *(undefined4 *)(pbVar6 + 4);
          uVar3 = *(undefined4 *)(pbVar6 + 8);
          uVar4 = *(undefined4 *)(pbVar6 + 0xc);
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
          *(undefined4 *)(pbVar9 + 4) = uVar2;
          *(undefined4 *)(pbVar9 + 8) = uVar3;
          *(undefined4 *)(pbVar9 + 0xc) = uVar4;
          uVar2 = *(undefined4 *)(pbVar6 + 0x14);
          *(undefined4 *)(pbVar9 + 0x10) = *(undefined4 *)(pbVar6 + 0x10);
          *(undefined4 *)(pbVar9 + 0x14) = uVar2;
          local_58 = pbVar9 + 0x18;
          *(undefined4 *)(pbVar6 + 0x10) = 0;
          *(undefined4 *)(pbVar6 + 0x14) = 0xf;
          *pbVar6 = (std::string)0x0;
        }
        pbVar9 = local_58;
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_28) {
          pnVar8 = (nothrow_t *)(local_28 + 1);
          pvVar7 = local_3c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_3c[0] + -4);
            pnVar8 = (nothrow_t *)(local_28 + 0x24);
            if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar8);
        }
      }
    }
    local_40 = (Article *)local_84;
    local_84[0] = (std::string)0x0;
    uStack_90 = 0x4b57d2;
    ghidra::str::assign(local_84,"** no options **",0x10);
    pCVar5 = local_4c;
    local_48 = (MetaGameAction *)&local_ac;
    local_ac = std::_Func_impl_no_alloc<>::vftable;
    local_a8 = selectedArticle;
    local_a4 = local_4d;
    local_a0 = local_4c;
    local_4c = local_c4;
    local_14._0_1_ = 3;
    local_b4 = 0;
    local_b0 = 0xf;
    local_c4[0] = (byte)0x0;
    uStack_d0 = 0x4b581f;
    ghidra::str::assign((std::string *)local_c4,"`7Articles [`$Q`7uit]",0x15);
    local_14._0_1_ = 4;
    ghidra::lib::vector__vector(avStack_d4,(ghidra::vector *)&local_5c);
    local_14 = (uint)local_14._1_3_ << 8;
    (*(TextEngine **)(pCVar5 + 100))->showList();
    ghidra::lib::vector___Tidy((ghidra::vector *)&local_5c);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall ComputerSystem::selectedArticle(ComputerSystem *this,int param_1)
void ComputerSystem::selectedArticle(int param_1)

{
  *(int *)this = param_1;
  renderArticle(this,*(CommsData **)(g_gameData + 300),*(int *)(*(int *)((char *)this + 0x34) + param_1 * 4)
               );
  return;
}


// Ghidra: void __thiscall ComputerSystem::renderEmails(ComputerSystem *this,CommsData *param_1)
void ComputerSystem::renderEmails(CommsData * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ghidra::vector *this_00;
  ComputerSystem *pCVar5;
  std::string *pbVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  std::string *pbVar9;
  MetaGameAction *pMVar10;
  ghidra::vector avStack_c0 [4];
  undefined4 uStack_bc;
  ComputerSystem local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined **local_98;
  code *local_94;
  undefined1 local_90;
  ComputerSystem *local_8c;
  undefined4 uStack_7c;
  undefined4 local_4c;
  std::string *local_48;
  std::string *local_44;
  ComputerSystem *local_40;
  ghidra::vector *local_3c;
  MetaGameAction *local_38;
  CommsData *local_34;
  undefined1 local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_10 = ExceptionList;
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005be7d8;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_34 = param_1;
  local_40 = this;
  if (*(int *)((char *)this + 100) != 0) {
    if ((uint)(*(int *)(param_1 + 4) - *(int *)param_1) < 4) {
      uStack_7c = 0x4b590b;
      ghidra::str::assign((std::string *)&stack0xffffff90,"Inbox empty.",0xc);
      (*(TextEngine **)((char *)this + 100))->addLine();
    }
    else {
      pbVar9 = (std::string *)0x0;
      local_4c = 0;
      local_48 = (std::string *)0x0;
      local_44 = (std::string *)0x0;
      local_3c = (ghidra::vector *)((char *)this + 0xc);
      // [seh] local_8 = 0;
      *(undefined4 *)((char *)this + 0x10) = *(undefined4 *)local_3c;
      this_00 = local_3c;
      pMVar10 = (MetaGameAction *)(*(int *)(param_1 + 4) - *(int *)param_1 >> 2);
      while (local_38 = pMVar10 + -1, -1 < (int)local_38) {
        pMVar10 = local_38;
        if (*(char *)(*(int *)(*(int *)param_1 + (int)local_38 * 4) + 0x9c) == '\0') {
          ppMVar1 = *(MetaGameAction ***)(this_00 + 4);
          if (*(MetaGameAction ***)(this_00 + 8) == ppMVar1) {
            ghidra::lib::vector___Emplace_reallocate(this_00,ppMVar1,&local_38);
            param_1 = local_34;
          }
          else {
            *ppMVar1 = local_38;
            *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
          }
          pMVar10 = local_38;
          local_2d = *(undefined1 *)(*(int *)(*(int *)param_1 + (int)local_38 * 4) + 100);
          pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 1;
          if (local_44 == pbVar9) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_4c,pbVar9,pbVar6);
          }
          else {
            *(undefined4 *)(pbVar9 + 0x10) = 0;
            *(undefined4 *)(pbVar9 + 0x14) = 0;
            uVar2 = *(undefined4 *)(pbVar6 + 4);
            uVar3 = *(undefined4 *)(pbVar6 + 8);
            uVar4 = *(undefined4 *)(pbVar6 + 0xc);
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
            *(undefined4 *)(pbVar9 + 4) = uVar2;
            *(undefined4 *)(pbVar9 + 8) = uVar3;
            *(undefined4 *)(pbVar9 + 0xc) = uVar4;
            uVar2 = *(undefined4 *)(pbVar6 + 0x14);
            *(undefined4 *)(pbVar9 + 0x10) = *(undefined4 *)(pbVar6 + 0x10);
            *(undefined4 *)(pbVar9 + 0x14) = uVar2;
            local_48 = pbVar9 + 0x18;
            *(undefined4 *)(pbVar6 + 0x10) = 0;
            *(undefined4 *)(pbVar6 + 0x14) = 0xf;
            *pbVar6 = (std::string)0x0;
          }
          pbVar9 = local_48;
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          this_00 = local_3c;
          param_1 = local_34;
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
            this_00 = local_3c;
            param_1 = local_34;
          }
        }
      }
      local_3c = (ghidra::vector *)&stack0xffffff90;
      uStack_7c = 0x4b5a81;
      ghidra::str::assign((std::string *)&stack0xffffff90,"** no options **",0x10);
      pCVar5 = local_40;
      local_38 = (MetaGameAction *)&local_98;
      local_98 = std::_Func_impl_no_alloc<>::vftable;
      local_94 = selectedEmail;
      local_90 = local_2d;
      local_8c = local_40;
      local_40 = local_b0;
      // [seh] local_8._0_1_ = 3;
      local_a0 = 0;
      local_9c = 0xf;
      local_b0[0] = (byte)0x0;
      uStack_bc = 0x4b5ace;
      ghidra::str::assign
                ((std::string *)local_b0,
                 "Messages `7- `%Inbox `7- [`$S`7end message] [`$D`7elete] [`$Q`7uit]",0x43);
      // [seh] local_8._0_1_ = 4;
      ghidra::lib::vector__vector(avStack_c0,(ghidra::vector *)&local_4c);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      (*(TextEngine **)(pCVar5 + 100))->showList();
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_4c);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall ComputerSystem::renderDraft(ComputerSystem *this,CommsData *param_1,int param_2)
void ComputerSystem::renderDraft(CommsData * param_1, int param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  std::string *pbVar5;
  EmailManager *pEVar6;
  std::string *pbVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  char *pcVar11;
  TextEngine *this_00;
  nothrow_t *pnVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  std::string *unaff_EDI;
  std::string abStack_a4 [12];
  undefined4 uStack_98;
  std::string local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  undefined **local_74;
  code *local_70;
  ComputerSystem *local_6c;
  undefined4 uStack_5c;
  int local_34;
  void *local_2c [5];
  uint local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be828;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar5 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pbVar5;
  if (*(int *)((char *)this + 100) != 0) {
    local_34 = 0;
    uVar13 = 0;
    while( true ) {
      pEVar6 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar6 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar6;
        *pEVar6 = (byte)0x0;
        *(undefined4 *)(pEVar6 + 4) = 0;
        *(undefined4 *)(pEVar6 + 8) = 0;
        *(undefined4 *)(pEVar6 + 0xc) = 0;
        *(undefined4 *)(pEVar6 + 0x10) = 0;
        *(undefined4 *)(pEVar6 + 0x14) = 0;
        *(undefined4 *)(pEVar6 + 0x18) = 0;
        *(undefined4 *)(pEVar6 + 0x1c) = 0;
        *(undefined4 *)(pEVar6 + 0x20) = 0;
        *(undefined4 *)(pEVar6 + 0x24) = 0;
        *(undefined4 *)(pEVar6 + 0x28) = 0;
      }
      if ((uint)(*(int *)(pEVar6 + 0x24) - *(int *)(pEVar6 + 0x20) >> 2) <= uVar13) break;
      pbVar1 = *(std::string **)(param_1 + 0x24);
      pEVar6 = ghidra::any_singleton();
      pbVar7 = ghidra::lib::_Find_unchecked_t
                         (*(std::string **)(*(int *)(pEVar6 + 0x20) + uVar13 * 4),pbVar5,
                          unaff_EDI);
      if (pbVar7 == pbVar1) {
        pEVar6 = ghidra::any_singleton();
        uVar14 = 0;
        iVar2 = *(int *)(*(int *)(pEVar6 + 0x20) + uVar13 * 4);
        iVar9 = *(int *)(iVar2 + 0x48);
        if (*(int *)(iVar2 + 0x4c) - iVar9 >> 2 != 0) {
          do {
            bVar4 = Requirement::checkReq
                              (*(Requirement **)(iVar9 + uVar14 * 4),
                               *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                               *(BankAccount **)(g_gameData + 0x124));
            if (!bVar4) goto LAB_004b5cdd;
            uVar14 = uVar14 + 1;
            iVar9 = *(int *)(iVar2 + 0x48);
          } while (uVar14 < (uint)(*(int *)(iVar2 + 0x4c) - iVar9 >> 2));
        }
        uVar14 = 0;
        iVar9 = *(int *)(iVar2 + 0x54);
        if (*(int *)(iVar2 + 0x58) - iVar9 >> 2 != 0) {
          do {
            iVar3 = *(int *)(iVar9 + uVar14 * 4);
            uVar15 = 0;
            if (*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100) >> 2 != 0) {
              do {
                bVar4 = Requirement::checkReq
                                  (*(Requirement **)
                                    (*(int *)(*(int *)(iVar9 + uVar14 * 4) + 100) + uVar15 * 4),
                                   *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                   *(BankAccount **)(g_gameData + 0x124));
                if (!bVar4) goto LAB_004b5ccd;
                iVar9 = *(int *)(iVar2 + 0x54);
                uVar15 = uVar15 + 1;
                iVar3 = *(int *)(iVar9 + uVar14 * 4);
              } while (uVar15 < (uint)(*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100) >> 2));
            }
            bVar4 = local_34 == param_2;
            local_34 = local_34 + 1;
            if (bVar4) {
              pbVar1 = (std::string *)((char *)this + 0x44);
              *(undefined4 *)((char *)this + 0x5c) = *(undefined4 *)(iVar9 + uVar14 * 4);
              *(undefined4 *)((char *)this + 0x54) = 0;
              pbVar7 = pbVar1;
              if (0xf < *(uint *)((char *)this + 0x58)) {
                pbVar7 = *(std::string **)pbVar1;
              }
              *pbVar7 = (std::string)0x0;
              uStack_5c = 0x4b5d23;
              pcVar8 = (char *)strUsingArgs((char *)local_2c);
              // [seh] local_8 = 0;
              pcVar11 = pcVar8;
              if (0xf < *(uint *)(pcVar8 + 0x14)) {
                pcVar11 = *(char **)pcVar8;
              }
              ghidra::str::append(pbVar1,pcVar11,*(uint *)(pcVar8 + 0x10));
              // [seh] local_8 = 0xffffffff;
              if (0xf < local_18) {
                pnVar12 = (nothrow_t *)(local_18 + 1);
                pvVar10 = local_2c[0];
                if ((nothrow_t *)0xfff < pnVar12) {
                  pvVar10 = *(void **)((int)local_2c[0] + -4);
                  pnVar12 = (nothrow_t *)(local_18 + 0x24);
                  if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar10,pnVar12);
              }
              uStack_5c = 0x4b5d9c;
              pcVar8 = (char *)strUsingArgs((char *)local_2c);
              // [seh] local_8 = 1;
              pcVar11 = pcVar8;
              if (0xf < *(uint *)(pcVar8 + 0x14)) {
                pcVar11 = *(char **)pcVar8;
              }
              ghidra::str::append(pbVar1,pcVar11,*(uint *)(pcVar8 + 0x10));
              // [seh] local_8 = 0xffffffff;
              if (0xf < local_18) {
                pnVar12 = (nothrow_t *)(local_18 + 1);
                pvVar10 = local_2c[0];
                if ((nothrow_t *)0xfff < pnVar12) {
                  pvVar10 = *(void **)((int)local_2c[0] + -4);
                  pnVar12 = (nothrow_t *)(local_18 + 0x24);
                  if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar10,pnVar12);
              }
              pcVar8 = (char *)strUsingArgs((char *)local_2c);
              // [seh] local_8 = 2;
              pcVar11 = pcVar8;
              if (0xf < *(uint *)(pcVar8 + 0x14)) {
                pcVar11 = *(char **)pcVar8;
              }
              ghidra::str::append(pbVar1,pcVar11,*(uint *)(pcVar8 + 0x10));
              // [seh] local_8 = 0xffffffff;
              if (0xf < local_18) {
                pnVar12 = (nothrow_t *)(local_18 + 1);
                pvVar10 = local_2c[0];
                if ((nothrow_t *)0xfff < pnVar12) {
                  pvVar10 = *(void **)((int)local_2c[0] + -4);
                  pnVar12 = (nothrow_t *)(local_18 + 0x24);
                  if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar10,pnVar12);
              }
              iVar2 = *(int *)((char *)this + 0x5c);
              pcVar11 = (char *)(iVar2 + 0x4c);
              if (0xf < *(uint *)(iVar2 + 0x60)) {
                pcVar11 = *(char **)(iVar2 + 0x4c);
              }
              ghidra::str::append(pbVar1,pcVar11,*(uint *)(iVar2 + 0x5c));
              if (*(TextEngine **)((char *)this + 100) != (TextEngine *)0x0) {
                (*(TextEngine **)((char *)this + 100))->addBlankLine();
                uStack_5c = 0x4b5ea8;
                (this_00)->addLinef(*(char **)((char *)this + 100));
                (*(TextEngine **)((char *)this + 100))->addBlankLine();
                local_74 = std::_Func_impl_no_alloc<>::vftable;
                local_70 = doneWithDraft;
                // [seh] local_8 = 3;
                local_7c = 0;
                local_78 = 0xf;
                local_8c[0] = (std::string)0x0;
                uStack_98 = 0x4b5efa;
                local_6c = this;
                ghidra::str::assign(local_8c,"7 [`$S`7end / `$enter`7 - done]",0x1f);
                // [seh] local_8 = CONCAT31(local_8._1_3_,4);
                ghidra::str::ctor(abStack_a4,(std::string *)pbVar1);
                // [seh] local_8 = 0xffffffff;
                (*(TextEngine **)((char *)this + 100))->showDocument();
              }
              *(undefined4 *)((char *)this + 8) = 2;
              goto LAB_004b5f1f;
            }
LAB_004b5ccd:
            uVar14 = uVar14 + 1;
            iVar9 = *(int *)(iVar2 + 0x54);
          } while (uVar14 < (uint)(*(int *)(iVar2 + 0x58) - iVar9 >> 2));
        }
      }
LAB_004b5cdd:
      uVar13 = uVar13 + 1;
    }
  }
LAB_004b5f1f:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall ComputerSystem::renderDrafts(ComputerSystem *this,int param_1,basic_string<> *param_3)
void ComputerSystem::renderDrafts(int param_1, std::string * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  EmailManager *pEVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ComputerSystem *pCVar5;
  bool bVar6;
  char cVar7;
  std::string *pbVar8;
  EmailManager *pEVar9;
  std::string *pbVar10;
  std::string *pbVar11;
  int iVar12;
  void *pvVar13;
  int *piVar14;
  nothrow_t *pnVar15;
  uint uVar16;
  std::string *unaff_EDI;
  std::string *pbVar17;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  ghidra::vector avStack_c0 [4];
  undefined4 uStack_bc;
  EmailManager local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined **local_98;
  code *local_94;
  undefined1 local_90;
  ComputerSystem *local_8c;
  undefined4 uStack_7c;
  ComputerSystem local_70 [4];
  undefined4 uStack_6c;
  int local_4c;
  std::string *local_48;
  std::string *local_44;
  ComputerSystem *local_40;
  EmailManager *local_3c;
  uint local_38;
  EmailManager *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be898;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar8 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_40 = this;
  local_14 = pbVar8;
  if ((std::string *)((char *)this + 0x1c) != (std::string *)&param_3) {
    pbVar10 = (std::string *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar10 = param_3;
    }
    ghidra::str::assign((std::string *)((char *)this + 0x1c),(char *)pbVar10,in_stack_00000018);
  }
  pbVar17 = (std::string *)0x0;
  local_4c = 0;
  local_48 = (std::string *)0x0;
  local_44 = (std::string *)0x0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  local_38 = 0;
  pEVar9 = ghidra::Singleton<void>::instance;
  do {
    if (pEVar9 == (EmailManager *)0x0) {
      pEVar9 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar9;
      *pEVar9 = (byte)0x0;
      *(undefined4 *)(pEVar9 + 4) = 0;
      *(undefined4 *)(pEVar9 + 8) = 0;
      *(undefined4 *)(pEVar9 + 0xc) = 0;
      *(undefined4 *)(pEVar9 + 0x10) = 0;
      *(undefined4 *)(pEVar9 + 0x14) = 0;
      *(undefined4 *)(pEVar9 + 0x18) = 0;
      *(undefined4 *)(pEVar9 + 0x1c) = 0;
      *(undefined4 *)(pEVar9 + 0x20) = 0;
      *(undefined4 *)(pEVar9 + 0x24) = 0;
      *(undefined4 *)(pEVar9 + 0x28) = 0;
      local_3c = pEVar9;
    }
    pCVar5 = local_40;
    if ((uint)(*(int *)(pEVar9 + 0x24) - *(int *)(pEVar9 + 0x20) >> 2) <= local_38) {
      if (*(int *)(local_40 + 100) != 0) {
        iVar12 = (int)pbVar17 - local_4c >> 0x1f;
        if (((int)pbVar17 - local_4c) / 0x18 + iVar12 == iVar12) {
          local_40 = local_70;
          local_70[0] = (byte)0x0;
          uStack_7c = 0x4b63d2;
          ghidra::str::assign((std::string *)local_70,"** no options **",0x10);
          local_3c = (EmailManager *)&local_98;
          local_98 = std::_Func_impl_no_alloc<>::vftable;
          local_94 = selectedDraft;
          local_90 = local_48._0_1_;
          local_8c = pCVar5;
          local_34 = local_b0;
          // [seh] local_8._0_1_ = 7;
          local_a0 = 0;
          local_9c = 0xf;
          local_b0[0] = (byte)0x0;
          uStack_bc = 0x4b641c;
          ghidra::str::assign
                    ((std::string *)local_b0,"Messages `7- `%Drafts `7- [`$I`7nbox] [`$Q`7uit]",
                     0x30);
          // [seh] local_8._0_1_ = 8;
        }
        else {
          local_40 = local_70;
          local_70[0] = (byte)0x0;
          uStack_7c = 0x4b635d;
          ghidra::str::assign((std::string *)local_70,"** no options **",0x10);
          local_3c = (EmailManager *)&local_98;
          local_98 = std::_Func_impl_no_alloc<>::vftable;
          local_94 = selectedDraft;
          local_90 = local_48._0_1_;
          local_8c = pCVar5;
          local_34 = local_b0;
          // [seh] local_8._0_1_ = 4;
          local_a0 = 0;
          local_9c = 0xf;
          local_b0[0] = (byte)0x0;
          uStack_bc = 0x4b63a7;
          ghidra::str::assign
                    ((std::string *)local_b0,"Messages `7- `%Drafts `7- [`$I`7nbox] [`$Q`7uit]",
                     0x30);
          // [seh] local_8._0_1_ = 5;
        }
        ghidra::lib::vector__vector(avStack_c0,(ghidra::vector *)&local_4c);
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        (*(TextEngine **)(pCVar5 + 100))->showList();
      }
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_4c);
      if (0xf < in_stack_0000001c) {
        pnVar15 = (nothrow_t *)(in_stack_0000001c + 1);
        pbVar10 = param_3;
        if ((nothrow_t *)0xfff < pnVar15) {
          pbVar10 = *(std::string **)(param_3 + -4);
          pnVar15 = (nothrow_t *)(in_stack_0000001c + 0x24);
          if ((std::string *)0x1f < param_3 + (-4 - (int)pbVar10)) {
LAB_004b646a:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pbVar10,pnVar15);
      }
      // [seh] ExceptionList = local_10;
      // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_3c = *(EmailManager **)(param_1 + 0x24);
    if (pEVar9 == (EmailManager *)0x0) {
      pEVar9 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar9;
      *pEVar9 = (byte)0x0;
      *(undefined4 *)(pEVar9 + 4) = 0;
      *(undefined4 *)(pEVar9 + 8) = 0;
      *(undefined4 *)(pEVar9 + 0xc) = 0;
      *(undefined4 *)(pEVar9 + 0x10) = 0;
      *(undefined4 *)(pEVar9 + 0x14) = 0;
      *(undefined4 *)(pEVar9 + 0x18) = 0;
      *(undefined4 *)(pEVar9 + 0x1c) = 0;
      *(undefined4 *)(pEVar9 + 0x20) = 0;
      *(undefined4 *)(pEVar9 + 0x24) = 0;
      *(undefined4 *)(pEVar9 + 0x28) = 0;
      local_34 = pEVar9;
    }
    pbVar10 = ghidra::lib::_Find_unchecked_t
                        (*(std::string **)(*(int *)(pEVar9 + 0x20) + local_38 * 4),pbVar8,
                         unaff_EDI);
    if (pbVar10 == (std::string *)local_3c) {
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar8,(uint)unaff_EDI);
      if (!bVar6) {
        ghidra::any_singleton();
        pbVar10 = (std::string *)&param_3;
        if (0xf < in_stack_0000001c) {
          pbVar10 = param_3;
        }
        bVar6 = ghidra::lib::_Traits_equal_t
                          ((char *)pbVar10,in_stack_00000018,(char *)pbVar8,(uint)unaff_EDI);
        pEVar9 = ghidra::Singleton<void>::instance;
        if (!bVar6) goto LAB_004b630d;
      }
      pEVar9 = ghidra::any_singleton();
      pEVar1 = *(EmailManager **)(*(int *)(pEVar9 + 0x20) + local_38 * 4);
      local_34 = (EmailManager *)0x0;
      iVar12 = *(int *)(pEVar1 + 0x48);
      local_3c = pEVar1;
      if (*(int *)(pEVar1 + 0x4c) - iVar12 >> 2 != 0) {
        do {
          bVar6 = Requirement::checkReq
                            (*(Requirement **)(iVar12 + (int)local_34 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          pEVar9 = ghidra::Singleton<void>::instance;
          if (!bVar6) goto LAB_004b630d;
          iVar12 = *(int *)(pEVar1 + 0x48);
          local_34 = local_34 + 1;
        } while (local_34 < (EmailManager *)(*(int *)(pEVar1 + 0x4c) - iVar12 >> 2));
      }
      iVar12 = *(int *)(pEVar1 + 0x54);
      local_34 = (EmailManager *)0x0;
      pEVar9 = ghidra::Singleton<void>::instance;
      if (*(int *)(pEVar1 + 0x58) - iVar12 >> 2 != 0) {
        do {
          local_2d = '\x01';
          piVar14 = (int *)((int)local_34 * 4 + iVar12);
          uVar16 = 0;
          cVar7 = local_2d;
          if (*(int *)(*piVar14 + 0x68) - *(int *)(*piVar14 + 100) >> 2 != 0) {
            do {
              bVar6 = Requirement::checkReq
                                (*(Requirement **)(*(int *)(*piVar14 + 100) + uVar16 * 4),
                                 *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                 *(BankAccount **)(g_gameData + 0x124));
              if (!bVar6) {
                cVar7 = '\0';
                break;
              }
              uVar16 = uVar16 + 1;
              piVar14 = (int *)(*(int *)(local_3c + 0x54) + (int)local_34 * 4);
              cVar7 = local_2d;
            } while (uVar16 < (uint)(*(int *)(*piVar14 + 0x68) - *(int *)(*piVar14 + 100) >> 2));
          }
          pEVar1 = local_3c;
          if (cVar7 != '\0') {
            uStack_6c = 0x4b624c;
            pbVar11 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8._0_1_ = 2;
            if (local_44 == pbVar17) {
              ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_4c,pbVar17,pbVar11);
            }
            else {
              *(undefined4 *)(pbVar17 + 0x10) = 0;
              *(undefined4 *)(pbVar17 + 0x14) = 0;
              uVar2 = *(undefined4 *)(pbVar11 + 4);
              uVar3 = *(undefined4 *)(pbVar11 + 8);
              uVar4 = *(undefined4 *)(pbVar11 + 0xc);
              *(undefined4 *)pbVar17 = *(undefined4 *)pbVar11;
              *(undefined4 *)(pbVar17 + 4) = uVar2;
              *(undefined4 *)(pbVar17 + 8) = uVar3;
              *(undefined4 *)(pbVar17 + 0xc) = uVar4;
              uVar2 = *(undefined4 *)(pbVar11 + 0x14);
              *(undefined4 *)(pbVar17 + 0x10) = *(undefined4 *)(pbVar11 + 0x10);
              *(undefined4 *)(pbVar17 + 0x14) = uVar2;
              local_48 = pbVar17 + 0x18;
              *(undefined4 *)(pbVar11 + 0x10) = 0;
              *(undefined4 *)(pbVar11 + 0x14) = 0xf;
              *pbVar11 = (std::string)0x0;
            }
            pbVar17 = local_48;
            // [seh] local_8 = CONCAT31(local_8._1_3_,1);
            if (0xf < local_18) {
              pnVar15 = (nothrow_t *)(local_18 + 1);
              pvVar13 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar15) {
                pvVar13 = *(void **)((int)local_2c[0] + -4);
                pnVar15 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004b646a;
              }
              operator_delete(pvVar13,pnVar15);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
          iVar12 = *(int *)(pEVar1 + 0x54);
          local_34 = local_34 + 1;
          pEVar9 = ghidra::Singleton<void>::instance;
        } while (local_34 < (EmailManager *)(*(int *)(pEVar1 + 0x58) - iVar12 >> 2));
      }
    }
LAB_004b630d:
    local_38 = local_38 + 1;
  } while( true );
}


// Ghidra: void __thiscall ComputerSystem::selectedEmail(ComputerSystem *this,int param_1)
void ComputerSystem::selectedEmail(int param_1)

{
  if (param_1 == -1) {
    renderEmails(this,*(CommsData **)(g_gameData + 300));
    return;
  }
  *(int *)this = param_1;
  renderEmail(this,*(CommsData **)(g_gameData + 300),*(int *)(*(int *)((char *)this + 0xc) + param_1 * 4));
  return;
}


// Ghidra: void __thiscall ComputerSystem::selectedDraft(ComputerSystem *this,int param_1)
void ComputerSystem::selectedDraft(int param_1)

{
  std::string local_28 [12];
  undefined4 uStack_1c;
  
  if (param_1 == -1) {
    local_28[0] = (std::string)0x0;
    ghidra::str::assign(local_28,"",0);
    renderDrafts(this,*(undefined4 *)(g_gameData + 300));
    return;
  }
  uStack_1c = 0x4b654e;
  renderDraft(this,*(CommsData **)(g_gameData + 300),param_1);
  return;
}


// Ghidra: void __thiscall ComputerSystem::runArticleLogic(ComputerSystem *this,float param_1)
void ComputerSystem::runArticleLogic(float param_1)

{
  uint uVar1;
  float unaff_EDI;
  
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (uVar1 = 0, *(int *)((char *)this + 0x6c) - *(int *)((char *)this + 0x68) >> 2 != 0)) {
    do {
      (*(Article **)(*(int *)((char *)this + 0x68) + uVar1 * 4))->runLogic(unaff_EDI);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)((char *)this + 0x6c) - *(int *)((char *)this + 0x68) >> 2));
  }
  return;
}


// Ghidra: void __thiscall ComputerSystem::syncArticles(ComputerSystem *this,CommsData *param_1,uint param_2)
void ComputerSystem::syncArticles(CommsData * param_1, uint param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  bool bVar2;
  std::string *pbVar3;
  undefined4 *puVar4;
  Ship *pSVar5;
  std::string *pbVar6;
  void *pvVar7;
  int iVar8;
  nothrow_t *pnVar9;
  std::string *unaff_EDI;
  std::string abStack_5c [4];
  undefined4 uStack_58;
  void *local_34 [5];
  uint local_20;
  std::string *local_18;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be8c9;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] local_8 = 0;
  puVar4 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar4 != *(undefined4 **)(g_gameData + 0x40)) {
    while (*(int *)*puVar4 != param_2) {
      puVar4 = puVar4 + 1;
      if (puVar4 == *(undefined4 **)(g_gameData + 0x40)) {
        return;
      }
    }
    if ((*(int *)(g_gameData + 0xd0) != 0) &&
       ((ExceptionList = &local_10, pSVar5 = Sector::getShipClosestTo(), pSVar5 != (Ship *)0x0 ||
        ((*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3 &&
         (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)))))) {
      iVar8 = *(int *)((char *)this + 0x68);
      local_14 = 0;
      param_2 = 0;
      if (*(int *)((char *)this + 0x6c) - iVar8 >> 2 != 0) {
        do {
          ghidra::str::ctor
                    ((std::string *)local_34,
                     (std::string *)(*(int *)(param_2 * 4 + iVar8) + 0x6c));
          pbVar1 = *(std::string **)(param_1 + 0x18);
          local_18 = ghidra::lib::_Find_unchecked___x28_x29((std::string *)local_34,pbVar3,unaff_EDI);
          if (0xf < local_20) {
            pnVar9 = (nothrow_t *)(local_20 + 1);
            pvVar7 = local_34[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar7 = *(void **)((int)local_34[0] + -4);
              pnVar9 = (nothrow_t *)(local_20 + 0x24);
              if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar7,pnVar9);
          }
          if (local_18 == pbVar1) {
            iVar8 = param_2 * 4;
            ghidra::str::ctor
                      (abStack_5c,(std::string *)(*(int *)(*(int *)((char *)this + 0x68) + iVar8) + 0x6c)
                      );
            bVar2 = (param_1)->articleRead();
            if ((!bVar2) &&
               (bVar2 = (*(Article **)(*(int *)((char *)this + 0x68) + iVar8))->readyToPublish(true),
               bVar2)) {
              pbVar1 = *(std::string **)(param_1 + 0x18);
              pbVar6 = (std::string *)(*(int *)(iVar8 + *(int *)((char *)this + 0x68)) + 0x6c);
              if (*(std::string **)(param_1 + 0x1c) == pbVar1) {
                ghidra::lib::vector___Emplace_reallocate
                          ((ghidra::vector *)(param_1 + 0x14),(std::string *)pbVar1,pbVar6);
              }
              else {
                ghidra::str::ctor(pbVar1,pbVar6);
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x18;
              }
              local_14 = local_14 + 1;
            }
          }
          iVar8 = *(int *)((char *)this + 0x68);
          param_2 = param_2 + 1;
        } while (param_2 < (uint)(*(int *)((char *)this + 0x6c) - iVar8 >> 2));
      }
      uStack_58 = 0x4b67a2;
      debugPrint("WORLD","%d/%d articles synced");
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ComputerSystem::renderFiles(ComputerSystem *this,int param_1)
void ComputerSystem::renderFiles(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  TextEngine *pTVar3;
  TextEngine *pTVar4;
  TextEngine *this_00;
  nothrow_t *pnVar5;
  int iVar6;
  int iVar7;
  uint local_34;
  TextEngine *local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be8f8;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  pTVar4 = *(TextEngine **)((char *)this + 100);
  local_18 = uVar1;
  if (pTVar4 != (TextEngine *)0x0) {
    iVar6 = *(int *)((char *)this + 0x74);
    local_34 = 0;
    if (*(int *)((char *)this + 0x78) - iVar6 >> 2 != 0) {
      do {
        ghidra::str::ctor
                  ((std::string *)local_30,(std::string *)(*(int *)(local_34 * 4 + iVar6) + 4)
                  );
        // [seh] local_8 = 0;
        pTVar4 = (TextEngine *)local_30;
        if (0xf < local_1c) {
          pTVar4 = local_30[0];
        }
        pTVar3 = (TextEngine *)local_30;
        if (0xf < local_1c) {
          pTVar3 = local_30[0];
        }
        iVar7 = 0;
        iVar6 = (int)(pTVar4 + local_20) - (int)pTVar3;
        if (pTVar4 + local_20 < pTVar3) {
          iVar6 = 0;
        }
        if (iVar6 != 0) {
          do {
            iVar2 = toupper((int)(char)pTVar3[iVar7]);
            pTVar4[iVar7] = SUB41(iVar2,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar6);
        }
        pTVar4 = (TextEngine *)local_30;
        if (0xf < local_1c) {
          pTVar4 = local_30[0];
        }
        TextEngine::addLinef
                  (pTVar4,*(char **)((char *)this + 100)," `2%s.%s",pTVar4,
                   (&PTR_s_TXT_005e0174)[**(int **)(local_34 * 4 + *(int *)((char *)this + 0x74))],uVar1);
        // [seh] local_8 = 0xffffffff;
        if (0xf < local_1c) {
          pnVar5 = (nothrow_t *)(local_1c + 1);
          pTVar4 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pTVar4 = *(TextEngine **)(local_30[0] + -4);
            pnVar5 = (nothrow_t *)(local_1c + 0x24);
            if ((TextEngine *)0x1f < local_30[0] + (-4 - (int)pTVar4)) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pTVar4,pnVar5);
        }
        iVar6 = *(int *)((char *)this + 0x74);
        local_34 = local_34 + 1;
      } while (local_34 < (uint)(*(int *)((char *)this + 0x78) - iVar6 >> 2));
      pTVar4 = *(TextEngine **)((char *)this + 100);
    }
    (pTVar4)->addBlankLine();
    TextEngine::addLinef
              (this_00,*(char **)((char *)this + 100),"`2File count: %d",
               (*(int *)((char *)this + 0x78) - *(int *)((char *)this + 0x74) >> 2) + param_1);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
