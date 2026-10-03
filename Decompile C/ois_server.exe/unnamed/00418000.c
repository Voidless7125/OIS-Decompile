#include "../ois_server.exe.h"


void __fastcall FUN_00418060(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = Interface::vftable;
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[5] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}


void __fastcall FUN_004180c0(void *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char ******ppppppcVar4;
  basic_string<> *pbVar5;
  FileUtils *pFVar6;
  char *pcVar7;
  void *pvVar8;
  undefined4 *puVar9;
  byte *in_stack_ffffff50;
  int in_stack_ffffff54;
  int iVar10;
  undefined *puVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_7c;
  undefined4 *local_78;
  char *local_74 [5];
  uint local_60;
  char *local_5c [5];
  uint local_48;
  char *****local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0de3;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_0058f1d0((int *)local_5c);
  local_8 = 0;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  pcVar12 = "Loading mods from folder %s...";
  puVar11 = &DAT_005cdc70;
  iVar10 = 0x418114;
  FUN_00591070(&DAT_005cdc70,"Loading mods from folder %s...");
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_48) {
    puVar3 = (undefined4 *)(local_48 + 1);
    pcVar12 = local_5c[0];
    if ((undefined4 *)0xfff < puVar3) {
      pcVar12 = *(char **)(local_5c[0] + -4);
      puVar3 = (undefined4 *)(local_48 + 0x24);
      if ((char *)0x1f < local_5c[0] + (-4 - (int)pcVar12)) {
LAB_00418144:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    puVar11 = (undefined *)0x418151;
    FUN_005adb3f(pcVar12);
  }
  FUN_0058f1d0((int *)&stack0xffffff50);
  FUN_00418d80(&local_88,(char *)in_stack_ffffff50,in_stack_ffffff54,iVar10,(int)puVar11,
               CONCAT44(puVar3,pcVar12));
  local_8 = 1;
  FUN_0058f1d0((int *)local_44);
  local_8._0_1_ = 2;
  local_78 = local_84;
  puVar3 = local_88;
  puVar9 = local_84;
  if (local_88 != local_84) {
    do {
      FUN_004024e0(local_2c,puVar3);
      local_8._0_1_ = 3;
      FUN_00591070(&DAT_005cdc70,"Checking folder: %s");
      FUN_004024e0(&stack0xffffff50,local_2c);
      local_7c = FUN_00418440(in_stack_ffffff50);
      if (local_7c == 0) {
        FUN_00591070(&DAT_005cdc70,"Invalid mod: %s");
      }
      else {
        piVar1 = *(int **)((int)param_1 + 4);
        if (*(int **)((int)param_1 + 8) == piVar1) {
          FUN_00414080(param_1,piVar1,&local_7c);
        }
        else {
          *piVar1 = local_7c;
          *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 4;
        }
        if (*(char *)(local_7c + 0x60) == '\0') {
          FUN_00591070(&DAT_005cdc70,"MOD: %s %s (disabled)");
        }
        else {
          FUN_00591070(&DAT_005cdc70,"MOD: %s %s (enabled)");
          if (local_34 == 0) {
code_r0x0041836e:
            pbVar5 = (basic_string<> *)FUN_00591e00((undefined1 *)local_74,&DAT_005e42b8);
            bVar13 = false;
            local_8._0_1_ = 5;
            pFVar6 = cocos2d::FileUtils::getInstance();
            cocos2d::FileUtils::addSearchPath(pFVar6,pbVar5,bVar13);
            pcVar12 = local_74[0];
            uVar2 = local_60;
          }
          else {
            ppppppcVar4 = local_44;
            if (0xf < local_30) {
              ppppppcVar4 = (char ******)local_44[0];
            }
            if (*(char *)ppppppcVar4 != '\\') goto code_r0x0041836e;
            pbVar5 = (basic_string<> *)FUN_00591e00((undefined1 *)local_5c,".%s%s");
            bVar13 = false;
            local_8._0_1_ = 4;
            pFVar6 = cocos2d::FileUtils::getInstance();
            cocos2d::FileUtils::addSearchPath(pFVar6,pbVar5,bVar13);
            pcVar12 = local_5c[0];
            uVar2 = local_48;
          }
          puVar9 = local_78;
          if (0xf < uVar2) {
            local_8._0_1_ = 3;
            pcVar7 = pcVar12;
            if ((0xfff < uVar2 + 1) &&
               (pcVar7 = *(char **)(pcVar12 + -4), (char *)0x1f < pcVar12 + (-4 - (int)pcVar7)))
            goto LAB_00418144;
            FUN_005adb3f(pcVar7);
            puVar9 = local_78;
          }
        }
      }
      local_8._0_1_ = 2;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_00418144;
        FUN_005adb3f(pvVar8);
      }
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar9);
  }
  FUN_00591070(&DAT_005cdc70,"Mods loaded (%d).");
  if (0xf < local_30) {
    ppppppcVar4 = (char ******)local_44[0];
    if ((0xfff < local_30 + 1) &&
       (ppppppcVar4 = (char ******)local_44[0][-1],
       (char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppppcVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppppcVar4);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (char *****)((uint)local_44[0] & 0xffffff00);
  FUN_004025a0((int *)&local_88);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00418440(byte *param_1)

{
  int iVar1;
  int iVar2;
  char *****pppppcVar3;
  LPCSTR ****pppppCVar4;
  DWORD DVar5;
  int *piVar6;
  byte **ppbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  void *pvVar12;
  byte *pbVar13;
  byte **ppbVar14;
  int iVar15;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *pvVar16;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int *local_88 [2];
  byte *local_80;
  byte **local_7c;
  char local_75;
  void *local_74 [5];
  uint local_60;
  char ****local_5c [4];
  int local_4c;
  uint local_48;
  LPCSTR ***local_44;
  LPCSTR **pppCStack_40;
  LPCSTR **pppCStack_3c;
  LPCSTR **pppCStack_38;
  LPCSTR **local_34;
  LPCSTR **pppCStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0e6b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0058f1d0((int *)local_5c);
  local_34 = (LPCSTR **)0x0;
  pppCStack_30 = (LPCSTR **)0xf;
  local_44 = (LPCSTR ***)((uint)local_44 & 0xffffff00);
  local_8._0_1_ = 2;
  if (local_4c == 0) {
LAB_0041859d:
    FUN_0058f1d0((int *)local_74);
    local_8 = CONCAT31(local_8._1_3_,4);
    pvVar16 = (void *)0x4185d1;
    pppppCVar4 = (LPCSTR ****)FUN_00591e00((undefined1 *)local_2c,"%s%s\\%s");
    if (&local_44 != pppppCVar4) {
      FUN_00401b20((int *)&local_44);
      local_44 = *pppppCVar4;
      pppCStack_40 = (LPCSTR **)pppppCVar4[1];
      pppCStack_3c = (LPCSTR **)pppppCVar4[2];
      pppCStack_38 = (LPCSTR **)pppppCVar4[3];
      local_34 = (LPCSTR **)pppppCVar4[4];
      pppCStack_30 = (LPCSTR **)pppppCVar4[5];
      pppppCVar4[4] = (LPCSTR ***)0x0;
      pppppCVar4[5] = (LPCSTR ***)0xf;
      *(undefined1 *)pppppCVar4 = 0;
    }
    if (local_18 < 0x10) goto LAB_0041854f;
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    pppppcVar3 = local_5c;
    if (0xf < local_48) {
      pppppcVar3 = (char *****)local_5c[0];
    }
    if (*(char *)pppppcVar3 != '\\') goto LAB_0041859d;
    FUN_0058f1d0((int *)local_74);
    local_8 = CONCAT31(local_8._1_3_,3);
    pvVar16 = (void *)0x4184e4;
    pppppCVar4 = (LPCSTR ****)FUN_00591e00((undefined1 *)local_2c,".%s%s\\%s");
    if (&local_44 != pppppCVar4) {
      FUN_00401b20((int *)&local_44);
      local_44 = *pppppCVar4;
      pppCStack_40 = (LPCSTR **)pppppCVar4[1];
      pppCStack_3c = (LPCSTR **)pppppCVar4[2];
      pppCStack_38 = (LPCSTR **)pppppCVar4[3];
      local_34 = (LPCSTR **)pppppCVar4[4];
      pppCStack_30 = (LPCSTR **)pppppCVar4[5];
      pppppCVar4[4] = (LPCSTR ***)0x0;
      pppppCVar4[5] = (LPCSTR ***)0xf;
      *(undefined1 *)pppppCVar4 = 0;
    }
    if (local_18 < 0x10) goto LAB_0041854f;
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FUN_005adb3f(pvVar12);
LAB_0041854f:
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar12 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar12 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  pppppCVar4 = &local_44;
  if ((LPCSTR ***)0xf < pppCStack_30) {
    pppppCVar4 = (LPCSTR ****)local_44;
  }
  DVar5 = GetFileAttributesA((LPCSTR)pppppCVar4);
  if ((DVar5 != 0xffffffff) && ((DVar5 & 0x10) == 0)) {
    piVar6 = (int *)FUN_005adb0f(100);
    local_98 = piVar6;
    memset(piVar6,0,100);
    piVar6[5] = 0xf;
    local_7c = (byte **)(piVar6 + 6);
    piVar6[10] = 0;
    piVar6[0xb] = 0xf;
    *(byte *)local_7c = 0;
    pbVar13 = (byte *)(piVar6 + 0xc);
    piVar6[0x10] = 0;
    piVar6[0x11] = 0xf;
    *pbVar13 = 0;
    local_80 = (byte *)(piVar6 + 0x12);
    piVar6[0x16] = 0;
    piVar6[0x17] = 0xf;
    *local_80 = 0;
    local_75 = '\x01';
    FUN_004024e0(&stack0xffffff40,&local_44);
    FUN_00591f90(local_88,local_75,pvVar16);
    local_8._0_1_ = 5;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e431c,4);
    FUN_00419820(local_88,&local_90,(byte *)local_2c);
    iVar1 = local_8c;
    iVar15 = 0;
    local_94 = local_90;
    while (local_94 != iVar1) {
      iVar15 = iVar15 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_94);
    }
    if (0xf < local_18) {
      pvVar16 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar16 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar16);
    }
    if (iVar15 == 0) {
      if (local_7c != &param_1) {
        ppbVar7 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar7 = (byte **)param_1;
        }
        FUN_00402690(local_7c,ppbVar7,in_stack_00000014);
      }
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,&DAT_005e431c,4);
      local_8 = CONCAT31(local_8._1_3_,6);
      ppbVar7 = (byte **)FUN_00419170(local_88,(byte *)local_2c);
      if (local_7c != ppbVar7) {
        ppbVar14 = ppbVar7;
        if (&DAT_0000000f < ppbVar7[5]) {
          ppbVar14 = (byte **)*ppbVar7;
        }
        FUN_00402690(local_7c,ppbVar14,(uint)ppbVar7[4]);
      }
      local_8._0_1_ = 5;
      if (0xf < local_18) {
        pvVar16 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar16 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar16);
      }
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"disabled",8);
    local_8._0_1_ = 7;
    pbVar8 = FUN_00419170(local_88,(byte *)local_2c);
    pbVar10 = pbVar8;
    if (0xf < *(uint *)(pbVar8 + 0x14)) {
      pbVar10 = *(byte **)pbVar8;
    }
    uVar9 = FUN_004031f0(pbVar10,*(uint *)(pbVar8 + 0x10),&DAT_005e425c,4);
    local_8._0_1_ = 5;
    local_75 = (char)uVar9;
    if (0xf < local_18) {
      pvVar16 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar16 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar16);
    }
    local_1c = 0;
    *(bool *)(local_98 + 0x18) = local_75 == '\0';
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"oisversion",10);
    FUN_00419820(local_88,&local_90,(byte *)local_2c);
    iVar1 = local_8c;
    iVar15 = 0;
    local_7c = (byte **)local_90;
    while (local_7c != (byte **)iVar1) {
      iVar15 = iVar15 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_7c);
    }
    if (0xf < local_18) {
      pvVar16 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar16 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar16);
    }
    if (iVar15 == 0) {
      FUN_00402690(local_80,"1.0.8",5);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"oisversion",10);
      local_8 = CONCAT31(local_8._1_3_,8);
      pbVar10 = FUN_00419170(local_88,(byte *)local_2c);
      if (local_80 != pbVar10) {
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar8 = *(byte **)pbVar10;
        }
        FUN_00402690(local_80,pbVar8,*(uint *)(pbVar10 + 0x10));
      }
      local_8._0_1_ = 5;
      if (0xf < local_18) {
        pvVar16 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar16 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar16);
      }
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"version",7);
    FUN_00419820(local_88,&local_90,(byte *)local_2c);
    iVar15 = 0;
    local_80 = (byte *)local_90;
    while (local_80 != (byte *)local_8c) {
      iVar15 = iVar15 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_80);
    }
    if (0xf < local_18) {
      pvVar16 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar16 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar16);
    }
    if (iVar15 == 0) {
      FUN_00402690(pbVar13,&DAT_005e434c,3);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"version",7);
      local_8 = CONCAT31(local_8._1_3_,9);
      pbVar10 = FUN_00419170(local_88,(byte *)local_2c);
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar8 = *(byte **)pbVar10;
        }
        FUN_00402690(pbVar13,pbVar8,*(uint *)(pbVar10 + 0x10));
      }
      local_8._0_1_ = 5;
      if (0xf < local_18) {
        pvVar16 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar16 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar16);
      }
    }
    FUN_0058f1d0((int *)local_74);
    local_8._0_1_ = 10;
    piVar11 = (int *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e42b8);
    piVar6 = local_98;
    if (local_98 != piVar11) {
      FUN_00401b20(local_98);
      iVar15 = piVar11[1];
      iVar1 = piVar11[2];
      iVar2 = piVar11[3];
      *piVar6 = *piVar11;
      piVar6[1] = iVar15;
      piVar6[2] = iVar1;
      piVar6[3] = iVar2;
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(piVar11 + 4);
      piVar11[4] = 0;
      piVar11[5] = 0xf;
      *(undefined1 *)piVar11 = 0;
    }
    if (0xf < local_18) {
      pvVar16 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar16 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar16);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_60) {
      pvVar16 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar16 = *(void **)((int)local_74[0] + -4),
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar16)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar16);
    }
    FUN_00419300(local_88,&local_98,(int *)*local_88[0],local_88[0]);
    FUN_005adb3f(local_88[0]);
  }
  if ((LPCSTR ***)0xf < pppCStack_30) {
    pppppCVar4 = (LPCSTR ****)local_44;
    if ((0xfff < (int)pppCStack_30 + 1U) &&
       (pppppCVar4 = (LPCSTR ****)local_44[-1],
       (LPCSTR)0x1f < (LPCSTR)((int)local_44 + (-4 - (int)pppppCVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppCVar4);
  }
  local_34 = (LPCSTR **)0x0;
  pppCStack_30 = (LPCSTR **)0xf;
  local_44 = (LPCSTR ***)((uint)local_44 & 0xffffff00);
  if (0xf < local_48) {
    pppppcVar3 = (char *****)local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pppppcVar3 = (char *****)local_5c[0][-1],
       (char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)pppppcVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppcVar3);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (char ****)((uint)local_5c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pbVar13 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar13 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar13))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar13);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00418d50(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00419300(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  FUN_005adb3f((void *)*param_1);
  return;
}


void FUN_00418d80(undefined4 *param_1,char *param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  DWORD DVar1;
  int *piVar2;
  char **ppcVar3;
  uint uVar4;
  LPCWSTR *****lpFileName;
  HANDLE hFindFile;
  uint uVar5;
  BOOL BVar6;
  byte ******ppppppbVar7;
  byte ******ppppppbVar8;
  void *pvVar9;
  char *pcVar10;
  _WIN32_FIND_DATAW local_2ac;
  void *local_5c [5];
  uint local_48;
  LPCWSTR ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte *****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b0ee2;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  uStack_7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ppcVar3 = &param_2;
  if (0xf < param_6._4_4_) {
    ppcVar3 = (char **)param_2;
  }
  mbstowcs(local_2ac.cFileName + 0x12,(char *)ppcVar3,0x100);
  DVar1 = GetFileAttributesW(local_2ac.cFileName + 0x12);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    if ((int)param_6 == 0) {
code_r0x00418e9d:
      ppcVar3 = (char **)FUN_00591e00((undefined1 *)local_2c,&DAT_005e4358);
      if (&param_2 != ppcVar3) {
        FUN_00401b20((int *)&param_2);
        param_2 = *ppcVar3;
        param_3 = (int)ppcVar3[1];
        param_4 = (int)ppcVar3[2];
        param_5 = (int)ppcVar3[3];
        param_6 = *(undefined8 *)(ppcVar3 + 4);
        ppcVar3[4] = (char *)0x0;
        ppcVar3[5] = &DAT_0000000f;
        *(undefined1 *)ppcVar3 = 0;
      }
    }
    else {
      ppcVar3 = &param_2;
      if (0xf < param_6._4_4_) {
        ppcVar3 = (char **)param_2;
      }
      if (*(char *)ppcVar3 != '\\') goto code_r0x00418e9d;
      piVar2 = (int *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e4350);
      FUN_00413230(&param_2,piVar2);
    }
    if (0xf < local_18) {
      ppppppbVar7 = (byte ******)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppppbVar7 = (byte ******)local_2c[0][-1],
         (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppppbVar7)))) goto LAB_00418e8e;
      FUN_005adb3f(ppppppbVar7);
    }
    ppcVar3 = &param_2;
    if (0xf < param_6._4_4_) {
      ppcVar3 = (char **)param_2;
    }
    pcVar10 = (char *)((int)param_6 + (int)ppcVar3);
    local_34 = 0;
    local_30 = 7;
    ppcVar3 = &param_2;
    if (0xf < param_6._4_4_) {
      ppcVar3 = (char **)param_2;
    }
    local_44[0] = (LPCWSTR ****)((uint)local_44[0] & 0xffff0000);
    uVar4 = (int)pcVar10 - (int)ppcVar3;
    if (7 < uVar4) {
      FUN_00419ee0(local_44,uVar4);
    }
    local_34 = 0;
    FUN_00419e30(local_44,(char *)ppcVar3,pcVar10);
    local_8 = 2;
    lpFileName = local_44;
    if (7 < local_30) {
      lpFileName = (LPCWSTR *****)local_44[0];
    }
    hFindFile = FindFirstFileW((LPCWSTR)lpFileName,&local_2ac);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        FUN_00591e00((undefined1 *)local_5c,&DAT_005e3ea8);
        local_8 = 3;
        if (((byte)local_2ac.dwFileAttributes & 0x10) != 0) {
          FUN_00591e00((undefined1 *)local_2c,&DAT_005e3ea8);
          uVar4 = local_18;
          ppppppbVar7 = (byte ******)local_2c[0];
          _local_8 = CONCAT31(uStack_7,4);
          ppppppbVar8 = local_2c;
          if (0xf < local_18) {
            ppppppbVar8 = (byte ******)local_2c[0];
          }
          uVar5 = FUN_004031f0((byte *)ppppppbVar8,local_1c,&DAT_005e435c,1);
          if ((char)uVar5 == '\0') {
            ppppppbVar8 = local_2c;
            if (0xf < uVar4) {
              ppppppbVar8 = ppppppbVar7;
            }
            uVar5 = FUN_004031f0((byte *)ppppppbVar8,local_1c,&DAT_005e4360,2);
            if ((char)uVar5 == '\0') {
              piVar2 = (int *)param_1[1];
              if ((int *)param_1[2] == piVar2) {
                FUN_00403840(param_1,piVar2,local_2c);
                ppppppbVar7 = (byte ******)local_2c[0];
                uVar4 = local_18;
              }
              else {
                FUN_004024e0(piVar2,local_2c);
                param_1[1] = param_1[1] + 0x18;
                ppppppbVar7 = (byte ******)local_2c[0];
                uVar4 = local_18;
              }
            }
          }
          local_8 = 3;
          if (0xf < uVar4) {
            ppppppbVar8 = ppppppbVar7;
            if ((0xfff < uVar4 + 1) &&
               (ppppppbVar8 = (byte ******)ppppppbVar7[-1],
               (byte *)0x1f < (byte *)((int)ppppppbVar7 + (-4 - (int)ppppppbVar8))))
            goto LAB_00418e8e;
            FUN_005adb3f(ppppppbVar8);
          }
        }
        local_8 = 2;
        if (0xf < local_48) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) goto LAB_00418e8e;
          FUN_005adb3f(pvVar9);
        }
        BVar6 = FindNextFileW(hFindFile,&local_2ac);
      } while (BVar6 != 0);
    }
    FUN_004192a0((int *)local_44);
  }
  if (0xf < param_6._4_4_) {
    pcVar10 = param_2;
    if ((0xfff < param_6._4_4_ + 1) &&
       (pcVar10 = *(char **)(param_2 + -4), (char *)0x1f < param_2 + (-4 - (int)pcVar10))) {
LAB_00418e8e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pcVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __thiscall FUN_00419130(void *this,byte *param_1)

{
  int iVar1;
  byte *local_c;
  byte *local_8;
  
  FUN_00419820(this,(int *)&local_c,param_1);
  iVar1 = 0;
  param_1 = local_c;
  while (param_1 != local_8) {
    iVar1 = iVar1 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_1);
  }
  return iVar1;
}


byte * __thiscall FUN_00419170(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  FUN_00419d50(this,(int *)&param_1,param_1);
  pbVar4 = param_1;
  pbVar7 = extraout_ECX;
  if (param_1 == *(byte **)this) goto LAB_0041921b;
  pbVar8 = param_1 + 0x10;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  pbVar7 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar7 = *(byte **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_004191d6;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0041920a:
    uVar5 = 0;
  }
  else {
LAB_004191d6:
    bVar9 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar2 == 0xffffffff || (bVar9 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3]))))))))))
       )) goto LAB_0041920a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0041924d:
      return param_1 + 0x28;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0041924d;
