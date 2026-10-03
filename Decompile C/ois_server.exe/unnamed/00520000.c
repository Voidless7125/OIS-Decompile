#include "../ois_server.exe.h"


void __thiscall FUN_00520030(void *this,float param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2a7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar2 = false;
  bVar1 = false;
  local_18 = 0.0;
  iVar5 = 0;
  uVar6 = 0;
  iVar4 = *(int *)((int)this + 0x84);
  local_20 = 0;
  if (*(int *)((int)this + 0x88) - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + uVar6 * 4);
      if (*(int *)(iVar4 + 0x54) == 1) {
        if (iVar5 == 0) {
LAB_0052019a:
          bVar3 = true;
        }
        else {
          local_2c = (float)*(double *)(iVar5 + 0x20);
          local_28 = (float)*(double *)(iVar5 + 0x28);
          local_34 = (float)*(double *)(iVar4 + 0x20);
          local_30 = (float)*(double *)(iVar4 + 0x28);
          local_8 = 2;
          bVar2 = true;
          bVar1 = true;
          local_18 = 4.2039e-45;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)&param_1);
          local_24 = local_1c * 0.5;
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_34,(Vec2 *)&param_1);
          local_18 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
          if ((1.5 - fVar7 * 0.5 * local_18 * local_18) * local_18 * fVar7 <
              (1.5 - local_24 * local_14 * local_14) * local_14 * local_1c) goto LAB_0052019a;
          bVar3 = false;
        }
        if (bVar1) {
          bVar1 = false;
        }
        if (bVar2) {
          bVar2 = false;
        }
        iVar5 = local_20;
        if (bVar3) {
          local_20 = *(int *)(*(int *)((int)this + 0x84) + uVar6 * 4);
          iVar5 = local_20;
        }
      }
      local_8 = 0;
      uVar6 = uVar6 + 1;
      iVar4 = *(int *)((int)this + 0x84);
    } while (uVar6 < (uint)(*(int *)((int)this + 0x88) - iVar4 >> 2));
    if (iVar5 != 0) {
      FUN_00592f80(param_1,param_2,(float)*(double *)(iVar5 + 0x20));
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00520260(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c14b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x84);
  local_14 = 0.0;
  if (*(int *)(param_1 + 0x88) - iVar1 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if (*(int *)(iVar1 + 0x54) == 1) {
        local_20 = (float)*(double *)(iVar1 + 0x20);
        local_1c = (float)*(double *)(iVar1 + 0x28);
        local_8 = 1;
        fVar3 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0x00000004,(Vec2 *)&local_20);
        local_18 = (float)(0x5f3759df - ((uint)fVar3 >> 1));
        fVar3 = (1.5 - fVar3 * 0.5 * local_18 * local_18) * local_18 * fVar3 - 200.0;
        if (0.0 <= fVar3) {
          if (fVar3 <= 300.0) {
            local_14 = (1.0 - fVar3 / 300.0) + local_14;
          }
        }
        else {
          local_14 = local_14 + 1.0;
        }
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x84);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x88) - iVar1 >> 2));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005203d0(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *local_30 [5];
  uint local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1d48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x120) - iVar5 >> 2 != 0) {
    do {
      FUN_004024e0(local_30,(undefined4 *)(*(int *)(iVar5 + uVar6 * 4) + 4));
      local_8 = 0;
      local_14 = FUN_00412bf0();
      local_8 = 0xffffffff;
      pbVar1 = *(byte **)(local_14 + 0x10);
      puVar2 = (undefined4 *)
               FUN_00413f20(&local_18,(byte *)local_30,*(byte **)(local_14 + 0xc),pbVar1);
      if ((byte *)*puVar2 != pbVar1) {
        piVar3 = FUN_00414300((int *)pbVar1,*(int **)(local_14 + 0x10),(int *)*puVar2);
        FUN_004028b0(piVar3,*(int **)(local_14 + 0x10));
        *(int **)(local_14 + 0x10) = piVar3;
      }
      if (0xf < local_1c) {
        pvVar4 = local_30[0];
        if (0xfff < local_1c + 1) {
          pvVar4 = *(void **)((int)local_30[0] + -4);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar4);
      }
      pvVar4 = *(void **)(*(int *)(param_1 + 0x11c) + uVar6 * 4);
      if (pvVar4 != (void *)0x0) {
        FUN_00405e80(pvVar4);
      }
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x11c);
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x120) - iVar5 >> 2));
  }
  *(int *)(param_1 + 0x120) = iVar5;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00520500(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  char *pcVar9;
  byte ****ppppbVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  byte *****pppppbVar17;
  undefined4 local_6c;
  int *local_68;
  int *local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  code *local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  byte ****local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2ac1;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_48 = 0;
  local_38 = param_1;
  local_14 = uVar3;
  FUN_005203d0(param_1);
  local_50 = FUN_00591370((int *)(param_1 + 0x70));
  local_3c = (int *)0x0;
  piVar14 = (int *)0x0;
  local_5c = (int *)0x0;
  local_58 = (int *)0x0;
  local_44 = (int *)0x0;
  local_54 = (int *)0x0;
  uVar12 = 0;
  local_8 = 0;
  iVar13 = *(int *)(local_38 + 0x128);
  if (*(int *)(local_38 + 300) - iVar13 >> 2 != 0) {
    do {
      piVar8 = (int *)(iVar13 + uVar12 * 4);
      iVar13 = *piVar8;
      if ((*(char *)(iVar13 + 4) == '\0') && (*(float *)(iVar13 + 8) == -1.0)) {
        if (local_44 == piVar14) {
          FUN_00414080(&local_5c,piVar14,piVar8);
          local_44 = local_54;
          piVar14 = local_58;
        }
        else {
          *piVar14 = iVar13;
          local_58 = piVar14 + 1;
          piVar14 = local_58;
        }
      }
      uVar12 = uVar12 + 1;
      iVar13 = *(int *)(local_38 + 0x128);
    } while (uVar12 < (uint)(*(int *)(local_38 + 300) - iVar13 >> 2));
    local_3c = local_5c;
  }
  local_4c = 0;
  local_5c = local_3c;
  if (0 < local_50) {
    local_40 = rand_exref;
    do {
      iVar13 = (int)piVar14 - (int)local_3c >> 2;
      if (iVar13 == 0) break;
      iVar4 = (*local_40)(uVar3);
      piVar8 = (int *)local_3c[iVar4 % iVar13];
      local_30 = piVar8;
      puVar5 = FUN_00414000(&local_6c,(int *)&local_30,local_3c,piVar14);
      local_68 = piVar14;
      if ((int *)*puVar5 != piVar14) {
        local_68 = (int *)*puVar5;
      }
      local_58 = local_68;
      piVar14 = (int *)FUN_005adb0f(0x54);
      local_30 = piVar14;
      memset(piVar14,0,0x54);
      piVar14[5] = 0;
      piVar14[6] = 0xf;
      *(undefined1 *)(piVar14 + 1) = 0;
      piVar14[0xb] = 0;
      piVar14[0xc] = 0xf;
      *(undefined1 *)(piVar14 + 7) = 0;
      piVar14[0x11] = 0;
      piVar14[0x12] = 0xf;
      *(undefined1 *)(piVar14 + 0xd) = 0;
      piVar14[0x13] = (int)piVar8;
      iVar13 = piVar8[3];
      if ((iVar13 == 0) && (piVar8[5] == 0)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      local_64 = piVar14;
      if (bVar16) {
        iVar4 = 0;
      }
      else {
        local_48 = piVar8[5];
        local_60 = piVar8[4];
        iVar4 = 0;
        if ((0 < local_60) && (0 < iVar13)) {
          do {
            iVar6 = (*local_40)();
            iVar4 = iVar4 + iVar6 % local_60 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        iVar4 = local_48 + iVar4;
      }
      bVar16 = DAT_0065c2e8 == (undefined4 *)0x0;
      *local_30 = iVar4;
      if (bVar16) {
        DAT_0065c2e8 = (undefined4 *)FUN_005adb0f(0x18);
        DAT_0065c2e8[4] = 0;
        DAT_0065c2e8[5] = 0;
        *DAT_0065c2e8 = 0;
        DAT_0065c2e8[1] = 0;
        DAT_0065c2e8[2] = 0;
        DAT_0065c2e8[3] = 0;
        DAT_0065c2e8[4] = 0;
        DAT_0065c2e8[5] = 0;
      }
      pcVar2 = local_40;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_48 = local_34 | 1;
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      local_34 = local_48;
      iVar13 = (*local_40)();
      if (iVar13 % 100 < 0x2f) {
        iVar13 = (*pcVar2)();
        pcVar11 = (&PTR_DAT_005ce6d0)[iVar13 % 0x4c4];
        pcVar9 = pcVar11;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar13 = (*pcVar2)();
        pcVar11 = (&PTR_DAT_005cf9e0)[iVar13 % 0x10b3];
        pcVar9 = pcVar11;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
      }
      FUN_00402690(&local_2c,pcVar11,(int)pcVar9 - (int)(pcVar11 + 1));
      FUN_00403640(&local_2c,&DAT_005e7468,1);
      iVar13 = (*pcVar2)();
      pcVar11 = (&PTR_s_Cardholder_005d3cc0)[iVar13 % 0x26f4];
      pcVar9 = pcVar11;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00403640(&local_2c,pcVar11,(int)pcVar9 - (int)(pcVar11 + 1));
      piVar14 = local_30;
      pppppbVar17 = (byte *****)(local_30 + 7);
      if (pppppbVar17 != &local_2c) {
        FUN_00401b20((int *)pppppbVar17);
        *pppppbVar17 = local_2c;
        piVar14[8] = iStack_28;
        piVar14[9] = iStack_24;
        piVar14[10] = iStack_20;
        piVar14[0xb] = local_1c;
        piVar14[0xc] = uStack_18;
        local_1c = 0;
        uStack_18 = 0xf;
        local_2c = (byte ****)((uint)local_2c & 0xffffff00);
      }
      local_34 = local_34 & 0xfffffffe;
      local_8 = local_8 & 0xffffff00;
      if (0xf < uStack_18) {
        ppppbVar10 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar10 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar10)))) goto LAB_005209e8;
        FUN_005adb3f(ppppbVar10);
      }
      pppppbVar17 = &local_2c;
      pvVar7 = (void *)FUN_00412bf0();
      piVar8 = (int *)FUN_004a5260(pvVar7,pppppbVar17);
      piVar14 = local_30;
      piVar15 = local_30 + 1;
      if (piVar15 != piVar8) {
        FUN_00401b20(piVar15);
        iVar13 = piVar8[1];
        iVar4 = piVar8[2];
        iVar6 = piVar8[3];
        *piVar15 = *piVar8;
        piVar14[2] = iVar13;
        piVar14[3] = iVar4;
        piVar14[4] = iVar6;
        iVar13 = piVar8[5];
        piVar14[5] = piVar8[4];
        piVar14[6] = iVar13;
        piVar8[4] = 0;
        piVar8[5] = 0xf;
        *(undefined1 *)piVar8 = 0;
      }
      if (0xf < uStack_18) {
        ppppbVar10 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar10 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar10)))) goto LAB_005209e8;
        FUN_005adb3f(ppppbVar10);
      }
      pppppbVar17 = &local_2c;
      pvVar7 = (void *)FUN_00412bf0();
      piVar8 = (int *)FUN_004a5f50(pvVar7,(int *)pppppbVar17);
      piVar14 = local_30;
      piVar15 = local_30 + 0xd;
      if (piVar15 != piVar8) {
        FUN_00401b20(piVar15);
        iVar13 = piVar8[1];
        iVar4 = piVar8[2];
        iVar6 = piVar8[3];
        *piVar15 = *piVar8;
        piVar14[0xe] = iVar13;
        piVar14[0xf] = iVar4;
        piVar14[0x10] = iVar6;
        iVar13 = piVar8[5];
        piVar14[0x11] = piVar8[4];
        piVar14[0x12] = iVar13;
        piVar8[4] = 0;
        piVar8[5] = 0xf;
        *(undefined1 *)piVar8 = 0;
      }
      if (0xf < uStack_18) {
        ppppbVar10 = local_2c;
        if ((0xfff < uStack_18 + 1) &&
           (ppppbVar10 = (byte ****)local_2c[-1],
           0x1f < (uint)((int)local_2c + (-4 - (int)ppppbVar10)))) goto LAB_005209e8;
        FUN_005adb3f(ppppbVar10);
      }
      puVar5 = *(undefined4 **)(local_38 + 0x120);
      if (*(undefined4 **)(local_38 + 0x124) == puVar5) {
        FUN_00414080((void *)(local_38 + 0x11c),puVar5,&local_64);
      }
      else {
        *puVar5 = local_30;
        *(int *)(local_38 + 0x120) = *(int *)(local_38 + 0x120) + 4;
      }
      local_4c = local_4c + 1;
      piVar14 = local_68;
    } while (local_4c < local_50);
  }
  FUN_00591070("WORLD","Have %d bounties available at %s");
  if (local_3c != (int *)0x0) {
    piVar14 = local_3c;
    if ((0xfff < ((int)local_44 - (int)local_3c & 0xfffffffcU)) &&
       (piVar14 = (int *)local_3c[-1], 0x1f < (uint)((int)local_3c + (-4 - (int)piVar14)))) {
LAB_005209e8:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar14);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __fastcall FUN_00520a20(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float in_XMM2_Da;
  float fVar5;
  float fVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2af9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = 0;
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xac) - iVar2 >> 2 != 0) {
    do {
      fVar5 = cocos2d::Vec2::getDistanceSq
                        ((Vec2 *)(*(int *)(iVar2 + uVar4 * 4) + 8),(Vec2 *)&stack0x00000004);
      fVar1 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
      fVar5 = (1.5 - fVar5 * 0.5 * fVar1 * fVar1) * fVar1 * fVar5;
      if (fVar5 <= in_XMM2_Da) {
        if (iVar3 != 0) {
          fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar3 + 8),(Vec2 *)&stack0x00000004);
          fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
          if (fVar5 <= (1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6) goto LAB_00520b46;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0xa8) + uVar4 * 4);
      }
