// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: basic_string<> * __thiscall CharacterLocation::CharacterLocation(CharacterLocation *this,void *param_2)
CharacterLocation::CharacterLocation(void * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  char cVar1;
  char *pcVar2;
  MetaGameAction **ppMVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  char *pcVar7;
  std::string *pbVar8;
  Requirement *pRVar9;
  nothrow_t *pnVar10;
  void *pvVar11;
  char *pcVar12;
  undefined **ppuVar13;
  int iVar14;
  uint unaff_EDI;
  void *pvVar15;
  uint in_stack_00000018;
  std::string abStack_80 [4];
  undefined4 uStack_7c;
  void *local_50 [5];
  uint local_3c;
  int local_38;
  int local_34;
  std::string *local_2c;
  int local_28;
  uint local_20;
  CharacterLocation *local_1c;
  int local_18;
  MetaGameAction *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b3fc5;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  this_00 = (std::string *)((char *)this + 0x18);
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  *this_00 = (std::string)0x0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0;
  // [seh] local_8 = 3;
  uStack_7 = 0;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  local_1c = this;
  local_14 = (MetaGameAction *)this;
  ghidra::str::ctor(abStack_80,(std::string *)&param_2);
  splitStringBy();
  // [seh] local_8 = 4;
  uVar5 = local_8;
  // [seh] local_8 = 4;
  if (1 < (uint)((local_28 - (int)local_2c) / 0x18)) {
    if (local_1c != (CharacterLocation *)local_2c) {
      pbVar8 = local_2c;
      if (0xf < *(uint *)(local_2c + 0x14)) {
        pbVar8 = *(std::string **)local_2c;
      }
      ghidra::str::assign
                ((std::string *)local_1c,(char *)pbVar8,*(uint *)(local_2c + 0x10));
    }
    pbVar8 = local_2c + 0x18;
    if (this_00 != pbVar8) {
      if (0xf < *(uint *)(local_2c + 0x2c)) {
        pbVar8 = *(std::string **)pbVar8;
      }
      ghidra::str::assign(this_00,(char *)pbVar8,*(uint *)(local_2c + 0x28));
    }
    if (2 < (uint)((local_28 - (int)local_2c) / 0x18)) {
      ghidra::str::ctor(abStack_80,(std::string *)(local_2c + 0x30));
      splitStringBy();
      // [seh] local_8 = 5;
      local_20 = 0;
      iVar14 = local_34 - local_38 >> 0x1f;
      if ((local_34 - local_38) / 0x18 + iVar14 != iVar14) {
        local_18 = 0;
        do {
          ghidra::str::ctor
                    ((std::string *)local_50,(std::string *)(local_18 + local_38));
          pvVar11 = local_50[0];
          ppuVar13 = &PTR_s_drunk_005e1e30;
          do {
            pcVar2 = *ppuVar13;
            pcVar12 = pcVar2;
            do {
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            bVar6 = ghidra::lib::_Traits_equal___x28_x29(pcVar2,(int)pcVar12 - (int)(pcVar2 + 1),pcVar7,unaff_EDI);
            if (bVar6) {
              if (0xf < local_3c) {
                pnVar10 = (nothrow_t *)(local_3c + 1);
                pvVar15 = pvVar11;
                if ((nothrow_t *)0xfff < pnVar10) {
                  pvVar15 = *(void **)((int)pvVar11 + -4);
                  pnVar10 = (nothrow_t *)(local_3c + 0x24);
                  if (0x1f < (uint)((int)pvVar11 + (-4 - (int)pvVar15))) goto LAB_0042edc3;
                }
                operator_delete(pvVar15,pnVar10);
              }
              bVar6 = true;
              goto LAB_0042ec12;
            }
            ppuVar13 = ppuVar13 + 1;
          } while ((int)ppuVar13 < 0x5e1e3c);
          if (0xf < local_3c) {
            pnVar10 = (nothrow_t *)(local_3c + 1);
            pvVar15 = pvVar11;
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar15 = *(void **)((int)pvVar11 + -4);
              pnVar10 = (nothrow_t *)(local_3c + 0x24);
              if (0x1f < (uint)((int)pvVar11 + (-4 - (int)pvVar15))) goto LAB_0042edc3;
            }
            operator_delete(pvVar15,pnVar10);
          }
          bVar6 = false;
LAB_0042ec12:
          if (bVar6) {
            ghidra::str::ctor
                      ((std::string *)local_50,(std::string *)(local_38 + local_18));
            uVar4 = local_3c;
            pvVar11 = local_50[0];
            iVar14 = 0;
            do {
              pcVar2 = (&PTR_s_normal_005e1e2c)[iVar14];
              local_14 = (MetaGameAction *)(pcVar2 + 1);
              pcVar12 = pcVar2;
              do {
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              bVar6 = ghidra::lib::_Traits_equal___x28_x29(pcVar2,(int)pcVar12 - (int)local_14,pcVar7,unaff_EDI);
              if (bVar6) {
                if (0xf < uVar4) {
                  pnVar10 = (nothrow_t *)(uVar4 + 1);
                  pvVar15 = pvVar11;
                  if ((nothrow_t *)0xfff < pnVar10) {
                    pvVar15 = *(void **)((int)pvVar11 + -4);
                    pnVar10 = (nothrow_t *)(uVar4 + 0x24);
                    if (0x1f < (uint)((int)pvVar11 + (-4 - (int)pvVar15))) goto LAB_0042edc3;
                  }
                  operator_delete(pvVar15,pnVar10);
                }
                *(int *)(local_1c + 0x3c) = iVar14;
                goto LAB_0042ed2e;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < 4);
            if (0xf < uVar4) {
              pnVar10 = (nothrow_t *)(uVar4 + 1);
              pvVar15 = pvVar11;
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar15 = *(void **)((int)pvVar11 + -4);
                pnVar10 = (nothrow_t *)(uVar4 + 0x24);
                if (0x1f < (uint)((int)pvVar11 + (-4 - (int)pvVar15))) goto LAB_0042edc3;
              }
              operator_delete(pvVar15,pnVar10);
            }
            *(undefined4 *)(local_1c + 0x3c) = 0;
          }
          else {
            pRVar9 = operator_new(0x40);
            // [seh] local_8 = 6;
            ghidra::str::ctor(abStack_80,(std::string *)(local_18 + local_38));
            local_14 = (MetaGameAction *)new ((void *)(pRVar9)) Requirement();
            // [seh] local_8 = 5;
            ppMVar3 = *(MetaGameAction ***)(local_1c + 0x34);
            if (*(MetaGameAction ***)(local_1c + 0x38) == ppMVar3) {
              ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(local_1c + 0x30),ppMVar3,&local_14);
            }
            else {
              *ppMVar3 = local_14;
              *(int *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) + 4;
            }
          }
LAB_0042ed2e:
          local_20 = local_20 + 1;
          local_18 = local_18 + 0x18;
        } while (local_20 < (uint)((local_34 - local_38) / 0x18));
      }
      // [seh] local_8 = 4;
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_38);
    }
    uStack_7c = 0x42ed92;
    debugPrint("DETAIL","Unpacked location \'%s\', \'%s\'");
    uVar5 = local_8;
  }
  // [seh] local_8 = uVar5;
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_2c);
  if (0xf < in_stack_00000018) {
    pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar11 = param_2;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar11 = *(void **)((int)param_2 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar11))) {
LAB_0042edc3:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  return (std::string *)local_1c;
}
