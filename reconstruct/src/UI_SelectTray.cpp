// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_SelectTray::~UI_SelectTray(UI_SelectTray *this)
UI_SelectTray::~UI_SelectTray()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  nothrow_t *pnVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9130;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  if (*(int **)((char *)this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x438) + 0x138))(1,uVar3);
    *(undefined4 *)((char *)this + 0x438) = 0;
  }
  if (*(int **)((char *)this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x43c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x43c) = 0;
  }
  if (*(int **)((char *)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x440) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x440) = 0;
  }
  if (*(int **)((char *)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x444) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x444) = 0;
  }
  if (*(int **)((char *)this + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x448) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x448) = 0;
  }
  uVar3 = 0;
  iVar5 = *(int *)((char *)this + 0x44c);
  if (*(int *)((char *)this + 0x450) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x44c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)((char *)this + 0x44c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x450) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x450) = iVar5;
  ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x45c));
  pvVar2 = *(void **)((char *)this + 0x44c);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x454) - (int)pvVar2 & 0xfffffffc);
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
    *(undefined4 *)((char *)this + 0x44c) = 0;
    *(undefined4 *)((char *)this + 0x450) = 0;
    *(undefined4 *)((char *)this + 0x454) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_SelectTray::cleanupRender(UI_SelectTray *this)
void UI_SelectTray::cleanupRender()

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int **)((char *)this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x438) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x438) = 0;
  }
  if (*(int **)((char *)this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x43c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x43c) = 0;
  }
  if (*(int **)((char *)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x440) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x440) = 0;
  }
  if (*(int **)((char *)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x444) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x444) = 0;
  }
  if (*(int **)((char *)this + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x448) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x448) = 0;
  }
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x44c);
  if (*(int *)((char *)this + 0x450) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x44c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x44c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x450) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x450) = iVar2;
  return;
}


