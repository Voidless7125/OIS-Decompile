#include "../ois.exe.h"


// public: __thiscall UI_Menu::UI_Menu(class ScreenInterface *,class Widget &,bool *)

UI_Menu * __thiscall
UI_Menu::UI_Menu(UI_Menu *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)

{
  bool *pbVar1;
  uint uVar2;
  MenuManager *pMVar3;
  MenuManager *pMVar4;
  Size *pSVar5;
  uint uVar6;
  bool *pbVar7;
  uint uVar8;
  Size local_20 [8];
  UI_Menu *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca9fe;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = this;
  ScreenElement::ScreenElement((ScreenElement *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  this[0x428] = (UI_Menu)0x1;
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined4 *)(this + 0x430) = 0xffffffff;
  *(undefined4 *)(this + 0x434) = 0xffffffff;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x444) = 0;
  *(undefined4 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x450) = 0;
  *(undefined4 *)(this + 0x454) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x45c) = 0;
  *(undefined4 *)(this + 0x460) = 0;
  *(undefined4 *)(this + 0x464) = 0;
  *(undefined4 *)(this + 0x468) = 0;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x470) = 0;
  pMVar3 = Singleton<>::instance;
  local_8 = 5;
  *(undefined4 *)(this + 0x474) = 0;
  this[0x284] = (UI_Menu)0x1;
  this[0x286] = (UI_Menu)0x1;
  param_2[0xb0] = (Widget)0x1;
  if (pMVar3 == (MenuManager *)0x0) {
    pMVar3 = operator_new(0x10);
    Singleton<>::instance = pMVar3;
    *(int *)pMVar3 = 0;
    *(int *)(pMVar3 + 4) = 0;
    *(int *)(pMVar3 + 8) = 0;
    *(int *)(pMVar3 + 0xc) = 0;
    param_3 = (bool *)pMVar3;
  }
  pMVar4 = pMVar3;
  if (pMVar3 == (MenuManager *)0x0) {
    pMVar4 = operator_new(0x10);
    Singleton<>::instance = pMVar4;
    *(int *)pMVar4 = 0;
    *(int *)(pMVar4 + 4) = 0;
    *(int *)(pMVar4 + 8) = 0;
    *(int *)(pMVar4 + 0xc) = 0;
  }
  pbVar1 = *(bool **)(pMVar4 + 4);
  uVar6 = 0;
  uVar8 = *(int *)(pMVar4 + 8) - (int)pbVar1 >> 2;
  if (uVar8 != 0) {
    pbVar7 = pbVar1;
    do {
      if (*(int *)(*(int *)pbVar7 + 0x278) == *(int *)pMVar3) {
        param_3 = *(bool **)(pbVar1 + uVar6 * 4);
        goto LAB_0056f6ea;
      }
      uVar6 = uVar6 + 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar6 < uVar8);
  }
  param_3 = (bool *)0x0;
LAB_0056f6ea:
  *(bool **)(this + 0x474) = param_3;
  if (*(int *)(param_3 + 0x34c) != 0) {
    if (*(int **)(param_3 + 0x34c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)(param_3 + 0x34c) + 8))(&param_3,uVar2);
    pbVar1 = param_3;
  }
  param_3 = pbVar1;
  changedMenu(this);
  *(undefined4 *)(this + 0x430) = 0;
  updateButtonSelected(this);
  pSVar5 = (Size *)cocos2d::Size::Size(local_20,(float)*(int *)(this + 0x2a0),
                                       (float)*(int *)(this + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this,pSVar5);
  specialDataCheckFunction(this,0.0);
  ExceptionList = local_10;
  return this;
}


// public: virtual void * __thiscall UI_Menu::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_Menu::_scalar_deleting_destructor_(UI_Menu *this,uint param_1)

{
  ~UI_Menu(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x478);
  }
  return this;
}


// public: virtual __thiscall UI_Menu::~UI_Menu(void)

void __thiscall UI_Menu::~UI_Menu(UI_Menu *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  int *piVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005caa20;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  uVar6 = 0;
  piVar7 = *(int **)(this + 0x450);
  uVar4 = (uint)((int)*(int **)(this + 0x454) + (3 - (int)piVar7)) >> 2;
  if (*(int **)(this + 0x454) < piVar7) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      if ((int *)*piVar7 != (int *)0x0) {
        (**(code **)(*(int *)*piVar7 + 0x138))(1,uVar2);
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 != uVar4);
  }
  *(undefined4 *)(this + 0x454) = *(undefined4 *)(this + 0x450);
  uVar4 = 0;
  piVar7 = *(int **)(this + 0x444);
  uVar2 = (uint)((int)*(int **)(this + 0x448) + (3 - (int)piVar7)) >> 2;
  if (*(int **)(this + 0x448) < piVar7) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      if ((int *)*piVar7 != (int *)0x0) {
        (**(code **)(*(int *)*piVar7 + 0x138))(1);
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)(this + 0x448) = *(undefined4 *)(this + 0x444);
  uVar4 = 0;
  piVar7 = *(int **)(this + 0x438);
  uVar2 = (uint)((int)*(int **)(this + 0x43c) + (3 - (int)piVar7)) >> 2;
  if (*(int **)(this + 0x43c) < piVar7) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      if ((int *)*piVar7 != (int *)0x0) {
        (**(code **)(*(int *)*piVar7 + 0x138))(1);
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)(this + 0x43c) = *(undefined4 *)(this + 0x438);
  pvVar1 = *(void **)(this + 0x468);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x470) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056fac9;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x468) = 0;
    *(undefined4 *)(this + 0x46c) = 0;
    *(undefined4 *)(this + 0x470) = 0;
  }
  pvVar1 = *(void **)(this + 0x45c);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x464) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056fac9;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x45c) = 0;
    *(undefined4 *)(this + 0x460) = 0;
    *(undefined4 *)(this + 0x464) = 0;
  }
  pvVar1 = *(void **)(this + 0x450);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x458) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056fac9;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x450) = 0;
    *(undefined4 *)(this + 0x454) = 0;
    *(undefined4 *)(this + 0x458) = 0;
  }
  pvVar1 = *(void **)(this + 0x444);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x44c) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0056fac9;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x444) = 0;
    *(undefined4 *)(this + 0x448) = 0;
    *(undefined4 *)(this + 0x44c) = 0;
  }
  pvVar1 = *(void **)(this + 0x438);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x440) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0056fac9:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x438) = 0;
    *(undefined4 *)(this + 0x43c) = 0;
    *(undefined4 *)(this + 0x440) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Menu::cleanupRender(void)

