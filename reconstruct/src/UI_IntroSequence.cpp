// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_IntroSequence::cleanupRender(UI_IntroSequence *this)
void UI_IntroSequence::cleanupRender()

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)((char *)this + 0x434);
  uVar1 = (uint)((int)*(int **)((char *)this + 0x438) + (3 - (int)piVar2)) >> 2;
  uVar3 = 0;
  if (*(int **)((char *)this + 0x438) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)((char *)this + 0x438) = *(undefined4 *)((char *)this + 0x434);
  uVar3 = 0;
  piVar2 = *(int **)((char *)this + 0x428);
  uVar1 = (uint)((int)*(int **)((char *)this + 0x42c) + (3 - (int)piVar2)) >> 2;
  if (*(int **)((char *)this + 0x42c) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)((char *)this + 0x42c) = *(undefined4 *)((char *)this + 0x428);
  return;
}


// Ghidra: void __thiscall UI_IntroSequence::render(UI_IntroSequence *this)
void UI_IntroSequence::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  AnimationFrames **ppAVar2;
  Sprite *pSVar3;
  UIText *pUVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 uStack_74;
  char *pcVar7;
  uint uVar8;
  AnimationFrames *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca8e3;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  iVar1 = *(int *)((char *)this + 0x448);
  local_30 = (AnimationFrames *)0x0;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar8 = 0xc;
      pcVar7 = "Logo_505.png";
    }
    else if (iVar1 == 2) {
      uVar8 = 0xd;
      pcVar7 = "Logo_SNSW.png";
    }
    else {
      if (iVar1 != 3) goto LAB_0056edd7;
      uVar8 = 0xb;
      pcVar7 = "Logo_FE.png";
    }
    ghidra::str::assign((std::string *)&stack0xffffff9c,pcVar7,uVar8);
    pSVar3 = loadSprite();
    local_30 = (AnimationFrames *)pSVar3;
    if (*(int *)((char *)this + 0x44c) == 0) {
      (**(code **)(*(int *)pSVar3 + 0x244))();
    }
    else if (*(int *)((char *)this + 0x44c) == 2) {
      (**(code **)(*(int *)pSVar3 + 0x244))();
    }
    else {
      (**(code **)(*(int *)pSVar3 + 0x244))();
    }
    // [seh] local_8 = 3;
    (**(code **)(*(int *)pSVar3 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(*(int *)pSVar3 + 0x48))();
    (**(code **)(*(int *)this + 0x10c))();
    ppAVar2 = *(AnimationFrames ***)((char *)this + 0x438);
    if (*(AnimationFrames ***)((char *)this + 0x43c) == ppAVar2) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x434),ppAVar2,&local_30);
    }
    else {
      *ppAVar2 = (AnimationFrames *)pSVar3;
      *(int *)((char *)this + 0x438) = *(int *)((char *)this + 0x438) + 4;
    }
    goto LAB_0056edd7;
  }
  g_gameLogic[4] = (byte)0x1;
  ghidra::str::assign((std::string *)&stack0xffffff9c,"FELogo_Lores.png",0x10);
  pSVar3 = loadSprite();
  // [seh] local_8 = 0;
  local_30 = (AnimationFrames *)pSVar3;
  (**(code **)(*(int *)pSVar3 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar3 + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  ppAVar2 = *(AnimationFrames ***)((char *)this + 0x438);
  if (*(AnimationFrames ***)((char *)this + 0x43c) == ppAVar2) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x434),ppAVar2,&local_30);
  }
  else {
    *ppAVar2 = (AnimationFrames *)pSVar3;
    *(int *)((char *)this + 0x438) = *(int *)((char *)this + 0x438) + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = (AnimationFrames *)(1.0 - *(float *)((char *)this + 0x440) / 10.0);
  // [seh] local_8 = 1;
  ghidra::str::assign((std::string *)local_2c,"`2Flat Earth Modular BIOS v6.00PG\n",0x22)
  ;
  ghidra::str::append
            ((std::string *)local_2c,"(C) 2019 by Flat Earth Games\n\n\n\n",0x20);
  ghidra::str::append
            ((std::string *)local_2c,"Main Processor : PurchaseTech 80386 40Mhz\n\n",0x2b);
  if ((float)local_30 < 0.4) {
    if (0.3 <= (float)local_30) {
      ghidra::str::append
                ((std::string *)local_2c,"Memory Testing : `04096kB/4096kB OK\n\n",0x25);
      uVar8 = 0x25;
      pcVar7 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056eb9e;
    }
    if (0.28 <= (float)local_30) {
      ghidra::str::append
                ((std::string *)local_2c,"Memory Testing : 3072kB/4096kB\n\n",0x20);
      uVar8 = 0x25;
      pcVar7 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056eb9e;
    }
    if (0.26 <= (float)local_30) {
      ghidra::str::append
                ((std::string *)local_2c,"Memory Testing : 2048kB/4096kB\n\n",0x20);
      uVar8 = 0x25;
      pcVar7 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056eb9e;
    }
    if (0.24 <= (float)local_30) {
      ghidra::str::append
                ((std::string *)local_2c,"Memory Testing : 1024kB/4096kB\n\n",0x20);
      uVar8 = 0x25;
      pcVar7 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056eb9e;
    }
    if (0.2 <= (float)local_30) {
      uVar8 = 0x1d;
      pcVar7 = "Memory Testing : 0kB/4096kB\n\n";
      goto LAB_0056eb9e;
    }
  }
  else {
    ghidra::str::append
              ((std::string *)local_2c,"Memory Testing : `04096kB/4096kB OK\n\n",0x25);
    ghidra::str::append
              ((std::string *)local_2c,"`0PurchaseTech AVOnChip(R) Ver 8.60\n\n",0x25);
    ghidra::str::append
              ((std::string *)local_2c,
               "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n`2Press `0DEL`2 to enter SETUP, `0ALT+F2`2 to enter OBJFLASH\n"
               ,0x4d);
    uVar8 = 0x24;
    pcVar7 = "`223/06/2017-i902-FL183500-8A3410-00";
LAB_0056eb9e:
    ghidra::str::append((std::string *)local_2c,pcVar7,uVar8);
  }
  ghidra::str::ctor((std::string *)&uStack_74,(std::string *)local_2c);
  pUVar4 = UIText::create(0);
  // [seh] local_8._0_1_ = 2;
  local_30 = (AnimationFrames *)pUVar4;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)pUVar4 + 0x48))();
  ppAVar2 = *(AnimationFrames ***)((char *)this + 0x42c);
  if (*(AnimationFrames ***)((char *)this + 0x430) == ppAVar2) {
    uStack_74 = 0x56ec45;
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x428),ppAVar2,&local_30);
  }
  else {
    *ppAVar2 = (AnimationFrames *)pUVar4;
    *(int *)((char *)this + 0x42c) = *(int *)((char *)this + 0x42c) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
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
LAB_0056edd7:
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_IntroSequence::specialDataCheckFunction(UI_IntroSequence *this,float param_1)
void UI_IntroSequence::specialDataCheckFunction(float param_1)

{
  GameLogic *pGVar1;
  SoundEngine *this_00;
  PresentationInterface *this_01;
  float unaff_ESI;
  float fVar2;
  int iVar3;
  Sound SVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(float *)((char *)this + 0x440) <= -1.0) {
    g_gameLogic[4] = (byte)0x0;
    if ((*(int *)((char *)this + 0x278) != 0) &&
       (iVar3 = *(int *)(*(int *)((char *)this + 0x278) + 300), iVar3 != 0)) {
      *(undefined1 *)(iVar3 + 5) = 0;
    }
    iVar3 = (**(code **)(*(int *)this + 0x124))();
    if (0 < iVar3) {
      (**(code **)(*(int *)this + 0x290))();
    }
    return;
  }
  fVar2 = *(float *)((char *)this + 0x440) - param_1;
  *(float *)((char *)this + 0x440) = fVar2;
  if (0.0 < fVar2) goto LAB_0056ef37;
  iVar3 = *(int *)((char *)this + 0x448);
  *(undefined1 **)((char *)this + 0x440) = &DAT_bf800000;
  pGVar1 = g_gameLogic;
  if (iVar3 == 3) {
    if (*(int *)((char *)this + 0x44c) == 2) {
      fVar2 = 1.0;
      bVar7 = true;
      bVar6 = false;
      iVar5 = -1;
      SVar4 = 0x28;
      iVar3 = 6;
      this_00 = ghidra::any_singleton();
      (this_00)->addSound(iVar3, SVar4, iVar5, bVar6, bVar7, fVar2);
      iVar3 = -1;
      this_01 = ghidra::any_singleton();
      (this_01)->moveToCameraPos(iVar3, unaff_ESI);
      *(undefined4 *)((char *)this + 0x448) = 0;
      *(undefined4 *)((char *)this + 0x440) = 0x41200000;
      *(undefined4 *)((char *)this + 0x444) = 0x41200000;
      goto LAB_0056ef37;
    }
  }
  else if ((iVar3 != 1) && (iVar3 != 2)) {
    if (iVar3 == 0) {
      g_gameLogic[0x78] = (byte)0x0;
      *(undefined4 *)((char *)this + 0x44c) = 0;
      *(undefined4 *)((char *)this + 0x448) = 4;
      pGVar1[5] = (byte)0x0;
    }
    goto LAB_0056ef37;
  }
  if (*(int *)((char *)this + 0x44c) == 2) {
    *(undefined4 *)((char *)this + 0x44c) = 0;
    *(int *)((char *)this + 0x448) = iVar3 + 1;
LAB_0056ef23:
    *(undefined4 *)((char *)this + 0x440) = 0x3fc00000;
  }
  else {
    iVar3 = *(int *)((char *)this + 0x44c) + 1;
    *(int *)((char *)this + 0x44c) = iVar3;
    if (iVar3 == 0) goto LAB_0056ef23;
    if (iVar3 == 1) {
      *(undefined4 *)((char *)this + 0x440) = 0x40000000;
    }
    else if (iVar3 == 2) goto LAB_0056ef23;
  }
  *(undefined4 *)((char *)this + 0x444) = 0x3fc00000;
LAB_0056ef37:
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x278) + 300) + 5) = 1;
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// Ghidra: bool __thiscall UI_IntroSequence::keyUp(UI_IntroSequence *this,KeyCode param_1)
bool UI_IntroSequence::keyUp(KeyCode param_1)

{
  if ((-1.0 < *(float *)((char *)this + 0x440)) &&
     ((((param_1 == 6 || (param_1 == 0x3b)) || (param_1 == 10)) ||
      ((param_1 == 0xa4 || (param_1 == 0x23)))))) {
    *(undefined1 **)((char *)this + 0x440) = &DAT_bf800000;
    ((GameLogic *)this)->skipIntroSequence();
    (**(code **)(*(int *)this + 0x294))();
    return true;
  }
  return false;
}
