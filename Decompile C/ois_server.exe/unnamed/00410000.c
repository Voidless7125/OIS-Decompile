#include "../ois_server.exe.h"


void __fastcall thunk_FUN_00413270(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_00410140(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  byte ****ppppbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte ****ppppbVar10;
  byte *pbVar11;
  uint uVar12;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  byte *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  byte *in_stack_ffffffa8;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0438;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  puVar3 = DAT_0065c2b4;
  if (DAT_0065c2b4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005adb0f(4);
    DAT_0065c2b4 = puVar3;
    *puVar3 = 0xffffffff;
    local_18 = puVar3;
  }
  pbVar11 = param_2;
  *puVar3 = 0xffffffff;
  uVar12 = 0;
  iVar1 = *(int *)(DAT_0065b5cc + 0x13c);
  if (*(int *)(DAT_0065b5cc + 0x140) - iVar1 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar12 * 4);
      if (*(int *)(*(int *)(iVar2 + 0x54) + 0x18) == 0) {
        pbVar9 = (byte *)(iVar2 + 0x38);
        ppbVar4 = &param_2;
        if (0xf < in_stack_0000001c) {
          ppbVar4 = (byte **)pbVar11;
        }
        if (0xf < *(uint *)(iVar2 + 0x4c)) {
          pbVar9 = *(byte **)(iVar2 + 0x38);
        }
        uVar5 = FUN_004031f0(pbVar9,*(uint *)(iVar2 + 0x48),(byte *)ppbVar4,in_stack_00000018);
        if ((char)uVar5 != '\0') {
          pbVar9 = *(byte **)(*(int *)(iVar1 + uVar12 * 4) + 0x58);
          pbVar6 = (byte *)&stack0x00000020;
          if (0xf < in_stack_00000034) {
            pbVar6 = in_stack_00000020;
          }
          pbVar8 = pbVar9;
          if (0xf < *(uint *)(pbVar9 + 0x14)) {
            pbVar8 = *(byte **)pbVar9;
          }
          uVar5 = FUN_004031f0(pbVar8,*(uint *)(pbVar9 + 0x10),pbVar6,in_stack_00000030);
          if ((char)uVar5 != '\0') {
            FUN_004024e0(local_30,&stack0x00000020);
            iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0x13c) + uVar12 * 4);
            local_8 = CONCAT31(local_8._1_3_,2);
            FUN_004024e0(&stack0xffffffa8,local_30);
            FUN_004a8380(in_stack_ffffffa8);
            ppppbVar10 = (byte ****)local_30[0];
            pbVar11 = *(byte **)(iVar1 + 0x58);
            if (pbVar11 != (byte *)0x0) {
              ppppbVar7 = local_30;
              if (0xf < local_1c) {
                ppppbVar7 = (byte ****)local_30[0];
              }
              pbVar9 = pbVar11;
              if (0xf < *(uint *)(pbVar11 + 0x14)) {
                pbVar9 = *(byte **)pbVar11;
              }
              uVar12 = FUN_004031f0(pbVar9,*(uint *)(pbVar11 + 0x10),(byte *)ppppbVar7,local_20);
              if ((char)uVar12 != '\0') {
                *(int *)(pbVar11 + 0x18) = *(int *)(pbVar11 + 0x18) - param_1;
                FUN_00591070("WORLD","%d units of cargo %s removed from contract.");
                ppppbVar10 = (byte ****)local_30[0];
                if (*(int *)(*(int *)(iVar1 + 0x58) + 0x18) < 1) {
                  FUN_00591070("WORLD","Cargo %s completed from contract.");
                  if (*(int **)(iVar1 + 0x58) != (int *)0x0) {
                    FUN_004826b0(*(int **)(iVar1 + 0x58));
                  }
                  *(undefined4 *)(iVar1 + 0x58) = 0;
                  local_8 = CONCAT31(local_8._1_3_,1);
                  if (0xf < local_1c) {
                    ppppbVar10 = (byte ****)local_30[0];
                    if ((0xfff < local_1c + 1) &&
                       (ppppbVar10 = (byte ****)local_30[0][-1],
                       (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)ppppbVar10)))) {
                    // WARNING: Subroutine does not return
                      _invalid_parameter_noinfo_noreturn();
                    }
                    FUN_005adb3f(ppppbVar10);
                  }
                  FUN_00410420();
                  pbVar11 = param_2;
                  break;
                }
              }
            }
            pbVar11 = param_2;
            if (0xf < local_1c) {
              ppppbVar7 = ppppbVar10;
              if ((0xfff < local_1c + 1) &&
                 (ppppbVar7 = (byte ****)ppppbVar10[-1],
                 (byte *)0x1f < (byte *)((int)ppppbVar10 + (-4 - (int)ppppbVar7)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(ppppbVar7);
              pbVar11 = param_2;
            }
            break;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(DAT_0065b5cc + 0x140) - iVar1 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pbVar9 = pbVar11;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar9 = *(byte **)(pbVar11 + -4), (byte *)0x1f < pbVar11 + (-4 - (int)pbVar9))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar9);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (byte *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pbVar11 = in_stack_00000020;
    if ((0xfff < in_stack_00000034 + 1) &&
       (pbVar11 = *(byte **)(in_stack_00000020 + -4),
       (byte *)0x1f < in_stack_00000020 + (-4 - (int)pbVar11))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar11);
  }
  ExceptionList = local_10;
  return;
}


void FUN_00410420(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  size_t _Size;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0468;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)0x0;
  piVar6 = (int *)0x0;
  local_18 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_1c = (int *)0x0;
  local_28 = (int *)0x0;
  local_8 = 0;
  uVar5 = 0;
  iVar7 = *(int *)(DAT_0065b5cc + 0x13c);
  iVar4 = DAT_0065b5cc;
  if (*(int *)(DAT_0065b5cc + 0x140) - iVar7 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar7 + uVar5 * 4);
      if (*(int *)(iVar1 + 0x58) == 0) {
        if (piVar3 == piVar6) {
          FUN_004141e0(&local_30,piVar6,(undefined4 *)(iVar7 + uVar5 * 4));
          piVar3 = local_28;
          iVar4 = DAT_0065b5cc;
          piVar6 = local_2c;
        }
        else {
          *piVar6 = iVar1;
          local_2c = piVar6 + 1;
          piVar6 = local_2c;
        }
      }
      uVar5 = uVar5 + 1;
      iVar7 = *(int *)(iVar4 + 0x13c);
    } while (uVar5 < (uint)(*(int *)(iVar4 + 0x140) - iVar7 >> 2));
    local_18 = local_30;
    local_1c = piVar3;
  }
  piVar3 = local_18;
  local_30 = local_18;
  for (iVar7 = (int)piVar6 - (int)local_18 >> 2; iVar7 != 0; iVar7 = iVar7 + -1) {
    local_14 = piVar3;
    FUN_00483670(*piVar3);
    local_20 = *(int **)(DAT_0065b5cc + 0x140);
    puVar2 = FUN_00414000(&local_24,piVar3,*(int **)(DAT_0065b5cc + 0x13c),local_20);
    piVar6 = (int *)*puVar2;
    if (piVar6 != local_20) {
      _Size = *(int *)(DAT_0065b5cc + 0x140) - (int)local_20;
      memmove(piVar6,local_20,_Size);
      *(size_t *)(DAT_0065b5cc + 0x140) = _Size + (int)piVar6;
      piVar3 = local_14;
    }
    if ((int *)*piVar3 != (int *)0x0) {
      FUN_0040fae0((int *)*piVar3);
    }
    piVar3 = piVar3 + 1;
    local_14 = piVar3;
  }
  if (local_18 != (int *)0x0) {
    piVar3 = local_18;
    if ((0xfff < ((int)local_1c - (int)local_18 & 0xfffffffcU)) &&
       (piVar3 = (int *)local_18[-1], 0x1f < (uint)((int)local_18 + (-4 - (int)piVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar3);
  }
  ExceptionList = local_10;
  return;
}


uint FUN_004105a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  piVar3 = (int *)DAT_0065b5cc[0x27];
  uVar5 = DAT_0065b5cc[0x28] - (int)piVar3 >> 2;
  piVar2 = DAT_0065b5cc;
  if (uVar5 != 0) {
    do {
      iVar1 = *piVar3;
      if ((*(char *)(iVar1 + 0x18) != '\0') &&
         (piVar2 = *(int **)(iVar1 + 0x1c), *piVar2 == param_1)) {
        return CONCAT31((int3)((uint)piVar2 >> 8),*(undefined1 *)(iVar1 + 0x74));
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar5);
  }
  return (uint)piVar2 & 0xffffff00;
}


uint FUN_004105f0(char *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  
  pbVar6 = (byte *)(param_1 + 0x1c);
  pbVar5 = pbVar6;
  if (0xf < *(uint *)(param_1 + 0x30)) {
    pbVar5 = *(byte **)pbVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar4 = FUN_004031f0(pbVar5,uVar1,(byte *)&PTR_005ce008,0);
  iVar3 = DAT_0065b5cc;
  if ((char)uVar4 == '\0') {
    if (0xf < *(uint *)(param_1 + 0x30)) {
      pbVar6 = *(byte **)pbVar6;
    }
    pbVar5 = (byte *)(DAT_0065b5cc + 0xb4);
    if (0xf < *(uint *)(DAT_0065b5cc + 200)) {
      pbVar5 = *(byte **)(DAT_0065b5cc + 0xb4);
    }
    uVar4 = FUN_004031f0(pbVar5,*(uint *)(DAT_0065b5cc + 0xc4),pbVar6,uVar1);
    if ((char)uVar4 == '\0') goto LAB_004106ae;
  }
  if (*param_1 != '\0') {
LAB_004106b9:
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  piVar2 = *(int **)(iVar3 + 0xa0);
  for (piVar7 = *(int **)(iVar3 + 0x9c); piVar7 != piVar2; piVar7 = piVar7 + 1) {
    iVar3 = *piVar7;
    if (*(char *)(iVar3 + 0x18) != '\0') {
      pbVar6 = (byte *)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        pbVar6 = *(byte **)pbVar6;
      }
      pbVar5 = (byte *)(iVar3 + 0x24);
      if (0xf < *(uint *)(iVar3 + 0x38)) {
        pbVar5 = *(byte **)(iVar3 + 0x24);
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(iVar3 + 0x34),pbVar6,*(uint *)(param_1 + 0x14));
      if ((char)uVar4 != '\0') goto LAB_004106b9;
    }
  }
LAB_004106ae:
  return uVar4 & 0xffffff00;
}


// WARNING: Type propagation algorithm not settling

void FUN_004106d0(void)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  byte *******pppppppbVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *******pppppppuVar8;
  byte *******pppppppbVar9;
  byte *pbVar10;
  void *pvVar11;
  int *piVar12;
  byte *pbVar13;
  bool bVar14;
  char *pcVar15;
  uint uVar16;
  byte *******local_74 [4];
  uint local_64;
  uint local_60;
  undefined4 *******local_5c [4];
  uint local_4c;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b0518;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      piVar12 = (int *)*puVar6;
      if (*piVar12 == *(int *)(DAT_0065b5cc + 0x178)) goto LAB_0041072f;
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  piVar12 = (int *)0x0;
LAB_0041072f:
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (undefined4 *******)((uint)local_5c[0] & 0xffffff00);
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (byte *******)((uint)local_74[0] & 0xffffff00);
  local_8 = 1;
  uStack_7 = 0;
  if (*(char *)(DAT_0065b5cc + 0x170) == '\0') {
    pppppppbVar4 = (byte *******)(*(int *)(DAT_0065b5cc + 0xcc) + 0x1b0);
  }
  else {
    pppppppbVar4 = (byte *******)(*(int *)(DAT_0065b5cc + 0xcc) + 0x180);
  }
  if (local_74 != (byte ********)pppppppbVar4) {
    pppppppbVar9 = pppppppbVar4;
    if ((byte ******)0xf < pppppppbVar4[5]) {
      pppppppbVar9 = (byte *******)*pppppppbVar4;
    }
    FUN_00402690(local_74,pppppppbVar9,(uint)pppppppbVar4[4]);
  }
  uVar1 = local_60;
  uVar16 = local_64;
  pppppppbVar4 = (byte *******)local_74;
  if (0xf < local_60) {
    pppppppbVar4 = local_74[0];
  }
  uVar5 = FUN_004031f0((byte *)pppppppbVar4,local_64,(byte *)&PTR_005ce008,0);
  if ((char)uVar5 == '\0') {
    pppppppbVar4 = (byte *******)local_74;
    if (0xf < uVar1) {
      pppppppbVar4 = local_74[0];
    }
    FUN_00402690(local_5c,pppppppbVar4,uVar16);
    uVar16 = 2;
    pcVar15 = "\n\n";
  }
  else {
    if (piVar12[0x46] == 2) {
      uVar16 = rand();
      uVar16 = uVar16 & 0x80000001;
      bVar14 = uVar16 == 0;
      if ((int)uVar16 < 0) {
        bVar14 = (uVar16 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar14) {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_44,
                              "`%%A scout vessel engaging in mapping the uninhabited solar system %s last week found the wreckage of a vessel, the %s.\nShe was a %s-class %s.\n\n"
                             );
        local_8 = 2;
        uVar16 = puVar6[5];
      }
      else {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_44,
                              "`%%Yesterday, a science research vessel scanning for ore in %s stumbled upon the wreckage of the %s, a %s-class %s.\n\n"
                             );
        local_8 = 3;
        uVar16 = puVar6[5];
      }
    }
    else {
      uVar16 = rand();
      uVar16 = uVar16 & 0x80000001;
      bVar14 = uVar16 == 0;
      if ((int)uVar16 < 0) {
        bVar14 = (uVar16 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar14) {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_44,
                              "`%%Today in %s, authorities found the wreckage of the %s, a %s-class %s.\n\n"
                             );
        local_8 = 4;
        uVar16 = puVar6[5];
      }
      else {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_44,
                              "`%%Authorities in %s found the wreckage of the %s, a %s-class %s yesterday.\n\n"
                             );
        local_8 = 5;
        uVar16 = puVar6[5];
      }
    }
    puVar7 = puVar6;
    if (0xf < uVar16) {
      puVar7 = (undefined4 *)*puVar6;
    }
    FUN_00403640(local_5c,puVar7,puVar6[4]);
    local_8 = 1;
    if (0xf < local_30) {
      pvVar11 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar11 = *(void **)((int)local_44[0] + -4), uVar3 = local_8,
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11)))) goto LAB_004108a3;
      FUN_005adb3f(pvVar11);
    }
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    local_30 = 0xf;
    local_34 = 0;
    if (*(char *)(DAT_0065b5cc + 0x1c4) == '\0') {
      if (*(char *)(DAT_0065b5cc + 0x1c6) != '\0') {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "Tearing and warping of the ship\'s hull implies the vessel might have been caught in a dichromatic nebula before finally being destroyed.\n\n"
                             );
        local_8 = 8;
        uVar16 = puVar6[5];
        goto joined_r0x00410b44;
      }
      if (*(char *)(DAT_0065b5cc + 0x1c5) != '\0') {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "Subtle electrical scoring on the hull indicates the the vessel may have travelled through a charged nebula."
                             );
        local_8 = 9;
        uVar16 = puVar6[5];
        goto joined_r0x00410b44;
      }
    }
    else {
      if ((*(char *)(DAT_0065b5cc + 0x1c6) == '\0') && (*(char *)(DAT_0065b5cc + 0x1c5) == '\0')) {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "Evidence of micro-meteor impacts indicate the vessel had recently travelled through an asteroid belt.\n\n"
                             );
        local_8 = 7;
        uVar16 = puVar6[5];
      }
      else {
        puVar6 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "Evidence of hull damage from dangerous nebulae and micro-meteor impacts indicate the vessel had recently travelled through dangerous areas of space.\n\n"
                             );
        local_8 = 6;
        uVar16 = puVar6[5];
      }
