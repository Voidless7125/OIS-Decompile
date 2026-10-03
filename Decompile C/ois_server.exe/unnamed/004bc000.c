#include "../ois_server.exe.h"


void __fastcall FUN_004bc350(FILE *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 *in_stack_ffffffbc;
  int local_18;
  uint local_14;
  uint local_10;
  FILE *local_c;
  undefined1 local_5;
  
  pcVar6 = fwrite_exref;
  local_18 = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2;
  local_c = param_1;
  fwrite(&local_18,4,1,param_1);
  uVar5 = 0;
  iVar3 = *(int *)(DAT_0065b5cc + 0x13c);
  if (*(int *)(DAT_0065b5cc + 0x140) - iVar3 >> 2 != 0) {
    do {
      FUN_004be040(param_1,*(undefined4 **)(iVar3 + uVar5 * 4));
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(DAT_0065b5cc + 0x13c);
    } while (uVar5 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar3 >> 2));
  }
  local_5 = 1;
  iVar3 = *(int *)(DAT_0065b5cc + 0x3c);
  local_10 = 0;
  iVar4 = DAT_0065b5cc;
  if (*(int *)(DAT_0065b5cc + 0x40) - iVar3 >> 2 != 0) {
    do {
      local_14 = 0;
      iVar3 = *(int *)(iVar3 + local_10 * 4);
      iVar2 = *(int *)(iVar3 + 0xcc);
      if (*(int *)(iVar3 + 0xd0) - iVar2 >> 2 != 0) {
        do {
          iVar3 = *(int *)(iVar2 + local_14 * 4);
          bVar7 = false;
          iVar2 = *(int *)(iVar3 + 0x254);
          if (iVar2 != 0) {
            bVar7 = *(int *)(iVar2 + 0x158) == 1;
          }
          if ((bVar7) && (puVar1 = *(undefined4 **)(iVar3 + 0x398), puVar1 != (undefined4 *)0x0)) {
            uVar5 = 0;
            iVar3 = puVar1[0x28];
            if (puVar1[0x29] - iVar3 >> 2 != 0) {
              do {
                iVar4 = uVar5 * 4;
                if (*(float *)(*(int *)(iVar4 + iVar3) + 0xa8) != 0.0) {
                  fwrite(&local_5,1,1,local_c);
                  FUN_004024e0(&stack0xffffffbc,puVar1);
                  FUN_004b8810(local_c,in_stack_ffffffbc);
                  FUN_004024e0(&stack0xffffffbc,*(undefined4 **)(puVar1[0x28] + iVar4));
                  FUN_004b8810(local_c,in_stack_ffffffbc);
                  fwrite((void *)(*(int *)(iVar4 + puVar1[0x28]) + 0xa8),4,1,local_c);
                  in_stack_ffffffbc = (undefined4 *)0x4bc520;
                  FUN_00591070("SAVEHANDLER","Wrote contract %s with usage timer at %f");
                }
                uVar5 = uVar5 + 1;
                iVar3 = puVar1[0x28];
                iVar4 = DAT_0065b5cc;
              } while (uVar5 < (uint)(puVar1[0x29] - iVar3 >> 2));
            }
          }
          local_14 = local_14 + 1;
          iVar3 = *(int *)(*(int *)(iVar4 + 0x3c) + local_10 * 4);
          iVar2 = *(int *)(iVar3 + 0xcc);
        } while (local_14 < (uint)(*(int *)(iVar3 + 0xd0) - iVar2 >> 2));
      }
      iVar3 = *(int *)(iVar4 + 0x3c);
      local_10 = local_10 + 1;
      pcVar6 = fwrite_exref;
    } while (local_10 < (uint)(*(int *)(iVar4 + 0x40) - iVar3 >> 2));
  }
  local_5 = 0;
  (*pcVar6)();
  FUN_00591070("SAVEHANDLER","...saved %d current contracts for the player");
  return;
}


void __fastcall FUN_004bc5c0(FILE *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *this;
  byte *****pppppbVar6;
  uint uVar7;
  byte *pbVar8;
  void *pvVar9;
  byte *****pppppbVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  undefined4 in_stack_ffffff78;
  uint3 uVar15;
  byte *pbVar14;
  byte *in_stack_ffffff7c;
  char *pcVar16;
  undefined4 local_5c;
  int local_58;
  undefined1 *local_54;
  FILE *local_50;
  int local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bd0f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  FUN_0040fa80();
  pcVar11 = fread_exref;
  local_4c = 0;
  fread(&local_4c,4,1,param_1);
  iVar12 = 0;
  if (0 < local_4c) {
    do {
      iVar3 = FUN_004be160(param_1);
      local_58 = iVar3;
      if (iVar3 != 0) {
        if ((*(int *)(iVar3 + 0x54) == 0) || (*(int *)(*(int *)(iVar3 + 0x54) + 0x18) == 2)) {
          FUN_004024e0(&stack0xffffff7c,*(undefined4 **)(iVar3 + 0x58));
          in_stack_ffffff78 = 0x4bc65a;
          piVar4 = (int *)FUN_004a8380(in_stack_ffffff7c);
          iVar2 = DAT_0065b5cc;
          if ((piVar4 != (int *)0x0) &&
             (iVar5 = FUN_005073a0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),*piVar4),
             *(int *)(*(int *)(iVar3 + 0x58) + 0x18) <= iVar5)) {
            piVar4 = *(int **)(iVar2 + 0x140);
            if (*(int **)(iVar2 + 0x144) == piVar4) {
              FUN_004141e0((void *)(iVar2 + 0x13c),piVar4,&local_58);
            }
            else {
              *piVar4 = iVar3;
              *(int *)(iVar2 + 0x140) = *(int *)(iVar2 + 0x140) + 4;
            }
            goto LAB_004bc6b6;
          }
          pcVar16 = "** Skipping load of contract as the player hasn\'t picked up the cargo.";
        }
        else {
          pcVar16 = "** Skipping load of contract as it\'s not take-and-deliver";
        }
        FUN_00591070("SAVEHANDLER",pcVar16);
      }
LAB_004bc6b6:
      iVar12 = iVar12 + 1;
      pcVar11 = fread_exref;
      param_1 = local_50;
    } while (iVar12 < local_4c);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar1 = local_4c < 1;
  uVar15 = (uint3)((uint)in_stack_ffffff78 >> 8);
  if (bVar1) {
    local_54 = &stack0xffffff78;
    pbVar14 = (byte *)((uint)uVar15 << 8);
    FUN_00402690(&stack0xffffff78,"has_contract",0xc);
  }
  else {
    local_54 = &stack0xffffff78;
    pbVar14 = (byte *)((uint)uVar15 << 8);
    FUN_00402690(&stack0xffffff78,"has_contract",0xc);
  }
  local_8 = (uint)bVar1;
  this = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(this,pbVar14);
  local_4c = 0;
  (*pcVar11)();
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
    (*pcVar11)();
    FUN_004024e0(&stack0xffffff7c,local_44);
    local_54 = (undefined1 *)FUN_004a6de0(in_stack_ffffff7c);
    if ((local_54 == (undefined1 *)0x0) ||
       (iVar12 = *(int *)(local_54 + 0x398), param_1 = local_50, iVar12 == 0)) {
      FUN_00591070("SAVEHANDLER","Error: invalid tradelocation \'%s\' for contract loaded.");
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pppppbVar10 = (byte *****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pppppbVar10 = (byte *****)local_2c[0][-1],
           (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppbVar10)))) goto LAB_004bca1a;
        FUN_005adb3f(pppppbVar10);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) goto LAB_004bca1a;
        FUN_005adb3f(pvVar9);
      }
    }
    else {
      uVar13 = 0;
      pppppbVar10 = (byte *****)local_2c[0];
      if (*(int *)(iVar12 + 0xa4) - *(int *)(iVar12 + 0xa0) >> 2 != 0) {
        do {
          pbVar14 = *(byte **)(*(int *)(iVar12 + 0xa0) + uVar13 * 4);
          pppppbVar6 = local_2c;
          if (0xf < local_18) {
            pppppbVar6 = pppppbVar10;
          }
          pbVar8 = pbVar14;
          if (0xf < *(uint *)(pbVar14 + 0x14)) {
            pbVar8 = *(byte **)pbVar14;
          }
          uVar7 = FUN_004031f0(pbVar8,*(uint *)(pbVar14 + 0x10),(byte *)pppppbVar6,local_1c);
          if ((char)uVar7 != '\0') {
            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0xa0) + uVar13 * 4) + 0xa8) = local_5c;
            in_stack_ffffff7c = (byte *)0x4bc873;
            FUN_00591070("SAVEHANDLER","Set contractID %s to have timer \'%f\'");
            local_4c = local_4c + 1;
            iVar12 = *(int *)(local_54 + 0x398);
            pppppbVar10 = (byte *****)local_2c[0];
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < (uint)(*(int *)(iVar12 + 0xa4) - *(int *)(iVar12 + 0xa0) >> 2));
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pppppbVar6 = pppppbVar10;
        if ((0xfff < local_18 + 1) &&
           (pppppbVar6 = (byte *****)pppppbVar10[-1],
           (byte *)0x1f < (byte *)((int)pppppbVar10 + (-4 - (int)pppppbVar6)))) goto LAB_004bca1a;
        FUN_005adb3f(pppppbVar6);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
      pcVar11 = fread_exref;
      param_1 = local_50;
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
LAB_004bca1a:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
        pcVar11 = fread_exref;
        param_1 = local_50;
      }
    }
    (*pcVar11)();
  } while( true );
}


void __fastcall FUN_004bca30(FILE *param_1,void *param_2)

{
  undefined4 *in_stack_ffffffd4;
  
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)((int)param_2 + 4));
  FUN_004b8810(param_1,in_stack_ffffffd4);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)((int)param_2 + 0x1c));
  FUN_004b8810(param_1,in_stack_ffffffd4);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)((int)param_2 + 0x34));
  FUN_004b8810(param_1,in_stack_ffffffd4);
  fwrite((void *)((int)param_2 + 0x50),4,1,param_1);
  fwrite(param_2,4,1,param_1);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)((int)param_2 + 0x4c) + 0x24));
  FUN_004b8810(param_1,in_stack_ffffffd4);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)((int)param_2 + 0x4c) + 0x3c));
  FUN_004b8810(param_1,in_stack_ffffffd4);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)((int)param_2 + 0x4c) + 0x54));
  FUN_004b8810(param_1,in_stack_ffffffd4);
  fwrite((void *)(*(int *)((int)param_2 + 0x4c) + 0x1c),4,1,param_1);
  fwrite(*(void **)((int)param_2 + 0x4c),4,1,param_1);
  fwrite((void *)(*(int *)((int)param_2 + 0x4c) + 0x18),4,1,param_1);
  fwrite((void *)(*(int *)((int)param_2 + 0x4c) + 0x20),4,1,param_1);
  fwrite((void *)(*(int *)((int)param_2 + 0x4c) + 4),1,1,param_1);
  fwrite((void *)(*(int *)((int)param_2 + 0x4c) + 8),4,1,param_1);
  return;
}


