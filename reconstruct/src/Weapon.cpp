// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Weapon::~Weapon(Weapon *this)
Weapon::~Weapon()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)((char *)this + 0x414);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x400);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004950f7;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x410) = 0;
  *(undefined4 *)((char *)this + 0x414) = 0xf;
  ((char *)this)[0x400] = (byte)0x0;
  pvVar2 = *(void **)((char *)this + 0x3f0);
  if (pvVar2 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x3f8) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004950f7;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x3f0) = 0;
    *(undefined4 *)((char *)this + 0x3f4) = 0;
    *(undefined4 *)((char *)this + 0x3f8) = 0;
  }
  pvVar2 = *(void **)((char *)this + 0x3e4);
  if (pvVar2 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x3ec) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_004950f7;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x3e4) = 0;
    *(undefined4 *)((char *)this + 1000) = 0;
    *(undefined4 *)((char *)this + 0x3ec) = 0;
  }
  uVar1 = *(uint *)((char *)this + 0x3b4);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x3a0);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_004950f7:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x3b0) = 0;
  *(undefined4 *)((char *)this + 0x3b4) = 0xf;
  ((char *)this)[0x3a0] = (byte)0x0;
  ((Ship *)this)->~Ship();
  return;
}


// Ghidra: bool __thiscall Weapon::isSpinningUp(Weapon *this)
bool Weapon::isSpinningUp()

{
  if ((((char *)this)[0x3bc] == (byte)0x0) && (*(float *)((char *)this + 0x3c0) != -1.0)) {
    return true;
  }
  return false;
}


// Ghidra: bool __thiscall Weapon::isWeapon(Weapon *this)
bool Weapon::isWeapon()

{
  if ((*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) != 3) &&
     (*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) != 5)) {
    return false;
  }
  return true;
}


// Ghidra: Weapon * __thiscall Weapon::Weapon(Weapon *this,Ship *param_1,WeaponClass *param_2)
Weapon::Weapon(Ship * param_1, WeaponClass * param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  std::string local_5c [8];
  undefined4 uStack_54;
  char acStack_44 [16];
  undefined4 uStack_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4387;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar2 = 0;
  iVar3 = 2;
  do {
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    iVar2 = iVar2 + 1 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  s_currentWeaponID = s_currentWeaponID + iVar2;
  uStack_54 = 0x51cdfe;
  strUsingArgs(acStack_44);
  local_5c[0] = (std::string)0x0;
  // [seh] local_8 = iVar3;
  ghidra::str::assign(local_5c,"",0);
  // [seh] local_8 = 0xffffffff;
  new ((void *)((Ship *)this)) Ship(param_2, *(undefined4 *)(param_2 + 0x1b4));
  // [vtable] *(undefined ***)this = vftable;
  *(WeaponClass **)((char *)this + 0x388) = param_2;
  *(undefined4 *)((char *)this + 0x38c) = 0;
  *(undefined4 *)((char *)this + 0x390) = 0xc61c3c00;
  *(undefined4 *)((char *)this + 0x394) = 0xc61c3c00;
  // [seh] local_8._0_1_ = 2;
  // [seh] local_8._1_3_ = 0;
  *(Ship **)((char *)this + 0x39c) = param_1;
  uStack_34 = 0x51ce81;
  ghidra::str::ctor
            ((std::string *)((char *)this + 0x3a0),(std::string *)(param_1 + 0x238));
  *(undefined4 *)((char *)this + 0x3b8) = 0;
  ((char *)this)[0x3bc] = (byte)0x0;
  *(undefined1 **)((char *)this + 0x3c0) = &DAT_bf800000;
  *(undefined2 *)((char *)this + 0x3c4) = 0;
  *(undefined4 *)((char *)this + 0x3c8) = 0;
  ((char *)this)[0x3cc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x3d0) = 0;
  *(undefined4 *)((char *)this + 0x3d8) = 0x19;
  ((char *)this)[0x3dc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x3e0) = 0;
  *(undefined4 *)((char *)this + 0x3e4) = 0;
  *(undefined4 *)((char *)this + 1000) = 0;
  *(undefined4 *)((char *)this + 0x3ec) = 0;
  *(undefined4 *)((char *)this + 0x3f0) = 0;
  *(undefined4 *)((char *)this + 0x3f4) = 0;
  *(undefined4 *)((char *)this + 0x3f8) = 0;
  ((char *)this)[0x3fc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x410) = 0;
  *(undefined4 *)((char *)this + 0x414) = 0xf;
  ((char *)this)[0x400] = (byte)0x0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,6);
  *(undefined4 *)((char *)this + 0x418) = 0;
  *(undefined1 **)((char *)this + 0x41c) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x420) = 0;
  *(undefined1 *)(*(int *)((char *)this + 0x40) + 0x34) = 0;
  ((char *)this)[0x235] = (byte)0x0;
  updateTarget(this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Weapon::getSolutionString(Weapon *this)
void Weapon::getSolutionString()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  std::string *in_stack_00000004;
  char *pcVar6;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c2e81;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  iVar1 = *(int *)((char *)this + 0x3b8);
  local_14 = uVar2;
  if (iVar1 == 0) {
    ghidra::str::append(in_stack_00000004,"`8nil",5);
  }
  else {
    if (iVar1 < 0x51) {
      if (iVar1 < 0x1f) {
        pcVar6 = "`@";
      }
      else {
        pcVar6 = "`$";
      }
    }
    else {
      pcVar6 = "`0";
    }
    ghidra::str::append(in_stack_00000004,pcVar6,2);
    pcVar3 = (char *)strUsingArgs((char *)local_2c,"%d%%",*(undefined4 *)((char *)this + 0x3b8),uVar2);
    // [seh] local_8 = 1;
    pcVar6 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar6 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar3 + 0x10));
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall Weapon::alwaysKnown(Weapon *this,Ship *param_1)
bool Weapon::alwaysKnown(Ship * param_1)

{
  int iVar1;
  
  if (((((param_1 == (Ship *)0x0) || (*(int *)(*(int *)((char *)this + 0x254) + 0x158) != 4)) ||
       (*(Ship **)((char *)this + 0x39c) != param_1)) &&
      ((iVar1 = *(int *)(*(int *)((char *)this + 0x254) + 0x158), iVar1 != 1 && (iVar1 != 2)))) &&
     ((iVar1 != 3 && ((iVar1 != 4 || (*(Ship **)((char *)this + 0x39c) != param_1)))))) {
    return false;
  }
  return true;
}


// Ghidra: int __thiscall Weapon::getSpinUpPercent(Weapon *this,int param_1)
int Weapon::getSpinUpPercent(int param_1)

{
  if (((char *)this)[0x3bc] != (byte)0x0) {
    return 100;
  }
  if (*(float *)((char *)this + 0x3c0) == -1.0) {
    return 0;
  }
  return (int)(100.0 - (*(float *)((char *)this + 0x3c0) / (float)param_1) * 100.0);
}


