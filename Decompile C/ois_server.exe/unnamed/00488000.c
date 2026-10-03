#include "../ois_server.exe.h"


void __thiscall FUN_00488220(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  void *in_stack_ffffff08;
  undefined1 auStack_dc [20];
  undefined4 uStack_c8;
  Color3B local_9e [3];
  Color3B local_9b [3];
  char *local_98;
  void *local_94;
  int *local_90;
  int local_8c;
  uint local_88;
  int local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_79;
  undefined1 local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b97e3;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_94 = param_1;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), iVar12 != 0)) {
    bVar14 = false;
    if (*(int *)(iVar12 + 0x254) != 0) {
      bVar14 = *(int *)(*(int *)(iVar12 + 0x254) + 0x158) == 1;
    }
    if (bVar14) {
      iVar12 = *(int *)(iVar12 + 0x398);
      pcVar13 = (char *)(*(int *)((int)this + 0x11c) + 0x88);
      iVar9 = *(int *)(iVar12 + 0x8c);
      iVar10 = *(int *)(iVar12 + 0x88);
      local_88 = 0;
      local_98 = pcVar13;
      local_84 = iVar12;
      if (iVar9 - iVar10 >> 2 != 0) {
        do {
          if ((*pcVar13 != '\0') || (0 < *(int *)(*(int *)(iVar10 + local_88 * 4) + 0x10))) {
            local_8c = local_88 * 4;
            piVar4 = FUN_004a84a0(*(int *)(*(int *)(local_8c + iVar10) + 0x14));
            uStack_c8 = 0x488319;
            local_90 = piVar4;
            cocos2d::Color3B::Color3B((Color3B *)&local_80,'@','@','@');
            if (piVar4[0x17] == 1) {
              uStack_c8 = 0x488332;
              puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_9b,0x80,'@','@');
              local_80 = *puVar5;
              local_7e = *(undefined1 *)(puVar5 + 1);
            }
            else if (piVar4[0x17] == 2) {
              uStack_c8 = 0x48835a;
              puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_9e,0x80,'@',0x80);
              local_80 = *puVar5;
              local_7e = *(undefined1 *)(puVar5 + 1);
            }
            piVar3 = local_90;
            uVar8 = 0;
            piVar6 = *(int **)(iVar12 + 0x88);
            uVar11 = *(int *)(iVar12 + 0x8c) - (int)piVar6 >> 2;
            if (uVar11 != 0) {
              do {
                iVar12 = local_84;
                if (*(int *)(*piVar6 + 0x14) == *piVar4) break;
                uVar8 = uVar8 + 1;
                piVar6 = piVar6 + 1;
              } while (uVar8 < uVar11);
            }
            local_79 = local_7e;
            FUN_004024e0(auStack_dc,local_90 + 1);
            local_8 = 0;
            FUN_00591e00(&stack0xffffff08,"%s_Detail.png");
            local_8 = 0xffffffff;
            puVar7 = FUN_0043b590(local_78,*piVar3,in_stack_ffffff08);
            pvVar2 = local_94;
            local_8 = 1;
            puVar1 = *(undefined4 **)((int)local_94 + 4);
            if (*(undefined4 **)((int)local_94 + 8) == puVar1) {
              FUN_0043ce10(local_94,puVar1,puVar7);
            }
            else {
              FUN_0043cd30(extraout_ECX,puVar1,puVar7);
              *(int *)((int)pvVar2 + 4) = *(int *)((int)pvVar2 + 4) + 0x60;
            }
            local_8 = 0xffffffff;
            FUN_0043bfa0((int)local_78);
            iVar9 = *(int *)(iVar12 + 0x8c);
            pcVar13 = local_98;
          }
          iVar10 = *(int *)(iVar12 + 0x88);
          local_88 = local_88 + 1;
        } while (local_88 < (uint)(iVar9 - iVar10 >> 2));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004884f0(void *this,int *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  Color3B *this_00;
  byte *pbVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  uchar uVar16;
  Color3B local_46 [3];
  Color3B local_43 [3];
  char *local_40;
  int local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_25;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), iVar12 != 0)) {
    bVar15 = false;
    if (*(int *)(iVar12 + 0x254) != 0) {
      bVar15 = *(int *)(*(int *)(iVar12 + 0x254) + 0x158) == 1;
    }
    if (bVar15) {
      iVar12 = *(int *)(iVar12 + 0x398);
      uVar9 = 0;
      local_40 = (char *)(*(int *)((int)this + 0x11c) + 0x88);
      uVar5 = 0;
      iVar10 = *(int *)(iVar12 + 0x88);
      uVar11 = *(int *)(iVar12 + 0x8c) - iVar10 >> 2;
      local_30 = 0;
      if (uVar11 != 0) {
        local_25 = *local_40;
        do {
          if ((local_25 != '\0') || (0 < *(int *)(*(int *)(iVar10 + uVar5 * 4) + 0x10))) {
            uVar9 = uVar9 + 1;
          }
          uVar5 = uVar5 + 1;
          local_30 = uVar9;
        } while (uVar5 < uVar11);
      }
      local_3c = iVar12;
      if (local_30 != (param_1[1] - *param_1) / 0x60) {
LAB_00488834:
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
      local_30 = 0;
      if (uVar11 != 0) {
        local_38 = 0;
        iVar13 = DAT_0065b5cc;
        do {
          if ((*local_40 != '\0') || (0 < *(int *)(*(int *)(iVar10 + local_30 * 4) + 0x10))) {
            puVar6 = *(undefined4 **)(iVar13 + 0x84);
            uVar5 = 0;
            uVar9 = *(int *)(iVar13 + 0x88) - (int)puVar6 >> 2;
            if (uVar9 != 0) {
              do {
                piVar14 = (int *)*puVar6;
                if (*piVar14 == *(int *)(*(int *)(iVar10 + local_30 * 4) + 0x14)) goto LAB_00488620;
                uVar5 = uVar5 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar5 < uVar9);
            }
            piVar14 = (int *)0x0;
LAB_00488620:
            cocos2d::Color3B::Color3B((Color3B *)&local_2c,'@','@','@');
            if (piVar14[0x17] == 1) {
              uVar16 = '@';
              this_00 = local_43;
LAB_0048864d:
              puVar2 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,0x80,'@',uVar16);
              local_2c = *puVar2;
              local_2a = *(undefined1 *)(puVar2 + 1);
            }
            else if (piVar14[0x17] == 2) {
              uVar16 = 0x80;
              this_00 = local_46;
              goto LAB_0048864d;
            }
            iVar10 = local_38;
            uVar5 = 0;
            uVar9 = *(int *)(iVar12 + 0x8c) - *(int *)(iVar12 + 0x88) >> 2;
            if (uVar9 != 0) {
              do {
                piVar1 = *(int **)(*(int *)(iVar12 + 0x88) + uVar5 * 4);
                if (piVar1[5] == *piVar14) {
                  iVar12 = piVar1[0xc];
                  if (iVar12 == -1) {
                    piVar1 = (int *)*piVar1;
                    iVar12 = piVar1[7];
                    iVar13 = iVar12 + -1;
                    if (piVar1[9] / piVar1[5] < iVar12) {
                      iVar13 = piVar1[9] / piVar1[5];
                    }
                    iVar12 = (iVar13 - iVar12 / 2) * piVar1[1] + *piVar1;
                  }
                  goto LAB_00488694;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar9);
            }
            iVar12 = -1;
LAB_00488694:
            if (*(int *)(local_38 + *local_34) != *piVar14) goto LAB_00488834;
            pbVar3 = (byte *)FUN_00591e00((undefined1 *)local_24,"%s_Detail.png");
            iVar10 = *local_34 + iVar10;
            pbVar4 = pbVar3;
            if (0xf < *(uint *)(pbVar3 + 0x14)) {
              pbVar4 = *(byte **)pbVar3;
            }
            pbVar7 = (byte *)(iVar10 + 4);
            if (0xf < *(uint *)(iVar10 + 0x18)) {
              pbVar7 = *(byte **)(iVar10 + 4);
            }
            uVar5 = FUN_004031f0(pbVar7,*(uint *)(iVar10 + 0x14),pbVar4,*(uint *)(pbVar3 + 0x10));
            local_25 = (char)uVar5;
            if (0xf < local_10) {
              pvVar8 = local_24[0];
              if ((0xfff < local_10 + 1) &&
                 (pvVar8 = *(void **)((int)local_24[0] + -4),
                 0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar8);
            }
            if ((local_25 == '\0') ||
               (iVar10 = local_38 + *local_34,
               *(int *)(iVar10 + 0x1c) !=
               *(int *)(*(int *)(*(int *)(local_3c + 0x88) + local_30 * 4) + 0x10)))
            goto LAB_00488834;
            pbVar4 = (byte *)(piVar14 + 1);
            if (0xf < (uint)piVar14[6]) {
              pbVar4 = (byte *)piVar14[1];
            }
            pbVar3 = (byte *)(iVar10 + 0x20);
            if (0xf < *(uint *)(iVar10 + 0x34)) {
              pbVar3 = *(byte **)(iVar10 + 0x20);
            }
            uVar5 = FUN_004031f0(pbVar3,*(uint *)(iVar10 + 0x30),pbVar4,piVar14[5]);
            if (((((char)uVar5 == '\0') ||
                 (bVar15 = cocos2d::Color3B::operator!=
                                     ((Color3B *)(iVar10 + 0x58),(Color3B *)&local_2c), bVar15)) ||
                (*(int *)(local_38 + 0x50 + *local_34) != iVar12)) ||
               (*(char *)(local_38 + 0x5e + *local_34) != (char)-(char)(iVar12 >> 0x1f)))
            goto LAB_00488834;
            local_38 = local_38 + 0x60;
            iVar12 = local_3c;
            iVar13 = DAT_0065b5cc;
          }
          local_30 = local_30 + 1;
          iVar10 = *(int *)(iVar12 + 0x88);
        } while (local_30 < (uint)(*(int *)(iVar12 + 0x8c) - iVar10 >> 2));
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00488850(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  Color3B *this;
  undefined4 extraout_ECX_02;
  void *pvVar7;
  uint uVar8;
  bool bVar9;
  void *in_stack_fffffe04;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uchar uVar10;
  Color3B local_1ad [3];
  Color3B local_1aa [3];
  Color3B local_1a7 [3];
  Color3B local_1a4 [3];
  Color3B local_1a1 [3];
  Color3B local_19e [3];
  Color3B local_19b [3];
  void *local_198;
  int local_194;
  undefined1 *local_190;
  int local_18c;
  uint local_188;
  undefined2 local_184;
  undefined1 local_182;
  int *local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 local_178 [96];
  undefined1 local_118 [96];
  undefined1 local_b8 [100];
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b9890;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar8 = 0;
  local_188 = 0;
  puStack_20 = &stack0xfffffffc;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), puStack_20 = &stack0xfffffffc,
     iVar3 != 0)) {
    bVar9 = false;
    if (*(int *)(iVar3 + 0x254) != 0) {
      bVar9 = *(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 1;
    }
    puStack_20 = &stack0xfffffffc;
    if (bVar9) {
      local_198 = *(void **)(iVar3 + 0x398);
      local_194 = 0;
      local_18c = 0xc;
      puStack_20 = &stack0xfffffffc;
      do {
        iVar3 = *(int *)(local_18c + *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
        if (iVar3 == 0) {
          uStack_1d4 = 0x488930;
          cocos2d::Color3B::Color3B(local_19b,'\0','\0','\0');
          local_190 = (undefined1 *)&local_1e0;
          local_1e0 = local_1e0 & 0xffffff00;
          FUN_00402690(&local_1e0,&PTR_005ce008,0);
          local_14 = 0;
          in_stack_fffffe04 = (void *)((uint)in_stack_fffffe04 & 0xffffff00);
          FUN_00402690(&stack0xfffffe04,&PTR_005ce008,0);
          local_14 = 0xffffffff;
          puVar2 = FUN_0043b590(local_b8,local_194,in_stack_fffffe04);
          local_14 = 1;
          puVar1 = *(undefined4 **)((int)param_1 + 4);
          if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
            FUN_0043ce10(param_1,puVar1,puVar2);
            local_14 = 0xffffffff;
            FUN_0043bfa0((int)local_b8);
          }
          else {
            FUN_0043cd30(extraout_ECX,puVar1,puVar2);
            *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
            local_14 = 0xffffffff;
            FUN_0043bfa0((int)local_b8);
          }
        }
        else {
          iVar3 = *(int *)(iVar3 + 4);
          if (iVar3 == -1) {
            cocos2d::Color3B::Color3B((Color3B *)&local_17c,'@','@','@');
            iVar3 = 1;
            local_180 = *(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
            do {
              if (*(char *)(*(int *)((int)local_180 + local_18c) + iVar3) == '\0') {
                uVar5 = FUN_00506850(*(int *)((int)local_180 + local_18c));
                if ((char)uVar5 == '\0') {
                  if (*(char *)(extraout_ECX_00 + 1) == '\0') {
                    if (*(char *)(extraout_ECX_00 + 2) != '\0') {
                      puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_1a7,0x80,'@',0x80);
                      local_17c = *puVar4;
                      local_17a = *(undefined1 *)(puVar4 + 1);
                    }
                  }
                  else {
                    puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_1a4,0x80,'@','@');
                    local_17c = *puVar4;
                    local_17a = *(undefined1 *)(puVar4 + 1);
                  }
                }
                else {
                  puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_1a1,'@','@','@');
                  local_17c = *puVar4;
                  local_17a = *(undefined1 *)(puVar4 + 1);
                }
                goto LAB_00488b26;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 3);
            puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_19e,'@',0x80,'@');
            local_17c = *puVar4;
            local_17a = *(undefined1 *)(puVar4 + 1);
LAB_00488b26:
            local_190 = (undefined1 *)&local_1e0;
            local_1e0 = local_1e0 & 0xffffff00;
            FUN_00402690(&local_1e0,&PTR_005ce008,0);
            local_14 = 2;
            in_stack_fffffe04 = (void *)((uint)in_stack_fffffe04 & 0xffffff00);
            FUN_00402690(&stack0xfffffe04,&PTR_005ce008,0);
            local_14 = 0xffffffff;
            puVar2 = FUN_0043b590(local_118,
                                  *(undefined4 *)
                                   (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) +
                                            local_18c) + 4),in_stack_fffffe04);
            local_14 = 3;
            puVar1 = *(undefined4 **)((int)param_1 + 4);
            if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
              FUN_0043ce10(param_1,puVar1,puVar2);
              local_14 = 0xffffffff;
              FUN_0043bfa0((int)local_118);
            }
            else {
              FUN_0043cd30(extraout_ECX_01,puVar1,puVar2);
              *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
              local_14 = 0xffffffff;
              FUN_0043bfa0((int)local_118);
            }
          }
          else {
            local_180 = FUN_004a84a0(iVar3);
            cocos2d::Color3B::Color3B((Color3B *)&local_184,'@','@','@');
            if (local_180[0x17] == 1) {
              uVar10 = '@';
              this = local_1aa;
LAB_00488c51:
              puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(this,0x80,'@',uVar10);
              local_184 = *puVar4;
              local_182 = *(undefined1 *)(puVar4 + 1);
            }
            else if (local_180[0x17] == 2) {
              uVar10 = 0x80;
              this = local_1ad;
              goto LAB_00488c51;
            }
            local_190 = (undefined1 *)FUN_0049d510(local_198,*local_180,'\0');
            if ((int)local_190 < 0) {
              puVar6 = (uint *)FUN_00591e00((undefined1 *)local_54,"%s - will not buy here");
              local_188 = uVar8 | 1;
            }
            else {
              puVar6 = FUN_004024e0(local_3c,local_180 + 1);
              local_188 = uVar8 | 2;
            }
            iVar3 = local_18c;
            local_190 = (undefined1 *)&local_1e0;
            local_1e0 = *puVar6;
            uStack_1dc = puVar6[1];
            uStack_1d8 = puVar6[2];
            uStack_1d4 = puVar6[3];
            puVar6[4] = 0;
            puVar6[5] = 0xf;
            *(undefined1 *)puVar6 = 0;
            local_14 = 6;
            FUN_00591e00(&stack0xfffffe04,"%s_Detail.png");
            local_14 = CONCAT31(local_14._1_3_,5);
            puVar2 = FUN_0043b590(local_178,
                                  *(undefined4 *)
                                   (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + iVar3
                                            ) + 4),in_stack_fffffe04);
            local_14 = 7;
            puVar1 = *(undefined4 **)((int)param_1 + 4);
            if (*(undefined4 **)((int)param_1 + 8) == puVar1) {
              FUN_0043ce10(param_1,puVar1,puVar2);
            }
            else {
              FUN_0043cd30(extraout_ECX_02,puVar1,puVar2);
              *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
            }
            FUN_0043bfa0((int)local_178);
            local_14 = 4;
            if ((local_188 & 2) != 0) {
              local_188 = local_188 & 0xfffffffd;
              if (0xf < local_28) {
                pvVar7 = local_3c[0];
                if ((0xfff < local_28 + 1) &&
                   (pvVar7 = *(void **)((int)local_3c[0] + -4),
                   0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_00488eba;
                FUN_005adb3f(pvVar7);
              }
              local_2c = 0;
              local_28 = 0xf;
              local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
            }
            local_14 = 0xffffffff;
            uVar8 = local_188;
            if ((local_188 & 1) != 0) {
              local_188 = local_188 & 0xfffffffe;
              if (0xf < local_40) {
                pvVar7 = local_54[0];
                if ((0xfff < local_40 + 1) &&
                   (pvVar7 = *(void **)((int)local_54[0] + -4),
                   0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar7)))) {
LAB_00488eba:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(pvVar7);
              }
              local_44 = 0;
              local_40 = 0xf;
              local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
              uVar8 = local_188;
            }
          }
        }
        local_194 = local_194 + 1;
        local_18c = local_18c + 4;
      } while (local_18c < 0x44);
    }
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_00488ee0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Color3B *pCVar4;
  undefined2 *puVar5;
  int iVar6;
  byte *pbVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  void *pvVar8;
  void *pvVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_60;
  int local_5c;
  undefined2 local_54;
  undefined1 local_52;
  char local_4d;
  undefined2 local_4c;
  undefined1 local_4a;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b98c8;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar2;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), iVar12 != 0)) {
    bVar13 = false;
    if (*(int *)(iVar12 + 0x254) != 0) {
      bVar13 = *(int *)(*(int *)(iVar12 + 0x254) + 0x158) == 1;
    }
    if ((bVar13) && ((param_1[1] - *param_1) / 0x60 == 0xe)) {
      pvVar9 = *(void **)(iVar12 + 0x398);
      iVar12 = 0;
      local_60 = 0;
      local_5c = 0xc;
      pcVar10 = Color3B_exref;
      do {
        iVar6 = *(int *)(local_5c + *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
        if (iVar6 == 0) {
          piVar11 = (int *)(*param_1 + iVar12);
          if (*piVar11 != local_60) break;
          pbVar7 = (byte *)(piVar11 + 1);
          if (0xf < (uint)piVar11[6]) {
            pbVar7 = (byte *)piVar11[1];
          }
          uVar3 = FUN_004031f0(pbVar7,piVar11[5],(byte *)&PTR_005ce008,0);
          if (((char)uVar3 == '\0') || (piVar11[7] != -1)) break;
          pbVar7 = (byte *)(piVar11 + 8);
          if (0xf < (uint)piVar11[0xd]) {
            pbVar7 = (byte *)piVar11[8];
          }
          uVar3 = FUN_004031f0(pbVar7,piVar11[0xc],(byte *)&PTR_005ce008,0);
          if ((char)uVar3 == '\0') break;
          pCVar4 = (Color3B *)(*pcVar10)(0,0,0,uVar2);
LAB_00489124:
          bVar13 = cocos2d::Color3B::operator!=((Color3B *)(piVar11 + 0x16),pCVar4);
          if (((bVar13) || (*(int *)(iVar12 + 0x50 + *param_1) != -999)) ||
             (*(char *)(iVar12 + 0x5e + *param_1) != '\x01')) break;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
          if (iVar6 == -1) {
            (*pcVar10)(0x40,0x40,0x40,uVar2);
            uVar3 = FUN_00506830(*(int *)(local_5c + *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8)
                                         ));
            if ((char)uVar3 == '\0') {
              uVar3 = FUN_00506850(extraout_ECX);
              if ((char)uVar3 != '\0') {
                uVar16 = 0x40;
                uVar15 = 0x40;
                uVar14 = 0x40;
                goto LAB_00489093;
              }
              if (*(char *)(extraout_ECX_00 + 1) != '\0') {
                uVar16 = 0x40;
LAB_0048908c:
                uVar15 = 0x40;
                uVar14 = 0x80;
                goto LAB_00489093;
              }
              if (*(char *)(extraout_ECX_00 + 2) != '\0') {
                uVar16 = 0x80;
                goto LAB_0048908c;
              }
            }
            else {
              uVar16 = 0x40;
              uVar15 = 0x80;
              uVar14 = 0x40;
LAB_00489093:
              puVar5 = (undefined2 *)(*pcVar10)(uVar14,uVar15,uVar16,uVar2);
              local_4c = *puVar5;
              local_4a = *(undefined1 *)(puVar5 + 1);
            }
            piVar11 = (int *)(*param_1 + iVar12);
            if (*piVar11 ==
                *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_5c) + 4))
            {
              pbVar7 = (byte *)(piVar11 + 1);
              if (0xf < (uint)piVar11[6]) {
                pbVar7 = (byte *)piVar11[1];
              }
              uVar3 = FUN_004031f0(pbVar7,piVar11[5],(byte *)&PTR_005ce008,0);
              if (((char)uVar3 != '\0') && (piVar11[7] == -1)) {
                pbVar7 = (byte *)(piVar11 + 8);
                if (0xf < (uint)piVar11[0xd]) {
                  pbVar7 = (byte *)piVar11[8];
                }
                uVar3 = FUN_004031f0(pbVar7,piVar11[0xc],(byte *)&PTR_005ce008,0);
                if ((char)uVar3 != '\0') {
                  pCVar4 = (Color3B *)&local_4c;
                  goto LAB_00489124;
                }
              }
            }
            break;
          }
          piVar11 = FUN_004a84a0(iVar6);
          (*pcVar10)(0x40,0x40,0x40,uVar2);
          if (piVar11[0x17] == 1) {
            uVar14 = 0x40;
LAB_00489188:
            puVar5 = (undefined2 *)(*pcVar10)(0x80,0x40,uVar14,uVar2);
            local_54 = *puVar5;
            local_52 = *(undefined1 *)(puVar5 + 1);
          }
          else if (piVar11[0x17] == 2) {
            uVar14 = 0x80;
            goto LAB_00489188;
          }
          iVar6 = FUN_0049d510(pvVar9,*piVar11,'\0');
          local_38 = 0;
          local_34 = 0xf;
          local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
          local_8 = 0;
          if (iVar6 < 0) {
            piVar11 = (int *)FUN_00591e00((undefined1 *)local_30,"%s - will not buy here");
            FUN_00413230(local_48,piVar11);
            if (0xf < local_1c) {
              pvVar8 = local_30[0];
              if ((0xfff < local_1c + 1) &&
                 (pvVar8 = *(void **)((int)local_30[0] + -4),
                 0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) goto LAB_004893d6;
              FUN_005adb3f(pvVar8);
            }
            local_20 = 0;
            local_1c = 0xf;
            local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          }
          else {
            std::basic_string<>::operator=
                      ((basic_string<> *)local_48,(basic_string<> *)(piVar11 + 1));
          }
          if (*(int *)(iVar12 + *param_1) !=
              *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_5c) + 4)) {
LAB_004893b0:
            if (0xf < local_34) {
              pvVar9 = local_48[0];
              if ((0xfff < local_34 + 1) &&
                 (pvVar9 = *(void **)((int)local_48[0] + -4),
                 0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9)))) {
LAB_004893d6:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar9);
            }
            break;
          }
          pbVar7 = (byte *)FUN_00591e00((undefined1 *)local_30,"%s_Detail.png");
          uVar3 = FUN_00413e90((byte *)(*param_1 + 4 + iVar12),pbVar7);
          local_4d = (char)uVar3;
          if (0xf < local_1c) {
            pvVar8 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar8 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) goto LAB_004893d6;
            FUN_005adb3f(pvVar8);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          if ((((local_4d != '\0') ||
               (iVar1 = *param_1,
               *(int *)(iVar1 + 0x1c + iVar12) !=
               *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_5c) + 8)))
              || (uVar3 = FUN_00413e90((byte *)(iVar1 + 0x20 + iVar12),(byte *)local_48),
                 (char)uVar3 != '\0')) ||
             (((bVar13 = cocos2d::Color3B::operator!=
                                   ((Color3B *)(iVar1 + 0x58 + iVar12),(Color3B *)&local_54), bVar13
               || (*(int *)(iVar12 + 0x50 + *param_1) != iVar6)) ||
              ((bool)*(char *)(iVar12 + *param_1 + 0x5e) != iVar6 < 1)))) goto LAB_004893b0;
          local_8 = 0xffffffff;
          pcVar10 = Color3B_exref;
          if (0xf < local_34) {
            pvVar8 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar8 = *(void **)((int)local_48[0] + -4),
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8)))) goto LAB_004893d6;
            FUN_005adb3f(pvVar8);
            pcVar10 = Color3B_exref;
          }
        }
        iVar12 = iVar12 + 0x60;
        local_5c = local_5c + 4;
        local_60 = local_60 + 1;
      } while (local_5c < 0x44);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00489410(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *in_stack_fffffedc;
  byte abStack_108 [12];
  undefined4 uStack_fc;
  Color3B local_cf [3];
  void *local_cc;
  void *local_c8;
  byte *local_c4;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [100];
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  void *local_2c;
  void *pvStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b990e;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar10 = 0;
  iVar8 = *(int *)((int)this + 0x11c);
  local_cc = param_1;
  local_bc = *(int *)(DAT_0065b3d4 + 0x398);
  iVar9 = *(int *)(local_bc + 100);
  local_c8 = this;
  local_c0 = iVar8;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(local_bc + 0x68) - iVar9 >> 2 != 0) {
    do {
      if ((*(int *)(iVar8 + 0x54) == -1) ||
         (*(int *)(*(int *)(**(int **)(iVar9 + uVar10 * 4) + 4) + 0x80) == *(int *)(iVar8 + 0x54)))
      {
        if (*(int *)(iVar8 + 0x58) != -1) {
          iVar8 = *(int *)(**(int **)(iVar9 + uVar10 * 4) + 4);
          local_c4 = (byte *)((int)local_c8 + 0x84);
          if (0xf < *(uint *)((int)local_c8 + 0x98)) {
            local_c4 = *(byte **)local_c4;
          }
          pbVar6 = (byte *)(iVar8 + 0x50);
          if (0xf < *(uint *)(iVar8 + 100)) {
            pbVar6 = *(byte **)(iVar8 + 0x50);
          }
          uVar3 = FUN_004031f0(pbVar6,*(uint *)(iVar8 + 0x60),local_c4,
                               *(uint *)((int)local_c8 + 0x94));
          iVar8 = local_c0;
          if ((char)uVar3 == '\0') goto LAB_004896cb;
        }
        FUN_00591e00((undefined1 *)&local_3c,"%s.png");
        local_14 = 0;
        if (*(int *)(*(int *)(**(int **)(*(int *)(local_bc + 100) + uVar10 * 4) + 4) + 0x30) < 2) {
          ppvVar4 = (void **)FUN_00591e00((undefined1 *)local_54,"%s.png");
          if (&local_3c != ppvVar4) {
            FUN_00401b20((int *)&local_3c);
            local_3c = *ppvVar4;
            pvStack_38 = ppvVar4[1];
            pvStack_34 = ppvVar4[2];
            pvStack_30 = ppvVar4[3];
            local_2c = ppvVar4[4];
            pvStack_28 = ppvVar4[5];
            ppvVar4[4] = (void *)0x0;
            ppvVar4[5] = (void *)0xf;
            *(undefined1 *)ppvVar4 = 0;
          }
          if (0xf < local_40) {
            pvVar7 = local_54[0];
            if ((0xfff < local_40 + 1) &&
               (pvVar7 = *(void **)((int)local_54[0] + -4),
               0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar7)))) goto LAB_00489705;
            FUN_005adb3f(pvVar7);
          }
        }
        uStack_fc = 0x4895fa;
        cocos2d::Color3B::Color3B(local_cf,'\0',0x80,'\0');
        local_c4 = abStack_108;
        FUN_004024e0(abStack_108,
                     (undefined4 *)
                     (*(int *)(**(int **)(*(int *)(local_bc + 100) + uVar10 * 4) + 4) + 0x38));
        local_14._0_1_ = 1;
        FUN_004024e0(&stack0xfffffedc,&local_3c);
        local_14._0_1_ = 0;
        puVar5 = FUN_0043b590(local_b8,uVar10,in_stack_fffffedc);
        pvVar7 = local_cc;
        local_14 = CONCAT31(local_14._1_3_,2);
        puVar1 = *(undefined4 **)((int)local_cc + 4);
        if (*(undefined4 **)((int)local_cc + 8) == puVar1) {
          FUN_0043ce10(local_cc,puVar1,puVar5);
        }
        else {
          FUN_0043cd30(extraout_ECX,puVar1,puVar5);
          *(int *)((int)pvVar7 + 4) = *(int *)((int)pvVar7 + 4) + 0x60;
        }
        FUN_0043bfa0((int)local_b8);
        local_14 = 0xffffffff;
        iVar8 = local_c0;
        if ((void *)0xf < pvStack_28) {
          pvVar7 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar7 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar7)))) {
LAB_00489705:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
          iVar8 = local_c0;
        }
      }
