#include "../ois.exe.h"


// public: virtual void * __thiscall Screen_Custom::`vector deleting destructor'(unsigned int)

void * __thiscall Screen_Custom::_vector_deleting_destructor_(Screen_Custom *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  *(undefined ***)this = vftable;
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 0x28) - (int)pvVar1 & 0xfffffff8);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x2c);
  }
  return this;
}


// public: virtual void __thiscall Screen_Custom::cleanup(void)

void __thiscall Screen_Custom::cleanup(Screen_Custom *this)

{
  if (*(int *)(this + 0xc) != 0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}


// public: virtual void __thiscall Screen_Custom::configure(void)

void __thiscall Screen_Custom::configure(Screen_Custom *this)

{
  basic_string<> *pbVar1;
  int iVar3;
  int iVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    configureElements(this);
    iVar2 = *(int *)(this + 0x10);
    iVar3 = *(int *)(this + 0xc);
    if ((vector<> *)(iVar3 + 0x94) != (vector<> *)(iVar2 + 0x70)) {
      std::vector<>::_Assign_range<>
                ((vector<> *)(iVar3 + 0x94),*(undefined4 *)(iVar2 + 0x70),
                 *(undefined4 *)(iVar2 + 0x74),this);
      iVar2 = *(int *)(this + 0x10);
      iVar3 = *(int *)(this + 0xc);
    }
    pbVar1 = (basic_string<> *)(iVar2 + 0x7c);
    if ((basic_string<> *)(iVar3 + 0xb8) != pbVar1) {
      if (0xf < *(uint *)(iVar2 + 0x90)) {
        pbVar1 = *(basic_string<> **)pbVar1;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(iVar3 + 0xb8),(char *)pbVar1,*(uint *)(iVar2 + 0x8c));
    }
  }
  return;
}


// public: void __thiscall Screen_Custom::configureElements(void)

void __thiscall Screen_Custom::configureElements(Screen_Custom *this)