LAB_0041921b:
  param_1 = pbVar3;
  piVar6 = (int *)FUN_0041a010(this,pbVar7,&param_1);
  FUN_0041a070(this,&param_1,(int *)pbVar4,(byte *)(piVar6 + 4),piVar6);
  return param_1 + 0x28;
}


void __fastcall thunk_FUN_004192a0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (7 < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] * 2 + 2U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}


void __fastcall FUN_00419270(undefined4 *param_1)

{
  FUN_005adb3f((void *)*param_1);
  return;
}


void __fastcall FUN_00419280(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00419300(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  return;
}


void __fastcall FUN_004192a0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (7 < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] * 2 + 2U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}


void __thiscall FUN_00419300(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_14 = this;
  if ((param_2 == (int *)*piVar1) && (param_3 == piVar1)) {
    local_8 = 0;
    FUN_004197d0((int *)piVar1[1]);
    *(int **)(*(int *)this + 4) = piVar1;
    **(undefined4 **)this = piVar1;
    *(int **)(*(int *)this + 8) = piVar1;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    ExceptionList = local_10;
    return;
  }
  if (param_2 != param_3) {
    do {
      piVar1 = param_2;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&param_2);
      local_14 = piVar1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
      piVar1 = FUN_004193e0(this,piVar1);
      FUN_00419bc0(piVar1 + 4);
      FUN_005adb3f(piVar1);
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  ExceptionList = local_10;
  return;
}


int * __thiscall FUN_004193e0(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *extraout_EDX;
  int *piVar8;
  
  piVar5 = param_1;
  std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_1);
  piVar7 = (int *)*piVar5;
  piVar8 = (int *)piVar5[2];
  if (((*(char *)((int)piVar7 + 0xd) == '\0') &&
      (piVar8 = piVar7, *(char *)(piVar5[2] + 0xd) == '\0')) &&
     (piVar8 = (int *)param_1[2], param_1 != piVar5)) {
    piVar7[1] = (int)param_1;
    *param_1 = *piVar5;
    piVar7 = param_1;
    if (param_1 != (int *)piVar5[2]) {
      piVar7 = (int *)param_1[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar8[1] = (int)piVar7;
      }
      *piVar7 = (int)piVar8;
      param_1[2] = piVar5[2];
      *(int **)(piVar5[2] + 4) = param_1;
    }
    if (*(int **)(*(int *)this + 4) == piVar5) {
      *(int **)(*(int *)this + 4) = param_1;
    }
    else {
      piVar6 = (int *)piVar5[1];
      if ((int *)*piVar6 == piVar5) {
        *piVar6 = (int)param_1;
      }
      else {
        piVar6[2] = (int)param_1;
      }
    }
    param_1[1] = piVar5[1];
    iVar2 = param_1[3];
    *(char *)(param_1 + 3) = (char)piVar5[3];
    *(char *)(piVar5 + 3) = (char)iVar2;
  }
  else {
    piVar6 = (int *)piVar5[1];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      piVar8[1] = (int)piVar6;
    }
    if (*(int **)(*(int *)this + 4) == piVar5) {
      *(int **)(*(int *)this + 4) = piVar8;
    }
    else if ((int *)*piVar6 == piVar5) {
      *piVar6 = (int)piVar8;
    }
    else {
      piVar6[2] = (int)piVar8;
    }
    if ((int *)**(int **)this == piVar5) {
      piVar7 = piVar6;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar8 + 0xd);
        piVar3 = (int *)*piVar8;
        piVar7 = piVar8;
        while (piVar4 = piVar3, cVar1 == '\0') {
          piVar3 = (int *)*piVar4;
          cVar1 = *(char *)((int)piVar3 + 0xd);
          piVar7 = piVar4;
        }
      }
      **(int **)this = (int)piVar7;
    }
    iVar2 = *(int *)this;
    piVar7 = piVar6;
    if (*(int **)(iVar2 + 8) == piVar5) {
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar6 = (int *)FUN_00413db0((int)piVar8);
        piVar7 = extraout_EDX;
      }
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)piVar5[3] == '\x01') {
    if (piVar8 != *(int **)(*(int *)this + 4)) {
      while (piVar6 = piVar7, (char)piVar8[3] == '\x01') {
        piVar7 = (int *)*piVar6;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar6[2];
          if ((char)piVar7[3] == '\0') {
            *(undefined1 *)(piVar7 + 3) = 1;
            piVar7 = (int *)piVar6[2];
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6[2] = *piVar7;
            if (*(char *)(*piVar7 + 0xd) == '\0') {
              *(int **)(*piVar7 + 4) = piVar6;
            }
            piVar7[1] = piVar6[1];
            if (piVar6 == *(int **)(*(int *)this + 4)) {
              *(int **)(*(int *)this + 4) = piVar7;
            }
            else {
              piVar3 = (int *)piVar6[1];
              if (piVar6 == (int *)*piVar3) {
                *piVar3 = (int)piVar7;
              }
              else {
                piVar3[2] = (int)piVar7;
              }
            }
            *piVar7 = (int)piVar6;
            piVar6[1] = (int)piVar7;
            piVar7 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            if ((*(char *)(*piVar7 + 0xc) != '\x01') || (*(char *)(piVar7[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar7[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar7 + 0xc) = 1;
                iVar2 = *piVar7;
                *(undefined1 *)(piVar7 + 3) = 0;
                *piVar7 = *(int *)(iVar2 + 8);
                if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
                  *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
                }
                *(int *)(iVar2 + 4) = piVar7[1];
                if (piVar7 == *(int **)(*(int *)this + 4)) {
                  *(int *)(*(int *)this + 4) = iVar2;
                  *(int **)(iVar2 + 8) = piVar7;
                  piVar7[1] = iVar2;
                  piVar7 = (int *)piVar6[2];
                }
                else {
                  piVar3 = (int *)piVar7[1];
                  if (piVar7 == (int *)piVar3[2]) {
                    piVar3[2] = iVar2;
                    *(int **)(iVar2 + 8) = piVar7;
                    piVar7[1] = iVar2;
                    piVar7 = (int *)piVar6[2];
                  }
                  else {
                    *piVar3 = iVar2;
                    *(int **)(iVar2 + 8) = piVar7;
                    piVar7[1] = iVar2;
                    piVar7 = (int *)piVar6[2];
                  }
                }
              }
              *(char *)(piVar7 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar7[2] + 0xc) = 1;
              piVar7 = (int *)piVar6[2];
              piVar6[2] = *piVar7;
              if (*(char *)(*piVar7 + 0xd) == '\0') {
                *(int **)(*piVar7 + 4) = piVar6;
              }
              piVar7[1] = piVar6[1];
              if (piVar6 == *(int **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar7;
                *piVar7 = (int)piVar6;
                piVar6[1] = (int)piVar7;
              }
              else {
                piVar3 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar3) {
                  *piVar3 = (int)piVar7;
                  *piVar7 = (int)piVar6;
                  piVar6[1] = (int)piVar7;
                }
                else {
                  piVar3[2] = (int)piVar7;
                  *piVar7 = (int)piVar6;
                  piVar6[1] = (int)piVar7;
                }
              }
              break;
            }
LAB_00419652:
            *(undefined1 *)(piVar7 + 3) = 0;
          }
        }
        else {
          if ((char)piVar7[3] == '\0') {
            *(undefined1 *)(piVar7 + 3) = 1;
            iVar2 = *piVar6;
            *(undefined1 *)(piVar6 + 3) = 0;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar2;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar7[2]) {
                piVar7[2] = iVar2;
              }
              else {
                *piVar7 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar6;
            piVar6[1] = iVar2;
            piVar7 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            if ((*(char *)(piVar7[2] + 0xc) == '\x01') && (*(char *)(*piVar7 + 0xc) == '\x01'))
            goto LAB_00419652;
            if (*(char *)(*piVar7 + 0xc) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0xc) = 1;
              piVar3 = (int *)piVar7[2];
              *(undefined1 *)(piVar7 + 3) = 0;
              piVar7[2] = *piVar3;
              if (*(char *)(*piVar3 + 0xd) == '\0') {
                *(int **)(*piVar3 + 4) = piVar7;
              }
              piVar3[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar3;
                *piVar3 = (int)piVar7;
                piVar7[1] = (int)piVar3;
                piVar7 = (int *)*piVar6;
              }
              else {
                piVar4 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar4) {
                  *piVar4 = (int)piVar3;
                  *piVar3 = (int)piVar7;
                  piVar7[1] = (int)piVar3;
                  piVar7 = (int *)*piVar6;
                }
                else {
                  piVar4[2] = (int)piVar3;
                  *piVar3 = (int)piVar7;
                  piVar7[1] = (int)piVar3;
                  piVar7 = (int *)*piVar6;
                }
              }
            }
            *(char *)(piVar7 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar7 + 0xc) = 1;
            iVar2 = *piVar6;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar2;
              *(int **)(iVar2 + 8) = piVar6;
              piVar6[1] = iVar2;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar7[2]) {
                piVar7[2] = iVar2;
                *(int **)(iVar2 + 8) = piVar6;
                piVar6[1] = iVar2;
              }
              else {
                *piVar7 = iVar2;
                *(int **)(iVar2 + 8) = piVar6;
                piVar6[1] = iVar2;
              }
            }
            break;
          }
        }
        piVar7 = (int *)piVar6[1];
        piVar8 = piVar6;
        if (piVar6 == *(int **)(*(int *)this + 4)) break;
      }
    }
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return piVar5;
}


