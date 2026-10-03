#include "../ois.exe.h"


// public: virtual void * __thiscall UI_WeaponTubes::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_WeaponTubes::_scalar_deleting_destructor_(UI_WeaponTubes *this,uint param_1)

{
  ~UI_WeaponTubes(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x440);
  }
  return this;
}


// public: virtual __thiscall UI_WeaponTubes::~UI_WeaponTubes(void)

void __thiscall UI_WeaponTubes::~UI_WeaponTubes(UI_WeaponTubes *this)

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
  iVar5 = *(int *)(this + 0x428);
  if (*(int *)(this + 0x42c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar7 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)(this + 0x428) + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)(this + 0x428);
    } while (uVar7 < (uint)(*(int *)(this + 0x42c) - iVar5 >> 2));
  }
  *(int *)(this + 0x42c) = iVar5;
  uVar3 = 0;
  iVar5 = *(int *)(this + 0x434);
  if (*(int *)(this + 0x438) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x434) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(this + 0x434);
    } while (uVar3 < (uint)(*(int *)(this + 0x438) - iVar5 >> 2));
  }
  *(int *)(this + 0x438) = iVar5;
  pvVar2 = *(void **)(this + 0x434);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)(this + 0x43c) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0058fbea;
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
LAB_0058fbea:
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


// public: virtual void __thiscall UI_WeaponTubes::cleanupRender(void)

void __thiscall UI_WeaponTubes::cleanupRender(UI_WeaponTubes *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
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
  return;
}


// public: virtual void __thiscall UI_WeaponTubes::render(void)

void __thiscall UI_WeaponTubes::render(UI_WeaponTubes *this)