void __fastcall FUN_004bcb30(FILE *param_1)

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
  piVar7 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
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
  piVar8 = (int *)(iVar2 + 0x54);
  if (piVar8 != piVar7) {
    FUN_00401b20(piVar8);
    iVar3 = piVar7[1];
    iVar4 = piVar7[2];
    iVar5 = piVar7[3];
    *piVar8 = *piVar7;
    *(int *)(iVar2 + 0x58) = iVar3;
    *(int *)(iVar2 + 0x5c) = iVar4;
    *(int *)(iVar2 + 0x60) = iVar5;
    *(undefined8 *)(iVar2 + 100) = *(undefined8 *)(piVar7 + 4);
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


void __fastcall FUN_004bcf70(FILE *param_1)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  FILE *pFVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *in_stack_ffffff8c;
  void *local_48;
  int *local_44;
  int *local_40;
  uint local_3c;
  FILE *local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  FILE *local_28;
  uint local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bd168;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = (int *)0x0;
  local_1c = (void *)0x0;
  local_48 = (void *)0x0;
  local_44 = (int *)0x0;
  local_30 = (int *)0x0;
  local_40 = (int *)0x0;
  local_8 = 0;
  local_20 = 0;
  iVar1 = *(int *)(DAT_0065b5cc + 0x3c);
  local_28 = param_1;
  if (*(int *)(DAT_0065b5cc + 0x40) - iVar1 >> 2 != 0) {
    piVar5 = (int *)0x0;
    iVar3 = DAT_0065b5cc;
    do {
      uVar8 = 0;
      iVar1 = *(int *)(iVar1 + local_20 * 4);
      iVar2 = *(int *)(iVar1 + 0xcc);
      if (*(int *)(iVar1 + 0xd0) - iVar2 >> 2 != 0) {
        do {
          iVar1 = *(int *)(iVar2 + uVar8 * 4);
          if (((*(char *)(iVar1 + 0x234) != '\0') &&
              (local_30 = *(int **)(iVar1 + 0x178), local_30 != (int *)0x0)) &&
             (*(int *)(local_30[0x95] + 0x158) == 1)) {
            if (piVar5 == piVar6) {
              FUN_00414080(&local_48,piVar6,&local_30);
              iVar3 = DAT_0065b5cc;
              piVar5 = local_40;
              piVar6 = local_44;
            }
            else {
              *piVar6 = (int)local_30;
              local_44 = piVar6 + 1;
              piVar6 = local_44;
            }
          }
          uVar8 = uVar8 + 1;
          iVar1 = *(int *)(*(int *)(iVar3 + 0x3c) + local_20 * 4);
          iVar2 = *(int *)(iVar1 + 0xcc);
          local_30 = piVar5;
        } while (uVar8 < (uint)(*(int *)(iVar1 + 0xd0) - iVar2 >> 2));
      }
      iVar1 = *(int *)(iVar3 + 0x3c);
      local_20 = local_20 + 1;
    } while (local_20 < (uint)(*(int *)(iVar3 + 0x40) - iVar1 >> 2));
    local_1c = local_48;
  }
  _File = local_28;
  pcVar9 = fwrite_exref;
  uVar8 = (int)piVar6 - (int)local_1c >> 2;
  local_48 = local_1c;
  local_3c = uVar8;
  local_2c = uVar8;
  fwrite(&local_2c,4,1,local_28);
  local_20 = 0;
  if (uVar8 != 0) {
    do {
      uVar8 = local_20;
      FUN_004024e0(&stack0xffffff8c,(undefined4 *)(*(int *)((int)local_1c + local_20 * 4) + 0x238));
      FUN_004b8810(_File,in_stack_ffffff8c);
      pFVar7 = *(FILE **)(*(int *)((int)local_1c + uVar8 * 4) + 0x398);
      local_18 = *(int *)((int)pFVar7 + 0x98) - *(int *)((int)pFVar7 + 0x94) >> 2;
      local_28 = pFVar7;
      (*pcVar9)(&local_18,4,1,_File);
      local_24 = 0;
      if (*(int *)((int)pFVar7 + 0x98) - *(int *)((int)pFVar7 + 0x94) >> 2 != 0) {
        do {
          FUN_004be040(_File,*(undefined4 **)(*(int *)((int)pFVar7 + 0x94) + local_24 * 4));
          local_24 = local_24 + 1;
        } while (local_24 < (uint)(*(int *)((int)pFVar7 + 0x98) - *(int *)((int)pFVar7 + 0x94) >> 2)
                );
      }
      FUN_00591070("SAVEHANDLER","...saved %d contracts at space station %s");
      local_18 = *(int *)((int)pFVar7 + 0x74) - *(int *)((int)pFVar7 + 0x70) >> 2;
      (*pcVar9)(&local_18,4);
      local_24 = 0;
      if (*(int *)((int)pFVar7 + 0x74) - *(int *)((int)pFVar7 + 0x70) >> 2 != 0) {
        do {
          FUN_004bdce0(_File,*(int **)(*(int *)((int)pFVar7 + 0x70) + local_24 * 4));
          local_24 = local_24 + 1;
        } while (local_24 < (uint)(*(int *)((int)pFVar7 + 0x74) - *(int *)((int)pFVar7 + 0x70) >> 2)
                );
      }
      FUN_00591070("SAVEHANDLER","...saved %d trade items at space station %s");
      local_18 = *(int *)((int)pFVar7 + 0x8c) - *(int *)((int)pFVar7 + 0x88) >> 2;
      (*pcVar9)(&local_18,4);
      local_24 = 0;
      if (*(int *)((int)pFVar7 + 0x8c) - *(int *)((int)pFVar7 + 0x88) >> 2 != 0) {
        do {
          FUN_004bdce0(_File,*(int **)(*(int *)((int)pFVar7 + 0x88) + local_24 * 4));
          local_24 = local_24 + 1;
        } while (local_24 < (uint)(*(int *)((int)pFVar7 + 0x8c) - *(int *)((int)pFVar7 + 0x88) >> 2)
                );
      }
      FUN_00591070("SAVEHANDLER","...saved %d wire items at space station %s");
      local_18 = *(int *)((int)pFVar7 + 0x5c) - *(int *)((int)pFVar7 + 0x58) >> 2;
      (*pcVar9)(&local_18,4);
      piVar6 = *(int **)((int)pFVar7 + 0x58);
      local_24 = 0;
      local_34 = (int *)((*(int *)((int)pFVar7 + 0x5c) - (int)piVar6) + 3U >> 2);
      if (*(int **)((int)pFVar7 + 0x5c) < piVar6) {
        local_34 = (int *)0;
      }
      local_38 = (FILE *)piVar6;
      if (local_34 != (int *)0x0) {
        do {
          piVar5 = (int *)*piVar6;
          fwrite(piVar5 + 1,4,1,_File);
          fwrite(piVar5 + 2,4,1,_File);
          FUN_004c03f0(_File,*piVar5);
          piVar6 = piVar6 + 1;
          local_24 = local_24 + 1;
          pFVar7 = local_28;
          pcVar9 = fwrite_exref;
        } while ((int *)local_24 != local_34);
      }
      FUN_00591070("SAVEHANDLER","...saved %d modules for sale at space station %s");
      local_18 = *(int *)((int)pFVar7 + 0x68) - *(int *)((int)pFVar7 + 100) >> 2;
      (*pcVar9)(&local_18,4);
      piVar6 = *(int **)((int)pFVar7 + 100);
      local_24 = 0;
      local_38 = (FILE *)((*(int *)((int)pFVar7 + 0x68) - (int)piVar6) + 3U >> 2);
      if (*(int **)((int)pFVar7 + 0x68) < piVar6) {
        local_38 = (FILE *)0;
      }
      local_34 = piVar6;
      if (local_38 != (FILE *)0x0) {
        do {
          piVar5 = (int *)*piVar6;
          fwrite(*(void **)(*piVar5 + 4),4,1,_File);
          fwrite((void *)*piVar5,4,1,_File);
          pcVar9 = fwrite_exref;
          fwrite(piVar5 + 1,4,1,_File);
          piVar6 = piVar6 + 1;
          local_24 = local_24 + 1;
          pFVar7 = local_28;
        } while ((FILE *)local_24 != local_38);
      }
      FUN_00591070("SAVEHANDLER","...saved %d components for sale at space station %s");
      local_18 = *(int *)((int)pFVar7 + 0x40) - *(int *)((int)pFVar7 + 0x3c) >> 2;
      in_stack_ffffff8c = (undefined4 *)0x1;
      (*pcVar9)(&local_18,4);
      piVar6 = *(int **)((int)pFVar7 + 0x3c);
      local_28 = (FILE *)0x0;
      local_38 = (FILE *)((uint)((int)*(int **)((int)pFVar7 + 0x40) + (3 - (int)piVar6)) >> 2);
      if (*(int **)((int)pFVar7 + 0x40) < piVar6) {
        local_38 = (FILE *)0x0;
      }
      if (local_38 != (FILE *)0x0) {
        do {
          FUN_004beae0(_File,*piVar6);
          piVar6 = piVar6 + 1;
          local_28 = (FILE *)((int)&local_28->_ptr + 1);
        } while (local_28 != local_38);
      }
      uVar8 = local_20;
      FUN_00591070("SAVEHANDLER","...saved %d ships for sale at space station %s");
      pvVar4 = *(void **)((int)local_1c + uVar8 * 4);
      if (*(int *)((int)pvVar4 + 0x3dc) == 0) {
        local_11 = 1;
      }
      else if (*(int *)(*(int *)((int)pvVar4 + 0x254) + 0x158) == 3) {
        local_11 = 1;
      }
      else {
        piVar6 = FUN_0051b8a0(pvVar4,*(int *)(DAT_0065b5cc + 0xd0));
        if ((piVar6 == (int *)0x0) || (piVar6[2] != 2)) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      (*pcVar9)();
      local_20 = uVar8 + 1;
    } while (local_20 < local_3c);
  }
  FUN_00591070("SAVEHANDLER","...saved %d space stations");
  if (local_1c != (void *)0x0) {
    pvVar4 = local_1c;
    if ((0xfff < ((int)local_30 - (int)local_1c & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)local_1c + -4), 0x1f < (uint)((int)local_1c + (-4 - (int)pvVar4))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004bd530(FILE *param_1)

{
  uint *puVar1;
  int *piVar2;
  void **ppvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  byte *in_stack_ffffff4c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  FILE *local_70;
  char local_69;
  void *local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  uint local_58;
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
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &LAB_005bd1a0;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_74 = 0;
  local_70 = param_1;
  fread(&local_74,4,1,param_1);
  local_78 = 0;
  if (0 < local_74) {
    do {
      local_2c = (void *)0x0;
      pvStack_28 = (void *)0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      ppvVar3 = (void **)FUN_004b88b0((undefined1 *)local_54,param_1);
      if (&local_3c != ppvVar3) {
        FUN_00401b20((int *)&local_3c);
        local_3c = *ppvVar3;
        pvStack_38 = ppvVar3[1];
        pvStack_34 = ppvVar3[2];
        pvStack_30 = ppvVar3[3];
        local_2c = ppvVar3[4];
        pvStack_28 = ppvVar3[5];
        ppvVar3[4] = (void *)0x0;
        ppvVar3[5] = (void *)0xf;
        *(undefined1 *)ppvVar3 = 0;
      }
      if (0xf < local_40) {
        pvVar4 = local_54[0];
        if ((0xfff < local_40 + 1) &&
           (pvVar4 = *(void **)((int)local_54[0] + -4),
           0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar4)))) goto LAB_004bdcce;
        FUN_005adb3f(pvVar4);
      }
      FUN_004024e0(&stack0xffffff4c,&local_3c);
      pvVar4 = (void *)FUN_004a7100(in_stack_ffffff4c);
      local_68 = pvVar4;
      FUN_00591070("SAVEHANDLER","...loaded trade data for platform %s");
      if (pvVar4 == (void *)0x0) {
        FUN_00591070("ERROR","ERROR: No valid space station with this rego.");
        if ((void *)0xf < pvStack_28) {
          pvVar4 = local_3c;
          if ((0xfff < (int)pvStack_28 + 1U) &&
             (pvVar4 = *(void **)((int)local_3c + -4),
             0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4)))) {
LAB_004bdcce:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar4);
        }
        goto LAB_004bdc78;
      }
      local_5c = *(undefined4 **)((int)pvVar4 + 0x398);
      local_58 = 0;
      puVar7 = (undefined4 *)local_5c[0x25];
      puVar9 = (undefined4 *)((uint)((int)local_5c[0x26] + (3 - (int)puVar7)) >> 2);
      if ((undefined4 *)local_5c[0x26] < puVar7) {
        puVar9 = (undefined4 *)0x0;
      }
      local_64 = puVar9;
      if (puVar9 != (undefined4 *)0x0) {
        do {
          if ((int *)*puVar7 != (int *)0x0) {
            FUN_0040fae0((int *)*puVar7);
            puVar9 = local_64;
          }
          local_58 = local_58 + 1;
          puVar7 = puVar7 + 1;
        } while ((undefined4 *)local_58 != puVar9);
      }
      local_5c[0x26] = local_5c[0x25];
      local_60 = 0;
      fread(&local_60,4,1,param_1);
      iVar10 = 0;
      if (0 < local_60) {
        do {
          local_58 = FUN_004be160(param_1);
          iVar5 = *(int *)((int)local_68 + 0x398);
          puVar1 = *(uint **)(iVar5 + 0x98);
          if (*(uint **)(iVar5 + 0x9c) == puVar1) {
            FUN_004141e0((void *)(iVar5 + 0x94),puVar1,&local_58);
          }
          else {
            *puVar1 = local_58;
            *(int *)(iVar5 + 0x98) = *(int *)(iVar5 + 0x98) + 4;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_60);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d contracts for platform");
      FUN_0049cfc0(*(void **)((int)local_68 + 0x398),'\0');
      fread(&local_60,4,1,param_1);
      iVar10 = 0;
      if (0 < local_60) {
        do {
          iVar5 = FUN_004bddf0(param_1);
          if (iVar5 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)((int)local_68 + 0x398),iVar5,(undefined4 *)0x0);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_60);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d trade item instances for platform");
      uVar8 = 0;
      iVar10 = *(int *)((int)local_68 + 0x398);
      if (*(int *)(iVar10 + 0x8c) - *(int *)(iVar10 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x88) + uVar8 * 4) + 0x10) = 0;
          iVar5 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x88) + iVar5) + 0x30) = 0xffffffff;
        } while (uVar8 < (uint)(*(int *)(iVar10 + 0x8c) - *(int *)(iVar10 + 0x88) >> 2));
      }
      fread(&local_60,4,1,param_1);
      iVar10 = 0;
      if (0 < local_60) {
        do {
          iVar5 = FUN_004bddf0(param_1);
          if (iVar5 == 0) {
            FUN_00591070("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            FUN_0049c510(*(void **)((int)local_68 + 0x398),iVar5,(undefined4 *)0x1);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_60);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d wire item instances for platform");
      local_64 = (undefined4 *)0x0;
      local_58 = *(uint *)((int)local_68 + 0x398);
      puVar7 = *(undefined4 **)(local_58 + 0x58);
      local_5c = (undefined4 *)((*(int *)(local_58 + 0x5c) - (int)puVar7) + 3U >> 2);
      if (*(undefined4 **)(local_58 + 0x5c) < puVar7) {
        local_5c = (undefined4 *)0x0;
      }
      if (local_5c != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
        do {
          FUN_005adb3f((void *)*puVar7);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar7 = puVar7 + 1;
          param_1 = local_70;
        } while (puVar9 != local_5c);
      }
      pcVar11 = fread_exref;
      *(undefined4 *)(local_58 + 0x5c) = *(undefined4 *)(local_58 + 0x58);
      fread(&local_60,4,1,param_1);
      local_58 = 0;
      if (0 < local_60) {
        do {
          (*pcVar11)();
          in_stack_ffffff4c = (byte *)0x1;
          (*pcVar11)(&local_7c,4);
          uVar6 = FUN_004c0540(param_1);
          local_5c = (undefined4 *)FUN_005adb0f(0xc);
          local_5c[1] = local_80;
          *local_5c = uVar6;
          local_5c[2] = local_7c;
          iVar10 = *(int *)((int)local_68 + 0x398);
          puVar7 = *(undefined4 **)(iVar10 + 0x5c);
          if (*(undefined4 **)(iVar10 + 0x60) == puVar7) {
            FUN_00414080((void *)(iVar10 + 0x58),puVar7,&local_5c);
          }
          else {
            *puVar7 = local_5c;
            *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 4;
          }
          local_58 = local_58 + 1;
          pcVar11 = fread_exref;
        } while ((int)local_58 < local_60);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d module sale instances for platform");
      local_64 = (undefined4 *)0x0;
      local_58 = *(uint *)((int)local_68 + 0x398);
      puVar7 = *(undefined4 **)(local_58 + 100);
      local_5c = (undefined4 *)((*(int *)(local_58 + 0x68) - (int)puVar7) + 3U >> 2);
      if (*(undefined4 **)(local_58 + 0x68) < puVar7) {
        local_5c = (undefined4 *)0x0;
      }
      if (local_5c != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
        do {
          FUN_005adb3f((void *)*puVar7);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar7 = puVar7 + 1;
          param_1 = local_70;
        } while (puVar9 != local_5c);
      }
      pcVar11 = fread_exref;
      *(undefined4 *)(local_58 + 0x68) = *(undefined4 *)(local_58 + 100);
      fread(&local_60,4,1,param_1);
      local_58 = 0;
      pvVar4 = local_68;
      if (0 < local_60) {
        do {
          (*pcVar11)();
          in_stack_ffffff4c = (byte *)0x1;
          (*pcVar11)(&local_90,4);
          (*pcVar11)(&local_8c,4,1,param_1);
          puVar7 = (undefined4 *)FUN_005adb0f(8);
          piVar2 = DAT_0065b5cc;
          local_5c = local_84;
          *puVar7 = 0x42c80000;
          uVar8 = 0;
          uVar12 = piVar2[1] - *piVar2 >> 2;
          if (uVar12 != 0) {
            local_64 = (undefined4 *)*piVar2;
            puVar9 = local_64;
            do {
              param_1 = local_70;
              if (*(undefined4 **)*puVar9 == local_84) {
                uVar6 = local_64[uVar8];
                goto LAB_004bdb26;
              }
              uVar8 = uVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 < uVar12);
          }
          uVar6 = 0;
LAB_004bdb26:
          puVar7[1] = uVar6;
          local_88 = puVar7;
          local_5c = (undefined4 *)FUN_005adb0f(8);
          pvVar4 = local_68;
          *local_5c = puVar7;
          local_5c[1] = local_8c;
          *puVar7 = local_90;
          iVar10 = *(int *)((int)local_68 + 0x398);
          puVar7 = *(undefined4 **)(iVar10 + 0x68);
          if (*(undefined4 **)(iVar10 + 0x6c) == puVar7) {
            FUN_00414080((void *)(iVar10 + 100),puVar7,&local_5c);
          }
          else {
            *puVar7 = local_5c;
            *(int *)(iVar10 + 0x68) = *(int *)(iVar10 + 0x68) + 4;
          }
          local_58 = local_58 + 1;
          pcVar11 = fread_exref;
        } while ((int)local_58 < local_60);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d component sale instances for platform");
      FUN_0049f240(*(int *)((int)pvVar4 + 0x398));
      fread(&local_60,4,1,param_1);
      local_64 = (undefined4 *)0x0;
      if (0 < local_60) {
        do {
          local_58 = FUN_004befa0(param_1);
          local_5c = (undefined4 *)&stack0xffffff4c;
          FUN_004024e0(&stack0xffffff4c,(undefined4 *)(local_58 + 0x238));
          local_14._0_1_ = 1;
          pvVar4 = (void *)FUN_00412bf0();
          local_14 = (uint)local_14._1_3_ << 8;
          FUN_004a5e90(pvVar4,in_stack_ffffff4c);
          iVar10 = FUN_00412bf0();
          piVar2 = *(int **)(iVar10 + 0x88);
          if (*(int **)(iVar10 + 0x8c) == piVar2) {
            FUN_00403840((void *)(iVar10 + 0x84),piVar2,(undefined4 *)(local_58 + 8));
          }
          else {
            FUN_004024e0(piVar2,(undefined4 *)(local_58 + 8));
            *(int *)(iVar10 + 0x88) = *(int *)(iVar10 + 0x88) + 0x18;
          }
          pvVar4 = local_68;
          iVar10 = *(int *)((int)local_68 + 0x398);
          puVar1 = *(uint **)(iVar10 + 0x40);
          if (*(uint **)(iVar10 + 0x44) == puVar1) {
            FUN_00414080((void *)(iVar10 + 0x3c),puVar1,&local_58);
          }
          else {
            *puVar1 = local_58;
            *(int *)(iVar10 + 0x40) = *(int *)(iVar10 + 0x40) + 4;
          }
          local_64 = (undefined4 *)((int)local_64 + 1);
        } while ((int)local_64 < local_60);
      }
      FUN_00591070("SAVEHANDLER","...loaded %d ships for sale for platform");
      fread(&local_69,1,1,param_1);
      if (local_69 != '\0') {
        FUN_0051aee0(pvVar4,DAT_0065b5cc[0x34],(int *)0x1);
      }
      local_14 = -1;
      if ((void *)0xf < pvStack_28) {
        pvVar4 = local_3c;
        if ((0xfff < (int)pvStack_28 + 1U) &&
           (pvVar4 = *(void **)((int)local_3c + -4),
           0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4)))) goto LAB_004bdcce;
        FUN_005adb3f(pvVar4);
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_74);
  }
  FUN_00591070("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004bdc78:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004bdce0(FILE *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  fwrite(param_2 + 5,4,1,param_1);
  puVar1 = (undefined4 *)0x1;
  fwrite(param_2 + 4,4,1,param_1);
  FUN_004024e0(&stack0xffffffd4,param_2 + 6);
  FUN_004b8810(param_1,puVar1);
  fwrite(param_2 + 0xc,4,1,param_1);
  fwrite(param_2 + 1,4,1,param_1);
  fwrite(param_2 + 2,4,1,param_1);
  fwrite(param_2 + 3,4,1,param_1);
  fwrite((void *)*param_2,4,1,param_1);
  fwrite((void *)(*param_2 + 4),4,1,param_1);
  fwrite((void *)(*param_2 + 0x14),4,1,param_1);
  fwrite((void *)(*param_2 + 0x18),4,1,param_1);
  fwrite((void *)(*param_2 + 0x1c),4,1,param_1);
  fwrite((void *)(*param_2 + 0x20),4,1,param_1);
  fwrite((void *)(*param_2 + 0x24),4,1,param_1);
  fwrite((void *)(*param_2 + 0x28),4,1,param_1);
  fwrite((void *)(*param_2 + 8),4,1,param_1);
  fwrite((void *)(*param_2 + 0xc),4,1,param_1);
  fwrite((void *)(*param_2 + 0x10),4,1,param_1);
  return;
}


void __fastcall FUN_004bddf0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)FUN_005adb0f(0x34);
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = -1;
  piVar3[10] = 0;
  piVar3[0xb] = 0xf;
  *(undefined1 *)(piVar3 + 6) = 0;
  piVar3[0xc] = -1;
  fread(piVar3 + 5,4,1,param_1);
  fread(piVar3 + 4,4,1,param_1);
  piVar4 = (int *)FUN_004b88b0((undefined1 *)local_20,param_1);
  if (piVar3 + 6 != piVar4) {
    FUN_00401b20(piVar3 + 6);
    iVar1 = piVar4[1];
    iVar6 = piVar4[2];
    iVar2 = piVar4[3];
    piVar3[6] = *piVar4;
    piVar3[7] = iVar1;
    piVar3[8] = iVar6;
    piVar3[9] = iVar2;
    *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar4 + 4);
    piVar4[4] = 0;
    piVar4[5] = 0xf;
    *(undefined1 *)piVar4 = 0;
  }
  if (0xf < local_c) {
    pvVar7 = local_20[0];
    if (0xfff < local_c + 1) {
      pvVar7 = *(void **)((int)local_20[0] + -4);
      if (0x1f < (uint)((int)local_20[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  fread(piVar3 + 0xc,4,1,param_1);
  fread(piVar3 + 1,4,1,param_1);
  fread(piVar3 + 2,4,1,param_1);
  fread(piVar3 + 3,4,1,param_1);
  if (*piVar3 == 0) {
    puVar5 = (undefined4 *)FUN_005adb0f(0x2c);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 3;
    puVar5[10] = 0;
    puVar5[9] = 3;
    *piVar3 = (int)puVar5;
  }
  fread((void *)*piVar3,4,1,param_1);
  fread((void *)(*piVar3 + 4),4,1,param_1);
  fread((void *)(*piVar3 + 0x14),4,1,param_1);
  fread((void *)(*piVar3 + 0x18),4,1,param_1);
  fread((void *)(*piVar3 + 0x1c),4,1,param_1);
  fread((void *)(*piVar3 + 0x20),4,1,param_1);
  fread((void *)(*piVar3 + 0x24),4,1,param_1);
  fread((void *)(*piVar3 + 0x28),4,1,param_1);
  fread((void *)(*piVar3 + 8),4,1,param_1);
  fread((void *)(*piVar3 + 0xc),4,1,param_1);
  fread((void *)(*piVar3 + 0x10),4,1,param_1);
  iVar1 = *piVar3;
  iVar6 = FUN_00591370((int *)(iVar1 + 8));
  *(int *)(iVar1 + 0x14) = iVar6;
  *(int *)(iVar1 + 0x20) = (*(int *)(iVar1 + 0x1c) * iVar6) / 2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_004be040(FILE *param_1,undefined4 *param_2)

{
  undefined4 *in_stack_ffffffd4;
  undefined4 *puVar1;
  
  FUN_004024e0(&stack0xffffffd4,param_2);
  FUN_004b8810(param_1,in_stack_ffffffd4);
  fwrite(param_2 + 6,4,1,param_1);
  fwrite(param_2 + 7,4,1,param_1);
  FUN_004024e0(&stack0xffffffd4,param_2 + 8);
  FUN_004b8810(param_1,in_stack_ffffffd4);
  FUN_004024e0(&stack0xffffffd4,param_2 + 0xe);
  FUN_004b8810(param_1,in_stack_ffffffd4);
  fwrite((void *)(param_2[0x16] + 0x18),4,1,param_1);
  fwrite((void *)(param_2[0x16] + 0x1c),4,1,param_1);
  fwrite((void *)(param_2[0x16] + 0x20),4,1,param_1);
  fwrite((void *)(param_2[0x16] + 0x24),4,1,param_1);
  puVar1 = (undefined4 *)0x1;
  fwrite((void *)(param_2[0x16] + 0x28),4,1,param_1);
  fwrite((void *)(param_2[0x16] + 0x2c),4,1,param_1);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)param_2[0x16]);
  FUN_004b8810(param_1,puVar1);
  FUN_004024e0(&stack0xffffffd4,(undefined4 *)(param_2[0x16] + 0x30));
  FUN_004b8810(param_1,puVar1);
  FUN_00591070("SAVEHANDLER","...contract [%s -> %s, %s] written");
  return;
}


void __fastcall FUN_004be160(FILE *param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 ****this;
  undefined4 ***pppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ***pppuVar6;
  undefined4 ***pppuVar7;
  void *pvVar8;
  undefined4 ****ppppuVar9;
  byte *in_stack_ffffff7c;
  undefined4 ***local_54 [4];
  uint local_44;
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
  this = (undefined4 ****)FUN_005adb0f(0x5c);
  ppppuVar9 = this + 0xe;
  this[4] = (undefined4 ***)0x0;
  this[5] = (undefined4 ***)0xf;
  *(undefined1 *)this = 0;
  this[6] = (undefined4 ***)0xbf800000;
  this[7] = (undefined4 ***)0x0;
  this[0xc] = (undefined4 ***)0x0;
  this[0xd] = (undefined4 ***)0xf;
  *(undefined1 *)(this + 8) = 0;
  this[0x12] = (undefined4 ***)0x0;
  this[0x13] = (undefined4 ***)0xf;
  *(undefined1 *)ppppuVar9 = 0;
  this[0x14] = (undefined4 ***)0x0;
  this[0x15] = (undefined4 ***)0x0;
  this[0x16] = (undefined4 ***)0x0;
  FUN_004b88b0((undefined1 *)local_54,param_1);
  local_14 = 0;
  FUN_004024e0(&stack0xffffff7c,local_54);
  local_14._0_1_ = 1;
  if (DAT_0065c28c == 0) {
    DAT_0065c28c = FUN_005adb0f(1);
  }
  local_14 = (uint)local_14._1_3_ << 8;
  pppuVar4 = (undefined4 ***)FUN_00484720(in_stack_ffffff7c);
  this[0x15] = pppuVar4;
  if (this != local_54) {
    ppppuVar5 = local_54;
    if (0xf < local_40) {
      ppppuVar5 = (undefined4 ****)local_54[0];
    }
    FUN_00402690(this,ppppuVar5,local_44);
  }
  fread(this + 6,4,1,param_1);
  fread(this + 7,4,1,param_1);
  ppppuVar5 = (undefined4 ****)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if (this + 8 != ppppuVar5) {
    FUN_00401b20((int *)(this + 8));
    pppuVar4 = ppppuVar5[1];
    pppuVar6 = ppppuVar5[2];
    pppuVar7 = ppppuVar5[3];
    this[8] = *ppppuVar5;
    this[9] = pppuVar4;
    this[10] = pppuVar6;
    this[0xb] = pppuVar7;
    *(undefined8 *)(this + 0xc) = *(undefined8 *)(ppppuVar5 + 4);
    ppppuVar5[4] = (undefined4 ***)0x0;
    ppppuVar5[5] = (undefined4 ***)0xf;
    *(undefined1 *)ppppuVar5 = 0;
  }
  if (0xf < local_28) {
    pvVar8 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar8 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ppppuVar5 = (undefined4 ****)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if (ppppuVar9 != ppppuVar5) {
    FUN_00401b20((int *)ppppuVar9);
    pppuVar4 = ppppuVar5[1];
    pppuVar6 = ppppuVar5[2];
    pppuVar7 = ppppuVar5[3];
    *ppppuVar9 = *ppppuVar5;
    this[0xf] = pppuVar4;
    this[0x10] = pppuVar6;
    this[0x11] = pppuVar7;
    *(undefined8 *)(this + 0x12) = *(undefined8 *)(ppppuVar5 + 4);
    ppppuVar5[4] = (undefined4 ***)0x0;
    ppppuVar5[5] = (undefined4 ***)0xf;
    *(undefined1 *)ppppuVar5 = 0;
  }
  if (0xf < local_28) {
    pvVar8 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar8 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  pppuVar4 = (undefined4 ***)FUN_005adb0f(0x48);
  pppuVar4[4] = (undefined4 **)0x0;
  pppuVar4[5] = (undefined4 **)0xf;
  *(undefined1 *)pppuVar4 = 0;
  pppuVar4[6] = (undefined4 **)0x0;
  pppuVar4[7] = (undefined4 **)0x0;
  pppuVar4[8] = (undefined4 **)0x0;
  pppuVar4[9] = (undefined4 **)0x0;
  pppuVar4[10] = (undefined4 **)0x0;
  pppuVar4[0xb] = (undefined4 **)0x0;
  pppuVar4[0x10] = (undefined4 **)0x0;
  pppuVar4[0x11] = (undefined4 **)0xf;
  *(undefined1 *)(pppuVar4 + 0xc) = 0;
  this[0x16] = pppuVar4;
  fread(pppuVar4 + 6,4,1,param_1);
  fread(this[0x16] + 7,4,1,param_1);
  fread(this[0x16] + 8,4,1,param_1);
  fread(this[0x16] + 9,4,1,param_1);
  fread(this[0x16] + 10,4,1,param_1);
  fread(this[0x16] + 0xb,4,1,param_1);
  pppuVar6 = (undefined4 ***)FUN_004b88b0((undefined1 *)local_3c,param_1);
  pppuVar4 = this[0x16];
  if (pppuVar4 != pppuVar6) {
    FUN_00401b20((int *)pppuVar4);
    ppuVar1 = pppuVar6[1];
    ppuVar2 = pppuVar6[2];
    ppuVar3 = pppuVar6[3];
    *pppuVar4 = *pppuVar6;
    pppuVar4[1] = ppuVar1;
    pppuVar4[2] = ppuVar2;
    pppuVar4[3] = ppuVar3;
    *(undefined8 *)(pppuVar4 + 4) = *(undefined8 *)(pppuVar6 + 4);
    pppuVar6[4] = (undefined4 **)0x0;
    pppuVar6[5] = (undefined4 **)0xf;
    *(undefined1 *)pppuVar6 = 0;
  }
  if (0xf < local_28) {
    pvVar8 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar8 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  pppuVar6 = (undefined4 ***)FUN_004b88b0((undefined1 *)local_3c,param_1);
  pppuVar4 = this[0x16];
  pppuVar7 = pppuVar4 + 0xc;
  if (pppuVar7 != pppuVar6) {
    FUN_00401b20((int *)pppuVar7);
    ppuVar1 = pppuVar6[1];
    ppuVar2 = pppuVar6[2];
    ppuVar3 = pppuVar6[3];
    *pppuVar7 = *pppuVar6;
    pppuVar4[0xd] = ppuVar1;
    pppuVar4[0xe] = ppuVar2;
    pppuVar4[0xf] = ppuVar3;
    *(undefined8 *)(pppuVar4 + 0x10) = *(undefined8 *)(pppuVar6 + 4);
    pppuVar6[4] = (undefined4 **)0x0;
    pppuVar6[5] = (undefined4 **)0xf;
    *(undefined1 *)pppuVar6 = 0;
  }
  if (0xf < local_28) {
    pvVar8 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar8 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  FUN_00591070("SAVEHANDLER","...contract [%s -> %s, %s] loaded");
  if (0xf < local_40) {
    ppppuVar9 = (undefined4 ****)local_54[0];
    if ((0xfff < local_40 + 1) &&
       (ppppuVar9 = (undefined4 ****)local_54[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_54[0] + (-4 - (int)ppppuVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar9);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004be5e0(FILE *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int local_14;
  int local_10;
  uint local_c;
  undefined1 local_6;
  char local_5;
  
  pcVar2 = fwrite_exref;
  fwrite((void *)(param_2 + 4),4,1,param_1);
  local_14 = *(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x44) >> 2;
  fwrite(&local_14,4,1,param_1);
  local_c = 0;
  if (*(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x44) >> 2 != 0) {
    do {
      fwrite(*(void **)(*(int *)(*(int *)(param_2 + 0x44) + local_c * 4) + 4),4,1,param_1);
      fwrite(*(void **)(*(int *)(param_2 + 0x44) + local_c * 4),4,1,param_1);
      local_c = local_c + 1;
    } while (local_c < (uint)(*(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x44) >> 2));
  }
  FUN_00591070("SAVEHANDLER","...%d components loaded into cargo");
  local_c = 0;
  piVar3 = (int *)(param_2 + 0xc);
  local_10 = 0;
  do {
    if ((local_10 < 0) || ((0 < *(int *)(param_2 + 8) && (*(int *)(param_2 + 8) <= local_10)))) {
      local_5 = false;
    }
    else {
      local_5 = *piVar3 != 0;
    }
    (*pcVar2)(&local_5,1,1,param_1);
    if (local_5 != '\0') {
      local_c = local_c + 1;
      iVar1 = 1;
      do {
        local_6 = *(undefined1 *)(iVar1 + *piVar3);
        fwrite(&local_6,1,1,param_1);
        pcVar2 = fwrite_exref;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
      fwrite((void *)(*piVar3 + 4),4,1,param_1);
      fwrite((void *)(*piVar3 + 8),4,1,param_1);
    }
    piVar3 = piVar3 + 1;
    local_10 = local_10 + 1;
  } while (local_10 < 0xe);
  FUN_00591070("SAVEHANDLER","Saved %d pods");
  return;
}


void FUN_004be750(void)

{
  void *pvVar1;
  undefined4 *_DstBuf;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  FILE *_File;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_60;
  undefined4 *local_58;
  int local_54;
  int *local_50;
  int local_4c;
  void *local_48;
  FILE *local_44;
  char local_3e;
  char local_3d;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bd218;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  pvVar1 = (void *)FUN_005adb0f(0x50);
  *(undefined4 *)((int)pvVar1 + 4) = 0x18;
  local_50 = (int *)((int)pvVar1 + 0xc);
  *(undefined4 *)((int)pvVar1 + 8) = 6;
  *(undefined4 *)((int)pvVar1 + 0x44) = 0;
  *(undefined4 *)((int)pvVar1 + 0x48) = 0;
  *(undefined4 *)((int)pvVar1 + 0x4c) = 0;
  *local_50 = 0;
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(undefined4 *)((int)pvVar1 + 0x18) = 0;
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x20) = 0;
  *(undefined4 *)((int)pvVar1 + 0x24) = 0;
  *(undefined4 *)((int)pvVar1 + 0x28) = 0;
  *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x30) = 0;
  *(undefined4 *)((int)pvVar1 + 0x34) = 0;
  *(undefined4 *)((int)pvVar1 + 0x38) = 0;
  *(undefined8 *)((int)pvVar1 + 0x3c) = 0;
  local_48 = pvVar1;
  FUN_00506bd0(pvVar1,*(int *)(*(int *)(DAT_0065b5cc[0x34] + 0x254) + 0xe8),
               *(undefined4 *)(*(int *)(DAT_0065b5cc[0x34] + 0x254) + 0xe4));
  fread((void *)((int)pvVar1 + 4),4,1,local_44);
  _File = local_44;
  local_54 = 0;
  fread(&local_54,4,1,local_44);
  local_60 = 0;
  if (0 < local_54) {
    do {
      local_4c = -1;
      fread(&local_4c,4,1,_File);
      _DstBuf = (undefined4 *)FUN_005adb0f(8);
      _File = local_44;
      uVar3 = 0;
      *_DstBuf = 0x42c80000;
      uVar5 = DAT_0065b5cc[1] - *DAT_0065b5cc >> 2;
      if (uVar5 != 0) {
        puVar4 = (undefined4 *)*DAT_0065b5cc;
        do {
          if (*(int *)*puVar4 == local_4c) {
            uVar2 = ((undefined4 *)*DAT_0065b5cc)[uVar3];
            goto LAB_004be8a6;
          }
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < uVar5);
      }
      uVar2 = 0;
LAB_004be8a6:
      _DstBuf[1] = uVar2;
      local_58 = _DstBuf;
      fread(_DstBuf,4,1,local_44);
      puVar4 = *(undefined4 **)((int)pvVar1 + 0x48);
      if (*(undefined4 **)((int)pvVar1 + 0x4c) == puVar4) {
        FUN_00414080((undefined4 *)((int)pvVar1 + 0x44),puVar4,&local_58);
      }
      else {
        *puVar4 = _DstBuf;
        *(int *)((int)pvVar1 + 0x48) = *(int *)((int)pvVar1 + 0x48) + 4;
      }
      local_60 = local_60 + 1;
    } while (local_60 < local_54);
  }
  FUN_00591070("SAVEHANDLER","...%d components loaded from cargo");
  local_4c = 0;
  uVar3 = 0;
  do {
    piVar7 = local_50;
    fread(&local_3d,1,1,local_44);
    if (local_3d == '\0') {
      if ((((void *)*piVar7 != (void *)0x0) && (-1 < (int)uVar3)) &&
         ((*(int *)((int)local_48 + 8) < 1 || ((int)uVar3 < *(int *)((int)local_48 + 8))))) {
        FUN_005adb3f((void *)*piVar7);
        *piVar7 = 0;
      }
    }
    else {
      local_4c = local_4c + 1;
      FUN_005070d0(local_48,uVar3);
      iVar6 = 1;
      do {
        fread(&local_3e,1,1,local_44);
        if (local_3e != '\0') {
          if (((int)uVar3 < 0) ||
             (((0 < *(int *)((int)local_48 + 8) && (*(int *)((int)local_48 + 8) <= (int)uVar3)) ||
              (*local_50 == 0)))) {
            FUN_005070d0(local_48,uVar3);
          }
          if ((iVar6 != 0) && (iVar6 - 1U < 3)) {
            *(undefined1 *)(*local_50 + iVar6) = 1;
          }
        }
        piVar7 = local_50;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      fread((void *)(*local_50 + 4),4,1,local_44);
      fread((void *)(*piVar7 + 8),4,1,local_44);
      FUN_005069b0(local_48,(undefined1 *)local_3c,uVar3,'\x01');
      local_14 = 0;
      FUN_00591070("SAVEHANDLER","type: %s, goodID = %d, amount = %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pvVar1 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar1 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar1);
      }
      local_2c = 0;
      local_28 = 0xf;
      local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    }
    uVar3 = uVar3 + 1;
    local_50 = piVar7 + 1;
    if (0xd < (int)uVar3) {
      FUN_00591070("SAVEHANDLER","Loaded %d pods");
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


void __fastcall FUN_004beae0(FILE *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 *in_stack_ffffffac;
  undefined4 *puVar7;
  size_t _Size;
  size_t _Count;
  FILE *_File;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  if (param_2 == 0) {
    FUN_00591070("SAVEHANDLER","ERROR: null ship data when saving.");
  }
  FUN_00591070("SAVEHANDLER","Saving ship with name \'%s\' and class \'%s\'");
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(*(int *)(param_2 + 0x254) + 0x60));
  FUN_004b8810(param_1,in_stack_ffffffac);
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(param_2 + 8));
  FUN_004b8810(param_1,in_stack_ffffffac);
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(param_2 + 0x238));
  FUN_004b8810(param_1,in_stack_ffffffac);
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(param_2 + 0x98));
  FUN_004b8810(param_1,in_stack_ffffffac);
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(param_2 + 600));
  FUN_004b8810(param_1,in_stack_ffffffac);
  pcVar6 = fwrite_exref;
  if (*(int *)(param_2 + 0x44) == 0) {
    local_18 = 0;
    piVar1 = &local_18;
  }
  else {
    piVar1 = (int *)(*(int *)(param_2 + 0x44) + 0x70);
  }
  fwrite(piVar1,4,1,param_1);
  fwrite((void *)(param_2 + 0x28),8,1,param_1);
  fwrite((void *)(param_2 + 0x30),8,1,param_1);
  fwrite((void *)(param_2 + 0x20),4,1,param_1);
  fwrite((void *)(param_2 + 0x15c),1,1,param_1);
  fwrite((void *)(param_2 + 0x378),4,1,param_1);
  puVar7 = (undefined4 *)0x1;
  fwrite((void *)(param_2 + 0x234),1,1,param_1);
  local_18 = *(int *)(param_2 + 0x178);
  if (local_18 != 0) {
    iVar2 = FUN_004127d0();
    puVar3 = (undefined4 *)(local_18 + 8);
    if ((undefined4 *)(iVar2 + 0x14) != puVar3) {
      if (0xf < *(uint *)(local_18 + 0x1c)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_00402690((undefined4 *)(iVar2 + 0x14),puVar3,*(uint *)(local_18 + 0x18));
    }
  }
  local_1c = (*(int *)(*(int *)(param_2 + 0x254) + 0x11c) -
             *(int *)(*(int *)(param_2 + 0x254) + 0x118)) / 0xc;
  fwrite(&local_1c,4,1,param_1);
  local_10 = 0;
  local_18 = *(int *)(*(int *)(param_2 + 0x254) + 0x118);
  iVar4 = *(int *)(*(int *)(param_2 + 0x254) + 0x11c) - local_18;
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0xc + iVar2 != iVar2) {
    local_c = 0;
    do {
      local_20 = *(undefined4 *)(local_c + local_18);
      fwrite(&local_20,4,1,param_1);
      _Count = 1;
      _Size = 4;
      local_24 = *(int *)(local_c + *(int *)(*(int *)(param_2 + 0x254) + 0x118));
      puVar7 = (undefined4 *)0x4becf1;
      _File = param_1;
      piVar1 = FUN_00420f40((void *)(param_2 + 0x14c),&local_24);
      fwrite(piVar1,_Size,_Count,_File);
      local_10 = local_10 + 1;
      local_c = local_c + 0xc;
      local_18 = *(int *)(*(int *)(param_2 + 0x254) + 0x118);
    } while (local_10 < (uint)((*(int *)(*(int *)(param_2 + 0x254) + 0x11c) - local_18) / 0xc));
  }
  local_28 = *(int *)(param_2 + 0x22c) - *(int *)(param_2 + 0x228) >> 2;
  fwrite(&local_28,4,1,param_1);
  local_c = 0;
  if (*(int *)(param_2 + 0x22c) - *(int *)(param_2 + 0x228) >> 2 != 0) {
    do {
      FUN_004024e0(&stack0xffffffac,*(undefined4 **)(*(int *)(param_2 + 0x228) + local_c * 4));
      FUN_004b8810(param_1,puVar7);
      fwrite((void *)(*(int *)(*(int *)(param_2 + 0x228) + local_c * 4) + 0x20),4,1,param_1);
      fwrite((void *)(*(int *)(*(int *)(param_2 + 0x228) + local_c * 4) + 0x24),4,1,param_1);
      fwrite((void *)(*(int *)(*(int *)(param_2 + 0x228) + local_c * 4) + 0x18),4,1,param_1);
      fwrite((void *)(*(int *)(*(int *)(param_2 + 0x228) + local_c * 4) + 0x1c),4,1,param_1);
      FUN_00591070("SAVEHANDLER","  Console damage: %s");
      local_c = local_c + 1;
    } while (local_c < (uint)(*(int *)(param_2 + 0x22c) - *(int *)(param_2 + 0x228) >> 2));
  }
  local_2c = *(int *)(*(int *)(param_2 + 0x40) + 0x40) - *(int *)(*(int *)(param_2 + 0x40) + 0x3c)
             >> 2;
  fwrite(&local_2c,4,1,param_1);
  iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0x3c);
  if (*(int *)(*(int *)(param_2 + 0x40) + 0x40) - iVar2 >> 2 != 0) {
    uVar5 = 0;
    do {
      FUN_004c03f0(param_1,*(int *)(iVar2 + uVar5 * 4));
      uVar5 = uVar5 + 1;
      iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0x3c);
      pcVar6 = fwrite_exref;
    } while (uVar5 < (uint)(*(int *)(*(int *)(param_2 + 0x40) + 0x40) - iVar2 >> 2));
  }
  local_14 = 8;
  (*pcVar6)();
  local_18 = 0;
  if (0 < local_14) {
    local_10 = 0x3c;
    do {
      iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
      if (iVar2 == 0) {
        local_5 = false;
      }
      else {
        local_5 = *(int *)(local_10 + iVar2) != 0;
      }
      (*pcVar6)();
      if (local_5 != '\0') {
        FUN_004024e0(&stack0xffffffac,
                     (undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x20) + local_10) +
                              0x254) + 0x60));
        FUN_004b8810(param_1,puVar7);
      }
      local_18 = local_18 + 1;
      local_10 = local_10 + 4;
    } while (local_18 < local_14);
  }
  FUN_004024e0(&stack0xffffffac,(undefined4 *)(param_2 + 0x32c));
  FUN_004b8810(param_1,puVar7);
  if (*(int *)(param_2 + 0x328) != 0) {
    local_5 = 1;
    (*pcVar6)();
    FUN_004024e0(&stack0xffffffac,*(undefined4 **)(param_2 + 0x328));
    FUN_004b8810(param_1,puVar7);
    FUN_004024e0(&stack0xffffffac,(undefined4 *)(*(int *)(param_2 + 0x328) + 0x18));
    FUN_004b8810(param_1,puVar7);
    return;
  }
  local_5 = 0;
  (*pcVar6)();
  return;
}


void __fastcall FUN_004befa0(FILE *param_1)

{
  int ******ppppppiVar1;
  int ******ppppppiVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  undefined4 *puVar5;
  int *****pppppiVar6;
  undefined1 *puVar7;
  int *******pppppppiVar8;
  int iVar9;
  int iVar10;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  void *in_stack_fffffe9c;
  int ***pppiStack_14c;
  undefined4 uStack_148;
  byte *pbVar16;
  void *pvVar17;
  int ****ppppiVar18;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined1 *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 *local_d0;
  char local_ca;
  undefined1 local_c9;
  undefined4 *local_c8;
  int ****local_c4;
  char local_bd;
  int ******local_bc;
  int ******local_b8;
  void *local_b4 [5];
  uint local_a0;
  void *local_9c [4];
  undefined4 local_8c;
  uint local_88;
  void *local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 ***local_6c [4];
  uint local_5c;
  uint local_58;
  undefined4 ***local_54 [4];
  uint local_44;
  uint local_40;
  int ******local_3c [4];
  int local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bd303;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_004b88b0((undefined1 *)local_b4,param_1);
  local_14 = 0;
  FUN_004b88b0((undefined1 *)local_9c,param_1);
  local_14._0_1_ = 1;
  FUN_004b88b0((undefined1 *)local_84,param_1);
  local_14._0_1_ = 2;
  FUN_004b88b0((undefined1 *)local_6c,param_1);
  local_14._0_1_ = 3;
  FUN_004b88b0((undefined1 *)local_54,param_1);
  local_14._0_1_ = 4;
  fread(&local_d4,4,1,param_1);
  fread(&local_f8,8,1,param_1);
  fread(&local_f0,8,1,param_1);
  uStack_148 = 0x4bf070;
  fread(&local_e8,4,1,param_1);
  fread(&local_c9,1,1,param_1);
  local_bc = (int ******)&stack0xfffffee4;
  FUN_00402690(&stack0xfffffee4,&PTR_005ce008,0);
  local_b8 = (int ******)&stack0xfffffecc;
  local_14._0_1_ = 5;
  FUN_004024e0(&stack0xfffffecc,local_b4);
  local_c4 = &pppiStack_14c;
  local_14._0_1_ = 6;
  FUN_004024e0(&pppiStack_14c,local_84);
  local_14._0_1_ = 7;
  FUN_004024e0(&stack0xfffffe9c,local_9c);
  local_14._0_1_ = 4;
  local_c8 = FUN_0040e040(local_d4,local_e8,in_stack_fffffe9c);
  local_bc = (int ******)FUN_005adb0f(0x164);
  puVar5 = local_c8;
  local_14._0_1_ = 9;
  puVar3 = FUN_00501e30(local_bc,local_c8,local_d4);
  local_14 = CONCAT31(local_14._1_3_,4);
  puVar5[0x11] = puVar3;
  puVar3[0x1d] = 1;
  *(undefined4 *)(puVar5[0x11] + 0x78) = 2;
  if ((*(int *)(puVar5[0x11] + 0x70) != 0) && (*(int *)(puVar5[0x11] + 0x70) != 3)) {
    FUN_00591070(&DAT_0060dfc4,"%s: My captain is %s and %s");
  }
  if ((undefined4 ****)(puVar5 + 0x26) != local_6c) {
    ppppuVar4 = local_6c;
    if (0xf < local_58) {
      ppppuVar4 = (undefined4 ****)local_6c[0];
    }
    FUN_00402690(puVar5 + 0x26,ppppuVar4,local_5c);
  }
  if ((undefined4 ****)(puVar5 + 0x96) != local_54) {
    ppppuVar4 = local_54;
    if (0xf < local_40) {
      ppppuVar4 = (undefined4 ****)local_54[0];
    }
    FUN_00402690(puVar5 + 0x96,ppppuVar4,local_44);
  }
  puVar5[10] = local_f8;
  puVar5[0xb] = uStack_f4;
  *(undefined8 *)(puVar5 + 0xc) = local_f0;
  *(undefined1 *)(puVar5 + 0x57) = local_c9;
  FUN_0050c090(puVar5,(undefined1 *)puVar5[8]);
  fread(puVar5 + 0xde,4,1,param_1);
  pvVar17 = (void *)0x1;
  pbVar16 = (byte *)0x1;
  fread(puVar5 + 0x8d,1,1,param_1);
  if (*(char *)(puVar5 + 0x8d) != '\0') {
    puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
    if (puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
      local_b8 = (int ******)puVar5[8];
      do {
        piVar13 = (int *)*puVar3;
        puVar5 = local_c8;
        if ((int ******)*piVar13 == local_b8) goto LAB_004bf261;
        puVar3 = puVar3 + 1;
      } while (puVar3 != *(undefined4 **)(DAT_0065b5cc + 0x40));
    }
    piVar13 = (int *)0x0;
LAB_004bf261:
    *(int **)(DAT_0065b5cc + 0xd8) = piVar13;
  }
  fread(&local_d8,4,1,param_1);
  if (0 < local_d8) {
    local_c4 = (int ****)(puVar5 + 0x53);
    iVar14 = 0;
    do {
      fread(&local_b8,4,1,param_1);
      pvVar17 = (void *)0x1;
      pbVar16 = &DAT_00000004;
      fread(&local_bc,4,1,param_1);
      piVar13 = FUN_00420f40(local_c4,(int *)&local_b8);
      iVar14 = iVar14 + 1;
      *piVar13 = (int)local_bc;
      puVar5 = local_c8;
    } while (iVar14 < local_d8);
  }
  fread(&local_dc,4,1,param_1);
  FUN_00511350((int)puVar5);
  local_b8 = (int ******)0x0;
  if (0 < local_dc) {
    local_bc = (int ******)(puVar5 + 0x8a);
    do {
      puVar5 = (undefined4 *)FUN_005adb0f(0x28);
      local_14._0_1_ = 10;
      local_d0 = puVar5;
      FUN_004b88b0(&stack0xfffffee4,param_1);
      pppppiVar6 = FUN_004b6b90(puVar5,pvVar17);
      local_14 = CONCAT31(local_14._1_3_,4);
      local_c4 = (int ****)pppppiVar6;
      fread(pppppiVar6 + 8,4,1,param_1);
      pvVar17 = (void *)0x1;
      pbVar16 = &DAT_00000004;
      fread(pppppiVar6 + 9,4,1,param_1);
      fread(pppppiVar6 + 6,4,1,param_1);
      uStack_148 = 0x4bf39f;
      fread(pppppiVar6 + 7,4,1,param_1);
      ppppppiVar12 = (int ******)local_bc[1];
      if ((int ******)local_bc[2] == ppppppiVar12) {
        FUN_004141e0(local_bc,ppppppiVar12,&local_c4);
      }
      else {
        *ppppppiVar12 = pppppiVar6;
        local_bc[1] = local_bc[1] + 1;
      }
      FUN_00591070("SAVEHANDLER","  Console damage loaded for: %s");
      local_b8 = (int ******)((int)local_b8 + 1);
    } while ((int)local_b8 < local_dc);
  }
  fread(&local_e0,4,1,param_1);
  local_b8 = (int ******)0x0;
  if (0 < local_e0) {
    do {
      puVar7 = (undefined1 *)FUN_004c0540(param_1);
      local_bd = puVar7[99];
      FUN_00521d10((void *)local_c8[0x10],puVar7,*(int *)(puVar7 + 0x10));
      puVar7[99] = local_bd;
      local_b8 = (int ******)((int)local_b8 + 1);
    } while ((int)local_b8 < local_e0);
  }
  puVar5 = local_c8;
  if (*(int *)(local_c8[0x10] + 0x20) != 0) {
    local_b8 = (int ******)(*(int *)(local_c8[0x10] + 0x20) + 0x3c);
    local_c4 = (int ****)0x8;
    do {
      local_bc = (int ******)*local_b8;
      if ((int *******)local_bc != (int *******)0x0) {
        FUN_00494e20(local_bc);
        FUN_005adb3f(local_bc);
      }
      *local_b8 = (int *****)0x0;
      local_b8 = local_b8 + 1;
      local_c4 = (int ****)((int)local_c4 + -1);
    } while ((int *****)local_c4 != (int *****)0x0);
  }
  fread(&local_e4,4,1,param_1);
  local_c4 = (int ****)0x0;
  if (0 < local_e4) {
    do {
      fread(&local_bd,1,1,param_1);
      if (local_bd != '\0') {
        FUN_004b88b0((undefined1 *)local_3c,param_1);
        local_14._0_1_ = 0xb;
        ppppiVar18 = local_c4;
        FUN_004024e0(&stack0xfffffee0,local_3c);
        iVar14 = FUN_004a8180(pbVar16);
        FUN_0050f740(puVar5,iVar14,(uint)ppppiVar18);
        FUN_00591070("SAVEHANDLER","Loaded weapon of class %s into player ship");
        local_14 = CONCAT31(local_14._1_3_,4);
        if (0xf < local_28) {
          pppppppiVar8 = (int *******)local_3c[0];
          if ((0xfff < local_28 + 1) &&
             (pppppppiVar8 = (int *******)local_3c[0][-1],
             (undefined1 *)0x1f < (undefined1 *)((int)local_3c[0] + (-4 - (int)pppppppiVar8))))
          goto LAB_004bf643;
          FUN_005adb3f(pppppppiVar8);
        }
      }
      local_c4 = (int ****)((int)local_c4 + 1);
    } while ((int)local_c4 < local_e4);
  }
  local_bc = (int ******)FUN_004b88b0((undefined1 *)local_3c,param_1);
  if ((int ******)(puVar5 + 0xcb) != local_bc) {
    FUN_00401b20(puVar5 + 0xcb);
    ppppppiVar12 = (int ******)local_bc[1];
    ppppppiVar1 = (int ******)local_bc[2];
    ppppppiVar2 = (int ******)local_bc[3];
    puVar5[0xcb] = *local_bc;
    puVar5[0xcc] = ppppppiVar12;
    puVar5[0xcd] = ppppppiVar1;
    puVar5[0xce] = ppppppiVar2;
    *(undefined8 *)(puVar5 + 0xcf) = *(undefined8 *)(local_bc + 4);
    local_bc[4] = (int *****)0x0;
    local_bc[5] = (int *****)&DAT_0000000f;
    *(undefined1 *)local_bc = 0;
  }
  if (0xf < local_28) {
    pppppppiVar8 = (int *******)local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pppppppiVar8 = (int *******)local_3c[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_3c[0] + (-4 - (int)pppppppiVar8)))) {
LAB_004bf643:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppiVar8);
  }
  fread(&local_ca,1,1,param_1);
  if (local_ca != '\0') {
    pvVar17 = (void *)FUN_005adb0f(0x30);
    memset(pvVar17,0,0x30);
    *(undefined4 *)((int)pvVar17 + 0x14) = 0xf;
    *(undefined4 *)((int)pvVar17 + 0x28) = 0;
    *(undefined4 *)((int)pvVar17 + 0x2c) = 0xf;
    *(undefined1 *)((int)pvVar17 + 0x18) = 0;
    local_c8[0xca] = pvVar17;
    local_bc = (int ******)FUN_004b88b0((undefined1 *)local_3c,param_1);
    puVar5 = local_c8;
    local_b8 = (int ******)local_c8[0xca];
    if (local_b8 != local_bc) {
      FUN_00401b20((int *)local_b8);
      ppppppiVar12 = (int ******)local_bc[1];
      ppppppiVar1 = (int ******)local_bc[2];
      ppppppiVar2 = (int ******)local_bc[3];
      *local_b8 = *local_bc;
      local_b8[1] = (int *****)ppppppiVar12;
      local_b8[2] = (int *****)ppppppiVar1;
      local_b8[3] = (int *****)ppppppiVar2;
      *(undefined8 *)(local_b8 + 4) = *(undefined8 *)(local_bc + 4);
      local_bc[4] = (int *****)0x0;
      local_bc[5] = (int *****)&DAT_0000000f;
      *(undefined1 *)local_bc = 0;
    }
    if (0xf < local_28) {
      pppppppiVar8 = (int *******)local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pppppppiVar8 = (int *******)local_3c[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_3c[0] + (-4 - (int)pppppppiVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppiVar8);
    }
    pppppppiVar8 = (int *******)FUN_004b88b0((undefined1 *)local_3c,param_1);
    local_bc = (int ******)(puVar5[0xca] + 0x18);
    if ((int *******)local_bc != pppppppiVar8) {
      FUN_00401b20((int *)local_bc);
      ppppppiVar12 = pppppppiVar8[1];
      ppppppiVar1 = pppppppiVar8[2];
      ppppppiVar2 = pppppppiVar8[3];
      *local_bc = (int *****)*pppppppiVar8;
      local_bc[1] = (int *****)ppppppiVar12;
      local_bc[2] = (int *****)ppppppiVar1;
      local_bc[3] = (int *****)ppppppiVar2;
      *(undefined8 *)(local_bc + 4) = *(undefined8 *)(pppppppiVar8 + 4);
      pppppppiVar8[4] = (int ******)0x0;
      pppppppiVar8[5] = (int ******)&DAT_0000000f;
      *(undefined1 *)pppppppiVar8 = 0;
    }
    if (0xf < local_28) {
      pppppppiVar8 = (int *******)local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pppppppiVar8 = (int *******)local_3c[0][-1],
         (undefined1 *)0x1f < (undefined1 *)((int)local_3c[0] + (-4 - (int)pppppppiVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pppppppiVar8);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (int ******)((uint)local_3c[0] & 0xffffff00);
  }
  iVar14 = DAT_0065b5cc;
  if (*(char *)(puVar5 + 0x8d) == '\0') goto LAB_004bfb10;
  *(undefined4 **)(DAT_0065b5cc + 0xd0) = puVar5;
  puVar5[0x19] = 1;
  iVar9 = *(int *)(iVar14 + 0xd0);
  DAT_0065b3d4 = *(int *)(iVar9 + 0x178);
  if (DAT_0065b3d4 == 0) {
LAB_004bf82a:
    DAT_0065b3d4 = iVar9;
  }
  else {
    bVar15 = false;
    if (*(int *)(DAT_0065b3d4 + 0x254) != 0) {
      bVar15 = *(int *)(*(int *)(DAT_0065b3d4 + 0x254) + 0x158) == 1;
      puVar5 = local_c8;
    }
    if (!bVar15) goto LAB_004bf82a;
  }
  *(undefined1 *)(iVar14 + 0xd4) = *(undefined1 *)(*(int *)(DAT_0065b3d4 + 0x254) + 0xd0);
  if (DAT_0065c280 == (undefined4 *)0x0) {
    local_d0 = (undefined4 *)FUN_005adb0f(0x98);
    local_14._0_1_ = 0xc;
    DAT_0065c280 = FUN_0058f5d0(local_d0);
    local_14 = CONCAT31(local_14._1_3_,4);
  }
  FUN_0058fc90((int)DAT_0065c280);
  if (*(int *)(puVar5[9] + 0x118) == 2) {
    *(undefined1 *)(puVar5[0x10] + 0x34) = 0;
  }
  else {
    *(undefined1 *)(puVar5[0x10] + 0x34) = 1;
  }
  puVar5 = (undefined4 *)
           FUN_004a6be0(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x20),*(int *)(DAT_0065b5cc + 0xd0)
                        ,'\0');
  if (puVar5 == (undefined4 *)0x0) {
    piVar13 = *(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))();
    }
    iVar9 = DAT_0065b5cc;
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178) = 0;
    *(undefined4 *)(*(int *)(iVar9 + 0xd0) + 0xf8) = 0;
    iVar14 = *(int *)(iVar9 + 0xd0);
    *(undefined4 *)(iVar14 + 0xd4) = 0;
    *(undefined4 *)(iVar14 + 0x2c0) = 0;
    *(undefined4 *)(iVar14 + 0x2c4) = 0;
    if (*(int *)(*(int *)(iVar9 + 0xd0) + 0x178) != 0) {
      iVar14 = FUN_004127d0();
      FUN_00402690((void *)(iVar14 + 0x14),&PTR_005ce008,0);
    }
  }
  else {
    FUN_00511950(*(void **)(DAT_0065b5cc + 0xd0),puVar5,'\x01','\x01');
    iVar14 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
    if (iVar14 != 0) {
      puVar5 = (undefined4 *)(iVar14 + 8);
      iVar9 = FUN_004127d0();
      if ((undefined4 *)(iVar9 + 0x14) != puVar5) {
        if (0xf < *(uint *)(iVar14 + 0x1c)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        FUN_00402690((undefined4 *)(iVar9 + 0x14),puVar5,*(uint *)(iVar14 + 0x18));
      }
      FUN_00591e00((undefined1 *)local_3c,"aboard_%s");
      local_14._0_1_ = 0xd;
      local_bc = (int ******)local_3c;
      if (0xf < local_28) {
        local_bc = local_3c[0];
      }
      local_b8 = (int ******)local_3c;
      if (0xf < local_28) {
        local_b8 = local_3c[0];
      }
      iVar9 = (local_2c + (int)local_bc) - (int)local_b8;
      iVar14 = 0;
      if ((int *******)(local_2c + (int)local_bc) < local_b8) {
        iVar9 = 0;
      }
      if (iVar9 != 0) {
        do {
          iVar10 = tolower((int)*(char *)((int)local_b8 + iVar14));
          *(char *)((int)local_bc + iVar14) = (char)iVar10;
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar9);
      }
      local_d0 = (undefined4 *)&stack0xfffffee0;
      FUN_004024e0(&stack0xfffffee0,local_3c);
      local_14._0_1_ = 0xe;
      if (DAT_0065c274 == (int ****)0x0) {
        pppppppiVar11 = (int *******)FUN_005adb0f(0x30);
        *pppppppiVar11 = (int ******)0x0;
        pppppppiVar11[1] = (int ******)0x0;
        pppppppiVar11[2] = (int ******)0x0;
        local_14._0_1_ = 0x10;
        pppppppiVar8 = pppppppiVar11 + 3;
        *pppppppiVar8 = (int ******)0x0;
        pppppppiVar11[4] = (int ******)0x0;
        local_bc = (int ******)pppppppiVar11;
        local_b8 = (int ******)pppppppiVar8;
        ppppppiVar12 = (int ******)FUN_004136c0();
        *pppppppiVar8 = ppppppiVar12;
        pppppppiVar11[9] = (int ******)0x0;
        pppppppiVar11[10] = (int ******)&DAT_0000000f;
        *(undefined1 *)(pppppppiVar11 + 5) = 0;
        DAT_0065c274 = (int ****)pppppppiVar11;
      }
      local_14 = CONCAT31(local_14._1_3_,0xd);
      FUN_004a0ee0(DAT_0065c274,pbVar16);
      if (0xf < local_28) {
        pppppppiVar8 = (int *******)local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pppppppiVar8 = (int *******)local_3c[0][-1],
           (undefined1 *)0x1f < (undefined1 *)((int)local_3c[0] + (-4 - (int)pppppppiVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppppiVar8);
      }
    }
  }
LAB_004bfb10:
  if (0xf < local_40) {
    ppppuVar4 = (undefined4 ****)local_54[0];
    if ((0xfff < local_40 + 1) &&
       (ppppuVar4 = (undefined4 ****)local_54[0][-1],
       0x1f < (uint)((int)local_54[0] + (-4 - (int)ppppuVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar4);
  }
  local_44 = 0;
  local_40 = 0xf;
  local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_58) {
    ppppuVar4 = (undefined4 ****)local_6c[0];
    if ((0xfff < local_58 + 1) &&
       (ppppuVar4 = (undefined4 ****)local_6c[0][-1],
       0x1f < (uint)((int)local_6c[0] + (-4 - (int)ppppuVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar4);
  }
  local_5c = 0;
  local_58 = 0xf;
  local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_70) {
    pvVar17 = local_84[0];
    if ((0xfff < local_70 + 1) &&
       (pvVar17 = *(void **)((int)local_84[0] + -4),
       0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar17)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar17);
  }
  local_74 = 0;
  local_70 = 0xf;
  local_84[0] = (void *)((uint)local_84[0] & 0xffffff00);
  if (0xf < local_88) {
    pvVar17 = local_9c[0];
    if ((0xfff < local_88 + 1) &&
       (pvVar17 = *(void **)((int)local_9c[0] + -4),
       0x1f < (uint)((int)local_9c[0] + (-4 - (int)pvVar17)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar17);
  }
  local_8c = 0;
  local_88 = 0xf;
  local_9c[0] = (void *)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_a0) {
    pvVar17 = local_b4[0];
    if ((0xfff < local_a0 + 1) &&
       (pvVar17 = *(void **)((int)local_b4[0] + -4),
       0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar17)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar17);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004bfca0(FILE *param_1)

{
  undefined4 *in_stack_ffffffd4;
  undefined1 local_6;
  char local_5;
  
  local_5 = *(int *)(DAT_0065b5cc + 0x128) != 0;
  fwrite(&local_5,1,1,param_1);
  if (*(int *)(DAT_0065b5cc + 0x128) != 0) {
    FUN_004024e0(&stack0xffffffd4,*(undefined4 **)(*(int *)(DAT_0065b5cc + 0x128) + 0xc));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    FUN_004024e0(&stack0xffffffd4,
                 (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0x128) + 0xc) + 0x18));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x128) + 0x28));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x128) + 0x40));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x128) + 0x10));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x128) + 0x58));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    FUN_004024e0(&stack0xffffffd4,(undefined4 *)(*(int *)(DAT_0065b5cc + 0x128) + 0x70));
    FUN_004b8810(param_1,in_stack_ffffffd4);
    fwrite((void *)(*(int *)(DAT_0065b5cc + 0x128) + 4),4,1,param_1);
    fwrite((void *)(*(int *)(DAT_0065b5cc + 0x128) + 0x90),1,1,param_1);
    fwrite((void *)(*(int *)(DAT_0065b5cc + 0x128) + 0x88),1,1,param_1);
    fwrite((void *)(*(int *)(DAT_0065b5cc + 0x128) + 0x8c),4,1,param_1);
    fwrite((void *)(*(int *)(DAT_0065b5cc + 0x128) + 8),4,1,param_1);
    local_6 = 0;
    fwrite(&local_6,1,1,param_1);
  }
  if (local_5 != '\0') {
    FUN_00591070("SAVEHANDLER","Saved onboard passenger %s.");
    return;
  }
  FUN_00591070("SAVEHANDLER","Saved no passenger.");
  return;
}