LAB_00520b46:
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(param_1 + 0xa8);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xac) - iVar2 >> 2));
  }
  ExceptionList = local_10;
  return iVar3;
}


undefined4 * __thiscall FUN_00520b80(void *this,byte *param_1)

{
  void *pvVar1;
  byte **ppbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  float in_XMM2_Da;
  float fVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  uint local_20;
  undefined4 *local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar6 = (undefined4 *)0x0;
  iVar7 = *(int *)((int)this + 0xa8);
  local_18 = (float)(*(int *)((int)this + 0xac) - iVar7);
  if (3 < (uint)local_18) {
    local_1c = (undefined4 *)0x0;
    local_2c = (undefined4 *)0x0;
    local_30 = (void *)0x0;
    local_24 = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_8 = 1;
    local_20 = 0;
    if ((int)local_18 >> 2 != 0) {
      do {
        iVar7 = *(int *)(iVar7 + local_20 * 4);
        if ((*(int *)(iVar7 + 4) == 0) && (*(int *)(iVar7 + 0x38) != 3)) {
          uVar8 = 0;
          iVar7 = *(int *)((int)this + 0x134);
          local_11 = '\0';
          puVar6 = local_1c;
          if (*(int *)((int)this + 0x138) - iVar7 >> 2 != 0) {
            do {
              iVar4 = *(int *)(iVar7 + uVar8 * 4);
              ppbVar2 = &param_1;
              if (0xf < in_stack_00000018) {
                ppbVar2 = (byte **)param_1;
              }
              pbVar5 = (byte *)(iVar4 + 4);
              if (0xf < *(uint *)(iVar4 + 0x18)) {
                pbVar5 = *(byte **)(iVar4 + 4);
              }
              uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0x14),(byte *)ppbVar2,in_stack_00000014)
              ;
              if ((char)uVar3 != '\0') {
                fVar10 = cocos2d::Vec2::getDistanceSq
                                   ((Vec2 *)(*(int *)(*(int *)((int)this + 0xa8) + local_20 * 4) + 8
                                            ),(Vec2 *)(*(int *)(iVar7 + uVar8 * 4) + 0xe8));
                iVar7 = *(int *)((int)this + 0x134);
                local_18 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
                if ((1.5 - fVar10 * 0.5 * local_18 * local_18) * local_18 * fVar10 <=
                    *(float *)(*(int *)(iVar7 + uVar8 * 4) + 0x38) + in_XMM2_Da) {
                  local_11 = '\x01';
                }
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < (uint)(*(int *)((int)this + 0x138) - iVar7 >> 2));
            puVar6 = local_1c;
            if (local_11 != '\0') {
              puVar6 = (undefined4 *)(*(int *)((int)this + 0xa8) + local_20 * 4);
              if (local_24 == local_1c) {
                FUN_00414080(&local_30,local_1c,puVar6);
                local_24 = local_28;
                local_1c = local_2c;
                puVar6 = local_2c;
              }
              else {
                *local_1c = *puVar6;
                local_2c = local_1c + 1;
                puVar6 = local_2c;
                local_1c = local_2c;
              }
            }
          }
        }
        local_20 = local_20 + 1;
        iVar7 = *(int *)((int)this + 0xa8);
      } while (local_20 < (uint)(*(int *)((int)this + 0xac) - iVar7 >> 2));
    }
    pvVar1 = local_30;
    iVar7 = (int)puVar6 - (int)local_30 >> 2;
    puVar6 = (undefined4 *)0x0;
    if (iVar7 != 0) {
      iVar4 = rand();
      puVar6 = *(undefined4 **)((int)pvVar1 + (iVar4 % (iVar7 + -1)) * 4);
    }
    if (pvVar1 != (void *)0x0) {
      pvVar9 = pvVar1;
      if ((0xfff < ((int)local_24 - (int)pvVar1 & 0xfffffffcU)) &&
         (pvVar9 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar9);
    }
  }
  if (0xf < in_stack_00000018) {
    pbVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar5 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  ExceptionList = local_10;
  return puVar6;
}


uint __thiscall FUN_00520e10(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2af9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0;
  iVar3 = *(int *)((int)this + 0xa8);
  if (*(int *)((int)this + 0xac) - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
      if ((*(int *)(iVar3 + 4) == 0) && ((param_3 == '\0' || (*(int *)(iVar3 + 0x38) != 3)))) {
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar3 + 8),(Vec2 *)&param_1);
        fVar1 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        if (uVar5 != 0xffffffff) {
          fVar7 = cocos2d::Vec2::getDistanceSq
                            ((Vec2 *)(*(int *)(*(int *)((int)this + 0xa8) + uVar5 * 4) + 8),
                             (Vec2 *)&param_1);
          fVar2 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
          if ((1.5 - fVar7 * 0.5 * fVar2 * fVar2) * fVar2 * fVar7 <=
              (1.5 - fVar6 * 0.5 * fVar1 * fVar1) * fVar1 * fVar6) goto LAB_00520f43;
        }
        uVar5 = uVar4;
      }
LAB_00520f43:
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((int)this + 0xa8);
    } while (uVar4 < (uint)(*(int *)((int)this + 0xac) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return uVar5;
}


int * __thiscall FUN_00520f80(void *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xac) - *(int *)((int)this + 0xa8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0xa8) + uVar2 * 4);
      if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


