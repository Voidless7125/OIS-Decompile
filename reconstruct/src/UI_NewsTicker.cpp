// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_NewsTicker::~UI_NewsTicker(UI_NewsTicker *this)
UI_NewsTicker::~UI_NewsTicker()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9130;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  uVar7 = 0;
  iVar5 = *(int *)((char *)this + 0x438);
  if (*(int *)((char *)this + 0x43c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar7 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1,uVar3);
        *(undefined4 *)(*(int *)((char *)this + 0x438) + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)((char *)this + 0x438);
    } while (uVar7 < (uint)(*(int *)((char *)this + 0x43c) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x43c) = iVar5;
  uVar3 = 0;
  iVar5 = *(int *)((char *)this + 0x42c);
  if (*(int *)((char *)this + 0x430) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x42c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)((char *)this + 0x42c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x430) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x430) = iVar5;
  pvVar2 = *(void **)((char *)this + 0x438);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x440) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0057f3ba;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x438) = 0;
    *(undefined4 *)((char *)this + 0x43c) = 0;
    *(undefined4 *)((char *)this + 0x440) = 0;
  }
  pvVar2 = *(void **)((char *)this + 0x42c);
  if (pvVar2 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x434) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
LAB_0057f3ba:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x42c) = 0;
    *(undefined4 *)((char *)this + 0x430) = 0;
    *(undefined4 *)((char *)this + 0x434) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NewsTicker::cleanupRender(UI_NewsTicker *this)
void UI_NewsTicker::cleanupRender()

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x438);
  if (*(int *)((char *)this + 0x43c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x438);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x43c) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x43c) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x42c);
  if (*(int *)((char *)this + 0x430) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x42c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x42c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x430) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x430) = iVar2;
  return;
}


// Ghidra: void __thiscall UI_NewsTicker::render(UI_NewsTicker *this)
void UI_NewsTicker::render()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff94[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  bool bVar2;
  char *pcVar3;
  UIText *pUVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  int iVar8;
  bool in_stack_ffffffa4;
  char *pcVar9;
  int local_44;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  UI_NewsTicker *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cb869;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  // [seh] local_8 = 0;
  bVar2 = false;
  local_30 = this_;
  ComputerSystem::getMostRecentArticles
            (*(ComputerSystem **)(g_gameLogic + 0xc),(int)&local_44,in_stack_ffffffa4);
  // [seh] local_8._0_1_ = 1;
  uVar7 = 0;
  iVar8 = local_40 - local_44 >> 0x1f;
  if ((local_40 - local_44) / 0x18 + iVar8 != iVar8) {
    iVar8 = 0;
    do {
      if (0 < (int)uVar7) {
        ghidra::str::append((std::string *)local_2c,"      ",6);
      }
      if (bVar2) {
        pcVar9 = "`%";
      }
      else {
        pcVar9 = "`7";
      }
      ghidra::str::append((std::string *)local_2c,pcVar9,2);
      bVar2 = (bool)(bVar2 ^ 1);
      pcVar3 = (char *)(local_44 + iVar8);
      pcVar9 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar9 = *(char **)pcVar3;
      }
      ghidra::str::append((std::string *)local_2c,pcVar9,*(uint *)(pcVar3 + 0x10));
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x18;
      this_ = local_30;
    } while (uVar7 < (uint)((local_40 - local_44) / 0x18));
  }
  ghidra::str::ctor((std::string *)&stack0xffffff94,(std::string *)local_2c)
  ;
  pUVar4 = UIText::create();
  local_38 = 0;
  local_34 = 0;
  *(float *)((char *)this_ + 0x428) = (float)*(int *)(*(int *)((char *)this_ + 0x278) + 0x68);
  // [seh] local_8._0_1_ = 2;
  local_30 = (UI_NewsTicker *)pUVar4;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)pUVar4 + 0x48))();
  (**(code **)(*(int *)this_ + 0x10c))();
  ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x430);
  if (*(AnimationFrames ***)((char *)this_ + 0x434) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this_ + 0x42c),ppAVar1,(AnimationFrames **)&local_30);
  }
  else {
    *ppAVar1 = (AnimationFrames *)pUVar4;
    *(int *)((char *)this_ + 0x430) = *(int *)((char *)this_ + 0x430) + 4;
  }
  **(undefined1 **)((char *)this_ + 0x288) = 1;
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_44);
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
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_NewsTicker::specialDataCheckFunction(UI_NewsTicker *this,float param_1)
void UI_NewsTicker::specialDataCheckFunction(float param_1)

{
  float *pfVar1;
  float fVar2;
  
  if ((*(int *)((char *)this + 0x430) - *(int *)((char *)this + 0x42c) & 0xfffffffcU) != 0) {
    *(float *)((char *)this + 0x428) = *(float *)((char *)this + 0x428) - param_1 * 24.0;
    pfVar1 = (float *)(**(code **)(*(int *)**(undefined4 **)((char *)this + 0x42c) + 0xb0))();
    fVar2 = *(float *)((char *)this + 0x428);
    if (fVar2 < 0.0 - *pfVar1) {
      fVar2 = (float)*(int *)(*(int *)((char *)this + 0x278) + 0x68);
      *(float *)((char *)this + 0x428) = fVar2;
    }
    (**(code **)(*(int *)**(undefined4 **)((char *)this + 0x42c) + 0x68))((float)(int)fVar2);
    **(undefined1 **)((char *)this + 0x288) = 1;
  }
  return;
}
