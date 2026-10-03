// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Scenario * __thiscall Scenario::Scenario(Scenario *this)
Scenario::Scenario()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  Scenario *pSVar2;
  int iVar3;
  std::string *extraout_ECX;
  ghidra::lib::allocator_t *unaff_ESI;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bf778;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar1 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x40) = 0;
  *(undefined4 *)((char *)this + 0x44) = 0xf;
  ((char *)this)[0x30] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x58) = 0;
  *(undefined4 *)((char *)this + 0x5c) = 0xf;
  ((char *)this)[0x48] = (byte)0x0;
  *(undefined4 *)((char *)this + 100) = 3000;
  *(undefined4 *)((char *)this + 0x70) = 2;
  ((char *)this)[0x74] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0;
  *(undefined4 *)((char *)this + 0x80) = 0;
  *(undefined4 *)((char *)this + 0x94) = 0;
  *(undefined4 *)((char *)this + 0x98) = 0xf;
  ((char *)this)[0x84] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa0) = 0;
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0;
  *(undefined4 *)((char *)this + 0xac) = 0;
  *(undefined4 *)((char *)this + 0xb0) = 0;
  *(undefined4 *)((char *)this + 0xb4) = 0xffffffff;
  iVar3 = 0xc;
  *(undefined2 *)((char *)this + 0xb8) = 0;
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  pSVar2 = this + 200;
  do {
    *(undefined4 *)pSVar2 = 0;
    *(undefined4 *)(pSVar2 + 4) = 0;
    *(undefined4 *)(pSVar2 + 8) = 0;
    iVar3 = iVar3 + -1;
    pSVar2 = pSVar2 + 0xc;
  } while (iVar3 != 0);
  *(undefined4 *)((char *)this + 0x178) = 0;
  *(undefined4 *)((char *)this + 0x17c) = 0xf;
  ((char *)this)[0x168] = (byte)0x0;
  *(undefined4 *)((char *)this + 400) = 0;
  *(undefined4 *)((char *)this + 0x194) = 0xf;
  ((char *)this)[0x180] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1a8) = 0;
  *(undefined4 *)((char *)this + 0x1ac) = 0xf;
  ((char *)this)[0x198] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x1c0) = 0;
  *(undefined4 *)((char *)this + 0x1c4) = 0xf;
  ((char *)this)[0x1b0] = (byte)0x0;
  // [seh] local_8 = 0xb;
  _eh_vector_constructor_iterator_(this + 0x1c8,0x6c,3,<>::<>,<>::~<>);
  ((char *)this)[0x30c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x30e) = 0x10000;
  ((char *)this)[0x312] = (byte)0x0;
  ((char *)this)[0x316] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x318) = 0;
  *(undefined4 *)((char *)this + 0x31c) = 0;
  *(undefined4 *)((char *)this + 800) = 0;
  *(undefined4 *)((char *)this + 0x324) = 0;
  *(undefined4 *)((char *)this + 0x328) = 0;
  *(undefined4 *)((char *)this + 0x32c) = 0;
  *(undefined4 *)((char *)this + 0x330) = 0;
  *(undefined4 *)((char *)this + 0x334) = 0;
  *(undefined4 *)((char *)this + 0x338) = 0;
  *(undefined4 *)((char *)this + 0x33c) = 1;
  *(undefined4 *)((char *)this + 0x340) = 1;
  *(undefined4 *)((char *)this + 0x344) = 1;
  *(undefined4 *)((char *)this + 0x348) = 0;
  *(undefined4 *)((char *)this + 0x34c) = 0;
  *(undefined4 *)((char *)this + 0x350) = 0;
  *(undefined4 *)((char *)this + 0x354) = 0;
  ((char *)this)[0x364] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x368) = 0;
  *(undefined4 *)((char *)this + 0x36c) = 0;
  *(undefined4 *)((char *)this + 0x370) = 0;
  *(undefined4 *)((char *)this + 0x374) = 0x10000;
  *(undefined4 *)((char *)this + 0x378) = 0;
  *(undefined4 *)((char *)this + 0x37c) = 0;
  *(undefined4 *)((char *)this + 0x380) = 0;
  *(undefined1 **)((char *)this + 0x3c4) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x3c8) = 0;
  *(undefined4 *)((char *)this + 0x3cc) = 0;
  *(undefined4 *)((char *)this + 0x3d0) = 0;
  *(undefined4 *)((char *)this + 0x3d4) = 0;
  *(undefined4 *)((char *)this + 0x3d8) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x3dc) = 0;
  *(undefined4 *)((char *)this + 0x3e0) = 0;
  *(undefined4 *)((char *)this + 0x3e4) = 0;
  *(undefined4 *)((char *)this + 1000) = 0;
  *(undefined4 *)((char *)this + 0x3ec) = 0;
  *(undefined4 *)((char *)this + 0x3f0) = 0;
  *(undefined4 *)((char *)this + 0x3f4) = 0;
  *(undefined4 *)((char *)this + 0x3f8) = 0;
  *(undefined4 *)((char *)this + 0x3fc) = 0;
  ((char *)this)[0x400] = (byte)0x0;
  ((char *)this)[0x164] = (byte)0x0;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar1,unaff_ESI);
  *(undefined4 *)((char *)this + 0x3f8) = *(undefined4 *)((char *)this + 0x3f4);
  *(undefined4 *)((char *)this + 0x388) = 0;
  *(undefined4 *)((char *)this + 0x394) = 0;
  *(undefined4 *)((char *)this + 0x3a0) = 0;
  *(undefined4 *)((char *)this + 0x3ac) = 0;
  *(undefined4 *)((char *)this + 0x3b8) = 0;
  *(undefined4 *)((char *)this + 0x38c) = 0;
  *(undefined4 *)((char *)this + 0x398) = 0;
  *(undefined4 *)((char *)this + 0x3a4) = 0;
  *(undefined4 *)((char *)this + 0x3b0) = 0;
  *(undefined4 *)((char *)this + 0x3bc) = 0;
  *(undefined4 *)((char *)this + 0x390) = 0;
  *(undefined4 *)((char *)this + 0x39c) = 0;
  *(undefined4 *)((char *)this + 0x3a8) = 0;
  *(undefined4 *)((char *)this + 0x3b4) = 0;
  *(undefined4 *)((char *)this + 0x3c0) = 0;
  ((char *)this)[900] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x158) = 1;
  *(undefined4 *)((char *)this + 0x15c) = 1;
  *(undefined4 *)((char *)this + 0x160) = 1;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall Scenario::checkCompletionStates(Scenario *this)
