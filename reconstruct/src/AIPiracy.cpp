// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: int __thiscall AIPiracy::shipWeight(AIPiracy *this,SensorData *param_1)
int AIPiracy::shipWeight(SensorData * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint unaff_EDI;
  int iVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  AIPiracy *local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c204d;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = 0;
  local_18 = this;
  if (((*(char *)(*(int *)(g_gameData + 0xcc) + 0xb8) != '\0') ||
      (bVar1 = GameLogic::playerHostilePiratesInSector
                         ((GameLogic *)this,*(int *)(*(int *)((char *)this + 0x24) + 0x20)), bVar1)) &&
     (*(char *)(*(int *)(param_1 + 0x130) + 0x234) != '\0')) {
    // [seh] ExceptionList = local_10;
    return 0xf;
  }
  iVar5 = *(int *)((char *)this + 0x24);
  if ((float)(&piracyDistance)[*(int *)(*(int *)(iVar5 + 0x44) + 0x74)] != -1.0) {
    local_20 = (float)*(double *)(iVar5 + 0x28);
    local_1c = (float)*(double *)(iVar5 + 0x30);
    local_28 = (float)((double)*(float *)(param_1 + 0x104) + *(double *)(param_1 + 0x10));
    local_24 = (float)((double)*(float *)(param_1 + 0x108) + *(double *)(param_1 + 0x18));
    // [seh] local_8 = 1;
    local_14 = 3;
    fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
    fVar3 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
    iVar5 = *(int *)((char *)this + 0x24);
    fVar7 = (1.5 - fVar7 * 0.5 * fVar3 * fVar3) * fVar3 * fVar7;
    if ((float)(&piracyDistance)[*(int *)(*(int *)(iVar5 + 0x44) + 0x74)] <= fVar7 &&
        fVar7 != (float)(&piracyDistance)[*(int *)(*(int *)(iVar5 + 0x44) + 0x74)]) {
      bVar1 = true;
      goto LAB_004fe80f;
    }
  }
  bVar1 = false;
LAB_004fe80f:
  // [seh] local_8 = 0xffffffff;
  if (bVar1) {
    // [seh] ExceptionList = local_10;
    return 0;
  }
  fVar3 = (float)((double)*(float *)(param_1 + 0x108) + *(double *)(param_1 + 0x18));
  angleInDegreesFrom((float)((double)*(float *)(param_1 + 0x104) + *(double *)(param_1 + 0x10)),
                     fVar3,(float)*(double *)(iVar5 + 0x28),(float)*(double *)(iVar5 + 0x30));
  iVar6 = 5;
  uVar4 = -(uint)(0xb4 < (int)(*(float *)(*(int *)(param_1 + 0x130) + 0x120) - (float)(int)fVar3) -
                         0x5aU) & 0xfffffff6;
  iVar5 = uVar4 + 10;
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("ceres",5,pcVar2,unaff_EDI);
  if (bVar1) {
    iVar6 = 4;
  }
  else {
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("proxima",7,pcVar2,unaff_EDI);
    if (bVar1) {
      iVar6 = 2;
    }
    else {
      bVar1 = ghidra::lib::_Traits_equal___x28_x29("enceladus",9,pcVar2,unaff_EDI);
      if (bVar1) {
        iVar6 = 1;
      }
      else {
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("leander",7,pcVar2,unaff_EDI);
        if (bVar1) {
          iVar6 = 3;
        }
        else {
          bVar1 = ghidra::lib::_Traits_equal___x28_x29("coleman",7,pcVar2,unaff_EDI);
          if (bVar1) {
            iVar6 = 4;
          }
        }
      }
    }
  }
  if (*(char *)(*(int *)(*(int *)(local_18 + 0x24) + 0x44) + 0x15d) != '\0') {
    local_28 = 0.0;
    local_24 = 0.0;
    // [seh] local_8 = 2;
    fVar3 = cocos2d::Vec2::getDistance
                      ((Vec2 *)(*(int *)(local_18 + 0x24) + 0x118),(Vec2 *)&local_28);
    if (fVar3 == 0.0) {
      iVar5 = uVar4 + 0xc;
    }
    else {
      iVar5 = uVar4 + 0xb;
    }
  }
  // [seh] ExceptionList = local_10;
  return iVar6 + iVar5;
}


