#include "../ois_server.exe.h"


void __fastcall FUN_00484040(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  puVar5 = (undefined4 *)param_1[0x1c];
  uVar3 = (param_1[0x1d] - (int)puVar5) + 3U >> 2;
  if ((undefined4 *)param_1[0x1d] < puVar5) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      if ((void *)*puVar5 != (void *)0x0) {
        FUN_00404000((void *)*puVar5,1);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != uVar3);
  }
  param_1[0x1d] = param_1[0x1c];
  FUN_004025a0(param_1 + 0x22);
  FUN_004025a0(param_1 + 0x1f);
  pvVar1 = (void *)param_1[0x1c];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x1e] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004841c4;
    FUN_005adb3f(pvVar2);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (0xf < (uint)param_1[0x17]) {
    pvVar1 = (void *)param_1[0x12];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x17] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004841c4;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (0xf < (uint)param_1[0xf]) {
    pvVar1 = (void *)param_1[10];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xf] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_004841c4;
    FUN_005adb3f(pvVar2);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0xf;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_004025a0(param_1 + 7);
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_004841c4:
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


undefined4 FUN_004841d0(uint param_1,byte *param_2,int param_3,undefined4 param_4,void *param_5)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  byte ***pppbVar5;
  char cVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte ****ppppbVar13;
  void *pvVar14;
  int *piVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  void *pvVar19;
  undefined4 uVar20;
  undefined4 uStack00000024;
  uint in_stack_00000028;
  byte *in_stack_ffffff84;
  byte ***local_54 [4];
  uint local_44;
  uint local_40;
  void *local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  undefined4 *local_2c;
  code *local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b926a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_30 = param_1;
  FUN_004024e0(&stack0xffffff84,&param_5);
  local_8._0_1_ = 2;
  if (DAT_0065c288 == (void *)0x0) {
    local_2c = (undefined4 *)FUN_005adb0f(300);
    local_8._0_1_ = 3;
    DAT_0065c288 = (void *)FUN_00485f60(local_2c);
  }
  local_8._0_1_ = 1;
  local_14 = FUN_00486270(DAT_0065c288,'\0',in_stack_ffffff84);
  if (local_14 == (byte *)0x0) {
    uVar20 = 0;
  }
  else {
    local_18 = (int *)0x0;
    local_3c = (void *)0x0;
    local_38 = (int *)0x0;
    local_24 = (int *)0x0;
    local_34 = (int *)0x0;
    local_8._0_1_ = 4;
    iVar11 = *(int *)(local_14 + 0xa0);
    local_20 = 0;
    local_28 = rand_exref;
    piVar15 = (int *)0x0;
    if (*(int *)(local_14 + 0xa4) - iVar11 >> 2 != 0) {
      do {
        pbVar7 = local_14;
        iVar10 = *(int *)(iVar11 + local_20 * 4);
        local_1c = local_20 * 4;
        uVar16 = 0;
        bVar4 = true;
        if (*(int *)(iVar10 + 0x74) - *(int *)(iVar10 + 0x70) >> 2 != 0) {
          do {
            cVar6 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar11 + local_1c) + 0x70) +
                                           uVar16 * 4),
                                 *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
            if (cVar6 == '\0') {
              bVar4 = false;
              goto LAB_0048436f;
            }
            iVar11 = *(int *)(pbVar7 + 0xa0);
            uVar16 = uVar16 + 1;
          } while (uVar16 < (uint)(*(int *)(*(int *)(iVar11 + local_1c) + 0x74) -
                                   *(int *)(*(int *)(iVar11 + local_1c) + 0x70) >> 2));
        }
        uVar16 = 0;
        local_2c = (undefined4 *)((param_3 - (int)param_2) / 0x18);
        pbVar7 = local_14;
        if (local_2c != (undefined4 *)0x0) {
          pbVar1 = *(byte **)(iVar11 + local_1c);
          pbVar17 = param_2;
          do {
            pbVar7 = pbVar1;
            if (0xf < *(uint *)(pbVar1 + 0x14)) {
              pbVar7 = *(byte **)pbVar1;
            }
            pbVar12 = pbVar17;
            if (0xf < *(uint *)(pbVar17 + 0x14)) {
              pbVar12 = *(byte **)pbVar17;
            }
            uVar8 = FUN_004031f0(pbVar12,*(uint *)(pbVar17 + 0x10),pbVar7,*(uint *)(pbVar1 + 0x10));
            pbVar7 = local_14;
            if ((char)uVar8 != '\0') {
              bVar4 = false;
              break;
            }
            uVar16 = uVar16 + 1;
            pbVar17 = pbVar17 + 0x18;
          } while (uVar16 < local_2c);
        }