LAB_004896cb:
      uVar10 = uVar10 + 1;
      iVar9 = *(int *)(local_bc + 100);
      puVar2 = puStack_20;
    } while (uVar10 < (uint)(*(int *)(local_bc + 0x68) - iVar9 >> 2));
  }
  puStack_20 = puVar2;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_00489710(void *this,int *param_1)

{
  byte ****ppppbVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte *****pppppbVar4;
  Color3B *pCVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  byte *local_78;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  int local_60;
  byte *local_5c;
  uint local_58;
  void *local_54 [5];
  uint local_40;
  byte ****local_3c;
  byte ***pppbStack_38;
  byte ***pppbStack_34;
  byte ***pppbStack_30;
  byte ***local_2c;
  byte ***pppbStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b9948;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puVar2 = &stack0xfffffffc;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar11 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), puVar2 = &stack0xfffffffc,
     iVar11 != 0)) {
    iVar11 = *(int *)(iVar11 + 0x254);
    bVar15 = false;
    if (iVar11 != 0) {
      bVar15 = *(int *)(iVar11 + 0x158) == 1;
    }
    puVar2 = &stack0xfffffffc;
    if (bVar15) {
      uVar12 = 0;
      local_60 = *(int *)((int)this + 0x11c);
      local_58 = 0;
      local_68 = *(int *)(DAT_0065b3d4 + 0x398);
      puVar10 = *(undefined4 **)(local_68 + 100);
      local_64 = (uint)((int)*(undefined4 **)(local_68 + 0x68) + (3 - (int)puVar10)) >> 2;
      if (*(undefined4 **)(local_68 + 0x68) < puVar10) {
        local_64 = 0;
      }
      if (local_64 != 0) {
        local_6c = *(int *)(local_60 + 0x54);
        puStack_20 = &stack0xfffffffc;
        do {
          if ((local_6c == -1) || (*(int *)(*(int *)(*(int *)*puVar10 + 4) + 0x80) == local_6c)) {
            if (*(int *)(local_60 + 0x58) != -1) {
              iVar11 = *(int *)(*(int *)*puVar10 + 4);
              local_5c = (byte *)((int)this + 0x84);
              if (0xf < *(uint *)((int)this + 0x98)) {
                local_5c = *(byte **)local_5c;
              }
              pbVar6 = (byte *)(iVar11 + 0x50);
              if (0xf < *(uint *)(iVar11 + 100)) {
                pbVar6 = *(byte **)(iVar11 + 0x50);
              }
              uVar3 = FUN_004031f0(pbVar6,*(uint *)(iVar11 + 0x60),local_5c,
                                   *(uint *)((int)this + 0x94));
              if ((char)uVar3 == '\0') goto LAB_00489846;
            }
            local_58 = local_58 + 1;
          }
LAB_00489846:
          uVar12 = uVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != local_64);
      }
      puVar2 = puStack_20;
      if (local_58 == (param_1[1] - *param_1) / 0x60) {
        local_58 = 0;
        iVar11 = *(int *)(local_68 + 100);
        if (*(int *)(local_68 + 0x68) - iVar11 >> 2 != 0) {
          local_5c = (byte *)0x0;
          iVar14 = local_60;
          do {
            if ((*(int *)(iVar14 + 0x54) == -1) ||
               (*(int *)(*(int *)(**(int **)(iVar11 + local_58 * 4) + 4) + 0x80) ==
                *(int *)(iVar14 + 0x54))) {
              if (*(int *)(iVar14 + 0x58) != -1) {
                iVar11 = *(int *)(**(int **)(iVar11 + local_58 * 4) + 4);
                pbVar6 = (byte *)((int)this + 0x84);
                if (0xf < *(uint *)((int)this + 0x98)) {
                  pbVar6 = *(byte **)((int)this + 0x84);
                }
                pbVar7 = (byte *)(iVar11 + 0x50);
                if (0xf < *(uint *)(iVar11 + 100)) {
                  pbVar7 = *(byte **)(iVar11 + 0x50);
                }
                uVar12 = FUN_004031f0(pbVar7,*(uint *)(iVar11 + 0x60),pbVar6,
                                      *(uint *)((int)this + 0x94));
                iVar14 = local_60;
                if ((char)uVar12 == '\0') goto LAB_00489af3;
              }
              uVar12 = local_58 * 4;
              local_64 = uVar12;
              FUN_00591e00((undefined1 *)&local_3c,"%s.png");
              local_14 = 0;
              if (*(int *)(*(int *)(**(int **)(uVar12 + *(int *)(local_68 + 100)) + 4) + 0x30) < 1)
              {
                pppppbVar4 = (byte *****)FUN_00591e00((undefined1 *)local_54,"%s.png");
                if (&local_3c != pppppbVar4) {
                  FUN_00401b20((int *)&local_3c);
                  local_3c = *pppppbVar4;
                  pppbStack_38 = (byte ***)pppppbVar4[1];
                  pppbStack_34 = (byte ***)pppppbVar4[2];
                  pppbStack_30 = (byte ***)pppppbVar4[3];
                  local_2c = (byte ***)pppppbVar4[4];
                  pppbStack_28 = (byte ***)pppppbVar4[5];
                  pppppbVar4[4] = (byte ****)0x0;
                  pppppbVar4[5] = (byte ****)0xf;
                  *(undefined1 *)pppppbVar4 = 0;
                }
                if (0xf < local_40) {
                  pvVar8 = local_54[0];
                  if ((0xfff < local_40 + 1) &&
                     (pvVar8 = *(void **)((int)local_54[0] + -4),
                     0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8)))) goto LAB_00489b58;
                  FUN_005adb3f(pvVar8);
                }
              }
              ppppbVar1 = local_3c;
              puVar13 = (uint *)(local_5c + *param_1);
              if (*puVar13 == local_58) {
                puVar9 = puVar13 + 1;
                pppppbVar4 = &local_3c;
                if ((byte ****)0xf < pppbStack_28) {
                  pppppbVar4 = (byte *****)local_3c;
                }
                if (0xf < puVar13[6]) {
                  puVar9 = (uint *)puVar13[1];
                }
                uVar12 = FUN_004031f0((byte *)puVar9,puVar13[5],(byte *)pppppbVar4,(uint)local_2c);
                if (((char)uVar12 != '\0') && (puVar13[7] == 0xffffffff)) {
                  iVar11 = *(int *)(**(int **)(local_64 + *(int *)(local_68 + 100)) + 4);
                  local_78 = (byte *)(iVar11 + 0x38);
                  if (0xf < *(uint *)(iVar11 + 0x4c)) {
                    local_78 = *(byte **)local_78;
                  }
                  puVar9 = puVar13 + 8;
                  if (0xf < puVar13[0xd]) {
                    puVar9 = (uint *)puVar13[8];
                  }
                  uVar12 = FUN_004031f0((byte *)puVar9,puVar13[0xc],local_78,
                                        *(uint *)(iVar11 + 0x48));
                  if ((char)uVar12 != '\0') {
                    pCVar5 = (Color3B *)
                             cocos2d::Color3B::Color3B
                                       ((Color3B *)((int)&local_6c + 1),'\0',0x80,'\0');
                    bVar15 = cocos2d::Color3B::operator!=((Color3B *)(puVar13 + 0x16),pCVar5);
                    if (((!bVar15) &&
                        (*(int *)(local_5c + *param_1 + 0x50) ==
                         *(int *)(*(int *)(local_64 + *(int *)(local_68 + 100)) + 4))) &&
                       (local_5c[*param_1 + 0x5e] == 0)) {
                      local_14 = 0xffffffff;
                      iVar14 = local_60;
                      if ((byte ****)0xf < pppbStack_28) {
                        pppppbVar4 = (byte *****)ppppbVar1;
                        if ((0xfff < (int)pppbStack_28 + 1U) &&
                           (pppppbVar4 = (byte *****)ppppbVar1[-1],
                           (byte *)0x1f < (byte *)((int)ppppbVar1 + (-4 - (int)pppppbVar4))))
                        goto LAB_00489b58;
                        FUN_005adb3f(pppppbVar4);
                        iVar14 = local_60;
                      }
                      goto LAB_00489af3;
                    }
                  }
                }
              }
              puVar2 = puStack_20;
              if ((byte ****)0xf < pppbStack_28) {
                pppppbVar4 = (byte *****)ppppbVar1;
                if ((0xfff < (int)pppbStack_28 + 1U) &&
                   (pppppbVar4 = (byte *****)ppppbVar1[-1],
                   (byte *)0x1f < (byte *)((int)ppppbVar1 + (-4 - (int)pppppbVar4)))) {
LAB_00489b58:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(pppppbVar4);
                puVar2 = puStack_20;
              }
              break;
            }
LAB_00489af3:
            local_58 = local_58 + 1;
            local_5c = local_5c + 0x60;
            iVar11 = *(int *)(local_68 + 100);
            puVar2 = puStack_20;
          } while (local_58 < (uint)(*(int *)(local_68 + 0x68) - iVar11 >> 2));
        }
      }
    }
  }
  puStack_20 = puVar2;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_00489b70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x11c) != -0x44) {
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x50) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x11c);
    iVar2 = *(int *)(iVar1 + 0x50);
    if (iVar2 < 0) {
      iVar2 = *(int *)(iVar1 + 0x5c);
    }
    else {
      *(int *)(iVar1 + 0x5c) = iVar2;
      *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    }
    if (-1 < iVar2) {
      *(undefined4 *)(iVar1 + 0x48) = 1;
      *(undefined4 *)(iVar1 + 0x60) = 1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  return;
}


