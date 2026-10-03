// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_ComponentStorage::cleanupRender(UI_ComponentStorage *this)
void UI_ComponentStorage::cleanupRender()

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x444);
  if (*(int *)((char *)this + 0x448) - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((char *)this + 0x444) + uVar2 * 4) + 0x138))(1);
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x444);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x448) - iVar1 >> 2));
  }
  *(int *)((char *)this + 0x448) = iVar1;
  return;
}


// Ghidra: basic_string<> * __thiscall UI_ComponentStorage::getDragLook (UI_ComponentStorage *this,basic_string<> *param_2,undefined4 param_3,undefined4 param_4)
std::string * UI_ComponentStorage::getDragLook(std::string * param_2, undefined4 param_3, undefined4 param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ca279;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar2 = getElement(this,param_3,param_4);
  debugPrint("DETAIL","ELEMENT: %d",iVar2,uVar1);
  if (iVar2 == -1) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = (std::string)0x0;
    ghidra::str::assign(param_2,"",0);
    // [seh] ExceptionList = local_10;
    return param_2;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) +
                           iVar2 * 4) + 4);
  puVar3 = (undefined4 *)(iVar2 + 0x68);
  if (0xf < *(uint *)(iVar2 + 0x7c)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  strUsingArgs((char *)param_2,"%s_Icon.png",puVar3);
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: int __thiscall UI_ComponentStorage::getDragValue(UI_ComponentStorage *this,undefined4 param_2,undefined4 param_3)
int UI_ComponentStorage::getDragValue(undefined4 param_2, undefined4 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c45e9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar2 = getElement(this,param_2,param_3);
  debugPrint("DETAIL","ELEMENT: %d",iVar2,uVar1);
  // [seh] ExceptionList = local_10;
  return iVar2;
}


// Ghidra: void __thiscall UI_ComponentStorage::dragOnto(undefined4 param_1_00,int param_1,int param_2)
void UI_ComponentStorage::dragOnto(undefined4 param_1_00, int param_1, int param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  Ship *pSVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  NetworkData *this;
  NetworkData *this_00;
  undefined4 unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  puVar8 = &DAT_005ca2a9;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uVar9 = 0;
  pvVar7 = ExceptionList;
  if ((param_1 == 0x65) && (param_2 != -1)) {
    pSVar1 = *(Ship **)(g_gameData + 0xd0);
    iVar2 = *(int *)(pSVar1 + 0x1f8);
    if ((uint)(*(int *)(iVar2 + 0x48) - *(int *)(iVar2 + 0x44) >> 2) < *(uint *)(iVar2 + 4)) {
      if (99 < param_2) {
        if (g_gameLogic[0x71] != (byte)0x0) {
          // [seh] ExceptionList = &stack0xfffffff0;
          ghidra::any_singleton();
          NetworkData::sendShipCommand
                    (this,0x80,(double)((ulonglong)uVar4 << 0x20),(double)CONCAT44(pvVar7,unaff_ESI)
                     ,(double)CONCAT44(uVar9,puVar8));
          // [seh] ExceptionList = pvVar7;
          return;
        }
        // [seh] ExceptionList = &stack0xfffffff0;
        ShipInterface::doEngUnmountComponent(pSVar1,param_2,0,0);
        // [seh] ExceptionList = pvVar7;
        return;
      }
      if (g_gameLogic[0x71] == (byte)0x0) {
        // [seh] ExceptionList = &stack0xfffffff0;
        ShipInterface::doEngUnmountComponent(pSVar1,param_2,0,0);
      }
      else {
        // [seh] ExceptionList = &stack0xfffffff0;
        ghidra::any_singleton();
        NetworkData::sendShipCommand
                  (this_00,0x80,(double)((ulonglong)uVar4 << 0x20),
                   (double)CONCAT44(pvVar7,unaff_ESI),(double)CONCAT44(uVar9,puVar8));
      }
      pcVar6 = "Component dragged.";
      pcVar5 = "DETAIL";
      puVar3 = ExceptionList;
    }
    else {
      pcVar6 = "component hold full.";
      pcVar5 = "ERROR";
      puVar3 = &stack0xfffffff0;
    }
    // [seh] ExceptionList = puVar3;
    debugPrint(pcVar5,pcVar6);
  }
  // [seh] ExceptionList = pvVar7;
  return;
}


// Ghidra: void __thiscall UI_ComponentStorage::specialDataCheckFunction(UI_ComponentStorage *this,float param_1)
void UI_ComponentStorage::specialDataCheckFunction(float param_1)

{
  ghidra::vector *this_00;
  int *piVar1;
  AnimationFrames **ppAVar2;
  AnimationFrames *pAVar3;
  GameData *pGVar4;
  int iVar5;
  uint uVar6;
  AnimationFrames *local_14;
  int local_10;
  AnimationFrames *local_c;
  UI_ComponentStorage *local_8;
  
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    local_8 = this;
    if (*(int *)((char *)this + 0x434) != **(int **)((char *)this + 0x438)) {
      *(int *)((char *)this + 0x434) = **(int **)((char *)this + 0x438);
      (**(code **)(*(int *)this + 0x294))();
    }
    this_00 = (ghidra::vector *)((char *)this + 0x428);
    iVar5 = *(int *)this_00;
    local_14 = (AnimationFrames *)(*(int *)((char *)this + 0x42c) - iVar5 >> 2);
    local_10 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44);
    local_c = (AnimationFrames *)
              (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) - local_10 >> 2);
    if (local_14 == local_c) {
      pAVar3 = (AnimationFrames *)0x0;
      if (local_c == (AnimationFrames *)0x0) {
        return;
      }
      while ((piVar1 = *(int **)(iVar5 + (int)pAVar3 * 4),
             *piVar1 == **(int **)(*(int *)(local_10 + (int)pAVar3 * 4) + 4) &&
             ((float)piVar1[1] ==
              **(float **)
                (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) + (int)pAVar3 * 4)))
            ) {
        pAVar3 = pAVar3 + 1;
        if (local_c <= pAVar3) {
          return;
        }
      }
    }
    uVar6 = 0;
    if (local_14 != (AnimationFrames *)0x0) {
      do {
        operator_delete(*(void **)(*(int *)this_00 + uVar6 * 4),(nothrow_t *)0x8);
        uVar6 = uVar6 + 1;
        iVar5 = *(int *)this_00;
      } while (uVar6 < (uint)(*(int *)((char *)this + 0x42c) - iVar5 >> 2));
    }
    uVar6 = 0;
    *(int *)(local_8 + 0x42c) = iVar5;
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) -
        *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) >> 2 != 0) {
      do {
        local_14 = operator_new(8);
        pGVar4 = g_gameData;
        *(undefined8 *)local_14 = 0;
        *(undefined4 *)local_14 =
             **(undefined4 **)
               (*(int *)(*(int *)(*(int *)(*(int *)(pGVar4 + 0xd0) + 0x1f8) + 0x44) + uVar6 * 4) + 4
               );
        *(undefined4 *)(local_14 + 4) =
             **(undefined4 **)
               (*(int *)(*(int *)(*(int *)(pGVar4 + 0xd0) + 0x1f8) + 0x44) + uVar6 * 4);
        ppAVar2 = *(AnimationFrames ***)((char *)this + 0x42c);
        if (*(AnimationFrames ***)((char *)this + 0x430) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar2,&local_14);
          pGVar4 = g_gameData;
        }
        else {
          *ppAVar2 = local_14;
          *(int *)((char *)this + 0x42c) = *(int *)((char *)this + 0x42c) + 4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(*(int *)(*(int *)(*(int *)(pGVar4 + 0xd0) + 0x1f8) + 0x48) -
                              *(int *)(*(int *)(*(int *)(pGVar4 + 0xd0) + 0x1f8) + 0x44) >> 2));
    }
    (**(code **)(*(int *)local_8 + 0x294))();
  }
  return;
}


