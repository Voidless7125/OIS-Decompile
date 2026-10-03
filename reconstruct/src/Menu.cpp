// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Menu * __thiscall Menu::Menu(Menu *this,undefined4 param_1,void *param_3)
Menu::Menu(undefined4 param_1, void * param_3)

{
  char stack0x0000003c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000024[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  nothrow_t *pnVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  void *in_stack_0000003c;
  uint in_stack_00000050;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c5f17;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 2;
  cocos2d::Node::Node((Node *)this);
  *(undefined4 *)((char *)this + 0x278) = param_1;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 0x27c) = in_stack_00000020;
  *(undefined4 *)((char *)this + 0x290) = 0;
  *(undefined4 *)((char *)this + 0x294) = 0xf;
  ((char *)this)[0x280] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2a8) = 0;
  *(undefined4 *)((char *)this + 0x2ac) = 0xf;
  ((char *)this)[0x298] = (byte)0x0;
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor((std::string *)((char *)this + 0x2b0),(std::string *)&param_3);
  *(undefined4 *)((char *)this + 0x2d8) = 0;
  *(undefined4 *)((char *)this + 0x2dc) = 0xf;
  ((char *)this)[0x2c8] = (byte)0x0;
  // [seh] local_8._0_1_ = 7;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x2e0),(std::string *)&stack0x0000003c);
  // [seh] local_8 = CONCAT31(local_8._1_3_,8);
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x2f8),(std::string *)&stack0x00000024);
  *(undefined4 *)((char *)this + 0x310) = 0;
  *(undefined4 *)((char *)this + 0x314) = 0;
  *(undefined4 *)((char *)this + 0x318) = 0;
  *(undefined4 *)((char *)this + 0x31c) = 0;
  *(undefined4 *)((char *)this + 800) = 0;
  *(undefined4 *)((char *)this + 0x324) = 0;
  *(undefined4 *)((char *)this + 0x34c) = 0;
  *(undefined4 *)((char *)this + 0x374) = 0;
  if (0xf < in_stack_0000001c) {
    pnVar2 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar2 = (nothrow_t *)(in_stack_00000038 + 1);
    pvVar1 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_00000024 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  in_stack_00000034 = 0;
  in_stack_00000038 = 0xf;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000050) {
    pnVar2 = (nothrow_t *)(in_stack_00000050 + 1);
    pvVar1 = in_stack_0000003c;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)in_stack_0000003c + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000050 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000003c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Menu::~Menu(Menu *this)
Menu::~Menu()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  MenuItem *this_00;
  Menu *pMVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c5f40;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  puVar7 = *(undefined4 **)((char *)this + 0x31c);
  local_14 = 0;
  uVar6 = (uint)((int)*(undefined4 **)((char *)this + 800) + (3 - (int)puVar7)) >> 2;
  if (*(undefined4 **)((char *)this + 800) < puVar7) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    do {
      this_00 = (MenuItem *)*puVar7;
      if (this_00 != (MenuItem *)0x0) {
        (this_00)->~MenuItem();
        operator_delete(this_00,(nothrow_t *)0x68);
      }
      local_14 = local_14 + 1;
      puVar7 = puVar7 + 1;
    } while (local_14 != uVar6);
  }
  *(undefined4 *)((char *)this + 800) = *(undefined4 *)((char *)this + 0x31c);
  // [seh] local_8 = 0;
  pMVar1 = *(Menu **)((char *)this + 0x374);
  if (pMVar1 != (Menu *)0x0) {
    (**(code **)(*(int *)pMVar1 + 0x10))(pMVar1 != this + 0x350,uVar3);
    *(undefined4 *)((char *)this + 0x374) = 0;
  }
  // [seh] local_8 = 1;
  pMVar1 = *(Menu **)((char *)this + 0x34c);
  if (pMVar1 != (Menu *)0x0) {
    (**(code **)(*(int *)pMVar1 + 0x10))(pMVar1 != this + 0x328);
    *(undefined4 *)((char *)this + 0x34c) = 0;
  }
  pvVar2 = *(void **)((char *)this + 0x31c);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)((char *)this + 0x324) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
    *(undefined4 *)((char *)this + 0x31c) = 0;
    *(undefined4 *)((char *)this + 800) = 0;
    *(undefined4 *)((char *)this + 0x324) = 0;
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x310));
  uVar3 = *(uint *)((char *)this + 0x30c);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x2f8);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x308) = 0;
  *(undefined4 *)((char *)this + 0x30c) = 0xf;
  ((char *)this)[0x2f8] = (byte)0x0;
  uVar3 = *(uint *)((char *)this + 0x2f4);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x2e0);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x2f0) = 0;
  *(undefined4 *)((char *)this + 0x2f4) = 0xf;
  ((char *)this)[0x2e0] = (byte)0x0;
  uVar3 = *(uint *)((char *)this + 0x2dc);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x2c8);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x2d8) = 0;
  *(undefined4 *)((char *)this + 0x2dc) = 0xf;
  ((char *)this)[0x2c8] = (byte)0x0;
  uVar3 = *(uint *)((char *)this + 0x2c4);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x2b0);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x2c0) = 0;
  *(undefined4 *)((char *)this + 0x2c4) = 0xf;
  ((char *)this)[0x2b0] = (byte)0x0;
  uVar3 = *(uint *)((char *)this + 0x2ac);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x298);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x2a8) = 0;
  *(undefined4 *)((char *)this + 0x2ac) = 0xf;
  ((char *)this)[0x298] = (byte)0x0;
  uVar3 = *(uint *)((char *)this + 0x294);
  if (0xf < uVar3) {
    pvVar2 = *(void **)((char *)this + 0x280);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) {
LAB_0052bd41:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)((char *)this + 0x290) = 0;
  *(undefined4 *)((char *)this + 0x294) = 0xf;
  ((char *)this)[0x280] = (byte)0x0;
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Menu::removeAllItems(Menu *this)
void Menu::removeAllItems()

