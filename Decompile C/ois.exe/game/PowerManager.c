#include "../ois.exe.h"


// public: void __thiscall PowerManager::populateListData(class std::vector<class ListData,class
// std::allocator<class ListData> > *)

void __thiscall PowerManager::populateListData(PowerManager *this,vector<> *param_1)

{
  float fVar1;
  ListData *pLVar2;
  int *piVar3;
  ShipModule *this_00;
  vector<> *pvVar4;
  undefined1 uVar5;
  char cVar6;
  ListData *pLVar7;
  undefined2 *puVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  Color3B *pCVar13;
  void *pvVar14;
  int *piVar15;
  nothrow_t *pnVar16;
  GameData *pGVar17;
  ListData *this_01;
  uint uVar18;
  ListData *unaff_EDI;
  float fVar19;
  undefined1 *puVar20;
  undefined1 in_XMM0 [16];
  float fVar21;
  basic_string<> abStack_140 [16];
  undefined4 uStack_130;
  basic_string<> local_124 [16];
  undefined4 local_114;
  undefined4 local_110;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  Color3B local_ef [3];
  Color3B local_ec [3];
  Color3B local_e9 [3];
  Color3B local_e6 [3];
  Color3B local_e3 [3];
  Color3B local_e0 [3];
  Color3B local_dd [3];
  Color3B local_da [3];
  Color3B local_d7 [3];
  Color3B local_d4 [3];
  Color3B local_d1 [3];
  Color3B local_ce [3];
  Color3B local_cb [3];
  vector<> *local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  char *local_b4;
  undefined1 *local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  void *local_a8 [5];
  uint local_94;
  ListData local_90 [84];
  float local_3c;
  undefined2 local_35;
  undefined1 local_33;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005bddf4;
  local_10 = ExceptionList;
  pLVar7 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_c8 = param_1;
  pLVar2 = *(ListData **)(param_1 + 4);
  this_01 = *(ListData **)param_1;
  local_18 = pLVar7;
  if (this_01 != pLVar2) {
    do {
      ListData::~ListData(this_01);
      this_01 = this_01 + 0x60;
    } while (this_01 != pLVar2);
    this_01 = *(ListData **)param_1;
  }
  *(ListData **)(param_1 + 4) = this_01;
  uVar11 = 0;
  fVar19 = 1.0;
  pGVar17 = g_gameData + 0xd0;
  fVar21 = 1.0;
  local_c0 = 1.0;
  local_bc = 1.0;
  piVar3 = *(int **)(*(int *)(*(int *)pGVar17 + 0x40) + 0x40);
  local_b8 = *(int **)(*(int *)(*(int *)pGVar17 + 0x40) + 0x3c);
  uVar18 = (uint)((int)piVar3 + (3 - (int)local_b8)) >> 2;
  if (piVar3 < local_b8) {
    uVar18 = 0;
  }
  piVar15 = local_b8;
  if (uVar18 != 0) {
    do {
      fVar1 = *(float *)(*(int *)(*piVar15 + 8) + 0xc0);
      local_c0 = fVar21;
      if ((0.0 < fVar1) && (local_c0 = fVar1, fVar1 <= fVar21)) {
        local_c0 = fVar21;
      }
      fVar21 = *(float *)(*(int *)(*piVar15 + 8) + 0xbc);
      in_XMM0 = ZEXT416((uint)fVar21);
      if (0.0 < fVar21) {
        if (fVar21 <= fVar19) {
          in_XMM0 = ZEXT416((uint)fVar19);
        }
        fVar19 = in_XMM0._0_4_;
      }
      uVar11 = uVar11 + 1;
      piVar15 = piVar15 + 1;
      fVar21 = local_c0;
      local_bc = fVar19;
    } while (uVar11 != uVar18);
  }
  local_c4 = 0;
  if ((int)piVar3 - (int)local_b8 >> 2 != 0) {
    do {
      this_00 = *(ShipModule **)(*(int *)(*(int *)(*(int *)pGVar17 + 0x40) + 0x3c) + local_c4 * 4);
      local_110 = 0x4ac14d;
      cocos2d::Color3B::Color3B((Color3B *)&local_ac,' ',' ','@');
      if (this_00[99] == (ShipModule)0x0) {
        uVar24 = '\x10';
        uVar23 = '\x10';
        uVar22 = '\x10';
        pCVar13 = local_cb;
LAB_004ac173:
        local_110 = 0x4ac175;
        puVar8 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar13,uVar22,uVar23,uVar24);
        local_ac = *puVar8;
        local_aa = *(undefined1 *)(puVar8 + 1);
      }
      else if (this_00[0x62] != (ShipModule)0x0) {
        uVar24 = ' ';
        uVar23 = ' ';
        uVar22 = '@';
        pCVar13 = local_ce;
        goto LAB_004ac173;
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      local_110 = 0x4ac1cb;
      pcVar9 = (char *)strUsingArgs((char *)local_a8);
      local_8._0_1_ = 1;
      pcVar12 = pcVar9;
      if (0xf < *(uint *)(pcVar9 + 0x14)) {
        pcVar12 = *(char **)pcVar9;
      }
      std::basic_string<>::append((basic_string<> *)local_30,pcVar12,*(uint *)(pcVar9 + 0x10));
      local_8._0_1_ = 0;
      uVar5 = (undefined1)local_8;
      local_8._0_1_ = 0;
      if (0xf < local_94) {
        pnVar16 = (nothrow_t *)(local_94 + 1);
        pvVar14 = local_a8[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pvVar14 = *(void **)((int)local_a8[0] + -4);
          pnVar16 = (nothrow_t *)(local_94 + 0x24);
          if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar14))) goto LAB_004ac743;
        }
        operator_delete(pvVar14,pnVar16);
      }
      local_110 = 0x4ac251;
      pcVar9 = (char *)strUsingArgs((char *)local_a8);
      local_8._0_1_ = 2;
      pcVar12 = pcVar9;
      if (0xf < *(uint *)(pcVar9 + 0x14)) {
        pcVar12 = *(char **)pcVar9;
      }
      std::basic_string<>::append((basic_string<> *)local_30,pcVar12,*(uint *)(pcVar9 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_94) {
        pnVar16 = (nothrow_t *)(local_94 + 1);
        pvVar14 = local_a8[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pvVar14 = *(void **)((int)local_a8[0] + -4);
          pnVar16 = (nothrow_t *)(local_94 + 0x24);
          uVar5 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar14))) goto LAB_004ac743;
        }
        operator_delete(pvVar14,pnVar16);
      }
      local_b0 = local_124;
      local_114 = 0;
      local_110 = 0xf;
      local_124[0] = (basic_string<>)0x0;
      pcVar12 = (&PTR_s_UNKN_005dfc10)[*(int *)(*(int *)(this_00 + 8) + 4)];
      local_b4 = pcVar12 + 1;
      pcVar9 = pcVar12;
      do {
        cVar6 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
      uStack_130 = 0x4ac316;
      std::basic_string<>::assign(local_124,pcVar12,(int)pcVar9 - (int)local_b4);
      local_8._0_1_ = 3;
      std::basic_string<>::basic_string<>(abStack_140,(basic_string<> *)local_30);
      local_8._0_1_ = 0;
      ListData::ListData(local_90,*(undefined4 *)(this_00 + 0x10));
      local_8 = CONCAT31(local_8._1_3_,4);
      ShipModule::getCurrentGenerationRate(this_00);
      fVar21 = 0.0;
      if (in_XMM0._0_4_ <= 0.0) {
        iVar10 = *(int *)(this_00 + 8);
        if (((iVar10 != 0) && (0.0 < *(float *)(iVar10 + 0xc4))) && (this_00[99] != (ShipModule)0x0)
           ) {
          cVar6 = (**(code **)(*(int *)this_00 + 0x14))();
          if (cVar6 == '\0') {
            iVar10 = ComponentInterfaceInstance::getEfficiencyPercent
                               (*(ComponentInterfaceInstance **)(this_00 + 0xc));
            local_3c = *(float *)(*(int *)(this_00 + 8) + 0xc4) * ((float)iVar10 / 100.0);
          }
          else {
            local_3c = 0.0;
          }
          local_3c = *(float *)(this_00 + 0x5c) / local_3c;
          in_XMM0._0_8_ = (double)local_3c;
          in_XMM0._8_8_ = 0;
          if (0.8 <= in_XMM0._0_8_) {
            uVar23 = 0xff;
            uVar22 = '\0';
            pCVar13 = local_da;
            goto LAB_004ac666;
          }
          if (0.5 <= local_3c) {
            uVar23 = 0xff;
            pCVar13 = local_dd;
            goto LAB_004ac661;
          }
          pCVar13 = local_e0;
LAB_004ac65f:
          uVar23 = '\0';
          goto LAB_004ac661;
        }
        if (0.0 < *(float *)(iVar10 + 0xbc)) {
          if (this_00[99] != (ShipModule)0x0) {
            if (this_00[0x62] == (ShipModule)0x0) {
              puVar20 = *(undefined1 **)(iVar10 + 0xc0);
              local_b0 = puVar20;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(this_00 + 0xc));
              fVar21 = (float)puVar20 * (float)local_b0 + (float)local_b0;
            }
            else {
              local_b0 = (undefined1 *)((float)*(int *)(this_00 + 100) / 100.0);
              pcVar12 = *(char **)(iVar10 + 0xbc);
              local_b4 = pcVar12;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(this_00 + 0xc));
              fVar21 = ((float)pcVar12 * (float)local_b4 + (float)local_b4) * (float)local_b0;
            }
          }
          local_3c = fVar21 / local_bc;
          in_XMM0._0_12_ = ZEXT812(0x3f000000);
          in_XMM0._12_4_ = 0;
          if (local_3c < 0.5) {
            uVar23 = 0xff;
            uVar22 = '\0';
            pCVar13 = local_e3;
            goto LAB_004ac666;
          }
          in_XMM0._0_8_ = (double)local_3c;
          in_XMM0._8_8_ = 0;
          if (0.8 <= in_XMM0._0_8_) {
            pCVar13 = local_e9;
            goto LAB_004ac65f;
          }
          uVar23 = 0xff;
          pCVar13 = local_e6;
          goto LAB_004ac661;
        }
        puVar20 = *(undefined1 **)(iVar10 + 0xc0);
        in_XMM0 = ZEXT416(puVar20);
        if (0.0 < (float)puVar20) {
          if (this_00[99] != (ShipModule)0x0) {
            if (this_00[0x62] == (ShipModule)0x0) {
              local_b0 = puVar20;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(this_00 + 0xc));
              fVar21 = in_XMM0._0_4_ * (float)local_b0 + (float)local_b0;
            }
            else {
              local_b4 = (char *)((float)*(int *)(this_00 + 100) / 100.0);
              puVar20 = *(undefined1 **)(iVar10 + 0xbc);
              local_b0 = puVar20;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(this_00 + 0xc));
              fVar21 = ((float)puVar20 * (float)local_b0 + (float)local_b0) * (float)local_b4;
            }
          }
          local_3c = fVar21 / local_c0;
          in_XMM0._0_12_ = ZEXT812(0x3f000000);
          in_XMM0._12_4_ = 0;
          if (0.5 <= local_3c) {
            in_XMM0._0_8_ = (double)local_3c;
            in_XMM0._8_8_ = 0;
            if (0.8 <= in_XMM0._0_8_) {
              pCVar13 = (Color3B *)((int)&local_b8 + 1);
              goto LAB_004ac65f;
            }
            uVar23 = 0xff;
            pCVar13 = local_ef;
            goto LAB_004ac661;
          }
          uVar23 = 0xff;
          uVar22 = '\0';
          pCVar13 = local_ec;
          goto LAB_004ac666;
        }
      }
      else {
        if (this_00[99] == (ShipModule)0x0) {
LAB_004ac369:
          local_3c = 0.0;
        }
        else {
          ShipModule::getCurrentGenerationRate(this_00);
          fVar21 = in_XMM0._0_4_;
          if (this_00[99] == (ShipModule)0x0) goto LAB_004ac369;
          local_3c = *(float *)(*(int *)(this_00 + 8) + 200);
        }
        local_3c = fVar21 / local_3c;
        if (1.0 < local_3c) {
          local_3c = 1.0;
        }
        in_XMM0._0_8_ = (double)local_3c;
        in_XMM0._8_8_ = 0;
        if (in_XMM0._0_8_ < 0.8) {
          if (local_3c < 0.5) {
            pCVar13 = local_d7;
            goto LAB_004ac65f;
          }
          uVar23 = 0xff;
          pCVar13 = local_d4;
LAB_004ac661:
          uVar22 = 0xff;
        }
        else {
          uVar23 = 0xff;
          uVar22 = '\0';
          pCVar13 = local_d1;
        }
LAB_004ac666:
        local_110 = 0x4ac668;
        puVar8 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar13,uVar22,uVar23,'\0');
        local_35 = *puVar8;
        local_33 = *(undefined1 *)(puVar8 + 1);
      }
      pvVar4 = local_c8;
      if (*(ListData **)(local_c8 + 8) == *(ListData **)(local_c8 + 4)) {
        std::vector<>::_Emplace_reallocate<>(local_c8,*(ListData **)(local_c8 + 4),local_90);
      }
      else {
        std::_Default_allocator_traits<>::construct<>
                  ((allocator<ListData> *)local_90,pLVar7,unaff_EDI);
        *(int *)(pvVar4 + 4) = *(int *)(pvVar4 + 4) + 0x60;
      }
      ListData::~ListData(local_90);
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (0xf < local_1c) {
        pnVar16 = (nothrow_t *)(local_1c + 1);
        pvVar14 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pvVar14 = *(void **)((int)local_30[0] + -4);
          pnVar16 = (nothrow_t *)(local_1c + 0x24);
          uVar5 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar14))) {
LAB_004ac743:
            local_8._0_1_ = uVar5;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar14,pnVar16);
      }
      pGVar17 = g_gameData + 0xd0;
      local_20 = 0;
      local_c4 = local_c4 + 1;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    } while (local_c4 <
             (uint)(*(int *)(*(int *)(*(int *)pGVar17 + 0x40) + 0x40) -
                    *(int *)(*(int *)(*(int *)pGVar17 + 0x40) + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall PowerManager::getDetailInformation(void)

void __thiscall PowerManager::getDetailInformation(PowerManager *this)

{
  int iVar1;
  ShipModule *pSVar2;
  GameData *pGVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  float in_XMM0_Da;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  basic_string<> *in_stack_00000004;
  float local_58;
  float local_50;
  float local_4c;
  void *local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  pGVar3 = g_gameData;
  puStack_c = &DAT_005bdfa2;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar8 = *(int *)(g_gameData + 0xd0);
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  local_8 = 0;
  if (*(int *)(iVar8 + 0x1e8) == -1) {
    pcVar4 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 1;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 2;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    SystemManager::totalPowerDrain(*(SystemManager **)(iVar8 + 0x40));
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Drain      : `$%.2fkw\n",(double)in_XMM0_Da);
    local_8 = 3;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Modules    : `0%d\n");
    local_8 = 4;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Cur. Mode  : `%s\n");
    local_8 = 5;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Storage -\n");
    local_8 = 6;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    uVar10 = 0;
    uVar12 = *(uint *)(*(int *)(iVar8 + 0x40) + 0x3c);
    uVar14 = *(uint *)(*(int *)(iVar8 + 0x40) + 0x40);
    uVar16 = uVar14 + (3 - uVar12) >> 2;
    if (uVar14 < uVar12) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      do {
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar16);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Batteries  : `$%d\n");
    local_8 = 7;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    local_58 = 0.0;
    fVar18 = 0.0;
    piVar17 = *(int **)(*(int *)(iVar8 + 0x40) + 0x3c);
    for (iVar11 = *(int *)(*(int *)(iVar8 + 0x40) + 0x40) - (int)piVar17 >> 2; iVar11 != 0;
        iVar11 = iVar11 + -1) {
      fVar19 = *(float *)(*(int *)(*piVar17 + 8) + 0xc4);
      if (fVar19 != 0.0) {
        fVar18 = fVar18 + fVar19;
      }
      piVar17 = piVar17 + 1;
    }
    dVar20 = (double)fVar18;
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkw\n",dVar20);
    fVar18 = SUB84(dVar20,0);
    local_8 = 8;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    SystemManager::getMaxBatteryStorage(*(SystemManager **)(iVar8 + 0x40));
    dVar20 = (double)fVar18;
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fkw\n",dVar20);
    local_8 = 9;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Generation -\n");
    local_8 = 10;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    fVar18 = SUB84(dVar20,0);
    local_8 = 0xb;
    iVar11 = 0;
    local_34 = 0;
    uVar14 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    piVar17 = *(int **)(*(int *)(iVar8 + 0x40) + 0x3c);
    piVar15 = *(int **)(*(int *)(iVar8 + 0x40) + 0x40);
    uVar12 = (uint)((int)piVar15 + (3 - (int)piVar17)) >> 2;
    if (piVar15 < piVar17) {
      uVar12 = 0;
    }
    if (uVar12 != 0) {
      do {
        iVar13 = *piVar17;
        if (*(int *)(*(int *)(iVar13 + 8) + 4) == 1) {
          if (iVar11 != 0) {
            std::basic_string<>::append((basic_string<> *)local_44,",",1);
          }
          std::basic_string<>::append((basic_string<> *)local_44,"reactor",7);
          iVar11 = local_34;
        }
        if (*(int *)(*(int *)(iVar13 + 8) + 4) == 0xd) {
          if (iVar11 != 0) {
            std::basic_string<>::append((basic_string<> *)local_44,",",1);
          }
          std::basic_string<>::append((basic_string<> *)local_44,"solar",5);
          iVar11 = local_34;
        }
        fVar18 = SUB84(dVar20,0);
        uVar14 = uVar14 + 1;
        piVar17 = piVar17 + 1;
      } while (uVar14 != uVar12);
    }
    iVar11 = 0;
    local_50 = 0.0;
    uVar14 = 0;
    piVar17 = *(int **)(*(int *)(iVar8 + 0x40) + 0x3c);
    piVar15 = *(int **)(*(int *)(iVar8 + 0x40) + 0x40);
    uVar12 = (uint)((int)piVar15 + (3 - (int)piVar17)) >> 2;
    if (piVar15 < piVar17) {
      uVar12 = 0;
    }
    piVar15 = piVar17;
    if (uVar12 != 0) {
      do {
        local_50 = (float)(iVar11 + 1);
        if (*(int *)(*(int *)(*piVar15 + 8) + 4) != 1) {
          local_50 = (float)iVar11;
        }
        uVar14 = uVar14 + 1;
        piVar15 = piVar15 + 1;
        iVar11 = (int)local_50;
      } while (uVar14 != uVar12);
    }
    iVar13 = 0;
    uVar14 = 0;
    iVar11 = iVar13;
    if (uVar12 != 0) {
      do {
        iVar1 = *piVar17;
        piVar17 = piVar17 + 1;
        iVar11 = iVar13 + 1;
        if (*(int *)(*(int *)(iVar1 + 8) + 4) != 0xd) {
          iVar11 = iVar13;
        }
        uVar14 = uVar14 + 1;
        iVar13 = iVar11;
      } while (uVar14 != uVar12);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Generators : `$%d (%s)\n",
                                  iVar11 + (int)local_50);
    local_8._0_1_ = 0xc;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8._0_1_ = 0xb;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_30) {
      pnVar9 = (nothrow_t *)(local_30 + 1);
      pvVar6 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_44[0] + -4);
        pnVar9 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    SystemManager::getMaxTheoreticalPowerGeneration(*(SystemManager **)(iVar8 + 0x40));
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkw\n",(double)fVar18);
    local_8 = 0xd;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    iVar11 = *(int *)(iVar8 + 0x40);
    uVar12 = 0;
    local_4c = 0.0;
    iVar13 = *(int *)(iVar11 + 0x3c);
    fVar18 = 0.0;
    if (*(int *)(iVar11 + 0x40) - iVar13 >> 2 != 0) {
      do {
        fVar18 = local_4c;
        ShipModule::getCurrentGenerationRate(*(ShipModule **)(iVar13 + uVar12 * 4));
        if (0.0 < fVar18) {
          pSVar2 = *(ShipModule **)(*(int *)(iVar11 + 0x3c) + uVar12 * 4);
          if (pSVar2[99] == (ShipModule)0x0) {
            local_4c = local_4c + 0.0;
          }
          else {
            ShipModule::getCurrentGenerationRate(pSVar2);
            local_4c = fVar18 + local_4c;
          }
        }
        uVar12 = uVar12 + 1;
        iVar13 = *(int *)(iVar11 + 0x3c);
        fVar18 = local_4c;
      } while (uVar12 < (uint)(*(int *)(iVar11 + 0x40) - iVar13 >> 2));
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fkw\n",(double)fVar18);
    local_8 = 0xe;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 0xf;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    fVar18 = 0.0;
    piVar17 = *(int **)(*(int *)(iVar8 + 0x40) + 0x3c);
    for (iVar11 = *(int *)(*(int *)(iVar8 + 0x40) + 0x40) - (int)piVar17 >> 2; iVar11 != 0;
        iVar11 = iVar11 + -1) {
      iVar13 = *piVar17;
      piVar17 = piVar17 + 1;
      fVar18 = fVar18 + *(float *)(*(int *)(iVar13 + 8) + 0xc0);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkw\n",(double)fVar18);
    local_8 = 0x10;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    iVar11 = *(int *)(iVar8 + 0x40);
    fVar18 = 0.0;
    uVar12 = 0;
    local_50 = 0.0;
    if (*(int *)(iVar11 + 0x40) - *(int *)(iVar11 + 0x3c) >> 2 != 0) {
      do {
        iVar13 = *(int *)(*(int *)(iVar11 + 0x3c) + uVar12 * 4);
        fVar18 = *(float *)(*(int *)(iVar13 + 8) + 0xc0);
        fVar19 = fVar18;
        ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(iVar13 + 0xc))
        ;
        uVar12 = uVar12 + 1;
        fVar18 = fVar19 * fVar18 + fVar18 + local_50;
        local_50 = fVar18;
      } while (uVar12 < (uint)(*(int *)(iVar11 + 0x40) - *(int *)(iVar11 + 0x3c) >> 2));
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `^%.2fkw\n",(double)fVar18);
    local_8 = 0x11;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 0x12;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    fVar18 = 0.0;
    piVar17 = *(int **)(*(int *)(iVar8 + 0x40) + 0x3c);
    for (iVar11 = *(int *)(*(int *)(iVar8 + 0x40) + 0x40) - (int)piVar17 >> 2; iVar11 != 0;
        iVar11 = iVar11 + -1) {
      iVar13 = *piVar17;
      piVar17 = piVar17 + 1;
      fVar18 = fVar18 + *(float *)(*(int *)(iVar13 + 8) + 0xbc);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkw\n",(double)fVar18);
    local_8 = 0x13;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
    iVar8 = *(int *)(iVar8 + 0x40);
    uVar12 = 0;
    if (*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2 == 0) {
      local_58 = 0.0;
    }
    else {
      do {
        iVar11 = *(int *)(*(int *)(iVar8 + 0x3c) + uVar12 * 4);
        fVar18 = *(float *)(*(int *)(iVar11 + 8) + 0xbc);
        fVar19 = fVar18;
        ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(iVar11 + 0xc))
        ;
        uVar12 = uVar12 + 1;
        local_58 = fVar19 * fVar18 + fVar18 + local_58;
      } while (uVar12 < (uint)(*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2));
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `^%.2fkw\n",(double)local_58);
    local_8 = 0x14;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar9);
    }
  }
  else {
    uVar14 = 0;
    puVar7 = *(undefined4 **)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x40) + 0x3c);
    uVar12 = *(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x40) + 0x40) - (int)puVar7 >> 2;
    if (uVar12 != 0) {
      do {
        pSVar2 = (ShipModule *)*puVar7;
        if (*(int *)(pSVar2 + 0x10) == *(int *)(iVar8 + 0x1e8)) {
          if (pSVar2 != (ShipModule *)0x0) {
            std::basic_string<>::append(in_stack_00000004,"`!Module Information\n",0x15);
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Basic -\n");
            local_8 = 0x15;
            pcVar5 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar5 = *(char **)pcVar4;
            }
            std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar6 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar6 = *(void **)((int)local_2c[0] + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar9);
            }
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Type       : `%%%s\n");
            local_8 = 0x16;
            pcVar5 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar5 = *(char **)pcVar4;
            }
            std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar6 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar6 = *(void **)((int)local_2c[0] + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar9);
            }
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Name       : `*%s\n");
            local_8 = 0x17;
            pcVar5 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar5 = *(char **)pcVar4;
            }
            std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar6 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar6 = *(void **)((int)local_2c[0] + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar9);
            }
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Manufact.  : `*%s\n");
            local_8 = 0x18;
            pcVar5 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar5 = *(char **)pcVar4;
            }
            std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar6 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar6 = *(void **)((int)local_2c[0] + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar9);
            }
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Slot       : `*%s\n");
            local_8 = 0x19;
            pcVar5 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar5 = *(char **)pcVar4;
            }
            std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pnVar9 = (nothrow_t *)(local_18 + 1);
              pvVar6 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar6 = *(void **)((int)local_2c[0] + -4);
                pnVar9 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar9);
            }
            if ((0.0 < *(float *)(*(int *)(pSVar2 + 8) + 0xc0)) ||
               (0.0 < *(float *)(*(int *)(pSVar2 + 8) + 0xbc))) {
              if (pSVar2[0x62] == (ShipModule)0x0) {
                uVar12 = 0x18;
                pcVar5 = "`&Mode       : `$Normal\n";
              }
              else {
                uVar12 = 0x16;
                pcVar5 = "`&Mode       : `^High\n";
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,uVar12);
            }
            iVar8 = *(int *)(pSVar2 + 8);
            if (0 < *(int *)(iVar8 + 0xd4)) {
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Emissions (Normal) -\n");
              local_8 = 0x1a;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              if (0xf < local_18) {
                pnVar9 = (nothrow_t *)(local_18 + 1);
                pvVar6 = local_2c[0];
                if ((nothrow_t *)0xfff < pnVar9) {
                  pvVar6 = *(void **)((int)local_2c[0] + -4);
                  pnVar9 = (nothrow_t *)(local_18 + 0x24);
                  if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar6,pnVar9);
              }
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%d.00dBw\n");
              local_8 = 0x1b;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              fVar19 = (float)*(int *)(*(int *)(pSVar2 + 8) + 0xd4);
              fVar18 = fVar19;
              ComponentInterfaceInstance::getEmissionsModifier
                        (*(ComponentInterfaceInstance **)(pSVar2 + 0xc));
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fdBw\n",
                                            (double)(fVar18 * fVar19 + fVar19));
              local_8 = 0x1c;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              iVar8 = *(int *)(pSVar2 + 8);
            }
            if (0 < *(int *)(iVar8 + 0xcc)) {
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Emissions (High) -\n");
              local_8 = 0x1d;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%d.00dBw\n");
              local_8 = 0x1e;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              fVar19 = (float)*(int *)(*(int *)(pSVar2 + 8) + 0xcc);
              fVar18 = fVar19;
              ComponentInterfaceInstance::getEmissionsModifier
                        (*(ComponentInterfaceInstance **)(pSVar2 + 0xc));
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fdBw\n",
                                            (double)(fVar18 * fVar19 + fVar19));
              local_8 = 0x1f;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              iVar8 = *(int *)(pSVar2 + 8);
            }
            if (0.0 < *(float *)(iVar8 + 0xc0)) {
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Drain (Normal) -\n");
              local_8 = 0x20;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkW/s\n",
                                            (double)*(float *)(*(int *)(pSVar2 + 8) + 0xc0));
              local_8 = 0x21;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              fVar18 = *(float *)(*(int *)(pSVar2 + 8) + 0xc0);
              fVar19 = fVar18;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(pSVar2 + 0xc));
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fkW/s\n",
                                            (double)(fVar19 * fVar18 + fVar18));
              local_8 = 0x22;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              iVar8 = *(int *)(pSVar2 + 8);
            }
            if (0.0 < *(float *)(iVar8 + 0xbc)) {
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Drain (High) -\n");
              local_8 = 0x23;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkW/s\n",
                                            (double)*(float *)(*(int *)(pSVar2 + 8) + 0xbc));
              local_8 = 0x24;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              fVar18 = *(float *)(*(int *)(pSVar2 + 8) + 0xbc);
              fVar19 = fVar18;
              ComponentInterfaceInstance::getPowerModifier
                        (*(ComponentInterfaceInstance **)(pSVar2 + 0xc));
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fkW/s\n",
                                            (double)(fVar19 * fVar18 + fVar18));
              local_8 = 0x25;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              iVar8 = *(int *)(pSVar2 + 8);
            }
            if (0.0 < *(float *)(iVar8 + 200)) {
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Generation -\n");
              local_8 = 0x26;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              auVar21._0_8_ = (double)*(float *)(*(int *)(pSVar2 + 8) + 200);
              auVar21._8_8_ = 0;
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkW\n",
                                            auVar21._0_8_);
              local_8 = 0x27;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              ShipModule::getCurrentGenerationRate(pSVar2);
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fkW\n",
                                            (double)auVar21._0_4_);
              local_8 = 0x28;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              iVar8 = *(int *)(pSVar2 + 8);
            }
            if (0.0 < *(float *)(iVar8 + 0xc4)) {
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`*- Storage -\n");
              local_8 = 0x29;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              auVar22._0_8_ = (double)*(float *)(*(int *)(pSVar2 + 8) + 0xc4);
              auVar22._8_8_ = 0;
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Theoretical: `$%.2fkW\n",
                                            auVar22._0_8_);
              local_8 = 0x2a;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              local_8 = local_8 & 0xffffff00;
              word::~word((word *)local_2c);
              ShipModule::actualMaxPowerStorage(pSVar2);
              pcVar4 = (char *)strUsingArgs((char *)local_2c,"`&Actual     : `$%.2fkW\n",
                                            (double)auVar22._0_4_);
              local_8 = 0x2b;
              pcVar5 = pcVar4;
              if (0xf < *(uint *)(pcVar4 + 0x14)) {
                pcVar5 = *(char **)pcVar4;
              }
              std::basic_string<>::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
              word::~word((word *)local_2c);
            }
            goto LAB_004ad40d;
          }
          break;
        }
        uVar14 = uVar14 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar14 < uVar12);
    }
    std::basic_string<>::assign(in_stack_00000004,"`@ERROR. Unknown module.",0x18);
  }
LAB_004ad40d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
