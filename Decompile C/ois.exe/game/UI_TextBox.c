#include "../ois.exe.h"


// public: virtual void * __thiscall UI_TextBox::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_TextBox::_scalar_deleting_destructor_(UI_TextBox *this,uint param_1)

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
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0x138))(1,uVar1);
    *(undefined4 *)(this + 0x430) = 0;
  }
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1);
    *(undefined4 *)(this + 0x42c) = 0;
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


// public: virtual void __thiscall UI_TextBox::cleanupRender(void)

void __thiscall UI_TextBox::cleanupRender(UI_TextBox *this)

{
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0x138))(1);
    *(undefined4 *)(this + 0x430) = 0;
  }
  if (*(int **)(this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x42c) + 0x138))(1);
    *(undefined4 *)(this + 0x42c) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_TextBox::render(void)

void __thiscall UI_TextBox::render(UI_TextBox *this)

{
  basic_string<> *pbVar1;
  int iVar2;
  void **ppvVar3;
  UIText *pUVar4;
  basic_string<> *pbVar5;
  Scale9Sprite *pSVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 ****ppppuVar10;
  nothrow_t *pnVar11;
  char *pcVar12;
  Size local_6c [8];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44;
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_38;
  undefined8 local_34;
  void *local_2c [4];
  basic_string<> *local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc805;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  (**(code **)(*(int *)this + 0x290))();
  pbVar1 = *(basic_string<> **)(this + 0x448);
  if (pbVar1 == (basic_string<> *)0x0) {
    uStack_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_1c = pbVar1;
    std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
    ppvVar3 = local_2c;
    uVar8 = 1;
  }
  else {
    ppvVar3 = (void **)std::basic_string<>::basic_string<>((basic_string<> *)local_5c,pbVar1);
    uVar8 = 2;
  }
  local_44 = *ppvVar3;
  pvStack_40 = ppvVar3[1];
  pvStack_3c = ppvVar3[2];
  pvStack_38 = ppvVar3[3];
  local_34 = *(undefined8 *)(ppvVar3 + 4);
  ppvVar3[4] = (void *)0x0;
  ppvVar3[5] = (void *)0xf;
  *(undefined1 *)ppvVar3 = 0;
  local_8 = 1;
  if ((uVar8 & 2) != 0) {
    local_60 = uVar8 & 0xfffffffd;
    if (0xf < local_48) {
      pnVar11 = (nothrow_t *)(local_48 + 1);
      pvVar9 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_5c[0] + -4);
        pnVar11 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    uVar8 = local_60;
  }
  local_8._0_1_ = 2;
  if (((uVar8 & 1) != 0) && (0xf < uStack_18)) {
    pnVar11 = (nothrow_t *)(uStack_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar11);
  }
  if (this[0x428] == (UI_TextBox)0x0) {
    if (((this[0x440] == (UI_TextBox)0x0) || (this[0x418] == (UI_TextBox)0x0)) ||
       (pcVar12 = "`%`an", *(uint *)(this + 0x438) <= *(uint *)(*(int *)(this + 0x448) + 0x10))) {
      pcVar12 = "";
    }
    ppppuVar10 = &local_44;
    if (0xf < local_34._4_4_) {
      ppppuVar10 = (undefined4 ****)local_44;
    }
    strUsingArgs(&stack0xffffff70,"`7%s%s",ppppuVar10,pcVar12);
    pUVar4 = UIText::create(0);
    *(UIText **)(this + 0x42c) = pUVar4;
    local_64 = 0;
    local_60 = 0x3f000000;
    local_8._0_1_ = 6;
    (**(code **)(*(int *)pUVar4 + 0xa0))();
    local_8._0_1_ = 2;
    (**(code **)(**(int **)(this + 0x42c) + 0x48))();
    (**(code **)(*(int *)this + 0x108))();
    pcVar12 = "%c_TextBox_Selected.png";
    if (this[0x418] == (UI_TextBox)0x0) {
      pcVar12 = "%c_TextBox_Unselected.png";
    }
    pbVar5 = (basic_string<> *)strUsingArgs((char *)local_2c,pcVar12);
    local_8._0_1_ = 7;
    pSVar6 = cocos2d::ui::Scale9Sprite::create(pbVar5);
    local_8._0_1_ = 2;
    *(Scale9Sprite **)(this + 0x430) = pSVar6;
    if (0xf < uStack_18) {
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    local_8._0_1_ = 8;
  }
  else {
    ppppuVar10 = &local_44;
    if (0xf < local_34._4_4_) {
      ppppuVar10 = (undefined4 ****)local_44;
    }
    strUsingArgs(&stack0xffffff70,"`8%s",ppppuVar10);
    pUVar4 = UIText::create(0);
    *(UIText **)(this + 0x42c) = pUVar4;
    local_64 = 0;
    local_60 = 0x3f000000;
    local_8._0_1_ = 3;
    (**(code **)(*(int *)pUVar4 + 0xa0))();
    local_8._0_1_ = 2;
    (**(code **)(**(int **)(this + 0x42c) + 0x48))();
    (**(code **)(*(int *)this + 0x108))();
    pbVar5 = (basic_string<> *)strUsingArgs((char *)local_2c,"%c_TextBox_Greyed.png");
    local_8._0_1_ = 4;
    pSVar6 = cocos2d::ui::Scale9Sprite::create(pbVar5);
    local_8._0_1_ = 2;
    *(Scale9Sprite **)(this + 0x430) = pSVar6;
    if (0xf < uStack_18) {
      pnVar11 = (nothrow_t *)(uStack_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    local_8._0_1_ = 5;
  }
  local_60 = 0;
  local_64 = 0;
  (**(code **)(**(int **)(this + 0x430) + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(**(int **)(this + 0x430) + 0x48))(0,0);
  iVar2 = **(int **)(this + 0x430);
  uVar7 = cocos2d::Size::Size((Size *)&local_64,(float)*(int *)(this + 0x2a0),
                              (float)*(int *)(this + 0x2a4));
  (**(code **)(iVar2 + 0xac))(uVar7);
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)(this + 0x430));
  iVar2 = *(int *)this;
  uVar7 = cocos2d::Size::Size(local_6c,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4));
  (**(code **)(iVar2 + 0xac))(uVar7);
  **(undefined1 **)(this + 0x288) = 1;
  if (0xf < local_34._4_4_) {
    pnVar11 = (nothrow_t *)(local_34._4_4_ + 1);
    ppppuVar10 = (undefined4 ****)local_44;
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppuVar10 = (undefined4 ****)local_44[-1];
      pnVar11 = (nothrow_t *)(local_34._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)ppppuVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar10,pnVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_TextBox::specialDataCheckFunction(float)

void __thiscall UI_TextBox::specialDataCheckFunction(UI_TextBox *this,float param_1)

{
  float fVar1;
  
  if (((ShipData::currentlyBoardedShip != (Ship *)0x0) && (this[0x418] != (UI_TextBox)0x0)) &&
     (fVar1 = *(float *)(this + 0x444), *(float *)(this + 0x444) = fVar1 - param_1,
     fVar1 - param_1 <= 0.0)) {
    *(undefined4 *)(this + 0x444) = 0x3f800000;
    this[0x440] = (UI_TextBox)(this[0x440] == (UI_TextBox)0x0);
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual void __thiscall UI_TextBox::giveFocus(void)

void __thiscall UI_TextBox::giveFocus(UI_TextBox *this)

{
  *(undefined4 *)(this + 0x444) = 0x3f800000;
  this[0x440] = (UI_TextBox)0x1;
  return;
}


// public: virtual void __thiscall UI_TextBox::loseFocus(void)

void __thiscall UI_TextBox::loseFocus(UI_TextBox *this)

{
  ShipDataInputType in_stack_00000004;
  
  runDataInputSync(in_stack_00000004);
  return;
}


// public: virtual bool __thiscall UI_TextBox::keyDown(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall UI_TextBox::keyDown(UI_TextBox *this,KeyCode param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  PresentationInterface *pPVar5;
  char *pcVar6;
  basic_string<> *pbVar7;
  Ship *pSVar8;
  SoundEngine *this_00;
  PresentationInterface *this_01;
  void *pvVar9;
  basic_string<> *pbVar10;
  char cVar11;
  nothrow_t *pnVar12;
  basic_string<> *pbVar13;
  char *pcVar14;
  uint unaff_EDI;
  KeyCode local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c2f60;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar4;
  if (((this[0x428] != (UI_TextBox)0x0) || (this[0x418] == (UI_TextBox)0x0)) ||
     (*(basic_string<> **)(this + 0x448) == (basic_string<> *)0x0)) goto LAB_0058e6e7;
  std::basic_string<>::basic_string<>((basic_string<> *)local_2c,*(basic_string<> **)(this + 0x448))
  ;
  local_8 = 0;
  if (((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) {
    if (*(int *)(this + 0x3f4) == 5) {
      ShipInterface::doSendChatMessage(*(Ship **)(g_gameData + 0xd0),0,0,0);
    }
LAB_0058e647:
    (**(code **)(*(int *)this + 0x294))();
    pSVar8 = ShipData::currentlyBoardedShip;
    if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
      pSVar8 = *(Ship **)(g_gameData + 0xd0);
    }
    this_00 = Singleton<>::getInstance();
    SoundEngine::playRandomKeyPress(this_00,pSVar8);
  }
  else {
    if (((param_1 == 7) || (param_1 == 0x17)) || (param_1 == 0x2e)) {
      pbVar10 = *(basic_string<> **)(this + 0x448);
      uVar1 = *(uint *)(pbVar10 + 0x10);
      if (uVar1 < 2) {
        if (uVar1 != 1) goto LAB_0058e672;
        *(undefined4 *)(pbVar10 + 0x10) = 0;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar10 = *(basic_string<> **)pbVar10;
        }
        *pbVar10 = (basic_string<>)0x0;
      }
      else {
        pbVar13 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar13 = *(basic_string<> **)pbVar10;
        }
        std::basic_string<>::erase(pbVar10,&local_48,pbVar13 + (uVar1 - 1));
      }
      goto LAB_0058e647;
    }
    local_48 = param_1;
    pPVar5 = Singleton<>::getInstance();
    if (local_48 - 0x7c < 0x1a) {
      if (pPVar5[0x2f8] == (PresentationInterface)0x0) {
        cVar11 = (char)local_48 + -0x1b;
      }
      else {
        cVar11 = (char)local_48 + -0x3b;
      }
    }
    else {
      this_01 = pPVar5 + 0x2f0;
      if (pPVar5[0x2f8] == (PresentationInterface)0x0) {
        this_01 = pPVar5 + 0x2e8;
      }
      pcVar6 = std::map<>::operator[]((map<> *)this_01,&local_48);
      cVar11 = *pcVar6;
    }
    if ((cVar11 != '\0') && (*(uint *)(*(int *)(this + 0x448) + 0x10) < *(uint *)(this + 0x438))) {
      pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"%c",(int)cVar11);
      local_8._0_1_ = 1;
      std::basic_string<>::append(*(basic_string<> **)(this + 0x448),pbVar7);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_30) {
        pnVar12 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar12 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar12);
      }
      goto LAB_0058e647;
    }
  }
LAB_0058e672:
  pcVar6 = *(char **)(this + 0x448);
  pcVar14 = pcVar6;
  if (0xf < *(uint *)(pcVar6 + 0x14)) {
    pcVar14 = *(char **)pcVar6;
  }
  bVar2 = std::_Traits_equal<>(pcVar14,*(uint *)(pcVar6 + 0x10),pcVar4,unaff_EDI);
  if (!bVar2) {
    runDataInputSync((ShipDataInputType)pcVar4);
  }
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar12);
  }
