// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_HelmControl::cleanupRender(UI_HelmControl *this)
void UI_HelmControl::cleanupRender()

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
  if (*(int **)((char *)this + 0x434) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x434) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x434) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_HelmControl::render(UI_HelmControl *this)
void UI_HelmControl::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  std::string *pbVar2;
  Sprite *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  double dVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca5f4;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))(local_14);
  pbVar2 = (std::string *)
           strUsingArgs((char *)local_2c,"%c_Helm_Background.png",(int)(char)g_gameData[0xd4]);
  // [seh] local_8 = 0;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)((char *)this + 0x428) = pSVar3;
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
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  // [seh] local_8 = 1;
  (**(code **)(**(int **)((char *)this + 0x428) + 0xa0))(&local_34);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x428) + 0x48))(0x42200000,0x42200000);
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)((char *)this + 0x428));
  pbVar2 = (std::string *)
           strUsingArgs((char *)local_2c,"%c_Helm_Heading.png",(int)(char)g_gameData[0xd4]);
  // [seh] local_8 = 2;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)((char *)this + 0x42c) = pSVar3;
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
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  // [seh] local_8 = 3;
  (**(code **)(**(int **)((char *)this + 0x42c) + 0xa0))(&local_34);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x42c) + 0x48))(0x42200000,0x42200000);
  (**(code **)(**(int **)((char *)this + 0x42c) + 0xbc))((float)*(double *)((char *)this + 0x440));
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)((char *)this + 0x42c));
  pbVar2 = (std::string *)
           strUsingArgs((char *)local_2c,"%c_Helm_MoveAngle.png",(int)(char)g_gameData[0xd4]);
  // [seh] local_8 = 4;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)((char *)this + 0x430) = pSVar3;
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
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  // [seh] local_8 = 5;
  (**(code **)(**(int **)((char *)this + 0x430) + 0xa0))(&local_34);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x430) + 0x48))(0x42200000,0x42200000);
  if (*(double *)((char *)this + 0x438) == -1.0) {
    (**(code **)(**(int **)((char *)this + 0x430) + 0xb4))(0);
  }
  else {
    (**(code **)(**(int **)((char *)this + 0x430) + 0xbc))((float)*(double *)((char *)this + 0x438));
  }
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)((char *)this + 0x430));
  pbVar2 = (std::string *)
           strUsingArgs((char *)local_2c,"%c_Helm_Selector.png",(int)(char)g_gameData[0xd4]);
  // [seh] local_8 = 6;
  pSVar3 = cocos2d::Sprite::create(pbVar2);
  // [seh] local_8 = 0xffffffff;
  *(Sprite **)((char *)this + 0x434) = pSVar3;
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
  local_3c = 0x3f000000;
  local_38 = 0x3f000000;
  // [seh] local_8 = 7;
  (**(code **)(**(int **)((char *)this + 0x434) + 0xa0))(&local_3c);
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x434) + 0x48))(0x42200000,0x42200000);
  if (*(int *)(g_gameData + 0xd0) == 0) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = (double)*(float *)(*(int *)(g_gameData + 0xd0) + 0x128);
  }
  if ((*(double *)((char *)this + 0x448) == dVar7) || (*(double *)((char *)this + 0x448) == -1.0)) {
    (**(code **)(**(int **)((char *)this + 0x434) + 0xb4))(0);
  }
  else {
    (**(code **)(**(int **)((char *)this + 0x434) + 0xbc))((float)PresentationData::m_selectedHeading);
  }
  (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)((char *)this + 0x434));
  iVar1 = *(int *)this;
  uVar4 = (**(code **)(**(int **)((char *)this + 0x428) + 0xb0))();
  (**(code **)(iVar1 + 0xac))(uVar4);
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_HelmControl::specialDataCheckFunction(UI_HelmControl *this,float param_1)
void UI_HelmControl::specialDataCheckFunction(float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    dVar3 = ShipNumericalData::getMotionAngle(*(Ship **)(g_gameData + 0xd0),0);
    dVar1 = PresentationData::m_selectedHeading;
    if (*(int *)(g_gameData + 0xd0) == 0) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = (double)*(float *)(*(int *)(g_gameData + 0xd0) + 0x120);
    }
    if (((dVar3 != *(double *)((char *)this + 0x438)) || (dVar2 != *(double *)((char *)this + 0x440))) ||
       (PresentationData::m_selectedHeading != *(double *)((char *)this + 0x448))) {
      *(double *)((char *)this + 0x440) = dVar2;
      *(double *)((char *)this + 0x438) = dVar3;
      *(double *)((char *)this + 0x448) = dVar1;
      (**(code **)(*(int *)this + 0x294))();
    }
  }
  return;
}


// Ghidra: void __thiscall UI_HelmControl::mouseUp(UI_HelmControl *this,float param_2,float param_3)
void UI_HelmControl::mouseUp(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c45e9;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  fVar1 = (param_3 - 40.0) * -1.0;
  // [cookie] angleInDegreesFrom(0,0,param_2 - 40.0,fVar1,___security_cookie ^ (uint)&stack0xfffffffc);
  PresentationData::m_selectedHeading = (double)fVar1;
  debugPrint("DETAIL","angle selected = %f",PresentationData::m_selectedHeading);
  (**(code **)(*(int *)this + 0x294))();
  // [seh] ExceptionList = local_10;
  return;
}
