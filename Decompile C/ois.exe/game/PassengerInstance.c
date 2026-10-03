#include "../ois.exe.h"


// public: __thiscall PassengerInstance::~PassengerInstance(void)

void __thiscall PassengerInstance::~PassengerInstance(PassengerInstance *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x84);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x70);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00406fb4;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0xf;
  this[0x70] = (PassengerInstance)0x0;
  uVar1 = *(uint *)(this + 0x6c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x58);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00406fb4;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0xf;
  this[0x58] = (PassengerInstance)0x0;
  uVar1 = *(uint *)(this + 0x54);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x40);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00406fb4;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0xf;
  this[0x40] = (PassengerInstance)0x0;
  uVar1 = *(uint *)(this + 0x3c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x28);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00406fb4;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0xf;
  this[0x28] = (PassengerInstance)0x0;
  uVar1 = *(uint *)(this + 0x24);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x10);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_00406fb4:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xf;
  this[0x10] = (PassengerInstance)0x0;
  return;
}


// public: __thiscall PassengerInstance::PassengerInstance(class Passenger *)

void __thiscall PassengerInstance::PassengerInstance(PassengerInstance *this,Passenger *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  Dice *pDVar9;
  int iVar10;
  word *pwVar11;
  PassengerInstance *pPVar12;
  word *pwVar13;
  char *pcVar14;
  uint uVar15;
  void *pvVar16;
  int iVar17;
  nothrow_t *pnVar18;
  int iVar19;
  uint unaff_EDI;
  char *pcVar20;
  uint local_4c;
  uint local_48;
  void *local_3c [5];
  uint local_28;
  Dice *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bb117;
  local_1c = ExceptionList;
  pDVar9 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  *(undefined4 *)this = 0;
  *(Passenger **)(this + 0xc) = param_1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xf;
  this[0x10] = (PassengerInstance)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0xf;
  this[0x28] = (PassengerInstance)0x0;
  pwVar13 = (word *)(this + 0x40);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0xf;
  *pwVar13 = (word)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0xf;
  this[0x58] = (PassengerInstance)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0xf;
  this[0x70] = (PassengerInstance)0x0;
  local_14 = 4;
  this[0x88] = (PassengerInstance)0x0;
  this[0x90] = (PassengerInstance)0x0;
  local_24 = pDVar9;
  iVar10 = diceRoll(pDVar9);
  *(int *)(this + 8) = iVar10 * 2;
  iVar10 = rand();
  pwVar11 = (word *)strUsingArgs((char *)local_3c,"%s",(&PTR_s_Cardholder_005d5d98)[iVar10 % 0x26f4]
                                );
  if (pwVar13 != pwVar11) {
    word::~word(pwVar13);
    uVar3 = *(undefined4 *)(pwVar11 + 4);
    uVar4 = *(undefined4 *)(pwVar11 + 8);
    uVar5 = *(undefined4 *)(pwVar11 + 0xc);
    *(undefined4 *)pwVar13 = *(undefined4 *)pwVar11;
    *(undefined4 *)(this + 0x44) = uVar3;
    *(undefined4 *)(this + 0x48) = uVar4;
    *(undefined4 *)(this + 0x4c) = uVar5;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(pwVar11 + 0x10);
    *(undefined4 *)(pwVar11 + 0x10) = 0;
    *(undefined4 *)(pwVar11 + 0x14) = 0xf;
    *pwVar11 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar18 = (nothrow_t *)(local_28 + 1);
    pvVar16 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar18) {
      pvVar16 = *(void **)((int)local_3c[0] + -4);
      pnVar18 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar16,pnVar18);
  }
  iVar10 = rand();
  if (iVar10 % 100 < 0x2f) {
    *(undefined4 *)(this + 4) = 1;
    iVar10 = rand();
    pcVar20 = (&PTR_s_Scav_005d07a8)[iVar10 % 0x4c4];
    pcVar14 = pcVar20;
    do {
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    uVar15 = (int)pcVar14 - (int)(pcVar20 + 1);
  }
  else {
    *(undefined4 *)(this + 4) = 0;
    iVar10 = rand();
    pcVar20 = (&PTR_s_Mary_005d1ab8)[iVar10 % 0x10b3];
    pcVar14 = pcVar20;
    do {
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    uVar15 = (int)pcVar14 - (int)(pcVar20 + 1);
  }
  std::basic_string<>::assign((basic_string<> *)(this + 0x28),pcVar20,uVar15);
  pwVar11 = pwVar13;
  if (0xf < *(uint *)(this + 0x54)) {
    pwVar11 = *(word **)pwVar13;
  }
  pPVar12 = this + 0x28;
  if (0xf < *(uint *)(this + 0x3c)) {
    pPVar12 = *(PassengerInstance **)(this + 0x28);
  }
  pwVar11 = (word *)strUsingArgs((char *)local_3c,"%s %s",pPVar12,pwVar11);
  if ((word *)(this + 0x10) != pwVar11) {
    word::~word((word *)(this + 0x10));
    uVar3 = *(undefined4 *)(pwVar11 + 4);
    uVar4 = *(undefined4 *)(pwVar11 + 8);
    uVar5 = *(undefined4 *)(pwVar11 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)pwVar11;
    *(undefined4 *)(this + 0x14) = uVar3;
    *(undefined4 *)(this + 0x18) = uVar4;
    *(undefined4 *)(this + 0x1c) = uVar5;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(pwVar11 + 0x10);
    *(undefined4 *)(pwVar11 + 0x10) = 0;
    *(undefined4 *)(pwVar11 + 0x14) = 0xf;
    *pwVar11 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar18 = (nothrow_t *)(local_28 + 1);
    pvVar16 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar18) {
      pvVar16 = *(void **)((int)local_3c[0] + -4);
      pnVar18 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar16,pnVar18);
  }
  if (0xf < *(uint *)(this + 0x54)) {
    pwVar13 = *(word **)pwVar13;
  }
  pPVar12 = this + 0x28;
  if (0xf < *(uint *)(this + 0x3c)) {
    pPVar12 = *(PassengerInstance **)pPVar12;
  }
  pwVar13 = (word *)strUsingArgs((char *)local_3c,"%c. %s",(int)(char)*pPVar12,pwVar13);
  if ((word *)(this + 0x58) != pwVar13) {
    word::~word((word *)(this + 0x58));
    uVar3 = *(undefined4 *)(pwVar13 + 4);
    uVar4 = *(undefined4 *)(pwVar13 + 8);
    uVar5 = *(undefined4 *)(pwVar13 + 0xc);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)pwVar13;
    *(undefined4 *)(this + 0x5c) = uVar3;
    *(undefined4 *)(this + 0x60) = uVar4;
    *(undefined4 *)(this + 100) = uVar5;
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(pwVar13 + 0x10);
    *(undefined4 *)(pwVar13 + 0x10) = 0;
    *(undefined4 *)(pwVar13 + 0x14) = 0xf;
    *pwVar13 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar18 = (nothrow_t *)(local_28 + 1);
    pvVar16 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar18) {
      pvVar16 = *(void **)((int)local_3c[0] + -4);
      pnVar18 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar16,pnVar18);
  }
  iVar10 = rand();
  iVar10 = iVar10 % 0x78 + 1;
  if (iVar10 < 0x23) {
    uVar15 = 7;
    pcVar20 = "english";
  }
  else if (iVar10 < 0x32) {
    uVar15 = 8;
    pcVar20 = "mandarin";
  }
  else if (iVar10 < 0x3c) {
    uVar15 = 6;
    pcVar20 = "french";
  }
  else if (iVar10 < 0x50) {
    uVar15 = 7;
    pcVar20 = "spanish";
  }
  else if (iVar10 < 100) {
    uVar15 = 5;
    pcVar20 = "farsi";
  }
  else {
    uVar15 = 9;
    pcVar20 = "portugese";
  }
  std::basic_string<>::assign((basic_string<> *)(this + 0x70),pcVar20,uVar15);
  iVar10 = *(int *)(this + 0xc);
  if (*(int *)(iVar10 + 0x50) - *(int *)(iVar10 + 0x4c) >> 2 != 0) {
    local_48 = 0;
    do {
      bVar6 = true;
      uVar15 = 0;
      iVar2 = *(int *)(*(int *)(iVar10 + 0x4c) + local_48 * 4);
      if (*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2 != 0) {
        do {
          bVar7 = Requirement::checkReq
                            (*(Requirement **)
                              (*(int *)(*(int *)(*(int *)(iVar10 + 0x4c) + local_48 * 4) + 0x18) +
                              uVar15 * 4),*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          iVar10 = *(int *)(this + 0xc);
          if (!bVar7) {
            bVar6 = false;
            break;
          }
          uVar15 = uVar15 + 1;
          iVar2 = *(int *)(*(int *)(iVar10 + 0x4c) + local_48 * 4);
        } while (uVar15 < (uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2));
      }
      local_4c = 0;
      bVar7 = false;
      iVar10 = *(int *)(*(int *)(iVar10 + 0x4c) + local_48 * 4);
      pcVar20 = *(char **)(iVar10 + 0x40);
      iVar17 = *(int *)(iVar10 + 0x44) - (int)pcVar20;
      iVar2 = iVar17 >> 0x1f;
      if (iVar17 / 0x18 + iVar2 != iVar2) {
        do {
          pcVar14 = pcVar20;
          if (0xf < *(uint *)(pcVar20 + 0x14)) {
            pcVar14 = *(char **)pcVar20;
          }
          bVar8 = std::_Traits_equal<>(pcVar14,*(uint *)(pcVar20 + 0x10),(char *)pDVar9,unaff_EDI);
          if (bVar8) {
            bVar7 = true;
            break;
          }
          pcVar20 = pcVar20 + 0x18;
          local_4c = local_4c + 1;
        } while (local_4c < (uint)((*(int *)(iVar10 + 0x44) - *(int *)(iVar10 + 0x40)) / 0x18));
      }
      iVar10 = *(int *)(this + 0xc);
      iVar2 = *(int *)(*(int *)(iVar10 + 0x4c) + local_48 * 4);
      iVar19 = *(int *)(iVar2 + 0x44) - *(int *)(iVar2 + 0x40);
      iVar17 = iVar19 >> 0x1f;
      if (iVar19 / 0x18 + iVar17 == iVar17) {
        bVar7 = true;
      }
      if ((*(int *)(iVar2 + 0x58) != -1) &&
         (*(int *)(iVar2 + 0x58) <
          (((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
           *(int *)(g_gameLogic + 0x188)) * 0x18 - *(int *)(this + 0x8c)) +
          *(int *)(g_gameLogic + 0x184))) {
        bVar6 = false;
      }
      if ((bVar6) && (bVar7)) {
        iVar17 = rand();
        iVar10 = *(int *)(this + 0xc);
        iVar2 = *(int *)(*(int *)(iVar10 + 0x4c) + local_48 * 4);
        if (iVar17 % 100 + 1 <= *(int *)(iVar2 + 0x30)) {
          *(int *)this = iVar2;
          break;
        }
      }
      local_48 = local_48 + 1;
    } while (local_48 < (uint)(*(int *)(iVar10 + 0x50) - *(int *)(iVar10 + 0x4c) >> 2));
  }
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall PassengerInstance::pickup(void)

void __thiscall PassengerInstance::pickup(PassengerInstance *this)

{
  GameLogic *pGVar1;
  FlagManager *pFVar2;
  basic_string<> local_3c [12];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pGVar1 = g_gameLogic;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bb148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this[0x88] = (PassengerInstance)0x1;
  *(int *)(this + 0x8c) =
       *(int *)(pGVar1 + 0x184) +
       ((*(int *)(pGVar1 + 0x18c) + *(int *)(pGVar1 + 400) * 0xc) * 0x1f + *(int *)(pGVar1 + 0x188))
       * 0x18;
  local_3c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_3c,"has_passenger",0xd);
  local_8 = 0;
  pFVar2 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  FlagManager::setFlag(pFVar2);
  uStack_30 = 0x485611;
  debugPrint("WORLD","Passenger \'%s\' has boarded player ship.");
  *(PassengerInstance **)(g_gameData + 0x128) = this;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall PassengerInstance::leaveAngry(void)

void __thiscall PassengerInstance::leaveAngry(PassengerInstance *this)

{
  uint uVar1;
  EmailManager *pEVar2;
  FlagManager *pFVar3;
  LogSystem *this_00;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  basic_string<> abStack_8c [12];
  undefined4 uStack_80;
  basic_string<> local_74 [8];
  undefined4 uStack_6c;
  basic_string<> local_5c [4];
  undefined4 uStack_58;
  char *pcVar7;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bb198;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_58 = 0x485687;
  LogSystem::addLogLine
            ((LogSystem *)this,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001);
  uStack_58 = 0x4856c1;
  debugPrint("WORLD","Passenger \'%s\' disembarked at %s due to excess time taken.");
  local_5c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_5c,"Partial Passenger Payment",0x19);
  BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124));
  uStack_58 = 0x48571e;
  LogSystem::addLogLine(this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001)
  ;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar6 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar6 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar6) {
    uVar1 = 0xc2;
    pcVar7 = 
    "Enough. I\'ve disembarked your ship. It\'s taken so long to get anywhere I worry you\'re not even going my way after all. I\'ve transferred you some credits for your time, but I am keeping the rest."
    ;
  }
  else {
    uVar1 = 0x114;
    pcVar7 = 
    "Your ship is taking too long to go near my destination. I didn\'t expect speed - you can\'t hitch a ride on a freighter and expect a high speed shuttle service - but this is absurd.\n\nI\'m leaving. Maybe I can find a captain here who can get me where I\'m going in reasonable time."
    ;
  }
  std::basic_string<>::assign((basic_string<> *)local_2c,pcVar7,uVar1);
  std::basic_string<>::basic_string<>(local_5c,(basic_string<> *)local_2c);
  local_8._0_1_ = 1;
  local_74[0] = (basic_string<>)0x0;
  uStack_80 = 0x4857a8;
  std::basic_string<>::assign(local_74,"Departing",9);
  local_8._0_1_ = 2;
  std::basic_string<>::basic_string<>(abStack_8c,(basic_string<> *)(this + 0x10));
  local_8._0_1_ = 3;
  pEVar2 = Singleton<>::getInstance();
  local_8._0_1_ = 0;
  EmailManager::addCustomEmail(pEVar2);
  uStack_6c = 0x4857f5;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffffa0,"has_passenger",0xd);
  local_8._0_1_ = 4;
  pFVar3 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  FlagManager::setFlag(pFVar3);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall PassengerInstance::leave(void)

