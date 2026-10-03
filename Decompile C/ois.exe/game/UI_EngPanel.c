#include "../ois.exe.h"


// public: virtual void * __thiscall UI_EngPanel::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_EngPanel::_scalar_deleting_destructor_(UI_EngPanel *this,uint param_1)

{
  ~UI_EngPanel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x448);
  }
  return this;
}


// public: virtual __thiscall UI_EngPanel::~UI_EngPanel(void)

void __thiscall UI_EngPanel::~UI_EngPanel(UI_EngPanel *this)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9130;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  uVar7 = 0;
  iVar5 = *(int *)(this + 0x42c);
  if (*(int *)(this + 0x430) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar7 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(this + 0x42c) + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)(this + 0x42c);
    } while (uVar7 < (uint)(*(int *)(this + 0x430) - iVar5 >> 2));
  }
  *(int *)(this + 0x430) = iVar5;
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
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0056921a;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)(this + 0x438) = 0;
    *(undefined4 *)(this + 0x43c) = 0;
    *(undefined4 *)(this + 0x440) = 0;
  }
  pvVar2 = *(void **)(this + 0x42c);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)(this + 0x434) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
LAB_0056921a:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)(this + 0x42c) = 0;
    *(undefined4 *)(this + 0x430) = 0;
    *(undefined4 *)(this + 0x434) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_EngPanel::cleanupRender(void)

void __thiscall UI_EngPanel::cleanupRender(UI_EngPanel *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x42c);
  if (*(int *)(this + 0x430) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x42c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x42c);
    } while (uVar3 < (uint)(*(int *)(this + 0x430) - iVar2 >> 2));
  }
  *(int *)(this + 0x430) = iVar2;
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


// public: virtual bool __thiscall UI_EngPanel::keyUp(enum cocos2d::EventKeyboard::KeyCode)

bool __thiscall UI_EngPanel::keyUp(UI_EngPanel *this,KeyCode param_1)

{
  return false;
}


// public: virtual void __thiscall UI_EngPanel::render(void)