// Ghidra: void __thiscall AIPiracy::ignoreVessel(AIPiracy *this,void *param_2)
void AIPiracy::ignoreVessel(void * param_2)

{
  std::string *this_00;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2368;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  this_00 = *(std::string **)((char *)this + 0x54);
  if (*(std::string **)((char *)this + 0x58) == this_00) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x50),(std::string *)this_00,(std::string *)&param_2);
  }
  else {
    ghidra::str::ctor(this_00,(std::string *)&param_2);
    *(int *)((char *)this + 0x54) = *(int *)((char *)this + 0x54) + 0x18;
  }
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPiracy::recalculateLogic(AIPiracy *this)
void AIPiracy::recalculateLogic()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  SensorData *pSVar2;
  bool bVar3;
  std::string *pbVar4;
  std::string *pbVar5;
  int iVar6;
  SensorData *pSVar7;
  std::string *unaff_EDI;
  float fVar8;
  std::string abStack_70 [4];
  undefined4 uStack_6c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  SensorData *local_34;
  float local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c208a;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar4 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c = 0;
  // [seh] local_8 = 0;
  pSVar7 = (SensorData *)0x0;
  iVar6 = *(int *)((char *)this + 0x24);
  local_34 = (SensorData *)0x0;
  iVar1 = *(int *)(*(int *)(iVar6 + 0x44) + 0x128);
  *(undefined4 *)((char *)this + 0x20) = 0;
  local_14 = pbVar4;
  if (*(int *)((char *)this + 0x48) == 0) {
    if ((iVar1 == 0) &&
       (local_38 = 0,
       *(int *)(*(int *)(iVar6 + 0x44) + 0x130) - *(int *)(*(int *)(iVar6 + 0x44) + 300) >> 2 != 0))
    {
      do {
        pSVar2 = *(SensorData **)(*(int *)(*(int *)(iVar6 + 0x44) + 300) + local_38 * 4);
        if ((*(int *)(pSVar2 + 0x130) != 0) &&
           (pbVar5 = ghidra::lib::_Find_unchecked___x28_x29((std::string *)(pSVar2 + 0x90),pbVar4,unaff_EDI),
           pSVar7 = local_34, pbVar5 == *(std::string **)((char *)this + 0x54))) {
          if ((*(char *)(*(int *)(g_gameData + 0xcc) + 0xb8) != '\0') ||
             (bVar3 = (*(Ship **)(pSVar2 + 0x130))->hasCargo(), bVar3)) {
            local_40 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
            local_3c = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
            local_48 = (float)((double)*(float *)(pSVar2 + 0x104) + *(double *)(pSVar2 + 0x10));
            local_44 = (float)((double)*(float *)(pSVar2 + 0x108) + *(double *)(pSVar2 + 0x18));
            // [seh] local_8._0_1_ = 2;
            fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_48,(Vec2 *)&local_40);
            local_30 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            if ((((&minEngagementDistance)[*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x78)]
                  == (int *)0x0) ||
                (pSVar7 = local_34,
                (1.5 - fVar8 * 0.5 * local_30 * local_30) * local_30 * fVar8 <=
                (float)(int)(&minEngagementDistance)
                            [*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x78)])) &&
               ((iVar6 = shipWeight(this,pSVar2), local_34 == (SensorData *)0x0 ||
                (pSVar7 = local_34, 0 < iVar6)))) {
              pSVar7 = pSVar2;
              local_34 = pSVar2;
            }
          }
          else {
            ghidra::str::assign
                      ((std::string *)&stack0xffffff8c,
                       "Ignoring vessel \'%s\' as it has no cargo we can detect.",0x36);
            Ship::log();
            ghidra::str::ctor
                      (abStack_70,(std::string *)(*(int *)(pSVar2 + 0x130) + 0x238));
            ignoreVessel(this);
            pSVar7 = local_34;
          }
        }
        iVar6 = *(int *)((char *)this + 0x24);
        local_38 = local_38 + 1;
      } while (local_38 <
               (uint)(*(int *)(*(int *)(iVar6 + 0x44) + 0x130) -
                      *(int *)(*(int *)(iVar6 + 0x44) + 300) >> 2));
      if (pSVar7 != (SensorData *)0x0) {
        *(undefined4 *)((char *)this + 0x20) = 0x40000000;
        *(SensorData **)((char *)this + 0x48) = pSVar7;
        uStack_6c = 0x4fec5d;
        debugPrint("AI","%s: selected possible piracy target, %s");
      }
    }
  }
  else if ((iVar1 == 0) && (*(float *)(*(int *)((char *)this + 0x48) + 0x40) <= 120.0)) {
    *(undefined4 *)((char *)this + 0x20) = 0x40000000;
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIPiracy::runLogic(AIPiracy *this,float param_1)
void AIPiracy::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  float fVar2;
  AIPiracy *pAVar3;
  undefined4 *puVar4;
  float fVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c20c2;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x4c) == 0) {
    // [cookie] runApproachTargetLogic(this,(float)(___security_cookie ^ (uint)&stack0xfffffffc));
  }
  else if (*(int *)((char *)this + 0x4c) == 1) {
    *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 0;
    local_18 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
    local_14 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
    iVar1 = *(int *)((char *)this + 0x48);
    local_20 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
    local_1c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
    // [seh] local_8 = 1;
    fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&local_18);
    fVar2 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
    // [seh] local_8 = 0xffffffff;
    fVar5 = (1.5 - fVar5 * 0.5 * fVar2 * fVar2) * fVar2 * fVar5;
    if (*(float *)((char *)this + 0x40) <= fVar5 && fVar5 != *(float *)((char *)this + 0x40)) {
      pAVar3 = this + 8;
      if (0xf < *(uint *)((char *)this + 0x1c)) {
        pAVar3 = *(AIPiracy **)pAVar3;
      }
      debugPrint("AI",
                 "%s: My target distance is increasing. We should be more or less behind him, time to approach as quietly as we can."
                 ,pAVar3);
      puVar4 = (undefined4 *)(*(int *)((char *)this + 0x24) + 8);
      *(undefined4 *)((char *)this + 0x4c) = 0;
      *(undefined4 *)((char *)this + 0x30) = 0;
      if (0xf < *(uint *)(*(int *)((char *)this + 0x24) + 0x1c)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      debugPrint("AI","%s: changing piracy state to %s",puVar4,"Approaching Target");
      iVar1 = *(int *)((char *)this + 0x24);
      *(undefined4 *)(iVar1 + 0x380) = *(undefined4 *)(*(int *)((char *)this + 0x48) + 0x130);
      *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
      *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
      // [seh] ExceptionList = local_10;
      return;
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPiracy::enterState(AIPiracy *this)
void AIPiracy::enterState()

{
  GameData *pGVar1;
  bool bVar2;
  AIPiracy AVar3;
  int iVar4;
  float fVar5;
  std::string local_48 [4];
  undefined4 uStack_44;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  // [seh] void *local_10;
  Vec2 **ppVStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  ppVStack_c = &param_1_005c20fb;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  ((char *)this)[0x3c] = (byte)0x0;
  local_48[0] = (std::string)0x0;
  ghidra::str::assign(local_48,"Entering piracy mode.",0x15);
  Ship::log();
  iVar4 = ShipBehaviour::getNextTubeWithValidWeapon
                    (*(ShipBehaviour **)(*(int *)((char *)this + 0x24) + 0x44));
  *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) = iVar4;
  if (*(char *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x15d) != '\0') {
    local_18 = 0;
    local_14 = 0.0;
    // [seh] local_8 = 0;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)(*(int *)((char *)this + 0x24) + 0x118),(Vec2 *)&local_18)
    ;
    // [seh] local_8 = 0xffffffff;
    if ((local_14 == 0.0) && (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x74) != 3)) {
      *(undefined4 *)((char *)this + 0x4c) = 1;
      uStack_44 = 0x4ff040;
      debugPrint("AI","%s: changing piracy state to %s");
      goto LAB_004ff0a6;
    }
  }
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  uStack_44 = 0x4ff074;
  debugPrint("AI","%s: changing piracy state to %s");
  iVar4 = *(int *)((char *)this + 0x24);
  local_18 = 0xc61c3c00;
  local_14 = -9999.0;
  *(undefined4 *)(iVar4 + 0x380) = *(undefined4 *)(*(int *)((char *)this + 0x48) + 0x130);
  *(undefined4 *)(iVar4 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar4 + 0xcc) = 0xc61c3c00;
LAB_004ff0a6:
  local_20 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
  local_1c = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
  iVar4 = *(int *)((char *)this + 0x48);
  local_28 = (float)((double)*(float *)(iVar4 + 0x104) + *(double *)(iVar4 + 0x10));
  local_24 = (float)((double)*(float *)(iVar4 + 0x108) + *(double *)(iVar4 + 0x18));
  // [seh] local_8 = 2;
  fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
  pGVar1 = g_gameData;
  local_14 = (float)(0x5f3759df - (int)((uint)fVar5 >> 1));
  *(float *)((char *)this + 0x40) = (1.5 - fVar5 * 0.5 * local_14 * local_14) * local_14 * fVar5;
  if ((*(char *)(*(int *)(pGVar1 + 0xcc) + 0xb8) != '\0') ||
     (bVar2 = GameLogic::playerHostilePiratesInSector
                        ((GameLogic *)((uint)fVar5 >> 1),*(int *)(*(int *)((char *)this + 0x24) + 0x20)),
     AVar3 = (byte)0x0, bVar2)) {
    AVar3 = (byte)0x1;
  }
  ((char *)this)[0x3d] = AVar3;
  *(undefined1 **)((char *)this + 0x38) = &DAT_bf800000;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIPiracy::leaveState(AIPiracy *this)
void AIPiracy::leaveState()

{
  int iVar1;
  int iVar2;
  int iVar3;
  std::string local_38 [8];
  undefined4 uStack_30;
  
  local_38[0] = (std::string)0x0;
  ghidra::str::assign(local_38,"Leaving piracy mode.",0x14);
  Ship::log();
  iVar2 = *(int *)((char *)this + 0x24);
  if (*(int *)(*(int *)(iVar2 + 0x40) + 0x20) != 0) {
    iVar3 = 0x3c;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(*(int *)(iVar2 + 0x40) + 0x20));
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) != '\0')) {
        uStack_30 = 0x4ff231;
        debugPrint("DETAIL","%s: I have shut down.");
        *(undefined1 *)(iVar1 + 0x3c5) = 0;
        *(undefined1 *)(iVar1 + 0x3cc) = 1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x5c);
    iVar2 = *(int *)((char *)this + 0x24);
  }
  *(undefined4 *)(iVar2 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0x380) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = 0xc61c3c00;
  *(undefined4 *)((char *)this + 0x48) = 0;
  return;
}