{
  MenuItem *this_00;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((char *)this + 0x31c);
  uVar2 = 0;
  uVar1 = (uint)((int)*(undefined4 **)((char *)this + 800) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)((char *)this + 800) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (MenuItem *)*puVar3;
      if (this_00 != (MenuItem *)0x0) {
        (this_00)->~MenuItem();
        operator_delete(this_00,(nothrow_t *)0x68);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)((char *)this + 800) = *(undefined4 *)((char *)this + 0x31c);
  return;
}


// Ghidra: bool __thiscall Menu::triggerValid(undefined4 param_1,void *param_2)
bool Menu::triggerValid(undefined4 param_1, void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  int iVar3;
  MenuManager *pMVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  uint unaff_EDI;
  uint in_stack_00000018;
  std::string abStack_48 [12];
  undefined4 uStack_3c;
  int local_20 [3];
  MenuManager *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c5f70;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_48,(std::string *)&param_2);
  splitStringBy();
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  uStack_3c = 0x52be2e;
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("menu",4,pcVar2,unaff_EDI);
  if (bVar1) {
    pcVar2 = (char *)(local_20[0] + 0x18);
    if (0xf < *(uint *)(local_20[0] + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar3 = atoi(pcVar2);
    pMVar4 = ghidra::Singleton<void>::instance;
    if (ghidra::Singleton<void>::instance == (MenuManager *)0x0) {
      pMVar4 = operator_new(0x10);
      ghidra::Singleton<void>::instance = pMVar4;
      *(undefined4 *)pMVar4 = 0;
      *(undefined4 *)(pMVar4 + 4) = 0;
      *(undefined4 *)(pMVar4 + 8) = 0;
      *(undefined4 *)(pMVar4 + 0xc) = 0;
      local_14 = pMVar4;
    }
    uVar7 = 0;
    piVar5 = *(int **)(pMVar4 + 4);
    uVar9 = *(int *)(pMVar4 + 8) - (int)piVar5 >> 2;
    if (uVar9 != 0) {
      do {
        if (*(int *)(*piVar5 + 0x278) == iVar3) goto LAB_0052bfc9;
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 < uVar9);
      bVar1 = false;
      goto LAB_0052bfcb;
    }
LAB_0052bfc5:
    bVar1 = false;
  }
  else {
    uStack_3c = 0x52bed5;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("quit",4,pcVar2,unaff_EDI);
    if (!bVar1) {
      uStack_3c = 0x52bef8;
      bVar1 = ghidra::lib::_Traits_equal___x28_x29("newcampaign",0xb,pcVar2,unaff_EDI);
      if (!bVar1) {
        uStack_3c = 0x52bf1b;
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("newtutorial",0xb,pcVar2,unaff_EDI);
        if (!bVar1) {
          uStack_3c = 0x52bf3e;
          bVar1 = ghidra::lib::_Traits_equal___x28_x29("continuecampaign",0x10,pcVar2,unaff_EDI);
          if (!bVar1) {
            uStack_3c = 0x52bf61;
            bVar1 = ghidra::lib::_Traits_equal___x28_x29("beginscenario",0xd,pcVar2,unaff_EDI);
            if (!bVar1) {
              uStack_3c = 0x52bf80;
              bVar1 = ghidra::lib::_Traits_equal___x28_x29("joinserver",10,pcVar2,unaff_EDI);
              if (!bVar1) {
                uStack_3c = 0x52bf9f;
                bVar1 = ghidra::lib::_Traits_equal___x28_x29("selectsaveslot",0xe,pcVar2,unaff_EDI);
                if (!bVar1) {
                  uStack_3c = 0x52bfbe;
                  bVar1 = ghidra::lib::_Traits_equal___x28_x29("selectscenario",0xe,pcVar2,unaff_EDI);
                  if (!bVar1) goto LAB_0052bfc5;
                }
              }
            }
          }
        }
      }
    }
LAB_0052bfc9:
    bVar1 = true;
  }
LAB_0052bfcb:
  ghidra::lib::vector___Tidy((ghidra::vector *)local_20);
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)param_2 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_3c = 0x52c006;
    operator_delete(pvVar6,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  return bVar1;
}