{
  AnimationFrames **ppAVar1;
  uint uVar2;
  uint uVar3;
  Ref *pRVar4;
  int iVar5;
  double *pdVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  Widget *pWVar9;
  int iVar10;
  float *pfVar11;
  Vec2 *pVVar12;
  double *pdVar13;
  int iVar14;
  Vec2 local_150 [8];
  Vec2 local_148 [8];
  Vec2 local_140 [8];
  Vec2 local_138 [8];
  Vec2 local_130 [8];
  Vec2 local_128 [8];
  Vec2 local_120 [8];
  ScreenElement *local_118;
  ScreenElement *local_114;
  ScreenElement *local_110;
  ScreenElement *local_10c;
  UI_Sheet *local_108;
  UI_Menu *local_104;
  UI_DMenu *local_100;
  UI_IconTray *local_fc;
  UI_TextField *local_f8;
  UI_ModuleRepair *local_f4;
  ScreenElement *local_f0;
  UI_NavMap *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  Vec2 local_a0 [8];
  Vec2 local_98 [8];
  Vec2 local_90 [8];
  Vec2 local_88 [8];
  ScreenElement *local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  ScreenElement *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  double local_24;
  undefined8 local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7bf2;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(this + 0x10);
  if (*(char *)(iVar5 + 0x5b) != '\0') {
    this[4] = (Screen_Custom)0x1;
  }
  if (*(char *)(iVar5 + 0x5a) != '\0') {
    this[6] = (Screen_Custom)0x1;
  }
  iVar10 = *(int *)(iVar5 + 0x68) - *(int *)(iVar5 + 100);
  local_28 = 0;
  iVar5 = iVar10 >> 0x1f;
  if (iVar10 / 0x188 + iVar5 != iVar5) {
    do {
      iVar14 = local_28 * 0x188;
      this[0x14] = *(Screen_Custom *)(*(int *)(this + 0xc) + 0x51);
      iVar5 = *(int *)(this + 0x10);
      iVar10 = *(int *)(iVar5 + 100);
      local_1c = (double)CONCAT44((undefined4 *)(iVar10 + iVar14),(undefined4)local_1c);
      switch(*(undefined4 *)(iVar10 + iVar14)) {
      case 0:
        renderText(this,(Widget *)(iVar14 + iVar10));
        break;
      case 1:
      case 2:
        renderPercentileBar(this,(Widget *)(iVar14 + iVar10));
        break;
      case 3:
      case 4:
        renderBDBar(this,(Widget *)(iVar14 + iVar10));
        break;
      case 5:
        this[4] = (Screen_Custom)0x1;
        renderButton(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14),false);
        break;
      case 6:
        this[4] = (Screen_Custom)0x1;
        renderButton(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14),true);
        break;
      case 7:
        renderImage(this,(Widget *)(iVar14 + iVar10));
        break;
      case 8:
        pRVar4 = operator_new(0x448);
        local_8 = 0;
        local_10c = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)local_1c._4_4_,(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_Data::vftable;
        *(undefined4 *)(pRVar4 + 0x438) = 0;
        *(undefined4 *)(pRVar4 + 0x43c) = 0xf;
        *(ScreenElement *)(pRVar4 + 0x428) = (ScreenElement)0x0;
        *(undefined4 *)(pRVar4 + 0x440) = 0;
        *(undefined4 *)(pRVar4 + 0x444) = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_8 = 1;
        (**(code **)(*(int *)pRVar4 + 0xa0))(&local_a8);
        local_64 = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_60 = (float)iVar5;
        local_8 = 2;
        pfVar11 = &local_64;
        goto LAB_00542215;
      case 9:
        this[4] = (Screen_Custom)0x1;
        renderHelmControl(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 10:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        local_1c = 0.0;
        local_ec = operator_new(0x510);
        local_8 = 0xf;
        pRVar4 = (Ref *)UI_NavMap::UI_NavMap
                                  (local_ec,*(ScreenInterface **)(this + 0xc),
                                   (Widget *)(iVar5 + iVar14),
                                   (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_d0 = 0;
        local_cc = 0;
        local_8 = 0x10;
        (**(code **)(*(int *)pRVar4 + 0xa0))(&local_d0);
        local_5c = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_58 = (float)iVar5;
        local_8 = 0x11;
        (**(code **)(*(int *)pRVar4 + 0x4c))(&local_5c);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        cocos2d::Ref::retain(pRVar4);
        pRVar4[0x419] = (Ref)0x1;
        pdVar6 = *(double **)(this + 0x24);
        if (*(double **)(this + 0x28) == pdVar6) {
          std::vector<>::_Emplace_reallocate<double>
                    ((vector<> *)(this + 0x20),pdVar6,(double *)&local_1c);
        }
        else {
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
          *pdVar6 = 0.0;
        }
        iVar5 = *(int *)(this + 0xc);
        local_1c = (double)CONCAT44(pRVar4,(undefined4)local_1c);
        ppAVar1 = *(AnimationFrames ***)(iVar5 + 0x194);
        if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(iVar5 + 400),ppAVar1,(AnimationFrames **)((int)&local_1c + 4));
          *(Ref **)(this + 0x18) = pRVar4;
          this[7] = (Screen_Custom)0x1;
        }
        else {
          *ppAVar1 = (AnimationFrames *)pRVar4;
          *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
          *(Ref **)(this + 0x18) = pRVar4;
          this[7] = (Screen_Custom)0x1;
        }
        break;
      case 0xb:
        renderSelectedObjectSummary(this,(Widget *)(iVar14 + iVar10));
        break;
      case 0xc:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        local_1c = 0.0;
        pRVar4 = operator_new(0x440);
        local_8 = 0x12;
        local_80 = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)(iVar5 + iVar14),(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_PowerScreen::vftable;
        *(undefined4 *)(pRVar4 + 0x430) = 0;
        *(undefined4 *)(pRVar4 + 0x434) = 0;
        *(undefined4 *)(pRVar4 + 0x438) = 0;
        *(ScreenElement *)(pRVar4 + 0x2dc) = (ScreenElement)0x1;
        *(ScreenElement *)(pRVar4 + 0x284) = (ScreenElement)0x1;
        *(ScreenElement *)(pRVar4 + 0x286) = (ScreenElement)0x1;
        local_d8 = 0;
        local_d4 = 0;
        local_8 = 0x13;
        (**(code **)(*(int *)pRVar4 + 0xa0))(&local_d8);
        local_44 = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_40 = (float)iVar5;
        local_8 = 0x14;
        (**(code **)(*(int *)pRVar4 + 0x4c))(&local_44);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        cocos2d::Ref::retain(pRVar4);
        pdVar6 = *(double **)(this + 0x24);
        if (*(double **)(this + 0x28) == pdVar6) {
          std::vector<>::_Emplace_reallocate<double>
                    ((vector<> *)(this + 0x20),pdVar6,(double *)&local_1c);
        }
        else {
          *pdVar6 = 0.0;
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
        }
        goto LAB_0054226c;
      case 0xd:
        local_24 = 0.0;
        pRVar4 = operator_new(0x448);
        local_8 = 0x15;
        local_f0 = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)local_1c._4_4_,(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_PowerDetailScreen::vftable;
        *(undefined4 *)(pRVar4 + 0x438) = 0;
        *(undefined4 *)(pRVar4 + 0x43c) = 0xf;
        *(ScreenElement *)(pRVar4 + 0x428) = (ScreenElement)0x0;
        *(undefined4 *)(pRVar4 + 0x440) = 0;
        local_e0 = 0;
        local_dc = 0;
        local_8 = 0x16;
        (**(code **)(*(int *)pRVar4 + 0xa0))(&local_e0);
        local_74 = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_70 = (float)iVar5;
        local_8 = 0x17;
        (**(code **)(*(int *)pRVar4 + 0x4c))(&local_74);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        cocos2d::Ref::retain(pRVar4);
        pdVar6 = *(double **)(this + 0x24);
        if (*(double **)(this + 0x28) == pdVar6) {
          std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar6,&local_24);
        }
        else {
          *pdVar6 = 0.0;
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
        }
        goto LAB_0054226c;
      case 0xe:
        pRVar4 = operator_new(0x430);
        local_8 = 0xc;
        local_118 = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)local_1c._4_4_,(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_Border::vftable;
        *(undefined4 *)(pRVar4 + 0x428) = 0;
        local_c8 = 0;
        local_c4 = 0;
        local_8 = 0xd;
        cocos2d::Node::setAnchorPoint((Node *)pRVar4,(Vec2 *)&local_c8);
        local_54 = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_50 = (float)iVar5;
        local_8 = 0xe;
        pfVar11 = &local_54;
        goto LAB_00542215;
      case 0xf:
        this[4] = (Screen_Custom)0x1;
        renderEngPanel(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x10:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        local_f4 = operator_new(0x560);
        local_8 = 0x1b;
        pRVar4 = (Ref *)UI_ModuleRepair::UI_ModuleRepair
                                  (local_f4,*(ScreenInterface **)(this + 0xc),
                                   (Widget *)(iVar5 + iVar14),
                                   (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_8 = 0xffffffff;
        uVar8 = cocos2d::Vec2::Vec2(local_120,0.0,0.0);
        local_8 = 0x1c;
        (**(code **)(*(int *)pRVar4 + 0xa0))(uVar8);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_120);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + *(int *)(pRVar4 + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_88,(float)*(int *)(pRVar4 + 0x298),(float)iVar5);
        local_8 = 0x1d;
        (**(code **)(*(int *)pRVar4 + 0x4c))(local_88);
        pVVar12 = local_88;
        goto LAB_00542ca3;
      case 0x11:
        this[4] = (Screen_Custom)0x1;
        renderComponentStorage(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x12:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        pRVar4 = operator_new(0x448);
        local_8 = 0x18;
        local_34 = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)(iVar5 + iVar14),(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_Multimeter::vftable;
        *(undefined4 *)(pRVar4 + 0x428) = 0;
        *(undefined4 *)(pRVar4 + 0x42c) = 0;
        *(undefined4 *)(pRVar4 + 0x430) = 0;
        *(undefined4 *)(pRVar4 + 0x434) = 0;
        *(undefined4 *)(pRVar4 + 0x438) = 0;
        *(undefined4 *)(pRVar4 + 0x43c) = 0xc2ac0000;
        *(undefined4 *)(pRVar4 + 0x440) = 0xc2ac0000;
        *(ScreenElement *)(pRVar4 + 0x444) = (ScreenElement)0x0;
        *(ScreenElement *)(pRVar4 + 0x286) = (ScreenElement)0x1;
        local_e8 = 0;
        local_e4 = 0;
        local_8 = 0x19;
        cocos2d::Node::setAnchorPoint((Node *)pRVar4,(Vec2 *)&local_e8);
        local_7c = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_78 = (float)iVar5;
        local_8 = 0x1a;
        (**(code **)(*(int *)pRVar4 + 0x4c))(&local_7c);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        cocos2d::Ref::retain(pRVar4);
        pdVar6 = *(double **)(this + 0x24);
        local_24 = 0.0;
        if (*(double **)(this + 0x28) == pdVar6) goto LAB_00542bb0;
        goto LAB_00542258;
      case 0x13:
        renderShipHullState(this,(Widget *)(iVar14 + iVar10));
        break;
      case 0x14:
        renderSensorDisplay(this,(Widget *)(iVar14 + iVar10));
        break;
      case 0x15:
        renderSensorWaveform(this,(Widget *)(iVar14 + iVar10));
        break;
      case 0x16:
        pRVar4 = operator_new(0x440);
        local_8 = 9;
        local_114 = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)local_1c._4_4_,(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_SensorSelect::vftable;
        *(undefined4 *)(pRVar4 + 0x428) = 0;
        *(undefined4 *)(pRVar4 + 0x42c) = 0;
        *(undefined4 *)(pRVar4 + 0x430) = 0xffffffff;
        *(undefined4 *)(pRVar4 + 0x434) = 0;
        *(undefined4 *)(pRVar4 + 0x438) = 0;
        *(undefined4 *)(pRVar4 + 0x43c) = 0;
        local_c0 = 0;
        local_bc = 0;
        local_8 = 10;
        (**(code **)(*(int *)pRVar4 + 0xa0))(&local_c0);
        local_4c = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_48 = (float)iVar5;
        local_8 = 0xb;
        pfVar11 = &local_4c;
        goto LAB_00542215;
      case 0x17:
        this[4] = (Screen_Custom)0x1;
        renderWeaponTubes(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x18:
        pRVar4 = operator_new(0x430);
        local_8 = 6;
        local_110 = (ScreenElement *)pRVar4;
        ScreenElement::ScreenElement
                  ((ScreenElement *)pRVar4,*(ScreenInterface **)(this + 0xc),
                   (Widget *)local_1c._4_4_,(bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        *(undefined ***)pRVar4 = UI_DockVisualisation::vftable;
        *(undefined4 *)(pRVar4 + 0x428) = 0;
        local_b8 = 0;
        local_b4 = 0;
        local_8 = 7;
        cocos2d::Node::setAnchorPoint((Node *)pRVar4,(Vec2 *)&local_b8);
        local_3c = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_38 = (float)iVar5;
        local_8 = 8;
        pfVar11 = &local_3c;
        goto LAB_00542215;
      case 0x19:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        local_f8 = operator_new(0x498);
        local_8 = 0x1e;
        pRVar4 = (Ref *)UI_TextField::UI_TextField
                                  (local_f8,*(ScreenInterface **)(this + 0xc),
                                   (Widget *)(iVar5 + iVar14),
                                   (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_8 = 0xffffffff;
        uVar8 = cocos2d::Vec2::Vec2(local_128,0.0,0.0);
        local_8 = 0x1f;
        (**(code **)(*(int *)pRVar4 + 0xa0))(uVar8);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_128);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + *(int *)(pRVar4 + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_90,(float)*(int *)(pRVar4 + 0x298),(float)iVar5);
        local_8 = 0x20;
        (**(code **)(*(int *)pRVar4 + 0x4c))(local_90);
        pVVar12 = local_90;
        goto LAB_00542ca3;
      case 0x1a:
        this[4] = (Screen_Custom)0x1;
        renderTextBox(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x1b:
        this[4] = (Screen_Custom)0x1;
        renderSlider(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x1c:
        this[4] = (Screen_Custom)0x1;
        renderSelector(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x1d:
        this[4] = (Screen_Custom)0x1;
        renderSelectTray(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x1e:
        this[4] = (Screen_Custom)0x1;
        renderCheckbox(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x1f:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        local_104 = operator_new(0x478);
        local_8 = 0x27;
        pRVar4 = (Ref *)UI_Menu::UI_Menu(local_104,*(ScreenInterface **)(this + 0xc),
                                         (Widget *)(iVar5 + iVar14),
                                         (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_8 = 0xffffffff;
        uVar8 = cocos2d::Vec2::Vec2(local_150,0.0,0.0);
        local_8 = 0x28;
        (**(code **)(*(int *)pRVar4 + 0xa0))(uVar8);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_150);
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + *(int *)(pRVar4 + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_a0,(float)*(int *)(pRVar4 + 0x298),(float)iVar5);
        local_8 = 0x29;
        (**(code **)(*(int *)pRVar4 + 0x4c))(local_a0);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_a0);
        goto LAB_00542cc9;
      case 0x20:
        this[4] = (Screen_Custom)0x1;
        renderSystemBar(this,(Widget *)(*(int *)(iVar5 + 100) + iVar14));
        break;
      case 0x21:
        this[4] = (Screen_Custom)0x1;
        pWVar9 = (Widget *)(*(int *)(iVar5 + 100) + iVar14);
        local_fc = operator_new(0x4a0);
        local_8 = 0x21;
        pRVar4 = (Ref *)UI_IconTray::UI_IconTray
                                  (local_fc,*(ScreenInterface **)(this + 0xc),pWVar9,
                                   (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_8 = 0xffffffff;
        local_1c._4_4_ = pRVar4;
        uVar8 = cocos2d::Vec2::Vec2(local_130,0.0,0.0);
        local_8 = 0x22;
        (**(code **)(*(int *)local_1c._4_4_ + 0xa0))(uVar8);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_130);
        cocos2d::Vec2::Vec2((Vec2 *)&local_30);
        local_8 = 0x23;
        if (this[0x14] == (Screen_Custom)0x0) {
          puVar7 = (undefined4 *)
                   cocos2d::Vec2::Vec2(local_140,(float)*(int *)(pWVar9 + 8),
                                       (float)(*(int *)(pWVar9 + 0x14) + *(int *)(pWVar9 + 0xc)));
          local_30 = *puVar7;
          pVVar12 = local_140;
        }
        else {
          puVar7 = (undefined4 *)
                   cocos2d::Vec2::Vec2(local_138,(float)*(int *)(pWVar9 + 8),
                                       (float)(*(int *)(pWVar9 + 0xc) +
                                              *(int *)(pWVar9 + 0x14) + 0xc));
          local_30 = *puVar7;
          pVVar12 = local_138;
        }
        local_2c = puVar7[1];
        cocos2d::Vec2::~Vec2(pVVar12);
        pRVar4 = local_1c._4_4_;
        (**(code **)(*(int *)local_1c._4_4_ + 0x4c))(&local_30);
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        cocos2d::Ref::retain(pRVar4);
        pdVar6 = *(double **)(this + 0x24);
        local_24 = 0.0;
        if (*(double **)(this + 0x28) == pdVar6) {
          std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar6,&local_24);
        }
        else {
          *pdVar6 = 0.0;
          *(double **)(this + 0x24) = pdVar6 + 1;
        }
        iVar5 = *(int *)(this + 0xc);
        local_1c = (double)CONCAT44(pRVar4,(undefined4)local_1c);
        ppAVar1 = *(AnimationFrames ***)(iVar5 + 0x194);
        if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(iVar5 + 400),ppAVar1,(AnimationFrames **)((int)&local_1c + 4));
        }
        else {
          *ppAVar1 = (AnimationFrames *)pRVar4;
          *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
        }
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_30);
        break;
      case 0x22:
        this[4] = (Screen_Custom)0x1;
        iVar5 = *(int *)(iVar5 + 100);
        local_100 = operator_new(0x470);
        local_8 = 0x24;
        pRVar4 = (Ref *)UI_DMenu::UI_DMenu(local_100,*(ScreenInterface **)(this + 0xc),
                                           (Widget *)(iVar5 + iVar14),
                                           (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_8 = 0xffffffff;
        uVar8 = cocos2d::Vec2::Vec2(local_148,0.0,0.0);
        local_8 = 0x25;
        (**(code **)(*(int *)pRVar4 + 0xa0))(uVar8);
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(local_148);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + *(int *)(pRVar4 + 0x2a4) + 0xc;
        }
        cocos2d::Vec2::Vec2(local_98,(float)*(int *)(pRVar4 + 0x298),(float)iVar5);
        local_8 = 0x26;
        (**(code **)(*(int *)pRVar4 + 0x4c))(local_98);
        pVVar12 = local_98;
LAB_00542ca3:
        local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(pVVar12);
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
LAB_00542cc9:
        cocos2d::Ref::retain(pRVar4);
        pdVar6 = *(double **)(this + 0x24);
        local_24 = 0.0;
        if (*(double **)(this + 0x28) == pdVar6) {
LAB_00542bb0:
          local_24 = 0.0;
          pdVar13 = &local_24;
          goto LAB_00542265;
        }
        *pdVar6 = 0.0;
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
        goto LAB_0054226c;
      case 0x23:
        renderAdShell(this,(Widget *)(iVar14 + iVar10));
        break;
      case 0x24:
        renderNewsTicker(this,(Widget *)(iVar14 + iVar10));
        break;
      case 0x25:
        local_108 = operator_new(0x4c0);
        local_8 = 3;
        pRVar4 = (Ref *)UI_Sheet::UI_Sheet(local_108,*(ScreenInterface **)(this + 0xc),
                                           (Widget *)(iVar14 + iVar10),
                                           (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
        local_b0 = 0;
        local_ac = 0;
        local_8 = 4;
        (**(code **)(*(int *)pRVar4 + 0xa0))(&local_b0,uVar3);
        local_6c = (float)*(int *)(pRVar4 + 0x298);
        if (this[0x14] == (Screen_Custom)0x0) {
          iVar5 = *(int *)(pRVar4 + 0x2a4) + *(int *)(pRVar4 + 0x29c);
        }
        else {
          iVar5 = *(int *)(pRVar4 + 0x29c) + 0xc + *(int *)(pRVar4 + 0x2a4);
        }
        local_68 = (float)iVar5;
        local_8 = 5;
        pfVar11 = &local_6c;
LAB_00542215:
        (**(code **)(*(int *)pRVar4 + 0x4c))(pfVar11);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pRVar4 + 0x2c))(&DAT_bf800000);
        (**(code **)(*(int *)pRVar4 + 0x294))();
        cocos2d::Ref::retain(pRVar4);
        pdVar6 = *(double **)(this + 0x24);
        local_1c = 0.0;
        if (*(double **)(this + 0x28) == pdVar6) {
          pdVar13 = (double *)&local_1c;
LAB_00542265:
          std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar6,pdVar13);
        }
        else {
LAB_00542258:
          *pdVar6 = 0.0;
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
        }
LAB_0054226c:
        iVar5 = *(int *)(this + 0xc);
        local_1c = (double)CONCAT44(pRVar4,(undefined4)local_1c);
        ppAVar1 = *(AnimationFrames ***)(iVar5 + 0x194);
        if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(iVar5 + 400),ppAVar1,(AnimationFrames **)((int)&local_1c + 4));
        }
        else {
          *ppAVar1 = (AnimationFrames *)pRVar4;
          *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
        }
        break;
      case 0x26:
        renderIntroSequence(this,(Widget *)(iVar14 + iVar10));
      }
      uVar2 = local_28;
      iVar5 = *(int *)(*(int *)(this + 0xc) + 400);
      *(uint *)(*(int *)(iVar5 + -4 + (*(int *)(*(int *)(this + 0xc) + 0x194) - iVar5 >> 2) * 4) +
               0x280) = local_28;
      iVar5 = *(int *)(this + 0x10);
      pWVar9 = (Widget *)(*(int *)(iVar5 + 100) + iVar14);
      if ((*(int *)(pWVar9 + 0x7c) != 0) || (*(int *)(pWVar9 + 0xf4) != 0)) {
        updateExistence(this,pWVar9,local_28);
        iVar5 = *(int *)(this + 0x10);
      }
      local_28 = uVar2 + 1;
    } while (local_28 < (uint)((*(int *)(iVar5 + 0x68) - *(int *)(iVar5 + 100)) / 0x188));
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall Screen_Custom::render(void)

void __thiscall Screen_Custom::render(Screen_Custom *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(*(int *)(this + 0xc) + 400);
  if (*(int *)(*(int *)(this + 0xc) + 0x194) - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x294))();
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(*(int *)(this + 0xc) + 400);
    } while (uVar2 < (uint)(*(int *)(*(int *)(this + 0xc) + 0x194) - iVar1 >> 2));
  }
  return;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderPercentileBar(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderPercentileBar(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  Ref *this_00;
  undefined2 *puVar4;
  int iVar5;
  float10 fVar6;
  float in_stack_ffffffb0;
  float local_28;
  float local_24;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pWVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7c34;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (double)(ulonglong)(uint)local_20;
  local_24 = *(float *)(g_gameData + 0xd0);
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0xac) + 8))
                             (&local_24,(int)&local_20 + 4,
                              ___security_cookie ^ (uint)&stack0xfffffffc);
  local_20 = (double)fVar6;
  param_1 = operator_new(0x460);
  local_8 = 0;
  this_00 = (Ref *)UI_StatusBar::UI_StatusBar
                             ((UI_StatusBar *)param_1,*(ScreenInterface **)(this + 0xc),pWVar3,
                              (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70),in_stack_ffffffb0,
                              100.0,*(int *)(pWVar3 + 0x10),*(int *)(pWVar3 + 0x14));
  local_8 = 0xffffffff;
  puVar4 = (undefined2 *)
           cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),'\x18','\x18','\x18');
  local_28 = 0.0;
  local_24 = 0.0;
  *(undefined2 *)(this_00 + 0x444) = *puVar4;
  this_00[0x446] = *(Ref *)(puVar4 + 1);
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_28);
  local_28 = (float)*(int *)(this_00 + 0x298);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_24 = (float)iVar5;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_28);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  pdVar1 = *(double **)(this + 0x24);
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = local_20;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return (ScreenElement *)this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderBDBar(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderBDBar(Screen_Custom *this,Widget *param_1)

{
  ScreenInterface *pSVar1;
  double *pdVar2;
  AnimationFrames **ppAVar3;
  Widget *pWVar4;
  Ref *this_00;
  undefined2 *puVar5;
  int iVar6;
  float10 fVar7;
  float local_28;
  float local_24;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pWVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7c74;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (double)(ulonglong)(uint)local_20;
  local_24 = *(float *)(g_gameData + 0xd0);
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0xac) + 8))
                             (&local_24,(int)&local_20 + 4,
                              ___security_cookie ^ (uint)&stack0xfffffffc);
  local_20 = (double)fVar7;
  param_1 = operator_new(0x458);
  local_8 = 0;
  pSVar1 = *(ScreenInterface **)(this + 0xc);
  this_00 = (Ref *)UI_BDBar::UI_BDBar((UI_BDBar *)param_1,pSVar1,pWVar4,(bool *)(pSVar1 + 0x70),
                                      (float)pSVar1,*(int *)(pWVar4 + 0x10),*(int *)(pWVar4 + 0x14))
  ;
  local_8 = 0xffffffff;
  puVar5 = (undefined2 *)
           cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),'\x18','\x18','\x18');
  local_28 = 0.0;
  local_24 = 0.0;
  *(undefined2 *)(this_00 + 0x448) = *puVar5;
  this_00[0x44a] = *(Ref *)(puVar5 + 1);
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_28);
  local_28 = (float)*(int *)(this_00 + 0x298);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_24 = (float)iVar6;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_28);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  pdVar2 = *(double **)(this + 0x24);
  if (*(double **)(this + 0x28) == pdVar2) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar2,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar2 = local_20;
  }
  iVar6 = *(int *)(this + 0xc);
  ppAVar3 = *(AnimationFrames ***)(iVar6 + 0x194);
  if (*(AnimationFrames ***)(iVar6 + 0x198) == ppAVar3) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar6 + 400),ppAVar3,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar3 = (AnimationFrames *)this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return (ScreenElement *)this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderButton(class Widget &,bool)

