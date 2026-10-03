#include "../ois_server.exe.h"


void __fastcall FUN_00510100(int param_1)

{
  FUN_00522f20(*(void **)(param_1 + 0x40),(undefined4 *)&DAT_00000004,0.0);
  FUN_00591070(&DAT_005cdc70,"%s: destroying myself");
  return;
}


void __thiscall FUN_00510150(void *this,int param_1,float param_2,float param_3,int param_4)

{
  undefined4 *this_00;
  float *pfVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  byte *extraout_ECX;
  byte *pbVar10;
  byte *pbVar11;
  char ****ppppcVar12;
  byte *extraout_ECX_00;
  char ****ppppcVar13;
  int *piVar14;
  byte *pbVar15;
  int iVar16;
  float fVar17;
  undefined1 *puVar18;
  bool bVar19;
  byte *pbVar20;
  char *pcVar21;
  char *pcVar22;
  undefined **ppuVar23;
  uint uVar24;
  float local_54;
  int local_50;
  uint local_4c;
  undefined1 *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1971;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_4;
  local_4c = 0;
  if (param_2 <= 0.0) goto LAB_00511330;
  if ((*(char *)((int)DAT_0065b444 + 0x141) != '\0') && (*(char *)((int)this + 0x234) != '\0')) {
    FUN_00591070(&DAT_005cdc70,"%s: player is in invulnerable mode, tok no damage");
    goto LAB_00511330;
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x254) + 0x158);
  if ((((iVar3 == 4) || (iVar3 == 1)) || (iVar3 == 2)) || (iVar3 == 3)) goto LAB_00511330;
  local_4c = (int)this + 8;
  FUN_00591070(&DAT_005cdc70,"%s: TAKING %f damage of type %s");
  if (*(char *)((int)this + 0x234) != '\0') {
    if (param_3 == 1.4013e-45) {
      *(undefined1 *)(DAT_0065b5cc + 0x172) = 1;
    }
    else if (param_3 == 0.0) {
      *(undefined1 *)(DAT_0065b5cc + 0x171) = 1;
    }
  }
  local_54 = *(float *)(&DAT_005ce084 + DAT_0065b444[0x2a] * 4) * param_2 + param_2;
  if (param_1 - 0x2eU < 0x10d) {
    if (param_1 < 0x88) {
      iVar3 = 3;
    }
    else {
      iVar3 = (0xe1 < param_1) + 1;
    }
  }
  else {
    iVar3 = 0;
  }
  if (param_3 == 0.0) {
    puVar4 = (undefined4 *)FUN_0050ff80(this,iVar3);
LAB_00510417:
    iVar3 = FUN_0050bff0(this,(int)puVar4);
    if (99 < iVar3) {
      FUN_00591070(&DAT_005cdc70,
                   "%s: Unable to apply damage, no hull locations from this angle left undamaged.");
      goto LAB_00511330;
    }
  }
  else {
    if (param_3 == 2.8026e-45) {
      puVar4 = (undefined4 *)FUN_0050ff80(this,iVar3);
      goto LAB_00510417;
    }
    if (param_3 == 7.00649e-45) {
      puVar4 = (undefined4 *)FUN_0050ff80(this,iVar3);
      goto LAB_00510417;
    }
    if (param_3 == 1.4013e-45) {
      puVar4 = (undefined4 *)FUN_0050ff80(this,iVar3);
    }
    else {
      iVar3 = rand();
      puVar4 = (undefined4 *)(iVar3 % 5);
      if ((param_3 == 5.60519e-45) || (param_3 != 4.2039e-45)) goto LAB_00510417;
    }
  }
  fVar17 = SUB84((double)local_54,0);
  pcVar21 = "%s: Applying a max of %f %s damage to hull location \'%s\'";
  pbVar20 = &DAT_005cdc70;
  FUN_00591070(&DAT_005cdc70,"%s: Applying a max of %f %s damage to hull location \'%s\'");
  FUN_005238f0(*(void **)((int)this + 0x40),puVar4,param_3);
  if ((*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x30f) != '\0') &&
     (this != *(void **)(DAT_0065b5cc + 0xd0))) {
    FUN_005238f0(*(void **)((int)this + 0x40),(undefined4 *)&DAT_00000004,0.0);
  }
  uVar5 = FUN_0050d210(this,*(char *)((int)this + 0x234) == '\0');
  if (((char)uVar5 != '\0') && (*(char *)((int)this + 0x344) == '\0')) {
    *(undefined1 *)((int)this + 0x344) = 1;
    if (*(char *)((int)this + 0x234) != '\0') {
      local_8 = 0;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      piVar14 = *(int **)(*(int *)((int)this + 0x40) + 0x18);
      local_4c = 1;
      if (piVar14 == (int *)0x0) {
        uVar24 = 0x16;
        pcVar22 = "RCS Module destroyed.\n";
LAB_0051045d:
        FUN_00403640(local_44,pcVar22,uVar24);
      }
      else {
        cVar2 = (**(code **)(*piVar14 + 0x14))();
        if (cVar2 != '\0') {
          uVar24 = 0x1b;
          pcVar22 = "RCS Module non-functional.\n";
          goto LAB_0051045d;
        }
      }
      piVar14 = *(int **)(*(int *)((int)this + 0x40) + 0x10);
      if (piVar14 == (int *)0x0) {
        uVar24 = 0x16;
        pcVar22 = "Main Drive destroyed.\n";
LAB_0051048a:
        FUN_00403640(local_44,pcVar22,uVar24);
      }
      else {
        cVar2 = (**(code **)(*piVar14 + 0x14))();
        if (cVar2 != '\0') {
          uVar24 = 0x1b;
          pcVar22 = "Main Drive non-functional.\n";
          goto LAB_0051048a;
        }
      }
      piVar14 = *(int **)(*(int *)((int)this + 0x40) + 0x24);
      if (piVar14 == (int *)0x0) {
        uVar24 = 0x17;
        pcVar22 = "Helm System destroyed.\n";
LAB_005104b7:
        FUN_00403640(local_44,pcVar22,uVar24);
      }
      else {
        cVar2 = (**(code **)(*piVar14 + 0x14))();
        if (cVar2 != '\0') {
          uVar24 = 0x1c;
          pcVar22 = "Helm System non-functional.\n";
          goto LAB_005104b7;
        }
      }
      piVar14 = *(int **)(*(int *)((int)this + 0x40) + 0x28);
      if (piVar14 == (int *)0x0) {
        uVar24 = 0x12;
        pcVar22 = "NavCom destroyed.\n";
LAB_005104e4:
        FUN_00403640(local_44,pcVar22,uVar24);
      }
      else {
        cVar2 = (**(code **)(*piVar14 + 0x14))();
        if (cVar2 != '\0') {
          uVar24 = 0x17;
          pcVar22 = "NavCom non-functional.\n";
          goto LAB_005104e4;
        }
      }
      FUN_005226c0(*(int *)((int)this + 0x40));
      if (fVar17 <= 0.0) {
        FUN_00403640(local_44,"No functional batteries.\n",0x19);
      }
      FUN_00522770(*(int *)((int)this + 0x40));
      if (fVar17 <= 0.0) {
        FUN_00403640(local_44,"No means of power generation.\n",0x1e);
      }
      FUN_00527550(*(int **)((int)this + 0x224),4,"%s\n\n* SHIP DISABLED *");
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pvVar9 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar9 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
LAB_00510578:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
    if (((*(int *)((int)this + 0x44) != 0) &&
        (iVar3 = *(int *)(*(int *)((int)this + 0x44) + 0x124), iVar3 != 0)) &&
       (*(char *)(iVar3 + 0x114) != '\0')) {
      if (*(char *)(DAT_0065b444 + 0x1c) == '\0') {
        if ((*(char *)((int)DAT_0065b444 + 0x72) != '\0') &&
           (pvVar9 = *(void **)(DAT_0065b5cc + 0xd0), this != pvVar9)) {
          if (*(int *)((int)this + 100) == *(int *)((int)pvVar9 + 100)) {
            pcVar22 = "Friendly vessel disabled.";
          }
          else {
            pcVar22 = "Enemy vessel disabled.";
          }
          FUN_00527550(*(int **)((int)pvVar9 + 0x224),4,pcVar22);
        }
      }
      else {
        puVar6 = FUN_00402de0();
        uVar24 = 0;
        piVar14 = *(int **)(puVar6 + 0x3c);
        local_4c = (uint)((int)*(int **)(puVar6 + 0x40) + (3 - (int)piVar14)) >> 2;
        if (*(int **)(puVar6 + 0x40) < piVar14) {
          local_4c = 0;
        }
        if (local_4c != 0) {
          do {
            pvVar9 = *(void **)(*piVar14 + 100);
            if ((pvVar9 != (void *)0x0) && (pvVar9 != this)) {
              if (*(int *)((int)pvVar9 + 100) == *(int *)((int)this + 100)) {
                pcVar22 = "Friendly vessel disabled.";
              }
              else {
                pcVar22 = "Enemy vessel disabled.";
              }
              FUN_00527550(*(int **)((int)pvVar9 + 0x224),4,pcVar22);
            }
            uVar24 = uVar24 + 1;
            piVar14 = piVar14 + 1;
          } while (uVar24 != local_4c);
        }
      }
    }
    if (((*(char *)((int)this + 0x234) == '\0') && (local_50 != 0)) &&
       (*(char *)(local_50 + 0x234) != '\0')) {
      local_48 = &stack0xffffff80;
      pcVar21 = (char *)((uint)pcVar21 & 0xffffff00);
      FUN_00402690(&stack0xffffff80,"ships_disabled",0xe);
      local_8 = 1;
      FUN_00412770();
      local_8 = 0xffffffff;
      pbVar20 = extraout_ECX;
      FUN_0051e750(extraout_ECX,pcVar21);
    }
    FUN_004024e0(local_2c,(undefined4 *)((int)this + 0x238));
    local_8 = 2;
    ppppcVar12 = local_2c;
    if (0xf < local_18) {
      ppppcVar12 = (char ****)local_2c[0];
    }
    ppppcVar13 = local_2c;
    if (0xf < local_18) {
      ppppcVar13 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar13,(char *)((int)ppppcVar12 + local_1c),
                 (undefined1 *)ppppcVar12);
    local_48 = &stack0xffffff7c;
    FUN_00591e00(&stack0xffffff7c,"has_disabled_%s");
    local_8._0_1_ = 3;
    puVar4 = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a0ee0(puVar4,pbVar20);
    FUN_00591070(&DAT_005cdc70,"%s: I have just been disabled.");
    pbVar11 = (byte *)((int)this + 0x238);
    puVar6 = (undefined1 *)0x0;
    local_4c = *(uint *)(DAT_0065b5cc + 0x130);
    local_48 = (undefined1 *)((int)(*(int *)(DAT_0065b5cc + 0x134) - local_4c) >> 2);
    if (local_48 != (undefined1 *)0x0) {
      do {
        iVar3 = *(int *)(local_4c + (int)puVar6 * 4);
        pbVar15 = (byte *)(iVar3 + 0x34);
        if (0xf < *(uint *)(iVar3 + 0x48)) {
          pbVar15 = *(byte **)(iVar3 + 0x34);
        }
        pbVar10 = pbVar11;
        if (0xf < *(uint *)((int)this + 0x24c)) {
          pbVar10 = *(byte **)pbVar11;
        }
        uVar24 = FUN_004031f0(pbVar10,*(uint *)((int)this + 0x248),pbVar15,*(uint *)(iVar3 + 0x44));
        if ((char)uVar24 != '\0') {
          FUN_00412390();
          FUN_00482290(*(uint **)(local_4c + (int)puVar6 * 4));
          break;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < local_48);
    }
    iVar3 = DAT_0065b5cc;
    piVar14 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3a0 + *(int *)((int)this + 100) * 4);
    *piVar14 = *piVar14 + -1;
    if (*(int *)((int)this + 100) != 0) {
      iVar3 = *(int *)(iVar3 + 0xcc);
      pbVar15 = (byte *)(iVar3 + 0x84);
      if (0xf < *(uint *)(iVar3 + 0x98)) {
        pbVar15 = *(byte **)(iVar3 + 0x84);
      }
      if (0xf < *(uint *)((int)this + 0x24c)) {
        pbVar11 = *(byte **)pbVar11;
      }
      uVar24 = FUN_004031f0(pbVar11,*(uint *)((int)this + 0x248),pbVar15,*(uint *)(iVar3 + 0x94));
      if ((char)uVar24 != '\0') {
        FUN_00591070(&DAT_005cdc70,"%s: I was the priority target for team %d");
        iVar3 = DAT_0065b5cc;
        piVar14 = (int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x3ac + *(int *)((int)this + 100) * 4);
        *piVar14 = *piVar14 + -1;
        FUN_004cab80(*(int *)(iVar3 + 0xcc));
        FUN_004cacf0(*(int *)(DAT_0065b5cc + 0xcc));
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      ppppcVar12 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar12 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar12);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  }
  if ((*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x374) != '\0') &&
     (uVar5 = FUN_0050d210(this,'\0'), (char)uVar5 == '\0')) {
    (**(code **)(*(int *)this + 0x20))();
  }
  cVar2 = (**(code **)(*(int *)this + 0x20))();
  iVar3 = local_50;
  if ((((cVar2 != '\0') && (param_3 == 0.0)) && (*(char *)((int)this + 0x234) == '\0')) &&
     (local_50 == *(int *)(DAT_0065b5cc + 0xd0))) {
    local_48 = &stack0xffffff7c;
    pbVar20 = (byte *)((uint)pbVar20 & 0xffffff00);
    FUN_00402690(&stack0xffffff7c,"has_destroyed_ship",0x12);
    local_8 = 4;
    puVar4 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar4,pbVar20);
    FUN_004024e0(local_2c,(undefined4 *)((int)this + 0x238));
    local_8 = 5;
    ppppcVar12 = local_2c;
    if (0xf < local_18) {
      ppppcVar12 = (char ****)local_2c[0];
    }
    ppppcVar13 = local_2c;
    if (0xf < local_18) {
      ppppcVar13 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar13,(char *)((int)ppppcVar12 + local_1c),
                 (undefined1 *)ppppcVar12);
    local_48 = &stack0xffffff7c;
    FUN_00591e00(&stack0xffffff7c,"has_destroyed_%s");
    local_8._0_1_ = 6;
    puVar4 = FUN_00412df0();
    local_8._0_1_ = 5;
    FUN_004a0ee0(puVar4,pbVar20);
    if (((*(char *)((int)this + 0x234) == '\0') && (iVar3 != 0)) &&
       (*(char *)(iVar3 + 0x234) != '\0')) {
      local_48 = &stack0xffffff80;
      pcVar21 = (char *)((uint)pcVar21 & 0xffffff00);
      FUN_00402690(&stack0xffffff80,"ships_destroyed",0xf);
      local_8._0_1_ = 7;
      FUN_00412770();
      local_8 = CONCAT31(local_8._1_3_,5);
      pbVar20 = extraout_ECX_00;
      FUN_0051e750(extraout_ECX_00,pcVar21);
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      ppppcVar12 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar12 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar12)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar12);
    }
  }
  cVar2 = (**(code **)(*(int *)this + 0x24))();
  if (cVar2 == '\0') {
LAB_00510b90:
    if (*(char *)((int)this + 0x234) != '\0') goto LAB_00510b99;
LAB_00510bc8:
    puVar6 = (undefined1 *)0x0;
    local_4c = *(uint *)(DAT_0065b5cc + 0x130);
    local_48 = (undefined1 *)((int)(*(int *)(DAT_0065b5cc + 0x134) - local_4c) >> 2);
    if (local_48 != (undefined1 *)0x0) {
      do {
        iVar3 = *(int *)(local_4c + (int)puVar6 * 4);
        pbVar20 = (byte *)(iVar3 + 0x34);
        if (0xf < *(uint *)(iVar3 + 0x48)) {
          pbVar20 = *(byte **)(iVar3 + 0x34);
        }
        pbVar11 = (byte *)((int)this + 0x238);
        if (0xf < *(uint *)((int)this + 0x24c)) {
          pbVar11 = *(byte **)((int)this + 0x238);
        }
        uVar24 = FUN_004031f0(pbVar11,*(uint *)((int)this + 0x248),pbVar20,*(uint *)(iVar3 + 0x44));
        if ((char)uVar24 != '\0') {
          FUN_00412390();
          FUN_00482290(*(uint **)(local_4c + (int)puVar6 * 4));
          break;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < local_48);
    }
  }
  else {
    if (*(char *)((int)this + 0x234) == '\0') {
      if (iVar3 == *(int *)(DAT_0065b5cc + 0xd0)) {
        FUN_004024e0(local_2c,(undefined4 *)((int)this + 0x238));
        local_8 = 8;
        ppppcVar12 = local_2c;
        if (0xf < local_18) {
          ppppcVar12 = (char ****)local_2c[0];
        }
        ppppcVar13 = local_2c;
        if (0xf < local_18) {
          ppppcVar13 = (char ****)local_2c[0];
        }
        FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar13,(char *)((int)ppppcVar12 + local_1c)
                     ,(undefined1 *)ppppcVar12);
        local_48 = &stack0xffffff7c;
        FUN_00591e00(&stack0xffffff7c,"has_damaged_%s");
        local_8._0_1_ = 9;
        puVar4 = FUN_00412df0();
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_004a0ee0(puVar4,pbVar20);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          ppppcVar12 = (char ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppcVar12 = (char ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar12)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppcVar12);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      }
      goto LAB_00510b90;
    }
LAB_00510b99:
    if (((param_3 != 2.8026e-45) && (param_3 != 5.60519e-45)) && (param_3 != 0.0))
    goto LAB_00510bc8;
    if (80.0 <= local_54) {
      FUN_00511400(this);
    }
  }
  cVar2 = (**(code **)(*(int *)this + 0x20))();
  iVar3 = DAT_0065b5cc;
  if (cVar2 == '\0') {
    if (this == *(void **)(DAT_0065b5cc + 0xd0)) {
      iVar3 = *(int *)(DAT_0065b5cc + 0xcc);
      pbVar20 = (byte *)(iVar3 + 0x84);
      if (0xf < *(uint *)(iVar3 + 0x98)) {
        pbVar20 = *(byte **)pbVar20;
      }
      pbVar11 = (byte *)((int)this + 0x238);
      if (0xf < *(uint *)((int)this + 0x24c)) {
        pbVar11 = *(byte **)((int)this + 0x238);
      }
      uVar24 = FUN_004031f0(pbVar11,*(uint *)((int)this + 0x248),pbVar20,*(uint *)(iVar3 + 0x94));
      if ((char)uVar24 != '\0') {
        FUN_00527550(*(int **)((int)this + 0x224),3,"Ship damaged by target vessel. Scenario over.")
        ;
      }
    }
    if (*(char *)((int)this + 0x234) == '\0') goto LAB_00511330;
    if (param_3 == 1.4013e-45) {
      iVar7 = -1;
      iVar3 = 2;
      pvVar9 = this;
      pvVar8 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar8,(int)pvVar9,iVar3,iVar7);
      local_48 = &stack0xffffff80;
      FUN_004024e0(&stack0xffffff80,(undefined4 *)((int)this + 0x238));
      local_8 = 0xc;
      pvVar9 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar9,(byte *)pcVar21);
      iVar3 = rand();
      iVar3 = (iVar3 % 6) * 2 + 2;
      pvVar9 = (void *)FUN_004023e0();
      FUN_005327a0(pvVar9,iVar3);
      goto LAB_00511330;
    }
    if (param_3 == 4.2039e-45) {
      iVar3 = rand();
      iVar3 = iVar3 % 3 + 1;
      iVar7 = 0x1e;
      pvVar9 = this;
      pvVar8 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar8,(int)pvVar9,iVar7,iVar3);
      local_48 = &stack0xffffff80;
      FUN_004024e0(&stack0xffffff80,(undefined4 *)((int)this + 0x238));
      local_8 = 0xd;
      pvVar9 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar9,(byte *)pcVar21);
      uVar24 = rand();
      uVar24 = uVar24 & 0x80000001;
      if ((int)uVar24 < 0) {
        uVar24 = uVar24 - 1 | 0xfffffffe;
LAB_005112d4:
        uVar24 = uVar24 + 1;
      }
    }
    else if (param_3 == 5.60519e-45) {
      iVar3 = rand();
      iVar3 = iVar3 % 3 + 1;
      iVar7 = 0x1e;
      pvVar9 = this;
      pvVar8 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar8,(int)pvVar9,iVar7,iVar3);
      iVar3 = rand();
      iVar3 = iVar3 % 3 + 1;
      iVar7 = 0x1f;
      pvVar9 = this;
      pvVar8 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar8,(int)pvVar9,iVar7,iVar3);
      local_48 = &stack0xffffff80;
      FUN_004024e0(&stack0xffffff80,(undefined4 *)((int)this + 0x238));
      local_8 = 0xe;
      pvVar9 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar9,(byte *)pcVar21);
      uVar24 = rand();
      uVar24 = uVar24 & 0x80000003;
      if ((int)uVar24 < 0) {
        uVar24 = uVar24 - 1 | 0xfffffffc;
        goto LAB_005112d4;
      }
    }
    else if (param_3 == 2.8026e-45) {
      iVar3 = rand();
      iVar3 = iVar3 % 3 + 1;
      iVar7 = 0x1f;
      pvVar9 = this;
      pvVar8 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar8,(int)pvVar9,iVar7,iVar3);
      local_48 = &stack0xffffff80;
      FUN_004024e0(&stack0xffffff80,(undefined4 *)((int)this + 0x238));
      local_8 = 0xf;
      pvVar9 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar9,(byte *)pcVar21);
      uVar24 = rand();
      uVar24 = uVar24 & 0x80000001;
      if ((int)uVar24 < 0) {
        uVar24 = uVar24 - 1 | 0xfffffffe;
        goto LAB_005112d4;
      }
    }
    else {
      if (param_3 != 0.0) {
        if (param_3 == 7.00649e-45) {
          local_48 = &stack0xffffff80;
          FUN_004024e0(&stack0xffffff80,(undefined4 *)((int)this + 0x238));
          local_8 = 0x11;
          pvVar9 = (void *)FUN_004023e0();
          local_8 = 0xffffffff;
          FUN_00531140(pvVar9,(byte *)pcVar21);
        }
        goto LAB_00511330;
      }
      iVar7 = -1;
      iVar3 = 2;
      pvVar9 = this;
      pvVar8 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar8,(int)pvVar9,iVar3,iVar7);
      local_48 = &stack0xffffff80;
      FUN_004024e0(&stack0xffffff80,(undefined4 *)((int)this + 0x238));
      local_8 = 0x10;
      pvVar9 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar9,(byte *)pcVar21);
      uVar24 = rand();
      uVar24 = uVar24 & 0x80000007;
      if ((int)uVar24 < 0) {
        uVar24 = uVar24 - 1 | 0xfffffff8;
        goto LAB_005112d4;
      }
    }
    iVar3 = uVar24 * 2 + 2;
    pvVar9 = (void *)FUN_004023e0();
    FUN_005327a0(pvVar9,iVar3);
    goto LAB_00511330;
  }
  uVar24 = 0;
  *(undefined1 *)((int)this + 0xd8) = 1;
  iVar7 = *(int *)(iVar3 + 0xd8);
  piVar14 = (int *)(iVar7 + 0xcc);
  if (*(int *)(iVar7 + 0xd0) - *piVar14 >> 2 != 0) {
    do {
      local_48 = &stack0xffffff80;
      FUN_004024e0(&stack0xffffff80,(undefined4 *)(*(int *)(*piVar14 + uVar24 * 4) + 0x238));
      local_8 = 10;
      puVar6 = FUN_00402de0();
      local_8 = 0xffffffff;
      cVar2 = FUN_004232c0(puVar6,(byte *)pcVar21);
      if (cVar2 != '\0') {
        FUN_00591e00((undefined1 *)local_2c,"%s destroyed.");
        local_8 = 0xb;
        ppppcVar12 = local_2c;
        if (0xf < local_18) {
          ppppcVar12 = (char ****)local_2c[0];
        }
        pcVar21 = *(char **)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc) + uVar24 * 4) +
                            0x224);
        FUN_00527550((int *)pcVar21,3,ppppcVar12);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          ppppcVar12 = (char ****)local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (ppppcVar12 = (char ****)local_2c[0][-1],
             (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar12)))) goto LAB_00510578;
          FUN_005adb3f(ppppcVar12);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      }
      uVar24 = uVar24 + 1;
      piVar14 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xcc);
      iVar3 = DAT_0065b5cc;
    } while (uVar24 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0xd0) - *piVar14 >> 2));
  }
  *(undefined4 *)(iVar3 + 0x1e8) = *(undefined4 *)(iVar3 + 0x1e4);
  local_54 = 0.0;
  do {
    fVar17 = local_54;
    iVar7 = FUN_0050bff0(this,(int)local_54);
    iVar3 = DAT_0065b5cc;
    if (99 < iVar7) {
      pfVar1 = *(float **)(DAT_0065b5cc + 0x1e8);
      if (*(float **)(DAT_0065b5cc + 0x1ec) == pfVar1) {
        FUN_004141e0((void *)(DAT_0065b5cc + 0x1e4),pfVar1,&local_54);
        fVar17 = local_54;
      }
      else {
        *pfVar1 = fVar17;
        *(int *)(iVar3 + 0x1e8) = *(int *)(iVar3 + 0x1e8) + 4;
      }
    }
    iVar3 = local_50;
    local_54 = (float)((int)fVar17 + 1);
  } while ((int)local_54 < 5);
  if (local_50 == 0) {
    ppuVar23 = &PTR_005ce008;
    uVar24 = 0;
LAB_00510e44:
    FUN_00402690((void *)(DAT_0065b5cc + 0x1cc),ppuVar23,uVar24);
  }
  else {
    bVar19 = false;
    if (*(int *)(local_50 + 0x254) != 0) {
      bVar19 = *(int *)(*(int *)(local_50 + 0x254) + 0x158) == 4;
    }
    iVar7 = local_50;
    if (((!bVar19) || (iVar7 = *(int *)(local_50 + 0x39c), iVar7 != 0)) &&
       (ppuVar23 = (undefined **)(iVar7 + 8), (undefined **)(DAT_0065b5cc + 0x1cc) != ppuVar23)) {
      if (0xf < *(uint *)(iVar7 + 0x1c)) {
        ppuVar23 = (undefined **)*ppuVar23;
      }
      uVar24 = *(uint *)(iVar7 + 0x18);
      goto LAB_00510e44;
    }
  }
  cVar2 = FUN_0040fd70();
  iVar7 = DAT_0065b5cc;
  if (cVar2 != '\0') {
    *(undefined1 *)(DAT_0065b5cc + 0x1c7) = 1;
  }
  if ((*(char *)((int)DAT_0065b444 + 0x72) != '\0') && (*(char *)((int)this + 0x234) != '\0')) {
    *DAT_0065b444 = 2;
  }
  this_00 = (undefined4 *)(iVar7 + 0x17c);
  puVar4 = (undefined4 *)((int)this + 8);
  if (this_00 != puVar4) {
    if (0xf < *(uint *)((int)this + 0x1c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690(this_00,puVar4,*(uint *)((int)this + 0x18));
    iVar7 = DAT_0065b5cc;
  }
  iVar16 = *(int *)((int)this + 0x254);
  puVar4 = (undefined4 *)(iVar16 + 0x48);
  if ((undefined4 *)(iVar7 + 0x194) != puVar4) {
    if (0xf < *(uint *)(iVar16 + 0x5c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(iVar7 + 0x194),puVar4,*(uint *)(iVar16 + 0x58));
    iVar16 = *(int *)((int)this + 0x254);
    iVar7 = DAT_0065b5cc;
  }
  puVar4 = (undefined4 *)(iVar16 + 0x30);
  if ((undefined4 *)(iVar7 + 0x1ac) != puVar4) {
    if (0xf < *(uint *)(iVar16 + 0x44)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00402690((undefined4 *)(iVar7 + 0x1ac),puVar4,*(uint *)(iVar16 + 0x40));
    iVar7 = DAT_0065b5cc;
  }
  *(undefined4 *)(iVar7 + 0x178) = *(undefined4 *)((int)this + 0x20);
  if (((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x44), iVar3 != 0)) &&
     ((iVar3 = *(int *)(iVar3 + 0x70), iVar3 == 7 || (iVar3 == 8)))) {
    *(undefined1 *)(iVar7 + 0x1c8) = 1;
  }
  FUN_004106d0();
  if (((*(int *)((int)this + 0x44) != 0) &&
      (iVar3 = *(int *)(*(int *)((int)this + 0x44) + 0x124), iVar3 != 0)) &&
     (*(char *)(iVar3 + 0x114) != '\0')) {
    if (*(char *)(DAT_0065b444 + 0x1c) == '\0') {
      if ((*(char *)((int)DAT_0065b444 + 0x72) != '\0') &&
         (pvVar9 = *(void **)(DAT_0065b5cc + 0xd0), this != pvVar9)) {
        if (*(int *)((int)this + 100) == *(int *)((int)pvVar9 + 100)) {
          pcVar21 = "Friendly vessel destroyed.";
        }
        else {
          pcVar21 = "Enemy vessel destroyed.";
        }
        FUN_00527550(*(int **)((int)pvVar9 + 0x224),4,pcVar21);
      }
    }
    else {
      puVar6 = FUN_00402de0();
      puVar18 = (undefined1 *)0x0;
      piVar14 = *(int **)(puVar6 + 0x3c);
      local_48 = (undefined1 *)((uint)((int)*(int **)(puVar6 + 0x40) + (3 - (int)piVar14)) >> 2);
      if (*(int **)(puVar6 + 0x40) < piVar14) {
        local_48 = (undefined1 *)0x0;
      }
      if (local_48 != (undefined1 *)0x0) {
        do {
          pvVar9 = *(void **)(*piVar14 + 100);
          if ((pvVar9 != (void *)0x0) && (pvVar9 != this)) {
            if (*(int *)((int)pvVar9 + 100) == *(int *)((int)this + 100)) {
              pcVar21 = "Friendly vessel destroyed.";
            }
            else {
              pcVar21 = "Enemy vessel destroyed.";
            }
            FUN_00527550(*(int **)((int)pvVar9 + 0x224),4,pcVar21);
          }
          puVar18 = puVar18 + 1;
          piVar14 = piVar14 + 1;
        } while (puVar18 != local_48);
      }
    }
  }
LAB_00511330:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00511350(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  
  FUN_00591070(&DAT_005cdc70,"Repaired player\'s console damage.");
  puVar5 = *(undefined4 **)(param_1 + 0x228);
  puVar1 = *(undefined4 **)(param_1 + 0x22c);
  do {
    if (puVar5 == puVar1) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x228);
      return;
    }
    piVar2 = (int *)*puVar5;
    if (piVar2 != (int *)0x0) {
      if (0xf < (uint)piVar2[5]) {
        pvVar3 = (void *)*piVar2;
        pvVar4 = pvVar3;
        if ((0xfff < piVar2[5] + 1U) &&
           (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      piVar2[4] = 0;
      piVar2[5] = 0xf;
      *(undefined1 *)piVar2 = 0;
      FUN_005adb3f(piVar2);
    }
    puVar5 = puVar5 + 1;
  } while( true );
}


void __fastcall FUN_00511400(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Layer *pLVar6;
  byte ****ppppbVar7;
  int *piVar8;
  byte *pbVar9;
  byte ****ppppbVar10;
  uint uVar11;
  byte *in_stack_ffffff94;
  Vec3 local_44 [8];
  float local_3c;
  Layer *local_34;
  Layer *local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c19e4;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0065c25c == (Layer *)0x0) {
    local_30 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(local_30);
  }
  local_8 = 0xffffffff;
  FUN_00530fa0((undefined1 *)local_2c);
  uVar11 = local_18;
  ppppbVar10 = (byte ****)local_2c[0];
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  ppppbVar7 = local_2c;
  if (0xf < local_18) {
    ppppbVar7 = (byte ****)local_2c[0];
  }
  uVar4 = FUN_004031f0((byte *)ppppbVar7,local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar4 == '\0') {
    FUN_004024e0(&stack0xffffff94,local_2c);
    iVar5 = FUN_005116d0(param_1,in_stack_ffffff94);
    ppppbVar10 = (byte ****)local_2c[0];
    uVar11 = local_18;
    if (iVar5 == 0) {
      pLVar6 = (Layer *)FUN_005adb0f(0x28);
      local_8._0_1_ = 2;
      local_30 = pLVar6;
      FUN_004024e0(&stack0xffffff94,local_2c);
      local_34 = FUN_004b6b90(pLVar6,in_stack_ffffff94);
      local_8._0_1_ = 1;
      puVar2 = *(undefined4 **)((int)param_1 + 0x22c);
      if (*(undefined4 **)((int)param_1 + 0x230) == puVar2) {
        FUN_004141e0((void *)((int)param_1 + 0x228),puVar2,&local_34);
      }
      else {
        *puVar2 = local_34;
        *(int *)((int)param_1 + 0x22c) = *(int *)((int)param_1 + 0x22c) + 4;
      }
      local_34 = DAT_0065c25c;
      if (DAT_0065c25c == (Layer *)0x0) {
        local_30 = (Layer *)FUN_005adb0f(0x418);
        local_8._0_1_ = 3;
        DAT_0065c25c = FUN_0052b7a0(local_30);
        local_8._0_1_ = 1;
      }
      iVar5 = *(int *)(DAT_0065c25c + 0x2d4);
      uVar11 = 0;
      piVar8 = (int *)(iVar5 + 0x90);
      local_34 = DAT_0065c25c;
      if (*(int *)(iVar5 + 0x94) - *(int *)(iVar5 + 0x90) >> 2 != 0) {
        do {
          local_30 = (Layer *)*piVar8;
          iVar1 = uVar11 * 4;
          iVar3 = *(int *)(local_30 + iVar1);
          if (*(char *)(iVar3 + 0xfe) != '\0') {
            pbVar9 = (byte *)(iVar3 + 0x58);
            if (0xf < *(uint *)(iVar3 + 0x6c)) {
              pbVar9 = *(byte **)(iVar3 + 0x58);
            }
            uVar4 = FUN_004031f0(pbVar9,*(uint *)(iVar3 + 0x68),(byte *)&PTR_005ce008,0);
            if ((char)uVar4 == '\0') {
              FUN_004024e0(&stack0xffffff94,(undefined4 *)(*(int *)(local_30 + iVar1) + 0x58));
              local_30 = (Layer *)FUN_005116d0(DAT_0065b3d4,in_stack_ffffff94);
              pLVar6 = local_34;
              if (local_30 == (Layer *)0x0) break;
              cocos2d::Vec3::Vec3(local_44,(Vec3 *)(*(int *)(*(int *)(*(int *)(local_34 + 0x2d4) +
                                                                     0x90) + iVar1) + 0x2fc));
              local_8._0_1_ = 4;
              local_3c = (float)*(int *)(local_30 + 0x24) + local_3c;
              (**(code **)(**(int **)(*(int *)(iVar1 + *(int *)(*(int *)(pLVar6 + 0x2d4) + 0x90)) +
                                     0x3dc) + 0xc4))();
              local_8._0_1_ = 1;
              cocos2d::Vec3::~Vec3(local_44);
              iVar5 = *(int *)(pLVar6 + 0x2d4);
            }
          }
          piVar8 = (int *)(iVar5 + 0x90);
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)(*(int *)(iVar5 + 0x94) - *piVar8 >> 2));
      }
      FUN_00591070(&DAT_005cdc70,"Damaged player\'s %s console.");
      ppppbVar10 = (byte ****)local_2c[0];
      uVar11 = local_18;
    }
  }
  if (0xf < uVar11) {
    ppppbVar7 = ppppbVar10;
    if ((0xfff < uVar11 + 1) &&
       (ppppbVar7 = (byte ****)ppppbVar10[-1],
       (byte *)0x1f < (byte *)((int)ppppbVar10 + (-4 - (int)ppppbVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __thiscall FUN_005116d0(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar1 = *(int *)((int)this + 0x228);
  uVar6 = *(int *)((int)this + 0x22c) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pbVar9 = *(byte **)(iVar1 + uVar7 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar5 = *(byte **)pbVar9;
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar9 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
        goto LAB_00511728;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar8 = 0;
LAB_00511728:
  if (0xf < in_stack_00000018) {
    pbVar9 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar9 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar9)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar9);
  }
  return uVar8;
}


int __fastcall FUN_00511770(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x254) + 0xd8);
  iVar1 = FUN_0050bf30(param_1);
  fVar8 = (100.0 - (float)iVar1) / 100.0;
  if (fVar8 < 1.0) {
    iVar6 = (int)((float)(iVar6 / 5) * fVar8 + (float)(iVar6 - iVar6 / 5));
  }
  uVar7 = 0;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x3c);
  uVar5 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x40) - iVar1 >> 2;
  if (uVar5 != 0) {
    do {
      iVar2 = FUN_004ae3d0(*(int *)(iVar1 + uVar7 * 4));
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + iVar2;
    } while (uVar7 < uVar5);
  }
  iVar1 = 0xe;
  piVar4 = (int *)(*(int *)((int)param_1 + 0x1f8) + 0xc);
  do {
    iVar2 = *piVar4;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = 0xfa;
      if (*(char *)(iVar2 + 1) == '\0') {
        iVar3 = 100;
      }
      if (*(char *)(iVar2 + 2) != '\0') {
        iVar3 = iVar3 + 0xfa;
      }
    }
    iVar6 = iVar6 + iVar3;
    piVar4 = piVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return iVar6;
}


uint __fastcall FUN_00511860(int param_1)

{
  int *piVar1;
  uint in_EAX;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1f8) != 0) {
    in_EAX = *(uint *)(param_1 + 0x254);
    iVar3 = 0;
    piVar1 = (int *)(in_EAX + 0xe4);
    if (0 < *piVar1) {
      puVar2 = (uint *)(*(int *)(param_1 + 0x1f8) + 0xc);
      do {
        in_EAX = *puVar2;
        if (((in_EAX != 0) && (*(int *)(in_EAX + 4) != -1)) && (0 < *(int *)(in_EAX + 8))) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *piVar1);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __fastcall FUN_005118b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x254) + 0xe4);
  if (0 < iVar1) {
    piVar4 = (int *)(*(int *)(param_1 + 0x1f8) + 0xc);
    do {
      if (((int)uVar3 < 0) ||
         (((iVar2 = *(int *)(*(int *)(param_1 + 0x1f8) + 8), 0 < iVar2 && (iVar2 <= (int)uVar3)) ||
          (*piVar4 == 0)))) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return uVar3 & 0xffffff00;
}


int __fastcall FUN_00511900(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar2 = 0xc;
    do {
      if (*(int *)(*(int *)(param_1 + 0x254) + 0xe4) <= iVar3) {
        return -1;
      }
      if ((iVar2 < 0xc) ||
         (((0 < *(int *)(iVar1 + 8) && (*(int *)(iVar1 + 8) <= iVar3)) ||
          (*(int *)(iVar2 + iVar1) == 0)))) {
        return iVar3;
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar2 < 0x44);
  }
  return -1;
}


void __thiscall FUN_00511950(void *this,undefined4 *param_1,char param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint uVar5;
  void *in_stack_ffffffc4;
  void *pvVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1a62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)this + 0x234) != '\0') {
    iVar2 = FUN_00412da0();
    FUN_0042f2b0(iVar2);
    puVar3 = FUN_004125d0();
    iVar2 = DAT_0065b5cc;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 0x374) = 0;
    FUN_00432470(puVar3,'\x01','\x01');
  }
  FUN_0050cc10((int)this);
  if (param_3 == '\0') {
    uVar5 = 0;
    *(undefined1 *)((int)this + 0xe4) = 0;
    if (*(int *)(*(int *)((int)this + 0x40) + 0x40) - *(int *)(*(int *)((int)this + 0x40) + 0x3c) >>
        2 != 0) {
      do {
        FUN_004ae9f0(*(void **)(*(int *)(*(int *)((int)this + 0x40) + 0x3c) + uVar5 * 4),(int)this);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(*(int *)(*(int *)((int)this + 0x40) + 0x40) -
                              *(int *)(*(int *)((int)this + 0x40) + 0x3c) >> 2));
    }
  }
  if (param_2 == '\0') {
    iVar7 = -1;
    iVar2 = 4;
    pvVar6 = this;
    this_00 = (void *)FUN_00402f60();
    FUN_00557fb0(this_00,(int)pvVar6,iVar2,iVar7);
  }
  if (*(void **)(DAT_0065b5cc + 0xd0) == this) {
    iVar7 = FUN_004023e0();
    iVar2 = *(int *)(iVar7 + 0x2d4);
    if ((iVar2 != 0) && (DAT_0065b3d4 != 0)) {
      *(undefined2 *)(iVar7 + 0x3cc) = *(undefined2 *)(iVar2 + 0x8c);
      *(undefined1 *)(iVar7 + 0x3ce) = *(undefined1 *)(iVar2 + 0x8e);
      bVar1 = cocos2d::Color3B::operator==((Color3B *)(iVar7 + 0x3cf),(Color3B *)(iVar7 + 0x3cc));
      if (!bVar1) {
        *(undefined4 *)(iVar7 + 0x3c4) = 0;
        *(undefined4 *)(iVar7 + 0x3c8) = 0x40000000;
        *(undefined1 *)(iVar7 + 0x3c0) = 1;
      }
    }
  }
  *(undefined4 *)((int)this + 0x274) = *(undefined4 *)((int)this + 0x270);
  *(undefined4 **)((int)this + 0x178) = param_1;
  (**(code **)*param_1)();
  *(undefined4 *)((int)this + 0xf8) = 2;
  *(undefined4 *)((int)this + 0xd4) = 3;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  iVar2 = *(int *)(*(int *)((int)*(void **)((int)this + 0x178) + 0x254) + 0x158);
  if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) {
    FUN_0051b780(*(void **)((int)this + 0x178),(int)this);
    if (*(char *)((int)this + 0x234) == '\0') goto LAB_00511d7c;
    if (DAT_0065c288 == (int *)0x0) {
      puVar3 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 0;
      DAT_0065c288 = (int *)FUN_00485f60(puVar3);
      local_8 = 0xffffffff;
    }
    FUN_00489d50(DAT_0065c288);
  }
  if (*(char *)((int)this + 0x234) != '\0') {
    if (param_3 == '\0') {
      iVar2 = *(int *)((int)this + 0x178);
      iVar7 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158);
      if ((iVar7 == 1) || (iVar7 == 3)) {
        iVar7 = *(int *)(iVar2 + 0x390);
        if (iVar7 == 0) {
          FUN_00591070("ERROR","Tried to add owed amount to station with no faction.");
        }
        else {
          *(float *)(iVar7 + 0xd0) = (float)*(int *)(iVar2 + 0x3dc) + *(float *)(iVar7 + 0xd0);
        }
        FUN_00591e00(&stack0xffffffc4,"visited_station_%s");
        local_8 = 1;
        if (DAT_0065c294 == (void *)0x0) {
          puVar3 = (undefined4 *)FUN_005adb0f(0x28);
          local_8 = CONCAT31(local_8._1_3_,2);
          DAT_0065c294 = (void *)FUN_0051e500(puVar3);
        }
        local_8 = 0xffffffff;
        FUN_0051e6c0(DAT_0065c294,in_stack_ffffffc4);
        in_stack_ffffffc4 = (void *)((uint)in_stack_ffffffc4 & 0xffffff00);
        FUN_00402690(&stack0xffffffc4,"times_docked",0xc);
        local_8 = 3;
        uVar4 = extraout_ECX;
        if (DAT_0065c294 == (void *)0x0) {
          puVar3 = (undefined4 *)FUN_005adb0f(0x28);
          local_8 = CONCAT31(local_8._1_3_,4);
          DAT_0065c294 = (void *)FUN_0051e500(puVar3);
          uVar4 = extraout_ECX_00;
        }
        local_8 = 0xffffffff;
        FUN_0051e750(uVar4,in_stack_ffffffc4);
        FUN_00407510();
      }
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x40) + 0xc);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x62) != '\0')) {
      *(undefined1 *)(iVar2 + 0x62) = 0;
    }
    FUN_004023e0();
    FUN_0052edd0();
    FUN_0051f850(*(void **)((int)this + 0x24));
    puVar3 = FUN_00412b00();
    *(undefined1 *)puVar3 = 1;
    FUN_00591070(&DAT_005cdc70,"Removing all ships on next NPCShipManager cycle.");
    puVar3 = DAT_0065c280;
    *(undefined4 *)(DAT_0065b5cc + 0xd8) = *(undefined4 *)((int)this + 0x24);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_005adb0f(0x98);
      local_8 = 5;
      puVar3 = FUN_0058f5d0(puVar3);
      local_8 = 0xffffffff;
      DAT_0065c280 = puVar3;
    }
    puVar3[0x1f] = puVar3[0x1e];
    puVar3[7] = puVar3[6];
    puVar3[10] = puVar3[9];
    puVar3[0xd] = puVar3[0xc];
    puVar3[0x10] = puVar3[0xf];
    puVar3[0x13] = 0;
    FUN_00590570((int)(puVar3 + 0x14));
    if (((*(char *)(DAT_0065b444 + 4) == '\0') && (param_3 == '\0')) &&
       ((iVar2 = *(int *)(param_1[0x95] + 0x158), iVar2 == 1 || ((iVar2 == 2 || (iVar2 == 3)))))) {
      FUN_004127d0();
      FUN_004b8550();
    }
  }