void FUN_004197d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004197d0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00419bc0(param_1 + 4);
    FUN_005adb3f(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}


void __thiscall FUN_00419820(void *this,int *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  undefined4 *local_18;
  undefined4 *local_8;
  
  local_18 = *(undefined4 **)this;
  puVar6 = local_18 + 1;
  local_8 = local_18;
  if (*(char *)((int)local_18[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_2 + 0x10);
    puVar8 = (undefined4 *)local_18[1];
    do {
      pbVar7 = (byte *)(puVar8 + 4);
      pbVar5 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar5 = *(byte **)param_2;
      }
      pbVar10 = pbVar7;
      if (0xf < (uint)puVar8[9]) {
        pbVar10 = *(byte **)pbVar7;
      }
      uVar3 = puVar8[8];
      if (*(uint *)(param_2 + 0x10) < (uint)puVar8[8]) {
        uVar3 = *(uint *)(param_2 + 0x10);
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar10 != *(int *)pbVar5) goto LAB_00419898;
        pbVar10 = pbVar10 + 4;
        pbVar5 = pbVar5 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_004198cc:
        uVar3 = 0;
      }
      else {
LAB_00419898:
        bVar11 = *pbVar10 < *pbVar5;
        if ((*pbVar10 == *pbVar5) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar10[1] < pbVar5[1], pbVar10[1] == pbVar5[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar10[2] < pbVar5[2], pbVar10[2] == pbVar5[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar5[3], pbVar10[3] == pbVar5[3])))
               ))))))))) goto LAB_004198cc;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        uVar3 = puVar8[8];
        if (uVar3 < uVar1) {
          puVar9 = (undefined4 *)puVar8[2];
        }
        else {
LAB_004198f4:
          if (*(char *)((int)local_8 + 0xd) != '\0') {
            if (0xf < (uint)puVar8[9]) {
              pbVar7 = *(byte **)pbVar7;
            }
            pbVar5 = param_2;
            if (0xf < *(uint *)(param_2 + 0x14)) {
              pbVar5 = *(byte **)param_2;
            }
            uVar4 = uVar1;
            if (uVar3 < uVar1) {
              uVar4 = uVar3;
            }
            while (uVar2 = uVar4 - 4, 3 < uVar4) {
              if (*(int *)pbVar5 != *(int *)pbVar7) goto LAB_00419938;
              pbVar5 = pbVar5 + 4;
              pbVar7 = pbVar7 + 4;
              uVar4 = uVar2;
            }
            if (uVar2 == 0xfffffffc) {
LAB_0041996c:
              uVar4 = 0;
            }
            else {
LAB_00419938:
              bVar11 = *pbVar5 < *pbVar7;
              if ((*pbVar5 == *pbVar7) &&
                 ((uVar2 == 0xfffffffd ||
                  ((bVar11 = pbVar5[1] < pbVar7[1], pbVar5[1] == pbVar7[1] &&
                   ((uVar2 == 0xfffffffe ||
                    ((bVar11 = pbVar5[2] < pbVar7[2], pbVar5[2] == pbVar7[2] &&
                     ((uVar2 == 0xffffffff ||
                      (bVar11 = pbVar5[3] < pbVar7[3], pbVar5[3] == pbVar7[3]))))))))))))
              goto LAB_0041996c;
              uVar4 = -(uint)bVar11 | 1;
            }
            if (uVar4 == 0) {
              if (*(uint *)(param_2 + 0x10) < uVar3) {
LAB_0041997e:
                local_8 = puVar8;
              }
            }
            else if ((int)uVar4 < 0) goto LAB_0041997e;
          }
          puVar9 = (undefined4 *)*puVar8;
          local_18 = puVar8;
        }
      }
      else {
        if (-1 < (int)uVar3) {
          uVar3 = puVar8[8];
          goto LAB_004198f4;
        }
        puVar9 = (undefined4 *)puVar8[2];
      }
      puVar8 = puVar9;
    } while (*(char *)((int)puVar9 + 0xd) == '\0');
  }
  if (*(char *)((int)local_8 + 0xd) == '\0') {
    puVar6 = local_8;
  }
  if (*(char *)((int)*puVar6 + 0xd) == '\0') {
    puVar6 = (undefined4 *)*puVar6;
    do {
      pbVar7 = (byte *)(puVar6 + 4);
      if (0xf < (uint)puVar6[9]) {
        pbVar7 = (byte *)puVar6[4];
      }
      pbVar5 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar5 = *(byte **)param_2;
      }
      uVar1 = puVar6[8];
      uVar3 = *(uint *)(param_2 + 0x10);
      if (uVar1 < *(uint *)(param_2 + 0x10)) {
        uVar3 = uVar1;
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar5 != *(int *)pbVar7) goto LAB_004199fd;
        pbVar5 = pbVar5 + 4;
        pbVar7 = pbVar7 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00419a31:
        uVar3 = 0;
      }
      else {
LAB_004199fd:
        bVar11 = *pbVar5 < *pbVar7;
        if ((*pbVar5 == *pbVar7) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar5[1] < pbVar7[1], pbVar5[1] == pbVar7[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar5[2] < pbVar7[2], pbVar5[2] == pbVar7[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar5[3] < pbVar7[3], pbVar5[3] == pbVar7[3])))))
              ))))))) goto LAB_00419a31;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= *(uint *)(param_2 + 0x10)) goto LAB_00419a3e;