// Ghidra: void __thiscall UI_SelectTray::render(UI_SelectTray *this)
void UI_SelectTray::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  char *pcVar1;
  AnimationFrames **ppAVar2;
  int *piVar3;
  undefined1 *puVar4;
  ghidra::vector *pvVar5;
  std::string *pbVar6;
  Scale9Sprite *pSVar7;
  uint uVar8;
  UIText *pUVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  // [seh] undefined4 *puStack_84;
  char *pcVar15;
  Size local_48 [4];
  char *local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  AnimationFrames *local_34;
  char local_2e;
  char local_2d;
  void *local_2c [3];
  ghidra::vector local_20 [4];
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cbf6e;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar4 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = puVar4;
  (**(code **)(*(int *)this + 0x290))();
  pvVar5 = (ghidra::vector *)getShipCheckDataPossibleValues((ShipDataInputType)puVar4);
  this_00 = (ghidra::vector *)((char *)this + 0x45c);
  if (this_00 != pvVar5) {
    ghidra::lib::vector___Tidy(this_00);
    *(undefined4 *)this_00 = *(undefined4 *)pvVar5;
    *(undefined4 *)((char *)this + 0x460) = *(undefined4 *)(pvVar5 + 4);
    *(undefined4 *)((char *)this + 0x464) = *(undefined4 *)(pvVar5 + 8);
    *(undefined4 *)pvVar5 = 0;
    *(undefined4 *)(pvVar5 + 4) = 0;
    *(undefined4 *)(pvVar5 + 8) = 0;
  }
  ghidra::lib::vector___Tidy(local_20);
  *(int *)((char *)this + 0x428) =
       (int)(*(int *)((char *)this + 0x2a4) + -6 + (*(int *)((char *)this + 0x2a4) + -6 >> 0x1f & 7U)) >> 3;
  *(int *)((char *)this + 0x434) = *(int *)((char *)this + 0x2a0) + -0xd;
  local_2d = shipDataCanPrev((ShipDataInputType)puVar4);
  local_2e = shipDataCanNext((ShipDataInputType)puVar4);
  pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 0;
  pSVar7 = cocos2d::ui::Scale9Sprite::create(pbVar6);
  // [seh] local_8 = 0xffffffff;
  *(Scale9Sprite **)((char *)this + 0x448) = pSVar7;
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
    operator_delete(pvVar10,pnVar11);
  }
  local_38 = 0;
  local_34 = (AnimationFrames *)0x0;
  // [seh] local_8 = 1;
  (**(code **)(**(int **)((char *)this + 0x448) + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x448) + 0x48))();
  iVar12 = **(int **)((char *)this + 0x448);
  uVar8 = cocos2d::Size::Size((Size *)&local_1c,(float)*(int *)((char *)this + 0x434),
                              (float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar12 + 0xac))();
  pcVar15 = *(char **)((char *)this + 0x448);
  (**(code **)(*(int *)this + 0x10c))();
  iVar12 = *(int *)this_00;
  local_3c = 0;
  iVar13 = *(int *)((char *)this + 0x460) - iVar12 >> 0x1f;
  if ((*(int *)((char *)this + 0x460) - iVar12) / 0x18 + iVar13 != iVar13) {
    iVar13 = 0;
    local_40 = 0;
    do {
      if ((*(int *)((char *)this + 0x430) <= (int)local_3c) &&
         ((int)local_3c <= *(int *)((char *)this + 0x428) + *(int *)((char *)this + 0x430))) {
        pcVar1 = *(char **)((char *)this + 0x458);
        local_44 = pcVar1;
        if (0xf < *(uint *)(pcVar1 + 0x14)) {
          local_44 = *(char **)pcVar1;
        }
        local_34 = *(AnimationFrames **)(iVar13 + iVar12 + 0x14);
        ghidra::lib::_Traits_equal___x28_x29(local_44,*(uint *)(pcVar1 + 0x10),pcVar15,uVar8);
        strUsingArgs((char *)&puStack_84);
        pUVar9 = UIText::create();
        local_1c = 0;
        local_18 = 0x3f800000;
        // [seh] local_8 = 2;
        local_34 = (AnimationFrames *)pUVar9;
        (**(code **)(*(int *)pUVar9 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        (**(code **)(*(int *)pUVar9 + 0x48))();
        // [seh] puStack_84 = (undefined4 *)0x585689;
        (**(code **)(*(int *)this + 0x108))();
        local_40 = local_40 + 8;
        ppAVar2 = *(AnimationFrames ***)((char *)this + 0x450);
        if (*(AnimationFrames ***)((char *)this + 0x454) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x44c),ppAVar2,&local_34);
        }
        else {
          *ppAVar2 = (AnimationFrames *)pUVar9;
          *(int *)((char *)this + 0x450) = *(int *)((char *)this + 0x450) + 4;
        }
      }
      iVar12 = *(int *)((char *)this + 0x45c);
      local_3c = local_3c + 1;
      iVar13 = iVar13 + 0x18;
    } while (local_3c < (uint)((*(int *)((char *)this + 0x460) - iVar12) / 0x18));
  }
  if (local_2d == '\0') {
    pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 4;
  }
  else {
    pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 3;
  }
  pSVar7 = cocos2d::ui::Scale9Sprite::create(pbVar6);
  // [seh] local_8 = 0xffffffff;
  *(Scale9Sprite **)((char *)this + 0x438) = pSVar7;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00585757;
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_1c = 0;
  local_18 = 0x3f800000;
  // [seh] local_8 = 5;
  (**(code **)(**(int **)((char *)this + 0x438) + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x438) + 0x48))();
  iVar12 = **(int **)((char *)this + 0x438);
  // [seh] puStack_84 = (undefined4 *)0x585801;
  cocos2d::Size::Size((Size *)&local_1c,12.0,12.0);
  (**(code **)(iVar12 + 0xac))();
  // [seh] puStack_84 = (undefined4 *)0x58581e;
  (**(code **)(*(int *)this + 0x10c))();
  if (local_2d == '\0') {
    uVar14 = 0x38;
  }
  else {
    uVar14 = 0x37;
    if (((char *)this)[0x468] != (byte)0x0) {
      uVar14 = 0x25;
    }
  }
  strUsingArgs(&stack0xffffff68,"`%c`a1",uVar14);
  pUVar9 = UIText::create();
  *(UIText **)((char *)this + 0x43c) = pUVar9;
  local_1c = 0x3f000000;
  local_18 = 0x3f000000;
  // [seh] local_8 = 6;
  // [seh] puStack_84 = &local_1c;
  (**(code **)(*(int *)pUVar9 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  piVar3 = *(int **)((char *)this + 0x438);
  iVar12 = **(int **)((char *)this + 0x43c);
  (**(code **)(**(int **)((char *)this + 0x438) + 0x74))();
  (**(code **)(*piVar3 + 0x6c))();
  (**(code **)(iVar12 + 0x48))();
  (**(code **)(*(int *)this + 0x108))();
  if (local_2e == '\0') {
    pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 8;
    pSVar7 = cocos2d::ui::Scale9Sprite::create(pbVar6);
    // [seh] local_8 = 0xffffffff;
    *(Scale9Sprite **)((char *)this + 0x440) = pSVar7;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00585757;
      }
      operator_delete(pvVar10,pnVar11);
    }
    uVar14 = 0x38;
  }
  else {
    pbVar6 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 7;
    pSVar7 = cocos2d::ui::Scale9Sprite::create(pbVar6);
    // [seh] local_8 = 0xffffffff;
    *(Scale9Sprite **)((char *)this + 0x440) = pSVar7;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_00585757:
          // [seh] local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    uVar14 = 0x37;
    if (((char *)this)[0x469] != (byte)0x0) {
      uVar14 = 0x25;
    }
  }
  local_1c = 0;
  local_18 = 0;
  // [seh] local_8 = 9;
  (**(code **)(**(int **)((char *)this + 0x440) + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x440) + 0x48))();
  iVar12 = **(int **)((char *)this + 0x440);
  // [seh] puStack_84 = (undefined4 *)0x585a64;
  cocos2d::Size::Size((Size *)&local_1c,12.0,12.0);
  (**(code **)(iVar12 + 0xac))();
  // [seh] puStack_84 = (undefined4 *)0x585a81;
  (**(code **)(*(int *)this + 0x10c))();
  strUsingArgs(&stack0xffffff68,"`%c`a2",uVar14);
  pUVar9 = UIText::create();
  *(UIText **)((char *)this + 0x444) = pUVar9;
  local_1c = 0x3f000000;
  local_18 = 0x3f000000;
  // [seh] local_8 = 10;
  // [seh] puStack_84 = &local_1c;
  (**(code **)(*(int *)pUVar9 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  piVar3 = *(int **)((char *)this + 0x440);
  iVar12 = **(int **)((char *)this + 0x444);
  (**(code **)(**(int **)((char *)this + 0x440) + 0x74))();
  (**(code **)(*piVar3 + 0x6c))();
  (**(code **)(iVar12 + 0x48))();
  (**(code **)(*(int *)this + 0x108))();
  iVar12 = *(int *)this;
  cocos2d::Size::Size(local_48,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar12 + 0xac))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((int)((uint)local_14 ^ (uint)&stack0xfffffffc));
  return;
}


