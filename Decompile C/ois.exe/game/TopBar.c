#include "../ois.exe.h"


// public: __thiscall TopBar::TopBar(bool,bool)

TopBar * __thiscall TopBar::TopBar(TopBar *this,bool param_1,bool param_2)

{
  int iVar1;
  GameData GVar2;
  uint uVar3;
  Node *this_00;
  bool bVar4;
  undefined4 local_1c;
  undefined4 local_18;
  TopBar *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c9e00;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2) {
    GVar2 = (GameData)0x54;
  }
  else {
    GVar2 = g_gameData[0xd4];
  }
  *this = (TopBar)GVar2;
  this[1] = (TopBar)param_2;
  *(undefined2 *)(this + 2) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0xf;
  this[0x14] = (TopBar)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xc;
  *(undefined4 *)(this + 0x5c) = 0xfffffffd;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  local_8 = 4;
  uStack_7 = 0;
  bVar4 = OISConfiguration::alwaysShowMenu != false;
  *(undefined4 *)(this + 0x74) = 2;
  *(undefined4 *)(this + 0x78) = 0x41400000;
  *(undefined4 *)(this + 0x7c) = 0x3fb33333;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  this[0x84] = (TopBar)0x0;
  if ((bVar4) ||
     ((((iVar1 = *(int *)(this + 0x60), iVar1 != 0 &&
        (iVar1 = *(int *)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4), iVar1 != 0)) &&
       (iVar1 = *(int *)(iVar1 + 300), iVar1 != 0)) && (*(char *)(iVar1 + 6) != '\0')))) {
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x74) = 3;
  }
  if (*(int *)(this + 0x2c) == 0) {
    local_14 = this;
    this_00 = cocos2d::Node::create();
    *(Node **)(this + 0x2c) = this_00;
    cocos2d::Ref::retain((Ref *)this_00);
    local_1c = 0x3f000000;
    local_18 = 0x3f000000;
    local_8 = 5;
    (**(code **)(**(int **)(this + 0x2c) + 0xa0))(&local_1c,uVar3);
    _local_8 = CONCAT31(uStack_7,4);
    (**(code **)(**(int **)(this + 0x2c) + 0x2c))(&DAT_bf800000);
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall TopBar::~TopBar(void)

void __thiscall TopBar::~TopBar(TopBar *this)

{
  void *pvVar1;
  uint uVar2;
  ScreenTab *pSVar3;
  void *pvVar4;
  ScreenTab *extraout_ECX;
  nothrow_t *pnVar5;
  allocator<ScreenTab> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c9130;
  local_10 = ExceptionList;
  pSVar3 = (ScreenTab *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  cleanupRender(this);
  std::_Destroy_range<>(extraout_ECX,pSVar3,unaff_EDI);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x68);
  if (*(Ref **)(this + 0x2c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(ScreenTab **)(this + 0x68) != (ScreenTab *)0x0) {
    std::_Destroy_range<>(*(ScreenTab **)(this + 0x68),pSVar3,unaff_EDI);
    pvVar1 = *(void **)(this + 0x68);
    pnVar5 = (nothrow_t *)(((*(int *)(this + 0x70) - (int)pvVar1) / 0x2c) * 0x2c);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_005623e3;
    }
    operator_delete(pvVar4,pnVar5);
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
  }
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x50) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_005623e3;
    }
    operator_delete(pvVar4,pnVar5);
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
  }
  pvVar1 = *(void **)(this + 0x3c);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x44) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_005623e3;
    }
    operator_delete(pvVar4,pnVar5);
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x38) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_005623e3;
    }
    operator_delete(pvVar4,pnVar5);
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  uVar2 = *(uint *)(this + 0x28);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x14);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) {
LAB_005623e3:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0xf;
  this[0x14] = (TopBar)0x0;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TopBar::cleanupRender(void)

void __thiscall TopBar::cleanupRender(TopBar *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x30);
  if (*(int *)(this + 0x34) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x30) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x30);
    } while (uVar3 < (uint)(*(int *)(this + 0x34) - iVar2 >> 2));
  }
  *(int *)(this + 0x34) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x3c);
  if (*(int *)(this + 0x40) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x3c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x3c);
    } while (uVar3 < (uint)(*(int *)(this + 0x40) - iVar2 >> 2));
  }
  *(int *)(this + 0x40) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(this + 0x48);
  if (*(int *)(this + 0x4c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(this + 0x48) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x48);
    } while (uVar3 < (uint)(*(int *)(this + 0x4c) - iVar2 >> 2));
  }
  *(int *)(this + 0x4c) = iVar2;
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 0x138))(1);
    *(undefined4 *)(this + 100) = 0;
  }
  return;
}


