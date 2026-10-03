#include "../ois_server.exe.h"


void FUN_0040c1f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *this;
  int *this_00;
  int *piVar9;
  uint *puVar10;
  void *pvVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  size_t _Size;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  float fVar22;
  float in_XMM1_Da;
  void *local_38;
  int *piStack_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar12 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0036;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = DAT_0065b444;
  local_18 = in_XMM1_Da;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0065c310) &&
     (FUN_005ade89(&DAT_0065c310), DAT_0065c310 == -1)) {
    local_8 = 0;
    uVar17 = 0;
    iVar16 = *(int *)(DAT_0065b5cc + 0xd8);
    iVar14 = *(int *)(iVar16 + 0xcc);
    if (*(int *)(iVar16 + 0xd0) - iVar14 >> 2 != 0) {
      do {
        pvVar11 = *(void **)(iVar14 + uVar17 * 4);
        if (*(int *)((int)pvVar11 + 100) == 1) {
          FUN_0050d210(pvVar11,'\0');
        }
        uVar17 = uVar17 + 1;
        iVar14 = *(int *)(iVar16 + 0xcc);
      } while (uVar17 < (uint)(*(int *)(iVar16 + 0xd0) - iVar14 >> 2));
    }
    local_8 = 0xffffffff;
    FUN_005ade3f(&DAT_0065c310);
  }
  iVar16 = *(int *)(DAT_0065b5cc + 0xd0);
  if (iVar16 != 0) {
    if ((*(int *)(iVar16 + 0xd4) == 3) && (*(int *)(iVar16 + 0xf8) == 2)) {
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
    if (!bVar21) {
      FUN_00412da0();
      puVar7 = FUN_004125d0();
      FUN_004316f0(puVar7);
      FUN_00409490();
      FUN_004077b0((int)piVar12);
    }
  }
  if (DAT_0065c280 == (undefined4 *)0x0) {
    local_2c = (int *)FUN_005adb0f(0x98);
    local_8 = 1;
    DAT_0065c280 = FUN_0058f5d0(local_2c);
    local_8 = 0xffffffff;
  }
  FUN_0058f950(DAT_0065c280);
  piVar9 = DAT_0065b444;
  *(undefined1 *)((int)piVar12 + 0x62) = 0;
  if (*(char *)((int)piVar9 + 0x72) == '\0') {
    if ((char)piVar9[0x1c] == '\0') goto LAB_0040c3a5;
    puVar8 = FUN_00402de0();
    bVar21 = *(int *)(puVar8 + 0x1c) == 3;
  }
  else {
    iVar16 = *(int *)(DAT_0065b5cc + 0xd0);
    if (iVar16 == 0) goto LAB_0040c3a5;
    if ((*(int *)(iVar16 + 0xd4) == 3) && (*(int *)(iVar16 + 0xf8) == 2)) {
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
    if ((bVar21) || (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 0)) goto LAB_0040c3a5;
    bVar21 = *piVar9 == 1;
  }
  if (bVar21) {
    *(undefined1 *)((int)piVar12 + 0x62) = 1;
  }
LAB_0040c3a5:
  local_11 = *(char *)((int)piVar12 + 0x62);
  this = (char *)FUN_00412b00();
  if (*this != '\0') {
    FUN_00591070(&DAT_005cdc70,"** Removing all ships from all sectors.");
    puVar10 = *(uint **)(this + 0xc);
    for (puVar18 = *(uint **)(this + 8); puVar18 != puVar10; puVar18 = puVar18 + 3) {
      local_38 = (void *)*puVar18;
      piStack_34 = (int *)puVar18[1];
      local_30 = (int *)puVar18[2];
      FUN_004aae90(this,(uint)local_38);
    }
    *this = '\0';
  }
  if (local_11 != '\0') {
    iVar16 = *(int *)(this + 8);
    uVar17 = 0;
    iVar14 = *(int *)(this + 0xc) - iVar16 >> 0x1f;
    if ((*(int *)(this + 0xc) - iVar16) / 0xc + iVar14 != iVar14) {
      local_20 = 0;
      do {
        if (*(int *)(iVar16 + 4 + local_20) == *(int *)(DAT_0065b5cc + 0xd8)) {
          FUN_004ab580(this,uVar17);
        }
        local_20 = local_20 + 0xc;
        iVar16 = *(int *)(this + 8);
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)((*(int *)(this + 0xc) - iVar16) / 0xc));
    }
  }
  piVar12 = local_1c;
  if (*(char *)((int)local_1c + 0x62) != '\0') {
    this_00 = FUN_004122d0();
    piVar9 = (int *)*this_00;
    piVar15 = (int *)*piVar9;
    while (piVar15 != piVar9) {
      fVar22 = (float)piVar15[10];
      piVar15[10] = (int)(fVar22 - local_18);
      if (fVar22 - local_18 <= 0.0) {
        FUN_00591070("WORLD","Vessel \'%s\' scanning timeout has happened.");
        FUN_00413600(this_00,(int *)&local_2c,piVar15);
        break;
      }
      piVar1 = (int *)piVar15[2];
      if (*(char *)((int)piVar1 + 0xd) == '\0') {
        cVar6 = *(char *)(*piVar1 + 0xd);
        piVar15 = piVar1;
        piVar1 = (int *)*piVar1;
        while (cVar6 == '\0') {
          cVar6 = *(char *)(*piVar1 + 0xd);
          piVar15 = piVar1;
          piVar1 = (int *)*piVar1;
        }
      }
      else {
        cVar6 = *(char *)(piVar15[1] + 0xd);
        piVar5 = (int *)piVar15[1];
        piVar1 = piVar15;
        while ((piVar15 = piVar5, cVar6 == '\0' && (piVar1 == (int *)piVar15[2]))) {
          cVar6 = *(char *)(piVar15[1] + 0xd);
          piVar5 = (int *)piVar15[1];
          piVar1 = piVar15;
        }
      }
    }
    piVar9 = (int *)FUN_00412580();
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x375) == '\0')) {
      uVar17 = 0;
      iVar16 = *piVar9;
      if (piVar9[1] - iVar16 >> 2 != 0) {
        do {
          iVar14 = *(int *)(iVar16 + uVar17 * 4);
          if ((0.0 < *(float *)(iVar14 + 0x40)) &&
             (fVar22 = *(float *)(iVar14 + 0x40) - local_18, *(float *)(iVar14 + 0x40) = fVar22,
             fVar22 < 0.0)) {
            *(undefined4 *)(iVar14 + 0x40) = 0;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < (uint)(piVar9[1] - iVar16 >> 2));
      }
    }
    FUN_0040bc20();
    piVar12[0x1a] = (int)((float)piVar12[0x1a] + local_18);
  }
  FUN_0040bf70((int)piVar12);
  if ((*(char *)((int)piVar12 + 0x62) != '\0') && (*(char *)((int)DAT_0065b444 + 0x72) != '\0')) {
    if (DAT_0065c28c == 0) {
      DAT_0065c28c = FUN_005adb0f(1);
    }
    uVar17 = 0;
    uVar19 = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2;
    if (uVar19 != 0) {
      do {
        piVar9 = *(int **)(*(int *)(DAT_0065b5cc + 0x13c) + uVar17 * 4);
        local_24 = piVar9;
        if ((0 < *(int *)(piVar9[0x15] + 0x44)) &&
           (((float)piVar9[6] == -1.0 ||
            ((int)((float)piVar9[7] -
                  ((float)(DAT_0065b444[0x61] +
                          ((DAT_0065b444[99] + DAT_0065b444[100] * 0xc) * 0x1f + DAT_0065b444[0x62])
                          * 0x18) - (float)piVar9[6])) < 1)))) {
          local_28 = piVar9;
          FUN_00483d10((int)piVar9);
          piVar12 = *(int **)(DAT_0065b5cc + 0x140);
          puVar7 = FUN_00414000(&local_2c,(int *)&local_28,*(int **)(DAT_0065b5cc + 0x13c),piVar12);
          piVar15 = (int *)*puVar7;
          if (piVar15 != piVar12) {
            _Size = *(int *)(DAT_0065b5cc + 0x140) - (int)piVar12;
            memmove(piVar15,piVar12,_Size);
            *(size_t *)(DAT_0065b5cc + 0x140) = _Size + (int)piVar15;
            piVar9 = local_24;
          }
          piVar12 = local_1c;
          if (piVar9 != (int *)0x0) {
            FUN_0040fae0(piVar9);
            piVar12 = local_1c;
          }
          break;
        }
        uVar17 = uVar17 + 1;
        piVar12 = local_1c;
      } while (uVar17 < uVar19);
    }
    puVar10 = DAT_0065c2a0;
    if (DAT_0065c2a0 == (uint *)0x0) {
      puVar10 = (uint *)FUN_005adb0f(0xc);
      DAT_0065c2a0 = puVar10;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
    }
    piVar9 = (int *)*puVar10;
    uVar17 = 0;
    uVar19 = (uint)((int)puVar10[1] + (3 - (int)piVar9)) >> 2;
    if ((int *)puVar10[1] < piVar9) {
      uVar19 = 0;
    }
    if (uVar19 != 0) {
      do {
        iVar16 = *piVar9;
        if ((*(float *)(iVar16 + 8) != -1.0) &&
           (fVar22 = *(float *)(iVar16 + 8) - local_18, *(float *)(iVar16 + 8) = fVar22,
           fVar22 <= 0.0)) {
          *(undefined4 *)(iVar16 + 8) = 0xbf800000;
        }
        uVar17 = uVar17 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar17 != uVar19);
    }
    puVar10 = FUN_00412df0();
    FUN_004a1940(puVar10);
  }
  fVar22 = (float)piVar12[0x72] + local_18;
  uVar17 = local_20 >> 8;
  local_20 = local_20 & 0xffffff00;
  piVar12[0x72] = (int)fVar22;
  if (0.2 <= fVar22) {
    local_20 = CONCAT31((int3)uVar17,1);
    piVar12[0x72] = (int)(fVar22 - 0.2);
  }
  if ((((*(char *)((int)piVar12 + 0x62) != '\0') && (*(char *)((int)DAT_0065b444 + 0x72) != '\0'))
      && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2)) &&
     (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0xb8) == '\0')) {
    iVar16 = *(int *)(DAT_0065b5cc + 300);
    uVar17 = local_20;
    pvVar11 = (void *)FUN_00412700();
    FUN_0043a250(pvVar11,iVar16,(char)uVar17);
    if (piVar12[3] != 0) {
      FUN_004b6360(piVar12[3]);
    }
    piVar12 = (int *)FUN_00412d40();
    uVar17 = 0;
    iVar16 = *piVar12;
    if (piVar12[1] - iVar16 >> 2 != 0) {
      do {
        iVar16 = *(int *)(iVar16 + uVar17 * 4);
        uVar19 = 0;
        piVar9 = *(int **)(iVar16 + 0xa0);
        if (*(int *)(iVar16 + 0xa4) - (int)piVar9 >> 2 != 0) {
          do {
            iVar14 = *piVar9;
            if ((0.0 < *(float *)(iVar14 + 0xa8)) &&
               (fVar22 = *(float *)(iVar14 + 0xa8) - local_18, *(float *)(iVar14 + 0xa8) = fVar22,
               fVar22 < 0.0)) {
              *(undefined4 *)(iVar14 + 0xa8) = 0;
            }
            uVar19 = uVar19 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar19 < (uint)(*(int *)(iVar16 + 0xa4) - *(int *)(iVar16 + 0xa0) >> 2));
        }
        uVar19 = 0;
        iVar14 = *(int *)(iVar16 + 0x70);
        if (*(int *)(iVar16 + 0x74) - iVar14 >> 2 != 0) {
          do {
            iVar14 = **(int **)(iVar14 + uVar19 * 4);
            if (iVar14 != 0) {
              iVar2 = *(int *)(iVar14 + 0x24);
              iVar3 = *(int *)(iVar14 + 0x20);
              if (iVar2 != iVar3) {
                fVar22 = local_18 + *(float *)(iVar14 + 0x28);
                *(float *)(iVar14 + 0x28) = fVar22;
                if ((float)*(int *)(iVar14 + 0x18) <= fVar22) {
                  *(float *)(iVar14 + 0x28) = fVar22 - (float)*(int *)(iVar14 + 0x18);
                  if (iVar2 < iVar3) {
                    *(int *)(iVar14 + 0x24) = iVar2 + 1;
                    if (iVar3 < iVar2 + 1) {
                      *(int *)(iVar14 + 0x24) = iVar3;
                    }
                  }
                  else if (iVar3 < iVar2) {
                    iVar13 = iVar2 + -1;
                    if (iVar2 + -1 < iVar3) {
                      iVar13 = iVar3;
                    }
                    *(int *)(iVar14 + 0x24) = iVar13;
                  }
                }
              }
            }
            uVar19 = uVar19 + 1;
            iVar14 = *(int *)(iVar16 + 0x70);
          } while (uVar19 < (uint)(*(int *)(iVar16 + 0x74) - iVar14 >> 2));
        }
        uVar17 = uVar17 + 1;
        iVar16 = *piVar12;
      } while (uVar17 < (uint)(piVar12[1] - iVar16 >> 2));
    }
  }
  piVar12 = (int *)0x0;
  piVar9 = (int *)0x0;
  local_24 = (void *)0x0;
  local_38 = (void *)0x0;
  piStack_34 = (int *)0x0;
  local_28 = (int *)0x0;
  local_30 = (int *)0x0;
  local_8 = 2;
  uVar17 = 0;
  piVar15 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x9c);
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xa0) - *piVar15 >> 2 != 0) {
    do {
      cVar6 = (**(code **)**(undefined4 **)(uVar17 * 4 + *piVar15))(local_18);
      if (cVar6 != '\0') {
        piVar15 = (int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x9c) + uVar17 * 4);
        if (piVar12 == piVar9) {
          FUN_00414080(&local_38,piVar9,piVar15);
          piVar12 = local_30;
          piVar9 = piStack_34;
        }
        else {
          *piVar9 = *piVar15;
          piStack_34 = piVar9 + 1;
          piVar9 = piStack_34;
        }
      }
      uVar17 = uVar17 + 1;
      piVar15 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x9c);
    } while (uVar17 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xa0) - *piVar15 >> 2));
    local_24 = local_38;
    local_28 = piVar12;
  }
  uVar19 = 0;
  uVar17 = (int)piVar9 - (int)local_24 >> 2;
  local_38 = local_24;
  if (uVar17 != 0) {
    do {
      FUN_0040e600(*(int *)((int)local_24 + uVar19 * 4));
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar17);
  }
  iVar16 = *(int *)(DAT_0065b5cc + 0xd8);
  if (iVar16 != 0) {
    puVar20 = *(undefined4 **)(iVar16 + 0xd0);
    for (puVar7 = *(undefined4 **)(iVar16 + 0xcc); puVar7 != puVar20; puVar7 = puVar7 + 1) {
      piVar12 = (int *)*puVar7;
      iVar16 = *(int *)(piVar12[0x95] + 0x158);
      local_2c = piVar12;
      if (iVar16 == 1) {
        (**(code **)(*piVar12 + 0x14))(local_18);
      }
      else if ((iVar16 != 2) && (iVar16 != 3)) {
        if (*(char *)((int)local_1c + 0x62) == '\0') {
          if ((char)piVar12[0x8d] != '\0') goto LAB_0040ca7c;
        }
        else {
          FUN_00522ca0(piVar12[0x10]);
LAB_0040ca7c:
          FUN_0040acc0(piVar12,(char)local_20);
          if ((void *)piVar12[0x11] != (void *)0x0) {
            FUN_00503210((void *)piVar12[0x11]);
          }
        }
        if (*(char *)((int)local_1c + 0x11e) != '\0') {
          *(undefined1 *)((int)local_1c + 0x11e) = 0;
          break;
        }
        cVar6 = (**(code **)(*piVar12 + 0x20))();
        if (cVar6 != '\0') {
          puVar4 = (undefined4 *)local_1c[5];
          if ((undefined4 *)local_1c[6] == puVar4) {
            FUN_00414080(local_1c + 4,puVar4,&local_2c);
          }
          else {
            *puVar4 = piVar12;
            local_1c[5] = local_1c[5] + 4;
          }
        }
      }
    }
    puVar7 = (undefined4 *)local_1c[5];
    puVar20 = (undefined4 *)local_1c[4];
    if ((int)puVar7 - (int)puVar20 >> 2 != 0) {
      piVar12 = (int *)0x0;
      local_2c = (int *)((uint)((int)puVar7 + (3 - (int)puVar20)) >> 2);
      if (puVar7 < puVar20) {
        local_2c = (int *)0x0;
      }
      if (local_2c != (int *)0x0) {
        do {
          puVar7 = (undefined4 *)*puVar20;
          FUN_00591070("WORLD","Vessel destroyed and needs to be removed: %s");
          iVar16 = puVar7[0x95];
          bVar21 = false;
          if (iVar16 != 0) {
            bVar21 = *(int *)(iVar16 + 0x158) == 0;
          }
          FUN_0040d4f0(puVar7,bVar21);
          piVar12 = (int *)((int)piVar12 + 1);
          puVar20 = puVar20 + 1;
        } while (piVar12 != local_2c);
      }
      local_1c[5] = local_1c[4];
    }
  }
  iVar16 = *(int *)(DAT_0065b5cc + 0xcc);
  if (((iVar16 != 0) && (cVar6 = *(char *)(iVar16 + 900), FUN_004cab80(iVar16), cVar6 != '\0')) &&
     (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 900) == '\0')) {
    FUN_004cacf0(*(int *)(DAT_0065b5cc + 0xcc));
  }
  piVar12 = DAT_0065c2b0;
  if (DAT_0065c2b0 == (int *)0x0) {
    piVar12 = (int *)FUN_005adb0f(4);
    DAT_0065c2b0 = piVar12;
    *piVar12 = -1;
    local_2c = piVar12;
  }
  if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
     (iVar16 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e8), iVar16 != *piVar12)) {
    *piVar12 = iVar16;
  }
  if (local_24 != (void *)0x0) {
    piVar12 = local_24;
    if ((0xfff < ((int)local_28 - (int)local_24 & 0xfffffffcU)) &&
       (piVar12 = *(int **)((int)local_24 + -4), 0x1f < (uint)((int)local_24 + (-4 - (int)piVar12)))
       ) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar12);
  }
  ExceptionList = local_10;
  return;
}