// Ghidra: void __thiscall UI_ComponentStorage::render(UI_ComponentStorage *this)
void UI_ComponentStorage::render()

{
  char stack0xffffff94[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  int iVar1;
  AnimationFrames **ppAVar2;
  AnimationFrames *pAVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_80;
  AnimationFrames *pAStack_7c;
  undefined4 uStack_78;
  AnimationFrames *local_2c;
  int local_28;
  Size local_24 [4];
  float *local_20;
  uint local_1c;
  AnimationFrames *local_18;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca2eb;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  local_1c = 0xffffffff;
  *(int *)((char *)this + 0x43c) = *(int *)((char *)this + 0x2a0) / 0x28;
  *(int *)((char *)this + 0x440) = *(int *)((char *)this + 0x2a4) / 0x28;
  uStack_78 = 0x566d11;
  ghidra::str::assign((std::string *)&stack0xffffff94,"invmode",7);
  bVar4 = ((Widget *)((char *)this + 0x290))->getOptionAsBool();
  uVar8 = **(uint **)((char *)this + 0x438);
  uVar9 = uVar8;
  if ((!bVar4) && (uVar9 = local_1c, 99 < (int)uVar8)) {
    uVar9 = uVar8 - 100;
  }
  local_1c = uVar9;
  iVar5 = *(int *)((char *)this + 0x440);
  iVar7 = *(int *)(g_gameData + 0xd0);
  uVar8 = *(uint *)(iVar7 + 0x1e0);
  uVar9 = uVar8;
  if ((int)uVar8 < (int)(*(int *)((char *)this + 0x43c) * iVar5 + uVar8)) {
    do {
      iVar1 = *(int *)(*(int *)(iVar7 + 0x1f8) + 0x44);
      if ((uint)(*(int *)(*(int *)(iVar7 + 0x1f8) + 0x48) - iVar1 >> 2) <= uVar8) break;
      local_20 = *(float **)(iVar1 + uVar8 * 4);
      local_28 = (int)(uVar8 - uVar9) / iVar5;
      local_14 = (uVar8 - uVar9) - iVar5 * local_28;
      if ((float)*(int *)((int)local_20[1] + 0x10) <= *local_20) {
        if ((float)*(int *)((int)local_20[1] + 0x14) <= *local_20) {
          uStack_78 = 0x566e1b;
          ghidra::str::assign((std::string *)&stack0xffffff94,"Tray_Undamaged.png",0x12);
          local_18 = (AnimationFrames *)loadSprite();
        }
        else {
          uStack_78 = 0x566e03;
          ghidra::str::assign((std::string *)&stack0xffffff94,"Tray_Damaged.png",0x10);
          local_18 = (AnimationFrames *)loadSprite();
        }
      }
      else {
        uStack_78 = 0x566dcb;
        ghidra::str::assign((std::string *)&stack0xffffff94,"Tray_Destroyed.png",0x12);
        local_18 = (AnimationFrames *)loadSprite();
      }
      pAVar3 = local_18;
      // [seh] local_8 = 0;
      (**(code **)(*(int *)local_18 + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      local_28 = local_28 * 0x28;
      (**(code **)(*(int *)pAVar3 + 0x48))();
      (**(code **)(*(int *)this + 0x108))();
      ppAVar2 = *(AnimationFrames ***)((char *)this + 0x448);
      this_00 = (ghidra::vector *)((char *)this + 0x444);
      local_2c = pAVar3;
      if (*(AnimationFrames ***)((char *)this + 0x44c) == ppAVar2) {
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar2,&local_2c);
      }
      else {
        *ppAVar2 = local_18;
        *(int *)((char *)this + 0x448) = *(int *)((char *)this + 0x448) + 4;
      }
      if (uVar8 == local_1c) {
        uStack_80 = uStack_80 & 0xffffff00;
        ghidra::str::assign((std::string *)&uStack_80,"Tray_Selected.png",0x11);
        local_18 = (AnimationFrames *)loadSprite();
        // [seh] local_8 = 1;
        (**(code **)(*(int *)local_18 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        uStack_78 = 0x566f61;
        (**(code **)(*(int *)local_18 + 0x48))();
        uStack_78 = 5;
        pAStack_7c = local_18;
        uStack_80 = 0x566f70;
        (**(code **)(*(int *)this + 0x108))();
        ppAVar2 = *(AnimationFrames ***)((char *)this + 0x448);
        local_2c = local_18;
        if (*(AnimationFrames ***)((char *)this + 0x44c) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar2,&local_2c);
        }
        else {
          *ppAVar2 = local_18;
          *(int *)((char *)this + 0x448) = *(int *)((char *)this + 0x448) + 4;
        }
      }
      puVar6 = (undefined4 *)((int)local_20[1] + 0x68);
      if (0xf < *(uint *)((int)local_20[1] + 0x7c)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      strUsingArgs((char *)&uStack_80,"%s_Icon.png",puVar6);
      local_18 = (AnimationFrames *)loadSprite();
      // [seh] local_8 = 2;
      (**(code **)(*(int *)local_18 + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      uStack_78 = 0x567029;
      (**(code **)(*(int *)local_18 + 0x48))();
      uStack_78 = 4;
      pAStack_7c = local_18;
      uStack_80 = 0x567038;
      (**(code **)(*(int *)this + 0x108))();
      ppAVar2 = *(AnimationFrames ***)((char *)this + 0x448);
      local_2c = local_18;
      if (*(AnimationFrames ***)((char *)this + 0x44c) == ppAVar2) {
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar2,&local_2c);
      }
      else {
        *ppAVar2 = local_18;
        *(int *)((char *)this + 0x448) = *(int *)((char *)this + 0x448) + 4;
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x440);
      iVar7 = *(int *)(g_gameData + 0xd0);
      uVar9 = *(uint *)(iVar7 + 0x1e0);
    } while ((int)uVar8 < (int)(*(int *)((char *)this + 0x43c) * iVar5 + uVar9));
  }
  iVar5 = *(int *)this;
  cocos2d::Size::Size(local_24,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar5 + 0xac))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_ComponentStorage::mouseUp(UI_ComponentStorage *this,float param_2,float param_3)
void UI_ComponentStorage::mouseUp(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Ship *pSVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  NetworkData *pNVar5;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *extraout_ECX_01;
  NetworkData *extraout_ECX_02;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  NetworkData *pNVar6;
  undefined4 unaff_EDI;
  std::string abStack_3c [4];
  undefined4 uStack_38;
  int iVar7;
  UI_ComponentStorage *pUVar8;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ca319;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pUVar8 = this;
  iVar4 = (**(code **)(*(int *)this + 0xb0))();
  iVar7 = *(int *)((char *)this + 0x440);
  pNVar5 = (NetworkData *)(int)((float)iVar7 - (*(float *)(iVar4 + 4) - param_3) / 40.0);
  pNVar6 = pNVar5 + iVar7 * (int)(param_2 / 40.0);
  if (((int)pNVar6 < 0) || (*(int *)((char *)this + 0x43c) * iVar7 <= (int)pNVar6)) {
    if (g_gameLogic[0x71] == (byte)0x0) {
      // [seh] ExceptionList = local_10;
      return;
    }
    if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(1);
      pNVar5 = extraout_ECX_02;
    }
  }
  else {
    pSVar1 = *(Ship **)(g_gameData + 0xd0);
    pNVar5 = *(NetworkData **)(pSVar1 + 0x1f8);
    if ((NetworkData *)(*(int *)(pNVar5 + 0x48) - *(int *)(pNVar5 + 0x44) >> 2) <=
        pNVar6 + *(int *)(pSVar1 + 0x1e0)) {
      if (g_gameLogic[0x71] == (byte)0x0) {
        uStack_38 = 0x5671e6;
        ShipInterface::doEngSelectComponent(pSVar1,-1,0,0);
      }
      else {
        if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
          ghidra::Singleton<void>::instance = operator_new(1);
          pNVar5 = extraout_ECX;
        }
        NetworkData::sendShipCommand
                  (pNVar5,0x7d,(double)((ulonglong)uVar3 << 0x20),
                   (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(pUVar8,unaff_EBX));
      }
      debugPrint("DETAIL","selection error");
      // [seh] ExceptionList = local_10;
      return;
    }
    abStack_3c[0] = (std::string)0x0;
    ghidra::str::assign(abStack_3c,"invmode",7);
    bVar2 = ((Widget *)((char *)this + 0x290))->getOptionAsBool();
    if (bVar2) {
      if (g_gameLogic[0x71] == (byte)0x0) {
        uStack_38 = 0x567282;
        ShipInterface::doSelectComponent(*(Ship **)(g_gameData + 0xd0),(int)pNVar6,0,0);
        // [seh] ExceptionList = local_10;
        return;
      }
      ghidra::any_singleton();
      iVar7 = 0x83;
      pNVar5 = extraout_ECX_00;
      goto LAB_00567323;
    }
    if (g_gameLogic[0x71] == (byte)0x0) {
      uStack_38 = 0x5672d4;
      ShipInterface::doEngSelectComponent(*(Ship **)(g_gameData + 0xd0),(int)(pNVar6 + 100),0,0);
      // [seh] ExceptionList = local_10;
      return;
    }
    ghidra::any_singleton();
    pNVar5 = extraout_ECX_01;
  }
  iVar7 = 0x7d;
LAB_00567323:
  NetworkData::sendShipCommand
            (pNVar5,iVar7,(double)((ulonglong)uVar3 << 0x20),(double)CONCAT44(unaff_ESI,unaff_EDI),
             (double)CONCAT44(pUVar8,unaff_EBX));
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __thiscall UI_ComponentStorage::getElement(UI_ComponentStorage *this,float param_2,float param_3)
int UI_ComponentStorage::getElement(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  uint uVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c91f9;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  // [cookie] iVar2 = (**(code **)(*(int *)this + 0xb0))(___security_cookie ^ (uint)&stack0xfffffffc);
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  uVar3 = ((int)((float)*(int *)((char *)this + 0x440) - (*(float *)(iVar2 + 4) - param_3) / 40.0) -
          (int)(param_2 / -40.0) * *(int *)((char *)this + 0x440)) +
          *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e0);
  if ((uint)(*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2) <= uVar3) {
    uVar3 = 0xffffffff;
  }
  // [seh] ExceptionList = local_10;
  return uVar3;
}