void __thiscall UI_Menu::cleanupRender(UI_Menu *this)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(this + 0x450);
  uVar1 = (uint)((int)*(int **)(this + 0x454) + (3 - (int)piVar2)) >> 2;
  uVar3 = 0;
  if (*(int **)(this + 0x454) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(this + 0x454) = *(undefined4 *)(this + 0x450);
  uVar3 = 0;
  piVar2 = *(int **)(this + 0x444);
  uVar1 = (uint)((int)*(int **)(this + 0x448) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(this + 0x448) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(this + 0x448) = *(undefined4 *)(this + 0x444);
  uVar3 = 0;
  piVar2 = *(int **)(this + 0x438);
  uVar1 = (uint)((int)*(int **)(this + 0x43c) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(this + 0x43c) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(this + 0x43c) = *(undefined4 *)(this + 0x438);
  return;
}


// public: bool __thiscall UI_Menu::recheckButtonPressed(class cocos2d::Vec2)

bool __thiscall UI_Menu::recheckButtonPressed(UI_Menu *this,float param_2,float param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  
  uVar3 = 0;
  piVar5 = *(int **)(this + 0x468);
  bVar4 = false;
  uVar6 = (uint)((int)*(int **)(this + 0x46c) + (3 - (int)piVar5)) >> 2;
  if (*(int **)(this + 0x46c) < piVar5) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    do {
      iVar1 = *piVar5;
      if ((((param_2 < *(float *)(iVar1 + 0x24)) ||
           (*(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x24) < param_2)) ||
          (param_3 < *(float *)(iVar1 + 0x28) - *(float *)(iVar1 + 0x30))) ||
         (*(float *)(iVar1 + 0x28) < param_3)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar2 != *(char *)(iVar1 + 4)) {
        *(char *)(iVar1 + 4) = cVar2;
        bVar4 = true;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar3 != uVar6);
  }
  return bVar4;
}


// public: virtual void __thiscall UI_Menu::render(void)

void __thiscall UI_Menu::render(UI_Menu *this)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  bool bVar3;
  char *pcVar4;
  UIText *pUVar5;
  undefined4 *puVar6;
  uint unaff_EDI;
  AnimationFrames *pAVar7;
  uint uStack_64;
  AnimationFrames *pAStack_60;
  AnimationFrames *local_18;
  UIText *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005caa52;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  if (g_gameLogic[5] == (GameLogic)0x0) {
    if ((*(int *)(this + 0x278) != 0) &&
       (iVar1 = *(int *)(*(int *)(this + 0x278) + 300), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 5) = 0;
    }
    local_18 = *(AnimationFrames **)(this + 0x2a4);
    bVar3 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
    if (!bVar3) {
      std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
      pAStack_60 = (AnimationFrames *)0x56fd54;
      strUsingArgs(&stack0xffffffb0);
      pUVar5 = UIText::create();
      local_8 = 0;
      local_14 = pUVar5;
      (**(code **)(*(int *)pUVar5 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*(int *)pUVar5 + 0x48))();
      (**(code **)(*(int *)this + 0x108))();
      ppAVar2 = *(AnimationFrames ***)(this + 0x43c);
      if (*(AnimationFrames ***)(this + 0x440) == ppAVar2) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x438),ppAVar2,(AnimationFrames **)&local_14);
        pUVar5 = local_14;
      }
      else {
        *ppAVar2 = (AnimationFrames *)pUVar5;
        *(int *)(this + 0x43c) = *(int *)(this + 0x43c) + 4;
      }
      uStack_64 = uStack_64 & 0xffffff00;
      std::basic_string<>::assign((basic_string<> *)&uStack_64,"white.png",9);
      local_18 = (AnimationFrames *)loadSprite();
      iVar1 = *(int *)local_18;
      (**(code **)(*(int *)pUVar5 + 0xb0))();
      pAVar7 = local_18;
      (**(code **)(iVar1 + 0x24))();
      local_8 = 1;
      (**(code **)(*(int *)pAVar7 + 0xa0))();
      local_8 = 0xffffffff;
      iVar1 = *(int *)pAVar7;
      (**(code **)(*(int *)local_14 + 0xb0))();
      pAVar7 = local_18;
      pAStack_60 = (AnimationFrames *)0x56febd;
      (**(code **)(iVar1 + 0x48))();
      pAStack_60 = pAVar7;
      uStack_64 = 0x56fec8;
      (**(code **)(*(int *)this + 0x10c))();
      ppAVar2 = *(AnimationFrames ***)(this + 0x454);
      if (*(AnimationFrames ***)(this + 0x458) == ppAVar2) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x450),ppAVar2,&local_18);
      }
      else {
        *ppAVar2 = pAVar7;
        *(int *)(this + 0x454) = *(int *)(this + 0x454) + 4;
      }
    }
    puVar6 = *(undefined4 **)(this + 0x468);
    local_18 = (AnimationFrames *)0x0;
    pAVar7 = (AnimationFrames *)
             ((uint)((int)*(undefined4 **)(this + 0x46c) + (3 - (int)puVar6)) >> 2);
    if (*(undefined4 **)(this + 0x46c) < puVar6) {
      pAVar7 = (AnimationFrames *)0x0;
    }
    if (pAVar7 != (AnimationFrames *)0x0) {
      do {
        ButtonElement::render
                  ((ButtonElement *)*puVar6,(int)(this + 0x438),(vector<> *)(this + 0x438),
                   (vector<> *)(this + 0x444),(Node *)this);
        puVar6 = puVar6 + 1;
        local_18 = local_18 + 1;
      } while (local_18 != pAVar7);
    }
    **(undefined1 **)(this + 0x288) = 1;
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Menu::specialDataCheckFunction(float)

void __thiscall UI_Menu::specialDataCheckFunction(UI_Menu *this,float param_1)

