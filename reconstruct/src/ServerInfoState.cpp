// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall ServerInfoState::~ServerInfoState(ServerInfoState *this)
ServerInfoState::~ServerInfoState()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  ghidra::lib::vector___x7evector((ghidra::vector *)((char *)this + 0x30));
  ghidra::lib::vector___x7evector((ghidra::vector *)((char *)this + 0x24));
  uVar1 = *(uint *)((char *)this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
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
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  return;
}


// Ghidra: bool __thiscall ServerInfoState::checkAdvancedDetails(ServerInfoState *this)
bool ServerInfoState::checkAdvancedDetails()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  uint uVar3;
  ServerShipState *this_00;
  std::string *pbVar4;
  AnimationFrames **ppAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  char *pcVar13;
  ghidra::vector *this_01;
  NetworkServer *pNVar14;
  std::string *pbVar15;
  ShipModuleClass *pSVar16;
  word *pwVar17;
  AnimationFrames *pAVar18;
  int *piVar19;
  GameData *pGVar20;
  int iVar21;
  char *pcVar22;
  void *pvVar23;
  nothrow_t *pnVar24;
  char *pcVar25;
  undefined4 *puVar26;
  std::string *pbVar27;
  std::string *pbVar28;
  uint unaff_EDI;
  std::string *pbVar29;
  AnimationFrames *pAVar30;
  undefined4 uStack_a4;
  std::string *local_74;
  uint local_70;
  AnimationFrames *local_6c;
  AnimationFrames *local_68;
  AnimationFrames *local_64;
  char *local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005b3269;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar13 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  bVar10 = false;
  bVar9 = false;
  pbVar29 = (std::string *)0x0;
  local_60 = (char *)0x0;
  piVar19 = *(int **)(*(int *)(g_gameData + 0xcc) + 0x78);
  local_68 = (AnimationFrames *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - (int)piVar19 >> 2);
  pcVar22 = (char *)0x0;
  if (local_68 != (AnimationFrames *)0x0) {
    do {
      iVar1 = *piVar19;
      piVar19 = piVar19 + 1;
      local_60 = pcVar22 + 1;
      if (*(int *)(iVar1 + 0xe8) != 0) {
        local_60 = pcVar22;
      }
      pbVar29 = pbVar29 + 1;
      pcVar22 = local_60;
    } while (pbVar29 < local_68);
  }
  this_01 = (ghidra::vector *)((char *)this + 0x24);
  iVar1 = *(int *)((char *)this + 0x28);
  iVar21 = *(int *)this_01;
  local_64 = (AnimationFrames *)this;
  local_14 = pcVar13;
  pNVar14 = ghidra::any_singleton();
  local_6c = local_64 + 0x30;
  local_70 = (uint)(local_60 != (char *)(iVar1 - iVar21 >> 2));
  if (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2 !=
      (int)(*(int *)(local_64 + 0x34) - *(uint *)local_6c) >> 2) {
    local_70 = 1;
  }
  pNVar14 = ghidra::any_singleton();
  if (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2 ==
      (int)(*(uint *)(local_6c + 4) - *(uint *)local_6c) >> 2) {
    local_64 = (AnimationFrames *)0x0;
    local_74 = *(std::string **)(g_gameData + 0xcc);
    iVar1 = *(int *)(local_74 + 0x78);
    if (*(int *)(local_74 + 0x7c) - iVar1 >> 2 != 0) {
      pbVar29 = (std::string *)0x0;
      local_68 = (AnimationFrames *)0x0;
      do {
        iVar21 = *(int *)(iVar1 + (int)local_64 * 4);
        if (*(int *)(iVar21 + 0xe8) == 0) {
          iVar2 = *(int *)(pbVar29 + *(int *)this_01);
          pcVar22 = (char *)(iVar21 + 4);
          if (0xf < *(uint *)(iVar21 + 0x18)) {
            pcVar22 = *(char **)pcVar22;
          }
          bVar11 = ghidra::lib::_Traits_equal___x28_x29(pcVar22,*(uint *)(iVar21 + 0x14),pcVar13,unaff_EDI);
          if (bVar11) {
            iVar21 = *(int *)(iVar1 + (int)local_64 * 4);
            local_60 = (char *)(iVar21 + 0x1c);
            if (0xf < *(uint *)(iVar21 + 0x30)) {
              local_60 = *(char **)local_60;
            }
            bVar11 = ghidra::lib::_Traits_equal___x28_x29(local_60,*(uint *)(iVar21 + 0x2c),pcVar13,unaff_EDI);
            if (bVar11) {
              iVar21 = *(int *)(iVar1 + (int)local_64 * 4);
              local_60 = (char *)(iVar21 + 0x34);
              if (0xf < *(uint *)(iVar21 + 0x48)) {
                local_60 = *(char **)local_60;
              }
              bVar11 = ghidra::lib::_Traits_equal___x28_x29(local_60,*(uint *)(iVar21 + 0x44),pcVar13,unaff_EDI);
              if ((bVar11) &&
                 (*(int *)(iVar2 + 100) == *(int *)(*(int *)(iVar1 + (int)local_64 * 4) + 0xd4))) {
                pbVar29 = (std::string *)(local_68 + 4);
                local_68 = (AnimationFrames *)pbVar29;
                goto LAB_00422a73;
              }
            }
          }
          local_70 = CONCAT31(local_70._1_3_,1);
          break;
        }
LAB_00422a73:
        local_64 = local_64 + 1;
      } while (local_64 < (AnimationFrames *)(*(int *)(local_74 + 0x7c) - iVar1 >> 2));
    }
  }
  pNVar14 = ghidra::any_singleton();
  if (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2 ==
      (int)(*(uint *)(local_6c + 4) - *(uint *)local_6c) >> 2) {
    pbVar29 = (std::string *)0x0;
    local_68 = (AnimationFrames *)0x0;
    pNVar14 = ghidra::any_singleton();
    if (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2 != 0) {
      do {
        iVar1 = (int)pbVar29 * 4;
        uVar3 = *(uint *)local_6c;
        ghidra::any_singleton();
        pcVar22 = *(char **)(uVar3 + iVar1);
        pcVar25 = pcVar22;
        if (0xf < *(uint *)(pcVar22 + 0x14)) {
          pcVar25 = *(char **)pcVar22;
        }
        bVar11 = ghidra::lib::_Traits_equal___x28_x29(pcVar25,*(uint *)(pcVar22 + 0x10),pcVar13,unaff_EDI);
        if (!bVar11) {
          local_70 = CONCAT31(local_70._1_3_,1);
          pAVar18 = local_6c;
          goto LAB_00422c1b;
        }
        pNVar14 = ghidra::any_singleton();
        pAVar18 = local_6c;
        if ((*(int *)(*(int *)(*(int *)(pNVar14 + 0x3c) + iVar1) + 100) == 0) &&
           (bVar11 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar13,unaff_EDI), !bVar11)) {
LAB_00423137:
          local_70 = CONCAT31(local_70._1_3_,1);
          goto LAB_00422c1b;
        }
        pNVar14 = ghidra::any_singleton();
        if (*(int *)(*(int *)(*(int *)(pNVar14 + 0x3c) + iVar1) + 100) != 0) {
          uVar3 = *(uint *)pAVar18;
          ghidra::any_singleton();
          iVar21 = *(int *)(uVar3 + iVar1);
          pcVar22 = (char *)(iVar21 + 0x18);
          if (0xf < *(uint *)(iVar21 + 0x2c)) {
            pcVar22 = *(char **)(iVar21 + 0x18);
          }
          bVar11 = ghidra::lib::_Traits_equal___x28_x29(pcVar22,*(uint *)(iVar21 + 0x28),pcVar13,unaff_EDI);
          pAVar18 = local_6c;
          if (!bVar11) goto LAB_00423137;
        }
        pNVar14 = ghidra::any_singleton();
        if ((*(char *)(*(int *)(*(int *)(pNVar14 + 0x3c) + iVar1) + 0x42) !=
             *(char *)(*(int *)(iVar1 + *(uint *)pAVar18) + 0x30)) ||
           (pNVar14 = ghidra::any_singleton(),
           *(char *)(*(int *)(*(int *)(pNVar14 + 0x3c) + iVar1) + 0x41) !=
           *(char *)(*(int *)(iVar1 + *(uint *)pAVar18) + 0x31))) goto LAB_00423137;
        pbVar29 = (std::string *)(local_68 + 1);
        local_68 = (AnimationFrames *)pbVar29;
        pNVar14 = ghidra::any_singleton();
      } while (pbVar29 < (std::string *)
                         (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2));
    }
  }
  pAVar18 = local_6c;
  if ((char)local_70 != '\0') {
LAB_00422c1b:
    pAVar30 = (AnimationFrames *)0x0;
    puVar26 = *(undefined4 **)pAVar18;
    pAVar18 = (AnimationFrames *)
              ((uint)((int)*(undefined4 **)(local_6c + 4) + (3 - (int)puVar26)) >> 2);
    if (*(undefined4 **)(local_6c + 4) < puVar26) {
      pAVar18 = (AnimationFrames *)0x0;
    }
    local_74 = (std::string *)pAVar18;
    if (pAVar18 != (AnimationFrames *)0x0) {
      do {
        if ((ServerUserState *)*puVar26 != (ServerUserState *)0x0) {
          ServerUserState::_scalar_deleting_destructor_((ServerUserState *)*puVar26,(uint)pAVar18);
          pAVar18 = (AnimationFrames *)local_74;
        }
        pAVar30 = pAVar30 + 1;
        puVar26 = puVar26 + 1;
      } while (pAVar30 != pAVar18);
    }
    *(uint *)(local_6c + 4) = *(uint *)local_6c;
    puVar26 = *(undefined4 **)this_01;
    local_68 = (AnimationFrames *)0x0;
    pbVar29 = (std::string *)((*(int *)((char *)this + 0x28) - (int)puVar26) + 3U >> 2);
    if (*(undefined4 **)((char *)this + 0x28) < puVar26) {
      pbVar29 = (std::string *)0x0;
    }
    local_74 = pbVar29;
    if (pbVar29 != (std::string *)0x0) {
      do {
        this_00 = (ServerShipState *)*puVar26;
        if (this_00 != (ServerShipState *)0x0) {
          (this_00)->~ServerShipState();
          operator_delete(this_00,(nothrow_t *)0x68);
          pbVar29 = local_74;
        }
        local_68 = local_68 + 1;
        puVar26 = puVar26 + 1;
      } while (local_68 != (AnimationFrames *)pbVar29);
    }
    *(undefined4 *)((char *)this + 0x28) = *(undefined4 *)this_01;
    local_60 = (char *)0x0;
    piVar19 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
    if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar19 >> 2 != 0) {
      do {
        if (*(int *)(*(int *)(*piVar19 + (int)local_60 * 4) + 0xe8) == 0) {
          local_64 = operator_new(0x68);
          memset(local_64,0,0x68);
          pGVar20 = g_gameData;
          pbVar29 = (std::string *)(local_64 + 0x18);
          pbVar27 = (std::string *)(local_64 + 0x30);
          local_68 = local_64;
          *(undefined4 *)(local_64 + 0x14) = 0xf;
          *(undefined4 *)(local_64 + 0x28) = 0;
          *(undefined4 *)(local_64 + 0x2c) = 0xf;
          *pbVar29 = (std::string)0x0;
          *(undefined4 *)(local_64 + 0x40) = 0;
          *(undefined4 *)(local_64 + 0x44) = 0xf;
          *pbVar27 = (std::string)0x0;
          *(undefined4 *)(local_64 + 0x58) = 0;
          *(undefined4 *)(local_64 + 0x5c) = 0xf;
          *(std::string *)(local_64 + 0x48) = (std::string)0x0;
          iVar1 = *(int *)(*(int *)(*(int *)(pGVar20 + 0xcc) + 0x78) + (int)local_60 * 4);
          pbVar15 = (std::string *)(iVar1 + 4);
          if (local_64 != (AnimationFrames *)pbVar15) {
            if (0xf < *(uint *)(iVar1 + 0x18)) {
              pbVar15 = *(std::string **)pbVar15;
            }
            ghidra::str::assign
                      ((std::string *)local_64,(char *)pbVar15,*(uint *)(iVar1 + 0x14));
            pGVar20 = g_gameData;
          }
          iVar1 = *(int *)(*(int *)(*(int *)(pGVar20 + 0xcc) + 0x78) + (int)local_60 * 4);
          pbVar15 = (std::string *)(iVar1 + 0x1c);
          if (pbVar29 != pbVar15) {
            if (0xf < *(uint *)(iVar1 + 0x30)) {
              pbVar15 = *(std::string **)pbVar15;
            }
            ghidra::str::assign(pbVar29,(char *)pbVar15,*(uint *)(iVar1 + 0x2c));
            pGVar20 = g_gameData;
          }
          pcVar22 = local_60;
          iVar1 = *(int *)(*(int *)(*(int *)(pGVar20 + 0xcc) + 0x78) + (int)local_60 * 4);
          pbVar29 = (std::string *)(iVar1 + 0x34);
          if (pbVar27 != pbVar29) {
            if (0xf < *(uint *)(iVar1 + 0x48)) {
              pbVar29 = *(std::string **)pbVar29;
            }
            ghidra::str::assign(pbVar27,(char *)pbVar29,*(uint *)(iVar1 + 0x44));
            pGVar20 = g_gameData;
          }
          *(undefined4 *)(local_64 + 100) =
               *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(pGVar20 + 0xcc) + 0x78) + (int)pcVar22 * 4) + 0xd4);
          iVar1 = *(int *)(*(int *)(*(int *)(pGVar20 + 0xcc) + 0x78) + (int)pcVar22 * 4);
          pbVar29 = (std::string *)(iVar1 + 0x34);
          if (pbVar27 != pbVar29) {
            if (0xf < *(uint *)(iVar1 + 0x48)) {
              pbVar29 = *(std::string **)pbVar29;
            }
            ghidra::str::assign(pbVar27,(char *)pbVar29,*(uint *)(iVar1 + 0x44));
          }
          pbVar29 = (std::string *)(local_64 + 0x48);
          ghidra::str::assign(pbVar29,"",0);
          pGVar20 = g_gameData;
          iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x78) + (int)local_60 * 4);
          *(int *)(local_64 + 0x60) = (*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec)) / 0x18;
          iVar1 = *(int *)(*(int *)(*(int *)(pGVar20 + 0xcc) + 0x78) + (int)local_60 * 4);
          iVar21 = *(int *)(iVar1 + 0x234) - *(int *)(iVar1 + 0x230);
          iVar1 = iVar21 >> 0x1f;
          if (iVar21 / 0x18 + iVar1 != iVar1) {
            ghidra::str::assign(pbVar29,"`%",2);
            iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x78) + (int)local_60 * 4);
            pbVar27 = *(std::string **)(iVar1 + 0x224);
            local_74 = *(std::string **)(iVar1 + 0x228);
            if (pbVar27 != local_74) {
              do {
                ghidra::str::ctor
                          ((std::string *)local_5c,(std::string *)pbVar27);
                // [seh] local_8 = 0;
                ghidra::str::ctor
                          ((std::string *)&uStack_a4,(std::string *)local_5c);
                pSVar16 = GameData::getModuleClassWithIdentifier();
                if (pSVar16 != (ShipModuleClass *)0x0) {
                  uStack_a4 = 0x422f3e;
                  pcVar13 = (char *)strUsingArgs((char *)local_2c);
                  // [seh] local_8._0_1_ = 1;
                  pcVar22 = pcVar13;
                  if (0xf < *(uint *)(pcVar13 + 0x14)) {
                    pcVar22 = *(char **)pcVar13;
                  }
                  ghidra::str::append(pbVar29,pcVar22,*(uint *)(pcVar13 + 0x10));
                  // [seh] local_8 = (uint)local_8._1_3_ << 8;
                  if (0xf < local_18) {
                    pnVar24 = (nothrow_t *)(local_18 + 1);
                    pvVar23 = local_2c[0];
                    if ((nothrow_t *)0xfff < pnVar24) {
                      pvVar23 = *(void **)((int)local_2c[0] + -4);
                      pnVar24 = (nothrow_t *)(local_18 + 0x24);
                      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar23))) goto LAB_00423250;
                    }
                    operator_delete(pvVar23,pnVar24);
                  }
                  local_1c = 0;
                  local_18 = 0xf;
                  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
                }
                // [seh] local_8 = -1;
                if (0xf < local_48) {
                  pnVar24 = (nothrow_t *)(local_48 + 1);
                  pvVar23 = local_5c[0];
                  if ((nothrow_t *)0xfff < pnVar24) {
                    pvVar23 = *(void **)((int)local_5c[0] + -4);
                    pnVar24 = (nothrow_t *)(local_48 + 0x24);
                    if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar23))) goto LAB_00423250;
                  }
                  operator_delete(pvVar23,pnVar24);
                }
                pbVar27 = pbVar27 + 0x18;
              } while (pbVar27 != local_74);
            }
            iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x78) + (int)local_60 * 4);
            pbVar4 = *(std::string **)(iVar1 + 0x234);
            for (pbVar28 = *(std::string **)(iVar1 + 0x230); pbVar28 != pbVar4;
                pbVar28 = pbVar28 + 0x18) {
              ghidra::str::ctor((std::string *)local_5c,pbVar28);
              // [seh] local_8 = 2;
              ghidra::str::ctor
                        ((std::string *)&uStack_a4,(std::string *)local_5c);
              pSVar16 = GameData::getModuleClassWithIdentifier();
              if (pSVar16 != (ShipModuleClass *)0x0) {
                uStack_a4 = 0x42306e;
                pcVar13 = (char *)strUsingArgs((char *)local_44);
                // [seh] local_8._0_1_ = 3;
                pcVar22 = pcVar13;
                if (0xf < *(uint *)(pcVar13 + 0x14)) {
                  pcVar22 = *(char **)pcVar13;
                }
                ghidra::str::append
                          ((std::string *)(local_64 + 0x48),pcVar22,*(uint *)(pcVar13 + 0x10));
                // [seh] local_8 = CONCAT31(local_8._1_3_,2);
                if (0xf < local_30) {
                  pnVar24 = (nothrow_t *)(local_30 + 1);
                  pvVar23 = local_44[0];
                  if ((nothrow_t *)0xfff < pnVar24) {
                    pvVar23 = *(void **)((int)local_44[0] + -4);
                    pnVar24 = (nothrow_t *)(local_30 + 0x24);
                    if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) goto LAB_00423250;
                  }
                  operator_delete(pvVar23,pnVar24);
                }
                local_34 = 0;
                local_30 = 0xf;
                local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
              }
              // [seh] local_8 = -1;
              if (0xf < local_48) {
                pnVar24 = (nothrow_t *)(local_48 + 1);
                pvVar23 = local_5c[0];
                if ((nothrow_t *)0xfff < pnVar24) {
                  pvVar23 = *(void **)((int)local_5c[0] + -4);
                  pnVar24 = (nothrow_t *)(local_48 + 0x24);
                  if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar23))) goto LAB_00423250;
                }
                operator_delete(pvVar23,pnVar24);
              }
            }
          }
          ppAVar5 = *(AnimationFrames ***)((char *)this + 0x28);
          if (*(AnimationFrames ***)((char *)this + 0x2c) == ppAVar5) {
            ghidra::lib::vector___Emplace_reallocate(this_01,ppAVar5,&local_68);
          }
          else {
            *ppAVar5 = local_64;
            *(int *)((char *)this + 0x28) = *(int *)((char *)this + 0x28) + 4;
          }
        }
        local_60 = local_60 + 1;
        piVar19 = (int *)(*(int *)(g_gameData + 0xcc) + 0x78);
      } while (local_60 < (char *)(*(int *)(*(int *)(g_gameData + 0xcc) + 0x7c) - *piVar19 >> 2));
    }
    pbVar29 = (std::string *)0x0;
    local_68 = (AnimationFrames *)0x0;
    pNVar14 = ghidra::any_singleton();
    if (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2 != 0) {
      do {
        pbVar15 = operator_new(0x34);
        memset(pbVar15,0,0x34);
        *(undefined4 *)(pbVar15 + 0x14) = 0xf;
        *(undefined4 *)(pbVar15 + 0x28) = 0;
        *(undefined4 *)(pbVar15 + 0x2c) = 0xf;
        pbVar15[0x18] = (std::string)0x0;
        pbVar15[0x32] = (std::string)0x0;
        local_74 = pbVar15;
        pNVar14 = ghidra::any_singleton();
        iVar1 = *(int *)(*(int *)(pNVar14 + 0x3c) + (int)pbVar29 * 4);
        pbVar27 = (std::string *)(iVar1 + 0x28);
        if (pbVar15 != pbVar27) {
          if (0xf < *(uint *)(iVar1 + 0x3c)) {
            pbVar27 = *(std::string **)pbVar27;
          }
          ghidra::str::assign(pbVar15,(char *)pbVar27,*(uint *)(iVar1 + 0x38));
        }
        pNVar14 = ghidra::any_singleton();
        pbVar15[0x30] =
             *(std::string *)(*(int *)(*(int *)(pNVar14 + 0x3c) + (int)pbVar29 * 4) + 0x42);
        pNVar14 = ghidra::any_singleton();
        pbVar15[0x31] =
             *(std::string *)(*(int *)(*(int *)(pNVar14 + 0x3c) + (int)pbVar29 * 4) + 0x41);
        pNVar14 = ghidra::any_singleton();
        if (*(int *)(*(int *)(*(int *)(pNVar14 + 0x3c) + (int)pbVar29 * 4) + 100) == 0) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          ghidra::str::assign((std::string *)local_2c,"",0);
          bVar9 = true;
          pwVar17 = (word *)local_2c;
        }
        else {
          pNVar14 = ghidra::any_singleton();
          pwVar17 = (word *)ghidra::str::ctor
                                      ((std::string *)local_44,
                                       (std::string *)
                                       (*(int *)(*(int *)(*(int *)(pNVar14 + 0x3c) +
                                                         (int)pbVar29 * 4) + 100) + 0x238));
          // [seh] local_8 = 4;
          bVar10 = true;
        }
        if ((word *)(pbVar15 + 0x18) != pwVar17) {
          // [mislabelled-dtor] word::~word((word *)(pbVar15 + 0x18));
          uVar6 = *(undefined4 *)(pwVar17 + 4);
          uVar7 = *(undefined4 *)(pwVar17 + 8);
          uVar8 = *(undefined4 *)(pwVar17 + 0xc);
          *(undefined4 *)(pbVar15 + 0x18) = *(undefined4 *)pwVar17;
          *(undefined4 *)(pbVar15 + 0x1c) = uVar6;
          *(undefined4 *)(pbVar15 + 0x20) = uVar7;
          *(undefined4 *)(pbVar15 + 0x24) = uVar8;
          uVar6 = *(undefined4 *)(pwVar17 + 0x14);
          *(undefined4 *)(pbVar15 + 0x28) = *(undefined4 *)(pwVar17 + 0x10);
          *(undefined4 *)(pbVar15 + 0x2c) = uVar6;
          *(undefined4 *)(pwVar17 + 0x10) = 0;
          *(undefined4 *)(pwVar17 + 0x14) = 0xf;
          *pwVar17 = (word)0x0;
        }
        if ((bVar9) && (bVar9 = false, 0xf < local_18)) {
          pnVar24 = (nothrow_t *)(local_18 + 1);
          pvVar23 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pvVar23 = *(void **)((int)local_2c[0] + -4);
            pnVar24 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar23))) goto LAB_00423250;
          }
          operator_delete(pvVar23,pnVar24);
        }
        // [seh] local_8 = -1;
        if (bVar10) {
          bVar10 = false;
          if (0xf < local_30) {
            pnVar24 = (nothrow_t *)(local_30 + 1);
            pvVar23 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar24) {
              pvVar23 = *(void **)((int)local_44[0] + -4);
              pnVar24 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar23))) {
LAB_00423250:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar23,pnVar24);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        ppAVar5 = *(AnimationFrames ***)(local_6c + 4);
        if (*(AnimationFrames ***)(local_6c + 8) == ppAVar5) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)local_6c,ppAVar5,(AnimationFrames **)&local_74);
        }
        else {
          *ppAVar5 = (AnimationFrames *)pbVar15;
          *(int *)(local_6c + 4) = *(int *)(local_6c + 4) + 4;
        }
        pbVar29 = (std::string *)(local_68 + 1);
        local_68 = (AnimationFrames *)pbVar29;
        pNVar14 = ghidra::any_singleton();
      } while (pbVar29 < (std::string *)
                         (*(int *)(pNVar14 + 0x40) - *(int *)(pNVar14 + 0x3c) >> 2));
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar12 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar12;
}
