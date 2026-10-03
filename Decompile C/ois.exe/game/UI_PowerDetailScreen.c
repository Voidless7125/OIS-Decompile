#include "../ois.exe.h"


// public: virtual void * __thiscall UI_PowerDetailScreen::`vector deleting destructor'(unsigned
// int)

void * __thiscall
UI_PowerDetailScreen::_vector_deleting_destructor_(UI_PowerDetailScreen *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(UIRectangle **)(this + 0x444) != (UIRectangle *)0x0) {
    UIRectangle::cleanupAll(*(UIRectangle **)(this + 0x444));
    if (*(int **)(this + 0x444) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
      *(undefined4 *)(this + 0x444) = 0;
    }
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x440) = 0;
  }
  uVar2 = *(uint *)(this + 0x43c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x428);
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
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0xf;
  this[0x428] = (UI_PowerDetailScreen)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x448);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_PowerDetailScreen::cleanupRender(void)

void __thiscall UI_PowerDetailScreen::cleanupRender(UI_PowerDetailScreen *this)

{
  if (*(UIRectangle **)(this + 0x444) != (UIRectangle *)0x0) {
    UIRectangle::cleanupAll(*(UIRectangle **)(this + 0x444));
    if (*(int **)(this + 0x444) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
      *(undefined4 *)(this + 0x444) = 0;
    }
  }
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_PowerDetailScreen::render(void)

void __thiscall UI_PowerDetailScreen::render(UI_PowerDetailScreen *this)

{
  int iVar1;
  uint uVar2;
  UIRectangle *pUVar3;
  undefined3 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 extraout_var;
  Size local_24 [8];
  undefined4 local_1c;
  UIRectangle *local_18;
  Color3B local_13 [3];
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cb8ab;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pUVar3 = operator_new(0x290);
  local_8 = 0;
  local_18 = pUVar3;
  puVar4 = (undefined3 *)cocos2d::Color3B::Color3B(local_13,'X',0xa1,'^');
  piVar5 = (int *)UIRectangle::UIRectangle
                            (pUVar3,*(undefined4 *)(this + 0x2a0),*(undefined4 *)(this + 0x2a4),
                             CONCAT13(extraout_var,*puVar4));
  *(int **)(this + 0x444) = piVar5;
  local_1c = 0;
  local_18 = (UIRectangle *)0x0;
  local_8 = 1;
  (**(code **)(*piVar5 + 0xa0))(&local_1c,uVar2);
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(this + 0x444) + 0x48))(0,0);
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)(this + 0x444));
  updateRender(this);
  **(undefined1 **)(this + 0x288) = 1;
  iVar1 = *(int *)this;
  uVar6 = cocos2d::Size::Size(local_24,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4));
  (**(code **)(iVar1 + 0xac))(uVar6);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_PowerDetailScreen::specialDataCheckFunction(float)

void __thiscall
UI_PowerDetailScreen::specialDataCheckFunction(UI_PowerDetailScreen *this,float param_1)

{
  (**(code **)(*(int *)this + 0x290))();
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    updateText(this);
    updateRender(this);
  }
  return;
}


// public: void __thiscall UI_PowerDetailScreen::updateText(void)

void __thiscall UI_PowerDetailScreen::updateText(UI_PowerDetailScreen *this)