// Ghidra: void __thiscall AIPiracy::runApproachTargetLogic(AIPiracy *this,float param_1)
void AIPiracy::runApproachTargetLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  Vec2 *pVVar6;
  uint uVar7;
  std::string *pbVar8;
  int iVar9;
  nothrow_t *pnVar10;
  int *piVar11;
  LogSystem *this_00;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  ShipBehaviour *this_01;
  void *pvVar15;
  Vec2 *unaff_EDI;
  bool bVar16;
  float fVar17;
  float fVar18;
  float in_XMM1_Da;
  std::string abStack_ac [8];
  undefined4 uStack_a4;
  char *pcVar19;
  uint uVar20;
  std::string local_94 [8];
  undefined4 uStack_8c;
  char *local_5c;
  uint local_50;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c2162;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar6 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pVVar6;
  if ((*(int *)((char *)this + 0x24) == 0) || (iVar9 = *(int *)(*(int *)((char *)this + 0x24) + 0x44), iVar9 == 0))
  {
    debugPrint("ERROR","Invalid ship for behaviour logic AIPiracy");
    goto LAB_004ffd58;
  }
  if (*(int *)((char *)this + 0x48) == 0) goto LAB_004ffd58;
  *(undefined1 *)(iVar9 + 0x50) = 0;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  fVar17 = *(float *)((char *)this + 0x30);
  *(float *)((char *)this + 0x30) = fVar17 + in_XMM1_Da;
  if (fVar17 + in_XMM1_Da <= 120.0) {
    fVar17 = (float)((double)*(float *)(*(int *)((char *)this + 0x48) + 0x108) +
                    *(double *)(*(int *)((char *)this + 0x48) + 0x18));
    // [seh] local_8 = 1;
    fastDistance(pVVar6,unaff_EDI);
    // [seh] local_8 = 0xffffffff;
    iVar9 = *(int *)((char *)this + 0x24);
    if (20.0 <= fVar17) {
      if (*(int *)(iVar9 + 0x380) == 0) {
        *(undefined4 *)(iVar9 + 0x380) = *(undefined4 *)(*(int *)((char *)this + 0x48) + 0x130);
        goto LAB_004ff41a;
      }
    }
    else {
      *(undefined4 *)(iVar9 + 0x380) = 0;
LAB_004ff41a:
      *(undefined4 *)(iVar9 + 200) = 0xc61c3c00;
      *(undefined4 *)(iVar9 + 0xcc) = 0xc61c3c00;
    }
    ghidra::str::ctor
              ((std::string *)local_2c,
               (std::string *)(*(int *)(*(int *)((char *)this + 0x48) + 0x130) + 0x238));
    iVar14 = *(int *)((char *)this + 0x24);
    local_50 = 0;
    iVar9 = *(int *)(iVar14 + 0x214);
    uVar20 = *(int *)(iVar14 + 0x218) - iVar9 >> 2;
    pvVar12 = local_2c[0];
    if (uVar20 != 0) {
      do {
        pvVar15 = local_2c[0];
        iVar2 = *(int *)(iVar9 + local_50 * 4);
        if (*(int *)(iVar2 + 0xe0) == 6) {
          uVar13 = 0;
          piVar11 = *(int **)(*(int *)(iVar14 + 0x24) + 0x9c);
          uVar7 = *(int *)(*(int *)(iVar14 + 0x24) + 0xa0) - (int)piVar11 >> 2;
          if (uVar7 != 0) {
            do {
              iVar14 = *piVar11;
              pvVar12 = pvVar15;
              if (*(int *)(iVar14 + 0x44) == *(int *)(iVar2 + 4)) {
                if (iVar14 == 0) break;
                bVar16 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar6,(uint)unaff_EDI);
                if (!bVar16) {
                  pcVar19 = (char *)(iVar14 + 0x68);
                  if (0xf < *(uint *)(iVar14 + 0x7c)) {
                    pcVar19 = *(char **)(iVar14 + 0x68);
                  }
                  bVar16 = ghidra::lib::_Traits_equal_t
                                     (pcVar19,*(uint *)(iVar14 + 0x78),(char *)pVVar6,
                                      (uint)unaff_EDI);
                  if (!bVar16) break;
                }
                if (0xf < local_18) {
                  pnVar10 = (nothrow_t *)(local_18 + 1);
                  if ((nothrow_t *)0xfff < pnVar10) {
                    pvVar12 = *(void **)((int)pvVar15 + -4);
                    pnVar10 = (nothrow_t *)(local_18 + 0x24);
                    if (0x1f < (uint)((int)pvVar15 + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  operator_delete(pvVar12,pnVar10);
                }
                uStack_a4 = 0x4ff5d0;
                ghidra::str::assign
                          ((std::string *)&stack0xffffff68,
                           "Ignoring vessel \'%s\' as they\'ve dropped cargo.",0x2e);
                Ship::log();
                iVar9 = 0x3c;
                do {
                  piVar11 = *(int **)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20) +
                                     iVar9);
                  if ((piVar11 != (int *)0x0) && ((char)piVar11[0xf1] != '\0')) {
                    (**(code **)(*piVar11 + 0x10))();
                  }
                  iVar9 = iVar9 + 4;
                } while (iVar9 < 0x5c);
                ghidra::str::ctor
                          (local_94,(std::string *)
                                    (*(int *)(*(int *)((char *)this + 0x48) + 0x130) + 0x238));
                ignoreVessel(this);
                local_94[0] = (std::string)0x0;
                ghidra::str::assign(local_94,"Prey dropped cargo. A wise choice.",0x22);
                Ship::log();
                local_94[0] = (std::string)0x0;
                ghidra::str::assign(local_94,"A wise choice.",0xe);
                // [seh] local_8 = 2;
                abStack_ac[0] = (std::string)0x0;
                ghidra::str::assign(abStack_ac,"XX-XXX",6);
                // [seh] local_8 = 0xffffffff;
                ShipChatter::addMessage
                          (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c),3);
                *(undefined4 *)((char *)this + 0x48) = 0;
                goto LAB_004ffd58;
              }
              uVar13 = uVar13 + 1;
              piVar11 = piVar11 + 1;
            } while (uVar13 < uVar7);
          }
          iVar14 = *(int *)((char *)this + 0x24);
        }
        local_50 = local_50 + 1;
      } while (local_50 < uVar20);
    }
    if (0xf < local_18) {
      pnVar10 = (nothrow_t *)(local_18 + 1);
      pvVar15 = pvVar12;
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar15 = *(void **)((int)pvVar12 + -4);
        pnVar10 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar10);
    }
    bVar16 = false;
    piVar11 = *(int **)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20);
    if (((piVar11 != (int *)0x0) && (cVar4 = (**(code **)(*piVar11 + 0x10))(), cVar4 != '\0')) &&
       (iVar9 = *(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20) + 0x3c +
                        *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) * 4), iVar9 != 0)) {
      bVar16 = *(char *)(iVar9 + 0x3bc) != '\0';
    }
    if (((char *)this)[0x3c] == (byte)0x0) {
      if (bVar16) {
        piVar11 = *(int **)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20);
        if ((piVar11 != (int *)0x0) && (cVar4 = (**(code **)(*piVar11 + 0x10))(), cVar4 != '\0')) {
          ((char *)this)[0x3c] = (byte)0x1;
          uStack_a4 = 0x4ff76c;
          ghidra::str::assign
                    ((std::string *)&stack0xffffff68,"Spun up my weapon in tube %d.",0x1d);
          Ship::log();
        }
        goto LAB_004ff777;
      }