LAB_00511d7c:
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  if (0.0 <= *(float *)((int)this + 0x58)) {
    *(undefined4 *)((int)this + 0x58) = 0xbf800000;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00511dc0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  Layer *pLVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1a92;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0050cc10((int)this);
  *(undefined4 *)((int)this + 0x274) = *(undefined4 *)((int)this + 0x270);
  *(undefined4 **)((int)this + 0x178) = param_1;
  (**(code **)*param_1)(param_1,uVar2);
  *(undefined4 *)((int)this + 0xf8) = 1;
  *(undefined4 *)((int)this + 0xd4) = 3;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  if (*(char *)((int)this + 0xe4) != '\0') {
    if (*(char *)((int)this + 0x234) == '\0') {
      *(undefined1 *)((int)this + 0xe4) = 0;
    }
    else {
      FUN_004dfeb0((int)this);
    }
  }
  iVar4 = *(int *)(*(int *)((int)this + 0x40) + 0x20);
  if ((iVar4 != 0) && (*(int *)(*(int *)(iVar4 + 8) + 4) == 8)) {
    piVar5 = (int *)(iVar4 + 0x3c);
    iVar4 = 8;
    do {
      iVar1 = *piVar5;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) != '\0')) {
        *piVar5 = 0;
        FUN_0051f7b0(*(void **)(iVar1 + 0x24),iVar1);
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(char *)((int)this + 0xe4) != '\0') {
    *(undefined1 *)((int)this + 0xe4) = 0;
  }
  if (*(char *)((int)this + 0x234) != '\0') {
    if (*(int *)(*(int *)(*(int *)((int)this + 0x178) + 0x254) + 0x158) == 1) {
      FUN_00407510();
    }
    iVar4 = *(int *)(*(int *)((int)this + 0x40) + 0xc);
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x62) != '\0')) {
      *(undefined1 *)(iVar4 + 0x62) = 0;
    }
    FUN_00527550(*(int **)((int)this + 0x224),1,"Docking with %s");
    if (DAT_0065c25c == (Layer *)0x0) {
      pLVar3 = (Layer *)FUN_005adb0f(0x418);
      local_8 = 0;
      DAT_0065c25c = FUN_0052b7a0(pLVar3);
      local_8 = 0xffffffff;
    }
    FUN_0052edd0();
    iVar4 = *(int *)(param_1[0x95] + 0x158);
    if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
      FUN_004127d0();
      FUN_004b8550();
    }
  }
  fVar6 = (float)*(int *)(*(int *)(*(int *)((int)this + 0x178) + 0x254) + 0x15c);
  *(float *)((int)this + 0x108) = fVar6;
  *(float *)((int)this + 0x10c) = fVar6;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00511fb0(void *this,char param_1)

