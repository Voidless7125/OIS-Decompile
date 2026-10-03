#include "../ois.exe.h"


// public: __thiscall Menu::Menu(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Menu * __thiscall Menu::Menu(Menu *this,undefined4 param_1,void *param_3)

{
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
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c5f17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  cocos2d::Node::Node((Node *)this);
  *(undefined4 *)(this + 0x278) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x27c) = in_stack_00000020;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x294) = 0xf;
  this[0x280] = (Menu)0x0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = 0xf;
  this[0x298] = (Menu)0x0;
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 0x2b0),(basic_string<> *)&param_3);
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0xf;
  this[0x2c8] = (Menu)0x0;
  local_8._0_1_ = 7;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x2e0),(basic_string<> *)&stack0x0000003c);
  local_8 = CONCAT31(local_8._1_3_,8);
  std::basic_string<>::basic_string<>
            ((basic_string<> *)(this + 0x2f8),(basic_string<> *)&stack0x00000024);
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined4 *)(this + 0x374) = 0;
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
  ExceptionList = local_10;
  return this;
}


// public: virtual void * __thiscall Menu::`scalar deleting destructor'(unsigned int)

void * __thiscall Menu::_scalar_deleting_destructor_(Menu *this,uint param_1)

{
  ~Menu(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x378);
  }
  return this;
}


// public: virtual __thiscall Menu::~Menu(void)

void __thiscall Menu::~Menu(Menu *this)

{
  MenuItem *this_00;
  Menu *pMVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c5f40;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  puVar7 = *(undefined4 **)(this + 0x31c);
  local_14 = 0;
  uVar6 = (uint)((int)*(undefined4 **)(this + 800) + (3 - (int)puVar7)) >> 2;
  if (*(undefined4 **)(this + 800) < puVar7) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    do {
      this_00 = (MenuItem *)*puVar7;
      if (this_00 != (MenuItem *)0x0) {
        MenuItem::~MenuItem(this_00);
        operator_delete(this_00,(nothrow_t *)0x68);
      }
      local_14 = local_14 + 1;
      puVar7 = puVar7 + 1;
    } while (local_14 != uVar6);
  }
  *(undefined4 *)(this + 800) = *(undefined4 *)(this + 0x31c);
  local_8 = 0;
  pMVar1 = *(Menu **)(this + 0x374);
  if (pMVar1 != (Menu *)0x0) {
    (**(code **)(*(int *)pMVar1 + 0x10))(pMVar1 != this + 0x350,uVar3);
    *(undefined4 *)(this + 0x374) = 0;
  }
  local_8 = 1;
  pMVar1 = *(Menu **)(this + 0x34c);
  if (pMVar1 != (Menu *)0x0) {
    (**(code **)(*(int *)pMVar1 + 0x10))(pMVar1 != this + 0x328);
    *(undefined4 *)(this + 0x34c) = 0;
  }
  pvVar2 = *(void **)(this + 0x31c);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x324) - (int)pvVar2 & 0xfffffffc);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
    *(undefined4 *)(this + 0x31c) = 0;
    *(undefined4 *)(this + 800) = 0;
    *(undefined4 *)(this + 0x324) = 0;
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x310));
  uVar3 = *(uint *)(this + 0x30c);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x2f8);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0xf;
  this[0x2f8] = (Menu)0x0;
  uVar3 = *(uint *)(this + 0x2f4);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x2e0);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0xf;
  this[0x2e0] = (Menu)0x0;
  uVar3 = *(uint *)(this + 0x2dc);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x2c8);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0xf;
  this[0x2c8] = (Menu)0x0;
  uVar3 = *(uint *)(this + 0x2c4);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x2b0);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0xf;
  this[0x2b0] = (Menu)0x0;
  uVar3 = *(uint *)(this + 0x2ac);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x298);
    pnVar5 = (nothrow_t *)(uVar3 + 1);
    pvVar4 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))) goto LAB_0052bd41;
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = 0xf;
  this[0x298] = (Menu)0x0;
  uVar3 = *(uint *)(this + 0x294);
  if (0xf < uVar3) {
    pvVar2 = *(void **)(this + 0x280);
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
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x294) = 0xf;
  this[0x280] = (Menu)0x0;
  cocos2d::Node::~Node((Node *)this);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Menu::removeAllItems(void)

void __thiscall Menu::removeAllItems(Menu *this)

{
  MenuItem *this_00;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 0x31c);
  uVar2 = 0;
  uVar1 = (uint)((int)*(undefined4 **)(this + 800) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(this + 800) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (MenuItem *)*puVar3;
      if (this_00 != (MenuItem *)0x0) {
        MenuItem::~MenuItem(this_00);
        operator_delete(this_00,(nothrow_t *)0x68);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)(this + 800) = *(undefined4 *)(this + 0x31c);
  return;
}


// public: bool __thiscall Menu::triggerValid(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall Menu::triggerValid(undefined4 param_1,void *param_2)

{
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
  basic_string<> abStack_48 [12];
  undefined4 uStack_3c;
  int local_20 [3];
  MenuManager *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c5f70;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)&param_2);
  splitStringBy();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_3c = 0x52be2e;
  bVar1 = std::_Traits_equal<>("menu",4,pcVar2,unaff_EDI);
  if (bVar1) {
    pcVar2 = (char *)(local_20[0] + 0x18);
    if (0xf < *(uint *)(local_20[0] + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar3 = atoi(pcVar2);
    pMVar4 = Singleton<>::instance;
    if (Singleton<>::instance == (MenuManager *)0x0) {
      pMVar4 = operator_new(0x10);
      Singleton<>::instance = pMVar4;
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
    bVar1 = std::_Traits_equal<>("quit",4,pcVar2,unaff_EDI);
    if (!bVar1) {
      uStack_3c = 0x52bef8;
      bVar1 = std::_Traits_equal<>("newcampaign",0xb,pcVar2,unaff_EDI);
      if (!bVar1) {
        uStack_3c = 0x52bf1b;
        bVar1 = std::_Traits_equal<>("newtutorial",0xb,pcVar2,unaff_EDI);
        if (!bVar1) {
          uStack_3c = 0x52bf3e;
          bVar1 = std::_Traits_equal<>("continuecampaign",0x10,pcVar2,unaff_EDI);
          if (!bVar1) {
            uStack_3c = 0x52bf61;
            bVar1 = std::_Traits_equal<>("beginscenario",0xd,pcVar2,unaff_EDI);
            if (!bVar1) {
              uStack_3c = 0x52bf80;
              bVar1 = std::_Traits_equal<>("joinserver",10,pcVar2,unaff_EDI);
              if (!bVar1) {
                uStack_3c = 0x52bf9f;
                bVar1 = std::_Traits_equal<>("selectsaveslot",0xe,pcVar2,unaff_EDI);
                if (!bVar1) {
                  uStack_3c = 0x52bfbe;
                  bVar1 = std::_Traits_equal<>("selectscenario",0xe,pcVar2,unaff_EDI);
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
  std::vector<>::_Tidy((vector<> *)local_20);
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
  ExceptionList = local_10;
  return bVar1;
}
