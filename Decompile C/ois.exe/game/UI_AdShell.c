#include "../ois.exe.h"


// public: virtual void * __thiscall UI_AdShell::`vector deleting destructor'(unsigned int)

void * __thiscall UI_AdShell::_vector_deleting_destructor_(UI_AdShell *this,uint param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  nothrow_t *pnVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1,uVar3);
    *(undefined4 *)(this + 0x444) = 0;
  }
  uVar3 = 0;
  iVar5 = *(int *)(this + 0x438);
  if (*(int *)(this + 0x43c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(this + 0x438);
    } while (uVar3 < (uint)(*(int *)(this + 0x43c) - iVar5 >> 2));
  }
  *(int *)(this + 0x43c) = iVar5;
  pvVar2 = *(void **)(this + 0x438);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)(this + 0x440) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)(this + 0x438) = 0;
    *(undefined4 *)(this + 0x43c) = 0;
    *(undefined4 *)(this + 0x440) = 0;
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


// public: virtual void __thiscall UI_AdShell::cleanupRender(void)

void __thiscall UI_AdShell::cleanupRender(UI_AdShell *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
    *(undefined4 *)(this + 0x444) = 0;
  }
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x438);
  if (*(int *)(this + 0x43c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x438);
    } while (uVar3 < (uint)(*(int *)(this + 0x43c) - iVar2 >> 2));
  }
  *(int *)(this + 0x43c) = iVar2;
  return;
}


// public: virtual void __thiscall UI_AdShell::render(void)

void __thiscall UI_AdShell::render(UI_AdShell *this)

{
  Sprite *pSVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_28;
  
  if (*(int *)(this + 0x434) != 0) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&uStack_28,(basic_string<> *)(*(int *)(this + 0x434) + 4));
    pSVar1 = loadSprite();
    *(Sprite **)(this + 0x444) = pSVar1;
    iVar2 = rand();
    if (iVar2 % 6 == 0) {
      (**(code **)(**(int **)(this + 0x444) + 0x244))();
    }
    else {
      (**(code **)(**(int **)(this + 0x444) + 0x244))();
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      *(undefined4 *)(this + 0x430) = 2;
      *(float *)(this + 0x42c) = (float)(int)(uVar3 + 5);
    }
    (**(code **)(*(int *)this + 0x10c))();
    uStack_28 = 0x56469f;
    debugPrint("DETAIL","Displying ad: %s");
    **(undefined1 **)(this + 0x288) = 1;
  }
  return;
}


// public: virtual void __thiscall UI_AdShell::specialDataCheckFunction(float)

void __thiscall UI_AdShell::specialDataCheckFunction(UI_AdShell *this,float param_1)

{
  GameData *pGVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 *puVar9;
  
  pGVar1 = g_gameData;
  iVar3 = *(int *)(this + 0x430);
  if (iVar3 == 0) {
    iVar3 = *(int *)(this + 0x428);
    puVar4 = *(undefined4 **)(g_gameData + 0x90);
    iVar2 = *(int *)(g_gameData + 0x94) - (int)puVar4 >> 2;
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else if (iVar2 == 1) {
      piVar5 = (int *)*puVar4;
    }
    else {
      piVar5 = (int *)0x0;
      iVar2 = 0;
      do {
        if (99 < iVar2) break;
        iVar6 = 0;
        iVar7 = *(int *)(pGVar1 + 0x94) - (int)puVar4 >> 2;
        if (0 < iVar7) {
          iVar6 = rand();
          puVar4 = *(undefined4 **)(pGVar1 + 0x90);
          iVar6 = iVar6 % iVar7 + 1;
        }
        piVar5 = (int *)0x0;
        if (*(int *)puVar4[iVar6 + -1] != iVar3) {
          piVar5 = (int *)puVar4[iVar6 + -1];
        }
        iVar2 = iVar2 + 1;
      } while (piVar5 == (int *)0x0);
    }
    *(int **)(this + 0x434) = piVar5;
    *(int *)(this + 0x428) = *piVar5;
    (**(code **)(*(int *)this + 0x294))();
    iVar3 = 1;
    puVar9 = (undefined1 *)0x40400000;
    *(undefined4 *)(this + 0x42c) = 0x40400000;
    *(undefined4 *)(this + 0x430) = 1;
  }
  else {
    puVar9 = *(undefined1 **)(this + 0x42c);
    if ((float)puVar9 <= -1.0) goto LAB_005647d0;
  }
  puVar9 = (undefined1 *)((float)puVar9 - param_1);
  *(undefined1 **)(this + 0x42c) = puVar9;
  if ((float)puVar9 <= 0.0) {
    *(undefined1 **)(this + 0x42c) = &DAT_bf800000;
    puVar9 = &DAT_bf800000;
  }
LAB_005647d0:
  if (iVar3 == 1) {
    piVar5 = *(int **)(this + 0x444);
    if ((float)puVar9 <= 0.0) {
      *(undefined4 *)(this + 0x430) = 2;
      *(undefined4 *)(this + 0x42c) = 0x41000000;
      (**(code **)(*piVar5 + 0x244))(0xff);
      **(undefined1 **)(this + 0x288) = 1;
      return;
    }
    fVar8 = 1.0 - (float)puVar9 / 3.0;
  }
  else {
    if (iVar3 == 2) {
      if (0.0 < (float)puVar9) {
        return;
      }
      *(undefined4 *)(this + 0x430) = 3;
      *(undefined4 *)(this + 0x42c) = 0x40400000;
      return;
    }
    if (iVar3 != 3) {
      return;
    }
    piVar5 = *(int **)(this + 0x444);
    if ((float)puVar9 <= 0.0) {
      *(undefined4 *)(this + 0x430) = 0;
      *(undefined1 **)(this + 0x42c) = &DAT_bf800000;
      (**(code **)(*piVar5 + 0x244))(0);
      return;
    }
    fVar8 = (float)puVar9 / 3.0;
  }
  (**(code **)(*piVar5 + 0x244))((int)(fVar8 * 255.0) & 0xff);
  **(undefined1 **)(this + 0x288) = 1;
  return;
}
