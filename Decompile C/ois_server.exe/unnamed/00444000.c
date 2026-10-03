#include "../ois_server.exe.h"


void FUN_00444090(void)

{
  byte bVar1;
  int iVar2;
  byte *this;
  int *piVar3;
  byte *pbVar4;
  byte *****pppppbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte ****ppppbVar10;
  void *pvVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  byte *local_c4;
  byte *local_c0;
  byte local_bc [16];
  undefined4 local_ac;
  undefined4 local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte ****local_44 [4];
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3e71;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c4 = (byte *)FUN_005adb0f(0xd0);
  iVar14 = DAT_0065b3b8;
  DAT_0065b3b8 = DAT_0065b3b8 + 1;
  this = FUN_00521340(local_c4,iVar14,2);
  *(undefined4 *)(this + 0x18) = DAT_00655050;
  puVar12 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar12 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar3 = (int *)*puVar12;
      if (*piVar3 == *(int *)(this + 0x18)) goto LAB_0044411f;
      puVar12 = puVar12 + 1;
    } while (puVar12 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar3 = (int *)0x0;
LAB_0044411f:
  *(int **)(this + 0x1c) = piVar3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_c4 = this;
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 0;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this != pbVar4) {
    pbVar7 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar7 = *(byte **)pbVar4;
    }
    FUN_00402690(this,pbVar7,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
LAB_0044419e:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 1;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x3c != pbVar4) {
    pbVar7 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar7 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x3c,pbVar7,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 2;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x5c != pbVar4) {
    pbVar7 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar7 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x5c,pbVar7,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"probeflag",9);
  local_8 = 3;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x74 != pbVar4) {
    pbVar7 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar7 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x74,pbVar7,*(uint *)(pbVar4 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"planet",6);
  local_8 = 4;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(local_44,(undefined4 *)pbVar4);
  ppppbVar10 = local_44[0];
  uVar13 = 0;
  iVar14 = *(int *)(DAT_0065b5cc + 0x30);
  if (*(int *)(DAT_0065b5cc + 0x34) - iVar14 >> 2 != 0) {
    do {
      iVar14 = *(int *)(iVar14 + uVar13 * 4);
      pppppbVar5 = local_44;
      if (0xf < local_30) {
        pppppbVar5 = (byte *****)ppppbVar10;
      }
      pbVar4 = (byte *)(iVar14 + 0x3c);
      if (0xf < *(uint *)(iVar14 + 0x50)) {
        pbVar4 = *(byte **)(iVar14 + 0x3c);
      }
      uVar6 = FUN_004031f0(pbVar4,*(uint *)(iVar14 + 0x4c),(byte *)pppppbVar5,local_34);
      if ((char)uVar6 != '\0') {
        iVar14 = *(int *)(*(int *)(DAT_0065b5cc + 0x30) + uVar13 * 4);
        if (0xf < local_30) {
          pppppbVar5 = (byte *****)ppppbVar10;
          if ((0xfff < local_30 + 1) &&
             (pppppbVar5 = (byte *****)ppppbVar10[-1],
             (byte *)0x1f < (byte *)((int)ppppbVar10 + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppbVar5);
        }
        goto LAB_0044446a;
      }
      uVar13 = uVar13 + 1;
      iVar14 = *(int *)(DAT_0065b5cc + 0x30);
    } while (uVar13 < (uint)(*(int *)(DAT_0065b5cc + 0x34) - iVar14 >> 2));
  }
  if (0xf < local_30) {
    pppppbVar5 = (byte *****)ppppbVar10;
    if ((0xfff < local_30 + 1) &&
       (pppppbVar5 = (byte *****)ppppbVar10[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar10 + (-4 - (int)pppppbVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar5);
  }
  iVar14 = 0;
LAB_0044446a:
  local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  *(int *)(this + 0x58) = iVar14;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
    iVar14 = *(int *)(this + 0x58);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (iVar14 == 0) {
    FUN_00402690(local_2c,"planet",6);
    local_8 = 5;
    FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_00591070("ERROR","Unknown planet: \'%s\'");
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
  }
  else {
    FUN_00402690(local_2c,"subclass",8);
    local_8 = 6;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar4 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar4 = *(byte **)pbVar7;
    }
    uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"telluric",8);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    if ((char)uVar13 == '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"subclass",8);
      local_8 = 7;
      pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar4 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar4 = *(byte **)pbVar7;
      }
      uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),&DAT_005e9420,3);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar11 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar11 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar11);
      }
      if ((char)uVar13 != '\0') {
        this[200] = 1;
        this[0xc9] = 0;
        this[0xca] = 0;
        this[0xcb] = 0;
      }
    }
    else {
      this[200] = 0;
      this[0xc9] = 0;
      this[0xca] = 0;
      this[0xcb] = 0;
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"diameter",8);
    local_8 = 8;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    iVar14 = atoi((char *)pbVar4);
    *(int *)(this + 0xb4) = iVar14;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"population",10);
    local_8 = 9;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    iVar14 = atoi((char *)pbVar4);
    local_8 = 0xffffffff;
    *(float *)(this + 0xc0) = (float)iVar14;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"gravity",7);
    local_8 = 10;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    dVar15 = atof((char *)pbVar4);
    *(float *)(this + 0xbc) = (float)dVar15;
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"locationx",9);
    local_8 = 0xb;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    iVar14 = atoi((char *)pbVar4);
    local_8 = 0xffffffff;
    *(double *)(this + 0x20) = (double)iVar14;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"locationy",9);
    local_8 = 0xc;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    iVar14 = atoi((char *)pbVar4);
    local_8 = 0xffffffff;
    *(double *)(this + 0x28) = (double)iVar14;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e9874,4);
    local_8 = 0xd;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (this + 0x8c != pbVar4) {
      pbVar7 = pbVar4;
      if (0xf < *(uint *)(pbVar4 + 0x14)) {
        pbVar7 = *(byte **)pbVar4;
      }
      FUN_00402690(this + 0x8c,pbVar7,*(uint *)(pbVar4 + 0x10));
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"habitat",7);
    local_8 = 0xe;
    pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    pbVar4 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar4 = *(byte **)pbVar7;
    }
    uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"industrial",10);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      ppppbVar10 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppbVar10 = (byte ****)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppbVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar10);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
    if ((char)uVar13 == '\0') {
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      FUN_00402690(local_5c,"habitat",7);
      local_8 = 0xf;
      pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
      pbVar4 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar4 = *(byte **)pbVar7;
      }
      uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"agricultural",0xc);
      local_8 = 0xffffffff;
      if (0xf < local_48) {
        pvVar11 = local_5c[0];
        if ((0xfff < local_48 + 1) &&
           (pvVar11 = *(void **)((int)local_5c[0] + -4),
           0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar11);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if ((char)uVar13 == '\0') {
        local_64 = 0;
        local_60 = 0xf;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        FUN_00402690(local_74,"habitat",7);
        local_8 = 0x10;
        pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
        pbVar4 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar4 = *(byte **)pbVar7;
        }
        uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"residential",0xb);
        local_8 = 0xffffffff;
        if (0xf < local_60) {
          pvVar11 = local_74[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar11 = *(void **)((int)local_74[0] + -4),
             0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar11);
        }
        local_64 = 0;
        local_60 = 0xf;
        local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
        if ((char)uVar13 == '\0') {
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
          FUN_00402690(local_8c,"habitat",7);
          local_8 = 0x11;
          pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
          pbVar4 = pbVar7;
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar4 = *(byte **)pbVar7;
          }
          uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"heliummine",10);
          local_8 = 0xffffffff;
          if (0xf < local_78) {
            pvVar11 = local_8c[0];
            if ((0xfff < local_78 + 1) &&
               (pvVar11 = *(void **)((int)local_8c[0] + -4),
               0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar11);
          }
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
          if ((char)uVar13 == '\0') {
            local_94 = 0;
            local_90 = 0xf;
            local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
            FUN_00402690(local_a4,"habitat",7);
            local_8 = 0x12;
            pbVar7 = FUN_00419170(&DAT_0065b530,(byte *)local_a4);
            pbVar4 = pbVar7;
            if (0xf < *(uint *)(pbVar7 + 0x14)) {
              pbVar4 = *(byte **)pbVar7;
            }
            uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"mineralmine",0xb);
            local_8 = 0xffffffff;
            if (0xf < local_90) {
              pvVar11 = local_a4[0];
              if ((0xfff < local_90 + 1) &&
                 (pvVar11 = *(void **)((int)local_a4[0] + -4),
                 0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar11);
            }
            local_94 = 0;
            local_90 = 0xf;
            local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
            if ((char)uVar13 == '\0') {
              local_ac = 0;
              local_a8 = 0xf;
              local_bc[0] = 0;
              FUN_00402690(local_bc,"habitat",7);
              local_8 = 0x13;
              pbVar7 = FUN_00419170(&DAT_0065b530,local_bc);
              pbVar4 = pbVar7;
              if (0xf < *(uint *)(pbVar7 + 0x14)) {
                pbVar4 = *(byte **)pbVar7;
              }
              uVar13 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),(byte *)"uninhabitable",0xd);
              local_8 = 0xffffffff;
              FUN_00401b20((int *)local_bc);
              if ((char)uVar13 != '\0') {
                this[0xc4] = 0;
                this[0xc5] = 0;
                this[0xc6] = 0;
                this[199] = 0;
              }
            }
            else {
              this[0xc4] = 5;
              this[0xc5] = 0;
              this[0xc6] = 0;
              this[199] = 0;
            }
          }
          else {
            this[0xc4] = 4;
            this[0xc5] = 0;
            this[0xc6] = 0;
            this[199] = 0;
          }
        }
        else {
          this[0xc4] = 2;
          this[0xc5] = 0;
          this[0xc6] = 0;
          this[199] = 0;
        }
      }
      else {
        this[0xc4] = 3;
        this[0xc5] = 0;
        this[0xc6] = 0;
        this[199] = 0;
      }
    }
    else {
      this[0xc4] = 1;
      this[0xc5] = 0;
      this[0xc6] = 0;
      this[199] = 0;
    }
    iVar14 = 0;
    do {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"atmosphere",10);
      local_8 = 0x14;
      pbVar8 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar4 = (&PTR_DAT_005ce650)[iVar14];
      local_c0 = pbVar4 + 1;
      pbVar7 = pbVar4;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      pbVar9 = pbVar8;
      if (0xf < *(uint *)(pbVar8 + 0x14)) {
        pbVar9 = *(byte **)pbVar8;
      }
      uVar13 = FUN_004031f0(pbVar9,*(uint *)(pbVar8 + 0x10),pbVar4,(int)pbVar7 - (int)local_c0);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar11 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar11 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0044419e;
        FUN_005adb3f(pvVar11);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if ((char)uVar13 != '\0') {
        *(int *)(this + 0xb8) = iVar14;
        goto LAB_00444ef5;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 4);
    this[0xb8] = 0;
    this[0xb9] = 0;
    this[0xba] = 0;
    this[0xbb] = 0;
