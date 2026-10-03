#include "../ois.exe.h"


// public: virtual void * __thiscall SectorEditor::`scalar deleting destructor'(unsigned int)

void * __thiscall SectorEditor::_scalar_deleting_destructor_(SectorEditor *this,uint param_1)

{
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x298);
  }
  return this;
}


// public: void __thiscall SectorEditor::disable(void)

void __thiscall SectorEditor::disable(SectorEditor *this)

{
  Director *pDVar1;
  
  this[0x285] = (SectorEditor)0x0;
  pDVar1 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::removeEventListener
            (*(EventDispatcher **)(pDVar1 + 0x58),*(EventListener **)(this + 0x294));
  *(undefined4 *)(this + 0x294) = 0;
  describeCurrentState(this);
  return;
}


// public: void __thiscall SectorEditor::linkNavPoint(class cocos2d::Vec2)

void __thiscall SectorEditor::linkNavPoint(SectorEditor *this,undefined4 param_2,undefined4 param_3)

{
  NavPoint *this_00;
  MetaGameAction **ppMVar1;
  uint uVar2;
  NavPoint *this_01;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  GameData *pGVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c4a39;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  this_01 = Sector::getNavPointNear
                      (*(Sector **)(*(int *)(g_gameData + 0xd0) + 0x24),param_2,param_3);
  pGVar6 = g_gameData;
  if (this_01 != (NavPoint *)0x0) {
    this_00 = *(NavPoint **)(*(int *)(g_gameData + 0xd0) + 0x2b0);
    if (*(int *)(this_01 + 4) == *(int *)(this_00 + 4)) {
      piVar3 = *(int **)(this_00 + 0x28);
      uVar4 = 0;
      uVar5 = *(int *)(this_00 + 0x2c) - (int)piVar3 >> 2;
      if (uVar5 != 0) {
        do {
          if (*piVar3 == *(int *)this_01) {
            NavPoint::removeAdjacentNavpoint(this_00,*(int *)this_01);
            NavPoint::removeAdjacentNavpoint(this_01,**(int **)(*(int *)(pGVar6 + 0xd0) + 0x2b0));
            uVar11 = *(undefined4 *)this_01;
            puVar10 = (&PTR_s_Nav_Mesh_005e1a10)[*(int *)(this_01 + 4)];
            uVar9 = **(undefined4 **)(*(int *)(pGVar6 + 0xd0) + 0x2b0);
            puVar8 = (&PTR_s_Nav_Mesh_005e1a10)
                     [(*(undefined4 **)(*(int *)(pGVar6 + 0xd0) + 0x2b0))[1]];
            pcVar7 = "Unlinked waypoint %s #%d to %s #%d";
            goto LAB_00525cd9;
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar1 = *(MetaGameAction ***)(this_00 + 0x2c);
      if (*(MetaGameAction ***)(this_00 + 0x30) == ppMVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this_00 + 0x28),ppMVar1,(MetaGameAction **)this_01);
        pGVar6 = g_gameData;
      }
      else {
        *ppMVar1 = *(MetaGameAction **)this_01;
        *(int *)(this_00 + 0x2c) = *(int *)(this_00 + 0x2c) + 4;
      }
      ppMVar1 = *(MetaGameAction ***)(this_01 + 0x2c);
      if (*(MetaGameAction ***)(this_01 + 0x30) == ppMVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this_01 + 0x28),ppMVar1,
                   *(MetaGameAction ***)(*(int *)(pGVar6 + 0xd0) + 0x2b0));
        pGVar6 = g_gameData;
      }
      else {
        *ppMVar1 = **(MetaGameAction ***)(*(int *)(pGVar6 + 0xd0) + 0x2b0);
        *(int *)(this_01 + 0x2c) = *(int *)(this_01 + 0x2c) + 4;
      }
      uVar11 = *(undefined4 *)this_01;
      puVar10 = (&PTR_s_Nav_Mesh_005e1a10)[*(int *)(this_01 + 4)];
      uVar9 = **(undefined4 **)(*(int *)(pGVar6 + 0xd0) + 0x2b0);
      puVar8 = (&PTR_s_Nav_Mesh_005e1a10)[(*(undefined4 **)(*(int *)(pGVar6 + 0xd0) + 0x2b0))[1]];
      pcVar7 = "Linked waypoint %s #%d to %s #%d";
LAB_00525cd9:
      debugPrint("DETAIL",pcVar7,puVar8,uVar9,puVar10,uVar11,uVar2);
      *(undefined4 *)(this + 0x27c) = 2;
      describeCurrentState(this);
    }
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall SectorEditor::addAsteroid(void)

void __thiscall SectorEditor::addAsteroid(SectorEditor *this)

{
  word *this_00;
  int iVar1;
  AnimationFrames **ppAVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameData *pGVar6;
  SectorEditor *this_01;
  StellarObject *pSVar7;
  word *pwVar8;
  undefined4 *puVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  nothrow_t *pnVar13;
  StellarObject *pSVar14;
  uint uVar15;
  undefined1 auStack_74 [16];
  StellarObject *local_64;
  SectorEditor *local_60;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  
  local_44 = ___security_cookie ^ (uint)auStack_74;
  local_60 = this;
  local_64 = operator_new(0xd0);
  pGVar6 = g_gameData;
  iVar10 = -1;
  uVar12 = 0;
  uVar15 = *(int *)(g_gameData + 0x34) - *(int *)(g_gameData + 0x30) >> 2;
  if (uVar15 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0x30) + uVar12 * 4) + 0x38);
      if (iVar10 < iVar1) {
        iVar10 = iVar1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar15);
  }
  pSVar7 = (StellarObject *)StellarObject::StellarObject(local_64,iVar10 + 1,3);
  *(undefined4 *)(pSVar7 + 0x18) = **(undefined4 **)(pGVar6 + 0xd8);
  *(undefined4 *)(pSVar7 + 0x1c) = *(undefined4 *)(pGVar6 + 0xd8);
  local_64 = pSVar7;
  pwVar8 = (word *)strUsingArgs((char *)local_5c,"obstacle%d");
  this_00 = (word *)(pSVar7 + 0x3c);
  if (this_00 != pwVar8) {
    word::~word(this_00);
    uVar3 = *(undefined4 *)(pwVar8 + 4);
    uVar4 = *(undefined4 *)(pwVar8 + 8);
    uVar5 = *(undefined4 *)(pwVar8 + 0xc);
    *(undefined4 *)this_00 = *(undefined4 *)pwVar8;
    *(undefined4 *)(pSVar7 + 0x40) = uVar3;
    *(undefined4 *)(pSVar7 + 0x44) = uVar4;
    *(undefined4 *)(pSVar7 + 0x48) = uVar5;
    *(undefined8 *)(pSVar7 + 0x4c) = *(undefined8 *)(pwVar8 + 0x10);
    *(undefined4 *)(pwVar8 + 0x10) = 0;
    *(undefined4 *)(pwVar8 + 0x14) = 0xf;
    *pwVar8 = (word)0x0;
  }
  if (0xf < local_48) {
    pnVar13 = (nothrow_t *)(local_48 + 1);
    pvVar11 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar11 = *(void **)((int)local_5c[0] + -4);
      pnVar13 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar13);
  }
  this_01 = local_60;
  *(double *)(pSVar7 + 0x20) = (double)*(float *)(local_60 + 0x288);
  *(double *)(pSVar7 + 0x28) = (double)*(float *)(local_60 + 0x28c);
  *(undefined4 *)(pSVar7 + 0xac) = 1;
  *(undefined4 *)(pSVar7 + 0xb0) = 0x32;
  Sector::addStellarObject(*(Sector **)(pSVar7 + 0x1c),pSVar7);
  pGVar6 = g_gameData;
  ppAVar2 = *(AnimationFrames ***)(g_gameData + 0x34);
  if (*(AnimationFrames ***)(g_gameData + 0x38) == ppAVar2) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(g_gameData + 0x30),ppAVar2,(AnimationFrames **)&local_64);
    pSVar7 = local_64;
  }
  else {
    *ppAVar2 = (AnimationFrames *)pSVar7;
    *(int *)(pGVar6 + 0x34) = *(int *)(pGVar6 + 0x34) + 4;
  }
  puVar9 = (undefined4 *)(*(int *)(pSVar7 + 0x1c) + 0x1c);
  if (0xf < *(uint *)(*(int *)(pSVar7 + 0x1c) + 0x30)) {
    puVar9 = (undefined4 *)*puVar9;
  }
  pSVar14 = pSVar7 + 0x3c;
  if (0xf < *(uint *)(pSVar7 + 0x50)) {
    pSVar14 = *(StellarObject **)pSVar14;
  }
  debugPrint("DETAIL","Added asteroid field \'%s\' (density %d) to system \'%s\' at %f, %f",pSVar14,
             *(undefined4 *)(pSVar7 + 0xb0),puVar9,(double)*(float *)(this_01 + 0x288),
             (double)*(float *)(this_01 + 0x28c));
  *(StellarObject **)(*(int *)(g_gameData + 0xd0) + 0x1a4) = pSVar7;
  describeCurrentState(this_01);
  __security_check_cookie(local_44 ^ (uint)auStack_74);
  return;
}