LAB_004ff77b:
      *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 1;
      *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 1;
    }
    else {
LAB_004ff777:
      if (!bVar16) goto LAB_004ff77b;
      if (80.0 <= fVar17) {
        *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 1;
      }
      else {
        *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x50) = 0;
      }
    }
    if ((((char *)this)[0x3d] == (byte)0x0) &&
       (((float)(&piracyDistance)[*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x74)] == -1.0
        || (fVar17 <= (float)(&piracyDistance)
                             [*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x74)] * 1.5)))) {
      ((char *)this)[0x3d] = (byte)0x1;
      local_94[0] = (std::string)0x0;
      ghidra::str::assign(local_94,"Warned target.",0xe);
      Ship::log();
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      // [seh] local_8 = 3;
      bVar5 = ghidra::lib::_Traits_equal___x28_x29("Unknown",7,(char *)pVVar6,(uint)unaff_EDI);
      if (bVar5) {
        uStack_8c = 0x4ff88e;
        pbVar8 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 4;
      }
      else {
        uStack_8c = 0x4ff8e8;
        pbVar8 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 5;
      }
      ghidra::str::append((std::string *)local_44,pbVar8);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar12 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar12 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) goto LAB_004ff8c8;
        }
        operator_delete(pvVar12,pnVar10);
      }
      uVar13 = 0;
      uVar20 = (uint)local_2c[0] >> 8;
      local_2c[0] = (void *)(uVar20 << 8);
      local_18 = 0xf;
      local_1c = 0;
      piVar11 = *(int **)(g_gameData + 0x9c);
      uVar7 = *(int *)(g_gameData + 0xa0) - (int)piVar11 >> 2;
      if (uVar7 != 0) {
        do {
          if ((*(char *)(*piVar11 + 0x18) != '\0') &&
             (**(int **)(*piVar11 + 0x1c) == *(int *)(*(int *)((char *)this + 0x24) + 0x20))) {
            ghidra::str::ctor
                      ((std::string *)local_2c,(std::string *)(*piVar11 + 0x78));
            goto LAB_004ff973;
          }
          uVar13 = uVar13 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar13 < uVar7);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)(uVar20 << 8);
      ghidra::str::assign((std::string *)local_2c,"",0);