{
  int *piVar1;
  MenuManager *this_00;
  Menu *pMVar2;
  SoundEngine *this_01;
  Ship *pSVar3;
  Sound SVar4;
  int iVar5;
  Menu *apMStack_c [2];
  
  if (g_gameLogic[5] == (GameLogic)0x0) {
    apMStack_c[0] = (Menu *)this;
    if (this[0x428] != (UI_Menu)0x0) {
      this[0x428] = (UI_Menu)0x0;
      (**(code **)(*(int *)this + 0x294))();
    }
    if (*(int *)(g_gameLogic + 0x144) != -1) {
      g_gameLogic[0x1c4] = (GameLogic)0x0;
      clearMenu(this);
      iVar5 = *(int *)(g_gameLogic + 0x144);
      this_00 = Singleton<>::getInstance();
      pMVar2 = MenuManager::getMenu(this_00,iVar5);
      *(Menu **)(this + 0x474) = pMVar2;
      if (*(int **)(pMVar2 + 0x34c) != (int *)0x0) {
        apMStack_c[0] = pMVar2;
        (**(code **)(**(int **)(pMVar2 + 0x34c) + 8))(apMStack_c);
      }
      changedMenu(this);
      *(undefined4 *)(this + 0x430) = 0;
      updateButtonSelected(this);
      (**(code **)(*(int *)this + 0x294))();
      iVar5 = -1;
      SVar4 = 8;
      pSVar3 = ShipData::currentlyBoardedShip;
      this_01 = Singleton<>::getInstance();
      SoundEngine::playSound(this_01,pSVar3,SVar4,iVar5);
      *(undefined4 *)(g_gameLogic + 0x144) = 0xffffffff;
      (**(code **)(*(int *)this + 0x294))();
      return;
    }
    if (g_gameLogic[0x60] != (GameLogic)0x0) {
      g_gameLogic[0x60] = (GameLogic)0x0;
      piVar1 = *(int **)(*(Menu **)(this + 0x474) + 0x34c);
      if (piVar1 != (int *)0x0) {
        apMStack_c[0] = *(Menu **)(this + 0x474);
        (**(code **)(*piVar1 + 8))(apMStack_c);
      }
      changedMenu(this);
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  return;
}


// public: virtual void __thiscall UI_Menu::mouseMove(class cocos2d::Vec2)

void __thiscall UI_Menu::mouseMove(UI_Menu *this,undefined4 param_2,float param_3)

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
  if (g_gameLogic[5] == (GameLogic)0x0) {
    bVar1 = recheckButtonPressed(this,param_2,(float)*(int *)(this + 0x2a4) - param_3);
    if (bVar1) {
      (**(code **)(*(int *)this + 0x294))(uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Menu::mouseUp(class cocos2d::Vec2)

void __thiscall UI_Menu::mouseUp(UI_Menu *this,undefined4 param_2,float param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c3eb9;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (g_gameLogic[5] == (GameLogic)0x0) {
    recheckButtonPressed(this,param_2,(float)*(int *)(this + 0x2a4) - param_3);
    for (puVar2 = *(undefined4 **)(this + 0x468); puVar2 != *(undefined4 **)(this + 0x46c);
        puVar2 = puVar2 + 1) {
      if (((ButtonElement *)*puVar2)[4] != (ButtonElement)0x0) {
        triggerButton(this,(ButtonElement *)*puVar2);
        break;
      }
    }
    *(undefined4 *)(this + 0x430) = 0xffffffff;
    updateButtonSelected(this);
    piVar3 = *(int **)(this + 0x468);
    uVar4 = 0;
    uVar5 = (uint)((int)*(int **)(this + 0x46c) + (3 - (int)piVar3)) >> 2;
    if (*(int **)(this + 0x46c) < piVar3) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      do {
        if (*piVar3 == 0) {
          DAT_00000004 = 1;
        }
        else {
          *(undefined1 *)(*piVar3 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar4 != uVar5);
    }
    (**(code **)(*(int *)this + 0x294))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_Menu::mouseHoverCancel(void)

void __thiscall UI_Menu::mouseHoverCancel(UI_Menu *this)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  piVar2 = *(int **)(this + 0x468);
  uVar4 = (uint)((int)*(int **)(this + 0x46c) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(this + 0x46c) < piVar2) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 + 1;
      *(bool *)(iVar1 + 4) = iVar1 == 0;
    } while (uVar3 != uVar4);
  }
                    // WARNING: Could not recover jumptable at 0x00570261. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// public: bool __thiscall UI_Menu::triggerButton(class ButtonElement *)

bool __thiscall UI_Menu::triggerButton(UI_Menu *this,ButtonElement *param_1)

{
  GameLogic *pGVar1;
  bool bVar2;
  undefined1 uVar3;
  Ship *pSVar4;
  MenuManager *this_00;
  Menu *pMVar5;
  SoundEngine *pSVar6;
  int *piVar7;
  UI_Menu *this_01;
  undefined4 *puVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  basic_string<> *pbVar11;
  basic_string<> abStack_64 [8];
  undefined4 uStack_5c;
  Sound SVar12;
  int iVar13;
  basic_string<> *local_3c;
  basic_string<> *local_38;
  int local_30;
  void *local_2c [5];
  uint local_18;
  Ship *local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005caa80;
  local_10 = ExceptionList;
  pSVar4 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pSVar4;
  if (param_1 != (ButtonElement *)0x0) {
    iVar13 = *(int *)param_1;
    if (iVar13 == -2) {
      if (*(int *)(*(int *)(this + 0x474) + 0x27c) != -1) {
        clearMenu(this);
        iVar13 = *(int *)(*(int *)(this + 0x474) + 0x27c);
        this_00 = Singleton<>::getInstance();
        pMVar5 = MenuManager::getMenu(this_00,iVar13);
        *(Menu **)(this + 0x474) = pMVar5;
        pGVar1 = g_gameLogic;
        g_gameLogic[0x1c4] = (GameLogic)0x0;
        pGVar1[0xa4] = (GameLogic)0x0;
        piVar7 = *(int **)(*(int *)(this + 0x474) + 0x34c);
        if (piVar7 != (int *)0x0) {
          local_30 = *(int *)(this + 0x474);
          (**(code **)(*piVar7 + 8))();
        }
        changedMenu(this);
        *(undefined4 *)(this + 0x430) = 0;
        updateButtonSelected(this);
        iVar13 = -1;
        SVar12 = 9;
        uStack_5c = 0x57033f;
        pSVar4 = ShipData::currentlyBoardedShip;
        pSVar6 = Singleton<>::getInstance();
        uStack_5c = 0x570346;
        SoundEngine::playSound(pSVar6,pSVar4,SVar12,iVar13);
      }
    }
    else if (iVar13 == -6) {
      if ((*(int *)(this + 0x434) != -1) && (0 < *(int *)(this + 0x42c))) {
        performPrev(this);
        iVar13 = -1;
        SVar12 = 9;
        uStack_5c = 0x570376;
        pSVar4 = ShipData::currentlyBoardedShip;
        pSVar6 = Singleton<>::getInstance();
        uStack_5c = 0x57037d;
        SoundEngine::playSound(pSVar6,pSVar4,SVar12,iVar13);
      }
    }
    else if (iVar13 == -7) {
      bVar2 = canNext(this);
      if (bVar2) {
        performNext(this_01);
        ShipInterface::soundHigh(pSVar4);
      }
    }
    else {
      for (puVar8 = *(undefined4 **)(*(int *)(this + 0x474) + 0x31c);
          puVar8 != *(undefined4 **)(*(int *)(this + 0x474) + 800); puVar8 = puVar8 + 1) {
        piVar7 = (int *)*puVar8;
        if (*piVar7 == iVar13) goto LAB_005703cf;
      }
      piVar7 = (int *)0x0;
LAB_005703cf:
      std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)(piVar7 + 0xd));
      splitStringBy();
      local_8 = 0;
      for (pbVar11 = local_3c; pbVar11 != local_38; pbVar11 = pbVar11 + 0x18) {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar11);
        local_8 = CONCAT31(local_8._1_3_,1);
        std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)local_2c);
        bVar2 = Menu::triggerValid();
        if (bVar2) {
          std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)local_2c);
          runTrigger(this);
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar10 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar10 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar10);
        }
      }
      std::vector<>::_Tidy((vector<> *)&local_3c);
    }
  }
  ExceptionList = local_10;
  uVar3 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: void __thiscall UI_Menu::runTrigger(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall UI_Menu::runTrigger(UI_Menu *this,void *param_2)

{
  int iVar1;
  GameLogic *pGVar2;
  bool bVar3;
  Ship *pSVar4;
  SoundEngine *pSVar5;
  Director *this_00;
  int iVar6;
  MenuManager *this_01;
  Menu *pMVar7;
  Scenario *pSVar8;
  undefined4 *puVar9;
  FlagManager *pFVar10;
  SaveHandler *this_02;
  void *pvVar11;
  nothrow_t *pnVar12;
  char *pcVar13;
  uint unaff_EDI;
  uint in_stack_00000018;
  basic_string<> abStack_48 [8];
  undefined4 uStack_40;
  Ship *pSVar14;
  Sound SVar15;
  int local_20;
  int local_1c;
  PresentationInterface *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cab32;
  local_10 = ExceptionList;
  pSVar4 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)&param_2);
  splitStringBy();
  iVar6 = local_20;
  local_8._0_1_ = 1;
  bVar3 = std::_Traits_equal<>("quit",4,(char *)pSVar4,unaff_EDI);
  if (bVar3) {
    if (Singleton<>::instance == (PresentationInterface *)0x0) {
      local_14 = operator_new(0x418);
      local_8._0_1_ = 2;
      Singleton<>::instance =
           (PresentationInterface *)PresentationInterface::PresentationInterface(local_14);
      local_8._0_1_ = 1;
    }
    SteamAPI_Shutdown();
    pSVar5 = Singleton<>::getInstance();
    SoundEngine::shutdown(pSVar5);
    this_00 = cocos2d::Director::getInstance();
    cocos2d::Director::end(this_00);
    goto LAB_00570bd0;
  }
  bVar3 = std::_Traits_equal<>("menu",4,(char *)pSVar4,unaff_EDI);
  if (bVar3) {
    pcVar13 = (char *)(iVar6 + 0x18);
    if (0xf < *(uint *)(iVar6 + 0x2c)) {
      pcVar13 = *(char **)pcVar13;
    }
    iVar6 = atoi(pcVar13);
    g_gameLogic[0x1c4] = (GameLogic)0x0;
    clearMenu(this);
    this_01 = Singleton<>::getInstance();
    pMVar7 = MenuManager::getMenu(this_01,iVar6);
    *(Menu **)(this + 0x474) = pMVar7;
    if (*(int *)(pMVar7 + 0x34c) != 0) {
      local_14 = (PresentationInterface *)pMVar7;
      if (*(int **)(pMVar7 + 0x34c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(**(int **)(pMVar7 + 0x34c) + 8))();
    }
    changedMenu(this);
    *(undefined4 *)(this + 0x430) = 0;
    updateButtonSelected(this);
    (**(code **)(*(int *)this + 0x294))();
    iVar6 = -1;
    SVar15 = 8;
    uStack_40 = 0x57062c;
    pSVar4 = ShipData::currentlyBoardedShip;
    pSVar5 = Singleton<>::getInstance();
    uStack_40 = 0x570633;
    SoundEngine::playSound(pSVar5,pSVar4,SVar15,iVar6);
    goto LAB_00570bd0;
  }
  bVar3 = std::_Traits_equal<>("newcampaign",0xb,(char *)pSVar4,unaff_EDI);
  if ((((bVar3) || (bVar3 = std::_Traits_equal<>("newtutorial",0xb,(char *)pSVar4,unaff_EDI), bVar3)
       ) || (bVar3 = std::_Traits_equal<>("beginscenario",0xd,(char *)pSVar4,unaff_EDI), bVar3)) ||
     ((bVar3 = std::_Traits_equal<>("continuecampaign",0x10,(char *)pSVar4,unaff_EDI), bVar3 ||
      (bVar3 = std::_Traits_equal<>("selectsaveslot",0xe,(char *)pSVar4,unaff_EDI), bVar3)))) {
    uStack_40 = 0x570b27;
    debugPrint("DETAIL","Selected item %d");
    iVar6 = -1;
    SVar15 = 8;
    uStack_40 = 0x570b39;
    pSVar14 = ShipData::currentlyBoardedShip;
    pSVar5 = Singleton<>::getInstance();
    uStack_40 = 0x570b40;
    SoundEngine::playSound(pSVar5,pSVar14,SVar15,iVar6);
    bVar3 = std::_Traits_equal<>("selectsaveslot",0xe,(char *)pSVar4,unaff_EDI);
    if (bVar3) {
      pcVar13 = (char *)(local_20 + 0x18);
      if (0xf < *(uint *)(local_20 + 0x2c)) {
        pcVar13 = *(char **)pcVar13;
      }
      iVar6 = atoi(pcVar13);
      *(int *)(g_gameLogic + 0x74) = iVar6;
      std::basic_string<>::assign((basic_string<> *)(g_gameData + 0xb4),"objectsinspace",0xe);
      g_gameLogic[0xa4] = (GameLogic)0x0;
      changedMenu(this);
      (**(code **)(*(int *)this + 0x294))();
      uStack_40 = 0x570bcd;
      debugPrint("DETAIL","Selected save slot %d");
    }
    goto LAB_00570bd0;
  }
  bVar3 = std::_Traits_equal<>("selectscenario",0xe,(char *)pSVar4,unaff_EDI);
  if (!bVar3) goto LAB_00570bd0;
  iVar1 = (local_1c - iVar6) / 0x18;
  if (iVar1 == 1) {
    std::basic_string<>::assign((basic_string<> *)(g_gameData + 0xb4),"",0);
  }
  else {
    bVar3 = std::_Traits_equal<>("%ANYSINGLE",10,(char *)pSVar4,unaff_EDI);
    if (bVar3) {
      std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)(g_gameData + 0xb4));
      pSVar8 = GameData::getScenario();
      if ((pSVar8 == (Scenario *)0x0) || (*(int *)(pSVar8 + 0x6c) != 2)) {
        for (puVar9 = *(undefined4 **)(g_gameData + 0x60);
            puVar9 != *(undefined4 **)(g_gameData + 100); puVar9 = puVar9 + 1) {
          if (*(int *)((basic_string<> *)*puVar9 + 0x6c) == 2) {
            std::basic_string<>::operator=
                      ((basic_string<> *)(g_gameData + 0xb4),(basic_string<> *)*puVar9);
            break;
          }
        }
      }
      pGVar2 = g_gameLogic;
      g_gameLogic[0x1c4] = (GameLogic)0x0;
      if (*(int *)(pSVar8 + 0x6c) == 1) {
        if (*(int *)(pGVar2 + 0x74) != -1) {
          Singleton<>::getInstance();
          bVar3 = SaveHandler::saveExists(this_02,*(int *)(g_gameLogic + 0x74));
          if (bVar3) {
            local_14 = (PresentationInterface *)&stack0xffffffb4;
            std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_begin_game",0xe);
            local_8._0_1_ = 3;
            pFVar10 = Singleton<>::getInstance();
            local_8._0_1_ = 1;
            FlagManager::setFlag(pFVar10);
            local_14 = (PresentationInterface *)&stack0xffffffb4;
            std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_delete_save",0xf);
            local_8._0_1_ = 4;
            pFVar10 = Singleton<>::getInstance();
            local_8._0_1_ = 1;
            FlagManager::setFlag(pFVar10);
            local_14 = (PresentationInterface *)&stack0xffffffb4;
            std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_continue_game",0x11)
            ;
            local_8._0_1_ = 5;
            pFVar10 = Singleton<>::getInstance();
            local_8._0_1_ = 1;
            FlagManager::setFlag(pFVar10);
            local_14 = (PresentationInterface *)&stack0xffffffb4;
            std::basic_string<>::assign
                      ((basic_string<> *)&stack0xffffffb4,"can_confirm_delete_save",0x17);
            local_8._0_1_ = 6;
            goto LAB_00570a95;
          }
        }
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_begin_game",0xe);
        local_8._0_1_ = 7;
        pFVar10 = Singleton<>::getInstance();
        local_8._0_1_ = 1;
        FlagManager::setFlag(pFVar10);
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_delete_save",0xf);
        local_8._0_1_ = 8;
        pFVar10 = Singleton<>::getInstance();
        local_8._0_1_ = 1;
        FlagManager::setFlag(pFVar10);
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_continue_game",0x11);
        local_8._0_1_ = 9;
        pFVar10 = Singleton<>::getInstance();
        local_8._0_1_ = 1;
        FlagManager::setFlag(pFVar10);
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffffb4,"can_confirm_delete_save",0x17);
        local_8._0_1_ = 10;
      }
      else {
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_begin_game",0xe);
        local_8._0_1_ = 0xb;
        pFVar10 = Singleton<>::getInstance();
        local_8._0_1_ = 1;
        FlagManager::setFlag(pFVar10);
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_delete_save",0xf);
        local_8._0_1_ = 0xc;
        pFVar10 = Singleton<>::getInstance();
        local_8._0_1_ = 1;
        FlagManager::setFlag(pFVar10);
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"can_continue_game",0x11);
        local_8._0_1_ = 0xd;
        pFVar10 = Singleton<>::getInstance();
        local_8._0_1_ = 1;
        FlagManager::setFlag(pFVar10);
        local_14 = (PresentationInterface *)&stack0xffffffb4;
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffffb4,"can_confirm_delete_save",0x17);
        local_8._0_1_ = 0xe;
      }