ScreenElement * __thiscall
Screen_Custom::renderButton(Screen_Custom *this,Widget *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double *pdVar3;
  AnimationFrames **ppAVar4;
  bool bVar5;
  ScreenElement *this_00;
  Screen_Custom *pSVar6;
  int iVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined3 in_stack_00000009;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined8 local_1c;
  Screen_Custom *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7cc4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  local_1c._4_4_ = operator_new(0x460);
  local_8 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  std::basic_string<>::basic_string<>((basic_string<> *)local_34,(basic_string<> *)(param_1 + 0x1c))
  ;
  this_00 = local_1c._4_4_;
  local_8._0_1_ = 1;
  ScreenElement::ScreenElement
            (local_1c._4_4_,*(ScreenInterface **)(local_14 + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(local_14 + 0xc) + 0x70));
  local_8._0_1_ = 2;
  *(undefined4 *)(this_00 + 0x42c) = uVar1;
  bVar5 = param_2;
  *(undefined ***)this_00 = UI_Button::vftable;
  *(undefined4 *)(this_00 + 0x428) = uVar2;
  this_00[0x430] = (ScreenElement)param_2;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this_00 + 0x434),(basic_string<> *)local_34);
  *(undefined2 *)(this_00 + 0x44c) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  this_00[0x284] = (ScreenElement)(bVar5 == false);
  *(undefined4 *)(this_00 + 0x450) = 0;
  *(undefined4 *)(this_00 + 0x454) = 0;
  *(undefined4 *)(this_00 + 0x458) = 0;
  if (0xf < local_20) {
    pnVar9 = (nothrow_t *)(local_20 + 1);
    pvVar8 = local_34[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_34[0] + -4);
      pnVar9 = (nothrow_t *)(local_20 + 0x24);
      if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  local_1c = 0.0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_1c);
  pSVar6 = local_14;
  if (local_14[0x14] == (Screen_Custom)0x0) {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_1c = (double)CONCAT44((float)iVar7,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_1c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar3 = *(double **)(pSVar6 + 0x24);
  local_1c = 0.0;
  if (*(double **)(pSVar6 + 0x28) == pdVar3) {
    std::vector<>::_Emplace_reallocate<double>
              ((vector<> *)(pSVar6 + 0x20),pdVar3,(double *)&local_1c);
  }
  else {
    *(int *)(pSVar6 + 0x24) = *(int *)(pSVar6 + 0x24) + 8;
    *pdVar3 = 0.0;
  }
  iVar7 = *(int *)(pSVar6 + 0xc);
  _param_2 = (AnimationFrames *)this_00;
  ppAVar4 = *(AnimationFrames ***)(iVar7 + 0x194);
  if (*(AnimationFrames ***)(iVar7 + 0x198) == ppAVar4) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar7 + 400),ppAVar4,(AnimationFrames **)&param_2);
  }
  else {
    *ppAVar4 = (AnimationFrames *)this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderEngPanel(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderEngPanel(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  uint uVar3;
  ScreenElement *this_00;
  int iVar4;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7d04;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x448);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_EngPanel::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  this_00[0x2dc] = (ScreenElement)0x1;
  this_00[0x286] = (ScreenElement)0x1;
  this_00[0x284] = (ScreenElement)0x1;
  *(undefined4 *)(this_00 + 0x41c) = 200;
  local_20 = 0.0;
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar4 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar4 + 0x194);
  if (*(AnimationFrames ***)(iVar4 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar4 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderComponentStorage(class Widget &)

ScreenElement * __thiscall
Screen_Custom::renderComponentStorage(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  bool bVar4;
  ScreenElement *this_00;
  int iVar5;
  uint local_48;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7d68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x450);
  pWVar3 = param_1;
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_ComponentStorage::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  local_48 = local_48 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_48,"invmode",7);
  bVar4 = Widget::getOptionAsBool(pWVar3);
  if (bVar4) {
    iVar5 = *(int *)(g_gameData + 0xd0) + 0x1d4;
  }
  else {
    iVar5 = *(int *)(g_gameData + 0xd0) + 0x1dc;
  }
  *(int *)(this_00 + 0x438) = iVar5;
  this_00[0x286] = (ScreenElement)0x1;
  this_00[0x284] = (ScreenElement)0x1;
  local_48 = local_48 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_48,"nodrag",6);
  bVar4 = Widget::getOptionAsBool(pWVar3);
  if (!bVar4) {
    *(undefined4 *)(this_00 + 0x41c) = 100;
  }
  UI_ComponentStorage::specialDataCheckFunction((UI_ComponentStorage *)this_00,0.0);
  local_20 = 0.0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))();
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))();
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    local_48 = 0x543d17;
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    local_48 = 0x543d3d;
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderWeaponTubes(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderWeaponTubes(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  uint uVar3;
  ScreenElement *this_00;
  Size *pSVar4;
  int iVar5;
  bool bVar6;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7dd8;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x440);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_WeaponTubes::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar6 = ShipData::currentlyBoardedShip != (Ship *)0x0;
  this_00[0x2dc] = (ScreenElement)0x1;
  this_00[0x284] = (ScreenElement)0x1;
  this_00[0x286] = (ScreenElement)0x1;
  if (bVar6) {
    (**(code **)(*(int *)this_00 + 0x294))(uVar3);
  }
  pSVar4 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this_00,pSVar4);
  local_20 = 0.0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderImage(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderImage(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  UI_Image *pUVar4;
  Ref *this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pWVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7e36;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x50) < 2) {
    pUVar4 = operator_new(0x498);
    local_8 = 1;
    param_1 = (Widget *)pUVar4;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&uStack_48,(basic_string<> *)(pWVar3 + 0x1c));
    iVar5 = *(int *)(this + 0xc);
    uVar7 = 0;
    uVar6 = 1;
  }
  else {
    pUVar4 = operator_new(0x498);
    local_8 = 0;
    param_1 = (Widget *)pUVar4;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&uStack_48,(basic_string<> *)(pWVar3 + 0x1c));
    iVar5 = *(int *)(this + 0xc);
    uVar7 = *(undefined4 *)(pWVar3 + 0x54);
    uVar6 = *(undefined4 *)(pWVar3 + 0x50);
  }
  this_00 = (Ref *)UI_Image::UI_Image(pUVar4,iVar5,pWVar3,iVar5 + 0x70,uVar6,uVar7);
  local_20 = 0.0;
  this_00[0x468] = *(Ref *)(pWVar3 + 0x18);
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))();
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))();
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    uStack_48 = 0x5440d5;
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    uStack_48 = 0x5440fb;
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return (ScreenElement *)this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderIntroSequence(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderIntroSequence(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  GameLogic *pGVar3;
  ScreenElement *this_00;
  Size *pSVar4;
  int iVar5;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7ea8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x450);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_IntroSequence::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  pGVar3 = g_gameLogic;
  local_8 = CONCAT31(local_8._1_3_,3);
  if ((OISConfiguration::skipIntro == false) && (g_gameLogic[0x78] != (GameLogic)0x0)) {
    *(undefined4 *)(this_00 + 0x448) = 1;
    *(undefined4 *)(this_00 + 0x44c) = 0;
    *(undefined4 *)(this_00 + 0x440) = 0x3fc00000;
    *(undefined4 *)(this_00 + 0x444) = 0x3fc00000;
    pGVar3[5] = (GameLogic)0x1;
  }
  else {
    *(undefined4 *)(this_00 + 0x448) = 4;
    *(undefined4 *)(this_00 + 0x44c) = 0;
    *(undefined1 **)(this_00 + 0x440) = &DAT_bf800000;
    *(undefined1 **)(this_00 + 0x444) = &DAT_bf800000;
  }
  UI_IntroSequence::specialDataCheckFunction((UI_IntroSequence *)this_00,0.0);
  pSVar4 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this_00,pSVar4);
  local_20 = 0.0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderAdShell(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderAdShell(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  ScreenElement *this_00;
  Size *pSVar3;
  int iVar4;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  float *pfStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pfStack_c = &param_2_005c7f0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x448);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_AdShell::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0xffffffff;
  *(undefined1 **)(this_00 + 0x42c) = &DAT_bf800000;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  UI_AdShell::specialDataCheckFunction((UI_AdShell *)this_00,0.0);
  pSVar3 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this_00,pSVar3);
  local_20 = 0.0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar4 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar4 + 0x194);
  if (*(AnimationFrames ***)(iVar4 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar4 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderNewsTicker(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderNewsTicker(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  uint uVar3;
  ScreenElement *this_00;
  float *pfVar4;
  Size *pSVar5;
  int iVar6;
  float fVar7;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7f78;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x448);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_NewsTicker::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (*(int *)(this_00 + 0x430) - *(int *)(this_00 + 0x42c) >> 2 != 0) {
    *(float *)(this_00 + 0x428) = *(float *)(this_00 + 0x428) - 0.0;
    pfVar4 = (float *)(**(code **)(*(int *)**(undefined4 **)(this_00 + 0x42c) + 0xb0))(uVar3);
    fVar7 = *(float *)(this_00 + 0x428);
    if (fVar7 < 0.0 - *pfVar4) {
      fVar7 = (float)*(int *)(*(int *)(this_00 + 0x278) + 0x68);
      *(float *)(this_00 + 0x428) = fVar7;
    }
    (**(code **)(*(int *)**(undefined4 **)(this_00 + 0x42c) + 0x68))((float)(int)fVar7);
    **(undefined1 **)(this_00 + 0x288) = 1;
  }
  pSVar5 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this_00,pSVar5);
  local_20 = 0.0;
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar6,(float)*(int *)(this_00 + 0x298));
  local_8 = 5;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar6 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar6 + 0x194);
  if (*(AnimationFrames ***)(iVar6 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar6 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderShipHullState(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderShipHullState(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  uint uVar4;
  Ref *this_00;
  int iVar5;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  pWVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c7fd6;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 < 2) {
    param_1 = operator_new(0x4f8);
  }
  else {
    param_1 = operator_new(0x4f8);
  }
  local_8 = (uint)(iVar5 < 2);
  this_00 = (Ref *)UI_ShipHullState::UI_ShipHullState
                             ((UI_ShipHullState *)param_1,*(ScreenInterface **)(this + 0xc),pWVar3,
                              (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  local_20 = 0.0;
  this_00[0x428] = *(Ref *)(pWVar3 + 0x18);
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar4);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain(this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return (ScreenElement *)this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSensorWaveform(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderSensorWaveform(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  uint uVar4;
  ScreenElement *this_00;
  int iVar5;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  pWVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8036;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 < 2) {
    this_00 = operator_new(0x448);
  }
  else {
    this_00 = operator_new(0x448);
  }
  local_8 = (uint)(iVar5 < 2);
  param_1 = (Widget *)this_00;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),pWVar3,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_SensorWaveform::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  local_20 = 0.0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar4);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSensorDisplay(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderSensorDisplay(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  uint uVar3;
  ScreenElement *this_00;
  int iVar4;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8084;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x468);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_SensorDisplay::vftable;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0xf;
  this_00[0x428] = (ScreenElement)0x0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x458) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0xf;
  this_00[0x448] = (ScreenElement)0x0;
  *(undefined4 *)(this_00 + 0x460) = 0;
  local_20 = 0.0;
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar4 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar4 + 0x194);
  if (*(AnimationFrames ***)(iVar4 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar4 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSelectedObjectSummary(class Widget
// &)

ScreenElement * __thiscall
Screen_Custom::renderSelectedObjectSummary(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  uint uVar3;
  ScreenElement *this_00;
  int iVar4;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c80da;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x458);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_SelectedObjectSummary::vftable;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0xf;
  *(basic_string<> *)(this_00 + 0x428) = (basic_string<>)0x0;
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 0;
  *(undefined4 *)(this_00 + 0x450) = 0;
  std::basic_string<>::assign((basic_string<> *)(this_00 + 0x428),"`%Object: thing\nStuff: 2^",0x19)
  ;
  local_20 = 0.0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar4 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar4 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar4,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar4 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar4 + 0x194);
  if (*(AnimationFrames ***)(iVar4 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar4 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderText(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderText(Screen_Custom *this,Widget *param_1)

{
  Widget *pWVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  AnimationFrames **ppAVar5;
  Screen_Custom *pSVar6;
  uint uVar7;
  ScreenElement *this_00;
  int iVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  float10 fVar11;
  void *local_58 [4];
  undefined4 local_48;
  uint local_44;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  Screen_Custom *local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  pWVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8156;
  local_10 = ExceptionList;
  uVar7 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = this;
  if (*(int *)(param_1 + 0xac) == 0) {
    this_00 = operator_new(0x478);
    local_28 = (double)CONCAT44(this_00,(undefined4)local_28);
    local_8 = 3;
    uVar2 = *(undefined4 *)(pWVar1 + 0x14);
    uVar3 = *(undefined4 *)(pWVar1 + 0x10);
    std::basic_string<>::basic_string<>
              ((basic_string<> *)local_58,(basic_string<> *)(param_1 + 0x1c));
    local_8._0_1_ = 4;
    ScreenElement::ScreenElement
              (this_00,*(ScreenInterface **)(local_18 + 0xc),param_1,
               (bool *)(*(ScreenInterface **)(local_18 + 0xc) + 0x70));
    local_8._0_1_ = 5;
    *(undefined ***)this_00 = UI_Text::vftable;
    this_00[0x428] = (ScreenElement)0x1;
    *(undefined4 *)(this_00 + 0x42c) = uVar3;
    *(undefined4 *)(this_00 + 0x430) = uVar2;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)(this_00 + 0x434),(basic_string<> *)local_58);
    *(undefined4 *)(this_00 + 0x45c) = 0;
    *(undefined4 *)(this_00 + 0x460) = 0xf;
    this_00[0x44c] = (ScreenElement)0x0;
    *(undefined8 *)(this_00 + 0x468) = 0x4010000000000000;
    *(undefined4 *)(this_00 + 0x470) = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    if (0xf < local_44) {
      pnVar10 = (nothrow_t *)(local_44 + 1);
      pvVar9 = local_58[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_58[0] + -4);
        pnVar10 = (nothrow_t *)(local_44 + 0x24);
        if (0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    local_48 = 0;
    local_44 = 0xf;
    local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
  }
  else {
    this_00 = operator_new(0x478);
    local_28 = (double)CONCAT44(this_00,(undefined4)local_28);
    local_8 = 0;
    local_1c = 0;
    local_20 = *(undefined4 *)(g_gameData + 0xd0);
    if (*(int **)(pWVar1 + 0xac) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)(pWVar1 + 0xac) + 8))(&local_20,&local_1c,uVar7);
    uVar2 = *(undefined4 *)(pWVar1 + 0x14);
    uVar3 = *(undefined4 *)(pWVar1 + 0x10);
    std::basic_string<>::basic_string<>
              ((basic_string<> *)local_40,(basic_string<> *)(param_1 + 0x1c));
    local_8._0_1_ = 1;
    ScreenElement::ScreenElement
              (this_00,*(ScreenInterface **)(local_18 + 0xc),param_1,
               (bool *)(*(ScreenInterface **)(local_18 + 0xc) + 0x70));
    local_8._0_1_ = 2;
    *(undefined ***)this_00 = UI_Text::vftable;
    this_00[0x428] = (ScreenElement)0x0;
    *(undefined4 *)(this_00 + 0x42c) = uVar3;
    *(undefined4 *)(this_00 + 0x430) = uVar2;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)(this_00 + 0x434),(basic_string<> *)local_40);
    *(undefined4 *)(this_00 + 0x45c) = 0;
    *(undefined4 *)(this_00 + 0x460) = 0xf;
    this_00[0x44c] = (ScreenElement)0x0;
    *(undefined8 *)(this_00 + 0x468) = 0x4010000000000000;
    *(undefined4 *)(this_00 + 0x470) = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_2c) {
      pnVar10 = (nothrow_t *)(local_2c + 1);
      pvVar9 = local_40[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_40[0] + -4);
        pnVar10 = (nothrow_t *)(local_2c + 0x24);
        if (0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    local_30 = 0;
    local_2c = 0xf;
    local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
  }
  local_28 = 0.0;
  local_8 = 6;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_28);
  pSVar6 = local_18;
  if (local_18[0x14] == (Screen_Custom)0x0) {
    iVar8 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar8 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_28 = (double)CONCAT44((float)iVar8,(float)*(int *)(this_00 + 0x298));
  local_8 = 7;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_28);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  if (*(int *)(param_1 + 0xac) == 0) {
    local_28 = 0.0;
  }
  else {
    pWVar1 = param_1 + 0xac;
    param_1 = (Widget *)0x0;
    local_20 = *(undefined4 *)(g_gameData + 0xd0);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    fVar11 = (float10)(**(code **)(**(int **)pWVar1 + 8))(&local_20,&param_1);
    local_28 = (double)fVar11;
  }
  pdVar4 = *(double **)(pSVar6 + 0x24);
  if (*(double **)(pSVar6 + 0x28) == pdVar4) {
    std::vector<>::_Emplace_reallocate<double>
              ((vector<> *)(pSVar6 + 0x20),pdVar4,(double *)&local_28);
  }
  else {
    *(int *)(pSVar6 + 0x24) = *(int *)(pSVar6 + 0x24) + 8;
    *pdVar4 = local_28;
  }
  iVar8 = *(int *)(pSVar6 + 0xc);
  ppAVar5 = *(AnimationFrames ***)(iVar8 + 0x194);
  if (*(AnimationFrames ***)(iVar8 + 0x198) == ppAVar5) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar8 + 400),ppAVar5,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar5 = (AnimationFrames *)this_00;
    *(int *)(iVar8 + 0x194) = *(int *)(iVar8 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderHelmControl(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderHelmControl(Screen_Custom *this,Widget *param_1)

{
  int *piVar1;
  double *pdVar2;
  AnimationFrames **ppAVar3;
  GameData *pGVar4;
  char cVar5;
  uint uVar6;
  ScreenElement *this_00;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double local_28;
  float local_1c;
  ScreenElement *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c81ac;
  local_10 = ExceptionList;
  uVar6 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar8 = 0.0;
  local_28 = 0.0;
  this_00 = operator_new(0x450);
  local_8 = 0;
  local_18 = this_00;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  pGVar4 = g_gameData;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_HelmControl::vftable;
  this_00[0x284] = (ScreenElement)0x1;
  this_00[0x286] = (ScreenElement)0x1;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  iVar7 = *(int *)(pGVar4 + 0xd0);
  if (((iVar7 == 0) || (piVar1 = *(int **)(*(int *)(iVar7 + 0x40) + 0x24), piVar1 == (int *)0x0)) ||
     (cVar5 = (**(code **)(*piVar1 + 0x10))(0,uVar6), cVar5 == '\0')) {
    dVar9 = 0.0;
  }
  else if ((*(float *)(iVar7 + 0x118) == 0.0) && (fVar8 = *(float *)(iVar7 + 0x11c), fVar8 == 0.0))
  {
    dVar9 = (double)*(float *)(iVar7 + 0x120);
  }
  else {
    angleInDegreesFrom(0,0,*(float *)(iVar7 + 0x118),*(undefined4 *)(iVar7 + 0x11c));
    dVar9 = (double)fVar8;
  }
  pGVar4 = g_gameData;
  dVar10 = 0.0;
  *(double *)(this_00 + 0x438) = dVar9;
  dVar9 = PresentationData::m_selectedHeading;
  if (*(int *)(pGVar4 + 0xd0) != 0) {
    dVar10 = (double)*(float *)(*(int *)(pGVar4 + 0xd0) + 0x120);
  }
  *(double *)(this_00 + 0x440) = dVar10;
  *(double *)(this_00 + 0x448) = dVar9;
  local_1c = 0.0;
  local_18 = (ScreenElement *)0x0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_1c);
  local_1c = (float)*(int *)(this_00 + 0x298);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_18 = (ScreenElement *)(float)iVar7;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_1c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar2 = *(double **)(this + 0x24);
  if (*(double **)(this + 0x28) == pdVar2) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar2,&local_28);
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar2 = 0.0;
  }
  iVar7 = *(int *)(this + 0xc);
  ppAVar3 = *(AnimationFrames ***)(iVar7 + 0x194);
  if (*(AnimationFrames ***)(iVar7 + 0x198) == ppAVar3) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar7 + 400),ppAVar3,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar3 = (AnimationFrames *)this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSlider(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderSlider(Screen_Custom *this,Widget *param_1)

{
  int *piVar1;
  double *pdVar2;
  AnimationFrames **ppAVar3;
  Widget *pWVar4;
  undefined1 *puVar5;
  ScreenElement *this_00;
  int iVar6;
  bool bVar7;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c81fc;
  local_10 = ExceptionList;
  puVar5 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  this_00 = operator_new(0x458);
  pWVar4 = param_1;
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar7 = ShipData::currentlyBoardedShip != (Ship *)0x0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined ***)this_00 = UI_Slider::vftable;
  this_00[0x428] = (ScreenElement)0x1;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 100;
  *(undefined4 *)(this_00 + 0x450) = 1;
  *(undefined2 *)(this_00 + 0x284) = 0x101;
  this_00[0x286] = (ScreenElement)0x1;
  piVar1 = *(int **)(pWVar4 + 0x160);
  *(int **)(this_00 + 0x440) = piVar1;
  if (bVar7) {
    if ((piVar1 == (int *)0x0) || (*piVar1 == -1)) {
      iVar6 = shipDataMax((ShipDataInputType)puVar5);
      if (*(int *)(this_00 + 0x44c) == iVar6) goto LAB_005455b6;
    }
    (**(code **)(*(int *)this_00 + 0x294))();
  }
LAB_005455b6:
  *(undefined4 *)(this_00 + 0x448) = 0;
  iVar6 = shipDataMax((ShipDataInputType)puVar5);
  *(int *)(this_00 + 0x44c) = iVar6;
  local_20 = 0.0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar6,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar2 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar2) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar2,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar2 = 0.0;
  }
  iVar6 = *(int *)(this + 0xc);
  ppAVar3 = *(AnimationFrames ***)(iVar6 + 0x194);
  if (*(AnimationFrames ***)(iVar6 + 0x198) == ppAVar3) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar6 + 400),ppAVar3,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar3 = (AnimationFrames *)this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderTextBox(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderTextBox(Screen_Custom *this,Widget *param_1)

{
  float fVar1;
  double *pdVar2;
  AnimationFrames **ppAVar3;
  Widget *pWVar4;
  bool bVar5;
  ScreenElement *this_00;
  int iVar6;
  uint local_48;
  undefined8 local_20;
  ScreenElement *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c824c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = operator_new(0x450);
  pWVar4 = param_1;
  local_8 = 0;
  local_18 = this_00;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_TextBox::vftable;
  this_00[0x428] = (ScreenElement)0x0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  this_00[0x434] = (ScreenElement)0x0;
  *(undefined4 *)(this_00 + 0x438) = 8;
  iVar6 = *(int *)(pWVar4 + 0x10);
  this_00[0x440] = (ScreenElement)0x1;
  *(int *)(this_00 + 0x43c) = iVar6 + -4;
  *(undefined4 *)(this_00 + 0x444) = 0x3f800000;
  *(undefined4 *)(this_00 + 0x448) = 0;
  local_48 = local_48 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_48,"nolosefocus",0xb);
  bVar5 = Widget::getOptionAsBool((Widget *)(this_00 + 0x290));
  if (bVar5) {
    this_00[0x434] = (ScreenElement)0x1;
  }
  bVar5 = ShipData::currentlyBoardedShip != (Ship *)0x0;
  this_00[0x287] = (ScreenElement)0x1;
  if (((bVar5) && (this_00[0x418] != (ScreenElement)0x0)) &&
     (fVar1 = *(float *)(this_00 + 0x444), *(float *)(this_00 + 0x444) = fVar1 - 0.0,
     fVar1 - 0.0 <= 0.0)) {
    *(undefined4 *)(this_00 + 0x444) = 0x3f800000;
    this_00[0x440] = (ScreenElement)(this_00[0x440] == (ScreenElement)0x0);
    (**(code **)(*(int *)this_00 + 0x294))();
  }
  local_20 = 0.0;
  *(undefined4 *)(this_00 + 0x448) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(this_00 + 0x438) = *(undefined4 *)(param_1 + 0x174);
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))();
  (**(code **)(*(int *)this_00 + 0x294))();
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar6 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar6 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar6,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))();
  local_8 = 0xffffffff;
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar2 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar2) {
    local_48 = 0x5458ec;
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar2,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar2 = 0.0;
  }
  iVar6 = *(int *)(this + 0xc);
  ppAVar3 = *(AnimationFrames ***)(iVar6 + 0x194);
  if (*(AnimationFrames ***)(iVar6 + 0x198) == ppAVar3) {
    local_48 = 0x545912;
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar6 + 400),ppAVar3,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar3 = (AnimationFrames *)this_00;
    *(int *)(iVar6 + 0x194) = *(int *)(iVar6 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderCheckbox(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderCheckbox(Screen_Custom *this,Widget *param_1)

{
  ScreenElement SVar1;
  double *pdVar2;
  AnimationFrames **ppAVar3;
  Widget *pWVar4;
  bool bVar5;
  uint uVar6;
  ScreenElement *this_00;
  int iVar7;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c82aa;
  local_10 = ExceptionList;
  uVar6 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x460);
  pWVar4 = param_1;
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_Checkbox::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  this_00[0x284] = (ScreenElement)0x1;
  this_00[0x286] = (ScreenElement)0x1;
  iVar7 = *(int *)(pWVar4 + 0x160);
  *(int *)(this_00 + 0x434) = iVar7;
  if (iVar7 == 0) {
    bVar5 = cc_assert_script_compatible("ERROR: invalid data pointer");
    if (!bVar5) {
      cocos2d::log("Assert failed: %s","ERROR: invalid data pointer",uVar6);
    }
  }
  this_00[0x431] = this_00[0x27c];
  SVar1 = **(ScreenElement **)(this_00 + 0x434);
  this_00[0x430] = SVar1;
  if (SVar1 != **(ScreenElement **)(this_00 + 0x434)) {
    (**(code **)(*(int *)this_00 + 0x294))();
  }
  local_20 = 0.0;
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar7,(float)*(int *)(this_00 + 0x298));
  local_8 = 4;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar2 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar2) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar2,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar2 = 0.0;
  }
  iVar7 = *(int *)(this + 0xc);
  ppAVar3 = *(AnimationFrames ***)(iVar7 + 0x194);
  if (*(AnimationFrames ***)(iVar7 + 0x198) == ppAVar3) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar7 + 400),ppAVar3,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar3 = (AnimationFrames *)this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSystemBar(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderSystemBar(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  uint uVar3;
  ScreenElement *this_00;
  Size *pSVar4;
  int iVar5;
  Size local_28 [8];
  undefined8 local_20;
  void *local_10;
  Size **ppSStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  ppSStack_c = &param_1_005c82fc;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x430);
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_SystemBar::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  pSVar4 = (Size *)cocos2d::Size::Size(local_28,(float)*(int *)(this_00 + 0x2a0),
                                       (float)*(int *)(this_00 + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this_00,pSVar4);
  local_20 = 0.0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar3);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSelector(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderSelector(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  bool bVar4;
  ScreenElement SVar5;
  undefined1 *puVar6;
  ScreenElement *this_00;
  int iVar7;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c834c;
  local_10 = ExceptionList;
  puVar6 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  this_00 = operator_new(0x450);
  pWVar3 = param_1;
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this_00 = UI_Selector::vftable;
  *(undefined2 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined2 *)(this_00 + 0x448) = 0;
  iVar7 = *(int *)(pWVar3 + 0x10);
  this_00[0x284] = (ScreenElement)0x1;
  *(int *)(this_00 + 0x44c) = iVar7 + -0x18;
  this_00[0x286] = (ScreenElement)0x1;
  *(undefined4 *)(this_00 + 0x444) = *(undefined4 *)(pWVar3 + 0x160);
  bVar4 = shipDataCanPrev((ShipDataInputType)puVar6);
  param_1 = (Widget *)CONCAT13(bVar4,param_1._0_3_);
  SVar5 = (ScreenElement)shipDataCanNext((ShipDataInputType)puVar6);
  if ((param_1._3_1_ != this_00[0x428]) || (SVar5 != this_00[0x429])) {
    this_00[0x429] = SVar5;
    this_00[0x428] = param_1._3_1_;
    (**(code **)(*(int *)this_00 + 0x294))();
  }
  local_20 = 0.0;
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar7 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar7 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar7,(float)*(int *)(this_00 + 0x298));
  local_8 = 3;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar7 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar7 + 0x194);
  if (*(AnimationFrames ***)(iVar7 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar7 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar7 + 0x194) = *(int *)(iVar7 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: class ScreenElement * __thiscall Screen_Custom::renderSelectTray(class Widget &)

ScreenElement * __thiscall Screen_Custom::renderSelectTray(Screen_Custom *this,Widget *param_1)

{
  double *pdVar1;
  AnimationFrames **ppAVar2;
  Widget *pWVar3;
  uint uVar4;
  ScreenElement *this_00;
  int iVar5;
  undefined8 local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c8394;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = operator_new(0x470);
  pWVar3 = param_1;
  local_20 = (double)CONCAT44(this_00,(undefined4)local_20);
  local_8 = 0;
  ScreenElement::ScreenElement
            (this_00,*(ScreenInterface **)(this + 0xc),param_1,
             (bool *)(*(ScreenInterface **)(this + 0xc) + 0x70));
  *(undefined ***)this_00 = UI_SelectTray::vftable;
  *(undefined4 *)(this_00 + 0x428) = 0;
  *(undefined4 *)(this_00 + 0x42c) = 0;
  *(undefined4 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x434) = 0;
  *(undefined4 *)(this_00 + 0x438) = 0;
  *(undefined4 *)(this_00 + 0x43c) = 0;
  *(undefined4 *)(this_00 + 0x440) = 0;
  *(undefined4 *)(this_00 + 0x444) = 0;
  *(undefined4 *)(this_00 + 0x448) = 0;
  *(undefined4 *)(this_00 + 0x44c) = 0;
  *(undefined4 *)(this_00 + 0x450) = 0;
  *(undefined4 *)(this_00 + 0x454) = 0;
  *(undefined4 *)(this_00 + 0x45c) = 0;
  *(undefined4 *)(this_00 + 0x460) = 0;
  *(undefined4 *)(this_00 + 0x464) = 0;
  *(undefined2 *)(this_00 + 0x468) = 0;
  iVar5 = *(int *)(pWVar3 + 0x10);
  this_00[0x284] = (ScreenElement)0x1;
  *(int *)(this_00 + 0x46c) = iVar5 + -0x1a;
  this_00[0x286] = (ScreenElement)0x1;
  *(undefined4 *)(this_00 + 0x458) = *(undefined4 *)(pWVar3 + 0x160);
  local_20 = 0.0;
  local_8 = 1;
  (**(code **)(*(int *)this_00 + 0xa0))(&local_20,uVar4);
  if (this[0x14] == (Screen_Custom)0x0) {
    iVar5 = *(int *)(this_00 + 0x2a4) + *(int *)(this_00 + 0x29c);
  }
  else {
    iVar5 = *(int *)(this_00 + 0x29c) + 0xc + *(int *)(this_00 + 0x2a4);
  }
  local_20 = (double)CONCAT44((float)iVar5,(float)*(int *)(this_00 + 0x298));
  local_8 = 2;
  (**(code **)(*(int *)this_00 + 0x4c))(&local_20);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x2c))(&DAT_bf800000);
  (**(code **)(*(int *)this_00 + 0x294))();
  cocos2d::Ref::retain((Ref *)this_00);
  pdVar1 = *(double **)(this + 0x24);
  local_20 = 0.0;
  if (*(double **)(this + 0x28) == pdVar1) {
    std::vector<>::_Emplace_reallocate<double>((vector<> *)(this + 0x20),pdVar1,(double *)&local_20)
    ;
  }
  else {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 8;
    *pdVar1 = 0.0;
  }
  iVar5 = *(int *)(this + 0xc);
  ppAVar2 = *(AnimationFrames ***)(iVar5 + 0x194);
  if (*(AnimationFrames ***)(iVar5 + 0x198) == ppAVar2) {
    param_1 = (Widget *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(iVar5 + 400),ppAVar2,(AnimationFrames **)&param_1);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  ExceptionList = local_10;
  return this_00;
}


// public: virtual void __thiscall Screen_Custom::clickOnObject(int,class cocos2d::Vec2)

void __thiscall Screen_Custom::clickOnObject(Screen_Custom *this,int param_1)

{
  int iVar1;
  uint uVar2;
  NetworkData *extraout_ECX;
  int *piVar3;
  double *pdVar4;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 unaff_EDI;
  double *pdVar6;
  double in_stack_ffffffd8;
  undefined8 local_20;
  double local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c83b9;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = param_1 * 0x188;
  iVar1 = *(int *)(*(int *)(this + 0x10) + 100);
  if (*(int *)(iVar1 + 0x124 + iVar5) != 0) {
    if (*(char *)(iVar5 + 0xf8 + iVar1) == '\0') {
      if (g_gameLogic[0x71] != (GameLogic)0x0) {
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this = (Screen_Custom *)extraout_ECX;
        }
        NetworkData::sendShipCommand
                  ((NetworkData *)this,*(int *)(iVar5 + 0x128 + iVar1),
                   (double)((ulonglong)uVar2 << 0x20),(double)CONCAT44(unaff_ESI,unaff_EDI),
                   in_stack_ffffffd8);
        ExceptionList = local_10;
        return;
      }
      param_1 = *(int *)(g_gameData + 0xd0);
      local_18 = (double)*(int *)(iVar5 + 300 + iVar1);
      local_20 = 0;
      piVar3 = *(int **)(iVar5 + 0x124 + iVar1);
      if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      pdVar6 = (double *)&stack0xffffffd8;
      pdVar4 = &local_18;
    }
    else {
      param_1 = *(int *)(g_gameData + 0xd0);
      local_20 = 0;
      local_18 = 0.0;
      piVar3 = *(int **)(iVar5 + 0x124 + iVar1);
      if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      pdVar6 = &local_18;
      pdVar4 = (double *)&stack0xffffffd8;
    }
    local_20 = 0;
    (**(code **)(*piVar3 + 8))(&param_1,pdVar4,&local_20,pdVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Screen_Custom::updateExistence(class Widget &,int)

void __thiscall Screen_Custom::updateExistence(Screen_Custom *this,Widget *param_1,int param_2)

{
  Widget *pWVar1;
  int iVar2;
  int *piVar3;
  Widget *pWVar4;
  bool bVar5;
  float10 fVar6;
  basic_string<> abStack_2c [12];
  undefined4 uStack_20;
  int iStack_1c;
  Widget **ppWStack_18;
  undefined8 local_c;
  
  pWVar4 = param_1;
  bVar5 = false;
  if (*(int *)(param_1 + 0xf4) != 0) {
    std::basic_string<>::basic_string<>(abStack_2c,(basic_string<> *)(param_1 + 0xb8));
    bVar5 = std::_Func_class<>::operator()
                      ((_Func_class<> *)(pWVar4 + 0xd0),*(undefined4 *)(g_gameData + 0xd0),
                       *(undefined4 *)(pWVar4 + 0xb4));
    if (pWVar4[0xb1] != (Widget)0x0) {
      bVar5 = !bVar5;
    }
    goto switchD_005462ed_default;
  }
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    pWVar1 = param_1 + 0x7c;
    local_c = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_c);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      ppWStack_18 = (Widget **)0x546318;
      param_1 = *(Widget **)(param_1 + 0xb4);
      std::_Xbad_function_call();
    }
    ppWStack_18 = &param_1;
    iStack_1c = (int)&local_c + 4;
    uStack_20 = 0x546327;
    param_1 = *(Widget **)(param_1 + 0xb4);
    fVar6 = (float10)(**(code **)(**(int **)pWVar1 + 8))();
    local_c = (double)fVar6;
    if (local_c == (double)*(int *)(pWVar4 + 0x84)) {
      bVar5 = true;
      break;
    }
    goto LAB_0054634c;
  case 1:
    pWVar1 = param_1 + 0x7c;
    local_c = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_c);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      ppWStack_18 = (Widget **)0x546377;
      param_1 = *(Widget **)(param_1 + 0xb4);
      std::_Xbad_function_call();
    }
    ppWStack_18 = &param_1;
    iStack_1c = (int)&local_c + 4;
    uStack_20 = 0x546386;
    param_1 = *(Widget **)(param_1 + 0xb4);
    fVar6 = (float10)(**(code **)(**(int **)pWVar1 + 8))();
    local_c = (double)fVar6;
    if (local_c != (double)*(int *)(pWVar4 + 0x84)) {
      bVar5 = true;
      break;
    }
LAB_0054634c:
    bVar5 = false;
    break;
  case 2:
    pWVar1 = param_1 + 0x7c;
    local_c = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_c);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      ppWStack_18 = (Widget **)0x5463cf;
      param_1 = *(Widget **)(param_1 + 0xb4);
      std::_Xbad_function_call();
    }
    ppWStack_18 = &param_1;
    iStack_1c = (int)&local_c + 4;
    uStack_20 = 0x5463de;
    param_1 = *(Widget **)(param_1 + 0xb4);
    fVar6 = (float10)(**(code **)(**(int **)pWVar1 + 8))();
    local_c = (double)fVar6;
    bVar5 = local_c < (double)*(int *)(pWVar4 + 0x84);
    break;
  case 3:
    pWVar1 = param_1 + 0x7c;
    local_c = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_c);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      ppWStack_18 = (Widget **)0x54641e;
      param_1 = *(Widget **)(param_1 + 0xb4);
      std::_Xbad_function_call();
    }
    ppWStack_18 = &param_1;
    iStack_1c = (int)&local_c + 4;
    uStack_20 = 0x54642d;
    param_1 = *(Widget **)(param_1 + 0xb4);
    fVar6 = (float10)(**(code **)(**(int **)pWVar1 + 8))();
    local_c = (double)fVar6;
    bVar5 = (double)*(int *)(pWVar4 + 0x84) < local_c;
    break;
  case 4:
    pWVar1 = param_1 + 0x7c;
    local_c = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_c);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      ppWStack_18 = (Widget **)0x546471;
      param_1 = *(Widget **)(param_1 + 0xb4);
      std::_Xbad_function_call();
    }
    ppWStack_18 = &param_1;
    iStack_1c = (int)&local_c + 4;
    uStack_20 = 0x546480;
    param_1 = *(Widget **)(param_1 + 0xb4);
    fVar6 = (float10)(**(code **)(**(int **)pWVar1 + 8))();
    local_c = (double)fVar6;
    bVar5 = (double)*(int *)(pWVar4 + 0x84) < local_c;
    goto LAB_005464e1;
  case 5:
    pWVar1 = param_1 + 0x7c;
    local_c = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_c);
    if (*(int **)pWVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      ppWStack_18 = (Widget **)0x5464ba;
      param_1 = *(Widget **)(param_1 + 0xb4);
      std::_Xbad_function_call();
    }
    ppWStack_18 = &param_1;
    iStack_1c = (int)&local_c + 4;
    uStack_20 = 0x5464c9;
    param_1 = *(Widget **)(param_1 + 0xb4);
    fVar6 = (float10)(**(code **)(**(int **)pWVar1 + 8))();
    local_c = (double)fVar6;
    bVar5 = local_c < (double)*(int *)(pWVar4 + 0x84);
