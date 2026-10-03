#include "../ois_server.exe.h"


void __fastcall FUN_005148d0(void *param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *this;
  undefined4 *puVar7;
  byte *extraout_ECX;
  char *******pppppppcVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  code *pcVar15;
  bool bVar16;
  float fVar17;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  float in_XMM1_Da;
  byte *in_stack_ffffff5c;
  char *******in_stack_ffffff60;
  void *pvVar20;
  char *pcVar21;
  undefined8 uVar22;
  float local_78;
  float local_74;
  void *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined1 *local_60;
  undefined4 *puStack_5c;
  float local_58;
  undefined1 *local_54;
  float local_50;
  undefined1 *local_4c;
  float local_48;
  float local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  char local_35;
  undefined4 *local_34;
  undefined4 *local_30;
  char ******local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c1de2;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar12 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_70 = param_1;
  if (((int *)**(int **)((int)param_1 + 0x40) != (int *)0x0) &&
     (local_48 = in_XMM1_Da, cVar3 = (**(code **)(*(int *)**(int **)((int)param_1 + 0x40) + 0x10))()
     , cVar3 != '\0')) {
    if ((*(char *)((int)param_1 + 0x234) != '\0') &&
       (((*(int *)((int)param_1 + 0xd4) != 3 || (*(int *)((int)param_1 + 0xf8) != 2)) &&
        (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x310) != '\0')))) {
      fVar17 = *(float *)((int)param_1 + 0x114);
      if (fVar17 == -1.0) {
        iVar4 = FUN_00591370((int *)(*(int *)(**(int **)((int)param_1 + 0x40) + 8) + 0xe8));
        fVar17 = (float)iVar4;
      }
      *(float *)((int)param_1 + 0x114) = fVar17 - local_48;
      if (fVar17 - local_48 <= 0.0) {
        iVar4 = FUN_00591370((int *)(*(int *)(**(int **)((int)param_1 + 0x40) + 8) + 0xe8));
        pcVar15 = rand_exref;
        *(float *)((int)param_1 + 0x114) = (float)iVar4;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar16 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar16 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar16) goto LAB_00514c53;
        if (*(char *)((int)param_1 + 0x234) == '\0') goto LAB_00514c53;
        local_58 = -1.0;
        local_54 = (undefined1 *)0xbf800000;
        uVar5 = 0;
        iVar4 = *(int *)((int)param_1 + 0x24);
        if (*(int *)(iVar4 + 0xd0) - *(int *)(iVar4 + 0xcc) >> 2 == 0) {
LAB_00514c4d:
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          pcVar15 = rand_exref;
          goto LAB_00514c53;
        }
        do {
          local_34 = *(undefined4 **)(iVar4 + 0xcc);
          iVar4 = local_34[uVar5];
          if ((*(int *)(*(int *)(iVar4 + 0x254) + 0x158) == 0) &&
             (*(char *)(*(int *)(iVar4 + 0x40) + 0x34) == '\0')) {
            if ((local_58 == -1.0) && ((float)local_54 == -1.0)) {
LAB_00514b1a:
              bVar16 = true;
            }
            else {
              local_44 = (float)*(double *)(iVar4 + 0x28);
              local_40 = (undefined4 *)(float)*(double *)(iVar4 + 0x30);
              local_78 = (float)*(double *)((int)param_1 + 0x28);
              local_74 = (float)*(double *)((int)param_1 + 0x30);
              local_60 = (undefined1 *)(float)*(double *)(local_34[uVar5] + 0x28);
              puVar18 = (undefined4 *)(float)*(double *)(local_34[uVar5] + 0x30);
              local_8 = 3;
              local_34 = (undefined4 *)((uint)puVar12 | 7);
              puStack_5c = puVar18;
              local_30 = local_34;
              FUN_00591010((Vec2 *)&local_78,(Vec2 *)&local_44);
              local_3c = puVar18;
              FUN_00591010((Vec2 *)&local_58,(Vec2 *)&local_60);
              if ((float)local_3c < (float)puVar18) goto LAB_00514b1a;
              bVar16 = false;
            }
            if (((uint)local_30 & 4) != 0) {
              local_30 = (undefined4 *)((uint)local_30 & 0xfffffffb);
            }
            if (((uint)local_30 & 2) != 0) {
              local_30 = (undefined4 *)((uint)local_30 & 0xfffffffd);
            }
            if (((uint)local_30 & 1) != 0) {
              local_30 = (undefined4 *)((uint)local_30 & 0xfffffffe);
            }
            puVar12 = local_30;
            if (bVar16) {
              iVar4 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0xcc) + uVar5 * 4);
              local_58 = (float)*(double *)(iVar4 + 0x28);
              local_54 = (undefined1 *)(float)*(double *)(iVar4 + 0x30);
              local_50 = local_58;
              local_4c = local_54;
            }
          }
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          iVar4 = *(int *)((int)param_1 + 0x24);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)(*(int *)(iVar4 + 0xd0) - *(int *)(iVar4 + 0xcc) >> 2));
        if ((local_58 == -1.0) || ((float)local_54 == -1.0)) goto LAB_00514c4d;
        puVar12 = (undefined4 *)0x0;
        puVar10 = local_54;
        FUN_0050b390(param_1,local_58);
        pcVar15 = rand_exref;
        local_60 = puVar10;
        puStack_5c = puVar12;
        iVar4 = rand();
        puVar12 = (undefined4 *)
                  (int)((double)(iVar4 % 0x14 + -10) + (double)CONCAT44(puStack_5c,local_60));
        local_34 = puVar12;
        if ((int)(*(float *)((int)param_1 + 0x120) - (float)(int)puVar12) - 0x82U < 0x65)
        goto LAB_00514c53;
        FUN_00591070("DETAIL","Added ghost in vague direction of an enemy.");
        while (puVar12 == (undefined4 *)0xffffffff) {
LAB_00514c53:
          do {
            iVar4 = (*pcVar15)();
            local_34 = (undefined4 *)(iVar4 % 0x168);
            puVar12 = local_34;
          } while ((int)(*(float *)((int)param_1 + 0x120) - (float)(int)local_34) - 0x82U < 0x65);
        }
        iVar4 = 8;
        do {
          rand();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        FUN_005930b0((float *)&local_60);
        local_8 = 4;
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar16 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar16 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar16) {
          local_34 = (undefined4 *)0x0;
        }
        else {
          iVar4 = rand();
          local_34 = (undefined4 *)((float)(iVar4 % 100) / 100.0);
        }
        iVar4 = rand();
        param_1 = local_70;
        FUN_005155c0(local_70,(int)(float)local_60,(int)(float)puStack_5c,iVar4 % 0x168,local_34);
      }
    }
    puVar18 = (undefined4 *)0x0;
    puVar12 = (undefined4 *)0x0;
    local_34 = (undefined4 *)0x0;
    local_6c = (undefined4 *)0x0;
    local_3c = (undefined4 *)0x0;
    local_68 = (undefined4 *)0x0;
    local_30 = (undefined4 *)0x0;
    local_64 = (undefined4 *)0x0;
    local_8._0_1_ = 5;
    local_8._1_3_ = 0;
    iVar4 = *(int *)((int)param_1 + 0x214);
    local_40 = (undefined4 *)0x0;
    if (*(int *)((int)param_1 + 0x218) - iVar4 >> 2 != 0) {
      do {
        puVar13 = local_40;
        puVar7 = *(undefined4 **)(iVar4 + (int)local_40 * 4);
        if ((float)puVar7[0x10] <= 120.0) {
          if ((puVar7[0x38] != 0) || ((float)puVar7[0x10] <= 1.0)) {
            if ((puVar7[0x38] == 1) && ((float)puVar7[0x45] != -1.0)) {
              fVar17 = (float)puVar7[0x45] - local_48;
              puVar7[0x45] = fVar17;
              if (fVar17 <= 0.0) {
                fVar17 = (float)puVar7[0x4a] - local_48 * 0.4;
                puVar7[0x4a] = fVar17;
                if (fVar17 <= 0.0) {
                  puVar7[0x4a] = 0;
                }
                puVar7[0x45] = 0xbf800000;
              }
              else {
                puVar7[0x10] = 0;
                puVar7[0x4a] = local_48 * 0.9 + (float)puVar7[0x4a];
              }
            }
            if ((0.0 < (float)puVar7[0x46]) &&
               (fVar17 = (float)puVar7[0x46] - local_48, puVar7[0x46] = fVar17, fVar17 <= 0.0)) {
              puVar7[0x46] = 0;
              puVar7 = *(undefined4 **)(*(int *)((int)param_1 + 0x214) + (int)local_40 * 4);
              iVar4 = puVar7[0x38];
              if ((iVar4 == 1) || (iVar4 == 2)) {
                if (puVar12 == puVar18) goto LAB_00514d99;
                *puVar18 = *puVar7;
                puVar18 = puVar18 + 1;
                local_68 = puVar18;
                local_3c = puVar18;
              }
              else {
                cVar3 = *(char *)((int)param_1 + 0x234);
                if (cVar3 == '\0') {
LAB_00514f11:
                  if ((*(int *)((int)param_1 + 0x44) != 0) &&
                     (*(int *)(*(int *)((int)param_1 + 0x44) + 0x70) == 2)) {
                    uVar5 = 0;
                    piVar11 = (int *)(DAT_0065b5cc + 0x9c);
                    puVar13 = local_40;
                    if (*(int *)(DAT_0065b5cc + 0xa0) - *piVar11 >> 2 != 0) {
                      do {
                        iVar4 = *(int *)(uVar5 * 4 + *piVar11);
                        if ((*(char *)(iVar4 + 0x18) != '\0') &&
                           (*(int *)(iVar4 + 0x1c) == *(int *)((int)param_1 + 0x24))) {
                          pbVar9 = (byte *)(iVar4 + 0x5c);
                          if (0xf < *(uint *)(iVar4 + 0x70)) {
                            pbVar9 = *(byte **)(iVar4 + 0x5c);
                          }
                          uVar6 = FUN_004031f0(pbVar9,*(uint *)(iVar4 + 0x6c),(byte *)&PTR_005ce008,
                                               0);
                          if ((char)uVar6 == '\0') {
                            FUN_00591070(&DAT_005cdc70,
                                         "Player was detected by a pirate, which is a scenario-specific setting."
                                        );
                            local_4c = &stack0xffffff5c;
                            FUN_004024e0(&stack0xffffff5c,
                                         (undefined4 *)
                                         (*(int *)(*(int *)(DAT_0065b5cc + 0x9c) + uVar5 * 4) + 0x5c
                                         ));
                            local_8._0_1_ = 7;
                            puVar12 = FUN_00412df0();
                            local_8._0_1_ = 5;
                            FUN_004a0ee0(puVar12,in_stack_ffffff5c);
                          }
                        }
                        uVar5 = uVar5 + 1;
                        piVar11 = (int *)(DAT_0065b5cc + 0x9c);
                        puVar13 = local_40;
                        puVar18 = local_3c;
                      } while (uVar5 < (uint)(*(int *)(DAT_0065b5cc + 0xa0) - *piVar11 >> 2));
                    }
                  }
                }
                else {
                  if (iVar4 == 5) {
                    local_4c = &stack0xffffff60;
                    in_stack_ffffff60 = (char *******)((uint)in_stack_ffffff60 & 0xffffff00);
                    FUN_00402690(&stack0xffffff60,"beacons_detected",0x10);
                    local_8._0_1_ = 6;
                    FUN_00412770();
                    local_8._0_1_ = 5;
                    in_stack_ffffff5c = extraout_ECX;
                    FUN_0051e750(extraout_ECX,in_stack_ffffff60);
                    cVar3 = *(char *)((int)param_1 + 0x234);
                  }
                  if (cVar3 == '\0') goto LAB_00514f11;
                }
                iVar4 = *(int *)(*(int *)((int)param_1 + 0x214) + (int)puVar13 * 4);
                puVar12 = local_30;
                if (*(int *)(iVar4 + 0xe0) == 0) {
                  iVar4 = *(int *)(iVar4 + 0x130);
                  local_35 = '\0';
                  local_60 = (undefined1 *)(float)*(double *)(iVar4 + 0x28);
                  puStack_5c = (undefined4 *)(float)*(double *)(iVar4 + 0x30);
                  local_78 = (float)*(double *)((int)param_1 + 0x28);
                  local_74 = (float)*(double *)((int)param_1 + 0x30);
                  auVar19 = ZEXT416((uint)local_74);
                  local_8._0_1_ = 9;
                  FUN_00591010((Vec2 *)&local_78,(Vec2 *)&local_60);
                  puVar12 = local_40;
                  local_8._0_1_ = 5;
                  uVar2 = (undefined1)local_8;
                  local_8._0_1_ = 5;
                  local_34 = auVar19._0_4_;
                  if (*(char *)((int)param_1 + 0x234) == '\0') {
                    iVar4 = *(int *)((int)param_1 + 0x214);
                    local_8._0_1_ = uVar2;
                    if (*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + (int)puVar13 * 4) + 0x130) +
                                         0x254) + 0x158) == 0) {
                      in_stack_ffffff60 = (char *******)&DAT_005cdc70;
                      in_stack_ffffff5c = (byte *)0x515317;
                      FUN_00591070(&DAT_005cdc70,
                                   "%s: Analysed vessel \'%s\' for the first time at a distance of %f"
                                  );
                      iVar4 = *(int *)((int)param_1 + 0x214);
                    }
                    if (*(char *)(*(int *)(*(int *)(iVar4 + (int)puVar13 * 4) + 0x130) + 0x234) !=
                        '\0') {
                      FUN_00591070(&DAT_005cdc70,"%s: Player detected.");
                      iVar4 = *(int *)((int)param_1 + 0x214);
                    }
                    puVar12 = local_30;
                    if ((*(char *)(*(int *)(*(int *)(iVar4 + (int)puVar13 * 4) + 0x130) + 0x234) !=
                         '\0') &&
                       (iVar4 = *(int *)(*(int *)((int)param_1 + 0x44) + 0x124), puVar13 = local_40,
                       iVar4 != 0)) {
                      pbVar14 = (byte *)(iVar4 + 0x1c4);
                      pbVar9 = pbVar14;
                      if (0xf < *(uint *)(iVar4 + 0x1d8)) {
                        pbVar9 = *(byte **)pbVar14;
                      }
                      uVar5 = FUN_004031f0(pbVar9,*(uint *)(iVar4 + 0x1d4),(byte *)&PTR_005ce008,0);
                      puVar12 = local_30;
                      puVar13 = local_40;
                      if ((char)uVar5 == '\0') {
                        local_4c = &stack0xffffff5c;
                        FUN_004024e0(&stack0xffffff5c,(undefined4 *)pbVar14);
                        local_8._0_1_ = 0xc;
                        puVar12 = FUN_00412df0();
                        local_8._0_1_ = 5;
                        FUN_004a0ee0(puVar12,in_stack_ffffff5c);
                        puVar12 = local_30;
                        puVar13 = local_40;
                      }
                    }
                  }
                  else {
                    iVar4 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x214) + (int)local_40 * 4) +
                                    0x130);
                    iVar1 = *(int *)(*(int *)(iVar4 + 0x254) + 0x158);
                    if (((iVar1 == 2) || (iVar1 == 1)) || (iVar1 == 3)) {
                      if (*(char *)(*(int *)(iVar4 + 0x40) + 0x34) == '\0') {
                        pcVar21 = "WARNING: Unknown space platform detected on bearing %d^";
                        iVar4 = 1;
LAB_00515173:
                        FUN_00527550(*(int **)((int)param_1 + 0x224),iVar4,pcVar21);
                      }
                    }
                    else if (iVar1 == 4) {
                      if (*(void **)(iVar4 + 0x39c) != param_1) {
                        FUN_00527550(*(int **)((int)param_1 + 0x224),3,
                                     "`@WARNING`%%: Torpedo detected on bearing %d^");
                        local_35 = '\x01';
                      }
                    }
                    else {
                      if (*(char *)(*(int *)(iVar4 + 0x40) + 0x34) != '\0') {
                        pcVar21 = "New Contact w/`!IFF`%% bearing %d^";
                        iVar4 = 0;
                        goto LAB_00515173;
                      }
                      if ((iVar4 != 0) && (*(int *)(iVar4 + 100) != *(int *)((int)param_1 + 100))) {
                        FUN_00527550(*(int **)((int)param_1 + 0x224),1,
                                     "WARNING: New contact bearing %d^ with `@no IFF`%% active");
                        local_35 = '\x01';
                      }
                      in_stack_ffffff60 = (char *******)&DAT_005cdc70;
                      in_stack_ffffff5c = (byte *)0x51514f;
                      FUN_00591070(&DAT_005cdc70,"%s: Detected %s at distance: %.2f");
                    }
                    if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
                        (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
                       (*(int *)(*(int *)(*(int *)((int)param_1 + 0x214) + (int)puVar12 * 4) + 0x130
                                ) != 0)) {
                      FUN_00591e00((undefined1 *)local_2c,"has_detected_%s");
                      local_8._0_1_ = 10;
                      pppppppcVar8 = local_2c;
                      if (0xf < local_18) {
                        pppppppcVar8 = (char *******)local_2c[0];
                      }
                      in_stack_ffffff60 = local_2c;
                      if (0xf < local_18) {
                        in_stack_ffffff60 = (char *******)local_2c[0];
                      }
                      in_stack_ffffff5c = (byte *)0x515208;
                      FUN_00413ec0(&local_54,tolower_exref,(char *)in_stack_ffffff60,
                                   (char *)((int)pppppppcVar8 + local_1c),(undefined1 *)pppppppcVar8
                                  );
                      local_4c = &stack0xffffff5c;
                      FUN_004024e0(&stack0xffffff5c,local_2c);
                      local_8._0_1_ = 0xb;
                      puVar12 = FUN_00412df0();
                      local_8._0_1_ = 10;
                      FUN_004a0ee0(puVar12,in_stack_ffffff5c);
                      local_8._0_1_ = 5;
                      if (0xf < local_18) {
                        pppppppcVar8 = (char *******)local_2c[0];
                        if ((0xfff < local_18 + 1) &&
                           (pppppppcVar8 = (char *******)local_2c[0][-1],
                           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppppcVar8))))
                        goto LAB_00515528;
                        FUN_005adb3f(pppppppcVar8);
                      }
                      local_1c = 0;
                      local_18 = 0xf;
                      local_2c[0] = (char ******)((uint)local_2c[0] & 0xffffff00);
                    }
                    puVar12 = local_30;
                    puVar13 = local_40;
                    puVar18 = local_3c;
                    if (local_35 != '\0') {
                      uVar22 = 0xffffffff00000001;
                      pvVar20 = param_1;
                      this = (void *)FUN_00402f60();
                      FUN_00557fb0(this,(int)pvVar20,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
                      puVar12 = local_30;
                      puVar13 = local_40;
                      puVar18 = local_3c;
                    }
                  }
                }
              }
            }
          }
        }
        else if (puVar12 == puVar18) {
LAB_00514d99:
          FUN_004141e0(&local_6c,puVar18,puVar7);
          local_30 = local_64;
          local_3c = local_68;
          puVar12 = local_64;
          puVar18 = local_68;
        }
        else {
          *puVar18 = *puVar7;
          puVar18 = puVar18 + 1;
          local_68 = puVar18;
          local_3c = puVar18;
        }
        local_40 = (undefined4 *)((int)puVar13 + 1);
        iVar4 = *(int *)((int)param_1 + 0x214);
      } while (local_40 < (undefined4 *)(*(int *)((int)param_1 + 0x218) - iVar4 >> 2));
      local_34 = local_6c;
    }
    puVar18 = (undefined4 *)((int)puVar18 - (int)local_34 >> 2);
    local_40 = (undefined4 *)0x0;
    puVar12 = local_34;
    local_6c = local_34;
    local_3c = puVar18;
    if (puVar18 != (undefined4 *)0x0) {
      do {
        if (puVar12[(int)local_40] != -1) {
          puVar10 = (undefined1 *)0x0;
          puVar7 = *(undefined4 **)((int)param_1 + 0x214);
          local_4c = (undefined1 *)(*(int *)((int)param_1 + 0x218) - (int)puVar7 >> 2);
          puVar12 = local_34;
          if (local_4c != (undefined1 *)0x0) {
            do {
              piVar11 = (int *)*puVar7;
              param_1 = local_70;
              puVar18 = local_3c;
              if (*piVar11 == local_34[(int)local_40]) goto LAB_0051544e;
              puVar10 = puVar10 + 1;
              puVar7 = puVar7 + 1;
            } while (puVar10 < local_4c);
          }
        }
        piVar11 = (int *)0x0;
LAB_0051544e:
        FUN_0050c960(param_1,(int)piVar11);
        local_40 = (undefined4 *)((int)local_40 + 1);
      } while (local_40 < puVar18);
    }
    if (((*(char *)((int)param_1 + 0x1b2) != '\0') &&
        (local_48 = *(float *)((int)param_1 + 0x110) - local_48,
        *(float *)((int)param_1 + 0x110) = local_48, local_48 <= 0.0)) &&
       (puVar18 = (undefined4 *)FUN_0050b490((int)param_1),
       *(undefined4 **)((int)param_1 + 0x194) != puVar18)) {
      *(undefined4 **)((int)param_1 + 0x194) = puVar18;
      if (puVar18 == (undefined4 *)0x0) {
        *(undefined4 *)((int)param_1 + 400) = 0xffffffff;
      }
      else {
        *(undefined4 *)((int)param_1 + 400) = *puVar18;
        *(undefined4 *)((int)param_1 + 400) = *puVar18;
        FUN_00591070(&DAT_005cdc70,"%s: Auto-selected new object: %d");
      }
      *(undefined4 *)((int)param_1 + 0x1ac) = 0;
      *(undefined4 *)((int)param_1 + 0x1a8) = 0xffffffff;
    }
    if (puVar12 != (undefined4 *)0x0) {
      puVar18 = puVar12;
      if ((0xfff < ((int)local_30 - (int)puVar12 & 0xfffffffcU)) &&
         (puVar18 = (undefined4 *)puVar12[-1], 0x1f < (uint)((int)puVar12 + (-4 - (int)puVar18)))) {
LAB_00515528:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(puVar18);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __fastcall FUN_00515560(int param_1)

{
  float fVar1;
  uint3 uVar2;
  uint in_EAX;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x214);
  do {
    if (piVar3 == *(int **)(param_1 + 0x218)) {
      return in_EAX & 0xffffff00;
    }
    in_EAX = *(uint *)(*piVar3 + 0x130);
    if ((in_EAX != 0) && (in_EAX == *(uint *)(DAT_0065b5cc + 0xd0))) {
      fVar1 = *(float *)(*piVar3 + 0x118);
      uVar2 = CONCAT21((short)(in_EAX >> 0x10),
                       (fVar1 == 0.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < 0.0);
      in_EAX = (uint)uVar2 << 8;
      if (fVar1 == 0.0) {
        return CONCAT31(uVar2,1);
      }
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


void __thiscall FUN_005155c0(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1e22;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (void *)FUN_005adb0f(0x138);
  local_8 = 0;
  iVar7 = *(int *)((int)this + 0x220);
  *(int *)((int)this + 0x220) = iVar7 + 1;
  FUN_00591370((int *)(*(int *)(**(int **)((int)this + 0x40) + 8) + 0xf4));
  puVar3 = FUN_00508c00(this_00,0xffffffff,iVar7);
  local_8 = 0xffffffff;
  iVar6 = 0;
  *(double *)(puVar3 + 4) = (double)param_1 + *(double *)((int)this + 0x28);
  *(double *)(puVar3 + 6) = (double)param_2 + *(double *)((int)this + 0x30);
  iVar7 = 9;
  local_14 = puVar3;
  do {
    iVar4 = rand();
    iVar6 = iVar6 + iVar4 % 6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar6 = iVar6 + -10;
  if (iVar6 < 3) {
    iVar6 = 3;
  }
  puVar3[0x3a] = iVar6;
  iVar7 = rand();
  switch(iVar7 % 5) {
  case 0:
    puVar3[0x39] = 0x44c;
    *(undefined1 *)((int)puVar3 + 0x10f) = 1;
    break;
  case 1:
    puVar3[0x39] = 800;
    break;
  case 2:
    puVar3[0x39] = 0xbe;
    *(undefined1 *)((int)puVar3 + 0x10e) = 1;
    break;
  case 3:
    puVar3[0x39] = 0x5f0;
    *(undefined1 *)((int)puVar3 + 0x112) = 1;
    break;
  case 4:
    puVar3[0x39] = 0x4c;
  }
  iVar6 = 0;
  iVar7 = 2;
  do {
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    iVar6 = iVar6 + 1 + uVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar3[0x39] = puVar3[0x39] + iVar6 + -4;
  if ((int)puVar3[0x39] < 2) {
    puVar3[0x39] = 2;
  }
  else if (0x63e < (int)puVar3[0x39]) {
    puVar3[0x39] = 0x63e;
  }
  puVar3[0xf] = (float)param_3;
  puVar3[0xe] = (float)param_3;
  puVar3[0xd] = param_4;
  *(undefined2 *)(puVar3 + 2) = 0x101;
  puVar3[0x38] = 1;
  iVar7 = rand();
  if (iVar7 % 6 < 2) {
    puVar3[0x45] = 0xbf800000;
  }
  else {
    fVar1 = (float)puVar3[0x46];
    iVar7 = rand();
    puVar3[0x45] = (float)(iVar7 % (int)fVar1);
    FUN_00591070("DETAIL","Ghost detection timer: %.0f/%.0f");
  }
  puVar2 = *(undefined4 **)((int)this + 0x218);
  if (*(undefined4 **)((int)this + 0x21c) == puVar2) {
    FUN_00414080((void *)((int)this + 0x214),puVar2,&local_14);
  }
  else {
    *puVar2 = puVar3;
    *(int *)((int)this + 0x218) = *(int *)((int)this + 0x218) + 4;
  }
  FUN_00591070(&DAT_005cdc70,"%s: Added sensor ghost at delta %d, %d to ship %s (freq: %d, str: %d)"
              );
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00515880(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1e57;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[0x61] != 0) {
    FUN_00591070("DETAIL","%s: taking damage at %f, %f in hazard %s");
    if ((char)param_1[0x8d] != '\0') {
      FUN_00527550((int *)param_1[0x89],4,"WARNING: %s damage taken from %s.");
      pvVar4 = (void *)(extraout_ECX & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"hazard_damage",0xd);
      local_8 = 0;
      uVar3 = extraout_ECX_00;
      if (DAT_0065c294 == 0) {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_8 = CONCAT31(local_8._1_3_,1);
        DAT_0065c294 = FUN_0051e500(puVar2);
        uVar3 = extraout_ECX_01;
      }
      local_8 = 0xffffffff;
      FUN_0051e750(uVar3,pvVar4);
      if ((char)param_1[0x8d] != '\0') {
        iVar1 = *(int *)(param_1[0x61] + 0x30);
        if (iVar1 == 2) {
          *(undefined1 *)(DAT_0065b5cc + 0x1c4) = 1;
        }
        else if (iVar1 == 3) {
          *(undefined1 *)(DAT_0065b5cc + 0x1c5) = 1;
        }
        else if (iVar1 == 4) {
          *(undefined1 *)(DAT_0065b5cc + 0x1c6) = 1;
        }
      }
    }
    rand();
    iVar1 = *param_1;
    FUN_00591370((int *)(param_1[0x61] + 0x34));
    (**(code **)(iVar1 + 0xc))();
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00515a30(int param_1)

{
  int *piVar1;
  char cVar2;
  void *this;
  int iVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  void *pvVar7;
  float fStack_10;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x1c);
  if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x10))(0), cVar2 != '\0')) {
    iVar4 = *(int *)(param_1 + 0x40);
    if (*(float *)(param_1 + 0x160) == -1.0) {
      iVar4 = *(int *)(iVar4 + 0x1c);
      if (*(float *)(param_1 + 0x164) == -1.0) {
        if (*(char *)(iVar4 + 0x62) != '\0') {
          *(undefined1 *)(iVar4 + 0x62) = 0;
        }
      }
      else {
        if (*(char *)(iVar4 + 0x62) != '\0') {
          *(undefined1 *)(iVar4 + 0x62) = 0;
        }
        if (*(char *)(param_1 + 0x15c) == '\0') {
          *(undefined4 *)(param_1 + 0x164) = 0xbf800000;
          return;
        }
        fVar5 = *(float *)(param_1 + 0x164) - fStack_10;
        *(float *)(param_1 + 0x164) = fVar5;
        if (fVar5 <= 0.0) {
          *(undefined4 *)(param_1 + 0x164) = 0xbf800000;
          pcVar6 = "%s: Beginning automated comms sync";
          goto LAB_00515be4;
        }
      }
    }
    else {
      if (*(char *)(*(int *)(iVar4 + 0x1c) + 0x62) == '\0') {
        *(undefined1 *)(*(int *)(iVar4 + 0x1c) + 0x62) = 1;
        iVar4 = *(int *)(param_1 + 0x40);
      }
      if (*(char *)(*(int *)(iVar4 + 0x1c) + 0x60) == '\0') {
        pcVar6 = "%s: comms sync reset due to lack of power";
LAB_00515be4:
        FUN_00591070("DETAIL",pcVar6);
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c);
        iVar3 = FUN_00437c60(*(int **)(iVar4 + 0xc));
        *(float *)(param_1 + 0x160) =
             (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
             *(float *)(*(int *)(iVar4 + 8) + 0x104);
        return;
      }
      fVar5 = *(float *)(param_1 + 0x160) - fStack_10;
      *(float *)(param_1 + 0x160) = fVar5;
      iVar4 = DAT_0065b444;
      if (fVar5 <= 0.0) {
        *(undefined4 *)(param_1 + 0x160) = 0xbf800000;
        FUN_004b63c0(*(void **)(iVar4 + 0xc),*(void **)(DAT_0065b5cc + 300),
                     *(uint *)(param_1 + 0x20));
        pvVar7 = *(void **)(DAT_0065b5cc + 300);
        this = (void *)FUN_00412700();
        FUN_0043a8d0(this,pvVar7);
        FUN_00591070("DETAIL","%s: performed comms sync");
        if (*(char *)(param_1 + 0x15c) != '\0') {
          *(undefined4 *)(param_1 + 0x164) = 0x43340000;
          return;
        }
      }
    }
  }
  return;
}


void __fastcall FUN_00515c60(int *param_1)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float in_XMM1_Da;
  float fVar7;
  float fVar8;
  int *piVar9;
  undefined8 uVar10;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1e92;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = param_1[9];
  if (iVar2 != 0) {
    local_2c = (float)*(double *)(param_1 + 10);
    local_28 = (float)*(double *)(param_1 + 0xc);
    local_8 = 0;
    uVar5 = 0;
    iVar4 = *(int *)(iVar2 + 0x84);
    local_18 = in_XMM1_Da;
    if (*(int *)(iVar2 + 0x88) - iVar4 >> 2 != 0) {
      do {
        iVar4 = *(int *)(iVar4 + uVar5 * 4);
        if (*(int *)(iVar4 + 0x54) == 1) {
          local_24 = (float)*(double *)(iVar4 + 0x20);
          local_20 = (float)*(double *)(iVar4 + 0x28);
          local_8 = CONCAT31(local_8._1_3_,1);
          fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)&local_24);
          local_14 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
          fVar8 = (1.5 - fVar8 * 0.5 * local_14 * local_14) * local_14 * fVar8;
          if (fVar8 <= 22.0) {
            local_14 = 1.0 - fVar8 / 22.0;
            local_8 = 0xffffffff;
            if (0.0 < local_14) {
              fVar8 = (float)*(double *)(param_1 + 10);
              FUN_00520030((void *)param_1[9],fVar8,(float)*(double *)(param_1 + 0xc));
              param_1[0xc3] = (int)fVar8;
              fVar8 = local_14 * 120.0 * local_18 + (float)param_1[0x7d];
              param_1[0x7d] = (int)fVar8;
              goto LAB_00515df2;
            }
            break;
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = *(int *)(iVar2 + 0x84);
      } while (uVar5 < (uint)(*(int *)(iVar2 + 0x88) - iVar4 >> 2));
    }
    local_8 = 0xffffffff;
    fVar8 = (float)param_1[0x7d];
    if (0.0 < fVar8) {
      fVar8 = fVar8 - local_18 * 36.0;
      param_1[0x7d] = (int)fVar8;
      if (fVar8 < 0.0) {
        param_1[0x7d] = 0;
        FUN_00591070("DETAIL","%s: Hull temperature now at zero.");
        fVar8 = (float)param_1[0x7d];
      }
    }
LAB_00515df2:
    fVar1 = (float)param_1[0xc1];
    if (fVar1 != fVar8) {
      if (fVar1 < fVar8) {
        iVar2 = *(int *)(param_1[0x95] + 0xcc);
        fVar7 = (float)(iVar2 / 3);
        if ((fVar8 <= fVar7) || (fVar7 < fVar1)) {
          fVar7 = (float)iVar2;
          if ((fVar7 < fVar8) && (fVar1 <= fVar7)) {
            FUN_00527550((int *)param_1[0x89],3,"WARNING: Hull temperature passing %d degrees.");
            FUN_00527550((int *)param_1[0x89],4,"Serious hull damage imminent.");
            uVar10 = 0xffffffff00000025;
            piVar9 = param_1;
            pvVar3 = (void *)FUN_00402f60();
            FUN_00557fb0(pvVar3,(int)piVar9,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
          }
        }
        else if (*(int *)(param_1[0x95] + 0x158) == 4) {
          if ((param_1[0xe7] != 0) && ((char)param_1[0xff] != '\0')) {
            FUN_00527550(*(int **)(param_1[0xe7] + 0x224),2,
                         "WARNING: Weapon from tube %d reporting high heat levels.");
          }
        }
        else {
          FUN_00527550((int *)param_1[0x89],4,"WARNING: Hull temperature passing %d degrees.");
        }
      }
      fVar8 = (float)param_1[0x7d];
      param_1[0xc1] = (int)fVar8;
    }
    if ((float)((int)(*(int *)(param_1[0x95] + 0xcc) + (*(int *)(param_1[0x95] + 0xcc) >> 0x1f & 7U)
                     ) >> 3) <= fVar8) {
      fVar8 = (float)param_1[0xc2];
      if (0.0 < fVar8) {
        fVar8 = fVar8 - local_18;
        param_1[0xc2] = (int)fVar8;
        if (fVar8 < 0.0) {
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar6 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar6) {
            local_18 = (float)param_1[0x7d] / (float)*(int *)(param_1[0x95] + 0xcc);
            FUN_00591070(&DAT_005cdc70,
                         "Damage modifier for upcoming heat damage, based on distance: angle %.0f, modifier %.02f"
                        );
            iVar2 = rand();
            (**(code **)(*param_1 + 0xc))
                      ((int)(float)param_1[0xc3],(float)(iVar2 % 0xe + 9) * local_18,5);
          }
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000003;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
          }
          iVar2 = uVar5 + 1;
          iVar4 = 0x24;
          piVar9 = param_1;
          pvVar3 = (void *)FUN_00402f60();
          FUN_00557fb0(pvVar3,(int)piVar9,iVar4,iVar2);
          fVar8 = (float)param_1[0xc2];
        }
      }
      if (fVar8 <= 0.0) {
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        param_1[0xc2] = (int)(float)(int)(uVar5 + 3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005160d0(void *this,float param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  void *this_00;
  int *piVar5;
  float fVar6;
  uint in_stack_ffffffc0;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1ec8;
  local_10 = ExceptionList;
  if (*(char *)((int)this + 800) != '\0') {
    return;
  }
  if (*(char *)((int)this + 0x326) != '\0') {
    return;
  }
  piVar5 = *(int **)((int)this + 0x184);
  if (piVar5 == (int *)0x0) {
    if (*(int *)(DAT_0065b5cc + 0xcc) == 0) {
      return;
    }
    if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1) {
      return;
    }
    if (*(char *)((int)this + 0x324) == '\0') {
      return;
    }
    pbVar7 = (byte *)(in_stack_ffffffc0 & 0xffffff00);
    ExceptionList = &local_10;
    FUN_00402690(&stack0xffffffc0,"in_nebula",9);
    local_8 = 0;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar2,pbVar7);
    *(undefined1 *)((int)this + 0x324) = 0;
    ExceptionList = local_10;
    return;
  }
  if (((*(int *)((int)this + 0x2fc) != *piVar5) || (*(int *)((int)this + 0x300) != piVar5[8])) ||
     (fVar6 = *(float *)((int)this + 0x148), ExceptionList = &local_10, fVar6 == -1.0)) {
    ExceptionList = &local_10;
    iVar3 = FUN_00591370(piVar5 + 9);
    piVar5 = *(int **)((int)this + 0x184);
    fVar6 = (float)iVar3;
    *(float *)((int)this + 0x148) = fVar6;
    *(int *)((int)this + 0x2fc) = *piVar5;
    *(int *)((int)this + 0x300) = piVar5[8];
  }
  if (((char)piVar5[1] != '\0') &&
     (*(float *)((int)this + 0x148) = fVar6 - param_1, fVar6 - param_1 <= 0.0)) {
    iVar3 = FUN_00591370(piVar5 + 9);
    *(float *)((int)this + 0x148) = (float)iVar3;
    if ((((*(int *)((int)this + 0x188) == 1) &&
         ((piVar5 = *(int **)(*(int *)((int)this + 0x40) + 0xc), piVar5 != (int *)0x0 &&
          (cVar1 = (**(code **)(*piVar5 + 0x10))(), cVar1 != '\0')))) &&
        (iVar3 = *(int *)(*(int *)((int)this + 0x40) + 0xc), *(char *)(iVar3 + 0x62) != '\0')) &&
       (*(float *)(iVar3 + 0x6c) == -1.0)) {
      FUN_00591070(&DAT_005cdc70,"%s: firing point defence laser at incoming asteroid");
      iVar3 = FUN_00591370((int *)(*(int *)(*(int *)(*(int *)((int)this + 0x40) + 0xc) + 8) + 0xe8))
      ;
      pbVar7 = (byte *)0x5162fa;
      FUN_00591070("DETAIL","%s: %d/%d");
      if (2 < iVar3) {
        pcVar8 = "%s: miss.";
      }
      else {
        pcVar8 = "%s: hit asteroid";
      }
      FUN_00591070(&DAT_005cdc70,pcVar8);
      FUN_004024e0(&stack0xffffffc4,(undefined4 *)((int)this + 0x238));
      local_8 = 1;
      pvVar4 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      in_stack_ffffffc0 = 0x51636f;
      FUN_00531140(pvVar4,pbVar7);
      iVar10 = -1;
      iVar9 = 0x21;
      pvVar4 = this;
      this_00 = (void *)FUN_00402f60();
      FUN_00557fb0(this_00,(int)pvVar4,iVar9,iVar10);
      iVar9 = *(int *)(*(int *)((int)this + 0x40) + 0xc);
      *(undefined4 *)(iVar9 + 0x6c) = *(undefined4 *)(*(int *)(iVar9 + 8) + 0x108);
      if (2 >= iVar3) goto LAB_0051639f;
    }
    FUN_00515880(this);
  }
LAB_0051639f:
  if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
      (*(char *)((int)this + 0x324) == '\0')) &&
     ((*(int **)((int)this + 0x184) != (int *)0x0 && (**(int **)((int)this + 0x184) == 2)))) {
    pbVar7 = (byte *)(in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"in_nebula",9);
    local_8 = 2;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar2,pbVar7);
    *(undefined1 *)((int)this + 0x324) = 1;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00516430(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  double dVar4;
  float fVar5;
  uint in_stack_ffffff90;
  undefined4 *puVar6;
  Vec2 local_34 [8];
  float local_2c [2];
  undefined8 local_24;
  undefined8 local_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1ef9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (0x1f < (uint)(*(int *)(param_1 + 0x1c8) - iVar1)) {
    local_24 = *(double *)(param_1 + 0x28) - (double)*(float *)(iVar1 + 8);
    local_1c = (double)*(float *)(iVar1 + 0xc) - *(double *)(param_1 + 0x30);
    fVar2 = (float10)_CIatan2();
    local_24 = (double)fVar2;
    dVar4 = (local_24 * 180.0) / 3.141592653589793 - 90.0;
    if (dVar4 < 0.0) {
      dVar4 = dVar4 + 360.0;
    }
    local_14 = (float)dVar4;
    local_1c = 0.0;
    local_8 = 0;
    fVar5 = cocos2d::Vec2::getDistance((Vec2 *)(param_1 + 0x118),(Vec2 *)&local_1c);
    local_1c = (double)CONCAT44(fVar5,(undefined4)local_1c);
    local_8 = 0xffffffff;
    if (fVar5 == 0.0) {
      *(float *)(param_1 + 0x2cc) = local_14;
    }
    else {
      FUN_00592f80(0.0,0,*(float *)(param_1 + 0x118));
      FUN_005930b0(local_2c);
      FUN_005930b0((float *)local_34);
      cocos2d::Vec2::operator-(local_34,(Vec2 *)&local_24);
      uVar3 = local_24._4_4_;
      FUN_00592f80(0.0,0,SUB84(local_24,0));
      *(undefined4 *)(param_1 + 0x2cc) = uVar3;
    }
    *(float *)(*(int *)(param_1 + 0x1c4) + 0x10) = local_14;
    FUN_00592f80(0.0,0,*(float *)(param_1 + 0x118));
    puVar6 = (undefined4 *)(in_stack_ffffff90 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"Picked a burn angle of %f, to get from %f to %d",0x2f);
    FUN_0050ae50(param_1,puVar6);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00516670(void *this,int param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  double dVar4;
  uint in_stack_ffffffd0;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 0x2c0) == param_1) {
    if (param_1 != 2) {
      return;
    }
  }
  else {
    *(int *)((int)this + 0x2c0) = param_1;
    *(undefined1 *)((int)this + 0x2c8) = 0;
    if (param_1 != 2) {
      return;
    }
    FUN_00516430((int)this);
  }
  iVar1 = *(int *)((int)this + 0x1c4);
  if (*(int *)((int)this + 0x1c8) - iVar1 >> 5 != 0) {
    fVar2 = (float10)_CIatan2();
    dVar4 = ((double)fVar2 * 180.0) / 3.141592653589793 - 90.0;
    if (dVar4 < 0.0) {
      dVar4 = dVar4 + 360.0;
    }
    fVar3 = *(float *)(iVar1 + 0x10);
    if (fVar3 != -1.0) {
      fVar3 = fVar3 - (float)dVar4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 * -1.0;
      }
      if (fVar3 < 45.0) {
        return;
      }
    }
    puVar5 = (undefined4 *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"Resetting angle to target / burn vector.",0x28);
    FUN_0050ae50(this,puVar5);
    FUN_00516430((int)this);
  }
  return;
}


void __fastcall FUN_005167a0(void *param_1)

{
  int *piVar1;
  float *pfVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  uint in_stack_ffffff88;
  undefined4 *puVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1f3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  dVar8 = (double)(ulonglong)(uint)*(float *)((int)param_1 + 0x128);
  if (*(float *)((int)param_1 + 0x128) != -1.0) {
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x40) + 0x18);
    if (((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x10))(), cVar3 != '\0')) &&
       (iVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x18), *(char *)(iVar5 + 0x62) == '\0')) {
      *(undefined1 *)(iVar5 + 0x62) = 1;
    }
    fVar4 = *(float *)((int)param_1 + 0x120);
    FUN_00593220();
    fVar10 = *(float *)((int)param_1 + 0x128);
    uVar9 = 0;
    local_24 = fVar4;
    FUN_00593220();
    dVar8 = (double)CONCAT44(uVar9,fVar10);
    if (fVar10 <= local_24) {
      *(float *)((int)param_1 + 0x120) = *(float *)((int)param_1 + 0x128);
      dVar8 = (double)*(float *)((int)param_1 + 0x128);
      puVar11 = (undefined4 *)(in_stack_ffffff88 & 0xffffff00);
      FUN_00402690(&stack0xffffff88,"Hit desired angle of %f",0x17);
      FUN_0050ae50(param_1,puVar11);
      *(undefined4 *)((int)param_1 + 0x128) = 0xbf800000;
      *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x18) + 0x62) = 0;
    }
  }
  piVar1 = (int *)((int)param_1 + 0x1c4);
  *(undefined4 *)((int)param_1 + 0x124) = *(undefined4 *)((int)param_1 + 0x120);
  iVar5 = *piVar1;
  if ((uint)(*(int *)((int)param_1 + 0x1c8) - iVar5) < 0x20) {
    FUN_00591070("DETAIL","Motion complete.");
    FUN_00516670(param_1,0);
    *(undefined4 *)((int)param_1 + 0xd4) = 0;
    *(undefined4 *)((int)param_1 + 0x2c0) = 0;
    *(undefined4 *)((int)param_1 + 0x2c4) = 0;
    ExceptionList = local_10;
    return;
  }
  if ((*(float *)(iVar5 + 8) == -9999.0) &&
     (dVar8 = (double)(ulonglong)(uint)*(float *)(iVar5 + 0xc), *(float *)(iVar5 + 0xc) == -9999.0))
  {
    FUN_00517120((int)param_1);
    ExceptionList = local_10;
    return;
  }
  if (*(float *)(iVar5 + 8) == 0.0) {
    fVar4 = *(float *)(iVar5 + 0xc);
    uVar9 = 0;
    dVar8 = (double)(ulonglong)(uint)fVar4;
    if (fVar4 == 0.0) {
      FUN_00591070("DETAIL","WARNING: Heading to 0, 0 for some reason.");
      dVar8 = (double)CONCAT44(uVar9,fVar4);
      iVar5 = *piVar1;
    }
  }
  FUN_0050b390(param_1,*(float *)(iVar5 + 8));
  local_14 = (float)dVar8;
  local_28 = (float)*(double *)((int)param_1 + 0x28);
  local_24 = (float)*(double *)((int)param_1 + 0x30);
  local_8 = 0;
  local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)(iVar5 + 8));
  fVar4 = (float)(0x5f3759df - ((uint)local_20 >> 1));
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = (1.5 - local_20 * 0.5 * fVar4 * fVar4) * fVar4 * local_20;
  local_8 = 1;
  local_18 = fVar4;
  local_18 = cocos2d::Vec2::getDistance((Vec2 *)((int)param_1 + 0x118),(Vec2 *)&local_28);
  local_8 = 0xffffffff;
  FUN_00517440((int)param_1);
  local_24 = fVar4;
  FUN_00592f80(0.0,0,*(float *)((int)param_1 + 0x118));
  iVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x18);
  if (iVar5 == 0) {
    fVar10 = -1.0;
  }
  else {
    fVar10 = 360.0 / *(float *)(*(int *)(iVar5 + 8) + 0x104);
  }
  fVar7 = local_24 * 1.4;
  local_1c = fVar4;
  if ((fVar10 * 1.4 + fVar7 <= local_20) || (FUN_00403cb0((int)param_1), fVar7 <= 0.0)) {
    if (0.2 <= local_18) {
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
    }
  }
  else {
    iVar5 = 4;
  }
  FUN_00516670(param_1,iVar5);
  iVar5 = *(int *)((int)param_1 + 0x2c0);
  *(int *)((int)param_1 + 0x2c4) = iVar5;
  fVar4 = SUB84((double)local_20,0);
  *(double *)((int)param_1 + 0x138) = (double)local_20;
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      fVar4 = *(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) * 0.5;
      if ((local_14 < local_1c - fVar4) || (fVar10 = fVar4 + local_1c, fVar10 < local_14)) {
        fVar10 = *(float *)((int)param_1 + 0x2cc);
        fVar7 = *(float *)((int)param_1 + 0x120);
        if ((fVar7 < fVar10 - fVar4) || (fVar10 + fVar4 < fVar7)) {
          FUN_005174e0((int)param_1);
          ExceptionList = local_10;
          return;
        }
        if (fVar7 != fVar10) {
          *(float *)((int)param_1 + 0x120) = fVar10;
        }
      }
      else {
        if (local_14 != local_1c) {
          FUN_005172c0((int)param_1);
          FUN_005173c0((int)param_1);
          local_1c = fVar10;
        }
        if (((local_14 != *(float *)((int)param_1 + 0x120)) &&
            (iVar5 = FUN_00522850(*(int *)((int)param_1 + 0x40)), 0x19 < iVar5)) &&
           ((*(float *)((int)param_1 + 0x120) != local_14 ||
            ((piVar1 = *(int **)(*(int *)((int)param_1 + 0x40) + 0x18), piVar1 == (int *)0x0 ||
             (cVar3 = (**(code **)(*piVar1 + 0x10))(), cVar3 != '\0')))))) {
          FUN_005174e0((int)param_1);
        }
        if ((((local_14 < local_1c - 0.01) || (local_1c + 0.01 < local_14)) ||
            (*(float *)((int)param_1 + 0x120) != local_14)) ||
           ((*(float *)(*(int *)((int)param_1 + 0x254) + 0x108) <= local_18 ||
            (iVar5 = FUN_00522850(*(int *)((int)param_1 + 0x40)), iVar5 < 0x10)))) {
          iVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x10);
          if (*(char *)(iVar5 + 0x62) == '\0') {
            ExceptionList = local_10;
            return;
          }
          *(undefined1 *)(iVar5 + 0x62) = 0;
          ExceptionList = local_10;
          return;
        }
      }
      *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x10) + 0x62) = 1;
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 4) {
      iVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x10);
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0x62) != '\0')) {
        *(undefined1 *)(iVar5 + 0x62) = 0;
      }
      if (*(int *)((int)param_1 + 0x1c8) - *piVar1 >> 5 == 1) {
        fVar4 = local_14 + 180.0;
        if (360.0 <= fVar4) {
          fVar4 = fVar4 - 360.0;
        }
        fVar10 = *(float *)((int)param_1 + 0x120);
        if ((fVar10 < fVar4 - *(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) * 0.5) ||
           (*(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) * 0.5 + fVar4 < fVar10)) {
          FUN_005174e0((int)param_1);
        }
        else {
          if (fVar4 != fVar10) {
            *(float *)((int)param_1 + 0x120) = fVar4;
          }
          iVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x10);
          if (local_24 < local_20) {
            if ((iVar5 != 0) && (*(char *)(iVar5 + 0x62) != '\0')) {
              *(undefined1 *)(iVar5 + 0x62) = 0;
              *(undefined1 *)((int)param_1 + 0x2c8) = 0;
            }
          }
          else {
            *(undefined1 *)(iVar5 + 0x62) = 1;
          }
        }
        if (local_20 < 0.1) {
          if (0.3 < local_18) {
            FUN_00591070("WORLD",
                         "Overshot our mark slightly - too fast. Removing waypoint and coming to a complete stop as close as we can."
                        );
            *(int *)((int)param_1 + 0x1c8) = *piVar1;
            FUN_00516670(param_1,4);
            ExceptionList = local_10;
            return;
          }
          *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x10) + 0x62) = 0;
          FUN_00518870((int)param_1);
          *(double *)((int)param_1 + 0x28) = (double)*(float *)(*piVar1 + 8);
          *(double *)((int)param_1 + 0x30) = (double)*(float *)(*piVar1 + 0xc);
          *(int *)((int)param_1 + 0x1c8) = *piVar1;
          FUN_00591070("WORLD","%s: reached our final destination.");
          *(undefined4 *)((int)param_1 + 0xd4) = 0;
          *(undefined4 *)((int)param_1 + 0x2c0) = 0;
          *(undefined4 *)((int)param_1 + 0x2c4) = 0;
          FUN_00516670(param_1,0);
          *(undefined1 *)((int)param_1 + 0x2c8) = 0;
          ExceptionList = local_10;
          return;
        }
      }
      else if (local_20 < 4.0) {
        FUN_004eb600(piVar1,&local_24,(undefined4 *)*piVar1);
        pfVar2 = (float *)*piVar1;
        local_28 = (float)*(double *)((int)param_1 + 0x28);
        local_24 = (float)*(double *)((int)param_1 + 0x30);
        *pfVar2 = local_28;
        pfVar2[1] = local_24;
        FUN_00516430((int)param_1);
        local_28 = (float)*(double *)((int)param_1 + 0x28);
        fVar4 = (float)*(double *)((int)param_1 + 0x30);
        local_8 = 2;
        local_24 = fVar4;
        FUN_00591010((Vec2 *)&local_28,(Vec2 *)(*piVar1 + 8));
        local_8 = 0xffffffff;
        *(double *)((int)param_1 + 0x138) = (double)fVar4;
        FUN_00591070("WORLD","%s: Hit waypoint, %d remaining.");
        ExceptionList = local_10;
        return;
      }
    }
    else if (iVar5 == 5) {
      if ((*(float *)((int)param_1 + 0x118) == 0.0) && (*(float *)((int)param_1 + 0x11c) == 0.0)) {
        *(undefined4 *)((int)param_1 + 0x2c4) = 0;
        FUN_00516670(param_1,0);
        ExceptionList = local_10;
        return;
      }
      uVar6 = FUN_00518820((int)param_1);
      local_30 = (char)uVar6;
      if (local_30 == '\0') {
        local_38 = 0xbf800000;
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0xc61c3c00;
        uStack_3c = 0xc61c3c00;
        local_34 = 0;
        FUN_00519230(piVar1,(int *)&local_24,(undefined4 *)*piVar1,&local_48);
      }
    }
    ExceptionList = local_10;
    return;
  }
  iVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x10);
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0x62) != '\0')) {
    *(undefined1 *)(iVar5 + 0x62) = 0;
  }
  if (*(char *)((int)param_1 + 0x2c8) == '\0') {
    FUN_005226c0(*(int *)((int)param_1 + 0x40));
    fVar10 = 30.0;
    if (fVar4 < 30.0) {
      FUN_005226c0(*(int *)((int)param_1 + 0x40));
      fVar4 = (fVar4 / 10.0) * 9.0;
      fVar10 = fVar4;
      local_24 = fVar4;
    }
    FUN_005228c0(*(int *)((int)param_1 + 0x40));
    if ((fVar4 < fVar10) && (*(char *)((int)param_1 + 0x2c8) == '\0')) {
      ExceptionList = local_10;
      return;
    }
  }
  fVar4 = *(float *)((int)param_1 + 0x120);
  if ((local_14 < fVar4 - 1.0) || (fVar4 + 1.0 < local_14)) {
    FUN_005174e0((int)param_1);
    *(undefined1 *)((int)param_1 + 0x2c8) = 1;
    ExceptionList = local_10;
    return;
  }
  if (local_14 != fVar4) {
    *(float *)((int)param_1 + 0x120) = local_14;
  }
  if ((local_18 < *(float *)(*(int *)((int)param_1 + 0x254) + 0x108) - 1e-05) &&
     (iVar5 = FUN_00522850(*(int *)((int)param_1 + 0x40)), 4 < iVar5)) {
    *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x10) + 0x62) = 1;
    *(undefined1 *)((int)param_1 + 0x2c8) = 1;
    ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x10) + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x2c8) = 1;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00517120(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1f69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  local_14 = 0.0;
  local_8 = 0;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)(param_1 + 0x118),(Vec2 *)&local_18);
  local_8 = 0xffffffff;
  fVar3 = 0.1;
  if (local_14 <= 0.1) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 0x62) = 0;
    FUN_00518870(param_1);
    puVar1 = *(undefined4 **)(param_1 + 0x1c4);
    if (*(int *)(param_1 + 0x1c8) - (int)puVar1 >> 5 != 0) {
      FUN_004eb600((undefined4 *)(param_1 + 0x1c4),&local_14,puVar1);
    }
    FUN_00516430(param_1);
    FUN_00591070(&DAT_005cdc70,"%s: Came to a halt.");
    ExceptionList = local_10;
    return;
  }
  FUN_00592f80(0.0,0,*(float *)(param_1 + 0x118));
  local_14 = fVar3 + 180.0;
  fVar3 = local_14;
  if (360.0 <= local_14) {
    fVar3 = local_14 - 360.0;
  }
  if (fVar3 != *(float *)(param_1 + 0x128)) {
    FUN_005174e0(param_1);
  }
  if (360.0 <= local_14) {
    local_14 = local_14 - 360.0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
  if (*(float *)(param_1 + 0x120) == local_14) {
    *(undefined1 *)(iVar2 + 0x62) = 1;
    ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(iVar2 + 0x62) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005172c0(int param_1)

{
  uint uVar1;
  double dVar2;
  float in_XMM1_Da;
  double dVar3;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1fab;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_14 = 0.0;
  local_8 = 0;
  local_1c = in_XMM1_Da;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)(param_1 + 0x118),(Vec2 *)&local_18);
  local_2c = 0;
  local_28 = 0;
  local_8 = 1;
  dVar3 = (double)local_1c * 0.017453292519943295;
  dVar2 = dVar3;
  libm_sse2_sin_precise(uVar1);
  local_1c = (float)(dVar2 * (double)local_14);
  libm_sse2_cos_precise();
  local_20 = local_1c;
  local_1c = (float)(dVar3 * (double)local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  cocos2d::Vec2::operator+((Vec2 *)&local_2c,(Vec2 *)&local_18);
  *(undefined4 *)(param_1 + 0x118) = local_18;
  *(float *)(param_1 + 0x11c) = local_14;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005173c0(int param_1)

{
  FUN_00592f80(0.0,0,*(float *)(param_1 + 0x118));
  return;
}


void __fastcall FUN_00517400(int param_1)

{
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  FUN_00591070(&DAT_005cdc70,"%s: Autopilot cancelled.");
  return;
}


void __fastcall FUN_00517440(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
  if (iVar1 == 0) {
    return;
  }
  FUN_00437c60(*(int **)(iVar1 + 0xc));
  return;
}


void __fastcall FUN_005174e0(int param_1)

{
  int *piVar1;
  char cVar2;
  float in_XMM1_Da;
  float fVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if ((cVar2 != '\0') && (in_XMM1_Da != *(float *)(param_1 + 0x128))) {
      fVar3 = in_XMM1_Da;
      FUN_00593220();
      if (fVar3 <= 0.6) {
        *(float *)(param_1 + 0x120) = in_XMM1_Da;
        return;
      }
      *(float *)(param_1 + 0x128) = in_XMM1_Da;
      fVar3 = in_XMM1_Da - *(float *)(param_1 + 0x120);
      if ((fVar3 < 180.0) && ((0.0 <= fVar3 || (fVar3 < -180.0)))) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x34) = 1;
        return;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x34) = 2;
    }
  }
  return;
}


