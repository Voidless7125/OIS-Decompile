// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_Checkbox::cleanupRender(UI_Checkbox *this)
void UI_Checkbox::cleanupRender()

{
  if (*(int **)((char *)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x428) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x428) = 0;
  }
  if (*(int **)((char *)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x42c) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_Checkbox::render(UI_Checkbox *this)
void UI_Checkbox::render()

{
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffb4[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  Sprite *pSVar2;
  UI_Checkbox *pUVar3;
  UIText *pUVar4;
  char *pcVar5;
  char cVar6;
  Size local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca249;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  if (((char *)this)[0x27c] == (byte)0x0) {
    pcVar5 = "%c_Checkbox_Greyed.png";
  }
  else {
    pcVar5 = "%c_Checkbox_Filled.png";
    if (**(char **)((char *)this + 0x434) == '\0') {
      pcVar5 = "%c_Checkbox.png";
    }
  }
  strUsingArgs(&stack0xffffffb8,pcVar5);
  pSVar2 = loadSprite();
  *(Sprite **)((char *)this + 0x428) = pSVar2;
  (**(code **)(*(int *)this + 0x10c))();
  cVar6 = '8';
  if (((char *)this)[0x27c] != (byte)0x0) {
    if (**(char **)((char *)this + 0x434) == '\0') {
      cVar6 = *(char *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd4);
    }
    else {
      cVar6 = *(char *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd5);
    }
  }
  pUVar3 = this + 0x2ac;
  if (0xf < *(uint *)((char *)this + 0x2c0)) {
    pUVar3 = *(UI_Checkbox **)pUVar3;
  }
  strUsingArgs(&stack0xffffffb4,"`%c%s",(int)cVar6,pUVar3);
  pUVar4 = UIText::create();
  *(UIText **)((char *)this + 0x42c) = pUVar4;
  local_18 = 0;
  local_14 = 0x3f000000;
  // [seh] local_8 = 0;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  iVar1 = **(int **)((char *)this + 0x42c);
  (**(code **)(**(int **)((char *)this + 0x428) + 0xb0))();
  (**(code **)(iVar1 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  cocos2d::Size::Size(local_20,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar1 + 0xac))();
  ((char *)this)[0x431] = ((char *)this)[0x27c];
  ((char *)this)[0x430] = **(UI_Checkbox **)((char *)this + 0x434);
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_Checkbox::specialDataCheckFunction(UI_Checkbox *this,float param_1)
void UI_Checkbox::specialDataCheckFunction(float param_1)

{
  if ((((char *)this)[0x27c] != ((char *)this)[0x431]) || (((char *)this)[0x430] != **(UI_Checkbox **)((char *)this + 0x434))) {
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// Ghidra: void __thiscall UI_Checkbox::mouseUp(UI_Checkbox *this)
void UI_Checkbox::mouseUp()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipDataInputType SVar1;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c91f9;
  // [seh] local_10 = ExceptionList;
  // [cookie] SVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  **(char **)((char *)this + 0x434) = **(char **)((char *)this + 0x434) == '\0';
  (**(code **)(*(int *)this + 0x294))();
  runDataInputSync(SVar1);
  // [seh] ExceptionList = local_10;
  return;
}
