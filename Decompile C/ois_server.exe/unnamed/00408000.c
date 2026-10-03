#include "../ois_server.exe.h"


void FUN_00408110(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *_Dst;
  void *pvVar8;
  size_t _Size;
  int iVar9;
  void *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  uint local_30;
  int *local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afce8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00591070("WORLD","Re-setting synthetic instances for current sector...");
  uVar6 = 0;
  puVar5 = (undefined4 *)0x0;
  local_14 = (void *)0x0;
  local_40 = (void *)0x0;
  local_3c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_8 = 0;
  iVar4 = *(int *)(DAT_0065b5cc + 0xd8);
  if (iVar4 != 0) {
    iVar9 = DAT_0065b5cc;
    if (*(int *)(iVar4 + 0xa0) - *(int *)(iVar4 + 0x9c) >> 2 != 0) {
      do {
        puVar1 = (undefined4 *)(*(int *)(iVar4 + 0x9c) + uVar6 * 4);
        if (puVar5 == local_3c) {
          FUN_00414080(&local_40,local_3c,puVar1);
          puVar5 = local_38;
          iVar9 = DAT_0065b5cc;
        }
        else {
          *local_3c = *puVar1;
          local_3c = local_3c + 1;
        }
        iVar4 = *(int *)(iVar9 + 0xd8);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(*(int *)(iVar4 + 0xa0) - *(int *)(iVar4 + 0x9c) >> 2));
      local_14 = local_40;
      local_20 = puVar5;
    }
    local_30 = (int)local_3c - (int)local_14 >> 2;
    local_1c = 0;
    local_40 = local_14;
    if (local_30 != 0) {
LAB_00408200:
      piVar2 = (int *)((int)local_14 + local_1c * 4);
      local_2c = piVar2;
      FUN_00591070("WORLD","Removing synthetic object %s");
      if (DAT_0065c2a8 == (undefined4 *)0x0) {
        DAT_0065c2a8 = (undefined4 *)FUN_005adb0f(0x18);
        DAT_0065c2a8[4] = 0;
        DAT_0065c2a8[5] = 0;
        *DAT_0065c2a8 = 0;
        DAT_0065c2a8[1] = 0;
        DAT_0065c2a8[2] = 0;
        DAT_0065c2a8[3] = 0;
        DAT_0065c2a8[4] = 0;
        DAT_0065c2a8[5] = 0;
      }
      puVar1 = DAT_0065c2a8;
      uVar6 = 0;
      puVar5 = (undefined4 *)DAT_0065c2a8[3];
      uVar7 = DAT_0065c2a8[4] - (int)puVar5 >> 2;
      if (uVar7 != 0) {
        do {
          if (*(int *)*puVar5 == *piVar2) {
            puVar5 = *(undefined4 **)(DAT_0065c2a8[3] + uVar6 * 4);
            local_18 = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              FUN_0051f460((void *)puVar5[1],(undefined4 *)*puVar5);
              local_28 = (undefined4 *)puVar1[4];
              _Dst = (undefined4 *)puVar1[3];
              if (_Dst != local_28) goto LAB_004082d0;
              goto LAB_00408331;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < uVar7);
      }
      goto LAB_0040834d;
    }
LAB_00408370:
    *(undefined4 *)(*(int *)(iVar9 + 0xd8) + 0xa0) = *(undefined4 *)(*(int *)(iVar9 + 0xd8) + 0x9c);
  }
  pvVar3 = local_14;
  puVar5 = local_20;
  local_3c = local_14;
  FUN_004077b0(local_34);
  if (pvVar3 != (void *)0x0) {
    pvVar8 = pvVar3;
    if ((0xfff < ((int)puVar5 - (int)pvVar3 & 0xfffffffcU)) &&
       (pvVar8 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ExceptionList = local_10;
  return;
  while (_Dst = _Dst + 1, _Dst != local_28) {
LAB_004082d0:
    if ((undefined4 *)*_Dst == puVar5) break;
  }
  if (_Dst != local_28) {
    puVar5 = _Dst + 1;
    uVar6 = 0;
    local_24 = (uint)((int)local_28 + (3 - (int)puVar5)) >> 2;
    if (local_28 < puVar5) {
      local_24 = 0;
    }
    if (local_24 != 0) {
      do {
        if ((undefined4 *)*puVar5 != local_18) {
          *_Dst = (undefined4 *)*puVar5;
          _Dst = _Dst + 1;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != local_24);
    }
    if (_Dst != local_28) {
      _Size = puVar1[4] - (int)local_28;
      memmove(_Dst,local_28,_Size);
      puVar1[4] = _Size + (int)_Dst;
    }
  }
LAB_00408331:
  FUN_005adb3f(local_18);
  FUN_00591070("WORLD","Cleared up reference to spawned synthetic instances using junk manager.");
LAB_0040834d:
  FUN_0040e600(*local_2c);
  local_1c = local_1c + 1;
  iVar9 = DAT_0065b5cc;
  if (local_30 <= local_1c) goto LAB_00408370;
  goto LAB_00408200;
}


void FUN_004083e0(char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  void *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005afd18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = (int *)(DAT_0065b5cc + 0x3c);
  local_14 = 0;
  if (*(int *)(DAT_0065b5cc + 0x40) - *piVar6 >> 2 != 0) {
    do {
      piVar10 = (int *)0x0;
      piVar9 = (int *)0x0;
      local_28 = (void *)0x0;
      local_24 = (int *)0x0;
      local_18 = (int *)0x0;
      local_20 = (int *)0x0;
      local_8 = 0;
      local_1c = 0;
      iVar1 = *(int *)(*piVar6 + local_14 * 4);
      piVar5 = local_18;
      if (*(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xcc) >> 2 != 0) {
        uVar7 = 0;
        do {
          iVar1 = *(int *)(*(int *)(*piVar6 + local_14 * 4) + 0xcc);
          iVar2 = *(int *)(iVar1 + uVar7 * 4);
          iVar3 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158);
          if ((((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) &&
             ((*(char *)(iVar2 + 0x234) == '\0' || (param_1 != '\0')))) {
            if (piVar10 == piVar9) {
              FUN_00414080(&local_28,piVar9,(undefined4 *)(iVar1 + uVar7 * 4));
              piVar9 = local_24;
              piVar10 = local_20;
            }
            else {
              *piVar9 = iVar2;
              local_24 = piVar9 + 1;
              piVar9 = local_24;
            }
          }
          uVar7 = uVar7 + 1;
          piVar6 = (int *)(DAT_0065b5cc + 0x3c);
          iVar1 = *(int *)(*piVar6 + local_14 * 4);
          piVar5 = piVar10;
        } while (uVar7 < (uint)(*(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xcc) >> 2));
      }
      local_18 = piVar5;
      pvVar4 = local_28;
      local_1c = 0;
      uVar7 = (int)piVar9 - (int)local_28 >> 2;
      if (uVar7 != 0) {
        uVar11 = 0;
        do {
          FUN_0040e700(*(int *)((int)pvVar4 + uVar11 * 4));
          FUN_0051f8b0(*(void **)(*(int *)(DAT_0065b5cc + 0x3c) + local_14 * 4),
                       *(int *)((int)pvVar4 + uVar11 * 4));
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar7);
      }
      local_8 = 0xffffffff;
      if (pvVar4 != (void *)0x0) {
        pvVar8 = pvVar4;
        if ((0xfff < ((int)local_18 - (int)pvVar4 & 0xfffffffcU)) &&
           (pvVar8 = *(void **)((int)pvVar4 + -4), 0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar8))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      piVar6 = (int *)(DAT_0065b5cc + 0x3c);
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(DAT_0065b5cc + 0x40) - *piVar6 >> 2));
  }
  ExceptionList = local_10;
  return;
}


void FUN_004085b0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 *this;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  byte *in_stack_ffffffac;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afd50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00591070("WORLD","Removing unowned playable ships ships...");
  piVar7 = (int *)0x0;
  local_18 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_14 = (int *)0x0;
  local_24 = (int *)0x0;
  local_8 = 0;
  piVar5 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
  local_1c = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0);
  if (piVar5 != local_1c) {
    do {
      piVar1 = (int *)*piVar5;
      bVar8 = false;
      if (piVar1[0x95] != 0) {
        bVar8 = *(int *)(piVar1[0x95] + 0x158) == 0;
      }
      if ((((bVar8) && (iVar2 = piVar1[0x11], iVar2 != 0)) && (*(int *)(iVar2 + 0x124) != 0)) &&
         (*(int *)(iVar2 + 0x70) == 0)) {
        local_20 = &stack0xffffffac;
        local_18 = piVar1;
        FUN_004024e0(&stack0xffffffac,piVar1 + 0x8e);
        local_8._0_1_ = 1;
        this = FUN_00402de0();
        local_8 = (uint)local_8._1_3_ << 8;
        cVar3 = FUN_004232c0(this,in_stack_ffffffac);
        if (cVar3 == '\0') {
          if (local_14 == piVar7) {
            FUN_00414080(&local_2c,piVar7,&local_18);
            local_14 = local_24;
            piVar7 = local_28;
          }
          else {
            *piVar7 = (int)piVar1;
            piVar7 = piVar7 + 1;
            local_28 = piVar7;
          }
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != local_1c);
    local_18 = local_2c;
  }
  puVar6 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)((uint)((int)piVar7 + (3 - (int)local_18)) >> 2);
  if (piVar7 < local_18) {
    puVar4 = (undefined4 *)0x0;
  }
  piVar5 = local_18;
  local_2c = local_18;
  local_1c = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    do {
      local_1c = (int *)*piVar5;
      FUN_00591070("WORLD","Removing \'%s\'");
      FUN_0040d4f0(local_1c,'\0');
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      piVar5 = piVar5 + 1;
    } while (puVar6 != puVar4);
  }
  if (local_18 != (int *)0x0) {
    piVar5 = local_18;
    if ((0xfff < ((int)local_14 - (int)local_18 & 0xfffffffcU)) &&
       (piVar5 = (int *)local_18[-1], 0x1f < (uint)((int)local_18 + (-4 - (int)piVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar5);
  }
  ExceptionList = local_10;
  return;
}


void FUN_00408760(char param_1)

{
  byte ****ppppbVar1;
  bool bVar2;
  byte *****pppppbVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  byte ****ppppbVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  byte *****pppppbVar17;
  byte *pbVar18;
  int *piVar19;
  byte *in_stack_ffffff38;
  char *pcVar20;
  int *local_90;
  byte ****local_8c;
  byte ****local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  byte ***local_78 [2];
  undefined4 local_70;
  uint local_6c;
  undefined1 *local_68;
  int local_64;
  byte *local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  byte ****local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  char local_3d;
  byte ****local_3c;
  char local_35;
  byte ****local_34;
  byte ****local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afda6;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004083e0(param_1);
  pbVar18 = (byte *)0x0;
  local_35 = '\x01';
  local_4c = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_44 = (byte *)0x0;
  pbVar14 = (byte *)0x0;
  local_60 = (byte *)0x0;
  local_5c = (byte *)0x0;
  local_58 = (byte *)0x0;
  local_8 = 1;
  iVar16 = *(int *)(DAT_0065b5cc + 0xcc);
  if ((*(int *)(iVar16 + 0xbc) == 0) && (*(int *)(iVar16 + 0xc4) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar15 = 0;
  if (bVar2) {
    local_64 = 0;
    do {
      iVar4 = local_64;
      iVar5 = *(int *)(DAT_0065b5cc + 0xcc);
      iVar16 = DAT_00655078 + local_64 * 4;
      if ((*(int *)(iVar5 + 200 + iVar16 * 0xc) == 0) &&
         (*(int *)(iVar5 + 0xd0 + iVar16 * 0xc) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      piVar11 = (int *)(iVar5 + 0x78);
      uVar15 = 0;
      if (bVar2) {
        pbVar7 = local_44;
        if (*(int *)(iVar5 + 0x7c) - *piVar11 >> 2 != 0) {
          do {
            pcVar20 = *(char **)(*piVar11 + uVar15 * 4);
            if (((*pcVar20 == '\0') && (pcVar20[0xd8] == '\0')) &&
               (*(int *)(pcVar20 + 0xd4) == iVar4)) {
              if (pcVar20[DAT_00655078 + 0xd0] == '\0') {
                pcVar20 = 
                "* Vessel \'%s\' will NOT be spawned, as it isn\'t wanted at this difficulty level."
                ;
              }
              else {
                if (pbVar7 == pbVar18) {
                  FUN_00403840(&local_4c,(int *)pbVar18,(undefined4 *)(pcVar20 + 0x1c));
                }
                else {
                  FUN_004024e0(pbVar18,(undefined4 *)(pcVar20 + 0x1c));
                  local_48 = pbVar18 + 0x18;
                }
                pcVar20 = "* Vessel \'%s\' will be spawned, as will the entire team.";
                pbVar18 = local_48;
              }
              FUN_00591070("DETAIL",pcVar20);
              pbVar7 = local_44;
            }
            uVar15 = uVar15 + 1;
            piVar11 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
            pbVar14 = local_5c;
          } while (uVar15 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar11 >> 2));
        }
      }
      else {
        local_35 = '\0';
        if (*(int *)(iVar5 + 0x7c) - *piVar11 >> 2 != 0) {
          do {
            pcVar20 = *(char **)(*piVar11 + uVar15 * 4);
            if (((*pcVar20 == '\0') && (pcVar20[0xd8] == '\0')) &&
               (*(int *)(pcVar20 + 0xd4) == local_64)) {
              if ((*(int *)(pcVar20 + 0xe8) == 0) || (pcVar20[0x114] != '\0')) {
                FUN_00591070("DETAIL","* Vessel \'%s\' is critical and will be spawned.");
                puVar6 = (undefined4 *)
                         (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78) + uVar15 * 4) +
                         0x1c);
                if (local_44 == pbVar18) {
                  FUN_00403840(&local_4c,(int *)pbVar18,puVar6);
                  pbVar18 = local_48;
                }
                else {
                  FUN_004024e0(pbVar18,puVar6);
                  local_48 = pbVar18 + 0x18;
                  pbVar18 = local_48;
                }
              }
              else if (pcVar20[DAT_00655078 + 0xd0] == '\0') {
                FUN_00591070("DETAIL",
                             "* Vessel \'%s\' will NOT be spawned, as it isn\'t wanted at this difficulty level."
                            );
              }
              else {
                if (local_58 == pbVar14) {
                  FUN_00403840(&local_60,(int *)pbVar14,(undefined4 *)(pcVar20 + 0x1c));
                }
                else {
                  FUN_004024e0(pbVar14,(undefined4 *)(pcVar20 + 0x1c));
                  local_5c = pbVar14 + 0x18;
                }
                pbVar14 = local_5c;
                FUN_00591070("DETAIL","* Vessel \'%s\' is non-critical and MAY be spawned.");
              }
            }
            uVar15 = uVar15 + 1;
            piVar11 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
          } while (uVar15 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar11 >> 2));
        }
        local_50 = (byte ****)(((int)pbVar14 - (int)local_60) / 0x18);
        iVar16 = DAT_00655078 + local_64 * 4;
        iVar5 = *(int *)(DAT_0065b5cc + 0xcc);
        pppppbVar3 = *(byte ******)(iVar5 + 200 + iVar16 * 0xc);
        if ((pppppbVar3 != (byte *****)0x0) ||
           (local_3d = '\x01', *(int *)(iVar5 + 0xd0 + iVar16 * 0xc) != 0)) {
          local_3d = '\0';
        }
        local_3c = (byte ****)pppppbVar3;
        if (local_3d == '\0') {
          local_54 = *(byte **)(iVar5 + 0xd0 + iVar16 * 0xc);
          iVar16 = *(int *)(iVar5 + 0xcc + iVar16 * 0xc);
          iVar5 = 0;
          if ((0 < iVar16) && (local_34 = (byte ****)iVar16, 0 < (int)pppppbVar3)) {
            do {
              iVar4 = rand();
              iVar5 = iVar5 + 1 + iVar4 % iVar16;
              pppppbVar3 = (byte *****)((int)pppppbVar3 + -1);
              pbVar14 = local_5c;
              pbVar18 = local_48;
            } while (pppppbVar3 != (byte *****)0x0);
          }
          pbVar7 = local_54 + iVar5;
        }
        else {
          pbVar7 = (byte *)0x0;
        }
        in_stack_ffffff38 = (byte *)0x408dd3;
        local_34 = (byte ****)pbVar7;
        FUN_00591070("WORLD",
                     "For team %d, loading a random %d ships out of a possible %d non-critical ones:"
                    );
        while (0 < (int)pbVar7) {
          iVar16 = ((int)pbVar14 - (int)local_60) / 0x18 + -1;
          if (1 < iVar16) {
            iVar5 = rand();
            iVar16 = iVar5 % iVar16;
          }
          if (iVar16 == -1) {
            FUN_00591070("ERROR","Invalid ship tried to spawn.");
            break;
          }
          pbVar7 = local_60 + iVar16 * 0x18;
          FUN_00591070("WORLD","  Selected: %s");
          if (local_44 == pbVar18) {
            FUN_00403840(&local_4c,(int *)pbVar18,(undefined4 *)pbVar7);
          }
          else {
            FUN_004024e0(pbVar18,(undefined4 *)pbVar7);
            local_48 = pbVar18 + 0x18;
          }
          pbVar18 = local_48;
          puVar6 = (undefined4 *)
                   FUN_00413f20(&local_68,
                                local_4c + ((((int)local_48 - (int)local_4c) / 0x18) * 3 + -3) * 8,
                                local_60,pbVar14);
          pbVar7 = pbVar14;
          if ((byte *)*puVar6 != pbVar14) {
            pbVar7 = (byte *)FUN_00414300((int *)pbVar14,(int *)pbVar14,(int *)*puVar6);
            FUN_004028b0((int *)pbVar7,(int *)pbVar14);
            local_5c = pbVar7;
          }
          local_34 = (byte ****)((int)local_34 + -1);
          pbVar14 = pbVar7;
          pbVar7 = (byte *)local_34;
        }
        local_54 = (byte *)0x0;
        local_84 = (byte *)0x0;
        local_80 = (byte *)0x0;
        local_7c = (byte *)0x0;
        local_8._0_1_ = 3;
        local_50 = (byte ****)0x0;
        piVar11 = *(int **)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
        piVar19 = *(int **)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c);
        pppppbVar3 = (byte *****)((uint)((int)piVar19 + (3 - (int)piVar11)) >> 2);
        if (piVar19 < piVar11) {
          pppppbVar3 = (byte *****)0x0;
        }
        local_34 = (byte ****)pppppbVar3;
        if (pppppbVar3 != (byte *****)0x0) {
          pbVar14 = (byte *)0x0;
          do {
            if (*(char *)(*piVar11 + 0xd8) != '\0') {
              pbVar7 = (byte *)(*piVar11 + 0x1c);
              pbVar18 = FUN_004143f0(local_54,pbVar14,pbVar7);
              pppppbVar3 = (byte *****)local_34;
              if (pbVar18 == pbVar14) {
                if (local_7c == pbVar14) {
                  FUN_00403840(&local_84,(int *)pbVar14,(undefined4 *)pbVar7);
                  local_54 = local_84;
                  pppppbVar3 = (byte *****)local_34;
                  pbVar14 = local_80;
                }
                else {
                  FUN_004024e0(pbVar14,(undefined4 *)pbVar7);
                  local_80 = pbVar14 + 0x18;
                  pppppbVar3 = (byte *****)local_34;
                  pbVar14 = local_80;
                }
              }
            }
            local_50 = (byte ****)((int)local_50 + 1);
            piVar11 = piVar11 + 1;
            pbVar18 = local_48;
          } while ((byte *****)local_50 != pppppbVar3);
        }
        FUN_00591070("WORLD","%s duplicate ship-sets that need spawning.");
        if (local_54 != local_80) {
          do {
            FUN_004024e0(local_30,(undefined4 *)local_54);
            pppppbVar17 = (byte *****)0x0;
            local_90 = (int *)0x0;
            local_8c = (byte ****)0x0;
            local_34 = (byte ****)0x0;
            local_88 = (byte ****)0x0;
            local_8 = CONCAT31(local_8._1_3_,5);
            local_78[0] = (byte ***)0x0;
            local_50 = *(byte *****)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
            pppppbVar3 = *(byte ******)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c);
            local_6c = (uint)((int)pppppbVar3 + (3 - (int)local_50)) >> 2;
            if (pppppbVar3 < local_50) {
              local_6c = 0;
            }
            local_3c = local_30[0];
            if (local_6c != 0) {
              uVar15 = 0;
              do {
                ppppbVar1 = (byte ****)*local_50;
                pppppbVar3 = local_30;
                if (0xf < local_1c) {
                  pppppbVar3 = (byte *****)local_3c;
                }
                ppppbVar12 = ppppbVar1 + 7;
                if ((byte ***)0xf < ppppbVar1[0xc]) {
                  ppppbVar12 = (byte ****)ppppbVar1[7];
                }
                local_78[0] = (byte ***)ppppbVar1;
                uVar8 = FUN_004031f0((byte *)ppppbVar12,(uint)ppppbVar1[0xb],(byte *)pppppbVar3,
                                     local_20);
                if ((char)uVar8 != '\0') {
                  if ((byte *****)local_34 == pppppbVar17) {
                    FUN_00414080(&local_90,pppppbVar17,local_78);
                    local_34 = local_88;
                    pppppbVar17 = (byte *****)local_8c;
                  }
                  else {
                    *pppppbVar17 = ppppbVar1;
                    local_8c = (byte ****)(pppppbVar17 + 1);
                    pppppbVar17 = (byte *****)local_8c;
                  }
                }
                uVar15 = uVar15 + 1;
                local_50 = local_50 + 1;
                pbVar18 = local_48;
              } while (uVar15 != local_6c);
            }
            piVar11 = local_90;
            uVar15 = (int)pppppbVar17 - (int)local_90 >> 2;
            if (uVar15 == 1) {
              FUN_00591070("WORLD","Spawning single instance of \'%s\'");
              iVar16 = *piVar11;
            }
            else {
              iVar16 = rand();
              uVar13 = iVar16 % (int)(uVar15 - 1);
              uVar8 = 0;
              if (-1 < (int)uVar13) {
                uVar8 = uVar13;
              }
              local_6c = uVar15 - 1;
              if (uVar8 < uVar15) {
                local_6c = uVar8;
              }
              FUN_00591070("WORLD","Spawning single instance of \'%s\'");
              iVar16 = piVar11[local_6c];
            }
            FUN_00409650(iVar16);
            local_8._0_1_ = 4;
            if (piVar11 != (int *)0x0) {
              piVar19 = piVar11;
              if ((0xfff < (uint)(((int)local_34 - (int)piVar11 >> 2) * 4)) &&
                 (piVar19 = (int *)piVar11[-1], 0x1f < (uint)((int)piVar11 + (-4 - (int)piVar19))))
              goto LAB_004091bd;
              FUN_005adb3f(piVar19);
              local_90 = (int *)0x0;
              local_8c = (byte ****)0x0;
              local_88 = (byte ****)0x0;
            }
            local_8._0_1_ = 3;
            if (0xf < local_1c) {
              pppppbVar3 = (byte *****)local_3c;
              if ((0xfff < local_1c + 1) &&
                 (pppppbVar3 = (byte *****)local_3c[-1],
                 (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)pppppbVar3)))) {
LAB_004091bd:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pppppbVar3);
            }
            local_54 = local_54 + 0x18;
          } while (local_54 != local_80);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004025a0((int *)&local_84);
        pbVar14 = local_5c;
      }
      local_64 = local_64 + 1;
    } while (local_64 < 3);
  }
  else {
    piVar11 = (int *)(iVar16 + 0x78);
    local_35 = '\0';
    if (*(int *)(iVar16 + 0x7c) - *piVar11 >> 2 != 0) {
      do {
        iVar16 = *(int *)(*piVar11 + uVar15 * 4);
        if (*(int *)(iVar16 + 0xe8) == 2) {
          if (local_58 == pbVar14) {
            FUN_00403840(&local_60,(int *)pbVar14,(undefined4 *)(iVar16 + 0x1c));
            pbVar14 = local_5c;
          }
          else {
            FUN_004024e0(pbVar14,(undefined4 *)(iVar16 + 0x1c));
            local_5c = pbVar14 + 0x18;
            pbVar14 = local_5c;
          }
        }
        else if (local_44 == pbVar18) {
          FUN_00403840(&local_4c,(int *)pbVar18,(undefined4 *)(iVar16 + 0x1c));
          pbVar18 = local_48;
        }
        else {
          FUN_004024e0(pbVar18,(undefined4 *)(iVar16 + 0x1c));
          local_48 = pbVar18 + 0x18;
          pbVar18 = local_48;
        }
        uVar15 = uVar15 + 1;
        piVar11 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
      } while (uVar15 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar11 >> 2));
    }
    local_54 = (byte *)(((int)pbVar14 - (int)local_60) / 0x18);
    iVar16 = *(int *)(DAT_0065b5cc + 0xcc);
    iVar5 = *(int *)(iVar16 + 0xbc);
    if ((iVar5 == 0) && (*(int *)(iVar16 + 0xc4) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_34 = (byte ****)0x0;
    }
    else {
      local_34 = *(byte *****)(iVar16 + 0xc4);
      iVar16 = *(int *)(iVar16 + 0xc0);
      pppppbVar3 = (byte *****)0x0;
      if ((0 < iVar16) && (0 < iVar5)) {
        pppppbVar3 = (byte *****)0x0;
        do {
          iVar4 = rand();
          pppppbVar3 = (byte *****)((int)pppppbVar3 + iVar4 % iVar16 + 1);
          iVar5 = iVar5 + -1;
          pbVar14 = local_5c;
          pbVar18 = local_48;
          local_3c = (byte ****)pppppbVar3;
        } while (iVar5 != 0);
      }
      local_34 = (byte ****)((int)pppppbVar3 + (int)local_34);
    }
    if ((byte *****)(((int)pbVar18 - (int)local_4c) / 0x18) < local_34) {
      do {
        iVar16 = ((int)pbVar14 - (int)local_60) / 0x18 + -1;
        if (1 < iVar16) {
          iVar5 = rand();
          iVar16 = iVar5 % iVar16;
        }
        if (local_44 == pbVar18) {
          FUN_00403840(&local_4c,(int *)pbVar18,(undefined4 *)(local_60 + iVar16 * 0x18));
        }
        else {
          FUN_004024e0(pbVar18,(undefined4 *)(local_60 + iVar16 * 0x18));
          local_48 = pbVar18 + 0x18;
        }
        pbVar18 = local_48;
        local_3c = (byte ****)(((int)local_48 - (int)local_4c) / 0x18);
        puVar6 = (undefined4 *)
                 FUN_00413f20(&local_6c,local_4c + ((int)local_3c * 3 + -3) * 8,local_60,pbVar14);
        pbVar7 = pbVar14;
        if ((byte *)*puVar6 != pbVar14) {
          pbVar7 = (byte *)FUN_00414300((int *)pbVar14,(int *)pbVar14,(int *)*puVar6);
          FUN_004028b0((int *)pbVar7,(int *)pbVar14);
          local_5c = pbVar7;
        }
        pbVar14 = pbVar7;
      } while (local_3c < local_34);
    }
    FUN_00591070(&DAT_005cdc70,"selected %lu out of %d pirate ships to spawn");
  }
  local_3c = (byte ****)0x0;
  piVar11 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar11 >> 2 != 0) {
    do {
      iVar16 = (int)local_3c * 4;
      bVar2 = FUN_004ca2d0(*(int *)(*piVar11 + iVar16));
      if ((bVar2) &&
         ((iVar5 = *(int *)(iVar16 + *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78)),
          *(int *)(iVar5 + 0xe8) != 0 || (param_1 != '\0')))) {
        FUN_004024e0(&stack0xffffff38,(undefined4 *)(iVar5 + 0x1c));
        iVar5 = FUN_004a7100(in_stack_ffffff38);
        if (iVar5 == 0) {
          if (local_35 == '\0') {
            pbVar14 = FUN_004143f0(local_4c,pbVar18,
                                   (byte *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78)
                                                    + iVar16) + 0x1c));
            if (pbVar14 == pbVar18) {
              FUN_00591070(&DAT_005cdc70,"Not including ship with rego \'%s\'");
              goto LAB_00409249;
            }
            FUN_00591070(&DAT_005cdc70,"Including ship with rego \'%s\'");
          }
          FUN_00409650(*(int *)(iVar16 + *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78)));
        }
        else {
          FUN_00591070("ERROR","Attempted to spawn a second ship with the same rego (%s)");
        }
      }
LAB_00409249:
      local_3c = (byte ****)((int)local_3c + 1);
      piVar11 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
    } while (local_3c < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - *piVar11 >> 2));
  }
  uVar15 = 0;
  piVar19 = (int *)(DAT_0065b5cc + 0xd8);
  piVar11 = (int *)(*piVar19 + 0xcc);
  if (*(int *)(*piVar19 + 0xd0) - *piVar11 >> 2 != 0) {
    do {
      iVar16 = *piVar11;
      iVar5 = *(int *)(iVar16 + uVar15 * 4);
      pbVar14 = (byte *)(iVar5 + 0xb0);
      if (0xf < *(uint *)(iVar5 + 0xc4)) {
        pbVar14 = *(byte **)(iVar5 + 0xb0);
      }
      uVar8 = FUN_004031f0(pbVar14,*(uint *)(iVar5 + 0xc0),(byte *)&PTR_005ce008,0);
      if ((char)uVar8 == '\0') {
        FUN_004024e0(&stack0xffffff38,(undefined4 *)(*(int *)(iVar16 + uVar15 * 4) + 0xb0));
        uVar9 = FUN_004a7100(in_stack_ffffff38);
        piVar19 = (int *)(DAT_0065b5cc + 0xd8);
        local_70 = 0xc61c3c00;
        local_6c = 0xc61c3c00;
        iVar16 = *(int *)(*(int *)(*piVar19 + 0xcc) + uVar15 * 4);
        *(undefined4 *)(iVar16 + 0x37c) = uVar9;
        *(undefined4 *)(iVar16 + 200) = 0xc61c3c00;
        *(undefined4 *)(iVar16 + 0xcc) = 0xc61c3c00;
      }
      uVar15 = uVar15 + 1;
      piVar11 = (int *)(*piVar19 + 0xcc);
    } while (uVar15 < (uint)(*(int *)(*piVar19 + 0xd0) - *piVar11 >> 2));
  }
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 0) {
    puVar10 = DAT_0065c270;
    if (DAT_0065c270 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar10;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)(puVar10 + 8) = 0;
      *(undefined4 *)(puVar10 + 0xc) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      *(undefined4 *)(puVar10 + 0x14) = 0;
      *(undefined4 *)(puVar10 + 0x18) = 0;
      *(undefined4 *)(puVar10 + 0x1c) = 0;
      *(undefined4 *)(puVar10 + 0x20) = 0;
      *(undefined4 *)(puVar10 + 0x24) = 0;
      *(undefined4 *)(puVar10 + 0x28) = 0;
      local_68 = puVar10;
    }
    FUN_0043a250(puVar10,*(int *)(DAT_0065b5cc + 300),'\x01');
    puVar10 = DAT_0065c270;
    if (DAT_0065c270 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar10;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)(puVar10 + 8) = 0;
      *(undefined4 *)(puVar10 + 0xc) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      *(undefined4 *)(puVar10 + 0x14) = 0;
      *(undefined4 *)(puVar10 + 0x18) = 0;
      *(undefined4 *)(puVar10 + 0x1c) = 0;
      *(undefined4 *)(puVar10 + 0x20) = 0;
      *(undefined4 *)(puVar10 + 0x24) = 0;
      *(undefined4 *)(puVar10 + 0x28) = 0;
      local_68 = puVar10;
    }
    FUN_0043a8d0(puVar10,*(void **)(DAT_0065b5cc + 300));
  }
  FUN_00591070(&DAT_005cdc70,"Ships spawned.");
  FUN_004025a0((int *)&local_60);
  FUN_004025a0((int *)&local_4c);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00409490(void)