// Ghidra: int __thiscall Weapon::getCurrentCalculatedPowerPercantage(Weapon *this,int param_1)
int Weapon::getCurrentCalculatedPowerPercantage(int param_1)

{
  if (((char *)this)[0x3bc] == (byte)0x0) {
    if (*(float *)((char *)this + 0x3c0) == -1.0) {
      return 0;
    }
    return (int)(100.0 - (*(float *)((char *)this + 0x3c0) / (float)param_1) * 100.0);
  }
  if (((char *)this)[0x3c4] == (byte)0x0) {
    return 100;
  }
  return *(int *)((char *)this + 0x420);
}


// Ghidra: bool __thiscall Weapon::canFire(Weapon *this)
bool Weapon::canFire()

{
  Weapon WVar1;
  
  WVar1 = ((char *)this)[0x3bc];
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1) {
    if ((WVar1 == (byte)0x0) && (*(float *)((char *)this + 0x3c0) == -1.0)) {
      return false;
    }
    WVar1 = (byte)0x1;
  }
  return (bool)WVar1;
}


// Ghidra: bool __thiscall Weapon::isDestroyed(Weapon *this)
bool Weapon::isDestroyed()

{
  return (bool)((char *)this)[0x3cc];
}


// Ghidra: bool __thiscall Weapon::damage(Weapon *this,int param_1,float param_2,DamageType param_3)
bool Weapon::damage(int param_1, float param_2, DamageType param_3)

{
  if ((param_3 == 5) && (*(char *)(*(int *)((char *)this + 0x388) + 0x1a4) != '\0')) {
    return false;
  }
  (**(code **)(*(int *)this + 0x10))();
  return true;
}


// Ghidra: void __thiscall Weapon::destroy(Weapon *this)
void Weapon::destroy()

{
  Weapon *pWVar1;
  
  pWVar1 = this + 8;
  if (0xf < *(uint *)((char *)this + 0x1c)) {
    pWVar1 = *(Weapon **)pWVar1;
  }
  debugPrint("DETAIL","%s: I am destroyed.",pWVar1);
  if ((((char *)this)[0x3cc] == (byte)0x0) && (((char *)this)[0x3c5] != (byte)0x0)) {
    detonateWarhead(this);
  }
  ((char *)this)[0x3cc] = (byte)0x1;
  return;
}