int * __thiscall FUN_00520fd0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xac) - *(int *)((int)this + 0xa8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0xa8) + uVar2 * 4);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (int *)0x0;
}


undefined4 __thiscall FUN_00521010(void *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  void *local_24;
  int *local_20;
  int *local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2e78;
  local_10 = ExceptionList;
  iVar6 = *(int *)((int)this + 0xa8);
  uVar2 = *(int *)((int)this + 0xac) - iVar6;
  if (uVar2 < 4) {
    return 0;
  }
  piVar5 = (int *)0x0;
  piVar8 = (int *)0x0;
  local_24 = (void *)0x0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_8 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  if ((int)uVar2 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar6 + local_14 * 4);
      if ((*(int *)(iVar3 + 4) == 0) && (*(int *)(iVar3 + 0x38) == param_1)) {
        if (piVar8 == piVar5) {
          FUN_00414080(&local_24,piVar5,(undefined4 *)(iVar6 + local_14 * 4));
          piVar5 = local_20;
          piVar8 = local_1c;
        }
        else {
          *piVar5 = iVar3;
          local_20 = piVar5 + 1;
          piVar5 = local_20;
        }
      }
      local_14 = local_14 + 1;
      iVar6 = *(int *)((int)local_18 + 0xa8);
    } while (local_14 < (uint)(*(int *)((int)local_18 + 0xac) - iVar6 >> 2));
  }
  pvVar1 = local_24;
  iVar6 = (int)piVar5 - (int)local_24 >> 2;
  uVar7 = 0;
  if (iVar6 != 0) {
    iVar3 = rand();
    uVar7 = *(undefined4 *)((int)pvVar1 + (iVar3 % (iVar6 + -1)) * 4);
  }
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    if ((0xfff < ((int)piVar8 - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return uVar7;
}


undefined4 * __thiscall FUN_00521140(void *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  float in_XMM3_Da;
  float fVar10;
  void *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  float local_1c;
  void *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2b61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar7 = (undefined4 *)0x0;
  iVar8 = *(int *)((int)this + 0xa8);
  uVar2 = *(int *)((int)this + 0xac) - iVar8;
  if (3 < uVar2) {
    uVar5 = 0;
    local_24 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    local_28 = (void *)0x0;
    local_20 = (undefined4 *)0x0;
    local_8 = 1;
    local_1c = in_XMM3_Da;
    local_18 = this;
    if ((int)uVar2 >> 2 != 0) {
      do {
        iVar8 = *(int *)(uVar5 * 4 + iVar8);
        if ((*(int *)(iVar8 + 4) == 0) && (*(int *)(iVar8 + 0x38) == param_1)) {
          fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar8 + 8),(Vec2 *)&stack0x00000008);
          local_14 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
          if (local_1c < (1.5 - fVar10 * 0.5 * local_14 * local_14) * local_14 * fVar10) {
            puVar3 = (undefined4 *)(*(int *)((int)local_18 + 0xa8) + uVar5 * 4);
            if (puVar9 == puVar7) {
              FUN_00414080(&local_28,puVar7,puVar3);
              puVar7 = local_24;
              puVar9 = local_20;
            }
            else {
              *puVar7 = *puVar3;
              local_24 = puVar7 + 1;
              puVar7 = local_24;
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar8 = *(int *)((int)local_18 + 0xa8);
      } while (uVar5 < (uint)(*(int *)((int)local_18 + 0xac) - iVar8 >> 2));
    }
    pvVar1 = local_28;
    iVar8 = (int)puVar7 - (int)local_28 >> 2;
    puVar7 = (undefined4 *)0x0;
    if (iVar8 != 0) {
      iVar4 = rand();
      puVar7 = *(undefined4 **)((int)pvVar1 + (iVar4 % iVar8) * 4);
    }
    if (pvVar1 != (void *)0x0) {
      pvVar6 = pvVar1;
      if ((0xfff < ((int)puVar9 - (int)pvVar1 & 0xfffffffcU)) &&
         (pvVar6 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  ExceptionList = local_10;
  return puVar7;
}


void __fastcall FUN_005212e0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  piVar4 = *(int **)(param_1 + 0xcc);
  uVar3 = (uint)((int)*(int **)(param_1 + 0xd0) + (3 - (int)piVar4)) >> 2;
  uVar5 = 0;
  if (*(int **)(param_1 + 0xd0) < piVar4) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      bVar6 = false;
      iVar1 = *(int *)(*piVar4 + 0x254);
      if (iVar1 != 0) {
        bVar6 = *(int *)(iVar1 + 0x158) == 1;
      }
      if ((bVar6) && (pbVar2 = *(byte **)(*piVar4 + 0x398), pbVar2 != (byte *)0x0)) {
        FUN_0049e640(pbVar2);
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 != uVar3);
  }
  return;
}


undefined1 * __thiscall FUN_00521340(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined1 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xf;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xf;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  return this;
}


undefined4 * __thiscall FUN_00521420(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint in_stack_0000001c;
  byte *in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2b88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  FUN_004024e0(&stack0xffffffc8,&param_2);
  puVar1 = (undefined4 *)FUN_004a8380(in_stack_ffffffc8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00591070("ERROR","invalid good \'%s\'");
  }
  *(undefined4 *)this = *puVar1;
  if (0xf < in_stack_0000001c) {
    pvVar2 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar2 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __thiscall FUN_005214e0(void *this,undefined4 param_1)

{
  undefined1 *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2c09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = 2;
  *(undefined ***)this = SyntheticObject::vftable;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(int *)((int)this + 0x44) = DAT_00655064;
  DAT_00655064 = DAT_00655064 + 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xf;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xf;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0xf;
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0xf;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0xf;
  *(undefined1 *)((int)this + 200) = 0;
  local_8 = 6;
  *(undefined4 *)((int)this + 0xe0) = 0xbf800000;
  this_00 = (undefined1 *)FUN_005adb0f(0x50);
  *this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 1000;
  *(undefined4 *)(this_00 + 0x44) = 0;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0x14) = 0;
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(undefined4 *)(this_00 + 0x1c) = 0;
  *(undefined4 *)(this_00 + 0x20) = 0;
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0;
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x3c) = 0;
  *(undefined1 **)((int)this + 0xe8) = this_00;
  FUN_00506bd0(this_00,0,0);
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00521670(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = SyntheticObject::vftable;
  if ((void *)param_1[0x3a] != (void *)0x0) {
    FUN_004b9460((void *)param_1[0x3a]);
  }
  param_1[0x3a] = 0;
  if (0xf < (uint)param_1[0x37]) {
    pvVar1 = (void *)param_1[0x32];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x37] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005218b3;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0xf;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (0xf < (uint)param_1[0x31]) {
    pvVar1 = (void *)param_1[0x2c];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x31] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005218b3;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (0xf < (uint)param_1[0x2b]) {
    pvVar1 = (void *)param_1[0x26];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x2b] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005218b3;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if (0xf < (uint)param_1[0x25]) {
    pvVar1 = (void *)param_1[0x20];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x25] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005218b3;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (0xf < (uint)param_1[0x1f]) {
    pvVar1 = (void *)param_1[0x1a];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x1f] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005218b3;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (0xf < (uint)param_1[0x17]) {
    pvVar1 = (void *)param_1[0x12];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x17] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005218b3;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (0xf < (uint)param_1[7]) {
    pvVar1 = (void *)param_1[2];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_005218b3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


undefined4 __thiscall FUN_005218c0(void *this,float param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)((int)this + 0xf4) - param_1;
  *(float *)((int)this + 0xf4) = fVar2;
  if (fVar2 <= 0.0) {
    uVar1 = FUN_00591070(&DAT_0060dfc4,"%s: timer done. Removing myself.");
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


int __fastcall FUN_00521910(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = 0;
    piVar3 = (int *)(iVar1 + 0xc);
    do {
      if (iVar2 < 0) {
        return iVar2;
      }
      if ((0 < *(int *)(iVar1 + 8)) && (*(int *)(iVar1 + 8) <= iVar2)) {
        return iVar2;
      }
      if (*piVar3 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0xe);
  }
  return -1;
}


void __fastcall FUN_00521950(int param_1)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float in_XMM1_Da;
  float fVar6;
  float local_8;
  
  uVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x3c);
  local_8 = in_XMM1_Da;
  if (*(int *)(param_1 + 0x40) - iVar4 >> 2 == 0) {
    return;
  }
  do {
    piVar2 = *(int **)(iVar4 + uVar5 * 4);
    if ((((piVar2[2] != 0) && (0.0 < *(float *)(piVar2[2] + 0xc4))) &&
        (*(char *)((int)piVar2 + 99) != '\0')) &&
       (cVar3 = (**(code **)(*piVar2 + 0x14))(), cVar3 == '\0')) {
      if ((*(char *)((int)piVar2 + 99) == '\0') ||
         (cVar3 = (**(code **)(*piVar2 + 0x14))(), cVar3 != '\0')) {
        fVar6 = 0.0;
      }
      else {
        iVar4 = FUN_00437c60((int *)piVar2[3]);
        fVar6 = *(float *)(piVar2[2] + 0xc4) * ((float)iVar4 / 100.0);
      }
      fVar1 = (float)piVar2[0x17];
      if ((fVar1 < fVar6) && (fVar6 = fVar6 - fVar1, 0.0 < fVar6)) {
        if (local_8 < fVar6) {
          piVar2[0x17] = (int)(fVar1 + local_8);
          return;
        }
        local_8 = local_8 - fVar6;
        piVar2[0x17] = (int)(fVar1 + fVar6);
      }
    }
    uVar5 = uVar5 + 1;
    iVar4 = *(int *)(param_1 + 0x3c);
  } while (uVar5 < (uint)(*(int *)(param_1 + 0x40) - iVar4 >> 2));
  return;
}


void __fastcall FUN_00521a50(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  float in_XMM0_Da;
  float in_XMM1_Da;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005af588;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  FUN_005228c0(param_1);
  if (in_XMM1_Da <= in_XMM0_Da) {
    uVar7 = 0;
    iVar2 = *(int *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x40) - iVar2 >> 2 != 0) {
      do {
        iVar3 = *(int *)(iVar2 + uVar7 * 4);
        if (((*(int *)(iVar3 + 8) != 0) && (0.0 < *(float *)(*(int *)(iVar3 + 8) + 0xc4))) &&
           (*(char *)(iVar3 + 99) != '\0')) {
          fVar1 = *(float *)(iVar3 + 0x5c);
          if (in_XMM1_Da <= fVar1) {
            *(float *)(iVar3 + 0x5c) = fVar1 - in_XMM1_Da;
            goto LAB_00521b5a;
          }
          in_XMM1_Da = in_XMM1_Da - fVar1;
          *(undefined4 *)(iVar3 + 0x5c) = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(*(int *)(param_1 + 0x40) - iVar2 >> 2));
    }
    puVar5 = (undefined4 *)
             cocos2d::StringUtils::format
                       ((char *)local_2c,"WARNING: This should never happen.",uVar4);
    local_8 = 0;
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    cocos2d::log("%s : %s","SystemManager::drawPower",puVar5);
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
  }
LAB_00521b5a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_00521b80(void *this,int param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  uint in_stack_0000001c;
  byte *in_stack_ffffffac;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2c52;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  FUN_00591070("DETAIL","Setting up empty module into slot %d, module %s");
  pvVar5 = local_14;
  piVar1 = *(int **)((int)this + 0x3c);
  uVar4 = 0;
  uVar7 = *(int *)((int)this + 0x40) - (int)piVar1 >> 2;
  piVar6 = piVar1;
  if (uVar7 != 0) {
    do {
      if (*(int *)(*piVar6 + 0x10) == param_1) {
        if ((undefined1 *)piVar1[uVar4] != (undefined1 *)0x0) {
          FUN_00522090(local_14,(undefined1 *)piVar1[uVar4]);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 < uVar7);
  }
  FUN_004024e0(local_2c,&param_2);
  local_8._0_1_ = 1;
  FUN_004024e0(&stack0xffffffac,local_2c);
  iVar2 = FUN_004a8020(in_stack_ffffffac);
  local_14 = (void *)FUN_005adb0f(0x88);
  local_8._0_1_ = 2;
  puVar3 = FUN_004adec0(local_14,iVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00521d10(pvVar5,(undefined1 *)puVar3,param_1);
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
  if (0xf < in_stack_0000001c) {
    pvVar5 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pvVar5 = *(void **)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return puVar3;
}


uint __thiscall FUN_00521d10(void *this,undefined1 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *this_00;
  byte *in_stack_ffffffc0;
  uint3 uVar6;
  char *pcVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2ca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)((int)this + 0x40);
  piVar2 = *(int **)((int)this + 0x3c);
  if (piVar2 != piVar1) {
    do {
      if ((undefined1 *)*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) goto LAB_00521db2;
  }
  piVar2 = (int *)FUN_005225f0(this,*(uint *)(*(int *)(param_1 + 8) + 4));
  if (piVar2 == (int *)0xffffffff) goto LAB_00521db2;
  iVar3 = param_2;
  if ((param_2 == -1) &&
     (iVar3 = FUN_005225f0(this,*(uint *)(*(int *)(this_00 + 8) + 4)), iVar3 == -1)) {
    pcVar7 = "%s: Cannot add module \'%s\' to any slot.";
LAB_00521da5:
    piVar2 = (int *)FUN_00591070("DETAIL",pcVar7);
LAB_00521db2:
    ExceptionList = local_10;
    return (uint)piVar2 & 0xffffff00;
  }
  if (-1 < *(int *)(this_00 + 0x10)) {
    piVar1 = *(int **)((int)this + 0x40);
    piVar2 = *(int **)((int)this + 0x3c);
    if (piVar2 != piVar1) {
      do {
        if ((undefined1 *)*piVar2 == this_00) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        pcVar7 = "%s: Module \'%s\' is already connected.";
        goto LAB_00521da5;
      }
    }
  }
  *(int *)(this_00 + 0x10) = iVar3;
  piVar1 = *(int **)((int)this + 0x3c);
  piVar2 = *(int **)((int)this + 0x40);
  piVar4 = piVar1;
  if (piVar1 == piVar2) {
LAB_00521e2f:
    *(int *)(this_00 + 0x38) = (int)piVar2 - (int)piVar1 >> 2;
    puVar5 = *(undefined4 **)((int)this + 0x40);
    if (*(undefined4 **)((int)this + 0x44) == puVar5) {
      FUN_00414080((void *)((int)this + 0x3c),puVar5,&param_1);
      this_00 = param_1;
    }
    else {
      *puVar5 = this_00;
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 4;
    }
  }
  else {
    do {
      if ((undefined1 *)*piVar4 == this_00) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
    if (piVar4 == piVar2) goto LAB_00521e2f;
  }
  this_00[99] = 0;
  FUN_004ae9f0(this_00,*(int *)((int)this + 0x48));
  *(undefined4 *)(this_00 + 0x24) = 0xbf800000;
  this_00[0x2c] = 1;
  *(undefined4 *)(this_00 + 0x28) = 100;
  *(void **)(this_00 + 4) = this;
  FUN_004ae0c0((int)this_00);
  uVar6 = (uint3)((uint)in_stack_ffffffc0 >> 8);
  switch(*(undefined4 *)(*(int *)(this_00 + 8) + 4)) {
  case 7:
    if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) goto switchD_00521e9a_caseD_9;
    param_1 = &stack0xffffffc0;
    in_stack_ffffffc0 = (byte *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffc0,"helm_connected",0xe);
    local_8 = 1;
    break;
  case 8:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) == '\0') goto switchD_00521e9a_caseD_9;
    param_1 = &stack0xffffffc0;
    in_stack_ffffffc0 = (byte *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffc0,"has_weapon_launcher",0x13);
    local_8 = 2;
    break;
  default:
    goto switchD_00521e9a_caseD_9;
  case 10:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) == '\0') goto switchD_00521e9a_caseD_9;
    param_1 = &stack0xffffffc0;
    in_stack_ffffffc0 = (byte *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffc0,"has_jump_drive",0xe);
    local_8 = 0;
    break;
  case 0x10:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) == '\0') goto switchD_00521e9a_caseD_9;
    param_1 = &stack0xffffffc0;
    in_stack_ffffffc0 = (byte *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffc0,"has_hacking_module",0x12);
    local_8 = 3;
    break;
  case 0x11:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) == '\0') goto switchD_00521e9a_caseD_9;
    param_1 = &stack0xffffffc0;
    in_stack_ffffffc0 = (byte *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffffc0,"has_grappler",0xc);
    local_8 = 4;
  }
  puVar5 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar5,in_stack_ffffffc0);
switchD_00521e9a_caseD_9:
  iVar3 = *(int *)((int)this + 0x48);
  if (*(char *)(iVar3 + 0x234) != '\0') {
    param_1 = &stack0xffffffc0;
    FUN_00591e00(&stack0xffffffc0,"has_module_%s");
    local_8 = 5;
    puVar5 = FUN_00412df0();
    local_8 = 0xffffffff;
    iVar3 = FUN_004a0ee0(puVar5,in_stack_ffffffc0);
  }
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


void __thiscall FUN_00522090(void *this,undefined1 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *this_00;
  int *piVar3;
  size_t _Size;
  undefined1 *puVar4;
  byte *in_stack_ffffffbc;
  uint3 uVar5;
  byte *in_stack_ffffffc0;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2cf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10) != -1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  piVar1 = *(int **)((int)this + 0x3c);
  local_14 = *(int **)((int)this + 0x40);
  piVar3 = piVar1;
  if (piVar1 != local_14) {
    do {
      if ((undefined1 *)*piVar3 == param_1) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != local_14);
    if (piVar3 != local_14) {
      puVar2 = FUN_00414000(&local_18,(int *)&param_1,piVar1,local_14);
      piVar1 = (int *)*puVar2;
      if (piVar1 != local_14) {
        _Size = *(int *)((int)this + 0x40) - (int)local_14;
        memmove(piVar1,local_14,_Size);
        *(size_t *)((int)this + 0x40) = _Size + (int)piVar1;
        puVar4 = param_1;
      }
    }
  }
  FUN_00591070("DETAIL","%s: Disconnected module \'%s\'");
  uVar5 = (uint3)((uint)in_stack_ffffffbc >> 8);
  switch(*(undefined4 *)(*(int *)(puVar4 + 8) + 4)) {
  case 3:
    if (puVar4 == *(undefined1 **)((int)this + 0x28)) {
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    break;
  case 4:
    if (puVar4 == *(undefined1 **)this) {
      *(undefined4 *)this = 0;
    }
    break;
  case 5:
    if (puVar4 == *(undefined1 **)((int)this + 8)) {
      *(undefined4 *)((int)this + 8) = 0;
    }
    break;
  case 7:
    if (puVar4 == *(undefined1 **)((int)this + 0x24)) {
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    break;
  case 8:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) != '\0') {
      param_1 = &stack0xffffffbc;
      in_stack_ffffffbc = (byte *)((uint)uVar5 << 8);
      FUN_00402690(&stack0xffffffbc,"has_weapon_launcher",0x13);
      local_8 = 1;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    }
    if (puVar4 == *(undefined1 **)((int)this + 0x20)) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    break;
  case 9:
    if (puVar4 == *(undefined1 **)((int)this + 0x18)) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    break;
  case 10:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) != '\0') {
      param_1 = &stack0xffffffbc;
      in_stack_ffffffbc = (byte *)((uint)uVar5 << 8);
      FUN_00402690(&stack0xffffffbc,"has_jump_drive",0xe);
      local_8 = 0;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    }
    if (puVar4 == *(undefined1 **)((int)this + 0x14)) {
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    break;
  case 0xb:
    if (puVar4 == *(undefined1 **)((int)this + 0x10)) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    break;
  case 0xc:
    if (puVar4 == *(undefined1 **)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    break;
  case 0xe:
    if (puVar4 == *(undefined1 **)((int)this + 0x1c)) {
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    break;
  case 0xf:
    if (puVar4 == *(undefined1 **)((int)this + 4)) {
      *(undefined4 *)((int)this + 4) = 0;
    }
    break;
  case 0x10:
    if (puVar4 == *(undefined1 **)((int)this + 0x30)) {
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) != '\0') {
      param_1 = &stack0xffffffbc;
      in_stack_ffffffbc = (byte *)((uint)uVar5 << 8);
      FUN_00402690(&stack0xffffffbc,"has_hacking_module",0x12);
      local_8 = 2;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    }
    break;
  case 0x11:
    if (*(char *)(*(int *)((int)this + 0x48) + 0x234) != '\0') {
      param_1 = &stack0xffffffbc;
      in_stack_ffffffbc = (byte *)((uint)uVar5 << 8);
      FUN_00402690(&stack0xffffffbc,"has_grappler",0xc);
      local_8 = 3;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,in_stack_ffffffbc);
    }
    if (puVar4 == *(undefined1 **)((int)this + 0x2c)) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  if (*(char *)(*(int *)((int)this + 0x48) + 0x234) != '\0') {
    param_1 = &stack0xffffffbc;
    FUN_00591e00(&stack0xffffffbc,"has_module_%s");
    local_8 = 4;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar2,in_stack_ffffffbc);
  }
  if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
    param_1 = &stack0xffffffc0;
    FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)((int)this + 0x48) + 0x238));
    local_8 = 5;
    this_00 = FUN_00402de0();
    local_8 = 0xffffffff;
    FUN_004259d0(this_00,(int)puVar4,in_stack_ffffffc0);
  }
  ExceptionList = local_10;
  return;
}