joined_r0x00410b44:
      puVar7 = puVar6;
      if (0xf < uVar16) {
        puVar7 = (undefined4 *)*puVar6;
      }
      FUN_00403640(local_5c,puVar7,puVar6[4]);
      local_8 = 1;
      if (0xf < local_18) {
        pvVar11 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_004108a3;
        FUN_005adb3f(pvVar11);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_18 = 0xf;
      local_1c = 0;
    }
    iVar2 = DAT_0065b5cc;
    if (*(char *)(DAT_0065b5cc + 0x1c8) == '\0') {
      uVar16 = *(uint *)(DAT_0065b5cc + 0x1e0);
      pbVar13 = (byte *)(DAT_0065b5cc + 0x1cc);
      pbVar10 = pbVar13;
      if (0xf < uVar16) {
        pbVar10 = *(byte **)pbVar13;
      }
      uVar1 = *(uint *)(DAT_0065b5cc + 0x1dc);
      uVar5 = FUN_004031f0(pbVar10,uVar1,(byte *)&PTR_005ce008,0);
      if ((char)uVar5 == '\0') {
        if (0xf < uVar16) {
          pbVar13 = *(byte **)pbVar13;
        }
        uVar16 = FUN_004031f0(pbVar13,uVar1,(byte *)"pirate",6);
        pcVar15 = "explosive";
        if ((char)uVar16 == '\0') {
          if (*(char *)(iVar2 + 0x171) == '\0') {
            pcVar15 = "EMP";
          }
          std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar15);
          local_8 = 0xe;
          puVar7 = (undefined4 *)
                   FUN_00591e00((undefined1 *)local_2c,
                                "The vessel was destroyed, it seems, by impact with an %s torpedo. Black box recordings indicate the name of the aggressor might have been \'%s\'. Authorities are attemping to track the vessel down.\n\n"
                               );
          local_8 = 0xf;
          puVar6 = puVar7;
          if (0xf < (uint)puVar7[5]) {
            puVar6 = (undefined4 *)*puVar7;
          }
          FUN_00403640(local_5c,puVar6,puVar7[4]);
          local_8 = 0xe;
          if (0xf < local_18) {
            pvVar11 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_004108a3;
            FUN_005adb3f(pvVar11);
          }
          local_8 = 1;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (0xf < local_30) {
            pvVar11 = local_44[0];
            if (0xfff < local_30 + 1) {
              pvVar11 = *(void **)((int)local_44[0] + -4);
              uVar16 = (int)local_44[0] + (-4 - (int)pvVar11);
              goto joined_r0x00410e11;
            }
            goto LAB_00410e17;
          }
        }
        else {
          if (*(char *)(iVar2 + 0x171) == '\0') {
            pcVar15 = "EMP";
          }
          std::basic_string<>::basic_string<>((basic_string<> *)local_44,pcVar15);
          local_8 = 0xb;
          uVar16 = rand();
          uVar16 = uVar16 & 0x80000001;
          bVar14 = uVar16 == 0;
          if ((int)uVar16 < 0) {
            bVar14 = (uVar16 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar14) {
            puVar6 = (undefined4 *)
                     FUN_00591e00((undefined1 *)local_2c,
                                  "The final demise of the vessel apears to have been caused by an %s torpedo impacting the vessel. The aggressor is at this point unknown, although investigators believe it may have been related to a common problem of piracy int the sector.\n\n"
                                 );
            local_8 = 0xc;
          }
          else {
            puVar6 = (undefined4 *)
                     FUN_00591e00((undefined1 *)local_2c,
                                  "The ship appears to have been destroyed by an %s-tipped torpedo, although at this time there are no leads as to who might have been responsible for this attack.\n\n"
                                 );
            local_8 = 0xd;
          }
          FUN_00403490(local_5c,puVar6);
          local_8 = 0xb;
          if (0xf < local_18) {
            pvVar11 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_004108a3;
            FUN_005adb3f(pvVar11);
          }
          local_8 = 1;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_18 = 0xf;
          local_1c = 0;
          if (0xf < local_30) {
            pvVar11 = local_44[0];
            if (0xfff < local_30 + 1) {
              pvVar11 = *(void **)((int)local_44[0] + -4);
              uVar16 = (int)local_44[0] + (-4 - (int)pvVar11);
joined_r0x00410e11:
              local_18 = 0xf;
              local_1c = 0;
              uVar3 = 1;
              if (0x1f < uVar16) goto LAB_004108a3;
            }
LAB_00410e17:
            local_8 = 1;
            local_18 = 0xf;
            local_1c = 0;
            FUN_005adb3f(pvVar11);
          }
        }
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        local_30 = 0xf;
        local_34 = 0;
      }
      else {
        puVar7 = (undefined4 *)
                 FUN_00591e00((undefined1 *)local_2c,
                              "There is no further evidence as to what caused the destruction of the %s, so at this point investigators believe that the most likely cause of destruction was the natural hazards of space-travel.\n\n"
                             );
        local_8 = 10;
        puVar6 = puVar7;
        if (0xf < (uint)puVar7[5]) {
          puVar6 = (undefined4 *)*puVar7;
        }
        FUN_00403640(local_5c,puVar6,puVar7[4]);
        local_8 = 1;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4), uVar3 = local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_004108a3;
          FUN_005adb3f(pvVar11);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
    }
    else {
      FUN_00403640(local_5c,
                   "It appears that the vessel was destroyed in a sanctioned engagement with an authority vessel. The reason for the use of weapons by the vessel is not being revealed at this time.\n\n"
                   ,0xb3);
    }
    if (*(char *)(DAT_0065b5cc + 0x1c7) == '\0') {
      uVar16 = 0x8c;
      pcVar15 = 
      "No survivors were found on the vessel. The body of a person, presumed to be the registered owner and pilot of the vessel was found aboard.\n\n"
      ;
    }
    else {
      uVar16 = 0x73;
      pcVar15 = 
      "Two bodies were found on the vessel, one believed to be a passenger and the other the owner-operator of the ship.\n\n"
      ;
    }
  }
  FUN_00403640(local_5c,pcVar15,uVar16);
  pppppppbVar4 = local_74[0];
  iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x6c);
  if ((iVar2 == 2) || (iVar2 == 3)) {
    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Time Taken: `!%dm %ds");
    local_8 = 0x10;
    puVar6 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar6 = (undefined4 *)*puVar7;
    }
    FUN_00403640(local_5c,puVar6,puVar7[4]);
    local_8 = 1;
    uVar3 = local_8;
    local_8 = 1;
    if (0xf < local_18) {
      pvVar11 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar11 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_004108a3;
      FUN_005adb3f(pvVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if ((undefined4 ********)(DAT_0065b5cc + 0x158) != local_5c) {
    pppppppuVar8 = local_5c;
    if (0xf < local_48) {
      pppppppuVar8 = local_5c[0];
    }
    FUN_00402690((undefined4 *******)(DAT_0065b5cc + 0x158),pppppppuVar8,local_4c);
  }
  if (0xf < local_60) {
    pppppppbVar9 = pppppppbVar4;
    if ((0xfff < local_60 + 1) &&
       (pppppppbVar9 = (byte *******)pppppppbVar4[-1], uVar3 = local_8,
       (byte *)0x1f < (byte *)((int)pppppppbVar4 + (-4 - (int)pppppppbVar9)))) goto LAB_004108a3;
    FUN_005adb3f(pppppppbVar9);
  }
  if (0xf < local_48) {
    pppppppuVar8 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pppppppuVar8 = (undefined4 *******)local_5c[0][-1], uVar3 = local_8,
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8)))) {
LAB_004108a3:
      local_8 = uVar3;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppuVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00410fd0(void)

{
  int iVar1;
  int iVar2;
  BaseLight *pBVar3;
  bool bVar4;
  Layer *pLVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0564;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(DAT_0065b444 + 5) = 0;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar5 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar5);
  }
  local_8 = 0xffffffff;
  FUN_00530750(DAT_0065c25c,0xffffffff);
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar5 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 1;
    DAT_0065c25c = FUN_0052b7a0(pLVar5);
    local_8 = 0xffffffff;
  }
  pLVar5 = DAT_0065c25c;
  iVar6 = *(int *)(DAT_0065c25c + 0x2d4);
  uVar7 = 0;
  *(undefined4 *)(DAT_0065c25c + 0x294) = 0xbf800000;
  if (*(int *)(iVar6 + 0x94) - *(int *)(iVar6 + 0x90) >> 2 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(iVar6 + 0x90) + uVar7 * 4);
      iVar2 = *(int *)(iVar1 + 0x3c);
      if (((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if (*(BaseLight **)(iVar1 + 0x3d8) != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity(*(BaseLight **)(iVar1 + 0x3d8),*(float *)(iVar1 + 0x3ac))
          ;
          iVar6 = *(int *)(pLVar5 + 0x2d4);
        }
        iVar1 = *(int *)(*(int *)(iVar6 + 0x90) + uVar7 * 4);
        pBVar3 = *(BaseLight **)(iVar1 + 0x3d4);
        if (pBVar3 != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac));
          iVar6 = *(int *)(pLVar5 + 0x2d4);
        }
        iVar1 = *(int *)(*(int *)(iVar6 + 0x90) + uVar7 * 4);
        pBVar3 = *(BaseLight **)(iVar1 + 0x3d0);
        if (pBVar3 != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac));
          iVar6 = *(int *)(pLVar5 + 0x2d4);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(iVar6 + 0x94) - *(int *)(iVar6 + 0x90) >> 2));
  }
  if (*(BaseLight **)(iVar6 + 0x9c) != (BaseLight *)0x0) {
    cocos2d::BaseLight::setIntensity(*(BaseLight **)(iVar6 + 0x9c),*(float *)(iVar6 + 0x40));
  }
  FUN_00402f60();
  *(undefined1 *)(DAT_0065b444 + 0x78) = 0;
  ExceptionList = local_10;
  return;
}


void FUN_004111b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0065b444;
  puStack_c = &LAB_005b0588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((undefined4 **)(DAT_0065b444 + 0x128) != &param_1) {
    ppuVar2 = &param_1;
    if (0xf < in_stack_00000018) {
      ppuVar2 = (undefined4 **)param_1;
    }
    FUN_00402690((undefined4 **)(DAT_0065b444 + 0x128),ppuVar2,in_stack_00000014);
  }
  *(undefined4 *)(iVar1 + 0x124) = 0x40400000;
  if (0xf < in_stack_00000018) {
    puVar3 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar3 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar3);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00411250(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(int *)((int)this + 0xa8) = param_1;
  iVar1 = param_1 * 0x18;
  puVar2 = (undefined4 *)(&DAT_00655598 + iVar1);
  if ((undefined4 *)((int)this + 0xac) != puVar2) {
    if (0xf < *(uint *)(&DAT_006555ac + iVar1)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    FUN_00402690((undefined4 *)((int)this + 0xac),puVar2,*(uint *)(&DAT_006555a8 + iVar1));
  }
  return;
}


void __thiscall FUN_00411290(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(int *)((int)this + 0xc4) = param_1;
  iVar1 = param_1 * 0x18;
  puVar2 = (undefined4 *)(&DAT_00655610 + iVar1);
  if ((undefined4 *)((int)this + 200) != puVar2) {
    if (0xf < *(uint *)(&DAT_00655624 + iVar1)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    FUN_00402690((undefined4 *)((int)this + 200),puVar2,*(uint *)(&DAT_00655620 + iVar1));
  }
  return;
}


void __thiscall FUN_004112d0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  *(int *)((int)this + 0xe0) = param_1;
  puVar1 = &DAT_00655538 + param_1 * 6;
  if ((undefined4 *)((int)this + 0xe4) != puVar1) {
    if (0xf < (uint)(&DAT_0065554c)[param_1 * 6]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    FUN_00402690((undefined4 *)((int)this + 0xe4),puVar1,(&DAT_00655548)[param_1 * 6]);
  }
  return;
}


void __thiscall FUN_00411310(void *this,int param_1)

{
  int *this_00;
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  *(int *)((int)this + 0xfc) = param_1;
  iVar2 = DAT_0065b5cc;
  if (*(int *)(&DAT_00655020 + param_1 * 4) == -1) {
    FUN_00402690((void *)((int)this + 0x100),"Random",6);
    *(undefined1 *)((int)this + 0x11d) = 1;
    return;
  }
  *(undefined1 *)((int)this + 0x11d) = 0;
  puVar5 = *(undefined4 **)(iVar2 + 0x3c);
  puVar1 = *(undefined4 **)(iVar2 + 0x40);
  if (puVar5 != puVar1) {
    do {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == *(int *)(&DAT_00655020 + param_1 * 4)) goto LAB_00411375;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  piVar4 = (int *)0x0;
LAB_00411375:
  this_00 = (int *)((int)this + 0x100);
  if (piVar4 == (int *)0x0) {
    FUN_00402690(this_00,"ERROR",5);
    bVar3 = cc_assert_script_compatible("Error setting start location");
    if (!bVar3) {
      cocos2d::log("Assert failed: %s","Error setting start location");
    }
  }
  else {
    piVar6 = piVar4 + 7;
    if (this_00 != piVar6) {
      if (0xf < (uint)piVar4[0xc]) {
        piVar6 = (int *)*piVar6;
      }
      FUN_00402690(this_00,piVar6,piVar4[0xb]);
      return;
    }
  }
  return;
}


void FUN_004113e0(void)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined4 extraout_ECX;
  byte *this;
  undefined4 *in_stack_ffffff3c;
  undefined1 auStack_ac [12];
  undefined4 uStack_a0;
  byte *in_stack_ffffff6c;
  char *pcVar10;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005b05f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this = (byte *)(DAT_0065b444 + 0x1ac);
  pbVar9 = this;
  if (0xf < *(uint *)(DAT_0065b444 + 0x1c0)) {
    pbVar9 = *(byte **)this;
  }
  uVar3 = FUN_004031f0(pbVar9,*(uint *)(DAT_0065b444 + 0x1bc),(byte *)&PTR_005ce008,0);
  if ((char)uVar3 != '\0') goto LAB_00411820;
  iVar4 = FUN_0051f090(*(int *)(DAT_0065b5cc + 0xd8));
  if (iVar4 == 0) {
    FUN_00591070("ERROR","ERROR: invalid faction in sector trying to report a smuggler.");
    goto LAB_00411820;
  }
  FUN_004024e0(&stack0xffffff6c,(undefined4 *)this);
  iVar5 = FUN_0051fb30(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24),in_stack_ffffff6c);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  if (iVar5 == 0) {
    pcVar10 = 
    "%s,\n\nUnfortunately we were unable to track down the ship you reported as a smuggler, and as such are unable to issue a reward.\n\nSincerely, %s Contraband and Smuggling Department"
    ;
    uStack_7 = uVar1;
LAB_004116ae:
    piVar7 = (int *)FUN_00591e00((undefined1 *)local_2c,pcVar10);
    FUN_00413230(local_5c,piVar7);
    if (0xf < local_18) {
      pvVar8 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar8 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_004116ed;
      FUN_005adb3f(pvVar8);
    }
    FUN_00402690(local_44,"Smuggling Report",0x10);
  }
  else {
    FUN_004024e0(&stack0xffffff6c,(undefined4 *)this);
    local_8 = 2;
    puVar6 = FUN_004122d0();
    local_8 = 1;
    cVar2 = FUN_004a8880(puVar6,in_stack_ffffff6c);
    if (cVar2 != '\0') {
      FUN_004024e0(&stack0xffffff6c,(undefined4 *)this);
      local_8 = 3;
      puVar6 = FUN_004122d0();
      local_8 = 1;
      cVar2 = FUN_004a8880(puVar6,in_stack_ffffff6c);
      if (cVar2 != '\0') {
        FUN_004024e0(local_2c,(undefined4 *)this);
        local_8 = 4;
        puVar6 = FUN_004122d0();
        local_8 = 1;
        FUN_004143f0((byte *)puVar6[2],(byte *)puVar6[3],(byte *)local_2c);
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar8);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      pcVar10 = 
      "%s,\n\nUnfortunately, the vessel you reported does not appear to have any contraband in its cargo, and as such are unable to issue a reward.\n\nSincerely, %s Contraband and Smuggling Department"
      ;
      goto LAB_004116ae;
    }
    pcVar10 = 
    "Thank you, %s, for your information about the contraband aboard the vessel \'%s\' travelling in %s.\n\nYour information proved to be accurate, and as such we are transfering you a reward payment of %d credits.\n\nSincerely,\n%s Contraband and Smuggling Department"
    ;
    piVar7 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                 "Thank you, %s, for your information about the contraband aboard the vessel \'%s\' travelling in %s.\n\nYour information proved to be accurate, and as such we are transfering you a reward payment of %d credits.\n\nSincerely,\n%s Contraband and Smuggling Department"
                                );
    FUN_00413230(local_5c,piVar7);
    if (0xf < local_18) {
      pvVar8 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar8 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    FUN_00402690(local_44,"Reward",6);
    FUN_00591070(&DAT_005cdc70,"Smuggler reported by player to authorities.");
    pvVar8 = (void *)((uint)pcVar10 & 0xffffff00);
    uStack_a0 = 0x4115c2;
    FUN_00402690(&stack0xffffff6c,"Reward for reporting smuggler.",0x1e);
    uStack_a0 = 0x4115d9;
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0x96,pvVar8);
  }
  FUN_004024e0(&stack0xffffff6c,local_5c);
  local_8 = 5;
  FUN_004024e0(auStack_ac,local_44);
  local_8 = 6;
  FUN_004024e0(&stack0xffffff3c,(undefined4 *)(iVar4 + 0x20));
  local_8 = 7;
  pvVar8 = (void *)FUN_00412700();
  local_8 = 1;
  FUN_0043aad0(pvVar8,in_stack_ffffff3c);
  FUN_00402690(this,&PTR_005ce008,0);
  if (0xf < local_30) {
    pvVar8 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar8 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) goto LAB_004116ed;
    FUN_005adb3f(pvVar8);
  }
  if (0xf < local_48) {
    pvVar8 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar8 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
LAB_004116ed:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
LAB_00411820:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00411840(void *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte ****ppppbVar7;
  char *pcVar8;
  void *pvVar9;
  undefined **ppuVar10;
  uint in_stack_00000018;
  byte *in_stack_ffffffa4;
  char *pcVar11;
  byte ***local_34 [4];
  uint local_24;
  uint local_20;
  int local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0628;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = DAT_0065b444;
  FUN_004024e0(local_34,&param_1);
  ppuVar10 = &PTR_DAT_005ddae4;
  while( true ) {
    pbVar3 = *ppuVar10;
    local_14 = pbVar3 + 1;
    pbVar4 = pbVar3;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppppbVar7 = local_34;
    if (0xf < local_20) {
      ppppbVar7 = (byte ****)local_34[0];
    }
    uVar5 = FUN_004031f0((byte *)ppppbVar7,local_24,pbVar3,(int)pbVar4 - (int)local_14);
    if ((char)uVar5 != '\0') break;
    ppuVar10 = ppuVar10 + 1;
    if (0x5ddaf3 < (int)ppuVar10) {
      if (0xf < local_20) {
        ppppbVar7 = (byte ****)local_34[0];
        if ((0xfff < local_20 + 1) &&
           (ppppbVar7 = (byte ****)local_34[0][-1],
           (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar7);
      }
      pcVar11 = "ERROR: tried to report a pirate in an invalid quadrant, \'%s\'";
LAB_00411995:
      FUN_00591070(&DAT_005cdc70,pcVar11);
      if (0xf < in_stack_00000018) {
        pvVar9 = param_1;
        if ((0xfff < in_stack_00000018 + 1) &&
           (pvVar9 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar9))
           )) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      ExceptionList = local_10;
      return;
    }
  }
  if (0xf < local_20) {
    ppppbVar7 = (byte ****)local_34[0];
    if ((0xfff < local_20 + 1) &&
       (ppppbVar7 = (byte ****)local_34[0][-1],
       (byte *)0x1f < (byte *)((int)local_34[0] + (-4 - (int)ppppbVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppbVar7);
  }
  FUN_004024e0(&stack0xffffffa4,&param_1);
  iVar6 = FUN_004a8780(in_stack_ffffffa4);
  pcVar11 = (&PTR_DAT_005ce0a8)[iVar6];
  pcVar8 = pcVar11;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_00402690((void *)(local_18 + 0x194),pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
  pcVar11 = "Reported pirate in quadrant %s";
  goto LAB_00411995;
}


void __thiscall FUN_004119f0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (&PTR_DAT_005ce0a8)[param_1];
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402690((void *)((int)this + 0x194),pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  FUN_00591070(&DAT_005cdc70,"Reported pirate in quadrant %s");
  return;
}


void FUN_00411a40(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b0671;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = 0;
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  FUN_00402690(&local_3c,"[not functional yet]",0x14);
  local_14 = 1;
  piVar1 = (int *)param_1[1];
  if ((int *)param_1[2] == piVar1) {
    FUN_004036d0(param_1,piVar1,(int *)&local_3c);
    if (0xf < uStack_28) {
      pvVar2 = local_3c;
      if (0xfff < uStack_28 + 1) {
        pvVar2 = *(void **)((int)local_3c + -4);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar2);
    }
  }
  else {
    *piVar1 = (int)local_3c;
    piVar1[1] = iStack_38;
    piVar1[2] = iStack_34;
    piVar1[3] = iStack_30;
    *(ulonglong *)(piVar1 + 4) = CONCAT44(uStack_28,local_2c);
    param_1[1] = param_1[1] + 0x18;
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_00411b60(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte **ppbVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  void *pvVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *local_40;
  int local_3c;
  uint local_34;
  int local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b06b0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_30 = DAT_0065b444;
  FUN_00411a40(&local_40);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar11 = 0;
  local_34 = (local_3c - (int)local_40) / 0x18;
  pbVar10 = local_40;
  if (local_34 != 0) {
    do {
      ppbVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar5 = (byte **)param_1;
      }
      pbVar8 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar8 = *(byte **)pbVar10;
      }
      uVar6 = FUN_004031f0(pbVar8,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar5,in_stack_00000014);
      if ((char)uVar6 != '\0') {
        *(uint *)(local_30 + 0x148) = uVar11;
        local_40 = local_40 + uVar11 * 0x18;
        if ((byte *)(local_30 + 0x14c) != local_40) {
          pbVar10 = local_40;
          if (0xf < *(uint *)(local_40 + 0x14)) {
            pbVar10 = *(byte **)local_40;
          }
          FUN_00402690((byte *)(local_30 + 0x14c),pbVar10,*(uint *)(local_40 + 0x10));
        }
        break;
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0x18;
    } while (uVar11 < local_34);
  }
  iVar4 = local_30;
  piVar7 = (int *)FUN_00591e00((undefined1 *)local_2c,"Server name: %s\nLocation: 127.0.0.1");
  piVar12 = (int *)(iVar4 + 0x164);
  if (piVar12 != piVar7) {
    FUN_00401b20(piVar12);
    iVar1 = piVar7[1];
    iVar2 = piVar7[2];
    iVar3 = piVar7[3];
    *piVar12 = *piVar7;
    *(int *)(iVar4 + 0x168) = iVar1;
    *(int *)(iVar4 + 0x16c) = iVar2;
    *(int *)(iVar4 + 0x170) = iVar3;
    *(undefined8 *)(iVar4 + 0x174) = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
  }
  if (0xf < local_18) {
    pvVar9 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar9 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  FUN_004025a0((int *)&local_40);
  if (0xf < in_stack_00000018) {
    pbVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00411d20(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  byte *pbVar16;
  int local_48;
  int *local_44;
  int *local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b06f8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  piVar13 = (int *)0x0;
  iVar14 = 0;
  local_48 = 0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_14 = 0;
  puVar5 = &stack0xfffffffc;
  if ((*(char *)((int)this + 0x71) == '\0') ||
     (iVar6 = FUN_00402370(), puVar5 = puStack_20, *(int *)(iVar6 + 0x20) == 0)) {
    puStack_20 = puVar5;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    piVar10 = *(int **)(DAT_0065b5cc + 0x250);
    piVar1 = *(int **)(DAT_0065b5cc + 0x254);
    if (piVar10 != piVar1) {
      piVar15 = (int *)0x0;
      do {
        iVar6 = *piVar10;
        piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,"`%c%s");
        local_14._0_1_ = 1;
        if (piVar15 == piVar13) {
          FUN_004036d0(&local_48,piVar13,piVar7);
          piVar15 = local_40;
        }
        else {
          piVar13[4] = 0;
          piVar13[5] = 0;
          iVar14 = piVar7[1];
          iVar3 = piVar7[2];
          iVar4 = piVar7[3];
          *piVar13 = *piVar7;
          piVar13[1] = iVar14;
          piVar13[2] = iVar3;
          piVar13[3] = iVar4;
          iVar14 = piVar7[5];
          piVar13[4] = piVar7[4];
          piVar13[5] = iVar14;
          local_44 = piVar13 + 6;
          piVar7[4] = 0;
          piVar7[5] = 0xf;
          *(undefined1 *)piVar7 = 0;
        }
        piVar13 = local_44;
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_28) {
          pvVar12 = local_3c[0];
          if ((0xfff < local_28 + 1) &&
             (pvVar12 = *(void **)((int)local_3c[0] + -4),
             0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12)))) {
LAB_00411fcd:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar12);
        }
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        piVar2 = *(int **)(DAT_0065b5cc + 0x248);
        iVar14 = local_48;
        for (piVar7 = *(int **)(DAT_0065b5cc + 0x244); local_48 = iVar14, piVar7 != piVar2;
            piVar7 = piVar7 + 1) {
          iVar14 = *piVar7;
          pbVar16 = (byte *)(iVar14 + 0x18);
          pbVar11 = pbVar16;
          if (0xf < *(uint *)(iVar14 + 0x2c)) {
            pbVar11 = *(byte **)pbVar16;
          }
          uVar9 = *(uint *)(iVar14 + 0x28);
          uVar8 = FUN_004031f0(pbVar11,uVar9,(byte *)&PTR_005ce008,0);
          if ((char)uVar8 == '\0') {
            pbVar11 = (byte *)(iVar6 + 0x18);
            if (0xf < *(uint *)(iVar6 + 0x2c)) {
              pbVar11 = *(byte **)(iVar6 + 0x18);
            }
            if (0xf < *(uint *)(iVar14 + 0x2c)) {
              pbVar16 = *(byte **)pbVar16;
            }
            uVar9 = FUN_004031f0(pbVar16,uVar9,pbVar11,*(uint *)(iVar6 + 0x28));
            if ((char)uVar9 != '\0') {
              piVar15 = (int *)FUN_00591e00((undefined1 *)local_3c,&DAT_005e3dcc);
              local_14._0_1_ = 2;
              if (local_40 == piVar13) {
                FUN_004036d0(&local_48,piVar13,piVar15);
              }
              else {
                piVar13[4] = 0;
                piVar13[5] = 0;
                iVar14 = piVar15[1];
                iVar3 = piVar15[2];
                iVar4 = piVar15[3];
                *piVar13 = *piVar15;
                piVar13[1] = iVar14;
                piVar13[2] = iVar3;
                piVar13[3] = iVar4;
                iVar14 = piVar15[5];
                piVar13[4] = piVar15[4];
                piVar13[5] = iVar14;
                local_44 = piVar13 + 6;
                piVar15[4] = 0;
                piVar15[5] = 0xf;
                *(undefined1 *)piVar15 = 0;
              }
              piVar13 = local_44;
              local_14 = (uint)local_14._1_3_ << 8;
              if (0xf < local_28) {
                pvVar12 = local_3c[0];
                if ((0xfff < local_28 + 1) &&
                   (pvVar12 = *(void **)((int)local_3c[0] + -4),
                   0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12)))) goto LAB_00411fcd;
                FUN_005adb3f(pvVar12);
              }
            }
          }
          piVar15 = local_40;
          iVar14 = local_48;
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != piVar1);
    }
    *param_1 = iVar14;
    param_1[1] = (int)piVar13;
    param_1[2] = (int)local_40;
  }
  local_48 = 0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  FUN_004025a0(&local_48);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void FUN_00412030(void)

