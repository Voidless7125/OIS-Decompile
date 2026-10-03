#include "../ois.exe.h"


// public: __thiscall UI_DMenu::UI_DMenu(class ScreenInterface *,class Widget &,bool *)

void __thiscall
UI_DMenu::UI_DMenu(UI_DMenu *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)

{
  Widget *pWVar1;
  ListData *pLVar2;
  bool bVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  Size *pSVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  ListData *this_00;
  vector<> *unaff_EDI;
  basic_string<> local_68 [8];
  undefined4 uStack_60;
  Size local_40 [8];
  UI_DMenu *local_38;
  UI_DMenu *local_34;
  void *local_30 [5];
  uint local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca3e0;
  local_10 = ExceptionList;
  puVar4 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uStack_60 = 0x567ca2;
  local_38 = this;
  local_34 = this;
  local_18 = puVar4;
  ScreenElement::ScreenElement((ScreenElement *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x428) = 0;
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined4 *)(this + 0x430) = 0;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x440) = 0x80;
  *(undefined4 *)(this + 0x444) = 0x18;
  *(undefined4 *)(this + 0x448) = 8;
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x450) = 0xffffffff;
  *(undefined4 *)(this + 0x454) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x45c) = 0;
  *(int *)(this + 0x460) = 0;
  *(undefined4 *)(this + 0x464) = 0;
  *(undefined4 *)(this + 0x468) = 0;
  local_8 = 4;
  this[0x284] = (UI_DMenu)0x1;
  this[0x286] = (UI_DMenu)0x1;
  local_68[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_68,"width",5);
  pWVar1 = (Widget *)(this + 0x290);
  bVar3 = Widget::hasOption(pWVar1);
  if (bVar3) {
    local_68[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_68,"width",5);
    pcVar5 = (char *)Widget::getOption(pWVar1,local_30);
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar6 = atoi(pcVar5);
    *(int *)(this + 0x440) = iVar6;
    if (0xf < local_1c) {
      pnVar9 = (nothrow_t *)(local_1c + 1);
      pvVar8 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_30[0] + -4);
        pnVar9 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
  }
  local_68[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_68,"height",6);
  bVar3 = Widget::hasOption(pWVar1);
  if (bVar3) {
    local_68[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_68,"height",6);
    pcVar5 = (char *)Widget::getOption(pWVar1,local_30);
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar6 = atoi(pcVar5);
    *(int *)(this + 0x444) = iVar6;
    if (0xf < local_1c) {
      pnVar9 = (nothrow_t *)(local_1c + 1);
      pvVar8 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_30[0] + -4);
        pnVar9 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
  }
  local_68[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_68,"spacing",7);
  bVar3 = Widget::hasOption(pWVar1);
  if (bVar3) {
    local_68[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_68,"spacing",7);
    pcVar5 = (char *)Widget::getOption(pWVar1,local_30);
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar6 = atoi(pcVar5);
    *(int *)(this + 0x448) = iVar6;
    if (0xf < local_1c) {
      pnVar9 = (nothrow_t *)(local_1c + 1);
      pvVar8 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_30[0] + -4);
        pnVar9 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
  }
  *(undefined4 *)(this + 0x44c) = *(undefined4 *)(this + 0x3f0);
  bVar3 = checkListDataChanged((ShipDataInputType)puVar4,unaff_EDI);
  if (bVar3) {
    pLVar2 = *(ListData **)(this + 0x464);
    this_00 = *(ListData **)(this + 0x460);
    if (this_00 != pLVar2) {
      do {
        ListData::~ListData(this_00);
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar2);
      this_00 = *(ListData **)(this + 0x460);
    }
    *(ListData **)(this + 0x464) = this_00;
    populateListData((ShipDataInputType)puVar4,unaff_EDI);
    (**(code **)(*(int *)this + 0x294))();
  }
  pSVar7 = (Size *)cocos2d::Size::Size(local_40,(float)*(int *)(this + 0x2a0),
                                       (float)*(int *)(this + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this,pSVar7);
  ExceptionList = local_10;
  __security_check_cookie((int)((uint)local_18 ^ (uint)&stack0xfffffffc));
  return;
}