// Ghidra: void __thiscall Weapon::runHomeLogic(Weapon *this,float param_1)
void Weapon::runHomeLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff48[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  Vec2 *pVVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  SensorData *this_00;
  SoundEngine *this_01;
  FlagManager *pFVar5;
  int iVar6;
  void **ppvVar7;
  int *piVar8;
  int *piVar9;
  Ship *pSVar10;
  void *pvVar11;
  int iVar12;
  char ****ppppcVar13;
  CounterMeasure *pCVar14;
  Weapon *pWVar15;
  nothrow_t *pnVar16;
  float fVar17;
  uint uVar18;
  Vec2 *unaff_EDI;
  int iVar19;
  Weapon *pWVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  std::string local_e8 [12];
  undefined4 uStack_dc;
  CounterMeasure local_d0 [12];
  undefined4 uStack_c4;
  Weapon *local_b4;
  Sound SVar27;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  Weapon *local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CounterMeasure *local_68;
  float local_64;
  float local_60;
  CounterMeasure *local_5c;
  float local_58;
  char ***local_54;
  float local_50;
  float local_4c;
  CounterMeasure *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c44e0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar2 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  fVar17 = 0.0;
  local_54 = (char ***)0x0;
  local_50 = 0.0;
  if ((*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) == 3) ||
     (*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) == 5)) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  if ((bVar21) && (*(char *)(*(int *)(*(int *)((char *)this + 0x40) + 4) + 0x62) == '\0')) {
    *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x40) + 4) + 0x62) = 1;
  }
  local_5c = (CounterMeasure *)0x0;
  pWVar20 = this;
  local_7c = this;
  local_14 = pVVar2;
  if (*(int *)((char *)this + 0x38c) == 0) {
    pCVar14 = (CounterMeasure *)0x0;
    iVar12 = *(int *)((char *)this + 0x214);
    uVar18 = 0;
    local_68 = (CounterMeasure *)0x0;
    if (*(int *)((char *)this + 0x218) - iVar12 >> 2 != 0) {
      do {
        iVar12 = *(int *)(iVar12 + uVar18 * 4);
        if (((*(int *)(iVar12 + 0xe0) == 0) && (iVar19 = *(int *)(iVar12 + 0x130), iVar19 != 0)) &&
           (iVar12 != 0)) {
          if (pCVar14 == (CounterMeasure *)0x0) {
LAB_0051d47d:
            bVar21 = true;
          }
          else {
            local_84 = (float)*(double *)((char *)this + 0x28);
            local_80 = (float)*(double *)((char *)this + 0x30);
            local_8c = (float)*(double *)(pCVar14 + 0x28);
            local_88 = (float)*(double *)(pCVar14 + 0x30);
            local_64 = (float)*(double *)(iVar19 + 0x28);
            local_60 = (float)*(double *)(iVar19 + 0x30);
            // [seh] local_8 = 3;
            fVar17 = 2.10195e-44;
            local_54 = (char ***)0xf;
            local_74 = local_84;
            local_70 = local_80;
            local_78 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_8c,(Vec2 *)&local_84);
            local_48 = (CounterMeasure *)(local_78 * 0.5);
            local_58 = (float)(0x5f3759df - ((uint)local_78 >> 1));
            local_54 = (char ***)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_64,(Vec2 *)&local_74);
            local_50 = (float)(0x5f3759df - ((uint)local_54 >> 1));
            if ((1.5 - (float)local_54 * 0.5 * local_50 * local_50) * local_50 * (float)local_54 <
                (1.5 - (float)local_48 * local_58 * local_58) * local_58 * local_78)
            goto LAB_0051d47d;
            bVar21 = false;
          }
          if (((uint)fVar17 & 8) != 0) {
            fVar17 = (float)((uint)fVar17 & 0xfffffff7);
          }
          if (((uint)fVar17 & 4) != 0) {
            fVar17 = (float)((uint)fVar17 & 0xfffffffb);
          }
          if (((uint)fVar17 & 2) != 0) {
            fVar17 = (float)((uint)fVar17 & 0xfffffffd);
          }
          if (((uint)fVar17 & 1) != 0) {
            fVar17 = (float)((uint)fVar17 & 0xfffffffe);
          }
          pCVar14 = local_68;
          if (bVar21) {
            local_68 = *(CounterMeasure **)(*(int *)(*(int *)((char *)this + 0x214) + uVar18 * 4) + 0x130);
            pCVar14 = local_68;
          }
        }
        // [seh] local_8 = 0xffffffff;
        uVar18 = uVar18 + 1;
        iVar12 = *(int *)((char *)this + 0x214);
      } while (uVar18 < (uint)(*(int *)((char *)this + 0x218) - iVar12 >> 2));
      local_50 = fVar17;
      if (pCVar14 != (CounterMeasure *)0x0) {
        debugPrint("AI","%s: detected a target: %s");
        setTarget(this,(GameObject *)(pCVar14 + 8));
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_44,"invalid",7);
    // [seh] local_8 = 4;
    iVar12 = *(int *)((char *)this + 0x38c);
    if (*(int *)(iVar12 + 0x30) == 1) {
      ppvVar3 = (void **)(iVar12 + 0x230);
      if (iVar12 == 0) {
        ppvVar3 = (void **)&DAT_00000238;
      }
      if (local_44 != ppvVar3) {
        ppvVar7 = ppvVar3;
        if ((void *)0xf < ppvVar3[5]) {
          ppvVar7 = *ppvVar3;
        }
        ghidra::str::assign((std::string *)local_44,(char *)ppvVar7,(uint)ppvVar3[4]);
      }
    }
    ghidra::str::ctor((std::string *)&local_b4,(std::string *)local_44);
    pWVar15 = this + 8;
    uStack_c4 = 0x51d5b4;
    local_5c = GameLogic::getClosestCounterMeasureTo();
    if (local_5c == (CounterMeasure *)0x0) {
LAB_0051d66f:
      bVar21 = false;
    }
    else {
      local_64 = (float)*(double *)((char *)this + 0x28);
      local_60 = (float)*(double *)((char *)this + 0x30);
      local_74 = (float)*(double *)(local_5c + 0x28);
      local_70 = (float)*(double *)(local_5c + 0x30);
      // [seh] local_8 = 6;
      fVar17 = 6.72623e-44;
      local_50 = 6.72623e-44;
      local_54 = (char ***)&DAT_00000030;
      local_48 = (CounterMeasure *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_74,(Vec2 *)&local_64)
      ;
      local_58 = (float)(0x5f3759df - ((uint)local_48 >> 1));
      if (*(float *)(local_5c + 100) <
          (1.5 - (float)local_48 * 0.5 * local_58 * local_58) * local_58 * (float)local_48)
      goto LAB_0051d66f;
      bVar21 = true;
    }
    if (((uint)fVar17 & 0x20) != 0) {
      fVar17 = (float)((uint)fVar17 & 0xffffffdf);
      local_50 = fVar17;
    }
    // [seh] local_8 = 4;
    if (((uint)fVar17 & 0x10) != 0) {
      fVar17 = (float)((uint)fVar17 & 0xffffffef);
      local_50 = fVar17;
    }
    if (bVar21) {
      fVar22 = (float)*(double *)(local_5c + 0x30);
      uVar24 = 0;
      ((Ship *)this)->trueAngleToPosition();
      dVar26 = (double)CONCAT44(uVar24,fVar22) - (double)*(float *)((char *)this + 0x120);
      if (dVar26 < 0.0) {
        dVar26 = dVar26 + 360.0;
      }
      fVar22 = *(float *)(*(int *)(*(int *)(*(int *)((char *)this + 0x40) + 4) + 8) + 0x104) * 0.5;
      if ((fVar22 < (float)(int)dVar26) && ((float)(int)dVar26 < 360.0 - fVar22)) goto LAB_0051d8ec;
      piVar9 = *(int **)((char *)this + 1000);
      piVar8 = *(int **)((char *)this + 0x3e4);
      if (piVar8 == piVar9) {
LAB_0051d783:
        piVar9 = *(int **)(pWVar20 + 0x3f4);
        piVar8 = *(int **)(pWVar20 + 0x3f0);
        if (piVar8 != piVar9) {
          do {
            if (*piVar8 == *(int *)(local_5c + 0x44)) break;
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar9);
          if (piVar8 != piVar9) goto LAB_0051d8ec;
        }
        iVar12 = rand();
        local_48 = (CounterMeasure *)(iVar12 % 100 + 1);
        local_b4 = (Weapon *)0x51d7e1;
        debugPrint("AI","%s: CM percentile check: %d vs %d");
        if (*(int *)(local_5c + 0xf0) < (int)local_48) {
          if (0xf < *(uint *)((char *)this + 0x1c)) {
            pWVar15 = *(Weapon **)pWVar15;
          }
          local_68 = local_5c + 0x44;
          local_b4 = pWVar15;
          debugPrint("AI","%s: CM #%d at %f, %f has failed. Ignoring it.");
          ppMVar1 = *(MetaGameAction ***)(pWVar20 + 0x3f4);
          if (*(MetaGameAction ***)(pWVar20 + 0x3f8) == ppMVar1) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(pWVar20 + 0x3f0),ppMVar1,(MetaGameAction **)local_68);
          }
          else {
            *ppMVar1 = *(MetaGameAction **)local_68;
            *(int *)(pWVar20 + 0x3f4) = *(int *)(pWVar20 + 0x3f4) + 4;
          }
          goto LAB_0051d8ec;
        }
        if (0xf < *(uint *)((char *)this + 0x1c)) {
          pWVar15 = *(Weapon **)pWVar15;
        }
        local_48 = local_5c + 0x44;
        local_b4 = pWVar15;
        debugPrint("AI","%s: CM #%d at %f, %f has succeeded. Aiming for it instead.");
        local_6c = (float)*(double *)(local_5c + 0x28);
        local_68 = (CounterMeasure *)(float)*(double *)(local_5c + 0x30);
        *(float *)(pWVar20 + 300) = local_6c;
        *(CounterMeasure **)(pWVar20 + 0x130) = local_68;
        ppMVar1 = *(MetaGameAction ***)(pWVar20 + 1000);
        if (*(MetaGameAction ***)(pWVar20 + 0x3ec) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(pWVar20 + 0x3e4),ppMVar1,(MetaGameAction **)local_48);
          dVar26 = *(double *)(local_5c + 0x28);
          uVar24 = (undefined4)*(undefined8 *)(local_5c + 0x30);
          uVar25 = (undefined4)((ulonglong)*(undefined8 *)(local_5c + 0x30) >> 0x20);
        }
        else {
          *ppMVar1 = *(MetaGameAction **)(local_5c + 0x44);
          *(int *)(pWVar20 + 1000) = *(int *)(pWVar20 + 1000) + 4;
          dVar26 = *(double *)(local_5c + 0x28);
          uVar24 = (undefined4)*(undefined8 *)(local_5c + 0x30);
          uVar25 = (undefined4)((ulonglong)*(undefined8 *)(local_5c + 0x30) >> 0x20);
        }
      }
      else {
        do {
          if (*piVar8 == *(int *)(local_5c + 0x44)) break;
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar9);
        fVar17 = local_50;
        pWVar20 = local_7c;
        if (piVar8 == piVar9) goto LAB_0051d783;
        dVar26 = *(double *)(local_5c + 0x30);
        *(float *)(local_7c + 300) = (float)*(double *)(local_5c + 0x28);
        *(float *)(local_7c + 0x130) = (float)dVar26;
        dVar26 = *(double *)(local_5c + 0x28);
        uVar24 = (undefined4)*(undefined8 *)(local_5c + 0x30);
        uVar25 = (undefined4)((ulonglong)*(undefined8 *)(local_5c + 0x30) >> 0x20);
      }