{
  byte *pbVar1;
  uint uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  int *piVar7;
  byte ****ppppbVar8;
  undefined4 *in_stack_ffffff8c;
  byte ***local_44 [4];
  uint local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0730;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(char *)(DAT_0065b444 + 0x71) != '\0') || (*(char *)(DAT_0065b444 + 0x70) != '\0')) &&
     (*(int *)(DAT_0065b5cc + 0x274) != -1)) {
    FUN_004024e0(&stack0xffffff8c,(undefined4 *)(DAT_0065b5cc + 0x25c));
    FUN_0055eaf0(local_44,in_stack_ffffff8c);
    ppppbVar6 = (byte ****)local_44[0];
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 1;
    piVar7 = *(int **)(DAT_0065b5cc + 0x250);
    if (piVar7 != *(int **)(DAT_0065b5cc + 0x254)) {
      do {
        pbVar1 = (byte *)*piVar7;
        ppppbVar8 = local_44;
        if (0xf < local_30) {
          ppppbVar8 = ppppbVar6;
        }
        pbVar4 = pbVar1;
        if (0xf < *(uint *)(pbVar1 + 0x14)) {
          pbVar4 = *(byte **)pbVar1;
        }
        uVar2 = FUN_004031f0(pbVar4,*(uint *)(pbVar1 + 0x10),(byte *)ppppbVar8,local_34);
        if ((char)uVar2 != '\0') {
          ppppbVar8 = (byte ****)(pbVar1 + 0x18);
          if (local_2c != ppppbVar8) {
            if (0xf < *(uint *)(pbVar1 + 0x2c)) {
              ppppbVar8 = (byte ****)*ppppbVar8;
            }
            FUN_00402690(local_2c,ppppbVar8,*(uint *)(pbVar1 + 0x28));
            ppppbVar6 = (byte ****)local_44[0];
          }
          break;
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != *(int **)(DAT_0065b5cc + 0x254));
    }
    ppppbVar8 = (byte ****)local_2c[0];
    ppppbVar5 = local_2c;
    if (0xf < local_18) {
      ppppbVar5 = (byte ****)local_2c[0];
    }
    uVar2 = FUN_004031f0((byte *)ppppbVar5,local_1c,(byte *)&PTR_005ce008,0);
    if (((char)uVar2 == '\0') &&
       (piVar7 = *(int **)(DAT_0065b5cc + 0x244), piVar7 != *(int **)(DAT_0065b5cc + 0x248))) {
      do {
        pbVar1 = (byte *)*piVar7;
        ppbVar3 = &DAT_006557b0;
        if (0xf < DAT_006557c4) {
          ppbVar3 = (byte **)DAT_006557b0;
        }
        pbVar4 = pbVar1;
        if (0xf < *(uint *)(pbVar1 + 0x14)) {
          pbVar4 = *(byte **)pbVar1;
        }
        uVar2 = FUN_004031f0(pbVar4,*(uint *)(pbVar1 + 0x10),(byte *)ppbVar3,DAT_006557c0);
        if ((char)uVar2 != '\0') {
          pbVar4 = pbVar1 + 0x18;
          if (0xf < *(uint *)(pbVar1 + 0x2c)) {
            pbVar4 = *(byte **)(pbVar1 + 0x18);
          }
          ppppbVar8 = local_2c;
          if (0xf < local_18) {
            ppppbVar8 = (byte ****)local_2c[0];
          }
          FUN_004031f0((byte *)ppppbVar8,local_1c,pbVar4,*(uint *)(pbVar1 + 0x28));
          ppppbVar8 = (byte ****)local_2c[0];
          break;
        }
        piVar7 = piVar7 + 1;
        ppppbVar8 = (byte ****)local_2c[0];
      } while (piVar7 != *(int **)(DAT_0065b5cc + 0x248));
    }
    if (0xf < local_18) {
      ppppbVar6 = ppppbVar8;
      if ((0xfff < local_18 + 1) &&
         (ppppbVar6 = (byte ****)ppppbVar8[-1],
         (byte *)0x1f < (byte *)((int)ppppbVar8 + (-4 - (int)ppppbVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar6);
      ppppbVar6 = (byte ****)local_44[0];
    }
    if (0xf < local_30) {
      ppppbVar8 = ppppbVar6;
      if ((0xfff < local_30 + 1) &&
         (ppppbVar8 = (byte ****)ppppbVar6[-1],
         (byte *)0x1f < (byte *)((int)ppppbVar6 + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppbVar8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00412280(void)

{
  if (DAT_0065c2b0 == (undefined4 *)0x0) {
    DAT_0065c2b0 = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2b0 = 0xffffffff;
  }
  return;
}


void FUN_004122b0(void)

{
  if (DAT_0065c2c8 == 0) {
    DAT_0065c2c8 = FUN_005adb0f(1);
  }
  return;
}


undefined4 * FUN_004122d0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0782;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = DAT_0065c2c4;
  if (DAT_0065c2c4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x1c);
    local_8 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[6] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar2 = FUN_004136c0();
    *puVar1 = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar1[5] = 0;
    puVar1[6] = 0;
    uVar2 = FUN_004136c0();
    puVar1[5] = uVar2;
  }
  ExceptionList = local_10;
  DAT_0065c2c4 = puVar1;
  return puVar1;
}


void FUN_00412390(void)

{
  undefined4 *puVar1;
  
  if (DAT_0065c2a0 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0xc);
    DAT_0065c2a0 = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}


void FUN_004123c0(void)

{
  if (DAT_0065c2b4 == (undefined4 *)0x0) {
    DAT_0065c2b4 = (undefined4 *)FUN_005adb0f(4);
    *DAT_0065c2b4 = 0xffffffff;
  }
  return;
}


void FUN_004123f0(void)

{
  undefined4 *puVar1;
  
  if (DAT_0065c29c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x4c);
    DAT_0065c29c = puVar1;
    *puVar1 = TabletManager::vftable;
    puVar1[1] = 0xffffffff;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
  }
  return;
}


void FUN_00412490(void)

{
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
  return;
}


void FUN_004124e0(void)

{
  undefined1 *puVar1;
  
  if (DAT_0065c2b8 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_005adb0f(0x5c);
    DAT_0065c2b8 = puVar1;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 0x30) = 0xf;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0;
    *(undefined4 *)(puVar1 + 0x40) = 0;
    *(undefined4 *)(puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 0x48) = 0;
    *(undefined4 *)(puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 0x50) = 0;
    *(undefined4 *)(puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 0x58) = 0;
  }
  return;
}


void FUN_00412580(void)

{
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
  return;
}


undefined4 * FUN_004125d0(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b07b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = DAT_0065c2cc;
  if (DAT_0065c2cc == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0xa4);
    local_8 = 0;
    *puVar1 = PrivateCommsManager::vftable;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xbf800000;
    puVar1[6] = 0xbf800000;
    puVar1[7] = 0xffffffff;
    _eh_vector_constructor_iterator_
              (puVar1 + 8,0x18,3,(_func_void_void_ptr *)&LAB_00403160,FUN_00401b20);
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined1 *)(puVar1 + 0x20) = 0;
    puVar1[0x21] = 0xbf800000;
    puVar1[0x22] = 0xffffffff;
    puVar1[0x23] = 0;
    puVar1[0x25] = 0xffffffff;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
  }
  ExceptionList = local_10;
  DAT_0065c2cc = puVar1;
  return puVar1;
}


void FUN_00412700(void)

{
  undefined1 *puVar1;
  
  if (DAT_0065c270 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_005adb0f(0x2c);
    DAT_0065c270 = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
  }
  return;
}


void FUN_00412770(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b07df;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c294 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = 0;
    DAT_0065c294 = FUN_0051e500(puVar1);
  }
  ExceptionList = local_10;
  return;
}


int FUN_004127d0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b081a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = DAT_0065c2ac;
  if (DAT_0065c2ac == 0) {
    iVar1 = FUN_005adb0f(0x2c);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0xf;
    *(undefined1 *)(iVar1 + 0x14) = 0;
    local_8 = 1;
    iVar3 = 0;
    do {
      puVar2 = (undefined1 *)FUN_005adb0f(0x108);
      puVar2 = FUN_004b6a70(puVar2);
      *(undefined1 **)(iVar1 + iVar3 * 4) = puVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  ExceptionList = local_10;
  DAT_0065c2ac = iVar1;
  return iVar1;
}


undefined4 * FUN_00412870(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0065c298;
  if (DAT_0065c298 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x48);
    DAT_0065c298 = puVar1;
    puVar1[2] = 0x20;
    puVar1[1] = 0x50;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0xf;
    *(undefined1 *)(puVar1 + 9) = 0;
    *puVar1 = ConversationManager::vftable;
    puVar1[3] = puVar1[2] + -8;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  return puVar1;
}


void __thiscall FUN_00412900(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    *puVar1 = *param_1;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
    return;
  }
  FUN_00414080(this,puVar1,param_1);
  return;
}


void __fastcall FUN_00412930(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


Node * FUN_00412990(void)

{
  Node *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0852;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = DAT_0065c2c0;
  if (DAT_0065c2c0 == (Node *)0x0) {
    this = (Node *)FUN_005adb0f(0x298);
    local_8 = 0;
    cocos2d::Node::Node(this);
    *(undefined ***)this = SectorEditor::vftable;
    *(undefined4 *)(this + 0x278) = 0;
    *(undefined4 *)(this + 0x27c) = 0;
    *(undefined4 *)(this + 0x280) = 0xffffffff;
    *(undefined2 *)(this + 0x284) = 0;
    *(undefined4 *)(this + 0x288) = 0;
    *(undefined4 *)(this + 0x28c) = 0;
    *(undefined4 *)(this + 0x290) = 0;
    *(undefined4 *)(this + 0x294) = 0;
  }
  ExceptionList = local_10;
  DAT_0065c2c0 = this;
  return this;
}


Node * FUN_00412a50(void)

{
  Node *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0882;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = DAT_0065c278;
  if (DAT_0065c278 == (Node *)0x0) {
    this = (Node *)FUN_005adb0f(0x290);
    local_8 = 0;
    cocos2d::Node::Node(this);
    *(undefined ***)this = RoomEditor::vftable;
    *(undefined2 *)(this + 0x278) = 0;
    *(undefined4 *)(this + 0x27c) = 0;
    *(undefined4 *)(this + 0x280) = 0;
    *(undefined4 *)(this + 0x284) = 0;
    *(undefined4 *)(this + 0x288) = 0;
    *(undefined4 *)(this + 0x28c) = 0;
  }
  ExceptionList = local_10;
  DAT_0065c278 = this;
  return this;
}


undefined4 * FUN_00412b00(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08c5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = DAT_0065c2bc;
  if (DAT_0065c2bc == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x20);
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    local_8 = 2;
    FUN_004ab070(puVar1);
  }
  ExceptionList = local_10;
  DAT_0065c2bc = puVar1;
  return puVar1;
}


void __thiscall FUN_00412ba0(void *this,undefined4 *param_1,void *param_2,void *param_3)

{
  size_t _Size;
  
  if (param_2 != param_3) {
    _Size = *(int *)((int)this + 4) - (int)param_3;
    memmove(param_2,param_3,_Size);
    *(size_t *)((int)this + 4) = _Size + (int)param_2;
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}


void FUN_00412bf0(void)

{
  undefined4 *puVar1;
  
  if (DAT_0065c26c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x9c);
    DAT_0065c26c = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
  }
  return;
}


void FUN_00412d40(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  ExceptionList = local_10;
  return;
}


void FUN_00412da0(void)

{
  undefined4 *puVar1;
  
  if (DAT_0065c27c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x20);
    DAT_0065c27c = puVar1;
    *puVar1 = CommsManager::vftable;
    puVar1[1] = 0x50;
    puVar1[2] = 0x28;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}


undefined4 * FUN_00412df0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0927;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = DAT_0065c274;
  if (DAT_0065c274 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    local_8 = 1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    uVar2 = FUN_004136c0();
    puVar1[3] = uVar2;
    puVar1[9] = 0;
    puVar1[10] = 0xf;
    *(undefined1 *)(puVar1 + 5) = 0;
  }
  ExceptionList = local_10;
  DAT_0065c274 = puVar1;
  return puVar1;
}


void FUN_00412ea0(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0962;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c280 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x98);
    local_8 = 0;
    DAT_0065c280 = FUN_0058f5d0(puVar1);
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_00412f00(void *this,int param_1)

{
  return *(int *)this + param_1 * 4;
}


int __fastcall FUN_00412f10(int *param_1)

{
  return param_1[1] - *param_1 >> 2;
}


byte * __thiscall FUN_00412f20(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  piVar5 = *(int **)this;
  pbVar7 = this;
  piVar10 = piVar5;
  if (*(char *)(piVar5[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    piVar8 = (int *)piVar5[1];
    do {
      pbVar7 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar7 = *(byte **)param_1;
      }
      pbVar6 = (byte *)(piVar8 + 4);
      if (0xf < (uint)piVar8[9]) {
        pbVar6 = (byte *)piVar8[4];
      }
      uVar4 = piVar8[8];
      uVar3 = uVar4;
      if (uVar1 < uVar4) {
        uVar3 = uVar1;
      }
      while (uVar2 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar6 != *(int *)pbVar7) goto LAB_00412f96;
        pbVar6 = pbVar6 + 4;
        pbVar7 = pbVar7 + 4;
        uVar3 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_00412fca:
        uVar3 = 0;
      }
      else {
LAB_00412f96:
        bVar11 = *pbVar6 < *pbVar7;
        if ((*pbVar6 == *pbVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar11 = pbVar6[1] < pbVar7[1], pbVar6[1] == pbVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar11 = pbVar6[2] < pbVar7[2], pbVar6[2] == pbVar7[2] &&
               ((uVar2 == 0xffffffff || (bVar11 = pbVar6[3] < pbVar7[3], pbVar6[3] == pbVar7[3])))))
              ))))))) goto LAB_00412fca;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= uVar4) goto LAB_00412fe0;
