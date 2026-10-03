#include "../ois.exe.h"


// public: __thiscall CharacterLocation::CharacterLocation(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

basic_string<> * __thiscall
CharacterLocation::CharacterLocation(CharacterLocation *this,void *param_2)

{
  basic_string<> *this_00;
  char cVar1;
  char *pcVar2;
  MetaGameAction **ppMVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  char *pcVar7;
  basic_string<> *pbVar8;
  Requirement *pRVar9;
  nothrow_t *pnVar10;
  void *pvVar11;
  char *pcVar12;
  undefined **ppuVar13;
  int iVar14;
  uint unaff_EDI;
  void *pvVar15;
  uint in_stack_00000018;
  basic_string<> abStack_80 [4];
  undefined4 uStack_7c;
  void *local_50 [5];
  uint local_3c;
  int local_38;
  int local_34;
  basic_string<> *local_2c;
  int local_28;
  uint local_20;
  CharacterLocation *local_1c;
  int local_18;
  MetaGameAction *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b3fc5;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (CharacterLocation)0x0;
  this_00 = (basic_string<> *)(this + 0x18);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  *this_00 = (basic_string<>)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  local_8 = 3;
  uStack_7 = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  local_1c = this;
  local_14 = (MetaGameAction *)this;
  std::basic_string<>::basic_string<>(abStack_80,(basic_string<> *)&param_2);
  splitStringBy();
  local_8 = 4;
  uVar5 = local_8;
  local_8 = 4;
  if (1 < (uint)((local_28 - (int)local_2c) / 0x18)) {
    if (local_1c != (CharacterLocation *)local_2c) {
      pbVar8 = local_2c;
      if (0xf < *(uint *)(local_2c + 0x14)) {
        pbVar8 = *(basic_string<> **)local_2c;
      }
      std::basic_string<>::assign
                ((basic_string<> *)local_1c,(char *)pbVar8,*(uint *)(local_2c + 0x10));
    }
    pbVar8 = local_2c + 0x18;
    if (this_00 != pbVar8) {
      if (0xf < *(uint *)(local_2c + 0x2c)) {
        pbVar8 = *(basic_string<> **)pbVar8;
      }
      std::basic_string<>::assign(this_00,(char *)pbVar8,*(uint *)(local_2c + 0x28));
    }
    if (2 < (uint)((local_28 - (int)local_2c) / 0x18)) {
      std::basic_string<>::basic_string<>(abStack_80,(basic_string<> *)(local_2c + 0x30));
      splitStringBy();
      local_8 = 5;
      local_20 = 0;
      iVar14 = local_34 - local_38 >> 0x1f;
      if ((local_34 - local_38) / 0x18 + iVar14 != iVar14) {
        local_18 = 0;
        do {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)local_50,(basic_string<> *)(local_18 + local_38));
          pvVar11 = local_50[0];
          ppuVar13 = &PTR_s_drunk_005e1e30;
          do {
            pcVar2 = *ppuVar13;
            pcVar12 = pcVar2;
            do {
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            bVar6 = std::_Traits_equal<>(pcVar2,(int)pcVar12 - (int)(pcVar2 + 1),pcVar7,unaff_EDI);
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
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_50,(basic_string<> *)(local_38 + local_18));
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
              bVar6 = std::_Traits_equal<>(pcVar2,(int)pcVar12 - (int)local_14,pcVar7,unaff_EDI);
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
            local_8 = 6;
            std::basic_string<>::basic_string<>(abStack_80,(basic_string<> *)(local_18 + local_38));
            local_14 = (MetaGameAction *)Requirement::Requirement(pRVar9);
            local_8 = 5;
            ppMVar3 = *(MetaGameAction ***)(local_1c + 0x34);
            if (*(MetaGameAction ***)(local_1c + 0x38) == ppMVar3) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)(local_1c + 0x30),ppMVar3,&local_14);
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
      local_8 = 4;
      std::vector<>::_Tidy((vector<> *)&local_38);
    }
    uStack_7c = 0x42ed92;
    debugPrint("DETAIL","Unpacked location \'%s\', \'%s\'");
    uVar5 = local_8;
  }
  local_8 = uVar5;
  std::vector<>::_Tidy((vector<> *)&local_2c);
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
  ExceptionList = local_10;
  return (basic_string<> *)local_1c;
}