{
  byte *pbVar1;
  char *pcVar2;
  int *this;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *in_stack_ffffffcc;
  int *local_8;
  
  uVar10 = 0;
  iVar7 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78);
  iVar9 = DAT_0065b5cc;
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x7c) - iVar7 >> 2 != 0) {
    do {
      pcVar2 = *(char **)(iVar7 + uVar10 * 4);
      if ((*pcVar2 != '\0') && (bVar3 = FUN_004ca2d0((int)pcVar2), iVar9 = DAT_0065b5cc, bVar3)) {
        FUN_00409650(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x78) + uVar10 * 4));
        iVar7 = *(int *)(DAT_0065b5cc + 0xcc);
        this = *(int **)(iVar7 + 0x3f8);
        puVar4 = (undefined4 *)(*(int *)(*(int *)(iVar7 + 0x78) + uVar10 * 4) + 0x1c);
        if (*(int **)(iVar7 + 0x3fc) == this) {
          FUN_00403840((void *)(iVar7 + 0x3f4),this,puVar4);
        }
        else {
          FUN_004024e0(this,puVar4);
          *(int *)(iVar7 + 0x3f8) = *(int *)(iVar7 + 0x3f8) + 0x18;
        }
        FUN_00591070("WORLD","Spawning ship \'%s\' as reqs are met...");
        iVar9 = DAT_0065b5cc;
      }
      uVar10 = uVar10 + 1;
      iVar7 = *(int *)(*(int *)(iVar9 + 0xcc) + 0x78);
    } while (uVar10 < (uint)(*(int *)(*(int *)(iVar9 + 0xcc) + 0x7c) - iVar7 >> 2));
  }
  local_8 = (int *)(iVar9 + 0xd8);
  uVar10 = 0;
  iVar7 = *(int *)(*local_8 + 0xcc);
  if (*(int *)(*local_8 + 0xd0) - iVar7 >> 2 != 0) {
    do {
      iVar7 = *(int *)(iVar7 + uVar10 * 4);
      pbVar1 = (byte *)(iVar7 + 0xb0);
      pbVar8 = pbVar1;
      if (0xf < *(uint *)(iVar7 + 0xc4)) {
        pbVar8 = *(byte **)pbVar1;
      }
      uVar5 = FUN_004031f0(pbVar8,*(uint *)(iVar7 + 0xc0),(byte *)&PTR_005ce008,0);
      if (((char)uVar5 == '\0') && (*(int *)(iVar7 + 0x37c) == 0)) {
        FUN_004024e0(&stack0xffffffcc,(undefined4 *)pbVar1);
        uVar6 = FUN_004a7100(in_stack_ffffffcc);
        local_8 = (int *)(DAT_0065b5cc + 0xd8);
        iVar7 = *(int *)(*(int *)(*local_8 + 0xcc) + uVar10 * 4);
        *(undefined4 *)(iVar7 + 0x37c) = uVar6;
        *(undefined4 *)(iVar7 + 200) = 0xc61c3c00;
        *(undefined4 *)(iVar7 + 0xcc) = 0xc61c3c00;
      }
      uVar10 = uVar10 + 1;
      iVar7 = *(int *)(*local_8 + 0xcc);
    } while (uVar10 < (uint)(*(int *)(*local_8 + 0xd0) - iVar7 >> 2));
  }
  return;
}


