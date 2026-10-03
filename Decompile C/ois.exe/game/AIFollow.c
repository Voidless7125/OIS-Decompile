#include "../ois.exe.h"


// public: virtual void * __thiscall AIFollow::`scalar deleting destructor'(unsigned int)

void * __thiscall AIFollow::_scalar_deleting_destructor_(AIFollow *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 100) = 0;
  uVar1 = *(uint *)(this + 0x5c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x48);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0xf;
  this[0x48] = (AIFollow)0x0;
  AIDesire::~AIDesire((AIDesire *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x68);
  }
  return this;
}


// public: virtual void __thiscall AIFollow::recalculateLogic(void)

void __thiscall AIFollow::recalculateLogic(AIFollow *this)

{
  int iVar1;
  basic_string<> *pbVar2;
  GameData *pGVar3;
  bool bVar4;
  char *pcVar5;
  FlagManager *pFVar6;
  basic_string<> *pbVar7;
  basic_string<> *pbVar8;
  uint unaff_EDI;
  basic_string<> abStack_70 [12];
  undefined4 uStack_64;
  basic_string<> local_44 [24];
  basic_string<> *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1e28;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x20) = 0;
  iVar1 = *(int *)(*(int *)(*(Ship **)(this + 0x24) + 0x44) + 0x124);
  local_14 = pcVar5;
  if ((iVar1 != 0) && (bVar4 = Ship::canDetectPlayerShip(*(Ship **)(this + 0x24)), bVar4)) {
    uStack_64 = 0x4fc9f4;
    bVar4 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
    if (!bVar4) {
      std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)(iVar1 + 0x1dc));
      local_8 = 0;
      pFVar6 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      bVar4 = FlagManager::flagSet(pFVar6);
      pGVar3 = g_gameData;
      if (bVar4) {
        *(undefined4 *)(this + 0x20) = 0x40000000;
        *(undefined4 *)(this + 100) = *(undefined4 *)(pGVar3 + 0xd0);
      }
    }
    iVar1 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x124);
    pbVar2 = *(basic_string<> **)(iVar1 + 0x1fc);
    for (pbVar8 = *(basic_string<> **)(iVar1 + 0x1f8); pbVar8 != pbVar2; pbVar8 = pbVar8 + 0x30) {
      std::basic_string<>::basic_string<>(local_44,pbVar8);
      local_8 = 1;
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar8 + 0x18);
      local_8 = 2;
      std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)local_44);
      local_8._0_1_ = 3;
      pFVar6 = Singleton<>::getInstance();
      local_8._0_1_ = 2;
      bVar4 = FlagManager::flagSet(pFVar6);
      if (bVar4) {
        std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)local_2c);
        local_8._0_1_ = 4;
        pFVar6 = Singleton<>::getInstance();
        local_8 = CONCAT31(local_8._1_3_,2);
        bVar4 = FlagManager::flagSet(pFVar6);
        if (!bVar4) {
          if ((basic_string<> *)(this + 0x48) != (basic_string<> *)local_2c) {
            pbVar7 = (basic_string<> *)local_2c;
            if (0xf < local_18) {
              pbVar7 = local_2c[0];
            }
            uStack_64 = 0x4fcaf0;
            std::basic_string<>::assign((basic_string<> *)(this + 0x48),(char *)pbVar7,local_1c);
          }
          *(undefined4 *)(this + 0x20) = 0x40000000;
        }
      }
      local_8 = 0xffffffff;
      std::pair<>::~pair<>((pair<> *)local_44);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall AIFollow::runLogic(float)

void __thiscall AIFollow::runLogic(AIFollow *this,float param_1)