LAB_004ff973:
      uVar20 = local_18;
      pvVar12 = local_2c[0];
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar6,(uint)unaff_EDI);
      if ((((!bVar5) && (*(int *)((char *)this + 0x48) != 0)) &&
          (iVar9 = *(int *)(*(int *)((char *)this + 0x48) + 0x130), iVar9 != 0)) &&
         (*(char *)(iVar9 + 0x234) != '\0')) {
        ghidra::lib::basic_string__operator_x3d((std::string *)local_44,(std::string *)local_2c);
        uVar20 = local_18;
        pvVar12 = local_2c[0];
      }
      ghidra::str::ctor(local_94,(std::string *)local_44);
      // [seh] local_8._0_1_ = 7;
      abStack_ac[0] = (std::string)0x0;
      ghidra::str::assign(abStack_ac,"XX-XXX",6);
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage(3);
      iVar9 = *(int *)(g_gameData + 0xd0);
      local_5c = (char *)(iVar9 + 0x238);
      if (0xf < *(uint *)(iVar9 + 0x24c)) {
        local_5c = *(char **)local_5c;
      }
      bVar5 = ghidra::lib::_Traits_equal___x28_x29(local_5c,*(uint *)(iVar9 + 0x248),(char *)pVVar6,(uint)unaff_EDI)
      ;
      if (bVar5) {
        uStack_8c = 0x4ffa7f;
        (this_00)->addLogLine(*(LogPriority *)(iVar9 + 0x224), &DAT_00000004);
      }
      iVar9 = rand();
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      *(float *)((char *)this + 0x38) = (float)(iVar9 % 6 + 3);
      if (0xf < uVar20) {
        pnVar10 = (nothrow_t *)(uVar20 + 1);
        pvVar15 = pvVar12;
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar15 = *(void **)((int)pvVar12 + -4);
          pnVar10 = (nothrow_t *)(uVar20 + 0x24);
          if (0x1f < (uint)((int)pvVar12 + (-4 - (int)pvVar15))) goto LAB_004ff8c8;
        }
        operator_delete(pvVar15,pnVar10);
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar12 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar12 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) {
LAB_004ff8c8:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar12,pnVar10);
      }
    }
    if ((0.0 < *(float *)((char *)this + 0x38)) &&
       (fVar18 = *(float *)((char *)this + 0x38) - in_XMM1_Da, *(float *)((char *)this + 0x38) = fVar18,
       fVar18 <= 0.0)) {
      *(undefined4 *)((char *)this + 0x38) = 0;
      if ((*(int *)((char *)this + 0x48) != 0) &&
         ((iVar9 = *(int *)(*(int *)((char *)this + 0x48) + 0x130), iVar9 != 0 &&
          (puVar3 = *(undefined4 **)(iVar9 + 0x44), puVar3 != (undefined4 *)0x0)))) {
        (**(code **)*puVar3)();
      }
    }
    if (((char *)this)[0x3e] == (byte)0x0) {
      piVar11 = *(int **)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20);
      if ((piVar11 != (int *)0x0) && (cVar4 = (**(code **)(*piVar11 + 0x10))(), cVar4 != '\0')) {
        iVar9 = *(int *)((char *)this + 0x24);
        if ((((float)(&piracyDistance)[*(int *)(*(int *)(iVar9 + 0x44) + 0x74)] == -1.0) ||
            (fVar17 <= (float)(&piracyDistance)[*(int *)(*(int *)(iVar9 + 0x44) + 0x74)])) &&
           (bVar16)) {
          bVar16 = ShipModule::validHousedWeaponInSlot
                             (*(ShipModule **)(*(int *)(iVar9 + 0x40) + 0x20),
                              *(int *)(*(int *)(iVar9 + 0x44) + 0x5c));
          if (bVar16) {
            ((char *)this)[0x3e] = (byte)0x1;
            *(uint *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x40) + 0x20) + 0x3c +
                              *(int *)(*(int *)(iVar9 + 0x44) + 0x5c) * 4) + 0x38c) =
                 -(uint)(*(int *)(*(int *)((char *)this + 0x48) + 0x130) != 0) &
                 *(int *)(*(int *)((char *)this + 0x48) + 0x130) + 8U;
            iVar9 = *(int *)((char *)this + 0x48);
            fVar17 = *(float *)(iVar9 + 0x108);
            dVar1 = *(double *)(iVar9 + 0x18);
            iVar14 = *(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x40) + 0x20) + 0x3c +
                             *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) * 4);
            *(float *)(iVar14 + 300) =
                 (float)((double)*(float *)(iVar9 + 0x104) + *(double *)(iVar9 + 0x10));
            *(float *)(iVar14 + 0x130) = (float)((double)fVar17 + dVar1);
            (*(Ship **)((char *)this + 0x24))->fireWeapon(*(int *)(*(int *)(*(Ship **)((char *)this + 0x24) + 0x44) + 0x5c));
            local_94[0] = (std::string)0x0;
            ghidra::str::assign(local_94,"Fired a torpedo at my target.",0x1d);
            Ship::log();
          }
          else {
            iVar9 = (this_01)->getNextTubeWithValidWeapon();
            *(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x5c) = iVar9;
            uStack_a4 = 0x4ffbff;
            ghidra::str::assign
                      ((std::string *)&stack0xffffff68,
                       "Had an invalid weapon selected Changing over to tube %d",0x37);
            Ship::log();
          }
        }
      }
      if (((char *)this)[0x3e] == (byte)0x0) goto LAB_004ffd58;
    }
    local_94[0] = (std::string)0x0;
    ghidra::str::assign(local_94,"",0);
    bVar16 = (*(Ship **)((char *)this + 0x24))->hasWeaponFired();
    if (bVar16) goto LAB_004ffd58;
    ghidra::str::ctor
              (local_94,(std::string *)(*(int *)(*(int *)((char *)this + 0x48) + 0x130) + 0x238));
    ignoreVessel(this);
    uVar20 = 0x3c;
    pcVar19 = "Giving up on this piracy target. Already wasted one torpedo.";
  }
  else {
    ghidra::str::ctor
              (local_94,(std::string *)(*(int *)(*(int *)((char *)this + 0x48) + 0x130) + 0x238));
    ignoreVessel(this);
    uVar20 = 0x47;
    pcVar19 = "Giving up on this piracy target. They\'re giving up too much of a chase.";
  }
  local_94[0] = (std::string)0x0;
  ghidra::str::assign(local_94,pcVar19,uVar20);
  Ship::log();
  *(undefined4 *)((char *)this + 0x48) = 0;
