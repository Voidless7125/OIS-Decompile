// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_Data::cleanupRender(UI_Data *this)
void UI_Data::cleanupRender()

{
  if (*(int **)((char *)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x440) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x440) = 0;
  }
  if (*(int **)((char *)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x444) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x444) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_Data::render(UI_Data *this)
void UI_Data::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  word *this_01;
  char *pcVar1;
  std::string *pbVar2;
  uint uVar3;
  char ****ppppcVar4;
  LPCSTR ***ppppCVar5;
  DWORD DVar6;
  Sprite *pSVar7;
  int iVar8;
  UIText *pUVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  std::string *pbVar12;
  uint unaff_EDI;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  word *local_60;
  void *local_5c [5];
  uint local_48;
  char ***local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint uStack_30;
  LPCSTR **local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca373;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar1 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_64 = 0;
  local_60 = (word *)0x0;
  local_14 = pcVar1;
  if (*(int *)((char *)this + 0x278) != 0) {
    (**(code **)(*(int *)this + 0x290))();
    if (*(int *)((char *)this + 0x3ec) == 1) {
      this_00 = (std::string *)((char *)this + 0x428);
      iVar8 = *(int *)(*(int *)((char *)this + 0x278) + 0x18c);
      if (iVar8 == 0) {
        ghidra::str::assign(this_00,"",0);
      }
      else {
        pbVar2 = (std::string *)(iVar8 + 0xc);
        if (this_00 != pbVar2) {
          if (0xf < *(uint *)(iVar8 + 0x20)) {
            pbVar2 = *(std::string **)pbVar2;
          }
          ghidra::str::assign(this_00,(char *)pbVar2,*(uint *)(iVar8 + 0x1c));
        }
      }
    }
    else {
      local_60 = *(word **)((char *)this + 1000);
      local_64 = *(uint *)(g_gameData + 0xd0);
      if (*(int **)((char *)this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(**(int **)((char *)this + 0x3e4) + 8))();
      this_01 = (word *)((char *)this + 0x428);
      local_60 = (word *)&DAT_00000001;
      if (this_01 == (word *)&local_44) {
        if (0xf < uStack_30) {
          pnVar11 = (nothrow_t *)(uStack_30 + 1);
          ppppcVar4 = (char ****)local_44;
          if ((nothrow_t *)0xfff < pnVar11) {
            ppppcVar4 = (char ****)local_44[-1];
            pnVar11 = (nothrow_t *)(uStack_30 + 0x24);
            if ((char *)0x1f < (char *)((int)local_44 + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar4,pnVar11);
        }
      }
      else {
        // [mislabelled-dtor] word::~word(this_01);
        *(char ****)this_01 = local_44;
        *(undefined4 *)((char *)this + 0x42c) = uStack_40;
        *(undefined4 *)((char *)this + 0x430) = uStack_3c;
        *(undefined4 *)((char *)this + 0x434) = uStack_38;
        *(ulonglong *)((char *)this + 0x438) = CONCAT44(uStack_30,local_34);
      }
    }
    pbVar12 = (std::string *)((char *)this + 0x428);
    uVar3 = ghidra::lib::_Traits_find___x28_x29((char *)0x0,0x622444,4,pcVar1,unaff_EDI);
    if (uVar3 == 0xffffffff) {
      ghidra::str::ctor((std::string *)&stack0xffffff68,pbVar12);
      pUVar9 = UIText::create(0);
      *(UIText **)((char *)this + 0x440) = pUVar9;
      // [seh] local_8 = 3;
      (**(code **)(*(int *)pUVar9 + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      (**(code **)(**(int **)((char *)this + 0x440) + 0x48))();
      (**(code **)(*(int *)this + 0x10c))();
      iVar8 = *(int *)this;
      (**(code **)(**(int **)((char *)this + 0x440) + 0xb0))();
      (**(code **)(iVar8 + 0xac))();
    }
    else {
      ghidra::str::ctor((std::string *)&local_44,pbVar12);
      // [seh] local_8 = 1;
      local_64 = (uint)local_60 | 2;
      local_1c = 0xf00000000;
      local_2c = (LPCSTR **)((uint)local_2c & 0xffffff00);
      local_60 = (word *)strUsingArgs((char *)local_5c);
      if ((word *)&local_2c != local_60) {
        // [mislabelled-dtor] word::~word((word *)&local_2c);
        local_2c = *(LPCSTR ***)local_60;
        uStack_28 = *(undefined4 *)(local_60 + 4);
        uStack_24 = *(undefined4 *)(local_60 + 8);
        uStack_20 = *(undefined4 *)(local_60 + 0xc);
        local_1c = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (word)0x0;
      }
      if (0xf < local_48) {
        pnVar11 = (nothrow_t *)(local_48 + 1);
        pvVar10 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_5c[0] + -4);
          pnVar11 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      ppppcVar4 = &local_44;
      if (0xf < uStack_30) {
        ppppcVar4 = (char ****)local_44;
      }
      ghidra::str::append((std::string *)&local_2c,(char *)ppppcVar4,local_34);
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < uStack_30) {
        pnVar11 = (nothrow_t *)(uStack_30 + 1);
        ppppcVar4 = (char ****)local_44;
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppcVar4 = (char ****)local_44[-1];
          pnVar11 = (nothrow_t *)(uStack_30 + 0x24);
          if ((char *)0x1f < (char *)((int)local_44 + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar4,pnVar11);
      }
      local_34 = 0;
      ppppCVar5 = &local_2c;
      if (0xf < local_1c._4_4_) {
        ppppCVar5 = (LPCSTR ***)local_2c;
      }
      uStack_30 = 0xf;
      local_44 = (char ***)((uint)local_44 & 0xffffff00);
      DVar6 = GetFileAttributesA((LPCSTR)ppppCVar5);
      if ((DVar6 == 0xffffffff) || ((DVar6 & 0x10) != 0)) {
        debugPrint("ERROR","Unable to find file \'%s\'");
      }
      else {
        ghidra::str::ctor((std::string *)&stack0xffffff68,pbVar12);
        pSVar7 = loadSprite();
        *(Sprite **)((char *)this + 0x444) = pSVar7;
        local_68 = *(int *)pSVar7;
        iVar8 = (**(code **)(local_68 + 0xb0))();
        local_60 = *(word **)(iVar8 + 4);
        (**(code **)(**(int **)((char *)this + 0x444) + 0xb0))();
        (**(code **)(local_68 + 0x48))();
        local_6c = 0;
        local_68 = 0;
        // [seh] local_8._0_1_ = 2;
        (**(code **)(**(int **)((char *)this + 0x444) + 0xa0))();
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        (**(code **)(*(int *)this + 0x10c))();
        iVar8 = *(int *)this;
        cocos2d::Size::Size((Size *)&local_6c,(float)*(int *)((char *)this + 0x2a0),
                            (float)*(int *)((char *)this + 0x2a4));
        (**(code **)(iVar8 + 0xac))();
      }
      if (0xf < local_1c._4_4_) {
        pnVar11 = (nothrow_t *)(local_1c._4_4_ + 1);
        ppppCVar5 = (LPCSTR ***)local_2c;
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppCVar5 = (LPCSTR ***)local_2c[-1];
          pnVar11 = (nothrow_t *)(local_1c._4_4_ + 0x24);
          if ((LPCSTR)0x1f < (LPCSTR)((int)local_2c + (-4 - (int)ppppCVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppCVar5,pnVar11);
      }
    }
    **(undefined1 **)((char *)this + 0x288) = 1;
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_Data::specialDataCheckFunction(UI_Data *this,float param_1)
void UI_Data::specialDataCheckFunction(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  char *pcVar3;
  std::string *pbVar4;
  std::string *pbVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  std::string abStack_70 [8];
  undefined4 uStack_68;
  std::string **ppbStack_64;
  std::string *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  std::string *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be968;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_1c = 0xf00000000;
  local_2c = (std::string *)((uint)local_2c & 0xffffff00);
  // [seh] local_8 = 0;
  local_14 = pcVar3;
  if (*(int *)((char *)this + 0x3ec) == 1) {
    iVar1 = *(int *)(*(int *)((char *)this + 0x278) + 0x18c);
    pbVar4 = (std::string *)(iVar1 + 0xc);
    if ((std::string *)&local_2c != pbVar4) {
      if (0xf < *(uint *)(iVar1 + 0x20)) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ppbStack_64 = (std::string **)0x567acb;
      ghidra::str::assign
                ((std::string *)&local_2c,(char *)pbVar4,*(uint *)(iVar1 + 0x1c));
    }
  }
  else {
    if (*(int **)((char *)this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    ppbStack_64 = &local_44;
    uStack_68 = 0x567b05;
    (**(code **)(**(int **)((char *)this + 0x3e4) + 8))();
    // [mislabelled-dtor] word::~word((word *)&local_2c);
    local_2c = local_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    local_1c = local_34;
  }
  pbVar4 = (std::string *)((char *)this + 0x428);
  pbVar5 = pbVar4;
  if (0xf < *(uint *)((char *)this + 0x43c)) {
    pbVar5 = *(std::string **)pbVar4;
  }
  ppbStack_64 = (std::string **)0x567b4f;
  bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)pbVar5,*(uint *)((char *)this + 0x438),pcVar3,unaff_EDI);
  if (!bVar2) {
    if (pbVar4 != (std::string *)&local_2c) {
      pbVar5 = (std::string *)&local_2c;
      if (0xf < local_1c._4_4_) {
        pbVar5 = local_2c;
      }
      ppbStack_64 = (std::string **)0x567b74;
      ghidra::str::assign(pbVar4,(char *)pbVar5,(uint)local_1c);
    }
    ppbStack_64 = (std::string **)0x567b9d;
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
    if ((bVar2) && (*(int **)((char *)this + 0x440) != (int *)0x0)) {
      (**(code **)(**(int **)((char *)this + 0x440) + 0x138))();
      *(undefined4 *)((char *)this + 0x440) = 0;
    }
    else if (*(int *)((char *)this + 0x440) == 0) {
      (**(code **)(*(int *)this + 0x294))();
    }
    else {
      ghidra::str::ctor(abStack_70,(std::string *)&local_2c);
      (*(UIText **)((char *)this + 0x440))->setText(1, 0);
      **(undefined1 **)((char *)this + 0x288) = 1;
    }
  }
  if (0xf < local_1c._4_4_) {
    pnVar6 = (nothrow_t *)(local_1c._4_4_ + 1);
    pbVar4 = local_2c;
    if ((nothrow_t *)0xfff < pnVar6) {
      pbVar4 = *(std::string **)(local_2c + -4);
      pnVar6 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if ((std::string *)0x1f < local_2c + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ppbStack_64 = (std::string **)0x567c32;
    operator_delete(pbVar4,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
