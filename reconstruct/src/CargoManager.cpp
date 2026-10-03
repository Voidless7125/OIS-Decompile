// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall CargoManager::render(CargoManager *this,TabletScreenType param_1)
void CargoManager::render(TabletScreenType param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  CargoHold *this_01;
  bool bVar1;
  uint uVar2;
  std::string *pbVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  void *pvVar11;
  CargoHold *pCVar12;
  undefined4 uVar13;
  uint uVar14;
  nothrow_t *pnVar15;
  uint uVar16;
  int iVar17;
  GoodContainmentOption GVar18;
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b4c70;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  this_00 = (std::string *)((char *)this + 0x24);
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  pbVar3 = this_00;
  if (0xf < *(uint *)((char *)this + 0x38)) {
    pbVar3 = *(std::string **)this_00;
  }
  *pbVar3 = (std::string)0x0;
  this_01 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  local_14 = uVar2;
  ghidra::str::append(this_00,"`%Cargo:\n",9);
  bVar1 = false;
  iVar17 = 0;
  pCVar12 = this_01 + 0xc;
  do {
    if ((-1 < iVar17) &&
       (((*(int *)(this_01 + 8) < 1 || (iVar17 < *(int *)(this_01 + 8))) &&
        (iVar7 = *(int *)pCVar12, iVar7 != 0)))) {
      bVar1 = true;
      if ((*(int *)(iVar7 + 8) < 1) || (*(int *)(iVar7 + 4) < 0)) {
        *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
        puVar6 = (undefined4 *)(this_01)->describePod((int)local_5c, SUB41(iVar17,0));
        // [seh] local_8 = 1;
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        pcVar5 = (char *)strUsingArgs((char *)local_44,"`7%02d - `8[empty]`7 (%s)\n",iVar17 + 1,
                                      puVar6,uVar2);
        // [seh] local_8._0_1_ = 2;
        pcVar10 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar10 = *(char **)pcVar5;
        }
        ghidra::str::append
                  ((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar5 + 0x10));
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        if (0xf < local_30) {
          pnVar15 = (nothrow_t *)(local_30 + 1);
          pvVar11 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar11 = *(void **)((int)local_44[0] + -4);
            pnVar15 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) goto LAB_004386d8;
          }
          operator_delete(pvVar11,pnVar15);
        }
        // [seh] local_8 = 0xffffffff;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_48) {
          pnVar15 = (nothrow_t *)(local_48 + 1);
          pvVar11 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar11 = *(void **)((int)local_5c[0] + -4);
            pnVar15 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) goto LAB_004386d8;
          }
          operator_delete(pvVar11,pnVar15);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      }
      else {
        uVar14 = 0;
        puVar6 = *(undefined4 **)(g_gameData + 0x84);
        uVar16 = *(int *)(g_gameData + 0x88) - (int)puVar6 >> 2;
        if (uVar16 != 0) {
          do {
            piVar4 = (int *)*puVar6;
            if (*piVar4 == *(int *)(*(int *)(this_01 + 0xc + iVar17 * 4) + 4)) goto LAB_00438438;
            uVar14 = uVar14 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar14 < uVar16);
        }
        piVar4 = (int *)0x0;
LAB_00438438:
        *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
        piVar9 = piVar4 + 1;
        if (0xf < (uint)piVar4[6]) {
          piVar9 = (int *)*piVar9;
        }
        pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7%02d - %dx `0%s`7 (%s)\n",iVar17 + 1,
                                      *(undefined4 *)(*(int *)pCVar12 + 8),piVar9,
                                      (&PTR_s_none_005d06fc)[piVar4[0x17]]);
        // [seh] local_8 = 0;
        pcVar10 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar10 = *(char **)pcVar5;
        }
        ghidra::str::append
                  ((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar5 + 0x10));
        // [seh] local_8 = 0xffffffff;
        if (0xf < local_18) {
          pnVar15 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar15 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_004386d8;
          }
          operator_delete(pvVar11,pnVar15);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
    }
    iVar17 = iVar17 + 1;
    pCVar12 = pCVar12 + 4;
  } while (iVar17 < 0xe);
  if (!bVar1) {
    *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
    ghidra::str::append((std::string *)((char *)this + 0x24)," `7** no cargo pods **\n",0x17);
  }
  *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
  ghidra::str::append((std::string *)((char *)this + 0x24),"\n",1);
  GVar18 = 1;
  do {
    iVar17 = (this_01)->amountHeld(GVar18);
    iVar7 = (this_01)->amountCanHold(GVar18);
    *(int *)((char *)this + 0x10) = *(int *)((char *)this + 0x10) + 1;
    uVar13 = 0x25;
    uVar8 = 0x25;
    if (iVar7 == 0) {
      uVar13 = 0x38;
    }
    if (iVar17 == 0) {
      uVar8 = 0x38;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_74,"`7%s: `%c%d`7/`%c%d\n",
                                  (&PTR_s_none_005d06fc)[GVar18],uVar8,iVar17,uVar13,iVar7);
    // [seh] local_8 = 3;
    pcVar10 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar10 = *(char **)pcVar5;
    }
    ghidra::str::append((std::string *)((char *)this + 0x24),pcVar10,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = 0xffffffff;
    if (0xf < local_60) {
      pnVar15 = (nothrow_t *)(local_60 + 1);
      pvVar11 = local_74[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar11 = *(void **)((int)local_74[0] + -4);
        pnVar15 = (nothrow_t *)(local_60 + 0x24);
        if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar11))) {
LAB_004386d8:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar15);
    }
    GVar18 = GVar18 + 1;
    if (2 < (int)GVar18) {
      // [seh] ExceptionList = local_10;
      // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


// Ghidra: void __thiscall CargoManager::keyHit(CargoManager *this,KeyCode param_1)
void CargoManager::keyHit(KeyCode param_1)

{
  debugPrint("GAME","Cargo manager key hit");
  return;
}
