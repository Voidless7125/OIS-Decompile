#include "../ois_server.exe.h"


void FUN_004787e0(void)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  basic_string<> *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  byte *pbVar13;
  basic_string<> *pbVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  undefined4 *puVar18;
  undefined2 in_FPUControlWord;
  double dVar19;
  undefined4 *in_stack_fffffdf4;
  byte *in_stack_fffffdf8;
  undefined4 local_1dc;
  undefined4 local_1d8 [2];
  undefined4 local_1d0;
  basic_string<> *local_1cc;
  undefined1 *local_1c8;
  undefined1 *local_1c4;
  int local_1c0 [2];
  uint local_1b8;
  undefined1 *local_1b4;
  basic_string<> *local_1b0;
  undefined4 *local_1ac;
  basic_string<> *local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined1 *local_19c;
  char local_195;
  basic_string<> local_194 [24];
  basic_string<> local_17c [24];
  basic_string<> local_164 [24];
  basic_string<> local_14c [24];
  basic_string<> local_134 [24];
  int local_11c;
  undefined1 local_117;
  int local_114;
  int local_110;
  basic_string<> local_10c [24];
  undefined1 local_f4 [40];
  basic_string<> local_cc [24];
  basic_string<> local_b4 [24];
  basic_string<> local_9c [12];
  basic_string<> *local_90;
  int local_8c;
  basic_string<> local_84 [24];
  basic_string<> local_6c [12];
  int local_60;
  int local_5c;
  basic_string<> local_54 [24];
  int local_3c [4];
  basic_string<> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b885b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1a4 = 0;
  std::basic_string<>::basic_string<>(local_54,"roomid");
  local_8 = 0;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  pcVar5 = (char *)(local_1a0 + 0x28);
  if (0xf < *(uint *)(local_1a0 + 0x3c)) {
    pcVar5 = *(char **)pcVar5;
  }
  pbVar6 = (basic_string<> *)atoi(pcVar5);
  local_8 = 1;
  local_1a8 = pbVar6;
  FUN_00401b20((int *)local_54);
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_194,"shipid");
  local_8 = 2;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_194);
  puVar18 = (undefined4 *)(local_1a0 + 0x28);
  FUN_00402950((int)local_17c);
  local_8._0_1_ = 3;
  FUN_004027c0(local_17c,puVar18);
  local_8._0_1_ = 6;
  FUN_00401b20((int *)local_194);
  local_8._0_1_ = 5;
  puVar18 = (undefined4 *)FUN_004131e0(local_17c,&local_1b0);
  puVar7 = (undefined4 *)std::basic_string<>::end(local_17c);
  puVar8 = (undefined4 *)FUN_004131e0(local_17c,&local_1c4);
  FUN_00413ec0(local_1c0,tolower_exref,(char *)*puVar8,(char *)*puVar7,(undefined1 *)*puVar18);
  if (pbVar6 == (basic_string<> *)0xffffffff) {
    local_1b0 = (basic_string<> *)FUN_005adb0f(0x6a0);
    local_8._0_1_ = 8;
    local_1ac = FUN_00537b10((undefined4 *)local_1b0);
    local_8._0_1_ = 5;
  }
  else {
    local_1b0 = (basic_string<> *)&stack0xfffffdf4;
    FUN_00402950((int)&stack0xfffffdf4);
    local_8._0_1_ = 7;
    FUN_004027c0(&stack0xfffffdf4,(undefined4 *)local_17c);
    local_8._0_1_ = 5;
    puVar18 = (undefined4 *)FUN_004a75d0(in_stack_fffffdf4);
    local_1ac = FUN_00534df0(puVar18);
    local_1ac[0xfc] = puVar18;
  }
  std::basic_string<>::basic_string<>(local_54,"customfield");
  local_8._0_1_ = 9;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  local_1b0 = (basic_string<> *)&stack0xfffffdf4;
  puVar18 = (undefined4 *)(local_1a0 + 0x28);
  FUN_00402950((int)&stack0xfffffdf4);
  local_8._0_1_ = 10;
  FUN_004027c0(&stack0xfffffdf4,puVar18);
  local_8._0_1_ = 9;
  piVar9 = (int *)FUN_00592a70(local_2c,'^',in_stack_fffffdf4);
  puVar18 = local_1ac;
  FUN_00413230(local_1ac + 3,piVar9);
  local_8._0_1_ = 0xb;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 0xc;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>(local_54,"canbedamaged");
  local_8._0_1_ = 0xd;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),&DAT_005e425c);
  local_8._0_1_ = 0xe;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  if (cVar3 != '\0') {
    *(undefined1 *)((int)puVar18 + 0xfe) = 1;
  }
  std::basic_string<>::basic_string<>(local_54,"cameraclick");
  local_8._0_1_ = 0xf;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),&DAT_005e425c);
  local_8._0_1_ = 0x10;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  if (cVar3 != '\0') {
    *(undefined1 *)(puVar18 + 0x112) = 1;
  }
  std::basic_string<>::basic_string<>(local_54,"tooltip");
  local_8._0_1_ = 0x11;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_54);
  local_8._0_1_ = 0x12;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_54,"tooltip");
    local_8._0_1_ = 0x13;
    FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
    std::basic_string<>::operator=
              ((basic_string<> *)(puVar18 + 9),(basic_string<> *)(local_1a0 + 0x28));
    local_8._0_1_ = 0x14;
    FUN_00401b20((int *)local_54);
  }
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>(local_54,"gender");
  local_8._0_1_ = 0x15;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),&DAT_005ea3ec);
  local_8._0_1_ = 0x16;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  puVar18[0x1a7] = (uint)(cVar3 != '\0');
  std::basic_string<>::basic_string<>(local_54,"interactable");
  local_8._0_1_ = 0x17;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"false");
  local_8._0_1_ = 0x18;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  if (cVar3 != '\0') {
    *(undefined1 *)(puVar18 + 0x193) = 0;
  }
  std::basic_string<>::basic_string<>(local_54,"collider");
  local_8._0_1_ = 0x19;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),&DAT_005e425c);
  local_8._0_1_ = 0x1a;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  if (cVar3 != '\0') {
    *(undefined1 *)((int)puVar18 + 0x449) = 1;
  }
  std::basic_string<>::basic_string<>(local_54,"id");
  local_8._0_1_ = 0x1b;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  local_1b0 = (basic_string<> *)(puVar18 + 0x16);
  std::basic_string<>::operator=(local_1b0,(basic_string<> *)(local_1a0 + 0x28));
  local_8._0_1_ = 0x1c;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>(local_54,"type");
  local_8._0_1_ = 0x1d;
  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
  cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"model");
  local_8._0_1_ = 0x1e;
  FUN_00401b20((int *)local_54);
  local_8._0_1_ = 5;
  if (cVar3 == '\0') {
    std::basic_string<>::basic_string<>(local_54,"type");
    local_8._0_1_ = 0x1f;
    FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
    cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"spotlight");
    local_8._0_1_ = 0x20;
    FUN_00401b20((int *)local_54);
    local_8._0_1_ = 5;
    if (cVar3 == '\0') {
      std::basic_string<>::basic_string<>(local_54,"type");
      local_8._0_1_ = 0x21;
      FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
      cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"directionlight");
      local_8._0_1_ = 0x22;
      FUN_00401b20((int *)local_54);
      local_8._0_1_ = 5;
      if (cVar3 == '\0') {
        std::basic_string<>::basic_string<>(local_54,"type");
        local_8._0_1_ = 0x23;
        FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
        cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"pointlight");
        local_8._0_1_ = 0x24;
        FUN_00401b20((int *)local_54);
        local_8._0_1_ = 5;
        if (cVar3 == '\0') {
          std::basic_string<>::basic_string<>(local_54,"type");
          local_8._0_1_ = 0x25;
          FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
          cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"screen");
          local_8._0_1_ = 0x26;
          FUN_00401b20((int *)local_54);
          local_8._0_1_ = 5;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 5;
          if (cVar3 == '\0') {
            local_8._0_1_ = uVar1;
            std::basic_string<>::basic_string<>(local_54,"type");
            local_8._0_1_ = 0x29;
            FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
            cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"character");
            local_8._0_1_ = 0x2a;
            FUN_00401b20((int *)local_54);
            local_8._0_1_ = 5;
            uVar1 = (undefined1)local_8;
            local_8._0_1_ = 5;
            if (cVar3 == '\0') {
              local_8._0_1_ = uVar1;
              std::basic_string<>::basic_string<>(local_54,"type");
              local_8._0_1_ = 0x2e;
              FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
              cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),(byte *)"spawnpoint");
              local_8._0_1_ = 0x2f;
              FUN_00401b20((int *)local_54);
              local_8._0_1_ = 5;
              if (cVar3 != '\0') {
                puVar18[0xf] = 6;
                std::basic_string<>::basic_string<>(local_54,"characterposition");
                local_8._0_1_ = 0x30;
                iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_54);
                local_8._0_1_ = 0x31;
                FUN_00401b20((int *)local_54);
                local_8._0_1_ = 5;
                if (iVar10 != 0) {
                  std::basic_string<>::basic_string<>(local_54,"characterposition");
                  local_8._0_1_ = 0x32;
                  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
                  local_1b4 = &stack0xfffffdf8;
                  puVar18 = (undefined4 *)(local_1a0 + 0x28);
                  FUN_00402950((int)&stack0xfffffdf8);
                  local_8._0_1_ = 0x33;
                  FUN_004027c0(&stack0xfffffdf8,puVar18);
                  local_8._0_1_ = 0x32;
                  iVar10 = FUN_00537a80(in_stack_fffffdf8);
                  local_1ac[0x39] = iVar10;
                  local_8._0_1_ = 0x34;
                  FUN_00401b20((int *)local_54);
                }
                local_8._0_1_ = 5;
                std::basic_string<>::basic_string<>(local_54,"tags");
                local_8._0_1_ = 0x35;
                iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_54);
                local_8._0_1_ = 0x36;
                FUN_00401b20((int *)local_54);
                local_8._0_1_ = 5;
                if (iVar10 != 0) {
                  std::basic_string<>::basic_string<>(local_b4,"tags");
                  local_8._0_1_ = 0x37;
                  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_b4);
                  local_1b4 = &stack0xfffffdf8;
                  puVar18 = (undefined4 *)(local_1a0 + 0x28);
                  FUN_00402950((int)&stack0xfffffdf8);
                  local_8._0_1_ = 0x38;
                  FUN_004027c0(&stack0xfffffdf8,puVar18);
                  local_8._0_1_ = 0x37;
                  FUN_00592d70(&local_60,',',(undefined4 *)in_stack_fffffdf8);
                  local_8._0_1_ = 0x3b;
                  FUN_00401b20((int *)local_b4);
                  local_1b8 = 0;
                  iVar10 = local_5c - local_60 >> 0x1f;
                  if ((local_5c - local_60) / 0x18 + iVar10 != iVar10) {
                    local_1c0[0] = 0;
                    do {
                      local_8._0_1_ = 0x3a;
                      local_1c8 = &stack0xfffffdf8;
                      puVar18 = (undefined4 *)(local_1c0[0] + local_60);
                      FUN_00402950((int)&stack0xfffffdf8);
                      local_8._0_1_ = 0x3c;
                      FUN_004027c0(&stack0xfffffdf8,puVar18);
                      local_8._0_1_ = 0x3a;
                      FUN_00592d70(&local_90,':',(undefined4 *)in_stack_fffffdf8);
                      pbVar6 = local_90;
                      local_8._0_1_ = 0x3d;
                      puVar18 = (undefined4 *)FUN_004131e0(local_90,&local_1d0);
                      puVar7 = (undefined4 *)std::basic_string<>::end(pbVar6);
                      puVar8 = (undefined4 *)FUN_004131e0(pbVar6,local_1d8);
                      FUN_00413ec0(&local_1dc,tolower_exref,(char *)*puVar8,(char *)*puVar7,
                                   (undefined1 *)*puVar18);
                      iVar10 = (local_8c - (int)local_90) / 0x18;
                      if (iVar10 == 1) {
                        puVar11 = (undefined1 *)FUN_005adb0f(0x1c);
                        pbVar6 = local_90;
                        local_8._0_1_ = 0x3e;
                        local_1cc = local_54;
                        FUN_00402950((int)local_54);
                        local_8._0_1_ = 0x3f;
                        FUN_004027c0(local_54,(undefined4 *)pbVar6);
                        local_8._0_1_ = 0x40;
                        FUN_004024e0(puVar11,(undefined4 *)local_54);
                        *(undefined4 *)(puVar11 + 0x18) = 100;
                        local_8._0_1_ = 0x41;
                        FUN_00401b20((int *)local_54);
                        ppuVar12 = &local_1c4;
                        local_1c4 = puVar11;
LAB_00479392:
                        local_8._0_1_ = 0x3d;
                        FUN_00412900(local_1ac + 0x172,ppuVar12);
                      }
                      else if (iVar10 == 2) {
                        puVar11 = (undefined1 *)FUN_005adb0f(0x1c);
                        local_8._0_1_ = 0x42;
                        pbVar6 = local_90 + 0x18;
                        if (0xf < *(uint *)(local_90 + 0x2c)) {
                          pbVar6 = *(basic_string<> **)pbVar6;
                        }
                        local_19c = puVar11;
                        iVar10 = atoi((char *)pbVar6);
                        pbVar6 = local_90;
                        local_1cc = local_54;
                        FUN_00402950((int)local_54);
                        local_8._0_1_ = 0x43;
                        FUN_004027c0(local_54,(undefined4 *)pbVar6);
                        local_8._0_1_ = 0x44;
                        FUN_004024e0(puVar11,(undefined4 *)local_54);
                        *(int *)(puVar11 + 0x18) = iVar10;
                        local_8._0_1_ = 0x45;
                        FUN_00401b20((int *)local_54);
                        ppuVar12 = &local_1b4;
                        local_1b4 = puVar11;
                        goto LAB_00479392;
                      }
                      local_8._0_1_ = 0x46;
                      FUN_004025a0((int *)&local_90);
                      local_1b8 = local_1b8 + 1;
                      local_1c0[0] = local_1c0[0] + 0x18;
                    } while (local_1b8 < (uint)((local_5c - local_60) / 0x18));
                  }
                  local_8._0_1_ = 0x47;
                  FUN_004025a0(&local_60);
                }
                pbVar6 = local_1b0;
                local_8._0_1_ = 5;
                iVar10 = FUN_0042ee70(local_1b0,(byte *)"extra");
                puVar18 = local_1ac;
                if (iVar10 != -1) {
                  *(undefined1 *)(local_1ac + 0x3f) = 1;
                }
                iVar10 = FUN_0042ee70(pbVar6,(byte *)"sitting");
                if (iVar10 != -1) {
                  puVar18[0x39] = 1;
                }
                iVar10 = FUN_0042ee70(pbVar6,(byte *)"behindbar");
                if (iVar10 != -1) {
                  puVar18[0x39] = 3;
                }
                iVar10 = FUN_0042ee70(pbVar6,(byte *)"leaning");
                if (iVar10 != -1) {
                  puVar18[0x39] = 2;
                }
                iVar10 = FUN_0042ee70(pbVar6,(byte *)"lying");
                if (iVar10 != -1) {
                  puVar18[0x39] = 4;
                }
                std::basic_string<>::basic_string<>(local_b4,"extradensity");
                local_8._0_1_ = 0x48;
                iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_b4);
                local_8._0_1_ = 0x49;
                FUN_00401b20((int *)local_b4);
                local_8._0_1_ = 5;
                if (iVar10 != 0) {
                  std::basic_string<>::basic_string<>(local_b4,"extradensity");
                  local_8._0_1_ = 0x4a;
                  FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_b4);
                  pcVar5 = (char *)(local_1a0 + 0x28);
                  if (0xf < *(uint *)(local_1a0 + 0x3c)) {
                    pcVar5 = *(char **)pcVar5;
                  }
                  iVar10 = atoi(pcVar5);
                  puVar18[0x3e] = iVar10;
                  local_8._0_1_ = 0x4b;
                  pbVar6 = local_b4;
                  goto LAB_00479533;
                }
              }
            }
            else {
              puVar18[0xf] = 5;
              std::basic_string<>::basic_string<>(local_54,"character");
              local_8._0_1_ = 0x2b;
              FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
              local_1b0 = (basic_string<> *)&stack0xfffffdf8;
              FUN_00402950((int)&stack0xfffffdf8);
              local_8._0_1_ = 0x2c;
              FUN_004027c0(&stack0xfffffdf8,(undefined4 *)(local_1a0 + 0x28));
              puVar18 = local_1ac;
              local_8._0_1_ = 0x2b;
              FUN_0053ca40(local_1ac,0,in_stack_fffffdf8);
              local_8._0_1_ = 0x2d;
              pbVar6 = local_54;
LAB_00479533:
              FUN_00401b20((int *)pbVar6);
            }
          }
          else {
            puVar18[0xf] = 4;
            std::basic_string<>::basic_string<>(local_54,"hasmenu");
            local_8._0_1_ = 0x27;
            FUN_00419c50(&DAT_0065b530,&local_1a0,(byte *)local_54);
            cVar3 = FUN_00403260((void *)(local_1a0 + 0x28),&DAT_005e425c);
            local_8._0_1_ = 0x28;
            FUN_00401b20((int *)local_54);
            if (cVar3 != '\0') {
              *(undefined1 *)(puVar18 + 2) = 1;
            }
          }
        }
        else {
          puVar18[0xf] = 2;
        }
      }
      else {
        puVar18[0xf] = 1;
      }
    }
    else {
      puVar18[0xf] = 3;
    }
  }
  else {
    puVar18[0xf] = 0;
  }
  local_8._0_1_ = 5;
  if (local_1a8 == (basic_string<> *)0xffffffff) {
    if (puVar18[0xf] == 4) {
      *(undefined1 *)((int)puVar18 + 0x3f5) = 1;
      iVar10 = FUN_004023e0();
      *(undefined4 **)(iVar10 + 0x3a0) = puVar18;
    }
    else {
      iVar10 = FUN_004023e0();
      *(undefined4 **)(iVar10 + 0x3a4) = puVar18;
    }
  }
  std::basic_string<>::basic_string<>(local_54,"screenswitch");
  local_8 = CONCAT31(local_8._1_3_,0x4c);
  uVar15 = 0;
  local_1a4 = 1;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_54);
  if (iVar10 == 0) {
LAB_004795e2:
    local_195 = '\0';
  }
  else {
    std::basic_string<>::basic_string<>(local_b4,"screenswitch");
    local_8 = 0x4d;
    uVar15 = 3;
    local_1a4 = 3;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_b4);
    cVar3 = FUN_004031c0(pbVar13,(byte *)"false");
    local_195 = '\x01';
    if (cVar3 == '\0') goto LAB_004795e2;
  }
  if ((uVar15 & 2) != 0) {
    uVar15 = 0;
    FUN_00401b20((int *)local_b4);
  }
  local_8 = 5;
  local_1b8 = uVar15 & 0xfffffffe;
  FUN_00401b20((int *)local_54);
  if (local_195 != '\0') {
    *(undefined1 *)(puVar18 + 0xe3) = 0;
  }
  std::basic_string<>::basic_string<>(local_b4,"movetime");
  local_8._0_1_ = 0x4e;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_b4);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_b4);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_b4,"movetime");
    local_8._0_1_ = 0x4f;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_b4);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xce] = (float)dVar19;
    FUN_00401b20((int *)local_b4);
  }
  std::basic_string<>::basic_string<>(local_b4,"animation");
  local_8._0_1_ = 0x50;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_b4);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_b4);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_b4,"animation");
    local_8._0_1_ = 0x51;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_b4);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    FUN_0042e050(puVar18 + 0x26,(char)iVar10);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_b4);
  }
  std::basic_string<>::basic_string<>(local_b4,"noconversation");
  local_8._0_1_ = 0x52;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_b4);
  cVar3 = FUN_004031c0(pbVar13,&DAT_005e425c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_b4);
  if (cVar3 != '\0') {
    *(undefined1 *)((int)puVar18 + 0xfd) = 1;
  }
  std::basic_string<>::basic_string<>(local_b4,"sound");
  local_8._0_1_ = 0x53;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_b4);
  FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
  iVar10 = FUN_00557800(in_stack_fffffdf8);
  puVar18[0xda] = iVar10;
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_b4);
  std::basic_string<>::basic_string<>(local_54,"opensound");
  local_8._0_1_ = 0x54;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_54);
  FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
  iVar10 = FUN_00557800(in_stack_fffffdf8);
  puVar18[0xcb] = iVar10;
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_54);
  std::basic_string<>::basic_string<>(local_6c,"closesound");
  local_8._0_1_ = 0x55;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_6c);
  FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
  iVar10 = FUN_00557800(in_stack_fffffdf8);
  puVar18[0xcc] = iVar10;
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_6c);
  std::basic_string<>::basic_string<>(local_9c,"movedeltax");
  local_8._0_1_ = 0x56;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_9c);
  pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
  dVar19 = atof(pcVar5);
  local_8._0_1_ = 5;
  puVar18[0xd4] = (float)dVar19;
  FUN_00401b20((int *)local_9c);
  std::basic_string<>::basic_string<>(local_14c,"movedeltay");
  local_8._0_1_ = 0x57;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_14c);
  pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
  dVar19 = atof(pcVar5);
  local_8._0_1_ = 5;
  puVar18[0xd5] = (float)dVar19;
  FUN_00401b20((int *)local_14c);
  std::basic_string<>::basic_string<>(local_164,"movedeltaz");
  local_8._0_1_ = 0x58;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_164);
  pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
  dVar19 = atof(pcVar5);
  local_8._0_1_ = 5;
  puVar18[0xd6] = (float)dVar19;
  FUN_00401b20((int *)local_164);
  std::basic_string<>::basic_string<>(local_134,"moverotx");
  local_8._0_1_ = 0x59;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_134);
  pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
  dVar19 = atof(pcVar5);
  local_8._0_1_ = 5;
  puVar18[0xd7] = (float)dVar19;
  FUN_00401b20((int *)local_134);
  std::basic_string<>::basic_string<>(local_cc,"moveroty");
  local_8._0_1_ = 0x5a;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_cc);
  pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
  dVar19 = atof(pcVar5);
  local_8._0_1_ = 5;
  puVar18[0xd8] = (float)dVar19;
  FUN_00401b20((int *)local_cc);
  std::basic_string<>::basic_string<>(local_84,"moverotz");
  local_8._0_1_ = 0x5b;
  pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
  pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
  dVar19 = atof(pcVar5);
  local_8._0_1_ = 5;
  puVar18[0xd9] = (float)dVar19;
  FUN_00401b20((int *)local_84);
  std::basic_string<>::basic_string<>(local_2c,"texturetile");
  uVar15 = local_1b8;
  local_8 = CONCAT31(local_8._1_3_,0x5c);
  uVar16 = local_1b8 | 4;
  local_1a4 = uVar16;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  if (iVar10 == 0) {
LAB_00479a89:
    local_195 = '\0';
  }
  else {
    std::basic_string<>::basic_string<>(local_84,"texturetile");
    local_8 = 0x5d;
    uVar16 = uVar15 | 0xc;
    local_1a4 = uVar16;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    cVar3 = FUN_004031c0(pbVar13,&DAT_005e425c);
    local_195 = '\x01';
    if (cVar3 == '\0') goto LAB_00479a89;
  }
  if ((uVar16 & 8) != 0) {
    uVar16 = uVar16 & 0xfffffff7;
    FUN_00401b20((int *)local_84);
  }
  local_8 = 5;
  FUN_00401b20((int *)local_2c);
  if (local_195 != '\0') {
    *(undefined1 *)(puVar18 + 0x110) = 1;
  }
  std::basic_string<>::basic_string<>(local_2c,"rotationrate");
  local_8._0_1_ = 0x5e;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"rotationrate");
    local_8._0_1_ = 0x5f;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0x111] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"objectnumber");
  local_8._0_1_ = 0x60;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"id");
    local_8._0_1_ = 0x62;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"id");
      local_8._0_1_ = 99;
      goto LAB_00479bb8;
    }
  }
  else {
    std::basic_string<>::basic_string<>(local_2c,"objectnumber");
    local_8._0_1_ = 0x61;
LAB_00479bb8:
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    puVar18[0x14] = iVar10;
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"parent");
  local_8._0_1_ = 100;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"parent");
    local_8._0_1_ = 0x65;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    puVar18[0x15] = iVar10;
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  if ((puVar18[0x15] == -1) || (*(char *)((int)puVar18 + 0x449) != '\0')) {
    std::basic_string<>::basic_string<>(local_2c,"locationx");
    local_8._0_1_ = 0x66;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xbc] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"locationy");
    local_8._0_1_ = 0x67;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xbd] = (float)dVar19;
    FUN_00401b20((int *)local_84);
    std::basic_string<>::basic_string<>(local_cc,"locationz");
    local_8._0_1_ = 0x68;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_cc);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xbe] = (float)dVar19;
    FUN_00401b20((int *)local_cc);
    *(undefined8 *)(puVar18 + 200) = *(undefined8 *)(puVar18 + 0xbc);
    puVar18[0xca] = puVar18[0xbe];
    std::basic_string<>::basic_string<>(local_134,"rotationx");
    local_8._0_1_ = 0x69;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_134);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xbf] = (float)dVar19;
    FUN_00401b20((int *)local_134);
    std::basic_string<>::basic_string<>(local_164,"rotationy");
    local_8._0_1_ = 0x6a;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_164);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xc0] = (float)dVar19;
    FUN_00401b20((int *)local_164);
    std::basic_string<>::basic_string<>(local_14c,"rotationz");
    local_8._0_1_ = 0x6b;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_14c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xc1] = (float)dVar19;
    FUN_00401b20((int *)local_14c);
    std::basic_string<>::basic_string<>(local_b4,"quaternionx");
    local_8._0_1_ = 0x6c;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_b4);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xc2] = (float)dVar19;
    FUN_00401b20((int *)local_b4);
    std::basic_string<>::basic_string<>(local_54,"quaterniony");
    local_8._0_1_ = 0x6d;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_54);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xc3] = (float)dVar19;
    FUN_00401b20((int *)local_54);
    std::basic_string<>::basic_string<>(local_6c,"quaternionz");
    local_8._0_1_ = 0x6e;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_6c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xc4] = (float)dVar19;
    FUN_00401b20((int *)local_6c);
    std::basic_string<>::basic_string<>(local_9c,"quaternionw");
    local_8._0_1_ = 0x6f;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_9c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xc5] = (float)dVar19;
    FUN_00401b20((int *)local_9c);
    bVar4 = cocos2d::Quaternion::isZero((Quaternion *)(puVar18 + 0xc2));
    if (!bVar4) {
      *(undefined1 *)(puVar18 + 0xc6) = 1;
    }
    std::basic_string<>::basic_string<>(local_2c,"cameraposx");
    local_8._0_1_ = 0x70;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xee] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"cameraposy");
    local_8._0_1_ = 0x71;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xef] = (float)dVar19;
    FUN_00401b20((int *)local_84);
    std::basic_string<>::basic_string<>(local_cc,"cameraposz");
    local_8._0_1_ = 0x72;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_cc);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xf0] = (float)dVar19;
    FUN_00401b20((int *)local_cc);
    std::basic_string<>::basic_string<>(local_134,"camerarotx");
    local_8._0_1_ = 0x73;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_134);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xf1] = (float)dVar19;
    FUN_00401b20((int *)local_134);
    std::basic_string<>::basic_string<>(local_164,"cameraroty");
    local_8._0_1_ = 0x74;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_164);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xf2] = (float)dVar19;
    FUN_00401b20((int *)local_164);
    std::basic_string<>::basic_string<>(local_14c,"camerarotz");
    local_8._0_1_ = 0x75;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_14c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xf3] = (float)dVar19;
    FUN_00401b20((int *)local_14c);
    if (180.0 <= (float)puVar18[0xf1]) {
      puVar18[0xf1] = (float)puVar18[0xf1] - 360.0;
    }
    if (180.0 <= (float)puVar18[0xf2]) {
      puVar18[0xf2] = (float)puVar18[0xf2] - 360.0;
    }
    if (180.0 <= (float)puVar18[0xf3]) {
      puVar18[0xf3] = (float)puVar18[0xf3] - 360.0;
    }
    std::basic_string<>::basic_string<>(local_2c,"scale");
    local_8._0_1_ = 0x76;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"scale");
      local_8._0_1_ = 0x77;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
      dVar19 = atof(pcVar5);
      local_8._0_1_ = 5;
      puVar18[0xb9] = (float)dVar19;
      FUN_00401b20((int *)local_2c);
      std::basic_string<>::basic_string<>(local_84,"scale");
      local_8._0_1_ = 0x78;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
      pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
      dVar19 = atof(pcVar5);
      local_8._0_1_ = 5;
      puVar18[0xba] = (float)dVar19;
      FUN_00401b20((int *)local_84);
      std::basic_string<>::basic_string<>(local_cc,"scale");
      local_8._0_1_ = 0x79;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_cc);
      pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
      dVar19 = atof(pcVar5);
      local_8._0_1_ = 5;
      puVar18[0xbb] = (float)dVar19;
      FUN_00401b20((int *)local_cc);
    }
    std::basic_string<>::basic_string<>(local_2c,"scalex");
    local_8._0_1_ = 0x7a;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"scalex");
      local_8._0_1_ = 0x7b;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
      dVar19 = atof(pcVar5);
      local_8._0_1_ = 5;
      puVar18[0xb9] = (float)dVar19;
      FUN_00401b20((int *)local_2c);
    }
    std::basic_string<>::basic_string<>(local_2c,"scaley");
    local_8._0_1_ = 0x7c;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"scaley");
      local_8._0_1_ = 0x7d;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
      dVar19 = atof(pcVar5);
      local_8._0_1_ = 5;
      puVar18[0xba] = (float)dVar19;
      FUN_00401b20((int *)local_2c);
    }
    std::basic_string<>::basic_string<>(local_2c,"scalez");
    local_8._0_1_ = 0x7e;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"scalez");
      local_8._0_1_ = 0x7f;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
      dVar19 = atof(pcVar5);
      local_8._0_1_ = 5;
      puVar18[0xbb] = (float)dVar19;
      FUN_00401b20((int *)local_2c);
    }
  }
  std::basic_string<>::basic_string<>(local_2c,"x");
  local_8._0_1_ = 0x80;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"x");
    local_8._0_1_ = 0x81;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xdb] = (float)iVar10;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"y");
    local_8._0_1_ = 0x82;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xdc] = (float)iVar10;
    FUN_00401b20((int *)local_84);
    std::basic_string<>::basic_string<>(local_cc,"width");
    local_8._0_1_ = 0x83;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_cc);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xdd] = (float)iVar10;
    FUN_00401b20((int *)local_cc);
    std::basic_string<>::basic_string<>(local_134,"height");
    local_8._0_1_ = 0x84;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_134);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xde] = (float)iVar10;
    FUN_00401b20((int *)local_134);
  }
  std::basic_string<>::basic_string<>(local_84,"ignorelight");
  local_8 = CONCAT31(local_8._1_3_,0x85);
  uVar15 = uVar16 & 0xfffffffb | 0x10;
  local_1a4 = uVar15;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_84);
  if (iVar10 == 0) {
LAB_0047a5a5:
    local_195 = '\0';
  }
  else {
    std::basic_string<>::basic_string<>(local_2c,"ignorelight");
    local_8 = 0x86;
    uVar15 = uVar16 & 0xfffffffb | 0x30;
    local_1a4 = uVar15;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar3 = FUN_004031c0(pbVar13,&DAT_005e425c);
    local_195 = '\x01';
    if (cVar3 == '\0') goto LAB_0047a5a5;
  }
  if ((uVar15 & 0x20) != 0) {
    uVar15 = uVar15 & 0xffffffdf;
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 5;
  FUN_00401b20((int *)local_84);
  if (local_195 != '\0') {
    *(undefined1 *)((int)puVar18 + 0x37f) = 1;
  }
  std::basic_string<>::basic_string<>(local_84,"ignoreemcon");
  local_8 = CONCAT31(local_8._1_3_,0x87);
  uVar16 = uVar15 & 0xffffffef | 0x40;
  local_1a4 = uVar16;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_84);
  if (iVar10 == 0) {
LAB_0047a64f:
    local_195 = '\0';
  }
  else {
    std::basic_string<>::basic_string<>(local_2c,"ignoreemcon");
    local_8 = 0x88;
    uVar16 = uVar15 & 0xffffffef | 0xc0;
    local_1a4 = uVar16;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar3 = FUN_004031c0(pbVar13,&DAT_005e425c);
    local_195 = '\x01';
    if (cVar3 == '\0') goto LAB_0047a64f;
  }
  if ((char)uVar16 < '\0') {
    uVar16 = uVar16 & 0xffffff7f;
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 5;
  FUN_00401b20((int *)local_84);
  if (local_195 != '\0') {
    *(undefined1 *)(puVar18 + 0xe0) = 1;
  }
  std::basic_string<>::basic_string<>(local_84,"altlight");
  local_8 = CONCAT31(local_8._1_3_,0x89);
  uVar15 = uVar16 & 0xffffffbf | 0x100;
  local_1a4 = uVar15;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_84);
  if (iVar10 == 0) {
LAB_0047a6fe:
    local_195 = '\0';
  }
  else {
    std::basic_string<>::basic_string<>(local_2c,"altlight");
    local_8 = 0x8a;
    uVar15 = uVar16 & 0xffffffbf | 0x300;
    local_1a4 = uVar15;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar3 = FUN_004031c0(pbVar13,&DAT_005e425c);
    local_195 = '\x01';
    if (cVar3 == '\0') goto LAB_0047a6fe;
  }
  if ((uVar15 & 0x200) != 0) {
    uVar15 = uVar15 & 0xfffffdff;
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 5;
  local_1b8 = uVar15 & 0xfffffeff;
  FUN_00401b20((int *)local_84);
  if (local_195 != '\0') {
    *(undefined1 *)((int)puVar18 + 0x381) = 1;
  }
  std::basic_string<>::basic_string<>(local_2c,"texturefunction");
  local_8._0_1_ = 0x8b;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"texturefunction");
    local_8._0_1_ = 0x8c;
    pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x11a),pbVar14);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"texturefunction");
    local_8._0_1_ = 0x8d;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    FUN_00592d70(&local_60,',',(undefined4 *)in_stack_fffffdf8);
    local_8._0_1_ = 0x8f;
    FUN_00401b20((int *)local_84);
    puVar7 = (undefined4 *)FUN_00402440(&local_60,0);
    FUN_004024e0(local_54,puVar7);
    local_8 = CONCAT31(local_8._1_3_,0x90);
    uVar15 = FUN_00402460(&local_60);
    if (1 < uVar15) {
      puVar7 = (undefined4 *)FUN_00402440(&local_60,1);
      pcVar5 = (char *)FUN_00402490(puVar7);
      iVar10 = atoi(pcVar5);
      puVar18[0x134] = iVar10;
    }
    std::basic_string<>::basic_string<>(local_2c,"texturefunction");
    local_8._0_1_ = 0x91;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    cVar3 = FUN_004db950(in_stack_fffffdf8);
    local_8._0_1_ = 0x90;
    FUN_00401b20((int *)local_2c);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_54);
    if (cVar3 == '\0') {
      iVar10 = FUN_004dba70(in_stack_fffffdf8);
      piVar9 = (int *)FUN_004da1b0((undefined *)local_3c,iVar10);
      local_8 = CONCAT31(local_8._1_3_,0x93);
      FUN_004175d0(puVar18 + 0x120,piVar9);
      FUN_00415770(local_3c);
    }
    else {
      iVar10 = FUN_004db9e0(in_stack_fffffdf8);
      piVar9 = FUN_004eb9e0(local_3c,iVar10);
      local_8 = CONCAT31(local_8._1_3_,0x92);
      FUN_004175d0(puVar18 + 0x12a,piVar9);
      FUN_00415770(local_3c);
    }
    FUN_00401b20((int *)local_54);
    local_8._0_1_ = 5;
    thunk_FUN_004025a0(&local_60);
  }
  std::basic_string<>::basic_string<>(local_2c,"modelfunction");
  local_8._0_1_ = 0x94;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"modelfunction");
    local_8._0_1_ = 0x95;
    pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x135),pbVar14);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"modelfunction");
    local_8._0_1_ = 0x96;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    FUN_00592d70(&local_60,',',(undefined4 *)in_stack_fffffdf8);
    local_8._0_1_ = 0x98;
    FUN_00401b20((int *)local_84);
    puVar7 = (undefined4 *)FUN_00402440(&local_60,0);
    FUN_004024e0(local_54,puVar7);
    local_8 = CONCAT31(local_8._1_3_,0x99);
    uVar15 = FUN_00402460(&local_60);
    if (1 < uVar15) {
      puVar7 = (undefined4 *)FUN_00402440(&local_60,1);
      pcVar5 = (char *)FUN_00402490(puVar7);
      iVar10 = atoi(pcVar5);
      puVar18[0x150] = iVar10;
    }
    std::basic_string<>::basic_string<>(local_2c,"modelfunction");
    local_8._0_1_ = 0x9a;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    cVar3 = FUN_004db950(in_stack_fffffdf8);
    local_8._0_1_ = 0x99;
    FUN_00401b20((int *)local_2c);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_54);
    if (cVar3 == '\0') {
      iVar10 = FUN_004dba70(in_stack_fffffdf8);
      piVar9 = (int *)FUN_004da1b0((undefined *)local_3c,iVar10);
      local_8 = CONCAT31(local_8._1_3_,0x9c);
      FUN_004175d0(puVar18 + 0x13c,piVar9);
      FUN_00415770(local_3c);
    }
    else {
      iVar10 = FUN_004db9e0(in_stack_fffffdf8);
      piVar9 = FUN_004eb9e0(local_3c,iVar10);
      local_8 = CONCAT31(local_8._1_3_,0x9b);
      FUN_004175d0(puVar18 + 0x146,piVar9);
      FUN_00415770(local_3c);
    }
    FUN_00401b20((int *)local_54);
    local_8._0_1_ = 5;
    thunk_FUN_004025a0(&local_60);
  }
  std::basic_string<>::basic_string<>(local_2c,"drift");
  local_8._0_1_ = 0x9d;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"drift");
    local_8._0_1_ = 0x9e;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0x10e] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"opacity");
  local_8._0_1_ = 0x9f;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"opacity");
    local_8._0_1_ = 0xa0;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xea] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"screen");
  local_8._0_1_ = 0xa1;
  iVar10 = FUN_0047d0f0((byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"screen");
    local_8._0_1_ = 0xad;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      FUN_0043db40(&local_11c);
      local_8._0_1_ = 0xae;
      std::basic_string<>::basic_string<>(local_2c,"screen");
      local_8._0_1_ = 0xaf;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
      FUN_00592d70(&local_60,',',(undefined4 *)in_stack_fffffdf8);
      local_8._0_1_ = 0xb1;
      FUN_00401b20((int *)local_2c);
      puVar7 = (undefined4 *)FUN_00402440(&local_60,0);
      FUN_004024e0(local_9c,puVar7);
      local_8._0_1_ = 0xb2;
      uVar15 = FUN_00402460(&local_60);
      if (1 < uVar15) {
        puVar7 = (undefined4 *)FUN_00402440(&local_60,1);
        FUN_004024e0(&stack0xfffffdf8,puVar7);
        iVar10 = FUN_004dba70(in_stack_fffffdf8);
        piVar9 = (int *)FUN_004da1b0((undefined *)local_3c,iVar10);
        local_8._0_1_ = 0xb3;
        FUN_004175d0(local_f4,piVar9);
        local_8._0_1_ = 0xb2;
        FUN_00415770(local_3c);
      }
      cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_commerce");
      if ((((cVar3 != '\0') ||
           (cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_trading"), cVar3 != '\0')) ||
          (cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_adminterminal"), cVar3 != '\0')) ||
         (cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_dockingcomputer"), cVar3 != '\0')) {
        *(undefined1 *)(puVar18 + 2) = 1;
      }
      local_11c = 0;
      iVar10 = 0;
      do {
        cVar3 = FUN_004031c0((byte *)local_9c,(&PTR_s_custom_005ce694)[iVar10]);
        iVar2 = iVar10;
        if (cVar3 != '\0') break;
        iVar10 = iVar10 + 1;
        iVar2 = local_11c;
      } while (iVar10 < 9);
      local_11c = iVar2;
      std::basic_string<>::basic_string<>(local_2c,"screenwidth");
      local_8._0_1_ = 0xb4;
      iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
      local_8._0_1_ = 0xb2;
      FUN_00401b20((int *)local_2c);
      pcVar17 = atoi_exref;
      if (iVar10 != 0) {
        std::basic_string<>::basic_string<>(local_2c,"screenwidth");
        local_8._0_1_ = 0xb5;
        pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
        pcVar17 = atoi_exref;
        local_114 = atoi(pcVar5);
        local_8._0_1_ = 0xb2;
        FUN_00401b20((int *)local_2c);
      }
      std::basic_string<>::basic_string<>(local_2c,"screenheight");
      local_8._0_1_ = 0xb6;
      iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
      local_8._0_1_ = 0xb2;
      FUN_00401b20((int *)local_2c);
      if (iVar10 != 0) {
        std::basic_string<>::basic_string<>(local_2c,"screenheight");
        local_8._0_1_ = 0xb7;
        pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        FUN_00402490((undefined4 *)pbVar13);
        local_110 = (*pcVar17)();
        local_8._0_1_ = 0xb2;
        FUN_00401b20((int *)local_2c);
      }
      if (local_11c == 0) {
        std::basic_string<>::operator=(local_10c,(basic_string<> *)local_9c);
        FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_10c);
        iVar10 = FUN_004a8230(in_stack_fffffdf8);
        if (iVar10 == 0) {
          FUN_00402490((undefined4 *)local_10c);
          FUN_00591070("ERROR","Invalid screen \'%s\'");
          bVar4 = cc_assert_script_compatible("ERROR: Invalid screen layout.");
          if (!bVar4) {
            cocos2d::log("Assert failed: %s");
          }
        }
      }
      if (local_114 < 1) {
        if (local_11c == 0) {
          FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_10c);
          iVar10 = FUN_004a8230(in_stack_fffffdf8);
          local_114 = *(int *)(iVar10 + 0x48);
          local_110 = *(int *)(iVar10 + 0x4c);
          goto LAB_0047b43b;
        }
        local_114 = 0x100;
        local_110 = 0xc0;
LAB_0047b35c:
        if ((int)(local_114 + (local_114 >> 0x1f & 0xfU)) >> 4 == local_110 / 9) {
          puVar18[0xe4] = 0;
        }
      }
      else {
LAB_0047b43b:
        if (local_114 != local_110) goto LAB_0047b35c;
        puVar18[0xe4] = 2;
      }
      FUN_0047d350(puVar18 + 0xe5,&local_11c);
      FUN_00401b20((int *)local_9c);
      thunk_FUN_004025a0(&local_60);
      local_8._0_1_ = 5;
      FUN_0047c010((int)&local_11c);
    }
  }
  else {
    uVar15 = 0;
    local_1a4 = 0;
    std::basic_string<>::basic_string<>(local_9c,"screen");
    local_8._0_1_ = 0xa2;
    pbVar13 = FUN_0047d5c0((byte *)local_9c);
    iVar10 = FUN_00402460((int *)pbVar13);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_9c);
    if (iVar10 != 0) {
      do {
        FUN_0043db40(&local_11c);
        local_8._0_1_ = 0xa3;
        std::basic_string<>::basic_string<>(local_2c,"screen");
        local_8._0_1_ = 0xa4;
        uVar16 = uVar15;
        pbVar13 = FUN_0047d5c0((byte *)local_2c);
        puVar7 = (undefined4 *)FUN_00402440(pbVar13,uVar16);
        FUN_004024e0(&stack0xfffffdf8,puVar7);
        FUN_00592d70(&local_60,',',(undefined4 *)in_stack_fffffdf8);
        local_8._0_1_ = 0xa6;
        FUN_00401b20((int *)local_2c);
        puVar7 = (undefined4 *)FUN_00402440(&local_60,0);
        FUN_004024e0(local_9c,puVar7);
        local_8._0_1_ = 0xa7;
        uVar16 = FUN_00402460(&local_60);
        if (1 < uVar16) {
          puVar7 = (undefined4 *)FUN_00402440(&local_60,1);
          FUN_004024e0(&stack0xfffffdf8,puVar7);
          iVar10 = FUN_004dba70(in_stack_fffffdf8);
          piVar9 = (int *)FUN_004da1b0((undefined *)local_3c,iVar10);
          local_8._0_1_ = 0xa8;
          FUN_004175d0(local_f4,piVar9);
          local_8._0_1_ = 0xa7;
          FUN_00415770(local_3c);
        }
        cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_commerce");
        if (((cVar3 != '\0') ||
            (cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_trading"), cVar3 != '\0')) ||
           ((cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_adminterminal"), cVar3 != '\0' ||
            (cVar3 = FUN_004031c0((byte *)local_9c,(byte *)"x7_dockingcomputer"), cVar3 != '\0'))))
        {
          *(undefined1 *)(puVar18 + 2) = 1;
        }
        local_11c = 0;
        iVar10 = 0;
        do {
          cVar3 = FUN_004031c0((byte *)local_9c,(&PTR_s_custom_005ce694)[iVar10]);
          iVar2 = iVar10;
          if (cVar3 != '\0') break;
          iVar10 = iVar10 + 1;
          iVar2 = local_11c;
        } while (iVar10 < 9);
        local_11c = iVar2;
        std::basic_string<>::basic_string<>(local_2c,"screenwidth");
        local_8._0_1_ = 0xa9;
        iVar10 = FUN_0047d0f0((byte *)local_2c);
        local_8._0_1_ = 0xa7;
        FUN_00401b20((int *)local_2c);
        pcVar17 = atoi_exref;
        if (iVar10 != 0) {
          std::basic_string<>::basic_string<>(local_2c,"screenwidth");
          local_8._0_1_ = 0xaa;
          pbVar13 = FUN_0047d5c0((byte *)local_2c);
          puVar7 = (undefined4 *)FUN_00402440(pbVar13,uVar15);
          pcVar5 = (char *)FUN_00402490(puVar7);
          pcVar17 = atoi_exref;
          local_114 = atoi(pcVar5);
          local_8._0_1_ = 0xa7;
          FUN_00401b20((int *)local_2c);
        }
        std::basic_string<>::basic_string<>(local_2c,"screenheight");
        local_8._0_1_ = 0xab;
        iVar10 = FUN_0047d0f0((byte *)local_2c);
        local_8._0_1_ = 0xa7;
        FUN_00401b20((int *)local_2c);
        if (iVar10 != 0) {
          std::basic_string<>::basic_string<>(local_2c,"screenheight");
          local_8._0_1_ = 0xac;
          uVar15 = local_1a4;
          pbVar13 = FUN_0047d5c0((byte *)local_2c);
          puVar7 = (undefined4 *)FUN_00402440(pbVar13,uVar15);
          FUN_00402490(puVar7);
          local_110 = (*pcVar17)();
          local_8._0_1_ = 0xa7;
          FUN_00401b20((int *)local_2c);
        }
        if (local_11c == 0) {
          std::basic_string<>::operator=(local_10c,(basic_string<> *)local_9c);
          FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_10c);
          iVar10 = FUN_004a8230(in_stack_fffffdf8);
          if (iVar10 == 0) {
            FUN_00402490((undefined4 *)local_10c);
            FUN_00591070("ERROR","Invalid screen \'%s\'");
            bVar4 = cc_assert_script_compatible("ERROR: Invalid screen layout.");
            if (!bVar4) {
              cocos2d::log("Assert failed: %s");
            }
          }
        }
        if (local_114 < 1) {
          if (local_11c == 0) {
            FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_10c);
            iVar10 = FUN_004a8230(in_stack_fffffdf8);
            local_114 = *(int *)(iVar10 + 0x48);
            local_110 = *(int *)(iVar10 + 0x4c);
            goto LAB_0047b00a;
          }
          local_114 = 0x100;
          local_110 = 0xc0;
LAB_0047af50:
          if ((int)(local_114 + (local_114 >> 0x1f & 0xfU)) >> 4 == local_110 / 9) {
            puVar18[0xe4] = 0;
          }
        }
        else {
LAB_0047b00a:
          if (local_114 != local_110) goto LAB_0047af50;
          puVar18[0xe4] = 2;
        }
        FUN_0047d350(puVar18 + 0xe5,&local_11c);
        FUN_00401b20((int *)local_9c);
        thunk_FUN_004025a0(&local_60);
        local_8._0_1_ = 5;
        FUN_0047c010((int)&local_11c);
        uVar15 = local_1a4 + 1;
        local_1a4 = uVar15;
        std::basic_string<>::basic_string<>(local_9c,"screen");
        local_8._0_1_ = 0xa2;
        pbVar13 = FUN_0047d5c0((byte *)local_9c);
        uVar16 = FUN_00402460((int *)pbVar13);
        local_8._0_1_ = 5;
        FUN_00401b20((int *)local_9c);
      } while (uVar15 < uVar16);
    }
  }
  if ((puVar18[0xf] == 4) && (*(char *)(puVar18 + 2) != '\0')) {
    FUN_0043db40(&local_11c);
    local_8._0_1_ = 0xb8;
    iVar10 = puVar18[0xe4];
    local_117 = 1;
    if (iVar10 == 1) {
      local_114 = 0x140;
      local_110 = 0xf0;
      local_11c = 0;
      SimpleString::operator=((SimpleString *)local_10c,"log43");
      FUN_0047d350(puVar18 + 0xe5,&local_11c);
      pcVar5 = "help43";
LAB_0047b497:
      SimpleString::operator=((SimpleString *)local_10c,pcVar5);
      FUN_0047d350(puVar18 + 0xe5,&local_11c);
    }
    else if (iVar10 == 0) {
      local_114 = 0x1e0;
      local_110 = 0x10e;
      local_11c = iVar10;
      SimpleString::operator=((SimpleString *)local_10c,"log169");
      FUN_0047d350(puVar18 + 0xe5,&local_11c);
      pcVar5 = "help169";
      goto LAB_0047b497;
    }
    local_8._0_1_ = 5;
    FUN_0047c010((int)&local_11c);
  }
  std::basic_string<>::basic_string<>(local_2c,"lockfunction");
  local_8._0_1_ = 0xb9;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"lockfunction");
    local_8._0_1_ = 0xba;
    pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x151),pbVar14);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"lockfunction");
    local_8._0_1_ = 0xbb;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    iVar10 = FUN_004dba70(in_stack_fffffdf8);
    piVar9 = (int *)FUN_004da1b0((undefined *)local_3c,iVar10);
    local_8._0_1_ = 0xbc;
    FUN_004175d0(puVar18 + 0x158,piVar9);
    FUN_00415770(local_3c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_84);
  }
  std::basic_string<>::basic_string<>(local_84,"relativetocamera");
  uVar15 = local_1b8;
  local_8 = CONCAT31(local_8._1_3_,0xbd);
  uVar16 = local_1b8 | 0x400;
  local_1a4 = uVar16;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_84);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"relativetocamera");
    local_8 = 0xbe;
    uVar16 = uVar15 | 0xc00;
    local_1a4 = uVar16;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar3 = FUN_004031c0(pbVar13,&DAT_005e425c);
    local_195 = '\x01';
    if (cVar3 != '\0') goto LAB_0047b612;
  }
  local_195 = '\0';