void FUN_0040cc30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float in_XMM1_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_1c;
  double local_18;
  
  iVar1 = DAT_0065b444;
  fVar6 = 0.0;
  if ((0.0 < *(float *)(DAT_0065b444 + 0x124)) &&
     (fVar10 = *(float *)(DAT_0065b444 + 0x124) - in_XMM1_Da,
     *(float *)(DAT_0065b444 + 0x124) = fVar10, fVar10 <= 0.0)) {
    *(undefined4 *)(iVar1 + 0x124) = 0xbf800000;
  }
  iVar1 = FUN_00402f60();
  FUN_005585f0(iVar1);
  iVar1 = *(int *)(DAT_0065b5cc + 0xd8);
  if (iVar1 != 0) {
    local_1c = 0;
    if (*(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xcc) >> 2 != 0) {
      do {
        dVar7 = 0.0;
        local_18 = 101.32;
        dVar8 = 101.32;
        iVar1 = *(int *)(*(int *)(iVar1 + 0xcc) + local_1c * 4);
        if (*(char *)(iVar1 + 0x235) != '\0') {
          fVar6 = *(float *)(iVar1 + 0x27c) - in_XMM1_Da;
          *(float *)(iVar1 + 0x27c) = fVar6;
          if (fVar6 <= 0.0) {
            iVar3 = *(int *)(iVar1 + 0x174);
            *(undefined4 *)(iVar1 + 0x27c) = 0x3e800000;
            if (iVar3 == 0) {
LAB_0040cd5e:
              if ((((*(int *)(iVar1 + 0xd4) == 3) && (*(int *)(iVar1 + 0xf8) == 2)) &&
                  (*(int *)(iVar1 + 0x178) != 0)) &&
                 (*(int *)(*(int *)(*(int *)(iVar1 + 0x178) + 0x254) + 0x158) == 1))
              goto LAB_0040cd89;
            }
            else {
              pbVar5 = (byte *)(iVar3 + 200);
              if (0xf < *(uint *)(iVar3 + 0xdc)) {
                pbVar5 = *(byte **)(iVar3 + 200);
              }
              uVar2 = FUN_004031f0(pbVar5,*(uint *)(iVar3 + 0xd8),(byte *)&PTR_005ce008,0);
              if ((char)uVar2 != '\0') goto LAB_0040cd5e;
LAB_0040cd89:
              iVar3 = rand();
              dVar7 = (double)(((float)iVar3 / 32767.0) * 0.2 - 0.1) + 101.32;
              dVar8 = local_18;
            }
            *(double *)(iVar1 + 0x288) = dVar7;
            if (*(char *)(iVar1 + 0x281) != '\0') {
              iVar3 = rand();
              dVar8 = (double)(((float)iVar3 / 32767.0) * 0.2 - 0.1) + 101.32;
            }
            *(double *)(iVar1 + 0x298) = dVar8;
            iVar3 = rand();
            *(double *)(iVar1 + 0x290) = (double)(((float)iVar3 / 32767.0) * 0.2 - 0.1) + 101.32;
          }
          fVar6 = *(float *)(iVar1 + 0x2a0) - in_XMM1_Da;
          *(float *)(iVar1 + 0x2a0) = fVar6;
          if (fVar6 <= 0.0) {
            iVar3 = rand();
            *(float *)(iVar1 + 0x2a0) = (float)(iVar3 % 3 + 4);
            iVar3 = rand();
            fVar6 = (((float)iVar3 / 32767.0) * 0.02 - 0.01) + 22.0;
            *(float *)(iVar1 + 0x2a4) = fVar6;
          }
        }
        if ((*(char *)(iVar1 + 0x234) != '\0') && (iVar1 = *(int *)(iVar1 + 0x40), iVar1 != 0)) {
          uVar2 = 0;
          iVar3 = *(int *)(iVar1 + 0x3c);
          if (*(int *)(iVar1 + 0x40) - iVar3 >> 2 != 0) {
            do {
              iVar3 = *(int *)(iVar3 + uVar2 * 4);
              if (*(char *)(iVar3 + 99) == '\0') {
                fVar9 = 0.0;
                fVar10 = fVar6;
              }
              else if (*(char *)(iVar3 + 0x62) == '\0') {
                iVar4 = *(int *)(*(int *)(iVar3 + 8) + 0xd4);
                FUN_00437ea0(*(int **)(iVar3 + 0xc));
                fVar10 = (float)iVar4;
                fVar9 = fVar6 * fVar10 + fVar10;
              }
              else {
                iVar4 = *(int *)(*(int *)(iVar3 + 8) + 0xcc);
                fVar9 = (float)*(int *)(iVar3 + 100) / 100.0;
                fVar6 = fVar9;
                FUN_00437ea0(*(int **)(iVar3 + 0xc));
                fVar10 = (float)iVar4;
                fVar9 = (fVar6 * fVar10 + fVar10) * fVar9;
              }
              fVar11 = 0.0;
              if (*(char *)(iVar3 + 99) == '\0') {
                *(undefined4 *)(iVar3 + 0x78) = 0;
                fVar6 = fVar10;
              }
              else {
                fVar6 = *(float *)(iVar3 + 0x74) - in_XMM1_Da;
                *(float *)(iVar3 + 0x74) = fVar6;
                if (fVar6 <= 0.0) {
                  if (0.0 < fVar9) {
                    iVar4 = rand();
                    fVar6 = fVar9 / 80.0;
                    fVar11 = (((float)iVar4 / 32767.0) * (fVar9 / 40.0) - fVar6) + fVar9;
                  }
                  *(float *)(iVar3 + 0x78) = fVar11;
                  *(undefined4 *)(iVar3 + 0x74) = 0x3e800000;
                }
              }
              uVar2 = uVar2 + 1;
              iVar3 = *(int *)(iVar1 + 0x3c);
            } while (uVar2 < (uint)(*(int *)(iVar1 + 0x40) - iVar3 >> 2));
          }
        }
        local_1c = local_1c + 1;
        iVar1 = *(int *)(DAT_0065b5cc + 0xd8);
      } while (local_1c < (uint)(*(int *)(iVar1 + 0xd0) - *(int *)(iVar1 + 0xcc) >> 2));
    }
    iVar1 = FUN_004123f0();
    FUN_0055a4a0(iVar1);
  }
  return;
}


