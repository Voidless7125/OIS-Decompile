// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_BDBar::setValue(UI_BDBar *this,double param_1)
void UI_BDBar::setValue(double param_1)

{
  if ((*(float *)((char *)this + 0x438) != (float)(int)param_1) || (((char *)this)[0x434] != (byte)0x0)) {
    ((char *)this)[0x434] = (byte)0x0;
    *(float *)((char *)this + 0x438) = (float)(int)param_1;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// Ghidra: void __thiscall UI_BDBar::cleanupRender(UI_BDBar *this)
void UI_BDBar::cleanupRender()

{
  if (*(int **)((char *)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x428) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x428) = 0;
  }
  if (*(int **)((char *)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x42c) = 0;
  }
  if (*(int **)((char *)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x430) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x430) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_BDBar::render(UI_BDBar *this)
void UI_BDBar::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  Sprite *pSVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  UI_BDBar *pUVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  undefined4 *puVar12;
  UI_BDBar *pUVar13;
  float10 fVar14;
  float fVar15;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  UI_BDBar *local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca0ae;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_34 = this;
  (**(code **)(*(int *)this + 0x290))(local_14);
  if (*(float *)((char *)this + 0x43c) == 0.0) goto LAB_005652c7;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"white.png",9);
  // [seh] local_8 = 0;
  pSVar2 = cocos2d::Sprite::create((std::string *)local_2c);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)((char *)this + 0x428) = pSVar2;
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
  iVar7 = *(int *)((char *)this + 0x444);
  iVar5 = **(int **)((char *)this + 0x428);
  iVar3 = (**(code **)(iVar5 + 0xb0))();
  iVar8 = *(int *)((char *)this + 0x440);
  local_30 = *(float *)(iVar3 + 4);
  pfVar4 = (float *)(**(code **)(**(int **)(local_34 + 0x428) + 0xb0))();
  (**(code **)(iVar5 + 0x3c))((float)iVar8 / *pfVar4,(float)iVar7 / local_30);
  pUVar13 = local_34;
  (**(code **)(**(int **)(local_34 + 0x428) + 0x25c))(local_34 + 0x448);
  local_3c = 0;
  local_38 = 0.0;
  // [seh] local_8 = 1;
  (**(code **)(**(int **)(pUVar13 + 0x428) + 0xa0))(&local_3c);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pUVar13 + 0x108))(*(int *)(pUVar13 + 0x428),0xfffffffe);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"white.png",9);
  // [seh] local_8 = 2;
  pSVar2 = cocos2d::Sprite::create((std::string *)local_2c);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)(pUVar13 + 0x430) = pSVar2;
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
  if (pUVar13[0x435] == (byte)0x0) {
    iVar7 = **(int **)(pUVar13 + 0x430);
    iVar5 = *(int *)(pUVar13 + 0x440);
    pfVar4 = (float *)(**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    (**(code **)(iVar7 + 0x3c))((float)iVar5 / *pfVar4,0x3f800000);
  }
  else {
    iVar7 = **(int **)(pUVar13 + 0x430);
    local_30 = (float)*(int *)(pUVar13 + 0x444);
    iVar5 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    (**(code **)(iVar7 + 0x3c))(0x3f800000,local_30 / *(float *)(iVar5 + 4));
  }
  iVar7 = **(int **)(pUVar13 + 0x430);
  uVar6 = cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),'@','@','@');
  (**(code **)(iVar7 + 0x25c))(uVar6);
  (**(code **)(**(int **)(pUVar13 + 0x430) + 0x48))
            ((float)(*(int *)(pUVar13 + 0x440) / 2),(float)(*(int *)(pUVar13 + 0x444) / 2));
  local_3c = 0x3f000000;
  local_38 = 0.5;
  // [seh] local_8 = 3;
  (**(code **)(**(int **)(pUVar13 + 0x430) + 0xa0))(&local_3c);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pUVar13 + 0x108))(*(int *)(pUVar13 + 0x430),0xffffffff);
  local_40 = *(float *)pUVar13;
  iVar7 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
  local_30 = *(float *)(iVar7 + 4);
  iVar7 = **(int **)(pUVar13 + 0x428);
  pfVar4 = (float *)(**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
  piVar1 = *(int **)(local_34 + 0x428);
  fVar14 = (float10)(**(code **)(iVar7 + 0x30))();
  fVar15 = (float)(fVar14 * (float10)local_30);
  fVar14 = (float10)(**(code **)(*piVar1 + 0x28))();
  uVar6 = cocos2d::Size::Size((Size *)&local_3c,(float)(fVar14 * (float10)*pfVar4),fVar15);
  pUVar13 = local_34;
  (**(code **)((int)local_40 + 0xac))(uVar6);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"white.png",9);
  // [seh] local_8 = 4;
  pSVar2 = cocos2d::Sprite::create((std::string *)local_2c);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)(pUVar13 + 0x42c) = pSVar2;
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
  local_30 = *(float *)(pUVar13 + 0x438);
  if (local_30 < 0.0) {
    local_30 = local_30 * -1.0;
  }
  iVar7 = *(int *)(pUVar13 + 0x444);
  iVar5 = **(int **)(pUVar13 + 0x42c);
  if (pUVar13[0x435] == (byte)0x0) {
    iVar8 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    local_40 = *(float *)(iVar8 + 4);
    local_38 = *(float *)(pUVar13 + 0x43c);
    iVar8 = *(int *)(pUVar13 + 0x440);
    pfVar4 = (float *)(**(code **)(**(int **)(local_34 + 0x42c) + 0xb0))();
    pUVar13 = local_34;
    (**(code **)(iVar5 + 0x3c))
              ((float)(iVar8 + -2) / *pfVar4,
               ((float)(iVar7 + -2) / local_40) * (local_30 / local_38) * 0.5);
    (**(code **)(**(int **)(pUVar13 + 0x42c) + 0x48))
              (0x3f800000,(float)(*(int *)(pUVar13 + 0x444) / 2));
    if (0.0 <= *(float *)(pUVar13 + 0x438)) {
      // [seh] local_8 = 7;
      goto LAB_00565120;
    }
    if (*(float *)(pUVar13 + 0x438) < 0.0) {
      local_48 = 0;
      local_44 = 0x3f800000;
      // [seh] local_8 = 8;
      puVar12 = &local_48;
      goto LAB_0056525a;
    }
  }
  else {
    iVar3 = (**(code **)(**(int **)(pUVar13 + 0x428) + 0xb0))();
    iVar8 = *(int *)(pUVar13 + 0x440);
    local_40 = *(float *)(iVar3 + 4);
    pfVar4 = (float *)(**(code **)(**(int **)(local_34 + 0x42c) + 0xb0))();
    pUVar13 = local_34;
    (**(code **)(iVar5 + 0x3c))
              (((float)(iVar8 + -2) / *pfVar4) * (local_30 / *(float *)(local_34 + 0x43c)) * 0.5,
               (float)(iVar7 + -2) / local_40);
    (**(code **)(**(int **)(pUVar13 + 0x42c) + 0x48))
              ((float)(*(int *)(pUVar13 + 0x440) / 2),0x3f800000);
    if (*(float *)(pUVar13 + 0x438) < 0.0) {
      if (0.0 <= *(float *)(pUVar13 + 0x438)) goto LAB_00565285;
      local_3c = 0x3f800000;
      local_38 = 0.0;
      // [seh] local_8 = 6;
      puVar12 = &local_3c;
LAB_0056525a:
      (**(code **)(**(int **)(pUVar13 + 0x42c) + 0xa0))(puVar12);
      pUVar9 = pUVar13 + 0x44e;
    }
    else {
      // [seh] local_8 = 5;
LAB_00565120:
      local_38 = 0.0;
      local_3c = 0;
      (**(code **)(**(int **)(pUVar13 + 0x42c) + 0xa0))(&local_3c);
      pUVar9 = pUVar13 + 1099;
    }
    // [seh] local_8 = 0xffffffff;
    (**(code **)(**(int **)(pUVar13 + 0x42c) + 0x25c))(pUVar9);
  }
LAB_00565285:
  (**(code **)(*(int *)pUVar13 + 0x10c))(*(int *)(pUVar13 + 0x42c));
  (**(code **)(**(int **)(pUVar13 + 0x42c) + 0xb4))(*(float *)(pUVar13 + 0x438) != 0.0);
  **(undefined1 **)(pUVar13 + 0x288) = 1;
LAB_005652c7:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