void __thiscall UI_EngPanel::render(UI_EngPanel *this)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  Ship *pSVar3;
  char cVar4;
  uint uVar5;
  HullDamageState HVar6;
  int iVar7;
  Scale9Sprite *pSVar8;
  _TexParams *p_Var9;
  void *pvVar10;
  uint uVar11;
  nothrow_t *pnVar12;
  int *piVar13;
  AnimationFrames *pAVar14;
  AnimationFrames *pAVar15;
  vector<> *pvVar16;
  UI_EngPanel *pUVar17;
  bool bVar18;
  basic_string<> abStack_fc [4];
  undefined4 uStack_f8;
  char *pcVar19;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  Ship *local_9c;
  vector<> *local_98;
  AnimationFrames *local_94;
  Ship *local_90;
  UI_EngPanel *local_8c;
  AnimationFrames *local_88;
  undefined4 local_84;
  word *local_80;
  AnimationFrames *local_7c;
  AnimationFrames *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca528;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = this;
  (**(code **)(*(int *)this + 0x290))();
  local_84 = *(AnimationFrames **)(*(int *)(g_gameData + 0xd0) + 0x254);
  local_a0 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  strUsingArgs((char *)local_74);
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff24,(basic_string<> *)local_74)
  ;
  local_80 = (word *)loadSprite();
  iVar1 = *(int *)this;
  (**(code **)(*(int *)local_80 + 0xb0))();
  (**(code **)(iVar1 + 0xac))();
  ppAVar2 = *(AnimationFrames ***)(this + 0x43c);
  local_98 = (vector<> *)(this + 0x438);
  if (*(AnimationFrames ***)(this + 0x440) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>(local_98,ppAVar2,(AnimationFrames **)&local_80);
  }
  else {
    *ppAVar2 = (AnimationFrames *)local_80;
    *(int *)(this + 0x43c) = *(int *)(this + 0x43c) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
  local_78 = (AnimationFrames *)0x0;
  do {
    pAVar14 = local_78;
    pAVar15 = (AnimationFrames *)0x0;
    local_90 = *(Ship **)(g_gameData + 0xd0);
    piVar13 = *(int **)(*(int *)(local_90 + 0x254) + 0x118);
    local_7c = (AnimationFrames *)
               ((*(int *)(*(int *)(local_90 + 0x254) + 0x11c) - (int)piVar13) / 0xc);
    pvVar16 = local_98;
    if (local_7c != (AnimationFrames *)0x0) {
      do {
        if ((AnimationFrames *)*piVar13 == local_78) {
          HVar6 = Ship::getDamageStateForHullSection(local_90,(HullLocation)local_78);
          pvVar16 = local_98;
          if (HVar6 != 5) {
            strUsingArgs((char *)local_5c);
            local_8 = CONCAT31(local_8._1_3_,1);
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xffffff1c,(basic_string<> *)local_5c);
            local_80 = (word *)loadSprite();
            pvVar16 = local_98;
            ppAVar2 = *(AnimationFrames ***)(local_98 + 4);
            local_7c = (AnimationFrames *)local_80;
            if (*(AnimationFrames ***)(local_98 + 8) == ppAVar2) {
              std::vector<>::_Emplace_reallocate<>(local_98,ppAVar2,(AnimationFrames **)&local_80);
            }
            else {
              *ppAVar2 = (AnimationFrames *)local_80;
              *(int *)(local_98 + 4) = *(int *)(local_98 + 4) + 4;
            }
            (**(code **)(*(int *)local_8c + 0x108))();
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_48) {
              pnVar12 = (nothrow_t *)(local_48 + 1);
              pvVar10 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar12) {
                pvVar10 = *(void **)((int)local_5c[0] + -4);
                pnVar12 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) goto LAB_00569c52;
              }
              operator_delete(pvVar10,pnVar12);
            }
          }
          break;
        }
        pAVar15 = pAVar15 + 1;
        piVar13 = piVar13 + 3;
      } while (pAVar15 < local_7c);
    }
    local_78 = pAVar14 + 1;
  } while ((int)local_78 < 5);
  pAVar14 = *(AnimationFrames **)(local_84 + 0x13c);
  local_94 = *(AnimationFrames **)(local_84 + 0x140);
  local_84 = pAVar14;
  if (pAVar14 != local_94) {
    do {
      uVar11 = 0;
      local_7c = *(AnimationFrames **)(local_a0 + 0x40);
      uVar5 = (int)local_7c - *(int *)(local_a0 + 0x3c) >> 2;
      if (uVar5 != 0) {
        local_80 = *(word **)(pAVar14 + 8);
        piVar13 = *(int **)(local_a0 + 0x3c);
        local_7c = local_7c + -*(int *)(local_a0 + 0x3c);
        do {
          pvVar16 = local_98;
          if (*(word **)(*piVar13 + 0x10) == local_80) {
            piVar13 = *(int **)(*(int *)(local_a0 + 0x3c) + uVar11 * 4);
            goto LAB_005694e4;
          }
          uVar11 = uVar11 + 1;
          piVar13 = piVar13 + 1;
        } while (uVar11 < uVar5);
      }
      piVar13 = (int *)0x0;
LAB_005694e4:
      local_84 = pAVar14;
      HVar6 = Ship::getDamageStateForHullSection
                        (*(Ship **)(g_gameData + 0xd0),*(HullLocation *)(pAVar14 + 0xc));
      if (HVar6 != 5) {
        local_7c = (AnimationFrames *)0x0;
        local_34 = 0xf00000000;
        local_44 = (void *)((uint)local_44 & 0xffffff00);
        local_8 = CONCAT31(local_8._1_3_,2);
        local_80 = (word *)strUsingArgs((char *)local_5c);
        if ((word *)&local_44 != local_80) {
          word::~word((word *)&local_44);
          local_44 = *(void **)local_80;
          uStack_40 = *(undefined4 *)(local_80 + 4);
          uStack_3c = *(undefined4 *)(local_80 + 8);
          uStack_38 = *(undefined4 *)(local_80 + 0xc);
          local_34 = *(undefined8 *)(local_80 + 0x10);
          *(undefined4 *)(local_80 + 0x10) = 0;
          *(undefined4 *)(local_80 + 0x14) = 0xf;
          *local_80 = (word)0x0;
        }
        if (0xf < local_48) {
          pnVar12 = (nothrow_t *)(local_48 + 1);
          pvVar10 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar10 = *(void **)((int)local_5c[0] + -4);
            pnVar12 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) goto LAB_00569c52;
          }
          operator_delete(pvVar10,pnVar12);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        if ((*(int *)(local_84 + 8) == -1) ||
           (*(int *)(local_84 + 8) != *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e4))) {
          if (piVar13 != (int *)0x0) {
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            local_8 = CONCAT31(local_8._1_3_,3);
            if (*(char *)((int)piVar13 + 99) == '\0') {
              uVar5 = 0xd;
              pcVar19 = "_Disconnected";
LAB_00569759:
              std::basic_string<>::assign((basic_string<> *)local_2c,pcVar19,uVar5);
            }
            else {
              cVar4 = (**(code **)(*piVar13 + 0x14))();
              if (cVar4 != '\0') {
                uVar5 = 10;
                pcVar19 = "_Destroyed";
                goto LAB_00569759;
              }
              cVar4 = (**(code **)(*piVar13 + 0x18))();
              if (cVar4 != '\0') {
                uVar5 = 8;
                pcVar19 = "_Damaged";
                goto LAB_00569759;
              }
            }
            strUsingArgs(&stack0xffffff1c);
            local_90 = (Ship *)loadSprite();
            local_8 = CONCAT31(local_8._1_3_,2);
            if (0xf < local_18) {
              pnVar12 = (nothrow_t *)(local_18 + 1);
              pvVar10 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar12) {
                pvVar10 = *(void **)((int)local_2c[0] + -4);
                pnVar12 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00569c52;
              }
              operator_delete(pvVar10,pnVar12);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            goto LAB_005697df;
          }
          strUsingArgs(&stack0xffffff1c);
          local_90 = (Ship *)loadSprite();
LAB_0056985f:
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff1c,"`2empty",7);
        }
        else {
          strUsingArgs(&stack0xffffff1c);
          local_90 = (Ship *)loadSprite();
LAB_005697df:
          if (piVar13 == (int *)0x0) goto LAB_0056985f;
          strUsingArgs(&stack0xffffff1c);
          local_7c = (AnimationFrames *)loadSprite();
          strUsingArgs(&stack0xffffff1c);
        }
        local_78 = (AnimationFrames *)UIText::create();
        pSVar3 = local_90;
        local_8._0_1_ = 4;
        (**(code **)(*(int *)local_90 + 0xa0))();
        local_8 = CONCAT31(local_8._1_3_,2);
        local_80 = (word *)(local_84 + 0x10);
        (**(code **)(*(int *)pSVar3 + 0x4c))();
        ppAVar2 = *(AnimationFrames ***)(pvVar16 + 4);
        local_9c = pSVar3;
        if (*(AnimationFrames ***)(pvVar16 + 8) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>(pvVar16,ppAVar2,(AnimationFrames **)&local_9c);
        }
        else {
          *ppAVar2 = (AnimationFrames *)pSVar3;
          *(int *)(pvVar16 + 4) = *(int *)(pvVar16 + 4) + 4;
        }
        (**(code **)(*(int *)local_8c + 0x108))();
        pAVar14 = local_78;
        if (local_78 != (AnimationFrames *)0x0) {
          local_8._0_1_ = 5;
          (**(code **)(*(int *)local_78 + 0xa0))();
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar1 = *(int *)pAVar14;
          iVar7 = (**(code **)(*(int *)local_90 + 0xb0))();
          local_9c = *(Ship **)(iVar7 + 4);
          local_88 = *(AnimationFrames **)(local_84 + 0x14);
          (**(code **)(*(int *)local_90 + 0xb0))();
          (**(code **)(iVar1 + 0x48))();
          pUVar17 = local_8c;
          ppAVar2 = *(AnimationFrames ***)(local_8c + 0x430);
          if (*(AnimationFrames ***)(local_8c + 0x434) == ppAVar2) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)(local_8c + 0x42c),ppAVar2,&local_78);
          }
          else {
            *ppAVar2 = local_78;
            *(int *)(local_8c + 0x430) = *(int *)(local_8c + 0x430) + 4;
          }
          (**(code **)(*(int *)pUVar17 + 0x108))();
        }
        pAVar14 = local_7c;
        if (local_7c != (AnimationFrames *)0x0) {
          local_a8 = 0x3f000000;
          local_a4 = 0x3f000000;
          local_8._0_1_ = 6;
          (**(code **)(*(int *)local_7c + 0xa0))();
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar1 = *(int *)pAVar14;
          iVar7 = (**(code **)(*(int *)local_90 + 0xb0))();
          local_88 = (AnimationFrames *)(*(float *)(iVar7 + 4) / 3.0);
          local_9c = *(Ship **)(local_84 + 0x14);
          (**(code **)(*(int *)local_90 + 0xb0))();
          (**(code **)(iVar1 + 0x48))();
          pAVar14 = local_7c;
          (**(code **)(*(int *)local_7c + 0x40))();
          ppAVar2 = *(AnimationFrames ***)(pvVar16 + 4);
          local_88 = pAVar14;
          if (*(AnimationFrames ***)(pvVar16 + 8) == ppAVar2) {
            std::vector<>::_Emplace_reallocate<>(pvVar16,ppAVar2,&local_88);
          }
          else {
            *ppAVar2 = pAVar14;
            *(int *)(pvVar16 + 4) = *(int *)(pvVar16 + 4) + 4;
          }
          (**(code **)(*(int *)local_8c + 0x108))();
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_34._4_4_) {
          pnVar12 = (nothrow_t *)(local_34._4_4_ + 1);
          pvVar10 = local_44;
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar10 = *(void **)((int)local_44 + -4);
            pnVar12 = (nothrow_t *)(local_34._4_4_ + 0x24);
            if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar10))) goto LAB_00569c52;
          }
          operator_delete(pvVar10,pnVar12);
        }
        local_34 = 0xf00000000;
        local_44 = (void *)((uint)local_44 & 0xffffff00);
      }
      pAVar14 = local_84 + 0x18;
      local_84 = pAVar14;
    } while (pAVar14 != local_94);
  }
  iVar1 = *(int *)(g_gameData + 0xd0);
  if ((*(int *)(iVar1 + 0xd4) == 3) && (*(int *)(iVar1 + 0xf8) == 2)) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
  }
  pUVar17 = local_8c;
  if ((bVar18) && (*(int *)(iVar1 + 0x178) != 0)) {
    iVar7 = *(int *)(*(int *)(iVar1 + 0x178) + 0x254);
    bVar18 = false;
    if (iVar7 != 0) {
      bVar18 = *(int *)(iVar7 + 0x158) == 1;
    }
    if (bVar18) {
      if ((*(float *)(*(int *)(iVar1 + 0x254) + 0x148) == 0.0) &&
         (*(float *)(*(int *)(iVar1 + 0x254) + 0x14c) == 0.0)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (!bVar18) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)local_2c,"ToolTip.png",0xb);
        local_8._0_1_ = 7;
        pSVar8 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
        local_8 = (uint)local_8._1_3_ << 8;
        local_78 = (AnimationFrames *)pSVar8;
        if (0xf < local_18) {
          pnVar12 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar12 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_00569c52:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar12);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        (**(code **)(*(int *)pSVar8 + 0x4c))();
        local_a8 = 0;
        local_a4 = 0;
        local_8._0_1_ = 8;
        (**(code **)(*(int *)pSVar8 + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        iVar1 = *(int *)pSVar8;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),'\0',0xbf,0xff);
        (**(code **)(iVar1 + 0x25c))();
        pAVar14 = local_78;
        local_94 = (AnimationFrames *)(**(code **)(*(int *)(local_78 + 0x278) + 0xc))();
        p_Var9 = this_0065d534;
        if (this_0065d534 == (_TexParams *)0x0) {
          p_Var9 = operator_new(0x10);
          this_0065d534 = p_Var9;
          *(undefined4 *)(p_Var9 + 4) = 0x2600;
          *(undefined4 *)p_Var9 = 0x2600;
          *(undefined4 *)(p_Var9 + 8) = 0x812f;
          *(undefined4 *)(p_Var9 + 0xc) = 0x812f;
        }
        cocos2d::Texture2D::setTexParameters((Texture2D *)local_94,p_Var9);
        iVar1 = *(int *)pAVar14;
        cocos2d::Size::Size((Size *)&local_a8,160.0,27.0);
        (**(code **)(iVar1 + 0xac))();
        ppAVar2 = *(AnimationFrames ***)(pvVar16 + 4);
        local_94 = local_78;
        if (*(AnimationFrames ***)(pvVar16 + 8) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>(pvVar16,ppAVar2,&local_94);
        }
        else {
          *ppAVar2 = local_78;
          *(int *)(pvVar16 + 4) = *(int *)(pvVar16 + 4) + 4;
        }
        pUVar17 = local_8c;
        (**(code **)(*(int *)local_8c + 0x108))();
        abStack_fc[0] = (basic_string<>)0x0;
        std::basic_string<>::assign
                  (abStack_fc,"`%Space Station cranes are available to move modules around.",0x3c);
        local_7c = (AnimationFrames *)UIText::create(0);
        iVar1 = *(int *)local_7c;
        (**(code **)(*(int *)local_78 + 0x74))();
        (**(code **)(*(int *)local_78 + 0x6c))();
        (**(code **)(iVar1 + 0x48))();
        ppAVar2 = *(AnimationFrames ***)(pUVar17 + 0x430);
        if (*(AnimationFrames ***)(pUVar17 + 0x434) == ppAVar2) {
          uStack_f8 = 0x569e47;
          std::vector<>::_Emplace_reallocate<>((vector<> *)(pUVar17 + 0x42c),ppAVar2,&local_7c);
          uStack_f8 = 0x569e56;
          (**(code **)(*(int *)pUVar17 + 0x108))();
        }
        else {
          *ppAVar2 = local_7c;
          *(int *)(pUVar17 + 0x430) = *(int *)(pUVar17 + 0x430) + 4;
          uStack_f8 = 0x569e3b;
          (**(code **)(*(int *)pUVar17 + 0x108))();
        }
      }
    }
  }
  **(undefined1 **)(pUVar17 + 0x288) = 1;
  *(int *)(pUVar17 + 0x428) = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e4);
  if (0xf < local_60) {
    pnVar12 = (nothrow_t *)(local_60 + 1);
    pvVar10 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)local_74[0] + -4);
      pnVar12 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_EngPanel::mouseUp(class cocos2d::Vec2)