{
  int iVar1;
  int *_Dst;
  undefined4 *puVar2;
  size_t _Size;
  undefined1 *this_00;
  float fVar3;
  uint in_stack_ffffffb4;
  byte *pbVar4;
  undefined4 local_20;
  undefined1 *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1ab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004028b0(*(int **)((int)this + 0x35c),*(int **)((int)this + 0x360));
  *(undefined4 *)((int)this + 0x360) = *(undefined4 *)((int)this + 0x35c);
  if (*(char *)((int)this + 0x325) != '\0') {
    *(undefined1 *)((int)this + 0x325) = 0;
  }
  if (((*(int *)((int)this + 0x178) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1))
     && ((iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x178) + 0x254) + 0x158), iVar1 == 1 ||
         ((iVar1 == 2 || (iVar1 == 3)))))) {
    FUN_004127d0();
    FUN_004b8550();
  }
  if (*(char *)((int)this + 0xe4) == '\0') {
    FUN_00522530(*(int *)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x274) = *(undefined4 *)((int)this + 0x270);
  if (*(char *)((int)this + 0x234) != '\0') {
    if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x314) != '\0') {
      FUN_00591070(&DAT_005cdc70,"resetting NPC positions.");
      FUN_00408110();
      FUN_00408760('\0');
    }
    local_1c = &stack0xffffffb4;
    pbVar4 = (byte *)(in_stack_ffffffb4 & 0xffffff00);
    FUN_00402690(&stack0xffffffb4,"is_docked",9);
    local_8 = 0;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar2,pbVar4);
  }
  this_00 = *(undefined1 **)((int)this + 0x178);
  iVar1 = *(int *)(*(int *)((int)this_00 + 0x254) + 0x158);
  if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) && (*(int *)((int)this_00 + 0x3dc) != 0)) {
    local_1c = this_00;
    local_14 = FUN_0051b8a0(this_00,(int)this);
    if (local_14 != (int *)0x0) {
      local_18 = *(int **)((int)this_00 + 0x3c8);
      puVar2 = FUN_00414000(&local_20,(int *)&local_14,*(int **)((int)this_00 + 0x3c4),local_18);
      _Dst = (int *)*puVar2;
      if (_Dst != local_18) {
        _Size = *(int *)((int)this_00 + 0x3c8) - (int)local_18;
        memmove(_Dst,local_18,_Size);
        *(size_t *)((int)local_1c + 0x3c8) = _Size + (int)_Dst;
        this_00 = local_1c;
      }
    }
    FUN_005adb3f(local_14);
    if (*(char *)((int)this + 0x234) != '\0') {
      if (*(int *)((int)this_00 + 0x398) != 0) {
        FUN_0049f240(*(int *)((int)this_00 + 0x398));
        FUN_0049e640(*(byte **)((int)this_00 + 0x398));
      }
      FUN_0051bc30((int)this_00);
      FUN_0051bca0((int)this_00);
    }
  }
  if ((*(int *)((int)this + 0xf8) == 2) && (*(int *)((int)this + 0xd4) == 3)) {
    if (param_1 != '\0') {
      *(undefined4 *)((int)this + 0xf8) = 0;
      *(undefined4 *)((int)this + 0x108) = 0xbf800000;
      *(undefined4 *)((int)this + 0x10c) = 0xbf800000;
      *(undefined4 *)((int)this + 0xd4) = 0;
      *(undefined4 *)((int)this + 0x2c0) = 0;
      *(undefined4 *)((int)this + 0x2c4) = 0;
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)((int)this + 0xf8) = 3;
    fVar3 = (float)*(int *)(*(int *)(*(int *)((int)this + 0x178) + 0x254) + 0x160);
    *(float *)((int)this + 0x108) = fVar3;
    *(float *)((int)this + 0x10c) = fVar3;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00512270(void *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char ****ppppcVar4;
  void *pvVar5;
  char ****ppppcVar6;
  uint uVar7;
  uint uVar8;
  byte *in_stack_ffffff78;
  undefined1 *local_58;
  void *local_54 [5];
  uint local_40;
  char ***local_3c;
  char **ppcStack_38;
  char **ppcStack_34;
  char **ppcStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &LAB_005c1af8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar7 = 0;
  piVar2 = *(int **)((int)this + 0x214);
  uVar8 = *(int *)((int)this + 0x218) - (int)piVar2 >> 2;
  puVar1 = &stack0xfffffffc;
  if (uVar8 != 0) {
    do {
      if (*(int *)(*piVar2 + 0x130) == param_1) {
        puVar1 = &stack0xfffffffc;
        if (*(float *)(*piVar2 + 0x40) <= 0.5) {
          FUN_00591e00((undefined1 *)&local_3c,"%s_detected_attack");
          local_14 = 0;
          ppppcVar4 = &local_3c;
          if (0xf < local_2c._4_4_) {
            ppppcVar4 = (char ****)local_3c;
          }
          ppppcVar6 = &local_3c;
          if (0xf < local_2c._4_4_) {
            ppppcVar6 = (char ****)local_3c;
          }
          FUN_00413ec0(&local_58,tolower_exref,(char *)ppppcVar6,
                       (char *)((int)ppppcVar4 + (int)local_2c),(undefined1 *)ppppcVar4);
          local_58 = &stack0xffffff78;
          FUN_004024e0(&stack0xffffff78,&local_3c);
          local_14._0_1_ = 1;
          puVar3 = FUN_00412df0();
          local_14 = (uint)local_14._1_3_ << 8;
          FUN_004a0ee0(puVar3,in_stack_ffffff78);
          if (*(char *)(param_1 + 0x234) != '\0') {
            ppppcVar4 = (char ****)FUN_00591e00((undefined1 *)local_54,"%s_detected_players_attack")
            ;
            if (&local_3c != ppppcVar4) {
              FUN_00401b20((int *)&local_3c);
              local_3c = *ppppcVar4;
              ppcStack_38 = (char **)ppppcVar4[1];
              ppcStack_34 = (char **)ppppcVar4[2];
              ppcStack_30 = (char **)ppppcVar4[3];
              local_2c = *(undefined8 *)(ppppcVar4 + 4);
              ppppcVar4[4] = (char ***)0x0;
              ppppcVar4[5] = (char ***)0xf;
              *(undefined1 *)ppppcVar4 = 0;
            }
            if (0xf < local_40) {
              pvVar5 = local_54[0];
              if ((0xfff < local_40 + 1) &&
                 (pvVar5 = *(void **)((int)local_54[0] + -4),
                 0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar5);
            }
            ppppcVar4 = &local_3c;
            if (0xf < local_2c._4_4_) {
              ppppcVar4 = (char ****)local_3c;
            }
            ppppcVar6 = &local_3c;
            if (0xf < local_2c._4_4_) {
              ppppcVar6 = (char ****)local_3c;
            }
            FUN_00413ec0(&local_58,tolower_exref,(char *)ppppcVar6,
                         (char *)((int)ppppcVar4 + (int)local_2c),(undefined1 *)ppppcVar4);
            local_58 = &stack0xffffff78;
            FUN_004024e0(&stack0xffffff78,&local_3c);
            local_14._0_1_ = 2;
            puVar3 = FUN_00412df0();
            local_14 = (uint)local_14._1_3_ << 8;
            FUN_004a0ee0(puVar3,in_stack_ffffff78);
          }
          puVar1 = puStack_20;
          if (0xf < local_2c._4_4_) {
            ppppcVar4 = (char ****)local_3c;
            if ((0xfff < local_2c._4_4_ + 1) &&
               (ppppcVar4 = (char ****)local_3c[-1],
               (char *)0x1f < (char *)((int)local_3c + (-4 - (int)ppppcVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppcVar4);
            puVar1 = puStack_20;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar2 = piVar2 + 1;
      puVar1 = &stack0xfffffffc;
    } while (uVar7 < uVar8);
  }
  puStack_20 = puVar1;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined1 __fastcall FUN_005124e0(int param_1)

{
  if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 2)) {
    return 1;
  }
  return 0;
}


undefined1 __fastcall FUN_00512500(int param_1)

{
  if ((*(int *)(param_1 + 0xd4) == 3) && (*(int *)(param_1 + 0xf8) == 3)) {
    return 1;
  }
  return 0;
}


void __fastcall FUN_00512520(void *param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  float in_XMM1_Da;
  float local_10;
  float local_c;
  
  fVar2 = *(float *)((int)param_1 + 0x108);
  if ((fVar2 == 0.0) && (*(int *)((int)param_1 + 0xf8) != 2)) {
    *(undefined4 *)((int)param_1 + 0xf8) = 2;
  }
  local_10 = in_XMM1_Da;
  if (*(int *)((int)param_1 + 0xf8) != 3) {
    FUN_00522570(*(int *)((int)param_1 + 0x40));
    fVar2 = *(float *)((int)param_1 + 0x108);
  }
  if ((0.0 < fVar2) &&
     (*(float *)((int)param_1 + 0x108) = fVar2 - local_10, fVar2 - local_10 <= 0.0)) {
    if (*(int *)((int)param_1 + 0xf8) == 1) {
      *(undefined4 *)((int)param_1 + 0xf8) = 2;
      if (*(char *)((int)param_1 + 0x234) != '\0') {
        FUN_00527550(*(int **)((int)param_1 + 0x224),1,"Fully docked with %s");
      }
      FUN_00511950(param_1,*(undefined4 **)((int)param_1 + 0x178),'\0','\0');
    }
    else if (*(int *)((int)param_1 + 0xf8) == 3) {
      *(undefined4 *)((int)param_1 + 0xf8) = 0;
      *(uint *)((int)param_1 + 0xd4) =
           (uint)(*(int *)((int)param_1 + 0x1c8) - *(int *)((int)param_1 + 0x1c4) >> 5 != 0);
      *(undefined4 *)((int)param_1 + 0x2c0) = 0;
      *(undefined4 *)((int)param_1 + 0x2c4) = 0;
      if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
        rand();
        FUN_00593000((Vec2 *)&local_10);
        *(double *)((int)param_1 + 0x28) = (double)local_10;
        dVar3 = (double)local_c;
        *(double *)((int)param_1 + 0x30) = dVar3;
        FUN_0050b2e0();
        local_10 = (float)dVar3;
        FUN_00518870((int)param_1);
        local_10 = local_10 + 180.0;
        if (360.0 <= local_10) {
          local_10 = local_10 - 360.0;
        }
        *(float *)((int)param_1 + 0x120) = local_10;
      }
      else {
        dVar3 = *(double *)(*(int *)((int)param_1 + 0x178) + 0x28);
        *(double *)((int)param_1 + 0x30) =
             (double)(float)*(double *)(*(int *)((int)param_1 + 0x178) + 0x30);
        *(double *)((int)param_1 + 0x28) = (double)(float)dVar3 + 5.0;
        FUN_00518870((int)param_1);
      }
      local_10 = -9999.0;
      local_c = -9999.0;
      *(undefined4 *)((int)param_1 + 300) = 0xc61c3c00;
      *(undefined4 *)((int)param_1 + 0x178) = 0;
      *(undefined4 *)((int)param_1 + 0x130) = 0xc61c3c00;
      if (*(char *)((int)param_1 + 0x234) != '\0') {
        iVar1 = FUN_004023e0();
        FUN_0052f580(iVar1);
      }
    }
    *(undefined4 *)((int)param_1 + 0x108) = 0;
    *(undefined4 *)((int)param_1 + 0x10c) = 0;
  }
  return;
}


void __fastcall FUN_005127b0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fStack_1c;
  
  fVar7 = 0.0;
  fVar4 = *(float *)(param_1 + 0xf4);
  if ((fVar4 == 0.0) && (*(int *)(param_1 + 0xe8) != 2)) {
    *(undefined4 *)(param_1 + 0xe8) = 3;
    FUN_0040ac60(3);
    *(float *)(param_1 + 0xf4) = fVar4;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
  if (fVar4 <= fVar7) {
    if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x10))(0), cVar3 != '\0')) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x62) = 0;
    }
  }
  else if ((((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x10))(0), cVar3 != '\0')) &&
           (*(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x62) = 1,
           *(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x60) != '\0')) &&
          (fVar4 = *(float *)(param_1 + 0xf4) - fStack_1c, *(float *)(param_1 + 0xf4) = fVar4,
          fVar4 <= 0.0)) {
    iVar2 = *(int *)(param_1 + 0xe8);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      *(undefined4 *)(param_1 + 0xe8) = 2;
    }
    else if (iVar2 == 5) {
      if (*(char *)(param_1 + 0x234) != '\0') {
        FUN_00527550(*(int **)(param_1 + 0x224),1,"Left orbit of %s");
      }
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(uint *)(param_1 + 0xd4) =
           (uint)(*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5 != 0);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2c4) = 0;
      *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x128);
      dVar5 = (double)*(float *)(param_1 + 0x128) * 0.017453292519943295;
      dVar6 = dVar5;
      libm_sse2_sin_precise();
      libm_sse2_cos_precise();
      *(float *)(param_1 + 0x118) = (float)(dVar6 * 1.2000000476837158);
      *(float *)(param_1 + 0x11c) = (float)(dVar5 * 1.2000000476837158);
      *(double *)(param_1 + 0x28) =
           (double)*(float *)(param_1 + 0x118) * 0.25 + *(double *)(param_1 + 0x28);
      *(double *)(param_1 + 0x30) =
           (double)*(float *)(param_1 + 0x11c) * 0.25 + *(double *)(param_1 + 0x30);
      piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
      if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x10))(0), cVar3 != '\0')) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x62) = 0;
        *(undefined4 *)(param_1 + 0xf4) = 0;
        return;
      }
    }
    else if (iVar2 == 4) {
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xe8) = 2;
      if (*(char *)(param_1 + 0x234) != '\0') {
        FUN_00527550(*(int **)(param_1 + 0x224),1,"Moved into %s orbit of %s");
        *(undefined4 *)(param_1 + 0xf4) = 0;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0xf4) = 0;
    return;
  }
  return;
}


