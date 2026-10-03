#include "../ois_server.exe.h"


void __fastcall FUN_004c03f0(FILE *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_stack_ffffffcc;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_2;
  FUN_004024e0(&stack0xffffffcc,(undefined4 *)(*(int *)(param_2 + 8) + 0x50));
  FUN_004b8810(param_1,in_stack_ffffffcc);
  iVar2 = 0;
  do {
    local_c = 0xffffffff;
    local_10 = 0;
    iVar1 = *(int *)(*(int *)(local_8 + 0xc) + 4 + iVar2);
    if (iVar1 != 0) {
      local_c = **(undefined4 **)(iVar1 + 4);
      local_10 = **(undefined4 **)(*(int *)(local_8 + 0xc) + 4 + iVar2);
    }
    fwrite(&local_c,4,1,param_1);
    fwrite(&local_10,4,1,param_1);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x50);
  iVar2 = 0x54;
  do {
    local_10 = 0xffffffff;
    local_c = 0;
    iVar1 = *(int *)(*(int *)(local_8 + 0xc) + iVar2);
    if (iVar1 != 0) {
      local_10 = **(undefined4 **)(iVar1 + 4);
      local_c = **(undefined4 **)(*(int *)(local_8 + 0xc) + iVar2);
    }
    fwrite(&local_10,4,1,param_1);
    fwrite(&local_c,4,1,param_1);
    iVar1 = local_8;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0xa4);
  fwrite((void *)(local_8 + 99),1,1,param_1);
  fwrite((void *)(iVar1 + 0x68),4,1,param_1);
  fwrite((void *)(iVar1 + 0x10),4,1,param_1);
  fwrite((void *)(iVar1 + 0x14),1,1,param_1);
  fwrite((void *)(iVar1 + 0x1c),1,1,param_1);
  fwrite((void *)(iVar1 + 100),4,1,param_1);
  iVar2 = 0;
  do {
    fwrite((void *)(local_8 + 0x1e + iVar2),1,1,param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


void __fastcall FUN_004c0540(FILE *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  code *pcVar10;
  byte *in_stack_ffffff8c;
  void *local_3c;
  void *local_38;
  void *local_34;
  undefined4 *local_30;
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
  FUN_004b88b0((undefined1 *)local_2c,param_1);
  local_8 = 0;
  FUN_004024e0(&stack0xffffff8c,local_2c);
  iVar3 = FUN_004a8020(in_stack_ffffff8c);
  if (iVar3 == 0) {
    FUN_00591070("ERROR","Invalid module in save file.");
    bVar2 = cc_assert_script_compatible("Invalid module in save file.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  else {
    local_38 = (void *)FUN_005adb0f(0x88);
    local_8._0_1_ = 1;
    local_30 = FUN_004adec0(local_38,iVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    iVar3 = 0;
    pcVar10 = fread_exref;
    do {
      (*pcVar10)();
      (*pcVar10)(&local_38,4);
      if (local_34 != (void *)0xffffffff) {
        puVar4 = (undefined4 *)FUN_005adb0f(8);
        piVar1 = DAT_0065b5cc;
        local_3c = local_34;
        *puVar4 = 0x42c80000;
        pcVar10 = fread_exref;
        uVar6 = 0;
        uVar9 = piVar1[1] - *piVar1 >> 2;
        if (uVar9 != 0) {
          puVar8 = (undefined4 *)*piVar1;
          do {
            if (*(void **)*puVar8 == local_34) {
              uVar5 = ((undefined4 *)*piVar1)[uVar6];
              goto LAB_004c066f;
            }
            uVar6 = uVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar9);
        }
        uVar5 = 0;
LAB_004c066f:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar3 + 4 + local_30[3]) = puVar4;
        **(undefined4 **)(iVar3 + 4 + local_30[3]) = local_38;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x50);
    iVar3 = 0x54;
    do {
      (*pcVar10)();
      (*pcVar10)(&local_3c,4);
      if (local_34 != (void *)0xffffffff) {
        puVar4 = (undefined4 *)FUN_005adb0f(8);
        piVar1 = DAT_0065b5cc;
        local_38 = local_34;
        *puVar4 = 0x42c80000;
        pcVar10 = fread_exref;
        uVar6 = 0;
        uVar9 = piVar1[1] - *piVar1 >> 2;
        if (uVar9 != 0) {
          puVar8 = (undefined4 *)*piVar1;
          do {
            if (*(void **)*puVar8 == local_34) {
              uVar5 = ((undefined4 *)*piVar1)[uVar6];
              goto LAB_004c0716;
            }
            uVar6 = uVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar9);
        }
        uVar5 = 0;
LAB_004c0716:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar3 + local_30[3]) = puVar4;
        **(undefined4 **)(iVar3 + local_30[3]) = local_3c;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xa4);
    (*pcVar10)();
    puVar4 = local_30;
    (*pcVar10)(local_30 + 0x1a,4);
    (*pcVar10)(puVar4 + 4,4,1,param_1);
    (*pcVar10)(puVar4 + 5,1,1,param_1);
    (*pcVar10)();
    (*pcVar10)(puVar4 + 0x19,4);
    iVar3 = 0;
    do {
      fread((void *)((int)local_30 + iVar3 + 0x1e),1,1,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    FUN_00591070("DETAIL","Loaded module of type \'%s\'");
  }
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004c0850(FILE *param_1)

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
  FUN_004c2910(param_1);
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
  FUN_004c1e50(param_1);
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
      local_44 = (undefined1 *)FUN_004c1a90(param_1);
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
  FUN_004c0ef0(param_1);
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) goto LAB_004c0eb0;
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
LAB_004c0eb0:
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
              goto LAB_004c0e5a;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar11 < uVar14);
      }
      FUN_00591070("SAVEHANDLER","Invalid faction \'%d\' loaded");
LAB_004c0e5a:
      local_44 = local_44 + 1;
      pcVar13 = local_50;
    } while ((int)local_44 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d faction states");
  FUN_004c18c0(pFVar15);
  FUN_004bfe80(pFVar15);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c0ef0(FILE *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  FILE *pFVar8;
  code *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  void *local_68;
  int local_64;
  int *local_60;
  FILE *local_5c;
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
  puStack_18 = &LAB_005bd440;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_5c = param_1;
  iVar3 = FUN_00412700();
  FUN_004399f0(iVar3);
  FUN_004b3980(*(uint **)(DAT_0065b5cc + 300));
  pcVar9 = fread_exref;
  local_58 = 0;
  fread(&local_58,4,1,param_1);
  FUN_00591070("SAVEHANDLER","Loading %d emails...");
  local_64 = 0;
  if (0 < local_58) {
    do {
      local_60 = (int *)FUN_005adb0f(0xa0);
      pvVar4 = (void *)FUN_004398a0((int)local_60);
      local_68 = pvVar4;
      fread(pvVar4,4,1,param_1);
      piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
      if ((int *)((int)pvVar4 + 4) != piVar5) {
        FUN_00401b20((int *)((int)pvVar4 + 4));
        iVar3 = piVar5[1];
        iVar6 = piVar5[2];
        iVar2 = piVar5[3];
        *(int *)((int)pvVar4 + 4) = *piVar5;
        *(int *)((int)pvVar4 + 8) = iVar3;
        *(int *)((int)pvVar4 + 0xc) = iVar6;
        *(int *)((int)pvVar4 + 0x10) = iVar2;
        iVar3 = piVar5[5];
        *(int *)((int)pvVar4 + 0x14) = piVar5[4];
        *(int *)((int)pvVar4 + 0x18) = iVar3;
        piVar5[4] = 0;
        piVar5[5] = 0xf;
        *(undefined1 *)piVar5 = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar7);
      }
      piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,local_5c);
      if ((int *)((int)pvVar4 + 0x68) != piVar5) {
        FUN_00401b20((int *)((int)pvVar4 + 0x68));
        iVar3 = piVar5[1];
        iVar6 = piVar5[2];
        iVar2 = piVar5[3];
        *(int *)((int)pvVar4 + 0x68) = *piVar5;
        *(int *)((int)pvVar4 + 0x6c) = iVar3;
        *(int *)((int)pvVar4 + 0x70) = iVar6;
        *(int *)((int)pvVar4 + 0x74) = iVar2;
        iVar3 = piVar5[5];
        *(int *)((int)pvVar4 + 0x78) = piVar5[4];
        *(int *)((int)pvVar4 + 0x7c) = iVar3;
        piVar5[4] = 0;
        piVar5[5] = 0xf;
        *(undefined1 *)piVar5 = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar7);
      }
      local_60 = (int *)FUN_004b88b0((undefined1 *)local_3c,local_5c);
      piVar5 = (int *)((int)pvVar4 + 0x1c);
      if (piVar5 != local_60) {
        FUN_00401b20(piVar5);
        iVar3 = local_60[1];
        iVar6 = local_60[2];
        iVar2 = local_60[3];
        *piVar5 = *local_60;
        *(int *)((int)pvVar4 + 0x20) = iVar3;
        *(int *)((int)pvVar4 + 0x24) = iVar6;
        *(int *)((int)pvVar4 + 0x28) = iVar2;
        iVar3 = local_60[5];
        *(int *)((int)pvVar4 + 0x2c) = local_60[4];
        *(int *)((int)pvVar4 + 0x30) = iVar3;
        local_60[4] = 0;
        local_60[5] = 0xf;
        *(undefined1 *)local_60 = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar7);
      }
      if ((int *)((int)pvVar4 + 0x4c) != piVar5) {
        if (0xf < *(uint *)((int)pvVar4 + 0x30)) {
          piVar5 = (int *)*piVar5;
        }
        FUN_00402690((int *)((int)pvVar4 + 0x4c),piVar5,*(uint *)((int)pvVar4 + 0x2c));
      }
      piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,local_5c);
      if ((int *)((int)pvVar4 + 0x34) != piVar5) {
        FUN_00401b20((int *)((int)pvVar4 + 0x34));
        iVar3 = piVar5[1];
        iVar6 = piVar5[2];
        iVar2 = piVar5[3];
        *(int *)((int)pvVar4 + 0x34) = *piVar5;
        *(int *)((int)pvVar4 + 0x38) = iVar3;
        *(int *)((int)pvVar4 + 0x3c) = iVar6;
        *(int *)((int)pvVar4 + 0x40) = iVar2;
        iVar3 = piVar5[5];
        *(int *)((int)pvVar4 + 0x44) = piVar5[4];
        *(int *)((int)pvVar4 + 0x48) = iVar3;
        piVar5[4] = 0;
        piVar5[5] = 0xf;
        *(undefined1 *)piVar5 = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar7);
      }
      piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,local_5c);
      if ((int *)((int)pvVar4 + 0x80) != piVar5) {
        FUN_00401b20((int *)((int)pvVar4 + 0x80));
        iVar3 = piVar5[1];
        iVar6 = piVar5[2];
        iVar2 = piVar5[3];
        *(int *)((int)pvVar4 + 0x80) = *piVar5;
        *(int *)((int)pvVar4 + 0x84) = iVar3;
        *(int *)((int)pvVar4 + 0x88) = iVar6;
        *(int *)((int)pvVar4 + 0x8c) = iVar2;
        iVar3 = piVar5[5];
        *(int *)((int)pvVar4 + 0x90) = piVar5[4];
        *(int *)((int)pvVar4 + 0x94) = iVar3;
        piVar5[4] = 0;
        piVar5[5] = 0xf;
        *(undefined1 *)piVar5 = 0;
      }
      if (0xf < local_28) {
        pvVar7 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar7 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar7);
      }
      param_1 = local_5c;
      fread((void *)((int)pvVar4 + 0x98),4,1,local_5c);
      pbVar10 = (byte *)0x1;
      fread((void *)((int)pvVar4 + 100),1,1,param_1);
      fread((void *)((int)pvVar4 + 0x9c),1,1,param_1);
      pvVar7 = *(void **)(DAT_0065b5cc + 300);
      puVar1 = *(undefined4 **)((int)pvVar7 + 4);
      if (*(undefined4 **)((int)pvVar7 + 8) == puVar1) {
        FUN_00414080(pvVar7,puVar1,&local_68);
        pvVar4 = local_68;
      }
      else {
        *puVar1 = pvVar4;
        *(int *)((int)pvVar7 + 4) = *(int *)((int)pvVar7 + 4) + 4;
      }
      local_60 = (int *)&stack0xffffff74;
      FUN_004024e0(&stack0xffffff74,(undefined4 *)((int)pvVar4 + 0x80));
      local_14 = 0;
      piVar5 = DAT_0065c270;
      if (DAT_0065c270 == (int *)0x0) {
        piVar5 = (int *)FUN_005adb0f(0x2c);
        DAT_0065c270 = piVar5;
        *(undefined1 *)piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5[9] = 0;
        piVar5[10] = 0;
        local_60 = piVar5;
      }
      local_14 = 0xffffffff;
      FUN_00439be0(piVar5,pbVar10);
      FUN_00591070("SAVEHANDLER"," - Loaded: \'%s\'");
      local_64 = local_64 + 1;
      pcVar9 = fread_exref;
    } while (local_64 < local_58);
  }
  (*pcVar9)();
  FUN_00591070("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar3 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,local_5c);
      local_14 = 1;
      pbVar10 = FUN_004a2bf0((void *)(*(int *)(DAT_0065b5cc + 300) + 0xc),(byte *)local_3c);
      *pbVar10 = 1;
      FUN_00591070("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_58);
  }
  pFVar8 = local_5c;
  (*pcVar9)();
  FUN_00591070("SAVEHANDLER","Loading %d \'drafts sent\'...");
  iVar3 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar8);
      local_14 = 2;
      iVar6 = *(int *)(DAT_0065b5cc + 300);
      piVar5 = *(int **)(iVar6 + 0x24);
      if (*(int **)(iVar6 + 0x28) == piVar5) {
        FUN_00403840((void *)(iVar6 + 0x20),piVar5,local_3c);
      }
      else {
        FUN_004024e0(piVar5,local_3c);
        *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 0x18;
      }
      FUN_00591070("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar4);
      }
      iVar3 = iVar3 + 1;
      pFVar8 = local_5c;
    } while (iVar3 < local_58);
  }
  pFVar8 = local_5c;
  fread(&local_58,4,1,local_5c);
  pcVar11 = "Loading %d \'articles downloaded\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_64 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar8);
      local_14 = 3;
      iVar3 = *(int *)(DAT_0065b5cc + 300);
      piVar5 = *(int **)(iVar3 + 0x18);
      if (*(int **)(iVar3 + 0x1c) == piVar5) {
        FUN_00403840((void *)(iVar3 + 0x14),piVar5,local_3c);
      }
      else {
        FUN_004024e0(piVar5,local_3c);
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 0x18;
      }
      FUN_004024e0(&stack0xffffff74,local_3c);
      iVar3 = FUN_004b4a70(*(void **)(DAT_0065b444 + 0xc),(byte *)pcVar11);
      if (iVar3 == 0) {
        pcVar12 = "Invalid article \'%s\' to download, ignoring.";
      }
      else {
        *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(iVar3 + 0x88);
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x8c);
        *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar3 + 0x90);
        *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x94);
        *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar3 + 0x98);
        *(undefined4 *)(iVar3 + 0xb4) = *(undefined4 *)(iVar3 + 0x9c);
        pcVar12 = "Loaded article downloaded \'%s\'";
      }
      FUN_00591070("SAVEHANDLER",pcVar12);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar4);
      }
      local_64 = local_64 + 1;
    } while (local_64 < local_58);
  }
  fread(&local_58,4,1,pFVar8);
  pcVar11 = "Loading %d \'sent emails\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar3 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_3c,pFVar8);
      local_60 = (int *)&stack0xffffff74;
      local_14 = 4;
      FUN_004024e0(&stack0xffffff74,local_3c);
      local_14._0_1_ = 5;
      piVar5 = DAT_0065c270;
      if (DAT_0065c270 == (int *)0x0) {
        piVar5 = (int *)FUN_005adb0f(0x2c);
        DAT_0065c270 = piVar5;
        *(undefined1 *)piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5[9] = 0;
        piVar5[10] = 0;
        local_60 = piVar5;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      iVar6 = FUN_00439a90(piVar5,(byte *)pcVar11);
      if (iVar6 == 0) {
        FUN_00591070("ERROR","ERROR: invalid email loaded.");
      }
      else {
        *(undefined2 *)(iVar6 + 100) = 0x100;
        *(undefined4 *)(iVar6 + 0x98) = 0;
        FUN_00591070("SAVEHANDLER","Email \'%s\' marked as sent");
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c1455;
        FUN_005adb3f(pvVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_58);
  }
  fread(&local_58,4,1,pFVar8);
  pcVar11 = "Loading %d \'ready to fire emails\'...";
  FUN_00591070("SAVEHANDLER","Loading %d \'ready to fire emails\'...");
  iVar3 = 0;
  if (0 < local_58) {
    do {
      FUN_004b88b0((undefined1 *)local_54,pFVar8);
      local_60 = (int *)&stack0xffffff74;
      local_14 = 6;
      FUN_004024e0(&stack0xffffff74,local_54);
      local_14._0_1_ = 7;
      piVar5 = DAT_0065c270;
      if (DAT_0065c270 == (int *)0x0) {
        piVar5 = (int *)FUN_005adb0f(0x2c);
        DAT_0065c270 = piVar5;
        *(undefined1 *)piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5[9] = 0;
        piVar5[10] = 0;
        local_60 = piVar5;
      }
      local_14 = CONCAT31(local_14._1_3_,6);
      iVar6 = FUN_00439a90(piVar5,(byte *)pcVar11);
      if (iVar6 == 0) {
        FUN_00591070("ERROR","ERROR: invalid email loaded.");
      }
      else {
        *(undefined2 *)(iVar6 + 100) = 1;
        *(undefined4 *)(iVar6 + 0x98) = 0;
        FUN_00591070("SAVEHANDLER","Email \'%s\' marked as ready to fire");
      }
      local_14 = 0xffffffff;
      if (0xf < local_40) {
        pvVar4 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar4 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar4)))) {
LAB_004c1455:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_58);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c18c0(FILE *param_1)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  byte *in_stack_ffffff7c;
  int local_58;
  void *local_54 [4];
  undefined4 local_44;
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
  puStack_18 = &LAB_005bd0a8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_004a86f0();
  local_58 = 0;
  fread(&local_58,4,1,param_1);
  iVar4 = 0;
  if (0 < local_58) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar1 = (void **)FUN_004b88b0((undefined1 *)local_54,param_1);
      if (&local_3c != ppvVar1) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar1;
        pvStack_38 = ppvVar1[1];
        pvStack_34 = ppvVar1[2];
        pvStack_30 = ppvVar1[3];
        local_2c = ppvVar1[4];
        pvStack_28 = ppvVar1[5];
        ppvVar1[4] = (void *)0x0;
        ppvVar1[5] = (void *)0xf;
        *(undefined1 *)ppvVar1 = 0;
      }
      if (0xf < local_40) {
        pvVar3 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar3 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar3)))) goto LAB_004c1a50;
        FUN_005adb3f(pvVar3);
      }
      local_44 = 0;
      local_40 = 0xf;
      local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      FUN_004024e0(&stack0xffffff7c,&local_3c);
      iVar2 = FUN_004a8640(in_stack_ffffff7c);
      if (iVar2 != 0) {
        fread((void *)(iVar2 + 0x18),1,1,param_1);
        in_stack_ffffff7c = (byte *)0x1;
        fread((void *)(iVar2 + 0x19),1,1,param_1);
      }
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar3 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar3 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3)))) {
LAB_004c1a50:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_58);
  }
  FUN_00591070("SAVEHANDLER","..loaded %d game states");
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c1a90(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
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
  puStack_18 = &LAB_005bd12f;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  _Dst = (void *)FUN_005adb0f(0x54);
  memset(_Dst,0,0x54);
  *(undefined4 *)((int)_Dst + 0x14) = 0;
  piVar7 = (int *)((int)_Dst + 4);
  *(undefined4 *)((int)_Dst + 0x18) = 0xf;
  *(undefined1 *)piVar7 = 0;
  piVar8 = (int *)((int)_Dst + 0x1c);
  *(undefined4 *)((int)_Dst + 0x2c) = 0;
  *(undefined4 *)((int)_Dst + 0x30) = 0xf;
  *(undefined1 *)piVar8 = 0;
  piVar1 = (int *)((int)_Dst + 0x34);
  *(undefined4 *)((int)_Dst + 0x44) = 0;
  *(undefined4 *)((int)_Dst + 0x48) = 0xf;
  *(undefined1 *)piVar1 = 0;
  piVar6 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if (piVar7 != piVar6) {
    FUN_00401b20(piVar7);
    iVar2 = piVar6[1];
    iVar3 = piVar6[2];
    iVar4 = piVar6[3];
    *piVar7 = *piVar6;
    *(int *)((int)_Dst + 8) = iVar2;
    *(int *)((int)_Dst + 0xc) = iVar3;
    *(int *)((int)_Dst + 0x10) = iVar4;
    *(undefined8 *)((int)_Dst + 0x14) = *(undefined8 *)(piVar6 + 4);
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < local_28) {
    pvVar9 = local_3c[0];
    if (0xfff < local_28 + 1) {
      pvVar9 = *(void **)((int)local_3c[0] + -4);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if (piVar8 != piVar7) {
    FUN_00401b20(piVar8);
    iVar2 = piVar7[1];
    iVar3 = piVar7[2];
    iVar4 = piVar7[3];
    *piVar8 = *piVar7;
    *(int *)((int)_Dst + 0x20) = iVar2;
    *(int *)((int)_Dst + 0x24) = iVar3;
    *(int *)((int)_Dst + 0x28) = iVar4;
    *(undefined8 *)((int)_Dst + 0x2c) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar9 = local_3c[0];
    if (0xfff < local_28 + 1) {
      pvVar9 = *(void **)((int)local_3c[0] + -4);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if (piVar1 != piVar7) {
    FUN_00401b20(piVar1);
    iVar2 = piVar7[1];
    iVar3 = piVar7[2];
    iVar4 = piVar7[3];
    *piVar1 = *piVar7;
    *(int *)((int)_Dst + 0x38) = iVar2;
    *(int *)((int)_Dst + 0x3c) = iVar3;
    *(int *)((int)_Dst + 0x40) = iVar4;
    *(undefined8 *)((int)_Dst + 0x44) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar9 = local_3c[0];
    if (0xfff < local_28 + 1) {
      pvVar9 = *(void **)((int)local_3c[0] + -4);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  fread((void *)((int)_Dst + 0x50),4,1,param_1);
  fread(_Dst,4,1,param_1);
  piVar7 = (int *)FUN_005adb0f(0x6c);
  local_14 = 0;
  piVar7 = FUN_004821d0(piVar7);
  local_14 = 0xffffffff;
  *(int **)((int)_Dst + 0x4c) = piVar7;
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  iVar2 = *(int *)((int)_Dst + 0x4c);
  piVar8 = (int *)(iVar2 + 0x24);
  if (piVar8 != piVar7) {
    FUN_00401b20(piVar8);
    iVar3 = piVar7[1];
    iVar4 = piVar7[2];
    iVar5 = piVar7[3];
    *piVar8 = *piVar7;
    *(int *)(iVar2 + 0x28) = iVar3;
    *(int *)(iVar2 + 0x2c) = iVar4;
    *(int *)(iVar2 + 0x30) = iVar5;
    *(undefined8 *)(iVar2 + 0x34) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar9 = local_3c[0];
    if (0xfff < local_28 + 1) {
      pvVar9 = *(void **)((int)local_3c[0] + -4);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_54,param_1);
  iVar2 = *(int *)((int)_Dst + 0x4c);
  piVar8 = (int *)(iVar2 + 0x3c);
  if (piVar8 != piVar7) {
    FUN_00401b20(piVar8);
    iVar3 = piVar7[1];
    iVar4 = piVar7[2];
    iVar5 = piVar7[3];
    *piVar8 = *piVar7;
    *(int *)(iVar2 + 0x40) = iVar3;
    *(int *)(iVar2 + 0x44) = iVar4;
    *(int *)(iVar2 + 0x48) = iVar5;
    *(undefined8 *)(iVar2 + 0x4c) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_40) {
    pvVar9 = local_54[0];
    if (0xfff < local_40 + 1) {
      pvVar9 = *(void **)((int)local_54[0] + -4);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar9);
  }
  fread((void *)(*(int *)((int)_Dst + 0x4c) + 0x1c),4,1,param_1);
  fread(*(void **)((int)_Dst + 0x4c),4,1,param_1);
  fread((void *)(*(int *)((int)_Dst + 0x4c) + 0x18),4,1,param_1);
  fread((void *)(*(int *)((int)_Dst + 0x4c) + 0x20),4,1,param_1);
  fread((void *)(*(int *)((int)_Dst + 0x4c) + 4),1,1,param_1);
  fread((void *)(*(int *)((int)_Dst + 0x4c) + 8),4,1,param_1);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c1e50(FILE *param_1)

{
  uint *puVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *in_stack_ffffff6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
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
  local_64 = 0;
  fread(&local_64,4,1,param_1);
  local_68 = 0;
  if (0 < local_64) {
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
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6)))) goto LAB_004c2219;
        FUN_005adb3f(pvVar6);
      }
      FUN_004024e0(&stack0xffffff6c,&local_3c);
      iVar3 = FUN_004a7100(in_stack_ffffff6c);
      local_60 = iVar3;
      FUN_00591070("SAVEHANDLER","...loading trade data for platform %s");
      if (iVar3 == 0) {
        FUN_00591070("ERROR","ERROR: No valid space station with this rego.");
        if ((void *)0xf < pvStack_28) {
          pvVar6 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar6 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6)))) {
LAB_004c2219:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar6);
        }
        goto LAB_004c21c3;
      }
      iVar3 = *(int *)(iVar3 + 0x398);
      uVar8 = 0;
      puVar7 = *(undefined4 **)(iVar3 + 0x94);
      uVar5 = (uint)((int)*(undefined4 **)(iVar3 + 0x98) + (3 - (int)puVar7)) >> 2;
      if (*(undefined4 **)(iVar3 + 0x98) < puVar7) {
        uVar5 = 0;
      }
      local_5c = uVar5;
      if (uVar5 != 0) {
        do {
          if ((int *)*puVar7 != (int *)0x0) {
            FUN_0040fae0((int *)*puVar7);
            uVar5 = local_5c;
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 != uVar5);
      }
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar3 + 0x94);
      local_58 = 0;
      fread(&local_58,4,1,param_1);
      iVar3 = 0;
      if (0 < local_58) {
        do {
          local_5c = FUN_004c2230(param_1);
          iVar4 = *(int *)(local_60 + 0x398);
          puVar1 = *(uint **)(iVar4 + 0x98);
          if (*(uint **)(iVar4 + 0x9c) == puVar1) {
            FUN_004141e0((void *)(iVar4 + 0x94),puVar1,&local_5c);
          }
          else {
            *puVar1 = local_5c;
            *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + 4;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d contracts for platform");
      FUN_0049cfc0(*(void **)(local_60 + 0x398),'\0');
      fread(&local_58,4,1,param_1);
      iVar3 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(param_1);
          FUN_0049c510(*(void **)(local_60 + 0x398),iVar4,(undefined4 *)0x0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d trade item instances for platform");
      uVar5 = 0;
      iVar3 = *(int *)(local_60 + 0x398);
      if (*(int *)(iVar3 + 0x8c) - *(int *)(iVar3 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x88) + uVar5 * 4) + 0x10) = 0;
          iVar4 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x88) + iVar4) + 0x30) = 0xffffffff;
        } while (uVar5 < (uint)(*(int *)(iVar3 + 0x8c) - *(int *)(iVar3 + 0x88) >> 2));
      }
      fread(&local_58,4,1,param_1);
      iVar3 = 0;
      if (0 < local_58) {
        do {
          iVar4 = FUN_004bddf0(param_1);
          FUN_0049c510(*(void **)(local_60 + 0x398),iVar4,(undefined4 *)0x1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_58);
      }
      FUN_00591070("SAVEHANDLER","...loading %d wire item instances for platform");
      local_14 = 0xffffffff;
      if ((void *)0xf < pvStack_28) {
        pvVar6 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar6 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6)))) goto LAB_004c2219;
        FUN_005adb3f(pvVar6);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_64);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c21c3:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004c2230(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  void *pvVar10;
  byte *in_stack_ffffff7c;
  void *local_54 [5];
  uint local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bd1e0;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puVar5 = (undefined1 *)FUN_005adb0f(0x5c);
  piVar9 = (int *)(puVar5 + 0x38);
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(undefined4 *)(puVar5 + 0x14) = 0xf;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 0x18) = 0xbf800000;
  *(undefined4 *)(puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 0x30) = 0;
  *(undefined4 *)(puVar5 + 0x34) = 0xf;
  puVar5[0x20] = 0;
  *(undefined4 *)(puVar5 + 0x48) = 0;
  *(undefined4 *)(puVar5 + 0x4c) = 0xf;
  *(undefined1 *)piVar9 = 0;
  *(undefined4 *)(puVar5 + 0x50) = 0;
  *(undefined4 *)(puVar5 + 0x54) = 0;
  *(undefined4 *)(puVar5 + 0x58) = 0;
  FUN_004b88b0((undefined1 *)local_54,param_1);
  local_14 = 0;
  FUN_004024e0(&stack0xffffff7c,local_54);
  local_14._0_1_ = 1;
  if (DAT_0065c28c == 0) {
    DAT_0065c28c = FUN_005adb0f(1);
  }
  local_14 = (uint)local_14._1_3_ << 8;
  uVar6 = FUN_00484720(in_stack_ffffff7c);
  *(undefined4 *)(puVar5 + 0x54) = uVar6;
  fread(puVar5 + 0x18,4,1,param_1);
  fread(puVar5 + 0x1c,4,1,param_1);
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if ((int *)(puVar5 + 0x20) != piVar7) {
    FUN_00401b20((int *)(puVar5 + 0x20));
    iVar1 = piVar7[1];
    iVar2 = piVar7[2];
    iVar3 = piVar7[3];
    *(int *)(puVar5 + 0x20) = *piVar7;
    *(int *)(puVar5 + 0x24) = iVar1;
    *(int *)(puVar5 + 0x28) = iVar2;
    *(int *)(puVar5 + 0x2c) = iVar3;
    *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar10 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar10 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if (piVar9 != piVar7) {
    FUN_00401b20(piVar9);
    iVar1 = piVar7[1];
    iVar2 = piVar7[2];
    iVar3 = piVar7[3];
    *piVar9 = *piVar7;
    *(int *)(puVar5 + 0x3c) = iVar1;
    *(int *)(puVar5 + 0x40) = iVar2;
    *(int *)(puVar5 + 0x44) = iVar3;
    *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar10 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar10 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  puVar8 = (undefined1 *)FUN_005adb0f(0x48);
  *(undefined4 *)(puVar8 + 0x10) = 0;
  *(undefined4 *)(puVar8 + 0x14) = 0xf;
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 0x18) = 0;
  *(undefined4 *)(puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 0x20) = 0;
  *(undefined4 *)(puVar8 + 0x24) = 0;
  *(undefined4 *)(puVar8 + 0x28) = 0;
  *(undefined4 *)(puVar8 + 0x2c) = 0;
  *(undefined4 *)(puVar8 + 0x40) = 0;
  *(undefined4 *)(puVar8 + 0x44) = 0xf;
  puVar8[0x30] = 0;
  *(undefined1 **)(puVar5 + 0x58) = puVar8;
  fread(puVar8 + 0x18,4,1,param_1);
  fread((void *)(*(int *)(puVar5 + 0x58) + 0x1c),4,1,param_1);
  fread((void *)(*(int *)(puVar5 + 0x58) + 0x20),4,1,param_1);
  fread((void *)(*(int *)(puVar5 + 0x58) + 0x24),4,1,param_1);
  fread((void *)(*(int *)(puVar5 + 0x58) + 0x28),4,1,param_1);
  fread((void *)(*(int *)(puVar5 + 0x58) + 0x2c),4,1,param_1);
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  piVar9 = *(int **)(puVar5 + 0x58);
  if (piVar9 != piVar7) {
    FUN_00401b20(piVar9);
    iVar1 = piVar7[1];
    iVar2 = piVar7[2];
    iVar3 = piVar7[3];
    *piVar9 = *piVar7;
    piVar9[1] = iVar1;
    piVar9[2] = iVar2;
    piVar9[3] = iVar3;
    *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar10 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar10 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  piVar9 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
  iVar1 = *(int *)(puVar5 + 0x58);
  piVar7 = (int *)(iVar1 + 0x30);
  if (piVar7 != piVar9) {
    FUN_00401b20(piVar7);
    iVar2 = piVar9[1];
    iVar3 = piVar9[2];
    iVar4 = piVar9[3];
    *piVar7 = *piVar9;
    *(int *)(iVar1 + 0x34) = iVar2;
    *(int *)(iVar1 + 0x38) = iVar3;
    *(int *)(iVar1 + 0x3c) = iVar4;
    *(undefined8 *)(iVar1 + 0x40) = *(undefined8 *)(piVar9 + 4);
    piVar9[4] = 0;
    piVar9[5] = 0xf;
    *(undefined1 *)piVar9 = 0;
  }
  if (0xf < local_28) {
    pvVar10 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar10 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  FUN_00591070("SAVEHANDLER","...contract [%s -> %s, %s] loaded");
  if (0xf < local_40) {
    pvVar10 = local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pvVar10 = *(void **)((int)local_54[0] + -4),
       0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void * __fastcall FUN_004c2690(FILE *param_1)

{
  void *_DstBuf;
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  FILE *_File;
  int iVar8;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  FILE *local_18;
  int local_14;
  void *local_10;
  undefined4 *local_c;
  char local_6;
  char local_5;
  
  local_18 = param_1;
  local_10 = (void *)FUN_005adb0f(0x50);
  *(undefined4 *)((int)local_10 + 4) = 0x18;
  local_c = (undefined4 *)((int)local_10 + 0x44);
  piVar6 = (int *)((int)local_10 + 0xc);
  _DstBuf = (void *)((int)local_10 + 4);
  *(undefined4 *)((int)local_10 + 8) = 6;
  *local_c = 0;
  *(undefined4 *)((int)local_10 + 0x48) = 0;
  *(undefined4 *)((int)local_10 + 0x4c) = 0;
  piVar1 = DAT_0065b5cc;
  *piVar6 = 0;
  *(undefined4 *)((int)local_10 + 0x10) = 0;
  *(undefined4 *)((int)local_10 + 0x14) = 0;
  *(undefined4 *)((int)local_10 + 0x18) = 0;
  *(undefined4 *)((int)local_10 + 0x1c) = 0;
  *(undefined4 *)((int)local_10 + 0x20) = 0;
  *(undefined4 *)((int)local_10 + 0x24) = 0;
  *(undefined4 *)((int)local_10 + 0x28) = 0;
  *(undefined4 *)((int)local_10 + 0x2c) = 0;
  *(undefined4 *)((int)local_10 + 0x30) = 0;
  *(undefined4 *)((int)local_10 + 0x34) = 0;
  *(undefined4 *)((int)local_10 + 0x38) = 0;
  *(undefined8 *)((int)local_10 + 0x3c) = 0;
  FUN_00506bd0(local_10,*(int *)(*(int *)(piVar1[0x34] + 0x254) + 0xe8),
               *(undefined4 *)(*(int *)(piVar1[0x34] + 0x254) + 0xe4));
  fread(_DstBuf,4,1,param_1);
  _File = local_18;
  local_14 = 0;
  fread(&local_14,4,1,local_18);
  local_24 = 0;
  puVar5 = local_c;
  if (0 < local_14) {
    do {
      local_1c = -1;
      fread(&local_1c,4,1,_File);
      local_30 = (undefined4 *)FUN_005adb0f(8);
      piVar1 = DAT_0065b5cc;
      *local_30 = 0x42c80000;
      local_2c = piVar1[1] - *piVar1 >> 2;
      local_28 = local_1c;
      uVar3 = 0;
      if (local_2c != 0) {
        puVar4 = (undefined4 *)*piVar1;
        do {
          puVar5 = local_c;
          if (*(int *)*puVar4 == local_1c) {
            uVar2 = ((undefined4 *)*piVar1)[uVar3];
            goto LAB_004c27b7;
          }
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < local_2c);
      }
      uVar2 = 0;
LAB_004c27b7:
      local_30[1] = uVar2;
      local_20 = local_30;
      fread(local_30,4,1,_File);
      puVar4 = (undefined4 *)puVar5[1];
      if ((undefined4 *)puVar5[2] == puVar4) {
        FUN_00414080(puVar5,puVar4,&local_30);
      }
      else {
        *puVar4 = local_20;
        puVar5[1] = puVar5[1] + 4;
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_14);
  }
  FUN_00591070("SAVEHANDLER","...%d components loaded from cargo");
  local_c = (undefined4 *)0x0;
  iVar8 = 0;
  do {
    fread(&local_5,1,1,_File);
    if (local_5 != '\0') {
      local_c = (undefined4 *)((int)local_c + 1);
      FUN_005070d0(local_10,iVar8);
      iVar7 = 1;
      do {
        fread(&local_6,1,1,local_18);
        if (local_6 != '\0') {
          if ((iVar8 < 0) ||
             (((0 < *(int *)((int)local_10 + 8) && (*(int *)((int)local_10 + 8) <= iVar8)) ||
              (*piVar6 == 0)))) {
            FUN_005070d0(local_10,iVar8);
          }
          if ((iVar7 != 0) && (iVar7 - 1U < 3)) {
            *(undefined1 *)(iVar7 + *piVar6) = 1;
          }
        }
        _File = local_18;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      fread((void *)(*piVar6 + 4),4,1,local_18);
      fread((void *)(*piVar6 + 8),4,1,_File);
    }
    iVar8 = iVar8 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar8 < 0xe);
  FUN_00591070("SAVEHANDLER","Loaded %d pods");
  return local_10;
}


void __fastcall FUN_004c2910(FILE *param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  code *pcVar10;
  void *in_stack_fffffedc;
  undefined1 auStack_10c [4];
  undefined4 uStack_108;
  byte *pbVar11;
  uint uVar12;
  void *pvVar13;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  FILE *local_8c;
  undefined4 ***local_88;
  undefined4 *local_84;
  char local_7e;
  undefined1 local_7d;
  undefined4 *local_7c;
  undefined4 ***local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd526;
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
  uVar12 = 0;
  fread(&local_ac,8,1,param_1);
  fread(&local_a0,4,1,param_1);
  uStack_108 = 0x4c29ae;
  fread(&local_7d,1,1,param_1);
  local_7c = (undefined4 *)&stack0xffffff24;
  pbVar11 = (byte *)0x0;
  pvVar13 = (void *)(uVar12 & 0xffffff00);
  FUN_00402690(&stack0xffffff24,&PTR_005ce008,0);
  local_8._0_1_ = 3;
  local_88 = (undefined4 ***)&stack0xffffff0c;
  FUN_004024e0(&stack0xffffff0c,local_74);
  local_84 = (undefined4 *)auStack_10c;
  local_8._0_1_ = 4;
  FUN_004024e0(auStack_10c,local_44);
  local_8._0_1_ = 5;
  FUN_004024e0(&stack0xfffffedc,local_5c);
  local_8._0_1_ = 2;
  this = FUN_0040e040(0,local_a0,in_stack_fffffedc);
  iVar9 = DAT_0065b5cc;
  local_84 = this;
  if (this == (undefined4 *)0x0) {
    FUN_00591070("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
  }
  else {
    *(undefined8 *)(this + 10) = local_b4;
    *(undefined4 **)(iVar9 + 0xd0) = this;
    *(undefined8 *)(this + 0xc) = local_ac;
    *(undefined1 *)(this + 0x57) = local_7d;
    FUN_0050c090(this,*(undefined1 **)(*(int *)(iVar9 + 0xd0) + 0x20));
    for (puVar1 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar1 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar1 = puVar1 + 1) {
      piVar7 = (int *)*puVar1;
      param_1 = local_8c;
      if (*piVar7 == this[8]) goto LAB_004c2ab8;
    }
    piVar7 = (int *)0x0;
LAB_004c2ab8:
    *(int **)(DAT_0065b5cc + 0xd8) = piVar7;
    if (DAT_0065c280 == (undefined4 *)0x0) {
      local_7c = (undefined4 *)FUN_005adb0f(0x98);
      local_8._0_1_ = 6;
      DAT_0065c280 = FUN_0058f5d0(local_7c);
      local_8._0_1_ = 2;
    }
    FUN_0058fc90((int)DAT_0065c280);
    fread(&local_90,4,1,param_1);
    if (0 < local_90) {
      local_88 = (undefined4 ***)(this + 0x53);
      iVar9 = 0;
      do {
        fread(&local_78,4,1,param_1);
        pvVar13 = (void *)0x1;
        pbVar11 = &DAT_00000004;
        fread(&local_7c,4,1,param_1);
        piVar7 = FUN_00420f40(local_88,(int *)&local_78);
        iVar9 = iVar9 + 1;
        *piVar7 = (int)local_7c;
        this = local_84;
      } while (iVar9 < local_90);
    }
    fread(&local_94,4,1,param_1);
    FUN_00511350((int)this);
    local_78 = (undefined4 ***)0x0;
    if (0 < local_94) {
      do {
        puVar1 = (undefined4 *)FUN_005adb0f(0x28);
        local_8._0_1_ = 7;
        local_7c = puVar1;
        FUN_004b88b0(&stack0xffffff24,param_1);
        pvVar2 = FUN_004b6b90(puVar1,pvVar13);
        local_8._0_1_ = 2;
        fread((void *)((int)pvVar2 + 0x20),4,1,param_1);
        pvVar13 = (void *)0x1;
        pbVar11 = &DAT_00000004;
        fread((void *)((int)pvVar2 + 0x24),4,1,param_1);
        fread((void *)((int)pvVar2 + 0x18),4,1,param_1);
        pcVar10 = fread_exref;
        uStack_108 = 0x4c2bec;
        fread((void *)((int)pvVar2 + 0x1c),4,1,param_1);
        FUN_00591070("SAVEHANDLER","  Console damage loaded for: %s");
        local_78 = (undefined4 ***)((int)local_78 + 1);
      } while ((int)local_78 < local_94);
    }
    (*pcVar10)();
    local_78 = (undefined4 ****)0x0;
    if (0 < local_98) {
      do {
        iVar9 = -1;
        puVar3 = (undefined1 *)FUN_004c3100(param_1);
        FUN_00521d10((void *)this[0x10],puVar3,iVar9);
        local_78 = (undefined4 ***)((int)local_78 + 1);
      } while ((int)local_78 < local_98);
    }
    *(undefined1 *)(this[0x10] + 0x34) = 0;
    local_7c = (undefined4 *)FUN_004a6be0(this[8],(int)this,'\0');
    if (local_7c == (undefined4 *)0x0) {
      (**(code **)(*(int *)this[0x5e] + 4))();
      this[0x5e] = 0;
      this[0x3e] = 0;
      this[0x35] = 0;
      this[0xb0] = 0;
      this[0xb1] = 0;
    }
    else {
      FUN_00511950(this,local_7c,'\0','\0');
      iVar9 = this[0x5e];
      if (iVar9 != 0) {
        puVar1 = (undefined4 *)(iVar9 + 8);
        iVar4 = FUN_004127d0();
        if ((undefined4 *)(iVar4 + 0x14) != puVar1) {
          if (0xf < *(uint *)(iVar9 + 0x1c)) {
            puVar1 = (undefined4 *)*puVar1;
          }
          FUN_00402690((undefined4 *)(iVar4 + 0x14),puVar1,*(uint *)(iVar9 + 0x18));
        }
        FUN_00591e00((undefined1 *)local_2c,"aboard_%s");
        local_8._0_1_ = 8;
        local_88 = local_2c;
        if (0xf < local_18) {
          local_88 = local_2c[0];
        }
        ppppuVar8 = local_2c;
        if (0xf < local_18) {
          ppppuVar8 = (undefined4 ****)local_2c[0];
        }
        iVar4 = 0;
        iVar9 = (local_1c + (int)local_88) - (int)ppppuVar8;
        if ((undefined4 ****)(local_1c + (int)local_88) < ppppuVar8) {
          iVar9 = 0;
        }
        local_78 = ppppuVar8;
        if (iVar9 != 0) {
          do {
            iVar5 = tolower((int)*(char *)(iVar4 + (int)ppppuVar8));
            *(char *)(iVar4 + (int)local_88) = (char)iVar5;
            iVar4 = iVar4 + 1;
            this = local_84;
            param_1 = local_8c;
          } while (iVar4 != iVar9);
        }
        local_88 = (undefined4 ***)&stack0xffffff20;
        FUN_004024e0(&stack0xffffff20,local_2c);
        local_8._0_1_ = 9;
        puVar1 = DAT_0065c274;
        if (DAT_0065c274 == (undefined4 *)0x0) {
          local_7c = (undefined4 *)FUN_005adb0f(0x30);
          *local_7c = 0;
          local_7c[1] = 0;
          local_7c[2] = 0;
          puVar1 = local_7c + 3;
          local_8._0_1_ = 0xb;
          *puVar1 = 0;
          local_7c[4] = 0;
          local_84 = puVar1;
          uVar6 = FUN_004136c0();
          *puVar1 = uVar6;
          DAT_0065c274 = local_7c;
          local_7c[9] = 0;
          local_7c[10] = 0xf;
          *(undefined1 *)(local_7c + 5) = 0;
          puVar1 = local_7c;
        }
        local_8._0_1_ = 8;
        FUN_004a0ee0(puVar1,pbVar11);
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          ppppuVar8 = (undefined4 ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppuVar8 = (undefined4 ****)local_2c[0][-1],
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar8)))) {
LAB_004c2e3a:
            local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppuVar8);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        pcVar10 = fread_exref;
      }
    }
    iVar9 = DAT_0065b5cc;
    this[0xde] = 0;
    iVar9 = *(int *)(*(int *)(*(int *)(iVar9 + 0xd0) + 0x40) + 0x20);
    if (iVar9 != 0) {
      local_84 = (undefined4 *)(iVar9 + 0x3c);
      local_8c = (FILE *)0x8;
      do {
        local_7c = (undefined4 *)*local_84;
        if (local_7c != (undefined4 *)0x0) {
          FUN_00494e20(local_7c);
          FUN_005adb3f(local_7c);
        }
        *local_84 = 0;
        local_84 = local_84 + 1;
        local_8c = (FILE *)((int)&local_8c[-1]._tmpfname + 3);
      } while (local_8c != (FILE *)0x0);
    }
    (*pcVar10)();
    local_78 = (undefined4 ****)0x0;
    if (0 < local_9c) {
      do {
        (*pcVar10)();
        if (local_7e != '\0') {
          FUN_004b88b0((undefined1 *)local_2c,param_1);
          local_8._0_1_ = 0xc;
          ppppuVar8 = (undefined4 ****)local_78;
          FUN_004024e0(&stack0xffffff20,local_2c);
          iVar9 = FUN_004a8180(pbVar11);
          FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),iVar9,(uint)ppppuVar8);
          FUN_00591070("SAVEHANDLER","Loaded weapon of class %s into player ship");
          local_8._0_1_ = 2;
          if (0xf < local_18) {
            ppppuVar8 = (undefined4 ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppuVar8 = (undefined4 ****)local_2c[0][-1],
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar8)))) goto LAB_004c2e3a;
            FUN_005adb3f(ppppuVar8);
          }
        }
        local_78 = (undefined4 ***)((int)local_78 + 1);
      } while ((int)local_78 < local_9c);
    }
    iVar9 = DAT_0065b5cc;
    this[0x19] = 1;
    *(undefined1 *)(this + 0x8d) = 1;
    *(undefined4 **)(iVar9 + 0xd0) = this;
    DAT_0065b3d4 = this;
    if ((undefined4 *)this[0x5e] != (undefined4 *)0x0) {
      DAT_0065b3d4 = (undefined4 *)this[0x5e];
    }
  }
  if (0xf < local_30) {
    pvVar13 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar13 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pvVar13 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar13 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar13 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar13 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar13);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004c3100(FILE *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  code *pcVar10;
  byte *in_stack_ffffff8c;
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
  FUN_004b88b0((undefined1 *)local_2c,param_1);
  pcVar10 = fread_exref;
  local_8 = 0;
  fread(&local_2d,1,1,param_1);
  FUN_004024e0(&stack0xffffff8c,local_2c);
  iVar3 = FUN_004a8020(in_stack_ffffff8c);
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
      (*pcVar10)();
      (*pcVar10)(&local_38,4);
      if (local_34 != -1) {
        puVar4 = (undefined4 *)FUN_005adb0f(8);
        piVar1 = DAT_0065b5cc;
        uVar6 = 0;
        *puVar4 = 0x42c80000;
        pcVar10 = fread_exref;
        uVar9 = piVar1[1] - *piVar1 >> 2;
        if (uVar9 != 0) {
          local_40 = (undefined4 *)*piVar1;
          puVar8 = local_40;
          do {
            if (*(int *)*puVar8 == local_34) {
              uVar5 = local_40[uVar6];
              goto LAB_004c3234;
            }
            uVar6 = uVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar9);
        }
        uVar5 = 0;
LAB_004c3234:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar3 + 4 + local_3c[3]) = puVar4;
        **(int **)(iVar3 + 4 + local_3c[3]) = (int)local_38;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x50);
    iVar3 = 0x54;
    do {
      (*pcVar10)();
      (*pcVar10)(&local_40,4);
      if (local_34 != -1) {
        puVar4 = (undefined4 *)FUN_005adb0f(8);
        piVar1 = DAT_0065b5cc;
        uVar6 = 0;
        *puVar4 = 0x42c80000;
        pcVar10 = fread_exref;
        uVar9 = piVar1[1] - *piVar1 >> 2;
        if (uVar9 != 0) {
          local_38 = (undefined4 *)*piVar1;
          puVar8 = local_38;
          do {
            if (*(int *)*puVar8 == local_34) {
              uVar5 = local_38[uVar6];
              goto LAB_004c32d0;
            }
            uVar6 = uVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar9);
        }
        uVar5 = 0;
LAB_004c32d0:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar3 + local_3c[3]) = puVar4;
        **(int **)(iVar3 + local_3c[3]) = (int)local_40;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xa4);
    *(undefined1 *)((int)local_3c + 99) = local_2d;
  }
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004c3380(FILE *param_1)

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
  FUN_004c2910(param_1);
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
      puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x140);
      if (*(undefined4 **)(DAT_0065b5cc + 0x144) == puVar7) {
        FUN_004141e0((void *)(DAT_0065b5cc + 0x13c),puVar7,&local_44);
      }
      else {
        *puVar7 = local_44;
        *(int *)(iVar6 + 0x140) = *(int *)(iVar6 + 0x140) + 4;
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
      local_44 = (undefined1 *)FUN_004c1a90(param_1);
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
  FUN_004c3a30(param_1);
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) goto LAB_004c39d4;
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
LAB_004c39d4:
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
              goto LAB_004c3971;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar11 < uVar14);
      }
      pcVar18 = "Invalid faction \'%d\' loaded";
LAB_004c3971:
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


void __fastcall FUN_004c3a30(FILE *param_1)

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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c3fa5;
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c3fa5;
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c3fa5;
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c3fa5;
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_004c3fa5;
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c3fa5;
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c3fa5;
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
        pcVar10 = "Error: invalid article \'%s\'";
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
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c3fa5;
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
        FUN_00591070("ERROR","ERROR: invalid email loaded.");
      }
      else {
        *(undefined2 *)(iVar6 + 100) = 0x100;
        *(undefined4 *)(iVar6 + 0x98) = 0;
        FUN_00591070("SAVEHANDLER","Email \'%s\' marked as sent");
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar4 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar4 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar4)))) goto LAB_004c3fa5;
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
      FUN_00591070("ERROR","ERROR: invalid email \'%s\' loaded.");
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
LAB_004c3fa5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    fread(&local_59,1,1,param_1);
  } while( true );
}