LAB_00444ef5:
    iVar14 = *(int *)(this + 0x1c);
    puVar12 = *(undefined4 **)(iVar14 + 0x88);
    local_c0 = this;
    if (*(undefined4 **)(iVar14 + 0x8c) == puVar12) {
      FUN_00414080((void *)(iVar14 + 0x84),puVar12,&local_c0);
    }
    else {
      *puVar12 = this;
      *(int *)(iVar14 + 0x88) = *(int *)(iVar14 + 0x88) + 4;
    }
    iVar2 = *(int *)(local_c0 + 0x54);
    if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 0)) {
      puVar12 = *(undefined4 **)(iVar14 + 0x94);
      if (*(undefined4 **)(iVar14 + 0x98) == puVar12) {
        FUN_00414080((void *)(iVar14 + 0x90),puVar12,&local_c0);
      }
      else {
        *puVar12 = local_c0;
        *(int *)(iVar14 + 0x94) = *(int *)(iVar14 + 0x94) + 4;
      }
    }
    iVar14 = DAT_0065b5cc;
    puVar12 = *(undefined4 **)(DAT_0065b5cc + 0x34);
    if (*(undefined4 **)(DAT_0065b5cc + 0x38) == puVar12) {
      FUN_00414080((void *)(DAT_0065b5cc + 0x30),puVar12,&local_c4);
    }
    else {
      *puVar12 = this;
      *(int *)(iVar14 + 0x34) = *(int *)(iVar14 + 0x34) + 4;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00444fb0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  void *pvVar12;
  uint *puVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *in_stack_ffffff5c;
  byte *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  byte *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [3];
  int local_38;
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b3f60;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = (uint *)0x0;
  local_64 = (uint *)0x0;
  pbVar4 = (byte *)FUN_005adb0f(0x60);
  local_1c = 0;
  pbVar6 = pbVar4 + 0x34;
  local_18 = 0xf;
  pbVar4[0x10] = 0;
  pbVar4[0x11] = 0;
  pbVar4[0x12] = 0;
  pbVar4[0x13] = 0;
  pbVar4[0x14] = 0xf;
  pbVar4[0x15] = 0;
  pbVar4[0x16] = 0;
  pbVar4[0x17] = 0;
  *pbVar4 = 0;
  pbVar4[0x18] = 0;
  pbVar4[0x19] = 0;
  pbVar4[0x1a] = 0;
  pbVar4[0x1b] = 0;
  pbVar4[0x1c] = 0;
  pbVar4[0x1d] = 0;
  pbVar4[0x1e] = 0;
  pbVar4[0x1f] = 0;
  pbVar4[0x20] = 0;
  pbVar4[0x21] = 0;
  pbVar4[0x22] = 0;
  pbVar4[0x23] = 0;
  pbVar4[0x24] = 0;
  pbVar4[0x25] = 0;
  pbVar4[0x26] = 0;
  pbVar4[0x27] = 0;
  pbVar4[0x28] = 0;
  pbVar4[0x29] = 0;
  pbVar4[0x2a] = 0;
  pbVar4[0x2b] = 0;
  pbVar4[0x2c] = 0;
  pbVar4[0x2d] = 0;
  pbVar4[0x2e] = 0;
  pbVar4[0x2f] = 0;
  pbVar4[0x30] = 100;
  pbVar4[0x31] = 0;
  pbVar4[0x32] = 0;
  pbVar4[0x33] = 0;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar4[0x38] = 0;
  pbVar4[0x39] = 0;
  pbVar4[0x3a] = 0;
  pbVar4[0x3b] = 0;
  pbVar4[0x3c] = 0;
  pbVar4[0x3d] = 0;
  pbVar4[0x3e] = 0;
  pbVar4[0x3f] = 0;
  pbVar4[0x40] = 0;
  pbVar4[0x41] = 0;
  pbVar4[0x42] = 0;
  pbVar4[0x43] = 0;
  pbVar4[0x44] = 0;
  pbVar4[0x45] = 0;
  pbVar4[0x46] = 0;
  pbVar4[0x47] = 0;
  pbVar4[0x48] = 0;
  pbVar4[0x49] = 0;
  pbVar4[0x4a] = 0;
  pbVar4[0x4b] = 0;
  pbVar4[0x4c] = 0;
  pbVar4[0x4d] = 0;
  pbVar4[0x4e] = 0;
  pbVar4[0x4f] = 0;
  pbVar4[0x50] = 0;
  pbVar4[0x51] = 0;
  pbVar4[0x52] = 0;
  pbVar4[0x53] = 0;
  pbVar4[0x54] = 0;
  pbVar4[0x55] = 0;
  pbVar4[0x56] = 0;
  pbVar4[0x57] = 0;
  pbVar4[0x58] = 0xff;
  pbVar4[0x59] = 0xff;
  pbVar4[0x5a] = 0xff;
  pbVar4[0x5b] = 0xff;
  pbVar4[0x5c] = 0xff;
  pbVar4[0x5d] = 0xff;
  pbVar4[0x5e] = 0xff;
  pbVar4[0x5f] = 0xff;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_7c = pbVar4;
  local_6c = pbVar4;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 != pbVar5) {
    pbVar11 = pbVar5;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar11 = *(byte **)pbVar5;
    }
    FUN_00402690(pbVar4,pbVar11,*(uint *)(pbVar5 + 0x10));
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
LAB_00445102:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"probability",0xb);
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar10 = local_64;
  iVar16 = 0;
  local_60 = local_68;
  while (local_60 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"probability",0xb);
    local_8 = 1;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    iVar16 = atoi((char *)pbVar5);
    local_8 = 0xffffffff;
    *(int *)(local_6c + 0x30) = iVar16;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"email",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar10 = local_64;
  iVar16 = 0;
  local_60 = local_68;
  while (local_60 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"email",5);
  if (iVar16 == 0) {
    iVar16 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    if (iVar16 != 0) {
      uVar17 = 0;
      local_60 = (uint *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"email",5);
        local_8 = 3;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        iVar16 = *(int *)(pbVar5 + 4);
        iVar15 = *(int *)pbVar5;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_00445102;
          FUN_005adb3f(pvVar12);
        }
        if ((uint)((iVar16 - iVar15) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"email",5);
        local_8 = 4;
        pbVar5 = FUN_0047d5c0((byte *)local_2c);
        puVar10 = local_60;
        piVar7 = *(int **)(pbVar4 + 0x38);
        if (*(int **)(pbVar4 + 0x3c) == piVar7) {
          FUN_00403840(pbVar6,piVar7,(undefined4 *)(*(int *)pbVar5 + (int)local_60));
        }
        else {
          FUN_004024e0(piVar7,(undefined4 *)(*(int *)pbVar5 + (int)local_60));
          *(int *)(pbVar4 + 0x38) = *(int *)(pbVar4 + 0x38) + 0x18;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_00445102;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        local_60 = puVar10 + 6;
      } while( true );
    }
  }
  else {
    local_8 = 2;
    pbVar5 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    piVar7 = *(int **)(pbVar4 + 0x38);
    if (*(int **)(pbVar4 + 0x3c) == piVar7) {
      FUN_00403840(pbVar6,piVar7,(undefined4 *)pbVar5);
    }
    else {
      FUN_004024e0(piVar7,(undefined4 *)pbVar5);
      *(int *)(pbVar4 + 0x38) = *(int *)(pbVar4 + 0x38) + 0x18;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"bonus",5);
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar10 = local_64;
  iVar16 = 0;
  local_60 = local_68;
  while (local_60 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"bonus",5);
    local_8 = 5;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff5c,(undefined4 *)pbVar6);
    piVar7 = FUN_005913f0(&local_38,in_stack_ffffff5c);
    *(undefined8 *)(local_6c + 0x4c) = *(undefined8 *)piVar7;
    *(int *)(local_6c + 0x54) = piVar7[2];
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"timebonuslimit",0xe);
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar10 = local_64;
  iVar16 = 0;
  local_60 = local_68;
  while (local_60 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  pcVar14 = atoi_exref;
  if (iVar16 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"timebonuslimit",0xe);
    local_8 = 6;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar14 = atoi_exref;
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    iVar16 = atoi((char *)pbVar6);
    local_8 = 0xffffffff;
    *(int *)(local_6c + 0x58) = iVar16;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"conversation",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar10 = local_64;
  iVar16 = 0;
  local_60 = local_68;
  while (local_60 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"conversation",0xc);
    local_8 = 7;
    FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    uVar8 = (*pcVar14)();
    local_8 = 0xffffffff;
    *(undefined4 *)(local_6c + 0x5c) = uVar8;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shipclass",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_68,(byte *)local_2c);
  puVar10 = local_64;
  iVar16 = 0;
  local_60 = local_68;
  while (local_60 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"shipclass",9);
    local_8 = 8;
    pbVar6 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff5c,(undefined4 *)pbVar6);
    FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff5c);
    local_8 = CONCAT31(local_8._1_3_,10);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_1c = 0;
    iVar16 = local_34 - local_38 >> 0x1f;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_70 = (uint *)0x0;
    if ((local_34 - local_38) / 0x18 + iVar16 != iVar16) {
      local_64 = (uint *)0x0;
      do {
        uVar17 = *(uint *)((int)local_64 + local_38 + 0x14);
        puVar10 = (uint *)((int)local_64 + local_38);
        puVar13 = puVar10;
        local_60 = puVar10;
        if (0xf < uVar17) {
          local_60 = (uint *)*puVar10;
          puVar13 = (uint *)*puVar10;
        }
        puVar1 = puVar10 + 4;
        if (0xf < uVar17) {
          puVar10 = (uint *)*puVar10;
        }
        iVar16 = (*puVar1 + (int)puVar13) - (int)puVar10;
        iVar15 = 0;
        if (*puVar1 + (int)puVar13 < puVar10) {
          iVar16 = 0;
        }
        if (iVar16 != 0) {
          do {
            iVar9 = tolower((int)*(char *)(iVar15 + (int)puVar10));
            *(char *)(iVar15 + (int)local_60) = (char)iVar9;
            iVar15 = iVar15 + 1;
          } while (iVar15 != iVar16);
        }
        puVar10 = local_64;
        pbVar6 = local_6c;
        piVar7 = *(int **)(local_6c + 0x44);
        if (*(int **)(local_6c + 0x48) == piVar7) {
          FUN_00403840(local_6c + 0x40,piVar7,(undefined4 *)(local_38 + (int)local_64));
        }
        else {
          FUN_004024e0(piVar7,(undefined4 *)(local_38 + (int)local_64));
          *(int *)(pbVar6 + 0x44) = *(int *)(pbVar6 + 0x44) + 0x18;
        }
        local_64 = puVar10 + 6;
        local_70 = (uint *)((int)local_70 + 1);
      } while (local_70 < (uint *)((local_34 - local_38) / 0x18));
    }
    local_8 = 0xffffffff;
    FUN_004025a0(&local_38);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"setflag",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_74,(byte *)local_2c);
  puVar10 = local_70;
  iVar16 = 0;
  local_64 = local_74;
  while (local_64 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"setflag",7);
  if (iVar16 == 0) {
    iVar16 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    pbVar6 = local_6c;
    if (iVar16 != 0) {
      uVar17 = 0;
      iVar16 = 0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"setflag",7);
        local_8 = 0xc;
        pbVar6 = FUN_0047d5c0((byte *)local_2c);
        iVar15 = *(int *)(pbVar6 + 4);
        iVar9 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_00445102;
          FUN_005adb3f(pvVar12);
        }
        pbVar6 = local_6c;
        if ((uint)((iVar15 - iVar9) / 0x18) <= uVar17) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"setflag",7);
        local_8 = 0xd;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        pbVar6 = local_6c;
        piVar7 = *(int **)(local_6c + 0x28);
        if (*(int **)(local_6c + 0x2c) == piVar7) {
          FUN_00403840(local_6c + 0x24,piVar7,(undefined4 *)(*(int *)pbVar4 + iVar16));
        }
        else {
          FUN_004024e0(piVar7,(undefined4 *)(*(int *)pbVar4 + iVar16));
          *(int *)(pbVar6 + 0x28) = *(int *)(pbVar6 + 0x28) + 0x18;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_00445102;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        iVar16 = iVar16 + 0x18;
      } while( true );
    }
  }
  else {
    local_8 = 0xb;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar6 = local_6c;
    piVar7 = *(int **)(local_6c + 0x28);
    if (*(int **)(local_6c + 0x2c) == piVar7) {
      FUN_00403840(local_6c + 0x24,piVar7,(undefined4 *)pbVar4);
    }
    else {
      FUN_004024e0(piVar7,(undefined4 *)pbVar4);
      *(int *)(pbVar6 + 0x28) = *(int *)(pbVar6 + 0x28) + 0x18;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_74,(byte *)local_2c);
  puVar10 = local_70;
  iVar16 = 0;
  local_64 = local_74;
  while (local_64 != puVar10) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar16 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    if (iVar16 != 0) {
      uVar17 = 0;
      iVar16 = 0;
      do {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005e970c,3);
        local_8 = 0x11;
        pbVar6 = FUN_0047d5c0((byte *)local_44);
        iVar15 = *(int *)(pbVar6 + 4);
        iVar9 = *(int *)pbVar6;
        local_8 = 0xffffffff;
        if (0xf < local_30) {
          pvVar12 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar12 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_00445102;
          FUN_005adb3f(pvVar12);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if ((uint)((iVar15 - iVar9) / 0x18) <= uVar17) break;
        puVar10 = (uint *)FUN_005adb0f(0x40);
        local_8 = 0x12;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_60 = puVar10;
        FUN_00402690(local_5c,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,0x13);
        local_78 = (uint *)((uint)local_78 | 2);
        local_64 = local_78;
        pbVar6 = FUN_0047d5c0((byte *)local_5c);
        FUN_004024e0(&stack0xffffff5c,(undefined4 *)(*(int *)pbVar6 + iVar16));
        local_70 = (uint *)FUN_004a1a40(puVar10,(undefined4 *)in_stack_ffffff5c);
        local_8 = 0x14;
        puVar2 = *(undefined4 **)(local_6c + 0x1c);
        if (*(undefined4 **)(local_6c + 0x20) == puVar2) {
          FUN_004141e0(local_6c + 0x18,puVar2,&local_70);
        }
        else {
          *puVar2 = local_70;
          *(int *)(local_6c + 0x1c) = *(int *)(local_6c + 0x1c) + 4;
        }
        local_8 = 0xffffffff;
        local_78 = (uint *)((uint)local_78 & 0xfffffffd);
        if (0xf < local_48) {
          pvVar12 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar12 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar12)))) goto LAB_00445102;
          FUN_005adb3f(pvVar12);
        }
        uVar17 = uVar17 + 1;
        local_4c = 0;
        local_48 = 0xf;
        iVar16 = iVar16 + 0x18;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    puVar10 = (uint *)FUN_005adb0f(0x40);
    local_8 = 0xe;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_70 = puVar10;
    FUN_00402690(local_2c,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    local_64 = (uint *)0x1;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff5c,(undefined4 *)pbVar4);
    local_70 = (uint *)FUN_004a1a40(puVar10,(undefined4 *)in_stack_ffffff5c);
    local_8 = 0x10;
    puVar2 = *(undefined4 **)(pbVar6 + 0x1c);
    if (*(undefined4 **)(pbVar6 + 0x20) == puVar2) {
      FUN_004141e0(pbVar6 + 0x18,puVar2,&local_70);
    }
    else {
      *puVar2 = local_70;
      *(int *)(pbVar6 + 0x1c) = *(int *)(pbVar6 + 0x1c) + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (DAT_0065c2e8 == (undefined4 *)0x0) {
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
  puVar3 = DAT_0065c2e8;
  puVar2 = (undefined4 *)DAT_0065c2e8[4];
  if ((undefined4 *)DAT_0065c2e8[5] == puVar2) {
    FUN_00414080(DAT_0065c2e8 + 3,puVar2,&local_7c);
  }
  else {
    *puVar2 = local_6c;
    puVar3[4] = puVar3[4] + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __cdecl FUN_004460e0(void *param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined4 *this;
  int iVar3;
  int *piVar4;
  char *_Str;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint in_stack_00000018;
  byte *in_stack_ffffff98;
  undefined4 *local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  uint local_28;
  undefined4 local_24;
  byte *local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b3fb7;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_3c = (undefined4 *)FUN_005adb0f(0x58);
  this = (undefined4 *)FUN_00484c00((undefined1 *)local_3c);
  local_3c = this;
  FUN_004024e0(&stack0xffffff98,&param_1);
  FUN_00592d70(&local_34,',',(undefined4 *)in_stack_ffffff98);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this != local_34) {
    puVar7 = local_34;
    if (0xf < (uint)local_34[5]) {
      puVar7 = (undefined4 *)*local_34;
    }
    FUN_00402690(this,puVar7,local_34[4]);
  }
  puVar8 = local_34 + 6;
  puVar7 = this + 6;
  if (puVar7 != puVar8) {
    if (0xf < (uint)local_34[0xb]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    FUN_00402690(puVar7,puVar8,local_34[10]);
  }
  FUN_004024e0(&stack0xffffff98,this);
  iVar3 = FUN_004a6de0(in_stack_ffffff98);
  if (iVar3 == 0) {
    FUN_00591070("ERROR","Invalid origin for passenger  \'%s\'");
    bVar2 = cc_assert_script_compatible("Invalid origin for passenger.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  else {
    FUN_004024e0(&stack0xffffff98,puVar7);
    iVar3 = FUN_004a6de0(in_stack_ffffff98);
    if (iVar3 == 0) {
      FUN_00591070("ERROR","Invalid destination for passenger  \'%s\'");
      bVar2 = cc_assert_script_compatible("Invalid destination for passenger.");
      if (!bVar2) {
        cocos2d::log("Assert failed: %s");
      }
    }
    else {
      FUN_004024e0(&stack0xffffff98,local_34 + 0xc);
      piVar4 = FUN_005913f0(local_20,in_stack_ffffff98);
      *(undefined8 *)(this + 0xc) = *(undefined8 *)piVar4;
      this[0xe] = piVar4[2];
      _Str = (char *)(local_34 + 0x12);
      if (0xf < (uint)local_34[0x17]) {
        _Str = *(char **)_Str;
      }
      iVar3 = atoi(_Str);
      this[0xf] = iVar3;
      local_28 = 4;
      if (4 < (uint)((local_30 - (int)local_34) / 0x18)) {
        local_38 = 0x60;
        do {
          FUN_004024e0(&stack0xffffff98,(undefined4 *)(local_38 + (int)local_34));
          FUN_00592d70(local_20,':',(undefined4 *)in_stack_ffffff98);
          pbVar1 = local_20[0];
          local_8._0_1_ = 2;
          pbVar9 = local_20[0];
          if (0xf < *(uint *)(local_20[0] + 0x14)) {
            pbVar9 = *(byte **)local_20[0];
          }
          uVar5 = FUN_004031f0(pbVar9,*(uint *)(local_20[0] + 0x10),&DAT_005e970c,3);
          if ((char)uVar5 == '\0') {
            pbVar9 = pbVar1;
            if (0xf < *(uint *)(pbVar1 + 0x14)) {
              pbVar9 = *(byte **)pbVar1;
            }
            uVar5 = FUN_004031f0(pbVar9,*(uint *)(pbVar1 + 0x10),(byte *)"quirk",5);
            if ((char)uVar5 != '\0') {
              FUN_004024e0(&stack0xffffff98,(undefined4 *)(pbVar1 + 0x18));
              FUN_00484c70(in_stack_ffffff98);
            }
          }
          else {
            pvVar6 = (void *)FUN_005adb0f(0x40);
            local_8._0_1_ = 3;
            FUN_004024e0(&stack0xffffff98,(undefined4 *)(local_20[0] + 0x18));
            local_24 = FUN_004a1a40(pvVar6,(undefined4 *)in_stack_ffffff98);
            local_8._0_1_ = 2;
            puVar7 = (undefined4 *)this[0x11];
            if ((undefined4 *)this[0x12] == puVar7) {
              FUN_004141e0(this + 0x10,puVar7,&local_24);
            }
            else {
              *puVar7 = local_24;
              this[0x11] = this[0x11] + 4;
            }
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_004025a0((int *)local_20);
          local_28 = local_28 + 1;
          local_38 = local_38 + 0x18;
        } while (local_28 < (uint)((local_30 - (int)local_34) / 0x18));
      }
      if (DAT_0065c2e8 == (undefined4 *)0x0) {
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
      puVar8 = DAT_0065c2e8;
      puVar7 = (undefined4 *)DAT_0065c2e8[1];
      if ((undefined4 *)DAT_0065c2e8[2] == puVar7) {
        FUN_00414080(DAT_0065c2e8,puVar7,&local_3c);
      }
      else {
        *puVar7 = this;
        puVar8[1] = puVar8[1] + 4;
      }
    }
  }
  FUN_004025a0((int *)&local_34);
  if (0xf < in_stack_00000018) {
    pvVar6 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar6 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00446480(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  void *in_stack_ffffff88;
  int local_50;
  int local_4c;
  int local_48;
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
  puStack_c = &LAB_005b3ff8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"passenger",9);
  FUN_00419820(&DAT_0065b530,&local_50,(byte *)local_2c);
  iVar6 = 0;
  local_48 = local_50;
  while (local_48 != local_4c) {
    iVar6 = iVar6 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_48)
    ;
  }
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
LAB_00446524:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"passenger",9);
  if (iVar6 == 0) {
    iVar6 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar6 != 0) {
      uVar5 = 0;
      iVar6 = 0;
      while( true ) {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"passenger",9);
        local_8 = 1;
        pbVar3 = FUN_0047d5c0((byte *)local_2c);
        iVar1 = *(int *)(pbVar3 + 4);
        iVar2 = *(int *)pbVar3;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar4 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar4 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) goto LAB_00446524;
          FUN_005adb3f(pvVar4);
        }
        if ((uint)((iVar1 - iVar2) / 0x18) <= uVar5) break;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,"passenger",9);
        local_8 = 2;
        pbVar3 = FUN_0047d5c0((byte *)local_44);
        FUN_004024e0(&stack0xffffff88,(undefined4 *)(*(int *)pbVar3 + iVar6));
        FUN_004460e0(in_stack_ffffff88);
        local_8 = 0xffffffff;
        if (0xf < local_30) {
          pvVar4 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar4 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) goto LAB_00446524;
          FUN_005adb3f(pvVar4);
        }
        uVar5 = uVar5 + 1;
        local_34 = 0;
        local_30 = 0xf;
        iVar6 = iVar6 + 0x18;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      }
    }
  }
  else {
    local_8 = 0;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff88,(undefined4 *)pbVar3);
    FUN_004460e0(in_stack_ffffff88);
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
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00446750(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte ****ppppbVar10;
  byte *****pppppbVar11;
  void *pvVar12;
  byte *pbVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  double dVar17;
  byte *in_stack_ffffff50;
  int *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  int *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  void *local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined4 *local_50 [3];
  byte ****local_44 [3];
  undefined1 local_38 [4];
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b40e0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_84 = (undefined4 *)0x0;
  local_6c = (undefined4 *)0x0;
  local_88 = (int *)FUN_005adb0f(0x44);
  local_1c = 0;
  local_18 = 0xf;
  *local_88 = 1;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0x3c;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_74 = local_88;
  FUN_00402690(local_2c,&DAT_005e99fc,4);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  FUN_004024e0(local_44,(undefined4 *)pbVar2);
  ppppbVar10 = local_44[0];
  iVar16 = 0;
  do {
    pbVar2 = (&PTR_s_cargo_005ddaf4)[iVar16];
    pbVar13 = pbVar2;
    do {
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar1 != 0);
    pppppbVar11 = local_44;
    if (0xf < local_30) {
      pppppbVar11 = (byte *****)ppppbVar10;
    }
    uVar3 = FUN_004031f0((byte *)pppppbVar11,local_34,pbVar2,(int)pbVar13 - (int)(pbVar2 + 1));
    if ((char)uVar3 != '\0') {
      if (0xf < local_30) {
        pppppbVar11 = (byte *****)ppppbVar10;
        if ((0xfff < local_30 + 1) &&
           (pppppbVar11 = (byte *****)ppppbVar10[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar10 + (-4 - (int)pppppbVar11)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppbVar11);
      }
      goto LAB_004468f8;
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 2);
  if (0xf < local_30) {
    pppppbVar11 = (byte *****)ppppbVar10;
    if ((0xfff < local_30 + 1) &&
       (pppppbVar11 = (byte *****)ppppbVar10[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar10 + (-4 - (int)pppppbVar11)))) {
LAB_004468af:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar11);
  }
  iVar16 = 0;
LAB_004468f8:
  piVar6 = local_74;
  local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  *local_74 = iVar16;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9b64,4);
  local_8 = 1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pcVar15 = atoi_exref;
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar16 = atoi((char *)pbVar2);
  piVar6[10] = iVar16;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"spawnchance",0xb);
  local_8 = 2;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  iVar16 = atoi((char *)pbVar2);
  piVar6[0xb] = iVar16;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"amount",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  puVar9 = local_78;
  iVar16 = 0;
  local_6c = local_7c;
  while (local_6c != puVar9) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  piVar6 = local_74;
  if (iVar16 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"amount",6);
    local_8 = 3;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff50,(undefined4 *)pbVar2);
    piVar4 = FUN_005913f0(local_50,in_stack_ffffff50);
    piVar6 = local_74;
    *(undefined8 *)(local_74 + 0xd) = *(undefined8 *)piVar4;
    local_74[0xf] = piVar4[2];
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"delaytime",9);
  local_8 = 4;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar17 = atof((char *)pbVar2);
  piVar6[0xc] = (int)(float)dVar17;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"content",7);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  puVar9 = local_78;
  iVar16 = 0;
  local_6c = local_7c;
  while (local_6c != puVar9) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"content",7);
    iVar16 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    if (iVar16 != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"content",7);
      local_8 = 8;
      pbVar2 = FUN_0047d5c0((byte *)local_2c);
      local_8 = 0xffffffff;
      puVar9 = (undefined4 *)((*(int *)(pbVar2 + 4) - *(int *)pbVar2) / 0x18);
      local_70 = puVar9;
      if (0xf < local_18) {
        pvVar12 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar12 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar12);
      }
      iVar16 = 0;
      pcVar15 = atoi_exref;
      if (0 < (int)puVar9) {
        iVar14 = 0;
        do {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"content",7);
          local_8 = 9;
          pbVar2 = FUN_0047d5c0((byte *)local_2c);
          FUN_004024e0(&stack0xffffff50,(undefined4 *)(*(int *)pbVar2 + iVar14));
          FUN_00592d70(local_50,',',(undefined4 *)in_stack_ffffff50);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          if (0xf < local_18) {
            pvVar12 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar12 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004468af;
            FUN_005adb3f(pvVar12);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          puVar5 = (undefined4 *)FUN_005adb0f(0x30);
          puVar5[4] = 0;
          puVar5[5] = 0xf;
          *(undefined1 *)puVar5 = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[10] = 0;
          local_6c = puVar5;
          FUN_004024e0(&stack0xffffff50,local_50[0]);
          iVar7 = FUN_00507890(in_stack_ffffff50);
          puVar5[0xb] = iVar7;
          puVar9 = local_50[0] + 6;
          if (puVar5 != puVar9) {
            if (0xf < (uint)local_50[0][0xb]) {
              puVar9 = (undefined4 *)*puVar9;
            }
            FUN_00402690(puVar5,puVar9,local_50[0][10]);
          }
          FUN_004024e0(&stack0xffffff50,local_50[0] + 0xc);
          piVar6 = FUN_005913f0(local_38,in_stack_ffffff50);
          *(undefined8 *)(puVar5 + 6) = *(undefined8 *)piVar6;
          puVar5[8] = piVar6[2];
          pcVar8 = (char *)(local_50[0] + 0x12);
          if (0xf < (uint)local_50[0][0x17]) {
            pcVar8 = *(char **)pcVar8;
          }
          iVar7 = atoi(pcVar8);
          puVar5[9] = iVar7;
          puVar9 = (undefined4 *)local_74[2];
          if ((undefined4 *)local_74[3] == puVar9) {
            FUN_00414080(local_74 + 1,puVar9,&local_6c);
          }
          else {
            *puVar9 = puVar5;
            local_74[2] = local_74[2] + 4;
          }
          local_8 = 0xffffffff;
          FUN_004025a0((int *)local_50);
          iVar16 = iVar16 + 1;
          iVar14 = iVar14 + 0x18;
          pcVar15 = atoi_exref;
        } while (iVar16 < (int)local_70);
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"content",7);
    local_8 = 5;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff50,(undefined4 *)pbVar2);
    FUN_00592d70(&local_80,',',(undefined4 *)in_stack_ffffff50);
    local_8 = CONCAT31(local_8._1_3_,7);
    if (0xf < local_30) {
      ppppbVar10 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppbVar10 = (byte ****)local_44[0][-1],
         0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppbVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar10);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
    puVar5 = (undefined4 *)FUN_005adb0f(0x30);
    puVar5[4] = 0;
    puVar5[5] = 0xf;
    *(undefined1 *)puVar5 = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[10] = 0;
    local_70 = puVar5;
    local_6c = puVar5;
    FUN_004024e0(&stack0xffffff50,local_80);
    iVar16 = FUN_00507890(in_stack_ffffff50);
    puVar5[0xb] = iVar16;
    puVar9 = local_80 + 6;
    if (puVar5 != puVar9) {
      if (0xf < (uint)local_80[0xb]) {
        puVar9 = (undefined4 *)*puVar9;
      }
      FUN_00402690(puVar5,puVar9,local_80[10]);
    }
    FUN_004024e0(&stack0xffffff50,local_80 + 0xc);
    piVar6 = FUN_005913f0(local_50,in_stack_ffffff50);
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)piVar6;
    puVar5[8] = piVar6[2];
    pcVar8 = (char *)(local_80 + 0x12);
    if (0xf < (uint)local_80[0x17]) {
      pcVar8 = *(char **)pcVar8;
    }
    iVar16 = atoi(pcVar8);
    puVar5[9] = iVar16;
    puVar9 = (undefined4 *)local_74[2];
    if ((undefined4 *)local_74[3] == puVar9) {
      FUN_00414080(local_74 + 1,puVar9,&local_6c);
      local_8 = 0xffffffff;
      FUN_004025a0((int *)&local_80);
    }
    else {
      *puVar9 = puVar5;
      local_74[2] = local_74[2] + 4;
      local_8 = 0xffffffff;
      FUN_004025a0((int *)&local_80);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sector",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  puVar9 = local_78;
  iVar16 = 0;
  local_6c = local_7c;
  while (local_6c != puVar9) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sector",6);
  if (iVar16 == 0) {
    iVar16 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    piVar6 = local_74;
    if (iVar16 != 0) {
      uVar3 = 0;
      iVar16 = 0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"sector",6);
        local_8 = 0xd;
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        iVar14 = *(int *)(pbVar2 + 4);
        iVar7 = *(int *)pbVar2;
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004468af;
          FUN_005adb3f(pvVar12);
        }
        piVar6 = local_74;
        if ((uint)((iVar14 - iVar7) / 0x18) <= uVar3) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"sector",6);
        local_8 = 0xe;
        pbVar2 = FUN_0047d5c0((byte *)local_2c);
        pcVar8 = (char *)(*(int *)pbVar2 + iVar16);
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar8 = *(char **)pcVar8;
        }
        local_70 = (undefined4 *)atoi(pcVar8);
        puVar9 = (undefined4 *)local_74[8];
        if ((undefined4 *)local_74[9] == puVar9) {
          FUN_004141e0(local_74 + 7,puVar9,&local_70);
        }
        else {
          *puVar9 = local_70;
          local_74[8] = local_74[8] + 4;
        }
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar12 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar12 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_004468af;
          FUN_005adb3f(pvVar12);
        }
        uVar3 = uVar3 + 1;
        iVar16 = iVar16 + 0x18;
      } while( true );
    }
  }
  else {
    local_8 = 0xc;
    FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    local_70 = (undefined4 *)(*pcVar15)();
    piVar6 = local_74;
    puVar9 = (undefined4 *)local_74[8];
    if ((undefined4 *)local_74[9] == puVar9) {
      FUN_004141e0(local_74 + 7,puVar9,&local_70);
    }
    else {
      *puVar9 = local_70;
      local_74[8] = local_74[8] + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e970c,3);
  FUN_00419820(&DAT_0065b530,(int *)&local_7c,(byte *)local_2c);
  puVar9 = local_78;
  iVar16 = 0;
  local_6c = local_7c;
  while (local_6c != puVar9) {
    iVar16 = iVar16 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_6c)
    ;
  }
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  if (iVar16 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e970c,3);
    iVar16 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    if (iVar16 != 0) {
      uVar3 = 0;
      iVar16 = 0;
      do {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
        FUN_00402690(local_44,&DAT_005e970c,3);
        local_8 = 0x12;
        pbVar2 = FUN_0047d5c0((byte *)local_44);
        iVar14 = *(int *)(pbVar2 + 4);
        iVar7 = *(int *)pbVar2;
        local_8 = 0xffffffff;
        if (0xf < local_30) {
          pppppbVar11 = (byte *****)local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pppppbVar11 = (byte *****)local_44[0][-1],
             (byte *)0x1f < (byte *)((int)local_44[0] + (-4 - (int)pppppbVar11))))
          goto LAB_004468af;
          FUN_005adb3f(pppppbVar11);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (byte ****)((uint)local_44[0] & 0xffffff00);
        if ((uint)((iVar14 - iVar7) / 0x18) <= uVar3) break;
        puVar9 = (undefined4 *)FUN_005adb0f(0x40);
        local_8 = 0x13;
        local_58 = 0;
        local_54 = 0xf;
        local_68[0] = (void *)((uint)local_68[0] & 0xffffff00);
        local_78 = puVar9;
        FUN_00402690(local_68,&DAT_005e970c,3);
        local_8 = CONCAT31(local_8._1_3_,0x14);
        local_84 = (undefined4 *)((uint)local_84 | 2);
        local_6c = local_84;
        pbVar2 = FUN_0047d5c0((byte *)local_68);
        FUN_004024e0(&stack0xffffff50,(undefined4 *)(*(int *)pbVar2 + iVar16));
        local_70 = (undefined4 *)FUN_004a1a40(puVar9,(undefined4 *)in_stack_ffffff50);
        local_8 = 0x15;
        puVar9 = (undefined4 *)local_74[5];
        if ((undefined4 *)local_74[6] == puVar9) {
          FUN_004141e0(local_74 + 4,puVar9,&local_70);
        }
        else {
          *puVar9 = local_70;
          local_74[5] = local_74[5] + 4;
        }
        local_8 = 0xffffffff;
        local_84 = (undefined4 *)((uint)local_84 & 0xfffffffd);
        if (0xf < local_54) {
          pvVar12 = local_68[0];
          if ((0xfff < local_54 + 1) &&
             (pvVar12 = *(void **)((int)local_68[0] + -4),
             0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar12)))) goto LAB_004468af;
          FUN_005adb3f(pvVar12);
        }
        uVar3 = uVar3 + 1;
        local_58 = 0;
        local_54 = 0xf;
        iVar16 = iVar16 + 0x18;
        local_68[0] = (void *)((uint)local_68[0] & 0xffffff00);
      } while( true );
    }
  }
  else {
    puVar9 = (undefined4 *)FUN_005adb0f(0x40);
    local_8 = 0xf;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_78 = puVar9;
    FUN_00402690(local_2c,&DAT_005e970c,3);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_6c = (undefined4 *)0x1;
    pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff50,(undefined4 *)pbVar2);
    local_70 = (undefined4 *)FUN_004a1a40(puVar9,(undefined4 *)in_stack_ffffff50);
    local_8 = 0x11;
    puVar9 = (undefined4 *)piVar6[5];
    if ((undefined4 *)piVar6[6] == puVar9) {
      FUN_004141e0(piVar6 + 4,puVar9,&local_70);
    }
    else {
      *puVar9 = local_70;
      piVar6[5] = piVar6[5] + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar12 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar12 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar12);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
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
  puVar5 = DAT_0065c2a8;
  puVar9 = (undefined4 *)DAT_0065c2a8[1];
  if ((undefined4 *)DAT_0065c2a8[2] == puVar9) {
    FUN_00414080(DAT_0065c2a8,puVar9,&local_88);
  }
  else {
    *puVar9 = local_74;
    puVar5[1] = puVar5[1] + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_004477a0(void)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  double dVar7;
  float *local_48;
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
  puStack_c = &LAB_005b4130;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfVar1 = (float *)FUN_005adb0f(0x10);
  *pfVar1 = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = DAT_00655088;
  DAT_00655088 = (float)((int)DAT_00655088 + 1);
  pfVar1[3] = 7.00649e-44;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = pfVar1;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  fVar3 = (float)atoi((char *)pbVar2);
  pfVar1[2] = fVar3;
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
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar7 = atof((char *)pbVar2);
  *pfVar1 = (float)dVar7;
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
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 2;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar7 = atof((char *)pbVar2);
  pfVar1[1] = (float)dVar7;
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
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"radius",6);
  local_8 = 3;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  fVar3 = (float)atoi((char *)pbVar2);
  pfVar1[3] = fVar3;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar5 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar5 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  for (puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar6 = puVar6 + 1) {
    piVar4 = (int *)*puVar6;
    if (*piVar4 == DAT_00655050) goto LAB_00447a53;
  }
  piVar4 = (int *)0x0;