// public: virtual void * __thiscall UI_DMenu::`vector deleting destructor'(unsigned int)

void * __thiscall UI_DMenu::_vector_deleting_destructor_(UI_DMenu *this,uint param_1)

{
  ~UI_DMenu(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x470);
  }
  return this;
}


// public: virtual __thiscall UI_DMenu::~UI_DMenu(void)

void __thiscall UI_DMenu::~UI_DMenu(UI_DMenu *this)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  ListData *this_00;
  ListData *pLVar8;
  Rect *this_01;
  Rect *pRVar9;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005ca410;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  uVar7 = 0;
  iVar5 = *(int *)(this + 0x434);
  if (*(int *)(this + 0x438) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar7 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(this + 0x434) + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)(this + 0x434);
    } while (uVar7 < (uint)(*(int *)(this + 0x438) - iVar5 >> 2));
  }
  *(int *)(this + 0x438) = iVar5;
  uVar3 = 0;
  iVar5 = *(int *)(this + 0x428);
  if (*(int *)(this + 0x42c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x428) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(this + 0x428);
    } while (uVar3 < (uint)(*(int *)(this + 0x42c) - iVar5 >> 2));
  }
  *(int *)(this + 0x42c) = iVar5;
  this_00 = *(ListData **)(this + 0x460);
  if (this_00 != (ListData *)0x0) {
    pLVar8 = *(ListData **)(this + 0x464);
    if (this_00 != pLVar8) {
      do {
        ListData::~ListData(this_00);
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar8);
      this_00 = *(ListData **)(this + 0x460);
    }
    pnVar6 = (nothrow_t *)(((*(int *)(this + 0x468) - (int)this_00) / 0x60) * 0x60);
    pLVar8 = this_00;
    if ((nothrow_t *)0xfff < pnVar6) {
      pLVar8 = *(ListData **)(this_00 + -4);
      pnVar6 = pnVar6 + 0x23;
      if ((ListData *)0x1f < this_00 + (-4 - (int)pLVar8)) goto LAB_00568307;
    }
    operator_delete(pLVar8,pnVar6);
    *(undefined4 *)(this + 0x460) = 0;
    *(undefined4 *)(this + 0x464) = 0;
    *(undefined4 *)(this + 0x468) = 0;
  }
  this_01 = *(Rect **)(this + 0x454);
  if (this_01 != (Rect *)0x0) {
    pRVar9 = *(Rect **)(this + 0x458);
    if (this_01 != pRVar9) {
      do {
        cocos2d::Rect::~Rect(this_01);
        this_01 = this_01 + 0x10;
      } while (this_01 != pRVar9);
      this_01 = *(Rect **)(this + 0x454);
    }
    pnVar6 = (nothrow_t *)(*(int *)(this + 0x45c) - (int)this_01 & 0xfffffff0);
    pRVar9 = this_01;
    if ((nothrow_t *)0xfff < pnVar6) {
      pRVar9 = *(Rect **)(this_01 + -4);
      pnVar6 = pnVar6 + 0x23;
      if ((Rect *)0x1f < this_01 + (-4 - (int)pRVar9)) goto LAB_00568307;
    }
    operator_delete(pRVar9,pnVar6);
    *(undefined4 *)(this + 0x454) = 0;
    *(undefined4 *)(this + 0x458) = 0;
    *(undefined4 *)(this + 0x45c) = 0;
  }
  pvVar2 = *(void **)(this + 0x434);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)(this + 0x43c) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_00568307;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)(this + 0x434) = 0;
    *(undefined4 *)(this + 0x438) = 0;
    *(undefined4 *)(this + 0x43c) = 0;
  }
  pvVar2 = *(void **)(this + 0x428);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)(this + 0x430) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