LAB_00419a67:
        puVar8 = (undefined4 *)*puVar6;
        local_8 = puVar6;
      }
      else {
        if ((int)uVar3 < 0) goto LAB_00419a67;
LAB_00419a3e:
        puVar8 = (undefined4 *)puVar6[2];
      }
      puVar6 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *param_1 = (int)local_18;
  param_1[1] = (int)local_8;
  return;
}


undefined4 * __thiscall
FUN_00419a70(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  size_t _Size;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  void *pvVar7;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 == 0x7ffffffe) {
                    // WARNING: Subroutine does not return
    FUN_00402940();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  uVar6 = iVar1 + 1U | 7;
  if (uVar6 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7ffffffe;
    }
    else {
      uVar5 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
    }
  }
  else {
    uVar6 = 0x7ffffffe;
  }
  uVar5 = (uVar6 + 1) * 2;
  if (uVar6 + 1 < 0x80000000) {
    if (0xfff < uVar5) goto LAB_00419ad9;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_00419ad9:
    uVar3 = uVar5 + 0x23;
    if (uVar3 <= uVar5) {
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar3);
    if (iVar4 == 0) goto LAB_00419b8b;
    _Dst = (void *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar4;
  }
  *(uint *)((int)this + 0x14) = uVar6;
  _Size = iVar1 * 2;
  *(int *)((int)this + 0x10) = iVar1 + 1;
  if (uVar2 < 8) {
    memcpy(_Dst,this,_Size);
    *(undefined2 *)(_Size + (int)_Dst) = param_3;
    *(undefined2 *)(_Size + 2 + (int)_Dst) = 0;
    *(void **)this = _Dst;
    return this;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,iVar1 * 2);
  *(undefined2 *)(iVar1 * 2 + (int)_Dst) = param_3;
  *(undefined2 *)(iVar1 * 2 + 2 + (int)_Dst) = 0;
  pvVar7 = _Src;
  if ((uVar2 * 2 + 2 < 0x1000) ||
     (pvVar7 = *(void **)((int)_Src + -4), (uint)((int)_Src + (-4 - (int)pvVar7)) < 0x20)) {
    FUN_005adb3f(pvVar7);
    *(void **)this = _Dst;
    return this;
  }
LAB_00419b8b:
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


void __fastcall FUN_00419bc0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00419c47;
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00419c47:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


void __thiscall FUN_00419c50(void *this,undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar3 = param_2;
  FUN_00419d50(this,(int *)&param_2,param_2);
  pbVar4 = param_2;
  pbVar7 = extraout_ECX;
  if (param_2 == *(byte **)this) goto LAB_00419cfb;
  pbVar8 = param_2 + 0x10;
  if (0xf < *(uint *)(param_2 + 0x24)) {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  pbVar7 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar7 = *(byte **)pbVar3;
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar7 != *(int *)pbVar8) goto LAB_00419cb6;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_00419cea:
    uVar5 = 0;
  }
  else {
LAB_00419cb6:
    bVar9 = *pbVar7 < *pbVar8;
    if ((*pbVar7 == *pbVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = pbVar7[1] < pbVar8[1], pbVar7[1] == pbVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = pbVar7[2] < pbVar8[2], pbVar7[2] == pbVar8[2] &&
           ((uVar2 == 0xffffffff || (bVar9 = pbVar7[3] < pbVar8[3], pbVar7[3] == pbVar8[3]))))))))))
       )) goto LAB_00419cea;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_00419d33:
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_00419d33;
LAB_00419cfb:
  param_2 = pbVar3;
  piVar6 = (int *)FUN_0041a010(this,pbVar7,&param_2);
  FUN_0041a070(this,&param_2,(int *)pbVar4,(byte *)(piVar6 + 4),piVar6);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


void __thiscall FUN_00419d50(void *this,int *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *local_c;
  
  local_c = *(undefined4 **)this;
  if (*(char *)((int)local_c[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_2 + 0x10);
    puVar7 = (undefined4 *)local_c[1];
    do {
      pbVar6 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar6 = *(byte **)param_2;
      }
      pbVar4 = (byte *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        pbVar4 = (byte *)puVar7[4];
      }
      uVar2 = puVar7[8];
      uVar5 = uVar2;
      if (uVar1 < uVar2) {
        uVar5 = uVar1;
      }
      while (uVar3 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar4 != *(int *)pbVar6) goto LAB_00419db6;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
        uVar5 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_00419dea:
        uVar5 = 0;
      }
      else {
LAB_00419db6:
        bVar9 = *pbVar4 < *pbVar6;
        if ((*pbVar4 == *pbVar6) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar9 = pbVar4[1] < pbVar6[1], pbVar4[1] == pbVar6[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar9 = pbVar4[2] < pbVar6[2], pbVar4[2] == pbVar6[2] &&
               ((uVar3 == 0xffffffff || (bVar9 = pbVar4[3] < pbVar6[3], pbVar4[3] == pbVar6[3]))))))
             )))))) goto LAB_00419dea;
        uVar5 = -(uint)bVar9 | 1;
      }
      if (uVar5 == 0) {
        if (uVar2 < uVar1) goto LAB_00419e19;
LAB_00419df5:
        puVar8 = (undefined4 *)*puVar7;
        local_c = puVar7;
      }
      else {
        if (-1 < (int)uVar5) goto LAB_00419df5;
LAB_00419e19:
        puVar8 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *param_1 = (int)local_c;
  return;
}