void __fastcall FUN_00489bc0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x11c);
  if (*(int *)(iVar2 + 0xdc) == -1) {
    uVar5 = 3;
    pcVar4 = "All";
  }
  else {
    pcVar4 = (&PTR_s___Brand_New_005dd894)[*(int *)(iVar2 + 0xdc)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  FUN_00402690((void *)(param_1 + 0x9c),pcVar4,uVar5);
  if (*(int *)(iVar2 + 0xe0) == -1) {
    uVar5 = 0x10;
    pcVar4 = "All Module Types";
  }
  else {
    pcVar4 = (&PTR_s_Unknown_005dda50)[*(int *)(&DAT_005ddc54 + *(int *)(iVar2 + 0xe0) * 4)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  FUN_00402690((void *)(param_1 + 0xb4),pcVar4,uVar5);
  *(undefined4 *)(iVar2 + 0xe4) = 0xffffffff;
  return;
}


void __fastcall FUN_00489c60(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x11c) != -0xcc) {
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0xd8) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x11c);
    iVar2 = *(int *)(iVar1 + 0xd8);
    if (-1 < iVar2) {
      *(int *)(iVar1 + 0xe4) = iVar2;
      *(undefined4 *)(iVar1 + 0xd4) = 0xffffffff;
      *(uint *)(iVar1 + 0xd0) = (uint)(-1 < iVar2);
      return;
    }
    *(uint *)(iVar1 + 0xd0) = (uint)(-1 < *(int *)(iVar1 + 0xe4));
  }
  return;
}