void FUN_00409650(int param_1)

{
  undefined1 *puVar1;
  byte ***pppbVar2;
  undefined4 *this;
  uint uVar3;
  uint uVar4;
  void *this_00;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  float *pfVar14;
  int iVar15;
  int *piVar16;
  void *this_01;
  byte *pbVar17;
  float fVar18;
  int *piVar19;
  byte ****ppppbVar20;
  bool bVar21;
  double dVar22;
  void *in_stack_ffffff00;
  int aiStack_e8 [4];
  undefined4 uStack_d8;
  int iStack_d0;
  byte *pbVar23;
  byte *pbVar24;
  char *pcVar25;
  uint in_stack_ffffff48;
  int **ppiVar26;
  undefined8 local_90;
  byte ***local_88 [4];
  uint local_78;
  uint local_74;
  int local_70;
  byte *local_6c;
  undefined4 *local_68;
  int *local_64;
  float local_60;
  byte ***local_5c;
  undefined8 local_58;
  int *local_50;
  undefined4 *local_4c;
  int *local_48;
  int *local_44;
  undefined8 local_40;
  char local_31;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afe9a;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_70 = param_1;
  iVar5 = *(int *)(param_1 + 0xe8);
  if ((iVar5 != 1) && (iVar5 != 2)) {
    if (iVar5 == 3) {
      iVar5 = 6;
    }
    else if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      bVar21 = iVar5 == 4;
      iVar5 = local_58._4_4_;
      if (bVar21) {
        iVar5 = 8;
      }
    }
  }
  local_58 = (double)CONCAT44(&stack0xffffff48,(undefined4)local_58);
  pbVar23 = (byte *)(in_stack_ffffff48 & 0xffffff00);
  FUN_00402690(&stack0xffffff48,"stock",5);
  local_50 = &iStack_d0;
  local_8 = 0;
  uStack_d8 = 0x4096fc;
  FUN_004024e0(&iStack_d0,(undefined4 *)(param_1 + 0x34));
  local_44 = aiStack_e8;
  local_8._0_1_ = 1;
  local_6c = (byte *)(param_1 + 0x1c);
  FUN_004024e0(aiStack_e8,(undefined4 *)local_6c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004024e0(&stack0xffffff00,(undefined4 *)(param_1 + 4));
  local_8 = 0xffffffff;
  this = FUN_0040e040(iVar5,*(undefined1 **)(param_1 + 0xe0),in_stack_ffffff00);
  local_68 = this;
  FUN_0050ad40(this,iVar5,*(int *)(param_1 + 0x24c),*(int *)(param_1 + 0x250));
  *(int *)(this[0x11] + 0x124) = param_1;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if ((*(char *)(DAT_0065b444 + 0x72) != '\0') && (DAT_0065b5cc[0x34] == 0)) {
      DAT_0065b5cc[0x34] = (int)this;
    }
    this[0xde] = 0;
  }
  if (this[0x11] != 0) {
    *(undefined1 *)(this[0x11] + 0x108) = *(undefined1 *)(param_1 + 0x255);
    *(undefined1 *)(this[0x11] + 0x109) = *(undefined1 *)(param_1 + 0x254);
  }
  puVar6 = (undefined4 *)(param_1 + 0x20c);
  if (this + 0x20 != puVar6) {
    if (0xf < *(uint *)(param_1 + 0x220)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    FUN_00402690(this + 0x20,puVar6,*(uint *)(param_1 + 0x21c));
  }
  pbVar24 = (byte *)(this + 0x20);
  if (iVar5 == 0) {
    if (0xf < (uint)this[0x25]) {
      pbVar24 = *(byte **)pbVar24;
    }
    uVar3 = FUN_004031f0(pbVar24,this[0x24],(byte *)&PTR_005ce008,0);
    if ((char)uVar3 != '\0') {
      FUN_00402690(this + 0x20,"CERESPILOT",10);
    }
  }
  puVar6 = (undefined4 *)(param_1 + 0x130);
  if (this + 0x2c != puVar6) {
    if (0xf < *(uint *)(param_1 + 0x144)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    FUN_00402690(this + 0x2c,puVar6,*(uint *)(param_1 + 0x140));
  }
  iVar5 = this[0x11];
  if ((*(int *)(iVar5 + 0x70) == 2) || (*(char *)(param_1 + 0x115) != '\0')) {
    *(undefined1 *)(iVar5 + 0x160) = 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar5 + 0x6c) + 0x40) + 0x34) = 0;
  }
  local_40 = (double)(ulonglong)(uint)local_40;
  iVar15 = *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224);
  iVar5 = iVar15 >> 0x1f;
  if (iVar15 / 0x18 + iVar5 != iVar5) {
    local_4c = (undefined4 *)0x0;
    do {
      FUN_00591070(&DAT_005cdc70,"Removing module: %s");
      FUN_004024e0(local_30,(undefined4 *)(*(int *)(param_1 + 0x224) + (int)local_4c));
      uVar3 = 0;
      iVar5 = *(int *)(this[0x10] + 0x3c);
      local_5c = local_30[0];
      if (*(int *)(this[0x10] + 0x40) - iVar5 >> 2 != 0) {
        do {
          iVar5 = *(int *)(*(int *)(iVar5 + uVar3 * 4) + 8);
          ppppbVar13 = local_30;
          if (0xf < local_1c) {
            ppppbVar13 = (byte ****)local_5c;
          }
          pbVar24 = (byte *)(iVar5 + 0x50);
          if (0xf < *(uint *)(iVar5 + 100)) {
            pbVar24 = *(byte **)(iVar5 + 0x50);
          }
          uVar4 = FUN_004031f0(pbVar24,*(uint *)(iVar5 + 0x60),(byte *)ppppbVar13,local_20);
          iVar15 = this[0x10];
          if ((char)uVar4 != '\0') {
            puVar1 = *(undefined1 **)(*(int *)(iVar15 + 0x3c) + uVar3 * 4);
            if (0xf < local_1c) {
              ppppbVar13 = (byte ****)local_5c;
              if ((0xfff < local_1c + 1) &&
                 (ppppbVar13 = (byte ****)local_5c[-1],
                 (byte *)0x1f < (byte *)((int)local_5c + (-4 - (int)ppppbVar13))))
              goto LAB_00409f43;
              FUN_005adb3f(ppppbVar13);
            }
            local_20 = 0;
            local_1c = 0xf;
            local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
            if (puVar1 == (undefined1 *)0x0) goto LAB_0040994c;
            FUN_00522090((void *)this[0x10],puVar1);
            goto LAB_0040995e;
          }
          uVar3 = uVar3 + 1;
          iVar5 = *(int *)(iVar15 + 0x3c);
        } while (uVar3 < (uint)(*(int *)(iVar15 + 0x40) - iVar5 >> 2));
      }
      if (0xf < local_1c) {
        ppppbVar13 = (byte ****)local_5c;
        if ((0xfff < local_1c + 1) &&
           (ppppbVar13 = (byte ****)local_5c[-1],
           (byte *)0x1f < (byte *)((int)local_5c + (-4 - (int)ppppbVar13)))) goto LAB_00409f43;
        FUN_005adb3f(ppppbVar13);
      }
LAB_0040994c:
      FUN_00591070(&DAT_005cdc70,"(module doesn\'t exist, no need to remove.");
LAB_0040995e:
      uVar3 = (int)local_40._4_4_ + 1;
      local_40 = (double)CONCAT44(uVar3,(uint)local_40);
      local_4c = local_4c + 6;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224)) / 0x18));
  }
  local_5c = (byte ***)0x0;
  iVar15 = *(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230);
  iVar5 = iVar15 >> 0x1f;
  if (iVar15 / 0x18 + iVar5 != iVar5) {
    local_40 = (double)((ulonglong)local_40 & 0xffffffff);
    do {
      FUN_00591070(&DAT_005cdc70,"Adding module: %s");
      this_00 = (void *)FUN_005adb0f(0x88);
      local_58 = (double)CONCAT44(this_00,(undefined4)local_58);
      local_8 = 3;
      FUN_004024e0(&stack0xffffff48,(undefined4 *)(*(int *)(param_1 + 0x230) + (int)local_40._4_4_))
      ;
      iVar5 = FUN_004a8020(pbVar23);
      puVar6 = FUN_004adec0(this_00,iVar5);
      local_8 = 0xffffffff;
      FUN_00437260((void *)puVar6[3],**(int **)(puVar6[2] + 0x120));
      if (*(int *)(puVar6[2] + 4) == 5) {
        puVar6[0x1a] = (int)*(float *)(puVar6[2] + 0x104);
      }
      FUN_00521d10((void *)this[0x10],(undefined1 *)puVar6,-1);
      local_5c = (byte ***)((int)local_5c + 1);
      local_40 = (double)CONCAT44((int)local_40._4_4_ + 0x18,(uint)local_40);
    } while (local_5c < (byte ****)((*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x18))
    ;
  }
  if ((*(char *)(param_1 + 0xf9) != '\0') && (*(char *)((int)local_64 + 0x1c5) == '\0')) {
    *(undefined1 *)(this + 0x34) = 0;
  }
  if ((*(int *)(param_1 + 0xe8) == 2) || (*(char *)(param_1 + 0xf8) != '\0')) {
    *(undefined1 *)(this[0x10] + 0x34) = 0;
  }
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0xfc);
  if (*(int *)(param_1 + 0x100) - iVar5 >> 2 != 0) {
    iVar15 = 0xc;
    local_40 = (double)CONCAT44(0xc,(uint)local_40);
    do {
      local_5c = *(byte ****)(iVar15 + -0xc + iVar5);
      local_44 = (int *)this[0x7e];
      if (((int)uVar3 < 0) ||
         (((0 < local_44[2] && (local_44[2] <= (int)uVar3)) ||
          (*(int *)(iVar15 + (int)local_44) == 0)))) {
        FUN_005070d0(local_44,uVar3);
        iVar15 = (int)local_40._4_4_;
      }
      if (((byte ****)local_5c != (byte ****)0x0) &&
         (local_44 = *(int **)(iVar15 + (int)local_44), (byte *)((int)local_5c - 1U) < (byte *)0x3))
      {
        *(byte *)((int)local_44 + (int)local_5c) = 1;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)(param_1 + 0xfc);
      iVar15 = iVar15 + 4;
      local_40 = (double)CONCAT44(iVar15,(uint)local_40);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x100) - iVar5 >> 2));
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x108);
    puVar11 = (undefined4 *)*puVar6;
    local_40 = (double)CONCAT44(puVar11,(uint)local_40);
    while (puVar11 != puVar6) {
      FUN_00506db0((void *)this[0x7e],puVar11[4],puVar11[5]);
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)((int)&local_40 + 4));
      puVar11 = local_40._4_4_;
    }
  }
  local_4c = (undefined4 *)0x0;
  local_31 = '\0';
  local_50 = (int *)local_64[*(int *)(param_1 + 0xd4) + 0x15];
  pbVar24 = (byte *)DAT_0065b5cc[0x33];
  if (*(int *)(pbVar24 + 0x70) == 2) {
    pbVar17 = pbVar24;
    if (0xf < *(uint *)(pbVar24 + 0x14)) {
      pbVar17 = *(byte **)pbVar24;
    }
    uVar3 = FUN_004031f0(pbVar17,*(uint *)(pbVar24 + 0x10),(byte *)"objectsinspace",0xe);
    if ((((char)uVar3 == '\0') || (*(char *)(this + 0x8d) == '\0')) ||
       (*(char *)(DAT_0065b444 + 0x11b) == '\0')) goto LAB_00409f5c;
    if (*(undefined1 **)(&DAT_00655020 + local_64[0x3f] * 4) == (undefined1 *)0xffffffff) {
      iVar5 = rand();
      FUN_0050c090(this,*(undefined1 **)(&DAT_00655020 + (iVar5 % 0xb) * 4));
      fVar18 = 5.933653e-39;
      iVar5 = FUN_00521010((void *)this[9],0);
      local_60 = *(float *)(iVar5 + 8);
      local_5c = *(byte ****)(iVar5 + 0xc);
      local_58 = *(double *)(iVar5 + 8);
      local_8 = 4;
      iVar5 = rand();
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      local_40 = (double)(int)uVar3;
      dVar22 = (double)(iVar5 % 0x168) * 0.017453292519943295;
      local_90 = dVar22;
      libm_sse2_sin_precise();
      local_44 = (int *)(float)(dVar22 * local_40);
      dVar22 = local_90;
      libm_sse2_cos_precise();
      local_48 = local_44;
      local_44 = (int *)(float)(dVar22 * local_40);
      ppiVar26 = &local_48;
      local_8 = CONCAT31(local_8._1_3_,6);
      cocos2d::Vec2::operator+((Vec2 *)&local_60,(Vec2 *)&stack0xffffff58);
      this = local_68;
      local_8 = 0xffffffff;
      FUN_004a8850(local_68 + 2,(float)ppiVar26,fVar18);
      iVar5 = rand();
      local_31 = '\x01';
      this[0x48] = (float)(iVar5 % 0x168);
    }
    else {
      FUN_0050c090(this,*(undefined1 **)(&DAT_00655020 + local_64[0x3f] * 4));
      piVar9 = (int *)(&DAT_00655020 + local_64[0x3f] * 4);
      local_40 = (double)CONCAT44(piVar9,(uint)local_40);
      piVar16 = local_64;
      piVar19 = DAT_0065b448;
      if (*(char *)(DAT_0065b448[1] + 0xd) == '\0') {
        piVar16 = (int *)*piVar9;
        piVar7 = (int *)DAT_0065b448[1];
        do {
          if (piVar7[4] < (int)piVar16) {
            piVar8 = (int *)piVar7[2];
          }
          else {
            piVar8 = (int *)*piVar7;
            piVar19 = piVar7;
          }
          piVar7 = piVar8;
        } while (*(char *)((int)piVar8 + 0xd) == '\0');
        if ((piVar19 == DAT_0065b448) || ((int)piVar16 < piVar19[4])) goto LAB_00409de2;
      }
      else {
LAB_00409de2:
        local_44 = piVar9;
        piVar9 = (int *)FUN_00414a90(piVar16,&local_44);
        FUN_00414ac0(this_01,&local_44,piVar19,piVar9 + 4,piVar9);
        piVar19 = local_44;
      }
      FUN_004024e0(&stack0xffffff48,piVar19 + 5);
      pbVar24 = (byte *)0x409e18;
      puVar6 = (undefined4 *)FUN_004a6de0(pbVar23);
      local_4c = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_004a8850(this + 2,(float)*(double *)(puVar6 + 10),(float)*(double *)(puVar6 + 0xc));
        FUN_00511950(this,puVar6,'\x01','\0');
        if (*(char *)(this + 0x8d) != '\0') {
          FUN_00591e00((undefined1 *)local_30,"aboard_%s");
          local_8 = 7;
          local_5c = (byte ***)local_30;
          if (0xf < local_1c) {
            local_5c = local_30[0];
          }
          ppppbVar13 = local_30;
          if (0xf < local_1c) {
            ppppbVar13 = (byte ****)local_30[0];
          }
          iVar15 = 0;
          local_40 = (double)CONCAT44(ppppbVar13,(uint)local_40);
          iVar5 = (int)((int)local_5c + local_20) - (int)ppppbVar13;
          if ((byte ****)((int)local_5c + local_20) < ppppbVar13) {
            iVar5 = 0;
          }
          if (iVar5 != 0) {
            do {
              iVar10 = tolower((int)(char)*(byte *)((int)ppppbVar13 + iVar15));
              *(byte *)((int)local_5c + iVar15) = (byte)iVar10;
              iVar15 = iVar15 + 1;
              param_1 = local_70;
              this = local_68;
            } while (iVar15 != iVar5);
          }
          local_58 = (double)CONCAT44(&stack0xffffff44,(undefined4)local_58);
          FUN_004024e0(&stack0xffffff44,local_30);
          local_8._0_1_ = 8;
          puVar6 = FUN_00412df0();
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_004a0ee0(puVar6,pbVar24);
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
            ppppbVar13 = (byte ****)local_30[0];
            if ((0xfff < local_1c + 1) &&
               (ppppbVar13 = (byte ****)local_30[0][-1],
               (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar13)))) {
LAB_00409f43:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar13);
          }
        }
      }
      local_31 = '\x01';
    }
  }
  else {
LAB_00409f5c:
    pbVar24 = (byte *)(param_1 + 0x58);
    pbVar17 = pbVar24;
    if (0xf < *(uint *)(param_1 + 0x6c)) {
      pbVar17 = *(byte **)pbVar24;
    }
    uVar3 = FUN_004031f0(pbVar17,*(uint *)(param_1 + 0x68),(byte *)&PTR_005ce008,0);
    if ((char)uVar3 == '\0') {
      FUN_004024e0(&stack0xffffff48,(undefined4 *)pbVar24);
      iVar5 = FUN_004a6de0(pbVar23);
      if (iVar5 != 0) {
        *(undefined8 *)(this + 10) = *(undefined8 *)(iVar5 + 0x28);
        dVar22 = *(double *)(iVar5 + 0x30);
LAB_0040a045:
        *(double *)(this + 0xc) = dVar22;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x50) - (int)*(float **)(param_1 + 0x4c) >> 3;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          *(double *)(this + 10) = (double)**(float **)(param_1 + 0x4c);
          fVar18 = *(float *)(*(int *)(param_1 + 0x4c) + 4);
        }
        else {
          iVar15 = rand();
          iVar15 = iVar15 % (iVar5 + -1);
          iVar5 = 0;
          if (-1 < iVar15) {
            iVar5 = iVar15;
          }
          *(double *)(this + 10) = (double)*(float *)(*(int *)(param_1 + 0x4c) + iVar5 * 8);
          fVar18 = *(float *)(*(int *)(param_1 + 0x4c) + 4 + iVar5 * 8);
        }
        dVar22 = (double)fVar18;
        goto LAB_0040a045;
      }
      this[10] = 0;
      this[0xb] = 0x40590000;
      this[0xc] = 0;
      this[0xd] = 0x40590000;
      FUN_00591070("ERROR","No valid start locations.h");
      bVar21 = cc_assert_script_compatible("ERROR: no valid start locations.");
      if (!bVar21) {
        cocos2d::log("Assert failed: %s");
      }
    }
  }
  pcVar25 = "DETAIL";
  pbVar23 = (byte *)0x40a064;
  FUN_00591070("DETAIL","  Spawn location: %f, %f");
  if (local_31 == '\0') {
    pbVar24 = (byte *)(param_1 + 0x118);
    pbVar17 = pbVar24;
    if (0xf < *(uint *)(param_1 + 300)) {
      pbVar17 = *(byte **)pbVar24;
    }
    uVar3 = FUN_004031f0(pbVar17,*(uint *)(param_1 + 0x128),(byte *)&PTR_005ce008,0);
    if ((char)uVar3 == '\0') {
      FUN_004024e0(&stack0xffffff44,(undefined4 *)pbVar24);
      pbVar23 = (byte *)0x40a0af;
      puVar6 = (undefined4 *)FUN_004a7100((byte *)pcVar25);
      local_4c = puVar6;
      if ((puVar6 == (undefined4 *)0x0) || (puVar6[8] != this[8])) {
LAB_0040a0ee:
        FUN_00591070("ERROR","Error trying to dock a ship at its starting space station.");
        bVar21 = cc_assert_script_compatible("Error trying to start a ship docked ");
        if (!bVar21) {
          cocos2d::log("Assert failed: %s");
        }
      }
      else {
        iVar5 = puVar6[0x95];
        bVar21 = false;
        if (iVar5 != 0) {
          bVar21 = *(int *)(iVar5 + 0x158) == 1;
        }
        if (!bVar21) {
          bVar21 = false;
          if (iVar5 != 0) {
            bVar21 = *(int *)(iVar5 + 0x158) == 3;
          }
          if (!bVar21) goto LAB_0040a0ee;
        }
      }
      if (puVar6 != (undefined4 *)0x0) {
        FUN_004a8850(this + 2,(float)*(double *)(puVar6 + 10),(float)*(double *)(puVar6 + 0xc));
        FUN_00511950(this,puVar6,'\x01','\0');
        if (*(char *)(this + 0x8d) != '\0') {
          FUN_00591e00((undefined1 *)local_30,"aboard_%s");
          local_8 = 9;
          local_5c = (byte ***)local_30;
          if (0xf < local_1c) {
            local_5c = local_30[0];
          }
          ppppbVar13 = local_30;
          if (0xf < local_1c) {
            ppppbVar13 = (byte ****)local_30[0];
          }
          iVar15 = 0;
          local_40 = (double)CONCAT44(ppppbVar13,(uint)local_40);
          iVar5 = (int)((int)local_5c + local_20) - (int)ppppbVar13;
          if ((byte ****)((int)local_5c + local_20) < ppppbVar13) {
            iVar5 = 0;
          }
          if (iVar5 != 0) {
            do {
              iVar10 = tolower((int)(char)*(byte *)((int)ppppbVar13 + iVar15));
              *(byte *)((int)local_5c + iVar15) = (byte)iVar10;
              iVar15 = iVar15 + 1;
              param_1 = local_70;
              this = local_68;
            } while (iVar15 != iVar5);
          }
          local_58 = (double)CONCAT44(&stack0xffffff40,(undefined4)local_58);
          FUN_004024e0(&stack0xffffff40,local_30);
          local_8._0_1_ = 10;
          piVar9 = DAT_0065c274;
          if (DAT_0065c274 == (int *)0x0) {
            local_44 = (int *)FUN_005adb0f(0x30);
            *local_44 = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            piVar9 = local_44 + 3;
            local_8._0_1_ = 0xc;
            local_40 = (double)CONCAT44(piVar9,(uint)local_40);
            *piVar9 = 0;
            local_44[4] = 0;
            iVar5 = FUN_004136c0();
            *piVar9 = iVar5;
            DAT_0065c274 = local_44;
            local_44[9] = 0;
            local_44[10] = 0xf;
            *(undefined1 *)(local_44 + 5) = 0;
            piVar9 = local_44;
          }
          local_8 = CONCAT31(local_8._1_3_,9);
          FUN_004a0ee0(piVar9,pbVar23);
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
            ppppbVar13 = (byte ****)local_30[0];
            if ((0xfff < local_1c + 1) &&
               (ppppbVar13 = (byte ****)local_30[0][-1],
               (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar13)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar13);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
        }
      }
    }
  }
  this[0x48] = (float)*(int *)(param_1 + 0xdc);
  if ((local_31 == '\0') && (*(int *)(param_1 + 0xe4) != 0)) {
    iVar15 = rand();
    iVar5 = *(int *)(param_1 + 0xe4);
    iVar10 = rand();
    local_5c = (byte ***)(float)*(double *)(local_68 + 0xc);
    local_60 = (float)*(double *)(local_68 + 10);
    local_8 = 0xd;
    local_58 = (double)(iVar10 % iVar5);
    dVar22 = (double)(iVar15 % 0x168) * 0.017453292519943295;
    local_40 = dVar22;
    libm_sse2_sin_precise();
    local_44 = (int *)(float)(dVar22 * local_58);
    dVar22 = local_40;
    libm_sse2_cos_precise();
    local_48 = local_44;
    local_44 = (int *)(float)(dVar22 * local_58);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    cocos2d::Vec2::operator+((Vec2 *)&local_60,(Vec2 *)&local_90);
    local_8 = 0xffffffff;
    *(double *)(local_68 + 10) = (double)(float)local_90;
    *(double *)(local_68 + 0xc) = (double)local_90._4_4_;
    this = local_68;
  }
  piVar9 = local_50;
  uVar3 = 0;
  if (*(int *)(this[0x10] + 0x40) - *(int *)(this[0x10] + 0x3c) >> 2 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(this[0x10] + 0x3c) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(*(int *)(iVar5 + 8) + 0xc4);
    } while (uVar3 < (uint)(*(int *)(this[0x10] + 0x40) - *(int *)(this[0x10] + 0x3c) >> 2));
  }
  iVar5 = *(int *)(param_1 + 0x74 + (int)local_50 * 0xc) -
          *(int *)(param_1 + 0x70 + (int)local_50 * 0xc) >> 3;
  if ((iVar5 != 0) && (uVar3 = 0, iVar5 != 0)) {
    do {
      pbVar23 = (byte *)0x40a465;
      FUN_00591070("DETAIL","  Waypoint added: %f, %f");
      uVar3 = uVar3 + 1;
      this = local_68;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x74 + (int)piVar9 * 0xc) -
                            *(int *)(param_1 + 0x70 + (int)piVar9 * 0xc) >> 3));
  }
  local_40 = (double)((ulonglong)local_40 & 0xffffffff);
  iVar15 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec);
  iVar5 = iVar15 >> 0x1f;
  if (iVar15 / 0x18 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      uVar3 = 0xffffffff;
      FUN_004024e0(&stack0xffffff40,(undefined4 *)(*(int *)(param_1 + 0xec) + iVar5));
      iVar15 = FUN_004a8180(pbVar23);
      FUN_0050f740(this,iVar15,uVar3);
      iVar5 = iVar5 + 0x18;
      uVar3 = (int)local_40._4_4_ + 1;
      local_40 = (double)CONCAT44(uVar3,(uint)local_40);
    } while (uVar3 < (uint)((*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec)) / 0x18));
  }
  piVar9 = DAT_0065b5cc;
  puVar6 = local_4c;
  if (*(int *)(param_1 + 0xe8) == 0) {
    DAT_0065b5cc[0x36] = this[9];
    if (DAT_0065c280 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)FUN_005adb0f(0x98);
      local_58 = (double)CONCAT44(puVar6,(undefined4)local_58);
      local_8 = 0xf;
      DAT_0065c280 = FUN_0058f5d0(puVar6);
      local_8 = 0xffffffff;
    }
    FUN_0058fc90((int)DAT_0065c280);
    puVar6 = local_4c;
    iVar5 = this[0x95];
    *(undefined2 *)((int)local_64 + 6) = *(undefined2 *)(iVar5 + 0xd1);
    *(undefined1 *)(local_64 + 2) = *(undefined1 *)(iVar5 + 0xd3);
    piVar9 = DAT_0065b5cc;
    DAT_0065b3d4 = this;
    if (local_4c != (undefined4 *)0x0) {
      DAT_0065b3d4 = local_4c;
    }
    if (DAT_0065b3d4 == (undefined4 *)0x0) {
      iVar5 = this[0x95];
    }
    else {
      iVar5 = DAT_0065b3d4[0x95];
    }
    piVar19 = DAT_0065b5cc + 0x43;
    *(undefined1 *)(DAT_0065b5cc + 0x35) = *(undefined1 *)(iVar5 + 0xd0);
    piVar16 = this + 2;
    if (piVar19 != piVar16) {
      if (0xf < (uint)this[7]) {
        piVar16 = (int *)*piVar16;
      }
      FUN_00402690(piVar19,piVar16,this[6]);
      piVar9 = DAT_0065b5cc;
    }
    if (piVar9[0x34] != 0) {
      FUN_00591070("WORLD","Vessel \'%s\' (%s) is set up as playable.");
      piVar9 = DAT_0065b5cc;
    }
  }
  iVar5 = *(int *)(param_1 + 0xd4);
  this[0x19] = iVar5;
  if ((*(int *)(this[0x95] + 0x158) == 0) && (*(int *)(this[0x11] + 0x70) != 1)) {
    piVar16 = (int *)(piVar9[0x33] + 0x394 + iVar5 * 4);
    *piVar16 = *piVar16 + 1;
    piVar9 = (int *)(piVar9[0x33] + 0x3a0 + this[0x19] * 4);
    *piVar9 = *piVar9 + 1;
    FUN_00591070("DETAIL","Enemies spawned for team %d: %d");
    piVar9 = DAT_0065b5cc;
    if (*(char *)(param_1 + 0x114) == '\0') goto LAB_0040a71f;
    piVar16 = (int *)(DAT_0065b5cc[0x33] + 0x3b8 + this[0x19] * 4);
    *piVar16 = *piVar16 + 1;
    piVar9 = (int *)(piVar9[0x33] + 0x3ac + this[0x19] * 4);
    *piVar9 = *piVar9 + 1;
    FUN_00591070("DETAIL","Targets spawned for team %d: %d");
    piVar9 = DAT_0065b5cc;
  }
  if (*(char *)(param_1 + 0x114) != '\0') {
    FUN_00591070("DETAIL","Ship \'%s\' is registered as a priority target for team %d");
    puVar11 = this + 0x8e;
    piVar9 = DAT_0065b5cc;
    if ((undefined4 *)(DAT_0065b5cc[0x33] + 0x84) != puVar11) {
      if (0xf < (uint)this[0x93]) {
        puVar11 = (undefined4 *)*puVar11;
      }
      FUN_00402690((undefined4 *)(DAT_0065b5cc[0x33] + 0x84),puVar11,this[0x92]);
      piVar9 = DAT_0065b5cc;
    }
  }