// public: void __thiscall SectorEditor::describeCurrentState(void)

void __thiscall SectorEditor::describeCurrentState(SectorEditor *this)

{
  int iVar1;
  int iVar2;
  basic_string<> *pbVar3;
  UIText *pUVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  
  local_8 = -1;
  puStack_c = &DAT_005c4d41;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (this[0x285] == (SectorEditor)0x0) {
    if (*(int **)(this + 0x290) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x290) + 0xb4))();
    }
    goto LAB_00526410;
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = 0;
  std::basic_string<>::assign
            ((basic_string<> *)local_44,
             "`7SECTOR EDIT MODE\n`$arrows `8[move map]\n`$left click `8[select object]\n`$space `8[add obstacle]\n`$n `8[add nav point]\n`$r `8[add spawn point]\n`$j `8[add jump point]"
             ,0xa5);
  iVar1 = *(int *)(this + 0x27c);
  if (iVar1 == 2) {
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x2b0) + 4) == 0) {
LAB_00525fcd:
      pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    }
    else {
      pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    }
LAB_00525fd9:
    std::basic_string<>::operator=((basic_string<> *)local_44,pbVar3);
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_00526014;
      }
      operator_delete(pvVar5,pnVar6);
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = *(int *)(g_gameData + 0xd0);
      if (*(int *)(iVar1 + 0x1a4) == 0) {
        if ((*(int *)(iVar1 + 0x19c) == 0) || (*(int *)(*(int *)(iVar1 + 0x19c) + 0x130) == 0)) {
          if (*(int *)(iVar1 + 0x2b0) == 0) {
            if (*(int *)(iVar1 + 0x2b4) == 0) goto LAB_00526318;
            pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
          }
          else {
            pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
          }
        }
        else {
          pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
        }
      }
      else {
        pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
      }
      goto LAB_00525fd9;
    }
    if (iVar1 == 3) {
      std::basic_string<>::assign
                ((basic_string<> *)local_44,"`8Click to toggle link with other nav point",0x2b);
    }
    else {
      iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4);
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x19c);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x130) == 0)) {
          if ((iVar1 == 4) || (iVar1 == 5)) goto LAB_00525fcd;
          if (iVar1 != 6) goto LAB_00526318;
          pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
        }
        else {
          pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
        }
        goto LAB_00525fd9;
      }
      if (*(int *)(iVar2 + 0x54) == 4) {
        uVar9 = *(undefined4 *)(iVar2 + 0xb0);
        uVar8 = *(undefined4 *)(iVar2 + 0xac);
        pcVar7 = 
        "`8nebula, variant %d, density %d%%\nrot %.0f x: %.02f y: %.02f\n`$wasd `8[move object]\n`$t `8[toggle type]\n`$i/o `8[rotate]"
        ;
LAB_0052615d:
        pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c,pcVar7,uVar8,uVar9);
      }
      else {
        if (*(int *)(iVar2 + 0x54) == 3) {
          uVar9 = *(undefined4 *)(iVar2 + 0xb0);
          uVar8 = *(undefined4 *)(iVar2 + 0xac);
          pcVar7 = 
          "`8asteroid field, variant %d, density %d%%\nrot %.0f x: %.02f y: %.02f\n`$wasd `8[move object]\nt `8[toggle type]\n`$i/o `8[rotate]"
          ;
          goto LAB_0052615d;
        }
        pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
      }
      std::basic_string<>::operator=((basic_string<> *)local_44,pbVar3);
      if (0xf < local_18) {
        pnVar6 = (nothrow_t *)(local_18 + 1);
        pvVar5 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)local_2c[0] + -4);
          pnVar6 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) goto LAB_00526014;
        }
        operator_delete(pvVar5,pnVar6);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4) + 0x54);
      if ((iVar1 == 3) || (iVar1 == 4)) {
        std::basic_string<>::append
                  ((basic_string<> *)local_44,
                   "`$+/- `8[change density]\n`$v `8[change variant]\n`$1/2\n`8[alter density]\n`$2/3 `8[alter cat.]"
                   ,0x5c);
      }
    }
  }
LAB_00526318:
  if (*(int *)(this + 0x290) == 0) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff8c,(basic_string<> *)local_44);
    pUVar4 = UIText::create();
    *(UIText **)(this + 0x290) = pUVar4;
    local_8._0_1_ = 1;
    (**(code **)(*(int *)pUVar4 + 0xa0))();
    local_8 = (uint)local_8._1_3_ << 8;
    iVar1 = **(int **)(this + 0x290);
    (**(code **)(**(int **)(this + 0x278) + 0xb0))();
    (**(code **)(iVar1 + 0x48))();
    (**(code **)(**(int **)(this + 0x278) + 0x10c))();
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff8c,(basic_string<> *)local_44)
  ;
  UIText::setText(*(UIText **)(this + 0x290),1,0);
  if (0xf < local_30) {
    pnVar6 = (nothrow_t *)(local_30 + 1);
    pvVar5 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_44[0] + -4);
      pnVar6 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
LAB_00526014:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
LAB_00526410:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
