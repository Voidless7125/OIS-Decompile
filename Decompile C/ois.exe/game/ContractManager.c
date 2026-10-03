#include "../ois.exe.h"


// public: class ContractClass * __thiscall
// ContractManager::getRandomContractClassForLocation(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

ContractClass * __thiscall
ContractManager::getRandomContractClassForLocation
          (undefined4 param_1_00,uint param_1,int param_3,int param_4,undefined4 param_5,
          void *param_6)

{
  int iVar1;
  AnimationFrames *pAVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  Faction *pFVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  char *pcVar11;
  AnimationFrames **ppAVar12;
  nothrow_t *pnVar13;
  TradeLocation *pTVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  uint unaff_EDI;
  ContractClass *pCVar18;
  undefined4 in_stack_00000024;
  uint in_stack_00000028;
  basic_string<> abStack_7c [12];
  undefined4 uStack_70;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  AnimationFrames **local_38;
  AnimationFrames **local_34;
  int local_30;
  TradeEngine *local_2c;
  code *local_28;
  AnimationFrames **local_24;
  uint local_20;
  int local_1c;
  AnimationFrames **local_18;
  TradeLocation *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005baffa;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  local_30 = param_1;
  std::basic_string<>::basic_string<>(abStack_7c,(basic_string<> *)&param_6);
  local_8._0_1_ = 2;
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    local_2c = operator_new(300);
    local_8._0_1_ = 3;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(local_2c);
  }
  local_8._0_1_ = 1;
  local_14 = TradeEngine::getTradeLocation(Singleton<>::instance,0);
  if (local_14 == (TradeLocation *)0x0) {
    pCVar18 = (ContractClass *)0x0;
  }
  else {
    local_18 = (AnimationFrames **)0x0;
    local_3c = (void *)0x0;
    local_38 = (AnimationFrames **)0x0;
    local_24 = (AnimationFrames **)0x0;
    local_34 = (AnimationFrames **)0x0;
    local_8._0_1_ = 4;
    iVar9 = *(int *)(local_14 + 0xa0);
    local_20 = 0;
    local_28 = rand_exref;
    ppAVar12 = (AnimationFrames **)0x0;
    if (*(int *)(local_14 + 0xa4) - iVar9 >> 2 != 0) {
      do {
        pTVar14 = local_14;
        iVar8 = *(int *)(iVar9 + local_20 * 4);
        local_1c = local_20 * 4;
        uVar15 = 0;
        bVar4 = true;
        if (*(int *)(iVar8 + 0x74) - *(int *)(iVar8 + 0x70) >> 2 != 0) {
          do {
            uStack_70 = 0x484478;
            bVar3 = Requirement::checkReq
                              (*(Requirement **)
                                (*(int *)(*(int *)(iVar9 + local_1c) + 0x70) + uVar15 * 4),
                               *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                               *(BankAccount **)(g_gameData + 0x124));
            if (!bVar3) {
              bVar4 = false;
              goto LAB_004844ff;
            }
            iVar9 = *(int *)(pTVar14 + 0xa0);
            uVar15 = uVar15 + 1;
          } while (uVar15 < (uint)(*(int *)(*(int *)(iVar9 + local_1c) + 0x74) -
                                   *(int *)(*(int *)(iVar9 + local_1c) + 0x70) >> 2));
        }
        uVar15 = 0;
        local_2c = (TradeEngine *)((param_4 - param_3) / 0x18);
        pTVar14 = local_14;
        if (local_2c != (TradeEngine *)0x0) {
          pcVar11 = *(char **)(iVar9 + local_1c);
          do {
            pcVar6 = pcVar11;
            if (0xf < *(uint *)(pcVar11 + 0x14)) {
              pcVar6 = *(char **)pcVar11;
            }
            uStack_70 = 0x4844e0;
            bVar3 = std::_Traits_equal<>(pcVar6,*(uint *)(pcVar11 + 0x10),pcVar5,unaff_EDI);
            pTVar14 = local_14;
            if (bVar3) {
              bVar4 = false;
              break;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_2c);
        }
LAB_004844ff:
        iVar9 = local_1c;
        local_2c = (TradeEngine *)abStack_7c;
        std::basic_string<>::basic_string<>
                  (abStack_7c,
                   (basic_string<> *)(*(int *)(*(int *)(pTVar14 + 0xa0) + local_1c) + 0x48));
        local_8._0_1_ = 5;
        if (Singleton<>::instance == (FictionData *)0x0) {
          Singleton<>::instance = operator_new(0x18);
          *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
          *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
          *(undefined4 *)Singleton<>::instance = 0;
          *(undefined4 *)(Singleton<>::instance + 4) = 0;
          *(undefined4 *)(Singleton<>::instance + 8) = 0;
          *(undefined4 *)(Singleton<>::instance + 0xc) = 0;
          *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
          *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
        }
        local_8._0_1_ = 4;
        pFVar7 = FictionData::getFactionForID(Singleton<>::instance);
        bVar3 = false;
        if (*(int *)pFVar7 == local_30) {
          bVar3 = bVar4;
        }
        if (*(int *)(*(int *)(*(int *)(local_14 + 0xa0) + iVar9) + 0x18) == 1) {
          iVar9 = *(int *)(pFVar7 + 0xd8);
          uVar15 = 0;
          uVar16 = *(int *)(pFVar7 + 0x84) - *(int *)(pFVar7 + 0x80) >> 2;
          if (uVar16 != 0) {
            do {
              iVar8 = *(int *)(*(int *)(pFVar7 + 0x80) + uVar15 * 4);
              if (iVar9 < iVar8) goto LAB_004845d1;
              uVar15 = uVar15 + 1;
              iVar9 = iVar9 - iVar8;
            } while (uVar15 < uVar16);
          }
          uVar15 = uVar16 - 1;
LAB_004845d1:
          if (1 < (int)uVar15) goto LAB_004845dd;
        }
        else {
LAB_004845dd:
          if (bVar3) {
            iVar9 = *(int *)(local_14 + 0x4c);
            param_1 = 0;
            if (*(int *)(local_14 + 0x50) - iVar9 >> 2 != 0) {
              do {
                iVar9 = *(int *)(iVar9 + param_1 * 4);
                if (*(char *)(iVar9 + 0xe0) != '\0') {
                  uVar15 = 0;
                  iVar8 = *(int *)(iVar9 + 0xd8);
                  uVar16 = *(int *)(iVar9 + 0x84) - *(int *)(iVar9 + 0x80) >> 2;
                  if (uVar16 != 0) {
                    do {
                      iVar1 = *(int *)(*(int *)(iVar9 + 0x80) + uVar15 * 4);
                      if (iVar8 < iVar1) goto LAB_00484641;
                      uVar15 = uVar15 + 1;
                      iVar8 = iVar8 - iVar1;
                    } while (uVar15 < uVar16);
                  }
                  uVar15 = uVar16 - 1;
LAB_00484641:
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)local_54,(basic_string<> *)(iVar9 + 8));
                  uVar16 = local_40;
                  pvVar10 = local_54[0];
                  iVar9 = *(int *)(*(int *)(local_14 + 0xa0) + local_1c);
                  pcVar11 = (char *)(iVar9 + 0x48);
                  if (0xf < *(uint *)(iVar9 + 0x5c)) {
                    pcVar11 = *(char **)(iVar9 + 0x48);
                  }
                  uStack_70 = 0x484683;
                  bVar4 = std::_Traits_equal<>(pcVar11,*(uint *)(iVar9 + 0x58),pcVar5,unaff_EDI);
                  if ((bVar4) &&
                     (iVar9 = *(int *)(local_14 + 0xa0), uVar16 = local_40,
                     *(int *)(*(int *)(iVar9 + local_1c) + 0x68) <= (int)uVar15)) {
                    if (0xf < local_40) {
                      pnVar13 = (nothrow_t *)(local_40 + 1);
                      pvVar17 = pvVar10;
                      if ((nothrow_t *)0xfff < pnVar13) {
                        pvVar17 = *(void **)((int)pvVar10 + -4);
                        pnVar13 = (nothrow_t *)(local_40 + 0x24);
                        if (0x1f < (uint)((int)pvVar10 + (-4 - (int)pvVar17))) goto LAB_00484832;
                      }
                      uStack_70 = 0x484770;
                      operator_delete(pvVar17,pnVar13);
                      iVar9 = *(int *)(local_14 + 0xa0);
                    }
                    pTVar14 = local_14;
                    uVar15 = local_20;
                    local_44 = 0;
                    local_40 = 0xf;
                    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
                    if (*(float *)(*(int *)(iVar9 + local_20 * 4) + 0xa8) <= 0.0) {
                      iVar9 = (*local_28)();
                      ppAVar12 = (AnimationFrames **)(*(int *)(pTVar14 + 0xa0) + uVar15 * 4);
                      pAVar2 = *ppAVar12;
                      if (iVar9 % 100 < *(int *)(pAVar2 + 0x94)) {
                        if (local_24 == local_18) {
                          uStack_70 = 0x4847f2;
                          std::vector<>::_Emplace_reallocate<>
                                    ((vector<> *)&local_3c,local_18,ppAVar12);
                          local_24 = local_34;
                          local_18 = local_38;
                        }
                        else {
                          *local_18 = pAVar2;
                          local_38 = local_18 + 1;
                          local_18 = local_38;
                        }
                      }
                    }
                    break;
                  }
                  if (0xf < uVar16) {
                    pnVar13 = (nothrow_t *)(uVar16 + 1);
                    pvVar17 = pvVar10;
                    if ((nothrow_t *)0xfff < pnVar13) {
                      pvVar17 = *(void **)((int)pvVar10 + -4);
                      pnVar13 = (nothrow_t *)(uVar16 + 0x24);
                      if (0x1f < (uint)((int)pvVar10 + (-4 - (int)pvVar17))) goto LAB_00484832;
                    }
                    uStack_70 = 0x4846d0;
                    operator_delete(pvVar17,pnVar13);
                  }
                  local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
                  local_40 = 0xf;
                  local_44 = 0;
                }
                param_1 = param_1 + 1;
                iVar9 = *(int *)(local_14 + 0x4c);
              } while (param_1 < (uint)(*(int *)(local_14 + 0x50) - iVar9 >> 2));
            }
          }
        }
        local_20 = local_20 + 1;
        iVar9 = *(int *)(local_14 + 0xa0);
        ppAVar12 = local_18;
      } while (local_20 < (uint)(*(int *)(local_14 + 0xa4) - iVar9 >> 2));
    }
    pvVar10 = local_3c;
    local_18 = (AnimationFrames **)((int)ppAVar12 - (int)local_3c >> 2);
    if (local_18 == (AnimationFrames **)0x0) {
      pCVar18 = (ContractClass *)0x0;
    }
    else {
      iVar9 = (*local_28)();
      pCVar18 = *(ContractClass **)((int)pvVar10 + (iVar9 % (int)local_18) * 4);
    }
    if (pvVar10 != (void *)0x0) {
      pnVar13 = (nothrow_t *)((int)local_24 - (int)pvVar10 & 0xfffffffc);
      pvVar17 = pvVar10;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar17 = *(void **)((int)pvVar10 + -4);
        pnVar13 = pnVar13 + 0x23;
        if (0x1f < (uint)((int)pvVar10 + (-4 - (int)pvVar17))) {
LAB_00484832:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_70 = 0x48483f;
      operator_delete(pvVar17,pnVar13);
    }
  }
  if (0xf < in_stack_00000028) {
    pnVar13 = (nothrow_t *)(in_stack_00000028 + 1);
    pvVar10 = param_6;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar10 = *(void **)((int)param_6 + -4);
      pnVar13 = (nothrow_t *)(in_stack_00000028 + 0x24);
      if (0x1f < (uint)((int)param_6 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_70 = 0x484875;
    operator_delete(pvVar10,pnVar13);
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0xf;
  param_6 = (void *)((uint)param_6 & 0xffffff00);
  std::vector<>::_Tidy((vector<> *)&param_3);
  ExceptionList = local_10;
  return pCVar18;
}


// public: class ContractClass * __thiscall ContractManager::getContractClassForIdentifier(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ContractClass * __thiscall
ContractManager::getContractClassForIdentifier(undefined4 param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  TradeEngine *pTVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  ContractClass *pCVar8;
  uint unaff_EDI;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bb04c;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uVar7 = 0;
  pTVar4 = Singleton<>::instance;
  do {
    if (pTVar4 == (TradeEngine *)0x0) {
      pTVar4 = operator_new(300);
      local_8._0_1_ = 1;
      pTVar4 = (TradeEngine *)TradeEngine::TradeEngine(pTVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      Singleton<>::instance = pTVar4;
    }
    if ((uint)(*(int *)(pTVar4 + 4) - *(int *)pTVar4 >> 2) <= uVar7) {
      pCVar8 = (ContractClass *)0x0;
LAB_004849af:
      if (0xf < in_stack_00000018) {
        pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
        pcVar3 = param_2;
        if ((nothrow_t *)0xfff < pnVar6) {
          pcVar3 = *(char **)(param_2 + -4);
          pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if ((char *)0x1f < param_2 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar3,pnVar6);
      }
      ExceptionList = local_10;
      return pCVar8;
    }
    uVar9 = 0;
    while( true ) {
      if (pTVar4 == (TradeEngine *)0x0) {
        pTVar4 = operator_new(300);
        local_8._0_1_ = 2;
        pTVar4 = (TradeEngine *)TradeEngine::TradeEngine(pTVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        Singleton<>::instance = pTVar4;
      }
      iVar1 = *(int *)(*(int *)pTVar4 + uVar7 * 4);
      if ((uint)(*(int *)(iVar1 + 0xa4) - *(int *)(iVar1 + 0xa0) >> 2) <= uVar9) break;
      pcVar5 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar5 = param_2;
      }
      bVar2 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
      if (bVar2) {
        pCVar8 = *(ContractClass **)
                  (*(int *)(*(int *)(*(int *)pTVar4 + uVar7 * 4) + 0xa0) + uVar9 * 4);
        goto LAB_004849af;
      }
      uVar9 = uVar9 + 1;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


// public: class Contract * __thiscall ContractManager::generateContract(int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)

Contract * __thiscall ContractManager::generateContract(void)

{
  int iVar1;
  bool bVar2;
  Dice *pDVar3;
  ContractClass *pCVar4;
  ContractClass *pCVar5;
  int iVar6;
  basic_string<> *pbVar7;
  basic_string<> *pbVar8;
  int iVar9;
  basic_string<> *pbVar10;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  basic_string<> *this;
  basic_string<> *in_stack_00000014;
  uint in_stack_00000024;
  uint in_stack_00000028;
  vector<> avStack_50 [4];
  undefined4 uStack_4c;
  basic_string<> abStack_44 [12];
  undefined4 uStack_38;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bb088;
  local_10 = ExceptionList;
  pDVar3 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  uStack_4c = 0x484a43;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&stack0x00000014);
  local_8._0_1_ = 2;
  std::vector<>::vector<>(avStack_50,(vector<> *)&stack0x00000008);
  local_8 = CONCAT31(local_8._1_3_,1);
  pCVar4 = getRandomContractClassForLocation();
  if (pCVar4 == (ContractClass *)0x0) {
    this = (basic_string<> *)0x0;
  }
  else {
    this = operator_new(0x5c);
    pbVar10 = this + 0x38;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0xf;
    *this = (basic_string<>)0x0;
    *(undefined1 **)(this + 0x18) = &DAT_bf800000;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0xf;
    this[0x20] = (basic_string<>)0x0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0xf;
    *pbVar10 = (basic_string<>)0x0;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    uStack_38 = 0x484aee;
    bVar2 = std::_Traits_equal<>("",0,(char *)pDVar3,unaff_EDI);
    if ((!bVar2) && (this != (basic_string<> *)pCVar4)) {
      pCVar5 = pCVar4;
      if (0xf < *(uint *)(pCVar4 + 0x14)) {
        pCVar5 = *(ContractClass **)pCVar4;
      }
      uStack_38 = 0x484b0e;
      std::basic_string<>::assign(this,(char *)pCVar5,*(uint *)(pCVar4 + 0x10));
    }
    *(ContractClass **)(this + 0x54) = pCVar4;
    iVar9 = *(int *)(pCVar4 + 0x18);
    if (iVar9 == 1) {
      iVar9 = *(int *)(pCVar4 + 0x20);
      iVar1 = *(int *)(pCVar4 + 0x1c);
      iVar6 = rand();
      pbVar10 = (basic_string<> *)
                (*(int *)(pCVar4 + 0x1c) + (iVar6 % ((iVar9 - iVar1) / 0x18)) * 0x18);
      if (this + 0x20 != pbVar10) {
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar8 = *(basic_string<> **)pbVar10;
        }
        uStack_38 = 0x484b60;
        std::basic_string<>::assign(this + 0x20,(char *)pbVar8,*(uint *)(pbVar10 + 0x10));
      }
    }
    else if (iVar9 == 0) {
      if (pbVar10 != (basic_string<> *)&stack0x00000014) {
        pbVar8 = (basic_string<> *)&stack0x00000014;
        if (0xf < in_stack_00000028) {
          pbVar8 = in_stack_00000014;
        }
        uStack_38 = 0x484b87;
        std::basic_string<>::assign(pbVar10,(char *)pbVar8,in_stack_00000024);
      }
    }
    else if (iVar9 == 2) {
      pbVar8 = (basic_string<> *)&stack0x00000014;
      if (0xf < in_stack_00000028) {
        pbVar8 = in_stack_00000014;
      }
      uStack_38 = 0x484bb8;
      bVar2 = std::_Traits_equal<>((char *)pbVar8,in_stack_00000024,(char *)pDVar3,unaff_EDI);
      if (bVar2) {
        std::basic_string<>::operator=(pbVar10,(basic_string<> *)&stack0x00000014);
        iVar9 = *(int *)(pCVar4 + 0x20);
        iVar1 = *(int *)(pCVar4 + 0x1c);
        iVar6 = rand();
        pbVar7 = (basic_string<> *)
                 (*(int *)(pCVar4 + 0x1c) + (iVar6 % ((iVar9 - iVar1) / 0x18)) * 0x18);
      }
      else {
        iVar9 = *(int *)(pCVar4 + 0x20);
        iVar1 = *(int *)(pCVar4 + 0x1c);
        iVar6 = rand();
        std::basic_string<>::operator=
                  (this + 0x38,
                   (basic_string<> *)
                   (*(int *)(pCVar4 + 0x1c) + (iVar6 % ((iVar9 - iVar1) / 0x18)) * 0x18));
        pbVar7 = (basic_string<> *)&stack0x00000014;
      }
      std::basic_string<>::operator=(this + 0x20,pbVar7);
    }
    pbVar8 = operator_new(0x48);
    *(undefined4 *)(pbVar8 + 0x10) = 0;
    *(undefined4 *)(pbVar8 + 0x14) = 0xf;
    *pbVar8 = (basic_string<>)0x0;
    *(undefined4 *)(pbVar8 + 0x18) = 0;
    *(undefined4 *)(pbVar8 + 0x1c) = 0;
    *(undefined4 *)(pbVar8 + 0x20) = 0;
    *(undefined4 *)(pbVar8 + 0x24) = 0;
    *(undefined4 *)(pbVar8 + 0x28) = 0;
    *(undefined4 *)(pbVar8 + 0x2c) = 0;
    *(undefined4 *)(pbVar8 + 0x40) = 0;
    *(undefined4 *)(pbVar8 + 0x44) = 0xf;
    pbVar8[0x30] = (basic_string<>)0x0;
    *(basic_string<> **)(this + 0x58) = pbVar8;
    iVar9 = *(int *)(pCVar4 + 0x40);
    pbVar10 = (basic_string<> *)(iVar9 + 8);
    if (pbVar8 != pbVar10) {
      if (0xf < *(uint *)(iVar9 + 0x1c)) {
        pbVar10 = *(basic_string<> **)pbVar10;
      }
      uStack_38 = 0x484caf;
      std::basic_string<>::assign(pbVar8,(char *)pbVar10,*(uint *)(iVar9 + 0x18));
    }
    iVar9 = diceRoll(pDVar3);
    *(int *)(*(int *)(this + 0x58) + 0x18) = iVar9;
    *(undefined4 *)(*(int *)(this + 0x58) + 0x1c) = *(undefined4 *)(*(int *)(this + 0x58) + 0x18);
    *(undefined4 *)(*(int *)(this + 0x58) + 0x20) = *(undefined4 *)(*(int *)(this + 0x58) + 0x18);
    *(undefined4 *)(*(int *)(this + 0x58) + 0x24) = *(undefined4 *)(*(int *)(pCVar4 + 0x40) + 4);
    *(undefined4 *)(*(int *)(this + 0x58) + 0x28) = **(undefined4 **)(pCVar4 + 0x40);
    *(int *)(*(int *)(this + 0x58) + 0x2c) =
         (int)((float)(&economyDiffMultipler)[*(int *)(g_gameLogic + 0xc4)] *
               (float)*(int *)(*(int *)(pCVar4 + 0x40) + 0x20) +
              (float)*(int *)(*(int *)(pCVar4 + 0x40) + 0x20));
    *(float *)(this + 0x1c) = (float)*(int *)(pCVar4 + 0x44);
  }
  if (0xf < in_stack_00000028) {
    pnVar11 = (nothrow_t *)(in_stack_00000028 + 1);
    pbVar10 = in_stack_00000014;
    if ((nothrow_t *)0xfff < pnVar11) {
      pbVar10 = *(basic_string<> **)(in_stack_00000014 + -4);
      pnVar11 = (nothrow_t *)(in_stack_00000028 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000014 + (-4 - (int)pbVar10)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x484d5a;
    operator_delete(pbVar10,pnVar11);
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0xf;
  in_stack_00000014 = (basic_string<> *)((uint)in_stack_00000014 & 0xffffff00);
  std::vector<>::_Tidy((vector<> *)&stack0x00000008);
  ExceptionList = local_10;
  return (Contract *)this;
}