{
  vector<> *this_00;
  int *piVar1;
  AnimationFrames **ppAVar2;
  char cVar3;
  bool bVar4;
  Sprite *pSVar5;
  UIText *pUVar6;
  int iVar7;
  int iVar8;
  Color3B *pCVar9;
  UI_WeaponTubes *pUVar10;
  float10 fVar11;
  uint uStack_b4;
  AnimationFrames *pAStack_a8;
  AnimationFrames *pAStack_9c;
  basic_string<> bVar12;
  uchar uVar13;
  uchar uVar14;
  Sprite *local_40;
  int local_3c;
  Sprite *local_38;
  int local_34;
  AnimationFrames *local_30;
  int local_2c;
  UI_WeaponTubes *local_28;
  Color3B local_22 [3];
  Color3B local_1f [3];
  Color3B local_1c [3];
  Color3B local_19 [3];
  Color3B local_16 [3];
  Color3B local_13 [3];
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc979;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = this;
  (**(code **)(*(int *)this + 0x290))();
  piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
  if (((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x10))(), cVar3 != '\0')) &&
     (cVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20) + 0x1c))
                        (), cVar3 != '\0')) {
    this_00 = (vector<> *)(this + 0x428);
    local_2c = 0xf;
    local_34 = 0;
    local_3c = 0x3c;
    pUVar10 = this;
    do {
      strUsingArgs(&stack0xffffff8c);
      pSVar5 = loadSprite();
      (**(code **)(*(int *)pSVar5 + 0x48))();
      (**(code **)(*(int *)pUVar10 + 0x10c))();
      ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
      if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
        local_38 = pSVar5;
        std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,(AnimationFrames **)&local_38);
      }
      else {
        *ppAVar2 = (AnimationFrames *)pSVar5;
        *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
      }
      iVar8 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
      local_38 = *(Sprite **)(local_3c + iVar8);
      if ((float)local_34 < *(float *)(*(int *)(iVar8 + 8) + 0x104)) {
        if ((local_38 == (Sprite *)0x0) ||
           (((iVar8 = *(int *)(*(int *)(local_38 + 0x44) + 0x70), iVar8 != 3 && (iVar8 != 5)) &&
            (iVar8 != 4)))) {
          strUsingArgs(&stack0xffffff8c);
          local_30 = (AnimationFrames *)loadSprite();
        }
        else {
          strUsingArgs(&stack0xffffff8c);
          local_30 = (AnimationFrames *)loadSprite();
        }
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*(int *)pUVar10 + 0x10c))();
        ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
        if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_30);
        }
        else {
          *ppAVar2 = local_30;
          *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
        }
        strUsingArgs(&stack0xffffff80);
        pUVar6 = UIText::create();
        local_8 = 0;
        local_30 = (AnimationFrames *)pUVar6;
        (**(code **)(*(int *)pUVar6 + 0xa0))();
        local_8 = 0xffffffff;
        (**(code **)(*(int *)pUVar6 + 0x48))();
        pUVar10 = local_28;
        (**(code **)(*(int *)local_28 + 0x10c))();
        ppAVar2 = *(AnimationFrames ***)(pUVar10 + 0x438);
        if (*(AnimationFrames ***)(pUVar10 + 0x43c) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)(pUVar10 + 0x434),ppAVar2,&local_30);
        }
        else {
          *ppAVar2 = local_30;
          *(int *)(pUVar10 + 0x438) = *(int *)(pUVar10 + 0x438) + 4;
        }
        pSVar5 = local_38;
        if ((local_38 == (Sprite *)0x0) || (*(Ship *)(local_38 + 0x3bc) == (Ship)0x0)) {
          pAStack_9c = (AnimationFrames *)0x590050;
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffff70,"WeaponGlyphs_Power_False.png",0x1c);
          local_30 = (AnimationFrames *)loadSprite();
        }
        else {
          pAStack_9c = (AnimationFrames *)0x590022;
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffff70,"WeaponGlyphs_Power_True.png",0x1b);
          local_30 = (AnimationFrames *)loadSprite();
        }
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*(int *)local_28 + 0x10c))();
        ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
        if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_30);
        }
        else {
          *ppAVar2 = local_30;
          *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
        }
        if ((pSVar5 == (Sprite *)0x0) || (*(Ship *)(pSVar5 + 0x3fc) == (Ship)0x0)) {
          pAStack_9c = (AnimationFrames *)((uint)pAStack_9c._1_3_ << 8);
          pAStack_a8 = (AnimationFrames *)0x590106;
          std::basic_string<>::assign
                    ((basic_string<> *)&pAStack_9c,"WeaponGlyphs_Linked_False.png",0x1d);
          local_30 = (AnimationFrames *)loadSprite();
        }
        else {
          pAStack_9c = (AnimationFrames *)((uint)pAStack_9c._1_3_ << 8);
          pAStack_a8 = (AnimationFrames *)0x5900d8;
          std::basic_string<>::assign
                    ((basic_string<> *)&pAStack_9c,"WeaponGlyphs_Linked_True.png",0x1c);
          local_30 = (AnimationFrames *)loadSprite();
        }
        (**(code **)(*(int *)local_30 + 0x48))();
        (**(code **)(*(int *)local_28 + 0x10c))();
        ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
        if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
          pAStack_9c = (AnimationFrames *)0x590165;
          std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_30);
        }
        else {
          *ppAVar2 = local_30;
          *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
        }
        if ((pSVar5 == (Sprite *)0x0) || (*(Ship *)(pSVar5 + 0x3c5) == (Ship)0x0)) {
          pAStack_a8 = (AnimationFrames *)((uint)pAStack_a8._1_3_ << 8);
          uStack_b4 = 0x5901c2;
          std::basic_string<>::assign
                    ((basic_string<> *)&pAStack_a8,"WeaponGlyphs_Armed_False.png",0x1c);
          local_30 = (AnimationFrames *)loadSprite();
        }
        else {
          pAStack_a8 = (AnimationFrames *)((uint)pAStack_a8._1_3_ << 8);
          uStack_b4 = 0x590194;
          std::basic_string<>::assign
                    ((basic_string<> *)&pAStack_a8,"WeaponGlyphs_Armed_True.png",0x1b);
          local_30 = (AnimationFrames *)loadSprite();
        }
        pAStack_9c = (AnimationFrames *)0x5901ef;
        (**(code **)(*(int *)local_30 + 0x48))();
        pAStack_9c = local_30;
        (**(code **)(*(int *)local_28 + 0x10c))();
        ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
        if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
          pAStack_a8 = (AnimationFrames *)0x59021f;
          std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_30);
        }
        else {
          *ppAVar2 = local_30;
          *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
        }
        if (pSVar5 == (Sprite *)0x0) {
          uStack_b4 = (uint)uStack_b4._1_3_ << 8;
          std::basic_string<>::assign
                    ((basic_string<> *)&uStack_b4,"WeaponGlyphs_Detected_False.png",0x1f);
          local_30 = (AnimationFrames *)loadSprite();
        }
        else {
          iVar8 = *(int *)(pSVar5 + 0x38c);
          if (iVar8 == 0) {
LAB_00590295:
            uStack_b4 = (uint)uStack_b4._1_3_ << 8;
          }
          else {
            if (*(int *)(iVar8 + 0x30) == 0) {
              uStack_b4 = (uint)uStack_b4._1_3_ << 8;
LAB_0059024e:
              std::basic_string<>::assign
                        ((basic_string<> *)&uStack_b4,"WeaponGlyphs_Detected_True.png",0x1e);
              local_30 = (AnimationFrames *)loadSprite();
              goto LAB_005902ef;
            }
            if (*(int *)(iVar8 + 0x30) != 1) goto LAB_00590295;
            bVar4 = Ship::canCurrentlyDetect((Ship *)pSVar5,(Ship *)(iVar8 + -8));
            uStack_b4 = uStack_b4 & 0xffffff00;
            if (bVar4) goto LAB_0059024e;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)&uStack_b4,"WeaponGlyphs_Detected_False.png",0x1f);
          local_30 = (AnimationFrames *)loadSprite();
        }