void __fastcall FUN_00512a60(int param_1)

{
  *(undefined4 *)(param_1 + 0x1b8) = 0xc61c3c00;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1bc) = 0xc61c3c00;
  return;
}


void __thiscall FUN_00512ae0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *this_00;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1b29;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(float *)((int)this + 0x54) == -1.0) {
    *(undefined4 *)((int)this + 300) = 0xc61c3c00;
    *(undefined4 *)((int)this + 0x130) = 0xc61c3c00;
    *(undefined4 *)((int)this + 0x1b8) = 0xc61c3c00;
    *(undefined4 *)((int)this + 0x1bc) = 0xc61c3c00;
    *(undefined4 *)((int)this + 0x48) = param_2;
    *(undefined4 *)((int)this + 0x4c) = param_3;
    *(undefined4 *)((int)this + 0x1a4) = 0;
    *(undefined4 *)((int)this + 0x19c) = 0;
    *(undefined4 *)((int)this + 0x194) = 0;
    *(undefined4 *)((int)this + 0x1ac) = 0;
    *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
    *(undefined4 *)((int)this + 0x198) = 0xffffffff;
    *(undefined4 *)((int)this + 400) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1a8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x50) = param_1;
    *(undefined4 *)((int)this + 0x54) = 0x40600000;
    iVar1 = rand();
    iVar1 = iVar1 % 3 + 1;
    iVar2 = 0xb;
    this_00 = (void *)FUN_00402f60();
    FUN_00557fb0(this_00,(int)this,iVar2,iVar1);
    FUN_00591070(&DAT_005cdc70,"%s: beginning jump, time remaining %f");
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00512c30(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1b62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = FUN_00412b00();
  *(undefined1 *)puVar2 = 1;
  FUN_00591070(&DAT_005cdc70,"Removing all ships on next NPCShipManager cycle.");
  FUN_0050cc10((int)this);
  FUN_0050c090(this,param_1);
  FUN_005212e0(*(int *)((int)this + 0x24));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  if (*(undefined4 **)((int)this + 0x178) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x178))(this);
    *(undefined4 *)((int)this + 0x178) = 0;
  }
  if (*(char *)((int)this + 0x234) != '\0') {
    *(undefined4 *)(DAT_0065b5cc + 0xd8) = *(undefined4 *)((int)this + 0x24);
    if (DAT_0065c280 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_005adb0f(0x98);
      local_8 = 0;
      DAT_0065c280 = FUN_0058f5d0(puVar2);
      local_8 = 0xffffffff;
    }
    FUN_0058fc90((int)DAT_0065c280);
    piVar3 = FUN_004122d0();
    local_8 = 1;
    iVar1 = *piVar3;
    FUN_004132d0(*(int **)(iVar1 + 4));
    *(int *)(*piVar3 + 4) = iVar1;
    *(int *)*piVar3 = iVar1;
    *(int *)(*piVar3 + 8) = iVar1;
    piVar3[1] = 0;
    FUN_004028b0((int *)piVar3[2],(int *)piVar3[3]);
    piVar3[3] = piVar3[2];
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00512d80(int param_1)

{
  float fVar1;
  void *pvVar2;
  byte *in_stack_ffffffbc;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1b88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(float *)(param_1 + 0x58) != -1.0) {
    FUN_00591070(&DAT_005cdc70,"Discharging jump charge.");
    fVar1 = *(float *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x5c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x62) = 0;
    }
    iVar5 = -1;
    iVar4 = 0x1d;
    iVar3 = param_1;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar3,iVar4,iVar5);
    FUN_00527550(*(int **)(param_1 + 0x224),4,"WARNING: Jump Drive discharged into space");
    if (param_1 == *(int *)(DAT_0065b5cc + 0xd0)) {
      FUN_004024e0(&stack0xffffffbc,(undefined4 *)(param_1 + 0x238));
      local_8 = 0;
      pvVar2 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar2,in_stack_ffffffbc);
    }
    rand();
    if (0x45 < (int)(100.0 - fVar1)) {
      FUN_005229d0(*(void **)(param_1 + 0x40),0x3c);
    }
    FUN_00591070(&DAT_005cdc70,"EMP blast from discharging jump drive: %d units");
    FUN_0040f270(1,*(int *)(param_1 + 0x24),param_1,param_1,(float)*(double *)(param_1 + 0x28),
                 (float)*(double *)(param_1 + 0x30));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00512f20(void *param_1)