void FUN_0040d050(int param_1)

{
  float ****ppppfVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint local_14;
  int local_10;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1f8) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    bVar12 = false;
    if (*(int *)(param_1 + 0x254) != 0) {
      bVar12 = *(int *)(*(int *)(param_1 + 0x254) + 0x158) == 0;
    }
    if (bVar12) {
      FUN_00591070("DETAIL","Dropping debris from ship.");
      puVar4 = FUN_0051f310(*(void **)(param_1 + 0x24),(undefined4 *)0x0);
      *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(param_1 + 0x30);
      std::basic_string<>::operator=
                ((basic_string<> *)(puVar4 + 0x1a),(basic_string<> *)(param_1 + 8));
      local_14 = 0;
      local_10 = 0;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1f8) + 0x48) -
               *(int *)(*(int *)(param_1 + 0x1f8) + 0x44) >> 2;
      if (2 < iVar10) {
        local_10 = rand();
        local_10 = local_10 % (iVar10 + -2);
      }
      FUN_00591070("WORLD","Going to take %d/%d of the components in the ship\'s hold.");
      iVar10 = 0;
      if (0 < local_10) {
        do {
          if (99 < iVar10) break;
          this = *(void **)(param_1 + 0x1f8);
          puVar6 = *(undefined4 **)((int)this + 0x44);
          uVar9 = *(int *)((int)this + 0x48) - (int)puVar6 >> 2;
          if (uVar9 < 2) {
            if (uVar9 == 1) goto LAB_0040d17b;
          }
          else {
            iVar5 = rand();
            this = *(void **)(param_1 + 0x1f8);
            puVar6 = (undefined4 *)(*(int *)((int)this + 0x44) + (iVar5 % (int)uVar9) * 4);
LAB_0040d17b:
            ppppfVar1 = (float ****)*puVar6;
            if (ppppfVar1 != (float ****)0x0) {
              FUN_005076c0(this,ppppfVar1);
              FUN_005074d0((void *)puVar4[0x3a],(float *)ppppfVar1);
              FUN_00591070("WORLD","Dumped component \'%s\' into debris");
              local_14 = local_14 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while ((int)local_14 < local_10);
      }
      FUN_00591070("WORLD","Adding components from functional modules.");
      iVar10 = *(int *)(param_1 + 0x40);
      local_14 = 0;
      if (*(int *)(iVar10 + 0x40) - *(int *)(iVar10 + 0x3c) >> 2 != 0) {
        do {
          iVar10 = FUN_00437210(*(int *)(*(int *)(*(int *)(iVar10 + 0x3c) + local_14 * 4) + 0xc));
          if (3 < iVar10) {
            iVar10 = 3;
          }
          iVar5 = 0;
          iVar11 = 0;
          if (0 < iVar10) {
            iVar7 = rand();
            FUN_00591070("WORLD","Attempting to take %d components out of %d from module \'%s %s\'")
            ;
            do {
              if (iVar7 % iVar10 <= iVar11) break;
              iVar8 = rand();
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x3c) + local_14 * 4) +
                              0xc);
              pfVar3 = *(float **)(iVar2 + 4 + (iVar8 % 0x14) * 4);
              if (pfVar3 != (float *)0x0) {
                *(undefined4 *)(iVar2 + 4 + (iVar8 % 0x14) * 4) = 0;
                FUN_005074d0((void *)puVar4[0x3a],pfVar3);
                FUN_00591070("WORLD","Dumped component \'%s\' into debris");
                iVar11 = iVar11 + 1;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 100);
            FUN_00591070("WORLD","(took %d components in %d attempts)");
          }
          local_14 = local_14 + 1;
          iVar10 = *(int *)(param_1 + 0x40);
        } while (local_14 < (uint)(*(int *)(iVar10 + 0x40) - *(int *)(iVar10 + 0x3c) >> 2));
      }
      FUN_00591070("WORLD","Added components from live modules.");
    }
  }
  return;
}


void FUN_0040d340(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte **ppbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = DAT_0065b5cc;
  puStack_c = &LAB_005b0068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = DAT_0065b444;
  if (*(int *)(DAT_0065b5cc + 0xd8) != 0) {
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)param_1;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,(byte *)&PTR_005ce008,0);
    if ((char)uVar5 == '\0') {
      piVar1 = *(int **)(iVar3 + 0x40);
      for (local_14 = *(int **)(iVar3 + 0x3c); local_14 != piVar1; local_14 = local_14 + 1) {
        uVar5 = 0;
        piVar10 = *(int **)(*local_14 + 0xcc);
        piVar2 = *(int **)(*local_14 + 0xd0);
        uVar9 = (uint)((int)piVar2 + (3 - (int)piVar10)) >> 2;
        if (piVar2 < piVar10) {
          uVar9 = 0;
        }
        if (uVar9 != 0) {
          do {
            iVar3 = *piVar10;
            local_1c = iVar3;
            if ((*(int *)(iVar3 + 0x44) != 0) &&
               (iVar4 = *(int *)(*(int *)(iVar3 + 0x44) + 0x124), iVar4 != 0)) {
              pbVar8 = (byte *)(iVar4 + 0x148);
              ppbVar6 = &param_1;
              if (0xf < in_stack_00000018) {
                ppbVar6 = (byte **)param_1;
              }
              if (0xf < *(uint *)(iVar4 + 0x15c)) {
                pbVar8 = *(byte **)(iVar4 + 0x148);
              }
              uVar7 = FUN_004031f0(pbVar8,*(uint *)(iVar4 + 0x158),(byte *)ppbVar6,in_stack_00000014
                                  );
              if ((char)uVar7 != '\0') {
                FUN_00591070(&DAT_005cdc70,"Flag set, removing ship \'%s\'");
                piVar2 = *(int **)(local_18 + 0x14);
                if (*(int **)(local_18 + 0x18) == piVar2) {
                  FUN_00414080((void *)(local_18 + 0x10),piVar2,&local_1c);
                }
                else {
                  *piVar2 = iVar3;
                  *(int *)(local_18 + 0x14) = *(int *)(local_18 + 0x14) + 4;
                }
              }
            }
            uVar5 = uVar5 + 1;
            piVar10 = piVar10 + 1;
          } while (uVar5 != uVar9);
        }
      }
    }
  }
  if (0xf < in_stack_00000018) {
    pbVar8 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar8 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar8))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar8);
  }
  ExceptionList = local_10;
  return;
}


void FUN_0040d4f0(undefined4 *param_1,char param_2)

{
  void *this;
  void *this_00;
  undefined4 *_Src;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  size_t _Size;
  undefined4 *_Dst;
  
  FUN_00591070(&DAT_005cdc70,"REMOVING %s from sector %s");
  FUN_0040e700((int)param_1);
  this = (void *)param_1[9];
  puVar5 = *(undefined4 **)((int)this + 0xd0);
  puVar4 = *(undefined4 **)((int)this + 0xcc);
joined_r0x0040d54a:
  if (puVar4 == puVar5) {
    puVar5 = FUN_004125d0();
    if ((undefined4 *)puVar5[0x24] == param_1) {
      puVar5 = FUN_004125d0();
      iVar6 = DAT_0065b5cc;
      puVar5[0x1c] = 0;
      puVar5[0x1b] = 0;
      if (*(int *)(iVar6 + 0xd0) != 0) {
        *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 0x374) = 0;
      }
      *(undefined1 *)(puVar5 + 0x20) = 0;
      puVar5[7] = 0xffffffff;
      puVar5[6] = 0xbf800000;
      puVar5[4] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[0x21] = 0xbf800000;
    }
    if (*(int *)(param_1[0x95] + 0x158) == 4) {
      FUN_0051f7b0(this,(int)param_1);
    }
    else {
      FUN_0051f8b0(this,(int)param_1);
    }
    if (param_2 != '\0') {
      FUN_0040d050((int)param_1);
    }
    if (param_1 == DAT_0065b3d4) {
      DAT_0065b3d4 = (undefined4 *)0x0;
      *(undefined4 *)(DAT_0065b5cc + 0xd0) = 0;
    }
    FUN_0050a400(param_1);
    FUN_005adb3f(param_1);
    return;
  }
  this_00 = (void *)*puVar4;
  piVar1 = *(int **)((int)this_00 + 0x214);
  if (piVar1 != *(int **)((int)this_00 + 0x218)) {
    do {
      iVar6 = *piVar1;
      if (*(int *)(iVar6 + 0x124) == param_1[0x94]) goto LAB_0040d583;
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)((int)this_00 + 0x218));
  }
  iVar6 = 0;