void __fastcall FUN_00489cc0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x11c);
  if (*(int *)(iVar2 + 0x54) == -1) {
    uVar5 = 3;
    pcVar4 = "Any";
  }
  else {
    pcVar4 = (&PTR_s_Hap_Node_005dd91c)[*(int *)(iVar2 + 0x54)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  FUN_00402690((void *)(param_1 + 0x6c),pcVar4,uVar5);
  if (*(int *)(iVar2 + 0x58) == -1) {
    uVar5 = 10;
    pcVar4 = "All Brands";
  }
  else {
    pcVar4 = (&PTR_s_ConnexT_005dd900)[*(int *)(iVar2 + 0x58)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  FUN_00402690((void *)(param_1 + 0x84),pcVar4,uVar5);
  *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
  return;
}


void __fastcall FUN_00489d50(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1[0x48] - param_1[0x47] >> 0x1f;
  if ((param_1[0x48] - param_1[0x47]) / 0x44 + iVar2 != iVar2) {
    iVar2 = 0;
    do {
      uVar1 = uVar1 + 1;
      *(undefined4 *)(iVar2 + 0x1c + param_1[0x47]) = 0;
      *(undefined4 *)(iVar2 + 4 + param_1[0x47]) = 0;
      *(undefined4 *)(iVar2 + 0x18 + param_1[0x47]) = 0;
      *(undefined4 *)(iVar2 + 8 + param_1[0x47]) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0xc + param_1[0x47]) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x10 + param_1[0x47]) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x14 + param_1[0x47]) = 0xffffffff;
      iVar2 = iVar2 + 0x44;
    } while (uVar1 < (uint)((param_1[0x48] - param_1[0x47]) / 0x44));
  }
  param_1[0x46] = -1;
  uVar1 = 0;
  param_1[0x44] = -1;
  param_1[0x45] = -1;
  param_1[0x43] = 0;
  param_1[0x36] = -1;
  param_1[0x3d] = -1;
  param_1[0x34] = -1;
  param_1[0x39] = -1;
  param_1[0x35] = -1;
  param_1[0x33] = 0;
  param_1[0x37] = -1;
  param_1[0x3b] = 0;
  param_1[0x3f] = -1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = -1;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (param_1[1] - *param_1 >> 2 != 0) {
    do {
      FUN_0049f3a0(*(void **)(*param_1 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[1] - *param_1 >> 2));
  }
  FUN_00489cc0((int)param_1);
  FUN_00489bc0((int)param_1);
  return;
}


void __fastcall FUN_00489ef0(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[1] - *param_1 >> 2 != 0) {
    do {
      FUN_0049f3a0(*(void **)(*param_1 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[1] - *param_1 >> 2));
  }
  return;
}


void __thiscall FUN_00489f20(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  byte *in_stack_ffffff60;
  char *pcVar8;
  uint uVar9;
  void *local_60 [5];
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9988;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar1 + 4) == 1) {
    iVar6 = *(int *)(iVar1 + 0x18);
    if (iVar6 < 1000) {
      if ((iVar6 == -1) || (*(int *)(iVar1 + 0x1c) == 0)) goto LAB_0048a27f;
      piVar2 = FUN_004a84a0(iVar6);
      iVar4 = iVar6;
    }
    else {
      if (*(int *)(iVar1 + 0x1c) == 0) goto LAB_0048a27f;
      FUN_004024e0(&stack0xffffff60,
                   *(undefined4 **)
                    (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + (iVar6 + -1000) * 4) + 0x58));
      piVar2 = (int *)FUN_004a8380(in_stack_ffffff60);
      iVar4 = iVar6 + -1000;
    }
    if (piVar2 == (int *)0x0) goto LAB_0048a27f;
    pvVar7 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    if (999 < iVar6) {
      iVar6 = *(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar4 * 4);
      FUN_004024e0(&stack0xffffff60,*(undefined4 **)(iVar6 + 0x58));
      piVar3 = (int *)FUN_004a8380(in_stack_ffffff60);
      if (piVar3 == piVar2) {
        iVar6 = *(int *)(iVar6 + 0x58);
        iVar1 = *(int *)(iVar1 + 0x1c);
        if (*(int *)(iVar6 + 0x18) < iVar1) {
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                       "`^Error: only %d units of item available for contract");
          FUN_00413230((void *)((int)this + 0x54),piVar2);
          if (0xf < local_1c) {
            pvVar7 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar7 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar7);
          }
          if (param_1 != (void *)0x0) {
            FUN_0042de40(param_1,"`^Error: only %d units of item available for contract");
          }
          goto LAB_0048a27f;
        }
        iVar6 = *(int *)(iVar6 + 0x28);
        if (iVar6 == -1) {
          iVar6 = piVar2[0x16];
        }
        iVar6 = iVar1 * iVar6;
        iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c);
        if (iVar6 - iVar4 != 0 && iVar4 <= iVar6) {
          FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough credit in your account",0x2a)
          ;
          if (param_1 != (void *)0x0) {
            FUN_0042de40(param_1,"`^Error: not enough credit in your account");
          }
          goto LAB_0048a27f;
        }
        iVar4 = FUN_00507200(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),piVar2);
        if (iVar4 < iVar1) {
          if (piVar2[0x17] == 0) {
            FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough room in your hold",0x25);
            if (param_1 != (void *)0x0) {
              FUN_0042de40(param_1,"`^Error: not enough room in your hold");
            }
            FUN_00402690((void *)((int)this + 0x54),
                         "`!Note : not enough room available in cargo pods",0x30);
            if (param_1 != (void *)0x0) {
              FUN_0042de40(param_1,"`!Note : not enough room available in cargo pods");
            }
          }
          else {
            piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                         "`^Error: not enough `!%s `^space in your hold.");
            FUN_00413230((void *)((int)this + 0x54),piVar2);
            if (0xf < local_1c) {
              pvVar7 = local_30[0];
              if ((0xfff < local_1c + 1) &&
                 (pvVar7 = *(void **)((int)local_30[0] + -4),
                 0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar7);
            }
            if (param_1 != (void *)0x0) {
              FUN_0042de40(param_1,"`^Error: not enough `!%s `^space in your hold.");
            }
          }
          goto LAB_0048a27f;
        }
        if (iVar6 == 0) {
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                       "`7Will load `%%%dx `%c%s `7at no cost.");
        }
        else {
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                       "`7Will purchase `%%%dx `%c%s for `$%d `7credits.");
        }
        FUN_00413230((void *)((int)this + 0x54),piVar2);
        goto LAB_0048a21b;
      }
    }
    iVar6 = FUN_0049d2f0(pvVar7,*piVar2,*(int *)(iVar1 + 0x1c),'\x01');
    iVar5 = FUN_0049d160(pvVar7,*piVar2,'\x01');
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_8 = 0;
    if (iVar5 == piVar2[0x16]) {
      uVar9 = 0x24;
      pcVar8 = "`7Price here is at market average.\n\n";
    }
    else if (piVar2[0x16] < iVar5) {
      uVar9 = 0x4c;
      pcVar8 = "`7Price here is `@above`7 market average. Purchase is `@not `7recommended.\n\n";
    }
    else {
      uVar9 = 0x44;
      pcVar8 = "`7Price here is `0below`7 market average. Purchase is recommended.\n\n";
    }
    FUN_00402690(local_48,pcVar8,uVar9);
    iVar4 = FUN_0049cf60(pvVar7,iVar4);
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar4 < iVar1) {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough goods available on station",0x2e)
      ;
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: not enough goods available on station");
      }
    }
    else {
      iVar4 = FUN_00507200(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),piVar2);
      if (iVar4 < iVar1) {
        if (piVar2[0x17] == 0) {
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                       "%s`^Error: not enough room in your hold.\n`!Note : not enough room available in cargo pods"
                                      );
          FUN_00413230((void *)((int)this + 0x54),piVar2);
          if (0xf < local_1c) {
            pvVar7 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar7 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) goto LAB_0048a241;
            FUN_005adb3f(pvVar7);
          }
          if (param_1 != (void *)0x0) {
            FUN_0042de40(param_1,"`^Error: not enough room in your hold");
            FUN_0042de40(param_1,"`!Note : not enough room available in cargo pods");
          }
        }
        else {
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                       "%s`^Error: not enough `!%s `^space in your hold.");
          FUN_00413230((void *)((int)this + 0x54),piVar2);
          if (0xf < local_1c) {
            pvVar7 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar7 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) goto LAB_0048a241;
            FUN_005adb3f(pvVar7);
          }
          if (param_1 != (void *)0x0) {
            FUN_0042de40(param_1,"%s`^Error: not enough `!%s `^space in your hold.");
            FUN_0042de40(param_1,"`!Note : not enough room available in cargo pods");
          }
        }
      }
      else if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar6) {
        FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough credit in your account",0x2a);
        if (param_1 != (void *)0x0) {
          FUN_0042de40(param_1,"`^Error: not enough credit in your account");
        }
      }
      else {
        if (iVar6 == 0) {
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_30,
                                       "`7You will load `%%%dx `%c%s `7at no cost.");
          FUN_00413230((void *)((int)this + 0x54),piVar2);
        }
        else {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (iVar5 == piVar2[0x16]) {
            uVar9 = 0x24;
            pcVar8 = "`7Price here is at market average.\n\n";
          }
          else if (piVar2[0x16] < iVar5) {
            uVar9 = 0x4c;
            pcVar8 = 
            "`7Price here is `@above`7 market average. Purchase is `@not `7recommended.\n\n";
          }
          else {
            uVar9 = 0x44;
            pcVar8 = "`7Price here is `0below`7 market average. Purchase is recommended.\n\n";
          }
          FUN_00402690(local_30,pcVar8,uVar9);
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_60,
                                       "%s`7You will purchase `%%%dx `%c%s for `$%d `7credits.");
          FUN_00413230((void *)((int)this + 0x54),piVar2);
          if (0xf < local_4c) {
            pvVar7 = local_60[0];
            if ((0xfff < local_4c + 1) &&
               (pvVar7 = *(void **)((int)local_60[0] + -4),
               0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar7)))) goto LAB_0048a241;
            FUN_005adb3f(pvVar7);
          }
        }
        if (0xf < local_1c) {
          pvVar7 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar7 = *(void **)((int)local_30[0] + -4),
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) goto LAB_0048a241;
          FUN_005adb3f(pvVar7);
        }
      }
    }
    if (0xf < local_34) {
      pvVar7 = local_48[0];
      if ((0xfff < local_34 + 1) &&
         (pvVar7 = *(void **)((int)local_48[0] + -4),
         0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7)))) {
LAB_0048a241:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
  }
  else {
    if ((((*(int *)(iVar1 + 4) != 2) || (*(int *)(iVar1 + 0x18) == -1)) ||
        (*(int *)(iVar1 + 0x1c) == 0)) ||
       (piVar2 = FUN_004a84a0(*(int *)(iVar1 + 0x18)), piVar2 == (int *)0x0)) goto LAB_0048a27f;
    iVar6 = *piVar2;
    iVar4 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar6);
    if (iVar4 < *(int *)(iVar1 + 0x1c)) {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough goods available on ship",0x2b);
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: not enough goods available on ship");
      }
      goto LAB_0048a27f;
    }
    pvVar7 = *(void **)(DAT_0065b3d4 + 0x398);
    uVar9 = FUN_0049e520(pvVar7,iVar6);
    if ((char)uVar9 == '\0') {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: station does not want this good",0x28);
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: station does not want this good");
      }
      goto LAB_0048a27f;
    }
    iVar6 = FUN_0049d2f0(pvVar7,*piVar2,*(int *)(iVar1 + 0x1c),'\0');
    if (iVar6 < 1) goto LAB_0048a27f;
    FUN_0049d6f0(pvVar7,local_30,*piVar2,*(int *)(iVar1 + 0x1c));
    local_8 = 2;
    if (param_1 != (void *)0x0) {
      FUN_004024e0(&stack0xffffff60,local_30);
      FUN_0042ddb0(param_1,in_stack_ffffff60);
    }