void __thiscall FUN_00419e30(void *this,char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pcVar4 = param_1;
  while (pcVar4 != param_2) {
    cVar1 = *pcVar4;
    uVar2 = *(uint *)((int)this + 0x10);
    if (uVar2 < *(uint *)((int)this + 0x14)) {
      *(uint *)((int)this + 0x10) = uVar2 + 1;
      pvVar3 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
        pvVar3 = *(void **)this;
      }
      *(short *)((int)pvVar3 + uVar2 * 2) = (short)cVar1;
      *(undefined2 *)((int)pvVar3 + uVar2 * 2 + 2) = 0;
      pcVar4 = pcVar4 + 1;
    }
    else {
      param_1 = (char *)((uint)param_1 & 0xffffff00);
      FUN_00419a70(this,uVar2,param_1,(short)cVar1);
      pcVar4 = pcVar4 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


undefined4 * __thiscall FUN_00419ee0(void *this,uint param_1)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *_Dst;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (0x7ffffffeU - iVar1 < param_1) {
                    // WARNING: Subroutine does not return
    FUN_00402940();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  uVar6 = iVar1 + param_1 | 7;
  if (uVar6 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7ffffffe;
    }
    else {
      uVar5 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
    }
  }
  else {
    uVar6 = 0x7ffffffe;
  }
  uVar5 = (uVar6 + 1) * 2;
  if (uVar6 + 1 < 0x80000000) {
    if (0xfff < uVar5) goto LAB_00419f50;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_00419f50:
    uVar3 = uVar5 + 0x23;
    if (uVar3 <= uVar5) {
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar3);
    if (iVar4 == 0) goto LAB_00419fe7;
    _Dst = (void *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar4;
  }
  *(uint *)((int)this + 0x10) = iVar1 + param_1;
  *(uint *)((int)this + 0x14) = uVar6;
  _Size = iVar1 * 2 + 2;
  if (uVar2 < 8) {
    memcpy(_Dst,this,_Size);
    *(void **)this = _Dst;
    return this;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,_Size);
  pvVar7 = _Src;
  if ((uVar2 * 2 + 2 < 0x1000) ||
     (pvVar7 = *(void **)((int)_Src + -4), (uint)((int)_Src + (-4 - (int)pvVar7)) < 0x20)) {
    FUN_005adb3f(pvVar7);
    *(void **)this = _Dst;
    return this;
  }
LAB_00419fe7:
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


void __thiscall FUN_0041a010(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = FUN_0041a660(this);
  *(undefined2 *)(iVar5 + 0xc) = 0;
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(iVar5 + 0x10) = *puVar1;
  *(undefined4 *)(iVar5 + 0x14) = uVar2;
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  *(undefined4 *)(iVar5 + 0x1c) = uVar4;
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0xf;
  *(undefined1 *)(iVar5 + 0x28) = 0;
  return;
}


undefined4 * __thiscall
FUN_0041a070(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  uint uStack_38;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0f30;
  local_10 = ExceptionList;
  uStack_38 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_38;
    FUN_0041a6a0(this,param_1,'\x01',*(undefined4 **)this,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  local_24 = *(int **)this;
  if (param_2 != (int *)*local_24) {
    if (param_2 != local_24) {
      pbVar13 = (byte *)(param_2 + 4);
      if (0xf < (uint)param_2[9]) {
        pbVar13 = (byte *)param_2[4];
      }
      pbVar12 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar12 = *(byte **)param_3;
      }
      local_1c = *(uint *)(param_3 + 0x10);
      uVar9 = local_1c;
      if ((uint)param_2[8] < local_1c) {
        uVar9 = param_2[8];
      }
      while (uVar7 = uVar9 - 4, 3 < uVar9) {
        if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_0041a2b7;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
        uVar9 = uVar7;
      }
      if (uVar7 == 0xfffffffc) {
LAB_0041a2eb:
        uVar9 = 0;
      }
      else {
LAB_0041a2b7:
        bVar14 = *pbVar12 < *pbVar13;
        if ((*pbVar12 == *pbVar13) &&
           ((uVar7 == 0xfffffffd ||
            ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
             ((uVar7 == 0xfffffffe ||
              ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
               ((uVar7 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])
                ))))))))))) goto LAB_0041a2eb;
        uVar9 = -(uint)bVar14 | 1;
      }
      if (uVar9 == 0) {
        if (*(uint *)(param_3 + 0x10) < (uint)param_2[8]) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)((uint)param_2[8] < *(uint *)(param_3 + 0x10));
        }
      }
      if ((int)uVar9 < 0) {
        if (*(char *)((int)param_2 + 0xd) == '\0') {
          piVar10 = (int *)*param_2;
          if (*(char *)((int)piVar10 + 0xd) == '\0') {
            cVar1 = *(char *)(piVar10[2] + 0xd);
            piVar4 = (int *)piVar10[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(piVar4[2] + 0xd);
              piVar10 = piVar4;
              piVar4 = (int *)piVar4[2];
            }
          }
          else {
            cVar1 = *(char *)(param_2[1] + 0xd);
            piVar4 = (int *)param_2[1];
            piVar10 = param_2;
            while ((piVar5 = piVar4, cVar1 == '\0' && (piVar10 == (int *)*piVar5))) {
              cVar1 = *(char *)(piVar5[1] + 0xd);
              piVar4 = (int *)piVar5[1];
              piVar10 = piVar5;
            }
            if (*(char *)((int)piVar10 + 0xd) == '\0') {
              piVar10 = piVar5;
            }
          }
        }
        else {
          piVar10 = (int *)param_2[2];
        }
        pbVar13 = param_3;
        if (0xf < *(uint *)(param_3 + 0x14)) {
          pbVar13 = *(byte **)param_3;
        }
        pbVar12 = (byte *)(piVar10 + 4);
        if (0xf < (uint)piVar10[9]) {
          pbVar12 = (byte *)piVar10[4];
        }
        uVar9 = piVar10[8];
        if (local_1c < (uint)piVar10[8]) {
          uVar9 = local_1c;
        }
        while (uVar7 = uVar9 - 4, 3 < uVar9) {
          if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_0041a3a8;
          pbVar12 = pbVar12 + 4;
          pbVar13 = pbVar13 + 4;
          uVar9 = uVar7;
        }
        if (uVar7 == 0xfffffffc) {
LAB_0041a3dc:
          uVar9 = 0;
        }
        else {
LAB_0041a3a8:
          bVar14 = *pbVar12 < *pbVar13;
          if ((*pbVar12 == *pbVar13) &&
             ((uVar7 == 0xfffffffd ||
              ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
               ((uVar7 == 0xfffffffe ||
                ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
                 ((uVar7 == 0xffffffff ||
                  (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3]))))))))))))
          goto LAB_0041a3dc;
          uVar9 = -(uint)bVar14 | 1;
        }
        if (uVar9 == 0) {
          if ((uint)piVar10[8] < local_1c) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(local_1c < (uint)piVar10[8]);
          }
        }
        if ((int)uVar9 < 0) {
          iVar2 = piVar10[2];
          if (*(char *)(iVar2 + 0xd) != '\0') {
            local_14 = (undefined1 *)&uStack_38;
            FUN_0041a6a0(this,param_1,'\0',piVar10,iVar2,param_4);
            ExceptionList = local_10;
            return param_1;
          }
          local_14 = (undefined1 *)&uStack_38;
          FUN_0041a6a0(this,param_1,'\x01',param_2,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
      }
      pbVar13 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar13 = *(byte **)param_3;
      }
      pbVar12 = (byte *)(param_2 + 4);
      if (0xf < (uint)param_2[9]) {
        pbVar12 = (byte *)param_2[4];
      }
      uVar9 = param_2[8];
      if (*(uint *)(param_3 + 0x10) < (uint)param_2[8]) {
        uVar9 = *(uint *)(param_3 + 0x10);
      }
      while (uVar7 = uVar9 - 4, 3 < uVar9) {
        if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_0041a496;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
        uVar9 = uVar7;
      }
      if (uVar7 == 0xfffffffc) {
LAB_0041a4ca:
        uVar9 = 0;
      }
      else {
LAB_0041a496:
        bVar14 = *pbVar12 < *pbVar13;
        if ((*pbVar12 == *pbVar13) &&
           ((uVar7 == 0xfffffffd ||
            ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
             ((uVar7 == 0xfffffffe ||
              ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
               ((uVar7 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])
                ))))))))))) goto LAB_0041a4ca;
        uVar9 = -(uint)bVar14 | 1;
      }
      if (uVar9 == 0) {
        pbVar12 = (byte *)(param_2 + 4);
        if ((uint)param_2[8] < *(uint *)(param_3 + 0x10)) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(*(uint *)(param_3 + 0x10) < (uint)param_2[8]);
        }
      }
      puVar6 = &uStack_38;
      if (-1 < (int)uVar9) goto LAB_0041a5f1;
      local_20 = param_2;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_20);
      if (local_20 == local_24) goto LAB_0041a59a;
      pbVar13 = (byte *)(local_20 + 4);
      if (0xf < (uint)local_20[9]) {
        pbVar13 = (byte *)local_20[4];
      }
      pbVar12 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar12 = *(byte **)param_3;
      }
      uVar9 = local_1c;
      if ((uint)local_20[8] < local_1c) {
        uVar9 = local_20[8];
      }
      while (uVar7 = uVar9 - 4, 3 < uVar9) {
        if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_0041a546;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
        uVar9 = uVar7;
      }
      if (uVar7 == 0xfffffffc) {
LAB_0041a57a:
        uVar9 = 0;
      }
      else {
LAB_0041a546:
        bVar14 = *pbVar12 < *pbVar13;
        if ((*pbVar12 == *pbVar13) &&
           ((uVar7 == 0xfffffffd ||
            ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
             ((uVar7 == 0xfffffffe ||
              ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
               ((uVar7 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])
                ))))))))))) goto LAB_0041a57a;
        uVar9 = -(uint)bVar14 | 1;
      }
      if (uVar9 == 0) {
        if (local_1c < (uint)local_20[8]) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)((uint)local_20[8] < local_1c);
        }
      }
      pbVar12 = (byte *)(uVar9 >> 0x1f);
      puVar6 = (uint *)local_14;
      if ((int)uVar9 < 0) {
LAB_0041a59a:
        iVar2 = param_2[2];
        if (*(char *)(iVar2 + 0xd) != '\0') {
          FUN_0041a6a0(local_18,param_1,'\0',param_2,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0041a6a0(local_18,param_1,'\x01',local_20,iVar2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_0041a5f1;
    }
    iVar2 = local_24[2];
    pbVar13 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pbVar13 = *(byte **)param_3;
    }
    pbVar12 = (byte *)(iVar2 + 0x10);
    if (0xf < *(uint *)(iVar2 + 0x24)) {
      pbVar12 = *(byte **)(iVar2 + 0x10);
    }
    uVar9 = *(uint *)(param_3 + 0x10);
    uVar7 = *(uint *)(iVar2 + 0x20);
    uVar8 = uVar7;
    if (uVar9 < uVar7) {
      uVar8 = uVar9;
    }
    while (uVar3 = uVar8 - 4, 3 < uVar8) {
      if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_0041a1f6;
      pbVar12 = pbVar12 + 4;
      pbVar13 = pbVar13 + 4;
      uVar8 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_0041a22a:
      uVar8 = 0;
    }
    else {
LAB_0041a1f6:
      bVar14 = *pbVar12 < *pbVar13;
      if ((*pbVar12 == *pbVar13) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
             ((uVar3 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])))
             ))))))))) goto LAB_0041a22a;
      uVar8 = -(uint)bVar14 | 1;
    }
    if (uVar8 == 0) {
      if (uVar7 < uVar9) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(uVar9 < uVar7);
      }
    }
    puVar6 = &uStack_38;
    if ((int)uVar8 < 0) {
      local_14 = (undefined1 *)&uStack_38;
      FUN_0041a6a0(this,param_1,'\0',(undefined4 *)local_24[2],pbVar12,param_4);
      ExceptionList = local_10;
      return param_1;
    }
    goto LAB_0041a5f1;
  }
  pbVar12 = (byte *)(param_2 + 4);
  if (0xf < (uint)param_2[9]) {
    pbVar12 = (byte *)param_2[4];
  }
  pbVar13 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar13 = *(byte **)param_3;
  }
  uVar9 = param_2[8];
  uVar7 = *(uint *)(param_3 + 0x10);
  if (uVar9 < *(uint *)(param_3 + 0x10)) {
    uVar7 = uVar9;
  }
  while (uVar8 = uVar7 - 4, 3 < uVar7) {
    if (*(int *)pbVar13 != *(int *)pbVar12) goto LAB_0041a126;
    pbVar13 = pbVar13 + 4;
    pbVar12 = pbVar12 + 4;
    uVar7 = uVar8;
  }
  if (uVar8 == 0xfffffffc) {
LAB_0041a15a:
    uVar7 = 0;
  }
  else {
LAB_0041a126:
    bVar14 = *pbVar13 < *pbVar12;
    if ((*pbVar13 == *pbVar12) &&
       ((uVar8 == 0xfffffffd ||
        ((bVar14 = pbVar13[1] < pbVar12[1], pbVar13[1] == pbVar12[1] &&
         ((uVar8 == 0xfffffffe ||
          ((bVar14 = pbVar13[2] < pbVar12[2], pbVar13[2] == pbVar12[2] &&
           ((uVar8 == 0xffffffff || (bVar14 = pbVar13[3] < pbVar12[3], pbVar13[3] == pbVar12[3])))))
          ))))))) goto LAB_0041a15a;
    uVar7 = -(uint)bVar14 | 1;
  }
  if (uVar7 == 0) {
    pbVar12 = param_3;
    if (*(uint *)(param_3 + 0x10) < uVar9) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)(uVar9 < *(uint *)(param_3 + 0x10));
    }
  }
  puVar6 = &uStack_38;
  if ((int)uVar7 < 0) {
    local_14 = (undefined1 *)&uStack_38;
    FUN_0041a6a0(this,param_1,'\x01',param_2,pbVar12,param_4);
    ExceptionList = local_10;
    return param_1;
  }
LAB_0041a5f1:
  local_14 = (undefined1 *)puVar6;
  local_8 = 0xffffffff;
  puVar11 = (undefined4 *)FUN_0041a8d0(local_18,&local_28,pbVar12,param_3,param_4);
  *param_1 = *puVar11;
  ExceptionList = local_10;
  return param_1;
}


void FUN_0041a640(void *param_1)

{
  FUN_005adb3f(param_1);
  return;
}


void __fastcall FUN_0041a660(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x40);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}


void FUN_0041a680(void *param_1)

{
  FUN_00419bc0((int *)((int)param_1 + 0x10));
  FUN_005adb3f(param_1);
  return;
}