LAB_0051daf0:
      local_4c = (float)dVar26;
      local_48 = (CounterMeasure *)(float)(double)CONCAT44(uVar25,uVar24);
      *(float *)(pWVar20 + 300) = local_4c;
      *(CounterMeasure **)(pWVar20 + 0x130) = local_48;
    }
    else {
LAB_0051d8ec:
      iVar12 = *(int *)(pWVar20 + 0x38c);
      if (*(int *)(iVar12 + 0x30) != 1) {
        dVar26 = *(double *)(iVar12 + 0x20);
        uVar24 = (undefined4)*(undefined8 *)(iVar12 + 0x28);
        uVar25 = (undefined4)((ulonglong)*(undefined8 *)(iVar12 + 0x28) >> 0x20);
        goto LAB_0051daf0;
      }
      bVar21 = Ship::canCurrentlyDetect
                         ((Ship *)pWVar20,(Ship *)(-(uint)(iVar12 != 0) & iVar12 - 8U));
      if (bVar21) {
        iVar12 = *(int *)(pWVar20 + 0x38c);
        if (*(Ship *)(pWVar20 + 0x3dc) == (byte)0x0) {
          debugPrint("AI","%s: regained contact with my target, %s");
          iVar12 = *(int *)(pWVar20 + 0x38c);
          *(Ship *)(pWVar20 + 0x3dc) = (byte)0x1;
        }
        puVar4 = (undefined4 *)(iVar12 + 0xf8);
        if (iVar12 == 0) {
          puVar4 = (undefined4 *)&DAT_00000100;
        }
        *puVar4 = 0;
        piVar9 = (int *)(*(int *)(pWVar20 + 0x38c) + 0x248);
        if (*(int *)(pWVar20 + 0x38c) == 0) {
          piVar9 = (int *)&DAT_00000250;
        }
        this_00 = ((Ship *)pWVar20)->getSensorDataForShipID(*piVar9);
        puVar4 = (undefined4 *)(this_00)->getPresumedLocation();
        fVar22 = *(float *)(pWVar20 + 0x3e0);
        *(undefined4 *)(pWVar20 + 300) = *puVar4;
        *(undefined4 *)(pWVar20 + 0x130) = puVar4[1];
        *(float *)(pWVar20 + 0x3e0) = fVar22 - param_1;
        if (fVar22 - param_1 <= 0.0) {
          local_64 = (float)*(double *)(pWVar20 + 0x28);
          fVar23 = (float)*(double *)(pWVar20 + 0x30);
          // [seh] local_8._0_1_ = 7;
          local_60 = fVar23;
          fastDistance(pVVar2,unaff_EDI);
          // [seh] local_8 = CONCAT31(local_8._1_3_,4);
          fVar22 = 60.0;
          if (fVar23 <= 60.0) {
            fVar22 = fVar23;
          }
          iVar12 = *(int *)(pWVar20 + 0x38c);
          *(float *)(pWVar20 + 0x3e0) = (fVar22 / 60.0) * 4.0 + 0.6;
          if (*(int *)(iVar12 + 0x30) == 1) {
            if (15.0 <= fVar22) {
              iVar19 = (fVar22 < 30.0) + 1;
            }
            else {
              iVar19 = 3;
            }
            SVar27 = 0x23;
            pSVar10 = (Ship *)(-(uint)(iVar12 != 0) & iVar12 - 8U);
            this_01 = ghidra::any_singleton();
            (this_01)->playSound(pSVar10, SVar27, iVar19);
            local_b4 = (Weapon *)0x51daa5;
            debugPrint("DETAIL","%s: PINGING! Ping timer = %f");
          }
        }
      }
      else if (*(Ship *)(pWVar20 + 0x3dc) != (byte)0x0) {
        debugPrint("AI","%s: Lost contact with my target, %s");
        *(Ship *)(pWVar20 + 0x3dc) = (byte)0x0;
      }
    }
    // [seh] local_8 = 0xffffffff;
    if (0xf < local_30) {
      pnVar16 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar16 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar16);
    }
  }
  local_58 = 0.1;
  fVar22 = 0.1;
  if ((*(int *)(*(int *)(pWVar20 + 0x388) + 0x194) != 0) &&
     (fVar22 = local_58, *(int *)(*(int *)(pWVar20 + 0x388) + 0x194) == 1)) {
    fVar22 = 0.6;
  }
  local_58 = fVar22;
  runAimLogic(pWVar20);
  local_b4 = (Weapon *)0x51dbcd;
  local_48 = (CounterMeasure *)GameData::getShipWithinDistance();
  if (local_48 != (CounterMeasure *)0x0) {
    debugPrint("AI","%s: Triggering explosive due to proximity to %s");
    pCVar14 = local_48;
    if (*(Ship *)(local_48 + 0x234) != (byte)0x0) {
      local_48 = (CounterMeasure *)&local_b4;
      local_b4 = (Weapon *)((uint)local_b4 & 0xffffff00);
      ghidra::str::assign((std::string *)&local_b4,"hit_by_torp",0xb);
      // [seh] local_8 = 8;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        local_68 = operator_new(0x58);
        // [seh] local_8 = CONCAT31(local_8._1_3_,9);
        Singleton<Stats>::instance = (Stats *)new ((void *)((Stats *)local_68)) Stats();
      }
      // [seh] local_8 = 0xffffffff;
      (Singleton<Stats>::instance)->addStat();
      local_48 = (CounterMeasure *)&stack0xffffff48;
      uStack_c4 = 0x51dc9e;
      ghidra::str::assign((std::string *)&stack0xffffff48,"",0);
      local_68 = local_d0;
      // [seh] local_8 = 10;
      local_d0[0] = (byte)0x0;
      uStack_dc = 0x51dcca;
      ghidra::str::assign((std::string *)local_d0,"hit_by_torp",0xb);
      // [seh] local_8 = CONCAT31(local_8._1_3_,0xb);
      local_e8[0] = (std::string)0x0;
      ghidra::str::assign(local_e8,"play",4);
      // [seh] local_8 = 0xffffffff;
      Analytics::logEvent();
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      ghidra::str::assign((std::string *)local_2c,"torpedo_hit_player",0x12);
      local_48 = (CounterMeasure *)&stack0xffffff48;
      // [seh] local_8 = 0xc;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff48,(std::string *)local_2c);
      // [seh] local_8._0_1_ = 0xd;
      pFVar5 = ghidra::any_singleton();
      // [seh] local_8 = CONCAT31(local_8._1_3_,0xc);
      (pFVar5)->setFlag();
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar16 = (nothrow_t *)(local_18 + 1);
        ppppcVar13 = (char ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          ppppcVar13 = (char ****)local_2c[0][-1];
          pnVar16 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar13,pnVar16);
      }
    }
    iVar12 = *(int *)(pCVar14 + 0x254);
    bVar21 = false;
    if (iVar12 != 0) {
      bVar21 = *(int *)(iVar12 + 0x158) == 0;
    }
    if (bVar21) {
LAB_0051ddc7:
      strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0xe;
      local_54 = (char ***)local_2c;
      if (0xf < local_18) {
        local_54 = local_2c[0];
      }
      ppppcVar13 = local_2c;
      if (0xf < local_18) {
        ppppcVar13 = (char ****)local_2c[0];
      }
      iVar12 = ((int)local_54 + local_1c) - (int)ppppcVar13;
      if ((char ****)((int)local_54 + local_1c) < ppppcVar13) {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        local_54 = (char ***)((int)local_54 - (int)ppppcVar13);
        iVar19 = 0;
        do {
          iVar6 = tolower((int)*(char *)ppppcVar13);
          iVar19 = iVar19 + 1;
          *(char *)((int)ppppcVar13 + (int)local_54) = (char)iVar6;
          fVar17 = local_50;
          ppppcVar13 = (char ****)((int)ppppcVar13 + 1);
          pWVar20 = local_7c;
        } while (iVar19 != iVar12);
      }
      local_48 = (CounterMeasure *)&stack0xffffff48;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff48,(std::string *)local_2c);
      // [seh] local_8._0_1_ = 0xf;
      pFVar5 = ghidra::any_singleton();
      // [seh] local_8 = CONCAT31(local_8._1_3_,0xe);
      (pFVar5)->setFlag();
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar16 = (nothrow_t *)(local_18 + 1);
        ppppcVar13 = (char ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          ppppcVar13 = (char ****)local_2c[0][-1];
          pnVar16 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar13,pnVar16);
      }
    }
    else {
      bVar21 = false;
      if (iVar12 != 0) {
        bVar21 = *(int *)(iVar12 + 0x158) == 1;
      }
      if (bVar21) goto LAB_0051ddc7;
    }
    detonateWarhead(pWVar20);
  }
  if (local_5c != (CounterMeasure *)0x0) {
    local_64 = (float)*(double *)(pWVar20 + 0x28);
    local_60 = (float)*(double *)(pWVar20 + 0x30);
    local_74 = (float)*(double *)(local_5c + 0x28);
    local_70 = (float)*(double *)(local_5c + 0x30);
    // [seh] local_8 = 0x11;
    local_54 = (char ***)((uint)fVar17 | 0xc0);
    local_48 = (CounterMeasure *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_74,(Vec2 *)&local_64);
    local_54 = (char ***)(0x5f3759df - ((uint)local_48 >> 1));
    if ((1.5 - (float)local_48 * 0.5 * (float)local_54 * (float)local_54) * (float)local_54 *
        (float)local_48 <= local_58) {
      bVar21 = true;
      goto LAB_0051df68;
    }
  }
  bVar21 = false;