void __thiscall UI_EngPanel::mouseUp(UI_EngPanel *this,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  SoundEngine *pSVar3;
  Ship *pSVar4;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *this_00;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  Sound SVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined *puVar9;
  
  puVar9 = &DAT_005c45e9;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  pvVar8 = ExceptionList;
  ExceptionList = &stack0xfffffff0;
  iVar2 = (**(code **)(*(int *)this + 0xb0))();
  param_3 = *(float *)(iVar2 + 4) - param_3;
  pSVar4 = *(Ship **)(g_gameData + 0xd0);
  iVar2 = *(int *)(*(int *)(pSVar4 + 0x254) + 0x13c);
  iVar6 = *(int *)(*(int *)(pSVar4 + 0x254) + 0x140);
  if (iVar2 != iVar6) {
    while( true ) {
      if ((((*(float *)(iVar2 + 0x10) <= param_2) &&
           (param_2 <=
            (float)(int)(&moduleSlotWidthLookup)[*(int *)(iVar2 + 4)] + *(float *)(iVar2 + 0x10)))
          && (*(float *)(iVar2 + 0x14) <= param_3)) &&
         (param_3 <=
          (float)(int)(&moduleSlotHeightLookup)[*(int *)(iVar2 + 4)] + *(float *)(iVar2 + 0x14)))
      break;
      iVar2 = iVar2 + 0x18;
      if (iVar2 == iVar6) {
        ExceptionList = pvVar8;
        return;
      }
    }
    iVar6 = -1;
    SVar5 = 8;
    pSVar3 = Singleton<>::getInstance();
    SoundEngine::playSound(pSVar3,pSVar4,SVar5,iVar6);
    if (g_gameLogic[0x71] == (GameLogic)0x0) {
      pSVar4 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar4 = *(Ship **)(g_gameData + 0xd0);
      }
      iVar6 = *(int *)(iVar2 + 8);
      if (*(int *)(pSVar4 + 0x1e4) == iVar6) {
        *(undefined4 *)(pSVar4 + 0x1e4) = 0xffffffff;
        iVar6 = -1;
      }
      else {
        *(int *)(pSVar4 + 0x1e4) = iVar6;
      }
      iVar7 = -1;
      if (iVar6 == -1) {
        SVar5 = 9;
      }
      else {
        SVar5 = 8;
      }
      pSVar3 = Singleton<>::getInstance();
      SoundEngine::playSound(pSVar3,pSVar4,SVar5,iVar7);
      debugPrint("DETAIL","Selected module slot %d",*(undefined4 *)(iVar2 + 8));
    }
    else {
      this_00 = extraout_ECX;
      if (Singleton<>::instance == (NetworkData *)0x0) {
        Singleton<>::instance = operator_new(1);
        this_00 = extraout_ECX_00;
      }
      NetworkData::sendShipCommand
                (this_00,0x7c,(double)((ulonglong)uVar1 << 0x20),
                 (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(puVar9,pvVar8));
    }
    (**(code **)(*(int *)this + 0x294))();
  }
  ExceptionList = pvVar8;
  return;
}