// Ghidra: void __thiscall UI_SelectTray::mouseMove(UI_SelectTray *this,undefined4 param_2,undefined4 param_3)
void UI_SelectTray::mouseMove(undefined4 param_2, undefined4 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  uint uVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c45e9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  bVar1 = checkButtonStates(this,param_2,param_3);
  if (bVar1) {
    (**(code **)(*(int *)this + 0x294))(uVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_SelectTray::mouseUp(UI_SelectTray *this,float param_2,float param_3)
void UI_SelectTray::mouseUp(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  SoundEngine *this_00;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_EDI;
  Ship *pSVar10;
  Sound SVar11;
  int iVar12;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cbfa9;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  checkButtonStates(this,param_2,param_3);
  bVar4 = shipDataCanPrev((ShipDataInputType)pcVar6);
  bVar5 = shipDataCanNext((ShipDataInputType)pcVar6);
  if ((((char *)this)[0x468] == (byte)0x0) || (!bVar4)) {
    if ((((char *)this)[0x469] == (byte)0x0) || (!bVar5)) {
      if (((((param_2 < 2.0) || ((float)(*(int *)((char *)this + 0x46c) + 2) < param_2)) || (param_3 < 3.0))
          || (((float)(*(int *)((char *)this + 0x2a4) + -3) < param_3 ||
              (uVar8 = (uint)((param_3 - 3.0) * 0.125), (int)uVar8 < 0)))) ||
         ((uint)((*(int *)((char *)this + 0x460) - *(int *)((char *)this + 0x45c)) / 0x18) <= uVar8))
      goto LAB_00585d74;
      debugPrint("DETAIL","Clicked on option %d",uVar8);
      shipDataChangeTo((ShipDataInputType)pcVar6,unaff_EDI);
    }
    else {
      shipDataChangeNext((ShipDataInputType)pcVar6);
    }
    SVar11 = 8;
  }
  else {
    shipDataChangePrev((ShipDataInputType)pcVar6);
    SVar11 = 9;
  }
  iVar12 = -1;
  pSVar10 = *(Ship **)(g_gameData + 0xd0);
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(pSVar10, SVar11, iVar12);
LAB_00585d74:
  if (*(int *)((char *)this + 0x458) != 0) {
    uVar9 = 0;
    uVar8 = (*(int *)((char *)this + 0x460) - *(int *)((char *)this + 0x45c)) / 0x18;
    if (uVar8 != 0) {
      pcVar7 = *(char **)((char *)this + 0x458);
      uVar1 = *(uint *)(pcVar7 + 0x14);
      uVar2 = *(uint *)(pcVar7 + 0x10);
      do {
        if (0xf < uVar1) {
          pcVar7 = *(char **)pcVar7;
        }
        bVar4 = ghidra::lib::_Traits_equal___x28_x29(pcVar7,uVar2,pcVar6,unaff_EDI);
        if (bVar4) {
          if (uVar9 == 0xffffffff) break;
          iVar12 = *(int *)((char *)this + 0x430);
          if (iVar12 <= (int)uVar9) {
            iVar3 = *(int *)((char *)this + 0x428);
            if (((int)uVar9 < iVar3 - iVar12) || ((int)uVar9 < iVar3 + iVar12)) break;
            uVar9 = uVar9 - iVar3;
          }
          *(uint *)((char *)this + 0x430) = uVar9;
          break;
        }
        pcVar7 = *(char **)((char *)this + 0x458);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
  }
  *(undefined2 *)((char *)this + 0x468) = 0;
  (**(code **)(*(int *)this + 0x294))();
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_SelectTray::mouseCancel(UI_SelectTray *this)
void UI_SelectTray::mouseCancel()

{
  *(undefined2 *)((char *)this + 0x468) = 0;
  return;
}


// Ghidra: bool __thiscall UI_SelectTray::checkButtonStates(UI_SelectTray *this,float param_2,float param_3)
bool UI_SelectTray::checkButtonStates(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  bool bVar2;
  UI_SelectTray UVar3;
  undefined1 *puVar4;
  UI_SelectTray UVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ca559;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar4 = (undefined1 *)((uint)___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  bVar1 = shipDataCanPrev((ShipDataInputType)puVar4);
  bVar2 = shipDataCanNext((ShipDataInputType)puVar4);
  UVar5 = (byte)0x0;
  if ((((bVar1) && ((float)(*(int *)((char *)this + 0x2a0) + -0xc) <= param_2)) &&
      (param_2 < (float)*(int *)((char *)this + 0x2a0))) && (param_3 < 12.0)) {
    UVar5 = (UI_SelectTray)(0.0 <= param_3);
  }
  UVar3 = (byte)0x0;
  if (((bVar2) && ((float)(*(int *)((char *)this + 0x2a0) + -0xc) <= param_2)) &&
     ((param_2 < (float)*(int *)((char *)this + 0x2a0) && (param_3 < (float)*(int *)((char *)this + 0x2a4))))) {
    UVar3 = (UI_SelectTray)((float)(*(int *)((char *)this + 0x2a4) + -0xc) <= param_3);
  }
  if ((UVar5 == ((char *)this)[0x468]) && (UVar3 == ((char *)this)[0x469])) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  ((char *)this)[0x469] = UVar3;
  ((char *)this)[0x468] = UVar5;
  // [seh] ExceptionList = local_10;
  return true;
}
