// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Requirement::Requirement(Requirement *this,undefined4 *param_2)
Requirement::Requirement(undefined4 * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  std::string *pbVar9;
  ComparisonCheckType CVar10;
  Stats *pSVar11;
  Good *pGVar12;
  std::string *pbVar13;
  undefined4 ****ppppuVar14;
  int iVar15;
  std::string *pbVar16;
  undefined4 ****ppppuVar17;
  void *pvVar18;
  nothrow_t *pnVar19;
  uint uVar20;
  int iVar21;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  std::string abStack_b4 [8];
  undefined4 uStack_ac;
  uint uVar22;
  std::string *local_80;
  int local_7c;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  std::string *local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005bd22c;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pbVar13 = (std::string *)((char *)this + 8);
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0xf;
  *pbVar13 = (std::string)0x0;
  // [seh] local_8 = 1;
  uStack_7 = 0;
  local_14 = pcVar3;
  ghidra::str::ctor((std::string *)((char *)this + 0x20),(std::string *)&param_2);
  *(undefined4 *)((char *)this + 0x38) = 0;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (std::string *)((uint)local_44[0] & 0xffffff00);
  // [seh] local_8 = 5;
  uVar1 = local_8;
  // [seh] local_8 = 5;
  uVar20 = 0;
  local_7c = 0;
  if (in_stack_00000014 != 0) {
    do {
      if (local_7c == 0) {
        puVar6 = &param_2;
        if (0xf < in_stack_00000018) {
          puVar6 = param_2;
        }
        if (*(char *)((int)puVar6 + uVar20) != '>') {
          puVar6 = &param_2;
          if (0xf < in_stack_00000018) {
            puVar6 = param_2;
          }
          if (*(char *)((int)puVar6 + uVar20) != '=') {
            puVar6 = &param_2;
            if (0xf < in_stack_00000018) {
              puVar6 = param_2;
            }
            if (*(char *)((int)puVar6 + uVar20) != '<') {
              puVar6 = &param_2;
              if (0xf < in_stack_00000018) {
                puVar6 = param_2;
              }
              if (*(char *)((int)puVar6 + uVar20) != '!') {
                uStack_ac = 0x4a1c7b;
                pcVar4 = (char *)strUsingArgs((char *)local_74);
                // [seh] local_8 = 7;
                pcVar5 = pcVar4;
                if (0xf < *(uint *)(pcVar4 + 0x14)) {
                  pcVar5 = *(char **)pcVar4;
                }
                uVar22 = *(uint *)(pcVar4 + 0x10);
                pbVar9 = (std::string *)local_2c;
                goto LAB_004a1df6;
              }
            }
          }
        }
        uStack_ac = 0x4a1cb4;
        pcVar5 = (char *)strUsingArgs((char *)local_74);
        // [seh] local_8 = 6;
        pcVar4 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar4 = *(char **)pcVar5;
        }
        ghidra::str::append((std::string *)local_5c,pcVar4,*(uint *)(pcVar5 + 0x10));
        // [seh] local_8 = 5;
        if (0xf < local_60) {
          pnVar19 = (nothrow_t *)(local_60 + 1);
          pvVar18 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar18 = *(void **)((int)local_74[0] + -4);
            pnVar19 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar18))) goto LAB_004a23d5;
          }
          operator_delete(pvVar18,pnVar19);
        }
        local_7c = 1;
      }
      else {
        if (local_7c == 1) {
          puVar6 = &param_2;
          if (0xf < in_stack_00000018) {
            puVar6 = param_2;
          }
          if (*(char *)((int)puVar6 + uVar20) != '>') {
            puVar6 = &param_2;
            if (0xf < in_stack_00000018) {
              puVar6 = param_2;
            }
            if (*(char *)((int)puVar6 + uVar20) != '=') {
              puVar6 = &param_2;
              if (0xf < in_stack_00000018) {
                puVar6 = param_2;
              }
              if (*(char *)((int)puVar6 + uVar20) != '<') {
                puVar6 = &param_2;
                if (0xf < in_stack_00000018) {
                  puVar6 = param_2;
                }
                if (*(char *)((int)puVar6 + uVar20) != '!') {
                  local_7c = 2;
                  uStack_ac = 0x4a1d84;
                  pcVar4 = (char *)strUsingArgs((char *)local_74);
                  // [seh] local_8 = 9;
                  goto LAB_004a1de5;
                }
              }
            }
          }
          uStack_ac = 0x4a1da9;
          pcVar4 = (char *)strUsingArgs((char *)local_74);
          // [seh] local_8 = 8;
          pcVar5 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar5 = *(char **)pcVar4;
          }
          uVar22 = *(uint *)(pcVar4 + 0x10);
          pbVar9 = (std::string *)local_5c;
        }
        else {
          uStack_ac = 0x4a1dde;
          pcVar4 = (char *)strUsingArgs((char *)local_74);
          // [seh] local_8 = 10;
LAB_004a1de5:
          pcVar5 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar5 = *(char **)pcVar4;
          }
          uVar22 = *(uint *)(pcVar4 + 0x10);
          pbVar9 = (std::string *)local_44;
        }