bool __thiscall FUN_00522480(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)((int)this + 0x40);
  piVar3 = *(int **)((int)this + 0x3c);
  if (piVar3 != piVar1) {
    do {
      if (*piVar3 == param_1) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) {
      return false;
    }
  }
  iVar2 = FUN_005225f0(this,*(uint *)(*(int *)(param_1 + 8) + 4));
  return iVar2 != -1;
}


undefined4 __thiscall FUN_005224c0(void *this,int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x40) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if ((*(int *)(piVar1[2] + 4) == param_1) &&
         ((param_2 == '\0' ||
          ((*(char *)((int)piVar1 + 99) != '\0' &&
           (cVar2 = (**(code **)(*piVar1 + 0x10))(0), cVar2 != '\0')))))) {
        return *(undefined4 *)(*(int *)((int)this + 0x3c) + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)((int)this + 0x3c);
    } while (uVar4 < (uint)(*(int *)((int)this + 0x40) - iVar3 >> 2));
  }
  return 0;
}


void __fastcall FUN_00522530(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar1 >> 2 != 0) {
    do {
      this = *(void **)(iVar1 + uVar2 * 4);
      if (*(int *)(*(int *)((int)this + 8) + 4) == 1) {
        FUN_004ae9f0(this,*(int *)(param_1 + 0x48));
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x3c);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x40) - iVar1 >> 2));
  }
  return;
}