LAB_00413077:
        piVar9 = (int *)piVar8[2];
      }
      else {
        if ((int)uVar3 < 0) goto LAB_00413077;
LAB_00412fe0:
        piVar9 = (int *)*piVar8;
        piVar10 = piVar8;
      }
      pbVar7 = param_1;
      piVar8 = piVar9;
    } while (*(char *)((int)piVar9 + 0xd) == '\0');
  }
  if (piVar10 == piVar5) goto LAB_004130a0;
  pbVar6 = (byte *)(piVar10 + 4);
  if (0xf < (uint)piVar10[9]) {
    pbVar6 = (byte *)piVar10[4];
  }
  pbVar7 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar7 = *(byte **)param_1;
  }
  uVar1 = piVar10[8];
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    uVar4 = uVar1;
  }
  while (uVar3 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)pbVar7 != *(int *)pbVar6) goto LAB_0041303d;
    pbVar7 = pbVar7 + 4;
    pbVar6 = pbVar6 + 4;
    uVar4 = uVar3;
  }
  if (uVar3 == 0xfffffffc) {
LAB_0041307f:
    uVar4 = 0;
  }
  else {
LAB_0041303d:
    bVar11 = *pbVar7 < *pbVar6;
    if ((*pbVar7 == *pbVar6) &&
       ((uVar3 == 0xfffffffd ||
        ((bVar11 = pbVar7[1] < pbVar6[1], pbVar7[1] == pbVar6[1] &&
         ((uVar3 == 0xfffffffe ||
          ((bVar11 = pbVar7[2] < pbVar6[2], pbVar7[2] == pbVar6[2] &&
           ((uVar3 == 0xffffffff || (bVar11 = pbVar7[3] < pbVar6[3], pbVar7[3] == pbVar6[3])))))))))
        ))) goto LAB_0041307f;
    uVar4 = -(uint)bVar11 | 1;
  }
  if (uVar4 == 0) {
    if (uVar1 <= *(uint *)(param_1 + 0x10)) goto LAB_00413091;
  }
  else if (-1 < (int)uVar4) {
LAB_00413091:
    return (byte *)(piVar10 + 10);
  }