// public: void __thiscall TopBar::resetTabs(int)

void __thiscall TopBar::resetTabs(TopBar *this,int param_1)

{
  vector<> *this_00;
  int iVar1;
  bool bVar2;
  void **ppvVar3;
  int iVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  basic_string<> *pbVar7;
  int iVar8;
  allocator<ScreenTab> *unaff_EDI;
  basic_string<> local_a8 [12];
  undefined4 uStack_9c;
  uint local_74;
  int local_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 *local_44;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 *local_18;
  ScreenTab *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9e30;
  local_10 = ExceptionList;
  local_14 = (ScreenTab *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  if (*(int *)(this + 0x60) != 0) {
    this_00 = (vector<> *)(this + 0x68);
    std::_Destroy_range<>((ScreenTab *)this,local_14,unaff_EDI);
    pbVar7 = *(basic_string<> **)this_00;
    *(basic_string<> **)(this + 0x6c) = pbVar7;
    iVar4 = *(int *)(*(int *)(this + 0x60) + 0x394);
    if (*(char *)(iVar4 + 5 + param_1 * 0x50) == '\0') {
      iVar8 = *(int *)(this + 0x60);
      local_74 = 0;
      iVar4 = *(int *)(iVar8 + 0x398) - iVar4;
      iVar1 = iVar4 >> 0x1f;
      if (iVar4 / 0x50 + iVar1 != iVar1) {
        iVar4 = 0;
        local_70 = 0x624;
        do {
          if (*(char *)(*(int *)(iVar8 + 0x394) + 4 + iVar4) != '\0') {
            if (*(int *)(*(int *)(iVar8 + 0x394) + 0x4c + iVar4) != 0) {
              local_a8[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_a8,"",0);
              bVar2 = std::_Func_class<>::operator()
                                ((_Func_class<> *)
                                 (*(int *)(*(int *)(this + 0x60) + 0x394) + 0x28 + iVar4),
                                 *(undefined4 *)(g_gameData + 0xd0),0);
              if (!bVar2) goto LAB_005627e1;
            }
            if (*(char *)(iVar4 + 5 + *(int *)(*(int *)(this + 0x60) + 0x394)) == '\0') {
              local_5c = 0;
              local_58 = 0xf;
              local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
              local_54 = 0;
              local_50 = 0;
              local_4c = 0;
              local_44 = &DAT_bf800000;
              local_8 = 1;
              iVar8 = *(int *)(local_70 + *(int *)(this + 0x60));
              ppvVar3 = (void **)(iVar8 + 0x30);
              local_48 = local_74;
              if (local_6c != ppvVar3) {
                if (0xf < *(uint *)(iVar8 + 0x44)) {
                  ppvVar3 = *ppvVar3;
                }
                uStack_9c = 0x56274e;
                std::basic_string<>::assign
                          ((basic_string<> *)local_6c,(char *)ppvVar3,*(uint *)(iVar8 + 0x40));
              }
              pbVar7 = *(basic_string<> **)(this + 0x6c);
              local_54 = CONCAT11(local_54._1_1_,local_74 == param_1);
              if (*(basic_string<> **)(this + 0x70) == pbVar7) {
                uStack_9c = 0x5627a6;
                std::vector<>::_Emplace_reallocate<>
                          (this_00,(ScreenTab *)pbVar7,(ScreenTab *)local_6c);
              }
              else {
                std::basic_string<>::basic_string<>(pbVar7,(basic_string<> *)local_6c);
                pbVar7[0x18] = local_54._0_1_;
                pbVar7[0x19] = local_54._1_1_;
                *(undefined4 *)(pbVar7 + 0x1c) = local_50;
                *(undefined4 *)(pbVar7 + 0x20) = local_4c;
                *(uint *)(pbVar7 + 0x24) = local_48;
                *(undefined1 **)(pbVar7 + 0x28) = local_44;
                *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 0x2c;
              }
              local_8 = 0xffffffff;
              if (0xf < local_58) {
                pnVar6 = (nothrow_t *)(local_58 + 1);
                pvVar5 = local_6c[0];
                if ((nothrow_t *)0xfff < pnVar6) {
                  pvVar5 = *(void **)((int)local_6c[0] + -4);
                  pnVar6 = (nothrow_t *)(local_58 + 0x24);
                  if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar5))) goto LAB_00562616;
                }
                uStack_9c = 0x5627de;
                operator_delete(pvVar5,pnVar6);
              }
            }
          }
LAB_005627e1:
          iVar4 = iVar4 + 0x50;
          local_74 = local_74 + 1;
          local_70 = local_70 + 4;
          iVar8 = *(int *)(this + 0x60);
        } while (local_74 < (uint)((*(int *)(iVar8 + 0x398) - *(int *)(iVar8 + 0x394)) / 0x50));
      }
    }
    else {
      local_30 = 0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_18 = &DAT_bf800000;
      local_8 = 0;
      local_1c = param_1;
      iVar4 = *(int *)(*(int *)(this + 0x60) + 0x624 + param_1 * 4);
      ppvVar3 = (void **)(iVar4 + 0x30);
      if (local_40 != ppvVar3) {
        if (0xf < *(uint *)(iVar4 + 0x44)) {
          ppvVar3 = *ppvVar3;
        }
        uStack_9c = 0x5625a3;
        std::basic_string<>::assign
                  ((basic_string<> *)local_40,(char *)ppvVar3,*(uint *)(iVar4 + 0x40));
        pbVar7 = *(basic_string<> **)(this + 0x6c);
      }
      local_28 = CONCAT11(local_28._1_1_,1);
      if (*(basic_string<> **)(this + 0x70) == pbVar7) {
        uStack_9c = 0x5625f0;
        std::vector<>::_Emplace_reallocate<>(this_00,(ScreenTab *)pbVar7,(ScreenTab *)local_40);
      }
      else {
        std::basic_string<>::basic_string<>(pbVar7,(basic_string<> *)local_40);
        pbVar7[0x18] = local_28._0_1_;
        pbVar7[0x19] = local_28._1_1_;
        *(undefined4 *)(pbVar7 + 0x1c) = local_24;
        *(undefined4 *)(pbVar7 + 0x20) = local_20;
        *(int *)(pbVar7 + 0x24) = local_1c;
        *(undefined1 **)(pbVar7 + 0x28) = local_18;
        *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 0x2c;
      }
      if (0xf < local_2c) {
        pnVar6 = (nothrow_t *)(local_2c + 1);
        pvVar5 = local_40[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)local_40[0] + -4);
          pnVar6 = (nothrow_t *)(local_2c + 0x24);
          if (0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar5))) {
LAB_00562616:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_9c = 0x562623;
        operator_delete(pvVar5,pnVar6);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TopBar::runLogic(float)

void __thiscall TopBar::runLogic(TopBar *this,float param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  basic_string<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  float fVar5;
  float in_XMM1_Da;
  float fVar6;
  float fVar7;
  
  if (this[1] != (TopBar)0x0) {
    render(this);
    return;
  }
  fVar6 = in_XMM1_Da;
  if (*(int *)(this + 0x60) != 0) {
    if (((*(int *)(g_gameData + 0xd0) == 0) ||
        (iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x224), iVar2 == 0)) ||
       (iVar2 = *(int *)(iVar2 + 0x10), iVar2 == 0)) {
LAB_005628ac:
      bVar1 = std::_Traits_equal<>("",0,(char *)unaff_EDI,(uint)unaff_ESI);
      if (bVar1) goto LAB_005628ea;
      std::basic_string<>::assign((basic_string<> *)(this + 0x14),"",0);
    }
    else {
      bVar1 = std::_Traits_equal<>("",0,(char *)unaff_EDI,(uint)unaff_ESI);
      if (bVar1) goto LAB_005628ac;
      bVar1 = std::operator!=<>(unaff_EDI,unaff_ESI);
      if (!bVar1) goto LAB_005628ea;
      std::basic_string<>::operator=
                ((basic_string<> *)(this + 0x14),(basic_string<> *)(iVar2 + 0x18));
    }
    render(this);
    fVar6 = in_XMM1_Da;
  }
LAB_005628ea:
  if (g_gameLogic[0x73] == (GameLogic)0x0) {
    iVar2 = (int)(float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)];
  }
  else {
    iVar2 = -1;
  }
  if (iVar2 == *(int *)(this + 8)) {
    fVar5 = *(float *)(this + 4);
    if (fVar5 <= 0.0) goto LAB_00562954;
  }
  else {
    *(int *)(this + 8) = iVar2;
    render(this);
    fVar5 = 2.0;
    *(undefined4 *)(this + 4) = 0x40000000;
    fVar6 = in_XMM1_Da;
  }
  fVar5 = fVar5 - fVar6;
  *(float *)(this + 4) = fVar5;
  if (fVar5 < 0.0) {
    *(undefined4 *)(this + 4) = 0;
    fVar5 = 0.0;
  }