{
  Layer *pLVar1;
  Color3B *pCVar2;
  Layer *pLVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *this;
  undefined4 extraout_ECX;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  float in_XMM1_Da;
  double dVar13;
  undefined4 uVar14;
  byte *pbVar15;
  byte *in_stack_ffffff94;
  int iVar16;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  float local_28;
  Layer *local_24;
  float local_20;
  Layer *local_1c;
  float local_18;
  Layer *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  pvVar5 = ExceptionList;
  puStack_c = &LAB_005c1c15;
  local_10 = ExceptionList;
  if (*(float *)((int)param_1 + 0x54) == -1.0) {
    return;
  }
  fVar11 = *(float *)((int)param_1 + 0x54) - in_XMM1_Da;
  ExceptionList = &local_10;
  *(float *)((int)param_1 + 0x54) = fVar11;
  if (0.0 < fVar11) {
    ExceptionList = pvVar5;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x54) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x60) = 0xffffffff;
  local_28 = 0.0;
  local_24 = (Layer *)0x0;
  local_8 = 0;
  uStack_7 = 0;
  iVar16 = *(int *)((int)param_1 + 0x178);
  if (iVar16 != 0) {
    bVar10 = false;
    if (*(int *)(iVar16 + 0x254) != 0) {
      bVar10 = *(int *)(*(int *)(iVar16 + 0x254) + 0x158) == 2;
    }
    if (bVar10) {
      local_1c = (Layer *)FUN_004a7280(DAT_0065b5cc,*(int *)(iVar16 + 0x38c));
      uVar9 = 0;
      piVar6 = *(int **)((int)local_1c + 0xcc);
      uVar8 = *(int *)((int)local_1c + 0xd0) - (int)piVar6 >> 2;
      if (uVar8 != 0) {
        do {
          iVar16 = *piVar6;
          if ((*(int *)(*(int *)(iVar16 + 0x254) + 0x158) == 2) &&
             (*(int *)(iVar16 + 0x38c) == *(int *)((int)param_1 + 0x20))) {
            local_28 = (float)*(double *)(iVar16 + 0x28);
            local_24 = (Layer *)(float)*(double *)(iVar16 + 0x30);
            goto LAB_0051303c;
          }
          uVar9 = uVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar9 < uVar8);
      }
      FUN_00591070(&DAT_005cdc70,"WARNING: tried to travel to system \'%s\' but no jumpgate found");
      local_24 = (Layer *)0x0;
      local_28 = 0.0;
LAB_0051303c:
      in_stack_ffffff94 = (byte *)0x513075;
      local_20 = local_28;
      local_1c = local_24;
      FUN_00591070(&DAT_005cdc70,"Arriving at position %f, %f thanks to jumpgate");
      goto LAB_0051328e;
    }
  }
  if ((*(int *)((int)DAT_0065b5cc + 0xcc) == 0) ||
     (*(int *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
    local_1c = (Layer *)(1.0 - *(float *)((int)param_1 + 0x5c) / 100.0);
    iVar16 = rand();
    local_38 = *(undefined4 *)((int)param_1 + 0x48);
    local_34 = *(undefined4 *)((int)param_1 + 0x4c);
    local_30 = (double)(int)((float)local_1c * 120.0);
    dVar13 = (double)(iVar16 % 0x168) * 0.017453292519943295;
    dVar12 = dVar13;
    libm_sse2_sin_precise();
    local_14 = (Layer *)(float)(dVar12 * local_30);
    libm_sse2_cos_precise();
    local_30 = (double)CONCAT44((float)(dVar13 * local_30),local_14);
    local_8 = 2;
    cocos2d::Vec2::operator+((Vec2 *)&local_38,(Vec2 *)&local_18);
    local_8 = 0;
    local_28 = local_18;
    local_24 = local_14;
    fVar11 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)((int)param_1 + 0x48));
    local_14 = (Layer *)(0x5f3759df - ((uint)fVar11 >> 1));
    in_stack_ffffff94 = SUB84((double)*(float *)((int)param_1 + 0x4c),0);
    FUN_00591070(&DAT_005cdc70,"%s: Misjump offset: %f, dist = %.2f, %f,%f -> %f, %f");
    if (*(char *)((int)param_1 + 0x234) != '\0') {
      local_1c = (Layer *)&stack0xffffff94;
      in_stack_ffffff94 = (byte *)((uint)in_stack_ffffff94 & 0xffffff00);
      FUN_00402690(&stack0xffffff94,"jumpdrive_uses",0xe);
      local_8 = 3;
      FUN_00412770();
      local_8 = 0;
      FUN_0051e750(extraout_ECX,in_stack_ffffff94);
    }
  }
  else {
    local_28 = *(float *)((int)param_1 + 0x48);
    local_24 = *(Layer **)((int)param_1 + 0x4c);
  }
