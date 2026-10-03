#include "../ois.exe.h"


// public: virtual void * __thiscall UI_SelectedObjectSummary::`vector deleting destructor'(unsigned
// int)

void * __thiscall
UI_SelectedObjectSummary::_vector_deleting_destructor_(UI_SelectedObjectSummary *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x444) = 0;
  }
  if (*(int **)(this + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x448) + 0x138))(1);
    *(undefined4 *)(this + 0x448) = 0;
  }
  if (*(int **)(this + 0x44c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44c) + 0x138))(1);
    *(undefined4 *)(this + 0x44c) = 0;
  }
  if (*(int **)(this + 0x450) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x450) + 0x138))(1);
    *(undefined4 *)(this + 0x450) = 0;
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  uVar2 = *(uint *)(this + 0x43c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x428);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0xf;
  this[0x428] = (UI_SelectedObjectSummary)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x458);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_SelectedObjectSummary::cleanupRender(void)

void __thiscall UI_SelectedObjectSummary::cleanupRender(UI_SelectedObjectSummary *this)

{
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
    *(undefined4 *)(this + 0x444) = 0;
  }
  if (*(int **)(this + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x448) + 0x138))(1);
    *(undefined4 *)(this + 0x448) = 0;
  }
  if (*(int **)(this + 0x44c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44c) + 0x138))(1);
    *(undefined4 *)(this + 0x44c) = 0;
  }
  if (*(int **)(this + 0x450) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x450) + 0x138))(1);
    *(undefined4 *)(this + 0x450) = 0;
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_SelectedObjectSummary::render(void)

void __thiscall UI_SelectedObjectSummary::render(UI_SelectedObjectSummary *this)