LAB_00570a95:
      pFVar10 = Singleton<>::getInstance();
      local_8._0_1_ = 1;
      FlagManager::setFlag(pFVar10);
    }
    else if (iVar1 == 1) {
      std::basic_string<>::assign((basic_string<> *)(g_gameData + 0xb4),"",0);
    }
    else {
      std::basic_string<>::operator=
                ((basic_string<> *)(g_gameData + 0xb4),(basic_string<> *)(iVar6 + 0x18));
    }
  }
  uStack_40 = 0x570aee;
  debugPrint("DETAIL","Selected scenario %s");
  ShipInterface::soundHigh(pSVar4);
  changedMenu(this);
  (**(code **)(*(int *)this + 0x294))();
LAB_00570bd0:
  std::vector<>::_Tidy((vector<> *)&local_20);
  if (0xf < in_stack_00000018) {
    pnVar12 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar11 = param_2;
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)param_2 + -4);
      pnVar12 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall UI_Menu::clearMenu(void)

void __thiscall UI_Menu::clearMenu(UI_Menu *this)

{
  basic_string<> *pbVar1;
  bool bVar2;
  char *pcVar3;
  FlagManager *pFVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  basic_string<> *pbVar7;
  uint unaff_EDI;
  int iVar8;
  basic_string<> abStack_64 [12];
  undefined4 uStack_58;
  basic_string<> *local_3c;
  basic_string<> *local_38;
  undefined1 *local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cab70;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar3;
  removeButtonData(this);
  iVar8 = *(int *)(this + 0x474);
  uStack_58 = 0x570c8a;
  bVar2 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
  if (!bVar2) {
    std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)(iVar8 + 0x280));
    splitStringBy();
    local_8 = 0;
    for (pbVar7 = local_3c; pbVar7 != local_38; pbVar7 = pbVar7 + 0x18) {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar7);
      local_8 = CONCAT31(local_8._1_3_,1);
      std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)local_2c);
      bVar2 = Menu::triggerValid();
      if (bVar2) {
        std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)local_2c);
        runTrigger(this);
      }
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar6 = (nothrow_t *)(local_18 + 1);
        pvVar5 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)local_2c[0] + -4);
          pnVar6 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_00570df2;
        }
        uStack_58 = 0x570d2e;
        operator_delete(pvVar5,pnVar6);
      }
    }
    local_8 = 0xffffffff;
    std::vector<>::_Tidy((vector<> *)&local_3c);
    iVar8 = *(int *)(this + 0x474);
  }
  pbVar7 = *(basic_string<> **)(iVar8 + 0x310);
  pbVar1 = *(basic_string<> **)(iVar8 + 0x314);
  do {
    if (pbVar7 == pbVar1) {
      ExceptionList = local_10;
      __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar7);
    local_30 = &stack0xffffff98;
    local_8 = 2;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff98,(basic_string<> *)local_2c);
    local_8._0_1_ = 3;
    pFVar4 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,2);
    FlagManager::setFlag(pFVar4);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
