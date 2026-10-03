#include "../ois.exe.h"


// public: virtual void __thiscall UI_BDBar::setValue(double)

void __thiscall UI_BDBar::setValue(UI_BDBar *this,double param_1)

{
  if ((*(float *)(this + 0x438) != (float)(int)param_1) || (this[0x434] != (UI_BDBar)0x0)) {
    this[0x434] = (UI_BDBar)0x0;
    *(float *)(this + 0x438) = (float)(int)param_1;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: __thiscall UI_BDBar::UI_BDBar(class ScreenInterface *,class Widget &,bool
// *,float,int,int)

void __thiscall
UI_BDBar::UI_BDBar(UI_BDBar *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,
                  float param_4,int param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  char *_String;
  void *pvVar3;
  nothrow_t *pnVar4;
  double dVar5;
  basic_string<> local_5c [8];
  undefined4 uStack_54;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca038;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_54 = 0x564952;
  ScreenElement::ScreenElement((ScreenElement *)this,param_1,param_2,param_3);
  local_8 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x428) = 0;
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined4 *)(this + 0x430) = 0;
  this[0x434] = (UI_BDBar)0x1;
  *(undefined4 *)(this + 0x438) = 0x40800000;
  *(undefined4 *)(this + 0x43c) = 0x3f800000;
  *(int *)(this + 0x440) = param_5;
  *(int *)(this + 0x444) = param_6;
  pcVar1 = BLACK_exref;
  *(undefined2 *)(this + 0x448) = *(undefined2 *)BLACK_exref;
  this[0x44a] = *(UI_BDBar *)(pcVar1 + 2);
  pcVar1 = GREEN_exref;
  *(undefined2 *)(this + 1099) = *(undefined2 *)GREEN_exref;
  this[0x44d] = *(UI_BDBar *)(pcVar1 + 2);
  pcVar1 = RED_exref;
  *(undefined2 *)(this + 0x44e) = *(undefined2 *)RED_exref;
  this[0x450] = *(UI_BDBar *)(pcVar1 + 2);
  local_5c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_5c,"maxlevel",8);
  bVar2 = Widget::hasOption(param_2);
  if (bVar2) {
    local_5c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_5c,"maxlevel",8);
    _String = (char *)Widget::getOption(param_2,local_2c);
    if (0xf < *(uint *)(_String + 0x14)) {
      _String = *(char **)_String;
    }
    dVar5 = atof(_String);
    *(float *)(this + 0x43c) = (float)dVar5;
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      pvVar3 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_2c[0] + -4);
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
  }
  this[0x435] = (UI_BDBar)(param_6 < param_5);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void * __thiscall UI_BDBar::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_BDBar::_scalar_deleting_destructor_(UI_BDBar *this,uint param_1)

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
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x458);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_BDBar::cleanupRender(void)

void __thiscall UI_BDBar::cleanupRender(UI_BDBar *this)

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
  return;
}


// public: virtual void __thiscall UI_BDBar::render(void)

void __thiscall UI_BDBar::render(UI_BDBar *this)

