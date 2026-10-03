#include "../ois.exe.h"


// public: virtual void __thiscall UI_Button::setValue(double)

void __thiscall UI_Button::setValue(UI_Button *this,double param_1)

{
  if ((UI_Button)(param_1 != 0.0) != this[0x44c]) {
    this[0x44c] = (UI_Button)(param_1 != 0.0);
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual void * __thiscall UI_Button::`vector deleting destructor'(unsigned int)

void * __thiscall UI_Button::_vector_deleting_destructor_(UI_Button *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  int iVar5;
  UI_Button *pUVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7560;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x45c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x45c) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x45c) = 0;
  }
  pUVar6 = this + 0x450;
  iVar5 = 3;
  do {
    if (*(int **)pUVar6 != (int *)0x0) {
      (**(code **)(**(int **)pUVar6 + 0x138))(1);
    }
    *(int *)pUVar6 = 0;
    pUVar6 = pUVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = *(uint *)(this + 0x448);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x434);
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
  *(undefined4 *)(this + 0x444) = 0;
  *(undefined4 *)(this + 0x448) = 0xf;
  this[0x434] = (UI_Button)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x460);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_Button::cleanupRender(void)

void __thiscall UI_Button::cleanupRender(UI_Button *this)

{
  UI_Button *pUVar1;
  int iVar2;
  
  if (*(int **)(this + 0x45c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x45c) + 0x138))(1);
    *(undefined4 *)(this + 0x45c) = 0;
  }
  pUVar1 = this + 0x450;
  iVar2 = 3;
  do {
    if (*(int **)pUVar1 != (int *)0x0) {
      (**(code **)(**(int **)pUVar1 + 0x138))(1);
    }
    *(int *)pUVar1 = 0;
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// public: virtual void __thiscall UI_Button::render(void)

void __thiscall UI_Button::render(UI_Button *this)

{
  UI_Button *pUVar1;
  char *pcVar2;
  UIText *pUVar3;
  Sprite *pSVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  void *pvVar8;
  uint uVar9;
  UI_Button *pUVar10;
  int iVar11;
  nothrow_t *pnVar12;
  undefined4 uStack_d8;
  undefined4 local_70;
  UI_Button *local_6c;
  uint local_68;
  undefined1 local_62;
  undefined1 local_61;
  uint local_60;
  void *local_5c [5];
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
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca1fb;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_68 = 0;
  (**(code **)(*(int *)this + 0x290))();
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = 0;
  local_60 = 0;
  uVar9 = 0;
  local_61 = 0;
  local_62 = 0;
  if (*(int *)(this + 0x444) != 0) {
    pUVar1 = this + 0x434;
    do {
      local_6c = pUVar1;
      if (0xf < *(uint *)(this + 0x448)) {
        local_6c = *(UI_Button **)pUVar1;
      }
      if (local_6c[local_60] == (UI_Button)0x26) {
        uVar9 = CONCAT31((int3)(uVar9 >> 8),1);
        local_61 = 1;
      }
      else {
        if ((char)uVar9 == '\0') {
          if ((char)(uVar9 >> 8) != '\0') {
            std::basic_string<>::append((basic_string<> *)local_44,"`7",2);
            local_62 = 0;
          }
          pcVar2 = (char *)strUsingArgs((char *)local_2c);
          local_8._0_1_ = 2;
        }
        else {
          pUVar10 = pUVar1;
          if (0xf < *(uint *)(this + 0x448)) {
            pUVar10 = *(UI_Button **)pUVar1;
          }
          this[0x44d] = pUVar10[local_60];
          std::basic_string<>::append((basic_string<> *)local_44,"`%",2);
          local_62 = 1;
          local_61 = 0;
          pcVar2 = (char *)strUsingArgs((char *)local_2c);
          local_8._0_1_ = 1;
        }
        pcVar7 = pcVar2;
        if (0xf < *(uint *)(pcVar2 + 0x14)) {
          pcVar7 = *(char **)pcVar2;
        }
        std::basic_string<>::append((basic_string<> *)local_44,pcVar7,*(uint *)(pcVar2 + 0x10));
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pnVar12 = (nothrow_t *)(local_18 + 1);
          pvVar8 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar8 = *(void **)((int)local_2c[0] + -4);
            pnVar12 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_00565cdb;
          }
          operator_delete(pvVar8,pnVar12);
        }
        uVar9 = (uint)CONCAT11(local_62,local_61);
      }
      local_60 = local_60 + 1;
    } while (local_60 < *(uint *)(this + 0x444));
  }
  if (this[0x430] == (UI_Button)0x0) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff68,(basic_string<> *)local_44);
    pUVar3 = UIText::create();
    *(UIText **)(this + 0x45c) = pUVar3;
    local_70 = 0x3f000000;
    local_6c = (UI_Button *)0x3f000000;
    local_8._0_1_ = 7;
    (**(code **)(*(int *)pUVar3 + 0xa0))();
    local_8._0_1_ = 0;
    (**(code **)(**(int **)(this + 0x45c) + 0x48))();
    (**(code **)(*(int *)this + 0x108))();
    if (this[0x44c] == (UI_Button)0x0) {
      puVar5 = (undefined1 *)strUsingArgs((char *)local_2c);
      local_8 = 9;
      local_68 = 2;
    }
    else {
      puVar5 = (undefined1 *)strUsingArgs((char *)local_5c);
      local_8 = CONCAT31(local_8._1_3_,8);
      local_68 = 1;
    }
    local_60 = local_68;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff70,0.0,0.0,4.0,(float)*(int *)(this + 0x42c));
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *puVar5 = 0;
    pSVar4 = loadSprite();
    *(Sprite **)(this + 0x450) = pSVar4;
    local_8 = 8;
    if ((local_60 & 2) != 0) {
      local_68 = local_60 & 0xfffffffd;
      local_60 = local_68;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
LAB_00565cdb:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar12);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    local_8 = 0;
    if (((local_60 & 1) != 0) &&
       (local_68 = local_60 & 0xfffffffe, local_60 = local_68, 0xf < local_48)) {
      pnVar12 = (nothrow_t *)(local_48 + 1);
      pvVar8 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar8 = *(void **)((int)local_5c[0] + -4);
        pnVar12 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar12);
    }
    (**(code **)(**(int **)(this + 0x450) + 0x48))();
    (**(code **)(*(int *)this + 0x10c))();
    if (this[0x44c] == (UI_Button)0x0) {
      puVar5 = (undefined1 *)strUsingArgs((char *)local_2c);
      local_8 = 0xb;
      local_68 = local_60 | 8;
    }
    else {
      puVar5 = (undefined1 *)strUsingArgs((char *)local_5c);
      local_8 = CONCAT31(local_8._1_3_,10);
      local_68 = local_60 | 4;
    }
    local_60 = local_68;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff64,4.0,0.0,4.0,(float)*(int *)(this + 0x42c));
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *puVar5 = 0;
    pSVar4 = loadSprite();
    *(Sprite **)(this + 0x454) = pSVar4;
    local_8 = 10;
    if ((local_60 & 8) != 0) {
      local_68 = local_60 & 0xfffffff7;
      local_60 = local_68;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar12);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    local_8 = 0;
    if (((local_60 & 4) != 0) &&
       (local_68 = local_60 & 0xfffffffb, local_60 = local_68, 0xf < local_48)) {
      pnVar12 = (nothrow_t *)(local_48 + 1);
      pvVar8 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar8 = *(void **)((int)local_5c[0] + -4);
        pnVar12 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar12);
    }
    (**(code **)(**(int **)(this + 0x454) + 0x48))();
    iVar11 = **(int **)(this + 0x454);
    (**(code **)(iVar11 + 0xb0))();
    (**(code **)(iVar11 + 0x24))();
    (**(code **)(*(int *)this + 0x10c))();
    if (this[0x44c] == (UI_Button)0x0) {
      puVar6 = (undefined4 *)strUsingArgs((char *)local_2c);
      local_8 = 0xd;
      local_68 = local_60 | 0x20;
    }
    else {
      puVar6 = (undefined4 *)strUsingArgs((char *)local_5c);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      local_68 = local_60 | 0x10;
    }
    local_60 = local_68;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff40,8.0,0.0,4.0,(float)*(int *)(this + 0x42c));
    uStack_d8 = *puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0xf;
    *(undefined1 *)puVar6 = 0;
    pSVar4 = loadSprite();
    *(Sprite **)(this + 0x458) = pSVar4;
    local_8 = 0xc;
    if ((local_60 & 0x20) != 0) {
      local_60 = local_60 & 0xffffffdf;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar12);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    local_8 = 0;
    if (((local_60 & 0x10) != 0) && (0xf < local_48)) {
      pnVar12 = (nothrow_t *)(local_48 + 1);
      pvVar8 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar8 = *(void **)((int)local_5c[0] + -4);
        pnVar12 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar12);
    }
    iVar11 = **(int **)(this + 0x458);
  }
  else {
    strUsingArgs(&stack0xffffff68);
    pUVar3 = UIText::create();
    *(UIText **)(this + 0x45c) = pUVar3;
    local_70 = 0x3f000000;
    local_6c = (UI_Button *)0x3f000000;
    local_8._0_1_ = 3;
    (**(code **)(*(int *)pUVar3 + 0xa0))();
    local_8._0_1_ = 0;
    (**(code **)(**(int **)(this + 0x45c) + 0x48))();
    (**(code **)(*(int *)this + 0x108))();
    local_6c = (UI_Button *)&stack0xffffff5c;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff5c,0.0,0.0,4.0,(float)*(int *)(this + 0x42c));
    local_8._0_1_ = 4;
    strUsingArgs(&stack0xffffff44);
    local_8._0_1_ = 0;
    pSVar4 = loadSprite();
    *(Sprite **)(this + 0x450) = pSVar4;
    (**(code **)(*(int *)pSVar4 + 0x48))();
    (**(code **)(*(int *)this + 0x10c))();
    local_6c = (UI_Button *)&stack0xffffff50;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff50,4.0,0.0,4.0,(float)*(int *)(this + 0x42c));
    local_8._0_1_ = 5;
    uStack_d8 = 0x565a33;
    strUsingArgs(&stack0xffffff38);
    local_8._0_1_ = 0;
    pSVar4 = loadSprite();
    *(Sprite **)(this + 0x454) = pSVar4;
    (**(code **)(*(int *)pSVar4 + 0x48))();
    iVar11 = **(int **)(this + 0x454);
    (**(code **)(iVar11 + 0xb0))();
    (**(code **)(iVar11 + 0x24))();
    (**(code **)(*(int *)this + 0x10c))();
    local_6c = (UI_Button *)&stack0xffffff40;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff40,8.0,0.0,4.0,(float)*(int *)(this + 0x42c));
    local_8._0_1_ = 6;
    strUsingArgs((char *)&uStack_d8,"%c_Button_Greyed.png",(int)(char)g_gameData[0xd4]);
    local_8 = (uint)local_8._1_3_ << 8;
    pSVar4 = loadSprite();
    *(Sprite **)(this + 0x458) = pSVar4;
    iVar11 = *(int *)pSVar4;
  }
  (**(code **)(iVar11 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar11 = *(int *)this;
  cocos2d::Size::Size((Size *)&local_70,(float)*(int *)(this + 0x428),(float)*(int *)(this + 0x42c))
  ;
  (**(code **)(iVar11 + 0xac))();
  **(undefined1 **)(this + 0x288) = 1;
  if (0xf < local_30) {
    pnVar12 = (nothrow_t *)(local_30 + 1);
    pvVar8 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar8 = *(void **)((int)local_44[0] + -4);
      pnVar12 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual bool __thiscall UI_Button::keyUp(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall UI_Button::keyUp(UI_Button *this,KeyCode param_1)

{
  PresentationInterface *pPVar1;
  UI_Button *pUVar2;
  PresentationInterface *this_00;
  UI_Button UVar3;
  uint unaff_ESI;
  double in_stack_ffffff84;
  double in_stack_ffffff8c;
  KeyCode local_44 [16];
  
  if (((this[0x430] == (UI_Button)0x0) && (this[0x27c] != (UI_Button)0x0)) &&
     (this[0x44d] != (UI_Button)0x0)) {
    local_44[0] = param_1;
    pPVar1 = Singleton<>::getInstance();
    if (local_44[0] - 0x7c < 0x1a) {
      UVar3 = (UI_Button)((char)local_44[0] + -0x1b);
    }
    else {
      this_00 = pPVar1 + 0x2f0;
      if (pPVar1[0x2f8] == (PresentationInterface)0x0) {
        this_00 = pPVar1 + 0x2e8;
      }
      pUVar2 = (UI_Button *)std::map<>::operator[]((map<> *)this_00,local_44);
      UVar3 = *pUVar2;
    }
    if (this[0x44d] == UVar3) {
      if ((*(int *)(this + 0x3b4) != 0) && (this[0x430] == (UI_Button)0x0)) {
        std::_Func_class<>::operator()
                  ((_Func_class<> *)(this + 0x390),*(Ship **)(g_gameData + 0xd0),
                   (double)((ulonglong)unaff_ESI << 0x20),in_stack_ffffff84,in_stack_ffffff8c);
      }
      return true;
    }
  }
  return false;
}