void Scenario::checkCompletionStates()

{
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Scenario SVar1;
  bool bVar2;
  Ship *this_00;
  FlagManager *pFVar3;
  int iVar4;
  Scenario *pSVar5;
  uint uVar6;
  std::string abStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf7b0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pSVar5 = this + 0x388;
  local_14 = 3;
  do {
    if (*(int *)((char *)this + 0x70) == 2) {
      *(int *)pSVar5 = 0;
    }
    else {
      if (*(int *)((char *)this + 0x70) == 3) {
        uVar6 = 0;
        iVar4 = *(int *)((char *)this + 0x78);
        if (*(int *)((char *)this + 0x7c) - iVar4 >> 2 != 0) {
          do {
            ghidra::str::ctor
                      (abStack_40,(std::string *)(*(int *)(iVar4 + uVar6 * 4) + 0x1c));
            this_00 = GameData::getShipWithRego();
            if (this_00 == (Ship *)0x0) {
LAB_004cae27:
              *(undefined4 *)(this + uVar6 * 4 + 0x388) = 0;
            }
            else {
              local_30 = 0x4cae23;
              bVar2 = (this_00)->isDisabled(true);
              if (!bVar2) goto LAB_004cae27;
            }
            uVar6 = uVar6 + 1;
            iVar4 = *(int *)((char *)this + 0x78);
          } while (uVar6 < (uint)(*(int *)((char *)this + 0x7c) - iVar4 >> 2));
        }
        *(int *)pSVar5 = 1;
      }
      else if (*(int *)pSVar5 == 0) goto LAB_004cae59;
      ((char *)this)[900] = (byte)0x0;
    }
LAB_004cae59:
    pSVar5 = pSVar5 + 4;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      SVar1 = ((char *)this)[900];
      if (((char *)this)[0x400] != SVar1) {
        if (SVar1 != (byte)0x0) {
          local_34 = 0;
          local_30 = 0xf;
          ghidra::str::assign((std::string *)&stack0xffffffbc,"scenario_complete",0x11);
        }
        else {
          local_34 = 0;
          local_30 = 0xf;
          ghidra::str::assign((std::string *)&stack0xffffffbc,"scenario_complete",0x11);
        }
        // [seh] local_8 = (uint)(SVar1 != (byte)0x0);
        pFVar3 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pFVar3)->setFlag();
        ((char *)this)[0x400] = ((char *)this)[900];
      }
      // [seh] ExceptionList = local_10;
      return;
    }
  } while( true );
}