LAB_0040a71f:
  if ((puVar6 != (undefined4 *)0x0) && (*(char *)(piVar9[0x33] + 0x315) != '\0')) {
    iVar5 = puVar6[0x95];
    bVar21 = false;
    if (iVar5 != 0) {
      bVar21 = *(int *)(iVar5 + 0x158) == 1;
    }
    if (bVar21) {
      DAT_0065b3d4 = puVar6;
      *(undefined1 *)(piVar9 + 0x35) = *(undefined1 *)(iVar5 + 0xd0);
    }
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    this[0xaa] = *(int *)(param_1 + 0x110);
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar5 = local_64[3];
    if ((piVar9[0x34] != 0) &&
       (uVar3 = 0, *(int *)(iVar5 + 0x6c) - *(int *)(iVar5 + 0x68) >> 2 != 0)) {
      do {
        FUN_004b6960(*(void **)(*(int *)(iVar5 + 0x68) + uVar3 * 4));
        uVar3 = uVar3 + 1;
        piVar9 = DAT_0065b5cc;
        param_1 = local_70;
      } while (uVar3 < (uint)(*(int *)(iVar5 + 0x6c) - *(int *)(iVar5 + 0x68) >> 2));
    }
    FUN_004b63c0((void *)local_64[3],(void *)piVar9[0x4b],this[8]);
    local_58 = (double)CONCAT44(&stack0xffffff40,(undefined4)local_58);
    iStack_d0 = 0x40a825;
    FUN_00591e00(&stack0xffffff40,"has_%s");
    local_8 = 0x10;
    piVar9 = DAT_0065c274;
    if (DAT_0065c274 == (int *)0x0) {
      local_50 = (int *)FUN_005adb0f(0x30);
      *local_50 = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      piVar9 = local_50 + 3;
      local_8 = CONCAT31(local_8._1_3_,0x12);
      *piVar9 = 0;
      local_50[4] = 0;
      local_44 = piVar9;
      iVar5 = FUN_004136c0();
      *piVar9 = iVar5;
      DAT_0065c274 = local_50;
      local_50[9] = 0;
      local_50[10] = 0xf;
      *(undefined1 *)(local_50 + 5) = 0;
      piVar9 = local_50;
    }
    local_8 = 0xffffffff;
    FUN_004a0ee0(piVar9,pbVar23);
  }
  uVar3 = 0;
  puVar6 = FUN_00412870();
  pbVar23 = local_6c;
  if ((int)(puVar6[0x10] - puVar6[0xf]) >> 2 != 0) {
    do {
      puVar6 = FUN_00412870();
      iVar5 = *(int *)(uVar3 * 4 + puVar6[0xf]);
      pbVar24 = pbVar23;
      if (0xf < *(uint *)(pbVar23 + 0x14)) {
        pbVar24 = *(byte **)pbVar23;
      }
      pbVar17 = (byte *)(iVar5 + 4);
      if (0xf < *(uint *)(iVar5 + 0x18)) {
        pbVar17 = *(byte **)(iVar5 + 4);
      }
      uVar4 = FUN_004031f0(pbVar17,*(uint *)(iVar5 + 0x14),pbVar24,*(uint *)(pbVar23 + 0x10));
      if ((char)uVar4 != '\0') {
        puVar11 = FUN_00412870();
        puVar6 = (undefined4 *)this[0xdb];
        puVar11 = (undefined4 *)(puVar11[0xf] + uVar3 * 4);
        if ((undefined4 *)this[0xdc] == puVar6) {
          FUN_00414080(this + 0xda,puVar6,puVar11);
        }
        else {
          *puVar6 = *puVar11;
          this[0xdb] = this[0xdb] + 4;
        }
      }
      uVar3 = uVar3 + 1;
      puVar6 = FUN_00412870();
      param_1 = local_70;
    } while (uVar3 < (uint)((int)(puVar6[0x10] - puVar6[0xf]) >> 2));
  }
  iVar5 = *(int *)(param_1 + 0x23c);
  local_5c = (byte ***)0x0;
  iVar10 = *(int *)(param_1 + 0x240) - iVar5;
  iVar15 = iVar10 >> 0x1f;
  if (iVar10 / 0x18 + iVar15 != iVar15) {
    local_4c = (undefined4 *)0x0;
    do {
      FUN_004024e0(local_88,(undefined4 *)(iVar5 + (int)local_4c));
      local_44 = DAT_0065b5cc;
      local_8 = 0x13;
      ppppbVar13 = local_88;
      if (0xf < local_74) {
        ppppbVar13 = (byte ****)local_88[0];
      }
      ppppbVar12 = local_88;
      if (0xf < local_74) {
        ppppbVar12 = (byte ****)local_88[0];
      }
      ppppbVar20 = local_88;
      if (0xf < local_74) {
        ppppbVar20 = (byte ****)local_88[0];
      }
      iVar5 = (int)((int)ppppbVar12 + local_78) - (int)ppppbVar20;
      if ((byte ****)((int)ppppbVar12 + local_78) < ppppbVar20) {
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        local_40._4_4_ = (undefined4 *)((int)ppppbVar13 - (int)ppppbVar20);
        iVar15 = 0;
        do {
          iVar10 = toupper((int)(char)*(byte *)ppppbVar20);
          ppppbVar20 = (byte ****)((int)ppppbVar20 + 1);
          iVar15 = iVar15 + 1;
          *(byte *)((int)ppppbVar20 + (int)local_40._4_4_ + -1) = (byte)iVar10;
          param_1 = local_70;
          this = local_68;
        } while (iVar15 != iVar5);
      }
      pppbVar2 = local_88[0];
      local_40 = (double)(ulonglong)(uint)local_40;
      piVar9 = (int *)*local_44;
      local_6c = (byte *)(local_44[1] - (int)piVar9 >> 2);
      if (local_6c != (byte *)0x0) {
        do {
          iVar5 = *piVar9;
          ppppbVar13 = local_88;
          if (0xf < local_74) {
            ppppbVar13 = (byte ****)pppbVar2;
          }
          pbVar23 = (byte *)(iVar5 + 0x38);
          if (0xf < *(uint *)(iVar5 + 0x4c)) {
            pbVar23 = *(byte **)(iVar5 + 0x38);
          }
          local_64 = piVar9;
          uVar3 = FUN_004031f0(pbVar23,*(uint *)(iVar5 + 0x48),(byte *)ppppbVar13,local_78);
          if ((char)uVar3 != '\0') {
            local_44 = *(int **)(*local_44 + (int)local_40._4_4_ * 4);
            local_8 = 0xffffffff;
            if (local_74 < 0x10) goto LAB_0040aab8;
            ppppbVar13 = (byte ****)pppbVar2;
            if ((0xfff < local_74 + 1) &&
               (ppppbVar13 = (byte ****)pppbVar2[-1],
               (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar13)))) goto LAB_00409f43;
            FUN_005adb3f(ppppbVar13);
            goto LAB_0040aab8;
          }
          pbVar23 = (byte *)((int)local_40._4_4_ + 1);
          piVar9 = local_64 + 1;
          local_40 = (double)CONCAT44(pbVar23,(uint)local_40);
          local_64 = piVar9;
        } while (pbVar23 < local_6c);
      }
      local_8 = 0xffffffff;
      if (0xf < local_74) {
        ppppbVar13 = (byte ****)pppbVar2;
        if ((0xfff < local_74 + 1) &&
           (ppppbVar13 = (byte ****)pppbVar2[-1],
           (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar13)))) goto LAB_00409f43;
        FUN_005adb3f(ppppbVar13);
      }
      local_44 = (int *)0x0;
