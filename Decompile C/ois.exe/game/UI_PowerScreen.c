#include "../ois.exe.h"


// public: virtual void * __thiscall UI_PowerScreen::`vector deleting destructor'(unsigned int)

void * __thiscall UI_PowerScreen::_vector_deleting_destructor_(UI_PowerScreen *this,uint param_1)

{
  ~UI_PowerScreen(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x440);
  }
  return this;
}


// public: virtual __thiscall UI_PowerScreen::~UI_PowerScreen(void)

void __thiscall UI_PowerScreen::~UI_PowerScreen(UI_PowerScreen *this)

{
  void *pvVar1;
  ModuleRenderData *pMVar2;
  ModuleRenderData *pMVar3;
  nothrow_t *pnVar4;
  int iVar5;
  void *pvVar6;
  allocator<> *unaff_EDI;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005caa20;
  local_10 = ExceptionList;
  pMVar2 = (ModuleRenderData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  pMVar3 = *(ModuleRenderData **)(this + 0x430);
  local_14 = 0;
  iVar5 = *(int *)(this + 0x434) - (int)pMVar3 >> 0x1f;
  if ((*(int *)(this + 0x434) - (int)pMVar3) / 0x38 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      if (*(UIRectangle **)(pMVar3 + iVar5) != (UIRectangle *)0x0) {
        UIRectangle::cleanupAll(*(UIRectangle **)(pMVar3 + iVar5));
        pMVar3 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar3 + iVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar3 + iVar5 + 4) + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x430) + 4 + iVar5) = 0;
        pMVar3 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar3 + iVar5 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar3 + iVar5 + 0x20) + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x430) + 0x20 + iVar5) = 0;
        pMVar3 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar3 + iVar5 + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar3 + iVar5 + 0x2c) + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x430) + 0x2c + iVar5) = 0;
        pMVar3 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar3 + iVar5 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar3 + iVar5 + 0x30) + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x430) + 0x30 + iVar5) = 0;
      }
      pMVar3 = *(ModuleRenderData **)(this + 0x430);
      iVar5 = iVar5 + 0x38;
      local_14 = local_14 + 1;
    } while (local_14 < (uint)((*(int *)(this + 0x434) - (int)pMVar3) / 0x38));
  }
  std::_Destroy_range<>(pMVar3,pMVar2,unaff_EDI);
  *(undefined4 *)(this + 0x434) = *(undefined4 *)(this + 0x430);
  if (*(ModuleRenderData **)(this + 0x430) != (ModuleRenderData *)0x0) {
    std::_Destroy_range<>(*(ModuleRenderData **)(this + 0x430),pMVar2,unaff_EDI);
    pvVar1 = *(void **)(this + 0x430);
    pnVar4 = (nothrow_t *)(((*(int *)(this + 0x438) - (int)pvVar1) / 0x38) * 0x38);
    pvVar6 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar6 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar4);
    *(undefined4 *)(this + 0x430) = 0;
    *(undefined4 *)(this + 0x434) = 0;
    *(undefined4 *)(this + 0x438) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_PowerScreen::cleanupRender(void)

void __thiscall UI_PowerScreen::cleanupRender(UI_PowerScreen *this)

{
  ModuleRenderData *pMVar1;
  allocator<> *unaff_ESI;
  ModuleRenderData *unaff_EDI;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  pMVar1 = *(ModuleRenderData **)(this + 0x430);
  iVar2 = *(int *)(this + 0x434) - (int)pMVar1 >> 0x1f;
  if ((*(int *)(this + 0x434) - (int)pMVar1) / 0x38 + iVar2 != iVar2) {
    iVar2 = 0;
    do {
      if (*(UIRectangle **)(pMVar1 + iVar2) != (UIRectangle *)0x0) {
        UIRectangle::cleanupAll(*(UIRectangle **)(pMVar1 + iVar2));
        pMVar1 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar1 + iVar2 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar1 + iVar2 + 4) + 0x138))(1);
        *(undefined4 *)(iVar2 + 4 + *(int *)(this + 0x430)) = 0;
        pMVar1 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar1 + iVar2 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar1 + iVar2 + 0x20) + 0x138))(1);
        *(undefined4 *)(iVar2 + 0x20 + *(int *)(this + 0x430)) = 0;
        pMVar1 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar1 + iVar2 + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar1 + iVar2 + 0x2c) + 0x138))(1);
        *(undefined4 *)(iVar2 + 0x2c + *(int *)(this + 0x430)) = 0;
        pMVar1 = *(ModuleRenderData **)(this + 0x430);
      }
      if (*(int **)(pMVar1 + iVar2 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(pMVar1 + iVar2 + 0x30) + 0x138))(1);
        *(undefined4 *)(iVar2 + 0x30 + *(int *)(this + 0x430)) = 0;
      }
      pMVar1 = *(ModuleRenderData **)(this + 0x430);
      iVar2 = iVar2 + 0x38;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)(this + 0x434) - (int)pMVar1) / 0x38));
  }
  std::_Destroy_range<>(pMVar1,unaff_EDI,unaff_ESI);
  *(undefined4 *)(this + 0x434) = *(undefined4 *)(this + 0x430);
  return;
}