LAB_00447a53:
  puVar6 = (undefined4 *)piVar4[0x2e];
  if ((undefined4 *)piVar4[0x2f] == puVar6) {
    FUN_00414080(piVar4 + 0x2d,puVar6,&local_48);
    pfVar1 = local_48;
  }
  else {
    *puVar6 = pfVar1;
    piVar4[0x2e] = piVar4[0x2e] + 4;
  }
  if (DAT_0065508c < (int)pfVar1[2]) {
    DAT_0065508c = (int)pfVar1[2] + 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00447ab0(void)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  double dVar7;
  float *local_48;
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
  puStack_c = &LAB_005b3d90;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfVar1 = (float *)FUN_005adb0f(0x18);
  *pfVar1 = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = DAT_0065508c;
  DAT_0065508c = (float)((int)DAT_0065508c + 1);
  pfVar1[3] = 0.0;
  pfVar1[4] = 7.00649e-44;
  pfVar1[5] = 1.4013e-43;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = pfVar1;
  FUN_00402690(local_2c,&DAT_005e98b0,2);
  local_8 = 0;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  fVar3 = (float)atoi((char *)pbVar2);
  pfVar1[2] = fVar3;
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
  FUN_00402690(local_2c,"spawnchance",0xb);
  local_8 = 1;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  fVar3 = (float)atoi((char *)pbVar2);
  pfVar1[5] = fVar3;
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
  FUN_00402690(local_2c,"level",5);
  local_8 = 2;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  fVar3 = (float)atoi((char *)pbVar2);
  pfVar1[3] = fVar3;
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
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 3;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar7 = atof((char *)pbVar2);
  *pfVar1 = (float)dVar7;
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
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 4;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  dVar7 = atof((char *)pbVar2);
  pfVar1[1] = (float)dVar7;
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
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"radius",6);
  local_8 = 5;
  pbVar2 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  fVar3 = (float)atoi((char *)pbVar2);
  pfVar1[4] = fVar3;
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar5 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar5 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  for (puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar6 = puVar6 + 1) {
    piVar4 = (int *)*puVar6;
    if (*piVar4 == DAT_00655050) goto LAB_00447e7f;
  }
  piVar4 = (int *)0x0;