LAB_00562954:
  fVar7 = 0.0;
  if (((this[0x84] != (TopBar)0x0) || (this[3] != (TopBar)0x0)) ||
     ((bVar1 = std::_Traits_equal<>("",0,(char *)unaff_EDI,(uint)unaff_ESI), !bVar1 ||
      (fVar7 < fVar5)))) {
    iVar2 = *(int *)(this + 0x74);
    if (((iVar2 == 2) || (iVar2 == 0)) || ((iVar2 == 1 || (iVar2 == 4)))) {
      *(undefined4 *)(this + 0x74) = 1;
      fVar6 = *(float *)(this + 0x78) - fVar6 * 128.0;
      *(float *)(this + 0x78) = fVar6;
      if (fVar6 <= fVar7) {
        *(undefined4 *)(this + 0x78) = 0;
        *(undefined4 *)(this + 0x74) = 2;
        *(undefined4 *)(this + 0x7c) = 0x3fb33333;
      }
      iVar2 = **(int **)(this + 0x2c);
      iVar3 = (**(code **)(iVar2 + 0xb0))();
      fVar6 = *(float *)(iVar3 + 4);
      fVar5 = *(float *)(this + 0x78);
      pfVar4 = (float *)(**(code **)(**(int **)(this + 0x2c) + 0xb0))();
      (**(code **)(iVar2 + 0x48))(*pfVar4 * 0.5,fVar6 * 0.5 - fVar5);
    }
    else if ((iVar2 == 3) && (*(float *)(this + 0x78) != fVar7)) {
      *(undefined4 *)(this + 0x78) = 0;
      updateBarPosition(this);
      return;
    }
    return;
  }
  iVar2 = *(int *)(this + 0x74);
  if (iVar2 != 1) {
    if (iVar2 == 4) {
      fVar6 = fVar6 * 128.0 + *(float *)(this + 0x78);
      *(float *)(this + 0x78) = fVar6;
      if (12.0 <= fVar6) {
        *(undefined4 *)(this + 0x78) = 0x41400000;
        *(undefined4 *)(this + 0x74) = 0;
      }
      updateBarPosition(this);
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    fVar5 = *(float *)(this + 0x7c);
    *(float *)(this + 0x7c) = fVar5 - fVar6;
    if (fVar7 < fVar5 - fVar6) {
      return;
    }
    *(undefined4 *)(this + 0x7c) = 0;
  }
  *(undefined4 *)(this + 0x74) = 4;
  return;
}


