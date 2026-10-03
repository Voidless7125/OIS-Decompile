#include "../ois.exe.h"


// public: virtual void * __thiscall UI_Selector::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_Selector::_scalar_deleting_destructor_(UI_Selector *this,uint param_1)

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
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1,uVar1);
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
  if (*(int **)(this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x43c) + 0x138))(1);
    *(undefined4 *)(this + 0x43c) = 0;
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x450);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_Selector::cleanupRender(void)

void __thiscall UI_Selector::cleanupRender(UI_Selector *this)

{
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
  if (*(int **)(this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x43c) + 0x138))(1);
    *(undefined4 *)(this + 0x43c) = 0;
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_Selector::render(void)

void __thiscall UI_Selector::render(UI_Selector *this)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  basic_string<> *pbVar4;
  Scale9Sprite *pSVar5;
  UIText *pUVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  undefined4 uVar9;
  Size local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  char local_2e;
  char local_2d;
  void *local_2c [5];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cbee6;
  local_10 = ExceptionList;
  puVar3 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = puVar3;
  (**(code **)(*(int *)this + 0x290))();
  bVar2 = shipDataCanPrev((ShipDataInputType)puVar3);
  local_2d = bVar2;
  local_2e = shipDataCanNext((ShipDataInputType)puVar3);
  if (!bVar2) {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
  }
  else {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
  }
  local_8 = (uint)!bVar2;
  pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
  local_8 = 0xffffffff;
  *(Scale9Sprite **)(this + 0x42c) = pSVar5;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_00584839;
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_38 = 0;
  local_34 = 0;
  local_8 = 2;
  (**(code **)(**(int **)(this + 0x42c) + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x42c) + 0x48))();
  iVar1 = **(int **)(this + 0x42c);
  cocos2d::Size::Size((Size *)&local_38,11.0,12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  if (local_2d == '\0') {
    uVar9 = 0x38;
  }
  else {
    uVar9 = 0x37;
    if (this[0x448] != (UI_Selector)0x0) {
      uVar9 = 0x25;
    }
  }
  strUsingArgs(&stack0xffffff84,"`%c`a3",uVar9);
  pUVar6 = UIText::create();
  *(UIText **)(this + 0x430) = pUVar6;
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_8 = 3;
  (**(code **)(*(int *)pUVar6 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x430) + 0x48))();
  (**(code **)(*(int *)this + 0x108))();
  if ((local_2e == '\0') && (local_2d == '\0')) {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 4;
  }
  else {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 5;
  }
  pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
  local_8 = 0xffffffff;
  *(Scale9Sprite **)(this + 0x43c) = pSVar5;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_00584839;
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_38 = 0;
  local_34 = 0;
  local_8 = 6;
  (**(code **)(**(int **)(this + 0x43c) + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x43c) + 0x48))();
  iVar1 = **(int **)(this + 0x43c);
  cocos2d::Size::Size((Size *)&local_38,(float)*(int *)(this + 0x44c),12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff84,*(basic_string<> **)(this + 0x444));
  pUVar6 = UIText::create();
  *(UIText **)(this + 0x440) = pUVar6;
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_8 = 7;
  (**(code **)(*(int *)pUVar6 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x440) + 0x48))();
  (**(code **)(*(int *)this + 0x108))();
  if (local_2e == '\0') {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 9;
    pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
    local_8 = 0xffffffff;
    *(Scale9Sprite **)(this + 0x434) = pSVar5;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_00584839;
      }
      operator_delete(pvVar7,pnVar8);
    }
    uVar9 = 0x38;
  }
  else {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 8;
    pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
    local_8 = 0xffffffff;
    *(Scale9Sprite **)(this + 0x434) = pSVar5;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
LAB_00584839:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    uVar9 = 0x37;
    if (this[0x449] != (UI_Selector)0x0) {
      uVar9 = 0x25;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_8 = 10;
  (**(code **)(**(int **)(this + 0x434) + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x434) + 0x48))();
  iVar1 = **(int **)(this + 0x434);
  cocos2d::Size::Size((Size *)&local_38,11.0,12.0);
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  strUsingArgs(&stack0xffffff84,"`%c`a4",uVar9);
  pUVar6 = UIText::create();
  *(UIText **)(this + 0x438) = pUVar6;
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_8 = 0xb;
  (**(code **)(*(int *)pUVar6 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x438) + 0x48))();
  (**(code **)(*(int *)this + 0x108))();
  iVar1 = *(int *)this;
  cocos2d::Size::Size(local_40,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4));
  (**(code **)(iVar1 + 0xac))();
  **(undefined1 **)(this + 0x288) = 1;
  ExceptionList = local_10;
  __security_check_cookie((int)((uint)local_14 ^ (uint)&stack0xfffffffc));
  return;
}