LAB_00447e7f:
  puVar6 = (undefined4 *)piVar4[0x31];
  if ((undefined4 *)piVar4[0x32] == puVar6) {
    FUN_00414080(piVar4 + 0x30,puVar6,&local_48);
    pfVar1 = local_48;
  }
  else {
    *puVar6 = pfVar1;
    piVar4[0x31] = piVar4[0x31] + 4;
  }
  if ((int)DAT_0065508c < (int)pfVar1[2]) {
    DAT_0065508c = (float)((int)pfVar1[2] + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00447ed0(void)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined4 *in_stack_ffffff48;
  uint *local_90;
  uint *local_8c;
  int *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  void *local_5c [4];
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
  puStack_c = &LAB_005b424d;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      puVar9 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar9 = puVar9 + 1) {
    local_88 = (int *)*puVar9;
    if (*local_88 == DAT_00655050) goto LAB_00447f30;
  }
  local_88 = (int *)0x0;
LAB_00447f30:
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"sector",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_90,(byte *)local_2c);
  puVar2 = local_8c;
  iVar13 = 0;
  local_60 = local_90;
  while (local_60 != puVar2) {
    iVar13 = iVar13 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
LAB_00447fb4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (iVar13 != 0) {
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    FUN_00402690(local_5c,"sector",6);
    local_8 = 0;
    pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
    if (0xf < *(uint *)(pbVar1 + 0x14)) {
      pbVar1 = *(byte **)pbVar1;
    }
    iVar13 = atoi((char *)pbVar1);
    for (puVar9 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar9 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar9 = puVar9 + 1) {
      local_88 = (int *)*puVar9;
      if (*local_88 == iVar13) goto LAB_00448041;
    }
    local_88 = (int *)0x0;
LAB_00448041:
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_48) {
      pvVar10 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar10 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  }
  local_8c = (uint *)FUN_005adb0f(0xf0);
  local_8 = 1;
  puVar2 = (uint *)FUN_0043d910((undefined1 *)local_8c);
  local_8 = 0xffffffff;
  puVar2[0xd] = DAT_00655084;
  DAT_00655084 = DAT_00655084 + 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_8c = puVar2;
  local_68 = puVar2;
  FUN_00402690(local_2c,&DAT_005e9748,3);
  local_8 = 2;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar2 + 1 != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(puVar2 + 1,puVar6,puVar3[4]);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationx",9);
  local_8 = 3;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar1 = *(byte **)pbVar1;
  }
  dVar14 = atof((char *)pbVar1);
  puVar2[0x3a] = (uint)(float)dVar14;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"locationy",9);
  local_8 = 4;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar1 = *(byte **)pbVar1;
  }
  dVar14 = atof((char *)pbVar1);
  puVar2[0x3b] = (uint)(float)dVar14;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"radius",6);
  local_8 = 5;
  pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar1 + 0x14)) {
    pbVar1 = *(byte **)pbVar1;
  }
  dVar14 = atof((char *)pbVar1);
  puVar2[0xe] = (uint)(float)dVar14;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hostile",7);
  local_8 = 6;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar1 = pbVar4;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar1 = *(byte **)pbVar4;
  }
  uVar5 = FUN_004031f0(pbVar1,*(uint *)(pbVar4 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if ((char)uVar5 != '\0') {
    *(char *)(puVar2 + 0x1d) = '\x01';
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"quarantine",10);
  local_8 = 7;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar1 = pbVar4;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar1 = *(byte **)pbVar4;
  }
  uVar5 = FUN_004031f0(pbVar1,*(uint *)(pbVar4 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if ((char)uVar5 != '\0') {
    *(char *)((int)puVar2 + 0x75) = '\x01';
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"scenario",8);
  local_8 = 8;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar2 + 7 != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(puVar2 + 7,puVar6,puVar3[4]);
  }
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,&DAT_005e9bb8,4);
  FUN_00419820(&DAT_0065b530,(int *)&local_70,(byte *)local_2c);
  puVar2 = local_6c;
  iVar13 = 0;
  local_60 = local_70;
  while (local_60 != puVar2) {
    iVar13 = iVar13 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if (iVar13 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,&DAT_005e9bb8,4);
    local_8 = 9;
    pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff48,(undefined4 *)pbVar1);
    FUN_00592d70(&local_7c,',',in_stack_ffffff48);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (1 < (uint)((local_78 - (int)local_7c) / 0x18)) {
      puVar2 = local_7c;
      if (0xf < local_7c[5]) {
        puVar2 = (uint *)*local_7c;
      }
      iVar13 = atoi((char *)puVar2);
      puVar3 = local_68;
      local_68[0xf] = (uint)(float)iVar13;
      puVar2 = local_7c + 6;
      if (0xf < local_7c[0xb]) {
        puVar2 = (uint *)*puVar2;
      }
      iVar13 = atoi((char *)puVar2);
      puVar3[0x10] = (uint)(float)iVar13;
    }
    FUN_004025a0((int *)&local_7c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"entryflag",9);
  FUN_00419820(&DAT_0065b530,(int *)&local_70,(byte *)local_2c);
  puVar2 = local_6c;
  iVar13 = 0;
  local_60 = local_70;
  while (local_60 != puVar2) {
    iVar13 = iVar13 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_60)
    ;
  }
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"entryflag",9);
  if (iVar13 == 0) {
    iVar13 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar13 != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"entryflag",9);
      local_8 = 0xe;
      pbVar1 = FUN_0047d5c0((byte *)local_2c);
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (0xf < local_18) {
        pvVar10 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar10 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      puVar2 = *(uint **)pbVar1;
      local_6c = *(uint **)(pbVar1 + 4);
      puVar3 = local_68;
      local_60 = puVar2;
      if (puVar2 != local_6c) {
        do {
          local_60 = puVar2;
          FUN_004024e0(local_2c,puVar2);
          local_8 = 0xf;
          FUN_004024e0(&stack0xffffff48,local_2c);
          FUN_00592d70(&local_7c,',',in_stack_ffffff48);
          local_8._0_1_ = 0x10;
          if ((local_78 - (int)local_7c) / 0x18 == 2) {
            local_80 = local_7c;
            puVar2 = local_7c;
            if (0xf < local_7c[5]) {
              local_80 = (uint *)*local_7c;
              puVar2 = (uint *)*local_7c;
            }
            puVar3 = local_80;
            local_64 = local_7c;
            if (0xf < local_7c[5]) {
              local_64 = (uint *)*local_7c;
            }
            iVar12 = (int)(local_7c[4] + (int)puVar2) - (int)local_64;
            iVar13 = 0;
            if ((uint *)(local_7c[4] + (int)puVar2) < local_64) {
              iVar12 = 0;
            }
            if (iVar12 != 0) {
              do {
                iVar7 = toupper((int)*(char *)((int)local_64 + iVar13));
                *(char *)((int)puVar3 + iVar13) = (char)iVar7;
                iVar13 = iVar13 + 1;
              } while (iVar13 != iVar12);
            }
            puVar2 = local_7c + 6;
            puVar3 = puVar2;
            local_64 = puVar2;
            if (0xf < local_7c[0xb]) {
              local_64 = (uint *)*puVar2;
              puVar3 = (uint *)*puVar2;
            }
            if (0xf < local_7c[0xb]) {
              puVar2 = (uint *)*puVar2;
            }
            puVar6 = (uint *)((local_7c[10] + (int)puVar3) - (int)puVar2);
            puVar11 = (uint *)0x0;
            if (local_7c[10] + (int)puVar3 < puVar2) {
              puVar6 = (uint *)0x0;
            }
            local_84 = puVar6;
            if (puVar6 != (uint *)0x0) {
              do {
                iVar13 = tolower((int)*(char *)((int)puVar11 + (int)puVar2));
                *(char *)((int)puVar11 + (int)local_64) = (char)iVar13;
                puVar11 = (uint *)((int)puVar11 + 1);
              } while (puVar11 != puVar6);
            }
            puVar11 = local_7c;
            puVar6 = local_7c + 6;
            puVar8 = (uint *)FUN_0047d6a0(local_68 + 0x36,(byte *)local_7c);
            puVar3 = local_68;
            puVar2 = local_60;
            if (puVar8 != puVar6) {
              if (0xf < puVar11[0xb]) {
                puVar6 = (uint *)*puVar6;
              }
              FUN_00402690(puVar8,puVar6,puVar11[10]);
              puVar3 = local_68;
              puVar2 = local_60;
            }
          }
          else {
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
            FUN_00402690(local_44,"entryflag",9);
            local_8 = CONCAT31(local_8._1_3_,0x11);
            puVar6 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_44);
            if (puVar3 + 0x30 != puVar6) {
              puVar11 = puVar6;
              if (0xf < puVar6[5]) {
                puVar11 = (uint *)*puVar6;
              }
              FUN_00402690(puVar3 + 0x30,puVar11,puVar6[4]);
            }
            local_8._0_1_ = 0x10;
            if (0xf < local_30) {
              pvVar10 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar10 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) goto LAB_00447fb4;
              FUN_005adb3f(pvVar10);
            }
          }
          FUN_004025a0((int *)&local_7c);
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_18) {
            pvVar10 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar10 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00447fb4;
            FUN_005adb3f(pvVar10);
          }
          puVar2 = puVar2 + 6;
          local_60 = puVar2;
        } while (puVar2 != local_6c);
      }
    }
  }
  else {
    local_8 = 10;
    pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff48,(undefined4 *)pbVar1);
    FUN_00592d70(&local_7c,',',in_stack_ffffff48);
    local_8._0_1_ = 0xc;
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if ((local_78 - (int)local_7c) / 0x18 == 2) {
      puVar3 = local_7c;
      puVar2 = local_7c;
      if (0xf < local_7c[5]) {
        puVar2 = (uint *)*local_7c;
        puVar3 = (uint *)*local_7c;
      }
      puVar6 = local_7c;
      if (0xf < local_7c[5]) {
        puVar6 = (uint *)*local_7c;
      }
      FUN_00413ec0(&local_6c,toupper_exref,(char *)puVar6,(char *)(local_7c[4] + (int)puVar3),
                   (undefined1 *)puVar2);
      puVar6 = local_7c + 6;
      puVar3 = puVar6;
      puVar2 = puVar6;
      if (0xf < local_7c[0xb]) {
        puVar2 = (uint *)*puVar6;
        puVar3 = (uint *)*puVar6;
      }
      if (0xf < local_7c[0xb]) {
        puVar6 = (uint *)*puVar6;
      }
      FUN_00413ec0(&local_6c,tolower_exref,(char *)puVar6,(char *)(local_7c[10] + (int)puVar3),
                   (undefined1 *)puVar2);
      puVar3 = local_7c;
      puVar2 = local_7c + 6;
      puVar6 = (uint *)FUN_0047d6a0(local_68 + 0x36,(byte *)local_7c);
      if (puVar6 != puVar2) {
        if (0xf < puVar3[0xb]) {
          puVar2 = (uint *)*puVar2;
        }
        FUN_00402690(puVar6,puVar2,puVar3[10]);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0((int *)&local_7c);
        goto LAB_00448b5f;
      }
    }
    else {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      FUN_00402690(local_44,"entryflag",9);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      puVar2 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_44);
      if (local_68 + 0x30 != puVar2) {
        puVar3 = puVar2;
        if (0xf < puVar2[5]) {
          puVar3 = (uint *)*puVar2;
        }
        FUN_00402690(local_68 + 0x30,puVar3,puVar2[4]);
      }
      local_8 = CONCAT31(local_8._1_3_,0xc);
      if (0xf < local_30) {
        pvVar10 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar10 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
      }
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_7c);
  }