// public: void __thiscall TopBar::render(void)

void __thiscall TopBar::render(TopBar *this)

{
  AnimationFrames **ppAVar1;
  bool bVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  Scale9Sprite *pSVar5;
  Sprite *pSVar6;
  UIText *pUVar7;
  float *pfVar8;
  void **ppvVar9;
  int iVar10;
  void **ppvVar11;
  void *pvVar12;
  nothrow_t *pnVar13;
  char *pcVar14;
  int iVar15;
  basic_string<> *unaff_EDI;
  undefined4 uStack_174;
  Size local_130 [8];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  basic_string<> *local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  uint local_10c;
  Sprite *local_108;
  void *local_104 [5];
  uint local_f0;
  basic_string<> local_ec [16];
  undefined4 local_dc;
  undefined4 local_d8;
  basic_string<> local_d4 [16];
  undefined4 local_c4;
  undefined4 local_c0;
  basic_string<> local_bc [16];
  undefined4 local_ac;
  undefined4 local_a8;
  basic_string<> local_a4 [16];
  undefined4 local_94;
  undefined4 local_90;
  basic_string<> local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  basic_string<> local_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  basic_string<> local_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  uint local_1c;
  uint local_18;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9f17;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pbVar3;
  cleanupRender(this);
  if (*(int *)(this + 0x60) == 0) goto LAB_00563747;
  pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
  local_8 = 0;
  pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar13 = (nothrow_t *)(local_18 + 1);
    pvVar12 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_2c[0] + -4);
      pnVar13 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) {
LAB_00562b84:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar15 = *(int *)pSVar5;
  cocos2d::Size::Size((Size *)&local_110,(float)*(int *)(this + 0x54),(float)*(int *)(this + 0x58));
  (**(code **)(iVar15 + 0xac))();
  local_110 = 0;
  local_10c = 0;
  local_8 = 1;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar5 + 0x48))();
  (**(code **)(**(int **)(this + 0x2c) + 0x108))();
  if (this[1] == (TopBar)0x0) {
    if ((*(char *)(*(int *)(this + 0x60) + 0x3a4) != '\0') ||
       (pcVar14 = "%c_SystemBar_HelpIcon.png", *(char *)(*(int *)(this + 0x60) + 0x3a5) != '\0')) {
      pcVar14 = "%c_SystemBar_ExitIcon.png";
    }
    strUsingArgs((char *)&uStack_174,pcVar14,(int)(char)*this);
    pSVar6 = loadSprite();
    local_108 = pSVar6;
    (**(code **)(*(int *)pSVar6 + 0x48))();
    ppAVar1 = *(AnimationFrames ***)(this + 0x34);
    if (*(AnimationFrames ***)(this + 0x38) == ppAVar1) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(this + 0x30),ppAVar1,(AnimationFrames **)&local_108);
    }
    else {
      *ppAVar1 = (AnimationFrames *)pSVar6;
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 4;
    }
    (**(code **)(**(int **)(this + 0x2c) + 0x108))();
  }
  (**(code **)(**(int **)(this + 0x2c) + 0x48))();
  iVar15 = **(int **)(this + 0x2c);
  cocos2d::Size::Size(local_130,(float)*(int *)(this + 0x54),(float)*(int *)(this + 0x58));
  (**(code **)(iVar15 + 0xac))();
  *(undefined4 *)(this + 0xc) = 0;
  if (*(char *)(*(int *)(this + 0x60) + 0x3a4) == '\0') {
    iVar15 = *(int *)(this + 0x6c) - *(int *)(this + 0x68) >> 0x1f;
    iVar10 = (*(int *)(this + 0x6c) - *(int *)(this + 0x68)) / 0x2c + iVar15;
    if (iVar10 - iVar15 == 1) {
      strUsingArgs((char *)local_2c);
      local_8 = 2;
      if (local_1c < 0x51) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xfffffea4,(basic_string<> *)local_2c);
        pUVar7 = UIText::create();
        local_108 = (Sprite *)pUVar7;
        (**(code **)(*(int *)pUVar7 + 0x48))();
        (**(code **)(**(int **)(this + 0x2c) + 0x108))();
        ppAVar1 = *(AnimationFrames ***)(this + 0x4c);
        if (*(AnimationFrames ***)(this + 0x50) == ppAVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(this + 0x48),ppAVar1,(AnimationFrames **)&local_108);
          pUVar7 = (UIText *)local_108;
        }
        else {
          *ppAVar1 = (AnimationFrames *)pUVar7;
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 4;
        }
        pfVar8 = (float *)(**(code **)(*(int *)pUVar7 + 0xb0))();
        *(int *)(this + 0xc) = (int)(*pfVar8 + 2.0);
      }
      else {
        bVar2 = cc_assert_script_compatible("Very big string error.");
        if (!bVar2) {
          cocos2d::log("Assert failed: %s");
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        pvVar12 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_2c[0] + -4);
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar12,pnVar13);
      }
    }
    else if ((iVar10 != iVar15) && (local_10c = 0, iVar10 != iVar15)) {
      iVar15 = 0;
      local_114 = 0;
      do {
        bVar2 = std::_Traits_equal<>("",0,(char *)pbVar3,(uint)unaff_EDI);
        if (!bVar2) {
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)CONCAT31(local_44[0]._1_3_,bVar2);
          std::basic_string<>::assign((basic_string<> *)local_44,"Unknown",7);
          local_8 = 3;
          local_dc = 0;
          local_d8 = 0xf;
          local_ec[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_ec,"Cargo",5);
          local_8._0_1_ = 4;
          local_c4 = 0;
          local_c0 = 0xf;
          local_d4[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_d4,"Helm",4);
          local_8._0_1_ = 5;
          local_ac = 0;
          local_a8 = 0xf;
          local_bc[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_bc,"PComms",6);
          local_8._0_1_ = 6;
          local_94 = 0;
          local_90 = 0xf;
          local_a4[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_a4,"RTComms",7);
          local_8._0_1_ = 7;
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_8c,"Weapons",7);
          local_8._0_1_ = 8;
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_74,"AdminTerm",9);
          local_8._0_1_ = 9;
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_5c,"DockingPerm",0xb);
          local_8._0_1_ = 10;
          local_120 = 0;
          local_11c = (basic_string<> *)0x0;
          local_118 = 0;
          std::vector<>::_Range_construct_or_tidy<>((vector<> *)&local_120);
          local_8 = CONCAT31(local_8._1_3_,0xc);
          _eh_vector_destructor_iterator_(local_ec,0x18,7,word::~word);
          if (((this[1] != (TopBar)0x0) ||
              (pbVar4 = std::_Find_unchecked<>
                                  ((basic_string<> *)(*(int *)(this + 0x68) + iVar15),pbVar3,
                                   unaff_EDI), pbVar4 != local_11c)) &&
             (ppvVar9 = (void **)(*(int *)(this + 0x68) + iVar15), local_44 != ppvVar9)) {
            ppvVar11 = ppvVar9;
            if ((void *)0xf < ppvVar9[5]) {
              ppvVar11 = *ppvVar9;
            }
            std::basic_string<>::assign
                      ((basic_string<> *)local_44,(char *)ppvVar11,(uint)ppvVar9[4]);
          }
          uStack_174 = 0x5631fe;
          strUsingArgs(&stack0xfffffea4);
          pSVar6 = loadSprite();
          local_108 = pSVar6;
          (**(code **)(*(int *)pSVar6 + 0x48))();
          *(int *)(iVar15 + 0x1c + *(int *)(this + 0x68)) = local_114;
          *(undefined4 *)(iVar15 + 0x20 + *(int *)(this + 0x68)) = 0xb;
          ppAVar1 = *(AnimationFrames ***)(this + 0x34);
          if (*(AnimationFrames ***)(this + 0x38) == ppAVar1) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(this + 0x30),ppAVar1,(AnimationFrames **)&local_108);
          }
          else {
            *ppAVar1 = (AnimationFrames *)pSVar6;
            *(int *)(this + 0x34) = *(int *)(this + 0x34) + 4;
          }
          (**(code **)(**(int **)(this + 0x2c) + 0x108))();
          *(int *)(this + 0xc) =
               *(int *)(iVar15 + 0x20 + *(int *)(this + 0x68)) +
               *(int *)(iVar15 + 0x1c + *(int *)(this + 0x68));
          std::vector<>::_Tidy((vector<> *)&local_120);
          local_8 = 0xffffffff;
          if (0xf < local_30) {
            pnVar13 = (nothrow_t *)(local_30 + 1);
            pvVar12 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar12 = *(void **)((int)local_44[0] + -4);
              pnVar13 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_00562b84;
            }
            operator_delete(pvVar12,pnVar13);
          }
        }
        iVar15 = iVar15 + 0x2c;
        local_10c = local_10c + 1;
        local_114 = local_114 + 0xb;
      } while (local_10c < (uint)((*(int *)(this + 0x6c) - *(int *)(this + 0x68)) / 0x2c));
    }
  }
  else {
    std::basic_string<>::assign((basic_string<> *)&stack0xfffffea4,"`!Information in Space",0x16);
    pUVar7 = UIText::create();
    local_108 = (Sprite *)pUVar7;
    (**(code **)(*(int *)pUVar7 + 0x48))();
    (**(code **)(**(int **)(this + 0x2c) + 0x108))();
    ppAVar1 = *(AnimationFrames ***)(this + 0x4c);
    if (*(AnimationFrames ***)(this + 0x50) == ppAVar1) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(this + 0x48),ppAVar1,(AnimationFrames **)&local_108);
      pUVar7 = (UIText *)local_108;
    }
    else {
      *ppAVar1 = (AnimationFrames *)pUVar7;
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 4;
    }
    pfVar8 = (float *)(**(code **)(*(int *)pUVar7 + 0xb0))();
    *(int *)(this + 0xc) = (int)(*pfVar8 + 2.0);
  }
  if (this[1] == (TopBar)0x0) {
    bVar2 = std::_Traits_equal<>("",0,(char *)pbVar3,(uint)unaff_EDI);
    if (!bVar2) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_2c,(basic_string<> *)(this + 0x14));
      local_8 = 0xd;
      std::basic_string<>::basic_string<>((basic_string<> *)&uStack_174,(basic_string<> *)local_2c);
      strWithMaxLength();
      pUVar7 = UIText::create();
      *(UIText **)(this + 100) = pUVar7;
      cocos2d::Ref::retain((Ref *)pUVar7);
      local_110 = 0x3f000000;
      local_10c = 0;
      local_8._0_1_ = 0xe;
      (**(code **)(**(int **)(this + 100) + 0xa0))();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      (**(code **)(**(int **)(this + 100) + 0x48))();
      (**(code **)(**(int **)(this + 0x2c) + 0x108))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        pvVar12 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_2c[0] + -4);
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_005635ea:
        local_8 = 0xffffffff;
        operator_delete(pvVar12,pnVar13);
      }
    }
  }
  else if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
    strUsingArgs((char *)local_2c);
    local_8 = 0xf;
    strUsingArgs((char *)local_104);
    local_8._0_1_ = 0x11;
    if (0xf < local_18) {
      pnVar13 = (nothrow_t *)(local_18 + 1);
      pvVar12 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_2c[0] + -4);
        pnVar13 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::basic_string<>((basic_string<> *)&uStack_174,(basic_string<> *)local_104);
    strWithMaxLength();
    pUVar7 = UIText::create();
    *(UIText **)(this + 100) = pUVar7;
    cocos2d::Ref::retain((Ref *)pUVar7);
    local_128 = 0x3f000000;
    local_124 = 0;
    local_8._0_1_ = 0x12;
    (**(code **)(**(int **)(this + 100) + 0xa0))();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    (**(code **)(**(int **)(this + 100) + 0x48))();
    (**(code **)(**(int **)(this + 0x2c) + 0x108))();
    local_8 = 0xffffffff;
    if (0xf < local_f0) {
      pnVar13 = (nothrow_t *)(local_f0 + 1);
      pvVar12 = local_104[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_104[0] + -4);
        pnVar13 = (nothrow_t *)(local_f0 + 0x24);
        if (0x1f < (uint)((int)local_104[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_005635ea;
    }
  }
  if ((g_gameLogic[0x73] != (GameLogic)0x0) ||
     ((0 < *(int *)(g_gameLogic + 100) &&
      (((float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] == 2.0 ||
       ((float)(&timeCompressionScales)[*(int *)(g_gameLogic + 100)] == 4.0)))))) {
    strUsingArgs(&stack0xfffffea4);
    pSVar6 = loadSprite();
    local_108 = pSVar6;
    if (pSVar6 != (Sprite *)0x0) {
      (**(code **)(*(int *)pSVar6 + 0x48))();
      ppAVar1 = *(AnimationFrames ***)(this + 0x34);
      if (*(AnimationFrames ***)(this + 0x38) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x30),ppAVar1,(AnimationFrames **)&local_108);
      }
      else {
        *ppAVar1 = (AnimationFrames *)pSVar6;
        *(int *)(this + 0x34) = *(int *)(this + 0x34) + 4;
      }
      (**(code **)(**(int **)(this + 0x2c) + 0x108))();
    }
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 2;
  *(int *)(this + 0x10) = (*(int *)(this + 0x54) - *(int *)(this + 0xc)) + -0xc;
  iVar15 = **(int **)(this + 0x2c);
  iVar10 = (**(code **)(iVar15 + 0xb0))();
  local_10c = *(uint *)(iVar10 + 4);
  local_114 = *(int *)(this + 0x78);
  (**(code **)(**(int **)(this + 0x2c) + 0xb0))();
  (**(code **)(iVar15 + 0x48))();
LAB_00563747:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TopBar::updateBarPosition(void)

void __thiscall TopBar::updateBarPosition(TopBar *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  iVar3 = **(int **)(this + 0x2c);
  iVar4 = (**(code **)(iVar3 + 0xb0))();
  fVar1 = *(float *)(iVar4 + 4);
  fVar2 = *(float *)(this + 0x78);
  pfVar5 = (float *)(**(code **)(**(int **)(this + 0x2c) + 0xb0))();
  (**(code **)(iVar3 + 0x48))(*pfVar5 * 0.5,fVar1 * 0.5 - fVar2);
  return;
}
