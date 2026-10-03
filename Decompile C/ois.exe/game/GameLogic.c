#include "../ois.exe.h"


// public: __thiscall GameLogic::GameLogic(void)

GameLogic * __thiscall GameLogic::GameLogic(GameLogic *this)

{
  basic_string<> *this_00;
  basic_string<> *this_01;
  GameLogic *pGVar1;
  _Tree_node<> *p_Var2;
  basic_string<> *pbVar3;
  char **ppcVar4;
  basic_string<> **ppbVar5;
  _Tree_comp_alloc<> *extraout_ECX;
  void *pvVar6;
  _Tree_comp_alloc<> *extraout_ECX_00;
  _Tree_comp_alloc<> *this_02;
  map<> *this_03;
  map<> *this_04;
  map<> *this_05;
  map<> *this_06;
  map<> *this_07;
  map<> *this_08;
  map<> *this_09;
  map<> *this_10;
  map<> *this_11;
  map<> *this_12;
  map<> *this_13;
  nothrow_t *pnVar7;
  __time64_t _Var8;
  basic_string<> local_74 [12];
  undefined4 uStack_68;
  basic_string<> local_5c [4];
  undefined4 uStack_58;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_1c;
  GameLogic *local_18;
  GameLogic *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b176e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0x100;
  local_18 = this;
  cocos2d::Color3B::Color3B((Color3B *)(this + 6),'\0','c','2');
  pGVar1 = operator_new(0x80);
  local_8 = 0;
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  local_14 = pGVar1;
  std::basic_string<>::assign((basic_string<> *)local_34,"CERESPILOT",10);
  *(undefined4 *)pGVar1 = 0xffffffff;
  *(undefined4 *)(pGVar1 + 4) = 0;
  *(undefined4 *)(pGVar1 + 8) = 0;
  *(undefined4 *)(pGVar1 + 0xc) = 0;
  *(undefined4 *)(pGVar1 + 0x10) = 0;
  *(undefined4 *)(pGVar1 + 0x14) = 0;
  *(undefined4 *)(pGVar1 + 0x2c) = 0;
  *(undefined4 *)(pGVar1 + 0x30) = 0xf;
  pGVar1[0x1c] = (GameLogic)0x0;
  *(undefined4 *)(pGVar1 + 0x34) = 0;
  *(undefined4 *)(pGVar1 + 0x38) = 0;
  *(undefined4 *)(pGVar1 + 0x3c) = 0;
  *(undefined4 *)(pGVar1 + 0x40) = 0;
  *(undefined4 *)(pGVar1 + 0x54) = 0;
  *(undefined4 *)(pGVar1 + 0x58) = 0xf;
  pGVar1[0x44] = (GameLogic)0x0;
  *(undefined4 *)(pGVar1 + 0x5c) = 0;
  *(undefined4 *)(pGVar1 + 0x60) = 0xffffffff;
  *(undefined4 *)(pGVar1 + 100) = 0;
  *(undefined4 *)(pGVar1 + 0x68) = 0;
  *(undefined4 *)(pGVar1 + 0x6c) = 0;
  *(undefined4 *)(pGVar1 + 0x70) = 0;
  *(undefined4 *)(pGVar1 + 0x74) = 0;
  *(undefined4 *)(pGVar1 + 0x78) = 0;
  *(undefined4 *)(pGVar1 + 0x7c) = 0;
  this_02 = extraout_ECX;
  if (0xf < local_20) {
    pnVar7 = (nothrow_t *)(local_20 + 1);
    pvVar6 = local_34[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_34[0] + -4);
      pnVar7 = (nothrow_t *)(local_20 + 0x24);
      if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
    this_02 = extraout_ECX_00;
  }
  *(GameLogic **)(this + 0xc) = pGVar1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  local_8 = 1;
  pGVar1 = this + 0x48;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)pGVar1 = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  local_14 = pGVar1;
  p_Var2 = std::_Tree_comp_alloc<>::_Buyheadnode(this_02);
  *(_Tree_node<> **)pGVar1 = p_Var2;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x60) = 0;
  this[0x62] = (GameLogic)0x1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0x10000;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (GameLogic)0x1;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  this[0x8c] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  this[0x94] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 2;
  *(undefined4 *)(this + 0xa0) = 1;
  this[0xa4] = (GameLogic)0x0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0xf;
  this[0xac] = (GameLogic)0x0;
  this_00 = (basic_string<> *)(this + 200);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0xf;
  *this_00 = (basic_string<>)0x0;
  this_01 = (basic_string<> *)(this + 0xe4);
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0xf;
  *this_01 = (basic_string<>)0x0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0xf;
  this[0x100] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined2 *)(this + 0x11c) = 1;
  this[0x11e] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined1 **)(this + 0x124) = &DAT_bf800000;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0xf;
  this[0x128] = (GameLogic)0x0;
  *(undefined2 *)(this + 0x140) = 0;
  this[0x142] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0xf;
  this[0x14c] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0xf;
  this[0x164] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xf;
  this[0x194] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0xf;
  this[0x1ac] = (GameLogic)0x0;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  *(undefined2 *)(this + 0x1c4) = 0;
  this[0x1c6] = (GameLogic)0x0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  local_14 = (GameLogic *)0x0;
  pbVar3 = std::map<>::operator[](this_03,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-ZRGZ",7);
  local_14 = (GameLogic *)0x1;
  pbVar3 = std::map<>::operator[](this_04,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-LAGO",7);
  local_14 = (GameLogic *)0x2;
  pbVar3 = std::map<>::operator[](this_05,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-NARAIL",9);
  local_14 = (GameLogic *)0x3;
  pbVar3 = std::map<>::operator[](this_06,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-STINDO",9);
  local_14 = (GameLogic *)0x4;
  pbVar3 = std::map<>::operator[](this_07,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-DOUROS",9);
  local_14 = (GameLogic *)0x5;
  pbVar3 = std::map<>::operator[](this_08,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-ADRICS",9);
  local_14 = (GameLogic *)0x6;
  pbVar3 = std::map<>::operator[](this_09,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-SOBEL",8);
  local_14 = (GameLogic *)0x7;
  pbVar3 = std::map<>::operator[](this_10,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-LASSLS",9);
  local_14 = (GameLogic *)0x8;
  pbVar3 = std::map<>::operator[](this_11,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-HALLEY",9);
  local_14 = (GameLogic *)0x9;
  pbVar3 = std::map<>::operator[](this_12,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-RUZAPT",9);
  local_14 = (GameLogic *)0xb;
  pbVar3 = std::map<>::operator[](this_13,(int *)&local_14);
  std::basic_string<>::assign(pbVar3,"OP-AURRAS",9);
  *(undefined4 *)(this + 400) = 0x2c;
  *(undefined4 *)(this + 0x18c) = 9;
  *(undefined4 *)(this + 0x188) = 3;
  *(undefined4 *)(this + 0x184) = 4;
  *(undefined4 *)(this + 0x180) = 0x32;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0xa8) = 2;
  if ((basic_string<> *)(this + 0xac) != (basic_string<> *)&DAT_006575c8) {
    ppcVar4 = &DAT_006575c8;
    if (0xf < DAT_006575dc) {
      ppcVar4 = (char **)DAT_006575c8;
    }
    std::basic_string<>::assign((basic_string<> *)(this + 0xac),(char *)ppcVar4,DAT_006575d8);
  }
  *(undefined4 *)(this + 0xe0) = 0;
  if (this_01 != (basic_string<> *)&firstTimeBonusStr) {
    ppbVar5 = &firstTimeBonusStr;
    if (0xf < DAT_0065754c) {
      ppbVar5 = (basic_string<> **)firstTimeBonusStr;
    }
    std::basic_string<>::assign(this_01,(char *)ppbVar5,DAT_00657548);
  }
  *(undefined4 *)(this + 0xc4) = 2;
  if (this_00 != (basic_string<> *)&DAT_00657640) {
    ppcVar4 = &DAT_00657640;
    if (0xf < DAT_00657654) {
      ppcVar4 = (char **)DAT_00657640;
    }
    std::basic_string<>::assign(this_00,(char *)ppcVar4,DAT_00657650);
  }
  *(undefined4 *)(this + 0xfc) = 1;
  std::basic_string<>::assign((basic_string<> *)(this + 0x100),"Leo",3);
  debugPrint("","");
  _Var8 = _time64((__time64_t *)0x0);
  uStack_58 = 0x404b4d;
  srand((uint)_Var8);
  local_14 = (GameLogic *)local_5c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404bb8;
  std::basic_string<>::assign(local_5c,"HapNode",7);
  local_8._0_1_ = 0xc;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_HapNode",0x10);
  local_8._0_1_ = 0xb;
  addComponentFilterData(this,0);
  addComponentFilter(this,0,0);
  local_1c = local_5c;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404c1b;
  std::basic_string<>::assign(local_5c,"Cluster-M",9);
  local_8._0_1_ = 0xd;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_ClusterM",0x11);
  local_8._0_1_ = 0xb;
  addComponentFilterData(this,1);
  addComponentFilter(this,1,1);
  local_1c = local_5c;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404c7e;
  std::basic_string<>::assign(local_5c,"Ro/Aut",6);
  local_8._0_1_ = 0xe;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_RoAut",0xe);
  local_8._0_1_ = 0xb;
  addComponentFilterData(this,2);
  addComponentFilter(this,2,2);
  local_1c = local_5c;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404ce1;
  std::basic_string<>::assign(local_5c,"Shp-1",5);
  local_8._0_1_ = 0xf;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_Shp1",0xd);
  local_8._0_1_ = 0xb;
  addComponentFilterData(this,3);
  addComponentFilter(this,3,3);
  local_1c = local_5c;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404d44;
  std::basic_string<>::assign(local_5c,"Tas Converter",0xd);
  local_8._0_1_ = 0x10;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_TasConverter",0x15);
  local_8._0_1_ = 0xb;
  addComponentFilterData(this,4);
  addComponentFilter(this,4,4);
  local_1c = local_5c;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404da7;
  std::basic_string<>::assign(local_5c,"Adapters/Buffers",0x10);
  local_8._0_1_ = 0x11;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_Buffer",0xf);
  local_8._0_1_ = 0xb;
  addComponentFilterData(this,5);
  addComponentFilter(this,5,5);
  addComponentFilter(this,5,10);
  addComponentFilter(this,5,0xb);
  local_1c = local_5c;
  local_5c[0] = (basic_string<>)0x0;
  uStack_68 = 0x404e20;
  std::basic_string<>::assign(local_5c,"Special",7);
  local_8._0_1_ = 0x12;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"Selector_Misc",0xd);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  addComponentFilterData(this,6);
  addComponentFilter(this,6,6);
  addComponentFilter(this,6,7);
  addComponentFilter(this,6,8);
  addComponentFilter(this,6,9);
  ExceptionList = local_10;
  return this;
}


// public: class SpaceStation * __thiscall GameLogic::getNearestTowLocation(void)

SpaceStation * __thiscall GameLogic::getNearestTowLocation(GameLogic *this)

{
  int iVar1;
  int iVar2;
  SpaceStation *pSVar3;
  uint uVar4;
  int iVar5;
  GameData *pGVar6;
  float fVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  SpaceStation *local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b183c;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar7 = 0.0;
  local_14 = 0.0;
  uVar9 = 0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = (SpaceStation *)0x0;
  piVar8 = (int *)(*(int *)(g_gameData + 0xd8) + 0xcc);
  pGVar6 = g_gameData;
  if (*(int *)(*(int *)(g_gameData + 0xd8) + 0xd0) - *piVar8 >> 2 != 0) {
    do {
      iVar10 = *(int *)(*piVar8 + uVar9 * 4);
      bVar11 = false;
      if (*(int *)(iVar10 + 0x254) != 0) {
        bVar11 = *(int *)(*(int *)(iVar10 + 0x254) + 0x158) == 1;
      }
      if ((bVar11) && (*(char *)(iVar10 + 0x389) == '\0')) {
        if (local_18 == (SpaceStation *)0x0) {
LAB_00405062:
          bVar11 = true;
        }
        else {
          local_28 = (float)*(double *)(iVar10 + 0x28);
          local_24 = (float)*(double *)(iVar10 + 0x30);
          local_30 = (float)*(double *)(*(int *)(pGVar6 + 0xd0) + 0x28);
          local_2c = (float)*(double *)(*(int *)(pGVar6 + 0xd0) + 0x30);
          local_8 = 1;
          fVar7 = 4.2039e-45;
          local_14 = 4.2039e-45;
          fVar12 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&local_28);
          local_14 = (float)(0x5f3759df - ((uint)fVar12 >> 1));
          pGVar6 = g_gameData;
          if ((1.5 - fVar12 * 0.5 * local_14 * local_14) * local_14 * fVar12 < local_1c)
          goto LAB_00405062;
          bVar11 = false;
        }
        if (((uint)fVar7 & 2) != 0) {
          fVar7 = (float)((uint)fVar7 & 0xfffffffd);
        }
        if (((uint)fVar7 & 1) != 0) {
          fVar7 = (float)((uint)fVar7 & 0xfffffffe);
        }
        if (bVar11) {
          local_18 = *(SpaceStation **)(*(int *)(*(int *)(pGVar6 + 0xd8) + 0xcc) + uVar9 * 4);
          local_38 = (float)*(double *)(local_18 + 0x28);
          local_34 = (float)*(double *)(local_18 + 0x30);
          local_40 = (float)*(double *)(*(int *)(pGVar6 + 0xd0) + 0x28);
          local_3c = (float)*(double *)(*(int *)(pGVar6 + 0xd0) + 0x30);
          local_8 = 3;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_40,(Vec2 *)&local_38);
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          local_1c = (1.5 - local_1c * 0.5 * local_14 * local_14) * local_14 * local_1c;
          pGVar6 = g_gameData;
        }
      }
      uVar9 = uVar9 + 1;
      piVar8 = (int *)(*(int *)(pGVar6 + 0xd8) + 0xcc);
    } while (uVar9 < (uint)(*(int *)(*(int *)(pGVar6 + 0xd8) + 0xd0) - *piVar8 >> 2));
    if (local_18 != (SpaceStation *)0x0) {
      ExceptionList = local_10;
      return local_18;
    }
  }
  iVar10 = 0;
  uVar9 = 0;
  if (*(int *)(pGVar6 + 0x40) - *(int *)(pGVar6 + 0x3c) >> 2 != 0) {
    do {
      iVar1 = *(int *)(uVar9 * 4 + *(int *)(pGVar6 + 0x3c));
      iVar2 = *(int *)(pGVar6 + 0xd8);
      if ((iVar1 != iVar2) && (*(int *)(iVar1 + 0x118) != 2)) {
        if (iVar10 == 0) {
LAB_00405272:
          bVar11 = true;
        }
        else {
          local_48 = (float)*(int *)(iVar2 + 0x7c);
          local_44 = (float)*(int *)(iVar2 + 0x80);
          iVar1 = *(int *)(*(int *)(pGVar6 + 0x3c) + uVar9 * 4);
          local_50 = (float)*(int *)(iVar1 + 0x7c);
          local_4c = (float)*(int *)(iVar1 + 0x80);
          local_8 = 5;
          fVar7 = (float)((uint)fVar7 | 0xc);
          local_14 = fVar7;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_50,(Vec2 *)&local_48);
          local_18 = (SpaceStation *)(0x5f3759df - ((uint)local_1c >> 1));
          pGVar6 = g_gameData;
          if ((1.5 - local_1c * 0.5 * (float)local_18 * (float)local_18) * (float)local_18 *
              local_1c < local_20) goto LAB_00405272;
          bVar11 = false;
        }
        if (((uint)fVar7 & 8) != 0) {
          fVar7 = (float)((uint)fVar7 & 0xfffffff7);
        }
        if (((uint)fVar7 & 4) != 0) {
          fVar7 = (float)((uint)fVar7 & 0xfffffffb);
        }
        if (bVar11) {
          iVar10 = *(int *)(uVar9 * 4 + *(int *)(pGVar6 + 0x3c));
          local_58 = (float)*(int *)(*(int *)(pGVar6 + 0xd8) + 0x7c);
          local_54 = (float)*(int *)(*(int *)(pGVar6 + 0xd8) + 0x80);
          iVar1 = *(int *)(*(int *)(pGVar6 + 0x3c) + uVar9 * 4);
          local_60 = (float)*(int *)(iVar1 + 0x7c);
          local_5c = (float)*(int *)(iVar1 + 0x80);
          local_8 = 7;
          local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_60,(Vec2 *)&local_58);
          local_18 = (SpaceStation *)(0x5f3759df - ((uint)local_20 >> 1));
          local_20 = (1.5 - local_20 * 0.5 * (float)local_18 * (float)local_18) * (float)local_18 *
                     local_20;
          pGVar6 = g_gameData;
        }
      }
      local_8 = 0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(pGVar6 + 0x40) - *(int *)(pGVar6 + 0x3c) >> 2));
    if (iVar10 != 0) {
      do {
        do {
          iVar1 = *(int *)(iVar10 + 0xd0);
          iVar2 = *(int *)(iVar10 + 0xcc);
          iVar5 = rand();
          pSVar3 = *(SpaceStation **)(*(int *)(iVar10 + 0xcc) + (iVar5 % (iVar1 - iVar2 >> 2)) * 4);
        } while (pSVar3 == (SpaceStation *)0x0);
        bVar11 = false;
        if (*(int *)(pSVar3 + 0x254) != 0) {
          bVar11 = *(int *)(*(int *)(pSVar3 + 0x254) + 0x158) == 1;
        }
      } while ((!bVar11) || (pSVar3[0x389] != (SpaceStation)0x0));
      ExceptionList = local_10;
      return pSVar3;
    }
  }
  local_8 = 0xffffffff;
  debugPrint("ERROR","Cannot calculate a nearest sector to the player somehow.",uVar4);
  bVar11 = cc_assert_script_compatible("This should never happen.");
  if (!bVar11) {
    cocos2d::log("Assert failed: %s","This should never happen.");
  }
  ExceptionList = local_10;
  return (SpaceStation *)0x0;
}


// public: void __thiscall GameLogic::createWorld(void)

void __thiscall GameLogic::createWorld(GameLogic *this)

{
  int *piVar1;
  basic_string<> *pbVar2;
  bool bVar3;
  _func_void_uchar_ptr *p_Var4;
  NameManager *this_00;
  ModManager *pMVar5;
  DWORD DVar6;
  Infopedia *this_01;
  LPCSTR ***ppppCVar7;
  SaveHandler *this_02;
  int *piVar8;
  nothrow_t *pnVar9;
  basic_string<> *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint unaff_EDI;
  uint uVar14;
  basic_string<> local_74 [8];
  undefined4 uStack_6c;
  uint local_48;
  LPCSTR **local_44 [4];
  undefined4 local_34;
  uint local_30;
  LPCSTR **local_2c [3];
  int local_20;
  int local_1c;
  uint local_18;
  _func_void_uchar_ptr *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1880;
  local_10 = ExceptionList;
  p_Var4 = (_func_void_uchar_ptr *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = p_Var4;
  this_00 = Singleton<>::getInstance();
  NameManager::loadNames(this_00);
  parseLines((char *)0x0,p_Var4,SUB41(unaff_EDI,0));
  pMVar5 = Singleton<ModManager>::instance;
  if (Singleton<ModManager>::instance == (ModManager *)0x0) {
    pMVar5 = operator_new(0xc);
    Singleton<ModManager>::instance = pMVar5;
    *(undefined4 *)pMVar5 = 0;
    *(undefined4 *)(pMVar5 + 4) = 0;
    *(undefined4 *)(pMVar5 + 8) = 0;
  }
  piVar1 = *(int **)(pMVar5 + 4);
  for (piVar8 = *(int **)pMVar5; piVar8 != piVar1; piVar8 = piVar8 + 1) {
    if (*(char *)(*piVar8 + 0x60) != '\0') {
      uStack_6c = 0x4054d3;
      strUsingArgs((char *)local_2c);
      local_8 = 0;
      ppppCVar7 = local_2c;
      if (0xf < local_18) {
        ppppCVar7 = (LPCSTR ***)local_2c[0];
      }
      DVar6 = GetFileAttributesA((LPCSTR)ppppCVar7);
      if ((DVar6 != 0xffffffff) && ((DVar6 & 0x10) == 0)) {
        parseLines(&DAT_00000001,p_Var4,SUB41(unaff_EDI,0));
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        ppppCVar7 = (LPCSTR ***)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppCVar7 = (LPCSTR ***)local_2c[0][-1];
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if ((LPCSTR)0x1f < (LPCSTR)((int)local_2c[0] + (-4 - (int)ppppCVar7))) goto LAB_00405784;
        }
        operator_delete(ppppCVar7,pnVar9);
      }
    }
  }
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"news_",5);
  OSInterface::listFiles();
  local_8 = 1;
  uVar14 = 0;
  iVar12 = local_1c - local_20 >> 0x1f;
  if ((local_1c - local_20) / 0x18 + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      std::basic_string<>::basic_string<>(local_74,(basic_string<> *)(iVar12 + local_20));
      DataLoader::loadNewsArticle();
      iVar12 = iVar12 + 0x18;
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)((local_1c - local_20) / 0x18));
  }
  local_8 = 0xffffffff;
  std::vector<>::_Tidy((vector<> *)&local_20);
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"info_",5);
  OSInterface::listFiles();
  local_8 = 2;
  local_74[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_74,"info_main.txt",0xd);
  DataLoader::loadInfoArticle();
  local_48 = 0;
  iVar12 = local_1c - local_20 >> 0x1f;
  if ((local_1c - local_20) / 0x18 + iVar12 != iVar12) {
    iVar11 = 0;
    iVar12 = local_20;
    do {
      bVar3 = std::_Traits_equal<>("info_main.txt",0xd,(char *)p_Var4,unaff_EDI);
      if (!bVar3) {
        std::basic_string<>::basic_string<>(local_74,(basic_string<> *)(iVar11 + iVar12));
        DataLoader::loadInfoArticle();
        iVar12 = local_20;
      }
      local_48 = local_48 + 1;
      iVar11 = iVar11 + 0x18;
    } while (local_48 < (uint)((local_1c - iVar12) / 0x18));
  }
  local_8 = 0xffffffff;
  std::vector<>::_Tidy((vector<> *)&local_20);
  DataLoader::loadAllChatter();
  this_01 = Singleton<Infopedia>::getInstance();
  Infopedia::refilterArticles(this_01);
  *(undefined4 *)(this_01 + 0x18) = 0;
  if (*(int *)(this_01 + 0x3c) - (int)*(undefined4 **)(this_01 + 0x38) >> 2 != 0) {
    pbVar2 = (basic_string<> *)**(undefined4 **)(this_01 + 0x38);
    *(basic_string<> **)(this_01 + 0x34) = pbVar2;
    if ((basic_string<> *)(this_01 + 0x1c) != pbVar2) {
      pbVar10 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar10 = *(basic_string<> **)pbVar2;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(this_01 + 0x1c),(char *)pbVar10,*(uint *)(pbVar2 + 0x10));
    }
  }
  Singleton<>::getInstance();
  OSInterface::getBaseDirectory();
  local_8 = 3;
  std::basic_string<>::append((basic_string<> *)local_44,"stats.dat",9);
  ppppCVar7 = local_44;
  if (0xf < local_30) {
    ppppCVar7 = (LPCSTR ***)local_44[0];
  }
  DVar6 = GetFileAttributesA((LPCSTR)ppppCVar7);
  if ((DVar6 == 0xffffffff) || ((DVar6 & 0x10) != 0)) {
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      pnVar9 = (nothrow_t *)(local_30 + 1);
      ppppCVar7 = (LPCSTR ***)local_44[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppCVar7 = (LPCSTR ***)local_44[0][-1];
        pnVar9 = (nothrow_t *)(local_30 + 0x24);
        if ((LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppCVar7,pnVar9);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    Singleton<>::getInstance();
    uVar14 = 0;
    piVar8 = *(int **)(g_gameData + 0x60);
    uVar13 = (uint)((int)*(int **)(g_gameData + 100) + (3 - (int)piVar8)) >> 2;
    if (*(int **)(g_gameData + 100) < piVar8) {
      uVar13 = 0;
    }
    if (uVar13 != 0) {
      do {
        iVar12 = *piVar8;
        piVar8 = piVar8 + 1;
        uVar14 = uVar14 + 1;
        *(undefined1 **)(iVar12 + 0x3c4) = &DAT_bf800000;
        *(undefined4 *)(iVar12 + 0x3d0) = 0;
        *(undefined4 *)(iVar12 + 0x3d4) = 0;
        *(undefined4 *)(iVar12 + 0x3c8) = 0;
        *(undefined4 *)(iVar12 + 0x3cc) = 0;
      } while (uVar14 != uVar13);
    }
  }
  else {
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      pnVar9 = (nothrow_t *)(local_30 + 1);
      ppppCVar7 = (LPCSTR ***)local_44[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppCVar7 = (LPCSTR ***)local_44[0][-1];
        pnVar9 = (nothrow_t *)(local_30 + 0x24);
        if ((LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar7))) {
LAB_00405784:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppCVar7,pnVar9);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    Singleton<>::getInstance();
    SaveHandler::loadLocalStats(this_02);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::initialiseClient(bool)

void __thiscall GameLogic::initialiseClient(GameLogic *this,bool param_1)

{
  RoomObject *this_00;
  int iVar1;
  BaseLight *pBVar2;
  GameLogic *pGVar3;
  float fVar4;
  PrivateCommsManager *pPVar5;
  BasicEngine *pBVar6;
  _Tree_node<> *p_Var7;
  PresentationInterface *pPVar8;
  RoomEditor *this_01;
  Director *pDVar9;
  HardwareOutput *this_02;
  _Tree_comp_alloc<> *this_03;
  PresentationInterface *extraout_ECX;
  PresentationInterface *extraout_ECX_00;
  RoomEditor *this_04;
  GameData *pGVar10;
  undefined4 *puVar11;
  RoomObject *pRVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  basic_string<> abStack_48 [4];
  undefined4 uStack_44;
  SectorEditor *pSStack_40;
  bool bVar18;
  int iVar19;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar3 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b18ca;
  local_10 = ExceptionList;
  fVar4 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar17 = false;
  if ((g_gameLogic[0x72] == (GameLogic)0x0) ||
     (*(char *)(*(int *)(g_gameData + 0xcc) + 0x315) == '\0')) {
LAB_004058e8:
    if (g_gameLogic[0x1c5] != (GameLogic)0x0) {
LAB_004058f5:
      iVar13 = *(int *)(g_gameData + 0xd0);
      iVar19 = *(int *)(iVar13 + 0x178);
      if (iVar19 != 0) goto LAB_00405905;
    }
    iVar13 = *(int *)(g_gameData + 0xd0);
  }
  else {
    if (g_gameLogic[0x1c5] != (GameLogic)0x0) goto LAB_004058f5;
    iVar13 = *(int *)(g_gameData + 0xd0);
    iVar19 = *(int *)(iVar13 + 0x178);
    if (iVar19 == 0) goto LAB_004058e8;
    bVar17 = true;
LAB_00405905:
    bVar16 = false;
    if (*(int *)(iVar19 + 0x254) != 0) {
      bVar16 = *(int *)(*(int *)(iVar19 + 0x254) + 0x158) == 1;
    }
    if (bVar16) {
      std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)(iVar19 + 0x68));
      _DstBuf_0065d520 = GameData::getStructure(g_gameData,0);
      pGVar10 = g_gameData + 0xd0;
      ShipData::currentlyBoardedShip = *(Ship **)(*(int *)pGVar10 + 0x178);
      g_gameData[0xd4] = *(GameData *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd0);
      SpaceStation::regenerateExtras(*(SpaceStation **)(*(int *)pGVar10 + 0x178));
      goto LAB_004059d9;
    }
  }
  std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)(iVar13 + 0x68));
  _DstBuf_0065d520 = GameData::getStructure(g_gameData,0);
  if ((_DstBuf_0065d520 == (Structure *)0x0) &&
     (bVar16 = cc_assert_script_compatible("No valid structure for current ship."), !bVar16)) {
    cocos2d::log("Assert failed: %s");
  }
  ShipData::currentlyBoardedShip = *(Ship **)(g_gameData + 0xd0);
LAB_004059d9:
  pPVar5 = Singleton<>::getInstance();
  bVar18 = true;
  bVar16 = true;
  *(basic_string<> **)(pPVar5 + 0x68) = &ShipData::privateComms;
  pPVar5 = Singleton<>::getInstance();
  PrivateCommsManager::render(pPVar5,bVar16,bVar18);
  if (Singleton<>::instance == (BasicEngine *)0x0) {
    pBVar6 = operator_new(0x20);
    *(undefined4 *)pBVar6 = 0;
    pBVar6[4] = (BasicEngine)0x0;
    *(undefined4 *)(pBVar6 + 8) = 0;
    *(undefined4 *)(pBVar6 + 0xc) = 0;
    *(undefined4 *)(pBVar6 + 0x10) = 0;
    local_8 = 1;
    *(undefined4 *)(pBVar6 + 0x14) = 0;
    *(undefined4 *)(pBVar6 + 0x18) = 0;
    p_Var7 = std::_Tree_comp_alloc<>::_Buyheadnode(this_03);
    local_8 = 0xffffffff;
    Singleton<>::instance = pBVar6;
    *(_Tree_node<> **)(pBVar6 + 0x14) = p_Var7;
  }
  MenuConfiguration::configureMenus();
  if ((bVar17) ||
     ((pGVar3[0x1c5] != (GameLogic)0x0 && (*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) != 0)))) {
    iVar19 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x2ac);
    pPVar8 = Singleton<>::getInstance();
    PresentationInterface::showRoom(pPVar8,iVar19);
    iVar19 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x254);
    bVar17 = false;
    if (iVar19 != 0) {
      bVar17 = *(int *)(iVar19 + 0x158) == 1;
    }
    if (!bVar17) {
      Singleton<>::getInstance();
      pPVar8 = extraout_ECX_00;
    }
    else {
      Singleton<>::getInstance();
      pPVar8 = extraout_ECX;
    }
    PresentationInterface::setAirlockStates(pPVar8,*(Ship **)(g_gameData + 0xd0),!bVar17);
  }
  else {
    iVar19 = 0;
    pPVar8 = Singleton<>::getInstance();
    PresentationInterface::showRoom(pPVar8,iVar19);
  }
  pPVar8 = Singleton<>::getInstance();
  iVar19 = *(int *)(pPVar8 + 0x2d4);
  if (iVar19 != 0) {
    puVar11 = *(undefined4 **)(iVar19 + 0x90);
    local_18 = 0;
    uVar14 = (uint)((int)*(undefined4 **)(iVar19 + 0x94) + (3 - (int)puVar11)) >> 2;
    if (*(undefined4 **)(iVar19 + 0x94) < puVar11) {
      uVar14 = 0;
    }
    if (uVar14 != 0) {
      do {
        this_00 = (RoomObject *)*puVar11;
        if (*(int *)(this_00 + 0x3c) == 4) {
          RoomObject::recheckValidScreens(this_00);
          *(undefined4 *)(this_00 + 0x388) = 0;
          if (*(char *)(*(int *)(this_00 + 0x394) + 4) == '\0') {
            RoomObject::nextValidScreen(this_00);
          }
          uVar15 = 0;
          iVar19 = *(int *)(this_00 + 0x398) - *(int *)(this_00 + 0x394) >> 0x1f;
          if ((*(int *)(this_00 + 0x398) - *(int *)(this_00 + 0x394)) / 0x50 + iVar19 != iVar19) {
            pRVar12 = this_00 + 0x624;
            do {
              if (*(int *)pRVar12 == 0) {
                RoomObject::generateScreen(this_00,uVar15);
              }
              uVar15 = uVar15 + 1;
              pRVar12 = pRVar12 + 4;
            } while (uVar15 < (uint)((*(int *)(this_00 + 0x398) - *(int *)(this_00 + 0x394)) / 0x50)
                    );
          }
        }
        local_18 = local_18 + 1;
        puVar11 = puVar11 + 1;
      } while (local_18 != uVar14);
    }
  }
  pPVar8 = Singleton<>::getInstance();
  PresentationInterface::configureSoundForShip(pPVar8);
  pGVar10 = g_gameData;
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 0) {
    pPVar8 = Singleton<>::getInstance();
    *(undefined2 *)(pPVar8 + 0x2a0) = 0x101;
    *(undefined4 *)(pPVar8 + 0x29c) = 2;
    (**(code **)(**(int **)(pPVar8 + 0x2b0) + 0x244))();
    pGVar10 = g_gameData;
    *(undefined4 *)(pPVar8 + 0x2ac) = 0x3ee66667;
    *(undefined4 *)(pPVar8 + 0x2a8) = 0x3ee66667;
  }
  if (param_1) {
    pPVar8 = Singleton<>::getInstance();
    iVar19 = **(int **)(pPVar8 + 0x404);
    Singleton<RoomEditor>::getInstance();
    (**(code **)(iVar19 + 0x108))();
    pPVar8 = Singleton<>::getInstance();
    iVar19 = **(int **)(pPVar8 + 0x404);
    pSStack_40 = (SectorEditor *)0x405c94;
    pSStack_40 = Singleton<>::getInstance();
    uStack_44 = 0x405c9d;
    (**(code **)(iVar19 + 0x108))();
    this_01 = Singleton<RoomEditor>::getInstance();
    this_01[0x278] = (RoomEditor)0x0;
    *(undefined4 *)(this_01 + 0x280) = 0;
    RoomEditor::describeCurrentState(this_01);
    pDVar9 = cocos2d::Director::getInstance();
    cocos2d::EventDispatcher::removeEventListener
              (*(EventDispatcher **)(pDVar9 + 0x58),*(EventListener **)(this_01 + 0x28c));
    *(undefined4 *)(this_01 + 0x28c) = 0;
    RoomEditor::setLightObjectsVisible(this_04,SUB41(this_04,0));
    pGVar10 = g_gameData;
  }
  if (*(int *)(*(int *)(pGVar10 + 0xcc) + 0x70) == 0) {
    if ((OISConfiguration::skipIntro == false) && (g_gameLogic[0x78] != (GameLogic)0x0)) {
      iVar19 = 0;
      pPVar8 = Singleton<>::getInstance();
      PresentationInterface::moveToCameraPos(pPVar8,iVar19,fVar4);
      pPVar8 = Singleton<>::getInstance();
      uVar14 = 0;
      iVar19 = *(int *)(pPVar8 + 0x2d4);
      *(undefined4 *)(pPVar8 + 0x294) = 0x41c80000;
      *(undefined4 *)(pPVar8 + 0x298) = 0x41200000;
      if (*(int *)(iVar19 + 0x94) - *(int *)(iVar19 + 0x90) >> 2 != 0) {
        do {
          iVar13 = *(int *)(*(int *)(iVar19 + 0x90) + uVar14 * 4);
          iVar1 = *(int *)(iVar13 + 0x3c);
          if (((iVar1 == 3) || (iVar1 == 1)) || (iVar1 == 2)) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (bVar17) {
            pBVar2 = *(BaseLight **)(iVar13 + 0x3d8);
            if (pBVar2 != (BaseLight *)0x0) {
              cocos2d::BaseLight::setIntensity(pBVar2,0.0);
              iVar19 = *(int *)(pPVar8 + 0x2d4);
            }
            pBVar2 = *(BaseLight **)(*(int *)(*(int *)(iVar19 + 0x90) + uVar14 * 4) + 0x3d4);
            if (pBVar2 != (BaseLight *)0x0) {
              cocos2d::BaseLight::setIntensity(pBVar2,0.0);
              iVar19 = *(int *)(pPVar8 + 0x2d4);
            }
            pBVar2 = *(BaseLight **)(*(int *)(*(int *)(iVar19 + 0x90) + uVar14 * 4) + 0x3d0);
            if (pBVar2 != (BaseLight *)0x0) {
              cocos2d::BaseLight::setIntensity(pBVar2,0.0);
              iVar19 = *(int *)(pPVar8 + 0x2d4);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < (uint)(*(int *)(iVar19 + 0x94) - *(int *)(iVar19 + 0x90) >> 2));
      }
      if (*(BaseLight **)(iVar19 + 0x9c) != (BaseLight *)0x0) {
        cocos2d::BaseLight::setIntensity(*(BaseLight **)(iVar19 + 0x9c),0.0);
      }
      Singleton<>::getInstance();
      pGVar10 = g_gameData;
    }
    else {
      g_gameLogic[5] = (GameLogic)0x0;
    }
  }
  if (((pGVar3[0x71] != (GameLogic)0x0) ||
      (((iVar19 = *(int *)(*(int *)(pGVar10 + 0xcc) + 0x70), iVar19 != 2 && (iVar19 != 1)) &&
       (iVar19 != 0)))) && (*(char *)(*(int *)(pGVar10 + 0xcc) + 0x30d) == '\0')) {
    iVar19 = 1;
    pPVar8 = Singleton<>::getInstance();
    PresentationInterface::showTablet(pPVar8,iVar19);
    pGVar10 = g_gameData;
  }
  if (((OISConfiguration::hardwareEnabled != false) &&
      ((pGVar3[0x72] != (GameLogic)0x0 || (pGVar3[0x71] != (GameLogic)0x0)))) &&
     (*(int *)(*(int *)(pGVar10 + 0xcc) + 0x70) != 0)) {
    debugPrint("DETAIL","Initialising hardware interface...");
    this_02 = HardwareOutput::getInstance();
    HardwareOutput::findPorts(this_02);
    uVar14 = 0;
    if (*(int *)(this_02 + 0xc) - *(int *)(this_02 + 8) >> 2 != 0) {
      do {
        pSStack_40 = (SectorEditor *)0x405ee0;
        debugPrint("HARDWARE","Initialising interface %d");
        HardwareOutput::initialisePort(this_02,uVar14);
        uVar14 = uVar14 + 1;
      } while (uVar14 < (uint)(*(int *)(this_02 + 0xc) - *(int *)(this_02 + 8) >> 2));
    }
    debugPrint("DETAIL","Hardware interface initialised.");
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::shutDownCurrentScenario(void)

void __thiscall GameLogic::shutDownCurrentScenario(GameLogic *this)

{
  int iVar1;
  Bounty *this_00;
  GameLogic *pGVar2;
  basic_string<> *pbVar3;
  BountyManager *pBVar4;
  NPCShipManager *this_01;
  AuthorityManager *this_02;
  PrivateCommsManager *pPVar5;
  HardwareOutput *this_03;
  GameData *pGVar6;
  uint uVar7;
  uint uVar8;
  allocator<> *unaff_EDI;
  bool bVar9;
  basic_string<> *pbVar10;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar2 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b18f0;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pBVar4 = Singleton<>::instance;
  if (Singleton<>::instance == (BountyManager *)0x0) {
    pBVar4 = operator_new(0xc);
    Singleton<>::instance = pBVar4;
    *(uint *)pBVar4 = 0;
    *(uint *)(pBVar4 + 4) = 0;
    *(uint *)(pBVar4 + 8) = 0;
  }
  pGVar6 = *(GameData **)pBVar4;
  uVar7 = 0;
  uVar8 = (uint)(*(GameData **)(pBVar4 + 4) + (3 - (int)pGVar6)) >> 2;
  if (*(GameData **)(pBVar4 + 4) < pGVar6) {
    uVar8 = 0;
  }
  if (uVar8 != 0) {
    do {
      iVar1 = *(int *)pGVar6;
      pGVar6 = pGVar6 + 4;
      uVar7 = uVar7 + 1;
      *(undefined1 **)(iVar1 + 8) = &DAT_bf800000;
    } while (uVar7 != uVar8);
  }
  GameData::resetStateModifiers(pGVar6);
  this_01 = Singleton<>::getInstance();
  NPCShipManager::reset(this_01);
  this_02 = Singleton<>::getInstance();
  local_8 = 0;
  iVar1 = *(int *)this_02;
  std::_Tree<>::_Erase((_Tree<> *)this_02,*(_Tree_node<> **)(iVar1 + 4));
  pbVar10 = *(basic_string<> **)this_02;
  *(int *)(pbVar10 + 4) = iVar1;
  **(int **)this_02 = iVar1;
  local_8 = 0xffffffff;
  *(int *)(*(int *)this_02 + 8) = iVar1;
  *(undefined4 *)(this_02 + 4) = 0;
  std::_Destroy_range<>(pbVar10,pbVar3,unaff_EDI);
  *(undefined4 *)(this_02 + 0xc) = *(undefined4 *)(this_02 + 8);
  iVar1 = *(int *)(g_gameData + 0x124);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  std::_Destroy_range<>
            ((BankTransaction *)pbVar10,(BankTransaction *)pbVar3,(allocator<> *)unaff_EDI);
  pGVar6 = g_gameData;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
  CommsData::clearState(*(CommsData **)(pGVar6 + 300));
  uVar7 = 0;
  pGVar6 = g_gameData;
  if (*(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2 != 0) {
    do {
      this_00 = *(Bounty **)(*(int *)(pGVar6 + 0x130) + uVar7 * 4);
      if (this_00 != (Bounty *)0x0) {
        Bounty::_scalar_deleting_destructor_(this_00,(uint)this_00);
        pGVar6 = g_gameData;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(pGVar6 + 0x134) - *(int *)(pGVar6 + 0x130) >> 2));
  }
  *(undefined4 *)(pGVar6 + 0x134) = *(undefined4 *)(pGVar6 + 0x130);
  pPVar5 = Singleton<>::getInstance();
  pGVar6 = g_gameData;
  *(undefined4 *)(pPVar5 + 0x70) = 0;
  *(undefined4 *)(pPVar5 + 0x6c) = 0;
  iVar1 = *(int *)(pGVar6 + 0xd0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x374) = 0;
  }
  bVar9 = OISConfiguration::hardwareEnabled != false;
  pPVar5[0x80] = (PrivateCommsManager)0x0;
  *(undefined4 *)(pPVar5 + 0x1c) = 0xffffffff;
  *(undefined1 **)(pPVar5 + 0x18) = &DAT_bf800000;
  *(undefined4 *)(pPVar5 + 0x10) = 0;
  *(undefined4 *)(pPVar5 + 8) = 0;
  *(undefined4 *)(pPVar5 + 0xc) = 0;
  *(undefined1 **)(pPVar5 + 0x84) = &DAT_bf800000;
  if ((bVar9) &&
     (((pGVar2[0x72] != (GameLogic)0x0 || (pGVar2[0x71] != (GameLogic)0x0)) &&
      (*(int *)(*(int *)(pGVar6 + 0xcc) + 0x70) != 0)))) {
    debugPrint("DETAIL","Shutting down hardware interface...");
    this_03 = HardwareOutput::m_instance;
    if (HardwareOutput::m_instance == (HardwareOutput *)0x0) {
      this_03 = operator_new(0x14);
      HardwareOutput::m_instance = this_03;
      *this_03 = (HardwareOutput)0x0;
      *(undefined4 *)(this_03 + 4) = 0;
      *(undefined4 *)(this_03 + 8) = 0;
      *(undefined4 *)(this_03 + 0xc) = 0;
      *(undefined4 *)(this_03 + 0x10) = 0;
    }
    HardwareOutput::shutdown(this_03);
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: void __thiscall GameLogic::initialiseScenario(void)

void __thiscall GameLogic::initialiseScenario(GameLogic *this)

{
  vector<> *pvVar1;
  PassengerInstance *this_00;
  NSMSectorInfo *pNVar2;
  AnimationFrames **ppAVar3;
  SpaceStation *this_01;
  int *piVar4;
  TradeLocation *this_02;
  Ship *pSVar5;
  bool bVar6;
  char *pcVar7;
  FlagManager *this_03;
  FictionData *this_04;
  EmailManager *this_05;
  basic_string<> *pbVar8;
  Scenario *pSVar9;
  NPCShipManager *this_06;
  undefined4 *puVar10;
  vector<> *pvVar11;
  _Tree_node<> *p_Var12;
  SaveHandler *this_07;
  ConversationManager *pCVar13;
  undefined4 *puVar14;
  GameLogic *pGVar15;
  _Tree_comp_alloc<> *this_08;
  GameLogic *this_09;
  GameData *pGVar16;
  Ship *pSVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  AnimationFrames **ppAVar21;
  uint uVar22;
  uint uVar23;
  basic_string<> *pbVar24;
  int iVar25;
  char *pcVar26;
  uint unaff_EDI;
  basic_string<> local_90 [12];
  undefined4 uStack_84;
  vector<> local_78 [12];
  undefined4 uStack_6c;
  uint local_5c;
  int local_34;
  int *piStack_30;
  int local_2c;
  NPCShipManager *local_28;
  vector<> *local_24;
  vector<> *local_20;
  uint local_1c;
  NPCShipManager *local_18;
  GameLogic *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar15 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b198d;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = g_gameLogic;
  this_00 = *(PassengerInstance **)(g_gameData + 0x128);
  if (this_00 != (PassengerInstance *)0x0) {
    PassengerInstance::~PassengerInstance(this_00);
    operator_delete(this_00,(nothrow_t *)0x94);
    *(undefined4 *)(g_gameData + 0x128) = 0;
  }
  if (pGVar15[0x1c5] == (GameLogic)0x0) {
    *(undefined4 *)(pGVar15 + 400) = 0x2c;
    *(undefined4 *)(pGVar15 + 0x18c) = 9;
    *(undefined4 *)(pGVar15 + 0x188) = 3;
    *(undefined4 *)(pGVar15 + 0x184) = 4;
    *(undefined4 *)(pGVar15 + 0x180) = 0x32;
    *(undefined4 *)(pGVar15 + 0x17c) = 0;
  }
  pGVar15[4] = (GameLogic)0x1;
  this_03 = Singleton<>::getInstance();
  FlagManager::reset(this_03);
  uVar23 = 0;
  this_04 = Singleton<>::instance;
  while( true ) {
    if (this_04 == (FictionData *)0x0) {
      this_04 = operator_new(0x18);
      *(undefined4 *)(this_04 + 0x10) = 0;
      *(undefined4 *)(this_04 + 0x14) = 0;
      *(undefined4 *)this_04 = 0;
      *(undefined4 *)(this_04 + 4) = 0;
      *(undefined4 *)(this_04 + 8) = 0;
      *(undefined4 *)(this_04 + 0xc) = 0;
      *(undefined4 *)(this_04 + 0x10) = 0;
      *(undefined4 *)(this_04 + 0x14) = 0;
      Singleton<>::instance = this_04;
    }
    if ((uint)(*(int *)(this_04 + 4) - *(int *)this_04 >> 2) <= uVar23) break;
    if (this_04 == (FictionData *)0x0) {
      this_04 = operator_new(0x18);
      *(int *)(this_04 + 0x10) = 0;
      *(int *)(this_04 + 0x14) = 0;
      *(int *)this_04 = 0;
      *(int *)(this_04 + 4) = 0;
      *(int *)(this_04 + 8) = 0;
      *(int *)(this_04 + 0xc) = 0;
      *(int *)(this_04 + 0x10) = 0;
      *(int *)(this_04 + 0x14) = 0;
      Singleton<>::instance = this_04;
    }
    iVar25 = *(int *)(*(int *)this_04 + uVar23 * 4);
    uVar23 = uVar23 + 1;
    *(undefined4 *)(iVar25 + 0xd4) = 0;
    *(undefined1 *)(iVar25 + 0xe0) = 0;
    *(undefined4 *)(iVar25 + 0xd0) = 0;
    *(undefined4 *)(iVar25 + 0xd8) = 0;
    *(undefined4 *)(iVar25 + 0xdc) = 0xffffffff;
  }
  clearPlayerContracts((GameLogic *)this_04);
  if (g_gameLogic[0x72] != (GameLogic)0x0) {
    *(undefined4 *)(g_gameData + 0xd0) = 0;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    local_24 = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine((TradeEngine *)local_24);
    local_8 = 0xffffffff;
  }
  TradeEngine::resetStates(Singleton<>::instance);
  this_05 = Singleton<>::instance;
  if (Singleton<>::instance == (EmailManager *)0x0) {
    this_05 = operator_new(0x2c);
    Singleton<>::instance = this_05;
    *this_05 = (EmailManager)0x0;
    *(undefined4 *)(this_05 + 4) = 0;
    *(undefined4 *)(this_05 + 8) = 0;
    *(undefined4 *)(this_05 + 0xc) = 0;
    *(undefined4 *)(this_05 + 0x10) = 0;
    *(undefined4 *)(this_05 + 0x14) = 0;
    *(undefined4 *)(this_05 + 0x18) = 0;
    *(undefined4 *)(this_05 + 0x1c) = 0;
    *(undefined4 *)(this_05 + 0x20) = 0;
    *(undefined4 *)(this_05 + 0x24) = 0;
    *(undefined4 *)(this_05 + 0x28) = 0;
    local_24 = (vector<> *)this_05;
  }
  EmailManager::resetState(this_05);
  CommsData::clearState(*(CommsData **)(g_gameData + 300));
  pbVar24 = (basic_string<> *)(g_gameData + 0xb4);
  bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI);
  if ((bVar6) && (pbVar24 != &OISConfiguration::scenario)) {
    pbVar8 = &OISConfiguration::scenario;
    if (0xf < DAT_006577ac) {
      pbVar8 = _scenario;
    }
    std::basic_string<>::assign(pbVar24,(char *)pbVar8,DAT_006577a8);
  }
  *(int *)(pGVar15 + 0xa0) = OISConfiguration::difficulty;
  debugPrint("GAME","Difficulty loaded from config: %s");
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&local_5c,(basic_string<> *)(g_gameData + 0xb4));
  pSVar9 = GameData::getScenario();
  *(Scenario **)(g_gameData + 0xcc) = pSVar9;
  debugPrint("GAME","Initialising scenario \'%s\'");
  pGVar16 = g_gameData;
  if ((g_gameLogic[0x72] == (GameLogic)0x0) && (g_gameLogic[0x70] == (GameLogic)0x0)) {
    pSVar17 = *(Ship **)(g_gameData + 0xd0);
    ShipData::currentlyBoardedShip = pSVar17;
    g_gameData[0xd4] = *(GameData *)(*(int *)(pSVar17 + 0x254) + 0xd0);
  }
  else {
    *(undefined1 *)(*(int *)(g_gameData + 0xcc) + 0x164) = 0;
    if ((pGVar15[0x1c5] == (GameLogic)0x0) && (*(int *)(*(int *)(pGVar16 + 0xcc) + 0x70) == 2)) {
      local_24 = (vector<> *)&local_5c;
      local_5c = local_5c & 0xffffff00;
      std::basic_string<>::assign((basic_string<> *)&local_5c,"games_started",0xd);
      local_8 = 1;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        local_20 = operator_new(0x58);
        local_8 = CONCAT31(local_8._1_3_,2);
        Singleton<Stats>::instance = (Stats *)Stats::Stats((Stats *)local_20);
      }
      local_8 = 0xffffffff;
      Stats::addStat(Singleton<Stats>::instance);
      local_24 = (vector<> *)&stack0xffffffa0;
      uStack_6c = 0x40669a;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffffa0,"",0);
      local_20 = local_78;
      local_8 = 3;
      local_78[0] = (vector<>)0x0;
      uStack_84 = 0x4066c6;
      std::basic_string<>::assign((basic_string<> *)local_78,"games_started",0xd);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_90[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_90,"meta",4);
      local_8 = 0xffffffff;
      Analytics::logEvent();
      pGVar16 = g_gameData;
    }
    piVar18 = (int *)(*(int *)(pGVar16 + 0xcc) + 0x318);
    local_1c = 0;
    if (*(int *)(*(int *)(pGVar16 + 0xcc) + 0x31c) - *piVar18 >> 2 != 0) {
      local_18 = Singleton<>::instance;
      do {
        uVar23 = local_1c;
        iVar25 = *piVar18;
        this_06 = local_18;
        if (local_18 == (NPCShipManager *)0x0) {
          this_06 = operator_new(0x20);
          *this_06 = (NPCShipManager)0x0;
          *(undefined4 *)(this_06 + 4) = 0;
          *(undefined4 *)(this_06 + 8) = 0;
          *(undefined4 *)(this_06 + 0xc) = 0;
          *(undefined4 *)(this_06 + 0x10) = 0;
          *(undefined4 *)(this_06 + 0x14) = 0;
          *(undefined4 *)(this_06 + 0x18) = 0;
          *(undefined4 *)(this_06 + 0x1c) = 0;
          local_8 = 7;
          local_28 = this_06;
          local_18 = this_06;
          NPCShipManager::reset(this_06);
          local_8 = 0xffffffff;
          Singleton<>::instance = this_06;
        }
        local_24 = (vector<> *)(this_06 + 8);
        piVar18 = *(int **)(this_06 + 8);
        iVar25 = *(int *)(iVar25 + uVar23 * 4);
        uVar23 = 0;
        iVar20 = *(int *)(this_06 + 0xc) - (int)piVar18 >> 0x1f;
        iVar19 = (*(int *)(this_06 + 0xc) - (int)piVar18) / 0xc + iVar20;
        if (iVar19 != iVar20) {
          do {
            if (*piVar18 == iVar25) goto LAB_00406829;
            uVar23 = uVar23 + 1;
            piVar18 = piVar18 + 3;
          } while (uVar23 < (uint)(iVar19 - iVar20));
        }
        puVar10 = *(undefined4 **)(g_gameData + 0x3c);
        for (puVar14 = puVar10; puVar14 != *(undefined4 **)(g_gameData + 0x40);
            puVar14 = puVar14 + 1) {
          piVar18 = (int *)*puVar14;
          if (*piVar18 == iVar25) goto LAB_004067e5;
        }
        piVar18 = (int *)0x0;
LAB_004067e5:
        local_2c = piVar18[0x46];
        for (; puVar10 != *(undefined4 **)(g_gameData + 0x40); puVar10 = puVar10 + 1) {
          piStack_30 = (int *)*puVar10;
          if (*piStack_30 == iVar25) goto LAB_00406804;
        }
        piStack_30 = (int *)0x0;
LAB_00406804:
        pNVar2 = *(NSMSectorInfo **)(this_06 + 0xc);
        local_34 = iVar25;
        if (*(NSMSectorInfo **)(this_06 + 0x10) == pNVar2) {
          std::vector<>::_Emplace_reallocate<>(local_24,pNVar2,(NSMSectorInfo *)&local_34);
          local_18 = Singleton<>::instance;
        }
        else {
          *(ulonglong *)pNVar2 = CONCAT44(piStack_30,iVar25);
          *(int *)(pNVar2 + 8) = local_2c;
          *(int *)(this_06 + 0xc) = *(int *)(this_06 + 0xc) + 0xc;
        }
LAB_00406829:
        local_1c = local_1c + 1;
        piVar18 = (int *)(*(int *)(g_gameData + 0xcc) + 0x318);
        pGVar16 = g_gameData;
      } while (local_1c < (uint)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x31c) - *piVar18 >> 2));
    }
    if (*(char *)(*(int *)(pGVar16 + 0xcc) + 0x311) == '\0') {
      iVar25 = 0x158;
      do {
        iVar19 = 0;
        iVar20 = *(int *)(iVar25 + *(int *)(pGVar16 + 0xcc));
        if (1 < iVar20) {
          if (0 < iVar20) {
            iVar19 = rand();
            iVar19 = iVar19 % iVar20 + 1;
          }
          iVar19 = iVar19 + -1;
        }
        *(int *)(local_14 + iVar25 + -0x104) = iVar19;
        local_5c = 0x406a8d;
        debugPrint("GAME","waypoint set selection for team %d: %d/%d");
        iVar25 = iVar25 + 4;
        pGVar16 = g_gameData;
      } while (iVar25 < 0x164);
    }
    else {
      iVar25 = *(int *)(*(int *)(pGVar16 + 0xcc) + 0x15c);
      iVar20 = 0;
      if (0 < iVar25) {
        iVar20 = rand();
        iVar20 = iVar20 % iVar25 + 1;
      }
      debugPrint("GAME","Waypoint set selection sync\'d: picked %d for teams 1 & 2");
      iVar25 = 0;
      do {
        if (iVar25 < 1) {
          if (iVar25 == 0) {
            *(undefined4 *)(local_14 + 0x54) = 0;
            goto LAB_004068f3;
          }
        }
        else {
          *(int *)(local_14 + iVar25 * 4 + 0x54) = iVar20 + -1;
LAB_004068f3:
          local_5c = 0x406902;
          debugPrint("GAME","waypoint set selection for team %d: %d/%d");
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < 3);
    }
    local_1c = 0;
    piVar18 = (int *)(*(int *)(g_gameData + 0xcc) + 1000);
    pGVar15 = (GameLogic *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x3ec) - *piVar18);
    if ((int)pGVar15 / 0x18 + ((int)pGVar15 >> 0x1f) != (int)pGVar15 >> 0x1f) {
      iVar25 = 0;
      do {
        local_28 = (NPCShipManager *)&stack0xffffffa0;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffffa0,(basic_string<> *)(*piVar18 + iVar25));
        local_8 = 8;
        if (Singleton<>::instance == (FlagManager *)0x0) {
          pvVar11 = operator_new(0x30);
          *(undefined4 *)pvVar11 = 0;
          *(undefined4 *)(pvVar11 + 4) = 0;
          *(undefined4 *)(pvVar11 + 8) = 0;
          local_8 = CONCAT31(local_8._1_3_,10);
          pvVar1 = pvVar11 + 0xc;
          *(undefined4 *)pvVar1 = 0;
          *(undefined4 *)(pvVar11 + 0x10) = 0;
          local_24 = pvVar11;
          local_20 = pvVar1;
          p_Var12 = std::_Tree_comp_alloc<>::_Buyheadnode(this_08);
          *(_Tree_node<> **)pvVar1 = p_Var12;
          *(undefined4 *)(pvVar11 + 0x24) = 0;
          *(undefined4 *)(pvVar11 + 0x28) = 0xf;
          pvVar11[0x14] = (vector<>)0x0;
          Singleton<>::instance = (FlagManager *)pvVar11;
        }
        local_8 = 0xffffffff;
        FlagManager::setFlag(Singleton<>::instance);
        iVar25 = iVar25 + 0x18;
        local_1c = local_1c + 1;
        piVar18 = (int *)(*(int *)(g_gameData + 0xcc) + 1000);
        pGVar15 = (GameLogic *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x3ec) - *piVar18);
      } while (local_1c < (uint)((int)pGVar15 / 0x18));
    }
    runStateCheckLogic(pGVar15);
    pGVar15 = local_14;
    resetSyntheticInstances(local_14);
    if (g_gameLogic[0x1c5] == (GameLogic)0x0) {
      resetShipsInScenario(pGVar15,true);
      addSyntheticInstances(pGVar15);
    }
    else {
      clearShipsInScenario(this_09,true);
    }
    pGVar16 = g_gameData;
    pGVar15 = g_gameLogic;
    *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) =
         (int)(&firstTimeBonus)[*(int *)(g_gameLogic + 0xe0)] +
         *(int *)(*(int *)(g_gameData + 0xcc) + 100);
    if (pGVar15[0x1c5] != (GameLogic)0x0) {
      this_07 = Singleton<>::getInstance();
      SaveHandler::loadGame(this_07);
      pGVar16 = g_gameData;
    }
    local_18 = (NPCShipManager *)0x0;
    iVar25 = *(int *)(*(int *)(pGVar16 + 0xd8) + 0xcc);
    if (*(int *)(*(int *)(pGVar16 + 0xd8) + 0xd0) - iVar25 >> 2 != 0) {
      do {
        uVar23 = (int)local_18 * 4;
        iVar25 = *(int *)(uVar23 + iVar25);
        iVar20 = *(int *)(*(int *)(iVar25 + 0x254) + 0x158);
        local_1c = uVar23;
        if (((iVar20 == 3) || (iVar20 == 1)) || (iVar20 == 0)) {
          uVar22 = 0;
          *(undefined4 *)(iVar25 + 0x36c) = *(undefined4 *)(iVar25 + 0x368);
          pCVar13 = Singleton<>::getInstance();
          pGVar16 = g_gameData;
          if (*(int *)(pCVar13 + 0x40) - *(int *)(pCVar13 + 0x3c) >> 2 != 0) {
            do {
              pCVar13 = Singleton<>::getInstance();
              if ((*(char *)(*(int *)(*(int *)(pCVar13 + 0x3c) + uVar22 * 4) + 0x1d) == '\0') ||
                 (*(char *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xcc) + uVar23) + 0x234)
                  == '\0')) {
                piVar18 = (int *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xcc) + local_1c);
                Singleton<>::getInstance();
                iVar25 = *piVar18;
                pcVar26 = (char *)(iVar25 + 0x238);
                if (0xf < *(uint *)(iVar25 + 0x24c)) {
                  pcVar26 = *(char **)(iVar25 + 0x238);
                }
                bVar6 = std::_Traits_equal<>(pcVar26,*(uint *)(iVar25 + 0x248),pcVar7,unaff_EDI);
                if (bVar6) {
                  pCVar13 = Singleton<>::getInstance();
                  iVar25 = *(int *)(pCVar13 + 0x3c);
                  iVar20 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xcc) + (int)local_18 * 4
                                   );
                  goto LAB_00406c36;
                }
              }
              else {
                pCVar13 = Singleton<>::getInstance();
                iVar25 = *(int *)(pCVar13 + 0x3c);
                iVar20 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xcc) + uVar23);
LAB_00406c36:
                ppAVar3 = *(AnimationFrames ***)(iVar20 + 0x36c);
                ppAVar21 = (AnimationFrames **)(iVar25 + uVar22 * 4);
                if (*(AnimationFrames ***)(iVar20 + 0x370) == ppAVar3) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)(iVar20 + 0x368),ppAVar3,ppAVar21);
                }
                else {
                  *ppAVar3 = *ppAVar21;
                  *(int *)(iVar20 + 0x36c) = *(int *)(iVar20 + 0x36c) + 4;
                }
              }
              uVar22 = uVar22 + 1;
              pCVar13 = Singleton<>::getInstance();
              pGVar16 = g_gameData;
              uVar23 = local_1c;
            } while (uVar22 < (uint)(*(int *)(pCVar13 + 0x40) - *(int *)(pCVar13 + 0x3c) >> 2));
          }
        }
        local_18 = local_18 + 1;
        iVar25 = *(int *)(*(int *)(pGVar16 + 0xd8) + 0xcc);
      } while (local_18 <
               (NPCShipManager *)(*(int *)(*(int *)(pGVar16 + 0xd8) + 0xd0) - iVar25 >> 2));
    }
    uVar23 = 0;
    iVar25 = *(int *)(pGVar16 + 0x3c);
    if (*(int *)(pGVar16 + 0x40) - iVar25 >> 2 != 0) {
      do {
        iVar25 = *(int *)(iVar25 + uVar23 * 4);
        uVar22 = 0;
        iVar20 = *(int *)(iVar25 + 0xcc);
        if (*(int *)(iVar25 + 0xd0) - iVar20 >> 2 != 0) {
          do {
            this_01 = *(SpaceStation **)(iVar20 + uVar22 * 4);
            bVar6 = false;
            iVar25 = *(int *)(this_01 + 0x254);
            if (iVar25 != 0) {
              bVar6 = *(int *)(iVar25 + 0x158) == 1;
            }
            if (bVar6) {
              SpaceStation::checkExistState(this_01);
              pGVar16 = g_gameData;
            }
            uVar22 = uVar22 + 1;
            iVar25 = *(int *)(*(int *)(pGVar16 + 0x3c) + uVar23 * 4);
            iVar20 = *(int *)(iVar25 + 0xcc);
          } while (uVar22 < (uint)(*(int *)(iVar25 + 0xd0) - iVar20 >> 2));
        }
        uVar23 = uVar23 + 1;
        iVar25 = *(int *)(pGVar16 + 0x3c);
      } while (uVar23 < (uint)(*(int *)(pGVar16 + 0x40) - iVar25 >> 2));
    }
    uVar22 = 0;
    piVar18 = *(int **)(*(int *)(pGVar16 + 0xd8) + 0xcc);
    piVar4 = *(int **)(*(int *)(pGVar16 + 0xd8) + 0xd0);
    uVar23 = (uint)((int)piVar4 + (3 - (int)piVar18)) >> 2;
    if (piVar4 < piVar18) {
      uVar23 = 0;
    }
    if (uVar23 != 0) {
      do {
        bVar6 = false;
        iVar25 = *(int *)(*piVar18 + 0x254);
        if (iVar25 != 0) {
          bVar6 = *(int *)(iVar25 + 0x158) == 1;
        }
        if ((bVar6) &&
           (this_02 = *(TradeLocation **)(*piVar18 + 0x398), this_02 != (TradeLocation *)0x0)) {
          TradeLocation::resetAndRepopulate(this_02);
        }
        uVar22 = uVar22 + 1;
        piVar18 = piVar18 + 1;
        pGVar16 = g_gameData;
      } while (uVar22 != uVar23);
    }
    pSVar17 = ShipData::currentlyBoardedShip;
    *(undefined4 *)(local_14 + 0x6c) = 0;
    *(undefined4 *)(local_14 + 0x68) = 0;
    pGVar15 = local_14;
  }
  if (g_gameLogic[0x1c5] == (GameLogic)0x0) {
    iVar25 = *(int *)(pGVar16 + 0x124);
    pbVar24 = (basic_string<> *)(iVar25 + 4);
    if ((basic_string<> *)(pGVar16 + 0xf4) != pbVar24) {
      if (0xf < *(uint *)(iVar25 + 0x18)) {
        pbVar24 = *(basic_string<> **)pbVar24;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pGVar16 + 0xf4),(char *)pbVar24,*(uint *)(iVar25 + 0x14));
    }
  }
  else {
    pSVar5 = *(Ship **)(pGVar16 + 0xd0);
    if (*(int *)(pSVar5 + 0x178) != 0) {
      iVar25 = *(int *)(*(int *)(pSVar5 + 0x178) + 0x254);
      bVar6 = false;
      if (iVar25 != 0) {
        bVar6 = *(int *)(iVar25 + 0x158) == 1;
      }
      if ((bVar6) && (pSVar5 == pSVar17)) {
        pSVar5[0x280] = (Ship)0x1;
        *(undefined1 *)(*(int *)(pGVar16 + 0xd0) + 0x281) = 1;
        goto LAB_00406e2e;
      }
    }
    pSVar5[0x280] = (Ship)0x0;
    *(undefined1 *)(*(int *)(pGVar16 + 0xd0) + 0x281) = 0;
  }
LAB_00406e2e:
  pGVar15[4] = (GameLogic)0x0;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::completeMultiplayerScenario(int)

void __thiscall GameLogic::completeMultiplayerScenario(GameLogic *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LogSystem *this_00;
  GameData *pGVar4;
  bool bVar5;
  char *pcVar6;
  NetworkServer *pNVar7;
  int iVar8;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  uint unaff_EDI;
  int *piVar9;
  basic_string<> local_40 [8];
  undefined4 uStack_38;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar4 = g_gameData;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b19d0;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(uint *)(*(int *)(g_gameData + 0xcc) + 0x388) = (param_1 != 0) + 1;
  *(uint *)(*(int *)(pGVar4 + 0xcc) + 0x38c) = (param_1 != 1) + 1;
  *(uint *)(*(int *)(pGVar4 + 0xcc) + 0x390) = (param_1 != 2) + 1;
  *(int *)(*(int *)(pGVar4 + 0xcc) + 0x3d8) = param_1;
  if (g_gameLogic[0x70] == (GameLogic)0x0) {
    if (g_gameLogic[0x72] != (GameLogic)0x0) {
      iVar2 = *(int *)(pGVar4 + 0xd0);
      if (param_1 == *(int *)(iVar2 + 100)) {
        std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
        this_00 = extraout_ECX;
      }
      else {
        std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
        this_00 = extraout_ECX_00;
      }
      uStack_38 = 0x40722c;
      LogSystem::addLogLine(this_00,*(LogPriority *)(iVar2 + 0x224),(char *)0x3);
    }
  }
  else {
    pNVar7 = Singleton<>::getInstance();
    piVar9 = *(int **)(pNVar7 + 0x3c);
    piVar1 = *(int **)(pNVar7 + 0x40);
    if (piVar9 != piVar1) {
      do {
        if (*(int *)(*piVar9 + 100) != 0) {
          iVar2 = *(int *)(*(int *)(*piVar9 + 100) + 100);
          iVar8 = iVar2 * 0x6c;
          iVar3 = *(int *)(g_gameData + 0xcc);
          if (iVar2 == param_1) {
            bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
            if (bVar5) {
              local_40[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_40,"Scenario won.",0xd);
              local_8 = 1;
            }
            else {
              std::basic_string<>::basic_string<>
                        (local_40,(basic_string<> *)(iVar3 + 0x1e0 + iVar8));
              local_8 = 0;
            }
          }
          else {
            bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
            if (bVar5) {
              local_40[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_40,"Scenario failed.",0x10);
              local_8 = 3;
            }
            else {
              std::basic_string<>::basic_string<>
                        (local_40,(basic_string<> *)(iVar3 + 0x210 + iVar8));
              local_8 = 2;
            }
          }
          if (Singleton<>::instance == (NetworkData *)0x0) {
            Singleton<>::instance = operator_new(1);
          }
          local_8 = 0xffffffff;
          NetworkData::sendMessageToClient();
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != piVar1);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::completeSingleplayerScenario(bool)

void __thiscall GameLogic::completeSingleplayerScenario(GameLogic *this,bool param_1)

{
  float fVar1;
  GameLogic *pGVar2;
  bool bVar3;
  float fVar4;
  basic_string<> *pbVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  char *pcVar10;
  GameData *pGVar11;
  void *pvVar12;
  SaveHandler *this_00;
  nothrow_t *pnVar13;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  pGVar2 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1a20;
  local_10 = ExceptionList;
  fVar4 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = fVar4;
  bVar3 = hasPassenger(this);
  pGVar11 = g_gameData;
  if (bVar3) {
    g_gameData[0x1c7] = (GameData)0x1;
  }
  iVar9 = *(int *)(pGVar11 + 0xd0);
  pbVar5 = (basic_string<> *)(iVar9 + 8);
  if ((basic_string<> *)(pGVar11 + 0x17c) != pbVar5) {
    if (0xf < *(uint *)(iVar9 + 0x1c)) {
      pbVar5 = *(basic_string<> **)pbVar5;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(pGVar11 + 0x17c),(char *)pbVar5,*(uint *)(iVar9 + 0x18));
    pGVar11 = g_gameData;
  }
  iVar9 = *(int *)(*(int *)(pGVar11 + 0xd0) + 0x254);
  pbVar5 = (basic_string<> *)(iVar9 + 0x48);
  if ((basic_string<> *)(pGVar11 + 0x194) != pbVar5) {
    if (0xf < *(uint *)(iVar9 + 0x5c)) {
      pbVar5 = *(basic_string<> **)pbVar5;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(pGVar11 + 0x194),(char *)pbVar5,*(uint *)(iVar9 + 0x58));
    pGVar11 = g_gameData;
  }
  iVar9 = *(int *)(*(int *)(pGVar11 + 0xd0) + 0x254);
  pbVar5 = (basic_string<> *)(iVar9 + 0x30);
  if ((basic_string<> *)(pGVar11 + 0x1ac) != pbVar5) {
    if (0xf < *(uint *)(iVar9 + 0x44)) {
      pbVar5 = *(basic_string<> **)pbVar5;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(pGVar11 + 0x1ac),(char *)pbVar5,*(uint *)(iVar9 + 0x40));
    pGVar11 = g_gameData;
  }
  *(undefined4 *)(pGVar11 + 0x178) = *(undefined4 *)(*(int *)(pGVar11 + 0xd0) + 0x20);
  *(undefined1 *)(*(int *)(pGVar11 + 0xcc) + 0x164) = 1;
  *(bool *)(pGVar11 + 0x170) = param_1;
  writeObituary((GameLogic *)pGVar11);
  pGVar11 = g_gameData;
  if (!param_1) {
    *(int *)(*(int *)(g_gameData + 0xcc) + 0x3d0) =
         *(int *)(*(int *)(g_gameData + 0xcc) + 0x3d0) + 1;
    goto LAB_0040775e;
  }
  *(int *)(*(int *)(g_gameData + 0xcc) + 0x3d0) = *(int *)(*(int *)(g_gameData + 0xcc) + 0x3d0) + 1;
  fVar1 = *(float *)(*(int *)(pGVar11 + 0xcc) + 0x3c4);
  if (fVar1 == -1.0) {
LAB_004075c6:
    debugPrint("DETAIL","Made best time for this scenario.");
    pGVar11 = g_gameData;
    *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3c4) = *(undefined4 *)(pGVar2 + 0x68);
    *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3cc) = *(undefined4 *)(pGVar2 + 0x6c);
    if (*(Ship **)(pGVar11 + 0xd0) == (Ship *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = Ship::getHullDamagePercent(*(Ship **)(pGVar11 + 0xd0));
      pGVar11 = g_gameData;
    }
    *(int *)(*(int *)(pGVar11 + 0xcc) + 0x3c8) = iVar9;
  }
  else {
    if (*(float *)(pGVar2 + 0x68) <= fVar1 && fVar1 != *(float *)(pGVar2 + 0x68)) {
      std::basic_string<>::append
                ((basic_string<> *)(pGVar11 + 0x158),"\n\n`%** BEST TIME FOR THIS SCENARIO **\n",
                 0x26);
      iVar9 = (int)(*(float *)(*(int *)(g_gameData + 0xcc) + 0x3c4) / 60.0);
      strUsingArgs((char *)local_44,"%dm %ds",iVar9,
                   (int)(*(float *)(*(int *)(g_gameData + 0xcc) + 0x3c4) - (float)(iVar9 * 0x3c)));
      local_8 = 0;
      ppppuVar8 = local_44;
      if (0xf < local_30) {
        ppppuVar8 = (undefined4 ****)local_44[0];
      }
      pcVar7 = (char *)strUsingArgs((char *)local_2c,"\n`7(Previous best %s)",ppppuVar8);
      local_8._0_1_ = 1;
      pcVar10 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar10 = *(char **)pcVar7;
      }
      std::basic_string<>::append
                ((basic_string<> *)(g_gameData + 0x158),pcVar10,*(uint *)(pcVar7 + 0x10));
      local_8 = (uint)local_8._1_3_ << 8;
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
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
        pnVar13 = (nothrow_t *)(local_30 + 1);
        ppppuVar8 = (undefined4 ****)local_44[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar8 = (undefined4 ****)local_44[0][-1];
          pnVar13 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar8,pnVar13);
      }
      goto LAB_004075c6;
    }
    if (0.0 < fVar1) {
      puVar6 = (undefined4 *)printFloatAsMinsAndSeconds(fVar4);
      local_8 = 2;
      if (0xf < (uint)puVar6[5]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      pcVar7 = (char *)strUsingArgs((char *)local_44,"\n`7Personal best %s",puVar6);
      local_8._0_1_ = 3;
      pcVar10 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar10 = *(char **)pcVar7;
      }
      std::basic_string<>::append
                ((basic_string<> *)(g_gameData + 0x158),pcVar10,*(uint *)(pcVar7 + 0x10));
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_30) {
        pnVar13 = (nothrow_t *)(local_30 + 1);
        ppppuVar8 = (undefined4 ****)local_44[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar8 = (undefined4 ****)local_44[0][-1];
          pnVar13 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar8,pnVar13);
      }
      local_8 = 0xffffffff;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
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
      pGVar11 = g_gameData;
    }
  }
  std::basic_string<>::append((basic_string<> *)(pGVar11 + 0x158),"\n\n`%- Stats -\n",0xe);
  if (*(Ship **)(g_gameData + 0xd0) == (Ship *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = Ship::getHullDamagePercent(*(Ship **)(g_gameData + 0xd0));
  }
  pcVar7 = (char *)strUsingArgs((char *)local_2c,"`7Hull Damage: %d%%\n",iVar9);
  local_8 = 4;
  pcVar10 = pcVar7;
  if (0xf < *(uint *)(pcVar7 + 0x14)) {
    pcVar10 = *(char **)pcVar7;
  }
  std::basic_string<>::append
            ((basic_string<> *)(g_gameData + 0x158),pcVar10,*(uint *)(pcVar7 + 0x10));
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
  pcVar7 = (char *)strUsingArgs((char *)local_5c,"`7Torps Fired: %d\n",
                                *(undefined4 *)(pGVar2 + 0x6c));
  local_8 = 5;
  pcVar10 = pcVar7;
  if (0xf < *(uint *)(pcVar7 + 0x14)) {
    pcVar10 = *(char **)pcVar7;
  }
  std::basic_string<>::append
            ((basic_string<> *)(g_gameData + 0x158),pcVar10,*(uint *)(pcVar7 + 0x10));
  local_8 = 0xffffffff;
  if (0xf < local_48) {
    pnVar13 = (nothrow_t *)(local_48 + 1);
    pvVar12 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_5c[0] + -4);
      pnVar13 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
LAB_0040775e:
  Singleton<>::getInstance();
  SaveHandler::saveLocalStats(this_00);
  *(undefined4 *)g_gameLogic = 3;
  pcVar10 = "succeeded";
  if (!param_1) {
    pcVar10 = "failed";
  }
  debugPrint("DETAIL","Scenario over, %s.",pcVar10);
  pGVar11 = g_gameData + 0x158;
  if (0xf < *(uint *)(g_gameData + 0x16c)) {
    pGVar11 = *(GameData **)pGVar11;
  }
  debugPrint("DETAIL","Obituary text: %s",pGVar11);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::runPlayerDockLogic(void)

void __thiscall GameLogic::runPlayerDockLogic(GameLogic *this)

{
  PassengerInstance *pPVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  FlagManager *pFVar5;
  undefined4 ****ppppuVar6;
  GameData *pGVar7;
  undefined4 ****ppppuVar8;
  nothrow_t *pnVar9;
  int iVar10;
  char *pcVar11;
  uint unaff_EDI;
  int iVar12;
  basic_string<> local_68 [8];
  undefined4 uStack_60;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1a68;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar3;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)local_2c,
             (basic_string<> *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x238));
  local_8 = 0;
  ppppuVar8 = local_2c;
  if (0xf < local_18) {
    ppppuVar8 = (undefined4 ****)local_2c[0];
  }
  ppppuVar6 = local_2c;
  if (0xf < local_18) {
    ppppuVar6 = (undefined4 ****)local_2c[0];
  }
  iVar10 = 0;
  iVar12 = (local_1c + (int)ppppuVar8) - (int)ppppuVar6;
  if ((undefined4 ****)(local_1c + (int)ppppuVar8) < ppppuVar6) {
    iVar12 = 0;
  }
  if (iVar12 != 0) {
    do {
      iVar4 = tolower((int)*(char *)(iVar10 + (int)ppppuVar6));
      *(char *)(iVar10 + (int)ppppuVar8) = (char)iVar4;
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar12);
  }
  ppppuVar8 = local_2c;
  if (0xf < local_18) {
    ppppuVar8 = (undefined4 ****)local_2c[0];
  }
  strUsingArgs((char *)local_68,"visited_starbase_%s",ppppuVar8);
  local_8._0_1_ = 1;
  pFVar5 = Singleton<>::getInstance();
  local_8._0_1_ = 0;
  FlagManager::setFlag(pFVar5);
  local_68[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_68,"is_docked",9);
  local_8._0_1_ = 2;
  pFVar5 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  FlagManager::setFlag(pFVar5);
  pPVar1 = *(PassengerInstance **)(g_gameData + 0x128);
  if (pPVar1 != (PassengerInstance *)0x0) {
    iVar10 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
    pcVar11 = (char *)(iVar10 + 0x238);
    if (0xf < *(uint *)(iVar10 + 0x24c)) {
      pcVar11 = *(char **)(iVar10 + 0x238);
    }
    bVar2 = std::_Traits_equal<>(pcVar11,*(uint *)(iVar10 + 0x248),pcVar3,unaff_EDI);
    if (bVar2) {
      uStack_60 = 0x40797f;
      debugPrint("WORLD","Player delivered passenger \'%s\' to %s");
      PassengerInstance::leave(*(PassengerInstance **)(g_gameData + 0x128));
    }
    else {
      if ((((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
           *(int *)(g_gameLogic + 0x188)) * 0x18 - *(int *)(pPVar1 + 0x8c)) +
          *(int *)(g_gameLogic + 0x184) < 9) goto LAB_00407a27;
      PassengerInstance::leaveAngry(pPVar1);
    }
    pGVar7 = g_gameData;
    *(undefined1 *)(*(int *)(g_gameData + 0xd0) + 0x280) = 0;
    *(undefined1 *)(*(int *)(pGVar7 + 0xd0) + 0x281) = 0;
    pPVar1 = *(PassengerInstance **)(pGVar7 + 0x128);
    if (pPVar1 != (PassengerInstance *)0x0) {
      PassengerInstance::~PassengerInstance(pPVar1);
      operator_delete(pPVar1,(nothrow_t *)0x94);
      pGVar7 = g_gameData;
    }
    *(undefined4 *)(pGVar7 + 0x128) = 0;
  }
LAB_00407a27:
  if (0xf < local_18) {
    pnVar9 = (nothrow_t *)(local_18 + 1);
    ppppuVar8 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      ppppuVar8 = (undefined4 ****)local_2c[0][-1];
      pnVar9 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar8,pnVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::addSyntheticInstances(void)

void __thiscall GameLogic::addSyntheticInstances(GameLogic *this)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  char *pcVar7;
  SyntheticObject *pSVar8;
  basic_string<> *pbVar9;
  SyntheticObject *pSVar10;
  undefined4 ******ppppppuVar11;
  int iVar12;
  char *pcVar13;
  int ******ppppppiVar14;
  nothrow_t *pnVar15;
  GameData *pGVar16;
  GameData *pGVar17;
  uint uVar18;
  uint unaff_EDI;
  int local_8c;
  int iStack_88;
  int *****local_80 [4];
  uint local_70;
  uint local_6c;
  SyntheticObject *local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  CargoHold *local_4c;
  SyntheticObject *local_48;
  CargoHold *local_44;
  int *****local_40;
  undefined4 *****local_3c [4];
  undefined4 local_2c;
  uint local_28;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005b1a98;
  local_1c = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_24 = pcVar7;
  puStack_20 = &stack0xfffffffc;
  if ((((g_gameLogic[0x11b] == (GameLogic)0x0) &&
       (iVar12 = *(int *)(g_gameData + 0xcc), puStack_20 = &stack0xfffffffc, iVar12 != 0)) &&
      (puStack_20 = &stack0xfffffffc, *(int *)(g_gameData + 0xd8) != 0)) &&
     ((puStack_20 = &stack0xfffffffc, *(int *)(g_gameData + 0xd0) != 0 &&
      (local_50 = 0, pGVar16 = g_gameData, puStack_20 = &stack0xfffffffc, puVar5 = &stack0xfffffffc,
      *(int *)(iVar12 + 0x334) - *(int *)(iVar12 + 0x330) >> 2 != 0)))) {
    do {
      puStack_20 = puVar5;
      uVar4 = local_50;
      iVar1 = local_50 * 4;
      if (*(int *)(*(int *)(*(int *)(iVar12 + 0x330) + iVar1) + 0x38) != **(int **)(pGVar16 + 0xd8))
      goto LAB_004082eb;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_68,
                 (basic_string<> *)
                 (*(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) + iVar1) + 4));
      pGVar16 = g_gameData;
      local_44 = (CargoHold *)0x0;
      local_4c = (CargoHold *)((*(int *)(g_gameData + 0x14c) - *(int *)(g_gameData + 0x148)) / 0x18)
      ;
      local_48 = local_68[0];
      if (local_4c != (CargoHold *)0x0) {
        local_40 = (int *****)0x0;
        do {
          pSVar8 = (SyntheticObject *)local_68;
          if (0xf < local_54) {
            pSVar8 = local_48;
          }
          bVar6 = std::_Traits_equal<>((char *)pSVar8,local_58,pcVar7,unaff_EDI);
          if (bVar6) {
            if (0xf < local_54) {
              pnVar15 = (nothrow_t *)(local_54 + 1);
              pSVar8 = local_48;
              if ((nothrow_t *)0xfff < pnVar15) {
                pSVar8 = *(SyntheticObject **)(local_48 + -4);
                pnVar15 = (nothrow_t *)(local_54 + 0x24);
                if ((SyntheticObject *)0x1f < local_48 + (-4 - (int)pSVar8)) goto LAB_004083d9;
              }
              operator_delete(pSVar8,pnVar15);
              pGVar16 = g_gameData;
            }
            local_58 = 0;
            local_54 = 0xf;
            local_68[0] = (SyntheticObject *)((uint)local_68[0] & 0xffffff00);
            goto LAB_004082eb;
          }
          local_44 = local_44 + 1;
          local_40 = local_40 + 6;
        } while (local_44 < local_4c);
      }
      if (0xf < local_54) {
        pnVar15 = (nothrow_t *)(local_54 + 1);
        pSVar8 = local_48;
        if ((nothrow_t *)0xfff < pnVar15) {
          pSVar8 = *(SyntheticObject **)(local_48 + -4);
          pnVar15 = (nothrow_t *)(local_54 + 0x24);
          if ((SyntheticObject *)0x1f < local_48 + (-4 - (int)pSVar8)) goto LAB_004083d9;
        }
        operator_delete(pSVar8,pnVar15);
        pGVar16 = g_gameData;
      }
      local_58 = 0;
      local_54 = 0xf;
      local_68[0] = (SyntheticObject *)((uint)local_68[0] & 0xffffff00);
      local_4c = *(CargoHold **)(*(int *)(pGVar16 + 0xcc) + 0x330);
      iVar12 = *(int *)(*(int *)(local_4c + iVar1) + 0x60);
      if (iVar12 == 0) {
LAB_00407cb7:
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)local_80,(basic_string<> *)(*(int *)(local_4c + iVar1) + 4));
        local_44 = (CargoHold *)0x0;
        local_48 = *(SyntheticObject **)(g_gameData + 0xd8);
        iVar12 = *(int *)(local_48 + 0x9c);
        local_40 = local_80[0];
        if (*(int *)(local_48 + 0xa0) - iVar12 >> 2 != 0) {
          do {
            pGVar16 = g_gameData;
            local_4c = *(CargoHold **)(iVar12 + (int)local_44 * 4);
            ppppppiVar14 = local_80;
            if (0xf < local_6c) {
              ppppppiVar14 = (int ******)local_40;
            }
            bVar6 = std::_Traits_equal<>((char *)ppppppiVar14,local_70,pcVar7,unaff_EDI);
            if (bVar6) {
              if (0xf < local_6c) {
                pnVar15 = (nothrow_t *)(local_6c + 1);
                ppppppiVar14 = (int ******)local_40;
                if ((nothrow_t *)0xfff < pnVar15) {
                  ppppppiVar14 = (int ******)local_40[-1];
                  pnVar15 = (nothrow_t *)(local_6c + 0x24);
                  if (0x1f < (uint)((int)local_40 + (-4 - (int)ppppppiVar14))) goto LAB_004083d9;
                }
                operator_delete(ppppppiVar14,pnVar15);
                pGVar16 = g_gameData;
              }
              local_70 = 0;
              local_6c = 0xf;
              local_80[0] = (int *****)((uint)local_80[0] & 0xffffff00);
              if (local_4c != (CargoHold *)0x0) goto LAB_004082eb;
              goto LAB_00407db0;
            }
            local_44 = local_44 + 1;
            iVar12 = *(int *)(local_48 + 0x9c);
          } while (local_44 < (CargoHold *)(*(int *)(local_48 + 0xa0) - iVar12 >> 2));
        }
        if (0xf < local_6c) {
          pnVar15 = (nothrow_t *)(local_6c + 1);
          if ((nothrow_t *)0xfff < pnVar15) {
            ppppppiVar14 = (int ******)local_40[-1];
            pnVar15 = (nothrow_t *)(local_6c + 0x24);
            uVar18 = (int)local_40 + (-4 - (int)ppppppiVar14);
            local_40 = (int *****)ppppppiVar14;
            if (0x1f < uVar18) goto LAB_004083d9;
          }
          operator_delete(local_40,pnVar15);
        }
        local_80[0] = (int *****)((uint)local_80[0] & 0xffffff00);
        pGVar16 = g_gameData;
LAB_00407db0:
        local_6c = 0xf;
        local_70 = 0;
        local_48 = (SyntheticObject *)(*(int *)(pGVar16 + 0xcc) + 0x330);
        local_44 = (CargoHold *)0x0;
        if (*(int *)(*(int *)(iVar1 + *(int *)local_48) + 0x58) -
            *(int *)(*(int *)(iVar1 + *(int *)local_48) + 0x54) >> 2 != 0) {
          do {
            bVar6 = Requirement::checkReq
                              (*(Requirement **)
                                (*(int *)(*(int *)(*(int *)local_48 + iVar1) + 0x54) +
                                (int)local_44 * 4),*(CargoHold **)(*(int *)(pGVar16 + 0xd0) + 0x1f8)
                               ,*(BankAccount **)(pGVar16 + 0x124));
            pGVar16 = g_gameData;
            if (!bVar6) goto LAB_004082eb;
            local_48 = (SyntheticObject *)(*(int *)(g_gameData + 0xcc) + 0x330);
            local_44 = local_44 + 1;
          } while (local_44 <
                   (CargoHold *)
                   (*(int *)(*(int *)(iVar1 + *(int *)local_48) + 0x58) -
                    *(int *)(*(int *)(iVar1 + *(int *)local_48) + 0x54) >> 2));
        }
        pSVar8 = Sector::addSyntheticObject
                           (*(Sector **)(pGVar16 + 0xd8),
                            *(int *)(*(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) + iVar1) +
                                    0x1c));
        iVar12 = *(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x330) + iVar1);
        pbVar9 = (basic_string<> *)(iVar12 + 0x80);
        local_48 = pSVar8;
        if ((basic_string<> *)(pSVar8 + 200) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0x94)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 200),(char *)pbVar9,*(uint *)(iVar12 + 0x90));
        }
        iVar12 = *(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x330) + iVar1);
        pbVar9 = (basic_string<> *)(iVar12 + 0x20);
        if ((basic_string<> *)(pSVar8 + 0x68) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0x34)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 0x68),(char *)pbVar9,*(uint *)(iVar12 + 0x30));
        }
        iVar12 = *(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x330) + iVar1);
        pbVar9 = (basic_string<> *)(iVar12 + 0x20);
        if ((basic_string<> *)(pSVar8 + 0x80) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0x34)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 0x80),(char *)pbVar9,*(uint *)(iVar12 + 0x30));
        }
        iVar12 = *(int *)(iVar1 + *(int *)(*(int *)(g_gameData + 0xcc) + 0x330));
        pbVar9 = (basic_string<> *)(iVar12 + 0xb0);
        if ((basic_string<> *)(pSVar8 + 8) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0xc4)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 8),(char *)pbVar9,*(uint *)(iVar12 + 0xc0));
        }
        pGVar16 = g_gameData;
        pSVar8[0x40] = **(SyntheticObject **)(iVar1 + *(int *)(*(int *)(g_gameData + 0xcc) + 0x330))
        ;
        iVar12 = *(int *)(iVar1 + *(int *)(*(int *)(pGVar16 + 0xcc) + 0x330));
        pbVar9 = (basic_string<> *)(iVar12 + 0xd4);
        if ((basic_string<> *)(pSVar8 + 0xb0) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0xe8)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 0xb0),(char *)pbVar9,*(uint *)(iVar12 + 0xe4));
          pGVar16 = g_gameData;
        }
        iVar12 = *(int *)(iVar1 + *(int *)(*(int *)(pGVar16 + 0xcc) + 0x330));
        pbVar9 = (basic_string<> *)(iVar12 + 4);
        if ((basic_string<> *)(pSVar8 + 0x48) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0x18)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 0x48),(char *)pbVar9,*(uint *)(iVar12 + 0x14));
          pGVar16 = g_gameData;
        }
        LocationManager::getNewLocation
                  (*(LocationManager **)
                    (*(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) + iVar1) + 0xec));
        pGVar16 = g_gameData;
        *(double *)(pSVar8 + 0x28) =
             (double)*(float *)**(undefined4 **)
                                 (*(int *)(iVar1 + *(int *)(*(int *)(g_gameData + 0xcc) + 0x330)) +
                                 0xec);
        *(double *)(pSVar8 + 0x30) =
             (double)*(float *)(**(int **)(*(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) +
                                                   iVar1) + 0xec) + 4);
        if (*(int *)(pSVar8 + 0x60) == 2) {
          *(undefined4 *)(pSVar8 + 0xe0) =
               *(undefined4 *)(*(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) + iVar1) + 0x7c);
        }
        iVar12 = *(int *)(iVar1 + *(int *)(*(int *)(pGVar16 + 0xcc) + 0x330));
        pbVar9 = (basic_string<> *)(iVar12 + 100);
        if ((basic_string<> *)(pSVar8 + 0x98) != pbVar9) {
          if (0xf < *(uint *)(iVar12 + 0x78)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar8 + 0x98),(char *)pbVar9,*(uint *)(iVar12 + 0x74));
          pGVar16 = g_gameData;
        }
        uVar18 = 0;
        local_40 = (int *****)(*(int *)(pGVar16 + 0xcc) + 0x330);
        if ((int)(*local_40)[uVar4][0x10] - (int)(*local_40)[uVar4][0xf] >> 2 != 0) {
          local_44 = (CargoHold *)0xc;
          do {
            local_40 = *(int ******)((int)(*local_40)[uVar4][0xf] + (int)local_44 + -0xc);
            local_4c = *(CargoHold **)(local_48 + 0xe8);
            if (((int)uVar18 < 0) ||
               (((0 < *(int *)(local_4c + 8) && (*(int *)(local_4c + 8) <= (int)uVar18)) ||
                (*(int *)(local_4c + (int)local_44) == 0)))) {
              CargoHold::addPod(local_4c,uVar18);
              pGVar16 = g_gameData;
            }
            if ((local_40 != (int *****)0x0) &&
               (local_4c = *(CargoHold **)(local_4c + (int)local_44), (int)local_40 - 1U < 3)) {
              local_4c[(int)local_40] = (CargoHold)0x1;
              pGVar16 = g_gameData;
            }
            local_44 = (CargoHold *)((int)local_44 + 4);
            local_40 = (int *****)(*(int *)(pGVar16 + 0xcc) + 0x330);
            uVar18 = uVar18 + 1;
          } while (uVar18 < (uint)((int)(*local_40)[uVar4][0x10] - (int)(*local_40)[uVar4][0xf] >> 2
                                  ));
        }
        local_44 = (CargoHold *)0x0;
        iVar12 = *(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) + iVar1);
        if (*(int *)(iVar12 + 0x4c) - *(int *)(iVar12 + 0x48) >> 2 != 0) {
          local_40 = (int *****)0xc;
          do {
            pSVar8 = local_48;
            iVar12 = *(int *)(local_48 + 0xe8);
            pGVar17 = pGVar16;
            if (*(int *)(iVar12 + (int)local_40) == 0) {
              pSVar10 = local_48 + 0x48;
              if (0xf < *(uint *)(local_48 + 0x5c)) {
                pSVar10 = *(SyntheticObject **)(local_48 + 0x48);
              }
              debugPrint("ERROR","No pod to add to synthetic %s",pSVar10);
              bVar6 = cc_assert_script_compatible("No pod to add to synthetic");
              if (!bVar6) {
                cocos2d::log("Assert failed: %s","No pod to add to synthetic");
              }
              iVar12 = *(int *)(pSVar8 + 0xe8);
              pGVar17 = g_gameData;
            }
            local_44 = local_44 + 1;
            ppppppiVar14 = (int ******)(local_40 + 1);
            *(undefined4 *)(*(int *)(iVar12 + (int)local_40) + 4) =
                 **(undefined4 **)
                   ((int)local_40 +
                   *(int *)(*(int *)(*(int *)(*(int *)(pGVar17 + 0xcc) + 0x330) + iVar1) + 0x48) +
                   -0xc);
            pGVar16 = g_gameData;
            *(undefined4 *)(*(int *)((int)local_40 + *(int *)(local_48 + 0xe8)) + 8) =
                 *(undefined4 *)
                  (*(int *)((int)local_40 +
                           *(int *)(*(int *)(iVar1 + *(int *)(*(int *)(pGVar17 + 0xcc) + 0x330)) +
                                   0x48) + -0xc) + 4);
            iVar12 = *(int *)(*(int *)(*(int *)(pGVar16 + 0xcc) + 0x330) + iVar1);
            local_40 = (int *****)ppppppiVar14;
          } while (local_44 < (CargoHold *)(*(int *)(iVar12 + 0x4c) - *(int *)(iVar12 + 0x48) >> 2))
          ;
        }
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (undefined4 *****)((uint)local_3c[0] & 0xffffff00);
        pcVar3 = (&PTR_s_Debris_005e19b0)[*(int *)(local_48 + 0x60)];
        pcVar13 = pcVar3;
        do {
          cVar2 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        std::basic_string<>::assign
                  ((basic_string<> *)local_3c,pcVar3,(int)pcVar13 - (int)(pcVar3 + 1));
        local_14 = 0;
        ppppppuVar11 = local_3c;
        if (0xf < local_28) {
          ppppppuVar11 = (undefined4 ******)local_3c[0];
        }
        debugPrint("WORLD","Added synthetic instance: %s",ppppppuVar11);
        local_14 = 0xffffffff;
        if (0xf < local_28) {
          pnVar15 = (nothrow_t *)(local_28 + 1);
          ppppppuVar11 = (undefined4 ******)local_3c[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            ppppppuVar11 = (undefined4 ******)local_3c[0][-1];
            pnVar15 = (nothrow_t *)(local_28 + 0x24);
            if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppppuVar11))) {
LAB_004083d9:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppppuVar11,pnVar15);
        }
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (undefined4 *****)((uint)local_3c[0] & 0xffffff00);
        pGVar16 = g_gameData;
      }
      else {
        iStack_88 = (int)((ulonglong)*(undefined8 *)(this + 0x18c) >> 0x20);
        if (iStack_88 < *(int *)(iVar12 + 0x14)) goto LAB_00407cb7;
        if (iStack_88 <= *(int *)(iVar12 + 0x14)) {
          local_8c = (int)*(undefined8 *)(this + 0x18c);
          if ((local_8c < *(int *)(iVar12 + 0x10)) ||
             ((local_8c <= *(int *)(iVar12 + 0x10) &&
              ((*(int *)(this + 0x188) < *(int *)(iVar12 + 0xc) ||
               ((*(int *)(this + 0x188) <= *(int *)(iVar12 + 0xc) &&
                ((*(int *)(this + 0x184) < *(int *)(iVar12 + 8) ||
                 ((*(int *)(this + 0x184) <= *(int *)(iVar12 + 8) &&
                  (*(int *)(this + 0x180) < *(int *)(iVar12 + 4))))))))))))) goto LAB_00407cb7;
        }
      }
LAB_004082eb:
      iVar12 = *(int *)(pGVar16 + 0xcc);
      local_50 = local_50 + 1;
      puVar5 = puStack_20;
    } while (local_50 < (uint)(*(int *)(iVar12 + 0x334) - *(int *)(iVar12 + 0x330) >> 2));
  }
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall GameLogic::resetSyntheticInstances(void)

void __thiscall GameLogic::resetSyntheticInstances(GameLogic *this)

{
  AnimationFrames **ppAVar1;
  int *piVar2;
  JunkManager *pJVar3;
  void *pvVar4;
  undefined4 *puVar5;
  GameLogic *this_00;
  GameLogic *extraout_ECX;
  int iVar6;
  AnimationFrames **ppAVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  GameLogic *pGVar10;
  undefined4 *puVar11;
  void *pvVar12;
  size_t sVar13;
  GameData *pGVar14;
  void *local_40;
  AnimationFrames **local_3c;
  AnimationFrames **local_38;
  GameLogic *local_34;
  uint local_30;
  int *local_2c;
  undefined4 *local_28;
  uint local_24;
  AnimationFrames **local_20;
  uint local_1c;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1ac8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = this;
  debugPrint("WORLD","Re-setting synthetic instances for current sector...",
             ___security_cookie ^ (uint)&stack0xfffffffc);
  uVar9 = 0;
  ppAVar7 = (AnimationFrames **)0x0;
  local_14 = (void *)0x0;
  local_40 = (void *)0x0;
  local_3c = (AnimationFrames **)0x0;
  local_20 = (AnimationFrames **)0x0;
  local_38 = (AnimationFrames **)0x0;
  local_8 = 0;
  iVar6 = *(int *)(g_gameData + 0xd8);
  if (iVar6 != 0) {
    pGVar14 = g_gameData;
    if (*(int *)(iVar6 + 0xa0) - *(int *)(iVar6 + 0x9c) >> 2 != 0) {
      do {
        ppAVar1 = (AnimationFrames **)(*(int *)(iVar6 + 0x9c) + uVar9 * 4);
        if (ppAVar7 == local_3c) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)&local_40,local_3c,ppAVar1);
          ppAVar7 = local_38;
          pGVar14 = g_gameData;
        }
        else {
          *local_3c = *ppAVar1;
          local_3c = local_3c + 1;
        }
        iVar6 = *(int *)(pGVar14 + 0xd8);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(iVar6 + 0xa0) - *(int *)(iVar6 + 0x9c) >> 2));
      local_14 = local_40;
      local_20 = ppAVar7;
    }
    local_30 = (int)local_3c - (int)local_14 >> 2;
    local_1c = 0;
    local_40 = local_14;
    if (local_30 != 0) {
LAB_004084d0:
      piVar2 = (int *)((int)local_14 + local_1c * 4);
      puVar5 = (undefined4 *)(*piVar2 + 8);
      if (0xf < *(uint *)(*piVar2 + 0x1c)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      local_2c = piVar2;
      debugPrint("WORLD","Removing synthetic object %s",puVar5);
      if (Singleton<>::instance == (JunkManager *)0x0) {
        Singleton<>::instance = operator_new(0x18);
        *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
        *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
        *(undefined4 *)Singleton<>::instance = 0;
        *(undefined4 *)(Singleton<>::instance + 4) = 0;
        *(undefined4 *)(Singleton<>::instance + 8) = 0;
        *(undefined4 *)(Singleton<>::instance + 0xc) = 0;
        *(undefined4 *)(Singleton<>::instance + 0x10) = 0;
        *(undefined4 *)(Singleton<>::instance + 0x14) = 0;
      }
      pJVar3 = Singleton<>::instance;
      this_00 = (GameLogic *)0x0;
      puVar5 = *(undefined4 **)(Singleton<>::instance + 0xc);
      pGVar10 = (GameLogic *)(*(int *)(Singleton<>::instance + 0x10) - (int)puVar5 >> 2);
      if (pGVar10 != (GameLogic *)0x0) {
        do {
          if (*(int *)*puVar5 == *piVar2) {
            puVar5 = *(undefined4 **)(*(int *)(Singleton<>::instance + 0xc) + (int)this_00 * 4);
            local_18 = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              Sector::removeSyntheticObject((Sector *)puVar5[1],(SyntheticObject *)*puVar5);
              local_28 = *(undefined4 **)(pJVar3 + 0x10);
              puVar11 = *(undefined4 **)(pJVar3 + 0xc);
              if (puVar11 == local_28) goto LAB_00408601;
              goto LAB_004085a0;
            }
            break;
          }
          this_00 = this_00 + 1;
          puVar5 = puVar5 + 1;
        } while (this_00 < pGVar10);
      }
      goto LAB_0040861d;
    }
LAB_00408640:
    *(undefined4 *)(*(int *)(pGVar14 + 0xd8) + 0xa0) =
         *(undefined4 *)(*(int *)(pGVar14 + 0xd8) + 0x9c);
  }
  pvVar4 = local_14;
  ppAVar7 = local_20;
  local_3c = local_14;
  addSyntheticInstances(local_34);
  if (pvVar4 != (void *)0x0) {
    pnVar8 = (nothrow_t *)((int)ppAVar7 - (int)pvVar4 & 0xfffffffc);
    pvVar12 = pvVar4;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar12 = *(void **)((int)pvVar4 + -4);
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar8);
  }
  ExceptionList = local_10;
  return;
  while (puVar11 = puVar11 + 1, puVar11 != local_28) {
LAB_004085a0:
    if ((undefined4 *)*puVar11 == puVar5) break;
  }
  if (puVar11 != local_28) {
    puVar5 = puVar11 + 1;
    uVar9 = 0;
    local_24 = (uint)((int)local_28 + (3 - (int)puVar5)) >> 2;
    if (local_28 < puVar5) {
      local_24 = 0;
    }
    if (local_24 != 0) {
      do {
        if ((undefined4 *)*puVar5 != local_18) {
          *puVar11 = (undefined4 *)*puVar5;
          puVar11 = puVar11 + 1;
        }
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar9 != local_24);
    }
    if (puVar11 != local_28) {
      sVar13 = *(int *)(pJVar3 + 0x10) - (int)local_28;
      memmove(puVar11,local_28,sVar13);
      *(size_t *)(pJVar3 + 0x10) = sVar13 + (int)puVar11;
    }
  }
LAB_00408601:
  operator_delete(local_18,(nothrow_t *)0x8);
  debugPrint("WORLD","Cleared up reference to spawned synthetic instances using junk manager.");
  this_00 = extraout_ECX;
LAB_0040861d:
  removeSyntheticObject(this_00,(SyntheticObject *)*local_2c);
  local_1c = local_1c + 1;
  pGVar14 = g_gameData;
  if (local_30 <= local_1c) goto LAB_00408640;
  goto LAB_004084d0;
}


// public: void __thiscall GameLogic::clearShipsInScenario(bool)

void __thiscall GameLogic::clearShipsInScenario(GameLogic *this,bool param_1)

{
  int iVar1;
  AnimationFrames *pAVar2;
  int iVar3;
  void *pvVar4;
  AnimationFrames **ppAVar5;
  GameLogic *this_00;
  GameLogic *extraout_ECX;
  GameData *pGVar6;
  uint uVar7;
  void *pvVar8;
  AnimationFrames **ppAVar9;
  AnimationFrames **ppAVar10;
  uint uVar11;
  nothrow_t *pnVar12;
  void *local_28;
  AnimationFrames **local_24;
  AnimationFrames **local_20;
  undefined4 local_1c;
  AnimationFrames **local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1af8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pGVar6 = g_gameData + 0x3c;
  local_14 = 0;
  if (*(int *)(g_gameData + 0x40) - *(int *)pGVar6 >> 2 != 0) {
    do {
      ppAVar10 = (AnimationFrames **)0x0;
      ppAVar9 = (AnimationFrames **)0x0;
      local_28 = (void *)0x0;
      local_24 = (AnimationFrames **)0x0;
      local_18 = (AnimationFrames **)0x0;
      local_20 = (AnimationFrames **)0x0;
      local_8 = 0;
      local_1c = 0;
      this_00 = *(GameLogic **)(*(int *)pGVar6 + local_14 * 4);
      ppAVar5 = local_18;
      if (*(int *)(this_00 + 0xd0) - *(int *)(this_00 + 0xcc) >> 2 != 0) {
        uVar7 = 0;
        do {
          iVar1 = *(int *)(*(int *)(*(int *)pGVar6 + local_14 * 4) + 0xcc);
          pAVar2 = *(AnimationFrames **)(iVar1 + uVar7 * 4);
          iVar3 = *(int *)(*(int *)(pAVar2 + 0x254) + 0x158);
          if ((((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) &&
             ((pAVar2[0x234] == (AnimationFrames)0x0 || (param_1)))) {
            if (ppAVar10 == ppAVar9) {
              std::vector<>::_Emplace_reallocate<>
                        ((vector<> *)&local_28,ppAVar9,(AnimationFrames **)(iVar1 + uVar7 * 4));
              ppAVar9 = local_24;
              ppAVar10 = local_20;
            }
            else {
              *ppAVar9 = pAVar2;
              local_24 = ppAVar9 + 1;
              ppAVar9 = local_24;
            }
          }
          uVar7 = uVar7 + 1;
          pGVar6 = g_gameData + 0x3c;
          this_00 = *(GameLogic **)(*(int *)pGVar6 + local_14 * 4);
          ppAVar5 = ppAVar10;
        } while (uVar7 < (uint)(*(int *)(this_00 + 0xd0) - *(int *)(this_00 + 0xcc) >> 2));
      }
      local_18 = ppAVar5;
      pvVar4 = local_28;
      local_1c = 0;
      uVar7 = (int)ppAVar9 - (int)local_28 >> 2;
      if (uVar7 != 0) {
        uVar11 = 0;
        do {
          removeSensorDataFor(this_00,*(Ship **)((int)pvVar4 + uVar11 * 4));
          Sector::removeShip(*(Sector **)(*(int *)(g_gameData + 0x3c) + local_14 * 4),
                             *(Ship **)((int)pvVar4 + uVar11 * 4));
          uVar11 = uVar11 + 1;
          this_00 = extraout_ECX;
        } while (uVar11 < uVar7);
      }
      local_8 = 0xffffffff;
      if (pvVar4 != (void *)0x0) {
        pnVar12 = (nothrow_t *)((int)local_18 - (int)pvVar4 & 0xfffffffc);
        pvVar8 = pvVar4;
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar8 = *(void **)((int)pvVar4 + -4);
          pnVar12 = pnVar12 + 0x23;
          if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar12);
      }
      pGVar6 = g_gameData + 0x3c;
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(g_gameData + 0x40) - *(int *)pGVar6 >> 2));
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::removeNonPlayedShips(void)

void __thiscall GameLogic::removeNonPlayedShips(GameLogic *this)

{
  AnimationFrames *pAVar1;
  int iVar2;
  NetworkServer *pNVar3;
  Ship *pSVar4;
  GameLogic *this_00;
  int *piVar5;
  Ship *pSVar6;
  AnimationFrames *pAVar7;
  nothrow_t *pnVar8;
  bool bVar9;
  basic_string<> abStack_54 [8];
  undefined4 uStack_4c;
  AnimationFrames *local_2c;
  AnimationFrames *local_28;
  AnimationFrames **local_24;
  undefined1 *local_20;
  Ship *local_1c;
  AnimationFrames *local_18;
  AnimationFrames **local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  debugPrint("WORLD","Removing unowned playable ships ships...");
  pAVar7 = (AnimationFrames *)0x0;
  local_18 = (AnimationFrames *)0x0;
  local_2c = (AnimationFrames *)0x0;
  local_28 = (AnimationFrames *)0x0;
  local_14 = (AnimationFrames **)0x0;
  local_24 = (AnimationFrames **)0x0;
  local_8 = 0;
  piVar5 = *(int **)(*(int *)(g_gameData + 0xd8) + 0xcc);
  local_1c = *(Ship **)(*(int *)(g_gameData + 0xd8) + 0xd0);
  if ((Ship *)piVar5 != local_1c) {
    do {
      pAVar1 = (AnimationFrames *)*piVar5;
      bVar9 = false;
      if (*(int *)(pAVar1 + 0x254) != 0) {
        bVar9 = *(int *)(*(int *)(pAVar1 + 0x254) + 0x158) == 0;
      }
      if ((((bVar9) && (iVar2 = *(int *)(pAVar1 + 0x44), iVar2 != 0)) &&
          (*(int *)(iVar2 + 0x124) != 0)) && (*(int *)(iVar2 + 0x70) == 0)) {
        local_20 = abStack_54;
        local_18 = pAVar1;
        std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)(pAVar1 + 0x238));
        local_8._0_1_ = 1;
        pNVar3 = Singleton<>::getInstance();
        local_8 = (uint)local_8._1_3_ << 8;
        bVar9 = NetworkServer::shipHasConnectedClient(pNVar3);
        if (!bVar9) {
          if ((AnimationFrames *)local_14 == pAVar7) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)&local_2c,(AnimationFrames **)pAVar7,&local_18);
            local_14 = local_24;
            pAVar7 = local_28;
          }
          else {
            *(AnimationFrames **)pAVar7 = pAVar1;
            pAVar7 = pAVar7 + 4;
            local_28 = pAVar7;
          }
        }
      }
      piVar5 = piVar5 + 1;
    } while ((Ship *)piVar5 != local_1c);
    local_18 = local_2c;
  }
  pSVar6 = (Ship *)0x0;
  pSVar4 = (Ship *)((uint)(pAVar7 + (3 - (int)local_18)) >> 2);
  if (pAVar7 < local_18) {
    pSVar4 = (Ship *)0x0;
  }
  pAVar7 = local_18;
  local_2c = local_18;
  local_1c = pSVar4;
  if (pSVar4 != (Ship *)0x0) {
    do {
      local_1c = *(Ship **)pAVar7;
      uStack_4c = 0x4089b4;
      debugPrint("WORLD","Removing \'%s\'");
      entirelyRemoveShip(this_00,local_1c,false);
      pSVar6 = pSVar6 + 1;
      pAVar7 = pAVar7 + 4;
    } while (pSVar6 != pSVar4);
  }
  if (local_18 != (AnimationFrames *)0x0) {
    pnVar8 = (nothrow_t *)((int)local_14 - (int)local_18 & 0xfffffffc);
    pAVar7 = local_18;
    if ((nothrow_t *)0xfff < pnVar8) {
      pAVar7 = *(AnimationFrames **)(local_18 + -4);
      pnVar8 = pnVar8 + 0x23;
      if ((AnimationFrames *)0x1f < local_18 + (-4 - (int)pAVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pAVar7,pnVar8);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::resetShipsInScenario(bool)

void __thiscall GameLogic::resetShipsInScenario(GameLogic *this,bool param_1)

{
  int *piVar1;
  bool bVar2;
  basic_string<> *pbVar3;
  AnimationFrames *pAVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  Ship *pSVar8;
  basic_string<> *pbVar9;
  AnimationFrames *pAVar10;
  uint uVar11;
  basic_string<> *pbVar12;
  EmailManager *pEVar13;
  int *piVar14;
  nothrow_t *pnVar15;
  uint uVar16;
  basic_string<> *pbVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  AnimationFrames *pAVar21;
  basic_string<> *unaff_EDI;
  basic_string<> *pbVar22;
  GameData *pGVar23;
  undefined4 uStack_c8;
  char *pcVar24;
  ShipInstance *pSVar25;
  undefined1 uVar26;
  undefined4 *local_90;
  AnimationFrames *local_8c;
  AnimationFrames *local_88;
  basic_string<> *local_84;
  basic_string<> *local_80;
  basic_string<> *local_7c;
  AnimationFrames *local_78;
  GameLogic *local_74;
  undefined4 local_70;
  uint local_6c;
  EmailManager *local_68;
  int local_64;
  int local_60;
  basic_string<> *local_5c;
  basic_string<> *local_58;
  basic_string<> *local_54;
  AnimationFrames *local_50;
  int local_4c;
  basic_string<> *local_48;
  basic_string<> *local_44;
  char local_3d;
  AnimationFrames *local_3c;
  char local_35;
  AnimationFrames *local_34;
  AnimationFrames *local_30 [4];
  uint local_20;
  uint local_1c;
  basic_string<> *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1b86;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_74 = this;
  local_18 = pbVar3;
  clearShipsInScenario(this,param_1);
  pbVar22 = (basic_string<> *)0x0;
  local_35 = '\x01';
  local_4c = 0;
  local_48 = (basic_string<> *)0x0;
  local_44 = (basic_string<> *)0x0;
  pbVar17 = (basic_string<> *)0x0;
  local_60 = 0;
  local_5c = (basic_string<> *)0x0;
  local_58 = (basic_string<> *)0x0;
  local_8 = 1;
  iVar20 = *(int *)(g_gameData + 0xcc);
  if ((*(int *)(iVar20 + 0xbc) == 0) && (*(int *)(iVar20 + 0xc4) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar19 = 0;
  if (bVar2) {
    local_64 = 0;
    do {
      iVar5 = local_64;
      iVar6 = *(int *)(g_gameData + 0xcc);
      iVar20 = OISConfiguration::difficulty + local_64 * 4;
      if ((*(int *)(iVar6 + 200 + iVar20 * 0xc) == 0) &&
         (*(int *)(iVar6 + 0xd0 + iVar20 * 0xc) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      piVar14 = (int *)(iVar6 + 0x78);
      uVar19 = 0;
      if (bVar2) {
        pbVar12 = local_44;
        if (*(int *)(iVar6 + 0x7c) - *piVar14 >> 2 != 0) {
          do {
            pcVar24 = *(char **)(*piVar14 + uVar19 * 4);
            if (((*pcVar24 == '\0') && (pcVar24[0xd8] == '\0')) &&
               (*(int *)(pcVar24 + 0xd4) == iVar5)) {
              if (pcVar24[OISConfiguration::difficulty + 0xd0] == '\0') {
                pcVar24 = 
                "* Vessel \'%s\' will NOT be spawned, as it isn\'t wanted at this difficulty level."
                ;
              }
              else {
                if (pbVar12 == pbVar22) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)&local_4c,(basic_string<> *)pbVar22,
                             (basic_string<> *)(pcVar24 + 0x1c));
                }
                else {
                  std::basic_string<>::basic_string<>(pbVar22,(basic_string<> *)(pcVar24 + 0x1c));
                  local_48 = pbVar22 + 0x18;
                }
                pcVar24 = "* Vessel \'%s\' will be spawned, as will the entire team.";
                pbVar22 = local_48;
              }
              debugPrint("DETAIL",pcVar24);
              pbVar12 = local_44;
            }
            uVar19 = uVar19 + 1;
            piVar14 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
            pbVar17 = local_5c;
          } while (uVar19 < (uint)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar14 >> 2));
        }
      }
      else {
        local_35 = '\0';
        if (*(int *)(iVar6 + 0x7c) - *piVar14 >> 2 != 0) {
          do {
            pcVar24 = *(char **)(*piVar14 + uVar19 * 4);
            if (((*pcVar24 == '\0') && (pcVar24[0xd8] == '\0')) &&
               (*(int *)(pcVar24 + 0xd4) == local_64)) {
              if ((*(int *)(pcVar24 + 0xe8) == 0) || (pcVar24[0x114] != '\0')) {
                debugPrint("DETAIL","* Vessel \'%s\' is critical and will be spawned.");
                pbVar9 = (basic_string<> *)
                         (*(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x78) + uVar19 * 4) + 0x1c
                         );
                if (local_44 == pbVar22) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)&local_4c,(basic_string<> *)pbVar22,pbVar9);
                  pbVar22 = local_48;
                }
                else {
                  std::basic_string<>::basic_string<>(pbVar22,pbVar9);
                  local_48 = pbVar22 + 0x18;
                  pbVar22 = local_48;
                }
              }
              else if (pcVar24[OISConfiguration::difficulty + 0xd0] == '\0') {
                debugPrint("DETAIL",
                           "* Vessel \'%s\' will NOT be spawned, as it isn\'t wanted at this difficulty level."
                          );
              }
              else {
                if (local_58 == (basic_string<> *)pbVar17) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)&local_60,pbVar17,(basic_string<> *)(pcVar24 + 0x1c));
                }
                else {
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)pbVar17,(basic_string<> *)(pcVar24 + 0x1c));
                  local_5c = pbVar17 + 0x18;
                }
                pbVar17 = local_5c;
                debugPrint("DETAIL","* Vessel \'%s\' is non-critical and MAY be spawned.");
              }
            }
            uVar19 = uVar19 + 1;
            piVar14 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
          } while (uVar19 < (uint)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar14 >> 2));
        }
        local_50 = (AnimationFrames *)(((int)pbVar17 - local_60) / 0x18);
        iVar20 = OISConfiguration::difficulty + local_64 * 4;
        iVar6 = *(int *)(g_gameData + 0xcc);
        pAVar4 = *(AnimationFrames **)(iVar6 + 200 + iVar20 * 0xc);
        if ((pAVar4 != (AnimationFrames *)0x0) ||
           (local_3d = '\x01', *(int *)(iVar6 + 0xd0 + iVar20 * 0xc) != 0)) {
          local_3d = '\0';
        }
        local_3c = pAVar4;
        if (local_3d == '\0') {
          local_54 = *(basic_string<> **)(iVar6 + 0xd0 + iVar20 * 0xc);
          iVar20 = *(int *)(iVar6 + 0xcc + iVar20 * 0xc);
          iVar6 = 0;
          if ((0 < iVar20) && (local_34 = (AnimationFrames *)iVar20, 0 < (int)pAVar4)) {
            do {
              iVar5 = rand();
              iVar6 = iVar6 + 1 + iVar5 % iVar20;
              pAVar4 = pAVar4 + -1;
              pbVar17 = local_5c;
              pbVar22 = local_48;
            } while (pAVar4 != (AnimationFrames *)0x0);
          }
          pbVar12 = local_54 + iVar6;
        }
        else {
          pbVar12 = (basic_string<> *)0x0;
        }
        uStack_c8 = 0x4090a3;
        local_34 = (AnimationFrames *)pbVar12;
        debugPrint("WORLD",
                   "For team %d, loading a random %d ships out of a possible %d non-critical ones:")
        ;
        while (0 < (int)pbVar12) {
          iVar20 = ((int)pbVar17 - local_60) / 0x18 + -1;
          if (1 < iVar20) {
            iVar6 = rand();
            iVar20 = iVar6 % iVar20;
          }
          if (iVar20 == -1) {
            debugPrint("ERROR","Invalid ship tried to spawn.");
            break;
          }
          pbVar9 = (basic_string<> *)(local_60 + iVar20 * 0x18);
          debugPrint("WORLD","  Selected: %s");
          if (local_44 == pbVar22) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)&local_4c,(basic_string<> *)pbVar22,pbVar9);
          }
          else {
            std::basic_string<>::basic_string<>(pbVar22,pbVar9);
            local_48 = pbVar22 + 0x18;
          }
          pbVar22 = local_48;
          puVar7 = (undefined4 *)std::remove<>();
          pbVar9 = (basic_string<> *)*puVar7;
          if (pbVar9 != pbVar17) {
            pbVar17 = (basic_string<> *)std::_Move_unchecked<>(pbVar9,pbVar3,unaff_EDI);
            std::_Destroy_range<>
                      ((basic_string<> *)pbVar9,(basic_string<> *)pbVar3,(allocator<> *)unaff_EDI);
            local_5c = pbVar17;
          }
          local_34 = local_34 + -1;
          pbVar12 = (basic_string<> *)local_34;
        }
        local_54 = (basic_string<> *)0x0;
        local_84 = (basic_string<> *)0x0;
        local_80 = (basic_string<> *)0x0;
        local_7c = (basic_string<> *)0x0;
        local_8._0_1_ = 3;
        local_50 = (AnimationFrames *)0x0;
        piVar14 = *(int **)(*(int *)(g_gameData + 0xcc) + 0x78);
        piVar1 = *(int **)(*(int *)(g_gameData + 0xcc) + 0x7c);
        pAVar4 = (AnimationFrames *)((uint)((int)piVar1 + (3 - (int)piVar14)) >> 2);
        if (piVar1 < piVar14) {
          pAVar4 = (AnimationFrames *)0x0;
        }
        local_34 = pAVar4;
        if (pAVar4 != (AnimationFrames *)0x0) {
          pbVar12 = (basic_string<> *)0x0;
          do {
            if (*(char *)(*piVar14 + 0xd8) != '\0') {
              pbVar17 = (basic_string<> *)(*piVar14 + 0x1c);
              pbVar22 = std::_Find_unchecked<>(pbVar17,pbVar3,unaff_EDI);
              pAVar4 = local_34;
              if (pbVar22 == pbVar12) {
                if (local_7c == pbVar12) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)&local_84,(basic_string<> *)pbVar12,pbVar17);
                  local_54 = local_84;
                  pAVar4 = local_34;
                  pbVar12 = local_80;
                }
                else {
                  std::basic_string<>::basic_string<>(pbVar12,pbVar17);
                  local_80 = pbVar12 + 0x18;
                  pAVar4 = local_34;
                  pbVar12 = local_80;
                }
              }
            }
            local_50 = local_50 + 1;
            piVar14 = piVar14 + 1;
            pbVar22 = local_48;
          } while (local_50 != pAVar4);
        }
        debugPrint("WORLD","%s duplicate ship-sets that need spawning.");
        if (local_54 != local_80) {
          do {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_30,(basic_string<> *)local_54);
            pAVar21 = (AnimationFrames *)0x0;
            local_90 = (undefined4 *)0x0;
            local_8c = (AnimationFrames *)0x0;
            local_34 = (AnimationFrames *)0x0;
            local_88 = (AnimationFrames *)0x0;
            local_8 = CONCAT31(local_8._1_3_,5);
            local_78 = (AnimationFrames *)0x0;
            local_50 = *(AnimationFrames **)(*(int *)(g_gameData + 0xcc) + 0x78);
            pAVar4 = *(AnimationFrames **)(*(int *)(g_gameData + 0xcc) + 0x7c);
            local_6c = (uint)(pAVar4 + (3 - (int)local_50)) >> 2;
            if (pAVar4 < local_50) {
              local_6c = 0;
            }
            local_3c = local_30[0];
            if (local_6c != 0) {
              uVar19 = 0;
              do {
                pAVar4 = *(AnimationFrames **)local_50;
                pAVar10 = (AnimationFrames *)local_30;
                if (0xf < local_1c) {
                  pAVar10 = local_3c;
                }
                local_78 = pAVar4;
                bVar2 = std::_Traits_equal<>
                                  ((char *)pAVar10,local_20,(char *)pbVar3,(uint)unaff_EDI);
                if (bVar2) {
                  if (local_34 == pAVar21) {
                    std::vector<>::_Emplace_reallocate<>
                              ((vector<> *)&local_90,(AnimationFrames **)pAVar21,&local_78);
                    local_34 = local_88;
                    pAVar21 = local_8c;
                  }
                  else {
                    *(AnimationFrames **)pAVar21 = pAVar4;
                    local_8c = pAVar21 + 4;
                    pAVar21 = local_8c;
                  }
                }
                uVar19 = uVar19 + 1;
                local_50 = local_50 + 4;
                pbVar22 = local_48;
              } while (uVar19 != local_6c);
            }
            puVar7 = local_90;
            uVar19 = (int)pAVar21 - (int)local_90 >> 2;
            if (uVar19 == 1) {
              debugPrint("WORLD","Spawning single instance of \'%s\'");
              pSVar25 = (ShipInstance *)*puVar7;
            }
            else {
              iVar20 = rand();
              uVar16 = iVar20 % (int)(uVar19 - 1);
              uVar11 = 0;
              if (-1 < (int)uVar16) {
                uVar11 = uVar16;
              }
              local_6c = uVar19 - 1;
              if (uVar11 < uVar19) {
                local_6c = uVar11;
              }
              debugPrint("WORLD","Spawning single instance of \'%s\'");
              pSVar25 = (ShipInstance *)puVar7[local_6c];
            }
            spawnShip(local_74,pSVar25);
            local_8._0_1_ = 4;
            if (puVar7 != (undefined4 *)0x0) {
              pnVar15 = (nothrow_t *)(((int)local_34 - (int)puVar7 >> 2) * 4);
              puVar18 = puVar7;
              if ((nothrow_t *)0xfff < pnVar15) {
                puVar18 = (undefined4 *)puVar7[-1];
                pnVar15 = pnVar15 + 0x23;
                if (0x1f < (uint)((int)puVar7 + (-4 - (int)puVar18))) goto LAB_0040948d;
              }
              operator_delete(puVar18,pnVar15);
              local_90 = (undefined4 *)0x0;
              local_8c = (AnimationFrames *)0x0;
              local_88 = (AnimationFrames *)0x0;
            }
            local_8._0_1_ = 3;
            if (0xf < local_1c) {
              pnVar15 = (nothrow_t *)(local_1c + 1);
              pAVar4 = local_3c;
              if ((nothrow_t *)0xfff < pnVar15) {
                pAVar4 = *(AnimationFrames **)(local_3c + -4);
                pnVar15 = (nothrow_t *)(local_1c + 0x24);
                if ((AnimationFrames *)0x1f < local_3c + (-4 - (int)pAVar4)) {
LAB_0040948d:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pAVar4,pnVar15);
            }
            local_54 = local_54 + 0x18;
          } while (local_54 != local_80);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        std::vector<>::_Tidy((vector<> *)&local_84);
        pbVar17 = local_5c;
      }
      local_64 = local_64 + 1;
    } while (local_64 < 3);
  }
  else {
    piVar14 = (int *)(iVar20 + 0x78);
    local_35 = '\0';
    if (*(int *)(iVar20 + 0x7c) - *piVar14 >> 2 != 0) {
      do {
        iVar20 = *(int *)(*piVar14 + uVar19 * 4);
        if (*(int *)(iVar20 + 0xe8) == 2) {
          if (local_58 == (basic_string<> *)pbVar17) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)&local_60,pbVar17,(basic_string<> *)(iVar20 + 0x1c));
            pbVar17 = local_5c;
          }
          else {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)pbVar17,(basic_string<> *)(iVar20 + 0x1c));
            local_5c = pbVar17 + 0x18;
            pbVar17 = local_5c;
          }
        }
        else if (local_44 == pbVar22) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_4c,(basic_string<> *)pbVar22,
                     (basic_string<> *)(iVar20 + 0x1c));
          pbVar22 = local_48;
        }
        else {
          std::basic_string<>::basic_string<>(pbVar22,(basic_string<> *)(iVar20 + 0x1c));
          local_48 = pbVar22 + 0x18;
          pbVar22 = local_48;
        }
        uVar19 = uVar19 + 1;
        piVar14 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
      } while (uVar19 < (uint)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar14 >> 2));
    }
    local_54 = (basic_string<> *)(((int)pbVar17 - local_60) / 0x18);
    iVar20 = *(int *)(g_gameData + 0xcc);
    iVar6 = *(int *)(iVar20 + 0xbc);
    if ((iVar6 == 0) && (*(int *)(iVar20 + 0xc4) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_34 = (AnimationFrames *)0x0;
    }
    else {
      local_34 = *(AnimationFrames **)(iVar20 + 0xc4);
      iVar20 = *(int *)(iVar20 + 0xc0);
      pAVar4 = (AnimationFrames *)0x0;
      if ((0 < iVar20) && (0 < iVar6)) {
        pAVar4 = (AnimationFrames *)0x0;
        do {
          iVar5 = rand();
          pAVar4 = pAVar4 + iVar5 % iVar20 + 1;
          iVar6 = iVar6 + -1;
          pbVar17 = local_5c;
          pbVar22 = local_48;
          local_3c = pAVar4;
        } while (iVar6 != 0);
      }
      local_34 = pAVar4 + (int)local_34;
    }
    if ((AnimationFrames *)(((int)pbVar22 - local_4c) / 0x18) < local_34) {
      do {
        iVar20 = ((int)pbVar17 - local_60) / 0x18 + -1;
        if (1 < iVar20) {
          iVar6 = rand();
          iVar20 = iVar6 % iVar20;
        }
        pbVar9 = (basic_string<> *)(local_60 + iVar20 * 0x18);
        if (local_44 == pbVar22) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_4c,(basic_string<> *)pbVar22,pbVar9);
        }
        else {
          std::basic_string<>::basic_string<>(pbVar22,pbVar9);
          local_48 = pbVar22 + 0x18;
        }
        pbVar22 = local_48;
        local_3c = (AnimationFrames *)(((int)local_48 - local_4c) / 0x18);
        puVar7 = (undefined4 *)std::remove<>();
        pbVar9 = (basic_string<> *)*puVar7;
        if (pbVar9 != pbVar17) {
          pbVar17 = (basic_string<> *)std::_Move_unchecked<>(pbVar9,pbVar3,unaff_EDI);
          std::_Destroy_range<>
                    ((basic_string<> *)pbVar9,(basic_string<> *)pbVar3,(allocator<> *)unaff_EDI);
          local_5c = pbVar17;
        }
      } while (local_3c < local_34);
    }
    debugPrint("GAME","selected %lu out of %d pirate ships to spawn");
  }
  local_3c = (AnimationFrames *)0x0;
  piVar14 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar14 >> 2 != 0) {
    do {
      iVar20 = (int)local_3c * 4;
      bVar2 = ShipInstance::readyToSpawn(*(ShipInstance **)(*piVar14 + iVar20));
      if ((bVar2) &&
         ((iVar6 = *(int *)(iVar20 + *(int *)(*(int *)(g_gameData + 0xcc) + 0x78)),
          *(int *)(iVar6 + 0xe8) != 0 || (param_1)))) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_c8,(basic_string<> *)(iVar6 + 0x1c));
        pSVar8 = GameData::getShipWithRego();
        if (pSVar8 == (Ship *)0x0) {
          if (local_35 == '\0') {
            pbVar12 = std::_Find_unchecked<>
                                ((basic_string<> *)
                                 (*(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x78) + iVar20) +
                                 0x1c),pbVar3,unaff_EDI);
            if (pbVar12 == pbVar22) {
              debugPrint("GAME","Not including ship with rego \'%s\'");
              goto LAB_00409519;
            }
            debugPrint("GAME","Including ship with rego \'%s\'");
          }
          spawnShip(local_74,*(ShipInstance **)
                              (iVar20 + *(int *)(*(int *)(g_gameData + 0xcc) + 0x78)));
        }
        else {
          debugPrint("ERROR","Attempted to spawn a second ship with the same rego (%s)");
        }
      }
LAB_00409519:
      local_3c = (AnimationFrames *)((int)local_3c + 1);
      piVar14 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
    } while (local_3c < (uint)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar14 >> 2));
  }
  uVar19 = 0;
  pGVar23 = g_gameData + 0xd8;
  piVar14 = (int *)(*(int *)pGVar23 + 0xcc);
  if (*(int *)(*(int *)pGVar23 + 0xd0) - *piVar14 >> 2 != 0) {
    do {
      iVar20 = *piVar14;
      bVar2 = std::_Traits_equal<>("",0,(char *)pbVar3,(uint)unaff_EDI);
      if (!bVar2) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_c8,
                   (basic_string<> *)(*(int *)(iVar20 + uVar19 * 4) + 0xb0));
        pSVar8 = GameData::getShipWithRego();
        pGVar23 = g_gameData + 0xd8;
        local_70 = 0xc61c3c00;
        local_6c = 0xc61c3c00;
        iVar20 = *(int *)(*(int *)(*(int *)pGVar23 + 0xcc) + uVar19 * 4);
        *(Ship **)(iVar20 + 0x37c) = pSVar8;
        *(undefined4 *)(iVar20 + 200) = 0xc61c3c00;
        *(undefined4 *)(iVar20 + 0xcc) = 0xc61c3c00;
      }
      uVar19 = uVar19 + 1;
      piVar14 = (int *)(*(int *)pGVar23 + 0xcc);
    } while (uVar19 < (uint)(*(int *)(*(int *)pGVar23 + 0xd0) - *piVar14 >> 2));
  }
  uVar26 = SUB41(pbVar3,0);
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 0) {
    pEVar13 = Singleton<>::instance;
    if (Singleton<>::instance == (EmailManager *)0x0) {
      pEVar13 = operator_new(0x2c);
      Singleton<>::instance = pEVar13;
      *pEVar13 = (EmailManager)0x0;
      *(undefined4 *)(pEVar13 + 4) = 0;
      *(undefined4 *)(pEVar13 + 8) = 0;
      *(undefined4 *)(pEVar13 + 0xc) = 0;
      *(undefined4 *)(pEVar13 + 0x10) = 0;
      *(undefined4 *)(pEVar13 + 0x14) = 0;
      *(undefined4 *)(pEVar13 + 0x18) = 0;
      *(undefined4 *)(pEVar13 + 0x1c) = 0;
      *(undefined4 *)(pEVar13 + 0x20) = 0;
      *(undefined4 *)(pEVar13 + 0x24) = 0;
      *(undefined4 *)(pEVar13 + 0x28) = 0;
      local_68 = pEVar13;
    }
    EmailManager::runLogic(pEVar13,*(CommsData **)(g_gameData + 300),1.4013e-45,(bool)uVar26);
    pEVar13 = Singleton<>::instance;
    if (Singleton<>::instance == (EmailManager *)0x0) {
      pEVar13 = operator_new(0x2c);
      Singleton<>::instance = pEVar13;
      *pEVar13 = (EmailManager)0x0;
      *(undefined4 *)(pEVar13 + 4) = 0;
      *(undefined4 *)(pEVar13 + 8) = 0;
      *(undefined4 *)(pEVar13 + 0xc) = 0;
      *(undefined4 *)(pEVar13 + 0x10) = 0;
      *(undefined4 *)(pEVar13 + 0x14) = 0;
      *(undefined4 *)(pEVar13 + 0x18) = 0;
      *(undefined4 *)(pEVar13 + 0x1c) = 0;
      *(undefined4 *)(pEVar13 + 0x20) = 0;
      *(undefined4 *)(pEVar13 + 0x24) = 0;
      *(undefined4 *)(pEVar13 + 0x28) = 0;
      local_68 = pEVar13;
    }
    EmailManager::syncEmails(pEVar13,*(CommsData **)(g_gameData + 300));
  }
  debugPrint("GAME","Ships spawned.");
  std::vector<>::_Tidy((vector<> *)&local_60);
  std::vector<>::_Tidy((vector<> *)&local_4c);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::recheckStoryShips(void)

void __thiscall GameLogic::recheckStoryShips(GameLogic *this)

{
  ShipInstance *this_00;
  basic_string<> *this_01;
  bool bVar1;
  basic_string<> *pbVar2;
  Ship *pSVar3;
  int iVar4;
  uint unaff_ESI;
  uint uVar5;
  char *unaff_EDI;
  basic_string<> abStack_34 [8];
  undefined4 uStack_2c;
  GameData *local_8;
  
  uVar5 = 0;
  iVar4 = *(int *)(*(int *)(g_gameData + 0xcc) + 0x78);
  local_8 = g_gameData;
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - iVar4 >> 2 != 0) {
    do {
      this_00 = *(ShipInstance **)(iVar4 + uVar5 * 4);
      if ((*this_00 != (ShipInstance)0x0) &&
         (bVar1 = ShipInstance::readyToSpawn(this_00), local_8 = g_gameData, bVar1)) {
        spawnShip(this,*(ShipInstance **)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x78) + uVar5 * 4))
        ;
        iVar4 = *(int *)(g_gameData + 0xcc);
        this_01 = *(basic_string<> **)(iVar4 + 0x3f8);
        pbVar2 = (basic_string<> *)(*(int *)(*(int *)(iVar4 + 0x78) + uVar5 * 4) + 0x1c);
        if (*(basic_string<> **)(iVar4 + 0x3fc) == this_01) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(iVar4 + 0x3f4),(basic_string<> *)this_01,pbVar2);
        }
        else {
          std::basic_string<>::basic_string<>(this_01,pbVar2);
          *(int *)(iVar4 + 0x3f8) = *(int *)(iVar4 + 0x3f8) + 0x18;
        }
        uStack_2c = 0x409823;
        debugPrint("WORLD","Spawning ship \'%s\' as reqs are met...");
        local_8 = g_gameData;
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)(*(int *)(local_8 + 0xcc) + 0x78);
    } while (uVar5 < (uint)(*(int *)(*(int *)(local_8 + 0xcc) + 0x7c) - iVar4 >> 2));
  }
  local_8 = local_8 + 0xd8;
  uVar5 = 0;
  iVar4 = *(int *)(*(int *)local_8 + 0xcc);
  if (*(int *)(*(int *)local_8 + 0xd0) - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + uVar5 * 4);
      bVar1 = std::_Traits_equal<>("",0,unaff_EDI,unaff_ESI);
      if ((!bVar1) && (*(int *)(iVar4 + 0x37c) == 0)) {
        std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)(iVar4 + 0xb0));
        pSVar3 = GameData::getShipWithRego();
        local_8 = g_gameData + 0xd8;
        iVar4 = *(int *)(*(int *)(*(int *)local_8 + 0xcc) + uVar5 * 4);
        *(Ship **)(iVar4 + 0x37c) = pSVar3;
        *(undefined4 *)(iVar4 + 200) = 0xc61c3c00;
        *(undefined4 *)(iVar4 + 0xcc) = 0xc61c3c00;
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)(*(int *)local_8 + 0xcc);
    } while (uVar5 < (uint)(*(int *)(*(int *)local_8 + 0xd0) - iVar4 >> 2));
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: void __thiscall GameLogic::spawnShip(class ShipInstance *)

void __thiscall GameLogic::spawnShip(GameLogic *this,ShipInstance *param_1)

{
  CargoHold *pCVar1;
  basic_string<> *this_00;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  AnimationFrames **ppAVar6;
  char ****ppppcVar7;
  bool bVar8;
  char *pcVar9;
  Ship *this_01;
  ShipModule *pSVar10;
  ShipModuleClass *pSVar11;
  int iVar12;
  NavPoint *pNVar13;
  CargoHold *pCVar14;
  CargoHold *pCVar15;
  SpaceStation *pSVar16;
  Ship *pSVar17;
  int iVar18;
  _Tree_node<> *p_Var19;
  WeaponClass *pWVar20;
  Pather *this_02;
  ConversationManager *pCVar21;
  basic_string<> *pbVar22;
  AnimationFrames **ppAVar23;
  char *****pppppcVar24;
  GameLogic *pGVar25;
  ShipComponent *pSVar26;
  char *****pppppcVar27;
  char *****extraout_ECX;
  _Tree_comp_alloc<> *this_03;
  _Tree_comp_alloc<> *this_04;
  _Tree_comp_alloc<> *this_05;
  basic_string<> *pbVar28;
  undefined4 uVar29;
  nothrow_t *pnVar30;
  basic_string<> *pbVar31;
  GameData *pGVar32;
  FlagManager *pFVar33;
  CraftPurpose CVar34;
  uint uVar35;
  CargoHold *pCVar36;
  int iVar37;
  char *****pppppcVar38;
  uint uVar39;
  uint unaff_EDI;
  double dVar40;
  basic_string<> abStack_100 [16];
  undefined4 uStack_f0;
  CargoHold aCStack_e8 [16];
  undefined4 uStack_d8;
  FlagManager aFStack_d0 [4];
  undefined4 uStack_cc;
  undefined8 local_90;
  char ****local_88 [4];
  uint local_78;
  uint local_74;
  ShipInstance *local_70;
  basic_string<> *local_6c;
  Ship *local_68;
  GameLogic *local_64;
  float local_60;
  char ****local_5c;
  undefined8 local_58;
  FlagManager *local_50;
  Ship *local_4c;
  float local_48;
  CargoHold *local_44;
  undefined8 local_40;
  char local_31;
  char ****local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1c7a;
  local_10 = ExceptionList;
  pcVar9 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_70 = param_1;
  CVar34 = *(CraftPurpose *)(param_1 + 0xe8);
  if ((CVar34 != 1) && (CVar34 != 2)) {
    if (CVar34 == 3) {
      CVar34 = 6;
    }
    else if (CVar34 == 0) {
      CVar34 = 0;
    }
    else {
      bVar8 = CVar34 == 4;
      CVar34 = local_58._4_4_;
      if (bVar8) {
        CVar34 = 8;
      }
    }
  }
  local_58 = (double)CONCAT44(&stack0xffffff48,(undefined4)local_58);
  local_64 = this;
  local_18 = pcVar9;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff48,"stock",5);
  local_50 = aFStack_d0;
  local_8 = 0;
  uStack_d8 = 0x4099cc;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)aFStack_d0,(basic_string<> *)(param_1 + 0x34));
  local_44 = aCStack_e8;
  local_8._0_1_ = 1;
  local_6c = (basic_string<> *)(param_1 + 0x1c);
  uStack_f0 = 0x4099e4;
  std::basic_string<>::basic_string<>((basic_string<> *)aCStack_e8,local_6c);
  local_8 = CONCAT31(local_8._1_3_,2);
  std::basic_string<>::basic_string<>(abStack_100,(basic_string<> *)(param_1 + 4));
  local_8 = 0xffffffff;
  this_01 = generateShip();
  local_68 = this_01;
  Ship::initialiseBehaviour(this_01,CVar34,*(int *)(param_1 + 0x24c),*(int *)(param_1 + 0x250));
  *(ShipInstance **)(*(int *)(this_01 + 0x44) + 0x124) = param_1;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if ((g_gameLogic[0x72] != (GameLogic)0x0) && (*(int *)(g_gameData + 0xd0) == 0)) {
      *(Ship **)(g_gameData + 0xd0) = this_01;
    }
    *(undefined4 *)(this_01 + 0x378) = 0;
  }
  if (*(int *)(this_01 + 0x44) != 0) {
    *(ShipInstance *)(*(int *)(this_01 + 0x44) + 0x108) = param_1[0x255];
    *(ShipInstance *)(*(int *)(this_01 + 0x44) + 0x109) = param_1[0x254];
  }
  pbVar31 = (basic_string<> *)(param_1 + 0x20c);
  if ((basic_string<> *)(this_01 + 0x80) != pbVar31) {
    if (0xf < *(uint *)(param_1 + 0x220)) {
      pbVar31 = *(basic_string<> **)pbVar31;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this_01 + 0x80),(char *)pbVar31,*(uint *)(param_1 + 0x21c));
  }
  if ((CVar34 == 0) && (bVar8 = std::_Traits_equal<>("",0,pcVar9,unaff_EDI), bVar8)) {
    std::basic_string<>::assign((basic_string<> *)(this_01 + 0x80),"CERESPILOT",10);
  }
  pbVar31 = (basic_string<> *)(param_1 + 0x130);
  if ((basic_string<> *)(this_01 + 0xb0) != pbVar31) {
    if (0xf < *(uint *)(param_1 + 0x144)) {
      pbVar31 = *(basic_string<> **)pbVar31;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this_01 + 0xb0),(char *)pbVar31,*(uint *)(param_1 + 0x140));
  }
  iVar12 = *(int *)(this_01 + 0x44);
  if ((*(int *)(iVar12 + 0x70) == 2) || (param_1[0x115] != (ShipInstance)0x0)) {
    *(undefined1 *)(iVar12 + 0x160) = 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar12 + 0x6c) + 0x40) + 0x34) = 0;
  }
  local_40 = (double)(ulonglong)(uint)local_40;
  iVar12 = *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 0x1f;
  if ((*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224)) / 0x18 + iVar12 != iVar12) {
    local_4c = (Ship *)0x0;
    do {
      debugPrint("GAME","Removing module: %s");
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_30,(basic_string<> *)(local_4c + *(int *)(param_1 + 0x224))
                );
      uVar35 = 0;
      local_5c = local_30[0];
      if (*(int *)(*(int *)(this_01 + 0x40) + 0x40) - *(int *)(*(int *)(this_01 + 0x40) + 0x3c) >> 2
          != 0) {
        do {
          pppppcVar27 = local_30;
          if (0xf < local_1c) {
            pppppcVar27 = (char *****)local_5c;
          }
          bVar8 = std::_Traits_equal<>((char *)pppppcVar27,local_20,pcVar9,unaff_EDI);
          iVar12 = *(int *)(this_01 + 0x40);
          if (bVar8) {
            pSVar10 = *(ShipModule **)(*(int *)(iVar12 + 0x3c) + uVar35 * 4);
            if (0xf < local_1c) {
              pnVar30 = (nothrow_t *)(local_1c + 1);
              pppppcVar27 = (char *****)local_5c;
              if ((nothrow_t *)0xfff < pnVar30) {
                pppppcVar27 = (char *****)local_5c[-1];
                pnVar30 = (nothrow_t *)(local_1c + 0x24);
                if ((char *)0x1f < (char *)((int)local_5c + (-4 - (int)pppppcVar27)))
                goto LAB_0040a213;
              }
              operator_delete(pppppcVar27,pnVar30);
            }
            local_20 = 0;
            local_1c = 0xf;
            local_30[0] = (char ****)((uint)local_30[0] & 0xffffff00);
            if (pSVar10 == (ShipModule *)0x0) goto LAB_00409c1c;
            SystemManager::removeModule(*(SystemManager **)(this_01 + 0x40),pSVar10);
            goto LAB_00409c2e;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 < (uint)(*(int *)(iVar12 + 0x40) - *(int *)(iVar12 + 0x3c) >> 2));
      }
      if (0xf < local_1c) {
        pnVar30 = (nothrow_t *)(local_1c + 1);
        pppppcVar27 = (char *****)local_5c;
        if ((nothrow_t *)0xfff < pnVar30) {
          pppppcVar27 = (char *****)local_5c[-1];
          pnVar30 = (nothrow_t *)(local_1c + 0x24);
          if ((char *)0x1f < (char *)((int)local_5c + (-4 - (int)pppppcVar27))) goto LAB_0040a213;
        }
        operator_delete(pppppcVar27,pnVar30);
      }
LAB_00409c1c:
      debugPrint("GAME","(module doesn\'t exist, no need to remove.");
LAB_00409c2e:
      uVar35 = (int)local_40._4_4_ + 1;
      local_40 = (double)CONCAT44(uVar35,(uint)local_40);
      local_4c = local_4c + 0x18;
    } while (uVar35 < (uint)((*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224)) / 0x18));
  }
  local_5c = (char ****)0x0;
  pppppcVar27 = (char *****)(*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230));
  if ((int)pppppcVar27 / 0x18 + ((int)pppppcVar27 >> 0x1f) != (int)pppppcVar27 >> 0x1f) {
    local_40 = (double)((ulonglong)local_40 & 0xffffffff);
    do {
      debugPrint("GAME","Adding module: %s");
      pSVar10 = operator_new(0x88);
      local_58 = (double)CONCAT44(pSVar10,(undefined4)local_58);
      local_8 = 3;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff48,
                 (basic_string<> *)(*(int *)(param_1 + 0x230) + (int)local_40._4_4_));
      pSVar11 = GameData::getModuleClassWithIdentifier();
      pSVar10 = (ShipModule *)ShipModule::ShipModule(pSVar10,pSVar11);
      local_8 = 0xffffffff;
      ComponentInterfaceInstance::applyConfiguration
                (*(ComponentInterfaceInstance **)(pSVar10 + 0xc),
                 (ModuleConfiguration *)**(undefined4 **)(*(int *)(pSVar10 + 8) + 0x120));
      if (*(int *)(*(int *)(pSVar10 + 8) + 4) == 5) {
        *(int *)(pSVar10 + 0x68) = (int)*(float *)(*(int *)(pSVar10 + 8) + 0x104);
      }
      SystemManager::addModule(*(SystemManager **)(this_01 + 0x40),pSVar10,-1);
      pppppcVar27 = (char *****)((int)local_5c + 1);
      local_40 = (double)CONCAT44((int)local_40._4_4_ + 0x18,(uint)local_40);
      local_5c = (char ****)pppppcVar27;
    } while (pppppcVar27 <
             (char *****)((*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x18));
  }
  if ((param_1[0xf9] != (ShipInstance)0x0) && (local_64[0x1c5] == (GameLogic)0x0)) {
    this_01[0xd0] = (Ship)0x0;
  }
  if ((*(int *)(param_1 + 0xe8) == 2) || (param_1[0xf8] != (ShipInstance)0x0)) {
    *(undefined1 *)(*(int *)(this_01 + 0x40) + 0x34) = 0;
  }
  uVar35 = 0;
  iVar12 = *(int *)(param_1 + 0xfc);
  if (*(int *)(param_1 + 0x100) - iVar12 >> 2 != 0) {
    pppppcVar27 = (char *****)0xc;
    local_40 = (double)CONCAT44(0xc,(uint)local_40);
    do {
      local_5c = *(char *****)((int)pppppcVar27 + iVar12 + -0xc);
      local_44 = *(CargoHold **)(this_01 + 0x1f8);
      if (((int)uVar35 < 0) ||
         (((0 < *(int *)(local_44 + 8) && (*(int *)(local_44 + 8) <= (int)uVar35)) ||
          (*(int *)((int)pppppcVar27 + (int)local_44) == 0)))) {
        CargoHold::addPod(local_44,uVar35);
        pppppcVar27 = local_40._4_4_;
      }
      if (((char *****)local_5c != (char *****)0x0) &&
         (local_44 = *(CargoHold **)((int)pppppcVar27 + (int)local_44),
         (char *)((int)local_5c - 1U) < (char *)0x3)) {
        local_44[(int)local_5c] = (CargoHold)0x1;
      }
      uVar35 = uVar35 + 1;
      iVar12 = *(int *)(param_1 + 0xfc);
      pppppcVar27 = pppppcVar27 + 1;
      local_40 = (double)CONCAT44(pppppcVar27,(uint)local_40);
    } while (uVar35 < (uint)(*(int *)(param_1 + 0x100) - iVar12 >> 2));
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x108);
    puVar5 = (undefined4 *)*puVar4;
    local_40 = (double)CONCAT44(puVar5,(uint)local_40);
    while (puVar5 != puVar4) {
      CargoHold::addToHold(*(CargoHold **)(this_01 + 0x1f8),puVar5[4],puVar5[5],(int)pppppcVar27);
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)((int)&local_40 + 4));
      pppppcVar27 = extraout_ECX;
      puVar5 = local_40._4_4_;
    }
  }
  local_4c = (Ship *)0x0;
  local_31 = '\0';
  local_50 = *(FlagManager **)(local_64 + *(int *)(param_1 + 0xd4) * 4 + 0x54);
  if (((*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) &&
      (bVar8 = std::_Traits_equal<>("objectsinspace",0xe,pcVar9,unaff_EDI), bVar8)) &&
     ((this_01[0x234] != (Ship)0x0 && (g_gameLogic[0x11b] != (GameLogic)0x0)))) {
    if ((&startLocationMap)[*(int *)(local_64 + 0xfc)] == (int *)0xffffffff) {
      iVar12 = rand();
      Ship::setSector(this_01,(int)(&startLocationMap)[iVar12 % 0xb]);
      pNVar13 = Sector::getRandomNavPoint(*(Sector **)(this_01 + 0x24),0);
      local_60 = *(float *)(pNVar13 + 8);
      local_5c = *(char *****)(pNVar13 + 0xc);
      local_58 = *(double *)(pNVar13 + 8);
      local_8 = 4;
      iVar12 = rand();
      uVar35 = rand();
      uVar35 = uVar35 & 0x80000001;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xfffffffe) + 1;
      }
      local_40 = (double)(int)uVar35;
      dVar40 = (double)(iVar12 % 0x168) * 0.017453292519943295;
      local_90 = dVar40;
      __libm_sse2_sin_precise();
      local_44 = (CargoHold *)(float)(dVar40 * local_40);
      dVar40 = local_90;
      __libm_sse2_cos_precise();
      local_48 = (float)local_44;
      local_44 = (CargoHold *)(float)(dVar40 * local_40);
      local_8 = CONCAT31(local_8._1_3_,6);
      cocos2d::Vec2::operator+((Vec2 *)&local_60,(Vec2 *)&stack0xffffff58);
      this_01 = local_68;
      local_8 = 0xffffffff;
      GameObject::setLocation((GameObject *)(local_68 + 8));
      iVar12 = rand();
      local_31 = '\x01';
      *(float *)(this_01 + 0x120) = (float)(iVar12 % 0x168);
      goto LAB_0040a31a;
    }
    Ship::setSector(this_01,(int)(&startLocationMap)[*(int *)(local_64 + 0xfc)]);
    pCVar1 = (CargoHold *)(&startLocationMap + *(int *)(local_64 + 0xfc));
    local_40 = (double)CONCAT44(pCVar1,(uint)local_40);
    this_03 = (_Tree_comp_alloc<> *)local_64;
    if ((*(CargoHold **)(_startStationsPersector + 4))[0xd] == (CargoHold)0x0) {
      this_03 = *(_Tree_comp_alloc<> **)pCVar1;
      pCVar14 = *(CargoHold **)(_startStationsPersector + 4);
      pCVar36 = _startStationsPersector;
      do {
        if (*(int *)(pCVar14 + 0x10) < (int)this_03) {
          pCVar15 = *(CargoHold **)(pCVar14 + 8);
        }
        else {
          pCVar15 = *(CargoHold **)pCVar14;
          pCVar36 = pCVar14;
        }
        pCVar14 = pCVar15;
      } while (pCVar15[0xd] == (CargoHold)0x0);
      if ((pCVar36 == _startStationsPersector) || ((int)this_03 < *(int *)(pCVar36 + 0x10)))
      goto LAB_0040a0b2;
    }
    else {
LAB_0040a0b2:
      local_44 = pCVar1;
      std::_Tree_comp_alloc<>::_Buynode<>
                (this_03,(piecewise_construct_t *)this_03,(tuple<int&&> *)&local_44,
                 (tuple<> *)this_03);
      std::_Tree<>::_Insert_hint<>();
      pCVar36 = local_44;
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff48,(basic_string<> *)(pCVar36 + 0x14));
    pSVar16 = GameData::getSpaceStation();
    local_4c = (Ship *)pSVar16;
    if (pSVar16 != (SpaceStation *)0x0) {
      GameObject::setLocation((GameObject *)(this_01 + 8));
      Ship::setDocked(this_01,(Ship *)pSVar16,true,false);
      if (this_01[0x234] != (Ship)0x0) {
        strUsingArgs((char *)local_30);
        local_8 = 7;
        local_5c = (char ****)local_30;
        if (0xf < local_1c) {
          local_5c = local_30[0];
        }
        pppppcVar27 = local_30;
        if (0xf < local_1c) {
          pppppcVar27 = (char *****)local_30[0];
        }
        iVar37 = 0;
        local_40 = (double)CONCAT44(pppppcVar27,(uint)local_40);
        iVar12 = (int)((int)local_5c + local_20) - (int)pppppcVar27;
        if ((char *****)((int)local_5c + local_20) < pppppcVar27) {
          iVar12 = 0;
        }
        if (iVar12 != 0) {
          do {
            iVar18 = tolower((int)*(char *)((int)pppppcVar27 + iVar37));
            *(char *)((int)local_5c + iVar37) = (char)iVar18;
            iVar37 = iVar37 + 1;
            param_1 = local_70;
            this_01 = local_68;
          } while (iVar37 != iVar12);
        }
        local_58 = (double)CONCAT44(&stack0xffffff44,(undefined4)local_58);
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff44,(basic_string<> *)local_30);
        local_8._0_1_ = 8;
        pFVar33 = Singleton<>::getInstance();
        local_8 = CONCAT31(local_8._1_3_,7);
        FlagManager::setFlag(pFVar33);
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
          pnVar30 = (nothrow_t *)(local_1c + 1);
          pppppcVar27 = (char *****)local_30[0];
          if ((nothrow_t *)0xfff < pnVar30) {
            pppppcVar27 = (char *****)local_30[0][-1];
            pnVar30 = (nothrow_t *)(local_1c + 0x24);
            if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)pppppcVar27))) {
LAB_0040a213:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pppppcVar27,pnVar30);
        }
      }
    }
    local_31 = '\x01';
  }
  else {
    bVar8 = std::_Traits_equal<>("",0,pcVar9,unaff_EDI);
    if (bVar8) {
      iVar12 = *(int *)(param_1 + 0x50) - (int)*(float **)(param_1 + 0x4c) >> 3;
      if (iVar12 != 0) {
        if (iVar12 == 1) {
          *(double *)(this_01 + 0x28) = (double)**(float **)(param_1 + 0x4c);
          fVar3 = *(float *)(*(int *)(param_1 + 0x4c) + 4);
        }
        else {
          iVar37 = rand();
          iVar37 = iVar37 % (iVar12 + -1);
          iVar12 = 0;
          if (-1 < iVar37) {
            iVar12 = iVar37;
          }
          *(double *)(this_01 + 0x28) = (double)*(float *)(*(int *)(param_1 + 0x4c) + iVar12 * 8);
          fVar3 = *(float *)(*(int *)(param_1 + 0x4c) + 4 + iVar12 * 8);
        }
        dVar40 = (double)fVar3;
        goto LAB_0040a315;
      }
      *(undefined4 *)(this_01 + 0x28) = 0;
      *(undefined4 *)(this_01 + 0x2c) = 0x40590000;
      *(undefined4 *)(this_01 + 0x30) = 0;
      *(undefined4 *)(this_01 + 0x34) = 0x40590000;
      debugPrint("ERROR","No valid start locations.h");
      bVar8 = cc_assert_script_compatible("ERROR: no valid start locations.");
      if (!bVar8) {
        cocos2d::log("Assert failed: %s");
      }
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff48,(basic_string<> *)(param_1 + 0x58));
      pSVar16 = GameData::getSpaceStation();
      if (pSVar16 != (SpaceStation *)0x0) {
        *(undefined8 *)(this_01 + 0x28) = *(undefined8 *)(pSVar16 + 0x28);
        dVar40 = *(double *)(pSVar16 + 0x30);
LAB_0040a315:
        *(double *)(this_01 + 0x30) = dVar40;
      }
    }
  }
LAB_0040a31a:
  debugPrint("DETAIL","  Spawn location: %f, %f");
  if (local_31 == '\0') {
    bVar8 = std::_Traits_equal<>("",0,pcVar9,unaff_EDI);
    if (!bVar8) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff48,(basic_string<> *)(param_1 + 0x118));
      pSVar17 = GameData::getShipWithRego();
      local_4c = pSVar17;
      if ((pSVar17 == (Ship *)0x0) || (*(int *)(pSVar17 + 0x20) != *(int *)(this_01 + 0x20))) {
LAB_0040a3be:
        debugPrint("ERROR","Error trying to dock a ship at its starting space station.");
        bVar8 = cc_assert_script_compatible("Error trying to start a ship docked ");
        if (!bVar8) {
          cocos2d::log("Assert failed: %s");
        }
      }
      else {
        iVar12 = *(int *)(pSVar17 + 0x254);
        bVar8 = false;
        if (iVar12 != 0) {
          bVar8 = *(int *)(iVar12 + 0x158) == 1;
        }
        if (!bVar8) {
          bVar8 = false;
          if (iVar12 != 0) {
            bVar8 = *(int *)(iVar12 + 0x158) == 3;
          }
          if (!bVar8) goto LAB_0040a3be;
        }
      }
      if (pSVar17 != (Ship *)0x0) {
        GameObject::setLocation((GameObject *)(this_01 + 8));
        Ship::setDocked(this_01,pSVar17,true,false);
        if (this_01[0x234] != (Ship)0x0) {
          strUsingArgs((char *)local_30);
          local_8 = 9;
          local_5c = (char ****)local_30;
          if (0xf < local_1c) {
            local_5c = local_30[0];
          }
          pppppcVar27 = local_30;
          if (0xf < local_1c) {
            pppppcVar27 = (char *****)local_30[0];
          }
          iVar37 = 0;
          local_40 = (double)CONCAT44(pppppcVar27,(uint)local_40);
          iVar12 = (int)((int)local_5c + local_20) - (int)pppppcVar27;
          if ((char *****)((int)local_5c + local_20) < pppppcVar27) {
            iVar12 = 0;
          }
          if (iVar12 != 0) {
            do {
              iVar18 = tolower((int)*(char *)((int)pppppcVar27 + iVar37));
              *(char *)((int)local_5c + iVar37) = (char)iVar18;
              iVar37 = iVar37 + 1;
              param_1 = local_70;
              this_01 = local_68;
            } while (iVar37 != iVar12);
          }
          local_58 = (double)CONCAT44(&stack0xffffff44,(undefined4)local_58);
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff44,(basic_string<> *)local_30);
          local_8._0_1_ = 10;
          if (Singleton<>::instance == (FlagManager *)0x0) {
            local_44 = operator_new(0x30);
            *(undefined4 *)local_44 = 0;
            *(undefined4 *)(local_44 + 4) = 0;
            *(undefined4 *)(local_44 + 8) = 0;
            pCVar1 = local_44 + 0xc;
            local_8._0_1_ = 0xc;
            local_40 = (double)CONCAT44(pCVar1,(uint)local_40);
            *(undefined4 *)pCVar1 = 0;
            *(undefined4 *)(local_44 + 0x10) = 0;
            p_Var19 = std::_Tree_comp_alloc<>::_Buyheadnode(this_04);
            *(_Tree_node<> **)pCVar1 = p_Var19;
            Singleton<>::instance = (FlagManager *)local_44;
            *(undefined4 *)(local_44 + 0x24) = 0;
            *(undefined4 *)(local_44 + 0x28) = 0xf;
            local_44[0x14] = (CargoHold)0x0;
          }
          local_8 = CONCAT31(local_8._1_3_,9);
          FlagManager::setFlag();
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
            pnVar30 = (nothrow_t *)(local_1c + 1);
            pppppcVar27 = (char *****)local_30[0];
            if ((nothrow_t *)0xfff < pnVar30) {
              pppppcVar27 = (char *****)local_30[0][-1];
              pnVar30 = (nothrow_t *)(local_1c + 0x24);
              if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)pppppcVar27))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pppppcVar27,pnVar30);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (char ****)((uint)local_30[0] & 0xffffff00);
        }
      }
    }
  }
  *(float *)(this_01 + 0x120) = (float)*(int *)(param_1 + 0xdc);
  if ((local_31 == '\0') && (*(int *)(param_1 + 0xe4) != 0)) {
    iVar37 = rand();
    iVar12 = *(int *)(param_1 + 0xe4);
    iVar18 = rand();
    local_5c = (char ****)(float)*(double *)(local_68 + 0x30);
    local_60 = (float)*(double *)(local_68 + 0x28);
    local_8 = 0xd;
    local_58 = (double)(iVar18 % iVar12);
    dVar40 = (double)(iVar37 % 0x168) * 0.017453292519943295;
    local_40 = dVar40;
    __libm_sse2_sin_precise();
    local_44 = (CargoHold *)(float)(dVar40 * local_58);
    dVar40 = local_40;
    __libm_sse2_cos_precise();
    local_48 = (float)local_44;
    local_44 = (CargoHold *)(float)(dVar40 * local_58);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    cocos2d::Vec2::operator+((Vec2 *)&local_60,(Vec2 *)&local_90);
    local_8 = 0xffffffff;
    *(double *)(local_68 + 0x28) = (double)(float)local_90;
    *(double *)(local_68 + 0x30) = (double)local_90._4_4_;
    this_01 = local_68;
  }
  pFVar33 = local_50;
  uVar35 = 0;
  if (*(int *)(*(int *)(this_01 + 0x40) + 0x40) - *(int *)(*(int *)(this_01 + 0x40) + 0x3c) >> 2 !=
      0) {
    do {
      iVar12 = *(int *)(*(int *)(*(int *)(this_01 + 0x40) + 0x3c) + uVar35 * 4);
      uVar35 = uVar35 + 1;
      *(undefined4 *)(iVar12 + 0x5c) = *(undefined4 *)(*(int *)(iVar12 + 8) + 0xc4);
    } while (uVar35 < (uint)(*(int *)(*(int *)(this_01 + 0x40) + 0x40) -
                             *(int *)(*(int *)(this_01 + 0x40) + 0x3c) >> 2));
  }
  iVar12 = *(int *)(param_1 + (int)local_50 * 0xc + 0x74) -
           *(int *)(param_1 + (int)local_50 * 0xc + 0x70) >> 3;
  if ((iVar12 != 0) && (uVar35 = 0, iVar12 != 0)) {
    do {
      debugPrint("DETAIL","  Waypoint added: %f, %f");
      uVar35 = uVar35 + 1;
      this_01 = local_68;
    } while (uVar35 < (uint)(*(int *)(param_1 + (int)pFVar33 * 0xc + 0x74) -
                             *(int *)(param_1 + (int)pFVar33 * 0xc + 0x70) >> 3));
  }
  local_40 = (double)((ulonglong)local_40 & 0xffffffff);
  iVar12 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 0x1f;
  if ((*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec)) / 0x18 + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      iVar37 = -1;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff44,
                 (basic_string<> *)(*(int *)(param_1 + 0xec) + iVar12));
      pWVar20 = GameData::getWeaponClassWithIdentifier();
      Ship::addWeapon(this_01,pWVar20,iVar37);
      iVar12 = iVar12 + 0x18;
      uVar35 = (int)local_40._4_4_ + 1;
      local_40 = (double)CONCAT44(uVar35,(uint)local_40);
    } while (uVar35 < (uint)((*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec)) / 0x18));
  }
  pGVar32 = g_gameData;
  pSVar17 = local_4c;
  if (*(int *)(param_1 + 0xe8) == 0) {
    *(undefined4 *)(g_gameData + 0xd8) = *(undefined4 *)(this_01 + 0x24);
    if (Singleton<Pather>::instance == (Pather *)0x0) {
      this_02 = operator_new(0x98);
      local_58 = (double)CONCAT44(this_02,(undefined4)local_58);
      local_8 = 0xf;
      Singleton<Pather>::instance = (Pather *)Pather::Pather(this_02);
      local_8 = 0xffffffff;
    }
    Pather::resetSector(Singleton<Pather>::instance);
    pSVar17 = local_4c;
    iVar12 = *(int *)(this_01 + 0x254);
    *(undefined2 *)(local_64 + 6) = *(undefined2 *)(iVar12 + 0xd1);
    local_64[8] = *(GameLogic *)(iVar12 + 0xd3);
    pGVar32 = g_gameData;
    ShipData::currentlyBoardedShip = this_01;
    if (local_4c != (Ship *)0x0) {
      ShipData::currentlyBoardedShip = local_4c;
    }
    if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
      iVar12 = *(int *)(this_01 + 0x254);
    }
    else {
      iVar12 = *(int *)(ShipData::currentlyBoardedShip + 0x254);
    }
    this_00 = (basic_string<> *)(g_gameData + 0x10c);
    g_gameData[0xd4] = *(GameData *)(iVar12 + 0xd0);
    pbVar31 = (basic_string<> *)(this_01 + 8);
    if (this_00 != pbVar31) {
      if (0xf < *(uint *)(this_01 + 0x1c)) {
        pbVar31 = *(basic_string<> **)pbVar31;
      }
      std::basic_string<>::assign(this_00,(char *)pbVar31,*(uint *)(this_01 + 0x18));
      pGVar32 = g_gameData;
    }
    if (*(int *)(pGVar32 + 0xd0) != 0) {
      debugPrint("WORLD","Vessel \'%s\' (%s) is set up as playable.");
      pGVar32 = g_gameData;
    }
  }
  iVar12 = *(int *)(param_1 + 0xd4);
  *(int *)(this_01 + 100) = iVar12;
  if ((*(int *)(*(int *)(this_01 + 0x254) + 0x158) == 0) &&
     (*(int *)(*(int *)(this_01 + 0x44) + 0x70) != 1)) {
    piVar2 = (int *)(*(int *)(pGVar32 + 0xcc) + 0x394 + iVar12 * 4);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(int *)(pGVar32 + 0xcc) + 0x3a0 + *(int *)(this_01 + 100) * 4);
    *piVar2 = *piVar2 + 1;
    debugPrint("DETAIL","Enemies spawned for team %d: %d");
    pGVar32 = g_gameData;
    if (param_1[0x114] == (ShipInstance)0x0) goto LAB_0040a9ef;
    piVar2 = (int *)(*(int *)(g_gameData + 0xcc) + 0x3b8 + *(int *)(this_01 + 100) * 4);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(int *)(pGVar32 + 0xcc) + 0x3ac + *(int *)(this_01 + 100) * 4);
    *piVar2 = *piVar2 + 1;
    debugPrint("DETAIL","Targets spawned for team %d: %d");
    pGVar32 = g_gameData;
  }
  if (param_1[0x114] != (ShipInstance)0x0) {
    debugPrint("DETAIL","Ship \'%s\' is registered as a priority target for team %d");
    pbVar31 = (basic_string<> *)(this_01 + 0x238);
    pGVar32 = g_gameData;
    if ((basic_string<> *)(*(int *)(g_gameData + 0xcc) + 0x84) != pbVar31) {
      if (0xf < *(uint *)(this_01 + 0x24c)) {
        pbVar31 = *(basic_string<> **)pbVar31;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(*(int *)(g_gameData + 0xcc) + 0x84),(char *)pbVar31,
                 *(uint *)(this_01 + 0x248));
      pGVar32 = g_gameData;
    }
  }
LAB_0040a9ef:
  if ((pSVar17 != (Ship *)0x0) && (*(char *)(*(int *)(pGVar32 + 0xcc) + 0x315) != '\0')) {
    iVar12 = *(int *)(pSVar17 + 0x254);
    bVar8 = false;
    if (iVar12 != 0) {
      bVar8 = *(int *)(iVar12 + 0x158) == 1;
    }
    if (bVar8) {
      ShipData::currentlyBoardedShip = pSVar17;
      pGVar32[0xd4] = *(GameData *)(iVar12 + 0xd0);
    }
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    *(int *)(this_01 + 0x2a8) = *(int *)(param_1 + 0x110);
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar12 = *(int *)(local_64 + 0xc);
    if ((*(int *)(pGVar32 + 0xd0) != 0) &&
       (uVar35 = 0, *(int *)(iVar12 + 0x6c) - *(int *)(iVar12 + 0x68) >> 2 != 0)) {
      do {
        Article::runLogic(*(Article **)(*(int *)(iVar12 + 0x68) + uVar35 * 4),(float)pcVar9);
        uVar35 = uVar35 + 1;
        param_1 = local_70;
      } while (uVar35 < (uint)(*(int *)(iVar12 + 0x6c) - *(int *)(iVar12 + 0x68) >> 2));
    }
    ComputerSystem::syncArticles(*(ComputerSystem **)(local_64 + 0xc));
    local_58 = (double)CONCAT44(&stack0xffffff44,(undefined4)local_58);
    uStack_cc = 0x40aaf5;
    strUsingArgs(&stack0xffffff44);
    local_8 = 0x10;
    if (Singleton<>::instance == (FlagManager *)0x0) {
      local_50 = operator_new(0x30);
      *(undefined4 *)local_50 = 0;
      *(undefined4 *)(local_50 + 4) = 0;
      *(undefined4 *)(local_50 + 8) = 0;
      pCVar1 = (CargoHold *)(local_50 + 0xc);
      local_8 = CONCAT31(local_8._1_3_,0x12);
      *(undefined4 *)pCVar1 = 0;
      *(undefined4 *)(local_50 + 0x10) = 0;
      local_44 = pCVar1;
      p_Var19 = std::_Tree_comp_alloc<>::_Buyheadnode(this_05);
      *(_Tree_node<> **)pCVar1 = p_Var19;
      Singleton<>::instance = local_50;
      *(undefined4 *)(local_50 + 0x24) = 0;
      *(undefined4 *)(local_50 + 0x28) = 0xf;
      local_50[0x14] = (FlagManager)0x0;
    }
    local_8 = 0xffffffff;
    FlagManager::setFlag();
  }
  uVar35 = 0;
  pCVar21 = Singleton<>::getInstance();
  pbVar28 = local_6c;
  if (*(int *)(pCVar21 + 0x40) - *(int *)(pCVar21 + 0x3c) >> 2 != 0) {
    do {
      Singleton<>::getInstance();
      pbVar22 = pbVar28;
      if (0xf < *(uint *)(pbVar28 + 0x14)) {
        pbVar22 = *(basic_string<> **)pbVar28;
      }
      bVar8 = std::_Traits_equal<>((char *)pbVar22,*(uint *)(pbVar28 + 0x10),pcVar9,unaff_EDI);
      if (bVar8) {
        pCVar21 = Singleton<>::getInstance();
        ppAVar6 = *(AnimationFrames ***)(this_01 + 0x36c);
        ppAVar23 = (AnimationFrames **)(*(int *)(pCVar21 + 0x3c) + uVar35 * 4);
        if (*(AnimationFrames ***)(this_01 + 0x370) == ppAVar6) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)(this_01 + 0x368),ppAVar6,ppAVar23);
        }
        else {
          *ppAVar6 = *ppAVar23;
          *(int *)(this_01 + 0x36c) = *(int *)(this_01 + 0x36c) + 4;
        }
      }
      uVar35 = uVar35 + 1;
      pCVar21 = Singleton<>::getInstance();
      param_1 = local_70;
    } while (uVar35 < (uint)(*(int *)(pCVar21 + 0x40) - *(int *)(pCVar21 + 0x3c) >> 2));
  }
  iVar12 = *(int *)(param_1 + 0x23c);
  local_5c = (char ****)0x0;
  iVar37 = *(int *)(param_1 + 0x240) - iVar12 >> 0x1f;
  if ((*(int *)(param_1 + 0x240) - iVar12) / 0x18 + iVar37 != iVar37) {
    local_4c = (Ship *)0x0;
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_88,(basic_string<> *)(local_4c + iVar12));
      local_44 = (CargoHold *)g_gameData;
      local_8 = 0x13;
      pppppcVar27 = local_88;
      if (0xf < local_74) {
        pppppcVar27 = (char *****)local_88[0];
      }
      pppppcVar24 = local_88;
      if (0xf < local_74) {
        pppppcVar24 = (char *****)local_88[0];
      }
      pppppcVar38 = local_88;
      if (0xf < local_74) {
        pppppcVar38 = (char *****)local_88[0];
      }
      iVar12 = (int)((int)pppppcVar24 + local_78) - (int)pppppcVar38;
      if ((char *****)((int)pppppcVar24 + local_78) < pppppcVar38) {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        local_40._4_4_ = (char *****)((int)pppppcVar27 - (int)pppppcVar38);
        iVar37 = 0;
        do {
          iVar18 = toupper((int)*(char *)pppppcVar38);
          pppppcVar38 = (char *****)((int)pppppcVar38 + 1);
          iVar37 = iVar37 + 1;
          *(char *)((int)pppppcVar38 + (int)local_40._4_4_ + -1) = (char)iVar18;
          param_1 = local_70;
          this_01 = local_68;
        } while (iVar37 != iVar12);
      }
      ppppcVar7 = local_88[0];
      local_40 = (double)(ulonglong)(uint)local_40;
      pGVar25 = *(GameLogic **)local_44;
      local_6c = (basic_string<> *)(*(int *)(local_44 + 4) - (int)pGVar25 >> 2);
      if (local_6c != (basic_string<> *)0x0) {
        do {
          pppppcVar27 = local_88;
          if (0xf < local_74) {
            pppppcVar27 = (char *****)ppppcVar7;
          }
          local_64 = pGVar25;
          bVar8 = std::_Traits_equal<>((char *)pppppcVar27,local_78,pcVar9,unaff_EDI);
          if (bVar8) {
            local_44 = *(CargoHold **)(*(int *)local_44 + (int)local_40._4_4_ * 4);
            local_8 = 0xffffffff;
            if (local_74 < 0x10) goto LAB_0040ad88;
            pnVar30 = (nothrow_t *)(local_74 + 1);
            pppppcVar27 = (char *****)ppppcVar7;
            if ((nothrow_t *)0xfff < pnVar30) {
              pppppcVar27 = (char *****)ppppcVar7[-1];
              pnVar30 = (nothrow_t *)(local_74 + 0x24);
              if ((char *)0x1f < (char *)((int)ppppcVar7 + (-4 - (int)pppppcVar27)))
              goto LAB_0040a213;
            }
            operator_delete(pppppcVar27,pnVar30);
            goto LAB_0040ad88;
          }
          pbVar28 = (basic_string<> *)((int)local_40._4_4_ + 1);
          pGVar25 = local_64 + 4;
          local_40 = (double)CONCAT44(pbVar28,(uint)local_40);
          local_64 = pGVar25;
        } while (pbVar28 < local_6c);
      }
      local_8 = 0xffffffff;
      if (0xf < local_74) {
        pnVar30 = (nothrow_t *)(local_74 + 1);
        pppppcVar27 = (char *****)ppppcVar7;
        if ((nothrow_t *)0xfff < pnVar30) {
          pppppcVar27 = (char *****)ppppcVar7[-1];
          pnVar30 = (nothrow_t *)(local_74 + 0x24);
          if ((char *)0x1f < (char *)((int)ppppcVar7 + (-4 - (int)pppppcVar27))) goto LAB_0040a213;
        }
        operator_delete(pppppcVar27,pnVar30);
      }
      local_44 = (CargoHold *)0x0;
LAB_0040ad88:
      local_88[0] = (char ****)((uint)local_88[0] & 0xffffff00);
      local_74 = 0xf;
      local_78 = 0;
      pSVar26 = operator_new(8);
      pGVar32 = g_gameData;
      local_58 = (double)CONCAT44(pSVar26,(undefined4)local_58);
      local_6c = *(basic_string<> **)local_44;
      *(undefined4 *)pSVar26 = 0x42c80000;
      uVar35 = 0;
      uVar39 = *(int *)(pGVar32 + 4) - *(int *)pGVar32 >> 2;
      if (uVar39 != 0) {
        local_50 = *(FlagManager **)pGVar32;
        pFVar33 = local_50;
        do {
          param_1 = local_70;
          if ((basic_string<> *)**(undefined4 **)pFVar33 == local_6c) {
            uVar29 = *(undefined4 *)(local_50 + uVar35 * 4);
            goto LAB_0040adee;
          }
          uVar35 = uVar35 + 1;
          pFVar33 = pFVar33 + 4;
        } while (uVar35 < uVar39);
      }
      uVar29 = 0;
LAB_0040adee:
      *(undefined4 *)(pSVar26 + 4) = uVar29;
      CargoHold::addComponent(*(CargoHold **)(this_01 + 0x1f8),pSVar26);
      iVar12 = *(int *)(param_1 + 0x23c);
      local_5c = (char ****)((int)local_5c + 1);
      local_4c = local_4c + 0x18;
    } while (local_5c < (char *****)((*(int *)(param_1 + 0x240) - iVar12) / 0x18));
  }
  if ((this_01[0x234] != (Ship)0x0) && (*(char *)(*(int *)(g_gameData + 0xcc) + 0x30c) != '\0')) {
    *(undefined1 *)(*(int *)(this_01 + 0x40) + 0x34) = 1;
  }
  ShipBehaviour::configureShipDesires(*(ShipBehaviour **)(this_01 + 0x44));
  uStack_cc = 0x40af05;
  debugPrint("WORLD","Spawned ship: \'%s\' (team %d), %s, registered as %s, at location %f, %f");
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: float __thiscall GameLogic::getOrbitChangeTime(enum EOrbitState::OrbitState,class Ship *)

float __thiscall GameLogic::getOrbitChangeTime(GameLogic *this,OrbitState param_1,Ship *param_2)

{
  float10 in_ST0;
  
  switch(param_1) {
  case 1:
    return (float)in_ST0;
  default:
    return (float)in_ST0;
  case 3:
    return (float)in_ST0;
  case 4:
    return (float)in_ST0;
  case 5:
    return (float)in_ST0;
  }
}


// public: bool __thiscall GameLogic::runShipLogic(class Ship *,float,bool)

bool __thiscall GameLogic::runShipLogic(GameLogic *this,Ship *param_1,float param_2,bool param_3)

{
  bool bVar1;
  Ship *this_00;
  TabletOmega *this_01;
  GameObject *pGVar2;
  int iVar3;
  StellarObject *pSVar4;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar5;
  LogSystem *extraout_ECX;
  LogSystem *extraout_ECX_00;
  LogSystem *this_02;
  LogSystem *extraout_ECX_01;
  LogSystem *extraout_ECX_02;
  LogSystem *this_03;
  LogSystem *extraout_ECX_03;
  LogSystem *this_04;
  LogSystem *this_05;
  LogSystem *extraout_ECX_04;
  LogSystem *this_06;
  LogSystem *extraout_ECX_05;
  int *piVar6;
  int iVar7;
  SystemManager *this_07;
  int iVar8;
  uint uVar9;
  Ship *pSVar10;
  undefined1 auVar11 [16];
  float fVar12;
  Ship *in_XMM2_Da;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  Ship *pSVar16;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  Ship *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  this_00 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1cec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar16 = in_XMM2_Da;
  local_14 = in_XMM2_Da;
  (**(code **)(*(int *)param_1 + 0x14))();
  uVar5 = extraout_CL;
  if (Singleton<>::instance == (TabletOmega *)0x0) {
    this_01 = operator_new(0x5c);
    local_8 = 0;
    Singleton<>::instance = (TabletOmega *)TabletOmega::TabletOmega(this_01);
    local_8 = 0xffffffff;
    uVar5 = extraout_CL_00;
  }
  TabletOmega::render(Singleton<>::instance,(bool)uVar5);
  this_07 = *(SystemManager **)(param_1 + 0x40);
  if (*(int *)(this_07 + 0x20) != 0) {
    piVar6 = (int *)(*(int *)(this_07 + 0x20) + 0x3c);
    iVar8 = 8;
    do {
      iVar7 = *piVar6;
      if (iVar7 != 0) {
        if (*(char *)(iVar7 + 0x3c5) == '\0') {
          if ((*(char *)(iVar7 + 0x3c4) == '\0') && (*(char *)(iVar7 + 0x3bc) == '\0')) {
            in_XMM2_Da = *(Ship **)(iVar7 + 0x3c0);
            if ((float)in_XMM2_Da != -1.0) goto LAB_0040b073;
            *(undefined4 *)(iVar7 + 0xdc) = 0;
          }
          else {
            in_XMM2_Da = (Ship *)(float)*(int *)(*(int *)(iVar7 + 0x254) + 200);
            *(Ship **)(iVar7 + 0xdc) = in_XMM2_Da;
          }
        }
        else {
LAB_0040b073:
          in_XMM2_Da = (Ship *)(float)*(int *)(*(int *)(iVar7 + 0x254) + 0xc0);
          *(Ship **)(iVar7 + 0xdc) = in_XMM2_Da;
        }
      }
      piVar6 = piVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    this_07 = *(SystemManager **)(param_1 + 0x40);
  }
  pSVar10 = param_1 + 0x178;
  param_1 = (Ship *)0x0;
  if ((*(int *)pSVar10 != 0) && (*(int *)(this_00 + 0xd4) == 3)) {
    if (*(int *)(this_00 + 0xf8) != 2) {
      iVar8 = *(int *)(*(int *)pSVar10 + 0x254);
      in_XMM2_Da = (Ship *)(float)*(int *)(iVar8 + 0x15c);
      iVar7 = (int)((((float)in_XMM2_Da - *(float *)(this_00 + 0x108)) / (float)in_XMM2_Da) * 100.0)
      ;
      if (*(int *)(this_00 + 0xf8) == 1) {
        bVar1 = *(int *)(iVar8 + 0x164) <= iVar7;
      }
      else {
        bVar1 = iVar7 < *(int *)(iVar8 + 0x168);
      }
      if (!bVar1) goto LAB_0040b129;
    }
    SystemManager::generatePower(this_07,(float)pSVar16);
  }
LAB_0040b129:
  uVar9 = 0;
  iVar8 = *(int *)(this_07 + 0x3c);
  if (*(int *)(this_07 + 0x40) - iVar8 >> 2 != 0) {
    do {
      ShipModule::runLogic(*(ShipModule **)(iVar8 + uVar9 * 4),(float)this_00,pSVar16);
      if (0.0 < (float)in_XMM2_Da) {
        in_XMM2_Da = (Ship *)((float)in_XMM2_Da + (float)param_1);
        param_1 = in_XMM2_Da;
      }
      uVar9 = uVar9 + 1;
      iVar8 = *(int *)(this_07 + 0x3c);
    } while (uVar9 < (uint)(*(int *)(this_07 + 0x40) - iVar8 >> 2));
  }
  pSVar10 = param_1;
  if ((this_07[0x34] != (SystemManager)0x0) &&
     (pSVar10 = (Ship *)0x43c80000, 400.0 <= (float)param_1)) {
    pSVar10 = param_1;
  }
  if (*(int *)(*(int *)(this_00 + 0x254) + 0x158) != 4) {
    if (this_00[0xd0] == (Ship)0x0) {
      *(undefined4 *)(this_00 + 0xdc) = 0;
    }
    else {
      *(float *)(this_00 + 0xdc) = (float)*(int *)(*(int *)(this_00 + 0x254) + 200);
    }
  }
  fVar12 = 0.0;
  iVar8 = *(int *)(*(int *)(this_00 + 0x40) + 0x20);
  if (iVar8 != 0) {
    iVar7 = *(int *)(iVar8 + 0x3c);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = *(float *)(iVar7 + 0xdc) + 0.0;
    }
    iVar7 = *(int *)(iVar8 + 0x40);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar7 + 0xdc);
    }
    iVar7 = *(int *)(iVar8 + 0x44);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar7 + 0xdc);
    }
    iVar7 = *(int *)(iVar8 + 0x48);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar7 + 0xdc);
    }
    iVar7 = *(int *)(iVar8 + 0x4c);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar7 + 0xdc);
    }
    iVar7 = *(int *)(iVar8 + 0x50);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar7 + 0xdc);
    }
    iVar7 = *(int *)(iVar8 + 0x54);
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar7 + 0xdc);
    }
    iVar8 = *(int *)(iVar8 + 0x58);
    if ((iVar8 != 0) && (*(char *)(iVar8 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar8 + 0xdc);
    }
  }
  fVar12 = *(float *)(this_00 + 0xdc) + (float)pSVar10 + fVar12;
  *(float *)(this_00 + 0xe0) = fVar12;
  if (*(int *)(this_00 + 0xd4) == 2) {
    iVar8 = *(int *)(this_00 + 0xec);
    if (iVar8 == 0) {
      fVar12 = fVar12 * 0.7;
    }
    else if (iVar8 == 1) {
      fVar12 = fVar12 * 0.2;
    }
    else {
      if (iVar8 != 2) goto LAB_0040b2ef;
      fVar12 = fVar12 * 0.9;
    }
    *(float *)(this_00 + 0xe0) = fVar12;
  }
LAB_0040b2ef:
  Ship::runPassiveSensorLogic(this_00,(float)pSVar16);
  this_04 = extraout_ECX;
  if (param_2._0_1_ != '\0') {
    Ship::performSensorScan(this_00,(float)pSVar16);
    this_04 = extraout_ECX_00;
  }
  if ((*(int *)(this_00 + 0xd4) != 1) && (*(int *)(this_00 + 0xd4) != 0)) goto LAB_0040b8ac;
  local_20 = 0;
  local_1c = 0;
  local_8 = 1;
  fVar12 = cocos2d::Vec2::getDistance((Vec2 *)(this_00 + 0x118),(Vec2 *)&local_20);
  local_8 = 0xffffffff;
  if (0.0 < fVar12) {
    *(double *)(this_00 + 0x28) =
         (double)((float)local_14 * *(float *)(this_00 + 0x118)) + *(double *)(this_00 + 0x28);
    *(double *)(this_00 + 0x30) =
         (double)(*(float *)(this_00 + 0x11c) * (float)local_14) + *(double *)(this_00 + 0x30);
  }
  iVar8 = *(int *)(this_00 + 0x1c4);
  iVar7 = *(int *)(this_00 + 0x1c8) - iVar8 >> 5;
  if ((iVar7 != 0) && (*(int *)(iVar7 * 0x20 + -0xc + iVar8) != 0)) {
    pSVar10 = this_00 + 8;
    local_18 = (float)*(double *)(this_00 + 0x28);
    local_14 = (Ship *)(float)*(double *)(this_00 + 0x30);
    if (iVar7 == 0) {
      local_28 = 0xc61c3c00;
      local_24 = 0xc61c3c00;
    }
    else {
      local_24 = *(undefined4 *)(iVar7 * 0x20 + -0x14 + iVar8);
      local_28 = *(undefined4 *)(iVar7 * 0x20 + -0x18 + iVar8);
    }
    local_8 = 3;
    fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_18);
    fVar12 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
    local_8 = 0xffffffff;
    iVar8 = *(int *)(this_00 + 0x1c4);
    iVar7 = *(int *)(this_00 + 0x1c8) - iVar8 >> 5;
    fVar13 = (1.5 - fVar13 * 0.5 * fVar12 * fVar12) * fVar12 * fVar13;
    if (iVar7 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar7 * 0x20 + -0xc + iVar8);
    }
    if (*(int *)(iVar3 + 0x30) == 0) {
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar7 * 0x20 + -0xc + iVar8);
      }
      iVar7 = *(int *)(iVar8 + 0x54);
      if (((iVar7 != 1) && ((iVar7 == 2 || (iVar7 == 0)))) && (fVar13 <= 0.4)) {
        Ship::setSpeed(this_00,(float)pSVar16);
        iVar7 = *(int *)(this_00 + 0x40);
        if (*(int *)(iVar7 + 0x10) != 0) {
          *(undefined1 *)(*(int *)(iVar7 + 0x10) + 0x62) = 0;
          iVar7 = *(int *)(this_00 + 0x40);
        }
        if (*(int *)(iVar7 + 0x18) != 0) {
          *(undefined1 *)(*(int *)(iVar7 + 0x18) + 0x62) = 0;
        }
        pGVar2 = Ship::getFinalWaypointObject(this_00);
        *(GameObject **)(this_00 + 0x16c) = pGVar2;
        if (this_00[0x234] != (Ship)0x0) {
          LogSystem::addLogLine
                    (this_02,*(LogPriority *)(this_00 + 0x224),&DAT_00000001,
                     "Entering %s orbit around %s",
                     (&PTR_s_standard_005e1780)[*(int *)(this_00 + 0xec)]);
        }
        *(undefined4 *)(this_00 + 0xe8) = 1;
        *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this_00 + 0xec);
        *(undefined4 *)(this_00 + 0xf4) = 0x41000000;
        Ship::clearWaypointFlags(this_00);
        *(undefined4 *)(this_00 + 0x1c8) = *(undefined4 *)(this_00 + 0x1c4);
        *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(iVar8 + 0x20);
        *(undefined8 *)(this_00 + 0x30) = *(undefined8 *)(iVar8 + 0x28);
        *(undefined4 *)(this_00 + 0xd4) = 2;
        *(undefined4 *)(this_00 + 0x2c0) = 0;
        *(undefined4 *)(this_00 + 0x2c4) = 0;
        if (0xf < *(uint *)(this_00 + 0x1c)) {
          pSVar10 = *(Ship **)pSVar10;
        }
        debugPrint("GAME","Ship %s is entering orbit of %s",pSVar10);
        this_04 = extraout_ECX_01;
        goto LAB_0040b8ac;
      }
    }
    else {
      if (iVar7 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar7 * 0x20 + -0xc + iVar8);
      }
      if (*(int *)(iVar3 + 0x30) == 1) {
        if ((iVar7 == 0) || (iVar8 = *(int *)(iVar7 * 0x20 + -0xc + iVar8), iVar8 == 0)) {
          pSVar10 = (Ship *)0x0;
        }
        else {
          pSVar10 = (Ship *)(iVar8 + -8);
        }
        iVar8 = *(int *)(*(int *)(pSVar10 + 0x254) + 0x158);
        if ((((iVar8 == 1) || (iVar8 == 2)) || (iVar8 == 3)) &&
           ((fVar12 = 0.4, fVar13 <= 0.4 && (this_00[0x234] != (Ship)0x0)))) {
          Ship::getSpeed(this_00);
          if (fVar12 <= 0.4) {
            *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(pSVar10 + 0x28);
            *(undefined8 *)(this_00 + 0x30) = *(undefined8 *)(pSVar10 + 0x30);
            Ship::setSpeed(this_00,(float)pSVar16);
            iVar8 = *(int *)(this_00 + 0x40);
            iVar7 = *(int *)(iVar8 + 0x10);
            if (iVar7 != 0) {
              *(undefined1 *)(iVar7 + 0x62) = 0;
              iVar8 = *(int *)(this_00 + 0x40);
            }
            if (*(int *)(iVar8 + 0x18) != 0) {
              *(undefined1 *)(*(int *)(iVar8 + 0x18) + 0x62) = 0;
            }
            Ship::dockWith(this_00,pSVar10,SUB41(iVar7,0));
            this_04 = extraout_ECX_02;
            goto LAB_0040b8ac;
          }
          auVar11._0_8_ = (double)fVar13;
          auVar11._8_8_ = 0;
          if (*(double *)(this_00 + 0x138) <= auVar11._0_8_ &&
              auVar11._0_8_ != *(double *)(this_00 + 0x138)) {
            Ship::getSpeed(this_00);
            debugPrint("GAME","Speed too high to dock: %.2fgm",(double)auVar11._0_4_);
            Ship::clearWaypointFlags(this_00);
            *(undefined4 *)(this_00 + 0x1c8) = *(undefined4 *)(this_00 + 0x1c4);
            Ship::cancelAutopilot(this_00);
            LogSystem::addLogLine(this_03,*(LogPriority *)(this_00 + 0x224),&DAT_00000004);
          }
        }
      }
    }
  }
  auVar11 = ZEXT416((uint)(float)*(double *)(this_00 + 0x30));
  pSVar4 = GameData::getStellarObjectWithinDistance();
  this_04 = extraout_ECX_03;
  if (pSVar4 == (StellarObject *)0x0) goto LAB_0040b8ac;
  uVar15 = CONCAT44(pSVar4,0x40b73f);
  Ship::relativeAngleToObject(this_00,(GameObject *)pSVar4);
  this_04 = (LogSystem *)(int)auVar11._0_8_;
  if ((LogSystem *)0x8 < this_04 + 4) goto LAB_0040b8ac;
  iVar8 = *(int *)(pSVar4 + 0x54);
  if ((iVar8 == 0) || (iVar8 == 2)) {
    uVar14 = 0x41c80000;
LAB_0040b77a:
    uVar15 = 0;
    (**(code **)(*(int *)this_00 + 0xc))(this_04,uVar14,0);
  }
  else if (iVar8 == 1) {
    uVar14 = 0x42a00000;
    goto LAB_0040b77a;
  }
  fVar13 = (float)*(double *)(pSVar4 + 0x20);
  fVar12 = (float)*(double *)(pSVar4 + 0x28);
  rand();
  positionFromPoint(fVar13,fVar12);
  pGVar2 = (GameObject *)(this_00 + 8);
  GameObject::setLocation(pGVar2,uVar15);
  Ship::relativeAngleToObject(this_00,(GameObject *)pSVar4);
  Ship::setMotionAngle(this_00,(float)pSVar16);
  rand();
  Ship::getSpeed(this_00);
  Ship::setSpeed(this_00,(float)pSVar16);
  if (0xf < *(uint *)(this_00 + 0x1c)) {
    pGVar2 = *(GameObject **)pGVar2;
  }
  debugPrint("GAME","Ship %s bounced off object %s",pGVar2);
  this_04 = this_05;
  if (this_00[0x234] != (Ship)0x0) {
    LogSystem::addLogLine
              (this_05,*(LogPriority *)(this_00 + 0x224),(char *)0x3,
               "WARNING: Bounced off atmosphere of %s");
    this_04 = extraout_ECX_04;
  }
LAB_0040b8ac:
  if ((*(float *)(this_00 + 0x310) == 0.0) &&
     (*(float *)(this_00 + 0x310) != *(float *)(this_00 + 0x314))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar8 = *(int *)(this_00 + 0x170), iVar8 != 0)) {
    local_30 = (float)*(double *)(this_00 + 0x28);
    local_2c = (float)*(double *)(this_00 + 0x30);
    local_38 = (float)*(double *)(iVar8 + 0x28);
    local_34 = (float)*(double *)(iVar8 + 0x30);
    local_8 = 5;
    fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&local_30);
    fVar12 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
    local_8 = 0xffffffff;
    this_04 = this_06;
    if ((1.5 - fVar13 * 0.5 * fVar12 * fVar12) * fVar12 * fVar13 <= 2.0) {
      iVar8 = *(int *)(this_00 + 0x170);
      *(int *)(this_00 + 0x174) = iVar8;
      *(undefined4 *)(this_00 + 0x1f0) = 0;
      *(undefined4 *)(this_00 + 0x170) = 0;
      if ((this_00[0x234] != (Ship)0x0) &&
         (((iVar8 = *(int *)(iVar8 + 0x60), iVar8 == 1 || (iVar8 == 0)) || (iVar8 == 4)))) {
        LogSystem::addLogLine(this_06,*(LogPriority *)(this_00 + 0x224),&DAT_00000002);
        this_04 = extraout_ECX_05;
      }
    }
  }
  if ((0.0 < *(float *)(this_00 + 0x310)) && (*(int *)(this_00 + 0x174) != 0)) {
    if ((this_00[0x234] != (Ship)0x0) &&
       (((iVar8 = *(int *)(*(int *)(this_00 + 0x174) + 0x60), iVar8 == 1 || (iVar8 == 0)) ||
        (iVar8 == 4)))) {
      LogSystem::addLogLine(this_04,*(LogPriority *)(this_00 + 0x224),&DAT_00000001);
    }
    *(undefined4 *)(this_00 + 0x174) = 0;
  }
  ExceptionList = local_10;
  return false;
}


// public: bool __thiscall GameLogic::safeForTimeCompression(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > &)

bool __thiscall GameLogic::safeForTimeCompression(GameLogic *this,basic_string<> *param_1)

{
  int iVar1;
  int *piVar2;
  Ship *pSVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  PrivateCommsManager *pPVar8;
  NPCShipManager *pNVar9;
  Vec2 *this_00;
  float fVar10;
  int iVar11;
  uint unaff_EDI;
  int *piVar12;
  uint uVar13;
  float fVar14;
  int local_2c;
  float local_28;
  float local_24;
  int local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1d44;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar5 = false;
  bVar4 = false;
  if (*(int *)(g_gameData + 0xd0) != 0) {
    pPVar8 = Singleton<>::getInstance();
    if (*(int *)(pPVar8 + 0x6c) == 0) {
      fVar14 = *(float *)(g_gameData + 0xd0);
      local_14 = fVar14;
      pNVar9 = Singleton<>::getInstance();
      local_24 = 0.0;
      iVar11 = *(int *)(pNVar9 + 8);
      fVar10 = (float)((*(int *)(pNVar9 + 0xc) - iVar11) / 0xc);
      local_1c = iVar11;
      local_18 = fVar10;
      if (fVar10 != 0.0) {
        local_2c = 0;
        do {
          iVar1 = *(int *)(iVar11 + 4 + local_2c);
          if ((iVar1 != 0) && (iVar1 == *(int *)((int)fVar14 + 0x24))) {
            piVar2 = *(int **)(iVar1 + 0xd0);
            iVar11 = local_1c;
            for (piVar12 = *(int **)(iVar1 + 0xcc); local_1c = iVar11, piVar12 != piVar2;
                piVar12 = piVar12 + 1) {
              if ((((*(int *)(*piVar12 + 0x44) != 0) &&
                   (iVar11 = *(int *)(*(int *)(*piVar12 + 0x44) + 0xd0), iVar11 != 0)) &&
                  (bVar6 = std::_Traits_equal<>("Piracy",6,pcVar7,unaff_EDI), bVar6)) &&
                 (((*(char *)(iVar11 + 0x3d) != '\0' && (*(int *)(iVar11 + 0x48) != 0)) &&
                  ((fVar14 = *(float *)(*(int *)(iVar11 + 0x48) + 0x130), fVar14 != 0.0 &&
                   (fVar14 == local_14)))))) {
                debugPrint("DETAIL","Time Compression cancelled: Pirate threatened us");
                std::basic_string<>::assign
                          (param_1,"Time Compression cancelled: pirate threat detected",0x32);
                ExceptionList = local_10;
                return false;
              }
              fVar10 = local_18;
              fVar14 = local_14;
              iVar11 = local_1c;
            }
          }
          local_24 = (float)((int)local_24 + 1);
          local_2c = local_2c + 0xc;
        } while ((uint)local_24 < (uint)fVar10);
      }
      pSVar3 = *(Ship **)(g_gameData + 0xd0);
      if (*(float *)(pSVar3 + 0x54) != -1.0) {
        std::basic_string<>::assign(param_1,"Time Compression cancelled: Jump drive engaged",0x2e);
        debugPrint("DETAIL","Time Compression cancelled: Jump drive engaged");
        ExceptionList = local_10;
        return false;
      }
      if ((*(int *)(pSVar3 + 0x184) != 0) && (*(char *)(*(int *)(pSVar3 + 0x184) + 4) != '\0')) {
        std::basic_string<>::assign(param_1,"Time Compression cancelled: entering hazard",0x2b);
        debugPrint("DETAIL","Time Compression cancelled: Inside hazard");
        ExceptionList = local_10;
        return false;
      }
      if (pSVar3 != ShipData::currentlyBoardedShip) {
        debugPrint("DETAIL","Time Compression cancelled: Boarded a space station or other ship.");
        ExceptionList = local_10;
        return false;
      }
      if (*(int *)(pSVar3 + 0xd4) == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (0xf < *(uint *)(param_1 + 0x14)) {
          param_1 = *(basic_string<> **)param_1;
        }
        *param_1 = (basic_string<>)0x0;
        debugPrint("DETAIL","Time Compression cancelled: Docked or docking.");
        ExceptionList = local_10;
        return false;
      }
      uVar13 = 0;
      iVar11 = *(int *)(pSVar3 + 0x214);
      if (*(int *)(pSVar3 + 0x218) - iVar11 >> 2 != 0) {
        do {
          iVar1 = *(int *)(iVar11 + uVar13 * 4);
          if (((*(int *)(iVar1 + 0xe0) == 0) && (*(float *)(iVar1 + 0x118) == 0.0)) &&
             (iVar1 = *(int *)(iVar1 + 0x130), iVar1 != 0)) {
            if (*(char *)(*(int *)(iVar1 + 0x40) + 0x34) != '\0') {
              bVar6 = false;
              if (*(int *)(iVar1 + 0x254) != 0) {
                bVar6 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 4;
              }
              if ((!bVar6) || (*(Ship **)(iVar1 + 0x39c) == pSVar3)) goto LAB_0040be64;
            }
            local_28 = (float)*(double *)(pSVar3 + 0x28);
            local_24 = (float)*(double *)(pSVar3 + 0x30);
            local_8 = 0;
            this_00 = (Vec2 *)SensorData::getPresumedLocation(*(SensorData **)(iVar11 + uVar13 * 4))
            ;
            local_8 = 1;
            bVar5 = true;
            bVar4 = true;
            fVar14 = cocos2d::Vec2::getDistanceSq(this_00,(Vec2 *)&local_28);
            local_14 = (float)(0x5f3759df - ((uint)fVar14 >> 1));
            if (80.0 <= (1.5 - fVar14 * 0.5 * local_14 * local_14) * local_14 * fVar14)
            goto LAB_0040be64;
            bVar6 = true;
          }
          else {
LAB_0040be64:
            bVar6 = false;
          }
          if (bVar4) {
            bVar4 = false;
          }
          local_8 = 0xffffffff;
          if (bVar5) {
            bVar5 = false;
          }
          if (bVar6) {
            std::basic_string<>::assign
                      (param_1,"Time Compression cancelled: threatening vessel detected nearby",0x3e
                      );
            debugPrint("DETAIL","Time Compression cancelled: can detect non-IFF threat");
            ExceptionList = local_10;
            return false;
          }
          uVar13 = uVar13 + 1;
          iVar11 = *(int *)(pSVar3 + 0x214);
        } while (uVar13 < (uint)(*(int *)(pSVar3 + 0x218) - iVar11 >> 2));
      }
      ExceptionList = local_10;
      return true;
    }
    debugPrint("DETAIL","Time Compression cancelled: Being hailed or hailing");
    std::basic_string<>::assign(param_1,"Time Compression cancelled: communication in process",0x34)
    ;
  }
  ExceptionList = local_10;
  return false;
}


// public: void __thiscall GameLogic::runStateCheckLogic(void)

void __thiscall GameLogic::runStateCheckLogic(GameLogic *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  bool bVar6;
  char *pcVar7;
  FlagManager *pFVar8;
  char *pcVar9;
  uint uVar10;
  LogSystem *this_00;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint unaff_EDI;
  basic_string<> abStack_48 [4];
  undefined4 uStack_44;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1d70;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  piVar1 = *(int **)(g_gameData + 0xa0);
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  for (piVar13 = *(int **)(g_gameData + 0x9c); ExceptionList = ppvVar5, piVar13 != piVar1;
      piVar13 = piVar13 + 1) {
    iVar2 = *piVar13;
    if (*(char *)(iVar2 + 0x18) == '\0') {
      if ((*(char *)(iVar2 + 0x19) == '\0') && (*(int *)(g_gameData + 0xd8) != 0)) {
        std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)(iVar2 + 0xa8));
        local_8 = 1;
        pFVar8 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        bVar6 = FlagManager::flagSet(pFVar8);
        if (bVar6) {
          *(undefined2 *)(iVar2 + 0x18) = 0x101;
          debugPrint("WORLD","State %s is now enabled.");
          bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI);
          if (!bVar6) {
            uStack_44 = 0x40c149;
            LogSystem::addLogLine
                      (this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000004);
          }
          bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI);
          if ((!bVar6) && (*(char *)(iVar2 + 0x20) != '\0')) {
            uVar12 = 0;
            piVar11 = *(int **)(*(int *)(g_gameData + 0xd8) + 0xcc);
            piVar3 = *(int **)(*(int *)(g_gameData + 0xd8) + 0xd0);
            uVar10 = (uint)((int)piVar3 + (3 - (int)piVar11)) >> 2;
            if (piVar3 < piVar11) {
              uVar10 = 0;
            }
            if (uVar10 != 0) {
              do {
                bVar6 = false;
                iVar4 = *(int *)(*piVar11 + 0x254);
                if (iVar4 != 0) {
                  bVar6 = *(int *)(iVar4 + 0x158) == 0;
                }
                if ((((bVar6) && (iVar4 = *(int *)(*piVar11 + 0x44), iVar4 != 0)) &&
                    (*(int *)(iVar4 + 0x70) == 8)) &&
                   (bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI), bVar6)) {
                  std::basic_string<>::operator=
                            ((basic_string<> *)(iVar4 + 0x14),(basic_string<> *)(iVar2 + 0x24));
                }
                uVar12 = uVar12 + 1;
                piVar11 = piVar11 + 1;
              } while (uVar12 != uVar10);
            }
          }
        }
      }
    }
    else {
      std::basic_string<>::basic_string<>(abStack_48,(basic_string<> *)(iVar2 + 0xc0));
      local_8 = 0;
      pFVar8 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      bVar6 = FlagManager::flagSet(pFVar8);
      if (bVar6) {
        *(undefined1 *)(iVar2 + 0x18) = 0;
        debugPrint("WORLD","State %s is now disabled.");
        bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI);
        if ((!bVar6) && (*(char *)(iVar2 + 0x20) != '\0')) {
          local_18 = 0;
          piVar11 = *(int **)(*(int *)(g_gameData + 0xd8) + 0xcc);
          piVar3 = *(int **)(*(int *)(g_gameData + 0xd8) + 0xd0);
          uVar10 = (uint)((int)piVar3 + (3 - (int)piVar11)) >> 2;
          if (piVar3 < piVar11) {
            uVar10 = 0;
          }
          if (uVar10 != 0) {
            do {
              bVar6 = false;
              iVar4 = *(int *)(*piVar11 + 0x254);
              if (iVar4 != 0) {
                bVar6 = *(int *)(iVar4 + 0x158) == 0;
              }
              if (((bVar6) && (iVar4 = *(int *)(*piVar11 + 0x44), iVar4 != 0)) &&
                 (*(int *)(iVar4 + 0x70) == 8)) {
                pcVar9 = (char *)(iVar2 + 0x24);
                if (0xf < *(uint *)(iVar2 + 0x38)) {
                  pcVar9 = *(char **)(iVar2 + 0x24);
                }
                bVar6 = std::_Traits_equal<>(pcVar9,*(uint *)(iVar2 + 0x34),pcVar7,unaff_EDI);
                if (bVar6) {
                  std::basic_string<>::assign((basic_string<> *)(iVar4 + 0x14),"",0);
                }
              }
              piVar11 = piVar11 + 1;
              local_18 = local_18 + 1;
            } while (local_18 != uVar10);
          }
        }
      }
    }
    ppvVar5 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::runTimeLogic(float)

void __thiscall GameLogic::runTimeLogic(GameLogic *this,float param_1)

{
  int iVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  FictionData *pFVar4;
  TradeEngine *pTVar5;
  int iVar6;
  int iVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  float in_XMM1_Da;
  float fVar10;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1dbc;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (this[0x62] != (GameLogic)0x0) {
    fVar10 = in_XMM1_Da * 24.0 + *(float *)(this + 0x17c);
    *(float *)(this + 0x17c) = fVar10;
    if (60.0 <= fVar10) {
      *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
      *(float *)(this + 0x17c) = fVar10 - 60.0;
      if (0x3b < *(int *)(this + 0x180)) {
        *(int *)(this + 0x184) = *(int *)(this + 0x184) + 1;
        iVar6 = *(int *)(this + 0x180) + -0x3c;
        *(int *)(this + 0x180) = iVar6;
        if (0x17 < *(int *)(this + 0x184)) {
          *(int *)(this + 0x188) = *(int *)(this + 0x188) + 1;
          iVar1 = *(int *)(this + 0x184) + -0x18;
          iVar2 = *(int *)(this + 0x18c);
          iVar7 = *(int *)(this + 0x188);
          *(int *)(this + 0x184) = iVar1;
          if (*(int *)(&DAT_005e00e4 + iVar2 * 4) < iVar7) {
            iVar2 = iVar2 + 1;
            *(undefined4 *)(this + 0x188) = 1;
            *(int *)(this + 0x18c) = iVar2;
            iVar7 = 1;
            if (0xb < iVar2) {
              *(int *)(this + 400) = *(int *)(this + 400) + 1;
              iVar2 = 0;
              *(undefined4 *)(this + 0x18c) = 0;
            }
          }
          strUsingArgs((char *)local_2c,"%02d-%02d-%02d %d:%d",*(undefined4 *)(this + 400),iVar2,
                       iVar7,iVar1,iVar6,local_14);
          local_8 = 0;
          ppppuVar3 = local_2c;
          if (0xf < local_18) {
            ppppuVar3 = (undefined4 ****)local_2c[0];
          }
          debugPrint("GAME","It\'s %%s",ppppuVar3);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            ppppuVar3 = (undefined4 ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              ppppuVar3 = (undefined4 ****)local_2c[0][-1];
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(ppppuVar3,pnVar8);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
          pFVar4 = Singleton<>::getInstance();
          uVar9 = 0;
          if (*(int *)(pFVar4 + 4) - *(int *)pFVar4 >> 2 != 0) {
            do {
              Faction::runDayEndLogic(*(Faction **)(*(int *)pFVar4 + uVar9 * 4));
              uVar9 = uVar9 + 1;
            } while (uVar9 < (uint)(*(int *)(pFVar4 + 4) - *(int *)pFVar4 >> 2));
          }
          if (Singleton<>::instance == (TradeEngine *)0x0) {
            pTVar5 = operator_new(300);
            local_8 = 1;
            Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar5);
            local_8 = 0xffffffff;
          }
          TradeEngine::regenerateAllShipsForSale(Singleton<>::instance);
          if (Singleton<>::instance == (TradeEngine *)0x0) {
            pTVar5 = operator_new(300);
            local_8 = 2;
            Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(pTVar5);
            local_8 = 0xffffffff;
          }
          uVar9 = 0;
          iVar6 = *(int *)(g_gameData + 0x3c);
          if (*(int *)(g_gameData + 0x40) - iVar6 >> 2 != 0) {
            do {
              Sector::clearBounties(*(Sector **)(iVar6 + uVar9 * 4));
              Sector::setNewBounties(*(Sector **)(*(int *)(g_gameData + 0x3c) + uVar9 * 4));
              uVar9 = uVar9 + 1;
              iVar6 = *(int *)(g_gameData + 0x3c);
            } while (uVar9 < (uint)(*(int *)(g_gameData + 0x40) - iVar6 >> 2));
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::runServerLogic(float)

void __thiscall GameLogic::runServerLogic(GameLogic *this,float param_1)

{
  Scenario SVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  Ship *pSVar7;
  Scenario *this_00;
  GameLogic *pGVar8;
  undefined4 *puVar9;
  char cVar10;
  PrivateCommsManager *this_01;
  NetworkServer *pNVar11;
  NPCShipManager *this_02;
  AuthorityManager *pAVar12;
  int *piVar13;
  JunkManager *pJVar14;
  undefined4 *puVar15;
  BountyManager *pBVar16;
  FlagManager *this_03;
  EmailManager *this_04;
  TradeEngine *pTVar17;
  int iVar18;
  AnimationFrames **ppAVar19;
  Ship *pSVar20;
  PowerManager *pPVar21;
  GameData *pGVar22;
  GameData *extraout_ECX;
  int iVar23;
  GameLogic *pGVar24;
  GameLogic *extraout_ECX_00;
  GameLogic *extraout_ECX_01;
  GameLogic *extraout_ECX_02;
  GameLogic *extraout_ECX_03;
  GameLogic *extraout_ECX_04;
  nothrow_t *pnVar25;
  int iVar26;
  Contract *pCVar27;
  AnimationFrames **ppAVar28;
  Ship *pSVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  AnimationFrames **ppAVar33;
  float unaff_EDI;
  undefined4 *puVar34;
  bool bVar35;
  float fVar36;
  float in_XMM1_Da;
  CommsData *pCVar37;
  void *local_38;
  AnimationFrames **ppAStack_34;
  AnimationFrames **local_30;
  Ship *local_2c;
  Contract *local_28;
  Contract *local_24;
  float local_20;
  GameLogic *local_1c;
  float local_18;
  GameLogic local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar24 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1e16;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = g_gameLogic;
  local_18 = in_XMM1_Da;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0065e448) &&
     (__Init_thread_header(&DAT_0065e448), DAT_0065e448 == -1)) {
    local_8 = 0;
    uVar30 = 0;
    iVar26 = *(int *)(g_gameData + 0xd8);
    iVar23 = *(int *)(iVar26 + 0xcc);
    if (*(int *)(iVar26 + 0xd0) - iVar23 >> 2 != 0) {
      do {
        pSVar29 = *(Ship **)(iVar23 + uVar30 * 4);
        if (*(int *)(pSVar29 + 100) == 1) {
          Ship::isDisabled(pSVar29,false);
        }
        uVar30 = uVar30 + 1;
        iVar23 = *(int *)(iVar26 + 0xcc);
      } while (uVar30 < (uint)(*(int *)(iVar26 + 0xd0) - iVar23 >> 2));
    }
    local_8 = 0xffffffff;
    __Init_thread_footer(&DAT_0065e448);
  }
  iVar26 = *(int *)(g_gameData + 0xd0);
  if (iVar26 != 0) {
    if ((*(int *)(iVar26 + 0xd4) == 3) && (*(int *)(iVar26 + 0xf8) == 2)) {
      bVar35 = true;
    }
    else {
      bVar35 = false;
    }
    if (!bVar35) {
      Singleton<>::getInstance();
      this_01 = Singleton<>::getInstance();
      PrivateCommsManager::runLogic(this_01,unaff_EDI);
      recheckStoryShips(pGVar24);
      addSyntheticInstances(pGVar24);
    }
  }
  if (Singleton<Pather>::instance == (Pather *)0x0) {
    local_2c = operator_new(0x98);
    local_8 = 1;
    Singleton<Pather>::instance = (Pather *)Pather::Pather((Pather *)local_2c);
    local_8 = 0xffffffff;
  }
  Pather::runLogic(Singleton<Pather>::instance,unaff_EDI);
  pGVar8 = g_gameLogic;
  pGVar24[0x62] = (GameLogic)0x0;
  if (pGVar8[0x72] == (GameLogic)0x0) {
    if (pGVar8[0x70] == (GameLogic)0x0) goto LAB_0040c675;
    pNVar11 = Singleton<>::getInstance();
    bVar35 = *(int *)(pNVar11 + 0x1c) == 3;
  }
  else {
    iVar26 = *(int *)(g_gameData + 0xd0);
    if (iVar26 == 0) goto LAB_0040c675;
    if ((*(int *)(iVar26 + 0xd4) == 3) && (*(int *)(iVar26 + 0xf8) == 2)) {
      bVar35 = true;
    }
    else {
      bVar35 = false;
    }
    if ((bVar35) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 0)) goto LAB_0040c675;
    bVar35 = *(int *)pGVar8 == 1;
  }
  if (bVar35) {
    pGVar24[0x62] = (GameLogic)0x1;
  }
LAB_0040c675:
  local_11 = pGVar24[0x62];
  this_02 = Singleton<>::getInstance();
  if (*this_02 != (NPCShipManager)0x0) {
    debugPrint("GAME","** Removing all ships from all sectors.");
    piVar13 = *(int **)(this_02 + 0xc);
    for (piVar31 = *(int **)(this_02 + 8); piVar31 != piVar13; piVar31 = piVar31 + 3) {
      local_38 = (void *)*piVar31;
      ppAStack_34 = (AnimationFrames **)piVar31[1];
      local_30 = (AnimationFrames **)piVar31[2];
      NPCShipManager::removeAllShipsInSector(this_02,(int)local_38);
    }
    *this_02 = (NPCShipManager)0x0;
  }
  if (local_11 != (GameLogic)0x0) {
    iVar26 = *(int *)(this_02 + 8);
    uVar30 = 0;
    iVar23 = *(int *)(this_02 + 0xc) - iVar26 >> 0x1f;
    if ((*(int *)(this_02 + 0xc) - iVar26) / 0xc + iVar23 != iVar23) {
      local_20 = 0.0;
      do {
        if (*(int *)(iVar26 + 4 + (int)local_20) == *(int *)(g_gameData + 0xd8)) {
          NPCShipManager::runSectorLogic(this_02,uVar30);
        }
        local_20 = (float)((int)local_20 + 0xc);
        iVar26 = *(int *)(this_02 + 8);
        uVar30 = uVar30 + 1;
      } while (uVar30 < (uint)((*(int *)(this_02 + 0xc) - iVar26) / 0xc));
    }
  }
  pGVar24 = local_1c;
  if (local_1c[0x62] != (GameLogic)0x0) {
    pAVar12 = Singleton<>::getInstance();
    puVar15 = *(undefined4 **)pAVar12;
    puVar34 = (undefined4 *)*puVar15;
    while (puVar34 != puVar15) {
      fVar36 = (float)puVar34[10];
      puVar34[10] = fVar36 - local_18;
      if (fVar36 - local_18 <= 0.0) {
        piVar13 = puVar34 + 4;
        if (0xf < (uint)puVar34[9]) {
          piVar13 = (int *)*piVar13;
        }
        debugPrint("WORLD","Vessel \'%s\' scanning timeout has happened.",piVar13);
        std::_Tree<>::erase((_Tree<> *)pAVar12,&local_2c,puVar34);
        break;
      }
      puVar2 = (undefined4 *)puVar34[2];
      if (*(char *)((int)puVar2 + 0xd) == '\0') {
        cVar10 = *(char *)((int)*puVar2 + 0xd);
        puVar34 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
        while (cVar10 == '\0') {
          cVar10 = *(char *)((int)*puVar2 + 0xd);
          puVar34 = puVar2;
          puVar2 = (undefined4 *)*puVar2;
        }
      }
      else {
        cVar10 = *(char *)((int)puVar34[1] + 0xd);
        puVar9 = (undefined4 *)puVar34[1];
        puVar2 = puVar34;
        while ((puVar34 = puVar9, cVar10 == '\0' && (puVar2 == (undefined4 *)puVar34[2]))) {
          cVar10 = *(char *)((int)puVar34[1] + 0xd);
          puVar9 = (undefined4 *)puVar34[1];
          puVar2 = puVar34;
        }
      }
    }
    pJVar14 = Singleton<>::getInstance();
    pGVar22 = g_gameData;
    if ((*(int *)(g_gameData + 0xcc) != 0) &&
       (*(char *)(*(int *)(g_gameData + 0xcc) + 0x375) == '\0')) {
      pGVar22 = (GameData *)0x0;
      iVar26 = *(int *)pJVar14;
      if (*(int *)(pJVar14 + 4) - iVar26 >> 2 != 0) {
        do {
          iVar23 = *(int *)(iVar26 + (int)pGVar22 * 4);
          if ((0.0 < *(float *)(iVar23 + 0x40)) &&
             (fVar36 = *(float *)(iVar23 + 0x40) - local_18, *(float *)(iVar23 + 0x40) = fVar36,
             fVar36 < 0.0)) {
            *(undefined4 *)(iVar23 + 0x40) = 0;
          }
          pGVar22 = pGVar22 + 1;
        } while (pGVar22 < (GameLogic *)(*(int *)(pJVar14 + 4) - iVar26 >> 2));
      }
    }
    runStateCheckLogic((GameLogic *)pGVar22);
    *(float *)(pGVar24 + 0x68) = *(float *)(pGVar24 + 0x68) + local_18;
  }
  runTimeLogic(pGVar24,unaff_EDI);
  if ((pGVar24[0x62] != (GameLogic)0x0) && (g_gameLogic[0x72] != (GameLogic)0x0)) {
    if (Singleton<>::instance == (ContractManager *)0x0) {
      Singleton<>::instance = operator_new(1);
    }
    uVar30 = 0;
    uVar32 = *(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2;
    if (uVar32 != 0) {
      do {
        pCVar27 = *(Contract **)(*(int *)(g_gameData + 0x13c) + uVar30 * 4);
        local_24 = pCVar27;
        if ((0 < *(int *)(*(int *)(pCVar27 + 0x54) + 0x44)) &&
           ((*(float *)(pCVar27 + 0x18) == -1.0 ||
            ((int)(*(float *)(pCVar27 + 0x1c) -
                  ((float)(*(int *)(g_gameLogic + 0x184) +
                          ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) *
                           0x1f + *(int *)(g_gameLogic + 0x188)) * 0x18) -
                  *(float *)(pCVar27 + 0x18))) < 1)))) {
          local_28 = pCVar27;
          Contract::performContractFailure(pCVar27);
          pvVar3 = *(void **)(g_gameData + 0x140);
          puVar15 = (undefined4 *)std::remove<>(*(undefined4 *)(g_gameData + 0x13c),pvVar3);
          pvVar4 = (void *)*puVar15;
          pGVar22 = extraout_ECX;
          if (pvVar4 != pvVar3) {
            iVar26 = *(int *)(g_gameData + 0x140);
            memmove(pvVar4,pvVar3,iVar26 - (int)pvVar3);
            pGVar22 = g_gameData;
            *(int *)(g_gameData + 0x140) = (iVar26 - (int)pvVar3) + (int)pvVar4;
            pCVar27 = local_24;
          }
          pGVar24 = local_1c;
          if (pCVar27 != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_(pCVar27,(uint)pGVar22);
            pGVar24 = local_1c;
          }
          break;
        }
        uVar30 = uVar30 + 1;
        pGVar24 = local_1c;
      } while (uVar30 < uVar32);
    }
    pBVar16 = Singleton<>::instance;
    if (Singleton<>::instance == (BountyManager *)0x0) {
      pBVar16 = operator_new(0xc);
      Singleton<>::instance = pBVar16;
      *(uint *)pBVar16 = 0;
      *(uint *)(pBVar16 + 4) = 0;
      *(uint *)(pBVar16 + 8) = 0;
    }
    piVar13 = *(int **)pBVar16;
    uVar30 = 0;
    uVar32 = (uint)((int)*(int **)(pBVar16 + 4) + (3 - (int)piVar13)) >> 2;
    if (*(int **)(pBVar16 + 4) < piVar13) {
      uVar32 = 0;
    }
    if (uVar32 != 0) {
      do {
        iVar26 = *piVar13;
        if ((*(float *)(iVar26 + 8) != -1.0) &&
           (fVar36 = *(float *)(iVar26 + 8) - local_18, *(float *)(iVar26 + 8) = fVar36,
           fVar36 <= 0.0)) {
          *(undefined1 **)(iVar26 + 8) = &DAT_bf800000;
        }
        uVar30 = uVar30 + 1;
        piVar13 = piVar13 + 1;
      } while (uVar30 != uVar32);
    }
    this_03 = Singleton<>::getInstance();
    FlagManager::runLogic(this_03,unaff_EDI);
  }
  fVar36 = *(float *)(pGVar24 + 0x1c8) + local_18;
  uVar30 = (uint)local_20 >> 8;
  local_20 = (float)((uint)local_20 & 0xffffff00);
  *(float *)(pGVar24 + 0x1c8) = fVar36;
  if (0.2 <= fVar36) {
    local_20 = (float)CONCAT31((int3)uVar30,1);
    *(float *)(pGVar24 + 0x1c8) = fVar36 - 0.2;
  }
  if ((((pGVar24[0x62] != (GameLogic)0x0) && (g_gameLogic[0x72] != (GameLogic)0x0)) &&
      (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2)) &&
     (*(char *)(*(int *)(g_gameData + 0xcc) + 0xb8) == '\0')) {
    pCVar37 = *(CommsData **)(g_gameData + 300);
    fVar36 = local_20;
    this_04 = Singleton<>::getInstance();
    EmailManager::runLogic(this_04,pCVar37,fVar36,SUB41(unaff_EDI,0));
    if (*(ComputerSystem **)(pGVar24 + 0xc) != (ComputerSystem *)0x0) {
      ComputerSystem::runArticleLogic(*(ComputerSystem **)(pGVar24 + 0xc),unaff_EDI);
    }
    pTVar17 = Singleton<>::getInstance();
    uVar30 = 0;
    iVar26 = *(int *)pTVar17;
    if (*(int *)(pTVar17 + 4) - iVar26 >> 2 != 0) {
      do {
        iVar26 = *(int *)(iVar26 + uVar30 * 4);
        uVar32 = 0;
        piVar13 = *(int **)(iVar26 + 0xa0);
        if (*(int *)(iVar26 + 0xa4) - (int)piVar13 >> 2 != 0) {
          do {
            iVar23 = *piVar13;
            if ((0.0 < *(float *)(iVar23 + 0xa8)) &&
               (fVar36 = *(float *)(iVar23 + 0xa8) - local_18, *(float *)(iVar23 + 0xa8) = fVar36,
               fVar36 < 0.0)) {
              *(undefined4 *)(iVar23 + 0xa8) = 0;
            }
            uVar32 = uVar32 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar32 < (uint)(*(int *)(iVar26 + 0xa4) - *(int *)(iVar26 + 0xa0) >> 2));
        }
        uVar32 = 0;
        iVar23 = *(int *)(iVar26 + 0x70);
        if (*(int *)(iVar26 + 0x74) - iVar23 >> 2 != 0) {
          do {
            iVar23 = **(int **)(iVar23 + uVar32 * 4);
            if (iVar23 != 0) {
              iVar5 = *(int *)(iVar23 + 0x24);
              iVar6 = *(int *)(iVar23 + 0x20);
              if (iVar5 != iVar6) {
                fVar36 = local_18 + *(float *)(iVar23 + 0x28);
                *(float *)(iVar23 + 0x28) = fVar36;
                if ((float)*(int *)(iVar23 + 0x18) <= fVar36) {
                  *(float *)(iVar23 + 0x28) = fVar36 - (float)*(int *)(iVar23 + 0x18);
                  if (iVar5 < iVar6) {
                    *(int *)(iVar23 + 0x24) = iVar5 + 1;
                    if (iVar6 < iVar5 + 1) {
                      *(int *)(iVar23 + 0x24) = iVar6;
                    }
                  }
                  else if (iVar6 < iVar5) {
                    iVar18 = iVar5 + -1;
                    if (iVar5 + -1 < iVar6) {
                      iVar18 = iVar6;
                    }
                    *(int *)(iVar23 + 0x24) = iVar18;
                  }
                }
              }
            }
            uVar32 = uVar32 + 1;
            iVar23 = *(int *)(iVar26 + 0x70);
          } while (uVar32 < (uint)(*(int *)(iVar26 + 0x74) - iVar23 >> 2));
        }
        uVar30 = uVar30 + 1;
        iVar26 = *(int *)pTVar17;
      } while (uVar30 < (uint)(*(int *)(pTVar17 + 4) - iVar26 >> 2));
    }
  }
  ppAVar28 = (AnimationFrames **)0x0;
  ppAVar33 = (AnimationFrames **)0x0;
  local_24 = (void *)0x0;
  local_38 = (void *)0x0;
  ppAStack_34 = (AnimationFrames **)0x0;
  local_28 = (Contract *)0x0;
  local_30 = (AnimationFrames **)0x0;
  local_8 = 2;
  uVar30 = 0;
  pGVar24 = (GameLogic *)(*(int *)(g_gameData + 0xd8) + 0x9c);
  if (*(int *)(*(int *)(g_gameData + 0xd8) + 0xa0) - *(int *)pGVar24 >> 2 != 0) {
    do {
      cVar10 = (**(code **)**(undefined4 **)(uVar30 * 4 + *(int *)pGVar24))(local_18);
      if (cVar10 != '\0') {
        ppAVar19 = (AnimationFrames **)(*(int *)(*(int *)(g_gameData + 0xd8) + 0x9c) + uVar30 * 4);
        if (ppAVar28 == ppAVar33) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)&local_38,ppAVar33,ppAVar19);
          ppAVar28 = local_30;
          ppAVar33 = ppAStack_34;
        }
        else {
          *ppAVar33 = *ppAVar19;
          ppAStack_34 = ppAVar33 + 1;
          ppAVar33 = ppAStack_34;
        }
      }
      uVar30 = uVar30 + 1;
      pGVar24 = (GameLogic *)(*(int *)(g_gameData + 0xd8) + 0x9c);
    } while (uVar30 < (uint)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xa0) - *(int *)pGVar24 >> 2));
    local_24 = local_38;
    local_28 = (Contract *)ppAVar28;
  }
  uVar32 = 0;
  uVar30 = (int)ppAVar33 - (int)local_24 >> 2;
  local_38 = local_24;
  if (uVar30 != 0) {
    do {
      removeSyntheticObject(pGVar24,*(SyntheticObject **)((int)local_24 + uVar32 * 4));
      uVar32 = uVar32 + 1;
      pGVar24 = extraout_ECX_00;
    } while (uVar32 < uVar30);
  }
  iVar26 = *(int *)(g_gameData + 0xd8);
  if (iVar26 != 0) {
    puVar34 = *(undefined4 **)(iVar26 + 0xd0);
    for (puVar15 = *(undefined4 **)(iVar26 + 0xcc); puVar15 != puVar34; puVar15 = puVar15 + 1) {
      pSVar29 = (Ship *)*puVar15;
      iVar26 = *(int *)(*(int *)(pSVar29 + 0x254) + 0x158);
      local_2c = pSVar29;
      if (iVar26 == 1) {
        (**(code **)(*(int *)pSVar29 + 0x14))(local_18);
        pGVar24 = extraout_ECX_01;
      }
      else if ((iVar26 != 2) && (iVar26 != 3)) {
        if (local_1c[0x62] == (GameLogic)0x0) {
          if (pSVar29[0x234] != (Ship)0x0) goto LAB_0040cd4c;
        }
        else {
          SystemManager::runAttritionLogic(*(SystemManager **)(pSVar29 + 0x40),unaff_EDI);
          pGVar24 = extraout_ECX_02;
LAB_0040cd4c:
          runShipLogic(pGVar24,pSVar29,local_20,SUB41(unaff_EDI,0));
          if (*(ShipBehaviour **)(pSVar29 + 0x44) != (ShipBehaviour *)0x0) {
            ShipBehaviour::runLogic(*(ShipBehaviour **)(pSVar29 + 0x44),unaff_EDI);
          }
        }
        if (local_1c[0x11e] != (GameLogic)0x0) {
          local_1c[0x11e] = (GameLogic)0x0;
          break;
        }
        cVar10 = (**(code **)(*(int *)pSVar29 + 0x20))();
        pGVar24 = extraout_ECX_03;
        if (cVar10 != '\0') {
          pGVar24 = local_1c + 0x10;
          ppAVar28 = *(AnimationFrames ***)(local_1c + 0x14);
          if (*(AnimationFrames ***)(local_1c + 0x18) == ppAVar28) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)pGVar24,ppAVar28,(AnimationFrames **)&local_2c);
            pGVar24 = extraout_ECX_04;
          }
          else {
            *ppAVar28 = (AnimationFrames *)pSVar29;
            *(int *)(local_1c + 0x14) = *(int *)(local_1c + 0x14) + 4;
          }
        }
      }
    }
    puVar15 = *(undefined4 **)(local_1c + 0x14);
    puVar34 = *(undefined4 **)(local_1c + 0x10);
    if ((int)puVar15 - (int)puVar34 >> 2 != 0) {
      pSVar29 = (Ship *)0x0;
      local_2c = (Ship *)((uint)((int)puVar15 + (3 - (int)puVar34)) >> 2);
      if (puVar15 < puVar34) {
        local_2c = (Ship *)0x0;
      }
      if (local_2c != (Ship *)0x0) {
        do {
          pSVar7 = (Ship *)*puVar34;
          pSVar20 = pSVar7 + 8;
          if (0xf < *(uint *)(pSVar7 + 0x1c)) {
            pSVar20 = *(Ship **)pSVar20;
          }
          debugPrint("WORLD","Vessel destroyed and needs to be removed: %s",pSVar20);
          pGVar24 = *(GameLogic **)(pSVar7 + 0x254);
          bVar35 = false;
          if (pGVar24 != (GameLogic *)0x0) {
            bVar35 = *(int *)(pGVar24 + 0x158) == 0;
          }
          entirelyRemoveShip(pGVar24,pSVar7,bVar35);
          pSVar29 = pSVar29 + 1;
          puVar34 = puVar34 + 1;
        } while (pSVar29 != local_2c);
      }
      *(undefined4 *)(local_1c + 0x14) = *(undefined4 *)(local_1c + 0x10);
    }
  }
  this_00 = *(Scenario **)(g_gameData + 0xcc);
  if (((this_00 != (Scenario *)0x0) &&
      (SVar1 = this_00[900], Scenario::checkCompletionStates(this_00), SVar1 != (Scenario)0x0)) &&
     ((*(Scenario **)(g_gameData + 0xcc))[900] == (Scenario)0x0)) {
    Scenario::messageScenarioState(*(Scenario **)(g_gameData + 0xcc));
  }
  pPVar21 = Singleton<>::instance;
  if (Singleton<>::instance == (PowerManager *)0x0) {
    pPVar21 = operator_new(4);
    Singleton<>::instance = pPVar21;
    *(int *)pPVar21 = -1;
    local_2c = (Ship *)pPVar21;
  }
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar26 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e8), iVar26 != *(int *)pPVar21)) {
    *(int *)pPVar21 = iVar26;
  }
  if (local_24 != (void *)0x0) {
    pnVar25 = (nothrow_t *)((int)local_28 - (int)local_24 & 0xfffffffc);
    pCVar27 = local_24;
    if ((nothrow_t *)0xfff < pnVar25) {
      pCVar27 = *(Contract **)((int)local_24 + -4);
      pnVar25 = pnVar25 + 0x23;
      if (0x1f < (uint)((int)local_24 + (-4 - (int)pCVar27))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar27,pnVar25);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::runClientLogic(float)

void __thiscall GameLogic::runClientLogic(GameLogic *this,float param_1)

{
  GameLogic *pGVar1;
  bool bVar2;
  SoundEngine *this_00;
  int iVar3;
  int iVar4;
  TabletManager *this_01;
  int iVar5;
  uint uVar6;
  uint unaff_ESI;
  char *unaff_EDI;
  float fVar7;
  double dVar8;
  double dVar9;
  float in_XMM1_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  uint local_1c;
  double local_18;
  
  pGVar1 = g_gameLogic;
  fVar7 = 0.0;
  if ((0.0 < *(float *)(g_gameLogic + 0x124)) &&
     (fVar11 = *(float *)(g_gameLogic + 0x124) - in_XMM1_Da,
     *(float *)(g_gameLogic + 0x124) = fVar11, fVar11 <= 0.0)) {
    *(undefined1 **)(pGVar1 + 0x124) = &DAT_bf800000;
  }
  this_00 = Singleton<>::getInstance();
  SoundEngine::runLogic(this_00,(float)unaff_EDI);
  iVar5 = *(int *)(g_gameData + 0xd8);
  if (iVar5 != 0) {
    local_1c = 0;
    if (*(int *)(iVar5 + 0xd0) - *(int *)(iVar5 + 0xcc) >> 2 != 0) {
      do {
        dVar8 = 0.0;
        local_18 = 101.32;
        dVar9 = 101.32;
        iVar5 = *(int *)(*(int *)(iVar5 + 0xcc) + local_1c * 4);
        if (*(char *)(iVar5 + 0x235) != '\0') {
          fVar7 = *(float *)(iVar5 + 0x27c) - in_XMM1_Da;
          *(float *)(iVar5 + 0x27c) = fVar7;
          if (fVar7 <= 0.0) {
            *(undefined4 *)(iVar5 + 0x27c) = 0x3e800000;
            if (((*(int *)(iVar5 + 0x174) != 0) &&
                (bVar2 = std::_Traits_equal<>("",0,unaff_EDI,unaff_ESI), !bVar2)) ||
               ((*(int *)(iVar5 + 0xd4) == 3 &&
                (((*(int *)(iVar5 + 0xf8) == 2 && (*(int *)(iVar5 + 0x178) != 0)) &&
                 (*(int *)(*(int *)(*(int *)(iVar5 + 0x178) + 0x254) + 0x158) == 1)))))) {
              iVar3 = rand();
              dVar8 = (double)(((float)iVar3 / 32767.0) * 0.2 - 0.1) + 101.32;
              dVar9 = local_18;
            }
            *(double *)(iVar5 + 0x288) = dVar8;
            if (*(char *)(iVar5 + 0x281) != '\0') {
              iVar3 = rand();
              dVar9 = (double)(((float)iVar3 / 32767.0) * 0.2 - 0.1) + 101.32;
            }
            *(double *)(iVar5 + 0x298) = dVar9;
            iVar3 = rand();
            *(double *)(iVar5 + 0x290) = (double)(((float)iVar3 / 32767.0) * 0.2 - 0.1) + 101.32;
          }
          fVar7 = *(float *)(iVar5 + 0x2a0) - in_XMM1_Da;
          *(float *)(iVar5 + 0x2a0) = fVar7;
          if (fVar7 <= 0.0) {
            iVar3 = rand();
            *(float *)(iVar5 + 0x2a0) = (float)(iVar3 % 3 + 4);
            iVar3 = rand();
            fVar7 = (((float)iVar3 / 32767.0) * 0.02 - 0.01) + 22.0;
            *(float *)(iVar5 + 0x2a4) = fVar7;
          }
        }
        if ((*(char *)(iVar5 + 0x234) != '\0') && (iVar5 = *(int *)(iVar5 + 0x40), iVar5 != 0)) {
          uVar6 = 0;
          iVar3 = *(int *)(iVar5 + 0x3c);
          if (*(int *)(iVar5 + 0x40) - iVar3 >> 2 != 0) {
            do {
              iVar3 = *(int *)(iVar3 + uVar6 * 4);
              if (*(char *)(iVar3 + 99) == '\0') {
                fVar10 = 0.0;
                fVar11 = fVar7;
              }
              else if (*(char *)(iVar3 + 0x62) == '\0') {
                iVar4 = *(int *)(*(int *)(iVar3 + 8) + 0xd4);
                ComponentInterfaceInstance::getEmissionsModifier
                          (*(ComponentInterfaceInstance **)(iVar3 + 0xc));
                fVar11 = (float)iVar4;
                fVar10 = fVar7 * fVar11 + fVar11;
              }
              else {
                iVar4 = *(int *)(*(int *)(iVar3 + 8) + 0xcc);
                fVar10 = (float)*(int *)(iVar3 + 100) / 100.0;
                fVar7 = fVar10;
                ComponentInterfaceInstance::getEmissionsModifier
                          (*(ComponentInterfaceInstance **)(iVar3 + 0xc));
                fVar11 = (float)iVar4;
                fVar10 = (fVar7 * fVar11 + fVar11) * fVar10;
              }
              fVar12 = 0.0;
              if (*(char *)(iVar3 + 99) == '\0') {
                *(undefined4 *)(iVar3 + 0x78) = 0;
                fVar7 = fVar11;
              }
              else {
                fVar7 = *(float *)(iVar3 + 0x74) - in_XMM1_Da;
                *(float *)(iVar3 + 0x74) = fVar7;
                if (fVar7 <= 0.0) {
                  if (0.0 < fVar10) {
                    iVar4 = rand();
                    fVar7 = fVar10 / 80.0;
                    fVar12 = (((float)iVar4 / 32767.0) * (fVar10 / 40.0) - fVar7) + fVar10;
                  }
                  *(float *)(iVar3 + 0x78) = fVar12;
                  *(undefined4 *)(iVar3 + 0x74) = 0x3e800000;
                }
              }
              uVar6 = uVar6 + 1;
              iVar3 = *(int *)(iVar5 + 0x3c);
            } while (uVar6 < (uint)(*(int *)(iVar5 + 0x40) - iVar3 >> 2));
          }
        }
        local_1c = local_1c + 1;
        iVar5 = *(int *)(g_gameData + 0xd8);
      } while (local_1c < (uint)(*(int *)(iVar5 + 0xd0) - *(int *)(iVar5 + 0xcc) >> 2));
    }
    this_01 = Singleton<>::getInstance();
    TabletManager::runLogic(this_01,(float)unaff_EDI);
  }
  return;
}


// public: void __thiscall GameLogic::dropDebrisFromShip(class Ship *)

void __thiscall GameLogic::dropDebrisFromShip(GameLogic *this,Ship *param_1)

{
  ShipComponent *pSVar1;
  int iVar2;
  SyntheticObject *pSVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CargoHold *this_00;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint local_14;
  int local_10;
  
  if (((param_1 != (Ship *)0x0) && (*(int *)(param_1 + 0x1f8) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    bVar12 = false;
    if (*(int *)(param_1 + 0x254) != 0) {
      bVar12 = *(int *)(*(int *)(param_1 + 0x254) + 0x158) == 0;
    }
    if (bVar12) {
      debugPrint("DETAIL","Dropping debris from ship.");
      pSVar3 = Sector::addSyntheticObject(*(Sector **)(param_1 + 0x24),0);
      *(undefined8 *)(pSVar3 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(pSVar3 + 0x30) = *(undefined8 *)(param_1 + 0x30);
      std::basic_string<>::operator=
                ((basic_string<> *)(pSVar3 + 0x68),(basic_string<> *)(param_1 + 8));
      iVar5 = *(int *)(param_1 + 0x1f8);
      local_14 = 0;
      local_10 = 0;
      iVar10 = *(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2;
      if (2 < iVar10) {
        local_10 = rand();
        local_10 = local_10 % (iVar10 + -2);
        iVar5 = *(int *)(param_1 + 0x1f8);
      }
      debugPrint("WORLD","Going to take %d/%d of the components in the ship\'s hold.",local_10,
                 *(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2);
      iVar5 = 0;
      if (0 < local_10) {
        do {
          if (99 < iVar5) break;
          this_00 = *(CargoHold **)(param_1 + 0x1f8);
          puVar4 = *(undefined4 **)(this_00 + 0x44);
          uVar9 = *(int *)(this_00 + 0x48) - (int)puVar4 >> 2;
          if (uVar9 < 2) {
            if (uVar9 == 1) goto LAB_0040d44b;
          }
          else {
            iVar10 = rand();
            this_00 = *(CargoHold **)(param_1 + 0x1f8);
            puVar4 = (undefined4 *)(*(int *)(this_00 + 0x44) + (iVar10 % (int)uVar9) * 4);
LAB_0040d44b:
            pSVar1 = (ShipComponent *)*puVar4;
            if (pSVar1 != (ShipComponent *)0x0) {
              CargoHold::removeComponent(this_00,pSVar1);
              CargoHold::addComponent(*(CargoHold **)(pSVar3 + 0xe8),pSVar1);
              puVar4 = (undefined4 *)(*(int *)(pSVar1 + 4) + 0x38);
              if (0xf < *(uint *)(*(int *)(pSVar1 + 4) + 0x4c)) {
                puVar4 = (undefined4 *)*puVar4;
              }
              debugPrint("WORLD","Dumped component \'%s\' into debris",puVar4);
              local_14 = local_14 + 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while ((int)local_14 < local_10);
      }
      debugPrint("WORLD","Adding components from functional modules.");
      iVar5 = *(int *)(param_1 + 0x40);
      local_14 = 0;
      if (*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2 != 0) {
        do {
          iVar5 = ComponentInterfaceInstance::getComponentCount
                            (*(ComponentInterfaceInstance **)
                              (*(int *)(*(int *)(iVar5 + 0x3c) + local_14 * 4) + 0xc));
          if (3 < iVar5) {
            iVar5 = 3;
          }
          iVar10 = 0;
          iVar11 = 0;
          if (0 < iVar5) {
            iVar6 = rand();
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x3c) + local_14 * 4) + 8)
            ;
            piVar8 = (int *)(iVar2 + 8);
            if (0xf < *(uint *)(iVar2 + 0x1c)) {
              piVar8 = (int *)*piVar8;
            }
            puVar4 = (undefined4 *)(iVar2 + 0x38);
            if (0xf < *(uint *)(iVar2 + 0x4c)) {
              puVar4 = (undefined4 *)*puVar4;
            }
            debugPrint("WORLD","Attempting to take %d components out of %d from module \'%s %s\'",
                       iVar6 % iVar5,iVar5,puVar4,piVar8);
            do {
              if (iVar6 % iVar5 <= iVar11) break;
              iVar7 = rand();
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x3c) + local_14 * 4) +
                              0xc);
              pSVar1 = *(ShipComponent **)(iVar2 + 4 + (iVar7 % 0x14) * 4);
              if (pSVar1 != (ShipComponent *)0x0) {
                *(undefined4 *)(iVar2 + 4 + (iVar7 % 0x14) * 4) = 0;
                CargoHold::addComponent(*(CargoHold **)(pSVar3 + 0xe8),pSVar1);
                puVar4 = (undefined4 *)(*(int *)(pSVar1 + 4) + 0x38);
                if (0xf < *(uint *)(*(int *)(pSVar1 + 4) + 0x4c)) {
                  puVar4 = (undefined4 *)*puVar4;
                }
                debugPrint("WORLD","Dumped component \'%s\' into debris",puVar4);
                iVar11 = iVar11 + 1;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < 100);
            debugPrint("WORLD","(took %d components in %d attempts)",iVar11,iVar10);
          }
          local_14 = local_14 + 1;
          iVar5 = *(int *)(param_1 + 0x40);
        } while (local_14 < (uint)(*(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x3c) >> 2));
      }
      debugPrint("WORLD","Added components from live modules.");
    }
  }
  return;
}


// public: void __thiscall GameLogic::removeShipOnSettingFlag(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall GameLogic::removeShipOnSettingFlag(undefined4 param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  AnimationFrames *pAVar3;
  AnimationFrames **ppAVar4;
  GameData *pGVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  AnimationFrames *pAVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_EDI;
  int *piVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  AnimationFrames *local_1c;
  GameLogic *local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar5 = g_gameData;
  puStack_c = &DAT_005b1e48;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = g_gameLogic;
  if ((*(int *)(g_gameData + 0xd8) != 0) &&
     (bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI), !bVar6)) {
    piVar1 = *(int **)(pGVar5 + 0x40);
    for (local_14 = *(int **)(pGVar5 + 0x3c); local_14 != piVar1; local_14 = local_14 + 1) {
      uVar11 = 0;
      piVar13 = *(int **)(*local_14 + 0xcc);
      piVar2 = *(int **)(*local_14 + 0xd0);
      uVar12 = (uint)((int)piVar2 + (3 - (int)piVar13)) >> 2;
      if (piVar2 < piVar13) {
        uVar12 = 0;
      }
      if (uVar12 != 0) {
        do {
          pAVar3 = (AnimationFrames *)*piVar13;
          local_1c = pAVar3;
          if ((*(int *)(pAVar3 + 0x44) != 0) && (*(int *)(*(int *)(pAVar3 + 0x44) + 0x124) != 0)) {
            pcVar8 = (char *)&param_2;
            if (0xf < in_stack_00000018) {
              pcVar8 = param_2;
            }
            bVar6 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar7,unaff_EDI);
            if (bVar6) {
              pAVar9 = pAVar3 + 8;
              if (0xf < *(uint *)(pAVar3 + 0x1c)) {
                pAVar9 = *(AnimationFrames **)pAVar9;
              }
              debugPrint("GAME","Flag set, removing ship \'%s\'",pAVar9);
              ppAVar4 = *(AnimationFrames ***)(local_18 + 0x14);
              if (*(AnimationFrames ***)(local_18 + 0x18) == ppAVar4) {
                std::vector<>::_Emplace_reallocate<>
                          ((vector<> *)(local_18 + 0x10),ppAVar4,&local_1c);
              }
              else {
                *ppAVar4 = pAVar3;
                *(int *)(local_18 + 0x14) = *(int *)(local_18 + 0x14) + 4;
              }
            }
          }
          uVar11 = uVar11 + 1;
          piVar13 = piVar13 + 1;
        } while (uVar11 != uVar12);
      }
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar7 = param_2;
    if ((nothrow_t *)0xfff < pnVar10) {
      pcVar7 = *(char **)(param_2 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar7,pnVar10);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::entirelyRemoveShip(class Ship *,bool)

void __thiscall GameLogic::entirelyRemoveShip(GameLogic *this,Ship *param_1,bool param_2)

{
  Sector *this_00;
  int iVar1;
  undefined4 *puVar2;
  GameData *pGVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  PrivateCommsManager *pPVar9;
  Ship *pSVar10;
  GameLogic *this_01;
  SensorData *pSVar11;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_02;
  uint uVar12;
  size_t sVar13;
  undefined4 *puVar14;
  
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c);
  if (0xf < *(uint *)(*(int *)(param_1 + 0x24) + 0x30)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  pSVar10 = param_1 + 8;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar10 = *(Ship **)(param_1 + 8);
  }
  debugPrint("GAME","REMOVING %s from sector %s",pSVar10,puVar4);
  removeSensorDataFor(this_01,param_1);
  this_00 = *(Sector **)(param_1 + 0x24);
  puVar4 = *(undefined4 **)(this_00 + 0xd0);
  puVar8 = *(undefined4 **)(this_00 + 0xcc);
joined_r0x0040d81a:
  if (puVar8 == puVar4) {
    pPVar9 = Singleton<>::getInstance();
    if (*(Ship **)(pPVar9 + 0x90) == param_1) {
      pPVar9 = Singleton<>::getInstance();
      pGVar3 = g_gameData;
      *(undefined4 *)(pPVar9 + 0x70) = 0;
      *(undefined4 *)(pPVar9 + 0x6c) = 0;
      if (*(int *)(pGVar3 + 0xd0) != 0) {
        *(undefined4 *)(*(int *)(pGVar3 + 0xd0) + 0x374) = 0;
      }
      pPVar9[0x80] = (PrivateCommsManager)0x0;
      *(undefined4 *)(pPVar9 + 0x1c) = 0xffffffff;
      *(undefined1 **)(pPVar9 + 0x18) = &DAT_bf800000;
      *(undefined4 *)(pPVar9 + 0x10) = 0;
      *(undefined4 *)(pPVar9 + 8) = 0;
      *(undefined4 *)(pPVar9 + 0xc) = 0;
      *(undefined1 **)(pPVar9 + 0x84) = &DAT_bf800000;
    }
    if (*(int *)(*(int *)(param_1 + 0x254) + 0x158) == 4) {
      Sector::removeWeapon(this_00,(Weapon *)param_1);
      this_02 = extraout_ECX;
    }
    else {
      Sector::removeShip(this_00,param_1);
      this_02 = extraout_ECX_00;
    }
    if (param_2) {
      dropDebrisFromShip(this_02,param_1);
    }
    if (param_1 == ShipData::currentlyBoardedShip) {
      ShipData::currentlyBoardedShip = (Ship *)0x0;
      *(undefined4 *)(g_gameData + 0xd0) = 0;
    }
    Ship::~Ship(param_1);
    operator_delete(param_1,(nothrow_t *)0x388);
    return;
  }
  pSVar10 = (Ship *)*puVar8;
  piVar5 = *(int **)(pSVar10 + 0x214);
  if (piVar5 != *(int **)(pSVar10 + 0x218)) {
    do {
      pSVar11 = (SensorData *)*piVar5;
      if (*(int *)(pSVar11 + 0x124) == *(int *)(param_1 + 0x250)) goto LAB_0040d853;
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int **)(pSVar10 + 0x218));
  }
  pSVar11 = (SensorData *)0x0;
LAB_0040d853:
  Ship::removeSensorData(pSVar10,pSVar11);
  if (*(int *)(pSVar10 + 0x44) != 0) {
    iVar1 = *(int *)(*(int *)(pSVar10 + 0x44) + 0x3c);
    uVar6 = 0;
    puVar14 = *(undefined4 **)(iVar1 + 4);
    uVar12 = *(int *)(iVar1 + 8) - (int)puVar14 >> 2;
    if (uVar12 != 0) {
      do {
        piVar5 = (int *)puVar14[uVar6];
        if ((Ship *)*piVar5 == param_1) {
          if ((piVar5 != (int *)0x0) && (puVar2 = *(undefined4 **)(iVar1 + 8), puVar14 != puVar2))
          goto LAB_0040d8a7;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar12);
    }
  }
  goto LAB_0040d913;
  while (puVar14 = puVar14 + 1, puVar14 != puVar2) {
LAB_0040d8a7:
    if ((int *)*puVar14 == piVar5) break;
  }
  if (puVar14 != puVar2) {
    puVar7 = puVar14 + 1;
    uVar12 = 0;
    uVar6 = (uint)((int)puVar2 + (3 - (int)puVar7)) >> 2;
    if (puVar2 < puVar7) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        if ((int *)*puVar7 != piVar5) {
          *puVar14 = (int *)*puVar7;
          puVar14 = puVar14 + 1;
        }
        uVar12 = uVar12 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar12 != uVar6);
    }
    if (puVar14 != puVar2) {
      sVar13 = *(int *)(iVar1 + 8) - (int)puVar2;
      memmove(puVar14,puVar2,sVar13);
      *(size_t *)(iVar1 + 8) = sVar13 + (int)puVar14;
    }
  }
LAB_0040d913:
  if ((*(int *)(pSVar10 + 0x194) != 0) && (*(Ship **)(*(int *)(pSVar10 + 0x194) + 0x130) == param_1)
     ) {
    *(undefined4 *)(pSVar10 + 0x194) = 0;
    *(undefined4 *)(pSVar10 + 400) = 0xffffffff;
  }
  if ((*(int *)(pSVar10 + 0x19c) != 0) && (*(Ship **)(*(int *)(pSVar10 + 0x19c) + 0x130) == param_1)
     ) {
    *(undefined4 *)(pSVar10 + 0x19c) = 0;
    *(undefined4 *)(pSVar10 + 0x198) = 0xffffffff;
  }
  if (*(int *)(*(int *)(pSVar10 + 0x254) + 0x158) == 4) {
    if (*(Ship **)(pSVar10 + 0x39c) == param_1) {
      *(undefined4 *)(pSVar10 + 0x39c) = 0;
    }
    if (*(Ship **)(pSVar10 + 0x38c) == param_1 + 8) {
      *(undefined4 *)(pSVar10 + 0x38c) = 0;
    }
  }
  puVar8 = puVar8 + 1;
  goto joined_r0x0040d81a;
}


// public: int __thiscall GameLogic::convertedTimeInHours(void)

int __thiscall GameLogic::convertedTimeInHours(GameLogic *this)

{
  return *(int *)(g_gameLogic + 0x184) +
         ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
         *(int *)(g_gameLogic + 0x188)) * 0x18;
}


// public: void __thiscall GameLogic::setHazardState(class Ship *,class cocos2d::Vec2)

void __thiscall GameLogic::setHazardState(undefined4 param_1_00,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  GameData *pGVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  uint local_20;
  int local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b1e82;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  piVar5 = (int *)0x0;
  local_14 = 0.0;
  local_1c = 2;
  local_20 = 0;
  piVar2 = (int *)(*(int *)(g_gameData + 0xd8) + 0x84);
  pGVar6 = g_gameData;
  fVar7 = 0.0;
  if (*(int *)(*(int *)(g_gameData + 0xd8) + 0x88) - *piVar2 >> 2 != 0) {
    do {
      uVar4 = local_20;
      iVar1 = *(int *)(*piVar2 + local_20 * 4);
      if ((*(int *)(iVar1 + 0x54) == 3) || (fVar7 = local_14, *(int *)(iVar1 + 0x54) == 4)) {
        local_28 = (float)*(double *)(iVar1 + 0x20);
        local_24 = (float)*(double *)(iVar1 + 0x28);
        local_8 = 1;
        fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0x00000008,(Vec2 *)&local_28);
        local_18 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
        fVar8 = (1.5 - fVar8 * 0.5 * local_18 * local_18) * local_18 * fVar8;
        pGVar6 = g_gameData;
        fVar7 = local_14;
        if (fVar8 <= 25.0) {
          uVar3 = 0;
          local_18 = *(float *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0x84) + uVar4 * 4);
          piVar2 = *(int **)(g_gameData + 0x54);
          uVar4 = *(int *)(g_gameData + 0x58) - (int)piVar2 >> 2;
          if (*(int *)((int)local_18 + 0x54) == 3) {
            if (uVar4 != 0) {
              do {
                piVar5 = (int *)*piVar2;
                if ((piVar5[8] == *(int *)((int)local_18 + 0xa8)) && (*piVar5 == 1))
                goto LAB_0040dc46;
                uVar3 = uVar3 + 1;
                piVar2 = piVar2 + 1;
              } while (uVar3 < uVar4);
            }
          }
          else if (uVar4 != 0) {
            do {
              piVar5 = (int *)*piVar2;
              if ((piVar5[8] == *(int *)((int)local_18 + 0xa8)) && (*piVar5 == 2))
              goto LAB_0040dc46;
              uVar3 = uVar3 + 1;
              piVar2 = piVar2 + 1;
            } while (uVar3 < uVar4);
          }
          piVar5 = (int *)0x0;
LAB_0040dc46:
          if (local_1c != *piVar5) {
            local_14 = 0.0;
            local_1c = *piVar5;
          }
          fVar8 = ((25.0 - fVar8) / 25.0) / (100.0 / (float)*(int *)((int)local_18 + 0xb0));
          if (local_1c == 2) {
            fVar7 = 1.0;
          }
          else {
            fVar7 = 0.6;
          }
          if (fVar8 <= fVar7) {
            fVar7 = fVar8;
          }
          uVar4 = local_20;
          if (fVar7 <= local_14) {
            fVar7 = local_14;
          }
        }
      }
      local_14 = fVar7;
      local_20 = uVar4 + 1;
      piVar2 = (int *)(*(int *)(pGVar6 + 0xd8) + 0x84);
      fVar7 = local_14;
    } while (local_20 < (uint)(*(int *)(*(int *)(pGVar6 + 0xd8) + 0x88) - *piVar2 >> 2));
  }
  *(int **)(param_1 + 0x184) = piVar5;
  *(double *)(param_1 + 0x140) = (double)fVar7;
  if (piVar5 != (int *)0x0) {
    *(int *)(param_1 + 0x188) = *piVar5;
    *(int *)(param_1 + 0x18c) = piVar5[8];
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// public: class cocos2d::Vec2 __thiscall GameLogic::calculateJumpDestination(int,int)

int __thiscall GameLogic::calculateJumpDestination(GameLogic *this,int param_1,int param_2)

{
  AnimationFrames **ppAVar1;
  AnimationFrames *pAVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  AnimationFrames **ppAVar10;
  nothrow_t *pnVar11;
  int *piVar12;
  AnimationFrames **ppAVar13;
  uint uVar14;
  int *piVar15;
  code *pcVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  int in_stack_0000000c;
  void *local_4c;
  AnimationFrames **local_48;
  AnimationFrames **local_44;
  double local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1ede;
  local_10 = ExceptionList;
  puVar8 = *(undefined4 **)(g_gameData + 0x3c);
  for (puVar9 = puVar8; puVar9 != *(undefined4 **)(g_gameData + 0x40); puVar9 = puVar9 + 1) {
    piVar12 = (int *)*puVar9;
    if (*piVar12 == param_2) goto joined_r0x0040dd91;
  }
  piVar12 = (int *)0x0;
joined_r0x0040dd91:
  do {
    if (puVar8 == *(undefined4 **)(g_gameData + 0x40)) {
      piVar15 = (int *)0x0;
LAB_0040dda5:
      if ((piVar12 != (int *)0x0) && (piVar15 != (int *)0x0)) {
        fVar17 = (float)piVar15[0x1f];
        ExceptionList = &local_10;
        angleInDegreesFrom(fVar17,(float)piVar15[0x20],(float)piVar12[0x1f],(float)piVar12[0x20],
                           ___security_cookie ^ (uint)&stack0xfffffffc);
        local_20 = 0;
        local_1c = 0;
        local_8 = 0;
        dVar18 = (double)(int)fVar17 * 0.017453292519943295;
        local_28 = dVar18;
        __libm_sse2_sin_precise();
        __libm_sse2_cos_precise();
        local_28 = (double)CONCAT44((float)(local_28 * 50.0),(float)(dVar18 * 50.0));
        local_8 = CONCAT31(local_8._1_3_,1);
        cocos2d::Vec2::operator+((Vec2 *)&local_20,(Vec2 *)&local_38);
        local_8 = 2;
        if (0.0 < local_38) {
          if (0.0 < local_34) {
            param_2 = 1;
          }
          else {
            param_2 = 2;
          }
        }
        else if (0.0 < local_34) {
          param_2 = 0;
        }
        else {
          param_2 = 3;
        }
        piVar12 = piVar15 + 7;
        if (0xf < (uint)piVar15[0xc]) {
          piVar12 = (int *)*piVar12;
        }
        debugPrint("GAME","Jumping to sector %s, arriving in quadrant %s.",piVar12);
        ppAVar13 = (AnimationFrames **)0x0;
        ppAVar10 = (AnimationFrames **)0x0;
        local_4c = (void *)0x0;
        local_48 = (AnimationFrames **)0x0;
        local_44 = (AnimationFrames **)0x0;
        local_8 = CONCAT31(local_8._1_3_,3);
        iVar5 = piVar15[0x2d];
        local_1c = 0;
        if (piVar15[0x2e] - iVar5 >> 2 != 0) {
          in_stack_0000000c = 3;
          do {
            ppAVar1 = (AnimationFrames **)(iVar5 + local_1c * 4);
            pAVar2 = *ppAVar1;
            local_28 = (double)CONCAT44(ppAVar1,(undefined4)local_28);
            if (0.0 < *(float *)pAVar2) {
              iVar5 = (*(float *)(pAVar2 + 4) <= 0.0) + 1;
            }
            else {
              iVar5 = 0;
              if (*(float *)(pAVar2 + 4) <= 0.0) {
                iVar5 = in_stack_0000000c;
              }
            }
            if (iVar5 == param_2) {
              if (ppAVar10 == ppAVar13) {
                std::vector<>::_Emplace_reallocate<>((vector<> *)&local_4c,ppAVar13,ppAVar1);
                ppAVar10 = local_44;
                ppAVar13 = local_48;
              }
              else {
                *ppAVar13 = pAVar2;
                local_48 = ppAVar13 + 1;
                ppAVar13 = local_48;
              }
            }
            local_1c = local_1c + 1;
            iVar5 = piVar15[0x2d];
          } while (local_1c < (uint)(piVar15[0x2e] - iVar5 >> 2));
        }
        pvVar4 = local_4c;
        uVar14 = (int)ppAVar13 - (int)local_4c;
        local_28._4_4_ = (int)uVar14 >> 2;
        debugPrint("GAME","Possible entry points: %d");
        pcVar16 = rand_exref;
        if (uVar14 < 4) {
          debugPrint("ERROR","ERROR: No jump point found for quadrant %s");
          iVar7 = piVar15[0x2e];
          iVar3 = piVar15[0x2d];
          iVar5 = rand();
          iVar5 = iVar5 % ((iVar7 - iVar3 >> 2) + -1);
          pvVar6 = (void *)piVar15[0x2d];
          pcVar16 = rand_exref;
        }
        else {
          iVar5 = rand();
          iVar5 = iVar5 % local_28._4_4_;
          pvVar6 = pvVar4;
        }
        puVar8 = *(undefined4 **)((int)pvVar6 + iVar5 * 4);
        local_20 = *puVar8;
        local_1c = puVar8[1];
        iVar5 = (*pcVar16)();
        iVar7 = (*pcVar16)();
        local_28 = (double)((float)(int)puVar8[3] * ((float)(iVar7 % 100) / 100.0));
        dVar19 = (double)(iVar5 % 0x168) * 0.017453292519943295;
        local_40 = dVar19;
        __libm_sse2_sin_precise();
        dVar19 = dVar19 * local_28;
        dVar18 = local_40;
        __libm_sse2_cos_precise();
        local_28 = (double)CONCAT44((float)(dVar18 * local_28),(float)dVar19);
        local_8._0_1_ = 5;
        cocos2d::Vec2::operator+((Vec2 *)&local_20,(Vec2 *)&local_30);
        local_8 = CONCAT31(local_8._1_3_,6);
        debugPrint("GAME","Jumping to base point %f, %f",(double)local_30,(double)local_2c);
        *(float *)param_1 = local_30;
        *(float *)(param_1 + 4) = local_2c;
        if (pvVar4 != (void *)0x0) {
          pnVar11 = (nothrow_t *)((int)ppAVar10 - (int)pvVar4 & 0xfffffffc);
          pvVar6 = pvVar4;
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar6 = *(void **)((int)pvVar4 + -4);
            pnVar11 = pnVar11 + 0x23;
            if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar11);
        }
        ExceptionList = local_10;
        return param_1;
      }
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      return param_1;
    }
    piVar15 = (int *)*puVar8;
    if (*piVar15 == in_stack_0000000c) goto LAB_0040dda5;
    puVar8 = puVar8 + 1;
  } while( true );
}


// public: class SpaceStation * __thiscall GameLogic::generateSpaceStation(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool)

SpaceStation * __thiscall
GameLogic::generateSpaceStation(undefined4 param_1,basic_string<> *param_2)

{
  ShipClass *pSVar1;
  SpaceStation *pSVar2;
  Ship *this;
  basic_string<> *pbVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  undefined4 in_stack_0000002c;
  uint in_stack_00000030;
  int in_stack_00000034;
  void *in_stack_00000038;
  uint in_stack_0000004c;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1f2a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)&stack0x0000001c);
  pSVar1 = GameData::getShipClassWithIdentifier();
  pSVar2 = operator_new(0x430);
  local_8._0_1_ = 3;
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)&stack0x00000038);
  this = (Ship *)SpaceStation::SpaceStation(pSVar2,pSVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((basic_string<> *)(this + 8) != (basic_string<> *)&param_2) {
    pbVar3 = (basic_string<> *)&param_2;
    if (0xf < in_stack_00000018) {
      pbVar3 = param_2;
    }
    uStack_30 = 0x40e21d;
    std::basic_string<>::assign((basic_string<> *)(this + 8),(char *)pbVar3,in_stack_00000014);
  }
  Ship::setSector(this,in_stack_00000034);
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar3 = *(basic_string<> **)(param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x40e25a;
    operator_delete(pbVar3,pnVar5);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (basic_string<> *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar5 = (nothrow_t *)(in_stack_00000030 + 1);
    pvVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)in_stack_0000001c + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x40e2a2;
    operator_delete(pvVar4,pnVar5);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (void *)((uint)in_stack_0000001c & 0xffffff00);
  if (0xf < in_stack_0000004c) {
    pnVar5 = (nothrow_t *)(in_stack_0000004c + 1);
    pvVar4 = in_stack_00000038;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)in_stack_00000038 + -4);
      pnVar5 = (nothrow_t *)(in_stack_0000004c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000038 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x40e2ea;
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  return (SpaceStation *)this;
}


// public: class Ship * __thiscall GameLogic::generateShip(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Ship * __thiscall
GameLogic::generateShip(undefined4 param_1,undefined4 param_2,int param_3,void *param_4)

{
  bool bVar1;
  char *pcVar2;
  ShipClass *pSVar3;
  Ship *pSVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  void *in_stack_0000003c;
  undefined4 in_stack_0000004c;
  uint in_stack_00000050;
  void *in_stack_00000054;
  uint in_stack_00000068;
  basic_string<> abStack_5c [16];
  undefined4 uStack_4c;
  basic_string<> abStack_44 [12];
  undefined4 uStack_38;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1f8a;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 3;
  uStack_4c = 0x40e350;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&stack0x0000003c);
  pSVar3 = GameData::getShipClassWithIdentifier();
  pSVar4 = operator_new(0x388);
  local_8._0_1_ = 4;
  uStack_4c = 0x40e37b;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&stack0x00000024);
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)&param_4);
  local_8._0_1_ = 4;
  pSVar4 = (Ship *)Ship::Ship(pSVar4,pSVar3,param_2);
  local_8 = CONCAT31(local_8._1_3_,3);
  Ship::setSector(pSVar4,param_3);
  uStack_38 = 0x40e3c4;
  bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
  if (!bVar1) {
    uStack_4c = 0x40e3d9;
    std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&stack0x00000054);
    Ship::addModulesWithConfig(pSVar4);
  }
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar5 = param_4;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_4 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x40e413;
    operator_delete(pvVar5,pnVar6);
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0xf;
  param_4 = (void *)((uint)param_4 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar6 = (nothrow_t *)(in_stack_00000038 + 1);
    pvVar5 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)in_stack_00000024 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x40e45b;
    operator_delete(pvVar5,pnVar6);
  }
  in_stack_00000034 = 0;
  in_stack_00000038 = 0xf;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000050) {
    pnVar6 = (nothrow_t *)(in_stack_00000050 + 1);
    pvVar5 = in_stack_0000003c;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)in_stack_0000003c + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000050 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000003c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x40e4a3;
    operator_delete(pvVar5,pnVar6);
  }
  in_stack_0000004c = 0;
  in_stack_00000050 = 0xf;
  in_stack_0000003c = (void *)((uint)in_stack_0000003c & 0xffffff00);
  if (0xf < in_stack_00000068) {
    pnVar6 = (nothrow_t *)(in_stack_00000068 + 1);
    pvVar5 = in_stack_00000054;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)in_stack_00000054 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000068 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000054 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x40e4eb;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return pSVar4;
}


// public: void __thiscall GameLogic::switchPlayerShipTo(class Ship *)

void __thiscall GameLogic::switchPlayerShipTo(GameLogic *this,Ship *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  Ship *pSVar5;
  undefined4 *puVar6;
  ShipBehaviour *pSVar7;
  Ship *pSVar8;
  GameLogic *this_00;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1fc2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar8 = param_1 + 8;
  iVar3 = *(int *)(g_gameData + 0xd0);
  dVar1 = *(double *)(iVar3 + 0x28);
  iVar4 = *(int *)(iVar3 + 0x20);
  pSVar5 = *(Ship **)(iVar3 + 0x178);
  dVar2 = *(double *)(iVar3 + 0x30);
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pSVar8 = *(Ship **)pSVar8;
  }
  puVar6 = (undefined4 *)(iVar3 + 8);
  if (0xf < *(uint *)(iVar3 + 0x1c)) {
    puVar6 = (undefined4 *)*puVar6;
  }
  debugPrint("WORLD","Changing player\'s ship from %s to %s",puVar6,pSVar8,
             ___security_cookie ^ (uint)&stack0xfffffffc);
  entirelyRemoveShip(this_00,*(Ship **)(g_gameData + 0xd0),false);
  *(Ship **)(g_gameData + 0xd0) = param_1;
  *(double *)(param_1 + 0x28) = (double)(float)dVar1;
  *(double *)(param_1 + 0x30) = (double)(float)dVar2;
  Ship::setSector(param_1,iVar4);
  Ship::setDocked(param_1,pSVar5,false,false);
  pSVar7 = *(ShipBehaviour **)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xf8) = 2;
  *(undefined2 *)(param_1 + 0x280) = 0;
  param_1[0x234] = (Ship)0x1;
  if (pSVar7 != (ShipBehaviour *)0x0) {
    ShipBehaviour::~ShipBehaviour(pSVar7);
    operator_delete(pSVar7,(nothrow_t *)0x164);
  }
  pSVar7 = operator_new(0x164);
  local_8 = 0;
  pSVar7 = (ShipBehaviour *)ShipBehaviour::ShipBehaviour(pSVar7,param_1,0);
  local_8 = 0xffffffff;
  *(ShipBehaviour **)(param_1 + 0x44) = pSVar7;
  ShipBehaviour::configureShipDesires(pSVar7);
  ExceptionList = local_10;
  return;
}


// public: enum EModuleType::ModuleType __thiscall GameLogic::getModuleTypeForIdentifier(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ModuleType __thiscall GameLogic::getModuleTypeForIdentifier(undefined4 param_1,void *param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ModuleType MVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  MVar6 = 0;
  do {
    pcVar2 = (&PTR_s_unknown_005d01b0)[MVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_0040e6ae;
    MVar6 = MVar6 + 1;
  } while ((int)MVar6 < 0x12);
  MVar6 = 0;
LAB_0040e6ae:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return MVar6;
}


// public: void __thiscall GameLogic::addComponentFilter(int,enum
// EComponentCategory::ComponentCategory)

void __thiscall GameLogic::addComponentFilter(GameLogic *this,int param_1,ComponentCategory param_2)

{
  AnimationFrames **ppAVar1;
  undefined1 *puVar2;
  
  if (*(int *)(this + 0x44) < param_1) {
    *(int *)(this + 0x44) = param_1;
  }
  puVar2 = *(undefined1 **)(this + param_1 * 4 + 0x1c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = operator_new(0x3c);
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0xf;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0xf;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0;
    *(undefined4 *)(puVar2 + 0x38) = 0;
    *(undefined1 **)(this + param_1 * 4 + 0x1c) = puVar2;
  }
  ppAVar1 = *(AnimationFrames ***)(puVar2 + 0x34);
  if (*(AnimationFrames ***)(puVar2 + 0x38) != ppAVar1) {
    *ppAVar1 = (AnimationFrames *)param_2;
    *(int *)(puVar2 + 0x34) = *(int *)(puVar2 + 0x34) + 4;
    return;
  }
  std::vector<>::_Emplace_reallocate<>
            ((vector<> *)(puVar2 + 0x30),ppAVar1,(AnimationFrames **)&param_2);
  return;
}


// public: void __thiscall GameLogic::addComponentFilterData(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall
GameLogic::addComponentFilterData(GameLogic *this,int param_1,basic_string<> *param_3)

{
  basic_string<> *pbVar1;
  basic_string<> *pbVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1ff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(int *)(this + 0x44) < param_1) {
    *(int *)(this + 0x44) = param_1;
  }
  pbVar1 = *(basic_string<> **)(this + param_1 * 4 + 0x1c);
  if (pbVar1 == (basic_string<> *)0x0) {
    pbVar1 = operator_new(0x3c);
    *(undefined4 *)(pbVar1 + 0x10) = 0;
    *(undefined4 *)(pbVar1 + 0x14) = 0xf;
    *pbVar1 = (basic_string<>)0x0;
    *(undefined4 *)(pbVar1 + 0x28) = 0;
    *(undefined4 *)(pbVar1 + 0x2c) = 0xf;
    pbVar1[0x18] = (basic_string<>)0x0;
    *(undefined4 *)(pbVar1 + 0x30) = 0;
    *(undefined4 *)(pbVar1 + 0x34) = 0;
    *(undefined4 *)(pbVar1 + 0x38) = 0;
    *(basic_string<> **)(this + param_1 * 4 + 0x1c) = pbVar1;
  }
  if (pbVar1 != (basic_string<> *)&param_3) {
    pbVar2 = (basic_string<> *)&param_3;
    if (0xf < in_stack_0000001c) {
      pbVar2 = param_3;
    }
    std::basic_string<>::assign(pbVar1,(char *)pbVar2,in_stack_00000018);
    pbVar1 = *(basic_string<> **)(this + param_1 * 4 + 0x1c);
  }
  if (pbVar1 + 0x18 != (basic_string<> *)&stack0x00000020) {
    pbVar2 = (basic_string<> *)&stack0x00000020;
    if (0xf < in_stack_00000034) {
      pbVar2 = in_stack_00000020;
    }
    std::basic_string<>::assign(pbVar1 + 0x18,(char *)pbVar2,in_stack_00000030);
  }
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pbVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pbVar1 = *(basic_string<> **)(param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((basic_string<> *)0x1f < param_3 + (-4 - (int)pbVar1)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar1,pnVar3);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (basic_string<> *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar3 = (nothrow_t *)(in_stack_00000034 + 1);
    pbVar1 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar3) {
      pbVar1 = *(basic_string<> **)(in_stack_00000020 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000020 + (-4 - (int)pbVar1)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar1,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::removeSyntheticObject(class SyntheticObject *)

void __thiscall GameLogic::removeSyntheticObject(GameLogic *this,SyntheticObject *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 != (SyntheticObject *)0x0) {
    piVar6 = *(int **)(g_gameData + 0x3c);
    if (piVar6 != *(int **)(g_gameData + 0x40)) {
      while (piVar1 = (int *)*piVar6, *piVar1 != *(int *)(param_1 + 0x20)) {
        piVar6 = piVar6 + 1;
        if (piVar6 == *(int **)(g_gameData + 0x40)) {
          return;
        }
      }
      if (piVar1 != (int *)0x0) {
        uVar8 = 0;
        iVar7 = piVar1[0x33];
        if (piVar1[0x34] - iVar7 >> 2 != 0) {
          do {
            Ship::removeSensorDataForSyntheticID
                      (*(Ship **)(iVar7 + uVar8 * 4),*(int *)(param_1 + 0x44));
            iVar7 = *(int *)(piVar1[0x33] + uVar8 * 4);
            iVar2 = *(int *)(iVar7 + 0x174);
            if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) == *(int *)(param_1 + 0x44))) {
              *(undefined4 *)(iVar7 + 0x174) = 0;
            }
            uVar8 = uVar8 + 1;
            iVar7 = piVar1[0x33];
          } while (uVar8 < (uint)(piVar1[0x34] - iVar7 >> 2));
        }
        pvVar3 = (void *)piVar1[0x28];
        puVar5 = (undefined4 *)std::remove<>(piVar1[0x27],pvVar3);
        pvVar4 = (void *)*puVar5;
        if (pvVar4 != pvVar3) {
          iVar7 = piVar1[0x28];
          memmove(pvVar4,pvVar3,iVar7 - (int)pvVar3);
          piVar1[0x28] = (iVar7 - (int)pvVar3) + (int)pvVar4;
        }
      }
    }
  }
  return;
}


// public: void __thiscall GameLogic::removeSensorDataFor(class Ship *)

void __thiscall GameLogic::removeSensorDataFor(GameLogic *this,Ship *param_1)

{
  SensorData *this_00;
  uint uVar1;
  Ship *pSVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  AnimationFrames *pAVar7;
  int *piVar8;
  uint uVar9;
  size_t sVar10;
  int iVar11;
  AnimationFrames *local_4c;
  AnimationFrames *local_48;
  AnimationFrames *local_44;
  int *local_40;
  int *local_3c;
  Ship *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_28;
  int *local_24;
  AnimationFrames *local_20;
  AnimationFrames *local_1c;
  AnimationFrames *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2018;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = *(int **)(g_gameData + 0x3c);
  local_40 = *(int **)(g_gameData + 0x40);
  if (local_28 != local_40) {
    do {
      local_24 = *(int **)(*local_28 + 0xcc);
      local_3c = *(int **)(*local_28 + 0xd0);
      if (local_24 != local_3c) {
        do {
          local_14 = *local_24;
          local_20 = (AnimationFrames *)0x0;
          local_4c = (AnimationFrames *)0x0;
          local_48 = (AnimationFrames *)0x0;
          local_18 = (AnimationFrames *)0x0;
          local_44 = (AnimationFrames *)0x0;
          local_8 = 0;
          uVar9 = 0;
          piVar8 = *(int **)(local_14 + 0x214);
          uVar6 = (uint)((int)*(int **)(local_14 + 0x218) + (3 - (int)piVar8)) >> 2;
          if (*(int **)(local_14 + 0x218) < piVar8) {
            uVar6 = 0;
          }
          if (uVar6 != 0) {
            do {
              local_20 = (AnimationFrames *)*piVar8;
              if ((*(Ship **)(local_20 + 0x130) == param_1) ||
                 (*(int *)(local_20 + 0x124) == *(int *)(param_1 + 0x250))) {
                if (local_18 == local_48) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)&local_4c,(AnimationFrames **)local_48,&local_20);
                  local_18 = local_44;
                }
                else {
                  *(AnimationFrames **)local_48 = local_20;
                  local_48 = local_48 + 4;
                }
              }
              uVar9 = uVar9 + 1;
              piVar8 = piVar8 + 1;
            } while (uVar9 != uVar6);
            local_20 = local_4c;
          }
          local_4c = local_20;
          local_1c = local_20;
          if (local_20 != local_48) {
            local_38 = param_1 + 8;
            local_34 = (undefined4 *)(local_14 + 8);
            iVar11 = local_14;
            do {
              this_00 = *(SensorData **)local_1c;
              puVar4 = local_34;
              if (0xf < (uint)local_34[5]) {
                puVar4 = (undefined4 *)*local_34;
              }
              pSVar2 = local_38;
              if (0xf < *(uint *)(local_38 + 0x14)) {
                pSVar2 = *(Ship **)local_38;
              }
              debugPrint("DETAIL","Removing sensor data for ship \'%s\' from ship %s",pSVar2,puVar4,
                         uVar1);
              local_30 = *(undefined4 **)(iVar11 + 0x218);
              puVar4 = *(undefined4 **)(iVar11 + 0x214);
              if (puVar4 != local_30) {
                do {
                  if ((SensorData *)*puVar4 == this_00) break;
                  puVar4 = puVar4 + 1;
                } while (puVar4 != local_30);
                if (puVar4 != local_30) {
                  puVar3 = puVar4 + 1;
                  uVar6 = 0;
                  uVar9 = (uint)((int)local_30 + (3 - (int)puVar3)) >> 2;
                  if (local_30 < puVar3) {
                    uVar9 = 0;
                  }
                  if (uVar9 != 0) {
                    do {
                      if ((SensorData *)*puVar3 != this_00) {
                        *puVar4 = (SensorData *)*puVar3;
                        puVar4 = puVar4 + 1;
                      }
                      uVar6 = uVar6 + 1;
                      puVar3 = puVar3 + 1;
                    } while (uVar6 != uVar9);
                  }
                  iVar11 = local_14;
                  if (puVar4 != local_30) {
                    sVar10 = *(int *)(local_14 + 0x218) - (int)local_30;
                    memmove(puVar4,local_30,sVar10);
                    *(size_t *)(local_14 + 0x218) = sVar10 + (int)puVar4;
                    iVar11 = local_14;
                  }
                }
              }
              if (this_00 != (SensorData *)0x0) {
                SensorData::~SensorData(this_00);
                operator_delete(this_00,(nothrow_t *)0x138);
              }
              local_1c = (AnimationFrames *)((int)local_1c + 4);
            } while (local_1c != local_48);
          }
          local_8 = 0xffffffff;
          if (local_20 != (AnimationFrames *)0x0) {
            pnVar5 = (nothrow_t *)((int)local_18 - (int)local_20 & 0xfffffffc);
            pAVar7 = local_20;
            if ((nothrow_t *)0xfff < pnVar5) {
              pAVar7 = *(AnimationFrames **)(local_20 + -4);
              pnVar5 = pnVar5 + 0x23;
              if ((AnimationFrames *)0x1f < local_20 + (-4 - (int)pAVar7)) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pAVar7,pnVar5);
          }
          local_24 = local_24 + 1;
        } while (local_24 != local_3c);
      }
      local_28 = local_28 + 1;
    } while (local_28 != local_40);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::addCountermeasure(int,class cocos2d::Vec2,int,float,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
GameLogic::addCountermeasure
          (GameLogic *this,int param_1,float param_3,float param_4,undefined4 param_5,
          undefined4 param_6,basic_string<> *param_7)

{
  int *piVar1;
  AnimationFrames **ppAVar2;
  GameData *pGVar3;
  uint uVar4;
  SyntheticObject *this_00;
  int *piVar5;
  basic_string<> *pbVar6;
  undefined4 *puVar7;
  nothrow_t *pnVar8;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  GameLogic *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2063;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  for (piVar5 = *(int **)(g_gameData + 0x3c); local_14 = this,
      piVar5 != *(int **)(g_gameData + 0x40); piVar5 = piVar5 + 1) {
    piVar1 = (int *)*piVar5;
    if (*piVar1 == param_1) {
      this_00 = operator_new(0xf8);
      local_8._0_1_ = 2;
      local_14 = (GameLogic *)this_00;
      SyntheticObject::SyntheticObject(this_00,3);
      pGVar3 = g_gameData;
      local_8 = CONCAT31(local_8._1_3_,1);
      *(undefined ***)this_00 = CounterMeasure::vftable;
      *(undefined4 *)(this_00 + 0xf0) = param_5;
      *(undefined4 *)(this_00 + 0xf4) = 0x42b40000;
      *(double *)(this_00 + 0x28) = (double)param_3;
      *(int *)(this_00 + 0x20) = param_1;
      *(double *)(this_00 + 0x30) = (double)param_4;
      puVar7 = *(undefined4 **)(pGVar3 + 0x3c);
      goto joined_r0x0040ef2b;
    }
  }
  goto LAB_0040efca;
joined_r0x0040ef2b:
  if (puVar7 == *(undefined4 **)(pGVar3 + 0x40)) goto LAB_0040ef3d;
  piVar5 = (int *)*puVar7;
  if (*piVar5 == param_1) goto LAB_0040ef3f;
  puVar7 = puVar7 + 1;
  goto joined_r0x0040ef2b;
LAB_0040ef3d:
  piVar5 = (int *)0x0;
LAB_0040ef3f:
  *(int **)(this_00 + 0x24) = piVar5;
  *(undefined4 *)(this_00 + 100) = param_6;
  if ((basic_string<> *)(this_00 + 0x68) != (basic_string<> *)&param_7) {
    pbVar6 = (basic_string<> *)&param_7;
    if (0xf < in_stack_0000002c) {
      pbVar6 = param_7;
    }
    std::basic_string<>::assign((basic_string<> *)(this_00 + 0x68),(char *)pbVar6,in_stack_00000028)
    ;
  }
  ppAVar2 = (AnimationFrames **)piVar1[0x28];
  if ((AnimationFrames **)piVar1[0x29] == ppAVar2) {
    local_14 = (GameLogic *)this_00;
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(piVar1 + 0x27),ppAVar2,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar2 = (AnimationFrames *)this_00;
    piVar1[0x28] = piVar1[0x28] + 4;
    local_14 = (GameLogic *)this_00;
  }
  pbVar6 = (basic_string<> *)&param_7;
  if (0xf < in_stack_0000002c) {
    pbVar6 = param_7;
  }
  debugPrint("WORLD","Added countermeasure for rego (%s) to %f, %f in sector %d",pbVar6,
             (double)param_3,(double)param_4,param_1,uVar4);
LAB_0040efca:
  if (0xf < in_stack_0000002c) {
    pnVar8 = (nothrow_t *)(in_stack_0000002c + 1);
    pbVar6 = param_7;
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar6 = *(basic_string<> **)(param_7 + -4);
      pnVar8 = (nothrow_t *)(in_stack_0000002c + 0x24);
      if ((basic_string<> *)0x1f < param_7 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar6,pnVar8);
  }
  ExceptionList = local_10;
  return;
}


// public: class CounterMeasure * __thiscall GameLogic::getClosestCounterMeasureTo(int,class
// cocos2d::Vec2,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

CounterMeasure * __thiscall
GameLogic::getClosestCounterMeasureTo
          (undefined4 param_1_00,CounterMeasure *param_1,undefined4 param_3,undefined4 param_4,
          char *param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  nothrow_t *pnVar9;
  uint unaff_EDI;
  uint uVar10;
  float fVar11;
  uint in_stack_00000020;
  uint in_stack_00000024;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b20c5;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar3 = false;
  bVar2 = false;
  local_18 = 0.0;
  local_8 = 1;
  for (piVar7 = *(int **)(g_gameData + 0x3c); piVar7 != *(int **)(g_gameData + 0x40);
      piVar7 = piVar7 + 1) {
    piVar1 = (int *)*piVar7;
    if ((CounterMeasure *)*piVar1 == param_1) {
      iVar8 = piVar1[0x27];
      uVar10 = 0;
      param_1 = (CounterMeasure *)0x0;
      if (piVar1[0x28] - iVar8 >> 2 != 0) goto LAB_0040f0d0;
      goto LAB_0040f078;
    }
  }
  param_1 = (CounterMeasure *)0x0;
  goto LAB_0040f078;
LAB_0040f0d0:
  do {
    if (*(int *)(*(int *)(iVar8 + uVar10 * 4) + 0x60) == 3) {
      pcVar6 = (char *)&param_5;
      if (0xf < in_stack_00000024) {
        pcVar6 = param_5;
      }
      bVar4 = std::_Traits_equal<>(pcVar6,in_stack_00000020,pcVar5,unaff_EDI);
      if (bVar4) {
        if (param_1 == (CounterMeasure *)0x0) {
LAB_0040f222:
          bVar4 = true;
        }
        else {
          local_28 = (float)*(double *)(param_1 + 0x28);
          local_24 = (float)*(double *)(param_1 + 0x30);
          iVar8 = *(int *)(piVar1[0x27] + uVar10 * 4);
          local_30 = (float)*(double *)(iVar8 + 0x28);
          local_2c = (float)*(double *)(iVar8 + 0x30);
          local_8 = 3;
          bVar3 = true;
          bVar2 = true;
          local_18 = 4.2039e-45;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&param_3);
          local_20 = local_1c * 0.5;
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&param_3);
          local_18 = (float)(0x5f3759df - ((uint)fVar11 >> 1));
          if ((1.5 - fVar11 * 0.5 * local_18 * local_18) * local_18 * fVar11 <
              (1.5 - local_20 * local_14 * local_14) * local_14 * local_1c) goto LAB_0040f222;
          bVar4 = false;
        }
        if (bVar2) {
          bVar2 = false;
        }
        local_8 = 1;
        if (bVar3) {
          bVar3 = false;
        }
        if (bVar4) {
          param_1 = *(CounterMeasure **)(piVar1[0x27] + uVar10 * 4);
        }
      }
    }
    uVar10 = uVar10 + 1;
    iVar8 = piVar1[0x27];
  } while (uVar10 < (uint)(piVar1[0x28] - iVar8 >> 2));
LAB_0040f078:
  if (0xf < in_stack_00000024) {
    pnVar9 = (nothrow_t *)(in_stack_00000024 + 1);
    pcVar5 = param_5;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar5 = *(char **)(param_5 + -4);
      pnVar9 = (nothrow_t *)(in_stack_00000024 + 0x24);
      if ((char *)0x1f < param_5 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar5,pnVar9);
  }
  ExceptionList = local_10;
  return param_1;
}


// public: void __thiscall GameLogic::addExplosionSensorData(int,class cocos2d::Vec2)

void __thiscall
GameLogic::addExplosionSensorData
          (undefined4 param_1_00,undefined4 param_1,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  AnimationFrames **ppAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  float fVar8;
  SensorData *this;
  AnimationFrames *pAVar9;
  word *pwVar10;
  undefined4 *puVar11;
  int iVar12;
  void *pvVar13;
  nothrow_t *pnVar14;
  GameData *pGVar15;
  uint local_48;
  AnimationFrames *local_44;
  uint local_40;
  void *local_3c [5];
  uint local_28;
  float local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005b20fe;
  local_1c = ExceptionList;
  fVar8 = (float)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_14 = 0;
  local_48 = 0;
  pGVar15 = g_gameData;
  local_24 = fVar8;
  puVar7 = &stack0xfffffffc;
  if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
    do {
      local_40 = 0;
      iVar1 = *(int *)(*(int *)(pGVar15 + 0x3c) + local_48 * 4);
      iVar12 = *(int *)(iVar1 + 0xcc);
      if (*(int *)(iVar1 + 0xd0) - iVar12 >> 2 != 0) {
        do {
          if (*(char *)(*(int *)(local_40 * 4 + iVar12) + 0x234) != '\0') {
            this = operator_new(0x138);
            local_14._0_1_ = 1;
            iVar12 = *(int *)(*(int *)(iVar1 + 0xcc) + local_40 * 4);
            iVar2 = *(int *)(iVar12 + 0x220);
            *(int *)(iVar12 + 0x220) = iVar2 + 1;
            pAVar9 = (AnimationFrames *)SensorData::SensorData(this,-1,iVar2,fVar8);
            local_14 = (uint)local_14._1_3_ << 8;
            *(undefined4 *)(pAVar9 + 0xe0) = 2;
            *(double *)(pAVar9 + 0x10) = (double)param_3;
            *(double *)(pAVar9 + 0x18) = (double)param_4;
            *(undefined2 *)(pAVar9 + 8) = 0x101;
            local_44 = pAVar9;
            pwVar10 = (word *)strUsingArgs((char *)local_3c,"Transient %d");
            if ((word *)(pAVar9 + 0x48) != pwVar10) {
              word::~word((word *)(pAVar9 + 0x48));
              uVar4 = *(undefined4 *)(pwVar10 + 4);
              uVar5 = *(undefined4 *)(pwVar10 + 8);
              uVar6 = *(undefined4 *)(pwVar10 + 0xc);
              *(undefined4 *)(pAVar9 + 0x48) = *(undefined4 *)pwVar10;
              *(undefined4 *)(pAVar9 + 0x4c) = uVar4;
              *(undefined4 *)(pAVar9 + 0x50) = uVar5;
              *(undefined4 *)(pAVar9 + 0x54) = uVar6;
              *(undefined8 *)(pAVar9 + 0x58) = *(undefined8 *)(pwVar10 + 0x10);
              *(undefined4 *)(pwVar10 + 0x10) = 0;
              *(undefined4 *)(pwVar10 + 0x14) = 0xf;
              *pwVar10 = (word)0x0;
            }
            if (0xf < local_28) {
              pnVar14 = (nothrow_t *)(local_28 + 1);
              pvVar13 = local_3c[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_3c[0] + -4);
                pnVar14 = (nothrow_t *)(local_28 + 0x24);
                if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar13,pnVar14);
            }
            std::basic_string<>::assign((basic_string<> *)(pAVar9 + 0x60),"Explosion",9);
            *(undefined1 **)(pAVar9 + 0x128) = &DAT_bf800000;
            iVar12 = *(int *)(*(int *)(iVar1 + 0xcc) + local_40 * 4);
            ppAVar3 = *(AnimationFrames ***)(iVar12 + 0x218);
            if (*(AnimationFrames ***)(iVar12 + 0x21c) == ppAVar3) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)(iVar12 + 0x214),ppAVar3,&local_44);
              pAVar9 = local_44;
            }
            else {
              *ppAVar3 = pAVar9;
              *(int *)(iVar12 + 0x218) = *(int *)(iVar12 + 0x218) + 4;
            }
            iVar12 = *(int *)(*(int *)(iVar1 + 0xcc) + local_40 * 4);
            puVar11 = (undefined4 *)(iVar12 + 8);
            if (0xf < *(uint *)(iVar12 + 0x1c)) {
              puVar11 = (undefined4 *)*puVar11;
            }
            debugPrint("DETAIL","%s: added explosion sensor data (%d) instance at %f, %f",puVar11,
                       *(undefined4 *)pAVar9,(double)param_3,(double)param_4);
          }
          local_40 = local_40 + 1;
          iVar12 = *(int *)(iVar1 + 0xcc);
          pGVar15 = g_gameData;
        } while (local_40 < (uint)(*(int *)(iVar1 + 0xd0) - iVar12 >> 2));
      }
      local_48 = local_48 + 1;
      puVar7 = puStack_20;
    } while (local_48 < (uint)(*(int *)(pGVar15 + 0x40) - *(int *)(pGVar15 + 0x3c) >> 2));
  }
  puStack_20 = puVar7;
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall GameLogic::explosion(enum EDamageType::DamageType,class Sector *,class
// cocos2d::Vec2,float,class Ship *,class Ship *)

void __thiscall
GameLogic::explosion
          (undefined4 param_1_00,int param_1,int param_2,int param_4,undefined4 param_5,
          float param_6,float param_7)

{
  SyntheticObject *this;
  Ship *pSVar1;
  int *piVar2;
  undefined3 uVar3;
  char cVar4;
  AnimationFrames **ppAVar5;
  SoundEngine *this_00;
  int iVar6;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_01;
  LogSystem *extraout_ECX_01;
  LogSystem *extraout_ECX_02;
  LogSystem *this_02;
  int iVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  AnimationFrames **ppAVar10;
  Ship *pSVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  float fVar15;
  float in_XMM3_Da;
  Sound SVar16;
  void *local_58;
  AnimationFrames **local_54;
  AnimationFrames **local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  Stats *local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  AnimationFrames **local_1c;
  void *local_18;
  Ship *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b216b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (void *)0x0;
  ppAVar10 = (AnimationFrames **)0x0;
  local_58 = (void *)0x0;
  local_54 = (AnimationFrames **)0x0;
  local_1c = (AnimationFrames **)0x0;
  local_50 = (AnimationFrames **)0x0;
  uVar12 = 0;
  uStack_7 = 0;
  uVar3 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  this_01 = *(GameLogic **)(param_2 + 0x9c);
  local_2c = in_XMM3_Da;
  if (*(int *)(param_2 + 0xa0) - (int)this_01 >> 2 != 0) {
    local_24 = in_XMM3_Da / 100.0;
    do {
      local_38 = (Stats *)(float)*(double *)(*(int *)(this_01 + uVar12 * 4) + 0x30);
      local_3c = (float)*(double *)(*(int *)(this_01 + uVar12 * 4) + 0x28);
      local_8 = 2;
      local_28 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&param_6);
      local_14 = (Ship *)(0x5f3759df - ((uint)local_28 >> 1));
      local_8 = 1;
      fVar15 = (1.5 - local_28 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
               local_28;
      if (0.1 <= (1.0 / (fVar15 * fVar15)) * local_24) {
        debugPrint("WORLD","Synthetic object #%d has been destroyed by an explosion");
        ppAVar5 = (AnimationFrames **)(*(int *)(param_2 + 0x9c) + uVar12 * 4);
        if (local_1c == ppAVar10) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)&local_58,ppAVar10,ppAVar5);
          local_1c = local_50;
          ppAVar10 = local_54;
        }
        else {
          *ppAVar10 = *ppAVar5;
          local_54 = ppAVar10 + 1;
          ppAVar10 = local_54;
        }
      }
      uVar12 = uVar12 + 1;
      this_01 = *(GameLogic **)(param_2 + 0x9c);
    } while (uVar12 < (uint)(*(int *)(param_2 + 0xa0) - (int)this_01 >> 2));
    local_18 = local_58;
    uVar3 = uStack_7;
  }
  uStack_7 = uVar3;
  uVar13 = 0;
  uVar12 = (int)ppAVar10 - (int)local_18 >> 2;
  local_58 = local_18;
  if (uVar12 != 0) {
    do {
      pvVar8 = local_18;
      removeSyntheticObject(this_01,*(SyntheticObject **)((int)local_18 + uVar13 * 4));
      debugPrint("WORLD","Removed synthetic object %d from sector %d",
                 *(undefined4 *)(*(int *)((int)pvVar8 + uVar13 * 4) + 0x44));
      this = *(SyntheticObject **)((int)pvVar8 + uVar13 * 4);
      this_01 = extraout_ECX;
      if (this != (SyntheticObject *)0x0) {
        SyntheticObject::~SyntheticObject(this);
        operator_delete(this,(nothrow_t *)0xf0);
        this_01 = extraout_ECX_00;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
  }
  local_28 = 0.0;
  iVar7 = *(int *)(param_2 + 0xcc);
  if (*(int *)(param_2 + 0xd0) - iVar7 >> 2 != 0) {
    do {
      fVar15 = local_28;
      iVar6 = *(int *)(iVar7 + (int)local_28 * 4);
      if (iVar6 != param_4) {
        if (*(char *)(iVar6 + 0x234) != '\0') {
          local_40 = (float)*(double *)(iVar6 + 0x30);
          local_44 = (float)*(double *)(iVar6 + 0x28);
          local_8 = 3;
          local_24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_44,(Vec2 *)&param_6);
          local_14 = (Ship *)(0x5f3759df - ((uint)local_24 >> 1));
          local_8 = 1;
          iVar7 = *(int *)(*(int *)(param_2 + 0xcc) + (int)fVar15 * 4);
          if (5.0 <= (1.5 - local_24 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
                     local_24) {
            angleInDegreesFrom((float)*(double *)(iVar7 + 0x28),(float)*(double *)(iVar7 + 0x30),
                               param_6,param_7);
            this_02 = extraout_ECX_02;
          }
          else {
            angleInDegreesFrom((float)*(double *)(iVar7 + 0x28),(float)*(double *)(iVar7 + 0x30),
                               param_6,param_7);
            this_02 = extraout_ECX_01;
          }
          LogSystem::addLogLine(this_02,*(LogPriority *)(iVar7 + 0x224),(char *)0x3);
          iVar7 = -1;
          SVar16 = 1;
          pSVar11 = *(Ship **)(*(int *)(param_2 + 0xcc) + (int)fVar15 * 4);
          this_00 = Singleton<>::getInstance();
          SoundEngine::playSound(this_00,pSVar11,SVar16,iVar7);
          iVar7 = *(int *)(param_2 + 0xcc);
        }
        pSVar1 = *(Ship **)(iVar7 + (int)fVar15 * 4);
        pSVar11 = pSVar1 + 8;
        local_4c = (float)*(double *)(pSVar1 + 0x28);
        local_48 = (float)*(double *)(pSVar1 + 0x30);
        local_8 = 4;
        local_14 = pSVar1;
        local_20 = cocos2d::Vec2::getDistance((Vec2 *)&local_4c,(Vec2 *)&param_6);
        local_8 = 1;
        fVar15 = local_20;
        if (param_1 == 1) {
          fVar15 = local_20 * 0.25;
        }
        local_24 = (1.0 / (fVar15 * fVar15)) * (local_2c / 100.0);
        if (0.1 <= local_24) {
          if (0xf < *(uint *)(pSVar1 + 0x1c)) {
            pSVar11 = *(Ship **)pSVar11;
          }
          debugPrint("GAME","Vessel \'%s\' was hit by %s at %.2f, %.2f",pSVar11,
                     (&PTR_s_Explosive_005d01f8)[param_1],(double)param_6,(double)param_7);
          debugPrint("GAME","Modified strength is %f",(double)local_24);
          iVar7 = *(int *)(pSVar1 + 0x40);
          fVar15 = 0.0;
          uVar12 = 0;
          local_20 = 0.0;
          iVar6 = *(int *)(iVar7 + 0x3c);
          local_34 = *(int *)(iVar7 + 0x40) - iVar6 >> 2;
          if (local_34 != 0) {
            do {
              piVar2 = *(int **)(iVar6 + uVar12 * 4);
              if ((*(char *)((int)piVar2 + 99) != '\0') &&
                 (cVar4 = (**(code **)(*piVar2 + 0x14))(), cVar4 == '\0')) {
                fVar15 = (float)((int)fVar15 + 1);
              }
              uVar12 = uVar12 + 1;
              iVar6 = *(int *)(iVar7 + 0x3c);
            } while (uVar12 < (uint)(*(int *)(iVar7 + 0x40) - iVar6 >> 2));
            iVar7 = *(int *)(local_14 + 0x40);
            local_20 = fVar15;
          }
          iVar6 = *(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2;
          local_30 = iVar6 * 100;
          if ((local_30 != 0) && (uVar12 = 0, iVar6 != 0)) {
            do {
              ComponentInterfaceInstance::damagePercent
                        (*(ComponentInterfaceInstance **)
                          (*(int *)(*(int *)(iVar7 + 0x3c) + uVar12 * 4) + 0xc));
              uVar12 = uVar12 + 1;
            } while (uVar12 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
          }
          debugPrint("GAME","Ship\'s pre-damage state is %d percent, with %d/%d modules working.");
          pSVar11 = local_14;
          dVar14 = (double)(ulonglong)(uint)param_6;
          Ship::trueAngleToPosition(local_14,param_6,param_7);
          dVar14 = dVar14 - (double)*(float *)(pSVar11 + 0x120);
          if (dVar14 < 0.0) {
            dVar14 = dVar14 + 360.0;
          }
          cVar4 = (**(code **)(*(int *)pSVar11 + 0xc))((int)dVar14,local_24,param_1);
          if (cVar4 == '\0') {
            iVar7 = *(int *)(pSVar11 + 0x40);
            uVar12 = 0;
            fVar15 = 0.0;
            local_24 = 0.0;
            iVar6 = *(int *)(iVar7 + 0x3c);
            local_30 = *(int *)(iVar7 + 0x40) - iVar6 >> 2;
            if (local_30 != 0) {
              do {
                piVar2 = *(int **)(iVar6 + uVar12 * 4);
                if ((*(char *)((int)piVar2 + 99) != '\0') &&
                   (cVar4 = (**(code **)(*piVar2 + 0x14))(), cVar4 == '\0')) {
                  fVar15 = (float)((int)fVar15 + 1);
                }
                uVar12 = uVar12 + 1;
                iVar6 = *(int *)(iVar7 + 0x3c);
              } while (uVar12 < (uint)(*(int *)(iVar7 + 0x40) - iVar6 >> 2));
              iVar7 = *(int *)(local_14 + 0x40);
              local_24 = fVar15;
            }
            iVar6 = *(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2;
            local_34 = iVar6 * 100;
            if ((local_34 != 0) && (uVar12 = 0, iVar6 != 0)) {
              do {
                ComponentInterfaceInstance::damagePercent
                          (*(ComponentInterfaceInstance **)
                            (*(int *)(*(int *)(iVar7 + 0x3c) + uVar12 * 4) + 0xc));
                uVar12 = uVar12 + 1;
              } while (uVar12 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
            }
            debugPrint("GAME","Ship\'s post-damage state is %d percent, with %d/%d modules working."
                      );
            debugPrint("GAME","Damage done.");
          }
          else if ((((*(int *)(pSVar11 + 0x44) != 0) &&
                    (*(int *)(*(int *)(pSVar11 + 0x44) + 0x70) == 3)) &&
                   (*(int *)(pSVar11 + 0x39c) != 0)) &&
                  (*(char *)(*(int *)(pSVar11 + 0x39c) + 0x234) != '\0')) {
            if (Singleton<Stats>::instance == (Stats *)0x0) {
              local_38 = operator_new(0x58);
              local_8 = 5;
              Singleton<Stats>::instance = (Stats *)Stats::Stats(local_38);
              local_8 = 1;
            }
            *(int *)(Singleton<Stats>::instance + 0x28) =
                 *(int *)(Singleton<Stats>::instance + 0x28) + 1;
          }
        }
      }
      iVar7 = *(int *)(param_2 + 0xcc);
      local_28 = (float)((int)local_28 + 1);
    } while ((uint)local_28 < (uint)(*(int *)(param_2 + 0xd0) - iVar7 >> 2));
  }
  addExplosionSensorData();
  if (local_18 != (void *)0x0) {
    pnVar9 = (nothrow_t *)((int)local_1c - (int)local_18 & 0xfffffffc);
    pvVar8 = local_18;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_18 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)local_18 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::clearPlayerBounties(void)

void __thiscall GameLogic::clearPlayerBounties(GameLogic *this)

{
  Bounty *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = *(undefined4 **)(g_gameData + 0x130);
  uVar1 = (uint)((int)*(undefined4 **)(g_gameData + 0x134) + (3 - (int)puVar2)) >> 2;
  if (*(undefined4 **)(g_gameData + 0x134) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (Bounty *)*puVar2;
      if (this_00 != (Bounty *)0x0) {
        Bounty::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(g_gameData + 0x134) = *(undefined4 *)(g_gameData + 0x130);
  return;
}


// public: void __thiscall GameLogic::clearPlayerContracts(void)

void __thiscall GameLogic::clearPlayerContracts(GameLogic *this)

{
  Contract *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = *(undefined4 **)(g_gameData + 0x13c);
  uVar1 = (uint)((int)*(undefined4 **)(g_gameData + 0x140) + (3 - (int)puVar2)) >> 2;
  if (*(undefined4 **)(g_gameData + 0x140) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (Contract *)*puVar2;
      if (this_00 != (Contract *)0x0) {
        Contract::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(g_gameData + 0x140) = *(undefined4 *)(g_gameData + 0x13c);
  return;
}


// public: bool __thiscall GameLogic::playerHasContract(void)

bool __thiscall GameLogic::playerHasContract(GameLogic *this)

{
  return (*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) & 0xfffffffcU) != 0;
}


// public: int __thiscall GameLogic::contractAmountLeftToDeliver(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

int __thiscall GameLogic::contractAmountLeftToDeliver(undefined4 param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  nothrow_t *pnVar3;
  char *pcVar4;
  uint uVar5;
  uint unaff_ESI;
  uint uVar6;
  int iVar7;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  
  uVar5 = in_stack_00000030;
  pcVar4 = in_stack_0000001c;
  iVar7 = *(int *)(g_gameData + 0x13c);
  uVar6 = 0;
  if (*(int *)(g_gameData + 0x140) - iVar7 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar7 + uVar6 * 4);
      pcVar2 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar2 = param_2;
      }
      bVar1 = std::_Traits_equal<>(pcVar2,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar1) {
        bVar1 = std::_Traits_equal<>("",0,unaff_EDI,unaff_ESI);
        if (!bVar1) {
          pcVar2 = (char *)&stack0x0000001c;
          if (0xf < uVar5) {
            pcVar2 = pcVar4;
          }
          bVar1 = std::_Traits_equal<>(pcVar2,in_stack_0000002c,unaff_EDI,unaff_ESI);
          if (!bVar1) goto LAB_0040ff7a;
        }
        iVar7 = *(int *)(*(int *)(iVar7 + 0x58) + 0x20);
        goto LAB_0040ffab;
      }
LAB_0040ff7a:
      uVar6 = uVar6 + 1;
      iVar7 = *(int *)(g_gameData + 0x13c);
    } while (uVar6 < (uint)(*(int *)(g_gameData + 0x140) - iVar7 >> 2));
  }
  iVar7 = 0;
LAB_0040ffab:
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) goto LAB_00410017;
    }
    operator_delete(pcVar4,pnVar3);
    uVar5 = in_stack_00000030;
    pcVar4 = in_stack_0000001c;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  if (0xf < uVar5) {
    pnVar3 = (nothrow_t *)(uVar5 + 1);
    pcVar2 = pcVar4;
    if ((nothrow_t *)0xfff < pnVar3) {
      pcVar2 = *(char **)(pcVar4 + -4);
      pnVar3 = (nothrow_t *)(uVar5 + 0x24);
      if ((char *)0x1f < pcVar4 + (-4 - (int)pcVar2)) {
LAB_00410017:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar2,pnVar3);
  }
  return iVar7;
}


// public: bool __thiscall GameLogic::hasPassenger(void)

bool __thiscall GameLogic::hasPassenger(GameLogic *this)

{
  bool bVar1;
  FlagManager *pFVar2;
  basic_string<> local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  uint uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2198;
  local_10 = ExceptionList;
  uStack_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(g_gameData + 0x128) == 0) {
    local_14 = local_30;
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_30,"has_passenger",0xd);
    local_8 = 0;
    pFVar2 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (!bVar1) {
      ExceptionList = local_10;
      return false;
    }
  }
  ExceptionList = local_10;
  return true;
}


// public: int __thiscall GameLogic::getDeliveringGoodValueInPlayerContracts(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

int __thiscall GameLogic::getDeliveringGoodValueInPlayerContracts(undefined4 param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  nothrow_t *pnVar3;
  char *pcVar4;
  uint unaff_ESI;
  uint uVar5;
  int iVar6;
  char *unaff_EDI;
  char *pcVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  
  pcVar4 = in_stack_0000001c;
  pcVar7 = param_2;
  iVar6 = *(int *)(g_gameData + 0x13c);
  uVar5 = 0;
  if (*(int *)(g_gameData + 0x140) - iVar6 >> 2 != 0) {
    do {
      iVar6 = *(int *)(iVar6 + uVar5 * 4);
      pcVar2 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar2 = pcVar7;
      }
      bVar1 = std::_Traits_equal<>(pcVar2,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar1) {
        pcVar2 = (char *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pcVar2 = pcVar4;
        }
        bVar1 = std::_Traits_equal<>(pcVar2,in_stack_0000002c,unaff_EDI,unaff_ESI);
        if (bVar1) {
          iVar6 = *(int *)(*(int *)(iVar6 + 0x58) + 0x24);
          goto LAB_00410190;
        }
      }
      uVar5 = uVar5 + 1;
      iVar6 = *(int *)(g_gameData + 0x13c);
    } while (uVar5 < (uint)(*(int *)(g_gameData + 0x140) - iVar6 >> 2));
  }
  iVar6 = -1;
LAB_00410190:
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar7;
    if ((nothrow_t *)0xfff < pnVar3) {
      pcVar4 = *(char **)(pcVar7 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar7 + (-4 - (int)pcVar4)) goto LAB_004101f9;
    }
    operator_delete(pcVar4,pnVar3);
    pcVar4 = in_stack_0000001c;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar3 = (nothrow_t *)(in_stack_00000030 + 1);
    pcVar7 = pcVar4;
    if ((nothrow_t *)0xfff < pnVar3) {
      pcVar7 = *(char **)(pcVar4 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((char *)0x1f < pcVar4 + (-4 - (int)pcVar7)) {
LAB_004101f9:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar7,pnVar3);
  }
  return iVar6;
}


// public: int __thiscall GameLogic::getPurchaseGoodValueInPlayerContracts(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

int __thiscall GameLogic::getPurchaseGoodValueInPlayerContracts(undefined4 param_1,char *param_2)

{
  basic_string<> *pbVar1;
  void *pvVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  Good *pGVar6;
  char *pcVar7;
  int iVar8;
  nothrow_t *pnVar9;
  void *pvVar10;
  GameData *pGVar11;
  uint unaff_EDI;
  uint uVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  basic_string<> abStack_5c [12];
  undefined4 uStack_50;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b21d0;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  uVar12 = 0;
  iVar8 = *(int *)(g_gameData + 0x13c);
  pGVar11 = g_gameData;
  local_14 = pcVar5;
  if (*(int *)(g_gameData + 0x140) - iVar8 >> 2 != 0) {
    do {
      iVar8 = *(int *)(iVar8 + uVar12 * 4);
      pcVar7 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar7 = param_2;
      }
      uStack_50 = 0x410299;
      bVar4 = std::_Traits_equal<>(pcVar7,in_stack_00000014,pcVar5,unaff_EDI);
      if ((bVar4) && (pbVar1 = *(basic_string<> **)(iVar8 + 0x58), *(int *)(pbVar1 + 0x18) != 0)) {
        std::basic_string<>::basic_string<>(abStack_5c,pbVar1);
        pGVar6 = GameData::getGoodWithShortName();
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)local_2c,*(basic_string<> **)(pGVar6 + 0x1c));
        uVar3 = local_18;
        pvVar2 = local_2c[0];
        pcVar7 = (char *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pcVar7 = in_stack_0000001c;
        }
        uStack_50 = 0x4102f2;
        bVar4 = std::_Traits_equal<>(pcVar7,in_stack_0000002c,pcVar5,unaff_EDI);
        if (0xf < uVar3) {
          pnVar9 = (nothrow_t *)(uVar3 + 1);
          pvVar10 = pvVar2;
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar10 = *(void **)((int)pvVar2 + -4);
            pnVar9 = (nothrow_t *)(uVar3 + 0x24);
            if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar10))) goto LAB_00410374;
          }
          uStack_50 = 0x410321;
          operator_delete(pvVar10,pnVar9);
        }
        pGVar11 = g_gameData;
        if (bVar4) break;
      }
      uVar12 = uVar12 + 1;
      iVar8 = *(int *)(pGVar11 + 0x13c);
    } while (uVar12 < (uint)(*(int *)(pGVar11 + 0x140) - iVar8 >> 2));
  }
  if (0xf < in_stack_00000018) {
    pnVar9 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar5 = param_2;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar5 = *(char **)(param_2 + -4);
      pnVar9 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar5)) {
LAB_00410374:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_50 = 0x410397;
    operator_delete(pcVar5,pnVar9);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar9 = (nothrow_t *)(in_stack_00000030 + 1);
    pcVar5 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar5 = *(char **)(in_stack_0000001c + -4);
      pnVar9 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((char *)0x1f < in_stack_0000001c + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_50 = 0x4103df;
    operator_delete(pcVar5,pnVar9);
  }
  ExceptionList = local_10;
  iVar8 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return iVar8;
}


// public: void __thiscall GameLogic::trackGoodsBought(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall GameLogic::trackGoodsBought(undefined4 param_1,int param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ContractCargoInstance *this;
  bool bVar4;
  char *pcVar5;
  NotesManager *pNVar6;
  char *pcVar7;
  char ****ppppcVar8;
  GameLogic *extraout_ECX;
  char ****ppppcVar9;
  GameLogic *extraout_ECX_00;
  GameLogic *this_00;
  nothrow_t *pnVar10;
  uint uVar11;
  uint unaff_EDI;
  char *pcVar12;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  char *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  basic_string<> abStack_58 [4];
  undefined4 uStack_54;
  char ***local_30 [4];
  uint local_20;
  uint local_1c;
  NotesManager *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2218;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  pNVar6 = Singleton<>::instance;
  if (Singleton<>::instance == (NotesManager *)0x0) {
    pNVar6 = operator_new(4);
    Singleton<>::instance = pNVar6;
    *(undefined4 *)pNVar6 = 0xffffffff;
    local_18 = pNVar6;
  }
  pcVar12 = param_3;
  *(undefined4 *)pNVar6 = 0xffffffff;
  uVar11 = 0;
  iVar2 = *(int *)(g_gameData + 0x13c);
  if (*(int *)(g_gameData + 0x140) - iVar2 >> 2 != 0) {
    do {
      if (*(int *)(*(int *)(*(int *)(iVar2 + uVar11 * 4) + 0x54) + 0x18) == 0) {
        pcVar7 = (char *)&param_3;
        if (0xf < in_stack_0000001c) {
          pcVar7 = pcVar12;
        }
        bVar4 = std::_Traits_equal<>(pcVar7,in_stack_00000018,pcVar5,unaff_EDI);
        if (bVar4) {
          pcVar7 = (char *)&stack0x00000020;
          if (0xf < in_stack_00000034) {
            pcVar7 = in_stack_00000020;
          }
          bVar4 = std::_Traits_equal<>(pcVar7,in_stack_00000030,pcVar5,unaff_EDI);
          if (bVar4) {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_30,(basic_string<> *)&stack0x00000020);
            iVar2 = *(int *)(*(int *)(g_gameData + 0x13c) + uVar11 * 4);
            local_8 = CONCAT31(local_8._1_3_,2);
            std::basic_string<>::basic_string<>(abStack_58,(basic_string<> *)local_30);
            GameData::getGoodWithShortName();
            ppppcVar9 = (char ****)local_30[0];
            iVar3 = *(int *)(iVar2 + 0x58);
            if (iVar3 != 0) {
              ppppcVar8 = local_30;
              if (0xf < local_1c) {
                ppppcVar8 = (char ****)local_30[0];
              }
              bVar4 = std::_Traits_equal<>((char *)ppppcVar8,local_20,pcVar5,unaff_EDI);
              if (bVar4) {
                piVar1 = (int *)(iVar3 + 0x18);
                *piVar1 = *piVar1 - param_2;
                uStack_54 = 0x410599;
                debugPrint("WORLD","%d units of cargo %s removed from contract.");
                ppppcVar9 = (char ****)local_30[0];
                if (*(int *)(*(int *)(iVar2 + 0x58) + 0x18) < 1) {
                  debugPrint("WORLD","Cargo %s completed from contract.");
                  this = *(ContractCargoInstance **)(iVar2 + 0x58);
                  this_00 = (GameLogic *)0x0;
                  if (this != (ContractCargoInstance *)0x0) {
                    ContractCargoInstance::_scalar_deleting_destructor_(this,(uint)this);
                    this_00 = extraout_ECX;
                  }
                  *(undefined4 *)(iVar2 + 0x58) = 0;
                  local_8 = CONCAT31(local_8._1_3_,1);
                  if (0xf < local_1c) {
                    pnVar10 = (nothrow_t *)(local_1c + 1);
                    ppppcVar9 = (char ****)local_30[0];
                    if ((nothrow_t *)0xfff < pnVar10) {
                      ppppcVar9 = (char ****)local_30[0][-1];
                      pnVar10 = (nothrow_t *)(local_1c + 0x24);
                      if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
                        _invalid_parameter_noinfo_noreturn();
                      }
                    }
                    operator_delete(ppppcVar9,pnVar10);
                    this_00 = extraout_ECX_00;
                  }
                  checkContracts(this_00);
                  pcVar12 = param_3;
                  break;
                }
              }
            }
            pcVar12 = param_3;
            if (0xf < local_1c) {
              pnVar10 = (nothrow_t *)(local_1c + 1);
              ppppcVar8 = ppppcVar9;
              if ((nothrow_t *)0xfff < pnVar10) {
                ppppcVar8 = (char ****)ppppcVar9[-1];
                pnVar10 = (nothrow_t *)(local_1c + 0x24);
                if ((char *)0x1f < (char *)((int)ppppcVar9 + (-4 - (int)ppppcVar8))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(ppppcVar8,pnVar10);
              pcVar12 = param_3;
            }
            break;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)(*(int *)(g_gameData + 0x140) - iVar2 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pnVar10 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar5 = pcVar12;
    if ((nothrow_t *)0xfff < pnVar10) {
      pcVar5 = *(char **)(pcVar12 + -4);
      pnVar10 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < pcVar12 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar5,pnVar10);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (char *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar10 = (nothrow_t *)(in_stack_00000034 + 1);
    pcVar5 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar10) {
      pcVar5 = *(char **)(in_stack_00000020 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if ((char *)0x1f < in_stack_00000020 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar5,pnVar10);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::checkContracts(void)

void __thiscall GameLogic::checkContracts(GameLogic *this)

{
  MetaGameAction *pMVar1;
  void *pvVar2;
  Contract *this_00;
  uint uVar3;
  undefined4 *puVar4;
  MetaGameAction **ppMVar5;
  nothrow_t *pnVar6;
  GameData *pGVar7;
  undefined4 *puVar8;
  size_t sVar9;
  uint uVar10;
  MetaGameAction **ppMVar11;
  int iVar12;
  undefined4 *local_30;
  MetaGameAction **local_2c;
  MetaGameAction **local_28;
  void *local_20;
  MetaGameAction **local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2248;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppMVar5 = (MetaGameAction **)0x0;
  ppMVar11 = (MetaGameAction **)0x0;
  local_18 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = (MetaGameAction **)0x0;
  local_1c = (MetaGameAction **)0x0;
  local_28 = (MetaGameAction **)0x0;
  local_8 = 0;
  uVar10 = 0;
  iVar12 = *(int *)(g_gameData + 0x13c);
  pGVar7 = g_gameData;
  if (*(int *)(g_gameData + 0x140) - iVar12 >> 2 != 0) {
    do {
      pMVar1 = *(MetaGameAction **)(iVar12 + uVar10 * 4);
      if (*(int *)(pMVar1 + 0x58) == 0) {
        if (ppMVar5 == ppMVar11) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)&local_30,ppMVar11,(MetaGameAction **)(iVar12 + uVar10 * 4));
          ppMVar5 = local_28;
          pGVar7 = g_gameData;
          ppMVar11 = local_2c;
        }
        else {
          *ppMVar11 = pMVar1;
          local_2c = ppMVar11 + 1;
          ppMVar11 = local_2c;
        }
      }
      uVar10 = uVar10 + 1;
      iVar12 = *(int *)(pGVar7 + 0x13c);
    } while (uVar10 < (uint)(*(int *)(pGVar7 + 0x140) - iVar12 >> 2));
    local_18 = local_30;
    local_1c = ppMVar5;
  }
  puVar8 = local_18;
  local_30 = local_18;
  for (iVar12 = (int)ppMVar11 - (int)local_18 >> 2; iVar12 != 0; iVar12 = iVar12 + -1) {
    local_14 = puVar8;
    Contract::performContractCompletion((Contract *)*puVar8);
    local_20 = *(void **)(g_gameData + 0x140);
    puVar4 = (undefined4 *)std::remove<>(*(undefined4 *)(g_gameData + 0x13c),local_20,uVar3);
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != local_20) {
      sVar9 = *(int *)(g_gameData + 0x140) - (int)local_20;
      memmove(pvVar2,local_20,sVar9);
      *(size_t *)(g_gameData + 0x140) = sVar9 + (int)pvVar2;
      puVar8 = local_14;
    }
    this_00 = (Contract *)*puVar8;
    if (this_00 != (Contract *)0x0) {
      Contract::_scalar_deleting_destructor_(this_00,(uint)this_00);
    }
    puVar8 = puVar8 + 1;
    local_14 = puVar8;
  }
  if (local_18 != (undefined4 *)0x0) {
    pnVar6 = (nothrow_t *)((int)local_1c - (int)local_18 & 0xfffffffc);
    puVar8 = local_18;
    if ((nothrow_t *)0xfff < pnVar6) {
      puVar8 = (undefined4 *)local_18[-1];
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar8,pnVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall GameLogic::playerHostilePiratesInSector(int)

bool __thiscall GameLogic::playerHostilePiratesInSector(GameLogic *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  piVar2 = *(int **)(g_gameData + 0x9c);
  uVar4 = *(int *)(g_gameData + 0xa0) - (int)piVar2 >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *piVar2;
      if ((*(char *)(iVar1 + 0x18) != '\0') && (**(int **)(iVar1 + 0x1c) == param_1)) {
        return (bool)*(undefined1 *)(iVar1 + 0x74);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar4);
  }
  return false;
}


// public: bool __thiscall GameLogic::zoneActive(class Zone *)

bool __thiscall GameLogic::zoneActive(GameLogic *this,Zone *param_1)

{
  uint uVar1;
  int *piVar2;
  GameData *pGVar3;
  bool bVar4;
  uint unaff_ESI;
  Zone *pZVar5;
  int *piVar6;
  char *unaff_EDI;
  
  pZVar5 = param_1 + 0x1c;
  uVar1 = *(uint *)(param_1 + 0x2c);
  bVar4 = std::_Traits_equal<>("",0,unaff_EDI,unaff_ESI);
  pGVar3 = g_gameData;
  if (!bVar4) {
    if (0xf < *(uint *)(param_1 + 0x30)) {
      pZVar5 = *(Zone **)pZVar5;
    }
    bVar4 = std::_Traits_equal<>((char *)pZVar5,uVar1,unaff_EDI,unaff_ESI);
    if (!bVar4) {
      return false;
    }
  }
  if (*param_1 != (Zone)0x0) {
    return true;
  }
  piVar6 = *(int **)(pGVar3 + 0x9c);
  piVar2 = *(int **)(pGVar3 + 0xa0);
  do {
    if (piVar6 == piVar2) {
      return false;
    }
    if (*(char *)(*piVar6 + 0x18) != '\0') {
      pZVar5 = param_1 + 4;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        pZVar5 = *(Zone **)pZVar5;
      }
      bVar4 = std::_Traits_equal<>((char *)pZVar5,*(uint *)(param_1 + 0x14),unaff_EDI,unaff_ESI);
      if (bVar4) {
        return true;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}


// public: void __thiscall GameLogic::writeObituary(void)

void __thiscall GameLogic::writeObituary(GameLogic *this)

{
  GameLogic *pGVar1;
  char *****pppppcVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char ******ppppppcVar8;
  basic_string<> *pbVar9;
  undefined4 ******ppppppuVar10;
  int iVar11;
  char *pcVar12;
  basic_string<> *pbVar13;
  char ******ppppppcVar14;
  GameData *pGVar15;
  char *pcVar16;
  GameData *pGVar17;
  void *pvVar18;
  int iVar19;
  nothrow_t *pnVar20;
  int *piVar21;
  int *piVar22;
  GameData *pGVar23;
  uint unaff_EDI;
  uint uVar24;
  char *****local_74 [4];
  uint local_64;
  uint local_60;
  basic_string<> *local_5c [4];
  uint local_4c;
  uint local_48;
  undefined4 *****local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  pGVar1 = g_gameLogic;
  puStack_c = &DAT_005b22f8;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  puVar7 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar7 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      piVar21 = (int *)*puVar7;
      if (*piVar21 == *(int *)(g_gameData + 0x178)) goto LAB_004109ff;
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(g_gameData + 0x40));
  }
  piVar21 = (int *)0x0;
LAB_004109ff:
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (basic_string<> *)((uint)local_5c[0] & 0xffffff00);
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (char *****)((uint)local_74[0] & 0xffffff00);
  local_8 = 1;
  uStack_7 = 0;
  if (g_gameData[0x170] == (GameData)0x0) {
    ppppppcVar8 = (char ******)(*(int *)(g_gameData + 0xcc) + 0x1b0);
  }
  else {
    ppppppcVar8 = (char ******)(*(int *)(g_gameData + 0xcc) + 0x180);
  }
  local_14 = pcVar6;
  if (local_74 != ppppppcVar8) {
    ppppppcVar14 = ppppppcVar8;
    if ((char *****)0xf < ppppppcVar8[5]) {
      ppppppcVar14 = (char ******)*ppppppcVar8;
    }
    std::basic_string<>::assign
              ((basic_string<> *)local_74,(char *)ppppppcVar14,(uint)ppppppcVar8[4]);
  }
  uVar3 = local_60;
  uVar24 = local_64;
  bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
  if (bVar5) {
    if (piVar21[0x46] == 2) {
      uVar24 = rand();
      uVar24 = uVar24 & 0x80000001;
      bVar5 = uVar24 == 0;
      if ((int)uVar24 < 0) {
        bVar5 = (uVar24 - 1 | 0xfffffffe) == 0xffffffff;
      }
      pGVar17 = g_gameData + 0x1ac;
      if (bVar5) {
        if (0xf < *(uint *)(g_gameData + 0x1c0)) {
          pGVar17 = *(GameData **)pGVar17;
        }
        pGVar23 = g_gameData + 0x194;
        if (0xf < *(uint *)(g_gameData + 0x1a8)) {
          pGVar23 = *(GameData **)pGVar23;
        }
        pGVar15 = g_gameData + 0x17c;
        if (0xf < *(uint *)(g_gameData + 400)) {
          pGVar15 = *(GameData **)pGVar15;
        }
        piVar22 = piVar21 + 7;
        if (0xf < (uint)piVar21[0xc]) {
          piVar22 = (int *)*piVar22;
        }
        pcVar12 = (char *)strUsingArgs((char *)local_44,
                                       "`%%A scout vessel engaging in mapping the uninhabited solar system %s last week found the wreckage of a vessel, the %s.\nShe was a %s-class %s.\n\n"
                                       ,piVar22,pGVar15,pGVar23,pGVar17);
        local_8 = 2;
        uVar24 = *(uint *)(pcVar12 + 0x14);
      }
      else {
        if (0xf < *(uint *)(g_gameData + 0x1c0)) {
          pGVar17 = *(GameData **)pGVar17;
        }
        pGVar23 = g_gameData + 0x194;
        if (0xf < *(uint *)(g_gameData + 0x1a8)) {
          pGVar23 = *(GameData **)pGVar23;
        }
        pGVar15 = g_gameData + 0x17c;
        if (0xf < *(uint *)(g_gameData + 400)) {
          pGVar15 = *(GameData **)pGVar15;
        }
        piVar22 = piVar21 + 7;
        if (0xf < (uint)piVar21[0xc]) {
          piVar22 = (int *)*piVar22;
        }
        pcVar12 = (char *)strUsingArgs((char *)local_44,
                                       "`%%Yesterday, a science research vessel scanning for ore in %s stumbled upon the wreckage of the %s, a %s-class %s.\n\n"
                                       ,piVar22,pGVar15,pGVar23,pGVar17);
        local_8 = 3;
        uVar24 = *(uint *)(pcVar12 + 0x14);
      }
    }
    else {
      uVar24 = rand();
      uVar24 = uVar24 & 0x80000001;
      bVar5 = uVar24 == 0;
      if ((int)uVar24 < 0) {
        bVar5 = (uVar24 - 1 | 0xfffffffe) == 0xffffffff;
      }
      pGVar17 = g_gameData + 0x1ac;
      if (bVar5) {
        if (0xf < *(uint *)(g_gameData + 0x1c0)) {
          pGVar17 = *(GameData **)pGVar17;
        }
        pGVar23 = g_gameData + 0x194;
        if (0xf < *(uint *)(g_gameData + 0x1a8)) {
          pGVar23 = *(GameData **)pGVar23;
        }
        pGVar15 = g_gameData + 0x17c;
        if (0xf < *(uint *)(g_gameData + 400)) {
          pGVar15 = *(GameData **)pGVar15;
        }
        piVar22 = piVar21 + 7;
        if (0xf < (uint)piVar21[0xc]) {
          piVar22 = (int *)*piVar22;
        }
        pcVar12 = (char *)strUsingArgs((char *)local_44,
                                       "`%%Today in %s, authorities found the wreckage of the %s, a %s-class %s.\n\n"
                                       ,piVar22,pGVar15,pGVar23,pGVar17);
        local_8 = 4;
        uVar24 = *(uint *)(pcVar12 + 0x14);
      }
      else {
        if (0xf < *(uint *)(g_gameData + 0x1c0)) {
          pGVar17 = *(GameData **)pGVar17;
        }
        pGVar23 = g_gameData + 0x194;
        if (0xf < *(uint *)(g_gameData + 0x1a8)) {
          pGVar23 = *(GameData **)pGVar23;
        }
        pGVar15 = g_gameData + 0x17c;
        if (0xf < *(uint *)(g_gameData + 400)) {
          pGVar15 = *(GameData **)pGVar15;
        }
        piVar22 = piVar21 + 7;
        if (0xf < (uint)piVar21[0xc]) {
          piVar22 = (int *)*piVar22;
        }
        pcVar12 = (char *)strUsingArgs((char *)local_44,
                                       "`%%Authorities in %s found the wreckage of the %s, a %s-class %s yesterday.\n\n"
                                       ,piVar22,pGVar15,pGVar23,pGVar17);
        local_8 = 5;
        uVar24 = *(uint *)(pcVar12 + 0x14);
      }
    }
    pcVar16 = pcVar12;
    if (0xf < uVar24) {
      pcVar16 = *(char **)pcVar12;
    }
    std::basic_string<>::append((basic_string<> *)local_5c,pcVar16,*(uint *)(pcVar12 + 0x10));
    local_8 = 1;
    if (0xf < local_30) {
      pnVar20 = (nothrow_t *)(local_30 + 1);
      ppppppuVar10 = (undefined4 ******)local_44[0];
      if ((nothrow_t *)0xfff < pnVar20) {
        ppppppuVar10 = (undefined4 ******)local_44[0][-1];
        pnVar20 = (nothrow_t *)(local_30 + 0x24);
        uVar4 = local_8;
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppppuVar10))) goto LAB_00410b73;
      }
      operator_delete(ppppppuVar10,pnVar20);
    }
    local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
    local_30 = 0xf;
    local_34 = 0;
    if (g_gameData[0x1c4] == (GameData)0x0) {
      if (g_gameData[0x1c6] != (GameData)0x0) {
        pcVar12 = (char *)strUsingArgs((char *)local_2c,
                                       "Tearing and warping of the ship\'s hull implies the vessel might have been caught in a dichromatic nebula before finally being destroyed.\n\n"
                                      );
        local_8 = 8;
        uVar24 = *(uint *)(pcVar12 + 0x14);
        goto joined_r0x00410e14;
      }
      if (g_gameData[0x1c5] != (GameData)0x0) {
        pcVar12 = (char *)strUsingArgs((char *)local_2c,
                                       "Subtle electrical scoring on the hull indicates the the vessel may have travelled through a charged nebula."
                                      );
        local_8 = 9;
        uVar24 = *(uint *)(pcVar12 + 0x14);
        goto joined_r0x00410e14;
      }
    }
    else {
      if ((g_gameData[0x1c6] == (GameData)0x0) && (g_gameData[0x1c5] == (GameData)0x0)) {
        pcVar12 = (char *)strUsingArgs((char *)local_2c,
                                       "Evidence of micro-meteor impacts indicate the vessel had recently travelled through an asteroid belt.\n\n"
                                      );
        local_8 = 7;
        uVar24 = *(uint *)(pcVar12 + 0x14);
      }
      else {
        pcVar12 = (char *)strUsingArgs((char *)local_2c,
                                       "Evidence of hull damage from dangerous nebulae and micro-meteor impacts indicate the vessel had recently travelled through dangerous areas of space.\n\n"
                                      );
        local_8 = 6;
        uVar24 = *(uint *)(pcVar12 + 0x14);
      }
joined_r0x00410e14:
      pcVar16 = pcVar12;
      if (0xf < uVar24) {
        pcVar16 = *(char **)pcVar12;
      }
      std::basic_string<>::append((basic_string<> *)local_5c,pcVar16,*(uint *)(pcVar12 + 0x10));
      local_8 = 1;
      if (0xf < local_18) {
        pnVar20 = (nothrow_t *)(local_18 + 1);
        pvVar18 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar20) {
          pvVar18 = *(void **)((int)local_2c[0] + -4);
          pnVar20 = (nothrow_t *)(local_18 + 0x24);
          uVar4 = local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_00410b73;
        }
        operator_delete(pvVar18,pnVar20);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_18 = 0xf;
      local_1c = 0;
    }
    pGVar17 = g_gameData;
    if (g_gameData[0x1c8] == (GameData)0x0) {
      bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
      if (bVar5) {
        pGVar23 = pGVar17 + 0x17c;
        if (0xf < *(uint *)(pGVar17 + 400)) {
          pGVar23 = *(GameData **)pGVar23;
        }
        pcVar12 = (char *)strUsingArgs((char *)local_2c,
                                       "There is no further evidence as to what caused the destruction of the %s, so at this point investigators believe that the most likely cause of destruction was the natural hazards of space-travel.\n\n"
                                       ,pGVar23);
        local_8 = 10;
        pcVar6 = pcVar12;
        if (0xf < *(uint *)(pcVar12 + 0x14)) {
          pcVar6 = *(char **)pcVar12;
        }
        std::basic_string<>::append((basic_string<> *)local_5c,pcVar6,*(uint *)(pcVar12 + 0x10));
        local_8 = 1;
        if (0xf < local_18) {
          pnVar20 = (nothrow_t *)(local_18 + 1);
          pvVar18 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar20) {
            pvVar18 = *(void **)((int)local_2c[0] + -4);
            pnVar20 = (nothrow_t *)(local_18 + 0x24);
            uVar4 = local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_00410b73;
          }
          operator_delete(pvVar18,pnVar20);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      else {
        bVar5 = std::_Traits_equal<>("pirate",6,pcVar6,unaff_EDI);
        pcVar6 = "explosive";
        if (bVar5) {
          if (pGVar17[0x171] == (GameData)0x0) {
            pcVar6 = "EMP";
          }
          std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar6);
          local_8 = 0xb;
          uVar24 = rand();
          uVar24 = uVar24 & 0x80000001;
          bVar5 = uVar24 == 0;
          if ((int)uVar24 < 0) {
            bVar5 = (uVar24 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar5) {
            ppppppuVar10 = local_44;
            if (0xf < local_30) {
              ppppppuVar10 = (undefined4 ******)local_44[0];
            }
            pbVar9 = (basic_string<> *)
                     strUsingArgs((char *)local_2c,
                                  "The final demise of the vessel apears to have been caused by an %s torpedo impacting the vessel. The aggressor is at this point unknown, although investigators believe it may have been related to a common problem of piracy int the sector.\n\n"
                                  ,ppppppuVar10);
            local_8 = 0xc;
          }
          else {
            ppppppuVar10 = local_44;
            if (0xf < local_30) {
              ppppppuVar10 = (undefined4 ******)local_44[0];
            }
            pbVar9 = (basic_string<> *)
                     strUsingArgs((char *)local_2c,
                                  "The ship appears to have been destroyed by an %s-tipped torpedo, although at this time there are no leads as to who might have been responsible for this attack.\n\n"
                                  ,ppppppuVar10);
            local_8 = 0xd;
          }
          std::basic_string<>::append((basic_string<> *)local_5c,pbVar9);
          local_8 = 0xb;
          if (0xf < local_18) {
            pnVar20 = (nothrow_t *)(local_18 + 1);
            pvVar18 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              pvVar18 = *(void **)((int)local_2c[0] + -4);
              pnVar20 = (nothrow_t *)(local_18 + 0x24);
              uVar4 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_00410b73;
            }
            operator_delete(pvVar18,pnVar20);
          }
          local_8 = 1;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_18 = 0xf;
          local_1c = 0;
          if (0xf < local_30) {
            pnVar20 = (nothrow_t *)(local_30 + 1);
            ppppppuVar10 = (undefined4 ******)local_44[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              ppppppuVar10 = (undefined4 ******)local_44[0][-1];
              uVar24 = (int)local_44[0] + (-4 - (int)ppppppuVar10);
joined_r0x004110e1:
              local_18 = 0xf;
              local_1c = 0;
              pnVar20 = (nothrow_t *)(local_30 + 0x24);
              uVar4 = 1;
              if (0x1f < uVar24) goto LAB_00410b73;
            }
LAB_004110e7:
            local_8 = 1;
            local_18 = 0xf;
            local_1c = 0;
            operator_delete(ppppppuVar10,pnVar20);
          }
        }
        else {
          if (pGVar17[0x171] == (GameData)0x0) {
            pcVar6 = "EMP";
          }
          std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar6);
          local_8 = 0xe;
          pGVar17 = g_gameData + 0x1cc;
          if (0xf < *(uint *)(g_gameData + 0x1e0)) {
            pGVar17 = *(GameData **)pGVar17;
          }
          ppppppuVar10 = local_44;
          if (0xf < local_30) {
            ppppppuVar10 = (undefined4 ******)local_44[0];
          }
          pcVar12 = (char *)strUsingArgs((char *)local_2c,
                                         "The vessel was destroyed, it seems, by impact with an %s torpedo. Black box recordings indicate the name of the aggressor might have been \'%s\'. Authorities are attemping to track the vessel down.\n\n"
                                         ,ppppppuVar10,pGVar17);
          local_8 = 0xf;
          pcVar6 = pcVar12;
          if (0xf < *(uint *)(pcVar12 + 0x14)) {
            pcVar6 = *(char **)pcVar12;
          }
          std::basic_string<>::append((basic_string<> *)local_5c,pcVar6,*(uint *)(pcVar12 + 0x10));
          local_8 = 0xe;
          if (0xf < local_18) {
            pnVar20 = (nothrow_t *)(local_18 + 1);
            pvVar18 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              pvVar18 = *(void **)((int)local_2c[0] + -4);
              pnVar20 = (nothrow_t *)(local_18 + 0x24);
              uVar4 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_00410b73;
            }
            operator_delete(pvVar18,pnVar20);
          }
          local_8 = 1;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (0xf < local_30) {
            pnVar20 = (nothrow_t *)(local_30 + 1);
            ppppppuVar10 = (undefined4 ******)local_44[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              ppppppuVar10 = (undefined4 ******)local_44[0][-1];
              uVar24 = (int)local_44[0] + (-4 - (int)ppppppuVar10);
              goto joined_r0x004110e1;
            }
            goto LAB_004110e7;
          }
        }
        local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
        local_30 = 0xf;
        local_34 = 0;
      }
    }
    else {
      std::basic_string<>::append
                ((basic_string<> *)local_5c,
                 "It appears that the vessel was destroyed in a sanctioned engagement with an authority vessel. The reason for the use of weapons by the vessel is not being revealed at this time.\n\n"
                 ,0xb3);
    }
    if (g_gameData[0x1c7] == (GameData)0x0) {
      uVar24 = 0x8c;
      pcVar6 = 
      "No survivors were found on the vessel. The body of a person, presumed to be the registered owner and pilot of the vessel was found aboard.\n\n"
      ;
    }
    else {
      uVar24 = 0x73;
      pcVar6 = 
      "Two bodies were found on the vessel, one believed to be a passenger and the other the owner-operator of the ship.\n\n"
      ;
    }
  }
  else {
    ppppppcVar8 = local_74;
    if (0xf < uVar3) {
      ppppppcVar8 = (char ******)local_74[0];
    }
    std::basic_string<>::assign((basic_string<> *)local_5c,(char *)ppppppcVar8,uVar24);
    uVar24 = 2;
    pcVar6 = "\n\n";
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar6,uVar24);
  pppppcVar2 = local_74[0];
  if ((*(int *)(*(int *)(g_gameData + 0xcc) + 0x6c) == 2) ||
     (*(int *)(*(int *)(g_gameData + 0xcc) + 0x6c) == 3)) {
    iVar19 = (int)(*(float *)(pGVar1 + 0x68) / 60.0);
    iVar11 = (int)(*(float *)(pGVar1 + 0x68) - (float)iVar19);
    if (0x3c < iVar11) {
      iVar11 = 0x3c;
    }
    pcVar12 = (char *)strUsingArgs((char *)local_2c,"`%%Time Taken: `!%dm %ds",iVar19,iVar11);
    local_8 = 0x10;
    pcVar6 = pcVar12;
    if (0xf < *(uint *)(pcVar12 + 0x14)) {
      pcVar6 = *(char **)pcVar12;
    }
    std::basic_string<>::append((basic_string<> *)local_5c,pcVar6,*(uint *)(pcVar12 + 0x10));
    local_8 = 1;
    uVar4 = local_8;
    local_8 = 1;
    if (0xf < local_18) {
      pnVar20 = (nothrow_t *)(local_18 + 1);
      pvVar18 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar20) {
        pvVar18 = *(void **)((int)local_2c[0] + -4);
        pnVar20 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_00410b73;
      }
      operator_delete(pvVar18,pnVar20);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if ((basic_string<> *)(g_gameData + 0x158) != (basic_string<> *)local_5c) {
    pbVar13 = (basic_string<> *)local_5c;
    if (0xf < local_48) {
      pbVar13 = local_5c[0];
    }
    std::basic_string<>::assign((basic_string<> *)(g_gameData + 0x158),(char *)pbVar13,local_4c);
  }
  if (0xf < local_60) {
    pnVar20 = (nothrow_t *)(local_60 + 1);
    ppppppcVar8 = (char ******)pppppcVar2;
    if ((nothrow_t *)0xfff < pnVar20) {
      ppppppcVar8 = (char ******)pppppcVar2[-1];
      pnVar20 = (nothrow_t *)(local_60 + 0x24);
      uVar4 = local_8;
      if ((char *)0x1f < (char *)((int)pppppcVar2 + (-4 - (int)ppppppcVar8))) goto LAB_00410b73;
    }
    operator_delete(ppppppcVar8,pnVar20);
  }
  if (0xf < local_48) {
    pnVar20 = (nothrow_t *)(local_48 + 1);
    pbVar13 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pbVar13 = *(basic_string<> **)(local_5c[0] + -4);
      pnVar20 = (nothrow_t *)(local_48 + 0x24);
      uVar4 = local_8;
      if ((basic_string<> *)0x1f < local_5c[0] + (-4 - (int)pbVar13)) {
LAB_00410b73:
        local_8 = uVar4;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar13,pnVar20);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::skipIntroSequence(void)

void __thiscall GameLogic::skipIntroSequence(GameLogic *this)

{
  int iVar1;
  int iVar2;
  BaseLight *pBVar3;
  bool bVar4;
  float fVar5;
  PresentationInterface *pPVar6;
  int iVar7;
  uint uVar8;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2344;
  local_10 = ExceptionList;
  fVar5 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  g_gameLogic[5] = (GameLogic)0x0;
  if (Singleton<>::instance == (PresentationInterface *)0x0) {
    pPVar6 = operator_new(0x418);
    local_8 = 0;
    Singleton<>::instance =
         (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar6);
  }
  local_8 = 0xffffffff;
  PresentationInterface::moveToCameraPos(Singleton<>::instance,-1,fVar5);
  if (Singleton<>::instance == (PresentationInterface *)0x0) {
    pPVar6 = operator_new(0x418);
    local_8 = 1;
    Singleton<>::instance =
         (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar6);
    local_8 = 0xffffffff;
  }
  pPVar6 = Singleton<>::instance;
  iVar7 = *(int *)(Singleton<>::instance + 0x2d4);
  uVar8 = 0;
  *(undefined1 **)(Singleton<>::instance + 0x294) = &DAT_bf800000;
  if (*(int *)(iVar7 + 0x94) - *(int *)(iVar7 + 0x90) >> 2 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(iVar7 + 0x90) + uVar8 * 4);
      iVar2 = *(int *)(iVar1 + 0x3c);
      if (((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if (*(BaseLight **)(iVar1 + 0x3d8) != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity(*(BaseLight **)(iVar1 + 0x3d8),*(float *)(iVar1 + 0x3ac))
          ;
          iVar7 = *(int *)(pPVar6 + 0x2d4);
        }
        iVar1 = *(int *)(*(int *)(iVar7 + 0x90) + uVar8 * 4);
        pBVar3 = *(BaseLight **)(iVar1 + 0x3d4);
        if (pBVar3 != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac));
          iVar7 = *(int *)(pPVar6 + 0x2d4);
        }
        iVar1 = *(int *)(*(int *)(iVar7 + 0x90) + uVar8 * 4);
        pBVar3 = *(BaseLight **)(iVar1 + 0x3d0);
        if (pBVar3 != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac));
          iVar7 = *(int *)(pPVar6 + 0x2d4);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(iVar7 + 0x94) - *(int *)(iVar7 + 0x90) >> 2));
  }
  if (*(BaseLight **)(iVar7 + 0x9c) != (BaseLight *)0x0) {
    cocos2d::BaseLight::setIntensity(*(BaseLight **)(iVar7 + 0x9c),*(float *)(iVar7 + 0x40));
  }
  Singleton<>::getInstance();
  g_gameLogic[0x78] = (GameLogic)0x0;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::setTimeCompressionText(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall GameLogic::setTimeCompressionText(undefined4 param_1,basic_string<> *param_2)

{
  GameLogic *pGVar1;
  basic_string<> *pbVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameLogic;
  puStack_c = &DAT_005b2368;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((basic_string<> *)(g_gameLogic + 0x128) != (basic_string<> *)&param_2) {
    pbVar2 = (basic_string<> *)&param_2;
    if (0xf < in_stack_00000018) {
      pbVar2 = param_2;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(g_gameLogic + 0x128),(char *)pbVar2,in_stack_00000014);
  }
  *(undefined4 *)(pGVar1 + 0x124) = 0x40400000;
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pbVar2 = *(basic_string<> **)(param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall GameLogic::setCombatDifficulty(int)

void __thiscall GameLogic::setCombatDifficulty(GameLogic *this,int param_1)

{
  basic_string<> *pbVar1;
  
  *(int *)(this + 0xa8) = param_1;
  pbVar1 = (basic_string<> *)(&combatDiffStr + param_1 * 6);
  if ((basic_string<> *)(this + 0xac) != pbVar1) {
    if (0xf < *(uint *)(&DAT_006575ac + param_1 * 0x18)) {
      pbVar1 = *(basic_string<> **)pbVar1;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this + 0xac),(char *)pbVar1,
               *(uint *)(&DAT_006575a8 + param_1 * 0x18));
  }
  return;
}


// public: void __thiscall GameLogic::setEconomyDifficulty(int)

void __thiscall GameLogic::setEconomyDifficulty(GameLogic *this,int param_1)

{
  basic_string<> *pbVar1;
  
  *(int *)(this + 0xc4) = param_1;
  pbVar1 = (basic_string<> *)(&economyDiffStr + param_1 * 6);
  if ((basic_string<> *)(this + 200) != pbVar1) {
    if (0xf < *(uint *)(&DAT_00657624 + param_1 * 0x18)) {
      pbVar1 = *(basic_string<> **)pbVar1;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this + 200),(char *)pbVar1,
               *(uint *)(&DAT_00657620 + param_1 * 0x18));
  }
  return;
}


// public: void __thiscall GameLogic::setStartBonus(int)

void __thiscall GameLogic::setStartBonus(GameLogic *this,int param_1)

{
  basic_string<> *pbVar1;
  
  *(int *)(this + 0xe0) = param_1;
  pbVar1 = (basic_string<> *)(&firstTimeBonusStr + param_1 * 6);
  if ((basic_string<> *)(this + 0xe4) != pbVar1) {
    if (0xf < (uint)(&DAT_0065754c)[param_1 * 6]) {
      pbVar1 = *(basic_string<> **)pbVar1;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this + 0xe4),(char *)pbVar1,(&DAT_00657548)[param_1 * 6]);
  }
  return;
}


// public: void __thiscall GameLogic::setStartLocation(int)

void __thiscall GameLogic::setStartLocation(GameLogic *this,int param_1)

{
  basic_string<> *this_00;
  undefined4 *puVar1;
  GameData *pGVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  basic_string<> *pbVar6;
  
  *(int *)(this + 0xfc) = param_1;
  pGVar2 = g_gameData;
  if ((&startLocationMap)[param_1] == (int *)0xffffffff) {
    std::basic_string<>::assign((basic_string<> *)(this + 0x100),"Random",6);
    this[0x11d] = (GameLogic)0x1;
    return;
  }
  this[0x11d] = (GameLogic)0x0;
  puVar5 = *(undefined4 **)(pGVar2 + 0x3c);
  puVar1 = *(undefined4 **)(pGVar2 + 0x40);
  if (puVar5 != puVar1) {
    do {
      piVar4 = (int *)*puVar5;
      if ((int *)*piVar4 == (&startLocationMap)[param_1]) goto LAB_00411645;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  piVar4 = (int *)0x0;
LAB_00411645:
  this_00 = (basic_string<> *)(this + 0x100);
  if (piVar4 == (int *)0x0) {
    std::basic_string<>::assign(this_00,"ERROR",5);
    bVar3 = cc_assert_script_compatible("Error setting start location");
    if (!bVar3) {
      cocos2d::log("Assert failed: %s","Error setting start location");
    }
  }
  else {
    pbVar6 = (basic_string<> *)(piVar4 + 7);
    if (this_00 != pbVar6) {
      if (0xf < (uint)piVar4[0xc]) {
        pbVar6 = *(basic_string<> **)pbVar6;
      }
      std::basic_string<>::assign(this_00,(char *)pbVar6,piVar4[0xb]);
      return;
    }
  }
  return;
}


// public: void __thiscall GameLogic::reportSmuggler(void)

void __thiscall GameLogic::reportSmuggler(GameLogic *this)

{
  undefined3 uVar1;
  bool bVar2;
  basic_string<> *pbVar3;
  Faction *pFVar4;
  Ship *pSVar5;
  AuthorityManager *pAVar6;
  EmailManager *pEVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  basic_string<> *unaff_EDI;
  basic_string<> *this_00;
  basic_string<> abStack_c4 [16];
  undefined4 uStack_b4;
  basic_string<> abStack_ac [12];
  undefined4 uStack_a0;
  char *local_94;
  undefined4 *puStack_90;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005b23d0;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  this_00 = (basic_string<> *)(g_gameLogic + 0x1ac);
  local_14 = pbVar3;
  bVar2 = std::_Traits_equal<>("",0,(char *)pbVar3,(uint)unaff_EDI);
  if (bVar2) goto LAB_00411af0;
  pFVar4 = Sector::getMainFaction(*(Sector **)(g_gameData + 0xd8));
  if (pFVar4 == (Faction *)0x0) {
    debugPrint("ERROR","ERROR: invalid faction in sector trying to report a smuggler.");
    goto LAB_00411af0;
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&local_94,(basic_string<> *)this_00);
  pSVar5 = Sector::getShip(*(Sector **)(*(int *)(g_gameData + 0xd0) + 0x24));
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  if (pSVar5 == (Ship *)0x0) {
LAB_0041197e:
    uStack_7 = uVar1;
    puStack_90 = (undefined4 *)0x411987;
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)local_5c,pbVar3);
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_004119bd;
      }
      operator_delete(pvVar8,pnVar9);
    }
    std::basic_string<>::assign((basic_string<> *)local_44,"Smuggling Report",0x10);
  }
  else {
    std::basic_string<>::basic_string<>((basic_string<> *)&local_94,(basic_string<> *)this_00);
    local_8 = 2;
    pAVar6 = Singleton<>::getInstance();
    local_8 = 1;
    bVar2 = AuthorityManager::shipHasBeenScanned(pAVar6);
    if (bVar2) {
      std::basic_string<>::basic_string<>((basic_string<> *)&local_94,(basic_string<> *)this_00);
      local_8 = 3;
      pAVar6 = Singleton<>::getInstance();
      local_8 = 1;
      bVar2 = AuthorityManager::shipHasBeenScanned(pAVar6);
      uVar1 = uStack_7;
      if (bVar2) {
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,(basic_string<> *)this_00);
        local_8 = 4;
        Singleton<>::getInstance();
        local_8 = 1;
        std::_Find_unchecked<>((basic_string<> *)local_2c,pbVar3,unaff_EDI);
        if (0xf < local_18) {
          pnVar9 = (nothrow_t *)(local_18 + 1);
          pvVar8 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_2c[0] + -4);
            pnVar9 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar9);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        uVar1 = uStack_7;
      }
      goto LAB_0041197e;
    }
    puStack_90 = (undefined4 *)(*(int *)(g_gameData + 0x124) + 4);
    if (0xf < *(uint *)(*(int *)(g_gameData + 0x124) + 0x18)) {
      puStack_90 = (undefined4 *)*puStack_90;
    }
    local_94 = 
    "Thank you, %s, for your information about the contraband aboard the vessel \'%s\' travelling in %s.\n\nYour information proved to be accurate, and as such we are transfering you a reward payment of %d credits.\n\nSincerely,\n%s Contraband and Smuggling Department"
    ;
    pbVar3 = (basic_string<> *)strUsingArgs((char *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)local_5c,pbVar3);
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    std::basic_string<>::assign((basic_string<> *)local_44,"Reward",6);
    debugPrint("GAME","Smuggler reported by player to authorities.");
    local_94 = (char *)((uint)local_94 & 0xffffff00);
    uStack_a0 = 0x411892;
    std::basic_string<>::assign((basic_string<> *)&local_94,"Reward for reporting smuggler.",0x1e);
    uStack_a0 = 0x4118a9;
    BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124));
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&local_94,(basic_string<> *)local_5c);
  local_8 = 5;
  uStack_b4 = 0x411a54;
  std::basic_string<>::basic_string<>(abStack_ac,(basic_string<> *)local_44);
  local_8 = 6;
  std::basic_string<>::basic_string<>(abStack_c4,(basic_string<> *)(pFVar4 + 0x20));
  local_8 = 7;
  pEVar7 = Singleton<>::getInstance();
  local_8 = 1;
  EmailManager::addCustomEmail(pEVar7);
  std::basic_string<>::assign(this_00,"",0);
  if (0xf < local_30) {
    pnVar9 = (nothrow_t *)(local_30 + 1);
    pvVar8 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_44[0] + -4);
      pnVar9 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) goto LAB_004119bd;
    }
    operator_delete(pvVar8,pnVar9);
  }
  if (0xf < local_48) {
    pnVar9 = (nothrow_t *)(local_48 + 1);
    pvVar8 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_5c[0] + -4);
      pnVar9 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
LAB_004119bd:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
LAB_00411af0:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall GameLogic::reportPirate(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall GameLogic::reportPirate(undefined4 param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  Quadrant QVar5;
  nothrow_t *pnVar6;
  char *pcVar7;
  void *pvVar8;
  undefined **ppuVar9;
  uint unaff_EDI;
  uint in_stack_00000018;
  basic_string<> abStack_5c [8];
  undefined4 uStack_54;
  void *local_34 [5];
  uint local_20;
  GameLogic *local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2408;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = g_gameLogic;
  std::basic_string<>::basic_string<>((basic_string<> *)local_34,(basic_string<> *)&param_2);
  ppuVar9 = &PTR_s_A_005dfbbc;
  while( true ) {
    pcVar7 = *ppuVar9;
    local_14 = pcVar7 + 1;
    pcVar4 = pcVar7;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar2 = std::_Traits_equal<>(pcVar7,(int)pcVar4 - (int)local_14,pcVar3,unaff_EDI);
    if (bVar2) break;
    ppuVar9 = ppuVar9 + 1;
    if (0x5dfbcb < (int)ppuVar9) {
      if (0xf < local_20) {
        pnVar6 = (nothrow_t *)(local_20 + 1);
        pvVar8 = local_34[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar8 = *(void **)((int)local_34[0] + -4);
          pnVar6 = (nothrow_t *)(local_20 + 0x24);
          if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar6);
      }
      pcVar3 = "ERROR: tried to report a pirate in an invalid quadrant, \'%s\'";
LAB_00411c65:
      uStack_54 = 0x411c6f;
      debugPrint("GAME",pcVar3);
      if (0xf < in_stack_00000018) {
        pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
        pvVar8 = param_2;
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar8 = *(void **)((int)param_2 + -4);
          pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
          if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar6);
      }
      ExceptionList = local_10;
      return;
    }
  }
  if (0xf < local_20) {
    pnVar6 = (nothrow_t *)(local_20 + 1);
    pvVar8 = local_34[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar8 = *(void **)((int)local_34[0] + -4);
      pnVar6 = (nothrow_t *)(local_20 + 0x24);
      if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar6);
  }
  std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)&param_2);
  QVar5 = getQuadrant();
  pcVar3 = (&PTR_s_A_005d0180)[QVar5];
  pcVar7 = pcVar3;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)(local_18 + 0x194),pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  pcVar3 = "Reported pirate in quadrant %s";
  goto LAB_00411c65;
}


// public: void __thiscall GameLogic::reportPirate(int)

void __thiscall GameLogic::reportPirate(GameLogic *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (&PTR_s_A_005d0180)[param_1];
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)(this + 0x194),pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  debugPrint("GAME","Reported pirate in quadrant %s",(&PTR_s_A_005d0180)[param_1]);
  return;
}


// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __thiscall
// GameLogic::getCurrentLocalServers(void)

void __thiscall GameLogic::getCurrentLocalServers(GameLogic *this)

{
  basic_string<> *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  vector<> *in_stack_00000004;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005b2451;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  local_14 = 0;
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)&local_3c,"[not functional yet]",0x14);
  local_14 = 1;
  pbVar1 = *(basic_string<> **)(in_stack_00000004 + 4);
  if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar1) {
    std::vector<>::_Emplace_reallocate<>(in_stack_00000004,pbVar1,(basic_string<> *)&local_3c);
    if (0xf < uStack_28) {
      pnVar3 = (nothrow_t *)(uStack_28 + 1);
      pvVar2 = local_3c;
      if ((nothrow_t *)0xfff < pnVar3) {
        pvVar2 = *(void **)((int)local_3c + -4);
        pnVar3 = (nothrow_t *)(uStack_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar3);
    }
  }
  else {
    *(void **)pbVar1 = local_3c;
    *(undefined4 *)(pbVar1 + 4) = uStack_38;
    *(undefined4 *)(pbVar1 + 8) = uStack_34;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_30;
    *(ulonglong *)(pbVar1 + 0x10) = CONCAT44(uStack_28,local_2c);
    *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall GameLogic::setLocalServer(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall GameLogic::setLocalServer(GameLogic *this,char *param_2)

{
  basic_string<> *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GameLogic *pGVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  GameLogic *pGVar9;
  word *pwVar10;
  void *pvVar11;
  basic_string<> *pbVar12;
  nothrow_t *pnVar13;
  uint unaff_EDI;
  uint uVar14;
  word *this_00;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int local_40;
  int local_3c;
  uint local_34;
  GameLogic *local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2490;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_30 = g_gameLogic;
  local_14 = pcVar7;
  getCurrentLocalServers(this);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar14 = 0;
  local_34 = (local_3c - local_40) / 0x18;
  if (local_34 != 0) {
    do {
      pcVar8 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar8 = param_2;
      }
      bVar6 = std::_Traits_equal<>(pcVar8,in_stack_00000014,pcVar7,unaff_EDI);
      if (bVar6) {
        *(uint *)(local_30 + 0x148) = uVar14;
        pbVar1 = (basic_string<> *)(local_40 + uVar14 * 0x18);
        if ((basic_string<> *)(local_30 + 0x14c) != pbVar1) {
          pbVar12 = pbVar1;
          if (0xf < *(uint *)(pbVar1 + 0x14)) {
            pbVar12 = *(basic_string<> **)pbVar1;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(local_30 + 0x14c),(char *)pbVar12,*(uint *)(pbVar1 + 0x10));
        }
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < local_34);
  }
  pGVar5 = local_30;
  pGVar9 = local_30 + 0x14c;
  if (0xf < *(uint *)(local_30 + 0x160)) {
    pGVar9 = *(GameLogic **)pGVar9;
  }
  pwVar10 = (word *)strUsingArgs((char *)local_2c,"Server name: %s\nLocation: 127.0.0.1",pGVar9);
  this_00 = (word *)(pGVar5 + 0x164);
  if (this_00 != pwVar10) {
    word::~word(this_00);
    uVar2 = *(undefined4 *)(pwVar10 + 4);
    uVar3 = *(undefined4 *)(pwVar10 + 8);
    uVar4 = *(undefined4 *)(pwVar10 + 0xc);
    *(undefined4 *)this_00 = *(undefined4 *)pwVar10;
    *(undefined4 *)(pGVar5 + 0x168) = uVar2;
    *(undefined4 *)(pGVar5 + 0x16c) = uVar3;
    *(undefined4 *)(pGVar5 + 0x170) = uVar4;
    *(undefined8 *)(pGVar5 + 0x174) = *(undefined8 *)(pwVar10 + 0x10);
    *(undefined4 *)(pwVar10 + 0x10) = 0;
    *(undefined4 *)(pwVar10 + 0x14) = 0xf;
    *pwVar10 = (word)0x0;
  }
  if (0xf < local_18) {
    pnVar13 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar13 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar13);
  }
  std::vector<>::_Tidy((vector<> *)&local_40);
  if (0xf < in_stack_00000018) {
    pnVar13 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar7 = param_2;
    if ((nothrow_t *)0xfff < pnVar13) {
      pcVar7 = *(char **)(param_2 + -4);
      pnVar13 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar7,pnVar13);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __thiscall
// GameLogic::getCurrentPlayersAndShips(void)

void __thiscall GameLogic::getCurrentPlayersAndShips(GameLogic *this)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  char *pcVar8;
  NetworkClient *pNVar9;
  basic_string<> *pbVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  void *pvVar14;
  undefined4 *puVar15;
  nothrow_t *pnVar16;
  basic_string<> *pbVar17;
  uint unaff_EDI;
  undefined4 uVar18;
  basic_string<> *pbVar19;
  undefined4 *in_stack_00000004;
  undefined4 local_48;
  basic_string<> *local_44;
  basic_string<> *local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005b24d8;
  local_1c = ExceptionList;
  pcVar8 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  pbVar17 = (basic_string<> *)0x0;
  uVar18 = 0;
  local_48 = 0;
  local_44 = (basic_string<> *)0x0;
  local_40 = (basic_string<> *)0x0;
  local_14 = 0;
  local_24 = pcVar8;
  puVar6 = &stack0xfffffffc;
  if ((this[0x71] == (GameLogic)0x0) ||
     (pNVar9 = Singleton<>::getInstance(), puVar6 = puStack_20, *(int *)(pNVar9 + 0x20) == 0)) {
    puStack_20 = puVar6;
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
    in_stack_00000004[2] = 0;
  }
  else {
    puVar12 = *(undefined4 **)(g_gameData + 0x250);
    puVar1 = *(undefined4 **)(g_gameData + 0x254);
    if (puVar12 != puVar1) {
      pbVar19 = (basic_string<> *)0x0;
      do {
        piVar2 = (int *)*puVar12;
        piVar11 = piVar2;
        if (0xf < (uint)piVar2[5]) {
          piVar11 = (int *)*piVar2;
        }
        pbVar10 = (basic_string<> *)
                  strUsingArgs((char *)local_3c,"`%c%s",(int)"0!@$#"[piVar2[0x19]],piVar11);
        local_14._0_1_ = 1;
        if (pbVar19 == pbVar17) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)&local_48,pbVar17,pbVar10);
          pbVar19 = local_40;
        }
        else {
          *(undefined4 *)(pbVar17 + 0x10) = 0;
          *(undefined4 *)(pbVar17 + 0x14) = 0;
          uVar18 = *(undefined4 *)(pbVar10 + 4);
          uVar4 = *(undefined4 *)(pbVar10 + 8);
          uVar5 = *(undefined4 *)(pbVar10 + 0xc);
          *(undefined4 *)pbVar17 = *(undefined4 *)pbVar10;
          *(undefined4 *)(pbVar17 + 4) = uVar18;
          *(undefined4 *)(pbVar17 + 8) = uVar4;
          *(undefined4 *)(pbVar17 + 0xc) = uVar5;
          uVar18 = *(undefined4 *)(pbVar10 + 0x14);
          *(undefined4 *)(pbVar17 + 0x10) = *(undefined4 *)(pbVar10 + 0x10);
          *(undefined4 *)(pbVar17 + 0x14) = uVar18;
          local_44 = pbVar17 + 0x18;
          *(undefined4 *)(pbVar10 + 0x10) = 0;
          *(undefined4 *)(pbVar10 + 0x14) = 0xf;
          *pbVar10 = (basic_string<>)0x0;
        }
        pbVar17 = local_44;
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_28) {
          pnVar16 = (nothrow_t *)(local_28 + 1);
          pvVar14 = local_3c[0];
          if ((nothrow_t *)0xfff < pnVar16) {
            pvVar14 = *(void **)((int)local_3c[0] + -4);
            pnVar16 = (nothrow_t *)(local_28 + 0x24);
            if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar14))) {
LAB_0041229d:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar14,pnVar16);
        }
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        puVar3 = *(undefined4 **)(g_gameData + 0x248);
        uVar18 = local_48;
        for (puVar15 = *(undefined4 **)(g_gameData + 0x244); local_48 = uVar18, puVar15 != puVar3;
            puVar15 = puVar15 + 1) {
          piVar11 = (int *)*puVar15;
          bVar7 = std::_Traits_equal<>("",0,pcVar8,unaff_EDI);
          if (!bVar7) {
            piVar13 = piVar2 + 6;
            if (0xf < (uint)piVar2[0xb]) {
              piVar13 = (int *)piVar2[6];
            }
            bVar7 = std::_Traits_equal<>((char *)piVar13,piVar2[10],pcVar8,unaff_EDI);
            if (bVar7) {
              if (0xf < (uint)piVar11[5]) {
                piVar11 = (int *)*piVar11;
              }
              pbVar19 = (basic_string<> *)strUsingArgs((char *)local_3c,"`7%s",piVar11);
              local_14._0_1_ = 2;
              if (local_40 == pbVar17) {
                std::vector<>::_Emplace_reallocate<>((vector<> *)&local_48,pbVar17,pbVar19);
              }
              else {
                *(undefined4 *)(pbVar17 + 0x10) = 0;
                *(undefined4 *)(pbVar17 + 0x14) = 0;
                uVar18 = *(undefined4 *)(pbVar19 + 4);
                uVar4 = *(undefined4 *)(pbVar19 + 8);
                uVar5 = *(undefined4 *)(pbVar19 + 0xc);
                *(undefined4 *)pbVar17 = *(undefined4 *)pbVar19;
                *(undefined4 *)(pbVar17 + 4) = uVar18;
                *(undefined4 *)(pbVar17 + 8) = uVar4;
                *(undefined4 *)(pbVar17 + 0xc) = uVar5;
                uVar18 = *(undefined4 *)(pbVar19 + 0x14);
                *(undefined4 *)(pbVar17 + 0x10) = *(undefined4 *)(pbVar19 + 0x10);
                *(undefined4 *)(pbVar17 + 0x14) = uVar18;
                local_44 = pbVar17 + 0x18;
                *(undefined4 *)(pbVar19 + 0x10) = 0;
                *(undefined4 *)(pbVar19 + 0x14) = 0xf;
                *pbVar19 = (basic_string<>)0x0;
              }
              pbVar17 = local_44;
              local_14 = (uint)local_14._1_3_ << 8;
              if (0xf < local_28) {
                pnVar16 = (nothrow_t *)(local_28 + 1);
                pvVar14 = local_3c[0];
                if ((nothrow_t *)0xfff < pnVar16) {
                  pvVar14 = *(void **)((int)local_3c[0] + -4);
                  pnVar16 = (nothrow_t *)(local_28 + 0x24);
                  if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar14))) goto LAB_0041229d;
                }
                operator_delete(pvVar14,pnVar16);
              }
            }
          }
          pbVar19 = local_40;
          uVar18 = local_48;
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar1);
    }
    *in_stack_00000004 = uVar18;
    in_stack_00000004[1] = pbVar17;
    in_stack_00000004[2] = local_40;
  }
  local_48 = 0;
  local_44 = (basic_string<> *)0x0;
  local_40 = (basic_string<> *)0x0;
  std::vector<>::_Tidy((vector<> *)&local_48);
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: bool __thiscall GameLogic::canTakeShip(void)

bool __thiscall GameLogic::canTakeShip(GameLogic *this)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  char ****ppppcVar5;
  basic_string<> *pbVar6;
  char *pcVar7;
  nothrow_t *pnVar8;
  char ****ppppcVar9;
  int *piVar10;
  uint unaff_EDI;
  void **ppvVar11;
  void *pvVar12;
  void *pvVar13;
  basic_string<> abStack_74 [12];
  undefined4 uStack_68;
  char ***local_44 [4];
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2510;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar4;
  if (((g_gameLogic[0x71] != (GameLogic)0x0) || (g_gameLogic[0x70] != (GameLogic)0x0)) &&
     (*(int *)(g_gameData + 0x274) != -1)) {
    std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)(g_gameData + 0x25c));
    UIText::getTextWithoutMacros();
    ppppcVar9 = (char ****)local_44[0];
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8 = 1;
    piVar10 = *(int **)(g_gameData + 0x250);
    if (piVar10 != *(int **)(g_gameData + 0x254)) {
      do {
        iVar1 = *piVar10;
        ppppcVar5 = local_44;
        if (0xf < local_30) {
          ppppcVar5 = ppppcVar9;
        }
        uStack_68 = 0x4123c2;
        bVar2 = std::_Traits_equal<>((char *)ppppcVar5,local_34,pcVar4,unaff_EDI);
        if (bVar2) {
          ppvVar11 = (void **)(iVar1 + 0x18);
          if (local_2c != ppvVar11) {
            if (0xf < *(uint *)(iVar1 + 0x2c)) {
              ppvVar11 = *ppvVar11;
            }
            uStack_68 = 0x4123fb;
            std::basic_string<>::assign
                      ((basic_string<> *)local_2c,(char *)ppvVar11,*(uint *)(iVar1 + 0x28));
            ppppcVar9 = (char ****)local_44[0];
          }
          break;
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != *(int **)(g_gameData + 0x254));
    }
    pvVar12 = local_2c[0];
    uStack_68 = 0x41241a;
    bVar2 = std::_Traits_equal<>("",0,pcVar4,unaff_EDI);
    if ((!bVar2) &&
       (piVar10 = *(int **)(g_gameData + 0x244), piVar10 != *(int **)(g_gameData + 0x248))) {
      do {
        iVar1 = *piVar10;
        pbVar6 = &OISConfiguration::username;
        if (0xf < DAT_006577c4) {
          pbVar6 = _username;
        }
        uStack_68 = 0x41246e;
        bVar2 = std::_Traits_equal<>((char *)pbVar6,DAT_006577c0,pcVar4,unaff_EDI);
        if (bVar2) {
          pcVar7 = (char *)(iVar1 + 0x18);
          if (0xf < *(uint *)(iVar1 + 0x2c)) {
            pcVar7 = *(char **)(iVar1 + 0x18);
          }
          uStack_68 = 0x4124da;
          std::_Traits_equal<>(pcVar7,*(uint *)(iVar1 + 0x28),pcVar4,unaff_EDI);
          pvVar12 = local_2c[0];
          break;
        }
        piVar10 = piVar10 + 1;
        pvVar12 = local_2c[0];
      } while (piVar10 != *(int **)(g_gameData + 0x248));
    }
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar13 = pvVar12;
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar13 = *(void **)((int)pvVar12 + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_68 = 0x4124ee;
      operator_delete(pvVar13,pnVar8);
      ppppcVar9 = (char ****)local_44[0];
    }
    if (0xf < local_30) {
      pnVar8 = (nothrow_t *)(local_30 + 1);
      ppppcVar5 = ppppcVar9;
      if ((nothrow_t *)0xfff < pnVar8) {
        ppppcVar5 = (char ****)ppppcVar9[-1];
        pnVar8 = (nothrow_t *)(local_30 + 0x24);
        if ((char *)0x1f < (char *)((int)ppppcVar9 + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_68 = 0x412526;
      operator_delete(ppppcVar5,pnVar8);
    }
  }
  ExceptionList = local_10;
  uVar3 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}