LAB_0048a21b:
    if (0xf < local_1c) {
      pvVar7 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar7 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) goto LAB_0048a241;
      FUN_005adb3f(pvVar7);
    }
  }
LAB_0048a27f:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0048a760(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *in_stack_ffffff78;
  char *pcVar6;
  uint uVar7;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b99c0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar3 + 0x8c) == 1) {
    iVar2 = *(int *)(iVar3 + 0xa0);
    if ((iVar2 == -1) || (iVar3 = *(int *)(iVar3 + 0xa4), iVar3 == 0)) goto LAB_0048aab8;
    iVar4 = iVar2 + -1000;
    if (iVar2 < 1000) {
      iVar4 = iVar2;
    }
    pvVar5 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
    piVar1 = FUN_004a84a0(iVar4);
    if (piVar1 == (int *)0x0) goto LAB_0048aab8;
    iVar2 = FUN_0049c940(pvVar5,iVar4);
    if (iVar2 < iVar3) {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough goods available on station",0x2e)
      ;
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: not enough goods available on station");
      }
      goto LAB_0048aab8;
    }
    iVar2 = FUN_00507200(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),piVar1);
    if (iVar2 < iVar3) {
      if (piVar1[0x17] == 0) {
        FUN_00402690((void *)((int)this + 0x54),
                     "`^Error: not enough room in your hold.\n`!Note : not enough room available in cargo pods"
                     ,0x57);
        if (param_1 == (void *)0x0) goto LAB_0048aab8;
        FUN_0042de40(param_1,"`^Error: not enough room in your hold");
      }
      else {
        piVar1 = (int *)FUN_00591e00((undefined1 *)local_30,
                                     "`^Error: not enough `!%s `^space in your hold.");
        FUN_00413230((void *)((int)this + 0x54),piVar1);
        if (0xf < local_1c) {
          pvVar5 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar5 = *(void **)((int)local_30[0] + -4),
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar5);
        }
        if (param_1 == (void *)0x0) goto LAB_0048aab8;
        FUN_0042de40(param_1,"`^Error: not enough `!%s `^space in your hold.");
      }
      FUN_0042de40(param_1,"`!Note : not enough room available in cargo pods");
      goto LAB_0048aab8;
    }
    iVar2 = *piVar1;
    iVar3 = FUN_0049d5b0(pvVar5,iVar2,iVar3,'\x01');
    iVar2 = FUN_0049d510(pvVar5,iVar2,'\x01');
    if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < iVar3) {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough credit in your account",0x2a);
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: not enough credit in your account");
      }
      goto LAB_0048aab8;
    }
    if (iVar3 == 0) {
      piVar1 = (int *)FUN_00591e00((undefined1 *)local_30,
                                   "`7You will load `%%%dx `%c%s `7at no cost.");
      FUN_00413230((void *)((int)this + 0x54),piVar1);
    }
    else {
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      if (iVar2 == piVar1[0x16]) {
        uVar7 = 0x24;
        pcVar6 = "`7Price here is at market average.\n\n";
      }
      else if (piVar1[0x16] < iVar2) {
        uVar7 = 0x4c;
        pcVar6 = "`7Price here is `@above`7 market average. Purchase is `@not `7recommended.\n\n";
      }
      else {
        uVar7 = 0x44;
        pcVar6 = "`7Price here is `0below`7 market average. Purchase is recommended.\n\n";
      }
      FUN_00402690(local_30,pcVar6,uVar7);
      piVar1 = (int *)FUN_00591e00((undefined1 *)local_48,
                                   "%s`7You will purchase `%%%dx `%c%s for `$%d `7credits.");
      FUN_00413230((void *)((int)this + 0x54),piVar1);
      if (0xf < local_34) {
        pvVar5 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar5 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
  }
  else {
    if ((((*(int *)(iVar3 + 0x8c) != 2) || (*(int *)(iVar3 + 0xa0) == -1)) ||
        (*(int *)(iVar3 + 0xa4) == 0)) ||
       (piVar1 = FUN_004a84a0(*(int *)(iVar3 + 0xa0)), piVar1 == (int *)0x0)) goto LAB_0048aab8;
    iVar2 = *piVar1;
    iVar4 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar2);
    if (iVar4 < *(int *)(iVar3 + 0xa4)) {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough goods available on ship",0x2b);
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: not enough goods available on ship");
      }
      goto LAB_0048aab8;
    }
    pvVar5 = *(void **)(DAT_0065b3d4 + 0x398);
    uVar7 = FUN_0049c980(pvVar5,iVar2);
    if ((char)uVar7 == '\0') {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: station does not want this good",0x28);
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: station does not want this good");
      }
      goto LAB_0048aab8;
    }
    iVar2 = FUN_0049d2f0(pvVar5,iVar2,*(int *)(iVar3 + 0xa4),'\0');
    if (iVar2 < 1) goto LAB_0048aab8;
    FUN_0049d6f0(pvVar5,local_30,*piVar1,*(int *)(iVar3 + 0xa4));
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_004024e0(&stack0xffffff78,local_30);
      FUN_0042ddb0(param_1,in_stack_ffffff78);
    }
  }
  if (0xf < local_1c) {
    pvVar5 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar5 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
LAB_0048aab8:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0048ac00(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  void *in_stack_ffffff98;
  uint3 uVar7;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b99f8;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar1 + 0x48) == 1) {
    uVar4 = *(uint *)(iVar1 + 0x5c);
    if ((uVar4 != 0xffffffff) && (*(int *)(iVar1 + 0x60) != 0)) {
      uVar7 = (uint3)((uint)in_stack_ffffff98 >> 8);
      if (((int)uVar4 < 0) ||
         (iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398),
         iVar5 = *(int *)(iVar1 + 100), (uint)(*(int *)(iVar1 + 0x68) - iVar5 >> 2) <= uVar4)) {
        if (param_1 != (void *)0x0) {
          pvVar6 = (void *)((uint)uVar7 << 8);
          FUN_00402690(&stack0xffffff98,"`$Error:`3 Invalid component.",0x1d);
          FUN_0042ddb0(param_1,pvVar6);
        }
        FUN_00402690((void *)((int)this + 0x54),"`$Error:`3 Invalid component.",0x1d);
      }
      else {
        iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
        if (*(int *)(iVar1 + 4) - (*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2) < 1) {
          if (param_1 != (void *)0x0) {
            pvVar6 = (void *)((uint)uVar7 << 8);
            FUN_00402690(&stack0xffffff98,"`$Error:`3 No room in hold for component.",0x29);
            FUN_0042ddb0(param_1,pvVar6);
          }
          FUN_00402690((void *)((int)this + 0x54),"`$Error:`3 No room in hold for component.",0x29);
        }
        else if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) <
                 *(int *)(*(int *)(iVar5 + uVar4 * 4) + 4)) {
          if (param_1 != (void *)0x0) {
            pvVar6 = (void *)((uint)uVar7 << 8);
            FUN_00402690(&stack0xffffff98,"`$Error:`3 cannot afford this component.",0x28);
            FUN_0042ddb0(param_1,pvVar6);
          }
          FUN_00402690((void *)((int)this + 0x54),"`$Error:`3 cannot afford this component.",0x28);
        }
      }
    }
  }
  else if ((((*(int *)(iVar1 + 0x48) == 2) && (*(int *)(iVar1 + 0x5c) != -1)) &&
           (*(int *)(iVar1 + 0x60) != 0)) &&
          (piVar2 = FUN_004a84a0(*(int *)(iVar1 + 0x5c)), piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
    iVar3 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar5);
    if (iVar3 < *(int *)(iVar1 + 0x60)) {
      FUN_00402690((void *)((int)this + 0x54),"`^Error: not enough goods available on ship",0x2b);
      if (param_1 != (void *)0x0) {
        FUN_0042de40(param_1,"`^Error: not enough goods available on ship");
      }
    }
    else {
      pvVar6 = *(void **)(DAT_0065b3d4 + 0x398);
      uVar4 = FUN_0049e520(pvVar6,iVar5);
      if ((char)uVar4 == '\0') {
        FUN_00402690((void *)((int)this + 0x54),"`^Error: station does not want this good",0x28);
        if (param_1 != (void *)0x0) {
          FUN_0042de40(param_1,"`^Error: station does not want this good");
        }
      }
      else {
        iVar5 = FUN_0049d2f0(pvVar6,*piVar2,*(int *)(iVar1 + 0x60),'\0');
        if (0 < iVar5) {
          FUN_0049d6f0(pvVar6,local_30,*piVar2,*(int *)(iVar1 + 0x60));
          local_8 = 0;
          if (param_1 != (void *)0x0) {
            FUN_004024e0(&stack0xffffff98,local_30);
            FUN_0042ddb0(param_1,in_stack_ffffff98);
          }
          if (0xf < local_1c) {
            pvVar6 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar6 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar6);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_0048aee0(void *this,int param_1,void *param_2)

{
  uint uVar1;
  
  FUN_00402690((void *)((int)this + 0x54),&PTR_005ce008,0);
  if (*(int *)(*(uint *)((int)this + 0x11c) + 4 + param_1 * 0x44) == 1) {
    if (param_1 == 0) {
      uVar1 = FUN_00489f20(this,param_2);
      return uVar1;
    }
    if (param_1 == 2) {
      uVar1 = FUN_0048a760(this,param_2);
      return uVar1;
    }
    if (param_1 == 1) {
      uVar1 = FUN_0048ac00(this,param_2);
      return uVar1;
    }
  }
  return *(uint *)((int)this + 0x11c) & 0xffffff00;
}


void __thiscall FUN_0048af60(void *this,void *param_1)

{
  int *piVar1;
  void *this_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *****pppppbVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte ****ppppbVar12;
  byte *pbVar13;
  byte *****pppppbVar14;
  uint uVar15;
  int iVar16;
  byte *in_stack_ffffff58;
  byte *in_stack_ffffff70;
  char *pcVar17;
  byte ****local_48 [4];
  uint local_38;
  uint local_34;
  byte ****local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9a48;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar9 = *(int *)((int)this + 0x11c);
  if (*(int *)(iVar9 + 0x18) != -1) {
    uVar10 = 0;
    piVar7 = *(int **)(DAT_0065b5cc + 0x84);
    uVar15 = *(int *)(DAT_0065b5cc + 0x88) - (int)piVar7 >> 2;
    if (uVar15 != 0) {
      do {
        piVar1 = (int *)*piVar7;
        if (*piVar1 == *(int *)(iVar9 + 0x18)) {
          if (piVar1 != (int *)0x0) {
            iVar3 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar1);
            if (*(int *)(iVar9 + 0x1c) <= iVar3) {
              FUN_004024e0(local_30,(undefined4 *)(DAT_0065b3d4 + 0x238));
              local_8 = 0;
              FUN_004024e0(local_48,(undefined4 *)piVar1[7]);
              pppppbVar14 = (byte *****)local_30[0];
              ppppbVar12 = local_48[0];
              local_8 = 0xffffffff;
              uVar15 = 0;
              iVar3 = *(int *)(DAT_0065b5cc + 0x13c);
              uVar10 = *(int *)(DAT_0065b5cc + 0x140) - iVar3 >> 2;
              if (uVar10 == 0) goto LAB_0048b17a;
              goto LAB_0048b0a0;
            }
            FUN_00402690((void *)((int)this + 0x3c),"`^Error: not enough goods available on ship",
                         0x2b);
            if (param_1 != (void *)0x0) {
              pcVar17 = "`^Error: not enough goods available on ship";
              goto LAB_0048b019;
            }
          }
          break;
        }
        uVar10 = uVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar10 < uVar15);
    }
  }
  goto LAB_0048b024;
LAB_0048b0a0:
  do {
    pbVar13 = *(byte **)(*(int *)(iVar3 + uVar15 * 4) + 0x58);
    pppppbVar5 = local_48;
    if (0xf < local_34) {
      pppppbVar5 = (byte *****)ppppbVar12;
    }
    pbVar11 = pbVar13;
    if (0xf < *(uint *)(pbVar13 + 0x14)) {
      pbVar11 = *(byte **)pbVar13;
    }
    uVar4 = FUN_004031f0(pbVar11,*(uint *)(pbVar13 + 0x10),(byte *)pppppbVar5,local_38);
    if ((char)uVar4 != '\0') {
      iVar16 = *(int *)(iVar3 + uVar15 * 4);
      pppppbVar5 = local_30;
      if (0xf < local_1c) {
        pppppbVar5 = pppppbVar14;
      }
      pbVar13 = (byte *)(iVar16 + 0x20);
      if (0xf < *(uint *)(iVar16 + 0x34)) {
        pbVar13 = *(byte **)(iVar16 + 0x20);
      }
      uVar4 = FUN_004031f0(pbVar13,*(uint *)(iVar16 + 0x30),(byte *)pppppbVar5,local_20);
      if ((char)uVar4 != '\0') {
        if (0xf < local_34) {
          pppppbVar14 = (byte *****)ppppbVar12;
          if ((0xfff < local_34 + 1) &&
             (pppppbVar14 = (byte *****)ppppbVar12[-1],
             (byte *)0x1f < (byte *)((int)ppppbVar12 + (-4 - (int)pppppbVar14)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppbVar14);
          pppppbVar14 = (byte *****)local_30[0];
        }
        if (0xf < local_1c) {
          pppppbVar5 = pppppbVar14;
          if ((0xfff < local_1c + 1) &&
             (pppppbVar5 = (byte *****)pppppbVar14[-1],
             (byte *)0x1f < (byte *)((int)pppppbVar14 + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppbVar5);
        }
        bVar2 = true;
        goto LAB_0048b1eb;
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < uVar10);
LAB_0048b17a:
  if (0xf < local_34) {
    pppppbVar14 = (byte *****)ppppbVar12;
    if ((0xfff < local_34 + 1) &&
       (pppppbVar14 = (byte *****)ppppbVar12[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar12 + (-4 - (int)pppppbVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar14);
    pppppbVar14 = (byte *****)local_30[0];
  }
  if (0xf < local_1c) {
    pppppbVar5 = pppppbVar14;
    if ((0xfff < local_1c + 1) &&
       (pppppbVar5 = (byte *****)pppppbVar14[-1],
       (byte *)0x1f < (byte *)((int)pppppbVar14 + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar5);
  }
  bVar2 = false;
LAB_0048b1eb:
  local_30[0] = (byte ****)((uint)local_30[0] & 0xffffff00);
  local_1c = 0xf;
  local_20 = 0;
  this_00 = *(void **)(DAT_0065b3d4 + 0x398);
  uVar10 = FUN_0049e520(this_00,*piVar1);
  if ((char)uVar10 == '\0') {
    FUN_00402690((void *)((int)this + 0x3c),"`^Error: station does not want this good",0x28);
    if (param_1 != (void *)0x0) {
      pcVar17 = "`^Error: station does not want this good";
LAB_0048b019:
      FUN_0042de40(param_1,pcVar17);
    }
  }
  else {
    iVar3 = FUN_0049d2f0(this_00,*piVar1,*(int *)(iVar9 + 0x1c),'\0');
    if (-1 < iVar3) {
      local_20 = 0;
      local_1c = 0xf;
      iVar16 = piVar1[0x16] * *(int *)(iVar9 + 0x1c);
      local_30[0] = (byte ****)((uint)local_30[0] & 0xffffff00);
      local_8 = 1;
      if (bVar2) {
        in_stack_ffffff70 = (byte *)((uint)in_stack_ffffff70 & 0xffffff00);
        FUN_00402690(&stack0xffffff70,&PTR_005ce008,0);
        local_8._0_1_ = 2;
        FUN_004024e0(&stack0xffffff58,(undefined4 *)piVar1[7]);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar6 = FUN_0040fc00(in_stack_ffffff58);
        if (0 < iVar6) {
          piVar7 = (int *)FUN_00591e00((undefined1 *)local_48,
                                       "`^Warning: %d units are desired here for a contract. Deliver these using the contract terminal.\n\n"
                                      );
          FUN_00413230(local_30,piVar7);
          if (0xf < local_34) {
            pppppbVar14 = (byte *****)local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pppppbVar14 = (byte *****)local_48[0][-1],
               (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)pppppbVar14)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pppppbVar14);
          }
        }
      }
      if (iVar3 == iVar16) {
        uVar10 = 0x24;
        pcVar17 = "`7Price here is at market average.\n\n";
      }
      else if (iVar16 < iVar3) {
        uVar10 = 0x40;
        pcVar17 = "`7Price here is `0above`7 market average. Sale is recommended.\n\n";
      }
      else {
        uVar10 = 0x48;
        pcVar17 = "`7Price here is `@below`7 market average. Sale is `@not `7recommended.\n\n";
      }
      FUN_00403640(local_30,pcVar17,uVar10);
      puVar8 = (undefined4 *)FUN_0049d6f0(this_00,local_48,*piVar1,*(int *)(iVar9 + 0x1c));
      local_8._0_1_ = 3;
      FUN_00403490(local_30,puVar8);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_34) {
        pppppbVar14 = (byte *****)local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pppppbVar14 = (byte *****)local_48[0][-1],
           (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)pppppbVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar14);
      }
      std::basic_string<>::operator=
                ((basic_string<> *)((int)this + 0x3c),(basic_string<> *)local_30);
      if (param_1 != (void *)0x0) {
        FUN_004024e0(&stack0xffffff70,local_30);
        FUN_0042ddb0(param_1,in_stack_ffffff70);
      }
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        ppppbVar12 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (ppppbVar12 = (byte ****)local_30[0][-1],
           0x1f < (uint)((int)local_30[0] + (-4 - (int)ppppbVar12)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar12);
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (byte ****)((uint)local_30[0] & 0xffffff00);
    }
    uVar10 = 0;
    piVar7 = (int *)(DAT_0065b5cc + 0x13c);
    if (*(int *)(DAT_0065b5cc + 0x140) - *piVar7 >> 2 != 0) {
      do {
        FUN_004024e0(&stack0xffffff70,*(undefined4 **)(*(int *)(*piVar7 + uVar10 * 4) + 0x58));
        piVar7 = (int *)FUN_004a8380(in_stack_ffffff70);
        if (piVar1 == piVar7) {
          iVar9 = *(int *)(uVar10 * 4 + *(int *)(DAT_0065b5cc + 0x13c));
          pbVar13 = (byte *)(iVar9 + 0x20);
          pbVar11 = (byte *)(DAT_0065b3d4 + 0x238);
          if (0xf < *(uint *)(DAT_0065b3d4 + 0x24c)) {
            pbVar11 = *(byte **)(DAT_0065b3d4 + 0x238);
          }
          if (0xf < *(uint *)(iVar9 + 0x34)) {
            pbVar13 = *(byte **)pbVar13;
          }
          uVar15 = FUN_004031f0(pbVar13,*(uint *)(iVar9 + 0x30),pbVar11,
                                *(uint *)(DAT_0065b3d4 + 0x248));
          if ((char)uVar15 == '\0') {
            FUN_004024e0(&stack0xffffff70,(undefined4 *)(iVar9 + 0x20));
            FUN_004a6de0(in_stack_ffffff70);
            FUN_00402690(&stack0xffffff70,&PTR_005ce008,0);
            local_8 = 4;
            FUN_004024e0(&stack0xffffff58,(undefined4 *)piVar1[7]);
            local_8 = 0xffffffff;
            iVar9 = FUN_0040fc00(in_stack_ffffff58);
            if (0 < iVar9) {
              piVar7 = (int *)FUN_00591e00((undefined1 *)local_48,
                                           "`^Warning: %d units are desired on %s for a contract.\n\n"
                                          );
              FUN_00413230((void *)((int)this + 0x3c),piVar7);
              if (0xf < local_34) {
                pppppbVar14 = (byte *****)local_48[0];
                if ((0xfff < local_34 + 1) &&
                   (pppppbVar14 = (byte *****)local_48[0][-1],
                   (byte *)0x1f < (byte *)((int)local_48[0] + (-4 - (int)pppppbVar14)))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(pppppbVar14);
              }
              local_38 = 0;
              local_34 = 0xf;
              local_48[0] = (byte ****)((uint)local_48[0] & 0xffffff00);
            }
            if (param_1 != (void *)0x0) {
              piVar7 = (int *)((int)this + 0x3c);
              if (0xf < *(uint *)((int)this + 0x50)) {
                piVar7 = (int *)*piVar7;
              }
              FUN_0042de40(param_1,piVar7);
            }
            break;
          }
        }
        uVar10 = uVar10 + 1;
        piVar7 = (int *)(DAT_0065b5cc + 0x13c);
      } while (uVar10 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - *piVar7 >> 2));
    }
  }
LAB_0048b024:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0048b5e0(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *in_stack_ffffff80;
  char *pcVar8;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005b9a80;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)this + 0x11c);
  if (((*(int *)(iVar1 + 0xa0) == -1) || (*(int *)(iVar1 + 0xa4) == 0)) ||
     (piVar2 = FUN_004a84a0(*(int *)(iVar1 + 0xa0)), piVar2 == (int *)0x0)) goto LAB_0048b67e;
  iVar5 = *piVar2;
  iVar3 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar5);
  if (iVar3 < *(int *)(iVar1 + 0xa4)) {
    FUN_00402690((void *)((int)this + 0x3c),"`^Error: not enough goods available on ship",0x2b);
    if (param_1 == (void *)0x0) goto LAB_0048b67e;
    pcVar8 = "`^Error: not enough goods available on ship";
  }
  else {
    pvVar7 = *(void **)(DAT_0065b3d4 + 0x398);
    uVar4 = FUN_0049c980(pvVar7,iVar5);
    if ((char)uVar4 != '\0') {
      iVar5 = FUN_0049d2f0(pvVar7,iVar5,*(int *)(iVar1 + 0xa4),'\0');
      if (-1 < iVar5) {
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        iVar3 = piVar2[0x16] * *(int *)(iVar1 + 0xa4);
        local_8 = 0;
        if (iVar5 == iVar3) {
          uVar4 = 0x24;
          pcVar8 = "`7Price here is at market average.\n\n";
        }
        else if (iVar3 < iVar5) {
          uVar4 = 0x40;
          pcVar8 = "`7Price here is `0above`7 market average. Sale is recommended.\n\n";
        }
        else {
          uVar4 = 0x48;
          pcVar8 = "`7Price here is `@below`7 market average. Sale is `@not `7recommended.\n\n";
        }
        FUN_00402690(local_30,pcVar8,uVar4);
        puVar6 = (undefined4 *)FUN_0049c9f0(pvVar7,local_48,*piVar2,*(int *)(iVar1 + 0xa4));
        local_8._0_1_ = 1;
        FUN_00403490(local_30,puVar6);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_34) {
          pvVar7 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar7 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
        std::basic_string<>::operator=
                  ((basic_string<> *)((int)this + 0x3c),(basic_string<> *)local_30);
        if (param_1 != (void *)0x0) {
          FUN_004024e0(&stack0xffffff80,local_30);
          FUN_0042ddb0(param_1,in_stack_ffffff80);
        }
        if (0xf < local_1c) {
          pvVar7 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar7 = *(void **)((int)local_30[0] + -4),
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
      }
      goto LAB_0048b67e;
    }
    FUN_00402690((void *)((int)this + 0x3c),"`^Error: station does not want this good",0x28);
    if (param_1 == (void *)0x0) goto LAB_0048b67e;
    pcVar8 = "`^Error: station does not want this good";
  }
  FUN_0042de40(param_1,pcVar8);
LAB_0048b67e:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_0048b800(void *this,int param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x11c);
  uVar2 = param_1 * 0x11;
  if (*(int *)(iVar3 + 4 + param_1 * 0x44) == 2) {
    if (param_1 == 0) {
      uVar2 = FUN_0048af60(this,param_2);
      return uVar2;
    }
    if (param_1 == 2) {
      uVar2 = FUN_0048b5e0(this,param_2);
      return uVar2;
    }
    if ((((param_1 == 1) && (uVar1 = *(uint *)(iVar3 + 0x5c), uVar1 != 0xffffffff)) &&
        (*(int *)(iVar3 + 0x60) != 0)) && (-1 < (int)uVar1)) {
      iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
      iVar3 = *(int *)(iVar3 + 0x48) - *(int *)(iVar3 + 0x44);
      uVar2 = iVar3 >> 2;
      if (uVar1 < uVar2) {
        return CONCAT31((int3)(iVar3 >> 10),1);
      }
    }
  }
  return uVar2 & 0xffffff00;
}


int __thiscall FUN_0048b890(void *this,int param_1)

{
  undefined4 *this_00;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  byte *in_stack_ffffffa4;
  byte *in_stack_ffffffbc;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar8 = DAT_0065b5cc;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9ab8;
  local_10 = ExceptionList;
  iVar4 = *(int *)(*(int *)((int)this + 0x11c) + 4 + param_1 * 0x44);
  iVar3 = *(int *)((int)this + 0x11c) + param_1 * 0x44;
  if (iVar4 != 1) {
    if (((iVar4 == 2) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != -1)) &&
       (ExceptionList = &local_10, piVar1 = FUN_004a84a0(iVar3), piVar1 != (int *)0x0)) {
      iVar3 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar1);
      ExceptionList = local_10;
      return iVar3;
    }
    ExceptionList = local_10;
    return 0;
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == -1) {
    return 0;
  }
  local_18 = -1;
  this_00 = *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  if (iVar3 < 1000) {
    ExceptionList = &local_10;
    piVar1 = FUN_004a84a0(iVar3);
  }
  else {
    local_18 = iVar3 + -1000;
    ExceptionList = &local_10;
    FUN_004024e0(&stack0xffffffbc,
                 *(undefined4 **)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + local_18 * 4) + 0x58));
    piVar1 = (int *)FUN_004a8380(in_stack_ffffffbc);
    iVar8 = DAT_0065b5cc;
  }
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  local_1c = FUN_0049cf60(this_00,iVar3);
  if (iVar3 < 1000) {
    iVar3 = FUN_0049d0b0(this_00,iVar3);
LAB_0048ba26:
    if (0 < iVar3) {
      iVar3 = *(int *)(*(int *)(iVar8 + 0x124) + 0x1c) / iVar3;
      goto LAB_0048b9e5;
    }
  }
  else {
    uVar5 = 0;
    local_1c = *(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x13c) + local_18 * 4) + 0x58) + 0x18);
    puVar2 = *(undefined4 **)(iVar8 + 0x84);
    uVar7 = *(int *)(iVar8 + 0x88) - (int)puVar2 >> 2;
    if (uVar7 != 0) {
      do {
        piVar6 = (int *)*puVar2;
        if (*piVar6 == *piVar1) goto LAB_0048b9a3;
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar5 < uVar7);
    }
    piVar6 = (int *)0x0;
LAB_0048b9a3:
    FUN_004024e0(&stack0xffffffbc,(undefined4 *)piVar6[7]);
    local_8 = 0;
    FUN_004024e0(&stack0xffffffa4,this_00);
    local_8 = 0xffffffff;
    iVar3 = FUN_0040ff50(in_stack_ffffffa4);
    iVar8 = DAT_0065b5cc;
    if (iVar3 != -1) goto LAB_0048ba26;
  }
  iVar3 = 0;
LAB_0048b9e5:
  if (local_1c <= iVar3) {
    iVar3 = local_1c;
  }
  iVar4 = FUN_00507200(*(void **)(*(int *)(iVar8 + 0xd0) + 0x1f8),piVar1);
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  ExceptionList = local_10;
  return iVar4;
}


int __thiscall FUN_0048baa0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *in_stack_ffffffdc;
  
  iVar3 = *(int *)((int)this + 0x11c) + param_1 * 0x44;
  if (param_1 == 0) {
    iVar5 = *(int *)(iVar3 + 4);
    if (iVar5 == 1) {
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == -1) {
        return 0;
      }
      if (999 < iVar3) {
        return *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + iVar3 * 4) + 0x58
                                ) + 0x18);
      }
      piVar2 = FUN_004a84a0(iVar3);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      uVar4 = 0;
      iVar5 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      iVar1 = *(int *)(iVar5 + 0x70);
      uVar6 = *(int *)(iVar5 + 0x74) - iVar1 >> 2;
      if (uVar6 == 0) {
        return 0;
      }
      do {
        iVar5 = *(int *)(iVar1 + uVar4 * 4);
        if (*(int *)(iVar5 + 0x14) == iVar3) {
          return *(int *)(iVar5 + 0x10);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
      return 0;
    }
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    iVar5 = *(int *)(iVar3 + 4);
    if (iVar5 == 1) {
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == -1) {
        return 0;
      }
      this_00 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      if (iVar3 < 1000) {
        piVar2 = FUN_004a84a0(iVar3);
      }
      else {
        FUN_004024e0(&stack0xffffffdc,
                     *(undefined4 **)
                      (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + iVar3 * 4) + 0x58));
        piVar2 = (int *)FUN_004a8380(in_stack_ffffffdc);
      }
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar3 = FUN_0049c940(this_00,iVar3);
      return iVar3;
    }
  }
  if (((iVar5 == 2) && (*(int *)(iVar3 + 0x18) != -1)) &&
     (piVar2 = FUN_004a84a0(*(int *)(iVar3 + 0x18)), piVar2 != (int *)0x0)) {
    iVar3 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar2);
    return iVar3;
  }
  return 0;
}