// public: virtual void __thiscall UI_PowerScreen::render(void)

void __thiscall UI_PowerScreen::render(UI_PowerScreen *this)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  Size aSStack_10 [12];
  
  (**(code **)(*(int *)this + 0x290))();
  iVar4 = 0;
  uVar3 = 0;
  *(int *)(this + 0x428) = *(int *)(this + 0x2a0) / 6;
  iVar5 = 0;
  *(int *)(this + 0x42c) = *(int *)(this + 0x2a4) / 2;
  iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
  if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar2 >> 2 != 0) {
    do {
      renderModule(this,*(ShipModule **)(iVar2 + uVar3 * 4),iVar4,iVar5);
      iVar4 = iVar4 + 1;
      if (iVar4 == 6) {
        iVar5 = iVar5 + 1;
        iVar4 = 0;
        if (iVar5 == 2) break;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
    } while (uVar3 < (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar2 >>
                           2));
  }
  **(undefined1 **)(this + 0x288) = 1;
  iVar2 = *(int *)this;
  uVar1 = cocos2d::Size::Size(aSStack_10,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4)
                             );
  (**(code **)(iVar2 + 0xac))(uVar1);
  return;
}


// public: void __thiscall UI_PowerScreen::renderModule(class ShipModule *,int,int)

void __thiscall
UI_PowerScreen::renderModule(UI_PowerScreen *this,ShipModule *param_1,int param_2,int param_3)

{
  int iVar1;
  ModuleRenderData *pMVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ShipModule *pSVar8;
  undefined2 *puVar9;
  UIRectangle *pUVar10;
  int *piVar11;
  Sprite *pSVar12;
  Sprite *pSVar13;
  Sprite *pSVar14;
  UIText *pUVar15;
  int *piVar16;
  ShipModule SVar17;
  uint uVar18;
  UI_PowerScreen *this_00;
  float extraout_ECX;
  void *pvVar19;
  nothrow_t *pnVar20;
  UI_PowerScreen *pUVar21;
  float fVar22;
  float fVar23;
  float fStack_284;
  undefined4 *puStack_280;
  Sprite *pSStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_26c;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  undefined4 local_210;
  undefined4 local_20c;
  undefined2 local_208;
  undefined1 local_206;
  UI_PowerScreen *local_204;
  Widget local_200 [16];
  int local_1f0;
  int local_1ec;
  int *local_74;
  Sprite *local_70;
  void *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  UIText *local_54;
  int *piStack_50;
  int *piStack_4c;
  Sprite *pSStack_48;
  Sprite *local_44;
  ModuleRenderData local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005cba2a;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar5 = *(int *)(this + 0x428) * param_2;
  local_74 = (int *)0x0;
  local_70 = (Sprite *)0x0;
  iVar6 = (1 - param_3) * *(int *)(this + 0x42c);
  local_5c = 0xf00000000;
  local_6c = (void *)((uint)local_6c & 0xffffff00);
  local_54 = (UIText *)0x0;
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  pSStack_48 = (Sprite *)0x0;
  local_44 = (Sprite *)0x0;
  local_40 = (ModuleRenderData)0x0;
  local_14 = 0;
  local_204 = this;
  cocos2d::Color3B::Color3B((Color3B *)&local_208,'X',0xa1,'^');
  uVar18 = 0;
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  piVar11 = *(int **)(iVar1 + 0x3c);
  uVar7 = *(int *)(iVar1 + 0x40) - (int)piVar11 >> 2;
  piVar16 = piVar11;
  if (uVar7 != 0) {
    do {
      this = local_204;
      if (*(int *)(*piVar16 + 0x10) == *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e8)) {
        pSVar8 = (ShipModule *)piVar11[uVar18];
        goto LAB_00580d7d;
      }
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 1;
    } while (uVar18 < uVar7);
  }
  pSVar8 = (ShipModule *)0x0;