LAB_004a1df6:
        ghidra::str::append(pbVar9,pcVar5,uVar22);
        // [seh] local_8 = 5;
        if (0xf < local_60) {
          pnVar19 = (nothrow_t *)(local_60 + 1);
          pvVar18 = local_74[0];
          if ((nothrow_t *)0xfff < pnVar19) {
            pvVar18 = *(void **)((int)local_74[0] + -4);
            pnVar19 = (nothrow_t *)(local_60 + 0x24);
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar18))) goto LAB_004a23d5;
          }
          operator_delete(pvVar18,pnVar19);
        }
      }
      uVar20 = uVar20 + 1;
      uVar1 = local_8;
    } while (uVar20 < in_stack_00000014);
  }
  // [seh] local_8 = uVar1;
  ppppuVar7 = local_2c;
  if (0xf < local_18) {
    ppppuVar7 = (undefined4 ****)local_2c[0];
  }
  ppppuVar14 = local_2c;
  if (0xf < local_18) {
    ppppuVar14 = (undefined4 ****)local_2c[0];
  }
  iVar21 = 0;
  iVar15 = ((int)ppppuVar7 + local_1c) - (int)ppppuVar14;
  if ((undefined4 ****)((int)ppppuVar7 + local_1c) < ppppuVar14) {
    iVar15 = 0;
  }
  if (iVar15 != 0) {
    do {
      iVar8 = tolower((int)*(char *)((int)ppppuVar14 + iVar21));
      *(char *)((int)ppppuVar7 + iVar21) = (char)iVar8;
      iVar21 = iVar21 + 1;
    } while (iVar21 != iVar15);
  }
  pbVar9 = (std::string *)local_44;
  if (0xf < local_30) {
    pbVar9 = local_44[0];
  }
  pbVar16 = (std::string *)local_44;
  if (0xf < local_30) {
    pbVar16 = local_44[0];
  }
  iVar21 = 0;
  iVar15 = (int)(pbVar9 + local_34) - (int)pbVar16;
  if (pbVar9 + local_34 < pbVar16) {
    iVar15 = 0;
  }
  if (iVar15 != 0) {
    do {
      iVar8 = tolower((int)(char)pbVar16[iVar21]);
      pbVar9[iVar21] = SUB41(iVar8,0);
      iVar21 = iVar21 + 1;
    } while (iVar21 != iVar15);
  }
  iVar15 = local_1c;
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("check",5,pcVar3,unaff_EDI);
  if (bVar2) {
    *(undefined4 *)this = 0xf;
    if (pbVar13 != (std::string *)local_44) {
      pbVar9 = (std::string *)local_44;
      if (0xf < local_30) {
        pbVar9 = local_44[0];
      }
      ghidra::str::assign(pbVar13,(char *)pbVar9,local_34);
    }
    pbVar9 = pbVar13;
    local_80 = pbVar13;
    if (0xf < *(uint *)((char *)this + 0x1c)) {
      local_80 = *(std::string **)pbVar13;
      pbVar9 = *(std::string **)pbVar13;
    }
    if (0xf < *(uint *)((char *)this + 0x1c)) {
      pbVar13 = *(std::string **)pbVar13;
    }
    iVar15 = (int)(pbVar9 + *(int *)((char *)this + 0x18)) - (int)pbVar13;
    iVar21 = 0;
    if (pbVar9 + *(int *)((char *)this + 0x18) < pbVar13) {
      iVar15 = 0;
    }
    if (iVar15 != 0) {
      do {
        iVar8 = toupper((int)(char)pbVar13[iVar21]);
        local_80[iVar21] = SUB41(iVar8,0);
        iVar21 = iVar21 + 1;
      } while (iVar21 != iVar15);
    }
    goto LAB_004a23a5;
  }
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("headingtostarbase",0x11,pcVar3,unaff_EDI);
  if (bVar2) {
    *(undefined4 *)this = 0xe;
  }
  else {
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("headingtofaction",0x10,pcVar3,unaff_EDI);
    if (!bVar2) {
      bVar2 = ghidra::lib::_Traits_equal___x28_x29("headingtoneareststarbase",0x18,pcVar3,unaff_EDI);
      if (bVar2) {
        *(undefined4 *)this = 0xb;
        goto LAB_004a23a5;
      }
      bVar2 = ghidra::lib::_Traits_equal___x28_x29("headingto",9,pcVar3,unaff_EDI);
      if (bVar2) {
        *(undefined4 *)this = 0xc;
        if (pbVar13 != (std::string *)local_44) {
          pbVar9 = (std::string *)local_44;
          if (0xf < local_30) {
            pbVar9 = local_44[0];
          }
          ghidra::str::assign(pbVar13,(char *)pbVar9,local_34);
        }
LAB_004a21d2:
        uStack_ac = 0x4a21e2;
        ghidra::lib::transform___x28_x29();
      }
      else {
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("hasfreeweaponslot",0x11,pcVar3,unaff_EDI);
        if (bVar2) {
          *(undefined4 *)this = 5;
LAB_004a2210:
          ghidra::str::ctor(abStack_b4,(std::string *)local_5c);
          CVar10 = comparisonFromString();
          *(ComparisonCheckType *)((char *)this + 4) = CVar10;
          goto LAB_004a23a5;
        }
        if (local_34 == 0) {
          ghidra::lib::basic_string__operator_x3d(pbVar13,(std::string *)local_2c);
          *(undefined4 *)((char *)this + 4) = 0;
          *(undefined4 *)this = 1;
          goto LAB_004a23a5;
        }
        if (iVar15 == 0) {
          ghidra::lib::basic_string__operator_x3d(pbVar13,(std::string *)local_44);
          *(undefined4 *)((char *)this + 4) = 1;
          *(undefined4 *)this = 2;
          goto LAB_004a23a5;
        }
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("money",5,pcVar3,unaff_EDI);
        if (bVar2) {
          *(undefined4 *)this = 3;
          ghidra::str::ctor(abStack_b4,(std::string *)local_5c);
          CVar10 = comparisonFromString();
          *(ComparisonCheckType *)((char *)this + 4) = CVar10;
          pbVar13 = (std::string *)local_44;
          if (0xf < local_30) {
            pbVar13 = local_44[0];
          }
          iVar15 = atoi((char *)pbVar13);
        }
        else {
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("at",2,pcVar3,unaff_EDI);
          if (bVar2) {
            *(undefined4 *)this = 7;
            ghidra::str::ctor(abStack_b4,(std::string *)local_5c);
            CVar10 = comparisonFromString();
            *(ComparisonCheckType *)((char *)this + 4) = CVar10;
            ghidra::lib::basic_string__operator_x3d(pbVar13,(std::string *)local_44);
            goto LAB_004a21d2;
          }
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("hasfreecomponentslot",0x14,pcVar3,unaff_EDI);
          if (bVar2) {
            *(undefined4 *)this = 6;
            goto LAB_004a2210;
          }
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("hascomponent",0xc,pcVar3,unaff_EDI);
          if (bVar2) {
            bVar2 = ghidra::lib::_Traits_equal___x28_x29("!=",2,pcVar3,unaff_EDI);
            *(undefined4 *)((char *)this + 4) = 0;
            *(uint *)this = bVar2 + 8;
            ghidra::lib::basic_string__operator_x3d(pbVar13,(std::string *)local_44);
            goto LAB_004a23a5;
          }
          ghidra::str::ctor(abStack_b4,(std::string *)local_2c);
          // [seh] local_8 = 0xb;
          pSVar11 = Singleton<Stats>::getInstance();
          // [seh] local_8 = 5;
          bVar2 = (pSVar11)->hasCustomStat();
          if (bVar2) {
            *(undefined4 *)this = 10;
            ghidra::str::ctor(abStack_b4,(std::string *)local_5c);
            CVar10 = comparisonFromString();
            *(ComparisonCheckType *)((char *)this + 4) = CVar10;
            ghidra::lib::basic_string__operator_x3d(pbVar13,(std::string *)local_2c);
          }
          else {
            *(undefined4 *)this = 4;
            ghidra::str::ctor(abStack_b4,(std::string *)local_5c);
            CVar10 = comparisonFromString();
            ppppuVar7 = local_2c;
            if (0xf < local_18) {
              ppppuVar7 = (undefined4 ****)local_2c[0];
            }
            *(ComparisonCheckType *)((char *)this + 4) = CVar10;
            ppppuVar14 = local_2c;
            if (0xf < local_18) {
              ppppuVar14 = (undefined4 ****)local_2c[0];
            }
            ppppuVar17 = local_2c;
            if (0xf < local_18) {
              ppppuVar17 = (undefined4 ****)local_2c[0];
            }
            ghidra::lib::transform___x28_x29(ppppuVar17,local_1c + (int)ppppuVar7,ppppuVar14);
            ghidra::str::ctor(abStack_b4,(std::string *)local_2c);
            pGVar12 = GameData::getGoodWithShortName();
            if (pGVar12 == (Good *)0x0) {
              uStack_ac = 0x4a2360;
              debugPrint("ERROR","Invalid good \'%s\'");
              bVar2 = cc_assert_script_compatible("Invalid good.");
              if (!bVar2) {
                cocos2d::log("Assert failed: %s");
              }
            }
            *(undefined4 *)((char *)this + 0x3c) = *(undefined4 *)pGVar12;
          }
          pbVar13 = (std::string *)local_44;
          if (0xf < local_30) {
            pbVar13 = local_44[0];
          }
          iVar15 = atoi((char *)pbVar13);
        }
        *(int *)((char *)this + 0x38) = iVar15;
      }
      goto LAB_004a23a5;
    }
    *(undefined4 *)this = 0xd;
  }
  if (pbVar13 != (std::string *)local_44) {
    pbVar9 = (std::string *)local_44;
    if (0xf < local_30) {
      pbVar9 = local_44[0];
    }
    ghidra::str::assign(pbVar13,(char *)pbVar9,local_34);
  }