LAB_00448b5f:
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"entrymessage",0xc);
  FUN_00419820(&DAT_0065b530,(int *)&local_70,(byte *)local_2c);
  puVar2 = local_6c;
  iVar13 = 0;
  local_64 = local_70;
  while (local_64 != puVar2) {
    iVar13 = iVar13 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_64)
    ;
  }
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"entrymessage",0xc);
  if (iVar13 == 0) {
    iVar13 = FUN_0047d0f0((byte *)local_2c);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    if (iVar13 != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"entrymessage",0xc);
      local_8 = 0x15;
      pbVar1 = FUN_0047d5c0((byte *)local_2c);
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      FUN_00401b20((int *)local_2c);
      puVar2 = *(uint **)pbVar1;
      puVar3 = *(uint **)(pbVar1 + 4);
      local_84 = puVar3;
      local_60 = puVar2;
      if (puVar2 != puVar3) {
        do {
          local_60 = puVar2;
          FUN_004024e0(local_2c,puVar2);
          local_8 = 0x16;
          FUN_004024e0(&stack0xffffff48,local_2c);
          FUN_00592d70(&local_7c,',',in_stack_ffffff48);
          local_8 = CONCAT31(local_8._1_3_,0x17);
          if ((local_78 - (int)local_7c) / 0x18 == 2) {
            local_64 = local_7c;
            puVar2 = local_7c;
            if (0xf < local_7c[5]) {
              local_64 = (uint *)*local_7c;
              puVar2 = (uint *)*local_7c;
            }
            puVar3 = local_64;
            local_80 = local_7c;
            if (0xf < local_7c[5]) {
              local_80 = (uint *)*local_7c;
            }
            iVar13 = (int)(local_7c[4] + (int)puVar2) - (int)local_80;
            iVar12 = 0;
            if ((uint *)(local_7c[4] + (int)puVar2) < local_80) {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              do {
                iVar7 = toupper((int)*(char *)((int)local_80 + iVar12));
                *(char *)((int)puVar3 + iVar12) = (char)iVar7;
                iVar12 = iVar12 + 1;
              } while (iVar12 != iVar13);
            }
            puVar11 = local_7c;
            puVar6 = local_7c + 6;
            puVar8 = (uint *)FUN_0047d6a0(local_68 + 0x38,(byte *)local_7c);
            puVar2 = local_60;
            puVar3 = local_84;
            if (puVar8 != puVar6) {
              if (0xf < puVar11[0xb]) {
                puVar6 = (uint *)*puVar6;
              }
              FUN_00402690(puVar8,puVar6,puVar11[10]);
              puVar2 = local_60;
              puVar3 = local_84;
            }
          }
          FUN_004025a0((int *)&local_7c);
          local_8._0_1_ = 0xff;
          local_8._1_3_ = 0xffffff;
          if (0xf < local_18) {
            pvVar10 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar10 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00447fb4;
            FUN_005adb3f(pvVar10);
          }
          puVar2 = puVar2 + 6;
          local_60 = puVar2;
        } while (puVar2 != puVar3);
      }
    }
  }
  else {
    local_8 = 0x12;
    pbVar1 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff48,(undefined4 *)pbVar1);
    FUN_00592d70(&local_7c,',',in_stack_ffffff48);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    if (0xf < local_18) {
      pvVar10 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar10 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar10);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if ((local_78 - (int)local_7c) / 0x18 == 2) {
      puVar3 = local_7c;
      puVar2 = local_7c;
      if (0xf < local_7c[5]) {
        puVar2 = (uint *)*local_7c;
        puVar3 = (uint *)*local_7c;
      }
      puVar6 = local_7c;
      if (0xf < local_7c[5]) {
        puVar6 = (uint *)*local_7c;
      }
      FUN_00413ec0(&local_6c,toupper_exref,(char *)puVar6,(char *)(local_7c[4] + (int)puVar3),
                   (undefined1 *)puVar2);
      puVar2 = local_7c + 6;
      puVar3 = (uint *)FUN_0047d6a0(local_68 + 0x38,(byte *)local_7c);
      if (puVar3 != puVar2) {
        if (0xf < local_7c[0xb]) {
          puVar2 = (uint *)*puVar2;
        }
        FUN_00402690(puVar3,puVar2,local_7c[10]);
      }
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_7c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"hostilemessage",0xe);
  local_8 = 0x18;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  puVar2 = local_68;
  if (local_68 + 0x2a != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(local_68 + 0x2a,puVar6,puVar3[4]);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"accessflag",10);
  local_8 = 0x19;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar2 + 0x1e != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(puVar2 + 0x1e,puVar6,puVar3[4]);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"flagsuccessfulhack",0x12);
  local_8 = 0x1a;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar2 + 0x17 != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(puVar2 + 0x17,puVar6,puVar3[4]);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"flaghackfail",0xc);
  local_8 = 0x1b;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (puVar2 + 0x11 != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(puVar2 + 0x11,puVar6,puVar3[4]);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"alwaysactive",0xc);
  local_8 = 0x1c;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar1 = pbVar4;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar1 = *(byte **)pbVar4;
  }
  uVar5 = FUN_004031f0(pbVar1,*(uint *)(pbVar4 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar10 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar10 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  if ((char)uVar5 != '\0') {
    *(char *)puVar2 = '\x01';
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"detectedinzone",0xe);
  local_8 = 0x1d;
  puVar3 = (uint *)FUN_00419170(&DAT_0065b530,(byte *)local_44);
  if (puVar2 + 0x24 != puVar3) {
    puVar6 = puVar3;
    if (0xf < puVar3[5]) {
      puVar6 = (uint *)*puVar3;
    }
    FUN_00402690(puVar2 + 0x24,puVar6,puVar3[4]);
  }
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    pvVar10 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar10 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  puVar9 = (undefined4 *)local_88[0x4e];
  if ((undefined4 *)local_88[0x4f] == puVar9) {
    FUN_00414080(local_88 + 0x4d,puVar9,&local_8c);
  }
  else {
    *puVar9 = puVar2;
    local_88[0x4e] = local_88[0x4e] + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
