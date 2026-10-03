#include "../ois.exe.h"


// public: void __thiscall HackEngine::failHack(class Ship *)

void __thiscall HackEngine::failHack(HackEngine *this,Ship *param_1)

{
  int *piVar1;
  int iVar2;
  FlagManager *pFVar3;
  LogSystem *this_00;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  nothrow_t *pnVar6;
  int iVar7;
  int iVar8;
  char acStack_64 [12];
  undefined4 uStack_58;
  char *pcVar9;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c2c80;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(*(int *)(param_1 + 0x40) + 0x30) == 0) ||
     (iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x18), iVar7 == 0)) {
    uStack_58 = 0x50829f;
    debugPrint("DETAIL",
               "%s: unable to run fail hack logic due to lack of hack module or targeted ship");
    goto LAB_005082a2;
  }
  uStack_58 = 0x5080c4;
  debugPrint("DETAIL","%s: Detected a ship trying to hack us. Determining response.");
  if ((iVar7 == 0) || (this_00 = *(LogSystem **)(iVar7 + 0x44), this_00 == (LogSystem *)0x0))
  goto LAB_005082a2;
  iVar8 = *(int *)(this_00 + 0x70);
  if (iVar8 == 2) {
    uStack_58 = 0x5080fa;
    debugPrint("DETAIL","%s: Attacking this ship.");
    iVar8 = *(int *)(iVar7 + 0x44);
    *(Ship **)(iVar8 + 0x40) = param_1;
    *(undefined1 **)(iVar8 + 0x44) = &DAT_42f00000;
  }
  else {
    if (iVar8 == 1) {
      iVar8 = *(int *)(this_00 + 0x38);
      if (((iVar8 != 0) &&
          (this_00 = *(LogSystem **)(iVar8 + 0x24), this_00 != *(LogSystem **)(iVar8 + 0x1c))) &&
         (-1 < (int)this_00)) {
        uStack_58 = 0x50813c;
        debugPrint("DETAIL","%s: I\'ve been outed as a smuggler! Attacking this ship.");
        this_00 = *(LogSystem **)(iVar7 + 0x44);
        if (*(char *)(*(int *)(this_00 + 0x38) + 0x28) != '\0') {
          *(undefined4 *)(iVar7 + 100) = 3;
          *(undefined4 *)(this_00 + 0x70) = 2;
          iVar8 = *(int *)(iVar7 + 0x44);
          *(Ship **)(iVar8 + 0x40) = param_1;
          *(undefined1 **)(iVar8 + 0x44) = &DAT_42f00000;
          goto LAB_0050818f;
        }
      }
      pcVar9 = (char *)0x3;
    }
    else if (iVar8 == 7) {
      pcVar9 = (char *)0x3;
    }
    else {
      pcVar9 = &DAT_00000002;
    }
    uStack_58 = 0x50818c;
    LogSystem::addLogLine(this_00,*(LogPriority *)(param_1 + 0x224),pcVar9);
  }
LAB_0050818f:
  iVar7 = *(int *)(iVar7 + 0x44);
  piVar1 = *(int **)(iVar7 + 0xd0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)local_2c,(basic_string<> *)(*(int *)(iVar7 + 0x6c) + 0x238));
  local_8 = 0;
  ppppuVar5 = local_2c;
  if (0xf < local_18) {
    ppppuVar5 = (undefined4 ****)local_2c[0];
  }
  ppppuVar4 = local_2c;
  if (0xf < local_18) {
    ppppuVar4 = (undefined4 ****)local_2c[0];
  }
  iVar7 = 0;
  iVar8 = (local_1c + (int)ppppuVar5) - (int)ppppuVar4;
  if ((undefined4 ****)(local_1c + (int)ppppuVar5) < ppppuVar4) {
    iVar8 = 0;
  }
  if (iVar8 != 0) {
    do {
      iVar2 = tolower((int)*(char *)(iVar7 + (int)ppppuVar4));
      *(char *)(iVar7 + (int)ppppuVar5) = (char)iVar2;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar8);
  }
  ppppuVar5 = local_2c;
  if (0xf < local_18) {
    ppppuVar5 = (undefined4 ****)local_2c[0];
  }
  strUsingArgs(acStack_64,"failed_hacking_%s",ppppuVar5);
  local_8._0_1_ = 1;
  pFVar3 = Singleton<>::getInstance();
  local_8 = (uint)local_8._1_3_ << 8;
  FlagManager::setFlag(pFVar3);
  if (0xf < local_18) {
    pnVar6 = (nothrow_t *)(local_18 + 1);
    ppppuVar5 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      ppppuVar5 = (undefined4 ****)local_2c[0][-1];
      pnVar6 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar5,pnVar6);
  }