LAB_004a23a5:
  m_flagManager = ghidra::any_singleton();
  if (0xf < local_30) {
    pnVar19 = (nothrow_t *)(local_30 + 1);
    pbVar13 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      pbVar13 = *(std::string **)(local_44[0] + -4);
      pnVar19 = (nothrow_t *)(local_30 + 0x24);
      if ((std::string *)0x1f < local_44[0] + (-4 - (int)pbVar13)) {
LAB_004a23d5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar13,pnVar19);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (std::string *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar19 = (nothrow_t *)(local_48 + 1);
    pvVar18 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)local_5c[0] + -4);
      pnVar19 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar18))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar19);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_18) {
    pnVar19 = (nothrow_t *)(local_18 + 1);
    ppppuVar7 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar19) {
      ppppuVar7 = (undefined4 ****)local_2c[0][-1];
      pnVar19 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar7,pnVar19);
  }
  if (0xf < in_stack_00000018) {
    pnVar19 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar19) {
      puVar6 = (undefined4 *)param_2[-1];
      pnVar19 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar6,pnVar19);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall Requirement::checkReq(Requirement *this,CargoHold *param_1,BankAccount *param_2)
bool Requirement::checkReq(CargoHold * param_1, BankAccount * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  uint uVar2;
  uint uVar3;
  ShipModule *this_00;
  char *pcVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 uVar7;
  std::string *pbVar8;
  int iVar9;
  Stats *pSVar10;
  Ship *pSVar11;
  GameObject *pGVar12;
  nothrow_t *pnVar13;
  int extraout_EDX;
  char *pcVar14;
  Requirement *pRVar15;
  std::string *unaff_EDI;
  void *pvVar16;
  std::string local_84 [8];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  ghidra::func_class local_3c [36];
  int *local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bd268;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar8 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar9 = *(int *)this;
  local_14 = pbVar8;
  if (iVar9 == 0) goto switchD_004a265a_default;
  if (iVar9 == 7) {
    if (*(int *)((char *)this + 4) == 0) {
      uStack_78 = 0x4a2535;
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("PLAYERSHIP",10,(char *)pbVar8,(uint)unaff_EDI);
      if ((((!bVar6) && (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) &&
          (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)) &&
         (ShipData::currentlyBoardedShip != (Ship *)0x0)) {
        std::operator!=<>(pbVar8,unaff_EDI);
      }
    }
    else if (*(int *)((char *)this + 4) == 1) {
      uVar2 = *(uint *)((char *)this + 0x1c);
      pRVar15 = this + 8;
      uVar3 = *(uint *)((char *)this + 0x18);
      uStack_78 = 0x4a25c2;
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("PLAYERSHIP",10,(char *)pbVar8,(uint)unaff_EDI);
      if (((!bVar6) && (bVar6 = (*(Ship **)(g_gameData + 0xd0))->isDocked(), !bVar6)) &&
         (ShipData::currentlyBoardedShip != (Ship *)0x0)) {
        if (0xf < uVar2) {
          pRVar15 = *(Requirement **)pRVar15;
        }
        uStack_78 = 0x4a2637;
        ghidra::lib::_Traits_equal___x28_x29((char *)pRVar15,uVar3,(char *)pbVar8,(uint)unaff_EDI);
      }
    }
    goto switchD_004a265a_default;
  }
  if (iVar9 == 3) {
    switch(*(undefined4 *)((char *)this + 4)) {
    case 0:
switchD_004a26e4_caseD_0:
      break;
    case 1:
switchD_004a26e4_caseD_1:
      break;
    case 2:
switchD_004a26e4_caseD_2:
      break;
    case 3:
switchD_004a26e4_caseD_3:
      break;
    case 4:
switchD_004a26e4_caseD_4:
      break;
    case 5:
switchD_004a26e4_caseD_5:
    default:
      break;
    }
switchD_004a265a_default:
    // [seh] ExceptionList = local_10;
    // [cookie] uVar7 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
    return (bool)uVar7;
  }
  if (iVar9 != 4) {
    if (iVar9 == 1) {
      ghidra::str::ctor(local_84,(std::string *)((char *)this + 8));
      (m_flagManager)->flagSet();
      goto switchD_004a265a_default;
    }
    if (iVar9 == 2) {
      ghidra::str::ctor(local_84,(std::string *)((char *)this + 8));
      (m_flagManager)->flagSet();
      goto switchD_004a265a_default;
    }
    if (iVar9 == 5) {
      this_00 = *(ShipModule **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
      if (this_00 != (ShipModule *)0x0) {
        (this_00)->getFreeHousingSlots();
      }
      goto switchD_004a265a_default;
    }
    if (iVar9 == 6) goto switchD_004a265a_default;
    if (iVar9 == 8) {
      pRVar15 = this + 8;
      if (0xf < *(uint *)((char *)this + 0x1c)) {
        pRVar15 = *(Requirement **)pRVar15;
      }
      iVar9 = atoi((char *)pRVar15);
      (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->hasComponent(iVar9);
      goto switchD_004a265a_default;
    }
    if (iVar9 == 9) {
      pRVar15 = this + 8;
      if (0xf < *(uint *)((char *)this + 0x1c)) {
        pRVar15 = *(Requirement **)pRVar15;
      }
      iVar9 = atoi((char *)pRVar15);
      (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->hasComponent(iVar9);
      goto switchD_004a265a_default;
    }
    if (iVar9 != 10) {
      if (iVar9 == 0xb) {
        uStack_78 = 1;
        uStack_7c = 0x4a2884;
        pSVar11 = (*(Sector **)(g_gameData + 0xd8))->getShipClosestTo();
        if (pSVar11 != (Ship *)0x0) {
          (*(Ship **)(g_gameData + 0xd0))->getFinalWaypointObject();
        }
      }
      else if (iVar9 == 0xe) {
        pGVar12 = (*(Ship **)(g_gameData + 0xd0))->getFinalWaypointObject();
        if ((pGVar12 != (GameObject *)0x0) && (*(int *)(pGVar12 + 0x30) == 1)) {
          ((Ship *)(pGVar12 + -8))->isSpaceStation();
        }
      }
      else {
        if (iVar9 == 0xc) {
          pGVar12 = (*(Ship **)(g_gameData + 0xd0))->getFinalWaypointObject();
          if ((pGVar12 == (GameObject *)0x0) || (*(int *)(pGVar12 + 0x30) != 1))
          goto switchD_004a265a_default;
          pRVar15 = this + 8;
          if (0xf < *(uint *)((char *)this + 0x1c)) {
            pRVar15 = *(Requirement **)((char *)this + 8);
          }
        }
        else {
          if (iVar9 != 0xd) {
            if (iVar9 == 0xf) {
              ghidra::str::ctor
                        ((std::string *)local_5c,(std::string *)((char *)this + 8));
              pvVar5 = local_5c[0];
              iVar9 = 0;
              do {
                pcVar4 = (&PTR_s_NONE_005e0828)[iVar9];
                pcVar14 = pcVar4;
                do {
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 != '\0');
                uStack_78 = 0x4a29fd;
                bVar6 = ghidra::lib::_Traits_equal_t
                                  (pcVar4,(int)pcVar14 - (int)(pcVar4 + 1),(char *)pbVar8,
                                   (uint)unaff_EDI);
                if (bVar6) {
                  if (0xf < local_48) {
                    pnVar13 = (nothrow_t *)(local_48 + 1);
                    pvVar16 = pvVar5;
                    if ((nothrow_t *)0xfff < pnVar13) {
                      pvVar16 = *(void **)((int)pvVar5 + -4);
                      pnVar13 = (nothrow_t *)(local_48 + 0x24);
                      if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
                        _invalid_parameter_noinfo_noreturn();
                      }
                    }
                    uStack_78 = 0x4a2a78;
                    operator_delete(pvVar16,pnVar13);
                  }
                  goto LAB_004a2a7b;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < 0x153);
              if (0xf < local_48) {
                pnVar13 = (nothrow_t *)(local_48 + 1);
                pvVar16 = pvVar5;
                if ((nothrow_t *)0xfff < pnVar13) {
                  pvVar16 = *(void **)((int)pvVar5 + -4);
                  pnVar13 = (nothrow_t *)(local_48 + 0x24);
                  if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                uStack_78 = 0x4a2a3f;
                operator_delete(pvVar16,pnVar13);
              }
LAB_004a2a7b:
              local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
              local_48 = 0xf;
              local_4c = 0;
              ShipData::getCheckFunction((ShipDataCheckType)pbVar8);
              // [seh] local_8 = 0;
              local_84[0] = (std::string)0x0;
              ghidra::str::assign(local_84,"",0);
              ghidra::lib::_Func_class__operator_x28_x29(local_3c,*(undefined4 *)(g_gameData + 0xd0),0);
              // [seh] local_8 = 1;
              if (local_18 != (int *)0x0) {
                (**(code **)(*local_18 + 0x10))();
              }
            }
            goto switchD_004a265a_default;
          }
          pGVar12 = (*(Ship **)(g_gameData + 0xd0))->getFinalWaypointObject();
          if (((pGVar12 == (GameObject *)0x0) || (*(int *)(pGVar12 + 0x30) != 1)) ||
             ((bVar6 = ((Ship *)(pGVar12 + -8))->isSpaceStation(), !bVar6 ||
              (*(int *)(extraout_EDX + 0x390) == 0)))) goto switchD_004a265a_default;
          pRVar15 = this + 8;
          if (0xf < *(uint *)((char *)this + 0x1c)) {
            pRVar15 = *(Requirement **)((char *)this + 8);
          }
        }
        uStack_78 = 0x4a293c;
        ghidra::lib::_Traits_equal___x28_x29((char *)pRVar15,*(uint *)((char *)this + 0x18),(char *)pbVar8,(uint)unaff_EDI);
      }
      goto switchD_004a265a_default;
    }
    pRVar15 = this + 8;
    uStack_78 = 0x4a2824;
    pSVar10 = Singleton<Stats>::getInstance();
    ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(pSVar10 + 0x38),(std::string *)pRVar15);
    switch(*(undefined4 *)((char *)this + 4)) {
    case 0:
      goto switchD_004a26e4_caseD_0;
    case 1:
      goto switchD_004a26e4_caseD_1;
    case 2:
      goto switchD_004a26e4_caseD_2;
    case 3:
      goto switchD_004a26e4_caseD_3;
    case 4:
      goto switchD_004a26e4_caseD_4;
    case 5:
      goto switchD_004a26e4_caseD_5;
    default:
      goto switchD_004a265a_default;
    }
  }
  if (param_1 == (CargoHold *)0x0) goto switchD_004a265a_default;
  (param_1)->amountHeld(*(int *)((char *)this + 0x3c));
  switch(*(undefined4 *)((char *)this + 4)) {
  case 0:
    goto switchD_004a26e4_caseD_0;
  case 1:
    goto switchD_004a26e4_caseD_1;
  case 2:
    goto switchD_004a26e4_caseD_2;
  case 3:
    goto switchD_004a26e4_caseD_3;
  case 4:
    goto switchD_004a26e4_caseD_4;
  case 5:
    goto switchD_004a26e4_caseD_5;
  default:
    goto switchD_004a265a_default;
  }
}
