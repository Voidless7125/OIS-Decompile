#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00474d49(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  AnimationFrames **ppAVar3;
  MetaGameAction **ppMVar4;
  bool bVar5;
  basic_string<> *pbVar6;
  SyntheticObjectCargoInstance *pSVar7;
  int iVar8;
  AnimationFrames *pAVar9;
  char *pcVar10;
  int iVar11;
  Requirement *pRVar12;
  MetaGameAction *pMVar13;
  uint uVar14;
  vector<> *pvVar15;
  Scenario *pSVar16;
  _Tree<> *this;
  map<> *this_00;
  map<> *this_01;
  basic_string<> *pbVar17;
  _Tree<> *this_02;
  map<> *this_03;
  map<> *this_04;
  void *pvVar18;
  nothrow_t *pnVar19;
  int unaff_EBX;
  uint unaff_EBP;
  int iVar20;
  uint uVar21;
  char *unaff_retaddr;
  undefined4 uStack0000000c;
  basic_string<> abStack_18 [8];
  undefined4 uStack_10;
  
  *param_1 = param_2;
  *(int *)(unaff_EBX + 0x40) = *(int *)(unaff_EBX + 0x40) + 4;
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  word::~word((word *)(unaff_EBP - 0x28));
  *(undefined4 *)(unaff_EBP - 0x18) = 0;
  *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
  *(undefined1 *)(unaff_EBP - 0x28) = 0;
  std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"hidden",6);
  *(undefined4 *)(unaff_EBP - 4) = 0x19;
  std::map<>::operator[](&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x28));
  bVar5 = std::_Traits_equal<>("true",4,unaff_retaddr,param_3);
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  uVar21 = *(uint *)(unaff_EBP - 0x14);
  if (0xf < uVar21) {
    pvVar1 = *(void **)(unaff_EBP - 0x28);
    pnVar19 = (nothrow_t *)(uVar21 + 1);
    pvVar18 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)pvVar1 + -4);
      pnVar19 = (nothrow_t *)(uVar21 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar19);
  }
  puVar2 = *(undefined1 **)(unaff_EBP - 0x60);
  if (bVar5) {
    *puVar2 = 1;
  }
  *(undefined4 *)(unaff_EBP - 0x18) = 0;
  *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
  *(undefined1 *)(unaff_EBP - 0x28) = 0;
  std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"cargo",5);
  std::_Tree<>::_Eqrange<>((_Tree<> *)&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x68));
  iVar11 = *(int *)(unaff_EBP - 0x68);
  iVar20 = 0;
  iVar8 = *(int *)(unaff_EBP - 100);
  *(int *)(unaff_EBP - 0x5c) = iVar11;
  while (iVar11 != iVar8) {
    iVar20 = iVar20 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++
              ((_Tree_unchecked_const_iterator<> *)(unaff_EBP - 0x5c));
    iVar11 = *(int *)(unaff_EBP - 0x5c);
  }
  uVar21 = *(uint *)(unaff_EBP - 0x14);
  if (0xf < uVar21) {
    pvVar1 = *(void **)(unaff_EBP - 0x28);
    pnVar19 = (nothrow_t *)(uVar21 + 1);
    pvVar18 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)pvVar1 + -4);
      pnVar19 = (nothrow_t *)(uVar21 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar19);
  }
  if (iVar20 == 0) {
    *(undefined4 *)(unaff_EBP - 0x18) = 0;
    *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
    *(undefined1 *)(unaff_EBP - 0x28) = 0;
    std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"cargo",5);
    uVar14 = std::_Tree<>::count(this,(basic_string<> *)(unaff_EBP - 0x28));
    uVar21 = *(uint *)(unaff_EBP - 0x14);
    if (0xf < uVar21) {
      pvVar1 = *(void **)(unaff_EBP - 0x28);
      pnVar19 = (nothrow_t *)(uVar21 + 1);
      pvVar18 = pvVar1;
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar18 = *(void **)((int)pvVar1 + -4);
        pnVar19 = (nothrow_t *)(uVar21 + 0x24);
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar19);
    }
    if (uVar14 != 0) {
      uVar21 = 0;
      iVar8 = 0;
      while( true ) {
        *(undefined4 *)(unaff_EBP - 0x18) = 0;
        *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
        *(undefined1 *)(unaff_EBP - 0x28) = 0;
        std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"cargo",5);
        *(undefined4 *)(unaff_EBP - 4) = 0x1e;
        pvVar15 = std::map<>::operator[](this_00,(basic_string<> *)(unaff_EBP - 0x28));
        iVar11 = *(int *)(pvVar15 + 4);
        iVar20 = *(int *)pvVar15;
        *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
        uVar14 = *(uint *)(unaff_EBP - 0x14);
        if (0xf < uVar14) {
          pvVar1 = *(void **)(unaff_EBP - 0x28);
          pnVar19 = (nothrow_t *)(uVar14 + 1);
          pvVar18 = pvVar1;
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar18 = *(void **)((int)pvVar1 + -4);
            pnVar19 = (nothrow_t *)(uVar14 + 0x24);
            if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) goto LAB_0047438f;
          }
          operator_delete(pvVar18,pnVar19);
        }
        if ((uint)((iVar11 - iVar20) / 0x18) <= uVar21) break;
        *(undefined4 *)(unaff_EBP - 0x18) = 0;
        *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
        *(undefined1 *)(unaff_EBP - 0x28) = 0;
        std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"cargo",5);
        *(undefined4 *)(unaff_EBP - 4) = 0x1f;
        pvVar15 = std::map<>::operator[](this_01,(basic_string<> *)(unaff_EBP - 0x28));
        std::basic_string<>::basic_string<>(abStack_18,(basic_string<> *)(*(int *)pvVar15 + iVar8));
        splitStringBy();
        *(undefined1 *)(unaff_EBP - 4) = 0x21;
        uVar14 = *(uint *)(unaff_EBP - 0x14);
        if (0xf < uVar14) {
          pvVar1 = *(void **)(unaff_EBP - 0x28);
          pnVar19 = (nothrow_t *)(uVar14 + 1);
          pvVar18 = pvVar1;
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar18 = *(void **)((int)pvVar1 + -4);
            pnVar19 = (nothrow_t *)(uVar14 + 0x24);
            if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) goto LAB_0047438f;
          }
          operator_delete(pvVar18,pnVar19);
        }
        iVar11 = *(int *)(unaff_EBP - 0x30);
        iVar20 = *(int *)(unaff_EBP - 0x34);
        *(undefined4 *)(unaff_EBP - 0x18) = 0;
        *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
        *(undefined1 *)(unaff_EBP - 0x28) = 0;
        if ((iVar11 - iVar20) / 0x18 == 2) {
          pSVar7 = operator_new(8);
          *(SyntheticObjectCargoInstance **)(unaff_EBP - 100) = pSVar7;
          *(undefined1 *)(unaff_EBP - 4) = 0x22;
          std::basic_string<>::basic_string<>
                    (abStack_18,(basic_string<> *)(*(int *)(unaff_EBP - 0x34) + 0x18));
          pcVar10 = *(char **)(unaff_EBP - 0x34);
          if (0xf < *(uint *)(pcVar10 + 0x14)) {
            pcVar10 = *(char **)pcVar10;
          }
          iVar11 = atoi(pcVar10);
          pAVar9 = (AnimationFrames *)
                   SyntheticObjectCargoInstance::SyntheticObjectCargoInstance(pSVar7,iVar11);
          *(undefined1 *)(unaff_EBP - 4) = 0x21;
          iVar11 = *(int *)(unaff_EBP - 0x60);
          *(AnimationFrames **)(unaff_EBP - 0x5c) = pAVar9;
          ppAVar3 = *(AnimationFrames ***)(iVar11 + 0x4c);
          if (*(AnimationFrames ***)(iVar11 + 0x50) == ppAVar3) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(iVar11 + 0x48),ppAVar3,(AnimationFrames **)(unaff_EBP - 0x5c));
          }
          else {
            *ppAVar3 = pAVar9;
            *(int *)(iVar11 + 0x4c) = *(int *)(iVar11 + 0x4c) + 4;
          }
        }
        else {
          debugPrint("ERROR","Invalid cargo for synthetic object.");
        }
        *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
        std::vector<>::_Tidy((vector<> *)(unaff_EBP - 0x34));
        uVar21 = uVar21 + 1;
        iVar8 = iVar8 + 0x18;
      }
    }
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x30) = 0;
    *(undefined4 *)(unaff_EBP - 0x2c) = 0xf;
    *(undefined1 *)(unaff_EBP - 0x40) = 0;
    std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x40),"cargo",5);
    *(undefined4 *)(unaff_EBP - 4) = 0x1a;
    pbVar6 = std::map<>::operator[](&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x40));
    std::basic_string<>::basic_string<>(abStack_18,(basic_string<> *)pbVar6);
    splitStringBy();
    *(undefined1 *)(unaff_EBP - 4) = 0x1c;
    uVar21 = *(uint *)(unaff_EBP - 0x2c);
    if (0xf < uVar21) {
      pvVar1 = *(void **)(unaff_EBP - 0x40);
      pnVar19 = (nothrow_t *)(uVar21 + 1);
      pvVar18 = pvVar1;
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar18 = *(void **)((int)pvVar1 + -4);
        pnVar19 = (nothrow_t *)(uVar21 + 0x24);
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar19);
    }
    iVar8 = *(int *)(unaff_EBP - 0x68);
    iVar11 = *(int *)(unaff_EBP - 0x6c);
    *(undefined4 *)(unaff_EBP - 0x30) = 0;
    *(undefined4 *)(unaff_EBP - 0x2c) = 0xf;
    *(undefined1 *)(unaff_EBP - 0x40) = 0;
    if ((iVar8 - iVar11) / 0x18 == 2) {
      pSVar7 = operator_new(8);
      *(SyntheticObjectCargoInstance **)(unaff_EBP - 0x5c) = pSVar7;
      *(undefined1 *)(unaff_EBP - 4) = 0x1d;
      std::basic_string<>::basic_string<>
                (abStack_18,(basic_string<> *)(*(int *)(unaff_EBP - 0x6c) + 0x18));
      pcVar10 = *(char **)(unaff_EBP - 0x6c);
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar10 = *(char **)pcVar10;
      }
      iVar8 = atoi(pcVar10);
      pAVar9 = (AnimationFrames *)
               SyntheticObjectCargoInstance::SyntheticObjectCargoInstance(pSVar7,iVar8);
      *(undefined1 *)(unaff_EBP - 4) = 0x1c;
      ppAVar3 = *(AnimationFrames ***)(puVar2 + 0x4c);
      *(AnimationFrames **)(unaff_EBP - 0x5c) = pAVar9;
      if (*(AnimationFrames ***)(puVar2 + 0x50) == ppAVar3) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(puVar2 + 0x48),ppAVar3,(AnimationFrames **)(unaff_EBP - 0x5c));
      }
      else {
        *ppAVar3 = pAVar9;
        *(int *)(puVar2 + 0x4c) = *(int *)(puVar2 + 0x4c) + 4;
      }
    }
    else {
      debugPrint("ERROR","Invalid cargo for synthetic object.");
    }
    *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
    std::vector<>::_Tidy((vector<> *)(unaff_EBP - 0x6c));
  }
  *(undefined4 *)(unaff_EBP - 0x18) = 0;
  *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
  *(undefined1 *)(unaff_EBP - 0x28) = 0;
  std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"setflag",7);
  std::_Tree<>::_Eqrange<>((_Tree<> *)&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x68));
  iVar11 = *(int *)(unaff_EBP - 0x68);
  iVar20 = 0;
  iVar8 = *(int *)(unaff_EBP - 100);
  *(int *)(unaff_EBP - 0x5c) = iVar11;
  while (iVar11 != iVar8) {
    iVar20 = iVar20 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++
              ((_Tree_unchecked_const_iterator<> *)(unaff_EBP - 0x5c));
    iVar11 = *(int *)(unaff_EBP - 0x5c);
  }
  uVar21 = *(uint *)(unaff_EBP - 0x14);
  if (0xf < uVar21) {
    pvVar1 = *(void **)(unaff_EBP - 0x28);
    pnVar19 = (nothrow_t *)(uVar21 + 1);
    pvVar18 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)pvVar1 + -4);
      pnVar19 = (nothrow_t *)(uVar21 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar19);
  }
  if (iVar20 != 0) {
    *(undefined4 *)(unaff_EBP - 0x18) = 0;
    *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
    *(undefined1 *)(unaff_EBP - 0x28) = 0;
    std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"setflag",7);
    *(undefined4 *)(unaff_EBP - 4) = 0x23;
    pbVar6 = std::map<>::operator[](&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x28));
    if (*(basic_string<> **)(unaff_EBP - 0x70) != pbVar6) {
      pbVar17 = pbVar6;
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar17 = *(basic_string<> **)pbVar6;
      }
      std::basic_string<>::assign
                (*(basic_string<> **)(unaff_EBP - 0x70),(char *)pbVar17,*(uint *)(pbVar6 + 0x10));
    }
    *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
    uVar21 = *(uint *)(unaff_EBP - 0x14);
    if (0xf < uVar21) {
      pvVar1 = *(void **)(unaff_EBP - 0x28);
      pnVar19 = (nothrow_t *)(uVar21 + 1);
      pvVar18 = pvVar1;
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar18 = *(void **)((int)pvVar1 + -4);
        pnVar19 = (nothrow_t *)(uVar21 + 0x24);
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar19);
    }
  }
  *(undefined4 *)(unaff_EBP - 0x18) = 0;
  *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
  *(undefined1 *)(unaff_EBP - 0x28) = 0;
  std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"req",3);
  std::_Tree<>::_Eqrange<>((_Tree<> *)&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x68));
  iVar11 = *(int *)(unaff_EBP - 0x68);
  iVar20 = 0;
  iVar8 = *(int *)(unaff_EBP - 100);
  *(int *)(unaff_EBP - 0x5c) = iVar11;
  while (iVar11 != iVar8) {
    iVar20 = iVar20 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++
              ((_Tree_unchecked_const_iterator<> *)(unaff_EBP - 0x5c));
    iVar11 = *(int *)(unaff_EBP - 0x5c);
  }
  uVar21 = *(uint *)(unaff_EBP - 0x14);
  if (0xf < uVar21) {
    pvVar1 = *(void **)(unaff_EBP - 0x28);
    pnVar19 = (nothrow_t *)(uVar21 + 1);
    pvVar18 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)pvVar1 + -4);
      pnVar19 = (nothrow_t *)(uVar21 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar19);
  }
  if (iVar20 == 0) {
    *(undefined4 *)(unaff_EBP - 0x18) = 0;
    *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
    *(undefined1 *)(unaff_EBP - 0x28) = 0;
    std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"req",3);
    uVar14 = std::_Tree<>::count(this_02,(basic_string<> *)(unaff_EBP - 0x28));
    uVar21 = *(uint *)(unaff_EBP - 0x14);
    if (0xf < uVar21) {
      pvVar1 = *(void **)(unaff_EBP - 0x28);
      pnVar19 = (nothrow_t *)(uVar21 + 1);
      pvVar18 = pvVar1;
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar18 = *(void **)((int)pvVar1 + -4);
        pnVar19 = (nothrow_t *)(uVar21 + 0x24);
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar19);
    }
    if (uVar14 != 0) {
      uVar21 = 0;
      iVar8 = 0;
      do {
        *(undefined4 *)(unaff_EBP - 0x18) = 0;
        *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
        *(undefined1 *)(unaff_EBP - 0x28) = 0;
        std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"req",3);
        *(undefined4 *)(unaff_EBP - 4) = 0x27;
        pvVar15 = std::map<>::operator[](this_03,(basic_string<> *)(unaff_EBP - 0x28));
        iVar11 = *(int *)(pvVar15 + 4);
        iVar20 = *(int *)pvVar15;
        *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
        uVar14 = *(uint *)(unaff_EBP - 0x14);
        if (0xf < uVar14) {
          pvVar1 = *(void **)(unaff_EBP - 0x28);
          pnVar19 = (nothrow_t *)(uVar14 + 1);
          pvVar18 = pvVar1;
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar18 = *(void **)((int)pvVar1 + -4);
            pnVar19 = (nothrow_t *)(uVar14 + 0x24);
            if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
LAB_0047438f:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar18,pnVar19);
        }
        if ((uint)((iVar11 - iVar20) / 0x18) <= uVar21) break;
        pRVar12 = operator_new(0x40);
        *(Requirement **)(unaff_EBP - 100) = pRVar12;
        *(undefined4 *)(unaff_EBP - 4) = 0x28;
        *(undefined4 *)(unaff_EBP - 0x48) = 0;
        *(undefined4 *)(unaff_EBP - 0x44) = 0xf;
        *(undefined1 *)(unaff_EBP - 0x58) = 0;
        std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x58),"req",3);
        *(undefined1 *)(unaff_EBP - 4) = 0x29;
        uVar14 = *(uint *)(unaff_EBP - 0x74) | 2;
        *(uint *)(unaff_EBP - 0x74) = uVar14;
        *(uint *)(unaff_EBP - 0x5c) = uVar14;
        pvVar15 = std::map<>::operator[](this_04,(basic_string<> *)(unaff_EBP - 0x58));
        std::basic_string<>::basic_string<>(abStack_18,(basic_string<> *)(*(int *)pvVar15 + iVar8));
        pMVar13 = (MetaGameAction *)Requirement::Requirement(pRVar12);
        *(undefined4 *)(unaff_EBP - 4) = 0x2a;
        iVar11 = *(int *)(unaff_EBP - 0x60);
        *(MetaGameAction **)(unaff_EBP - 0x70) = pMVar13;
        ppMVar4 = *(MetaGameAction ***)(iVar11 + 0x58);
        if (*(MetaGameAction ***)(iVar11 + 0x5c) == ppMVar4) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(iVar11 + 0x54),ppMVar4,(MetaGameAction **)(unaff_EBP - 0x70));
        }
        else {
          *ppMVar4 = pMVar13;
          *(int *)(iVar11 + 0x58) = *(int *)(iVar11 + 0x58) + 4;
        }
        *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
        *(uint *)(unaff_EBP - 0x74) = *(uint *)(unaff_EBP - 0x74) & 0xfffffffd;
        uVar14 = *(uint *)(unaff_EBP - 0x44);
        if (0xf < uVar14) {
          pvVar1 = *(void **)(unaff_EBP - 0x58);
          pnVar19 = (nothrow_t *)(uVar14 + 1);
          pvVar18 = pvVar1;
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar18 = *(void **)((int)pvVar1 + -4);
            pnVar19 = (nothrow_t *)(uVar14 + 0x24);
            if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) goto LAB_0047438f;
          }
          operator_delete(pvVar18,pnVar19);
        }
        uVar21 = uVar21 + 1;
        *(undefined4 *)(unaff_EBP - 0x48) = 0;
        *(undefined4 *)(unaff_EBP - 0x44) = 0xf;
        iVar8 = iVar8 + 0x18;
        *(undefined1 *)(unaff_EBP - 0x58) = 0;
      } while( true );
    }
    pAVar9 = *(AnimationFrames **)(unaff_EBP - 0x60);
  }
  else {
    pRVar12 = operator_new(0x40);
    *(Requirement **)(unaff_EBP - 100) = pRVar12;
    *(undefined4 *)(unaff_EBP - 4) = 0x24;
    *(undefined4 *)(unaff_EBP - 0x18) = 0;
    *(undefined4 *)(unaff_EBP - 0x14) = 0xf;
    *(undefined1 *)(unaff_EBP - 0x28) = 0;
    std::basic_string<>::assign((basic_string<> *)(unaff_EBP - 0x28),"req",3);
    *(undefined1 *)(unaff_EBP - 4) = 0x25;
    *(undefined4 *)(unaff_EBP - 0x5c) = 1;
    pbVar6 = std::map<>::operator[](&DataLoader::data,(basic_string<> *)(unaff_EBP - 0x28));
    std::basic_string<>::basic_string<>(abStack_18,(basic_string<> *)pbVar6);
    pMVar13 = (MetaGameAction *)Requirement::Requirement(pRVar12);
    *(undefined4 *)(unaff_EBP - 4) = 0x26;
    pAVar9 = *(AnimationFrames **)(unaff_EBP - 0x60);
    *(MetaGameAction **)(unaff_EBP - 0x70) = pMVar13;
    ppMVar4 = *(MetaGameAction ***)(pAVar9 + 0x58);
    if (*(MetaGameAction ***)(pAVar9 + 0x5c) == ppMVar4) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(pAVar9 + 0x54),ppMVar4,(MetaGameAction **)(unaff_EBP - 0x70));
    }
    else {
      *ppMVar4 = pMVar13;
      *(int *)(pAVar9 + 0x58) = *(int *)(pAVar9 + 0x58) + 4;
    }
    *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
    uVar21 = *(uint *)(unaff_EBP - 0x14);
    if (0xf < uVar21) {
      pvVar1 = *(void **)(unaff_EBP - 0x28);
      pnVar19 = (nothrow_t *)(uVar21 + 1);
      pvVar18 = pvVar1;
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar18 = *(void **)((int)pvVar1 + -4);
        pnVar19 = (nothrow_t *)(uVar21 + 0x24);
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar19);
    }
  }
  std::basic_string<>::basic_string<>(abStack_18,(basic_string<> *)&DataLoader::currentScenario);
  pSVar16 = GameData::getScenario();
  if (pSVar16 == (Scenario *)0x0) {
    uStack_10 = 0x475827;
    debugPrint("ERROR","Invalid scenario for synthetic object - \'%s\'");
  }
  ppAVar3 = *(AnimationFrames ***)(pSVar16 + 0x334);
  if (*(AnimationFrames ***)(pSVar16 + 0x338) == ppAVar3) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pSVar16 + 0x330),ppAVar3,(AnimationFrames **)(unaff_EBP - 0x7c));
  }
  else {
    *ppAVar3 = pAVar9;
    *(int *)(pSVar16 + 0x334) = *(int *)(pSVar16 + 0x334) + 4;
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x475865;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}