LAB_00568307:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)(this + 0x428) = 0;
    *(undefined4 *)(this + 0x42c) = 0;
    *(undefined4 *)(this + 0x430) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_DMenu::cleanupRender(void)

void __thiscall UI_DMenu::cleanupRender(UI_DMenu *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x434);
  if (*(int *)(this + 0x438) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x434) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x434);
    } while (uVar3 < (uint)(*(int *)(this + 0x438) - iVar2 >> 2));
  }
  *(int *)(this + 0x438) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x428);
  if (*(int *)(this + 0x42c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x428) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x428);
    } while (uVar3 < (uint)(*(int *)(this + 0x42c) - iVar2 >> 2));
  }
  *(int *)(this + 0x42c) = iVar2;
  return;
}


// public: virtual void __thiscall UI_DMenu::render(void)

void __thiscall UI_DMenu::render(UI_DMenu *this)

{
  Rect *pRVar1;
  AnimationFrames **ppAVar2;
  Scale9Sprite *pSVar3;
  _TexParams *p_Var4;
  undefined4 *puVar5;
  UIText *pUVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  int iVar9;
  Rect *pRVar10;
  int iVar11;
  char acStack_d0 [4];
  AnimationFrames *pAStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 *puStack_bc;
  Scale9Sprite *pSStack_b8;
  Rect local_94 [16];
  Size local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  Texture2D *local_6c;
  int local_68;
  uint local_64;
  Scale9Sprite *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca466;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  pRVar1 = *(Rect **)(this + 0x458);
  pRVar10 = *(Rect **)(this + 0x454);
  if (pRVar10 != pRVar1) {
    do {
      cocos2d::Rect::~Rect(pRVar10);
      pRVar10 = pRVar10 + 0x10;
    } while (pRVar10 != pRVar1);
    pRVar10 = *(Rect **)(this + 0x454);
  }
  *(Rect **)(this + 0x458) = pRVar10;
  iVar11 = *(int *)(this + 0x460);
  local_64 = 0;
  iVar9 = *(int *)(this + 0x464) - iVar11 >> 0x1f;
  if ((*(int *)(this + 0x464) - iVar11) / 0x60 + iVar9 != iVar9) {
    local_68 = 0;
    do {
      iVar9 = ((*(int *)(this + 0x2a4) -
               (*(int *)(this + 0x444) + *(int *)(this + 0x448)) * local_64) -
              *(int *)(this + 0x444)) - *(int *)(this + 0x448);
      if (*(char *)(local_68 + 0x5e + iVar11) == '\0') {
        if (*(uint *)(this + 0x450) == local_64) {
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)local_44,"DMenuButton_Depressed.png",0x19);
          local_8 = 1;
          pSVar3 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_44);
          local_8 = 0xffffffff;
          local_60 = pSVar3;
          if (0xf < local_30) {
            pnVar8 = (nothrow_t *)(local_30 + 1);
            pvVar7 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar7 = *(void **)((int)local_44[0] + -4);
              pnVar8 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
LAB_005688e2:
                local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar7,pnVar8);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        else {
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          std::basic_string<>::assign((basic_string<> *)local_5c,"DMenuButton_Undepressed.png",0x1b)
          ;
          local_8 = 2;
          pSVar3 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_5c);
          local_8 = 0xffffffff;
          local_60 = pSVar3;
          if (0xf < local_48) {
            pnVar8 = (nothrow_t *)(local_48 + 1);
            pvVar7 = local_5c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar7 = *(void **)((int)local_5c[0] + -4);
              pnVar8 = (nothrow_t *)(local_48 + 0x24);
              if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7))) goto LAB_005688e2;
            }
            operator_delete(pvVar7,pnVar8);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        }
      }
      else {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)local_2c,"DMenuButton_Greyed.png",0x16);
        local_8 = 0;
        pSVar3 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
        local_8 = 0xffffffff;
        local_60 = pSVar3;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_005688e2;
          }
          operator_delete(pvVar7,pnVar8);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      local_6c = (Texture2D *)(**(code **)(*(int *)(pSVar3 + 0x278) + 0xc))();
      p_Var4 = this_0065d534;
      if (this_0065d534 == (_TexParams *)0x0) {
        p_Var4 = operator_new(0x10);
        this_0065d534 = p_Var4;
        *(undefined4 *)(p_Var4 + 4) = 0x2600;
        *(undefined4 *)p_Var4 = 0x2600;
        *(undefined4 *)(p_Var4 + 8) = 0x812f;
        *(undefined4 *)(p_Var4 + 0xc) = 0x812f;
      }
      cocos2d::Texture2D::setTexParameters(local_6c,p_Var4);
      iVar11 = *(int *)pSVar3;
      cocos2d::Size::Size(local_84,(float)*(int *)(this + 0x440),(float)*(int *)(this + 0x444));
      (**(code **)(iVar11 + 0xac))();
      pSVar3 = local_60;
      local_74 = 0;
      local_70 = 0;
      local_8 = 3;
      (**(code **)(*(int *)local_60 + 0xa0))();
      local_8 = 0xffffffff;
      pSStack_b8 = (Scale9Sprite *)0x5686fd;
      (**(code **)(*(int *)pSVar3 + 0x48))();
      pSStack_b8 = pSVar3;
      puStack_bc = (undefined4 *)0x568708;
      (**(code **)(*(int *)this + 0x10c))();
      puVar5 = (undefined4 *)(*(int *)(this + 0x460) + 0x20 + local_68);
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      strUsingArgs(acStack_d0,"`%c%s",(uint)(*(uint *)(this + 0x450) != local_64) * 4 + 0x21,puVar5)
      ;
      pUVar6 = UIText::create();
      local_7c = 0x3f000000;
      local_78 = 0x3f000000;
      local_8 = 4;
      puStack_bc = &local_7c;
      fStack_c0 = 7.946461e-39;
      local_60 = (Scale9Sprite *)pUVar6;
      (**(code **)(*(int *)pUVar6 + 0xa0))();
      local_8 = 0xffffffff;
      fStack_c0 = (float)(*(int *)(this + 0x444) / 2 + iVar9);
      fStack_c4 = (float)(*(int *)(this + 0x440) / 2);
      uStack_c8 = 0x5687c3;
      (**(code **)(*(int *)pUVar6 + 0x48))();
      pSVar3 = local_60;
      uStack_c8 = 1;
      pAStack_cc = (AnimationFrames *)local_60;
      builtin_strncpy(acStack_d0,"ӇV",4);
      (**(code **)(*(int *)this + 0x108))();
      ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
      if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x428),ppAVar2,(AnimationFrames **)&local_60);
      }
      else {
        *ppAVar2 = (AnimationFrames *)pSVar3;
        *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
      }
      pSStack_b8 = (Scale9Sprite *)0x568847;
      pRVar10 = (Rect *)cocos2d::Rect::Rect(local_94,0.0,
                                            (float)((*(int *)(this + 0x2a4) - *(int *)(this + 0x444)
                                                    ) - iVar9),(float)*(int *)(this + 0x440),
                                            (float)*(int *)(this + 0x444));
      local_8 = 5;
      pRVar1 = *(Rect **)(this + 0x458);
      if (*(Rect **)(this + 0x45c) == pRVar1) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x454),pRVar1,pRVar10);
      }
      else {
        cocos2d::Rect::Rect(pRVar1,pRVar10);
        *(int *)(this + 0x458) = *(int *)(this + 0x458) + 0x10;
      }
      local_8 = 0xffffffff;
      cocos2d::Rect::~Rect(local_94);
      iVar11 = *(int *)(this + 0x460);
      local_68 = local_68 + 0x60;
      local_64 = local_64 + 1;
    } while (local_64 < (uint)((*(int *)(this + 0x464) - iVar11) / 0x60));
  }
  **(undefined1 **)(this + 0x288) = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall UI_DMenu::updatePressedButton(class cocos2d::Vec2)

