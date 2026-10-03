#include "../ois_server.exe.h"


void __thiscall FUN_00464110(void *this,char *param_1)

{
  basic_string<> *pbVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  int iVar4;
  char **ppcVar5;
  uint uVar6;
  int *piVar7;
  byte ****ppppbVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffff78;
  basic_string<> *local_60;
  int local_5c;
  undefined4 local_54 [4];
  byte ***local_44;
  byte ***pppbStack_40;
  byte ***pppbStack_3c;
  byte ***pppbStack_38;
  undefined4 local_34;
  int *piStack_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  uVar6 = in_stack_00000018;
  puStack_c = &LAB_005b61a8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
  local_8 = 1;
  uStack_7 = 0;
  ppcVar5 = &param_1;
  if (0xf < in_stack_00000018) {
    ppcVar5 = (char **)param_1;
  }
  uVar2 = FUN_0042eeb0((int)ppcVar5,in_stack_00000014,0,&DAT_005e9238,2);
  if (uVar2 == 0xffffffff) {
    ppcVar5 = &param_1;
    if (0xf < uVar6) {
      ppcVar5 = (char **)param_1;
    }
    uVar2 = FUN_0042eeb0((int)ppcVar5,in_stack_00000014,0,&DAT_005ce010,1);
    if (uVar2 == 0xffffffff) {
      ppcVar5 = &param_1;
      if (0xf < uVar6) {
        ppcVar5 = (char **)param_1;
      }
      uVar2 = FUN_0042eeb0((int)ppcVar5,in_stack_00000014,0,&DAT_005e923c,2);
      if (uVar2 == 0xffffffff) {
        ppcVar5 = &param_1;
        if (0xf < uVar6) {
          ppcVar5 = (char **)param_1;
        }
        uVar2 = FUN_0042eeb0((int)ppcVar5,in_stack_00000014,0,&DAT_005e922c,2);
        if (uVar2 == 0xffffffff) {
          ppcVar5 = &param_1;
          if (0xf < uVar6) {
            ppcVar5 = (char **)param_1;
          }
          uVar2 = FUN_0042eeb0((int)ppcVar5,in_stack_00000014,0,&DAT_005e9230,1);
          if (uVar2 == 0xffffffff) {
            ppcVar5 = &param_1;
            if (0xf < uVar6) {
              ppcVar5 = (char **)param_1;
            }
            uVar2 = FUN_0042eeb0((int)ppcVar5,in_stack_00000014,0,&DAT_005e9234,1);
            if (uVar2 == 0xffffffff) {
              ppcVar5 = &param_1;
              if (0xf < uVar6) {
                ppcVar5 = (char **)param_1;
              }
              if (*(char *)ppcVar5 == '!') {
                piVar7 = (int *)FUN_004033e0(&param_1,(undefined1 *)&local_44,1,
                                             in_stack_00000014 - 1);
                FUN_00413230(&param_1,piVar7);
                if (&DAT_0000000f < piStack_30) {
                  ppppbVar8 = (byte ****)local_44;
                  if (((undefined1 *)0xfff < (undefined1 *)((int)piStack_30 + 1)) &&
                     (ppppbVar8 = (byte ****)local_44[-1],
                     0x1f < (uint)((int)local_44 + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_005adb3f(ppppbVar8);
                }
                FUN_004024e0(&stack0xffffff78,&param_1);
                FUN_00592d70(&local_60,':',(undefined4 *)in_stack_ffffff78);
                local_8 = 8;
                if (1 < (uint)((local_5c - (int)local_60) / 0x18)) {
                  pbVar3 = local_60 + 0x18;
                  if ((byte ****)0xf < *(byte *****)(local_60 + 0x2c)) {
                    pbVar3 = *(basic_string<> **)pbVar3;
                  }
                  iVar4 = atoi((char *)pbVar3);
                  *(int *)((int)this + 0xb4) = iVar4;
                }
                FUN_004024e0(&stack0xffffff78,(undefined4 *)local_60);
                iVar4 = FUN_004dba70(in_stack_ffffff78);
                piVar7 = (int *)FUN_004da1b0((undefined *)local_54,iVar4);
                local_8 = 9;
                FUN_004175d0((void *)((int)this + 0xd0),piVar7);
                local_8 = 10;
                if (piStack_30 != (int *)0x0) {
                  (**(code **)(*piStack_30 + 0x10))();
                }
                *(undefined1 *)((int)this + 0xb1) = 1;
                local_8 = 1;
                FUN_004025a0((int *)&local_60);
                pppppbVar9 = local_2c;
                goto LAB_00464763;
              }
              FUN_004024e0(&stack0xffffff78,&param_1);
              FUN_005571f0(this,in_stack_ffffff78);
            }
            else {
              FUN_004024e0(&stack0xffffff78,&param_1);
              FUN_00592d70(&local_60,'<',(undefined4 *)in_stack_ffffff78);
              local_8 = 7;
              std::basic_string<>::operator=((basic_string<> *)local_2c,local_60);
              pbVar3 = local_60 + 0x18;
              if (0xf < *(uint *)(local_60 + 0x2c)) {
                pbVar3 = *(basic_string<> **)pbVar3;
              }
              iVar4 = atoi((char *)pbVar3);
              *(int *)((int)this + 0x84) = iVar4;
              *(undefined4 *)((int)this + 0x80) = 2;
              local_8 = 1;
              FUN_004025a0((int *)&local_60);
            }
          }
          else {
            FUN_004024e0(&stack0xffffff78,&param_1);
            FUN_00592d70(&local_60,'>',(undefined4 *)in_stack_ffffff78);
            local_8 = 6;
            std::basic_string<>::operator=((basic_string<> *)local_2c,local_60);
            pbVar3 = local_60 + 0x18;
            if (0xf < *(uint *)(local_60 + 0x2c)) {
              pbVar3 = *(basic_string<> **)pbVar3;
            }
            iVar4 = atoi((char *)pbVar3);
            *(int *)((int)this + 0x84) = iVar4;
            *(undefined4 *)((int)this + 0x80) = 3;
            local_8 = 1;
            FUN_004025a0((int *)&local_60);
          }
        }
        else {
          FUN_004024e0(&stack0xffffff78,&param_1);
          FUN_00592d70(&local_60,'<',(undefined4 *)in_stack_ffffff78);
          _local_8 = CONCAT31(uStack_7,5);
          piVar7 = (int *)FUN_004033e0(local_60 + 0x18,(undefined1 *)&local_44,1,
                                       (int)*(byte *****)(local_60 + 0x28) - 1);
          FUN_00413230(local_60 + 0x18,piVar7);
          if (&DAT_0000000f < piStack_30) {
            ppppbVar8 = (byte ****)local_44;
            if (((undefined1 *)0xfff < (undefined1 *)((int)piStack_30 + 1)) &&
               (ppppbVar8 = (byte ****)local_44[-1],
               0x1f < (uint)((int)local_44 + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppbVar8);
          }
          if ((basic_string<> *)local_2c != local_60) {
            pbVar3 = local_60;
            if ((byte ****)0xf < *(byte *****)(local_60 + 0x14)) {
              pbVar3 = *(basic_string<> **)local_60;
            }
            FUN_00402690(local_2c,pbVar3,(uint)*(byte *****)(local_60 + 0x10));
          }
          pbVar3 = local_60 + 0x18;
          if ((byte ****)0xf < *(byte *****)(local_60 + 0x2c)) {
            pbVar3 = *(basic_string<> **)pbVar3;
          }
          iVar4 = atoi((char *)pbVar3);
          *(int *)((int)this + 0x84) = iVar4;
          *(undefined4 *)((int)this + 0x80) = 4;
          local_8 = 1;
          FUN_004025a0((int *)&local_60);
        }
      }
      else {
        FUN_004024e0(&stack0xffffff78,&param_1);
        FUN_00592d70(&local_60,'>',(undefined4 *)in_stack_ffffff78);
        _local_8 = CONCAT31(uStack_7,4);
        piVar7 = (int *)FUN_004033e0(local_60 + 0x18,(undefined1 *)&local_44,1,
                                     (int)*(byte *****)(local_60 + 0x28) - 1);
        FUN_00413230(local_60 + 0x18,piVar7);
        if (&DAT_0000000f < piStack_30) {
          ppppbVar8 = (byte ****)local_44;
          if (((undefined1 *)0xfff < (undefined1 *)((int)piStack_30 + 1)) &&
             (ppppbVar8 = (byte ****)local_44[-1],
             0x1f < (uint)((int)local_44 + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(ppppbVar8);
        }
        if ((basic_string<> *)local_2c != local_60) {
          pbVar3 = local_60;
          if ((byte ****)0xf < *(byte *****)(local_60 + 0x14)) {
            pbVar3 = *(basic_string<> **)local_60;
          }
          FUN_00402690(local_2c,pbVar3,(uint)*(byte *****)(local_60 + 0x10));
        }
        pbVar3 = local_60 + 0x18;
        if ((byte ****)0xf < *(byte *****)(local_60 + 0x2c)) {
          pbVar3 = *(basic_string<> **)pbVar3;
        }
        iVar4 = atoi((char *)pbVar3);
        *(int *)((int)this + 0x84) = iVar4;
        *(undefined4 *)((int)this + 0x80) = 5;
        local_8 = 1;
        FUN_004025a0((int *)&local_60);
      }
    }
    else {
      FUN_004024e0(&stack0xffffff78,&param_1);
      FUN_00592d70(&local_60,'=',(undefined4 *)in_stack_ffffff78);
      local_8 = 3;
      if ((basic_string<> *)local_2c != local_60) {
        pbVar3 = local_60;
        if ((byte ****)0xf < *(byte *****)(local_60 + 0x14)) {
          pbVar3 = *(basic_string<> **)local_60;
        }
        FUN_00402690(local_2c,pbVar3,(uint)*(byte *****)(local_60 + 0x10));
      }
      pbVar3 = local_60 + 0x18;
      if ((byte ****)0xf < *(byte *****)(local_60 + 0x2c)) {
        pbVar3 = *(basic_string<> **)pbVar3;
      }
      iVar4 = atoi((char *)pbVar3);
      *(int *)((int)this + 0x84) = iVar4;
      *(undefined4 *)((int)this + 0x80) = 0;
      local_8 = 1;
      FUN_004025a0((int *)&local_60);
    }
  }
  else {
    FUN_004024e0(&stack0xffffff78,&param_1);
    FUN_00592d70(&local_60,'!',(undefined4 *)in_stack_ffffff78);
    _local_8 = CONCAT31(uStack_7,2);
    pbVar3 = local_60 + 0x18;
    local_34 = 0;
    piStack_30 = (int *)&DAT_0000000f;
    local_44 = (byte ***)((uint)local_44 & 0xffffff00);
    if (*(byte *****)(local_60 + 0x28) == (byte ****)0x0) {
                    // WARNING: Subroutine does not return
      FUN_004036c0();
    }
    if ((byte ****)0xf < *(byte *****)(local_60 + 0x2c)) {
      pbVar3 = *(basic_string<> **)pbVar3;
    }
    FUN_00402690(&local_44,pbVar3 + 1,(int)*(byte *****)(local_60 + 0x28) - 1);
    pbVar1 = local_60;
    pbVar3 = local_60 + 0x18;
    if (pbVar3 == (basic_string<> *)&local_44) {
      if (&DAT_0000000f < piStack_30) {
        ppppbVar8 = (byte ****)local_44;
        if (((undefined1 *)0xfff < (undefined1 *)((int)piStack_30 + 1)) &&
           (ppppbVar8 = (byte ****)local_44[-1],
           0x1f < (uint)((int)local_44 + (-4 - (int)ppppbVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar8);
      }
    }
    else {
      FUN_00401b20((int *)pbVar3);
      *(byte ****)pbVar3 = local_44;
      *(byte ****)(pbVar1 + 0x1c) = pppbStack_40;
      *(byte ****)(pbVar1 + 0x20) = pppbStack_3c;
      *(byte ****)(pbVar1 + 0x24) = pppbStack_38;
      *(ulonglong *)(pbVar1 + 0x28) = CONCAT44(piStack_30,local_34);
    }
    if ((basic_string<> *)local_2c != local_60) {
      pbVar3 = local_60;
      if ((byte ****)0xf < *(byte *****)(local_60 + 0x14)) {
        pbVar3 = *(basic_string<> **)local_60;
      }
      FUN_00402690(local_2c,pbVar3,(uint)*(byte *****)(local_60 + 0x10));
    }
    pbVar3 = local_60 + 0x18;
    if ((byte ****)0xf < *(byte *****)(local_60 + 0x2c)) {
      pbVar3 = *(basic_string<> **)pbVar3;
    }
    iVar4 = atoi((char *)pbVar3);
    *(int *)((int)this + 0x84) = iVar4;
    *(undefined4 *)((int)this + 0x80) = 1;
    local_8 = 1;
    FUN_004025a0((int *)&local_60);
  }
  pppppbVar9 = local_2c;
  if (0xf < local_18) {
    pppppbVar9 = (byte *****)local_2c[0];
  }
LAB_00464763:
  uVar6 = FUN_004031f0((byte *)pppppbVar9,local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar6 == '\0') {
    FUN_004024e0(&stack0xffffff78,local_2c);
    iVar4 = FUN_004db9e0(in_stack_ffffff78);
    piVar7 = FUN_004eb9e0(local_54,iVar4);
    local_8 = 0xb;
    FUN_004175d0((void *)((int)this + 0x58),piVar7);
    local_8 = 0xc;
    if (piStack_30 != (int *)0x0) {
      (**(code **)(*piStack_30 + 0x10))();
    }
  }
  if (0xf < local_18) {
    pppppbVar9 = (byte *****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pppppbVar9 = (byte *****)local_2c[0][-1],
       (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppbVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppbVar9);
  }
  if (0xf < in_stack_00000018) {
    pcVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pcVar10 = *(char **)(param_1 + -4), (char *)0x1f < param_1 + (-4 - (int)pcVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pcVar10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00464850(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *_Str;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffff94;
  undefined4 *local_4c [4];
  undefined local_3c [36];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b61f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppuVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppuVar4 = (undefined4 **)param_1;
  }
  uVar1 = FUN_0042eeb0((int)ppuVar4,in_stack_00000014,0,&DAT_005e96c0,1);
  if (uVar1 == 0xffffffff) {
    FUN_004024e0(&stack0xffffff94,&param_1);
    iVar2 = FUN_004dbb00(in_stack_ffffff94);
    *(int *)((int)this + 0x15c) = iVar2;
    FUN_004024e0(&stack0xffffff94,&param_1);
    iVar2 = FUN_004dbb00(in_stack_ffffff94);
    piVar3 = (int *)FUN_004ecb20(local_3c,iVar2);
    local_8._0_1_ = 4;
    FUN_004175d0((void *)((int)this + 0x130),piVar3);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  else {
    FUN_004024e0(&stack0xffffff94,&param_1);
    FUN_00592d70(local_4c,':',(undefined4 *)in_stack_ffffff94);
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff94,local_4c[0]);
    iVar2 = FUN_004dbb00(in_stack_ffffff94);
    *(int *)((int)this + 0x15c) = iVar2;
    FUN_004024e0(&stack0xffffff94,local_4c[0]);
    iVar2 = FUN_004dbb00(in_stack_ffffff94);
    piVar3 = (int *)FUN_004ecb20(local_3c,iVar2);
    local_8._0_1_ = 2;
    FUN_004175d0((void *)((int)this + 0x130),piVar3);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    _Str = (char *)(local_4c[0] + 6);
    if (0xf < (uint)local_4c[0][0xb]) {
      _Str = *(char **)_Str;
    }
    iVar2 = atoi(_Str);
    *(int *)((int)this + 0x158) = iVar2;
    FUN_004025a0((int *)local_4c);
  }
  *(undefined1 *)((int)this + 0xb0) = 1;
  if (0xf < in_stack_00000018) {
    puVar5 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar5 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00464a00(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte ***pppbVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  basic_string<> *pbVar8;
  byte **ppbVar9;
  byte ****ppppbVar10;
  byte *pbVar11;
  void *pvVar12;
  byte *pbVar13;
  int iVar14;
  basic_string<> *pbVar15;
  double dVar16;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  undefined4 *puVar17;
  byte *in_stack_fffffdcc;
  int in_stack_fffffdd4;
  int iVar18;
  byte ****ppppbVar19;
  basic_string<> *local_208 [3];
  char *local_1fc;
  int local_1f8;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  undefined1 local_1d4;
  basic_string<> local_1d0 [52];
  int local_19c;
  float local_198;
  undefined1 local_164 [36];
  int *local_140;
  undefined1 local_13c;
  undefined1 local_f4;
  undefined1 local_ec [40];
  int local_c4;
  int local_c0;
  undefined4 *local_8c;
  int local_88;
  int local_78;
  undefined4 local_64 [9];
  int *local_40;
  undefined4 local_3c [4];
  byte ***local_2c [4];
  uint local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b629c;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004024e0(&stack0xfffffdcc,&stack0x0000001c);
  puVar17 = (undefined4 *)0x464a56;
  FUN_00592d70(&local_1fc,',',(undefined4 *)in_stack_fffffdcc);
  local_8._0_1_ = 2;
  FUN_0043d780((int)&local_1ec);
  local_8 = CONCAT31(local_8._1_3_,3);
  ppbVar9 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar9 = (byte **)param_1;
  }
  uVar5 = FUN_004031f0((byte *)ppbVar9,in_stack_00000014,(byte *)"cimage",6);
  if ((char)uVar5 != '\0') {
    local_1d4 = 1;
    FUN_00402690(&param_1,"image",5);
  }
  FUN_004024e0(local_2c,&param_1);
  pppbVar3 = local_2c[0];
  iVar14 = 0;
  do {
    pbVar11 = (&PTR_DAT_005dff08)[iVar14];
    pbVar13 = pbVar11;
    do {
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar1 != 0);
    ppppbVar19 = local_2c;
    if (&DAT_0000000f < local_18) {
      ppppbVar19 = (byte ****)pppbVar3;
    }
    iVar18 = 0x464add;
    uVar5 = FUN_004031f0((byte *)ppppbVar19,local_1c,pbVar11,(int)pbVar13 - (int)(pbVar11 + 1));
    if ((char)uVar5 != '\0') {
      if (&DAT_0000000f < local_18) {
        ppppbVar19 = (byte ****)pppbVar3;
        if (((undefined1 *)0xfff < (undefined1 *)((int)local_18 + 1)) &&
           (ppppbVar19 = (byte ****)pppbVar3[-1],
           (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar19)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        iVar18 = 0x464b55;
        FUN_005adb3f(ppppbVar19);
      }
      goto LAB_00464b58;
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x27);
  if (&DAT_0000000f < local_18) {
    ppppbVar19 = (byte ****)pppbVar3;
    if (((undefined1 *)0xfff < (undefined1 *)((int)local_18 + 1)) &&
       (ppppbVar19 = (byte ****)pppbVar3[-1],
       (byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar19)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    iVar18 = 0x464b1c;
    FUN_005adb3f(ppppbVar19);
  }
  iVar14 = 0;
LAB_00464b58:
  pcVar6 = local_1fc;
  if (0xf < *(uint *)(local_1fc + 0x14)) {
    pcVar6 = *(char **)local_1fc;
  }
  local_1ec = iVar14;
  local_1e4 = atoi(pcVar6);
  pcVar6 = local_1fc + 0x18;
  if (0xf < *(uint *)(local_1fc + 0x2c)) {
    pcVar6 = *(char **)pcVar6;
  }
  local_1e0 = atoi(pcVar6);
  pcVar6 = local_1fc + 0x30;
  if (0xf < *(uint *)(local_1fc + 0x44)) {
    pcVar6 = *(char **)pcVar6;
  }
  local_1dc = atoi(pcVar6);
  iVar14 = 2;
  if (local_1ec == 8) {
    pcVar6 = local_1fc + 0x48;
    if (0xf < *(uint *)(local_1fc + 0x5c)) {
      pcVar6 = *(char **)pcVar6;
    }
    ppppbVar19 = (byte ****)0x464bdc;
    local_1d8 = atoi(pcVar6);
    FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
    FUN_00464850(&local_1ec,(undefined4 *)in_stack_fffffdcc);
    if (5 < (uint)((local_1f8 - (int)local_1fc) / 0x18)) {
LAB_0046556c:
      FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
      FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
      iVar14 = 5;
      goto LAB_00465d37;
    }
  }
  else {
    if (local_1ec == 0xd) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464c4d;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0xc) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464c80;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0x14) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464cb3;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0xb) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464ce6;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 10) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464d19;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 9) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464d4c;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0xf) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464d7f;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0x12) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464db2;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0x11) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464de5;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0x10) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464e18;
      local_1d8 = atoi(pcVar6);
      local_13c = 1;
      iVar14 = 3;
      goto LAB_00465d37;
    }
    if (local_1ec == 0xe) {
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x464e4b;
      local_1d8 = atoi(pcVar6);
      if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 5) {
LAB_004659b6:
        iVar14 = 3;
        goto LAB_00465d37;
      }
    }
    else {
      if (local_1ec == 7) {
        pcVar6 = local_1fc + 0x48;
        if (0xf < *(uint *)(local_1fc + 0x5c)) {
          pcVar6 = *(char **)pcVar6;
        }
        local_1d8 = atoi(pcVar6);
        ppppbVar19 = (byte ****)0x464ebf;
        std::basic_string<>::operator=(local_1d0,(basic_string<> *)(local_1fc + 0x60));
        iVar14 = 4;
        if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
        FUN_004024e0(local_2c,(undefined4 *)(local_1fc + 0x78));
        local_8._0_1_ = 4;
        ppppbVar10 = local_2c;
        if (&DAT_0000000f < local_18) {
          ppppbVar10 = (byte ****)local_2c[0];
        }
        ppppbVar19 = (byte ****)&DAT_005e96c0;
        iVar18 = 0;
        in_stack_fffffdd4 = 0x464f18;
        uVar5 = FUN_0042eeb0((int)ppppbVar10,local_1c,0,&DAT_005e96c0,1);
        if (uVar5 == 0xffffffff) {
          FUN_004024e0(&stack0xfffffdcc,local_2c);
          cVar4 = FUN_004dbb90(in_stack_fffffdcc);
          local_8 = CONCAT31(local_8._1_3_,3);
          if (&DAT_0000000f < local_18) {
            ppppbVar19 = (byte ****)local_2c[0];
            if (((undefined1 *)0xfff < (undefined1 *)((int)local_18 + 1)) &&
               (ppppbVar19 = (byte ****)local_2c[0][-1],
               (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar19)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            goto LAB_00464fd0;
          }
        }
        else {
          FUN_004024e0(&stack0xfffffdcc,local_2c);
          FUN_00592d70(local_208,':',(undefined4 *)in_stack_fffffdcc);
          local_8._0_1_ = 5;
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)local_208[0]);
          cVar4 = FUN_004dbb90(in_stack_fffffdcc);
          FUN_004025a0((int *)local_208);
          local_8 = CONCAT31(local_8._1_3_,3);
          if (&DAT_0000000f < local_18) {
            ppppbVar19 = (byte ****)local_2c[0];
            if (((undefined1 *)0xfff < (undefined1 *)((int)local_18 + 1)) &&
               (ppppbVar19 = (byte ****)local_2c[0][-1],
               (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)local_2c[0][-1])))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
LAB_00464fd0:
            iVar18 = 0x464fd7;
            FUN_005adb3f(ppppbVar19);
          }
        }
        FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
        if (cVar4 == '\0') {
          FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
        }
        else {
          FUN_00464850(&local_1ec,(undefined4 *)in_stack_fffffdcc);
        }
        iVar14 = 5;
        if (8 < (uint)((local_1f8 - (int)local_1fc) / 0x18)) {
          pcVar6 = local_1fc + 0xa8;
          if (0xf < *(uint *)(local_1fc + 0xbc)) {
            pcVar6 = *(char **)pcVar6;
          }
          local_19c = atoi(pcVar6);
          pcVar6 = local_1fc + 0xc0;
          if (0xf < *(uint *)(local_1fc + 0xd4)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x46506b;
          dVar16 = atof(pcVar6);
          local_198 = (float)dVar16;
          iVar14 = 8;
        }
        goto LAB_00465d37;
      }
      if (local_1ec != 0x13) {
        if (local_1ec == 0x15) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x465113;
          local_1d8 = atoi(pcVar6);
          local_13c = 1;
          iVar14 = 3;
          goto LAB_00465d37;
        }
        if (local_1ec == 0x17) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x465146;
          local_1d8 = atoi(pcVar6);
          local_13c = 1;
          iVar14 = 3;
          goto LAB_00465d37;
        }
        if (local_1ec == 0x16) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x465179;
          local_1d8 = atoi(pcVar6);
          local_13c = 1;
          iVar14 = 3;
          goto LAB_00465d37;
        }
        if ((local_1ec == 5) || (local_1ec == 6)) {
          local_1d8 = 0xc;
          std::basic_string<>::operator=(local_1d0,(basic_string<> *)(local_1fc + 0x48));
          local_1c = 0;
          local_18 = (int *)&DAT_0000000f;
          local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
          local_8._0_1_ = 6;
          pbVar15 = (basic_string<> *)(local_1fc + 0x60);
          pbVar8 = pbVar15;
          if (0xf < *(uint *)(local_1fc + 0x74)) {
            pbVar8 = *(basic_string<> **)pbVar15;
          }
          iVar18 = 0;
          in_stack_fffffdd4 = 0x465b7b;
          uVar5 = FUN_0042eeb0((int)pbVar8,*(uint *)(local_1fc + 0x70),0,&DAT_005e96c0,1);
          if (uVar5 == 0xffffffff) {
            std::basic_string<>::operator=((basic_string<> *)local_2c,pbVar15);
          }
          else {
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)pbVar15);
            FUN_00592d70(local_208,':',(undefined4 *)in_stack_fffffdcc);
            local_8._0_1_ = 7;
            std::basic_string<>::operator=((basic_string<> *)local_2c,local_208[0]);
            pbVar8 = local_208[0] + 0x18;
            if (0xf < *(uint *)(local_208[0] + 0x2c)) {
              pbVar8 = *(basic_string<> **)pbVar8;
            }
            local_c0 = atoi((char *)pbVar8);
            local_8._0_1_ = 6;
            FUN_004025a0((int *)local_208);
          }
          iVar14 = 4;
          FUN_004024e0(&stack0xfffffdcc,local_2c);
          local_c4 = FUN_004eb4d0(in_stack_fffffdcc);
          piVar7 = FUN_004ea270(local_64,local_c4);
          local_8._0_1_ = 8;
          ppppbVar19 = (byte ****)0x465c22;
          FUN_00430330(local_ec,piVar7);
          local_8._0_1_ = 9;
          if (local_40 != (int *)0x0) {
            ppppbVar19 = (byte ****)0x465c3e;
            (**(code **)(*local_40 + 0x10))();
          }
          puVar17 = FUN_0052b380(local_64,local_c4);
          iVar2 = puVar17[9];
          local_8._0_1_ = 10;
          if (local_40 != (int *)0x0) {
            ppppbVar19 = (byte ****)0x465c6b;
            (**(code **)(*local_40 + 0x10))();
          }
          local_8._0_1_ = 6;
          if (iVar2 != 0) {
            piVar7 = FUN_0052b380(local_64,local_c4);
            local_8._0_1_ = 0xb;
            ppppbVar19 = (byte ****)0x465c91;
            FUN_004175d0(local_ec,piVar7);
            local_8._0_1_ = 0xc;
            if (local_40 != (int *)0x0) {
              ppppbVar19 = (byte ****)0x465cad;
              (**(code **)(*local_40 + 0x10))();
            }
            local_f4 = 1;
          }
          local_8._0_1_ = 6;
          if (5 < (uint)((local_1f8 - (int)local_1fc) / 0x18)) {
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
            FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
            iVar14 = 5;
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          if (&DAT_0000000f < local_18) {
            ppppbVar19 = (byte ****)local_2c[0];
            if (((undefined1 *)0xfff < (undefined1 *)((int)local_18 + 1)) &&
               (ppppbVar19 = (byte ****)local_2c[0][-1],
               (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar19)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            iVar18 = 0x465d34;
            FUN_005adb3f(ppppbVar19);
          }
          goto LAB_00465d37;
        }
        if (local_1ec == 0) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          local_1d8 = atoi(pcVar6);
          std::basic_string<>::operator=(local_1d0,(basic_string<> *)(local_1fc + 0x60));
          FUN_004024e0(&stack0xfffffdc8,(undefined4 *)local_1d0);
          piVar7 = (int *)FUN_00592a70((undefined1 *)local_2c,'}',puVar17);
          ppppbVar19 = (byte ****)0x46520d;
          FUN_00413230(local_1d0,piVar7);
          if (&DAT_0000000f < local_18) {
            ppppbVar19 = (byte ****)local_2c[0];
            if (((undefined1 *)0xfff < (undefined1 *)((int)local_18 + 1)) &&
               (ppppbVar19 = (byte ****)local_2c[0][-1],
               (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar19)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            iVar18 = 0x465240;
            FUN_005adb3f(ppppbVar19);
          }
          iVar14 = 4;
          iVar2 = (local_1f8 - (int)local_1fc) / 0x18;
          if (iVar2 == 7) {
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
            local_1e8 = FUN_004db9e0(in_stack_fffffdcc);
            piVar7 = FUN_004eb9e0(local_3c,local_1e8);
            local_8._0_1_ = 0xd;
            ppppbVar19 = (byte ****)0x4652a6;
            FUN_004175d0(local_164,piVar7);
            local_8._0_1_ = 0xe;
            if (local_18 != (int *)0x0) {
              ppppbVar19 = (byte ****)0x4652c2;
              (**(code **)(*local_18 + 0x10))();
            }
            local_8 = CONCAT31(local_8._1_3_,3);
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x90));
            FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
            iVar14 = 6;
          }
          else if (iVar2 == 6) {
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
            local_1e8 = FUN_004db9e0(in_stack_fffffdcc);
            piVar7 = FUN_004eb9e0(local_3c,local_1e8);
            local_8._0_1_ = 0xf;
            ppppbVar19 = (byte ****)0x46532f;
            FUN_004175d0(local_164,piVar7);
            local_8._0_1_ = 0x10;
            if (local_18 != (int *)0x0) {
              ppppbVar19 = (byte ****)0x46534b;
              (**(code **)(*local_18 + 0x10))();
            }
            local_8 = CONCAT31(local_8._1_3_,3);
            iVar14 = 5;
          }
          else {
            local_8._0_1_ = 0x11;
            if (local_140 != (int *)0x0) {
              ppppbVar19 = (byte ****)0x46537b;
              (**(code **)(*local_140 + 0x10))();
              local_140 = (int *)0x0;
            }
            local_8 = CONCAT31(local_8._1_3_,3);
          }
          goto LAB_00465d37;
        }
        if (local_1ec == 0x19) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x4653ab;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          FUN_00464850(&local_1ec,(undefined4 *)in_stack_fffffdcc);
          iVar14 = 4;
          if (5 < (uint)((local_1f8 - (int)local_1fc) / 0x18)) {
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
            FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
            iVar14 = 5;
          }
          goto LAB_00465d37;
        }
        if (local_1ec == 0x1a) {
          local_1d8 = 0xc;
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x48));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          pcVar6 = local_1fc + 0x60;
          if (0xf < *(uint *)(local_1fc + 0x74)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x46547c;
          local_78 = atoi(pcVar6);
          iVar14 = 4;
          local_13c = 1;
          if (5 < (uint)((local_1f8 - (int)local_1fc) / 0x18)) {
            FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x78));
            FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
            iVar14 = 5;
          }
          goto LAB_00465d37;
        }
        if (local_1ec == 0x1b) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x4654f9;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          iVar14 = 4;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
          goto LAB_0046556c;
        }
        if (local_1ec == 0x1c) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x4655ac;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          iVar14 = 4;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
          iVar14 = 5;
          local_1fc = local_1fc + 0x78;
        }
        else if (local_1ec == 0x1d) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x465646;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          iVar14 = 4;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
          iVar14 = 5;
          local_1fc = local_1fc + 0x78;
        }
        else if (local_1ec == 0x21) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x4656e0;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          iVar14 = 4;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
          iVar14 = 5;
          local_1fc = local_1fc + 0x78;
        }
        else if (local_1ec == 0x25) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x46577a;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          iVar14 = 4;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
          iVar14 = 5;
          local_1fc = local_1fc + 0x78;
        }
        else if (local_1ec == 0x22) {
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          ppppbVar19 = (byte ****)0x465814;
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          iVar14 = 4;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
          iVar14 = 5;
          local_1fc = local_1fc + 0x78;
        }
        else {
          if (local_1ec != 0x1e) {
            if (local_1ec != 0x1f) {
              if (local_1ec == 0x26) {
                pcVar6 = local_1fc + 0x48;
                if (0xf < *(uint *)(local_1fc + 0x5c)) {
                  pcVar6 = *(char **)pcVar6;
                }
                ppppbVar19 = (byte ****)0x46597a;
                local_1d8 = atoi(pcVar6);
                local_13c = 1;
                iVar14 = 3;
                goto LAB_00465d37;
              }
              if (local_1ec != 0x20) {
                if ((local_1ec == 0x23) || (local_1ec == 0x24)) {
                  pcVar6 = local_1fc + 0x48;
                  if (0xf < *(uint *)(local_1fc + 0x5c)) {
                    pcVar6 = *(char **)pcVar6;
                  }
                  ppppbVar19 = (byte ****)0x4659de;
                  local_1d8 = atoi(pcVar6);
                  iVar14 = 3;
                  local_13c = 1;
                  goto LAB_00465d37;
                }
                if (local_1ec == 3) {
                  pcVar6 = local_1fc + 0x48;
                  if (0xf < *(uint *)(local_1fc + 0x5c)) {
                    pcVar6 = *(char **)pcVar6;
                  }
                  local_1d8 = atoi(pcVar6);
                  FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
                  local_1e8 = FUN_004db9e0(in_stack_fffffdcc);
                  piVar7 = FUN_004eb9e0(local_3c,local_1e8);
                  local_8._0_1_ = 0x12;
                  ppppbVar19 = (byte ****)0x465a53;
                  FUN_004175d0(local_164,piVar7);
                  local_8._0_1_ = 0x13;
                  if (local_18 != (int *)0x0) {
                    ppppbVar19 = (byte ****)0x465a6f;
                    (**(code **)(*local_18 + 0x10))();
                  }
                  local_8 = CONCAT31(local_8._1_3_,3);
                  goto LAB_00465d37;
                }
                pcVar6 = local_1fc + 0x48;
                if (0xf < *(uint *)(local_1fc + 0x5c)) {
                  pcVar6 = *(char **)pcVar6;
                }
                local_1d8 = atoi(pcVar6);
                FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
                local_1e8 = FUN_004db9e0(in_stack_fffffdcc);
                piVar7 = FUN_004eb9e0(local_3c,local_1e8);
                local_8._0_1_ = 0x14;
                ppppbVar19 = (byte ****)0x465ac8;
                FUN_004175d0(local_164,piVar7);
                local_8._0_1_ = 0x15;
                if (local_18 != (int *)0x0) {
                  ppppbVar19 = (byte ****)0x465ae4;
                  (**(code **)(*local_18 + 0x10))();
                }
                local_8 = CONCAT31(local_8._1_3_,3);
                iVar14 = 4;
                if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 6) goto LAB_00465d37;
                iVar14 = 5;
                local_1fc = local_1fc + 0x78;
                goto LAB_0046593e;
              }
            }
            pcVar6 = local_1fc + 0x48;
            if (0xf < *(uint *)(local_1fc + 0x5c)) {
              pcVar6 = *(char **)pcVar6;
            }
            ppppbVar19 = (byte ****)0x4659ad;
            local_1d8 = atoi(pcVar6);
            goto LAB_004659b6;
          }
          pcVar6 = local_1fc + 0x48;
          if (0xf < *(uint *)(local_1fc + 0x5c)) {
            pcVar6 = *(char **)pcVar6;
          }
          local_1d8 = atoi(pcVar6);
          FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
          local_88 = FUN_004dcba0(in_stack_fffffdcc);
          local_8c = FUN_004dccc0(local_88);
          ppppbVar19 = (byte ****)0x4658f8;
          std::basic_string<>::operator=(local_1d0,(basic_string<> *)(local_1fc + 0x78));
          iVar14 = 5;
          local_13c = 1;
          local_f4 = 1;
          if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 7) goto LAB_00465d37;
          iVar14 = 6;
          local_1fc = local_1fc + 0x90;
        }