void __thiscall
FUN_0041a6a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if (0x3fffffd < *(uint *)((int)this + 4)) {
    FUN_0041a680(param_5);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar7 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar8 = (int *)piVar7[1];
    piVar6 = piVar7 + 1;
    piVar9 = piVar8 + 1;
    iVar4 = *(int *)piVar8[1];
    if (piVar8 == (int *)iVar4) {
      iVar4 = ((int *)piVar8[1])[2];
      if (*(char *)(iVar4 + 0xc) != '\0') {
        piVar2 = (int *)piVar8[2];
        if (piVar7 == piVar2) {
          piVar8[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar8;
          }
          piVar2[1] = *piVar9;
          if (piVar8 == (int *)*(int *)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar2;
            *piVar2 = (int)piVar8;
            *piVar9 = (int)piVar2;
            piVar7 = piVar8;
            piVar8 = piVar2;
            piVar6 = piVar9;
          }
          else {
            piVar7 = (int *)*piVar9;
            if (piVar8 == (int *)*piVar7) {
              *piVar7 = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
            else {
              piVar7[2] = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
          }
        }
        *(undefined1 *)(piVar8 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
        piVar6 = *(int **)(*piVar6 + 4);
        piVar9 = (int *)*piVar6;
        *piVar6 = piVar9[2];
        if (*(char *)(piVar9[2] + 0xd) == '\0') {
          *(int **)(piVar9[2] + 4) = piVar6;
        }
        piVar9[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar9;
          piVar9[2] = (int)piVar6;
        }
        else {
          piVar8 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar8[2]) {
            piVar8[2] = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
          else {
            *piVar8 = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
        }
        goto LAB_0041a895;
      }
LAB_0041a7ec:
      *(undefined1 *)(piVar8 + 3) = 1;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (*(char *)(iVar4 + 0xc) == '\0') goto LAB_0041a7ec;
      piVar2 = (int *)*piVar8;
      piVar5 = piVar8;
      if (piVar7 == piVar2) {
        *piVar8 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar8;
        }
        piVar2[1] = *piVar9;
        if (piVar8 == (int *)*(int *)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar9;
          if (piVar8 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar8;
        *piVar9 = (int)piVar2;
        piVar5 = piVar2;
        piVar7 = piVar8;
        piVar6 = piVar9;
      }
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar6 = *(int **)(*piVar6 + 4);
      piVar9 = (int *)piVar6[2];
      piVar6[2] = *piVar9;
      if (*(char *)(*piVar9 + 0xd) == '\0') {
        *(int **)(*piVar9 + 4) = piVar6;
      }
      piVar9[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar9;
      }
      else {
        piVar8 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar8) {
          *piVar8 = (int)piVar9;
        }
        else {
          piVar8[2] = (int)piVar9;
        }
      }
      *piVar9 = (int)piVar6;
LAB_0041a895:
      piVar6[1] = (int)piVar9;
    }
    cVar1 = *(char *)(piVar7[1] + 0xc);
  } while( true );
}


void __thiscall
FUN_0041a8d0(void *this,undefined4 *param_1,undefined4 param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  byte local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_4;
  puStack_c = &LAB_005b0f50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar4 = 1;
  pbVar10 = *(byte **)this;
  local_20 = 1;
  pbVar9 = pbVar10;
  if ((*(byte **)(pbVar10 + 4))[0xd] == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    pbVar11 = *(byte **)(pbVar10 + 4);
    do {
      pbVar9 = pbVar11;
      pbVar11 = pbVar9 + 0x10;
      if (0xf < *(uint *)(pbVar9 + 0x24)) {
        pbVar11 = *(byte **)(pbVar9 + 0x10);
      }
      pbVar8 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar8 = *(byte **)param_3;
      }
      uVar7 = *(uint *)(pbVar9 + 0x20);
      uVar5 = uVar1;
      if (uVar7 < uVar1) {
        uVar5 = uVar7;
      }
      while (uVar2 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar8 != *(int *)pbVar11) goto LAB_0041a96d;
        pbVar8 = pbVar8 + 4;
        pbVar11 = pbVar11 + 4;
        uVar5 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_0041a9a1:
        uVar5 = 0;
      }
      else {
LAB_0041a96d:
        bVar12 = *pbVar8 < *pbVar11;
        if ((*pbVar8 == *pbVar11) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar12 = pbVar8[1] < pbVar11[1], pbVar8[1] == pbVar11[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar12 = pbVar8[2] < pbVar11[2], pbVar8[2] == pbVar11[2] &&
               ((uVar2 == 0xffffffff || (bVar12 = pbVar8[3] < pbVar11[3], pbVar8[3] == pbVar11[3])))
               ))))))))) goto LAB_0041a9a1;
        uVar5 = -(uint)bVar12 | 1;
      }
      if (uVar5 == 0) {
        if (uVar1 < uVar7) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar7 < uVar1);
        }
      }
      local_20 = (byte)(uVar5 >> 0x18);
      bVar4 = local_20 >> 7;
      local_20 = local_20 >> 7;
      if ((int)uVar5 < 0) {
        pbVar11 = *(byte **)pbVar9;
      }
      else {
        pbVar11 = *(byte **)(pbVar9 + 8);
      }
    } while (pbVar11[0xd] == 0);
  }
  pbVar11 = pbVar9;
  if (bVar4 != 0) {
    if (pbVar9 == *(byte **)pbVar10) {
      local_20 = 1;
      pbVar10 = pbVar9;
      goto LAB_0041a9f5;
    }
    if (pbVar9[0xd] == 0) {
      pbVar11 = *(byte **)pbVar9;
      if (pbVar11[0xd] == 0) {
        bVar4 = (*(byte **)(pbVar11 + 8))[0xd];
        pbVar10 = *(byte **)(pbVar11 + 8);
        while (bVar4 == 0) {
          bVar4 = (*(byte **)(pbVar10 + 8))[0xd];
          pbVar11 = pbVar10;
          pbVar10 = *(byte **)(pbVar10 + 8);
        }
      }
      else {
        bVar4 = (*(byte **)(pbVar9 + 4))[0xd];
        pbVar10 = *(byte **)(pbVar9 + 4);
        pbVar11 = pbVar9;
        while ((pbVar8 = pbVar10, bVar4 == 0 && (pbVar11 == *(byte **)pbVar8))) {
          bVar4 = (*(byte **)(pbVar8 + 4))[0xd];
          pbVar10 = *(byte **)(pbVar8 + 4);
          pbVar11 = pbVar8;
        }
        if (pbVar11[0xd] == 0) {
          pbVar11 = pbVar8;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(pbVar9 + 8);
    }
  }
  pbVar8 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar8 = *(byte **)param_3;
  }
  pbVar10 = pbVar11 + 0x10;
  if (0xf < *(uint *)(pbVar11 + 0x24)) {
    pbVar10 = *(byte **)(pbVar11 + 0x10);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar7 = *(uint *)(pbVar11 + 0x20);
  if (uVar1 < *(uint *)(pbVar11 + 0x20)) {
    uVar7 = uVar1;
  }
  while (uVar5 = uVar7 - 4, 3 < uVar7) {
    if (*(int *)pbVar10 != *(int *)pbVar8) goto LAB_0041aaba;
    pbVar10 = pbVar10 + 4;
    pbVar8 = pbVar8 + 4;
    uVar7 = uVar5;
  }
  if (uVar5 == 0xfffffffc) {
LAB_0041aaee:
    uVar7 = 0;
  }
  else {
LAB_0041aaba:
    bVar12 = *pbVar10 < *pbVar8;
    if ((*pbVar10 == *pbVar8) &&
       ((uVar5 == 0xfffffffd ||
        ((bVar12 = pbVar10[1] < pbVar8[1], pbVar10[1] == pbVar8[1] &&
         ((uVar5 == 0xfffffffe ||
          ((bVar12 = pbVar10[2] < pbVar8[2], pbVar10[2] == pbVar8[2] &&
           ((uVar5 == 0xffffffff || (bVar12 = pbVar10[3] < pbVar8[3], pbVar10[3] == pbVar8[3])))))))
         ))))) goto LAB_0041aaee;
    uVar7 = -(uint)bVar12 | 1;
  }
  if (uVar7 == 0) {
    if (*(uint *)(pbVar11 + 0x20) < uVar1) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)(uVar1 < *(uint *)(pbVar11 + 0x20));
    }
  }
  if (-1 < (int)uVar7) {
    FUN_00419bc0(param_4 + 4);
    FUN_005adb3f(piVar3);
    *param_1 = pbVar11;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_0041a9f5:
  puVar6 = (undefined4 *)FUN_0041a6a0(this,&param_3,local_20,(undefined4 *)pbVar9,pbVar10,param_4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall FUN_0041ab70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)this + 8) = 0xffff;
  *(undefined4 *)this = DAT_006558d0;
  *(undefined4 *)((int)this + 4) = DAT_006558d4;
  *(undefined2 *)((int)this + 8) = DAT_006558d8;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x10) = 2;
  *(undefined4 *)((int)this + 0x20) = 0xffff0000;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 2);
  uVar3 = uRam006556a4;
  uVar2 = uRam006556a0;
  uVar1 = uRam0065569c;
  *(undefined4 *)((int)this + 0x10) = _DAT_00655698;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined2 *)((int)this + 0x22) = DAT_006556aa;
  *(undefined2 *)((int)this + 0x20) = DAT_006556a8;
  return this;
}


void __fastcall FUN_0041abf0(int param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0f82;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00591070("MULTI","NetworkClient() initialising.");
    puVar1 = (undefined4 *)FUN_005adb0f(0x5e0);
    local_8 = 0;
    memset(puVar1,0,0x5e0);
    puVar1 = FUN_0059d8e0(puVar1);
    *(undefined4 **)(param_1 + 0x30) = puVar1;
  }
  ExceptionList = local_10;
  return;
}


undefined1 FUN_0041ac80(void *param_1)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  int in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_00000030;
  
  pcVar1 = (char *)&stack0x0000001c;
  if (0xf < in_stack_00000030) {
    pcVar1 = in_stack_0000001c;
  }
  iVar2 = atoi(pcVar1);
  if ((in_stack_00000014 == 0) || (iVar2 < 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (0xf < in_stack_00000018) {
    pvVar3 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar3 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3))) goto LAB_0041ad11;
    }
    FUN_005adb3f(pvVar3);
  }
  if (0xf < in_stack_00000030) {
    pcVar1 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      pcVar1 = *(char **)(in_stack_0000001c + -4);
      if ((char *)0x1f < in_stack_0000001c + (-4 - (int)pcVar1)) {
LAB_0041ad11:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pcVar1);
  }
  return uVar4;
}


void __fastcall FUN_0041ad30(void *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint in_stack_ffffff9c;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *in_stack_ffffffd0;
  
  if (*(int *)((int)param_1 + 0x30) == 0) {
    FUN_0041abf0((int)param_1);
  }
  FUN_00402690((void *)(DAT_0065b5cc + 0x25c),&PTR_005ce008,0);
  puVar6 = &stack0xffffffd0;
  *(undefined4 *)(DAT_0065b5cc + 0x274) = 0xffffffff;
  *(undefined2 *)(DAT_0065b444 + 0x71) = 1;
  FUN_00591e00(&stack0xffffffd0,"Attempting to connect to server %s:%d...");
  FUN_0041c350(param_1,in_stack_ffffffd0);
  if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
    FUN_005adb3f(*(void **)((int)param_1 + 0x34));
  }
  puVar1 = (undefined2 *)FUN_005adb0f(0x34);
  *(undefined1 *)(puVar1 + 0x16) = 1;
  *(undefined4 *)(puVar1 + 0x11) = 2;
  *puVar1 = 0xa609;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined2 **)((int)param_1 + 0x34) = puVar1;
  uVar2 = (**(code **)(**(int **)((int)param_1 + 0x30) + 4))();
  switch(uVar2) {
  case 0:
    FUN_00591070("MULTI","CLIENT: using port %d");
    goto switchD_0041adf9_caseD_2;
  case 1:
    uVar5 = 0x1d;
    pcVar4 = "Error: RAKNET_ALREADY_STARTED";
    break;
  default:
    goto switchD_0041adf9_caseD_2;
  case 3:
    uVar5 = 0x1e;
    pcVar4 = "Error: INVALID_MAX_CONNECTIONS";
    break;
  case 4:
    uVar5 = 0x22;
    pcVar4 = "Error: SOCKET_FAMILY_NOT_SUPPORTED";
    break;
  case 5:
    uVar5 = 0x21;
    pcVar4 = "Error: SOCKET_PORT_ALREADY_IN_USE";
    break;
  case 6:
    uVar5 = 0x1c;
    pcVar4 = "Error: SOCKET_FAILED_TO_BIND";
    break;
  case 7:
    uVar5 = 0x1e;
    pcVar4 = "Error: SOCKET_FAILED_TEST_SEND";
    break;
  case 8:
    uVar5 = 0x1a;
    pcVar4 = "Error: PORT_CANNOT_BE_ZERO";
    break;
  case 9:
    uVar5 = 0x26;
    pcVar4 = "Error: FAILED_TO_CREATE_NETWORK_THREAD";
    break;
  case 10:
    uVar5 = 0x1e;
    pcVar4 = "Error: COULD_NOT_GENERATE_GUID";
    break;
  case 0xb:
    uVar5 = 0x1c;
    pcVar4 = "Error: STARTUP_OTHER_FAILURE";
  }
  pvVar3 = (void *)((uint)puVar6 & 0xffffff00);
  FUN_00402690(&stack0xffffffc0,pcVar4,uVar5);
  FUN_0041c350(param_1,pvVar3);
switchD_0041adf9_caseD_2:
  uVar2 = (**(code **)(**(int **)((int)param_1 + 0x30) + 0x30))();
  switch(uVar2) {
  case 0:
    FUN_00591070("MULTI","Connecting to %s:%d...");
    *(undefined4 *)((int)param_1 + 0x20) = 1;
    *(undefined1 *)((int)param_1 + 0x1c) = 0;
    return;
  case 1:
    uVar5 = 0x18;
    pcVar4 = "Error: INVALID_PARAMETER";
    break;
  case 2:
    uVar5 = 0x21;
    pcVar4 = "Error: CANNOT_RESOLVE_DOMAIN_NAME";
    break;
  case 3:
    uVar5 = 0x24;
    pcVar4 = "Error: ALREADY_CONNECTED_TO_ENDPOINT";
    break;
  case 4:
    uVar5 = 0x2d;
    pcVar4 = "Error: CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS";
    break;
  case 5:
    uVar5 = 0x25;
    pcVar4 = "Error: SECURITY_INITIALIZATION_FAILED";
    break;
  default:
    goto switchD_0041aee3_default;
  }
  pvVar3 = (void *)(in_stack_ffffff9c & 0xffffff00);
  FUN_00402690(&stack0xffffff9c,pcVar4,uVar5);
  FUN_0041c350(param_1,pvVar3);
switchD_0041aee3_default:
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  return;
}


void __fastcall FUN_0041afd0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x38))(3,0,3);
    iVar1 = DAT_0065b444;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x71) = 0x100;
    FUN_00591070("MULTI","Disconnected from server.");
  }
  return;
}