void __thiscall FUN_0048bbf0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *in_stack_ffffffd4;
  
  iVar1 = *(int *)((int)this + 0x11c) + param_1 * 0x44;
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 < 0) {
    iVar3 = *(int *)(iVar1 + 0x18);
  }
  else {
    *(int *)(iVar1 + 0x18) = iVar3;
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar2 = DAT_0065b5cc;
  this_00 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 1;
    if (param_1 == 0) {
      if (999 < iVar3) {
        FUN_004024e0(&stack0xffffffd4,
                     *(undefined4 **)(*(int *)(*(int *)(iVar2 + 0x13c) + -4000 + iVar3 * 4) + 0x58))
        ;
        FUN_004a8380(in_stack_ffffffd4);
      }
      iVar3 = FUN_0048baa0(this,0);
      *(int *)(iVar1 + 0x1c) = iVar3;
      return;
    }
    if (param_1 == 2) {
      if (999 < iVar3) {
        FUN_004024e0(&stack0xffffffd4,
                     *(undefined4 **)(*(int *)(*(int *)(iVar2 + 0x13c) + -4000 + iVar3 * 4) + 0x58))
        ;
        FUN_004a8380(in_stack_ffffffd4);
      }
      uVar4 = FUN_0049c940(this_00,iVar3);
      *(undefined4 *)(iVar1 + 0x1c) = uVar4;
      return;
    }
    if (param_1 == 1) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      return;
    }
  }
  return;
}


