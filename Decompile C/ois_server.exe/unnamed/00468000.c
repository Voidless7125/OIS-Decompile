#include "../ois_server.exe.h"


void FUN_0046a530(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  double dVar8;
  byte *in_stack_ffffff50;
  void *local_88 [4];
  undefined4 local_78;
  uint local_74;
  char *local_70 [3];
  float local_64;
  float local_60;
  float local_5c;
  float *local_58;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  float local_3c;
  float local_38;
  undefined4 local_34 [2];
  void *local_2c [4];
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005b6945;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004024e0(&stack0xffffff50,&DAT_00655708);
  iVar3 = FUN_004a82e0(in_stack_ffffff50);
  if (iVar3 != 0) {
    local_1c = 0.0;
    local_5c = 0.0;
    local_18 = 2.10195e-44;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"rotation",8);
    FUN_00419820(&DAT_0065b530,(int *)&local_64,(byte *)local_2c);
    fVar1 = local_60;
    iVar7 = 0;
    local_58 = (float *)local_64;
    while (local_58 != (float *)fVar1) {
      iVar7 = iVar7 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_58);
    }
    if (0xf < (uint)local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < (int)local_18 + 1U) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    if (iVar7 != 0) {
      local_1c = 0.0;
      local_18 = 2.10195e-44;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"rotation",8);
      local_8 = 0;
      pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      if (0xf < *(uint *)(pbVar4 + 0x14)) {
        pbVar4 = *(byte **)pbVar4;
      }
      dVar8 = atof((char *)pbVar4);
      local_58 = (float *)(float)dVar8;
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (0xf < (uint)local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < (int)local_18 + 1U) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_5c = (float)local_58;
    }
    local_1c = 0.0;
    local_18 = 2.10195e-44;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"location",8);
    FUN_00419820(&DAT_0065b530,(int *)&local_64,(byte *)local_2c);
    local_58 = (float *)local_64;
    while (local_58 != (float *)local_60) {
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_58);
    }
    if (0xf < (uint)local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < (int)local_18 + 1U) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0.0;
    local_18 = 2.10195e-44;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"location",8);
    local_8 = 1;
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xffffff50,(undefined4 *)pbVar4);
    FUN_00592d70(local_70,',',(undefined4 *)in_stack_ffffff50);
    local_8._0_1_ = 3;
    if (0xf < (uint)local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < (int)local_18 + 1U) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_1c = 0.0;
    local_18 = 2.10195e-44;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar5 = local_70[0];
    if (0xf < *(uint *)(local_70[0] + 0x14)) {
      pcVar5 = *(char **)local_70[0];
    }
    local_58 = (float *)atoi(pcVar5);
    pcVar5 = local_70[0] + 0x18;
    if (0xf < *(uint *)(local_70[0] + 0x2c)) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar7 = atoi(pcVar5);
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
    FUN_00402690(local_54,&DAT_005e925c,4);
    local_8._0_1_ = 4;
    fVar1 = *(float *)(iVar3 + 0x60);
    pbVar4 = FUN_00419170(&DAT_0065b530,(byte *)local_54);
    FUN_004024e0(local_88,(undefined4 *)pbVar4);
    local_3c = (float)(int)local_58;
    local_38 = (float)iVar7;
    local_8._0_1_ = 6;
    FUN_004024e0(local_34,local_88);
    local_8._0_1_ = 4;
    local_1c = local_5c;
    local_18 = fVar1;
    if (0xf < local_74) {
      pvVar6 = local_88[0];
      if ((0xfff < local_74 + 1) &&
         (pvVar6 = *(void **)((int)local_88[0] + -4),
         0x1f < (uint)((int)local_88[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    local_78 = 0;
    local_74 = 0xf;
    local_88[0] = (void *)((uint)local_88[0] & 0xffffff00);
    local_8._0_1_ = 8;
    if (0xf < local_40) {
      pvVar6 = local_54[0];
      if ((0xfff < local_40 + 1) &&
         (pvVar6 = *(void **)((int)local_54[0] + -4),
         0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    pfVar2 = *(float **)(iVar3 + 0x328);
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
    if (*(float **)(iVar3 + 0x32c) == pfVar2) {
      FUN_0047d970((void *)(iVar3 + 0x324),(uint *)pfVar2,(uint *)&local_3c);
    }
    else {
      *pfVar2 = local_3c;
      pfVar2[1] = local_38;
      local_8._0_1_ = 9;
      local_58 = pfVar2;
      FUN_004024e0(pfVar2 + 2,local_34);
      pfVar2[8] = local_1c;
      pfVar2[9] = local_18;
      *(int *)(iVar3 + 0x328) = *(int *)(iVar3 + 0x328) + 0x28;
    }
    FUN_0043daf0((int)&local_3c);
    FUN_004025a0((int *)local_70);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0046a9a0(void *this,void **param_1)

{
  bool bVar1;
  void **ppvVar2;
  void ***pppvVar3;
  int iVar4;
  uint *puVar5;
  char *_Str;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  char *_Str_00;
  void *in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_ffffff4c;
  void **local_8c;
  int local_88;
  char *local_80;
  int local_7c;
  void *local_70;
  float local_6c;
  undefined1 local_68 [36];
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b69b3;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0xf;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void **)((uint)local_2c[0] & 0xffffff00);
  local_8 = 2;
  uStack_7 = 0;
  local_70 = this;
  FUN_004024e0(&stack0xffffff4c,&param_1);
  FUN_00592d70(&local_8c,':',(undefined4 *)in_stack_ffffff4c);
  _local_8 = CONCAT31(uStack_7,3);
  if ((local_88 - (int)local_8c) / 0x18 == 2) {
    if (local_44 != local_8c) {
      ppvVar2 = local_8c;
      if ((void *)0xf < local_8c[5]) {
        ppvVar2 = *local_8c;
      }
      FUN_00402690(local_44,ppvVar2,(uint)local_8c[4]);
      uVar8 = local_30;
    }
    pppvVar3 = local_8c + 6;
    if (local_2c != pppvVar3) {
      if ((void *)0xf < local_8c[0xb]) {
        pppvVar3 = *pppvVar3;
      }
      in_stack_00000014 = local_8c[10];
      goto LAB_0046aa8f;
    }
  }
  else {
    pppvVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      pppvVar3 = param_1;
    }
LAB_0046aa8f:
    FUN_00402690(local_2c,pppvVar3,(uint)in_stack_00000014);
  }
  FUN_004024e0(&stack0xffffff4c,local_2c);
  iVar4 = FUN_004a6de0(in_stack_ffffff4c);
  if (iVar4 == 0) {
    FUN_004024e0(&stack0xffffff4c,local_2c);
    FUN_00592d70(&local_80,',',(undefined4 *)in_stack_ffffff4c);
    local_8 = 5;
    if ((local_7c - (int)local_80) / 0x18 == 2) {
      FUN_004024e0(&stack0xffffff4c,local_44);
      _Str = local_80 + 0x18;
      if (0xf < *(uint *)(local_80 + 0x2c)) {
        _Str = *(char **)_Str;
      }
      _Str_00 = local_80;
      if (0xf < *(uint *)(local_80 + 0x14)) {
        _Str_00 = *(char **)local_80;
      }
      iVar4 = atoi(_Str);
      local_6c = (float)iVar4;
      iVar4 = atoi(_Str_00);
      puVar5 = (uint *)FUN_0051a490(local_68,(float)iVar4,local_6c,in_stack_ffffff4c);
      local_8 = 6;
LAB_0046acc9:
      FUN_0047d380((void *)((int)local_70 + 0x264),puVar5);
      FUN_0043daf0((int)local_68);
      FUN_004025a0((int *)&local_80);
      goto LAB_0046ace8;
    }
    puVar6 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
    if (puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
      do {
        piVar9 = (int *)*puVar6;
        if (*piVar9 == *(int *)((int)local_70 + 0xe0)) goto LAB_0046abc7;
        puVar6 = puVar6 + 1;
      } while (puVar6 != *(undefined4 **)(DAT_0065b5cc + 0x40));
    }
    piVar9 = (int *)0x0;
LAB_0046abc7:
    if (0xf < *(uint *)(local_80 + 0x14)) {
      local_80 = *(char **)local_80;
    }
    iVar4 = atoi(local_80);
    piVar9 = FUN_00520fd0(piVar9,iVar4);
    if (piVar9 != (int *)0x0) {
      FUN_004024e0(&stack0xffffff4c,local_44);
      puVar5 = (uint *)FUN_0051a490(local_68,(float)piVar9[2],(float)piVar9[3],in_stack_ffffff4c);
      local_8 = 7;
      goto LAB_0046acc9;
    }
    FUN_00591070("ERROR","Invalid waypoint selected.");
    bVar1 = cc_assert_script_compatible("Invalid waypoint selected.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s");
    }
    FUN_004025a0((int *)&local_80);
    FUN_004025a0((int *)&local_8c);
    if (0xf < local_18) {
      ppvVar2 = local_2c[0];
      if (0xfff < local_18 + 1) {
        ppvVar2 = local_2c[0][-1];
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppvVar2);
    }
    if (uVar8 < 0x10) goto LAB_0046ad5f;
    pvVar7 = local_44[0];
    if (0xfff < uVar8 + 1) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    FUN_004024e0(&stack0xffffff4c,local_44);
    puVar5 = (uint *)FUN_0051a490(local_68,(float)*(double *)(iVar4 + 0x28),
                                  (float)*(double *)(iVar4 + 0x30),in_stack_ffffff4c);
    local_8 = 4;
    FUN_0047d380((void *)((int)this + 0x264),puVar5);
    FUN_0043daf0((int)local_68);
LAB_0046ace8:
    FUN_004025a0((int *)&local_8c);
    if (0xf < local_18) {
      ppvVar2 = local_2c[0];
      if (0xfff < local_18 + 1) {
        ppvVar2 = local_2c[0][-1];
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppvVar2);
    }
    if (local_30 < 0x10) goto LAB_0046ad5f;
    pvVar7 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  FUN_005adb3f(pvVar7);
LAB_0046ad5f:
  if (0xf < in_stack_00000018) {
    ppvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      ppvVar2 = param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)ppvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppvVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0046adc0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint *this;
  void *pvVar8;
  byte *pbVar9;
  int *piVar10;
  basic_string<> *pbVar11;
  uint uVar12;
  undefined4 uVar13;
  basic_string<> *pbVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  code *pcVar18;
  uint uVar19;
  undefined4 *puVar20;
  float fVar21;
  void *in_stack_fffffed4;
  void **in_stack_fffffeec;
  uint uVar22;
  uint local_dc;
  undefined4 *local_d8;
  int local_d4;
  float local_d0;
  undefined1 *local_cc;
  undefined4 *local_c4;
  undefined1 *local_c0;
  basic_string<> local_bc [24];
  int local_a4 [6];
  basic_string<> local_8c [24];
  basic_string<> local_74 [12];
  int local_68;
  int local_64 [2];
  basic_string<> local_5c [12];
  int local_50;
  int local_4c [2];
  basic_string<> local_44 [24];
  basic_string<> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b6ee1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00402950((int)local_bc);
  local_8 = 0;
  FUN_004027c0(local_bc,&DAT_00655708);
  local_8 = 1;
  std::basic_string<>::basic_string<>(local_2c,"scenario");
  local_8._0_1_ = 2;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 3;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"scenario");
    local_8._0_1_ = 4;
    FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
    std::basic_string<>::operator=(local_bc,(basic_string<> *)(local_64[0] + 0x28));
    local_8._0_1_ = 5;
    FUN_00401b20((int *)local_2c);
  }
  local_8._0_1_ = 1;
  local_c4 = (undefined4 *)&stack0xfffffeec;
  FUN_00402950((int)&stack0xfffffeec);
  local_8._0_1_ = 6;
  FUN_004027c0(&stack0xfffffeec,(undefined4 *)local_bc);
  local_8._0_1_ = 1;
  iVar5 = FUN_004a82e0((byte *)in_stack_fffffeec);
  if (iVar5 == 0) goto LAB_0046d70a;
  local_c4 = (undefined4 *)FUN_005adb0f(0x298);
  local_8._0_1_ = 8;
  local_c0 = FUN_004c9e70(local_c4,iVar5);
  local_8._0_1_ = 1;
  *(undefined4 *)(local_c0 + 0xe0) = *(undefined4 *)(iVar5 + 0x60);
  std::basic_string<>::basic_string<>(local_2c,"sectorid");
  local_8._0_1_ = 9;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 10;
  FUN_00401b20((int *)local_2c);
  pcVar18 = atoi_exref;
  local_8._0_1_ = 1;
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"sectorid");
    local_8._0_1_ = 0xb;
    FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
    pcVar7 = (char *)(local_64[0] + 0x28);
    if (0xf < *(uint *)(local_64[0] + 0x3c)) {
      pcVar7 = *(char **)pcVar7;
    }
    iVar6 = atoi(pcVar7);
    *(int *)(local_c0 + 0xe0) = iVar6;
    local_8._0_1_ = 0xc;
    FUN_00401b20((int *)local_2c);
  }
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"name");
  local_8._0_1_ = 0xd;
  FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
  std::basic_string<>::operator=
            ((basic_string<> *)(local_c0 + 4),(basic_string<> *)(local_64[0] + 0x28));
  local_8._0_1_ = 0xe;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"captain");
  local_8._0_1_ = 0xf;
  FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
  std::basic_string<>::operator=
            ((basic_string<> *)(local_c0 + 0x20c),(basic_string<> *)(local_64[0] + 0x28));
  local_8._0_1_ = 0x10;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"captainstyle");
  local_8._0_1_ = 0x11;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 0x12;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"captainstyle");
    local_8._0_1_ = 0x13;
    FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
    local_c4 = (undefined4 *)&stack0xfffffeec;
    puVar20 = (undefined4 *)(local_64[0] + 0x28);
    FUN_00402950((int)&stack0xfffffeec);
    local_8._0_1_ = 0x14;
    FUN_004027c0(&stack0xfffffeec,puVar20);
    local_8._0_1_ = 0x13;
    iVar6 = FUN_00501c80((byte *)in_stack_fffffeec);
    *(int *)(local_c0 + 0x24c) = iVar6;
    local_8._0_1_ = 0x15;
    FUN_00401b20((int *)local_2c);
  }
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"captainexperience");
  local_8._0_1_ = 0x16;
  iVar6 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 0x17;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  if (iVar6 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"captainexperience");
    local_8._0_1_ = 0x18;
    FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
    local_c4 = (undefined4 *)&stack0xfffffeec;
    puVar20 = (undefined4 *)(local_64[0] + 0x28);
    FUN_00402950((int)&stack0xfffffeec);
    local_8._0_1_ = 0x19;
    FUN_004027c0(&stack0xfffffeec,puVar20);
    local_8._0_1_ = 0x18;
    iVar6 = FUN_00501d10((byte *)in_stack_fffffeec);
    *(int *)(local_c0 + 0x250) = iVar6;
    local_8._0_1_ = 0x1a;
    FUN_00401b20((int *)local_2c);
  }
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"rego");
  local_8._0_1_ = 0x1b;
  FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
  std::basic_string<>::operator=
            ((basic_string<> *)(local_c0 + 0x1c),(basic_string<> *)(local_64[0] + 0x28));
  local_8._0_1_ = 0x1c;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  this = (uint *)(iVar5 + 0x78);
  piVar1 = *(int **)(iVar5 + 0x7c);
  for (piVar10 = (int *)*this; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    cVar2 = FUN_004143b0((void *)(*piVar10 + 0x1c),local_c0 + 0x1c);
    if (cVar2 != '\0') {
      local_d8 = (undefined4 *)0x0;
      local_c0[0xd8] = 1;
      piVar10 = (int *)*this;
      local_c4 = (undefined4 *)((uint)((int)*(int **)(iVar5 + 0x7c) + (3 - (int)piVar10)) >> 2);
      if (*(int **)(iVar5 + 0x7c) < piVar10) {
        local_c4 = (undefined4 *)0x0;
      }
      if (local_c4 != (undefined4 *)0x0) {
        do {
          iVar5 = *piVar10;
          cVar2 = FUN_004143b0((void *)(iVar5 + 0x1c),local_c0 + 0x1c);
          if (cVar2 != '\0') {
            *(undefined1 *)(iVar5 + 0xd8) = 1;
            in_stack_fffffeec = (void **)0x46b2d9;
            FUN_00591070(&DAT_005cdc70,"Note: %s / %s has a duplicate rego in scenario %s");
          }
          piVar10 = piVar10 + 1;
          local_d8 = (undefined4 *)((int)local_d8 + 1);
          pcVar18 = atoi_exref;
        } while (local_d8 != local_c4);
      }
      break;
    }
  }
  std::basic_string<>::basic_string<>(local_2c,"class");
  local_8._0_1_ = 0x1d;
  FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
  std::basic_string<>::operator=
            ((basic_string<> *)(local_c0 + 0x34),(basic_string<> *)(local_64[0] + 0x28));
  local_8._0_1_ = 0x1e;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"formationleader");
  local_8._0_1_ = 0x1f;
  FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
  std::basic_string<>::operator=
            ((basic_string<> *)(local_c0 + 0x130),(basic_string<> *)(local_64[0] + 0x28));
  local_8._0_1_ = 0x20;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"despawnflag");
  local_8._0_1_ = 0x21;
  FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
  std::basic_string<>::operator=
            ((basic_string<> *)(local_c0 + 0x148),(basic_string<> *)(local_64[0] + 0x28));
  local_8._0_1_ = 0x22;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"req");
  local_8._0_1_ = 0x23;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 0x24;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 1;
  if (iVar5 == 0) {
    local_8._0_1_ = uVar4;
    std::basic_string<>::basic_string<>(local_2c,"req");
    local_8._0_1_ = 0x2a;
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    local_8._0_1_ = 0x2b;
    FUN_00401b20((int *)local_2c);
    local_8._0_1_ = 1;
    if (iVar5 != 0) {
      local_dc = 0;
      *local_c0 = 1;
      std::basic_string<>::basic_string<>(local_2c,"req");
      local_8._0_1_ = 0x2c;
      FUN_0047fec0(local_64,(byte *)local_2c);
      iVar5 = *(int *)(local_64[0] + 0x2c);
      iVar6 = *(int *)(local_64[0] + 0x28);
      local_8._0_1_ = 0x2d;
      FUN_00401b20((int *)local_2c);
      iVar5 = iVar5 - iVar6;
      iVar6 = iVar5 >> 0x1f;
      if (iVar5 / 0x18 + iVar6 != iVar6) {
        local_d4 = 0;
        do {
          local_8._0_1_ = 1;
          pvVar8 = (void *)FUN_005adb0f(0x40);
          local_8._0_1_ = 0x2e;
          std::basic_string<>::basic_string<>(local_2c,"req");
          local_8 = CONCAT31(local_8._1_3_,0x2f);
          FUN_0047fec0(local_4c,(byte *)local_2c);
          local_cc = &stack0xfffffeec;
          iVar5 = *(int *)(local_4c[0] + 0x28);
          FUN_00402950((int)&stack0xfffffeec);
          local_8 = 0x30;
          FUN_004027c0(&stack0xfffffeec,(undefined4 *)(iVar5 + local_d4));
          local_8 = CONCAT31(local_8._1_3_,0x2f);
          local_c4 = (undefined4 *)FUN_004a1a40(pvVar8,in_stack_fffffeec);
          local_8 = 0x31;
          FUN_004130e0(local_c0 + 0x270,&local_c4);
          local_8 = 0x32;
          FUN_00401b20((int *)local_2c);
          local_8._0_1_ = 1;
          local_d4 = local_d4 + 0x18;
          local_dc = local_dc + 1;
          std::basic_string<>::basic_string<>(local_2c,"req");
          local_8._0_1_ = 0x2c;
          FUN_0047fec0(local_64,(byte *)local_2c);
          iVar5 = *(int *)(local_64[0] + 0x2c);
          iVar6 = *(int *)(local_64[0] + 0x28);
          local_8._0_1_ = 0x2d;
          FUN_00401b20((int *)local_2c);
          pcVar18 = atoi_exref;
        } while (local_dc < (uint)((iVar5 - iVar6) / 0x18));
      }
    }
  }
  else {
    *local_c0 = 1;
    pvVar8 = (void *)FUN_005adb0f(0x40);
    local_8._0_1_ = 0x25;
    std::basic_string<>::basic_string<>(local_2c,"req");
    local_8 = CONCAT31(local_8._1_3_,0x26);
    FUN_00419c50(&DAT_0065b530,local_64,(byte *)local_2c);
    FUN_00402950((int)&stack0xfffffeec);
    local_8 = 0x27;
    FUN_004027c0(&stack0xfffffeec,(undefined4 *)(local_64[0] + 0x28));
    local_8 = CONCAT31(local_8._1_3_,0x26);
    local_c4 = (undefined4 *)FUN_004a1a40(pvVar8,in_stack_fffffeec);
    local_8 = 0x28;
    FUN_004130e0(local_c0 + 0x270,&local_c4);
    local_8 = 0x29;
    FUN_00401b20((int *)local_2c);
    pcVar18 = atoi_exref;
  }
  local_8._0_1_ = 1;
  std::basic_string<>::basic_string<>(local_2c,"date");
  local_8._0_1_ = 0x33;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 0x34;
  FUN_00401b20((int *)local_2c);
  local_8._0_1_ = 1;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 1;
  if (iVar5 != 0) {
    *local_c0 = 1;
    std::basic_string<>::basic_string<>(local_2c,"date");
    local_8._0_1_ = 0x35;
    FUN_00419c50(&DAT_0065b530,local_4c,(byte *)local_2c);
    local_cc = &stack0xfffffeec;
    FUN_00402950((int)&stack0xfffffeec);
    local_8._0_1_ = 0x36;
    FUN_004027c0(&stack0xfffffeec,(undefined4 *)(local_4c[0] + 0x28));
    local_8._0_1_ = 0x35;
    FUN_004b34b0(local_c0 + 0x27c,in_stack_fffffeec);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
    uVar4 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar4;
  std::basic_string<>::basic_string<>(local_2c,"location");
  local_8._0_1_ = 0x37;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_2c,"location");
  if (iVar5 == 0) {
    local_8._0_1_ = 0x3c;
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
    if (iVar5 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"location");
      local_8._0_1_ = 0x3d;
      pbVar9 = FUN_0047d5c0((byte *)local_2c);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      puVar20 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar9);
      local_c4 = (undefined4 *)FUN_004131a0((int)pbVar9);
      if (puVar20 != local_c4) {
        do {
          FUN_004024e0(local_2c,puVar20);
          local_8._0_1_ = 0x3e;
          FUN_004024e0(&stack0xfffffeec,(undefined4 *)local_2c);
          FUN_00592d70(&local_68,',',in_stack_fffffeec);
          local_8._0_1_ = 0x3f;
          iVar5 = FUN_00402460(&local_68);
          if (iVar5 == 2) {
            puVar15 = (undefined4 *)FUN_00402440(&local_68,1);
            FUN_00402490(puVar15);
            iVar5 = (*pcVar18)();
            fVar21 = (float)iVar5;
            puVar15 = (undefined4 *)FUN_00402440(&local_68,0);
            FUN_00402490(puVar15);
            iVar5 = (*pcVar18)();
            puVar15 = (undefined4 *)cocos2d::Vec2::Vec2((Vec2 *)local_4c,(float)iVar5,fVar21);
            local_8._0_1_ = 0x40;
            FUN_0042b040(local_c0 + 0x4c,puVar15);
            cocos2d::Vec2::~Vec2((Vec2 *)local_4c);
          }
          else {
            piVar10 = FUN_004a7280(DAT_0065b5cc,*(int *)(local_c0 + 0xe0));
            puVar15 = (undefined4 *)FUN_00402440(&local_68,0);
            FUN_00402490(puVar15);
            iVar5 = (*pcVar18)();
            piVar10 = FUN_00520fd0(piVar10,iVar5);
            if (piVar10 == (int *)0x0) {
              FUN_00591070("ERROR","Invalid waypoint selected.");
              bVar3 = cc_assert_script_compatible("Invalid waypoint selected.");
              if (!bVar3) {
                cocos2d::log("Assert failed: %s");
              }
              thunk_FUN_004025a0(&local_68);
              FUN_00401b20((int *)local_2c);
              goto LAB_0046d70a;
            }
            FUN_0042b040(local_c0 + 0x4c,piVar10 + 2);
          }
          thunk_FUN_004025a0(&local_68);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
          puVar20 = puVar20 + 6;
        } while (puVar20 != local_c4);
      }
    }
  }
  else {
    local_8._0_1_ = 0x38;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_68,',',in_stack_fffffeec);
    local_8._0_1_ = 0x3a;
    FUN_00401b20((int *)local_2c);
    iVar5 = FUN_00402460(&local_68);
    if (iVar5 == 2) {
      puVar20 = (undefined4 *)FUN_00402440(&local_68,1);
      FUN_00402490(puVar20);
      iVar5 = (*pcVar18)();
      fVar21 = (float)iVar5;
      puVar20 = (undefined4 *)FUN_00402440(&local_68,0);
      FUN_00402490(puVar20);
      iVar5 = (*pcVar18)();
      puVar20 = (undefined4 *)cocos2d::Vec2::Vec2((Vec2 *)local_4c,(float)iVar5,fVar21);
      local_8._0_1_ = 0x3b;
      FUN_0042b040(local_c0 + 0x4c,puVar20);
      cocos2d::Vec2::~Vec2((Vec2 *)local_4c);
    }
    else {
      puVar20 = (undefined4 *)FUN_00402440(&local_68,0);
      FUN_004024e0(&stack0xfffffeec,puVar20);
      iVar5 = FUN_004a6de0((byte *)in_stack_fffffeec);
      if (iVar5 == 0) {
        piVar10 = FUN_004a7280(DAT_0065b5cc,*(int *)(local_c0 + 0xe0));
        puVar20 = (undefined4 *)FUN_00402440(&local_68,0);
        FUN_00402490(puVar20);
        iVar5 = (*pcVar18)();
        piVar10 = FUN_00520fd0(piVar10,iVar5);
        if (piVar10 == (int *)0x0) {
          FUN_00591070("ERROR","Invalid waypoint selected.");
          bVar3 = cc_assert_script_compatible("Invalid waypoint selected.");
          if (!bVar3) {
            cocos2d::log("Assert failed: %s");
          }
          thunk_FUN_004025a0(&local_68);
          goto LAB_0046d70a;
        }
        FUN_0042b040(local_c0 + 0x4c,piVar10 + 2);
      }
      else {
        pbVar11 = (basic_string<> *)FUN_00402440(&local_68,0);
        std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x58),pbVar11);
      }
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_68);
  }
  std::basic_string<>::basic_string<>(local_2c,"locationx");
  local_8._0_1_ = 0x41;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  pcVar18 = atoi_exref;
  if (iVar5 != 0) {
    cocos2d::Vec2::Vec2((Vec2 *)&local_d0);
    local_8._0_1_ = 0x42;
    std::basic_string<>::basic_string<>(local_2c,"locationx");
    local_8._0_1_ = 0x43;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar9);
    pcVar18 = atoi_exref;
    iVar5 = atoi(pcVar7);
    local_8._0_1_ = 0x42;
    local_d0 = (float)iVar5;
    FUN_00401b20((int *)local_2c);
    std::basic_string<>::basic_string<>(local_5c,"locationy");
    local_8._0_1_ = 0x44;
    iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_5c);
    local_8._0_1_ = 0x42;
    FUN_00401b20((int *)local_5c);
    if (iVar5 == 0) {
      local_cc = (undefined1 *)0x0;
    }
    else {
      std::basic_string<>::basic_string<>(local_2c,"locationy");
      local_8._0_1_ = 0x45;
      pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
      pcVar7 = (char *)FUN_00402490((undefined4 *)pbVar9);
      iVar5 = atoi(pcVar7);
      local_8._0_1_ = 0x42;
      local_cc = (undefined1 *)(float)iVar5;
      FUN_00401b20((int *)local_2c);
    }
    FUN_0042b040(local_c0 + 0x4c,&local_d0);
    local_8._0_1_ = 1;
    cocos2d::Vec2::~Vec2((Vec2 *)&local_d0);
  }
  std::basic_string<>::basic_string<>(local_2c,"destination");
  local_8._0_1_ = 0x46;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_2c,"destination");
  if (iVar5 == 0) {
    local_8._0_1_ = 0x48;
    iVar5 = FUN_0047d0f0((byte *)local_2c);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
    if (iVar5 != 0) {
      std::basic_string<>::basic_string<>(local_2c,"destination");
      local_8._0_1_ = 0x49;
      pbVar9 = FUN_0047d5c0((byte *)local_2c);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      puVar20 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar9);
      puVar15 = (undefined4 *)FUN_004131a0((int)pbVar9);
      for (; puVar20 != puVar15; puVar20 = puVar20 + 6) {
        FUN_004024e0(local_2c,puVar20);
        local_8._0_1_ = 0x4a;
        FUN_004024e0(&stack0xfffffeec,(undefined4 *)local_2c);
        FUN_0046a9a0(local_c0,in_stack_fffffeec);
        local_8._0_1_ = 1;
        FUN_00401b20((int *)local_2c);
      }
    }
  }
  else {
    local_8._0_1_ = 0x47;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_0046a9a0(local_c0,in_stack_fffffeec);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"destinationdelaytime");
  local_8._0_1_ = 0x4b;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"destinationdelaytime");
    local_8._0_1_ = 0x4c;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    piVar10 = FUN_00592840(&local_50,in_stack_fffffeec);
    *(undefined8 *)(local_c0 + 600) = *(undefined8 *)piVar10;
    *(int *)(local_c0 + 0x260) = piVar10[2];
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"loopdestinations");
  local_8._0_1_ = 0x4d;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  local_c0[0x255] = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_5c,"randomisedestinations");
  local_8._0_1_ = 0x4e;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_5c);
  if (cVar2 != '\0') {
    local_c0[0x254] = 1;
  }
  std::basic_string<>::basic_string<>(local_2c,"followplayeronflag");
  local_8._0_1_ = 0x4f;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_2c,"followplayeronflag");
    local_8._0_1_ = 0x50;
    pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
    std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x1dc),pbVar11);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_2c);
  }
  std::basic_string<>::basic_string<>(local_2c,"chameleon");
  local_8._0_1_ = 0x51;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (cVar2 != '\0') {
    local_c0[0x160] = 1;
  }
  std::basic_string<>::basic_string<>(local_2c,"attackplayer");
  local_8._0_1_ = 0x52;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (cVar2 != '\0') {
    local_c0[0x161] = 1;
  }
  std::basic_string<>::basic_string<>(local_2c,"attackflag");
  local_8._0_1_ = 0x53;
  pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x194),pbVar11);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  std::basic_string<>::basic_string<>(local_5c,"cancelattackflag");
  local_8._0_1_ = 0x54;
  pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_5c);
  std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x1ac),pbVar11);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_5c);
  std::basic_string<>::basic_string<>(local_74,"attackmessage");
  local_8._0_1_ = 0x55;
  pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_74);
  std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x164),pbVar11);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_74);
  std::basic_string<>::basic_string<>(local_8c,"cancelattackmessage");
  local_8._0_1_ = 0x56;
  pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_8c);
  std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x17c),pbVar11);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_8c);
  std::basic_string<>::basic_string<>(local_44,"difficulty");
  local_8._0_1_ = 0x57;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    iVar5 = 0;
    do {
      local_c0[iVar5 + 0xd0] = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    std::basic_string<>::basic_string<>(local_44,"difficulty");
    local_8._0_1_ = 0x58;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0x5a);
    FUN_00401b20((int *)local_44);
    uVar19 = 0;
    iVar5 = FUN_00402460(&local_50);
    if (iVar5 != 0) {
      do {
        puVar20 = (undefined4 *)FUN_00402440(&local_50,uVar19);
        FUN_004024e0(&stack0xfffffeec,puVar20);
        iVar5 = FUN_0040f990((byte *)in_stack_fffffeec);
        uVar19 = uVar19 + 1;
        local_c0[iVar5 + 0xd0] = 1;
        uVar12 = FUN_00402460(&local_50);
      } while (uVar19 < uVar12);
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"angle");
  local_8._0_1_ = 0x5b;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  FUN_00402490((undefined4 *)pbVar9);
  uVar13 = (*pcVar18)();
  local_8._0_1_ = 1;
  *(undefined4 *)(local_c0 + 0xdc) = uVar13;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_8c,"reward");
  local_8._0_1_ = 0x5c;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_8c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_8c);
  if (iVar5 == 0) {
    *(undefined4 *)(local_c0 + 0x110) = 0;
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"reward");
    local_8._0_1_ = 0x5d;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_00402490((undefined4 *)pbVar9);
    uVar13 = (*pcVar18)();
    local_8._0_1_ = 1;
    *(undefined4 *)(local_c0 + 0x110) = uVar13;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"waypoint");
  local_8._0_1_ = 0x5e;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_44,"waypoint");
  if (iVar5 == 0) {
    local_8._0_1_ = 100;
    iVar5 = FUN_0047d0f0((byte *)local_44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
    if (iVar5 != 0) {
      uVar19 = 0;
      std::basic_string<>::basic_string<>(local_2c,"waypoint");
      local_8._0_1_ = 0x65;
      pbVar9 = FUN_0047d5c0((byte *)local_2c);
      iVar5 = FUN_00402460((int *)pbVar9);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar5 != 0) {
        do {
          std::basic_string<>::basic_string<>(local_44,"waypoint");
          local_8._0_1_ = 0x66;
          uVar12 = uVar19;
          pbVar9 = FUN_0047d5c0((byte *)local_44);
          puVar20 = (undefined4 *)FUN_00402440(pbVar9,uVar12);
          FUN_004024e0(&stack0xfffffeec,puVar20);
          FUN_00592d70(&local_50,',',in_stack_fffffeec);
          local_8 = CONCAT31(local_8._1_3_,0x68);
          FUN_00401b20((int *)local_44);
          iVar5 = FUN_00402460(&local_50);
          if (iVar5 == 2) {
            iVar5 = FUN_00413120((int *)(local_c0 + 0x70));
            if ((iVar5 == 0) && (iVar5 = FUN_00413120((int *)(local_c0 + 0x4c)), iVar5 != 0)) {
              puVar20 = (undefined4 *)FUN_00413110(local_c0 + 0x4c,0);
              FUN_0042b040(local_c0 + 0x70,puVar20);
            }
            puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
            FUN_00402490(puVar20);
            iVar5 = (*pcVar18)();
            fVar21 = (float)iVar5;
            puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
            FUN_00402490(puVar20);
            iVar5 = (*pcVar18)();
            cocos2d::Vec2::Vec2((Vec2 *)local_64,(float)iVar5,fVar21);
            local_8 = CONCAT31(local_8._1_3_,0x69);
            FUN_0042b040(local_c0 + 0x70,local_64);
            cocos2d::Vec2::~Vec2((Vec2 *)local_64);
          }
          local_8._0_1_ = 1;
          thunk_FUN_004025a0(&local_50);
          uVar19 = uVar19 + 1;
          std::basic_string<>::basic_string<>(local_2c,"waypoint");
          local_8._0_1_ = 0x65;
          pbVar9 = FUN_0047d5c0((byte *)local_2c);
          uVar12 = FUN_00402460((int *)pbVar9);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar19 < uVar12);
      }
    }
  }
  else {
    local_8._0_1_ = 0x5f;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8._0_1_ = 0x61;
    FUN_00401b20((int *)local_44);
    iVar5 = FUN_00402460(&local_50);
    if (iVar5 == 2) {
      puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
      FUN_00402490(puVar20);
      iVar5 = (*pcVar18)();
      fVar21 = (float)iVar5;
      puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
      FUN_00402490(puVar20);
      iVar5 = (*pcVar18)();
      cocos2d::Vec2::Vec2((Vec2 *)local_64,(float)iVar5,fVar21);
      local_8._0_1_ = 0x62;
      puVar17 = local_c0 + 0x70;
LAB_0046c3dd:
      FUN_0042b040(puVar17,local_64);
      cocos2d::Vec2::~Vec2((Vec2 *)local_64);
    }
    else {
      iVar5 = FUN_00402460(&local_50);
      if (iVar5 == 3) {
        puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
        FUN_00402490(puVar20);
        iVar5 = (*pcVar18)();
        puVar20 = (undefined4 *)FUN_00402440(&local_50,2);
        FUN_00402490(puVar20);
        iVar6 = (*pcVar18)();
        fVar21 = (float)iVar6;
        puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
        FUN_00402490(puVar20);
        iVar6 = (*pcVar18)();
        cocos2d::Vec2::Vec2((Vec2 *)local_64,(float)iVar6,fVar21);
        local_8._0_1_ = 99;
        puVar17 = local_c0 + iVar5 * 0xc + 0x70;
        goto LAB_0046c3dd;
      }
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"loopwaypoints");
  local_8._0_1_ = 0x6a;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  local_c0[0xd9] = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_8c,"weapons");
  local_8._0_1_ = 0x6b;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_8c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_8c);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"weapons");
    local_8._0_1_ = 0x6c;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    piVar10 = (int *)FUN_00592d70(&local_50,',',in_stack_fffffeec);
    FUN_0042b8c0(local_c0 + 0xec,piVar10);
    thunk_FUN_004025a0(&local_50);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"startoff");
  local_8._0_1_ = 0x6d;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  local_c0[0xf9] = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_8c,"startradius");
  local_8._0_1_ = 0x6e;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
  FUN_00402490((undefined4 *)pbVar9);
  uVar13 = (*pcVar18)();
  local_8._0_1_ = 1;
  *(undefined4 *)(local_c0 + 0xe4) = uVar13;
  FUN_00401b20((int *)local_8c);
  std::basic_string<>::basic_string<>(local_2c,"mode");
  local_8._0_1_ = 0x6f;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_2c);
  cVar2 = FUN_004031c0(pbVar9,(byte *)"pirate");
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (cVar2 == '\0') {
    std::basic_string<>::basic_string<>(local_44,"mode");
    local_8._0_1_ = 0x70;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    cVar2 = FUN_004031c0(pbVar9,(byte *)"playable");
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
    if (cVar2 == '\0') {
      std::basic_string<>::basic_string<>(local_44,"mode");
      local_8._0_1_ = 0x71;
      pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
      cVar2 = FUN_004031c0(pbVar9,(byte *)"general");
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_44);
      if (cVar2 == '\0') {
        std::basic_string<>::basic_string<>(local_44,"mode");
        local_8._0_1_ = 0x72;
        pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
        cVar2 = FUN_004031c0(pbVar9,(byte *)"military");
        local_8._0_1_ = 1;
        FUN_00401b20((int *)local_44);
        uVar13 = 1;
        if (cVar2 != '\0') {
          uVar13 = 4;
        }
        *(undefined4 *)(local_c0 + 0xe8) = uVar13;
      }
      else {
        *(undefined4 *)(local_c0 + 0xe8) = 3;
      }
    }
    else {
      *(undefined4 *)(local_c0 + 0xe8) = 0;
    }
  }
  else {
    *(undefined4 *)(local_c0 + 0xe8) = 2;
  }
  std::basic_string<>::basic_string<>(local_44,"team");
  local_8._0_1_ = 0x73;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 == 0) {
    *(undefined4 *)(local_c0 + 0xd4) = 0;
  }
  else {
    std::basic_string<>::basic_string<>(local_44,"team");
    local_8._0_1_ = 0x74;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_00402490((undefined4 *)pbVar9);
    uVar13 = (*pcVar18)();
    local_8._0_1_ = 1;
    *(undefined4 *)(local_c0 + 0xd4) = uVar13;
    FUN_00401b20((int *)local_44);
    if ((2 < *(int *)(local_c0 + 0xd4)) &&
       (bVar3 = cc_assert_script_compatible("Invalid team."), !bVar3)) {
      cocos2d::log("Assert failed: %s");
    }
  }
  std::basic_string<>::basic_string<>(local_44,"detectplayerflag");
  local_8._0_1_ = 0x75;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"detectplayerflag");
    local_8._0_1_ = 0x76;
    pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_44);
    std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x1c4),pbVar11);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"playermessage");
  local_8._0_1_ = 0x77;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_44,"playermessage");
  if (iVar5 == 0) {
    local_8._0_1_ = 0x7b;
    iVar5 = FUN_0047d0f0((byte *)local_44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
    if (iVar5 != 0) {
      std::basic_string<>::basic_string<>(local_44,"playermessage");
      local_8._0_1_ = 0x7c;
      pbVar9 = FUN_0047d5c0((byte *)local_44);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_44);
      puVar20 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar9);
      puVar15 = (undefined4 *)FUN_004131a0((int)pbVar9);
      for (; puVar20 != puVar15; puVar20 = puVar20 + 6) {
        FUN_004024e0(local_44,puVar20);
        local_8._0_1_ = 0x7d;
        FUN_004024e0(&stack0xfffffeec,(undefined4 *)local_44);
        FUN_00592d70(&local_50,',',in_stack_fffffeec);
        local_8 = CONCAT31(local_8._1_3_,0x7e);
        uVar19 = FUN_00402460(&local_50);
        if (1 < uVar19) {
          pbVar11 = (basic_string<> *)FUN_00402440(&local_50,1);
          pbVar9 = (byte *)FUN_00402440(&local_50,0);
          pbVar14 = (basic_string<> *)FUN_0047d6a0(local_c0 + 0x204,pbVar9);
          std::basic_string<>::operator=(pbVar14,pbVar11);
        }
        thunk_FUN_004025a0(&local_50);
        local_8._0_1_ = 1;
        FUN_00401b20((int *)local_44);
      }
    }
  }
  else {
    local_8._0_1_ = 0x78;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0x7a);
    FUN_00401b20((int *)local_44);
    uVar19 = FUN_00402460(&local_50);
    if (1 < uVar19) {
      pbVar11 = (basic_string<> *)FUN_00402440(&local_50,1);
      pbVar9 = (byte *)FUN_00402440(&local_50,0);
      pbVar14 = (basic_string<> *)FUN_0047d6a0(local_c0 + 0x204,pbVar9);
      std::basic_string<>::operator=(pbVar14,pbVar11);
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"escortgracetime");
  local_8._0_1_ = 0x7f;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"escortgracetime");
    local_8._0_1_ = 0x80;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_00402490((undefined4 *)pbVar9);
    iVar5 = (*pcVar18)();
    local_8._0_1_ = 1;
    *(float *)(local_c0 + 500) = (float)iVar5;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"escortoport");
  local_8._0_1_ = 0x81;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_44,"escortoport");
  if (iVar5 == 0) {
    local_8._0_1_ = 0x87;
    iVar5 = FUN_0047d0f0((byte *)local_44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
    if (iVar5 != 0) {
      std::basic_string<>::basic_string<>(local_44,"escortoport");
      local_8._0_1_ = 0x88;
      pbVar9 = FUN_0047d5c0((byte *)local_44);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_44);
      puVar20 = (undefined4 *)FUN_004131b0((undefined4 *)pbVar9);
      puVar15 = (undefined4 *)FUN_004131a0((int)pbVar9);
      local_c4 = puVar15;
      for (; puVar20 != puVar15; puVar20 = puVar20 + 6) {
        FUN_004024e0(local_44,puVar20);
        local_8._0_1_ = 0x89;
        FUN_004024e0(&stack0xfffffeec,(undefined4 *)local_44);
        FUN_00592d70(&local_50,',',in_stack_fffffeec);
        local_8._0_1_ = 0x8a;
        uVar19 = FUN_00402460(&local_50);
        if (1 < uVar19) {
          local_cc = &stack0xfffffeec;
          puVar16 = (undefined4 *)FUN_00402440(&local_50,1);
          FUN_004024e0(&stack0xfffffeec,puVar16);
          local_8._0_1_ = 0x8b;
          puVar16 = (undefined4 *)FUN_00402440(&local_50,0);
          FUN_004024e0(&stack0xfffffed4,puVar16);
          local_8._0_1_ = 0x8a;
          puVar16 = FUN_0043dc00(local_a4,in_stack_fffffed4);
          local_8._0_1_ = 0x8c;
          FUN_0047d320(local_c0 + 0x1f8,puVar16);
          FUN_00419bc0(local_a4);
        }
        thunk_FUN_004025a0(&local_50);
        local_8._0_1_ = 1;
        FUN_00401b20((int *)local_44);
        pcVar18 = atoi_exref;
      }
    }
  }
  else {
    local_8._0_1_ = 0x82;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8._0_1_ = 0x84;
    FUN_00401b20((int *)local_44);
    uVar19 = FUN_00402460(&local_50);
    if (1 < uVar19) {
      local_cc = &stack0xfffffeec;
      puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
      FUN_004024e0(&stack0xfffffeec,puVar20);
      local_8._0_1_ = 0x85;
      puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
      FUN_004024e0(&stack0xfffffed4,puVar20);
      local_8._0_1_ = 0x84;
      puVar20 = FUN_0043dc00(local_a4,in_stack_fffffed4);
      local_8._0_1_ = 0x86;
      FUN_0047d320(local_c0 + 0x1f8,puVar20);
      FUN_00419bc0(local_a4);
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"target");
  local_8._0_1_ = 0x8d;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  uVar4 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  local_c0[0x114] = uVar4;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_8c,"noiff");
  local_8._0_1_ = 0x8e;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_8c);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_8c);
  local_c0[0xf8] = cVar2 != '\0';
  std::basic_string<>::basic_string<>(local_2c,"look");
  local_8._0_1_ = 0x8f;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_2c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_2c);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"look");
    local_8._0_1_ = 0x90;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    iVar5 = FUN_00501da0((byte *)in_stack_fffffeec);
    local_8._0_1_ = 1;
    *(int *)(local_c0 + 0x248) = iVar5;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"stealthy");
  local_8._0_1_ = 0x91;
  pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
  cVar2 = FUN_004031c0(pbVar9,&DAT_005e425c);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (cVar2 != '\0') {
    local_c0[0x115] = 1;
  }
  std::basic_string<>::basic_string<>(local_44,"dockedat");
  local_8._0_1_ = 0x92;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"dockedat");
    local_8._0_1_ = 0x93;
    pbVar11 = (basic_string<> *)FUN_00419170(&DAT_0065b530,(byte *)local_44);
    std::basic_string<>::operator=((basic_string<> *)(local_c0 + 0x118),pbVar11);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"pod");
  local_8._0_1_ = 0x94;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_44,"pod");
  if (iVar5 == 0) {
    local_8._0_1_ = 0x96;
    iVar5 = FUN_0047d0f0((byte *)local_44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
    if (iVar5 != 0) {
      uVar19 = 0;
      std::basic_string<>::basic_string<>(local_2c,"pod");
      local_8._0_1_ = 0x97;
      pbVar9 = FUN_0047d5c0((byte *)local_2c);
      iVar5 = FUN_00402460((int *)pbVar9);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar5 != 0) {
        do {
          std::basic_string<>::basic_string<>(local_44,"pod");
          local_8._0_1_ = 0x98;
          uVar12 = uVar19;
          pbVar9 = FUN_0047d5c0((byte *)local_44);
          puVar20 = (undefined4 *)FUN_00402440(pbVar9,uVar12);
          FUN_004024e0(&stack0xfffffeec,puVar20);
          local_c4 = (undefined4 *)FUN_00507890((byte *)in_stack_fffffeec);
          FUN_00412900(local_c0 + 0xfc,&local_c4);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_44);
          uVar19 = uVar19 + 1;
          std::basic_string<>::basic_string<>(local_2c,"pod");
          local_8._0_1_ = 0x97;
          pbVar9 = FUN_0047d5c0((byte *)local_2c);
          uVar12 = FUN_00402460((int *)pbVar9);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar19 < uVar12);
      }
    }
  }
  else {
    local_8._0_1_ = 0x95;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    local_c4 = (undefined4 *)FUN_00507890((byte *)in_stack_fffffeec);
    FUN_00412900(local_c0 + 0xfc,&local_c4);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
  }
  std::basic_string<>::basic_string<>(local_44,"cargo");
  local_8._0_1_ = 0x99;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  std::basic_string<>::basic_string<>(local_44,"cargo");
  if (iVar5 == 0) {
    local_8._0_1_ = 0x9d;
    iVar5 = FUN_0047d0f0((byte *)local_44);
    local_8._0_1_ = 1;
    FUN_00401b20((int *)local_44);
    if (iVar5 != 0) {
      uVar19 = 0;
      std::basic_string<>::basic_string<>(local_2c,"cargo");
      local_8._0_1_ = 0x9e;
      pbVar9 = FUN_0047d5c0((byte *)local_2c);
      iVar5 = FUN_00402460((int *)pbVar9);
      local_8._0_1_ = 1;
      FUN_00401b20((int *)local_2c);
      if (iVar5 != 0) {
        do {
          std::basic_string<>::basic_string<>(local_44,"cargo");
          local_8._0_1_ = 0x9f;
          uVar12 = uVar19;
          pbVar9 = FUN_0047d5c0((byte *)local_44);
          puVar20 = (undefined4 *)FUN_00402440(pbVar9,uVar12);
          FUN_004024e0(&stack0xfffffeec,puVar20);
          FUN_00592d70(&local_50,',',in_stack_fffffeec);
          local_8 = CONCAT31(local_8._1_3_,0xa1);
          FUN_00401b20((int *)local_44);
          iVar5 = FUN_00402460(&local_50);
          if (iVar5 == 2) {
            puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
            FUN_004024e0(&stack0xfffffeec,puVar20);
            piVar10 = (int *)FUN_004a8380((byte *)in_stack_fffffeec);
            if (piVar10 != (int *)0x0) {
              piVar10 = FUN_00420f40(local_c0 + 0x108,piVar10);
              puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
              FUN_00402490(puVar20);
              iVar5 = (*pcVar18)();
              *piVar10 = iVar5;
            }
          }
          local_8._0_1_ = 1;
          thunk_FUN_004025a0(&local_50);
          uVar19 = uVar19 + 1;
          std::basic_string<>::basic_string<>(local_2c,"cargo");
          local_8._0_1_ = 0x9e;
          pbVar9 = FUN_0047d5c0((byte *)local_2c);
          uVar12 = FUN_00402460((int *)pbVar9);
          local_8._0_1_ = 1;
          FUN_00401b20((int *)local_2c);
        } while (uVar19 < uVar12);
      }
    }
  }
  else {
    local_8._0_1_ = 0x9a;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0x9c);
    FUN_00401b20((int *)local_44);
    iVar5 = FUN_00402460(&local_50);
    if (iVar5 == 2) {
      puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
      FUN_004024e0(&stack0xfffffeec,puVar20);
      piVar10 = (int *)FUN_004a8380((byte *)in_stack_fffffeec);
      if (piVar10 != (int *)0x0) {
        piVar10 = FUN_00420f40(local_c0 + 0x108,piVar10);
        puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
        FUN_00402490(puVar20);
        iVar5 = (*pcVar18)();
        *piVar10 = iVar5;
      }
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"components");
  local_8._0_1_ = 0xa2;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"components");
    local_8._0_1_ = 0xa3;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0xa5);
    FUN_00401b20((int *)local_44);
    uVar19 = 0;
    iVar5 = FUN_00402460(&local_50);
    if (iVar5 != 0) {
      do {
        puVar20 = (undefined4 *)FUN_00402440(&local_50,uVar19);
        FUN_00403390(local_c0 + 0x23c,puVar20);
        uVar19 = uVar19 + 1;
        uVar12 = FUN_00402460(&local_50);
      } while (uVar19 < uVar12);
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"modules");
  local_8._0_1_ = 0xa6;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"modules");
    local_8._0_1_ = 0xa7;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0xa9);
    FUN_00401b20((int *)local_44);
    uVar19 = 0;
    iVar5 = FUN_00402460(&local_50);
    if (iVar5 != 0) {
      do {
        iVar5 = 0;
        pvVar8 = (void *)FUN_00402440(&local_50,uVar19);
        pcVar7 = (char *)FUN_00403440(pvVar8,iVar5);
        if (*pcVar7 == '-') {
          iVar5 = FUN_00402440(&local_50,uVar19);
          uVar12 = FUN_00403430(iVar5);
          uVar22 = 1;
          pbVar14 = local_8c;
          pvVar8 = (void *)FUN_00402440(&local_50,uVar19);
          FUN_004033e0(pvVar8,pbVar14,uVar22,uVar12);
          local_8._0_1_ = 0xaa;
          puVar17 = local_c0 + 0x224;
LAB_0046d5c1:
          FUN_00403390(puVar17,(undefined4 *)local_8c);
          local_8 = CONCAT31(local_8._1_3_,0xa9);
          FUN_00401b20((int *)local_8c);
        }
        else {
          iVar5 = 0;
          pvVar8 = (void *)FUN_00402440(&local_50,uVar19);
          pcVar7 = (char *)FUN_00403440(pvVar8,iVar5);
          if (*pcVar7 == '+') {
            iVar5 = FUN_00402440(&local_50,uVar19);
            uVar12 = FUN_00403430(iVar5);
            uVar22 = 1;
            pbVar14 = local_8c;
            pvVar8 = (void *)FUN_00402440(&local_50,uVar19);
            FUN_004033e0(pvVar8,pbVar14,uVar22,uVar12);
            local_8._0_1_ = 0xab;
            puVar17 = local_c0 + 0x230;
            goto LAB_0046d5c1;
          }
          puVar20 = (undefined4 *)FUN_00402440(&local_50,uVar19);
          FUN_00403390(local_c0 + 0x230,puVar20);
        }
        uVar19 = uVar19 + 1;
        uVar12 = FUN_00402460(&local_50);
      } while (uVar19 < uVar12);
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  std::basic_string<>::basic_string<>(local_44,"cargo");
  local_8._0_1_ = 0xac;
  iVar5 = FUN_00419130(&DAT_0065b530,(byte *)local_44);
  local_8._0_1_ = 1;
  FUN_00401b20((int *)local_44);
  if (iVar5 != 0) {
    std::basic_string<>::basic_string<>(local_44,"cargo");
    local_8._0_1_ = 0xad;
    pbVar9 = FUN_00419170(&DAT_0065b530,(byte *)local_44);
    FUN_004024e0(&stack0xfffffeec,(undefined4 *)pbVar9);
    FUN_00592d70(&local_50,',',in_stack_fffffeec);
    local_8 = CONCAT31(local_8._1_3_,0xaf);
    FUN_00401b20((int *)local_44);
    iVar5 = FUN_00402460(&local_50);
    if (iVar5 == 2) {
      puVar20 = (undefined4 *)FUN_00402440(&local_50,1);
      FUN_004024e0(&stack0xfffffeec,puVar20);
      piVar10 = (int *)FUN_004a8380((byte *)in_stack_fffffeec);
      if (piVar10 != (int *)0x0) {
        piVar10 = FUN_00420f40(local_c0 + 0x108,piVar10);
        puVar20 = (undefined4 *)FUN_00402440(&local_50,0);
        FUN_00402490(puVar20);
        iVar5 = (*pcVar18)();
        *piVar10 = iVar5;
      }
    }
    local_8._0_1_ = 1;
    thunk_FUN_004025a0(&local_50);
  }
  FUN_00412900(this,&local_c0);
LAB_0046d70a:
  FUN_00401b20((int *)local_bc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