void __thiscall FUN_005175a0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1fd9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = *(undefined4 **)((int)this + 0x1c8);
  local_30 = 0;
  local_2c = 0;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = 0xbf800000;
  local_1c = 0;
  local_18 = 0;
  if (*(undefined4 **)((int)this + 0x1cc) == puVar1) {
    FUN_00420fb0((void *)((int)this + 0x1c4),puVar1,&local_30);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = 0xbf800000;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = local_14;
    *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 0x20;
  }
  FUN_00517820((int)this);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00517670(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  puVar1 = *(undefined4 **)((int)this + 0x1c8);
  local_20 = (float)*(double *)(param_1 + 0x20);
  local_24 = 0;
  local_18 = 0xbf800000;
  local_14 = param_1;
  local_10 = 0;
  local_1c = (float)*(double *)(param_1 + 0x28);
  if (*(undefined4 **)((int)this + 0x1cc) != puVar1) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = local_20;
    puVar1[3] = local_1c;
    puVar1[4] = 0xbf800000;
    puVar1[5] = param_1;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = local_c;
    *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 0x20;
    FUN_00517820((int)this);
    return;
  }
  FUN_00420fb0((void *)((int)this + 0x1c4),puVar1,&local_28);
  FUN_00517820((int)this);
  return;
}


