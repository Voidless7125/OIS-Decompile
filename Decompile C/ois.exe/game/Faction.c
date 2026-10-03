#include "../ois.exe.h"


// public: __thiscall Faction::~Faction(void)

void __thiscall Faction::~Faction(Faction *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  std::vector<>::_Tidy((vector<> *)(this + 0xbc));
  std::vector<>::_Tidy((vector<> *)(this + 0xb0));
  pvVar1 = *(void **)(this + 0xa4);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(((*(int *)(this + 0xac) - (int)pvVar1) / 0xc) * 0xc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xac) = 0;
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0xa0) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
    *(undefined4 *)(this + 0xa0) = 0;
  }
  pvVar1 = *(void **)(this + 0x8c);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x94) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x94) = 0;
  }
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x88) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
  }
  uVar2 = *(uint *)(this + 0x7c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x68);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xf;
  this[0x68] = (Faction)0x0;
  uVar2 = *(uint *)(this + 100);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x50);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0xf;
  this[0x50] = (Faction)0x0;
  uVar2 = *(uint *)(this + 0x4c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x38);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0xf;
  this[0x38] = (Faction)0x0;
  uVar2 = *(uint *)(this + 0x34);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x20);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0049c642;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xf;
  this[0x20] = (Faction)0x0;
  uVar2 = *(uint *)(this + 0x1c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 8);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0049c642:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (Faction)0x0;
  return;
}


// public: void __thiscall Faction::getAccess(void)

void __thiscall Faction::getAccess(Faction *this)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  Stats *this_00;
  word *pwVar4;
  EmailManager *pEVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  Faction *pFVar8;
  uint unaff_EDI;
  basic_string<> abStack_bc [8];
  undefined4 uStack_b4;
  basic_string<> local_a4 [8];
  undefined4 uStack_9c;
  basic_string<> local_8c [8];
  undefined4 uStack_84;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bd037;
  local_1c = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_8c[0] = (basic_string<>)0x0;
  local_24 = pcVar3;
  std::basic_string<>::assign(local_8c,"licenses_acquired",0x11);
  local_14 = 0;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    local_14 = CONCAT31(local_14._1_3_,1);
    Singleton<Stats>::instance = (Stats *)Stats::Stats(this_00);
  }
  local_14 = 0xffffffff;
  Stats::addStat(Singleton<Stats>::instance);
  uStack_9c = 0x4a02ee;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff70,"",0);
  local_14 = 2;
  uStack_b4 = 0x4a031a;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff58,"licenses_acquired",0x11);
  local_14 = CONCAT31(local_14._1_3_,3);
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff40,"commerce",8);
  local_14 = 0xffffffff;
  Analytics::logEvent();
  *(undefined4 *)(this + 0xd8) = **(undefined4 **)(this + 0x80);
  this[0xe0] = (Faction)0x1;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  pFVar8 = this + 0x68;
  uVar1 = *(uint *)(this + 0x78);
  bVar2 = std::_Traits_equal<>("NIL",3,pcVar3,unaff_EDI);
  if (!bVar2) {
    local_2c = 0xf00000000;
    local_3c = (void *)CONCAT31(local_3c._1_3_,bVar2);
    local_14 = 4;
    bVar2 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
    if (bVar2) {
      uStack_84 = 0x4a0412;
      pwVar4 = (word *)strUsingArgs((char *)local_54);
      if ((word *)&local_3c != pwVar4) {
        word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar4;
        uStack_38 = *(undefined4 *)(pwVar4 + 4);
        uStack_34 = *(undefined4 *)(pwVar4 + 8);
        uStack_30 = *(undefined4 *)(pwVar4 + 0xc);
        local_2c = *(undefined8 *)(pwVar4 + 0x10);
        *(undefined4 *)(pwVar4 + 0x10) = 0;
        *(undefined4 *)(pwVar4 + 0x14) = 0xf;
        *pwVar4 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar7 = (nothrow_t *)(local_40 + 1);
        pvVar6 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_54[0] + -4);
          pnVar7 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
    }
    else if ((Faction *)&local_3c != pFVar8) {
      if (0xf < *(uint *)(this + 0x7c)) {
        pFVar8 = *(Faction **)pFVar8;
      }
      std::basic_string<>::assign((basic_string<> *)&local_3c,(char *)pFVar8,uVar1);
    }
    std::basic_string<>::basic_string<>(local_8c,(basic_string<> *)&local_3c);
    local_14._0_1_ = 5;
    local_a4[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_a4,"Welcome",7);
    local_14._0_1_ = 6;
    std::basic_string<>::basic_string<>(abStack_bc,(basic_string<> *)(this + 0x20));
    local_14._0_1_ = 7;
    pEVar5 = Singleton<>::getInstance();
    local_14 = CONCAT31(local_14._1_3_,4);
    EmailManager::addCustomEmail(pEVar5);
    if (0xf < local_2c._4_4_) {
      pnVar7 = (nothrow_t *)(local_2c._4_4_ + 1);
      pvVar6 = local_3c;
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_3c + -4);
        pnVar7 = (nothrow_t *)(local_2c._4_4_ + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
  }
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: bool __thiscall Faction::officeAtLocation(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall Faction::officeAtLocation(Faction *this,char *param_2)

{
  basic_string<> *pbVar1;
  void *pvVar2;
  uint uVar3;
  void **ppvVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  char *pcVar8;
  nothrow_t *pnVar9;
  int iVar10;
  void *pvVar11;
  uint unaff_EDI;
  basic_string<> *pbVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd068;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  iVar10 = 0xb0;
  if (g_gameLogic[0x11b] == (GameLogic)0x0) {
    iVar10 = 0xbc;
  }
  pbVar1 = *(basic_string<> **)(this + iVar10 + 4);
  pbVar12 = *(basic_string<> **)(this + iVar10);
  local_14 = pcVar7;
  ppvVar4 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar4;
    if (pbVar12 == pbVar1) {
LAB_004a060c:
      if (0xf < in_stack_00000018) {
        pnVar9 = (nothrow_t *)(in_stack_00000018 + 1);
        pcVar7 = param_2;
        if ((nothrow_t *)0xfff < pnVar9) {
          pcVar7 = *(char **)(param_2 + -4);
          pnVar9 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if ((char *)0x1f < param_2 + (-4 - (int)pcVar7)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar7,pnVar9);
      }
      ExceptionList = local_10;
      uVar6 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return (bool)uVar6;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar12);
    uVar3 = local_18;
    pvVar2 = local_2c[0];
    pcVar8 = (char *)&param_2;
    if (0xf < in_stack_00000018) {
      pcVar8 = param_2;
    }
    bVar5 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar7,unaff_EDI);
    if (bVar5) {
      if (0xf < uVar3) {
        pnVar9 = (nothrow_t *)(uVar3 + 1);
        pvVar11 = pvVar2;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar11 = *(void **)((int)pvVar2 + -4);
          pnVar9 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar11))) {
LAB_004a0658:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar9);
      }
      goto LAB_004a060c;
    }
    if (0xf < uVar3) {
      pnVar9 = (nothrow_t *)(uVar3 + 1);
      pvVar11 = pvVar2;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar11 = *(void **)((int)pvVar2 + -4);
        pnVar9 = (nothrow_t *)(uVar3 + 0x24);
        if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar11))) goto LAB_004a0658;
      }
      operator_delete(pvVar11,pnVar9);
    }
    pbVar12 = pbVar12 + 0x18;
    ppvVar4 = ExceptionList;
  } while( true );
}