void __thiscall FUN_0048bcf0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x11c) + param_1 * 0x44;
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 < 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
  }
  else {
    *(int *)(iVar1 + 0x18) = iVar2;
    *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 2;
    if (param_1 == 0) {
      iVar2 = FUN_0048bd80(iVar2);
      *(int *)(iVar1 + 0x1c) = iVar2;
      return;
    }
    if (param_1 == 2) {
      iVar2 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar2);
      *(int *)(iVar1 + 0x1c) = iVar2;
      return;
    }
    if (param_1 == 1) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      return;
    }
  }
  return;
}


int FUN_0048bd80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *in_stack_ffffffc4;
  int *local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  iVar5 = DAT_0065b5cc;
  local_8 = 0;
  local_c = 0;
  iVar2 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),param_1);
  uVar6 = 0;
  puVar3 = *(undefined4 **)(iVar5 + 0x84);
  uVar8 = *(int *)(iVar5 + 0x88) - (int)puVar3 >> 2;
  if (uVar8 != 0) {
    do {
      local_18 = (int *)*puVar3;
      if (*local_18 == param_1) goto LAB_0048bde6;
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar8);
  }
  local_18 = (int *)0x0;
LAB_0048bde6:
  uVar6 = 0;
  iVar7 = *(int *)(iVar5 + 0x13c);
  if (*(int *)(iVar5 + 0x140) - iVar7 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar7 + uVar6 * 4);
      if (*(int *)(*(int *)(iVar7 + 0x54) + 0x18) != 0) {
        FUN_004024e0(&stack0xffffffc4,*(undefined4 **)(iVar7 + 0x58));
        piVar4 = (int *)FUN_004a8380(in_stack_ffffffc4);
        iVar5 = DAT_0065b5cc;
        if (piVar4 == local_18) {
          local_10 = (byte *)(DAT_0065b3d4 + 0x238);
          iVar7 = *(int *)(*(int *)(DAT_0065b5cc + 0x13c) + uVar6 * 4);
          local_14 = (byte *)(iVar7 + 0x20);
          if (0xf < *(uint *)(DAT_0065b3d4 + 0x24c)) {
            local_10 = *(byte **)local_10;
          }
          if (0xf < *(uint *)(iVar7 + 0x34)) {
            local_14 = *(byte **)local_14;
          }
          iVar1 = *(int *)(*(int *)(iVar7 + 0x58) + 0x20);
          uVar8 = FUN_004031f0(local_14,*(uint *)(iVar7 + 0x30),local_10,
                               *(uint *)(DAT_0065b3d4 + 0x248));
          if ((char)uVar8 == '\0') {
            local_c = local_c + iVar1;
          }
          else {
            local_8 = local_8 + iVar1;
          }
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = *(int *)(iVar5 + 0x13c);
    } while (uVar6 < (uint)(*(int *)(iVar5 + 0x140) - iVar7 >> 2));
    if (local_8 < 1) {
      if (0 < local_c) {
        iVar5 = 0;
        if (-1 < iVar2 - local_c) {
          iVar5 = iVar2 - local_c;
        }
        return iVar5;
      }
    }
    else if (local_8 <= iVar2) {
      return local_8;
    }
  }
  return iVar2;
}