void __thiscall FUN_00517720(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x1c4);
  if (*(int *)((int)this + 0x1c8) - iVar2 >> 5 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *param_1 = *(undefined4 *)(iVar2 + 8);
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0xc61c3c00;
  param_1[1] = 0xc61c3c00;
  return;
}


void __thiscall FUN_00517770(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x1c4);
  iVar3 = *(int *)((int)this + 0x1c8) - iVar2 >> 5;
  if (iVar3 != 0) {
    iVar3 = iVar3 * 0x20;
    uVar1 = *(undefined4 *)(iVar3 + -0x14 + iVar2);
    *param_1 = *(undefined4 *)(iVar3 + -0x18 + iVar2);
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0xc61c3c00;
  param_1[1] = 0xc61c3c00;
  return;
}


undefined4 __fastcall FUN_005177d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5;
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 * 0x20 + -0xc + *(int *)(param_1 + 0x1c4));
  }
  return 0;
}


int __fastcall FUN_005177f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5;
  if (iVar1 != 0) {
    return iVar1 * 0x20 + -0x20 + *(int *)(param_1 + 0x1c4);
  }
  return 0;
}


void __fastcall FUN_00517820(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *this;
  void *pvVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  byte *in_stack_ffffff90;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c2010;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x234) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5;
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 * 0x20 + -0xc + *(int *)(param_1 + 0x1c4)), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x30) == 1)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      piVar2 = (int *)FUN_00591e00((undefined1 *)local_44,"travelling_to_or_at_%s");
      FUN_00413230(local_2c,piVar2);
      if (0xf < local_30) {
        pvVar3 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar3 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      ppppcVar5 = local_2c;
      if (0xf < local_18) {
        ppppcVar5 = (char ****)local_2c[0];
      }
      ppppcVar4 = local_2c;
      if (0xf < local_18) {
        ppppcVar4 = (char ****)local_2c[0];
      }
      FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar4,(char *)((int)ppppcVar5 + local_1c),
                   (undefined1 *)ppppcVar5);
      local_48 = &stack0xffffff90;
      FUN_004024e0(&stack0xffffff90,local_2c);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004a0ee0(this,in_stack_ffffff90);
      if (0xf < local_18) {
        ppppcVar5 = (char ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppcVar5 = (char ****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppcVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005179b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *this;
  void *pvVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  byte *in_stack_ffffff90;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c2010;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x234) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5;
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 * 0x20 + -0xc + *(int *)(param_1 + 0x1c4)), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x30) == 1)) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      piVar2 = (int *)FUN_00591e00((undefined1 *)local_44,"travelling_to_or_at_%s");
      FUN_00413230(local_2c,piVar2);
      if (0xf < local_30) {
        pvVar3 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar3 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      ppppcVar5 = local_2c;
      if (0xf < local_18) {
        ppppcVar5 = (char ****)local_2c[0];
      }
      ppppcVar4 = local_2c;
      if (0xf < local_18) {
        ppppcVar4 = (char ****)local_2c[0];
      }
      FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar4,(char *)((int)ppppcVar5 + local_1c),
                   (undefined1 *)ppppcVar5);
      local_48 = &stack0xffffff90;
      FUN_004024e0(&stack0xffffff90,local_2c);
      local_8._0_1_ = 1;
      this = FUN_00412df0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004a0ee0(this,in_stack_ffffff90);
      if (0xf < local_18) {
        ppppcVar5 = (char ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppcVar5 = (char ****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppcVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00517b40(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_005179b0((int)this);
    *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0x1c4);
    *(int *)(*(int *)((int)this + 0x44) + 0x34) = param_1;
    FUN_00517ce0(this,param_1);
  }
  return;
}


void __fastcall FUN_00517b80(int param_1)

{
  FUN_005179b0(param_1);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  return;
}


void __thiscall FUN_00517bc0(void *this,undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2049;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x2f4) = param_1;
  *(undefined4 *)((int)this + 0x2f8) = param_2;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  puVar3 = (undefined4 *)
           FUN_00520e10(*(void **)((int)this + 0x24),(float)*(double *)((int)this + 0x28),
                        (float)*(double *)((int)this + 0x30),'\x01');
  uVar4 = FUN_00520e10(*(void **)((int)this + 0x24),param_1,param_2,'\0');
  if ((puVar3 == (undefined4 *)0xffffffff) || (uVar4 == 0xffffffff)) {
    FUN_00591070("WORLD","%s: ERROR - unable to find a nav mesh in sector %s");
    bVar1 = cc_assert_script_compatible("ERROR");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","ERROR",uVar2);
    }
  }
  FUN_00517ef0(this,puVar3,uVar4);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00517ce0(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)
           FUN_00520e10(*(void **)((int)this + 0x24),(float)*(double *)((int)this + 0x28),
                        (float)*(double *)((int)this + 0x30),'\x01');
  uVar3 = FUN_00520e10(*(void **)((int)this + 0x24),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc),'\0');
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(param_1 + 0xc);
  if ((puVar2 == (undefined4 *)0xffffffff) || (uVar3 == 0xffffffff)) {
    FUN_00591070("WORLD","%s: ERROR - unable to find a nav mesh in sector %s");
    bVar1 = cc_assert_script_compatible("ERROR");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s","ERROR");
    }
  }
  FUN_00517ef0(this,puVar2,uVar3);
  return;
}