LAB_0051328e:
  *(undefined1 *)(DAT_0065b444 + 0x11e) = 1;
  FUN_00512c30(param_1,*(undefined1 **)((int)param_1 + 0x50));
  *(undefined4 *)((int)param_1 + 0x128) = 0xbf800000;
  *(double *)((int)param_1 + 0x28) = (double)local_28;
  *(double *)((int)param_1 + 0x30) = (double)(float)local_24;
  FUN_00522530(*(int *)((int)param_1 + 0x40));
  FUN_005229d0(*(void **)((int)param_1 + 0x40),100);
  if (*(char *)((int)param_1 + 0x234) != '\0') {
    puVar4 = FUN_004125d0();
    FUN_00430710((int)puVar4);
  }
  *(undefined4 *)((int)param_1 + 0x120) = 0x42340000;
  FUN_00518870((int)param_1);
  *(undefined4 *)((int)param_1 + 0x58) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x5c) = 0xbf800000;
  puVar4 = FUN_004125d0();
  FUN_004310c0(puVar4);
  pvVar5 = DAT_0065b5cc;
  if (param_1 == *(void **)((int)DAT_0065b5cc + 0xd0)) {
    local_20 = (float)*(double *)((int)param_1 + 0x28);
    DAT_0065507d = 1;
    DAT_0065bf28 = (float)*(double *)((int)param_1 + 0x30);
    DAT_0065bf24 = local_20;
    *(undefined4 *)((int)param_1 + 0x1d0) = 0xffffffff;
    if (DAT_00655098 == 0) {
      DAT_00655098 = 1;
    }
    if ((*(int *)((int)pvVar5 + 0xcc) == 0) || (*(int *)(*(int *)((int)pvVar5 + 0xcc) + 0x70) != 1))
    {
      local_1c = (Layer *)&stack0xffffff94;
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)param_1 + 0x238));
      local_8 = 9;
      pvVar5 = (void *)FUN_004023e0();
      local_8 = 0;
      FUN_00531140(pvVar5,in_stack_ffffff94);
    }
    else {
      local_1c = (Layer *)&stack0xffffff94;
      FUN_004024e0(&stack0xffffff94,(undefined4 *)((int)param_1 + 0x238));
      local_8 = 4;
      pvVar5 = (void *)FUN_004023e0();
      local_8 = 0;
      uVar14 = 0x5133db;
      FUN_00531140(pvVar5,in_stack_ffffff94);
      iVar16 = *(int *)((int)param_1 + 0x40);
      if (*(int *)(iVar16 + 0x24) != 0) {
        iVar7 = 0;
        do {
          iVar16 = *(int *)((int)param_1 + 0x40);
          puVar4 = *(undefined4 **)(*(int *)(*(int *)(iVar16 + 0x24) + 0xc) + 4 + iVar7);
          if ((puVar4 != (undefined4 *)0x0) && (*(int *)(puVar4[1] + 0x80) == 6)) {
            *puVar4 = 0x40000000;
            iVar16 = *(int *)((int)param_1 + 0x40);
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 < 0x50);
      }
      if (*(int *)(iVar16 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(iVar16 + 0x18) + 0x34) = 1;
        *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x18) + 0x62) = 1;
      }
      local_1c = (Layer *)&stack0xffffff90;
      pbVar15 = (byte *)(CONCAT35((int3)((uint)uVar14 >> 8),0xf) >> 0x20);
      FUN_00402690(&stack0xffffff90,"tutorial_jumped",0xf);
      local_8 = 5;
      puVar4 = FUN_00412df0();
      local_8 = 0;
      FUN_004a0ee0(puVar4,pbVar15);
      pbVar15 = (byte *)(CONCAT35((int3)((uint)pbVar15 >> 8),0x14) >> 0x20);
      local_1c = (Layer *)&stack0xffffff90;
      FUN_00402690(&stack0xffffff90,"only_plot_to_beacons",0x14);
      local_8 = 6;
      puVar4 = FUN_00412df0();
      local_8 = 0;
      FUN_004a0ee0(puVar4,pbVar15);
      pbVar15 = (byte *)(CONCAT35((int3)((uint)pbVar15 >> 8),0x14) >> 0x20);
      local_1c = (Layer *)&stack0xffffff90;
      FUN_00402690(&stack0xffffff90,"only_plot_to_op-lago",0x14);
      local_8 = 7;
      puVar4 = FUN_00412df0();
      local_8 = 0;
      FUN_004a0ee0(puVar4,pbVar15);
      pbVar15 = (byte *)(CONCAT35((int3)((uint)pbVar15 >> 8),8) >> 0x20);
      local_1c = (Layer *)&stack0xffffff90;
      FUN_00402690(&stack0xffffff90,"angle_50",8);
      local_8 = 8;
      puVar4 = FUN_00412df0();
      local_8 = 0;
      FUN_004a0ee0(puVar4,pbVar15);
    }
    iVar7 = -1;
    iVar16 = 0xc;
    pvVar5 = param_1;
    this = (void *)FUN_00402f60();
    FUN_00557fb0(this,(int)pvVar5,iVar16,iVar7);
    if (DAT_0065c25c == (Layer *)0x0) {
      local_1c = (Layer *)FUN_005adb0f(0x418);
      local_8 = 10;
      DAT_0065c25c = FUN_0052b7a0(local_1c);
      local_8 = 0;
    }
    pLVar3 = DAT_0065c25c;
    pLVar1 = DAT_0065c25c + 0x2d4;
    pCVar2 = (Color3B *)(DAT_0065c25c + 0x3cc);
    *(undefined2 *)pCVar2 = *(undefined2 *)(*(int *)pLVar1 + 0x8c);
    pLVar3[0x3ce] = *(Layer *)(*(int *)pLVar1 + 0x8e);
    bVar10 = cocos2d::Color3B::operator==((Color3B *)(pLVar3 + 0x3cf),pCVar2);
    if (!bVar10) {
      *(undefined4 *)(pLVar3 + 0x3c4) = 0;
      *(undefined4 *)(pLVar3 + 0x3c8) = 0x40000000;
      pLVar3[0x3c0] = (Layer)0x1;
    }
    FUN_0051f850(*(void **)((int)param_1 + 0x24));
    FUN_00408110();
  }
  *(undefined4 *)((int)param_1 + 0x50) = 0xffffffff;
  if (*(char *)((int)param_1 + 0x234) != '\0') {
    iVar16 = FUN_004023e0();
    FUN_0052f580(iVar16);
    *(undefined1 *)((int)param_1 + 0x345) = 1;
  }
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  *(undefined4 *)((int)param_1 + 0x2c0) = 0;
  *(undefined4 *)((int)param_1 + 0x2c4) = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00513650(void *this,float param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  undefined1 *puVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  uint in_stack_ffffff6c;
  byte *in_stack_ffffff78;
  uint3 uVar25;
  byte *pbVar24;
  byte *in_stack_ffffff7c;
  float local_4c;
  void *local_48;
  float local_44;
  char *local_40;
  float local_3c;
  float local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1d17;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar17 = false;
  if (*(int *)((int)this + 0x254) != 0) {
    bVar17 = *(int *)(*(int *)((int)this + 0x254) + 0x158) == 0;
  }
  local_30 = this;
  if ((bVar17) &&
     (pcVar6 = FUN_0051f120(*(void **)((int)this + 0x24),(float)*(double *)((int)this + 0x28),
                            (float)*(double *)((int)this + 0x30),'\x01'), pcVar6 != (char *)0x0)) {
    if (*(char *)((int)this + 0x234) == '\0') {
LAB_0051374b:
      pbVar9 = FUN_0047d6a0(pcVar6 + 0xd8,(byte *)((int)this + 0x238));
      pbVar24 = pbVar9;
      if (0xf < *(uint *)(pbVar9 + 0x14)) {
        pbVar24 = *(byte **)pbVar9;
      }
      uVar7 = FUN_004031f0(pbVar24,*(uint *)(pbVar9 + 0x10),(byte *)&PTR_005ce008,0);
      if ((char)uVar7 == '\0') {
        local_34 = &stack0xffffff7c;
        pbVar24 = FUN_0047d6a0(pcVar6 + 0xd8,(byte *)((int)this + 0x238));
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)pbVar24);
        local_8 = 2;
        puVar8 = FUN_00412df0();
        local_8 = 0xffffffff;
        in_stack_ffffff78 = (byte *)0x5137b9;
        bVar4 = FUN_004a1150(puVar8,in_stack_ffffff7c);
        if (bVar4 == 0) {
          local_34 = &stack0xffffff78;
          pbVar24 = FUN_0047d6a0(pcVar6 + 0xd8,(byte *)((int)this + 0x238));
          FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar24);
          local_8 = 3;
          goto LAB_005137e8;
        }
      }
    }
    else {
      pbVar24 = (byte *)(pcVar6 + 0xc0);
      pbVar9 = pbVar24;
      if (0xf < *(uint *)(pcVar6 + 0xd4)) {
        pbVar9 = *(byte **)pbVar24;
      }
      uVar7 = FUN_004031f0(pbVar9,*(uint *)(pcVar6 + 0xd0),(byte *)&PTR_005ce008,0);
      if ((char)uVar7 != '\0') goto LAB_0051374b;
      local_34 = &stack0xffffff7c;
      FUN_004024e0(&stack0xffffff7c,(undefined4 *)pbVar24);
      local_8 = 0;
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      in_stack_ffffff78 = (byte *)0x51372b;
      bVar4 = FUN_004a1150(puVar8,in_stack_ffffff7c);
      if (bVar4 != 0) goto LAB_0051374b;
      local_34 = &stack0xffffff78;
      FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar24);
      local_8 = 1;