LAB_00580d7d:
  if (pSVar8 == param_1) {
    uVar26 = 0xff;
LAB_00580dc9:
    uVar25 = 0xff;
LAB_00580dce:
    uVar24 = 0xff;
LAB_00580dd3:
    puVar9 = (undefined2 *)
             cocos2d::Color3B::Color3B((Color3B *)((int)&local_20c + 1),uVar24,uVar25,uVar26);
    local_208 = *puVar9;
    local_206 = *(undefined1 *)(puVar9 + 1);
  }
  else {
    if (param_1[99] == (ShipModule)0x0) {
      uVar26 = '@';
      uVar25 = '@';
      uVar24 = '@';
      goto LAB_00580dd3;
    }
    cVar4 = (**(code **)(*(int *)param_1 + 0x14))();
    if (cVar4 != '\0') {
      uVar26 = '\0';
      uVar25 = '\0';
      goto LAB_00580dce;
    }
    cVar4 = (**(code **)(*(int *)param_1 + 0x18))();
    if (cVar4 != '\0') {
      uVar26 = '\0';
      goto LAB_00580dc9;
    }
  }
  pUVar10 = operator_new(0x290);
  local_14._0_1_ = 1;
  piVar11 = (int *)UIRectangle::UIRectangle(pUVar10);
  local_14._0_1_ = 2;
  (**(code **)(*piVar11 + 0xa0))();
  local_14._0_1_ = 0;
  (**(code **)(*piVar11 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  strUsingArgs((char *)&local_3c);
  word::~word((word *)&local_6c);
  local_6c = local_3c;
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  local_5c = local_2c;
  fStack_274 = 8.086888e-39;
  std::basic_string<>::basic_string<>((basic_string<> *)&fStack_26c,(basic_string<> *)&local_6c);
  pSVar12 = loadSprite();
  local_14._0_1_ = 3;
  (**(code **)(*(int *)pSVar12 + 0xa0))();
  local_14._0_1_ = 0;
  (**(code **)(*(int *)pSVar12 + 0x48))();
  pUVar21 = local_204;
  local_70 = pSVar12;
  (**(code **)(*(int *)local_204 + 0x10c))();
  if (pSVar8 == (ShipModule *)0x0) {
    SVar17 = (ShipModule)0x0;
  }
  else {
    SVar17 = pSVar8[0x14];
  }
  fStack_26c = 8.087165e-39;
  pSVar13 = renderEmcon(pUVar21,(bool)SVar17);
  fStack_26c = (float)(*(int *)(local_204 + 0x428) / 2 + iVar5);
  (**(code **)(*(int *)pSVar13 + 0x48))();
  strUsingArgs((char *)&fStack_284);
  pSVar14 = loadSprite();
  local_14._0_1_ = 4;
  fStack_274 = 8.087434e-39;
  (**(code **)(*(int *)pSVar14 + 0xa0))();
  local_14._0_1_ = 0;
  fStack_274 = (float)(*(int *)(local_204 + 0x42c) / 3 + iVar6 + 0x10);
  fStack_278 = (float)(*(int *)(local_204 + 0x428) / 2 + iVar5);
  pSStack_27c = (Sprite *)0x5810d9;
  (**(code **)(*(int *)pSVar14 + 0x48))();
  puStack_280 = (undefined4 *)0x5810ed;
  pSStack_27c = pSVar14;
  (**(code **)(*(int *)local_204 + 0x10c))();
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xfffffd6c,(basic_string<> *)(*(int *)(param_1 + 8) + 0x20));
  fVar23 = 8.087647e-39;
  pUVar15 = UIText::create(0);
  local_210 = 0x3f000000;
  local_20c = (UI_BDBar *)0x0;
  local_14._0_1_ = 5;
  puStack_280 = &local_210;
  fStack_284 = 8.08772e-39;
  (**(code **)(*(int *)pUVar15 + 0xa0))();
  local_14._0_1_ = 0;
  fStack_284 = (float)(iVar6 + 3);
  (**(code **)(*(int *)pUVar15 + 0x48))();
  pUVar21 = local_204;
  (**(code **)(*(int *)local_204 + 0x10c))();
  updateEmissionState(this_00,pSVar14,param_1);
  Widget::Widget(local_200);
  local_14._0_1_ = 6;
  uVar3 = (undefined1)local_14;
  local_14._0_1_ = 6;
  fVar22 = *(float *)(*(int *)(param_1 + 8) + 0xc4);
  if (0.0 < fVar22) {
    local_1f0 = (int)(*(int *)(pUVar21 + 0x428) + (*(int *)(pUVar21 + 0x428) >> 0x1f & 3U)) >> 2;
    local_1ec = *(int *)(pUVar21 + 0x42c) + -0x10;
    local_20c = operator_new(0x460);
    local_14._0_1_ = 7;
    piVar16 = (int *)UI_StatusBar::UI_StatusBar
                               ((UI_StatusBar *)local_20c,*(ScreenInterface **)(pUVar21 + 0x278),
                                local_200,*(bool **)(pUVar21 + 0x288),fVar23,100.0,local_1f0,
                                local_1ec);
    local_210 = 0;
    local_20c = (UI_BDBar *)0x0;
    local_14._0_1_ = 8;
    (**(code **)(*piVar16 + 0xa0))();
    local_14._0_1_ = 6;
    fVar22 = (float)(iVar5 + 3);
    (**(code **)(*piVar16 + 0x48))(fVar22);
    puVar9 = (undefined2 *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_20c + 1),'@','@','@');
    *(undefined2 *)(piVar16 + 0x111) = *puVar9;
    *(undefined1 *)((int)piVar16 + 0x446) = *(undefined1 *)(puVar9 + 1);
    (**(code **)(*(int *)local_204 + 0x10c))(piVar16);
    pUVar21 = local_204;
    piStack_4c = piVar16;
    uVar3 = (undefined1)local_14;
  }
  local_14._0_1_ = uVar3;
  local_1f0 = (int)(*(int *)(pUVar21 + 0x428) + (*(int *)(pUVar21 + 0x428) >> 0x1f & 3U)) >> 2;
  local_1ec = *(int *)(pUVar21 + 0x42c) + -0x10;
  if (param_1[99] == (ShipModule)0x0) {
    fVar22 = 0.0;
    SVar17 = (ShipModule)0x0;
  }
  else {
    ShipModule::getCurrentGenerationRate(param_1);
    SVar17 = param_1[99];
  }
  if (SVar17 == (ShipModule)0x0) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = *(float *)(*(int *)(param_1 + 8) + 200);
  }
  if (fVar23 < fVar22) {
    if (SVar17 == (ShipModule)0x0) goto LAB_00581363;
    fVar22 = *(float *)(*(int *)(param_1 + 8) + 200);
  }
  if ((fVar22 == 0.0) && (SVar17 != (ShipModule)0x0)) {
    ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(param_1 + 0xc));
  }