LAB_00570df2:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_58 = 0x570dcc;
      operator_delete(pvVar5,pnVar6);
    }
    pbVar7 = pbVar7 + 0x18;
  } while( true );
}


// public: void __thiscall UI_Menu::removeButtonData(void)

void __thiscall UI_Menu::removeButtonData(UI_Menu *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(this + 0x46c);
  puVar7 = *(undefined4 **)(this + 0x468);
  do {
    if (puVar7 == puVar1) {
      *(undefined4 *)(this + 0x46c) = *(undefined4 *)(this + 0x468);
      return;
    }
    pvVar2 = (void *)*puVar7;
    if (pvVar2 != (void *)0x0) {
      uVar3 = *(uint *)((int)pvVar2 + 0x20);
      if (0xf < uVar3) {
        pvVar4 = *(void **)((int)pvVar2 + 0xc);
        pnVar6 = (nothrow_t *)(uVar3 + 1);
        pvVar5 = pvVar4;
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)pvVar4 + -4);
          pnVar6 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar6);
      }
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20) = 0xf;
      *(undefined1 *)((int)pvVar2 + 0xc) = 0;
      operator_delete(pvVar2,(nothrow_t *)0x3c);
    }
    puVar7 = puVar7 + 1;
  } while( true );
}


// public: void __thiscall UI_Menu::changedMenu(void)