// public: virtual void __thiscall UI_EngPanel::mouseHoverUpdate(class cocos2d::Vec2)

void __thiscall UI_EngPanel::mouseHoverUpdate(UI_EngPanel *this,float param_2,float param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  ShipModule *pSVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint unaff_EDI;
  undefined *puVar9;
  char acStack_44 [16];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ca559;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = (**(code **)(*(int *)this + 0xb0))();
  param_3 = *(float *)(iVar5 + 4) - param_3;
  iVar5 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x254);
  puVar8 = *(undefined4 **)(iVar5 + 0x13c);
  while( true ) {
    if (puVar8 == *(undefined4 **)(iVar5 + 0x140)) {
      iVar5 = *(int *)(this + 0x278);
      puVar8 = (undefined4 *)(iVar5 + 0xfc);
      uStack_34 = 0x56a14e;
      bVar2 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
      if (!bVar2) {
        *(undefined4 *)(iVar5 + 0x10c) = 0;
        if (0xf < *(uint *)(iVar5 + 0x110)) {
          puVar8 = (undefined4 *)*puVar8;
        }
        *(undefined1 *)puVar8 = 0;
      }
      ExceptionList = local_10;
      return;
    }
    iVar1 = puVar8[1];
    if (((((float)puVar8[4] <= param_2) &&
         (param_2 <= (float)(int)(&moduleSlotWidthLookup)[iVar1] + (float)puVar8[4])) &&
        ((float)puVar8[5] <= param_3)) &&
       (param_3 <= (float)(int)(&moduleSlotHeightLookup)[iVar1] + (float)puVar8[5])) break;
    puVar8 = puVar8 + 6;
  }
  pSVar6 = SystemManager::getModule
                     (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),puVar8[2]);
  if (pSVar6 == (ShipModule *)0x0) {
    puVar9 = (undefined *)*puVar8;
    piVar7 = (int *)(&PTR_s_Computer_005e2cb8)[iVar1];
    pcVar4 = "%s slot %d";
  }
  else {
    cVar3 = (**(code **)(*(int *)pSVar6 + 0x14))();
    if (cVar3 == '\0') {
      puVar8 = (undefined4 *)(*(int *)(pSVar6 + 8) + 8);
      if (0xf < *(uint *)(*(int *)(pSVar6 + 8) + 0x1c)) {
        puVar8 = (undefined4 *)*puVar8;
      }
      cVar3 = (**(code **)(*(int *)pSVar6 + 0x18))();
      pcVar4 = " (damaged)";
      if (cVar3 == '\0') {
        pcVar4 = "";
      }
      strUsingArgs(acStack_44,"%s %s%s",puVar8,
                   (&PTR_s_Unknown_005e2d20)[*(int *)(*(int *)(pSVar6 + 8) + 4)],pcVar4);
      ScreenInterface::setToolTip(*(ScreenInterface **)(this + 0x278));
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)(pSVar6 + 8);
    piVar7 = (int *)(iVar5 + 8);
    if (0xf < *(uint *)(iVar5 + 0x1c)) {
      piVar7 = (int *)*piVar7;
    }
    puVar9 = (&PTR_s_Unknown_005e2d20)[*(int *)(iVar5 + 4)];
    pcVar4 = "%s %s (destroyed)";
  }
  strUsingArgs(acStack_44,pcVar4,piVar7,puVar9);
  ScreenInterface::setToolTip(*(ScreenInterface **)(this + 0x278));
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_EngPanel::specialDataCheckFunction(float)