void __thiscall PassengerInstance::leave(PassengerInstance *this)

{
  basic_string<> *pbVar1;
  bool bVar2;
  Dice *pDVar3;
  Stats *pSVar4;
  int iVar5;
  EmailManager *pEVar6;
  FlagManager *pFVar7;
  uint uVar8;
  word *pwVar9;
  LogSystem *this_00;
  LogSystem *this_01;
  void *pvVar10;
  int iVar11;
  nothrow_t *pnVar12;
  int *piVar13;
  basic_string<> abStack_d4 [12];
  undefined4 uStack_c8;
  basic_string<> local_bc [8];
  undefined4 uStack_b4;
  basic_string<> local_a4 [4];
  undefined4 uStack_a0;
  uint local_78;
  int local_74;
  void *local_70 [4];
  undefined4 local_60;
  uint local_5c;
  void *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  Dice *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bb25d;
  local_1c = ExceptionList;
  pDVar3 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  pbVar1 = (basic_string<> *)(this + 0x10);
  this_00 = (LogSystem *)pbVar1;
  if (0xf < *(uint *)(this + 0x24)) {
    this_00 = *(LogSystem **)pbVar1;
  }
  uStack_a0 = 0x4858ce;
  local_24 = pDVar3;
  LogSystem::addLogLine(this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001)
  ;
  local_a4[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_a4,"Passenger",9);
  BankAccount::addTransaction(*(BankAccount **)(g_gameData + 0x124));
  uStack_a0 = 0x485925;
  LogSystem::addLogLine(this_01,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001)
  ;
  if (*(int *)this == 0) {
    local_30 = 0;
    local_2c = 0xf;
    local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
    local_48 = 0xf00000000;
    local_58 = (void *)((uint)local_58 & 0xffffff00);
    local_14 = 0xc;
    uVar8 = rand();
    uVar8 = uVar8 & 0x80000001;
    bVar2 = uVar8 == 0;
    if ((int)uVar8 < 0) {
      bVar2 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar2) {
      std::basic_string<>::assign((basic_string<> *)local_40,"Thank you!",10);
      pwVar9 = (word *)strUsingArgs((char *)local_70);
      if ((word *)&local_58 != pwVar9) {
        word::~word((word *)&local_58);
        local_58 = *(void **)pwVar9;
        uStack_54 = *(undefined4 *)(pwVar9 + 4);
        uStack_50 = *(undefined4 *)(pwVar9 + 8);
        uStack_4c = *(undefined4 *)(pwVar9 + 0xc);
        local_48 = *(undefined8 *)(pwVar9 + 0x10);
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
      }
      if (0xf < local_5c) {
        pnVar12 = (nothrow_t *)(local_5c + 1);
        pvVar10 = local_70[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_70[0] + -4);
          pnVar12 = (nothrow_t *)(local_5c + 0x24);
          if (0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar12);
      }
    }
    else {
      std::basic_string<>::assign((basic_string<> *)local_40,"Arrived",7);
      pwVar9 = (word *)strUsingArgs((char *)local_70);
      if ((word *)&local_58 != pwVar9) {
        word::~word((word *)&local_58);
        local_58 = *(void **)pwVar9;
        uStack_54 = *(undefined4 *)(pwVar9 + 4);
        uStack_50 = *(undefined4 *)(pwVar9 + 8);
        uStack_4c = *(undefined4 *)(pwVar9 + 0xc);
        local_48 = *(undefined8 *)(pwVar9 + 0x10);
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
      }
      if (0xf < local_5c) {
        pnVar12 = (nothrow_t *)(local_5c + 1);
        pvVar10 = local_70[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_70[0] + -4);
          pnVar12 = (nothrow_t *)(local_5c + 0x24);
          if (0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar12);
      }
      local_60 = 0;
      local_5c = 0xf;
      local_70[0] = (void *)((uint)local_70[0] & 0xffffff00);
    }
    std::basic_string<>::basic_string<>(local_a4,(basic_string<> *)&local_58);
    local_14._0_1_ = 0xd;
    std::basic_string<>::basic_string<>(local_bc,(basic_string<> *)local_40);
    local_14._0_1_ = 0xe;
    std::basic_string<>::basic_string<>(abStack_d4,pbVar1);
    local_14._0_1_ = 0xf;
    pEVar6 = Singleton<>::getInstance();
    local_14._0_1_ = 0xc;
    EmailManager::addCustomEmail(pEVar6);
    local_14 = CONCAT31(local_14._1_3_,0xb);
    if (0xf < local_48._4_4_) {
      pnVar12 = (nothrow_t *)(local_48._4_4_ + 1);
      pvVar10 = local_58;
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar10 = *(void **)((int)local_58 + -4);
        pnVar12 = (nothrow_t *)(local_48._4_4_ + 0x24);
        if (0x1f < (uint)((int)local_58 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar12);
    }
    local_14 = 0xffffffff;
    if (0xf < local_2c) {
      pnVar12 = (nothrow_t *)(local_2c + 1);
      pvVar10 = local_40[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar10 = *(void **)((int)local_40[0] + -4);
        pnVar12 = (nothrow_t *)(local_2c + 0x24);
        if (0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar12);
    }
  }
  else {
    debugPrint("WORLD","Passenger just delivered has a quirk, \'%s\'.");
    if ((*(int *)(*(int *)this + 0x4c) == 0) && (*(int *)(*(int *)this + 0x54) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      diceRoll(pDVar3);
    }
    local_a4[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_a4,"passengermulti",0xe);
    local_14 = 0;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      pSVar4 = operator_new(0x58);
      local_14 = CONCAT31(local_14._1_3_,1);
      Singleton<Stats>::instance = (Stats *)Stats::Stats(pSVar4);
    }
    local_14 = 0xffffffff;
    bVar2 = Stats::hasCustomStat(Singleton<Stats>::instance);
    if (bVar2) {
      local_a4[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_a4,"passengermulti",0xe);
      local_14 = 2;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        pSVar4 = operator_new(0x58);
        local_14 = CONCAT31(local_14._1_3_,3);
        Singleton<Stats>::instance = (Stats *)Stats::Stats(pSVar4);
      }
      local_14 = 0xffffffff;
      Stats::getCustomStat(Singleton<Stats>::instance);
      local_30 = 0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_40,"passengermulti",0xe);
      local_14 = 4;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        pSVar4 = operator_new(0x58);
        local_14 = CONCAT31(local_14._1_3_,5);
        Singleton<Stats>::instance = (Stats *)Stats::Stats(pSVar4);
      }
      local_14 = 6;
      std::map<>::operator[]
                ((map<> *)(Singleton<Stats>::instance + 0x38),(basic_string<> *)local_40);
      local_14 = 0xffffffff;
      if (0xf < local_2c) {
        pnVar12 = (nothrow_t *)(local_2c + 1);
        pvVar10 = local_40[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_40[0] + -4);
          pnVar12 = (nothrow_t *)(local_2c + 0x24);
          if (0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar12);
      }
      local_30 = 0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      uStack_a0 = 0x485b2e;
      debugPrint("WORLD","(Modifying bonus amount by %f\'");
    }
    debugPrint("WORLD","Player getting a %d credit bonus.");
    iVar5 = *(int *)this;
    iVar11 = (*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x34)) / 0x18;
    if (iVar11 != 0) {
      iVar5 = rand();
      std::basic_string<>::basic_string<>
                (local_bc,(basic_string<> *)
                          (*(int *)(*(int *)this + 0x34) + (iVar5 % iVar11) * 0x18));
      uStack_c8 = 0x485ba6;
      ShipData::stringWithVars();
      local_14 = 7;
      local_bc[0] = (basic_string<>)0x0;
      uStack_c8 = 0x485bd2;
      std::basic_string<>::assign(local_bc,"Thanks!",7);
      local_14._0_1_ = 8;
      std::basic_string<>::basic_string<>(abStack_d4,(basic_string<> *)(this + 0x10));
      local_14 = CONCAT31(local_14._1_3_,9);
      pEVar6 = Singleton<>::getInstance();
      local_14 = 0xffffffff;
      EmailManager::addCustomEmail(pEVar6);
      iVar5 = *(int *)this;
    }
    piVar13 = (int *)(iVar5 + 0x24);
    local_78 = 0;
    iVar11 = *(int *)(iVar5 + 0x28) - *piVar13;
    iVar5 = iVar11 >> 0x1f;
    if (iVar11 / 0x18 + iVar5 != iVar5) {
      local_74 = 0;
      do {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff58,(basic_string<> *)(*piVar13 + local_74));
        local_14 = 10;
        pFVar7 = Singleton<>::getInstance();
        local_14 = 0xffffffff;
        FlagManager::setFlag(pFVar7);
        local_78 = local_78 + 1;
        local_74 = local_74 + 0x18;
        piVar13 = (int *)(*(int *)this + 0x24);
      } while (local_78 < (uint)((*(int *)(*(int *)this + 0x28) - *piVar13) / 0x18));
    }
  }
  uStack_b4 = 0x485ef3;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff58,"has_passenger",0xd);
  local_14 = 0x10;
  pFVar7 = Singleton<>::getInstance();
  local_14 = 0xffffffff;
  FlagManager::setFlag(pFVar7);
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}
