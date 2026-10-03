#include "../ois_server.exe.h"


void __fastcall FUN_004c44a0(FILE *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  byte *in_stack_ffffff6c;
  int local_70;
  int local_68;
  int local_64;
  uint local_60;
  FILE *local_5c;
  int local_58;
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
  puStack_18 = &LAB_005bd478;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_68 = 0;
  local_5c = param_1;
  fread(&local_68,4,1,param_1);
  local_70 = 0;
  if (0 < local_68) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar2 = (void **)FUN_004b88b0((undefined1 *)local_54,param_1);
      if (&local_3c != ppvVar2) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar2;
        pvStack_38 = ppvVar2[1];
        pvStack_34 = ppvVar2[2];
        pvStack_30 = ppvVar2[3];
        local_2c = ppvVar2[4];
        pvStack_28 = ppvVar2[5];
        ppvVar2[4] = (void *)0x0;
        ppvVar2[5] = (void *)0xf;
        *(undefined1 *)ppvVar2 = 0;
      }
      if (0xf < local_40) {
        pvVar6 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar6 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6)))) goto LAB_004c485f;
        FUN_005adb3f(pvVar6);
      }
      FUN_004024e0(&stack0xffffff6c,&local_3c);
      iVar3 = FUN_004a7100(in_stack_ffffff6c);
      FUN_00591070("SAVEHANDLER","...loading trade data for platform %s");
      if (iVar3 == 0) {
        FUN_00591070("ERROR","ERROR: No valid space station with this rego.");
        if ((void *)0xf < pvStack_28) {
          pvVar6 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar6 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6)))) {
LAB_004c485f:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
        goto LAB_004c4884;
      }
      local_64 = *(int *)(iVar3 + 0x398);
      uVar9 = 0;
      puVar7 = *(undefined4 **)(local_64 + 0x94);
      uVar5 = (uint)((int)*(undefined4 **)(local_64 + 0x98) + (3 - (int)puVar7)) >> 2;
      if (*(undefined4 **)(local_64 + 0x98) < puVar7) {
        uVar5 = 0;
      }
      local_60 = uVar5;
      if (uVar5 != 0) {
        do {
          if ((int *)*puVar7 != (int *)0x0) {
            FUN_0040fae0((int *)*puVar7);
            uVar5 = local_60;
          }
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 != uVar5);
      }
      *(undefined4 *)(local_64 + 0x98) = *(undefined4 *)(local_64 + 0x94);
      local_58 = 0;
      fread(&local_58,4,1,local_5c);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          local_64 = FUN_004c2230(local_5c);
          iVar4 = *(int *)(iVar3 + 0x398);
          piVar1 = *(int **)(iVar4 + 0x98);
          if (*(int **)(iVar4 + 0x9c) == piVar1) {
            FUN_004141e0((void *)(iVar4 + 0x94),piVar1,&local_64);
          }
          else {
            *piVar1 = local_64;
            *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + 4;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d contracts for platform");
      FUN_0049cfc0(*(void **)(iVar3 + 0x398),'\0');
      fread(&local_58,4,1,local_5c);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(local_5c);
          if (iVar4 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)(iVar3 + 0x398),iVar4,(undefined4 *)0x0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d trade item instances for platform");
      iVar8 = *(int *)(iVar3 + 0x398);
      uVar5 = 0;
      if (*(int *)(iVar8 + 0x8c) - *(int *)(iVar8 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x88) + uVar5 * 4) + 0x10) = 0;
          iVar4 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x88) + iVar4) + 0x30) = 0xffffffff;
        } while (uVar5 < (uint)(*(int *)(iVar8 + 0x8c) - *(int *)(iVar8 + 0x88) >> 2));
      }
      fread(&local_58,4,1,local_5c);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(local_5c);
          if (iVar4 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)(iVar3 + 0x398),iVar4,(undefined4 *)0x1);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d wire item instances for platform");
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar6 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar6 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6)))) goto LAB_004c485f;
        FUN_005adb3f(pvVar6);
      }
      local_70 = local_70 + 1;
      param_1 = local_5c;
    } while (local_70 < local_68);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c4884:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_004c48b0(FILE *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  FILE *pFVar15;
  undefined4 uVar16;
  uint3 uVar17;
  char *pcVar18;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  FILE *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  undefined1 *local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bd3d0;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_54 = param_1;
  FUN_004bbbf0(param_1);
  pcVar13 = fread_exref;
  local_50 = fread_exref;
  fread(&local_44,4,1,param_1);
  *(undefined1 **)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) = local_44;
  FUN_004c59d0(param_1);
  uVar16 = 0;
  fread(&_DstBuf_0065b3ec,4,1,param_1);
  fread(&_DstBuf_0065b3dc,4,1,param_1);
  iVar12 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 0x1a8) = 0xffffffff;
  FUN_004b9780(param_1);
  FUN_004c44a0(param_1);
  FUN_0040fa80();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,param_1);
  if (0 < (int)local_40) {
    iVar12 = 0;
    do {
      local_44 = (undefined1 *)FUN_004c2230(param_1);
      iVar6 = DAT_0065b5cc;
      if (local_44 != (undefined1 *)0x0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x140);
        if (*(int **)(DAT_0065b5cc + 0x144) == piVar1) {
          FUN_004141e0((void *)(DAT_0065b5cc + 0x13c),piVar1,&local_44);
        }
        else {
          *piVar1 = (int)local_44;
          *(int *)(iVar6 + 0x140) = *(int *)(iVar6 + 0x140) + 4;
        }
      }
      iVar12 = iVar12 + 1;
      pcVar13 = local_50;
    } while (iVar12 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar2 = (int)local_40 < 1;
  uVar17 = (uint3)((uint)uVar16 >> 8);
  if (bVar2) {
    local_44 = &stack0xffffff70;
    pbVar10 = (byte *)((uint)uVar17 << 8);
    FUN_00402690(&stack0xffffff70,"has_contract",0xc);
  }
  else {
    local_44 = &stack0xffffff70;
    pbVar10 = (byte *)((uint)uVar17 << 8);
    FUN_00402690(&stack0xffffff70,"has_contract",0xc);
  }
  local_14 = (uint)bVar2;
  puVar7 = FUN_00412df0();
  local_14 = 0xffffffff;
  FUN_004a0ee0(puVar7,pbVar10);
  FUN_0040fa20();
  local_40 = (undefined4 *)0x0;
  (*pcVar13)();
  iVar12 = 0;
  if (0 < (int)local_40) {
    do {
      local_44 = (undefined1 *)FUN_004bcb30(param_1);
      iVar6 = DAT_0065b5cc;
      if (local_44 != (undefined1 *)0x0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x134);
        if (*(int **)(DAT_0065b5cc + 0x138) == piVar1) {
          FUN_00414080((void *)(DAT_0065b5cc + 0x130),piVar1,&local_44);
        }
        else {
          *piVar1 = (int)local_44;
          *(int *)(iVar6 + 0x134) = *(int *)(iVar6 + 0x134) + 4;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current bounties for the player");
  pvVar8 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if (pvVar8 != (void *)0x0) {
    FUN_004b9460(pvVar8);
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = 0;
  }
  pvVar8 = FUN_004c2690(param_1);
  *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = pvVar8;
  FUN_004c4f60(param_1);
  FUN_004b9bb0(param_1);
  iVar12 = DAT_0065b5cc;
  FUN_004028b0(*(int **)(DAT_0065b5cc + 0x148),*(int **)(DAT_0065b5cc + 0x14c));
  *(undefined4 *)(iVar12 + 0x14c) = *(undefined4 *)(iVar12 + 0x148);
  (*local_50)();
  iVar12 = 0;
  if (0 < (int)local_40) {
    do {
      piVar9 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      iVar6 = DAT_0065b5cc;
      local_14 = 2;
      piVar1 = *(int **)(DAT_0065b5cc + 0x14c);
      if (*(int **)(DAT_0065b5cc + 0x150) == piVar1) {
        FUN_004036d0((void *)(DAT_0065b5cc + 0x148),piVar1,piVar9);
      }
      else {
        piVar1[4] = 0;
        piVar1[5] = 0;
        iVar3 = piVar9[1];
        iVar4 = piVar9[2];
        iVar5 = piVar9[3];
        *piVar1 = *piVar9;
        piVar1[1] = iVar3;
        piVar1[2] = iVar4;
        piVar1[3] = iVar5;
        iVar3 = piVar9[5];
        piVar1[4] = piVar9[4];
        piVar1[5] = iVar3;
        piVar9[4] = 0;
        piVar9[5] = 0xf;
        *(undefined1 *)piVar9 = 0;
        *(int *)(iVar6 + 0x14c) = *(int *)(iVar6 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar8 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar8 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) goto LAB_004c4f10;
        FUN_005adb3f(pvVar8);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed synthetics");
  iVar6 = DAT_0065b444;
  local_14 = 3;
  iVar12 = *(int *)(DAT_0065b444 + 0x48);
  FUN_004132d0(*(int **)(iVar12 + 4));
  pcVar13 = local_50;
  pFVar15 = local_54;
  *(int *)(*(int *)(iVar6 + 0x48) + 4) = iVar12;
  **(int **)(iVar6 + 0x48) = iVar12;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(iVar6 + 0x48) + 8) = iVar12;
  *(undefined4 *)(iVar6 + 0x4c) = 0;
  (*local_50)();
  local_4c = 0;
  if (0 < (int)local_44) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar15);
      local_14 = 4;
      local_40 = (undefined4 *)0x0;
      (*pcVar13)();
      pbVar10 = FUN_00412f20((void *)(DAT_0065b444 + 0x48),(byte *)local_3c);
      *(undefined4 **)pbVar10 = local_40;
      FUN_00591070("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar8 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar8 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
LAB_004c4f10:
          local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar13)();
  local_44 = (undefined1 *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar13)();
      (*pcVar13)(&local_45);
      (*pcVar13)(&local_5c,4,1,pFVar15);
      (*pcVar13)(&local_60,4,1,pFVar15);
      (*pcVar13)();
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      uVar11 = 0;
      uVar14 = DAT_0065c290[1] - *DAT_0065c290 >> 2;
      if (uVar14 != 0) {
        local_40 = (undefined4 *)*DAT_0065c290;
        puVar7 = local_40;
        do {
          pFVar15 = local_54;
          if (*(int *)*puVar7 == local_58) {
            iVar12 = local_40[uVar11];
            if (iVar12 != 0) {
              *(undefined1 *)(iVar12 + 0xe0) = local_45;
              *(undefined4 *)(iVar12 + 0xd8) = local_5c;
              *(undefined4 *)(iVar12 + 0xd4) = local_60;
              *(undefined4 *)(iVar12 + 0xd0) = local_64;
              pcVar18 = "..faction %s loaded";
              goto LAB_004c4ead;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar11 < uVar14);
      }
      pcVar18 = "Invalid faction \'%d\' loaded";
LAB_004c4ead:
      FUN_00591070("SAVEHANDLER",pcVar18);
      local_44 = local_44 + 1;
      pcVar13 = local_50;
    } while ((int)local_44 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d faction states");
  FUN_004bbde0(pFVar15);
  FUN_004bfe80(pFVar15);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c4f60(FILE *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  FILE *pFVar5;
  int iVar6;
  void *pvVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_74;
  void *local_70;
  FILE *local_6c;
  int local_68;
  char local_62;
  char local_61;
  FILE *local_60;
  char local_59;
  int local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bd590;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_6c = param_1;
  iVar3 = FUN_00412700();
  FUN_004399f0(iVar3);
  FUN_004b3980(*(uint **)(DAT_0065b5cc + 300));
  local_58 = 0;
  fread(&local_58,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d emails...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      local_60 = (FILE *)FUN_005adb0f(0xa0);
      pvVar4 = (void *)FUN_004398a0((int)local_60);
      local_70 = pvVar4;
      fread(pvVar4,4,1,param_1);
      local_60 = (FILE *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((FILE *)((int)pvVar4 + 4) != local_60) {
        FUN_00401b20((int *)((int)pvVar4 + 4));
        iVar3 = local_60->_cnt;
        pcVar9 = local_60->_base;
        iVar6 = local_60->_flag;
        *(char **)((int)pvVar4 + 4) = local_60->_ptr;
        *(int *)((int)pvVar4 + 8) = iVar3;
        *(char **)((int)pvVar4 + 0xc) = pcVar9;
        *(int *)((int)pvVar4 + 0x10) = iVar6;
        *(undefined8 *)((int)pvVar4 + 0x14) = *(undefined8 *)&local_60->_file;
        local_60->_file = 0;
        local_60->_charbuf = 0xf;
        *(undefined1 *)&local_60->_ptr = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar7);
      }
      local_60 = (FILE *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((FILE *)((int)pvVar4 + 0x68) != local_60) {
        FUN_00401b20((int *)((int)pvVar4 + 0x68));
        iVar3 = local_60->_cnt;
        pcVar9 = local_60->_base;
        iVar6 = local_60->_flag;
        *(char **)((int)pvVar4 + 0x68) = local_60->_ptr;
        *(int *)((int)pvVar4 + 0x6c) = iVar3;
        *(char **)((int)pvVar4 + 0x70) = pcVar9;
        *(int *)((int)pvVar4 + 0x74) = iVar6;
        *(undefined8 *)((int)pvVar4 + 0x78) = *(undefined8 *)&local_60->_file;
        local_60->_file = 0;
        local_60->_charbuf = 0xf;
        *(undefined1 *)&local_60->_ptr = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar7);
      }
      local_60 = (FILE *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      pFVar5 = (FILE *)((int)pvVar4 + 0x1c);
      if (pFVar5 != local_60) {
        FUN_00401b20((int *)pFVar5);
        iVar3 = local_60->_cnt;
        pcVar9 = local_60->_base;
        iVar6 = local_60->_flag;
        pFVar5->_ptr = local_60->_ptr;
        *(int *)((int)pvVar4 + 0x20) = iVar3;
        *(char **)((int)pvVar4 + 0x24) = pcVar9;
        *(int *)((int)pvVar4 + 0x28) = iVar6;
        *(undefined8 *)((int)pvVar4 + 0x2c) = *(undefined8 *)&local_60->_file;
        local_60->_file = 0;
        local_60->_charbuf = 0xf;
        *(undefined1 *)&local_60->_ptr = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar7);
      }
      if ((FILE *)((int)pvVar4 + 0x4c) != pFVar5) {
        if (0xf < *(uint *)((int)pvVar4 + 0x30)) {
          pFVar5 = (FILE *)pFVar5->_ptr;
        }
        FUN_00402690((FILE *)((int)pvVar4 + 0x4c),pFVar5,*(uint *)((int)pvVar4 + 0x2c));
      }
      param_1 = local_6c;
      local_60 = (FILE *)FUN_004b88b0((undefined1 *)local_3c,local_6c);
      if ((FILE *)((int)pvVar4 + 0x34) != local_60) {
        FUN_00401b20((int *)((int)pvVar4 + 0x34));
        iVar3 = local_60->_cnt;
        pcVar9 = local_60->_base;
        iVar6 = local_60->_flag;
        *(char **)((int)pvVar4 + 0x34) = local_60->_ptr;
        *(int *)((int)pvVar4 + 0x38) = iVar3;
        *(char **)((int)pvVar4 + 0x3c) = pcVar9;
        *(int *)((int)pvVar4 + 0x40) = iVar6;
        *(undefined8 *)((int)pvVar4 + 0x44) = *(undefined8 *)&local_60->_file;
        local_60->_file = 0;
        local_60->_charbuf = 0xf;
        *(undefined1 *)&local_60->_ptr = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar7);
      }
      local_60 = (FILE *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((FILE *)((int)pvVar4 + 0x80) != local_60) {
        FUN_00401b20((int *)((int)pvVar4 + 0x80));
        iVar3 = local_60->_cnt;
        pcVar9 = local_60->_base;
        iVar6 = local_60->_flag;
        *(char **)((int)pvVar4 + 0x80) = local_60->_ptr;
        *(int *)((int)pvVar4 + 0x84) = iVar3;
        *(char **)((int)pvVar4 + 0x88) = pcVar9;
        *(int *)((int)pvVar4 + 0x8c) = iVar6;
        *(undefined8 *)((int)pvVar4 + 0x90) = *(undefined8 *)&local_60->_file;
        local_60->_file = 0;
        local_60->_charbuf = 0xf;
        *(undefined1 *)&local_60->_ptr = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar7);
      }
      fread((void *)((int)pvVar4 + 0x98),4,1,param_1);
      pbVar8 = (byte *)0x1;
      fread((void *)((int)pvVar4 + 100),1,1,param_1);
      fread((void *)((int)pvVar4 + 0x9c),1,1,param_1);
      pvVar7 = *(void **)(DAT_0065b5cc + 300);
      puVar1 = *(undefined4 **)((int)pvVar7 + 4);
      if (*(undefined4 **)((int)pvVar7 + 8) == puVar1) {
        FUN_00414080(pvVar7,puVar1,&local_70);
        pvVar4 = local_70;
      }
      else {
        *puVar1 = pvVar4;
        *(int *)((int)pvVar7 + 4) = *(int *)((int)pvVar7 + 4) + 4;
      }
      local_60 = (FILE *)&stack0xffffff64;
      FUN_004024e0(&stack0xffffff64,(undefined4 *)((int)pvVar4 + 0x80));
      local_14 = 0;
      pFVar5 = DAT_0065c270;
      if (DAT_0065c270 == (FILE *)0x0) {
        pFVar5 = (FILE *)FUN_005adb0f(0x2c);
        DAT_0065c270 = pFVar5;
        *(undefined1 *)&pFVar5->_ptr = 0;
        pFVar5->_cnt = 0;
        pFVar5->_base = (char *)0x0;
        pFVar5->_flag = 0;
        pFVar5->_file = 0;
        pFVar5->_charbuf = 0;
        pFVar5->_bufsiz = 0;
        pFVar5->_tmpfname = (char *)0x0;
        pFVar5[1]._ptr = (char *)0x0;
        pFVar5[1]._cnt = 0;
        pFVar5[1]._base = (char *)0x0;
        local_60 = pFVar5;
      }
      local_14 = 0xffffffff;
      FUN_00439be0(pFVar5,pbVar8);
      FUN_00591070("SAVEHANDLER"," - Loaded: \'%s\'");
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar3 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_14 = 1;
      pbVar8 = FUN_004a2bf0((void *)(*(int *)(DAT_0065b5cc + 300) + 0xc),(byte *)local_3c);
      *pbVar8 = 1;
      FUN_00591070("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_58);
  }
  fread(&local_58,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d \'drafts sent\'...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_14 = 2;
      iVar3 = *(int *)(DAT_0065b5cc + 300);
      piVar2 = *(int **)(iVar3 + 0x24);
      if (*(int **)(iVar3 + 0x28) == piVar2) {
        FUN_00403840((void *)(iVar3 + 0x20),piVar2,local_3c);
      }
      else {
        FUN_004024e0(piVar2,local_3c);
        *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 0x18;
      }
      FUN_00591070("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar4);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,param_1);
  pcVar9 = "Loading %d \'articles downloaded\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_14 = 3;
      iVar3 = *(int *)(DAT_0065b5cc + 300);
      piVar2 = *(int **)(iVar3 + 0x18);
      if (*(int **)(iVar3 + 0x1c) == piVar2) {
        FUN_00403840((void *)(iVar3 + 0x14),piVar2,local_3c);
      }
      else {
        FUN_004024e0(piVar2,local_3c);
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 0x18;
      }
      FUN_004024e0(&stack0xffffff64,local_3c);
      iVar3 = FUN_004b4a70(*(void **)(DAT_0065b444 + 0xc),(byte *)pcVar9);
      if (iVar3 == 0) {
        pcVar10 = "Invalid article \'%s\' to download, ignoring.";
      }
      else {
        *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(iVar3 + 0x88);
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x8c);
        *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar3 + 0x90);
        *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x94);
        *(undefined8 *)(iVar3 + 0xb0) = *(undefined8 *)(iVar3 + 0x98);
        pcVar10 = "Loaded article downloaded \'%s\'";
      }
      FUN_00591070("SAVEHANDLER",pcVar10);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar4);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,param_1);
  pcVar9 = "Loading %d \'sent emails\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar3 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,param_1);
      local_6c = (FILE *)&stack0xffffff64;
      local_14 = 4;
      FUN_004024e0(&stack0xffffff64,local_3c);
      local_14._0_1_ = 5;
      pFVar5 = DAT_0065c270;
      if (DAT_0065c270 == (FILE *)0x0) {
        pFVar5 = (FILE *)FUN_005adb0f(0x2c);
        DAT_0065c270 = pFVar5;
        *(undefined1 *)&pFVar5->_ptr = 0;
        pFVar5->_cnt = 0;
        pFVar5->_base = (char *)0x0;
        pFVar5->_flag = 0;
        pFVar5->_file = 0;
        pFVar5->_charbuf = 0;
        pFVar5->_bufsiz = 0;
        pFVar5->_tmpfname = (char *)0x0;
        pFVar5[1]._ptr = (char *)0x0;
        pFVar5[1]._cnt = 0;
        pFVar5[1]._base = (char *)0x0;
        local_6c = pFVar5;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      iVar6 = FUN_00439a90(pFVar5,(byte *)pcVar9);
      if (iVar6 == 0) {
        pcVar11 = "ERROR: invalid email \'%s\' loaded";
        pcVar10 = "ERROR";
      }
      else {
        *(undefined2 *)(iVar6 + 100) = 0x100;
        *(undefined4 *)(iVar6 + 0x98) = 0;
        pcVar11 = "Email \'%s\' marked as sent";
        pcVar10 = "SAVEHANDLER";
      }
      FUN_00591070(pcVar10,pcVar11);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c54d5;
        FUN_005adb3f(pvVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_58);
  }
  fread(&local_59,1,1,param_1);
  do {
    if (local_59 == '\0') {
      FUN_00591070("SAVEHANDLER","Set %d emails to fired or ready to fire.");
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    FUN_004b88b0((undefined1 *)local_54,param_1);
    local_14 = 6;
    fread(&local_74,4,1,param_1);
    pbVar8 = (byte *)0x1;
    fread(&local_62,1,1,param_1);
    fread(&local_61,1,1,param_1);
    local_6c = (FILE *)&stack0xffffff64;
    FUN_004024e0(&stack0xffffff64,local_54);
    local_14._0_1_ = 7;
    pFVar5 = DAT_0065c270;
    if (DAT_0065c270 == (FILE *)0x0) {
      pFVar5 = (FILE *)FUN_005adb0f(0x2c);
      DAT_0065c270 = pFVar5;
      *(undefined1 *)&pFVar5->_ptr = 0;
      pFVar5->_cnt = 0;
      pFVar5->_base = (char *)0x0;
      pFVar5->_flag = 0;
      pFVar5->_file = 0;
      pFVar5->_charbuf = 0;
      pFVar5->_bufsiz = 0;
      pFVar5->_tmpfname = (char *)0x0;
      pFVar5[1]._ptr = (char *)0x0;
      pFVar5[1]._cnt = 0;
      pFVar5[1]._base = (char *)0x0;
      local_6c = pFVar5;
    }
    local_14 = CONCAT31(local_14._1_3_,6);
    iVar3 = FUN_00439a90(pFVar5,pbVar8);
    if (iVar3 == 0) {
      FUN_00591070("ERROR","ERROR: invalid email \'%s\' loaded");
    }
    else {
      *(undefined4 *)(iVar3 + 0x98) = local_74;
      *(char *)(iVar3 + 100) = local_62;
      *(char *)(iVar3 + 0x65) = local_61;
      FUN_00591070("SAVEHANDLER","Set email %s with RTF states (%f, %s, %s)");
    }
    local_14 = 0xffffffff;
    if (0xf < local_40) {
      pvVar4 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar4 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar4)))) {
LAB_004c54d5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    fread(&local_59,1,1,param_1);
  } while( true );
}


void __fastcall FUN_004c59d0(FILE *param_1)

{
  FILE *pFVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *****pppppuVar10;
  int iVar11;
  code *pcVar12;
  void *in_stack_fffffedc;
  undefined4 ***pppuStack_10c;
  undefined4 uStack_108;
  byte *pbVar13;
  uint uVar14;
  void *pvVar15;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 ****local_8c;
  FILE *local_88;
  char local_82;
  undefined1 local_81;
  undefined4 *local_80;
  undefined4 ****local_7c;
  undefined4 *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd646;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_88 = param_1;
  FUN_004b88b0((undefined1 *)local_74,param_1);
  local_8 = 0;
  FUN_004b88b0((undefined1 *)local_5c,param_1);
  local_8._0_1_ = 1;
  FUN_004b88b0((undefined1 *)local_44,param_1);
  pcVar12 = fread_exref;
  local_8._0_1_ = 2;
  fread(&local_b4,8,1,param_1);
  uVar14 = 0;
  fread(&local_ac,8,1,param_1);
  fread(&local_a0,4,1,param_1);
  uStack_108 = 0x4c5a6e;
  fread(&local_81,1,1,param_1);
  local_78 = (undefined4 *)&stack0xffffff24;
  pbVar13 = (byte *)0x0;
  pvVar15 = (void *)(uVar14 & 0xffffff00);
  FUN_00402690(&stack0xffffff24,&PTR_005ce008,0);
  local_8._0_1_ = 3;
  local_8c = (undefined4 ****)&stack0xffffff0c;
  FUN_004024e0(&stack0xffffff0c,local_74);
  local_7c = &pppuStack_10c;
  local_8._0_1_ = 4;
  FUN_004024e0(&pppuStack_10c,local_44);
  local_8._0_1_ = 5;
  FUN_004024e0(&stack0xfffffedc,local_5c);
  local_8._0_1_ = 2;
  puVar2 = FUN_0040e040(0,local_a0,in_stack_fffffedc);
  iVar11 = DAT_0065b5cc;
  local_80 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00591070("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
  }
  else {
    *(undefined8 *)(puVar2 + 10) = local_b4;
    *(undefined4 **)(iVar11 + 0xd0) = puVar2;
    *(undefined8 *)(puVar2 + 0xc) = local_ac;
    *(undefined1 *)(puVar2 + 0x57) = local_81;
    FUN_0050c090(puVar2,*(undefined1 **)(*(int *)(iVar11 + 0xd0) + 0x20));
    for (puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar9 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar9 = puVar9 + 1) {
      piVar8 = (int *)*puVar9;
      param_1 = local_88;
      if (*piVar8 == puVar2[8]) goto LAB_004c5b78;
    }
    piVar8 = (int *)0x0;
LAB_004c5b78:
    *(int **)(DAT_0065b5cc + 0xd8) = piVar8;
    if (DAT_0065c280 == (undefined4 *)0x0) {
      local_78 = (undefined4 *)FUN_005adb0f(0x98);
      local_8._0_1_ = 6;
      DAT_0065c280 = FUN_0058f5d0(local_78);
      local_8._0_1_ = 2;
    }
    FUN_0058fc90((int)DAT_0065c280);
    fread(&local_90,4,1,param_1);
    if (0 < local_90) {
      local_8c = (undefined4 ****)(puVar2 + 0x53);
      iVar11 = 0;
      do {
        fread(&local_7c,4,1,param_1);
        pvVar15 = (void *)0x1;
        pbVar13 = &DAT_00000004;
        fread(&local_78,4,1,param_1);
        piVar8 = FUN_00420f40(local_8c,(int *)&local_7c);
        iVar11 = iVar11 + 1;
        *piVar8 = (int)local_78;
        puVar2 = local_80;
      } while (iVar11 < local_90);
    }
    fread(&local_94,4,1,param_1);
    FUN_00511350((int)puVar2);
    if (0 < local_94) {
      iVar11 = 0;
      do {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_8._0_1_ = 7;
        local_78 = puVar2;
        FUN_004b88b0(&stack0xffffff24,param_1);
        pvVar3 = FUN_004b6b90(puVar2,pvVar15);
        local_8._0_1_ = 2;
        fread((void *)((int)pvVar3 + 0x20),4,1,param_1);
        pvVar15 = (void *)0x1;
        pbVar13 = &DAT_00000004;
        fread((void *)((int)pvVar3 + 0x24),4,1,param_1);
        fread((void *)((int)pvVar3 + 0x18),4,1,param_1);
        uStack_108 = 0x4c5ca5;
        fread((void *)((int)pvVar3 + 0x1c),4,1,param_1);
        FUN_00591070("SAVEHANDLER","  Console damage loaded for: %s");
        iVar11 = iVar11 + 1;
        puVar2 = local_80;
        pcVar12 = fread_exref;
      } while (iVar11 < local_94);
    }
    (*pcVar12)();
    local_7c = (undefined4 *****)0x0;
    if (0 < local_98) {
      do {
        iVar11 = -1;
        puVar4 = (undefined1 *)FUN_004c61b0(param_1);
        FUN_00521d10((void *)puVar2[0x10],puVar4,iVar11);
        local_7c = (undefined4 ****)((int)local_7c + 1);
      } while ((int)local_7c < local_98);
    }
    *(undefined1 *)(puVar2[0x10] + 0x34) = 0;
    local_78 = (undefined4 *)FUN_004a6be0(puVar2[8],(int)puVar2,'\0');
    if (local_78 == (undefined4 *)0x0) {
      (**(code **)(*(int *)puVar2[0x5e] + 4))();
      puVar2[0x5e] = 0;
      puVar2[0x3e] = 0;
      puVar2[0x35] = 0;
      puVar2[0xb0] = 0;
      puVar2[0xb1] = 0;
    }
    else {
      FUN_00511950(puVar2,local_78,'\0','\0');
      iVar11 = puVar2[0x5e];
      if (iVar11 != 0) {
        puVar9 = (undefined4 *)(iVar11 + 8);
        iVar5 = FUN_004127d0();
        if ((undefined4 *)(iVar5 + 0x14) != puVar9) {
          if (0xf < *(uint *)(iVar11 + 0x1c)) {
            puVar9 = (undefined4 *)*puVar9;
          }
          FUN_00402690((undefined4 *)(iVar5 + 0x14),puVar9,*(uint *)(iVar11 + 0x18));
        }
        FUN_00591e00((undefined1 *)local_2c,"aboard_%s");
        local_8._0_1_ = 8;
        local_8c = local_2c;
        if (0xf < local_18) {
          local_8c = local_2c[0];
        }
        pppppuVar10 = local_2c;
        if (0xf < local_18) {
          pppppuVar10 = (undefined4 *****)local_2c[0];
        }
        iVar5 = 0;
        iVar11 = (local_1c + (int)local_8c) - (int)pppppuVar10;
        if ((undefined4 *****)(local_1c + (int)local_8c) < pppppuVar10) {
          iVar11 = 0;
        }
        local_7c = pppppuVar10;
        if (iVar11 != 0) {
          do {
            iVar6 = tolower((int)*(char *)(iVar5 + (int)pppppuVar10));
            *(char *)(iVar5 + (int)local_8c) = (char)iVar6;
            iVar5 = iVar5 + 1;
            puVar2 = local_80;
            param_1 = local_88;
          } while (iVar5 != iVar11);
        }
        local_8c = (undefined4 ****)&stack0xffffff20;
        FUN_004024e0(&stack0xffffff20,local_2c);
        local_8._0_1_ = 9;
        puVar9 = DAT_0065c274;
        if (DAT_0065c274 == (undefined4 *)0x0) {
          local_78 = (undefined4 *)FUN_005adb0f(0x30);
          *local_78 = 0;
          local_78[1] = 0;
          local_78[2] = 0;
          pFVar1 = (FILE *)(local_78 + 3);
          local_8._0_1_ = 0xb;
          pFVar1->_ptr = (char *)0x0;
          local_78[4] = 0;
          local_88 = pFVar1;
          pcVar7 = (char *)FUN_004136c0();
          pFVar1->_ptr = pcVar7;
          DAT_0065c274 = local_78;
          local_78[9] = 0;
          local_78[10] = 0xf;
          *(undefined1 *)(local_78 + 5) = 0;
          puVar9 = local_78;
        }
        local_8._0_1_ = 8;
        FUN_004a0ee0(puVar9,pbVar13);
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pppppuVar10 = (undefined4 *****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pppppuVar10 = (undefined4 *****)local_2c[0][-1],
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppuVar10)))) {
LAB_004c5eed:
            local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppuVar10);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
        pcVar12 = fread_exref;
      }
    }
    iVar11 = DAT_0065b5cc;
    puVar2[0xde] = 0;
    iVar11 = *(int *)(*(int *)(*(int *)(iVar11 + 0xd0) + 0x40) + 0x20);
    if (iVar11 != 0) {
      local_88 = (FILE *)(iVar11 + 0x3c);
      local_7c = (undefined4 *****)0x8;
      do {
        local_78 = *(undefined4 **)local_88;
        if (local_78 != (undefined4 *)0x0) {
          FUN_00494e20(local_78);
          FUN_005adb3f(local_78);
        }
        local_88->_ptr = 0;
        local_88 = (FILE *)((int)local_88 + 4);
        local_7c = (undefined4 ****)((int)local_7c - 1);
      } while ((undefined4 *****)local_7c != (undefined4 *****)0x0);
    }
    (*pcVar12)();
    local_80 = (undefined4 *)0x0;
    if (0 < local_9c) {
      do {
        (*pcVar12)();
        if (local_82 != '\0') {
          FUN_004b88b0((undefined1 *)local_2c,param_1);
          local_8._0_1_ = 0xc;
          puVar9 = local_80;
          FUN_004024e0(&stack0xffffff20,local_2c);
          iVar11 = FUN_004a8180(pbVar13);
          FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),iVar11,(uint)puVar9);
          FUN_00591070("SAVEHANDLER","Loaded weapon of class %s into player ship");
          local_8._0_1_ = 2;
          if (0xf < local_18) {
            pppppuVar10 = (undefined4 *****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pppppuVar10 = (undefined4 *****)local_2c[0][-1],
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppuVar10)))) goto LAB_004c5eed;
            FUN_005adb3f(pppppuVar10);
          }
        }
        local_80 = (undefined4 *)((int)local_80 + 1);
      } while ((int)local_80 < local_9c);
    }
    iVar11 = DAT_0065b5cc;
    puVar2[0x19] = 1;
    *(undefined1 *)(puVar2 + 0x8d) = 1;
    *(undefined4 **)(iVar11 + 0xd0) = puVar2;
    DAT_0065b3d4 = puVar2;
    if ((undefined4 *)puVar2[0x5e] != (undefined4 *)0x0) {
      DAT_0065b3d4 = (undefined4 *)puVar2[0x5e];
    }
  }
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pvVar15 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar15 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar15 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar15 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004c61b0(FILE *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined4 local_4c;
  FILE *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  undefined1 local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd38a;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_1;
  FUN_004b88b0((undefined1 *)local_2c,param_1);
  pcVar9 = fread_exref;
  local_8 = 0;
  fread(&local_2d,1,1,param_1);
  pbVar10 = (byte *)0x1;
  fread(&local_4c,4,1,param_1);
  FUN_004024e0(&stack0xffffff8c,local_2c);
  iVar3 = FUN_004a8020(pbVar10);
  if (iVar3 == 0) {
    FUN_00591070("ERROR","Invalid module in save file.");
    bVar2 = cc_assert_script_compatible("Invalid module in save file.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  else {
    local_38 = (undefined4 *)FUN_005adb0f(0x88);
    local_8._0_1_ = 1;
    local_3c = FUN_004adec0(local_38,iVar3);
    iVar3 = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    do {
      (*pcVar9)();
      (*pcVar9)(&local_38,4);
      if (local_34 != -1) {
        local_44 = (undefined4 *)FUN_005adb0f(8);
        piVar1 = DAT_0065b5cc;
        uVar5 = 0;
        *local_44 = 0x42c80000;
        pcVar9 = fread_exref;
        uVar8 = piVar1[1] - *piVar1 >> 2;
        if (uVar8 != 0) {
          local_40 = (undefined4 *)*piVar1;
          puVar7 = local_40;
          do {
            if (*(int *)*puVar7 == local_34) {
              uVar4 = local_40[uVar5];
              goto LAB_004c62ea;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar5 < uVar8);
        }
        uVar4 = 0;
LAB_004c62ea:
        local_44[1] = uVar4;
        *(undefined4 **)(iVar3 + 4 + local_3c[3]) = local_44;
        **(int **)(iVar3 + 4 + local_3c[3]) = (int)local_38;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x50);
    iVar3 = 0x54;
    do {
      (*pcVar9)();
      (*pcVar9)(&local_40,4);
      if (local_34 != -1) {
        local_44 = (undefined4 *)FUN_005adb0f(8);
        piVar1 = DAT_0065b5cc;
        uVar5 = 0;
        *local_44 = 0x42c80000;
        pcVar9 = fread_exref;
        uVar8 = piVar1[1] - *piVar1 >> 2;
        if (uVar8 != 0) {
          local_38 = (undefined4 *)*piVar1;
          puVar7 = local_38;
          do {
            if (*(int *)*puVar7 == local_34) {
              uVar4 = local_38[uVar5];
              goto LAB_004c6388;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar5 < uVar8);
        }
        uVar4 = 0;
LAB_004c6388:
        local_44[1] = uVar4;
        *(undefined4 **)(iVar3 + local_3c[3]) = local_44;
        **(int **)(iVar3 + local_3c[3]) = (int)local_40;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xa4);
    *(undefined1 *)((int)local_3c + 99) = local_2d;
    local_3c[0x1a] = local_4c;
    FUN_00591070("DETAIL","Loaded module of type \'%s\'");
  }
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004c6460(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  FILE *pFVar14;
  char *pcVar15;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  FILE *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  int local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bce00;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_54 = param_1;
  FUN_004bbbf0(param_1);
  local_50 = fread_exref;
  fread(&local_44,4,1,param_1);
  *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) = local_44;
  FUN_004c7230(param_1);
  fread(&_DstBuf_0065b3ec,4,1,param_1);
  fread(&_DstBuf_0065b3dc,4,1,param_1);
  iVar11 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1a8) = 0xffffffff;
  FUN_004b9780(param_1);
  FUN_004c6e20(param_1);
  FUN_004c6a20(param_1);
  FUN_0040fa20();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,param_1);
  iVar11 = 0;
  if (0 < (int)local_40) {
    do {
      local_44 = FUN_004bcb30(param_1);
      iVar5 = DAT_0065b5cc;
      if (local_44 != 0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x134);
        if (*(int **)(DAT_0065b5cc + 0x138) == piVar1) {
          FUN_00414080((void *)(DAT_0065b5cc + 0x130),piVar1,&local_44);
        }
        else {
          *piVar1 = local_44;
          *(int *)(iVar5 + 0x134) = *(int *)(iVar5 + 0x134) + 4;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current bounties for the player");
  pvVar6 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if (pvVar6 != (void *)0x0) {
    FUN_004b9460(pvVar6);
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = 0;
  }
  pvVar6 = FUN_004c2690(param_1);
  *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = pvVar6;
  FUN_004bac60(param_1);
  FUN_004b9bb0(param_1);
  iVar11 = DAT_0065b5cc;
  FUN_004028b0(*(int **)(DAT_0065b5cc + 0x148),*(int **)(DAT_0065b5cc + 0x14c));
  *(undefined4 *)(iVar11 + 0x14c) = *(undefined4 *)(iVar11 + 0x148);
  (*local_50)(&local_40,4,1,param_1);
  iVar11 = 0;
  if (0 < (int)local_40) {
    do {
      piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      iVar5 = DAT_0065b5cc;
      local_14 = 0;
      piVar1 = *(int **)(DAT_0065b5cc + 0x14c);
      if (*(int **)(DAT_0065b5cc + 0x150) == piVar1) {
        FUN_004036d0((void *)(DAT_0065b5cc + 0x148),piVar1,piVar7);
      }
      else {
        piVar1[4] = 0;
        piVar1[5] = 0;
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        *piVar1 = *piVar7;
        piVar1[1] = iVar2;
        piVar1[2] = iVar3;
        piVar1[3] = iVar4;
        iVar2 = piVar7[5];
        piVar1[4] = piVar7[4];
        piVar1[5] = iVar2;
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
        *(int *)(iVar5 + 0x14c) = *(int *)(iVar5 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004c69d0;
        FUN_005adb3f(pvVar6);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed synthetics");
  iVar5 = DAT_0065b444;
  local_14 = 1;
  iVar11 = *(int *)(DAT_0065b444 + 0x48);
  FUN_004132d0(*(int **)(iVar11 + 4));
  pcVar12 = local_50;
  pFVar14 = local_54;
  *(int *)(*(int *)(iVar5 + 0x48) + 4) = iVar11;
  **(int **)(iVar5 + 0x48) = iVar11;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = iVar11;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  (*local_50)(&local_44,4,1,local_54);
  local_4c = 0;
  if (0 < local_44) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar14);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar12)(&local_40,4,1,pFVar14);
      pbVar8 = FUN_00412f20((void *)(DAT_0065b444 + 0x48),(byte *)local_3c);
      *(undefined4 **)pbVar8 = local_40;
      FUN_00591070("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) {
LAB_004c69d0:
          local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_4c = local_4c + 1;
    } while (local_4c < local_44);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar12)(&local_4c,4,1,pFVar14);
  local_44 = 0;
  if (0 < local_4c) {
    do {
      (*pcVar12)(&local_58,4,1,pFVar14);
      (*pcVar12)(&local_45,1,1,pFVar14);
      (*pcVar12)(&local_5c,4,1,pFVar14);
      (*pcVar12)(&local_60,4,1,pFVar14);
      (*pcVar12)(&local_64,4,1,pFVar14);
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      uVar9 = 0;
      uVar13 = DAT_0065c290[1] - *DAT_0065c290 >> 2;
      if (uVar13 != 0) {
        local_40 = (undefined4 *)*DAT_0065c290;
        puVar10 = local_40;
        do {
          pFVar14 = local_54;
          if (*(int *)*puVar10 == local_58) {
            iVar11 = local_40[uVar9];
            if (iVar11 != 0) {
              *(undefined1 *)(iVar11 + 0xe0) = local_45;
              *(undefined4 *)(iVar11 + 0xd8) = local_5c;
              *(undefined4 *)(iVar11 + 0xd4) = local_60;
              *(undefined4 *)(iVar11 + 0xd0) = local_64;
              pcVar15 = "..faction %s loaded";
              goto LAB_004c696d;
            }
            break;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 < uVar13);
      }
      pcVar15 = "Invalid faction \'%d\' loaded";
LAB_004c696d:
      FUN_00591070("SAVEHANDLER",pcVar15);
      local_44 = local_44 + 1;
      pcVar12 = local_50;
    } while (local_44 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d faction states");
  FUN_004bbde0(pFVar14);
  FUN_004bfe80(pFVar14);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c6a20(FILE *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *this;
  byte ****ppppbVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  byte ****ppppbVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 in_stack_ffffff78;
  uint3 uVar13;
  byte *pbVar12;
  byte *in_stack_ffffff7c;
  undefined4 local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd690;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040fa80();
  local_4c = 0;
  fread(&local_4c,4,1,param_1);
  iVar9 = 0;
  if (0 < local_4c) {
    do {
      local_54 = FUN_004be160(param_1);
      iVar3 = DAT_0065b5cc;
      if (local_54 != 0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x140);
        if (*(int **)(DAT_0065b5cc + 0x144) == piVar1) {
          FUN_004141e0((void *)(DAT_0065b5cc + 0x13c),piVar1,&local_54);
        }
        else {
          *piVar1 = local_54;
          *(int *)(iVar3 + 0x140) = *(int *)(iVar3 + 0x140) + 4;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar2 = local_4c < 1;
  uVar13 = (uint3)((uint)in_stack_ffffff78 >> 8);
  if (bVar2) {
    local_50 = &stack0xffffff78;
    pbVar12 = (byte *)((uint)uVar13 << 8);
    FUN_00402690(&stack0xffffff78,"has_contract",0xc);
  }
  else {
    local_50 = &stack0xffffff78;
    pbVar12 = (byte *)((uint)uVar13 << 8);
    FUN_00402690(&stack0xffffff78,"has_contract",0xc);
  }
  local_8 = (uint)bVar2;
  this = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(this,pbVar12);
  pcVar10 = fread_exref;
  local_4c = 0;
  fread(&local_45,1,1,param_1);
  do {
    if (local_45 == '\0') {
      FUN_00591070("SAVEHANDLER","Loaded %d contracts that have usage timers set.");
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004b88b0((undefined1 *)local_44,param_1);
    local_8 = 2;
    FUN_004b88b0((undefined1 *)local_2c,param_1);
    local_8._0_1_ = 3;
    (*pcVar10)();
    FUN_004024e0(&stack0xffffff7c,local_44);
    local_50 = (undefined1 *)FUN_004a6de0(in_stack_ffffff7c);
    if ((local_50 == (undefined1 *)0x0) ||
       (iVar9 = *(int *)(local_50 + 0x398), pcVar10 = fread_exref, iVar9 == 0)) {
      FUN_00591070("SAVEHANDLER","Error: invalid tradelocation \'%s\' for contract loaded.");
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        ppppbVar8 = (byte ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppbVar8 = (byte ****)local_2c[0][-1],
           (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar8)))) goto LAB_004c6dfb;
        FUN_005adb3f(ppppbVar8);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar7 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) goto LAB_004c6dfb;
        FUN_005adb3f(pvVar7);
      }
    }
    else {
      uVar11 = 0;
      ppppbVar8 = (byte ****)local_2c[0];
      if (*(int *)(iVar9 + 0xa4) - *(int *)(iVar9 + 0xa0) >> 2 != 0) {
        do {
          pbVar12 = *(byte **)(*(int *)(iVar9 + 0xa0) + uVar11 * 4);
          ppppbVar4 = local_2c;
          if (0xf < local_18) {
            ppppbVar4 = ppppbVar8;
          }
          pbVar6 = pbVar12;
          if (0xf < *(uint *)(pbVar12 + 0x14)) {
            pbVar6 = *(byte **)pbVar12;
          }
          uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar12 + 0x10),(byte *)ppppbVar4,local_1c);
          if ((char)uVar5 != '\0') {
            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0xa0) + uVar11 * 4) + 0xa8) = local_58;
            in_stack_ffffff7c = (byte *)0x4c6c51;
            FUN_00591070("SAVEHANDLER","Set contractID %s to have timer \'%f\'");
            local_4c = local_4c + 1;
            iVar9 = *(int *)(local_50 + 0x398);
            ppppbVar8 = (byte ****)local_2c[0];
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)(*(int *)(iVar9 + 0xa4) - *(int *)(iVar9 + 0xa0) >> 2));
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        ppppbVar4 = ppppbVar8;
        if ((0xfff < local_18 + 1) &&
           (ppppbVar4 = (byte ****)ppppbVar8[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar8 + (-4 - (int)ppppbVar4)))) goto LAB_004c6dfb;
        FUN_005adb3f(ppppbVar4);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      pcVar10 = fread_exref;
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar7 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
LAB_004c6dfb:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
        pcVar10 = fread_exref;
      }
    }
    (*pcVar10)();
  } while( true );
}


void __fastcall FUN_004c6e20(FILE *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  byte *in_stack_ffffff6c;
  int local_70;
  int local_68;
  int local_64;
  uint local_60;
  FILE *local_5c;
  int local_58;
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
  puStack_18 = &LAB_005bd478;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_68 = 0;
  local_5c = param_1;
  fread(&local_68,4,1,param_1);
  local_70 = 0;
  if (0 < local_68) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar2 = (void **)FUN_004b88b0((undefined1 *)local_54,param_1);
      if (&local_3c != ppvVar2) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar2;
        pvStack_38 = ppvVar2[1];
        pvStack_34 = ppvVar2[2];
        pvStack_30 = ppvVar2[3];
        local_2c = ppvVar2[4];
        pvStack_28 = ppvVar2[5];
        ppvVar2[4] = (void *)0x0;
        ppvVar2[5] = (void *)0xf;
        *(undefined1 *)ppvVar2 = 0;
      }
      if (0xf < local_40) {
        pvVar6 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar6 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6)))) goto LAB_004c71df;
        FUN_005adb3f(pvVar6);
      }
      FUN_004024e0(&stack0xffffff6c,&local_3c);
      iVar3 = FUN_004a7100(in_stack_ffffff6c);
      FUN_00591070("SAVEHANDLER","...loading trade data for platform %s");
      if (iVar3 == 0) {
        FUN_00591070("ERROR","ERROR: No valid space station with this rego.");
        if ((void *)0xf < pvStack_28) {
          pvVar6 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar6 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6)))) {
LAB_004c71df:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
        goto LAB_004c7204;
      }
      local_64 = *(int *)(iVar3 + 0x398);
      uVar9 = 0;
      puVar7 = *(undefined4 **)(local_64 + 0x94);
      uVar5 = (uint)((int)*(undefined4 **)(local_64 + 0x98) + (3 - (int)puVar7)) >> 2;
      if (*(undefined4 **)(local_64 + 0x98) < puVar7) {
        uVar5 = 0;
      }
      local_60 = uVar5;
      if (uVar5 != 0) {
        do {
          if ((int *)*puVar7 != (int *)0x0) {
            FUN_0040fae0((int *)*puVar7);
            uVar5 = local_60;
          }
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 != uVar5);
      }
      *(undefined4 *)(local_64 + 0x98) = *(undefined4 *)(local_64 + 0x94);
      local_58 = 0;
      fread(&local_58,4,1,local_5c);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          local_64 = FUN_004be160(local_5c);
          iVar4 = *(int *)(iVar3 + 0x398);
          piVar1 = *(int **)(iVar4 + 0x98);
          if (*(int **)(iVar4 + 0x9c) == piVar1) {
            FUN_004141e0((void *)(iVar4 + 0x94),piVar1,&local_64);
          }
          else {
            *piVar1 = local_64;
            *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + 4;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d contracts for platform");
      FUN_0049cfc0(*(void **)(iVar3 + 0x398),'\0');
      fread(&local_58,4,1,local_5c);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(local_5c);
          if (iVar4 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)(iVar3 + 0x398),iVar4,(undefined4 *)0x0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d trade item instances for platform");
      iVar8 = *(int *)(iVar3 + 0x398);
      uVar5 = 0;
      if (*(int *)(iVar8 + 0x8c) - *(int *)(iVar8 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x88) + uVar5 * 4) + 0x10) = 0;
          iVar4 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x88) + iVar4) + 0x30) = 0xffffffff;
        } while (uVar5 < (uint)(*(int *)(iVar8 + 0x8c) - *(int *)(iVar8 + 0x88) >> 2));
      }
      fread(&local_58,4,1,local_5c);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(local_5c);
          if (iVar4 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)(iVar3 + 0x398),iVar4,(undefined4 *)0x1);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d wire item instances for platform");
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar6 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar6 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6)))) goto LAB_004c71df;
        FUN_005adb3f(pvVar6);
      }
      local_70 = local_70 + 1;
      param_1 = local_5c;
    } while (local_70 < local_68);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c7204:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c7230(FILE *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *****pppppuVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  void *in_stack_fffffedc;
  undefined4 ***pppuStack_10c;
  undefined4 uStack_108;
  byte *pbVar12;
  uint uVar13;
  void *pvVar14;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  FILE *local_8c;
  char local_86;
  undefined1 local_85;
  undefined4 ****local_84;
  undefined4 *local_80;
  undefined4 ****local_7c;
  undefined4 *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd743;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_1;
  FUN_004b88b0((undefined1 *)local_74,param_1);
  local_8 = 0;
  FUN_004b88b0((undefined1 *)local_5c,param_1);
  local_8._0_1_ = 1;
  FUN_004b88b0((undefined1 *)local_44,param_1);
  pcVar10 = fread_exref;
  local_8._0_1_ = 2;
  fread(&local_b4,8,1,param_1);
  uVar13 = 0;
  fread(&local_ac,8,1,param_1);
  fread(&local_a0,4,1,param_1);
  uStack_108 = 0x4c72d1;
  fread(&local_85,1,1,param_1);
  local_78 = (undefined4 *)&stack0xffffff24;
  pbVar12 = (byte *)0x0;
  pvVar14 = (void *)(uVar13 & 0xffffff00);
  FUN_00402690(&stack0xffffff24,&PTR_005ce008,0);
  local_8._0_1_ = 3;
  local_7c = (undefined4 ****)&stack0xffffff0c;
  FUN_004024e0(&stack0xffffff0c,local_74);
  local_84 = &pppuStack_10c;
  local_8._0_1_ = 4;
  FUN_004024e0(&pppuStack_10c,local_44);
  local_8._0_1_ = 5;
  FUN_004024e0(&stack0xfffffedc,local_5c);
  local_8._0_1_ = 2;
  puVar1 = FUN_0040e040(0,local_a0,in_stack_fffffedc);
  iVar9 = DAT_0065b5cc;
  local_80 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00591070("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
  }
  else {
    *(undefined8 *)(puVar1 + 10) = local_b4;
    *(undefined4 **)(iVar9 + 0xd0) = puVar1;
    *(undefined8 *)(puVar1 + 0xc) = local_ac;
    *(undefined1 *)(puVar1 + 0x57) = local_85;
    FUN_0050c090(puVar1,*(undefined1 **)(*(int *)(iVar9 + 0xd0) + 0x20));
    for (puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar2 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar2 = puVar2 + 1) {
      piVar8 = (int *)*puVar2;
      param_1 = local_8c;
      if (*piVar8 == puVar1[8]) goto LAB_004c73d9;
    }
    piVar8 = (int *)0x0;
LAB_004c73d9:
    *(int **)(DAT_0065b5cc + 0xd8) = piVar8;
    if (DAT_0065c280 == (undefined4 *)0x0) {
      local_78 = (undefined4 *)FUN_005adb0f(0x98);
      local_8._0_1_ = 6;
      DAT_0065c280 = FUN_0058f5d0(local_78);
      local_8._0_1_ = 2;
    }
    FUN_0058fc90((int)DAT_0065c280);
    fread(&local_90,4,1,param_1);
    if (0 < local_90) {
      local_84 = (undefined4 ****)(puVar1 + 0x53);
      iVar9 = 0;
      do {
        fread(&local_7c,4,1,param_1);
        pvVar14 = (void *)0x1;
        pbVar12 = &DAT_00000004;
        fread(&local_78,4,1,param_1);
        piVar8 = FUN_00420f40(local_84,(int *)&local_7c);
        iVar9 = iVar9 + 1;
        *piVar8 = (int)local_78;
        puVar1 = local_80;
      } while (iVar9 < local_90);
    }
    fread(&local_94,4,1,param_1);
    FUN_00511350((int)puVar1);
    local_7c = (undefined4 ****)0x0;
    puVar2 = puVar1;
    if (0 < local_94) {
      local_78 = puVar1 + 0x8a;
      do {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_8._0_1_ = 7;
        local_78 = puVar2;
        FUN_004b88b0(&stack0xffffff24,param_1);
        pppppuVar3 = FUN_004b6b90(puVar2,pvVar14);
        local_8._0_1_ = 2;
        local_84 = pppppuVar3;
        fread(pppppuVar3 + 8,4,1,param_1);
        pvVar14 = (void *)0x1;
        pbVar12 = &DAT_00000004;
        fread(pppppuVar3 + 9,4,1,param_1);
        fread(pppppuVar3 + 6,4,1,param_1);
        uStack_108 = 0x4c7518;
        fread(pppppuVar3 + 7,4,1,param_1);
        puVar2 = (undefined4 *)puVar1[0x8b];
        if ((undefined4 *)puVar1[0x8c] == puVar2) {
          FUN_004141e0(puVar1 + 0x8a,puVar2,&local_84);
        }
        else {
          *puVar2 = pppppuVar3;
          puVar1[0x8b] = puVar1[0x8b] + 4;
        }
        FUN_00591070("SAVEHANDLER","  Console damage loaded for: %s");
        local_7c = (undefined4 ****)((int)local_7c + 1);
        puVar2 = local_80;
        pcVar10 = fread_exref;
      } while ((int)local_7c < local_94);
    }
    (*pcVar10)();
    local_7c = (undefined4 *****)0x0;
    if (0 < local_98) {
      do {
        iVar9 = -1;
        puVar4 = (undefined1 *)FUN_004c61b0(param_1);
        FUN_00521d10((void *)puVar2[0x10],puVar4,iVar9);
        local_7c = (undefined4 ****)((int)local_7c + 1);
      } while ((int)local_7c < local_98);
    }
    if (*(int *)(puVar2[9] + 0x118) == 2) {
      *(undefined1 *)(puVar2[0x10] + 0x34) = 0;
    }
    else {
      *(undefined1 *)(puVar2[0x10] + 0x34) = 1;
    }
    local_78 = (undefined4 *)FUN_004a6be0(puVar2[8],(int)puVar2,'\0');
    if (local_78 == (undefined4 *)0x0) {
      (**(code **)(*(int *)puVar2[0x5e] + 4))();
      puVar2[0x5e] = 0;
      puVar2[0x3e] = 0;
      puVar2[0x35] = 0;
      puVar2[0xb0] = 0;
      puVar2[0xb1] = 0;
    }
    else {
      FUN_00511950(puVar2,local_78,'\0','\0');
      iVar9 = puVar2[0x5e];
      if (iVar9 != 0) {
        puVar1 = (undefined4 *)(iVar9 + 8);
        iVar5 = FUN_004127d0();
        if ((undefined4 *)(iVar5 + 0x14) != puVar1) {
          if (0xf < *(uint *)(iVar9 + 0x1c)) {
            puVar1 = (undefined4 *)*puVar1;
          }
          FUN_00402690((undefined4 *)(iVar5 + 0x14),puVar1,*(uint *)(iVar9 + 0x18));
        }
        FUN_00591e00((undefined1 *)local_2c,"aboard_%s");
        local_8._0_1_ = 8;
        local_84 = local_2c;
        if (0xf < local_18) {
          local_84 = local_2c[0];
        }
        pppppuVar3 = local_2c;
        if (0xf < local_18) {
          pppppuVar3 = (undefined4 *****)local_2c[0];
        }
        iVar5 = 0;
        iVar9 = (local_1c + (int)local_84) - (int)pppppuVar3;
        if ((undefined4 *****)(local_1c + (int)local_84) < pppppuVar3) {
          iVar9 = 0;
        }
        local_7c = pppppuVar3;
        if (iVar9 != 0) {
          do {
            iVar6 = tolower((int)*(char *)(iVar5 + (int)pppppuVar3));
            *(char *)(iVar5 + (int)local_84) = (char)iVar6;
            iVar5 = iVar5 + 1;
            puVar2 = local_80;
            param_1 = local_8c;
          } while (iVar5 != iVar9);
        }
        local_8c = (FILE *)&stack0xffffff20;
        FUN_004024e0(&stack0xffffff20,local_2c);
        local_8._0_1_ = 9;
        puVar1 = DAT_0065c274;
        if (DAT_0065c274 == (undefined4 *)0x0) {
          local_78 = (undefined4 *)FUN_005adb0f(0x30);
          *local_78 = 0;
          local_78[1] = 0;
          local_78[2] = 0;
          pppppuVar3 = (undefined4 *****)(local_78 + 3);
          local_8._0_1_ = 0xb;
          *pppppuVar3 = (undefined4 ****)0x0;
          local_78[4] = 0;
          local_7c = pppppuVar3;
          ppppuVar7 = (undefined4 ****)FUN_004136c0();
          *pppppuVar3 = ppppuVar7;
          DAT_0065c274 = local_78;
          local_78[9] = 0;
          local_78[10] = 0xf;
          *(undefined1 *)(local_78 + 5) = 0;
          puVar1 = local_78;
        }
        local_8._0_1_ = 8;
        FUN_004a0ee0(puVar1,pbVar12);
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pppppuVar3 = (undefined4 *****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pppppuVar3 = (undefined4 *****)local_2c[0][-1],
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppuVar3)))) {
LAB_004c7787:
            local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppuVar3);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
        pcVar10 = fread_exref;
      }
    }
    iVar9 = DAT_0065b5cc;
    puVar2[0xde] = 0;
    iVar9 = *(int *)(*(int *)(*(int *)(iVar9 + 0xd0) + 0x40) + 0x20);
    if (iVar9 != 0) {
      local_8c = (FILE *)(iVar9 + 0x3c);
      local_7c = (undefined4 *****)0x8;
      do {
        local_78 = *(undefined4 **)local_8c;
        if (local_78 != (undefined4 *)0x0) {
          FUN_00494e20(local_78);
          FUN_005adb3f(local_78);
        }
        local_8c->_ptr = 0;
        local_8c = (FILE *)((int)local_8c + 4);
        local_7c = (undefined4 ****)((int)local_7c + -1);
      } while ((undefined4 *****)local_7c != (undefined4 *****)0x0);
    }
    (*pcVar10)();
    local_80 = (undefined4 *)0x0;
    if (0 < local_9c) {
      do {
        (*pcVar10)();
        if (local_86 != '\0') {
          FUN_004b88b0((undefined1 *)local_2c,param_1);
          local_8._0_1_ = 0xc;
          puVar1 = local_80;
          FUN_004024e0(&stack0xffffff20,local_2c);
          iVar9 = FUN_004a8180(pbVar12);
          FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),iVar9,(uint)puVar1);
          FUN_00591070("SAVEHANDLER","Loaded weapon of class %s into player ship");
          local_8._0_1_ = 2;
          if (0xf < local_18) {
            pppppuVar3 = (undefined4 *****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pppppuVar3 = (undefined4 *****)local_2c[0][-1],
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppuVar3)))) goto LAB_004c7787;
            FUN_005adb3f(pppppuVar3);
          }
        }
        local_80 = (undefined4 *)((int)local_80 + 1);
      } while ((int)local_80 < local_9c);
    }
    iVar9 = DAT_0065b5cc;
    puVar2[0x19] = 1;
    *(undefined1 *)(puVar2 + 0x8d) = 1;
    *(undefined4 **)(iVar9 + 0xd0) = puVar2;
    DAT_0065b3d4 = (undefined4 *)puVar2[0x5e];
    if (DAT_0065b3d4 != (undefined4 *)0x0) {
      bVar11 = false;
      if (DAT_0065b3d4[0x95] != 0) {
        bVar11 = *(int *)(DAT_0065b3d4[0x95] + 0x158) == 1;
      }
      if (bVar11) goto LAB_004c7989;
    }
    DAT_0065b3d4 = puVar2;
  }
