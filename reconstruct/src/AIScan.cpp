// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIScan::recalculateLogic(AIScan *this)
void AIScan::recalculateLogic()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  int iVar3;
  Vec2 *pVVar4;
  AuthorityManager *this_00;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  Vec2 *unaff_EDI;
  bool bVar9;
  float fVar10;
  void *local_48 [5];
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c21cc;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar4 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_1c = 0;
  if (*(int *)((char *)this + 0x34) != 0) {
LAB_004ffe84:
    *(undefined4 *)((char *)this + 0x20) = 0x40000000;
    // [seh] ExceptionList = local_10;
    return;
  }
  iVar6 = *(int *)((char *)this + 0x24);
  local_14 = 0;
  if (*(int *)(iVar6 + 0x218) - *(int *)(iVar6 + 0x214) >> 2 != 0) {
    do {
      iVar1 = local_14 * 4;
      iVar2 = *(int *)(iVar1 + *(int *)(iVar6 + 0x214));
      if ((*(float *)(iVar2 + 0x118) == 0.0) && (iVar3 = *(int *)(iVar2 + 0x130), iVar3 != 0)) {
        bVar9 = false;
        if (*(int *)(iVar3 + 0x254) != 0) {
          bVar9 = *(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 0;
        }
        if ((bVar9) && (*(float *)(iVar2 + 0x40) <= 0.5)) {
          if (*(char *)(iVar3 + 0x234) == '\0') {
            if (*(int *)(iVar3 + 0x44) == 0) {
              bVar9 = false;
            }
            else {
              iVar2 = *(int *)(*(int *)(iVar3 + 0x44) + 0x70);
              if ((((iVar2 == 6) || (iVar2 == 0)) || (iVar2 == 1)) || (iVar2 == 2))
              goto LAB_004fff56;
              bVar9 = false;
            }
          }
          else {
LAB_004fff56:
            bVar9 = true;
          }
          if (bVar9) {
            local_28 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
            local_24 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
            local_20 = local_1c | 1;
            iVar6 = *(int *)(*(int *)(iVar1 + *(int *)(iVar6 + 0x214)) + 0x130);
            local_30 = (float)*(double *)(iVar6 + 0x28);
            fVar10 = (float)*(double *)(iVar6 + 0x30);
            // [seh] local_8 = 1;
            local_1c = local_1c | 3;
            local_2c = fVar10;
            local_18 = iVar1;
            fastDistance(pVVar4,unaff_EDI);
            if (70.0 < fVar10) {
LAB_0050007d:
              bVar9 = false;
            }
            else {
              ghidra::str::ctor
                        ((std::string *)local_48,
                         (std::string *)
                         (*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x214) + iVar1) + 0x130
                                  ) + 0x238));
              // [seh] local_8 = 2;
              this_00 = ghidra::any_singleton();
              // [seh] local_8 = CONCAT31(local_8._1_3_,1);
              uVar5 = ghidra::lib::_Tree__count((ghidra::lib::_Tree_t *)this_00,(std::string *)local_48);
              if (uVar5 != 0) {
                if (0xf < local_34) {
                  pnVar8 = (nothrow_t *)(local_34 + 1);
                  pvVar7 = local_48[0];
                  if ((nothrow_t *)0xfff < pnVar8) {
                    pvVar7 = *(void **)((int)local_48[0] + -4);
                    pnVar8 = (nothrow_t *)(local_34 + 0x24);
                    if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7))) goto LAB_005000ec;
                  }
                  operator_delete(pvVar7,pnVar8);
                }
                goto LAB_0050007d;
              }
              if (0xf < local_34) {
                pnVar8 = (nothrow_t *)(local_34 + 1);
                pvVar7 = local_48[0];
                if ((nothrow_t *)0xfff < pnVar8) {
                  pvVar7 = *(void **)((int)local_48[0] + -4);
                  pnVar8 = (nothrow_t *)(local_34 + 0x24);
                  if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7))) {
LAB_005000ec:
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar7,pnVar8);
              }
              bVar9 = true;
            }
            local_1c = local_20 & 0xfffffffc;
            if (bVar9) {
              *(undefined4 *)((char *)this + 0x34) =
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x214) + iVar1) + 0x130);
            }
          }
        }
      }
      iVar6 = *(int *)((char *)this + 0x24);
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(iVar6 + 0x218) - *(int *)(iVar6 + 0x214) >> 2));
    if (*(int *)((char *)this + 0x34) != 0) goto LAB_004ffe84;
  }
  *(undefined4 *)((char *)this + 0x20) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AIScan::runLogic(AIScan *this,float param_1)