{
  int iVar1;
  UIText *pUVar2;
  Sprite *pSVar3;
  char acStack_74 [4];
  char acStack_64 [4];
  float fStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  float fStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  Size local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cbb4d;
  local_10 = ExceptionList;
  uStack_2c = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_30 = (undefined4 *)0x582791;
  (**(code **)(*(int *)this + 0x290))();
  uStack_4c = 0x5827a2;
  std::basic_string<>::basic_string<>((basic_string<> *)&fStack_44,(basic_string<> *)(this + 0x428))
  ;
  uStack_4c = 0x5827c3;
  pUVar2 = UIText::create();
  *(UIText **)(this + 0x440) = pUVar2;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  puStack_30 = &local_18;
  uStack_34 = 0x5827ef;
  (**(code **)(*(int *)pUVar2 + 0xa0))();
  local_8 = 0xffffffff;
  uStack_34 = 0x40400000;
  uStack_38 = 0x40400000;
  uStack_3c = 0x582813;
  (**(code **)(**(int **)(this + 0x440) + 0x48))();
  uStack_3c = *(undefined4 *)(this + 0x440);
  puStack_40 = (undefined4 *)0x582823;
  (**(code **)(*(int *)this + 0x10c))();
  builtin_strncpy(acStack_64,"@(X",4);
  strUsingArgs((char *)&fStack_54);
  pSVar3 = loadSprite();
  *(Sprite **)(this + 0x444) = pSVar3;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_8 = 1;
  puStack_40 = &local_18;
  fStack_44 = 8.096036e-39;
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  local_8 = 0xffffffff;
  fStack_44 = (float)(*(int *)(this + 0x2a4) + -1);
  uStack_4c = 0x5828a4;
  (**(code **)(**(int **)(this + 0x444) + 0x48))();
  uStack_4c = *(undefined4 *)(this + 0x444);
  puStack_50 = (undefined4 *)0x5828b4;
  (**(code **)(*(int *)this + 0x10c))();
  acStack_74[0] = -0x2f;
  acStack_74[1] = '(';
  acStack_74[2] = 'X';
  acStack_74[3] = '\0';
  strUsingArgs(acStack_64);
  pSVar3 = loadSprite();
  *(Sprite **)(this + 0x448) = pSVar3;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_8 = 2;
  puStack_50 = &local_18;
  fStack_54 = 8.096239e-39;
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  local_8 = 0xffffffff;
  fStack_54 = (float)(*(int *)(this + 0x2a4) + -1);
  (**(code **)(**(int **)(this + 0x448) + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  strUsingArgs(acStack_74);
  pSVar3 = loadSprite();
  *(Sprite **)(this + 0x44c) = pSVar3;
  local_18 = 0;
  local_14 = 0;
  local_8 = 3;
  acStack_64[0] = -0x5e;
  acStack_64[1] = ')';
  acStack_64[2] = 'X';
  acStack_64[3] = '\0';
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  local_8 = 0xffffffff;
  acStack_64[0] = '\0';
  acStack_64[1] = '\0';
  acStack_64[2] = -0x80;
  acStack_64[3] = '?';
  (**(code **)(**(int **)(this + 0x44c) + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  strUsingArgs(&stack0xffffff7c,"%c_BrokenCorner_BottomRight.png",(int)(char)g_gameData[0xd4]);
  pSVar3 = loadSprite();
  *(Sprite **)(this + 0x450) = pSVar3;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_8 = 4;
  builtin_strncpy(acStack_74,"\'*X",4);
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  local_8 = 0xffffffff;
  acStack_74[0] = '\0';
  acStack_74[1] = '\0';
  acStack_74[2] = -0x80;
  acStack_74[3] = '?';
  (**(code **)(**(int **)(this + 0x450) + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  cocos2d::Size::Size(local_20,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4));
  (**(code **)(iVar1 + 0xac))();
  **(undefined1 **)(this + 0x288) = 1;
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_SelectedObjectSummary::specialDataCheckFunction(float)

void __thiscall
UI_SelectedObjectSummary::specialDataCheckFunction(UI_SelectedObjectSummary *this,float param_1)

{
  Faction FVar1;
  SensorData *this_00;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  FictionData *pFVar7;
  Faction *pFVar8;
  float fVar9;
  basic_string<> *pbVar10;
  char *pcVar11;
  basic_string<> *pbVar12;
  int iVar13;
  int *piVar14;
  void *pvVar15;
  void *pvVar16;
  nothrow_t *pnVar17;
  uint uVar18;
  Faction *pFVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  basic_string<> *pbVar23;
  uint unaff_EDI;
  basic_string<> *this_01;
  float fVar24;
  float local_d8;
  float local_d4;
  UI_SelectedObjectSummary *local_d0;
  float local_cc;
  undefined1 *local_c8;
  undefined1 local_c1;
  undefined1 *local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [5];
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  basic_string<> *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005cbe53;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar20 = 0;
  local_c0 = (undefined1 *)0x0;
  local_d0 = this;
  local_14 = pcVar4;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) goto LAB_00584555;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (basic_string<> *)((uint)local_2c[0] & 0xffffff00);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (PresentationData::m_mapZoomLevel == 0) {
    pcVar5 = (char *)strUsingArgs((char *)local_5c);
    local_8._0_1_ = 1;
    pcVar11 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar11 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_48) {
      pnVar17 = (nothrow_t *)(local_48 + 1);
      pvVar15 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar15 = *(void **)((int)local_5c[0] + -4);
        pnVar17 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar17);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    iVar13 = *(int *)(*(int *)(g_gameData + 0xd8) + 0xe8) -
             *(int *)(*(int *)(g_gameData + 0xd8) + 0xe4);
    iVar20 = iVar13 >> 0x1f;
    if (iVar13 / 0x18 + iVar20 == iVar20) {
      std::basic_string<>::append((basic_string<> *)local_2c,"`2  Affil. : `7none",0x13);
    }
    else {
      std::basic_string<>::append((basic_string<> *)local_2c,"`2  Affil. : ",0xd);
      uVar18 = 0;
      piVar22 = (int *)(*(int *)(g_gameData + 0xd8) + 0xe4);
      iVar13 = *(int *)(*(int *)(g_gameData + 0xd8) + 0xe8) - *piVar22;
      iVar20 = iVar13 >> 0x1f;
      if (iVar13 / 0x18 + iVar20 != iVar20) {
        iVar20 = 0;
        do {
          local_c0 = &stack0xffffff00;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff00,(basic_string<> *)(*piVar22 + iVar20));
          local_8._0_1_ = 2;
          pFVar7 = Singleton<>::getInstance();
          local_8._0_1_ = 0;
          pFVar8 = FictionData::getFactionForID(pFVar7);
          if (0 < (int)uVar18) {
            std::basic_string<>::append((basic_string<> *)local_2c,"`2,",3);
          }
          pFVar19 = pFVar8 + 0x50;
          if (0xf < *(uint *)(pFVar8 + 100)) {
            pFVar19 = *(Faction **)pFVar19;
          }
          pFVar8 = pFVar19;
          do {
            FVar1 = *pFVar8;
            pFVar8 = pFVar8 + 1;
          } while (FVar1 != (Faction)0x0);
          std::basic_string<>::append
                    ((basic_string<> *)local_2c,(char *)pFVar19,(int)pFVar8 - (int)(pFVar19 + 1));
          uVar18 = uVar18 + 1;
          iVar20 = iVar20 + 0x18;
          piVar22 = (int *)(*(int *)(g_gameData + 0xd8) + 0xe4);
        } while (uVar18 < (uint)((*(int *)(*(int *)(g_gameData + 0xd8) + 0xe8) - *piVar22) / 0x18));
      }
    }
    std::basic_string<>::append((basic_string<> *)local_2c,"\n",1);
    if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0) != -1) {
      for (puVar6 = *(undefined4 **)(g_gameData + 0x3c);
          puVar6 != *(undefined4 **)(g_gameData + 0x40); puVar6 = puVar6 + 1) {
        piVar22 = (int *)*puVar6;
        if (*piVar22 == *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0)) goto LAB_00582d0f;
      }
      piVar22 = (int *)0x0;
LAB_00582d0f:
      pcVar5 = (char *)strUsingArgs((char *)local_5c);
      local_8._0_1_ = 3;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_48) {
        pnVar17 = (nothrow_t *)(local_48 + 1);
        pvVar15 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_5c[0] + -4);
          pnVar17 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      uVar18 = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      piVar14 = *(int **)(*(int *)(g_gameData + 0xd8) + 0xcc);
      uVar21 = *(int *)(*(int *)(g_gameData + 0xd8) + 0xd0) - (int)piVar14 >> 2;
      if (uVar21 != 0) {
        do {
          if ((*(int *)(*(int *)(*piVar14 + 0x254) + 0x158) == 2) &&
             (*(int *)(*piVar14 + 0x38c) == *piVar22)) {
            local_c1 = 1;
            goto LAB_00582dea;
          }
          uVar18 = uVar18 + 1;
          piVar14 = piVar14 + 1;
        } while (uVar18 < uVar21);
      }
      local_c1 = 0;
LAB_00582dea:
      iVar20 = piVar22[0x3a] - piVar22[0x39] >> 0x1f;
      if ((piVar22[0x3a] - piVar22[0x39]) / 0x18 + iVar20 == iVar20) {
        std::basic_string<>::append((basic_string<> *)local_2c,"`2  Affil. : `7none",0x13);
      }
      else {
        std::basic_string<>::append((basic_string<> *)local_2c,"`2  Affil. : ",0xd);
        iVar20 = piVar22[0x39];
        uVar18 = 0;
        iVar13 = piVar22[0x3a] - iVar20 >> 0x1f;
        if ((piVar22[0x3a] - iVar20) / 0x18 + iVar13 != iVar13) {
          local_c0 = (undefined1 *)0x0;
          do {
            local_c8 = &stack0xffffff00;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xffffff00,(basic_string<> *)(local_c0 + iVar20));
            local_8._0_1_ = 4;
            pFVar7 = Singleton<>::getInstance();
            local_8 = (uint)local_8._1_3_ << 8;
            pFVar8 = FictionData::getFactionForID(pFVar7);
            if (0 < (int)uVar18) {
              std::basic_string<>::append((basic_string<> *)local_2c,"`2,",3);
            }
            pFVar19 = pFVar8 + 0x50;
            if (0xf < *(uint *)(pFVar8 + 100)) {
              pFVar19 = *(Faction **)pFVar19;
            }
            pFVar8 = pFVar19;
            do {
              FVar1 = *pFVar8;
              pFVar8 = pFVar8 + 1;
            } while (FVar1 != (Faction)0x0);
            std::basic_string<>::append
                      ((basic_string<> *)local_2c,(char *)pFVar19,(int)pFVar8 - (int)(pFVar19 + 1));
            iVar20 = piVar22[0x39];
            uVar18 = uVar18 + 1;
            local_c0 = local_c0 + 0x18;
          } while (uVar18 < (uint)((piVar22[0x3a] - iVar20) / 0x18));
        }
      }
      std::basic_string<>::append((basic_string<> *)local_2c,"\n",1);
      local_c8 = (undefined1 *)(float)*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x24) + 0x80);
      local_cc = (float)*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x24) + 0x7c);
      local_d4 = (float)piVar22[0x20];
      local_d8 = (float)piVar22[0x1f];
      local_8._0_1_ = 6;
      fVar24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_d8,(Vec2 *)&local_cc);
      fVar9 = (float)(0x5f3759df - ((uint)fVar24 >> 1));
      local_8 = (uint)local_8._1_3_ << 8;
      piVar22 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x14);
      local_c0 = (undefined1 *)((1.5 - fVar24 * 0.5 * fVar9 * fVar9) * fVar9 * fVar24);
      if (piVar22 != (int *)0x0) {
        (**(code **)(*piVar22 + 0x10))();
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44);
      local_8._0_1_ = 7;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pnVar17 = (nothrow_t *)(local_30 + 1);
        pvVar15 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_44[0] + -4);
          pnVar17 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44);
      local_8._0_1_ = 8;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      pvVar15 = local_44[0];
      uVar18 = local_30;
      goto joined_r0x005838f8;
    }
  }
  else {
    this_00 = *(SensorData **)(*(int *)(g_gameData + 0xd0) + 0x19c);
    if (this_00 == (SensorData *)0x0) {
      iVar20 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4);
      if (iVar20 == 0) {
        std::basic_string<>::assign((basic_string<> *)local_2c,"`8no object selected\n",0x15);
        goto LAB_005844c3;
      }
      iVar13 = *(int *)(iVar20 + 0x54);
      if (iVar13 == 1) {
        uVar18 = 0xf;
        pcVar11 = "`2Type: `$Star\n";
LAB_00583192:
        std::basic_string<>::assign((basic_string<> *)local_2c,pcVar11,uVar18);
      }
      else {
        if (iVar13 == 2) {
          pcVar11 = "`2Type: `7Moon\n";
          uVar18 = 0xf;
          goto LAB_00583192;
        }
        if (iVar13 == 0) {
          if (*(float *)(iVar20 + 0xc0) <= 0.0) {
            pcVar11 = "`2Type: `7Planet\n";
            uVar18 = 0x11;
          }
          else {
            pcVar11 = "`2Type: `0Planet\n";
            uVar18 = 0x11;
          }
          goto LAB_00583192;
        }
      }
      pcVar5 = (char *)strUsingArgs((char *)local_8c);
      local_8._0_1_ = 0x35;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      local_8._0_1_ = 0;
      word::~word((word *)local_8c);
      if (*(int *)(iVar20 + 0x58) != 0) {
        pbVar10 = (basic_string<> *)strUsingArgs((char *)local_44);
        local_8._0_1_ = 0x36;
        std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
        local_8._0_1_ = 0;
        word::~word((word *)local_44);
      }
      if (*(int *)(iVar20 + 0x54) == 0) {
        pbVar10 = (basic_string<> *)strUsingArgs((char *)local_74);
        local_8._0_1_ = 0x37;
        std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
        local_8._0_1_ = 0;
        word::~word((word *)local_74);
      }
      if (0.0 < *(float *)(iVar20 + 0xc0)) {
        pbVar10 = (basic_string<> *)strUsingArgs((char *)local_5c);
        local_8._0_1_ = 0x38;
        std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
        local_8._0_1_ = 0;
        word::~word((word *)local_5c);
      }
      if (*(int *)(iVar20 + 0x54) != 1) {
        if (*(int *)(iVar20 + 0xc4) == 0) {
          pbVar10 = (basic_string<> *)strUsingArgs((char *)local_a4);
          local_8._0_1_ = 0x39;
        }
        else {
          pbVar10 = (basic_string<> *)strUsingArgs((char *)local_a4);
          local_8._0_1_ = 0x3b;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
        local_8._0_1_ = 0;
        word::~word((word *)local_a4);
      }
      local_c8 = &stack0xffffff10;
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xffffff10,
                          (float)*(double *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4) + 0x20),
                          (float)*(double *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4) + 0x28));
      local_8._0_1_ = 0x3c;
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xffffff08,
                          (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28),
                          (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30));
      local_8._0_1_ = 0;
      angleInDegreesFrom();
      pcVar5 = (char *)strUsingArgs((char *)local_8c);
      local_8._0_1_ = 0x3d;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      local_8._0_1_ = 0;
      word::~word((word *)local_8c);
      cocos2d::Vec2::Vec2((Vec2 *)&local_cc,
                          (float)*(double *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4) + 0x20),
                          (float)*(double *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4) + 0x28));
      local_8._0_1_ = 0x3e;
      cocos2d::Vec2::Vec2((Vec2 *)&local_d8,(float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28),
                          (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30));
      local_8._0_1_ = 0x3f;
      cocos2d::Vec2::getDistance((Vec2 *)&local_d8,(Vec2 *)&local_cc);
      pcVar5 = (char *)strUsingArgs((char *)local_8c);
      local_8._0_1_ = 0x40;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      word::~word((word *)local_8c);
      cocos2d::Vec2::~Vec2((Vec2 *)&local_d8);
      local_8._0_1_ = 0;
      cocos2d::Vec2::~Vec2((Vec2 *)&local_cc);
    }
    else {
      std::basic_string<>::append((basic_string<> *)local_2c,"`2Sns.: ",8);
      pcVar5 = (char *)SensorData::describeDetail(this_00,(bool)SUB41(local_44,0));
      local_8._0_1_ = 9;
      pcVar11 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar11 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pnVar17 = (nothrow_t *)(local_30 + 1);
        pvVar15 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_44[0] + -4);
          pnVar17 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      std::basic_string<>::append((basic_string<> *)local_2c,"\n",1);
      if (((this_00[0x45] == (SensorData)0x0) || (iVar13 = *(int *)(this_00 + 0xe0), iVar13 == 0))
         || (iVar13 == 1)) {
        strUsingArgs((char *)local_44);
        local_8._0_1_ = 10;
        strUsingArgs((char *)local_5c);
        local_8._0_1_ = 0xb;
        strUsingArgs((char *)local_a4);
        local_8._0_1_ = 0xc;
        pcVar5 = (char *)strUsingArgs((char *)local_74);
        local_8._0_1_ = 0xd;
        pcVar11 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar11 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
        local_8._0_1_ = 0xc;
        if (0xf < local_60) {
          pnVar17 = (nothrow_t *)(local_60 + 1);
          pvVar15 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_74[0] + -4);
            pnVar17 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        pcVar5 = (char *)strUsingArgs((char *)local_74);
        local_8._0_1_ = 0xe;
        pcVar11 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar11 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
        local_8._0_1_ = 0xc;
        if (0xf < local_60) {
          pnVar17 = (nothrow_t *)(local_60 + 1);
          pvVar15 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_74[0] + -4);
            pnVar17 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        pcVar5 = (char *)strUsingArgs((char *)local_74);
        local_8._0_1_ = 0xf;
        pcVar11 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar11 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
        local_8._0_1_ = 0xc;
        if (0xf < local_60) {
          pnVar17 = (nothrow_t *)(local_60 + 1);
          pvVar15 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_74[0] + -4);
            pnVar17 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        local_ac = 0;
        local_a8 = 0xf;
        local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)local_bc,"`%unknown",9);
        local_8._0_1_ = 0x10;
        if (*(float *)(this_00 + 0x128) == -1.0) {
          pcVar11 = (char *)strUsingArgs((char *)local_74);
          local_8._0_1_ = 0x11;
          uVar18 = *(uint *)(pcVar11 + 0x14);
        }
        else {
          pcVar11 = (char *)strUsingArgs((char *)local_74);
          local_8._0_1_ = 0x12;
          uVar18 = *(uint *)(pcVar11 + 0x14);
        }
        pcVar5 = pcVar11;
        if (0xf < uVar18) {
          pcVar5 = *(char **)pcVar11;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar5,*(uint *)(pcVar11 + 0x10));
        local_8._0_1_ = 0x10;
        if (0xf < local_60) {
          pnVar17 = (nothrow_t *)(local_60 + 1);
          pvVar15 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_74[0] + -4);
            pnVar17 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        if ((*(Ship **)(this_00 + 0x130) == (Ship *)0x0) ||
           (bVar3 = Ship::reactorOnline(*(Ship **)(this_00 + 0x130)), !bVar3)) {
          if ((*(Ship **)(this_00 + 0x130) != (Ship *)0x0) &&
             (bVar3 = Ship::reactorOnline(*(Ship **)(this_00 + 0x130)), !bVar3)) {
            pcVar11 = "inactive";
            uVar18 = 8;
            goto LAB_00584182;
          }
        }
        else {
          uVar18 = 6;
          pcVar11 = "active";
LAB_00584182:
          std::basic_string<>::assign((basic_string<> *)local_bc,pcVar11,uVar18);
        }
        pcVar5 = (char *)strUsingArgs((char *)local_74);
        local_8._0_1_ = 0x13;
        pcVar11 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar11 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
        local_8._0_1_ = 0x10;
        if (0xf < local_60) {
          pnVar17 = (nothrow_t *)(local_60 + 1);
          pvVar15 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_74[0] + -4);
            pnVar17 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        if (this_00[0x10c] == (SensorData)0x0) {
          uVar18 = 0xd;
          pcVar11 = "`2IFF : `@no\n";
        }
        else {
          uVar18 = 0xc;
          pcVar11 = "`2IFF : yes\n";
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,uVar18);
        fVar9 = *(float *)(this_00 + 0x40);
        if (1.0 <= fVar9) {
          strUsingArgs((char *)local_8c);
          local_8._0_1_ = 0x14;
          local_c0 = &DAT_00000001;
        }
        pcVar5 = (char *)strUsingArgs((char *)local_74);
        local_8 = 0x15;
        pcVar11 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar11 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,*(uint *)(pcVar5 + 0x10));
        local_8._0_1_ = 0x14;
        if (0xf < local_60) {
          pnVar17 = (nothrow_t *)(local_60 + 1);
          pvVar15 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_74[0] + -4);
            pnVar17 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        local_64 = 0;
        local_60 = 0xf;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        local_8._0_1_ = 0x10;
        local_8._1_3_ = 0;
        if ((1.0 <= fVar9) && (0xf < local_78)) {
          pnVar17 = (nothrow_t *)(local_78 + 1);
          pvVar15 = local_8c[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_8c[0] + -4);
            pnVar17 = (nothrow_t *)(local_78 + 0x24);
            if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        if ((((*(float *)(this_00 + 0x118) == 0.0) &&
             (iVar20 = *(int *)(this_00 + 0x130), iVar20 != 0)) &&
            (*(char *)(*(int *)(iVar20 + 0x40) + 0x34) != '\0')) &&
           (iVar20 = *(int *)(iVar20 + 0x44), iVar20 != 0)) {
          iVar13 = *(int *)(iVar20 + 0x124);
          if (((iVar13 == 0) || (*(int *)(iVar13 + 0x248) != 1)) &&
             (iVar20 = *(int *)(iVar20 + 0x70), iVar20 != 8)) {
            if (((iVar13 == 0) || (*(int *)(iVar13 + 0x248) != 2)) && (iVar20 != 7)) {
              if ((iVar20 != 1) && (iVar20 != 2)) goto LAB_005843b8;
              pcVar11 = "`2Typ.: `0Merchant\n";
              uVar18 = 0x13;
            }
            else {
              pcVar11 = "`2Typ.: `!Authority\n";
              uVar18 = 0x14;
            }
          }
          else {
            pcVar11 = "`2Typ.: `!Military\n";
            uVar18 = 0x13;
          }
          std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,uVar18);
        }