void __thiscall FUN_00517dd0(void *this,int param_1)

{
  double dVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  *(uint *)((int)this + 0x2f0) = -(uint)(param_1 != 0) & param_1 + 8U;
  dVar1 = *(double *)(param_1 + 0x30);
  *(float *)((int)this + 0x2f4) = (float)*(double *)(param_1 + 0x28);
  *(float *)((int)this + 0x2f8) = (float)dVar1;
  puVar3 = (undefined4 *)
           FUN_00520e10(*(void **)((int)this + 0x24),(float)*(double *)((int)this + 0x28),
                        (float)*(double *)((int)this + 0x30),'\x01');
  uVar4 = FUN_00520e10(*(void **)((int)this + 0x24),(float)*(double *)(param_1 + 0x28),
                       (float)*(double *)(param_1 + 0x30),'\0');
  if ((puVar3 == (undefined4 *)0xffffffff) || (uVar4 == 0xffffffff)) {
    FUN_00591070("WORLD","%s: ERROR - unable to find a nav mesh in sector %s");
    bVar2 = cc_assert_script_compatible("ERROR");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s","ERROR");
    }
  }
  FUN_00517ef0(this,puVar3,uVar4);
  return;
}


void __thiscall FUN_00517ef0(void *this,undefined4 *param_1,int param_2)