{
  float fVar1;
  Ship *pSVar2;
  bool bVar3;
  int iVar4;
  FlagManager *pFVar5;
  Ship *pSVar6;
  basic_string<> local_38 [16];
  undefined4 local_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1e60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar6 = *(Ship **)(this + 100);
  if (((pSVar6 == (Ship *)0x0) && (pSVar2 = *(Ship **)(g_gameData + 0xd0), pSVar2 != (Ship *)0x0))
     && (bVar3 = Ship::canDetectPlayerShip(*(Ship **)(this + 0x24)), bVar3)) {
    *(Ship **)(this + 100) = pSVar2;
    pSVar6 = pSVar2;
  }
  if (this[0x40] == (AIFollow)0x0) {
    ExceptionList = local_10;
    return;
  }
  fVar1 = *(float *)(this + 0x60);
  *(float *)(this + 0x60) = param_1 + fVar1;
  if (param_1 + fVar1 < *(float *)(this + 0x44)) {
    ExceptionList = local_10;
    return;
  }
  if (pSVar6 == (Ship *)0x0) {
    ExceptionList = local_10;
    return;
  }
  local_28 = 0x4fcbb6;
  bVar3 = Ship::canCurrentlyDetect(*(Ship **)(this + 0x24),pSVar6);
  if (!bVar3) {
    ExceptionList = local_10;
    return;
  }
  iVar4 = *(int *)(pSVar6 + 0x1c8) - *(int *)(pSVar6 + 0x1c4) >> 5;
  if (((iVar4 == 0) ||
      (iVar4 = *(int *)(iVar4 * 0x20 + -0xc + *(int *)(pSVar6 + 0x1c4)), iVar4 == 0)) ||
     (*(int *)(iVar4 + 0x30) != 1)) {
LAB_004fcc03:
    std::basic_string<>::basic_string<>(local_38,(basic_string<> *)(this + 0x48));
    local_8 = 0;
    pFVar5 = Singleton<>::getInstance();
    local_8 = 0xffffffff;
    bVar3 = FlagManager::flagSet(pFVar5);
    if (!bVar3) goto LAB_004fcc50;
  }
  else {
    bVar3 = false;
    if (*(int *)(iVar4 + 0x24c) != 0) {
      bVar3 = *(int *)(*(int *)(iVar4 + 0x24c) + 0x158) == 1;
    }
    if (!bVar3) goto LAB_004fcc03;
  }
  if ((*(float *)(*(int *)(this + 100) + 0x54) == -1.0) &&
     (*(char *)(*(int *)(*(int *)(this + 100) + 0x40) + 0x34) != '\0')) {
    ExceptionList = local_10;
    return;
  }
LAB_004fcc50:
  local_28 = 0;
  local_38[0] = (basic_string<>)0x0;
  std::basic_string<>::assign
            (local_38,"Vessel disobeyed instruction to proceed to port. Acting accordingly.",0x44);
  Ship::log();
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffffc4,(basic_string<> *)(this + 0x48));
  local_8 = 1;
  pFVar5 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  FlagManager::setFlag(pFVar5);
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall AIFollow::removeDesireTarget(class GameObject *)

void __thiscall AIFollow::removeDesireTarget(AIFollow *this,GameObject *param_1)

{
  if (param_1 == (GameObject *)(-(uint)(*(int *)(this + 100) != 0) & *(int *)(this + 100) + 8U)) {
    *(undefined4 *)(this + 100) = 0;
  }
  return;
}


// public: virtual void __thiscall AIFollow::enterState(void)

void __thiscall AIFollow::enterState(AIFollow *this)

{
  float fVar1;
  int iVar2;
  basic_string<> *pbVar3;
  bool bVar4;
  FlagManager *pFVar5;
  basic_string<> *pbVar6;
  basic_string<> abStack_74 [16];
  undefined4 uStack_64;
  basic_string<> local_44 [24];
  basic_string<> local_2c [24];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1e98;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(this + 0x24);
  *(undefined4 *)(iVar2 + 900) = *(undefined4 *)(this + 100);
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  this[0x40] = (AIFollow)0x0;
  iVar2 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x124);
  pbVar3 = *(basic_string<> **)(iVar2 + 0x1fc);
  for (pbVar6 = *(basic_string<> **)(iVar2 + 0x1f8); pbVar6 != pbVar3; pbVar6 = pbVar6 + 0x30) {
    uStack_64 = 0x4fcd69;
    std::basic_string<>::basic_string<>(local_44,pbVar6);
    local_8 = 0;
    uStack_64 = 0x4fcd7c;
    std::basic_string<>::basic_string<>(local_2c,pbVar6 + 0x18);
    local_8 = 1;
    std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)local_44);
    local_8._0_1_ = 2;
    pFVar5 = Singleton<>::getInstance();
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar4 = FlagManager::flagSet(pFVar5);
    if (bVar4) {
      *(undefined2 *)(this + 0x40) = 1;
      iVar2 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0x44) + 0x124);
      if ((iVar2 != 0) && (fVar1 = *(float *)(iVar2 + 500), fVar1 != -1.0)) {
        *(float *)(this + 0x44) = fVar1;
      }
      *(undefined4 *)(this + 0x60) = 0;
    }
    local_8 = 0xffffffff;
    std::pair<>::~pair<>((pair<> *)local_44);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall AIFollow::leaveState(void)

void __thiscall AIFollow::leaveState(AIFollow *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x24);
  if (*(int *)(iVar1 + 900) == *(int *)(this + 100)) {
    *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  }
  *(undefined4 *)(this + 100) = 0;
  return;
}
