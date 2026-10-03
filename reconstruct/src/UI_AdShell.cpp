// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_AdShell::cleanupRender(UI_AdShell *this)
void UI_AdShell::cleanupRender()

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int **)((char *)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x444) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x444) = 0;
  }
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
  return;
}


// Ghidra: void __thiscall UI_AdShell::render(UI_AdShell *this)
void UI_AdShell::render()

{
  Sprite *pSVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_28;
  
  if (*(int *)((char *)this + 0x434) != 0) {
    ghidra::str::ctor
              ((std::string *)&uStack_28,(std::string *)(*(int *)((char *)this + 0x434) + 4));
    pSVar1 = loadSprite();
    *(Sprite **)((char *)this + 0x444) = pSVar1;
    iVar2 = rand();
    if (iVar2 % 6 == 0) {
      (**(code **)(**(int **)((char *)this + 0x444) + 0x244))();
    }
    else {
      (**(code **)(**(int **)((char *)this + 0x444) + 0x244))();
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      *(undefined4 *)((char *)this + 0x430) = 2;
      *(float *)((char *)this + 0x42c) = (float)(int)(uVar3 + 5);
    }
    (**(code **)(*(int *)this + 0x10c))();
    uStack_28 = 0x56469f;
    debugPrint("DETAIL","Displying ad: %s");
    **(undefined1 **)((char *)this + 0x288) = 1;
  }
  return;
}


// Ghidra: void __thiscall UI_AdShell::specialDataCheckFunction(UI_AdShell *this,float param_1)
void UI_AdShell::specialDataCheckFunction(float param_1)

{
  GameData *pGVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 *puVar9;
  
  pGVar1 = g_gameData;
  iVar3 = *(int *)((char *)this + 0x430);
  if (iVar3 == 0) {
    iVar3 = *(int *)((char *)this + 0x428);
    puVar4 = *(undefined4 **)(g_gameData + 0x90);
    iVar2 = *(int *)(g_gameData + 0x94) - (int)puVar4 >> 2;
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else if (iVar2 == 1) {
      piVar5 = (int *)*puVar4;
    }
    else {
      piVar5 = (int *)0x0;
      iVar2 = 0;
      do {
        if (99 < iVar2) break;
        iVar6 = 0;
        iVar7 = *(int *)(pGVar1 + 0x94) - (int)puVar4 >> 2;
        if (0 < iVar7) {
          iVar6 = rand();
          puVar4 = *(undefined4 **)(pGVar1 + 0x90);
          iVar6 = iVar6 % iVar7 + 1;
        }
        piVar5 = (int *)0x0;
        if (*(int *)puVar4[iVar6 + -1] != iVar3) {
          piVar5 = (int *)puVar4[iVar6 + -1];
        }
        iVar2 = iVar2 + 1;
      } while (piVar5 == (int *)0x0);
    }
    *(int **)((char *)this + 0x434) = piVar5;
    *(int *)((char *)this + 0x428) = *piVar5;
    (**(code **)(*(int *)this + 0x294))();
    iVar3 = 1;
    puVar9 = (undefined1 *)0x40400000;
    *(undefined4 *)((char *)this + 0x42c) = 0x40400000;
    *(undefined4 *)((char *)this + 0x430) = 1;
  }
  else {
    puVar9 = *(undefined1 **)((char *)this + 0x42c);
    if ((float)puVar9 <= -1.0) goto LAB_005647d0;
  }
  puVar9 = (undefined1 *)((float)puVar9 - param_1);
  *(undefined1 **)((char *)this + 0x42c) = puVar9;
  if ((float)puVar9 <= 0.0) {
    *(undefined1 **)((char *)this + 0x42c) = &DAT_bf800000;
    puVar9 = &DAT_bf800000;
  }
LAB_005647d0:
  if (iVar3 == 1) {
    piVar5 = *(int **)((char *)this + 0x444);
    if ((float)puVar9 <= 0.0) {
      *(undefined4 *)((char *)this + 0x430) = 2;
      *(undefined4 *)((char *)this + 0x42c) = 0x41000000;
      (**(code **)(*piVar5 + 0x244))(0xff);
      **(undefined1 **)((char *)this + 0x288) = 1;
      return;
    }
    fVar8 = 1.0 - (float)puVar9 / 3.0;
  }
  else {
    if (iVar3 == 2) {
      if (0.0 < (float)puVar9) {
        return;
      }
      *(undefined4 *)((char *)this + 0x430) = 3;
      *(undefined4 *)((char *)this + 0x42c) = 0x40400000;
      return;
    }
    if (iVar3 != 3) {
      return;
    }
    piVar5 = *(int **)((char *)this + 0x444);
    if ((float)puVar9 <= 0.0) {
      *(undefined4 *)((char *)this + 0x430) = 0;
      *(undefined1 **)((char *)this + 0x42c) = &DAT_bf800000;
      (**(code **)(*piVar5 + 0x244))(0);
      return;
    }
    fVar8 = (float)puVar9 / 3.0;
  }
  (**(code **)(*piVar5 + 0x244))((int)(fVar8 * 255.0) & 0xff);
  **(undefined1 **)((char *)this + 0x288) = 1;
  return;
}