void __fastcall FUN_00522570(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar1 >> 2 != 0) {
    do {
      this = *(void **)(iVar1 + uVar2 * 4);
      if (*(int *)(*(int *)((int)this + 8) + 4) == 1) {
        FUN_004ae7b0(this,*(int *)(param_1 + 0x48));
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x3c);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x40) - iVar1 >> 2));
  }
  return;
}


int __thiscall FUN_005225b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x3c) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x10) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


undefined4 __thiscall FUN_005225f0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  if (param_1 != 0xffffffff) {
    iVar3 = FUN_004b05d0(param_1);
    param_1 = 0;
    iVar1 = *(int *)(*(int *)((int)this + 0x48) + 0x254);
    piVar6 = *(int **)(iVar1 + 0x13c);
    uVar2 = (*(int *)(iVar1 + 0x140) - (int)piVar6) / 0x18;
    if (uVar2 != 0) {
      do {
        if (piVar6[1] == iVar3) {
          uVar5 = 0;
          piVar4 = *(int **)((int)this + 0x3c);
          uVar7 = *(int *)((int)this + 0x40) - (int)piVar4 >> 2;
          if (uVar7 == 0) {
LAB_00522677:
            return *(undefined4 *)(*(int *)(iVar1 + 0x13c) + param_1 * 0x18);
          }
          while (*(int *)(*piVar4 + 0x10) != *piVar6) {
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 1;
            if (uVar7 <= uVar5) goto LAB_00522677;
          }
          if (*piVar4 == 0) goto LAB_00522677;
        }
        param_1 = param_1 + 1;
        piVar6 = piVar6 + 6;
      } while (param_1 < uVar2);
    }
  }
  return 0xffffffff;
}


void __fastcall FUN_005226c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if ((((piVar1[2] != 0) && (0.0 < *(float *)(piVar1[2] + 0xc4))) &&
          (*(char *)((int)piVar1 + 99) != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x14))(), cVar2 == '\0')) {
        FUN_00437c60((int *)piVar1[3]);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x3c);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x40) - iVar3 >> 2));
  }
  return;
}


void __fastcall FUN_00522770(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float local_8;
  
  uVar2 = 0;
  local_8 = 0.0;
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar1 >> 2 != 0) {
    do {
      fVar3 = local_8;
      FUN_004ae5e0(*(int *)(iVar1 + uVar2 * 4));
      if (0.0 < fVar3) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + uVar2 * 4);
        if (*(char *)(iVar1 + 99) == '\0') {
          local_8 = local_8 + 0.0;
        }
        else {
          local_8 = *(float *)(*(int *)(iVar1 + 8) + 200) + local_8;
        }
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x3c);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x40) - iVar1 >> 2));
  }
  return;
}


int __thiscall FUN_005227f0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  piVar4 = *(int **)((int)this + 0x3c);
  uVar3 = *(int *)((int)this + 0x40) - (int)piVar4 >> 2;
  iVar5 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *piVar4;
      iVar6 = iVar5;
      if ((((*(int *)(iVar1 + 8) != 0) && (0.0 < *(float *)(*(int *)(iVar1 + 8) + 0xc4))) &&
          (*(char *)(iVar1 + 99) != '\0')) && (iVar6 = iVar5 + 1, iVar5 == param_1)) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
      iVar5 = iVar6;
    } while (uVar2 < uVar3);
  }
  return 0;
}


int __fastcall FUN_00522850(int param_1)

{
  int iVar1;
  bool bVar2;
  float in_XMM0_Da;
  float fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x254);
  bVar2 = false;
  if (iVar1 != 0) {
    bVar2 = *(int *)(iVar1 + 0x158) == 1;
  }
  if (!bVar2) {
    bVar2 = false;
    if (iVar1 != 0) {
      bVar2 = *(int *)(iVar1 + 0x158) == 2;
    }
    if (!bVar2) {
      FUN_005228c0(param_1);
      fVar3 = in_XMM0_Da;
      FUN_00522920(param_1);
      return (int)((in_XMM0_Da / fVar3) * 100.0);
    }
  }
  return 100;
}


void __fastcall FUN_005228c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
    return;
  }
  return;
}


void __fastcall FUN_00522920(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if (((piVar1[2] != 0) && (0.0 < *(float *)(piVar1[2] + 0xc4))) &&
         (cVar2 = (**(code **)(*piVar1 + 0x14))(), cVar2 == '\0')) {
        FUN_00437c60((int *)piVar1[3]);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x3c);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x40) - iVar3 >> 2));
  }
  return;
}