void __thiscall UI_Menu::changedMenu(UI_Menu *this)

{
  int iVar1;
  int *piVar2;
  AnimationFrames **ppAVar3;
  AnimationFrames AVar4;
  bool bVar5;
  char *pcVar6;
  ButtonElement *pBVar7;
  AnimationFrames *pAVar8;
  Size *pSVar9;
  AnimationFrames *pAVar10;
  _Tree_node<> *p_Var11;
  void *pvVar12;
  _Tree_comp_alloc<> *this_00;
  nothrow_t *pnVar13;
  AnimationFrames *pAVar14;
  int iVar15;
  void **ppvVar16;
  uint unaff_EDI;
  basic_string<> abStack_94 [12];
  undefined4 uStack_88;
  Size local_68 [8];
  AnimationFrames *local_60;
  AnimationFrames *local_5c;
  int local_58;
  ButtonElement *local_54;
  int local_50;
  AnimationFrames *local_4c;
  AnimationFrames *local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cac0b;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar6;
  removeButtonData(this);
  local_58 = *(int *)(this + 0x2a4) / 6;
  local_5c = (AnimationFrames *)0x0;
  iVar1 = *(int *)(this + 0x474);
  if ((uint)(*(int *)(iVar1 + 800) - *(int *)(iVar1 + 0x31c) >> 2) < 9) {
    *(undefined4 *)(this + 0x434) = 0xffffffff;
    iVar15 = -1;
  }
  else {
    *(undefined4 *)(this + 0x434) = 8;
    iVar15 = 8;
  }
  pAVar14 = *(AnimationFrames **)(iVar1 + 0x31c);
  local_48 = *(AnimationFrames **)(iVar1 + 800);
  if (pAVar14 != local_48) {
    local_4c = (AnimationFrames *)0x0;
    do {
      local_50 = *(int *)pAVar14;
      if ((*(int *)(this + 0x434) == -1) ||
         ((*(int *)(this + 0x42c) <= (int)local_5c &&
          ((int)local_5c < *(int *)(this + 0x434) + *(int *)(this + 0x42c))))) {
        pBVar7 = operator_new(0x3c);
        local_8 = 0;
        local_54 = pBVar7;
        std::basic_string<>::basic_string<>(abStack_94,(basic_string<> *)(local_50 + 4));
        pAVar8 = (AnimationFrames *)ButtonElement::ButtonElement(pBVar7);
        local_8 = 0xffffffff;
        *(undefined4 *)(pAVar8 + 0x24) = 0x40c00000;
        *(float *)(pAVar8 + 0x28) = (float)((*(int *)(this + 0x2a4) - (int)local_4c) - local_58);
        uStack_88 = 0x570fe0;
        local_60 = pAVar8;
        pSVar9 = (Size *)cocos2d::Size::Size(local_68,128.0,15.0);
        cocos2d::Size::operator=((Size *)(pAVar8 + 0x2c),pSVar9);
        pAVar8[8] = (AnimationFrames)0x1;
        if (*(int *)(*(int *)(this + 0x474) + 0x374) != 0) {
          piVar2 = *(int **)(*(int *)(this + 0x474) + 0x374);
          if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          AVar4 = (AnimationFrames)(**(code **)(*piVar2 + 8))();
          pAVar8[6] = AVar4;
        }
        ppAVar3 = *(AnimationFrames ***)(this + 0x46c);
        if (*(AnimationFrames ***)(this + 0x470) == ppAVar3) {
          uStack_88 = 0x571042;
          std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x468),ppAVar3,&local_60);
        }
        else {
          *ppAVar3 = pAVar8;
          *(int *)(this + 0x46c) = *(int *)(this + 0x46c) + 4;
        }
        local_4c = local_4c + 0x13;
      }
      local_5c = local_5c + 1;
      pAVar14 = pAVar14 + 4;
    } while (pAVar14 != local_48);
    iVar15 = *(int *)(this + 0x434);
  }
  if (iVar15 != -1) {
    pBVar7 = operator_new(0x3c);
    local_8 = 1;
    abStack_94[0] = (basic_string<>)0x0;
    local_54 = pBVar7;
    std::basic_string<>::assign(abStack_94,"`a1",3);
    pAVar14 = (AnimationFrames *)ButtonElement::ButtonElement(pBVar7);
    local_8 = 0xffffffff;
    *(undefined4 *)(pAVar14 + 0x24) = 0x430a0000;
    *(float *)(pAVar14 + 0x28) = (float)(*(int *)(this + 0x2a4) - local_58);
    if ((*(int *)(this + 0x434) == -1) || (*(int *)(this + 0x42c) < 1)) {
      AVar4 = (AnimationFrames)0x1;
    }
    else {
      AVar4 = (AnimationFrames)0x0;
    }
    pAVar14[7] = AVar4;
    uStack_88 = 0x57110a;
    local_4c = pAVar14;
    pSVar9 = (Size *)cocos2d::Size::Size(local_68,15.0,15.0);
    cocos2d::Size::operator=((Size *)(pAVar14 + 0x2c),pSVar9);
    ppAVar3 = *(AnimationFrames ***)(this + 0x46c);
    if (*(AnimationFrames ***)(this + 0x470) == ppAVar3) {
      uStack_88 = 0x571139;
      std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x468),ppAVar3,&local_4c);
    }
    else {
      *ppAVar3 = pAVar14;
      *(int *)(this + 0x46c) = *(int *)(this + 0x46c) + 4;
    }
    pBVar7 = operator_new(0x3c);
    local_8 = 2;
    abStack_94[0] = (basic_string<>)0x0;
    local_54 = pBVar7;
    std::basic_string<>::assign(abStack_94,"`a2",3);
    pAVar14 = (AnimationFrames *)ButtonElement::ButtonElement(pBVar7);
    local_8 = 0xffffffff;
    *(undefined4 *)(pAVar14 + 0x24) = 0x430a0000;
    *(float *)(pAVar14 + 0x28) =
         (float)(((*(int *)(this + 0x2a4) + *(int *)(this + 0x434) * -0x13) - local_58) + 0x13);
    if ((*(int *)(this + 0x434) == -1) ||
       ((uint)((*(int *)(*(int *)(this + 0x474) + 800) - *(int *)(*(int *)(this + 0x474) + 0x31c) >>
               2) - *(int *)(this + 0x434)) <= *(uint *)(this + 0x42c))) {
      AVar4 = (AnimationFrames)0x1;
    }
    else {
      AVar4 = (AnimationFrames)0x0;
    }
    pAVar14[7] = AVar4;
    uStack_88 = 0x5711f7;
    local_4c = pAVar14;
    pSVar9 = (Size *)cocos2d::Size::Size(local_68,15.0,15.0);
    cocos2d::Size::operator=((Size *)(pAVar14 + 0x2c),pSVar9);
    ppAVar3 = *(AnimationFrames ***)(this + 0x46c);
    if (*(AnimationFrames ***)(this + 0x470) == ppAVar3) {
      uStack_88 = 0x57121d;
      std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x468),ppAVar3,&local_4c);
    }
    else {
      *ppAVar3 = pAVar14;
      *(int *)(this + 0x46c) = *(int *)(this + 0x46c) + 4;
    }
  }
  if (*(int *)(*(int *)(this + 0x474) + 0x27c) != -1) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    uStack_88 = 0x571251;
    std::basic_string<>::assign((basic_string<> *)local_2c,"`a3 back",8);
    local_8 = 3;
    iVar1 = *(int *)(this + 0x474);
    ppvVar16 = (void **)(iVar1 + 0x298);
    local_48 = *(AnimationFrames **)(iVar1 + 0x2a8);
    uStack_88 = 0x571282;
    bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
    iVar15 = 0;
    if (!bVar5) {
      if (local_2c != ppvVar16) {
        if (0xf < *(uint *)(iVar1 + 0x2ac)) {
          ppvVar16 = *ppvVar16;
        }
        uStack_88 = 0x5712a6;
        std::basic_string<>::assign((basic_string<> *)local_2c,(char *)ppvVar16,(uint)local_48);
      }
      iVar15 = 0;
      if (10 < local_1c) {
        iVar15 = 1;
      }
    }
    pBVar7 = operator_new(0x3c);
    local_8._0_1_ = 4;
    local_54 = pBVar7;
    std::basic_string<>::basic_string<>(abStack_94,(basic_string<> *)local_2c);
    pAVar14 = (AnimationFrames *)ButtonElement::ButtonElement(pBVar7);
    local_8 = CONCAT31(local_8._1_3_,3);
    *(undefined4 *)(pAVar14 + 0x24) = 0x40c00000;
    *(undefined4 *)(pAVar14 + 0x28) = 0x41980000;
    uStack_88 = 0x57131c;
    local_48 = pAVar14;
    pSVar9 = (Size *)cocos2d::Size::Size(local_68,(float)((iVar15 + 1) * 0x40),15.0);
    cocos2d::Size::operator=((Size *)(pAVar14 + 0x2c),pSVar9);
    ppAVar3 = *(AnimationFrames ***)(this + 0x46c);
    if (*(AnimationFrames ***)(this + 0x470) == ppAVar3) {
      uStack_88 = 0x571349;
      std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x468),ppAVar3,&local_48);
    }
    else {
      *ppAVar3 = pAVar14;
      *(int *)(this + 0x46c) = *(int *)(this + 0x46c) + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar13 = (nothrow_t *)(local_18 + 1);
      pvVar12 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_2c[0] + -4);
        pnVar13 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) {
LAB_00571376:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_88 = 0x571383;
      operator_delete(pvVar12,pnVar13);
    }
  }
  pAVar14 = *(AnimationFrames **)(*(int *)(this + 0x474) + 0x314);
  pAVar8 = *(AnimationFrames **)(*(int *)(this + 0x474) + 0x310);
  local_48 = pAVar14;
  if (pAVar8 != pAVar14) {
    do {
      std::basic_string<>::basic_string<>((basic_string<> *)local_44,(basic_string<> *)pAVar8);
      local_54 = (ButtonElement *)&stack0xffffff68;
      local_8 = 5;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff68,(basic_string<> *)local_44);
      local_8._0_1_ = 6;
      if (Singleton<>::instance == (FlagManager *)0x0) {
        pAVar10 = operator_new(0x30);
        *(undefined4 *)pAVar10 = 0;
        *(undefined4 *)(pAVar10 + 4) = 0;
        *(undefined4 *)(pAVar10 + 8) = 0;
        pAVar14 = pAVar10 + 0xc;
        local_8._0_1_ = 8;
        *(undefined4 *)pAVar14 = 0;
        *(undefined4 *)(pAVar10 + 0x10) = 0;
        local_60 = pAVar10;
        local_5c = pAVar14;
        p_Var11 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
        *(_Tree_node<> **)pAVar14 = p_Var11;
        *(undefined4 *)(pAVar10 + 0x24) = 0;
        *(undefined4 *)(pAVar10 + 0x28) = 0xf;
        pAVar10[0x14] = (AnimationFrames)0x0;
        pAVar14 = local_48;
        Singleton<>::instance = (FlagManager *)pAVar10;
      }
      local_8 = CONCAT31(local_8._1_3_,5);
      FlagManager::setFlag(Singleton<>::instance);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pnVar13 = (nothrow_t *)(local_30 + 1);
        pvVar12 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_44[0] + -4);
          pnVar13 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_00571376;
        }
        uStack_88 = 0x571477;
        operator_delete(pvVar12,pnVar13);
      }
      pAVar8 = pAVar8 + 0x18;
    } while (pAVar8 != pAVar14);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall UI_Menu::canNext(void)