LAB_0040aab8:
      local_88[0] = (byte ***)((uint)local_88[0] & 0xffffff00);
      local_74 = 0xf;
      local_78 = 0;
      pfVar14 = (float *)FUN_005adb0f(8);
      piVar9 = DAT_0065b5cc;
      local_58 = (double)CONCAT44(pfVar14,(undefined4)local_58);
      local_6c = (byte *)*local_44;
      *pfVar14 = 100.0;
      uVar3 = 0;
      uVar4 = piVar9[1] - *piVar9 >> 2;
      if (uVar4 != 0) {
        local_50 = (int *)*piVar9;
        piVar9 = local_50;
        do {
          param_1 = local_70;
          if (*(byte **)*piVar9 == local_6c) {
            fVar18 = (float)local_50[uVar3];
            goto LAB_0040ab1e;
          }
          uVar3 = uVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar3 < uVar4);
      }
      fVar18 = 0.0;
LAB_0040ab1e:
      pfVar14[1] = fVar18;
      FUN_005074d0((void *)this[0x7e],pfVar14);
      iVar5 = *(int *)(param_1 + 0x23c);
      local_5c = (byte ***)((int)local_5c + 1);
      local_4c = local_4c + 6;
    } while (local_5c < (byte ****)((*(int *)(param_1 + 0x240) - iVar5) / 0x18));
  }
  if ((*(char *)(this + 0x8d) != '\0') && (*(char *)(DAT_0065b5cc[0x33] + 0x30c) != '\0')) {
    *(undefined1 *)(this[0x10] + 0x34) = 1;
  }
  FUN_00502600(this[0x11]);
  iStack_d0 = 0x40ac35;
  FUN_00591070("WORLD","Spawned ship: \'%s\' (team %d), %s, registered as %s, at location %f, %f");
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0040ac60(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return;
  default:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    return;
  }
}