LAB_004130a0:
  piVar5 = (int *)FUN_00414440(this,pbVar7,&param_1);
  FUN_004144c0(this,&param_1,piVar10,(byte *)(piVar5 + 4),piVar5);
  return param_1 + 0x28;
}


void __thiscall FUN_004130e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    *puVar1 = *param_1;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
    return;
  }
  FUN_004141e0(this,puVar1,param_1);
  return;
}


int __thiscall FUN_00413110(void *this,int param_1)

{
  return *(int *)this + param_1 * 8;
}


int __fastcall FUN_00413120(int *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


int * __thiscall FUN_00413130(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int *piVar3;
  
  piVar3 = DAT_0065b448;
  if (*(char *)(DAT_0065b448[1] + 0xd) == '\0') {
    this = (void *)*param_1;
    piVar2 = (int *)DAT_0065b448[1];
    do {
      if (piVar2[4] < (int)this) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != DAT_0065b448) && (piVar3[4] <= (int)this)) {
      return piVar3 + 5;
    }
  }
  piVar2 = (int *)FUN_00414a90(this,&param_1);
  FUN_00414ac0(this_00,&param_1,piVar3,piVar2 + 4,piVar2);
  return param_1 + 5;
}


undefined4 __fastcall FUN_004131a0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


undefined4 __fastcall FUN_004131b0(undefined4 *param_1)

