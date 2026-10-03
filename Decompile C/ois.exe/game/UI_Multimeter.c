#include "../ois.exe.h"


// public: virtual void * __thiscall UI_Multimeter::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_Multimeter::_scalar_deleting_destructor_(UI_Multimeter *this,uint param_1)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)(this + 0x428) = 0;
  }
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1);
    *(undefined4 *)(this + 0x42c) = 0;
  }
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0x138))(1);
    *(undefined4 *)(this + 0x430) = 0;
  }
  if (*(int **)(this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x434) + 0x138))(1);
    *(undefined4 *)(this + 0x434) = 0;
  }
  if (*(int **)(this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x438) + 0x138))(1);
    *(undefined4 *)(this + 0x438) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x448);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_Multimeter::cleanupRender(void)

void __thiscall UI_Multimeter::cleanupRender(UI_Multimeter *this)

{
  if (*(int **)(this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x428) + 0x138))(1);
    *(undefined4 *)(this + 0x428) = 0;
  }
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1);
    *(undefined4 *)(this + 0x42c) = 0;
  }
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0x138))(1);
    *(undefined4 *)(this + 0x430) = 0;
  }
  if (*(int **)(this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x434) + 0x138))(1);
    *(undefined4 *)(this + 0x434) = 0;
  }
  if (*(int **)(this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x438) + 0x138))(1);
    *(undefined4 *)(this + 0x438) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_Multimeter::render(void)

void __thiscall UI_Multimeter::render(UI_Multimeter *this)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  Sprite *pSVar4;
  float *pfVar5;
  uint unaff_EDI;
  basic_string<> abStack_7c [8];
  undefined4 uStack_74;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  uint uVar6;
  uint uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cae92;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  local_14 = *(undefined4 *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0x70);
  puStack_3c = (undefined4 *)0x574d50;
  bVar2 = std::_Traits_equal<>("enceladus",9,pcVar3,unaff_EDI);
  if (bVar2) {
    uVar6 = 0x23;
    pcVar3 = "Enceladus_Multimeter_Background.png";
  }
  else {
    puStack_3c = (undefined4 *)0x574d7d;
    bVar2 = std::_Traits_equal<>("proxima",7,pcVar3,unaff_EDI);
    if (bVar2) {
      uVar6 = 0x21;
      pcVar3 = "Proxima_Multimeter_Background.png";
    }
    else {
      puStack_3c = (undefined4 *)0x574daa;
      bVar2 = std::_Traits_equal<>("remora",6,pcVar3,unaff_EDI);
      if (bVar2) {
        uVar6 = 0x20;
        pcVar3 = "Remora_Multimeter_Background.png";
      }
      else {
        uVar6 = 0x22;
        pcVar3 = "Ventarii_Multimeter_Background.png";
      }
    }
  }
  uStack_48 = uStack_48 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&uStack_48,pcVar3,uVar6);
  pSVar4 = loadSprite();
  *(Sprite **)(this + 0x428) = pSVar4;
  puStack_3c = (undefined4 *)0x574dfc;
  (**(code **)(*(int *)this + 0x108))();
  uStack_40 = 0;
  puStack_3c = (undefined4 *)0xf;
  fStack_5c = 8.017711e-39;
  std::basic_string<>::assign
            ((basic_string<> *)&stack0xffffffb0,"Ventarii_Multimeter_Indicator.png",0x21);
  pSVar4 = loadSprite();
  *(Sprite **)(this + 0x42c) = pSVar4;
  local_18 = 0x3f000000;
  local_14 = 0;
  local_8 = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x574e4f;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  local_8 = 0xffffffff;
  iVar1 = **(int **)(this + 0x42c);
  uStack_40 = 0x574e6c;
  pfVar5 = (float *)(**(code **)(**(int **)(this + 0x428) + 0xb0))();
  fStack_44 = *pfVar5 * 0.5;
  uStack_40 = 0x3f800000;
  uStack_48 = 0x574e91;
  (**(code **)(iVar1 + 0x48))();
  uStack_48 = *(uint *)(this + 0x43c);
  (**(code **)(**(int **)(this + 0x42c) + 0xbc))();
  (**(code **)(*(int *)this + 0x108))();
  uStack_68 = uStack_68 & 0xffffff00;
  uStack_74 = 0x574ee1;
  std::basic_string<>::assign
            ((basic_string<> *)&uStack_68,"Ventarii_Multimeter_Indicator_Base.png",0x26);
  pSVar4 = loadSprite();
  *(Sprite **)(this + 0x430) = pSVar4;
  local_8 = 1;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  local_8 = 0xffffffff;
  iVar1 = **(int **)(this + 0x430);
  pfVar5 = (float *)(**(code **)(**(int **)(this + 0x428) + 0xb0))();
  fStack_5c = *pfVar5 * 0.5;
  uStack_60 = 0x574f54;
  (**(code **)(iVar1 + 0x48))();
  uStack_60 = 1;
  uStack_64 = *(undefined4 *)(this + 0x430);
  uStack_68 = 0x574f66;
  (**(code **)(*(int *)this + 0x108))();
  uStack_68 = 0xf;
  abStack_7c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(abStack_7c,"Ventarii_Multimeter_Border.png",0x1e);
  pSVar4 = loadSprite();
  *(Sprite **)(this + 0x434) = pSVar4;
  uStack_68 = 3;
  (**(code **)(*(int *)this + 0x108))();
  **(undefined1 **)(this + 0x288) = 1;
  iVar1 = *(int *)this;
  (**(code **)(**(int **)(this + 0x428) + 0xb0))();
  uStack_74 = 0x574fc5;
  (**(code **)(iVar1 + 0xac))();
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Multimeter::specialDataCheckFunction(float)