uint FUN_0040acc0(int *param_1,char param_2)

{
  float *pfVar1;
  bool bVar2;
  uint3 uVar3;
  int *this;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  int *in_XMM2_Da;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005aff0c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_XMM2_Da;
  (**(code **)(*param_1 + 0x14))();
  if (DAT_0065c284 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_005adb0f(0x5c);
    local_8 = 0;
    DAT_0065c284 = FUN_0055b490(puVar4);
    local_8 = 0xffffffff;
  }
  FUN_0055be10((int)DAT_0065c284);
  iVar9 = param_1[0x10];
  if (*(int *)(iVar9 + 0x20) != 0) {
    piVar7 = (int *)(*(int *)(iVar9 + 0x20) + 0x3c);
    iVar9 = 8;
    do {
      iVar6 = *piVar7;
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + 0x3c5) == '\0') {
          if ((*(char *)(iVar6 + 0x3c4) == '\0') && (*(char *)(iVar6 + 0x3bc) == '\0')) {
            in_XMM2_Da = *(int **)(iVar6 + 0x3c0);
            if ((float)in_XMM2_Da != -1.0) goto LAB_0040ada3;
            *(undefined4 *)(iVar6 + 0xdc) = 0;
          }
          else {
            in_XMM2_Da = (int *)(float)*(int *)(*(int *)(iVar6 + 0x254) + 200);
            *(int **)(iVar6 + 0xdc) = in_XMM2_Da;
          }
        }
        else {
LAB_0040ada3:
          in_XMM2_Da = (int *)(float)*(int *)(*(int *)(iVar6 + 0x254) + 0xc0);
          *(int **)(iVar6 + 0xdc) = in_XMM2_Da;
        }
      }
      piVar7 = piVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = param_1[0x10];
  }
  piVar7 = param_1 + 0x5e;
  param_1 = (int *)0x0;
  if ((*piVar7 != 0) && (this[0x35] == 3)) {
    if (this[0x3e] != 2) {
      iVar6 = *(int *)(*piVar7 + 0x254);
      in_XMM2_Da = (int *)(float)*(int *)(iVar6 + 0x15c);
      iVar8 = (int)((((float)in_XMM2_Da - (float)this[0x42]) / (float)in_XMM2_Da) * 100.0);
      if (this[0x3e] == 1) {
        bVar2 = *(int *)(iVar6 + 0x164) <= iVar8;
      }
      else {
        bVar2 = iVar8 < *(int *)(iVar6 + 0x168);
      }
      if (!bVar2) goto LAB_0040ae59;
    }
    FUN_00521950(iVar9);
  }
LAB_0040ae59:
  uVar10 = 0;
  iVar6 = *(int *)(iVar9 + 0x3c);
  if (*(int *)(iVar9 + 0x40) - iVar6 >> 2 != 0) {
    do {
      FUN_004aedc0(*(void **)(iVar6 + uVar10 * 4),(undefined1 *)this);
      if (0.0 < (float)in_XMM2_Da) {
        in_XMM2_Da = (int *)((float)in_XMM2_Da + (float)param_1);
        param_1 = in_XMM2_Da;
      }
      uVar10 = uVar10 + 1;
      iVar6 = *(int *)(iVar9 + 0x3c);
    } while (uVar10 < (uint)(*(int *)(iVar9 + 0x40) - iVar6 >> 2));
  }
  piVar7 = param_1;
  if ((*(char *)(iVar9 + 0x34) != '\0') && (piVar7 = (int *)0x43c80000, 400.0 <= (float)param_1)) {
    piVar7 = param_1;
  }
  if (*(int *)(this[0x95] + 0x158) != 4) {
    if ((char)this[0x34] == '\0') {
      this[0x37] = 0;
    }
    else {
      this[0x37] = (int)(float)*(int *)(this[0x95] + 200);
    }
  }
  fVar12 = 0.0;
  iVar9 = *(int *)(this[0x10] + 0x20);
  if (iVar9 != 0) {
    iVar6 = *(int *)(iVar9 + 0x3c);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = *(float *)(iVar6 + 0xdc) + 0.0;
    }
    iVar6 = *(int *)(iVar9 + 0x40);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar6 + 0xdc);
    }
    iVar6 = *(int *)(iVar9 + 0x44);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar6 + 0xdc);
    }
    iVar6 = *(int *)(iVar9 + 0x48);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar6 + 0xdc);
    }
    iVar6 = *(int *)(iVar9 + 0x4c);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar6 + 0xdc);
    }
    iVar6 = *(int *)(iVar9 + 0x50);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar6 + 0xdc);
    }
    iVar6 = *(int *)(iVar9 + 0x54);
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar6 + 0xdc);
    }
    iVar9 = *(int *)(iVar9 + 0x58);
    if ((iVar9 != 0) && (*(char *)(iVar9 + 0x3c4) == '\0')) {
      fVar12 = fVar12 + *(float *)(iVar9 + 0xdc);
    }
  }
  fVar12 = (float)this[0x37] + (float)piVar7 + fVar12;
  this[0x38] = (int)fVar12;
  if (this[0x35] == 2) {
    iVar9 = this[0x3b];
    if (iVar9 == 0) {
      fVar12 = fVar12 * 0.7;
    }
    else if (iVar9 == 1) {
      fVar12 = fVar12 * 0.2;
    }
    else {
      if (iVar9 != 2) goto LAB_0040b01f;
      fVar12 = fVar12 * 0.9;
    }
    this[0x38] = (int)fVar12;
  }