LAB_0048436f:
        iVar11 = local_1c;
        local_2c = (undefined4 *)&stack0xffffff84;
        FUN_004024e0(&stack0xffffff84,
                     (undefined4 *)(*(int *)(*(int *)(pbVar7 + 0xa0) + local_1c) + 0x48));
        local_8._0_1_ = 5;
        if (DAT_0065c290 == (undefined4 *)0x0) {
          DAT_0065c290 = (undefined4 *)FUN_005adb0f(0x18);
          DAT_0065c290[4] = 0;
          DAT_0065c290[5] = 0;
          *DAT_0065c290 = 0;
          DAT_0065c290[1] = 0;
          DAT_0065c290[2] = 0;
          DAT_0065c290[3] = 0;
          DAT_0065c290[4] = 0;
          DAT_0065c290[5] = 0;
        }
        local_8._0_1_ = 4;
        puVar9 = (uint *)FUN_004a0d10(DAT_0065c290,in_stack_ffffff84);
        bVar3 = false;
        if (*puVar9 == local_30) {
          bVar3 = bVar4;
        }
        if (*(int *)(*(int *)(*(int *)(local_14 + 0xa0) + iVar11) + 0x18) == 1) {
          uVar8 = puVar9[0x36];
          uVar16 = 0;
          uVar18 = (int)(puVar9[0x21] - puVar9[0x20]) >> 2;
          if (uVar18 != 0) {
            do {
              iVar11 = *(int *)(puVar9[0x20] + uVar16 * 4);
              if ((int)uVar8 < iVar11) goto LAB_00484441;
              uVar16 = uVar16 + 1;
              uVar8 = uVar8 - iVar11;
            } while (uVar16 < uVar18);
          }
          uVar16 = uVar18 - 1;
LAB_00484441:
          if (1 < (int)uVar16) goto LAB_0048444d;
        }
        else {
LAB_0048444d:
          if (bVar3) {
            iVar11 = *(int *)(local_14 + 0x4c);
            param_1 = 0;
            if (*(int *)(local_14 + 0x50) - iVar11 >> 2 != 0) {
              do {
                iVar11 = *(int *)(iVar11 + param_1 * 4);
                if (*(char *)(iVar11 + 0xe0) != '\0') {
                  uVar16 = 0;
                  iVar10 = *(int *)(iVar11 + 0xd8);
                  uVar8 = *(int *)(iVar11 + 0x84) - *(int *)(iVar11 + 0x80) >> 2;
                  if (uVar8 != 0) {
                    do {
                      iVar2 = *(int *)(*(int *)(iVar11 + 0x80) + uVar16 * 4);
                      if (iVar10 < iVar2) goto LAB_004844b1;
                      uVar16 = uVar16 + 1;
                      iVar10 = iVar10 - iVar2;
                    } while (uVar16 < uVar8);
                  }
                  uVar16 = uVar8 - 1;
LAB_004844b1:
                  FUN_004024e0(local_54,(undefined4 *)(iVar11 + 8));
                  uVar8 = local_40;
                  pppbVar5 = local_54[0];
                  iVar11 = *(int *)(*(int *)(local_14 + 0xa0) + local_1c);
                  pbVar7 = (byte *)(iVar11 + 0x48);
                  if (0xf < *(uint *)(iVar11 + 0x5c)) {
                    pbVar7 = *(byte **)(iVar11 + 0x48);
                  }
                  ppppbVar13 = local_54;
                  if (0xf < local_40) {
                    ppppbVar13 = (byte ****)local_54[0];
                  }
                  uVar18 = FUN_004031f0((byte *)ppppbVar13,local_44,pbVar7,*(uint *)(iVar11 + 0x58))
                  ;
                  if (((char)uVar18 != '\0') &&
                     (iVar11 = *(int *)(local_14 + 0xa0), uVar8 = local_40,
                     *(int *)(*(int *)(iVar11 + local_1c) + 0x68) <= (int)uVar16)) {
                    if (0xf < local_40) {
                      ppppbVar13 = (byte ****)pppbVar5;
                      if ((0xfff < local_40 + 1) &&
                         (ppppbVar13 = (byte ****)pppbVar5[-1],
                         (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar13))))
                      goto LAB_004846a2;
                      FUN_005adb3f(ppppbVar13);
                      iVar11 = *(int *)(local_14 + 0xa0);
                    }
                    pbVar7 = local_14;
                    uVar16 = local_20;
                    local_44 = 0;
                    local_40 = 0xf;
                    local_54[0] = (byte ***)((uint)local_54[0] & 0xffffff00);
                    if (*(float *)(*(int *)(iVar11 + local_20 * 4) + 0xa8) <= 0.0) {
                      iVar10 = (*local_28)();
                      piVar15 = (int *)(*(int *)(pbVar7 + 0xa0) + uVar16 * 4);
                      iVar11 = *piVar15;
                      if (iVar10 % 100 < *(int *)(iVar11 + 0x94)) {
                        if (local_24 == local_18) {
                          FUN_00414080(&local_3c,local_18,piVar15);
                          local_24 = local_34;
                          local_18 = local_38;
                        }
                        else {
                          *local_18 = iVar11;
                          local_38 = local_18 + 1;
                          local_18 = local_38;
                        }
                      }
                    }
                    break;
                  }
                  if (0xf < uVar8) {
                    ppppbVar13 = (byte ****)pppbVar5;
                    if ((0xfff < uVar8 + 1) &&
                       (ppppbVar13 = (byte ****)pppbVar5[-1],
                       (byte *)0x1f < (byte *)((int)pppbVar5 + (-4 - (int)ppppbVar13))))
                    goto LAB_004846a2;
                    FUN_005adb3f(ppppbVar13);
                  }
                  local_54[0] = (byte ***)((uint)local_54[0] & 0xffffff00);
                  local_40 = 0xf;
                  local_44 = 0;
                }
                param_1 = param_1 + 1;
                iVar11 = *(int *)(local_14 + 0x4c);
              } while (param_1 < (uint)(*(int *)(local_14 + 0x50) - iVar11 >> 2));
            }
          }
        }
        local_20 = local_20 + 1;
        iVar11 = *(int *)(local_14 + 0xa0);
        piVar15 = local_18;
      } while (local_20 < (uint)(*(int *)(local_14 + 0xa4) - iVar11 >> 2));
    }
    pvVar14 = local_3c;
    local_18 = (int *)((int)piVar15 - (int)local_3c >> 2);
    if (local_18 == (int *)0x0) {
      uVar20 = 0;
    }
    else {
      iVar11 = (*local_28)();
      uVar20 = *(undefined4 *)((int)pvVar14 + (iVar11 % (int)local_18) * 4);
    }
    if (pvVar14 != (void *)0x0) {
      pvVar19 = pvVar14;
      if ((0xfff < ((int)local_24 - (int)pvVar14 & 0xfffffffcU)) &&
         (pvVar19 = *(void **)((int)pvVar14 + -4), 0x1f < (uint)((int)pvVar14 + (-4 - (int)pvVar19))
         )) {
LAB_004846a2:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar19);
    }
  }
  if (0xf < in_stack_00000028) {
    pvVar14 = param_5;
    if ((0xfff < in_stack_00000028 + 1) &&
       (pvVar14 = *(void **)((int)param_5 + -4), 0x1f < (uint)((int)param_5 + (-4 - (int)pvVar14))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  uStack00000024 = 0;
  in_stack_00000028 = 0xf;
  param_5 = (void *)((uint)param_5 & 0xffffff00);
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return uVar20;
}


undefined4 FUN_00484720(byte *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte **ppbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b92bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar9 = 0;
  piVar4 = DAT_0065c288;
  do {
    if (piVar4 == (int *)0x0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8._0_1_ = 1;
      piVar4 = (int *)FUN_00485f60(puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_0065c288 = piVar4;
    }
    if ((uint)(piVar4[1] - *piVar4 >> 2) <= uVar9) {
      uVar10 = 0;
LAB_0048481f:
      if (0xf < in_stack_00000018) {
        pbVar8 = param_1;
        if (0xfff < in_stack_00000018 + 1) {
          pbVar8 = *(byte **)(param_1 + -4);
          if ((byte *)0x1f < param_1 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pbVar8);
      }
      ExceptionList = local_10;
      return uVar10;
    }
    uVar11 = 0;
    while( true ) {
      if (piVar4 == (int *)0x0) {
        puVar3 = (undefined4 *)FUN_005adb0f(300);
        local_8._0_1_ = 2;
        piVar4 = (int *)FUN_00485f60(puVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        DAT_0065c288 = piVar4;
      }
      iVar1 = *(int *)(*piVar4 + uVar9 * 4);
      iVar2 = *(int *)(iVar1 + 0xa0);
      if ((uint)(*(int *)(iVar1 + 0xa4) - iVar2 >> 2) <= uVar11) break;
      pbVar8 = *(byte **)(iVar2 + uVar11 * 4);
      ppbVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar5 = (byte **)param_1;
      }
      pbVar7 = pbVar8;
      if (0xf < *(uint *)(pbVar8 + 0x14)) {
        pbVar7 = *(byte **)pbVar8;
      }
      uVar6 = FUN_004031f0(pbVar7,*(uint *)(pbVar8 + 0x10),(byte *)ppbVar5,in_stack_00000014);
      if ((char)uVar6 != '\0') {
        uVar10 = *(undefined4 *)(*(int *)(*(int *)(*piVar4 + uVar9 * 4) + 0xa0) + uVar11 * 4);
        goto LAB_0048481f;
      }
      uVar11 = uVar11 + 1;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}


byte * FUN_00484870(uint param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  basic_string<> *pbVar6;
  basic_string<> *pbVar7;
  undefined4 *this;
  basic_string<> *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *this_00;
  basic_string<> *in_stack_00000014;
  uint in_stack_00000024;
  uint in_stack_00000028;
  byte *in_stack_ffffffb0;
  int iVar11;
  void *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b92f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  puVar10 = &stack0x00000014;
  iVar11 = 0x4848b3;
  FUN_004024e0(&stack0xffffffbc,puVar10);
  local_8._0_1_ = 2;
  FUN_0042b900(&stack0xffffffb0,(int *)&stack0x00000008);
  local_8 = CONCAT31(local_8._1_3_,1);
  pbVar2 = (byte *)FUN_004841d0(param_1,in_stack_ffffffb0,iVar11,puVar10,in_stack_ffffffbc);
  if (pbVar2 == (byte *)0x0) {
    this_00 = (byte *)0x0;
  }
  else {
    this_00 = (byte *)FUN_005adb0f(0x5c);
    pbVar8 = (basic_string<> *)(this_00 + 0x38);
    this_00[0x10] = 0;
    this_00[0x11] = 0;
    this_00[0x12] = 0;
    this_00[0x13] = 0;
    this_00[0x14] = 0xf;
    this_00[0x15] = 0;
    this_00[0x16] = 0;
    this_00[0x17] = 0;
    *this_00 = 0;
    this_00[0x18] = 0;
    this_00[0x19] = 0;
    this_00[0x1a] = 0x80;
    this_00[0x1b] = 0xbf;
    this_00[0x1c] = 0;
    this_00[0x1d] = 0;
    this_00[0x1e] = 0;
    this_00[0x1f] = 0;
    this_00[0x30] = 0;
    this_00[0x31] = 0;
    this_00[0x32] = 0;
    this_00[0x33] = 0;
    this_00[0x34] = 0xf;
    this_00[0x35] = 0;
    this_00[0x36] = 0;
    this_00[0x37] = 0;
    this_00[0x20] = 0;
    this_00[0x48] = 0;
    this_00[0x49] = 0;
    this_00[0x4a] = 0;
    this_00[0x4b] = 0;
    this_00[0x4c] = 0xf;
    this_00[0x4d] = 0;
    this_00[0x4e] = 0;
    this_00[0x4f] = 0;
    *pbVar8 = (basic_string<>)0x0;
    this_00[0x50] = 0;
    this_00[0x51] = 0;
    this_00[0x52] = 0;
    this_00[0x53] = 0;
    this_00[0x54] = 0;
    this_00[0x55] = 0;
    this_00[0x56] = 0;
    this_00[0x57] = 0;
    this_00[0x58] = 0;
    this_00[0x59] = 0;
    this_00[0x5a] = 0;
    this_00[0x5b] = 0;
    pbVar4 = pbVar2;
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar4 = *(byte **)pbVar2;
    }
    uVar3 = FUN_004031f0(pbVar4,*(uint *)(pbVar2 + 0x10),(byte *)&PTR_005ce008,0);
    if (((char)uVar3 == '\0') && (this_00 != pbVar2)) {
      pbVar4 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar4 = *(byte **)pbVar2;
      }
      FUN_00402690(this_00,pbVar4,*(uint *)(pbVar2 + 0x10));
    }
    *(byte **)(this_00 + 0x54) = pbVar2;
    iVar11 = *(int *)(pbVar2 + 0x18);
    if (iVar11 == 1) {
      iVar11 = *(int *)(pbVar2 + 0x20);
      iVar1 = *(int *)(pbVar2 + 0x1c);
      iVar5 = rand();
      pbVar4 = (byte *)(*(int *)(pbVar2 + 0x1c) + (iVar5 % ((iVar11 - iVar1) / 0x18)) * 0x18);
      if (this_00 + 0x20 != pbVar4) {
        pbVar9 = pbVar4;
        if (0xf < *(uint *)(pbVar4 + 0x14)) {
          pbVar9 = *(byte **)pbVar4;
        }
        FUN_00402690(this_00 + 0x20,pbVar9,*(uint *)(pbVar4 + 0x10));
      }
    }
    else if (iVar11 == 0) {
      if (pbVar8 != (basic_string<> *)&stack0x00000014) {
        pbVar6 = (basic_string<> *)&stack0x00000014;
        if (0xf < in_stack_00000028) {
          pbVar6 = in_stack_00000014;
        }
        FUN_00402690(pbVar8,pbVar6,in_stack_00000024);
      }
    }
    else if (iVar11 == 2) {
      pbVar4 = pbVar2 + 0x28;
      pbVar6 = (basic_string<> *)&stack0x00000014;
      if (0xf < in_stack_00000028) {
        pbVar6 = in_stack_00000014;
      }
      if (0xf < *(uint *)(pbVar2 + 0x3c)) {
        pbVar4 = *(byte **)(pbVar2 + 0x28);
      }
      uVar3 = FUN_004031f0(pbVar4,*(uint *)(pbVar2 + 0x38),(byte *)pbVar6,in_stack_00000024);
      if ((char)uVar3 == '\0') {
        iVar11 = *(int *)(pbVar2 + 0x20);
        iVar1 = *(int *)(pbVar2 + 0x1c);
        iVar5 = rand();
        std::basic_string<>::operator=
                  ((basic_string<> *)(this_00 + 0x38),
                   (basic_string<> *)
                   (*(int *)(pbVar2 + 0x1c) + (iVar5 % ((iVar11 - iVar1) / 0x18)) * 0x18));
        pbVar7 = (basic_string<> *)&stack0x00000014;
      }
      else {
        std::basic_string<>::operator=(pbVar8,(basic_string<> *)&stack0x00000014);
        iVar11 = *(int *)(pbVar2 + 0x20);
        iVar1 = *(int *)(pbVar2 + 0x1c);
        iVar5 = rand();
        pbVar7 = (basic_string<> *)
                 (*(int *)(pbVar2 + 0x1c) + (iVar5 % ((iVar11 - iVar1) / 0x18)) * 0x18);
      }
      std::basic_string<>::operator=((basic_string<> *)(this_00 + 0x20),pbVar7);
    }
    this = (undefined4 *)FUN_005adb0f(0x48);
    this[4] = 0;
    this[5] = 0xf;
    *(undefined1 *)this = 0;
    this[6] = 0;
    this[7] = 0;
    this[8] = 0;
    this[9] = 0;
    this[10] = 0;
    this[0xb] = 0;
    this[0x10] = 0;
    this[0x11] = 0xf;
    *(undefined1 *)(this + 0xc) = 0;
    *(undefined4 **)(this_00 + 0x58) = this;
    iVar11 = *(int *)(pbVar2 + 0x40);
    puVar10 = (undefined4 *)(iVar11 + 8);
    if (this != puVar10) {
      if (0xf < *(uint *)(iVar11 + 0x1c)) {
        puVar10 = (undefined4 *)*puVar10;
      }
      FUN_00402690(this,puVar10,*(uint *)(iVar11 + 0x18));
      iVar11 = *(int *)(pbVar2 + 0x40);
    }
    iVar11 = FUN_00591370((int *)(iVar11 + 0x24));
    *(int *)(*(int *)(this_00 + 0x58) + 0x18) = iVar11;
    *(undefined4 *)(*(int *)(this_00 + 0x58) + 0x1c) =
         *(undefined4 *)(*(int *)(this_00 + 0x58) + 0x18);
    *(undefined4 *)(*(int *)(this_00 + 0x58) + 0x20) =
         *(undefined4 *)(*(int *)(this_00 + 0x58) + 0x18);
    *(undefined4 *)(*(int *)(this_00 + 0x58) + 0x24) = *(undefined4 *)(*(int *)(pbVar2 + 0x40) + 4);
    *(undefined4 *)(*(int *)(this_00 + 0x58) + 0x28) = **(undefined4 **)(pbVar2 + 0x40);
    *(int *)(*(int *)(this_00 + 0x58) + 0x2c) =
         (int)(*(float *)(&DAT_005ce138 + *(int *)(DAT_0065b444 + 0xc4) * 4) *
               (float)*(int *)(*(int *)(pbVar2 + 0x40) + 0x20) +
              (float)*(int *)(*(int *)(pbVar2 + 0x40) + 0x20));
    *(float *)(this_00 + 0x1c) = (float)*(int *)(pbVar2 + 0x44);
  }
  if (0xf < in_stack_00000028) {
    pbVar8 = in_stack_00000014;
    if (0xfff < in_stack_00000028 + 1) {
      pbVar8 = *(basic_string<> **)(in_stack_00000014 + -4);
      if ((basic_string<> *)0x1f < in_stack_00000014 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0xf;
  in_stack_00000014 = (basic_string<> *)((uint)in_stack_00000014 & 0xffffff00);
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return this_00;
}


undefined1 * __fastcall FUN_00484c00(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 100;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return param_1;
}


void FUN_00484c70(void *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  byte ****ppppbVar5;
  uint uVar6;
  byte *pbVar7;
  void *pvVar8;
  uint uVar9;
  uint in_stack_00000018;
  byte ***local_34 [4];
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b9330;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(local_34,&param_1);
  local_8._0_1_ = 1;
  iVar4 = FUN_0047d160();
  local_8 = (uint)local_8._1_3_ << 8;
  uVar9 = 0;
  local_18 = *(int *)(iVar4 + 0xc);
  local_14 = *(int *)(iVar4 + 0x10) - local_18 >> 2;
  if (local_14 != 0) {
    do {
      pbVar1 = *(byte **)(local_18 + uVar9 * 4);
      ppppbVar5 = local_34;
      if (0xf < local_20) {
        ppppbVar5 = (byte ****)local_34[0];
      }
      pbVar7 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar7 = *(byte **)pbVar1;
      }
      uVar6 = FUN_004031f0(pbVar7,*(uint *)(pbVar1 + 0x10),(byte *)ppppbVar5,local_24);
      if ((char)uVar6 != '\0') {
        uVar9 = *(uint *)(local_18 + uVar9 * 4);
        if (0xf < local_20) {
          ppppbVar5 = (byte ****)local_34[0];
          if ((0xfff < local_20 + 1) &&
             (ppppbVar5 = (byte ****)local_34[0][-1],
             (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar5);
        }
        goto LAB_00484d7c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_14);
  }
  if (0xf < local_20) {
    ppppbVar5 = (byte ****)local_34[0];
    if ((0xfff < local_20 + 1) &&
       (ppppbVar5 = (byte ****)local_34[0][-1],
       (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar5);
  }
  uVar9 = 0;
LAB_00484d7c:
  local_14 = uVar9;
  if (uVar9 == 0) {
    FUN_00591070("ERROR","Invalid quirk, \'%s\'");
    bVar3 = cc_assert_script_compatible("Invalid quirk.");
    if (!bVar3) {
      cocos2d::log("Assert failed: %s","Invalid quirk.");
    }
  }
  else {
    puVar2 = *(uint **)(local_1c + 0x50);
    if (*(uint **)(local_1c + 0x54) == puVar2) {
      FUN_00414080((void *)(local_1c + 0x4c),puVar2,&local_14);
    }
    else {
      *puVar2 = uVar9;
      *(int *)(local_1c + 0x50) = *(int *)(local_1c + 0x50) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar8 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar8 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00484e30(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  void *pvVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  uint local_4c;
  uint local_48;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b9387;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined1 *)((int)this + 0x28) = 0;
  piVar7 = (int *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined1 *)piVar7 = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0xf;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0xf;
  *(undefined1 *)((int)this + 0x70) = 0;
  local_14 = 4;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  iVar5 = FUN_00591370((int *)(param_1 + 0x30));
  *(int *)((int)this + 8) = iVar5 * 2;
  rand();
  piVar6 = (int *)FUN_00591e00((undefined1 *)local_3c,&DAT_005ce00c);
  if (piVar7 != piVar6) {
    FUN_00401b20(piVar7);
    iVar5 = piVar6[1];
    iVar1 = piVar6[2];
    iVar12 = piVar6[3];
    *piVar7 = *piVar6;
    *(int *)((int)this + 0x44) = iVar5;
    *(int *)((int)this + 0x48) = iVar1;
    *(int *)((int)this + 0x4c) = iVar12;
    *(undefined8 *)((int)this + 0x50) = *(undefined8 *)(piVar6 + 4);
    piVar6[4] = 0;
    piVar6[5] = 0xf;
    *(undefined1 *)piVar6 = 0;
  }
  if (0xf < local_28) {
    pvVar11 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar11 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  iVar5 = rand();
  if (iVar5 % 100 < 0x2f) {
    *(undefined4 *)((int)this + 4) = 1;
    iVar5 = rand();
    pcVar16 = (&PTR_DAT_005ce6d0)[iVar5 % 0x4c4];
    pcVar9 = pcVar16;
    do {
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    uVar10 = (int)pcVar9 - (int)(pcVar16 + 1);
  }
  else {
    *(undefined4 *)((int)this + 4) = 0;
    iVar5 = rand();
    pcVar16 = (&PTR_DAT_005cf9e0)[iVar5 % 0x10b3];
    pcVar9 = pcVar16;
    do {
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    uVar10 = (int)pcVar9 - (int)(pcVar16 + 1);
  }
  FUN_00402690((void *)((int)this + 0x28),pcVar16,uVar10);
  piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,"%s %s");
  if ((int *)((int)this + 0x10) != piVar7) {
    FUN_00401b20((int *)((int)this + 0x10));
    iVar5 = piVar7[1];
    iVar1 = piVar7[2];
    iVar12 = piVar7[3];
    *(int *)((int)this + 0x10) = *piVar7;
    *(int *)((int)this + 0x14) = iVar5;
    *(int *)((int)this + 0x18) = iVar1;
    *(int *)((int)this + 0x1c) = iVar12;
    *(undefined8 *)((int)this + 0x20) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar11 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar11 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,"%c. %s");
  if ((int *)((int)this + 0x58) != piVar7) {
    FUN_00401b20((int *)((int)this + 0x58));
    iVar5 = piVar7[1];
    iVar1 = piVar7[2];
    iVar12 = piVar7[3];
    *(int *)((int)this + 0x58) = *piVar7;
    *(int *)((int)this + 0x5c) = iVar5;
    *(int *)((int)this + 0x60) = iVar1;
    *(int *)((int)this + 100) = iVar12;
    *(undefined8 *)((int)this + 0x68) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_28) {
    pvVar11 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar11 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  iVar5 = rand();
  iVar5 = iVar5 % 0x78 + 1;
  if (iVar5 < 0x23) {
    uVar10 = 7;
    pcVar16 = "english";
  }
  else if (iVar5 < 0x32) {
    uVar10 = 8;
    pcVar16 = "mandarin";
  }
  else if (iVar5 < 0x3c) {
    uVar10 = 6;
    pcVar16 = "french";
  }
  else if (iVar5 < 0x50) {
    uVar10 = 7;
    pcVar16 = "spanish";
  }
  else if (iVar5 < 100) {
    uVar10 = 5;
    pcVar16 = "farsi";
  }
  else {
    uVar10 = 9;
    pcVar16 = "portugese";
  }
  FUN_00402690((void *)((int)this + 0x70),pcVar16,uVar10);
  iVar5 = *(int *)((int)this + 0xc);
  if (*(int *)(iVar5 + 0x50) - *(int *)(iVar5 + 0x4c) >> 2 != 0) {
    local_48 = 0;
    do {
      bVar2 = true;
      uVar10 = 0;
      iVar1 = *(int *)(*(int *)(iVar5 + 0x4c) + local_48 * 4);
      if (*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2 != 0) {
        do {
          cVar4 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x4c) + local_48 * 4) +
                                                  0x18) + uVar10 * 4),
                               *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
          iVar5 = *(int *)((int)this + 0xc);
          if (cVar4 == '\0') {
            bVar2 = false;
            break;
          }
          uVar10 = uVar10 + 1;
          iVar1 = *(int *)(*(int *)(iVar5 + 0x4c) + local_48 * 4);
        } while (uVar10 < (uint)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2));
      }
      local_4c = 0;
      bVar3 = false;
      iVar5 = *(int *)(*(int *)(iVar5 + 0x4c) + local_48 * 4);
      pbVar15 = *(byte **)(iVar5 + 0x40);
      iVar12 = *(int *)(iVar5 + 0x44) - (int)pbVar15;
      iVar1 = iVar12 >> 0x1f;
      if (iVar12 / 0x18 + iVar1 != iVar1) {
        iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254);
        do {
          pbVar8 = pbVar15;
          if (0xf < *(uint *)(pbVar15 + 0x14)) {
            pbVar8 = *(byte **)pbVar15;
          }
          pbVar13 = (byte *)(iVar1 + 0x60);
          if (0xf < *(uint *)(iVar1 + 0x74)) {
            pbVar13 = *(byte **)(iVar1 + 0x60);
          }
          uVar10 = FUN_004031f0(pbVar13,*(uint *)(iVar1 + 0x70),pbVar8,*(uint *)(pbVar15 + 0x10));
          if ((char)uVar10 != '\0') {
            bVar3 = true;
            break;
          }
          pbVar15 = pbVar15 + 0x18;
          local_4c = local_4c + 1;
        } while (local_4c < (uint)((*(int *)(iVar5 + 0x44) - *(int *)(iVar5 + 0x40)) / 0x18));
      }
      iVar5 = *(int *)((int)this + 0xc);
      iVar1 = *(int *)(*(int *)(iVar5 + 0x4c) + local_48 * 4);
      iVar14 = *(int *)(iVar1 + 0x44) - *(int *)(iVar1 + 0x40);
      iVar12 = iVar14 >> 0x1f;
      if (iVar14 / 0x18 + iVar12 == iVar12) {
        bVar3 = true;
      }
      if ((*(int *)(iVar1 + 0x58) != -1) &&
         (*(int *)(iVar1 + 0x58) <
          (((*(int *)(DAT_0065b444 + 0x18c) + *(int *)(DAT_0065b444 + 400) * 0xc) * 0x1f +
           *(int *)(DAT_0065b444 + 0x188)) * 0x18 - *(int *)((int)this + 0x8c)) +
          *(int *)(DAT_0065b444 + 0x184))) {
        bVar2 = false;
      }
      if ((bVar2) && (bVar3)) {
        iVar12 = rand();
        iVar5 = *(int *)((int)this + 0xc);
        iVar1 = *(int *)(*(int *)(iVar5 + 0x4c) + local_48 * 4);
        if (iVar12 % 100 + 1 <= *(int *)(iVar1 + 0x30)) {
          *(int *)this = iVar1;
          break;
        }
      }
      local_48 = local_48 + 1;
    } while (local_48 < (uint)(*(int *)(iVar5 + 0x50) - *(int *)(iVar5 + 0x4c) >> 2));
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004853c0(int param_1)

{
  int iVar1;
  undefined4 *this;
  uint in_stack_ffffffc4;
  byte *pbVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b93b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(int *)(param_1 + 0x8c) =
       *(int *)(iVar1 + 0x184) +
       ((*(int *)(iVar1 + 0x18c) + *(int *)(iVar1 + 400) * 0xc) * 0x1f + *(int *)(iVar1 + 0x188)) *
       0x18;
  pbVar2 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,"has_passenger",0xd);
  local_8 = 0;
  this = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(this,pbVar2);
  FUN_00591070("WORLD","Passenger \'%s\' has boarded player ship.");
  *(int *)(DAT_0065b5cc + 0x128) = param_1;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004854a0(int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *this;
  undefined4 extraout_ECX;
  bool bVar4;
  undefined4 *in_stack_ffffff74;
  undefined1 local_74 [8];
  undefined4 uStack_6c;
  byte *pbVar5;
  uint in_stack_ffffffa4;
  char *pcVar6;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9408;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"%s has disembarked.");
  FUN_00591070("WORLD","Passenger \'%s\' disembarked at %s due to excess time taken.");
  iVar1 = *(int *)(param_1 + 8);
  pvVar3 = (void *)(in_stack_ffffffa4 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,"Partial Passenger Payment",0x19);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,iVar1 / 2,pvVar3);
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,
               "%dc credits received from passenger.");
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  uVar2 = rand();
  uVar2 = uVar2 & 0x80000001;
  bVar4 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar4) {
    uVar2 = 0xc2;
    pcVar6 = 
    "Enough. I\'ve disembarked your ship. It\'s taken so long to get anywhere I worry you\'re not even going my way after all. I\'ve transferred you some credits for your time, but I am keeping the rest."
    ;
  }
  else {
    uVar2 = 0x114;
    pcVar6 = 
    "Your ship is taking too long to go near my destination. I didn\'t expect speed - you can\'t hitch a ride on a freighter and expect a high speed shuttle service - but this is absurd.\n\nI\'m leaving. Maybe I can find a captain here who can get me where I\'m going in reasonable time."
    ;
  }
  FUN_00402690(local_2c,pcVar6,uVar2);
  FUN_004024e0(&stack0xffffffa4,local_2c);
  local_8._0_1_ = 1;
  uVar2 = 0;
  local_74[0] = 0;
  FUN_00402690(local_74,"Departing",9);
  local_8._0_1_ = 2;
  FUN_004024e0(&stack0xffffff74,(undefined4 *)(param_1 + 0x10));
  local_8._0_1_ = 3;
  pvVar3 = (void *)FUN_00412700();
  local_8._0_1_ = 0;
  FUN_0043aad0(pvVar3,in_stack_ffffff74);
  pbVar5 = (byte *)(uVar2 & 0xffffff00);
  uStack_6c = 0x485665;
  FUN_00402690(&stack0xffffffa0,"has_passenger",0xd);
  local_8._0_1_ = 4;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a0ee0(this,pbVar5);
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar3 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004856d0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int iVar6;
  int *piVar7;
  float in_XMM0_Da;
  undefined4 *in_stack_ffffff2c;
  void *in_stack_ffffff44;
  void **ppvVar8;
  byte *pbVar9;
  uint in_stack_ffffff5c;
  uint local_78;
  int local_74;
  void *local_70 [4];
  undefined4 local_60;
  uint local_5c;
  void *local_58;
  void *pvStack_54;
  void *pvStack_50;
  void *pvStack_4c;
  undefined8 local_48;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b94cd;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"%s has disembarked.");
  pvVar4 = (void *)(in_stack_ffffff5c & 0xffffff00);
  FUN_00402690(&stack0xffffff5c,"Passenger",9);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,param_1[2],pvVar4);
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,
               "%dc credits received from passenger.");
  if (*param_1 == 0) {
    local_30 = 0;
    local_2c = 0xf;
    local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
    local_48 = 0xf00000000;
    local_58 = (void *)((uint)local_58 & 0xffffff00);
    local_14 = 0xc;
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000001;
    bVar1 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar1 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar1) {
      FUN_00402690(local_40,"Thank you!",10);
      ppvVar8 = (void **)FUN_00591e00((undefined1 *)local_70,
                                      "Thank you!\n\nJust disembarked. As agreed, I\'ve transferred you %d credits."
                                     );
      if (&local_58 != ppvVar8) {
        FUN_00401b20((int *)&local_58);
        local_58 = *ppvVar8;
        pvStack_54 = ppvVar8[1];
        pvStack_50 = ppvVar8[2];
        pvStack_4c = ppvVar8[3];
        local_48 = *(undefined8 *)(ppvVar8 + 4);
        ppvVar8[4] = (void *)0x0;
        ppvVar8[5] = (void *)0xf;
        *(undefined1 *)ppvVar8 = 0;
      }
      if (0xf < local_5c) {
        pvVar4 = local_70[0];
        if ((0xfff < local_5c + 1) &&
           (pvVar4 = *(void **)((int)local_70[0] + -4),
           0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
    }
    else {
      FUN_00402690(local_40,"Arrived",7);
      ppvVar8 = (void **)FUN_00591e00((undefined1 *)local_70,
                                      "Thanks. %d credits should be in your account now.");
      if (&local_58 != ppvVar8) {
        FUN_00401b20((int *)&local_58);
        local_58 = *ppvVar8;
        pvStack_54 = ppvVar8[1];
        pvStack_50 = ppvVar8[2];
        pvStack_4c = ppvVar8[3];
        local_48 = *(undefined8 *)(ppvVar8 + 4);
        ppvVar8[4] = (void *)0x0;
        ppvVar8[5] = (void *)0xf;
        *(undefined1 *)ppvVar8 = 0;
      }
      if (0xf < local_5c) {
        pvVar4 = local_70[0];
        if ((0xfff < local_5c + 1) &&
           (pvVar4 = *(void **)((int)local_70[0] + -4),
           0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      local_60 = 0;
      local_5c = 0xf;
      local_70[0] = (void *)((uint)local_70[0] & 0xffffff00);
    }
    ppvVar8 = &local_58;
    FUN_004024e0(&stack0xffffff5c,ppvVar8);
    local_14._0_1_ = 0xd;
    FUN_004024e0(&stack0xffffff44,local_40);
    local_14._0_1_ = 0xe;
    FUN_004024e0(&stack0xffffff2c,param_1 + 4);
    local_14._0_1_ = 0xf;
    pvVar4 = (void *)FUN_00412700();
    local_14._0_1_ = 0xc;
    FUN_0043aad0(pvVar4,in_stack_ffffff2c);
    local_14 = CONCAT31(local_14._1_3_,0xb);
    if (0xf < local_48._4_4_) {
      pvVar4 = local_58;
      if ((0xfff < local_48._4_4_ + 1) &&
         (pvVar4 = *(void **)((int)local_58 + -4), 0x1f < (uint)((int)local_58 + (-4 - (int)pvVar4))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    local_14 = 0xffffffff;
    if (0xf < local_2c) {
      pvVar4 = local_40[0];
      if ((0xfff < local_2c + 1) &&
         (pvVar4 = *(void **)((int)local_40[0] + -4),
         0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
  }
  else {
    FUN_00591070("WORLD","Passenger just delivered has a quirk, \'%s\'.");
    piVar7 = (int *)(*param_1 + 0x4c);
    local_78 = 0;
    if ((*piVar7 == 0) && (*(int *)(*param_1 + 0x54) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_78 = FUN_00591370(piVar7);
    }
    pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
    FUN_00402690(&stack0xffffff5c,"passengermulti",0xe);
    local_14 = 0;
    if (DAT_0065c294 == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_005adb0f(0x28);
      local_14 = CONCAT31(local_14._1_3_,1);
      DAT_0065c294 = (void *)FUN_0051e500(puVar2);
    }
    local_14 = 0xffffffff;
    ppvVar8 = (void **)0x485848;
    bVar1 = FUN_0051e7c0(DAT_0065c294,pvVar4);
    if (bVar1) {
      pvVar4 = (void *)((uint)pvVar4 & 0xffffff00);
      FUN_00402690(&stack0xffffff5c,"passengermulti",0xe);
      local_14 = 2;
      if (DAT_0065c294 == (void *)0x0) {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_14 = CONCAT31(local_14._1_3_,3);
        DAT_0065c294 = (void *)FUN_0051e500(puVar2);
      }
      local_14 = 0xffffffff;
      ppvVar8 = (void **)0x4858b4;
      FUN_0051e820(DAT_0065c294,pvVar4);
      local_30 = 0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      local_78 = (uint)((float)(int)local_78 * in_XMM0_Da);
      FUN_00402690(local_40,"passengermulti",0xe);
      local_14 = 4;
      if (DAT_0065c294 == (void *)0x0) {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_14 = CONCAT31(local_14._1_3_,5);
        DAT_0065c294 = (void *)FUN_0051e500(puVar2);
      }
      local_14 = 6;
      FUN_004a2a30((void *)((int)DAT_0065c294 + 0x10),(byte *)local_40);
      local_14 = 0xffffffff;
      if (0xf < local_2c) {
        pvVar4 = local_40[0];
        if ((0xfff < local_2c + 1) &&
           (pvVar4 = *(void **)((int)local_40[0] + -4),
           0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      local_30 = 0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      FUN_00591070("WORLD","(Modifying bonus amount by %f\'");
    }
    FUN_00591070("WORLD","Player getting a %d credit bonus.");
    iVar3 = *param_1;
    iVar6 = (*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34)) / 0x18;
    if (iVar6 != 0) {
      iVar3 = rand();
      FUN_004024e0(&stack0xffffff44,
                   (undefined4 *)(*(int *)(*param_1 + 0x34) + (iVar3 % iVar6) * 0x18));
      FUN_004dbd80((int *)&stack0xffffff5c,*(int *)(DAT_0065b5cc + 0xd0),0,local_78,
                   in_stack_ffffff44);
      local_14 = 7;
      ppvVar8 = (void **)&DAT_0000000f;
      FUN_00402690(&stack0xffffff44,"Thanks!",7);
      local_14._0_1_ = 8;
      FUN_004024e0(&stack0xffffff2c,param_1 + 4);
      local_14 = CONCAT31(local_14._1_3_,9);
      pvVar4 = (void *)FUN_00412700();
      local_14 = 0xffffffff;
      FUN_0043aad0(pvVar4,in_stack_ffffff2c);
      iVar3 = *param_1;
    }
    piVar7 = (int *)(iVar3 + 0x24);
    local_78 = 0;
    iVar6 = *(int *)(iVar3 + 0x28) - *piVar7;
    iVar3 = iVar6 >> 0x1f;
    if (iVar6 / 0x18 + iVar3 != iVar3) {
      local_74 = 0;
      do {
        FUN_004024e0(&stack0xffffff58,(undefined4 *)(*piVar7 + local_74));
        local_14 = 10;
        puVar2 = FUN_00412df0();
        local_14 = 0xffffffff;
        FUN_004a0ee0(puVar2,(byte *)ppvVar8);
        local_78 = local_78 + 1;
        local_74 = local_74 + 0x18;
        piVar7 = (int *)(*param_1 + 0x24);
      } while (local_78 < (uint)((*(int *)(*param_1 + 0x28) - *piVar7) / 0x18));
    }
  }
  pbVar9 = (byte *)((uint)ppvVar8 & 0xffffff00);
  FUN_00402690(&stack0xffffff58,"has_passenger",0xd);
  local_14 = 0x10;
  puVar2 = FUN_00412df0();
  local_14 = 0xffffffff;
  FUN_004a0ee0(puVar2,pbVar9);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined4 * __thiscall FUN_00485da0(void *this,undefined4 *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_20;
  byte **local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b9521;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar6 = *(int *)this;
  local_20 = 0;
  if (*(int *)((int)this + 4) - iVar6 >> 2 != 0) {
    do {
      iVar1 = local_20 * 4;
      pbVar5 = *(byte **)(iVar1 + iVar6);
      local_1c = &param_2;
      if (0xf < in_stack_0000001c) {
        local_1c = (byte **)param_2;
      }
      pbVar7 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar7 = *(byte **)pbVar5;
      }
      uVar3 = FUN_004031f0(pbVar7,*(uint *)(pbVar5 + 0x10),(byte *)local_1c,in_stack_00000018);
      if ((char)uVar3 != '\0') {
        uVar3 = 0;
        if (*(int *)(*(int *)(iVar1 + iVar6) + 0x44) - *(int *)(*(int *)(iVar1 + iVar6) + 0x40) >> 2
            != 0) {
          iVar4 = *(int *)(*(int *)(iVar1 + iVar6) + 0x40);
          do {
            FUN_004a23b0(*(void **)(iVar4 + uVar3 * 4),
                         *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
            uVar3 = uVar3 + 1;
            iVar6 = *(int *)this;
            iVar4 = *(int *)(*(int *)(iVar6 + iVar1) + 0x40);
          } while (uVar3 < (uint)(*(int *)(*(int *)(iVar6 + iVar1) + 0x44) - iVar4 >> 2));
        }
        puVar2 = (undefined4 *)param_1[1];
        if ((undefined4 *)param_1[2] == puVar2) {
          FUN_00414080(param_1,puVar2,(undefined4 *)(iVar1 + iVar6));
        }
        else {
          *puVar2 = *(undefined4 *)(iVar1 + iVar6);
          param_1[1] = param_1[1] + 4;
        }
      }
      local_20 = local_20 + 1;
      iVar6 = *(int *)this;
    } while (local_20 < (uint)(*(int *)((int)this + 4) - iVar6 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pbVar5 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar5 = *(byte **)(param_2 + -4), (byte *)0x1f < param_2 + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_00485f60(undefined4 *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b95bf;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xf;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xf;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0xf;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0xf;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 1;
  param_1[0x39] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3d] = 0xffffffff;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0xffffffff;
  param_1[0x45] = 0xffffffff;
  param_1[0x46] = 0xffffffff;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  iVar4 = 0;
  puVar3 = param_1;
  do {
    local_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    local_58[0] = 0;
    local_44 = 0xffffffff;
    uStack_40 = 0xffffffff;
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    local_20 = 0;
    local_1c = 0xf;
    local_30 = (void *)((uint)local_30 & 0xffffff00);
    local_18 = 0;
    local_8 = CONCAT31(local_8._1_3_,10);
    puVar1 = (undefined1 *)param_1[0x48];
    if ((undefined1 *)param_1[0x49] == puVar1) {
      FUN_0049b7f0(param_1 + 0x47,puVar1,local_58);
      puVar3 = extraout_ECX_00;
    }
    else {
      FUN_0049b770(puVar3,puVar1,local_58);
      param_1[0x48] = param_1[0x48] + 0x44;
      puVar3 = extraout_ECX;
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    if (0xf < local_1c) {
      pvVar2 = local_30;
      if (0xfff < local_1c + 1) {
        pvVar2 = *(void **)((int)local_30 + -4);
        if (0x1f < (uint)((int)local_30 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
      puVar3 = extraout_ECX_01;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00486220(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x3c)) {
    pvVar1 = *(void **)(param_1 + 0x28);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x3c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


byte * __thiscall FUN_00486270(void *this,char param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  void *this_00;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  void *pvVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_38 [5];
  uint local_24;
  void *local_20;
  byte *local_1c;
  byte *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pbVar7 = param_2;
  puStack_c = &LAB_005b9612;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar8 = (byte *)0x0;
  pbVar9 = *(byte **)this;
  local_18[0] = (byte *)(*(int *)((int)this + 4) - (int)pbVar9 >> 2);
  local_20 = this;
  local_1c = pbVar9;
  if (local_18[0] != (byte *)0x0) {
    do {
      pbVar1 = *(byte **)pbVar9;
      ppbVar3 = &param_2;
      if (0xf < in_stack_0000001c) {
        ppbVar3 = (byte **)pbVar7;
      }
      pbVar5 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar5 = *(byte **)pbVar1;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar1 + 0x10),(byte *)ppbVar3,in_stack_00000018);
      if ((char)uVar4 != '\0') {
        pbVar9 = *(byte **)(local_1c + (int)pbVar8 * 4);
        goto LAB_004864c0;
      }
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 4;
    } while (pbVar8 < local_18[0]);
  }
  this_00 = local_20;
  if (param_1 == '\0') {
    pbVar9 = (byte *)0x0;
  }
  else {
    pbVar9 = (byte *)FUN_005adb0f(0xac);
    local_8._0_1_ = 1;
    local_1c = pbVar9;
    FUN_004024e0(local_38,&param_2);
    local_8._0_1_ = 2;
    FUN_004024e0(pbVar9,local_38);
    pbVar9[0x28] = 0;
    pbVar9[0x29] = 0;
    pbVar9[0x2a] = 0;
    pbVar9[0x2b] = 0;
    pbVar9[0x2c] = 0xf;
    pbVar9[0x2d] = 0;
    pbVar9[0x2e] = 0;
    pbVar9[0x2f] = 0;
    pbVar9[0x18] = 0;
    pbVar9[0x30] = 0;
    pbVar9[0x31] = 0;
    pbVar9[0x32] = 0;
    pbVar9[0x33] = 0;
    pbVar9[0x34] = 0;
    pbVar9[0x35] = 0;
    pbVar9[0x36] = 0;
    pbVar9[0x37] = 0;
    pbVar9[0x38] = 0;
    pbVar9[0x39] = 0;
    pbVar9[0x3a] = 0;
    pbVar9[0x3b] = 0;
    pbVar9[0x3c] = 0;
    pbVar9[0x3d] = 0;
    pbVar9[0x3e] = 0;
    pbVar9[0x3f] = 0;
    pbVar9[0x40] = 0;
    pbVar9[0x41] = 0;
    pbVar9[0x42] = 0;
    pbVar9[0x43] = 0;
    pbVar9[0x44] = 0;
    pbVar9[0x45] = 0;
    pbVar9[0x46] = 0;
    pbVar9[0x47] = 0;
    pbVar9[0x48] = 0x9a;
    pbVar9[0x49] = 0x99;
    pbVar9[0x4a] = 0x19;
    pbVar9[0x4b] = 0x3f;
    pbVar9[0x4c] = 0;
    pbVar9[0x4d] = 0;
    pbVar9[0x4e] = 0;
    pbVar9[0x4f] = 0;
    pbVar9[0x50] = 0;
    pbVar9[0x51] = 0;
    pbVar9[0x52] = 0;
    pbVar9[0x53] = 0;
    pbVar9[0x54] = 0;
    pbVar9[0x55] = 0;
    pbVar9[0x56] = 0;
    pbVar9[0x57] = 0;
    pbVar9[0x58] = 0;
    pbVar9[0x59] = 0;
    pbVar9[0x5a] = 0;
    pbVar9[0x5b] = 0;
    pbVar9[0x5c] = 0;
    pbVar9[0x5d] = 0;
    pbVar9[0x5e] = 0;
    pbVar9[0x5f] = 0;
    pbVar9[0x60] = 0;
    pbVar9[0x61] = 0;
    pbVar9[0x62] = 0;
    pbVar9[99] = 0;
    pbVar9[100] = 0;
    pbVar9[0x65] = 0;
    pbVar9[0x66] = 0;
    pbVar9[0x67] = 0;
    pbVar9[0x68] = 0;
    pbVar9[0x69] = 0;
    pbVar9[0x6a] = 0;
    pbVar9[0x6b] = 0;
    pbVar9[0x6c] = 0;
    pbVar9[0x6d] = 0;
    pbVar9[0x6e] = 0;
    pbVar9[0x6f] = 0;
    pbVar9[0x70] = 0;
    pbVar9[0x71] = 0;
    pbVar9[0x72] = 0;
    pbVar9[0x73] = 0;
    pbVar9[0x74] = 0;
    pbVar9[0x75] = 0;
    pbVar9[0x76] = 0;
    pbVar9[0x77] = 0;
    pbVar9[0x78] = 0;
    pbVar9[0x79] = 0;
    pbVar9[0x7a] = 0;
    pbVar9[0x7b] = 0;
    pbVar9[0x7c] = 0;
    pbVar9[0x7d] = 0;
    pbVar9[0x7e] = 0;
    pbVar9[0x7f] = 0;
    pbVar9[0x80] = 0;
    pbVar9[0x81] = 0;
    pbVar9[0x82] = 0;
    pbVar9[0x83] = 0;
    pbVar9[0x84] = 0;
    pbVar9[0x85] = 0;
    pbVar9[0x86] = 0;
    pbVar9[0x87] = 0;
    pbVar9[0x88] = 0;
    pbVar9[0x89] = 0;
    pbVar9[0x8a] = 0;
    pbVar9[0x8b] = 0;
    pbVar9[0x8c] = 0;
    pbVar9[0x8d] = 0;
    pbVar9[0x8e] = 0;
    pbVar9[0x8f] = 0;
    pbVar9[0x90] = 0;
    pbVar9[0x91] = 0;
    pbVar9[0x92] = 0;
    pbVar9[0x93] = 0;
    pbVar9[0x94] = 0;
    pbVar9[0x95] = 0;
    pbVar9[0x96] = 0;
    pbVar9[0x97] = 0;
    pbVar9[0x98] = 0;
    pbVar9[0x99] = 0;
    pbVar9[0x9a] = 0;
    pbVar9[0x9b] = 0;
    pbVar9[0x9c] = 0;
    pbVar9[0x9d] = 0;
    pbVar9[0x9e] = 0;
    pbVar9[0x9f] = 0;
    pbVar9[0xa0] = 0;
    pbVar9[0xa1] = 0;
    pbVar9[0xa2] = 0;
    pbVar9[0xa3] = 0;
    pbVar9[0xa4] = 0;
    pbVar9[0xa5] = 0;
    pbVar9[0xa6] = 0;
    pbVar9[0xa7] = 0;
    pbVar9[0xa8] = 0;
    pbVar9[0xa9] = 0;
    pbVar9[0xaa] = 0;
    pbVar9[0xab] = 0;
    local_8._0_1_ = 1;
    if (0xf < local_24) {
      pvVar6 = local_38[0];
      if ((0xfff < local_24 + 1) &&
         (pvVar6 = *(void **)((int)local_38[0] + -4),
         0x1f < (uint)((int)local_38[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_18[0] = pbVar9;
    FUN_0049ed80();
    FUN_0049ec00(pbVar9);
    puVar2 = *(undefined4 **)((int)this_00 + 4);
    if (*(undefined4 **)((int)this_00 + 8) == puVar2) {
      FUN_00414080(this_00,puVar2,local_18);
      pbVar7 = param_2;
      pbVar9 = local_18[0];
    }
    else {
      *puVar2 = pbVar9;
      *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 4;
      pbVar7 = param_2;
    }
  }
LAB_004864c0:
  if (0xf < in_stack_0000001c) {
    pbVar8 = pbVar7;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar8 = *(byte **)(pbVar7 + -4), (byte *)0x1f < pbVar7 + (-4 - (int)pbVar8))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar8);
  }
  ExceptionList = local_10;
  return pbVar9;
}


void FUN_00486510(void)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if ((iVar1 != 0) && (pbVar2 = *(byte **)(iVar1 + 0x398), pbVar2 != (byte *)0x0)) {
    FUN_0049e7b0((int)pbVar2);
    FUN_0049e810((undefined4 *)pbVar2);
    FUN_0049ea50(pbVar2);
    return;
  }
  return;
}


void FUN_00486550(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  bool bVar5;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9650;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x254);
    bVar5 = false;
    if (iVar1 != 0) {
      bVar5 = *(int *)(iVar1 + 0x158) == 1;
    }
    if (bVar5) {
      local_34 = 0;
      uStack_30 = 0xf;
      local_44 = local_44 & 0xffffff00;
      local_8 = 0;
      if (param_2 == 0) {
        puVar2 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,"`!%s\n`0Commodities Trading Terminal\n");
        local_8._0_1_ = 1;
        puVar3 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar3 = (undefined4 *)*puVar2;
        }
        FUN_00403640(&local_44,puVar3,puVar2[4]);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar4 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar4 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4))))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
LAB_004866ae:
          FUN_005adb3f(pvVar4);
        }
LAB_004866b8:
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      else {
        if (param_2 == 1) {
          puVar3 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,"`!%s\n`!Component Trading Terminal\n");
          local_8._0_1_ = 2;
          FUN_00403490(&local_44,puVar3);
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_18) {
            pvVar4 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar4 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            goto LAB_004866ae;
          }
          goto LAB_004866b8;
        }
        if (param_2 == 2) {
          FUN_00403640(&local_44,
                       "`8[DBG 0x0012] `7exec wirenode.com\n`@Specialised Commodity Terminal\n",0x44
                      );
        }
      }
      puVar2 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"`%%User: `7%s `%%Acc: `7%d\n`%%Balance: `$%dc\n"
                           );
      local_8 = CONCAT31(local_8._1_3_,3);
      puVar3 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar3 = (undefined4 *)*puVar2;
      }
      FUN_00403640(&local_44,puVar3,puVar2[4]);
      if (0xf < local_18) {
        pvVar4 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar4 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = local_44;
      param_1[1] = uStack_40;
      param_1[2] = uStack_3c;
      param_1[3] = uStack_38;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_30,local_34);
      goto LAB_0048679d;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_00402690(param_1,"**not docked with space station: this screen should never appear",0x40);
LAB_0048679d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004867c0(void *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 extraout_ECX_00;
  void *pvVar5;
  undefined4 *puVar6;
  Color3B *this;
  undefined4 extraout_ECX_01;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  void *in_stack_fffffe24;
  undefined1 local_1c0 [8];
  undefined4 uStack_1b8;
  uchar uVar10;
  Color3B local_181 [3];
  Color3B local_17e [3];
  Color3B local_17b [3];
  Color3B local_178 [3];
  Color3B local_175 [3];
  Color3B local_172 [3];
  Color3B local_16f [3];
  char local_16c;
  undefined3 uStack_16b;
  void *local_168;
  undefined1 *local_164;
  int local_160;
  undefined1 *local_15c;
  undefined2 local_158;
  undefined1 local_156;
  char local_151;
  undefined2 local_150;
  undefined1 local_14e;
  undefined1 local_14c [96];
  undefined1 local_ec [96];
  undefined1 local_8c [96];
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b96ca;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_151 = param_2;
  _local_16c = CONCAT31(uStack_16b,param_2);
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
LAB_00486d68:
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  local_168 = (void *)0x0;
  if (iVar1 != 0) {
    local_168 = *(void **)(iVar1 + 0x398);
  }
  local_164 = (undefined1 *)0x0;
  local_160 = 0xc;
LAB_00486850:
  iVar1 = local_160;
  local_15c = *(undefined1 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  if (*(int *)((int)local_15c + local_160) != 0) {
    if (*(int *)(*(int *)((int)local_15c + local_160) + 4) != -1) {
      puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x84);
      uVar7 = 0;
      uVar9 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar6 >> 2;
      if (uVar9 != 0) {
        do {
          piVar8 = (int *)*puVar6;
          if (*piVar8 == *(int *)(*(int *)(local_160 + (int)local_15c) + 4)) goto LAB_00486be0;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 < uVar9);
      }
      piVar8 = (int *)0x0;
LAB_00486be0:
      cocos2d::Color3B::Color3B((Color3B *)&local_158,'@','@','@');
      if (piVar8[0x17] == 1) {
        uVar10 = '@';
        this = local_17e;
LAB_00486c16:
        puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(this,0x80,'@',uVar10);
        local_158 = *puVar3;
        local_156 = *(undefined1 *)(puVar3 + 1);
      }
      else if (piVar8[0x17] == 2) {
        uVar10 = 0x80;
        this = local_181;
        goto LAB_00486c16;
      }
      if (local_168 != (void *)0x0) {
        FUN_0049d160(local_168,*piVar8,'\0');
      }
      local_15c = local_164;
      if (local_151 == '\0') {
        local_15c = *(undefined1 **)
                     (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_160) + 4);
      }
      FUN_004024e0(local_1c0,piVar8 + 1);
      local_8 = 5;
      FUN_00591e00(&stack0xfffffe24,"%s_Detail.png");
      local_8 = 0xffffffff;
      puVar2 = FUN_0043b590(local_14c,local_15c,in_stack_fffffe24);
      local_8 = 6;
      puVar6 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar6) {
        FUN_0043ce10(param_1,puVar6,puVar2);
      }
      else {
        FUN_0043cd30(extraout_ECX_01,puVar6,puVar2);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      local_8 = 0xffffffff;
      FUN_0043bfa0((int)local_14c);
      goto LAB_00486d43;
    }
    cocos2d::Color3B::Color3B((Color3B *)&local_150,'@','@','@');
    iVar4 = 1;
    local_15c = *(undefined1 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    do {
      if (*(char *)(iVar4 + *(int *)((int)local_15c + iVar1)) == '\0') {
        iVar4 = 1;
        goto LAB_004869d0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_172,'@',0x80,'@');
    local_150 = *puVar3;
    local_14e = *(undefined1 *)(puVar3 + 1);
    goto LAB_00486a70;
  }
  cocos2d::Color3B::Color3B(local_16f,'\0','\0','\0');
  local_15c = local_1c0;
  local_1c0[0] = 0;
  FUN_00402690(local_1c0,"No Pod",6);
  local_8 = 0;
  in_stack_fffffe24 = (void *)((uint)in_stack_fffffe24 & 0xffffff00);
  FUN_00402690(&stack0xfffffe24,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  puVar2 = FUN_0043b590(local_8c,local_164,in_stack_fffffe24);
  local_8 = 1;
  puVar6 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar6) {
    FUN_0043ce10(param_1,puVar6,puVar2);
    local_8 = 0xffffffff;
    FUN_0043bfa0((int)local_8c);
    local_160 = iVar1;
  }
  else {
    FUN_0043cd30(extraout_ECX,puVar6,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
    local_8 = 0xffffffff;
    FUN_0043bfa0((int)local_8c);
    local_160 = iVar1;
  }
  goto LAB_00486d43;
  while (iVar4 = iVar4 + 1, iVar4 < 3) {
LAB_004869d0:
    if (*(char *)(iVar4 + *(int *)((int)local_15c + iVar1)) != '\0') {
      if (*(char *)(*(int *)((int)local_15c + iVar1) + 1) == '\0') {
        if (*(char *)(*(int *)((int)local_15c + iVar1) + 2) != '\0') {
          puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_17b,0x80,'@',0x80);
          local_150 = *puVar3;
          local_14e = *(undefined1 *)(puVar3 + 1);
        }
      }
      else {
        puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_178,0x80,'@','@');
        local_150 = *puVar3;
        local_14e = *(undefined1 *)(puVar3 + 1);
      }
      goto LAB_00486a70;
    }
  }
  puVar3 = (undefined2 *)cocos2d::Color3B::Color3B(local_175,'@','@','@');
  local_150 = *puVar3;
  local_14e = *(undefined1 *)(puVar3 + 1);
LAB_00486a70:
  uStack_1b8 = 0x486aad;
  FUN_005069b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),(undefined1 *)local_2c,
               (uint)local_164,'\0');
  local_8 = 2;
  local_15c = local_1c0;
  FUN_00591e00(local_1c0,"empty %s pod");
  local_8._0_1_ = 3;
  in_stack_fffffe24 = (void *)((uint)in_stack_fffffe24 & 0xffffff00);
  FUN_00402690(&stack0xfffffe24,&PTR_005ce008,0);
  local_8._0_1_ = 2;
  puVar2 = FUN_0043b590(local_ec,*(undefined4 *)
                                  (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + iVar1)
                                  + 4),in_stack_fffffe24);
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar6 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) == puVar6) {
    FUN_0043ce10(param_1,puVar6,puVar2);
  }
  else {
    FUN_0043cd30(extraout_ECX_00,puVar6,puVar2);
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
  }
  FUN_0043bfa0((int)local_ec);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar5 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_160 = iVar1;
LAB_00486d43:
  local_164 = local_164 + 1;
  local_160 = local_160 + 4;
  if (0x43 < local_160) goto LAB_00486d68;
  goto LAB_00486850;
}


void FUN_00486d90(int *param_1,byte param_2)

{
  bool bVar1;
  uint uVar2;
  Color3B *pCVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  void *pvVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  Color3B local_91 [3];
  Color3B local_8e [3];
  Color3B local_8b [3];
  Color3B local_88 [3];
  Color3B local_85 [3];
  Color3B local_82 [3];
  Color3B local_7f [3];
  void *local_7c;
  int local_78;
  uint local_74;
  int *local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  int local_68;
  undefined2 local_64;
  undefined1 local_62;
  char local_5d;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9708;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_70 = param_1;
  if ((*(int *)(DAT_0065b5cc + 0xd0) == 0) ||
     (iVar13 = *param_1, (param_1[1] - iVar13) / 0x60 != 0xe)) {
LAB_0048710b:
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_7c = (void *)0x0;
  iVar7 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if (iVar7 != 0) {
    local_7c = *(void **)(iVar7 + 0x398);
  }
  local_74 = 0;
  local_78 = 0;
  local_68 = 0xc;
LAB_00486e30:
  iVar14 = local_78;
  iVar7 = *(int *)(local_68 + *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
  if (iVar7 == 0) {
    if (*(uint *)(iVar13 + local_78) == local_74) {
      iVar7 = iVar13 + local_78;
      pbVar5 = (byte *)(iVar7 + 4);
      if (0xf < *(uint *)(iVar13 + 0x18 + local_78)) {
        pbVar5 = *(byte **)(iVar7 + 4);
      }
      uVar2 = FUN_004031f0(pbVar5,*(uint *)(iVar7 + 0x14),(byte *)&PTR_005ce008,0);
      if (((char)uVar2 != '\0') && (*(int *)(iVar13 + 0x1c + iVar14) == -1)) {
        iVar7 = iVar13 + iVar14;
        pbVar5 = (byte *)(iVar7 + 0x20);
        if (0xf < *(uint *)(iVar13 + 0x34 + iVar14)) {
          pbVar5 = *(byte **)(iVar7 + 0x20);
        }
        uVar2 = FUN_004031f0(pbVar5,*(uint *)(iVar7 + 0x30),(byte *)"No Pod",6);
        if ((char)uVar2 != '\0') {
          pCVar3 = (Color3B *)cocos2d::Color3B::Color3B(local_7f,'\0','\0','\0');
          bVar1 = cocos2d::Color3B::operator!=((Color3B *)(iVar14 + 0x58 + iVar13),pCVar3);
          if ((!bVar1) && (iVar13 = *local_70, *(int *)(iVar13 + 0x50 + iVar14) == -999)) {
            bVar1 = *(char *)(iVar13 + 0x5e + iVar14) == '\0';
LAB_004872f0:
            if (bVar1) goto LAB_004872f6;
          }
        }
      }
    }
  }
  else {
    iVar13 = *(int *)(iVar7 + 4);
    if (iVar13 == -1) {
      cocos2d::Color3B::Color3B((Color3B *)&local_64,'@','@','@');
      iVar9 = 1;
      iVar13 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
      iVar7 = *(int *)(local_68 + iVar13);
      do {
        if (*(char *)(iVar7 + iVar9) == '\0') {
          iVar9 = 1;
          goto LAB_00486f46;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      uVar18 = '@';
      uVar17 = 0x80;
      uVar16 = '@';
      pCVar3 = local_82;
      goto LAB_00486f8e;
    }
    piVar6 = FUN_004a84a0(iVar13);
    cocos2d::Color3B::Color3B((Color3B *)&local_6c,'@','@','@');
    if (piVar6[0x17] == 1) {
      uVar18 = '@';
      pCVar3 = local_8e;
LAB_00487164:
      puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar3,0x80,'@',uVar18);
      local_6c = *puVar4;
      local_6a = *(undefined1 *)(puVar4 + 1);
    }
    else if (piVar6[0x17] == 2) {
      uVar18 = 0x80;
      pCVar3 = local_91;
      goto LAB_00487164;
    }
    if (local_7c == (void *)0x0) {
      iVar7 = -1;
    }
    else {
      iVar7 = FUN_0049d160(local_7c,*piVar6,'\0');
    }
    iVar13 = local_78;
    if (param_2 != 0) {
      iVar7 = -1;
    }
    uVar2 = local_74;
    if (*(uint *)(local_78 + *local_70) == (uint)param_2) {
      uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_68) + 4);
    }
    if (uVar2 == 0) {
      pbVar8 = (byte *)FUN_00591e00((undefined1 *)local_44,"%s_Detail.png");
      iVar13 = *local_70 + iVar13;
      pbVar5 = pbVar8;
      if (0xf < *(uint *)(pbVar8 + 0x14)) {
        pbVar5 = *(byte **)pbVar8;
      }
      pbVar12 = (byte *)(iVar13 + 4);
      if (0xf < *(uint *)(iVar13 + 0x18)) {
        pbVar12 = *(byte **)(iVar13 + 4);
      }
      uVar2 = FUN_004031f0(pbVar12,*(uint *)(iVar13 + 0x14),pbVar5,*(uint *)(pbVar8 + 0x10));
      local_5d = (char)uVar2;
      if (0xf < local_30) {
        pvVar11 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar11 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11)))) goto LAB_00487320;
        FUN_005adb3f(pvVar11);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (((local_5d != '\0') &&
          (iVar13 = *local_70 + local_78,
          *(int *)(iVar13 + 0x1c) ==
          *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_68) + 8))) &&
         ((uVar2 = FUN_00413e90((byte *)(iVar13 + 0x20),(byte *)(piVar6 + 1)), (char)uVar2 == '\0'
          && (bVar1 = cocos2d::Color3B::operator!=((Color3B *)(iVar13 + 0x58),(Color3B *)&local_6c),
             !bVar1)))) {
        iVar13 = *local_70;
        if (*(int *)(iVar13 + 0x50 + local_78) == iVar7) {
          iVar14 = local_78;
          if (param_2 == 0) {
            bVar1 = (bool)*(char *)(iVar13 + local_78 + 0x5e) == iVar7 < 1;
          }
          else {
            bVar1 = *(char *)(iVar13 + local_78 + 0x5e) == '\0';
          }
          goto LAB_004872f0;
        }
      }
    }
  }
  goto LAB_0048710b;
  while (iVar9 = iVar9 + 1, iVar9 < 3) {
LAB_00486f46:
    if (*(char *)(iVar7 + iVar9) != '\0') {
      iVar13 = *(int *)(iVar13 + local_68);
      if (*(char *)(iVar13 + 1) == '\0') {
        if (*(char *)(iVar13 + 2) == '\0') goto LAB_00486fa0;
        uVar18 = 0x80;
        pCVar3 = local_8b;
      }
      else {
        uVar18 = '@';
        pCVar3 = local_88;
      }
      uVar17 = '@';
      uVar16 = 0x80;
      goto LAB_00486f8e;
    }
  }
  uVar18 = '@';
  uVar17 = '@';
  uVar16 = '@';
  pCVar3 = local_85;
LAB_00486f8e:
  puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar3,uVar16,uVar17,uVar18);
  local_64 = *puVar4;
  local_62 = *(undefined1 *)(puVar4 + 1);
LAB_00486fa0:
  piVar6 = local_70;
  puVar15 = (uint *)(*local_70 + iVar14);
  uVar2 = local_74;
  if (*puVar15 == (uint)param_2) {
    uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8) + local_68) + 4);
  }
  if (uVar2 != 0) goto LAB_0048710b;
  puVar10 = puVar15 + 1;
  if (0xf < puVar15[6]) {
    puVar10 = (uint *)puVar15[1];
  }
  uVar2 = FUN_004031f0((byte *)puVar10,puVar15[5],(byte *)&PTR_005ce008,0);
  if (((char)uVar2 == '\0') || (puVar15[7] != 0xffffffff)) goto LAB_0048710b;
  FUN_005069b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),(undefined1 *)local_5c,local_74,
               '\0');
  local_8 = 0;
  pbVar5 = (byte *)FUN_00591e00((undefined1 *)local_2c,"empty %s pod");
  uVar2 = FUN_00413e90((byte *)(*piVar6 + 0x20 + iVar14),pbVar5);
  local_5d = (char)uVar2;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_00487320;
    FUN_005adb3f(pvVar11);
  }
  local_8 = 0xffffffff;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_48) {
    pvVar11 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar11 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11)))) {
LAB_00487320:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  if ((((local_5d != '\0') ||
       (bVar1 = cocos2d::Color3B::operator!=
                          ((Color3B *)(*piVar6 + 0x58 + iVar14),(Color3B *)&local_64), bVar1)) ||
      (iVar13 = *piVar6, *(int *)(iVar13 + 0x50 + iVar14) != -999)) ||
     (*(byte *)(iVar13 + 0x5e + iVar14) == param_2)) goto LAB_0048710b;
LAB_004872f6:
  local_78 = iVar14 + 0x60;
  local_68 = local_68 + 4;
  local_74 = local_74 + 1;
  if (0x43 < local_68) goto LAB_0048710b;
  goto LAB_00486e30;
}


void FUN_00487330(void *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 extraout_ECX;
  uint uVar9;
  float fVar10;
  void *in_stack_ffffff20;
  undefined1 auStack_c4 [20];
  undefined4 uStack_b0;
  Color3B local_86 [3];
  Color3B local_83 [3];
  undefined1 *local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9740;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  iVar8 = *(int *)(iVar2 + 0x44);
  if (*(int *)(iVar2 + 0x48) - iVar8 >> 2 != 0) {
    do {
      pfVar3 = *(float **)(uVar9 * 4 + iVar8);
      fVar4 = pfVar3[1];
      fVar1 = *pfVar3;
      if ((float)*(int *)((int)fVar4 + 0x10) <= fVar1) {
        fVar10 = 1.0;
        if (fVar1 < (float)*(int *)((int)fVar4 + 0x14)) {
          fVar10 = 1.0 - (float)*(int *)((int)fVar4 + 0x18) / 100.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      local_80 = (undefined1 *)(int)((float)*(int *)((int)fVar4 + 0x20) * 0.5 * fVar10);
      if ((int)local_80 < 1) {
        local_80 = (undefined1 *)1;
      }
      uStack_b0 = 0x48740c;
      cocos2d::Color3B::Color3B((Color3B *)&local_7c,'\0',0x80,'\0');
      pfVar3 = *(float **)(*(int *)(iVar2 + 0x44) + uVar9 * 4);
      fVar4 = pfVar3[1];
      fVar1 = *pfVar3;
      if ((float)*(int *)((int)fVar4 + 0x10) <= fVar1) {
        if (fVar1 < (float)*(int *)((int)fVar4 + 0x14)) {
          uStack_b0 = 0x48746e;
          puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_86,0x80,0x80,'\0');
          local_7c = *puVar6;
          local_7a = *(undefined1 *)(puVar6 + 1);
        }
      }
      else {
        uStack_b0 = 0x487439;
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_83,0x80,'\0','\0');
        local_7c = *puVar6;
        local_7a = *(undefined1 *)(puVar6 + 1);
      }
      local_80 = auStack_c4;
      FUN_004024e0(auStack_c4,
                   (undefined4 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x44) + uVar9 * 4) + 4) + 0x38)
                  );
      local_8 = 0;
      FUN_00591e00(&stack0xffffff20,"%s.png");
      local_8 = 0xffffffff;
      puVar7 = FUN_0043b590(local_78,uVar9,in_stack_ffffff20);
      local_8 = 1;
      puVar5 = *(undefined4 **)((int)param_1 + 4);
      if (*(undefined4 **)((int)param_1 + 8) == puVar5) {
        FUN_0043ce10(param_1,puVar5,puVar7);
      }
      else {
        FUN_0043cd30(extraout_ECX,puVar5,puVar7);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
      }
      local_8 = 0xffffffff;
      FUN_0043bfa0((int)local_78);
      uVar9 = uVar9 + 1;
      iVar8 = *(int *)(iVar2 + 0x44);
    } while (uVar9 < (uint)(*(int *)(iVar2 + 0x48) - iVar8 >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00487570(int *param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  uint uVar10;
  Color3B *this;
  byte *pbVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uchar uVar16;
  Color3B local_42 [3];
  Color3B local_3f [3];
  int local_3c;
  int *local_38;
  byte *local_34;
  int local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_25;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_30 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
  iVar13 = *(int *)(local_30 + 0x44);
  iVar14 = *(int *)(local_30 + 0x48) - iVar13 >> 2;
  if (iVar14 == (param_1[1] - *param_1) / 0x60) {
    uVar15 = 0;
    if (iVar14 != 0) {
      iVar14 = 0;
      do {
        pfVar3 = *(float **)(iVar13 + uVar15 * 4);
        local_3c = (int)((float)*(int *)((int)pfVar3[1] + 0x20) * 0.9 * (*pfVar3 / 100.0));
        if (local_3c < 1) {
          local_3c = 1;
        }
        cocos2d::Color3B::Color3B((Color3B *)&local_2c,'\0',0x80,'\0');
        pfVar3 = *(float **)(*(int *)(local_30 + 0x44) + uVar15 * 4);
        fVar4 = pfVar3[1];
        fVar2 = *pfVar3;
        if ((float)*(int *)((int)fVar4 + 0x10) <= fVar2) {
          if (fVar2 < (float)*(int *)((int)fVar4 + 0x14)) {
            uVar16 = 0x80;
            this = local_42;
            goto LAB_00487660;
          }
        }
        else {
          uVar16 = '\0';
          this = local_3f;
LAB_00487660:
          puVar8 = (undefined2 *)cocos2d::Color3B::Color3B(this,0x80,uVar16,'\0');
          local_2c = *puVar8;
          local_2a = *(undefined1 *)(puVar8 + 1);
        }
        piVar6 = local_38;
        if (*(uint *)(iVar14 + *local_38) != uVar15) goto LAB_004877c7;
        pbVar9 = (byte *)FUN_00591e00((undefined1 *)local_24,"%s.png");
        iVar13 = *piVar6 + iVar14;
        local_34 = pbVar9;
        if (0xf < *(uint *)(pbVar9 + 0x14)) {
          local_34 = *(byte **)pbVar9;
        }
        pbVar11 = (byte *)(iVar13 + 4);
        if (0xf < *(uint *)(iVar13 + 0x18)) {
          pbVar11 = *(byte **)(iVar13 + 4);
        }
        uVar10 = FUN_004031f0(pbVar11,*(uint *)(iVar13 + 0x14),local_34,*(uint *)(pbVar9 + 0x10));
        local_25 = (char)uVar10;
        if (0xf < local_10) {
          pvVar12 = local_24[0];
          if ((0xfff < local_10 + 1) &&
             (pvVar12 = *(void **)((int)local_24[0] + -4),
             0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar12);
        }
        if ((local_25 == '\0') || (iVar13 = *piVar6, *(int *)(iVar13 + 0x1c + iVar14) != 1))
        goto LAB_004877c7;
        iVar1 = iVar13 + iVar14;
        iVar5 = *(int *)(*(int *)(*(int *)(local_30 + 0x44) + uVar15 * 4) + 4);
        local_34 = (byte *)(iVar5 + 0x38);
        if (0xf < *(uint *)(iVar5 + 0x4c)) {
          local_34 = *(byte **)local_34;
        }
        pbVar9 = (byte *)(iVar1 + 0x20);
        if (0xf < *(uint *)(iVar1 + 0x34)) {
          pbVar9 = *(byte **)(iVar1 + 0x20);
        }
        uVar10 = FUN_004031f0(pbVar9,*(uint *)(iVar1 + 0x30),local_34,*(uint *)(iVar5 + 0x48));
        if (((((char)uVar10 == '\0') ||
             (bVar7 = cocos2d::Color3B::operator!=
                                ((Color3B *)(iVar13 + 0x58 + iVar14),(Color3B *)&local_2c), bVar7))
            || (*(int *)(*local_38 + 0x50 + iVar14) != local_3c)) ||
           (*(char *)(*local_38 + 0x5e + iVar14) != '\0')) goto LAB_004877c7;
        uVar15 = uVar15 + 1;
        iVar14 = iVar14 + 0x60;
        iVar13 = *(int *)(local_30 + 0x44);
      } while (uVar15 < (uint)(*(int *)(local_30 + 0x48) - iVar13 >> 2));
    }
    __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004877c7:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004877e0(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  void *in_stack_fffffeb0;
  undefined1 local_134 [4];
  undefined4 uStack_130;
  byte *in_stack_fffffed8;
  uchar uVar14;
  Color3B local_fb [3];
  byte *local_f8;
  char *local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined1 local_d9;
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9799;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), iVar12 != 0)) {
    bVar13 = false;
    if (*(int *)(iVar12 + 0x254) != 0) {
      bVar13 = *(int *)(*(int *)(iVar12 + 0x254) + 0x158) == 1;
    }
    if (bVar13) {
      local_f4 = *(char **)((int)this + 0x11c);
      pbVar10 = *(byte **)(iVar12 + 0x398);
      iVar2 = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2;
      iVar12 = DAT_0065b5cc;
      local_f8 = pbVar10;
      if ((iVar2 != 0) && (local_e8 = 0, iVar2 != 0)) {
        do {
          local_f0 = local_e8 * 4;
          local_ec = *(int *)(local_f0 + *(int *)(iVar12 + 0x13c));
          pbVar8 = (byte *)(local_ec + 0x38);
          pbVar3 = pbVar10;
          if (0xf < *(uint *)(pbVar10 + 0x14)) {
            pbVar3 = *(byte **)pbVar10;
          }
          if (0xf < *(uint *)(local_ec + 0x4c)) {
            pbVar8 = *(byte **)pbVar8;
          }
          uVar4 = FUN_004031f0(pbVar8,*(uint *)(local_ec + 0x48),pbVar3,*(uint *)(pbVar10 + 0x10));
          if ((char)uVar4 != '\0') {
            uStack_130 = 0x4878eb;
            FUN_004024e0(&stack0xfffffed8,*(undefined4 **)(local_ec + 0x58));
            local_ec = FUN_004a8380(in_stack_fffffed8);
            iVar12 = DAT_0065b5cc;
            if (0 < *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + local_f0) + 0x58) +
                            0x18)) {
              in_stack_fffffed8 = (byte *)0x487943;
              cocos2d::Color3B::Color3B(local_fb,'@','@','\0');
              local_e0 = local_134;
              local_134[0] = 0;
              FUN_00402690(local_134,&PTR_005ce008,0);
              local_8 = 0;
              FUN_00591e00(&stack0xfffffeb0,"%s_Detail.png");
              local_8 = 0xffffffff;
              puVar5 = FUN_0043b590(local_78,local_e8 + 1000,in_stack_fffffeb0);
              local_8 = 1;
              puVar6 = *(undefined4 **)((int)param_1 + 4);
              if (*(undefined4 **)((int)param_1 + 8) == puVar6) {
                FUN_0043ce10(param_1,puVar6,puVar5);
              }
              else {
                FUN_0043cd30(extraout_ECX,puVar6,puVar5);
                *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
              }
              local_8 = 0xffffffff;
              FUN_0043bfa0((int)local_78);
              iVar12 = DAT_0065b5cc;
            }
          }
          local_e8 = local_e8 + 1;
        } while (local_e8 < (uint)(*(int *)(iVar12 + 0x140) - *(int *)(iVar12 + 0x13c) >> 2));
      }
      local_e0 = *(undefined1 **)(pbVar10 + 0x70);
      local_e8 = 0;
      if (*(int *)(pbVar10 + 0x74) - (int)local_e0 >> 2 != 0) {
        do {
          if ((*local_f4 != '\0') || (0 < *(int *)(*(int *)(local_e0 + local_e8 * 4) + 0x10))) {
            puVar6 = *(undefined4 **)(iVar12 + 0x84);
            uVar4 = 0;
            uVar11 = *(int *)(iVar12 + 0x88) - (int)puVar6 >> 2;
            if (uVar11 != 0) {
              do {
                piVar9 = (int *)*puVar6;
                if (*piVar9 == *(int *)(*(int *)(local_e0 + local_e8 * 4) + 0x14))
                goto LAB_00487ab0;
                uVar4 = uVar4 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar4 < uVar11);
            }
            piVar9 = (int *)0x0;
LAB_00487ab0:
            cocos2d::Color3B::Color3B((Color3B *)&local_e4,'@','@','@');
            if (piVar9[0x17] == 1) {
              uVar14 = '@';
              piVar1 = &local_ec;
LAB_00487ad4:
              puVar7 = (undefined2 *)
                       cocos2d::Color3B::Color3B((Color3B *)((int)piVar1 + 1),0x80,'@',uVar14);
              local_e4 = *puVar7;
              local_e2 = *(undefined1 *)(puVar7 + 1);
            }
            else {
              if (piVar9[0x17] == 2) {
                uVar14 = 0x80;
                piVar1 = &local_f0;
                goto LAB_00487ad4;
              }
            }
            local_d9 = local_e2;
            local_e0._2_2_ = local_e4;
            FUN_0049d0b0(local_f8,*piVar9);
            local_e0 = local_134;
            FUN_004024e0(local_134,piVar9 + 1);
            local_8 = 2;
            FUN_00591e00(&stack0xfffffeb0,"%s_Detail.png");
            local_8 = 0xffffffff;
            puVar5 = FUN_0043b590(local_d8,*piVar9,in_stack_fffffeb0);
            local_8 = 3;
            puVar6 = *(undefined4 **)((int)param_1 + 4);
            if (*(undefined4 **)((int)param_1 + 8) == puVar6) {
              FUN_0043ce10(param_1,puVar6,puVar5);
            }
            else {
              FUN_0043cd30(extraout_ECX_00,puVar6,puVar5);
              *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x60;
            }
            local_8 = 0xffffffff;
            FUN_0043bfa0((int)local_d8);
            pbVar10 = local_f8;
            iVar12 = DAT_0065b5cc;
          }
          local_e0 = *(undefined1 **)(pbVar10 + 0x70);
          local_e8 = local_e8 + 1;
        } while (local_e8 < (uint)(*(int *)(pbVar10 + 0x74) - (int)local_e0 >> 2));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00487c70(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  Color3B *pCVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  void *pvVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  bool bVar16;
  byte *in_stack_ffffff90;
  uchar uVar17;
  Color3B local_4a [3];
  Color3B local_47 [4];
  Color3B local_43 [3];
  char *local_40;
  int *local_3c;
  undefined2 local_38;
  undefined1 local_36;
  int local_34;
  byte *local_30;
  uint local_2c;
  char local_25;
  void *local_24 [4];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178), iVar1 != 0)) {
    bVar16 = false;
    if (*(int *)(iVar1 + 0x254) != 0) {
      bVar16 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1;
    }
    if (bVar16) {
      local_40 = *(char **)((int)this + 0x11c);
      iVar14 = 0;
      iVar3 = *(int *)(DAT_0065b5cc + 0x13c);
      local_30 = *(byte **)(iVar1 + 0x398);
      iVar1 = *(int *)(DAT_0065b5cc + 0x140) - iVar3 >> 2;
      if ((iVar1 != 0) && (uVar12 = 0, iVar1 != 0)) {
        do {
          local_2c = *(uint *)(iVar3 + uVar12 * 4);
          pbVar7 = (byte *)(local_2c + 0x38);
          pbVar4 = local_30;
          if (0xf < *(uint *)(local_30 + 0x14)) {
            pbVar4 = *(byte **)local_30;
          }
          if (0xf < *(uint *)(local_2c + 0x4c)) {
            pbVar7 = *(byte **)pbVar7;
          }
          uVar2 = FUN_004031f0(pbVar7,*(uint *)(local_2c + 0x48),pbVar4,*(uint *)(local_30 + 0x10));
          if ((char)uVar2 == '\0') {
            iVar3 = *(int *)(DAT_0065b5cc + 0x13c);
          }
          else {
            FUN_004024e0(&stack0xffffff90,*(undefined4 **)(local_2c + 0x58));
            FUN_004a8380(in_stack_ffffff90);
            iVar3 = *(int *)(DAT_0065b5cc + 0x13c);
            if (0 < *(int *)(*(int *)(*(int *)(iVar3 + uVar12 * 4) + 0x58) + 0x18)) {
              iVar14 = iVar14 + 1;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >>
                                2));
      }
      piVar13 = *(int **)(local_30 + 0x70);
      for (iVar1 = *(int *)(local_30 + 0x74) - (int)piVar13 >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar3 = *piVar13;
        piVar13 = piVar13 + 1;
        iVar8 = iVar14 + 1;
        if (*(int *)(iVar3 + 0x10) < 1) {
          iVar8 = iVar14;
        }
        iVar14 = iVar8;
      }
      if ((local_3c[1] - *local_3c) / 0x60 != iVar14) {
LAB_00488204:
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar1 = *(int *)(DAT_0065b5cc + 0x13c);
      iVar3 = *(int *)(DAT_0065b5cc + 0x140) - iVar1 >> 2;
      if ((iVar3 != 0) && (local_2c = 0, iVar3 != 0)) {
        do {
          iVar3 = local_2c * 4;
          iVar1 = *(int *)(iVar3 + iVar1);
          pbVar7 = local_30;
          if (0xf < *(uint *)(local_30 + 0x14)) {
            pbVar7 = *(byte **)local_30;
          }
          pbVar4 = (byte *)(iVar1 + 0x38);
          if (0xf < *(uint *)(iVar1 + 0x4c)) {
            pbVar4 = *(byte **)(iVar1 + 0x38);
          }
          local_34 = iVar3;
          uVar12 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0x48),pbVar7,*(uint *)(local_30 + 0x10));
          if ((char)uVar12 != '\0') {
            FUN_004024e0(&stack0xffffff90,*(undefined4 **)(iVar1 + 0x58));
            iVar14 = FUN_004a8380(in_stack_ffffff90);
            piVar13 = local_3c;
            iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + iVar3) + 0x58);
            if (0 < *(int *)(iVar1 + 0x18)) {
              iVar1 = *(int *)(iVar1 + 0x28);
              if (iVar1 == -1) {
                iVar1 = *(int *)(iVar14 + 0x58);
              }
              if (*(int *)*local_3c != local_2c + 1000) goto LAB_00488204;
              pbVar4 = (byte *)FUN_00591e00((undefined1 *)local_24,"%s_Detail.png");
              iVar3 = *piVar13;
              pbVar7 = pbVar4;
              if (0xf < *(uint *)(pbVar4 + 0x14)) {
                pbVar7 = *(byte **)pbVar4;
              }
              pbVar10 = (byte *)(iVar3 + 4);
              if (0xf < *(uint *)(iVar3 + 0x18)) {
                pbVar10 = *(byte **)(iVar3 + 4);
              }
              uVar12 = FUN_004031f0(pbVar10,*(uint *)(iVar3 + 0x14),pbVar7,*(uint *)(pbVar4 + 0x10))
              ;
              local_25 = (char)uVar12;
              if (0xf < local_10) {
                pvVar11 = local_24[0];
                if ((0xfff < local_10 + 1) &&
                   (pvVar11 = *(void **)((int)local_24[0] + -4),
                   0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar11)))) goto LAB_00488058;
                FUN_005adb3f(pvVar11);
              }
              local_14 = 0;
              local_10 = 0xf;
              local_24[0] = (void *)((uint)local_24[0] & 0xffffff00);
              if ((local_25 == '\0') ||
                 (iVar3 = *piVar13,
                 *(int *)(iVar3 + 0x1c) !=
                 *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + local_34) + 0x58) +
                         0x18))) goto LAB_00488204;
              pbVar7 = (byte *)(iVar3 + 0x20);
              if (0xf < *(uint *)(iVar3 + 0x34)) {
                pbVar7 = *(byte **)(iVar3 + 0x20);
              }
              uVar12 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0x30),(byte *)&PTR_005ce008,0);
              if ((char)uVar12 == '\0') goto LAB_00488204;
              pCVar5 = (Color3B *)cocos2d::Color3B::Color3B(local_47,'@','@','\0');
              bVar16 = cocos2d::Color3B::operator!=((Color3B *)(iVar3 + 0x58),pCVar5);
              if (((bVar16) || (*(int *)(*piVar13 + 0x50) != iVar1)) ||
                 (*(char *)(*piVar13 + 0x5e) != (char)-(char)(iVar1 >> 0x1f))) goto LAB_00488204;
            }
          }
          iVar1 = *(int *)(DAT_0065b5cc + 0x13c);
          local_2c = local_2c + 1;
        } while (local_2c < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar1 >> 2));
      }
      local_2c = 0;
      iVar1 = *(int *)(local_30 + 0x70);
      if (*(int *)(local_30 + 0x74) - iVar1 >> 2 != 0) {
        local_34 = 0;
        pbVar7 = local_30;
        iVar3 = DAT_0065b5cc;
        pcVar15 = local_40;
        do {
          if ((*pcVar15 != '\0') || (0 < *(int *)(*(int *)(iVar1 + local_2c * 4) + 0x10))) {
            uVar12 = 0;
            puVar9 = *(undefined4 **)(iVar3 + 0x84);
            uVar2 = *(int *)(iVar3 + 0x88) - (int)puVar9 >> 2;
            if (uVar2 != 0) {
              do {
                piVar13 = (int *)*puVar9;
                if (*piVar13 == *(int *)(*(int *)(iVar1 + local_2c * 4) + 0x14)) goto LAB_00488038;
                uVar12 = uVar12 + 1;
                puVar9 = puVar9 + 1;
              } while (uVar12 < uVar2);
            }
            piVar13 = (int *)0x0;
LAB_00488038:
            cocos2d::Color3B::Color3B((Color3B *)&local_38,'@','@','@');
            if (piVar13[0x17] == 1) {
              uVar17 = '@';
              pCVar5 = local_4a;
LAB_0048806b:
              puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar5,0x80,'@',uVar17);
              local_38 = *puVar6;
              local_36 = *(undefined1 *)(puVar6 + 1);
            }
            else if (piVar13[0x17] == 2) {
              uVar17 = 0x80;
              pCVar5 = local_43;
              goto LAB_0048806b;
            }
            iVar1 = *piVar13;
            iVar3 = FUN_0049d0b0(local_30,iVar1);
            if ((*local_40 != '\0') &&
               (*(int *)(*(int *)(*(int *)(local_30 + 0x70) + local_2c * 4) + 0x10) == 0)) {
              iVar3 = -999;
            }
            if (*(int *)(local_34 + *local_3c) != iVar1) goto LAB_00488204;
            pbVar4 = (byte *)FUN_00591e00((undefined1 *)local_24,"%s_Detail.png");
            iVar1 = local_34 + *local_3c;
            pbVar7 = pbVar4;
            if (0xf < *(uint *)(pbVar4 + 0x14)) {
              pbVar7 = *(byte **)pbVar4;
            }
            pbVar10 = (byte *)(iVar1 + 4);
            if (0xf < *(uint *)(iVar1 + 0x18)) {
              pbVar10 = *(byte **)(iVar1 + 4);
            }
            uVar12 = FUN_004031f0(pbVar10,*(uint *)(iVar1 + 0x14),pbVar7,*(uint *)(pbVar4 + 0x10));
            local_25 = (char)uVar12;
            if (0xf < local_10) {
              pvVar11 = local_24[0];
              if ((0xfff < local_10 + 1) &&
                 (pvVar11 = *(void **)((int)local_24[0] + -4),
                 0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar11)))) {
LAB_00488058:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar11);
            }
            if ((local_25 == '\0') ||
               (iVar1 = local_34 + *local_3c,
               *(int *)(iVar1 + 0x1c) !=
               *(int *)(*(int *)(*(int *)(local_30 + 0x70) + local_2c * 4) + 0x10)))
            goto LAB_00488204;
            pbVar7 = (byte *)(piVar13 + 1);
            if (0xf < (uint)piVar13[6]) {
              pbVar7 = (byte *)piVar13[1];
            }
            pbVar4 = (byte *)(iVar1 + 0x20);
            if (0xf < *(uint *)(iVar1 + 0x34)) {
              pbVar4 = *(byte **)(iVar1 + 0x20);
            }
            uVar12 = FUN_004031f0(pbVar4,*(uint *)(iVar1 + 0x30),pbVar7,piVar13[5]);
            if (((((char)uVar12 == '\0') ||
                 (bVar16 = cocos2d::Color3B::operator!=
                                     ((Color3B *)(iVar1 + 0x58),(Color3B *)&local_38), bVar16)) ||
                (*(int *)(local_34 + 0x50 + *local_3c) != iVar3)) ||
               (*(char *)(local_34 + 0x5e + *local_3c) != (char)-(char)(iVar3 >> 0x1f)))
            goto LAB_00488204;
            local_34 = local_34 + 0x60;
            pbVar7 = local_30;
            iVar3 = DAT_0065b5cc;
            pcVar15 = local_40;
          }
          local_2c = local_2c + 1;
          iVar1 = *(int *)(pbVar7 + 0x70);
        } while (local_2c < (uint)(*(int *)(pbVar7 + 0x74) - iVar1 >> 2));
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}