void __fastcall FUN_004bfe80(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 local_5d;
  int *local_5c;
  char local_55;
  void *local_54 [4];
  undefined4 local_44;
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
  puStack_18 = &LAB_005bd342;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  fread(&local_55,1,1,param_1);
  if (local_55 == '\0') {
    pvVar7 = *(void **)(DAT_0065b5cc + 0x128);
    if (pvVar7 != (void *)0x0) {
      FUN_00406b80((int)pvVar7);
      FUN_005adb3f(pvVar7);
      *(undefined4 *)(DAT_0065b5cc + 0x128) = 0;
      goto LAB_004c038a;
    }
  }
  else {
    local_5c = (int *)FUN_005adb0f(0x58);
    piVar4 = (int *)FUN_00484c00((undefined1 *)local_5c);
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
    if (piVar4 != piVar5) {
      FUN_00401b20(piVar4);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *piVar4 = *piVar5;
      piVar4[1] = iVar1;
      piVar4[2] = iVar2;
      piVar4[3] = iVar3;
      *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar7 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar7 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
    if (piVar4 + 6 != piVar5) {
      FUN_00401b20(piVar4 + 6);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      piVar4[6] = *piVar5;
      piVar4[7] = iVar1;
      piVar4[8] = iVar2;
      piVar4[9] = iVar3;
      *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar7 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar7 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    local_5c = (int *)FUN_005adb0f(0x94);
    local_14 = 0;
    uVar6 = FUN_00484e30(local_5c,(int)piVar4);
    local_14 = 0xffffffff;
    *(undefined4 *)(DAT_0065b5cc + 0x128) = uVar6;
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
    local_5c = (int *)(*(int *)(DAT_0065b5cc + 0x128) + 0x28);
    if (local_5c != piVar5) {
      FUN_00401b20(local_5c);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *local_5c = *piVar5;
      local_5c[1] = iVar1;
      local_5c[2] = iVar2;
      local_5c[3] = iVar3;
      *(undefined8 *)(local_5c + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar7 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar7 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
    local_5c = (int *)(*(int *)(DAT_0065b5cc + 0x128) + 0x40);
    if (local_5c != piVar5) {
      FUN_00401b20(local_5c);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *local_5c = *piVar5;
      local_5c[1] = iVar1;
      local_5c[2] = iVar2;
      local_5c[3] = iVar3;
      *(undefined8 *)(local_5c + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar7 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar7 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
    local_5c = (int *)(*(int *)(DAT_0065b5cc + 0x128) + 0x10);
    if (local_5c != piVar5) {
      FUN_00401b20(local_5c);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *local_5c = *piVar5;
      local_5c[1] = iVar1;
      local_5c[2] = iVar2;
      local_5c[3] = iVar3;
      *(undefined8 *)(local_5c + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar7 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar7 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_3c,param_1);
    local_5c = (int *)(*(int *)(DAT_0065b5cc + 0x128) + 0x58);
    if (local_5c != piVar5) {
      FUN_00401b20(local_5c);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *local_5c = *piVar5;
      local_5c[1] = iVar1;
      local_5c[2] = iVar2;
      local_5c[3] = iVar3;
      *(undefined8 *)(local_5c + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_28) {
      pvVar7 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar7 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    piVar5 = (int *)FUN_004b88b0((undefined1 *)local_54,param_1);
    local_5c = (int *)(*(int *)(DAT_0065b5cc + 0x128) + 0x70);
    if (local_5c != piVar5) {
      FUN_00401b20(local_5c);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      iVar3 = piVar5[3];
      *local_5c = *piVar5;
      local_5c[1] = iVar1;
      local_5c[2] = iVar2;
      local_5c[3] = iVar3;
      *(undefined8 *)(local_5c + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    if (0xf < local_40) {
      pvVar7 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar7 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar7);
    }
    iVar1 = DAT_0065b5cc;
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
    *(int **)(*(int *)(DAT_0065b5cc + 0x128) + 0xc) = piVar4;
    fread((void *)(*(int *)(iVar1 + 0x128) + 4),4,1,param_1);
    fread((void *)(*(int *)(DAT_0065b5cc + 0x128) + 0x90),1,1,param_1);
    fread((void *)(*(int *)(DAT_0065b5cc + 0x128) + 0x88),1,1,param_1);
    fread((void *)(*(int *)(DAT_0065b5cc + 0x128) + 0x8c),4,1,param_1);
    fread((void *)(*(int *)(DAT_0065b5cc + 0x128) + 8),4,1,param_1);
    local_5d = 0;
    fread(&local_5d,1,1,param_1);
LAB_004c038a:
    if (local_55 != '\0') {
      FUN_00591070("SAVEHANDLER","Loaded onboard passenger %s.");
      goto LAB_004c03c8;
    }
  }
  FUN_00591070("SAVEHANDLER","Loaded no passenger.");
LAB_004c03c8:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