LAB_0051df68:
  // [seh] local_8 = 0xffffffff;
  if (bVar21) {
    debugPrint("AI","%s: Triggering explosive due to proximity to CM %d");
    detonateWarhead(pWVar20);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Weapon::detonateWarhead(Weapon *this)
void Weapon::detonateWarhead()

{
  int iVar1;
  StellarObject *pSVar2;
  Weapon *pWVar3;
  LogSystem *this_00;
  LogSystem *this_01;
  LogSystem *this_02;
  char *pcVar4;
  
  if (((char *)this)[0x3cc] != (byte)0x0) {
    return;
  }
  ((char *)this)[0x3cc] = (byte)0x1;
  if ((*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) == 3) ||
     (*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) == 5)) {
    if ((*(int *)(g_gameData + 0xd0) != 0) && (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) {
      return;
    }
    pWVar3 = this + 8;
    if (0xf < *(uint *)((char *)this + 0x1c)) {
      pWVar3 = *(Weapon **)pWVar3;
    }
    debugPrint("AI","%s: Triggering my warhead.",pWVar3);
    GameLogic::explosion();
    if (((char *)this)[0x3fc] == (byte)0x0) {
      return;
    }
    this_02 = *(LogSystem **)((char *)this + 0x39c);
    if (this_02 == (LogSystem *)0x0) {
      return;
    }
    if (*(int *)((char *)this + 0x420) != 0) {
      return;
    }
    iVar1 = *(int *)((char *)this + 0x3c8);
    pcVar4 = "Battery dead on weapon #%d, contact lost.";
  }
  else {
    if (((char *)this)[0x3fc] == (byte)0x0) {
      return;
    }
    this_02 = *(LogSystem **)((char *)this + 0x39c);
    if (this_02 == (LogSystem *)0x0) {
      return;
    }
    if (*(int *)((char *)this + 0x420) != 0) {
      pSVar2 = Sector::getStellarObjectNear
                         (*(Sector **)((char *)this + 0x24),(float)*(double *)((char *)this + 0x28),
                          (float)*(double *)((char *)this + 0x30));
      if (pSVar2 == (StellarObject *)0x0) {
        debugPrint("WARNING","Probe was supposed to enter orbit around object, but didn\'t.");
        LogSystem::addLogLine
                  (this_01,*(LogPriority *)(*(int *)((char *)this + 0x39c) + 0x224),&DAT_00000002,
                   "Probe from tube %d in scanning position.",*(int *)((char *)this + 0x3c8) + 1);
        return;
      }
      if (0xf < *(uint *)(pSVar2 + 0x14)) {
        pSVar2 = *(StellarObject **)pSVar2;
      }
      LogSystem::addLogLine
                (this_00,*(LogPriority *)(*(int *)((char *)this + 0x39c) + 0x224),&DAT_00000002,
                 "Probe from tube %d in scanning orbit of %s",*(int *)((char *)this + 0x3c8) + 1,pSVar2);
      return;
    }
    iVar1 = *(int *)((char *)this + 0x3c8);
    pcVar4 = "Battery dead on probe #%d, contact lost.";
  }
  (this_02)->addLogLine(*(LogPriority *)(this_02 + 0x224), &DAT_00000002, pcVar4, iVar1 + 1);
  return;
}


// Ghidra: void __thiscall Weapon::runEmissionsLogic(Weapon *this,float param_1)
void Weapon::runEmissionsLogic(float param_1)

{
  if (((char *)this)[0x3c5] == (byte)0x0) {
    if ((((char *)this)[0x3c4] != (byte)0x0) || (((char *)this)[0x3bc] != (byte)0x0)) {
      *(float *)((char *)this + 0xdc) = (float)*(int *)(*(int *)((char *)this + 0x254) + 200);
      return;
    }
    if (*(float *)((char *)this + 0x3c0) == -1.0) {
      *(undefined4 *)((char *)this + 0xdc) = 0;
      return;
    }
  }
  *(float *)((char *)this + 0xdc) = (float)*(int *)(*(int *)((char *)this + 0x254) + 0xc0);
  return;
}