LAB_0046593e:
        FUN_004024e0(&stack0xfffffdcc,(undefined4 *)local_1fc);
        FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
        goto LAB_00465d37;
      }
      pcVar6 = local_1fc + 0x48;
      if (0xf < *(uint *)(local_1fc + 0x5c)) {
        pcVar6 = *(char **)pcVar6;
      }
      ppppbVar19 = (byte ****)0x465097;
      local_1d8 = atoi(pcVar6);
      iVar14 = 3;
      local_13c = 1;
      if ((uint)((local_1f8 - (int)local_1fc) / 0x18) < 5) goto LAB_00465d37;
    }
    FUN_004024e0(&stack0xfffffdcc,(undefined4 *)(local_1fc + 0x60));
    FUN_00464110(&local_1ec,(char *)in_stack_fffffdcc);
  }
  iVar14 = 4;
LAB_00465d37:
  uVar5 = iVar14 + 1;
  FUN_0042b900(&stack0xfffffdd4,(int *)&local_1fc);
  FUN_005573e0(&local_1ec,in_stack_fffffdd4,iVar18,ppppbVar19,uVar5);
  puVar17 = *(undefined4 **)((int)this + 0x68);
  if (*(undefined4 **)((int)this + 0x6c) == puVar17) {
    FUN_0047ecb0((void *)((int)this + 100),puVar17,&local_1ec);
  }
  else {
    FUN_0047f520(puVar17,&local_1ec);
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 0x188;
  }
  FUN_00465e40((int)&local_1ec);
  FUN_004025a0((int *)&local_1fc);
  if (0xf < in_stack_00000018) {
    pbVar11 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar11 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar11))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar11);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar12 = in_stack_0000001c;
    if ((0xfff < in_stack_00000030 + 1) &&
       (pvVar12 = *(void **)((int)in_stack_0000001c + -4),
       0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00465e40(int param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b62d0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_1;
  FUN_00419300((void *)(param_1 + 0x168),&local_14,(int *)**(int **)(param_1 + 0x168),
               *(int **)(param_1 + 0x168));
  FUN_005adb3f(*(void **)(param_1 + 0x168));
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x154);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x130),uVar3);
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  local_8 = 1;
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  local_8 = 2;
  piVar1 = *(int **)(param_1 + 0xf4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  local_8 = 0xffffffff;
  if (0xf < *(uint *)(param_1 + 0xcc)) {
    pvVar2 = *(void **)(param_1 + 0xb8);
    pvVar4 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0xcc) + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0046604a;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  local_8 = 3;
  piVar1 = *(int **)(param_1 + 0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  local_8 = 4;
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x48)) {
    pvVar2 = *(void **)(param_1 + 0x34);
    pvVar4 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x48) + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4))))
    goto LAB_0046604a;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (0xf < *(uint *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(param_1 + 0x1c);
    pvVar4 = pvVar2;
    if ((0xfff < *(uint *)(param_1 + 0x30) + 1) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
LAB_0046604a:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00466060(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  void *pvVar4;
  uint uVar5;
  uint in_stack_00000018;
  byte *in_stack_ffffffa4;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b6308;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_0047d0f0((byte *)&param_1);
  if (iVar2 != 0) {
    uVar5 = 0;
    pbVar3 = FUN_0047d4e0((byte *)&param_1);
    iVar2 = *(int *)(pbVar3 + 4) - *(int *)pbVar3 >> 0x1f;
    if ((*(int *)(pbVar3 + 4) - *(int *)pbVar3) / 0x18 + iVar2 != iVar2) {
      iVar2 = 0;
      do {
        pbVar3 = FUN_0047d4e0((byte *)&param_1);
        local_14 = auStack_44;
        FUN_004024e0(auStack_44,(undefined4 *)(*(int *)pbVar3 + iVar2));
        local_8._0_1_ = 1;
        FUN_004024e0(&stack0xffffffa4,&param_1);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00464a00(this,in_stack_ffffffa4);
        uVar5 = uVar5 + 1;
        iVar2 = iVar2 + 0x18;
        pbVar3 = FUN_0047d4e0((byte *)&param_1);
      } while (uVar5 < (uint)((*(int *)(pbVar3 + 4) - *(int *)pbVar3) / 0x18));
    }
  }
  uStack_38 = 0x46613b;
  FUN_00419820(&DAT_0065b530,(int *)&local_1c,(byte *)&param_1);
  puVar1 = local_18;
  iVar2 = 0;
  local_14 = local_1c;
  if (local_1c != local_18) {
    do {
      iVar2 = iVar2 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
    } while (local_14 != puVar1);
    if (iVar2 != 0) {
      local_18 = auStack_44;
      pbVar3 = FUN_0047d6a0(&DAT_0065b530,(byte *)&param_1);
      FUN_004024e0(auStack_44,(undefined4 *)pbVar3);
      local_8._0_1_ = 2;
      FUN_004024e0(&stack0xffffffa4,&param_1);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00464a00(this,in_stack_ffffffa4);
    }
  }
  if (0xf < in_stack_00000018) {
    pvVar4 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar4 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uStack_38 = 0x4661d3;
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return;
}


void FUN_004661f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  byte *this;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  void **ppvVar8;
  Rect *pRVar9;
  byte *pbVar10;
  void *pvVar11;
  byte *in_stack_ffffff10;
  byte *local_c8;
  uint local_c4;
  Rect *local_c0;
  char *local_bc;
  Rect *local_b8;
  Rect *local_b4;
  char local_ad;
  byte local_ac [16];
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  char local_84 [16];
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [3];
  char *local_38;
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
  puStack_c = &LAB_005b6478;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c0 = (Rect *)0x0;
  this = (byte *)FUN_005adb0f(0x94);
  this[0x10] = 0;
  this[0x11] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0xf;
  this[0x15] = 0;
  this[0x16] = 0;
  this[0x17] = 0;
  *this = 0;
  pbVar4 = this + 0x18;
  this[0x28] = 0;
  this[0x29] = 0;
  this[0x2a] = 0;
  this[0x2b] = 0;
  this[0x2c] = 0xf;
  this[0x2d] = 0;
  this[0x2e] = 0;
  this[0x2f] = 0;
  *pbVar4 = 0;
  this[0x40] = 0;
  this[0x41] = 0;
  this[0x42] = 0;
  this[0x43] = 0;
  this[0x44] = 0xf;
  this[0x45] = 0;
  this[0x46] = 0;
  this[0x47] = 0;
  this[0x30] = 0;
  this[0x48] = 0;
  this[0x49] = 1;
  this[0x4a] = 0;
  this[0x4b] = 0;
  this[0x4c] = 0xc0;
  this[0x4d] = 0;
  this[0x4e] = 0;
  this[0x4f] = 0;
  this[0x50] = 0;
  this[0x51] = 0;
  this[0x52] = 0;
  this[0x53] = 0;
  this[0x54] = 0;
  this[0x55] = 0;
  this[0x56] = 0;
  this[0x57] = 0;
  this[0x58] = 0;
  this[0x59] = 0;
  this[0x5a] = 0;
  this[0x5b] = 0;
  this[0x5c] = 0;
  this[0x5d] = 0;
  this[0x60] = 0;
  this[0x61] = 0;
  this[0x62] = 0;
  this[99] = 0;
  this[100] = 0;
  this[0x65] = 0;
  this[0x66] = 0;
  this[0x67] = 0;
  this[0x68] = 0;
  this[0x69] = 0;
  this[0x6a] = 0;
  this[0x6b] = 0;
  this[0x6c] = 0;
  this[0x6d] = 0;
  this[0x6e] = 0;
  this[0x6f] = 0;
  this[0x70] = 0;
  this[0x71] = 0;
  this[0x72] = 0;
  this[0x73] = 0;
  this[0x74] = 0;
  this[0x75] = 0;
  this[0x76] = 0;
  this[0x77] = 0;
  this[0x78] = 0;
  this[0x79] = 0;
  this[0x7a] = 0;
  this[0x7b] = 0;
  local_8 = 5;
  this[0x8c] = 0;
  this[0x8d] = 0;
  this[0x8e] = 0;
  this[0x8f] = 0;
  this[0x90] = 0xf;
  this[0x91] = 0;
  this[0x92] = 0;
  this[0x93] = 0;
  this[0x7c] = 0;
  local_c8 = this;
  FUN_00402690(this + 0x7c,"%c_MouseCursor.png",0x12);
  local_8 = 0xffffffff;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_c8 = this;
  FUN_00402690(local_2c,&DAT_005e431c,4);
  local_8 = 6;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this != pbVar3) {
    pbVar10 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar10 = *(byte **)pbVar3;
    }
    FUN_00402690(this,pbVar10,*(uint *)(pbVar3 + 0x10));
  }
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_18) {
    pvVar11 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar11 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) {
LAB_0046638b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"shortname",9);
  local_8 = 7;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (pbVar4 != pbVar3) {
    pbVar10 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar10 = *(byte **)pbVar3;
    }
    FUN_00402690(pbVar4,pbVar10,*(uint *)(pbVar3 + 0x10));
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
  FUN_00402690(local_2c,"width",5);
  local_8 = 8;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  iVar5 = atoi((char *)pbVar4);
  *(int *)(this + 0x48) = iVar5;
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
  FUN_00402690(local_2c,"height",6);
  local_8 = 9;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  iVar5 = atoi((char *)pbVar4);
  *(int *)(this + 0x4c) = iVar5;
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
  FUN_00402690(local_2c,"tabname",7);
  local_8 = 10;
  pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  if (this + 0x30 != pbVar4) {
    pbVar3 = pbVar4;
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar3 = *(byte **)pbVar4;
    }
    FUN_00402690(this + 0x30,pbVar3,*(uint *)(pbVar4 + 0x10));
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
  FUN_00402690(local_2c,"pausegame",9);
  local_8 = 0xb;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_ad = (char)uVar6;
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
  this[0x59] = local_ad != '\0';
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"forcemouse",10);
  local_8 = 0xc;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_ad = (char)uVar6;
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
  if (local_ad != '\0') {
    this[0x5b] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"showmenu",8);
  local_8 = 0xd;
  local_c0 = (Rect *)0x1;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),&DAT_005e425c,4);
  if ((char)uVar6 == '\0') {
    pbVar4 = this + 0x18;
    pbVar3 = pbVar4;
    if (0xf < *(uint *)(this + 0x2c)) {
      pbVar3 = *(byte **)pbVar4;
    }
    local_c4 = *(uint *)(this + 0x28);
    uVar6 = FUN_004031f0(pbVar3,local_c4,(byte *)"x7_commerce",0xb);
    if ((char)uVar6 != '\0') goto LAB_00466807;
    pbVar3 = pbVar4;
    if (0xf < *(uint *)(this + 0x2c)) {
      pbVar3 = *(byte **)pbVar4;
    }
    uVar6 = FUN_004031f0(pbVar3,local_c4,(byte *)"x7_trading",10);
    if ((char)uVar6 != '\0') goto LAB_00466807;
    pbVar3 = pbVar4;
    if (0xf < *(uint *)(this + 0x2c)) {
      pbVar3 = *(byte **)pbVar4;
    }
    uVar6 = FUN_004031f0(pbVar3,local_c4,(byte *)"x7_adminterminal",0x10);
    if ((char)uVar6 != '\0') goto LAB_00466807;
    if (0xf < *(uint *)(this + 0x2c)) {
      pbVar4 = *(byte **)pbVar4;
    }
    uVar6 = FUN_004031f0(pbVar4,local_c4,(byte *)"x7_dockingcomputer",0x12);
    local_ad = '\0';
    if ((char)uVar6 != '\0') goto LAB_00466807;
  }
  else {
LAB_00466807:
    local_ad = '\x01';
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
  if (local_ad == '\0') {
    this[0x5a] = 0;
  }
  else {
    this[0x5a] = 1;
    this[0x5b] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"usetabletmenu",0xd);
  local_8 = 0xe;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),&DAT_005e425c,4);
  local_8 = 0xffffffff;
  local_ad = (char)uVar6;
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
  if (local_ad == '\0') {
    this[0x58] = 0;
  }
  else {
    this[0x5a] = 1;
    this[0x5b] = 1;
    this[0x58] = 1;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"notlinkedtoship",0xf);
  local_8 = 0xf;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),&DAT_005e425c,4);
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  local_ad = (char)uVar6;
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
  this[0x5d] = local_ad != '\0';
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"defaultcursor",0xd);
  FUN_00419820(&DAT_0065b530,(int *)&local_b8,(byte *)local_2c);
  pRVar9 = local_b4;
  local_c0 = local_b8;
  local_c4 = 0;
  uVar6 = local_c4;
  if (local_b8 != local_b4) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_c0);
    } while (local_c0 != pRVar9);
  }
  local_c4 = uVar6;
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
  if (local_c4 == 0) {
    FUN_00402690(this + 0x7c,"%c_MouseCursor.png",0x12);
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"defaultcursor",0xd);
    local_8 = 0x10;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    if (this + 0x7c != pbVar4) {
      pbVar3 = pbVar4;
      if (0xf < *(uint *)(pbVar4 + 0x14)) {
        pbVar3 = *(byte **)pbVar4;
      }
      FUN_00402690(this + 0x7c,pbVar3,*(uint *)(pbVar4 + 0x10));
    }
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"cursor",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_b8,(byte *)local_2c);
  pRVar9 = local_b4;
  local_c0 = local_b8;
  local_c4 = 0;
  uVar6 = local_c4;
  if (local_b8 != local_b4) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_c0);
    } while (local_c0 != pRVar9);
  }
  local_c4 = uVar6;
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
  if (local_c4 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"cursor",6);
    iVar5 = FUN_0047d0f0((byte *)local_2c);
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
    if (iVar5 != 0) {
      local_c4 = 0;
      local_c0 = (Rect *)0x0;
      do {
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"cursor",6);
        local_8 = 0x16;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        iVar5 = *(int *)(pbVar4 + 4);
        iVar1 = *(int *)pbVar4;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0046638b;
          FUN_005adb3f(pvVar11);
        }
        if ((uint)((iVar5 - iVar1) / 0x18) <= local_c4) break;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"cursor",6);
        local_8 = 0x17;
        pbVar4 = FUN_0047d5c0((byte *)local_2c);
        FUN_004024e0(&stack0xffffff10,(undefined4 *)(local_c0 + *(int *)pbVar4));
        FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff10);
        local_8._0_1_ = 0x19;
        if (0xf < local_18) {
          pvVar11 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar11 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11)))) goto LAB_0046638b;
          FUN_005adb3f(pvVar11);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        cocos2d::Rect::Rect((Rect *)&local_6c);
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        pcVar7 = local_38;
        if (0xf < *(uint *)(local_38 + 0x14)) {
          pcVar7 = *(char **)local_38;
        }
        iVar5 = atoi(pcVar7);
        local_6c = (float)iVar5;
        pcVar7 = local_38 + 0x18;
        if (0xf < *(uint *)(local_38 + 0x2c)) {
          pcVar7 = *(char **)pcVar7;
        }
        iVar5 = atoi(pcVar7);
        local_68 = (float)iVar5;
        pcVar7 = local_38 + 0x30;
        if (0xf < *(uint *)(local_38 + 0x44)) {
          pcVar7 = *(char **)pcVar7;
        }
        iVar5 = atoi(pcVar7);
        local_64 = (float)iVar5;
        pcVar7 = local_38 + 0x48;
        if (0xf < *(uint *)(local_38 + 0x5c)) {
          pcVar7 = *(char **)pcVar7;
        }
        iVar5 = atoi(pcVar7);
        local_60 = (float)iVar5;
        ppvVar8 = (void **)(local_38 + 0x60);
        if (local_5c != ppvVar8) {
          if (0xf < *(uint *)(local_38 + 0x74)) {
            ppvVar8 = *ppvVar8;
          }
          FUN_00402690(local_5c,ppvVar8,*(uint *)(local_38 + 0x70));
        }
        pRVar9 = *(Rect **)(this + 0x74);
        if (*(Rect **)(this + 0x78) == pRVar9) {
          FUN_0047ea70(this + 0x70,pRVar9,(Rect *)&local_6c);
        }
        else {
          local_b4 = pRVar9;
          cocos2d::Rect::Rect(pRVar9,(Rect *)&local_6c);
          local_8 = CONCAT31(local_8._1_3_,0x1b);
          FUN_004024e0(pRVar9 + 0x10,local_5c);
          *(int *)(this + 0x74) = *(int *)(this + 0x74) + 0x28;
        }
        local_8._0_1_ = 0x19;
        if (0xf < local_48) {
          pvVar11 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar11 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11)))) goto LAB_0046638b;
          FUN_005adb3f(pvVar11);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        cocos2d::Rect::~Rect((Rect *)&local_6c);
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_004025a0((int *)&local_38);
        local_c4 = local_c4 + 1;
        local_c0 = local_c0 + 0x18;
      } while( true );
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"cursor",6);
    local_8 = 0x11;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff10,(undefined4 *)pbVar4);
    FUN_00592d70(&local_bc,',',(undefined4 *)in_stack_ffffff10);
    local_8._0_1_ = 0x13;
    if (0xf < local_30) {
      pvVar11 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar11 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar11);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    cocos2d::Rect::Rect((Rect *)&local_94);
    local_74 = 0;
    local_70 = 0xf;
    local_84[0] = '\0';
    local_8 = CONCAT31(local_8._1_3_,0x14);
    pcVar7 = local_bc;
    if (0xf < *(uint *)(local_bc + 0x14)) {
      pcVar7 = *(char **)local_bc;
    }
    iVar5 = atoi(pcVar7);
    local_94 = (float)iVar5;
    pcVar7 = local_bc + 0x18;
    if (0xf < *(uint *)(local_bc + 0x2c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar5 = atoi(pcVar7);
    local_90 = (float)iVar5;
    pcVar7 = local_bc + 0x30;
    if (0xf < *(uint *)(local_bc + 0x44)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar5 = atoi(pcVar7);
    local_8c = (float)iVar5;
    pcVar7 = local_bc + 0x48;
    if (0xf < *(uint *)(local_bc + 0x5c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar5 = atoi(pcVar7);
    local_88 = (float)iVar5;
    pcVar7 = local_bc + 0x60;
    if (local_84 != pcVar7) {
      if (0xf < *(uint *)(local_bc + 0x74)) {
        pcVar7 = *(char **)pcVar7;
      }
      FUN_00402690(local_84,pcVar7,*(uint *)(local_bc + 0x70));
    }
    pRVar9 = *(Rect **)(this + 0x74);
    if (*(Rect **)(this + 0x78) == pRVar9) {
      FUN_0047ea70(this + 0x70,pRVar9,(Rect *)&local_94);
    }
    else {
      local_c0 = pRVar9;
      cocos2d::Rect::Rect(pRVar9,(Rect *)&local_94);
      local_8 = CONCAT31(local_8._1_3_,0x15);
      FUN_004024e0(pRVar9 + 0x10,(undefined4 *)local_84);
      *(int *)(this + 0x74) = *(int *)(this + 0x74) + 0x28;
    }
    FUN_00467a60((Rect *)&local_94);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    FUN_004025a0((int *)&local_bc);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"linkto",6);
  FUN_00419820(&DAT_0065b530,(int *)&local_b8,(byte *)local_2c);
  pRVar9 = local_b4;
  iVar5 = 0;
  local_c0 = local_b8;
  while (local_c0 != pRVar9) {
    iVar5 = iVar5 + 1;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_c0)
    ;
  }
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
  if (iVar5 != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"linkto",6);
    local_8 = 0x1c;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff10,(undefined4 *)pbVar4);
    iVar5 = FUN_0040e390(in_stack_ffffff10);
    *(int *)(this + 0x54) = iVar5;
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"input",5);
  local_8 = 0x1d;
  pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pbVar4 = pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar4 = *(byte **)pbVar3;
  }
  uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),(byte *)"rtcomms",7);
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
  if ((char)uVar6 == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"input",5);
    local_8 = 0x1e;
    pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pbVar4 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar4 = *(byte **)pbVar3;
    }
    uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),(byte *)"tablet",6);
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
    if ((char)uVar6 == '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"input",5);
      local_8 = 0x1f;
      pbVar3 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pbVar4 = pbVar3;
      if (0xf < *(uint *)(pbVar3 + 0x14)) {
        pbVar4 = *(byte **)pbVar3;
      }
      uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),(byte *)"sensor",6);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      if ((char)uVar6 == '\0') {
        local_9c = 0;
        local_98 = 0xf;
        local_ac[0] = 0;
        FUN_00402690(local_ac,"input",5);
        local_8 = 0x20;
        pbVar3 = FUN_00419170(&DAT_0065b530,local_ac);
        pbVar4 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar4 = *(byte **)pbVar3;
        }
        uVar6 = FUN_004031f0(pbVar4,*(uint *)(pbVar3 + 0x10),(byte *)"privatecomms",0xc);
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_ac);
        if ((char)uVar6 == '\0') goto LAB_00467491;
        pRVar9 = (Rect *)FUN_004125d0();
      }
      else {
        pRVar9 = DAT_0065c2dc;
        if (DAT_0065c2dc == (Rect *)0x0) {
          pRVar9 = (Rect *)FUN_005adb0f(4);
          DAT_0065c2dc = pRVar9;
          *(undefined ***)pRVar9 = SensorManager::vftable;
          local_b4 = pRVar9;
        }
      }
    }
    else {
      pRVar9 = (Rect *)FUN_004123f0();
    }
  }
  else {
    pRVar9 = DAT_0065c27c;
    if (DAT_0065c27c == (Rect *)0x0) {
      pRVar9 = (Rect *)FUN_005adb0f(0x20);
      DAT_0065c27c = pRVar9;
      *(undefined ***)pRVar9 = CommsManager::vftable;
      *(undefined4 *)(pRVar9 + 4) = 0x50;
      *(undefined4 *)(pRVar9 + 8) = 0x28;
      pRVar9[0xc] = (Rect)0x0;
      *(undefined4 *)(pRVar9 + 0x14) = 0;
      *(undefined4 *)(pRVar9 + 0x18) = 0;
      *(undefined4 *)(pRVar9 + 0x1c) = 0;
      local_b4 = pRVar9;
    }
  }
  *(Rect **)(this + 0x60) = pRVar9;
