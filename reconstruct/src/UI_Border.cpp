// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_Border::render(UI_Border *this)
void UI_Border::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  std::string *pbVar2;
  Scale9Sprite *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca0f1;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))(local_14);
  pbVar2 = (std::string *)
           strUsingArgs((char *)local_2c,"%c_Border.png",(int)(char)g_gameData[0xd4]);
  // [seh] local_8 = 0;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  // [seh] local_8 = 0xffffffff;
  *(Scale9Sprite **)((char *)this + 0x428) = pSVar3;
  if (0xf < local_18) {
    pnVar6 = (nothrow_t *)(local_18 + 1);
    pvVar5 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      pnVar6 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  local_34 = 0;
  local_30 = 0;
  // [seh] local_8 = 1;
  (**(code **)(**(int **)((char *)this + 0x428) + 0xa0))(&local_34);
  // [seh] local_8 = 0xffffffff;
  iVar1 = **(int **)((char *)this + 0x428);
  uVar4 = cocos2d::Size::Size((Size *)&local_34,(float)*(int *)((char *)this + 0x2a0),
                              (float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar1 + 0xac))(uVar4);
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)((char *)this + 0x428));
  **(undefined1 **)((char *)this + 0x288) = 1;
  iVar1 = *(int *)this;
  uVar4 = (**(code **)(**(int **)((char *)this + 0x428) + 0xb0))();
  (**(code **)(iVar1 + 0xac))(uVar4);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