{
  uint uVar1;
  int iVar2;
  ShipModule *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  word *pwVar8;
  word *this_01;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  char *******pppppppcVar12;
  int *piVar13;
  char *pcVar14;
  ShipModule *pSVar15;
  void *pvVar16;
  nothrow_t *pnVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float local_78;
  undefined4 local_70;
  void *local_6c [5];
  uint local_58;
  char ******local_54 [4];
  uint local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005cb938;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar1 = *(uint *)(*(int *)(g_gameData + 0xd0) + 0x1e8);
  if ((uVar1 == 0xffffffff) ||
     (iVar11 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40), iVar2 = *(int *)(iVar11 + 0x3c),
     (uint)(*(int *)(iVar11 + 0x40) - iVar2 >> 2) <= uVar1)) {
    std::basic_string<>::assign((basic_string<> *)(this + 0x428),"",0);
    goto LAB_00580667;
  }
  this_00 = *(ShipModule **)(iVar2 + uVar1 * 4);
  iVar11 = *(int *)(this_00 + 8);
  piVar13 = (int *)(iVar11 + 8);
  if (0xf < *(uint *)(iVar11 + 0x1c)) {
    piVar13 = (int *)*piVar13;
  }
  puVar7 = (undefined4 *)(iVar11 + 0x38);
  if (0xf < *(uint *)(iVar11 + 0x4c)) {
    puVar7 = (undefined4 *)*puVar7;
  }
  puStack_20 = &stack0xfffffffc;
  pwVar8 = (word *)strUsingArgs((char *)local_3c,"`%%%s %s\n",puVar7,piVar13,local_24);
  this_01 = (word *)(this + 0x428);
  if (this_01 != pwVar8) {
    word::~word(this_01);
    uVar9 = *(undefined4 *)(pwVar8 + 4);
    uVar18 = *(undefined4 *)(pwVar8 + 8);
    uVar5 = *(undefined4 *)(pwVar8 + 0xc);
    *(undefined4 *)this_01 = *(undefined4 *)pwVar8;
    *(undefined4 *)(this + 0x42c) = uVar9;
    *(undefined4 *)(this + 0x430) = uVar18;
    *(undefined4 *)(this + 0x434) = uVar5;
    *(undefined8 *)(this + 0x438) = *(undefined8 *)(pwVar8 + 0x10);
    *(undefined4 *)(pwVar8 + 0x10) = 0;
    *(undefined4 *)(pwVar8 + 0x14) = 0xf;
    *pwVar8 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar17 = (nothrow_t *)(local_28 + 1);
    pvVar16 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar17) {
      pvVar16 = *(void **)((int)local_3c[0] + -4);
      pnVar17 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
LAB_0057fb22:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar16,pnVar17);
  }
  fVar19 = 0.0;
  fVar20 = *(float *)(*(int *)(this_00 + 8) + 200);
  if (0.0 < fVar20) {
    if (this_00[99] == (ShipModule)0x0) {
      fVar20 = 0.0;
      local_78 = 0.0;
      fVar22 = 0.0;
    }
    else {
      ShipModule::getCurrentGenerationRate(this_00);
      local_78 = fVar19;
      if (this_00[99] == (ShipModule)0x0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = fVar19;
        ShipModule::getCurrentGenerationRate(this_00);
      }
    }
    fVar19 = 0.0;
    uVar9 = 0x32;
    if (0.0 < fVar22) {
      uVar9 = 0x24;
    }
    pcVar10 = (char *)strUsingArgs((char *)local_3c,"`2Generating: `%c%.2f `2/ `$%.2f kW/s\n",uVar9,
                                   SUB84((double)local_78,0),
                                   (int)((ulonglong)(double)local_78 >> 0x20),
                                   SUB84((double)fVar20,0),(int)((ulonglong)(double)fVar20 >> 0x20))
    ;
    local_14 = 0;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
    }
  }
  ShipModule::getCurrentPowerDrain(this_00);
  if (0.0 < fVar19) {
    ShipModule::getCurrentPowerDrain(this_00);
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 1;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  }
  iVar11 = *(int *)(this_00 + 8);
  if (*(int *)(iVar11 + 4) == 0xd) {
    iVar11 = *(int *)(g_gameData + 0xd0);
    fVar20 = (float)*(double *)(iVar11 + 0x30);
    Sector::getSolarRadiationAt
              (*(Sector **)(iVar11 + 0x24),(float)*(double *)(iVar11 + 0x28),fVar20);
    if (fVar20 <= 0.8) {
      if (fVar20 <= 0.5) {
        uVar9 = 0x38;
        if (0.0 < fVar20) {
          uVar9 = 0x5e;
        }
      }
      else {
        uVar9 = 0x24;
      }
    }
    else {
      uVar9 = 0x30;
    }
    pcVar10 = (char *)strUsingArgs((char *)local_3c,"`2Solar Collection: `%c%.0f`2%%\n",uVar9,
                                   SUB84((double)(fVar20 * 100.0),0),
                                   (int)((ulonglong)(double)(fVar20 * 100.0) >> 0x20));
    local_14 = 2;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
    }
    iVar11 = *(int *)(this_00 + 8);
  }
  fVar20 = *(float *)(iVar11 + 0xc4);
  if (0.0 < fVar20) {
    ShipModule::actualMaxPowerStorage(this_00);
    uVar9 = 0x24;
    if (*(float *)(this_00 + 0x5c) == fVar20) {
      uVar9 = 0x25;
    }
    pcVar14 = "";
    if (fVar20 != *(float *)(*(int *)(this_00 + 8) + 0xc4)) {
      pcVar14 = " `@**dmg**";
    }
    uVar18 = 0x25;
    if (fVar20 != *(float *)(*(int *)(this_00 + 8) + 0xc4)) {
      uVar18 = 0x24;
    }
    pcVar10 = (char *)strUsingArgs((char *)local_3c,"`2Stored: `%c%.2f `2/ `%c%.2f kW%s\n",uVar9,
                                   (double)*(float *)(this_00 + 0x5c),uVar18,SUB84((double)fVar20,0)
                                   ,(int)((ulonglong)(double)fVar20 >> 0x20),pcVar14);
    local_14 = 3;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
    }
    iVar11 = *(int *)(this_00 + 8);
  }
  fVar20 = *(float *)(this_00 + 0x78);
  local_70 = *(undefined4 *)(iVar11 + 0xd0);
  if (0.0 < fVar20) {
    pcVar10 = (char *)strUsingArgs((char *)local_3c,"`2Emission: `$%.2fdBw`2 @ `!%d `2hz\n",
                                   SUB84((double)fVar20,0),(int)((ulonglong)(double)fVar20 >> 0x20),
                                   local_70);
    local_14 = 4;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
    }
  }
  std::basic_string<>::append((basic_string<> *)this_01,"\n",1);
  iVar11 = *(int *)(*(int *)(this_00 + 8) + 0xd4);
  if (iVar11 != 0) {
    iVar2 = *(int *)(*(int *)(this_00 + 8) + 0xcc);
    if (iVar2 == 0) {
      pcVar10 = (char *)strUsingArgs((char *)local_3c,"`7Poss. Em: %ddBw\n",iVar11);
      local_14 = 6;
      pcVar14 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar14 = *(char **)pcVar10;
      }
      std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar16 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar16 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_00580072;
      }
    }
    else {
      pcVar10 = (char *)strUsingArgs((char *)local_3c,"`7Poss. Em: Std %ddBw, HF %ddBw\n",iVar11,
                                     iVar2);
      local_14 = 5;
      pcVar14 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar14 = *(char **)pcVar10;
      }
      std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar16 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          pvVar16 = *(void **)((int)local_3c[0] + -4);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_00580072:
        local_14 = 0xffffffff;
        operator_delete(pvVar16,pnVar17);
      }
    }
  }
  iVar11 = *(int *)(this_00 + 8);
  if (*(float *)(iVar11 + 0xc0) == 0.0) {
    if (*(float *)(iVar11 + 0xbc) != 0.0) {
      dVar21 = (double)*(float *)(iVar11 + 0xbc);
      pcVar10 = (char *)strUsingArgs((char *)local_3c,"`7Max. Drain (when active): %.2fkW/s\n",
                                     SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20));
      local_14 = 9;
      pcVar14 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar14 = *(char **)pcVar10;
      }
      std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar16 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar16 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_00580218;
      }
    }
  }
  else if (*(float *)(iVar11 + 0xbc) == 0.0) {
    dVar21 = (double)*(float *)(iVar11 + 0xc0);
    pcVar10 = (char *)strUsingArgs((char *)local_3c,"`7Max. Drain: %.2fkW/s\n",SUB84(dVar21,0),
                                   (int)((ulonglong)dVar21 >> 0x20));
    local_14 = 8;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_00580218;
    }
  }
  else {
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 7;
    pcVar14 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar14 = *(char **)pcVar10;
    }
    std::basic_string<>::append((basic_string<> *)this_01,pcVar14,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_00580218:
      local_14 = 0xffffffff;
      operator_delete(pvVar16,pnVar17);
    }
  }
  if (*(int *)(*(int *)(this_00 + 8) + 4) == 8) {
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (char ******)((uint)local_54[0] & 0xffffff00);
    local_14 = 10;
    std::basic_string<>::append((basic_string<> *)local_54,"`7Tubes:     ",0xd);
    local_78 = 0.0;
    if (0.0 < *(float *)(*(int *)(this_00 + 8) + 0x104)) {
      pSVar15 = this_00 + 0x3c;
      do {
        iVar11 = *(int *)pSVar15;
        uVar18 = 0x20;
        uVar9 = 0x38;
        if (iVar11 != 0) {
          iVar2 = *(int *)(*(int *)(iVar11 + 0x44) + 0x70);
          if (iVar2 == 3) {
            uVar18 = 0x74;
          }
          else {
            uVar18 = 0x70;
            if (iVar2 == 5) {
              uVar18 = 0x6d;
            }
          }
          cVar6 = *(char *)(iVar11 + 0x3bc);
          if ((cVar6 == '\0') && (cVar6 = '\0', *(float *)(iVar11 + 0x3c0) != -1.0)) {
            uVar9 = 0x24;
          }
          else {
            uVar9 = 0x37;
            if (cVar6 != '\0') {
              uVar9 = 0x40;
            }
          }
        }
        pcVar10 = (char *)strUsingArgs((char *)local_3c,"`%%[`%c%c`%%]",uVar9,uVar18);
        local_14._0_1_ = 0xb;
        pcVar14 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar14 = *(char **)pcVar10;
        }
        std::basic_string<>::append((basic_string<> *)local_54,pcVar14,*(uint *)(pcVar10 + 0x10));
        local_14 = CONCAT31(local_14._1_3_,10);
        if (0xf < local_28) {
          pnVar17 = (nothrow_t *)(local_28 + 1);
          pvVar16 = local_3c[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar16 = *(void **)((int)local_3c[0] + -4);
            pnVar17 = (nothrow_t *)(local_28 + 0x24);
            if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) goto LAB_0057fb22;
          }
          operator_delete(pvVar16,pnVar17);
        }
        local_78 = (float)((int)local_78 + 1);
        pSVar15 = pSVar15 + 4;
      } while ((float)(int)local_78 < *(float *)(*(int *)(this_00 + 8) + 0x104));
    }
    std::basic_string<>::append((basic_string<> *)local_54,"\n",1);
    if (fVar20 == 0.0) {
      fVar19 = 0.0;
      if ((*(int *)(this_00 + 0x3c) != 0) &&
         (fVar22 = *(float *)(*(int *)(this_00 + 0x3c) + 0xdc), 0.0 < fVar22)) {
        fVar19 = fVar22;
      }
      iVar11 = *(int *)(this_00 + 0x40);
      if ((iVar11 != 0) && (fVar19 < *(float *)(iVar11 + 0xdc))) {
        fVar19 = *(float *)(iVar11 + 0xdc);
      }
      if ((*(int *)(this_00 + 0x44) != 0) &&
         (fVar22 = *(float *)(*(int *)(this_00 + 0x44) + 0xdc), fVar19 < fVar22)) {
        fVar19 = fVar22;
      }
      if ((*(int *)(this_00 + 0x48) != 0) &&
         (fVar22 = *(float *)(*(int *)(this_00 + 0x48) + 0xdc), fVar19 < fVar22)) {
        fVar19 = fVar22;
      }
      if ((*(int *)(this_00 + 0x4c) != 0) &&
         (fVar22 = *(float *)(*(int *)(this_00 + 0x4c) + 0xdc), fVar19 < fVar22)) {
        fVar19 = fVar22;
      }
      iVar2 = *(int *)(this_00 + 0x50);
      if ((iVar2 != 0) && (fVar19 < *(float *)(iVar2 + 0xdc))) {
        fVar19 = *(float *)(iVar2 + 0xdc);
      }
      iVar3 = *(int *)(this_00 + 0x54);
      if ((iVar3 != 0) && (fVar19 < *(float *)(iVar3 + 0xdc))) {
        fVar19 = *(float *)(iVar3 + 0xdc);
      }
      iVar4 = *(int *)(this_00 + 0x58);
      if ((iVar4 != 0) && (fVar19 < *(float *)(iVar4 + 0xdc))) {
        fVar19 = *(float *)(iVar4 + 0xdc);
      }
      if (fVar20 < fVar19) {
        local_70 = 0;
        if ((*(int *)(this_00 + 0x3c) != 0) &&
           (iVar11 = *(int *)(this_00 + 0x40), 0.0 < *(float *)(*(int *)(this_00 + 0x3c) + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(*(int *)(this_00 + 0x3c) + 0x254) + 0xc4);
          iVar11 = *(int *)(this_00 + 0x40);
        }
        if ((iVar11 != 0) && (0.0 < *(float *)(iVar11 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar11 + 0x254) + 0xc4);
        }
        iVar11 = *(int *)(this_00 + 0x44);
        if ((iVar11 != 0) && (0.0 < *(float *)(iVar11 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar11 + 0x254) + 0xc4);
        }
        iVar11 = *(int *)(this_00 + 0x48);
        if ((iVar11 != 0) && (0.0 < *(float *)(iVar11 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar11 + 0x254) + 0xc4);
        }
        iVar11 = *(int *)(this_00 + 0x4c);
        if ((iVar11 != 0) && (0.0 < *(float *)(iVar11 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar11 + 0x254) + 0xc4);
        }
        if ((iVar2 != 0) && (0.0 < *(float *)(iVar2 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar2 + 0x254) + 0xc4);
        }
        if ((iVar3 != 0) && (0.0 < *(float *)(iVar3 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar3 + 0x254) + 0xc4);
        }
        fVar20 = fVar19;
        if ((iVar4 != 0) && (0.0 < *(float *)(iVar4 + 0xdc))) {
          local_70 = *(undefined4 *)(*(int *)(iVar4 + 0x254) + 0xc4);
        }
      }
      if (fVar19 == 0.0) {
        std::basic_string<>::append((basic_string<> *)local_54,"`7Emissions: `8nil\n",0x13);
      }
      else {
        pcVar10 = (char *)strUsingArgs((char *)local_6c,"`7Emissions: `$%.2fdBw`2 @ `!%d `2hz\n",
                                       SUB84((double)fVar20,0),
                                       (int)((ulonglong)(double)fVar20 >> 0x20),local_70);
        local_14._0_1_ = 0xc;
        pcVar14 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar14 = *(char **)pcVar10;
        }
        std::basic_string<>::append((basic_string<> *)local_54,pcVar14,*(uint *)(pcVar10 + 0x10));
        local_14 = CONCAT31(local_14._1_3_,10);
        if (0xf < local_58) {
          pnVar17 = (nothrow_t *)(local_58 + 1);
          pvVar16 = local_6c[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar16 = *(void **)((int)local_6c[0] + -4);
            pnVar17 = (nothrow_t *)(local_58 + 0x24);
            if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar16,pnVar17);
        }
      }
    }
    pppppppcVar12 = local_54;
    if (0xf < local_40) {
      pppppppcVar12 = (char *******)local_54[0];
    }
    std::basic_string<>::append((basic_string<> *)this_01,(char *)pppppppcVar12,local_44);
    if (0xf < local_40) {
      pnVar17 = (nothrow_t *)(local_40 + 1);
      pppppppcVar12 = (char *******)local_54[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pppppppcVar12 = (char *******)local_54[0][-1];
        pnVar17 = (nothrow_t *)(local_40 + 0x24);
        if ((char *)0x1f < (char *)((int)local_54[0] + (-4 - (int)pppppppcVar12))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppppppcVar12,pnVar17);
    }
  }