{
  return *param_1;
}


void __thiscall FUN_004131e0(void *this,undefined4 *param_1)

{
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  *param_1 = this;
  return;
}


int * __thiscall FUN_00413230(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FUN_00401b20(this);
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = iVar1;
    *(int *)((int)this + 8) = iVar2;
    *(int *)((int)this + 0xc) = iVar3;
    *(undefined8 *)((int)this + 0x10) = *(undefined8 *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return this;
}


void __fastcall FUN_00413270(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffff8U)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void FUN_004132d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_004132d0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[9]) {
      pvVar3 = (void *)param_1[4];
      pvVar4 = pvVar3;
      if ((0xfff < param_1[9] + 1U) &&
         (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    param_1[8] = 0;
    param_1[9] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_005adb3f(param_1);
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar2;
  } while( true );
}


void FUN_004133c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_004133c0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[10]) {
      pvVar3 = (void *)param_1[5];
      pvVar4 = pvVar3;
      if ((0xfff < param_1[10] + 1U) &&
         (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    param_1[9] = 0;
    param_1[10] = 0xf;
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_005adb3f(param_1);
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar2;
  } while( true );
}


int * FUN_00413450(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void **ppvVar5;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = DAT_0065b448;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0980;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  piVar7 = param_2;
  if ((param_2 == (int *)*DAT_0065b448) && (param_3 == DAT_0065b448)) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_004133c0((int *)DAT_0065b448[1]);
    DAT_0065b448[1] = (int)piVar2;
    *DAT_0065b448 = (int)piVar2;
    DAT_0065b448[2] = (int)piVar2;
    DAT_0065b44c = 0;
    *param_1 = *DAT_0065b448;
    ExceptionList = local_10;
    return param_1;
  }
  do {
    ExceptionList = ppvVar5;
    if (piVar7 == param_3) {
      *param_1 = (int)piVar7;
      ExceptionList = local_10;
      return param_1;
    }
    param_2 = (int *)piVar7[2];
    if (*(char *)((int)param_2 + 0xd) == '\0') {
      cVar1 = *(char *)(*param_2 + 0xd);
      piVar2 = (int *)*param_2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar6 = (int *)piVar7[1];
      piVar2 = piVar7;
      while ((param_2 = piVar6, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
        cVar1 = *(char *)(param_2[1] + 0xd);
        piVar6 = (int *)param_2[1];
        piVar2 = param_2;
      }
    }
    if (*(char *)(piVar7[2] + 0xd) == '\0') {
      piVar2 = *(int **)piVar7[2];
      cVar1 = *(char *)((int)piVar2 + 0xd);
      while (cVar1 == '\0') {
        piVar2 = (int *)*piVar2;
        cVar1 = *(char *)((int)piVar2 + 0xd);
      }
    }
    else {
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar6 = (int *)piVar7[1];
      piVar2 = piVar7;
      while ((piVar4 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
        cVar1 = *(char *)(piVar4[1] + 0xd);
        piVar6 = (int *)piVar4[1];
        piVar2 = piVar4;
      }
    }
    piVar7 = FUN_004136e0(&DAT_0065b448,piVar7);
    if (0xf < (uint)piVar7[10]) {
      pvVar3 = (void *)piVar7[5];
      pvVar8 = pvVar3;
      if ((0xfff < piVar7[10] + 1U) &&
         (pvVar8 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    piVar7[9] = 0;
    piVar7[10] = 0xf;
    *(undefined1 *)(piVar7 + 5) = 0;
    FUN_005adb3f(piVar7);
    ppvVar5 = ExceptionList;
    piVar7 = param_2;
  } while( true );
}


void __thiscall FUN_00413600(void *this,int *param_1,int *param_2)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *extraout_EAX;
  void *pvVar5;
  int *piVar6;
  
  piVar6 = (int *)param_2[2];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar3 = (int *)*piVar6;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar6 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0xd);
    piVar4 = (int *)param_2[1];
    piVar3 = param_2;
    while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
      cVar1 = *(char *)(piVar6[1] + 0xd);
      piVar4 = (int *)piVar6[1];
      piVar3 = piVar6;
    }
  }
  FUN_00413b10(this,param_2);
  if (0xf < *(uint *)((int)extraout_EAX + 0x24)) {
    pvVar2 = *(void **)((int)extraout_EAX + 0x10);
    pvVar5 = pvVar2;
    if ((0xfff < *(uint *)((int)extraout_EAX + 0x24) + 1) &&
       (pvVar5 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  *(undefined4 *)((int)extraout_EAX + 0x20) = 0;
  *(undefined4 *)((int)extraout_EAX + 0x24) = 0xf;
  *(undefined1 *)((int)extraout_EAX + 0x10) = 0;
  FUN_005adb3f(extraout_EAX);
  *param_1 = (int)piVar6;
  return;
}


void FUN_004136c0(void)

{
  int iVar1;
  
  iVar1 = FUN_005adb0f(0x2c);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}


int * __thiscall FUN_004136e0(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *extraout_EDX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = param_1 + 2;
  piVar5 = (int *)*piVar7;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar5 + 0xd);
    piVar6 = (int *)*piVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0xd);
      piVar5 = piVar6;
      piVar6 = (int *)*piVar6;
    }
  }
  else {
    cVar1 = *(char *)(param_1[1] + 0xd);
    piVar8 = (int *)param_1[1];
    piVar6 = param_1;
    while ((piVar5 = piVar8, cVar1 == '\0' && (piVar6 == (int *)piVar5[2]))) {
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar8 = (int *)piVar5[1];
      piVar6 = piVar5;
    }
  }
  piVar6 = (int *)*param_1;
  piVar8 = (int *)*piVar7;
  if (((*(char *)((int)piVar6 + 0xd) == '\0') && (piVar8 = piVar6, *(char *)(*piVar7 + 0xd) == '\0')
      ) && (piVar8 = (int *)piVar5[2], piVar5 != param_1)) {
    piVar6[1] = (int)piVar5;
    *piVar5 = *param_1;
    piVar6 = piVar5;
    if (piVar5 != (int *)*piVar7) {
      piVar6 = (int *)piVar5[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar8[1] = (int)piVar6;
      }
      *piVar6 = (int)piVar8;
      piVar5[2] = *piVar7;
      *(int **)(*piVar7 + 4) = piVar5;
    }
    if (*(int **)(*(int *)this + 4) == param_1) {
      *(int **)(*(int *)this + 4) = piVar5;
    }
    else {
      piVar7 = (int *)param_1[1];
      if ((int *)*piVar7 == param_1) {
        *piVar7 = (int)piVar5;
      }
      else {
        piVar7[2] = (int)piVar5;
      }
    }
    piVar5[1] = param_1[1];
    iVar2 = piVar5[3];
    *(char *)(piVar5 + 3) = (char)param_1[3];
    *(char *)(param_1 + 3) = (char)iVar2;
  }
  else {
    piVar6 = (int *)param_1[1];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      piVar8[1] = (int)piVar6;
    }
    if (*(int **)(*(int *)this + 4) == param_1) {
      *(int **)(*(int *)this + 4) = piVar8;
    }
    else if ((int *)*piVar6 == param_1) {
      *piVar6 = (int)piVar8;
    }
    else {
      piVar6[2] = (int)piVar8;
    }
    if ((int *)**(int **)this == param_1) {
      piVar7 = piVar6;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar8 + 0xd);
        piVar5 = (int *)*piVar8;
        piVar7 = piVar8;
        while (piVar3 = piVar5, cVar1 == '\0') {
          piVar5 = (int *)*piVar3;
          cVar1 = *(char *)((int)piVar5 + 0xd);
          piVar7 = piVar3;
        }
      }
      **(int **)this = (int)piVar7;
    }
    iVar2 = *(int *)this;
    if (*(int **)(iVar2 + 8) == param_1) {
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        iVar4 = FUN_00413db0((int)piVar8);
        *(int *)(iVar2 + 8) = iVar4;
        piVar6 = extraout_EDX;
      }
      else {
        *(int **)(iVar2 + 8) = piVar6;
      }
    }
  }
  if ((char)param_1[3] == '\x01') {
    if (piVar8 == *(int **)(*(int *)this + 4)) {
      *(undefined1 *)(piVar8 + 3) = 1;
    }
    else {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[3] != '\x01') break;
        piVar5 = (int *)*piVar7;
        if (piVar8 == piVar5) {
          piVar5 = (int *)piVar7[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5 = (int *)piVar7[2];
            *(undefined1 *)(piVar7 + 3) = 0;
            piVar7[2] = *piVar5;
            if (*(char *)(*piVar5 + 0xd) == '\0') {
              *(int **)(*piVar5 + 4) = piVar7;
            }
            piVar5[1] = piVar7[1];
            if (piVar7 == *(int **)(*(int *)this + 4)) {
              *(int **)(*(int *)this + 4) = piVar5;
            }
            else {
              piVar6 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar6) {
                *piVar6 = (int)piVar5;
              }
              else {
                piVar6[2] = (int)piVar5;
              }
            }
            *piVar5 = (int)piVar7;
            piVar7[1] = (int)piVar5;
            piVar5 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                iVar2 = *piVar5;
                *(undefined1 *)(piVar5 + 3) = 0;
                *piVar5 = *(int *)(iVar2 + 8);
                if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
                  *(int **)(*(int *)(iVar2 + 8) + 4) = piVar5;
                }
                *(int *)(iVar2 + 4) = piVar5[1];
                if (piVar5 == *(int **)(*(int *)this + 4)) {
                  *(int *)(*(int *)this + 4) = iVar2;
                  *(int **)(iVar2 + 8) = piVar5;
                  piVar5[1] = iVar2;
                  piVar5 = (int *)piVar7[2];
                }
                else {
                  piVar6 = (int *)piVar5[1];
                  if (piVar5 == (int *)piVar6[2]) {
                    piVar6[2] = iVar2;
                    *(int **)(iVar2 + 8) = piVar5;
                    piVar5[1] = iVar2;
                    piVar5 = (int *)piVar7[2];
                  }
                  else {
                    *piVar6 = iVar2;
                    *(int **)(iVar2 + 8) = piVar5;
                    piVar5[1] = iVar2;
                    piVar5 = (int *)piVar7[2];
                  }
                }
              }
              *(char *)(piVar5 + 3) = (char)piVar7[3];
              *(undefined1 *)(piVar7 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              piVar5 = (int *)piVar7[2];
              piVar7[2] = *piVar5;
              if (*(char *)(*piVar5 + 0xd) == '\0') {
                *(int **)(*piVar5 + 4) = piVar7;
              }
              piVar5[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar5;
                *piVar5 = (int)piVar7;
                piVar7[1] = (int)piVar5;
                *(undefined1 *)(piVar8 + 3) = 1;
              }
              else {
                piVar6 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar6) {
                  *piVar6 = (int)piVar5;
                  *piVar5 = (int)piVar7;
                  piVar7[1] = (int)piVar5;
                  *(undefined1 *)(piVar8 + 3) = 1;
                }
                else {
                  piVar6[2] = (int)piVar5;
                  *piVar5 = (int)piVar7;
                  piVar7[1] = (int)piVar5;
                  *(undefined1 *)(piVar8 + 3) = 1;
                }
              }
              goto LAB_00413aed;
            }