// public: void __thiscall Faction::modifyState(int)

void __thiscall Faction::modifyState(Faction *this,int param_1)

{
  int iVar1;
  EmailManager *pEVar2;
  basic_string<> *pbVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  uint uVar11;
  basic_string<> abStack_b0 [12];
  undefined4 uStack_a4;
  basic_string<> local_98 [4];
  undefined4 uStack_94;
  basic_string<> abStack_80 [8];
  undefined4 uStack_78;
  uint local_4c;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bd0e0;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (this[0xe0] != (Faction)0x0) {
    uVar10 = 0;
    piVar4 = *(int **)(this + 0x80);
    iVar5 = *(int *)(this + 0xd8);
    uVar11 = *(int *)(this + 0x84) - (int)piVar4 >> 2;
    if (uVar11 != 0) {
      do {
        if (iVar5 < *piVar4) goto LAB_004a070a;
        uVar10 = uVar10 + 1;
        iVar5 = iVar5 - *piVar4;
        piVar4 = piVar4 + 1;
      } while (uVar10 < uVar11);
    }
    uVar10 = uVar11 - 1;
LAB_004a070a:
    iVar5 = *(int *)(this + 0xd8) + param_1;
    *(int *)(this + 0xd8) = iVar5;
    if (iVar5 < 0) {
      *(undefined4 *)(this + 0xd8) = 0;
      iVar5 = 0;
    }
    else {
      iVar1 = *(int *)(this + 200);
      if (iVar1 < iVar5) {
        *(int *)(this + 0xd8) = iVar1;
        iVar5 = iVar1;
      }
    }
    if ((*(int *)(this + 0xdc) != -1) &&
       (iVar1 = *(int *)(this + 0xdc) + -1, *(int *)(this + 0xdc) = iVar1, iVar1 < 1)) {
      *(undefined4 *)(this + 0xdc) = 0xffffffff;
      strUsingArgs((char *)abStack_80);
      local_8 = 0;
      local_98[0] = (basic_string<>)0x0;
      uStack_a4 = 0x4a07b9;
      std::basic_string<>::assign(local_98,"New Opportunities",0x11);
      local_8._0_1_ = 1;
      std::basic_string<>::basic_string<>(abStack_b0,(basic_string<> *)(this + 0x20));
      local_8 = CONCAT31(local_8._1_3_,2);
      pEVar2 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      EmailManager::addCustomEmail(pEVar2);
      *(undefined4 *)(this + 0xdc) = 0xffffffff;
      iVar5 = **(int **)(this + 0x80);
      *(int *)(this + 0xd8) = iVar5;
    }
    uVar11 = 0;
    piVar4 = *(int **)(this + 0x80);
    uVar8 = *(int *)(this + 0x84) - (int)piVar4 >> 2;
    if (uVar8 != 0) {
      do {
        if (iVar5 < piVar4[uVar11]) goto LAB_004a082b;
        iVar5 = iVar5 - piVar4[uVar11];
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
    uVar11 = uVar8 - 1;
LAB_004a082b:
    local_4c = uVar8 - 1;
    if ((int)uVar11 <= (int)uVar10) {
      iVar5 = *(int *)(this + 0xd8);
      uVar7 = 0;
      uVar11 = local_4c;
      if (uVar8 != 0) {
        do {
          uVar11 = uVar7;
          if (iVar5 < *piVar4) break;
          iVar5 = iVar5 - *piVar4;
          uVar7 = uVar7 + 1;
          piVar4 = piVar4 + 1;
          uVar11 = local_4c;
        } while (uVar7 < uVar8);
      }
      if ((uVar11 == 0) && (uVar11 = getCurrentTier(this), uVar10 != uVar11)) {
        *(undefined4 *)(this + 0xd8) = 0;
        *(undefined4 *)(this + 0xdc) = 5;
        uStack_94 = 0x4a0a08;
        strUsingArgs((char *)abStack_80);
        local_8 = 7;
        local_98[0] = (basic_string<>)0x0;
        uStack_a4 = 0x4a0a34;
        std::basic_string<>::assign(local_98,"SUSPENDED",9);
        local_8._0_1_ = 8;
        std::basic_string<>::basic_string<>(abStack_b0,(basic_string<> *)(this + 0x20));
        local_8 = CONCAT31(local_8._1_3_,9);
        pEVar2 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        EmailManager::addCustomEmail(pEVar2);
      }
      goto LAB_004a0a60;
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    uVar10 = 0;
    local_8 = 3;
    iVar5 = *(int *)(this + 0xd8);
    if (uVar8 != 0) {
      do {
        if (iVar5 < *piVar4) break;
        uVar10 = uVar10 + 1;
        iVar5 = iVar5 - *piVar4;
        piVar4 = piVar4 + 1;
      } while (uVar10 < uVar8);
    }
    uStack_78 = 0x4a0895;
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_48);
    std::basic_string<>::operator=((basic_string<> *)local_30,pbVar3);
    if (0xf < local_34) {
      pnVar9 = (nothrow_t *)(local_34 + 1);
      pvVar6 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_48[0] + -4);
        pnVar9 = (nothrow_t *)(local_34 + 0x24);
        if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6))) goto LAB_004a08c7;
      }
      operator_delete(pvVar6,pnVar9);
    }
    std::basic_string<>::basic_string<>(abStack_80,(basic_string<> *)local_30);
    local_8._0_1_ = 4;
    local_98[0] = (basic_string<>)0x0;
    uStack_a4 = 0x4a092c;
    std::basic_string<>::assign(local_98,"New Contracts",0xd);
    local_8._0_1_ = 5;
    std::basic_string<>::basic_string<>(abStack_b0,(basic_string<> *)(this + 0x20));
    local_8._0_1_ = 6;
    pEVar2 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,3);
    EmailManager::addCustomEmail(pEVar2);
    if (0xf < local_1c) {
      pnVar9 = (nothrow_t *)(local_1c + 1);
      pvVar6 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_30[0] + -4);
        pnVar9 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6))) {
LAB_004a08c7:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
  }