LAB_005137e8:
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar8,in_stack_ffffff78);
    }
    local_40 = pcVar6 + 0xe0;
    pbVar24 = (byte *)((int)this + 0x238);
    pbVar10 = FUN_0047d6a0(local_40,pbVar24);
    pbVar9 = pbVar10;
    if (0xf < *(uint *)(pbVar10 + 0x14)) {
      pbVar9 = *(byte **)pbVar10;
    }
    uVar7 = FUN_004031f0(pbVar9,*(uint *)(pbVar10 + 0x10),(byte *)&PTR_005ce008,0);
    if ((char)uVar7 == '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"zoneentered_",0xc);
      local_8 = 4;
      pcVar11 = pcVar6 + 4;
      if (0xf < *(uint *)(pcVar6 + 0x18)) {
        pcVar11 = *(char **)(pcVar6 + 4);
      }
      FUN_00403640(local_2c,pcVar11,*(uint *)(pcVar6 + 0x14));
      FUN_00403640(local_2c,&DAT_0061bc80,1);
      pbVar9 = pbVar24;
      if (0xf < *(uint *)((int)this + 0x24c)) {
        pbVar9 = *(byte **)pbVar24;
      }
      FUN_00403640(local_2c,pbVar9,*(uint *)((int)this + 0x248));
      local_34 = &stack0xffffff7c;
      FUN_004024e0(&stack0xffffff7c,local_2c);
      local_8._0_1_ = 5;
      puVar8 = FUN_00412df0();
      local_8._0_1_ = 4;
      in_stack_ffffff78 = (byte *)0x5138bf;
      bVar4 = FUN_004a1150(puVar8,in_stack_ffffff7c);
      if (bVar4 == 0) {
        FUN_0047d6a0(local_40,pbVar24);
        FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),4,&DAT_005ce00c);
        local_34 = &stack0xffffff78;
        FUN_004024e0(&stack0xffffff78,local_2c);
        local_8._0_1_ = 6;
        puVar8 = FUN_00412df0();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_004a0ee0(puVar8,in_stack_ffffff78);
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar14 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar14 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar14);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
  }
  if (*(char *)((int)this + 0xd0) == '\0') goto LAB_005148b2;
  if ((0.0 < *(float *)((int)this + 0x31c)) &&
     (fVar20 = *(float *)((int)this + 0x31c) - param_1, *(float *)((int)this + 0x31c) = fVar20,
     fVar20 <= 0.0)) {
    *(undefined4 *)((int)this + 0x31c) = 0xbf800000;
    FUN_00591070("DETAIL","Preparing to be towed...");
    if (*(char *)((int)this + 0x234) != '\0') {
      iVar12 = FUN_004023e0();
      *(undefined4 *)(iVar12 + 0x2a4) = 1;
      iVar12 = FUN_004023e0();
      *(undefined2 *)(iVar12 + 0x2a0) = 0x101;
      *(undefined4 *)(iVar12 + 0x29c) = 1;
      *(undefined4 *)(iVar12 + 0x2ac) = 0x3f19999a;
      *(undefined4 *)(iVar12 + 0x2a8) = 0x3f19999a;
    }
  }
  if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)
      ) && (*(char *)((int)this + 0x234) != '\0')) {
    uVar25 = (uint3)((uint)in_stack_ffffff78 >> 8);
    if (*(char *)((int)this + 0x321) == '\0') {
      if ((*(int *)((int)this + 0xd4) == 1) &&
         (*(int *)((int)this + 0x1c8) - *(int *)((int)this + 0x1c4) >> 5 != 0)) {
        local_34 = &stack0xffffff78;
        *(undefined1 *)((int)this + 0x321) = 1;
        in_stack_ffffff78 = (byte *)((uint)uVar25 << 8);
        in_stack_ffffff6c = 0x513acc;
        FUN_00402690(&stack0xffffff78,"on_course",9);
        local_8 = 8;
        goto LAB_00513ad3;
      }
    }
    else if ((*(int *)((int)this + 0xd4) != 1) ||
            ((uint)(*(int *)((int)this + 0x1c8) - *(int *)((int)this + 0x1c4)) < 0x20)) {
      local_34 = &stack0xffffff78;
      *(undefined1 *)((int)this + 0x321) = 0;
      in_stack_ffffff78 = (byte *)((uint)uVar25 << 8);
      in_stack_ffffff6c = 0x513a79;
      FUN_00402690(&stack0xffffff78,"on_course",9);
      local_8 = 7;
LAB_00513ad3:
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar8,in_stack_ffffff78);
    }
    piVar13 = *(int **)(*(int *)((int)this + 0x40) + 0x20);
    if (*(char *)((int)this + 0x322) == '\0') {
      if ((((piVar13 != (int *)0x0) && (cVar5 = (**(code **)(*piVar13 + 0x10))(), cVar5 != '\0')) &&
          (iVar12 = *(int *)(*(int *)((int)this + 0x40) + 0x20), *(char *)(iVar12 + 0x62) != '\0'))
         && (*(int *)(iVar12 + 0x38 + *(int *)((int)this + 0x1b4) * 4) != 0)) {
        local_34 = &stack0xffffff78;
        in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
        in_stack_ffffff6c = 0x513bd1;
        FUN_00402690(&stack0xffffff78,"spinning_up_weapon",0x12);
        local_8 = 10;
        puVar8 = FUN_00412df0();
        local_8 = 0xffffffff;
        FUN_004a0ee0(puVar8,in_stack_ffffff78);
        if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
           (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
          in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
          in_stack_ffffff6c = 0x513c27;
          local_34 = &stack0xffffff78;
          FUN_00402690(&stack0xffffff78,"has_been_spinning_up_weapon",0x1b);
          local_8 = 0xb;
          puVar8 = FUN_00412df0();
          local_8 = 0xffffffff;
          FUN_004a0ee0(puVar8,in_stack_ffffff78);
        }
        *(undefined1 *)((int)this + 0x322) = 1;
      }
    }
    else if (((piVar13 == (int *)0x0) || (cVar5 = (**(code **)(*piVar13 + 0x10))(), cVar5 == '\0'))
            || ((iVar12 = *(int *)(*(int *)((int)this + 0x40) + 0x20),
                *(char *)(iVar12 + 0x62) == '\0' ||
                (*(int *)(iVar12 + 0x38 + *(int *)((int)this + 0x1b4) * 4) == 0)))) {
      local_34 = &stack0xffffff78;
      in_stack_ffffff78 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
      in_stack_ffffff6c = 0x513b4a;
      FUN_00402690(&stack0xffffff78,"spinning_up_weapon",0x12);
      local_8 = 9;
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar8,in_stack_ffffff78);
      *(undefined1 *)((int)this + 0x322) = 0;
    }
    if (*(char *)((int)this + 0x323) == '\0') {
      local_40 = (char *)cocos2d::Vec2::getLength((Vec2 *)((int)this + 0x118));
      if ((float)local_40 == 0.0) {
        local_34 = &stack0xffffff78;
        pbVar24 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
        in_stack_ffffff6c = 0x513cfc;
        FUN_00402690(&stack0xffffff78,"is_moving",9);
        local_8 = 0xd;
        puVar8 = FUN_00412df0();
        local_8 = 0xffffffff;
        FUN_004a0ee0(puVar8,pbVar24);
        *(undefined1 *)((int)this + 0x323) = 1;
      }
    }
    else {
      local_40 = (char *)cocos2d::Vec2::getLength((Vec2 *)((int)this + 0x118));
      if (0.0 < (float)local_40) {
        local_34 = &stack0xffffff78;
        pbVar24 = (byte *)((uint)in_stack_ffffff78 & 0xffffff00);
        in_stack_ffffff6c = 0x513c98;
        FUN_00402690(&stack0xffffff78,"is_moving",9);
        local_8 = 0xc;
        puVar8 = FUN_00412df0();
        local_8 = 0xffffffff;
        FUN_004a0ee0(puVar8,pbVar24);
        *(undefined1 *)((int)this + 0x323) = 0;
      }
    }
  }
  FUN_0040d800((int)this);
  FUN_00515c60(this);
  (**(code **)(*(int *)this + 0x18))();
  FUN_005148d0(this);
  FUN_00515a30((int)this);
  if ((*(char *)(DAT_0065b444 + 0x72) != '\0') && (*(char *)((int)this + 0x234) != '\0')) {
    fVar20 = *(float *)((int)this + 0x350) - param_1;
    *(float *)((int)this + 0x350) = fVar20;
    if (fVar20 <= 0.0) {
      *(undefined4 *)((int)this + 0x350) = 0x40000000;
      if ((*(float *)((int)this + 0x354) == -9999.0) && (*(float *)((int)this + 0x358) == -9999.0))
      {
        dVar22 = *(double *)((int)this + 0x28);
        dVar23 = *(double *)((int)this + 0x30);
      }
      else {
        dVar22 = *(double *)((int)this + 0x28);
        dVar23 = *(double *)((int)this + 0x30);
        if ((*(float *)((int)this + 0x354) == (float)dVar22) &&
           (*(float *)((int)this + 0x358) == (float)dVar23)) goto LAB_00513f4f;
      }
      local_38 = (float)dVar22;
      local_34 = (undefined1 *)(float)dVar23;
      *(float *)((int)this + 0x354) = local_38;
      *(undefined1 **)((int)this + 0x358) = local_34;
      local_44 = (float)*(double *)((int)this + 0x28);
      local_3c = (float)*(double *)((int)this + 0x30);
      local_8 = 0xe;
      piVar13 = FUN_00420f40((void *)((int)this + 0x348),(int *)((int)this + 0x20));
      local_48 = (void *)*piVar13;
      local_8 = 0xf;
      iVar16 = (int)((local_44 + 600.0) / 150.0);
      iVar12 = (int)((local_3c + 600.0) / 150.0);
      uVar7 = iVar12 - 1;
      local_40 = (char *)(iVar12 + 1);
      if ((int)uVar7 <= (int)local_40) {
        puVar19 = (undefined1 *)(iVar16 - 1);
        puVar2 = puVar19;
        puVar3 = puVar19;
        pvVar14 = local_48;
        pcVar6 = local_40;
        fVar20 = local_44;
        fVar21 = local_3c;
        local_34 = puVar19;
        this = local_30;
        do {
          for (; local_30 = this, (int)puVar2 <= iVar16 + 1; puVar2 = puVar2 + 1) {
            if ((uVar7 < 8) && (puVar3 < (undefined1 *)0x8)) {
              in_stack_ffffff7c = (byte *)0x513f21;
              FUN_0051ec30(pvVar14,(int)puVar2,uVar7,fVar20,fVar21,96.0);
              pvVar14 = local_48;
              fVar20 = local_44;
              fVar21 = local_3c;
            }
            puVar3 = puVar3 + 1;
            puVar19 = local_34;
            pcVar6 = local_40;
            this = local_30;
          }
          uVar7 = uVar7 + 1;
          puVar2 = puVar19;
          puVar3 = puVar19;
        } while ((int)uVar7 <= (int)pcVar6);
      }
      local_8 = 0xffffffff;
    }
LAB_00513f4f:
    iVar12 = *(int *)((int)this + 0x24);
    uVar7 = 0;
    if (*(int *)(iVar12 + 0xa0) - *(int *)(iVar12 + 0x9c) >> 2 != 0) {
      do {
        iVar16 = uVar7 * 4;
        iVar12 = *(int *)(iVar16 + *(int *)(iVar12 + 0x9c));
        if ((*(char *)(iVar12 + 0x40) != '\0') && (0.0 < *(float *)(iVar12 + 0xe0))) {
          local_38 = (float)*(double *)((int)this + 0x28);
          local_34 = (undefined1 *)(float)*(double *)((int)this + 0x30);
          local_4c = (float)*(double *)(iVar12 + 0x28);
          local_48 = (void *)(float)*(double *)(iVar12 + 0x30);
          local_8 = 0x11;
          local_30 = (undefined1 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_4c,(Vec2 *)&local_38)
          ;
          local_3c = (float)(0x5f3759df - ((uint)local_30 >> 1));
          iVar12 = *(int *)(iVar16 + *(int *)(*(int *)((int)this + 0x24) + 0x9c));
          local_8 = 0xffffffff;
          if ((1.5 - (float)local_30 * 0.5 * local_3c * local_3c) * local_3c * (float)local_30 <=
              *(float *)(iVar12 + 0xe0)) {
            local_30 = &stack0xffffff7c;
            FUN_004024e0(&stack0xffffff7c,(undefined4 *)(iVar12 + 0x98));
            local_8 = 0x12;
            puVar8 = FUN_00412df0();
            local_8 = 0xffffffff;
            pbVar24 = (byte *)0x514086;
            bVar4 = FUN_004a1150(puVar8,in_stack_ffffff7c);
            if (bVar4 == 0) {
              FUN_00591070(&DAT_005cdc70,
                           "Proximity to invisible flag beacon hit - setting flag \'%s\'");
              local_30 = &stack0xffffff78;
              FUN_004024e0(&stack0xffffff78,
                           (undefined4 *)
                           (*(int *)(*(int *)(*(int *)((int)this + 0x24) + 0x9c) + iVar16) + 0x98));
              local_8 = 0x13;
              puVar8 = FUN_00412df0();
              local_8 = 0xffffffff;
              FUN_004a0ee0(puVar8,pbVar24);
            }
          }
        }
        iVar12 = *(int *)((int)this + 0x24);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(*(int *)(iVar12 + 0xa0) - *(int *)(iVar12 + 0x9c) >> 2));
    }
  }
  if ((0.0 <= *(float *)((int)this + 0x100)) &&
     (fVar20 = *(float *)((int)this + 0x100) + param_1, *(float *)((int)this + 0x100) = fVar20,
     100.0 < fVar20)) {
    *(undefined4 *)((int)this + 0x100) = 0xbf800000;
  }
  if (((0.0 < *(float *)((int)this + 0x58)) &&
      (*(int **)(*(int *)((int)this + 0x40) + 0x14) != (int *)0x0)) &&
     (cVar5 = (**(code **)(**(int **)(*(int *)((int)this + 0x40) + 0x14) + 0x10))(), cVar5 != '\0'))
  {
    iVar12 = *(int *)(*(int *)((int)this + 0x40) + 0x14);
    if (*(char *)(iVar12 + 0x62) == '\0') {
      *(undefined1 *)(iVar12 + 0x62) = 1;
    }
    else if (*(char *)(iVar12 + 0x60) != '\0') {
      if (this == *(undefined1 **)(DAT_0065b5cc + 0xd0)) {
        local_30 = &stack0xffffff7c;
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)this + 0x238));
        local_8 = 0x14;
        pvVar14 = (void *)FUN_004023e0();
        local_8 = 0xffffffff;
        FUN_00531140(pvVar14,in_stack_ffffff7c);
      }
      fVar20 = *(float *)((int)this + 0x58);
      *(float *)((int)this + 0x58) = fVar20 - param_1;
      if (fVar20 - param_1 < 0.0) {
        *(undefined1 *)(*(int *)(*(int *)((int)this + 0x40) + 0x14) + 0x62) = 0;
        *(undefined4 *)((int)this + 0x58) = 0;
        FUN_00591070(&DAT_005cdc70,"%s: Jump drive spun up.");
      }
    }
  }
  if (((0.0 <= *(float *)((int)this + 0x5c)) && (*(float *)((int)this + 0x5c) < 100.0)) &&
     (*(float *)((int)this + 0x54) == -1.0)) {
    if ((*(int **)(*(int *)((int)this + 0x40) + 0x14) == (int *)0x0) ||
       (cVar5 = (**(code **)(**(int **)(*(int *)((int)this + 0x40) + 0x14) + 0x10))(), cVar5 == '\0'
       )) {
      *(undefined4 *)((int)this + 0x5c) = 0xbf800000;
    }
    else {
      fVar20 = (100.0 / *(float *)(*(int *)(*(int *)(*(int *)((int)this + 0x40) + 0x14) + 8) + 0x10c
                                  )) * param_1 + *(float *)((int)this + 0x5c);
      *(float *)((int)this + 0x5c) = fVar20;
      if (100.0 <= fVar20) {
        *(undefined4 *)((int)this + 0x5c) = 0x42c80000;
        FUN_00591070(&DAT_005cdc70,"%s: Jump solution calculated.");
      }
    }
  }
  FUN_00512f20(this);
  iVar12 = *(int *)((int)this + 0xd4);
  if (iVar12 == 1) {
    if ((((*(float *)((int)this + 0x128) == -1.0) ||
         (*(float *)((int)this + 0x128) == *(float *)((int)this + 0x120))) ||
        (*(int **)(*(int *)((int)this + 0x40) + 0x18) == (int *)0x0)) ||
       (cVar5 = (**(code **)(**(int **)(*(int *)((int)this + 0x40) + 0x18) + 0x10))(), cVar5 == '\0'
       )) {
      if (*(int *)(*(int *)((int)this + 0x40) + 0x18) != 0) {
        *(undefined1 *)(*(int *)(*(int *)((int)this + 0x40) + 0x18) + 0x62) = 0;
      }
      if (*(int *)((int)this + 0x1c8) - *(int *)((int)this + 0x1c4) >> 5 == 0) {
        *(undefined4 *)((int)this + 0xd4) = 0;
        *(undefined4 *)((int)this + 0x2c0) = 0;
        *(undefined4 *)((int)this + 0x2c4) = 0;
      }
    }
    else {
      fVar20 = *(float *)((int)this + 0x120);
      fVar21 = *(float *)((int)this + 0x124);
      if (fVar20 != fVar21) {
        iVar12 = *(int *)(*(int *)(*(int *)((int)this + 0x40) + 0x18) + 0x34);
        if (iVar12 == 2) {
          fVar18 = *(float *)((int)this + 0x128);
          if (fVar20 <= fVar21) {
            if (fVar18 <= fVar21) {
              bVar17 = fVar18 < fVar20;
LAB_00514431:
              if (!bVar17 && fVar18 != fVar20) goto LAB_00514437;
            }
          }
          else if ((fVar18 < fVar21) || (fVar20 <= fVar18)) {
LAB_00514437:
            *(float *)((int)this + 0x120) = fVar18;
            iVar12 = *(int *)(*(int *)((int)this + 0x40) + 0x18);
            if (iVar12 != 0) {
              *(undefined1 *)(iVar12 + 0x62) = 0;
            }
            goto LAB_005144a5;
          }
        }
        else if (iVar12 == 1) {
          fVar18 = *(float *)((int)this + 0x128);
          if (fVar20 < fVar21) {
            if ((fVar21 < fVar18) || (fVar18 <= fVar20)) goto LAB_00514437;
          }
          else if (fVar21 <= fVar18) {
            bVar17 = fVar20 < fVar18;
            goto LAB_00514431;
          }
        }
      }
      if (*(char *)(*(int *)(*(int *)((int)this + 0x40) + 0x18) + 0x62) == '\0') {
        in_stack_ffffff7c = (byte *)0x0;
        puVar8 = (undefined4 *)(in_stack_ffffff6c & 0xffffff00);
        FUN_00402690(&stack0xffffff6c,"Beginning rotation to %f, difference %f.",0x28);
        FUN_0050ae50(this,puVar8);
        *(undefined1 *)(*(int *)(*(int *)((int)this + 0x40) + 0x18) + 0x62) = 1;
      }
    }
  }
  else if (iVar12 == 2) {
    FUN_005127b0((int)this);
  }
  else if (iVar12 == 3) {
    FUN_00512520(this);
  }