void __fastcall FUN_0041b010(void *param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  undefined **ppuVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_dc [40];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  void *in_stack_ffffff68;
  void *in_stack_ffffff7c;
  char *in_stack_ffffff80;
  uint3 uVar18;
  int iVar19;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_3b;
  undefined1 local_34;
  undefined4 local_33;
  Layer *local_2c;
  void *local_28;
  undefined1 *local_24;
  void *local_20;
  int *local_1c;
  void *local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0ff3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)((int)param_1 + 0x30) != (int *)0x0) {
    local_11 = '\0';
    local_18 = param_1;
    DAT_0065c41c = (**(code **)(**(int **)((int)param_1 + 0x30) + 0x5c))();
    while (DAT_0065c41c != 0) {
      if (DAT_0065c41c == 0) {
        bVar3 = 0xff;
      }
      else {
        bVar3 = **(byte **)(DAT_0065c41c + 0x30);
      }
      DAT_0065c418 = (uint)bVar3;
      if (DAT_0065b3d3 != '\0') {
        FUN_00591070("NETWORK","Client received packet, identifier %d size %d.");
      }
      uVar18 = (uint3)((uint)in_stack_ffffff80 >> 8);
      switch(DAT_0065c418) {
      case 10:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY",0x2b);
        in_stack_ffffff7c = (void *)0x41b24d;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY");
        break;
      case 0xb:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_OUR_SYSTEM_REQUIRES_SECURITY",0x26);
        in_stack_ffffff7c = (void *)0x41b294;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_OUR_SYSTEM_REQUIRES_SECURITY");
        break;
      case 0xc:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_PUBLIC_KEY_MISMATCH",0x1d);
        in_stack_ffffff7c = (void *)0x41b2db;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_PUBLIC_KEY_MISMATCH");
        break;
      default:
        if (DAT_0065b3d3 != '\0') {
          pcVar10 = "Received an unknown packet: %d";
LAB_0041c176:
          FUN_00591070("NETWORK",pcVar10);
        }
        break;
      case 0x10:
        pvVar6 = (void *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Connected to server.",0x14);
        FUN_0041c350(param_1,pvVar6);
        *(undefined4 *)((int)param_1 + 0x20) = 2;
        FUN_00591070("MULTI","Connected to server.");
        local_1c = (int *)&stack0xffffff80;
        in_stack_ffffff7c = (void *)0x0;
        in_stack_ffffff80 = (char *)((uint)pvVar6 & 0xffffff00);
        FUN_00402690(&stack0xffffff80,&DAT_005e4690,4);
        local_24 = &stack0xffffff68;
        local_8 = 0;
        uStack_a0 = 0x41b144;
        FUN_004024e0(&stack0xffffff68,&DAT_006557b0);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004122b0();
        local_8 = 0xffffffff;
        FUN_0041c4e0(in_stack_ffffff68);
        FUN_004122b0();
        local_34 = 0x86;
        local_33 = 0;
        iVar16 = FUN_00402370();
        piVar11 = *(int **)(iVar16 + 0x30);
        uStack_a0 = 0x41b184;
        FUN_0041ab70(&stack0xffffff68,(undefined4 *)&DAT_00655688);
        uStack_a0 = 3;
        uStack_a4 = 1;
        uStack_a8 = 5;
        puStack_ac = &local_34;
        uStack_b0 = 0x41b197;
        (**(code **)(*piVar11 + 0x50))();
        uStack_b0 = 0x41b19c;
        FUN_004122b0();
        local_3c = 0x86;
        local_3b = 1;
        uStack_b0 = 0x41b1ac;
        iVar16 = FUN_00402370();
        uStack_b0 = 0;
        uStack_b4 = 1;
        piVar11 = *(int **)(iVar16 + 0x30);
        FUN_0041ab70(auStack_dc,(undefined4 *)&DAT_00655688);
        (**(code **)(*piVar11 + 0x50))(&local_3c,5,1,3,0);
        param_1 = local_18;
        break;
      case 0x11:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_CONNECTION_ATTEMPT_FAILED",0x23);
        in_stack_ffffff7c = (void *)0x41b206;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_CONNECTION_ATTEMPT_FAILED");
        break;
      case 0x12:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_ALREADY_CONNECTED",0x1b);
        in_stack_ffffff7c = (void *)0x41b322;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_ALREADY_CONNECTED");
        break;
      case 0x14:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_NO_FREE_INCOMING_CONNECTIONS",0x26);
        in_stack_ffffff7c = (void *)0x41b369;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_NO_FREE_INCOMING_CONNECTIONS");
        break;
      case 0x17:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_CONNECTION_BANNED",0x1b);
        in_stack_ffffff7c = (void *)0x41b3b0;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_CONNECTION_BANNED");
        break;
      case 0x18:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_INVALID_PASSWORD",0x1a);
        in_stack_ffffff7c = (void *)0x41b3f7;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_INVALID_PASSWORD");
        break;
      case 0x19:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_INCOMPATIBLE_PROTOCOL_VERSION",0x27);
        in_stack_ffffff7c = (void *)0x41b43e;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_INCOMPATIBLE_PROTOCOL_VERSION");
        break;
      case 0x1a:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Error: ID_IP_RECENTLY_CONNECTED",0x1f);
        in_stack_ffffff7c = (void *)0x41b485;
        FUN_0041c350(param_1,in_stack_ffffff80);
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        FUN_00591070("ERROR","ID_IP_RECENTLY_CONNECTED");
        break;
      case 0x88:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_ADD_SHIP");
        }
        FUN_004122b0();
        in_stack_ffffff80 = (char *)0x41b533;
        FUN_00420110();
        break;
      case 0x89:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_INITIAL_SYNC_DONE - setting live.");
        }
        FUN_004122b0();
        local_12 = 0x8a;
        iVar16 = FUN_00402370();
        piVar11 = *(int **)(iVar16 + 0x30);
        uStack_a0 = 0x41b60a;
        FUN_0041ab70(&stack0xffffff68,(undefined4 *)&DAT_00655688);
        uStack_a0 = 3;
        uStack_a4 = 1;
        uStack_a8 = 1;
        puStack_ac = &local_12;
        uStack_b0 = 0x41b61d;
        (**(code **)(*piVar11 + 0x50))();
        param_1 = local_18;
        break;
      case 0x8b:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_SCENARIO");
        }
        FUN_004122b0();
        FUN_0041dba0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x8c:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_SCENARIOSTATE");
        }
        FUN_004122b0();
        FUN_0041df90(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x8d:
        in_stack_ffffff80 = (char *)((uint)uVar18 << 8);
        FUN_00402690(&stack0xffffff80,"Beginning game...",0x11);
        in_stack_ffffff7c = (void *)0x41b4cc;
        FUN_0041c350(param_1,in_stack_ffffff80);
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received ID_START_GAME. Initialising client.");
        }
        puVar12 = DAT_0065b444;
        *(undefined1 *)((int)DAT_0065b444 + 0x1c6) = 1;
        *puVar12 = 1;
        break;
      case 0x8e:
        FUN_004122b0();
        FUN_004204e0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x8f:
        FUN_004122b0();
        if (DAT_0065b3d3 != '\0') {
          pcVar10 = "Unknown string sync identifier: %d";
          goto LAB_0041c176;
        }
        break;
      case 0x91:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_MODULE");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","RECEIVED SET MODULE REQUEST");
        }
        if (*(char *)(iVar16 + 9) == '\0') {
          pcVar10 = (char *)(iVar16 + 10);
          local_1c = (int *)(iVar16 + 0xb);
          in_stack_ffffff80 = (char *)((uint)in_stack_ffffff80 & 0xffffff00);
          do {
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          FUN_00402690(&stack0xffffff80,(void *)(iVar16 + 10),(int)pcVar10 - (int)local_1c);
          in_stack_ffffff7c = *(void **)(iVar16 + 5);
          FUN_00521b80(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),(int)in_stack_ffffff7c,
                       in_stack_ffffff80);
        }
        else {
          uVar7 = 0;
          local_1c = *(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
          piVar11 = (int *)local_1c[0xf];
          uVar14 = local_1c[0x10] - (int)piVar11 >> 2;
          param_1 = local_18;
          if (uVar14 != 0) {
            do {
              if (*(int *)(*piVar11 + 0x10) == *(int *)(iVar16 + 5)) {
                FUN_00522090(local_1c,*(undefined1 **)(local_1c[0xf] + uVar7 * 4));
                param_1 = local_18;
                break;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 1;
            } while (uVar7 < uVar14);
          }
        }
        break;
      case 0x92:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_MODULE_BASIC");
        }
        FUN_004122b0();
        FUN_0041e220(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x93:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_MODULE_DETAILS");
        }
        FUN_004122b0();
        FUN_0041e2e0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x94:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SENSORDATA_UPDATEBASIC");
        }
        piVar11 = *(int **)(DAT_0065c41c + 0x30);
        local_1c = piVar11;
        FUN_004122b0();
        if (*(int *)((int)piVar11 + 1) == -1) {
LAB_0041b7d9:
          local_28 = (void *)FUN_005adb0f(0x138);
          local_8 = 2;
          local_1c = FUN_00508c00(local_28,*(undefined4 *)((int)piVar11 + 5),
                                  *(undefined4 *)((int)piVar11 + 1));
          local_8 = 0xffffffff;
          iVar16 = *(int *)(DAT_0065b5cc + 0xd0);
          puVar12 = *(undefined4 **)(iVar16 + 0x218);
          if (*(undefined4 **)(iVar16 + 0x21c) == puVar12) {
            FUN_00414080((void *)(iVar16 + 0x214),puVar12,&local_1c);
          }
          else {
            *puVar12 = local_1c;
            *(int *)(iVar16 + 0x218) = *(int *)(iVar16 + 0x218) + 4;
          }
          piVar13 = local_1c;
          if (DAT_0065b3d3 != '\0') {
            FUN_00591070("NETWORK","Making new sensordata object: %d");
          }
        }
        else {
          iVar16 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x214);
          uVar7 = 0;
          uVar14 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x218) - iVar16 >> 2;
          if (uVar14 != 0) {
            do {
              piVar13 = *(int **)(iVar16 + uVar7 * 4);
              if (*piVar13 == *(int *)((int)piVar11 + 1)) goto LAB_0041b7ce;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar14);
          }
          piVar13 = (int *)0x0;