bool __thiscall UI_Menu::canNext(UI_Menu *this)

{
  if ((*(int *)(this + 0x434) != -1) &&
     (*(uint *)(this + 0x42c) <
      (uint)((*(int *)(*(int *)(this + 0x474) + 800) - *(int *)(*(int *)(this + 0x474) + 0x31c) >> 2
             ) - *(int *)(this + 0x434)))) {
    return true;
  }
  return false;
}


// public: void __thiscall UI_Menu::updateButtonSelected(void)

void __thiscall UI_Menu::updateButtonSelected(UI_Menu *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(this + 0x468);
  if (*(int *)(this + 0x46c) - iVar2 >> 2 != 0) {
    do {
      *(bool *)(*(int *)(iVar2 + uVar1 * 4) + 5) = uVar1 == *(uint *)(this + 0x430);
      uVar1 = uVar1 + 1;
      iVar2 = *(int *)(this + 0x468);
    } while (uVar1 < (uint)(*(int *)(this + 0x46c) - iVar2 >> 2));
  }
  return;
}


// public: void __thiscall UI_Menu::performPrev(void)

void __thiscall UI_Menu::performPrev(UI_Menu *this)

{
  *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + -1;
  changedMenu(this);
  updateButtonSelected(this);
                    // WARNING: Could not recover jumptable at 0x00571548. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// public: void __thiscall UI_Menu::performNext(void)

void __thiscall UI_Menu::performNext(UI_Menu *this)

{
  *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 1;
  changedMenu(this);
  updateButtonSelected(this);
                    // WARNING: Could not recover jumptable at 0x00571568. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// public: virtual bool __thiscall UI_Menu::keyDown(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall UI_Menu::keyDown(UI_Menu *this,KeyCode param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (g_gameLogic[5] != (GameLogic)0x0) {
    return false;
  }
  if ((((param_1 == 0x3b) || (param_1 == 0x1b)) || (param_1 == 0x29)) ||
     (((param_1 == 0x7f || (param_1 == 0xa4)) || ((param_1 == 0x23 || (param_1 == 10)))))) {
    piVar3 = *(int **)(this + 0x468);
    uVar4 = 0;
    iVar1 = piVar3[*(int *)(this + 0x430)];
    uVar5 = (uint)((int)*(int **)(this + 0x46c) + (3 - (int)piVar3)) >> 2;
    if (*(int **)(this + 0x46c) < piVar3) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      do {
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        uVar4 = uVar4 + 1;
        *(bool *)(iVar2 + 4) = iVar2 == iVar1;
      } while (uVar4 != uVar5);
    }
    (**(code **)(*(int *)this + 0x294))();
  }
  else if (((param_1 != 0x1d) && (param_1 != 0x2b)) &&
          ((param_1 != 0x4e &&
           ((((param_1 != 0x8e && (param_1 != 0x1c)) && (param_1 != 0x25)) &&
            ((param_1 != 0x54 && (param_1 != 0x92)))))))) {
    return false;
  }
  return true;
}