LAB_0041396b:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            iVar2 = *piVar7;
            *(undefined1 *)(piVar7 + 3) = 0;
            *piVar7 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
            }
            *(int *)(iVar2 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar2;
            }
            else {
              piVar5 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar5[2]) {
                piVar5[2] = iVar2;
              }
              else {
                *piVar5 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar7;
            piVar7[1] = iVar2;
            piVar5 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0041396b;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              piVar6 = (int *)piVar5[2];
              *(undefined1 *)(piVar5 + 3) = 0;
              piVar5[2] = *piVar6;
              if (*(char *)(*piVar6 + 0xd) == '\0') {
                *(int **)(*piVar6 + 4) = piVar5;
              }
              piVar6[1] = piVar5[1];
              if (piVar5 == *(int **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar6;
                *piVar6 = (int)piVar5;
                piVar5[1] = (int)piVar6;
                piVar5 = (int *)*piVar7;
              }
              else {
                piVar3 = (int *)piVar5[1];
                if (piVar5 == (int *)*piVar3) {
                  *piVar3 = (int)piVar6;
                  *piVar6 = (int)piVar5;
                  piVar5[1] = (int)piVar6;
                  piVar5 = (int *)*piVar7;
                }
                else {
                  piVar3[2] = (int)piVar6;
                  *piVar6 = (int)piVar5;
                  piVar5[1] = (int)piVar6;
                  piVar5 = (int *)*piVar7;
                }
              }
            }
            *(char *)(piVar5 + 3) = (char)piVar7[3];
            *(undefined1 *)(piVar7 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            iVar2 = *piVar7;
            *piVar7 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
            }
            *(int *)(iVar2 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar2;
              *(int **)(iVar2 + 8) = piVar7;
              piVar7[1] = iVar2;
              *(undefined1 *)(piVar8 + 3) = 1;
            }
            else {
              piVar5 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar5[2]) {
                piVar5[2] = iVar2;
                *(int **)(iVar2 + 8) = piVar7;
                piVar7[1] = iVar2;
                *(undefined1 *)(piVar8 + 3) = 1;
              }
              else {
                *piVar5 = iVar2;
                *(int **)(iVar2 + 8) = piVar7;
                piVar7[1] = iVar2;
                *(undefined1 *)(piVar8 + 3) = 1;
              }
            }
            goto LAB_00413aed;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)this + 4));
      *(undefined1 *)(piVar8 + 3) = 1;
    }
  }