LAB_004ffd58:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIPiracy::removeDesireTarget(AIPiracy *this,GameObject *param_1)
void AIPiracy::removeDesireTarget(GameObject * param_1)

{
  int iVar1;
  
  if (((*(int *)((char *)this + 0x48) != 0) && (iVar1 = *(int *)(*(int *)((char *)this + 0x48) + 0x130), iVar1 != 0)
      ) && ((GameObject *)(iVar1 + 8) == param_1)) {
    *(undefined4 *)((char *)this + 0x48) = 0;
  }
  if (*(GameObject **)((char *)this + 0x28) == param_1) {
    *(undefined4 *)((char *)this + 0x28) = 0;
  }
  return;
}


// Ghidra: void __thiscall AIPiracy::removeSensorObject(AIPiracy *this,SensorData *param_1)
void AIPiracy::removeSensorObject(SensorData * param_1)

{
  if (param_1 == *(SensorData **)((char *)this + 0x48)) {
    *(undefined4 *)((char *)this + 0x48) = 0;
  }
  return;
}


// Ghidra: char * __thiscall AIPiracy::describe(AIPiracy *this)
char * AIPiracy::describe()

{
  int iVar1;
  undefined4 *puVar2;
  char *in_stack_00000004;
  
  if (*(int *)((char *)this + 0x48) != 0) {
    iVar1 = *(int *)(*(int *)((char *)this + 0x48) + 0x130);
    puVar2 = (undefined4 *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    strUsingArgs(in_stack_00000004,"Piracy from %s (%s)",puVar2,
                 (&PTR_s_approach_005e1494)[*(int *)((char *)this + 0x4c)]);
    return in_stack_00000004;
  }
  strUsingArgs(in_stack_00000004,"Piracy without a target (%s)",
               (&PTR_s_approach_005e1494)[*(int *)((char *)this + 0x4c)]);
  return in_stack_00000004;
}