LAB_004a0a60:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: int __thiscall Faction::getCurrentTier(void)

int __thiscall Faction::getCurrentTier(Faction *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(this + 0xd8);
  uVar2 = 0;
  uVar4 = *(int *)(this + 0x84) - *(int *)(this + 0x80) >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x80) + uVar2 * 4);
      if (iVar3 < iVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 - iVar1;
    } while (uVar2 < uVar4);
  }
  return uVar4 - 1;
}


// public: int __thiscall Faction::amountCanBorrow(void)

int __thiscall Faction::amountCanBorrow(Faction *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)(this + 0xd8);
  uVar4 = *(int *)(this + 0x84) - *(int *)(this + 0x80) >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x80) + uVar3 * 4);
      if (iVar2 < iVar1) goto LAB_004a0af3;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 - iVar1;
    } while (uVar3 < uVar4);
  }
  uVar3 = uVar4 - 1;
LAB_004a0af3:
  if ((((int)uVar3 < 0) || ((uint)(*(int *)(this + 0x90) - *(int *)(this + 0x8c) >> 2) <= uVar3)) ||
     (iVar2 = (int)((float)*(int *)(*(int *)(this + 0x8c) + uVar3 * 4) - *(float *)(this + 0xd0)),
     iVar2 < 0)) {
    iVar2 = 0;
  }
  return iVar2;
}