LAB_0040b01f:
  FUN_0050cd20((int)this);
  if (param_2 != '\0') {
    FUN_0050d2e0((undefined1 *)this);
  }
  uVar10 = this[0x35];
  if ((uVar10 == 1) || (uVar10 == 0)) {
    local_20 = 0;
    local_1c = 0;
    local_8 = 1;
    fVar12 = cocos2d::Vec2::getDistance((Vec2 *)(this + 0x46),(Vec2 *)&local_20);
    local_8 = 0xffffffff;
    if (0.0 < fVar12) {
      *(double *)(this + 10) =
           (double)((float)local_14 * (float)this[0x46]) + *(double *)(this + 10);
      *(double *)(this + 0xc) =
           (double)((float)this[0x47] * (float)local_14) + *(double *)(this + 0xc);
    }
    iVar9 = this[0x71];
    iVar6 = this[0x72] - iVar9 >> 5;
    if ((iVar6 != 0) && (*(int *)(iVar6 * 0x20 + -0xc + iVar9) != 0)) {
      local_18 = (float)*(double *)(this + 10);
      local_14 = (int *)(float)*(double *)(this + 0xc);
      if (iVar6 == 0) {
        local_28 = 0xc61c3c00;
        local_24 = 0xc61c3c00;
      }
      else {
        local_24 = *(undefined4 *)(iVar6 * 0x20 + -0x14 + iVar9);
        local_28 = *(undefined4 *)(iVar6 * 0x20 + -0x18 + iVar9);
      }
      local_8 = 3;
      fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_18);
      fVar12 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
      local_8 = 0xffffffff;
      iVar9 = this[0x71];
      iVar6 = this[0x72] - iVar9 >> 5;
      fVar13 = (1.5 - fVar13 * 0.5 * fVar12 * fVar12) * fVar12 * fVar13;
      if (iVar6 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar6 * 0x20 + -0xc + iVar9);
      }
      if (*(int *)(iVar8 + 0x30) == 0) {
        if (iVar6 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar6 * 0x20 + -0xc + iVar9);
        }
        iVar6 = *(int *)(iVar9 + 0x54);
        if (((iVar6 != 1) && ((iVar6 == 2 || (iVar6 == 0)))) && (fVar13 <= 0.4)) {
          FUN_00518870((int)this);
          iVar6 = this[0x10];
          if (*(int *)(iVar6 + 0x10) != 0) {
            *(undefined1 *)(*(int *)(iVar6 + 0x10) + 0x62) = 0;
            iVar6 = this[0x10];
          }
          if (*(int *)(iVar6 + 0x18) != 0) {
            *(undefined1 *)(*(int *)(iVar6 + 0x18) + 0x62) = 0;
          }
          iVar6 = FUN_005177d0((int)this);
          this[0x5b] = iVar6;
          if ((char)this[0x8d] != '\0') {
            FUN_00527550((int *)this[0x89],1,"Entering %s orbit around %s");
          }
          this[0x3a] = 1;
          this[0x3c] = this[0x3b];
          this[0x3d] = 0x41000000;
          FUN_005179b0((int)this);
          this[0x72] = this[0x71];
          *(undefined8 *)(this + 10) = *(undefined8 *)(iVar9 + 0x20);
          *(undefined8 *)(this + 0xc) = *(undefined8 *)(iVar9 + 0x28);
          this[0x35] = 2;
          this[0xb0] = 0;
          this[0xb1] = 0;
          uVar10 = FUN_00591070(&DAT_005cdc70,"Ship %s is entering orbit of %s");
          goto LAB_0040b5dc;
        }
      }
      else {
        if (iVar6 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar6 * 0x20 + -0xc + iVar9);
        }
        if (*(int *)(iVar8 + 0x30) == 1) {
          if ((iVar6 == 0) || (iVar9 = *(int *)(iVar6 * 0x20 + -0xc + iVar9), iVar9 == 0)) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)(iVar9 + -8);
          }
          iVar9 = *(int *)(puVar4[0x95] + 0x158);
          if ((((iVar9 == 1) || (iVar9 == 2)) || (iVar9 == 3)) &&
             ((fVar12 = 0.4, fVar13 <= 0.4 && ((char)this[0x8d] != '\0')))) {
            FUN_00403cb0((int)this);
            if (fVar12 <= 0.4) {
              *(undefined8 *)(this + 10) = *(undefined8 *)(puVar4 + 10);
              *(undefined8 *)(this + 0xc) = *(undefined8 *)(puVar4 + 0xc);
              FUN_00518870((int)this);
              iVar9 = this[0x10];
              if (*(int *)(iVar9 + 0x10) != 0) {
                *(undefined1 *)(*(int *)(iVar9 + 0x10) + 0x62) = 0;
                iVar9 = this[0x10];
              }
              if (*(int *)(iVar9 + 0x18) != 0) {
                *(undefined1 *)(*(int *)(iVar9 + 0x18) + 0x62) = 0;
              }
              uVar10 = FUN_00511dc0(this,puVar4);
              goto LAB_0040b5dc;
            }
            if (*(double *)(this + 0x4e) <= (double)fVar13 &&
                (double)fVar13 != *(double *)(this + 0x4e)) {
              FUN_00403cb0((int)this);
              FUN_00591070(&DAT_005cdc70,"Speed too high to dock: %.2fgm");
              FUN_005179b0((int)this);
              this[0x72] = this[0x71];
              FUN_00517400((int)this);
              FUN_00527550((int *)this[0x89],4,"DOCKING FAILURE: Speed too high");
            }
          }
        }
      }
    }
    auVar11 = ZEXT416((uint)(float)*(double *)(this + 0xc));
    iVar9 = FUN_004a84f0(this[8],(float)*(double *)(this + 10),(float)*(double *)(this + 0xc),
                         1.4013e-45);
    uVar10 = 0;
    if (iVar9 != 0) {
      uVar15 = CONCAT44(iVar9,0x40b46f);
      FUN_0050b2e0();
      uVar10 = (int)auVar11._0_8_ + 4;
      if (uVar10 < 9) {
        iVar9 = *(int *)(iVar9 + 0x54);
        if ((iVar9 == 0) || (iVar9 == 2)) {
          uVar14 = 0x41c80000;
LAB_0040b4aa:
          uVar15 = 0;
          (**(code **)(*this + 0xc))((int)auVar11._0_8_,uVar14);
        }
        else if (iVar9 == 1) {
          uVar14 = 0x42a00000;
          goto LAB_0040b4aa;
        }
        rand();
        FUN_00593000((Vec2 *)&stack0xffffffac);
        FUN_004a8850(this + 2,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
        FUN_0050b2e0();
        FUN_005172c0((int)this);
        rand();
        FUN_00403cb0((int)this);
        FUN_00518870((int)this);
        uVar10 = FUN_00591070(&DAT_005cdc70,"Ship %s bounced off object %s");
        if ((char)this[0x8d] != '\0') {
          uVar10 = FUN_00527550((int *)this[0x89],3,"WARNING: Bounced off atmosphere of %s");
        }
      }
    }
  }
LAB_0040b5dc:
  fVar12 = (float)this[0xc4];
  uVar5 = (undefined2)(uVar10 >> 0x10);
  uVar3 = CONCAT21(uVar5,(fVar12 == 0.0) << 6 | NAN(fVar12) << 2 | 2U | fVar12 < 0.0);
  if (fVar12 == 0.0) {
    pfVar1 = (float *)(this + 0xc5);
    uVar3 = CONCAT21(uVar5,(fVar12 == *pfVar1) << 6 | (NAN(fVar12) || NAN(*pfVar1)) << 2 | 2U |
                           fVar12 < *pfVar1);
    if (fVar12 == *pfVar1) goto LAB_0040b602;
    uVar10 = CONCAT31(uVar3,1);
  }
  else {
LAB_0040b602:
    uVar10 = (uint)uVar3 << 8;
  }
  if ((char)uVar10 != '\0') {
    iVar9 = this[0x5c];
    uVar10 = 0;
    if (iVar9 != 0) {
      local_30 = (float)*(double *)(this + 10);
      local_2c = (float)*(double *)(this + 0xc);
      local_38 = (float)*(double *)(iVar9 + 0x28);
      local_34 = (float)*(double *)(iVar9 + 0x30);
      local_8 = 5;
      fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&local_30);
      fVar12 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
      local_8 = 0xffffffff;
      bVar2 = (1.5 - fVar13 * 0.5 * fVar12 * fVar12) * fVar12 * fVar13 <= 2.0;
      uVar10 = CONCAT31((uint3)((uint)fVar13 >> 9),bVar2);
      if (bVar2) {
        uVar10 = this[0x5c];
        this[0x5d] = uVar10;
        this[0x7c] = 0;
        this[0x5c] = 0;
        if ((char)this[0x8d] != '\0') {
          uVar10 = *(uint *)(uVar10 + 0x60);
          if (uVar10 == 1) {
            pcVar16 = "Moored to cargo pods.";
          }
          else if (uVar10 == 0) {
            pcVar16 = "Moored to free-floating debris.";
          }
          else {
            if (uVar10 != 4) goto LAB_0040b723;
            pcVar16 = "Moored to derelict space craft.";
          }
          uVar10 = FUN_00527550((int *)this[0x89],2,pcVar16);
        }
      }
    }
  }
LAB_0040b723:
  if (((float)this[0xc4] <= 0.0) || (uVar10 = this[0x5d], uVar10 == 0)) goto LAB_0040b785;
  if ((char)this[0x8d] != '\0') {
    uVar10 = *(uint *)(uVar10 + 0x60);
    if (uVar10 == 1) {
      pcVar16 = "Unmoored from cargo pods.";
    }
    else if (uVar10 == 0) {
      pcVar16 = "Unmoored from free-floating debris.";
    }
    else {
      if (uVar10 != 4) goto LAB_0040b77b;
      pcVar16 = "Unmoored from derelict space craft.";
    }
    uVar10 = FUN_00527550((int *)this[0x89],1,pcVar16);
  }
LAB_0040b77b:
  this[0x5d] = 0;
LAB_0040b785:
  ExceptionList = local_10;
  return uVar10 & 0xffffff00;
}