// public: virtual void __thiscall UI_Selector::specialDataCheckFunction(float)

void __thiscall UI_Selector::specialDataCheckFunction(UI_Selector *this,float param_1)

{
  UI_Selector UVar1;
  UI_Selector UVar2;
  ShipDataInputType unaff_ESI;
  
  UVar1 = (UI_Selector)shipDataCanPrev(unaff_ESI);
  UVar2 = (UI_Selector)shipDataCanNext(unaff_ESI);
  if ((UVar1 != this[0x428]) || (UVar2 != this[0x429])) {
    this[0x429] = UVar2;
    this[0x428] = UVar1;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual void __thiscall UI_Selector::mouseMove(class cocos2d::Vec2)

void __thiscall UI_Selector::mouseMove(UI_Selector *this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c45e9;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar1 = checkButtonStates(this,param_2,param_3);
  if (bVar1) {
    (**(code **)(*(int *)this + 0x294))(uVar2);
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Selector::mouseUp(class cocos2d::Vec2)

void __thiscall UI_Selector::mouseUp(UI_Selector *this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  ShipDataInputType SVar3;
  SoundEngine *this_00;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c9299;
  local_10 = ExceptionList;
  SVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  checkButtonStates(this,param_2,param_3);
  bVar1 = shipDataCanPrev(SVar3);
  bVar2 = shipDataCanNext(SVar3);
  if ((this[0x448] == (UI_Selector)0x0) || (!bVar1)) {
    if ((this[0x449] == (UI_Selector)0x0) || (!bVar2)) goto LAB_00584f74;
    shipDataChangeNext(SVar3);
    SVar5 = 8;
  }
  else {
    shipDataChangePrev(SVar3);
    SVar5 = 9;
  }
  iVar6 = -1;
  pSVar4 = *(Ship **)(g_gameData + 0xd0);
  this_00 = Singleton<>::getInstance();
  SoundEngine::playSound(this_00,pSVar4,SVar5,iVar6);
LAB_00584f74:
  *(undefined2 *)(this + 0x448) = 0;
  (**(code **)(*(int *)this + 0x294))();
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Selector::mouseCancel(void)

void __thiscall UI_Selector::mouseCancel(UI_Selector *this)

{
  *(undefined2 *)(this + 0x448) = 0;
  return;
}


// public: bool __thiscall UI_Selector::checkButtonStates(class cocos2d::Vec2)

bool __thiscall UI_Selector::checkButtonStates(UI_Selector *this,float param_2)

{
  bool bVar1;
  bool bVar2;
  UI_Selector UVar3;
  undefined1 *puVar4;
  UI_Selector UVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ca559;
  local_10 = ExceptionList;
  puVar4 = (undefined1 *)((uint)___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  bVar1 = shipDataCanPrev((ShipDataInputType)puVar4);
  bVar2 = shipDataCanNext((ShipDataInputType)puVar4);
  UVar5 = (UI_Selector)0x0;
  if (((bVar1) && (0.0 <= param_2)) && (param_2 < 11.0)) {
    UVar5 = (UI_Selector)0x1;
  }
  UVar3 = (UI_Selector)0x0;
  if ((bVar2) && ((float)(*(int *)(this + 0x2a0) + -0xb) <= param_2)) {
    UVar3 = (UI_Selector)(param_2 <= (float)*(int *)(this + 0x2a0));
  }
  if ((UVar5 == this[0x448]) && (UVar3 == this[0x449])) {
    ExceptionList = local_10;
    return false;
  }
  this[0x449] = UVar3;
  this[0x448] = UVar5;
  ExceptionList = local_10;
  return true;
}