LAB_0040d583:
  FUN_0050c960(this_00,iVar6);
  if (*(int *)((int)this_00 + 0x44) != 0) {
    iVar6 = *(int *)(*(int *)((int)this_00 + 0x44) + 0x3c);
    uVar2 = 0;
    _Dst = *(undefined4 **)(iVar6 + 4);
    uVar7 = *(int *)(iVar6 + 8) - (int)_Dst >> 2;
    if (uVar7 != 0) {
      do {
        piVar1 = (int *)_Dst[uVar2];
        if ((undefined4 *)*piVar1 == param_1) {
          if ((piVar1 != (int *)0x0) && (_Src = *(undefined4 **)(iVar6 + 8), _Dst != _Src))
          goto LAB_0040d5d7;
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar7);
    }
  }
  goto LAB_0040d643;
  while (_Dst = _Dst + 1, _Dst != _Src) {
LAB_0040d5d7:
    if ((int *)*_Dst == piVar1) break;
  }
  if (_Dst != _Src) {
    puVar3 = _Dst + 1;
    uVar7 = 0;
    uVar2 = (uint)((int)_Src + (3 - (int)puVar3)) >> 2;
    if (_Src < puVar3) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      do {
        if ((int *)*puVar3 != piVar1) {
          *_Dst = (int *)*puVar3;
          _Dst = _Dst + 1;
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar7 != uVar2);
    }
    if (_Dst != _Src) {
      _Size = *(int *)(iVar6 + 8) - (int)_Src;
      memmove(_Dst,_Src,_Size);
      *(size_t *)(iVar6 + 8) = _Size + (int)_Dst;
    }
  }
LAB_0040d643:
  if ((*(int *)((int)this_00 + 0x194) != 0) &&
     (*(undefined4 **)(*(int *)((int)this_00 + 0x194) + 0x130) == param_1)) {
    *(undefined4 *)((int)this_00 + 0x194) = 0;
    *(undefined4 *)((int)this_00 + 400) = 0xffffffff;
  }
  if ((*(int *)((int)this_00 + 0x19c) != 0) &&
     (*(undefined4 **)(*(int *)((int)this_00 + 0x19c) + 0x130) == param_1)) {
    *(undefined4 *)((int)this_00 + 0x19c) = 0;
    *(undefined4 *)((int)this_00 + 0x198) = 0xffffffff;
  }
  if (*(int *)(*(int *)((int)this_00 + 0x254) + 0x158) == 4) {
    if (*(undefined4 **)((int)this_00 + 0x39c) == param_1) {
      *(undefined4 *)((int)this_00 + 0x39c) = 0;
    }
    if (*(undefined4 **)((int)this_00 + 0x38c) == param_1 + 2) {
      *(undefined4 *)((int)this_00 + 0x38c) = 0;
    }
  }
  puVar4 = puVar4 + 1;
  goto joined_r0x0040d54a;
}


int FUN_0040d7c0(void)

{
  return *(int *)(DAT_0065b444 + 0x184) +
         ((*(int *)(DAT_0065b444 + 0x18c) + *(int *)(DAT_0065b444 + 400) * 0xc) * 0x1f +
         *(int *)(DAT_0065b444 + 0x188)) * 0x18;
}