LAB_00467491:
  pvVar11 = (void *)((uint)in_stack_ffffff10 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"image",5);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"percentilebar",0xd);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"bdbar",5);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,&DAT_005e925c,4);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"greyedbutton",0xc);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"cimage",6);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,&DAT_005e927c,4);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,&DAT_005e1bf0,4);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"sensordisplay",0xd);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"objectsummary",0xd);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"powerscreen",0xb);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"powerdetailscreen",0x11);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"border",6);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"engpanel",8);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"modulepanel",0xb);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"componentstorage",0x10);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"multimeter",10);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"shiphullstate",0xd);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"sensorwaveform",0xe);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"sensorselect",0xc);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"weapontubes",0xb);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"textfield",9);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"textbox",7);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"slider",6);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"selector",8);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"checkbox",8);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"systembar",9);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"selecttray",10);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"icontray",8);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"dmenu",5);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"adshell",7);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"newsticker",10);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"button",6);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"navmap",6);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"sheet",5);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,"introsequence",0xd);
  FUN_00466060(this,pvVar11);
  pvVar11 = (void *)((uint)pvVar11 & 0xffffff00);
  FUN_00402690(&stack0xffffff10,&DAT_005e93b4,4);
  FUN_00466060(this,pvVar11);
  iVar5 = DAT_0065b5cc;
  puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x4c);
  if (*(undefined4 **)(DAT_0065b5cc + 0x50) == puVar2) {
    FUN_00414080((void *)(DAT_0065b5cc + 0x48),puVar2,&local_c8);
  }
  else {
    *puVar2 = this;
    *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00467a60(Rect *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pvVar1 = *(void **)(param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x24) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  param_1[0x10] = (Rect)0x0;
                    // WARNING: Could not recover jumptable at 0x00467aa8. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Rect::~Rect(param_1);
  return;
}


void FUN_00467ac0(void)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  basic_string<> bVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  basic_string<> *pbVar17;
  basic_string<> *pbVar18;
  code *pcVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  double dVar22;
  undefined4 *puVar23;
  byte *in_stack_ffffff2c;
  int local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined8 local_9c;
  basic_string<> *local_94;
  char local_8d;
  basic_string<> local_8c [12];
  int local_80 [3];
  basic_string<> local_74 [24];
  basic_string<> local_5c [12];
  int local_50;
  undefined8 local_4c;
  basic_string<> local_44 [12];
  int local_38;
  int local_34;
  basic_string<> local_2c [12];
  basic_string<> *local_20;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b68cb;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a0 = (undefined4 *)0x0;
  puVar5 = (undefined1 *)FUN_005adb0f(0x404);
  local_4c = CONCAT44(puVar5,(int)local_4c);
  local_8 = 0;
  local_94 = (basic_string<> *)FUN_004ca550(puVar5);
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"id");
  local_8 = 1;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  std::basic_string<>::operator=(local_94,(basic_string<> *)((int)local_4c + 0x28));
  local_8 = 2;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  std::basic_string<>::operator=((basic_string<> *)&DAT_00655708,(basic_string<> *)local_94);
  std::basic_string<>::basic_string<>(local_2c,"scenariocat");
  local_8 = 3;
  FUN_00419c50(&DAT_0065b530,&local_a8,(byte *)local_2c);
  puVar21 = (undefined4 *)(local_a8 + 0x28);
  local_4c = CONCAT44(&stack0xffffff2c,(int)local_4c);
  FUN_00402950((int)&stack0xffffff2c);
  local_8._0_1_ = 4;
  FUN_004027c0(&stack0xffffff2c,puVar21);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar6 = FUN_004ca430(in_stack_ffffff2c);
  *(int *)(local_94 + 0x6c) = iVar6;
  local_8 = 5;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"name");
  local_8 = 6;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  std::basic_string<>::operator=(local_94 + 0x18,(basic_string<> *)((int)local_4c + 0x28));
  local_8 = 7;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"startsector");
  local_8 = 8;
  FUN_00419c50(&DAT_0065b530,&local_a8,(byte *)local_2c);
  puVar21 = (undefined4 *)(local_a8 + 0x28);
  local_4c = CONCAT44(&stack0xffffff2c,(int)local_4c);
  FUN_00402950((int)&stack0xffffff2c);
  local_8._0_1_ = 9;
  FUN_004027c0(&stack0xffffff2c,puVar21);
  local_8 = CONCAT31(local_8._1_3_,8);
  puVar23 = (undefined4 *)0x467cc0;
  puVar21 = (undefined4 *)FUN_004a72b0(in_stack_ffffff2c);
  local_8 = 10;
  FUN_00401b20((int *)local_2c);
  pcVar19 = atoi_exref;
  local_8 = 0xffffffff;
  if (puVar21 == (undefined4 *)0x0) {
    std::basic_string<>::basic_string<>(local_2c,"startsector");
    local_8 = 0xb;
    FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
    pcVar7 = (char *)((int)local_4c + 0x28);
    if (0xf < *(uint *)((int)local_4c + 0x3c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar6 = atoi(pcVar7);
    *(int *)(local_94 + 0x60) = iVar6;
    local_8 = 0xc;
    FUN_00401b20((int *)local_2c);
  }
  else {
    *(undefined4 *)(local_94 + 0x60) = *puVar21;
  }
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"describeenemies");
  local_8 = 0xd;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  cVar2 = FUN_00403260((void *)((int)local_4c + 0x28),(byte *)"false");
  local_8 = 0xe;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (cVar2 != '\0') {
    *(basic_string<> *)(local_94 + 0x316) = (basic_string<>)0x0;
  }
  std::basic_string<>::basic_string<>(local_2c,"startmoney");
  local_8 = 0xf;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0x10;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"startmoney");
    local_8 = 0x11;
    FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
    pcVar7 = (char *)((int)local_4c + 0x28);
    if (0xf < *(uint *)((int)local_4c + 0x3c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar6 = atoi(pcVar7);
    *(int *)(local_94 + 100) = iVar6;
    local_8 = 0x12;
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"scenariotype");
  local_8 = 0x13;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0x14;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"scenariotype");
    local_8 = 0x15;
    FUN_00419c50(&DAT_0065b530,&local_a8,(byte *)local_2c);
    local_4c = CONCAT44(&stack0xffffff2c,(int)local_4c);
    FUN_00402950((int)&stack0xffffff2c);
    local_8._0_1_ = 0x16;
    FUN_004027c0(&stack0xffffff2c,(undefined4 *)(local_a8 + 0x28));
    local_8 = CONCAT31(local_8._1_3_,0x15);
    puVar23 = (undefined4 *)0x467ee3;
    iVar6 = FUN_004ca4c0(in_stack_ffffff2c);
    *(int *)(local_94 + 0x68) = iVar6;
    local_8 = 0x17;
    FUN_00401b20((int *)local_2c);
    pcVar19 = atoi_exref;
  }
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"pirates");
  local_8 = 0x18;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0x19;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (iVar6 != 0) {
    *(basic_string<> *)(local_94 + 0xb9) = (basic_string<>)0x1;
    *(basic_string<> *)(local_94 + 0xb8) = (basic_string<>)0x1;
    std::basic_string<>::basic_string<>(local_2c,"pirates");
    local_8 = 0x1a;
    FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
    uVar8 = (*pcVar19)();
    *(undefined4 *)(local_94 + 0xb4) = uVar8;
    local_8 = 0x1b;
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"forceiff");
  local_8 = 0x1c;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  cVar2 = FUN_00403260((void *)((int)local_4c + 0x28),&DAT_005e425c);
  local_8 = 0x1d;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (cVar2 != '\0') {
    *(basic_string<> *)(local_94 + 0x30c) = (basic_string<>)0x1;
  }
  std::basic_string<>::basic_string<>(local_2c,"antagonist");
  local_8 = 0x1e;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0x1f;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"antagonist");
    local_8 = 0x26;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0x27;
    FUN_00401b20((int *)local_2c);
    local_8 = 0xffffffff;
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"antagonist");
      local_8 = 0x28;
      FUN_0047fec0((undefined4 *)&local_4c,(byte *)local_2c);
      iVar6 = (int)local_4c;
      local_8 = 0x29;
      FUN_00401b20((int *)local_2c);
      local_a0 = *(undefined4 **)(iVar6 + 0x2c);
      puVar21 = *(undefined4 **)(iVar6 + 0x28);
      if (puVar21 != local_a0) {
        do {
          local_8 = 0xffffffff;
          FUN_00402950((int)local_44);
          local_8 = 0x2a;
          FUN_004027c0(local_44,puVar21);
          local_8 = 0x2b;
          local_9c = CONCAT44(&stack0xffffff2c,(int)local_9c);
          FUN_00402950((int)&stack0xffffff2c);
          local_8._0_1_ = 0x2c;
          FUN_004027c0(&stack0xffffff2c,(undefined4 *)local_44);
          local_8._0_1_ = 0x2b;
          puVar23 = (undefined4 *)0x468298;
          FUN_00592d70(&local_20,':',(undefined4 *)in_stack_ffffff2c);
          local_8._0_1_ = 0x2d;
          if ((local_1c - (int)local_20) / 0x18 == 2) {
            uVar9 = (*pcVar19)();
            local_a4 = (undefined4 *)(*pcVar19)();
            if ((uVar9 < 3) && (-1 < (int)local_a4)) {
              FUN_004130e0((basic_string<> *)(local_94 + uVar9 * 0x6c + 0x228),&local_a4);
            }
            else {
              FUN_00591070("ERROR","INVALID TEAMS");
              bVar3 = cc_assert_script_compatible("Invalid antagonist teams");
              if (!bVar3) {
                cocos2d::log("Assert failed: %s");
              }
            }
          }
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          FUN_004025a0((int *)&local_20);
          local_8 = 0x2f;
          FUN_00401b20((int *)local_44);
          puVar21 = puVar21 + 6;
        } while (puVar21 != local_a0);
      }
    }
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"antagonist");
    local_8 = 0x20;
    FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_44);
    puVar21 = (undefined4 *)((int)local_4c + 0x28);
    local_9c = CONCAT44(&stack0xffffff2c,(int)local_9c);
    FUN_00402950((int)&stack0xffffff2c);
    local_8._0_1_ = 0x21;
    FUN_004027c0(&stack0xffffff2c,puVar21);
    local_8._0_1_ = 0x20;
    puVar23 = (undefined4 *)0x4680c5;
    FUN_00592d70(&local_20,':',(undefined4 *)in_stack_ffffff2c);
    local_8._0_1_ = 0x24;
    FUN_00401b20((int *)local_44);
    local_8 = CONCAT31(local_8._1_3_,0x23);
    if ((local_1c - (int)local_20) / 0x18 == 2) {
      pbVar17 = local_20;
      if (0xf < *(uint *)(local_20 + 0x14)) {
        pbVar17 = *(basic_string<> **)local_20;
      }
      uVar9 = atoi((char *)pbVar17);
      pbVar17 = local_20 + 0x18;
      if (0xf < *(uint *)(local_20 + 0x2c)) {
        pbVar17 = *(basic_string<> **)pbVar17;
      }
      local_a4 = (undefined4 *)atoi((char *)pbVar17);
      if ((uVar9 < 3) && (-1 < (int)local_a4)) {
        FUN_004130e0((basic_string<> *)(local_94 + uVar9 * 0x6c + 0x228),&local_a4);
      }
      else {
        FUN_00591070("ERROR","INVALID TEAMS");
        bVar3 = cc_assert_script_compatible("Invalid antagonist teams");
        if (!bVar3) {
          cocos2d::log("Assert failed: %s");
        }
      }
    }
    local_8 = 0x25;
    FUN_004025a0((int *)&local_20);
  }
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"nojunk");
  local_8 = 0x30;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  cVar2 = FUN_00403260((void *)((int)local_4c + 0x28),&DAT_005e425c);
  local_8 = 0x31;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (cVar2 != '\0') {
    *(basic_string<> *)(local_94 + 0x375) = (basic_string<>)0x1;
  }
  std::basic_string<>::basic_string<>(local_2c,"forcenotablet");
  local_8 = 0x32;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  cVar2 = FUN_00403260((void *)((int)local_4c + 0x28),&DAT_005e425c);
  local_8 = 0x33;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  *(bool *)(local_94 + 0x30d) = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_2c,"instakill");
  local_8 = 0x34;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  cVar2 = FUN_00403260((void *)((int)local_4c + 0x28),&DAT_005e425c);
  local_8 = 0x35;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (cVar2 != '\0') {
    *(basic_string<> *)(local_94 + 0x30f) = (basic_string<>)0x1;
  }
  std::basic_string<>::basic_string<>(local_2c,"showweapons");
  local_8 = 0x36;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  cVar2 = FUN_00403260((void *)((int)local_4c + 0x28),&DAT_005e425c);
  local_8 = 0x37;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (cVar2 != '\0') {
    *(basic_string<> *)(local_94 + 0x30e) = (basic_string<>)0x1;
  }
  std::basic_string<>::basic_string<>(local_2c,"noemails");
  local_8 = 0x38;
  FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
  bVar4 = (basic_string<>)FUN_00403260((void *)((int)local_4c + 0x28),&DAT_005e425c);
  *(basic_string<> *)(local_94 + 0x74) = bVar4;
  local_8 = 0x39;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"successflag");
  local_8 = 0x3a;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0x3b;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"successflag");
    local_8 = 0x44;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0x45;
    FUN_00401b20((int *)local_2c);
    local_8 = 0xffffffff;
    pcVar19 = atoi_exref;
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"successflag");
      local_8 = 0x46;
      FUN_0047fec0((undefined4 *)&local_4c,(byte *)local_2c);
      iVar6 = (int)local_4c;
      local_8 = 0x47;
      FUN_00401b20((int *)local_2c);
      pcVar19 = atoi_exref;
      local_a4 = *(undefined4 **)(iVar6 + 0x2c);
      puVar21 = *(undefined4 **)(iVar6 + 0x28);
      if (puVar21 != local_a4) {
        do {
          local_8 = 0xffffffff;
          FUN_00402950((int)local_44);
          local_8 = 0x48;
          FUN_004027c0(local_44,puVar21);
          local_8 = 0x49;
          local_9c = CONCAT44(&stack0xffffff2c,(int)local_9c);
          FUN_00402950((int)&stack0xffffff2c);
          local_8._0_1_ = 0x4a;
          FUN_004027c0(&stack0xffffff2c,(undefined4 *)local_44);
          local_8._0_1_ = 0x49;
          puVar23 = (undefined4 *)0x4687d8;
          FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
          local_8._0_1_ = 0x4b;
          iVar6 = (local_1c - (int)local_20) / 0x18;
          if (iVar6 == 1) {
            pbVar18 = local_94 + 0x168;
            pbVar17 = local_20;
LAB_00468836:
            std::basic_string<>::operator=(pbVar18,pbVar17);
          }
          else if (iVar6 == 2) {
            pbVar17 = local_20;
            if (0xf < *(uint *)(local_20 + 0x14)) {
              pbVar17 = *(basic_string<> **)local_20;
            }
            iVar6 = atoi((char *)pbVar17);
            pbVar17 = local_20 + 0x18;
            pbVar18 = local_94 + iVar6 * 0x6c + 0x1c8;
            goto LAB_00468836;
          }
          local_8 = CONCAT31(local_8._1_3_,0x4c);
          FUN_004025a0((int *)&local_20);
          local_8 = 0x4d;
          FUN_00401b20((int *)local_44);
          puVar21 = puVar21 + 6;
        } while (puVar21 != local_a4);
      }
    }
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"successflag");
    local_8 = 0x3c;
    FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_44);
    puVar21 = (undefined4 *)((int)local_4c + 0x28);
    local_9c = CONCAT44(&stack0xffffff2c,(int)local_9c);
    FUN_00402950((int)&stack0xffffff2c);
    local_8._0_1_ = 0x3d;
    FUN_004027c0(&stack0xffffff2c,puVar21);
    local_8._0_1_ = 0x3c;
    puVar23 = (undefined4 *)0x4685ef;
    FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
    local_8._0_1_ = 0x40;
    FUN_00401b20((int *)local_44);
    pcVar19 = atoi_exref;
    local_8._0_1_ = 0x3f;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 0x3f;
    iVar6 = (local_1c - (int)local_20) / 0x18;
    if (iVar6 == 1) {
      std::basic_string<>::basic_string<>(local_8c,"successflag");
      local_8._0_1_ = 0x41;
      FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_9c,(byte *)local_8c);
      std::basic_string<>::operator=(local_94 + 0x168,(basic_string<> *)((int)local_9c + 0x28));
      local_8 = CONCAT31(local_8._1_3_,0x42);
      FUN_00401b20((int *)local_8c);
      pcVar19 = atoi_exref;
    }
    else if (iVar6 == 2) {
      pbVar17 = local_20;
      if (0xf < *(uint *)(local_20 + 0x14)) {
        pbVar17 = *(basic_string<> **)local_20;
      }
      local_8._0_1_ = uVar1;
      iVar6 = atoi((char *)pbVar17);
      std::basic_string<>::operator=(local_94 + iVar6 * 0x6c + 0x1c8,local_20 + 0x18);
    }
    local_8 = 0x43;
    FUN_004025a0((int *)&local_20);
  }
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"failureflag");
  local_8 = 0x4e;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0x4f;
  FUN_00401b20((int *)local_2c);
  local_8 = 0xffffffff;
  std::basic_string<>::basic_string<>(local_2c,"failureflag");
  if (iVar6 == 0) {
    local_8 = 0x56;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"failureflag");
      local_8 = 0x57;
      pbVar10 = FUN_0047d5c0((byte *)local_2c);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      puVar21 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar10);
      local_a4 = (undefined4 *)FUN_004131a0((int)pbVar10);
      if (puVar21 != local_a4) {
        do {
          FUN_004024e0(local_2c,puVar21);
          local_8 = 0x58;
          FUN_004024e0(&stack0xffffff2c,(undefined4 *)local_2c);
          puVar23 = (undefined4 *)0x468ab8;
          FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff2c);
          local_8 = CONCAT31(local_8._1_3_,0x59);
          iVar6 = FUN_00402460(&local_38);
          if (iVar6 == 1) {
            pbVar17 = (basic_string<> *)FUN_00402440(&local_38,0);
            pbVar18 = local_94 + 0x198;
LAB_00468b23:
            std::basic_string<>::operator=(pbVar18,pbVar17);
          }
          else {
            iVar6 = FUN_00402460(&local_38);
            if (iVar6 == 2) {
              puVar13 = (undefined4 *)FUN_00402440(&local_38,0);
              FUN_00402490(puVar13);
              iVar6 = (*pcVar19)();
              pbVar17 = (basic_string<> *)FUN_00402440(&local_38,1);
              pbVar18 = local_94 + iVar6 * 0x6c + 0x1f8;
              goto LAB_00468b23;
            }
          }
          thunk_FUN_004025a0(&local_38);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          puVar21 = puVar21 + 6;
        } while (puVar21 != local_a4);
      }
    }
  }
  else {
    local_8 = 0x50;
    FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_4c,(byte *)local_2c);
    puVar21 = (undefined4 *)((int)local_4c + 0x28);
    local_9c = CONCAT44(&stack0xffffff2c,(int)local_9c);
    FUN_00402950((int)&stack0xffffff2c);
    local_8._0_1_ = 0x51;
    FUN_004027c0(&stack0xffffff2c,puVar21);
    local_8._0_1_ = 0x50;
    puVar23 = (undefined4 *)0x46891b;
    FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff2c);
    local_8._0_1_ = 0x54;
    FUN_00401b20((int *)local_2c);
    local_8._0_1_ = 0x53;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 0x53;
    if ((local_34 - local_38) / 0x18 == 1) {
      std::basic_string<>::basic_string<>(local_8c,"failureflag");
      local_8 = CONCAT31(local_8._1_3_,0x55);
      FUN_00419c50(&DAT_0065b530,(undefined4 *)&local_9c,(byte *)local_8c);
      std::basic_string<>::operator=(local_94 + 0x198,(basic_string<> *)((int)local_9c + 0x28));
      FUN_00401b20((int *)local_8c);
      local_8 = 0xffffffff;
      thunk_FUN_004025a0(&local_38);
    }
    else {
      local_8._0_1_ = uVar1;
      iVar6 = FUN_00402460(&local_38);
      if (iVar6 == 2) {
        puVar21 = (undefined4 *)FUN_00402440(&local_38,0);
        FUN_00402490(puVar21);
        iVar6 = (*pcVar19)();
        pbVar17 = (basic_string<> *)FUN_00402440(&local_38,1);
        std::basic_string<>::operator=(local_94 + iVar6 * 0x6c + 0x1f8,pbVar17);
      }
      local_8 = 0xffffffff;
      thunk_FUN_004025a0(&local_38);
    }
  }
  std::basic_string<>::basic_string<>(local_2c,"successtext");
  local_8 = 0x5a;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"successtext");
    local_8 = 0x5f;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"successtext");
      local_8 = 0x60;
      pbVar10 = FUN_0047d5c0((byte *)local_2c);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      puVar21 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar10);
      local_a0 = puVar21;
      local_a4 = (undefined4 *)FUN_004131a0((int)pbVar10);
      if (puVar21 != local_a4) {
        do {
          FUN_004024e0(local_2c,puVar21);
          local_8 = 0x61;
          FUN_004024e0(&stack0xffffff2c,(undefined4 *)local_2c);
          puVar23 = (undefined4 *)0x468d8a;
          FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff2c);
          local_8 = CONCAT31(local_8._1_3_,0x62);
          iVar6 = FUN_00402460(&local_38);
          if (iVar6 == 1) {
            local_8d = '^';
            puVar13 = (undefined4 *)FUN_00402440(&local_38,0);
            FUN_004024e0(&stack0xffffff28,puVar13);
            piVar11 = (int *)FUN_00592a70(local_74,local_8d,puVar23);
            FUN_00413230((basic_string<> *)(local_94 + 0x180),piVar11);
            FUN_00401b20((int *)local_74);
          }
          else {
            iVar6 = FUN_00402460(&local_38);
            if (iVar6 == 2) {
              puVar21 = (undefined4 *)FUN_00402440(&local_38,0);
              FUN_00402490(puVar21);
              iVar6 = (*pcVar19)();
              local_8d = '^';
              puVar21 = (undefined4 *)FUN_00402440(&local_38,1);
              FUN_004024e0(&stack0xffffff28,puVar21);
              piVar11 = (int *)FUN_00592a70(local_74,local_8d,puVar23);
              FUN_00413230((basic_string<> *)(local_94 + iVar6 * 0x6c + 0x1e0),piVar11);
              FUN_00401b20((int *)local_74);
              puVar21 = local_a0;
            }
          }
          thunk_FUN_004025a0(&local_38);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          puVar21 = puVar21 + 6;
          local_a0 = puVar21;
        } while (puVar21 != local_a4);
      }
    }
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"successtext");
    local_8 = 0x5b;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    puVar23 = (undefined4 *)0x468bc2;
    FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
    local_8._0_1_ = 0x5d;
    FUN_00401b20((int *)local_44);
    iVar6 = FUN_00402460((int *)&local_20);
    if (iVar6 == 1) {
      std::basic_string<>::basic_string<>(local_8c,"successtext");
      local_8._0_1_ = 0x5e;
      local_8d = '^';
      pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
      FUN_004024e0(&stack0xffffff28,(undefined4 *)pbVar10);
      piVar11 = (int *)FUN_00592a70(local_74,local_8d,puVar23);
      FUN_00413230((basic_string<> *)(local_94 + 0x180),piVar11);
      FUN_00401b20((int *)local_74);
      pbVar18 = local_8c;
LAB_00468cbc:
      FUN_00401b20((int *)pbVar18);
    }
    else {
      iVar6 = FUN_00402460((int *)&local_20);
      if (iVar6 == 2) {
        puVar21 = (undefined4 *)FUN_00402440(&local_20,0);
        FUN_00402490(puVar21);
        iVar6 = (*pcVar19)();
        local_8d = '^';
        puVar21 = (undefined4 *)FUN_00402440(&local_20,1);
        FUN_004024e0(&stack0xffffff28,puVar21);
        piVar11 = (int *)FUN_00592a70(local_74,local_8d,puVar23);
        FUN_00413230((basic_string<> *)(local_94 + iVar6 * 0x6c + 0x1e0),piVar11);
        pbVar18 = local_74;
        goto LAB_00468cbc;
      }
    }
    local_8 = 0xffffffff;
    thunk_FUN_004025a0((int *)&local_20);
  }
  std::basic_string<>::basic_string<>(local_2c,"failuretext");
  local_8 = 99;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"failuretext");
    local_8 = 0x68;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"failuretext");
      local_8 = 0x69;
      pbVar10 = FUN_0047d5c0((byte *)local_2c);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      puVar21 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar10);
      local_a0 = puVar21;
      local_a4 = (undefined4 *)FUN_004131a0((int)pbVar10);
      if (puVar21 != local_a4) {
        do {
          FUN_004024e0(local_2c,puVar21);
          local_8 = 0x6a;
          FUN_004024e0(&stack0xffffff2c,(undefined4 *)local_2c);
          puVar23 = (undefined4 *)0x4690b9;
          FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff2c);
          local_8 = CONCAT31(local_8._1_3_,0x6b);
          iVar6 = FUN_00402460(&local_38);
          if (iVar6 == 1) {
            local_8d = '^';
            puVar13 = (undefined4 *)FUN_00402440(&local_38,0);
            FUN_004024e0(&stack0xffffff28,puVar13);
            piVar11 = (int *)FUN_00592a70(local_74,local_8d,puVar23);
            FUN_00413230((basic_string<> *)(local_94 + 0x1b0),piVar11);
            FUN_00401b20((int *)local_74);
          }
          else {
            iVar6 = FUN_00402460(&local_38);
            if (iVar6 == 2) {
              puVar21 = (undefined4 *)FUN_00402440(&local_38,0);
              FUN_00402490(puVar21);
              iVar6 = (*pcVar19)();
              local_8d = '^';
              puVar21 = (undefined4 *)FUN_00402440(&local_38,1);
              FUN_004024e0(&stack0xffffff28,puVar21);
              piVar11 = (int *)FUN_00592a70(local_74,local_8d,puVar23);
              FUN_00413230((basic_string<> *)(local_94 + iVar6 * 0x6c + 0x210),piVar11);
              FUN_00401b20((int *)local_74);
              puVar21 = local_a0;
            }
          }
          thunk_FUN_004025a0(&local_38);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          puVar21 = puVar21 + 6;
          local_a0 = puVar21;
        } while (puVar21 != local_a4);
      }
    }
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"failuretext");
    local_8 = 100;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    puVar23 = (undefined4 *)0x468f03;
    FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
    local_8._0_1_ = 0x66;
    FUN_00401b20((int *)local_44);
    iVar6 = FUN_00402460((int *)&local_20);
    if (iVar6 == 1) {
      std::basic_string<>::basic_string<>(local_8c,"failuretext");
      local_8._0_1_ = 0x67;
      pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
      FUN_004024e0(&stack0xffffff28,(undefined4 *)pbVar10);
      piVar11 = (int *)FUN_00592a70(local_74,'^',puVar23);
      FUN_00413230((basic_string<> *)(local_94 + 0x1b0),piVar11);
      FUN_00401b20((int *)local_74);
      pbVar18 = local_8c;
LAB_00468feb:
      FUN_00401b20((int *)pbVar18);
    }
    else {
      iVar6 = FUN_00402460((int *)&local_20);
      if (iVar6 == 2) {
        puVar21 = (undefined4 *)FUN_00402440(&local_20,0);
        FUN_00402490(puVar21);
        iVar6 = (*pcVar19)();
        puVar21 = (undefined4 *)FUN_00402440(&local_20,1);
        FUN_004024e0(&stack0xffffff28,puVar21);
        piVar11 = (int *)FUN_00592a70(local_74,'^',puVar23);
        FUN_00413230((basic_string<> *)(local_94 + iVar6 * 0x6c + 0x210),piVar11);
        pbVar18 = local_74;
        goto LAB_00468feb;
      }
    }
    local_8 = 0xffffffff;
    thunk_FUN_004025a0((int *)&local_20);
  }
  std::basic_string<>::basic_string<>(local_2c,"attritiontimer");
  local_8 = 0x6c;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"attritiontimer");
    local_8 = 0x6d;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar2 = FUN_004031c0(pbVar10,(byte *)&PTR_005ce008);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (cVar2 == '\0') {
      std::basic_string<>::basic_string<>(local_44,"attritiontimer");
      local_8 = 0x6e;
      pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
      FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
      puVar23 = (undefined4 *)0x469282;
      piVar11 = FUN_00592840(&local_20,in_stack_ffffff2c);
      iVar6 = piVar11[1];
      *(int *)(local_94 + 0x378) = *piVar11;
      *(int *)(local_94 + 0x37c) = iVar6;
      *(int *)(local_94 + 0x380) = piVar11[2];
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_44);
    }
    else {
      *(basic_string<> *)(local_94 + 0x377) = (basic_string<>)0x1;
    }
  }
  std::basic_string<>::basic_string<>(local_2c,"fogofwar");
  local_8 = 0x6f;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar10,(byte *)"false");
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (cVar2 != '\0') {
    *(basic_string<> *)(local_94 + 0x376) = (basic_string<>)0x0;
  }
  std::basic_string<>::basic_string<>(local_2c,"mode");
  local_8 = 0x70;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar10,(byte *)"combat");
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (cVar2 == '\0') {
    std::basic_string<>::basic_string<>(local_2c,"mode");
    local_8 = 0x71;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar2 = FUN_004031c0(pbVar10,&DAT_005e93b4);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (cVar2 == '\0') {
      std::basic_string<>::basic_string<>(local_2c,"mode");
      local_8 = 0x72;
      pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      cVar2 = FUN_004031c0(pbVar10,(byte *)"tutorial");
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      if (cVar2 == '\0') {
        std::basic_string<>::basic_string<>(local_2c,"mode");
        local_8 = 0x73;
        pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
        cVar2 = FUN_004031c0(pbVar10,(byte *)"pirates");
        local_8 = 0xffffffff;
        FUN_00401b20((int *)local_2c);
        if (cVar2 == '\0') {
          *(undefined4 *)(local_94 + 0x70) = 2;
          *(basic_string<> *)(local_94 + 0x312) = (basic_string<>)0x1;
        }
        else {
          *(undefined4 *)(local_94 + 0x70) = 4;
        }
      }
      else {
        *(undefined4 *)(local_94 + 0x70) = 1;
      }
    }
    else {
      *(undefined4 *)(local_94 + 0x70) = 0;
    }
  }
  else {
    *(undefined4 *)(local_94 + 0x70) = 3;
    *(basic_string<> *)(local_94 + 0x312) = (basic_string<>)0x0;
  }
  std::basic_string<>::basic_string<>(local_2c,"sensorghosts");
  local_8 = 0x74;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar10,(byte *)"false");
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  *(bool *)(local_94 + 0x310) = cVar2 == '\0';
  std::basic_string<>::basic_string<>(local_44,"target");
  local_8 = 0x75;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_44);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"target");
    local_8 = 0x76;
    pbVar17 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=(local_94 + 0x84,pbVar17);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_44,"syncwaypointsets");
  local_8 = 0x77;
  bVar3 = false;
  local_a0 = (undefined4 *)0x1;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"syncwaypointsets");
    local_8 = 0x78;
    bVar3 = true;
    local_a0 = (undefined4 *)0x3;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    cVar2 = FUN_004031c0(pbVar10,&DAT_005e425c);
    local_8d = '\x01';
    if (cVar2 != '\0') goto LAB_004695b4;
  }
  local_8d = '\0';