void __thiscall FUN_0048bef0(void *this,uint *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  int extraout_ECX;
  int extraout_EDX;
  byte *in_stack_ffffff74;
  char *pcVar10;
  uint uVar11;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b9c48;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar7 = *(int *)((int)this + 0x11c);
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar7 + 4);
    if (iVar1 == 1) {
      pvVar9 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      iVar7 = *(int *)(iVar7 + 0x18);
      if (iVar7 < 1000) {
        piVar4 = FUN_004a84a0(iVar7);
        FUN_0049cf60(pvVar9,*piVar4);
      }
      else {
        FUN_004024e0(&stack0xffffff74,
                     *(undefined4 **)
                      (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar7 * 4 + -4000) + 0x58));
        FUN_004a8380(in_stack_ffffff74);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Commodity: `%%%s\n");
      local_8 = 1;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Pod Req. : `%c%s\n");
      local_8 = 2;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Amount   : `%c%d\n");
      local_8 = 3;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      if (0xf < local_48) {
        pvVar9 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar9 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_0048c9c5;
      }
    }
    else {
      if (iVar1 == 2) {
        piVar4 = FUN_004a84a0(*(int *)(iVar7 + 0x18));
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Commodity: `%%%s\n");
        local_8 = 4;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        local_8 = 0;
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Pod Req. : `%c%s\n");
        local_8 = 5;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        local_8 = 0;
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar4);
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amount   : `!%d\n");
        local_8 = 6;
        uVar11 = puVar6[5];
        goto joined_r0x0048c687;
      }
      if (iVar1 == 3) {
        FUN_004a84a0(*(int *)(iVar7 + 0x20));
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Commodity: `%%%s\n");
        local_8 = 7;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amount   : `!%d\n");
        local_8 = 8;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost     : `$%dc\n");
        local_8 = 9;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_0048c9c5;
        }
      }
      else if (iVar1 == 4) {
        FUN_004a84a0(*(int *)(iVar7 + 0x20));
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Commodity: `%%%s\n");
        local_8 = 10;
        FUN_00403490(&local_44,puVar6);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amount   : `!%d\n");
        local_8 = 0xb;
        FUN_00403490(&local_44,puVar6);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Profit   : `$%dc\n");
        local_8 = 0xc;
        FUN_00403490(&local_44,puVar6);
        goto LAB_0048c283;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 1) {
        iVar1 = *(int *)(iVar7 + 0x48);
        if (iVar1 == 1) {
          piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) +
                                              0x398) + 100) + *(int *)(iVar7 + 0x5c) * 4);
          iVar7 = *(int *)(*(int *)(*piVar4 + 4) + 0x80);
          if ((iVar7 == 10) || (iVar7 == 0xb)) {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!Addon : `%%%s\n");
            local_8 = 0x19;
          }
          else {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Comp. : `%%%s\n");
            local_8 = 0x1a;
          }
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
            FUN_005adb3f(pvVar9);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manu. : `%%%s\n");
          local_8 = 0x1b;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
          local_8 = 0;
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
            FUN_005adb3f(pvVar9);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Type  : `%%%s\n");
          local_8 = 0x1c;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
          local_8 = 0;
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
            FUN_005adb3f(pvVar9);
          }
          if (*(int *)(*(int *)(*piVar4 + 4) + 0x80) == 10) {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Adapts: `%%%s\n");
            local_8 = 0x1d;
            FUN_00403490(&local_44,puVar6);
            local_8 = 0;
            if (0xf < local_18) {
              pvVar9 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
              FUN_005adb3f(pvVar9);
            }
          }
          FUN_00403640(&local_44,&DAT_005e75f8,1);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Eff.      : `%c+%.2f%%\n");
          local_8 = 0x1e;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
          local_8 = 0;
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
            FUN_005adb3f(pvVar9);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Pow. Drain: `%c+%.2f%%\n");
          local_8 = 0x1f;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
          local_8 = 0;
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
            FUN_005adb3f(pvVar9);
          }
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Emm.      : `%c+%.2f%%\n");
          local_8 = 0x20;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Strength  : `%%%.2f\n");
          local_8 = 0x21;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          FUN_00403640(&local_44,"`7State     : `0undamaged\n",0x1a);
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost      : `$%dc\n");
          local_8 = 0x22;
          puVar6 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar6 = (undefined4 *)*puVar5;
          }
          FUN_00403640(&local_44,puVar6,puVar5[4]);
        }
        else {
          if (iVar1 != 2) {
            if (iVar1 == 3) {
              puVar6 = (undefined4 *)((int)this + 0xc);
            }
            else {
              if (iVar1 != 4) goto LAB_0048ce0a;
              puVar6 = (undefined4 *)((int)this + 0x24);
            }
            FUN_004024e0(param_1,puVar6);
            FUN_00401b20((int *)&local_44);
            goto LAB_0048ce2e;
          }
          pfVar2 = *(float **)
                    (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + 0x44) +
                    *(int *)(iVar7 + 0x5c) * 4);
          FUN_00437100(pfVar2);
          iVar7 = FUN_00437150(extraout_EDX);
          if ((char)iVar7 == '\0') {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Comp. : `%%%s\n");
            local_8 = 0x24;
          }
          else {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`!Addon : `%%%s\n");
            local_8 = 0x23;
          }
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Manu. : `%%%s\n");
          local_8 = 0x25;
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Type  : `%%%s\n");
          local_8 = 0x26;
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          iVar7 = FUN_00437150((int)pfVar2[1]);
          if (((char)iVar7 != '\0') && (*(int *)(extraout_ECX + 0x80) == 10)) {
            puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Adapts: `%%%s\n");
            local_8 = 0x27;
            FUN_00403490(&local_44,puVar6);
            local_8 = 0;
            FUN_00401b20((int *)local_2c);
          }
          FUN_00403640(&local_44,&DAT_005e75f8,1);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Eff.      : `%c+%.2f%%\n");
          local_8 = 0x28;
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Pow. Drain: `%c+%.2f%%\n");
          local_8 = 0x29;
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Emm.      : `%c+%.2f%%\n");
          local_8 = 0x2a;
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Strength  : `%%%.2f\n");
          local_8 = 0x2b;
          FUN_00403490(&local_44,puVar6);
          local_8 = 0;
          FUN_00401b20((int *)local_2c);
          if ((float)*(int *)((int)pfVar2[1] + 0x14) <= *pfVar2) {
            if ((float)*(int *)((int)pfVar2[1] + 0x10) <= *pfVar2) {
              pcVar10 = "`7State     : `0undamaged\n";
              uVar11 = 0x1a;
            }
            else {
              pcVar10 = "`7State     : `@non-functional\n";
              uVar11 = 0x1f;
            }
          }
          else {
            uVar11 = 0x18;
            pcVar10 = "`7State     : `^damaged\n";
          }
          FUN_00403640(&local_44,pcVar10,uVar11);
          puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Value     : `$%dc\n");
          local_8 = 0x2c;
          FUN_00403490(&local_44,puVar6);
        }
        FUN_00401b20((int *)local_2c);
      }
      goto LAB_0048ce0a;
    }
    iVar1 = *(int *)(iVar7 + 0x8c);
    if (iVar1 == 1) {
      iVar7 = *(int *)(iVar7 + 0xa0);
      pvVar9 = *(void **)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) + 0x398);
      if (iVar7 < 1000) {
        piVar4 = FUN_004a84a0(iVar7);
      }
      else {
        FUN_004024e0(&stack0xffffff74,
                     *(undefined4 **)
                      (*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + -4000 + iVar7 * 4) + 0x58));
        piVar4 = (int *)FUN_004a8380(in_stack_ffffff74);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Commodity: `%%%s\n");
      local_8 = 0xd;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      uVar3 = local_8;
      local_8 = 0;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0048c2b5;
        FUN_005adb3f(pvVar8);
      }
      puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Pod Req. : `%c%s\n");
      local_8 = 0xe;
      puVar6 = puVar5;
      if (0xf < (uint)puVar5[5]) {
        puVar6 = (undefined4 *)*puVar5;
      }
      FUN_00403640(&local_44,puVar6,puVar5[4]);
      local_8 = 0;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0048c2b5;
        FUN_005adb3f(pvVar8);
      }
      FUN_0049c940(pvVar9,*piVar4);
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amt. Here: `%c%d\n");
      local_8 = 0xf;
      uVar11 = puVar6[5];
joined_r0x0048c687:
      puVar5 = puVar6;
      if (0xf < uVar11) {
        puVar5 = (undefined4 *)*puVar6;
      }
      FUN_00403640(&local_44,puVar5,puVar6[4]);
    }
    else {
      if (iVar1 == 2) {
        piVar4 = FUN_004a84a0(*(int *)(iVar7 + 0xa0));
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Commodity: `%%%s\n");
        local_8 = 0x10;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
          FUN_005adb3f(pvVar9);
        }
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`7Pod Req. : `%c%s\n");
        local_8 = 0x11;
        puVar6 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar6 = (undefined4 *)*puVar5;
        }
        FUN_00403640(&local_44,puVar6,puVar5[4]);
        local_8 = 0;
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
          FUN_005adb3f(pvVar9);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar4);
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amount   : `!%d\n");
        local_8 = 0x12;
        uVar11 = puVar6[5];
        goto joined_r0x0048c687;
      }
      if (iVar1 == 3) {
        FUN_004a84a0(*(int *)(iVar7 + 0xa8));
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Commodity: `%%%s\n");
        local_8 = 0x13;
        FUN_00403490(&local_44,puVar6);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
          FUN_005adb3f(pvVar9);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amount   : `!%d\n");
        local_8 = 0x14;
        FUN_00403490(&local_44,puVar6);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
          FUN_005adb3f(pvVar9);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Cost     : `$%dc\n");
        local_8 = 0x15;
        FUN_00403490(&local_44,puVar6);
      }
      else {
        if (iVar1 != 4) goto LAB_0048ce0a;
        FUN_004a84a0(*(int *)(iVar7 + 0xa8));
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Commodity: `%%%s\n");
        local_8 = 0x16;
        FUN_00403490(&local_44,puVar6);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
          FUN_005adb3f(pvVar9);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Amount   : `!%d\n");
        local_8 = 0x17;
        FUN_00403490(&local_44,puVar6);
        local_8 = 0;
        if (0xf < local_18) {
          pvVar9 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0048c2b5;
          FUN_005adb3f(pvVar9);
        }
        puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`7Profit   : `$%dc\n");
        local_8 = 0x18;
        FUN_00403490(&local_44,puVar6);
      }
    }
LAB_0048c283:
    if (0xf < local_18) {
      pvVar9 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar9 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
LAB_0048c2b5:
        local_8 = uVar3;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
LAB_0048c9c5:
      FUN_005adb3f(pvVar9);
    }
  }
LAB_0048ce0a:
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_44;
  param_1[1] = uStack_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
LAB_0048ce2e:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