void __thiscall FUN_005229d0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *this_00;
  uint uVar5;
  float fVar6;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be228;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar5 = 0;
  iVar4 = *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x40) - iVar4 >> 2 != 0) {
    do {
      if (((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
          (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) ||
         (*(int *)(*(int *)(*(int *)(iVar4 + uVar5 * 4) + 8) + 4) != 9)) {
        if ((param_1 == 100) || (iVar4 = rand(), iVar4 % 100 + 1 <= param_1)) {
          FUN_00591070("DETAIL"," resetting %s");
          iVar2 = DAT_0065b5cc;
          iVar4 = *(int *)(*(int *)((int)this + 0x3c) + uVar5 * 4);
          *(undefined1 *)(iVar4 + 0x2c) = 0;
          *(undefined1 *)(iVar4 + 99) = 1;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          if (((*(int *)(iVar2 + 0xcc) != 0) && (*(int *)(*(int *)(iVar2 + 0xcc) + 0x70) == 1)) &&
             (*(int *)(*(int *)(iVar4 + 8) + 4) == 7)) {
            in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
            FUN_00402690(&stack0xffffffc0,"helm_connected",0xe);
            local_8 = 0;
            this_00 = FUN_00412df0();
            local_8 = 0xffffffff;
            FUN_004a0ee0(this_00,in_stack_ffffffc0);
          }
          piVar1 = *(int **)(*(int *)((int)this + 0x3c) + uVar5 * 4);
          if (*(int *)(piVar1[2] + 4) == 2) {
            if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
               (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
              iVar4 = rand();
              *(float *)(*(int *)(*(int *)((int)this + 0x3c) + uVar5 * 4) + 0x5c) =
                   (float)iVar4 / 32767.0;
            }
            else {
              if ((*(char *)((int)piVar1 + 99) == '\0') ||
                 (cVar3 = (**(code **)(*piVar1 + 0x14))(), cVar3 != '\0')) {
                fVar6 = 0.0;
              }
              else {
                iVar4 = FUN_00437c60((int *)piVar1[3]);
                fVar6 = *(float *)(piVar1[2] + 0xc4) * ((float)iVar4 / 100.0);
              }
              *(float *)(*(int *)(*(int *)((int)this + 0x3c) + uVar5 * 4) + 0x5c) = fVar6 / 3.0;
            }
          }
        }
        else {
          FUN_00591070("DETAIL"," (skipping resetting %s)");
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)((int)this + 0x3c);
    } while (uVar5 < (uint)(*(int *)((int)this + 0x40) - iVar4 >> 2));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00522be0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar2 == 0) {
    return;
  }
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < uVar2);
  return;
}


void __fastcall FUN_00522c50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar1 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if (*(char *)(iVar1 + 99) != '\0') {
        FUN_004ae5e0(iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x3c);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x40) - iVar1 >> 2));
  }
  return;
}


void __fastcall FUN_00522ca0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float in_XMM1_Da;
  int local_48;
  
  iVar1 = DAT_0065b5cc;
  if (((((*(int *)(param_1 + 0x48) != 0) && (iVar6 = *(int *)(DAT_0065b5cc + 0xcc), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0x70) == 2)) &&
      ((*(char *)(*(int *)(param_1 + 0x48) + 0x234) != '\0' && (*(char *)(iVar6 + 0x377) == '\0'))))
     && ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2 != 0 &&
         (fVar9 = *(float *)(param_1 + 0x38) - in_XMM1_Da, *(float *)(param_1 + 0x38) = fVar9,
         fVar9 <= 0.0)))) {
    piVar5 = (int *)(*(int *)(iVar1 + 0xcc) + 0x378);
    if ((*piVar5 == 0) && (*(int *)(*(int *)(iVar1 + 0xcc) + 0x380) == 0)) {
      iVar1 = rand();
      iVar1 = iVar1 % 0x1e + 0x12d;
    }
    else {
      iVar1 = FUN_00591370(piVar5);
    }
    iVar6 = 0;
    *(float *)(param_1 + 0x38) = (float)iVar1;
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar7 = *(int *)(param_1 + 0x40) - iVar1 >> 2;
    if (0 < iVar7) {
      iVar6 = rand();
      iVar1 = *(int *)(param_1 + 0x3c);
      iVar6 = iVar6 % iVar7 + 1;
    }
    iVar1 = *(int *)(iVar1 + -4 + iVar6 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      FUN_00591070(&DAT_005cdc70,"Performing attrition on %s.");
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar6 = 0;
      do {
        local_48 = -1;
        while( true ) {
          if (99 < iVar6) {
            if (local_48 == -1) {
              return;
            }
            goto LAB_00522df9;
          }
          iVar6 = iVar6 + 1;
          local_48 = rand();
          local_48 = local_48 % 0x14;
          if (*(int *)(iVar1 + 4 + local_48 * 4) == 0) break;
          if (local_48 != -1) {
LAB_00522df9:
            bVar8 = false;
            if (*(int *)(iVar1 + 0x54 + local_48 * 4) != 0) {
              uVar2 = rand();
              uVar2 = uVar2 & 0x80000001;
              bVar8 = uVar2 == 0;
              if ((int)uVar2 < 0) {
                bVar8 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
              }
            }
            iVar7 = 0;
            iVar6 = 8;
            do {
              iVar3 = rand();
              iVar7 = iVar7 + 1 + iVar3 % 5;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (bVar8) {
              fVar9 = *(float *)(*(int *)(*(int *)(iVar1 + 0x54 + local_48 * 4) + 4) + 0x1c);
              FUN_00591070(&DAT_005cdc70,"Applying attrition of %.0f damage points to addon %s.");
              pfVar4 = *(float **)(iVar1 + 0x54 + local_48 * 4);
              *pfVar4 = *pfVar4 - (float)(iVar7 + -2) / fVar9;
              pfVar4 = *(float **)(iVar1 + 0x54 + local_48 * 4);
            }
            else {
              fVar9 = *(float *)(*(int *)(*(int *)(iVar1 + 4 + local_48 * 4) + 4) + 0x1c);
              FUN_00591070(&DAT_005cdc70,"Applying attrition of %f damage points to component %s.");
              pfVar4 = *(float **)(iVar1 + 4 + local_48 * 4);
              *pfVar4 = *pfVar4 - (float)(iVar7 + -2) / fVar9;
              pfVar4 = *(float **)(iVar1 + 4 + local_48 * 4);
            }
            if (0.0 < *pfVar4) {
              return;
            }
            *pfVar4 = 0.0;
            return;
          }
        }
      } while( true );
    }
  }
  return;
}


