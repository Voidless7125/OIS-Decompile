#include "../ois.exe.h"


// public: virtual void * __thiscall UI_Data::`scalar deleting destructor'(unsigned int)

void * __thiscall UI_Data::_scalar_deleting_destructor_(UI_Data *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x440) = 0;
  }
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
    *(undefined4 *)(this + 0x444) = 0;
  }
  uVar2 = *(uint *)(this + 0x43c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x428);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0xf;
  this[0x428] = (UI_Data)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x448);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_Data::cleanupRender(void)

void __thiscall UI_Data::cleanupRender(UI_Data *this)

{
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
    *(undefined4 *)(this + 0x444) = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual void __thiscall UI_Data::render(void)

void __thiscall UI_Data::render(UI_Data *this)

{
  basic_string<> *this_00;
  word *this_01;
  char *pcVar1;
  basic_string<> *pbVar2;
  uint uVar3;
  char ****ppppcVar4;
  LPCSTR ***ppppCVar5;
  DWORD DVar6;
  Sprite *pSVar7;
  int iVar8;
  UIText *pUVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  basic_string<> *pbVar12;
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
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca373;
  local_10 = ExceptionList;
  pcVar1 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_64 = 0;
  local_60 = (word *)0x0;
  local_14 = pcVar1;
  if (*(int *)(this + 0x278) != 0) {
    (**(code **)(*(int *)this + 0x290))();
    if (*(int *)(this + 0x3ec) == 1) {
      this_00 = (basic_string<> *)(this + 0x428);
      iVar8 = *(int *)(*(int *)(this + 0x278) + 0x18c);
      if (iVar8 == 0) {
        std::basic_string<>::assign(this_00,"",0);
      }
      else {
        pbVar2 = (basic_string<> *)(iVar8 + 0xc);
        if (this_00 != pbVar2) {
          if (0xf < *(uint *)(iVar8 + 0x20)) {
            pbVar2 = *(basic_string<> **)pbVar2;
          }
          std::basic_string<>::assign(this_00,(char *)pbVar2,*(uint *)(iVar8 + 0x1c));
        }
      }
    }
    else {
      local_60 = *(word **)(this + 1000);
      local_64 = *(uint *)(g_gameData + 0xd0);
      if (*(int **)(this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(**(int **)(this + 0x3e4) + 8))();
      this_01 = (word *)(this + 0x428);
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
        word::~word(this_01);
        *(char ****)this_01 = local_44;
        *(undefined4 *)(this + 0x42c) = uStack_40;
        *(undefined4 *)(this + 0x430) = uStack_3c;
        *(undefined4 *)(this + 0x434) = uStack_38;
        *(ulonglong *)(this + 0x438) = CONCAT44(uStack_30,local_34);
      }
    }
    pbVar12 = (basic_string<> *)(this + 0x428);
    uVar3 = std::_Traits_find<>((char *)0x0,0x622444,4,pcVar1,unaff_EDI);
    if (uVar3 == 0xffffffff) {
      std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff68,pbVar12);
      pUVar9 = UIText::create(0);
      *(UIText **)(this + 0x440) = pUVar9;
      local_8 = 3;
      (**(code **)(*(int *)pUVar9 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(**(int **)(this + 0x440) + 0x48))();
      (**(code **)(*(int *)this + 0x10c))();
      iVar8 = *(int *)this;
      (**(code **)(**(int **)(this + 0x440) + 0xb0))();
      (**(code **)(iVar8 + 0xac))();
    }
    else {
      std::basic_string<>::basic_string<>((basic_string<> *)&local_44,pbVar12);
      local_8 = 1;
      local_64 = (uint)local_60 | 2;
      local_1c = 0xf00000000;
      local_2c = (LPCSTR **)((uint)local_2c & 0xffffff00);
      local_60 = (word *)strUsingArgs((char *)local_5c);
      if ((word *)&local_2c != local_60) {
        word::~word((word *)&local_2c);
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
      std::basic_string<>::append((basic_string<> *)&local_2c,(char *)ppppcVar4,local_34);
      local_8 = local_8 & 0xffffff00;
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
        std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff68,pbVar12);
        pSVar7 = loadSprite();
        *(Sprite **)(this + 0x444) = pSVar7;
        local_68 = *(int *)pSVar7;
        iVar8 = (**(code **)(local_68 + 0xb0))();
        local_60 = *(word **)(iVar8 + 4);
        (**(code **)(**(int **)(this + 0x444) + 0xb0))();
        (**(code **)(local_68 + 0x48))();
        local_6c = 0;
        local_68 = 0;
        local_8._0_1_ = 2;
        (**(code **)(**(int **)(this + 0x444) + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        (**(code **)(*(int *)this + 0x10c))();
        iVar8 = *(int *)this;
        cocos2d::Size::Size((Size *)&local_6c,(float)*(int *)(this + 0x2a0),
                            (float)*(int *)(this + 0x2a4));
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
    **(undefined1 **)(this + 0x288) = 1;
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_Data::specialDataCheckFunction(float)

void __thiscall UI_Data::specialDataCheckFunction(UI_Data *this,float param_1)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  basic_string<> *pbVar4;
  basic_string<> *pbVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  basic_string<> abStack_70 [8];
  undefined4 uStack_68;
  basic_string<> **ppbStack_64;
  basic_string<> *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  basic_string<> *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005be968;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1c = 0xf00000000;
  local_2c = (basic_string<> *)((uint)local_2c & 0xffffff00);
  local_8 = 0;
  local_14 = pcVar3;
  if (*(int *)(this + 0x3ec) == 1) {
    iVar1 = *(int *)(*(int *)(this + 0x278) + 0x18c);
    pbVar4 = (basic_string<> *)(iVar1 + 0xc);
    if ((basic_string<> *)&local_2c != pbVar4) {
      if (0xf < *(uint *)(iVar1 + 0x20)) {
        pbVar4 = *(basic_string<> **)pbVar4;
      }
      ppbStack_64 = (basic_string<> **)0x567acb;
      std::basic_string<>::assign
                ((basic_string<> *)&local_2c,(char *)pbVar4,*(uint *)(iVar1 + 0x1c));
    }
  }
  else {
    if (*(int **)(this + 0x3e4) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    ppbStack_64 = &local_44;
    uStack_68 = 0x567b05;
    (**(code **)(**(int **)(this + 0x3e4) + 8))();
    word::~word((word *)&local_2c);
    local_2c = local_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    local_1c = local_34;
  }
  pbVar4 = (basic_string<> *)(this + 0x428);
  pbVar5 = pbVar4;
  if (0xf < *(uint *)(this + 0x43c)) {
    pbVar5 = *(basic_string<> **)pbVar4;
  }
  ppbStack_64 = (basic_string<> **)0x567b4f;
  bVar2 = std::_Traits_equal<>((char *)pbVar5,*(uint *)(this + 0x438),pcVar3,unaff_EDI);
  if (!bVar2) {
    if (pbVar4 != (basic_string<> *)&local_2c) {
      pbVar5 = (basic_string<> *)&local_2c;
      if (0xf < local_1c._4_4_) {
        pbVar5 = local_2c;
      }
      ppbStack_64 = (basic_string<> **)0x567b74;
      std::basic_string<>::assign(pbVar4,(char *)pbVar5,(uint)local_1c);
    }
    ppbStack_64 = (basic_string<> **)0x567b9d;
    bVar2 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
    if ((bVar2) && (*(int **)(this + 0x440) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 0x440) + 0x138))();
      *(undefined4 *)(this + 0x440) = 0;
    }
    else if (*(int *)(this + 0x440) == 0) {
      (**(code **)(*(int *)this + 0x294))();
    }
    else {
      std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)&local_2c);
      UIText::setText(*(UIText **)(this + 0x440),1,0);
      **(undefined1 **)(this + 0x288) = 1;
    }
  }
  if (0xf < local_1c._4_4_) {
    pnVar6 = (nothrow_t *)(local_1c._4_4_ + 1);
    pbVar4 = local_2c;
    if ((nothrow_t *)0xfff < pnVar6) {
      pbVar4 = *(basic_string<> **)(local_2c + -4);
      pnVar6 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if ((basic_string<> *)0x1f < local_2c + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ppbStack_64 = (basic_string<> **)0x567c32;
    operator_delete(pbVar4,pnVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