{
  void *_Src;
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0xffffffff;
  puStack_c = &LAB_005c2094;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)(*(int *)((int)this + 0x24) + 0xa8);
  cocos2d::Vec2::getDistanceSq
            ((Vec2 *)(*(int *)(iVar7 + (int)param_1 * 4) + 8),
             (Vec2 *)(*(int *)(iVar7 + param_2 * 4) + 8));
  puVar1 = DAT_0065c280;
  if (*(char *)((int)this + 0x2ec) != '\0') {
    if (DAT_0065c280 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_005adb0f(0x98);
      local_8 = puVar1;
      DAT_0065c280 = FUN_0058f5d0(puVar3);
      local_8 = (undefined4 *)0xffffffff;
    }
    puVar1 = DAT_0065c280;
    FUN_00591070("DETAIL","Pather: Removing requests for owner");
    piVar6 = puVar1 + 0xf;
    local_14 = 3;
    do {
      iVar7 = piVar6[1] - *piVar6 >> 2;
      if (iVar7 != 0) {
        while (iVar7 = iVar7 + -1, -1 < iVar7) {
          iVar4 = *piVar6;
          iVar2 = *(int *)(iVar4 + iVar7 * 4);
          if ((iVar2 != 0) && (*(void **)(iVar2 + 0x14) == this)) {
            if (iVar2 == puVar1[0x13]) {
              puVar1[0x13] = 0;
              iVar4 = *piVar6;
            }
            _Dst = (void *)(iVar4 + iVar7 * 4);
            _Src = (void *)((int)_Dst + 4);
            memmove(_Dst,_Src,piVar6[1] - (int)_Src);
            piVar6[1] = piVar6[1] + -4;
          }
        }
      }
      local_14 = local_14 + -1;
      piVar6 = piVar6 + -3;
    } while (-1 < local_14);
    FUN_00591070("DETAIL","Pather: Finished removing requests.");
  }
  puVar3 = DAT_0065c280;
  puVar1 = (undefined4 *)((int)this + 0x2d4);
  *(undefined1 *)((int)this + 0x2ec) = 1;
  *(undefined4 *)((int)this + 0x2d8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 4;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *puVar1 = param_1;
  *(int *)((int)this + 0x2d8) = param_2;
  *(void **)((int)this + 0x2e8) = this;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_005adb0f(0x98);
    local_8 = (undefined4 *)0x1;
    puVar3 = FUN_0058f5d0(param_1);
    local_8 = (undefined4 *)0xffffffff;
    DAT_0065c280 = puVar3;
  }
  param_1 = (undefined4 *)CONCAT13(*(char *)((int)this + 0x234),param_1._0_3_);
  iVar7 = 0x30;
  if (*(char *)((int)this + 0x234) != '\0') {
    iVar7 = 0x18;
  }
  piVar6 = (int *)(iVar7 + (int)puVar3);
  piVar5 = (int *)piVar6[1];
  if (((int)piVar5 - *piVar6 & 0xfffffffcU) == 0x40) {
    FUN_00591070("DETAIL","Pather: Maximum queued path requests exceeded");
    iVar7 = 0x34;
    if (param_1._3_1_ != '\0') {
      iVar7 = 0x1c;
    }
    piVar5 = *(int **)(iVar7 + (int)puVar3);
  }
  param_1 = puVar1;
  if ((int *)piVar6[2] == piVar5) {
    FUN_004141e0(piVar6,piVar5,&param_1);
  }
  else {
    *piVar5 = (int)puVar1;
    piVar6[1] = piVar6[1] + 4;
  }
  FUN_00591070("DETAIL","Pather: Got path request from %s");
  FUN_00591070("DETAIL","Pather: Requests in queue: %d");
  FUN_00591070(&DAT_005cdc70,
               "%s: plotting a course to nav point %d, distance as the neutrino flies is %fGms");
  ExceptionList = local_10;
  return;
}