// public: virtual bool __thiscall UI_Menu::keyUp(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall UI_Menu::keyUp(UI_Menu *this,KeyCode param_1)

{
  int iVar1;
  bool bVar2;
  PresentationInterface *pPVar3;
  int iVar4;
  PresentationInterface *this_00;
  UI_Menu *this_01;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  if (g_gameLogic[5] != (GameLogic)0x0) {
    return false;
  }
  if ((((param_1 == 0x1d) || (param_1 == 0x2b)) || (param_1 == 0x4e)) || (param_1 == 0x8e)) {
    iVar4 = *(int *)(this + 0x430);
    if (iVar4 == -1) {
      *(undefined4 *)(this + 0x430) = *(undefined4 *)(this + 0x42c);
    }
    else {
      uVar6 = iVar4 + 1;
      iVar1 = *(int *)(this + 0x468);
      uVar7 = *(int *)(this + 0x46c) - iVar1 >> 2;
      if (uVar6 < uVar7) {
        if (((**(int **)(iVar1 + iVar4 * 4) < 0) || (-1 < **(int **)(iVar1 + uVar6 * 4))) ||
           (bVar2 = canNext(this), !bVar2)) {
          *(uint *)(this + 0x430) = uVar6;
        }
        else {
          performNext(this_01);
        }
      }
      else {
        *(uint *)(this + 0x430) = uVar7 - 1;
      }
    }
    updateButtonSelected(this);
    piVar5 = *(int **)(this + 0x468);
    uVar7 = 0;
    uVar6 = (uint)((int)*(int **)(this + 0x46c) + (3 - (int)piVar5)) >> 2;
    if (*(int **)(this + 0x46c) < piVar5) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        iVar4 = *piVar5;
        piVar5 = piVar5 + 1;
        uVar7 = uVar7 + 1;
        *(bool *)(iVar4 + 4) = iVar4 == 0;
      } while (uVar7 != uVar6);
    }
    goto LAB_005718b2;
  }
  if (((param_1 != 0x1c) && (param_1 != 0x25)) && ((param_1 != 0x54 && (param_1 != 0x92)))) {
    if ((((((param_1 != 0x3b) && (param_1 != 0x1b)) && (param_1 != 0x29)) &&
         ((param_1 != 0x7f && (param_1 != 0xa4)))) && (param_1 != 0x23)) && (param_1 != 10)) {
      pPVar3 = Singleton<>::getInstance();
      if (((int)param_1 < 0x7c) || (0x95 < (int)param_1)) {
        this_00 = pPVar3 + 0x2f0;
        if (pPVar3[0x2f8] == (PresentationInterface)0x0) {
          this_00 = pPVar3 + 0x2e8;
        }
        std::map<>::operator[]((map<> *)this_00,&param_1);
      }
      return false;
    }
    if (*(int *)(this + 0x430) == -1) {
      return true;
    }
    bVar2 = triggerButton(this,*(ButtonElement **)
                                (*(int *)(this + 0x468) + *(int *)(this + 0x430) * 4));
    if (bVar2) {
      *(undefined4 *)(this + 0x430) = 0;
    }
    updateButtonSelected(this);
    (**(code **)(*(int *)this + 0x294))();
    return true;
  }
  if (*(int *)(this + 0x430) == -1) {
    iVar4 = (*(int *)(this + 0x46c) - *(int *)(this + 0x468) >> 2) + -1;
LAB_0057177d:
    *(int *)(this + 0x430) = iVar4;
  }
  else {
    iVar4 = *(int *)(this + 0x430) + -1;
    if (-1 < iVar4) goto LAB_0057177d;
    if ((*(int *)(this + 0x434) != -1) && (0 < *(int *)(this + 0x42c))) {
      *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + -1;
      changedMenu(this);
      updateButtonSelected(this);
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  updateButtonSelected(this);
  piVar5 = *(int **)(this + 0x468);
  uVar7 = 0;
  uVar6 = (uint)((int)*(int **)(this + 0x46c) + (3 - (int)piVar5)) >> 2;
  if (*(int **)(this + 0x46c) < piVar5) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    do {
      iVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 + 1;
      *(bool *)(iVar4 + 4) = iVar4 == 0;
    } while (uVar7 != uVar6);
    (**(code **)(*(int *)this + 0x294))();
    return true;
  }
LAB_005718b2:
  (**(code **)(*(int *)this + 0x294))();
  return true;
}


// public: virtual bool __thiscall UI_Menu::containsPoint(class cocos2d::Vec2)

bool __thiscall UI_Menu::containsPoint(UI_Menu *this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  Rect *this_00;
  Rect local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005cac4b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_2;
  local_14 = param_3;
  local_8 = 1;
  uStack_7 = 0;
  this_00 = (Rect *)(**(code **)(*(int *)this + 0x1b4))
                              (local_28,___security_cookie ^ (uint)&stack0xfffffffc);
  _local_8 = CONCAT31(uStack_7,2);
  bVar1 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&local_18);
  cocos2d::Rect::~Rect(local_28);
  ExceptionList = local_10;
  return bVar1;
}