LAB_0058e6e7:
  ExceptionList = local_10;
  uVar3 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: virtual bool __thiscall UI_TextBox::keyUp(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall UI_TextBox::keyUp(UI_TextBox *this,KeyCode param_1)

{
  int iVar1;
  int iVar2;
  PresentationInterface *pPVar3;
  
  if ((this[0x428] == (UI_TextBox)0x0) && (this[0x418] != (UI_TextBox)0x0)) {
    if (((param_1 == 0xa4) || ((param_1 == 0x23 || (param_1 == 10)))) &&
       ((this[0x434] == (UI_TextBox)0x0 &&
        ((((pPVar3 = Singleton<>::getInstance(), *(int *)(pPVar3 + 0x350) != 0 &&
           (iVar1 = *(int *)(pPVar3 + 0x354), iVar1 != 0)) &&
          (iVar2 = *(int *)(iVar1 + 0x164), iVar2 != 0)) && (*(char *)(iVar2 + 0x418) != '\0'))))))
    {
      *(undefined1 *)(iVar2 + 0x418) = 0;
      (**(code **)(**(int **)(iVar1 + 0x164) + 0x2c0))();
      (**(code **)(**(int **)(iVar1 + 0x164) + 0x294))();
      *(undefined4 *)(iVar1 + 0x164) = 0;
    }
    return true;
  }
  return false;
}