void __thiscall UI_Multimeter::specialDataCheckFunction(UI_Multimeter *this,float param_1)

{
  ShipModule *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  uint uVar9;
  basic_string<> abStack_30 [12];
  undefined4 uStack_24;
  Sprite *pSStack_20;
  
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8);
  if (iVar2 == -1) {
    return;
  }
  pSStack_20 = (Sprite *)0x57501c;
  pSVar1 = SystemManager::getModule(*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),iVar2);
  if (pSVar1 == (ShipModule *)0x0) {
    return;
  }
  iVar2 = ComponentInterfaceInstance::getEfficiencyPercent
                    (*(ComponentInterfaceInstance **)(pSVar1 + 0xc));
  iVar2 = iVar2 / 2;
  if (100 < iVar2) {
    iVar2 = 100;
  }
  iVar4 = (int)(((float)iVar2 / 100.0) * 172.0 - 86.0);
  fVar6 = (float)iVar4;
  if (fVar6 == *(float *)(this + 0x440)) {
    iVar3 = rand();
    fVar6 = (float)iVar4 + (((float)iVar3 / 32767.0) * 3.0 - 1.5);
  }
  *(float *)(this + 0x440) = fVar6;
  if ((pSVar1[0x1d] == (ShipModule)0x0) && (*(float *)(this + 0x43c) == -86.0)) {
    *(float *)(this + 0x43c) = fVar6;
  }
  else {
    pSVar1[0x1d] = (ShipModule)0x0;
    fVar6 = *(float *)(this + 0x440);
  }
  fVar7 = *(float *)(this + 0x43c);
  if (fVar7 == fVar6) goto LAB_0057515b;
  if (fVar6 <= fVar7) {
    if (fVar6 < fVar7) {
      fVar7 = fVar7 - param_1 * 90.0;
      bVar5 = fVar6 < fVar7;
      goto LAB_00575129;
    }
  }
  else {
    fVar7 = param_1 * 90.0 + fVar7;
    bVar5 = fVar7 < fVar6;
LAB_00575129:
    *(float *)(this + 0x43c) = fVar7;
    if (!bVar5 && fVar7 != fVar6) {
      *(float *)(this + 0x43c) = fVar6;
    }
  }
  pSStack_20 = (Sprite *)0x575152;
  (**(code **)(**(int **)(this + 0x42c) + 0xbc))();
  **(undefined1 **)(this + 0x288) = 1;
LAB_0057515b:
  if (iVar2 == 0) {
    if ((this[0x444] == (UI_Multimeter)0x0) && (*(int *)(this + 0x438) != 0)) {
      return;
    }
    this[0x444] = (UI_Multimeter)0x0;
    if (*(int **)(this + 0x438) != (int *)0x0) {
      pSStack_20 = (Sprite *)0x575194;
      (**(code **)(**(int **)(this + 0x438) + 0x138))();
      *(undefined4 *)(this + 0x438) = 0;
    }
    uVar9 = 0x20;
    pcVar8 = "Ventarii_Multimeter_RedLight.png";
  }
  else {
    if ((this[0x444] != (UI_Multimeter)0x0) && (*(int *)(this + 0x438) != 0)) {
      return;
    }
    this[0x444] = (UI_Multimeter)0x1;
    if (*(int **)(this + 0x438) != (int *)0x0) {
      pSStack_20 = (Sprite *)0x5751d4;
      (**(code **)(**(int **)(this + 0x438) + 0x138))();
      *(undefined4 *)(this + 0x438) = 0;
    }
    uVar9 = 0x22;
    pcVar8 = "Ventarii_Multimeter_GreenLight.png";
  }
  pSStack_20 = (Sprite *)0x0;
  abStack_30[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(abStack_30,pcVar8,uVar9);
  pSStack_20 = loadSprite();
  *(Sprite **)(this + 0x438) = pSStack_20;
  uStack_24 = 0x57521b;
  (**(code **)(*(int *)this + 0x108))();
  return;
}