// Ghidra: void __thiscall Weapon::runLogic(Weapon *this,float param_1)
void Weapon::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  SystemManager *this_00;
  GameData *pGVar2;
  bool bVar3;
  float fVar4;
  FlagManager *pFVar5;
  float fVar6;
  std::string local_40 [12];
  undefined4 local_34;
  int local_30;
  float local_18;
  undefined1 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c4521;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar4 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0xd4) = 1;
  if (((*(float *)((char *)this + 0x3c0) != -1.0) && (((char *)this)[0x3c4] == (byte)0x0)) &&
     (fVar6 = *(float *)((char *)this + 0x3c0) - param_1, *(float *)((char *)this + 0x3c0) = fVar6,
     pGVar2 = g_gameData, fVar6 <= 0.0)) {
    *(undefined4 *)((char *)this + 0x3c0) = 0;
    ((char *)this)[0x3bc] = (byte)0x1;
    if (((*(int *)(pGVar2 + 0xcc) != 0) && (*(int *)(*(int *)(pGVar2 + 0xcc) + 0x70) == 1)) &&
       (*(char *)(*(int *)(*(int *)((char *)this + 0x40) + 0x48) + 0x234) != '\0')) {
      local_14 = &stack0xffffffbc;
      local_34 = 0;
      local_30 = 0xf;
      ghidra::str::assign((std::string *)&stack0xffffffbc,"spun_up_torpedo",0xf);
      // [seh] local_8 = 0;
      pFVar5 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pFVar5)->setFlag();
    }
  }
  runEmissionsLogic(this,fVar4);
  if ((*(float *)((char *)this + 300) == -9999.0) && (*(float *)((char *)this + 0x130) == -9999.0)) {
    *(undefined1 **)((char *)this + 0x41c) = &DAT_bf800000;
  }
  else {
    local_18 = (float)*(double *)((char *)this + 0x28);
    local_14 = (undefined1 *)(float)*(double *)((char *)this + 0x30);
    // [seh] local_8 = 1;
    local_30 = 0x51e358;
    fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)((char *)this + 300),(Vec2 *)&local_18);
    local_14 = (undefined1 *)(0x5f3759df - ((uint)fVar6 >> 1));
    // [seh] local_8 = 0xffffffff;
    *(float *)((char *)this + 0x41c) =
         (1.5 - fVar6 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar6;
  }
  updateTarget(this);
  iVar1 = *(int *)((char *)this + 0x38c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x30) == 1) {
      local_30 = 0x51e3d3;
      bVar3 = ((Ship *)this)->canCurrentlyDetect((Ship *)(iVar1 + -8));
      if ((bVar3) || (*(int *)(iVar1 + 0x30) == 1)) goto LAB_0051e40d;
    }
    local_18 = (float)*(double *)(iVar1 + 0x20);
    local_14 = (undefined1 *)(float)*(double *)(iVar1 + 0x28);
    *(float *)((char *)this + 300) = local_18;
    *(undefined1 **)((char *)this + 0x130) = local_14;
  }
LAB_0051e40d:
  iVar1 = *(int *)((char *)this + 0x3d0);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      runTravelLogic(this,fVar4);
    }
    else if (iVar1 == 2) {
      local_30 = 0x51e43c;
      (**(code **)(*(int *)this + 0x2c))();
    }
    else if (iVar1 == 3) {
      local_30 = 0x51e455;
      (**(code **)(*(int *)this + 0x28))();
    }
  }
  local_30 = 0x51e467;
  ((Ship *)this)->runLogic(param_1);
  this_00 = *(SystemManager **)((char *)this + 0x40);
  iVar1 = *(int *)(*(int *)(this_00 + 0x48) + 0x254);
  bVar3 = false;
  if (iVar1 != 0) {
    bVar3 = *(int *)(iVar1 + 0x158) == 1;
  }
  if (!bVar3) {
    bVar3 = false;
    if (iVar1 != 0) {
      bVar3 = *(int *)(iVar1 + 0x158) == 2;
    }
    if (!bVar3) {
      (this_00)->totalCurrentPower();
      fVar4 = param_1;
      (this_00)->totalPossiblePower();
      local_30 = (int)((param_1 / fVar4) * 100.0);
      goto LAB_0051e4ca;
    }
  }
  local_30 = 100;