LAB_00581363:
  local_20c = operator_new(0x458);
  local_14._0_1_ = 9;
  piVar16 = (int *)UI_BDBar::UI_BDBar(local_20c,*(ScreenInterface **)(pUVar21 + 0x278),local_200,
                                      *(bool **)(pUVar21 + 0x288),extraout_ECX,local_1f0,local_1ec);
  local_210 = 0x3f800000;
  local_20c = (UI_BDBar *)0x0;
  local_14._0_1_ = 10;
  (**(code **)(*piVar16 + 0xa0))();
  local_14 = CONCAT31(local_14._1_3_,6);
  (**(code **)(*piVar16 + 0x48))((float)(*(int *)(local_204 + 0x428) + iVar5 + -3));
  puVar9 = (undefined2 *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_20c + 1),'@','@','@');
  *(undefined2 *)(piVar16 + 0x112) = *puVar9;
  *(undefined1 *)((int)piVar16 + 0x44a) = *(undefined1 *)(puVar9 + 1);
  (**(code **)(*piVar16 + 0x294))();
  (**(code **)(*(int *)local_204 + 0x10c))(piVar16);
  pUVar21 = local_204;
  local_40 = *(ModuleRenderData *)(param_1 + 0x14);
  pMVar2 = *(ModuleRenderData **)(local_204 + 0x434);
  local_74 = piVar11;
  local_54 = pUVar15;
  piStack_50 = piVar16;
  pSStack_48 = pSVar14;
  local_44 = pSVar13;
  if (*(ModuleRenderData **)(local_204 + 0x438) == pMVar2) {
    local_70 = pSVar12;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(local_204 + 0x430),pMVar2,(ModuleRenderData *)&local_74);
  }
  else {
    *(Sprite **)(pMVar2 + 4) = pSVar12;
    *(int **)pMVar2 = piVar11;
    local_70 = pSVar12;
    std::basic_string<>::basic_string<>((basic_string<> *)(pMVar2 + 8),(basic_string<> *)&local_6c);
    *(UIText **)(pMVar2 + 0x20) = local_54;
    *(int **)(pMVar2 + 0x24) = piStack_50;
    *(int **)(pMVar2 + 0x28) = piStack_4c;
    *(Sprite **)(pMVar2 + 0x2c) = pSStack_48;
    *(Sprite **)(pMVar2 + 0x30) = local_44;
    pMVar2[0x34] = local_40;
    *(int *)(pUVar21 + 0x434) = *(int *)(pUVar21 + 0x434) + 0x38;
  }
  Widget::~Widget(local_200);
  if (0xf < local_5c._4_4_) {
    pnVar20 = (nothrow_t *)(local_5c._4_4_ + 1);
    pvVar19 = local_6c;
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar19 = *(void **)((int)local_6c + -4);
      pnVar20 = (nothrow_t *)(local_5c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_6c + (-4 - (int)pvVar19))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar19,pnVar20);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall UI_PowerScreen::updateRender(void)

void __thiscall UI_PowerScreen::updateRender(UI_PowerScreen *this)