LAB_00580667:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall UI_PowerDetailScreen::updateRender(void)

void __thiscall UI_PowerDetailScreen::updateRender(UI_PowerDetailScreen *this)

{
  int iVar1;
  bool bVar2;
  UIText *pUVar3;
  char *pcVar4;
  uint unaff_EDI;
  basic_string<> abStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cb969;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(this + 0x440);
  if (iVar1 == 0) {
    std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)(this + 0x428));
    pUVar3 = UIText::create(0);
    *(UIText **)(this + 0x440) = pUVar3;
    local_8 = 0;
    (**(code **)(*(int *)pUVar3 + 0xa0))();
    local_8 = 0xffffffff;
    uStack_38 = 0x40000000;
    uStack_3c = 0x580749;
    (**(code **)(**(int **)(this + 0x440) + 0x48))();
    uStack_3c = *(undefined4 *)(this + 0x440);
    uStack_40 = 0x580759;
    (**(code **)(*(int *)this + 0x10c))();
  }
  else {
    pcVar4 = (char *)(iVar1 + 0x2c0);
    if (0xf < *(uint *)(iVar1 + 0x2d4)) {
      pcVar4 = *(char **)(iVar1 + 0x2c0);
    }
    uStack_38 = 0x58078f;
    bVar2 = std::_Traits_equal<>
                      (pcVar4,*(uint *)(iVar1 + 0x2d0),
                       (char *)(___security_cookie ^ (uint)&stack0xfffffffc),unaff_EDI);
    if (bVar2) {
      ExceptionList = local_10;
      return;
    }
    std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)(this + 0x428));
    UIText::setText(*(UIText **)(this + 0x440),1,0);
  }
  **(undefined1 **)(this + 0x288) = 1;
  ExceptionList = local_10;
  return;
}