LAB_0051e4ca:
  *(int *)((char *)this + 0x420) = local_30;
  if ((local_30 == 0) && (((char *)this)[0x3c4] != (byte)0x0)) {
    local_40[0] = (std::string)0x0;
    ghidra::str::assign(local_40,"I\'m out of power. Destroying myself.",0x24);
    Ship::log();
    (**(code **)(*(int *)this + 0x10))();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Weapon::updateTarget(Weapon *this)
void Weapon::updateTarget()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char *pcVar6;
  SensorData *pSVar7;
  std::string *pbVar8;
  word *pwVar9;
  int *piVar10;
  nothrow_t *pnVar11;
  word *pwVar12;
  uint unaff_EDI;
  std::string *local_54 [5];
  uint local_40;
  std::string *local_3c [4];
  uint local_2c;
  uint local_28;
  char *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005be8f8;
  // [seh] local_1c = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = pcVar6;
  if (*(int *)((char *)this + 0x38c) == 0) {
LAB_0051e6fc:
    if ((*(float *)((char *)this + 300) == -9999.0) && (*(float *)((char *)this + 0x130) == -9999.0)) {
      // [seh] puStack_20 = &stack0xfffffffc;
      ghidra::str::assign((std::string *)((char *)this + 0x400),"`8none",6);
      goto LAB_0051e7b6;
    }
    pwVar9 = (word *)strUsingArgs((char *)local_54,"`2%.2f^%.2f",(double)*(float *)((char *)this + 300),
                                  (double)*(float *)((char *)this + 0x130));
    pwVar12 = (word *)((char *)this + 0x400);
    if (pwVar12 != pwVar9) {
      // [mislabelled-dtor] word::~word(pwVar12);
      uVar2 = *(undefined4 *)(pwVar9 + 4);
      uVar3 = *(undefined4 *)(pwVar9 + 8);
      uVar4 = *(undefined4 *)(pwVar9 + 0xc);
      *(undefined4 *)pwVar12 = *(undefined4 *)pwVar9;
      *(undefined4 *)((char *)this + 0x404) = uVar2;
      *(undefined4 *)((char *)this + 0x408) = uVar3;
      *(undefined4 *)((char *)this + 0x40c) = uVar4;
      *(undefined8 *)((char *)this + 0x410) = *(undefined8 *)(pwVar9 + 0x10);
      *(undefined4 *)(pwVar9 + 0x10) = 0;
      *(undefined4 *)(pwVar9 + 0x14) = 0xf;
      *pwVar9 = (word)0x0;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)((char *)this + 0x38c) + 0x30);
    if (iVar1 == 1) {
      local_2c = 0;
      local_28 = 0xf;
      local_3c[0] = (std::string *)((uint)local_3c[0] & 0xffffff00);
      // [seh] puStack_20 = &stack0xfffffffc;
      ghidra::str::assign((std::string *)local_3c,"`%",2);
      local_14 = 0;
      local_54[0] = local_3c[0];
      local_40 = local_28;
      if ((*(Ship **)((char *)this + 0x39c) != (Ship *)0x0) && (((char *)this)[0x3fc] != (byte)0x0)) {
        piVar10 = (int *)(*(int *)((char *)this + 0x38c) + 0x248);
        if (*(int *)((char *)this + 0x38c) == 0) {
          piVar10 = (int *)&DAT_00000250;
        }
        pSVar7 = (*(Ship **)((char *)this + 0x39c))->getSensorDataForShipID(*piVar10);
        if (pSVar7 == (SensorData *)0x0) {
LAB_0051e643:
          ghidra::str::append((std::string *)local_3c,"ship",4);
        }
        else {
          bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
          if (bVar5) {
            bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
            if (bVar5) goto LAB_0051e643;
            ghidra::str::append
                      ((std::string *)local_3c,(std::string *)(pSVar7 + 0x60));
          }
          else {
            ghidra::str::append
                      ((std::string *)local_3c,(std::string *)(pSVar7 + 0x48));
          }
        }
        local_54[0] = local_3c[0];
        local_40 = local_28;
        if ((std::string *)((char *)this + 0x400) != (std::string *)local_3c) {
          pbVar8 = (std::string *)local_3c;
          if (0xf < local_28) {
            pbVar8 = local_3c[0];
          }
          ghidra::str::assign((std::string *)((char *)this + 0x400),(char *)pbVar8,local_2c);
          local_54[0] = local_3c[0];
          local_40 = local_28;
        }
      }
    }
    else {
      if (iVar1 != 0) goto LAB_0051e6fc;
      // [seh] puStack_20 = &stack0xfffffffc;
      pwVar9 = (word *)strUsingArgs((char *)local_3c,"`0%s");
      pwVar12 = (word *)((char *)this + 0x400);
      local_54[0] = local_3c[0];
      local_40 = local_28;
      if (pwVar12 != pwVar9) {
        // [mislabelled-dtor] word::~word(pwVar12);
        uVar2 = *(undefined4 *)(pwVar9 + 4);
        uVar3 = *(undefined4 *)(pwVar9 + 8);
        uVar4 = *(undefined4 *)(pwVar9 + 0xc);
        *(undefined4 *)pwVar12 = *(undefined4 *)pwVar9;
        *(undefined4 *)((char *)this + 0x404) = uVar2;
        *(undefined4 *)((char *)this + 0x408) = uVar3;
        *(undefined4 *)((char *)this + 0x40c) = uVar4;
        *(undefined8 *)((char *)this + 0x410) = *(undefined8 *)(pwVar9 + 0x10);
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
        local_54[0] = local_3c[0];
        local_40 = local_28;
      }
    }
  }
  if (0xf < local_40) {
    pnVar11 = (nothrow_t *)(local_40 + 1);
    pbVar8 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pbVar8 = *(std::string **)(local_54[0] + -4);
      pnVar11 = (nothrow_t *)(local_40 + 0x24);
      if ((std::string *)0x1f < local_54[0] + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar8,pnVar11);
  }
LAB_0051e7b6:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall Weapon::runTravelLogic(Weapon *this,float param_1)
void Weapon::runTravelLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Vec2 *pVVar1;
  Ship *this_00;
  Vec2 *pVVar2;
  int *piVar3;
  SensorData *this_01;
  undefined4 *puVar4;
  StellarObject *pSVar5;
  FlagManager *pFVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  nothrow_t *pnVar9;
  Vec2 *unaff_EDI;
  bool bVar10;
  float fVar11;
  std::string abStack_74 [8];
  undefined4 uStack_6c;
  float local_38;
  undefined1 *local_34;
  Ship *local_30;
  undefined4 ***local_2c [5];
  uint local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c45af;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar2 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_30 = (Ship *)0x0;
  pVVar1 = (Vec2 *)((char *)this + 300);
  local_14 = pVVar2;
  if (((*(float *)pVVar1 == -9999.0) && (*(float *)((char *)this + 0x130) == -9999.0)) &&
     (*(int *)((char *)this + 0x38c) == 0)) {
    if ((*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) == 3) ||
       (*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) == 5)) {
      if (*(int *)(*(int *)((char *)this + 0x40) + 4) != 0) {
        *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x40) + 4) + 0x62) = 0;
      }
      piVar3 = *(int **)((char *)this + 0x40);
    }
    else {
      piVar3 = *(int **)((char *)this + 0x40);
      if (*piVar3 != 0) {
        *(undefined1 *)(*piVar3 + 0x62) = 0;
        iVar7 = *(int *)(*(int *)((char *)this + 0x40) + 0x10);
        bVar10 = iVar7 == 0;
        goto LAB_0051ec2f;
      }
    }
    iVar7 = piVar3[4];
    bVar10 = iVar7 == 0;
  }
  else {
    if (((((char *)this)[0x3fc] != (byte)0x0) &&
        (this_00 = *(Ship **)((char *)this + 0x39c), this_00 != (Ship *)0x0)) &&
       ((iVar7 = *(int *)((char *)this + 0x38c), iVar7 != 0 && (*(int *)(iVar7 + 0x30) == 1)))) {
      local_30 = (Ship *)(iVar7 + -8);
      bVar10 = (this_00)->canCurrentlyDetect(local_30);
      if (bVar10) {
        this_01 = (this_00)->getSensorDataForShipID(*(int *)(local_30 + 0x250));
        puVar4 = (undefined4 *)(this_01)->getPresumedLocation();
        *(undefined4 *)pVVar1 = *puVar4;
        *(undefined4 *)((char *)this + 0x130) = puVar4[1];
      }
    }
    runAimLogic(this);
    if ((*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) != 3) &&
       (*(int *)(*(int *)((char *)this + 0x388) + 0x1b4) != 5)) {
      local_38 = (float)*(double *)((char *)this + 0x28);
      local_34 = (undefined1 *)(float)*(double *)((char *)this + 0x30);
      // [seh] local_8 = 3;
      fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,pVVar1);
      local_30 = (Ship *)(0x5f3759df - ((uint)fVar11 >> 1));
      // [seh] local_8 = 0xffffffff;
      if ((1.5 - fVar11 * 0.5 * (float)local_30 * (float)local_30) * (float)local_30 * fVar11 <= 2.0
         ) {
        pSVar5 = (*(Sector **)((char *)this + 0x24))->getStellarObjectNear();
        local_30 = (Ship *)pSVar5;
        if (pSVar5 == (StellarObject *)0x0) {
          local_38 = -9999.0;
          local_34 = (undefined1 *)0xc61c3c00;
          *(undefined4 *)pVVar1 = 0xc61c3c00;
          *(undefined4 *)((char *)this + 0x3d0) = 3;
          *(undefined4 *)((char *)this + 0x130) = 0xc61c3c00;
        }
        else {
          bVar10 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar2,(uint)unaff_EDI);
          if (!bVar10) {
            local_34 = abStack_74;
            ghidra::str::ctor(abStack_74,(std::string *)(pSVar5 + 0x74));
            // [seh] local_8 = 4;
            pFVar6 = ghidra::any_singleton();
            // [seh] local_8 = 0xffffffff;
            (pFVar6)->setFlag();
          }
          ghidra::str::ctor
                    ((std::string *)local_2c,(std::string *)(pSVar5 + 0x5c));
          // [seh] local_8 = 5;
          ghidra::lib::transform___x28_x29();
          ppppuVar8 = local_2c;
          if (0xf < local_18) {
            ppppuVar8 = (undefined4 ****)local_2c[0];
          }
          local_34 = abStack_74;
          strUsingArgs((char *)abStack_74,"scanned_%s",ppppuVar8);
          // [seh] local_8._0_1_ = 6;
          pFVar6 = ghidra::any_singleton();
          // [seh] local_8 = CONCAT31(local_8._1_3_,5);
          (pFVar6)->setFlag();
          uStack_6c = 0x51eae6;
          debugPrint("DETAIL","Scanned stellar object \'%s\' (%s) with a probe.");
          (**(code **)(*(int *)this + 0x10))();
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
        }
      }
      goto LAB_0051ec35;
    }
    iVar7 = *(int *)((char *)this + 0x39c);
    if ((iVar7 == 0) || (((char *)this)[0x3fc] == (byte)0x0)) {
LAB_0051ec11:
      bVar10 = true;
    }
    else {
      local_38 = (float)*(double *)(iVar7 + 0x28);
      local_34 = (undefined1 *)(float)*(double *)(iVar7 + 0x30);
      fVar11 = (float)*(double *)((char *)this + 0x30);
      // [seh] local_8 = 1;
      local_30 = (Ship *)0x6;
      fastDistance(pVVar2,unaff_EDI);
      if (30.0 < fVar11) goto LAB_0051ec11;
      fVar11 = (float)*(double *)((char *)this + 0x30);
      // [seh] local_8 = 2;
      local_30 = (Ship *)0xe;
      fastDistance(pVVar2,unaff_EDI);
      if (fVar11 < 20.0) goto LAB_0051ec11;
      bVar10 = false;
    }
    // [seh] local_8 = 0xffffffff;
    if (bVar10) {
      goActive(this);
    }
    iVar7 = *(int *)(*(int *)((char *)this + 0x40) + 4);
    bVar10 = *(char *)(iVar7 + 0x62) == '\0';
  }