// public: void __thiscall Faction::runDayEndLogic(void)

void __thiscall Faction::runDayEndLogic(Faction *this)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Faction *pFVar5;
  uint uVar6;
  float fVar7;
  
  fVar1 = *(float *)(this + 0xd0);
  if (0.0 < fVar1) {
    uVar3 = 0;
    iVar4 = *(int *)(this + 0xd8);
    uVar6 = *(int *)(this + 0x84) - *(int *)(this + 0x80) >> 2;
    if (uVar6 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(this + 0x80) + uVar3 * 4);
        if (iVar4 < iVar2) goto LAB_004a0b81;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 - iVar2;
      } while (uVar3 < uVar6);
    }
    uVar3 = uVar6 - 1;
LAB_004a0b81:
    if ((int)uVar3 < 3) {
      if ((int)uVar3 < 0) {
        return;
      }
    }
    else {
      uVar3 = 2;
    }
    uVar6 = *(int *)(this + 0x9c) - *(int *)(this + 0x98) >> 2;
    if ((uVar3 < uVar6) && (uVar6 != 0)) {
      pFVar5 = this + 0x20;
      fVar7 = ((float)*(int *)(*(int *)(this + 0x98) + uVar3 * 4) / 100.0) / 10.0;
      if (fVar7 == 0.0) {
        debugPrint("ERROR","ERROR: Invalid interest rate for faction %s");
        return;
      }
      fVar7 = fVar1 * fVar7;
      if (0xf < *(uint *)(this + 0x34)) {
        pFVar5 = *(Faction **)pFVar5;
      }
      debugPrint("WORLD","Loan of %.0fc to %s added %.2f credits in interest.",(double)fVar1,pFVar5,
                 (double)fVar7);
      *(float *)(this + 0xd0) = fVar7 + *(float *)(this + 0xd0);
    }
  }
  return;
}


// public: void __thiscall Faction::repay(int)

void __thiscall Faction::repay(Faction *this,int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  EmailManager *pEVar5;
  uint unaff_EDI;
  basic_string<> abStack_6c [12];
  undefined4 uStack_60;
  basic_string<> local_54 [8];
  undefined4 uStack_4c;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bd140;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  fVar1 = *(float *)(this + 0xd0);
  *(float *)(this + 0xd0) = fVar1 - (float)param_1;
  if (1.0 <= fVar1 - (float)param_1) {
    if (*(int *)(this + 0xd4) != 0) {
      ExceptionList = pvVar2;
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0xd0) = 0;
    *(undefined4 *)(this + 0xd4) = 0;
  }
  uStack_30 = 0x4a0cf1;
  bVar3 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
  if (bVar3) {
    uStack_4c = 0x4a0d77;
    strUsingArgs((char *)abStack_3c);
    local_8 = 3;
    local_54[0] = (basic_string<>)0x0;
    uStack_60 = 0x4a0da3;
    std::basic_string<>::assign(local_54,"Loan Repaid",0xb);
    local_8._0_1_ = 4;
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)(this + 0x20));
    local_8 = CONCAT31(local_8._1_3_,5);
  }
  else {
    std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)(this + 0x68));
    local_8 = 0;
    local_54[0] = (basic_string<>)0x0;
    uStack_60 = 0x4a0d32;
    std::basic_string<>::assign(local_54,"Loan Repaid",0xb);
    local_8._0_1_ = 1;
    std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)(this + 0x20));
    local_8 = CONCAT31(local_8._1_3_,2);
  }
  pEVar5 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  EmailManager::addCustomEmail(pEVar5);
  ExceptionList = local_10;
  return;
}