void __thiscall FUN_00522f20(void *this,undefined4 *param_1,float param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  bool bVar13;
  float fVar14;
  undefined4 *in_XMM2_Da;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  void *local_58;
  undefined4 **local_54;
  undefined4 **local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 **local_38;
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 **local_28;
  int local_24;
  int *local_20;
  undefined4 *local_1c;
  void *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2d30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = '\0';
  local_30 = in_XMM2_Da;
  local_18 = this;
  if ((((param_2 == 0.0) || (param_2 == 2.8026e-45)) || (param_2 == 5.60519e-45)) ||
     (param_2 == 7.00649e-45)) {
    iVar3 = *(int *)((int)this + 0x48);
    FUN_0051a3f0(*(void **)(iVar3 + 0x254),(undefined8 *)&local_64,(int)param_1);
    local_3c = param_1;
    piVar2 = FUN_00420f40((void *)(iVar3 + 0x14c),(int *)&local_3c);
    *piVar2 = (int)((float)*piVar2 + (float)local_30);
    local_3c = param_1;
    piVar2 = FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
    puVar5 = local_5c;
    if ((int)local_5c < *piVar2) {
      local_3c = param_1;
      piVar2 = FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
      *piVar2 = (int)puVar5;
    }
    iVar3 = *(int *)((int)this + 0x48);
    local_3c = param_1;
    piVar2 = *(int **)(iVar3 + 0x14c);
    piVar6 = (int *)piVar2[1];
    piVar9 = piVar2;
    if (*(char *)(piVar2[1] + 0xd) == '\0') {
      do {
        if (piVar6[4] < (int)param_1) {
          piVar4 = (int *)piVar6[2];
        }
        else {
          piVar4 = (int *)*piVar6;
          piVar9 = piVar6;
        }
        piVar6 = piVar4;
      } while (*(char *)((int)piVar4 + 0xd) == '\0');
      if ((piVar9 == piVar2) || ((int)param_1 < piVar9[4])) goto LAB_00523112;
    }
    else {
LAB_00523112:
      local_38 = &local_3c;
      piVar2 = (int *)FUN_00421370((void *)(iVar3 + 0x14c),param_1,&local_38);
      FUN_004213a0((void *)(iVar3 + 0x14c),&local_38,piVar9,piVar2 + 4,piVar2);
    }
    puVar5 = local_5c;
    FUN_00591070(&DAT_005cdc70,"%s: Hull damage: %d/%d");
    local_3c = param_1;
    piVar2 = FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
    bVar13 = SBORROW4(*piVar2,(int)puVar5);
    iVar3 = *piVar2 - (int)puVar5;
  }
  else {
    iVar3 = *(int *)((int)this + 0x48);
    FUN_0051a3f0(*(void **)(iVar3 + 0x254),(undefined8 *)&local_64,(int)param_1);
    local_3c = param_1;
    piVar2 = FUN_00420f40((void *)(iVar3 + 0x14c),(int *)&local_3c);
    iVar3 = rand();
    *piVar2 = *piVar2 + iVar3 % 6 + 1;
    local_3c = param_1;
    piVar2 = FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
    puVar5 = local_5c;
    if ((int)local_5c < *piVar2) {
      local_3c = param_1;
      piVar2 = FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
      *piVar2 = (int)puVar5;
    }
    local_3c = param_1;
    FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
    FUN_00591070(&DAT_005cdc70,"%s: Hull damage: %d/%d");
    local_3c = param_1;
    piVar2 = FUN_00420f40((void *)(*(int *)((int)this + 0x48) + 0x14c),(int *)&local_3c);
    bVar13 = SBORROW4(*piVar2,(int)local_5c);
    iVar3 = *piVar2 - (int)local_5c;
  }
  if (bVar13 == iVar3 < 0) {
    FUN_00591070(&DAT_005cdc70,"HULL SECTION DESTROYED.");
    FUN_00591070(&DAT_005cdc70,"Destroying all modules contained in this section...");
    local_11 = '\x01';
  }
  cVar1 = local_11;
  local_2c = (void *)0x0;
  local_58 = (void *)0x0;
  local_28 = (undefined4 **)0x0;
  local_54 = (undefined4 **)0x0;
  local_38 = (undefined4 **)0x0;
  local_50 = (undefined4 **)0x0;
  local_8 = 0;
  puVar5 = (undefined4 *)0x1;
  local_1c = (undefined4 *)0x1;
  switch(param_2) {
  case 0.0:
    uVar10 = rand();
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    puVar5 = (undefined4 *)(uVar10 + 1);
    break;
  case 1.4013e-45:
    uVar10 = rand();
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    puVar5 = (undefined4 *)(uVar10 + 2);
    break;
  case 2.8026e-45:
  case 4.2039e-45:
    break;
  case 5.60519e-45:
    iVar3 = rand();
    puVar5 = (undefined4 *)(iVar3 % 3 + 1);
    break;
  case 7.00649e-45:
    iVar3 = rand();
    puVar5 = (undefined4 *)(uint)(iVar3 % 6 + 1 < 3);
    break;
  default:
    goto switchD_005231b4_default;
  }
  local_1c = puVar5;
switchD_005231b4_default:
  if ((cVar1 == '\0') || (param_2 == 1.4013e-45)) {
    FUN_00591070(&DAT_005cdc70,"%s: Damaging %d modules.");
  }
  else {
    FUN_00591070(&DAT_005cdc70,"%s: Removing ALL modules.");
  }
  piVar2 = (int *)0x0;
  local_20 = (int *)0x0;
  local_4c = (int *)0x0;
  local_48 = (int *)0x0;
  local_34 = (int *)0x0;
  local_44 = (int *)0x0;
  local_8._0_1_ = 2;
  local_3c = *(undefined4 **)((int)this + 0x3c);
  fVar14 = (float)local_30 + (float)local_30;
  local_30 = (undefined4 *)0x0;
  local_24 = (int)fVar14;
  if (*(int *)((int)this + 0x40) - (int)local_3c >> 2 != 0) {
    do {
      uVar10 = 0;
      iVar3 = *(int *)(*(int *)((int)this + 0x48) + 0x254);
      local_2c = *(int **)(iVar3 + 0x13c);
      iVar8 = *(int *)(iVar3 + 0x140) - (int)local_2c;
      iVar3 = iVar8 >> 0x1f;
      iVar8 = iVar8 / 0x18 + iVar3;
      if (iVar8 != iVar3) {
        piVar6 = local_2c;
        do {
          if (*piVar6 == *(int *)(local_3c[(int)local_30] + 0x10)) {
            puVar5 = (undefined4 *)local_2c[uVar10 * 6 + 3];
            goto LAB_0052330e;
          }
          uVar10 = uVar10 + 1;
          piVar6 = piVar6 + 6;
        } while (uVar10 < (uint)(iVar8 - iVar3));
      }
      puVar5 = (undefined4 *)0x0;
LAB_0052330e:
      if ((puVar5 == param_1) || (this = local_18, param_2 == 1.4013e-45)) {
        if (local_34 == piVar2) {
          FUN_004141e0(&local_4c,piVar2,&local_30);
          local_34 = local_44;
        }
        else {
          *piVar2 = (int)local_30;
          local_48 = piVar2 + 1;
        }
        this = local_18;
        puVar5 = local_30;
        piVar2 = local_48;
        local_30 = puVar5;
        if (local_11 != '\0') {
          puVar7 = (undefined4 *)(*(int *)((int)local_18 + 0x3c) + (int)local_30 * 4);
          if (local_38 == local_28) {
            FUN_00414080(&local_58,local_28,puVar7);
            local_38 = local_50;
            local_28 = local_54;
            local_30 = puVar5;
          }
          else {
            *local_28 = (undefined4 *)*puVar7;
            local_54 = local_28 + 1;
            local_28 = local_54;
          }
        }
      }
      local_3c = *(undefined4 **)((int)this + 0x3c);
      local_30 = (undefined4 *)((int)local_30 + 1);
    } while (local_30 < (undefined4 *)(*(int *)((int)this + 0x40) - (int)local_3c >> 2));
    local_2c = local_58;
    local_20 = local_4c;
  }
  puVar5 = (undefined4 *)((int)piVar2 - (int)local_20 >> 2);
  local_4c = local_20;
  FUN_00591070(&DAT_005cdc70,"%s: Valid modules to damage: %d.");
  pvVar12 = local_18;
  if (local_11 != '\0') goto LAB_00523824;
  if ((param_2 == 0.0) || (param_2 == 2.8026e-45)) {
    if ((local_1c != (undefined4 *)0x1) && (puVar5 != (undefined4 *)0x1)) goto LAB_00523824;
    if (puVar5 != (undefined4 *)0x0) {
      iVar3 = rand();
      local_3c = (undefined4 *)(iVar3 % 0x140);
      uVar10 = rand();
      uVar10 = uVar10 & 0x800000ff;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffff00) + 1;
      }
      iVar3 = 0;
      if (0 < (int)puVar5) {
        iVar3 = rand();
        iVar3 = iVar3 % (int)puVar5 + 1;
      }
      puVar5 = local_3c;
      piVar2 = *(int **)(*(int *)((int)this + 0x3c) + local_20[iVar3 + -1] * 4);
      FUN_00591070(&DAT_005cdc70,
                   "%s: damaging module \'%s\' for %d points of %s damage at impact point %dx%d");
      FUN_00437510((void *)piVar2[3],local_24,param_2,(int)puVar5,uVar10);
      if ((*(char *)((int)piVar2 + 99) == '\0') ||
         (cVar1 = (**(code **)(*piVar2 + 0x14))(), cVar1 != '\0')) {
        fVar14 = 0.0;
      }
      else {
        iVar3 = FUN_00437c60((int *)piVar2[3]);
        fVar14 = *(float *)(piVar2[2] + 0xc4) * ((float)iVar3 / 100.0);
      }
      pvVar12 = local_18;
      if (fVar14 < (float)piVar2[0x17]) {
        piVar2[0x17] = (int)fVar14;
      }
      goto LAB_00523824;
    }
  }
  else {
    if ((local_1c != (undefined4 *)0x1) && (puVar5 != (undefined4 *)0x1)) {
      if (puVar5 < local_1c) {
        param_1 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          do {
            pvVar12 = local_18;
            piVar2 = *(int **)(*(int *)((int)this + 0x3c) + local_20[(int)param_1] * 4);
            FUN_00591070(&DAT_005cdc70,"%s: damaging module \'%s\' for %d points of %s damage");
            FUN_00437950((void *)piVar2[3],local_24,(int)param_2);
            if ((*(char *)((int)piVar2 + 99) == '\0') ||
               (cVar1 = (**(code **)(*piVar2 + 0x14))(), cVar1 != '\0')) {
              fVar14 = 0.0;
            }
            else {
              iVar3 = FUN_00437c60((int *)piVar2[3]);
              fVar14 = *(float *)(piVar2[2] + 0xc4) * ((float)iVar3 / 100.0);
            }
            if (fVar14 < (float)piVar2[0x17]) {
              piVar2[0x17] = (int)fVar14;
            }
            param_1 = (undefined4 *)((int)param_1 + 1);
            this = pvVar12;
          } while (param_1 < puVar5);
        }
      }
      else {
        param_1 = (undefined4 *)0x0;
        local_64 = (undefined4 *)0x0;
        local_60 = (undefined4 *)0x0;
        local_30 = (undefined4 *)0x0;
        local_5c = (undefined4 *)0x0;
        puVar5 = (undefined4 *)0x0;
        local_8 = CONCAT31(local_8._1_3_,3);
        local_3c = (undefined4 *)0x0;
        puVar7 = local_3c;
        if (local_1c != (undefined4 *)0x0) {
          do {
            iVar8 = (int)piVar2 - (int)local_20;
            iVar3 = rand();
            piVar6 = local_20;
            local_3c = (undefined4 *)local_20[iVar3 % (iVar8 >> 2)];
            if (local_30 == puVar5) {
              FUN_004141e0(&local_64,puVar5,&local_3c);
              local_30 = local_5c;
              param_1 = local_64;
            }
            else {
              *puVar5 = local_3c;
              local_60 = puVar5 + 1;
            }
            puVar5 = local_60;
            puVar7 = FUN_00414000(&local_40,(int *)&local_3c,piVar6,piVar2);
            piVar6 = (int *)*puVar7;
            if (piVar6 != piVar2) {
              piVar2 = piVar6;
              local_48 = piVar6;
            }
            this = local_18;
            puVar7 = puVar5;
          } while ((undefined4 *)((int)puVar5 - (int)param_1 >> 2) < local_1c);
        }
        local_3c = puVar7;
        pvVar12 = local_18;
        if ((int)local_3c - (int)param_1 >> 2 != 0) {
          iVar3 = (int)local_3c - (int)param_1;
          local_3c = (undefined4 *)0x0;
          do {
            iVar8 = local_24;
            piVar2 = *(int **)(*(int *)((int)this + 0x3c) + param_1[(int)local_3c] * 4);
            local_3c = (undefined4 *)((int)local_3c + 1);
            FUN_00591070(&DAT_005cdc70,
                         "%s: (module %d) damaging module \'%s\' for %d points of %s damage");
            FUN_00437950((void *)piVar2[3],iVar8,(int)param_2);
            this = local_18;
            if ((*(char *)((int)piVar2 + 99) == '\0') ||
               (cVar1 = (**(code **)(*piVar2 + 0x14))(), cVar1 != '\0')) {
              fVar14 = 0.0;
            }
            else {
              iVar8 = FUN_00437c60((int *)piVar2[3]);
              fVar14 = *(float *)(piVar2[2] + 0xc4) * ((float)iVar8 / 100.0);
            }
            if (fVar14 < (float)piVar2[0x17]) {
              piVar2[0x17] = (int)fVar14;
            }
            pvVar12 = this;
          } while (local_3c < (undefined4 *)(iVar3 >> 2));
        }
        local_8._0_1_ = 2;
        if (param_1 != (undefined4 *)0x0) {
          puVar5 = param_1;
          if ((0xfff < ((int)local_30 - (int)param_1 & 0xfffffffcU)) &&
             (puVar5 = (undefined4 *)param_1[-1], 0x1f < (uint)((int)param_1 + (-4 - (int)puVar5))))
          {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(puVar5);
        }
      }
      goto LAB_00523824;
    }
    if (puVar5 != (undefined4 *)0x0) {
      iVar3 = 0;
      if (0 < (int)puVar5) {
        iVar3 = rand();
        iVar3 = iVar3 % (int)puVar5 + 1;
      }
      iVar8 = local_24;
      pvVar12 = *(void **)(*(int *)((int)this + 0x3c) + local_20[iVar3 + -1] * 4);
      FUN_00591070(&DAT_005cdc70,"%s: damaging module \'%s\' for %d points of %s damage");
      FUN_004ae700(pvVar12,iVar8,(int)param_2);
      pvVar12 = local_18;
      goto LAB_00523824;
    }
  }
  FUN_00591070(&DAT_005cdc70,"%s: no modules in the right palce to damage from this.");
  pvVar12 = local_18;
