#include "../ois.exe.h"


// public: virtual void __thiscall UI_TextField::cleanup(void)

void __thiscall UI_TextField::cleanup(UI_TextField *this)

{
  (**(code **)(*(int *)this + 0x290))();
                    // WARNING: Could not recover jumptable at 0x0056454e. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::cleanup((Node *)this);
  return;
}


// public: __thiscall UI_TextField::UI_TextField(class ScreenInterface *,class Widget &,bool *)

void __thiscall
UI_TextField::UI_TextField
          (UI_TextField *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)

{
  bool bVar1;
  char *pcVar2;
  Size *pSVar3;
  UI_TextField *pUVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint unaff_EDI;
  basic_string<> local_70 [8];
  undefined4 uStack_68;
  Size local_40 [4];
  UI_TextField *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  uint local_1c;
  char *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc85c;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uStack_68 = 0x58e7f2;
  local_3c = this;
  local_18 = pcVar2;
  ScreenElement::ScreenElement((ScreenElement *)this,param_1,param_2,param_3);
  pUVar4 = this + 0x43c;
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0x428) = 0;
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined4 *)(this + 0x430) = 0;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x450) = 0xf;
  *pUVar4 = (UI_TextField)0x0;
  *(undefined4 *)(this + 0x464) = 0;
  *(undefined4 *)(this + 0x468) = 0xf;
  this[0x454] = (UI_TextField)0x0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x470) = 0;
  *(undefined4 *)(this + 0x474) = 0;
  *(undefined4 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x47c) = 0;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined4 *)(this + 0x484) = 0;
  *(undefined4 *)(this + 0x488) = 0;
  *(undefined4 *)(this + 0x48c) = 0;
  *(int *)(this + 0x490) = *(int *)(param_2 + 0x10) + -0x1a;
  local_70[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_70,"sticktobottom",0xd);
  bVar1 = Widget::getOptionAsBool(param_2);
  if (bVar1) {
    *(undefined2 *)(this + 0x428) = 0x101;
  }
  this[0x284] = (UI_TextField)0x1;
  this[0x286] = (UI_TextField)0x1;
  pSVar3 = (Size *)cocos2d::Size::Size(local_40,(float)*(int *)(this + 0x2a0),
                                       (float)*(int *)(this + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this,pSVar3);
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    local_34 = *(undefined4 *)(this + 1000);
    local_38 = *(undefined4 *)(g_gameData + 0xd0);
    if (*(int **)(this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    uStack_68 = 0x58e98b;
    (**(code **)(**(int **)(this + 0x3e4) + 8))();
    uVar6 = local_1c;
    pvVar7 = local_30;
    local_8._0_1_ = 3;
    if (0xf < *(uint *)(this + 0x450)) {
      pUVar4 = *(UI_TextField **)pUVar4;
    }
    bVar1 = std::_Traits_equal<>((char *)pUVar4,*(uint *)(this + 0x44c),pcVar2,unaff_EDI);
    if (!bVar1) {
      if (this[0x428] == (UI_TextField)0x0) {
        *(undefined4 *)(this + 0x434) = 0;
      }
      else {
        resetButtonsValid(this);
      }
      (**(code **)(*(int *)this + 0x294))();
      uVar6 = local_1c;
      pvVar7 = local_30;
    }
    if (0xf < uVar6) {
      pnVar5 = (nothrow_t *)(uVar6 + 1);
      pvVar8 = pvVar7;
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar8 = *(void **)((int)pvVar7 + -4);
        pnVar5 = (nothrow_t *)(uVar6 + 0x24);
        if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void * __thiscall UI_TextField::`vector deleting destructor'(unsigned int)

void * __thiscall UI_TextField::_vector_deleting_destructor_(UI_TextField *this,uint param_1)

{
  ~UI_TextField(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x498);
  }
  return this;
}


// public: virtual __thiscall UI_TextField::~UI_TextField(void)

void __thiscall UI_TextField::~UI_TextField(UI_TextField *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9a80;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x46c) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x46c) = 0;
  }
  if (*(int **)(this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x470) + 0x138))(1);
    *(undefined4 *)(this + 0x470) = 0;
  }
  if (*(int **)(this + 0x474) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x474) + 0x138))(1);
    *(undefined4 *)(this + 0x474) = 0;
  }
  if (*(int **)(this + 0x478) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x478) + 0x138))(1);
    *(undefined4 *)(this + 0x478) = 0;
  }
  if (*(int **)(this + 0x47c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x47c) + 0x138))(1);
    *(undefined4 *)(this + 0x47c) = 0;
  }
  if (*(int **)(this + 0x480) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x480) + 0x138))(1);
    *(undefined4 *)(this + 0x480) = 0;
  }
  uVar2 = *(uint *)(this + 0x468);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x454);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0058ec1e;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x464) = 0;
  *(undefined4 *)(this + 0x468) = 0xf;
  this[0x454] = (UI_TextField)0x0;
  uVar2 = *(uint *)(this + 0x450);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x43c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0058ec1e:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x450) = 0xf;
  this[0x43c] = (UI_TextField)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_TextField::cleanupRender(void)

void __thiscall UI_TextField::cleanupRender(UI_TextField *this)

{
  if (*(int **)(this + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x46c) + 0x138))(1);
    *(undefined4 *)(this + 0x46c) = 0;
  }
  if (*(int **)(this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x470) + 0x138))(1);
    *(undefined4 *)(this + 0x470) = 0;
  }
  if (*(int **)(this + 0x474) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x474) + 0x138))(1);
    *(undefined4 *)(this + 0x474) = 0;
  }
  if (*(int **)(this + 0x478) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x478) + 0x138))(1);
    *(undefined4 *)(this + 0x478) = 0;
  }
  if (*(int **)(this + 0x47c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x47c) + 0x138))(1);
    *(undefined4 *)(this + 0x47c) = 0;
  }
  if (*(int **)(this + 0x480) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x480) + 0x138))(1);
    *(undefined4 *)(this + 0x480) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_TextField::render(void)

void __thiscall UI_TextField::render(UI_TextField *this)

{
  int *piVar1;
  int iVar2;
  basic_string<> *pbVar3;
  Scale9Sprite *pSVar4;
  UIText *pUVar5;
  char *pcVar6;
  uint uVar7;
  UI_TextField *pUVar8;
  char *pcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  undefined4 uVar13;
  float10 fVar14;
  char acStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 *puStack_ac;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  basic_string<> *local_44 [4];
  uint local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc906;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  *(int *)(this + 0x438) = *(int *)(this + 0x2a0) + -0xd;
  resetButtonsValid(this);
  *(int *)(this + 0x42c) =
       (int)(*(int *)(this + 0x2a4) + -4 + (*(int *)(this + 0x2a4) + -4 >> 0x1f & 7U)) >> 3;
  local_50 = *(uint *)(this + 1000);
  local_48 = *(undefined4 *)(g_gameData + 0xd0);
  if (*(int **)(this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(this + 0x3e4) + 8))();
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff68,(basic_string<> *)local_44)
  ;
  UIText::generateLines();
  if ((this[0x428] != (UI_TextField)0x0) && (this[0x429] != (UI_TextField)0x0)) {
    iVar2 = (local_60 - local_64) / 0x18 - *(int *)(this + 0x488);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *(int *)(this + 0x434) = iVar2;
  }
  resetButtonsValid(this);
  pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 2;
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8._0_1_ = 1;
  *(Scale9Sprite **)(this + 0x47c) = pSVar4;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_0058ee6c:
        local_8._0_1_ = 1;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_4c = 0;
  local_48 = 0;
  local_8._0_1_ = 3;
  (**(code **)(**(int **)(this + 0x47c) + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(this + 0x47c) + 0x48))();
  iVar2 = **(int **)(this + 0x47c);
  cocos2d::Size::Size((Size *)&local_58,(float)*(int *)(this + 0x438),(float)*(int *)(this + 0x2a4))
  ;
  (**(code **)(iVar2 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  if (this[0x48c] == (UI_TextField)0x0) {
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 5;
  }
  else {
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 4;
  }
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8._0_1_ = 1;
  *(Scale9Sprite **)(this + 0x46c) = pSVar4;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0058ef81;
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_4c = 0;
  local_48 = 0x3f800000;
  local_8._0_1_ = 6;
  (**(code **)(**(int **)(this + 0x46c) + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(this + 0x46c) + 0x48))();
  iVar2 = **(int **)(this + 0x46c);
  puStack_ac = (undefined4 *)0x58f022;
  cocos2d::Size::Size((Size *)&local_58,12.0,12.0);
  (**(code **)(iVar2 + 0xac))();
  puStack_ac = (undefined4 *)0x58f03f;
  (**(code **)(*(int *)this + 0x10c))();
  if (this[0x48c] == (UI_TextField)0x0) {
    uVar13 = 0x38;
  }
  else {
    uVar13 = 0x37;
    if (this[0x48e] != (UI_TextField)0x0) {
      uVar13 = 0x25;
    }
  }
  strUsingArgs(acStack_c0,"`%c`a1",uVar13);
  pUVar5 = UIText::create();
  *(UIText **)(this + 0x470) = pUVar5;
  local_4c = 0x3f000000;
  local_48 = 0x3f000000;
  local_8._0_1_ = 7;
  puStack_ac = &local_4c;
  fStack_b0 = 8.167862e-39;
  (**(code **)(*(int *)pUVar5 + 0xa0))();
  local_8._0_1_ = 1;
  piVar1 = *(int **)(this + 0x46c);
  iVar2 = **(int **)(this + 0x470);
  fStack_b0 = 8.167908e-39;
  fVar14 = (float10)(**(code **)(**(int **)(this + 0x46c) + 0x74))();
  fStack_b0 = (float)(fVar14 - (float10)6.0);
  fStack_b4 = 8.167935e-39;
  fVar14 = (float10)(**(code **)(*piVar1 + 0x6c))();
  fStack_b4 = (float)(fVar14 + (float10)6.0);
  uStack_b8 = 0x58f0f4;
  (**(code **)(iVar2 + 0x48))();
  uStack_b8 = 1;
  uStack_bc = *(undefined4 *)(this + 0x470);
  acStack_c0[0] = '\x06';
  acStack_c0[1] = -0xf;
  acStack_c0[2] = 'X';
  acStack_c0[3] = '\0';
  (**(code **)(*(int *)this + 0x108))();
  pUVar8 = this + 0x454;
  *(undefined4 *)(this + 0x464) = 0;
  if (0xf < *(uint *)(this + 0x468)) {
    pUVar8 = *(UI_TextField **)(this + 0x454);
  }
  *pUVar8 = (UI_TextField)0x0;
  uVar12 = 0;
  uVar7 = (local_60 - local_64) / 0x18;
  local_50 = uVar7;
  if (uVar7 != 0) {
    do {
      if ((*(int *)(this + 0x434) <= (int)uVar12) &&
         (uVar7 = local_50, (int)uVar12 < *(int *)(this + 0x488) + *(int *)(this + 0x434))) {
        pcVar6 = (char *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 8;
        pcVar9 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar9 = *(char **)pcVar6;
        }
        std::basic_string<>::append
                  ((basic_string<> *)(this + 0x454),pcVar9,*(uint *)(pcVar6 + 0x10));
        local_8._0_1_ = 1;
        uVar7 = local_50;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0058ee6c;
          }
          operator_delete(pvVar10,pnVar11);
          uVar7 = local_50;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar7);
  }
  if ((basic_string<> *)(this + 0x43c) != (basic_string<> *)local_44) {
    pbVar3 = (basic_string<> *)local_44;
    if (0xf < local_30) {
      pbVar3 = local_44[0];
    }
    std::basic_string<>::assign((basic_string<> *)(this + 0x43c),(char *)pbVar3,local_34);
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff68,(basic_string<> *)(this + 0x454));
  pUVar5 = UIText::create();
  *(UIText **)(this + 0x480) = pUVar5;
  local_4c = 0;
  local_48 = 0x3f800000;
  local_8._0_1_ = 9;
  (**(code **)(*(int *)pUVar5 + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(this + 0x480) + 0x48))();
  (**(code **)(*(int *)this + 0x108))();
  if (this[0x48d] == (UI_TextField)0x0) {
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 0xb;
  }
  else {
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 10;
  }
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8._0_1_ = 1;
  *(Scale9Sprite **)(this + 0x474) = pSVar4;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_0058ef81;
    }
    operator_delete(pvVar10,pnVar11);
  }
  if (this[0x48d] == (UI_TextField)0x0) {
    uVar13 = 0x38;
  }
  else {
    uVar13 = 0x37;
    if (this[0x48f] != (UI_TextField)0x0) {
      uVar13 = 0x25;
    }
  }
  local_4c = 0;
  local_48 = 0;
  local_8._0_1_ = 0xc;
  (**(code **)(**(int **)(this + 0x474) + 0xa0))();
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(this + 0x474) + 0x48))();
  iVar2 = **(int **)(this + 0x474);
  puStack_ac = (undefined4 *)0x58f3d7;
  cocos2d::Size::Size((Size *)&local_58,12.0,12.0);
  (**(code **)(iVar2 + 0xac))();
  puStack_ac = (undefined4 *)0x58f3f4;
  (**(code **)(*(int *)this + 0x10c))();
  strUsingArgs(acStack_c0,"`%c`a2",uVar13);
  pUVar5 = UIText::create();
  *(UIText **)(this + 0x478) = pUVar5;
  local_58 = 0x3f000000;
  local_54 = 0x3f000000;
  local_8._0_1_ = 0xd;
  puStack_ac = &local_58;
  fStack_b0 = 8.169144e-39;
  (**(code **)(*(int *)pUVar5 + 0xa0))();
  local_8._0_1_ = 1;
  piVar1 = *(int **)(this + 0x474);
  iVar2 = **(int **)(this + 0x478);
  fStack_b0 = 8.16919e-39;
  fVar14 = (float10)(**(code **)(**(int **)(this + 0x474) + 0x74))();
  fStack_b0 = (float)(fVar14 + (float10)6.0);
  fStack_b4 = 8.169217e-39;
  fVar14 = (float10)(**(code **)(*piVar1 + 0x6c))();
  fStack_b4 = (float)(fVar14 + (float10)6.0);
  uStack_b8 = 0x58f487;
  (**(code **)(iVar2 + 0x48))();
  uStack_b8 = 1;
  uStack_bc = *(undefined4 *)(this + 0x478);
  acStack_c0[0] = -0x67;
  acStack_c0[1] = -0xc;
  acStack_c0[2] = 'X';
  acStack_c0[3] = '\0';
  (**(code **)(*(int *)this + 0x108))();
  if (this[0x428] != (UI_TextField)0x0) {
    this[0x429] = (UI_TextField)(this[0x48d] == (UI_TextField)0x0);
  }
  **(undefined1 **)(this + 0x288) = 1;
  std::vector<>::_Tidy((vector<> *)&local_64);
  if (0xf < local_30) {
    pnVar11 = (nothrow_t *)(local_30 + 1);
    pbVar3 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pbVar3 = *(basic_string<> **)(local_44[0] + -4);
      pnVar11 = (nothrow_t *)(local_30 + 0x24);
      if ((basic_string<> *)0x1f < local_44[0] + (-4 - (int)pbVar3)) {
LAB_0058ef81:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar3,pnVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_TextField::specialDataCheckFunction(float)

void __thiscall UI_TextField::specialDataCheckFunction(UI_TextField *this,float param_1)

{
  bool bVar1;
  char *pcVar2;
  nothrow_t *pnVar3;
  UI_TextField *pUVar4;
  uint uVar5;
  uint unaff_EDI;
  void *pvVar6;
  void *pvVar7;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30 [5];
  uint local_1c;
  char *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4fd8;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_18 = pcVar2;
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    local_34 = *(undefined4 *)(this + 1000);
    local_38 = *(undefined4 *)(g_gameData + 0xd0);
    if (*(int **)(this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)(this + 0x3e4) + 8))(local_30,&local_38,&local_34);
    uVar5 = local_1c;
    pvVar6 = local_30[0];
    local_8 = 0;
    pUVar4 = this + 0x43c;
    if (0xf < *(uint *)(this + 0x450)) {
      pUVar4 = *(UI_TextField **)(this + 0x43c);
    }
    bVar1 = std::_Traits_equal<>((char *)pUVar4,*(uint *)(this + 0x44c),pcVar2,unaff_EDI);
    if (!bVar1) {
      if (this[0x428] == (UI_TextField)0x0) {
        *(undefined4 *)(this + 0x434) = 0;
      }
      else {
        resetButtonsValid(this);
      }
      (**(code **)(*(int *)this + 0x294))();
      uVar5 = local_1c;
      pvVar6 = local_30[0];
    }
    if (0xf < uVar5) {
      pnVar3 = (nothrow_t *)(uVar5 + 1);
      pvVar7 = pvVar6;
      if ((nothrow_t *)0xfff < pnVar3) {
        pvVar7 = *(void **)((int)pvVar6 + -4);
        pnVar3 = (nothrow_t *)(uVar5 + 0x24);
        if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar3);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_TextField::mouseDown(class cocos2d::Vec2)

void __thiscall UI_TextField::mouseDown(UI_TextField *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *extraout_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c91f9;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  updatePressedStates(this,param_2,param_3);
  (**(code **)(*extraout_ECX + 0x294))(uVar1,this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_TextField::mouseUp(class cocos2d::Vec2)

void __thiscall UI_TextField::mouseUp(UI_TextField *this,undefined4 param_2,undefined4 param_3)

{
  UI_TextField *pUVar1;
  uint uVar2;
  SoundEngine *pSVar3;
  Ship *pSVar4;
  Sound SVar5;
  int iVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c45e9;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  updatePressedStates(this,param_2,param_3);
  if (this[0x48e] != (UI_TextField)0x0) {
    iVar6 = -1;
    SVar5 = 9;
    pSVar4 = ShipData::currentlyBoardedShip;
    pSVar3 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar3,pSVar4,SVar5,iVar6);
    pUVar1 = this + 0x434;
    *(int *)pUVar1 = *(int *)pUVar1 + -1;
    if (*(int *)pUVar1 < 0) {
      *(undefined4 *)(this + 0x434) = 0;
    }
    this[0x429] = (UI_TextField)0x0;
    (**(code **)(*(int *)this + 0x294))(uVar2);
  }
  if (this[0x48f] != (UI_TextField)0x0) {
    iVar6 = -1;
    SVar5 = 8;
    pSVar4 = ShipData::currentlyBoardedShip;
    pSVar3 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar3,pSVar4,SVar5,iVar6);
    *(int *)(this + 0x434) = *(int *)(this + 0x434) + 1;
    if (*(int *)(this + 0x484) - *(int *)(this + 0x488) <= *(int *)(this + 0x434)) {
      *(int *)(this + 0x434) = *(int *)(this + 0x484) - *(int *)(this + 0x488);
    }
    this[0x429] = (UI_TextField)0x0;
    (**(code **)(*(int *)this + 0x294))();
  }
  *(undefined2 *)(this + 0x48e) = 0;
  (**(code **)(*(int *)this + 0x294))();
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_TextField::mouseCancel(void)

void __thiscall UI_TextField::mouseCancel(UI_TextField *this)

{
  *(undefined2 *)(this + 0x48e) = 0;
                    // WARNING: Could not recover jumptable at 0x0058f7cb. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// public: void __thiscall UI_TextField::resetButtonsValid(void)

void __thiscall UI_TextField::resetButtonsValid(UI_TextField *this)

{
  UI_TextField UVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  basic_string<> abStack_70 [12];
  undefined4 uStack_64;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc940;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = *(undefined4 *)(g_gameData + 0xd0);
  if (*(int **)(this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(this + 0x3e4) + 8))();
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)local_2c);
  UIText::generateLines();
  uVar5 = (local_38 - local_3c) / 0x18;
  *(uint *)(this + 0x484) = uVar5;
  uVar2 = (int)(*(int *)(this + 0x2a4) + -2 + (*(int *)(this + 0x2a4) + -2 >> 0x1f & 7U)) >> 3;
  *(uint *)(this + 0x488) = uVar2;
  this[0x48c] = (UI_TextField)(0 < *(int *)(this + 0x434));
  if (uVar2 < uVar5) {
    uVar5 = uVar5 - *(int *)(this + 0x434);
    UVar1 = (UI_TextField)(uVar5 != uVar2 && -1 < (int)(uVar5 - uVar2));
  }
  else {
    UVar1 = (UI_TextField)0x0;
  }
  this[0x48d] = UVar1;
  std::vector<>::_Tidy((vector<> *)&local_3c);
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
    uStack_64 = 0x58f91e;
    operator_delete(pvVar3,pnVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall UI_TextField::updatePressedStates(class cocos2d::Vec2)

void __thiscall UI_TextField::updatePressedStates(UI_TextField *this,float param_2,float param_3)

{
  UI_TextField UVar1;
  
  if ((((this[0x48c] == (UI_TextField)0x0) || (param_2 < (float)(*(int *)(this + 0x438) + 1))) ||
      ((float)(*(int *)(this + 0x438) + 0xd) < param_2)) || ((param_3 < 0.0 || (12.0 < param_3)))) {
    UVar1 = (UI_TextField)0x0;
  }
  else {
    UVar1 = (UI_TextField)0x1;
  }
  this[0x48e] = UVar1;
  if (((this[0x48d] != (UI_TextField)0x0) && ((float)(*(int *)(this + 0x438) + 1) <= param_2)) &&
     ((param_2 <= (float)(*(int *)(this + 0x438) + 0xd) &&
      (((float)(*(int *)(this + 0x2a4) + -0xc) <= param_3 &&
       (param_3 <= (float)*(int *)(this + 0x2a4))))))) {
    this[0x48f] = (UI_TextField)0x1;
    return;
  }
  this[0x48f] = (UI_TextField)0x0;
  return;
}
