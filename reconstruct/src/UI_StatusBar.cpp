// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_StatusBar::setValue(UI_StatusBar *this,double param_1)
void UI_StatusBar::setValue(double param_1)

{
  if (*(float *)((char *)this + 0x434) != (float)(int)param_1) {
    *(float *)((char *)this + 0x434) = (float)(int)param_1;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// Ghidra: void __thiscall UI_StatusBar::render(UI_StatusBar *this)
void UI_StatusBar::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int *piVar2;
  UI_StatusBar *pUVar3;
  Sprite *pSVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  UI_StatusBar *pUVar10;
  void *pvVar11;
  nothrow_t *pnVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  UI_StatusBar *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc742;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_30 = this;
  (**(code **)(*(int *)this + 0x290))(local_14);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"white.png",9);
  // [seh] local_8 = 0;
  pSVar4 = cocos2d::Sprite::create((std::string *)local_2c);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)((char *)this + 0x428) = pSVar4;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  iVar7 = *(int *)((char *)this + 0x440);
  iVar1 = **(int **)((char *)this + 0x428);
  iVar5 = (**(code **)(iVar1 + 0xb0))();
  iVar9 = *(int *)((char *)this + 0x43c);
  local_34 = *(float *)(iVar5 + 4);
  pfVar6 = (float *)(**(code **)(**(int **)(local_30 + 0x428) + 0xb0))();
  pUVar3 = local_30;
  (**(code **)(iVar1 + 0x3c))((float)iVar9 / *pfVar6,(float)iVar7 / local_34);
  (**(code **)(**(int **)(pUVar3 + 0x428) + 0x25c))(pUVar3 + 0x444);
  local_40 = 0;
  local_3c = 0.0;
  // [seh] local_8 = 1;
  (**(code **)(**(int **)(pUVar3 + 0x428) + 0xa0))(&local_40);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pUVar3 + 0x108))(*(int *)(pUVar3 + 0x428),0xffffffff);
  local_38 = *(float *)pUVar3;
  iVar7 = (**(code **)(**(int **)(pUVar3 + 0x428) + 0xb0))();
  local_34 = *(float *)(iVar7 + 4);
  iVar7 = **(int **)(pUVar3 + 0x428);
  pfVar6 = (float *)(**(code **)(**(int **)(pUVar3 + 0x428) + 0xb0))();
  piVar2 = *(int **)(pUVar3 + 0x428);
  fVar13 = (float10)(**(code **)(iVar7 + 0x30))();
  fVar14 = (float)(fVar13 * (float10)local_34);
  fVar13 = (float10)(**(code **)(*piVar2 + 0x28))();
  uVar8 = cocos2d::Size::Size((Size *)&local_40,(float)(fVar13 * (float10)*pfVar6),fVar14);
  pUVar3 = local_30;
  (**(code **)((int)local_38 + 0xac))(uVar8);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"white.png",9);
  // [seh] local_8 = 2;
  pSVar4 = cocos2d::Sprite::create((std::string *)local_2c);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)(pUVar3 + 0x42c) = pSVar4;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  iVar7 = *(int *)(pUVar3 + 0x440);
  iVar1 = **(int **)(pUVar3 + 0x42c);
  if (pUVar3[0x430] == (byte)0x0) {
    iVar9 = (**(code **)(**(int **)(pUVar3 + 0x428) + 0xb0))();
    local_38 = *(float *)(iVar9 + 4);
    local_34 = *(float *)(pUVar3 + 0x434);
    local_3c = *(float *)(pUVar3 + 0x438);
    iVar9 = *(int *)(pUVar3 + 0x43c);
    pfVar6 = (float *)(**(code **)(**(int **)(local_30 + 0x42c) + 0xb0))();
    fVar14 = (((float)(iVar7 + -2) / local_38) * local_34) / local_3c;
    fVar15 = (float)(iVar9 + -2) / *pfVar6;
  }
  else {
    iVar5 = (**(code **)(**(int **)(pUVar3 + 0x428) + 0xb0))();
    iVar9 = *(int *)(pUVar3 + 0x43c);
    local_38 = *(float *)(iVar5 + 4);
    pfVar6 = (float *)(**(code **)(**(int **)(local_30 + 0x42c) + 0xb0))();
    fVar14 = (float)(iVar7 + -2) / local_38;
    fVar15 = ((float)(iVar9 + -2) / *pfVar6) *
             (*(float *)(local_30 + 0x434) / *(float *)(local_30 + 0x438));
  }
  pUVar3 = local_30;
  (**(code **)(iVar1 + 0x3c))(fVar15,fVar14);
  (**(code **)(**(int **)(pUVar3 + 0x42c) + 0x48))(0x3f800000,0x3f800000);
  local_48 = 0;
  local_44 = 0;
  // [seh] local_8 = 3;
  (**(code **)(**(int **)(pUVar3 + 0x42c) + 0xa0))(&local_48);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pUVar3 + 0x10c))(*(int *)(pUVar3 + 0x42c));
  iVar7 = (int)((*(float *)(pUVar3 + 0x434) / *(float *)(pUVar3 + 0x438)) * 100.0);
  if (*(int *)(pUVar3 + 0x454) < iVar7) {
    pUVar10 = pUVar3 + 0x458;
  }
  else {
    pUVar10 = pUVar3 + 0x450;
    if (iVar7 <= *(int *)(pUVar3 + 0x44c)) {
      pUVar10 = pUVar3 + 0x447;
    }
  }
  (**(code **)(**(int **)(pUVar3 + 0x42c) + 0x25c))(pUVar10);
  **(undefined1 **)(pUVar3 + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