void AIScan::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff74[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff5c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff44[1] = {0};  // [pseudo] address of an unnamed stack slot
  Requirement *this_00;
  std::string *this_01;
  bool bVar1;
  char *pcVar2;
  int iVar3;
  std::string *pbVar4;
  SpaceStation *pSVar5;
  EmailManager *pEVar6;
  AuthorityManager *pAVar7;
  word *pwVar8;
  LogSystem *pLVar9;
  void *pvVar10;
  LogSystem *this_02;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  uint uVar12;
  float fVar13;
  Stats aSStack_b8 [8];
  undefined4 uStack_b0;
  char *local_a0;
  int *piStack_9c;
  Good *pGStack_98;
  std::string local_88 [8];
  undefined4 uStack_80;
  Good *local_64;
  float local_60;
  undefined1 *local_5c;
  float local_58;
  Stats *local_54;
  SpaceStation *local_50;
  Faction *local_4c;
  char local_46;
  char local_45;
  void *local_44 [5];
  uint local_30;
  LogSystem *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c22e7;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar3 = *(int *)((char *)this + 0x24);
  if (*(char *)(*(int *)(iVar3 + 0x40) + 0x34) == '\0') {
    *(undefined1 *)(*(int *)(iVar3 + 0x40) + 0x34) = 1;
    iVar3 = *(int *)((char *)this + 0x24);
  }
  *(undefined1 *)(*(int *)(iVar3 + 0x44) + 0x50) = 1;
  *(undefined1 *)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x58) = 0;
  iVar3 = *(int *)((char *)this + 0x34);
  local_14 = pcVar2;
  if (iVar3 == 0) goto LAB_00500d8b;
  local_60 = (float)*(double *)(*(int *)((char *)this + 0x24) + 0x28);
  local_5c = (undefined1 *)(float)*(double *)(*(int *)((char *)this + 0x24) + 0x30);
  local_58 = (float)*(double *)(iVar3 + 0x28);
  local_54 = (Stats *)(float)*(double *)(iVar3 + 0x30);
  // [seh] local_8 = 1;
  fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_58,(Vec2 *)&local_60);
  local_4c = (Faction *)(0x5f3759df - ((uint)fVar13 >> 1));
  // [seh] local_8 = 0xffffffff;
  if ((25.0 <= (1.5 - fVar13 * 0.5 * (float)local_4c * (float)local_4c) * (float)local_4c * fVar13)
     || (fVar13 = *(float *)((char *)this + 0x30), *(float *)((char *)this + 0x30) = fVar13 - param_1,
        0.0 < fVar13 - param_1)) goto LAB_00500d8b;
  iVar3 = *(int *)((char *)this + 0x24);
  uVar12 = 0;
  local_64 = (Good *)0x0;
  local_45 = '\0';
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x110) - *(int *)(*(int *)(iVar3 + 0x24) + 0x10c) >> 2 != 0)
  {
    do {
      this_00 = *(Requirement **)
                 (*(int *)(uVar12 * 4 + *(int *)(*(int *)(iVar3 + 0x24) + 0x10c)) + 0x18);
      if ((this_00 == (Requirement *)0x0) ||
         (bVar1 = Requirement::checkReq
                            (this_00,*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124)), bVar1)) {
        ghidra::str::ctor
                  (local_88,*(std::string **)
                             (*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x10c) + uVar12 * 4)
                  );
        local_64 = GameData::getGoodWithShortName();
        if ((local_64 != (Good *)0x0) &&
           ((*(CargoHold **)(*(int *)((char *)this + 0x34) + 0x1f8) != (CargoHold *)0x0 &&
            (iVar3 = CargoHold::amountHeld
                               (*(CargoHold **)(*(int *)((char *)this + 0x34) + 0x1f8),*(int *)local_64),
            0 < iVar3)))) {
          local_45 = '\x01';
          break;
        }
      }
      iVar3 = *(int *)((char *)this + 0x24);
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(*(int *)(iVar3 + 0x24) + 0x110) -
                             *(int *)(*(int *)(iVar3 + 0x24) + 0x10c) >> 2));
  }
  iVar3 = *(int *)((char *)this + 0x34);
  if (*(char *)(iVar3 + 0x234) != '\0') {
    local_50 = (SpaceStation *)local_88;
    local_88[0] = (std::string)0x0;
    ghidra::str::assign(local_88,"times_scanned",0xd);
    // [seh] local_8 = 2;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      local_54 = operator_new(0x58);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      Singleton<Stats>::instance = (Stats *)new ((void *)(local_54)) Stats();
    }
    // [seh] local_8 = 0xffffffff;
    (Singleton<Stats>::instance)->addStat();
    local_50 = (SpaceStation *)&stack0xffffff74;
    pGStack_98 = (Good *)0x50039e;
    ghidra::str::assign((std::string *)&stack0xffffff74,"",0);
    local_54 = (Stats *)&stack0xffffff5c;
    // [seh] local_8 = 4;
    uStack_b0 = 0x5003ca;
    ghidra::str::assign((std::string *)&stack0xffffff5c,"times_scanned",0xd);
    // [seh] local_8 = CONCAT31(local_8._1_3_,5);
    ghidra::str::assign((std::string *)&stack0xffffff44,"play",4);
    // [seh] local_8 = 0xffffffff;
    Analytics::logEvent();
    iVar3 = *(int *)((char *)this + 0x34);
  }
  local_46 = '\0';
  if (((*(int *)(iVar3 + 0x40) != 0) && (*(char *)(*(int *)(iVar3 + 0x40) + 0x34) == '\0')) ||
     ((*(int *)(iVar3 + 0x44) != 0 &&
      ((*(int *)(*(int *)(iVar3 + 0x44) + 0x70) == 2 ||
       (bVar1 = ghidra::lib::_Traits_equal___x28_x29("pirate",6,pcVar2,unaff_EDI), bVar1)))))) {
    local_46 = '\x01';
  }
  local_1c = 0xf00000000;
  local_2c = (LogSystem *)((uint)local_2c & 0xffffff00);
  // [seh] local_8 = 6;
  if (local_46 == '\0') {
    if (local_45 != '\0') {
      uStack_80 = 0x5008d9;
      pbVar4 = (std::string *)strUsingArgs((char *)local_44);
      ghidra::lib::basic_string__operator_x3d((std::string *)&local_2c,pbVar4);
      if (0xf < local_30) {
        pnVar11 = (nothrow_t *)(local_30 + 1);
        pvVar10 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_44[0] + -4);
          pnVar11 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_005004f6;
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_5c = local_88;
      ghidra::str::ctor(local_88,(std::string *)&local_2c);
      // [seh] local_8._0_1_ = 9;
      ghidra::str::ctor
                ((std::string *)&local_a0,(std::string *)(*(int *)((char *)this + 0x24) + 0x238));
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage();
      goto LAB_00500955;
    }
LAB_00500c0e:
    uStack_80 = 0x500c2b;
    pwVar8 = (word *)strUsingArgs((char *)local_44);
    if ((word *)&local_2c != pwVar8) {
      // [mislabelled-dtor] word::~word((word *)&local_2c);
      local_2c = *(LogSystem **)pwVar8;
      uStack_28 = *(undefined4 *)(pwVar8 + 4);
      uStack_24 = *(undefined4 *)(pwVar8 + 8);
      uStack_20 = *(undefined4 *)(pwVar8 + 0xc);
      local_1c = *(undefined8 *)(pwVar8 + 0x10);
      *(undefined4 *)(pwVar8 + 0x10) = 0;
      *(undefined4 *)(pwVar8 + 0x14) = 0xf;
      *pwVar8 = (word)0x0;
    }
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_005004f6;
      }
      operator_delete(pvVar10,pnVar11);
    }
    local_5c = local_88;
    ghidra::str::ctor(local_88,(std::string *)&local_2c);
    // [seh] local_8._0_1_ = 0x1a;
    ghidra::str::ctor
              ((std::string *)&local_a0,(std::string *)(*(int *)((char *)this + 0x24) + 0x238));
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage();
    iVar3 = *(int *)((char *)this + 0x34);
    if (*(char *)(iVar3 + 0x234) != '\0') {
      uStack_80 = 0x500cf5;
      (this_02)->addLogLine(*(LogPriority *)(iVar3 + 0x224), (char *)0x3);
      iVar3 = *(int *)((char *)this + 0x34);
    }
    local_5c = local_88;
    ghidra::str::ctor(local_88,(std::string *)(iVar3 + 0x238));
    // [seh] local_8._0_1_ = 0x1b;
    pAVar7 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    (pAVar7)->haveScannedShip();
    local_88[0] = (std::string)0x0;
    ghidra::str::assign
              (local_88,"Scanned vessel and found nothing. Moving on with my patrol.",0x3b);
    Ship::log();
  }
  else {
    if (local_45 == '\0') {
      if (*(int *)(*(int *)(iVar3 + 0x44) + 0x70) == 2) {
LAB_0050085a:
        uStack_80 = 0x500877;
        pwVar8 = (word *)strUsingArgs((char *)local_44);
        if ((word *)&local_2c != pwVar8) {
          // [mislabelled-dtor] word::~word((word *)&local_2c);
          local_2c = *(LogSystem **)pwVar8;
          uStack_28 = *(undefined4 *)(pwVar8 + 4);
          uStack_24 = *(undefined4 *)(pwVar8 + 8);
          uStack_20 = *(undefined4 *)(pwVar8 + 0xc);
          local_1c = *(undefined8 *)(pwVar8 + 0x10);
          *(undefined4 *)(pwVar8 + 0x10) = 0;
          *(undefined4 *)(pwVar8 + 0x14) = 0xf;
          *pwVar8 = (word)0x0;
        }
      }
      else {
        local_54 = *(Stats **)(iVar3 + 0x1c);
        local_4c = (Faction *)(iVar3 + 8);
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("pirate",6,pcVar2,unaff_EDI);
        if (bVar1) goto LAB_0050085a;
        uStack_80 = 0x50058b;
        pbVar4 = (std::string *)strUsingArgs((char *)local_44);
        ghidra::lib::basic_string__operator_x3d((std::string *)&local_2c,pbVar4);
      }
      if (0xf < local_30) {
        pnVar11 = (nothrow_t *)(local_30 + 1);
        pvVar10 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_44[0] + -4);
          pnVar11 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_005004f6;
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_50 = (SpaceStation *)local_88;
      ghidra::str::ctor(local_88,(std::string *)&local_2c);
      // [seh] local_8._0_1_ = 8;
    }
    else {
      if (*(int *)(*(int *)(iVar3 + 0x44) + 0x70) != 2) {
        local_54 = *(Stats **)(iVar3 + 0x1c);
        local_4c = (Faction *)(iVar3 + 8);
        ghidra::lib::_Traits_equal___x28_x29("pirate",6,pcVar2,unaff_EDI);
      }
      uStack_80 = 0x5004c4;
      pbVar4 = (std::string *)strUsingArgs((char *)local_44);
      ghidra::lib::basic_string__operator_x3d((std::string *)&local_2c,pbVar4);
      if (0xf < local_30) {
        pnVar11 = (nothrow_t *)(local_30 + 1);
        pvVar10 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_44[0] + -4);
          pnVar11 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_005004f6;
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_50 = (SpaceStation *)local_88;
      ghidra::str::ctor(local_88,(std::string *)&local_2c);
      // [seh] local_8._0_1_ = 7;
    }
    ghidra::str::ctor
              ((std::string *)&local_a0,(std::string *)(*(int *)((char *)this + 0x24) + 0x238));
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage();
    local_4c = (Faction *)0x0;
    ghidra::str::ctor
              (local_88,(std::string *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0xf0));
    pSVar5 = GameData::getSpaceStation();
    iVar3 = *(int *)((char *)this + 0x34);
    if (*(char *)(iVar3 + 0x234) != '\0') {
      if (pSVar5 != (SpaceStation *)0x0) {
        local_4c = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getMainFaction();
        (pSVar5)->addAmount(0x32);
        iVar3 = *(int *)((char *)this + 0x34);
      }
      pLVar9 = (LogSystem *)&local_2c;
      if (0xf < local_1c._4_4_) {
        pLVar9 = local_2c;
      }
      uStack_80 = 0x500673;
      (pLVar9)->addLogLine(*(LogPriority *)(iVar3 + 0x224), (char *)0x3);
      local_88[0] = (std::string)0x0;
      local_50 = (SpaceStation *)local_88;
      ghidra::str::assign(local_88,"fines_received",0xe);
      // [seh] local_8._0_1_ = 10;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        local_54 = operator_new(0x58);
        // [seh] local_8._0_1_ = 0xb;
        Singleton<Stats>::instance = (Stats *)new ((void *)(local_54)) Stats();
      }
      // [seh] local_8._0_1_ = 6;
      (Singleton<Stats>::instance)->addStat();
      local_50 = (SpaceStation *)&stack0xffffff74;
      pGStack_98 = (Good *)0x5006f8;
      ghidra::str::assign((std::string *)&stack0xffffff74,"",0);
      local_54 = (Stats *)&stack0xffffff5c;
      // [seh] local_8._0_1_ = 0xc;
      uStack_b0 = 0x500721;
      ghidra::str::assign((std::string *)&stack0xffffff5c,"fines_received",0xe);
      // [seh] local_8._0_1_ = 0xd;
      ghidra::str::assign((std::string *)&stack0xffffff44,"play",4);
      // [seh] local_8._0_1_ = 6;
      Analytics::logEvent();
      local_54 = (Stats *)(local_4c + 0x20);
      if (0xf < *(uint *)(local_4c + 0x34)) {
        local_54 = *(Stats **)local_54;
      }
      pGStack_98 = (Good *)(*(int *)((char *)this + 0x34) + 8);
      if (0xf < *(uint *)(*(int *)((char *)this + 0x34) + 0x1c)) {
        pGStack_98 = *(Good **)pGStack_98;
      }
      piStack_9c = (int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x1c);
      if (0xf < *(uint *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x30)) {
        piStack_9c = (int *)*piStack_9c;
      }
      local_a0 = 
      "You were detected travelling in %s without your IFF active, %s. A fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly."
      ;
      local_5c = local_88;
      strUsingArgs((char *)local_88);
      local_50 = (SpaceStation *)&local_a0;
      // [seh] local_8._0_1_ = 0xe;
      local_a0 = (char *)((uint)local_a0 & 0xffffff00);
      ghidra::str::assign((std::string *)&local_a0,"NO IFF FINE",0xb);
      local_54 = aSStack_b8;
      // [seh] local_8._0_1_ = 0xf;
      ghidra::str::ctor
                ((std::string *)aSStack_b8,(std::string *)(local_4c + 0x20));
      // [seh] local_8._0_1_ = 0x10;
      pEVar6 = ghidra::any_singleton();
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      (pEVar6)->addCustomEmail();
      iVar3 = *(int *)((char *)this + 0x34);
    }
    local_5c = local_88;
    ghidra::str::ctor(local_88,(std::string *)(iVar3 + 0x238));
    // [seh] local_8._0_1_ = 0x11;
    pAVar7 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,6);
    (pAVar7)->haveScannedShip();
    local_88[0] = (std::string)0x0;
    ghidra::str::assign
              (local_88,"Scanned vessel and found no IFF on. Moving on with my patrol.",0x3d);
    Ship::log();