void __thiscall UI_EngPanel::specialDataCheckFunction(UI_EngPanel *this,float param_1)

{
  if ((ShipData::currentlyBoardedShip != (Ship *)0x0) &&
     (*(int *)(this + 0x428) != *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e4))) {
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __thiscall UI_EngPanel::getDragLook(class cocos2d::Vec2)

basic_string<> * __thiscall
UI_EngPanel::getDragLook(UI_EngPanel *this,basic_string<> *param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  ShipModule *pSVar3;
  int iVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8e89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
      && (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)) {
    iVar2 = (**(code **)(*(int *)this + 0xb0))(___security_cookie ^ (uint)&stack0xfffffffc);
    param_4 = *(float *)(iVar2 + 4) - param_4;
    iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x254);
    for (iVar4 = *(int *)(iVar2 + 0x13c); iVar4 != *(int *)(iVar2 + 0x140); iVar4 = iVar4 + 0x18) {
      if (((*(float *)(iVar4 + 0x10) <= param_3) &&
          (iVar1 = *(int *)(iVar4 + 4),
          param_3 <= (float)(int)(&moduleSlotWidthLookup)[iVar1] + *(float *)(iVar4 + 0x10))) &&
         ((*(float *)(iVar4 + 0x14) <= param_4 &&
          (param_4 <= (float)(int)(&moduleSlotHeightLookup)[iVar1] + *(float *)(iVar4 + 0x14))))) {
        pSVar3 = SystemManager::getModule
                           (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                            *(int *)(iVar4 + 8));
        if (pSVar3 != (ShipModule *)0x0) {
          strUsingArgs((char *)param_2,"EngModule_%s.png",(&PTR_s_comp_005e2cc8)[iVar1]);
          ExceptionList = local_10;
          return param_2;
        }
        break;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (basic_string<>)0x0;
  std::basic_string<>::assign(param_2,"",0);
  ExceptionList = local_10;
  return param_2;
}


// public: virtual int __thiscall UI_EngPanel::getDragValue(class cocos2d::Vec2)

int __thiscall UI_EngPanel::getDragValue(UI_EngPanel *this,float param_2,float param_3)

{
  int iVar1;
  ShipModule *pSVar2;
  int iVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c45e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
      && (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)) {
    iVar1 = (**(code **)(*(int *)this + 0xb0))(___security_cookie ^ (uint)&stack0xfffffffc);
    param_3 = *(float *)(iVar1 + 4) - param_3;
    iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x254);
    iVar3 = *(int *)(iVar1 + 0x13c);
    while( true ) {
      if (iVar3 == *(int *)(iVar1 + 0x140)) {
        ExceptionList = local_10;
        return -1;
      }
      if (((*(float *)(iVar3 + 0x10) <= param_2) &&
          (param_2 <=
           (float)(int)(&moduleSlotWidthLookup)[*(int *)(iVar3 + 4)] + *(float *)(iVar3 + 0x10))) &&
         ((*(float *)(iVar3 + 0x14) <= param_3 &&
          (param_3 <=
           (float)(int)(&moduleSlotHeightLookup)[*(int *)(iVar3 + 4)] + *(float *)(iVar3 + 0x14)))))
      break;
      iVar3 = iVar3 + 0x18;
    }
    iVar1 = *(int *)(iVar3 + 8);
    pSVar2 = SystemManager::getModule(*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),iVar1)
    ;
    if (pSVar2 != (ShipModule *)0x0) {
      ExceptionList = local_10;
      return iVar1;
    }
  }
  ExceptionList = local_10;
  return -1;
}