LAB_004c7989:
  if (0xf < local_30) {
    pvVar14 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar14 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pvVar14 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar14 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar14 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar14 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004c7a70(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  FILE *pFVar14;
  char *pcVar15;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  FILE *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  int local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bce00;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_54 = param_1;
  FUN_004bbbf0(param_1);
  local_50 = fread_exref;
  fread(&local_44,4,1,param_1);
  *(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) = local_44;
  FUN_004c8470(param_1);
  fread(&_DstBuf_0065b3ec,4,1,param_1);
  fread(&_DstBuf_0065b3dc,4,1,param_1);
  iVar11 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(iVar11 + 0xd0) + 0x1a8) = 0xffffffff;
  FUN_004b9780(param_1);
  FUN_004c8030(param_1);
  FUN_004c6a20(param_1);
  FUN_0040fa20();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,param_1);
  iVar11 = 0;
  if (0 < (int)local_40) {
    do {
      local_44 = FUN_004bcb30(param_1);
      iVar5 = DAT_0065b5cc;
      if (local_44 != 0) {
        piVar1 = *(int **)(DAT_0065b5cc + 0x134);
        if (*(int **)(DAT_0065b5cc + 0x138) == piVar1) {
          FUN_00414080((void *)(DAT_0065b5cc + 0x130),piVar1,&local_44);
        }
        else {
          *piVar1 = local_44;
          *(int *)(iVar5 + 0x134) = *(int *)(iVar5 + 0x134) + 4;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current bounties for the player");
  pvVar6 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if (pvVar6 != (void *)0x0) {
    FUN_004b9460(pvVar6);
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = 0;
  }
  pvVar6 = FUN_004c2690(param_1);
  *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) = pvVar6;
  FUN_004bac60(param_1);
  FUN_004b9bb0(param_1);
  iVar11 = DAT_0065b5cc;
  FUN_004028b0(*(int **)(DAT_0065b5cc + 0x148),*(int **)(DAT_0065b5cc + 0x14c));
  *(undefined4 *)(iVar11 + 0x14c) = *(undefined4 *)(iVar11 + 0x148);
  (*local_50)(&local_40,4,1,param_1);
  iVar11 = 0;
  if (0 < (int)local_40) {
    do {
      piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      iVar5 = DAT_0065b5cc;
      local_14 = 0;
      piVar1 = *(int **)(DAT_0065b5cc + 0x14c);
      if (*(int **)(DAT_0065b5cc + 0x150) == piVar1) {
        FUN_004036d0((void *)(DAT_0065b5cc + 0x148),piVar1,piVar7);
      }
      else {
        piVar1[4] = 0;
        piVar1[5] = 0;
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        *piVar1 = *piVar7;
        piVar1[1] = iVar2;
        piVar1[2] = iVar3;
        piVar1[3] = iVar4;
        iVar2 = piVar7[5];
        piVar1[4] = piVar7[4];
        piVar1[5] = iVar2;
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
        *(int *)(iVar5 + 0x14c) = *(int *)(iVar5 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) goto LAB_004c7fe0;
        FUN_005adb3f(pvVar6);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_40);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed synthetics");
  iVar5 = DAT_0065b444;
  local_14 = 1;
  iVar11 = *(int *)(DAT_0065b444 + 0x48);
  FUN_004132d0(*(int **)(iVar11 + 4));
  pcVar12 = local_50;
  pFVar14 = local_54;
  *(int *)(*(int *)(iVar5 + 0x48) + 4) = iVar11;
  **(int **)(iVar5 + 0x48) = iVar11;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(iVar5 + 0x48) + 8) = iVar11;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  (*local_50)(&local_44,4,1,local_54);
  local_4c = 0;
  if (0 < local_44) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar14);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar12)(&local_40,4,1,pFVar14);
      pbVar8 = FUN_00412f20((void *)(DAT_0065b444 + 0x48),(byte *)local_3c);
      *(undefined4 **)pbVar8 = local_40;
      FUN_00591070("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) {
LAB_004c7fe0:
          local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_4c = local_4c + 1;
    } while (local_4c < local_44);
  }
  FUN_00591070("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar12)(&local_4c,4,1,pFVar14);
  local_44 = 0;
  if (0 < local_4c) {
    do {
      (*pcVar12)(&local_58,4,1,pFVar14);
      (*pcVar12)(&local_45,1,1,pFVar14);
      (*pcVar12)(&local_5c,4,1,pFVar14);
      (*pcVar12)(&local_60,4,1,pFVar14);
      (*pcVar12)(&local_64,4,1,pFVar14);
      if (DAT_0065c290 == (int *)0x0) {
        DAT_0065c290 = (int *)FUN_005adb0f(0x18);
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
        *DAT_0065c290 = 0;
        DAT_0065c290[1] = 0;
        DAT_0065c290[2] = 0;
        DAT_0065c290[3] = 0;
        DAT_0065c290[4] = 0;
        DAT_0065c290[5] = 0;
      }
      uVar9 = 0;
      uVar13 = DAT_0065c290[1] - *DAT_0065c290 >> 2;
      if (uVar13 != 0) {
        local_40 = (undefined4 *)*DAT_0065c290;
        puVar10 = local_40;
        do {
          pFVar14 = local_54;
          if (*(int *)*puVar10 == local_58) {
            iVar11 = local_40[uVar9];
            if (iVar11 != 0) {
              *(undefined1 *)(iVar11 + 0xe0) = local_45;
              *(undefined4 *)(iVar11 + 0xd8) = local_5c;
              *(undefined4 *)(iVar11 + 0xd4) = local_60;
              *(undefined4 *)(iVar11 + 0xd0) = local_64;
              pcVar15 = "..faction %s loaded";
              goto LAB_004c7f7d;
            }
            break;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 < uVar13);
      }
      pcVar15 = "Invalid faction \'%d\' loaded";
LAB_004c7f7d:
      FUN_00591070("SAVEHANDLER",pcVar15);
      local_44 = local_44 + 1;
      pcVar12 = local_50;
    } while (local_44 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d faction states");
  FUN_004bbde0(pFVar14);
  FUN_004bfe80(pFVar14);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