// Ghidra: void __thiscall Scenario::messageScenarioState(Scenario *this)
void Scenario::messageScenarioState()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  LogSystem *pLVar1;
  bool bVar2;
  char *pcVar3;
  word *pwVar4;
  NetworkServer *pNVar5;
  Scenario *pSVar6;
  void *pvVar7;
  int *piVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  uint unaff_EDI;
  void *pvVar11;
  std::string abStack_7c [4];
  undefined4 uStack_78;
  int local_4c;
  int local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005bf7e0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pSVar6 = this + 0x38c;
  local_48 = 1;
  local_14 = pcVar3;
  do {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    // [seh] local_8 = 0;
    if (*(int *)pSVar6 == 2) {
      if (*(int *)((char *)this + 0x70) == 3) {
        pwVar4 = (word *)strUsingArgs((char *)local_44);
        if ((word *)&local_2c != pwVar4) {
          // [mislabelled-dtor] word::~word((word *)&local_2c);
          local_2c = *(void **)pwVar4;
          uStack_28 = *(undefined4 *)(pwVar4 + 4);
          uStack_24 = *(undefined4 *)(pwVar4 + 8);
          uStack_20 = *(undefined4 *)(pwVar4 + 0xc);
          local_1c = *(undefined4 *)(pwVar4 + 0x10);
          uStack_18 = *(uint *)(pwVar4 + 0x14);
          *(undefined4 *)(pwVar4 + 0x10) = 0;
          *(undefined4 *)(pwVar4 + 0x14) = 0xf;
          *pwVar4 = (word)0x0;
        }
        if (0xf < local_30) {
          pnVar9 = (nothrow_t *)(local_30 + 1);
          pvVar7 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar7 = *(void **)((int)local_44[0] + -4);
            pnVar9 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) goto LAB_004cb255;
          }
          operator_delete(pvVar7,pnVar9);
        }
      }
      local_4c = 1;
    }
    else {
      local_4c = 1;
      if (*(int *)pSVar6 == 1) {
        if (*(int *)((char *)this + 0x70) == 3) {
          pwVar4 = (word *)strUsingArgs((char *)local_44);
          if ((word *)&local_2c != pwVar4) {
            // [mislabelled-dtor] word::~word((word *)&local_2c);
            local_2c = *(void **)pwVar4;
            uStack_28 = *(undefined4 *)(pwVar4 + 4);
            uStack_24 = *(undefined4 *)(pwVar4 + 8);
            uStack_20 = *(undefined4 *)(pwVar4 + 0xc);
            local_1c = *(undefined4 *)(pwVar4 + 0x10);
            uStack_18 = *(uint *)(pwVar4 + 0x14);
            *(undefined4 *)(pwVar4 + 0x10) = 0;
            *(undefined4 *)(pwVar4 + 0x14) = 0xf;
            *pwVar4 = (word)0x0;
          }
          if (0xf < local_30) {
            pnVar9 = (nothrow_t *)(local_30 + 1);
            pvVar7 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar7 = *(void **)((int)local_44[0] + -4);
              pnVar9 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) goto LAB_004cb255;
            }
            operator_delete(pvVar7,pnVar9);
          }
        }
        local_4c = 0;
      }
    }
    pvVar7 = local_2c;
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
    if (!bVar2) {
      if (g_gameLogic[0x72] == (byte)0x0) {
        uVar10 = 0;
        piVar8 = (int *)(*(int *)(g_gameData + 0xd8) + 0xcc);
        if (*(int *)(*(int *)(g_gameData + 0xd8) + 0xd0) - *piVar8 >> 2 != 0) {
          do {
            ghidra::str::ctor
                      (abStack_7c,(std::string *)(*(int *)(*piVar8 + uVar10 * 4) + 0x238));
            // [seh] local_8._0_1_ = 1;
            pNVar5 = ghidra::any_singleton();
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            bVar2 = (pNVar5)->shipHasConnectedClient();
            if ((bVar2) &&
               (pLVar1 = *(LogSystem **)(uVar10 * 4 + *(int *)(*(int *)(g_gameData + 0xd8) + 0xcc)),
               *(int *)(pLVar1 + 100) == local_48)) {
              LogSystem::addLogLine
                        (pLVar1,*(LogPriority *)(pLVar1 + 0x224),(char *)(local_4c * 2 + 1));
              uStack_78 = 0x4cb1d7;
              debugPrint("DETAIL","Adding message for %s: \'%s\'");
            }
            uVar10 = uVar10 + 1;
            piVar8 = (int *)(*(int *)(g_gameData + 0xd8) + 0xcc);
            pvVar7 = local_2c;
          } while (uVar10 < (uint)(*(int *)(*(int *)(g_gameData + 0xd8) + 0xd0) - *piVar8 >> 2));
        }
      }
      else {
        pLVar1 = *(LogSystem **)(g_gameData + 0xd0);
        if (*(int *)(pLVar1 + 100) == local_48) {
          (pLVar1)->addLogLine(*(LogPriority *)(pLVar1 + 0x224), (char *)0x3);
          pvVar7 = local_2c;
        }
      }
    }
    // [seh] local_8 = -1;
    if (0xf < uStack_18) {
      pnVar9 = (nothrow_t *)(uStack_18 + 1);
      pvVar11 = pvVar7;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar11 = *(void **)((int)pvVar7 + -4);
        pnVar9 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar11))) {
LAB_004cb255:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar9);
    }
    local_48 = local_48 + 1;
    pSVar6 = pSVar6 + 4;
    if (2 < local_48) {
      // [seh] ExceptionList = local_10;
      // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}