LAB_00413aed:
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return param_1;
}


// WARNING: Variable defined which should be unmapped: param_2

int * __thiscall FUN_00413b10(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int extraout_EDX;
  int iVar7;
  int *piVar8;
  
  piVar5 = (int *)param_2[2];
  piVar3 = param_2 + 2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar5 + 0xd);
    piVar4 = (int *)*piVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0xd);
      piVar5 = piVar4;
      piVar4 = (int *)*piVar4;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0xd);
    piVar8 = (int *)param_2[1];
    piVar4 = param_2;
    while ((piVar5 = piVar8, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar8 = (int *)piVar5[1];
      piVar4 = piVar5;
    }
  }
  piVar4 = (int *)*param_2;
  piVar8 = (int *)*piVar3;
  if (((*(char *)((int)piVar4 + 0xd) == '\0') && (piVar8 = piVar4, *(char *)(*piVar3 + 0xd) == '\0')
      ) && (piVar8 = (int *)piVar5[2], piVar5 != param_2)) {
    piVar4[1] = (int)piVar5;
    *piVar5 = *param_2;
    piVar4 = piVar5;
    if (piVar5 != (int *)*piVar3) {
      piVar4 = (int *)piVar5[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar8[1] = (int)piVar4;
      }
      *piVar4 = (int)piVar8;
      piVar5[2] = *piVar3;
      *(int **)(*piVar3 + 4) = piVar5;
    }
    if (*(int **)(*param_1 + 4) == param_2) {
      *(int **)(*param_1 + 4) = piVar5;
    }
    else {
      piVar3 = (int *)param_2[1];
      if ((int *)*piVar3 == param_2) {
        *piVar3 = (int)piVar5;
      }
      else {
        piVar3[2] = (int)piVar5;
      }
    }
    piVar5[1] = param_2[1];
    iVar7 = piVar5[3];
    *(char *)(piVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)iVar7;
  }
  else {
    piVar4 = (int *)param_2[1];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      piVar8[1] = (int)piVar4;
    }
    if (*(int **)(*param_1 + 4) == param_2) {
      *(int **)(*param_1 + 4) = piVar8;
    }
    else if ((int *)*piVar4 == param_2) {
      *piVar4 = (int)piVar8;
    }
    else {
      piVar4[2] = (int)piVar8;
    }
    piVar3 = (int *)*param_1;
    if ((int *)*piVar3 == param_2) {
      piVar6 = piVar4;
      if ((*(char *)((int)piVar8 + 0xd) == '\0') &&
         (piVar2 = (int *)*piVar8, piVar6 = piVar8, *(char *)(*piVar8 + 0xd) == '\0')) {
        do {
          piVar6 = piVar2;
          piVar2 = (int *)*piVar6;
        } while (*(char *)((int)piVar2 + 0xd) == '\0');
        piVar3 = (int *)*param_1;
      }
      *piVar3 = (int)piVar6;
    }
    iVar7 = *param_1;
    if (*(int **)(iVar7 + 8) == param_2) {
      piVar3 = piVar4;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar3 = (int *)FUN_00413db0((int)piVar8);
        iVar7 = extraout_EDX;
      }
      *(int **)(iVar7 + 8) = piVar3;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar8 != *(int **)(*param_1 + 4)) {
      do {
        piVar3 = piVar4;
        if ((char)piVar8[3] != '\x01') break;
        piVar4 = (int *)*piVar3;
        if (piVar8 == piVar4) {
          piVar4 = (int *)piVar3[2];
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_00413e30(param_1,(int)piVar3);
            piVar4 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(*piVar4 + 0xc) != '\x01') || (*(char *)(piVar4[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar4[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar4 + 0xc) = 1;
                *(undefined1 *)(piVar4 + 3) = 0;
                FUN_00413dd0(param_1,piVar4);
                piVar4 = (int *)piVar3[2];
              }
              *(char *)(piVar4 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              FUN_00413e30(param_1,(int)piVar3);
              break;
            }
LAB_00413d3e:
            *(undefined1 *)(piVar4 + 3) = 0;
          }
        }
        else {
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_00413dd0(param_1,piVar3);
            piVar4 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(piVar4[2] + 0xc) == '\x01') && (*(char *)(*piVar4 + 0xc) == '\x01'))
            goto LAB_00413d3e;
            if (*(char *)(*piVar4 + 0xc) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              *(undefined1 *)(piVar4 + 3) = 0;
              FUN_00413e30(param_1,(int)piVar4);
              piVar4 = (int *)*piVar3;
            }
            *(char *)(piVar4 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar4 + 0xc) = 1;
            FUN_00413dd0(param_1,piVar3);
            break;
          }
        }
        piVar4 = (int *)piVar3[1];
        piVar8 = piVar3;
      } while (piVar3 != *(int **)(*param_1 + 4));
    }
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return piVar5;
}


int __fastcall FUN_00413db0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 8) + 0xd);
  iVar2 = *(int *)(param_1 + 8);
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = *(int *)(iVar3 + 8);
    cVar1 = *(char *)(iVar2 + 0xd);
    param_1 = iVar3;
  }
  return param_1;
}


void __thiscall FUN_00413dd0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)this + 4)) {
    *(int *)(*(int *)this + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


void __thiscall FUN_00413e30(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)this + 4)) {
    *(int **)(*(int *)this + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


uint __fastcall FUN_00413e90(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pbVar3 = *(byte **)param_2;
  }
  pbVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar1 = *(byte **)param_1;
  }
  uVar2 = FUN_004031f0(pbVar1,*(uint *)(param_1 + 0x10),pbVar3,*(uint *)(param_2 + 0x10));
  return uVar2 ^ 1;
}


undefined4 * __fastcall
FUN_00413ec0(undefined4 *param_1,undefined *param_2,char *param_3,char *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (int)param_4 - (int)param_3;
  if (param_4 < param_3) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    *param_1 = param_5;
    return param_1;
  }
  do {
    uVar1 = (*(code *)param_2)((int)*param_3);
    *param_5 = uVar1;
    param_3 = param_3 + 1;
    iVar3 = iVar3 + 1;
    param_5 = param_5 + 1;
  } while (iVar3 != iVar2);
  *param_1 = param_5;
  return param_1;
}


void __fastcall FUN_00413f20(undefined4 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar6 = FUN_004143f0(param_3,param_4,param_2);
  pbVar4 = pbVar6;
  if (pbVar6 != param_4) {
    while (pbVar5 = pbVar4, pbVar4 = pbVar5 + 0x18, pbVar4 != param_4) {
      pbVar7 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar7 = *(byte **)param_2;
      }
      pbVar9 = pbVar4;
      if (0xf < *(uint *)(pbVar5 + 0x2c)) {
        pbVar9 = *(byte **)pbVar4;
      }
      uVar8 = FUN_004031f0(pbVar9,*(uint *)(pbVar5 + 0x28),pbVar7,*(uint *)(param_2 + 0x10));
      if ((char)uVar8 == '\0') {
        if (pbVar6 != pbVar4) {
          FUN_00401b20((int *)pbVar6);
          iVar1 = *(int *)(pbVar5 + 0x1c);
          iVar2 = *(int *)(pbVar5 + 0x20);
          iVar3 = *(int *)(pbVar5 + 0x24);
          *(int *)pbVar6 = *(int *)pbVar4;
          *(int *)(pbVar6 + 4) = iVar1;
          *(int *)(pbVar6 + 8) = iVar2;
          *(int *)(pbVar6 + 0xc) = iVar3;
          iVar1 = *(int *)(pbVar5 + 0x2c);
          *(int *)(pbVar6 + 0x10) = *(int *)(pbVar5 + 0x28);
          *(int *)(pbVar6 + 0x14) = iVar1;
          pbVar5[0x28] = 0;
          pbVar5[0x29] = 0;
          pbVar5[0x2a] = 0;
          pbVar5[0x2b] = 0;
          pbVar5[0x2c] = 0xf;
          pbVar5[0x2d] = 0;
          pbVar5[0x2e] = 0;
          pbVar5[0x2f] = 0;
          *pbVar4 = 0;
        }
        pbVar6 = pbVar6 + 0x18;
      }
    }
  }
  *param_1 = pbVar6;
  return;
}


void __fastcall FUN_00413fc0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  pbVar2 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pbVar2 = *(byte **)param_2;
  }
  FUN_004031f0(pbVar2,*(uint *)(param_2 + 0x10),param_1,(int)pbVar3 - (int)(param_1 + 1));
  return;
}


void __fastcall thunk_FUN_00412930(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