// public: virtual void __thiscall UI_EngPanel::dragOnto(int,int,class cocos2d::Vec2)

void __thiscall
UI_EngPanel::dragOnto(UI_EngPanel *this,int param_1,int param_2,float param_4,float param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  SoundEngine *this_00;
  NetworkData *this_01;
  NetworkData *extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  Ship *pSVar4;
  bool bVar5;
  Sound SVar6;
  void *pvVar7;
  
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  pvVar7 = ExceptionList;
  if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
    pSVar4 = *(Ship **)(g_gameData + 0xd0);
    if ((*(int *)(pSVar4 + 0xd4) == 3) && (*(int *)(pSVar4 + 0xf8) == 2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && (*(int *)(pSVar4 + 0x178) != 0)) {
      iVar3 = *(int *)(*(int *)(pSVar4 + 0x178) + 0x254);
      bVar5 = false;
      if (iVar3 != 0) {
        bVar5 = *(int *)(iVar3 + 0x158) == 1;
      }
      if (bVar5) {
        puVar1 = &stack0xfffffff0;
        if (param_1 == 200) {
          ExceptionList = &stack0xfffffff0;
          iVar3 = (**(code **)(*(int *)this + 0xb0))();
          param_5 = *(float *)(iVar3 + 4) - param_5;
          pSVar4 = *(Ship **)(g_gameData + 0xd0);
          for (this_01 = *(NetworkData **)(*(int *)(pSVar4 + 0x254) + 0x13c); puVar1 = ExceptionList
              , this_01 != *(NetworkData **)(*(int *)(pSVar4 + 0x254) + 0x140);
              this_01 = this_01 + 0x18) {
            if ((((*(float *)(this_01 + 0x10) <= param_4) &&
                 (param_4 <=
                  (float)(int)(&moduleSlotWidthLookup)[*(int *)(this_01 + 4)] +
                  *(float *)(this_01 + 0x10))) && (*(float *)(this_01 + 0x14) <= param_5)) &&
               (param_5 <=
                (float)(int)(&moduleSlotHeightLookup)[*(int *)(this_01 + 4)] +
                *(float *)(this_01 + 0x14))) {
              if (*(int *)(this_01 + 8) != -1) {
                if (g_gameLogic[0x71] != (GameLogic)0x0) {
                  if (Singleton<>::instance == (NetworkData *)0x0) {
                    Singleton<>::instance = operator_new(1);
                    this_01 = extraout_ECX;
                  }
                  NetworkData::sendShipCommand
                            (this_01,0xce,(double)((ulonglong)uVar2 << 0x20),
                             (double)CONCAT44(unaff_ESI,unaff_EDI),
                             (double)CONCAT44(pvVar7,unaff_EBX));
                  (**(code **)(*(int *)this + 0x294))();
                  ExceptionList = pvVar7;
                  return;
                }
                if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
                  pSVar4 = ShipData::currentlyBoardedShip;
                }
                ShipInterface::doMoveModule(pSVar4,param_2,*(int *)(this_01 + 8),0);
                (**(code **)(*(int *)this + 0x294))();
                ExceptionList = pvVar7;
                return;
              }
              break;
            }
          }
        }
        ExceptionList = puVar1;
        iVar3 = -1;
        SVar6 = 10;
        this_00 = Singleton<>::getInstance();
        SoundEngine::playSound(this_00,pSVar4,SVar6,iVar3);
      }
    }
  }
  ExceptionList = pvVar7;
  return;
}