LAB_005464e1:
    bVar5 = !bVar5;
  }
switchD_005462ed_default:
  iVar2 = param_2 * 4;
  piVar3 = *(int **)(*(int *)(*(int *)(this + 0xc) + 400) + iVar2);
  if (bVar5 == false) {
    if ((char)piVar3[0x9f] != '\0') {
      ppWStack_18 = (Widget **)0x0;
      iStack_1c = 0x546540;
      (**(code **)(*piVar3 + 0x2b8))();
      iStack_1c = 0x546554;
      (**(code **)(**(int **)(iVar2 + *(int *)(*(int *)(this + 0xc) + 400)) + 0x290))();
    }
  }
  else if ((char)piVar3[0x9f] == '\0') {
    ppWStack_18 = (Widget **)0x54650f;
    (**(code **)(*piVar3 + 0x294))();
    ppWStack_18 = (Widget **)0x1;
    iStack_1c = 0x546525;
    (**(code **)(**(int **)(iVar2 + *(int *)(*(int *)(this + 0xc) + 400)) + 0x2b8))();
    return;
  }
  return;
}


// public: virtual void __thiscall Screen_Custom::update(float)

void __thiscall Screen_Custom::update(Screen_Custom *this,float param_1)

{
  double dVar1;
  int *piVar2;
  Widget *pWVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  undefined4 auStack_44 [16];
  
  uVar6 = 0;
  iVar7 = *(int *)(this + 0x10);
  iVar5 = *(int *)(iVar7 + 0x68) - *(int *)(iVar7 + 100);
  iVar4 = iVar5 >> 0x1f;
  if (iVar5 / 0x188 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      pWVar3 = (Widget *)(*(int *)(iVar7 + 100) + iVar4);
      if ((*(int *)(pWVar3 + 0xf4) != 0) || (*(int *)(pWVar3 + 0x7c) != 0)) {
        updateExistence(this,pWVar3,uVar6);
        iVar7 = *(int *)(this + 0x10);
      }
      if (*(char *)(*(int *)(iVar7 + 100) + 0xb0 + iVar4) == '\0') {
        piVar2 = *(int **)(*(int *)(iVar7 + 100) + 0xac + iVar4);
        if (piVar2 != (int *)0x0) {
          auStack_44[0] = *(undefined4 *)(g_gameData + 0xd0);
          fVar8 = (float10)(**(code **)(*piVar2 + 8))(auStack_44);
          dVar1 = (double)fVar8;
          if ((this[0x15] != (Screen_Custom)0x0) ||
             (dVar1 != *(double *)(*(int *)(this + 0x20) + uVar6 * 8))) {
            (**(code **)(**(int **)(*(int *)(*(int *)(this + 0xc) + 400) + uVar6 * 4) + 0x298))
                      (dVar1);
            *(double *)(*(int *)(this + 0x20) + uVar6 * 8) = dVar1;
          }
        }
      }
      else {
        (**(code **)(**(int **)(*(int *)(*(int *)(this + 0xc) + 400) + uVar6 * 4) + 0x29c))();
      }
      iVar4 = iVar4 + 0x188;
      uVar6 = uVar6 + 1;
      iVar7 = *(int *)(this + 0x10);
    } while (uVar6 < (uint)((*(int *)(iVar7 + 0x68) - *(int *)(iVar7 + 100)) / 0x188));
    this[0x15] = (Screen_Custom)0x0;
    return;
  }
  this[0x15] = (Screen_Custom)0x0;
  return;
}