LAB_005843b8:
        local_8._0_1_ = 0xc;
        if (0xf < local_a8) {
          pnVar17 = (nothrow_t *)(local_a8 + 1);
          pvVar15 = local_bc[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_bc[0] + -4);
            pnVar17 = (nothrow_t *)(local_a8 + 0x24);
            if (0x1f < (uint)((int)local_bc[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        local_8._0_1_ = 0xb;
        local_ac = 0;
        local_a8 = 0xf;
        local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
        if (0xf < local_90) {
          pnVar17 = (nothrow_t *)(local_90 + 1);
          pvVar15 = local_a4[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_a4[0] + -4);
            pnVar17 = (nothrow_t *)(local_90 + 0x24);
            if (0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        local_8._0_1_ = 10;
        local_94 = 0;
        local_90 = 0xf;
        local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
        if (0xf < local_48) {
          pnVar17 = (nothrow_t *)(local_48 + 1);
          pvVar15 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_5c[0] + -4);
            pnVar17 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
          }
          operator_delete(pvVar15,pnVar17);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        pvVar15 = local_44[0];
        uVar18 = local_30;
      }
      else if (iVar13 == 2) {
        std::basic_string<>::append((basic_string<> *)local_2c,"`2Type: `$Explosion\n",0x14);
        fVar9 = *(float *)(this_00 + 0x40);
        if (1.0 <= fVar9) {
          strUsingArgs((char *)local_44);
          local_8._0_1_ = 0x16;
          local_c0 = &DAT_00000002;
        }
        pbVar10 = (basic_string<> *)strUsingArgs((char *)local_5c);
        local_8 = 0x17;
        std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
        local_8 = CONCAT31(local_8._1_3_,0x16);
        if (0xf < local_48) {
          pnVar17 = (nothrow_t *)(local_48 + 1);
          pvVar15 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar15 = *(void **)((int)local_5c[0] + -4);
            pnVar17 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar15,pnVar17);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_8._0_1_ = 0;
        local_8._1_3_ = 0;
        pvVar15 = local_44[0];
        uVar18 = local_30;
        if (1.0 > fVar9) goto LAB_005844c3;
      }
      else {
        iVar2 = *(int *)(this_00 + 0xd8);
        if (iVar2 == 2) {
          std::basic_string<>::append((basic_string<> *)local_2c,"`2Type: `%Jumpgate\n",0x13);
          pbVar10 = (basic_string<> *)strUsingArgs((char *)local_44);
          local_8._0_1_ = 0x18;
          std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
          pvVar15 = local_44[0];
          uVar18 = local_30;
        }
        else {
          if (iVar13 != 5) {
            if (iVar13 == 6) {
              std::basic_string<>::append((basic_string<> *)local_2c,"`2Type: `!Cargo Pods\n",0x15);
              strUsingArgs((char *)local_44);
              local_8._0_1_ = 0x1f;
              pbVar10 = (basic_string<> *)strUsingArgs((char *)local_74);
              local_8._0_1_ = 0x20;
              std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
              local_8._0_1_ = 0x1f;
              if (0xf < local_60) {
                pnVar17 = (nothrow_t *)(local_60 + 1);
                pvVar15 = local_74[0];
                if ((nothrow_t *)0xfff < pnVar17) {
                  pvVar15 = *(void **)((int)local_74[0] + -4);
                  pnVar17 = (nothrow_t *)(local_60 + 0x24);
                  if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
                }
                operator_delete(pvVar15,pnVar17);
              }
              SensorData::getSolutionString(this_00);
              local_8._0_1_ = 0x21;
              pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
              local_8._0_1_ = 0x22;
              std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
              word::~word((word *)local_8c);
              local_8._0_1_ = 0x1f;
              word::~word((word *)local_74);
              if (1.0 <= *(float *)(this_00 + 0x40)) {
                strUsingArgs((char *)local_74);
                local_8._0_1_ = 0x23;
                iVar20 = 8;
                local_c0 = (undefined1 *)0x8;
              }
              pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
              local_8 = 0x24;
              std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
              word::~word((word *)local_8c);
              local_8._0_1_ = 0x1f;
            }
            else {
              if (iVar13 != 4) {
                if (iVar13 == 7) {
                  std::basic_string<>::append
                            ((basic_string<> *)local_2c,"`2Type: `^Derelict\n",0x13);
                  if (*(float *)(this_00 + 0x128) <= 63.0) {
                    std::basic_string<>::append
                              ((basic_string<> *)local_2c,"`2Reg.: `%unknown\n",0x12);
                  }
                  else {
                    strUsingArgs((char *)local_44);
                    local_8._0_1_ = 0x2b;
                    pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                    local_8._0_1_ = 0x2c;
                    std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
                    word::~word((word *)local_8c);
                    local_8._0_1_ = 0;
                    word::~word((word *)local_44);
                  }
                  SensorData::getSolutionString(this_00);
                  local_8._0_1_ = 0x2d;
                  pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                  local_8._0_1_ = 0x2e;
                  std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
                  word::~word((word *)local_8c);
                  local_8._0_1_ = 0;
                  word::~word((word *)local_44);
                  if (1.0 <= *(float *)(this_00 + 0x40)) {
                    strUsingArgs((char *)local_44);
                    local_8._0_1_ = 0x2f;
                    iVar20 = 0x20;
                    local_c0 = (undefined1 *)0x20;
                  }
                  pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                  local_8 = 0x30;
                  std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
                  word::~word((word *)local_8c);
                  local_8._0_1_ = 0;
                  local_8._1_3_ = 0;
                  if (iVar20 != 0) {
                    word::~word((word *)local_44);
                  }
                }
                else {
                  if (iVar2 == 1) {
                    iVar20 = *(int *)(this_00 + 0x130);
                    if ((iVar20 == 0) || (*(char *)(iVar20 + 0x388) == '\0')) {
                      if ((*(char *)(*(int *)(iVar20 + 0x40) + 0x34) != '\0') ||
                         (bVar3 = SensorData::analysed(this_00), bVar3)) {
                        pcVar11 = "`2Type  : `%Starbase\n";
                        uVar18 = 0x15;
                      }
                      else {
                        uVar18 = 0x14;
                        pcVar11 = "`2Type  : `%Unknown\n";
                      }
                      std::basic_string<>::append((basic_string<> *)local_2c,pcVar11,uVar18);
                      pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                      local_8._0_1_ = 0x33;
                    }
                    else {
                      std::basic_string<>::append
                                ((basic_string<> *)local_2c,"`2Type  : `!Colony Vessel\n",0x1a);
                      pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                      local_8._0_1_ = 0x31;
                      std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
                      local_8._0_1_ = 0;
                      word::~word((word *)local_8c);
                      pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                      local_8._0_1_ = 0x32;
                    }
                  }
                  else {
                    if (iVar2 != 3) goto LAB_005844c3;
                    std::basic_string<>::append
                              ((basic_string<> *)local_2c,"`2Type  : `%Depot\n",0x12);
                    pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
                    local_8._0_1_ = 0x34;
                  }
                  std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
                  local_8._0_1_ = 0;
                  word::~word((word *)local_8c);
                }
                goto LAB_005844c3;
              }
              std::basic_string<>::append((basic_string<> *)local_2c,"`2Type: `^Debris\n",0x11);
              strUsingArgs((char *)local_44);
              local_8._0_1_ = 0x25;
              pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
              local_8._0_1_ = 0x26;
              std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
              local_8._0_1_ = 0x25;
              word::~word((word *)local_8c);
              SensorData::getSolutionString(this_00);
              local_8._0_1_ = 0x27;
              pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
              local_8._0_1_ = 0x28;
              std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
              word::~word((word *)local_8c);
              local_8._0_1_ = 0x25;
              word::~word((word *)local_74);
              if (1.0 <= *(float *)(this_00 + 0x40)) {
                strUsingArgs((char *)local_74);
                iVar20 = 0x10;
                local_8._0_1_ = 0x29;
                local_c0 = (undefined1 *)0x10;
              }
              pbVar10 = (basic_string<> *)strUsingArgs((char *)local_8c);
              local_8 = 0x2a;
              std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
              word::~word((word *)local_8c);
              local_8._0_1_ = 0x25;
            }
            local_8._1_3_ = 0;
            if (iVar20 != 0) {
              word::~word((word *)local_74);
            }
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            goto LAB_005844c3;
          }
          std::basic_string<>::append((basic_string<> *)local_2c,"`2Type: `$Beacon\n",0x11);
          strUsingArgs((char *)local_a4);
          local_8._0_1_ = 0x19;
          pbVar10 = (basic_string<> *)strUsingArgs((char *)local_44);
          local_8._0_1_ = 0x1a;
          std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
          local_8._0_1_ = 0x19;
          if (0xf < local_30) {
            pnVar17 = (nothrow_t *)(local_30 + 1);
            pvVar15 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar17) {
              pvVar15 = *(void **)((int)local_44[0] + -4);
              pnVar17 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
            }
            operator_delete(pvVar15,pnVar17);
          }
          SensorData::getSolutionString(this_00);
          local_8._0_1_ = 0x1b;
          pbVar10 = (basic_string<> *)strUsingArgs((char *)local_5c);
          local_8._0_1_ = 0x1c;
          std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
          local_8._0_1_ = 0x1b;
          if (0xf < local_48) {
            pnVar17 = (nothrow_t *)(local_48 + 1);
            pvVar15 = local_5c[0];
            if ((nothrow_t *)0xfff < pnVar17) {
              pvVar15 = *(void **)((int)local_5c[0] + -4);
              pnVar17 = (nothrow_t *)(local_48 + 0x24);
              if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
            }
            operator_delete(pvVar15,pnVar17);
          }
          local_8._0_1_ = 0x19;
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          if (0xf < local_30) {
            pnVar17 = (nothrow_t *)(local_30 + 1);
            pvVar15 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar17) {
              pvVar15 = *(void **)((int)local_44[0] + -4);
              pnVar17 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
            }
            operator_delete(pvVar15,pnVar17);
          }
          fVar9 = *(float *)(this_00 + 0x40);
          if (1.0 <= fVar9) {
            strUsingArgs((char *)local_44);
            local_8._0_1_ = 0x1d;
            local_c0 = &DAT_00000004;
          }
          pbVar10 = (basic_string<> *)strUsingArgs((char *)local_5c);
          local_8 = 0x1e;
          std::basic_string<>::append((basic_string<> *)local_2c,pbVar10);
          local_8._0_1_ = 0x1d;
          if (0xf < local_48) {
            pnVar17 = (nothrow_t *)(local_48 + 1);
            pvVar15 = local_5c[0];
            if ((nothrow_t *)0xfff < pnVar17) {
              pvVar15 = *(void **)((int)local_5c[0] + -4);
              pnVar17 = (nothrow_t *)(local_48 + 0x24);
              if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
            }
            operator_delete(pvVar15,pnVar17);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          local_8._0_1_ = 0x19;
          local_8._1_3_ = 0;
          pvVar15 = local_a4[0];
          uVar18 = local_90;
          if ((1.0 <= fVar9) && (0xf < local_30)) {
            pnVar17 = (nothrow_t *)(local_30 + 1);
            pvVar15 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar17) {
              pvVar15 = *(void **)((int)local_44[0] + -4);
              pnVar17 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) goto LAB_00583119;
            }
            operator_delete(pvVar15,pnVar17);
            pvVar15 = local_a4[0];
            uVar18 = local_90;
          }
        }
      }
joined_r0x005838f8:
      local_8._0_1_ = 0;
      if (0xf < uVar18) {
        local_8._0_1_ = 0;
        pnVar17 = (nothrow_t *)(uVar18 + 1);
        pvVar16 = pvVar15;
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar16 = *(void **)((int)pvVar15 + -4);
          pnVar17 = (nothrow_t *)(uVar18 + 0x24);
          if (0x1f < (uint)((int)pvVar15 + (-4 - (int)pvVar16))) goto LAB_00583119;
        }
        operator_delete(pvVar16,pnVar17);
      }
    }
  }