{
  ShipModule *this_00;
  int *piVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined2 *puVar5;
  basic_string<> *pbVar6;
  Sprite *pSVar7;
  undefined4 *puVar8;
  ShipModule SVar9;
  Color3B *this_01;
  basic_string<> *pbVar10;
  UI_PowerScreen *this_02;
  char *pcVar11;
  nothrow_t *pnVar12;
  int iVar13;
  int iVar14;
  uint unaff_EDI;
  float fVar15;
  undefined1 in_XMM0 [16];
  undefined1 auVar16 [16];
  float fVar17;
  basic_string<> abStack_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uchar uVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  Color3B local_68 [3];
  Color3B local_65 [3];
  Color3B local_62 [3];
  Color3B local_5f [3];
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  ShipModule *local_38;
  char *local_34;
  undefined2 local_30;
  undefined1 local_2e;
  basic_string<> *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005cba7a;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_40 = 0;
  local_4c = 0;
  local_34 = *(char **)(g_gameData + 0xd0);
  local_14 = pcVar4;
  if (*(int *)(*(int *)(local_34 + 0x40) + 0x40) - *(int *)(*(int *)(local_34 + 0x40) + 0x3c) >> 2
      != 0) {
    local_48 = 1;
    local_44 = 0;
    do {
      iVar14 = local_44;
      this_00 = *(ShipModule **)(*(int *)(*(int *)(local_34 + 0x40) + 0x3c) + local_4c * 4);
      if (*(int *)(local_34 + 0x1e8) < 0) {
        local_38 = (ShipModule *)0x0;
      }
      else {
        local_38 = *(ShipModule **)
                    (*(int *)(*(int *)(local_34 + 0x40) + 0x3c) + *(int *)(local_34 + 0x1e8) * 4);
      }
      uStack_8c = 0x5815f8;
      cocos2d::Color3B::Color3B((Color3B *)&local_30,'X',0xa1,'^');
      if (local_38 == this_00) {
        uVar20 = 0xff;
        this_01 = local_5f;
LAB_00581640:
        uVar19 = CONCAT44(uVar20,0xff);
LAB_00581645:
        uVar18 = 0xff;
LAB_0058164a:
        uStack_8c = 0x581651;
        puVar5 = (undefined2 *)
                 cocos2d::Color3B::Color3B
                           (this_01,uVar18,(uchar)uVar19,(uchar)((ulonglong)uVar19 >> 0x20));
        local_30 = *puVar5;
        local_2e = *(undefined1 *)(puVar5 + 1);
      }
      else {
        if (this_00[99] == (ShipModule)0x0) {
          uVar19 = 0x4000000040;
          uVar18 = '@';
          this_01 = local_62;
          goto LAB_0058164a;
        }
        cVar2 = (**(code **)(*(int *)this_00 + 0x14))();
        if (cVar2 != '\0') {
          uVar19 = 0;
          this_01 = local_65;
          goto LAB_00581645;
        }
        cVar2 = (**(code **)(*(int *)this_00 + 0x18))();
        if (cVar2 != '\0') {
          uVar20 = 0;
          this_01 = local_68;
          goto LAB_00581640;
        }
      }
      bVar3 = cocos2d::Color3B::operator!=
                        ((Color3B *)(*(int *)(*(int *)(this + 0x430) + iVar14) + 0x288),
                         (Color3B *)&local_30);
      if (bVar3) {
        UIRectangle::setColour(*(UIRectangle **)(*(int *)(this + 0x430) + iVar14));
        **(undefined1 **)(this + 0x288) = 1;
      }
      uStack_8c = 0x5816ca;
      strUsingArgs((char *)local_2c);
      local_8 = 0;
      pcVar11 = (char *)(*(int *)(this + 0x430) + 8 + iVar14);
      local_34 = pcVar11;
      if (0xf < *(uint *)(pcVar11 + 0x14)) {
        local_34 = *(char **)pcVar11;
      }
      local_38 = (ShipModule *)local_2c[0];
      bVar3 = std::_Traits_equal<>(local_34,*(uint *)(pcVar11 + 0x10),pcVar4,unaff_EDI);
      if (!bVar3) {
        iVar13 = *(int *)(this + 0x430);
        pbVar10 = (basic_string<> *)(iVar13 + 8 + iVar14);
        if (pbVar10 != (basic_string<> *)local_2c) {
          pbVar6 = (basic_string<> *)local_2c;
          if (0xf < local_18) {
            pbVar6 = (basic_string<> *)local_38;
          }
          std::basic_string<>::assign(pbVar10,(char *)pbVar6,local_1c);
          iVar13 = *(int *)(this + 0x430);
          local_38 = (ShipModule *)local_2c[0];
        }
        local_3c = (float)(*(int *)(this + 0x428) * local_40);
        piVar1 = *(int **)(iVar14 + 4 + iVar13);
        local_34 = (char *)(*(int *)(this + 0x42c) * local_48);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x138))();
          *(undefined4 *)(*(int *)(this + 0x430) + 4 + iVar14) = 0;
          iVar13 = *(int *)(this + 0x430);
        }
        std::basic_string<>::basic_string<>(abStack_94,(basic_string<> *)(iVar13 + 8 + iVar14));
        pSVar7 = loadSprite();
        local_54 = 0x3f000000;
        local_50 = 0x3f000000;
        *(Sprite **)(*(int *)(this + 0x430) + 4 + iVar14) = pSVar7;
        local_8._0_1_ = 1;
        (**(code **)(**(int **)(*(int *)(this + 0x430) + 4 + iVar14) + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        in_XMM0 = ZEXT416((uint)(float)(*(int *)(this + 0x428) / 2 + (int)local_3c));
        uStack_8c = 0x581821;
        (**(code **)(**(int **)(*(int *)(this + 0x430) + 4 + iVar14) + 0x48))();
        iVar14 = local_44;
        uStack_8c = *(undefined4 *)(*(int *)(this + 0x430) + 4 + local_44);
        uStack_90 = 0x581838;
        (**(code **)(*(int *)this + 0x10c))();
        **(undefined1 **)(this + 0x288) = 1;
      }
      if (0.0 < *(float *)(*(int *)(this_00 + 8) + 0xc4)) {
        piVar1 = *(int **)(*(int *)(this + 0x430) + 0x28 + iVar14);
        in_XMM0 = ZEXT416((uint)piVar1[0x10d]);
        fVar17 = (float)(int)(*(float *)(this_00 + 0x5c) /
                             (*(float *)(*(int *)(this_00 + 8) + 0xc4) / 100.0));
        if ((float)piVar1[0x10d] != fVar17) {
          piVar1[0x10d] = (int)fVar17;
          (**(code **)(*piVar1 + 0x294))();
        }
      }
      if (this_00[99] == (ShipModule)0x0) {
        fVar17 = 0.0;
        fVar15 = 0.0;
        SVar9 = (ShipModule)0x0;
      }
      else {
        ShipModule::getCurrentGenerationRate(this_00);
        fVar17 = in_XMM0._0_4_;
        SVar9 = this_00[99];
        if (SVar9 == (ShipModule)0x0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = *(float *)(*(int *)(this_00 + 8) + 200);
        }
      }
      if (fVar17 <= fVar15) {
LAB_005818e8:
        if (fVar17 == 0.0) {
          if (SVar9 == (ShipModule)0x0) goto LAB_005818f5;
          if (this_00[0x62] == (ShipModule)0x0) {
            local_3c = *(float *)(*(int *)(this_00 + 8) + 0xc0);
            auVar16 = ZEXT416((uint)local_3c);
            ComponentInterfaceInstance::getPowerModifier
                      (*(ComponentInterfaceInstance **)(this_00 + 0xc));
            fVar17 = auVar16._0_4_ * local_3c + local_3c;
          }
          else {
            local_34 = (char *)((float)*(int *)(this_00 + 100) / 100.0);
            local_3c = *(float *)(*(int *)(this_00 + 8) + 0xbc);
            auVar16 = ZEXT416((uint)local_3c);
            ComponentInterfaceInstance::getPowerModifier
                      (*(ComponentInterfaceInstance **)(this_00 + 0xc));
            fVar17 = (auVar16._0_4_ * local_3c + local_3c) * (float)local_34;
          }
          goto LAB_00581960;
        }
      }
      else {
        if (SVar9 != (ShipModule)0x0) {
          fVar17 = *(float *)(*(int *)(this_00 + 8) + 200);
          goto LAB_005818e8;
        }
LAB_005818f5:
        fVar17 = 0.0;
LAB_00581960:
        fVar17 = fVar17 * -1.0;
      }
      in_XMM0._0_8_ = (double)fVar17;
      in_XMM0._8_8_ = 0;
      (**(code **)(**(int **)(*(int *)(this + 0x430) + 0x24 + iVar14) + 0x298))();
      bVar3 = updateEmissionState(this_02,*(Sprite **)(*(int *)(this + 0x430) + 0x2c + iVar14),
                                  this_00);
      if (bVar3) {
        **(undefined1 **)(this + 0x288) = 1;
      }
      if (*(ShipModule *)(*(int *)(this + 0x430) + 0x34 + iVar14) != this_00[0x14]) {
        puVar8 = (undefined4 *)
                 (**(code **)(**(int **)(*(int *)(this + 0x430) + 0x30 + iVar14) + 0x5c))();
        local_5c = *puVar8;
        local_58 = puVar8[1];
        in_XMM0 = ZEXT416(local_58);
        local_8._0_1_ = 2;
        iVar13 = *(int *)(this + 0x430);
        piVar1 = *(int **)(iVar13 + 0x30 + iVar14);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x138))();
          *(undefined4 *)(*(int *)(this + 0x430) + 0x30 + iVar14) = 0;
          iVar13 = *(int *)(this + 0x430);
        }
        *(ShipModule *)(iVar13 + 0x34 + iVar14) = this_00[0x14];
        iVar13 = *(int *)(this + 0x430) + local_44;
        pSVar7 = renderEmcon(this,(bool)this_00[0x14]);
        iVar14 = local_44;
        *(Sprite **)(iVar13 + 0x30) = pSVar7;
        (**(code **)(**(int **)(*(int *)(this + 0x430) + 0x30 + local_44) + 0x4c))();
        local_8 = (uint)local_8._1_3_ << 8;
        **(undefined1 **)(this + 0x288) = 1;
      }
      local_40 = local_40 + 1;
      if (local_40 == 6) {
        local_48 = local_48 + -1;
        local_40 = 0;
        if (local_48 == -1) {
          if (0xf < local_18) {
            pnVar12 = (nothrow_t *)(local_18 + 1);
            pbVar10 = (basic_string<> *)local_38;
            if ((nothrow_t *)0xfff < pnVar12) {
              pbVar10 = *(basic_string<> **)(local_38 + -4);
              pnVar12 = (nothrow_t *)(local_18 + 0x24);
              if ((basic_string<> *)0x1f < (basic_string<> *)(local_38 + (-4 - (int)pbVar10)))
              goto LAB_00581af8;
            }
            operator_delete(pbVar10,pnVar12);
          }
          break;
        }
      }
      local_8 = -1;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pbVar10 = (basic_string<> *)local_38;
        if ((nothrow_t *)0xfff < pnVar12) {
          pbVar10 = *(basic_string<> **)(local_38 + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if ((basic_string<> *)0x1f < (basic_string<> *)(local_38 + (-4 - (int)pbVar10))) {
LAB_00581af8:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pbVar10,pnVar12);
      }
      local_44 = iVar14 + 0x38;
      local_4c = local_4c + 1;
      local_34 = *(char **)(g_gameData + 0xd0);
    } while (local_4c <
             (uint)(*(int *)(*(int *)(local_34 + 0x40) + 0x40) -
                    *(int *)(*(int *)(local_34 + 0x40) + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall UI_PowerScreen::updateEmissionState(class cocos2d::Sprite *,class
// ShipModule *)

bool __thiscall
UI_PowerScreen::updateEmissionState(UI_PowerScreen *this,Sprite *param_1,ShipModule *param_2)

{
  ShipModule *pSVar1;
  int iVar2;
  Sprite *pSVar3;
  bool bVar4;
  char cVar5;
  undefined3 *puVar6;
  Color3B *this_00;
  float in_XMM0_Da;
  ShipModule *pSVar7;
  float fVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  Color3B *pCVar12;
  
  pSVar3 = param_1;
  if (param_1 == (Sprite *)0x0) {
    return false;
  }
  if (param_2[99] == (ShipModule)0x0) {
LAB_00581c90:
    cVar5 = (**(code **)(*(int *)pSVar3 + 0xb8))();
    if (cVar5 != '\x01') {
      return false;
    }
    (**(code **)(*(int *)pSVar3 + 0xb4))(0);
    return true;
  }
  if (param_2[0x62] == (ShipModule)0x0) {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0xd4);
    ComponentInterfaceInstance::getEmissionsModifier
              (*(ComponentInterfaceInstance **)(param_2 + 0xc));
    fVar8 = (float)iVar2;
    param_1 = (Sprite *)(in_XMM0_Da * fVar8 + fVar8);
  }
  else {
    pSVar1 = param_2 + 0xc;
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0xcc);
    pSVar7 = (ShipModule *)((float)*(int *)(param_2 + 100) / 100.0);
    param_2 = pSVar7;
    ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)pSVar1);
    fVar8 = (float)iVar2;
    param_1 = (Sprite *)(((float)pSVar7 * fVar8 + fVar8) * (float)param_2);
  }
  if ((float)param_1 == 0.0) goto LAB_00581c90;
  cocos2d::Color3B::Color3B((Color3B *)&param_2,'\0',0xff,'\0');
  if ((float)param_1 < 250.0) {
    if (150.0 <= (float)param_1) {
      uVar11 = '\0';
      uVar10 = '\0';
      uVar9 = 0xff;
    }
    else if (50.0 <= (float)param_1) {
      uVar11 = '\0';
      uVar10 = 0xff;
      uVar9 = 0xff;
    }
    else {
      if ((float)param_1 < 5.0) goto LAB_00581c44;
      uVar11 = '\0';
      uVar10 = 0xff;
      uVar9 = '\0';
    }
  }
  else {
    uVar11 = '_';
    uVar10 = '_';
    uVar9 = 0xe8;
  }
  puVar6 = (undefined3 *)
           cocos2d::Color3B::Color3B((Color3B *)((int)&param_1 + 1),uVar9,uVar10,uVar11);
  param_2 = (ShipModule *)CONCAT13(param_2._3_1_,*puVar6);
LAB_00581c44:
  pCVar12 = (Color3B *)&param_2;
  this_00 = (Color3B *)(**(code **)(*(int *)pSVar3 + 0x254))();
  bVar4 = cocos2d::Color3B::operator!=(this_00,pCVar12);
  if ((!bVar4) && (cVar5 = (**(code **)(*(int *)pSVar3 + 0xb8))(), cVar5 != '\0')) {
    return false;
  }
  (**(code **)(*(int *)pSVar3 + 0xb4))(1);
  (**(code **)(*(int *)pSVar3 + 0x25c))(&param_2);
  return true;
}