LAB_00523824:
  uVar11 = 0;
  uVar10 = (int)local_28 - (int)local_2c >> 2;
  if (uVar10 != 0) {
    do {
      FUN_00522090(pvVar12,*(undefined1 **)((int)local_2c + uVar11 * 4));
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  if (local_20 != (int *)0x0) {
    piVar2 = local_20;
    if ((0xfff < ((int)local_34 - (int)local_20 & 0xfffffffcU)) &&
       (piVar2 = (int *)local_20[-1], 0x1f < (uint)((int)local_20 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
  }
  if (local_2c != (void *)0x0) {
    piVar2 = local_2c;
    if ((0xfff < ((int)local_38 - (int)local_2c & 0xfffffffcU)) &&
       (piVar2 = *(int **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)piVar2))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005238f0(void *this,undefined4 *param_1,float param_2)

{
  FUN_00522f20(this,param_1,param_2);
  return;
}


Node * __thiscall FUN_00523910(void *this,byte param_1)

{
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00523940(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  basic_string<> *pbVar4;
  Label *pLVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar9;
  undefined8 uVar8;
  Quaternion local_a8 [16];
  Quaternion local_98 [16];
  Quaternion local_88 [4];
  undefined8 local_84;
  float local_7c;
  undefined4 local_78;
  int *local_74;
  undefined8 local_70;
  float local_68;
  undefined4 local_64;
  int *local_60;
  void *local_5c [2];
  Quaternion local_54 [8];
  undefined4 local_4c;
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
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c2dc8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = param_1;
  if ((int *)param_1[0xa1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xa1] + 0x138))();
    param_1[0xa1] = 0;
  }
  if ((int *)param_1[0xa2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xa2] + 0x138))();
    param_1[0xa2] = 0;
  }
  if ((char)param_1[0x9e] != '\0') {
    piVar1 = (int *)FUN_004023e0();
    (**(code **)(*piVar1 + 0x7c))();
    local_8 = 0;
    cocos2d::Vec3::Vec3((Vec3 *)&local_84,(float)local_70 / DAT_006550a4,
                        local_70._4_4_ / DAT_006550a4,local_68 / DAT_006550a4);
    local_70 = local_84;
    local_68 = local_7c;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_84);
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"Arial",5);
    local_8._0_1_ = 1;
    piVar1 = (int *)FUN_004023e0();
    piVar2 = (int *)FUN_004023e0();
    piVar3 = (int *)FUN_004023e0();
    local_74 = (int *)FUN_004023e0();
    local_78 = (**(code **)(*piVar1 + 0xd0))(local_54);
    local_8._0_1_ = 2;
    (**(code **)(*piVar2 + 0xd0))();
    local_8._0_1_ = 3;
    (**(code **)(*piVar3 + 0xd0))(local_98);
    local_8._0_1_ = 4;
    (**(code **)(*local_74 + 0xd0))(local_88);
    local_8._0_1_ = 5;
    pbVar4 = (basic_string<> *)
             FUN_00591e00((undefined1 *)local_2c,"Camera at %f, %f, %f (rot %f, %f, %f,  %f)");
    local_8._0_1_ = 6;
    pLVar5 = cocos2d::Label::createWithSystemFont
                       (pbVar4,(basic_string<> *)local_44,18.0,(Size *)ZERO_exref,0,0);
    piVar1 = local_60;
    local_8._0_1_ = 5;
    local_60[0xa2] = (int)pLVar5;
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
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    cocos2d::Quaternion::~Quaternion(local_88);
    cocos2d::Quaternion::~Quaternion(local_98);
    cocos2d::Quaternion::~Quaternion(local_a8);
    cocos2d::Quaternion::~Quaternion(local_54);
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pvVar6 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_64 = 0;
    local_60 = (int *)0x0;
    local_8._0_1_ = 7;
    (**(code **)(*(int *)piVar1[0xa2] + 0xa0))(&local_64);
    local_8._0_1_ = 0;
    (**(code **)(*(int *)piVar1[0xa2] + 0x48))(0x41200000,0x42200000);
    (**(code **)(*piVar1 + 0x10c))(piVar1[0xa2]);
    if (piVar1[0xa0] != 0) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"Arial",5);
      local_8._0_1_ = 8;
      FUN_0053b8e0((void *)piVar1[0xa0],(undefined1 *)local_5c);
      local_8._0_1_ = 9;
      pbVar4 = (basic_string<> *)
               FUN_00591e00((undefined1 *)local_2c,
                            "%s at %f, %f, %f, (rot %f, %f, %f )(quat %f, %f, %f, %f)");
      local_8._0_1_ = 10;
      pLVar5 = cocos2d::Label::createWithSystemFont
                         (pbVar4,(basic_string<> *)local_44,18.0,(Size *)ZERO_exref,0,0);
      local_8._0_1_ = 9;
      piVar1[0xa1] = (int)pLVar5;
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
      local_8._0_1_ = 8;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_48) {
        pvVar6 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar6 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_8._0_1_ = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_30) {
        pvVar6 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar6 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      FUN_00591070("DETAIL","Outer angle: %f");
      local_64 = 0;
      local_60 = (int *)0x0;
      local_8._0_1_ = 0xb;
      puVar9 = &local_64;
      (**(code **)(*(int *)piVar1[0xa1] + 0xa0))();
      local_8._0_1_ = 0;
      uVar8 = CONCAT44(puVar9,0x42dc0000);
      uVar7 = 0x41200000;
      (**(code **)(*(int *)piVar1[0xa1] + 0x48))();
      (**(code **)(*piVar1 + 0x10c))(piVar1[0xa1],uVar7,uVar8);
      FUN_0053b8e0((void *)piVar1[0xa0],(undefined1 *)local_2c);
      local_8._0_1_ = 0xc;
      FUN_00591070("DETAIL","selected %s");
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
    }
    cocos2d::Vec3::~Vec3((Vec3 *)&local_70);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00523f80(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_004023e0();
  if (*(int *)(*(int *)(iVar1 + 0x2d4) + 0x94) - *(int *)(*(int *)(iVar1 + 0x2d4) + 0x90) >> 2 != 0)
  {
    do {
      iVar1 = FUN_004023e0();
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x2d4) + 0x90) + uVar2 * 4) + 0x3c);
      if (((iVar1 == 3) || (iVar1 == 1)) || (iVar1 == 2)) {
        iVar1 = FUN_004023e0();
        (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x2d4) + 0x90) + uVar2 * 4) +
                               1000) + 0xb4))(0);
      }
      uVar2 = uVar2 + 1;
      iVar1 = FUN_004023e0();
    } while (uVar2 < (uint)(*(int *)(*(int *)(iVar1 + 0x2d4) + 0x94) -
                            *(int *)(*(int *)(iVar1 + 0x2d4) + 0x90) >> 2));
  }
  return;
}