{
  int *piVar1;
  Sprite *pSVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  UI_BDBar *pUVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  undefined4 *puVar12;
  UI_BDBar *pUVar13;
  float10 fVar14;
  float fVar15;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  UI_BDBar *local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca0ae;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = this;
  (**(code **)(*(int *)this + 0x290))(local_14);
  if (*(float *)(this + 0x43c) == 0.0) goto LAB_005652c7;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"white.png",9);
  local_8 = 0;
  pSVar2 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  *(Sprite **)(this + 0x428) = pSVar2;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  iVar7 = *(int *)(this + 0x444);
  iVar5 = **(int **)(this + 0x428);
  iVar3 = (**(code **)(iVar5 + 0xb0))();
  iVar8 = *(int *)(this + 0x440);
  local_30 = *(float *)(iVar3 + 4);
  pfVar4 = (float *)(**(code **)(**(int **)(local_34 + 0x428) + 0xb0))();
  (**(code **)(iVar5 + 0x3c))((float)iVar8 / *pfVar4,(float)iVar7 / local_30);
  pUVar13 = local_34;
  (**(code **)(**(int **)(local_34 + 0x428) + 0x25c))(local_34 + 0x448);
  local_3c = 0;
  local_38 = 0.0;
  local_8 = 1;
  (**(code **)(**(int **)(pUVar13 + 0x428) + 0xa0))(&local_3c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pUVar13 + 0x108))(*(int *)(pUVar13 + 0x428),0xfffffffe);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"white.png",9);
  local_8 = 2;
  pSVar2 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  *(Sprite **)(pUVar13 + 0x430) = pSVar2;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  if (pUVar13[0x435] == (UI_BDBar)0x0) {
    iVar7 = **(int **)(pUVar13 + 0x430);
    iVar5 = *(int *)(pUVar13 + 0x440);
    pfVar4 = (float *)(**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    (**(code **)(iVar7 + 0x3c))((float)iVar5 / *pfVar4,0x3f800000);
  }
  else {
    iVar7 = **(int **)(pUVar13 + 0x430);
    local_30 = (float)*(int *)(pUVar13 + 0x444);
    iVar5 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    (**(code **)(iVar7 + 0x3c))(0x3f800000,local_30 / *(float *)(iVar5 + 4));
  }
  iVar7 = **(int **)(pUVar13 + 0x430);
  uVar6 = cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),'@','@','@');
  (**(code **)(iVar7 + 0x25c))(uVar6);
  (**(code **)(**(int **)(pUVar13 + 0x430) + 0x48))
            ((float)(*(int *)(pUVar13 + 0x440) / 2),(float)(*(int *)(pUVar13 + 0x444) / 2));
  local_3c = 0x3f000000;
  local_38 = 0.5;
  local_8 = 3;
  (**(code **)(**(int **)(pUVar13 + 0x430) + 0xa0))(&local_3c);
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pUVar13 + 0x108))(*(int *)(pUVar13 + 0x430),0xffffffff);
  local_40 = *(float *)pUVar13;
  iVar7 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
  local_30 = *(float *)(iVar7 + 4);
  iVar7 = **(int **)(pUVar13 + 0x428);
  pfVar4 = (float *)(**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
  piVar1 = *(int **)(local_34 + 0x428);
  fVar14 = (float10)(**(code **)(iVar7 + 0x30))();
  fVar15 = (float)(fVar14 * (float10)local_30);
  fVar14 = (float10)(**(code **)(*piVar1 + 0x28))();
  uVar6 = cocos2d::Size::Size((Size *)&local_3c,(float)(fVar14 * (float10)*pfVar4),fVar15);
  pUVar13 = local_34;
  (**(code **)((int)local_40 + 0xac))(uVar6);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,"white.png",9);
  local_8 = 4;
  pSVar2 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  *(Sprite **)(pUVar13 + 0x42c) = pSVar2;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_30 = *(float *)(pUVar13 + 0x438);
  if (local_30 < 0.0) {
    local_30 = local_30 * -1.0;
  }
  iVar7 = *(int *)(pUVar13 + 0x444);
  iVar5 = **(int **)(pUVar13 + 0x42c);
  if (pUVar13[0x435] == (UI_BDBar)0x0) {
    iVar8 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    local_40 = *(float *)(iVar8 + 4);
    local_38 = *(float *)(pUVar13 + 0x43c);
    iVar8 = *(int *)(pUVar13 + 0x440);
    pfVar4 = (float *)(**(code **)(**(int **)(local_34 + 0x42c) + 0xb0))();
    pUVar13 = local_34;
    (**(code **)(iVar5 + 0x3c))
              ((float)(iVar8 + -2) / *pfVar4,
               ((float)(iVar7 + -2) / local_40) * (local_30 / local_38) * 0.5);
    (**(code **)(**(int **)(pUVar13 + 0x42c) + 0x48))
              (0x3f800000,(float)(*(int *)(pUVar13 + 0x444) / 2));
    if (0.0 <= *(float *)(pUVar13 + 0x438)) {
      local_8 = 7;
      goto LAB_00565120;
    }
    if (*(float *)(pUVar13 + 0x438) < 0.0) {
      local_48 = 0;
      local_44 = 0x3f800000;
      local_8 = 8;
      puVar12 = &local_48;
      goto LAB_0056525a;
    }
  }
  else {
    iVar3 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    iVar8 = *(int *)(pUVar13 + 0x440);
    local_40 = *(float *)(iVar3 + 4);
    pfVar4 = (float *)(**(code **)(**(int **)(local_34 + 0x42c) + 0xb0))();
    pUVar13 = local_34;
    (**(code **)(iVar5 + 0x3c))
              (((float)(iVar8 + -2) / *pfVar4) * (local_30 / *(float *)(local_34 + 0x43c)) * 0.5,
               (float)(iVar7 + -2) / local_40);
    (**(code **)(**(int **)(pUVar13 + 0x42c) + 0x48))
              ((float)(*(int *)(pUVar13 + 0x440) / 2),0x3f800000);
    if (*(float *)(pUVar13 + 0x438) < 0.0) {
      if (0.0 <= *(float *)(pUVar13 + 0x438)) goto LAB_00565285;
      local_3c = 0x3f800000;
      local_38 = 0.0;
      local_8 = 6;
      puVar12 = &local_3c;
LAB_0056525a:
      (**(code **)(**(int **)(pUVar13 + 0x42c) + 0xa0))(puVar12);
      pUVar9 = pUVar13 + 0x44e;
    }
    else {
      local_8 = 5;
LAB_00565120:
      local_38 = 0.0;
      local_3c = 0;
      (**(code **)(**(int **)(pUVar13 + 0x42c) + 0xa0))(&local_3c);
      pUVar9 = pUVar13 + 1099;
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(pUVar13 + 0x42c) + 0x25c))(pUVar9);
  }
LAB_00565285:
  (**(code **)(*(int *)pUVar13 + 0x10c))(*(int *)(pUVar13 + 0x42c));
  (**(code **)(**(int **)(pUVar13 + 0x42c) + 0xb4))(*(float *)(pUVar13 + 0x438) != 0.0);
  **(undefined1 **)(pUVar13 + 0x288) = 1;
LAB_005652c7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