void FUN_0040d800(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  uint local_20;
  int local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b00a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  piVar5 = (int *)0x0;
  local_14 = 0.0;
  local_1c = 2;
  local_20 = 0;
  piVar2 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x84);
  iVar6 = DAT_0065b5cc;
  fVar7 = 0.0;
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x88) - *piVar2 >> 2 != 0) {
    do {
      uVar4 = local_20;
      iVar1 = *(int *)(*piVar2 + local_20 * 4);
      if ((*(int *)(iVar1 + 0x54) == 3) || (fVar7 = local_14, *(int *)(iVar1 + 0x54) == 4)) {
        local_28 = (float)*(double *)(iVar1 + 0x20);
        local_24 = (float)*(double *)(iVar1 + 0x28);
        local_8 = 1;
        fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&stack0x00000008,(Vec2 *)&local_28);
        local_18 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
        fVar8 = (1.5 - fVar8 * 0.5 * local_18 * local_18) * local_18 * fVar8;
        iVar6 = DAT_0065b5cc;
        fVar7 = local_14;
        if (fVar8 <= 25.0) {
          uVar3 = 0;
          local_18 = *(float *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x84) + uVar4 * 4);
          piVar2 = *(int **)(DAT_0065b5cc + 0x54);
          uVar4 = *(int *)(DAT_0065b5cc + 0x58) - (int)piVar2 >> 2;
          if (*(int *)((int)local_18 + 0x54) == 3) {
            if (uVar4 != 0) {
              do {
                piVar5 = (int *)*piVar2;
                if ((piVar5[8] == *(int *)((int)local_18 + 0xa8)) && (*piVar5 == 1))
                goto LAB_0040d976;
                uVar3 = uVar3 + 1;
                piVar2 = piVar2 + 1;
              } while (uVar3 < uVar4);
            }
          }
          else if (uVar4 != 0) {
            do {
              piVar5 = (int *)*piVar2;
              if ((piVar5[8] == *(int *)((int)local_18 + 0xa8)) && (*piVar5 == 2))
              goto LAB_0040d976;
              uVar3 = uVar3 + 1;
              piVar2 = piVar2 + 1;
            } while (uVar3 < uVar4);
          }
          piVar5 = (int *)0x0;
LAB_0040d976:
          if (local_1c != *piVar5) {
            local_14 = 0.0;
            local_1c = *piVar5;
          }
          fVar8 = ((25.0 - fVar8) / 25.0) / (100.0 / (float)*(int *)((int)local_18 + 0xb0));
          if (local_1c == 2) {
            fVar7 = 1.0;
          }
          else {
            fVar7 = 0.6;
          }
          if (fVar8 <= fVar7) {
            fVar7 = fVar8;
          }
          uVar4 = local_20;
          if (fVar7 <= local_14) {
            fVar7 = local_14;
          }
        }
      }
      local_14 = fVar7;
      local_20 = uVar4 + 1;
      piVar2 = (int *)(*(int *)(iVar6 + 0xd8) + 0x84);
      fVar7 = local_14;
    } while (local_20 < (uint)(*(int *)(*(int *)(iVar6 + 0xd8) + 0x88) - *piVar2 >> 2));
  }
  *(int **)(param_1 + 0x184) = piVar5;
  *(double *)(param_1 + 0x140) = (double)fVar7;
  if (piVar5 != (int *)0x0) {
    *(int *)(param_1 + 0x188) = *piVar5;
    *(int *)(param_1 + 0x18c) = piVar5[8];
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


undefined4 * FUN_0040da70(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  code *pcVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  void *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  double local_40;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b00fe;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  for (puVar11 = puVar9; puVar11 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar11 = puVar11 + 1) {
    piVar10 = (int *)*puVar11;
    if (*piVar10 == param_2) goto joined_r0x0040dac1;
  }
  piVar10 = (int *)0x0;
joined_r0x0040dac1:
  do {
    if (puVar9 == *(undefined4 **)(DAT_0065b5cc + 0x40)) {
      piVar12 = (int *)0x0;
LAB_0040dad5:
      if ((piVar10 == (int *)0x0) || (piVar12 == (int *)0x0)) {
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      fVar14 = (float)piVar12[0x1f];
      ExceptionList = &local_10;
      FUN_00592f80(fVar14,(float)piVar12[0x20],(float)piVar10[0x1f]);
      local_20 = 0;
      local_1c = 0;
      local_8 = 0;
      dVar15 = (double)(int)fVar14 * 0.017453292519943295;
      local_28 = dVar15;
      libm_sse2_sin_precise(uVar5);
      libm_sse2_cos_precise();
      local_28 = (double)CONCAT44((float)(local_28 * 50.0),(float)(dVar15 * 50.0));
      local_8 = CONCAT31(local_8._1_3_,1);
      cocos2d::Vec2::operator+((Vec2 *)&local_20,(Vec2 *)&local_38);
      local_8 = 2;
      if (0.0 < local_38) {
        if (0.0 < local_34) {
          param_2 = 1;
        }
        else {
          param_2 = 2;
        }
      }
      else if (0.0 < local_34) {
        param_2 = 0;
      }
      else {
        param_2 = 3;
      }
      FUN_00591070(&DAT_005cdc70,"Jumping to sector %s, arriving in quadrant %s.");
      puVar11 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      local_4c = (void *)0x0;
      local_48 = (undefined4 *)0x0;
      local_44 = (undefined4 *)0x0;
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar6 = piVar12[0x2d];
      local_1c = 0;
      if (piVar12[0x2e] - iVar6 >> 2 != 0) {
        param_3 = 3;
        do {
          puVar1 = (undefined4 *)(iVar6 + local_1c * 4);
          pfVar2 = (float *)*puVar1;
          local_28 = (double)CONCAT44(puVar1,(undefined4)local_28);
          if (0.0 < *pfVar2) {
            iVar6 = (pfVar2[1] <= 0.0) + 1;
          }
          else {
            iVar6 = 0;
            if (pfVar2[1] <= 0.0) {
              iVar6 = param_3;
            }
          }
          if (iVar6 == param_2) {
            if (puVar9 == puVar11) {
              FUN_00414080(&local_4c,puVar11,puVar1);
              puVar9 = local_44;
              puVar11 = local_48;
            }
            else {
              *puVar11 = pfVar2;
              local_48 = puVar11 + 1;
              puVar11 = local_48;
            }
          }
          local_1c = local_1c + 1;
          iVar6 = piVar12[0x2d];
        } while (local_1c < (uint)(piVar12[0x2e] - iVar6 >> 2));
      }
      pvVar4 = local_4c;
      uVar5 = (int)puVar11 - (int)local_4c;
      local_28._4_4_ = (int)uVar5 >> 2;
      FUN_00591070(&DAT_005cdc70,"Possible entry points: %d");
      pcVar13 = rand_exref;
      if (uVar5 < 4) {
        FUN_00591070("ERROR","ERROR: No jump point found for quadrant %s");
        iVar8 = piVar12[0x2e];
        iVar3 = piVar12[0x2d];
        iVar6 = rand();
        iVar6 = iVar6 % ((iVar8 - iVar3 >> 2) + -1);
        pvVar7 = (void *)piVar12[0x2d];
        pcVar13 = rand_exref;
      }
      else {
        iVar6 = rand();
        iVar6 = iVar6 % local_28._4_4_;
        pvVar7 = pvVar4;
      }
      puVar11 = *(undefined4 **)((int)pvVar7 + iVar6 * 4);
      local_20 = *puVar11;
      local_1c = puVar11[1];
      iVar6 = (*pcVar13)();
      iVar8 = (*pcVar13)();
      local_28 = (double)((float)(int)puVar11[3] * ((float)(iVar8 % 100) / 100.0));
      dVar16 = (double)(iVar6 % 0x168) * 0.017453292519943295;
      local_40 = dVar16;
      libm_sse2_sin_precise();
      dVar16 = dVar16 * local_28;
      dVar15 = local_40;
      libm_sse2_cos_precise();
      local_28 = (double)CONCAT44((float)(dVar15 * local_28),(float)dVar16);
      local_8._0_1_ = 5;
      cocos2d::Vec2::operator+((Vec2 *)&local_20,(Vec2 *)&local_30);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_00591070(&DAT_005cdc70,"Jumping to base point %f, %f");
      *param_1 = local_30;
      param_1[1] = local_2c;
      if (pvVar4 != (void *)0x0) {
        pvVar7 = pvVar4;
        if ((0xfff < ((int)puVar9 - (int)pvVar4 & 0xfffffffcU)) &&
           (pvVar7 = *(void **)((int)pvVar4 + -4), 0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar7))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar7);
      }
      ExceptionList = local_10;
      return param_1;
    }
    piVar12 = (int *)*puVar9;
    if (*piVar12 == param_3) goto LAB_0040dad5;
    puVar9 = puVar9 + 1;
  } while( true );
}


undefined4 * FUN_0040dec0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *this;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  undefined4 uStack0000002c;
  uint in_stack_00000030;
  undefined1 *in_stack_00000034;
  void *in_stack_00000038;
  uint in_stack_0000004c;
  byte *in_stack_ffffffc4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b014a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  FUN_004024e0(&stack0xffffffc4,&stack0x0000001c);
  iVar1 = FUN_004a80d0(in_stack_ffffffc4);
  pvVar2 = (void *)FUN_005adb0f(0x430);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffffc4,&stack0x00000038);
  this = FUN_0051aa00(pvVar2,iVar1,in_stack_ffffffc4);
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((undefined4 **)(this + 2) != &param_1) {
    ppuVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppuVar3 = (undefined4 **)param_1;
    }
    FUN_00402690(this + 2,ppuVar3,in_stack_00000014);
  }
  FUN_0050c090(this,in_stack_00000034);
  if (0xf < in_stack_00000018) {
    puVar4 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar4 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar4);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar2 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      pvVar2 = *(void **)((int)in_stack_0000001c + -4);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  uStack0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (void *)((uint)in_stack_0000001c & 0xffffff00);
  if (0xf < in_stack_0000004c) {
    pvVar2 = in_stack_00000038;
    if (0xfff < in_stack_0000004c + 1) {
      pvVar2 = *(void **)((int)in_stack_00000038 + -4);
      if (0x1f < (uint)((int)in_stack_00000038 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * FUN_0040e040(int param_1,undefined1 *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *this;
  uint uVar3;
  byte *pbVar4;
  undefined4 uStack0000001c;
  uint in_stack_00000020;
  void *in_stack_00000024;
  undefined4 uStack00000034;
  uint in_stack_00000038;
  void *in_stack_0000003c;
  undefined4 uStack0000004c;
  uint in_stack_00000050;
  byte *in_stack_00000054;
  uint in_stack_00000064;
  uint in_stack_00000068;
  undefined4 *in_stack_ffffffa4;
  byte *in_stack_ffffffbc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b01aa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  FUN_004024e0(&stack0xffffffbc,&stack0x0000003c);
  iVar1 = FUN_004a80d0(in_stack_ffffffbc);
  pvVar2 = (void *)FUN_005adb0f(0x388);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffffbc,&stack0x00000024);
  local_8._0_1_ = 5;
  FUN_004024e0(&stack0xffffffa4,&param_3);
  local_8._0_1_ = 4;
  this = FUN_005099e0(pvVar2,iVar1,param_1,in_stack_ffffffa4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0050c090(this,param_2);
  pbVar4 = (byte *)&stack0x00000054;
  if (0xf < in_stack_00000068) {
    pbVar4 = in_stack_00000054;
  }
  uVar3 = FUN_004031f0(pbVar4,in_stack_00000064,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    FUN_004024e0(&stack0xffffffbc,&stack0x00000054);
    FUN_0050c3d0(this,in_stack_ffffffbc);
  }
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  uStack0000001c = 0;
  in_stack_00000020 = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pvVar2 = in_stack_00000024;
    if (0xfff < in_stack_00000038 + 1) {
      pvVar2 = *(void **)((int)in_stack_00000024 + -4);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  uStack00000034 = 0;
  in_stack_00000038 = 0xf;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000050) {
    pvVar2 = in_stack_0000003c;
    if (0xfff < in_stack_00000050 + 1) {
      pvVar2 = *(void **)((int)in_stack_0000003c + -4);
      if (0x1f < (uint)((int)in_stack_0000003c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  uStack0000004c = 0;
  in_stack_00000050 = 0xf;
  in_stack_0000003c = (void *)((uint)in_stack_0000003c & 0xffffff00);
  if (0xf < in_stack_00000068) {
    pbVar4 = in_stack_00000054;
    if (0xfff < in_stack_00000068 + 1) {
      pbVar4 = *(byte **)(in_stack_00000054 + -4);
      if ((byte *)0x1f < in_stack_00000054 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar4);
  }
  ExceptionList = local_10;
  return this;
}


void FUN_0040e240(void *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined1 *puVar4;
  void *this;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b01e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = *(int *)(DAT_0065b5cc + 0xd0);
  dVar1 = *(double *)(iVar3 + 0x28);
  puVar4 = *(undefined1 **)(iVar3 + 0x20);
  puVar5 = *(undefined4 **)(iVar3 + 0x178);
  dVar2 = *(double *)(iVar3 + 0x30);
  FUN_00591070("WORLD","Changing player\'s ship from %s to %s");
  FUN_0040d4f0(*(undefined4 **)(DAT_0065b5cc + 0xd0),'\0');
  *(void **)(DAT_0065b5cc + 0xd0) = param_1;
  *(double *)((int)param_1 + 0x28) = (double)(float)dVar1;
  *(double *)((int)param_1 + 0x30) = (double)(float)dVar2;
  FUN_0050c090(param_1,puVar4);
  FUN_00511950(param_1,puVar5,'\0','\0');
  puVar5 = *(undefined4 **)((int)param_1 + 0x44);
  *(undefined4 *)((int)param_1 + 0xf8) = 2;
  *(undefined2 *)((int)param_1 + 0x280) = 0;
  *(undefined1 *)((int)param_1 + 0x234) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_005022b0(puVar5);
    FUN_005adb3f(puVar5);
  }
  this = (void *)FUN_005adb0f(0x164);
  local_8 = 0;
  puVar5 = FUN_00501e30(this,param_1,0);
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x44) = puVar5;
  FUN_00502600((int)puVar5);
  ExceptionList = local_10;
  return;
}


int FUN_0040e390(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_unknown_005ce0d8)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_0040e3de;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x12);
  iVar7 = 0;
LAB_0040e3de:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


void __thiscall FUN_0040e420(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  if (*(int *)((int)this + 0x44) < param_1) {
    *(int *)((int)this + 0x44) = param_1;
  }
  puVar2 = *(undefined1 **)((int)this + param_1 * 4 + 0x1c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_005adb0f(0x3c);
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0xf;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0xf;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0;
    *(undefined4 *)(puVar2 + 0x38) = 0;
    *(undefined1 **)((int)this + param_1 * 4 + 0x1c) = puVar2;
  }
  puVar1 = *(undefined4 **)(puVar2 + 0x34);
  if (*(undefined4 **)(puVar2 + 0x38) != puVar1) {
    *puVar1 = param_2;
    *(int *)(puVar2 + 0x34) = *(int *)(puVar2 + 0x34) + 4;
    return;
  }
  FUN_00414080(puVar2 + 0x30,puVar1,&param_2);
  return;
}


void __thiscall FUN_0040e4b0(void *this,int param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 **in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(int *)((int)this + 0x44) < param_1) {
    *(int *)((int)this + 0x44) = param_1;
  }
  ppuVar1 = *(undefined4 ***)((int)this + param_1 * 4 + 0x1c);
  if (ppuVar1 == (undefined4 **)0x0) {
    ppuVar1 = (undefined4 **)FUN_005adb0f(0x3c);
    ppuVar1[4] = (undefined4 *)0x0;
    ppuVar1[5] = (undefined4 *)&DAT_0000000f;
    *(undefined1 *)ppuVar1 = 0;
    ppuVar1[10] = (undefined4 *)0x0;
    ppuVar1[0xb] = (undefined4 *)&DAT_0000000f;
    *(undefined1 *)(ppuVar1 + 6) = 0;
    ppuVar1[0xc] = (undefined4 *)0x0;
    ppuVar1[0xd] = (undefined4 *)0x0;
    ppuVar1[0xe] = (undefined4 *)0x0;
    *(undefined4 ***)((int)this + param_1 * 4 + 0x1c) = ppuVar1;
  }
  if (ppuVar1 != &param_2) {
    ppuVar2 = &param_2;
    if (0xf < in_stack_0000001c) {
      ppuVar2 = (undefined4 **)param_2;
    }
    FUN_00402690(ppuVar1,ppuVar2,in_stack_00000018);
    ppuVar1 = *(undefined4 ***)((int)this + param_1 * 4 + 0x1c);
  }
  if ((undefined4 ***)(ppuVar1 + 6) != &stack0x00000020) {
    ppuVar2 = &stack0x00000020;
    if (0xf < in_stack_00000034) {
      ppuVar2 = in_stack_00000020;
    }
    FUN_00402690(ppuVar1 + 6,ppuVar2,in_stack_00000030);
  }
  if (0xf < in_stack_0000001c) {
    puVar3 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      puVar3 = (undefined4 *)param_2[-1];
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar3);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    ppuVar1 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      ppuVar1 = (undefined4 **)in_stack_00000020[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((int)in_stack_00000020 + (-4 - (int)ppuVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppuVar1);
  }
  ExceptionList = local_10;
  return;
}


void FUN_0040e600(int param_1)

{
  int *piVar1;
  int iVar2;
  int *_Dst;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  size_t _Size;
  uint uVar7;
  undefined4 local_c;
  int *local_8;
  
  iVar3 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)(DAT_0065b5cc + 0x3c);
    if (piVar5 != *(int **)(DAT_0065b5cc + 0x40)) {
      while (piVar1 = (int *)*piVar5, *piVar1 != *(int *)(param_1 + 0x20)) {
        piVar5 = piVar5 + 1;
        if (piVar5 == *(int **)(DAT_0065b5cc + 0x40)) {
          return;
        }
      }
      if (piVar1 != (int *)0x0) {
        uVar7 = 0;
        iVar6 = piVar1[0x33];
        if (piVar1[0x34] - iVar6 >> 2 != 0) {
          do {
            FUN_0050c8a0(*(void **)(iVar6 + uVar7 * 4),*(int *)(iVar3 + 0x44));
            iVar6 = *(int *)(piVar1[0x33] + uVar7 * 4);
            iVar2 = *(int *)(iVar6 + 0x174);
            if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) == *(int *)(iVar3 + 0x44))) {
              *(undefined4 *)(iVar6 + 0x174) = 0;
            }
            uVar7 = uVar7 + 1;
            iVar6 = piVar1[0x33];
          } while (uVar7 < (uint)(piVar1[0x34] - iVar6 >> 2));
        }
        piVar5 = (int *)piVar1[0x28];
        local_8 = piVar5;
        puVar4 = FUN_00414000(&local_c,&param_1,(int *)piVar1[0x27],piVar5);
        _Dst = (int *)*puVar4;
        if (_Dst != piVar5) {
          _Size = piVar1[0x28] - (int)local_8;
          memmove(_Dst,local_8,_Size);
          piVar1[0x28] = _Size + (int)_Dst;
        }
      }
    }
  }
  return;
}


void FUN_0040e700(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *_Dst;
  uint uVar5;
  size_t _Size;
  int iVar6;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0238;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = *(int **)(DAT_0065b5cc + 0x3c);
  local_40 = *(int **)(DAT_0065b5cc + 0x40);
  if (local_28 != local_40) {
    do {
      local_24 = *(int **)(*local_28 + 0xcc);
      local_3c = *(int **)(*local_28 + 0xd0);
      if (local_24 != local_3c) {
        do {
          local_14 = *local_24;
          local_20 = (int *)0x0;
          local_4c = (int *)0x0;
          local_48 = (int *)0x0;
          local_18 = (int *)0x0;
          local_44 = (int *)0x0;
          local_8 = 0;
          uVar5 = 0;
          piVar4 = *(int **)(local_14 + 0x214);
          uVar3 = (uint)((int)*(int **)(local_14 + 0x218) + (3 - (int)piVar4)) >> 2;
          if (*(int **)(local_14 + 0x218) < piVar4) {
            uVar3 = 0;
          }
          if (uVar3 != 0) {
            do {
              local_20 = (int *)*piVar4;
              if ((local_20[0x4c] == param_1) || (local_20[0x49] == *(int *)(param_1 + 0x250))) {
                if (local_18 == local_48) {
                  FUN_00414080(&local_4c,local_48,&local_20);
                  local_18 = local_44;
                }
                else {
                  *local_48 = (int)local_20;
                  local_48 = local_48 + 1;
                }
              }
              uVar5 = uVar5 + 1;
              piVar4 = piVar4 + 1;
            } while (uVar5 != uVar3);
            local_20 = local_4c;
          }
          local_4c = local_20;
          local_1c = local_20;
          if (local_20 != local_48) {
            local_38 = param_1 + 8;
            local_34 = local_14 + 8;
            iVar6 = local_14;
            do {
              pvVar1 = (void *)*local_1c;
              FUN_00591070("DETAIL","Removing sensor data for ship \'%s\' from ship %s");
              local_30 = *(undefined4 **)(iVar6 + 0x218);
              _Dst = *(undefined4 **)(iVar6 + 0x214);
              if (_Dst != local_30) {
                do {
                  if ((void *)*_Dst == pvVar1) break;
                  _Dst = _Dst + 1;
                } while (_Dst != local_30);
                if (_Dst != local_30) {
                  puVar2 = _Dst + 1;
                  uVar3 = 0;
                  uVar5 = (uint)((int)local_30 + (3 - (int)puVar2)) >> 2;
                  if (local_30 < puVar2) {
                    uVar5 = 0;
                  }
                  if (uVar5 != 0) {
                    do {
                      if ((void *)*puVar2 != pvVar1) {
                        *_Dst = (void *)*puVar2;
                        _Dst = _Dst + 1;
                      }
                      uVar3 = uVar3 + 1;
                      puVar2 = puVar2 + 1;
                    } while (uVar3 != uVar5);
                  }
                  iVar6 = local_14;
                  if (_Dst != local_30) {
                    _Size = *(int *)(local_14 + 0x218) - (int)local_30;
                    memmove(_Dst,local_30,_Size);
                    *(size_t *)(local_14 + 0x218) = _Size + (int)_Dst;
                    iVar6 = local_14;
                  }
                }
              }
              if (pvVar1 != (void *)0x0) {
                FUN_0040e990((int)pvVar1);
                FUN_005adb3f(pvVar1);
              }
              local_1c = local_1c + 1;
            } while (local_1c != local_48);
          }
          local_8 = 0xffffffff;
          if (local_20 != (int *)0x0) {
            piVar4 = local_20;
            if ((0xfff < ((int)local_18 - (int)local_20 & 0xfffffffcU)) &&
               (piVar4 = (int *)local_20[-1], 0x1f < (uint)((int)local_20 + (-4 - (int)piVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(piVar4);
          }
          local_24 = local_24 + 1;
        } while (local_24 != local_3c);
      }
      local_28 = local_28 + 1;
    } while (local_28 != local_40);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0040e990(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_00413270((int *)(param_1 + 0xf8));
  FUN_00413270((int *)(param_1 + 0xec));
  if (0xf < *(uint *)(param_1 + 0xd4)) {
    pvVar1 = *(void **)(param_1 + 0xc0);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0xd4) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040eb7d;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xf;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  if (0xf < *(uint *)(param_1 + 0xbc)) {
    pvVar1 = *(void **)(param_1 + 0xa8);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0xbc) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040eb7d;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xf;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (0xf < *(uint *)(param_1 + 0xa4)) {
    pvVar1 = *(void **)(param_1 + 0x90);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0xa4) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040eb7d;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xf;
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (0xf < *(uint *)(param_1 + 0x8c)) {
    pvVar1 = *(void **)(param_1 + 0x78);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x8c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040eb7d;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xf;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (0xf < *(uint *)(param_1 + 0x74)) {
    pvVar1 = *(void **)(param_1 + 0x60);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x74) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040eb7d;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xf;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (0xf < *(uint *)(param_1 + 0x5c)) {
    pvVar1 = *(void **)(param_1 + 0x48);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x5c) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0040eb7d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xf;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}


void __thiscall
FUN_0040eba0(void *this,int param_1,float param_2,float param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 *this_00;
  int *piVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0283;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  for (piVar3 = *(int **)(DAT_0065b5cc + 0x3c); local_14 = this,
      piVar3 != *(int **)(DAT_0065b5cc + 0x40); piVar3 = piVar3 + 1) {
    piVar1 = (int *)*piVar3;
    if (*piVar1 == param_1) {
      this_00 = (undefined4 *)FUN_005adb0f(0xf8);
      local_8._0_1_ = 2;
      local_14 = this_00;
      FUN_005214e0(this_00,3);
      iVar2 = DAT_0065b5cc;
      local_8 = CONCAT31(local_8._1_3_,1);
      *this_00 = CounterMeasure::vftable;
      this_00[0x3c] = param_4;
      this_00[0x3d] = 0x42b40000;
      *(double *)(this_00 + 10) = (double)param_2;
      this_00[8] = param_1;
      *(double *)(this_00 + 0xc) = (double)param_3;
      puVar5 = *(undefined4 **)(iVar2 + 0x3c);
      goto joined_r0x0040ec5b;
    }
  }
  goto LAB_0040ecfa;
joined_r0x0040ec5b:
  if (puVar5 == *(undefined4 **)(iVar2 + 0x40)) goto LAB_0040ec6d;
  piVar3 = (int *)*puVar5;
  if (*piVar3 == param_1) goto LAB_0040ec6f;
  puVar5 = puVar5 + 1;
  goto joined_r0x0040ec5b;
LAB_0040ec6d:
  piVar3 = (int *)0x0;
LAB_0040ec6f:
  this_00[9] = piVar3;
  this_00[0x19] = param_5;
  if ((undefined4 **)(this_00 + 0x1a) != &param_6) {
    ppuVar4 = &param_6;
    if (0xf < in_stack_0000002c) {
      ppuVar4 = (undefined4 **)param_6;
    }
    FUN_00402690(this_00 + 0x1a,ppuVar4,in_stack_00000028);
  }
  puVar5 = (undefined4 *)piVar1[0x28];
  if ((undefined4 *)piVar1[0x29] == puVar5) {
    local_14 = this_00;
    FUN_00414080(piVar1 + 0x27,puVar5,&local_14);
  }
  else {
    *puVar5 = this_00;
    piVar1[0x28] = piVar1[0x28] + 4;
    local_14 = this_00;
  }
  FUN_00591070("WORLD","Added countermeasure for rego (%s) to %f, %f in sector %d");
LAB_0040ecfa:
  if (0xf < in_stack_0000002c) {
    puVar5 = param_6;
    if ((0xfff < in_stack_0000002c + 1) &&
       (puVar5 = (undefined4 *)param_6[-1], 0x1f < (uint)((int)param_6 + (-4 - (int)puVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_10;
  return;
}


int FUN_0040ed50(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte **ppbVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  float fVar11;
  uint in_stack_00000020;
  uint in_stack_00000024;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b02e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar3 = false;
  bVar2 = false;
  local_18 = 0.0;
  local_8 = 1;
  for (piVar7 = *(int **)(DAT_0065b5cc + 0x3c); piVar7 != *(int **)(DAT_0065b5cc + 0x40);
      piVar7 = piVar7 + 1) {
    piVar1 = (int *)*piVar7;
    if (*piVar1 == param_1) {
      iVar8 = piVar1[0x27];
      uVar10 = 0;
      param_1 = 0;
      if (piVar1[0x28] - iVar8 >> 2 != 0) goto LAB_0040ee00;
      goto LAB_0040eda8;
    }
  }
  param_1 = 0;
  goto LAB_0040eda8;
LAB_0040ee00:
  do {
    iVar8 = *(int *)(iVar8 + uVar10 * 4);
    if (*(int *)(iVar8 + 0x60) == 3) {
      pbVar9 = (byte *)(iVar8 + 0x68);
      ppbVar5 = &param_4;
      if (0xf < in_stack_00000024) {
        ppbVar5 = (byte **)param_4;
      }
      if (0xf < *(uint *)(iVar8 + 0x7c)) {
        pbVar9 = *(byte **)(iVar8 + 0x68);
      }
      uVar6 = FUN_004031f0(pbVar9,*(uint *)(iVar8 + 0x78),(byte *)ppbVar5,in_stack_00000020);
      if ((char)uVar6 != '\0') {
        if (param_1 == 0) {
LAB_0040ef52:
          bVar4 = true;
        }
        else {
          local_28 = (float)*(double *)(param_1 + 0x28);
          local_24 = (float)*(double *)(param_1 + 0x30);
          iVar8 = *(int *)(piVar1[0x27] + uVar10 * 4);
          local_30 = (float)*(double *)(iVar8 + 0x28);
          local_2c = (float)*(double *)(iVar8 + 0x30);
          local_8 = 3;
          bVar3 = true;
          bVar2 = true;
          local_18 = 4.2039e-45;
          local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&param_2);
          local_20 = local_1c * 0.5;
          local_14 = (float)(0x5f3759df - ((uint)local_1c >> 1));
          fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&param_2);
          local_18 = (float)(0x5f3759df - ((uint)fVar11 >> 1));
          if ((1.5 - fVar11 * 0.5 * local_18 * local_18) * local_18 * fVar11 <
              (1.5 - local_20 * local_14 * local_14) * local_14 * local_1c) goto LAB_0040ef52;
          bVar4 = false;
        }
        if (bVar2) {
          bVar2 = false;
        }
        local_8 = 1;
        if (bVar3) {
          bVar3 = false;
        }
        if (bVar4) {
          param_1 = *(int *)(piVar1[0x27] + uVar10 * 4);
        }
      }
    }
    uVar10 = uVar10 + 1;
    iVar8 = piVar1[0x27];
  } while (uVar10 < (uint)(piVar1[0x28] - iVar8 >> 2));
LAB_0040eda8:
  if (0xf < in_stack_00000024) {
    pbVar9 = param_4;
    if ((0xfff < in_stack_00000024 + 1) &&
       (pbVar9 = *(byte **)(param_4 + -4), (byte *)0x1f < param_4 + (-4 - (int)pbVar9))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar9);
  }
  ExceptionList = local_10;
  return param_1;
}


void FUN_0040efd0(undefined4 param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint local_48;
  undefined4 *local_44;
  uint local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b031e;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 0;
  local_48 = 0;
  iVar9 = DAT_0065b5cc;
  puVar4 = &stack0xfffffffc;
  if (*(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2 != 0) {
    do {
      local_40 = 0;
      iVar1 = *(int *)(*(int *)(iVar9 + 0x3c) + local_48 * 4);
      iVar8 = *(int *)(iVar1 + 0xcc);
      if (*(int *)(iVar1 + 0xd0) - iVar8 >> 2 != 0) {
        do {
          if (*(char *)(*(int *)(local_40 * 4 + iVar8) + 0x234) != '\0') {
            pvVar5 = (void *)FUN_005adb0f(0x138);
            local_14._0_1_ = 1;
            iVar9 = *(int *)(*(int *)(iVar1 + 0xcc) + local_40 * 4);
            iVar8 = *(int *)(iVar9 + 0x220);
            *(int *)(iVar9 + 0x220) = iVar8 + 1;
            puVar6 = FUN_00508c00(pvVar5,0xffffffff,iVar8);
            local_14 = (uint)local_14._1_3_ << 8;
            puVar6[0x38] = 2;
            *(double *)(puVar6 + 4) = (double)param_2;
            *(double *)(puVar6 + 6) = (double)param_3;
            *(undefined2 *)(puVar6 + 2) = 0x101;
            local_44 = puVar6;
            piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,"Transient %d");
            if (puVar6 + 0x12 != piVar7) {
              FUN_00401b20(puVar6 + 0x12);
              iVar9 = piVar7[1];
              iVar8 = piVar7[2];
              iVar3 = piVar7[3];
              puVar6[0x12] = *piVar7;
              puVar6[0x13] = iVar9;
              puVar6[0x14] = iVar8;
              puVar6[0x15] = iVar3;
              *(undefined8 *)(puVar6 + 0x16) = *(undefined8 *)(piVar7 + 4);
              piVar7[4] = 0;
              piVar7[5] = 0xf;
              *(undefined1 *)piVar7 = 0;
            }
            if (0xf < local_28) {
              pvVar5 = local_3c[0];
              if ((0xfff < local_28 + 1) &&
                 (pvVar5 = *(void **)((int)local_3c[0] + -4),
                 0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar5);
            }
            FUN_00402690(puVar6 + 0x18,"Explosion",9);
            puVar6[0x4a] = 0xbf800000;
            iVar9 = *(int *)(*(int *)(iVar1 + 0xcc) + local_40 * 4);
            puVar2 = *(undefined4 **)(iVar9 + 0x218);
            if (*(undefined4 **)(iVar9 + 0x21c) == puVar2) {
              FUN_00414080((void *)(iVar9 + 0x214),puVar2,&local_44);
            }
            else {
              *puVar2 = puVar6;
              *(int *)(iVar9 + 0x218) = *(int *)(iVar9 + 0x218) + 4;
            }
            FUN_00591070("DETAIL","%s: added explosion sensor data (%d) instance at %f, %f");
          }
          local_40 = local_40 + 1;
          iVar8 = *(int *)(iVar1 + 0xcc);
          iVar9 = DAT_0065b5cc;
        } while (local_40 < (uint)(*(int *)(iVar1 + 0xd0) - iVar8 >> 2));
      }
      local_48 = local_48 + 1;
      puVar4 = puStack_20;
    } while (local_48 < (uint)(*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) >> 2));
  }
  puStack_20 = puVar4;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_0040f270(int param_1,int param_2,int param_3,undefined4 param_4,float param_5,float param_6
                 )

{
  int *piVar1;
  undefined3 uVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  float fVar12;
  float in_XMM3_Da;
  char *pcVar13;
  int iVar14;
  void *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  void *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b038b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (void *)0x0;
  puVar8 = (undefined4 *)0x0;
  local_58 = (void *)0x0;
  local_54 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  uVar9 = 0;
  uStack_7 = 0;
  uVar2 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  iVar7 = *(int *)(param_2 + 0x9c);
  local_2c = in_XMM3_Da;
  if (*(int *)(param_2 + 0xa0) - iVar7 >> 2 != 0) {
    local_24 = in_XMM3_Da / 100.0;
    do {
      iVar7 = *(int *)(iVar7 + uVar9 * 4);
      local_38 = (undefined4 *)(float)*(double *)(iVar7 + 0x30);
      local_3c = (float)*(double *)(iVar7 + 0x28);
      local_8 = 2;
      local_28 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&param_5);
      local_14 = (int *)(0x5f3759df - ((uint)local_28 >> 1));
      local_8 = 1;
      fVar12 = (1.5 - local_28 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
               local_28;
      if (0.1 <= (1.0 / (fVar12 * fVar12)) * local_24) {
        FUN_00591070("WORLD","Synthetic object #%d has been destroyed by an explosion");
        puVar4 = (undefined4 *)(*(int *)(param_2 + 0x9c) + uVar9 * 4);
        if (local_1c == puVar8) {
          FUN_00414080(&local_58,puVar8,puVar4);
          local_1c = local_50;
          puVar8 = local_54;
        }
        else {
          *puVar8 = *puVar4;
          local_54 = puVar8 + 1;
          puVar8 = local_54;
        }
      }
      uVar9 = uVar9 + 1;
      iVar7 = *(int *)(param_2 + 0x9c);
    } while (uVar9 < (uint)(*(int *)(param_2 + 0xa0) - iVar7 >> 2));
    local_18 = local_58;
    uVar2 = uStack_7;
  }
  uStack_7 = uVar2;
  uVar10 = 0;
  uVar9 = (int)puVar8 - (int)local_18 >> 2;
  local_58 = local_18;
  if (uVar9 != 0) {
    do {
      pvVar5 = local_18;
      FUN_0040e600(*(int *)((int)local_18 + uVar10 * 4));
      FUN_00591070("WORLD","Removed synthetic object %d from sector %d");
      puVar8 = *(undefined4 **)((int)pvVar5 + uVar10 * 4);
      if (puVar8 != (undefined4 *)0x0) {
        FUN_00521670(puVar8);
        FUN_005adb3f(puVar8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  local_28 = 0.0;
  iVar7 = *(int *)(param_2 + 0xcc);
  if (*(int *)(param_2 + 0xd0) - iVar7 >> 2 != 0) {
    do {
      fVar12 = local_28;
      iVar6 = *(int *)(iVar7 + (int)local_28 * 4);
      if (iVar6 != param_3) {
        if (*(char *)(iVar6 + 0x234) != '\0') {
          local_40 = (float)*(double *)(iVar6 + 0x30);
          local_44 = (float)*(double *)(iVar6 + 0x28);
          local_8 = 3;
          local_24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_44,(Vec2 *)&param_5);
          local_14 = (int *)(0x5f3759df - ((uint)local_24 >> 1));
          local_8 = 1;
          iVar7 = *(int *)(*(int *)(param_2 + 0xcc) + (int)fVar12 * 4);
          if (5.0 <= (1.5 - local_24 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
                     local_24) {
            FUN_00592f80((float)*(double *)(iVar7 + 0x28),(float)*(double *)(iVar7 + 0x30),param_5);
            if (param_1 == 1) {
              pcVar13 = "WARNING: EMP detonation detected on bearing %.0f^";
            }
            else {
              pcVar13 = "WARNING: Explosion detected on bearing %.0f^";
            }
          }
          else {
            FUN_00592f80((float)*(double *)(iVar7 + 0x28),(float)*(double *)(iVar7 + 0x30),param_5);
            if (param_1 == 1) {
              pcVar13 = "WARNING: EMP detonation at close range";
            }
            else {
              pcVar13 = "WARNING: Explosive detonation at close range";
            }
          }
          FUN_00527550(*(int **)(iVar7 + 0x224),3,pcVar13);
          iVar14 = -1;
          iVar6 = 1;
          iVar7 = *(int *)(*(int *)(param_2 + 0xcc) + (int)fVar12 * 4);
          pvVar5 = (void *)FUN_00402f60();
          FUN_00557fb0(pvVar5,iVar7,iVar6,iVar14);
          iVar7 = *(int *)(param_2 + 0xcc);
        }
        piVar1 = *(int **)(iVar7 + (int)fVar12 * 4);
        local_4c = (float)*(double *)(piVar1 + 10);
        local_48 = (float)*(double *)(piVar1 + 0xc);
        local_8 = 4;
        local_14 = piVar1;
        local_20 = cocos2d::Vec2::getDistance((Vec2 *)&local_4c,(Vec2 *)&param_5);
        local_8 = 1;
        fVar12 = local_20;
        if (param_1 == 1) {
          fVar12 = local_20 * 0.25;
        }
        local_24 = (1.0 / (fVar12 * fVar12)) * (local_2c / 100.0);
        if (0.1 <= local_24) {
          FUN_00591070(&DAT_005cdc70,"Vessel \'%s\' was hit by %s at %.2f, %.2f");
          FUN_00591070(&DAT_005cdc70,"Modified strength is %f");
          iVar7 = piVar1[0x10];
          fVar12 = 0.0;
          uVar9 = 0;
          local_20 = 0.0;
          iVar6 = *(int *)(iVar7 + 0x3c);
          local_34 = *(int *)(iVar7 + 0x40) - iVar6 >> 2;
          if (local_34 != 0) {
            do {
              piVar1 = *(int **)(iVar6 + uVar9 * 4);
              if ((*(char *)((int)piVar1 + 99) != '\0') &&
                 (cVar3 = (**(code **)(*piVar1 + 0x14))(), cVar3 == '\0')) {
                fVar12 = (float)((int)fVar12 + 1);
              }
              uVar9 = uVar9 + 1;
              iVar6 = *(int *)(iVar7 + 0x3c);
            } while (uVar9 < (uint)(*(int *)(iVar7 + 0x40) - iVar6 >> 2));
            iVar7 = local_14[0x10];
            local_20 = fVar12;
          }
          iVar6 = *(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2;
          local_30 = iVar6 * 100;
          if ((local_30 != 0) && (uVar9 = 0, iVar6 != 0)) {
            do {
              FUN_00437440(*(int **)(*(int *)(*(int *)(iVar7 + 0x3c) + uVar9 * 4) + 0xc));
              uVar9 = uVar9 + 1;
            } while (uVar9 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
          }
          FUN_00591070(&DAT_005cdc70,
                       "Ship\'s pre-damage state is %d percent, with %d/%d modules working.");
          piVar1 = local_14;
          dVar11 = (double)(ulonglong)(uint)param_5;
          FUN_0050b390(local_14,param_5);
          dVar11 = dVar11 - (double)(float)piVar1[0x48];
          if (dVar11 < 0.0) {
            dVar11 = dVar11 + 360.0;
          }
          cVar3 = (**(code **)(*piVar1 + 0xc))((int)dVar11,local_24,param_1);
          if (cVar3 == '\0') {
            iVar7 = piVar1[0x10];
            uVar9 = 0;
            fVar12 = 0.0;
            local_24 = 0.0;
            iVar6 = *(int *)(iVar7 + 0x3c);
            local_30 = *(int *)(iVar7 + 0x40) - iVar6 >> 2;
            if (local_30 != 0) {
              do {
                piVar1 = *(int **)(iVar6 + uVar9 * 4);
                if ((*(char *)((int)piVar1 + 99) != '\0') &&
                   (cVar3 = (**(code **)(*piVar1 + 0x14))(), cVar3 == '\0')) {
                  fVar12 = (float)((int)fVar12 + 1);
                }
                uVar9 = uVar9 + 1;
                iVar6 = *(int *)(iVar7 + 0x3c);
              } while (uVar9 < (uint)(*(int *)(iVar7 + 0x40) - iVar6 >> 2));
              iVar7 = local_14[0x10];
              local_24 = fVar12;
            }
            iVar6 = *(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2;
            local_34 = iVar6 * 100;
            if ((local_34 != 0) && (uVar9 = 0, iVar6 != 0)) {
              do {
                FUN_00437440(*(int **)(*(int *)(*(int *)(iVar7 + 0x3c) + uVar9 * 4) + 0xc));
                uVar9 = uVar9 + 1;
              } while (uVar9 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
            }
            FUN_00591070(&DAT_005cdc70,
                         "Ship\'s post-damage state is %d percent, with %d/%d modules working.");
            FUN_00591070(&DAT_005cdc70,"Damage done.");
          }
          else if ((((piVar1[0x11] != 0) && (*(int *)(piVar1[0x11] + 0x70) == 3)) &&
                   (piVar1[0xe7] != 0)) && (*(char *)(piVar1[0xe7] + 0x234) != '\0')) {
            if (DAT_0065c294 == (int *)0x0) {
              local_38 = (undefined4 *)FUN_005adb0f(0x28);
              local_8 = 5;
              DAT_0065c294 = (int *)FUN_0051e500(local_38);
              local_8 = 1;
            }
            *DAT_0065c294 = *DAT_0065c294 + 1;
          }
        }
      }
      iVar7 = *(int *)(param_2 + 0xcc);
      local_28 = (float)((int)local_28 + 1);
    } while ((uint)local_28 < (uint)(*(int *)(param_2 + 0xd0) - iVar7 >> 2));
  }
  FUN_0040efd0(iVar7,param_5,param_6);
  if (local_18 != (void *)0x0) {
    pvVar5 = local_18;
    if ((0xfff < ((int)local_1c - (int)local_18 & 0xfffffffcU)) &&
       (pvVar5 = *(void **)((int)local_18 + -4), 0x1f < (uint)((int)local_18 + (-4 - (int)pvVar5))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return;
}


int __cdecl FUN_0040f990(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005ce064)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_0040f9e1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 1;
LAB_0040f9e1:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
      pbVar8 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar8)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar8);
  }
  return iVar7;
}


void FUN_0040fa20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x130);
  uVar1 = (uint)((int)*(undefined4 **)(DAT_0065b5cc + 0x134) + (3 - (int)puVar2)) >> 2;
  if (*(undefined4 **)(DAT_0065b5cc + 0x134) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        FUN_00405e80((void *)*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(DAT_0065b5cc + 0x134) = *(undefined4 *)(DAT_0065b5cc + 0x130);
  return;
}


void FUN_0040fa80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x13c);
  uVar1 = (uint)((int)*(undefined4 **)(DAT_0065b5cc + 0x140) + (3 - (int)puVar2)) >> 2;
  if (*(undefined4 **)(DAT_0065b5cc + 0x140) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*puVar2 != (int *)0x0) {
        FUN_0040fae0((int *)*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(DAT_0065b5cc + 0x140) = *(undefined4 *)(DAT_0065b5cc + 0x13c);
  return;
}


int * __fastcall FUN_0040fae0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)param_1[0x16] != (int *)0x0) {
    FUN_004826b0((int *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (0xf < (uint)param_1[0x13]) {
    pvVar1 = (void *)param_1[0xe];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x13] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040fbd0;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (0xf < (uint)param_1[0xd]) {
    pvVar1 = (void *)param_1[8];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xd] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0040fbd0;
    FUN_005adb3f(pvVar2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0040fbd0:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


undefined4 FUN_0040fbe0(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xfffffffc) != 0);
}


undefined4 FUN_0040fc00(byte *param_1)

{
  byte **ppbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  
  uVar7 = in_stack_00000030;
  pbVar6 = in_stack_0000001c;
  iVar5 = *(int *)(DAT_0065b5cc + 0x13c);
  uVar8 = 0;
  if (*(int *)(DAT_0065b5cc + 0x140) - iVar5 >> 2 != 0) {
    do {
      iVar5 = *(int *)(iVar5 + uVar8 * 4);
      pbVar3 = *(byte **)(iVar5 + 0x58);
      ppbVar1 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar1 = (byte **)param_1;
      }
      pbVar4 = pbVar3;
      if (0xf < *(uint *)(pbVar3 + 0x14)) {
        pbVar4 = *(byte **)pbVar3;
      }
      uVar2 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),(byte *)ppbVar1,in_stack_00000014);
      if ((char)uVar2 != '\0') {
        pbVar3 = (byte *)&stack0x0000001c;
        if (0xf < uVar7) {
          pbVar3 = pbVar6;
        }
        uVar2 = FUN_004031f0(pbVar3,in_stack_0000002c,(byte *)&PTR_005ce008,0);
        if ((char)uVar2 == '\0') {
          pbVar3 = (byte *)&stack0x0000001c;
          if (0xf < uVar7) {
            pbVar3 = pbVar6;
          }
          pbVar4 = (byte *)(iVar5 + 0x20);
          if (0xf < *(uint *)(iVar5 + 0x34)) {
            pbVar4 = *(byte **)(iVar5 + 0x20);
          }
          uVar2 = FUN_004031f0(pbVar4,*(uint *)(iVar5 + 0x30),pbVar3,in_stack_0000002c);
          if ((char)uVar2 == '\0') goto LAB_0040fcaa;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x58) + 0x20);
        goto LAB_0040fcdb;
      }
LAB_0040fcaa:
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)(DAT_0065b5cc + 0x13c);
    } while (uVar8 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar5 >> 2));
  }
  uVar9 = 0;
LAB_0040fcdb:
  if (0xf < in_stack_00000018) {
    pbVar6 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar6 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar6)))
    goto LAB_0040fd47;
    FUN_005adb3f(pbVar6);
    uVar7 = in_stack_00000030;
    pbVar6 = in_stack_0000001c;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  if (0xf < uVar7) {
    pbVar3 = pbVar6;
    if ((0xfff < uVar7 + 1) &&
       (pbVar3 = *(byte **)(pbVar6 + -4), (byte *)0x1f < pbVar6 + (-4 - (int)pbVar3))) {
LAB_0040fd47:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar3);
  }
  return uVar9;
}


undefined1 FUN_0040fd70(void)

{
  byte bVar1;
  undefined4 *this;
  uint in_stack_ffffffd0;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b03b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(DAT_0065b5cc + 0x128) == 0) {
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"has_passenger",0xd);
    local_8 = 0;
    this = FUN_00412df0();
    local_8 = 0xffffffff;
    bVar1 = FUN_004a1150(this,pvVar2);
    if (bVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}


undefined4 FUN_0040fe10(byte *param_1)

{
  byte *pbVar1;
  byte **ppbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  
  pbVar7 = in_stack_0000001c;
  pbVar10 = param_1;
  iVar5 = *(int *)(DAT_0065b5cc + 0x13c);
  uVar8 = 0;
  if (*(int *)(DAT_0065b5cc + 0x140) - iVar5 >> 2 != 0) {
    do {
      iVar5 = *(int *)(iVar5 + uVar8 * 4);
      pbVar4 = (byte *)(iVar5 + 0x20);
      ppbVar2 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar2 = (byte **)pbVar10;
      }
      if (0xf < *(uint *)(iVar5 + 0x34)) {
        pbVar4 = *(byte **)pbVar4;
      }
      uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar5 + 0x30),(byte *)ppbVar2,in_stack_00000014);
      if ((char)uVar3 != '\0') {
        pbVar4 = (byte *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pbVar4 = pbVar7;
        }
        pbVar1 = *(byte **)(iVar5 + 0x58);
        pbVar6 = pbVar1;
        if (0xf < *(uint *)(pbVar1 + 0x14)) {
          pbVar6 = *(byte **)pbVar1;
        }
        uVar3 = FUN_004031f0(pbVar6,*(uint *)(pbVar1 + 0x10),pbVar4,in_stack_0000002c);
        if ((char)uVar3 != '\0') {
          uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x58) + 0x24);
          goto LAB_0040fec0;
        }
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)(DAT_0065b5cc + 0x13c);
    } while (uVar8 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar5 >> 2));
  }
  uVar9 = 0xffffffff;
LAB_0040fec0:
  if (0xf < in_stack_00000018) {
    pbVar7 = pbVar10;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar7 = *(byte **)(pbVar10 + -4);
      if ((byte *)0x1f < pbVar10 + (-4 - (int)pbVar7)) goto LAB_0040ff29;
    }
    FUN_005adb3f(pbVar7);
    pbVar7 = in_stack_0000001c;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pbVar10 = pbVar7;
    if (0xfff < in_stack_00000030 + 1) {
      pbVar10 = *(byte **)(pbVar7 + -4);
      if ((byte *)0x1f < pbVar7 + (-4 - (int)pbVar10)) {
LAB_0040ff29:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar10);
  }
  return uVar9;
}


void FUN_0040ff50(byte *param_1)

{
  byte ***pppbVar1;
  byte **ppbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte ****ppppbVar7;
  int iVar8;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  byte *in_stack_ffffffa4;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b03f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  uVar9 = 0;
  iVar4 = *(int *)(DAT_0065b5cc + 0x13c);
  iVar8 = DAT_0065b5cc;
  if (*(int *)(DAT_0065b5cc + 0x140) - iVar4 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar4 + uVar9 * 4);
      ppbVar2 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar2 = (byte **)param_1;
      }
      pbVar5 = (byte *)(iVar4 + 0x38);
      if (0xf < *(uint *)(iVar4 + 0x4c)) {
        pbVar5 = *(byte **)(iVar4 + 0x38);
      }
      uVar3 = FUN_004031f0(pbVar5,*(uint *)(iVar4 + 0x48),(byte *)ppbVar2,in_stack_00000014);
      if (((char)uVar3 != '\0') && ((*(undefined4 **)(iVar4 + 0x58))[6] != 0)) {
        FUN_004024e0(&stack0xffffffa4,*(undefined4 **)(iVar4 + 0x58));
        iVar4 = FUN_004a8380(in_stack_ffffffa4);
        FUN_004024e0(local_2c,*(undefined4 **)(iVar4 + 0x1c));
        uVar3 = local_18;
        pppbVar1 = local_2c[0];
        pbVar5 = (byte *)&stack0x0000001c;
        if (0xf < in_stack_00000030) {
          pbVar5 = in_stack_0000001c;
        }
        ppppbVar7 = local_2c;
        if (0xf < local_18) {
          ppppbVar7 = (byte ****)local_2c[0];
        }
        uVar6 = FUN_004031f0((byte *)ppppbVar7,local_1c,pbVar5,in_stack_0000002c);
        if (0xf < uVar3) {
          ppppbVar7 = (byte ****)pppbVar1;
          if ((0xfff < uVar3 + 1) &&
             (ppppbVar7 = (byte ****)pppbVar1[-1],
             (byte *)0x1f < (byte *)((int)pppbVar1 + (-4 - (int)ppppbVar7)))) goto LAB_004100a4;
          FUN_005adb3f(ppppbVar7);
        }
        iVar8 = DAT_0065b5cc;
        if ((char)uVar6 != '\0') break;
      }
      uVar9 = uVar9 + 1;
      iVar4 = *(int *)(iVar8 + 0x13c);
    } while (uVar9 < (uint)(*(int *)(iVar8 + 0x140) - iVar4 >> 2));
  }
  if (0xf < in_stack_00000018) {
    pbVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar5 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar5))) {
LAB_004100a4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pbVar5 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pbVar5 = *(byte **)(in_stack_0000001c + -4),
       (byte *)0x1f < in_stack_0000001c + (-4 - (int)pbVar5))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