// public: virtual bool __thiscall Screen_Custom::onKeyPressed(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_Custom::onKeyPressed(Screen_Custom *this,KeyCode param_1,Event *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int **)(this + 0x18) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(this + 0x18) + 0x2c4))(param_1);
    return (bool)uVar1;
  }
  iVar3 = *(int *)(this + 0xc);
  uVar4 = 0;
  if (*(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2 != 0) {
    do {
      cVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 400) + uVar4 * 4) + 0x2c4))(param_1);
      if (cVar2 != '\0') {
        return true;
      }
      iVar3 = *(int *)(this + 0xc);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2));
  }
  return false;
}


// public: virtual bool __thiscall Screen_Custom::onKeyReleased(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_Custom::onKeyReleased(Screen_Custom *this,KeyCode param_1,Event *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int **)(this + 0x18) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(this + 0x18) + 0x2c8))(param_1);
    return (bool)uVar1;
  }
  iVar3 = *(int *)(this + 0xc);
  uVar4 = 0;
  if (*(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2 != 0) {
    do {
      cVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 400) + uVar4 * 4) + 0x2c8))(param_1);
      if (cVar2 != '\0') {
        return true;
      }
      iVar3 = *(int *)(this + 0xc);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(iVar3 + 0x194) - *(int *)(iVar3 + 400) >> 2));
  }
  return false;
}


// public: virtual void __thiscall Screen_Custom::cancelAllKeys(void)

void __thiscall Screen_Custom::cancelAllKeys(Screen_Custom *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(*(int *)(this + 0xc) + 400);
  if (*(int *)(*(int *)(this + 0xc) + 0x194) - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x2cc))();
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(*(int *)(this + 0xc) + 400);
    } while (uVar2 < (uint)(*(int *)(*(int *)(this + 0xc) + 0x194) - iVar1 >> 2));
  }
  return;
}