LAB_005902ef:
        pAStack_a8 = (AnimationFrames *)0x590314;
        (**(code **)(*(int *)local_30 + 0x48))();
        pAStack_a8 = local_30;
        (**(code **)(*(int *)local_28 + 0x10c))();
        ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
        if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
          std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,&local_30);
        }
        else {
          *ppAVar2 = local_30;
          *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
        }
        pUVar10 = local_28;
        if (pSVar5 != (Sprite *)0x0) {
          iVar8 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
          iVar7 = ComponentInterfaceInstance::getEfficiencyPercent
                            (*(ComponentInterfaceInstance **)(iVar8 + 0xc));
          iVar8 = Weapon::getCurrentCalculatedPowerPercantage
                            ((Weapon *)local_38,
                             (int)(((float)iVar7 / 100.0) * 0.5 *
                                  *(float *)(*(int *)(*(int *)(*(int *)(iVar8 + 4) + 0x20) + 8) +
                                            0x108)));
          local_38 = (Sprite *)(float)iVar8;
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffff8c,"WeaponGlyphs_Battery.png",0x18);
          pSVar5 = loadSprite();
          local_30 = (AnimationFrames *)pSVar5;
          (**(code **)(*(int *)pSVar5 + 0x48))();
          (**(code **)(*(int *)local_28 + 0x10c))();
          ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
          local_40 = pSVar5;
          if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
            std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,(AnimationFrames **)&local_40);
          }
          else {
            *ppAVar2 = (AnimationFrames *)pSVar5;
            *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
          }
          if ((float)local_38 == 0.0) {
            (**(code **)(*(int *)pSVar5 + 0xb4))();
          }
          else {
            if (20.0 <= (float)local_38) {
              if (80.0 <= (float)local_38) {
                uVar14 = '^';
                uVar13 = 0xa1;
                bVar12 = (basic_string<>)0x58;
                pCVar9 = local_19;
              }
              else {
                uVar14 = '\0';
                uVar13 = 0xff;
                bVar12 = (basic_string<>)0xff;
                pCVar9 = local_16;
              }
            }
            else {
              uVar14 = '\0';
              uVar13 = '\0';
              bVar12 = (basic_string<>)0x80;
              pCVar9 = local_13;
            }
            iVar8 = *(int *)pSVar5;
            cocos2d::Color3B::Color3B(pCVar9,(uchar)bVar12,uVar13,uVar14);
            (**(code **)(iVar8 + 0x25c))();
          }
          std::basic_string<>::assign((basic_string<> *)&stack0xffffff7c,"white.png",9);
          pSVar5 = loadSprite();
          (**(code **)(*(int *)pSVar5 + 0x48))();
          (**(code **)(*(int *)pSVar5 + 0x24))();
          iVar8 = *(int *)pSVar5;
          fVar11 = (float10)(**(code **)(iVar8 + 0x74))();
          local_40 = (Sprite *)(float)fVar11;
          (**(code **)(iVar8 + 0x2c))();
          if (20.0 <= (float)local_38) {
            if (80.0 <= (float)local_38) {
              uVar14 = '^';
              bVar12 = (basic_string<>)0xa1;
              uVar13 = 'X';
              pCVar9 = local_22;
            }
            else {
              uVar14 = '\0';
              bVar12 = (basic_string<>)0xff;
              uVar13 = 0xff;
              pCVar9 = local_1f;
            }
          }
          else {
            uVar14 = '\0';
            bVar12 = (basic_string<>)0x0;
            uVar13 = 0x80;
            pCVar9 = local_1c;
          }
          iVar8 = *(int *)pSVar5;
          cocos2d::Color3B::Color3B(pCVar9,uVar13,(uchar)bVar12,uVar14);
          (**(code **)(iVar8 + 0x25c))();
          (**(code **)(*(int *)local_28 + 0x10c))();
          ppAVar2 = *(AnimationFrames ***)(this + 0x42c);
          local_40 = pSVar5;
          if (*(AnimationFrames ***)(this + 0x430) == ppAVar2) {
            std::vector<>::_Emplace_reallocate<>(this_00,ppAVar2,(AnimationFrames **)&local_40);
            pUVar10 = local_28;
          }
          else {
            *ppAVar2 = (AnimationFrames *)pSVar5;
            *(int *)(this + 0x42c) = *(int *)(this + 0x42c) + 4;
            pUVar10 = local_28;
          }
        }
      }
      local_34 = local_34 + 1;
      local_2c = local_2c + 0x1e;
      local_3c = local_3c + 4;
    } while (local_3c < 0x5c);
    **(undefined1 **)(pUVar10 + 0x288) = 1;
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_WeaponTubes::specialDataCheckFunction(float)

