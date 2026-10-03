// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: UI_ShipHullState * __thiscall UI_ShipHullState::UI_ShipHullState (UI_ShipHullState *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)
UI_ShipHullState::UI_ShipHullState(ScreenInterface * param_1, Widget * param_2, bool * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  float fVar2;
  HullDamageState HVar3;
  Ship *this_00;
  UI_ShipHullState *pUVar4;
  int iVar5;
  UI_ShipHullState *pUVar6;
  uint local_40;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc630;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar2 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  new ((void *)((ScreenElement *)this)) ScreenElement(param_1, param_2, param_3);
  // [seh] local_8 = 0;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined2 *)((char *)this + 0x428) = 0;
  local_40 = 0x58bf0b;
  _eh_vector_constructor_iterator_
            (this + 0x440,0x18,5,std::basic_string<>::std::string,word::~word);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  pUVar4 = this + 0x4b8;
  iVar5 = 5;
  do {
    cocos2d::Color3B::Color3B((Color3B *)pUVar4);
    pUVar4 = pUVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)((char *)this + 0x4e4) = 0;
  *(undefined4 *)((char *)this + 0x4e8) = 0;
  *(undefined4 *)((char *)this + 0x4ec) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x4f0) = 0;
  local_40 = local_40 & 0xffffff00;
  ghidra::str::assign((std::string *)&local_40,"ownedship",9);
  bVar1 = ((Widget *)((char *)this + 0x290))->getOptionAsBool();
  if (bVar1) {
    ((char *)this)[0x429] = (byte)0x1;
  }
  *(undefined4 *)((char *)this + 0x42c) = 0;
  pUVar4 = this + 0x4c8;
  *(undefined4 *)((char *)this + 0x430) = 0;
  pUVar6 = this + 0x4dc;
  *(undefined4 *)((char *)this + 0x434) = 0;
  *(undefined4 *)((char *)this + 0x438) = 0;
  *(undefined4 *)((char *)this + 0x43c) = 0;
  *(int *)pUVar4 = 0xff;
  *(undefined4 *)((char *)this + 0x4cc) = 0xff;
  *(undefined4 *)((char *)this + 0x4d0) = 0xff;
  *(undefined4 *)((char *)this + 0x4d4) = 0xff;
  *(undefined4 *)((char *)this + 0x4d8) = 0xff;
  *(undefined4 *)pUVar6 = 0;
  ((char *)this)[0x4e0] = (byte)0x0;
  checkState(this,fVar2);
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    this_00 = ShipData::currentlyBoardedShip;
    if (((char *)this)[0x429] != (byte)0x0) {
      this_00 = *(Ship **)(g_gameData + 0xd0);
    }
    if (this_00 != (Ship *)0x0) {
      do {
        HVar3 = Ship::getDamageStateForHullSection
                          (this_00,(HullLocation)(pUVar6 + (-0x4dc - (int)this)));
        if ((HVar3 == 0) || (HVar3 == 5)) {
          *(int *)pUVar4 = 0xff;
        }
        else if (*pUVar6 == (byte)0x0) {
          iVar5 = (int)((float)*(int *)pUVar4 - (float)(&HULL_DAMAGE_THROB_SPEED)[HVar3] * 0.0);
          *(int *)pUVar4 = iVar5;
          if (iVar5 < 0x41) {
            *(int *)pUVar4 = 0x40;
            *pUVar6 = (byte)0x1;
          }
        }
        else {
          iVar5 = (int)((float)(&HULL_DAMAGE_THROB_SPEED)[HVar3] * 0.0 + (float)*(int *)pUVar4);
          *(int *)pUVar4 = iVar5;
          if (0xfe < iVar5) {
            *(int *)pUVar4 = 0xff;
            *pUVar6 = (byte)0x0;
          }
        }
        pUVar6 = pUVar6 + 1;
        pUVar4 = pUVar4 + 4;
      } while ((int)(pUVar6 + (-0x4dc - (int)this)) < 5);
    }
    bVar1 = checkState(this,fVar2);
    if (bVar1) {
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_ShipHullState::cleanupRender(UI_ShipHullState *this)
void UI_ShipHullState::cleanupRender()

{
  UI_ShipHullState *pUVar1;
  int iVar2;
  
  if (*(int **)((char *)this + 0x4e4) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x4e4) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x4e4) = 0;
  }
  pUVar1 = this + 0x42c;
  iVar2 = 5;
  do {
    if (*(int **)pUVar1 != (int *)0x0) {
      (**(code **)(**(int **)pUVar1 + 0x138))(1);
      *(int *)pUVar1 = 0;
    }
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)((char *)this + 0x4f0) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x4f0) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x4f0) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_ShipHullState::render(UI_ShipHullState *this)
void UI_ShipHullState::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  Sprite *pSVar3;
  word *pwVar4;
  int iVar5;
  char ****ppppcVar6;
  UIText *pUVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  Ship *this_00;
  nothrow_t *pnVar11;
  int *piVar12;
  char ****ppppcVar13;
  uint unaff_EDI;
  uint uVar14;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *pcVar15;
  std::string *local_70;
  UI_ShipHullState *local_68;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char ***local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc669;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar2;
  (**(code **)(*(int *)this + 0x290))();
  this_00 = ShipData::currentlyBoardedShip;
  if (((char *)this)[0x429] != (byte)0x0) {
    this_00 = *(Ship **)(g_gameData + 0xd0);
  }
  if (this_00 == (Ship *)0x0) goto LAB_0058c726;
  local_60 = 0;
  local_68 = this + 0x42c;
  local_70 = (std::string *)((char *)this + 0x440);
  do {
    uVar14 = 0;
    piVar12 = *(int **)(*(int *)(this_00 + 0x254) + 0x118);
    iVar8 = *(int *)(*(int *)(this_00 + 0x254) + 0x11c) - (int)piVar12;
    iVar5 = iVar8 >> 0x1f;
    iVar8 = iVar8 / 0xc + iVar5;
    if (iVar8 != iVar5) {
      do {
        if (*piVar12 == local_60) {
          ghidra::str::ctor((std::string *)&uStack_a0,local_70);
          pSVar3 = loadSprite();
          *(Sprite **)local_68 = pSVar3;
          (**(code **)(*(int *)pSVar3 + 0x25c))();
          (**(code **)(**(int **)local_68 + 0x244))();
          uStack_9c = 0x58c4d4;
          (**(code **)(*(int *)this + 0x108))();
          iVar5 = *(int *)this;
          uStack_9c = 0x58c4e5;
          uStack_9c = (**(code **)(**(int **)local_68 + 0xb0))();
          uStack_a0 = 0x58c4ee;
          (**(code **)(iVar5 + 0xac))();
          break;
        }
        uVar14 = uVar14 + 1;
        piVar12 = piVar12 + 3;
      } while (uVar14 < (uint)(iVar8 - iVar5));
    }
    local_68 = local_68 + 4;
    local_60 = local_60 + 1;
    local_70 = local_70 + 0x18;
  } while (local_60 < 5);
  local_34 = 0xf00000000;
  local_44 = (char ***)((uint)local_44 & 0xffffff00);
  // [seh] local_8 = 0;
  if (*(int *)((char *)this + 0x4ec) == -1) {
    iVar5 = (this_00)->getHullDamagePercent();
    if (iVar5 < 4) {
      uVar14 = 9;
      pcVar15 = "`0nominal";
    }
    else if (iVar5 < 0x15) {
      uVar14 = 0xc;
      pcVar15 = "`3light dmg.";
    }
    else if (iVar5 < 0x33) {
      uVar14 = 0xb;
      pcVar15 = "`$med. dmg.";
    }
    else if (iVar5 < 0x4c) {
      uVar14 = 0xc;
      pcVar15 = "`^heavy dmg.";
    }
    else {
      uVar14 = 10;
      pcVar15 = "`@CRITICAL";
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_2c,pcVar15,uVar14);
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    pwVar4 = (word *)strUsingArgs((char *)local_5c);
    if ((word *)&local_44 != pwVar4) {
      // [mislabelled-dtor] word::~word((word *)&local_44);
      local_44 = *(char ****)pwVar4;
      uStack_40 = *(undefined4 *)(pwVar4 + 4);
      uStack_3c = *(undefined4 *)(pwVar4 + 8);
      uStack_38 = *(undefined4 *)(pwVar4 + 0xc);
      local_34 = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_48) {
      pnVar11 = (nothrow_t *)(local_48 + 1);
      pvVar10 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_5c[0] + -4);
        pnVar11 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    // [seh] local_8 = local_8 & 0xffffff00;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_0058c61c;
    }
  }
  else {
    puVar9 = (undefined4 *)(*(int *)(this_00 + 0x254) + 0x60);
    if (0xf < *(uint *)(*(int *)(this_00 + 0x254) + 0x74)) {
      puVar9 = (undefined4 *)*puVar9;
    }
    strUsingArgs((char *)&uStack_a0,"UI_Schematic_%s_selector_%s.png",puVar9,
                 (&PTR_s_bow_005e2f5c)[*(int *)((char *)this + 0x4ec)]);
    pSVar3 = loadSprite();
    *(Sprite **)((char *)this + 0x4e4) = pSVar3;
    iVar5 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_60 + 1),0xff,0xff,0xff);
    (**(code **)(iVar5 + 0x25c))();
    (**(code **)(*(int *)this + 0x108))();
    (this_00)->getDamageStateForHullSection(*(HullLocation *)((char *)this + 0x4ec));
    uStack_9c = 0x58c41c;
    pwVar4 = (word *)strUsingArgs((char *)local_5c);
    if ((word *)&local_44 != pwVar4) {
      // [mislabelled-dtor] word::~word((word *)&local_44);
      local_44 = *(char ****)pwVar4;
      uStack_40 = *(undefined4 *)(pwVar4 + 4);
      uStack_3c = *(undefined4 *)(pwVar4 + 8);
      uStack_38 = *(undefined4 *)(pwVar4 + 0xc);
      local_34 = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_48) {
      pnVar11 = (nothrow_t *)(local_48 + 1);
      pvVar10 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_5c[0] + -4);
        pnVar11 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_0058c61c:
      operator_delete(pvVar10,pnVar11);
    }
  }
  ppppcVar13 = (char ****)local_44;
  if (*(int *)((char *)this + 0x4f0) == 0) {
LAB_0058c66c:
    ghidra::str::ctor((std::string *)&uStack_a0,(std::string *)&local_44);
    pUVar7 = UIText::create();
    *(UIText **)((char *)this + 0x4f0) = pUVar7;
    // [seh] local_8._0_1_ = 2;
    (**(code **)(*(int *)pUVar7 + 0xa0))();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)((char *)this + 0x4f0) + 0x48))();
    uStack_9c = *(undefined4 *)((char *)this + 0x4f0);
    uStack_a0 = 0x58c6e5;
    (**(code **)(*(int *)this + 0x108))();
    ppppcVar13 = (char ****)local_44;
  }
  else {
    ppppcVar6 = &local_44;
    if (0xf < local_34._4_4_) {
      ppppcVar6 = (char ****)local_44;
    }
    bVar1 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar6,(uint)local_34,pcVar2,unaff_EDI);
    if (!bVar1) goto LAB_0058c66c;
  }
  **(undefined1 **)((char *)this + 0x288) = 1;
  if (0xf < local_34._4_4_) {
    pnVar11 = (nothrow_t *)(local_34._4_4_ + 1);
    ppppcVar6 = ppppcVar13;
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppcVar6 = (char ****)ppppcVar13[-1];
      pnVar11 = (nothrow_t *)(local_34._4_4_ + 0x24);
      if ((char *)0x1f < (char *)((int)ppppcVar13 + (-4 - (int)ppppcVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar6,pnVar11);
  }
LAB_0058c726:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall UI_ShipHullState::checkState(UI_ShipHullState *this,float param_1)
bool UI_ShipHullState::checkState(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Color3B *pCVar1;
  undefined1 uVar2;
  char *pcVar3;
  Ship *this_00;
  HullDamageState HVar4;
  std::string *pbVar5;
  HullLocation HVar6;
  int iVar7;
  undefined4 *puVar8;
  nothrow_t *pnVar9;
  std::string *pbVar10;
  UI_ShipHullState *this_01;
  int iVar11;
  uint unaff_EDI;
  float in_XMM1_Da;
  float fVar12;
  HullLocation local_44;
  UI_ShipHullState *local_3c;
  Color3B *local_34;
  std::string *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc698;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  this_00 = ShipData::currentlyBoardedShip;
  if (((char *)this)[0x429] != (byte)0x0) {
    this_00 = *(Ship **)(g_gameData + 0xd0);
  }
  local_14 = pcVar3;
  if (this_00 != (Ship *)0x0) {
    local_34 = (Color3B *)((char *)this + 0x4b8);
    this_01 = this + 0x440;
    local_3c = this + 0x4c8;
    local_44 = 0;
    do {
      HVar4 = (this_00)->getDamageStateForHullSection(local_44);
      puVar8 = (undefined4 *)(*(int *)(this_00 + 0x254) + 0x60);
      if (0xf < *(uint *)(*(int *)(this_00 + 0x254) + 0x74)) {
        puVar8 = (undefined4 *)*puVar8;
      }
      strUsingArgs((char *)local_2c,"UI_Schematic_%s_%s.png",puVar8,(&PTR_s_bow_005e2f5c)[local_44])
      ;
      pbVar10 = local_2c[0];
      // [seh] local_8 = 0;
      pbVar5 = (std::string *)local_2c;
      if (0xf < local_18) {
        pbVar5 = local_2c[0];
      }
      ghidra::lib::_Traits_equal___x28_x29((char *)pbVar5,local_1c,pcVar3,unaff_EDI);
      if (*(int **)(local_3c + -0x9c) != (int *)0x0) {
        (**(code **)(**(int **)(local_3c + -0x9c) + 0x23c))();
      }
      pCVar1 = (Color3B *)((int)&hullDamageColour + HVar4 * 3);
      cocos2d::Color3B::operator!=(local_34,pCVar1);
      *(undefined2 *)local_34 = *(undefined2 *)pCVar1;
      local_34[2] = *(Color3B *)((int)&hullDamageColour + HVar4 * 3 + 2);
      if (this_01 != (UI_ShipHullState *)local_2c) {
        pbVar5 = (std::string *)local_2c;
        if (0xf < local_18) {
          pbVar5 = pbVar10;
        }
        ghidra::str::assign((std::string *)this_01,(char *)pbVar5,local_1c);
        pbVar10 = local_2c[0];
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pbVar5 = pbVar10;
        if ((nothrow_t *)0xfff < pnVar9) {
          pbVar5 = *(std::string **)(pbVar10 + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if ((std::string *)0x1f < pbVar10 + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pbVar5,pnVar9);
      }
      this_01 = this_01 + 0x18;
      local_3c = local_3c + 4;
      local_44 = local_44 + 1;
      local_34 = local_34 + 3;
    } while ((int)local_44 < 5);
    fVar12 = *(float *)((char *)this + 0x4e8) - in_XMM1_Da;
    *(float *)((char *)this + 0x4e8) = fVar12;
    if (0.0 >= fVar12) {
      *(undefined4 *)((char *)this + 0x4e8) = 0x40800000;
    }
    iVar7 = *(int *)((char *)this + 0x4ec);
    if (iVar7 == -1) {
      iVar11 = 4;
    }
    else {
      iVar11 = iVar7;
      if (0.0 < fVar12) goto LAB_0058c9cb;
    }
    do {
      HVar6 = iVar7 + 1;
      *(HullLocation *)((char *)this + 0x4ec) = HVar6;
      if (4 < (int)HVar6) {
        *(undefined4 *)((char *)this + 0x4ec) = 0;
        HVar6 = 0;
      }
      iVar7 = (this_00)->getDamageAmountForHullSection(HVar6);
      if (0 < iVar7) goto LAB_0058c9cb;
      iVar7 = *(int *)((char *)this + 0x4ec);
    } while (iVar7 != iVar11);
    *(undefined4 *)((char *)this + 0x4ec) = 0xffffffff;
  }
LAB_0058c9cb:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: void __thiscall UI_ShipHullState::specialDataCheckFunction(UI_ShipHullState *this,float param_1)
void UI_ShipHullState::specialDataCheckFunction(float param_1)

{
  bool bVar1;
  Ship *this_00;
  HullDamageState HVar2;
  int iVar3;
  UI_ShipHullState *pUVar4;
  float unaff_EDI;
  HullLocation HVar5;
  
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    this_00 = ShipData::currentlyBoardedShip;
    if (((char *)this)[0x429] != (byte)0x0) {
      this_00 = *(Ship **)(g_gameData + 0xd0);
    }
    if (this_00 != (Ship *)0x0) {
      HVar5 = 0;
      pUVar4 = this + 0x4c8;
      do {
        HVar2 = (this_00)->getDamageStateForHullSection(HVar5);
        if ((HVar2 == 0) || (HVar2 == 5)) {
          *(int *)pUVar4 = 0xff;
        }
        else if (this[HVar5 + 0x4dc] == (byte)0x0) {
          iVar3 = (int)((float)*(int *)pUVar4 - (float)(&HULL_DAMAGE_THROB_SPEED)[HVar2] * param_1);
          *(int *)pUVar4 = iVar3;
          if (iVar3 < 0x41) {
            *(int *)pUVar4 = 0x40;
            this[HVar5 + 0x4dc] = (byte)0x1;
          }
        }
        else {
          iVar3 = (int)((float)*(int *)pUVar4 + (float)(&HULL_DAMAGE_THROB_SPEED)[HVar2] * param_1);
          *(int *)pUVar4 = iVar3;
          if (0xfe < iVar3) {
            *(int *)pUVar4 = 0xff;
            this[HVar5 + 0x4dc] = (byte)0x0;
          }
        }
        HVar5 = HVar5 + 1;
        pUVar4 = pUVar4 + 4;
      } while ((int)HVar5 < 5);
    }
    bVar1 = checkState(this,unaff_EDI);
    if (bVar1) {
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  return;
}