LAB_005082a2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall HackEngine::performHack(class Ship *,class CommsData *,class BankAccount
// *)

void __thiscall
HackEngine::performHack(HackEngine *this,Ship *param_1,CommsData *param_2,BankAccount *param_3)

{
  BankAccount BVar1;
  Ship *this_00;
  GameData *pGVar2;
  Requirement *this_01;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  SensorData *this_02;
  basic_string<> *pbVar9;
  Good *pGVar10;
  basic_string<> *pbVar11;
  int iVar12;
  basic_string<> *pbVar13;
  Email *pEVar14;
  EmailManager *pEVar15;
  char *pcVar16;
  int *piVar17;
  void *pvVar18;
  BankAccount *pBVar19;
  EmailManager *extraout_ECX;
  EmailManager *extraout_ECX_00;
  LogSystem *this_03;
  nothrow_t *pnVar20;
  uint uVar21;
  BankAccount *pBVar22;
  uint uVar23;
  basic_string<> abStack_11c [12];
  undefined4 uStack_110;
  basic_string<> abStack_104 [16];
  undefined4 uStack_f4;
  basic_string<> abStack_ec [16];
  undefined4 uStack_dc;
  basic_string<> abStack_d4 [16];
  undefined4 uStack_c4;
  char *pcStack_bc;
  int iStack_b8;
  char *pcVar24;
  int local_7c;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c2d90;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(*(int *)(param_1 + 0x40) + 0x30) == 0) ||
     (this_00 = *(Ship **)(*(int *)(*(int *)(param_1 + 0x40) + 0x30) + 0x18), this_00 == (Ship *)0x0
     )) {
    debugPrint("DETAIL","%s: unable to hack due to lack of hack module or targeted ship");
    goto LAB_005091ce;
  }
  this_02 = Ship::getSensorDataForShipID(param_1,*(int *)(this_00 + 0x250));
  if (this_02 == (SensorData *)0x0) {
    debugPrint("DETAIL","WARNING: No sensor data to work with for the vessel being hacked.");
    goto LAB_005091ce;
  }
  pbVar13 = (basic_string<> *)(this_00 + 8);
  if ((basic_string<> *)(this_02 + 0x48) != pbVar13) {
    if (0xf < *(uint *)(this_00 + 0x1c)) {
      pbVar13 = *(basic_string<> **)pbVar13;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this_02 + 0x48),(char *)pbVar13,*(uint *)(this_00 + 0x18));
  }
  pcVar24 = *(char **)(this_00 + 0x254);
  if (0xf < *(uint *)(pcVar24 + 0x14)) {
    pcVar24 = *(char **)pcVar24;
  }
  pcVar16 = pcVar24;
  do {
    cVar8 = *pcVar16;
    pcVar16 = pcVar16 + 1;
  } while (cVar8 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)(this_02 + 0x60),pcVar24,(int)pcVar16 - (int)(pcVar24 + 1));
  pbVar13 = (basic_string<> *)(this_00 + 0x238);
  if ((basic_string<> *)(this_02 + 0x90) != pbVar13) {
    pbVar9 = pbVar13;
    if (0xf < *(uint *)(this_00 + 0x24c)) {
      pbVar9 = *(basic_string<> **)pbVar13;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this_02 + 0x90),(char *)pbVar9,*(uint *)(this_00 + 0x248));
  }
  SensorData::describe(this_02,SUB41(local_2c,0),'\0');
  local_8 = 0;
  strUsingArgs((char *)local_74);
  local_8._0_1_ = 2;
  if (0xf < local_18) {
    pnVar20 = (nothrow_t *)(local_18 + 1);
    pvVar18 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_2c[0] + -4);
      pnVar20 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) {
LAB_00508412:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_8._0_1_ = 3;
  pcVar16 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 4;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  iStack_b8 = 0x5084cf;
  pcVar16 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 5;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  std::basic_string<>::append((basic_string<> *)local_5c,"- TARGET -\n",0xb);
  pcVar16 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 6;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  pcVar16 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 7;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  pcVar16 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 8;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  pcVar16 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 9;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  SensorData::describe(this_02,SUB41(local_44,0),'\0');
  local_8._0_1_ = 10;
  pcVar16 = (char *)strUsingArgs((char *)local_2c);
  local_8._0_1_ = 0xb;
  pcVar24 = pcVar16;
  if (0xf < *(uint *)(pcVar16 + 0x14)) {
    pcVar24 = *(char **)pcVar16;
  }
  std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
  local_8._0_1_ = 10;
  if (0xf < local_18) {
    pnVar20 = (nothrow_t *)(local_18 + 1);
    pvVar18 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_2c[0] + -4);
      pnVar20 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  local_8._0_1_ = 3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pnVar20 = (nothrow_t *)(local_30 + 1);
    pvVar18 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_44[0] + -4);
      pnVar20 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
  std::basic_string<>::append((basic_string<> *)local_5c,"\n",1);
  std::basic_string<>::append((basic_string<> *)local_5c,"- FLIGHT PLAN -\n",0x10);
  if (*(int *)(*(int *)(this_00 + 0x44) + 0x10) == 0) {
    std::basic_string<>::append((basic_string<> *)local_5c,"Dest.: none filed\n",0x12);
  }
  else {
    pcVar16 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 0xc;
    pcVar24 = pcVar16;
    if (0xf < *(uint *)(pcVar16 + 0x14)) {
      pcVar24 = *(char **)pcVar16;
    }
    std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
    local_8._0_1_ = 3;
    if (0xf < local_30) {
      pnVar20 = (nothrow_t *)(local_30 + 1);
      pvVar18 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar20) {
        pvVar18 = *(void **)((int)local_44[0] + -4);
        pnVar20 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar20);
    }
  }
  if (*(int *)(*(int *)(this_00 + 0x44) + 8) == 0) {
    std::basic_string<>::append((basic_string<> *)local_5c,"Orig.: none filed\n",0x12);
  }
  else {
    pcVar16 = (char *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 0xd;
    pcVar24 = pcVar16;
    if (0xf < *(uint *)(pcVar16 + 0x14)) {
      pcVar24 = *(char **)pcVar16;
    }
    std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
    local_8._0_1_ = 3;
    if (0xf < local_18) {
      pnVar20 = (nothrow_t *)(local_18 + 1);
      pvVar18 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar20) {
        pvVar18 = *(void **)((int)local_2c[0] + -4);
        pnVar20 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar18,pnVar20);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (*(int *)(*(int *)(this_00 + 0x44) + 0x38) == 0) {
    uVar23 = 0xb;
    pcVar24 = "Cargo: nil\n";
LAB_00508a96:
    std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,uVar23);
LAB_00508a9e:
    uVar23 = 0;
    piVar17 = (int *)(*(int *)(g_gameData + 0xd8) + 0x10c);
    if (*(int *)(*(int *)(g_gameData + 0xd8) + 0x110) - *piVar17 >> 2 != 0) {
      do {
        this_01 = *(Requirement **)(*(int *)(uVar23 * 4 + *piVar17) + 0x18);
        if ((this_01 == (Requirement *)0x0) ||
           (bVar7 = Requirement::checkReq
                              (this_01,*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                               *(BankAccount **)(g_gameData + 0x124)), bVar7)) {
          uStack_c4 = 0x508b0f;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&pcStack_bc,
                     *(basic_string<> **)
                      (*(int *)(*(int *)(g_gameData + 0xd8) + 0x10c) + uVar23 * 4));
          pGVar10 = GameData::getGoodWithShortName();
          if ((pGVar10 != (Good *)0x0) &&
             ((*(CargoHold **)(this_00 + 0x1f8) != (CargoHold *)0x0 &&
              (iVar12 = CargoHold::amountHeld(*(CargoHold **)(this_00 + 0x1f8),*(int *)pGVar10),
              0 < iVar12)))) {
            std::basic_string<>::append
                      ((basic_string<> *)local_5c,
                       "WARNING: Discrepancy between listed cargo in IFF transponder, and signature from the cargo pods. Signature indicates cargo listed as contraband in this sector. Vessel may be a smugger.\n"
                       ,0xb9);
            if ((basic_string<> *)(g_gameLogic + 0x1ac) != pbVar13) {
              if (0xf < *(uint *)(this_00 + 0x24c)) {
                pbVar13 = *(basic_string<> **)pbVar13;
              }
              std::basic_string<>::assign
                        ((basic_string<> *)(g_gameLogic + 0x1ac),(char *)pbVar13,
                         *(uint *)(this_00 + 0x248));
            }
            iStack_b8 = 0x508be8;
            debugPrint("GAME","Player detected a smuggler - %s (%s)");
            break;
          }
        }
        uVar23 = uVar23 + 1;
        piVar17 = (int *)(*(int *)(g_gameData + 0xd8) + 0x10c);
      } while (uVar23 < (uint)(*(int *)(*(int *)(g_gameData + 0xd8) + 0x110) - *piVar17 >> 2));
    }
    std::basic_string<>::append((basic_string<> *)local_5c,"\n",1);
    std::basic_string<>::append((basic_string<> *)local_5c,"- GENERAL -\n",0xc);
    iVar12 = Ship::getHullDamagePercent(this_00);
    if (iVar12 < 4) {
      uVar23 = 7;
      pcVar24 = "nominal";
    }
    else if (iVar12 < 0x15) {
      uVar23 = 10;
      pcVar24 = "light dmg.";
    }
    else if (iVar12 < 0x33) {
      uVar23 = 9;
      pcVar24 = "med. dmg.";
    }
    else if (iVar12 < 0x4c) {
      uVar23 = 10;
      pcVar24 = "heavy dmg.";
    }
    else {
      uVar23 = 8;
      pcVar24 = "CRITICAL";
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,pcVar24,uVar23);
    local_8._0_1_ = 0x11;
    pcVar16 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 0x12;
    pcVar24 = pcVar16;
    if (0xf < *(uint *)(pcVar16 + 0x14)) {
      pcVar24 = *(char **)pcVar16;
    }
    std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
    local_8._0_1_ = 0x11;
    if (0xf < local_30) {
      pnVar20 = (nothrow_t *)(local_30 + 1);
      pvVar18 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar20) {
        pvVar18 = *(void **)((int)local_44[0] + -4);
        pnVar20 = (nothrow_t *)(local_30 + 0x24);
        uVar6 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) goto LAB_0050898d;
      }
      operator_delete(pvVar18,pnVar20);
    }
    local_8._0_1_ = 3;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_18) {
      pnVar20 = (nothrow_t *)(local_18 + 1);
      pvVar18 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar20) {
        pvVar18 = *(void **)((int)local_2c[0] + -4);
        pnVar20 = (nothrow_t *)(local_18 + 0x24);
        uVar6 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_0050898d;
      }
      operator_delete(pvVar18,pnVar20);
    }
    std::basic_string<>::append((basic_string<> *)local_5c,"Modules:\n",9);
    piVar3 = *(int **)(*(int *)(this_00 + 0x40) + 0x40);
    for (piVar17 = *(int **)(*(int *)(this_00 + 0x40) + 0x3c); piVar17 != piVar3;
        piVar17 = piVar17 + 1) {
      piVar4 = (int *)*piVar17;
      cVar8 = (**(code **)(*piVar4 + 0x14))();
      if (cVar8 == '\0') {
        (**(code **)(*piVar4 + 0x18))();
      }
      cVar8 = (**(code **)(*piVar4 + 0x14))();
      if (cVar8 == '\0') {
        cVar8 = (**(code **)(*piVar4 + 0x18))();
        uVar23 = 7;
        if (cVar8 == '\0') {
          pcVar24 = "nominal";
        }
        else {
          pcVar24 = "damaged";
        }
      }
      else {
        uVar23 = 0xe;
        pcVar24 = "non-functional";
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_2c,pcVar24,uVar23);
      local_8._0_1_ = 0x13;
      iStack_b8 = piVar4[2] + 0x38;
      if (0xf < *(uint *)(piVar4[2] + 0x4c)) {
        iStack_b8 = *(int *)iStack_b8;
      }
      pcStack_bc = " - %s %s (%s), `%c%s`2\n";
      uStack_c4 = 0x508de2;
      pcVar16 = (char *)strUsingArgs((char *)local_44);
      local_8._0_1_ = 0x14;
      pcVar24 = pcVar16;
      if (0xf < *(uint *)(pcVar16 + 0x14)) {
        pcVar24 = *(char **)pcVar16;
      }
      std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
      local_8._0_1_ = 0x13;
      if (0xf < local_30) {
        pnVar20 = (nothrow_t *)(local_30 + 1);
        pvVar18 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar20) {
          pvVar18 = *(void **)((int)local_44[0] + -4);
          pnVar20 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) goto LAB_00508412;
        }
        operator_delete(pvVar18,pnVar20);
      }
      local_8._0_1_ = 3;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar20 = (nothrow_t *)(local_18 + 1);
        pvVar18 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar20) {
          pvVar18 = *(void **)((int)local_2c[0] + -4);
          pnVar20 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_00508412;
        }
        operator_delete(pvVar18,pnVar20);
      }
    }
    std::basic_string<>::append((basic_string<> *)local_5c,"Cargo...\n",9);
    bVar7 = false;
    local_7c = 0;
    iVar12 = 0xc;
    do {
      iVar5 = *(int *)(this_00 + 0x1f8);
      if ((-1 < local_7c) &&
         (((*(int *)(iVar5 + 8) < 1 || (local_7c < *(int *)(iVar5 + 8))) &&
          (*(int *)(iVar12 + iVar5) != 0)))) {
        if (*(int *)(*(int *)(iVar12 + iVar5) + 8) < 1) {
          std::basic_string<>::append((basic_string<> *)local_5c,"- empty pod\n",0xc);
        }
        else {
          uVar23 = 0;
          uVar21 = *(int *)(g_gameData + 0x88) - *(int *)(g_gameData + 0x84) >> 2;
          if (uVar21 != 0) {
            do {
              if (**(int **)(*(int *)(g_gameData + 0x84) + uVar23 * 4) ==
                  *(int *)(*(int *)(iVar5 + iVar12) + 4)) break;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar21);
          }
          iStack_b8 = 0x508f33;
          pcVar16 = (char *)strUsingArgs((char *)local_44);
          local_8._0_1_ = 0x15;
          pcVar24 = pcVar16;
          if (0xf < *(uint *)(pcVar16 + 0x14)) {
            pcVar24 = *(char **)pcVar16;
          }
          std::basic_string<>::append((basic_string<> *)local_5c,pcVar24,*(uint *)(pcVar16 + 0x10));
          local_8._0_1_ = 3;
          if (0xf < local_30) {
            pnVar20 = (nothrow_t *)(local_30 + 1);
            pvVar18 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar20) {
              pvVar18 = *(void **)((int)local_44[0] + -4);
              pnVar20 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) goto LAB_00508412;
            }
            operator_delete(pvVar18,pnVar20);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        bVar7 = true;
      }
      local_7c = local_7c + 1;
      iVar12 = iVar12 + 4;
    } while (iVar12 < 0x44);
    if (!bVar7) {
      std::basic_string<>::append((basic_string<> *)local_5c," - none",7);
    }
    pEVar14 = operator_new(0xb8);
    local_8._0_1_ = 0x16;
    uStack_c4 = 0x508ffb;
    std::basic_string<>::basic_string<>((basic_string<> *)&pcStack_bc,(basic_string<> *)local_5c);
    local_8._0_1_ = 0x17;
    uStack_dc = 0x509010;
    std::basic_string<>::basic_string<>(abStack_d4,(basic_string<> *)local_74);
    local_8._0_1_ = 0x18;
    uStack_f4 = 0x509028;
    std::basic_string<>::basic_string<>(abStack_ec,(basic_string<> *)local_74);
    local_8._0_1_ = 0x19;
    pBVar22 = param_3 + 4;
    if (0xf < *(uint *)(param_3 + 0x18)) {
      pBVar22 = *(BankAccount **)pBVar22;
    }
    uStack_f4 = 0;
    abStack_104[0] = (basic_string<>)0x0;
    pBVar19 = pBVar22;
    do {
      BVar1 = *pBVar19;
      pBVar19 = pBVar19 + 1;
    } while (BVar1 != (BankAccount)0x0);
    uStack_110 = 0x509072;
    std::basic_string<>::assign(abStack_104,(char *)pBVar22,(int)pBVar19 - (int)(pBVar22 + 1));
    local_8._0_1_ = 0x1a;
    abStack_11c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(abStack_11c,"LOCALHOST",9);
    local_8._0_1_ = 0x16;
    pEVar14 = (Email *)Email::Email(pEVar14);
    local_8._0_1_ = 3;
    pEVar15 = extraout_ECX;
    if (Singleton<>::instance == (EmailManager *)0x0) {
      pEVar15 = operator_new(0x2c);
      Singleton<>::instance = pEVar15;
      *pEVar15 = (EmailManager)0x0;
      *(undefined4 *)(pEVar15 + 4) = 0;
      *(undefined4 *)(pEVar15 + 8) = 0;
      *(undefined4 *)(pEVar15 + 0xc) = 0;
      *(undefined4 *)(pEVar15 + 0x10) = 0;
      *(undefined4 *)(pEVar15 + 0x14) = 0;
      *(undefined4 *)(pEVar15 + 0x18) = 0;
      *(undefined4 *)(pEVar15 + 0x1c) = 0;
      *(undefined4 *)(pEVar15 + 0x20) = 0;
      *(undefined4 *)(pEVar15 + 0x24) = 0;
      *(undefined4 *)(pEVar15 + 0x28) = 0;
      pEVar15 = extraout_ECX_00;
    }
    EmailManager::sendEmail(pEVar15,param_2,pEVar14);
    LogSystem::addLogLine(this_03,*(LogPriority *)(param_1 + 0x224),&DAT_00000002);
  }
  else {
    pGVar2 = *(GameData **)(*(int *)(*(int *)(this_00 + 0x44) + 0x38) + 0x1c);
    if ((int)pGVar2 < 0) {
      pbVar11 = (basic_string<> *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 0xf;
LAB_0050895a:
      std::basic_string<>::append((basic_string<> *)local_5c,pbVar11);
      local_8._0_1_ = 3;
      if (0xf < local_18) {
        pnVar20 = (nothrow_t *)(local_18 + 1);
        pvVar18 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar20) {
          pvVar18 = *(void **)((int)local_2c[0] + -4);
          pnVar20 = (nothrow_t *)(local_18 + 0x24);
          uVar6 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar18))) goto LAB_0050898d;
        }
        operator_delete(pvVar18,pnVar20);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_18 = 0xf;
      local_1c = 0;
      pGVar2 = *(GameData **)(*(int *)(*(int *)(this_00 + 0x44) + 0x38) + 0x20);
      if ((int)pGVar2 < 0) {
        if (*(int *)(*(int *)(*(int *)(this_00 + 0x44) + 0x38) + 0x1c) == -2) {
          uVar23 = 0x12;
          pcVar24 = "Cargo: passengers\n";
          goto LAB_00508a96;
        }
      }
      else {
        pGVar10 = GameData::getGood(pGVar2,(int)pGVar2);
        if (pGVar10 == (Good *)0x0) goto LAB_005089f3;
        pbVar11 = (basic_string<> *)strUsingArgs((char *)local_44);
        local_8._0_1_ = 0x10;
        std::basic_string<>::append((basic_string<> *)local_5c,pbVar11);
        local_8._0_1_ = 3;
        uVar6 = (undefined1)local_8;
        local_8._0_1_ = 3;
        if (0xf < local_30) {
          pnVar20 = (nothrow_t *)(local_30 + 1);
          pvVar18 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar20) {
            pvVar18 = *(void **)((int)local_44[0] + -4);
            pnVar20 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18))) goto LAB_0050898d;
          }
          operator_delete(pvVar18,pnVar20);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      }
      goto LAB_00508a9e;
    }
    pGVar10 = GameData::getGood(pGVar2,(int)pGVar2);
    if (pGVar10 != (Good *)0x0) {
      pbVar11 = (basic_string<> *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 0xe;
      goto LAB_0050895a;
    }
LAB_005089f3:
    debugPrint("ERROR","ERROR: Invalid cargo set for this ship\'s behaviour logic.");
  }
  if (0xf < local_48) {
    pnVar20 = (nothrow_t *)(local_48 + 1);
    pvVar18 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_5c[0] + -4);
      pnVar20 = (nothrow_t *)(local_48 + 0x24);
      uVar6 = (undefined1)local_8;
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar18))) goto LAB_0050898d;
    }
    operator_delete(pvVar18,pnVar20);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar20 = (nothrow_t *)(local_60 + 1);
    pvVar18 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar20) {
      pvVar18 = *(void **)((int)local_74[0] + -4);
      pnVar20 = (nothrow_t *)(local_60 + 0x24);
      uVar6 = (undefined1)local_8;
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar18))) {
LAB_0050898d:
        local_8._0_1_ = uVar6;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar20);
  }
LAB_005091ce:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