LAB_004695b4:
  if (bVar3) {
    FUN_00401b20((int *)local_2c);
  }
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_44);
  if (local_8d != '\0') {
    *(basic_string<> *)(local_94 + 0x311) = (basic_string<>)0x1;
  }
  std::basic_string<>::basic_string<>(local_2c,"jumpdestinationx");
  local_8 = 0x79;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"jumpdestinationx");
    local_8 = 0x7a;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar10);
    dVar22 = atof(pcVar7);
    local_a4 = (undefined4 *)(float)dVar22;
    *(undefined4 **)(local_94 + 0xa8) = local_a4;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_44,"jumpdestinationy");
    local_8 = 0x7b;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar10);
    dVar22 = atof(pcVar7);
    local_a4 = (undefined4 *)(float)dVar22;
    *(undefined4 **)(local_94 + 0xac) = local_a4;
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_2c,"jumpdestinationsector");
  local_8 = 0x7c;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar10);
  iVar6 = atoi(pcVar7);
  local_8 = 0xffffffff;
  *(int *)(local_94 + 0xb0) = iVar6;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_44,"waypointsets");
  local_8 = 0x7d;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_44);
  if (iVar6 == 0) {
    std::basic_string<>::basic_string<>(local_2c,"waypointsets");
    local_8 = 0x81;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      puVar21 = (undefined4 *)0x0;
      std::basic_string<>::basic_string<>(local_44,"waypointsets");
      local_8 = 0x82;
      pbVar10 = FUN_0047d5c0((byte *)local_44);
      iVar6 = FUN_00402460((int *)pbVar10);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_44);
      if (iVar6 != 0) {
        do {
          std::basic_string<>::basic_string<>(local_44,"waypointsets");
          local_8 = 0x83;
          puVar23 = puVar21;
          pbVar10 = FUN_0047d5c0((byte *)local_44);
          puVar23 = (undefined4 *)FUN_00402440(pbVar10,(int)puVar23);
          FUN_004024e0(&stack0xffffff2c,puVar23);
          puVar23 = (undefined4 *)0x4698c1;
          FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
          local_8 = CONCAT31(local_8._1_3_,0x85);
          FUN_00401b20((int *)local_44);
          puVar13 = (undefined4 *)FUN_00402440(&local_20,1);
          pcVar7 = (char *)FUN_00402490(puVar13);
          iVar6 = atoi(pcVar7);
          puVar13 = (undefined4 *)FUN_00402440(&local_20,0);
          pcVar7 = (char *)FUN_00402490(puVar13);
          iVar12 = atoi(pcVar7);
          local_8 = 0xffffffff;
          *(int *)(local_94 + iVar12 * 4 + 0x158) = iVar6;
          thunk_FUN_004025a0((int *)&local_20);
          puVar20 = (undefined4 *)((int)puVar21 + 1);
          local_a4 = puVar20;
          std::basic_string<>::basic_string<>(local_44,"waypointsets");
          local_8 = 0x82;
          pbVar10 = FUN_0047d5c0((byte *)local_44);
          puVar13 = (undefined4 *)FUN_00402460((int *)pbVar10);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_44);
          puVar21 = local_a4;
        } while (puVar20 < puVar13);
      }
    }
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"waypointsets");
    local_8 = 0x7e;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    puVar23 = (undefined4 *)0x4697a1;
    FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
    local_8 = CONCAT31(local_8._1_3_,0x80);
    FUN_00401b20((int *)local_44);
    puVar21 = (undefined4 *)FUN_00402440(&local_20,1);
    pcVar7 = (char *)FUN_00402490(puVar21);
    iVar6 = atoi(pcVar7);
    puVar21 = (undefined4 *)FUN_00402440(&local_20,0);
    pcVar7 = (char *)FUN_00402490(puVar21);
    iVar12 = atoi(pcVar7);
    local_8 = 0xffffffff;
    *(int *)(local_94 + iVar12 * 4 + 0x158) = iVar6;
    thunk_FUN_004025a0((int *)&local_20);
  }
  std::basic_string<>::basic_string<>(local_2c,"flag");
  local_8 = 0x86;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_2c,"flag");
  if (iVar6 == 0) {
    local_8 = 0x88;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      uVar9 = 0;
      std::basic_string<>::basic_string<>(local_2c,"flag");
      local_8 = 0x89;
      pbVar10 = FUN_0047d5c0((byte *)local_2c);
      iVar6 = FUN_00402460((int *)pbVar10);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_2c);
      if (iVar6 != 0) {
        do {
          std::basic_string<>::basic_string<>(local_2c,"flag");
          local_8 = 0x8a;
          uVar16 = uVar9;
          pbVar10 = FUN_0047d5c0((byte *)local_2c);
          puVar21 = (undefined4 *)FUN_00402440(pbVar10,uVar16);
          FUN_00403390((basic_string<> *)(local_94 + 1000),puVar21);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
          uVar9 = uVar9 + 1;
          std::basic_string<>::basic_string<>(local_2c,"flag");
          local_8 = 0x89;
          pbVar10 = FUN_0047d5c0((byte *)local_2c);
          uVar16 = FUN_00402460((int *)pbVar10);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_2c);
        } while (uVar9 < uVar16);
      }
    }
  }
  else {
    local_8 = 0x87;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_00403390((basic_string<> *)(local_94 + 1000),(undefined4 *)pbVar10);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"shortdesc");
  local_8 = 0x8b;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"shortdesc");
    local_8 = 0x8c;
    pbVar17 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=(local_94 + 0x30,pbVar17);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"description");
  local_8 = 0x8d;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"description");
    local_8 = 0x8e;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff28,(undefined4 *)pbVar10);
    piVar11 = (int *)FUN_00592a70(local_74,'^',puVar23);
    FUN_00413230((basic_string<> *)(local_94 + 0x48),piVar11);
    FUN_00401b20((int *)local_74);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"targetrange");
  local_8 = 0x8f;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"targetrange");
    local_8 = 0x90;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar10);
    iVar6 = atoi(pcVar7);
    local_8 = 0xffffffff;
    *(float *)(local_94 + 0x9c) = (float)iVar6;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"targetobjective");
  local_8 = 0x91;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_44,"targetobjective");
    local_8 = 0x92;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    FUN_00592d70(&local_20,',',(undefined4 *)in_stack_ffffff2c);
    local_8 = CONCAT31(local_8._1_3_,0x94);
    FUN_00401b20((int *)local_44);
    iVar6 = FUN_00402460((int *)&local_20);
    if (iVar6 == 2) {
      puVar21 = (undefined4 *)FUN_00402440(&local_20,0);
      pcVar7 = (char *)FUN_00402490(puVar21);
      dVar22 = atof(pcVar7);
      local_a4 = (undefined4 *)(float)dVar22;
      *(undefined4 **)(local_94 + 0xa0) = local_a4;
      puVar21 = (undefined4 *)FUN_00402440(&local_20,1);
      pcVar7 = (char *)FUN_00402490(puVar21);
      dVar22 = atof(pcVar7);
      local_a4 = (undefined4 *)(float)dVar22;
      *(undefined4 **)(local_94 + 0xa4) = local_a4;
    }
    local_8 = 0xffffffff;
    thunk_FUN_004025a0((int *)&local_20);
  }
  std::basic_string<>::basic_string<>(local_2c,"enemiesrequired");
  local_8 = 0x95;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_2c,"enemiesrequired");
  if (iVar6 == 0) {
    local_8 = 0x9a;
    iVar6 = FUN_0047d0f0((byte *)local_2c);
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_2c);
    if (iVar6 != 0) {
      puVar21 = (undefined4 *)0x0;
      local_a4 = (undefined4 *)0x0;
      std::basic_string<>::basic_string<>(local_5c,"enemiesrequired");
      local_8 = 0x9b;
      pbVar10 = FUN_0047d5c0((byte *)local_5c);
      iVar6 = FUN_00402460((int *)pbVar10);
      local_8 = 0xffffffff;
      FUN_00401b20((int *)local_5c);
      if (iVar6 != 0) {
        do {
          std::basic_string<>::basic_string<>(local_74,"enemiesrequired");
          local_8 = 0x9c;
          puVar23 = puVar21;
          pbVar10 = FUN_0047d5c0((byte *)local_74);
          puVar23 = (undefined4 *)FUN_00402440(pbVar10,(int)puVar23);
          FUN_004024e0(&stack0xffffff2c,puVar23);
          FUN_00592d70(&local_38,',',(undefined4 *)in_stack_ffffff2c);
          local_8._0_1_ = 0x9e;
          FUN_00401b20((int *)local_74);
          uVar9 = FUN_00402460(&local_38);
          if (3 < uVar9) {
            puVar21 = (undefined4 *)FUN_00402440(&local_38,0);
            pcVar7 = (char *)FUN_00402490(puVar21);
            local_a0 = (undefined4 *)atoi(pcVar7);
            FUN_0042b080(&local_20);
            local_8 = CONCAT31(local_8._1_3_,0x9f);
            uVar9 = FUN_00402460(&local_38);
            if (uVar9 < 5) {
              iVar6 = 0;
              do {
                local_4c = CONCAT44(iVar6,(int)local_4c);
                FUN_00412900(&local_20,(undefined4 *)((int)&local_4c + 4));
                iVar6 = iVar6 + 1;
              } while (iVar6 < 4);
            }
            else {
              uVar16 = 4;
              uVar9 = FUN_00402460(&local_38);
              if (4 < uVar9) {
                do {
                  puVar21 = (undefined4 *)FUN_00402440(&local_38,uVar16);
                  FUN_004024e0(&stack0xffffff2c,puVar21);
                  iVar6 = FUN_0040f990(in_stack_ffffff2c);
                  local_9c = CONCAT44(iVar6,(int)local_9c);
                  FUN_00412900(&local_20,(undefined4 *)((int)&local_9c + 4));
                  uVar16 = uVar16 + 1;
                  uVar9 = FUN_00402460(&local_38);
                } while (uVar16 < uVar9);
              }
            }
            uVar9 = 0;
            iVar6 = FUN_00412f10((int *)&local_20);
            if (iVar6 != 0) {
              do {
                puVar21 = (undefined4 *)FUN_00402440(&local_38,3);
                pcVar7 = (char *)FUN_00402490(puVar21);
                iVar6 = atoi(pcVar7);
                puVar21 = (undefined4 *)FUN_00402440(&local_38,2);
                pcVar7 = (char *)FUN_00402490(puVar21);
                iVar12 = atoi(pcVar7);
                puVar21 = (undefined4 *)FUN_00402440(&local_38,1);
                pcVar7 = (char *)FUN_00402490(puVar21);
                iVar14 = atoi(pcVar7);
                puVar15 = (undefined8 *)FUN_0043d760(local_80,iVar14,iVar12,iVar6);
                local_4c = *puVar15;
                uVar8 = *(undefined4 *)(puVar15 + 1);
                piVar11 = (int *)FUN_00412f00(&local_20,uVar9);
                uVar9 = uVar9 + 1;
                iVar6 = *piVar11 + (int)local_a0 * 4;
                *(undefined8 *)(local_94 + iVar6 * 0xc + 200) = local_4c;
                *(undefined4 *)(local_94 + iVar6 * 0xc + 0xd0) = uVar8;
                uVar16 = FUN_00412f10((int *)&local_20);
              } while (uVar9 < uVar16);
            }
            FUN_00412930((int *)&local_20);
            puVar21 = local_a4;
          }
          local_8 = 0xffffffff;
          thunk_FUN_004025a0(&local_38);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
          local_a4 = puVar21;
          std::basic_string<>::basic_string<>(local_5c,"enemiesrequired");
          local_8 = 0x9b;
          pbVar10 = FUN_0047d5c0((byte *)local_5c);
          puVar23 = (undefined4 *)FUN_00402460((int *)pbVar10);
          local_8 = 0xffffffff;
          FUN_00401b20((int *)local_5c);
        } while (puVar21 < puVar23);
      }
    }
  }
  else {
    local_8 = 0x96;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    FUN_00592d70(&local_50,',',(undefined4 *)in_stack_ffffff2c);
    local_8._0_1_ = 0x98;
    FUN_00401b20((int *)local_2c);
    uVar9 = FUN_00402460(&local_50);
    if (3 < uVar9) {
      puVar21 = (undefined4 *)FUN_00402440(&local_50,0);
      pcVar7 = (char *)FUN_00402490(puVar21);
      local_a0 = (undefined4 *)atoi(pcVar7);
      FUN_0042b080(&local_38);
      local_8 = CONCAT31(local_8._1_3_,0x99);
      uVar9 = FUN_00402460(&local_50);
      if (uVar9 < 5) {
        puVar21 = (undefined4 *)0x0;
        do {
          local_a4 = puVar21;
          FUN_00412900(&local_38,&local_a4);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        } while ((int)puVar21 < 4);
      }
      else {
        uVar16 = 4;
        uVar9 = FUN_00402460(&local_50);
        if (4 < uVar9) {
          do {
            puVar21 = (undefined4 *)FUN_00402440(&local_50,uVar16);
            FUN_004024e0(&stack0xffffff2c,puVar21);
            local_a4 = (undefined4 *)FUN_0040f990(in_stack_ffffff2c);
            FUN_00412900(&local_38,&local_a4);
            uVar16 = uVar16 + 1;
            uVar9 = FUN_00402460(&local_50);
          } while (uVar16 < uVar9);
        }
      }
      uVar9 = 0;
      iVar6 = FUN_00412f10(&local_38);
      if (iVar6 != 0) {
        do {
          puVar21 = (undefined4 *)FUN_00402440(&local_50,3);
          pcVar7 = (char *)FUN_00402490(puVar21);
          iVar6 = atoi(pcVar7);
          puVar21 = (undefined4 *)FUN_00402440(&local_50,2);
          pcVar7 = (char *)FUN_00402490(puVar21);
          iVar12 = atoi(pcVar7);
          puVar21 = (undefined4 *)FUN_00402440(&local_50,1);
          pcVar7 = (char *)FUN_00402490(puVar21);
          iVar14 = atoi(pcVar7);
          puVar15 = (undefined8 *)FUN_0043d760(local_80,iVar14,iVar12,iVar6);
          local_9c = *puVar15;
          uVar8 = *(undefined4 *)(puVar15 + 1);
          piVar11 = (int *)FUN_00412f00(&local_38,uVar9);
          uVar9 = uVar9 + 1;
          iVar6 = *piVar11 + (int)local_a0 * 4;
          *(undefined8 *)(local_94 + iVar6 * 0xc + 200) = local_9c;
          *(undefined4 *)(local_94 + iVar6 * 0xc + 0xd0) = uVar8;
          uVar16 = FUN_00412f10(&local_38);
        } while (uVar9 < uVar16);
      }
      FUN_00412930(&local_38);
    }
    local_8 = 0xffffffff;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_74,"resetnpcsonundock");
  local_8 = 0xa0;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
  cVar2 = FUN_004031c0(pbVar10,&DAT_005e425c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_74);
  *(bool *)(local_94 + 0x314) = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_2c,"startboarded");
  local_8 = 0xa1;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar10,&DAT_005e425c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_2c);
  *(bool *)(local_94 + 0x315) = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_44,"multiplayer");
  local_8 = 0xa2;
  pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  cVar2 = FUN_004031c0(pbVar10,&DAT_005e425c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_44);
  *(bool *)(local_94 + 0x313) = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_5c,"piratesrequired");
  local_8 = 0xa3;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_5c);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_5c);
  if (iVar6 == 0) {
    puVar15 = (undefined8 *)FUN_0043d760(&local_20,0,0,0);
    *(undefined8 *)(local_94 + 0xbc) = *puVar15;
    *(undefined4 *)(local_94 + 0xc4) = *(undefined4 *)(puVar15 + 1);
  }
  else {
    std::basic_string<>::basic_string<>(local_74,"piratesrequired");
    local_8 = 0xa4;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_74);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    piVar11 = FUN_00592700(&local_20,in_stack_ffffff2c);
    *(undefined8 *)(local_94 + 0xbc) = *(undefined8 *)piVar11;
    *(int *)(local_94 + 0xc4) = piVar11[2];
    local_8 = 0xffffffff;
    FUN_00401b20((int *)local_74);
  }
  std::basic_string<>::basic_string<>(local_74,"managedsectors");
  local_8 = 0xa5;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_74);
  local_8 = 0xffffffff;
  FUN_00401b20((int *)local_74);
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"managedsectors");
    local_8 = 0xa6;
    pbVar10 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff2c,(undefined4 *)pbVar10);
    FUN_00592d70(local_80,',',(undefined4 *)in_stack_ffffff2c);
    local_8 = CONCAT31(local_8._1_3_,0xa8);
    FUN_00401b20((int *)local_2c);
    uVar9 = 0;
    iVar6 = FUN_00402460(local_80);
    if (iVar6 != 0) {
      do {
        puVar21 = (undefined4 *)FUN_00402440(local_80,uVar9);
        pcVar7 = (char *)FUN_00402490(puVar21);
        iVar6 = atoi(pcVar7);
        local_9c = CONCAT44(iVar6,(int)local_9c);
        FUN_004130e0((basic_string<> *)(local_94 + 0x318),(undefined4 *)((int)&local_9c + 4));
        uVar9 = uVar9 + 1;
        uVar16 = FUN_00402460(local_80);
      } while (uVar9 < uVar16);
    }
    local_8 = 0xffffffff;
    thunk_FUN_004025a0(local_80);
  }
  FUN_00412900((void *)(DAT_0065b5cc + 0x60),&local_94);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