uint FUN_0040b7a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  Vec2 *this;
  byte *pbVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  int local_2c;
  float local_28;
  float local_24;
  Vec2 local_20 [4];
  int local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005aff64;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar4 = false;
  bVar3 = false;
  piVar6 = DAT_0065b5cc;
  if (DAT_0065b5cc[0x34] != 0) {
    puVar5 = FUN_004125d0();
    if (puVar5[0x1b] == 0) {
      fVar14 = (float)DAT_0065b5cc[0x34];
      local_14 = fVar14;
      puVar5 = FUN_00412b00();
      local_24 = 0.0;
      iVar11 = puVar5[2];
      fVar9 = (float)((puVar5[3] - iVar11) / 0xc);
      local_1c = iVar11;
      local_18 = fVar9;
      if (fVar9 != 0.0) {
        local_2c = 0;
        do {
          iVar10 = *(int *)(iVar11 + 4 + local_2c);
          if ((iVar10 != 0) && (iVar10 == *(int *)((int)fVar14 + 0x24))) {
            piVar1 = *(int **)(iVar10 + 0xd0);
            iVar11 = local_1c;
            for (piVar6 = *(int **)(iVar10 + 0xcc); local_1c = iVar11, piVar6 != piVar1;
                piVar6 = piVar6 + 1) {
              if ((*(int *)(*piVar6 + 0x44) != 0) &&
                 (iVar11 = *(int *)(*(int *)(*piVar6 + 0x44) + 0xd0), iVar11 != 0)) {
                pbVar8 = (byte *)(iVar11 + 8);
                if (0xf < *(uint *)(iVar11 + 0x1c)) {
                  pbVar8 = *(byte **)(iVar11 + 8);
                }
                uVar7 = FUN_004031f0(pbVar8,*(uint *)(iVar11 + 0x18),(byte *)"Piracy",6);
                if (((((char)uVar7 != '\0') && (*(char *)(iVar11 + 0x3d) != '\0')) &&
                    (*(int *)(iVar11 + 0x48) != 0)) &&
                   ((fVar14 = *(float *)(*(int *)(iVar11 + 0x48) + 0x130), fVar14 != 0.0 &&
                    (fVar14 == local_14)))) {
                  FUN_00591070("DETAIL","Time Compression cancelled: Pirate threatened us");
                  piVar6 = FUN_00402690(param_1,"Time Compression cancelled: pirate threat detected"
                                        ,0x32);
                  ExceptionList = local_10;
                  return (uint)piVar6 & 0xffffff00;
                }
              }
              fVar9 = local_18;
              fVar14 = local_14;
              iVar11 = local_1c;
            }
          }
          local_24 = (float)((int)local_24 + 1);
          local_2c = local_2c + 0xc;
        } while ((uint)local_24 < (uint)fVar9);
      }
      iVar11 = DAT_0065b5cc[0x34];
      if (*(float *)(iVar11 + 0x54) != -1.0) {
        FUN_00402690(param_1,"Time Compression cancelled: Jump drive engaged",0x2e);
        uVar7 = FUN_00591070("DETAIL","Time Compression cancelled: Jump drive engaged");
        ExceptionList = local_10;
        return uVar7 & 0xffffff00;
      }
      if ((*(int *)(iVar11 + 0x184) != 0) && (*(char *)(*(int *)(iVar11 + 0x184) + 4) != '\0')) {
        FUN_00402690(param_1,"Time Compression cancelled: entering hazard",0x2b);
        uVar7 = FUN_00591070("DETAIL","Time Compression cancelled: Inside hazard");
        ExceptionList = local_10;
        return uVar7 & 0xffffff00;
      }
      if (iVar11 != DAT_0065b3d4) {
        uVar7 = FUN_00591070("DETAIL",
                             "Time Compression cancelled: Boarded a space station or other ship.");
        ExceptionList = local_10;
        return uVar7 & 0xffffff00;
      }
      if (*(int *)(iVar11 + 0xd4) == 3) {
        param_1[4] = 0;
        if (0xf < (uint)param_1[5]) {
          param_1 = (undefined4 *)*param_1;
        }
        *(undefined1 *)param_1 = 0;
        uVar7 = FUN_00591070("DETAIL","Time Compression cancelled: Docked or docking.");
        ExceptionList = local_10;
        return uVar7 & 0xffffff00;
      }
      uVar12 = 0;
      iVar10 = *(int *)(iVar11 + 0x214);
      uVar7 = 0;
      if (*(int *)(iVar11 + 0x218) - iVar10 >> 2 != 0) {
        do {
          iVar2 = *(int *)(iVar10 + uVar12 * 4);
          if (((*(int *)(iVar2 + 0xe0) == 0) && (*(float *)(iVar2 + 0x118) == 0.0)) &&
             (iVar2 = *(int *)(iVar2 + 0x130), iVar2 != 0)) {
            if (*(char *)(*(int *)(iVar2 + 0x40) + 0x34) != '\0') {
              bVar13 = false;
              if (*(int *)(iVar2 + 0x254) != 0) {
                bVar13 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158) == 4;
              }
              if ((!bVar13) || (*(int *)(iVar2 + 0x39c) == iVar11)) goto LAB_0040bb94;
            }
            local_28 = (float)*(double *)(iVar11 + 0x28);
            local_24 = (float)*(double *)(iVar11 + 0x30);
            local_8 = 0;
            this = FUN_00508ff0(*(void **)(iVar10 + uVar12 * 4),local_20);
            local_8 = 1;
            bVar4 = true;
            bVar3 = true;
            fVar14 = cocos2d::Vec2::getDistanceSq(this,(Vec2 *)&local_28);
            local_14 = (float)(0x5f3759df - ((uint)fVar14 >> 1));
            if (80.0 <= (1.5 - fVar14 * 0.5 * local_14 * local_14) * local_14 * fVar14)
            goto LAB_0040bb94;
            bVar13 = true;
          }
          else {
LAB_0040bb94:
            bVar13 = false;
          }
          if (bVar3) {
            bVar3 = false;
          }
          local_8 = 0xffffffff;
          if (bVar4) {
            bVar4 = false;
          }
          if (bVar13) {
            FUN_00402690(param_1,"Time Compression cancelled: threatening vessel detected nearby",
                         0x3e);
            uVar7 = FUN_00591070("DETAIL","Time Compression cancelled: can detect non-IFF threat");
            ExceptionList = local_10;
            return uVar7 & 0xffffff00;
          }
          uVar12 = uVar12 + 1;
          iVar10 = *(int *)(iVar11 + 0x214);
          uVar7 = *(int *)(iVar11 + 0x218) - iVar10 >> 2;
        } while (uVar12 < uVar7);
      }
      ExceptionList = local_10;
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
    FUN_00591070("DETAIL","Time Compression cancelled: Being hailed or hailing");
    piVar6 = FUN_00402690(param_1,"Time Compression cancelled: communication in process",0x34);
  }
  ExceptionList = local_10;
  return (uint)piVar6 & 0xffffff00;
}


void FUN_0040bc20(void)

{
  basic_string<> *pbVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void **ppvVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  basic_string<> *pbVar14;
  byte *pbVar15;
  int *piVar16;
  int *piVar17;
  bool bVar18;
  void *in_stack_ffffffb8;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005aff90;
  piVar2 = *(int **)(DAT_0065b5cc + 0xa0);
  ppvVar6 = &local_10;
  local_10 = ExceptionList;
  for (piVar17 = *(int **)(DAT_0065b5cc + 0x9c); ExceptionList = ppvVar6, piVar17 != piVar2;
      piVar17 = piVar17 + 1) {
    iVar3 = *piVar17;
    if (*(char *)(iVar3 + 0x18) == '\0') {
      if ((*(char *)(iVar3 + 0x19) == '\0') && (*(int *)(DAT_0065b5cc + 0xd8) != 0)) {
        FUN_004024e0(&stack0xffffffb8,(undefined4 *)(iVar3 + 0xa8));
        local_8 = 1;
        puVar8 = FUN_00412df0();
        local_8 = 0xffffffff;
        bVar7 = FUN_004a1150(puVar8,in_stack_ffffffb8);
        if (bVar7 != 0) {
          *(undefined2 *)(iVar3 + 0x18) = 0x101;
          FUN_00591070("WORLD","State %s is now enabled.");
          pbVar15 = (byte *)(iVar3 + 0x90);
          if (0xf < *(uint *)(iVar3 + 0xa4)) {
            pbVar15 = *(byte **)pbVar15;
          }
          uVar9 = FUN_004031f0(pbVar15,*(uint *)(iVar3 + 0xa0),(byte *)&PTR_005ce008,0);
          if ((char)uVar9 == '\0') {
            FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),4,&DAT_005ce00c);
          }
          pbVar1 = (basic_string<> *)(iVar3 + 0x24);
          pbVar14 = pbVar1;
          if (0xf < *(uint *)(iVar3 + 0x38)) {
            pbVar14 = *(basic_string<> **)pbVar1;
          }
          uVar9 = FUN_004031f0((byte *)pbVar14,*(uint *)(iVar3 + 0x34),(byte *)&PTR_005ce008,0);
          if (((char)uVar9 == '\0') && (*(char *)(iVar3 + 0x20) != '\0')) {
            uVar11 = 0;
            piVar16 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
            piVar4 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0);
            uVar9 = (uint)((int)piVar4 + (3 - (int)piVar16)) >> 2;
            if (piVar4 < piVar16) {
              uVar9 = 0;
            }
            if (uVar9 != 0) {
              do {
                bVar18 = false;
                iVar3 = *(int *)(*piVar16 + 0x254);
                if (iVar3 != 0) {
                  bVar18 = *(int *)(iVar3 + 0x158) == 0;
                }
                if (((bVar18) && (iVar3 = *(int *)(*piVar16 + 0x44), iVar3 != 0)) &&
                   (*(int *)(iVar3 + 0x70) == 8)) {
                  pbVar15 = (byte *)(iVar3 + 0x14);
                  if (0xf < *(uint *)(iVar3 + 0x28)) {
                    pbVar15 = *(byte **)(iVar3 + 0x14);
                  }
                  uVar12 = FUN_004031f0(pbVar15,*(uint *)(iVar3 + 0x24),(byte *)&PTR_005ce008,0);
                  if ((char)uVar12 != '\0') {
                    std::basic_string<>::operator=((basic_string<> *)(iVar3 + 0x14),pbVar1);
                  }
                }
                uVar11 = uVar11 + 1;
                piVar16 = piVar16 + 1;
              } while (uVar11 != uVar9);
            }
          }
        }
      }
    }
    else {
      FUN_004024e0(&stack0xffffffb8,(undefined4 *)(iVar3 + 0xc0));
      local_8 = 0;
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      bVar7 = FUN_004a1150(puVar8,in_stack_ffffffb8);
      if (bVar7 != 0) {
        *(undefined1 *)(iVar3 + 0x18) = 0;
        FUN_00591070("WORLD","State %s is now disabled.");
        pbVar15 = (byte *)(iVar3 + 0x24);
        pbVar10 = pbVar15;
        if (0xf < *(uint *)(iVar3 + 0x38)) {
          pbVar10 = *(byte **)pbVar15;
        }
        uVar9 = FUN_004031f0(pbVar10,*(uint *)(iVar3 + 0x34),(byte *)&PTR_005ce008,0);
        if (((char)uVar9 == '\0') && (*(char *)(iVar3 + 0x20) != '\0')) {
          local_18 = 0;
          piVar16 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
          piVar4 = *(int **)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0);
          uVar9 = (uint)((int)piVar4 + (3 - (int)piVar16)) >> 2;
          if (piVar4 < piVar16) {
            uVar9 = 0;
          }
          if (uVar9 != 0) {
            do {
              bVar18 = false;
              iVar5 = *(int *)(*piVar16 + 0x254);
              if (iVar5 != 0) {
                bVar18 = *(int *)(iVar5 + 0x158) == 0;
              }
              if (((bVar18) && (iVar5 = *(int *)(*piVar16 + 0x44), iVar5 != 0)) &&
                 (*(int *)(iVar5 + 0x70) == 8)) {
                pbVar10 = pbVar15;
                if (0xf < *(uint *)(iVar3 + 0x38)) {
                  pbVar10 = *(byte **)pbVar15;
                }
                pbVar13 = (byte *)(iVar5 + 0x14);
                if (0xf < *(uint *)(iVar5 + 0x28)) {
                  pbVar13 = *(byte **)(iVar5 + 0x14);
                }
                uVar11 = FUN_004031f0(pbVar13,*(uint *)(iVar5 + 0x24),pbVar10,
                                      *(uint *)(iVar3 + 0x34));
                if ((char)uVar11 != '\0') {
                  FUN_00402690((void *)(iVar5 + 0x14),&PTR_005ce008,0);
                }
              }
              piVar16 = piVar16 + 1;
              local_18 = local_18 + 1;
            } while (local_18 != uVar9);
          }
        }
      }
    }
    ppvVar6 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0040bf70(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  float in_XMM1_Da;
  float fVar6;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005affdc;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x62) != '\0') {
    fVar6 = in_XMM1_Da * 24.0 + *(float *)(param_1 + 0x17c);
    *(float *)(param_1 + 0x17c) = fVar6;
    if (60.0 <= fVar6) {
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      *(float *)(param_1 + 0x17c) = fVar6 - 60.0;
      if (0x3b < *(int *)(param_1 + 0x180)) {
        *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
        *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -0x3c;
        if (0x17 < *(int *)(param_1 + 0x184)) {
          *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
          *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + -0x18;
          if (*(int *)(&DAT_005de00c + *(int *)(param_1 + 0x18c) * 4) < *(int *)(param_1 + 0x188)) {
            iVar1 = *(int *)(param_1 + 0x18c) + 1;
            *(undefined4 *)(param_1 + 0x188) = 1;
            *(int *)(param_1 + 0x18c) = iVar1;
            if (0xb < iVar1) {
              *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
              *(undefined4 *)(param_1 + 0x18c) = 0;
            }
          }
          FUN_00591e00((undefined1 *)local_2c,"%02d-%02d-%02d %d:%d");
          local_8 = 0;
          FUN_00591070(&DAT_005cdc70,"It\'s %%s");
          local_8 = 0xffffffff;
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
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          piVar2 = (int *)FUN_00412490();
          uVar5 = 0;
          if (piVar2[1] - *piVar2 >> 2 != 0) {
            do {
              FUN_004a0a10(*(int *)(*piVar2 + uVar5 * 4));
              uVar5 = uVar5 + 1;
            } while (uVar5 < (uint)(piVar2[1] - *piVar2 >> 2));
          }
          if (DAT_0065c288 == (int *)0x0) {
            puVar3 = (undefined4 *)FUN_005adb0f(300);
            local_8 = 1;
            DAT_0065c288 = (int *)FUN_00485f60(puVar3);
            local_8 = 0xffffffff;
          }
          FUN_00489ef0(DAT_0065c288);
          if (DAT_0065c288 == (int *)0x0) {
            puVar3 = (undefined4 *)FUN_005adb0f(300);
            local_8 = 2;
            DAT_0065c288 = (int *)FUN_00485f60(puVar3);
            local_8 = 0xffffffff;
          }
          uVar5 = 0;
          iVar1 = *(int *)(DAT_0065b5cc + 0x3c);
          if (*(int *)(DAT_0065b5cc + 0x40) - iVar1 >> 2 != 0) {
            do {
              FUN_005203d0(*(int *)(iVar1 + uVar5 * 4));
              FUN_00520500(*(int *)(*(int *)(DAT_0065b5cc + 0x3c) + uVar5 * 4));
              uVar5 = uVar5 + 1;
              iVar1 = *(int *)(DAT_0065b5cc + 0x3c);
            } while (uVar5 < (uint)(*(int *)(DAT_0065b5cc + 0x40) - iVar1 >> 2));
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