// public: virtual void __thiscall UI_PowerScreen::specialDataCheckFunction(float)

void __thiscall UI_PowerScreen::specialDataCheckFunction(UI_PowerScreen *this,float param_1)

{
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    updateRender(this);
  }
  return;
}


// public: virtual void __thiscall UI_PowerScreen::mouseUp(class cocos2d::Vec2)

void __thiscall UI_PowerScreen::mouseUp(UI_PowerScreen *this,float param_2,float param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *this_00;
  undefined4 unaff_ESI;
  uint uVar3;
  undefined4 unaff_EDI;
  void *pvVar4;
  undefined *puVar5;
  
  puVar5 = &DAT_005c45e9;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if ((5 < (int)(param_2 / (float)*(int *)(this + 0x428))) ||
     (1 < (int)(param_3 / (float)*(int *)(this + 0x42c)))) {
    pvVar4 = ExceptionList;
    ExceptionList = &stack0xfffffff0;
    debugPrint("DETAIL","Invalid location for click.");
    ExceptionList = pvVar4;
    return;
  }
  uVar3 = (int)(param_2 / (float)*(int *)(this + 0x428)) +
          (int)(param_3 / (float)*(int *)(this + 0x42c)) * 6;
  this_00 = *(NetworkData **)(*(int *)(g_gameData + 0xd0) + 0x40);
  puVar1 = &stack0xfffffff0;
  pvVar4 = ExceptionList;
  if ((uint)(*(int *)(this_00 + 0x40) - *(int *)(this_00 + 0x3c) >> 2) <= uVar3) {
    ExceptionList = &stack0xfffffff0;
    debugPrint("DETAIL","invalid module clicked on");
    uVar3 = 0xffffffff;
    this_00 = extraout_ECX;
    puVar1 = ExceptionList;
  }
  ExceptionList = puVar1;
  if (g_gameLogic[0x71] != (GameLogic)0x0) {
    if (Singleton<>::instance == (NetworkData *)0x0) {
      Singleton<>::instance = operator_new(1);
      this_00 = extraout_ECX_00;
    }
    NetworkData::sendShipCommand
              (this_00,0x7b,(double)((ulonglong)uVar2 << 0x20),(double)CONCAT44(unaff_ESI,unaff_EDI)
               ,(double)CONCAT44(puVar5,pvVar4));
    updateRender(this);
    ExceptionList = pvVar4;
    return;
  }
  ShipInterface::doPwrSelectModule(*(Ship **)(g_gameData + 0xd0),uVar3,0,0);
  updateRender(this);
  ExceptionList = pvVar4;
  return;
}