LAB_00500955:
    if (local_45 != '\0') {
      local_4c = (Faction *)0x0;
      ghidra::str::ctor
                (local_88,(std::string *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0xf0));
      local_50 = GameData::getSpaceStation();
      local_54 = (Stats *)(*(int *)((char *)this + 0x34) + 0x238);
      pAVar7 = ghidra::any_singleton();
      this_01 = *(std::string **)(pAVar7 + 0xc);
      if (*(std::string **)(pAVar7 + 0x10) == this_01) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(pAVar7 + 8),(std::string *)this_01,(std::string *)local_54);
      }
      else {
        ghidra::str::ctor(this_01,(std::string *)local_54);
        *(int *)(pAVar7 + 0xc) = *(int *)(pAVar7 + 0xc) + 0x18;
      }
      pSVar5 = local_50;
      iVar3 = *(int *)((char *)this + 0x34);
      if (*(char *)(iVar3 + 0x234) != '\0') {
        if (local_50 != (SpaceStation *)0x0) {
          local_4c = (*(Sector **)(*(int *)((char *)this + 0x24) + 0x24))->getMainFaction();
          (pSVar5)->addAmount(*(int *)(*(int *)(*(int *)((char *)this + 0x24) + 0x24) + 0x108));
          iVar3 = *(int *)((char *)this + 0x34);
        }
        pLVar9 = (LogSystem *)&local_2c;
        if (0xf < local_1c._4_4_) {
          pLVar9 = local_2c;
        }
        uStack_80 = 0x500a0d;
        (pLVar9)->addLogLine(*(LogPriority *)(iVar3 + 0x224), (char *)0x3);
        local_5c = local_88;
        local_88[0] = (std::string)0x0;
        ghidra::str::assign(local_88,"fines_received",0xe);
        // [seh] local_8._0_1_ = 0x12;
        if (Singleton<Stats>::instance == (Stats *)0x0) {
          local_50 = operator_new(0x58);
          // [seh] local_8._0_1_ = 0x13;
          Singleton<Stats>::instance = (Stats *)new ((void *)((Stats *)local_50)) Stats();
        }
        // [seh] local_8._0_1_ = 6;
        (Singleton<Stats>::instance)->addStat();
        local_5c = &stack0xffffff74;
        pGStack_98 = (Good *)0x500a92;
        ghidra::str::assign((std::string *)&stack0xffffff74,"",0);
        local_50 = (SpaceStation *)&stack0xffffff5c;
        // [seh] local_8._0_1_ = 0x14;
        uStack_b0 = 0x500abb;
        ghidra::str::assign((std::string *)&stack0xffffff5c,"fines_received",0xe);
        // [seh] local_8._0_1_ = 0x15;
        ghidra::str::assign((std::string *)&stack0xffffff44,"play",4);
        // [seh] local_8._0_1_ = 6;
        Analytics::logEvent();
        local_54 = (Stats *)(local_4c + 0x20);
        if (0xf < *(uint *)(local_4c + 0x34)) {
          local_54 = *(Stats **)local_54;
        }
        pGStack_98 = local_64 + 4;
        if (0xf < *(uint *)(local_64 + 0x18)) {
          pGStack_98 = *(Good **)pGStack_98;
        }
        local_50 = *(SpaceStation **)(*(int *)((char *)this + 0x24) + 0x24);
        piStack_9c = (int *)((int)local_50 + 0x1c);
        if (0xf < *(uint *)((int)local_50 + 0x30)) {
          piStack_9c = (int *)*piStack_9c;
        }
        local_a0 = 
        "You were detected travelling in %s while carrying a controlled substance, %s. A fine of %d credits has been issued. Please pay this fine at %s, or the nearest %s facility, as soon as possible.\n\nInterest will accrue on this fine if not paid promptly."
        ;
        local_5c = local_88;
        strUsingArgs((char *)local_88);
        local_50 = (SpaceStation *)&local_a0;
        // [seh] local_8._0_1_ = 0x16;
        local_a0 = (char *)((uint)local_a0 & 0xffffff00);
        ghidra::str::assign((std::string *)&local_a0,"SMUGGLING FINE",0xe);
        // [seh] local_8._0_1_ = 0x17;
        ghidra::str::ctor
                  ((std::string *)aSStack_b8,(std::string *)(local_4c + 0x20));
        // [seh] local_8._0_1_ = 0x18;
        pEVar6 = ghidra::any_singleton();
        // [seh] local_8 = CONCAT31(local_8._1_3_,6);
        (pEVar6)->addCustomEmail();
        iVar3 = *(int *)((char *)this + 0x34);
      }
      local_5c = local_88;
      ghidra::str::ctor(local_88,(std::string *)(iVar3 + 0x238));
      // [seh] local_8._0_1_ = 0x19;
      pAVar7 = ghidra::any_singleton();
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      (pAVar7)->haveScannedShip();
      local_88[0] = (std::string)0x0;
      ghidra::str::assign
                (local_88,"Scanned vessel and found contraband. Moving on with my patrol.",0x3e);
      Ship::log();
    }
    if ((local_46 == '\0') && (local_45 == '\0')) goto LAB_00500c0e;
  }
  *(undefined4 *)((char *)this + 0x34) = 0;
  if (0xf < local_1c._4_4_) {
    pnVar11 = (nothrow_t *)(local_1c._4_4_ + 1);
    pLVar9 = local_2c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pLVar9 = *(LogSystem **)(local_2c + -4);
      pnVar11 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if ((LogSystem *)0x1f < local_2c + (-4 - (int)pLVar9)) {
LAB_005004f6:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pLVar9,pnVar11);
  }