LAB_0051ec2f:
  if (!bVar10) {
    *(undefined1 *)(iVar7 + 0x62) = 0;
  }
LAB_0051ec35:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Weapon::runStopLogic(Weapon *this,float param_1)
void Weapon::runStopLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c1f39;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar1 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0;
  // [seh] local_8 = 0;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)((char *)this + 0x118),(Vec2 *)&local_1c);
  // [seh] local_8 = 0xffffffff;
  if (local_14 != 0.0) {
    ((Ship *)this)->performAllStopLogic(fVar1);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Weapon::runAimLogic(Weapon *this,undefined4 param_1,undefined4 param_3)
void Weapon::runAimLogic(undefined4 param_1, undefined4 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  float fVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c45e9;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar1 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  fVar2 = (float)*(double *)((char *)this + 0x28);
  angleInDegreesFrom(fVar2,(float)*(double *)((char *)this + 0x30),param_1,param_3);
  if (fVar2 != *(float *)((char *)this + 0x128)) {
    ((Ship *)this)->rotateTo(fVar1);
  }
  if ((*(float *)((char *)this + 0x120) - 5.0 <= fVar2) && (fVar2 <= *(float *)((char *)this + 0x120) + 5.0)) {
    *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x40) + 0x10) + 0x62) = 1;
    // [seh] ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x40) + 0x10) + 0x62) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Weapon::goActive(Weapon *this)
void Weapon::goActive()

{
  Weapon *pWVar1;
  
  if (*(int *)((char *)this + 0x3d0) == 1) {
    pWVar1 = this + 0x238;
    if (0xf < *(uint *)((char *)this + 0x24c)) {
      pWVar1 = *(Weapon **)pWVar1;
    }
    debugPrint("AI","%s: Going active.",pWVar1);
    *(undefined4 *)((char *)this + 0x3d0) = 2;
    ((char *)this)[0x3c5] = (byte)0x1;
    *(float *)((char *)this + 0x390) = (float)*(double *)((char *)this + 0x28);
    *(float *)((char *)this + 0x394) = (float)*(double *)((char *)this + 0x30);
  }
  return;
}


// Ghidra: void __thiscall Weapon::setTarget(Weapon *this,GameObject *param_1)
void Weapon::setTarget(GameObject * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  double dVar1;
  FlagManager *pFVar2;
  undefined4 ****ppppuVar3;
  nothrow_t *pnVar4;
  undefined4 uStack_5c;
  undefined4 ***pppuStack_58;
  int iStack_54;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c4620;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  ((char *)this)[0x3dc] = (byte)0x1;
  *(GameObject **)((char *)this + 0x38c) = param_1;
  dVar1 = *(double *)(param_1 + 0x28);
  *(float *)((char *)this + 300) = (float)*(double *)(param_1 + 0x20);
  *(float *)((char *)this + 0x130) = (float)dVar1;
  iStack_54 = 0x51eee4;
  debugPrint("AI","%s: Targeting %s");
  if ((((*(int *)((char *)this + 0x39c) != 0) && (*(char *)(*(int *)((char *)this + 0x39c) + 0x234) != '\0')) &&
      (*(int *)((char *)this + 0x38c) != 0)) && (*(int *)(*(int *)((char *)this + 0x38c) + 0x30) == 1)) {
    strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0;
    ppppuVar3 = local_2c;
    if (0xf < local_18) {
      ppppuVar3 = (undefined4 ****)local_2c[0];
    }
    iStack_54 = local_1c + (int)ppppuVar3;
    pppuStack_58 = local_2c;
    if (0xf < local_18) {
      pppuStack_58 = local_2c[0];
    }
    uStack_5c = 0x51ef70;
    ghidra::lib::transform___x28_x29();
    ghidra::str::ctor((std::string *)&uStack_5c,(std::string *)local_2c);
    // [seh] local_8._0_1_ = 1;
    pFVar2 = ghidra::any_singleton();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (pFVar2)->setFlag();
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      ppppuVar3 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        ppppuVar3 = (undefined4 ****)local_2c[0][-1];
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar3,pnVar4);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall Weapon::unsetTarget(Weapon *this)
void Weapon::unsetTarget()

{
  Weapon *pWVar1;
  
  *(undefined4 *)((char *)this + 300) = 0xc61c3c00;
  *(undefined4 *)((char *)this + 0x38c) = 0;
  *(undefined4 *)((char *)this + 0x130) = 0xc61c3c00;
  pWVar1 = this + 0x238;
  if (0xf < *(uint *)((char *)this + 0x24c)) {
    pWVar1 = *(Weapon **)pWVar1;
  }
  debugPrint("AI","%s: Clearing target.",pWVar1);
  return;
}