LAB_0041b7ce:
          piVar11 = local_1c;
          if (piVar13 == (int *)0x0) goto LAB_0041b7d9;
        }
        bVar17 = DAT_0065b3d3 != '\0';
        *(undefined8 *)(piVar13 + 4) = *(undefined8 *)((int)piVar11 + 9);
        *(undefined8 *)(piVar13 + 6) = *(undefined8 *)((int)piVar11 + 0x11);
        piVar13[0xc] = *(int *)((int)piVar11 + 0x1d);
        piVar13[0xd] = *(int *)((int)piVar11 + 0x21);
        piVar13[0xe] = *(int *)((int)piVar11 + 0x25);
        piVar13[0xf] = *(int *)((int)piVar11 + 0x29);
        piVar13[0x10] = *(int *)((int)piVar11 + 0x2d);
        piVar13[0x46] = *(int *)((int)piVar11 + 0x19);
        piVar13[0x45] = *(int *)((int)piVar11 + 0x35);
        piVar13[0x41] = *(int *)((int)piVar11 + 0x39);
        piVar13[0x42] = *(int *)((int)piVar11 + 0x3d);
        piVar13[0x4a] = *(int *)((int)piVar11 + 0x31);
        *(undefined1 *)(piVar13 + 2) = 1;
        param_1 = local_18;
        if ((bVar17) &&
           (FUN_00591070("NETWORK","Unpacked Basic: %d/ %s"), param_1 = local_18,
           DAT_0065b3d3 != '\0')) {
          FUN_00591070("NETWORK","ship type = %d");
          param_1 = local_18;
        }
        break;
      case 0x95:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SENSORDATA_UPDATEADVANCED");
        }
        FUN_004122b0();
        FUN_0041e940(*(undefined4 **)(DAT_0065c41c + 0x30));
        break;
      case 0x96:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SENSORDATA_WAVEFORM");
        }
        FUN_004122b0();
        FUN_0041ebc0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x97:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SENSORDATA_REMOVE");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        iVar16 = *(int *)(iVar16 + 1);
        local_1c = *(int **)(DAT_0065b5cc + 0xd0);
        if (iVar16 != -1) {
          uVar7 = 0;
          puVar12 = (undefined4 *)local_1c[0x85];
          uVar14 = local_1c[0x86] - (int)puVar12 >> 2;
          if (uVar14 != 0) {
            do {
              if (*(int *)*puVar12 == iVar16) {
                FUN_0050c960(local_1c,*(int *)(local_1c[0x85] + uVar7 * 4));
                param_1 = local_18;
                goto LAB_0041c183;
              }
              uVar7 = uVar7 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar7 < uVar14);
          }
        }
        FUN_0050c960(local_1c,0);
        param_1 = local_18;
        break;
      case 0x98:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_STATUS_MESSAGE");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        local_20 = (void *)FUN_005adb0f(0x34);
        local_8 = 3;
        pcVar10 = (char *)(iVar16 + 0x19);
        in_stack_ffffff7c = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
        pcVar8 = pcVar10;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_00402690(&stack0xffffff7c,pcVar10,(int)pcVar8 - (iVar16 + 0x1a));
        local_1c = FUN_0041c410(local_20,in_stack_ffffff7c);
        local_8 = 0xffffffff;
        iVar16 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
        if (0 < local_1c[0xc]) {
          puVar12 = *(undefined4 **)(iVar16 + 8);
          if (*(undefined4 **)(iVar16 + 0xc) == puVar12) {
            FUN_00414080((void *)(iVar16 + 4),puVar12,&local_1c);
          }
          else {
            *puVar12 = local_1c;
            *(int *)(iVar16 + 8) = *(int *)(iVar16 + 8) + 4;
          }
        }
        if (local_1c[0xc] == 4) {
          piVar11 = *(int **)(iVar16 + 0x50);
          if (*(int **)(iVar16 + 0x54) == piVar11) {
            FUN_00403840((void *)(iVar16 + 0x4c),piVar11,local_1c + 6);
          }
          else {
            FUN_004024e0(piVar11,local_1c + 6);
            *(int *)(iVar16 + 0x50) = *(int *)(iVar16 + 0x50) + 0x18;
          }
        }
        param_1 = local_18;
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received log message: \'%s\'");
          param_1 = local_18;
        }
        break;
      case 0x99:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SOUND");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Playing sound: %s");
        }
        iVar4 = DAT_0065b3d4;
        if (DAT_0065b3d4 == 0) {
          iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
        }
        iVar19 = *(int *)(iVar16 + 5);
        iVar16 = *(int *)(iVar16 + 1);
        pvVar6 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar6,iVar4,iVar16,iVar19);
        param_1 = local_18;
        break;
      case 0x9a:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_PRESENTATION_COMMAND");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        param_1 = local_18;
        if (*(int *)(iVar16 + 1) == 0) {
          if (DAT_0065b3d3 != '\0') {
            in_stack_ffffff80 = "NETWORK";
            FUN_00591070("NETWORK","Received SET_SHAKE presentation request - %f, %f");
          }
          local_24 = &stack0xffffff80;
          FUN_004024e0(&stack0xffffff80,(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x238));
          local_8 = 4;
          if (DAT_0065c25c == (Layer *)0x0) {
            local_2c = (Layer *)FUN_005adb0f(0x418);
            local_8 = CONCAT31(local_8._1_3_,5);
            DAT_0065c25c = FUN_0052b7a0(local_2c);
          }
          local_8 = 0xffffffff;
          in_stack_ffffff7c = (void *)0x41bc4c;
          FUN_00531140(DAT_0065c25c,(byte *)in_stack_ffffff80);
          param_1 = local_18;
        }
        break;
      case 0x9b:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_WEAPON_COMMAND");
        }
        FUN_004122b0();
        FUN_0041fae0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x9c:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_WEAPON_DATA");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        local_1c = *(int **)(DAT_0065b5cc + 0xd0);
        if ((*(int *)(local_1c[0x10] + 0x20) == 0) ||
           (iVar4 = *(int *)(*(int *)(local_1c[0x10] + 0x20) + 0x3c + *(int *)(iVar16 + 1) * 4),
           iVar4 == 0)) {
          FUN_00591070("ERROR","trying to update a weapon which the client doesn\'t know about.");
          param_1 = local_18;
        }
        else {
          ppuVar9 = &PTR_005ce008;
          pbVar5 = (byte *)(iVar16 + 0xd);
          do {
            bVar3 = *pbVar5;
            bVar17 = bVar3 < *(byte *)ppuVar9;
            if (bVar3 != *(byte *)ppuVar9) {
LAB_0041bcf7:
              uVar7 = -(uint)bVar17 | 1;
              goto LAB_0041bcfc;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar5[1];
            bVar17 = bVar3 < *(byte *)((int)ppuVar9 + 1);
            if (bVar3 != *(byte *)((int)ppuVar9 + 1)) goto LAB_0041bcf7;
            pbVar5 = pbVar5 + 2;
            ppuVar9 = (undefined **)((int)ppuVar9 + 2);
          } while (bVar3 != 0);
          uVar7 = 0;
LAB_0041bcfc:
          if (uVar7 == 0) {
            FUN_0050f370(local_1c,iVar4);
            param_1 = local_18;
          }
          else {
            *(undefined4 *)(iVar4 + 0x3d0) = *(undefined4 *)(iVar16 + 0x3f);
            *(undefined4 *)(iVar4 + 0x3b8) = *(undefined4 *)(iVar16 + 0x43);
            *(undefined1 *)(iVar4 + 0x3bc) = *(undefined1 *)(iVar16 + 0x47);
            *(undefined4 *)(iVar4 + 0x3c0) = *(undefined4 *)(iVar16 + 0x48);
            *(undefined1 *)(iVar4 + 0x3c4) = *(undefined1 *)(iVar16 + 0x4c);
            *(undefined1 *)(iVar4 + 0x3c5) = *(undefined1 *)(iVar16 + 0x4d);
            *(undefined1 *)(iVar4 + 0x3fc) = *(undefined1 *)(iVar16 + 0x4e);
            *(undefined4 *)(iVar4 + 0x418) = *(undefined4 *)(iVar16 + 0x53);
            local_1c = (int *)(iVar16 + 0x18);
            pcVar10 = (char *)(iVar16 + 0x17);
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            FUN_00402690((void *)(iVar4 + 0x400),(char *)(iVar16 + 0x17),
                         (int)pcVar10 - (int)local_1c);
            *(undefined4 *)(iVar4 + 0x41c) = *(undefined4 *)(iVar16 + 0x4f);
            *(undefined4 *)(iVar4 + 0x420) = *(undefined4 *)(iVar16 + 0x57);
            pcVar10 = (char *)(iVar16 + 0x35);
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            FUN_00402690((void *)(iVar4 + 0x3a0),(char *)(iVar16 + 0x35),
                         (int)pcVar10 - (iVar16 + 0x36));
            param_1 = local_18;
          }
        }
        break;
      case 0x9d:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_COMPONENT");
        }
        FUN_004122b0();
        FUN_0041e4c0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x9e:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_ADDON");
        }
        FUN_004122b0();
        FUN_0041e700(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0x9f:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_CARGO_COMPONENTS");
        }
        FUN_004122b0();
        FUN_0041e0d0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0xa0:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_HULL_STATE");
        }
        FUN_004122b0();
        FUN_0041fbf0(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0xa1:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_SERVER_INFO_BASIC");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        local_24 = &stack0xffffff80;
        in_stack_ffffff68 = (void *)0x41bec1;
        FUN_00591e00(&stack0xffffff80,"Server: %s (%d/%d)");
        local_8 = 6;
        pvVar6 = (void *)FUN_00402370();
        local_8 = 0xffffffff;
        in_stack_ffffff7c = (void *)0x41bede;
        FUN_0041c350(pvVar6,in_stack_ffffff80);
        pcVar10 = (char *)(iVar16 + 1);
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_00402690((void *)(DAT_0065b5cc + 0x208),(char *)(iVar16 + 1),(int)pcVar10 - (iVar16 + 2)
                    );
        iVar4 = DAT_0065b5cc;
        pcVar10 = (char *)(iVar16 + 0x21);
        *(undefined4 *)(DAT_0065b5cc + 0x238) = *(undefined4 *)(iVar16 + 0x15);
        *(undefined4 *)(iVar4 + 0x23c) = *(undefined4 *)(iVar16 + 0x19);
        local_1c = (int *)(iVar16 + 0x22);
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_00402690((void *)(iVar4 + 0x220),(void *)(iVar16 + 0x21),(int)pcVar10 - (int)local_1c);
        iVar4 = DAT_0065b5cc;
        bVar17 = DAT_0065b3d3 != '\0';
        *(undefined4 *)(DAT_0065b5cc + 0x240) = *(undefined4 *)(iVar16 + 0x1d);
        if (bVar17) {
          in_stack_ffffff80 = "NETWORK";
          in_stack_ffffff7c = (void *)0x41bf6b;
          FUN_00591070("NETWORK","Server info: \'`7%s`$\' `7%d`$/`7%d`$ users, difficulty %d");
          iVar4 = DAT_0065b5cc;
        }
        pbVar5 = (byte *)(iVar4 + 0x220);
        if (0xf < *(uint *)(iVar4 + 0x234)) {
          pbVar5 = *(byte **)(iVar4 + 0x220);
        }
        uVar7 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0x230),(byte *)"1.0.8",5);
        param_1 = local_18;
        if ((char)uVar7 == '\0') {
          FUN_00591070("MULTI","Server/client version mismatch.");
          local_11 = '\x01';
          param_1 = local_18;
        }
        break;
      case 0xa2:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_SERVER_INFO_ADVANCED");
        }
        FUN_004122b0();
        FUN_0041fc50(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0xa3:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SEND_MESSAGE");
        }
        FUN_004122b0();
        FUN_0041f690(*(int *)(DAT_0065c41c + 0x30));
        break;
      case 0xa7:
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","Received: ID_SET_WAYPOINTS");
        }
        iVar16 = *(int *)(DAT_0065c41c + 0x30);
        FUN_004122b0();
        if (DAT_0065b3d3 != '\0') {
          FUN_00591070("NETWORK","RECEIVED SHIP SET WAYPOINTS");
        }
        pfVar15 = (float *)(iVar16 + 1);
        iVar16 = 0x14;
        *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1c8) =
             *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1c4);
        do {
          fVar1 = *pfVar15;
          if (fVar1 != -9999.0) {
            local_50 = pfVar15[0x14];
            local_5c = 0;
            local_58 = 0;
            iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
            puVar12 = *(undefined4 **)(iVar4 + 0x1c8);
            local_4c = 0xbf800000;
            local_48 = 0;
            local_44 = 0;
            local_54 = fVar1;
            if (*(undefined4 **)(iVar4 + 0x1cc) == puVar12) {
              FUN_00420fb0((void *)(iVar4 + 0x1c4),puVar12,&local_5c);
            }
            else {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = fVar1;
              puVar12[3] = local_50;
              puVar12[4] = 0xbf800000;
              puVar12[5] = 0;
              *(undefined1 *)(puVar12 + 6) = 0;
              puVar12[7] = local_40;
              *(int *)(iVar4 + 0x1c8) = *(int *)(iVar4 + 0x1c8) + 0x20;
            }
            if (DAT_0065b3d3 != '\0') {
              in_stack_ffffff80 = "NETWORK";
              in_stack_ffffff7c = (void *)0x41c158;
              FUN_00591070("NETWORK","added waypoint: %f, %f");
            }
          }
          pfVar15 = pfVar15 + 1;
          iVar16 = iVar16 + -1;
          param_1 = local_18;
        } while (iVar16 != 0);
      }
LAB_0041c183:
      (**(code **)(**(int **)((int)param_1 + 0x30) + 0x60))();
      DAT_0065c41c = (**(code **)(**(int **)((int)param_1 + 0x30) + 0x5c))();
    }
    (**(code **)(**(int **)((int)param_1 + 0x30) + 0x60))();
    if (local_11 != '\0') {
      if (*(int **)((int)param_1 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0x30) + 0x38))();
        puVar12 = DAT_0065b444;
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        *(undefined2 *)((int)puVar12 + 0x71) = 0x100;
        FUN_00591070("MULTI","Disconnected from server.");
      }
      DAT_0065b444[0x51] = 0;
    }
  }
  ExceptionList = local_10;
  return;
}