LAB_005144a5:
  if ((*(int *)((int)this + 0x1c8) - *(int *)((int)this + 0x1c4) >> 5 == 0) ||
     ((*(int **)(*(int *)((int)this + 0x40) + 0x10) != (int *)0x0 &&
      (cVar5 = (**(code **)(**(int **)(*(int *)((int)this + 0x40) + 0x10) + 0x10))(), cVar5 != '\0')
      ))) {
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      local_30 = &stack0xffffff7c;
      pvVar14 = (void *)((uint)in_stack_ffffff7c & 0xffffff00);
      FUN_00402690(&stack0xffffff7c,"lock_at_50",10);
      local_8 = 0x15;
      puVar8 = FUN_00412df0();
      local_8 = 0xffffffff;
      uVar7 = 0x514533;
      bVar4 = FUN_004a1150(puVar8,pvVar14);
      if (bVar4 != 0) {
        puVar19 = *(undefined1 **)((int)this + 0x120);
        FUN_00593220();
        fVar20 = 50.0;
        local_30 = puVar19;
        FUN_00593220();
        if (fVar20 <= (float)local_30) {
          *(undefined4 *)((int)this + 0x120) = 0x42480000;
          local_30 = &stack0xffffff78;
          *(undefined1 *)(*(int *)(*(int *)((int)this + 0x40) + 0x18) + 0x62) = 0;
          pbVar24 = (byte *)(uVar7 & 0xffffff00);
          FUN_00402690(&stack0xffffff78,"angle_50",8);
          local_8 = 0x16;
          puVar8 = FUN_00412df0();
          local_8 = 0xffffffff;
          FUN_004a0ee0(puVar8,pbVar24);
          pbVar24 = (byte *)((uint)pbVar24 & 0xffffff00);
          local_30 = &stack0xffffff78;
          FUN_00402690(&stack0xffffff78,"lock_at_50",10);
          local_8 = 0x17;
          puVar8 = FUN_00412df0();
          local_8 = 0xffffffff;
          FUN_004a0ee0(puVar8,pbVar24);
        }
      }
    }
    if (*(int *)((int)this + 0x1c8) - *(int *)((int)this + 0x1c4) >> 5 == 0) {
      if (((*(float *)((int)this + 0x128) != -1.0) &&
          (*(float *)((int)this + 0x128) == *(float *)((int)this + 0x120))) &&
         (*(int *)((int)this + 0xd4) == 1)) {
        *(undefined4 *)((int)this + 0xd4) = 0;
        *(undefined4 *)((int)this + 0x2c0) = 0;
        *(undefined4 *)((int)this + 0x2c4) = 0;
      }
    }
    else if (*(int *)((int)this + 0xd4) == 1) {
      FUN_005167a0(this);
    }
    if (*(char *)((int)this + 0x345) != '\0') {
      iVar12 = *(int *)((int)this + 0x24);
      iVar16 = 0;
      *(undefined1 *)((int)this + 0x345) = 0;
      uVar7 = 0;
      local_3c = 0.0;
      local_44 = 0.0;
      if (*(int *)(iVar12 + 0x88) - *(int *)(iVar12 + 0x84) >> 2 != 0) {
        do {
          iVar12 = *(int *)(*(int *)(iVar12 + 0x84) + uVar7 * 4);
          iVar1 = *(int *)(iVar12 + 0x54);
          if (iVar1 == 1) {
            iVar16 = iVar16 + 1;
          }
          else if (iVar1 == 0) {
            local_30 = &stack0xffffff8c;
            fVar21 = (float)*(double *)(iVar12 + 0x20);
            fVar20 = (float)*(double *)(iVar12 + 0x28);
            local_8 = 0x18;
            piVar13 = FUN_00420f40((undefined1 *)((int)this + 0x348),(int *)((int)this + 0x20));
            local_8 = 0xffffffff;
            uVar15 = FUN_0051eeb0((void *)*piVar13,fVar21,fVar20);
            if ((char)uVar15 == '\0') {
              local_3c = (float)((int)local_3c + 1);
            }
          }
          else if (iVar1 == 2) {
            local_30 = &stack0xffffff8c;
            fVar21 = (float)*(double *)(iVar12 + 0x20);
            fVar20 = (float)*(double *)(iVar12 + 0x28);
            local_8 = 0x19;
            piVar13 = FUN_00420f40((undefined1 *)((int)this + 0x348),(int *)((int)this + 0x20));
            local_8 = 0xffffffff;
            uVar15 = FUN_0051eeb0((void *)*piVar13,fVar21,fVar20);
            if ((char)uVar15 == '\0') {
              local_44 = (float)((int)local_44 + 1);
            }
          }
          iVar12 = *(int *)((int)this + 0x24);
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)(*(int *)(iVar12 + 0x88) - *(int *)(iVar12 + 0x84) >> 2));
      }
      if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"Entering star system: %s");
        local_8 = 0x1a;
        if (0xf < (uint)puVar8[5]) {
          puVar8 = (undefined4 *)*puVar8;
        }
        FUN_00527550(*(int **)((int)this + 0x224),1,puVar8);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
          pvVar14 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar14 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar14);
        }
        if (iVar16 < 2) {
          pcVar6 = "%d star";
        }
        else {
          pcVar6 = "%d stars";
        }
        FUN_00527550(*(int **)((int)this + 0x224),1,pcVar6);
        FUN_00527550(*(int **)((int)this + 0x224),1,"%d planets known");
        FUN_00527550(*(int **)((int)this + 0x224),1,"%d moons known");
      }
    }
    *(undefined4 *)((int)this + 0x314) = *(undefined4 *)((int)this + 0x310);
    local_4c = 0.0;
    local_48 = (void *)0x0;
    local_8 = 0x1b;
    fVar20 = cocos2d::Vec2::getDistance((Vec2 *)((int)this + 0x118),(Vec2 *)&local_4c);
    *(float *)((int)this + 0x310) = fVar20;
    *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x120);
  }
LAB_005148b2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