bool __thiscall UI_DMenu::updatePressedButton(UI_DMenu *this,float param_2,float param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x458) - *(int *)(this + 0x454) >> 4;
  uVar4 = 0xffffffff;
  if (uVar3 != 0) {
    pfVar1 = (float *)(*(int *)(this + 0x454) + 4);
    do {
      if ((((pfVar1[-1] <= param_2) && (param_2 <= pfVar1[1] + pfVar1[-1])) && (*pfVar1 <= param_3))
         && (uVar4 = uVar2, param_3 <= pfVar1[2] + *pfVar1)) break;
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 4;
      uVar4 = 0xffffffff;
    } while (uVar2 < uVar3);
  }
  if (uVar4 == *(uint *)(this + 0x450)) {
    return false;
  }
  *(uint *)(this + 0x450) = uVar4;
  return true;
}


// public: virtual void __thiscall UI_DMenu::specialDataCheckFunction(float)

void __thiscall UI_DMenu::specialDataCheckFunction(UI_DMenu *this,float param_1)

{
  ListData *pLVar1;
  bool bVar2;
  vector<> *unaff_ESI;
  ListData *this_00;
  ShipDataInputType unaff_EDI;
  
  bVar2 = checkListDataChanged(unaff_EDI,unaff_ESI);
  if (bVar2) {
    pLVar1 = *(ListData **)(this + 0x464);
    this_00 = *(ListData **)(this + 0x460);
    if (this_00 != pLVar1) {
      do {
        ListData::~ListData(this_00);
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar1);
      this_00 = *(ListData **)(this + 0x460);
    }
    *(ListData **)(this + 0x464) = this_00;
    populateListData(unaff_EDI,unaff_ESI);
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual void __thiscall UI_DMenu::mouseMove(class cocos2d::Vec2)

void __thiscall UI_DMenu::mouseMove(UI_DMenu *this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int *extraout_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c91f9;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar1 = updatePressedButton(this,param_2,param_3);
  if (bVar1) {
    (**(code **)(*extraout_ECX + 0x294))(uVar2,this);
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_DMenu::mouseUp(class cocos2d::Vec2)

void __thiscall UI_DMenu::mouseUp(UI_DMenu *this,undefined4 param_2,undefined4 param_3)

{
  ShipDataInputType SVar1;
  SoundEngine *this_00;
  Ship *pSVar2;
  Sound SVar3;
  int iVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c45e9;
  local_10 = ExceptionList;
  SVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  updatePressedButton(this,param_2,param_3);
  if (-1 < *(int *)(this + 0x450)) {
    debugPrint("GAME","pressed button %d",*(int *)(this + 0x450));
    **(undefined4 **)(this + 0x44c) =
         *(undefined4 *)(*(int *)(this + 0x450) * 0x60 + *(int *)(this + 0x460));
    runDataInputSync(SVar1);
    iVar4 = -1;
    SVar3 = 0x2a;
    pSVar2 = ShipData::currentlyBoardedShip;
    this_00 = Singleton<>::getInstance();
    SoundEngine::playSound(this_00,pSVar2,SVar3,iVar4);
  }
  *(undefined4 *)(this + 0x450) = 0xffffffff;
  (**(code **)(*(int *)this + 0x294))();
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_DMenu::mouseHoverCancel(void)

void __thiscall UI_DMenu::mouseHoverCancel(UI_DMenu *this)

{
  *(undefined4 *)(this + 0x450) = 0xffffffff;
                    // WARNING: Could not recover jumptable at 0x00568b3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x294))();
  return;
}