void __thiscall UI_WeaponTubes::specialDataCheckFunction(UI_WeaponTubes *this,float param_1)

{
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// public: virtual void __thiscall UI_WeaponTubes::mouseHoverUpdate(class cocos2d::Vec2)

void __thiscall UI_WeaponTubes::mouseHoverUpdate(UI_WeaponTubes *this,float param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  uint unaff_EDI;
  uint uVar8;
  basic_string<> abStack_3c [16];
  undefined4 uStack_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c9299;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((*(int *)(g_gameData + 0xd0) != 0) &&
       (iVar6 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40), iVar6 != 0)) &&
      (piVar1 = *(int **)(iVar6 + 0x20), piVar1 != (int *)0x0)) &&
     (cVar3 = (**(code **)(*piVar1 + 0x10))(), cVar3 != '\0')) {
    iVar6 = (int)(param_2 / 30.0);
    if ((iVar6 < 0) ||
       (iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20),
       *(float *)(*(int *)(iVar2 + 8) + 0x104) <= (float)iVar6)) {
      if ((float)iVar6 <
          *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20) + 8) +
                    0x104)) {
        ScreenInterface::clearToolTip(*(ScreenInterface **)(this + 0x278));
        ExceptionList = local_10;
        return;
      }
      uVar8 = 0xf;
      pcVar5 = "No torpedo tube";
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x3c + iVar6 * 4);
      if (iVar6 != 0) {
        std::basic_string<>::basic_string<>
                  (abStack_3c,(&PTR_s_Player_005e2f70)[*(int *)(*(int *)(iVar6 + 0x44) + 0x70)]);
        ScreenInterface::setToolTip(*(ScreenInterface **)(this + 0x278));
        ExceptionList = local_10;
        return;
      }
      uVar8 = 0x12;
      pcVar5 = "Empty torpedo tube";
    }
    uStack_2c = 0;
    abStack_3c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(abStack_3c,pcVar5,uVar8);
    ScreenInterface::setToolTip(*(ScreenInterface **)(this + 0x278));
    ExceptionList = local_10;
    return;
  }
  iVar6 = *(int *)(this + 0x278);
  puVar7 = (undefined4 *)(iVar6 + 0xfc);
  uStack_2c = 0x5907bd;
  bVar4 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
  if (!bVar4) {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar6 + 0x110)) {
      puVar7 = (undefined4 *)*puVar7;
    }
    *(undefined1 *)puVar7 = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall UI_WeaponTubes::mouseUp(class cocos2d::Vec2)

void __thiscall UI_WeaponTubes::mouseUp(undefined4 param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  NetworkData *this;
  undefined4 unaff_ESI;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined *puVar7;
  
  puVar7 = &DAT_005c91f9;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
  pvVar6 = ExceptionList;
  if (piVar1 != (int *)0x0) {
    uVar5 = 0;
    ExceptionList = &stack0xfffffff0;
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (((cVar2 != '\0') && (iVar4 = (int)(param_2 / 30.0), -1 < iVar4)) &&
       ((float)iVar4 <
        *(float *)(*(int *)(*(int *)(*(int *)(*(Ship **)(g_gameData + 0xd0) + 0x40) + 0x20) + 8) +
                  0x104))) {
      if (g_gameLogic[0x71] != (GameLogic)0x0) {
        Singleton<>::getInstance();
        NetworkData::sendShipCommand
                  (this,0x19,(double)((ulonglong)uVar5 << 0x20),(double)CONCAT44(unaff_ESI,uVar3),
                   (double)CONCAT44(puVar7,pvVar6));
        ExceptionList = pvVar6;
        return;
      }
      ShipInterface::doSelectTube(*(Ship **)(g_gameData + 0xd0),iVar4 + 1,0,0);
    }
  }
  ExceptionList = pvVar6;
  return;
}