LAB_005844c3:
  uVar18 = local_18;
  pbVar23 = local_2c[0];
  this_01 = (basic_string<> *)(local_d0 + 0x428);
  pbVar12 = this_01;
  if (0xf < *(uint *)(local_d0 + 0x43c)) {
    pbVar12 = *(basic_string<> **)this_01;
  }
  bVar3 = std::_Traits_equal<>((char *)pbVar12,*(uint *)(local_d0 + 0x438),pcVar4,unaff_EDI);
  if (!bVar3) {
    if (this_01 != (basic_string<> *)local_2c) {
      pbVar12 = (basic_string<> *)local_2c;
      if (0xf < uVar18) {
        pbVar12 = pbVar23;
      }
      std::basic_string<>::assign(this_01,(char *)pbVar12,local_1c);
    }
    (**(code **)(*(int *)local_d0 + 0x294))();
    uVar18 = local_18;
    pbVar23 = local_2c[0];
  }
  if (0xf < uVar18) {
    pnVar17 = (nothrow_t *)(uVar18 + 1);
    pbVar12 = pbVar23;
    if ((nothrow_t *)0xfff < pnVar17) {
      pbVar12 = *(basic_string<> **)(pbVar23 + -4);
      pnVar17 = (nothrow_t *)(uVar18 + 0x24);
      if ((basic_string<> *)0x1f < pbVar23 + (-4 - (int)pbVar12)) {
LAB_00583119:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar12,pnVar17);
  }
LAB_00584555:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
