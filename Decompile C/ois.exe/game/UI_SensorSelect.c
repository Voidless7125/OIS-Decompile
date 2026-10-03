#include "../ois.exe.h"


// public: virtual void * __thiscall UI_SensorSelect::`vector deleting destructor'(unsigned int)

void * __thiscall UI_SensorSelect::_vector_deleting_destructor_(UI_SensorSelect *this,uint param_1)

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
  std::vector<>::_Tidy((vector<> *)(this + 0x434));
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x440);
  }
  ExceptionList = local_10;
  return this;
}


// public: bool __thiscall UI_SensorSelect::renderDesiredText(void)

bool __thiscall UI_SensorSelect::renderDesiredText(UI_SensorSelect *this)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 ****ppppuVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  SensorData *pSVar12;
  SensorSelectionElement *pSVar13;
  uint unaff_EDI;
  uint uVar14;
  vector<> *pvVar15;
  void *local_98 [4];
  undefined4 local_88;
  uint local_84;
  UI_SensorSelect *local_80;
  int local_7c;
  SensorSelectionElement *local_78;
  SensorSelectionElement *local_74;
  uint local_70;
  SensorData *local_6c;
  SensorData *local_68;
  SensorSelectionElement local_62;
  undefined1 local_61;
  void *local_60 [5];
  uint local_4c;
  undefined4 ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  SensorSelectionElement local_30 [4];
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005cc2b6;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pSVar13 = (SensorSelectionElement *)0x0;
  local_61 = 0;
  local_7c = 0;
  local_78 = (SensorSelectionElement *)0x0;
  local_74 = (SensorSelectionElement *)0x0;
  local_8 = 0;
  uStack_7 = 0;
  *(undefined4 *)(this + 0x430) = 0xffffffff;
  uVar11 = *(uint *)(g_gameData + 0xd0);
  local_80 = this;
  local_70 = uVar11;
  local_14 = pcVar4;
  if (uVar11 == 0) {
    local_61 = 0;
  }
  else {
    uVar14 = 0;
    iVar7 = *(int *)(uVar11 + 0x214);
    if (*(int *)(uVar11 + 0x218) - iVar7 >> 2 != 0) {
      do {
        iVar1 = *(int *)(uVar11 + 0xfc);
        if (iVar1 == 1) {
          iVar1 = *(int *)(*(int *)(iVar7 + uVar14 * 4) + 0xd8);
          if ((iVar1 != 1) && (iVar1 != 2)) goto LAB_00587c90;
        }
        else if (iVar1 == 2) {
          iVar1 = *(int *)(*(int *)(iVar7 + uVar14 * 4) + 0xd8);
          if ((iVar1 != 0) && (iVar1 != 4)) {
LAB_00587c90:
            local_38 = 0;
            local_34 = 0xf;
            local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
            local_8 = 1;
            local_68 = *(SensorData **)(uVar11 + 0x194);
            local_6c = *(SensorData **)(iVar7 + uVar14 * 4);
            local_62 = (SensorSelectionElement)(local_68 == local_6c);
            puVar5 = (undefined4 *)SensorData::describe(local_6c,SUB41(local_60,0),'\x01');
            local_8 = 2;
            if (0xf < (uint)puVar5[5]) {
              puVar5 = (undefined4 *)*puVar5;
            }
            strUsingArgs((char *)local_98,"%s\n",puVar5);
            local_8 = 3;
            local_30[0] = local_62;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&local_2c,(basic_string<> *)local_98);
            local_8 = 2;
            if (0xf < local_84) {
              pnVar10 = (nothrow_t *)(local_84 + 1);
              pvVar9 = local_98[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_98[0] + -4);
                pnVar10 = (nothrow_t *)(local_84 + 0x24);
                uVar3 = local_8;
                if (0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar9))) goto LAB_00587ef6;
              }
              operator_delete(pvVar9,pnVar10);
            }
            local_88 = 0;
            local_84 = 0xf;
            local_98[0] = (void *)((uint)local_98[0] & 0xffffff00);
            local_8 = 4;
            if (local_74 == pSVar13) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)&local_7c,pSVar13,local_30);
              uVar11 = uStack_18;
            }
            else {
              *pSVar13 = local_30[0];
              *(undefined4 *)(pSVar13 + 0x14) = 0;
              *(undefined4 *)(pSVar13 + 0x18) = 0;
              *(void **)(pSVar13 + 4) = local_2c;
              *(undefined4 *)(pSVar13 + 8) = uStack_28;
              *(undefined4 *)(pSVar13 + 0xc) = uStack_24;
              *(undefined4 *)(pSVar13 + 0x10) = uStack_20;
              local_2c = (void *)((uint)local_2c & 0xffffff00);
              *(undefined4 *)(pSVar13 + 0x14) = local_1c;
              *(uint *)(pSVar13 + 0x18) = uStack_18;
              local_78 = pSVar13 + 0x1c;
              uVar11 = 0xf;
            }
            pSVar13 = local_78;
            local_8 = 2;
            if (0xf < uVar11) {
              pnVar10 = (nothrow_t *)(uVar11 + 1);
              pvVar9 = local_2c;
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c + -4);
                pnVar10 = (nothrow_t *)(uVar11 + 0x24);
                uVar3 = local_8;
                if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar9))) goto LAB_00587ef6;
              }
              operator_delete(pvVar9,pnVar10);
            }
            local_8 = 1;
            if (0xf < local_4c) {
              pnVar10 = (nothrow_t *)(local_4c + 1);
              pvVar9 = local_60[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_60[0] + -4);
                pnVar10 = (nothrow_t *)(local_4c + 0x24);
                uVar3 = local_8;
                if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar9))) goto LAB_00587ef6;
              }
              operator_delete(pvVar9,pnVar10);
            }
            uVar11 = local_70;
            if (local_68 == local_6c) {
              *(int *)(local_80 + 0x430) = ((int)pSVar13 - local_7c) / 0x1c + -1;
            }
          }
        }
        else if (iVar1 != 3) goto LAB_00587c90;
        uVar14 = uVar14 + 1;
        iVar7 = *(int *)(uVar11 + 0x214);
      } while (uVar14 < (uint)(*(int *)(uVar11 + 0x218) - iVar7 >> 2));
    }
    local_8 = 0;
    if ((*(int *)(uVar11 + 0xfc) == 3) || (*(int *)(uVar11 + 0xfc) == 0)) {
      iVar7 = *(int *)(uVar11 + 0x24);
      local_68 = (SensorData *)0x0;
      if (*(int *)(iVar7 + 0x88) - *(int *)(iVar7 + 0x84) >> 2 != 0) {
        do {
          pSVar12 = *(SensorData **)(*(int *)(iVar7 + 0x84) + (int)local_68 * 4);
          if ((*(int *)(pSVar12 + 0x30) == 0) &&
             (((iVar1 = *(int *)(pSVar12 + 0x54), iVar1 == 2 || (iVar1 == 0)) || (iVar1 == 1)))) {
            local_6c = *(SensorData **)(local_70 + 0x1ac);
            local_62 = (SensorSelectionElement)(pSVar12 == local_6c);
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_48,(basic_string<> *)(pSVar12 + 0x5c));
            local_8 = 5;
            iVar7 = *(int *)(pSVar12 + 0x54);
            if (iVar7 == 0) {
              uVar8 = 0x30;
            }
            else if (iVar7 == 2) {
              uVar8 = 0x37;
            }
            else {
              uVar8 = 0x30;
              if (iVar7 == 1) {
                uVar8 = 0x24;
              }
            }
            if (pSVar12 == local_6c) {
              uVar8 = 0x25;
            }
            ppppuVar6 = local_48;
            if (0xf < local_34) {
              ppppuVar6 = (undefined4 ****)local_48[0];
            }
            strUsingArgs((char *)local_98,"`%c%s\n",uVar8,ppppuVar6);
            local_8 = 6;
            local_30[0] = local_62;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&local_2c,(basic_string<> *)local_98);
            local_8 = 5;
            uVar3 = local_8;
            local_8 = 5;
            if (0xf < local_84) {
              pnVar10 = (nothrow_t *)(local_84 + 1);
              pvVar9 = local_98[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_98[0] + -4);
                pnVar10 = (nothrow_t *)(local_84 + 0x24);
                if (0x1f < (uint)((int)local_98[0] + (-4 - (int)pvVar9))) {
LAB_00587ef6:
                  local_8 = uVar3;
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar9,pnVar10);
            }
            local_88 = 0;
            local_84 = 0xf;
            local_98[0] = (void *)((uint)local_98[0] & 0xffffff00);
            local_8 = 7;
            if (local_74 == pSVar13) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)&local_7c,pSVar13,local_30);
              uVar11 = uStack_18;
            }
            else {
              *pSVar13 = local_30[0];
              *(undefined4 *)(pSVar13 + 0x14) = 0;
              *(undefined4 *)(pSVar13 + 0x18) = 0;
              *(void **)(pSVar13 + 4) = local_2c;
              *(undefined4 *)(pSVar13 + 8) = uStack_28;
              *(undefined4 *)(pSVar13 + 0xc) = uStack_24;
              *(undefined4 *)(pSVar13 + 0x10) = uStack_20;
              local_2c = (void *)((uint)local_2c & 0xffffff00);
              *(undefined4 *)(pSVar13 + 0x14) = local_1c;
              *(uint *)(pSVar13 + 0x18) = uStack_18;
              local_78 = pSVar13 + 0x1c;
              uVar11 = 0xf;
            }
            pSVar13 = local_78;
            local_8 = 5;
            if (0xf < uVar11) {
              pnVar10 = (nothrow_t *)(uVar11 + 1);
              pvVar9 = local_2c;
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c + -4);
                pnVar10 = (nothrow_t *)(uVar11 + 0x24);
                uVar3 = local_8;
                if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar9))) goto LAB_00587ef6;
              }
              operator_delete(pvVar9,pnVar10);
            }
            if (pSVar12 == local_6c) {
              *(int *)(local_80 + 0x430) = ((int)pSVar13 - local_7c) / 0x1c + -1;
            }
            local_8 = 0;
            if (0xf < local_34) {
              pnVar10 = (nothrow_t *)(local_34 + 1);
              ppppuVar6 = (undefined4 ****)local_48[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                ppppuVar6 = (undefined4 ****)local_48[0][-1];
                pnVar10 = (nothrow_t *)(local_34 + 0x24);
                uVar3 = local_8;
                if (0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar6))) goto LAB_00587ef6;
              }
              operator_delete(ppppuVar6,pnVar10);
            }
            iVar7 = *(int *)(local_70 + 0x24);
          }
          local_68 = local_68 + 1;
        } while (local_68 < (SensorData *)(*(int *)(iVar7 + 0x88) - *(int *)(iVar7 + 0x84) >> 2));
      }
    }
    pvVar15 = (vector<> *)(local_80 + 0x434);
    local_68 = (SensorData *)((*(int *)(local_80 + 0x438) - *(int *)pvVar15) / 0x1c);
    if ((SensorData *)(((int)pSVar13 - local_7c) / 0x1c) == local_68) {
      local_70 = 0;
      if (local_68 != (SensorData *)0x0) {
        local_6c = (SensorData *)(local_7c + 4);
        local_68 = (SensorData *)(local_7c - *(int *)pvVar15);
        iVar7 = *(int *)pvVar15 + 0x18;
        do {
          if (*(SensorData *)(iVar7 + -0x18) != local_6c[-4]) {
LAB_0058819b:
            pvVar15 = (vector<> *)(local_80 + 0x434);
            local_61 = 1;
            if (pvVar15 != (vector<> *)&local_7c) goto LAB_005881af;
            break;
          }
          pSVar12 = local_6c;
          if (0xf < *(uint *)((int)local_68 + iVar7)) {
            pSVar12 = *(SensorData **)local_6c;
          }
          bVar2 = std::_Traits_equal<>((char *)pSVar12,*(uint *)(local_6c + 0x10),pcVar4,unaff_EDI);
          if (!bVar2) goto LAB_0058819b;
          iVar7 = iVar7 + 0x1c;
          local_70 = local_70 + 1;
          local_6c = local_6c + 0x1c;
        } while (local_70 < (uint)((*(int *)(local_80 + 0x438) - *(int *)(local_80 + 0x434)) / 0x1c)
                );
      }
    }
    else {
      local_61 = 1;
      if (pvVar15 != (vector<> *)&local_7c) {
LAB_005881af:
        local_61 = 1;
        std::vector<>::_Assign_range<>(pvVar15,local_7c,pSVar13,local_68);
      }
    }
  }
  std::vector<>::_Tidy((vector<> *)&local_7c);
  ExceptionList = local_10;
  uVar3 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: virtual void __thiscall UI_SensorSelect::render(void)