LAB_00500d8b:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIScan::enterState(AIScan *this)
void AIScan::enterState()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff88[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  LogSystem *this_00;
  word *pwVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  std::string abStack_8c [8];
  undefined4 uStack_84;
  std::string abStack_74 [8];
  undefined4 uStack_6c;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c2320;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  uStack_84 = 0x500e0d;
  ghidra::str::assign
            ((std::string *)&stack0xffffff88,"Entering scan mode to scan vessel %s.",0x25);
  Ship::log();
  local_1c = 0xf00000000;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  // [seh] local_8 = 0;
  if (*(char *)(*(int *)(*(int *)((char *)this + 0x34) + 0x40) + 0x34) == '\0') {
    uStack_6c = 0x500ee8;
    pwVar2 = (word *)strUsingArgs((char *)local_44);
    if ((word *)&local_2c != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_2c);
      local_2c = *(void **)pwVar2;
      uStack_28 = *(undefined4 *)(pwVar2 + 4);
      uStack_24 = *(undefined4 *)(pwVar2 + 8);
      uStack_20 = *(undefined4 *)(pwVar2 + 0xc);
      local_1c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (local_30 < 0x10) goto LAB_00500f53;
    pnVar4 = (nothrow_t *)(local_30 + 1);
    pvVar3 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)local_44[0] + -4);
      pnVar4 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    uStack_6c = 0x500e5b;
    pwVar2 = (word *)strUsingArgs((char *)local_44);
    if ((word *)&local_2c != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_2c);
      local_2c = *(void **)pwVar2;
      uStack_28 = *(undefined4 *)(pwVar2 + 4);
      uStack_24 = *(undefined4 *)(pwVar2 + 8);
      uStack_20 = *(undefined4 *)(pwVar2 + 0xc);
      local_1c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (local_30 < 0x10) goto LAB_00500f53;
    pnVar4 = (nothrow_t *)(local_30 + 1);
    pvVar3 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar4) {
      pnVar4 = (nothrow_t *)(local_30 + 0x24);
      pvVar3 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete(pvVar3,pnVar4);
LAB_00500f53:
  iVar1 = *(int *)((char *)this + 0x24);
  *(undefined4 *)((char *)this + 0x30) = 0x41200000;
  *(undefined4 *)(iVar1 + 900) = *(undefined4 *)((char *)this + 0x34);
  *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  ghidra::str::ctor(abStack_74,(std::string *)&local_2c);
  // [seh] local_8._0_1_ = 1;
  ghidra::str::ctor(abStack_8c,(std::string *)(*(int *)((char *)this + 0x24) + 0x238));
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  (*(ShipChatter **)(*(int *)(*(int *)((char *)this + 0x24) + 0x44) + 0x3c))->addMessage(1);
  this_00 = *(LogSystem **)((char *)this + 0x34);
  if (this_00[0x234] != (byte)0x0) {
    uStack_6c = 0x500fe7;
    (this_00)->addLogLine(*(LogPriority *)(this_00 + 0x224), &DAT_00000002);
  }
  if (0xf < local_1c._4_4_) {
    pnVar4 = (nothrow_t *)(local_1c._4_4_ + 1);
    pvVar3 = local_2c;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)local_2c + -4);
      pnVar4 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall AIScan::leaveState(AIScan *this)
void AIScan::leaveState()

{
  int iVar1;
  
  iVar1 = *(int *)((char *)this + 0x24);
  *(undefined1 **)((char *)this + 0x30) = &DAT_bf800000;
  *(undefined4 *)(iVar1 + 200) = 0xc61c3c00;
  *(undefined4 *)(iVar1 + 900) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0xc61c3c00;
  *(undefined4 *)((char *)this + 0x34) = 0;
  return;
}


// Ghidra: basic_string<> * __thiscall AIScan::describe(AIScan *this)
std::string * AIScan::describe()

{
  int iVar1;
  undefined4 *puVar2;
  std::string *in_stack_00000004;
  
  iVar1 = *(int *)((char *)this + 0x34);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    strUsingArgs((char *)in_stack_00000004,"Scanning %s (%.0f%%)",puVar2,
                 (double)(100.0 - (*(float *)((char *)this + 0x30) / 10.0) * 100.0));
    return in_stack_00000004;
  }
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  ghidra::str::assign(in_stack_00000004,"Scanning nothing.",0x11);
  return in_stack_00000004;
}
