// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_Slider::cleanupRender(UI_Slider *this)
void UI_Slider::cleanupRender()

{
  if (*(int **)((char *)this + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x43c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x43c) = 0;
  }
  if (*(int **)((char *)this + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x438) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x438) = 0;
  }
  if (*(int **)((char *)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x42c) = 0;
  }
  if (*(int **)((char *)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x430) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x430) = 0;
  }
  if (*(int **)((char *)this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x434) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x434) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_Slider::render(UI_Slider *this)
void UI_Slider::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff88[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff74[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  std::string *pbVar4;
  Scale9Sprite *pSVar5;
  Sprite *pSVar6;
  UIText *pUVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  char acStack_a0 [4];
  undefined4 uStack_9c;
  char *pcStack_80;
  int iStack_7c;
  Size local_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  undefined1 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc6ec;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar2 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = puVar2;
  (**(code **)(*(int *)this + 0x290))();
  *(undefined4 *)((char *)this + 0x448) = 0;
  iVar3 = shipDataMax((ShipDataInputType)puVar2);
  piVar1 = *(int **)((char *)this + 0x440);
  *(int *)((char *)this + 0x44c) = iVar3;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 < *(int *)((char *)this + 0x448)) {
      *piVar1 = *(int *)((char *)this + 0x448);
    }
    else if (iVar3 < *piVar1) {
      *piVar1 = iVar3;
    }
  }
  pbVar4 = (std::string *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 0;
  pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
  // [seh] local_8 = 0xffffffff;
  *(Scale9Sprite **)((char *)this + 0x438) = pSVar5;
  if (0xf < local_18) {
    pnVar9 = (nothrow_t *)(local_18 + 1);
    pvVar8 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_2c[0] + -4);
      pnVar9 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  local_34 = 0;
  local_30 = 0;
  // [seh] local_8 = 1;
  (**(code **)(**(int **)((char *)this + 0x438) + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x438) + 0x48))();
  iVar3 = **(int **)((char *)this + 0x438);
  cocos2d::Size::Size((Size *)&local_34,(float)*(int *)((char *)this + 0x2a0),4.0);
  (**(code **)(iVar3 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  iStack_7c = (int)(char)g_gameData[0xd4];
  pcStack_80 = "%c_Slider_Head.png";
  strUsingArgs(&stack0xffffff88);
  iStack_7c = 0x58ce28;
  pSVar6 = loadSprite();
  *(Sprite **)((char *)this + 0x43c) = pSVar6;
  (**(code **)(*(int *)this + 0x108))();
  if (((char *)this)[0x428] != (byte)0x0) {
    strUsingArgs((char *)&pcStack_80);
    pUVar7 = UIText::create();
    *(UIText **)((char *)this + 0x42c) = pUVar7;
    local_34 = 0x3f000000;
    local_30 = 0x3f800000;
    // [seh] local_8 = 2;
    (**(code **)(*(int *)pUVar7 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(*(int *)this + 0x108))();
    uStack_9c = 0x58ced0;
    strUsingArgs(&stack0xffffff74);
    pUVar7 = UIText::create();
    *(UIText **)((char *)this + 0x430) = pUVar7;
    local_34 = 0;
    local_30 = 0;
    // [seh] local_8 = 3;
    iStack_7c = 0x58cf0e;
    (**(code **)(*(int *)pUVar7 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    iStack_7c = 0x41100000;
    pcStack_80 = (char *)0x3f800000;
    (**(code **)(**(int **)((char *)this + 0x430) + 0x48))();
    (**(code **)(*(int *)this + 0x108))();
    strUsingArgs(acStack_a0,"`8%d",*(undefined4 *)((char *)this + 0x44c));
    pUVar7 = UIText::create();
    *(UIText **)((char *)this + 0x434) = pUVar7;
    local_34 = 0x3f800000;
    local_30 = 0;
    // [seh] local_8 = 4;
    (**(code **)(*(int *)pUVar7 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(**(int **)((char *)this + 0x434) + 0x48))();
    uStack_9c = *(undefined4 *)((char *)this + 0x434);
    acStack_a0[0] = -0x26;
    acStack_a0[1] = -0x31;
    acStack_a0[2] = 'X';
    acStack_a0[3] = '\0';
    (**(code **)(*(int *)this + 0x108))();
  }
  *(undefined4 *)((char *)this + 0x444) = **(undefined4 **)((char *)this + 0x440);
  (**(code **)(**(int **)((char *)this + 0x43c) + 0xb0))();
  (**(code **)(**(int **)((char *)this + 0x43c) + 0x48))();
  if (*(int **)((char *)this + 0x42c) != (int *)0x0) {
    iVar3 = **(int **)((char *)this + 0x42c);
    (**(code **)(**(int **)((char *)this + 0x43c) + 0xb0))();
    iStack_7c = 0x58d0b8;
    (**(code **)(iVar3 + 0x48))();
  }
  iVar3 = *(int *)this;
  iStack_7c = 0x58d0e7;
  cocos2d::Size::Size(local_3c,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar3 + 0xac))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((int)((uint)local_14 ^ (uint)&stack0xfffffffc));
  return;
}


// Ghidra: void __thiscall UI_Slider::specialDataCheckFunction(UI_Slider *this,float param_1)
void UI_Slider::specialDataCheckFunction(float param_1)

{
  int iVar1;
  ShipDataInputType unaff_ESI;
  
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    if ((((*(int **)((char *)this + 0x440) == (int *)0x0) ||
         (**(int **)((char *)this + 0x440) == *(int *)((char *)this + 0x444))) && (*(int *)((char *)this + 0x448) == 0)) &&
       (iVar1 = shipDataMax(unaff_ESI), *(int *)((char *)this + 0x44c) == iVar1)) {
      return;
    }
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// Ghidra: void __thiscall UI_Slider::mouseMove(UI_Slider *this,undefined4 param_2,undefined4 param_3)
void UI_Slider::mouseMove(undefined4 param_2, undefined4 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c91f9;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  (**(code **)(*(int *)this + 0x2a8))
            // [cookie] (param_2,param_3,___security_cookie ^ (uint)&stack0xfffffffc,this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_Slider::mouseUp(UI_Slider *this,float param_2)
void UI_Slider::mouseUp(float param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  ShipDataInputType SVar2;
  int iVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c9299;
  // [seh] local_10 = ExceptionList;
  // [cookie] SVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar4 = (int)param_2;
  if ((1 < iVar4) && (iVar4 <= *(int *)((char *)this + 0x2a0) + -2)) {
    iVar1 = *(int *)((char *)this + 0x44c);
    iVar3 = *(int *)((char *)this + 0x448);
    iVar4 = (int)(((float)(iVar4 + -2) / (float)(*(int *)((char *)this + 0x2a0) + -4)) *
                  (float)(iVar1 - iVar3) + (float)iVar3);
    if ((iVar3 <= iVar4) && (iVar3 = iVar4, iVar1 < iVar4)) {
      iVar3 = iVar1;
    }
    if ((iVar3 != -1) && (iVar3 != **(int **)((char *)this + 0x440))) {
      **(int **)((char *)this + 0x440) = iVar3;
      (**(code **)(*(int *)this + 0x294))();
      debugPrint("DETAIL","new value = %d",**(undefined4 **)((char *)this + 0x440));
      runDataInputSync(SVar2);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}