// public: virtual void __thiscall UI_PowerScreen::mouseHoverUpdate(class cocos2d::Vec2)

void __thiscall UI_PowerScreen::mouseHoverUpdate(UI_PowerScreen *this,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint unaff_EDI;
  char acStack_44 [16];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ca559;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((int)(param_2 / (float)*(int *)(this + 0x428)) < 6) &&
     ((int)(param_3 / (float)*(int *)(this + 0x42c)) < 2)) {
    uVar1 = (int)(param_2 / (float)*(int *)(this + 0x428)) +
            (int)(param_3 / (float)*(int *)(this + 0x42c)) * 6;
    iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
    if ((uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) - iVar2 >> 2) <= uVar1)
    {
      ScreenInterface::clearToolTip(*(ScreenInterface **)(this + 0x278));
      ExceptionList = local_10;
      return;
    }
    piVar3 = *(int **)(iVar2 + uVar1 * 4);
    puVar7 = (undefined4 *)(piVar3[2] + 8);
    if (0xf < *(uint *)(piVar3[2] + 0x1c)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    cVar4 = (**(code **)(*piVar3 + 0x18))();
    pcVar6 = " (damaged)";
    if (cVar4 == '\0') {
      pcVar6 = "";
    }
    strUsingArgs(acStack_44,"%s %s%s",puVar7,(&PTR_s_Unknown_005e2e98)[*(int *)(piVar3[2] + 4)],
                 pcVar6);
    ScreenInterface::setToolTip(*(ScreenInterface **)(this + 0x278));
    ExceptionList = local_10;
    return;
  }
  iVar2 = *(int *)(this + 0x278);
  puVar7 = (undefined4 *)(iVar2 + 0xfc);
  uStack_34 = 0x581fa0;
  bVar5 = std::_Traits_equal<>("",0,(char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI)
  ;
  if (!bVar5) {
    *(undefined4 *)(iVar2 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar2 + 0x110)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    *(undefined1 *)puVar7 = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: class cocos2d::Sprite * __thiscall UI_PowerScreen::renderEmcon(bool)

Sprite * __thiscall UI_PowerScreen::renderEmcon(UI_PowerScreen *this,bool param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  Sprite *pSVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  bool bVar7;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  uint local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005cbadb;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  bVar7 = !param_1;
  if (bVar7) {
    puVar3 = (undefined4 *)
             strUsingArgs((char *)local_3c,"%c_Power_EmConIcon_Off.png",(int)(char)g_gameData[0xd4],
                          local_24);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    puVar3 = (undefined4 *)
             strUsingArgs((char *)local_54,"%c_Power_EmConIcon_On.png",(int)(char)g_gameData[0xd4],
                          local_24);
  }
  local_14 = (uint)bVar7;
  uVar2 = *puVar3;
  uVar1 = *(undefined8 *)(puVar3 + 4);
  puVar3[4] = 0;
  puVar3[5] = 0xf;
  *(undefined1 *)puVar3 = 0;
  pSVar4 = loadSprite(uVar2,puVar3[1],puVar3[2],puVar3[3],uVar1);
  local_14 = 0;
  if (bVar7) {
    if (0xf < local_28) {
      pnVar6 = (nothrow_t *)(local_28 + 1);
      pvVar5 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_3c[0] + -4);
        pnVar6 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  }
  local_14 = 0xffffffff;
  if (!bVar7) {
    if (0xf < local_40) {
      pnVar6 = (nothrow_t *)(local_40 + 1);
      pvVar5 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_54[0] + -4);
        pnVar6 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
  }
  local_14 = 2;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  local_14 = 0xffffffff;
  (**(code **)(*(int *)this + 0x10c))(pSVar4);
  ExceptionList = local_1c;
  pSVar4 = (Sprite *)__security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return pSVar4;
}