void __thiscall UI_SensorSelect::render(UI_SensorSelect *this)

{
  basic_string<> *pbVar1;
  Scale9Sprite *pSVar2;
  char *pcVar3;
  UIText *pUVar4;
  char *pcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc30a;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  pbVar1 = (basic_string<> *)strUsingArgs((char *)local_44);
  local_8 = 0;
  pSVar2 = cocos2d::ui::Scale9Sprite::create(pbVar1);
  local_8 = 0xffffffff;
  *(Scale9Sprite **)(this + 0x428) = pSVar2;
  if (0xf < local_30) {
    pnVar7 = (nothrow_t *)(local_30 + 1);
    pvVar6 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_44[0] + -4);
      pnVar7 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
LAB_00588284:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  local_5c = 0;
  local_58 = (char *)0x0;
  local_8 = 1;
  (**(code **)(**(int **)(this + 0x428) + 0xa0))();
  local_8 = 0xffffffff;
  iVar8 = **(int **)(this + 0x428);
  cocos2d::Size::Size((Size *)&local_5c,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4))
  ;
  (**(code **)(iVar8 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 2;
  uVar9 = 1;
  uVar10 = uVar9;
  if (6 < *(int *)(this + 0x2a4) + -8) {
    do {
      uVar9 = uVar10 + 1;
      fVar11 = (float)(int)uVar10;
      uVar10 = uVar9;
    } while ((int)((float)(int)uVar9 * 7.0 + fVar11) <= *(int *)(this + 0x2a4) + -8);
  }
  local_4c = 0;
  uVar10 = (*(int *)(this + 0x438) - *(int *)(this + 0x434)) / 0x1c;
  local_50 = uVar10 - 1;
  iVar8 = (int)uVar9 / 2;
  if (uVar9 < uVar10) {
    local_50 = *(int *)(this + 0x430);
    if (local_50 < iVar8) {
      local_50 = uVar9 - 1;
      local_4c = 0;
    }
    else if (*(uint *)(this + 0x430) < uVar10 - iVar8) {
      local_4c = local_50 - iVar8;
      local_50 = iVar8 + local_50;
    }
    else {
      local_50 = uVar10 - 1;
      local_4c = uVar10 - uVar9;
    }
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    local_58 = " ";
    local_48 = 0;
    do {
      if ((local_4c <= (int)uVar9) && ((int)uVar9 <= local_50)) {
        pcVar3 = (char *)strUsingArgs((char *)local_44);
        local_8._0_1_ = 3;
        pcVar5 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar5 = *(char **)pcVar3;
        }
        std::basic_string<>::append((basic_string<> *)local_2c,pcVar5,*(uint *)(pcVar3 + 0x10));
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_30) {
          pnVar7 = (nothrow_t *)(local_30 + 1);
          pvVar6 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_44[0] + -4);
            pnVar7 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) goto LAB_00588284;
          }
          operator_delete(pvVar6,pnVar7);
        }
      }
      local_48 = local_48 + 0x1c;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((*(int *)(this + 0x438) - *(int *)(this + 0x434)) / 0x1c));
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff7c,(basic_string<> *)local_2c)
  ;
  pUVar4 = UIText::create(0);
  *(UIText **)(this + 0x42c) = pUVar4;
  local_54 = 0;
  local_50 = 0;
  local_8._0_1_ = 4;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(**(int **)(this + 0x42c) + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  **(undefined1 **)(this + 0x288) = 1;
  iVar8 = *(int *)this;
  (**(code **)(**(int **)(this + 0x428) + 0xb0))();
  (**(code **)(iVar8 + 0xac))();
  if (0xf < local_18) {
    pnVar7 = (nothrow_t *)(local_18 + 1);
    pvVar6 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      pnVar7 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_SensorSelect::specialDataCheckFunction(float)

void __thiscall UI_SensorSelect::specialDataCheckFunction(UI_SensorSelect *this,float param_1)

{
  bool bVar1;
  
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    bVar1 = renderDesiredText(this);
    if (bVar1) {
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  return;
}