LAB_0047b612:
  if ((uVar16 & 0x800) != 0) {
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 5;
  FUN_00401b20((int *)local_84);
  if (local_195 != '\0') {
    *(undefined1 *)(puVar18 + 0xfd) = 1;
  }
  std::basic_string<>::basic_string<>(local_2c,"uniqueobject");
  local_8._0_1_ = 0xbf;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    iVar10 = 0;
    do {
      std::basic_string<>::basic_string<>(local_2c,"uniqueobject");
      local_8._0_1_ = 0xc0;
      pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      cVar3 = FUN_00413fc0((&PTR_DAT_005ce66c)[iVar10],pbVar13);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00401b20((int *)local_2c);
      if (cVar3 != '\0') {
        puVar18[199] = iVar10;
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  std::basic_string<>::basic_string<>(local_2c,"existflag");
  local_8._0_1_ = 0xc1;
  pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x114),pbVar14);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_84,"existfunction");
  local_8._0_1_ = 0xc2;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_84);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_84);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"existfunction");
    local_8._0_1_ = 0xc3;
    pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x162),pbVar14);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"existfunction");
    local_8._0_1_ = 0xc4;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    iVar10 = FUN_004dba70(in_stack_fffffdf8);
    piVar9 = (int *)FUN_004da1b0((undefined *)local_3c,iVar10);
    local_8._0_1_ = 0xc5;
    FUN_004175d0(puVar18 + 0x168,piVar9);
    FUN_00415770(local_3c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_84);
  }
  std::basic_string<>::basic_string<>(local_2c,"clickfunction");
  local_8._0_1_ = 0xc6;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"clickfunction");
    local_8._0_1_ = 199;
    pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x175),pbVar14);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_84,"clickfunction");
    local_8._0_1_ = 200;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_84);
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)pbVar13);
    FUN_00592d70(&local_60,',',(undefined4 *)in_stack_fffffdf8);
    local_8._0_1_ = 0xca;
    FUN_00401b20((int *)local_84);
    puVar7 = (undefined4 *)FUN_00402440(&local_60,0);
    FUN_004024e0(local_cc,puVar7);
    local_8 = CONCAT31(local_8._1_3_,0xcb);
    uVar15 = FUN_00402460(&local_60);
    if (1 < uVar15) {
      puVar7 = (undefined4 *)FUN_00402440(&local_60,1);
      pcVar5 = (char *)FUN_00402490(puVar7);
      iVar10 = atoi(pcVar5);
      puVar18[0x188] = iVar10;
    }
    FUN_004024e0(&stack0xfffffdf8,(undefined4 *)local_cc);
    iVar10 = FUN_004eb4d0(in_stack_fffffdf8);
    puVar18[0x17c] = iVar10;
    piVar9 = FUN_004ea270(local_3c,iVar10);
    local_8._0_1_ = 0xcc;
    FUN_00430330(puVar18 + 0x17e,piVar9);
    local_8._0_1_ = 0xcb;
    FUN_00415770(local_3c);
    bVar4 = FUN_004175c0((int)(puVar18 + 0x17e));
    if (!bVar4) {
      piVar9 = FUN_0052b380(local_3c,puVar18[0x17c]);
      local_8._0_1_ = 0xcd;
      FUN_004175d0(puVar18 + 0x17e,piVar9);
      FUN_00415770(local_3c);
      *(undefined1 *)(puVar18 + 0x17b) = 1;
    }
    FUN_00401b20((int *)local_cc);
    local_8._0_1_ = 5;
    thunk_FUN_004025a0(&local_60);
  }
  std::basic_string<>::basic_string<>(local_2c,"cameraid");
  local_8._0_1_ = 0xce;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"cameraid");
    local_8._0_1_ = 0xcf;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    iVar10 = atoi(pcVar5);
    puVar18[0xe1] = iVar10;
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"file");
  local_8._0_1_ = 0xd0;
  iVar10 = FUN_0047d0f0((byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"file");
    local_8._0_1_ = 0xd3;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"file");
      local_8._0_1_ = 0xd4;
      pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x41),pbVar14);
      local_8._0_1_ = 5;
      FUN_00401b20((int *)local_2c);
    }
  }
  else {
    uVar15 = 0;
    std::basic_string<>::basic_string<>(local_6c,"file");
    local_8._0_1_ = 0xd1;
    pbVar13 = FUN_0047d5c0((byte *)local_6c);
    iVar10 = FUN_00402460((int *)pbVar13);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_6c);
    if (iVar10 != 0) {
      pbVar6 = (basic_string<> *)(puVar18 + 0x41);
      local_1a8 = pbVar6;
      do {
        if ((int)uVar15 < 10) {
          std::basic_string<>::basic_string<>(local_2c,"file");
          local_8._0_1_ = 0xd2;
          uVar16 = uVar15;
          pbVar13 = FUN_0047d5c0((byte *)local_2c);
          pbVar14 = (basic_string<> *)FUN_00402440(pbVar13,uVar16);
          std::basic_string<>::operator=(pbVar6,pbVar14);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
        }
        uVar15 = uVar15 + 1;
        pbVar6 = pbVar6 + 0x18;
        std::basic_string<>::basic_string<>(local_6c,"file");
        local_8._0_1_ = 0xd1;
        pbVar13 = FUN_0047d5c0((byte *)local_6c);
        uVar16 = FUN_00402460((int *)pbVar13);
        local_8._0_1_ = 5;
        FUN_00401b20((int *)local_6c);
        puVar18 = local_1ac;
      } while (uVar15 < uVar16);
    }
  }
  std::basic_string<>::basic_string<>(local_2c,"texture");
  local_8._0_1_ = 0xd5;
  iVar10 = FUN_0047d0f0((byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"texture");
    local_8._0_1_ = 0xd8;
    iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
    if (iVar10 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"texture");
      local_8._0_1_ = 0xd9;
      pbVar14 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      std::basic_string<>::operator=((basic_string<> *)(puVar18 + 0x7d),pbVar14);
      local_8._0_1_ = 5;
      FUN_00401b20((int *)local_2c);
    }
  }
  else {
    uVar15 = 0;
    std::basic_string<>::basic_string<>(local_6c,"texture");
    local_8._0_1_ = 0xd6;
    pbVar13 = FUN_0047d5c0((byte *)local_6c);
    iVar10 = FUN_00402460((int *)pbVar13);
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_6c);
    if (iVar10 != 0) {
      pbVar6 = (basic_string<> *)(puVar18 + 0x7d);
      local_1a8 = pbVar6;
      do {
        if ((int)uVar15 < 10) {
          std::basic_string<>::basic_string<>(local_2c,"texture");
          local_8._0_1_ = 0xd7;
          uVar16 = uVar15;
          pbVar13 = FUN_0047d5c0((byte *)local_2c);
          pbVar14 = (basic_string<> *)FUN_00402440(pbVar13,uVar16);
          std::basic_string<>::operator=(pbVar6,pbVar14);
          local_8._0_1_ = 5;
          FUN_00401b20((int *)local_2c);
        }
        uVar15 = uVar15 + 1;
        pbVar6 = pbVar6 + 0x18;
        std::basic_string<>::basic_string<>(local_6c,"texture");
        local_8._0_1_ = 0xd6;
        pbVar13 = FUN_0047d5c0((byte *)local_6c);
        uVar16 = FUN_00402460((int *)pbVar13);
        local_8._0_1_ = 5;
        FUN_00401b20((int *)local_6c);
        puVar18 = local_1ac;
      } while (uVar15 < uVar16);
    }
  }
  std::basic_string<>::basic_string<>(local_2c,"r");
  local_8._0_1_ = 0xda;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"r");
    local_8._0_1_ = 0xdb;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_1a4 = CONCAT22(in_FPUControlWord,(undefined2)local_1a4);
    local_1a8 = (basic_string<> *)(int)ROUND(dVar19);
    *(undefined1 *)(puVar18 + 0xdf) = local_1a8._0_1_;
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"g");
  local_8._0_1_ = 0xdc;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"g");
    local_8._0_1_ = 0xdd;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_1a4 = CONCAT22(in_FPUControlWord,(undefined2)local_1a4);
    local_1a8 = (basic_string<> *)(int)ROUND(dVar19);
    *(undefined1 *)((int)puVar18 + 0x37d) = local_1a8._0_1_;
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"b");
  local_8._0_1_ = 0xde;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"b");
    local_8._0_1_ = 0xdf;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_1a4 = CONCAT22(in_FPUControlWord,(undefined2)local_1a4);
    local_1a8 = (basic_string<> *)(int)ROUND(dVar19);
    *(undefined1 *)((int)puVar18 + 0x37e) = local_1a8._0_1_;
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"brightness");
  local_8._0_1_ = 0xe0;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"brightness");
    local_8._0_1_ = 0xe1;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xeb] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"innerangle");
  local_8._0_1_ = 0xe2;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"innerangle");
    local_8._0_1_ = 0xe3;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    local_8._0_1_ = 5;
    puVar18[0xec] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"outerangle");
  local_8._0_1_ = 0xe4;
  iVar10 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 5;
  FUN_00401b20((int *)local_2c);
  if (iVar10 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"outerangle");
    local_8._0_1_ = 0xe5;
    pbVar13 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar5 = (char *)FUN_00402490((undefined4 *)pbVar13);
    dVar19 = atof(pcVar5);
    puVar18[0xed] = (float)dVar19;
    FUN_00401b20((int *)local_2c);
  }
  FUN_00401b20((int *)local_17c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
